#pragma once

#include "stdafx.h"


namespace windows
{
	class PackageViewerWindow
	{
		

		struct NavigationTab
		{
			//vector of all tab indexes we went through
			std::vector<std::pair<int, EngineCore::ObjectInfo::ObjectType>> tabIndex;
			//at what index are we in the vector? AKA tabindex[currentVecIndex] should be the package index displayed
			int currentVecIndex = 0;

			EngineCore::ObjectInfo::ObjectType currentType = EngineCore::ObjectInfo::ObjectType::OI_MAX;
		};

		struct PackageTab
		{


			int packageSelected = 0; //slsected package
			EngineCore::ObjectInfo::ObjectType typeSelected = EngineCore::ObjectInfo::ObjectType::OI_MAX; //selected type
			int itemSelected = 0; //seleted item of the type
			int itemRange_S = 0; //current range from n - n+100 of structs
			int itemRange_C = 0; //current range from n - n+100 of classes
			int itemRange_E = 0; //current range from n - n+100 of enums
			int itemRange_F = 0; //current range from n - n+100 of functions
			bool focus = false;
			bool open = false;
			NavigationTab navTab;
		};
		

	private:
		
		
		static inline int packagePicked = 0;

		static inline bool alreadyCompleted = false;

		static inline std::vector<PackageTab> Tabs;

		/**
		 * \brief renders a type that has subtypes
		 * \param type root fieldType that contains subTypes
		 * \param inChild whether the data should render in a child
		 */
		static void renderSubTypes(const fieldType& type, bool inChild);

		/**
		 * \brief 
		 * \param index index of the struct in the vector of structs or class(just used for displaying index number)
		 * \param struc struct
		 */
		static void renderClassOrStruct(int index, EngineStructs::Struct& struc);

		/**
		 * \brief 
		 * \param index index of the enum in the vector of enums
		 * \param enu enum
		 */
		static void renderEnum(int index, const EngineStructs::Enum& enu);


		static void renderFunction(int index, const EngineStructs::Function& func);

		static void setOpenTabsClosed();

		static void updateNavBar(NavigationTab& navtab, int itemSelected, EngineCore::ObjectInfo::ObjectType typeSelected);

		

	public:
		PackageViewerWindow();

		static void renderTabs();

		static bool render();

		static void createTab(int package, int itemSelected = 0, EngineCore::ObjectInfo::ObjectType type = EngineCore::ObjectInfo::ObjectType::OI_Struct);

		static bool openTabFromCName(const std::string& name);

		static void generatePackage(std::ofstream& file, const EngineStructs::Package& package);
	};
}