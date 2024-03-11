
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
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
/// Size: 0x0048 (0x0002E8 - 0x000330)
class UClassSelectorLoadoutContainer : public UCommonUserWidget
{ 
public:
	class UWrapBox*                                    WrapBox;                                                    // 0x02E8   (0x0008)  
	class UClass*                                      EntryWidgetClass;                                           // 0x02F0   (0x0008)  
	TArray<class UAthenaItemElementWidgetBase*>        EntryWidgets;                                               // 0x02F8   (0x0010)  
	class UFortItemDefinition*                         PreviewItemDef;                                             // 0x0308   (0x0008)  
	int32_t                                            NumPreviewEntries;                                          // 0x0310   (0x0004)  
	unsigned char                                      UnknownData00_6[0x1C];                                      // 0x0314   (0x001C)  MISSED
};

/// Class /Script/CRD_ClassSelectorUI.ClassSelectorTabButtons
/// Size: 0x00B8 (0x0002E8 - 0x0003A0)
class UClassSelectorTabButtons : public UCommonUserWidget
{ 
public:
	class UCommonActionWidget*                         LeftActionWidget;                                           // 0x02E8   (0x0008)  
	class UCommonActionWidget*                         RightActionWidget;                                          // 0x02F0   (0x0008)  
	class UScrollBox*                                  TabButtonsScrollBox;                                        // 0x02F8   (0x0008)  
	class UCommonButtonBase*                           LeftButton;                                                 // 0x0300   (0x0008)  
	class UCommonButtonBase*                           RightButton;                                                // 0x0308   (0x0008)  
	FDataTableRowHandle                                LeftInputAction;                                            // 0x0310   (0x0010)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0320   (0x0008)  MISSED
	FDataTableRowHandle                                RightInputAction;                                           // 0x0328   (0x0010)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0338   (0x0008)  MISSED
	TArray<class UClassSelectorTeamTile*>              TabButtons;                                                 // 0x0340   (0x0010)  
	class UClass*                                      TabButtonClass;                                             // 0x0350   (0x0008)  
	FMargin                                            TabButtonPadding;                                           // 0x0358   (0x0010)  
	unsigned char                                      UnknownData02_5[0x8];                                       // 0x0368   (0x0008)  MISSED
	SDK_UNDEFINED(16,12582) /* TArray<FText> */        __um(DesignerPreviewTabNames);                              // 0x0370   (0x0010)  
	float                                              ButtonScrollAmount;                                         // 0x0380   (0x0004)  
	unsigned char                                      UnknownData03_6[0x1C];                                      // 0x0384   (0x001C)  MISSED
};

/// Class /Script/CRD_ClassSelectorUI.ClassSelectorTeamInfoWidget
/// Size: 0x0018 (0x0002C0 - 0x0002D8)
class UClassSelectorTeamInfoWidget : public UUserWidget
{ 
public:
	class UCommonTextBlock*                            TeamName;                                                   // 0x02C0   (0x0008)  
	class UCommonTextBlock*                            TeamCountText;                                              // 0x02C8   (0x0008)  
	class UCommonTextBlock*                            TeamDescription;                                            // 0x02D0   (0x0008)  
};

/// Class /Script/CRD_ClassSelectorUI.CreativeClassSelectorButton
/// Size: 0x0040 (0x001490 - 0x0014D0)
class UCreativeClassSelectorButton : public UCommonButtonBase
{ 
public:
	class UCommonTextBlock*                            ButtonTextBlock;                                            // 0x1490   (0x0008)  
	class UCommonActionWidget*                         ActionWidget;                                               // 0x1498   (0x0008)  
	SDK_UNDEFINED(24,12583) /* FText */                __um(ButtonText);                                           // 0x14A0   (0x0018)  
	FDataTableRowHandle                                buttonInputAction;                                          // 0x14B8   (0x0010)  
	bool                                               bAutoCapitalize;                                            // 0x14C8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x14C9   (0x0007)  MISSED


	/// Functions
	// Function /Script/CRD_ClassSelectorUI.CreativeClassSelectorButton.SetButtonText
	// void SetButtonText(FText& InText);                                                                                    // [0xab87b6c] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/CRD_ClassSelectorUI.ClassSelectorTeamTile
/// Size: 0x00B0 (0x0014D0 - 0x001580)
class UClassSelectorTeamTile : public UCreativeClassSelectorButton
{ 
public:
	unsigned char                                      UnknownData00_3[0x90];                                      // 0x14D0   (0x0090)  MISSED
	class UTextBlock*                                  PlayerCount;                                                // 0x1560   (0x0008)  
	class UCommonLazyImage*                            TeamIconImage;                                              // 0x1568   (0x0008)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x1570   (0x0010)  MISSED


