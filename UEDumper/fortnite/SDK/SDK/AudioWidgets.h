
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

/// Struct /Script/AudioWidgets.MeterChannelInfo
/// Size: 0x000C (0x000000 - 0x00000C)
struct FMeterChannelInfo
{ 
	float                                              MeterValue;                                                 // 0x0000   (0x0004)  
	float                                              PeakValue;                                                  // 0x0004   (0x0004)  
	float                                              ClippingValue;                                              // 0x0008   (0x0004)  
};

/// Struct /Script/AudioWidgets.AudioMeterStyle
/// Size: 0x0478 (0x000008 - 0x000480)
struct FAudioMeterStyle : FSlateWidgetStyle
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FSlateBrush                                        MeterValueImage;                                            // 0x0010   (0x00C0)  
	FSlateBrush                                        BackgroundImage;                                            // 0x00D0   (0x00C0)  
	FSlateBrush                                        MeterBackgroundImage;                                       // 0x0190   (0x00C0)  
	FSlateBrush                                        MeterValueBackgroundImage;                                  // 0x0250   (0x00C0)  
	FSlateBrush                                        MeterPeakImage;                                             // 0x0310   (0x00C0)  
	FVector2D                                          MeterSize;                                                  // 0x03D0   (0x0010)  
	FVector2D                                          MeterPadding;                                               // 0x03E0   (0x0010)  
	float                                              MeterValuePadding;                                          // 0x03F0   (0x0004)  
	float                                              PeakValueWidth;                                             // 0x03F4   (0x0004)  
	FVector2D                                          ValueRangeDb;                                               // 0x03F8   (0x0010)  
	bool                                               bShowScale;                                                 // 0x0408   (0x0001)  
	bool                                               bScaleSide;                                                 // 0x0409   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x040A   (0x0002)  MISSED
	float                                              ScaleHashOffset;                                            // 0x040C   (0x0004)  
	float                                              ScaleHashWidth;                                             // 0x0410   (0x0004)  
	float                                              ScaleHashHeight;                                            // 0x0414   (0x0004)  
	int32_t                                            DecibelsPerHash;                                            // 0x0418   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x041C   (0x0004)  MISSED
	FSlateFontInfo                                     Font;                                                       // 0x0420   (0x0058)  
	unsigned char                                      UnknownData03_6[0x8];                                       // 0x0478   (0x0008)  MISSED
};

/// Class /Script/AudioWidgets.AudioMeter
/// Size: 0x0538 (0x000178 - 0x0006B0)
class UAudioMeter : public UWidget
{ 
public:
	TArray<FMeterChannelInfo>                          MeterChannelInfo;                                           // 0x0178   (0x0010)  
	SDK_UNDEFINED(12,11846) /* FDelegateProperty */    __um(MeterChannelInfoDelegate);                             // 0x0188   (0x000C)  
	unsigned char                                      UnknownData00_5[0xC];                                       // 0x0194   (0x000C)  MISSED
	FAudioMeterStyle                                   WidgetStyle;                                                // 0x01A0   (0x0480)  
	SDK_UNDEFINED(1,11847) /* TEnumAsByte<EOrientation> */ __um(orientation);                                      // 0x0620   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0621   (0x0003)  MISSED
	FLinearColor                                       BackgroundColor;                                            // 0x0624   (0x0010)  
	FLinearColor                                       MeterBackgroundColor;                                       // 0x0634   (0x0010)  
	FLinearColor                                       MeterValueColor;                                            // 0x0644   (0x0010)  
	FLinearColor                                       MeterPeakColor;                                             // 0x0654   (0x0010)  
	FLinearColor                                       MeterClippingColor;                                         // 0x0664   (0x0010)  
	FLinearColor                                       MeterScaleColor;                                            // 0x0674   (0x0010)  
	FLinearColor                                       MeterScaleLabelColor;                                       // 0x0684   (0x0010)  
	unsigned char                                      UnknownData02_6[0x1C];                                      // 0x0694   (0x001C)  MISSED


