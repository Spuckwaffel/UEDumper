
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
/// Size: 0x0538 (0x000178 - 0x0006B0)
class UAudioMeter : public UWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1712;

public:
	CMember(TArray<FMeterChannelInfo>)                 MeterChannelInfo                                            OFFSET(get<T>, {0x178, 16, 0, 0})
	SMember(FDelegateProperty)                         MeterChannelInfoDelegate                                    OFFSET(getStruct<T>, {0x188, 12, 0, 0})
	SMember(FAudioMeterStyle)                          WidgetStyle                                                 OFFSET(getStruct<T>, {0x1A0, 1152, 0, 0})
	CMember(TEnumAsByte<EOrientation>)                 orientation                                                 OFFSET(get<T>, {0x620, 1, 0, 0})
	SMember(FLinearColor)                              BackgroundColor                                             OFFSET(getStruct<T>, {0x624, 16, 0, 0})
	SMember(FLinearColor)                              MeterBackgroundColor                                        OFFSET(getStruct<T>, {0x634, 16, 0, 0})
	SMember(FLinearColor)                              MeterValueColor                                             OFFSET(getStruct<T>, {0x644, 16, 0, 0})
	SMember(FLinearColor)                              MeterPeakColor                                              OFFSET(getStruct<T>, {0x654, 16, 0, 0})
	SMember(FLinearColor)                              MeterClippingColor                                          OFFSET(getStruct<T>, {0x664, 16, 0, 0})
	SMember(FLinearColor)                              MeterScaleColor                                             OFFSET(getStruct<T>, {0x674, 16, 0, 0})
	SMember(FLinearColor)                              MeterScaleLabelColor                                        OFFSET(getStruct<T>, {0x684, 16, 0, 0})


	/// Functions
	// Function /Script/AudioWidgets.AudioMeter.SetMeterValueColor
	// void SetMeterValueColor(FLinearColor InValue);                                                                           // [0xa1e7c28] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioMeter.SetMeterScaleLabelColor
	// void SetMeterScaleLabelColor(FLinearColor InValue);                                                                      // [0xa1e7af0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioMeter.SetMeterScaleColor
	// void SetMeterScaleColor(FLinearColor InValue);                                                                           // [0xa1e79b8] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioMeter.SetMeterPeakColor
	// void SetMeterPeakColor(FLinearColor InValue);                                                                            // [0xa1e7880] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioMeter.SetMeterClippingColor
	// void SetMeterClippingColor(FLinearColor InValue);                                                                        // [0xa1e7748] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioMeter.SetMeterChannelInfo
	// void SetMeterChannelInfo(TArray<FMeterChannelInfo>& InMeterChannelInfo);                                                 // [0xa1e75b0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioMeter.SetMeterBackgroundColor
	// void SetMeterBackgroundColor(FLinearColor InValue);                                                                      // [0xa1e7478] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioMeter.SetBackgroundColor
	// void SetBackgroundColor(FLinearColor InValue);                                                                           // [0xa1e70cc] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioMeter.GetMeterChannelInfo__DelegateSignature
	// TArray<FMeterChannelInfo> GetMeterChannelInfo__DelegateSignature();                                                      // [0x18a39e4] Public|Delegate      
	// Function /Script/AudioWidgets.AudioMeter.GetMeterChannelInfo
	// TArray<FMeterChannelInfo> GetMeterChannelInfo();                                                                         // [0xa1e6db0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AudioWidgets.AudioOscilloscope
/// Size: 0x04E8 (0x000178 - 0x000660)
class UAudioOscilloscope : public UWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1632;

