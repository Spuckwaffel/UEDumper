#include "PackageWindow.h"

#include "DumpProgress.h"
#include "HelloWindow.h"
#include "LogWindow.h"
#include "PackageViewerWindow.h"
#include "Engine/Core/Core.h"
#include "Frontend/IGHelper.h"
#include <Settings/EngineSettings.h>

#include "dumpshost.h"
#include "Frontend/Fonts/fontAwesomeHelper.h"

void windows::PackageWindow::renderUndefinedStructs()
{
	if (showUndefinedStructs)
	{
		ImGui::PushStyleVar(ImGuiStyleVar_WindowTitleAlign, ImVec2(0.5f, 0.5f));

		const ImVec2 bigWindow = IGHelper::getWindowSize();

		ImGui::SetNextWindowFocus();

		ImGui::Begin("Undefined Structs", nullptr, ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_NoMove);
		ImGui::SetWindowSize(ImVec2(510, 390), ImGuiCond_Once);
		const ImVec2 smallWindow = ImGui::GetWindowSize();
		ImGui::SetWindowPos(ImVec2(bigWindow.x / 2 - smallWindow.x / 2, bigWindow.y / 2 - smallWindow.y / 2));
		ImGui::PopStyleVar();
		ImGui::TextWrapped("Here is a list of all structs that can be clicked but are not defined. To fix this, add them "
			"in StructDefinitions.h");
		ImGui::BeginChild("UndefinedStructsChild", ImVec2(495, 250), true);
		for (auto& struc : EngineCore::getAllUnknownTypes())
		{
			ImGui::Text(struc.c_str());
		}
		ImGui::EndChild();
		ImGui::SetCursorPosX(smallWindow.x / 2 - 90);
		if (ImGui::Button("Close", ImVec2(180, 35)))
		{
			showUndefinedStructs = false;
		}
		ImGui::End();
	}
}

void windows::PackageWindow::generateSDK(int& progressDone, int& totalProgress)
{
	totalProgress = EngineCore::getPackages().size();
	const auto path = EngineSettings::getWorkingDirectory() / "SDK";
	if(!create_directories(path))
		remove_all(path);
	for(const auto& package : EngineCore::getPackages())
	{
		std::ofstream file(path / (package.packageName + ".h"));
		file << 
R"(/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

)";
		file << "/// Package " + package.packageName << ".\n\n";

		PackageViewerWindow::generatePackage(file, package);
		file.close();
		progressDone++;
	}
	progressDone = totalProgress;
}

void windows::PackageWindow::copyPackageNames()
{
	std::string names = "";
	for(const auto& package : EngineCore::getPackages())
	{
		names += package.packageName + "\n";
	}
	IGHelper::copyToClipBoard(names);
	LogWindow::Log(windows::LogWindow::log_2, "PACKAGE", "Copied Package names to clipboard!");

}

windows::PackageWindow::PackageWindow()
{

}