	/// Functions
	// Function /Script/AudioWidgets.AudioMeter.SetMeterValueColor
	// void SetMeterValueColor(FLinearColor InValue);                                                                        // [0xa1e7c28] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioMeter.SetMeterScaleLabelColor
	// void SetMeterScaleLabelColor(FLinearColor InValue);                                                                   // [0xa1e7af0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioMeter.SetMeterScaleColor
	// void SetMeterScaleColor(FLinearColor InValue);                                                                        // [0xa1e79b8] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioMeter.SetMeterPeakColor
	// void SetMeterPeakColor(FLinearColor InValue);                                                                         // [0xa1e7880] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioMeter.SetMeterClippingColor
	// void SetMeterClippingColor(FLinearColor InValue);                                                                     // [0xa1e7748] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioMeter.SetMeterChannelInfo
	// void SetMeterChannelInfo(TArray<FMeterChannelInfo>& InMeterChannelInfo);                                              // [0xa1e75b0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioMeter.SetMeterBackgroundColor
	// void SetMeterBackgroundColor(FLinearColor InValue);                                                                   // [0xa1e7478] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioMeter.SetBackgroundColor
	// void SetBackgroundColor(FLinearColor InValue);                                                                        // [0xa1e70cc] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioMeter.GetMeterChannelInfo__DelegateSignature
	// TArray<FMeterChannelInfo> GetMeterChannelInfo__DelegateSignature();                                                   // [0x18a39e4] Public|Delegate      
	// Function /Script/AudioWidgets.AudioMeter.GetMeterChannelInfo
	// TArray<FMeterChannelInfo> GetMeterChannelInfo();                                                                      // [0xa1e6db0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/AudioWidgets.FixedSampleSequenceRulerStyle
/// Size: 0x0248 (0x000008 - 0x000250)
struct FFixedSampleSequenceRulerStyle : FSlateWidgetStyle
{ 
	float                                              HandleWidth;                                                // 0x0008   (0x0004)  
	FSlateColor                                        HandleColor;                                                // 0x000C   (0x0014)  
	FSlateBrush                                        HandleBrush;                                                // 0x0020   (0x00C0)  
	FSlateColor                                        TicksColor;                                                 // 0x00E0   (0x0014)  
	FSlateColor                                        TicksTextColor;                                             // 0x00F4   (0x0014)  
	FSlateFontInfo                                     TicksTextFont;                                              // 0x0108   (0x0058)  
	float                                              TicksTextOffset;                                            // 0x0160   (0x0004)  
	FSlateColor                                        BackgroundColor;                                            // 0x0164   (0x0014)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0178   (0x0008)  MISSED
	FSlateBrush                                        BackgroundBrush;                                            // 0x0180   (0x00C0)  
	float                                              DesiredWidth;                                               // 0x0240   (0x0004)  
	float                                              DesiredHeight;                                              // 0x0244   (0x0004)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0248   (0x0008)  MISSED
};

/// Struct /Script/AudioWidgets.SampledSequenceValueGridOverlayStyle
/// Size: 0x0090 (0x000008 - 0x000098)
struct FSampledSequenceValueGridOverlayStyle : FSlateWidgetStyle
{ 
	FSlateColor                                        GridColor;                                                  // 0x0008   (0x0014)  
	float                                              GridThickness;                                              // 0x001C   (0x0004)  
	FSlateColor                                        LabelTextColor;                                             // 0x0020   (0x0014)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0034   (0x0004)  MISSED
	FSlateFontInfo                                     LabelTextFont;                                              // 0x0038   (0x0058)  
	float                                              DesiredWidth;                                               // 0x0090   (0x0004)  
	float                                              DesiredHeight;                                              // 0x0094   (0x0004)  
};

/// Struct /Script/AudioWidgets.SampledSequenceViewerStyle
/// Size: 0x0148 (0x000008 - 0x000150)
struct FSampledSequenceViewerStyle : FSlateWidgetStyle
{ 
	FSlateColor                                        SequenceColor;                                              // 0x0008   (0x0014)  
	float                                              SequenceLineThickness;                                      // 0x001C   (0x0004)  
	FSlateColor                                        MajorGridLineColor;                                         // 0x0020   (0x0014)  
	FSlateColor                                        MinorGridLineColor;                                         // 0x0034   (0x0014)  
	FSlateColor                                        ZeroCrossingLineColor;                                      // 0x0048   (0x0014)  
	float                                              ZeroCrossingLineThickness;                                  // 0x005C   (0x0004)  
	float                                              SampleMarkersSize;                                          // 0x0060   (0x0004)  
	FSlateColor                                        SequenceBackgroundColor;                                    // 0x0064   (0x0014)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0078   (0x0008)  MISSED
	FSlateBrush                                        BackgroundBrush;                                            // 0x0080   (0x00C0)  
	float                                              DesiredWidth;                                               // 0x0140   (0x0004)  
	float                                              DesiredHeight;                                              // 0x0144   (0x0004)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0148   (0x0008)  MISSED
};

/// Struct /Script/AudioWidgets.TriggerThresholdLineStyle
/// Size: 0x0010 (0x000008 - 0x000018)
struct FTriggerThresholdLineStyle : FSlateWidgetStyle
{ 
	FLinearColor                                       LineColor;                                                  // 0x0008   (0x0010)  
};

/// Struct /Script/AudioWidgets.AudioOscilloscopePanelStyle
/// Size: 0x0468 (0x000008 - 0x000470)
struct FAudioOscilloscopePanelStyle : FSlateWidgetStyle
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FFixedSampleSequenceRulerStyle                     TimeRulerStyle;                                             // 0x0010   (0x0250)  
	FSampledSequenceValueGridOverlayStyle              ValueGridStyle;                                             // 0x0260   (0x0098)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x02F8   (0x0008)  MISSED
	FSampledSequenceViewerStyle                        WaveViewerStyle;                                            // 0x0300   (0x0150)  
	FTriggerThresholdLineStyle                         TriggerThresholdLineStyle;                                  // 0x0450   (0x0018)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x0468   (0x0008)  MISSED
};

