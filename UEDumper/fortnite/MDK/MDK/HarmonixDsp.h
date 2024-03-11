
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: Harmonix

/// Class /Script/HarmonixDsp.FusionPatch
/// Size: 0x05C8 (0x000028 - 0x0005F0)
class UFusionPatch : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1520;

public:
	SMember(FFusionPatchData)                          FusionPatchData                                             OFFSET(getStruct<T>, {0x30, 1448, 0, 0})
};

/// Class /Script/HarmonixDsp.StretcherAndPitchShifterConfig
/// Size: 0x0000 (0x000028 - 0x000028)
class UStretcherAndPitchShifterConfig : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/HarmonixDsp.SmbPitchShifterConfig
/// Size: 0x0020 (0x000028 - 0x000048)
class USmbPitchShifterConfig : public UStretcherAndPitchShifterConfig
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	DMember(uint32_t)                                  DefaultAllocatedStretchers                                  OFFSET(get<uint32_t>, {0x28, 4, 0, 0})
	DMember(uint32_t)                                  SwitchAllocatedStretchers                                   OFFSET(get<uint32_t>, {0x2C, 4, 0, 0})
	DMember(uint32_t)                                  PS4AllocatedStretchers                                      OFFSET(get<uint32_t>, {0x30, 4, 0, 0})
	DMember(uint32_t)                                  PS5AllocatedStretchers                                      OFFSET(get<uint32_t>, {0x34, 4, 0, 0})
	DMember(uint32_t)                                  XboxOneAllocatedStretchers                                  OFFSET(get<uint32_t>, {0x38, 4, 0, 0})
	DMember(uint32_t)                                  XSXAllocatedStretchers                                      OFFSET(get<uint32_t>, {0x3C, 4, 0, 0})
	DMember(uint32_t)                                  AndroidAllocatedStretchers                                  OFFSET(get<uint32_t>, {0x40, 4, 0, 0})
};

/// Class /Script/HarmonixDsp.StretcherAndPitchShifterFactoryConfig
/// Size: 0x0028 (0x000028 - 0x000050)
class UStretcherAndPitchShifterFactoryConfig : public UHarmonixDeveloperSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TArray<FName>)                             FactoryPriority                                             OFFSET(get<T>, {0x28, 16, 0, 0})
	SMember(FPitchShifterName)                         DefaultFactory                                              OFFSET(getStruct<T>, {0x38, 4, 0, 0})
	CMember(TArray<FPitchShifterNameRedirect>)         FactoryNameRedirects                                        OFFSET(get<T>, {0x40, 16, 0, 0})
};

/// Struct /Script/HarmonixDsp.HarmonixFFTAnalyzerResults
/// Size: 0x0010 (0x000000 - 0x000010)
class FHarmonixFFTAnalyzerResults : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<float>)                             Spectrum                                                    OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/HarmonixDsp.AdsrSettings
/// Size: 0x0120 (0x000000 - 0x000120)
class FAdsrSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	CMember(EAdsrTarget)                               Target                                                      OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(bool)                                      IsEnabled                                                   OFFSET(get<bool>, {0x1, 1, 0, 0})
	DMember(float)                                     AttackTime                                                  OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     DecayTime                                                   OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     SustainLevel                                                OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     ReleaseTime                                                 OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     Depth                                                       OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     AttackCurve                                                 OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     DecayCurve                                                  OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(float)                                     ReleaseCurve                                                OFFSET(get<float>, {0x20, 4, 0, 0})
};

/// Struct /Script/HarmonixDsp.AdsrSettingsArray
/// Size: 0x0240 (0x000000 - 0x000240)
class FAdsrSettingsArray : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 576;

public:
	SMember(FAdsrSettings)                             Array                                                       OFFSET(getStruct<T>, {0x0, 576, 0, 0})
};

/// Struct /Script/HarmonixDsp.BiquadFilterSettings
/// Size: 0x0018 (0x000000 - 0x000018)
class FBiquadFilterSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(bool)                                      IsEnabled                                                   OFFSET(get<bool>, {0x0, 1, 0, 0})
	CMember(EBiquadFilterType)                         Type                                                        OFFSET(get<T>, {0x4, 4, 0, 0})
	DMember(float)                                     Freq                                                        OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     Q                                                           OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     DesignedDBGain                                              OFFSET(get<float>, {0x14, 4, 0, 0})
};

