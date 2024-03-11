
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CommonUI
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: FortniteUI
/// dependency: GameFeatures
/// dependency: ModularGameplay
/// dependency: UMG

/// Class /Script/MatchmakingPortalUI.FortControllerComponent_CreativeMatchmaking
/// Size: 0x0028 (0x0000A8 - 0x0000D0)
class UFortControllerComponent_CreativeMatchmaking : public UFortControllerComponent
{ 
public:
	class UFortGameActivity*                           CachedGameActivity;                                         // 0x00A8   (0x0008)  
	class UClass*                                      CreativeMatchmakingFeedbackClass;                           // 0x00B0   (0x0008)  
	class UClass*                                      IslandModal;                                                // 0x00B8   (0x0008)  
	class UFortCreativeMatchmakingFeedback*            CreativeMatchmakingFeedbackWidget;                          // 0x00C0   (0x0008)  
	class UFortActivityDetailsModal*                   MatchmakingPortalModalWidget;                               // 0x00C8   (0x0008)  


	/// Functions
	// Function /Script/MatchmakingPortalUI.FortControllerComponent_CreativeMatchmaking.OnCreativeReadyCheckStatusChanged
	// void OnCreativeReadyCheckStatusChanged(EInGameReadyCheckStatus InGameReadyCheckStatus);                               // [0xace1978] Final|Native|Protected 
};

/// Class /Script/MatchmakingPortalUI.FortCreativeMatchmakingFeedback
/// Size: 0x0090 (0x000400 - 0x000490)
class UFortCreativeMatchmakingFeedback : public UCommonActivatableWidget
{ 
public:
	unsigned char                                      UnknownData00_3[0x10];                                      // 0x0400   (0x0010)  MISSED
	class UInputComponent*                             ReadyAndCancelInputComponent;                               // 0x0410   (0x0008)  
	class UFortActivityScalingTextBlock*               Text_IslandName;                                            // 0x0418   (0x0008)  
	class UFortActivityScalingTextBlock*               Text_MatchmakingStatus;                                     // 0x0420   (0x0008)  
	unsigned char                                      UnknownData01_5[0x14];                                      // 0x0428   (0x0014)  MISSED
	bool                                               bIsCancelingMatchmaking;                                    // 0x043C   (0x0001)  
	bool                                               bIsLocalPartyMemberReady;                                   // 0x043D   (0x0001)  
	bool                                               bHasPushedInputComponent;                                   // 0x043E   (0x0001)  
	unsigned char                                      UnknownData02_5[0x19];                                      // 0x043F   (0x0019)  MISSED
	class UFortGameActivity*                           CachedGameActivity;                                         // 0x0458   (0x0008)  
	bool                                               bHasError;                                                  // 0x0460   (0x0001)  
	unsigned char                                      UnknownData03_5[0x7];                                       // 0x0461   (0x0007)  MISSED
	SDK_UNDEFINED(24,14910) /* FText */                __um(MatchmakingStatusText);                                // 0x0468   (0x0018)  
	class UFortKeybindWidget*                          Action_HoldKeybindWidget;                                   // 0x0480   (0x0008)  
	class UFortCTAButton*                              Action_MobileButton;                                        // 0x0488   (0x0008)  