/// Class /Script/AudioWidgets.AudioOscilloscope
/// Size: 0x04E8 (0x000178 - 0x000660)
class UAudioOscilloscope : public UWidget
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0178   (0x0008)  MISSED
	FAudioOscilloscopePanelStyle                       OscilloscopeStyle;                                          // 0x0180   (0x0470)  
	class UAudioBus*                                   AudioBus;                                                   // 0x05F0   (0x0008)  
	float                                              TimeWindowMs;                                               // 0x05F8   (0x0004)  
	float                                              AnalysisPeriodMs;                                           // 0x05FC   (0x0004)  
	bool                                               bShowTimeGrid;                                              // 0x0600   (0x0001)  
	EXAxisLabelsUnit                                   TimeGridLabelsUnit;                                         // 0x0601   (0x0001)  
	bool                                               bShowAmplitudeGrid;                                         // 0x0602   (0x0001)  
	bool                                               bShowAmplitudeLabels;                                       // 0x0603   (0x0001)  
	EYAxisLabelsUnit                                   AmplitudeGridLabelsUnit;                                    // 0x0604   (0x0001)  
	bool                                               bShowTriggerThresholdLine;                                  // 0x0605   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x0606   (0x0002)  MISSED
	float                                              TriggerThreshold;                                           // 0x0608   (0x0004)  
	EAudioPanelLayoutType                              PanelLayoutType;                                            // 0x060C   (0x0001)  
	unsigned char                                      UnknownData02_6[0x53];                                      // 0x060D   (0x0053)  MISSED


	/// Functions
	// Function /Script/AudioWidgets.AudioOscilloscope.StopProcessing
	// void StopProcessing();                                                                                                // [0xa1e8f8c] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioOscilloscope.StartProcessing
	// void StartProcessing();                                                                                               // [0xa1e8f3c] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioOscilloscope.GetOscilloscopeAudioSamples__DelegateSignature
	// TArray<float> GetOscilloscopeAudioSamples__DelegateSignature();                                                       // [0x18a39e4] Public|Delegate      
};

