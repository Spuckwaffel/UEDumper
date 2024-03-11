
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
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
public:
	bool                                               bCachedIsInInventoryView;                                   // 0x0048   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0049   (0x0007)  MISSED
	class UPaperSprite*                                ListViewSprite;                                             // 0x0050   (0x0008)  


	/// Functions
	// Function /Script/PlayerAugmentsUI.FortMobileButtonBehaviorComponent_AugmentsListIconPicker.OnAugmentToolViewSwap
	// void OnAugmentToolViewSwap(bool bIsInInventoryView);                                                                  // [0xaa5b07c] Final|Native|Private 
};

/// Class /Script/PlayerAugmentsUI.FortMobileButtonBehaviorComponent_AugmentsListVisibility
/// Size: 0x0008 (0x000048 - 0x000050)
class UFortMobileButtonBehaviorComponent_AugmentsListVisibility : public UFortMobileButtonBehaviorComponent_Visibility
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0048   (0x0008)  MISSED


	/// Functions
	// Function /Script/PlayerAugmentsUI.FortMobileButtonBehaviorComponent_AugmentsListVisibility.HandleAugmentToolViewSwap
	// void HandleAugmentToolViewSwap(bool bInIsInventoryView);                                                              // [0x96f903c] Final|Native|Private 
	// Function /Script/PlayerAugmentsUI.FortMobileButtonBehaviorComponent_AugmentsListVisibility.HandleAugmentToolOpenedStatusChanged
	// void HandleAugmentToolOpenedStatusChanged(bool bIsOpened, bool bInIsInventoryView);                                   // [0xaa5a190] Final|Native|Private 
};

/// Class /Script/PlayerAugmentsUI.FortMobileButtonBehaviorComponent_AugmentsListVisibility_Swap
/// Size: 0x0008 (0x000050 - 0x000058)
class UFortMobileButtonBehaviorComponent_AugmentsListVisibility_Swap : public UFortMobileButtonBehaviorComponent_AugmentsListVisibility
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0050   (0x0008)  MISSED
};

/// Class /Script/PlayerAugmentsUI.FortPlayerAugmentHUDTimerWidget
/// Size: 0x0000 (0x000328 - 0x000328)
class UFortPlayerAugmentHUDTimerWidget : public UFortHUDElementWidget
{ 
public:


	/// Functions
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentHUDTimerWidget.OnTimerUpdated
	// void OnTimerUpdated(float TimeRemaining, float TimePercentage);                                                       // [0xaa5b0fc] Native|Event|Protected|BlueprintEvent 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentHUDTimerWidget.OnNumPendingAugmentsToGrantUpdated
	// void OnNumPendingAugmentsToGrantUpdated(int32_t NumPendingAugmentsToGrant);                                           // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentHUDTimerWidget.OnMovementModeChanged
	// void OnMovementModeChanged();                                                                                         // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentHUDTimerWidget.OnHUDElementVisibilityChanged
	// void OnHUDElementVisibilityChanged(FGameplayTagContainer& HiddenElementTagContainer);                                 // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentHUDTimerWidget.OnCanSelectAugmentChanged
	// void OnCanSelectAugmentChanged(bool bCanSelectAugment);                                                               // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentHUDTimerWidget.OnAugmentSelectorOpenedStatusChanged
	// void OnAugmentSelectorOpenedStatusChanged(bool bIsOpened);                                                            // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentHUDTimerWidget.OnAugmentGrantingTimersResetForMatch
	// void OnAugmentGrantingTimersResetForMatch();                                                                          // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentHUDTimerWidget.OnAugmentGrantingTimersFinishedForMatch
	// void OnAugmentGrantingTimersFinishedForMatch();                                                                       // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentHUDTimerWidget.HandleTimerUpdated
	// void HandleTimerUpdated(float TimeRemaining, float TimePercentage);                                                   // [0xaa5ade8] Final|Native|Private 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentHUDTimerWidget.HandleNumPendingAugmentsToGrantUpdated
	// void HandleNumPendingAugmentsToGrantUpdated(int8_t NumPendingAugmentsToGrant);                                        // [0xaa5a8ec] Final|Native|Private 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentHUDTimerWidget.HandleHUDElementVisibilityChanged
	// void HandleHUDElementVisibilityChanged(FGameplayTagContainer& HiddenElementTagContainer);                             // [0xaa5a704] Final|Native|Private|HasOutParms 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentHUDTimerWidget.HandleCanSelectAugmentChanged
	// void HandleCanSelectAugmentChanged(bool bCanSelectAugment);                                                           // [0xaa5a4cc] Final|Native|Private 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentHUDTimerWidget.HandleAugmentSelectorOpenedStatusChanged
	// void HandleAugmentSelectorOpenedStatusChanged(bool bIsOpened, bool bViewingAugmentInventory);                         // [0xaa5a04c] Final|Native|Private 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentHUDTimerWidget.HandleAugmentGrantingTimersResetForMatch
	// void HandleAugmentGrantingTimersResetForMatch();                                                                      // [0xaa59d88] Final|Native|Private 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentHUDTimerWidget.HandleAugmentGrantingTimersFinishedForMatch
	// void HandleAugmentGrantingTimersFinishedForMatch();                                                                   // [0xaa59d4c] Final|Native|Private 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentHUDTimerWidget.GetPendingAugmentsToGrant
	// int32_t GetPendingAugmentsToGrant();                                                                                  // [0xaa59cdc] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentHUDTimerWidget.FormatTime
	// FText FormatTime(float TotalSeconds);                                                                                 // [0xaa59c3c] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentHUDTimerWidget.CanSelectAugment
	// bool CanSelectAugment();                                                                                              // [0xaa59b14] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentHUDTimerWidget.CanEquipSelectionTool
	// bool CanEquipSelectionTool();                                                                                         // [0xaa59ac4] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/PlayerAugmentsUI.FortPlayerAugmentHUDSelectionTimerWidget
/// Size: 0x0058 (0x000328 - 0x000380)
class UFortPlayerAugmentHUDSelectionTimerWidget : public UFortPlayerAugmentHUDTimerWidget
{ 
public:
	bool                                               bIsAugmentReadyVisible;                                     // 0x0328   (0x0001)  
	bool                                               bIsCountdownActive;                                         // 0x0329   (0x0001)  
	bool                                               bIsOffline;                                                 // 0x032A   (0x0001)  
	unsigned char                                      UnknownData00_5[0x5];                                       // 0x032B   (0x0005)  MISSED
	FTimerHandle                                       HideTimerHandle;                                            // 0x0330   (0x0008)  
	class UMaterialInstanceDynamic*                    TimerProgressDMI;                                           // 0x0338   (0x0008)  
	FScalableFloat                                     CountdownStartTimeHF;                                       // 0x0340   (0x0028)  
	class UCommonTextBlock*                            NativeAugmentTimerText;                                     // 0x0368   (0x0008)  
	class UWidgetAnimation*                            NativeAnimTimerTextCountdownUpdated;                        // 0x0370   (0x0008)  
	class UWidgetAnimation*                            NativeAnimProgressBarCountdownUpdated;                      // 0x0378   (0x0008)  


	/// Functions
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentHUDSelectionTimerWidget.UpdateCountdown
	// void UpdateCountdown(float TimeRemaining);                                                                            // [0xaa5b420] Final|Native|Protected|BlueprintCallable 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentHUDSelectionTimerWidget.SetMobileProgressTimer
	// void SetMobileProgressTimer(float TimePercentage);                                                                    // [0xaa5b2a0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentHUDSelectionTimerWidget.OnCountdownActivated
	// void OnCountdownActivated();                                                                                          // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentHUDSelectionTimerWidget.IsCountdownVisible
	// bool IsCountdownVisible();                                                                                            // [0xaa5b058] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/PlayerAugmentsUI.FortMobileActionBBE_AugmentShoot
/// Size: 0x0010 (0x000080 - 0x000090)
class UFortMobileActionBBE_AugmentShoot : public UFortMobileActionButtonBehaviorExtension
{ 
public:
	class UPaperSprite*                                IconOverrideSprite;                                         // 0x0080   (0x0008)  
	FGameplayTag                                       IconOverrideTag;                                            // 0x0088   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x008C   (0x0004)  MISSED
};

/// Class /Script/PlayerAugmentsUI.FortMobileActionButtonBehavior_RerollAugments
/// Size: 0x0008 (0x000138 - 0x000140)
class UFortMobileActionButtonBehavior_RerollAugments : public UFortMobileActionButtonBehavior
{ 
public:
	class UFortItemDefinition*                         RerollCurrency;                                             // 0x0138   (0x0008)  
};

/// Class /Script/PlayerAugmentsUI.FortMobilePlayerAugmentTimer
/// Size: 0x0020 (0x000350 - 0x000370)
class UFortMobilePlayerAugmentTimer : public UFortMobileHUDElement
{ 
public:
	SDK_UNDEFINED(8,11325) /* TWeakObjectPtr<UFortControllerComponent_AugmentGrantingSystem*> */ __um(AugmentControllerComponent); // 0x0350   (0x0008)  
	class UClass*                                      PlayerAugmentGranterWidgetClass;                            // 0x0358   (0x0008)  
	class UUserWidget*                                 PlayerAugmentGranterWidget;                                 // 0x0360   (0x0008)  
	class UCommonButtonBase*                           Button_PlayerAugmentTimer;                                  // 0x0368   (0x0008)  