	/// Functions
	// Function /Script/MatchmakingPortalUI.FortCreativeMatchmakingFeedback.PushInputComponent
	// void PushInputComponent();                                                                                            // [0xace1a8c] Final|Native|Protected|BlueprintCallable 
	// Function /Script/MatchmakingPortalUI.FortCreativeMatchmakingFeedback.PopInputComponent
	// void PopInputComponent();                                                                                             // [0xace1a78] Final|Native|Protected|BlueprintCallable 
	// Function /Script/MatchmakingPortalUI.FortCreativeMatchmakingFeedback.PlayOutro
	// void PlayOutro();                                                                                                     // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/MatchmakingPortalUI.FortCreativeMatchmakingFeedback.PlayIntro
	// void PlayIntro();                                                                                                     // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/MatchmakingPortalUI.FortCreativeMatchmakingFeedback.OnUserStartedHoldActionNotification
	// void OnUserStartedHoldActionNotification();                                                                           // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/MatchmakingPortalUI.FortCreativeMatchmakingFeedback.OnTakeActionNotification
	// void OnTakeActionNotification();                                                                                      // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/MatchmakingPortalUI.FortCreativeMatchmakingFeedback.OnOutroFinished
	// void OnOutroFinished();                                                                                               // [0x3ee1514] Final|Native|Protected|BlueprintCallable 
	// Function /Script/MatchmakingPortalUI.FortCreativeMatchmakingFeedback.OnMatchmakingStatusTextUpdated
	// void OnMatchmakingStatusTextUpdated();                                                                                // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/MatchmakingPortalUI.FortCreativeMatchmakingFeedback.OnLockStateChanged
	// void OnLockStateChanged(bool bLockState);                                                                             // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/MatchmakingPortalUI.FortCreativeMatchmakingFeedback.OnCreativeReadyCheckStatusChanged
	// void OnCreativeReadyCheckStatusChanged(EInGameReadyCheckStatus InGameReadyCheckStatus);                               // [0xace19f8] Final|Native|Protected 
	// Function /Script/MatchmakingPortalUI.FortCreativeMatchmakingFeedback.OnCancelNotification
	// void OnCancelNotification();                                                                                          // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/MatchmakingPortalUI.FortCreativeMatchmakingFeedback.IsPartyLeader
	// bool IsPartyLeader();                                                                                                 // [0xace1954] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MatchmakingPortalUI.FortCreativeMatchmakingFeedback.IsLocalPlayerReady
	// bool IsLocalPlayerReady();                                                                                            // [0xace1900] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MatchmakingPortalUI.FortCreativeMatchmakingFeedback.HoldReleased
	// void HoldReleased();                                                                                                  // [0xace18ec] Final|Native|Protected 
	// Function /Script/MatchmakingPortalUI.FortCreativeMatchmakingFeedback.HoldPressed
	// void HoldPressed();                                                                                                   // [0xace18d8] Final|Native|Protected 
	// Function /Script/MatchmakingPortalUI.FortCreativeMatchmakingFeedback.HoldAction
	// void HoldAction();                                                                                                    // [0xace18c4] Final|Native|Protected 
	// Function /Script/MatchmakingPortalUI.FortCreativeMatchmakingFeedback.HandleCancelMatchmaking
	// void HandleCancelMatchmaking();                                                                                       // [0xace1614] Final|Native|Protected 
	// Function /Script/MatchmakingPortalUI.FortCreativeMatchmakingFeedback.GetTimeToDisplayMessageBeforeFadeOut
	// float GetTimeToDisplayMessageBeforeFadeOut();                                                                         // [0xace15e4] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MatchmakingPortalUI.FortCreativeMatchmakingFeedback.CanCancelMatchmaking
	// bool CanCancelMatchmaking();                                                                                          // [0xace1558] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MatchmakingPortalUI.FortCreativeMatchmakingFeedback.BP_OnCreativeReadyCheckStatusChanged
	// void BP_OnCreativeReadyCheckStatusChanged(EInGameReadyCheckStatus InGameReadyCheckStatus);                            // [0x18a39e4] Event|Protected|BlueprintEvent 
};

/// Class /Script/MatchmakingPortalUI.FortMatchmakingPortalCountdown
/// Size: 0x0030 (0x000400 - 0x000430)
class UFortMatchmakingPortalCountdown : public UCommonActivatableWidget
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0400   (0x0008)  MISSED
	class UInputComponent*                             MatchmakingPortalInputComponent;                            // 0x0408   (0x0008)  
	class UFortActivityScalingTextBlock*               Text_IslandName;                                            // 0x0410   (0x0008)  
	float                                              CountdownTime;                                              // 0x0418   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x041C   (0x0004)  MISSED
	SDK_UNDEFINED(16,14911) /* FMulticastInlineDelegate */ __um(OnFinishedCountdown);                              // 0x0420   (0x0010)  


	/// Functions
	// Function /Script/MatchmakingPortalUI.FortMatchmakingPortalCountdown.StartCountdown
	// void StartCountdown();                                                                                                // [0x18a39e4] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/MatchmakingPortalUI.FortMatchmakingPortalCountdown.HandleCancelClicked
	// void HandleCancelClicked();                                                                                           // [0xace1600] Final|Native|Protected|BlueprintCallable 
	// Function /Script/MatchmakingPortalUI.FortMatchmakingPortalCountdown.FinishTimer
	// void FinishTimer();                                                                                                   // [0x18a39e4] Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/MatchmakingPortalUI.FortMatchmakingPortalPopup
