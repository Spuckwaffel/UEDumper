
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: Harmonix

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

/// Struct /Script/HarmonixDsp.PannerDetails
/// Size: 0x000C (0x000000 - 0x00000C)
struct FPannerDetails
{ 
	unsigned char                                      UnknownData00_2[0xC];                                       // 0x0000   (0x000C)  MISSED
};

/// Struct /Script/HarmonixDsp.PitchShifterName
/// Size: 0x0004 (0x000000 - 0x000004)
struct FPitchShifterName
{ 
	FName                                              Name;                                                       // 0x0000   (0x0004)  
};

/// Struct /Script/HarmonixDsp.TimeStretchConfig
/// Size: 0x0060 (0x000000 - 0x000060)
struct FTimeStretchConfig
{ 
	bool                                               bMaintainTime;                                              // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	FPitchShifterName                                  PitchShifter;                                               // 0x0004   (0x0004)  
	SDK_UNDEFINED(80,13605) /* TMap<FName, FTypedParameter> */ __um(PitchShifterOptions);                          // 0x0008   (0x0050)  
	bool                                               bSyncTempo;                                                 // 0x0058   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0059   (0x0003)  MISSED
	float                                              OriginalTempo;                                              // 0x005C   (0x0004)  
};

/// Struct /Script/HarmonixDsp.StreamingChannelParams
/// Size: 0x0014 (0x000000 - 0x000014)
struct FStreamingChannelParams
{ 
	int32_t                                            StreamIndex;                                                // 0x0000   (0x0004)  
	float                                              Gain;                                                       // 0x0004   (0x0004)  
	FPannerDetails                                     Pan;                                                        // 0x0008   (0x000C)  
};

/// Struct /Script/HarmonixDsp.TrackChannelInfo
/// Size: 0x0070 (0x000000 - 0x000070)
struct FTrackChannelInfo
{ 
	int32_t                                            RealTrackIndex;                                             // 0x0000   (0x0004)  
	FName                                              Name;                                                       // 0x0004   (0x0004)  
	FName                                              Routing;                                                    // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	TArray<FStreamingChannelParams>                    Channels;                                                   // 0x0010   (0x0010)  
	SDK_UNDEFINED(80,13606) /* TMap<FName, FStreamingChannelParamsArray> */ __um(PresetChannels);                  // 0x0020   (0x0050)  
};

/// Struct /Script/HarmonixDsp.KeyzoneSettings
/// Size: 0x00D8 (0x000000 - 0x0000D8)
struct FKeyzoneSettings
{ 
	class USoundWave*                                  SoundWave;                                                  // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_5[0x10];                                      // 0x0008   (0x0010)  MISSED
	int8_t                                             RootNote;                                                   // 0x0018   (0x0001)  
	int8_t                                             MinNote;                                                    // 0x0019   (0x0001)  
	int8_t                                             MaxNote;                                                    // 0x001A   (0x0001)  
	int8_t                                             MinVelocity;                                                // 0x001B   (0x0001)  
	int8_t                                             MaxVelocity;                                                // 0x001C   (0x0001)  
	char                                               SampleIndex;                                                // 0x001D   (0x0001)  
	char                                               Priority;                                                   // 0x001E   (0x0001)  
	unsigned char                                      UnknownData01_5[0x1];                                       // 0x001F   (0x0001)  MISSED
	FPannerDetails                                     Pan;                                                        // 0x0020   (0x000C)  
	float                                              FineTuneCents;                                              // 0x002C   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x0030   (0x0004)  MISSED
	float                                              Gain;                                                       // 0x0034   (0x0004)  
	bool                                               bUnpitched;                                                 // 0x0038   (0x0001)  
	bool                                               bVelocityToGain;                                            // 0x0039   (0x0001)  
	unsigned char                                      UnknownData03_5[0x6];                                       // 0x003A   (0x0006)  MISSED
	FTimeStretchConfig                                 TimeStretchConfig;                                          // 0x0040   (0x0060)  
	bool                                               bIsNoteOffZone;                                             // 0x00A0   (0x0001)  
	unsigned char                                      UnknownData04_5[0x3];                                       // 0x00A1   (0x0003)  MISSED
	float                                              RandomWeight;                                               // 0x00A4   (0x0004)  
	int32_t                                            SampleStartOffset;                                          // 0x00A8   (0x0004)  
	int32_t                                            SampleEndOffset;                                            // 0x00AC   (0x0004)  
	TArray<FTrackChannelInfo>                          TrackMap;                                                   // 0x00B0   (0x0010)  
	bool                                               UseSingletonVoicePool;                                      // 0x00C0   (0x0001)  
	unsigned char                                      UnknownData05_6[0x17];                                      // 0x00C1   (0x0017)  MISSED
};

