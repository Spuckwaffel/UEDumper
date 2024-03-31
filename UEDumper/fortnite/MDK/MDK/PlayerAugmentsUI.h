
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CommonUI
/// dependency: CommonUILegacy
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: FortniteUI
/// dependency: GameplayAbilities
/// dependency: GameplayTags
/// dependency: ModularGameplay
/// dependency: Paper2D
/// dependency: UMG

/// Class /Script/PlayerAugmentsUI.FortMobileButtonBehaviorComponent_AugmentsListIconPicker
/// Size: 0x0010 (0x000048 - 0x000058)
class UFortMobileButtonBehaviorComponent_AugmentsListIconPicker : public UFortMobileButtonBehaviorComponent_IconPicker
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	DMember(bool)                                      bCachedIsInInventoryView                                    OFFSET(get<bool>, {0x48, 1, 0, 0})
	CMember(class UPaperSprite*)                       ListViewSprite                                              OFFSET(get<T>, {0x50, 8, 0, 0})


	/// Functions
	// Function /Script/PlayerAugmentsUI.FortMobileButtonBehaviorComponent_AugmentsListIconPicker.OnAugmentToolViewSwap
	// void OnAugmentToolViewSwap(bool bIsInInventoryView);                                                                     // [0xb8f5c24] Final|Native|Private 
};

/// Class /Script/PlayerAugmentsUI.FortMobileButtonBehaviorComponent_AugmentsListVisibility
/// Size: 0x0008 (0x000048 - 0x000050)
class UFortMobileButtonBehaviorComponent_AugmentsListVisibility : public UFortMobileButtonBehaviorComponent_Visibility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:


	/// Functions
	// Function /Script/PlayerAugmentsUI.FortMobileButtonBehaviorComponent_AugmentsListVisibility.HandleAugmentToolViewSwap
	// void HandleAugmentToolViewSwap(bool bInIsInventoryView);                                                                 // [0xa1146d0] Final|Native|Private 
	// Function /Script/PlayerAugmentsUI.FortMobileButtonBehaviorComponent_AugmentsListVisibility.HandleAugmentToolOpenedStatusChanged
	// void HandleAugmentToolOpenedStatusChanged(bool bIsOpened, bool bInIsInventoryView);                                      // [0xb8f4c6c] Final|Native|Private 
};

/// Class /Script/PlayerAugmentsUI.FortMobileButtonBehaviorComponent_AugmentsListVisibility_Swap
/// Size: 0x0008 (0x000050 - 0x000058)
class UFortMobileButtonBehaviorComponent_AugmentsListVisibility_Swap : public UFortMobileButtonBehaviorComponent_AugmentsListVisibility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
};

/// Class /Script/PlayerAugmentsUI.FortPlayerAugmentHUDTimerWidget
/// Size: 0x0000 (0x000328 - 0x000328)
class UFortPlayerAugmentHUDTimerWidget : public UFortHUDElementWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 808;

