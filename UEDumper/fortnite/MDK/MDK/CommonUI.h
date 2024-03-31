
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CommonInput
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: EnhancedInput
/// dependency: GameplayTags
/// dependency: InputCore
/// dependency: MediaAssets
/// dependency: SlateCore
/// dependency: UMG

/// Class /Script/CommonUI.CommonBoundActionButtonInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UCommonBoundActionButtonInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/CommonUI.AnalogSlider
/// Size: 0x0020 (0x0006C0 - 0x0006E0)
class UAnalogSlider : public USlider
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1760;

public:
	SMember(FMulticastInlineDelegate)                  OnAnalogCapture                                             OFFSET(getStruct<T>, {0x6C0, 16, 0, 0})
};

/// Class /Script/CommonUI.CommonActionHandlerInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UCommonActionHandlerInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/CommonUI.CommonActionWidget
/// Size: 0x02E8 (0x000178 - 0x000460)
class UCommonActionWidget : public UWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1120;

public:
	SMember(FMulticastInlineDelegate)                  OnInputMethodChanged                                        OFFSET(getStruct<T>, {0x178, 16, 0, 0})
	SMember(FSlateBrush)                               ProgressMaterialBrush                                       OFFSET(getStruct<T>, {0x190, 192, 0, 0})
	SMember(FName)                                     ProgressMaterialParam                                       OFFSET(getStruct<T>, {0x250, 4, 0, 0})
	SMember(FSlateBrush)                               IconRimBrush                                                OFFSET(getStruct<T>, {0x260, 192, 0, 0})
	CMember(TArray<FDataTableRowHandle>)               InputActions                                                OFFSET(get<T>, {0x320, 16, 0, 0})
	CMember(class UInputAction*)                       EnhancedInputAction                                         OFFSET(get<T>, {0x330, 8, 0, 0})
	CMember(class UMaterialInstanceDynamic*)           ProgressDynamicMaterial                                     OFFSET(get<T>, {0x340, 8, 0, 0})


	/// Functions
	// Function /Script/CommonUI.CommonActionWidget.SetInputActions
	// void SetInputActions(TArray<FDataTableRowHandle> NewInputActions);                                                       // [0x755fd7c] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonActionWidget.SetInputAction
	// void SetInputAction(FDataTableRowHandle InputActionRow);                                                                 // [0x3581d9c] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonActionWidget.SetIconRimBrush
	// void SetIconRimBrush(FSlateBrush InIconRimBrush);                                                                        // [0x37eac34] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonActionWidget.SetEnhancedInputAction
	// void SetEnhancedInputAction(class UInputAction* InInputAction);                                                          // [0x755f894] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonActionWidget.OnInputMethodChanged__DelegateSignature
	// void OnInputMethodChanged__DelegateSignature(bool bUsingGamepad);                                                        // [0x186becc] MulticastDelegate|Public|Delegate 
	// Function /Script/CommonUI.CommonActionWidget.IsHeldAction
	// bool IsHeldAction();                                                                                                     // [0x3224774] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonActionWidget.GetIcon
	// FSlateBrush GetIcon();                                                                                                   // [0x30f17b0] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonActionWidget.GetDisplayText
	// FText GetDisplayText();                                                                                                  // [0x2edbbe8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/CommonUI.CommonUserWidget
/// Size: 0x0028 (0x0002C0 - 0x0002E8)
class UCommonUserWidget : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 744;

public:
	DMember(bool)                                      bDisplayInActionBar                                         OFFSET(get<bool>, {0x2C0, 1, 0, 0})
	DMember(bool)                                      bConsumePointerInput                                        OFFSET(get<bool>, {0x2C1, 1, 0, 0})


	/// Functions
	// Function /Script/CommonUI.CommonUserWidget.UnregisterScrollRecipientExternal
	// void UnregisterScrollRecipientExternal(class UWidget* AnalogScrollRecipient);                                            // [0x7561c7c] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonUserWidget.SetConsumePointerInput
	// void SetConsumePointerInput(bool bInConsumePointerInput);                                                                // [0x755f46c] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonUserWidget.RegisterScrollRecipientExternal
	// void RegisterScrollRecipientExternal(class UWidget* AnalogScrollRecipient);                                              // [0x755e5bc] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/CommonUI.CommonActivatableWidget
/// Size: 0x0118 (0x0002E8 - 0x000400)
class UCommonActivatableWidget : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1024;

public:
	DMember(bool)                                      bIsBackHandler                                              OFFSET(get<bool>, {0x2E8, 1, 0, 0})
	DMember(bool)                                      bIsBackActionDisplayedInActionBar                           OFFSET(get<bool>, {0x2E9, 1, 0, 0})
	DMember(bool)                                      bAutoActivate                                               OFFSET(get<bool>, {0x2EA, 1, 0, 0})
	DMember(bool)                                      bSupportsActivationFocus                                    OFFSET(get<bool>, {0x2EB, 1, 0, 0})
	DMember(bool)                                      bIsModal                                                    OFFSET(get<bool>, {0x2EC, 1, 0, 0})
	DMember(bool)                                      bAutoRestoreFocus                                           OFFSET(get<bool>, {0x2ED, 1, 0, 0})
	DMember(bool)                                      bOverrideActionDomain                                       OFFSET(get<bool>, {0x2EE, 1, 0, 0})
	CMember(class UInputMappingContext*)               InputMapping                                                OFFSET(get<T>, {0x2F0, 8, 0, 0})
	DMember(int32_t)                                   InputMappingPriority                                        OFFSET(get<int32_t>, {0x2F8, 4, 0, 0})
	CMember(TWeakObjectPtr<UCommonInputActionDomain*>) ActionDomainOverride                                        OFFSET(get<T>, {0x300, 32, 0, 0})
	SMember(FMulticastInlineDelegate)                  BP_OnWidgetActivated                                        OFFSET(getStruct<T>, {0x320, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  BP_OnWidgetDeactivated                                      OFFSET(getStruct<T>, {0x330, 16, 0, 0})
	DMember(bool)                                      bIsActive                                                   OFFSET(get<bool>, {0x340, 1, 0, 0})
	CMember(TArray<TWeakObjectPtr<UCommonActivatableWidget*>>) VisibilityBoundWidgets                              OFFSET(get<T>, {0x348, 16, 0, 0})
	DMember(bool)                                      bSetVisibilityOnActivated                                   OFFSET(get<bool>, {0x3F8, 1, 0, 0})
	CMember(ESlateVisibility)                          ActivatedVisibility                                         OFFSET(get<T>, {0x3F9, 1, 0, 0})
	DMember(bool)                                      bSetVisibilityOnDeactivated                                 OFFSET(get<bool>, {0x3FA, 1, 0, 0})
	CMember(ESlateVisibility)                          DeactivatedVisibility                                       OFFSET(get<T>, {0x3FB, 1, 0, 0})


	/// Functions
	// Function /Script/CommonUI.CommonActivatableWidget.SetBindVisibilities
	// void SetBindVisibilities(ESlateVisibility OnActivatedVisibility, ESlateVisibility OnDeactivatedVisibility, bool bInAllActive); // [0x755ee60] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonActivatableWidget.RequestRefreshFocus
	// void RequestRefreshFocus();                                                                                              // [0x3d6f348] Final|Native|Protected|BlueprintCallable 
	// Function /Script/CommonUI.CommonActivatableWidget.IsActivated
	// bool IsActivated();                                                                                                      // [0x3732798] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonActivatableWidget.GetDesiredFocusTarget
	// class UWidget* GetDesiredFocusTarget();                                                                                  // [0x755c664] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonActivatableWidget.DeactivateWidget
	// void DeactivateWidget();                                                                                                 // [0x755bd9c] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonActivatableWidget.ClearFocusRestorationTarget
	// void ClearFocusRestorationTarget();                                                                                      // [0x755bd4c] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonActivatableWidget.BP_OnHandleBackAction
	// bool BP_OnHandleBackAction();                                                                                            // [0x186becc] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonActivatableWidget.BP_OnDeactivated
	// void BP_OnDeactivated();                                                                                                 // [0x186becc] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonActivatableWidget.BP_OnActivated
	// void BP_OnActivated();                                                                                                   // [0x186becc] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonActivatableWidget.BP_GetDesiredInputConfig
	// FUIInputConfig BP_GetDesiredInputConfig();                                                                               // [0x186becc] Event|Protected|BlueprintEvent|Const 
	// Function /Script/CommonUI.CommonActivatableWidget.BP_GetDesiredFocusTarget
	// class UWidget* BP_GetDesiredFocusTarget();                                                                               // [0x186becc] Event|Protected|BlueprintEvent|Const 
	// Function /Script/CommonUI.CommonActivatableWidget.BindVisibilityToActivation
	// void BindVisibilityToActivation(class UCommonActivatableWidget* ActivatableWidget);                                      // [0x755bb50] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonActivatableWidget.ActivateWidget
	// void ActivateWidget();                                                                                                   // [0x755b6ac] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/CommonUI.CommonAnimatedSwitcher
/// Size: 0x0080 (0x0001A8 - 0x000228)
class UCommonAnimatedSwitcher : public UWidgetSwitcher
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 552;

public:
	SMember(FMulticastInlineDelegate)                  OnActiveWidgetIndexChangedBP                                OFFSET(getStruct<T>, {0x1D8, 16, 0, 0})
	CMember(ECommonSwitcherTransition)                 TransitionType                                              OFFSET(get<T>, {0x1E8, 1, 0, 0})
	CMember(ETransitionCurve)                          TransitionCurveType                                         OFFSET(get<T>, {0x1E9, 1, 0, 0})
	DMember(float)                                     TransitionDuration                                          OFFSET(get<float>, {0x1EC, 4, 0, 0})


	/// Functions
	// Function /Script/CommonUI.CommonAnimatedSwitcher.SetDisableTransitionAnimation
	// void SetDisableTransitionAnimation(bool bDisableAnimation);                                                              // [0x755f7d4] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonAnimatedSwitcher.IsTransitionPlaying
	// bool IsTransitionPlaying();                                                                                              // [0x755dfa8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonAnimatedSwitcher.IsCurrentlySwitching
	// bool IsCurrentlySwitching();                                                                                             // [0x755de50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonAnimatedSwitcher.HasWidgets
	// bool HasWidgets();                                                                                                       // [0x379034c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonAnimatedSwitcher.ActivatePreviousWidget
	// void ActivatePreviousWidget(bool bCanWrap);                                                                              // [0x755b5d4] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonAnimatedSwitcher.ActivateNextWidget
	// void ActivateNextWidget(bool bCanWrap);                                                                                  // [0x755b510] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/CommonUI.CommonActivatableWidgetSwitcher
/// Size: 0x0010 (0x000228 - 0x000238)
class UCommonActivatableWidgetSwitcher : public UCommonAnimatedSwitcher
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
	DMember(bool)                                      bClearFocusRestorationTargetOfDeactivatedWidgets            OFFSET(get<bool>, {0x228, 1, 0, 0})
};

/// Class /Script/CommonUI.CommonBorderStyle
/// Size: 0x00C8 (0x000028 - 0x0000F0)
class UCommonBorderStyle : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	SMember(FSlateBrush)                               Background                                                  OFFSET(getStruct<T>, {0x30, 192, 0, 0})


	/// Functions
	// Function /Script/CommonUI.CommonBorderStyle.GetBackgroundBrush
	// void GetBackgroundBrush(FSlateBrush& Brush);                                                                             // [0x755c188] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/CommonUI.CommonBorder
/// Size: 0x0020 (0x000300 - 0x000320)
class UCommonBorder : public UBorder
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 800;

public:
	CMember(class UClass*)                             style                                                       OFFSET(get<T>, {0x300, 8, 0, 0})
	DMember(bool)                                      bReducePaddingBySafezone                                    OFFSET(get<bool>, {0x308, 1, 0, 0})
	SMember(FMargin)                                   MinimumPadding                                              OFFSET(getStruct<T>, {0x30C, 16, 0, 0})


	/// Functions
	// Function /Script/CommonUI.CommonBorder.SetStyle
	// void SetStyle(class UClass* InStyle);                                                                                    // [0x7561518] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/CommonUI.CommonButtonStyle
/// Size: 0x0708 (0x000028 - 0x000730)
class UCommonButtonStyle : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1840;

public:
	DMember(bool)                                      bSingleMaterial                                             OFFSET(get<bool>, {0x28, 1, 0, 0})
	SMember(FSlateBrush)                               SingleMaterialBrush                                         OFFSET(getStruct<T>, {0x30, 192, 0, 0})
	SMember(FSlateBrush)                               NormalBase                                                  OFFSET(getStruct<T>, {0xF0, 192, 0, 0})
	SMember(FSlateBrush)                               NormalHovered                                               OFFSET(getStruct<T>, {0x1B0, 192, 0, 0})
	SMember(FSlateBrush)                               NormalPressed                                               OFFSET(getStruct<T>, {0x270, 192, 0, 0})
	SMember(FSlateBrush)                               SelectedBase                                                OFFSET(getStruct<T>, {0x330, 192, 0, 0})
	SMember(FSlateBrush)                               SelectedHovered                                             OFFSET(getStruct<T>, {0x3F0, 192, 0, 0})
	SMember(FSlateBrush)                               SelectedPressed                                             OFFSET(getStruct<T>, {0x4B0, 192, 0, 0})
	SMember(FSlateBrush)                               Disabled                                                    OFFSET(getStruct<T>, {0x570, 192, 0, 0})
	SMember(FMargin)                                   ButtonPadding                                               OFFSET(getStruct<T>, {0x630, 16, 0, 0})
	SMember(FMargin)                                   CustomPadding                                               OFFSET(getStruct<T>, {0x640, 16, 0, 0})
	DMember(int32_t)                                   MinWidth                                                    OFFSET(get<int32_t>, {0x650, 4, 0, 0})
	DMember(int32_t)                                   MinHeight                                                   OFFSET(get<int32_t>, {0x654, 4, 0, 0})
	CMember(class UClass*)                             NormalTextStyle                                             OFFSET(get<T>, {0x658, 8, 0, 0})
	CMember(class UClass*)                             NormalHoveredTextStyle                                      OFFSET(get<T>, {0x660, 8, 0, 0})
	CMember(class UClass*)                             SelectedTextStyle                                           OFFSET(get<T>, {0x668, 8, 0, 0})
	CMember(class UClass*)                             SelectedHoveredTextStyle                                    OFFSET(get<T>, {0x670, 8, 0, 0})
	CMember(class UClass*)                             DisabledTextStyle                                           OFFSET(get<T>, {0x678, 8, 0, 0})
	SMember(FSlateSound)                               PressedSlateSound                                           OFFSET(getStruct<T>, {0x680, 24, 0, 0})
	SMember(FCommonButtonStyleOptionalSlateSound)      SelectedPressedSlateSound                                   OFFSET(getStruct<T>, {0x698, 32, 0, 0})
	SMember(FCommonButtonStyleOptionalSlateSound)      LockedPressedSlateSound                                     OFFSET(getStruct<T>, {0x6B8, 32, 0, 0})
	SMember(FSlateSound)                               HoveredSlateSound                                           OFFSET(getStruct<T>, {0x6D8, 24, 0, 0})
	SMember(FCommonButtonStyleOptionalSlateSound)      SelectedHoveredSlateSound                                   OFFSET(getStruct<T>, {0x6F0, 32, 0, 0})
	SMember(FCommonButtonStyleOptionalSlateSound)      LockedHoveredSlateSound                                     OFFSET(getStruct<T>, {0x710, 32, 0, 0})


	/// Functions
	// Function /Script/CommonUI.CommonButtonStyle.GetSelectedTextStyle
	// class UCommonTextStyle* GetSelectedTextStyle();                                                                          // [0x755d2ec] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonStyle.GetSelectedPressedBrush
	// void GetSelectedPressedBrush(FSlateBrush& Brush);                                                                        // [0x755d200] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonStyle.GetSelectedHoveredTextStyle
	// class UCommonTextStyle* GetSelectedHoveredTextStyle();                                                                   // [0x755d1c4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonStyle.GetSelectedHoveredBrush
	// void GetSelectedHoveredBrush(FSlateBrush& Brush);                                                                        // [0x755d11c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonStyle.GetSelectedBaseBrush
	// void GetSelectedBaseBrush(FSlateBrush& Brush);                                                                           // [0x755d038] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonStyle.GetNormalTextStyle
	// class UCommonTextStyle* GetNormalTextStyle();                                                                            // [0x755cfe8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonStyle.GetNormalPressedBrush
	// void GetNormalPressedBrush(FSlateBrush& Brush);                                                                          // [0x755cf40] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonStyle.GetNormalHoveredTextStyle
	// class UCommonTextStyle* GetNormalHoveredTextStyle();                                                                     // [0x755cf1c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonStyle.GetNormalHoveredBrush
	// void GetNormalHoveredBrush(FSlateBrush& Brush);                                                                          // [0x755ce74] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonStyle.GetNormalBaseBrush
	// void GetNormalBaseBrush(FSlateBrush& Brush);                                                                             // [0x755cdcc] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonStyle.GetMaterialBrush
	// void GetMaterialBrush(FSlateBrush& Brush);                                                                               // [0x755c188] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonStyle.GetDisabledTextStyle
	// class UCommonTextStyle* GetDisabledTextStyle();                                                                          // [0x755c730] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonStyle.GetDisabledBrush
	// void GetDisabledBrush(FSlateBrush& Brush);                                                                               // [0x755c688] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonStyle.GetCustomPadding
	// void GetCustomPadding(FMargin& OutCustomPadding);                                                                        // [0x755c5bc] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonStyle.GetButtonPadding
	// void GetButtonPadding(FMargin& OutButtonPadding);                                                                        // [0x755c2fc] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/CommonUI.CommonButtonInternalBase
/// Size: 0x0070 (0x0005D0 - 0x000640)
class UCommonButtonInternalBase : public UButton
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1600;

public:
	SMember(FMulticastInlineDelegate)                  OnDoubleClicked                                             OFFSET(getStruct<T>, {0x5D8, 16, 0, 0})
	DMember(int32_t)                                   MinWidth                                                    OFFSET(get<int32_t>, {0x608, 4, 0, 0})
	DMember(int32_t)                                   MinHeight                                                   OFFSET(get<int32_t>, {0x60C, 4, 0, 0})
	DMember(bool)                                      bButtonEnabled                                              OFFSET(get<bool>, {0x610, 1, 0, 0})
	DMember(bool)                                      bInteractionEnabled                                         OFFSET(get<bool>, {0x611, 1, 0, 0})
};

