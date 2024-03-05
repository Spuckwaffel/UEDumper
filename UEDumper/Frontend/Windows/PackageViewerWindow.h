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
			std::vector<std::pair<void*, ObjectInfo::ObjectType>> tabIndex{};

			//at what index are we in the vector? AKA tabindex[currentVecIndex] should be the package index displayed
			int currentVecIndex = 0;

			ObjectInfo::ObjectType currentType = ObjectInfo::ObjectType::OI_MAX;

			nlohmann::json toJson() const
			{
				nlohmann::json j;

				nlohmann::json tabindexes;
				for (int i = 0; i < tabIndex.size(); i++)
				{
					auto& idx = tabIndex[i];

					if (idx.second == ObjectInfo::ObjectType::OI_Struct || idx.second == ObjectInfo::ObjectType::OI_Class)
						tabindexes.push_back(static_cast<EngineStructs::Struct*>(idx.first)->cppName);

					else if (idx.second == ObjectInfo::ObjectType::OI_Function)
						tabindexes.push_back(static_cast<EngineStructs::Function*>(idx.first)->cppName);
					else if (idx.second == ObjectInfo::ObjectType::OI_Enum)
						tabindexes.push_back(static_cast<EngineStructs::Enum*>(idx.first)->cppName);
				}
				j["ti"] = tabindexes;
				j["cv"] = currentVecIndex;
				j["ct"] = currentType;

				return j;
			}

			static NavigationTab fromJson(const nlohmann::json& j)
			{
				NavigationTab n;
				for (const nlohmann::json& js : j["ti"])
				{
					if (const auto info = EngineCore::getInfoOfObject(js))
					{
						n.tabIndex.push_back(std::pair(info->target, info->type));
					}
				}

				n.currentVecIndex = j["cv"];
				n.currentType = j["ct"];
				return n;
			}
		};

		struct PackageTab
		{
			EngineStructs::Package* packageSelected = 0; //selected package
			ObjectInfo::ObjectType typeSelected = ObjectInfo::ObjectType::OI_MAX; //selected type
			void* itemSelected = 0; //selected item of the type
			int itemRange_S = 0; //current range from n - n+100 of structs
			int itemRange_C = 0; //current range from n - n+100 of classes
			int itemRange_E = 0; //current range from n - n+100 of enums
			int itemRange_F = 0; //current range from n - n+100 of functions
			bool focus = false;
			bool open = false;
			char objectBuf[250] = { 0 };
			enum class findState {
				FS_none, //no operation
				FS_highlight,//only highlight
				FS_hard //also scroll
			};
			findState findObject = findState::FS_none;

			NavigationTab navTab{};

			nlohmann::json toJson() const
			{
				nlohmann::json j;

				j["ps"] = packageSelected->packageName;
				j["ts"] = typeSelected;
				if (typeSelected == ObjectInfo::ObjectType::OI_Struct || typeSelected == ObjectInfo::ObjectType::OI_Class)
					j["is"] = static_cast<EngineStructs::Struct*>(itemSelected)->cppName;

				else if (typeSelected == ObjectInfo::ObjectType::OI_Function)
					j["is"] = static_cast<EngineStructs::Function*>(itemSelected)->cppName;
				else if (typeSelected == ObjectInfo::ObjectType::OI_Enum)
					j["is"] = static_cast<EngineStructs::Enum*>(itemSelected)->cppName;
				j["irs"] = itemRange_S;
				j["irc"] = itemRange_C;
				j["ire"] = itemRange_E;
				j["irf"] = itemRange_F;
				j["f"] = focus;
				j["o"] = open;
				j["ob"] = std::string(objectBuf);
				j["fo"] = findObject;
				j["nt"] = navTab.toJson();

				return j;
			}

			static PackageTab fromJson(const nlohmann::json& j)
			{
				PackageTab p;
				p.typeSelected = j["ts"];
				const std::string packagename = j["ps"];
				const std::string structname = j["is"];
				for (auto& pack : EngineCore::getPackages())
				{
					if (pack.packageName == packagename)
					{
						p.packageSelected = &pack;
						if (p.typeSelected == ObjectInfo::ObjectType::OI_Struct || p.typeSelected == ObjectInfo::ObjectType::OI_Class)
						{
							for (const auto& st : pack.combinedStructsAndClasses)
							{
								if (st->cppName == structname)
								{
									p.itemSelected = st;
									break;
								}

							}
						}
						else if (p.typeSelected == ObjectInfo::ObjectType::OI_Function)
						{
							for (const auto& fn : pack.functions)
							{
								if (fn->cppName == structname)
								{
									p.itemSelected = fn;
									break;
								}
							}
						}
						else if (p.typeSelected == ObjectInfo::ObjectType::OI_Enum)
						{
							for (auto& en : pack.enums)
							{
								if (en.cppName == structname)
								{
									p.itemSelected = &en;
									break;
								}
							}
						}

						break;
					}
				}
				p.itemRange_S = j["irs"];
				p.itemRange_C = j["irc"];
				p.itemRange_E = j["ire"];
				p.itemRange_F = j["irf"];
				p.focus = j["f"];
				p.open = j["o"];
				const std::string tmp = j["ob"];
				strcpy(p.objectBuf, tmp.c_str());
				p.findObject = j["fo"];
				p.navTab = NavigationTab::fromJson(j["nt"]);

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
			for (const auto& tab : Tabs)
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
		 * \param struc struct
		 */
		static void renderClassOrStruct(PackageTab* tab, EngineStructs::Struct& struc);

		/**
		 * \brief
		 * \param enu enum
		 */
		static void renderEnum(const EngineStructs::Enum& enu);


		static void renderFunction(const EngineStructs::Function& func);

		static void setOpenTabsClosed();

		static void updateNavBar(NavigationTab& navtab, void* itemSelected, ObjectInfo::ObjectType typeSelected);



	public:
		PackageViewerWindow();

		static void renderTabs();

		static bool render();

		static void createTab(void* typeSt, ObjectInfo::ObjectType type = ObjectInfo::ObjectType::OI_Struct);

		static bool openTabFromCName(const std::string& name);

		/**
		 * \brief callback function that has to get called at the end of every frame in case
		 * there's something that has to be rendered topmost. Use carefully!
		 */
		static void topmostCallback();
	};
}
