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

void MDKGeneration::generateBasicType()
{
	std::ofstream BasicType(SDKPath / "BasicType.h");
	const auto& defs = basicDefinitions();
	auto noDefs = EngineCore::getAllUnknownTypes();
	for (const auto& [name, definition] : defs)
		if (auto it = std::ranges::find(noDefs, name); it != noDefs.end())
			noDefs.erase(it);

	printCredits(BasicType);
	BasicType << "/// This file contains all definitions of structs that werent defined automatically.\n\n";

	auto addIfCustom = [&](const char* base, const char* user)
	{
		if (strcmp(base, user) != 0)
		{
			BasicType << "typedef " << base << " " << user << ";\n";
		}
	};

	addIfCustom("bool", TYPE_BOOLEAN);
	addIfCustom("unsigned char", TYPE_UCHAR);
	addIfCustom("char", TYPE_CHAR);
	addIfCustom("uint8_t", TYPE_UI8);
	addIfCustom("uint16_t", TYPE_UI16);
	addIfCustom("uint32_t", TYPE_UI32);
	addIfCustom("uint64_t", TYPE_UI64);
	addIfCustom("int8_t", TYPE_I8);
	addIfCustom("int16_t", TYPE_I16);
	addIfCustom("int32_t", TYPE_I32);
	addIfCustom("int64_t", TYPE_I64);
	addIfCustom("float", TYPE_FLOAT);
	addIfCustom("double", TYPE_DOUBLE);

	BasicType << "\n\n";


	for (const auto& missingDef : noDefs)
	{
		windows::LogWindow::Log(windows::LogWindow::logLevels::LOGLEVEL_INFO, "MDK GEN", "Info: Missing definition for struct %s", missingDef.c_str());
		BasicType << "//TODO: Define " << missingDef << "!\n\n\n";
	}

	for (const auto& [name, definition] : defs)
	{
		BasicType << "/// Definition for " << name << "\n";
		BasicType << definition << "\n\n";
	}
	BasicType.close();
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

	for (auto& dependencies : package.dependencyPackages)
	{
		stream << "/// dependency: " << dependencies->packageName << std::endl;
	}

	stream << "\n";

	auto generateStruct = [&](const std::vector<EngineStructs::Struct*>& DataStruc)
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
			else if (!struc->inherited)
				stream << " : public MDKBase";

			stream << "\n{ " << std::endl;

			stream << "	friend MDKHandler;\n";
			if (!struc->isClass)
				stream << "	friend MDKBase;\n";
			stream << "	static inline constexpr uint64_t __MDKClassSize = " << struc->size << ";\n\n";

			//if (struc.isClass)
			stream << "public:" << std::endl;

			std::unordered_map<std::string, int> alreadyDefinedMembers{};


			for (const auto& member : struc->definedMembers)
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

				if (member.type.name[0] == 'F')
					sprintf_s(finalBuf, "	%-110s OFFSET(getStruct<T>, {0x%X, %d, %d, %d})", nameBuf, member.offset, member.size, member.isBit, member.bitOffset);
				else if (!member.type.clickable)
					sprintf_s(finalBuf, "	%-110s OFFSET(get<%s>, {0x%X, %d, %d, %d})", nameBuf, member.type.stringify().c_str(), member.offset, member.size, member.isBit, member.bitOffset);
				else sprintf_s(finalBuf, "	%-110s OFFSET(get<T>, {0x%X, %d, %d, %d})", nameBuf, member.offset, member.size, member.isBit, member.bitOffset);
				stream << finalBuf << std::endl;
			}


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
			stream << "};\n\n";
		}
	};

	generateStruct(package.combinedStructsAndClasses);


	for (const auto& enu : package.enums)
	{
		stream << "/// Enum " << enu.fullName << std::endl;
		char buf[100] = { 0 };
		sprintf_s(buf, "Size: 0x%02d", enu.members.size());
		stream << "/// " << buf << std::endl;
		stream << "enum class " << enu.cppName << " : " << enu.type << std::endl;
		stream << "{" << std::endl;

		int j = 0;
		std::vector<std::string> usedNames{ "float", "int", "bool", "double", "long", "char"};

		for (const auto& member : enu.members)
		{
			j++;
			char memberBuf[300];

			std::string fir = member.first;

			if (std::ranges::find(usedNames, fir) != usedNames.end())
				fir += std::to_string(j);

			usedNames.push_back(fir);

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
	windows::LogWindow::Log(windows::LogWindow::logLevels::LOGLEVEL_INFO, "MDK GEN", "Baking MDK...");

	SDKPath = EngineSettings::getWorkingDirectory() / "MDK";
	if (!create_directories(SDKPath))
		remove_all(SDKPath);

	//the master header contains all the imports sorted
	std::ofstream masterHeader(SDKPath / "MDKImports.h");

	//yes, so all the MDK files are in path/to/stuff/MDK/MDK/
	//because i can imagine theres some stupid game that has a package called MDK and that would ruin our master file
	//so it will look like this
	/// path/to/shit/
	///				-> MDK/
	///					  -> MDKImports.h			// master header you will include
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

// base class, you can get this file from https://github.com/Spuckwaffel/MDKTest and for setup help
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

	windows::LogWindow::Log(windows::LogWindow::logLevels::LOGLEVEL_INFO, "MDK GEN", "Merging packages...");
	do
	{
		progressDone = 0;
		anyMergeFound = false;
		//a new vector we fill up this round and then replace the newPackages vector
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
					if (std::ranges::find(pack.mergedPackages, neighbourNeighbour) == pack.mergedPackages.end())
						continue;

					windows::LogWindow::Log(windows::LogWindow::logLevels::LOGLEVEL_INFO, "MDK GEN",
						"merge found with %s and %s origin %s", neighbour->packageName.c_str(), neighbourNeighbour->packageName.c_str(), pack.package.packageName.c_str());

					anyMergeFound = true;
					mergefound = true;
					//add him to the merges
					pack.mergedPackages.push_back(neighbour);
					skippedPackageDueToMerge.push_back(neighbour->packageName);

					break;
				}
			}
			//if a merge has been found, recreate the entire package
			if (mergefound)
			{
				MergedPackage p;
				//first sort out own references and remove dups
				std::set<EngineStructs::Package*> neighbours;
				std::string name = "merged";
				//merge all the mininal needed stuff together
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
				//add the depenencies
				for (auto& neighbour : neighbours)
				{
					p.package.dependencyPackages.insert(neighbour);
				}
				_newPackages.push_back(p);

			}
			//no merge? just add
			else
				_newPackages.push_back(pack);

			progressDone++;
		}
		newPackages.clear();
		newPackages.insert(newPackages.end(), _newPackages.begin(), _newPackages.end());
	} while (anyMergeFound);

	progressDone = 0;
	totalProgress = newPackages.size();

	windows::LogWindow::Log(windows::LogWindow::logLevels::LOGLEVEL_INFO, "MDK GEN", "Eliminating double merges....");
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

				if (p.mergedPackages != p1.mergedPackages)
					continue;

				windows::LogWindow::Log(windows::LogWindow::logLevels::LOGLEVEL_INFO, "MDK GEN",
					"deleted %s because its same to %s", p1.package.packageName.c_str(), p.package.packageName.c_str());

				//delete p1 package
				newPackages.erase(newPackages.begin() + tracker);
				eraseDone = true;
				break;

			}
			//completely break through and redo
			if (eraseDone)
				break;
		}
	} while (eraseDone);

	progressDone = 0;
	totalProgress = newPackages.size();
	windows::LogWindow::Log(windows::LogWindow::logLevels::LOGLEVEL_INFO, "MDK GEN", "Reordering structs");

	bool didReordering = false;
	do
	{
		didReordering = false;

		for (auto& [mergedPackages, package] : newPackages)
		{
			progressDone++;
			std::vector<EngineStructs::Struct*> orderedStructsAndClasses;
			for (auto& item : package.combinedStructsAndClasses)
			{
				auto currentIt = std::ranges::find(
					orderedStructsAndClasses, item);
				//is it not in? then add
				if (currentIt == orderedStructsAndClasses.end())
				{
					orderedStructsAndClasses.push_back(item);
					currentIt = orderedStructsAndClasses.end() - 1;
				}
				if (!item->inherited)
					continue;

				//check if the inherited struct is part of this package
				if (std::ranges::find(mergedPackages, item->supers[0]->owningPackage) != mergedPackages.end())
				{
					auto neededIt = std::ranges::find(orderedStructsAndClasses, item->supers[0]);
					if (neededIt > currentIt)
					{
						//not in the list?
						if (neededIt == orderedStructsAndClasses.end())
						{
							orderedStructsAndClasses.insert(currentIt, item->supers[0]);
							continue;
						}
						//move up
						didReordering = true;
						auto it = *neededIt;
						orderedStructsAndClasses.erase(neededIt);
						orderedStructsAndClasses.insert(currentIt, it);
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

		}

	} while (didReordering);


	windows::LogWindow::Log(windows::LogWindow::logLevels::LOGLEVEL_INFO, "MDK GEN", "Reordering packages");
	std::vector<MergedPackage*> orderedPackages;

	do
	{
		progressDone = 0;
		didReordering = false;
		for (auto& p : newPackages)
		{
			progressDone++;
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
		windows::LogWindow::Log(windows::LogWindow::logLevels::LOGLEVEL_INFO, "MDK GEN", "Baking package %s", pack->package.packageName.c_str());
		masterHeader << "#include \"MDK/" + pack->package.packageName + ".h\"" << std::endl;
		if (pack->package.packageName == "BasicType")
			generateBasicType();
		else
		{
			std::string packageName = pack->package.packageName + ".h";
			std::ofstream package(SDKPath / packageName);
			printCredits(package);
			generatePackage(package, pack->package);
			package.close();
		}

		progressDone++;
	}
	masterHeader.close();

	progressDone = totalProgress;
}