#pragma once

#include "stdafx.h"

namespace windows
{
	class DumpProgress
	{
		//completed flag whether to render this window or not
		static inline bool alreadyCompleted = false;

		struct dumpProgress
		{
			int64_t finishedBytes = 0;
			int64_t totalBytes = 1;
			EngineCore::CopyStatus status = EngineCore::CopyStatus::CS_idle;
		};


	public:
		DumpProgress();

		static bool render();

		static bool isAlreadyCompleted();
	};
}