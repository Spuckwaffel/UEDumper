
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
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

/// Class /Script/CommonUI.CommonBoundActionButtonInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UCommonBoundActionButtonInterface : public UInterface
{ 
public:
};

/// Class /Script/CommonUI.AnalogSlider
/// Size: 0x0020 (0x0006C0 - 0x0006E0)
class UAnalogSlider : public USlider
{ 
public:
	SDK_UNDEFINED(16,1846) /* FMulticastInlineDelegate */ __um(OnAnalogCapture);                                   // 0x06C0   (0x0010)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x06D0   (0x0010)  MISSED
};

/// Class /Script/CommonUI.CommonActionHandlerInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UCommonActionHandlerInterface : public UInterface
{ 
public:
};

/// Class /Script/CommonUI.CommonActionWidget
/// Size: 0x02E8 (0x000178 - 0x000460)
class UCommonActionWidget : public UWidget
{ 
public:
	SDK_UNDEFINED(16,1847) /* FMulticastInlineDelegate */ __um(OnInputMethodChanged);                              // 0x0178   (0x0010)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0188   (0x0008)  MISSED
	FSlateBrush                                        ProgressMaterialBrush;                                      // 0x0190   (0x00C0)  
	FName                                              ProgressMaterialParam;                                      // 0x0250   (0x0004)  
	unsigned char                                      UnknownData01_5[0xC];                                       // 0x0254   (0x000C)  MISSED
	FSlateBrush                                        IconRimBrush;                                               // 0x0260   (0x00C0)  
	TArray<FDataTableRowHandle>                        InputActions;                                               // 0x0320   (0x0010)  
	class UInputAction*                                EnhancedInputAction;                                        // 0x0330   (0x0008)  
	unsigned char                                      UnknownData02_5[0x8];                                       // 0x0338   (0x0008)  MISSED
	class UMaterialInstanceDynamic*                    ProgressDynamicMaterial;                                    // 0x0340   (0x0008)  
	unsigned char                                      UnknownData03_6[0x118];                                     // 0x0348   (0x0118)  MISSED


	/// Functions
	// Function /Script/CommonUI.CommonActionWidget.SetInputActions
	// void SetInputActions(TArray<FDataTableRowHandle> NewInputActions);                                                    // [0x727163c] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonActionWidget.SetInputAction
	// void SetInputAction(FDataTableRowHandle InputActionRow);                                                              // [0x360d668] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonActionWidget.SetIconRimBrush
	// void SetIconRimBrush(FSlateBrush InIconRimBrush);                                                                     // [0x72713c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonActionWidget.SetEnhancedInputAction
	// void SetEnhancedInputAction(class UInputAction* InInputAction);                                                       // [0x72711b8] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonActionWidget.OnInputMethodChanged__DelegateSignature
	// void OnInputMethodChanged__DelegateSignature(bool bUsingGamepad);                                                     // [0x18a39e4] MulticastDelegate|Public|Delegate 
	// Function /Script/CommonUI.CommonActionWidget.IsHeldAction
	// bool IsHeldAction();                                                                                                  // [0x2d931ec] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonActionWidget.GetIcon
	// FSlateBrush GetIcon();                                                                                                // [0x303743c] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonActionWidget.GetDisplayText
	// FText GetDisplayText();                                                                                               // [0x2f716bc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/CommonUI.CommonUserWidget
/// Size: 0x0028 (0x0002C0 - 0x0002E8)
class UCommonUserWidget : public UUserWidget
{ 
public:
	bool                                               bDisplayInActionBar;                                        // 0x02C0   (0x0001)  
	bool                                               bConsumePointerInput;                                       // 0x02C1   (0x0001)  
	unsigned char                                      UnknownData00_6[0x26];                                      // 0x02C2   (0x0026)  MISSED


	/// Functions
	// Function /Script/CommonUI.CommonUserWidget.UnregisterScrollRecipientExternal
	// void UnregisterScrollRecipientExternal(class UWidget* AnalogScrollRecipient);                                         // [0x7272a54] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonUserWidget.SetConsumePointerInput
	// void SetConsumePointerInput(bool bInConsumePointerInput);                                                             // [0x7270dbc] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonUserWidget.RegisterScrollRecipientExternal
	// void RegisterScrollRecipientExternal(class UWidget* AnalogScrollRecipient);                                           // [0x727047c] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/CommonUI.CommonActivatableWidget
/// Size: 0x0118 (0x0002E8 - 0x000400)
class UCommonActivatableWidget : public UCommonUserWidget
{ 
public:
	bool                                               bIsBackHandler;                                             // 0x02E8   (0x0001)  
	bool                                               bIsBackActionDisplayedInActionBar;                          // 0x02E9   (0x0001)  
	bool                                               bAutoActivate;                                              // 0x02EA   (0x0001)  
	bool                                               bSupportsActivationFocus;                                   // 0x02EB   (0x0001)  
	bool                                               bIsModal;                                                   // 0x02EC   (0x0001)  
	bool                                               bAutoRestoreFocus;                                          // 0x02ED   (0x0001)  
	bool                                               bOverrideActionDomain;                                      // 0x02EE   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x02EF   (0x0001)  MISSED
	class UInputMappingContext*                        InputMapping;                                               // 0x02F0   (0x0008)  
	int32_t                                            InputMappingPriority;                                       // 0x02F8   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x02FC   (0x0004)  MISSED
	SDK_UNDEFINED(32,1848) /* TWeakObjectPtr<UCommonInputActionDomain*> */ __um(ActionDomainOverride);             // 0x0300   (0x0020)  
	SDK_UNDEFINED(16,1849) /* FMulticastInlineDelegate */ __um(BP_OnWidgetActivated);                              // 0x0320   (0x0010)  
	SDK_UNDEFINED(16,1850) /* FMulticastInlineDelegate */ __um(BP_OnWidgetDeactivated);                            // 0x0330   (0x0010)  
	bool                                               bIsActive;                                                  // 0x0340   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x0341   (0x0007)  MISSED
	SDK_UNDEFINED(16,1851) /* TArray<TWeakObjectPtr<UCommonActivatableWidget*>> */ __um(VisibilityBoundWidgets);   // 0x0348   (0x0010)  
	unsigned char                                      UnknownData03_5[0xA0];                                      // 0x0358   (0x00A0)  MISSED
	bool                                               bSetVisibilityOnActivated;                                  // 0x03F8   (0x0001)  
	ESlateVisibility                                   ActivatedVisibility;                                        // 0x03F9   (0x0001)  
	bool                                               bSetVisibilityOnDeactivated;                                // 0x03FA   (0x0001)  
	ESlateVisibility                                   DeactivatedVisibility;                                      // 0x03FB   (0x0001)  
	unsigned char                                      UnknownData04_6[0x4];                                       // 0x03FC   (0x0004)  MISSED


	/// Functions
	// Function /Script/CommonUI.CommonActivatableWidget.SetBindVisibilities
	// void SetBindVisibilities(ESlateVisibility OnActivatedVisibility, ESlateVisibility OnDeactivatedVisibility, bool bInAllActive); // [0x7270a50] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonActivatableWidget.RequestRefreshFocus
	// void RequestRefreshFocus();                                                                                           // [0x23767a4] Final|Native|Protected|BlueprintCallable 
	// Function /Script/CommonUI.CommonActivatableWidget.IsActivated
	// bool IsActivated();                                                                                                   // [0x36c6694] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonActivatableWidget.GetDesiredFocusTarget
	// class UWidget* GetDesiredFocusTarget();                                                                               // [0x726ee40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonActivatableWidget.DeactivateWidget
	// void DeactivateWidget();                                                                                              // [0x3ee1514] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonActivatableWidget.ClearFocusRestorationTarget
	// void ClearFocusRestorationTarget();                                                                                   // [0x726e648] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonActivatableWidget.BP_OnHandleBackAction
	// bool BP_OnHandleBackAction();                                                                                         // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonActivatableWidget.BP_OnDeactivated
	// void BP_OnDeactivated();                                                                                              // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonActivatableWidget.BP_OnActivated
	// void BP_OnActivated();                                                                                                // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonActivatableWidget.BP_GetDesiredInputConfig
	// FUIInputConfig BP_GetDesiredInputConfig();                                                                            // [0x18a39e4] Event|Protected|BlueprintEvent|Const 
	// Function /Script/CommonUI.CommonActivatableWidget.BP_GetDesiredFocusTarget
	// class UWidget* BP_GetDesiredFocusTarget();                                                                            // [0x18a39e4] Event|Protected|BlueprintEvent|Const 
	// Function /Script/CommonUI.CommonActivatableWidget.BindVisibilityToActivation
	// void BindVisibilityToActivation(class UCommonActivatableWidget* ActivatableWidget);                                   // [0x726e490] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonActivatableWidget.ActivateWidget
	// void ActivateWidget();                                                                                                // [0x42cb174] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/CommonUI.CommonAnimatedSwitcher
/// Size: 0x0080 (0x0001A8 - 0x000228)
class UCommonAnimatedSwitcher : public UWidgetSwitcher
{ 
public:
	unsigned char                                      UnknownData00_3[0x30];                                      // 0x01A8   (0x0030)  MISSED
	SDK_UNDEFINED(16,1852) /* FMulticastInlineDelegate */ __um(OnActiveWidgetIndexChangedBP);                      // 0x01D8   (0x0010)  
	ECommonSwitcherTransition                          TransitionType;                                             // 0x01E8   (0x0001)  
	ETransitionCurve                                   TransitionCurveType;                                        // 0x01E9   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x01EA   (0x0002)  MISSED
	float                                              TransitionDuration;                                         // 0x01EC   (0x0004)  
	unsigned char                                      UnknownData02_6[0x38];                                      // 0x01F0   (0x0038)  MISSED


	/// Functions
	// Function /Script/CommonUI.CommonAnimatedSwitcher.SetDisableTransitionAnimation
	// void SetDisableTransitionAnimation(bool bDisableAnimation);                                                           // [0x3f52c50] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonAnimatedSwitcher.IsTransitionPlaying
	// bool IsTransitionPlaying();                                                                                           // [0x727014c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonAnimatedSwitcher.IsCurrentlySwitching
	// bool IsCurrentlySwitching();                                                                                          // [0x726fff4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonAnimatedSwitcher.HasWidgets
	// bool HasWidgets();                                                                                                    // [0x341b3e4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonAnimatedSwitcher.ActivatePreviousWidget
	// void ActivatePreviousWidget(bool bCanWrap);                                                                           // [0x726e10c] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonAnimatedSwitcher.ActivateNextWidget
	// void ActivateNextWidget(bool bCanWrap);                                                                               // [0x726e08c] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/CommonUI.CommonActivatableWidgetSwitcher
/// Size: 0x0010 (0x000228 - 0x000238)
class UCommonActivatableWidgetSwitcher : public UCommonAnimatedSwitcher
{ 
public:
	bool                                               bClearFocusRestorationTargetOfDeactivatedWidgets;           // 0x0228   (0x0001)  
	unsigned char                                      UnknownData00_6[0xF];                                       // 0x0229   (0x000F)  MISSED
};

/// Class /Script/CommonUI.CommonBorderStyle
/// Size: 0x00C8 (0x000028 - 0x0000F0)
class UCommonBorderStyle : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x30];                                      // 0x0000   (0x0030)  MISSED
	FSlateBrush                                        Background;                                                 // 0x0030   (0x00C0)  


	/// Functions
	// Function /Script/CommonUI.CommonBorderStyle.GetBackgroundBrush
	// void GetBackgroundBrush(FSlateBrush& Brush);                                                                          // [0x726e9a8] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/CommonUI.CommonBorder
/// Size: 0x0020 (0x000300 - 0x000320)
class UCommonBorder : public UBorder
{ 
public:
	class UClass*                                      style;                                                      // 0x0300   (0x0008)  
	bool                                               bReducePaddingBySafezone;                                   // 0x0308   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0309   (0x0003)  MISSED
	FMargin                                            MinimumPadding;                                             // 0x030C   (0x0010)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x031C   (0x0004)  MISSED


