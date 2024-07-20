#include "MDK.h"

#include <set>

#include "Engine/structs.h"
#include "Engine/Core/Core.h"
#include "Engine/Core/EngineStructs.h"
#include "Engine/Userdefined/Datatypes.h"
#include "Frontend/Windows/LogWindow.h"
#include "Settings/EngineSettings.h"
#include "BasicType.h"
#include "packageSorter.h"

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
	auto generateValidVarName = [](const std::string& str, bool allowBrackets = false)
		{
			std::string result = "";
			for (const char c : str)
			{
				if (c == ' ')
					continue;
				if (static_cast<int>(c) < 0 || !std::isalnum(c))
				{
					if (allowBrackets && (c == '[' || c == ']'))
						result += c;
					else
						result += '_';
				}

				else
					result += c;

			}

			const static std::unordered_set<std::string> reservedNames{ "float", "int", "bool", "double", "long", "char", "TRUE", "FALSE", "try" };

			if (std::isdigit(result[0])) result = "_" + result;
			if (reservedNames.contains(result)) result += "0";

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
			sprintf_s(buf, "Size: 0x%04X (0x%06X - 0x%06X)", struc->size - struc->getInheritedSize(), struc->getInheritedSize(), struc->size);
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

				std::string memberName = generateValidVarName(member.name, true);
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
		sprintf_s(buf, "Size: 0x%02lld", enu.members.size());
		stream << "/// " << buf << std::endl;
		stream << "enum class " << generateValidVarName(enu.cppName) << " : " << enu.type << std::endl;
		stream << "{" << std::endl;

		int j = 0;
		std::vector<std::string> usedNames{};

		for (const auto& member : enu.members)
		{
			j++;
			char memberBuf[300];

			std::string fir = generateValidVarName(member.first);

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


	std::vector<MergedPackage> newPackages;
	const auto sortedPackages = sortPackages(progressDone, totalProgress, newPackages);


	puts("------sorted packages------");
	for (auto& pack : sortedPackages)
	{
		printf("%s\n", pack->package.packageName.c_str());
	}
	puts("---------------------------");

	totalProgress = sortedPackages.size();
	progressDone = 0;
	int tooLongNames = 0;
	for (auto& pack : sortedPackages)
	{
		std::string packageName = pack->package.packageName;
		if (packageName.length() > 100)
		{
			packageName = "tooLongPackage_" + std::to_string(tooLongNames++);
			masterHeader << "// Package name has been changed because the name was too long. Original name:" << std::endl;
			masterHeader << "// " << pack->package.packageName << std::endl;
		}

		windows::LogWindow::Log(windows::LogWindow::logLevels::LOGLEVEL_INFO, "MDK GEN", "Baking package %s", packageName.c_str());

		masterHeader << "#include \"MDK/" + pack->package.packageName + ".h\"" << std::endl;
		if (pack->package.packageName == "BasicType")
			generateBasicType();
		else
		{
			std::string _packageName = packageName + ".h";
			std::ofstream package(SDKPath / _packageName);
			printCredits(package);
			generatePackage(package, pack->package);
			package.close();
		}

		progressDone++;
	}
	masterHeader.close();

	progressDone = totalProgress;
}