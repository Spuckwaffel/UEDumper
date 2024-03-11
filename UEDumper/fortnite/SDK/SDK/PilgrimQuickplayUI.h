
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CommonUI
/// dependency: CoreUObject
/// dependency: DynamicUI
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: FortniteUI
/// dependency: PilgrimCoreRuntime
/// dependency: UMG

/// Class /Script/PilgrimQuickplayUI.FestivalPassTrackingWidget
/// Size: 0x0010 (0x0002E8 - 0x0002F8)
class UFestivalPassTrackingWidget : public UCommonUserWidget
{ 
public:
	int32_t                                            CurrentProgress;                                            // 0x02E8   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x02EC   (0x0004)  MISSED
	class UFortPersistentResourceItemDefinition*       TrackedItem;                                                // 0x02F0   (0x0008)  


	/// Functions
	// Function /Script/PilgrimQuickplayUI.FestivalPassTrackingWidget.OnProgressUpdated
	// void OnProgressUpdated();                                                                                             // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/PilgrimQuickplayUI.FestivalPassTrackingWidget.HandleMCPInventoryChanged
	// void HandleMCPInventoryChanged(TSet<FString>& ItemChangeFlags, int64_t ProfileRevision);                              // [0xa812658] Final|Native|Protected|HasOutParms 
};

/// Class /Script/PilgrimQuickplayUI.PilgrimDynamicUIDirector
/// Size: 0x0028 (0x0002B0 - 0x0002D8)
class APilgrimDynamicUIDirector : public ADynamicUIDirectorBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x28];                                      // 0x02B0   (0x0028)  MISSED


	/// Functions
	// Function /Script/PilgrimQuickplayUI.PilgrimDynamicUIDirector.HandleCursorModeChanging
	// void HandleCursorModeChanging(bool bCursorModeEnabled, FName ActionName);                                             // [0xa812594] Final|Native|Protected 
};

/// Class /Script/PilgrimQuickplayUI.PilgrimHUDBase
/// Size: 0x0020 (0x000458 - 0x000478)
class UPilgrimHUDBase : public UFortNullHUD
{ 
public:
	SDK_UNDEFINED(32,15336) /* TWeakObjectPtr<UClass*> */ __um(EmotePickerClass);                                  // 0x0458   (0x0020)  


	/// Functions
	// Function /Script/PilgrimQuickplayUI.PilgrimHUDBase.HandlePickerOpenRequest
	// void HandlePickerOpenRequest(EFortPickerMode Mode, int32_t InitialOption, bool bIgnoreFirstAccept);                   // [0xa812820] Final|Native|Private 
};

/// Class /Script/PilgrimQuickplayUI.PilgrimPostGameQuestList
/// Size: 0x0060 (0x0002E8 - 0x000348)
class UPilgrimPostGameQuestList : public UCommonUserWidget
{ 
public:
	class UDynamicEntryBox*                            EntryBox_Quests;                                            // 0x02E8   (0x0008)  
	SDK_UNDEFINED(80,15337) /* TMap<FString, TWeakObjectPtr<UPilgrimQuestNotificationEntry*>> */ __um(QuestWidgetMap); // 0x02F0   (0x0050)  
	bool                                               bShowCompletedQuests;                                       // 0x0340   (0x0001)  
	bool                                               bShowUpdatedQuests;                                         // 0x0341   (0x0001)  
	bool                                               bShowUnchangedQuests;                                       // 0x0342   (0x0001)  
	unsigned char                                      UnknownData00_6[0x5];                                       // 0x0343   (0x0005)  MISSED


	/// Functions
	// Function /Script/PilgrimQuickplayUI.PilgrimPostGameQuestList.SetShowQuests
	// void SetShowQuests(bool bNewShowCompleted, bool bNewShowUpdated, bool bNewShowUnchanged);                             // [0xa812c00] Final|Native|Private|BlueprintCallable 
};

/// Class /Script/PilgrimQuickplayUI.PilgrimQuickplayInfoModal
/// Size: 0x0028 (0x000400 - 0x000428)
class UPilgrimQuickplayInfoModal : public UCommonActivatableWidget
{ 
public:
	class UVerticalBox*                                Vbox_Panels;                                                // 0x0400   (0x0008)  
	class UCommonButtonBase*                           Button_Close;                                               // 0x0408   (0x0008)  
	class UCommonButtonBase*                           Button_Close_Alt;                                           // 0x0410   (0x0008)  
	class UCommonButtonBase*                           Button_CloseTouch;                                          // 0x0418   (0x0008)  
	class UAthenaScrollBox*                            ScrollBox_Panels;                                           // 0x0420   (0x0008)  


	/// Functions
	// Function /Script/PilgrimQuickplayUI.PilgrimQuickplayInfoModal.BP_OnScrollCompleted
	// void BP_OnScrollCompleted(bool bScrolledDown);                                                                        // [0x18a39e4] Event|Protected|BlueprintEvent 
};

/// Class /Script/PilgrimQuickplayUI.PilgrimQuickplaySpotlightList
/// Size: 0x0020 (0x0002E8 - 0x000308)
class UPilgrimQuickplaySpotlightList : public UCommonUserWidget
{ 
public:
	TArray<FPilgrimSpotlightCompetition>               SpotlightCompetitions;                                      // 0x02E8   (0x0010)  
	int32_t                                            MaxSpotlights;                                              // 0x02F8   (0x0004)  
	int32_t                                            SelectedIndex;                                              // 0x02FC   (0x0004)  
	class UDynamicEntryBox*                            EntryBox_SpotlightCompetitions;                             // 0x0300   (0x0008)  