/// Struct /Script/HarmonixDsp.PortamentoSettings
/// Size: 0x0008 (0x000000 - 0x000008)
struct FPortamentoSettings
{ 
	bool                                               IsEnabled;                                                  // 0x0000   (0x0001)  
	EPortamentoMode                                    Mode;                                                       // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0002   (0x0002)  MISSED
	float                                              Seconds;                                                    // 0x0004   (0x0004)  
};

/// Struct /Script/HarmonixDsp.BiquadFilterSettings
/// Size: 0x0018 (0x000000 - 0x000018)
struct FBiquadFilterSettings
{ 
	bool                                               IsEnabled;                                                  // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	EBiquadFilterType                                  Type;                                                       // 0x0004   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0008   (0x0004)  MISSED
	float                                              Freq;                                                       // 0x000C   (0x0004)  
	float                                              Q;                                                          // 0x0010   (0x0004)  
	float                                              DesignedDBGain;                                             // 0x0014   (0x0004)  
};

/// Struct /Script/HarmonixDsp.AdsrSettings
/// Size: 0x0120 (0x000000 - 0x000120)
struct FAdsrSettings
{ 
	EAdsrTarget                                        Target;                                                     // 0x0000   (0x0001)  
	bool                                               IsEnabled;                                                  // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0002   (0x0002)  MISSED
	float                                              AttackTime;                                                 // 0x0004   (0x0004)  
	float                                              DecayTime;                                                  // 0x0008   (0x0004)  
	float                                              SustainLevel;                                               // 0x000C   (0x0004)  
	float                                              ReleaseTime;                                                // 0x0010   (0x0004)  
	float                                              Depth;                                                      // 0x0014   (0x0004)  
	float                                              AttackCurve;                                                // 0x0018   (0x0004)  
	float                                              DecayCurve;                                                 // 0x001C   (0x0004)  
	float                                              ReleaseCurve;                                               // 0x0020   (0x0004)  
	unsigned char                                      UnknownData01_6[0xFC];                                      // 0x0024   (0x00FC)  MISSED
};

/// Struct /Script/HarmonixDsp.LfoSettings
/// Size: 0x0018 (0x000000 - 0x000018)
struct FLfoSettings
{ 
	ELfoTarget                                         Target;                                                     // 0x0000   (0x0001)  
	bool                                               IsEnabled;                                                  // 0x0001   (0x0001)  
	EWaveShape                                         Shape;                                                      // 0x0002   (0x0001)  
	bool                                               ShouldRetrigger;                                            // 0x0003   (0x0001)  
	bool                                               BeatSync;                                                   // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0005   (0x0003)  MISSED
	float                                              Freq;                                                       // 0x0008   (0x0004)  
	float                                              Depth;                                                      // 0x000C   (0x0004)  
	float                                              InitialPhase;                                               // 0x0010   (0x0004)  
	float                                              TempoBPM;                                                   // 0x0014   (0x0004)  
};

/// Struct /Script/HarmonixDsp.ModulatorSettings
/// Size: 0x000C (0x000000 - 0x00000C)
struct FModulatorSettings
{ 
	EModulatorTarget                                   Target;                                                     // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              Range;                                                      // 0x0004   (0x0004)  
	float                                              Depth;                                                      // 0x0008   (0x0004)  
};

/// Struct /Script/HarmonixDsp.AdsrSettingsArray
/// Size: 0x0240 (0x000000 - 0x000240)
struct FAdsrSettingsArray
{ 
	FAdsrSettings                                      Array;                                                      // 0x0000   (0x0240)  
};

/// Struct /Script/HarmonixDsp.LfoSettingsArray
/// Size: 0x0030 (0x000000 - 0x000030)
struct FLfoSettingsArray
{ 
	FLfoSettings                                       Array;                                                      // 0x0000   (0x0030)  
};

