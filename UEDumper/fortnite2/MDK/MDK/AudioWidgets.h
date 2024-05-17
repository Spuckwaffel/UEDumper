
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

/// Class /Script/AudioWidgets.AudioMeter
/// Size: 0x0530 (0x000170 - 0x0006A0)
class UAudioMeter : public UWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1696;

public:
	CMember(TArray<FMeterChannelInfo>)                 MeterChannelInfo                                            OFFSET(get<T>, {0x170, 16, 0, 0})
	SMember(FDelegateProperty)                         MeterChannelInfoDelegate                                    OFFSET(getStruct<T>, {0x180, 12, 0, 0})
	SMember(FAudioMeterStyle)                          WidgetStyle                                                 OFFSET(getStruct<T>, {0x190, 1152, 0, 0})
	CMember(TEnumAsByte<EOrientation>)                 orientation                                                 OFFSET(get<T>, {0x610, 1, 0, 0})
	SMember(FLinearColor)                              BackgroundColor                                             OFFSET(getStruct<T>, {0x614, 16, 0, 0})
	SMember(FLinearColor)                              MeterBackgroundColor                                        OFFSET(getStruct<T>, {0x624, 16, 0, 0})
	SMember(FLinearColor)                              MeterValueColor                                             OFFSET(getStruct<T>, {0x634, 16, 0, 0})
	SMember(FLinearColor)                              MeterPeakColor                                              OFFSET(getStruct<T>, {0x644, 16, 0, 0})
	SMember(FLinearColor)                              MeterClippingColor                                          OFFSET(getStruct<T>, {0x654, 16, 0, 0})
	SMember(FLinearColor)                              MeterScaleColor                                             OFFSET(getStruct<T>, {0x664, 16, 0, 0})
	SMember(FLinearColor)                              MeterScaleLabelColor                                        OFFSET(getStruct<T>, {0x674, 16, 0, 0})


	/// Functions
	// Function /Script/AudioWidgets.AudioMeter.SetMeterValueColor
	// void SetMeterValueColor(FLinearColor InValue);                                                                           // [0xb45aa60] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioMeter.SetMeterScaleLabelColor
	// void SetMeterScaleLabelColor(FLinearColor InValue);                                                                      // [0xb45a9c4] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioMeter.SetMeterScaleColor
	// void SetMeterScaleColor(FLinearColor InValue);                                                                           // [0xb45a928] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioMeter.SetMeterPeakColor
	// void SetMeterPeakColor(FLinearColor InValue);                                                                            // [0xb45a88c] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioMeter.SetMeterClippingColor
	// void SetMeterClippingColor(FLinearColor InValue);                                                                        // [0xb45a7f0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioMeter.SetMeterChannelInfo
	// void SetMeterChannelInfo(TArray<FMeterChannelInfo>& InMeterChannelInfo);                                                 // [0xb45a0f0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioMeter.SetMeterBackgroundColor
	// void SetMeterBackgroundColor(FLinearColor InValue);                                                                      // [0xb45a054] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioMeter.SetBackgroundColor
	// void SetBackgroundColor(FLinearColor InValue);                                                                           // [0xb459e90] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioMeter.GetMeterChannelInfo__DelegateSignature
	// TArray<FMeterChannelInfo> GetMeterChannelInfo__DelegateSignature();                                                      // [0x228deb8] Public|Delegate      
	// Function /Script/AudioWidgets.AudioMeter.GetMeterChannelInfo
	// TArray<FMeterChannelInfo> GetMeterChannelInfo();                                                                         // [0xb4595f8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AudioWidgets.AudioOscilloscope
/// Size: 0x04E0 (0x000170 - 0x000650)
class UAudioOscilloscope : public UWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1616;