/// Class /Script/AudioWidgets.AudioRadialSlider
/// Size: 0x0208 (0x000178 - 0x000380)
class UAudioRadialSlider : public UWidget
{ 
public:
	float                                              Value;                                                      // 0x0178   (0x0004)  
	SDK_UNDEFINED(12,11848) /* FDelegateProperty */    __um(ValueDelegate);                                        // 0x017C   (0x000C)  
	SDK_UNDEFINED(1,11849) /* TEnumAsByte<EAudioRadialSliderLayout> */ __um(WidgetLayout);                         // 0x0188   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0189   (0x0003)  MISSED
	FLinearColor                                       CenterBackgroundColor;                                      // 0x018C   (0x0010)  
	FLinearColor                                       SliderProgressColor;                                        // 0x019C   (0x0010)  
	FLinearColor                                       SliderBarColor;                                             // 0x01AC   (0x0010)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x01BC   (0x0004)  MISSED
	FVector2D                                          HandStartEndRatio;                                          // 0x01C0   (0x0010)  
	SDK_UNDEFINED(24,11850) /* FText */                __um(UnitsText);                                            // 0x01D0   (0x0018)  
	FLinearColor                                       TextLabelBackgroundColor;                                   // 0x01E8   (0x0010)  
	bool                                               ShowLabelOnlyOnHover;                                       // 0x01F8   (0x0001)  
	bool                                               ShowUnitsText;                                              // 0x01F9   (0x0001)  
	bool                                               IsUnitsTextReadOnly;                                        // 0x01FA   (0x0001)  
	bool                                               IsValueTextReadOnly;                                        // 0x01FB   (0x0001)  
	float                                              SliderThickness;                                            // 0x01FC   (0x0004)  
	FVector2D                                          OutputRange;                                                // 0x0200   (0x0010)  
	SDK_UNDEFINED(16,11851) /* FMulticastInlineDelegate */ __um(OnValueChanged);                                   // 0x0210   (0x0010)  
	unsigned char                                      UnknownData02_6[0x160];                                     // 0x0220   (0x0160)  MISSED