/// Struct /Script/HarmonixDsp.BitCrusherSettings
/// Size: 0x0014 (0x000000 - 0x000014)
class FBitCrusherSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	DMember(bool)                                      IsEnabled                                                   OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(float)                                     InputGain                                                   OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     OutputGain                                                  OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     WetGain                                                     OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(uint16_t)                                  Crush                                                       OFFSET(get<uint16_t>, {0x10, 2, 0, 0})
	DMember(uint16_t)                                  SampleHoldFactor                                            OFFSET(get<uint16_t>, {0x12, 2, 0, 0})
};

/// Struct /Script/HarmonixDsp.DelaySettings
/// Size: 0x003C (0x000000 - 0x00003C)
class FDelaySettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 60;

public:
	DMember(bool)                                      IsEnabled                                                   OFFSET(get<bool>, {0x0, 1, 0, 0})
	CMember(ETimeSyncOption)                           TimeSyncOption                                              OFFSET(get<T>, {0x1, 1, 0, 0})
	DMember(float)                                     TimeSeconds                                                 OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     Tempo                                                       OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     DryGain                                                     OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     WetGain                                                     OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     FeedbackGain                                                OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(bool)                                      EQEnabled                                                   OFFSET(get<bool>, {0x18, 1, 0, 0})
	CMember(EDelayFilterType)                          EQType                                                      OFFSET(get<T>, {0x19, 1, 0, 0})
	DMember(float)                                     EQFreq                                                      OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(float)                                     EQQ                                                         OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(bool)                                      LfoEnabled                                                  OFFSET(get<bool>, {0x24, 1, 0, 0})
	CMember(ETimeSyncOption)                           LfoTimeSyncOption                                           OFFSET(get<T>, {0x25, 1, 0, 0})
	DMember(float)                                     LfoRate                                                     OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(float)                                     LfoDepth                                                    OFFSET(get<float>, {0x2C, 4, 0, 0})
	CMember(EDelayStereoType)                          StereoType                                                  OFFSET(get<T>, {0x30, 1, 0, 0})
	DMember(float)                                     PanLeft                                                     OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     PanRight                                                    OFFSET(get<float>, {0x38, 4, 0, 0})
};

/// Struct /Script/HarmonixDsp.DistortionFilterSettings
/// Size: 0x0020 (0x000000 - 0x000020)
class FDistortionFilterSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(bool)                                      FilterPreClip                                               OFFSET(get<bool>, {0x0, 1, 0, 0})
	SMember(FBiquadFilterSettings)                     Filter                                                      OFFSET(getStruct<T>, {0x4, 24, 0, 0})
	DMember(int32_t)                                   NumPasses                                                   OFFSET(get<int32_t>, {0x1C, 4, 0, 0})
};

/// Struct /Script/HarmonixDsp.DistortionSettingsV1
/// Size: 0x0078 (0x000000 - 0x000078)
class FDistortionSettingsV1 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	DMember(bool)                                      IsEnabled                                                   OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(float)                                     InputGainDb                                                 OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     OutputGainDb                                                OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     DCAdjust                                                    OFFSET(get<float>, {0xC, 4, 0, 0})
	CMember(EDistortionTypeV1)                         Type                                                        OFFSET(get<T>, {0x10, 4, 0, 0})
	DMember(bool)                                      Oversample                                                  OFFSET(get<bool>, {0x14, 1, 0, 0})
	SMember(FDistortionFilterSettings)                 Filters                                                     OFFSET(getStruct<T>, {0x18, 96, 0, 0})
};

/// Struct /Script/HarmonixDsp.DistortionSettingsV2
/// Size: 0x0080 (0x000000 - 0x000080)
class FDistortionSettingsV2 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	DMember(bool)                                      IsEnabled                                                   OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(float)                                     InputGainDb                                                 OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     OutputGainDb                                                OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     DryGain                                                     OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     WetGain                                                     OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     DCAdjust                                                    OFFSET(get<float>, {0x14, 4, 0, 0})
	CMember(EDistortionTypeV2)                         Type                                                        OFFSET(get<T>, {0x18, 4, 0, 0})
	DMember(bool)                                      Oversample                                                  OFFSET(get<bool>, {0x1C, 1, 0, 0})
	SMember(FDistortionFilterSettings)                 Filters                                                     OFFSET(getStruct<T>, {0x20, 96, 0, 0})
};

/// Struct /Script/HarmonixDsp.HarmonixFFTAnalyzerSettings
/// Size: 0x0024 (0x000000 - 0x000024)
class FHarmonixFFTAnalyzerSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 36;