	/// Functions
	// Function /Script/PlayerAugmentsUI.FortMobilePlayerAugmentTimer.HandleHUDElementVisibilityChanged
	// void HandleHUDElementVisibilityChanged(FGameplayTagContainer& HiddenElementTagContainer);                             // [0xaa5a64c] Final|Native|Private|HasOutParms 
	// Function /Script/PlayerAugmentsUI.FortMobilePlayerAugmentTimer.BP_OnHUDElementVisibilityChanged
	// void BP_OnHUDElementVisibilityChanged(FGameplayTagContainer& HiddenElementTagContainer, bool bIsSelectionItemEquipped, bool bForceCollapse); // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
};

/// Class /Script/PlayerAugmentsUI.FortPickupInteractOverrideComponent_Augments
/// Size: 0x0020 (0x0000C0 - 0x0000E0)
class UFortPickupInteractOverrideComponent_Augments : public UFortPickupInteractOverrideComponent
{ 
public:
	FGameplayTagContainer                              AllowedAugmentGameplayTags;                                 // 0x00C0   (0x0020)  
};

/// Class /Script/PlayerAugmentsUI.FortPlayerAugmentCollectionListEntry
/// Size: 0x0010 (0x001570 - 0x001580)
class UFortPlayerAugmentCollectionListEntry : public UAthenaCollectionListEntry
{ 
public:
	class UImage*                                      Image_Background;                                           // 0x1570   (0x0008)  
	FName                                              ParamName_ItemIcon;                                         // 0x1578   (0x0004)  
	FName                                              ParamName_IsDiscovered;                                     // 0x157C   (0x0004)  
};

/// Class /Script/PlayerAugmentsUI.FortPlayerAugmentCollectionScreen
/// Size: 0x0080 (0x000670 - 0x0006F0)
class UFortPlayerAugmentCollectionScreen : public UAthenaCollectionScreenBase
{ 
public:
	FScalableFloat                                     AugmentsEnabledViaHotfix;                                   // 0x0670   (0x0028)  
	SDK_UNDEFINED(80,11326) /* TMap<FGameplayTag, TWeakObjectPtr<UObject*>> */ __um(TagToImageMap);                // 0x0698   (0x0050)  
	class UCommonTextBlock*                            Text_CategoryTitle;                                         // 0x06E8   (0x0008)  
};

/// Class /Script/PlayerAugmentsUI.FortPlayerAugmentCollectionScreenContainer
/// Size: 0x0000 (0x000560 - 0x000560)
class UFortPlayerAugmentCollectionScreenContainer : public UAthenaCollectionScreenContainer
{ 
public:
};

/// Class /Script/PlayerAugmentsUI.FortPlayerAugmentCollectionScreenInfoOverlay
/// Size: 0x0020 (0x0004C8 - 0x0004E8)
class UFortPlayerAugmentCollectionScreenInfoOverlay : public UAthenaCollectionScreenInfoOverlay
{ 
public:
	FName                                              ParamName_Progress;                                         // 0x04C8   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x04CC   (0x0004)  MISSED
	class UCommonTextBlock*                            Text_ItemCategory;                                          // 0x04D0   (0x0008)  
	class UFortItemCategoryIndicator*                  ItemCategoryIndicator;                                      // 0x04D8   (0x0008)  
	class UOverlay*                                    Overlay_UndiscoveredText;                                   // 0x04E0   (0x0008)  
};

/// Class /Script/PlayerAugmentsUI.FortPlayerAugmentGranterWidget
/// Size: 0x0058 (0x000328 - 0x000380)
class UFortPlayerAugmentGranterWidget : public UFortHUDElementWidget
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0328   (0x0008)  MISSED
	FScalableFloat                                     UnblockInteractionWithChoicesTime;                          // 0x0330   (0x0028)  
	TArray<class UFortPlayerAugmentItemDefinition*>    AvailableAugmentItemDefinitions;                            // 0x0358   (0x0010)  
	class UWidget*                                     Overlay_Reroll;                                             // 0x0368   (0x0008)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x0370   (0x0010)  MISSED


