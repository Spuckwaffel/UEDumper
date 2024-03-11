
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: SlateCore
/// dependency: UMG

/// Class /Script/AdvancedWidgets.RadialSlider
/// Size: 0x0628 (0x000178 - 0x0007A0)
class URadialSlider : public UWidget
{ 
public:
	float                                              Value;                                                      // 0x0178   (0x0004)  
	SDK_UNDEFINED(12,11722) /* FDelegateProperty */    __um(ValueDelegate);                                        // 0x017C   (0x000C)  
	bool                                               bUseCustomDefaultValue;                                     // 0x0188   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0189   (0x0003)  MISSED
	float                                              CustomDefaultValue;                                         // 0x018C   (0x0004)  
	FRuntimeFloatCurve                                 SliderRange;                                                // 0x0190   (0x0088)  
	TArray<float>                                      ValueTags;                                                  // 0x0218   (0x0010)  
	float                                              SliderHandleStartAngle;                                     // 0x0228   (0x0004)  
	float                                              SliderHandleEndAngle;                                       // 0x022C   (0x0004)  
	float                                              AngularOffset;                                              // 0x0230   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0234   (0x0004)  MISSED
	FVector2D                                          HandStartEndRatio;                                          // 0x0238   (0x0010)  
	unsigned char                                      UnknownData02_5[0x8];                                       // 0x0248   (0x0008)  MISSED
	FSliderStyle                                       WidgetStyle;                                                // 0x0250   (0x04A0)  
	FLinearColor                                       SliderBarColor;                                             // 0x06F0   (0x0010)  
	FLinearColor                                       SliderProgressColor;                                        // 0x0700   (0x0010)  
	FLinearColor                                       SliderHandleColor;                                          // 0x0710   (0x0010)  
	FLinearColor                                       CenterBackgroundColor;                                      // 0x0720   (0x0010)  
	bool                                               Locked;                                                     // 0x0730   (0x0001)  
	bool                                               MouseUsesStep;                                              // 0x0731   (0x0001)  
	bool                                               RequiresControllerLock;                                     // 0x0732   (0x0001)  
	unsigned char                                      UnknownData03_5[0x1];                                       // 0x0733   (0x0001)  MISSED
	float                                              StepSize;                                                   // 0x0734   (0x0004)  
	bool                                               IsFocusable;                                                // 0x0738   (0x0001)  
	bool                                               UseVerticalDrag;                                            // 0x0739   (0x0001)  
	bool                                               ShowSliderHandle;                                           // 0x073A   (0x0001)  
	bool                                               ShowSliderHand;                                             // 0x073B   (0x0001)  
	unsigned char                                      UnknownData04_5[0x4];                                       // 0x073C   (0x0004)  MISSED
	SDK_UNDEFINED(16,11723) /* FMulticastInlineDelegate */ __um(OnMouseCaptureBegin);                              // 0x0740   (0x0010)  
	SDK_UNDEFINED(16,11724) /* FMulticastInlineDelegate */ __um(OnMouseCaptureEnd);                                // 0x0750   (0x0010)  
	SDK_UNDEFINED(16,11725) /* FMulticastInlineDelegate */ __um(OnControllerCaptureBegin);                         // 0x0760   (0x0010)  
	SDK_UNDEFINED(16,11726) /* FMulticastInlineDelegate */ __um(OnControllerCaptureEnd);                           // 0x0770   (0x0010)  
	SDK_UNDEFINED(16,11727) /* FMulticastInlineDelegate */ __um(OnValueChanged);                                   // 0x0780   (0x0010)  
	unsigned char                                      UnknownData05_6[0x10];                                      // 0x0790   (0x0010)  MISSED


	/// Functions
	// Function /Script/AdvancedWidgets.RadialSlider.SetValueTags
	// void SetValueTags(TArray<float>& InValueTags);                                                                        // [0xa1c4384] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AdvancedWidgets.RadialSlider.SetValue
	// void SetValue(float InValue);                                                                                         // [0xa1c4304] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AdvancedWidgets.RadialSlider.SetUseVerticalDrag
	// void SetUseVerticalDrag(bool InUseVerticalDrag);                                                                      // [0xa1c427c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AdvancedWidgets.RadialSlider.SetStepSize
	// void SetStepSize(float InValue);                                                                                      // [0xa1c41fc] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AdvancedWidgets.RadialSlider.SetSliderRange
	// void SetSliderRange(FRuntimeFloatCurve& InSliderRange);                                                               // [0xa1c4110] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AdvancedWidgets.RadialSlider.SetSliderProgressColor
	// void SetSliderProgressColor(FLinearColor InValue);                                                                    // [0xa1c3fd8] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AdvancedWidgets.RadialSlider.SetSliderHandleStartAngle
	// void SetSliderHandleStartAngle(float InValue);                                                                        // [0xa1c3f48] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AdvancedWidgets.RadialSlider.SetSliderHandleEndAngle
	// void SetSliderHandleEndAngle(float InValue);                                                                          // [0xa1c3eb8] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AdvancedWidgets.RadialSlider.SetSliderHandleColor
	// void SetSliderHandleColor(FLinearColor InValue);                                                                      // [0xa1c3d80] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AdvancedWidgets.RadialSlider.SetSliderBarColor
	// void SetSliderBarColor(FLinearColor InValue);                                                                         // [0xa1c3c48] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AdvancedWidgets.RadialSlider.SetShowSliderHandle
	// void SetShowSliderHandle(bool InShowSliderHandle);                                                                    // [0xa1c3bc0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AdvancedWidgets.RadialSlider.SetShowSliderHand
	// void SetShowSliderHand(bool InShowSliderHand);                                                                        // [0xa1c3b38] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AdvancedWidgets.RadialSlider.SetLocked
	// void SetLocked(bool InValue);                                                                                         // [0xa1c3a7c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AdvancedWidgets.RadialSlider.SetHandStartEndRatio
	// void SetHandStartEndRatio(FVector2D InValue);                                                                         // [0xa1c3944] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AdvancedWidgets.RadialSlider.SetCustomDefaultValue
	// void SetCustomDefaultValue(float InValue);                                                                            // [0xa1c38c4] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AdvancedWidgets.RadialSlider.SetCenterBackgroundColor
	// void SetCenterBackgroundColor(FLinearColor InValue);                                                                  // [0xa1c378c] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AdvancedWidgets.RadialSlider.SetAngularOffset
	// void SetAngularOffset(float InValue);                                                                                 // [0xa1c3700] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AdvancedWidgets.RadialSlider.GetValue
	// float GetValue();                                                                                                     // [0xa1c36d8] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AdvancedWidgets.RadialSlider.GetNormalizedSliderHandlePosition
	// float GetNormalizedSliderHandlePosition();                                                                            // [0xa1c36a0] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AdvancedWidgets.RadialSlider.GetCustomDefaultValue
	// float GetCustomDefaultValue();                                                                                        // [0xa1c3678] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