public:


	/// Functions
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentHUDTimerWidget.OnTimerUpdated
	// void OnTimerUpdated(float TimeRemaining, float TimePercentage);                                                          // [0xb8f5ce8] Native|Event|Protected|BlueprintEvent 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentHUDTimerWidget.OnNumPendingAugmentsToGrantUpdated
	// void OnNumPendingAugmentsToGrantUpdated(int32_t NumPendingAugmentsToGrant);                                              // [0x186becc] Event|Protected|BlueprintEvent 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentHUDTimerWidget.OnMovementModeChanged
	// void OnMovementModeChanged();                                                                                            // [0x186becc] Event|Protected|BlueprintEvent 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentHUDTimerWidget.OnHUDElementVisibilityChanged
	// void OnHUDElementVisibilityChanged(FGameplayTagContainer& HiddenElementTagContainer);                                    // [0x186becc] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentHUDTimerWidget.OnCanSelectAugmentChanged
	// void OnCanSelectAugmentChanged(bool bCanSelectAugment);                                                                  // [0x186becc] Event|Protected|BlueprintEvent 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentHUDTimerWidget.OnAugmentSelectorOpenedStatusChanged
	// void OnAugmentSelectorOpenedStatusChanged(bool bIsOpened);                                                               // [0x186becc] Event|Protected|BlueprintEvent 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentHUDTimerWidget.OnAugmentGrantingTimersResetForMatch
	// void OnAugmentGrantingTimersResetForMatch();                                                                             // [0x186becc] Event|Protected|BlueprintEvent 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentHUDTimerWidget.OnAugmentGrantingTimersFinishedForMatch
	// void OnAugmentGrantingTimersFinishedForMatch();                                                                          // [0x186becc] Event|Protected|BlueprintEvent 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentHUDTimerWidget.HandleTimerUpdated
	// void HandleTimerUpdated(float TimeRemaining, float TimePercentage);                                                      // [0xb8f581c] Final|Native|Private 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentHUDTimerWidget.HandleNumPendingAugmentsToGrantUpdated
	// void HandleNumPendingAugmentsToGrantUpdated(int8_t NumPendingAugmentsToGrant);                                           // [0xb8f53b4] Final|Native|Private 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentHUDTimerWidget.HandleHUDElementVisibilityChanged
	// void HandleHUDElementVisibilityChanged(FGameplayTagContainer& HiddenElementTagContainer);                                // [0xb8f523c] Final|Native|Private|HasOutParms 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentHUDTimerWidget.HandleCanSelectAugmentChanged
	// void HandleCanSelectAugmentChanged(bool bCanSelectAugment);                                                              // [0xb8f4f40] Final|Native|Private 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentHUDTimerWidget.HandleAugmentSelectorOpenedStatusChanged
	// void HandleAugmentSelectorOpenedStatusChanged(bool bIsOpened, bool bViewingAugmentInventory);                            // [0xb8f4a58] Final|Native|Private 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentHUDTimerWidget.HandleAugmentGrantingTimersResetForMatch
	// void HandleAugmentGrantingTimersResetForMatch();                                                                         // [0xb8f45fc] Final|Native|Private 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentHUDTimerWidget.HandleAugmentGrantingTimersFinishedForMatch
	// void HandleAugmentGrantingTimersFinishedForMatch();                                                                      // [0xb8f45c0] Final|Native|Private 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentHUDTimerWidget.GetPendingAugmentsToGrant
	// int32_t GetPendingAugmentsToGrant();                                                                                     // [0xb8f4550] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentHUDTimerWidget.FormatTime
	// FText FormatTime(float TotalSeconds);                                                                                    // [0xb8f446c] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentHUDTimerWidget.CanSelectAugment
	// bool CanSelectAugment();                                                                                                 // [0xb8f4304] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentHUDTimerWidget.CanEquipSelectionTool
	// bool CanEquipSelectionTool();                                                                                            // [0xb8f42b4] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/PlayerAugmentsUI.FortPlayerAugmentHUDSelectionTimerWidget
/// Size: 0x0058 (0x000328 - 0x000380)
class UFortPlayerAugmentHUDSelectionTimerWidget : public UFortPlayerAugmentHUDTimerWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 896;