public:
	SMember(FAudioOscilloscopePanelStyle)              OscilloscopeStyle                                           OFFSET(getStruct<T>, {0x170, 1136, 0, 0})
	CMember(class UAudioBus*)                          AudioBus                                                    OFFSET(get<T>, {0x5E0, 8, 0, 0})
	DMember(float)                                     TimeWindowMs                                                OFFSET(get<float>, {0x5E8, 4, 0, 0})
	DMember(float)                                     AnalysisPeriodMs                                            OFFSET(get<float>, {0x5EC, 4, 0, 0})
	DMember(bool)                                      bShowTimeGrid                                               OFFSET(get<bool>, {0x5F0, 1, 0, 0})
	CMember(EXAxisLabelsUnit)                          TimeGridLabelsUnit                                          OFFSET(get<T>, {0x5F1, 1, 0, 0})
	DMember(bool)                                      bShowAmplitudeGrid                                          OFFSET(get<bool>, {0x5F2, 1, 0, 0})
	DMember(bool)                                      bShowAmplitudeLabels                                        OFFSET(get<bool>, {0x5F3, 1, 0, 0})
	CMember(EYAxisLabelsUnit)                          AmplitudeGridLabelsUnit                                     OFFSET(get<T>, {0x5F4, 1, 0, 0})
	DMember(bool)                                      bShowTriggerThresholdLine                                   OFFSET(get<bool>, {0x5F5, 1, 0, 0})
	DMember(float)                                     TriggerThreshold                                            OFFSET(get<float>, {0x5F8, 4, 0, 0})
	CMember(EAudioPanelLayoutType)                     PanelLayoutType                                             OFFSET(get<T>, {0x5FC, 1, 0, 0})


	/// Functions
	// Function /Script/AudioWidgets.AudioOscilloscope.StopProcessing
	// void StopProcessing();                                                                                                   // [0xb45b770] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioOscilloscope.StartProcessing
	// void StartProcessing();                                                                                                  // [0xb45b720] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioOscilloscope.GetOscilloscopeAudioSamples__DelegateSignature
	// TArray<float> GetOscilloscopeAudioSamples__DelegateSignature();                                                          // [0x228deb8] Public|Delegate      
};

/// Class /Script/AudioWidgets.AudioRadialSlider
/// Size: 0x0200 (0x000170 - 0x000370)
class UAudioRadialSlider : public UWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 880;

public:
	DMember(float)                                     Value                                                       OFFSET(get<float>, {0x170, 4, 0, 0})
	SMember(FDelegateProperty)                         ValueDelegate                                               OFFSET(getStruct<T>, {0x174, 12, 0, 0})
	CMember(TEnumAsByte<EAudioRadialSliderLayout>)     WidgetLayout                                                OFFSET(get<T>, {0x180, 1, 0, 0})
	SMember(FLinearColor)                              CenterBackgroundColor                                       OFFSET(getStruct<T>, {0x184, 16, 0, 0})
	SMember(FLinearColor)                              SliderProgressColor                                         OFFSET(getStruct<T>, {0x194, 16, 0, 0})
	SMember(FLinearColor)                              SliderBarColor                                              OFFSET(getStruct<T>, {0x1A4, 16, 0, 0})
	SMember(FVector2D)                                 HandStartEndRatio                                           OFFSET(getStruct<T>, {0x1B8, 16, 0, 0})
	SMember(FText)                                     UnitsText                                                   OFFSET(getStruct<T>, {0x1C8, 16, 0, 0})
	SMember(FLinearColor)                              TextLabelBackgroundColor                                    OFFSET(getStruct<T>, {0x1D8, 16, 0, 0})
	DMember(bool)                                      ShowLabelOnlyOnHover                                        OFFSET(get<bool>, {0x1E8, 1, 0, 0})
	DMember(bool)                                      ShowUnitsText                                               OFFSET(get<bool>, {0x1E9, 1, 0, 0})
	DMember(bool)                                      IsUnitsTextReadOnly                                         OFFSET(get<bool>, {0x1EA, 1, 0, 0})
	DMember(bool)                                      IsValueTextReadOnly                                         OFFSET(get<bool>, {0x1EB, 1, 0, 0})
	DMember(float)                                     SliderThickness                                             OFFSET(get<float>, {0x1EC, 4, 0, 0})
	SMember(FVector2D)                                 OutputRange                                                 OFFSET(getStruct<T>, {0x1F0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnValueChanged                                              OFFSET(getStruct<T>, {0x200, 16, 0, 0})


	/// Functions
	// Function /Script/AudioWidgets.AudioRadialSlider.SetWidgetLayout
	// void SetWidgetLayout(TEnumAsByte<EAudioRadialSliderLayout> InLayout);                                                    // [0xb45b69c] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioRadialSlider.SetValueTextReadOnly
	// void SetValueTextReadOnly(bool bIsReadOnly);                                                                             // [0xb45b4e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioRadialSlider.SetUnitsTextReadOnly
	// void SetUnitsTextReadOnly(bool bIsReadOnly);                                                                             // [0xb45b3c8] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioRadialSlider.SetUnitsText
	// void SetUnitsText(FText Units);                                                                                          // [0xb45b290] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioRadialSlider.SetTextLabelBackgroundColor
	// void SetTextLabelBackgroundColor(FSlateColor InColor);                                                                   // [0xb45b158] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioRadialSlider.SetSliderThickness
	// void SetSliderThickness(float InThickness);                                                                              // [0xb45b034] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioRadialSlider.SetSliderProgressColor
	// void SetSliderProgressColor(FLinearColor InValue);                                                                       // [0xb45af98] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioRadialSlider.SetSliderBarColor
	// void SetSliderBarColor(FLinearColor InValue);                                                                            // [0xb45ae60] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioRadialSlider.SetShowUnitsText
	// void SetShowUnitsText(bool bShowUnitsText);                                                                              // [0xb45acac] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioRadialSlider.SetShowLabelOnlyOnHover
	// void SetShowLabelOnlyOnHover(bool bShowLabelOnlyOnHover);                                                                // [0xb45ab8c] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioRadialSlider.SetOutputRange
	// void SetOutputRange(FVector2D InOutputRange);                                                                            // [0xb45aafc] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioRadialSlider.SetHandStartEndRatio
	// void SetHandStartEndRatio(FVector2D InHandStartEndRatio);                                                                // [0xb459fc8] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioRadialSlider.SetCenterBackgroundColor
	// void SetCenterBackgroundColor(FLinearColor InValue);                                                                     // [0xb459f2c] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioRadialSlider.GetSliderValue
	// float GetSliderValue(float OutputValue);                                                                                 // [0xb459df8] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioRadialSlider.GetOutputValue
	// float GetOutputValue(float InSliderValue);                                                                               // [0xb459cc8] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/AudioWidgets.AudioVolumeRadialSlider
/// Size: 0x0000 (0x000370 - 0x000370)
class UAudioVolumeRadialSlider : public UAudioRadialSlider
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 880;

public:
};

/// Class /Script/AudioWidgets.AudioFrequencyRadialSlider
/// Size: 0x0000 (0x000370 - 0x000370)
class UAudioFrequencyRadialSlider : public UAudioRadialSlider
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 880;

public:
};

