#pragma once

#include "stdafx.h"
#include "Engine/Core/EngineStructs.h"

namespace windows
{
	class DumpProgress
	{
		//completed flag whether to render this window or not
		static inline bool bAlreadyCompleted = false;
		static inline bool bIsBusy = false;


		struct dumpProgress
		{
			int64_t finishedBytes = 0;
			int64_t totalBytes = 1;
			CopyStatus status = CopyStatus::CS_idle;
		};


	public:
		DumpProgress();

		static bool render();

		/**
		 * \brief whether dumping progress is running
		 * \return dumper is busy
		 */
		static bool isBusy();

		/**
		 * \brief whether the dump progress is not finished
		 * \return this stage is completed
		 */
		static bool isAlreadyCompleted();
	};
}