public:
	DMember(int32_t)                                   FFTSize                                                     OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(float)                                     MinFrequencyHz                                              OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     MaxFrequencyHz                                              OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(bool)                                      MelScaleBinning                                             OFFSET(get<bool>, {0xC, 1, 0, 0})
	DMember(int32_t)                                   NumResultBins                                               OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	SMember(FHarmonixAudioAnalyzerOutputSettings)      OutputSettings                                              OFFSET(getStruct<T>, {0x14, 16, 0, 0})
};

/// Struct /Script/HarmonixDsp.HarmonixAudioAnalyzerOutputSettings
/// Size: 0x0010 (0x000000 - 0x000010)
class FHarmonixAudioAnalyzerOutputSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(float)                                     RiseMs                                                      OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     FallMs                                                      OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     MaxDecibels                                                 OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     RangeDecibels                                               OFFSET(get<float>, {0xC, 4, 0, 0})
};

/// Struct /Script/HarmonixDsp.FusionPatchData
/// Size: 0x05A8 (0x000000 - 0x0005A8)
class FFusionPatchData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1448;

public:
	CMember(TArray<FKeyzoneSettings>)                  Keyzones                                                    OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FFusionPatchSettings)                      Settings                                                    OFFSET(getStruct<T>, {0x10, 1416, 0, 0})
	CMember(TArray<FFusionPatchSettings>)              Presets                                                     OFFSET(get<T>, {0x598, 16, 0, 0})
};

/// Struct /Script/HarmonixDsp.FusionPatchSettings
/// Size: 0x0588 (0x000000 - 0x000588)
class FFusionPatchSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1416;

public:
	DMember(float)                                     VolumeDb                                                    OFFSET(get<float>, {0x0, 4, 0, 0})
	SMember(FPannerDetails)                            PannerDetails                                               OFFSET(getStruct<T>, {0x4, 12, 0, 0})
	DMember(float)                                     DownPitchBendCents                                          OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     UpPitchBendCents                                            OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     FineTuneCents                                               OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     StartPointOffsetMs                                          OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(int32_t)                                   MaxVoices                                                   OFFSET(get<int32_t>, {0x20, 4, 0, 0})
	CMember(EKeyzoneSelectMode)                        KeyzoneSelectMode                                           OFFSET(get<T>, {0x24, 1, 0, 0})
	SMember(FPortamentoSettings)                       Portamento                                                  OFFSET(getStruct<T>, {0x28, 8, 0, 0})
	SMember(FBiquadFilterSettings)                     Filter                                                      OFFSET(getStruct<T>, {0x30, 24, 0, 0})
	SMember(FAdsrSettings)                             Adsr                                                        OFFSET(getStruct<T>, {0x48, 576, 0, 0})
	SMember(FLfoSettings)                              LFO                                                         OFFSET(getStruct<T>, {0x288, 48, 0, 0})
	SMember(FModulatorSettings)                        Randomizer                                                  OFFSET(getStruct<T>, {0x2B8, 24, 0, 0})
	SMember(FModulatorSettings)                        VelocityModulator                                           OFFSET(getStruct<T>, {0x2D0, 24, 0, 0})
	SMember(FAdsrSettingsArray)                        Adsrs                                                       OFFSET(getStruct<T>, {0x2E8, 576, 0, 0})
	SMember(FLfoSettingsArray)                         Lfos                                                        OFFSET(getStruct<T>, {0x528, 48, 0, 0})
	SMember(FModulatorSettingsArray)                   Randomizers                                                 OFFSET(getStruct<T>, {0x558, 24, 0, 0})
	SMember(FModulatorSettingsArray)                   VelocityModulators                                          OFFSET(getStruct<T>, {0x570, 24, 0, 0})
};

/// Struct /Script/HarmonixDsp.ModulatorSettingsArray
/// Size: 0x0018 (0x000000 - 0x000018)
class FModulatorSettingsArray : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FModulatorSettings)                        Array                                                       OFFSET(getStruct<T>, {0x0, 24, 0, 0})
};

/// Struct /Script/HarmonixDsp.ModulatorSettings
/// Size: 0x000C (0x000000 - 0x00000C)
class FModulatorSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	CMember(EModulatorTarget)                          Target                                                      OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(float)                                     Range                                                       OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     Depth                                                       OFFSET(get<float>, {0x8, 4, 0, 0})
};

/// Struct /Script/HarmonixDsp.LfoSettingsArray
/// Size: 0x0030 (0x000000 - 0x000030)
class FLfoSettingsArray : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FLfoSettings)                              Array                                                       OFFSET(getStruct<T>, {0x0, 48, 0, 0})
};