public:
	DMember(bool)                                      bIsAugmentReadyVisible                                      OFFSET(get<bool>, {0x328, 1, 0, 0})
	DMember(bool)                                      bIsCountdownActive                                          OFFSET(get<bool>, {0x329, 1, 0, 0})
	DMember(bool)                                      bIsOffline                                                  OFFSET(get<bool>, {0x32A, 1, 0, 0})
	SMember(FTimerHandle)                              HideTimerHandle                                             OFFSET(getStruct<T>, {0x330, 8, 0, 0})
	CMember(class UMaterialInstanceDynamic*)           TimerProgressDMI                                            OFFSET(get<T>, {0x338, 8, 0, 0})
	SMember(FScalableFloat)                            CountdownStartTimeHF                                        OFFSET(getStruct<T>, {0x340, 40, 0, 0})
	CMember(class UCommonTextBlock*)                   NativeAugmentTimerText                                      OFFSET(get<T>, {0x368, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   NativeAnimTimerTextCountdownUpdated                         OFFSET(get<T>, {0x370, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   NativeAnimProgressBarCountdownUpdated                       OFFSET(get<T>, {0x378, 8, 0, 0})


	/// Functions
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentHUDSelectionTimerWidget.UpdateCountdown
	// void UpdateCountdown(float TimeRemaining);                                                                               // [0xb8f6190] Final|Native|Protected|BlueprintCallable 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentHUDSelectionTimerWidget.SetMobileProgressTimer
	// void SetMobileProgressTimer(float TimePercentage);                                                                       // [0xb8f5f48] Final|Native|Protected|BlueprintCallable 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentHUDSelectionTimerWidget.OnCountdownActivated
	// void OnCountdownActivated();                                                                                             // [0x186becc] Event|Protected|BlueprintEvent 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentHUDSelectionTimerWidget.IsCountdownVisible
	// bool IsCountdownVisible();                                                                                               // [0xb8f5c00] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/PlayerAugmentsUI.FortMobileActionBBE_AugmentShoot
/// Size: 0x0010 (0x000080 - 0x000090)
class UFortMobileActionBBE_AugmentShoot : public UFortMobileActionButtonBehaviorExtension
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	CMember(class UPaperSprite*)                       IconOverrideSprite                                          OFFSET(get<T>, {0x80, 8, 0, 0})
	SMember(FGameplayTag)                              IconOverrideTag                                             OFFSET(getStruct<T>, {0x88, 4, 0, 0})
};

/// Class /Script/PlayerAugmentsUI.FortMobileActionButtonBehavior_RerollAugments
/// Size: 0x0008 (0x000138 - 0x000140)
class UFortMobileActionButtonBehavior_RerollAugments : public UFortMobileActionButtonBehavior
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
	CMember(class UFortItemDefinition*)                RerollCurrency                                              OFFSET(get<T>, {0x138, 8, 0, 0})
};

/// Class /Script/PlayerAugmentsUI.FortMobilePlayerAugmentTimer
/// Size: 0x0020 (0x000358 - 0x000378)
class UFortMobilePlayerAugmentTimer : public UFortMobileHUDElement
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 888;

public:
	CMember(TWeakObjectPtr<UFortControllerComponent_AugmentGrantingSystem*>) AugmentControllerComponent            OFFSET(get<T>, {0x358, 8, 0, 0})
	CMember(class UClass*)                             PlayerAugmentGranterWidgetClass                             OFFSET(get<T>, {0x360, 8, 0, 0})
	CMember(class UUserWidget*)                        PlayerAugmentGranterWidget                                  OFFSET(get<T>, {0x368, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_PlayerAugmentTimer                                   OFFSET(get<T>, {0x370, 8, 0, 0})


	/// Functions
	// Function /Script/PlayerAugmentsUI.FortMobilePlayerAugmentTimer.HandleHUDElementVisibilityChanged
	// void HandleHUDElementVisibilityChanged(FGameplayTagContainer& HiddenElementTagContainer);                                // [0xb8f5184] Final|Native|Private|HasOutParms 
	// Function /Script/PlayerAugmentsUI.FortMobilePlayerAugmentTimer.BP_OnHUDElementVisibilityChanged
	// void BP_OnHUDElementVisibilityChanged(FGameplayTagContainer& HiddenElementTagContainer, bool bIsSelectionItemEquipped, bool bForceCollapse); // [0x186becc] Event|Protected|HasOutParms|BlueprintEvent 
};

/// Class /Script/PlayerAugmentsUI.FortPickupInteractOverrideComponent_Augments
/// Size: 0x0020 (0x0000C0 - 0x0000E0)
class UFortPickupInteractOverrideComponent_Augments : public UFortPickupInteractOverrideComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	SMember(FGameplayTagContainer)                     AllowedAugmentGameplayTags                                  OFFSET(getStruct<T>, {0xC0, 32, 0, 0})
};

/// Class /Script/PlayerAugmentsUI.FortPlayerAugmentCollectionListEntry
/// Size: 0x0010 (0x001570 - 0x001580)
class UFortPlayerAugmentCollectionListEntry : public UAthenaCollectionListEntry
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5504;

public:
	CMember(class UImage*)                             Image_Background                                            OFFSET(get<T>, {0x1570, 8, 0, 0})
	SMember(FName)                                     ParamName_ItemIcon                                          OFFSET(getStruct<T>, {0x1578, 4, 0, 0})
	SMember(FName)                                     ParamName_IsDiscovered                                      OFFSET(getStruct<T>, {0x157C, 4, 0, 0})
};

/// Class /Script/PlayerAugmentsUI.FortPlayerAugmentCollectionScreen
/// Size: 0x0080 (0x000670 - 0x0006F0)
class UFortPlayerAugmentCollectionScreen : public UAthenaCollectionScreenBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1776;

public:
	SMember(FScalableFloat)                            AugmentsEnabledViaHotfix                                    OFFSET(getStruct<T>, {0x670, 40, 0, 0})
	CMember(TMap<FGameplayTag, TWeakObjectPtr<UObject*>>) TagToImageMap                                            OFFSET(get<T>, {0x698, 80, 0, 0})
	CMember(class UCommonTextBlock*)                   Text_CategoryTitle                                          OFFSET(get<T>, {0x6E8, 8, 0, 0})
};

/// Class /Script/PlayerAugmentsUI.FortPlayerAugmentCollectionScreenContainer
/// Size: 0x0000 (0x000560 - 0x000560)
class UFortPlayerAugmentCollectionScreenContainer : public UAthenaCollectionScreenContainer
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1376;

public:
};

/// Class /Script/PlayerAugmentsUI.FortPlayerAugmentCollectionScreenInfoOverlay
/// Size: 0x0020 (0x0004C8 - 0x0004E8)
class UFortPlayerAugmentCollectionScreenInfoOverlay : public UAthenaCollectionScreenInfoOverlay
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1256;

public:
	SMember(FName)                                     ParamName_Progress                                          OFFSET(getStruct<T>, {0x4C8, 4, 0, 0})
	CMember(class UCommonTextBlock*)                   Text_ItemCategory                                           OFFSET(get<T>, {0x4D0, 8, 0, 0})
	CMember(class UFortItemCategoryIndicator*)         ItemCategoryIndicator                                       OFFSET(get<T>, {0x4D8, 8, 0, 0})
	CMember(class UOverlay*)                           Overlay_UndiscoveredText                                    OFFSET(get<T>, {0x4E0, 8, 0, 0})
};

