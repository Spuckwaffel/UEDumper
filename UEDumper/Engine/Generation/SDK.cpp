#include "SDK.h"


#include "Engine/structs.h"
#include "Engine/Core/Core.h"
#include "Engine/Core/EngineStructs.h"
#include "Engine/Userdefined/Datatypes.h"
#include "Frontend/Windows/LogWindow.h"
#include "Settings/EngineSettings.h"
#include "BasicType.h"

void SDKGeneration::printCredits(std::ofstream& stream)
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

void SDKGeneration::generateBasicType()
{
	std::ofstream BasicType(SDKPath / "BasicType.h");
	const auto& defs = basicDefinitions();
	auto noDefs = EngineCore::getAllUnknownTypes();
	for(const auto& [name, definition] : defs)
		if (auto it = std::ranges::find(noDefs, name); it != noDefs.end())
			noDefs.erase(it);

	printCredits(BasicType);
	BasicType << "/// This file contains all definitions of structs that werent defined automatically.\n\n";

	auto addIfCustom = [&](const char* base, const char* user)
	{
		if(strcmp(base, user) != 0)
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

	if (noDefs.size() > 0)
		BasicType << "///\n/// THERE ARE MISSING STRUCTS!! This will result in errors!!!\n///\n\n";

	for(const auto& missingDef : noDefs)
	{
		windows::LogWindow::Log(windows::LogWindow::log_2, "SDK GEN", "WARNING: SDK ERRORS WILL APPEAR!! Missing definition for struct %s!!!", missingDef.c_str());
		BasicType << "//TODO: Define " << missingDef << "!\n\n\n";
	}

	for (const auto& [name, definition] : defs)
	{
		BasicType << "/// Definition for " << name << "\n";
		BasicType << definition << "\n\n";
	}
	BasicType.close();
}

SDKGeneration::SDKGeneration()
{
}

void SDKGeneration::Generate()
{
	windows::LogWindow::Log(windows::LogWindow::log_2, "SDK GEN", "Baking SDK...");

	SDKPath = EngineSettings::getWorkingDirectory() / "SDK";
	if (!create_directories(SDKPath))
		remove_all(SDKPath);

	//the master header contains all the imports sorted
	std::ofstream masterHeader(SDKPath / "SDK.h");

	//yes, so all the SDK files are in path/to/stuff/SDK/SDK/
	//because i can imagine theres some stupid game that has a package called SDK and that would ruin our master file
	//so it will look like this
	/// path/to/shit/
	///				-> SDK/
	///					  -> SDK.h					// master header you will include
	///					  -> SDK/					// folder with all the packages
	///							-> Engine.h			//random package by the game
	///							-> XGame.h			//random package by the game
	///							-> CoreUObject.h	//random package by the game
	///							...
	///
	SDKPath = SDKPath / "SDK";
	if (!create_directories(SDKPath))
		remove_all(SDKPath);

	

	masterHeader <<
		R"(
/********************************************************
*                                                       *
*     SDK generated using UEDumper by Spuckwaffel.		*
*                                                       *
********************************************************/

/// Include this file into your project.
/// If there are still structs missing, read the Engine/Generation/BasicType file.
/// All manual defined structs are in BasicType.h

#include <string>

#include "SDK/BasicType.h"
)";
	//TODO: work in progress
}
