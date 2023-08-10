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

		struct log
		{
			std::string originandTime;
			std::string message;
		};
		static inline std::vector<log> logs{};
		static inline int oldSize = 0;

		static inline int selectedLog = 0;
		static inline int selectedLogRange = 0;
		static inline int logRange = 100;
		static inline bool autoScroll = true;


		static inline int logLevel = log_0;

	public:
		

		LogWindow();

		static void Log(logLevels level, const std::string& origin, const char* fmt, ...);

		static int getLogLevel();

		static std::string getLogLevelName();

		static void setLogLevel(int level);

		static void render();

		static void renderEditPopup();

		static std::string getLastLogMessage();

		/**
		 * \brief callback function that has to get called at the end of every frame in case
		 * there's something that has to be rendered topmost. Use carefully!
		 */
		static void topmostCallback();
	};
}