/// Class /Script/PlayerAugmentsUI.FortPlayerAugmentGranterWidget
/// Size: 0x0058 (0x000328 - 0x000380)
class UFortPlayerAugmentGranterWidget : public UFortHUDElementWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 896;

public:
	SMember(FScalableFloat)                            UnblockInteractionWithChoicesTime                           OFFSET(getStruct<T>, {0x330, 40, 0, 0})
	CMember(TArray<class UFortPlayerAugmentItemDefinition*>) AvailableAugmentItemDefinitions                       OFFSET(get<T>, {0x358, 16, 0, 0})
	CMember(class UWidget*)                            Overlay_Reroll                                              OFFSET(get<T>, {0x368, 8, 0, 0})


	/// Functions
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentGranterWidget.OnTimerUpdated
	// void OnTimerUpdated(float TimeRemaining, float TimePercentage);                                                          // [0x186becc] Event|Protected|BlueprintEvent 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentGranterWidget.OnSelectedAugmentForGrant
	// void OnSelectedAugmentForGrant(class UFortPlayerAugmentItemDefinition* HighlightedAugment);                              // [0x186becc] Event|Protected|BlueprintEvent 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentGranterWidget.OnRerollAugments
	// void OnRerollAugments();                                                                                                 // [0x186becc] Event|Protected|BlueprintEvent 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentGranterWidget.OnPopulateAvailableAugmentsHUD
	// void OnPopulateAvailableAugmentsHUD(TArray<UFortPlayerAugmentItemDefinition*>& AugmentItemDefinition);                   // [0x186becc] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentGranterWidget.OnNumPendingAugmentsToGrantUpdated
	// void OnNumPendingAugmentsToGrantUpdated(int32_t NumPendingAugmentsToGrant);                                              // [0x186becc] Event|Protected|BlueprintEvent 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentGranterWidget.OnInputTypeChanged
	// void OnInputTypeChanged(ECommonInputType NewInputType);                                                                  // [0x186becc] Event|Protected|BlueprintEvent 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentGranterWidget.OnCanSelectAugmentChanged
	// void OnCanSelectAugmentChanged(bool bCanSelectAugment);                                                                  // [0x186becc] Event|Protected|BlueprintEvent 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentGranterWidget.OnAugmentSelectorToolViewSwapped
	// void OnAugmentSelectorToolViewSwapped(bool bViewingAugmentInventory);                                                    // [0x186becc] Event|Protected|BlueprintEvent 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentGranterWidget.OnAugmentSelectorOpenedStatusChanged
	// void OnAugmentSelectorOpenedStatusChanged(bool bIsOpened, bool bViewingAugmentInventory);                                // [0x186becc] Event|Protected|BlueprintEvent 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentGranterWidget.OnAugmentSelectionStarted
	// void OnAugmentSelectionStarted(int32_t SelectedAugmentIndex);                                                            // [0x186becc] Event|Protected|BlueprintEvent 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentGranterWidget.OnAugmentScrollUpEvent
	// void OnAugmentScrollUpEvent();                                                                                           // [0x186becc] Event|Protected|BlueprintEvent 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentGranterWidget.OnAugmentScrollDownEvent
	// void OnAugmentScrollDownEvent();                                                                                         // [0x186becc] Event|Protected|BlueprintEvent 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentGranterWidget.OnAugmentHighlighted
	// void OnAugmentHighlighted(int32_t HighlightedAugmentIndex);                                                              // [0x186becc] Event|Protected|BlueprintEvent 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentGranterWidget.HandleTimerUpdated
	// void HandleTimerUpdated(float TimeRemaining, float TimePercentage);                                                      // [0xb8f56dc] Final|Native|Private 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentGranterWidget.HandleSelectedAugmentForGrant
	// void HandleSelectedAugmentForGrant(class UFortPlayerAugmentItemDefinition* SelectedAugment);                             // [0xb8f561c] Final|Native|Private 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentGranterWidget.HandleRerollAugments
	// void HandleRerollAugments();                                                                                             // [0xb8f55f4] Final|Native|Private 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentGranterWidget.HandleNumPendingAugmentsToGrantUpdated
	// void HandleNumPendingAugmentsToGrantUpdated(int8_t NumPendingAugmentsToGrant);                                           // [0xb8f52f4] Final|Native|Private 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentGranterWidget.HandleCanSelectAugmentChanged
	// void HandleCanSelectAugmentChanged(bool bCanSelectAugment);                                                              // [0xb8f4e7c] Final|Native|Private 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentGranterWidget.HandleAvailableAugmentsForGrantingUpdated
	// void HandleAvailableAugmentsForGrantingUpdated(class UFortControllerComponent_AugmentGrantingSystem* GrantingComponent); // [0xb8f4dbc] Final|Native|Private 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentGranterWidget.HandleAugmentSelectorToolViewSwapped
	// void HandleAugmentSelectorToolViewSwapped(bool bViewingAugmentsInventory);                                               // [0xb8f4ba8] Final|Native|Private 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentGranterWidget.HandleAugmentSelectorOpenedStatusChanged
	// void HandleAugmentSelectorOpenedStatusChanged(bool bIsOpened, bool bViewingAugmentInventory);                            // [0xb8f47b8] Final|Native|Private 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentGranterWidget.HandleAugmentSelectionStarted
	// void HandleAugmentSelectionStarted(int32_t SelectedAugmentIndex);                                                        // [0xb8f46f8] Final|Native|Private 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentGranterWidget.HandleAugmentHighlighted
	// void HandleAugmentHighlighted(int32_t HighlightedAugmentIndex);                                                          // [0xb8f4638] Final|Native|Private 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentGranterWidget.GetPendingAugmentsToGrant
	// int32_t GetPendingAugmentsToGrant();                                                                                     // [0xb8f4550] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/PlayerAugmentsUI.FortPlayerAugmentHUDQuickbarWidget