	/// Functions
	// Function /Script/CRD_ClassSelectorUI.ClassSelectorTeamTile.OnTeamSet
	// void OnTeamSet(FMinigameTeam& NewTeamData);                                                                           // [0x18a39e4] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/CRD_ClassSelectorUI.ClassSelectorTeamTile.OnTeamIconSet
	// void OnTeamIconSet(FCreativeIconOption& NewTeamIcon);                                                                 // [0x18a39e4] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/CRD_ClassSelectorUI.ClassSelectorTeamTile.OnTeamColorIndexSet
	// void OnTeamColorIndexSet(int32_t TeamColorIndex);                                                                     // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/CRD_ClassSelectorUI.ClassSelectorTeamTile.OnPlayerCountSet
	// void OnPlayerCountSet(int32_t NewPlayerCount);                                                                        // [0x18a39e4] Event|Public|BlueprintEvent 
};

/// Class /Script/CRD_ClassSelectorUI.ClassSelectorTeamTiles
/// Size: 0x0048 (0x0002E8 - 0x000330)
class UClassSelectorTeamTiles : public UCommonUserWidget
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x02E8   (0x0008)  MISSED
	TArray<class UClassSelectorTeamTile*>              TeamTiles;                                                  // 0x02F0   (0x0010)  
	class UUniformGridPanel*                           RootPanel;                                                  // 0x0300   (0x0008)  
	class UClass*                                      EntryClass;                                                 // 0x0308   (0x0008)  
	int32_t                                            DesignerPreviewEntries;                                     // 0x0310   (0x0004)  
	unsigned char                                      UnknownData01_6[0x1C];                                      // 0x0314   (0x001C)  MISSED
};

/// Class /Script/CRD_ClassSelectorUI.CreativeClassItemInfo
/// Size: 0x0058 (0x000028 - 0x000080)
class UCreativeClassItemInfo : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	FMinigameClassSlot                                 ClassSlot;                                                  // 0x0028   (0x0050)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0078   (0x0008)  MISSED
};

/// Class /Script/CRD_ClassSelectorUI.CreativeClassEntry
/// Size: 0x0010 (0x0014D0 - 0x0014E0)
class UCreativeClassEntry : public UCreativeClassSelectorButton
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x14D0   (0x0008)  MISSED
	class UCreativeClassItemInfo*                      ItemInfo;                                                   // 0x14D8   (0x0008)  


	/// Functions
	// Function /Script/CRD_ClassSelectorUI.CreativeClassEntry.OnClassEntryDataSet
	// void OnClassEntryDataSet(bool bIsCurrentClass, bool bIsPendingClass);                                                 // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/CRD_ClassSelectorUI.CreativeClassEntry.OnBrowsingLoadout
	// void OnBrowsingLoadout(bool bBrowsingLoadout);                                                                        // [0x18a39e4] Event|Public|BlueprintEvent 
};