	/// Functions
	// Function /Script/CommonUI.CommonBorder.SetStyle
	// void SetStyle(class UClass* InStyle);                                                                                 // [0x72723f4] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/CommonUI.CommonButtonStyleOptionalSlateSound
/// Size: 0x0020 (0x000000 - 0x000020)
struct FCommonButtonStyleOptionalSlateSound
{ 
	bool                                               bHasSound;                                                  // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	FSlateSound                                        sound;                                                      // 0x0008   (0x0018)  
};

/// Class /Script/CommonUI.CommonButtonStyle
/// Size: 0x0708 (0x000028 - 0x000730)
class UCommonButtonStyle : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	bool                                               bSingleMaterial;                                            // 0x0028   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0029   (0x0007)  MISSED
	FSlateBrush                                        SingleMaterialBrush;                                        // 0x0030   (0x00C0)  
	FSlateBrush                                        NormalBase;                                                 // 0x00F0   (0x00C0)  
	FSlateBrush                                        NormalHovered;                                              // 0x01B0   (0x00C0)  
	FSlateBrush                                        NormalPressed;                                              // 0x0270   (0x00C0)  
	FSlateBrush                                        SelectedBase;                                               // 0x0330   (0x00C0)  
	FSlateBrush                                        SelectedHovered;                                            // 0x03F0   (0x00C0)  
	FSlateBrush                                        SelectedPressed;                                            // 0x04B0   (0x00C0)  
	FSlateBrush                                        Disabled;                                                   // 0x0570   (0x00C0)  
	FMargin                                            ButtonPadding;                                              // 0x0630   (0x0010)  
	FMargin                                            CustomPadding;                                              // 0x0640   (0x0010)  
	int32_t                                            MinWidth;                                                   // 0x0650   (0x0004)  
	int32_t                                            MinHeight;                                                  // 0x0654   (0x0004)  
	class UClass*                                      NormalTextStyle;                                            // 0x0658   (0x0008)  
	class UClass*                                      NormalHoveredTextStyle;                                     // 0x0660   (0x0008)  
	class UClass*                                      SelectedTextStyle;                                          // 0x0668   (0x0008)  
	class UClass*                                      SelectedHoveredTextStyle;                                   // 0x0670   (0x0008)  
	class UClass*                                      DisabledTextStyle;                                          // 0x0678   (0x0008)  
	FSlateSound                                        PressedSlateSound;                                          // 0x0680   (0x0018)  
	FCommonButtonStyleOptionalSlateSound               SelectedPressedSlateSound;                                  // 0x0698   (0x0020)  
	FCommonButtonStyleOptionalSlateSound               LockedPressedSlateSound;                                    // 0x06B8   (0x0020)  
	FSlateSound                                        HoveredSlateSound;                                          // 0x06D8   (0x0018)  
	FCommonButtonStyleOptionalSlateSound               SelectedHoveredSlateSound;                                  // 0x06F0   (0x0020)  
	FCommonButtonStyleOptionalSlateSound               LockedHoveredSlateSound;                                    // 0x0710   (0x0020)  


	/// Functions
	// Function /Script/CommonUI.CommonButtonStyle.GetSelectedTextStyle
	// class UCommonTextStyle* GetSelectedTextStyle();                                                                       // [0x726f768] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonStyle.GetSelectedPressedBrush
	// void GetSelectedPressedBrush(FSlateBrush& Brush);                                                                     // [0x726f67c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonStyle.GetSelectedHoveredTextStyle
	// class UCommonTextStyle* GetSelectedHoveredTextStyle();                                                                // [0x726f640] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonStyle.GetSelectedHoveredBrush
	// void GetSelectedHoveredBrush(FSlateBrush& Brush);                                                                     // [0x726f598] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonStyle.GetSelectedBaseBrush
	// void GetSelectedBaseBrush(FSlateBrush& Brush);                                                                        // [0x726f4b4] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonStyle.GetNormalTextStyle
	// class UCommonTextStyle* GetNormalTextStyle();                                                                         // [0x726f464] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonStyle.GetNormalPressedBrush
	// void GetNormalPressedBrush(FSlateBrush& Brush);                                                                       // [0x726f3bc] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonStyle.GetNormalHoveredTextStyle
	// class UCommonTextStyle* GetNormalHoveredTextStyle();                                                                  // [0x726f398] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonStyle.GetNormalHoveredBrush
	// void GetNormalHoveredBrush(FSlateBrush& Brush);                                                                       // [0x726f2f0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonStyle.GetNormalBaseBrush
	// void GetNormalBaseBrush(FSlateBrush& Brush);                                                                          // [0x726f248] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonStyle.GetMaterialBrush
	// void GetMaterialBrush(FSlateBrush& Brush);                                                                            // [0x726e9a8] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonStyle.GetDisabledTextStyle
	// class UCommonTextStyle* GetDisabledTextStyle();                                                                       // [0x726ef0c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonStyle.GetDisabledBrush
	// void GetDisabledBrush(FSlateBrush& Brush);                                                                            // [0x726ee64] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonStyle.GetCustomPadding
	// void GetCustomPadding(FMargin& OutCustomPadding);                                                                     // [0x726ed98] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonStyle.GetButtonPadding
	// void GetButtonPadding(FMargin& OutButtonPadding);                                                                     // [0x726ead8] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/CommonUI.CommonButtonInternalBase
/// Size: 0x0070 (0x0005D0 - 0x000640)
class UCommonButtonInternalBase : public UButton
{ 
public:
	unsigned char                                      UnknownData00_3[0x10];                                      // 0x05C8   (0x0010)  MISSED
	SDK_UNDEFINED(16,1853) /* FMulticastInlineDelegate */ __um(OnDoubleClicked);                                   // 0x05D8   (0x0010)  
	unsigned char                                      UnknownData01_5[0x20];                                      // 0x05E8   (0x0020)  MISSED
	int32_t                                            MinWidth;                                                   // 0x0608   (0x0004)  
	int32_t                                            MinHeight;                                                  // 0x060C   (0x0004)  
	bool                                               bButtonEnabled;                                             // 0x0610   (0x0001)  
	bool                                               bInteractionEnabled;                                        // 0x0611   (0x0001)  
	unsigned char                                      UnknownData02_6[0x2E];                                      // 0x0612   (0x002E)  MISSED
};

/// Class /Script/CommonUI.CommonButtonBase
/// Size: 0x11A8 (0x0002E8 - 0x001490)
class UCommonButtonBase : public UCommonUserWidget
{ 
public:
	FWidgetEventField                                  ClickEvent;                                                 // 0x02E8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x02E9   (0x0003)  MISSED
	int32_t                                            MinWidth;                                                   // 0x02EC   (0x0004)  
	int32_t                                            MinHeight;                                                  // 0x02F0   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x02F4   (0x0004)  MISSED
	class UClass*                                      style;                                                      // 0x02F8   (0x0008)  
	bool                                               bHideInputAction;                                           // 0x0300   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x0301   (0x0007)  MISSED
	FSlateSound                                        PressedSlateSoundOverride;                                  // 0x0308   (0x0018)  
	FSlateSound                                        HoveredSlateSoundOverride;                                  // 0x0320   (0x0018)  
	FSlateSound                                        SelectedPressedSlateSoundOverride;                          // 0x0338   (0x0018)  
	FSlateSound                                        SelectedHoveredSlateSoundOverride;                          // 0x0350   (0x0018)  
	FSlateSound                                        LockedPressedSlateSoundOverride;                            // 0x0368   (0x0018)  
	FSlateSound                                        LockedHoveredSlateSoundOverride;                            // 0x0380   (0x0018)  
	bool                                               bApplyAlphaOnDisable : 1;                                   // 0x0398:0 (0x0001)  
	bool                                               bLocked : 1;                                                // 0x0398:1 (0x0001)  
	bool                                               bSelectable : 1;                                            // 0x0398:2 (0x0001)  
	bool                                               bShouldSelectUponReceivingFocus : 1;                        // 0x0398:3 (0x0001)  
	bool                                               bInteractableWhenSelected : 1;                              // 0x0398:4 (0x0001)  
	bool                                               bToggleable : 1;                                            // 0x0398:5 (0x0001)  
	bool                                               bTriggerClickedAfterSelection : 1;                          // 0x0398:6 (0x0001)  
	bool                                               bDisplayInputActionWhenNotInteractable : 1;                 // 0x0398:7 (0x0001)  
	bool                                               bHideInputActionWithKeyboard : 1;                           // 0x0399:0 (0x0001)  
	bool                                               bShouldUseFallbackDefaultInputAction : 1;                   // 0x0399:1 (0x0001)  
	bool                                               bRequiresHold : 1;                                          // 0x0399:2 (0x0001)  
	unsigned char                                      UnknownData03_4[0x6];                                       // 0x039A   (0x0006)  MISSED
	class UClass*                                      HoldData;                                                   // 0x03A0   (0x0008)  
	bool                                               bSimulateHoverOnTouchInput;                                 // 0x03A8   (0x0001)  
	unsigned char                                      UnknownData04_5[0x1];                                       // 0x03A9   (0x0001)  MISSED
	SDK_UNDEFINED(1,1854) /* TEnumAsByte<EButtonClickMethod> */ __um(ClickMethod);                                 // 0x03AA   (0x0001)  
	SDK_UNDEFINED(1,1855) /* TEnumAsByte<EButtonTouchMethod> */ __um(TouchMethod);                                 // 0x03AB   (0x0001)  
	SDK_UNDEFINED(1,1856) /* TEnumAsByte<EButtonPressMethod> */ __um(PressMethod);                                 // 0x03AC   (0x0001)  
	unsigned char                                      UnknownData05_5[0x3];                                       // 0x03AD   (0x0003)  MISSED
	int32_t                                            InputPriority;                                              // 0x03B0   (0x0004)  
	unsigned char                                      UnknownData06_5[0x4];                                       // 0x03B4   (0x0004)  MISSED
	FDataTableRowHandle                                TriggeringInputAction;                                      // 0x03B8   (0x0010)  
	class UInputAction*                                TriggeringEnhancedInputAction;                              // 0x03C8   (0x0008)  
	unsigned char                                      UnknownData07_5[0x10];                                      // 0x03D0   (0x0010)  MISSED
	SDK_UNDEFINED(16,1857) /* FMulticastInlineDelegate */ __um(OnSelectedChangedBase);                             // 0x03E0   (0x0010)  
	SDK_UNDEFINED(16,1858) /* FMulticastInlineDelegate */ __um(OnButtonBaseClicked);                               // 0x03F0   (0x0010)  
	SDK_UNDEFINED(16,1859) /* FMulticastInlineDelegate */ __um(OnButtonBaseDoubleClicked);                         // 0x0400   (0x0010)  
	SDK_UNDEFINED(16,1860) /* FMulticastInlineDelegate */ __um(OnButtonBaseHovered);                               // 0x0410   (0x0010)  
	SDK_UNDEFINED(16,1861) /* FMulticastInlineDelegate */ __um(OnButtonBaseUnhovered);                             // 0x0420   (0x0010)  
	unsigned char                                      UnknownData08_5[0x38];                                      // 0x0430   (0x0038)  MISSED
	bool                                               bIsPersistentBinding;                                       // 0x0468   (0x0001)  
	ECommonInputMode                                   InputModeOverride;                                          // 0x0469   (0x0001)  
	unsigned char                                      UnknownData09_5[0x36];                                      // 0x046A   (0x0036)  MISSED
	class UMaterialInstanceDynamic*                    SingleMaterialStyleMID;                                     // 0x04A0   (0x0008)  
	unsigned char                                      UnknownData10_5[0x8];                                       // 0x04A8   (0x0008)  MISSED
	FButtonStyle                                       NormalStyle;                                                // 0x04B0   (0x03B0)  
	FButtonStyle                                       SelectedStyle;                                              // 0x0860   (0x03B0)  
	FButtonStyle                                       DisabledStyle;                                              // 0x0C10   (0x03B0)  
	FButtonStyle                                       LockedStyle;                                                // 0x0FC0   (0x03B0)  
	bool                                               bStopDoubleClickPropagation : 1;                            // 0x1370:0 (0x0001)  
	unsigned char                                      UnknownData11_4[0x117];                                     // 0x1371   (0x0117)  MISSED
	class UCommonActionWidget*                         InputActionWidget;                                          // 0x1488   (0x0008)  


