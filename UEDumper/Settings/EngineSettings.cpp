#include "EngineSettings.h"

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
	return EngineSettings;
}

bool EngineSettings::loadJson(const nlohmann::json& json)
{
	int val = 1;
	if (json.is_null())
		goto lError;

	val++; // 2
	projectName = json.value("projectName", "");
	if(projectName.length() < 5)
		goto lError;

	val++; // 3
	workingDir = json.value("workingDir", std::filesystem::path());
	if(workingDir.empty())
		goto lError;

	val++; // 4
	targetApplicationName = json.value("targetApplicationName", "");
	if (targetApplicationName.length() < 5)
		goto lError;


	return true;

	lError:
	windows::LogWindow::Log(windows::LogWindow::log_4, "ENGINESETTINGS", "JSON invalid! - %d", val);
	return false;
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
	ImGui::Text("Log level: %d", windows::LogWindow::getLogLevel());
	ImGui::BeginDisabled();
	ImGui::Text("FName settings");
	ImGui::Checkbox("WITH_CASE_PRESERVING_NAME", reinterpret_cast<bool*>(&_WITH_CASE_PRESERVING_NAME));

	if(_UE_VERSION < UE_4_25)
		ImGui::Text("GNAMES_POOL_OFFSET %d", _GNAMES_POOL_OFFSET);
	if (_UE_VERSION > UE_5_00)
		ImGui::Checkbox("UE_FNAME_OUTLINE_NUMBER", reinterpret_cast<bool*>(&_UE_FNAME_OUTLINE_NUMBER));

	ImGui::Text("UFunction settings");
	ImGui::Checkbox("UE_BLUEPRINT_EVENTGRAPH_FASTCALLS", reinterpret_cast<bool*>(&_UE_BLUEPRINT_EVENTGRAPH_FASTCALLS));
	
	if (_UE_VERSION >= UE_5_00)
		ImGui::Checkbox("WITH_LIVE_CODING", reinterpret_cast<bool*>(&_WITH_LIVE_CODING));

	if (_UE_VERSION >= UE_4_25)
	{
		ImGui::Text("UStruct settings");
		ImGui::Checkbox("USTRUCT_FAST_ISCHILDOF_IMPL", reinterpret_cast<bool*>(&EngineSettings::_USTRUCT_FAST_ISCHILDOF_IMPL));
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