	/// Functions
	// Function /Script/AudioWidgets.AudioRadialSlider.SetWidgetLayout
	// void SetWidgetLayout(TEnumAsByte<EAudioRadialSliderLayout> InLayout);                                                 // [0xa1e8eb8] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioRadialSlider.SetValueTextReadOnly
	// void SetValueTextReadOnly(bool bIsReadOnly);                                                                          // [0xa1e8c60] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioRadialSlider.SetUnitsTextReadOnly
	// void SetUnitsTextReadOnly(bool bIsReadOnly);                                                                          // [0xa1e8b48] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioRadialSlider.SetUnitsText
	// void SetUnitsText(FText Units);                                                                                       // [0xa1e8a10] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioRadialSlider.SetTextLabelBackgroundColor
	// void SetTextLabelBackgroundColor(FSlateColor InColor);                                                                // [0xa1e8770] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioRadialSlider.SetSliderThickness
	// void SetSliderThickness(float InThickness);                                                                           // [0xa1e85b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioRadialSlider.SetSliderProgressColor
	// void SetSliderProgressColor(FLinearColor InValue);                                                                    // [0xa1e8478] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioRadialSlider.SetSliderBarColor
	// void SetSliderBarColor(FLinearColor InValue);                                                                         // [0xa1e8208] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioRadialSlider.SetShowUnitsText
	// void SetShowUnitsText(bool bShowUnitsText);                                                                           // [0xa1e7fb8] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioRadialSlider.SetShowLabelOnlyOnHover
	// void SetShowLabelOnlyOnHover(bool bShowLabelOnlyOnHover);                                                             // [0xa1e7e98] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioRadialSlider.SetOutputRange
	// void SetOutputRange(FVector2D InOutputRange);                                                                         // [0xa1e7d60] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioRadialSlider.SetHandStartEndRatio
	// void SetHandStartEndRatio(FVector2D InHandStartEndRatio);                                                             // [0xa1e733c] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioRadialSlider.SetCenterBackgroundColor
	// void SetCenterBackgroundColor(FLinearColor InValue);                                                                  // [0xa1e7204] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioRadialSlider.GetSliderValue
	// float GetSliderValue(float OutputValue);                                                                              // [0xa1e7034] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioRadialSlider.GetOutputValue
	// float GetOutputValue(float InSliderValue);                                                                            // [0xa1e6f04] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/AudioWidgets.AudioVolumeRadialSlider
/// Size: 0x0000 (0x000380 - 0x000380)
class UAudioVolumeRadialSlider : public UAudioRadialSlider
{ 
public:
};

/// Class /Script/AudioWidgets.AudioFrequencyRadialSlider
/// Size: 0x0000 (0x000380 - 0x000380)
class UAudioFrequencyRadialSlider : public UAudioRadialSlider
{ 
public:
};

/// Class /Script/AudioWidgets.AudioSliderBase
/// Size: 0x07B8 (0x000178 - 0x000930)
class UAudioSliderBase : public UWidget
{ 
public:
	float                                              Value;                                                      // 0x0178   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x017C   (0x0004)  MISSED
	SDK_UNDEFINED(24,11852) /* FText */                __um(UnitsText);                                            // 0x0180   (0x0018)  
	FLinearColor                                       TextLabelBackgroundColor;                                   // 0x0198   (0x0010)  
	SDK_UNDEFINED(12,11853) /* FDelegateProperty */    __um(TextLabelBackgroundColorDelegate);                     // 0x01A8   (0x000C)  
	bool                                               ShowLabelOnlyOnHover;                                       // 0x01B4   (0x0001)  
	bool                                               ShowUnitsText;                                              // 0x01B5   (0x0001)  
	bool                                               IsUnitsTextReadOnly;                                        // 0x01B6   (0x0001)  
	bool                                               IsValueTextReadOnly;                                        // 0x01B7   (0x0001)  
	SDK_UNDEFINED(12,11854) /* FDelegateProperty */    __um(ValueDelegate);                                        // 0x01B8   (0x000C)  
	FLinearColor                                       SliderBackgroundColor;                                      // 0x01C4   (0x0010)  
	SDK_UNDEFINED(12,11855) /* FDelegateProperty */    __um(SliderBackgroundColorDelegate);                        // 0x01D4   (0x000C)  
	FLinearColor                                       SliderBarColor;                                             // 0x01E0   (0x0010)  
	SDK_UNDEFINED(12,11856) /* FDelegateProperty */    __um(SliderBarColorDelegate);                               // 0x01F0   (0x000C)  
	FLinearColor                                       SliderThumbColor;                                           // 0x01FC   (0x0010)  
	SDK_UNDEFINED(12,11857) /* FDelegateProperty */    __um(SliderThumbColorDelegate);                             // 0x020C   (0x000C)  
	FLinearColor                                       WidgetBackgroundColor;                                      // 0x0218   (0x0010)  
	SDK_UNDEFINED(12,11858) /* FDelegateProperty */    __um(WidgetBackgroundColorDelegate);                        // 0x0228   (0x000C)  
	SDK_UNDEFINED(1,11859) /* TEnumAsByte<EOrientation> */ __um(orientation);                                      // 0x0234   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0235   (0x0003)  MISSED
	SDK_UNDEFINED(16,11860) /* FMulticastInlineDelegate */ __um(OnValueChanged);                                   // 0x0238   (0x0010)  
	unsigned char                                      UnknownData02_6[0x6E8];                                     // 0x0248   (0x06E8)  MISSED