bool windows::PackageWindow::render()
{
	if (alreadyCompleted) return true;

	static char CNameSearch[100] = {0};

	ImGui::SetCursorPosY(35);
	ImGui::BeginChild("PackageChild", ImVec2(330, ImGui::GetWindowSize().y - LogWindow::getLogWindowYSize() - 40), true,  ImGuiWindowFlags_NoScrollbar);

	ImGui::Text("%d Packages", EngineCore::getPackages().size());
	if (ImGui::BeginListBox("##packageslist", ImVec2(ImGui::GetWindowSize().x - 15, ImGui::GetWindowSize().y - 80)))
	{
		static int packagePicked = 0;
		const auto& packages = EngineCore::getPackages();
		for (int i = 0; i < packages.size(); i++)
		{
			const bool is_selected = (packagePicked == i);
			if (ImGui::Selectable(packages[i].packageName.c_str(), is_selected))
			{
				packagePicked = i;
				LogWindow::Log(windows::LogWindow::log_2, "PACKAGE", "opened package %d", packagePicked);
				PackageViewerWindow::createTab(packagePicked);
			}
			if (ImGui::IsItemHovered() && ImGui::IsMouseReleased(ImGuiMouseButton_Right))
			{
				packagePicked = i;
				ImGui::OpenPopup("Context Menu");
			}
		}

		if (ImGui::BeginPopup("Context Menu"))
		{
			ImGui::Text(packages[packagePicked].packageName.c_str());
			ImGui::Text("Item count: %d", packages[packagePicked].structs.size()); //TODO: just temp
			ImGui::Separator();
			if (ImGui::Button("Save package"))
			{
				std::ofstream file(EngineSettings::getWorkingDirectory() / (packages[packagePicked].packageName + ".h"));
				file <<
R"(/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

)";
				file << "/// Package " + packages[packagePicked].packageName << ".\n\n";
				PackageViewerWindow::generatePackage(file, packages[packagePicked]);
				LogWindow::Log(LogWindow::log_2, "PACKAGE", "Saved Package %s to disk!", packages[packagePicked].packageName.c_str());
			}
			if (ImGui::Button("Copy package name"))
			{
				IGHelper::copyToClipBoard(packages[packagePicked].packageName);
				LogWindow::Log(LogWindow::log_2, "PACKAGE", "Copied Package name to clipboard!");
			}
			ImGui::EndPopup();
		}

		ImGui::EndListBox();
	}
	ImGui::PushItemWidth(278);
	
	if (ImGui::InputTextWithHint("##CNameSearchBox", "Search for Object...", CNameSearch, sizeof(CNameSearch) - 1, ImGuiInputTextFlags_EnterReturnsTrue) && 
		!PackageViewerWindow::openTabFromCName(std::string(CNameSearch)))
	{
		LogWindow::Log(LogWindow::log_2, "PACKAGEWINDOW", "%s not found! Searching for name is case-sensitive!", CNameSearch);
	}
	ImGui::SameLine();
	if (ImGui::Button(ICON_FA_SEARCH) && !PackageViewerWindow::openTabFromCName(std::string(CNameSearch)))
	{
		LogWindow::Log(LogWindow::log_2, "PACKAGEWINDOW", "%s not found! Searching for name is case-sensitive!", CNameSearch);
	}
	ImGui::PopItemWidth();
	ImGui::EndChild();
	renderUndefinedStructs();
	return false;
}

void windows::PackageWindow::renderEditPopup()
{
	if(EngineSettings::liveEditorEnabled() && !DumpProgress::isAlreadyCompleted())
		return;

	ImGui::Separator();

	if(ImGui::Button(merge(ICON_FA_QUESTION, " Get Undefined Structs")))
	{
		std::make_unique<std::future<void>*>(new auto(std::async(std::launch::async, [] {
			LogWindow::Log(windows::LogWindow::log_2, "PACKAGEWINDOW", "Getting undefined structs...");
			EngineCore::getAllUnknownTypes();
			LogWindow::Log(windows::LogWindow::log_2, "PACKAGEWINDOW", "Done!");
			showUndefinedStructs = true;
			}))).reset();
	}
	if (ImGui::Button(merge(ICON_FA_CLIPBOARD, " Copy Package Names")))
	{
		copyPackageNames();
	}

	if (ImGui::Button(merge(ICON_FA_DOWNLOAD, " Save Changes")))
	{
		EngineCore::generateStructDefinitionsFile();
	}
	ImGui::SameLine();
	ImGui::Text(ICON_FA_QUESTION);
	if (ImGui::IsItemHovered())
	{
		ImGui::BeginTooltip();
		ImGui::PushTextWrapPos(ImGui::GetFontSize() * 35.0f);
		ImGui::TextUnformatted("This won't save your project to disk! This will generate a StructDefinitions.h file with all the changes "
						 "you made (this will include old changes too). ");
		ImGui::PopTextWrapPos();
		ImGui::EndTooltip();
	}
}

