#pragma once

#include "stdafx.h"

namespace windows
{
	class TopRowButtons
	{
		static inline bool bRenderHelpWindow = false;

		static void renderHelpWindow();
	public:
		TopRowButtons();

		static void renderTopRowButtons();
	};
}