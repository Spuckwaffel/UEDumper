#pragma once
#include "stdafx.h"
#include "Engine/Core/EngineStructs.h"
#include "Frontend/Windows/LogWindow.h"
#include "Engine/Core/Core.h"

struct MergedPackage
{
	std::vector<EngineStructs::Package*> mergedPackages; //all packages this package contains
	EngineStructs::Package package; //the new package
};

inline std::vector<MergedPackage*> sortPackages(int& progressDone, int& totalProgress, std::vector<MergedPackage>& newPackages)
{

	//first we cast all packages to merged packages
	for (auto& pack : EngineCore::getPackages())
	{
		MergedPackage p;
		p.mergedPackages = { &pack };
		p.package = pack;
		newPackages.push_back(p);
	}

	totalProgress = newPackages.size();

	bool anyMergeFound = false;

	windows::LogWindow::Log(windows::LogWindow::logLevels::LOGLEVEL_INFO, "SORTER", "Merging packages...");

	do
	{
		progressDone = 0;
		anyMergeFound = false;
		//a new vector we fill up this round and then replace the newPackages vector
		std::vector<MergedPackage> _newPackages{};

		std::vector<MergedPackage> mergePackages{};
		//this just acts as a temporary identifier to make sure when we queue a package to be merged we dont chack that package
		//otherwise when a abd b should merge obviously b and a have to merge too resulting in a duplicate merge
		std::vector<std::string> skippedPackageDueToMerge{};

		std::vector<std::string> packagesThatHaveBeenMerged{};

		//go over all packages
		for (auto& pack : newPackages)
		{
			//skip this if package is listed as a merge with a package processed before
			if (std::ranges::find(skippedPackageDueToMerge, pack.package.packageName) != skippedPackageDueToMerge.end())
				continue;

			//reset the boolean
			bool mergefound = false;
			//go over all dependencies of the root package
			for (auto dependencyPackage : pack.package.dependencyPackages)
			{
				//go over all dependencies of the dependency package
				for (auto& dependencyOfDependencyPackage : dependencyPackage->dependencyPackages)
				{
					//is the dependency of the depend package in the merge pack?
					//if not, continue
					if (std::ranges::find(pack.mergedPackages, dependencyOfDependencyPackage) == pack.mergedPackages.end())
						continue;

					//if it is in, we have a cyclic dependency

					windows::LogWindow::Log(windows::LogWindow::logLevels::LOGLEVEL_INFO, "MDK GEN",
						"merge found with %s and %s origin %s", dependencyPackage->packageName.c_str(), dependencyOfDependencyPackage->packageName.c_str(), pack.package.packageName.c_str());


					anyMergeFound = true;
					mergefound = true;
					//add him to the merges
					pack.mergedPackages.push_back(dependencyPackage);
					skippedPackageDueToMerge.push_back(dependencyPackage->packageName);

					//break operation, once we found once cycle in a dependency, we dont have to look for more in the same dependency
					break;
				}

				//obviously dont break here, we have to look at the other dependencies if they are cyclic too

			}

			skippedPackageDueToMerge.push_back(pack.package.packageName);

			//if a merge has been found, recreate the entire package
			if (mergefound)
			{
				MergedPackage p;
				//create a unique index
				p.package.index = newPackages.size() + 10000 + mergePackages.size();
				//first sort out own references and remove dups
				std::set<EngineStructs::Package*> totalDependencyPackage;
				std::string name = "merged";
				//merge all the mininal needed stuff together
				for (auto& mergedpack : pack.mergedPackages)
				{
					name += "_" + mergedpack->packageName;
					//add da items to the new mergedpackage
					p.package.enums.insert(p.package.enums.end(), mergedpack->enums.begin(), mergedpack->enums.end());
					p.package.combinedStructsAndClasses.insert(p.package.combinedStructsAndClasses.end(), mergedpack->combinedStructsAndClasses.begin(), mergedpack->combinedStructsAndClasses.end());
					for (auto& dependencyPackage : mergedpack->dependencyPackages)
					{
						//skip these packages that get merged, so if 1 and 2 merge, 2 needs 1 and 1 needs 2 get skipped
						if (std::ranges::find(pack.mergedPackages, dependencyPackage) == pack.mergedPackages.end())
						{
							totalDependencyPackage.insert(dependencyPackage);
						}
					}
				}
				//merge mergedPackages, this is in general just 1 or 2
				p.mergedPackages.insert(p.mergedPackages.end(), pack.mergedPackages.begin(), pack.mergedPackages.end());
				p.package.packageName = name;
				//add the depenencies
				for (auto& dependencyPackage : totalDependencyPackage)
				{
					p.package.dependencyPackages.insert(dependencyPackage);
				}
				_newPackages.push_back(p);
				mergePackages.push_back(p);

			}
			//no merge? just add
			else
				_newPackages.push_back(pack);

			progressDone++;
		}

		//clear the vector and overwrite
		newPackages.clear();

		//we use this to already detect duplicate merges and to clear out any packages that got added before merged
		//ie if a solo package got added into the vector before it got merged with other pkgs, it can stay there forever
		//because merges will be always last in the loop

		if (mergePackages.size() > 0)
		{
			//clean package array, we will use this to push our stuff
			std::vector<MergedPackage> cleanedPackages{};

			//a set of package indexes we blacklist to then filter out
			std::unordered_set<int> blacklistedPkgs;

			//iterate over all newly mereged packages
			for (auto& pack : mergePackages)
			{
				//we do this so we prevent two merged packages blacklisting each other
				if (blacklistedPkgs.contains(pack.package.index))
					continue;

				//flag whether this package already blacklisted one package
				bool blacklistedOne = false;

				//now we iterate over all new packages (containing single packages too)
				for (auto& cmpPack : _newPackages)
				{
					//if the blacklist contains this package, we ignore it
					if (blacklistedPkgs.contains(cmpPack.package.index))
						continue;

					//we looking at the exact same package?
					if (cmpPack.package.index == pack.package.index)
						continue;

					//we will continue to blacklist solo packages but not any merged ones as that should do a completely new round so we dont break something
					if (blacklistedOne && cmpPack.mergedPackages.size() > 1)
						continue;

					auto isSubset = [&](const std::vector<EngineStructs::Package*>& v1, const std::vector<EngineStructs::Package*>& v2, bool& ownOneSmaller) {
						const auto& largeVec = v1.size() > v2.size() ? v1 : v2;
						std::unordered_set largerSet(largeVec.begin(), largeVec.end());

						ownOneSmaller = v1.size() <= v2.size();

						const auto& smallVec = v1.size() <= v2.size() ? v1 : v2;

						for (auto& num : smallVec) {
							if (!largerSet.contains(num)) {
								return false;
							}
						}
						return true;
					};

					//check if a package is a subset of the other
					//this way we will let packages continue to build if they contain different packages, ie
					//package a: a, b, c, d
					//package b: b, d, f, g, h
					//as they will find their way sooner or later
					//otherwise we will just break one package and the recent merged packages like a, c get just lost
					//as they will not appear in the next loop anymore
					bool ownOneSmaller = false;
					if(isSubset(pack.mergedPackages, cmpPack.mergedPackages, ownOneSmaller))
					{
						//blacklist the smaller package / the one which is the subset
						blacklistedPkgs.insert(ownOneSmaller ? pack.package.index : cmpPack.package.index);
						//we set this flag again just to check again
						anyMergeFound = true;
						//if our own one is smaller we have to break and cant blacklist more, this will break everything and packages get lost
						if (ownOneSmaller)
							break;
						blacklistedOne = true;
					}
				}
			}

			for (auto& cmpPack : _newPackages)
			{
				if (blacklistedPkgs.contains(cmpPack.package.index))
					continue;

				cleanedPackages.push_back(cmpPack);
			}

			newPackages.insert(newPackages.end(), cleanedPackages.begin(), cleanedPackages.end());
		}
		else
			newPackages.insert(newPackages.end(), _newPackages.begin(), _newPackages.end());

	} while (anyMergeFound);

	progressDone = 0;
	totalProgress = newPackages.size();

	//now we reorder the structs inside the package so the compiler doesnt throw errors
	windows::LogWindow::Log(windows::LogWindow::logLevels::LOGLEVEL_INFO, "SORTER", "Reordering structs");

	bool didReordering = false;
	int kk = 0;
	do
	{
		windows::LogWindow::Log(windows::LogWindow::logLevels::LOGLEVEL_INFO, "SORTER", "%d", kk++);
		didReordering = false;

		//iterate through all packages
		for (auto& [mergedPackages, package] : newPackages)
		{
			//if (package.packageName == "SlateCore")
			//	DebugBreak();
			//create a vector that holds all structs and classes ordered
			std::vector<EngineStructs::Struct*> orderedStructsAndClasses;
			//package.combinedStructsAndClasses contains ALL structs and classes from ALL merged packages at this point
			for (auto& item : package.combinedStructsAndClasses)
			{
				auto currentIt = std::ranges::find(
					orderedStructsAndClasses, item);
				//is the current struct not found in the ordered list? then add it
				if (currentIt == orderedStructsAndClasses.end())
				{
					orderedStructsAndClasses.push_back(item);
				}

				currentIt = std::ranges::find(
					orderedStructsAndClasses, item);

				//check if the needed struct is in the package
				//if not, we are done here, if yes, we have to check if the needed struct is defined before the current struct
				//otherwise compiler will throw an error
				//tldr order:
				// struct a
				// struct b : a
				// or
				// struct c { a member1, a member2}
				// works both for inheritance and any struct
				auto fixOrder = [&](EngineStructs::Struct* neededStruct) mutable
					{
						//is it not in our package? then theres nothing we have to do
						if (std::ranges::find(mergedPackages, neededStruct->owningPackage) == mergedPackages.end())
							return;

						//now we get the position of the item
						const auto neededIt = std::ranges::find(orderedStructsAndClasses, neededStruct);

						//is it before defined? then nothing we have to do
						if (neededIt <= currentIt)
							return;

						//set the rorder flag
						didReordering = true;

						//not in the list?
						if (neededIt == orderedStructsAndClasses.end())
						{
							//add it before, this ensures it will be defined before
							//fix the iterator

							printf("%d - %s: added %s before %s\n", kk, package.packageName.c_str(), neededStruct->cppName.c_str(), (*currentIt)->cppName.c_str());

							orderedStructsAndClasses.insert(currentIt, neededStruct);
							currentIt = std::ranges::find(
								orderedStructsAndClasses, item);

							return;
						}

						//its defined but too high up
						const auto it = *neededIt;

						printf("%d - %s: added %s before %s\n", kk, package.packageName.c_str(), it->cppName.c_str(), (*currentIt)->cppName.c_str());
						orderedStructsAndClasses.erase(neededIt);
						//fix the iterator
						orderedStructsAndClasses.insert(currentIt, it);
						currentIt = std::ranges::find(
							orderedStructsAndClasses, item);
					};

				//if the class or struct has no inheritance we skip this
				if (item->inherited)
				{
					//if the item is inherited check the super
					fixOrder(item->supers[0]);
				}


				//now we do the same check for every member
				for (int i = 0; i < item->cookedMembers.size(); i++)
				{
					const auto member = item->getMemberForIndex(i);
					//if the member is not clickable its prob some bool or int
					if (!member->type.clickable)
						continue;


					//these types are always pointers to classes or structs. They arent really a dependency as the compiler will know
					//it will be 8 bytes large
					if (member->type.propertyType == PropertyType::ObjectProperty || member->type.propertyType == PropertyType::ClassProperty)
						continue;

					//is the type a unknown type? Nothing we can do about it, SDK will handle it via macro (see SDK_UNDEFINED in SDK.cpp)
					//unknown type means info.valid is false
					auto info = member->type.info;
					if (!info || !info->valid)
						continue;



					//if the type is function (never happens) or enum, we can ignore.
					//enums are always at the top of the file
					if (info->type == ObjectInfo::OI_Class || info->type == ObjectInfo::OI_Struct)
					{
						auto typeItem = static_cast<EngineStructs::Struct*>(info->target);
						fixOrder(typeItem);
					}

					for (auto& sub : member->type.subTypes)
					{
						auto subInfo = sub.info;
						if (!subInfo || !subInfo->valid)
							continue;

						if (sub.propertyType == PropertyType::ObjectProperty || sub.propertyType == PropertyType::ClassProperty)
							continue;

						if (subInfo->type == ObjectInfo::OI_Class || subInfo->type == ObjectInfo::OI_Struct)
						{
							auto typeItem = static_cast<EngineStructs::Struct*>(subInfo->target);
							fixOrder(typeItem);
						}
					}

				}
			}
			//we have to create new vecotr, if we erase item vector now, pointers are invalid
			std::vector<EngineStructs::Struct*> newitems;
			for (auto& pair : orderedStructsAndClasses)
			{
				newitems.push_back(pair);
			}
			package.combinedStructsAndClasses.clear();
			package.combinedStructsAndClasses.insert(package.combinedStructsAndClasses.begin(), newitems.begin(), newitems.end());

			progressDone++;
		}

	} while (didReordering);


	windows::LogWindow::Log(windows::LogWindow::logLevels::LOGLEVEL_INFO, "MDK GEN", "Reordering packages");
	std::vector<MergedPackage*> orderedPackages;

	constexpr auto one_thousand = 1000;
	// Max number of iterations before we give up
	// Using some very large number - it's to prevent infinite loops, not break too early before convergence
	constexpr auto maxIterations = 20 * one_thousand;
	progressDone = 0;
	totalProgress = maxIterations; // Note: we may converge before this and end up with a Microsoft style progress bar that magically jumps to 100% while (didReordering && progressDone < totalProgress);

	do
	{
		progressDone++;
		//reset flags
		didReordering = false;

		for (auto& p : newPackages)
		{
			windows::LogWindow::Log(windows::LogWindow::logLevels::LOGLEVEL_INFO, "MDK GEN", "fixing package imports of %s", p.package.packageName.c_str());
			auto currentPackageIt = std::ranges::find(
				orderedPackages, &p);

			//is it not in? then add
			if (currentPackageIt == orderedPackages.end())
			{
				orderedPackages.push_back(&p);
				currentPackageIt = orderedPackages.end() - 1;
			}
			for (auto& neighbour : p.package.dependencyPackages)
			{
				//iterate through all merged package until we find the neighbour this class needs, so
				//we can ensure the dependeny is before our current packafwe
				for (auto& p_ : newPackages)
				{
					//check the mergedpackages if this is the package were actually looking for
					//we have to look through the merged because maybe the package we need as dependency is merged with another package
					if (std::ranges::find(p_.mergedPackages, neighbour) != p_.mergedPackages.end())
					{
						auto neededPackageIt = std::ranges::find(orderedPackages, &p_);

						//is the needed package too high up?
						if (neededPackageIt > currentPackageIt) //also if that merge is not in the list before
						{
							//set reordering flag to recheck the loop again
							didReordering = true;
							//not in?
							if (neededPackageIt == orderedPackages.end())
							{
								//printf("inserting %s before %s because it needs it and isnt in it or above\n", p_.package.packageName.c_str(), p.package.packageName.c_str());
								orderedPackages.insert(currentPackageIt, &p_);
								currentPackageIt = std::ranges::find(
									orderedPackages, &p);
								break;
								//currentPackageIt = orderedPackages.end() - 1;
							}

							//looks like its in but not low enough
							auto it = *neededPackageIt;
							//erase the entry
							orderedPackages.erase(neededPackageIt);
							//get the current it
							currentPackageIt = std::ranges::find(
								orderedPackages, &p);
							//and insert it before
							orderedPackages.insert(currentPackageIt, it);
							currentPackageIt = std::ranges::find(
								orderedPackages, &p);
							break;
							//std::rotate(currentPackageIt, neededPackageIt, neededPackageIt + 1);
							//printf("inserted %s before %s because it was too high up\n", newNeededPackageIt.operator*()->package.packageName.c_str(), currentPackageIt.operator*()->package.packageName.c_str());
						}
					}

				}
			}
		}
	} while (didReordering && progressDone < totalProgress);
	if (didReordering)
	{
		windows::LogWindow::Log(windows::LogWindow::logLevels::LOGLEVEL_ERROR, "MDK GEN", "Unable to resolve cyclic import dependencies after %.2fK iterations", progressDone / one_thousand);
	}
	else
	{
		windows::LogWindow::Log(windows::LogWindow::logLevels::LOGLEVEL_INFO, "MDK GEN", "Converged imports after %.2fK iterations", progressDone / one_thousand);
		progressDone = totalProgress;
	}

	return orderedPackages;
}