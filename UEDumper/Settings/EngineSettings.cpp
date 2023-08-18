#include "EngineSettings.h"

#include "Frontend/IGHelper.h"
#include "Frontend/Fonts/fontAwesomeHelper.h"
#include "Frontend/Windows/LogWindow.h"

EngineSettings::EngineSettings()
{

}

EngineSettings::EngineVersion EngineSettings::getEngineVersion()
{
	return { _UE_VERSION, UEVersionNames[_UE_VERSION] };
}

std::string EngineSettings::getDumperVersion()
{
	return DumperVersionNames[DUMPER_VERSION];
}

bool EngineSettings::setProjectName(const std::string& name)
{
	const auto path = std::filesystem::current_path() / name;
	
	
	workingDir = path;
	projectName = name;

	if (create_directories(path))
		return true;

	//allow empty directories
	std::filesystem::directory_iterator it(workingDir);
	if (begin(it) == end(it))
		return true;

	return false;
}

std::filesystem::path EngineSettings::getWorkingDirectory()
{
	return workingDir;
}

void EngineSettings::setWorkingDirectory(const std::filesystem::path& dir)
{
	workingDir = dir;
}

void EngineSettings::setTargetApplicationName(const std::string& name)
{
	targetApplicationName = name;
}

std::string EngineSettings::getProjectName()
{
	return projectName;
}

std::string EngineSettings::getTargetApplicationName()
{
	return targetApplicationName;
}

void EngineSettings::setLiveEditor(bool enabled)
{
	bAllowLiveEditor = enabled;
}

bool EngineSettings::liveEditorEnabled()
{
	return bAllowLiveEditor;
}

nlohmann::json EngineSettings::toJson()
{
	nlohmann::json EngineSettings;
	EngineSettings["projectName"] = getProjectName();
	EngineSettings["workingDir"] = getWorkingDirectory();
	EngineSettings["targetApplicationName"] = getTargetApplicationName();

	EngineSettings["DUMPER_VERSION"] = DUMPER_VERSION;
	EngineSettings["UE_VERSION"] = _UE_VERSION;
	EngineSettings["USE_FNAME_ENCRYPTION"] = _USE_FNAME_ENCRYPTION;
	EngineSettings["WITH_CASE_PRESERVING_NAME"] = _WITH_CASE_PRESERVING_NAME;

	if (_UE_VERSION < UE_4_23)
		EngineSettings["GNAMES_POOL_OFFSET"] = _GNAMES_POOL_OFFSET;
	if (_UE_VERSION > UE_5_00)
		EngineSettings["UE_FNAME_OUTLINE_NUMBER"] = _UE_FNAME_OUTLINE_NUMBER;

	if (_UE_VERSION == UE_4_25)
		EngineSettings["USE_LOWERCASE_STRUCT"] = _USE_LOWERCASE_STRUCT;
	
	EngineSettings["UE_BLUEPRINT_EVENTGRAPH_FASTCALLS"] = _UE_BLUEPRINT_EVENTGRAPH_FASTCALLS;

	if (_UE_VERSION >= UE_5_00)
		EngineSettings["WITH_LIVE_CODING"] = _WITH_LIVE_CODING;

	if (_UE_VERSION >= UE_4_22)
		EngineSettings["USTRUCT_FAST_ISCHILDOF_IMPL"] = _USTRUCT_FAST_ISCHILDOF_IMPL;

	if (_UE_VERSION >= UE_4_25)
		EngineSettings["WITH_EDITORONLY_DATA"] = _WITH_EDITORONLY_DATA;
	return EngineSettings;
}

