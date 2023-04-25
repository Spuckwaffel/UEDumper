#pragma once

#include "stdafx.h"

namespace windows
{
	class LogWindow
	{
	public:

		enum logLevels
		{
			log_0 = 0,
			log_1 = 1,
			log_2 = 2,
			log_3 = 3,
			log_4 = 4,
			log_MAX = 5
		};

	private:
		static inline std::vector<std::string> logs{};
		static inline int oldSize = 0;

		static inline int selectedLog = 0;
		static inline int selectedLogRange = 0;
		static inline int logRange = 100;


		static inline int logLevel = log_4;

	public:
		

		LogWindow();

		static void Log(logLevels level, std::string origin, const char* fmt, ...);

		static int getLogLevel();

		static void setLogLevel(int level);

		static void render();

		static void renderEditPopup();
	};
}