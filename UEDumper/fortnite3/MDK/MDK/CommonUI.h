
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
/// Size: 0x02E0 (0x000170 - 0x000450)
class UCommonActionWidget : public UWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1104;

public:
	SMember(FMulticastInlineDelegate)                  OnInputMethodChanged                                        OFFSET(getStruct<T>, {0x170, 16, 0, 0})
	SMember(FSlateBrush)                               ProgressMaterialBrush                                       OFFSET(getStruct<T>, {0x180, 192, 0, 0})
	SMember(FName)                                     ProgressMaterialParam                                       OFFSET(getStruct<T>, {0x240, 4, 0, 0})
	SMember(FSlateBrush)                               IconRimBrush                                                OFFSET(getStruct<T>, {0x250, 192, 0, 0})
	CMember(TArray<FDataTableRowHandle>)               InputActions                                                OFFSET(get<T>, {0x310, 16, 0, 0})
	CMember(class UInputAction*)                       EnhancedInputAction                                         OFFSET(get<T>, {0x320, 8, 0, 0})
	CMember(class UMaterialInstanceDynamic*)           ProgressDynamicMaterial                                     OFFSET(get<T>, {0x330, 8, 0, 0})


	/// Functions
	// Function /Script/CommonUI.CommonActionWidget.SetInputActions
	// void SetInputActions(TArray<FDataTableRowHandle> NewInputActions);                                                       // [0x77c1410] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonActionWidget.SetInputAction
	// void SetInputAction(FDataTableRowHandle InputActionRow);                                                                 // [0x3623714] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonActionWidget.SetIconRimBrush
	// void SetIconRimBrush(FSlateBrush InIconRimBrush);                                                                        // [0x38e2d90] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonActionWidget.SetEnhancedInputAction
	// void SetEnhancedInputAction(class UInputAction* InInputAction);                                                          // [0x77c106c] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonActionWidget.OnInputMethodChanged__DelegateSignature
	// void OnInputMethodChanged__DelegateSignature(bool bUsingGamepad);                                                        // [0x1340978] MulticastDelegate|Public|Delegate 
	// Function /Script/CommonUI.CommonActionWidget.IsHeldAction
	// bool IsHeldAction();                                                                                                     // [0x32c2ed4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonActionWidget.GetIcon
	// FSlateBrush GetIcon();                                                                                                   // [0x317b510] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonActionWidget.GetDisplayText
	// FText GetDisplayText();                                                                                                  // [0x2fa13d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/CommonUI.CommonUserWidget
/// Size: 0x0028 (0x0002C8 - 0x0002F0)
class UCommonUserWidget : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 752;

public:
	DMember(bool)                                      bDisplayInActionBar                                         OFFSET(get<bool>, {0x2C8, 1, 0, 0})
	DMember(bool)                                      bConsumePointerInput                                        OFFSET(get<bool>, {0x2C9, 1, 0, 0})


	/// Functions
	// Function /Script/CommonUI.CommonUserWidget.UnregisterScrollRecipientExternal
	// void UnregisterScrollRecipientExternal(class UWidget* AnalogScrollRecipient);                                            // [0x77c2b40] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonUserWidget.SetConsumePointerInput
	// void SetConsumePointerInput(bool bInConsumePointerInput);                                                                // [0x77c0dc4] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonUserWidget.RegisterScrollRecipientExternal
	// void RegisterScrollRecipientExternal(class UWidget* AnalogScrollRecipient);                                              // [0x77c03bc] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/CommonUI.CommonActivatableWidget
/// Size: 0x0118 (0x0002F0 - 0x000408)
class UCommonActivatableWidget : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1032;