	/// Functions
	// Function /Script/CommonUI.CommonButtonBase.UpdateHoldData
	// void UpdateHoldData(ECommonInputType CurrentInputType);                                                               // [0x7272ad0] Native|Protected     
	// Function /Script/CommonUI.CommonButtonBase.StopDoubleClickPropagation
	// void StopDoubleClickPropagation();                                                                                    // [0x7272a3c] Final|Native|Protected|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetTriggeringInputAction
	// void SetTriggeringInputAction(FDataTableRowHandle& InputActionRow);                                                   // [0x3099df4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetTriggeringEnhancedInputAction
	// void SetTriggeringEnhancedInputAction(class UInputAction* InInputAction);                                             // [0x7272914] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetTriggeredInputAction
	// void SetTriggeredInputAction(FDataTableRowHandle& InputActionRow);                                                    // [0x7272850] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetTouchMethod
	// void SetTouchMethod(TEnumAsByte<EButtonTouchMethod> InTouchMethod);                                                   // [0x7272740] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetStyle
	// void SetStyle(class UClass* InStyle);                                                                                 // [0x2e34688] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetShouldUseFallbackDefaultInputAction
	// void SetShouldUseFallbackDefaultInputAction(bool bInShouldUseFallbackDefaultInputAction);                             // [0x7272374] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetShouldSelectUponReceivingFocus
	// void SetShouldSelectUponReceivingFocus(bool bInShouldSelectUponReceivingFocus);                                       // [0x72722f4] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetSelectedPressedSoundOverride
	// void SetSelectedPressedSoundOverride(class USoundBase* sound);                                                        // [0x72721c4] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetSelectedInternal
	// void SetSelectedInternal(bool bInSelected, bool bAllowSound, bool bBroadcast);                                        // [0x72720b8] Final|Native|Protected|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetSelectedHoveredSoundOverride
	// void SetSelectedHoveredSoundOverride(class USoundBase* sound);                                                        // [0x7272008] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetPressMethod
	// void SetPressMethod(TEnumAsByte<EButtonPressMethod> InPressMethod);                                                   // [0x7271eec] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetPressedSoundOverride
	// void SetPressedSoundOverride(class USoundBase* sound);                                                                // [0x7271f88] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetMinDimensions
	// void SetMinDimensions(int32_t InMinWidth, int32_t InMinHeight);                                                       // [0x2dc047c] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetLockedPressedSoundOverride
	// void SetLockedPressedSoundOverride(class USoundBase* sound);                                                          // [0x7271b6c] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetLockedHoveredSoundOverride
	// void SetLockedHoveredSoundOverride(class USoundBase* sound);                                                          // [0x7271abc] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetIsToggleable
	// void SetIsToggleable(bool bInIsToggleable);                                                                           // [0x3737fac] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetIsSelected
	// void SetIsSelected(bool InSelected, bool bGiveClickFeedback);                                                         // [0x25138e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetIsSelectable
	// void SetIsSelectable(bool bInIsSelectable);                                                                           // [0x37c41f8] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetIsLocked
	// void SetIsLocked(bool bInIsLocked);                                                                                   // [0x7271794] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetIsInteractionEnabled
	// void SetIsInteractionEnabled(bool bInIsInteractionEnabled);                                                           // [0x1f465a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetIsInteractableWhenSelected
	// void SetIsInteractableWhenSelected(bool bInInteractableWhenSelected);                                                 // [0x35594a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetIsFocusable
	// void SetIsFocusable(bool bInIsFocusable);                                                                             // [0x3676f08] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetInputActionProgressMaterial
	// void SetInputActionProgressMaterial(FSlateBrush& InProgressMaterialBrush, FName& InProgressMaterialParam);            // [0x7271528] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetHoveredSoundOverride
	// void SetHoveredSoundOverride(class USoundBase* sound);                                                                // [0x7271340] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetHideInputAction
	// void SetHideInputAction(bool bInHideInputAction);                                                                     // [0x3753a00] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetClickMethod
	// void SetClickMethod(TEnumAsByte<EButtonClickMethod> InClickMethod);                                                   // [0x7270d20] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.OnTriggeringInputActionChanged
	// void OnTriggeringInputActionChanged(FDataTableRowHandle& NewTriggeredAction);                                         // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/CommonUI.CommonButtonBase.OnTriggeringEnhancedInputActionChanged
	// void OnTriggeringEnhancedInputActionChanged(class UInputAction* InInputAction);                                       // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonButtonBase.OnTriggeredInputActionChanged
	// void OnTriggeredInputActionChanged(FDataTableRowHandle& NewTriggeredAction);                                          // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/CommonUI.CommonButtonBase.OnInputMethodChanged
	// void OnInputMethodChanged(ECommonInputType CurrentInputType);                                                         // [0x72703d0] Native|Protected     
	// Function /Script/CommonUI.CommonButtonBase.OnCurrentTextStyleChanged
	// void OnCurrentTextStyleChanged();                                                                                     // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonButtonBase.OnActionProgress
	// void OnActionProgress(float HeldPercent);                                                                             // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonButtonBase.OnActionComplete
	// void OnActionComplete();                                                                                              // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonButtonBase.NativeOnHoldProgressRollback
	// bool NativeOnHoldProgressRollback(float DeltaTime);                                                                   // [0x727028c] Native|Protected     
	// Function /Script/CommonUI.CommonButtonBase.NativeOnHoldProgress
	// bool NativeOnHoldProgress(float DeltaTime);                                                                           // [0x72701f4] Native|Protected     
	// Function /Script/CommonUI.CommonButtonBase.NativeOnActionProgress
	// void NativeOnActionProgress(float HeldPercent);                                                                       // [0x7270170] Native|Protected     
	// Function /Script/CommonUI.CommonButtonBase.NativeOnActionComplete
	// void NativeOnActionComplete();                                                                                        // [0x6892aa0] Native|Protected     
	// Function /Script/CommonUI.CommonButtonBase.IsPressed
	// bool IsPressed();                                                                                                     // [0x72700f4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonBase.IsInteractionEnabled
	// bool IsInteractionEnabled();                                                                                          // [0x7270024] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonBase.HoldReset
	// void HoldReset();                                                                                                     // [0x726fe1c] Native|Protected     
	// Function /Script/CommonUI.CommonButtonBase.HandleTriggeringActionCommited
	// void HandleTriggeringActionCommited(bool& bPassThrough);                                                              // [0x726fd70] Native|Protected|HasOutParms 
	// Function /Script/CommonUI.CommonButtonBase.HandleFocusReceived
	// void HandleFocusReceived();                                                                                           // [0x28ca58c] Native|Protected     
	// Function /Script/CommonUI.CommonButtonBase.HandleFocusLost
	// void HandleFocusLost();                                                                                               // [0x726fb9c] Native|Protected     
	// Function /Script/CommonUI.CommonButtonBase.HandleButtonReleased
	// void HandleButtonReleased();                                                                                          // [0x37a92d8] Final|Native|Protected 
	// Function /Script/CommonUI.CommonButtonBase.HandleButtonPressed
	// void HandleButtonPressed();                                                                                           // [0x371dd10] Final|Native|Protected 
	// Function /Script/CommonUI.CommonButtonBase.HandleButtonClicked
	// void HandleButtonClicked();                                                                                           // [0x25139a4] Final|Native|Protected 
	// Function /Script/CommonUI.CommonButtonBase.GetStyle
	// class UCommonButtonStyle* GetStyle();                                                                                 // [0x726f968] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonBase.GetSingleMaterialStyleMID
	// class UMaterialInstanceDynamic* GetSingleMaterialStyleMID();                                                          // [0x3ed1360] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonBase.GetShouldSelectUponReceivingFocus
	// bool GetShouldSelectUponReceivingFocus();                                                                             // [0x726f8a4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonBase.GetSelected
	// bool GetSelected();                                                                                                   // [0x345d588] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonBase.GetLocked
	// bool GetLocked();                                                                                                     // [0x726f160] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonBase.GetIsFocusable
	// bool GetIsFocusable();                                                                                                // [0x726f108] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonBase.GetInputAction
	// bool GetInputAction(FDataTableRowHandle& InputActionRow);                                                             // [0x3099b20] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonBase.GetEnhancedInputAction
	// class UInputAction* GetEnhancedInputAction();                                                                         // [0x726ef30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonBase.GetCurrentTextStyleClass
	// class UClass* GetCurrentTextStyleClass();                                                                             // [0x20492bc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonBase.GetCurrentTextStyle
	// class UCommonTextStyle* GetCurrentTextStyle();                                                                        // [0x726ed74] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonBase.GetCurrentCustomPadding
	// void GetCurrentCustomPadding(FMargin& OutCustomPadding);                                                              // [0x726ecd4] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonBase.GetCurrentButtonPadding
	// void GetCurrentButtonPadding(FMargin& OutButtonPadding);                                                              // [0x726ec34] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonBase.GetConvertInputActionToHold
	// bool GetConvertInputActionToHold();                                                                                   // [0x726ec0c] Native|Protected     
	// Function /Script/CommonUI.CommonButtonBase.DisableButtonWithReason
	// void DisableButtonWithReason(FText& DisabledReason);                                                                  // [0x726e718] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.ClearSelection
	// void ClearSelection();                                                                                                // [0x726e65c] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.BP_OnUnhovered
	// void BP_OnUnhovered();                                                                                                // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonButtonBase.BP_OnSelected
	// void BP_OnSelected();                                                                                                 // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonButtonBase.BP_OnReleased
	// void BP_OnReleased();                                                                                                 // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonButtonBase.BP_OnPressed
	// void BP_OnPressed();                                                                                                  // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonButtonBase.BP_OnLockedChanged
	// void BP_OnLockedChanged(bool bIsLocked);                                                                              // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonButtonBase.BP_OnLockDoubleClicked
	// void BP_OnLockDoubleClicked();                                                                                        // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonButtonBase.BP_OnLockClicked
	// void BP_OnLockClicked();                                                                                              // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonButtonBase.BP_OnInputMethodChanged
	// void BP_OnInputMethodChanged(ECommonInputType CurrentInputType);                                                      // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonButtonBase.BP_OnInputActionTriggered
	// void BP_OnInputActionTriggered();                                                                                     // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonButtonBase.BP_OnHovered
	// void BP_OnHovered();                                                                                                  // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonButtonBase.BP_OnFocusReceived
	// void BP_OnFocusReceived();                                                                                            // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonButtonBase.BP_OnFocusLost
	// void BP_OnFocusLost();                                                                                                // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonButtonBase.BP_OnEnabled
	// void BP_OnEnabled();                                                                                                  // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonButtonBase.BP_OnDoubleClicked
	// void BP_OnDoubleClicked();                                                                                            // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonButtonBase.BP_OnDisabled
	// void BP_OnDisabled();                                                                                                 // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonButtonBase.BP_OnDeselected
	// void BP_OnDeselected();                                                                                               // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonButtonBase.BP_OnClicked
	// void BP_OnClicked();                                                                                                  // [0x18a39e4] Event|Protected|BlueprintEvent 
};

/// Class /Script/CommonUI.WidgetLockedStateRegistration
/// Size: 0x0000 (0x000028 - 0x000028)
class UWidgetLockedStateRegistration : public UWidgetBinaryStateRegistration
{ 
public:
};

/// Class /Script/CommonUI.CommonCustomNavigation
/// Size: 0x0010 (0x000300 - 0x000310)
class UCommonCustomNavigation : public UBorder
{ 
public:
	SDK_UNDEFINED(12,1862) /* FDelegateProperty */     __um(OnNavigationEvent);                                    // 0x0300   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x030C   (0x0004)  MISSED


	/// Functions
	// Function /Script/CommonUI.CommonCustomNavigation.OnCustomNavigationEvent__DelegateSignature
	// bool OnCustomNavigationEvent__DelegateSignature(EUINavigation NavigationType);                                        // [0x18a39e4] Public|Delegate      
};

/// Class /Script/CommonUI.CommonTextBlock
/// Size: 0x0030 (0x000350 - 0x000380)
#pragma pack(push, 0x1)
class alignas(0x10) UCommonTextBlock : public UTextBlock
{ 
public:
	float                                              MobileFontSizeMultiplier;                                   // 0x0348   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x034C   (0x0004)  MISSED
	class UClass*                                      style;                                                      // 0x0350   (0x0008)  
	class UClass*                                      ScrollStyle;                                                // 0x0358   (0x0008)  
	bool                                               bIsScrollingEnabled;                                        // 0x0360   (0x0001)  
	bool                                               bDisplayAllCaps;                                            // 0x0361   (0x0001)  
	bool                                               bAutoCollapseWithEmptyText;                                 // 0x0362   (0x0001)  
	unsigned char                                      UnknownData01_6[0x15];                                      // 0x0363   (0x0015)  MISSED


