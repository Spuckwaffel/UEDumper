#include "DumpProgress.h"


windows::DumpProgress::DumpProgress()
{
}

bool windows::DumpProgress::render()
{
	if (alreadyCompleted) return true;

	//statics
	static dumpProgress GObjectPtrs{};
	static dumpProgress UBigObjects{};
	static dumpProgress FNames{};
	static dumpProgress packages{};

	static uint64_t startDumpTime = 0;

	static bool callOnce = false;
	static bool errorOccurred = false;

	//async job that gets called once
	if(!callOnce)
	{
		callOnce = true;
		//unique pointer using future so the render function can return without waiting for the async thread to complete
		std::make_unique<std::future<void>*>(new auto(std::async(std::launch::async, [] {
			LogWindow::Log(LogWindow::log_2, "DUMPPROGRESS", "Starting dump...");
			startDumpTime = std::chrono::system_clock::to_time_t(std::chrono::system_clock::now());

			EngineCore();

			if (!EngineCore::lastOperationSuccess()) {
				LogWindow::Log(LogWindow::log_2, "DUMPPROGRESS", "Failed to initialize EngineCore!");
				errorOccurred = true;
				return;
			}
			
			EngineCore::copyGObjectPtrs(GObjectPtrs.finishedBytes, GObjectPtrs.totalBytes, GObjectPtrs.status);
			

			if (GObjectPtrs.status != EngineCore::CopyStatus::CS_success)
			{
				LogWindow::Log(LogWindow::log_2, "DUMPPROGRESS", "No success at copyGObjectPtrs!");
				errorOccurred = true;
				return;
			}
				
			
			EngineCore::copyUBigObjects(UBigObjects.finishedBytes, UBigObjects.totalBytes, UBigObjects.status);
			if (UBigObjects.status != EngineCore::CopyStatus::CS_success)
			{
				LogWindow::Log(LogWindow::log_2, "DUMPPROGRESS", "No success at copyUBigObjects!");
				errorOccurred = true;
				return;
			}
			EngineCore::cacheFNames(FNames.finishedBytes, FNames.totalBytes, FNames.status);
			if (FNames.status != EngineCore::CopyStatus::CS_success)
			{
				LogWindow::Log(LogWindow::log_2, "DUMPPROGRESS", "No success at cacheFNames!");
				errorOccurred = true;
				return;
			}
			EngineCore::generatePackages(packages.finishedBytes, packages.totalBytes, packages.status);
			if (packages.status != EngineCore::CopyStatus::CS_success)
			{
				LogWindow::Log(LogWindow::log_2, "DUMPPROGRESS", "No success at cacheFullPackages!");
				errorOccurred = true;
				return;
			}
			LogWindow::Log(LogWindow::log_2, "DUMPPROGRESS", "Finished dumping!");
			//we're done
			alreadyCompleted = true;
			LogWindow::Log(LogWindow::log_0, "DUMPPROGRESS", "Finished everything with %d memory operations!", Memory::getTotalReads());

			EngineSettings::setLiveEditor(true);

		}))).reset();
	}

	const ImVec2 bigWindow = IGHelper::getWindowSize();
	

	ImGui::PushStyleVar(ImGuiStyleVar_WindowTitleAlign, ImVec2(0.5f, 0.5f));

	ImGui::SetNextWindowFocus();
	ImGui::Begin("Dumping...", nullptr,  ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_NoMove);
	ImGui::SetWindowSize(ImVec2(500, 140), ImGuiCond_Once);
	const ImVec2 smallWindow = ImGui::GetWindowSize();
	ImGui::SetWindowPos(ImVec2(bigWindow.x / 2 - smallWindow.x / 2, bigWindow.y / 2 - smallWindow.y / 2));
	ImGui::PopStyleVar();
	
	//check if no success and a status got a error
	if(!EngineCore::lastOperationSuccess() && errorOccurred)
	{
		ImGui::PushFont(IGHelper::getTitleFont());
		ImGui::TextColored(IGHelper::colToVec(255,255,255,255), "EngineCore scan failed!\nCheck the log");

		ImGui::Dummy(ImVec2(smallWindow.x / 2 - 105, 0));
		ImGui::SameLine();
		if(ImGui::Button("Close", ImVec2(180, 35)))
		{
			exit(0);
		}
		ImGui::PopFont();
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

		if(GObjectPtrs.status != EngineCore::CopyStatus::CS_success && GObjectPtrs.status == EngineCore::CopyStatus::CS_busy)
		{
			progress = static_cast<float>(GObjectPtrs.finishedBytes) / GObjectPtrs.totalBytes;
			ImGui::Text("Caching gObject Pointers (%06lld/%06lld)", GObjectPtrs.finishedBytes, GObjectPtrs.totalBytes);
			
		}
		else if (UBigObjects.status != EngineCore::CopyStatus::CS_success && UBigObjects.status == EngineCore::CopyStatus::CS_busy)
		{
			progress = static_cast<float>(UBigObjects.finishedBytes) / UBigObjects.totalBytes;
			ImGui::Text("Caching UBigObjects (%06lld/%06lld)", UBigObjects.finishedBytes, UBigObjects.totalBytes);
		}
		else if (FNames.status != EngineCore::CopyStatus::CS_success && FNames.status == EngineCore::CopyStatus::CS_busy)
		{
			progress = static_cast<float>(FNames.finishedBytes) / FNames.totalBytes;
			ImGui::Text("Caching FNames (%06lld/%06lld)", FNames.finishedBytes, FNames.totalBytes);
		}
		else if (packages.status != EngineCore::CopyStatus::CS_success && packages.status == EngineCore::CopyStatus::CS_busy)
		{
			progress = static_cast<float>(packages.finishedBytes) / packages.totalBytes;
			if(packages.totalBytes == 1)
				ImGui::Text("Caching Packages (?/?)", packages.finishedBytes, packages.totalBytes);
			else
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
	}
	ImGui::End();
	return false;
}

bool windows::DumpProgress::isAlreadyCompleted()
{
	return alreadyCompleted;
}