	/// Functions
	// Function /Script/AudioWidgets.AudioSliderBase.SetWidgetBackgroundColor
	// void SetWidgetBackgroundColor(FLinearColor InValue);                                                                  // [0xa1e8d80] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioSliderBase.SetValueTextReadOnly
	// void SetValueTextReadOnly(bool bIsReadOnly);                                                                          // [0xa1e8cf0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioSliderBase.SetUnitsTextReadOnly
	// void SetUnitsTextReadOnly(bool bIsReadOnly);                                                                          // [0xa1e8bd4] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioSliderBase.SetUnitsText
	// void SetUnitsText(FText Units);                                                                                       // [0xa1e8aac] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioSliderBase.SetTextLabelBackgroundColor
	// void SetTextLabelBackgroundColor(FSlateColor InColor);                                                                // [0xa1e88c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioSliderBase.SetSliderThumbColor
	// void SetSliderThumbColor(FLinearColor InValue);                                                                       // [0xa1e8638] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioSliderBase.SetSliderBarColor
	// void SetSliderBarColor(FLinearColor InValue);                                                                         // [0xa1e8340] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioSliderBase.SetSliderBackgroundColor
	// void SetSliderBackgroundColor(FLinearColor InValue);                                                                  // [0xa1e80d0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioSliderBase.SetShowUnitsText
	// void SetShowUnitsText(bool bShowUnitsText);                                                                           // [0xa1e8044] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioSliderBase.SetShowLabelOnlyOnHover
	// void SetShowLabelOnlyOnHover(bool bShowLabelOnlyOnHover);                                                             // [0xa1e7f28] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioSliderBase.GetSliderValue
	// float GetSliderValue(float OutputValue);                                                                              // [0xa1e6d20] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioSliderBase.GetOutputValue
	// float GetOutputValue(float InSliderValue);                                                                            // [0xa1e6f9c] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioSliderBase.GetLinValue
	// float GetLinValue(float OutputValue);                                                                                 // [0xa1e6d20] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/AudioWidgets.AudioSlider
/// Size: 0x0010 (0x000930 - 0x000940)
class UAudioSlider : public UAudioSliderBase
{ 
public:
	SDK_UNDEFINED(8,11861) /* TWeakObjectPtr<UCurveFloat*> */ __um(LinToOutputCurve);                              // 0x0930   (0x0008)  
	SDK_UNDEFINED(8,11862) /* TWeakObjectPtr<UCurveFloat*> */ __um(OutputToLinCurve);                              // 0x0938   (0x0008)  
};

/// Class /Script/AudioWidgets.AudioVolumeSlider
/// Size: 0x0000 (0x000940 - 0x000940)
class UAudioVolumeSlider : public UAudioSlider
{ 
public:
};

/// Class /Script/AudioWidgets.AudioFrequencySlider
/// Size: 0x0010 (0x000930 - 0x000940)
class UAudioFrequencySlider : public UAudioSliderBase
{ 
public:
	FVector2D                                          OutputRange;                                                // 0x0930   (0x0010)  
};

/// Struct /Script/AudioWidgets.SampledSequenceVectorViewerStyle
/// Size: 0x00F8 (0x000008 - 0x000100)
struct FSampledSequenceVectorViewerStyle : FSlateWidgetStyle
{ 
	FSlateColor                                        BackgroundColor;                                            // 0x0008   (0x0014)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x001C   (0x0004)  MISSED
	FSlateBrush                                        BackgroundBrush;                                            // 0x0020   (0x00C0)  
	FLinearColor                                       LineColor;                                                  // 0x00E0   (0x0010)  
	float                                              LineThickness;                                              // 0x00F0   (0x0004)  
	unsigned char                                      UnknownData01_6[0xC];                                       // 0x00F4   (0x000C)  MISSED
};

/// Struct /Script/AudioWidgets.AudioVectorscopePanelStyle
/// Size: 0x0198 (0x000008 - 0x0001A0)
struct FAudioVectorscopePanelStyle : FSlateWidgetStyle
{ 
	FSampledSequenceValueGridOverlayStyle              ValueGridStyle;                                             // 0x0008   (0x0098)  
	FSampledSequenceVectorViewerStyle                  VectorViewerStyle;                                          // 0x00A0   (0x0100)  
};

/// Class /Script/AudioWidgets.AudioVectorscope
/// Size: 0x0218 (0x000178 - 0x000390)
class UAudioVectorscope : public UWidget
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0178   (0x0008)  MISSED
	FAudioVectorscopePanelStyle                        VectorscopeStyle;                                           // 0x0180   (0x01A0)  
	class UAudioBus*                                   AudioBus;                                                   // 0x0320   (0x0008)  
	bool                                               bShowGrid;                                                  // 0x0328   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0329   (0x0003)  MISSED
	int32_t                                            GridDivisions;                                              // 0x032C   (0x0004)  
	float                                              DisplayPersistenceMs;                                       // 0x0330   (0x0004)  
	float                                              Scale;                                                      // 0x0334   (0x0004)  
	EAudioPanelLayoutType                              PanelLayoutType;                                            // 0x0338   (0x0001)  
	unsigned char                                      UnknownData02_6[0x57];                                      // 0x0339   (0x0057)  MISSED