bool EngineSettings::loadJson(const nlohmann::json& json)
{
	if(!json.contains("DUMPER_VERSION"))
	{
		windows::LogWindow::Log(windows::LogWindow::log_2, "ENGINESETTINGS", "The save file was generated with an older "
			"version of the dumper and is not compatible with this version.");
	}
	const int ver = json["DUMPER_VERSION"];
	if(ver != DUMPER_VERSION)
	{
		windows::LogWindow::Log(windows::LogWindow::log_2, "ENGINESETTINGS", "The save file was generated with an older "
																	   "version of the dumper.");
		windows::LogWindow::Log(windows::LogWindow::log_2, "ENGINESETTINGS", "File has version %d but Dumper has version %d.", ver, DUMPER_VERSION);
		return false;
	}

	if (!json.contains("UE_VERSION") ||
		!json.contains("USE_FNAME_ENCRYPTION") ||
		!json.contains("WITH_CASE_PRESERVING_NAME") ||
		!json.contains("USE_FNAME_ENCRYPTION") ||
		!json.contains("UE_BLUEPRINT_EVENTGRAPH_FASTCALLS"))

	{
		windows::LogWindow::Log(windows::LogWindow::log_2, "ENGINESETTINGS", "This project is missing special json settings and is corrupted.");
		return false;
	}

	_UE_VERSION = json["UE_VERSION"];
	windows::LogWindow::Log(windows::LogWindow::log_1, "ENGINESETTINGS", "This project uses %s.", getEngineVersion().name.c_str());

	_USE_FNAME_ENCRYPTION = json["USE_FNAME_ENCRYPTION"];
	_WITH_CASE_PRESERVING_NAME = json["WITH_CASE_PRESERVING_NAME"];
	_UE_BLUEPRINT_EVENTGRAPH_FASTCALLS = json["UE_BLUEPRINT_EVENTGRAPH_FASTCALLS"];

#define checkMacro(condition, name, save) \
	if(condition) { \
		if (!json.contains(name)) { \
			windows::LogWindow::Log(windows::LogWindow::log_2, "ENGINESETTINGS", "Project is missing the %s macro!", name); \
			return false; \
		} \
		save = json[name]; \
	}

	checkMacro(_UE_VERSION < UE_4_23, "GNAMES_POOL_OFFSET", _GNAMES_POOL_OFFSET);

	checkMacro(_UE_VERSION > UE_5_00, "UE_FNAME_OUTLINE_NUMBER", _UE_FNAME_OUTLINE_NUMBER);

	checkMacro(_UE_VERSION == UE_4_25, "USE_LOWERCASE_STRUCT", _USE_LOWERCASE_STRUCT);

	checkMacro(_UE_VERSION >= UE_5_00, "WITH_LIVE_CODING", _WITH_LIVE_CODING);

	checkMacro(_UE_VERSION >= UE_4_22, "USTRUCT_FAST_ISCHILDOF_IMPL", _USTRUCT_FAST_ISCHILDOF_IMPL);

	checkMacro(_UE_VERSION >= UE_4_25, "WITH_EDITORONLY_DATA", _WITH_EDITORONLY_DATA);


	projectName = json["projectName"];

	workingDir = json.value("workingDir", std::filesystem::path());
	if (workingDir.empty())
	{
		windows::LogWindow::Log(windows::LogWindow::log_2, "ENGINESETTINGS", "WorkingDir is missing!");
		return false;
	}

	targetApplicationName = json["targetApplicationName"];


	return true;
}

void EngineSettings::drawEngineSettings(ImVec2 window, bool* show)
{

	ImGui::BeginChild(merge(ICON_FA_INFO, " Engine Settings"), window, true, ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_NoMove);
	IGHelper::placeInCenter(merge(ICON_FA_INFO, " Engine Settings"));

	
	ImGui::Text("Dumper version: %s", getDumperVersion().c_str());
	ImGui::Text("UE version: %s", getEngineVersion().name.c_str());
	if (ImGui::ArrowButton("loglevel_btn_left", ImGuiDir_Left) && windows::LogWindow::getLogLevel() > 0)
		windows::LogWindow::setLogLevel(windows::LogWindow::getLogLevel() - 1);
	ImGui::SameLine();
	if (ImGui::ArrowButton("loglevel_btn_right", ImGuiDir_Right))
		windows::LogWindow::setLogLevel(windows::LogWindow::getLogLevel() + 1);
	ImGui::SameLine();
	ImGui::Text("Log level: %d | %s", windows::LogWindow::getLogLevel(), windows::LogWindow::getLogLevelName().c_str());
	ImGui::BeginDisabled();
	ImGui::Text("FName settings");
	ImGui::Checkbox("WITH_CASE_PRESERVING_NAME", reinterpret_cast<bool*>(&_WITH_CASE_PRESERVING_NAME));
	ImGui::Checkbox("USE_FNAME_ENCRYPTION", reinterpret_cast<bool*>(&_USE_FNAME_ENCRYPTION));

	if(_UE_VERSION < UE_4_23)
		ImGui::Text("GNAMES_POOL_OFFSET %d", _GNAMES_POOL_OFFSET);
	if (_UE_VERSION > UE_5_00)
		ImGui::Checkbox("UE_FNAME_OUTLINE_NUMBER", reinterpret_cast<bool*>(&_UE_FNAME_OUTLINE_NUMBER));

	if (_UE_VERSION == UE_4_25)
		ImGui::Checkbox("USE_LOWERCASE_STRUCT", reinterpret_cast<bool*>(&_USE_LOWERCASE_STRUCT));

	ImGui::Text("UFunction settings");
	ImGui::Checkbox("UE_BLUEPRINT_EVENTGRAPH_FASTCALLS", reinterpret_cast<bool*>(&_UE_BLUEPRINT_EVENTGRAPH_FASTCALLS));
	
	if (_UE_VERSION >= UE_5_00)
		ImGui::Checkbox("WITH_LIVE_CODING", reinterpret_cast<bool*>(&_WITH_LIVE_CODING));

	if (_UE_VERSION >= UE_4_22)
	{
		ImGui::Text("UStruct settings");
		ImGui::Checkbox("USTRUCT_FAST_ISCHILDOF_IMPL", reinterpret_cast<bool*>(&EngineSettings::_USTRUCT_FAST_ISCHILDOF_IMPL));
	}

	if (_UE_VERSION >= UE_4_25)
	{
		ImGui::Checkbox("WITH_EDITORONLY_DATA", reinterpret_cast<bool*>(&EngineSettings::_WITH_EDITORONLY_DATA));
	}

	ImGui::EndDisabled();
	if(show)
	{
		ImGui::Dummy(ImVec2(ImGui::GetWindowSize().x / 2 - 65, 0));
		ImGui::SameLine();
		if (ImGui::Button("Exit", ImVec2(90, 40)))
		{
			*show = false;
		}
	}

	ImGui::EndChild();
}
