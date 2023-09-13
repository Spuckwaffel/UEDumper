#pragma once

#include "stdafx.h"

#include "Engine/Userdefined/UEdefinitions.h"

//engine settings class. Hold some data that are informative for the editor
class EngineSettings
{
public:
	struct EngineVersion
	{
		int version;
		std::string name;
	};

	static const inline char* UEVersionNames[] = {
		"Unreal Engine 4.19",
		"Unreal Engine 4.20",
		"Unreal Engine 4.21",
		"Unreal Engine 4.22",
		"Unreal Engine 4.23",
		"Unreal Engine 4.24",
		"Unreal Engine 4.25",
		"Unreal Engine 4.26",
		"Unreal Engine 4.27",
		"Unreal Engine 5.0",
		"Unreal Engine 5.1",
		"Unreal Engine 5.2"
	};

	static const inline char* DumperVersionNames[] = {
		"Version 1.1 BETA",
		"Version 1.1 Release",
		"Version 1.2 BETA",
		"Version 1.2 Release",
		"Version 1.3 BETA",
		"Version 1.3 Release",
		"Version 1.4 BETA",
		"Version 1.4 Release",
		"Version 1.5 BETA",
		"Version 1.5 Release",
	};

private:

	static inline bool bAllowLiveEditor = true;

	static inline std::string projectName = "";

	static inline std::string targetApplicationName = "";

	static inline std::filesystem::path workingDir;



public:
	//constructor
	EngineSettings();

	/**
	 * \brief gets the current engine version
	 * \return engine version
	 */
	static EngineVersion getEngineVersion();

	/**
	 * \brief gets the current dumper version
	 * \return dumper version
	 */
	static std::string getDumperVersion();

	/**
	 * \brief sets the project name and creates a folder for the project
	 * \param name project name
	 * \return true whether creation for the directory worked
	 */
	static bool setProjectName(const std::string& name);

	/**
	 * \brief returns the current directory
	 * \return current working dir
	 */
	static std::filesystem::path getWorkingDirectory();

	/**
	 * \brief manually sets the working directory
	 * \param dir a working directory
	 */
	static void setWorkingDirectory(const std::filesystem::path& dir);

	/**
	 * \brief sets the application name
	 * \param name application name
	 */
	static void setTargetApplicationName(const std::string& name);

	/**
	 * \brief returns the project name
	 * \return project name
	 */
	static std::string getProjectName();

	/**
	 * \brief returns the application name
	 * \return application name
	 */
	static std::string getTargetApplicationName();

	/**
	 * \brief sets whether the live editor is disabled (offline mode) or enabled
	 * \param enabled whether the live editor is enabled
	 */
	static void setLiveEditor(bool enabled);

	/**
	 * \brief returns the current live editor status 
	 * \return whether the live editor is enabled
	 */
	static bool liveEditorEnabled();

	/**
	 * \brief creates a valid JSON element that holds all the current engine settings infos
	 * \return JSON object
	 */
	static nlohmann::json toJson();

	/**
	 * \brief loads the engineSettings class with data from a valid JSON object
	 * \param json valid engine settings JSON
	 * \return true upon success
	 */
	static bool loadJson(const nlohmann::json& json);

	/**
	 * \brief draws the engien settings window
	 * \param window window size where the engine settings window will be in
	 * \param show if you wanna support a exit button, add a pointer here to the bool
	 */
	static void drawEngineSettings(ImVec2 window, bool* show);

	//all macros defined here
	
	static inline int _UE_VERSION = 0;
	static inline int _USE_FNAME_ENCRYPTION = 0;
	static inline int _WITH_CASE_PRESERVING_NAME = 0;
	static inline int _GNAMES_POOL_OFFSET = 0;
	static inline int _UE_FNAME_OUTLINE_NUMBER = 0;
	static inline int _USE_LOWERCASE_STRUCT = 0;
	static inline int _UE_BLUEPRINT_EVENTGRAPH_FASTCALLS = 0;
	static inline int _WITH_LIVE_CODING = 0;
	static inline int _USTRUCT_FAST_ISCHILDOF_IMPL = 0;
	static inline int _WITH_EDITORONLY_DATA = 0;

	//macros that can be chnged at runtime

	//checks if the first name is /Script/Core.UObject
	static inline int _FNAME_CHECK = TRUE;

	static void loadMacros()
	{
		_UE_VERSION = UE_VERSION;

		_USE_FNAME_ENCRYPTION = USE_FNAME_ENCRYPTION;
		_WITH_CASE_PRESERVING_NAME = WITH_CASE_PRESERVING_NAME;;
#if UE_VERSION < UE_4_23
		_GNAMES_POOL_OFFSET = GNAMES_POOL_OFFSET;
#endif
#if UE_VERSION > UE_5_00
		_UE_FNAME_OUTLINE_NUMBER = UE_FNAME_OUTLINE_NUMBER;
#endif
#if UE_VERSION == UE_4_25
		_USE_LOWERCASE_STRUCT = USE_LOWERCASE_STRUCT;
#endif
		_UE_BLUEPRINT_EVENTGRAPH_FASTCALLS = UE_BLUEPRINT_EVENTGRAPH_FASTCALLS;
#if UE_VERSION >= UE_5_00
		_WITH_LIVE_CODING = WITH_LIVE_CODING;
		
#endif
#if UE_VERSION >= UE_4_22
		_USTRUCT_FAST_ISCHILDOF_IMPL = USTRUCT_FAST_ISCHILDOF_IMPL;

#endif

#if UE_VERSION >= UE_4_25
		_WITH_EDITORONLY_DATA = WITH_EDITORONLY_DATA;
#endif
	}
};