	/// Functions
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentGranterWidget.OnTimerUpdated
	// void OnTimerUpdated(float TimeRemaining, float TimePercentage);                                                       // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentGranterWidget.OnSelectedAugmentForGrant
	// void OnSelectedAugmentForGrant(class UFortPlayerAugmentItemDefinition* HighlightedAugment);                           // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentGranterWidget.OnRerollAugments
	// void OnRerollAugments();                                                                                              // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentGranterWidget.OnPopulateAvailableAugmentsHUD
	// void OnPopulateAvailableAugmentsHUD(TArray<UFortPlayerAugmentItemDefinition*>& AugmentItemDefinition);                // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentGranterWidget.OnNumPendingAugmentsToGrantUpdated
	// void OnNumPendingAugmentsToGrantUpdated(int32_t NumPendingAugmentsToGrant);                                           // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentGranterWidget.OnInputTypeChanged
	// void OnInputTypeChanged(ECommonInputType NewInputType);                                                               // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentGranterWidget.OnCanSelectAugmentChanged
	// void OnCanSelectAugmentChanged(bool bCanSelectAugment);                                                               // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentGranterWidget.OnAugmentSelectorToolViewSwapped
	// void OnAugmentSelectorToolViewSwapped(bool bViewingAugmentInventory);                                                 // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentGranterWidget.OnAugmentSelectorOpenedStatusChanged
	// void OnAugmentSelectorOpenedStatusChanged(bool bIsOpened, bool bViewingAugmentInventory);                             // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentGranterWidget.OnAugmentSelectionStarted
	// void OnAugmentSelectionStarted(int32_t SelectedAugmentIndex);                                                         // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentGranterWidget.OnAugmentScrollUpEvent
	// void OnAugmentScrollUpEvent();                                                                                        // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentGranterWidget.OnAugmentScrollDownEvent
	// void OnAugmentScrollDownEvent();                                                                                      // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentGranterWidget.OnAugmentHighlighted
	// void OnAugmentHighlighted(int32_t HighlightedAugmentIndex);                                                           // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentGranterWidget.HandleTimerUpdated
	// void HandleTimerUpdated(float TimeRemaining, float TimePercentage);                                                   // [0xaa5ad24] Final|Native|Private 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentGranterWidget.HandleSelectedAugmentForGrant
	// void HandleSelectedAugmentForGrant(class UFortPlayerAugmentItemDefinition* SelectedAugment);                          // [0xaa5aca4] Final|Native|Private 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentGranterWidget.HandleRerollAugments
	// void HandleRerollAugments();                                                                                          // [0xaa5ac7c] Final|Native|Private 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentGranterWidget.HandleNumPendingAugmentsToGrantUpdated
	// void HandleNumPendingAugmentsToGrantUpdated(int8_t NumPendingAugmentsToGrant);                                        // [0xaa5a7bc] Final|Native|Private 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentGranterWidget.HandleCanSelectAugmentChanged
	// void HandleCanSelectAugmentChanged(bool bCanSelectAugment);                                                           // [0xaa5a44c] Final|Native|Private 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentGranterWidget.HandleAvailableAugmentsForGrantingUpdated
	// void HandleAvailableAugmentsForGrantingUpdated(class UFortControllerComponent_AugmentGrantingSystem* GrantingComponent); // [0xaa5a254] Final|Native|Private 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentGranterWidget.HandleAugmentSelectorToolViewSwapped
	// void HandleAugmentSelectorToolViewSwapped(bool bViewingAugmentsInventory);                                            // [0xaa5a110] Final|Native|Private 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentGranterWidget.HandleAugmentSelectorOpenedStatusChanged
	// void HandleAugmentSelectorOpenedStatusChanged(bool bIsOpened, bool bViewingAugmentInventory);                         // [0xaa59ec4] Final|Native|Private 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentGranterWidget.HandleAugmentSelectionStarted
	// void HandleAugmentSelectionStarted(int32_t SelectedAugmentIndex);                                                     // [0xaa59e44] Final|Native|Private 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentGranterWidget.HandleAugmentHighlighted
	// void HandleAugmentHighlighted(int32_t HighlightedAugmentIndex);                                                       // [0xaa59dc4] Final|Native|Private 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentGranterWidget.GetPendingAugmentsToGrant
	// int32_t GetPendingAugmentsToGrant();                                                                                  // [0xaa59cdc] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/PlayerAugmentsUI.FortPlayerAugmentHUDQuickbarWidget
/// Size: 0x0048 (0x0002E8 - 0x000330)
class UFortPlayerAugmentHUDQuickbarWidget : public UCommonUserWidget
{ 
public:
	FGameplayTagContainer                              HiddenAugmentGameplayTags;                                  // 0x02E8   (0x0020)  
	FScalableFloat                                     NumAugmentGrantRoundsForPlaylist;                           // 0x0308   (0x0028)  


