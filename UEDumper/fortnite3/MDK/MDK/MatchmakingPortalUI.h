
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

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
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	CMember(class UFortGameActivity*)                  CachedGameActivity                                          OFFSET(get<T>, {0xA8, 8, 0, 0})
	CMember(class UClass*)                             CreativeMatchmakingFeedbackClass                            OFFSET(get<T>, {0xB0, 8, 0, 0})
	CMember(class UClass*)                             IslandModal                                                 OFFSET(get<T>, {0xB8, 8, 0, 0})
	CMember(class UFortCreativeMatchmakingFeedback*)   CreativeMatchmakingFeedbackWidget                           OFFSET(get<T>, {0xC0, 8, 0, 0})
	CMember(class UFortActivityDetailsModal*)          MatchmakingPortalModalWidget                                OFFSET(get<T>, {0xC8, 8, 0, 0})


	/// Functions
	// Function /Script/MatchmakingPortalUI.FortControllerComponent_CreativeMatchmaking.OnCreativeReadyCheckStatusChanged
	// void OnCreativeReadyCheckStatusChanged(EInGameReadyCheckStatus InGameReadyCheckStatus);                                  // [0xc9bcb40] Final|Native|Protected 
};

/// Class /Script/MatchmakingPortalUI.FortCreativeMatchmakingFeedback
/// Size: 0x0088 (0x000408 - 0x000490)
class UFortCreativeMatchmakingFeedback : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1168;