/// Struct /Script/HarmonixDsp.ModulatorSettingsArray
/// Size: 0x0018 (0x000000 - 0x000018)
struct FModulatorSettingsArray
{ 
	FModulatorSettings                                 Array;                                                      // 0x0000   (0x0018)  
};

/// Struct /Script/HarmonixDsp.FusionPatchSettings
/// Size: 0x0588 (0x000000 - 0x000588)
struct FFusionPatchSettings
{ 
	float                                              VolumeDb;                                                   // 0x0000   (0x0004)  
	FPannerDetails                                     PannerDetails;                                              // 0x0004   (0x000C)  
	float                                              DownPitchBendCents;                                         // 0x0010   (0x0004)  
	float                                              UpPitchBendCents;                                           // 0x0014   (0x0004)  
	float                                              FineTuneCents;                                              // 0x0018   (0x0004)  
	float                                              StartPointOffsetMs;                                         // 0x001C   (0x0004)  
	int32_t                                            MaxVoices;                                                  // 0x0020   (0x0004)  
	EKeyzoneSelectMode                                 KeyzoneSelectMode;                                          // 0x0024   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0025   (0x0003)  MISSED
	FPortamentoSettings                                Portamento;                                                 // 0x0028   (0x0008)  
	FBiquadFilterSettings                              Filter;                                                     // 0x0030   (0x0018)  
	FAdsrSettings                                      Adsr;                                                       // 0x0048   (0x0240)  
	FLfoSettings                                       LFO;                                                        // 0x0288   (0x0030)  
	FModulatorSettings                                 Randomizer;                                                 // 0x02B8   (0x0018)  
	FModulatorSettings                                 VelocityModulator;                                          // 0x02D0   (0x0018)  
	FAdsrSettingsArray                                 Adsrs;                                                      // 0x02E8   (0x0240)  
	FLfoSettingsArray                                  Lfos;                                                       // 0x0528   (0x0030)  
	FModulatorSettingsArray                            Randomizers;                                                // 0x0558   (0x0018)  
	FModulatorSettingsArray                            VelocityModulators;                                         // 0x0570   (0x0018)  
};

/// Struct /Script/HarmonixDsp.FusionPatchData
/// Size: 0x05A8 (0x000000 - 0x0005A8)
struct FFusionPatchData
{ 
	TArray<FKeyzoneSettings>                           Keyzones;                                                   // 0x0000   (0x0010)  
	FFusionPatchSettings                               Settings;                                                   // 0x0010   (0x0588)  
	TArray<FFusionPatchSettings>                       Presets;                                                    // 0x0598   (0x0010)  
};

/// Class /Script/HarmonixDsp.FusionPatch
/// Size: 0x05C8 (0x000028 - 0x0005F0)
class UFusionPatch : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x30];                                      // 0x0000   (0x0030)  MISSED
	FFusionPatchData                                   FusionPatchData;                                            // 0x0030   (0x05A8)  
	unsigned char                                      UnknownData01_6[0x18];                                      // 0x05D8   (0x0018)  MISSED
};

/// Class /Script/HarmonixDsp.StretcherAndPitchShifterConfig
/// Size: 0x0000 (0x000028 - 0x000028)
class UStretcherAndPitchShifterConfig : public UObject
{ 
public:
};

/// Class /Script/HarmonixDsp.SmbPitchShifterConfig
/// Size: 0x0020 (0x000028 - 0x000048)
class USmbPitchShifterConfig : public UStretcherAndPitchShifterConfig
{ 
public:
	uint32_t                                           DefaultAllocatedStretchers;                                 // 0x0028   (0x0004)  
	uint32_t                                           SwitchAllocatedStretchers;                                  // 0x002C   (0x0004)  
	uint32_t                                           PS4AllocatedStretchers;                                     // 0x0030   (0x0004)  
	uint32_t                                           PS5AllocatedStretchers;                                     // 0x0034   (0x0004)  
	uint32_t                                           XboxOneAllocatedStretchers;                                 // 0x0038   (0x0004)  
	uint32_t                                           XSXAllocatedStretchers;                                     // 0x003C   (0x0004)  
	uint32_t                                           AndroidAllocatedStretchers;                                 // 0x0040   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0044   (0x0004)  MISSED
};