	/// Functions
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentHUDQuickbarWidget.OnAugmentsUpdated
	// void OnAugmentsUpdated(TArray<UFortPlayerAugmentItemDefinition*>& ActiveAugments);                                    // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
};

/// Class /Script/PlayerAugmentsUI.FortPlayerAugmentHUDRerollWidget
/// Size: 0x0050 (0x0002E8 - 0x000338)
class UFortPlayerAugmentHUDRerollWidget : public UCommonUserWidget
{ 
public:
	class UCommonLazyImage*                            Image_CurrencyIcon;                                         // 0x02E8   (0x0008)  
	class UFortWorldItemDefinition*                    RerollCurrency;                                             // 0x02F0   (0x0008)  
	int32_t                                            CachedNumFreeRerolls;                                       // 0x02F8   (0x0004)  
	FName                                              RerollHoldMaterialParamName;                                // 0x02FC   (0x0004)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0300   (0x0008)  MISSED
	class UImage*                                      Image_ProgressBar;                                          // 0x0308   (0x0008)  
	class UCommonTextBlock*                            Text_OwnedCurrency;                                         // 0x0310   (0x0008)  
	class UCommonTextBlock*                            Text_RerollCost;                                            // 0x0318   (0x0008)  
	unsigned char                                      UnknownData01_6[0x18];                                      // 0x0320   (0x0018)  MISSED


	/// Functions
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentHUDRerollWidget.StartRerollHoldProgress
	// void StartRerollHoldProgress(float duration);                                                                         // [0xaa5b320] Final|Native|Protected|BlueprintCallable 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentHUDRerollWidget.OnUpdateCurrency
	// void OnUpdateCurrency(int32_t OwnedCurrency, int32_t RerollCost);                                                     // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentHUDRerollWidget.OnRerollAugments
	// void OnRerollAugments();                                                                                              // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentHUDRerollWidget.OnFreeRerollsUpdated
	// void OnFreeRerollsUpdated(int32_t NewNumFreeRerolls);                                                                 // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentHUDRerollWidget.HandleRerollAugments
	// void HandleRerollAugments();                                                                                          // [0xaa5ac90] Final|Native|Private 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentHUDRerollWidget.HandleFreeRerollsUpdated
	// void HandleFreeRerollsUpdated(int32_t NewNumFreeRerolls);                                                             // [0xaa5a5cc] Final|Native|Private 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentHUDRerollWidget.HandleAugmentSelectorOpenedStatusChanged
	// void HandleAugmentSelectorOpenedStatusChanged(bool bIsOpened, bool bViewingInventory);                                // [0xaa59f88] Final|Native|Private 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentHUDRerollWidget.EndRerollHoldProgress
	// void EndRerollHoldProgress();                                                                                         // [0xaa59c28] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/PlayerAugmentsUI.FortPlayerAugmentInfoEntryWidget
/// Size: 0x0068 (0x0002E8 - 0x000350)
class UFortPlayerAugmentInfoEntryWidget : public UCommonUserWidget
{ 
public:
	SDK_UNDEFINED(24,11327) /* FText */                __um(RarityTextFormat);                                     // 0x02E8   (0x0018)  
	class UCommonTextBlock*                            Text_AugmentName;                                           // 0x0300   (0x0008)  
	class UCommonTextBlock*                            Text_AugmentRarity;                                         // 0x0308   (0x0008)  
	class UCommonTextBlock*                            Text_AugmentCategory;                                       // 0x0310   (0x0008)  
	class UFortItemCategoryIndicator*                  ItemCategoryIndicator;                                      // 0x0318   (0x0008)  
	class UFortLazyImage*                              Image_CategoryAsImage;                                      // 0x0320   (0x0008)  
	class UCommonTextBlock*                            Text_AugmentDescription;                                    // 0x0328   (0x0008)  
	class UFortSocialAvatarIcon*                       Icon_LenderAvatarIcon;                                      // 0x0330   (0x0008)  
	class UWidget*                                     Overlay_LenderAvatarIcon;                                   // 0x0338   (0x0008)  
	class UFortLazyImage*                              Image_LenderSquadColor;                                     // 0x0340   (0x0008)  
	class UCommonTextBlock*                            Text_BorrowingText;                                         // 0x0348   (0x0008)  