/// Struct /Script/HarmonixDsp.LfoSettings
/// Size: 0x0018 (0x000000 - 0x000018)
class FLfoSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(ELfoTarget)                                Target                                                      OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(bool)                                      IsEnabled                                                   OFFSET(get<bool>, {0x1, 1, 0, 0})
	CMember(EWaveShape)                                Shape                                                       OFFSET(get<T>, {0x2, 1, 0, 0})
	DMember(bool)                                      ShouldRetrigger                                             OFFSET(get<bool>, {0x3, 1, 0, 0})
	DMember(bool)                                      BeatSync                                                    OFFSET(get<bool>, {0x4, 1, 0, 0})
	DMember(float)                                     Freq                                                        OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     Depth                                                       OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     InitialPhase                                                OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     TempoBPM                                                    OFFSET(get<float>, {0x14, 4, 0, 0})
};

/// Struct /Script/HarmonixDsp.PortamentoSettings
/// Size: 0x0008 (0x000000 - 0x000008)
class FPortamentoSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(bool)                                      IsEnabled                                                   OFFSET(get<bool>, {0x0, 1, 0, 0})
	CMember(EPortamentoMode)                           Mode                                                        OFFSET(get<T>, {0x1, 1, 0, 0})
	DMember(float)                                     Seconds                                                     OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Struct /Script/HarmonixDsp.PannerDetails
/// Size: 0x000C (0x000000 - 0x00000C)
class FPannerDetails : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
};

/// Struct /Script/HarmonixDsp.KeyzoneSettings
/// Size: 0x00D8 (0x000000 - 0x0000D8)
class FKeyzoneSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	CMember(class USoundWave*)                         SoundWave                                                   OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(int8_t)                                    RootNote                                                    OFFSET(get<int8_t>, {0x18, 1, 0, 0})
	DMember(int8_t)                                    MinNote                                                     OFFSET(get<int8_t>, {0x19, 1, 0, 0})
	DMember(int8_t)                                    MaxNote                                                     OFFSET(get<int8_t>, {0x1A, 1, 0, 0})
	DMember(int8_t)                                    MinVelocity                                                 OFFSET(get<int8_t>, {0x1B, 1, 0, 0})
	DMember(int8_t)                                    MaxVelocity                                                 OFFSET(get<int8_t>, {0x1C, 1, 0, 0})
	DMember(char)                                      SampleIndex                                                 OFFSET(get<char>, {0x1D, 1, 0, 0})
	DMember(char)                                      Priority                                                    OFFSET(get<char>, {0x1E, 1, 0, 0})
	SMember(FPannerDetails)                            Pan                                                         OFFSET(getStruct<T>, {0x20, 12, 0, 0})
	DMember(float)                                     FineTuneCents                                               OFFSET(get<float>, {0x2C, 4, 0, 0})
	DMember(float)                                     Gain                                                        OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(bool)                                      bUnpitched                                                  OFFSET(get<bool>, {0x38, 1, 0, 0})
	DMember(bool)                                      bVelocityToGain                                             OFFSET(get<bool>, {0x39, 1, 0, 0})
	SMember(FTimeStretchConfig)                        TimeStretchConfig                                           OFFSET(getStruct<T>, {0x40, 96, 0, 0})
	DMember(bool)                                      bIsNoteOffZone                                              OFFSET(get<bool>, {0xA0, 1, 0, 0})
	DMember(float)                                     RandomWeight                                                OFFSET(get<float>, {0xA4, 4, 0, 0})
	DMember(int32_t)                                   SampleStartOffset                                           OFFSET(get<int32_t>, {0xA8, 4, 0, 0})
	DMember(int32_t)                                   SampleEndOffset                                             OFFSET(get<int32_t>, {0xAC, 4, 0, 0})
	CMember(TArray<FTrackChannelInfo>)                 TrackMap                                                    OFFSET(get<T>, {0xB0, 16, 0, 0})
	DMember(bool)                                      UseSingletonVoicePool                                       OFFSET(get<bool>, {0xC0, 1, 0, 0})
};

/// Struct /Script/HarmonixDsp.TrackChannelInfo
/// Size: 0x0070 (0x000000 - 0x000070)
class FTrackChannelInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	DMember(int32_t)                                   RealTrackIndex                                              OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x4, 4, 0, 0})
	SMember(FName)                                     Routing                                                     OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	CMember(TArray<FStreamingChannelParams>)           Channels                                                    OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TMap<FName, FStreamingChannelParamsArray>) PresetChannels                                              OFFSET(get<T>, {0x20, 80, 0, 0})
};