/// Size: 0x01C8 (0x000410 - 0x0005D8)
class UFortMatchmakingPortalPopup : public UFortPortalHUDDetails
{ 
public:
	unsigned char                                      UnknownData00_3[0x10];                                      // 0x0410   (0x0010)  MISSED
	class UFortActivityDetailsModal*                   MatchmakingPortalModalWidget;                               // 0x0420   (0x0008)  
	FVector                                            WorldPointerLocation;                                       // 0x0428   (0x0018)  
	SDK_UNDEFINED(24,14912) /* FText */                __um(CreatorNameTextFormat);                                // 0x0440   (0x0018)  
	SDK_UNDEFINED(8,14913) /* TWeakObjectPtr<UHeaderDescriptionHUDComponent*> */ __um(CachedHUDComponent);         // 0x0458   (0x0008)  
	class UClass*                                      IslandModal;                                                // 0x0460   (0x0008)  
	FMatchmakingPortalPopupData                        CachedIslandData;                                           // 0x0468   (0x0060)  
	SDK_UNDEFINED(24,14914) /* FText */                __um(InvalidLinkCodeWarningText);                           // 0x04C8   (0x0018)  
	float                                              MatchmakingFeedbackDelayTime;                               // 0x04E0   (0x0004)  
	bool                                               bIsWithinPortalRange : 1;                                   // 0x04E4:0 (0x0001)  
	unsigned char                                      UnknownData01_4[0x3];                                       // 0x04E5   (0x0003)  MISSED
	class UCommonRichTextBlock*                        RichText_CreatorName;                                       // 0x04E8   (0x0008)  
	class UCommonTextBlock*                            Text_IslandName;                                            // 0x04F0   (0x0008)  
	class UDynamicEntryBox*                            EntryBox_ActivityTags;                                      // 0x04F8   (0x0008)  
	class UFortKeybindWidget*                          GlobalActionKeybindWidget;                                  // 0x0500   (0x0008)  
	class UClass*                                      CreatorPageViewClass;                                       // 0x0508   (0x0008)  
	class UClass*                                      AttributionsModalClass;                                     // 0x0510   (0x0008)  
	class UFortGameActivity*                           CachedGameActivity;                                         // 0x0518   (0x0008)  
	unsigned char                                      UnknownData02_5[0x10];                                      // 0x0520   (0x0010)  MISSED
	SDK_UNDEFINED(24,14915) /* FText */                __um(InteractionMessage);                                   // 0x0530   (0x0018)  
	SDK_UNDEFINED(24,14916) /* FText */                __um(InteractionMessage_Cancel);                            // 0x0548   (0x0018)  
	SDK_UNDEFINED(24,14917) /* FText */                __um(InteractionMessage_Disabled);                          // 0x0560   (0x0018)  
	SDK_UNDEFINED(24,14918) /* FText */                __um(InteractionMessage_PartyLeadOnly);                     // 0x0578   (0x0018)  
	unsigned char                                      UnknownData03_6[0x48];                                      // 0x0590   (0x0048)  MISSED


