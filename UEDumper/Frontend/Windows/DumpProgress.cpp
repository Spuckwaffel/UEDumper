#include "DumpProgress.h"

#include "LogWindow.h"
#include "Engine/Core/Core.h"
#include <Engine/Core/ObjectsManager.h>
#include <Settings/EngineSettings.h>

#include "Frontend/IGHelper.h"
#include "Frontend/Texture/TextureCreator.h"
#include "Memory/memory.h"


windows::DumpProgress::DumpProgress()
{
}

bool windows::DumpProgress::render()
{
	if (bAlreadyCompleted) return true;

	//statics
	static dumpProgress GObjectPtrs{};
	static dumpProgress UBigObjects{};
	static dumpProgress FNames{};
	static dumpProgress packages{};

	static uint64_t startDumpTime = 0;

	static bool callOnce = false;
	static bool errorOccurred = false;
	static std::string errorMessage = "";

	//async job that gets called once
	if(!callOnce)
	{
		callOnce = true;
		//unique pointer using future so the render function can return without waiting for the async thread to complete
		std::make_unique<std::future<void>*>(new auto(std::async(std::launch::async, [] {
			bIsBusy = true;
			LogWindow::Log(LogWindow::log_2, "DUMPPROGRESS", "Starting dump...");
			startDumpTime = std::chrono::system_clock::to_time_t(std::chrono::system_clock::now());

			EngineCore();

			if (!EngineCore::initSuccess()) {
				errorMessage = LogWindow::getLastLogMessage();
				LogWindow::Log(LogWindow::log_2, "DUMPPROGRESS", "Failed to initialize EngineCore!");
				errorOccurred = true;
				return;
			}

			ObjectsManager();

			if (!ObjectsManager::operationSuccess(errorMessage)) {
				LogWindow::Log(LogWindow::log_2, "DUMPPROGRESS", "Failed to initialize EngineCore!");
				errorOccurred = true;
				errorMessage = ObjectsManager::getErrorMessage();
				return;
			}
			
			ObjectsManager::copyGObjectPtrs(GObjectPtrs.finishedBytes, GObjectPtrs.totalBytes, GObjectPtrs.status);
			

			if (GObjectPtrs.status != CopyStatus::CS_success)
			{
				LogWindow::Log(LogWindow::log_2, "DUMPPROGRESS", "No success at copyGObjectPtrs!");
				errorOccurred = true;
				errorMessage = ObjectsManager::getErrorMessage();
				return;
			}
				
			
			ObjectsManager::copyUBigObjects(UBigObjects.finishedBytes, UBigObjects.totalBytes, UBigObjects.status);
			if (UBigObjects.status != CopyStatus::CS_success)
			{
				LogWindow::Log(LogWindow::log_2, "DUMPPROGRESS", "No success at copyUBigObjects!");
				errorOccurred = true;
				errorMessage = ObjectsManager::getErrorMessage();
				return;
			}
			EngineCore::cacheFNames(FNames.finishedBytes, FNames.totalBytes, FNames.status);
			if (FNames.status != CopyStatus::CS_success)
			{
				LogWindow::Log(LogWindow::log_2, "DUMPPROGRESS", "No success at caching FNames!");
				errorOccurred = true;
				errorMessage = LogWindow::getLastLogMessage();
				return;
			}
			EngineCore::generatePackages(packages.finishedBytes, packages.totalBytes, packages.status);
			if (packages.status != CopyStatus::CS_success)
			{
				errorMessage = LogWindow::getLastLogMessage();
				LogWindow::Log(LogWindow::log_2, "DUMPPROGRESS", "No success at generating Packages!");
				errorOccurred = true;
				return;
			}
			LogWindow::Log(LogWindow::log_2, "DUMPPROGRESS", "Finished dumping!");
			//we're done
			bAlreadyCompleted = true;
			bIsBusy = false;
			LogWindow::Log(LogWindow::log_0, "DUMPPROGRESS", "Finished everything with %d memory operations!", Memory::getTotalReads());

			ObjectsManager::setSDKGenerationDone();
			EngineSettings::setLiveEditor(true);

		}))).reset();
	}

	const ImVec2 bigWindow = IGHelper::getWindowSize();

	constexpr auto childSize = ImVec2(600, 240);
	ImGui::SetCursorPos(ImVec2(bigWindow.x / 2 - childSize.x / 2, bigWindow.y / 2 - childSize.y / 2));

	ImGui::BeginChild("DumpingChild", childSize, true, ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_NoMove | ImGuiWindowFlags_NoScrollWithMouse);
	IGHelper::placeInCenter("Dumping...");
	
	//check if no success and a status got a error
	if(errorOccurred)
	{
		ImGui::SetCursorPosY(40);
		ImGui::Image(TextureCreator::getTexture("warninglogo"), ImVec2(150, 150));
		ImGui::SameLine();
		ImGui::BeginChild("ObjectsManagerTopMostCallbackChild", ImVec2(380, 150), false, ImGuiWindowFlags_NoScrollWithMouse);
		ImGui::TextWrapped("Sorry! You ran into a unrecoverable error that forces the Dumper to close.");
		ImGui::TextWrapped(errorMessage.c_str());
		ImGui::EndChild();
		ImGui::Dummy(ImVec2(ImGui::GetWindowSize().x / 2 - 65, 0));
		ImGui::SameLine();
		if (ImGui::Button("Exit", ImVec2(90, 40)))
		{
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		//time for some fancy rendering of the progress bar
		const time_t timeOffset = std::chrono::system_clock::to_time_t(std::chrono::system_clock::now()) - startDumpTime;
		std::tm timeInfo;
		localtime_s(&timeInfo, &timeOffset);
		std::ostringstream timeStr;
		timeStr << std::put_time(&timeInfo, "%M:%S");
		ImGui::Text("Dump in progress %s", timeStr.str().c_str());
		ImGui::SameLine();
		ImGui::Spinner();
		float progress;

		if(GObjectPtrs.status != CopyStatus::CS_success && GObjectPtrs.status == CopyStatus::CS_busy)
		{
			progress = static_cast<float>(GObjectPtrs.finishedBytes) / GObjectPtrs.totalBytes;
			ImGui::Text("Caching gObject Pointers (%06lld/%06lld)", GObjectPtrs.finishedBytes, GObjectPtrs.totalBytes);
			
		}
		else if (UBigObjects.status != CopyStatus::CS_success && UBigObjects.status == CopyStatus::CS_busy)
		{
			progress = static_cast<float>(UBigObjects.finishedBytes) / UBigObjects.totalBytes;
			ImGui::Text("Caching UBigObjects (%06lld/%06lld)", UBigObjects.finishedBytes, UBigObjects.totalBytes);
		}
		else if (FNames.status != CopyStatus::CS_success && FNames.status == CopyStatus::CS_busy)
		{
			progress = static_cast<float>(FNames.finishedBytes) / FNames.totalBytes;
			ImGui::Text("Caching FNames (%06lld/%06lld)", FNames.finishedBytes, FNames.totalBytes);
		}
		else if (packages.status != CopyStatus::CS_success && packages.status == CopyStatus::CS_busy)
		{
			progress = static_cast<float>(packages.finishedBytes) / packages.totalBytes;
			ImGui::Text("Caching Packages (%03lld/%03lld)", packages.finishedBytes, packages.totalBytes);
		}
		else
		{
			//no progress bar if status is unknown
			goto skip;
		}


		ImGui::ProgressBar(progress, ImVec2(480, 30));
		skip: {
			//-
		}
		ImGui::Text(LogWindow::getLastLogMessage().c_str());
	}
	ImGui::EndChild();
	return false;
}

bool windows::DumpProgress::isBusy()
{
	return bIsBusy;
}

bool windows::DumpProgress::isAlreadyCompleted()
{
	return bAlreadyCompleted;
}