/// Struct /Script/HarmonixDsp.StreamingChannelParamsArray
/// Size: 0x0010 (0x000000 - 0x000010)
class FStreamingChannelParamsArray : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FStreamingChannelParams>)           ChannelParams                                               OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/HarmonixDsp.StreamingChannelParams
/// Size: 0x0014 (0x000000 - 0x000014)
class FStreamingChannelParams : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	DMember(int32_t)                                   StreamIndex                                                 OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(float)                                     Gain                                                        OFFSET(get<float>, {0x4, 4, 0, 0})
	SMember(FPannerDetails)                            Pan                                                         OFFSET(getStruct<T>, {0x8, 12, 0, 0})
};

/// Struct /Script/HarmonixDsp.TimeStretchConfig
/// Size: 0x0060 (0x000000 - 0x000060)
class FTimeStretchConfig : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	DMember(bool)                                      bMaintainTime                                               OFFSET(get<bool>, {0x0, 1, 0, 0})
	SMember(FPitchShifterName)                         PitchShifter                                                OFFSET(getStruct<T>, {0x4, 4, 0, 0})
	CMember(TMap<FName, FTypedParameter>)              PitchShifterOptions                                         OFFSET(get<T>, {0x8, 80, 0, 0})
	DMember(bool)                                      bSyncTempo                                                  OFFSET(get<bool>, {0x58, 1, 0, 0})
	DMember(float)                                     OriginalTempo                                               OFFSET(get<float>, {0x5C, 4, 0, 0})
};

/// Struct /Script/HarmonixDsp.TypedParameter
/// Size: 0x0018 (0x000000 - 0x000018)
class FTypedParameter : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/HarmonixDsp.PitchShifterName
/// Size: 0x0004 (0x000000 - 0x000004)
class FPitchShifterName : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x0, 4, 0, 0})
};

/// Struct /Script/HarmonixDsp.StreamingTrackParams
/// Size: 0x0038 (0x000000 - 0x000038)
class FStreamingTrackParams : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Struct /Script/HarmonixDsp.PitchShifterNameRedirect
/// Size: 0x0008 (0x000000 - 0x000008)
class FPitchShifterNameRedirect : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FName)                                     OldName                                                     OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FName)                                     NewName                                                     OFFSET(getStruct<T>, {0x4, 4, 0, 0})
};

/// Struct /Script/HarmonixDsp.VocoderBandConfig
/// Size: 0x000C (0x000000 - 0x00000C)
class FVocoderBandConfig : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(int32_t)                                   BandCount                                                   OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(float)                                     FrequencyRatio                                              OFFSET(get<float>, {0x4, 4, 0, 0})
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x8, 4, 0, 0})
};

/// Struct /Script/HarmonixDsp.VocoderBand
/// Size: 0x0008 (0x000000 - 0x000008)
class FVocoderBand : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(float)                                     Gain                                                        OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(bool)                                      Solo                                                        OFFSET(get<bool>, {0x4, 1, 0, 0})
};

/// Struct /Script/HarmonixDsp.VocoderSettings
/// Size: 0x0050 (0x000000 - 0x000050)
class FVocoderSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	DMember(bool)                                      IsEnabled                                                   OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(int32_t)                                   ModulatorIndex                                              OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   ChannelCount                                                OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(float)                                     SampleRate                                                  OFFSET(get<float>, {0xC, 4, 0, 0})
	CMember(EVocoderBandConfig)                        BandConfig                                                  OFFSET(get<T>, {0x10, 1, 0, 0})
	DMember(bool)                                      Soloing                                                     OFFSET(get<bool>, {0x11, 1, 0, 0})
	DMember(int32_t)                                   FrameCount                                                  OFFSET(get<int32_t>, {0x14, 4, 0, 0})
	DMember(float)                                     CarrierGain                                                 OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     ModulatorGain                                               OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(float)                                     CarrierThin                                                 OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(float)                                     ModulatorThin                                               OFFSET(get<float>, {0x24, 4, 0, 0})
	DMember(float)                                     Attack                                                      OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(float)                                     Release                                                     OFFSET(get<float>, {0x2C, 4, 0, 0})
	DMember(float)                                     HighEmphasis                                                OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(float)                                     Wet                                                         OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     OutputGain                                                  OFFSET(get<float>, {0x38, 4, 0, 0})
	CMember(TArray<FVocoderBand>)                      Bands                                                       OFFSET(get<T>, {0x40, 16, 0, 0})
};

