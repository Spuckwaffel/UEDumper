
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: AudioMixer
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/MotoSynth.MotoSynthPreset
/// Size: 0x0138 (0x000028 - 0x000160)
class UMotoSynthPreset : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
	SMember(FMotoSynthRuntimeSettings)                 Settings                                                    OFFSET(getStruct<T>, {0x28, 312, 0, 0})
};

/// Class /Script/MotoSynth.MotoSynthSource
/// Size: 0x00D0 (0x000028 - 0x0000F8)
class UMotoSynthSource : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
	DMember(bool)                                      bConvertTo8Bit                                              OFFSET(get<bool>, {0x28, 1, 0, 0})
	DMember(float)                                     DownSampleFactor                                            OFFSET(get<float>, {0x2C, 4, 0, 0})
	SMember(FRuntimeFloatCurve)                        RpmCurve                                                    OFFSET(getStruct<T>, {0x30, 136, 0, 0})
	CMember(TArray<float>)                             SourceData                                                  OFFSET(get<T>, {0xB8, 16, 0, 0})
	CMember(TArray<int16_t>)                           SourceDataPCM                                               OFFSET(get<T>, {0xC8, 16, 0, 0})
	DMember(int32_t)                                   SourceSampleRate                                            OFFSET(get<int32_t>, {0xD8, 4, 0, 0})
	CMember(TArray<FGrainTableEntry>)                  GrainTable                                                  OFFSET(get<T>, {0xE0, 16, 0, 0})
};

/// Class /Script/MotoSynth.SynthComponentMoto
/// Size: 0x01A0 (0x000880 - 0x000A20)
class USynthComponentMoto : public USynthComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2592;

public:
	CMember(class UMotoSynthPreset*)                   MotoSynthPreset                                             OFFSET(get<T>, {0x880, 8, 0, 0})
	DMember(float)                                     RPM                                                         OFFSET(get<float>, {0x888, 4, 0, 0})


	/// Functions
	// Function /Script/MotoSynth.SynthComponentMoto.SetSettings
	// void SetSettings(FMotoSynthRuntimeSettings& InSettings);                                                                 // [0xb358314] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MotoSynth.SynthComponentMoto.SetRPM
	// void SetRPM(float InRPM, float InTimeSec);                                                                               // [0xb358250] Final|Native|Public|BlueprintCallable 
	// Function /Script/MotoSynth.SynthComponentMoto.IsEnabled
	// bool IsEnabled();                                                                                                        // [0xb358234] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MotoSynth.SynthComponentMoto.GetRPMRange
	// void GetRPMRange(float& OutMinRPM, float& OutMaxRPM);                                                                    // [0xb35815c] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/MotoSynth.MotoSynthRuntimeSettings
/// Size: 0x0138 (0x000000 - 0x000138)
class FMotoSynthRuntimeSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 312;

