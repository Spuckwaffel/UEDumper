#pragma once

#include "stdafx.h"

namespace windows
{
	class LogWindow
	{
	public:

#define LOGLEVEL_ALL_DEBUG_MESSAGES log_0
#define LOGLEVEL_SMALL_WARNINGS_AND_INFOS log_1
#define LOGLEVEL_ONLY_IMPORTANT_MESSAGES log_2

		enum logLevels
		{
			LOGLEVEL_ALL_DEBUG_MESSAGES = 0, //a lot useless log shit
			LOGLEVEL_SMALL_WARNINGS_AND_INFOS = 1, //somewhat important
			LOGLEVEL_ONLY_IMPORTANT_MESSAGES = 2, //important messages
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

		static inline float logWindowYSize = 310;


		static inline int logLevel = LOGLEVEL_ALL_DEBUG_MESSAGES;

	public:
		

		LogWindow();

		static void Log(logLevels level, const std::string& origin, const char* fmt, ...);

		static int getLogLevel();

		static std::string getLogLevelName();

		static void setLogLevel(int level);

		static void render();

		static void renderEditPopup();

		static std::string getLastLogMessage();

		static float getLogWindowYSize();

		/**
		 * \brief callback function that has to get called at the end of every frame in case
		 * there's something that has to be rendered topmost. Use carefully!
		 */
		static void topmostCallback();
	};
}