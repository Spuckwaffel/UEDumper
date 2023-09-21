#include "MDK.h"

#include <set>

#include "Engine/structs.h"
#include "Engine/Core/Core.h"
#include "Engine/Core/EngineStructs.h"
#include "Engine/Userdefined/Datatypes.h"
#include "Frontend/Windows/LogWindow.h"
#include "Settings/EngineSettings.h"
#include "BasicType.h"

void MDKGeneration::printCredits(std::ofstream& stream)
{
	stream <<
		R"(
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

)";
}

void MDKGeneration::generatePackage(std::ofstream& stream, const EngineStructs::Package& package)
{
	//flag some invalid characters in a name
	auto generateValidVarName = [](const std::string& str)
	{
		std::string result = "";
		for (const char c : str)
		{
			if (static_cast<int>(c) < 0 || !std::isalnum(c))
				result += '_';
			else
				result += c;

		}
		//guaranteed 0 termination
		return result;
	};

	for(auto& dependencies : package.dependencyPackages)
	{
		stream << "/// dependency: " << dependencies->packageName << std::endl;
	}

	stream << "\n";

	auto generateStruct = [&](const std::vector<EngineStructs::Struct*> DataStruc)
	{
		
		for (const auto& struc : DataStruc)
		{
			//stop fucking dupes
			if (std::ranges::find(allnames, generateValidVarName(struc->cppName)) != allnames.end())
				continue;
			allnames.push_back(generateValidVarName(struc->cppName));
			
			if (struc->isClass)
				stream << "/// Class " << struc->fullName << std::endl;
			else
				stream << "/// Struct " << struc->fullName << std::endl;
			char buf[100] = { 0 };
			sprintf_s(buf, "Size: 0x%04X (0x%06X - 0x%06X)", struc->size - struc->inheretedSize, struc->inheretedSize, struc->size);
			stream << "/// " << buf << std::endl;
			//if (struc.isClass)
			stream << "class " << generateValidVarName(struc->cppName);
			//else
			//    file << "struct " << struc.cppName;

			if (struc->inherited)
				stream << " : public " << generateValidVarName(struc->supers[0]->cppName);
			//else if (struc.inherited)
			//    file << " : " << struc.supers[0];
			else if (!struc->inherited && struc->isClass)
				stream << " : public MDKBase";
			else if (!struc->inherited && !struc->isClass)
				stream << " : public MDKStruct";

			stream << "\n{ " << std::endl;

			if (struc->isClass)
				stream << "	friend MDKHandler;\n";
			else
				stream << "	friend MDKBase;\n";
			stream << "	static inline constexpr uint64_t __MDKClassSize = " << struc->size << ";\n\n";

			//if (struc.isClass)
			stream << "public:" << std::endl;

			std::unordered_map<std::string, int> alreadyDefinedMembers{};


			for (const auto& member : struc->cookedMembers)
			{
				if (member.missed)
					continue;
				char finalBuf[600];

				std::string memberName = member.name;
				if (member.name.empty())
					memberName = "noname";

				std::string macroType;
				if (member.type.name[0] == 'F')
					macroType = "SMember(" + member.type.stringify() + ")";
				else if (!member.type.clickable)
					macroType = "DMember(" + member.type.stringify() + ")";
				else
					macroType = "CMember(" + member.type.stringify() + ")";

				char nameBuf[500];
				
				if (memberName == "bool" || memberName == "char" || memberName == "int" || memberName == "float" || memberName == "TRUE" || memberName == "FALSE") {
					memberName += "_";
				}
				if (alreadyDefinedMembers.contains(memberName))
				{
					int j = alreadyDefinedMembers[memberName];
					alreadyDefinedMembers[memberName]++;
					memberName += std::to_string(j);
				}
				else
					alreadyDefinedMembers.insert(std::pair(memberName, 1));


				if (std::isdigit(memberName[0]))
					memberName.insert(0, 1, '_');

				sprintf_s(nameBuf, "%-50s %s", macroType.c_str(), memberName.c_str());


				if (!member.type.clickable)
					sprintf_s(finalBuf, "	%-110s OFFSET(get<%s>, {0x%X, %d, %d, %d})", nameBuf, member.type.stringify().c_str(), member.offset, member.size, member.isBit, member.bitOffset);
				else sprintf_s(finalBuf, "	%-110s OFFSET(get<T>, {0x%X, %d, %d, %d})", nameBuf, member.offset, member.size, member.isBit, member.bitOffset);
				stream << finalBuf << std::endl;
			}
			stream << "};\n\n";

			// Add function section header
			if (!struc->functions.empty())
			{
				stream << "\n\n\t/// Functions" << std::endl;
			}

			for (const auto& func : struc->functions)
			{
				stream << "\t// Function " << func.fullName << std::endl;
				char funcBuf[1200];
				std::string params = func.returnType.stringify() + " " + func.cppName.c_str() + "(";
				for (auto param : func.params)
				{
					params += std::get<0>(param).stringify();
					if (std::get<3>(param) > 1)
						params += "*";
					else if (std::get<2>(param) & EPropertyFlags::CPF_OutParm)
						params += "&";
					params += " " + std::get<1>(param) + ", ";
				}
				if (func.params.size() > 0)
					params = params.erase(params.size() - 2);
				params += ");";



				sprintf_s(funcBuf, "	// %-120s // [0x%llx] %-20s ", params.c_str(), func.binaryOffset, func.functionFlags.c_str());
				stream << funcBuf << std::endl;
			}

		}
	};

	generateStruct(package.combinedStructsAndClasses);


	for (const auto& enu : package.enums)
	{
		stream << "/// Enum " << enu.fullName << std::endl;
		char buf[100] = { 0 };
		sprintf_s(buf, "Size: 0x%02d", enu.members.size());
		stream << "/// " << buf << std::endl;
		stream << "enum " << enu.cppName << " : " << enu.type << std::endl;
		stream << "{" << std::endl;
		int j = 0;
		int i = 0;
		for (const auto& member : enu.members)
		{
			j++;
			char memberBuf[300];

			std::string fir = member.first + std::to_string(i++);

			sprintf_s(memberBuf, "	%-80s = %d%s", fir.c_str(), member.second, j == enu.members.size() ? "" : ",");
			stream << memberBuf << std::endl;
		}
		stream << "};\n\n";
	}
}

