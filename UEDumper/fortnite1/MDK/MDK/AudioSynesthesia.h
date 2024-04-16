
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: AudioAnalyzer
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/AudioSynesthesia.AudioSynesthesiaSettings
/// Size: 0x0000 (0x000028 - 0x000028)
class UAudioSynesthesiaSettings : public UAudioAnalyzerSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/AudioSynesthesia.AudioSynesthesiaNRTSettings
/// Size: 0x0000 (0x000028 - 0x000028)
class UAudioSynesthesiaNRTSettings : public UAudioAnalyzerNRTSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/AudioSynesthesia.AudioSynesthesiaNRT
/// Size: 0x0000 (0x000078 - 0x000078)
class UAudioSynesthesiaNRT : public UAudioAnalyzerNRT
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
};

/// Class /Script/AudioSynesthesia.ConstantQSettings
/// Size: 0x0020 (0x000028 - 0x000048)
class UConstantQSettings : public UAudioSynesthesiaSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	DMember(float)                                     StartingFrequencyHz                                         OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(int32_t)                                   NumBands                                                    OFFSET(get<int32_t>, {0x2C, 4, 0, 0})
	DMember(float)                                     NumBandsPerOctave                                           OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(float)                                     AnalysisPeriodInSeconds                                     OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(bool)                                      bDownmixToMono                                              OFFSET(get<bool>, {0x38, 1, 0, 0})
	CMember(EConstantQFFTSizeEnum)                     FFTSize                                                     OFFSET(get<T>, {0x39, 1, 0, 0})
	CMember(EFFTWindowType)                            WindowType                                                  OFFSET(get<T>, {0x3A, 1, 0, 0})
	CMember(EAudioSpectrumType)                        SpectrumType                                                OFFSET(get<T>, {0x3B, 1, 0, 0})
	DMember(float)                                     BandWidthStretch                                            OFFSET(get<float>, {0x3C, 4, 0, 0})
	CMember(EConstantQNormalizationEnum)               CQTNormalization                                            OFFSET(get<T>, {0x40, 1, 0, 0})
	DMember(float)                                     NoiseFloorDb                                                OFFSET(get<float>, {0x44, 4, 0, 0})
};