/// Class /Script/AudioWidgets.AudioSliderBase
/// Size: 0x07B0 (0x000170 - 0x000920)
class UAudioSliderBase : public UWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2336;

public:
	DMember(float)                                     Value                                                       OFFSET(get<float>, {0x170, 4, 0, 0})
	SMember(FText)                                     UnitsText                                                   OFFSET(getStruct<T>, {0x178, 16, 0, 0})
	SMember(FLinearColor)                              TextLabelBackgroundColor                                    OFFSET(getStruct<T>, {0x188, 16, 0, 0})
	SMember(FDelegateProperty)                         TextLabelBackgroundColorDelegate                            OFFSET(getStruct<T>, {0x198, 12, 0, 0})
	DMember(bool)                                      ShowLabelOnlyOnHover                                        OFFSET(get<bool>, {0x1A4, 1, 0, 0})
	DMember(bool)                                      ShowUnitsText                                               OFFSET(get<bool>, {0x1A5, 1, 0, 0})
	DMember(bool)                                      IsUnitsTextReadOnly                                         OFFSET(get<bool>, {0x1A6, 1, 0, 0})
	DMember(bool)                                      IsValueTextReadOnly                                         OFFSET(get<bool>, {0x1A7, 1, 0, 0})
	SMember(FDelegateProperty)                         ValueDelegate                                               OFFSET(getStruct<T>, {0x1A8, 12, 0, 0})
	SMember(FLinearColor)                              SliderBackgroundColor                                       OFFSET(getStruct<T>, {0x1B4, 16, 0, 0})
	SMember(FDelegateProperty)                         SliderBackgroundColorDelegate                               OFFSET(getStruct<T>, {0x1C4, 12, 0, 0})
	SMember(FLinearColor)                              SliderBarColor                                              OFFSET(getStruct<T>, {0x1D0, 16, 0, 0})
	SMember(FDelegateProperty)                         SliderBarColorDelegate                                      OFFSET(getStruct<T>, {0x1E0, 12, 0, 0})
	SMember(FLinearColor)                              SliderThumbColor                                            OFFSET(getStruct<T>, {0x1EC, 16, 0, 0})
	SMember(FDelegateProperty)                         SliderThumbColorDelegate                                    OFFSET(getStruct<T>, {0x1FC, 12, 0, 0})
	SMember(FLinearColor)                              WidgetBackgroundColor                                       OFFSET(getStruct<T>, {0x208, 16, 0, 0})
	SMember(FDelegateProperty)                         WidgetBackgroundColorDelegate                               OFFSET(getStruct<T>, {0x218, 12, 0, 0})
	CMember(TEnumAsByte<EOrientation>)                 orientation                                                 OFFSET(get<T>, {0x224, 1, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnValueChanged                                              OFFSET(getStruct<T>, {0x228, 16, 0, 0})


	/// Functions
	// Function /Script/AudioWidgets.AudioSliderBase.SetWidgetBackgroundColor
	// void SetWidgetBackgroundColor(FLinearColor InValue);                                                                     // [0xb45b600] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioSliderBase.SetValueTextReadOnly
	// void SetValueTextReadOnly(bool bIsReadOnly);                                                                             // [0xb45b570] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioSliderBase.SetUnitsTextReadOnly
	// void SetUnitsTextReadOnly(bool bIsReadOnly);                                                                             // [0xb45b454] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioSliderBase.SetUnitsText
	// void SetUnitsText(FText Units);                                                                                          // [0xb45b32c] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioSliderBase.SetTextLabelBackgroundColor
	// void SetTextLabelBackgroundColor(FSlateColor InColor);                                                                   // [0xb45b1f4] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioSliderBase.SetSliderThumbColor
	// void SetSliderThumbColor(FLinearColor InValue);                                                                          // [0xb45b0bc] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioSliderBase.SetSliderBarColor
	// void SetSliderBarColor(FLinearColor InValue);                                                                            // [0xb45aefc] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioSliderBase.SetSliderBackgroundColor
	// void SetSliderBackgroundColor(FLinearColor InValue);                                                                     // [0xb45adc4] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioSliderBase.SetShowUnitsText
	// void SetShowUnitsText(bool bShowUnitsText);                                                                              // [0xb45ad38] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioSliderBase.SetShowLabelOnlyOnHover
	// void SetShowLabelOnlyOnHover(bool bShowLabelOnlyOnHover);                                                                // [0xb45ac1c] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioSliderBase.GetSliderValue
	// float GetSliderValue(float OutputValue);                                                                                 // [0xb459568] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioSliderBase.GetOutputValue
	// float GetOutputValue(float InSliderValue);                                                                               // [0xb459d60] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioSliderBase.GetLinValue
	// float GetLinValue(float OutputValue);                                                                                    // [0xb459568] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/AudioWidgets.AudioSlider
/// Size: 0x0010 (0x000920 - 0x000930)
class UAudioSlider : public UAudioSliderBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2352;

public:
	CMember(TWeakObjectPtr<UCurveFloat*>)              LinToOutputCurve                                            OFFSET(get<T>, {0x920, 8, 0, 0})
	CMember(TWeakObjectPtr<UCurveFloat*>)              OutputToLinCurve                                            OFFSET(get<T>, {0x928, 8, 0, 0})
};

/// Class /Script/AudioWidgets.AudioVolumeSlider
/// Size: 0x0000 (0x000930 - 0x000930)
class UAudioVolumeSlider : public UAudioSlider
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2352;

public:
};