	/// Functions
	// Function /Script/MatchmakingPortalUI.FortMatchmakingPortalPopup.UpdateVisuals
	// void UpdateVisuals(class UHeaderDescriptionHUDComponent* HUDComponent);                                               // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/MatchmakingPortalUI.FortMatchmakingPortalPopup.OnShowPortalPopup
	// void OnShowPortalPopup(bool bShow, bool bAnimate);                                                                    // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/MatchmakingPortalUI.FortMatchmakingPortalPopup.OnPlayerCanInteractChanged
	// void OnPlayerCanInteractChanged(bool bPlayerCanInteract, FText& Message);                                             // [0x18a39e4] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/MatchmakingPortalUI.FortMatchmakingPortalPopup.OnLockStateChanged
	// void OnLockStateChanged();                                                                                            // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/MatchmakingPortalUI.FortMatchmakingPortalPopup.IsInteractingDeviceAMatchmakingPortal
	// bool IsInteractingDeviceAMatchmakingPortal();                                                                         // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/MatchmakingPortalUI.FortMatchmakingPortalPopup.HasActivityToShow
	// bool HasActivityToShow();                                                                                             // [0xace18a8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MatchmakingPortalUI.FortMatchmakingPortalPopup.HandleWidgetUpdate
	// void HandleWidgetUpdate();                                                                                            // [0xace1894] Final|Native|Public  
	// Function /Script/MatchmakingPortalUI.FortMatchmakingPortalPopup.HandleStartedRespawn
	// void HandleStartedRespawn(class AFortPlayerControllerZone* PlayerController);                                         // [0xace1814] Final|Native|Public  
	// Function /Script/MatchmakingPortalUI.FortMatchmakingPortalPopup.HandleOnPortalDetailsVisibilityCheck
	// void HandleOnPortalDetailsVisibilityCheck(bool bShowWidget);                                                          // [0x18a39e4] Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Script/MatchmakingPortalUI.FortMatchmakingPortalPopup.HandleLoadScreenChanged
	// void HandleLoadScreenChanged(class AFortPlayerControllerAthena* PlayerController, bool bLoadScreenEnabled, FText HUDReason); // [0xace16ec] Final|Native|Public  
	// Function /Script/MatchmakingPortalUI.FortMatchmakingPortalPopup.HandleHUDShow
	// void HandleHUDShow(bool bShow, bool bShouldAnimate);                                                                  // [0xace1628] Final|Native|Public  
	// Function /Script/MatchmakingPortalUI.FortMatchmakingPortalPopup.GetMatchmakingFeedbackWidget
	// class UFortAthenaCreativeMatchmakingWidget* GetMatchmakingFeedbackWidget(class UCommonActivatableWidget* MatchmakingFeedbackContainer); // [0x18a39e4] Event|Protected|BlueprintEvent|Const 
	// Function /Script/MatchmakingPortalUI.FortMatchmakingPortalPopup.GetIslandData
	// bool GetIslandData(FMatchmakingPortalPopupData& OutIslandData, class UHeaderDescriptionHUDComponent* HUDComponent);   // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/MatchmakingPortalUI.FortMatchmakingPortalPopup.BindOverlapEvents
	// void BindOverlapEvents();                                                                                             // [0x18a39e4] Event|Protected|BlueprintEvent 
};

/// Class /Script/MatchmakingPortalUI.FortModalBackground
/// Size: 0x0038 (0x000400 - 0x000438)
class UFortModalBackground : public UCommonActivatableWidget
{ 
public:
	unsigned char                                      UnknownData00_3[0x20];                                      // 0x0400   (0x0020)  MISSED
	class UCommonButtonBase*                           Button_Back;                                                // 0x0420   (0x0008)  
	class UCommonButtonBase*                           Button_BackBoard;                                           // 0x0428   (0x0008)  
	class UCommonButtonBase*                           Button_CloseTouch;                                          // 0x0430   (0x0008)  


	/// Functions
	// Function /Script/MatchmakingPortalUI.FortModalBackground.OnPreviewImageChanged
	// void OnPreviewImageChanged(bool bIsLoading, class UTexture* InTexture);                                               // [0x18a39e4] Event|Protected|BlueprintEvent 
};

/// Class /Script/MatchmakingPortalUI.FortUIGameFeatureAction_OverridePortalHUDDetails
/// Size: 0x0020 (0x000028 - 0x000048)
class UFortUIGameFeatureAction_OverridePortalHUDDetails : public UFortUIGameFeatureAction
{ 
public:
	SDK_UNDEFINED(32,14919) /* TWeakObjectPtr<UClass*> */ __um(SoftPortalHUDDetailsClass);                         // 0x0028   (0x0020)  
};

