
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CommonUI
/// dependency: CoreUObject
/// dependency: CRD_ClassSelectorRuntime
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: FortniteUI
/// dependency: SlateCore
/// dependency: UMG

/// Class /Script/CRD_ClassSelectorUI.ClassSelectorLoadoutContainer
/// Size: 0x0048 (0x0002F0 - 0x000338)
class UClassSelectorLoadoutContainer : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 824;

public:
	CMember(class UWrapBox*)                           WrapBox                                                     OFFSET(get<T>, {0x2F0, 8, 0, 0})
	CMember(class UClass*)                             EntryWidgetClass                                            OFFSET(get<T>, {0x2F8, 8, 0, 0})
	CMember(TArray<class UAthenaItemElementWidgetBase*>) EntryWidgets                                              OFFSET(get<T>, {0x300, 16, 0, 0})
	CMember(class UFortItemDefinition*)                PreviewItemDef                                              OFFSET(get<T>, {0x310, 8, 0, 0})
	DMember(int32_t)                                   NumPreviewEntries                                           OFFSET(get<int32_t>, {0x318, 4, 0, 0})
};

/// Class /Script/CRD_ClassSelectorUI.ClassSelectorTabButtons
/// Size: 0x00B8 (0x0002F0 - 0x0003A8)
class UClassSelectorTabButtons : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 936;

