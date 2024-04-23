
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: SlateCore
/// dependency: UMG

/// Class /Script/AdvancedWidgets.RadialSlider
/// Size: 0x0620 (0x000170 - 0x000790)
class URadialSlider : public UWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1936;

public:
	DMember(float)                                     Value                                                       OFFSET(get<float>, {0x170, 4, 0, 0})
	SMember(FDelegateProperty)                         ValueDelegate                                               OFFSET(getStruct<T>, {0x174, 12, 0, 0})
	DMember(bool)                                      bUseCustomDefaultValue                                      OFFSET(get<bool>, {0x180, 1, 0, 0})
	DMember(float)                                     CustomDefaultValue                                          OFFSET(get<float>, {0x184, 4, 0, 0})
	SMember(FRuntimeFloatCurve)                        SliderRange                                                 OFFSET(getStruct<T>, {0x188, 136, 0, 0})
	CMember(TArray<float>)                             ValueTags                                                   OFFSET(get<T>, {0x210, 16, 0, 0})
	DMember(float)                                     SliderHandleStartAngle                                      OFFSET(get<float>, {0x220, 4, 0, 0})
	DMember(float)                                     SliderHandleEndAngle                                        OFFSET(get<float>, {0x224, 4, 0, 0})
	DMember(float)                                     AngularOffset                                               OFFSET(get<float>, {0x228, 4, 0, 0})
	SMember(FVector2D)                                 HandStartEndRatio                                           OFFSET(getStruct<T>, {0x230, 16, 0, 0})
	SMember(FSliderStyle)                              WidgetStyle                                                 OFFSET(getStruct<T>, {0x240, 1184, 0, 0})
	SMember(FLinearColor)                              SliderBarColor                                              OFFSET(getStruct<T>, {0x6E0, 16, 0, 0})
	SMember(FLinearColor)                              SliderProgressColor                                         OFFSET(getStruct<T>, {0x6F0, 16, 0, 0})
	SMember(FLinearColor)                              SliderHandleColor                                           OFFSET(getStruct<T>, {0x700, 16, 0, 0})
	SMember(FLinearColor)                              CenterBackgroundColor                                       OFFSET(getStruct<T>, {0x710, 16, 0, 0})
	DMember(bool)                                      Locked                                                      OFFSET(get<bool>, {0x720, 1, 0, 0})
	DMember(bool)                                      MouseUsesStep                                               OFFSET(get<bool>, {0x721, 1, 0, 0})
	DMember(bool)                                      RequiresControllerLock                                      OFFSET(get<bool>, {0x722, 1, 0, 0})
	DMember(float)                                     StepSize                                                    OFFSET(get<float>, {0x724, 4, 0, 0})
	DMember(bool)                                      IsFocusable                                                 OFFSET(get<bool>, {0x728, 1, 0, 0})
	DMember(bool)                                      UseVerticalDrag                                             OFFSET(get<bool>, {0x729, 1, 0, 0})
	DMember(bool)                                      ShowSliderHandle                                            OFFSET(get<bool>, {0x72A, 1, 0, 0})
	DMember(bool)                                      ShowSliderHand                                              OFFSET(get<bool>, {0x72B, 1, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnMouseCaptureBegin                                         OFFSET(getStruct<T>, {0x730, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnMouseCaptureEnd                                           OFFSET(getStruct<T>, {0x740, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnControllerCaptureBegin                                    OFFSET(getStruct<T>, {0x750, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnControllerCaptureEnd                                      OFFSET(getStruct<T>, {0x760, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnValueChanged                                              OFFSET(getStruct<T>, {0x770, 16, 0, 0})


	/// Functions
	// Function /Script/AdvancedWidgets.RadialSlider.SetValueTags
	// void SetValueTags(TArray<float>& InValueTags);                                                                           // [0xb30878c] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AdvancedWidgets.RadialSlider.SetValue
	// void SetValue(float InValue);                                                                                            // [0xb30870c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AdvancedWidgets.RadialSlider.SetUseVerticalDrag
	// void SetUseVerticalDrag(bool InUseVerticalDrag);                                                                         // [0xb308684] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AdvancedWidgets.RadialSlider.SetStepSize
	// void SetStepSize(float InValue);                                                                                         // [0xb308604] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AdvancedWidgets.RadialSlider.SetSliderRange
	// void SetSliderRange(FRuntimeFloatCurve& InSliderRange);                                                                  // [0xb308518] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AdvancedWidgets.RadialSlider.SetSliderProgressColor
	// void SetSliderProgressColor(FLinearColor InValue);                                                                       // [0xb30847c] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AdvancedWidgets.RadialSlider.SetSliderHandleStartAngle
	// void SetSliderHandleStartAngle(float InValue);                                                                           // [0xb3083ec] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AdvancedWidgets.RadialSlider.SetSliderHandleEndAngle
	// void SetSliderHandleEndAngle(float InValue);                                                                             // [0xb30835c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AdvancedWidgets.RadialSlider.SetSliderHandleColor
	// void SetSliderHandleColor(FLinearColor InValue);                                                                         // [0xb3082c0] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AdvancedWidgets.RadialSlider.SetSliderBarColor
	// void SetSliderBarColor(FLinearColor InValue);                                                                            // [0xb308224] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AdvancedWidgets.RadialSlider.SetShowSliderHandle
	// void SetShowSliderHandle(bool InShowSliderHandle);                                                                       // [0xb30819c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AdvancedWidgets.RadialSlider.SetShowSliderHand
	// void SetShowSliderHand(bool InShowSliderHand);                                                                           // [0xb308114] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AdvancedWidgets.RadialSlider.SetLocked
	// void SetLocked(bool InValue);                                                                                            // [0xb308058] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AdvancedWidgets.RadialSlider.SetHandStartEndRatio
	// void SetHandStartEndRatio(FVector2D InValue);                                                                            // [0xb307f94] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AdvancedWidgets.RadialSlider.SetCustomDefaultValue
	// void SetCustomDefaultValue(float InValue);                                                                               // [0xb307f14] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AdvancedWidgets.RadialSlider.SetCenterBackgroundColor
	// void SetCenterBackgroundColor(FLinearColor InValue);                                                                     // [0xb307e78] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AdvancedWidgets.RadialSlider.SetAngularOffset
	// void SetAngularOffset(float InValue);                                                                                    // [0xb307dec] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AdvancedWidgets.RadialSlider.GetValue
	// float GetValue();                                                                                                        // [0xb307dc4] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AdvancedWidgets.RadialSlider.GetNormalizedSliderHandlePosition
	// float GetNormalizedSliderHandlePosition();                                                                               // [0xb307d8c] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AdvancedWidgets.RadialSlider.GetCustomDefaultValue
	// float GetCustomDefaultValue();                                                                                           // [0xb307d64] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