/// Class /Script/CommonUI.CommonButtonBase
/// Size: 0x11A8 (0x0002E8 - 0x001490)
class UCommonButtonBase : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5264;

public:
	SMember(FWidgetEventField)                         ClickEvent                                                  OFFSET(getStruct<T>, {0x2E8, 1, 0, 0})
	DMember(int32_t)                                   MinWidth                                                    OFFSET(get<int32_t>, {0x2EC, 4, 0, 0})
	DMember(int32_t)                                   MinHeight                                                   OFFSET(get<int32_t>, {0x2F0, 4, 0, 0})
	CMember(class UClass*)                             style                                                       OFFSET(get<T>, {0x2F8, 8, 0, 0})
	DMember(bool)                                      bHideInputAction                                            OFFSET(get<bool>, {0x300, 1, 0, 0})
	SMember(FSlateSound)                               PressedSlateSoundOverride                                   OFFSET(getStruct<T>, {0x308, 24, 0, 0})
	SMember(FSlateSound)                               HoveredSlateSoundOverride                                   OFFSET(getStruct<T>, {0x320, 24, 0, 0})
	SMember(FSlateSound)                               SelectedPressedSlateSoundOverride                           OFFSET(getStruct<T>, {0x338, 24, 0, 0})
	SMember(FSlateSound)                               SelectedHoveredSlateSoundOverride                           OFFSET(getStruct<T>, {0x350, 24, 0, 0})
	SMember(FSlateSound)                               LockedPressedSlateSoundOverride                             OFFSET(getStruct<T>, {0x368, 24, 0, 0})
	SMember(FSlateSound)                               LockedHoveredSlateSoundOverride                             OFFSET(getStruct<T>, {0x380, 24, 0, 0})
	DMember(bool)                                      bApplyAlphaOnDisable                                        OFFSET(get<bool>, {0x398, 1, 1, 0})
	DMember(bool)                                      bLocked                                                     OFFSET(get<bool>, {0x398, 1, 1, 1})
	DMember(bool)                                      bSelectable                                                 OFFSET(get<bool>, {0x398, 1, 1, 2})
	DMember(bool)                                      bShouldSelectUponReceivingFocus                             OFFSET(get<bool>, {0x398, 1, 1, 3})
	DMember(bool)                                      bInteractableWhenSelected                                   OFFSET(get<bool>, {0x398, 1, 1, 4})
	DMember(bool)                                      bToggleable                                                 OFFSET(get<bool>, {0x398, 1, 1, 5})
	DMember(bool)                                      bTriggerClickedAfterSelection                               OFFSET(get<bool>, {0x398, 1, 1, 6})
	DMember(bool)                                      bDisplayInputActionWhenNotInteractable                      OFFSET(get<bool>, {0x398, 1, 1, 7})
	DMember(bool)                                      bHideInputActionWithKeyboard                                OFFSET(get<bool>, {0x399, 1, 1, 0})
	DMember(bool)                                      bShouldUseFallbackDefaultInputAction                        OFFSET(get<bool>, {0x399, 1, 1, 1})
	DMember(bool)                                      bRequiresHold                                               OFFSET(get<bool>, {0x399, 1, 1, 2})
	CMember(class UClass*)                             HoldData                                                    OFFSET(get<T>, {0x3A0, 8, 0, 0})
	DMember(bool)                                      bSimulateHoverOnTouchInput                                  OFFSET(get<bool>, {0x3A8, 1, 0, 0})
	CMember(TEnumAsByte<EButtonClickMethod>)           ClickMethod                                                 OFFSET(get<T>, {0x3AA, 1, 0, 0})
	CMember(TEnumAsByte<EButtonTouchMethod>)           TouchMethod                                                 OFFSET(get<T>, {0x3AB, 1, 0, 0})
	CMember(TEnumAsByte<EButtonPressMethod>)           PressMethod                                                 OFFSET(get<T>, {0x3AC, 1, 0, 0})
	DMember(int32_t)                                   InputPriority                                               OFFSET(get<int32_t>, {0x3B0, 4, 0, 0})
	SMember(FDataTableRowHandle)                       TriggeringInputAction                                       OFFSET(getStruct<T>, {0x3B8, 16, 0, 0})
	CMember(class UInputAction*)                       TriggeringEnhancedInputAction                               OFFSET(get<T>, {0x3C8, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnSelectedChangedBase                                       OFFSET(getStruct<T>, {0x3E0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnButtonBaseClicked                                         OFFSET(getStruct<T>, {0x3F0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnButtonBaseDoubleClicked                                   OFFSET(getStruct<T>, {0x400, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnButtonBaseHovered                                         OFFSET(getStruct<T>, {0x410, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnButtonBaseUnhovered                                       OFFSET(getStruct<T>, {0x420, 16, 0, 0})
	DMember(bool)                                      bIsPersistentBinding                                        OFFSET(get<bool>, {0x468, 1, 0, 0})
	CMember(ECommonInputMode)                          InputModeOverride                                           OFFSET(get<T>, {0x469, 1, 0, 0})
	CMember(class UMaterialInstanceDynamic*)           SingleMaterialStyleMID                                      OFFSET(get<T>, {0x4A0, 8, 0, 0})
	SMember(FButtonStyle)                              NormalStyle                                                 OFFSET(getStruct<T>, {0x4B0, 944, 0, 0})
	SMember(FButtonStyle)                              SelectedStyle                                               OFFSET(getStruct<T>, {0x860, 944, 0, 0})
	SMember(FButtonStyle)                              DisabledStyle                                               OFFSET(getStruct<T>, {0xC10, 944, 0, 0})
	SMember(FButtonStyle)                              LockedStyle                                                 OFFSET(getStruct<T>, {0xFC0, 944, 0, 0})
	DMember(bool)                                      bStopDoubleClickPropagation                                 OFFSET(get<bool>, {0x1370, 1, 1, 0})
	CMember(class UCommonActionWidget*)                InputActionWidget                                           OFFSET(get<T>, {0x1488, 8, 0, 0})


	/// Functions
	// Function /Script/CommonUI.CommonButtonBase.UpdateHoldData
	// void UpdateHoldData(ECommonInputType CurrentInputType);                                                                  // [0x7561d3c] Native|Protected     
	// Function /Script/CommonUI.CommonButtonBase.StopDoubleClickPropagation
	// void StopDoubleClickPropagation();                                                                                       // [0x7561c64] Final|Native|Protected|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetTriggeringInputAction
	// void SetTriggeringInputAction(FDataTableRowHandle& InputActionRow);                                                      // [0x2af21c8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetTriggeringEnhancedInputAction
	// void SetTriggeringEnhancedInputAction(class UInputAction* InInputAction);                                                // [0x7561abc] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetTriggeredInputAction
	// void SetTriggeredInputAction(FDataTableRowHandle& InputActionRow);                                                       // [0x2af2154] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetTouchMethod
	// void SetTouchMethod(TEnumAsByte<EButtonTouchMethod> InTouchMethod);                                                      // [0x756192c] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetStyle
	// void SetStyle(class UClass* InStyle);                                                                                    // [0x2e04038] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetShouldUseFallbackDefaultInputAction
	// void SetShouldUseFallbackDefaultInputAction(bool bInShouldUseFallbackDefaultInputAction);                                // [0x7561454] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetShouldSelectUponReceivingFocus
	// void SetShouldSelectUponReceivingFocus(bool bInShouldSelectUponReceivingFocus);                                          // [0x7561394] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetSelectedPressedSoundOverride
	// void SetSelectedPressedSoundOverride(class USoundBase* sound);                                                           // [0x75611e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetSelectedInternal
	// void SetSelectedInternal(bool bInSelected, bool bAllowSound, bool bBroadcast);                                           // [0x7561010] Final|Native|Protected|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetSelectedHoveredSoundOverride
	// void SetSelectedHoveredSoundOverride(class USoundBase* sound);                                                           // [0x7560f20] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetPressMethod
	// void SetPressMethod(TEnumAsByte<EButtonPressMethod> InPressMethod);                                                      // [0x7560cb4] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetPressedSoundOverride
	// void SetPressedSoundOverride(class USoundBase* sound);                                                                   // [0x7560d94] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetMinDimensions
	// void SetMinDimensions(int32_t InMinWidth, int32_t InMinHeight);                                                          // [0x2fd6bf8] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetLockedPressedSoundOverride
	// void SetLockedPressedSoundOverride(class USoundBase* sound);                                                             // [0x7560818] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetLockedHoveredSoundOverride
	// void SetLockedHoveredSoundOverride(class USoundBase* sound);                                                             // [0x7560728] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetIsToggleable
	// void SetIsToggleable(bool bInIsToggleable);                                                                              // [0x75602f8] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetIsSelected
	// void SetIsSelected(bool InSelected, bool bGiveClickFeedback);                                                            // [0x75601a8] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetIsSelectable
	// void SetIsSelectable(bool bInIsSelectable);                                                                              // [0x75600e4] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetIsLocked
	// void SetIsLocked(bool bInIsLocked);                                                                                      // [0x7560020] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetIsInteractionEnabled
	// void SetIsInteractionEnabled(bool bInIsInteractionEnabled);                                                              // [0x2b44290] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetIsInteractableWhenSelected
	// void SetIsInteractableWhenSelected(bool bInInteractableWhenSelected);                                                    // [0x755fe98] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetIsFocusable
	// void SetIsFocusable(bool bInIsFocusable);                                                                                // [0x3720cdc] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetInputActionProgressMaterial
	// void SetInputActionProgressMaterial(FSlateBrush& InProgressMaterialBrush, FName& InProgressMaterialParam);               // [0x755fc68] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetHoveredSoundOverride
	// void SetHoveredSoundOverride(class USoundBase* sound);                                                                   // [0x755fba8] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetHideInputAction
	// void SetHideInputAction(bool bInHideInputAction);                                                                        // [0x755fa20] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetClickMethod
	// void SetClickMethod(TEnumAsByte<EButtonClickMethod> InClickMethod);                                                      // [0x755f38c] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.OnTriggeringInputActionChanged
	// void OnTriggeringInputActionChanged(FDataTableRowHandle& NewTriggeredAction);                                            // [0x186becc] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/CommonUI.CommonButtonBase.OnTriggeringEnhancedInputActionChanged
	// void OnTriggeringEnhancedInputActionChanged(class UInputAction* InInputAction);                                          // [0x186becc] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonButtonBase.OnTriggeredInputActionChanged
	// void OnTriggeredInputActionChanged(FDataTableRowHandle& NewTriggeredAction);                                             // [0x186becc] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/CommonUI.CommonButtonBase.OnInputMethodChanged
	// void OnInputMethodChanged(ECommonInputType CurrentInputType);                                                            // [0x755e4d0] Native|Protected     
	// Function /Script/CommonUI.CommonButtonBase.OnCurrentTextStyleChanged
	// void OnCurrentTextStyleChanged();                                                                                        // [0x186becc] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonButtonBase.OnActionProgress
	// void OnActionProgress(float HeldPercent);                                                                                // [0x186becc] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonButtonBase.OnActionComplete
	// void OnActionComplete();                                                                                                 // [0x186becc] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonButtonBase.NativeOnHoldProgressRollback
	// bool NativeOnHoldProgressRollback(float DeltaTime);                                                                      // [0x755e184] Native|Protected     
	// Function /Script/CommonUI.CommonButtonBase.NativeOnHoldProgress
	// bool NativeOnHoldProgress(float DeltaTime);                                                                              // [0x755e0ac] Native|Protected     
	// Function /Script/CommonUI.CommonButtonBase.NativeOnActionProgress
	// void NativeOnActionProgress(float HeldPercent);                                                                          // [0x755dfe4] Native|Protected     
	// Function /Script/CommonUI.CommonButtonBase.NativeOnActionComplete
	// void NativeOnActionComplete();                                                                                           // [0x755dfcc] Native|Protected     
	// Function /Script/CommonUI.CommonButtonBase.IsPressed
	// bool IsPressed();                                                                                                        // [0x755df50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonBase.IsInteractionEnabled
	// bool IsInteractionEnabled();                                                                                             // [0x755de80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonBase.HoldReset
	// void HoldReset();                                                                                                        // [0x68b3bdc] Native|Protected     
	// Function /Script/CommonUI.CommonButtonBase.HandleTriggeringActionCommited
	// void HandleTriggeringActionCommited(bool& bPassThrough);                                                                 // [0x755daa4] Native|Protected|HasOutParms 
	// Function /Script/CommonUI.CommonButtonBase.HandleFocusReceived
	// void HandleFocusReceived();                                                                                              // [0x755d858] Native|Protected     
	// Function /Script/CommonUI.CommonButtonBase.HandleFocusLost
	// void HandleFocusLost();                                                                                                  // [0x2101f18] Native|Protected     
	// Function /Script/CommonUI.CommonButtonBase.HandleButtonReleased
	// void HandleButtonReleased();                                                                                             // [0x755d844] Final|Native|Protected 
	// Function /Script/CommonUI.CommonButtonBase.HandleButtonPressed
	// void HandleButtonPressed();                                                                                              // [0x755d830] Final|Native|Protected 
	// Function /Script/CommonUI.CommonButtonBase.HandleButtonClicked
	// void HandleButtonClicked();                                                                                              // [0x755d6e0] Final|Native|Protected 
	// Function /Script/CommonUI.CommonButtonBase.GetStyle
	// class UCommonButtonStyle* GetStyle();                                                                                    // [0x755d4ec] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonBase.GetSingleMaterialStyleMID
	// class UMaterialInstanceDynamic* GetSingleMaterialStyleMID();                                                             // [0x3d91a64] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonBase.GetShouldSelectUponReceivingFocus
	// bool GetShouldSelectUponReceivingFocus();                                                                                // [0x755d428] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonBase.GetSelected
	// bool GetSelected();                                                                                                      // [0x35482e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonBase.GetLocked
	// bool GetLocked();                                                                                                        // [0x755cccc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonBase.GetIsFocusable
	// bool GetIsFocusable();                                                                                                   // [0x755cc74] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonBase.GetInputAction
	// bool GetInputAction(FDataTableRowHandle& InputActionRow);                                                                // [0x755c9ac] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonBase.GetEnhancedInputAction
	// class UInputAction* GetEnhancedInputAction();                                                                            // [0x755c754] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonBase.GetCurrentTextStyleClass
	// class UClass* GetCurrentTextStyleClass();                                                                                // [0x18545d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonBase.GetCurrentTextStyle
	// class UCommonTextStyle* GetCurrentTextStyle();                                                                           // [0x755c598] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonBase.GetCurrentCustomPadding
	// void GetCurrentCustomPadding(FMargin& OutCustomPadding);                                                                 // [0x755c4f8] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonBase.GetCurrentButtonPadding
	// void GetCurrentButtonPadding(FMargin& OutButtonPadding);                                                                 // [0x755c458] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonBase.GetConvertInputActionToHold
	// bool GetConvertInputActionToHold();                                                                                      // [0x755c430] Native|Protected     
	// Function /Script/CommonUI.CommonButtonBase.DisableButtonWithReason
	// void DisableButtonWithReason(FText& DisabledReason);                                                                     // [0x755be88] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.ClearSelection
	// void ClearSelection();                                                                                                   // [0x755bd60] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.BP_OnUnhovered
	// void BP_OnUnhovered();                                                                                                   // [0x186becc] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonButtonBase.BP_OnSelected
	// void BP_OnSelected();                                                                                                    // [0x186becc] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonButtonBase.BP_OnReleased
	// void BP_OnReleased();                                                                                                    // [0x186becc] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonButtonBase.BP_OnPressed
	// void BP_OnPressed();                                                                                                     // [0x186becc] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonButtonBase.BP_OnLockedChanged
	// void BP_OnLockedChanged(bool bIsLocked);                                                                                 // [0x186becc] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonButtonBase.BP_OnLockDoubleClicked
	// void BP_OnLockDoubleClicked();                                                                                           // [0x186becc] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonButtonBase.BP_OnLockClicked
	// void BP_OnLockClicked();                                                                                                 // [0x186becc] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonButtonBase.BP_OnInputMethodChanged
	// void BP_OnInputMethodChanged(ECommonInputType CurrentInputType);                                                         // [0x186becc] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonButtonBase.BP_OnInputActionTriggered
	// void BP_OnInputActionTriggered();                                                                                        // [0x186becc] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonButtonBase.BP_OnHovered
	// void BP_OnHovered();                                                                                                     // [0x186becc] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonButtonBase.BP_OnFocusReceived
	// void BP_OnFocusReceived();                                                                                               // [0x186becc] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonButtonBase.BP_OnFocusLost
	// void BP_OnFocusLost();                                                                                                   // [0x186becc] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonButtonBase.BP_OnEnabled
	// void BP_OnEnabled();                                                                                                     // [0x186becc] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonButtonBase.BP_OnDoubleClicked
	// void BP_OnDoubleClicked();                                                                                               // [0x186becc] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonButtonBase.BP_OnDisabled
	// void BP_OnDisabled();                                                                                                    // [0x186becc] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonButtonBase.BP_OnDeselected
	// void BP_OnDeselected();                                                                                                  // [0x186becc] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonButtonBase.BP_OnClicked
	// void BP_OnClicked();                                                                                                     // [0x186becc] Event|Protected|BlueprintEvent 
};

/// Class /Script/CommonUI.WidgetLockedStateRegistration
/// Size: 0x0000 (0x000028 - 0x000028)
class UWidgetLockedStateRegistration : public UWidgetBinaryStateRegistration
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/CommonUI.CommonCustomNavigation
/// Size: 0x0010 (0x000300 - 0x000310)
class UCommonCustomNavigation : public UBorder
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 784;

public:
	SMember(FDelegateProperty)                         OnNavigationEvent                                           OFFSET(getStruct<T>, {0x300, 12, 0, 0})


	/// Functions
	// Function /Script/CommonUI.CommonCustomNavigation.OnCustomNavigationEvent__DelegateSignature
	// bool OnCustomNavigationEvent__DelegateSignature(EUINavigation NavigationType);                                           // [0x186becc] Public|Delegate      
};

/// Class /Script/CommonUI.CommonTextBlock
/// Size: 0x0030 (0x000350 - 0x000380)
class UCommonTextBlock : public UTextBlock
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 896;

public:
	DMember(float)                                     MobileFontSizeMultiplier                                    OFFSET(get<float>, {0x348, 4, 0, 0})
	CMember(class UClass*)                             style                                                       OFFSET(get<T>, {0x350, 8, 0, 0})
	CMember(class UClass*)                             ScrollStyle                                                 OFFSET(get<T>, {0x358, 8, 0, 0})
	DMember(bool)                                      bIsScrollingEnabled                                         OFFSET(get<bool>, {0x360, 1, 0, 0})
	DMember(bool)                                      bDisplayAllCaps                                             OFFSET(get<bool>, {0x361, 1, 0, 0})
	DMember(bool)                                      bAutoCollapseWithEmptyText                                  OFFSET(get<bool>, {0x362, 1, 0, 0})


	/// Functions
	// Function /Script/CommonUI.CommonTextBlock.SetWrapTextWidth
	// void SetWrapTextWidth(int32_t InWrapTextAt);                                                                             // [0x37021dc] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonTextBlock.SetTextCase
	// void SetTextCase(bool bUseAllCaps);                                                                                      // [0x3091500] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonTextBlock.SetStyle
	// void SetStyle(class UClass* InStyle);                                                                                    // [0x1854624] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonTextBlock.SetScrollingEnabled
	// void SetScrollingEnabled(bool bInIsScrollingEnabled);                                                                    // [0x384370c] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonTextBlock.SetMobileFontSizeMultiplier
	// void SetMobileFontSizeMultiplier(float InMobileFontSizeMultiplier);                                                      // [0x3024650] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonTextBlock.SetMargin
	// void SetMargin(FMargin& InMargin);                                                                                       // [0x7560908] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CommonUI.CommonTextBlock.SetLineHeightPercentage
	// void SetLineHeightPercentage(float InLineHeightPercentage);                                                              // [0x37927a8] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonTextBlock.SetApplyLineHeightToBottomLine
	// void SetApplyLineHeightToBottomLine(bool InApplyLineHeightToBottomLine);                                                 // [0x755ed9c] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonTextBlock.ResetScrollState
	// void ResetScrollState();                                                                                                 // [0x755e924] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonTextBlock.GetMobileFontSizeMultiplier
	// float GetMobileFontSizeMultiplier();                                                                                     // [0x755cd94] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonTextBlock.GetMargin
	// FMargin GetMargin();                                                                                                     // [0x755cce8] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/CommonUI.CommonDateTimeTextBlock
/// Size: 0x0070 (0x000380 - 0x0003F0)
class UCommonDateTimeTextBlock : public UCommonTextBlock
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1008;

public:
	SMember(FText)                                     CustomTimespanFormat                                        OFFSET(getStruct<T>, {0x378, 24, 0, 0})
	DMember(bool)                                      bCustomTimespanLeadingZeros                                 OFFSET(get<bool>, {0x390, 1, 0, 0})


	/// Functions
	// Function /Script/CommonUI.CommonDateTimeTextBlock.SetTimespanValue
	// void SetTimespanValue(FTimespan InTimespan);                                                                             // [0x756186c] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/CommonUI.CommonDateTimeTextBlock.SetDateTimeValue
	// void SetDateTimeValue(FDateTime InDateTime, bool bShowAsCountdown, float InRefreshDelay);                                // [0x755f608] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/CommonUI.CommonDateTimeTextBlock.SetCountDownCompletionText
	// void SetCountDownCompletionText(FText InCompletionText);                                                                 // [0x755f52c] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonDateTimeTextBlock.GetDateTime
	// FDateTime GetDateTime();                                                                                                 // [0x755c64c] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/CommonUI.CommonGameViewportClient
/// Size: 0x0040 (0x000398 - 0x0003D8)
class UCommonGameViewportClient : public UGameViewportClient
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 984;

public:
};

/// Class /Script/CommonUI.CommonHardwareVisibilityBorder
/// Size: 0x0050 (0x000320 - 0x000370)
class UCommonHardwareVisibilityBorder : public UCommonBorder
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 880;

public:
	SMember(FGameplayTagQuery)                         VisibilityQuery                                             OFFSET(getStruct<T>, {0x320, 72, 0, 0})
	CMember(ESlateVisibility)                          VisibleType                                                 OFFSET(get<T>, {0x368, 1, 0, 0})
	CMember(ESlateVisibility)                          HiddenType                                                  OFFSET(get<T>, {0x369, 1, 0, 0})
};

/// Class /Script/CommonUI.CommonHierarchicalScrollBox
/// Size: 0x0000 (0x000C20 - 0x000C20)
class UCommonHierarchicalScrollBox : public UScrollBox
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3104;

public:
};

/// Class /Script/CommonUI.CommonLazyImage
/// Size: 0x0100 (0x0002B0 - 0x0003B0)
class UCommonLazyImage : public UImage
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 944;

public:
	SMember(FSlateBrush)                               LoadingBackgroundBrush                                      OFFSET(getStruct<T>, {0x2B0, 192, 0, 0})
	SMember(FName)                                     MaterialTextureParamName                                    OFFSET(getStruct<T>, {0x370, 4, 0, 0})
	SMember(FMulticastInlineDelegate)                  BP_OnLoadingStateChanged                                    OFFSET(getStruct<T>, {0x378, 16, 0, 0})


	/// Functions
	// Function /Script/CommonUI.CommonLazyImage.SetMaterialTextureParamName
	// void SetMaterialTextureParamName(FName TextureParamName);                                                                // [0x7560998] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonLazyImage.SetBrushFromLazyTexture
	// void SetBrushFromLazyTexture(TWeakObjectPtr<UTexture2D*>& LazyTexture, bool bMatchSize);                                 // [0x755f1f4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CommonUI.CommonLazyImage.SetBrushFromLazyMaterial
	// void SetBrushFromLazyMaterial(TWeakObjectPtr<UMaterialInterface*>& LazyMaterial);                                        // [0x755f154] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CommonUI.CommonLazyImage.SetBrushFromLazyDisplayAsset
	// void SetBrushFromLazyDisplayAsset(TWeakObjectPtr<UObject*>& LazyObject, bool bMatchTextureSize);                         // [0x755f028] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CommonUI.CommonLazyImage.IsLoading
	// bool IsLoading();                                                                                                        // [0x755dec0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/CommonUI.CommonLazyWidget
/// Size: 0x0148 (0x000178 - 0x0002C0)
class UCommonLazyWidget : public UWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 704;

public:
	SMember(FSlateBrush)                               LoadingBackgroundBrush                                      OFFSET(getStruct<T>, {0x180, 192, 0, 0})
	CMember(class UUserWidget*)                        Content                                                     OFFSET(get<T>, {0x240, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  BP_OnLoadingStateChanged                                    OFFSET(getStruct<T>, {0x270, 16, 0, 0})


	/// Functions
	// Function /Script/CommonUI.CommonLazyWidget.SetLazyContent
	// void SetLazyContent(TWeakObjectPtr<UClass*> SoftWidget);                                                                 // [0x75603bc] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonLazyWidget.IsLoading
	// bool IsLoading();                                                                                                        // [0x755def0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonLazyWidget.GetContent
	// class UUserWidget* GetContent();                                                                                         // [0x755c418] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/CommonUI.CommonListView
/// Size: 0x0000 (0x000BD0 - 0x000BD0)
class UCommonListView : public UListView
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3024;

public:


	/// Functions
	// Function /Script/CommonUI.CommonListView.SetEntrySpacing
	// void SetEntrySpacing(float InEntrySpacing);                                                                              // [0x755f954] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/CommonUI.LoadGuardSlot
/// Size: 0x0028 (0x000038 - 0x000060)
class ULoadGuardSlot : public UPanelSlot
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FMargin)                                   Padding                                                     OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	CMember(TEnumAsByte<EHorizontalAlignment>)         HorizontalAlignment                                         OFFSET(get<T>, {0x48, 1, 0, 0})
	CMember(TEnumAsByte<EVerticalAlignment>)           VerticalAlignment                                           OFFSET(get<T>, {0x49, 1, 0, 0})


	/// Functions
	// Function /Script/CommonUI.LoadGuardSlot.SetVerticalAlignment
	// void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);                                          // [0x7561b7c] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.LoadGuardSlot.SetPadding
	// void SetPadding(FMargin InPadding);                                                                                      // [0x7560be4] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.LoadGuardSlot.SetHorizontalAlignment
	// void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);                                    // [0x755fae8] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/CommonUI.CommonLoadGuard
/// Size: 0x0150 (0x000190 - 0x0002E0)
class UCommonLoadGuard : public UContentWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 736;

public:
	SMember(FSlateBrush)                               LoadingBackgroundBrush                                      OFFSET(getStruct<T>, {0x190, 192, 0, 0})
	CMember(TEnumAsByte<EHorizontalAlignment>)         ThrobberAlignment                                           OFFSET(get<T>, {0x250, 1, 0, 0})
	SMember(FMargin)                                   ThrobberPadding                                             OFFSET(getStruct<T>, {0x254, 16, 0, 0})
	SMember(FText)                                     LoadingText                                                 OFFSET(getStruct<T>, {0x268, 24, 0, 0})
	CMember(class UClass*)                             TextStyle                                                   OFFSET(get<T>, {0x280, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  BP_OnLoadingStateChanged                                    OFFSET(getStruct<T>, {0x288, 16, 0, 0})
	SMember(FSoftObjectPath)                           SpinnerMaterialPath                                         OFFSET(getStruct<T>, {0x298, 24, 0, 0})


	/// Functions
	// Function /Script/CommonUI.CommonLoadGuard.SetLoadingText
	// void SetLoadingText(FText& InLoadingText);                                                                               // [0x7560678] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CommonUI.CommonLoadGuard.SetIsLoading
	// void SetIsLoading(bool bInIsLoading);                                                                                    // [0x755ff5c] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonLoadGuard.OnAssetLoaded__DelegateSignature
	// void OnAssetLoaded__DelegateSignature(class UObject* Object);                                                            // [0x186becc] Public|Delegate      
	// Function /Script/CommonUI.CommonLoadGuard.IsLoading
	// bool IsLoading();                                                                                                        // [0x755df20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonLoadGuard.BP_GuardAndLoadAsset
	// void BP_GuardAndLoadAsset(TWeakObjectPtr<UObject*>& InLazyAsset, FDelegateProperty& OnAssetLoaded);                      // [0x755b978] Final|Native|Private|HasOutParms|BlueprintCallable 
};

/// Class /Script/CommonUI.CommonNumericTextBlock
/// Size: 0x00A0 (0x000380 - 0x000420)
class UCommonNumericTextBlock : public UCommonTextBlock
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1056;

public:
	SMember(FMulticastInlineDelegate)                  OnInterpolationStartedEvent                                 OFFSET(getStruct<T>, {0x378, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnInterpolationUpdatedEvent                                 OFFSET(getStruct<T>, {0x388, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnOutroEvent                                                OFFSET(getStruct<T>, {0x398, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnInterpolationEndedEvent                                   OFFSET(getStruct<T>, {0x3A8, 16, 0, 0})
	DMember(float)                                     CurrentNumericValue                                         OFFSET(get<float>, {0x3B8, 4, 0, 0})
	CMember(ECommonNumericType)                        NumericType                                                 OFFSET(get<T>, {0x3BC, 1, 0, 0})
	SMember(FCommonNumberFormattingOptions)            FormattingSpecification                                     OFFSET(getStruct<T>, {0x3C0, 20, 0, 0})
	DMember(float)                                     EaseOutInterpolationExponent                                OFFSET(get<float>, {0x3D4, 4, 0, 0})
	DMember(float)                                     InterpolationUpdateInterval                                 OFFSET(get<float>, {0x3D8, 4, 0, 0})
	DMember(float)                                     PostInterpolationShrinkDuration                             OFFSET(get<float>, {0x3DC, 4, 0, 0})
	DMember(bool)                                      PerformSizeInterpolation                                    OFFSET(get<bool>, {0x3E0, 1, 0, 0})
	DMember(bool)                                      IsPercentage                                                OFFSET(get<bool>, {0x3E1, 1, 0, 0})


	/// Functions
	// Function /Script/CommonUI.CommonNumericTextBlock.SetNumericType
	// void SetNumericType(ECommonNumericType InNumericType);                                                                   // [0x7560b1c] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonNumericTextBlock.SetCurrentValue
	// void SetCurrentValue(float NewValue);                                                                                    // [0x2daf4f4] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonNumericTextBlock.OnOutro__DelegateSignature
	// void OnOutro__DelegateSignature(class UCommonNumericTextBlock* NumericTextBlock);                                        // [0x186becc] MulticastDelegate|Public|Delegate 
	// Function /Script/CommonUI.CommonNumericTextBlock.OnInterpolationUpdated__DelegateSignature
	// void OnInterpolationUpdated__DelegateSignature(class UCommonNumericTextBlock* NumericTextBlock, float LastValue, float NewValue); // [0x186becc] MulticastDelegate|Public|Delegate 
	// Function /Script/CommonUI.CommonNumericTextBlock.OnInterpolationStarted__DelegateSignature
	// void OnInterpolationStarted__DelegateSignature(class UCommonNumericTextBlock* NumericTextBlock);                         // [0x186becc] MulticastDelegate|Public|Delegate 
	// Function /Script/CommonUI.CommonNumericTextBlock.OnInterpolationEnded__DelegateSignature
	// void OnInterpolationEnded__DelegateSignature(class UCommonNumericTextBlock* NumericTextBlock, bool HadCompleted);        // [0x186becc] MulticastDelegate|Public|Delegate 
	// Function /Script/CommonUI.CommonNumericTextBlock.IsInterpolatingNumericValue
	// bool IsInterpolatingNumericValue();                                                                                      // [0x755dea4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonNumericTextBlock.InterpolateToValue
	// void InterpolateToValue(float TargetValue, float MaximumInterpolationDuration, float MinimumChangeRate, float OutroOffset); // [0x755dc14] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonNumericTextBlock.GetTargetValue
	// float GetTargetValue();                                                                                                  // [0x755d5d8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/CommonUI.CommonPoolableWidgetInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UCommonPoolableWidgetInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/CommonUI.CommonPoolableWidgetInterface.OnReleaseToPool
	// void OnReleaseToPool();                                                                                                  // [0x755e594] Native|Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonPoolableWidgetInterface.OnAcquireFromPool
	// void OnAcquireFromPool();                                                                                                // [0x755e270] Native|Event|Protected|BlueprintEvent 
};

/// Class /Script/CommonUI.CommonRichTextBlock
/// Size: 0x0040 (0x000840 - 0x000880)
class UCommonRichTextBlock : public URichTextBlock
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2176;

public:
	CMember(ERichTextInlineIconDisplayMode)            InlineIconDisplayMode                                       OFFSET(get<T>, {0x840, 1, 0, 0})
	DMember(bool)                                      bTintInlineIcon                                             OFFSET(get<bool>, {0x841, 1, 0, 0})
	CMember(class UClass*)                             DefaultTextStyleOverrideClass                               OFFSET(get<T>, {0x848, 8, 0, 0})
	DMember(float)                                     MobileTextBlockScale                                        OFFSET(get<float>, {0x850, 4, 0, 0})
	CMember(class UClass*)                             ScrollStyle                                                 OFFSET(get<T>, {0x858, 8, 0, 0})
	DMember(bool)                                      bIsScrollingEnabled                                         OFFSET(get<bool>, {0x860, 1, 0, 0})
	DMember(bool)                                      bDisplayAllCaps                                             OFFSET(get<bool>, {0x861, 1, 0, 0})
	DMember(bool)                                      bAutoCollapseWithEmptyText                                  OFFSET(get<bool>, {0x862, 1, 0, 0})


	/// Functions
	// Function /Script/CommonUI.CommonRichTextBlock.SetScrollingEnabled
	// void SetScrollingEnabled(bool bInIsScrollingEnabled);                                                                    // [0x7560e54] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/CommonUI.CommonRotator
/// Size: 0x0070 (0x001490 - 0x001500)
class UCommonRotator : public UCommonButtonBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5376;

public:
	SMember(FMulticastInlineDelegate)                  OnRotatedWithDirection                                      OFFSET(getStruct<T>, {0x14A0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnRotated                                                   OFFSET(getStruct<T>, {0x14B0, 16, 0, 0})
	CMember(class UCommonTextBlock*)                   MyText                                                      OFFSET(get<T>, {0x14D8, 8, 0, 0})


	/// Functions
	// Function /Script/CommonUI.CommonRotator.ShiftTextRight
	// void ShiftTextRight();                                                                                                   // [0x7561c50] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonRotator.ShiftTextLeft
	// void ShiftTextLeft();                                                                                                    // [0x7561c3c] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonRotator.SetSelectedItem
	// void SetSelectedItem(int32_t InValue);                                                                                   // [0x3118228] Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonRotator.PopulateTextLabels
	// void PopulateTextLabels(TArray<FText> Labels);                                                                           // [0x27d5414] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonRotator.GetSelectedText
	// FText GetSelectedText();                                                                                                 // [0x755d2a8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonRotator.GetSelectedIndex
	// int32_t GetSelectedIndex();                                                                                              // [0x755d1e8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonRotator.BP_OnOptionsPopulated
	// void BP_OnOptionsPopulated(int32_t Count);                                                                               // [0x186becc] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonRotator.BP_OnOptionSelected
	// void BP_OnOptionSelected(int32_t Index);                                                                                 // [0x186becc] Event|Protected|BlueprintEvent 
};

/// Class /Script/CommonUI.CommonTabListWidgetBase
/// Size: 0x0178 (0x0002E8 - 0x000460)
class UCommonTabListWidgetBase : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1120;

public:
	SMember(FMulticastInlineDelegate)                  OnTabSelected                                               OFFSET(getStruct<T>, {0x2E8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnTabButtonCreation                                         OFFSET(getStruct<T>, {0x2F8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnTabButtonRemoval                                          OFFSET(getStruct<T>, {0x308, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnTabListRebuilt                                            OFFSET(getStruct<T>, {0x318, 16, 0, 0})
	SMember(FDataTableRowHandle)                       NextTabInputActionData                                      OFFSET(getStruct<T>, {0x328, 16, 0, 0})
	SMember(FDataTableRowHandle)                       PreviousTabInputActionData                                  OFFSET(getStruct<T>, {0x338, 16, 0, 0})
	CMember(class UInputAction*)                       NextTabEnhancedInputAction                                  OFFSET(get<T>, {0x348, 8, 0, 0})
	CMember(class UInputAction*)                       PreviousTabEnhancedInputAction                              OFFSET(get<T>, {0x350, 8, 0, 0})
	DMember(bool)                                      bAutoListenForInput                                         OFFSET(get<bool>, {0x358, 1, 0, 0})
	DMember(bool)                                      bDeferRebuildingTabList                                     OFFSET(get<bool>, {0x359, 1, 0, 0})
	CMember(TWeakObjectPtr<UCommonAnimatedSwitcher*>)  LinkedSwitcher                                              OFFSET(get<T>, {0x35C, 8, 0, 0})
	CMember(class UCommonButtonGroupBase*)             TabButtonGroup                                              OFFSET(get<T>, {0x368, 8, 0, 0})
	CMember(TMap<FName, FCommonRegisteredTabInfo>)     RegisteredTabsByID                                          OFFSET(get<T>, {0x378, 80, 0, 0})
	SMember(FUserWidgetPool)                           TabButtonWidgetPool                                         OFFSET(getStruct<T>, {0x3C8, 136, 0, 0})


	/// Functions
	// Function /Script/CommonUI.CommonTabListWidgetBase.SetTabVisibility
	// void SetTabVisibility(FName TabNameID, ESlateVisibility NewVisibility);                                                  // [0x7561730] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonTabListWidgetBase.SetTabInteractionEnabled
	// void SetTabInteractionEnabled(FName TabNameID, bool bEnable);                                                            // [0x75615f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonTabListWidgetBase.SetTabEnabled
	// void SetTabEnabled(FName TabNameID, bool bEnable);                                                                       // [0x2b4387c] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonTabListWidgetBase.SetListeningForInput
	// void SetListeningForInput(bool bShouldListen);                                                                           // [0x75605b0] Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonTabListWidgetBase.SetLinkedSwitcher
	// void SetLinkedSwitcher(class UCommonAnimatedSwitcher* CommonSwitcher);                                                   // [0x2e32904] Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonTabListWidgetBase.SelectTabByID
	// bool SelectTabByID(FName TabNameID, bool bSuppressClickFeedback);                                                        // [0x39eb960] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonTabListWidgetBase.RemoveTab
	// bool RemoveTab(FName TabNameID);                                                                                         // [0x755e67c] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonTabListWidgetBase.RemoveAllTabs
	// void RemoveAllTabs();                                                                                                    // [0x17e86ec] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonTabListWidgetBase.RegisterTab
	// bool RegisterTab(FName TabNameID, class UClass* ButtonWidgetType, class UWidget* ContentWidget, int32_t TabIndex);       // [0x35ac984] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonTabListWidgetBase.OnTabSelected__DelegateSignature
	// void OnTabSelected__DelegateSignature(FName TabID);                                                                      // [0x186becc] MulticastDelegate|Public|Delegate 
	// Function /Script/CommonUI.CommonTabListWidgetBase.OnTabListRebuilt__DelegateSignature
	// void OnTabListRebuilt__DelegateSignature();                                                                              // [0x186becc] MulticastDelegate|Public|Delegate 
	// Function /Script/CommonUI.CommonTabListWidgetBase.OnTabButtonRemoval__DelegateSignature
	// void OnTabButtonRemoval__DelegateSignature(FName TabID, class UCommonButtonBase* TabButton);                             // [0x186becc] MulticastDelegate|Public|Delegate 
	// Function /Script/CommonUI.CommonTabListWidgetBase.OnTabButtonCreation__DelegateSignature
	// void OnTabButtonCreation__DelegateSignature(FName TabID, class UCommonButtonBase* TabButton);                            // [0x186becc] MulticastDelegate|Public|Delegate 
	// Function /Script/CommonUI.CommonTabListWidgetBase.HandleTabRemoval
	// void HandleTabRemoval(FName TabNameID, class UCommonButtonBase* TabButton);                                              // [0x36d85d0] Native|Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonTabListWidgetBase.HandleTabCreation
	// void HandleTabCreation(FName TabNameID, class UCommonButtonBase* TabButton);                                             // [0x2b79574] Native|Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonTabListWidgetBase.HandleTabButtonSelected
	// void HandleTabButtonSelected(class UCommonButtonBase* SelectedTabButton, int32_t ButtonIndex);                           // [0x2b42b50] Final|Native|Protected 
	// Function /Script/CommonUI.CommonTabListWidgetBase.HandlePreviousTabInputAction
	// void HandlePreviousTabInputAction(bool& bPassThrough);                                                                   // [0x755da28] Final|Native|Protected|HasOutParms 
	// Function /Script/CommonUI.CommonTabListWidgetBase.HandlePreLinkedSwitcherChanged_BP
	// void HandlePreLinkedSwitcherChanged_BP();                                                                                // [0x186becc] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonTabListWidgetBase.HandlePostLinkedSwitcherChanged_BP
	// void HandlePostLinkedSwitcherChanged_BP();                                                                               // [0x186becc] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonTabListWidgetBase.HandleNextTabInputAction
	// void HandleNextTabInputAction(bool& bPassThrough);                                                                       // [0x755d870] Final|Native|Protected|HasOutParms 
	// Function /Script/CommonUI.CommonTabListWidgetBase.GetTabIdAtIndex
	// FName GetTabIdAtIndex(int32_t Index);                                                                                    // [0x755d510] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonTabListWidgetBase.GetTabCount
	// int32_t GetTabCount();                                                                                                   // [0x36346a8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonTabListWidgetBase.GetTabButtonBaseByID
	// class UCommonButtonBase* GetTabButtonBaseByID(FName TabNameID);                                                          // [0x3d77a90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonTabListWidgetBase.GetSelectedTabId
	// FName GetSelectedTabId();                                                                                                // [0x2b435f8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonTabListWidgetBase.GetLinkedSwitcher
	// class UCommonAnimatedSwitcher* GetLinkedSwitcher();                                                                      // [0x755cca8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonTabListWidgetBase.GetActiveTab
	// FName GetActiveTab();                                                                                                    // [0x378c6d8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonTabListWidgetBase.DisableTabWithReason
	// void DisableTabWithReason(FName TabNameID, FText& Reason);                                                               // [0x755bf24] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/CommonUI.CommonTextStyle
/// Size: 0x0178 (0x000028 - 0x0001A0)
class UCommonTextStyle : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
	SMember(FSlateFontInfo)                            Font                                                        OFFSET(getStruct<T>, {0x28, 88, 0, 0})
	SMember(FLinearColor)                              Color                                                       OFFSET(getStruct<T>, {0x80, 16, 0, 0})
	DMember(bool)                                      bUsesDropShadow                                             OFFSET(get<bool>, {0x90, 1, 0, 0})
	SMember(FVector2D)                                 ShadowOffset                                                OFFSET(getStruct<T>, {0x98, 16, 0, 0})
	SMember(FLinearColor)                              ShadowColor                                                 OFFSET(getStruct<T>, {0xA8, 16, 0, 0})
	SMember(FMargin)                                   Margin                                                      OFFSET(getStruct<T>, {0xB8, 16, 0, 0})
	SMember(FSlateBrush)                               StrikeBrush                                                 OFFSET(getStruct<T>, {0xD0, 192, 0, 0})
	DMember(float)                                     LineHeightPercentage                                        OFFSET(get<float>, {0x190, 4, 0, 0})
	DMember(bool)                                      ApplyLineHeightToBottomLine                                 OFFSET(get<bool>, {0x194, 1, 0, 0})


	/// Functions
	// Function /Script/CommonUI.CommonTextStyle.GetStrikeBrush
	// void GetStrikeBrush(FSlateBrush& OutStrikeBrush);                                                                        // [0x755d444] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonTextStyle.GetShadowOffset
	// void GetShadowOffset(FVector2D& OutShadowOffset);                                                                        // [0x755d39c] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonTextStyle.GetShadowColor
	// void GetShadowColor(FLinearColor& OutColor);                                                                             // [0x755d310] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonTextStyle.GetMargin
	// void GetMargin(FMargin& OutMargin);                                                                                      // [0x755cd04] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonTextStyle.GetLineHeightPercentage
	// float GetLineHeightPercentage();                                                                                         // [0x755cc90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonTextStyle.GetFont
	// void GetFont(FSlateFontInfo& OutFont);                                                                                   // [0x755c8f0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonTextStyle.GetColor
	// void GetColor(FLinearColor& OutColor);                                                                                   // [0x755c38c] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonTextStyle.GetApplyLineHeightToBottomLine
	// bool GetApplyLineHeightToBottomLine();                                                                                   // [0x755c170] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/CommonUI.CommonTextScrollStyle
/// Size: 0x0018 (0x000028 - 0x000040)
class UCommonTextScrollStyle : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(float)                                     Speed                                                       OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(float)                                     StartDelay                                                  OFFSET(get<float>, {0x2C, 4, 0, 0})
	DMember(float)                                     EndDelay                                                    OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(float)                                     FadeInDelay                                                 OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     FadeOutDelay                                                OFFSET(get<float>, {0x38, 4, 0, 0})
	CMember(EWidgetClipping)                           Clipping                                                    OFFSET(get<T>, {0x3C, 1, 0, 0})
};

/// Class /Script/CommonUI.CommonTileView
/// Size: 0x0000 (0x000C00 - 0x000C00)
class UCommonTileView : public UTileView
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3072;

public:
};

/// Class /Script/CommonUI.CommonTreeView
/// Size: 0x0000 (0x000C30 - 0x000C30)
class UCommonTreeView : public UTreeView
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3120;

public:
};

/// Class /Script/CommonUI.CommonUIEditorSettings
/// Size: 0x0068 (0x000028 - 0x000090)
class UCommonUIEditorSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	CMember(TWeakObjectPtr<UClass*>)                   TemplateTextStyle                                           OFFSET(get<T>, {0x28, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   TemplateButtonStyle                                         OFFSET(get<T>, {0x48, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   TemplateBorderStyle                                         OFFSET(get<T>, {0x68, 32, 0, 0})
};

/// Class /Script/CommonUI.CommonUILibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UCommonUILibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/CommonUI.CommonUILibrary.FindParentWidgetOfType
	// class UWidget* FindParentWidgetOfType(class UWidget* StartingWidget, class UClass* Type);                                // [0x3ce8460] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/CommonUI.CommonUIRichTextData
/// Size: 0x0008 (0x000028 - 0x000030)
class UCommonUIRichTextData : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(class UDataTable*)                         InlineIconSet                                               OFFSET(get<T>, {0x28, 8, 0, 0})
};

/// Class /Script/CommonUI.CommonUISettings
/// Size: 0x0188 (0x000028 - 0x0001B0)
class UCommonUISettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 432;

public:
	DMember(bool)                                      bAutoLoadData                                               OFFSET(get<bool>, {0x28, 1, 0, 0})
	CMember(TWeakObjectPtr<UObject*>)                  DefaultImageResourceObject                                  OFFSET(get<T>, {0x30, 32, 0, 0})
	CMember(TWeakObjectPtr<UMaterialInterface*>)       DefaultThrobberMaterial                                     OFFSET(get<T>, {0x50, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   DefaultRichTextDataClass                                    OFFSET(get<T>, {0x70, 32, 0, 0})
	CMember(TArray<FGameplayTag>)                      PlatformTraits                                              OFFSET(get<T>, {0x90, 16, 0, 0})
	CMember(class UObject*)                            DefaultImageResourceObjectInstance                          OFFSET(get<T>, {0xC8, 8, 0, 0})
	CMember(class UMaterialInterface*)                 DefaultThrobberMaterialInstance                             OFFSET(get<T>, {0xD0, 8, 0, 0})
	SMember(FSlateBrush)                               DefaultThrobberBrush                                        OFFSET(getStruct<T>, {0xE0, 192, 0, 0})
	CMember(class UCommonUIRichTextData*)              RichTextDataInstance                                        OFFSET(get<T>, {0x1A0, 8, 0, 0})
};

/// Class /Script/CommonUI.CommonUISubsystemBase
/// Size: 0x0010 (0x000030 - 0x000040)
class UCommonUISubsystemBase : public UGameInstanceSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:


	/// Functions
	// Function /Script/CommonUI.CommonUISubsystemBase.GetInputActionButtonIcon
	// FSlateBrush GetInputActionButtonIcon(FDataTableRowHandle& InputActionRowHandle, ECommonInputType InputType, FName& GamepadName); // [0x755ca48] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonUISubsystemBase.GetEnhancedInputActionButtonIcon
	// FSlateBrush GetEnhancedInputActionButtonIcon(class UInputAction* InputAction, class ULocalPlayer* LocalPlayer);          // [0x755c76c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/CommonUI.CommonInputMetadata
/// Size: 0x0008 (0x000028 - 0x000030)
class UCommonInputMetadata : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(int32_t)                                   NavBarPriority                                              OFFSET(get<int32_t>, {0x28, 4, 0, 0})
	DMember(bool)                                      bIsGenericInputAction                                       OFFSET(get<bool>, {0x2C, 1, 0, 0})
};

/// Class /Script/CommonUI.CommonMappingContextMetadataInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UCommonMappingContextMetadataInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/CommonUI.CommonMappingContextMetadata
/// Size: 0x0060 (0x000030 - 0x000090)
class UCommonMappingContextMetadata : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	CMember(class UCommonInputMetadata*)               EnhancedInputMetadata                                       OFFSET(get<T>, {0x38, 8, 0, 0})
	CMember(TMap<UInputAction*, UCommonInputMetadata*>) PerActionEnhancedInputMetadata                             OFFSET(get<T>, {0x40, 80, 0, 0})
};

/// Class /Script/CommonUI.CommonUIVisibilitySubsystem
/// Size: 0x0058 (0x000030 - 0x000088)
class UCommonUIVisibilitySubsystem : public ULocalPlayerSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
};

/// Class /Script/CommonUI.CommonVideoPlayer
/// Size: 0x0158 (0x000178 - 0x0002D0)
class UCommonVideoPlayer : public UWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 720;

public:
	CMember(class UMediaSource*)                       Video                                                       OFFSET(get<T>, {0x178, 8, 0, 0})
	DMember(bool)                                      bMatchSize                                                  OFFSET(get<bool>, {0x180, 1, 0, 0})
	CMember(class UMediaPlayer*)                       MediaPlayer                                                 OFFSET(get<T>, {0x188, 8, 0, 0})
	CMember(class UMediaTexture*)                      MediaTexture                                                OFFSET(get<T>, {0x190, 8, 0, 0})
	CMember(class UMaterial*)                          VideoMaterial                                               OFFSET(get<T>, {0x198, 8, 0, 0})
	CMember(class UMediaSoundComponent*)               SoundComponent                                              OFFSET(get<T>, {0x1A0, 8, 0, 0})
	SMember(FSlateBrush)                               VideoBrush                                                  OFFSET(getStruct<T>, {0x1B0, 192, 0, 0})
};

/// Class /Script/CommonUI.CommonVisibilitySwitcher
/// Size: 0x0028 (0x0001A0 - 0x0001C8)
class UCommonVisibilitySwitcher : public UOverlay
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 456;

public:
	CMember(ESlateVisibility)                          ShownVisibility                                             OFFSET(get<T>, {0x1A0, 1, 0, 0})
	DMember(int32_t)                                   ActiveWidgetIndex                                           OFFSET(get<int32_t>, {0x1A4, 4, 0, 0})
	DMember(bool)                                      bAutoActivateSlot                                           OFFSET(get<bool>, {0x1A8, 1, 0, 0})
	DMember(bool)                                      bActivateFirstSlotOnAdding                                  OFFSET(get<bool>, {0x1A9, 1, 0, 0})


	/// Functions
	// Function /Script/CommonUI.CommonVisibilitySwitcher.SetActiveWidgetIndex
	// void SetActiveWidgetIndex(int32_t Index);                                                                                // [0x345ba88] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonVisibilitySwitcher.SetActiveWidget
	// void SetActiveWidget(class UWidget* Widget);                                                                             // [0x34332b4] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonVisibilitySwitcher.IsCurrentlySwitching
	// bool IsCurrentlySwitching();                                                                                             // [0x755de68] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonVisibilitySwitcher.IncrementActiveWidgetIndex
	// void IncrementActiveWidgetIndex(bool bAllowWrapping);                                                                    // [0x755db50] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonVisibilitySwitcher.GetActiveWidgetIndex
	// int32_t GetActiveWidgetIndex();                                                                                          // [0x36f3ae0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonVisibilitySwitcher.GetActiveWidget
	// class UWidget* GetActiveWidget();                                                                                        // [0x3d1f9b4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonVisibilitySwitcher.DecrementActiveWidgetIndex
	// void DecrementActiveWidgetIndex(bool bAllowWrapping);                                                                    // [0x755bdb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonVisibilitySwitcher.DeactivateVisibleSlot
	// void DeactivateVisibleSlot();                                                                                            // [0x755bd88] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonVisibilitySwitcher.ActivateVisibleSlot
	// void ActivateVisibleSlot();                                                                                              // [0x755b698] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/CommonUI.CommonVisibilitySwitcherSlot
/// Size: 0x0010 (0x000058 - 0x000068)
class UCommonVisibilitySwitcherSlot : public UOverlaySlot
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
};

/// Class /Script/CommonUI.UCommonVisibilityWidgetBase
/// Size: 0x0060 (0x000320 - 0x000380)
class UUCommonVisibilityWidgetBase : public UCommonBorder
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 896;

public:
	CMember(TMap<FName, bool>)                         VisibilityControls                                          OFFSET(get<T>, {0x320, 80, 0, 0})
	DMember(bool)                                      bShowForGamepad                                             OFFSET(get<bool>, {0x370, 1, 0, 0})
	DMember(bool)                                      bShowForMouseAndKeyboard                                    OFFSET(get<bool>, {0x371, 1, 0, 0})
	DMember(bool)                                      bShowForTouch                                               OFFSET(get<bool>, {0x372, 1, 0, 0})
	CMember(ESlateVisibility)                          VisibleType                                                 OFFSET(get<T>, {0x373, 1, 0, 0})
	CMember(ESlateVisibility)                          HiddenType                                                  OFFSET(get<T>, {0x374, 1, 0, 0})


	/// Functions
	// Function /Script/CommonUI.UCommonVisibilityWidgetBase.GetRegisteredPlatforms
	// TArray<FName> GetRegisteredPlatforms();                                                                                  // [0x755d00c] Final|Native|Static|Protected 
};

/// Class /Script/CommonUI.CommonVisualAttachment
/// Size: 0x0020 (0x0001C8 - 0x0001E8)
class UCommonVisualAttachment : public USizeBox
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 488;

public:
	SMember(FVector2D)                                 ContentAnchor                                               OFFSET(getStruct<T>, {0x1C8, 16, 0, 0})
};

/// Class /Script/CommonUI.CommonWidgetCarousel
/// Size: 0x0048 (0x000190 - 0x0001D8)
class UCommonWidgetCarousel : public UPanelWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 472;

public:
	DMember(int32_t)                                   ActiveWidgetIndex                                           OFFSET(get<int32_t>, {0x190, 4, 0, 0})
	DMember(float)                                     MoveSpeed                                                   OFFSET(get<float>, {0x194, 4, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnCurrentPageIndexChanged                                   OFFSET(getStruct<T>, {0x198, 16, 0, 0})


	/// Functions
	// Function /Script/CommonUI.CommonWidgetCarousel.SetMoveSpeed
	// void SetMoveSpeed(float InMoveSpeed);                                                                                    // [0x7560a58] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonWidgetCarousel.SetActiveWidgetIndex
	// void SetActiveWidgetIndex(int32_t Index);                                                                                // [0x755ecd8] Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonWidgetCarousel.SetActiveWidget
	// void SetActiveWidget(class UWidget* Widget);                                                                             // [0x755ec14] Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonWidgetCarousel.PreviousPage
	// void PreviousPage();                                                                                                     // [0x755e5a8] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonWidgetCarousel.NextPage
	// void NextPage();                                                                                                         // [0x755e25c] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonWidgetCarousel.GetWidgetAtIndex
	// class UWidget* GetWidgetAtIndex(int32_t Index);                                                                          // [0x755d5f8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonWidgetCarousel.GetMoveSpeed
	// float GetMoveSpeed();                                                                                                    // [0x755cdac] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonWidgetCarousel.GetActiveWidgetIndex
	// int32_t GetActiveWidgetIndex();                                                                                          // [0x755c150] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonWidgetCarousel.EndAutoScrolling
	// void EndAutoScrolling();                                                                                                 // [0x755c048] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonWidgetCarousel.BeginAutoScrolling
	// void BeginAutoScrolling(float ScrollInterval);                                                                           // [0x755ba8c] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/CommonUI.CommonWidgetCarouselNavBar
/// Size: 0x0048 (0x000178 - 0x0001C0)
class UCommonWidgetCarouselNavBar : public UWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 448;

public:
	CMember(class UClass*)                             ButtonWidgetType                                            OFFSET(get<T>, {0x178, 8, 0, 0})
	SMember(FMargin)                                   ButtonPadding                                               OFFSET(getStruct<T>, {0x180, 16, 0, 0})
	CMember(class UCommonWidgetCarousel*)              LinkedCarousel                                              OFFSET(get<T>, {0x1A0, 8, 0, 0})
	CMember(class UCommonButtonGroupBase*)             ButtonGroup                                                 OFFSET(get<T>, {0x1A8, 8, 0, 0})
	CMember(TArray<class UCommonButtonBase*>)          Buttons                                                     OFFSET(get<T>, {0x1B0, 16, 0, 0})


	/// Functions
	// Function /Script/CommonUI.CommonWidgetCarouselNavBar.SetLinkedCarousel
	// void SetLinkedCarousel(class UCommonWidgetCarousel* CommonCarousel);                                                     // [0x75604f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonWidgetCarouselNavBar.HandlePageChanged
	// void HandlePageChanged(class UCommonWidgetCarousel* CommonCarousel, int32_t PageIndex);                                  // [0x755d8ec] Final|Native|Protected 
	// Function /Script/CommonUI.CommonWidgetCarouselNavBar.HandleButtonClicked
	// void HandleButtonClicked(class UCommonButtonBase* AssociatedButton, int32_t ButtonIndex);                                // [0x755d6f4] Final|Native|Protected 
};

/// Class /Script/CommonUI.CommonWidgetGroupBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UCommonWidgetGroupBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/CommonUI.CommonWidgetGroupBase.RemoveWidget
	// void RemoveWidget(class UWidget* InWidget);                                                                              // [0x755e808] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonWidgetGroupBase.RemoveAll
	// void RemoveAll();                                                                                                        // [0x1bbc518] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonWidgetGroupBase.AddWidgets
	// void AddWidgets(TArray<UWidget*>& Widgets);                                                                              // [0x755b7dc] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CommonUI.CommonWidgetGroupBase.AddWidget
	// void AddWidget(class UWidget* InWidget);                                                                                 // [0x755b6c0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/CommonUI.CommonButtonGroupBase
/// Size: 0x00E8 (0x000028 - 0x000110)
class UCommonButtonGroupBase : public UCommonWidgetGroupBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
	SMember(FMulticastInlineDelegate)                  OnSelectedButtonBaseChanged                                 OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnHoveredButtonBaseChanged                                  OFFSET(getStruct<T>, {0x50, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnButtonBaseClicked                                         OFFSET(getStruct<T>, {0x78, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnButtonBaseDoubleClicked                                   OFFSET(getStruct<T>, {0xA0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnSelectionCleared                                          OFFSET(getStruct<T>, {0xC8, 16, 0, 0})
	DMember(bool)                                      bSelectionRequired                                          OFFSET(get<bool>, {0xF0, 1, 0, 0})


	/// Functions
	// Function /Script/CommonUI.CommonButtonGroupBase.SetSelectionRequired
	// void SetSelectionRequired(bool bRequireSelection);                                                                       // [0x75612d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonGroupBase.SelectPreviousButton
	// void SelectPreviousButton(bool bAllowWrap);                                                                              // [0x755eb50] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonGroupBase.SelectNextButton
	// void SelectNextButton(bool bAllowWrap);                                                                                  // [0x755ea8c] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonGroupBase.SelectButtonAtIndex
	// void SelectButtonAtIndex(int32_t ButtonIndex, bool bAllowSound);                                                         // [0x755e94c] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonGroupBase.OnSelectionStateChangedBase
	// void OnSelectionStateChangedBase(class UCommonButtonBase* BaseButton, bool bIsSelected);                                 // [0x350045c] Native|Protected     
	// Function /Script/CommonUI.CommonButtonGroupBase.OnHandleButtonBaseDoubleClicked
	// void OnHandleButtonBaseDoubleClicked(class UCommonButtonBase* BaseButton);                                               // [0x755e40c] Native|Protected     
	// Function /Script/CommonUI.CommonButtonGroupBase.OnHandleButtonBaseClicked
	// void OnHandleButtonBaseClicked(class UCommonButtonBase* BaseButton);                                                     // [0x66d5d50] Native|Protected     
	// Function /Script/CommonUI.CommonButtonGroupBase.OnButtonBaseUnhovered
	// void OnButtonBaseUnhovered(class UCommonButtonBase* BaseButton);                                                         // [0x755e348] Native|Protected     
	// Function /Script/CommonUI.CommonButtonGroupBase.OnButtonBaseHovered
	// void OnButtonBaseHovered(class UCommonButtonBase* BaseButton);                                                           // [0x755e284] Native|Protected     
	// Function /Script/CommonUI.CommonButtonGroupBase.HasAnyButtons
	// bool HasAnyButtons();                                                                                                    // [0x755db34] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonGroupBase.GetSelectedButtonIndex
	// int32_t GetSelectedButtonIndex();                                                                                        // [0x755d104] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonGroupBase.GetSelectedButtonBase
	// class UCommonButtonBase* GetSelectedButtonBase();                                                                        // [0x755d0e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonGroupBase.GetHoveredButtonIndex
	// int32_t GetHoveredButtonIndex();                                                                                         // [0x755c994] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonGroupBase.GetButtonCount
	// int32_t GetButtonCount();                                                                                                // [0x653b32c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonGroupBase.GetButtonBaseAtIndex
	// class UCommonButtonBase* GetButtonBaseAtIndex(int32_t Index);                                                            // [0x755c22c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonGroupBase.FindButtonIndex
	// int32_t FindButtonIndex(class UCommonButtonBase* ButtonToFind);                                                          // [0x755c05c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonGroupBase.DeselectAll
	// void DeselectAll();                                                                                                      // [0x755be74] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/CommonUI.CommonBoundActionBar
/// Size: 0x0030 (0x000258 - 0x000288)
class UCommonBoundActionBar : public UDynamicEntryBoxBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 648;

public:
	CMember(class UClass*)                             ActionButtonClass                                           OFFSET(get<T>, {0x260, 8, 0, 0})
	DMember(bool)                                      bDisplayOwningPlayerActionsOnly                             OFFSET(get<bool>, {0x268, 1, 0, 0})
	DMember(bool)                                      bIgnoreDuplicateActions                                     OFFSET(get<bool>, {0x269, 1, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnActionBarUpdated                                          OFFSET(getStruct<T>, {0x270, 16, 0, 0})


	/// Functions
	// Function /Script/CommonUI.CommonBoundActionBar.SetDisplayOwningPlayerActionsOnly
	// void SetDisplayOwningPlayerActionsOnly(bool bShouldOnlyDisplayOwningPlayerActions);                                      // [0x3445470] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/CommonUI.CommonBoundActionButton
/// Size: 0x0020 (0x001490 - 0x0014B0)
class UCommonBoundActionButton : public UCommonButtonBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5296;

public:
	CMember(class UCommonTextBlock*)                   Text_ActionName                                             OFFSET(get<T>, {0x1498, 8, 0, 0})


	/// Functions
	// Function /Script/CommonUI.CommonBoundActionButton.OnUpdateInputAction
	// void OnUpdateInputAction();                                                                                              // [0x186becc] Event|Protected|BlueprintEvent 
};

/// Class /Script/CommonUI.CommonGenericInputActionDataTable
/// Size: 0x0000 (0x0000B0 - 0x0000B0)
class UCommonGenericInputActionDataTable : public UDataTable
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
};

/// Class /Script/CommonUI.CommonInputActionDataProcessor
/// Size: 0x0000 (0x000028 - 0x000028)
class UCommonInputActionDataProcessor : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/CommonUI.CommonUIActionRouterBase
/// Size: 0x0140 (0x000030 - 0x000170)
class UCommonUIActionRouterBase : public ULocalPlayerSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 368;

public:
};

/// Class /Script/CommonUI.CommonUIInputSettings
/// Size: 0x0050 (0x000028 - 0x000078)
class UCommonUIInputSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	DMember(bool)                                      bLinkCursorToGamepadFocus                                   OFFSET(get<bool>, {0x28, 1, 0, 0})
	DMember(int32_t)                                   UIActionProcessingPriority                                  OFFSET(get<int32_t>, {0x2C, 4, 0, 0})
	CMember(TArray<FUIInputAction>)                    InputActions                                                OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TArray<FUIInputAction>)                    ActionOverrides                                             OFFSET(get<T>, {0x40, 16, 0, 0})
	SMember(FCommonAnalogCursorSettings)               AnalogCursorSettings                                        OFFSET(getStruct<T>, {0x50, 36, 0, 0})
};

/// Class /Script/CommonUI.CommonActivatableWidgetContainerBase
/// Size: 0x0120 (0x000178 - 0x000298)
class UCommonActivatableWidgetContainerBase : public UWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 664;

public:
	CMember(ECommonSwitcherTransition)                 TransitionType                                              OFFSET(get<T>, {0x190, 1, 0, 0})
	CMember(ETransitionCurve)                          TransitionCurveType                                         OFFSET(get<T>, {0x191, 1, 0, 0})
	DMember(float)                                     TransitionDuration                                          OFFSET(get<float>, {0x194, 4, 0, 0})
	CMember(TArray<class UCommonActivatableWidget*>)   WidgetList                                                  OFFSET(get<T>, {0x198, 16, 0, 0})
	CMember(class UCommonActivatableWidget*)           DisplayedWidget                                             OFFSET(get<T>, {0x1A8, 8, 0, 0})
	SMember(FUserWidgetPool)                           GeneratedWidgetsPool                                        OFFSET(getStruct<T>, {0x1B0, 136, 0, 0})


	/// Functions
	// Function /Script/CommonUI.CommonActivatableWidgetContainerBase.SetTransitionDuration
	// void SetTransitionDuration(float duration);                                                                              // [0x75619ec] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonActivatableWidgetContainerBase.RemoveWidget
	// void RemoveWidget(class UCommonActivatableWidget* WidgetToRemove);                                                       // [0x755e748] Final|Native|Private|BlueprintCallable 
	// Function /Script/CommonUI.CommonActivatableWidgetContainerBase.GetTransitionDuration
	// float GetTransitionDuration();                                                                                           // [0x68897dc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonActivatableWidgetContainerBase.GetActiveWidget
	// class UCommonActivatableWidget* GetActiveWidget();                                                                       // [0x755c12c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonActivatableWidgetContainerBase.ClearWidgets
	// void ClearWidgets();                                                                                                     // [0x755bd74] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonActivatableWidgetContainerBase.BP_AddWidget
	// class UCommonActivatableWidget* BP_AddWidget(class UClass* ActivatableWidgetClass);                                      // [0x755b878] Final|Native|Private|BlueprintCallable 
};

/// Class /Script/CommonUI.CommonActivatableWidgetStack
/// Size: 0x0010 (0x000298 - 0x0002A8)
class UCommonActivatableWidgetStack : public UCommonActivatableWidgetContainerBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 680;

public:
	CMember(class UClass*)                             RootContentWidgetClass                                      OFFSET(get<T>, {0x298, 8, 0, 0})
	CMember(class UCommonActivatableWidget*)           RootContentWidget                                           OFFSET(get<T>, {0x2A0, 8, 0, 0})
};

/// Class /Script/CommonUI.CommonActivatableWidgetQueue
/// Size: 0x0000 (0x000298 - 0x000298)
class UCommonActivatableWidgetQueue : public UCommonActivatableWidgetContainerBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 664;

public:
};

/// Struct /Script/CommonUI.CommonNumberFormattingOptions
/// Size: 0x0014 (0x000000 - 0x000014)
class FCommonNumberFormattingOptions : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	CMember(TEnumAsByte<ERoundingMode>)                RoundingMode                                                OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(bool)                                      UseGrouping                                                 OFFSET(get<bool>, {0x1, 1, 0, 0})
	DMember(int32_t)                                   MinimumIntegralDigits                                       OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   MaximumIntegralDigits                                       OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   MinimumFractionalDigits                                     OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	DMember(int32_t)                                   MaximumFractionalDigits                                     OFFSET(get<int32_t>, {0x10, 4, 0, 0})
};

/// Struct /Script/CommonUI.CommonRegisteredTabInfo
/// Size: 0x0018 (0x000000 - 0x000018)
class FCommonRegisteredTabInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(int32_t)                                   TabIndex                                                    OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	CMember(class UCommonButtonBase*)                  TabButton                                                   OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(class UWidget*)                            ContentInstance                                             OFFSET(get<T>, {0x10, 8, 0, 0})
};

/// Struct /Script/CommonUI.UIInputConfig
/// Size: 0x0006 (0x000000 - 0x000006)
class FUIInputConfig : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 6;

public:
	DMember(bool)                                      bIgnoreMoveInput                                            OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(bool)                                      bIgnoreLookInput                                            OFFSET(get<bool>, {0x1, 1, 0, 0})
	CMember(ECommonInputMode)                          InputMode                                                   OFFSET(get<T>, {0x2, 1, 0, 0})
	CMember(EMouseCaptureMode)                         MouseCaptureMode                                            OFFSET(get<T>, {0x3, 1, 0, 0})
	CMember(EMouseLockMode)                            MouseLockMode                                               OFFSET(get<T>, {0x4, 1, 0, 0})
	DMember(bool)                                      bHideCursorDuringViewportCapture                            OFFSET(get<bool>, {0x5, 1, 0, 0})
};

/// Struct /Script/CommonUI.CommonInputActionHandlerData
/// Size: 0x0020 (0x000000 - 0x000020)
class FCommonInputActionHandlerData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FDataTableRowHandle)                       InputActionRow                                              OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	CMember(EInputActionState)                         State                                                       OFFSET(get<T>, {0x10, 1, 0, 0})
};

/// Struct /Script/CommonUI.UIActionBindingHandle
/// Size: 0x0004 (0x000000 - 0x000004)
class FUIActionBindingHandle : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
};

/// Struct /Script/CommonUI.UITag
/// Size: 0x0000 (0x000004 - 0x000004)
class FUITag : public FGameplayTag
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
};

/// Struct /Script/CommonUI.UIActionTag
/// Size: 0x0000 (0x000004 - 0x000004)
class FUIActionTag : public FUITag
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
};

/// Struct /Script/CommonUI.CommonButtonStyleOptionalSlateSound
/// Size: 0x0020 (0x000000 - 0x000020)
class FCommonButtonStyleOptionalSlateSound : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(bool)                                      bHasSound                                                   OFFSET(get<bool>, {0x0, 1, 0, 0})
	SMember(FSlateSound)                               sound                                                       OFFSET(getStruct<T>, {0x8, 24, 0, 0})
};

/// Struct /Script/CommonUI.RichTextIconData
/// Size: 0x0048 (0x000008 - 0x000050)
class FRichTextIconData : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FText)                                     DisplayName                                                 OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	CMember(TWeakObjectPtr<UObject*>)                  ResourceObject                                              OFFSET(get<T>, {0x20, 32, 0, 0})
	SMember(FVector2D)                                 ImageSize                                                   OFFSET(getStruct<T>, {0x40, 16, 0, 0})
};

/// Struct /Script/CommonUI.CommonInputTypeInfo
/// Size: 0x00F0 (0x000000 - 0x0000F0)
class FCommonInputTypeInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	SMember(FKey)                                      Key                                                         OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	CMember(EInputActionState)                         OverrrideState                                              OFFSET(get<T>, {0x18, 1, 0, 0})
	DMember(bool)                                      bActionRequiresHold                                         OFFSET(get<bool>, {0x19, 1, 0, 0})
	DMember(float)                                     HoldTime                                                    OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(float)                                     HoldRollbackTime                                            OFFSET(get<float>, {0x20, 4, 0, 0})
	SMember(FSlateBrush)                               OverrideBrush                                               OFFSET(getStruct<T>, {0x30, 192, 0, 0})
};

/// Struct /Script/CommonUI.CommonInputActionDataBase
/// Size: 0x0358 (0x000008 - 0x000360)
class FCommonInputActionDataBase : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 864;

public:
	SMember(FText)                                     DisplayName                                                 OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	SMember(FText)                                     HoldDisplayName                                             OFFSET(getStruct<T>, {0x20, 24, 0, 0})
	DMember(int32_t)                                   NavBarPriority                                              OFFSET(get<int32_t>, {0x38, 4, 0, 0})
	SMember(FCommonInputTypeInfo)                      KeyboardInputTypeInfo                                       OFFSET(getStruct<T>, {0x40, 240, 0, 0})
	SMember(FCommonInputTypeInfo)                      DefaultGamepadInputTypeInfo                                 OFFSET(getStruct<T>, {0x130, 240, 0, 0})
	CMember(TMap<FName, FCommonInputTypeInfo>)         GamepadInputOverrides                                       OFFSET(get<T>, {0x220, 80, 0, 0})
	SMember(FCommonInputTypeInfo)                      TouchInputTypeInfo                                          OFFSET(getStruct<T>, {0x270, 240, 0, 0})
};

