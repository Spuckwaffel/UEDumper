#pragma once

#include "stdafx.h"

namespace windows
{
	class LogWindow
	{
	public:

#define ENUM(x) (int)x

		enum class logLevels
		{
			LOGLEVEL_ONLY_LOG = 2 << 0, //a lot useless log shit
			LOGLEVEL_INFO = 2 << 1,
			LOGLEVEL_WARNING = 2 << 2,
			LOGLEVEL_ERROR = 2 << 3,
			LOGLEVEL_NORMAL =  LOGLEVEL_INFO | LOGLEVEL_WARNING | LOGLEVEL_ERROR,
			LOGLEVEL_ALL = LOGLEVEL_ONLY_LOG | LOGLEVEL_NORMAL,
		};

		static const inline char* logLevelNames[] = {
			"Everything",
			"Infos, warnings and errors"
		};

	private:

		struct log
		{
			std::string originandTime;
			char message[201];
			logLevels level;
		};
		static inline std::mutex logMutex = {};
		static inline std::vector<log> logs{};
		static inline std::vector<log> displayLogs{};
		static inline int oldSize = 0;

		static inline float logWindowYSize = 250;


		static inline int logLevel = ENUM(logLevels::LOGLEVEL_NORMAL);

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