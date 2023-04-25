#pragma once

#include "stdafx.h"

namespace windows
{
	class PackageWindow
	{
		

		static inline bool alreadyCompleted = false;

		

		static inline bool showUndefinedStructs = false;
		
		static void renderUndefinedStructs();

		static void generateSDK();

		static void copyPackageNames();

	public:
		PackageWindow();

		static bool render();

		static void renderEditPopup();

		static void renderProjectPopup();
	};
}