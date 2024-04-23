
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CommonUI
/// dependency: CoreUObject
/// dependency: DynamicUI
/// dependency: Engine
/// dependency: FortniteUI
/// dependency: UMG

/// Class /Script/VKEditUI.VKConnectionIndicator
/// Size: 0x0200 (0x000408 - 0x000608)
class UVKConnectionIndicator : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1544;

public:
	SMember(FText)                                     EditStatusLocalizedText                                     OFFSET(getStruct<T>, {0x408, 160, 0, 0})
	SMember(FDataTableRowHandle)                       OpenLogInputAction                                          OFFSET(getStruct<T>, {0x4A8, 16, 0, 0})
	CMember(class UObject*)                            StatusIcon_NotConnected                                     OFFSET(get<T>, {0x4B8, 8, 0, 0})
	CMember(class UObject*)                            StatusIcon_Connected                                        OFFSET(get<T>, {0x4C0, 8, 0, 0})
	CMember(class UObject*)                            StatusIcon_RefreshRequired                                  OFFSET(get<T>, {0x4C8, 8, 0, 0})
	CMember(class UObject*)                            StatusIcon_Preparing                                        OFFSET(get<T>, {0x4D0, 8, 0, 0})
	CMember(class UObject*)                            StatusIcon_Downloading                                      OFFSET(get<T>, {0x4D8, 8, 0, 0})
	CMember(class UObject*)                            StatusIcon_UpToDate                                         OFFSET(get<T>, {0x4E0, 8, 0, 0})
	CMember(class UObject*)                            StatusIcon_StartingGame                                     OFFSET(get<T>, {0x4E8, 8, 0, 0})
	CMember(class UObject*)                            StatusIcon_GameInProgress                                   OFFSET(get<T>, {0x4F0, 8, 0, 0})
	CMember(class UObject*)                            StatusIcon_Error                                            OFFSET(get<T>, {0x4F8, 8, 0, 0})
	CMember(class UImage*)                             Image_StatusIcon                                            OFFSET(get<T>, {0x500, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   Text_StatusMessage                                          OFFSET(get<T>, {0x508, 8, 0, 0})
	CMember(class UWidgetSwitcher*)                    Switcher_AdditionalInfo                                     OFFSET(get<T>, {0x510, 8, 0, 0})
	CMember(class UPanelWidget*)                       Panel_DownloadContainer                                     OFFSET(get<T>, {0x518, 8, 0, 0})
	CMember(class UFortSimpleMaterialProgressBar*)     ProgressBar_Download                                        OFFSET(get<T>, {0x520, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   Text_DownloadProgress                                       OFFSET(get<T>, {0x528, 8, 0, 0})
	CMember(class UPanelWidget*)                       Panel_OpenLogContainer                                      OFFSET(get<T>, {0x530, 8, 0, 0})
	CMember(class UCommonActionWidget*)                Action_OpenLog                                              OFFSET(get<T>, {0x538, 8, 0, 0})
	CMember(class UPanelWidget*)                       Panel_SubMessageContainer                                   OFFSET(get<T>, {0x540, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   Text_SubMessage                                             OFFSET(get<T>, {0x548, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   Text_EditMode                                               OFFSET(get<T>, {0x550, 8, 0, 0})
	CMember(class UPanelWidget*)                       Panel_SquadListContainer                                    OFFSET(get<T>, {0x558, 8, 0, 0})
	CMember(class UAthenaSquadListBase*)               AthenaSquadList                                             OFFSET(get<T>, {0x560, 8, 0, 0})


	/// Functions
	// Function /Script/VKEditUI.VKConnectionIndicator.OnMinigameStateChanged
	// void OnMinigameStateChanged(EFortMinigameState MinigameState, EFortMinigameState PreviousMinigameState);                 // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Script/VKEditUI.VKConnectionIndicator.HandleMemorySamplerProgressUpdated
	// void HandleMemorySamplerProgressUpdated(float Progress);                                                                 // [0xca49304] Final|Native|Private 
};

/// Class /Script/VKEditUI.VKDebugMessagesBase
/// Size: 0x0000 (0x000330 - 0x000330)
class UVKDebugMessagesBase : public UFortHUDElementWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 816;

public:


	/// Functions
	// Function /Script/VKEditUI.VKDebugMessagesBase.HandleGameStateInitialized
	// void HandleGameStateInitialized(class AFortGameState* GameState);                                                        // [0xca49284] Final|Native|Protected 
	// Function /Script/VKEditUI.VKDebugMessagesBase.BP_OnGameStateInitialized
	// void BP_OnGameStateInitialized(class AFortGameState* GameState);                                                         // [0x1340978] Event|Protected|BlueprintEvent 
};

/// Class /Script/VKEditUI.VkEditDynamicUIDirector
/// Size: 0x0058 (0x0002B0 - 0x000308)
class AVkEditDynamicUIDirector : public ADynamicUIDirectorBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 776;

public:
	CMember(class UDynamicUIScene*)                    MemorySamplingScene                                         OFFSET(get<T>, {0x2B0, 8, 0, 0})
};

/// Class /Script/VKEditUI.VkEditLogTab
/// Size: 0x0178 (0x000408 - 0x000580)
class UVkEditLogTab : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1408;

public:
	SMember(FFortTabButtonLabelInfo)                   TabButtonLabelInfo                                          OFFSET(getStruct<T>, {0x440, 256, 0, 0})
	SMember(FAthenaMapScreenContainerTabInfo)          MapTabInfo                                                  OFFSET(getStruct<T>, {0x540, 64, 0, 0})
};