	/// Functions
	// Function /Script/CommonUI.CommonTextBlock.SetWrapTextWidth
	// void SetWrapTextWidth(int32_t InWrapTextAt);                                                                          // [0x36ffe28] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonTextBlock.SetTextCase
	// void SetTextCase(bool bUseAllCaps);                                                                                   // [0x244926c] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonTextBlock.SetStyle
	// void SetStyle(class UClass* InStyle);                                                                                 // [0x2049310] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonTextBlock.SetScrollingEnabled
	// void SetScrollingEnabled(bool bInIsScrollingEnabled);                                                                 // [0x3684690] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonTextBlock.SetMobileFontSizeMultiplier
	// void SetMobileFontSizeMultiplier(float InMobileFontSizeMultiplier);                                                   // [0x2f7f710] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonTextBlock.SetMargin
	// void SetMargin(FMargin& InMargin);                                                                                    // [0x7271c1c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CommonUI.CommonTextBlock.SetLineHeightPercentage
	// void SetLineHeightPercentage(float InLineHeightPercentage);                                                           // [0x38c23bc] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonTextBlock.SetApplyLineHeightToBottomLine
	// void SetApplyLineHeightToBottomLine(bool InApplyLineHeightToBottomLine);                                              // [0x72709d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonTextBlock.ResetScrollState
	// void ResetScrollState();                                                                                              // [0x72706dc] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonTextBlock.GetMobileFontSizeMultiplier
	// float GetMobileFontSizeMultiplier();                                                                                  // [0x3aef898] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonTextBlock.GetMargin
	// FMargin GetMargin();                                                                                                  // [0x726f17c] Final|Native|Public|BlueprintCallable 
};
#pragma pack(pop)

/// Class /Script/CommonUI.CommonDateTimeTextBlock
/// Size: 0x0070 (0x000380 - 0x0003F0)
class UCommonDateTimeTextBlock : public UCommonTextBlock
{ 
public:
	SDK_UNDEFINED(24,1863) /* FText */                 __um(CustomTimespanFormat);                                 // 0x0378   (0x0018)  
	bool                                               bCustomTimespanLeadingZeros;                                // 0x0390   (0x0001)  
	unsigned char                                      UnknownData00_6[0x5F];                                      // 0x0391   (0x005F)  MISSED


	/// Functions
	// Function /Script/CommonUI.CommonDateTimeTextBlock.SetTimespanValue
	// void SetTimespanValue(FTimespan InTimespan);                                                                          // [0x7272610] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/CommonUI.CommonDateTimeTextBlock.SetDateTimeValue
	// void SetDateTimeValue(FDateTime InDateTime, bool bShowAsCountdown, float InRefreshDelay);                             // [0x7270ed8] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/CommonUI.CommonDateTimeTextBlock.SetCountDownCompletionText
	// void SetCountDownCompletionText(FText InCompletionText);                                                              // [0x7270e3c] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonDateTimeTextBlock.GetDateTime
	// FDateTime GetDateTime();                                                                                              // [0x726ee28] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/CommonUI.CommonGameViewportClient
/// Size: 0x0040 (0x000398 - 0x0003D8)
class UCommonGameViewportClient : public UGameViewportClient
{ 
public:
	unsigned char                                      UnknownData00_1[0x40];                                      // 0x0398   (0x0040)  MISSED
};

/// Class /Script/CommonUI.CommonHardwareVisibilityBorder
/// Size: 0x0050 (0x000320 - 0x000370)
class UCommonHardwareVisibilityBorder : public UCommonBorder
{ 
public:
	FGameplayTagQuery                                  VisibilityQuery;                                            // 0x0320   (0x0048)  
	ESlateVisibility                                   VisibleType;                                                // 0x0368   (0x0001)  
	ESlateVisibility                                   HiddenType;                                                 // 0x0369   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x036A   (0x0006)  MISSED
};

/// Class /Script/CommonUI.CommonHierarchicalScrollBox
/// Size: 0x0000 (0x000C20 - 0x000C20)
class UCommonHierarchicalScrollBox : public UScrollBox
{ 
public:
};

/// Class /Script/CommonUI.CommonLazyImage
/// Size: 0x0100 (0x0002B0 - 0x0003B0)
class UCommonLazyImage : public UImage
{ 
public:
	FSlateBrush                                        LoadingBackgroundBrush;                                     // 0x02B0   (0x00C0)  
	FName                                              MaterialTextureParamName;                                   // 0x0370   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0374   (0x0004)  MISSED
	SDK_UNDEFINED(16,1864) /* FMulticastInlineDelegate */ __um(BP_OnLoadingStateChanged);                          // 0x0378   (0x0010)  
	unsigned char                                      UnknownData01_6[0x28];                                      // 0x0388   (0x0028)  MISSED


	/// Functions
	// Function /Script/CommonUI.CommonLazyImage.SetMaterialTextureParamName
	// void SetMaterialTextureParamName(FName TextureParamName);                                                             // [0x367e650] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonLazyImage.SetBrushFromLazyTexture
	// void SetBrushFromLazyTexture(TWeakObjectPtr<UTexture2D*>& LazyTexture, bool bMatchSize);                              // [0x14387c0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CommonUI.CommonLazyImage.SetBrushFromLazyMaterial
	// void SetBrushFromLazyMaterial(TWeakObjectPtr<UMaterialInterface*>& LazyMaterial);                                     // [0x7270c80] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CommonUI.CommonLazyImage.SetBrushFromLazyDisplayAsset
	// void SetBrushFromLazyDisplayAsset(TWeakObjectPtr<UObject*>& LazyObject, bool bMatchTextureSize);                      // [0x7270b54] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CommonUI.CommonLazyImage.IsLoading
	// bool IsLoading();                                                                                                     // [0x7270064] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/CommonUI.CommonLazyWidget
/// Size: 0x0148 (0x000178 - 0x0002C0)
class UCommonLazyWidget : public UWidget
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0178   (0x0008)  MISSED
	FSlateBrush                                        LoadingBackgroundBrush;                                     // 0x0180   (0x00C0)  
	class UUserWidget*                                 Content;                                                    // 0x0240   (0x0008)  
	unsigned char                                      UnknownData01_5[0x28];                                      // 0x0248   (0x0028)  MISSED
	SDK_UNDEFINED(16,1865) /* FMulticastInlineDelegate */ __um(BP_OnLoadingStateChanged);                          // 0x0270   (0x0010)  
	unsigned char                                      UnknownData02_6[0x40];                                      // 0x0280   (0x0040)  MISSED


	/// Functions
	// Function /Script/CommonUI.CommonLazyWidget.SetLazyContent
	// void SetLazyContent(TWeakObjectPtr<UClass*> SoftWidget);                                                              // [0x7271814] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonLazyWidget.IsLoading
	// bool IsLoading();                                                                                                     // [0x7270094] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonLazyWidget.GetContent
	// class UUserWidget* GetContent();                                                                                      // [0x726ebf4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/CommonUI.CommonListView
/// Size: 0x0000 (0x000BD0 - 0x000BD0)
class UCommonListView : public UListView
{ 
public:


	/// Functions
	// Function /Script/CommonUI.CommonListView.SetEntrySpacing
	// void SetEntrySpacing(float InEntrySpacing);                                                                           // [0x7271238] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/CommonUI.LoadGuardSlot
/// Size: 0x0028 (0x000038 - 0x000060)
class ULoadGuardSlot : public UPanelSlot
{ 
public:
	FMargin                                            Padding;                                                    // 0x0038   (0x0010)  
	SDK_UNDEFINED(1,1866) /* TEnumAsByte<EHorizontalAlignment> */ __um(HorizontalAlignment);                       // 0x0048   (0x0001)  
	SDK_UNDEFINED(1,1867) /* TEnumAsByte<EVerticalAlignment> */ __um(VerticalAlignment);                           // 0x0049   (0x0001)  
	unsigned char                                      UnknownData00_6[0x16];                                      // 0x004A   (0x0016)  MISSED


	/// Functions
	// Function /Script/CommonUI.LoadGuardSlot.SetVerticalAlignment
	// void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);                                       // [0x7272994] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.LoadGuardSlot.SetPadding
	// void SetPadding(FMargin InPadding);                                                                                   // [0x7271db0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.LoadGuardSlot.SetHorizontalAlignment
	// void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);                                 // [0x72712c0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/CommonUI.CommonLoadGuard
/// Size: 0x0150 (0x000190 - 0x0002E0)
class UCommonLoadGuard : public UContentWidget
{ 
public:
	FSlateBrush                                        LoadingBackgroundBrush;                                     // 0x0190   (0x00C0)  
	SDK_UNDEFINED(1,1868) /* TEnumAsByte<EHorizontalAlignment> */ __um(ThrobberAlignment);                         // 0x0250   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0251   (0x0003)  MISSED
	FMargin                                            ThrobberPadding;                                            // 0x0254   (0x0010)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0264   (0x0004)  MISSED
	SDK_UNDEFINED(24,1869) /* FText */                 __um(LoadingText);                                          // 0x0268   (0x0018)  
	class UClass*                                      TextStyle;                                                  // 0x0280   (0x0008)  
	SDK_UNDEFINED(16,1870) /* FMulticastInlineDelegate */ __um(BP_OnLoadingStateChanged);                          // 0x0288   (0x0010)  
	FSoftObjectPath                                    SpinnerMaterialPath;                                        // 0x0298   (0x0018)  
	unsigned char                                      UnknownData02_6[0x30];                                      // 0x02B0   (0x0030)  MISSED


	/// Functions
	// Function /Script/CommonUI.CommonLoadGuard.SetLoadingText
	// void SetLoadingText(FText& InLoadingText);                                                                            // [0x7271a0c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CommonUI.CommonLoadGuard.SetIsLoading
	// void SetIsLoading(bool bInIsLoading);                                                                                 // [0x7271714] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonLoadGuard.OnAssetLoaded__DelegateSignature
	// void OnAssetLoaded__DelegateSignature(class UObject* Object);                                                         // [0x18a39e4] Public|Delegate      
	// Function /Script/CommonUI.CommonLoadGuard.IsLoading
	// bool IsLoading();                                                                                                     // [0x72700c4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonLoadGuard.BP_GuardAndLoadAsset
	// void BP_GuardAndLoadAsset(TWeakObjectPtr<UObject*>& InLazyAsset, FDelegateProperty& OnAssetLoaded);                   // [0x726e2fc] Final|Native|Private|HasOutParms|BlueprintCallable 
};

/// Struct /Script/CommonUI.CommonNumberFormattingOptions
/// Size: 0x0014 (0x000000 - 0x000014)
struct FCommonNumberFormattingOptions
{ 
	SDK_UNDEFINED(1,1871) /* TEnumAsByte<ERoundingMode> */ __um(RoundingMode);                                     // 0x0000   (0x0001)  
	bool                                               UseGrouping;                                                // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0002   (0x0002)  MISSED
	int32_t                                            MinimumIntegralDigits;                                      // 0x0004   (0x0004)  
	int32_t                                            MaximumIntegralDigits;                                      // 0x0008   (0x0004)  
	int32_t                                            MinimumFractionalDigits;                                    // 0x000C   (0x0004)  
	int32_t                                            MaximumFractionalDigits;                                    // 0x0010   (0x0004)  
};

/// Class /Script/CommonUI.CommonNumericTextBlock
/// Size: 0x00A0 (0x000380 - 0x000420)
#pragma pack(push, 0x1)
class alignas(0x10) UCommonNumericTextBlock : public UCommonTextBlock
{ 
public:
	SDK_UNDEFINED(16,1872) /* FMulticastInlineDelegate */ __um(OnInterpolationStartedEvent);                       // 0x0378   (0x0010)  
	SDK_UNDEFINED(16,1873) /* FMulticastInlineDelegate */ __um(OnInterpolationUpdatedEvent);                       // 0x0388   (0x0010)  
	SDK_UNDEFINED(16,1874) /* FMulticastInlineDelegate */ __um(OnOutroEvent);                                      // 0x0398   (0x0010)  
	SDK_UNDEFINED(16,1875) /* FMulticastInlineDelegate */ __um(OnInterpolationEndedEvent);                         // 0x03A8   (0x0010)  
	float                                              CurrentNumericValue;                                        // 0x03B8   (0x0004)  
	ECommonNumericType                                 NumericType;                                                // 0x03BC   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x03BD   (0x0003)  MISSED
	FCommonNumberFormattingOptions                     FormattingSpecification;                                    // 0x03C0   (0x0014)  
	float                                              EaseOutInterpolationExponent;                               // 0x03D4   (0x0004)  
	float                                              InterpolationUpdateInterval;                                // 0x03D8   (0x0004)  
	float                                              PostInterpolationShrinkDuration;                            // 0x03DC   (0x0004)  
	bool                                               PerformSizeInterpolation;                                   // 0x03E0   (0x0001)  
	bool                                               IsPercentage;                                               // 0x03E1   (0x0001)  
	unsigned char                                      UnknownData01_6[0x36];                                      // 0x03E2   (0x0036)  MISSED


