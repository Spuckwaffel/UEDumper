#include "HelloWindow.h"

#include "Frontend/IGHelper.h"
#include <Frontend/Texture/TextureCreator.h>
#include <Settings/EngineSettings.h>
#include <Frontend/Fonts/fontAwesomeHelper.h>
#include <Memory/Memory.h>
#include <Engine/Core/Core.h>
#include <Engine/Userdefined/Offsets.h>
#include "Frontend/Windows/LogWindow.h"


windows::HelloWindow::HelloWindow()
{
}

bool windows::HelloWindow::render()
{
	if (alreadyCompleted) return true;

	static bool bUserKnowsWhatTheyAreDoing = true;
	static bool checkOffsets = true;
	if(checkOffsets)
	{
		for (const auto& offset : setOffsets()) {
			if (offset.offset == SHOW_README_IF_OFFSETS_ARE_VALUE) {
				LogWindow::Log(LogWindow::logLevels::LOGLEVEL_ERROR, "OFFSETS",
					"ERROR: Offsets were not changed. Please read the README and specify the correct offsets.");
				bUserKnowsWhatTheyAreDoing = false;
				break;
			}
		}
		if(EngineSettings::_UE_VERSION == UE_NOT_SET )
		{
			bUserKnowsWhatTheyAreDoing = false;
			LogWindow::Log(LogWindow::logLevels::LOGLEVEL_ERROR, "UE VERSION",
				"ERROR: UE Version not set. Please read the README and specify the correct offsets.");
		}
		checkOffsets = false;
	}


	static char processName[100] = { 0 };
	static char projectName[50] = { 0 };
	static char errorText[100] = { 0 };
	static bool showEngineInfos = false;
	static bool createdDir = false;
	static bool ProcessIDInsteadOfName = false;
	static bool PIDInHex = true;

	const ImVec2 bigWindow = IGHelper::getWindowSize();


	//if we dont show engine infos render the new project child
	if (!showEngineInfos)
	{
		constexpr auto childSize = ImVec2(750, 300);
		ImGui::SetCursorPos(ImVec2(bigWindow.x / 2 - childSize.x / 2, bigWindow.y / 2 - childSize.y / 2));

		ImGui::BeginChild("NewProjectChild", childSize, true, ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_NoMove | ImGuiWindowFlags_NoScrollWithMouse);
		IGHelper::placeInCenter("New project");

		ImGui::SameLine();
		ImGui::SetCursorPosX(710);
		if (ImGui::Button(ICON_FA_GEAR))
			showEngineInfos = true;

		ImGui::SetCursorPosY(40);
		ImGui::Image(TextureCreator::getTexture("logo"), ImVec2(230, 230));
		ImGui::SameLine();
		float posX = ImGui::GetCursorPosX();
		ImGui::Dummy({ 0,0 });
		ImGui::SetCursorPos(ImVec2(ImGui::GetCursorPosX() + 10, ImGui::GetCursorPosY() - 10));
		ImGui::TextColored(IGHelper::Colors::grayedOut, "%22s", EngineSettings::getDumperVersion().c_str());
		ImGui::SetCursorPos({ posX, 35 });
		ImGui::BeginChild("NewProjectChild", ImVec2(520, 280), false, ImGuiWindowFlags_NoScrollWithMouse);

		if (!bUserKnowsWhatTheyAreDoing)
		{
			ImGui::SetCursorPosY(70);
			ImGui::TextColored(IGHelper::Colors::white, "Hi there! Looks like you're new to this tool.");
			ImGui::TextColored(IGHelper::Colors::red, "The tool DOES NOT WORK OUT OF THE BOX!");
			ImGui::TextColored(IGHelper::Colors::white, "Please read the included README.md file to proceed.");
			ImGui::EndChild();
			ImGui::EndChild();
			return false;
		}


		ImGui::PushItemWidth(373);
		ImGui::Dummy(ImVec2(0, 20));
		ImGui::Text("Enter a project name (at least 5 characters)");
		ImGui::InputTextWithHint("##projectNameInput", "Fortnite 5.0.1", projectName, sizeof(projectName));
		ImGui::SameLine();

		//only allow any interaction if projectname > 4 and there is no created dir
		if (!createdDir && (ImGui::Button(merge(ICON_FA_FOLDER, " Create##createProject")) && strlen(projectName) > 4))
		{
			createdDir = EngineSettings::setProjectName(projectName);
			if (!createdDir)
				sprintf_s(errorText, "Error creating folder! Either the project already exists or you used an invalid name.");
			else
				memset(errorText, 0, sizeof(errorText));
		}
		else if (createdDir)
		{
			ImGui::Text("Created!");
		}

		ImGui::PopItemWidth();

		if (ProcessIDInsteadOfName)
		{
			ImGui::PushItemWidth(280);
			if (PIDInHex)
				ImGui::Text("Enter running UE Game PID (hex)");
			else
				ImGui::Text("Enter running UE Game PID (decimal)");

			//we still use the procname buff
			ImGui::InputTextWithHint("##gameNameInput", PIDInHex ? "123ABC" : "123456", processName, sizeof(processName), PIDInHex ? ImGuiInputTextFlags_CharsHexadecimal : ImGuiInputTextFlags_CharsHexadecimal);
			ImGui::PopItemWidth();
			ImGui::SameLine();
			ImGui::BeginDisabled(Memory::getStatus() == Memory::MemoryStatus::loaded);
			if (ImGui::Button(PIDInHex ? "DEC" : "HEX"))
				PIDInHex = !PIDInHex;

			ImGui::SameLine();
			if (ImGui::Button("Name"))
				ProcessIDInsteadOfName = false;
			ImGui::EndDisabled();

			auto sPID = std::string(processName);
			if (sPID.empty())
				sPID = "0";

			const int PID = std::stoi(sPID, nullptr, PIDInHex ? 16 : 10);

			ImGui::SameLine();

			if (Memory::getStatus() == Memory::MemoryStatus::loaded)
				ImGui::Text("Loaded!");

			else if (ImGui::Button(merge(ICON_FA_MAGNIFYING_GLASS, " Find##FindProcess")))
				Memory::load(PID);
		}

		else
		{
			ImGui::PushItemWidth(350);
			ImGui::Text("Enter running UE Game name");
			ImGui::InputTextWithHint("##gameNameInput", "UEGame-Win64-Shipping.exe", processName, sizeof(processName));
			ImGui::PopItemWidth();
			ImGui::SameLine();

			ImGui::BeginDisabled(Memory::getStatus() == Memory::MemoryStatus::loaded);

			if (ImGui::Button("PID"))
				ProcessIDInsteadOfName = true;
			ImGui::EndDisabled();

			ImGui::SameLine();

			if (Memory::getStatus() == Memory::MemoryStatus::loaded)
				ImGui::Text("Loaded!");

			else if (ImGui::Button(merge(ICON_FA_MAGNIFYING_GLASS, " Find##FindProcess")))
				Memory::load(std::string(processName));

		}


		ImGui::Spacing();


		if (strlen(errorText) > 0)
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
		if (Memory::getStatus() == Memory::MemoryStatus::loaded && createdDir)
		{
			ImGui::SetCursorPosX(40);
			ImGui::SetCursorPosY(220);
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
		constexpr auto childSize = ImVec2(510, 310);
		ImGui::SetCursorPos(ImVec2(bigWindow.x / 2 - childSize.x / 2, bigWindow.y / 2 - childSize.y / 2));
		EngineSettings::drawEngineSettings(childSize, &showEngineInfos);
	}


	return false;
}

bool windows::HelloWindow::isCompleted()
{
	return alreadyCompleted;
}

void windows::HelloWindow::setCompleted()
{
	alreadyCompleted = true;
}

void windows::HelloWindow::renderProjectPopup()
{
}