/// Class /Script/AudioWidgets.AudioFrequencySlider
/// Size: 0x0010 (0x000920 - 0x000930)
class UAudioFrequencySlider : public UAudioSliderBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2352;

public:
	SMember(FVector2D)                                 OutputRange                                                 OFFSET(getStruct<T>, {0x920, 16, 0, 0})
};

/// Class /Script/AudioWidgets.AudioVectorscope
/// Size: 0x0210 (0x000170 - 0x000380)
class UAudioVectorscope : public UWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 896;

public:
	SMember(FAudioVectorscopePanelStyle)               VectorscopeStyle                                            OFFSET(getStruct<T>, {0x170, 416, 0, 0})
	CMember(class UAudioBus*)                          AudioBus                                                    OFFSET(get<T>, {0x310, 8, 0, 0})
	DMember(bool)                                      bShowGrid                                                   OFFSET(get<bool>, {0x318, 1, 0, 0})
	DMember(int32_t)                                   GridDivisions                                               OFFSET(get<int32_t>, {0x31C, 4, 0, 0})
	DMember(float)                                     DisplayPersistenceMs                                        OFFSET(get<float>, {0x320, 4, 0, 0})
	DMember(float)                                     Scale                                                       OFFSET(get<float>, {0x324, 4, 0, 0})
	CMember(EAudioPanelLayoutType)                     PanelLayoutType                                             OFFSET(get<T>, {0x328, 1, 0, 0})


	/// Functions
	// Function /Script/AudioWidgets.AudioVectorscope.StopProcessing
	// void StopProcessing();                                                                                                   // [0xb45b798] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioVectorscope.StartProcessing
	// void StartProcessing();                                                                                                  // [0xb45b748] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioVectorscope.GetVectorscopeAudioSamples__DelegateSignature
	// TArray<float> GetVectorscopeAudioSamples__DelegateSignature();                                                           // [0x228deb8] Public|Delegate      
};