	/// Functions
	// Function /Script/CommonUI.CommonNumericTextBlock.SetNumericType
	// void SetNumericType(ECommonNumericType InNumericType);                                                                // [0x7271d2c] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonNumericTextBlock.SetCurrentValue
	// void SetCurrentValue(float NewValue);                                                                                 // [0x2989ac0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonNumericTextBlock.OnOutro__DelegateSignature
	// void OnOutro__DelegateSignature(class UCommonNumericTextBlock* NumericTextBlock);                                     // [0x18a39e4] MulticastDelegate|Public|Delegate 
	// Function /Script/CommonUI.CommonNumericTextBlock.OnInterpolationUpdated__DelegateSignature
	// void OnInterpolationUpdated__DelegateSignature(class UCommonNumericTextBlock* NumericTextBlock, float LastValue, float NewValue); // [0x18a39e4] MulticastDelegate|Public|Delegate 
	// Function /Script/CommonUI.CommonNumericTextBlock.OnInterpolationStarted__DelegateSignature
	// void OnInterpolationStarted__DelegateSignature(class UCommonNumericTextBlock* NumericTextBlock);                      // [0x18a39e4] MulticastDelegate|Public|Delegate 
	// Function /Script/CommonUI.CommonNumericTextBlock.OnInterpolationEnded__DelegateSignature
	// void OnInterpolationEnded__DelegateSignature(class UCommonNumericTextBlock* NumericTextBlock, bool HadCompleted);     // [0x18a39e4] MulticastDelegate|Public|Delegate 
	// Function /Script/CommonUI.CommonNumericTextBlock.IsInterpolatingNumericValue
	// bool IsInterpolatingNumericValue();                                                                                   // [0x7270048] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonNumericTextBlock.InterpolateToValue
	// void InterpolateToValue(float TargetValue, float MaximumInterpolationDuration, float MinimumChangeRate, float OutroOffset); // [0x726feb4] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonNumericTextBlock.GetTargetValue
	// float GetTargetValue();                                                                                               // [0x726fa10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};
#pragma pack(pop)

/// Class /Script/CommonUI.CommonPoolableWidgetInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UCommonPoolableWidgetInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/CommonUI.CommonPoolableWidgetInterface.OnReleaseToPool
	// void OnReleaseToPool();                                                                                               // [0x7270454] Native|Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonPoolableWidgetInterface.OnAcquireFromPool
	// void OnAcquireFromPool();                                                                                             // [0x7270338] Native|Event|Protected|BlueprintEvent 
};

/// Class /Script/CommonUI.CommonRichTextBlock
/// Size: 0x0040 (0x000840 - 0x000880)
#pragma pack(push, 0x1)
class alignas(0x10) UCommonRichTextBlock : public URichTextBlock
{ 
public:
	ERichTextInlineIconDisplayMode                     InlineIconDisplayMode;                                      // 0x0840   (0x0001)  
	bool                                               bTintInlineIcon;                                            // 0x0841   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x0842   (0x0006)  MISSED
	class UClass*                                      DefaultTextStyleOverrideClass;                              // 0x0848   (0x0008)  
	float                                              MobileTextBlockScale;                                       // 0x0850   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0854   (0x0004)  MISSED
	class UClass*                                      ScrollStyle;                                                // 0x0858   (0x0008)  
	bool                                               bIsScrollingEnabled;                                        // 0x0860   (0x0001)  
	bool                                               bDisplayAllCaps;                                            // 0x0861   (0x0001)  
	bool                                               bAutoCollapseWithEmptyText;                                 // 0x0862   (0x0001)  
	unsigned char                                      UnknownData02_6[0x15];                                      // 0x0863   (0x0015)  MISSED


	/// Functions
	// Function /Script/CommonUI.CommonRichTextBlock.SetScrollingEnabled
	// void SetScrollingEnabled(bool bInIsScrollingEnabled);                                                                 // [0x3aaa79c] Final|Native|Public|BlueprintCallable 
};
#pragma pack(pop)

/// Class /Script/CommonUI.CommonRotator
/// Size: 0x0070 (0x001490 - 0x001500)
#pragma pack(push, 0x1)
class alignas(0x10) UCommonRotator : public UCommonButtonBase
{ 
public:
	unsigned char                                      UnknownData00_3[0x10];                                      // 0x1490   (0x0010)  MISSED
	SDK_UNDEFINED(16,1876) /* FMulticastInlineDelegate */ __um(OnRotatedWithDirection);                            // 0x14A0   (0x0010)  
	SDK_UNDEFINED(16,1877) /* FMulticastInlineDelegate */ __um(OnRotated);                                         // 0x14B0   (0x0010)  
	unsigned char                                      UnknownData01_5[0x18];                                      // 0x14C0   (0x0018)  MISSED
	class UCommonTextBlock*                            MyText;                                                     // 0x14D8   (0x0008)  
	unsigned char                                      UnknownData02_6[0x18];                                      // 0x14E0   (0x0018)  MISSED


	/// Functions
	// Function /Script/CommonUI.CommonRotator.ShiftTextRight
	// void ShiftTextRight();                                                                                                // [0x7272a28] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonRotator.ShiftTextLeft
	// void ShiftTextLeft();                                                                                                 // [0x7272a14] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonRotator.SetSelectedItem
	// void SetSelectedItem(int32_t InValue);                                                                                // [0x2b40e44] Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonRotator.PopulateTextLabels
	// void PopulateTextLabels(TArray<FText> Labels);                                                                        // [0x1aacb70] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonRotator.GetSelectedText
	// FText GetSelectedText();                                                                                              // [0x726f724] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonRotator.GetSelectedIndex
	// int32_t GetSelectedIndex();                                                                                           // [0x726f664] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonRotator.BP_OnOptionsPopulated
	// void BP_OnOptionsPopulated(int32_t Count);                                                                            // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonRotator.BP_OnOptionSelected
	// void BP_OnOptionSelected(int32_t Index);                                                                              // [0x18a39e4] Event|Protected|BlueprintEvent 
};
#pragma pack(pop)

/// Class /Script/CommonUI.CommonTabListWidgetBase
/// Size: 0x00F0 (0x0002E8 - 0x0003D8)
class UCommonTabListWidgetBase : public UCommonUserWidget
{ 
public:
	SDK_UNDEFINED(16,1878) /* FMulticastInlineDelegate */ __um(OnTabSelected);                                     // 0x02E8   (0x0010)  
	SDK_UNDEFINED(16,1879) /* FMulticastInlineDelegate */ __um(OnTabButtonCreation);                               // 0x02F8   (0x0010)  
	SDK_UNDEFINED(16,1880) /* FMulticastInlineDelegate */ __um(OnTabButtonRemoval);                                // 0x0308   (0x0010)  
	SDK_UNDEFINED(16,1881) /* FMulticastInlineDelegate */ __um(OnTabListRebuilt);                                  // 0x0318   (0x0010)  
	FDataTableRowHandle                                NextTabInputActionData;                                     // 0x0328   (0x0010)  
	FDataTableRowHandle                                PreviousTabInputActionData;                                 // 0x0338   (0x0010)  
	class UInputAction*                                NextTabEnhancedInputAction;                                 // 0x0348   (0x0008)  
	class UInputAction*                                PreviousTabEnhancedInputAction;                             // 0x0350   (0x0008)  
	bool                                               bAutoListenForInput;                                        // 0x0358   (0x0001)  
	bool                                               bDeferRebuildingTabList;                                    // 0x0359   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x035A   (0x0002)  MISSED
	SDK_UNDEFINED(8,1882) /* TWeakObjectPtr<UCommonAnimatedSwitcher*> */ __um(LinkedSwitcher);                     // 0x035C   (0x0008)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0364   (0x0004)  MISSED
	class UCommonButtonGroupBase*                      TabButtonGroup;                                             // 0x0368   (0x0008)  
	unsigned char                                      UnknownData02_5[0x8];                                       // 0x0370   (0x0008)  MISSED
	SDK_UNDEFINED(80,1883) /* TMap<FName, FCommonRegisteredTabInfo> */ __um(RegisteredTabsByID);                   // 0x0378   (0x0050)  
	unsigned char                                      UnknownData03_6[0x10];                                      // 0x03C8   (0x0010)  MISSED


