#pragma once

#include "stdafx.h"
#include "Engine/Core/Core.h"
#include "Engine/Core/EngineStructs.h"


namespace windows
{
	class PackageViewerWindow
	{
		
	public:
		struct NavigationTab
		{
			//vector of all tab indexes we went through
			std::vector<std::pair<int, EngineCore::ObjectInfo::ObjectType>> tabIndex;
			//at what index are we in the vector? AKA tabindex[currentVecIndex] should be the package index displayed
			int currentVecIndex = 0;

			EngineCore::ObjectInfo::ObjectType currentType = EngineCore::ObjectInfo::ObjectType::OI_MAX;

			nlohmann::json toJson() const
			{
				nlohmann::json j;

				for(const auto& idx : tabIndex)
					j["tabIndex"].push_back(idx);

				j["currentVecIndex"] = currentVecIndex;
				j["currentType"] = currentType;

				return j;
			}

			static NavigationTab fromJson(const nlohmann::json& j)
			{
				NavigationTab n;
				for(const nlohmann::json& js : j["tabIndex"])
					n.tabIndex.push_back(std::pair(js[0], js[1]));

				n.currentVecIndex = j["currentVecIndex"];
				n.currentType = j["currentType"];
				return n;
			}
		};

		struct PackageTab
		{
			int packageSelected = 0; //selected package
			EngineCore::ObjectInfo::ObjectType typeSelected = EngineCore::ObjectInfo::ObjectType::OI_MAX; //selected type
			int itemSelected = 0; //selected item of the type
			int itemRange_S = 0; //current range from n - n+100 of structs
			int itemRange_C = 0; //current range from n - n+100 of classes
			int itemRange_E = 0; //current range from n - n+100 of enums
			int itemRange_F = 0; //current range from n - n+100 of functions
			bool focus = false;
			bool open = false;
			char objectBuf[250] = {0};
			enum class findState {
				FS_none, //no operation
				FS_highlight,//only highlight
				FS_hard //also scroll
			};
			findState findObject = findState::FS_none;
			NavigationTab navTab;

			nlohmann::json toJson() const
			{
				nlohmann::json j;

				j["packageSelected"] = packageSelected;
				j["typeSelected"] = typeSelected;
				j["itemSelected"] = itemSelected;
				j["itemRange_S"] = itemRange_S;
				j["itemRange_C"] = itemRange_C;
				j["itemRange_E"] = itemRange_E;
				j["itemRange_F"] = itemRange_F;
				j["focus"] = focus;
				j["open"] = open;
				j["objectBuf"] = std::string(objectBuf);
				j["findObject"] = findObject;
				j["findObject"] = findObject;
				j["navTab"] = navTab.toJson();

				return j;
			}

			static PackageTab fromJson(const nlohmann::json& j)
			{
				PackageTab p;
				p.packageSelected = j["packageSelected"];
				p.typeSelected = j["typeSelected"];
				p.itemSelected = j["itemSelected"];
				p.itemRange_S = j["itemRange_S"];
				p.itemRange_C = j["itemRange_C"];
				p.itemRange_E = j["itemRange_E"];
				p.itemRange_F = j["itemRange_F"];
				p.focus = j["focus"];
				p.open = j["open"];
				const std::string tmp = j["objectBuf"];
				strcpy(p.objectBuf, tmp.c_str());
				p.findObject = j["findObject"];
				p.navTab = NavigationTab::fromJson(j["navTab"]);

				return p;
			}
		};
		
		static inline int packagePicked = 0;

		static inline bool alreadyCompleted = false;

		static inline std::vector<PackageTab> Tabs;

	public:
		static nlohmann::json getTabsToJson()
		{
			nlohmann::json j;
			for(const auto& tab: Tabs)
				j.push_back(tab.toJson());
			return j;
		}

		static void loadTabsFromJson(const nlohmann::json& j)
		{
			for (const nlohmann::json& js : j)
				Tabs.push_back(PackageTab::fromJson(js));
		}

	private:

		/**
		 * \brief renders a type that has subtypes
		 * \param type root fieldType that contains subTypes
		 * \param inChild whether the data should render in a child
		 */
		static void renderSubTypes(const fieldType& type, bool inChild);

		/**
		 * \brief 
		 * \param tab the current tab this functions gets called in
		 * \param index index of the struct in the vector of structs or class (just used for displaying index number)
		 * \param struc struct
		 */
		static void renderClassOrStruct(PackageTab& tab, int index, EngineStructs::Struct& struc);

		/**
		 * \brief 
		 * \param index index of the enum in the vector of enums (just used for displaying index number)
		 * \param enu enum
		 */
		static void renderEnum(int index, const EngineStructs::Enum& enu);


		static void renderFunction(int index, std::pair<const EngineStructs::Function&, const EngineStructs::Struct&> pair);

		static void setOpenTabsClosed();

		static void updateNavBar(NavigationTab& navtab, int itemSelected, EngineCore::ObjectInfo::ObjectType typeSelected);

		

	public:
		PackageViewerWindow();

		static void renderTabs();

		static bool render();

		static void createTab(int package, int itemSelected = 0, EngineCore::ObjectInfo::ObjectType type = EngineCore::ObjectInfo::ObjectType::OI_Struct);

		static bool openTabFromCName(const std::string& name);

		static void generatePackage(std::ofstream& file, const EngineStructs::Package& package);

		/**
		 * \brief callback function that has to get called at the end of every frame in case
		 * there's something that has to be rendered topmost. Use carefully!
		 */
		static void topmostCallback();
	};
}