/// Struct /Script/AudioWidgets.MeterChannelInfo
/// Size: 0x000C (0x000000 - 0x00000C)
class FMeterChannelInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(float)                                     MeterValue                                                  OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     PeakValue                                                   OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     ClippingValue                                               OFFSET(get<float>, {0x8, 4, 0, 0})
};

/// Struct /Script/AudioWidgets.AudioMeterStyle
/// Size: 0x0478 (0x000008 - 0x000480)
class FAudioMeterStyle : public FSlateWidgetStyle
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1152;

public:
	SMember(FSlateBrush)                               MeterValueImage                                             OFFSET(getStruct<T>, {0x10, 192, 0, 0})
	SMember(FSlateBrush)                               BackgroundImage                                             OFFSET(getStruct<T>, {0xD0, 192, 0, 0})
	SMember(FSlateBrush)                               MeterBackgroundImage                                        OFFSET(getStruct<T>, {0x190, 192, 0, 0})
	SMember(FSlateBrush)                               MeterValueBackgroundImage                                   OFFSET(getStruct<T>, {0x250, 192, 0, 0})
	SMember(FSlateBrush)                               MeterPeakImage                                              OFFSET(getStruct<T>, {0x310, 192, 0, 0})
	SMember(FVector2D)                                 MeterSize                                                   OFFSET(getStruct<T>, {0x3D0, 16, 0, 0})
	SMember(FVector2D)                                 MeterPadding                                                OFFSET(getStruct<T>, {0x3E0, 16, 0, 0})
	DMember(float)                                     MeterValuePadding                                           OFFSET(get<float>, {0x3F0, 4, 0, 0})
	DMember(float)                                     PeakValueWidth                                              OFFSET(get<float>, {0x3F4, 4, 0, 0})
	SMember(FVector2D)                                 ValueRangeDb                                                OFFSET(getStruct<T>, {0x3F8, 16, 0, 0})
	DMember(bool)                                      bShowScale                                                  OFFSET(get<bool>, {0x408, 1, 0, 0})
	DMember(bool)                                      bScaleSide                                                  OFFSET(get<bool>, {0x409, 1, 0, 0})
	DMember(float)                                     ScaleHashOffset                                             OFFSET(get<float>, {0x40C, 4, 0, 0})
	DMember(float)                                     ScaleHashWidth                                              OFFSET(get<float>, {0x410, 4, 0, 0})
	DMember(float)                                     ScaleHashHeight                                             OFFSET(get<float>, {0x414, 4, 0, 0})
	DMember(int32_t)                                   DecibelsPerHash                                             OFFSET(get<int32_t>, {0x418, 4, 0, 0})
	SMember(FSlateFontInfo)                            Font                                                        OFFSET(getStruct<T>, {0x420, 88, 0, 0})
};

/// Struct /Script/AudioWidgets.AudioOscilloscopePanelStyle
/// Size: 0x0468 (0x000008 - 0x000470)
class FAudioOscilloscopePanelStyle : public FSlateWidgetStyle
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1136;

public:
	SMember(FFixedSampleSequenceRulerStyle)            TimeRulerStyle                                              OFFSET(getStruct<T>, {0x10, 592, 0, 0})
	SMember(FSampledSequenceValueGridOverlayStyle)     ValueGridStyle                                              OFFSET(getStruct<T>, {0x260, 152, 0, 0})
	SMember(FSampledSequenceViewerStyle)               WaveViewerStyle                                             OFFSET(getStruct<T>, {0x300, 336, 0, 0})
	SMember(FTriggerThresholdLineStyle)                TriggerThresholdLineStyle                                   OFFSET(getStruct<T>, {0x450, 24, 0, 0})
};