/// Struct /Script/HarmonixDsp.HarmonixVuMeterAnalyzerSettings
/// Size: 0x0018 (0x000000 - 0x000018)
class FHarmonixVuMeterAnalyzerSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(float)                                     AvgWindowMs                                                 OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     PeakHoldMs                                                  OFFSET(get<float>, {0x4, 4, 0, 0})
	SMember(FHarmonixAudioAnalyzerOutputSettings)      OutputSettings                                              OFFSET(getStruct<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/HarmonixDsp.HarmonixVuMeterAnalyzerChannelValues
/// Size: 0x0008 (0x000000 - 0x000008)
class FHarmonixVuMeterAnalyzerChannelValues : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(float)                                     LevelMeanSquared                                            OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     PeakSquared                                                 OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Struct /Script/HarmonixDsp.HarmonixVuMeterAnalyzerResults
/// Size: 0x0020 (0x000000 - 0x000020)
class FHarmonixVuMeterAnalyzerResults : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(float)                                     MonoPeakDecibels                                            OFFSET(get<float>, {0x0, 4, 0, 0})
	CMember(TArray<FHarmonixVuMeterAnalyzerChannelValues>) ChannelValues                                           OFFSET(get<T>, {0x8, 16, 0, 0})
	SMember(FHarmonixVuMeterAnalyzerChannelValues)     MonoValues                                                  OFFSET(getStruct<T>, {0x18, 8, 0, 0})
};

/// Struct /Script/HarmonixDsp.HarmonixWaveformAnalyzerSettings
/// Size: 0x0010 (0x000000 - 0x000010)
class FHarmonixWaveformAnalyzerSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(int32_t)                                   NumBinsHeld                                                 OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   NumBinsPerSecond                                            OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   SmoothingDistance                                           OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(float)                                     SmoothingFactor                                             OFFSET(get<float>, {0xC, 4, 0, 0})
};

/// Struct /Script/HarmonixDsp.HarmonixWaveformAnalyzerResults
/// Size: 0x0020 (0x000000 - 0x000020)
class FHarmonixWaveformAnalyzerResults : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(TArray<float>)                             WaveformRaw                                                 OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<float>)                             WaveformSmoothed                                            OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Enum /Script/HarmonixDsp.EFusionPatchAudioLoadResult
/// Size: 0x04
enum class EFusionPatchAudioLoadResult : uint8_t
{
	EFusionPatchAudioLoadResult__Success                                             = 0,
	EFusionPatchAudioLoadResult__Fail                                                = 1,
	EFusionPatchAudioLoadResult__Cancelled                                           = 2,
	EFusionPatchAudioLoadResult__EFusionPatchAudioLoadResult_MAX                     = 3
};

/// Enum /Script/HarmonixDsp.EAdsrTarget
/// Size: 0x05
enum class EAdsrTarget : uint8_t
{
	EAdsrTarget__Volume                                                              = 0,
	EAdsrTarget__FilterFreq                                                          = 1,
	EAdsrTarget__Num                                                                 = 2,
	EAdsrTarget__Invalid                                                             = 3,
	EAdsrTarget__EAdsrTarget_MAX                                                     = 4
};

/// Enum /Script/HarmonixDsp.ESpeakerChannelAssignment
/// Size: 0x22
enum class ESpeakerChannelAssignment : uint8_t
{
	ESpeakerChannelAssignment__LeftFront                                             = 0,
	ESpeakerChannelAssignment__RightFront                                            = 1,
	ESpeakerChannelAssignment__Center                                                = 2,
	ESpeakerChannelAssignment__LFE                                                   = 3,
	ESpeakerChannelAssignment__LeftSurround                                          = 4,
	ESpeakerChannelAssignment__RightSurround                                         = 5,
	ESpeakerChannelAssignment__LeftRear                                              = 6,
	ESpeakerChannelAssignment__RightRear                                             = 7,
	ESpeakerChannelAssignment__FrontPair                                             = 8,
	ESpeakerChannelAssignment__CenterAndLFE                                          = 9,
	ESpeakerChannelAssignment__SurroundPair                                          = 10,
	ESpeakerChannelAssignment__RearPair                                              = 11,
	ESpeakerChannelAssignment__AmbisonicW                                            = 12,
	ESpeakerChannelAssignment__AmbisonicX                                            = 13,
	ESpeakerChannelAssignment__AmbisonicY                                            = 14,
	ESpeakerChannelAssignment__AmbisonicZ                                            = 15,
	ESpeakerChannelAssignment__AmbisonicWXPair                                       = 16,
	ESpeakerChannelAssignment__AmbisonicYZPair                                       = 17,
	ESpeakerChannelAssignment__UnspecifiedMono                                       = 18,
	ESpeakerChannelAssignment__Num                                                   = 19,
	ESpeakerChannelAssignment__Invalid                                               = 20,
	ESpeakerChannelAssignment__ESpeakerChannelAssignment_MAX                         = 21
};

