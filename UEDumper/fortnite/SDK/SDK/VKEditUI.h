
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CommonUI
/// dependency: CoreUObject
/// dependency: DynamicUI
/// dependency: Engine
/// dependency: FortniteUI
/// dependency: UMG

/// Class /Script/VKEditUI.VKConnectionIndicator
/// Size: 0x0250 (0x000400 - 0x000650)
class UVKConnectionIndicator : public UCommonActivatableWidget
{ 
public:
	SDK_UNDEFINED(240,15750) /* FText */               __um(EditStatusLocalizedText);                              // 0x0400   (0x00F0)  
	FDataTableRowHandle                                OpenLogInputAction;                                         // 0x04F0   (0x0010)  
	class UObject*                                     StatusIcon_NotConnected;                                    // 0x0500   (0x0008)  
	class UObject*                                     StatusIcon_Connected;                                       // 0x0508   (0x0008)  
	class UObject*                                     StatusIcon_RefreshRequired;                                 // 0x0510   (0x0008)  
	class UObject*                                     StatusIcon_Preparing;                                       // 0x0518   (0x0008)  
	class UObject*                                     StatusIcon_Downloading;                                     // 0x0520   (0x0008)  
	class UObject*                                     StatusIcon_UpToDate;                                        // 0x0528   (0x0008)  
	class UObject*                                     StatusIcon_StartingGame;                                    // 0x0530   (0x0008)  
	class UObject*                                     StatusIcon_GameInProgress;                                  // 0x0538   (0x0008)  
	class UObject*                                     StatusIcon_Error;                                           // 0x0540   (0x0008)  
	class UImage*                                      Image_StatusIcon;                                           // 0x0548   (0x0008)  
	class UCommonTextBlock*                            Text_StatusMessage;                                         // 0x0550   (0x0008)  
	class UWidgetSwitcher*                             Switcher_AdditionalInfo;                                    // 0x0558   (0x0008)  
	class UPanelWidget*                                Panel_DownloadContainer;                                    // 0x0560   (0x0008)  
	class UFortSimpleMaterialProgressBar*              ProgressBar_Download;                                       // 0x0568   (0x0008)  
	class UCommonTextBlock*                            Text_DownloadProgress;                                      // 0x0570   (0x0008)  
	class UPanelWidget*                                Panel_OpenLogContainer;                                     // 0x0578   (0x0008)  
	class UCommonActionWidget*                         Action_OpenLog;                                             // 0x0580   (0x0008)  
	class UPanelWidget*                                Panel_SubMessageContainer;                                  // 0x0588   (0x0008)  
	class UCommonTextBlock*                            Text_SubMessage;                                            // 0x0590   (0x0008)  
	class UCommonTextBlock*                            Text_EditMode;                                              // 0x0598   (0x0008)  
	class UPanelWidget*                                Panel_SquadListContainer;                                   // 0x05A0   (0x0008)  
	class UAthenaSquadListBase*                        AthenaSquadList;                                            // 0x05A8   (0x0008)  
	unsigned char                                      UnknownData00_6[0xA0];                                      // 0x05B0   (0x00A0)  MISSED


	/// Functions
	// Function /Script/VKEditUI.VKConnectionIndicator.OnMinigameStateChanged
	// void OnMinigameStateChanged(EFortMinigameState MinigameState, EFortMinigameState PreviousMinigameState);              // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/VKEditUI.VKConnectionIndicator.HandleMemorySamplerProgressUpdated
	// void HandleMemorySamplerProgressUpdated(float Progress);                                                              // [0xad035b4] Final|Native|Private 
};

/// Class /Script/VKEditUI.VKDebugMessagesBase
/// Size: 0x0000 (0x000328 - 0x000328)
class UVKDebugMessagesBase : public UFortHUDElementWidget
{ 
public:


	/// Functions
	// Function /Script/VKEditUI.VKDebugMessagesBase.HandleGameStateInitialized
	// void HandleGameStateInitialized(class AFortGameState* GameState);                                                     // [0xad03534] Final|Native|Protected 
	// Function /Script/VKEditUI.VKDebugMessagesBase.BP_OnGameStateInitialized
	// void BP_OnGameStateInitialized(class AFortGameState* GameState);                                                      // [0x18a39e4] Event|Protected|BlueprintEvent 
};

/// Class /Script/VKEditUI.VkEditDynamicUIDirector
/// Size: 0x0058 (0x0002B0 - 0x000308)
class AVkEditDynamicUIDirector : public ADynamicUIDirectorBase
{ 
public:
	class UDynamicUIScene*                             MemorySamplingScene;                                        // 0x02B0   (0x0008)  
	unsigned char                                      UnknownData00_6[0x50];                                      // 0x02B8   (0x0050)  MISSED
};

/// Class /Script/VKEditUI.VkEditLogTab
/// Size: 0x0190 (0x000400 - 0x000590)
class UVkEditLogTab : public UCommonActivatableWidget
{ 
public:
	unsigned char                                      UnknownData00_3[0x30];                                      // 0x0400   (0x0030)  MISSED
	FFortTabButtonLabelInfo                            TabButtonLabelInfo;                                         // 0x0430   (0x0110)  
	FAthenaMapScreenContainerTabInfo                   MapTabInfo;                                                 // 0x0540   (0x0048)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0588   (0x0008)  MISSED
};