/// Class /Script/CRD_ClassSelectorUI.CreativeClassSelector
/// Size: 0x0138 (0x000400 - 0x000538)
class UCreativeClassSelector : public UCommonActivatableWidget
{ 
public:
	unsigned char                                      UnknownData00_3[0x10];                                      // 0x0400   (0x0010)  MISSED
	class UClassSelectorTabButtons*                    TabButtons_TeamSelection;                                   // 0x0410   (0x0008)  
	class UCommonListView*                             ListView_Classes;                                           // 0x0418   (0x0008)  
	TArray<class UCreativeClassItemInfo*>              ClassItemInfos;                                             // 0x0420   (0x0010)  
	class UScrollBox*                                  LoadoutScrollBox;                                           // 0x0430   (0x0008)  
	class UClassSelectorLoadoutContainer*              LoadoutContainer_Inventory;                                 // 0x0438   (0x0008)  
	class UClassSelectorLoadoutContainer*              LoadoutContainer_Resources;                                 // 0x0440   (0x0008)  
	class UCommonButtonBase*                           Button_SelectLoadout;                                       // 0x0448   (0x0008)  
	class UCommonButtonBase*                           Button_RandomClass;                                         // 0x0450   (0x0008)  
	class UWidgetSwitcher*                             Switcher_Descriptions;                                      // 0x0458   (0x0008)  
	class UPanelWidget*                                ClassAndTeamDescriptionContainer;                           // 0x0460   (0x0008)  
	class UPanelWidget*                                ItemDescriptionContainer;                                   // 0x0468   (0x0008)  
	class UPanelWidget*                                InventoryPanel;                                             // 0x0470   (0x0008)  
	class UPanelWidget*                                ResourcesPanel;                                             // 0x0478   (0x0008)  
	class UCommonTextBlock*                            ItemRarity;                                                 // 0x0480   (0x0008)  
	class UCommonTextBlock*                            ItemName;                                                   // 0x0488   (0x0008)  
	class UCommonTextBlock*                            ItemDescription;                                            // 0x0490   (0x0008)  
	class UPanelWidget*                                TeamDescriptionContainer;                                   // 0x0498   (0x0008)  
	class UClassSelectorTeamInfoWidget*                TeamInfoWidget_FullView;                                    // 0x04A0   (0x0008)  
	class UClassSelectorTeamInfoWidget*                TeamInfoWidget_TeamsOnly;                                   // 0x04A8   (0x0008)  
	class UWidgetSwitcher*                             DisplaySwitcher;                                            // 0x04B0   (0x0008)  
	class UPanelWidget*                                ClassAndTeamSelectionContainer;                             // 0x04B8   (0x0008)  
	class UPanelWidget*                                OnlyTeamSelectionContainer;                                 // 0x04C0   (0x0008)  
	class UPanelWidget*                                InvalidDataContainer;                                       // 0x04C8   (0x0008)  
	class UClassSelectorTeamTiles*                     TeamTiles;                                                  // 0x04D0   (0x0008)  
	class UClass*                                      TeamSelectionTabClass;                                      // 0x04D8   (0x0008)  
	bool                                               bIsModalVersion;                                            // 0x04E0   (0x0001)  
	bool                                               bEnableModalTimeLimit;                                      // 0x04E1   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x04E2   (0x0002)  MISSED
	int32_t                                            ModalTimeLimitInSeconds;                                    // 0x04E4   (0x0004)  
	unsigned char                                      UnknownData02_5[0x10];                                      // 0x04E8   (0x0010)  MISSED
	EClassSelectorDisplayMode                          DisplayMode;                                                // 0x04F8   (0x0001)  
	bool                                               bDeferRespawn;                                              // 0x04F9   (0x0001)  
	unsigned char                                      UnknownData03_5[0x6];                                       // 0x04FA   (0x0006)  MISSED
	FDataTableRowHandle                                ReturnToClassSelectionInputAction;                          // 0x0500   (0x0010)  
	float                                              LoadoutScrollPadding;                                       // 0x0510   (0x0004)  
	unsigned char                                      UnknownData04_5[0x1C];                                      // 0x0514   (0x001C)  MISSED
	class UCreativeClassItemInfo*                      SelectedClassItemInfo;                                      // 0x0530   (0x0008)  


	/// Functions
	// Function /Script/CRD_ClassSelectorUI.CreativeClassSelector.OnTimerCountdown
	// void OnTimerCountdown(int32_t RemainingTime);                                                                         // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/CRD_ClassSelectorUI.CreativeClassSelector.OnLoadoutCommitted
	// void OnLoadoutCommitted(FText& NewClassName, FText& NewTeamName, bool bNewLoadout);                                   // [0x18a39e4] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/CRD_ClassSelectorUI.CreativeClassSelector.OnClassSelectorUIPopulated
	// void OnClassSelectorUIPopulated(bool bHasValidData);                                                                  // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/CRD_ClassSelectorUI.CreativeClassSelector.OnClassSelectionChanged
	// void OnClassSelectionChanged(FText& NewClassName, FText& NewClassDescription);                                        // [0x18a39e4] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/CRD_ClassSelectorUI.CreativeClassSelector.HandleMinigameStateChanged
	// void HandleMinigameStateChanged(class AFortMinigame* Minigame, EFortMinigameState MinigameState);                     // [0xab87aac] Final|Native|Protected 
	// Function /Script/CRD_ClassSelectorUI.CreativeClassSelector.GetFirstLoadoutItem
	// class UWidget* GetFirstLoadoutItem();                                                                                 // [0xab87a70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/CRD_ClassSelectorUI.CreativeClassSelectorMapTab
/// Size: 0x0078 (0x000400 - 0x000478)
class UCreativeClassSelectorMapTab : public UCommonActivatableWidget
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0400   (0x0028)  MISSED
	FAthenaMapScreenContainerTabInfo                   MapTabInfo;                                                 // 0x0428   (0x0048)  
	class UCreativeClassSelector*                      CreativeClassSelector;                                      // 0x0470   (0x0008)  


	/// Functions
	// Function /Script/CRD_ClassSelectorUI.CreativeClassSelectorMapTab.SetTabName
	// void SetTabName(FText& TabName);                                                                                      // [0xab87c08] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/CRD_ClassSelectorUI.Mutator_ClassSelectorUI
/// Size: 0x0000 (0x000338 - 0x000338)
class AMutator_ClassSelectorUI : public AFortAthenaMutator
{ 
public:
};