/// Size: 0x0048 (0x0002E8 - 0x000330)
class UFortPlayerAugmentHUDQuickbarWidget : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 816;

public:
	SMember(FGameplayTagContainer)                     HiddenAugmentGameplayTags                                   OFFSET(getStruct<T>, {0x2E8, 32, 0, 0})
	SMember(FScalableFloat)                            NumAugmentGrantRoundsForPlaylist                            OFFSET(getStruct<T>, {0x308, 40, 0, 0})


	/// Functions
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentHUDQuickbarWidget.OnAugmentsUpdated
	// void OnAugmentsUpdated(TArray<UFortPlayerAugmentItemDefinition*>& ActiveAugments);                                       // [0x186becc] Event|Protected|HasOutParms|BlueprintEvent 
};

/// Class /Script/PlayerAugmentsUI.FortPlayerAugmentHUDRerollWidget
/// Size: 0x0050 (0x0002E8 - 0x000338)
class UFortPlayerAugmentHUDRerollWidget : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 824;

public:
	CMember(class UCommonLazyImage*)                   Image_CurrencyIcon                                          OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(class UFortWorldItemDefinition*)           RerollCurrency                                              OFFSET(get<T>, {0x2F0, 8, 0, 0})
	DMember(int32_t)                                   CachedNumFreeRerolls                                        OFFSET(get<int32_t>, {0x2F8, 4, 0, 0})
	SMember(FName)                                     RerollHoldMaterialParamName                                 OFFSET(getStruct<T>, {0x2FC, 4, 0, 0})
	CMember(class UImage*)                             Image_ProgressBar                                           OFFSET(get<T>, {0x308, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   Text_OwnedCurrency                                          OFFSET(get<T>, {0x310, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   Text_RerollCost                                             OFFSET(get<T>, {0x318, 8, 0, 0})


	/// Functions
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentHUDRerollWidget.StartRerollHoldProgress
	// void StartRerollHoldProgress(float duration);                                                                            // [0xb8f600c] Final|Native|Protected|BlueprintCallable 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentHUDRerollWidget.OnUpdateCurrency
	// void OnUpdateCurrency(int32_t OwnedCurrency, int32_t RerollCost);                                                        // [0x186becc] Event|Protected|BlueprintEvent 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentHUDRerollWidget.OnRerollAugments
	// void OnRerollAugments();                                                                                                 // [0x186becc] Event|Protected|BlueprintEvent 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentHUDRerollWidget.OnFreeRerollsUpdated
	// void OnFreeRerollsUpdated(int32_t NewNumFreeRerolls);                                                                    // [0x186becc] Event|Protected|BlueprintEvent 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentHUDRerollWidget.HandleRerollAugments
	// void HandleRerollAugments();                                                                                             // [0xb8f5608] Final|Native|Private 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentHUDRerollWidget.HandleFreeRerollsUpdated
	// void HandleFreeRerollsUpdated(int32_t NewNumFreeRerolls);                                                                // [0xb8f50c4] Final|Native|Private 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentHUDRerollWidget.HandleAugmentSelectorOpenedStatusChanged
	// void HandleAugmentSelectorOpenedStatusChanged(bool bIsOpened, bool bViewingInventory);                                   // [0xb8f4908] Final|Native|Private 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentHUDRerollWidget.EndRerollHoldProgress
	// void EndRerollHoldProgress();                                                                                            // [0xb8f4458] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/PlayerAugmentsUI.FortPlayerAugmentInfoEntryWidget
/// Size: 0x0068 (0x0002E8 - 0x000350)
class UFortPlayerAugmentInfoEntryWidget : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 848;

public:
	SMember(FText)                                     RarityTextFormat                                            OFFSET(getStruct<T>, {0x2E8, 24, 0, 0})
	CMember(class UCommonTextBlock*)                   Text_AugmentName                                            OFFSET(get<T>, {0x300, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   Text_AugmentRarity                                          OFFSET(get<T>, {0x308, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   Text_AugmentCategory                                        OFFSET(get<T>, {0x310, 8, 0, 0})
	CMember(class UFortItemCategoryIndicator*)         ItemCategoryIndicator                                       OFFSET(get<T>, {0x318, 8, 0, 0})
	CMember(class UFortLazyImage*)                     Image_CategoryAsImage                                       OFFSET(get<T>, {0x320, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   Text_AugmentDescription                                     OFFSET(get<T>, {0x328, 8, 0, 0})
	CMember(class UFortSocialAvatarIcon*)              Icon_LenderAvatarIcon                                       OFFSET(get<T>, {0x330, 8, 0, 0})
	CMember(class UWidget*)                            Overlay_LenderAvatarIcon                                    OFFSET(get<T>, {0x338, 8, 0, 0})
	CMember(class UFortLazyImage*)                     Image_LenderSquadColor                                      OFFSET(get<T>, {0x340, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   Text_BorrowingText                                          OFFSET(get<T>, {0x348, 8, 0, 0})


	/// Functions
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentInfoEntryWidget.UpdateAugment
	// void UpdateAugment(class UFortPlayerAugmentItemDefinition* AugmentItemDefinition);                                       // [0xb8f60d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentInfoEntryWidget.OnItemRaritySet
	// void OnItemRaritySet(EFortRarity Rarity, FFortRarityItemData RarityItemData);                                            // [0x186becc] Event|Protected|BlueprintEvent 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentInfoEntryWidget.OnItemPinColorSet
	// void OnItemPinColorSet(FLinearColor PinColor);                                                                           // [0x186becc] Event|Protected|HasDefaults|BlueprintEvent 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentInfoEntryWidget.OnItemNewOrBorrowedSet
	// void OnItemNewOrBorrowedSet(bool bIsNew, bool bIsBorrowed);                                                              // [0x186becc] Event|Protected|BlueprintEvent 
};

/// Class /Script/PlayerAugmentsUI.FortPlayerAugmentInGameCarriedWidget
/// Size: 0x0000 (0x000328 - 0x000328)
class UFortPlayerAugmentInGameCarriedWidget : public UFortHUDElementWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 808;

public:


	/// Functions
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentInGameCarriedWidget.OnShowInitialAugment
	// void OnShowInitialAugment(class UFortPlayerAugmentItemDefinition* PlayerAugmentItemDefinition);                          // [0x186becc] Event|Protected|BlueprintEvent 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentInGameCarriedWidget.HandleExitBus
	// void HandleExitBus(class AFortPlayerControllerZone* FortPCZone);                                                         // [0xb8f5004] Final|Native|Private 
};

/// Class /Script/PlayerAugmentsUI.FortPlayerAugmentInventoryExtensionRow
/// Size: 0x0050 (0x000350 - 0x0003A0)
class UFortPlayerAugmentInventoryExtensionRow : public UAthenaInventoryGroupBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 928;

public:
	SMember(FScalableFloat)                            AugmentsEnabledViaHotfix                                    OFFSET(getStruct<T>, {0x350, 40, 0, 0})
	SMember(FGameplayTagContainer)                     BlockedGameplayTags                                         OFFSET(getStruct<T>, {0x378, 32, 0, 0})


	/// Functions
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentInventoryExtensionRow.RequestOpenSelector
	// void RequestOpenSelector();                                                                                              // [0xb8f5e2c] Final|Native|Protected|BlueprintCallable 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentInventoryExtensionRow.OnTimerUpdated
	// void OnTimerUpdated(float TimeRemaining, float TimePercentage);                                                          // [0x186becc] Event|Protected|BlueprintEvent 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentInventoryExtensionRow.OnNumPendingAugmentsToGrantUpdated
	// void OnNumPendingAugmentsToGrantUpdated(int32_t NumPendingAugmentsToGrant);                                              // [0x186becc] Event|Protected|BlueprintEvent 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentInventoryExtensionRow.OnAugmentGrantingTimersResetForMatch
	// void OnAugmentGrantingTimersResetForMatch();                                                                             // [0x186becc] Event|Protected|BlueprintEvent 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentInventoryExtensionRow.OnAugmentGrantingTimersFinishedForMatch
	// void OnAugmentGrantingTimersFinishedForMatch();                                                                          // [0x186becc] Event|Protected|BlueprintEvent 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentInventoryExtensionRow.HandleTimerUpdated
	// void HandleTimerUpdated(float TimeRemaining, float TimePercentage);                                                      // [0xb8f595c] Final|Native|Private 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentInventoryExtensionRow.HandleNumPendingAugmentsToGrantUpdated
	// void HandleNumPendingAugmentsToGrantUpdated(int8_t NumPendingAugmentsToGrant);                                           // [0xb8f5474] Final|Native|Private 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentInventoryExtensionRow.HandleAugmentGrantingTimersResetForMatch
	// void HandleAugmentGrantingTimersResetForMatch();                                                                         // [0xb8f4610] Final|Native|Private 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentInventoryExtensionRow.HandleAugmentGrantingTimersFinishedForMatch
	// void HandleAugmentGrantingTimersFinishedForMatch();                                                                      // [0xb8f45d4] Final|Native|Private 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentInventoryExtensionRow.GetPendingAugmentsToGrant
	// int32_t GetPendingAugmentsToGrant();                                                                                     // [0xb8f459c] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/PlayerAugmentsUI.FortPlayerAugmentInventoryInfoWidget
/// Size: 0x0060 (0x000400 - 0x000460)
class UFortPlayerAugmentInventoryInfoWidget : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1120;

public:
	SMember(FText)                                     RarityTextFormat                                            OFFSET(getStruct<T>, {0x408, 24, 0, 0})
	CMember(class UCommonTextBlock*)                   Text_ItemName                                               OFFSET(get<T>, {0x420, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   Text_ItemRarity                                             OFFSET(get<T>, {0x428, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   Text_ItemCategory                                           OFFSET(get<T>, {0x430, 8, 0, 0})
	CMember(class UFortItemCategoryIndicator*)         ItemCategoryIndicator                                       OFFSET(get<T>, {0x438, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   Text_ItemDescription                                        OFFSET(get<T>, {0x440, 8, 0, 0})
	CMember(class UFortSocialAvatarIcon*)              Icon_LenderAvatarIcon                                       OFFSET(get<T>, {0x448, 8, 0, 0})
	CMember(class UFortLazyImage*)                     Image_LenderSquadColor                                      OFFSET(get<T>, {0x450, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   Text_BorrowingText                                          OFFSET(get<T>, {0x458, 8, 0, 0})


	/// Functions
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentInventoryInfoWidget.OnItemRaritySet
	// void OnItemRaritySet(EFortRarity Rarity, FFortRarityItemData RarityItemData);                                            // [0x186becc] Event|Protected|BlueprintEvent 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentInventoryInfoWidget.OnItemNewOrBorrowedSet
	// void OnItemNewOrBorrowedSet(bool bIsNew, bool bIsBorrowed);                                                              // [0x186becc] Event|Protected|BlueprintEvent 
};

/// Class /Script/PlayerAugmentsUI.FortPlayerAugmentInventoryListEntry
/// Size: 0x0010 (0x001490 - 0x0014A0)
class UFortPlayerAugmentInventoryListEntry : public UCommonButtonBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5280;

public:


	/// Functions
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentInventoryListEntry.OnAugmentListItemSet
	// void OnAugmentListItemSet(class UItemDefinitionBase* ItemDefinition);                                                    // [0x186becc] Event|Protected|BlueprintEvent 
};

/// Class /Script/PlayerAugmentsUI.FortPlayerAugmentInventoryTab
/// Size: 0x0180 (0x000400 - 0x000580)
class UFortPlayerAugmentInventoryTab : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1408;

public:
	SMember(FScalableFloat)                            AugmentsEnabledViaHotfix                                    OFFSET(getStruct<T>, {0x408, 40, 0, 0})
	SMember(FGameplayTagContainer)                     HiddenAugmentGameplayTags                                   OFFSET(getStruct<T>, {0x430, 32, 0, 0})
	SMember(FName)                                     TabNameID                                                   OFFSET(getStruct<T>, {0x450, 4, 0, 0})
	SMember(FFortTabButtonLabelInfo)                   TabButtonLabelInfo                                          OFFSET(getStruct<T>, {0x460, 272, 0, 0})
	CMember(class UFortPlayerAugmentInventoryInfoWidget*) AugmentInfo                                              OFFSET(get<T>, {0x570, 8, 0, 0})
	CMember(class UCommonListView*)                    ListView_Augments                                           OFFSET(get<T>, {0x578, 8, 0, 0})


	/// Functions
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentInventoryTab.RequestOpenSelector
	// void RequestOpenSelector();                                                                                              // [0xb8f5e2c] Final|Native|Protected|BlueprintCallable 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentInventoryTab.OnTimerUpdated
	// void OnTimerUpdated(float TimeRemaining, float TimePercentage);                                                          // [0x186becc] Event|Protected|BlueprintEvent 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentInventoryTab.OnNumPendingAugmentsToGrantUpdated
	// void OnNumPendingAugmentsToGrantUpdated(int32_t NumPendingAugmentsToGrant);                                              // [0x186becc] Event|Protected|BlueprintEvent 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentInventoryTab.OnAugmentListUpdated
	// void OnAugmentListUpdated(int32_t NumAugments);                                                                          // [0x186becc] Event|Protected|BlueprintEvent 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentInventoryTab.OnAugmentGrantingTimersResetForMatch
	// void OnAugmentGrantingTimersResetForMatch();                                                                             // [0x186becc] Event|Protected|BlueprintEvent 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentInventoryTab.OnAugmentGrantingTimersFinishedForMatch
	// void OnAugmentGrantingTimersFinishedForMatch();                                                                          // [0x186becc] Event|Protected|BlueprintEvent 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentInventoryTab.HandleTimerUpdated
	// void HandleTimerUpdated(float TimeRemaining, float TimePercentage);                                                      // [0xb8f5a9c] Final|Native|Private 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentInventoryTab.HandleNumPendingAugmentsToGrantUpdated
	// void HandleNumPendingAugmentsToGrantUpdated(int8_t NumPendingAugmentsToGrant);                                           // [0xb8f5534] Final|Native|Private 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentInventoryTab.HandleAugmentGrantingTimersResetForMatch
	// void HandleAugmentGrantingTimersResetForMatch();                                                                         // [0xb8f4624] Final|Native|Private 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentInventoryTab.HandleAugmentGrantingTimersFinishedForMatch
	// void HandleAugmentGrantingTimersFinishedForMatch();                                                                      // [0xb8f45e8] Final|Native|Private 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentInventoryTab.GetPendingAugmentsToGrant
	// int32_t GetPendingAugmentsToGrant();                                                                                     // [0xb8f459c] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/PlayerAugmentsUI.FortPlayerAugmentLobbyWidget
/// Size: 0x0000 (0x0002E8 - 0x0002E8)
class UFortPlayerAugmentLobbyWidget : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 744;

public:


	/// Functions
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentLobbyWidget.OnShowInitialAugment
	// void OnShowInitialAugment(class UFortPlayerAugmentItemDefinition* CarriedAugment);                                       // [0x186becc] Event|Protected|BlueprintEvent 
};

/// Class /Script/PlayerAugmentsUI.FortPlayerAugmentPostMatchUnlocksWidget
/// Size: 0x0028 (0x000328 - 0x000350)
class UFortPlayerAugmentPostMatchUnlocksWidget : public UFortHUDElementWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 848;

public:
	SMember(FScalableFloat)                            AugmentsEnabledViaHotfix                                    OFFSET(getStruct<T>, {0x328, 40, 0, 0})


	/// Functions
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentPostMatchUnlocksWidget.OnShowUnlockedAugments
	// void OnShowUnlockedAugments(TArray<UFortPlayerAugmentItemDefinition*>& UnlockedAugments);                                // [0x186becc] Event|Protected|HasOutParms|BlueprintEvent 
};

/// Class /Script/PlayerAugmentsUI.FortPlayerAugmentSpecialAcquiredNotificationWidget
/// Size: 0x0098 (0x000328 - 0x0003C0)
class UFortPlayerAugmentSpecialAcquiredNotificationWidget : public UFortHUDElementWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 960;

public:
	SMember(FFortPrioritizedWidgetData)                PrioritizationData                                          OFFSET(getStruct<T>, {0x390, 2, 0, 0})
	SMember(FGameplayTagContainer)                     TargetGameplayTags                                          OFFSET(getStruct<T>, {0x398, 32, 0, 0})


	/// Functions
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentSpecialAcquiredNotificationWidget.OpenWidget
	// void OpenWidget(class UFortPlayerAugmentItemDefinition* ItemDef);                                                        // [0x186becc] Event|Protected|BlueprintEvent 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentSpecialAcquiredNotificationWidget.OnStompedByOtherWidget
	// void OnStompedByOtherWidget();                                                                                           // [0x186becc] Event|Protected|BlueprintEvent 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentSpecialAcquiredNotificationWidget.OnEventAdded
	// void OnEventAdded();                                                                                                     // [0x186becc] Event|Protected|BlueprintEvent 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentSpecialAcquiredNotificationWidget.HasMoreAugmentEvents
	// bool HasMoreAugmentEvents();                                                                                             // [0xb8f5bdc] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentSpecialAcquiredNotificationWidget.ConstructEventDescription
	// FText ConstructEventDescription(class UFortPlayerAugmentItemDefinition* ItemDef);                                        // [0xb8f4368] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentSpecialAcquiredNotificationWidget.CloseWidget
	// void CloseWidget();                                                                                                      // [0xb8f4354] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/PlayerAugmentsUI.FortPlayerAugmentInfoTouchWidget
/// Size: 0x0008 (0x000388 - 0x000390)
class UFortPlayerAugmentInfoTouchWidget : public UFortTouchUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 912;

public:


	/// Functions
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentInfoTouchWidget.SetAugmentIndexInList
	// void SetAugmentIndexInList(int32_t InAugmentIndexInList);                                                                // [0xb8f5e7c] Final|Native|Public|BlueprintCallable 
};