	/// Functions
	// Function /Script/AudioWidgets.AudioVectorscope.StopProcessing
	// void StopProcessing();                                                                                                // [0xa1e8fb4] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioVectorscope.StartProcessing
	// void StartProcessing();                                                                                               // [0xa1e8f64] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioVectorscope.GetVectorscopeAudioSamples__DelegateSignature
	// TArray<float> GetVectorscopeAudioSamples__DelegateSignature();                                                        // [0x18a39e4] Public|Delegate      
};

/// Struct /Script/AudioWidgets.AudioSpectrumPlotStyle
/// Size: 0x00B0 (0x000008 - 0x0000B8)
struct FAudioSpectrumPlotStyle : FSlateWidgetStyle
{ 
	FSlateColor                                        BackgroundColor;                                            // 0x0008   (0x0014)  
	FSlateColor                                        GridColor;                                                  // 0x001C   (0x0014)  
	FSlateColor                                        AxisLabelColor;                                             // 0x0030   (0x0014)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0044   (0x0004)  MISSED
	FSlateFontInfo                                     AxisLabelFont;                                              // 0x0048   (0x0058)  
	FSlateColor                                        SpectrumColor;                                              // 0x00A0   (0x0014)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x00B4   (0x0004)  MISSED
};

/// Struct /Script/AudioWidgets.AudioTextBoxStyle
/// Size: 0x00E8 (0x000008 - 0x0000F0)
struct FAudioTextBoxStyle : FSlateWidgetStyle
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FSlateBrush                                        BackgroundImage;                                            // 0x0010   (0x00C0)  
	FSlateColor                                        BackgroundColor;                                            // 0x00D0   (0x0014)  
	unsigned char                                      UnknownData01_6[0xC];                                       // 0x00E4   (0x000C)  MISSED
};

/// Struct /Script/AudioWidgets.AudioSliderStyle
/// Size: 0x06C8 (0x000008 - 0x0006D0)
struct FAudioSliderStyle : FSlateWidgetStyle
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FSliderStyle                                       SliderStyle;                                                // 0x0010   (0x04A0)  
	FAudioTextBoxStyle                                 TextBoxStyle;                                               // 0x04B0   (0x00F0)  
	FSlateBrush                                        WidgetBackgroundImage;                                      // 0x05A0   (0x00C0)  
	FSlateColor                                        SliderBackgroundColor;                                      // 0x0660   (0x0014)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0674   (0x0004)  MISSED
	FVector2D                                          SliderBackgroundSize;                                       // 0x0678   (0x0010)  
	float                                              LabelPadding;                                               // 0x0688   (0x0004)  
	FSlateColor                                        SliderBarColor;                                             // 0x068C   (0x0014)  
	FSlateColor                                        SliderThumbColor;                                           // 0x06A0   (0x0014)  
	FSlateColor                                        WidgetBackgroundColor;                                      // 0x06B4   (0x0014)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x06C8   (0x0008)  MISSED
};

/// Struct /Script/AudioWidgets.AudioRadialSliderStyle
/// Size: 0x0148 (0x000008 - 0x000150)
struct FAudioRadialSliderStyle : FSlateWidgetStyle
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FAudioTextBoxStyle                                 TextBoxStyle;                                               // 0x0010   (0x00F0)  
	FSlateColor                                        CenterBackgroundColor;                                      // 0x0100   (0x0014)  
	FSlateColor                                        SliderBarColor;                                             // 0x0114   (0x0014)  
	FSlateColor                                        SliderProgressColor;                                        // 0x0128   (0x0014)  
	float                                              LabelPadding;                                               // 0x013C   (0x0004)  
	float                                              DefaultSliderRadius;                                        // 0x0140   (0x0004)  
	unsigned char                                      UnknownData01_6[0xC];                                       // 0x0144   (0x000C)  MISSED
};

/// Struct /Script/AudioWidgets.PlayheadOverlayStyle
/// Size: 0x0020 (0x000008 - 0x000028)
struct FPlayheadOverlayStyle : FSlateWidgetStyle
{ 
	FSlateColor                                        PlayheadColor;                                              // 0x0008   (0x0014)  
	float                                              PlayheadWidth;                                              // 0x001C   (0x0004)  
	float                                              DesiredWidth;                                               // 0x0020   (0x0004)  
	float                                              DesiredHeight;                                              // 0x0024   (0x0004)  
};