public:
	SMember(FAudioOscilloscopePanelStyle)              OscilloscopeStyle                                           OFFSET(getStruct<T>, {0x180, 1136, 0, 0})
	CMember(class UAudioBus*)                          AudioBus                                                    OFFSET(get<T>, {0x5F0, 8, 0, 0})
	DMember(float)                                     TimeWindowMs                                                OFFSET(get<float>, {0x5F8, 4, 0, 0})
	DMember(float)                                     AnalysisPeriodMs                                            OFFSET(get<float>, {0x5FC, 4, 0, 0})
	DMember(bool)                                      bShowTimeGrid                                               OFFSET(get<bool>, {0x600, 1, 0, 0})
	CMember(EXAxisLabelsUnit)                          TimeGridLabelsUnit                                          OFFSET(get<T>, {0x601, 1, 0, 0})
	DMember(bool)                                      bShowAmplitudeGrid                                          OFFSET(get<bool>, {0x602, 1, 0, 0})
	DMember(bool)                                      bShowAmplitudeLabels                                        OFFSET(get<bool>, {0x603, 1, 0, 0})
	CMember(EYAxisLabelsUnit)                          AmplitudeGridLabelsUnit                                     OFFSET(get<T>, {0x604, 1, 0, 0})
	DMember(bool)                                      bShowTriggerThresholdLine                                   OFFSET(get<bool>, {0x605, 1, 0, 0})
	DMember(float)                                     TriggerThreshold                                            OFFSET(get<float>, {0x608, 4, 0, 0})
	CMember(EAudioPanelLayoutType)                     PanelLayoutType                                             OFFSET(get<T>, {0x60C, 1, 0, 0})


	/// Functions
	// Function /Script/AudioWidgets.AudioOscilloscope.StopProcessing
	// void StopProcessing();                                                                                                   // [0xa1e8f8c] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioOscilloscope.StartProcessing
	// void StartProcessing();                                                                                                  // [0xa1e8f3c] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioOscilloscope.GetOscilloscopeAudioSamples__DelegateSignature
	// TArray<float> GetOscilloscopeAudioSamples__DelegateSignature();                                                          // [0x18a39e4] Public|Delegate      
};

/// Class /Script/AudioWidgets.AudioRadialSlider
/// Size: 0x0208 (0x000178 - 0x000380)
class UAudioRadialSlider : public UWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 896;

public:
	DMember(float)                                     Value                                                       OFFSET(get<float>, {0x178, 4, 0, 0})
	SMember(FDelegateProperty)                         ValueDelegate                                               OFFSET(getStruct<T>, {0x17C, 12, 0, 0})
	CMember(TEnumAsByte<EAudioRadialSliderLayout>)     WidgetLayout                                                OFFSET(get<T>, {0x188, 1, 0, 0})
	SMember(FLinearColor)                              CenterBackgroundColor                                       OFFSET(getStruct<T>, {0x18C, 16, 0, 0})
	SMember(FLinearColor)                              SliderProgressColor                                         OFFSET(getStruct<T>, {0x19C, 16, 0, 0})
	SMember(FLinearColor)                              SliderBarColor                                              OFFSET(getStruct<T>, {0x1AC, 16, 0, 0})
	SMember(FVector2D)                                 HandStartEndRatio                                           OFFSET(getStruct<T>, {0x1C0, 16, 0, 0})
	SMember(FText)                                     UnitsText                                                   OFFSET(getStruct<T>, {0x1D0, 24, 0, 0})
	SMember(FLinearColor)                              TextLabelBackgroundColor                                    OFFSET(getStruct<T>, {0x1E8, 16, 0, 0})
	DMember(bool)                                      ShowLabelOnlyOnHover                                        OFFSET(get<bool>, {0x1F8, 1, 0, 0})
	DMember(bool)                                      ShowUnitsText                                               OFFSET(get<bool>, {0x1F9, 1, 0, 0})
	DMember(bool)                                      IsUnitsTextReadOnly                                         OFFSET(get<bool>, {0x1FA, 1, 0, 0})
	DMember(bool)                                      IsValueTextReadOnly                                         OFFSET(get<bool>, {0x1FB, 1, 0, 0})
	DMember(float)                                     SliderThickness                                             OFFSET(get<float>, {0x1FC, 4, 0, 0})
	SMember(FVector2D)                                 OutputRange                                                 OFFSET(getStruct<T>, {0x200, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnValueChanged                                              OFFSET(getStruct<T>, {0x210, 16, 0, 0})


	/// Functions
	// Function /Script/AudioWidgets.AudioRadialSlider.SetWidgetLayout
	// void SetWidgetLayout(TEnumAsByte<EAudioRadialSliderLayout> InLayout);                                                    // [0xa1e8eb8] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioRadialSlider.SetValueTextReadOnly
	// void SetValueTextReadOnly(bool bIsReadOnly);                                                                             // [0xa1e8c60] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioRadialSlider.SetUnitsTextReadOnly
	// void SetUnitsTextReadOnly(bool bIsReadOnly);                                                                             // [0xa1e8b48] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioRadialSlider.SetUnitsText
	// void SetUnitsText(FText Units);                                                                                          // [0xa1e8a10] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioRadialSlider.SetTextLabelBackgroundColor
	// void SetTextLabelBackgroundColor(FSlateColor InColor);                                                                   // [0xa1e8770] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioRadialSlider.SetSliderThickness
	// void SetSliderThickness(float InThickness);                                                                              // [0xa1e85b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioRadialSlider.SetSliderProgressColor
	// void SetSliderProgressColor(FLinearColor InValue);                                                                       // [0xa1e8478] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioRadialSlider.SetSliderBarColor
	// void SetSliderBarColor(FLinearColor InValue);                                                                            // [0xa1e8208] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioRadialSlider.SetShowUnitsText
	// void SetShowUnitsText(bool bShowUnitsText);                                                                              // [0xa1e7fb8] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioRadialSlider.SetShowLabelOnlyOnHover
	// void SetShowLabelOnlyOnHover(bool bShowLabelOnlyOnHover);                                                                // [0xa1e7e98] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioRadialSlider.SetOutputRange
	// void SetOutputRange(FVector2D InOutputRange);                                                                            // [0xa1e7d60] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioRadialSlider.SetHandStartEndRatio
	// void SetHandStartEndRatio(FVector2D InHandStartEndRatio);                                                                // [0xa1e733c] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioRadialSlider.SetCenterBackgroundColor
	// void SetCenterBackgroundColor(FLinearColor InValue);                                                                     // [0xa1e7204] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioRadialSlider.GetSliderValue
	// float GetSliderValue(float OutputValue);                                                                                 // [0xa1e7034] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioRadialSlider.GetOutputValue
	// float GetOutputValue(float InSliderValue);                                                                               // [0xa1e6f04] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/AudioWidgets.AudioVolumeRadialSlider
/// Size: 0x0000 (0x000380 - 0x000380)
class UAudioVolumeRadialSlider : public UAudioRadialSlider
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 896;

public:
};

/// Class /Script/AudioWidgets.AudioFrequencyRadialSlider
/// Size: 0x0000 (0x000380 - 0x000380)
class UAudioFrequencyRadialSlider : public UAudioRadialSlider
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 896;

public:
};