	/// Functions
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentInfoEntryWidget.UpdateAugment
	// void UpdateAugment(class UFortPlayerAugmentItemDefinition* AugmentItemDefinition);                                    // [0xaa5b3a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentInfoEntryWidget.OnItemRaritySet
	// void OnItemRaritySet(EFortRarity Rarity, FFortRarityItemData RarityItemData);                                         // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentInfoEntryWidget.OnItemPinColorSet
	// void OnItemPinColorSet(FLinearColor PinColor);                                                                        // [0x18a39e4] Event|Protected|HasDefaults|BlueprintEvent 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentInfoEntryWidget.OnItemNewOrBorrowedSet
	// void OnItemNewOrBorrowedSet(bool bIsNew, bool bIsBorrowed);                                                           // [0x18a39e4] Event|Protected|BlueprintEvent 
};

/// Class /Script/PlayerAugmentsUI.FortPlayerAugmentInGameCarriedWidget
/// Size: 0x0000 (0x000328 - 0x000328)
class UFortPlayerAugmentInGameCarriedWidget : public UFortHUDElementWidget
{ 
public:


	/// Functions
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentInGameCarriedWidget.OnShowInitialAugment
	// void OnShowInitialAugment(class UFortPlayerAugmentItemDefinition* PlayerAugmentItemDefinition);                       // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentInGameCarriedWidget.HandleExitBus
	// void HandleExitBus(class AFortPlayerControllerZone* FortPCZone);                                                      // [0xaa5a54c] Final|Native|Private 
};

/// Class /Script/PlayerAugmentsUI.FortPlayerAugmentInventoryExtensionRow
/// Size: 0x0050 (0x000350 - 0x0003A0)
class UFortPlayerAugmentInventoryExtensionRow : public UAthenaInventoryGroupBase
{ 
public:
	FScalableFloat                                     AugmentsEnabledViaHotfix;                                   // 0x0350   (0x0028)  
	FGameplayTagContainer                              BlockedGameplayTags;                                        // 0x0378   (0x0020)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0398   (0x0008)  MISSED


	/// Functions
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentInventoryExtensionRow.RequestOpenSelector
	// void RequestOpenSelector();                                                                                           // [0xaa5b1c4] Final|Native|Protected|BlueprintCallable 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentInventoryExtensionRow.OnTimerUpdated
	// void OnTimerUpdated(float TimeRemaining, float TimePercentage);                                                       // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentInventoryExtensionRow.OnNumPendingAugmentsToGrantUpdated
	// void OnNumPendingAugmentsToGrantUpdated(int32_t NumPendingAugmentsToGrant);                                           // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentInventoryExtensionRow.OnAugmentGrantingTimersResetForMatch
	// void OnAugmentGrantingTimersResetForMatch();                                                                          // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentInventoryExtensionRow.OnAugmentGrantingTimersFinishedForMatch
	// void OnAugmentGrantingTimersFinishedForMatch();                                                                       // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentInventoryExtensionRow.HandleTimerUpdated
	// void HandleTimerUpdated(float TimeRemaining, float TimePercentage);                                                   // [0xaa5aeac] Final|Native|Private 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentInventoryExtensionRow.HandleNumPendingAugmentsToGrantUpdated
	// void HandleNumPendingAugmentsToGrantUpdated(int8_t NumPendingAugmentsToGrant);                                        // [0xaa5aa1c] Final|Native|Private 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentInventoryExtensionRow.HandleAugmentGrantingTimersResetForMatch
	// void HandleAugmentGrantingTimersResetForMatch();                                                                      // [0xaa59d9c] Final|Native|Private 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentInventoryExtensionRow.HandleAugmentGrantingTimersFinishedForMatch
	// void HandleAugmentGrantingTimersFinishedForMatch();                                                                   // [0xaa59d60] Final|Native|Private 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentInventoryExtensionRow.GetPendingAugmentsToGrant
	// int32_t GetPendingAugmentsToGrant();                                                                                  // [0xaa59d28] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/PlayerAugmentsUI.FortPlayerAugmentInventoryInfoWidget
/// Size: 0x0060 (0x000400 - 0x000460)
class UFortPlayerAugmentInventoryInfoWidget : public UCommonActivatableWidget
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0400   (0x0008)  MISSED
	SDK_UNDEFINED(24,11328) /* FText */                __um(RarityTextFormat);                                     // 0x0408   (0x0018)  
	class UCommonTextBlock*                            Text_ItemName;                                              // 0x0420   (0x0008)  
	class UCommonTextBlock*                            Text_ItemRarity;                                            // 0x0428   (0x0008)  
	class UCommonTextBlock*                            Text_ItemCategory;                                          // 0x0430   (0x0008)  
	class UFortItemCategoryIndicator*                  ItemCategoryIndicator;                                      // 0x0438   (0x0008)  
	class UCommonTextBlock*                            Text_ItemDescription;                                       // 0x0440   (0x0008)  
	class UFortSocialAvatarIcon*                       Icon_LenderAvatarIcon;                                      // 0x0448   (0x0008)  
	class UFortLazyImage*                              Image_LenderSquadColor;                                     // 0x0450   (0x0008)  
	class UCommonTextBlock*                            Text_BorrowingText;                                         // 0x0458   (0x0008)  