/// Struct /Script/AudioWidgets.TriggerThresholdLineStyle
/// Size: 0x0010 (0x000008 - 0x000018)
class FTriggerThresholdLineStyle : public FSlateWidgetStyle
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FLinearColor)                              LineColor                                                   OFFSET(getStruct<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/AudioWidgets.SampledSequenceViewerStyle
/// Size: 0x0148 (0x000008 - 0x000150)
class FSampledSequenceViewerStyle : public FSlateWidgetStyle
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
	SMember(FSlateColor)                               SequenceColor                                               OFFSET(getStruct<T>, {0x8, 20, 0, 0})
	DMember(float)                                     SequenceLineThickness                                       OFFSET(get<float>, {0x1C, 4, 0, 0})
	SMember(FSlateColor)                               MajorGridLineColor                                          OFFSET(getStruct<T>, {0x20, 20, 0, 0})
	SMember(FSlateColor)                               MinorGridLineColor                                          OFFSET(getStruct<T>, {0x34, 20, 0, 0})
	SMember(FSlateColor)                               ZeroCrossingLineColor                                       OFFSET(getStruct<T>, {0x48, 20, 0, 0})
	DMember(float)                                     ZeroCrossingLineThickness                                   OFFSET(get<float>, {0x5C, 4, 0, 0})
	DMember(float)                                     SampleMarkersSize                                           OFFSET(get<float>, {0x60, 4, 0, 0})
	SMember(FSlateColor)                               SequenceBackgroundColor                                     OFFSET(getStruct<T>, {0x64, 20, 0, 0})
	SMember(FSlateBrush)                               BackgroundBrush                                             OFFSET(getStruct<T>, {0x80, 192, 0, 0})
	DMember(float)                                     DesiredWidth                                                OFFSET(get<float>, {0x140, 4, 0, 0})
	DMember(float)                                     DesiredHeight                                               OFFSET(get<float>, {0x144, 4, 0, 0})
};

/// Struct /Script/AudioWidgets.SampledSequenceValueGridOverlayStyle
/// Size: 0x0090 (0x000008 - 0x000098)
class FSampledSequenceValueGridOverlayStyle : public FSlateWidgetStyle
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	SMember(FSlateColor)                               GridColor                                                   OFFSET(getStruct<T>, {0x8, 20, 0, 0})
	DMember(float)                                     GridThickness                                               OFFSET(get<float>, {0x1C, 4, 0, 0})
	SMember(FSlateColor)                               LabelTextColor                                              OFFSET(getStruct<T>, {0x20, 20, 0, 0})
	SMember(FSlateFontInfo)                            LabelTextFont                                               OFFSET(getStruct<T>, {0x38, 88, 0, 0})
	DMember(float)                                     DesiredWidth                                                OFFSET(get<float>, {0x90, 4, 0, 0})
	DMember(float)                                     DesiredHeight                                               OFFSET(get<float>, {0x94, 4, 0, 0})
};

/// Struct /Script/AudioWidgets.FixedSampleSequenceRulerStyle
/// Size: 0x0248 (0x000008 - 0x000250)
class FFixedSampleSequenceRulerStyle : public FSlateWidgetStyle
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 592;

public:
	DMember(float)                                     HandleWidth                                                 OFFSET(get<float>, {0x8, 4, 0, 0})
	SMember(FSlateColor)                               HandleColor                                                 OFFSET(getStruct<T>, {0xC, 20, 0, 0})
	SMember(FSlateBrush)                               HandleBrush                                                 OFFSET(getStruct<T>, {0x20, 192, 0, 0})
	SMember(FSlateColor)                               TicksColor                                                  OFFSET(getStruct<T>, {0xE0, 20, 0, 0})
	SMember(FSlateColor)                               TicksTextColor                                              OFFSET(getStruct<T>, {0xF4, 20, 0, 0})
	SMember(FSlateFontInfo)                            TicksTextFont                                               OFFSET(getStruct<T>, {0x108, 88, 0, 0})
	DMember(float)                                     TicksTextOffset                                             OFFSET(get<float>, {0x160, 4, 0, 0})
	SMember(FSlateColor)                               BackgroundColor                                             OFFSET(getStruct<T>, {0x164, 20, 0, 0})
	SMember(FSlateBrush)                               BackgroundBrush                                             OFFSET(getStruct<T>, {0x180, 192, 0, 0})
	DMember(float)                                     DesiredWidth                                                OFFSET(get<float>, {0x240, 4, 0, 0})
	DMember(float)                                     DesiredHeight                                               OFFSET(get<float>, {0x244, 4, 0, 0})
};

/// Struct /Script/AudioWidgets.AudioVectorscopePanelStyle
/// Size: 0x0198 (0x000008 - 0x0001A0)
class FAudioVectorscopePanelStyle : public FSlateWidgetStyle
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
	SMember(FSampledSequenceValueGridOverlayStyle)     ValueGridStyle                                              OFFSET(getStruct<T>, {0x8, 152, 0, 0})
	SMember(FSampledSequenceVectorViewerStyle)         VectorViewerStyle                                           OFFSET(getStruct<T>, {0xA0, 256, 0, 0})
};