MDKGeneration::MDKGeneration()
{
	
}

void MDKGeneration::generate(int& progressDone, int& totalProgress)
{
	progressDone = 0;
	totalProgress = 10;
	windows::LogWindow::Log(windows::LogWindow::log_2, "MDK GEN", "Baking MDK...");

	SDKPath = EngineSettings::getWorkingDirectory() / "MDK";
	if (!create_directories(SDKPath))
		remove_all(SDKPath);

	//the master header contains all the imports sorted
	std::ofstream masterHeader(SDKPath / "MDKImports.h");

	//yes, so all the SDK files are in path/to/stuff/MDK/MDK/
	//because i can imagine theres some stupid game that has a package called SDK and that would ruin our master file
	//so it will look like this
	/// path/to/shit/
	///				-> MDK/
	///					  -> MDK.h					// master header you will include
	///					  -> MDK/					// folder with all the packages
	///							-> Engine.h			//random package by the game
	///							-> XGame.h			//random package by the game
	///							-> CoreUObject.h	//random package by the game
	///							...
	///
	SDKPath = SDKPath / "MDK";
	if (!create_directories(SDKPath))
		remove_all(SDKPath);



	masterHeader <<
		R"(
/********************************************************
*                                                       *
*     MDK generated using UEDumper by Spuckwaffel.		*
*                                                       *
********************************************************/

/// Include this file into your project.
/// If there are still structs missing, read the Engine/Generation/BasicType file.
/// All manual defined structs are in BasicType.h

#include <string>

// base class
#include "../MDK.h"

)";

	struct MergedPackage
	{
		std::vector<EngineStructs::Package*> mergedPackages;
		EngineStructs::Package package;
	};

	std::vector<MergedPackage> newPackages;

	for (auto& pack : EngineCore::getPackages())
	{
		MergedPackage p;
		p.mergedPackages = { &pack };
		p.package = pack;
		newPackages.push_back(p);
	}

	totalProgress = newPackages.size();

	bool anyMergeFound = false;

	windows::LogWindow::Log(windows::LogWindow::log_2, "MDK GEN", "Merging packages...");
	do
	{
		progressDone = 0;
		anyMergeFound = false;
		std::vector<MergedPackage> _newPackages{};
		//this just acts as a temporary identifier, it just has to be smth unique per package
		std::vector<std::string> skippedPackageDueToMerge{};
		for (auto& pack : newPackages)
		{
			//skip this if package is listed as a merge with a package processed before
			if (std::ranges::find(skippedPackageDueToMerge, pack.package.packageName) != skippedPackageDueToMerge.end())
				continue;
			bool mergefound = false;
			for (auto& neighbour : pack.package.dependencyPackages)
			{
				for (auto& neighbourNeighbour : neighbour->dependencyPackages)
				{
					if (std::ranges::find(pack.mergedPackages, neighbourNeighbour) != pack.mergedPackages.end())
					{
						windows::LogWindow::Log(windows::LogWindow::log_2, "MDK GEN", "merge found with %s and %s origin %s", neighbour->packageName.c_str(), neighbourNeighbour->packageName.c_str(), pack.package.packageName.c_str());

						anyMergeFound = true;
						mergefound = true;
						//add him to the merges
						pack.mergedPackages.push_back(neighbour);
						skippedPackageDueToMerge.push_back(neighbour->packageName);

						break;
					}
				}
			}
			//if a merge has been found, recreate the entire package
			if (mergefound)
			{
				MergedPackage p;
				//first sort out own references and remove dups
				std::set<EngineStructs::Package*> neighbours;
				std::string name = "merged";
				for (auto& mergedpack : pack.mergedPackages)
				{
					name += "_" + mergedpack->packageName;
					//add da items
					p.package.enums.insert(p.package.enums.end(), mergedpack->enums.begin(), mergedpack->enums.end());
					p.package.combinedStructsAndClasses.insert(p.package.combinedStructsAndClasses.end(), mergedpack->combinedStructsAndClasses.begin(), mergedpack->combinedStructsAndClasses.end());
					for (auto& neighbour : mergedpack->dependencyPackages)
					{
						//skip these packages that get merged, so if 1 and 2 merge, 2 neighbour 1 and 1 neighbour 2 get skipped
						if (std::ranges::find(pack.mergedPackages, neighbour) == pack.mergedPackages.end())
						{
							neighbours.insert(neighbour);
						}
					}
				}
				p.mergedPackages.insert(p.mergedPackages.end(), pack.mergedPackages.begin(), pack.mergedPackages.end());
				p.package.packageName = name;
				//add them 
				for (auto& neighbour : neighbours)
				{
					p.package.dependencyPackages.insert(neighbour);
				}
				_newPackages.push_back(p);

			}
			else
				_newPackages.push_back(pack);

			progressDone++;
		}
		newPackages.clear();
		newPackages.insert(newPackages.end(), _newPackages.begin(), _newPackages.end());
	} while (anyMergeFound);

	progressDone = 0;
	totalProgress = newPackages.size();

	windows::LogWindow::Log(windows::LogWindow::log_2, "MDK GEN", "Eliminating double merges....");
	bool eraseDone = false;
	do
	{
		eraseDone = false;

		for (auto& p : newPackages)
		{
			int tracker = -1;
			for (auto& p1 : newPackages)
			{
				tracker++;
				if (p.package.packageName == p1.package.packageName)
					continue;
				if (p.mergedPackages.size() != p1.mergedPackages.size())
					continue;



				std::ranges::sort(p.mergedPackages);
				std::ranges::sort(p1.mergedPackages);
				if (p.mergedPackages == p1.mergedPackages)
				{
					windows::LogWindow::Log(windows::LogWindow::log_2, "MDK GEN", "deleted %s because its same to %s\n", p1.package.packageName.c_str(), p.package.packageName.c_str());
					//printf("deleted %s because its same to %s\n", p1.package.packageName.c_str(), p.package.packageName.c_str());

					//delete p1 package
					newPackages.erase(newPackages.begin() + tracker);
					eraseDone = true;
					break;
				}

			}
			if (eraseDone)
				break;
		}
	} while (eraseDone);

	progressDone = 0;
	totalProgress = newPackages.size();
	windows::LogWindow::Log(windows::LogWindow::log_2, "MDK GEN", "Reordering structs");

	for (auto& p : newPackages)
	{
		progressDone++;
		std::vector<EngineStructs::Struct*> orderedStructsAndClasses;
		for (auto& item : p.package.combinedStructsAndClasses)
		{
			auto currentIt = std::ranges::find(
				orderedStructsAndClasses, item);
			//is it not in? then add
			if (currentIt == orderedStructsAndClasses.end())
			{
				orderedStructsAndClasses.push_back(item);
				currentIt = orderedStructsAndClasses.end() - 1;
			}
			if (item->inherited > 0) // inherited
			{
				if (std::ranges::find(p.mergedPackages, item->supers[0]->owningPackage) != p.mergedPackages.end())
				{
					if (std::ranges::find(orderedStructsAndClasses, item->supers[0]) > currentIt)
					{
						orderedStructsAndClasses.insert(currentIt, item->supers[0]);
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
		p.package.combinedStructsAndClasses.clear();
		p.package.combinedStructsAndClasses.insert(p.package.combinedStructsAndClasses.begin(), newitems.begin(), newitems.end());

	}

	windows::LogWindow::Log(windows::LogWindow::log_2, "MDK GEN", "Reordering packages");
	std::vector<MergedPackage*> orderedPackages;
	bool didReordering = false;
	do
	{
		progressDone = 0;
		didReordering = false;
		for (auto& p : newPackages)
		{
			progressDone++;
			windows::LogWindow::Log(windows::LogWindow::log_2, "MDK GEN", "fixing package imports of %s", p.package.packageName.c_str());
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
						if (neededPackageIt > currentPackageIt) //also if that merge is not in the list before
						{
							didReordering = true;
							if (neededPackageIt == orderedPackages.end())
							{
								//printf("inserting %s before %s because it needs it and isnt in it or above\n", p_.package.packageName.c_str(), p.package.packageName.c_str());
								orderedPackages.insert(currentPackageIt, &p_);
								currentPackageIt = std::ranges::find(
									orderedPackages, &p);
								break;
								//currentPackageIt = orderedPackages.end() - 1;
							}
							else
							{
								auto it = *neededPackageIt;
								orderedPackages.erase(neededPackageIt);
								currentPackageIt = std::ranges::find(
									orderedPackages, &p);
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
		}
	} while (didReordering);


	puts("------sorted packages------");
	for (auto& pack : orderedPackages)
	{
		printf("%s\n", pack->package.packageName.c_str());
	}
	puts("---------------------------");

	progressDone = 0;
	for (auto& pack : orderedPackages)
	{
		windows::LogWindow::Log(windows::LogWindow::log_2, "MDK GEN", "Baking package %s", pack->package.packageName.c_str());
		masterHeader << "#include \"MDK/" + pack->package.packageName + ".h\"" << std::endl;
		std::string packageName = pack->package.packageName + ".h";
		std::ofstream package(SDKPath / packageName);
		printCredits(package);
		generatePackage(package, pack->package);
		package.close();
		progressDone++;
	}
	masterHeader.close();

	progressDone = totalProgress;
}

/*
//gets a package name that gets looked for and then returns a possible merged name
	std::unordered_map<std::string, std::string> packagesThatGotMerged;
	std::vector<EngineStructs::Package> packagesButMergeResolved;
	std::vector<EngineStructs::Package> bakedAndOrderedPackages;

	auto getMergedName = [&](const EngineStructs::Package* one, const EngineStructs::Package* two)
	{
		return std::string("merged" + one->packageName + "_" + two->packageName);
	};

	for(auto& currentPackage : EngineCore::getPackages())
	{
		//skip if our current package is already in, only happens when the package is a cycling one with a added one
		if (packagesThatGotMerged.contains(currentPackage.packageName))
			continue;
		bool multiplecombine = false;
		//contains al list of all combining packages, first one of course basic class
		std::vector<EngineStructs::Package*> combiningPackages;
		combiningPackages.push_back(&currentPackage);

		//first go through all the dependencies
		for(const auto& ownDepencendyPackage : currentPackage.dependencyPackages)
		{
			//now get the dependencies from that package
			for(const auto& dependencyPackageFromOwnDepencendyPackage : ownDepencendyPackage->dependencyPackages)
			{
				//is there a dependency that is in the combined list? (own package or previous found cycles)
				//so if own and abc cycles
				//and this one contains any dependency from own or abc, we gotta add
				//because then at the end own, this and abc have to be merged
				for(auto& combiningPackage : combiningPackages)
				{
					if(dependencyPackageFromOwnDepencendyPackage == combiningPackage)
					{
						windows::LogWindow::Log(windows::LogWindow::log_2, "MDK GEN", "Combined classes %s from root (needed: %s ) %s due to cyclic dependencies", dependencyPackageFromOwnDepencendyPackage->packageName.c_str(), combiningPackage->packageName.c_str(),currentPackage.packageName.c_str());
						combiningPackages.push_back(dependencyPackageFromOwnDepencendyPackage);
						multiplecombine = true;
						break;
					}
				}
				//cycling?
				//if(_dependencyPackages->index == currentPackage.index)
				//{
				//	if()
				//	//this only happens with a third cycle
				//	//so lets say we merged ab with cd
				//	//and now de needs shit from ab and other too
				//	if(packagesThatGotMerged.contains(_dependencyPackages->packageName))
				//	{
				//
				//	}
				//	combiningPackage.pu = _dependencyPackages;
				//	windows::LogWindow::Log(windows::LogWindow::log_2, "MDK GEN", "Combined classes %s and %s due to cyclic dependencies", _dependencyPackages->packageName.c_str(), currentPackage.packageName);
				//	packagesThatGotMerged.insert(std::pair(_dependencyPackages->packageName, getMergedName(combiningPackage, &currentPackage)));
				//	packagesThatGotMerged.insert(std::pair(currentPackage.packageName, getMergedName(combiningPackage, &currentPackage)));
				//	combine = true;
				//	break;
				//}
			}
		}
		if(multiplecombine)
		{
			EngineStructs::Package mergedPack;
			mergedPack.packageName = packagesThatGotMerged[currentPackage.packageName];

			//thats all needed for a barebones package

			//mergedPack.functions.reserve(combiningPackage->functions.size() + currentPackage.functions.size());
			//mergedPack.functions.insert(mergedPack.functions.end(), combiningPackage->functions.begin(), combiningPackage->functions.end());
			//mergedPack.functions.insert(mergedPack.functions.end(), currentPackage.functions.begin(), currentPackage.functions.end());
			mergedPack.combinedStructsAndClasses.reserve(combiningPackage->combinedStructsAndClasses.size() + currentPackage.combinedStructsAndClasses.size());
			mergedPack.combinedStructsAndClasses.insert(mergedPack.combinedStructsAndClasses.end(), combiningPackage->combinedStructsAndClasses.begin(), combiningPackage->combinedStructsAndClasses.end());
			mergedPack.combinedStructsAndClasses.insert(mergedPack.combinedStructsAndClasses.end(), currentPackage.combinedStructsAndClasses.begin(), currentPackage.combinedStructsAndClasses.end());
			mergedPack.enums.reserve(combiningPackage->enums.size() + currentPackage.enums.size());
			mergedPack.enums.insert(mergedPack.enums.end(), combiningPackage->enums.begin(), combiningPackage->enums.end());
			mergedPack.enums.insert(mergedPack.enums.end(), currentPackage.enums.begin(), currentPackage.enums.end());
			mergedPack.dependencyPackages.reserve(combiningPackage->dependencyPackages.size() + currentPackage.dependencyPackages.size());
			mergedPack.dependencyPackages.insert(mergedPack.dependencyPackages.end(), combiningPackage->dependencyPackages.begin(), combiningPackage->dependencyPackages.end());
			mergedPack.dependencyPackages.insert(mergedPack.dependencyPackages.end(), currentPackage.dependencyPackages.begin(), currentPackage.dependencyPackages.end());

			packagesButMergeResolved.push_back(mergedPack);
		}
		else
		{
			packagesButMergeResolved.push_back(currentPackage);
		}
	}

	for(auto& package : packagesButMergeResolved)
	{
		std::vector<EngineStructs::Struct*> orderedStructs;
		for(auto& clas : package.combinedStructsAndClasses)
		{
			auto currentClassIt = std::ranges::find(
				orderedStructs, clas);
			//is it not in? then add
			if (currentClassIt == orderedStructs.end())
			{
				orderedStructs.push_back(clas);
				//let the iterator point to this
				--currentClassIt;
			}
			if(clas->inherited)
			{
				auto super = clas->supers[0];
				//same package?
				bool same = false;
				if (super->owningPackage->packageName == package.packageName)
					same = true;
				else if (packagesThatGotMerged.contains(super->owningPackage->packageName) && packagesThatGotMerged[super->owningPackage->packageName] == package.packageName)
					same = true;
				if(same)
				{
					//not in the list or above current?
					if (auto it = std::ranges::find(orderedStructs, super); it > currentClassIt)
					{
						//insert it before our current one
						orderedStructs.insert(currentClassIt, super);
					}
				}
				//else just ignore lol
			}
		}
	}
*/