	/// Functions
	// Function /Script/PilgrimQuickplayUI.PilgrimQuickplaySpotlightList.UpdateSpotlightList
	// void UpdateSpotlightList();                                                                                           // [0xa812d40] Final|Native|Public|BlueprintCallable 
	// Function /Script/PilgrimQuickplayUI.PilgrimQuickplaySpotlightList.SetSelectedIndex
	// void SetSelectedIndex(int32_t NewSelectedIndex);                                                                      // [0xa812b64] Final|Native|Public|BlueprintCallable 
	// Function /Script/PilgrimQuickplayUI.PilgrimQuickplaySpotlightList.SetMaxSpotlights
	// void SetMaxSpotlights(int32_t NewMaxSpotlights);                                                                      // [0xa812ae0] Final|Native|Public|BlueprintCallable 
	// Function /Script/PilgrimQuickplayUI.PilgrimQuickplaySpotlightList.SelectPrevIndex
	// void SelectPrevIndex();                                                                                               // [0xa812aa0] Final|Native|Public|BlueprintCallable 
	// Function /Script/PilgrimQuickplayUI.PilgrimQuickplaySpotlightList.SelectNextIndex
	// void SelectNextIndex();                                                                                               // [0xa812a70] Final|Native|Public|BlueprintCallable 
	// Function /Script/PilgrimQuickplayUI.PilgrimQuickplaySpotlightList.PopulateSpotlightCompetitionList
	// void PopulateSpotlightCompetitionList();                                                                              // [0xa812a5c] Final|Native|Public|BlueprintCallable 
	// Function /Script/PilgrimQuickplayUI.PilgrimQuickplaySpotlightList.OnSpotlightListUpdated
	// void OnSpotlightListUpdated();                                                                                        // [0x248ecf4] Native|Event|Protected|BlueprintEvent 
	// Function /Script/PilgrimQuickplayUI.PilgrimQuickplaySpotlightList.GetSelectedIndex
	// int32_t GetSelectedIndex();                                                                                           // [0xa812560] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/PilgrimQuickplayUI.PilgrimQuickplay_UIResultBase
/// Size: 0x0008 (0x000400 - 0x000408)
class UPilgrimQuickplay_UIResultBase : public UCommonActivatableWidget
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0400   (0x0008)  MISSED
};

/// Class /Script/PilgrimQuickplayUI.PilgrimQuestNotificationEntry
/// Size: 0x0030 (0x0002E8 - 0x000318)
class UPilgrimQuestNotificationEntry : public UCommonUserWidget
{ 
public:
	class UCommonTextBlock*                            Text_Description;                                           // 0x02E8   (0x0008)  
	class UCommonTextBlock*                            Text_CategoryDisplay;                                       // 0x02F0   (0x0008)  
	class UCommonTextBlock*                            Text_FlavorText;                                            // 0x02F8   (0x0008)  
	class URichTextBlock*                              RichText_ObjectivesCompleted;                               // 0x0300   (0x0008)  
	class UImage*                                      Image_Completion;                                           // 0x0308   (0x0008)  
	class UAthenaChallengeRewards*                     UserWidget_Rewards;                                         // 0x0310   (0x0008)  


	/// Functions
	// Function /Script/PilgrimQuickplayUI.PilgrimQuestNotificationEntry.InitializeQuestNotification
	// void InitializeQuestNotification(TScriptInterface<Class> InQuest);                                                    // [0xa812918] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/PilgrimQuickplayUI.PilgrimQuickplaySpotlightEntry
/// Size: 0x00A8 (0x0002E8 - 0x000390)
class UPilgrimQuickplaySpotlightEntry : public UCommonUserWidget
{ 
public:
	bool                                               bEmptySpotlight : 1;                                        // 0x02E8:0 (0x0001)  
	unsigned char                                      UnknownData00_4[0x7];                                       // 0x02E9   (0x0007)  MISSED
	class UFortLazyImage*                              Image_SongArt;                                              // 0x02F0   (0x0008)  
	class UCommonTextBlock*                            Text_SongTitle;                                             // 0x02F8   (0x0008)  
	class UCommonTextBlock*                            Text_SongArtist;                                            // 0x0300   (0x0008)  
	class UCommonTextBlock*                            Text_Constraints;                                           // 0x0308   (0x0008)  
	FPilgrimSpotlightCompetition                       SpotlightData;                                              // 0x0310   (0x0070)  
	TArray<class UPilgrimSongMetadata*>                SpotlightSongMetadatas;                                     // 0x0380   (0x0010)  


	/// Functions
	// Function /Script/PilgrimQuickplayUI.PilgrimQuickplaySpotlightEntry.SpotlightEntryUpdated
	// void SpotlightEntryUpdated();                                                                                         // [0xa812d2c] Final|Native|Public|BlueprintCallable 
	// Function /Script/PilgrimQuickplayUI.PilgrimQuickplaySpotlightEntry.SetEmptySpotlight
	// void SetEmptySpotlight();                                                                                             // [0xa812acc] Final|Native|Public|BlueprintCallable 
	// Function /Script/PilgrimQuickplayUI.PilgrimQuickplaySpotlightEntry.OnSpotlightInitialized
	// void OnSpotlightInitialized();                                                                                        // [0x248ecf4] Native|Event|Public|BlueprintEvent 
};