public:
	DMember(bool)                                      bSynthToneEnabled                                           OFFSET(get<bool>, {0x0, 1, 0, 0})
	SMember(FVector2D)                                 SynthToneVolumeRange                                        OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	SMember(FVector2D)                                 SynthToneFilterFrequencyRange                               OFFSET(getStruct<T>, {0x18, 16, 0, 0})
	DMember(bool)                                      bSynthToneEnvelopeEnabled                                   OFFSET(get<bool>, {0x28, 1, 0, 0})
	SMember(FVector2D)                                 SynthToneAttackTimeMsecRange                                OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	SMember(FVector2D)                                 SynthToneAttackCurveRange                                   OFFSET(getStruct<T>, {0x40, 16, 0, 0})
	SMember(FVector2D)                                 SynthToneDecayTimeMsecRange                                 OFFSET(getStruct<T>, {0x50, 16, 0, 0})
	SMember(FVector2D)                                 SynthToneDecayCurveRange                                    OFFSET(getStruct<T>, {0x60, 16, 0, 0})
	DMember(int32_t)                                   SynthOctaveShift                                            OFFSET(get<int32_t>, {0x70, 4, 0, 0})
	DMember(bool)                                      bNoiseEnabled                                               OFFSET(get<bool>, {0x74, 1, 0, 0})
	SMember(FVector2D)                                 NoiseVolumeRange                                            OFFSET(getStruct<T>, {0x78, 16, 0, 0})
	DMember(bool)                                      bNoiseEnvelopeEnabled                                       OFFSET(get<bool>, {0x88, 1, 0, 0})
	SMember(FVector2D)                                 NoiseLPFRange                                               OFFSET(getStruct<T>, {0x90, 16, 0, 0})
	SMember(FVector2D)                                 NoiseAttackTimeMsecRange                                    OFFSET(getStruct<T>, {0xA0, 16, 0, 0})
	SMember(FVector2D)                                 NoiseAttackCurveRange                                       OFFSET(getStruct<T>, {0xB0, 16, 0, 0})
	SMember(FVector2D)                                 NoiseDecayTimeMsecRange                                     OFFSET(getStruct<T>, {0xC0, 16, 0, 0})
	SMember(FVector2D)                                 NoiseDecayCurveRange                                        OFFSET(getStruct<T>, {0xD0, 16, 0, 0})
	DMember(bool)                                      bGranularEngineEnabled                                      OFFSET(get<bool>, {0xE0, 1, 0, 0})
	DMember(float)                                     GranularEngineVolume                                        OFFSET(get<float>, {0xE4, 4, 0, 0})
	DMember(float)                                     GranularEnginePitchScale                                    OFFSET(get<float>, {0xE8, 4, 0, 0})
	DMember(int32_t)                                   NumSamplesToCrossfadeBetweenGrains                          OFFSET(get<int32_t>, {0xEC, 4, 0, 0})
	DMember(int32_t)                                   NumGrainTableEntriesPerGrain                                OFFSET(get<int32_t>, {0xF0, 4, 0, 0})
	DMember(int32_t)                                   GrainTableRandomOffsetForConstantRPMs                       OFFSET(get<int32_t>, {0xF4, 4, 0, 0})
	DMember(int32_t)                                   GrainCrossfadeSamplesForConstantRPMs                        OFFSET(get<int32_t>, {0xF8, 4, 0, 0})
	CMember(class UMotoSynthSource*)                   AccelerationSource                                          OFFSET(get<T>, {0x100, 8, 0, 0})
	CMember(class UMotoSynthSource*)                   DecelerationSource                                          OFFSET(get<T>, {0x108, 8, 0, 0})
	DMember(bool)                                      bStereoWidenerEnabled                                       OFFSET(get<bool>, {0x110, 1, 0, 0})
	DMember(float)                                     StereoDelayMsec                                             OFFSET(get<float>, {0x114, 4, 0, 0})
	DMember(float)                                     StereoFeedback                                              OFFSET(get<float>, {0x118, 4, 0, 0})
	DMember(float)                                     StereoWidenerWetlevel                                       OFFSET(get<float>, {0x11C, 4, 0, 0})
	DMember(float)                                     StereoWidenerDryLevel                                       OFFSET(get<float>, {0x120, 4, 0, 0})
	DMember(float)                                     StereoWidenerDelayRatio                                     OFFSET(get<float>, {0x124, 4, 0, 0})
	DMember(bool)                                      bStereoWidenerFilterEnabled                                 OFFSET(get<bool>, {0x128, 1, 0, 0})
	DMember(float)                                     StereoWidenerFilterFrequency                                OFFSET(get<float>, {0x12C, 4, 0, 0})
	DMember(float)                                     StereoWidenerFilterQ                                        OFFSET(get<float>, {0x130, 4, 0, 0})
};

/// Struct /Script/MotoSynth.GrainTableEntry
/// Size: 0x0008 (0x000000 - 0x000008)
class FGrainTableEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(int32_t)                                   SampleIndex                                                 OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(float)                                     RPM                                                         OFFSET(get<float>, {0x4, 4, 0, 0})
};