/// Struct /Script/CommonUI.UIActionKeyMapping
/// Size: 0x0020 (0x000000 - 0x000020)
class FUIActionKeyMapping : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FKey)                                      Key                                                         OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	DMember(float)                                     HoldTime                                                    OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     HoldRollbackTime                                            OFFSET(get<float>, {0x1C, 4, 0, 0})
};

/// Struct /Script/CommonUI.UIInputAction
/// Size: 0x0030 (0x000000 - 0x000030)
class FUIInputAction : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FUIActionTag)                              ActionTag                                                   OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FText)                                     DefaultDisplayName                                          OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	CMember(TArray<FUIActionKeyMapping>)               KeyMappings                                                 OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/CommonUI.CommonAnalogCursorSettings
/// Size: 0x0024 (0x000000 - 0x000024)
class FCommonAnalogCursorSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 36;

public:
	DMember(int32_t)                                   PreprocessorPriority                                        OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(bool)                                      bEnableCursorAcceleration                                   OFFSET(get<bool>, {0x4, 1, 0, 0})
	DMember(float)                                     CursorAcceleration                                          OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     CursorMaxSpeed                                              OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     CursorDeadZone                                              OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     HoverSlowdownFactor                                         OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     ScrollDeadZone                                              OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     ScrollUpdatePeriod                                          OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(float)                                     ScrollMultiplier                                            OFFSET(get<float>, {0x20, 4, 0, 0})
};