	/// Functions
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentInventoryInfoWidget.OnItemRaritySet
	// void OnItemRaritySet(EFortRarity Rarity, FFortRarityItemData RarityItemData);                                         // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentInventoryInfoWidget.OnItemNewOrBorrowedSet
	// void OnItemNewOrBorrowedSet(bool bIsNew, bool bIsBorrowed);                                                           // [0x18a39e4] Event|Protected|BlueprintEvent 
};

/// Class /Script/PlayerAugmentsUI.FortPlayerAugmentInventoryListEntry
/// Size: 0x0010 (0x001490 - 0x0014A0)
class UFortPlayerAugmentInventoryListEntry : public UCommonButtonBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x1490   (0x0010)  MISSED


	/// Functions
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentInventoryListEntry.OnAugmentListItemSet
	// void OnAugmentListItemSet(class UItemDefinitionBase* ItemDefinition);                                                 // [0x18a39e4] Event|Protected|BlueprintEvent 
};

/// Class /Script/PlayerAugmentsUI.FortPlayerAugmentInventoryTab
/// Size: 0x0180 (0x000400 - 0x000580)
class UFortPlayerAugmentInventoryTab : public UCommonActivatableWidget
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0400   (0x0008)  MISSED
	FScalableFloat                                     AugmentsEnabledViaHotfix;                                   // 0x0408   (0x0028)  
	FGameplayTagContainer                              HiddenAugmentGameplayTags;                                  // 0x0430   (0x0020)  
	FName                                              TabNameID;                                                  // 0x0450   (0x0004)  
	unsigned char                                      UnknownData01_5[0xC];                                       // 0x0454   (0x000C)  MISSED
	FFortTabButtonLabelInfo                            TabButtonLabelInfo;                                         // 0x0460   (0x0110)  
	class UFortPlayerAugmentInventoryInfoWidget*       AugmentInfo;                                                // 0x0570   (0x0008)  
	class UCommonListView*                             ListView_Augments;                                          // 0x0578   (0x0008)  