/// Class /Script/AudioWidgets.AudioSliderBase
/// Size: 0x07B8 (0x000178 - 0x000930)
class UAudioSliderBase : public UWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2352;

public:
	DMember(float)                                     Value                                                       OFFSET(get<float>, {0x178, 4, 0, 0})
	SMember(FText)                                     UnitsText                                                   OFFSET(getStruct<T>, {0x180, 24, 0, 0})
	SMember(FLinearColor)                              TextLabelBackgroundColor                                    OFFSET(getStruct<T>, {0x198, 16, 0, 0})
	SMember(FDelegateProperty)                         TextLabelBackgroundColorDelegate                            OFFSET(getStruct<T>, {0x1A8, 12, 0, 0})
	DMember(bool)                                      ShowLabelOnlyOnHover                                        OFFSET(get<bool>, {0x1B4, 1, 0, 0})
	DMember(bool)                                      ShowUnitsText                                               OFFSET(get<bool>, {0x1B5, 1, 0, 0})
	DMember(bool)                                      IsUnitsTextReadOnly                                         OFFSET(get<bool>, {0x1B6, 1, 0, 0})
	DMember(bool)                                      IsValueTextReadOnly                                         OFFSET(get<bool>, {0x1B7, 1, 0, 0})
	SMember(FDelegateProperty)                         ValueDelegate                                               OFFSET(getStruct<T>, {0x1B8, 12, 0, 0})
	SMember(FLinearColor)                              SliderBackgroundColor                                       OFFSET(getStruct<T>, {0x1C4, 16, 0, 0})
	SMember(FDelegateProperty)                         SliderBackgroundColorDelegate                               OFFSET(getStruct<T>, {0x1D4, 12, 0, 0})
	SMember(FLinearColor)                              SliderBarColor                                              OFFSET(getStruct<T>, {0x1E0, 16, 0, 0})
	SMember(FDelegateProperty)                         SliderBarColorDelegate                                      OFFSET(getStruct<T>, {0x1F0, 12, 0, 0})
	SMember(FLinearColor)                              SliderThumbColor                                            OFFSET(getStruct<T>, {0x1FC, 16, 0, 0})
	SMember(FDelegateProperty)                         SliderThumbColorDelegate                                    OFFSET(getStruct<T>, {0x20C, 12, 0, 0})
	SMember(FLinearColor)                              WidgetBackgroundColor                                       OFFSET(getStruct<T>, {0x218, 16, 0, 0})
	SMember(FDelegateProperty)                         WidgetBackgroundColorDelegate                               OFFSET(getStruct<T>, {0x228, 12, 0, 0})
	CMember(TEnumAsByte<EOrientation>)                 orientation                                                 OFFSET(get<T>, {0x234, 1, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnValueChanged                                              OFFSET(getStruct<T>, {0x238, 16, 0, 0})


	/// Functions
	// Function /Script/AudioWidgets.AudioSliderBase.SetWidgetBackgroundColor
	// void SetWidgetBackgroundColor(FLinearColor InValue);                                                                     // [0xa1e8d80] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioSliderBase.SetValueTextReadOnly
	// void SetValueTextReadOnly(bool bIsReadOnly);                                                                             // [0xa1e8cf0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioSliderBase.SetUnitsTextReadOnly
	// void SetUnitsTextReadOnly(bool bIsReadOnly);                                                                             // [0xa1e8bd4] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioSliderBase.SetUnitsText
	// void SetUnitsText(FText Units);                                                                                          // [0xa1e8aac] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioSliderBase.SetTextLabelBackgroundColor
	// void SetTextLabelBackgroundColor(FSlateColor InColor);                                                                   // [0xa1e88c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioSliderBase.SetSliderThumbColor
	// void SetSliderThumbColor(FLinearColor InValue);                                                                          // [0xa1e8638] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioSliderBase.SetSliderBarColor
	// void SetSliderBarColor(FLinearColor InValue);                                                                            // [0xa1e8340] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioSliderBase.SetSliderBackgroundColor
	// void SetSliderBackgroundColor(FLinearColor InValue);                                                                     // [0xa1e80d0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioSliderBase.SetShowUnitsText
	// void SetShowUnitsText(bool bShowUnitsText);                                                                              // [0xa1e8044] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioSliderBase.SetShowLabelOnlyOnHover
	// void SetShowLabelOnlyOnHover(bool bShowLabelOnlyOnHover);                                                                // [0xa1e7f28] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioSliderBase.GetSliderValue
	// float GetSliderValue(float OutputValue);                                                                                 // [0xa1e6d20] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioSliderBase.GetOutputValue
	// float GetOutputValue(float InSliderValue);                                                                               // [0xa1e6f9c] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioSliderBase.GetLinValue
	// float GetLinValue(float OutputValue);                                                                                    // [0xa1e6d20] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/AudioWidgets.AudioSlider
/// Size: 0x0010 (0x000930 - 0x000940)
class UAudioSlider : public UAudioSliderBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2368;

public:
	CMember(TWeakObjectPtr<UCurveFloat*>)              LinToOutputCurve                                            OFFSET(get<T>, {0x930, 8, 0, 0})
	CMember(TWeakObjectPtr<UCurveFloat*>)              OutputToLinCurve                                            OFFSET(get<T>, {0x938, 8, 0, 0})
};

/// Class /Script/AudioWidgets.AudioVolumeSlider
/// Size: 0x0000 (0x000940 - 0x000940)
class UAudioVolumeSlider : public UAudioSlider
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2368;

public:
};