/// Enum /Script/HarmonixDsp.EBiquadFilterType
/// Size: 0x09
enum class EBiquadFilterType : uint32_t
{
	EBiquadFilterType__LowPass                                                       = 0,
	EBiquadFilterType__HighPass                                                      = 1,
	EBiquadFilterType__BandPass                                                      = 2,
	EBiquadFilterType__Peaking                                                       = 3,
	EBiquadFilterType__LowShelf                                                      = 4,
	EBiquadFilterType__HighShelf                                                     = 5,
	EBiquadFilterType__Num                                                           = 6,
	EBiquadFilterType__None                                                          = 7,
	EBiquadFilterType__EBiquadFilterType_MAX                                         = 8
};

/// Enum /Script/HarmonixDsp.EDelayStereoType
/// Size: 0x07
enum class EDelayStereoType : uint8_t
{
	EDelayStereoType__Default                                                        = 0,
	EDelayStereoType__CustomSpread                                                   = 1,
	EDelayStereoType__PingPongForceLR                                                = 2,
	EDelayStereoType__PingPongSum                                                    = 3,
	EDelayStereoType__PingPongIndividual                                             = 4,
	EDelayStereoType__Num                                                            = 5,
	EDelayStereoType__EDelayStereoType_MAX                                           = 6
};

/// Enum /Script/HarmonixDsp.EDelayFilterType
/// Size: 0x05
enum class EDelayFilterType : uint8_t
{
	EDelayFilterType__LowPass                                                        = 0,
	EDelayFilterType__HighPass                                                       = 1,
	EDelayFilterType__BandPass                                                       = 2,
	EDelayFilterType__Num                                                            = 3,
	EDelayFilterType__EDelayFilterType_MAX                                           = 4
};

/// Enum /Script/HarmonixDsp.EDistortionTypeV1
/// Size: 0x07
enum class EDistortionTypeV1 : uint32_t
{
	EDistortionTypeV1__Clean                                                         = 0,
	EDistortionTypeV1__Warm                                                          = 1,
	EDistortionTypeV1__Dirty                                                         = 2,
	EDistortionTypeV1__Soft                                                          = 3,
	EDistortionTypeV1__Asymmetric                                                    = 4,
	EDistortionTypeV1__Num                                                           = 5,
	EDistortionTypeV1__EDistortionTypeV1_MAX                                         = 6
};

/// Enum /Script/HarmonixDsp.EDistortionTypeV2
/// Size: 0x10
enum class EDistortionTypeV2 : uint32_t
{
	EDistortionTypeV2__Clean                                                         = 0,
	EDistortionTypeV2__Warm                                                          = 1,
	EDistortionTypeV2__Clip                                                          = 2,
	EDistortionTypeV2__Soft                                                          = 3,
	EDistortionTypeV2__Asymmetric                                                    = 4,
	EDistortionTypeV2__Cruncher                                                      = 5,
	EDistortionTypeV2__CaptCrunch                                                    = 6,
	EDistortionTypeV2__Rectifier                                                     = 7,
	EDistortionTypeV2__Num                                                           = 8,
	EDistortionTypeV2__EDistortionTypeV2_MAX                                         = 9
};

/// Enum /Script/HarmonixDsp.EKeyzoneSelectMode
/// Size: 0x07
enum class EKeyzoneSelectMode : uint8_t
{
	EKeyzoneSelectMode__Layers                                                       = 0,
	EKeyzoneSelectMode__Random                                                       = 1,
	EKeyzoneSelectMode__RandomWithRepetition                                         = 2,
	EKeyzoneSelectMode__Cycle                                                        = 3,
	EKeyzoneSelectMode__Num                                                          = 4,
	EKeyzoneSelectMode__Invalid                                                      = 5,
	EKeyzoneSelectMode__EKeyzoneSelectMode_MAX                                       = 6
};

