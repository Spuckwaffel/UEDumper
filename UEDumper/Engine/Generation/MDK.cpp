#include "MDK.h"

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

MDKGeneration::MDKGeneration()
{
	windows::LogWindow::Log(windows::LogWindow::log_2, "SDK GEN", "Baking SDK...");

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
	SDKPath = SDKPath / "SDK";
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
	std::vector<EngineStructs::Package> bakedAndOrderedPackages;
	for(const auto& currentPackage : EngineCore::getPackages())
	{
		std::vector<EngineStructs::Struct> bakedAndOrderedStructs;
		//just add it for now
		bakedAndOrderedPackages.push_back(currentPackage);

		EngineStructs::Package mergePackage;
		bool hasToBeMerged = false;
		for(const auto& clas : currentPackage.classes)
		{
			auto currentClassIt = std::ranges::find(
				bakedAndOrderedStructs, clas);
			//is it not in? then add
			if(currentClassIt == bakedAndOrderedStructs.end())
			{
				bakedAndOrderedStructs.push_back(clas);
				//let the iterator point to this
				--currentClassIt;
			}
			if(clas.inherited)
			{
				int sidx;
				bool isClass;
				int pidx;

				//if(getPackageFromClass(clas.supers[0], sidx, pidx, isClass))
				//{
				//	auto& inheritedPackage = EngineCore::getPackages()[pidx];
				//	auto& inheritedStruct = isClass ? EngineCore::getPackages()[pidx].classes[sidx] : EngineCore::getPackages()[pidx].structs[sidx];
				//
				//	//same package
				//	if(inheritedPackage.index == currentPackage.index)
				//	{
				//		//not in the list but this class needs it? then move before
				//		if (auto it = std::ranges::find(bakedAndOrderedStructs, inheritedStruct); it == bakedAndOrderedStructs.end())
				//		{
				//			//insert it before our current one
				//			bakedAndOrderedStructs.insert(currentClassIt, inheritedStruct);
				//		}
				//	}
				//	else
				//	{
				//		
				//		//first check for a cyclic package
				//		for()
				//	}
				//}
			}
		}
	}
}
