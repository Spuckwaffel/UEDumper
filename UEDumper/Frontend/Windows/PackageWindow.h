#pragma once

#include "stdafx.h"

namespace windows
{
	class PackageWindow
	{
		

		static inline bool alreadyCompleted = false;

		static inline bool showUndefinedStructs = false;

		//for any progress bars needed in this class
		static inline int anyProgressDone = 0;
		static inline int anyProgressTotal = 1;

		static inline bool presentTopMostCallback = false;
		
		static void renderUndefinedStructs();

		static void generateSDK(int& progressDone, int& totalProgress);

		static void copyPackageNames();

	public:
		PackageWindow();

		/**
		 * \brief renders this window
		 * \return whether this states rendering is getting skipped (internally)
		 */
		static bool render();

		/**
		 * \brief popup handler from the top row button "Edit"
		 */
		static void renderEditPopup();

		/**
		 * \brief popup handler from the top row button "Project"
		 */
		static void renderProjectPopup();

		/**
		 * \brief callback function that has to get called at the end of every frame in case
		 * there's something that has to be rendered topmost. Use carefully!
		 */
		static void topmostCallback();
	};
}