public:
	CMember(class UCommonActionWidget*)                LeftActionWidget                                            OFFSET(get<T>, {0x2F0, 8, 0, 0})
	CMember(class UCommonActionWidget*)                RightActionWidget                                           OFFSET(get<T>, {0x2F8, 8, 0, 0})
	CMember(class UScrollBox*)                         TabButtonsScrollBox                                         OFFSET(get<T>, {0x300, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  LeftButton                                                  OFFSET(get<T>, {0x308, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  RightButton                                                 OFFSET(get<T>, {0x310, 8, 0, 0})
	SMember(FDataTableRowHandle)                       LeftInputAction                                             OFFSET(getStruct<T>, {0x318, 16, 0, 0})
	SMember(FDataTableRowHandle)                       RightInputAction                                            OFFSET(getStruct<T>, {0x330, 16, 0, 0})
	CMember(TArray<class UClassSelectorTeamTile*>)     TabButtons                                                  OFFSET(get<T>, {0x348, 16, 0, 0})
	CMember(class UClass*)                             TabButtonClass                                              OFFSET(get<T>, {0x358, 8, 0, 0})
	SMember(FMargin)                                   TabButtonPadding                                            OFFSET(getStruct<T>, {0x360, 16, 0, 0})
	CMember(TArray<FText>)                             DesignerPreviewTabNames                                     OFFSET(get<T>, {0x378, 16, 0, 0})
	DMember(float)                                     ButtonScrollAmount                                          OFFSET(get<float>, {0x388, 4, 0, 0})
};

/// Class /Script/CRD_ClassSelectorUI.ClassSelectorTeamInfoWidget
/// Size: 0x0018 (0x0002C8 - 0x0002E0)
class UClassSelectorTeamInfoWidget : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 736;

public:
	CMember(class UCommonTextBlock*)                   TeamName                                                    OFFSET(get<T>, {0x2C8, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   TeamCountText                                               OFFSET(get<T>, {0x2D0, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   TeamDescription                                             OFFSET(get<T>, {0x2D8, 8, 0, 0})
};

/// Class /Script/CRD_ClassSelectorUI.CreativeClassSelectorButton
/// Size: 0x0040 (0x0014A0 - 0x0014E0)
class UCreativeClassSelectorButton : public UCommonButtonBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5344;

public:
	CMember(class UCommonTextBlock*)                   ButtonTextBlock                                             OFFSET(get<T>, {0x14A0, 8, 0, 0})
	CMember(class UCommonActionWidget*)                ActionWidget                                                OFFSET(get<T>, {0x14A8, 8, 0, 0})
	SMember(FText)                                     ButtonText                                                  OFFSET(getStruct<T>, {0x14B0, 16, 0, 0})
	SMember(FDataTableRowHandle)                       buttonInputAction                                           OFFSET(getStruct<T>, {0x14C0, 16, 0, 0})
	DMember(bool)                                      bAutoCapitalize                                             OFFSET(get<bool>, {0x14D0, 1, 0, 0})


	/// Functions
	// Function /Script/CRD_ClassSelectorUI.CreativeClassSelectorButton.SetButtonText
	// void SetButtonText(FText& InText);                                                                                       // [0xc7480a4] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/CRD_ClassSelectorUI.ClassSelectorTeamTile
/// Size: 0x0090 (0x0014E0 - 0x001570)
class UClassSelectorTeamTile : public UCreativeClassSelectorButton
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5488;

public:
	CMember(class UTextBlock*)                         PlayerCount                                                 OFFSET(get<T>, {0x1558, 8, 0, 0})
	CMember(class UCommonLazyImage*)                   TeamIconImage                                               OFFSET(get<T>, {0x1560, 8, 0, 0})


	/// Functions
	// Function /Script/CRD_ClassSelectorUI.ClassSelectorTeamTile.OnTeamSet
	// void OnTeamSet(FMinigameTeam& NewTeamData);                                                                              // [0x228deb8] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/CRD_ClassSelectorUI.ClassSelectorTeamTile.OnTeamIconSet
	// void OnTeamIconSet(FCreativeIconOption& NewTeamIcon);                                                                    // [0x228deb8] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/CRD_ClassSelectorUI.ClassSelectorTeamTile.OnTeamColorIndexSet
	// void OnTeamColorIndexSet(int32_t TeamColorIndex);                                                                        // [0x228deb8] Event|Public|BlueprintEvent 
	// Function /Script/CRD_ClassSelectorUI.ClassSelectorTeamTile.OnPlayerCountSet
	// void OnPlayerCountSet(int32_t NewPlayerCount);                                                                           // [0x228deb8] Event|Public|BlueprintEvent 
};

/// Class /Script/CRD_ClassSelectorUI.ClassSelectorTeamTiles
/// Size: 0x0048 (0x0002F0 - 0x000338)
class UClassSelectorTeamTiles : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 824;

public:
	CMember(TArray<class UClassSelectorTeamTile*>)     TeamTiles                                                   OFFSET(get<T>, {0x2F8, 16, 0, 0})
	CMember(class UUniformGridPanel*)                  RootPanel                                                   OFFSET(get<T>, {0x308, 8, 0, 0})
	CMember(class UClass*)                             EntryClass                                                  OFFSET(get<T>, {0x310, 8, 0, 0})
	DMember(int32_t)                                   DesignerPreviewEntries                                      OFFSET(get<int32_t>, {0x318, 4, 0, 0})
};

/// Class /Script/CRD_ClassSelectorUI.CreativeClassItemInfo
/// Size: 0x0048 (0x000028 - 0x000070)
class UCreativeClassItemInfo : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FMinigameClassSlot)                        ClassSlot                                                   OFFSET(getStruct<T>, {0x28, 64, 0, 0})
};

/// Class /Script/CRD_ClassSelectorUI.CreativeClassEntry
/// Size: 0x0010 (0x0014E0 - 0x0014F0)
class UCreativeClassEntry : public UCreativeClassSelectorButton
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5360;

public:
	CMember(class UCreativeClassItemInfo*)             ItemInfo                                                    OFFSET(get<T>, {0x14E0, 8, 0, 0})


	/// Functions
	// Function /Script/CRD_ClassSelectorUI.CreativeClassEntry.OnClassEntryDataSet
	// void OnClassEntryDataSet(bool bIsCurrentClass, bool bIsPendingClass);                                                    // [0x228deb8] Event|Public|BlueprintEvent 
	// Function /Script/CRD_ClassSelectorUI.CreativeClassEntry.OnBrowsingLoadout
	// void OnBrowsingLoadout(bool bBrowsingLoadout);                                                                           // [0x228deb8] Event|Public|BlueprintEvent 
};

/// Class /Script/CRD_ClassSelectorUI.CreativeClassSelector
/// Size: 0x0138 (0x000408 - 0x000540)
class UCreativeClassSelector : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1344;

public:
	CMember(class UClassSelectorTabButtons*)           TabButtons_TeamSelection                                    OFFSET(get<T>, {0x418, 8, 0, 0})
	CMember(class UCommonListView*)                    ListView_Classes                                            OFFSET(get<T>, {0x420, 8, 0, 0})
	CMember(TArray<class UCreativeClassItemInfo*>)     ClassItemInfos                                              OFFSET(get<T>, {0x428, 16, 0, 0})
	CMember(class UScrollBox*)                         LoadoutScrollBox                                            OFFSET(get<T>, {0x438, 8, 0, 0})
	CMember(class UClassSelectorLoadoutContainer*)     LoadoutContainer_Inventory                                  OFFSET(get<T>, {0x440, 8, 0, 0})
	CMember(class UClassSelectorLoadoutContainer*)     LoadoutContainer_Resources                                  OFFSET(get<T>, {0x448, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_SelectLoadout                                        OFFSET(get<T>, {0x450, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_RandomClass                                          OFFSET(get<T>, {0x458, 8, 0, 0})
	CMember(class UWidgetSwitcher*)                    Switcher_Descriptions                                       OFFSET(get<T>, {0x460, 8, 0, 0})
	CMember(class UPanelWidget*)                       ClassAndTeamDescriptionContainer                            OFFSET(get<T>, {0x468, 8, 0, 0})
	CMember(class UPanelWidget*)                       ItemDescriptionContainer                                    OFFSET(get<T>, {0x470, 8, 0, 0})
	CMember(class UPanelWidget*)                       InventoryPanel                                              OFFSET(get<T>, {0x478, 8, 0, 0})
	CMember(class UPanelWidget*)                       ResourcesPanel                                              OFFSET(get<T>, {0x480, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   ItemRarity                                                  OFFSET(get<T>, {0x488, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   ItemName                                                    OFFSET(get<T>, {0x490, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   ItemDescription                                             OFFSET(get<T>, {0x498, 8, 0, 0})
	CMember(class UPanelWidget*)                       TeamDescriptionContainer                                    OFFSET(get<T>, {0x4A0, 8, 0, 0})
	CMember(class UClassSelectorTeamInfoWidget*)       TeamInfoWidget_FullView                                     OFFSET(get<T>, {0x4A8, 8, 0, 0})
	CMember(class UClassSelectorTeamInfoWidget*)       TeamInfoWidget_TeamsOnly                                    OFFSET(get<T>, {0x4B0, 8, 0, 0})
	CMember(class UWidgetSwitcher*)                    DisplaySwitcher                                             OFFSET(get<T>, {0x4B8, 8, 0, 0})
	CMember(class UPanelWidget*)                       ClassAndTeamSelectionContainer                              OFFSET(get<T>, {0x4C0, 8, 0, 0})
	CMember(class UPanelWidget*)                       OnlyTeamSelectionContainer                                  OFFSET(get<T>, {0x4C8, 8, 0, 0})
	CMember(class UPanelWidget*)                       InvalidDataContainer                                        OFFSET(get<T>, {0x4D0, 8, 0, 0})
	CMember(class UClassSelectorTeamTiles*)            TeamTiles                                                   OFFSET(get<T>, {0x4D8, 8, 0, 0})
	CMember(class UClass*)                             TeamSelectionTabClass                                       OFFSET(get<T>, {0x4E0, 8, 0, 0})
	DMember(bool)                                      bIsModalVersion                                             OFFSET(get<bool>, {0x4E8, 1, 0, 0})
	DMember(bool)                                      bEnableModalTimeLimit                                       OFFSET(get<bool>, {0x4E9, 1, 0, 0})
	DMember(int32_t)                                   ModalTimeLimitInSeconds                                     OFFSET(get<int32_t>, {0x4EC, 4, 0, 0})
	CMember(EClassSelectorDisplayMode)                 DisplayMode                                                 OFFSET(get<T>, {0x500, 1, 0, 0})
	DMember(bool)                                      bDeferRespawn                                               OFFSET(get<bool>, {0x501, 1, 0, 0})
	SMember(FDataTableRowHandle)                       ReturnToClassSelectionInputAction                           OFFSET(getStruct<T>, {0x508, 16, 0, 0})
	DMember(float)                                     LoadoutScrollPadding                                        OFFSET(get<float>, {0x518, 4, 0, 0})
	CMember(class UCreativeClassItemInfo*)             SelectedClassItemInfo                                       OFFSET(get<T>, {0x538, 8, 0, 0})


	/// Functions
	// Function /Script/CRD_ClassSelectorUI.CreativeClassSelector.OnTimerCountdown
	// void OnTimerCountdown(int32_t RemainingTime);                                                                            // [0x228deb8] Event|Protected|BlueprintEvent 
	// Function /Script/CRD_ClassSelectorUI.CreativeClassSelector.OnLoadoutCommitted
	// void OnLoadoutCommitted(FText& NewClassName, FText& NewTeamName, bool bNewLoadout, bool bDefer, char SelectedClassIndex); // [0x228deb8] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/CRD_ClassSelectorUI.CreativeClassSelector.OnClassSelectorUIPopulated
	// void OnClassSelectorUIPopulated(bool bHasValidData);                                                                     // [0x228deb8] Event|Protected|BlueprintEvent 
	// Function /Script/CRD_ClassSelectorUI.CreativeClassSelector.OnClassSelectionChanged
	// void OnClassSelectionChanged(FText& NewClassName, FText& NewClassDescription);                                           // [0x228deb8] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/CRD_ClassSelectorUI.CreativeClassSelector.HandleMinigameStateChanged
	// void HandleMinigameStateChanged(class AFortMinigame* Minigame, EFortMinigameState MinigameState);                        // [0xc747fe4] Final|Native|Protected 
	// Function /Script/CRD_ClassSelectorUI.CreativeClassSelector.GetFirstLoadoutItem
	// class UWidget* GetFirstLoadoutItem();                                                                                    // [0xc747fa8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/CRD_ClassSelectorUI.CreativeClassSelectorMapTab
/// Size: 0x0070 (0x000408 - 0x000478)
class UCreativeClassSelectorMapTab : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1144;

public:
	SMember(FAthenaMapScreenContainerTabInfo)          MapTabInfo                                                  OFFSET(getStruct<T>, {0x430, 64, 0, 0})
	CMember(class UCreativeClassSelector*)             CreativeClassSelector                                       OFFSET(get<T>, {0x470, 8, 0, 0})


	/// Functions
	// Function /Script/CRD_ClassSelectorUI.CreativeClassSelectorMapTab.SetTabName
	// void SetTabName(FText& TabName);                                                                                         // [0xc748140] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/CRD_ClassSelectorUI.Mutator_ClassSelectorUI
/// Size: 0x0000 (0x000338 - 0x000338)
class AMutator_ClassSelectorUI : public AFortAthenaMutator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 824;

public:
};