void windows::PackageWindow::renderProjectPopup()
{

	if (!HelloWindow::isCompleted())
	{
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
				presentTopMostCallback = true;
				anyProgressDone = 0;
				anyProgressTotal = 1;
				std::make_unique<std::future<void>*>(new auto(std::async(std::launch::async, [st] {
					
					if (EngineCore::loadProject(st, anyProgressDone, anyProgressTotal))
					{
						windows::LogWindow::Log(windows::LogWindow::log_2, "ENGINECORE", "Project loaded!");
						HelloWindow::setCompleted();
					}
					presentTopMostCallback = false;
					}))).reset();

			}
		}
	}

	

	if (EngineSettings::liveEditorEnabled() && !DumpProgress::isAlreadyCompleted())
		return;

	ImGui::Separator();
	
	//force the topmost window rendering when saving the project
	if (ImGui::Button(merge(ICON_FA_DOWNLOAD, " Save Project")) && !presentTopMostCallback)
	{
		presentTopMostCallback = true;
		anyProgressDone = 0;
		anyProgressTotal = 1;
		
		std::make_unique<std::future<void>*>(new auto(std::async(std::launch::async, [] {
			EngineCore::saveToDisk(anyProgressDone, anyProgressTotal);
			presentTopMostCallback = false;
			}))).reset();
		
	}

	ImGui::SameLine();
	ImGui::Text(ICON_FA_QUESTION);
	if (ImGui::IsItemHovered())
	{
		ImGui::BeginTooltip();
		ImGui::PushTextWrapPos(ImGui::GetFontSize() * 35.0f);
		ImGui::TextUnformatted("You can save your project to open up next time in OFFLINE mode. That means that you can do everything you want "
						 "except using the live editor.");
		ImGui::PopTextWrapPos();
		ImGui::EndTooltip();
	}
	
	
	if (ImGui::Button(merge(ICON_FA_DOWNLOAD, " Generate Full SDK")))
	{
		presentTopMostCallback = true;
		anyProgressDone = 0;
		anyProgressTotal = 1;
		std::make_unique<std::future<void>*>(new auto(std::async(std::launch::async, [] {
			LogWindow::Log(LogWindow::log_2, "PACKAGEWINDOW", "Creating SDK...");
			generateSDK(anyProgressDone, anyProgressTotal);
			LogWindow::Log(LogWindow::log_2, "PACKAGEWINDOW", "Done!");
			presentTopMostCallback = false;
			}))).reset();
	}
	if (ImGui::Button(merge(ICON_FA_DOWNLOAD, " Generate Dumps.Host Files")))
	{
		presentTopMostCallback = true;
		anyProgressDone = 0;
		anyProgressTotal = 1;
		std::make_unique<std::future<void>*>(new auto(std::async(std::launch::async, [] {
			LogWindow::Log(LogWindow::log_2, "PACKAGEWINDOW", "Crerating Dumps.Host SDK...");
			DumpsHost::Generate(anyProgressDone, anyProgressTotal);
			LogWindow::Log(LogWindow::log_2, "PACKAGEWINDOW", "Done!");
			presentTopMostCallback = false;
			}))).reset();
	}
	
}

void windows::PackageWindow::topmostCallback()
{
	if(presentTopMostCallback)
	{
		const ImVec2 bigWindow = IGHelper::getWindowSize();
		ImGui::SetNextWindowFocus();
		ImGui::PushStyleVar(ImGuiStyleVar_WindowTitleAlign, ImVec2(0.5f, 0.5f));

		ImGui::Begin("Processing...", nullptr, ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_NoMove);
		ImGui::SetWindowSize(ImVec2(520, 100), ImGuiCond_Once);
		
		const ImVec2 smallWindow = ImGui::GetWindowSize();
		ImGui::SetWindowPos(ImVec2(bigWindow.x / 2 - smallWindow.x / 2, bigWindow.y / 2 - smallWindow.y / 2));
		ImGui::PopStyleVar();
		ImGui::Text("Wait...");
		ImGui::SameLine();
		ImGui::Spinner();
		const float progress = static_cast<float>(anyProgressDone) / anyProgressTotal;
		ImGui::ProgressBar(progress, ImVec2(480, 30));
		
		ImGui::End();
	}
}
