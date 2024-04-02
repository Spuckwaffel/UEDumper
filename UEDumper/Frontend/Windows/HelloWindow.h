#pragma once

#include "stdafx.h"

namespace windows
{
	class HelloWindow
	{
		static inline bool alreadyCompleted = false;
		static inline bool bIsDisabled = false;

	public:
		HelloWindow();

		static bool render();

		static bool isCompleted();

		static void setCompleted();

		static void renderProjectPopup();

		static void disable();
	};
}