/// Struct /Script/AudioWidgets.SampledSequenceVectorViewerStyle
/// Size: 0x00F8 (0x000008 - 0x000100)
class FSampledSequenceVectorViewerStyle : public FSlateWidgetStyle
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	SMember(FSlateColor)                               BackgroundColor                                             OFFSET(getStruct<T>, {0x8, 20, 0, 0})
	SMember(FSlateBrush)                               BackgroundBrush                                             OFFSET(getStruct<T>, {0x20, 192, 0, 0})
	SMember(FLinearColor)                              LineColor                                                   OFFSET(getStruct<T>, {0xE0, 16, 0, 0})
	DMember(float)                                     LineThickness                                               OFFSET(get<float>, {0xF0, 4, 0, 0})
};

/// Struct /Script/AudioWidgets.AudioSpectrumPlotStyle
/// Size: 0x00B0 (0x000008 - 0x0000B8)
class FAudioSpectrumPlotStyle : public FSlateWidgetStyle
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	SMember(FSlateColor)                               BackgroundColor                                             OFFSET(getStruct<T>, {0x8, 20, 0, 0})
	SMember(FSlateColor)                               GridColor                                                   OFFSET(getStruct<T>, {0x1C, 20, 0, 0})
	SMember(FSlateColor)                               AxisLabelColor                                              OFFSET(getStruct<T>, {0x30, 20, 0, 0})
	SMember(FSlateFontInfo)                            AxisLabelFont                                               OFFSET(getStruct<T>, {0x48, 88, 0, 0})
	SMember(FSlateColor)                               SpectrumColor                                               OFFSET(getStruct<T>, {0xA0, 20, 0, 0})
};

/// Struct /Script/AudioWidgets.AudioTextBoxStyle
/// Size: 0x00E8 (0x000008 - 0x0000F0)
class FAudioTextBoxStyle : public FSlateWidgetStyle
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	SMember(FSlateBrush)                               BackgroundImage                                             OFFSET(getStruct<T>, {0x10, 192, 0, 0})
	SMember(FSlateColor)                               BackgroundColor                                             OFFSET(getStruct<T>, {0xD0, 20, 0, 0})
};

/// Struct /Script/AudioWidgets.AudioSliderStyle
/// Size: 0x06C8 (0x000008 - 0x0006D0)
class FAudioSliderStyle : public FSlateWidgetStyle
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1744;

public:
	SMember(FSliderStyle)                              SliderStyle                                                 OFFSET(getStruct<T>, {0x10, 1184, 0, 0})
	SMember(FAudioTextBoxStyle)                        TextBoxStyle                                                OFFSET(getStruct<T>, {0x4B0, 240, 0, 0})
	SMember(FSlateBrush)                               WidgetBackgroundImage                                       OFFSET(getStruct<T>, {0x5A0, 192, 0, 0})
	SMember(FSlateColor)                               SliderBackgroundColor                                       OFFSET(getStruct<T>, {0x660, 20, 0, 0})
	SMember(FVector2D)                                 SliderBackgroundSize                                        OFFSET(getStruct<T>, {0x678, 16, 0, 0})
	DMember(float)                                     LabelPadding                                                OFFSET(get<float>, {0x688, 4, 0, 0})
	SMember(FSlateColor)                               SliderBarColor                                              OFFSET(getStruct<T>, {0x68C, 20, 0, 0})
	SMember(FSlateColor)                               SliderThumbColor                                            OFFSET(getStruct<T>, {0x6A0, 20, 0, 0})
	SMember(FSlateColor)                               WidgetBackgroundColor                                       OFFSET(getStruct<T>, {0x6B4, 20, 0, 0})
};

/// Struct /Script/AudioWidgets.AudioRadialSliderStyle
/// Size: 0x0148 (0x000008 - 0x000150)
class FAudioRadialSliderStyle : public FSlateWidgetStyle
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
	SMember(FAudioTextBoxStyle)                        TextBoxStyle                                                OFFSET(getStruct<T>, {0x10, 240, 0, 0})
	SMember(FSlateColor)                               CenterBackgroundColor                                       OFFSET(getStruct<T>, {0x100, 20, 0, 0})
	SMember(FSlateColor)                               SliderBarColor                                              OFFSET(getStruct<T>, {0x114, 20, 0, 0})
	SMember(FSlateColor)                               SliderProgressColor                                         OFFSET(getStruct<T>, {0x128, 20, 0, 0})
	DMember(float)                                     LabelPadding                                                OFFSET(get<float>, {0x13C, 4, 0, 0})
	DMember(float)                                     DefaultSliderRadius                                         OFFSET(get<float>, {0x140, 4, 0, 0})
};