	/// Functions
	// Function /Script/CommonUI.CommonTabListWidgetBase.SetTabVisibility
	// void SetTabVisibility(FName TabNameID, ESlateVisibility NewVisibility);                                               // [0x727254c] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonTabListWidgetBase.SetTabInteractionEnabled
	// void SetTabInteractionEnabled(FName TabNameID, bool bEnable);                                                         // [0x7272488] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonTabListWidgetBase.SetTabEnabled
	// void SetTabEnabled(FName TabNameID, bool bEnable);                                                                    // [0x2ca767c] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonTabListWidgetBase.SetListeningForInput
	// void SetListeningForInput(bool bShouldListen);                                                                        // [0x7271988] Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonTabListWidgetBase.SetLinkedSwitcher
	// void SetLinkedSwitcher(class UCommonAnimatedSwitcher* CommonSwitcher);                                                // [0x3ebbdb8] Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonTabListWidgetBase.SelectTabByID
	// bool SelectTabByID(FName TabNameID, bool bSuppressClickFeedback);                                                     // [0x2ca6c64] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonTabListWidgetBase.RemoveTab
	// bool RemoveTab(FName TabNameID);                                                                                      // [0x72704f8] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonTabListWidgetBase.RemoveAllTabs
	// void RemoveAllTabs();                                                                                                 // [0x25656b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonTabListWidgetBase.RegisterTab
	// bool RegisterTab(FName TabNameID, class UClass* ButtonWidgetType, class UWidget* ContentWidget, int32_t TabIndex);    // [0x34d57e4] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonTabListWidgetBase.OnTabSelected__DelegateSignature
	// void OnTabSelected__DelegateSignature(FName TabID);                                                                   // [0x18a39e4] MulticastDelegate|Public|Delegate 
	// Function /Script/CommonUI.CommonTabListWidgetBase.OnTabListRebuilt__DelegateSignature
	// void OnTabListRebuilt__DelegateSignature();                                                                           // [0x18a39e4] MulticastDelegate|Public|Delegate 
	// Function /Script/CommonUI.CommonTabListWidgetBase.OnTabButtonRemoval__DelegateSignature
	// void OnTabButtonRemoval__DelegateSignature(FName TabID, class UCommonButtonBase* TabButton);                          // [0x18a39e4] MulticastDelegate|Public|Delegate 
	// Function /Script/CommonUI.CommonTabListWidgetBase.OnTabButtonCreation__DelegateSignature
	// void OnTabButtonCreation__DelegateSignature(FName TabID, class UCommonButtonBase* TabButton);                         // [0x18a39e4] MulticastDelegate|Public|Delegate 
	// Function /Script/CommonUI.CommonTabListWidgetBase.HandleTabRemoval
	// void HandleTabRemoval(FName TabNameID, class UCommonButtonBase* TabButton);                                           // [0x362c1fc] Native|Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonTabListWidgetBase.HandleTabCreation
	// void HandleTabCreation(FName TabNameID, class UCommonButtonBase* TabButton);                                          // [0x216c7d0] Native|Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonTabListWidgetBase.HandleTabButtonSelected
	// void HandleTabButtonSelected(class UCommonButtonBase* SelectedTabButton, int32_t ButtonIndex);                        // [0x2ca7274] Final|Native|Protected 
	// Function /Script/CommonUI.CommonTabListWidgetBase.HandlePreviousTabInputAction
	// void HandlePreviousTabInputAction(bool& bPassThrough);                                                                // [0x726fcf4] Final|Native|Protected|HasOutParms 
	// Function /Script/CommonUI.CommonTabListWidgetBase.HandlePreLinkedSwitcherChanged_BP
	// void HandlePreLinkedSwitcherChanged_BP();                                                                             // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonTabListWidgetBase.HandlePostLinkedSwitcherChanged_BP
	// void HandlePostLinkedSwitcherChanged_BP();                                                                            // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonTabListWidgetBase.HandleNextTabInputAction
	// void HandleNextTabInputAction(bool& bPassThrough);                                                                    // [0x726fbb4] Final|Native|Protected|HasOutParms 
	// Function /Script/CommonUI.CommonTabListWidgetBase.GetTabIdAtIndex
	// FName GetTabIdAtIndex(int32_t Index);                                                                                 // [0x726f98c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonTabListWidgetBase.GetTabCount
	// int32_t GetTabCount();                                                                                                // [0x373bba8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonTabListWidgetBase.GetTabButtonBaseByID
	// class UCommonButtonBase* GetTabButtonBaseByID(FName TabNameID);                                                       // [0x2ca6e3c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonTabListWidgetBase.GetSelectedTabId
	// FName GetSelectedTabId();                                                                                             // [0x2ca7aa8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonTabListWidgetBase.GetLinkedSwitcher
	// class UCommonAnimatedSwitcher* GetLinkedSwitcher();                                                                   // [0x726f13c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonTabListWidgetBase.GetActiveTab
	// FName GetActiveTab();                                                                                                 // [0x726e934] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonTabListWidgetBase.DisableTabWithReason
	// void DisableTabWithReason(FName TabNameID, FText& Reason);                                                            // [0x726e7b4] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/CommonUI.CommonTextStyle
/// Size: 0x0178 (0x000028 - 0x0001A0)
class UCommonTextStyle : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	FSlateFontInfo                                     Font;                                                       // 0x0028   (0x0058)  
	FLinearColor                                       Color;                                                      // 0x0080   (0x0010)  
	bool                                               bUsesDropShadow;                                            // 0x0090   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0091   (0x0007)  MISSED
	FVector2D                                          ShadowOffset;                                               // 0x0098   (0x0010)  
	FLinearColor                                       ShadowColor;                                                // 0x00A8   (0x0010)  
	FMargin                                            Margin;                                                     // 0x00B8   (0x0010)  
	unsigned char                                      UnknownData02_5[0x8];                                       // 0x00C8   (0x0008)  MISSED
	FSlateBrush                                        StrikeBrush;                                                // 0x00D0   (0x00C0)  
	float                                              LineHeightPercentage;                                       // 0x0190   (0x0004)  
	bool                                               ApplyLineHeightToBottomLine;                                // 0x0194   (0x0001)  
	unsigned char                                      UnknownData03_6[0xB];                                       // 0x0195   (0x000B)  MISSED


	/// Functions
	// Function /Script/CommonUI.CommonTextStyle.GetStrikeBrush
	// void GetStrikeBrush(FSlateBrush& OutStrikeBrush);                                                                     // [0x726f8c0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonTextStyle.GetShadowOffset
	// void GetShadowOffset(FVector2D& OutShadowOffset);                                                                     // [0x726f818] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonTextStyle.GetShadowColor
	// void GetShadowColor(FLinearColor& OutColor);                                                                          // [0x726f78c] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonTextStyle.GetMargin
	// void GetMargin(FMargin& OutMargin);                                                                                   // [0x726f198] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonTextStyle.GetLineHeightPercentage
	// float GetLineHeightPercentage();                                                                                      // [0x726f124] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonTextStyle.GetFont
	// void GetFont(FSlateFontInfo& OutFont);                                                                                // [0x726f04c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonTextStyle.GetColor
	// void GetColor(FLinearColor& OutColor);                                                                                // [0x726eb68] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonTextStyle.GetApplyLineHeightToBottomLine
	// bool GetApplyLineHeightToBottomLine();                                                                                // [0x726e990] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/CommonUI.CommonTextScrollStyle
/// Size: 0x0018 (0x000028 - 0x000040)
class UCommonTextScrollStyle : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	float                                              Speed;                                                      // 0x0028   (0x0004)  
	float                                              StartDelay;                                                 // 0x002C   (0x0004)  
	float                                              EndDelay;                                                   // 0x0030   (0x0004)  
	float                                              FadeInDelay;                                                // 0x0034   (0x0004)  
	float                                              FadeOutDelay;                                               // 0x0038   (0x0004)  
	EWidgetClipping                                    Clipping;                                                   // 0x003C   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x003D   (0x0003)  MISSED
};

/// Class /Script/CommonUI.CommonTileView
/// Size: 0x0000 (0x000C00 - 0x000C00)
class UCommonTileView : public UTileView
{ 
public:
};

/// Class /Script/CommonUI.CommonTreeView
/// Size: 0x0000 (0x000C30 - 0x000C30)
class UCommonTreeView : public UTreeView
{ 
public:
};

/// Class /Script/CommonUI.CommonUIEditorSettings
/// Size: 0x0068 (0x000028 - 0x000090)
class UCommonUIEditorSettings : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	SDK_UNDEFINED(32,1884) /* TWeakObjectPtr<UClass*> */ __um(TemplateTextStyle);                                  // 0x0028   (0x0020)  
	SDK_UNDEFINED(32,1885) /* TWeakObjectPtr<UClass*> */ __um(TemplateButtonStyle);                                // 0x0048   (0x0020)  
	SDK_UNDEFINED(32,1886) /* TWeakObjectPtr<UClass*> */ __um(TemplateBorderStyle);                                // 0x0068   (0x0020)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0088   (0x0008)  MISSED
};

/// Class /Script/CommonUI.CommonUILibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UCommonUILibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/CommonUI.CommonUILibrary.FindParentWidgetOfType
	// class UWidget* FindParentWidgetOfType(class UWidget* StartingWidget, class UClass* Type);                             // [0x3757df4] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/CommonUI.CommonUIRichTextData
/// Size: 0x0008 (0x000028 - 0x000030)
class UCommonUIRichTextData : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	class UDataTable*                                  InlineIconSet;                                              // 0x0028   (0x0008)  
};

/// Class /Script/CommonUI.CommonUISettings
/// Size: 0x0188 (0x000028 - 0x0001B0)
class UCommonUISettings : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	bool                                               bAutoLoadData;                                              // 0x0028   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0029   (0x0007)  MISSED
	SDK_UNDEFINED(32,1887) /* TWeakObjectPtr<UObject*> */ __um(DefaultImageResourceObject);                        // 0x0030   (0x0020)  
	SDK_UNDEFINED(32,1888) /* TWeakObjectPtr<UMaterialInterface*> */ __um(DefaultThrobberMaterial);                // 0x0050   (0x0020)  
	SDK_UNDEFINED(32,1889) /* TWeakObjectPtr<UClass*> */ __um(DefaultRichTextDataClass);                           // 0x0070   (0x0020)  
	TArray<FGameplayTag>                               PlatformTraits;                                             // 0x0090   (0x0010)  
	unsigned char                                      UnknownData02_5[0x28];                                      // 0x00A0   (0x0028)  MISSED
	class UObject*                                     DefaultImageResourceObjectInstance;                         // 0x00C8   (0x0008)  
	class UMaterialInterface*                          DefaultThrobberMaterialInstance;                            // 0x00D0   (0x0008)  
	unsigned char                                      UnknownData03_5[0x8];                                       // 0x00D8   (0x0008)  MISSED
	FSlateBrush                                        DefaultThrobberBrush;                                       // 0x00E0   (0x00C0)  
	class UCommonUIRichTextData*                       RichTextDataInstance;                                       // 0x01A0   (0x0008)  
	unsigned char                                      UnknownData04_6[0x8];                                       // 0x01A8   (0x0008)  MISSED
};

/// Class /Script/CommonUI.CommonUISubsystemBase
/// Size: 0x0010 (0x000030 - 0x000040)
class UCommonUISubsystemBase : public UGameInstanceSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0030   (0x0010)  MISSED


	/// Functions
	// Function /Script/CommonUI.CommonUISubsystemBase.GetInputActionButtonIcon
	// FSlateBrush GetInputActionButtonIcon(FDataTableRowHandle& InputActionRowHandle, ECommonInputType InputType, FName& GamepadName); // [0x3099ba4] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonUISubsystemBase.GetEnhancedInputActionButtonIcon
	// FSlateBrush GetEnhancedInputActionButtonIcon(class UInputAction* InputAction, class ULocalPlayer* LocalPlayer);       // [0x726ef48] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/CommonUI.CommonInputMetadata
/// Size: 0x0008 (0x000028 - 0x000030)
class UCommonInputMetadata : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	int32_t                                            NavBarPriority;                                             // 0x0028   (0x0004)  
	bool                                               bIsGenericInputAction;                                      // 0x002C   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x002D   (0x0003)  MISSED
};

/// Class /Script/CommonUI.CommonMappingContextMetadataInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UCommonMappingContextMetadataInterface : public UInterface
{ 
public:
};

/// Class /Script/CommonUI.CommonMappingContextMetadata
/// Size: 0x0060 (0x000030 - 0x000090)
class UCommonMappingContextMetadata : public UDataAsset
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0030   (0x0008)  MISSED
	class UCommonInputMetadata*                        EnhancedInputMetadata;                                      // 0x0038   (0x0008)  
	SDK_UNDEFINED(80,1890) /* TMap<UInputAction*, UCommonInputMetadata*> */ __um(PerActionEnhancedInputMetadata);  // 0x0040   (0x0050)  
};

/// Class /Script/CommonUI.CommonUIVisibilitySubsystem
/// Size: 0x0058 (0x000030 - 0x000088)
class UCommonUIVisibilitySubsystem : public ULocalPlayerSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x58];                                      // 0x0030   (0x0058)  MISSED
};

/// Class /Script/CommonUI.CommonVideoPlayer
/// Size: 0x0158 (0x000178 - 0x0002D0)
class UCommonVideoPlayer : public UWidget
{ 
public:
	class UMediaSource*                                Video;                                                      // 0x0178   (0x0008)  
	bool                                               bMatchSize;                                                 // 0x0180   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0181   (0x0007)  MISSED
	class UMediaPlayer*                                MediaPlayer;                                                // 0x0188   (0x0008)  
	class UMediaTexture*                               MediaTexture;                                               // 0x0190   (0x0008)  
	class UMaterial*                                   VideoMaterial;                                              // 0x0198   (0x0008)  
	class UMediaSoundComponent*                        SoundComponent;                                             // 0x01A0   (0x0008)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x01A8   (0x0008)  MISSED
	FSlateBrush                                        VideoBrush;                                                 // 0x01B0   (0x00C0)  
	unsigned char                                      UnknownData02_6[0x60];                                      // 0x0270   (0x0060)  MISSED
};

/// Class /Script/CommonUI.CommonVisibilitySwitcher
/// Size: 0x0028 (0x0001A0 - 0x0001C8)
class UCommonVisibilitySwitcher : public UOverlay
{ 
public:
	ESlateVisibility                                   ShownVisibility;                                            // 0x01A0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x01A1   (0x0003)  MISSED
	int32_t                                            ActiveWidgetIndex;                                          // 0x01A4   (0x0004)  
	bool                                               bAutoActivateSlot;                                          // 0x01A8   (0x0001)  
	bool                                               bActivateFirstSlotOnAdding;                                 // 0x01A9   (0x0001)  
	unsigned char                                      UnknownData01_6[0x1E];                                      // 0x01AA   (0x001E)  MISSED


