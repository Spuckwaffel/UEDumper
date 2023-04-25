#include "HelloWindow.h"



windows::HelloWindow::HelloWindow()
{
}

bool windows::HelloWindow::render()
{
	if(alreadyCompleted) return true;

	static char processName[100] = { 0 };
	static char projectName[50] = { 0 };
	static char errorText[100] = { 0 };
	static bool showEngineInfos = false;
	static bool createdDir = false;

	const ImVec2 bigWindow = IGHelper::getWindowSize();

	
	//if we dont show engine infos render the new project child
	if(!showEngineInfos)
	{
		constexpr auto childSize = ImVec2(750, 300);
		ImGui::SetCursorPos(ImVec2(bigWindow.x / 2 - childSize.x / 2, bigWindow.y / 2 - childSize.y / 2));

		ImGui::BeginChild("NewProjectChild", childSize, true, ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_NoMove | ImGuiWindowFlags_NoScrollWithMouse);
		IGHelper::placeInCenter("New project");

		ImGui::SetCursorPosY(40);
		ImGui::Image(TextureCreator::getTexture("logo"), ImVec2(230, 230));
		ImGui::SameLine();
		ImGui::SetCursorPosY(20);
		ImGui::BeginChild("NewProjectChild", ImVec2(520, 280), false, ImGuiWindowFlags_NoScrollWithMouse);
		ImGui::PushItemWidth(400);
		ImGui::Dummy(ImVec2(0, 20));
		ImGui::Text("Enter a project name (at least 5 characters)");
		ImGui::InputTextWithHint("##projectNameInput", "Fortnite 5.0.1", projectName, sizeof(projectName));
		ImGui::SameLine();

		//only allow any interaction if projectname > 4 and there is no created dir
		if(!createdDir && (ImGui::Button(merge(ICON_FA_FOLDER, " Create##createProject")) && strlen(projectName) > 4))
		{
			createdDir = EngineSettings::setProjectName(projectName);
			if (!createdDir)
				sprintf_s(errorText, "Error creating folder! Either the project already exists or you used an invalid name.");
			else
				memset(errorText, 0, sizeof(errorText));
		}
		if(createdDir)
		{
			ImGui::Text("Created!");
		}
		
		ImGui::Text("Enter running UE Game name");
		ImGui::InputTextWithHint("##gameNameInput", "UEGame-Win64-Shipping.exe", processName, sizeof(processName));
		ImGui::PopItemWidth();
		ImGui::SameLine();
		if (Memory::getStatus() != Memory::MemoryStatus::loaded)
		{
			if (ImGui::Button(merge(ICON_FA_SEARCH, " Find##FindProcess")))
			{
				Memory::load(std::string(processName));
			}
		}
		else if (Memory::getStatus() == Memory::MemoryStatus::loaded)
		{
			ImGui::Text("Loaded!");
		}

		ImGui::Spacing();
		if (ImGui::Button("Engine settings"))
			showEngineInfos = true;

		if(strlen(errorText) > 0)
		{
			ImGui::PushStyleColor(ImGuiCol_Text, IGHelper::Colors::classOrange);
			ImGui::TextWrapped(errorText);
			ImGui::PopStyleColor();
		}
		
		if (Memory::getStatus() == Memory::MemoryStatus::loaded)
		{
			ImGui::Text("Process ID: 0x%05X", Memory::getProcessID());
			ImGui::Text("Base Address: 0x%p", Memory::getBaseAddress());

		}
		if(Memory::getStatus() == Memory::MemoryStatus::loaded && createdDir)
		{
			ImGui::SetCursorPosX(40);
			ImGui::SetCursorPosY(240);
			//if we press dump game, this window is completed and not needed anymore
			if (ImGui::Button(merge(ICON_FA_ROCKET, " Dump Game"), ImVec2(180, 35))) {
				EngineSettings::setTargetApplicationName(processName);
				alreadyCompleted = true;
			}
		}
		ImGui::EndChild();
		ImGui::EndChild();
	}
	else
	{
#if UE_VERSION >= UE_5_00
		constexpr auto childSize = ImVec2(510, 400);
#else
		constexpr auto childSize = ImVec2(510, 320);
#endif
		ImGui::SetCursorPos(ImVec2(bigWindow.x / 2 - childSize.x / 2, bigWindow.y / 2 - childSize.y / 2 - 20));
		EngineSettings::drawEngineSettings(childSize, &showEngineInfos);
	}
	

	return false;
}

bool windows::HelloWindow::isCompleted()
{
	return alreadyCompleted;
}

void windows::HelloWindow::renderProjectPopup()
{
	if (alreadyCompleted)
		return;

	if (ImGui::Button(merge(ICON_FA_FILE, " Load Project")))
	{
		OPENFILENAMEA ofn;
		char filename[MAX_PATH] = { 0 };

		ZeroMemory(&ofn, sizeof(OPENFILENAME));
		ofn.lStructSize = sizeof(OPENFILENAME);
		ofn.hwndOwner = NULL;
		ofn.lpstrFilter = "UEDumper Project File (*.uedproj)\0*.uedproj\0";
		ofn.lpstrFile = filename;
		ofn.nMaxFile = MAX_PATH;
		ofn.Flags = OFN_FILEMUSTEXIST | OFN_PATHMUSTEXIST;
		ofn.lpstrDefExt = "uedproj";

		if (GetOpenFileNameA(&ofn) == TRUE) {
			const std::string st(filename, MAX_PATH);
			if(EngineCore::loadProject(st))
			{
				windows::LogWindow::Log(windows::LogWindow::log_4, "ENGINECORE", "Project loaded!");
				alreadyCompleted = true;
			}
		}
	}
}
