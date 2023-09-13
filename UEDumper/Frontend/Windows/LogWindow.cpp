#include "LogWindow.h"
#include <Settings/EngineSettings.h>



windows::LogWindow::LogWindow()
{

}

void windows::LogWindow::Log(logLevels level, const std::string& origin, const char* fmt, ...)
{
	if (level < logLevel)
		return;

	log l;

	char logBuffer[2001] = {0};
	const auto now_time_t = std::chrono::system_clock::to_time_t(std::chrono::system_clock::now());
	std::tm time_info;
	localtime_s(&time_info, &now_time_t);
	// Format time as a string
	std::ostringstream oss;
	oss << std::put_time(&time_info, "%H:%M:%S");
	va_list args;
	va_start(args, fmt);
	vsprintf_s(logBuffer, 2000, fmt, args);
	l.message = std::string(logBuffer);
	l.originandTime = "[" + oss.str() + " - " + origin + "]:";
	
	logs.push_back(l);
}

int windows::LogWindow::getLogLevel()
{
	return logLevel;
}

std::string windows::LogWindow::getLogLevelName()
{
	return logLevelNames[logLevel];
}

void windows::LogWindow::setLogLevel(int level)
{
	if (level < logLevels::log_MAX)
		logLevel = level;
}

void windows::LogWindow::render()
{
	const int logSize = logs.size();
	const float BigWindowSizeY = ImGui::GetWindowSize().y;
	ImGui::SetCursorPosY(ImGui::GetWindowSize().y - logWindowYSize);
	ImGui::BeginChild("LogChild", ImVec2(ImGui::GetWindowSize().x - 15, logWindowYSize - 10), true, ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_NoScrollWithMouse);
	//ImGui::SetWindowSize(ImVec2(1000, 300), ImGuiCond_Once);

	if(autoScroll)
	{
		selectedLogRange = logSize - logSize % logRange;
	}
	
	if (ImGui::ArrowButton("logselect_btn_fastleft", ImGuiDir_LLeft))
		selectedLogRange = 0;
	ImGui::SameLine();
	if(ImGui::ArrowButton("logselect_btn_left", ImGuiDir_Left) && selectedLogRange >= logRange)
		selectedLogRange -= logRange;
	ImGui::SameLine();
	if(ImGui::ArrowButton("logselect_btn_right", ImGuiDir_Right) && selectedLogRange + logRange < logSize)
		selectedLogRange += logRange;
	ImGui::SameLine();
	if (ImGui::ArrowButton("logselect_btn_fastright", ImGuiDir_RRight))
	{
		while(selectedLogRange + logRange < logSize)
		{
			selectedLogRange += logRange;
		}
	}
	ImGui::SameLine();
	ImGui::Text("Showing Log %d-%d of %d", selectedLogRange, selectedLogRange + logRange - 1 > logSize ? logSize : selectedLogRange + logRange - 1, logSize);
	ImGui::SameLine();
	ImGui::Checkbox("Auto scroll", &autoScroll);
	ImGui::SameLine();
	ImGui::SetCursorPosX(ImGui::GetWindowSize().x / 2 - 30);
	float windowYPos = ImGui::GetWindowPos().y;
	if (ImGui::MoveButton("logwindowmover", ImVec2(50, 30), &windowYPos)) {
		//logging
		//printf("%.2f\n", logWindowYSize);
		logWindowYSize = BigWindowSizeY - windowYPos;
		//set limits
		if (logWindowYSize < 50)
			logWindowYSize = 50;

		else if (logWindowYSize > 600)
			logWindowYSize = 600;
	}
	ImGui::SameLine();
	
	ImGui::SetCursorPosX(ImGui::GetWindowSize().x - ImGui::CalcTextSize("Showing 999 logs").x - 80);

	if (ImGui::ArrowButton("logrange_btn_left", ImGuiDir_Left) && logRange >= 40)
		logRange -= 20;
	ImGui::SameLine();
	if (ImGui::ArrowButton("logrange_btn_right", ImGuiDir_Right) && logRange < 10000)
		logRange += 20;
	ImGui::SameLine();
	ImGui::Text("Showing %d logs", logRange);
	
	char buf[2501] = { 0 };
	if(ImGui::BeginListBox("##loglistbox", ImVec2(ImGui::GetWindowSize().x - 15, ImGui::GetWindowSize().y - 50)))
	{
		for (int i = selectedLogRange; i < logSize && i < selectedLogRange + logRange; i++) {
			const bool is_selected = (selectedLog == i);
			memset(buf, 0, 2500);
			sprintf_s(buf, 2500, "%d %s %s", i, logs[i].originandTime.c_str(), logs[i].message.c_str());
			if (ImGui::Selectable(buf, is_selected)) {
				selectedLog = i;
			}
			if (is_selected && ImGui::IsItemHovered()) {
				ImGui::BeginTooltip();
				ImGui::Text("%s", logs[i].message.c_str());
				ImGui::EndTooltip();
			}
		}

		if(oldSize != logs.size())
		{
			ImGui::SetScrollHereY(1.0f);
			oldSize = logs.size();
		}
		
		ImGui::EndListBox();
	}

	ImGui::EndChild();
}

void windows::LogWindow::renderEditPopup()
{
	if(ImGui::Button("Export Log"))
	{
		std::ofstream file(EngineSettings::getWorkingDirectory() / "log.txt");
		for(size_t i = 0; i < logs.size(); i++)
		{
			file << i << " " << logs[i].originandTime << " " << logs[i].message << std::endl;
		}
		file.close();
		Log(log_2, "LOGWINDOW", "Saved log to %s/%s!", EngineSettings::getWorkingDirectory().string().c_str(), "log.txt");
	}
}

std::string windows::LogWindow::getLastLogMessage()
{
	//returning a copy and not a reference
	//also returning a index rather than calling back because i dont trust back
	return logs[logs.size() - 1].message;
}

float windows::LogWindow::getLogWindowYSize()
{
	return logWindowYSize;
}

void windows::LogWindow::topmostCallback()
{
}