/// Struct /Script/AudioWidgets.PlayheadOverlayStyle
/// Size: 0x0020 (0x000008 - 0x000028)
class FPlayheadOverlayStyle : public FSlateWidgetStyle
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FSlateColor)                               PlayheadColor                                               OFFSET(getStruct<T>, {0x8, 20, 0, 0})
	DMember(float)                                     PlayheadWidth                                               OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(float)                                     DesiredWidth                                                OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(float)                                     DesiredHeight                                               OFFSET(get<float>, {0x24, 4, 0, 0})
};

/// Enum /Script/AudioWidgets.EAudioPanelLayoutType
/// Size: 0x02
enum class EAudioPanelLayoutType : uint8_t
{
	EAudioPanelLayoutType__Basic                                                     = 0,
	EAudioPanelLayoutType__Advanced                                                  = 1
};

/// Enum /Script/AudioWidgets.EYAxisLabelsUnit
/// Size: 0x02
enum class EYAxisLabelsUnit : uint8_t
{
	EYAxisLabelsUnit__Linear                                                         = 0,
	EYAxisLabelsUnit__Db                                                             = 1
};

/// Enum /Script/AudioWidgets.EXAxisLabelsUnit
/// Size: 0x02
enum class EXAxisLabelsUnit : uint8_t
{
	EXAxisLabelsUnit__Samples                                                        = 0,
	EXAxisLabelsUnit__Seconds                                                        = 1
};

/// Enum /Script/AudioWidgets.EAudioColorGradient
/// Size: 0x02
enum class EAudioColorGradient : uint8_t
{
	EAudioColorGradient__BlackToWhite                                                = 0,
	EAudioColorGradient__WhiteToBlack                                                = 1
};

/// Enum /Script/AudioWidgets.EAudioOscilloscopeTriggerMode
/// Size: 0x03
enum class EAudioOscilloscopeTriggerMode : uint8_t
{
	EAudioOscilloscopeTriggerMode__None                                              = 0,
	EAudioOscilloscopeTriggerMode__Rising                                            = 1,
	EAudioOscilloscopeTriggerMode__Falling                                           = 2
};

/// Enum /Script/AudioWidgets.EAudioSpectrogramFrequencyAxisScale
/// Size: 0x02
enum class EAudioSpectrogramFrequencyAxisScale : uint8_t
{
	EAudioSpectrogramFrequencyAxisScale__Linear                                      = 0,
	EAudioSpectrogramFrequencyAxisScale__Logarithmic                                 = 1
};

/// Enum /Script/AudioWidgets.EAudioSpectrogramFrequencyAxisPixelBucketMode
/// Size: 0x03
enum class EAudioSpectrogramFrequencyAxisPixelBucketMode : uint8_t
{
	EAudioSpectrogramFrequencyAxisPixelBucketMode__Sample                            = 0,
	EAudioSpectrogramFrequencyAxisPixelBucketMode__Peak                              = 1,
	EAudioSpectrogramFrequencyAxisPixelBucketMode__Average                           = 2
};

/// Enum /Script/AudioWidgets.EAudioRadialSliderLayout
/// Size: 0x03
enum class EAudioRadialSliderLayout : uint8_t
{
	Layout_LabelTop                                                                  = 0,
	Layout_LabelCenter                                                               = 1,
	Layout_LabelBottom                                                               = 2
};

/// Enum /Script/AudioWidgets.EAudioSpectrumPlotFrequencyAxisScale
/// Size: 0x02
enum class EAudioSpectrumPlotFrequencyAxisScale : uint8_t
{
	EAudioSpectrumPlotFrequencyAxisScale__Linear                                     = 0,
	EAudioSpectrumPlotFrequencyAxisScale__Logarithmic                                = 1
};

/// Enum /Script/AudioWidgets.EAudioSpectrumPlotFrequencyAxisPixelBucketMode
/// Size: 0x03
enum class EAudioSpectrumPlotFrequencyAxisPixelBucketMode : uint8_t
{
	EAudioSpectrumPlotFrequencyAxisPixelBucketMode__Sample                           = 0,
	EAudioSpectrumPlotFrequencyAxisPixelBucketMode__Peak                             = 1,
	EAudioSpectrumPlotFrequencyAxisPixelBucketMode__Average                          = 2
};

