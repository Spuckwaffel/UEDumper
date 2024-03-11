
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: AudioMixer
/// dependency: CoreUObject
/// dependency: Engine

/// Struct /Script/MotoSynth.MotoSynthRuntimeSettings
/// Size: 0x0138 (0x000000 - 0x000138)
struct FMotoSynthRuntimeSettings
{ 
	bool                                               bSynthToneEnabled;                                          // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	FVector2D                                          SynthToneVolumeRange;                                       // 0x0008   (0x0010)  
	FVector2D                                          SynthToneFilterFrequencyRange;                              // 0x0018   (0x0010)  
	bool                                               bSynthToneEnvelopeEnabled;                                  // 0x0028   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0029   (0x0007)  MISSED
	FVector2D                                          SynthToneAttackTimeMsecRange;                               // 0x0030   (0x0010)  
	FVector2D                                          SynthToneAttackCurveRange;                                  // 0x0040   (0x0010)  
	FVector2D                                          SynthToneDecayTimeMsecRange;                                // 0x0050   (0x0010)  
	FVector2D                                          SynthToneDecayCurveRange;                                   // 0x0060   (0x0010)  
	int32_t                                            SynthOctaveShift;                                           // 0x0070   (0x0004)  
	bool                                               bNoiseEnabled;                                              // 0x0074   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0075   (0x0003)  MISSED
	FVector2D                                          NoiseVolumeRange;                                           // 0x0078   (0x0010)  
	bool                                               bNoiseEnvelopeEnabled;                                      // 0x0088   (0x0001)  
	unsigned char                                      UnknownData03_5[0x7];                                       // 0x0089   (0x0007)  MISSED
	FVector2D                                          NoiseLPFRange;                                              // 0x0090   (0x0010)  
	FVector2D                                          NoiseAttackTimeMsecRange;                                   // 0x00A0   (0x0010)  
	FVector2D                                          NoiseAttackCurveRange;                                      // 0x00B0   (0x0010)  
	FVector2D                                          NoiseDecayTimeMsecRange;                                    // 0x00C0   (0x0010)  
	FVector2D                                          NoiseDecayCurveRange;                                       // 0x00D0   (0x0010)  
	bool                                               bGranularEngineEnabled;                                     // 0x00E0   (0x0001)  
	unsigned char                                      UnknownData04_5[0x3];                                       // 0x00E1   (0x0003)  MISSED
	float                                              GranularEngineVolume;                                       // 0x00E4   (0x0004)  
	float                                              GranularEnginePitchScale;                                   // 0x00E8   (0x0004)  
	int32_t                                            NumSamplesToCrossfadeBetweenGrains;                         // 0x00EC   (0x0004)  
	int32_t                                            NumGrainTableEntriesPerGrain;                               // 0x00F0   (0x0004)  
	int32_t                                            GrainTableRandomOffsetForConstantRPMs;                      // 0x00F4   (0x0004)  
	int32_t                                            GrainCrossfadeSamplesForConstantRPMs;                       // 0x00F8   (0x0004)  
	unsigned char                                      UnknownData05_5[0x4];                                       // 0x00FC   (0x0004)  MISSED
	class UMotoSynthSource*                            AccelerationSource;                                         // 0x0100   (0x0008)  
	class UMotoSynthSource*                            DecelerationSource;                                         // 0x0108   (0x0008)  
	bool                                               bStereoWidenerEnabled;                                      // 0x0110   (0x0001)  
	unsigned char                                      UnknownData06_5[0x3];                                       // 0x0111   (0x0003)  MISSED
	float                                              StereoDelayMsec;                                            // 0x0114   (0x0004)  
	float                                              StereoFeedback;                                             // 0x0118   (0x0004)  
	float                                              StereoWidenerWetlevel;                                      // 0x011C   (0x0004)  
	float                                              StereoWidenerDryLevel;                                      // 0x0120   (0x0004)  
	float                                              StereoWidenerDelayRatio;                                    // 0x0124   (0x0004)  
	bool                                               bStereoWidenerFilterEnabled;                                // 0x0128   (0x0001)  
	unsigned char                                      UnknownData07_5[0x3];                                       // 0x0129   (0x0003)  MISSED
	float                                              StereoWidenerFilterFrequency;                               // 0x012C   (0x0004)  
	float                                              StereoWidenerFilterQ;                                       // 0x0130   (0x0004)  
	unsigned char                                      UnknownData08_6[0x4];                                       // 0x0134   (0x0004)  MISSED
};

/// Class /Script/MotoSynth.MotoSynthPreset
/// Size: 0x0138 (0x000028 - 0x000160)
class UMotoSynthPreset : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	FMotoSynthRuntimeSettings                          Settings;                                                   // 0x0028   (0x0138)  
};

/// Struct /Script/MotoSynth.GrainTableEntry
/// Size: 0x0008 (0x000000 - 0x000008)
struct FGrainTableEntry
{ 
	int32_t                                            SampleIndex;                                                // 0x0000   (0x0004)  
	float                                              RPM;                                                        // 0x0004   (0x0004)  
};

/// Class /Script/MotoSynth.MotoSynthSource
/// Size: 0x00D0 (0x000028 - 0x0000F8)
class UMotoSynthSource : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	bool                                               bConvertTo8Bit;                                             // 0x0028   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0029   (0x0003)  MISSED
	float                                              DownSampleFactor;                                           // 0x002C   (0x0004)  
	FRuntimeFloatCurve                                 RpmCurve;                                                   // 0x0030   (0x0088)  
	TArray<float>                                      SourceData;                                                 // 0x00B8   (0x0010)  
	TArray<int16_t>                                    SourceDataPCM;                                              // 0x00C8   (0x0010)  
	int32_t                                            SourceSampleRate;                                           // 0x00D8   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x00DC   (0x0004)  MISSED
	TArray<FGrainTableEntry>                           GrainTable;                                                 // 0x00E0   (0x0010)  
	unsigned char                                      UnknownData03_6[0x8];                                       // 0x00F0   (0x0008)  MISSED
};

/// Class /Script/MotoSynth.SynthComponentMoto
/// Size: 0x01A0 (0x000880 - 0x000A20)
class USynthComponentMoto : public USynthComponent
{ 
public:
	class UMotoSynthPreset*                            MotoSynthPreset;                                            // 0x0880   (0x0008)  
	float                                              RPM;                                                        // 0x0888   (0x0004)  
	unsigned char                                      UnknownData00_6[0x194];                                     // 0x088C   (0x0194)  MISSED


	/// Functions
	// Function /Script/MotoSynth.SynthComponentMoto.SetSettings
	// void SetSettings(FMotoSynthRuntimeSettings& InSettings);                                                              // [0xa191394] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MotoSynth.SynthComponentMoto.SetRPM
	// void SetRPM(float InRPM, float InTimeSec);                                                                            // [0xa1912d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MotoSynth.SynthComponentMoto.IsEnabled
	// bool IsEnabled();                                                                                                     // [0xa1912b4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MotoSynth.SynthComponentMoto.GetRPMRange
	// void GetRPMRange(float& OutMinRPM, float& OutMaxRPM);                                                                 // [0xa1911dc] Final|Native|Public|HasOutParms|BlueprintCallable 
};