/// Class /Script/AudioWidgets.AudioFrequencySlider
/// Size: 0x0010 (0x000930 - 0x000940)
class UAudioFrequencySlider : public UAudioSliderBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2368;

public:
	SMember(FVector2D)                                 OutputRange                                                 OFFSET(getStruct<T>, {0x930, 16, 0, 0})
};

/// Class /Script/AudioWidgets.AudioVectorscope
/// Size: 0x0218 (0x000178 - 0x000390)
class UAudioVectorscope : public UWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 912;

public:
	SMember(FAudioVectorscopePanelStyle)               VectorscopeStyle                                            OFFSET(getStruct<T>, {0x180, 416, 0, 0})
	CMember(class UAudioBus*)                          AudioBus                                                    OFFSET(get<T>, {0x320, 8, 0, 0})
	DMember(bool)                                      bShowGrid                                                   OFFSET(get<bool>, {0x328, 1, 0, 0})
	DMember(int32_t)                                   GridDivisions                                               OFFSET(get<int32_t>, {0x32C, 4, 0, 0})
	DMember(float)                                     DisplayPersistenceMs                                        OFFSET(get<float>, {0x330, 4, 0, 0})
	DMember(float)                                     Scale                                                       OFFSET(get<float>, {0x334, 4, 0, 0})
	CMember(EAudioPanelLayoutType)                     PanelLayoutType                                             OFFSET(get<T>, {0x338, 1, 0, 0})


	/// Functions
	// Function /Script/AudioWidgets.AudioVectorscope.StopProcessing
	// void StopProcessing();                                                                                                   // [0xa1e8fb4] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioVectorscope.StartProcessing
	// void StartProcessing();                                                                                                  // [0xa1e8f64] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioVectorscope.GetVectorscopeAudioSamples__DelegateSignature
	// TArray<float> GetVectorscopeAudioSamples__DelegateSignature();                                                           // [0x18a39e4] Public|Delegate      
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
/// Size: 0x03
enum class EAudioPanelLayoutType : uint8_t
{
	EAudioPanelLayoutType__Basic                                                     = 0,
	EAudioPanelLayoutType__Advanced                                                  = 1,
	EAudioPanelLayoutType__EAudioPanelLayoutType_MAX                                 = 2
};