/// Class /Script/AudioSynesthesia.ConstantQAnalyzer
/// Size: 0x0058 (0x0000A0 - 0x0000F8)
class UConstantQAnalyzer : public UAudioAnalyzer
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
	CMember(class UConstantQSettings*)                 Settings                                                    OFFSET(get<T>, {0xA0, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnConstantQResults                                          OFFSET(getStruct<T>, {0xA8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnLatestConstantQResults                                    OFFSET(getStruct<T>, {0xD0, 16, 0, 0})


	/// Functions
	// Function /Script/AudioSynesthesia.ConstantQAnalyzer.GetNumCenterFrequencies
	// int32_t GetNumCenterFrequencies();                                                                                       // [0xb01e5b4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AudioSynesthesia.ConstantQAnalyzer.GetCenterFrequencies
	// void GetCenterFrequencies(TArray<float>& OutCenterFrequencies);                                                          // [0xb01d454] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/AudioSynesthesia.ConstantQNRTSettings
/// Size: 0x0020 (0x000028 - 0x000048)
class UConstantQNRTSettings : public UAudioSynesthesiaNRTSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	DMember(float)                                     StartingFrequency                                           OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(int32_t)                                   NumBands                                                    OFFSET(get<int32_t>, {0x2C, 4, 0, 0})
	DMember(float)                                     NumBandsPerOctave                                           OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(float)                                     AnalysisPeriod                                              OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(bool)                                      bDownmixToMono                                              OFFSET(get<bool>, {0x38, 1, 0, 0})
	CMember(EConstantQFFTSizeEnum)                     FFTSize                                                     OFFSET(get<T>, {0x39, 1, 0, 0})
	CMember(EFFTWindowType)                            WindowType                                                  OFFSET(get<T>, {0x3A, 1, 0, 0})
	CMember(EAudioSpectrumType)                        SpectrumType                                                OFFSET(get<T>, {0x3B, 1, 0, 0})
	DMember(float)                                     BandWidthStretch                                            OFFSET(get<float>, {0x3C, 4, 0, 0})
	CMember(EConstantQNormalizationEnum)               CQTNormalization                                            OFFSET(get<T>, {0x40, 1, 0, 0})
	DMember(float)                                     NoiseFloorDb                                                OFFSET(get<float>, {0x44, 4, 0, 0})
};

/// Class /Script/AudioSynesthesia.ConstantQNRT
/// Size: 0x0008 (0x000078 - 0x000080)
class UConstantQNRT : public UAudioSynesthesiaNRT
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(class UConstantQNRTSettings*)              Settings                                                    OFFSET(get<T>, {0x78, 8, 0, 0})


	/// Functions
	// Function /Script/AudioSynesthesia.ConstantQNRT.GetNormalizedChannelConstantQAtTime
	// void GetNormalizedChannelConstantQAtTime(float InSeconds, int32_t InChannel, TArray<float>& OutConstantQ);               // [0xb01de4c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AudioSynesthesia.ConstantQNRT.GetChannelConstantQAtTime
	// void GetChannelConstantQAtTime(float InSeconds, int32_t InChannel, TArray<float>& OutConstantQ);                         // [0xb01d6e4] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AudioSynesthesia.LoudnessSettings
/// Size: 0x0018 (0x000028 - 0x000040)
class ULoudnessSettings : public UAudioSynesthesiaSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(float)                                     AnalysisPeriod                                              OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(float)                                     MinimumFrequency                                            OFFSET(get<float>, {0x2C, 4, 0, 0})
	DMember(float)                                     MaximumFrequency                                            OFFSET(get<float>, {0x30, 4, 0, 0})
	CMember(ELoudnessCurveTypeEnum)                    CurveType                                                   OFFSET(get<T>, {0x34, 1, 0, 0})
	DMember(float)                                     NoiseFloorDb                                                OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     ExpectedMaxLoudness                                         OFFSET(get<float>, {0x3C, 4, 0, 0})
};

/// Class /Script/AudioSynesthesia.LoudnessAnalyzer
/// Size: 0x0048 (0x0000A0 - 0x0000E8)
class ULoudnessAnalyzer : public UAudioAnalyzer
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
	CMember(class ULoudnessSettings*)                  Settings                                                    OFFSET(get<T>, {0xA0, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnOverallLoudnessResults                                    OFFSET(getStruct<T>, {0xA8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPerChannelLoudnessResults                                 OFFSET(getStruct<T>, {0xB8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnLatestOverallLoudnessResults                              OFFSET(getStruct<T>, {0xC8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnLatestPerChannelLoudnessResults                           OFFSET(getStruct<T>, {0xD8, 16, 0, 0})
};

/// Class /Script/AudioSynesthesia.LoudnessNRTSettings
/// Size: 0x0018 (0x000028 - 0x000040)
class ULoudnessNRTSettings : public UAudioSynesthesiaNRTSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(float)                                     AnalysisPeriod                                              OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(float)                                     MinimumFrequency                                            OFFSET(get<float>, {0x2C, 4, 0, 0})
	DMember(float)                                     MaximumFrequency                                            OFFSET(get<float>, {0x30, 4, 0, 0})
	CMember(ELoudnessNRTCurveTypeEnum)                 CurveType                                                   OFFSET(get<T>, {0x34, 1, 0, 0})
	DMember(float)                                     NoiseFloorDb                                                OFFSET(get<float>, {0x38, 4, 0, 0})
};

/// Class /Script/AudioSynesthesia.LoudnessNRT
/// Size: 0x0008 (0x000078 - 0x000080)
class ULoudnessNRT : public UAudioSynesthesiaNRT
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(class ULoudnessNRTSettings*)               Settings                                                    OFFSET(get<T>, {0x78, 8, 0, 0})


	/// Functions
	// Function /Script/AudioSynesthesia.LoudnessNRT.GetNormalizedLoudnessAtTime
	// void GetNormalizedLoudnessAtTime(float InSeconds, float& OutLoudness);                                                   // [0xb01e4a8] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AudioSynesthesia.LoudnessNRT.GetNormalizedChannelLoudnessAtTime
	// void GetNormalizedChannelLoudnessAtTime(float InSeconds, int32_t InChannel, float& OutLoudness);                         // [0xb01e024] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AudioSynesthesia.LoudnessNRT.GetLoudnessAtTime
	// void GetLoudnessAtTime(float InSeconds, float& OutLoudness);                                                             // [0xb01dd40] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AudioSynesthesia.LoudnessNRT.GetChannelLoudnessAtTime
	// void GetChannelLoudnessAtTime(float InSeconds, int32_t InChannel, float& OutLoudness);                                   // [0xb01d8bc] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AudioSynesthesia.MeterSettings
/// Size: 0x0018 (0x000028 - 0x000040)
class UMeterSettings : public UAudioSynesthesiaSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(float)                                     AnalysisPeriod                                              OFFSET(get<float>, {0x28, 4, 0, 0})
	CMember(EMeterPeakType)                            PeakMode                                                    OFFSET(get<T>, {0x2C, 1, 0, 0})
	DMember(int32_t)                                   MeterAttackTime                                             OFFSET(get<int32_t>, {0x30, 4, 0, 0})
	DMember(int32_t)                                   MeterReleaseTime                                            OFFSET(get<int32_t>, {0x34, 4, 0, 0})
	DMember(int32_t)                                   PeakHoldTime                                                OFFSET(get<int32_t>, {0x38, 4, 0, 0})
	DMember(float)                                     ClippingThreshold                                           OFFSET(get<float>, {0x3C, 4, 0, 0})
};

/// Class /Script/AudioSynesthesia.MeterAnalyzer
/// Size: 0x00A8 (0x0000A0 - 0x000148)
class UMeterAnalyzer : public UAudioAnalyzer
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 328;

public:
	CMember(class UMeterSettings*)                     Settings                                                    OFFSET(get<T>, {0xA0, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnOverallMeterResults                                       OFFSET(getStruct<T>, {0xA8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPerChannelMeterResults                                    OFFSET(getStruct<T>, {0xD0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnLatestOverallMeterResults                                 OFFSET(getStruct<T>, {0xF8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnLatestPerChannelMeterResults                              OFFSET(getStruct<T>, {0x120, 16, 0, 0})
};

/// Class /Script/AudioSynesthesia.OnsetNRTSettings
/// Size: 0x0018 (0x000028 - 0x000040)
class UOnsetNRTSettings : public UAudioSynesthesiaNRTSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(bool)                                      bDownmixToMono                                              OFFSET(get<bool>, {0x28, 1, 0, 0})
	DMember(float)                                     GranularityInSeconds                                        OFFSET(get<float>, {0x2C, 4, 0, 0})
	DMember(float)                                     Sensitivity                                                 OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(float)                                     MinimumFrequency                                            OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     MaximumFrequency                                            OFFSET(get<float>, {0x38, 4, 0, 0})
};

/// Class /Script/AudioSynesthesia.OnsetNRT
/// Size: 0x0008 (0x000078 - 0x000080)
class UOnsetNRT : public UAudioSynesthesiaNRT
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(class UOnsetNRTSettings*)                  Settings                                                    OFFSET(get<T>, {0x78, 8, 0, 0})


	/// Functions
	// Function /Script/AudioSynesthesia.OnsetNRT.GetNormalizedChannelOnsetsBetweenTimes
	// void GetNormalizedChannelOnsetsBetweenTimes(float InStartSeconds, float InEndSeconds, int32_t InChannel, TArray<float>& OutOnsetTimestamps, TArray<float>& OutOnsetStrengths); // [0xb01e1ac] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AudioSynesthesia.OnsetNRT.GetChannelOnsetsBetweenTimes
	// void GetChannelOnsetsBetweenTimes(float InStartSeconds, float InEndSeconds, int32_t InChannel, TArray<float>& OutOnsetTimestamps, TArray<float>& OutOnsetStrengths); // [0xb01da44] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AudioSynesthesia.SynesthesiaSpectrumAnalysisSettings
/// Size: 0x0008 (0x000028 - 0x000030)
class USynesthesiaSpectrumAnalysisSettings : public UAudioSynesthesiaSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(float)                                     AnalysisPeriod                                              OFFSET(get<float>, {0x28, 4, 0, 0})
	CMember(EFFTSize)                                  FFTSize                                                     OFFSET(get<T>, {0x2C, 1, 0, 0})
	CMember(EAudioSpectrumType)                        SpectrumType                                                OFFSET(get<T>, {0x2D, 1, 0, 0})
	CMember(EFFTWindowType)                            WindowType                                                  OFFSET(get<T>, {0x2E, 1, 0, 0})
	DMember(bool)                                      bDownmixToMono                                              OFFSET(get<bool>, {0x2F, 1, 0, 0})
};

/// Class /Script/AudioSynesthesia.SynesthesiaSpectrumAnalyzer
/// Size: 0x0058 (0x0000A0 - 0x0000F8)
class USynesthesiaSpectrumAnalyzer : public UAudioAnalyzer
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
	CMember(class USynesthesiaSpectrumAnalysisSettings*) Settings                                                  OFFSET(get<T>, {0xA0, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnSpectrumResults                                           OFFSET(getStruct<T>, {0xA8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnLatestSpectrumResults                                     OFFSET(getStruct<T>, {0xD0, 16, 0, 0})


	/// Functions
	// Function /Script/AudioSynesthesia.SynesthesiaSpectrumAnalyzer.GetNumCenterFrequencies
	// int32_t GetNumCenterFrequencies();                                                                                       // [0xb01e5d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AudioSynesthesia.SynesthesiaSpectrumAnalyzer.GetCenterFrequencies
	// void GetCenterFrequencies(float InSampleRate, TArray<float>& OutCenterFrequencies);                                      // [0xb01d578] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/AudioSynesthesia.ConstantQResults
/// Size: 0x0018 (0x000000 - 0x000018)
class FConstantQResults : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(float)                                     TimeSeconds                                                 OFFSET(get<float>, {0x0, 4, 0, 0})
	CMember(TArray<float>)                             SpectrumValues                                              OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/AudioSynesthesia.LoudnessResults
/// Size: 0x0010 (0x000000 - 0x000010)
class FLoudnessResults : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(float)                                     Loudness                                                    OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     NormalizedLoudness                                          OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     PerceptualEnergy                                            OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     TimeSeconds                                                 OFFSET(get<float>, {0xC, 4, 0, 0})
};

/// Struct /Script/AudioSynesthesia.MeterResults
/// Size: 0x0014 (0x000000 - 0x000014)
class FMeterResults : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	DMember(float)                                     TimeSeconds                                                 OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     MeterValue                                                  OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     PeakValue                                                   OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   NumSamplesClipping                                          OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	DMember(float)                                     ClippingValue                                               OFFSET(get<float>, {0x10, 4, 0, 0})
};

/// Struct /Script/AudioSynesthesia.SynesthesiaSpectrumResults
/// Size: 0x0018 (0x000000 - 0x000018)
class FSynesthesiaSpectrumResults : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(float)                                     TimeSeconds                                                 OFFSET(get<float>, {0x0, 4, 0, 0})
	CMember(TArray<float>)                             SpectrumValues                                              OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Enum /Script/AudioSynesthesia.EConstantQNormalizationEnum
/// Size: 0x04
enum class EConstantQNormalizationEnum : uint8_t
{
	EConstantQNormalizationEnum__EqualEuclideanNorm                                  = 0,
	EConstantQNormalizationEnum__EqualEnergy                                         = 1,
	EConstantQNormalizationEnum__EqualAmplitude                                      = 2,
	EConstantQNormalizationEnum__EConstantQNormalizationEnum_MAX                     = 3
};

/// Enum /Script/AudioSynesthesia.EConstantQFFTSizeEnum
/// Size: 0x09
enum class EConstantQFFTSizeEnum : uint8_t
{
	EConstantQFFTSizeEnum__Min                                                       = 0,
	EConstantQFFTSizeEnum__XXSmall                                                   = 1,
	EConstantQFFTSizeEnum__XSmall                                                    = 2,
	EConstantQFFTSizeEnum__Small                                                     = 3,
	EConstantQFFTSizeEnum__Medium                                                    = 4,
	EConstantQFFTSizeEnum__Large                                                     = 5,
	EConstantQFFTSizeEnum__XLarge                                                    = 6,
	EConstantQFFTSizeEnum__XXLarge                                                   = 7,
	EConstantQFFTSizeEnum__Max                                                       = 8
};

/// Enum /Script/AudioSynesthesia.ELoudnessCurveTypeEnum
/// Size: 0x06
enum class ELoudnessCurveTypeEnum : uint8_t
{
	ELoudnessCurveTypeEnum__A                                                        = 0,
	ELoudnessCurveTypeEnum__B                                                        = 1,
	ELoudnessCurveTypeEnum__C                                                        = 2,
	ELoudnessCurveTypeEnum__D                                                        = 3,
	ELoudnessCurveTypeEnum__None                                                     = 4,
	ELoudnessCurveTypeEnum__ELoudnessCurveTypeEnum_MAX                               = 5
};

/// Enum /Script/AudioSynesthesia.ELoudnessNRTCurveTypeEnum
/// Size: 0x06
enum class ELoudnessNRTCurveTypeEnum : uint8_t
{
	ELoudnessNRTCurveTypeEnum__A                                                     = 0,
	ELoudnessNRTCurveTypeEnum__B                                                     = 1,
	ELoudnessNRTCurveTypeEnum__C                                                     = 2,
	ELoudnessNRTCurveTypeEnum__D                                                     = 3,
	ELoudnessNRTCurveTypeEnum__None                                                  = 4,
	ELoudnessNRTCurveTypeEnum__ELoudnessNRTCurveTypeEnum_MAX                         = 5
};

/// Enum /Script/AudioSynesthesia.EMeterPeakType
/// Size: 0x05
enum class EMeterPeakType : uint8_t
{
	EMeterPeakType__MeanSquared                                                      = 0,
	EMeterPeakType__RootMeanSquared                                                  = 1,
	EMeterPeakType__Peak                                                             = 2,
	EMeterPeakType__Count                                                            = 3,
	EMeterPeakType__EMeterPeakType_MAX                                               = 4
};