/// Struct /Script/HarmonixDsp.PitchShifterNameRedirect
/// Size: 0x0008 (0x000000 - 0x000008)
struct FPitchShifterNameRedirect
{ 
	FName                                              OldName;                                                    // 0x0000   (0x0004)  
	FName                                              NewName;                                                    // 0x0004   (0x0004)  
};

/// Class /Script/HarmonixDsp.StretcherAndPitchShifterFactoryConfig
/// Size: 0x0028 (0x000028 - 0x000050)
class UStretcherAndPitchShifterFactoryConfig : public UHarmonixDeveloperSettings
{ 
public:
	TArray<FName>                                      FactoryPriority;                                            // 0x0028   (0x0010)  
	FPitchShifterName                                  DefaultFactory;                                             // 0x0038   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x003C   (0x0004)  MISSED
	TArray<FPitchShifterNameRedirect>                  FactoryNameRedirects;                                       // 0x0040   (0x0010)  
};

/// Struct /Script/HarmonixDsp.HarmonixFFTAnalyzerResults
/// Size: 0x0010 (0x000000 - 0x000010)
struct FHarmonixFFTAnalyzerResults
{ 
	TArray<float>                                      Spectrum;                                                   // 0x0000   (0x0010)  
};

/// Struct /Script/HarmonixDsp.BitCrusherSettings
/// Size: 0x0014 (0x000000 - 0x000014)
struct FBitCrusherSettings
{ 
	bool                                               IsEnabled;                                                  // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              InputGain;                                                  // 0x0004   (0x0004)  
	float                                              OutputGain;                                                 // 0x0008   (0x0004)  
	float                                              WetGain;                                                    // 0x000C   (0x0004)  
	uint16_t                                           Crush;                                                      // 0x0010   (0x0002)  
	uint16_t                                           SampleHoldFactor;                                           // 0x0012   (0x0002)  
};

/// Struct /Script/HarmonixDsp.DelaySettings
/// Size: 0x003C (0x000000 - 0x00003C)
struct FDelaySettings
{ 
	bool                                               IsEnabled;                                                  // 0x0000   (0x0001)  
	ETimeSyncOption                                    TimeSyncOption;                                             // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0002   (0x0002)  MISSED
	float                                              TimeSeconds;                                                // 0x0004   (0x0004)  
	float                                              Tempo;                                                      // 0x0008   (0x0004)  
	float                                              DryGain;                                                    // 0x000C   (0x0004)  
	float                                              WetGain;                                                    // 0x0010   (0x0004)  
	float                                              FeedbackGain;                                               // 0x0014   (0x0004)  
	bool                                               EQEnabled;                                                  // 0x0018   (0x0001)  
	EDelayFilterType                                   EQType;                                                     // 0x0019   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x001A   (0x0002)  MISSED
	float                                              EQFreq;                                                     // 0x001C   (0x0004)  
	float                                              EQQ;                                                        // 0x0020   (0x0004)  
	bool                                               LfoEnabled;                                                 // 0x0024   (0x0001)  
	ETimeSyncOption                                    LfoTimeSyncOption;                                          // 0x0025   (0x0001)  
	unsigned char                                      UnknownData02_5[0x2];                                       // 0x0026   (0x0002)  MISSED
	float                                              LfoRate;                                                    // 0x0028   (0x0004)  
	float                                              LfoDepth;                                                   // 0x002C   (0x0004)  
	EDelayStereoType                                   StereoType;                                                 // 0x0030   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x0031   (0x0003)  MISSED
	float                                              PanLeft;                                                    // 0x0034   (0x0004)  
	float                                              PanRight;                                                   // 0x0038   (0x0004)  
};

/// Struct /Script/HarmonixDsp.DistortionFilterSettings
/// Size: 0x0020 (0x000000 - 0x000020)
struct FDistortionFilterSettings
{ 
	bool                                               FilterPreClip;                                              // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	FBiquadFilterSettings                              Filter;                                                     // 0x0004   (0x0018)  
	int32_t                                            NumPasses;                                                  // 0x001C   (0x0004)  
};