public:
	CMember(class UInputComponent*)                    ReadyAndCancelInputComponent                                OFFSET(get<T>, {0x418, 8, 0, 0})
	CMember(class UFortActivityScalingTextBlock*)      Text_IslandName                                             OFFSET(get<T>, {0x420, 8, 0, 0})
	CMember(class UFortActivityScalingTextBlock*)      Text_MatchmakingStatus                                      OFFSET(get<T>, {0x428, 8, 0, 0})
	DMember(bool)                                      bIsCancelingMatchmaking                                     OFFSET(get<bool>, {0x444, 1, 0, 0})
	DMember(bool)                                      bIsLocalPartyMemberReady                                    OFFSET(get<bool>, {0x445, 1, 0, 0})
	DMember(bool)                                      bHasPushedInputComponent                                    OFFSET(get<bool>, {0x446, 1, 0, 0})
	CMember(class UFortGameActivity*)                  CachedGameActivity                                          OFFSET(get<T>, {0x460, 8, 0, 0})
	DMember(bool)                                      bHasError                                                   OFFSET(get<bool>, {0x468, 1, 0, 0})
	SMember(FText)                                     MatchmakingStatusText                                       OFFSET(getStruct<T>, {0x470, 16, 0, 0})
	CMember(class UFortKeybindWidget*)                 Action_HoldKeybindWidget                                    OFFSET(get<T>, {0x480, 8, 0, 0})
	CMember(class UFortCTAButton*)                     Action_MobileButton                                         OFFSET(get<T>, {0x488, 8, 0, 0})


	/// Functions
	// Function /Script/MatchmakingPortalUI.FortCreativeMatchmakingFeedback.PushInputComponent
	// void PushInputComponent();                                                                                               // [0xc9bcc54] Final|Native|Protected|BlueprintCallable 
	// Function /Script/MatchmakingPortalUI.FortCreativeMatchmakingFeedback.PopInputComponent
	// void PopInputComponent();                                                                                                // [0xc9bcc40] Final|Native|Protected|BlueprintCallable 
	// Function /Script/MatchmakingPortalUI.FortCreativeMatchmakingFeedback.PlayOutro
	// void PlayOutro();                                                                                                        // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Script/MatchmakingPortalUI.FortCreativeMatchmakingFeedback.PlayIntro
	// void PlayIntro();                                                                                                        // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Script/MatchmakingPortalUI.FortCreativeMatchmakingFeedback.OnUserStartedHoldActionNotification
	// void OnUserStartedHoldActionNotification();                                                                              // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Script/MatchmakingPortalUI.FortCreativeMatchmakingFeedback.OnTakeActionNotification
	// void OnTakeActionNotification();                                                                                         // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Script/MatchmakingPortalUI.FortCreativeMatchmakingFeedback.OnOutroFinished
	// void OnOutroFinished();                                                                                                  // [0x42a8120] Final|Native|Protected|BlueprintCallable 
	// Function /Script/MatchmakingPortalUI.FortCreativeMatchmakingFeedback.OnMatchmakingStatusTextUpdated
	// void OnMatchmakingStatusTextUpdated();                                                                                   // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Script/MatchmakingPortalUI.FortCreativeMatchmakingFeedback.OnLockStateChanged
	// void OnLockStateChanged(bool bLockState);                                                                                // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Script/MatchmakingPortalUI.FortCreativeMatchmakingFeedback.OnCreativeReadyCheckStatusChanged
	// void OnCreativeReadyCheckStatusChanged(EInGameReadyCheckStatus InGameReadyCheckStatus);                                  // [0xc9bcbc0] Final|Native|Protected 
	// Function /Script/MatchmakingPortalUI.FortCreativeMatchmakingFeedback.OnCancelNotification
	// void OnCancelNotification();                                                                                             // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Script/MatchmakingPortalUI.FortCreativeMatchmakingFeedback.IsPartyLeader
	// bool IsPartyLeader();                                                                                                    // [0xc9bcb1c] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MatchmakingPortalUI.FortCreativeMatchmakingFeedback.IsLocalPlayerReady
	// bool IsLocalPlayerReady();                                                                                               // [0xc9bcac8] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MatchmakingPortalUI.FortCreativeMatchmakingFeedback.HoldReleased
	// void HoldReleased();                                                                                                     // [0xc9bcab4] Final|Native|Protected 
	// Function /Script/MatchmakingPortalUI.FortCreativeMatchmakingFeedback.HoldPressed
	// void HoldPressed();                                                                                                      // [0xc9bcaa0] Final|Native|Protected 
	// Function /Script/MatchmakingPortalUI.FortCreativeMatchmakingFeedback.HoldAction
	// void HoldAction();                                                                                                       // [0xc9bca8c] Final|Native|Protected 
	// Function /Script/MatchmakingPortalUI.FortCreativeMatchmakingFeedback.HandleCancelMatchmaking
	// void HandleCancelMatchmaking();                                                                                          // [0xc9bc7e0] Final|Native|Protected 
	// Function /Script/MatchmakingPortalUI.FortCreativeMatchmakingFeedback.GetTimeToDisplayMessageBeforeFadeOut
	// float GetTimeToDisplayMessageBeforeFadeOut();                                                                            // [0xc9bc7b0] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MatchmakingPortalUI.FortCreativeMatchmakingFeedback.CanCancelMatchmaking
	// bool CanCancelMatchmaking();                                                                                             // [0xc9bc724] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MatchmakingPortalUI.FortCreativeMatchmakingFeedback.BP_OnCreativeReadyCheckStatusChanged
	// void BP_OnCreativeReadyCheckStatusChanged(EInGameReadyCheckStatus InGameReadyCheckStatus);                               // [0x1340978] Event|Protected|BlueprintEvent 
};

/// Class /Script/MatchmakingPortalUI.FortMatchmakingPortalCountdown
/// Size: 0x0030 (0x000408 - 0x000438)
class UFortMatchmakingPortalCountdown : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1080;