	/// Functions
	// Function /Script/CommonUI.CommonVisibilitySwitcher.SetActiveWidgetIndex
	// void SetActiveWidgetIndex(int32_t Index);                                                                             // [0x203d670] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonVisibilitySwitcher.SetActiveWidget
	// void SetActiveWidget(class UWidget* Widget);                                                                          // [0x203d6f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonVisibilitySwitcher.IsCurrentlySwitching
	// bool IsCurrentlySwitching();                                                                                          // [0x727000c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonVisibilitySwitcher.IncrementActiveWidgetIndex
	// void IncrementActiveWidgetIndex(bool bAllowWrapping);                                                                 // [0x726fe34] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonVisibilitySwitcher.GetActiveWidgetIndex
	// int32_t GetActiveWidgetIndex();                                                                                       // [0x3841100] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonVisibilitySwitcher.GetActiveWidget
	// class UWidget* GetActiveWidget();                                                                                     // [0x3e61978] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonVisibilitySwitcher.DecrementActiveWidgetIndex
	// void DecrementActiveWidgetIndex(bool bAllowWrapping);                                                                 // [0x726e698] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonVisibilitySwitcher.DeactivateVisibleSlot
	// void DeactivateVisibleSlot();                                                                                         // [0x726e684] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonVisibilitySwitcher.ActivateVisibleSlot
	// void ActivateVisibleSlot();                                                                                           // [0x726e18c] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/CommonUI.CommonVisibilitySwitcherSlot
/// Size: 0x0010 (0x000058 - 0x000068)
class UCommonVisibilitySwitcherSlot : public UOverlaySlot
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0058   (0x0010)  MISSED
};

/// Class /Script/CommonUI.UCommonVisibilityWidgetBase
/// Size: 0x0060 (0x000320 - 0x000380)
class UUCommonVisibilityWidgetBase : public UCommonBorder
{ 
public:
	SDK_UNDEFINED(80,1891) /* TMap<FName, bool> */     __um(VisibilityControls);                                   // 0x0320   (0x0050)  
	bool                                               bShowForGamepad;                                            // 0x0370   (0x0001)  
	bool                                               bShowForMouseAndKeyboard;                                   // 0x0371   (0x0001)  
	bool                                               bShowForTouch;                                              // 0x0372   (0x0001)  
	ESlateVisibility                                   VisibleType;                                                // 0x0373   (0x0001)  
	ESlateVisibility                                   HiddenType;                                                 // 0x0374   (0x0001)  
	unsigned char                                      UnknownData00_6[0xB];                                       // 0x0375   (0x000B)  MISSED


	/// Functions
	// Function /Script/CommonUI.UCommonVisibilityWidgetBase.GetRegisteredPlatforms
	// TArray<FName> GetRegisteredPlatforms();                                                                               // [0x726f488] Final|Native|Static|Protected 
};

/// Class /Script/CommonUI.CommonVisualAttachment
/// Size: 0x0020 (0x0001C8 - 0x0001E8)
class UCommonVisualAttachment : public USizeBox
{ 
public:
	FVector2D                                          ContentAnchor;                                              // 0x01C8   (0x0010)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x01D8   (0x0010)  MISSED
};

/// Class /Script/CommonUI.CommonWidgetCarousel
/// Size: 0x0048 (0x000190 - 0x0001D8)
class UCommonWidgetCarousel : public UPanelWidget
{ 
public:
	int32_t                                            ActiveWidgetIndex;                                          // 0x0190   (0x0004)  
	float                                              MoveSpeed;                                                  // 0x0194   (0x0004)  
	SDK_UNDEFINED(16,1892) /* FMulticastInlineDelegate */ __um(OnCurrentPageIndexChanged);                         // 0x0198   (0x0010)  
	unsigned char                                      UnknownData00_6[0x30];                                      // 0x01A8   (0x0030)  MISSED


	/// Functions
	// Function /Script/CommonUI.CommonWidgetCarousel.SetMoveSpeed
	// void SetMoveSpeed(float InMoveSpeed);                                                                                 // [0x7271cac] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonWidgetCarousel.SetActiveWidgetIndex
	// void SetActiveWidgetIndex(int32_t Index);                                                                             // [0x727094c] Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonWidgetCarousel.SetActiveWidget
	// void SetActiveWidget(class UWidget* Widget);                                                                          // [0x72708c8] Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonWidgetCarousel.PreviousPage
	// void PreviousPage();                                                                                                  // [0x7270468] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonWidgetCarousel.NextPage
	// void NextPage();                                                                                                      // [0x7270324] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonWidgetCarousel.GetWidgetAtIndex
	// class UWidget* GetWidgetAtIndex(int32_t Index);                                                                       // [0x726fa30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonWidgetCarousel.GetMoveSpeed
	// float GetMoveSpeed();                                                                                                 // [0x726f228] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonWidgetCarousel.GetActiveWidgetIndex
	// int32_t GetActiveWidgetIndex();                                                                                       // [0x726e970] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonWidgetCarousel.EndAutoScrolling
	// void EndAutoScrolling();                                                                                              // [0x726e890] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonWidgetCarousel.BeginAutoScrolling
	// void BeginAutoScrolling(float ScrollInterval);                                                                        // [0x726e410] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/CommonUI.CommonWidgetCarouselNavBar
/// Size: 0x0048 (0x000178 - 0x0001C0)
class UCommonWidgetCarouselNavBar : public UWidget
{ 
public:
	class UClass*                                      ButtonWidgetType;                                           // 0x0178   (0x0008)  
	FMargin                                            ButtonPadding;                                              // 0x0180   (0x0010)  
	unsigned char                                      UnknownData00_5[0x10];                                      // 0x0190   (0x0010)  MISSED
	class UCommonWidgetCarousel*                       LinkedCarousel;                                             // 0x01A0   (0x0008)  
	class UCommonButtonGroupBase*                      ButtonGroup;                                                // 0x01A8   (0x0008)  
	TArray<class UCommonButtonBase*>                   Buttons;                                                    // 0x01B0   (0x0010)  


	/// Functions
	// Function /Script/CommonUI.CommonWidgetCarouselNavBar.SetLinkedCarousel
	// void SetLinkedCarousel(class UCommonWidgetCarousel* CommonCarousel);                                                  // [0x7271908] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonWidgetCarouselNavBar.HandlePageChanged
	// void HandlePageChanged(class UCommonWidgetCarousel* CommonCarousel, int32_t PageIndex);                               // [0x726fc30] Final|Native|Protected 
	// Function /Script/CommonUI.CommonWidgetCarouselNavBar.HandleButtonClicked
	// void HandleButtonClicked(class UCommonButtonBase* AssociatedButton, int32_t ButtonIndex);                             // [0x726fad8] Final|Native|Protected 
};

/// Class /Script/CommonUI.CommonWidgetGroupBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UCommonWidgetGroupBase : public UObject
{ 
public:


	/// Functions
	// Function /Script/CommonUI.CommonWidgetGroupBase.RemoveWidget
	// void RemoveWidget(class UWidget* InWidget);                                                                           // [0x7270600] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonWidgetGroupBase.RemoveAll
	// void RemoveAll();                                                                                                     // [0x35bd900] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonWidgetGroupBase.AddWidgets
	// void AddWidgets(TArray<UWidget*>& Widgets);                                                                           // [0x726e1a0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CommonUI.CommonWidgetGroupBase.AddWidget
	// void AddWidget(class UWidget* InWidget);                                                                              // [0x3969a90] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/CommonUI.CommonButtonGroupBase
/// Size: 0x00E8 (0x000028 - 0x000110)
class UCommonButtonGroupBase : public UCommonWidgetGroupBase
{ 
public:
	SDK_UNDEFINED(16,1893) /* FMulticastInlineDelegate */ __um(OnSelectedButtonBaseChanged);                       // 0x0028   (0x0010)  
	unsigned char                                      UnknownData00_5[0x18];                                      // 0x0038   (0x0018)  MISSED
	SDK_UNDEFINED(16,1894) /* FMulticastInlineDelegate */ __um(OnHoveredButtonBaseChanged);                        // 0x0050   (0x0010)  
	unsigned char                                      UnknownData01_5[0x18];                                      // 0x0060   (0x0018)  MISSED
	SDK_UNDEFINED(16,1895) /* FMulticastInlineDelegate */ __um(OnButtonBaseClicked);                               // 0x0078   (0x0010)  
	unsigned char                                      UnknownData02_5[0x18];                                      // 0x0088   (0x0018)  MISSED
	SDK_UNDEFINED(16,1896) /* FMulticastInlineDelegate */ __um(OnButtonBaseDoubleClicked);                         // 0x00A0   (0x0010)  
	unsigned char                                      UnknownData03_5[0x18];                                      // 0x00B0   (0x0018)  MISSED
	SDK_UNDEFINED(16,1897) /* FMulticastInlineDelegate */ __um(OnSelectionCleared);                                // 0x00C8   (0x0010)  
	unsigned char                                      UnknownData04_5[0x18];                                      // 0x00D8   (0x0018)  MISSED
	bool                                               bSelectionRequired;                                         // 0x00F0   (0x0001)  
	unsigned char                                      UnknownData05_6[0x1F];                                      // 0x00F1   (0x001F)  MISSED


	/// Functions
	// Function /Script/CommonUI.CommonButtonGroupBase.SetSelectionRequired
	// void SetSelectionRequired(bool bRequireSelection);                                                                    // [0x7272274] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonGroupBase.SelectPreviousButton
	// void SelectPreviousButton(bool bAllowWrap);                                                                           // [0x7270848] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonGroupBase.SelectNextButton
	// void SelectNextButton(bool bAllowWrap);                                                                               // [0x72707c8] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonGroupBase.SelectButtonAtIndex
	// void SelectButtonAtIndex(int32_t ButtonIndex, bool bAllowSound);                                                      // [0x7270704] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonGroupBase.OnSelectionStateChangedBase
	// void OnSelectionStateChangedBase(class UCommonButtonBase* BaseButton, bool bIsSelected);                              // [0x31bcae4] Native|Protected     
	// Function /Script/CommonUI.CommonButtonGroupBase.OnHandleButtonBaseDoubleClicked
	// void OnHandleButtonBaseDoubleClicked(class UCommonButtonBase* BaseButton);                                            // [0x727034c] Native|Protected     
	// Function /Script/CommonUI.CommonButtonGroupBase.OnHandleButtonBaseClicked
	// void OnHandleButtonBaseClicked(class UCommonButtonBase* BaseButton);                                                  // [0x31bc864] Native|Protected     
	// Function /Script/CommonUI.CommonButtonGroupBase.OnButtonBaseUnhovered
	// void OnButtonBaseUnhovered(class UCommonButtonBase* BaseButton);                                                      // [0x31bc9c0] Native|Protected     
	// Function /Script/CommonUI.CommonButtonGroupBase.OnButtonBaseHovered
	// void OnButtonBaseHovered(class UCommonButtonBase* BaseButton);                                                        // [0x31bc93c] Native|Protected     
	// Function /Script/CommonUI.CommonButtonGroupBase.HasAnyButtons
	// bool HasAnyButtons();                                                                                                 // [0x726fe00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonGroupBase.GetSelectedButtonIndex
	// int32_t GetSelectedButtonIndex();                                                                                     // [0x726f580] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonGroupBase.GetSelectedButtonBase
	// class UCommonButtonBase* GetSelectedButtonBase();                                                                     // [0x726f55c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonGroupBase.GetHoveredButtonIndex
	// int32_t GetHoveredButtonIndex();                                                                                      // [0x726f0f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonGroupBase.GetButtonCount
	// int32_t GetButtonCount();                                                                                             // [0x6581bbc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonGroupBase.GetButtonBaseAtIndex
	// class UCommonButtonBase* GetButtonBaseAtIndex(int32_t Index);                                                         // [0x726ea4c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonGroupBase.FindButtonIndex
	// int32_t FindButtonIndex(class UCommonButtonBase* ButtonToFind);                                                       // [0x726e8a4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonGroupBase.DeselectAll
	// void DeselectAll();                                                                                                   // [0x3ed5678] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/CommonUI.CommonBoundActionBar
/// Size: 0x0030 (0x000258 - 0x000288)
class UCommonBoundActionBar : public UDynamicEntryBoxBase
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0258   (0x0008)  MISSED
	class UClass*                                      ActionButtonClass;                                          // 0x0260   (0x0008)  
	bool                                               bDisplayOwningPlayerActionsOnly;                            // 0x0268   (0x0001)  
	bool                                               bIgnoreDuplicateActions;                                    // 0x0269   (0x0001)  
	unsigned char                                      UnknownData01_5[0x6];                                       // 0x026A   (0x0006)  MISSED
	SDK_UNDEFINED(16,1898) /* FMulticastInlineDelegate */ __um(OnActionBarUpdated);                                // 0x0270   (0x0010)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x0280   (0x0008)  MISSED


	/// Functions
	// Function /Script/CommonUI.CommonBoundActionBar.SetDisplayOwningPlayerActionsOnly
	// void SetDisplayOwningPlayerActionsOnly(bool bShouldOnlyDisplayOwningPlayerActions);                                   // [0x334c6f0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/CommonUI.CommonBoundActionButton
/// Size: 0x0020 (0x001490 - 0x0014B0)
#pragma pack(push, 0x1)
class alignas(0x10) UCommonBoundActionButton : public UCommonButtonBase
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x1490   (0x0008)  MISSED
	class UCommonTextBlock*                            Text_ActionName;                                            // 0x1498   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x14A0   (0x0008)  MISSED


	/// Functions
	// Function /Script/CommonUI.CommonBoundActionButton.OnUpdateInputAction
	// void OnUpdateInputAction();                                                                                           // [0x18a39e4] Event|Protected|BlueprintEvent 
};
#pragma pack(pop)

/// Class /Script/CommonUI.CommonGenericInputActionDataTable
/// Size: 0x0000 (0x0000B0 - 0x0000B0)
class UCommonGenericInputActionDataTable : public UDataTable
{ 
public:
};

/// Class /Script/CommonUI.CommonInputActionDataProcessor
/// Size: 0x0000 (0x000028 - 0x000028)
class UCommonInputActionDataProcessor : public UObject
{ 
public:
};

/// Class /Script/CommonUI.CommonUIActionRouterBase
/// Size: 0x0140 (0x000030 - 0x000170)
class UCommonUIActionRouterBase : public ULocalPlayerSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x140];                                     // 0x0030   (0x0140)  MISSED
};

/// Struct /Script/CommonUI.UITag
/// Size: 0x0000 (0x000004 - 0x000004)
struct FUITag : FGameplayTag
{ 
};

/// Struct /Script/CommonUI.UIActionTag
/// Size: 0x0000 (0x000004 - 0x000004)
struct FUIActionTag : FUITag
{ 
};

/// Struct /Script/CommonUI.UIActionKeyMapping
/// Size: 0x0020 (0x000000 - 0x000020)
struct FUIActionKeyMapping
{ 
	FKey                                               Key;                                                        // 0x0000   (0x0018)  
	float                                              HoldTime;                                                   // 0x0018   (0x0004)  
	float                                              HoldRollbackTime;                                           // 0x001C   (0x0004)  
};

/// Struct /Script/CommonUI.UIInputAction
/// Size: 0x0030 (0x000000 - 0x000030)
struct FUIInputAction
{ 
	FUIActionTag                                       ActionTag;                                                  // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	SDK_UNDEFINED(24,1899) /* FText */                 __um(DefaultDisplayName);                                   // 0x0008   (0x0018)  
	TArray<FUIActionKeyMapping>                        KeyMappings;                                                // 0x0020   (0x0010)  
};

/// Struct /Script/CommonUI.CommonAnalogCursorSettings
/// Size: 0x0024 (0x000000 - 0x000024)
struct FCommonAnalogCursorSettings
{ 
	int32_t                                            PreprocessorPriority;                                       // 0x0000   (0x0004)  
	bool                                               bEnableCursorAcceleration;                                  // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0005   (0x0003)  MISSED
	float                                              CursorAcceleration;                                         // 0x0008   (0x0004)  
	float                                              CursorMaxSpeed;                                             // 0x000C   (0x0004)  
	float                                              CursorDeadZone;                                             // 0x0010   (0x0004)  
	float                                              HoverSlowdownFactor;                                        // 0x0014   (0x0004)  
	float                                              ScrollDeadZone;                                             // 0x0018   (0x0004)  
	float                                              ScrollUpdatePeriod;                                         // 0x001C   (0x0004)  
	float                                              ScrollMultiplier;                                           // 0x0020   (0x0004)  
};

/// Class /Script/CommonUI.CommonUIInputSettings
/// Size: 0x0050 (0x000028 - 0x000078)
class UCommonUIInputSettings : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	bool                                               bLinkCursorToGamepadFocus;                                  // 0x0028   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0029   (0x0003)  MISSED
	int32_t                                            UIActionProcessingPriority;                                 // 0x002C   (0x0004)  
	TArray<FUIInputAction>                             InputActions;                                               // 0x0030   (0x0010)  
	TArray<FUIInputAction>                             ActionOverrides;                                            // 0x0040   (0x0010)  
	FCommonAnalogCursorSettings                        AnalogCursorSettings;                                       // 0x0050   (0x0024)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0074   (0x0004)  MISSED
};