/// Struct /Script/HarmonixDsp.DistortionSettingsV1
/// Size: 0x0078 (0x000000 - 0x000078)
struct FDistortionSettingsV1
{ 
	bool                                               IsEnabled;                                                  // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              InputGainDb;                                                // 0x0004   (0x0004)  
	float                                              OutputGainDb;                                               // 0x0008   (0x0004)  
	float                                              DCAdjust;                                                   // 0x000C   (0x0004)  
	EDistortionTypeV1                                  Type;                                                       // 0x0010   (0x0004)  
	bool                                               Oversample;                                                 // 0x0014   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0015   (0x0003)  MISSED
	FDistortionFilterSettings                          Filters;                                                    // 0x0018   (0x0060)  
};

/// Struct /Script/HarmonixDsp.DistortionSettingsV2
/// Size: 0x0080 (0x000000 - 0x000080)
struct FDistortionSettingsV2
{ 
	bool                                               IsEnabled;                                                  // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              InputGainDb;                                                // 0x0004   (0x0004)  
	float                                              OutputGainDb;                                               // 0x0008   (0x0004)  
	float                                              DryGain;                                                    // 0x000C   (0x0004)  
	float                                              WetGain;                                                    // 0x0010   (0x0004)  
	float                                              DCAdjust;                                                   // 0x0014   (0x0004)  
	EDistortionTypeV2                                  Type;                                                       // 0x0018   (0x0004)  
	bool                                               Oversample;                                                 // 0x001C   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x001D   (0x0003)  MISSED
	FDistortionFilterSettings                          Filters;                                                    // 0x0020   (0x0060)  
};

/// Struct /Script/HarmonixDsp.HarmonixAudioAnalyzerOutputSettings
/// Size: 0x0010 (0x000000 - 0x000010)
struct FHarmonixAudioAnalyzerOutputSettings
{ 
	float                                              RiseMs;                                                     // 0x0000   (0x0004)  
	float                                              FallMs;                                                     // 0x0004   (0x0004)  
	float                                              MaxDecibels;                                                // 0x0008   (0x0004)  
	float                                              RangeDecibels;                                              // 0x000C   (0x0004)  
};

/// Struct /Script/HarmonixDsp.HarmonixFFTAnalyzerSettings
/// Size: 0x0024 (0x000000 - 0x000024)
struct FHarmonixFFTAnalyzerSettings
{ 
	int32_t                                            FFTSize;                                                    // 0x0000   (0x0004)  
	float                                              MinFrequencyHz;                                             // 0x0004   (0x0004)  
	float                                              MaxFrequencyHz;                                             // 0x0008   (0x0004)  
	bool                                               MelScaleBinning;                                            // 0x000C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x000D   (0x0003)  MISSED
	int32_t                                            NumResultBins;                                              // 0x0010   (0x0004)  
	FHarmonixAudioAnalyzerOutputSettings               OutputSettings;                                             // 0x0014   (0x0010)  
};

/// Struct /Script/HarmonixDsp.StreamingChannelParamsArray
/// Size: 0x0010 (0x000000 - 0x000010)
struct FStreamingChannelParamsArray
{ 
	TArray<FStreamingChannelParams>                    ChannelParams;                                              // 0x0000   (0x0010)  
};

/// Struct /Script/HarmonixDsp.TypedParameter
/// Size: 0x0018 (0x000000 - 0x000018)
struct FTypedParameter
{ 
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x0000   (0x0018)  MISSED
};

/// Struct /Script/HarmonixDsp.StreamingTrackParams
/// Size: 0x0038 (0x000000 - 0x000038)
struct FStreamingTrackParams
{ 
	unsigned char                                      UnknownData00_2[0x38];                                      // 0x0000   (0x0038)  MISSED
};

/// Struct /Script/HarmonixDsp.VocoderBandConfig
/// Size: 0x000C (0x000000 - 0x00000C)
struct FVocoderBandConfig
{ 
	int32_t                                            BandCount;                                                  // 0x0000   (0x0004)  
	float                                              FrequencyRatio;                                             // 0x0004   (0x0004)  
	FName                                              Name;                                                       // 0x0008   (0x0004)  
};