public:
	CMember(class UInputComponent*)                    MatchmakingPortalInputComponent                             OFFSET(get<T>, {0x410, 8, 0, 0})
	CMember(class UFortActivityScalingTextBlock*)      Text_IslandName                                             OFFSET(get<T>, {0x418, 8, 0, 0})
	DMember(float)                                     CountdownTime                                               OFFSET(get<float>, {0x420, 4, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnFinishedCountdown                                         OFFSET(getStruct<T>, {0x428, 16, 0, 0})


	/// Functions
	// Function /Script/MatchmakingPortalUI.FortMatchmakingPortalCountdown.StartCountdown
	// void StartCountdown();                                                                                                   // [0x1340978] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/MatchmakingPortalUI.FortMatchmakingPortalCountdown.HandleCancelClicked
	// void HandleCancelClicked();                                                                                              // [0xc9bc7cc] Final|Native|Protected|BlueprintCallable 
	// Function /Script/MatchmakingPortalUI.FortMatchmakingPortalCountdown.FinishTimer
	// void FinishTimer();                                                                                                      // [0x1340978] Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/MatchmakingPortalUI.FortMatchmakingPortalPopup
/// Size: 0x0180 (0x000418 - 0x000598)
class UFortMatchmakingPortalPopup : public UFortPortalHUDDetails
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1432;

public:
	SMember(FVector)                                   WorldPointerLocation                                        OFFSET(getStruct<T>, {0x428, 24, 0, 0})
	SMember(FText)                                     CreatorNameTextFormat                                       OFFSET(getStruct<T>, {0x440, 16, 0, 0})
	CMember(TWeakObjectPtr<UHeaderDescriptionHUDComponent*>) CachedHUDComponent                                    OFFSET(get<T>, {0x450, 8, 0, 0})
	CMember(class UClass*)                             IslandModal                                                 OFFSET(get<T>, {0x458, 8, 0, 0})
	SMember(FMatchmakingPortalPopupData)               CachedIslandData                                            OFFSET(getStruct<T>, {0x460, 72, 0, 0})
	SMember(FText)                                     InvalidLinkCodeWarningText                                  OFFSET(getStruct<T>, {0x4A8, 16, 0, 0})
	DMember(float)                                     MatchmakingFeedbackDelayTime                                OFFSET(get<float>, {0x4B8, 4, 0, 0})
	DMember(bool)                                      bIsWithinPortalRange                                        OFFSET(get<bool>, {0x4BC, 1, 1, 0})
	CMember(class UCommonRichTextBlock*)               RichText_CreatorName                                        OFFSET(get<T>, {0x4C0, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   Text_IslandName                                             OFFSET(get<T>, {0x4C8, 8, 0, 0})
	CMember(class UDynamicEntryBox*)                   EntryBox_ActivityTags                                       OFFSET(get<T>, {0x4D0, 8, 0, 0})
	CMember(class UFortKeybindWidget*)                 GlobalActionKeybindWidget                                   OFFSET(get<T>, {0x4D8, 8, 0, 0})
	CMember(class UClass*)                             CreatorPageViewClass                                        OFFSET(get<T>, {0x4E0, 8, 0, 0})
	CMember(class UClass*)                             AttributionsModalClass                                      OFFSET(get<T>, {0x4E8, 8, 0, 0})
	CMember(class UFortGameActivity*)                  CachedGameActivity                                          OFFSET(get<T>, {0x4F0, 8, 0, 0})
	SMember(FText)                                     InteractionMessage                                          OFFSET(getStruct<T>, {0x508, 16, 0, 0})
	SMember(FText)                                     InteractionMessage_Cancel                                   OFFSET(getStruct<T>, {0x518, 16, 0, 0})
	SMember(FText)                                     InteractionMessage_Disabled                                 OFFSET(getStruct<T>, {0x528, 16, 0, 0})
	SMember(FText)                                     InteractionMessage_PartyLeadOnly                            OFFSET(getStruct<T>, {0x538, 16, 0, 0})


	/// Functions
	// Function /Script/MatchmakingPortalUI.FortMatchmakingPortalPopup.UpdateVisuals
	// void UpdateVisuals(class UHeaderDescriptionHUDComponent* HUDComponent);                                                  // [0x1340978] Event|Public|BlueprintEvent 
	// Function /Script/MatchmakingPortalUI.FortMatchmakingPortalPopup.OnShowPortalPopup
	// void OnShowPortalPopup(bool bShow, bool bAnimate);                                                                       // [0x1340978] Event|Public|BlueprintEvent 
	// Function /Script/MatchmakingPortalUI.FortMatchmakingPortalPopup.OnPlayerCanInteractChanged
	// void OnPlayerCanInteractChanged(bool bPlayerCanInteract, FText& Message);                                                // [0x1340978] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/MatchmakingPortalUI.FortMatchmakingPortalPopup.OnLockStateChanged
	// void OnLockStateChanged();                                                                                               // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Script/MatchmakingPortalUI.FortMatchmakingPortalPopup.IsInteractingDeviceAMatchmakingPortal
	// bool IsInteractingDeviceAMatchmakingPortal();                                                                            // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Script/MatchmakingPortalUI.FortMatchmakingPortalPopup.HasActivityToShow
	// bool HasActivityToShow();                                                                                                // [0xc9bca70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MatchmakingPortalUI.FortMatchmakingPortalPopup.HandleWidgetUpdate
	// void HandleWidgetUpdate();                                                                                               // [0xc9bca5c] Final|Native|Public  
	// Function /Script/MatchmakingPortalUI.FortMatchmakingPortalPopup.HandleStartedRespawn
	// void HandleStartedRespawn(class AFortPlayerControllerZone* PlayerController);                                            // [0xc9bc9dc] Final|Native|Public  
	// Function /Script/MatchmakingPortalUI.FortMatchmakingPortalPopup.HandleOnPortalDetailsVisibilityCheck
	// void HandleOnPortalDetailsVisibilityCheck(bool bShowWidget);                                                             // [0x1340978] Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Script/MatchmakingPortalUI.FortMatchmakingPortalPopup.HandleLoadScreenChanged
	// void HandleLoadScreenChanged(class AFortPlayerControllerAthena* PlayerController, bool bLoadScreenEnabled, FText HUDReason); // [0xc9bc8b8] Final|Native|Public  
	// Function /Script/MatchmakingPortalUI.FortMatchmakingPortalPopup.HandleHUDShow
	// void HandleHUDShow(bool bShow, bool bShouldAnimate);                                                                     // [0xc9bc7f4] Final|Native|Public  
	// Function /Script/MatchmakingPortalUI.FortMatchmakingPortalPopup.GetMatchmakingFeedbackWidget
	// class UFortAthenaCreativeMatchmakingWidget* GetMatchmakingFeedbackWidget(class UCommonActivatableWidget* MatchmakingFeedbackContainer); // [0x1340978] Event|Protected|BlueprintEvent|Const 
	// Function /Script/MatchmakingPortalUI.FortMatchmakingPortalPopup.GetIslandData
	// bool GetIslandData(FMatchmakingPortalPopupData& OutIslandData, class UHeaderDescriptionHUDComponent* HUDComponent);      // [0x1340978] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/MatchmakingPortalUI.FortMatchmakingPortalPopup.BindOverlapEvents
	// void BindOverlapEvents();                                                                                                // [0x1340978] Event|Protected|BlueprintEvent 
};

/// Class /Script/MatchmakingPortalUI.FortModalBackground
/// Size: 0x0038 (0x000408 - 0x000440)
class UFortModalBackground : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1088;

public:
	CMember(class UCommonButtonBase*)                  Button_Back                                                 OFFSET(get<T>, {0x428, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_BackBoard                                            OFFSET(get<T>, {0x430, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_CloseTouch                                           OFFSET(get<T>, {0x438, 8, 0, 0})


	/// Functions
	// Function /Script/MatchmakingPortalUI.FortModalBackground.OnPreviewImageChanged
	// void OnPreviewImageChanged(bool bIsLoading, class UTexture* InTexture);                                                  // [0x1340978] Event|Protected|BlueprintEvent 
};

/// Class /Script/MatchmakingPortalUI.FortUIGameFeatureAction_OverridePortalHUDDetails
/// Size: 0x0020 (0x000028 - 0x000048)
class UFortUIGameFeatureAction_OverridePortalHUDDetails : public UFortUIGameFeatureAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(TWeakObjectPtr<UClass*>)                   SoftPortalHUDDetailsClass                                   OFFSET(get<T>, {0x28, 32, 0, 0})
};

