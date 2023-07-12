#pragma once

#include "stdafx.h"

namespace windows
{
	class LogWindow
	{
	public:

		enum logLevels
		{
			log_0 = 0, //a lot useless log shit
			log_1 = 1, //somewhat important
			log_2 = 2, //important messages
			log_MAX = 3
		};

		static const inline char* logLevelNames[] = {
			"Everything",
			"Frontend, Errors and Dumping Info",
			"Frontend and Error Messages"
			""
		};

	private:
		static inline std::vector<std::string> logs{};
		static inline int oldSize = 0;

		static inline int selectedLog = 0;
		static inline int selectedLogRange = 0;
		static inline int logRange = 100;


		static inline int logLevel = log_0;

	public:
		

		LogWindow();

		static void Log(logLevels level, std::string origin, const char* fmt, ...);

		static int getLogLevel();

		static std::string getLogLevelName();

		static void setLogLevel(int level);

		static void render();

		static void renderEditPopup();
	};
}