/// Enum /Script/AudioWidgets.EYAxisLabelsUnit
/// Size: 0x03
enum class EYAxisLabelsUnit : uint8_t
{
	EYAxisLabelsUnit__Linear                                                         = 0,
	EYAxisLabelsUnit__Db                                                             = 1,
	EYAxisLabelsUnit__EYAxisLabelsUnit_MAX                                           = 2
};

/// Enum /Script/AudioWidgets.EXAxisLabelsUnit
/// Size: 0x03
enum class EXAxisLabelsUnit : uint8_t
{
	EXAxisLabelsUnit__Samples                                                        = 0,
	EXAxisLabelsUnit__Seconds                                                        = 1,
	EXAxisLabelsUnit__EXAxisLabelsUnit_MAX                                           = 2
};

/// Enum /Script/AudioWidgets.EAudioColorGradient
/// Size: 0x03
enum class EAudioColorGradient : uint8_t
{
	EAudioColorGradient__BlackToWhite                                                = 0,
	EAudioColorGradient__WhiteToBlack                                                = 1,
	EAudioColorGradient__EAudioColorGradient_MAX                                     = 2
};

/// Enum /Script/AudioWidgets.EAudioOscilloscopeTriggerMode
/// Size: 0x04
enum class EAudioOscilloscopeTriggerMode : uint8_t
{
	EAudioOscilloscopeTriggerMode__None                                              = 0,
	EAudioOscilloscopeTriggerMode__Rising                                            = 1,
	EAudioOscilloscopeTriggerMode__Falling                                           = 2,
	EAudioOscilloscopeTriggerMode__EAudioOscilloscopeTriggerMode_MAX                 = 3
};

/// Enum /Script/AudioWidgets.EAudioSpectrogramFrequencyAxisScale
/// Size: 0x03
enum class EAudioSpectrogramFrequencyAxisScale : uint8_t
{
	EAudioSpectrogramFrequencyAxisScale__Linear                                      = 0,
	EAudioSpectrogramFrequencyAxisScale__Logarithmic                                 = 1,
	EAudioSpectrogramFrequencyAxisScale__EAudioSpectrogramFrequencyAxisScale_MAX     = 2
};

/// Enum /Script/AudioWidgets.EAudioSpectrogramFrequencyAxisPixelBucketMode
/// Size: 0x04
enum class EAudioSpectrogramFrequencyAxisPixelBucketMode : uint8_t
{
	EAudioSpectrogramFrequencyAxisPixelBucketMode__Sample                            = 0,
	EAudioSpectrogramFrequencyAxisPixelBucketMode__Peak                              = 1,
	EAudioSpectrogramFrequencyAxisPixelBucketMode__Average                           = 2,
	EAudioSpectrogramFrequencyAxisPixelBucketMode__EAudioSpectrogramFrequencyAxisPixelBucketMode_MAX = 3
};

/// Enum /Script/AudioWidgets.EAudioRadialSliderLayout
/// Size: 0x04
enum class EAudioRadialSliderLayout : uint8_t
{
	Layout_LabelTop                                                                  = 0,
	Layout_LabelCenter                                                               = 1,
	Layout_LabelBottom                                                               = 2,
	Layout_MAX                                                                       = 3
};

/// Enum /Script/AudioWidgets.EAudioSpectrumPlotFrequencyAxisScale
/// Size: 0x03
enum class EAudioSpectrumPlotFrequencyAxisScale : uint8_t
{
	EAudioSpectrumPlotFrequencyAxisScale__Linear                                     = 0,
	EAudioSpectrumPlotFrequencyAxisScale__Logarithmic                                = 1,
	EAudioSpectrumPlotFrequencyAxisScale__EAudioSpectrumPlotFrequencyAxisScale_MAX   = 2
};

/// Enum /Script/AudioWidgets.EAudioSpectrumPlotFrequencyAxisPixelBucketMode
/// Size: 0x04
enum class EAudioSpectrumPlotFrequencyAxisPixelBucketMode : uint8_t
{
	EAudioSpectrumPlotFrequencyAxisPixelBucketMode__Sample                           = 0,
	EAudioSpectrumPlotFrequencyAxisPixelBucketMode__Peak                             = 1,
	EAudioSpectrumPlotFrequencyAxisPixelBucketMode__Average                          = 2,
	EAudioSpectrumPlotFrequencyAxisPixelBucketMode__EAudioSpectrumPlotFrequencyAxisPixelBucketMode_MAX = 3
};

