#pragma once

#include "stdafx.h"

namespace windows
{
	class PackageViewerWindow
	{
		
	public:

		struct NavigationTab
		{
			//vector of all tab indexes we went through
			std::vector<int> tabIndex;
			//at what index are we in the vector? AKA tabindex[currentVecIndex] should be the package index displayed
			int currentVecIndex = 0;
		};

		struct PackageTab
		{
			int packageSelected = 0;
			int itemSelected = 0;
			int itemRange = 0;
			bool focus = false;
			bool open = false;
			NavigationTab navTab;
		};
		

	private:
		
		
		static inline int packagePicked = 0;

		static inline bool alreadyCompleted = false;

		static inline std::vector<PackageTab> Tabs;

		

		

		static void renderClassOrStruct(EngineStructs::Package& package, int index);

		static void renderEnum(const EngineStructs::Package& package, int index);

		static void setOpenTabsClosed();

		

		static void updateNavBar(NavigationTab& navtab, int itemSelected);

		

	public:
		PackageViewerWindow();

		static void renderTabs();

		static bool render();

		static void createTab(int package, int itemSelected = 0);

		static bool openTabFromCName(const std::string& name);

		static void generatePackage(std::ofstream& file, const EngineStructs::Package& package);
	};
}