/// Class /Script/CommonUI.CommonActivatableWidgetContainerBase
/// Size: 0x0120 (0x000178 - 0x000298)
class UCommonActivatableWidgetContainerBase : public UWidget
{ 
public:
	unsigned char                                      UnknownData00_3[0x18];                                      // 0x0178   (0x0018)  MISSED
	ECommonSwitcherTransition                          TransitionType;                                             // 0x0190   (0x0001)  
	ETransitionCurve                                   TransitionCurveType;                                        // 0x0191   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x0192   (0x0002)  MISSED
	float                                              TransitionDuration;                                         // 0x0194   (0x0004)  
	TArray<class UCommonActivatableWidget*>            WidgetList;                                                 // 0x0198   (0x0010)  
	class UCommonActivatableWidget*                    DisplayedWidget;                                            // 0x01A8   (0x0008)  
	FUserWidgetPool                                    GeneratedWidgetsPool;                                       // 0x01B0   (0x0088)  
	unsigned char                                      UnknownData02_6[0x60];                                      // 0x0238   (0x0060)  MISSED


	/// Functions
	// Function /Script/CommonUI.CommonActivatableWidgetContainerBase.SetTransitionDuration
	// void SetTransitionDuration(float duration);                                                                           // [0x72727c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonActivatableWidgetContainerBase.RemoveWidget
	// void RemoveWidget(class UCommonActivatableWidget* WidgetToRemove);                                                    // [0x7270584] Final|Native|Private|BlueprintCallable 
	// Function /Script/CommonUI.CommonActivatableWidgetContainerBase.GetTransitionDuration
	// float GetTransitionDuration();                                                                                        // [0x686a36c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonActivatableWidgetContainerBase.GetActiveWidget
	// class UCommonActivatableWidget* GetActiveWidget();                                                                    // [0x726e94c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonActivatableWidgetContainerBase.ClearWidgets
	// void ClearWidgets();                                                                                                  // [0x726e670] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonActivatableWidgetContainerBase.BP_AddWidget
	// class UCommonActivatableWidget* BP_AddWidget(class UClass* ActivatableWidgetClass);                                   // [0x726e23c] Final|Native|Private|BlueprintCallable 
};

/// Class /Script/CommonUI.CommonActivatableWidgetStack
/// Size: 0x0010 (0x000298 - 0x0002A8)
class UCommonActivatableWidgetStack : public UCommonActivatableWidgetContainerBase
{ 
public:
	class UClass*                                      RootContentWidgetClass;                                     // 0x0298   (0x0008)  
	class UCommonActivatableWidget*                    RootContentWidget;                                          // 0x02A0   (0x0008)  
};

/// Class /Script/CommonUI.CommonActivatableWidgetQueue
/// Size: 0x0000 (0x000298 - 0x000298)
class UCommonActivatableWidgetQueue : public UCommonActivatableWidgetContainerBase
{ 
public:
};

/// Struct /Script/CommonUI.CommonRegisteredTabInfo
/// Size: 0x0018 (0x000000 - 0x000018)
struct FCommonRegisteredTabInfo
{ 
	int32_t                                            TabIndex;                                                   // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	class UCommonButtonBase*                           TabButton;                                                  // 0x0008   (0x0008)  
	class UWidget*                                     ContentInstance;                                            // 0x0010   (0x0008)  
};

/// Struct /Script/CommonUI.UIInputConfig
/// Size: 0x0006 (0x000000 - 0x000006)
struct FUIInputConfig
{ 
	bool                                               bIgnoreMoveInput;                                           // 0x0000   (0x0001)  
	bool                                               bIgnoreLookInput;                                           // 0x0001   (0x0001)  
	ECommonInputMode                                   InputMode;                                                  // 0x0002   (0x0001)  
	EMouseCaptureMode                                  MouseCaptureMode;                                           // 0x0003   (0x0001)  
	EMouseLockMode                                     MouseLockMode;                                              // 0x0004   (0x0001)  
	bool                                               bHideCursorDuringViewportCapture;                           // 0x0005   (0x0001)  
};

/// Struct /Script/CommonUI.CommonInputActionHandlerData
/// Size: 0x0020 (0x000000 - 0x000020)
struct FCommonInputActionHandlerData
{ 
	FDataTableRowHandle                                InputActionRow;                                             // 0x0000   (0x0010)  
	EInputActionState                                  State;                                                      // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0xF];                                       // 0x0011   (0x000F)  MISSED
};

/// Struct /Script/CommonUI.UIActionBindingHandle
/// Size: 0x0004 (0x000000 - 0x000004)
struct FUIActionBindingHandle
{ 
	unsigned char                                      UnknownData00_2[0x4];                                       // 0x0000   (0x0004)  MISSED
};

/// Struct /Script/CommonUI.RichTextIconData
/// Size: 0x0048 (0x000008 - 0x000050)
struct FRichTextIconData : FTableRowBase
{ 
	SDK_UNDEFINED(24,1900) /* FText */                 __um(DisplayName);                                          // 0x0008   (0x0018)  
	SDK_UNDEFINED(32,1901) /* TWeakObjectPtr<UObject*> */ __um(ResourceObject);                                    // 0x0020   (0x0020)  
	FVector2D                                          ImageSize;                                                  // 0x0040   (0x0010)  
};

/// Struct /Script/CommonUI.CommonInputTypeInfo
/// Size: 0x00F0 (0x000000 - 0x0000F0)
struct FCommonInputTypeInfo
{ 
	FKey                                               Key;                                                        // 0x0000   (0x0018)  
	EInputActionState                                  OverrrideState;                                             // 0x0018   (0x0001)  
	bool                                               bActionRequiresHold;                                        // 0x0019   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x001A   (0x0002)  MISSED
	float                                              HoldTime;                                                   // 0x001C   (0x0004)  
	float                                              HoldRollbackTime;                                           // 0x0020   (0x0004)  
	unsigned char                                      UnknownData01_5[0xC];                                       // 0x0024   (0x000C)  MISSED
	FSlateBrush                                        OverrideBrush;                                              // 0x0030   (0x00C0)  
};

/// Struct /Script/CommonUI.CommonInputActionDataBase
/// Size: 0x0358 (0x000008 - 0x000360)
struct FCommonInputActionDataBase : FTableRowBase
{ 
	SDK_UNDEFINED(24,1902) /* FText */                 __um(DisplayName);                                          // 0x0008   (0x0018)  
	SDK_UNDEFINED(24,1903) /* FText */                 __um(HoldDisplayName);                                      // 0x0020   (0x0018)  
	int32_t                                            NavBarPriority;                                             // 0x0038   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x003C   (0x0004)  MISSED
	FCommonInputTypeInfo                               KeyboardInputTypeInfo;                                      // 0x0040   (0x00F0)  
	FCommonInputTypeInfo                               DefaultGamepadInputTypeInfo;                                // 0x0130   (0x00F0)  
	SDK_UNDEFINED(80,1904) /* TMap<FName, FCommonInputTypeInfo> */ __um(GamepadInputOverrides);                    // 0x0220   (0x0050)  
	FCommonInputTypeInfo                               TouchInputTypeInfo;                                         // 0x0270   (0x00F0)  
};