	/// Functions
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentInventoryTab.RequestOpenSelector
	// void RequestOpenSelector();                                                                                           // [0xaa5b1c4] Final|Native|Protected|BlueprintCallable 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentInventoryTab.OnTimerUpdated
	// void OnTimerUpdated(float TimeRemaining, float TimePercentage);                                                       // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentInventoryTab.OnNumPendingAugmentsToGrantUpdated
	// void OnNumPendingAugmentsToGrantUpdated(int32_t NumPendingAugmentsToGrant);                                           // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentInventoryTab.OnAugmentListUpdated
	// void OnAugmentListUpdated(int32_t NumAugments);                                                                       // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentInventoryTab.OnAugmentGrantingTimersResetForMatch
	// void OnAugmentGrantingTimersResetForMatch();                                                                          // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentInventoryTab.OnAugmentGrantingTimersFinishedForMatch
	// void OnAugmentGrantingTimersFinishedForMatch();                                                                       // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentInventoryTab.HandleTimerUpdated
	// void HandleTimerUpdated(float TimeRemaining, float TimePercentage);                                                   // [0xaa5af70] Final|Native|Private 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentInventoryTab.HandleNumPendingAugmentsToGrantUpdated
	// void HandleNumPendingAugmentsToGrantUpdated(int8_t NumPendingAugmentsToGrant);                                        // [0xaa5ab4c] Final|Native|Private 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentInventoryTab.HandleAugmentGrantingTimersResetForMatch
	// void HandleAugmentGrantingTimersResetForMatch();                                                                      // [0xaa59db0] Final|Native|Private 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentInventoryTab.HandleAugmentGrantingTimersFinishedForMatch
	// void HandleAugmentGrantingTimersFinishedForMatch();                                                                   // [0xaa59d74] Final|Native|Private 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentInventoryTab.GetPendingAugmentsToGrant
	// int32_t GetPendingAugmentsToGrant();                                                                                  // [0xaa59d28] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/PlayerAugmentsUI.FortPlayerAugmentLobbyWidget
/// Size: 0x0000 (0x0002E8 - 0x0002E8)
class UFortPlayerAugmentLobbyWidget : public UCommonUserWidget
{ 
public:


	/// Functions
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentLobbyWidget.OnShowInitialAugment
	// void OnShowInitialAugment(class UFortPlayerAugmentItemDefinition* CarriedAugment);                                    // [0x18a39e4] Event|Protected|BlueprintEvent 
};

/// Class /Script/PlayerAugmentsUI.FortPlayerAugmentPostMatchUnlocksWidget
/// Size: 0x0028 (0x000328 - 0x000350)
class UFortPlayerAugmentPostMatchUnlocksWidget : public UFortHUDElementWidget
{ 
public:
	FScalableFloat                                     AugmentsEnabledViaHotfix;                                   // 0x0328   (0x0028)  


	/// Functions
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentPostMatchUnlocksWidget.OnShowUnlockedAugments
	// void OnShowUnlockedAugments(TArray<UFortPlayerAugmentItemDefinition*>& UnlockedAugments);                             // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
};

/// Class /Script/PlayerAugmentsUI.FortPlayerAugmentSpecialAcquiredNotificationWidget
/// Size: 0x0098 (0x000328 - 0x0003C0)
class UFortPlayerAugmentSpecialAcquiredNotificationWidget : public UFortHUDElementWidget
{ 
public:
	unsigned char                                      UnknownData00_3[0x68];                                      // 0x0328   (0x0068)  MISSED
	FFortPrioritizedWidgetData                         PrioritizationData;                                         // 0x0390   (0x0002)  
	unsigned char                                      UnknownData01_5[0x6];                                       // 0x0392   (0x0006)  MISSED
	FGameplayTagContainer                              TargetGameplayTags;                                         // 0x0398   (0x0020)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x03B8   (0x0008)  MISSED


	/// Functions
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentSpecialAcquiredNotificationWidget.OpenWidget
	// void OpenWidget(class UFortPlayerAugmentItemDefinition* ItemDef);                                                     // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentSpecialAcquiredNotificationWidget.OnStompedByOtherWidget
	// void OnStompedByOtherWidget();                                                                                        // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentSpecialAcquiredNotificationWidget.OnEventAdded
	// void OnEventAdded();                                                                                                  // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentSpecialAcquiredNotificationWidget.HasMoreAugmentEvents
	// bool HasMoreAugmentEvents();                                                                                          // [0xaa5b034] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentSpecialAcquiredNotificationWidget.ConstructEventDescription
	// FText ConstructEventDescription(class UFortPlayerAugmentItemDefinition* ItemDef);                                     // [0xaa59b78] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentSpecialAcquiredNotificationWidget.CloseWidget
	// void CloseWidget();                                                                                                   // [0xaa59b64] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/PlayerAugmentsUI.FortPlayerAugmentInfoTouchWidget
/// Size: 0x0008 (0x000388 - 0x000390)
class UFortPlayerAugmentInfoTouchWidget : public UFortTouchUserWidget
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0388   (0x0008)  MISSED


	/// Functions
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentInfoTouchWidget.SetAugmentIndexInList
	// void SetAugmentIndexInList(int32_t InAugmentIndexInList);                                                             // [0xaa5b214] Final|Native|Public|BlueprintCallable 
};