/// Enum /Script/HarmonixDsp.EWaveShape
/// Size: 0x09
enum class EWaveShape : uint8_t
{
	EWaveShape__Sine                                                                 = 0,
	EWaveShape__Square                                                               = 1,
	EWaveShape__SawUp                                                                = 2,
	EWaveShape__SawDown                                                              = 3,
	EWaveShape__Triangle                                                             = 4,
	EWaveShape__Random                                                               = 5,
	EWaveShape__Num                                                                  = 6,
	EWaveShape__None                                                                 = 7,
	EWaveShape__EWaveShape_MAX                                                       = 8
};

/// Enum /Script/HarmonixDsp.ELfoTarget
/// Size: 0x06
enum class ELfoTarget : uint8_t
{
	ELfoTarget__Pan                                                                  = 0,
	ELfoTarget__Pitch                                                                = 1,
	ELfoTarget__FilterFreq                                                           = 2,
	ELfoTarget__Num                                                                  = 3,
	ELfoTarget__None                                                                 = 4,
	ELfoTarget__ELfoTarget_MAX                                                       = 5
};

/// Enum /Script/HarmonixDsp.EModulatorTarget
/// Size: 0x05
enum class EModulatorTarget : uint8_t
{
	EModulatorTarget__StartPoint                                                     = 0,
	EModulatorTarget__Pitch                                                          = 1,
	EModulatorTarget__Num                                                            = 2,
	EModulatorTarget__None                                                           = 3,
	EModulatorTarget__EModulatorTarget_MAX                                           = 4
};

/// Enum /Script/HarmonixDsp.EPannerMode
/// Size: 0x08
enum class EPannerMode : uint8_t
{
	EPannerMode__LegacyStereo                                                        = 0,
	EPannerMode__Stereo                                                              = 1,
	EPannerMode__Surround                                                            = 2,
	EPannerMode__PolarSurround                                                       = 3,
	EPannerMode__DirectAssignment                                                    = 4,
	EPannerMode__Num                                                                 = 5,
	EPannerMode__Invalid                                                             = 6,
	EPannerMode__EPannerMode_MAX                                                     = 7
};

/// Enum /Script/HarmonixDsp.EPortamentoMode
/// Size: 0x05
enum class EPortamentoMode : uint8_t
{
	EPortamentoMode__Legato                                                          = 0,
	EPortamentoMode__Persistent                                                      = 1,
	EPortamentoMode__Num                                                             = 2,
	EPortamentoMode__None                                                            = 3,
	EPortamentoMode__EPortamentoMode_MAX                                             = 4
};

/// Enum /Script/HarmonixDsp.ETimeSyncOption
/// Size: 0x05
enum class ETimeSyncOption : uint8_t
{
	ETimeSyncOption__None                                                            = 0,
	ETimeSyncOption__TempoSync                                                       = 1,
	ETimeSyncOption__SpeedScale                                                      = 2,
	ETimeSyncOption__Num                                                             = 3,
	ETimeSyncOption__ETimeSyncOption_MAX                                             = 4
};

/// Enum /Script/HarmonixDsp.EParameterType
/// Size: 0x16
enum class EParameterType : uint8_t
{
	EParameterType__Bool                                                             = 0,
	EParameterType__Double                                                           = 1,
	EParameterType__Float                                                            = 2,
	EParameterType__Int8                                                             = 3,
	EParameterType__Int16                                                            = 4,
	EParameterType__Int32                                                            = 5,
	EParameterType__Int64                                                            = 6,
	EParameterType__Name                                                             = 7,
	EParameterType__String                                                           = 8,
	EParameterType__UInt8                                                            = 9,
	EParameterType__UInt16                                                           = 10,
	EParameterType__UInt32                                                           = 11,
	EParameterType__UInt64                                                           = 12,
	EParameterType__Num                                                              = 13,
	EParameterType__Invalid                                                          = 14,
	EParameterType__EParameterType_MAX                                               = 15
};

/// Enum /Script/HarmonixDsp.EVocoderBandConfig
/// Size: 0x10
enum class EVocoderBandConfig : uint8_t
{
	EVocoderBandConfig__k4                                                           = 0,
	EVocoderBandConfig__k8                                                           = 1,
	EVocoderBandConfig__k16                                                          = 2,
	EVocoderBandConfig__k32                                                          = 3,
	EVocoderBandConfig__k64                                                          = 4,
	EVocoderBandConfig__k128                                                         = 5,
	EVocoderBandConfig__k256                                                         = 6,
	EVocoderBandConfig__Num                                                          = 7,
	EVocoderBandConfig__None                                                         = 8,
	EVocoderBandConfig__EVocoderBandConfig_MAX                                       = 9
};