/// Struct /Script/HarmonixDsp.VocoderBand
/// Size: 0x0008 (0x000000 - 0x000008)
struct FVocoderBand
{ 
	float                                              Gain;                                                       // 0x0000   (0x0004)  
	bool                                               Solo;                                                       // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0005   (0x0003)  MISSED
};

/// Struct /Script/HarmonixDsp.VocoderSettings
/// Size: 0x0050 (0x000000 - 0x000050)
struct FVocoderSettings
{ 
	bool                                               IsEnabled;                                                  // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	int32_t                                            ModulatorIndex;                                             // 0x0004   (0x0004)  
	int32_t                                            ChannelCount;                                               // 0x0008   (0x0004)  
	float                                              SampleRate;                                                 // 0x000C   (0x0004)  
	EVocoderBandConfig                                 BandConfig;                                                 // 0x0010   (0x0001)  
	bool                                               Soloing;                                                    // 0x0011   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x0012   (0x0002)  MISSED
	int32_t                                            FrameCount;                                                 // 0x0014   (0x0004)  
	float                                              CarrierGain;                                                // 0x0018   (0x0004)  
	float                                              ModulatorGain;                                              // 0x001C   (0x0004)  
	float                                              CarrierThin;                                                // 0x0020   (0x0004)  
	float                                              ModulatorThin;                                              // 0x0024   (0x0004)  
	float                                              Attack;                                                     // 0x0028   (0x0004)  
	float                                              Release;                                                    // 0x002C   (0x0004)  
	float                                              HighEmphasis;                                               // 0x0030   (0x0004)  
	float                                              Wet;                                                        // 0x0034   (0x0004)  
	float                                              OutputGain;                                                 // 0x0038   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x003C   (0x0004)  MISSED
	TArray<FVocoderBand>                               Bands;                                                      // 0x0040   (0x0010)  
};

/// Struct /Script/HarmonixDsp.HarmonixVuMeterAnalyzerSettings
/// Size: 0x0018 (0x000000 - 0x000018)
struct FHarmonixVuMeterAnalyzerSettings
{ 
	float                                              AvgWindowMs;                                                // 0x0000   (0x0004)  
	float                                              PeakHoldMs;                                                 // 0x0004   (0x0004)  
	FHarmonixAudioAnalyzerOutputSettings               OutputSettings;                                             // 0x0008   (0x0010)  
};

/// Struct /Script/HarmonixDsp.HarmonixVuMeterAnalyzerChannelValues
/// Size: 0x0008 (0x000000 - 0x000008)
struct FHarmonixVuMeterAnalyzerChannelValues
{ 
	float                                              LevelMeanSquared;                                           // 0x0000   (0x0004)  
	float                                              PeakSquared;                                                // 0x0004   (0x0004)  
};

/// Struct /Script/HarmonixDsp.HarmonixVuMeterAnalyzerResults
/// Size: 0x0020 (0x000000 - 0x000020)
struct FHarmonixVuMeterAnalyzerResults
{ 
	float                                              MonoPeakDecibels;                                           // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	TArray<FHarmonixVuMeterAnalyzerChannelValues>      ChannelValues;                                              // 0x0008   (0x0010)  
	FHarmonixVuMeterAnalyzerChannelValues              MonoValues;                                                 // 0x0018   (0x0008)  
};

/// Struct /Script/HarmonixDsp.HarmonixWaveformAnalyzerSettings
/// Size: 0x0010 (0x000000 - 0x000010)
struct FHarmonixWaveformAnalyzerSettings
{ 
	int32_t                                            NumBinsHeld;                                                // 0x0000   (0x0004)  
	int32_t                                            NumBinsPerSecond;                                           // 0x0004   (0x0004)  
	int32_t                                            SmoothingDistance;                                          // 0x0008   (0x0004)  
	float                                              SmoothingFactor;                                            // 0x000C   (0x0004)  
};

/// Struct /Script/HarmonixDsp.HarmonixWaveformAnalyzerResults
/// Size: 0x0020 (0x000000 - 0x000020)
struct FHarmonixWaveformAnalyzerResults
{ 
	TArray<float>                                      WaveformRaw;                                                // 0x0000   (0x0010)  
	TArray<float>                                      WaveformSmoothed;                                           // 0x0010   (0x0010)  
};