public:
	DMember(bool)                                      bIsBackHandler                                              OFFSET(get<bool>, {0x2F0, 1, 0, 0})
	DMember(bool)                                      bIsBackActionDisplayedInActionBar                           OFFSET(get<bool>, {0x2F1, 1, 0, 0})
	DMember(bool)                                      bAutoActivate                                               OFFSET(get<bool>, {0x2F2, 1, 0, 0})
	DMember(bool)                                      bSupportsActivationFocus                                    OFFSET(get<bool>, {0x2F3, 1, 0, 0})
	DMember(bool)                                      bIsModal                                                    OFFSET(get<bool>, {0x2F4, 1, 0, 0})
	DMember(bool)                                      bAutoRestoreFocus                                           OFFSET(get<bool>, {0x2F5, 1, 0, 0})
	DMember(bool)                                      bOverrideActionDomain                                       OFFSET(get<bool>, {0x2F6, 1, 0, 0})
	CMember(class UInputMappingContext*)               InputMapping                                                OFFSET(get<T>, {0x2F8, 8, 0, 0})
	DMember(int32_t)                                   InputMappingPriority                                        OFFSET(get<int32_t>, {0x300, 4, 0, 0})
	CMember(TWeakObjectPtr<UCommonInputActionDomain*>) ActionDomainOverride                                        OFFSET(get<T>, {0x308, 32, 0, 0})
	SMember(FMulticastInlineDelegate)                  BP_OnWidgetActivated                                        OFFSET(getStruct<T>, {0x328, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  BP_OnWidgetDeactivated                                      OFFSET(getStruct<T>, {0x338, 16, 0, 0})
	DMember(bool)                                      bIsActive                                                   OFFSET(get<bool>, {0x348, 1, 0, 0})
	CMember(TArray<TWeakObjectPtr<UCommonActivatableWidget*>>) VisibilityBoundWidgets                              OFFSET(get<T>, {0x350, 16, 0, 0})
	DMember(bool)                                      bSetVisibilityOnActivated                                   OFFSET(get<bool>, {0x400, 1, 0, 0})
	CMember(ESlateVisibility)                          ActivatedVisibility                                         OFFSET(get<T>, {0x401, 1, 0, 0})
	DMember(bool)                                      bSetVisibilityOnDeactivated                                 OFFSET(get<bool>, {0x402, 1, 0, 0})
	CMember(ESlateVisibility)                          DeactivatedVisibility                                       OFFSET(get<T>, {0x403, 1, 0, 0})


	/// Functions
	// Function /Script/CommonUI.CommonActivatableWidget.SetBindVisibilities
	// void SetBindVisibilities(ESlateVisibility OnActivatedVisibility, ESlateVisibility OnDeactivatedVisibility, bool bInAllActive); // [0x77c0a58] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonActivatableWidget.RequestRefreshFocus
	// void RequestRefreshFocus();                                                                                              // [0x3cf2f10] Final|Native|Protected|BlueprintCallable 
	// Function /Script/CommonUI.CommonActivatableWidget.IsActivated
	// bool IsActivated();                                                                                                      // [0x393f618] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonActivatableWidget.GetDesiredFocusTarget
	// class UWidget* GetDesiredFocusTarget();                                                                                  // [0x77bec14] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonActivatableWidget.DeactivateWidget
	// void DeactivateWidget();                                                                                                 // [0x42a8120] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonActivatableWidget.ClearFocusRestorationTarget
	// void ClearFocusRestorationTarget();                                                                                      // [0x77be3a8] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonActivatableWidget.BP_OnHandleBackAction
	// bool BP_OnHandleBackAction();                                                                                            // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonActivatableWidget.BP_OnDeactivated
	// void BP_OnDeactivated();                                                                                                 // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonActivatableWidget.BP_OnActivated
	// void BP_OnActivated();                                                                                                   // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonActivatableWidget.BP_GetDesiredInputConfig
	// FUIInputConfig BP_GetDesiredInputConfig();                                                                               // [0x1340978] Event|Protected|BlueprintEvent|Const 
	// Function /Script/CommonUI.CommonActivatableWidget.BP_GetDesiredFocusTarget
	// class UWidget* BP_GetDesiredFocusTarget();                                                                               // [0x1340978] Event|Protected|BlueprintEvent|Const 
	// Function /Script/CommonUI.CommonActivatableWidget.BindVisibilityToActivation
	// void BindVisibilityToActivation(class UCommonActivatableWidget* ActivatableWidget);                                      // [0x77be1f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonActivatableWidget.ActivateWidget
	// void ActivateWidget();                                                                                                   // [0x42d1e9c] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/CommonUI.CommonAnimatedSwitcher
/// Size: 0x0088 (0x0001A0 - 0x000228)
class UCommonAnimatedSwitcher : public UWidgetSwitcher
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 552;

public:
	SMember(FMulticastInlineDelegate)                  OnActiveWidgetIndexChangedBP                                OFFSET(getStruct<T>, {0x1D0, 16, 0, 0})
	CMember(ECommonSwitcherTransition)                 TransitionType                                              OFFSET(get<T>, {0x1E0, 1, 0, 0})
	CMember(ETransitionCurve)                          TransitionCurveType                                         OFFSET(get<T>, {0x1E1, 1, 0, 0})
	DMember(float)                                     TransitionDuration                                          OFFSET(get<float>, {0x1E4, 4, 0, 0})
	CMember(ECommonSwitcherTransitionFallbackStrategy) TransitionFallbackStrategy                                  OFFSET(get<T>, {0x1E8, 1, 0, 0})


	/// Functions
	// Function /Script/CommonUI.CommonAnimatedSwitcher.SetDisableTransitionAnimation
	// void SetDisableTransitionAnimation(bool bDisableAnimation);                                                              // [0x77c0fec] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonAnimatedSwitcher.IsTransitionPlaying
	// bool IsTransitionPlaying();                                                                                              // [0x77bff6c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonAnimatedSwitcher.IsCurrentlySwitching
	// bool IsCurrentlySwitching();                                                                                             // [0x77bfe14] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonAnimatedSwitcher.HasWidgets
	// bool HasWidgets();                                                                                                       // [0x3f23b20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonAnimatedSwitcher.ActivatePreviousWidget
	// void ActivatePreviousWidget(bool bCanWrap);                                                                              // [0x77bde6c] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonAnimatedSwitcher.ActivateNextWidget
	// void ActivateNextWidget(bool bCanWrap);                                                                                  // [0x77bddec] Final|Native|Public|BlueprintCallable 
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
	// void GetBackgroundBrush(FSlateBrush& Brush);                                                                             // [0x77be7ac] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
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
	// void SetStyle(class UClass* InStyle);                                                                                    // [0x77c22dc] Final|Native|Public|BlueprintCallable 
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
	// class UCommonTextStyle* GetSelectedTextStyle();                                                                          // [0x77bf54c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonStyle.GetSelectedPressedBrush
	// void GetSelectedPressedBrush(FSlateBrush& Brush);                                                                        // [0x77bf468] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonStyle.GetSelectedHoveredTextStyle
	// class UCommonTextStyle* GetSelectedHoveredTextStyle();                                                                   // [0x77bf42c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonStyle.GetSelectedHoveredBrush
	// void GetSelectedHoveredBrush(FSlateBrush& Brush);                                                                        // [0x77bf384] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonStyle.GetSelectedBaseBrush
	// void GetSelectedBaseBrush(FSlateBrush& Brush);                                                                           // [0x77bf2a0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonStyle.GetNormalTextStyle
	// class UCommonTextStyle* GetNormalTextStyle();                                                                            // [0x77bf250] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonStyle.GetNormalPressedBrush
	// void GetNormalPressedBrush(FSlateBrush& Brush);                                                                          // [0x77bf1a8] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonStyle.GetNormalHoveredTextStyle
	// class UCommonTextStyle* GetNormalHoveredTextStyle();                                                                     // [0x77bf184] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonStyle.GetNormalHoveredBrush
	// void GetNormalHoveredBrush(FSlateBrush& Brush);                                                                          // [0x77bf0dc] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonStyle.GetNormalBaseBrush
	// void GetNormalBaseBrush(FSlateBrush& Brush);                                                                             // [0x77bf034] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonStyle.GetMaterialBrush
	// void GetMaterialBrush(FSlateBrush& Brush);                                                                               // [0x77be7ac] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonStyle.GetDisabledTextStyle
	// class UCommonTextStyle* GetDisabledTextStyle();                                                                          // [0x77bece0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonStyle.GetDisabledBrush
	// void GetDisabledBrush(FSlateBrush& Brush);                                                                               // [0x77bec38] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonStyle.GetCustomPadding
	// void GetCustomPadding(FMargin& OutCustomPadding);                                                                        // [0x77beb84] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonStyle.GetButtonPadding
	// void GetButtonPadding(FMargin& OutButtonPadding);                                                                        // [0x77be8dc] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
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
/// Size: 0x1190 (0x0002F0 - 0x001480)
class UCommonButtonBase : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5248;

public:
	SMember(FWidgetEventField)                         ClickEvent                                                  OFFSET(getStruct<T>, {0x2F0, 1, 0, 0})
	DMember(int32_t)                                   MinWidth                                                    OFFSET(get<int32_t>, {0x2F4, 4, 0, 0})
	DMember(int32_t)                                   MinHeight                                                   OFFSET(get<int32_t>, {0x2F8, 4, 0, 0})
	CMember(class UClass*)                             style                                                       OFFSET(get<T>, {0x300, 8, 0, 0})
	DMember(bool)                                      bHideInputAction                                            OFFSET(get<bool>, {0x308, 1, 0, 0})
	SMember(FSlateSound)                               PressedSlateSoundOverride                                   OFFSET(getStruct<T>, {0x310, 24, 0, 0})
	SMember(FSlateSound)                               HoveredSlateSoundOverride                                   OFFSET(getStruct<T>, {0x328, 24, 0, 0})
	SMember(FSlateSound)                               SelectedPressedSlateSoundOverride                           OFFSET(getStruct<T>, {0x340, 24, 0, 0})
	SMember(FSlateSound)                               SelectedHoveredSlateSoundOverride                           OFFSET(getStruct<T>, {0x358, 24, 0, 0})
	SMember(FSlateSound)                               LockedPressedSlateSoundOverride                             OFFSET(getStruct<T>, {0x370, 24, 0, 0})
	SMember(FSlateSound)                               LockedHoveredSlateSoundOverride                             OFFSET(getStruct<T>, {0x388, 24, 0, 0})
	DMember(bool)                                      bApplyAlphaOnDisable                                        OFFSET(get<bool>, {0x3A0, 1, 1, 0})
	DMember(bool)                                      bLocked                                                     OFFSET(get<bool>, {0x3A0, 1, 1, 1})
	DMember(bool)                                      bSelectable                                                 OFFSET(get<bool>, {0x3A0, 1, 1, 2})
	DMember(bool)                                      bShouldSelectUponReceivingFocus                             OFFSET(get<bool>, {0x3A0, 1, 1, 3})
	DMember(bool)                                      bInteractableWhenSelected                                   OFFSET(get<bool>, {0x3A0, 1, 1, 4})
	DMember(bool)                                      bToggleable                                                 OFFSET(get<bool>, {0x3A0, 1, 1, 5})
	DMember(bool)                                      bTriggerClickedAfterSelection                               OFFSET(get<bool>, {0x3A0, 1, 1, 6})
	DMember(bool)                                      bDisplayInputActionWhenNotInteractable                      OFFSET(get<bool>, {0x3A0, 1, 1, 7})
	DMember(bool)                                      bHideInputActionWithKeyboard                                OFFSET(get<bool>, {0x3A1, 1, 1, 0})
	DMember(bool)                                      bShouldUseFallbackDefaultInputAction                        OFFSET(get<bool>, {0x3A1, 1, 1, 1})
	DMember(bool)                                      bRequiresHold                                               OFFSET(get<bool>, {0x3A1, 1, 1, 2})
	CMember(class UClass*)                             HoldData                                                    OFFSET(get<T>, {0x3A8, 8, 0, 0})
	DMember(bool)                                      bSimulateHoverOnTouchInput                                  OFFSET(get<bool>, {0x3B0, 1, 0, 0})
	CMember(TEnumAsByte<EButtonClickMethod>)           ClickMethod                                                 OFFSET(get<T>, {0x3B2, 1, 0, 0})
	CMember(TEnumAsByte<EButtonTouchMethod>)           TouchMethod                                                 OFFSET(get<T>, {0x3B3, 1, 0, 0})
	CMember(TEnumAsByte<EButtonPressMethod>)           PressMethod                                                 OFFSET(get<T>, {0x3B4, 1, 0, 0})
	DMember(int32_t)                                   InputPriority                                               OFFSET(get<int32_t>, {0x3B8, 4, 0, 0})
	SMember(FDataTableRowHandle)                       TriggeringInputAction                                       OFFSET(getStruct<T>, {0x3C0, 16, 0, 0})
	CMember(class UInputAction*)                       TriggeringEnhancedInputAction                               OFFSET(get<T>, {0x3D0, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnSelectedChangedBase                                       OFFSET(getStruct<T>, {0x3E8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnButtonBaseClicked                                         OFFSET(getStruct<T>, {0x3F8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnButtonBaseDoubleClicked                                   OFFSET(getStruct<T>, {0x408, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnButtonBaseHovered                                         OFFSET(getStruct<T>, {0x418, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnButtonBaseUnhovered                                       OFFSET(getStruct<T>, {0x428, 16, 0, 0})
	DMember(bool)                                      bIsPersistentBinding                                        OFFSET(get<bool>, {0x470, 1, 0, 0})
	CMember(ECommonInputMode)                          InputModeOverride                                           OFFSET(get<T>, {0x471, 1, 0, 0})
	CMember(class UMaterialInstanceDynamic*)           SingleMaterialStyleMID                                      OFFSET(get<T>, {0x498, 8, 0, 0})
	SMember(FButtonStyle)                              NormalStyle                                                 OFFSET(getStruct<T>, {0x4A0, 944, 0, 0})
	SMember(FButtonStyle)                              SelectedStyle                                               OFFSET(getStruct<T>, {0x850, 944, 0, 0})
	SMember(FButtonStyle)                              DisabledStyle                                               OFFSET(getStruct<T>, {0xC00, 944, 0, 0})
	SMember(FButtonStyle)                              LockedStyle                                                 OFFSET(getStruct<T>, {0xFB0, 944, 0, 0})
	DMember(bool)                                      bStopDoubleClickPropagation                                 OFFSET(get<bool>, {0x1360, 1, 1, 0})
	CMember(class UCommonActionWidget*)                InputActionWidget                                           OFFSET(get<T>, {0x1478, 8, 0, 0})


	/// Functions
	// Function /Script/CommonUI.CommonButtonBase.UpdateHoldData
	// void UpdateHoldData(ECommonInputType CurrentInputType);                                                                  // [0x77c2bbc] Native|Protected     
	// Function /Script/CommonUI.CommonButtonBase.StopDoubleClickPropagation
	// void StopDoubleClickPropagation();                                                                                       // [0x77c2b28] Final|Native|Protected|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetTriggeringInputAction
	// void SetTriggeringInputAction(FDataTableRowHandle& InputActionRow);                                                      // [0x33ae4b4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetTriggeringEnhancedInputAction
	// void SetTriggeringEnhancedInputAction(class UInputAction* InInputAction);                                                // [0x77c2a00] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetTriggeredInputAction
	// void SetTriggeredInputAction(FDataTableRowHandle& InputActionRow);                                                       // [0x77c2970] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetTouchMethod
	// void SetTouchMethod(TEnumAsByte<EButtonTouchMethod> InTouchMethod);                                                      // [0x77c2860] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetStyle
	// void SetStyle(class UClass* InStyle);                                                                                    // [0x30c91a8] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetShouldUseFallbackDefaultInputAction
	// void SetShouldUseFallbackDefaultInputAction(bool bInShouldUseFallbackDefaultInputAction);                                // [0x77c225c] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetShouldSelectUponReceivingFocus
	// void SetShouldSelectUponReceivingFocus(bool bInShouldSelectUponReceivingFocus);                                          // [0x77c21dc] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetSelectedPressedSoundOverride
	// void SetSelectedPressedSoundOverride(class USoundBase* sound);                                                           // [0x77c20ac] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetSelectedInternal
	// void SetSelectedInternal(bool bInSelected, bool bAllowSound, bool bBroadcast);                                           // [0x77c1fa0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetSelectedHoveredSoundOverride
	// void SetSelectedHoveredSoundOverride(class USoundBase* sound);                                                           // [0x77c1ef0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetPressMethod
	// void SetPressMethod(TEnumAsByte<EButtonPressMethod> InPressMethod);                                                      // [0x77c1dd4] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetPressedSoundOverride
	// void SetPressedSoundOverride(class USoundBase* sound);                                                                   // [0x77c1e70] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetMinDimensions
	// void SetMinDimensions(int32_t InMinWidth, int32_t InMinHeight);                                                          // [0x2f9e8f8] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetLockedPressedSoundOverride
	// void SetLockedPressedSoundOverride(class USoundBase* sound);                                                             // [0x77c1b04] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetLockedHoveredSoundOverride
	// void SetLockedHoveredSoundOverride(class USoundBase* sound);                                                             // [0x77c1a54] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetIsToggleable
	// void SetIsToggleable(bool bInIsToggleable);                                                                              // [0x77c172c] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetIsSelected
	// void SetIsSelected(bool InSelected, bool bGiveClickFeedback);                                                            // [0x77c1668] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetIsSelectable
	// void SetIsSelectable(bool bInIsSelectable);                                                                              // [0x3a13bb4] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetIsLocked
	// void SetIsLocked(bool bInIsLocked);                                                                                      // [0x77c15e8] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetIsInteractionEnabled
	// void SetIsInteractionEnabled(bool bInIsInteractionEnabled);                                                              // [0x2e1c788] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetIsInteractableWhenSelected
	// void SetIsInteractableWhenSelected(bool bInInteractableWhenSelected);                                                    // [0x77c14e8] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetIsFocusable
	// void SetIsFocusable(bool bInIsFocusable);                                                                                // [0x3744b0c] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetInputActionProgressMaterial
	// void SetInputActionProgressMaterial(FSlateBrush& InProgressMaterialBrush, FName& InProgressMaterialParam);               // [0x77c12fc] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetHoveredSoundOverride
	// void SetHoveredSoundOverride(class USoundBase* sound);                                                                   // [0x77c127c] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetHideInputAction
	// void SetHideInputAction(bool bInHideInputAction);                                                                        // [0x77c1174] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetClickMethod
	// void SetClickMethod(TEnumAsByte<EButtonClickMethod> InClickMethod);                                                      // [0x77c0d28] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.OnTriggeringInputActionChanged
	// void OnTriggeringInputActionChanged(FDataTableRowHandle& NewTriggeredAction);                                            // [0x1340978] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/CommonUI.CommonButtonBase.OnTriggeringEnhancedInputActionChanged
	// void OnTriggeringEnhancedInputActionChanged(class UInputAction* InInputAction);                                          // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonButtonBase.OnTriggeredInputActionChanged
	// void OnTriggeredInputActionChanged(FDataTableRowHandle& NewTriggeredAction);                                             // [0x1340978] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/CommonUI.CommonButtonBase.OnInputMethodChanged
	// void OnInputMethodChanged(ECommonInputType CurrentInputType);                                                            // [0x77c0310] Native|Protected     
	// Function /Script/CommonUI.CommonButtonBase.OnCurrentTextStyleChanged
	// void OnCurrentTextStyleChanged();                                                                                        // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonButtonBase.OnActionProgress
	// void OnActionProgress(float HeldPercent);                                                                                // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonButtonBase.OnActionComplete
	// void OnActionComplete();                                                                                                 // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonButtonBase.NativeOnHoldProgressRollback
	// bool NativeOnHoldProgressRollback(float DeltaTime);                                                                      // [0x77c00c4] Native|Protected     
	// Function /Script/CommonUI.CommonButtonBase.NativeOnHoldProgress
	// bool NativeOnHoldProgress(float DeltaTime);                                                                              // [0x77c002c] Native|Protected     
	// Function /Script/CommonUI.CommonButtonBase.NativeOnActionProgress
	// void NativeOnActionProgress(float HeldPercent);                                                                          // [0x77bffa8] Native|Protected     
	// Function /Script/CommonUI.CommonButtonBase.NativeOnActionComplete
	// void NativeOnActionComplete();                                                                                           // [0x77bff90] Native|Protected     
	// Function /Script/CommonUI.CommonButtonBase.IsPressed
	// bool IsPressed();                                                                                                        // [0x77bff14] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonBase.IsInteractionEnabled
	// bool IsInteractionEnabled();                                                                                             // [0x77bfe44] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonBase.HoldReset
	// void HoldReset();                                                                                                        // [0x69d3d0c] Native|Protected     
	// Function /Script/CommonUI.CommonButtonBase.HandleTriggeringActionCommited
	// void HandleTriggeringActionCommited(bool& bPassThrough);                                                                 // [0x77bfba8] Native|Protected|HasOutParms 
	// Function /Script/CommonUI.CommonButtonBase.HandleFocusReceived
	// void HandleFocusReceived();                                                                                              // [0x77bf9d4] Native|Protected     
	// Function /Script/CommonUI.CommonButtonBase.HandleFocusLost
	// void HandleFocusLost();                                                                                                  // [0x39c982c] Native|Protected     
	// Function /Script/CommonUI.CommonButtonBase.HandleButtonReleased
	// void HandleButtonReleased();                                                                                             // [0x77bf9c0] Final|Native|Protected 
	// Function /Script/CommonUI.CommonButtonBase.HandleButtonPressed
	// void HandleButtonPressed();                                                                                              // [0x77bf9ac] Final|Native|Protected 
	// Function /Script/CommonUI.CommonButtonBase.HandleButtonClicked
	// void HandleButtonClicked();                                                                                              // [0x77bf8d4] Final|Native|Protected 
	// Function /Script/CommonUI.CommonButtonBase.GetStyle
	// class UCommonButtonStyle* GetStyle();                                                                                    // [0x77bf74c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonBase.GetSingleMaterialStyleMID
	// class UMaterialInstanceDynamic* GetSingleMaterialStyleMID();                                                             // [0x3ea231c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonBase.GetShouldSelectUponReceivingFocus
	// bool GetShouldSelectUponReceivingFocus();                                                                                // [0x77bf688] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonBase.GetSelected
	// bool GetSelected();                                                                                                      // [0x361aa4c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonBase.GetLocked
	// bool GetLocked();                                                                                                        // [0x77bef34] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonBase.GetIsFocusable
	// bool GetIsFocusable();                                                                                                   // [0x77beedc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonBase.GetInputAction
	// bool GetInputAction(FDataTableRowHandle& InputActionRow);                                                                // [0x33ae238] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonBase.GetEnhancedInputAction
	// class UInputAction* GetEnhancedInputAction();                                                                            // [0x77bed04] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonBase.GetCurrentTextStyleClass
	// class UClass* GetCurrentTextStyleClass();                                                                                // [0x1db3808] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonBase.GetCurrentTextStyle
	// class UCommonTextStyle* GetCurrentTextStyle();                                                                           // [0x77beb60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonBase.GetCurrentCustomPadding
	// void GetCurrentCustomPadding(FMargin& OutCustomPadding);                                                                 // [0x77beac0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonBase.GetCurrentButtonPadding
	// void GetCurrentButtonPadding(FMargin& OutButtonPadding);                                                                 // [0x77bea20] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonBase.GetConvertInputActionToHold
	// bool GetConvertInputActionToHold();                                                                                      // [0x77be9f8] Native|Protected     
	// Function /Script/CommonUI.CommonButtonBase.DisableButtonWithReason
	// void DisableButtonWithReason(FText& DisabledReason);                                                                     // [0x77be478] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.ClearSelection
	// void ClearSelection();                                                                                                   // [0x77be3bc] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.BP_OnUnhovered
	// void BP_OnUnhovered();                                                                                                   // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonButtonBase.BP_OnSelected
	// void BP_OnSelected();                                                                                                    // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonButtonBase.BP_OnReleased
	// void BP_OnReleased();                                                                                                    // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonButtonBase.BP_OnPressed
	// void BP_OnPressed();                                                                                                     // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonButtonBase.BP_OnLockedChanged
	// void BP_OnLockedChanged(bool bIsLocked);                                                                                 // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonButtonBase.BP_OnLockDoubleClicked
	// void BP_OnLockDoubleClicked();                                                                                           // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonButtonBase.BP_OnLockClicked
	// void BP_OnLockClicked();                                                                                                 // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonButtonBase.BP_OnInputMethodChanged
	// void BP_OnInputMethodChanged(ECommonInputType CurrentInputType);                                                         // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonButtonBase.BP_OnInputActionTriggered
	// void BP_OnInputActionTriggered();                                                                                        // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonButtonBase.BP_OnHovered
	// void BP_OnHovered();                                                                                                     // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonButtonBase.BP_OnFocusReceived
	// void BP_OnFocusReceived();                                                                                               // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonButtonBase.BP_OnFocusLost
	// void BP_OnFocusLost();                                                                                                   // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonButtonBase.BP_OnEnabled
	// void BP_OnEnabled();                                                                                                     // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonButtonBase.BP_OnDoubleClicked
	// void BP_OnDoubleClicked();                                                                                               // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonButtonBase.BP_OnDisabled
	// void BP_OnDisabled();                                                                                                    // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonButtonBase.BP_OnDeselected
	// void BP_OnDeselected();                                                                                                  // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonButtonBase.BP_OnClicked
	// void BP_OnClicked();                                                                                                     // [0x1340978] Event|Protected|BlueprintEvent 
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
	// bool OnCustomNavigationEvent__DelegateSignature(EUINavigation NavigationType);                                           // [0x1340978] Public|Delegate      
};

/// Class /Script/CommonUI.CommonTextBlock
/// Size: 0x0030 (0x000340 - 0x000370)
class UCommonTextBlock : public UTextBlock
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 880;

public:
	DMember(float)                                     MobileFontSizeMultiplier                                    OFFSET(get<float>, {0x338, 4, 0, 0})
	CMember(class UClass*)                             style                                                       OFFSET(get<T>, {0x340, 8, 0, 0})
	CMember(class UClass*)                             ScrollStyle                                                 OFFSET(get<T>, {0x348, 8, 0, 0})
	DMember(bool)                                      bIsScrollingEnabled                                         OFFSET(get<bool>, {0x350, 1, 0, 0})
	DMember(bool)                                      bDisplayAllCaps                                             OFFSET(get<bool>, {0x351, 1, 0, 0})
	DMember(bool)                                      bAutoCollapseWithEmptyText                                  OFFSET(get<bool>, {0x352, 1, 0, 0})


	/// Functions
	// Function /Script/CommonUI.CommonTextBlock.SetWrapTextWidth
	// void SetWrapTextWidth(int32_t InWrapTextAt);                                                                             // [0x3870a94] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonTextBlock.SetTextCase
	// void SetTextCase(bool bUseAllCaps);                                                                                      // [0x2f002e8] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonTextBlock.SetStyle
	// void SetStyle(class UClass* InStyle);                                                                                    // [0x1db385c] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonTextBlock.SetScrollingEnabled
	// void SetScrollingEnabled(bool bInIsScrollingEnabled);                                                                    // [0x38da7cc] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonTextBlock.SetMobileFontSizeMultiplier
	// void SetMobileFontSizeMultiplier(float InMobileFontSizeMultiplier);                                                      // [0x2fd98f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonTextBlock.SetMargin
	// void SetMargin(FMargin& InMargin);                                                                                       // [0x77c1bb4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CommonUI.CommonTextBlock.SetLineHeightPercentage
	// void SetLineHeightPercentage(float InLineHeightPercentage);                                                              // [0x388b3b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonTextBlock.SetApplyLineHeightToBottomLine
	// void SetApplyLineHeightToBottomLine(bool InApplyLineHeightToBottomLine);                                                 // [0x77c09d8] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonTextBlock.ResetScrollState
	// void ResetScrollState();                                                                                                 // [0x77c06e4] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonTextBlock.GetMobileFontSizeMultiplier
	// float GetMobileFontSizeMultiplier();                                                                                     // [0x77beffc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonTextBlock.GetMargin
	// FMargin GetMargin();                                                                                                     // [0x77bef50] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/CommonUI.CommonDateTimeTextBlock
/// Size: 0x0060 (0x000370 - 0x0003D0)
class UCommonDateTimeTextBlock : public UCommonTextBlock
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 976;

public:
	SMember(FText)                                     CustomTimespanFormat                                        OFFSET(getStruct<T>, {0x368, 16, 0, 0})
	DMember(bool)                                      bCustomTimespanLeadingZeros                                 OFFSET(get<bool>, {0x378, 1, 0, 0})


	/// Functions
	// Function /Script/CommonUI.CommonDateTimeTextBlock.SetTimespanValue
	// void SetTimespanValue(FTimespan InTimespan);                                                                             // [0x77c27e0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/CommonUI.CommonDateTimeTextBlock.SetDateTimeValue
	// void SetDateTimeValue(FDateTime InDateTime, bool bShowAsCountdown, float InRefreshDelay);                                // [0x77c0ee0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/CommonUI.CommonDateTimeTextBlock.SetCountDownCompletionText
	// void SetCountDownCompletionText(FText InCompletionText);                                                                 // [0x77c0e44] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonDateTimeTextBlock.GetDateTime
	// FDateTime GetDateTime();                                                                                                 // [0x2f371c8] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
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
/// Size: 0x0100 (0x0002A0 - 0x0003A0)
class UCommonLazyImage : public UImage
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 928;

public:
	SMember(FSlateBrush)                               LoadingBackgroundBrush                                      OFFSET(getStruct<T>, {0x2A0, 192, 0, 0})
	SMember(FName)                                     MaterialTextureParamName                                    OFFSET(getStruct<T>, {0x360, 4, 0, 0})
	SMember(FMulticastInlineDelegate)                  BP_OnLoadingStateChanged                                    OFFSET(getStruct<T>, {0x368, 16, 0, 0})


	/// Functions
	// Function /Script/CommonUI.CommonLazyImage.SetMaterialTextureParamName
	// void SetMaterialTextureParamName(FName TextureParamName);                                                                // [0x386377c] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonLazyImage.SetBrushFromLazyTexture
	// void SetBrushFromLazyTexture(TWeakObjectPtr<UTexture2D*>& LazyTexture, bool bMatchSize);                                 // [0x250a41c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CommonUI.CommonLazyImage.SetBrushFromLazyMaterial
	// void SetBrushFromLazyMaterial(TWeakObjectPtr<UMaterialInterface*>& LazyMaterial);                                        // [0x77c0c88] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CommonUI.CommonLazyImage.SetBrushFromLazyDisplayAsset
	// void SetBrushFromLazyDisplayAsset(TWeakObjectPtr<UObject*>& LazyObject, bool bMatchTextureSize);                         // [0x77c0b5c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CommonUI.CommonLazyImage.IsLoading
	// bool IsLoading();                                                                                                        // [0x77bfe84] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/CommonUI.CommonLazyWidget
/// Size: 0x0140 (0x000170 - 0x0002B0)
class UCommonLazyWidget : public UWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 688;

public:
	SMember(FSlateBrush)                               LoadingBackgroundBrush                                      OFFSET(getStruct<T>, {0x170, 192, 0, 0})
	CMember(class UUserWidget*)                        Content                                                     OFFSET(get<T>, {0x230, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  BP_OnLoadingStateChanged                                    OFFSET(getStruct<T>, {0x260, 16, 0, 0})


	/// Functions
	// Function /Script/CommonUI.CommonLazyWidget.SetLazyContent
	// void SetLazyContent(TWeakObjectPtr<UClass*> SoftWidget);                                                                 // [0x77c17ac] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonLazyWidget.IsLoading
	// bool IsLoading();                                                                                                        // [0x77bfeb4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonLazyWidget.GetContent
	// class UUserWidget* GetContent();                                                                                         // [0x6853b9c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
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
	// void SetEntrySpacing(float InEntrySpacing);                                                                              // [0x77c10ec] Final|Native|Public|BlueprintCallable 
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
	// void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);                                          // [0x77c2a80] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.LoadGuardSlot.SetPadding
	// void SetPadding(FMargin InPadding);                                                                                      // [0x77c1d48] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.LoadGuardSlot.SetHorizontalAlignment
	// void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);                                    // [0x77c11fc] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/CommonUI.CommonLoadGuard
/// Size: 0x0148 (0x000188 - 0x0002D0)
class UCommonLoadGuard : public UContentWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 720;

public:
	SMember(FSlateBrush)                               LoadingBackgroundBrush                                      OFFSET(getStruct<T>, {0x190, 192, 0, 0})
	CMember(TEnumAsByte<EHorizontalAlignment>)         ThrobberAlignment                                           OFFSET(get<T>, {0x250, 1, 0, 0})
	SMember(FMargin)                                   ThrobberPadding                                             OFFSET(getStruct<T>, {0x254, 16, 0, 0})
	SMember(FText)                                     LoadingText                                                 OFFSET(getStruct<T>, {0x268, 16, 0, 0})
	CMember(class UClass*)                             TextStyle                                                   OFFSET(get<T>, {0x278, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  BP_OnLoadingStateChanged                                    OFFSET(getStruct<T>, {0x280, 16, 0, 0})
	SMember(FSoftObjectPath)                           SpinnerMaterialPath                                         OFFSET(getStruct<T>, {0x290, 24, 0, 0})


	/// Functions
	// Function /Script/CommonUI.CommonLoadGuard.SetLoadingText
	// void SetLoadingText(FText& InLoadingText);                                                                               // [0x77c19a4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CommonUI.CommonLoadGuard.SetIsLoading
	// void SetIsLoading(bool bInIsLoading);                                                                                    // [0x77c1568] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonLoadGuard.OnAssetLoaded__DelegateSignature
	// void OnAssetLoaded__DelegateSignature(class UObject* Object);                                                            // [0x1340978] Public|Delegate      
	// Function /Script/CommonUI.CommonLoadGuard.IsLoading
	// bool IsLoading();                                                                                                        // [0x77bfee4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonLoadGuard.BP_GuardAndLoadAsset
	// void BP_GuardAndLoadAsset(TWeakObjectPtr<UObject*>& InLazyAsset, FDelegateProperty& OnAssetLoaded);                      // [0x77be05c] Final|Native|Private|HasOutParms|BlueprintCallable 
};

/// Class /Script/CommonUI.CommonNumericTextBlock
/// Size: 0x00A0 (0x000370 - 0x000410)
class UCommonNumericTextBlock : public UCommonTextBlock
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1040;

public:
	SMember(FMulticastInlineDelegate)                  OnInterpolationStartedEvent                                 OFFSET(getStruct<T>, {0x368, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnInterpolationUpdatedEvent                                 OFFSET(getStruct<T>, {0x378, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnOutroEvent                                                OFFSET(getStruct<T>, {0x388, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnInterpolationEndedEvent                                   OFFSET(getStruct<T>, {0x398, 16, 0, 0})
	DMember(float)                                     CurrentNumericValue                                         OFFSET(get<float>, {0x3A8, 4, 0, 0})
	CMember(ECommonNumericType)                        NumericType                                                 OFFSET(get<T>, {0x3AC, 1, 0, 0})
	SMember(FCommonNumberFormattingOptions)            FormattingSpecification                                     OFFSET(getStruct<T>, {0x3B0, 20, 0, 0})
	DMember(float)                                     EaseOutInterpolationExponent                                OFFSET(get<float>, {0x3C4, 4, 0, 0})
	DMember(float)                                     InterpolationUpdateInterval                                 OFFSET(get<float>, {0x3C8, 4, 0, 0})
	DMember(float)                                     PostInterpolationShrinkDuration                             OFFSET(get<float>, {0x3CC, 4, 0, 0})
	DMember(bool)                                      PerformSizeInterpolation                                    OFFSET(get<bool>, {0x3D0, 1, 0, 0})
	DMember(bool)                                      IsPercentage                                                OFFSET(get<bool>, {0x3D1, 1, 0, 0})


	/// Functions
	// Function /Script/CommonUI.CommonNumericTextBlock.SetNumericType
	// void SetNumericType(ECommonNumericType InNumericType);                                                                   // [0x77c1cc4] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonNumericTextBlock.SetCurrentValue
	// void SetCurrentValue(float NewValue);                                                                                    // [0x2058380] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonNumericTextBlock.OnOutro__DelegateSignature
	// void OnOutro__DelegateSignature(class UCommonNumericTextBlock* NumericTextBlock);                                        // [0x1340978] MulticastDelegate|Public|Delegate 
	// Function /Script/CommonUI.CommonNumericTextBlock.OnInterpolationUpdated__DelegateSignature
	// void OnInterpolationUpdated__DelegateSignature(class UCommonNumericTextBlock* NumericTextBlock, float LastValue, float NewValue); // [0x1340978] MulticastDelegate|Public|Delegate 
	// Function /Script/CommonUI.CommonNumericTextBlock.OnInterpolationStarted__DelegateSignature
	// void OnInterpolationStarted__DelegateSignature(class UCommonNumericTextBlock* NumericTextBlock);                         // [0x1340978] MulticastDelegate|Public|Delegate 
	// Function /Script/CommonUI.CommonNumericTextBlock.OnInterpolationEnded__DelegateSignature
	// void OnInterpolationEnded__DelegateSignature(class UCommonNumericTextBlock* NumericTextBlock, bool HadCompleted);        // [0x1340978] MulticastDelegate|Public|Delegate 
	// Function /Script/CommonUI.CommonNumericTextBlock.IsInterpolatingNumericValue
	// bool IsInterpolatingNumericValue();                                                                                      // [0x77bfe68] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonNumericTextBlock.InterpolateToValue
	// void InterpolateToValue(float TargetValue, float MaximumInterpolationDuration, float MinimumChangeRate, float OutroOffset); // [0x77bfcd4] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonNumericTextBlock.GetTargetValue
	// float GetTargetValue();                                                                                                  // [0x77bf7f4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
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
	// void OnReleaseToPool();                                                                                                  // [0x77c0394] Native|Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonPoolableWidgetInterface.OnAcquireFromPool
	// void OnAcquireFromPool();                                                                                                // [0x77c0170] Native|Event|Protected|BlueprintEvent 
};

/// Class /Script/CommonUI.CommonRichTextBlock
/// Size: 0x0040 (0x000830 - 0x000870)
class UCommonRichTextBlock : public URichTextBlock
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2160;

public:
	CMember(ERichTextInlineIconDisplayMode)            InlineIconDisplayMode                                       OFFSET(get<T>, {0x830, 1, 0, 0})
	DMember(bool)                                      bTintInlineIcon                                             OFFSET(get<bool>, {0x831, 1, 0, 0})
	CMember(class UClass*)                             DefaultTextStyleOverrideClass                               OFFSET(get<T>, {0x838, 8, 0, 0})
	DMember(float)                                     MobileTextBlockScale                                        OFFSET(get<float>, {0x840, 4, 0, 0})
	CMember(class UClass*)                             ScrollStyle                                                 OFFSET(get<T>, {0x848, 8, 0, 0})
	DMember(bool)                                      bIsScrollingEnabled                                         OFFSET(get<bool>, {0x850, 1, 0, 0})
	DMember(bool)                                      bDisplayAllCaps                                             OFFSET(get<bool>, {0x851, 1, 0, 0})
	DMember(bool)                                      bAutoCollapseWithEmptyText                                  OFFSET(get<bool>, {0x852, 1, 0, 0})


	/// Functions
	// Function /Script/CommonUI.CommonRichTextBlock.SetScrollingEnabled
	// void SetScrollingEnabled(bool bInIsScrollingEnabled);                                                                    // [0x3e2db94] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/CommonUI.CommonRotator
/// Size: 0x0070 (0x001480 - 0x0014F0)
class UCommonRotator : public UCommonButtonBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5360;

public:
	SMember(FMulticastInlineDelegate)                  OnRotatedWithDirection                                      OFFSET(getStruct<T>, {0x1490, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnRotated                                                   OFFSET(getStruct<T>, {0x14A0, 16, 0, 0})
	CMember(class UCommonTextBlock*)                   MyText                                                      OFFSET(get<T>, {0x14C8, 8, 0, 0})


	/// Functions
	// Function /Script/CommonUI.CommonRotator.ShiftTextRight
	// void ShiftTextRight();                                                                                                   // [0x77c2b14] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonRotator.ShiftTextLeft
	// void ShiftTextLeft();                                                                                                    // [0x77c2b00] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonRotator.SetSelectedItem
	// void SetSelectedItem(int32_t InValue);                                                                                   // [0x31f6d8c] Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonRotator.PopulateTextLabels
	// void PopulateTextLabels(TArray<FText> Labels);                                                                           // [0x2c75bdc] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonRotator.GetSelectedText
	// FText GetSelectedText();                                                                                                 // [0x77bf510] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonRotator.GetSelectedIndex
	// int32_t GetSelectedIndex();                                                                                              // [0x77bf450] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonRotator.BP_OnOptionsPopulated
	// void BP_OnOptionsPopulated(int32_t Count);                                                                               // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonRotator.BP_OnOptionSelected
	// void BP_OnOptionSelected(int32_t Index);                                                                                 // [0x1340978] Event|Protected|BlueprintEvent 
};

/// Class /Script/CommonUI.CommonTabListWidgetBase
/// Size: 0x0178 (0x0002F0 - 0x000468)
class UCommonTabListWidgetBase : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1128;

public:
	SMember(FMulticastInlineDelegate)                  OnTabSelected                                               OFFSET(getStruct<T>, {0x2F0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnTabButtonCreation                                         OFFSET(getStruct<T>, {0x300, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnTabButtonRemoval                                          OFFSET(getStruct<T>, {0x310, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnTabListRebuilt                                            OFFSET(getStruct<T>, {0x320, 16, 0, 0})
	SMember(FDataTableRowHandle)                       NextTabInputActionData                                      OFFSET(getStruct<T>, {0x330, 16, 0, 0})
	SMember(FDataTableRowHandle)                       PreviousTabInputActionData                                  OFFSET(getStruct<T>, {0x340, 16, 0, 0})
	CMember(class UInputAction*)                       NextTabEnhancedInputAction                                  OFFSET(get<T>, {0x350, 8, 0, 0})
	CMember(class UInputAction*)                       PreviousTabEnhancedInputAction                              OFFSET(get<T>, {0x358, 8, 0, 0})
	DMember(bool)                                      bAutoListenForInput                                         OFFSET(get<bool>, {0x360, 1, 0, 0})
	DMember(bool)                                      bDeferRebuildingTabList                                     OFFSET(get<bool>, {0x361, 1, 0, 0})
	CMember(TWeakObjectPtr<UCommonAnimatedSwitcher*>)  LinkedSwitcher                                              OFFSET(get<T>, {0x364, 8, 0, 0})
	CMember(class UCommonButtonGroupBase*)             TabButtonGroup                                              OFFSET(get<T>, {0x370, 8, 0, 0})
	CMember(TMap<FName, FCommonRegisteredTabInfo>)     RegisteredTabsByID                                          OFFSET(get<T>, {0x380, 80, 0, 0})
	SMember(FUserWidgetPool)                           TabButtonWidgetPool                                         OFFSET(getStruct<T>, {0x3D0, 136, 0, 0})


	/// Functions
	// Function /Script/CommonUI.CommonTabListWidgetBase.SetTabVisibility
	// void SetTabVisibility(FName TabNameID, ESlateVisibility NewVisibility);                                                  // [0x77c25a8] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonTabListWidgetBase.SetTabInteractionEnabled
	// void SetTabInteractionEnabled(FName TabNameID, bool bEnable);                                                            // [0x77c2370] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonTabListWidgetBase.SetTabEnabled
	// void SetTabEnabled(FName TabNameID, bool bEnable);                                                                       // [0x268cf9c] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonTabListWidgetBase.SetListeningForInput
	// void SetListeningForInput(bool bShouldListen);                                                                           // [0x77c1920] Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonTabListWidgetBase.SetLinkedSwitcher
	// void SetLinkedSwitcher(class UCommonAnimatedSwitcher* CommonSwitcher);                                                   // [0x3e8c7b4] Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonTabListWidgetBase.SelectTabByID
	// bool SelectTabByID(FName TabNameID, bool bSuppressClickFeedback);                                                        // [0x268b5a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonTabListWidgetBase.RemoveTab
	// bool RemoveTab(FName TabNameID);                                                                                         // [0x77c0438] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonTabListWidgetBase.RemoveAllTabs
	// void RemoveAllTabs();                                                                                                    // [0x299254c] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonTabListWidgetBase.RegisterTab
	// bool RegisterTab(FName TabNameID, class UClass* ButtonWidgetType, class UWidget* ContentWidget, int32_t TabIndex);       // [0x29943a8] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonTabListWidgetBase.OnTabSelected__DelegateSignature
	// void OnTabSelected__DelegateSignature(FName TabID);                                                                      // [0x1340978] MulticastDelegate|Public|Delegate 
	// Function /Script/CommonUI.CommonTabListWidgetBase.OnTabListRebuilt__DelegateSignature
	// void OnTabListRebuilt__DelegateSignature();                                                                              // [0x1340978] MulticastDelegate|Public|Delegate 
	// Function /Script/CommonUI.CommonTabListWidgetBase.OnTabButtonRemoval__DelegateSignature
	// void OnTabButtonRemoval__DelegateSignature(FName TabID, class UCommonButtonBase* TabButton);                             // [0x1340978] MulticastDelegate|Public|Delegate 
	// Function /Script/CommonUI.CommonTabListWidgetBase.OnTabButtonCreation__DelegateSignature
	// void OnTabButtonCreation__DelegateSignature(FName TabID, class UCommonButtonBase* TabButton);                            // [0x1340978] MulticastDelegate|Public|Delegate 
	// Function /Script/CommonUI.CommonTabListWidgetBase.HandleTabRemoval
	// void HandleTabRemoval(FName TabNameID, class UCommonButtonBase* TabButton);                                              // [0x3709754] Native|Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonTabListWidgetBase.HandleTabCreation
	// void HandleTabCreation(FName TabNameID, class UCommonButtonBase* TabButton);                                             // [0x2143c04] Native|Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonTabListWidgetBase.HandleTabButtonSelected
	// void HandleTabButtonSelected(class UCommonButtonBase* SelectedTabButton, int32_t ButtonIndex);                           // [0x268c140] Final|Native|Protected 
	// Function /Script/CommonUI.CommonTabListWidgetBase.HandlePreviousTabInputAction
	// void HandlePreviousTabInputAction(bool& bPassThrough);                                                                   // [0x77bfb2c] Final|Native|Protected|HasOutParms 
	// Function /Script/CommonUI.CommonTabListWidgetBase.HandlePreLinkedSwitcherChanged_BP
	// void HandlePreLinkedSwitcherChanged_BP();                                                                                // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonTabListWidgetBase.HandlePostLinkedSwitcherChanged_BP
	// void HandlePostLinkedSwitcherChanged_BP();                                                                               // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonTabListWidgetBase.HandleNextTabInputAction
	// void HandleNextTabInputAction(bool& bPassThrough);                                                                       // [0x77bf9ec] Final|Native|Protected|HasOutParms 
	// Function /Script/CommonUI.CommonTabListWidgetBase.GetTabIdAtIndex
	// FName GetTabIdAtIndex(int32_t Index);                                                                                    // [0x77bf770] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonTabListWidgetBase.GetTabCount
	// int32_t GetTabCount();                                                                                                   // [0x37054c4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonTabListWidgetBase.GetTabButtonBaseByID
	// class UCommonButtonBase* GetTabButtonBaseByID(FName TabNameID);                                                          // [0x3d121a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonTabListWidgetBase.GetSelectedTabId
	// FName GetSelectedTabId();                                                                                                // [0x268d47c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonTabListWidgetBase.GetLinkedSwitcher
	// class UCommonAnimatedSwitcher* GetLinkedSwitcher();                                                                      // [0x77bef10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonTabListWidgetBase.GetActiveTab
	// FName GetActiveTab();                                                                                                    // [0x3aaa518] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonTabListWidgetBase.DisableTabWithReason
	// void DisableTabWithReason(FName TabNameID, FText& Reason);                                                               // [0x77be514] Final|Native|Public|HasOutParms|BlueprintCallable 
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
	// void GetStrikeBrush(FSlateBrush& OutStrikeBrush);                                                                        // [0x77bf6a4] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonTextStyle.GetShadowOffset
	// void GetShadowOffset(FVector2D& OutShadowOffset);                                                                        // [0x77bf5fc] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonTextStyle.GetShadowColor
	// void GetShadowColor(FLinearColor& OutColor);                                                                             // [0x77bf570] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonTextStyle.GetMargin
	// void GetMargin(FMargin& OutMargin);                                                                                      // [0x77bef6c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonTextStyle.GetLineHeightPercentage
	// float GetLineHeightPercentage();                                                                                         // [0x77beef8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonTextStyle.GetFont
	// void GetFont(FSlateFontInfo& OutFont);                                                                                   // [0x77bee20] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonTextStyle.GetColor
	// void GetColor(FLinearColor& OutColor);                                                                                   // [0x77be96c] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonTextStyle.GetApplyLineHeightToBottomLine
	// bool GetApplyLineHeightToBottomLine();                                                                                   // [0x77be794] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
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
	// class UWidget* FindParentWidgetOfType(class UWidget* StartingWidget, class UClass* Type);                                // [0x3a6b89c] Final|Native|Static|Public|BlueprintCallable 
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
	// FSlateBrush GetInputActionButtonIcon(FDataTableRowHandle& InputActionRowHandle, ECommonInputType InputType, FName& GamepadName); // [0x33ae2bc] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonUISubsystemBase.GetEnhancedInputActionButtonIcon
	// FSlateBrush GetEnhancedInputActionButtonIcon(class UInputAction* InputAction, class ULocalPlayer* LocalPlayer);          // [0x77bed1c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
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
/// Size: 0x0150 (0x000170 - 0x0002C0)
class UCommonVideoPlayer : public UWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 704;

public:
	CMember(class UMediaSource*)                       Video                                                       OFFSET(get<T>, {0x170, 8, 0, 0})
	DMember(bool)                                      bMatchSize                                                  OFFSET(get<bool>, {0x178, 1, 0, 0})
	CMember(class UMediaPlayer*)                       MediaPlayer                                                 OFFSET(get<T>, {0x180, 8, 0, 0})
	CMember(class UMediaTexture*)                      MediaTexture                                                OFFSET(get<T>, {0x188, 8, 0, 0})
	CMember(class UMaterial*)                          VideoMaterial                                               OFFSET(get<T>, {0x190, 8, 0, 0})
	CMember(class UMediaSoundComponent*)               SoundComponent                                              OFFSET(get<T>, {0x198, 8, 0, 0})
	SMember(FSlateBrush)                               VideoBrush                                                  OFFSET(getStruct<T>, {0x1A0, 192, 0, 0})
};

/// Class /Script/CommonUI.CommonVisibilitySwitcher
/// Size: 0x0028 (0x000198 - 0x0001C0)
class UCommonVisibilitySwitcher : public UOverlay
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 448;

public:
	CMember(ESlateVisibility)                          ShownVisibility                                             OFFSET(get<T>, {0x198, 1, 0, 0})
	DMember(int32_t)                                   ActiveWidgetIndex                                           OFFSET(get<int32_t>, {0x19C, 4, 0, 0})
	DMember(bool)                                      bAutoActivateSlot                                           OFFSET(get<bool>, {0x1A0, 1, 0, 0})
	DMember(bool)                                      bActivateFirstSlotOnAdding                                  OFFSET(get<bool>, {0x1A1, 1, 0, 0})


	/// Functions
	// Function /Script/CommonUI.CommonVisibilitySwitcher.SetActiveWidgetIndex
	// void SetActiveWidgetIndex(int32_t Index);                                                                                // [0x3632914] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonVisibilitySwitcher.SetActiveWidget
	// void SetActiveWidget(class UWidget* Widget);                                                                             // [0x34b5e04] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonVisibilitySwitcher.IsCurrentlySwitching
	// bool IsCurrentlySwitching();                                                                                             // [0x77bfe2c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonVisibilitySwitcher.IncrementActiveWidgetIndex
	// void IncrementActiveWidgetIndex(bool bAllowWrapping);                                                                    // [0x77bfc54] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonVisibilitySwitcher.GetActiveWidgetIndex
	// int32_t GetActiveWidgetIndex();                                                                                          // [0x3932438] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonVisibilitySwitcher.GetActiveWidget
	// class UWidget* GetActiveWidget();                                                                                        // [0x3e31b04] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonVisibilitySwitcher.DecrementActiveWidgetIndex
	// void DecrementActiveWidgetIndex(bool bAllowWrapping);                                                                    // [0x77be3f8] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonVisibilitySwitcher.DeactivateVisibleSlot
	// void DeactivateVisibleSlot();                                                                                            // [0x77be3e4] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonVisibilitySwitcher.ActivateVisibleSlot
	// void ActivateVisibleSlot();                                                                                              // [0x77bdeec] Final|Native|Public|BlueprintCallable 
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
	// TArray<FName> GetRegisteredPlatforms();                                                                                  // [0x77bf274] Final|Native|Static|Protected 
};

/// Class /Script/CommonUI.CommonVisualAttachment
/// Size: 0x0020 (0x0001C0 - 0x0001E0)
class UCommonVisualAttachment : public USizeBox
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 480;

public:
	SMember(FVector2D)                                 ContentAnchor                                               OFFSET(getStruct<T>, {0x1C0, 16, 0, 0})
};

/// Class /Script/CommonUI.CommonWidgetCarousel
/// Size: 0x0048 (0x000188 - 0x0001D0)
class UCommonWidgetCarousel : public UPanelWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 464;

public:
	DMember(int32_t)                                   ActiveWidgetIndex                                           OFFSET(get<int32_t>, {0x188, 4, 0, 0})
	DMember(float)                                     MoveSpeed                                                   OFFSET(get<float>, {0x18C, 4, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnCurrentPageIndexChanged                                   OFFSET(getStruct<T>, {0x190, 16, 0, 0})


	/// Functions
	// Function /Script/CommonUI.CommonWidgetCarousel.SetMoveSpeed
	// void SetMoveSpeed(float InMoveSpeed);                                                                                    // [0x77c1c44] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonWidgetCarousel.SetActiveWidgetIndex
	// void SetActiveWidgetIndex(int32_t Index);                                                                                // [0x77c0954] Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonWidgetCarousel.SetActiveWidget
	// void SetActiveWidget(class UWidget* Widget);                                                                             // [0x77c08d0] Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonWidgetCarousel.PreviousPage
	// void PreviousPage();                                                                                                     // [0x77c03a8] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonWidgetCarousel.NextPage
	// void NextPage();                                                                                                         // [0x77c015c] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonWidgetCarousel.GetWidgetAtIndex
	// class UWidget* GetWidgetAtIndex(int32_t Index);                                                                          // [0x77bf82c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonWidgetCarousel.GetMoveSpeed
	// float GetMoveSpeed();                                                                                                    // [0x77bf014] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonWidgetCarousel.GetActiveWidgetIndex
	// int32_t GetActiveWidgetIndex();                                                                                          // [0x77be774] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonWidgetCarousel.EndAutoScrolling
	// void EndAutoScrolling();                                                                                                 // [0x77be6ac] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonWidgetCarousel.BeginAutoScrolling
	// void BeginAutoScrolling(float ScrollInterval);                                                                           // [0x77be170] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/CommonUI.CommonWidgetCarouselNavBar
/// Size: 0x0048 (0x000170 - 0x0001B8)
class UCommonWidgetCarouselNavBar : public UWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 440;

public:
	CMember(class UClass*)                             ButtonWidgetType                                            OFFSET(get<T>, {0x170, 8, 0, 0})
	SMember(FMargin)                                   ButtonPadding                                               OFFSET(getStruct<T>, {0x178, 16, 0, 0})
	CMember(class UCommonWidgetCarousel*)              LinkedCarousel                                              OFFSET(get<T>, {0x198, 8, 0, 0})
	CMember(class UCommonButtonGroupBase*)             ButtonGroup                                                 OFFSET(get<T>, {0x1A0, 8, 0, 0})
	CMember(TArray<class UCommonButtonBase*>)          Buttons                                                     OFFSET(get<T>, {0x1A8, 16, 0, 0})


	/// Functions
	// Function /Script/CommonUI.CommonWidgetCarouselNavBar.SetLinkedCarousel
	// void SetLinkedCarousel(class UCommonWidgetCarousel* CommonCarousel);                                                     // [0x77c18a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonWidgetCarouselNavBar.HandlePageChanged
	// void HandlePageChanged(class UCommonWidgetCarousel* CommonCarousel, int32_t PageIndex);                                  // [0x77bfa68] Final|Native|Protected 
	// Function /Script/CommonUI.CommonWidgetCarouselNavBar.HandleButtonClicked
	// void HandleButtonClicked(class UCommonButtonBase* AssociatedButton, int32_t ButtonIndex);                                // [0x77bf8e8] Final|Native|Protected 
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
	// void RemoveWidget(class UWidget* InWidget);                                                                              // [0x77c0608] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonWidgetGroupBase.RemoveAll
	// void RemoveAll();                                                                                                        // [0x329b518] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonWidgetGroupBase.AddWidgets
	// void AddWidgets(TArray<UWidget*>& Widgets);                                                                              // [0x77bdf00] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CommonUI.CommonWidgetGroupBase.AddWidget
	// void AddWidget(class UWidget* InWidget);                                                                                 // [0x3d44544] Final|Native|Public|BlueprintCallable 
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
	// void SetSelectionRequired(bool bRequireSelection);                                                                       // [0x77c215c] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonGroupBase.SelectPreviousButton
	// void SelectPreviousButton(bool bAllowWrap);                                                                              // [0x77c0850] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonGroupBase.SelectNextButton
	// void SelectNextButton(bool bAllowWrap);                                                                                  // [0x77c07d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonGroupBase.SelectButtonAtIndex
	// void SelectButtonAtIndex(int32_t ButtonIndex, bool bAllowSound);                                                         // [0x77c070c] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonGroupBase.OnSelectionStateChangedBase
	// void OnSelectionStateChangedBase(class UCommonButtonBase* BaseButton, bool bIsSelected);                                 // [0x35718ec] Native|Protected     
	// Function /Script/CommonUI.CommonButtonGroupBase.OnHandleButtonBaseDoubleClicked
	// void OnHandleButtonBaseDoubleClicked(class UCommonButtonBase* BaseButton);                                               // [0x77c028c] Native|Protected     
	// Function /Script/CommonUI.CommonButtonGroupBase.OnHandleButtonBaseClicked
	// void OnHandleButtonBaseClicked(class UCommonButtonBase* BaseButton);                                                     // [0x67ee10c] Native|Protected     
	// Function /Script/CommonUI.CommonButtonGroupBase.OnButtonBaseUnhovered
	// void OnButtonBaseUnhovered(class UCommonButtonBase* BaseButton);                                                         // [0x77c0208] Native|Protected     
	// Function /Script/CommonUI.CommonButtonGroupBase.OnButtonBaseHovered
	// void OnButtonBaseHovered(class UCommonButtonBase* BaseButton);                                                           // [0x77c0184] Native|Protected     
	// Function /Script/CommonUI.CommonButtonGroupBase.HasAnyButtons
	// bool HasAnyButtons();                                                                                                    // [0x77bfc38] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonGroupBase.GetSelectedButtonIndex
	// int32_t GetSelectedButtonIndex();                                                                                        // [0x77bf36c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonGroupBase.GetSelectedButtonBase
	// class UCommonButtonBase* GetSelectedButtonBase();                                                                        // [0x77bf348] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonGroupBase.GetHoveredButtonIndex
	// int32_t GetHoveredButtonIndex();                                                                                         // [0x77beec4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonGroupBase.GetButtonCount
	// int32_t GetButtonCount();                                                                                                // [0x664fae8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonGroupBase.GetButtonBaseAtIndex
	// class UCommonButtonBase* GetButtonBaseAtIndex(int32_t Index);                                                            // [0x77be850] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonGroupBase.FindButtonIndex
	// int32_t FindButtonIndex(class UCommonButtonBase* ButtonToFind);                                                          // [0x77be6c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonGroupBase.DeselectAll
	// void DeselectAll();                                                                                                      // [0x42c8b84] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/CommonUI.CommonBoundActionBar
/// Size: 0x0030 (0x000250 - 0x000280)
class UCommonBoundActionBar : public UDynamicEntryBoxBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 640;

public:
	CMember(class UClass*)                             ActionButtonClass                                           OFFSET(get<T>, {0x258, 8, 0, 0})
	DMember(bool)                                      bDisplayOwningPlayerActionsOnly                             OFFSET(get<bool>, {0x260, 1, 0, 0})
	DMember(bool)                                      bIgnoreDuplicateActions                                     OFFSET(get<bool>, {0x261, 1, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnActionBarUpdated                                          OFFSET(getStruct<T>, {0x268, 16, 0, 0})


	/// Functions
	// Function /Script/CommonUI.CommonBoundActionBar.SetDisplayOwningPlayerActionsOnly
	// void SetDisplayOwningPlayerActionsOnly(bool bShouldOnlyDisplayOwningPlayerActions);                                      // [0x34d1e80] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/CommonUI.CommonBoundActionButton
/// Size: 0x0020 (0x001480 - 0x0014A0)
class UCommonBoundActionButton : public UCommonButtonBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5280;

public:
	CMember(class UCommonTextBlock*)                   Text_ActionName                                             OFFSET(get<T>, {0x1488, 8, 0, 0})


	/// Functions
	// Function /Script/CommonUI.CommonBoundActionButton.OnUpdateInputAction
	// void OnUpdateInputAction();                                                                                              // [0x1340978] Event|Protected|BlueprintEvent 
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
/// Size: 0x0128 (0x000170 - 0x000298)
class UCommonActivatableWidgetContainerBase : public UWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 664;

public:
	CMember(ECommonSwitcherTransition)                 TransitionType                                              OFFSET(get<T>, {0x188, 1, 0, 0})
	CMember(ETransitionCurve)                          TransitionCurveType                                         OFFSET(get<T>, {0x189, 1, 0, 0})
	DMember(float)                                     TransitionDuration                                          OFFSET(get<float>, {0x18C, 4, 0, 0})
	CMember(ECommonSwitcherTransitionFallbackStrategy) TransitionFallbackStrategy                                  OFFSET(get<T>, {0x190, 1, 0, 0})
	CMember(TArray<class UCommonActivatableWidget*>)   WidgetList                                                  OFFSET(get<T>, {0x198, 16, 0, 0})
	CMember(class UCommonActivatableWidget*)           DisplayedWidget                                             OFFSET(get<T>, {0x1A8, 8, 0, 0})
	SMember(FUserWidgetPool)                           GeneratedWidgetsPool                                        OFFSET(getStruct<T>, {0x1B0, 136, 0, 0})


	/// Functions
	// Function /Script/CommonUI.CommonActivatableWidgetContainerBase.SetTransitionDuration
	// void SetTransitionDuration(float duration);                                                                              // [0x77c28e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonActivatableWidgetContainerBase.RemoveWidget
	// void RemoveWidget(class UCommonActivatableWidget* WidgetToRemove);                                                       // [0x77c058c] Final|Native|Private|BlueprintCallable 
	// Function /Script/CommonUI.CommonActivatableWidgetContainerBase.GetTransitionDuration
	// float GetTransitionDuration();                                                                                           // [0x77bf814] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonActivatableWidgetContainerBase.GetActiveWidget
	// class UCommonActivatableWidget* GetActiveWidget();                                                                       // [0x77be750] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonActivatableWidgetContainerBase.ClearWidgets
	// void ClearWidgets();                                                                                                     // [0x77be3d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonActivatableWidgetContainerBase.BP_AddWidget
	// class UCommonActivatableWidget* BP_AddWidget(class UClass* ActivatableWidgetClass);                                      // [0x77bdf9c] Final|Native|Private|BlueprintCallable 
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
/// Size: 0x0040 (0x000008 - 0x000048)
class FRichTextIconData : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FText)                                     DisplayName                                                 OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	CMember(TWeakObjectPtr<UObject*>)                  ResourceObject                                              OFFSET(get<T>, {0x18, 32, 0, 0})
	SMember(FVector2D)                                 ImageSize                                                   OFFSET(getStruct<T>, {0x38, 16, 0, 0})
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
/// Size: 0x0348 (0x000008 - 0x000350)
class FCommonInputActionDataBase : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 848;

public:
	SMember(FText)                                     DisplayName                                                 OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	SMember(FText)                                     HoldDisplayName                                             OFFSET(getStruct<T>, {0x18, 16, 0, 0})
	DMember(int32_t)                                   NavBarPriority                                              OFFSET(get<int32_t>, {0x28, 4, 0, 0})
	SMember(FCommonInputTypeInfo)                      KeyboardInputTypeInfo                                       OFFSET(getStruct<T>, {0x30, 240, 0, 0})
	SMember(FCommonInputTypeInfo)                      DefaultGamepadInputTypeInfo                                 OFFSET(getStruct<T>, {0x120, 240, 0, 0})
	CMember(TMap<FName, FCommonInputTypeInfo>)         GamepadInputOverrides                                       OFFSET(get<T>, {0x210, 80, 0, 0})
	SMember(FCommonInputTypeInfo)                      TouchInputTypeInfo                                          OFFSET(getStruct<T>, {0x260, 240, 0, 0})
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
/// Size: 0x0028 (0x000000 - 0x000028)
class FUIInputAction : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FUIActionTag)                              ActionTag                                                   OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FText)                                     DefaultDisplayName                                          OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	CMember(TArray<FUIActionKeyMapping>)               KeyMappings                                                 OFFSET(get<T>, {0x18, 16, 0, 0})
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

/// Enum /Script/CommonUI.ECommonSwitcherTransitionFallbackStrategy
/// Size: 0x06
enum class ECommonSwitcherTransitionFallbackStrategy : uint8_t
{
	ECommonSwitcherTransitionFallbackStrategy__None                                  = 0,
	ECommonSwitcherTransitionFallbackStrategy__Previous                              = 1,
	ECommonSwitcherTransitionFallbackStrategy__Next                                  = 2,
	ECommonSwitcherTransitionFallbackStrategy__First                                 = 3,
	ECommonSwitcherTransitionFallbackStrategy__Last                                  = 4,
	ECommonSwitcherTransitionFallbackStrategy__ECommonSwitcherTransitionFallbackStrategy_MAX = 5
};