/// Enum /Script/CommonUI.ERotatorDirection
/// Size: 0x03
enum class ERotatorDirection : uint8_t
{
	ERotatorDirection__Right                                                         = 0,
	ERotatorDirection__Left                                                          = 1,
	ERotatorDirection__ERotatorDirection_MAX                                         = 2
};

/// Enum /Script/CommonUI.ECommonNumericType
/// Size: 0x05
enum class ECommonNumericType : uint8_t
{
	ECommonNumericType__Number                                                       = 0,
	ECommonNumericType__Percentage                                                   = 1,
	ECommonNumericType__Seconds                                                      = 2,
	ECommonNumericType__Distance                                                     = 3,
	ECommonNumericType__ECommonNumericType_MAX                                       = 4
};

/// Enum /Script/CommonUI.ERichTextInlineIconDisplayMode
/// Size: 0x04
enum class ERichTextInlineIconDisplayMode : uint8_t
{
	ERichTextInlineIconDisplayMode__IconOnly                                         = 0,
	ERichTextInlineIconDisplayMode__TextOnly                                         = 1,
	ERichTextInlineIconDisplayMode__IconAndText                                      = 2,
	ERichTextInlineIconDisplayMode__MAX                                              = 3
};

/// Enum /Script/CommonUI.EInputActionState
/// Size: 0x05
enum class EInputActionState : uint8_t
{
	EInputActionState__Enabled                                                       = 0,
	EInputActionState__Disabled                                                      = 1,
	EInputActionState__Hidden                                                        = 2,
	EInputActionState__HiddenAndDisabled                                             = 3,
	EInputActionState__EInputActionState_MAX                                         = 4
};

/// Enum /Script/CommonUI.ECommonSwitcherTransition
/// Size: 0x05
enum class ECommonSwitcherTransition : uint8_t
{
	ECommonSwitcherTransition__FadeOnly                                              = 0,
	ECommonSwitcherTransition__Horizontal                                            = 1,
	ECommonSwitcherTransition__Vertical                                              = 2,
	ECommonSwitcherTransition__Zoom                                                  = 3,
	ECommonSwitcherTransition__ECommonSwitcherTransition_MAX                         = 4
};

/// Enum /Script/CommonUI.ETransitionCurve
/// Size: 0x08
enum class ETransitionCurve : uint8_t
{
	ETransitionCurve__Linear                                                         = 0,
	ETransitionCurve__QuadIn                                                         = 1,
	ETransitionCurve__QuadOut                                                        = 2,
	ETransitionCurve__QuadInOut                                                      = 3,
	ETransitionCurve__CubicIn                                                        = 4,
	ETransitionCurve__CubicOut                                                       = 5,
	ETransitionCurve__CubicInOut                                                     = 6,
	ETransitionCurve__ETransitionCurve_MAX                                           = 7
};

