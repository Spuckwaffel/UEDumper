
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Enum /Script/AudioMixer.EAudioDeviceChangedRole
/// Size: 0x06
enum class EAudioDeviceChangedRole : uint8_t
{
	EAudioDeviceChangedRole__Invalid                                                 = 0,
	EAudioDeviceChangedRole__Console                                                 = 1,
	EAudioDeviceChangedRole__Multimedia                                              = 2,
	EAudioDeviceChangedRole__Communications                                          = 3,
	EAudioDeviceChangedRole__Count                                                   = 4,
	EAudioDeviceChangedRole__EAudioDeviceChangedRole_MAX                             = 5
};

/// Enum /Script/AudioMixer.EAudioDeviceChangedState
/// Size: 0x07
enum class EAudioDeviceChangedState : uint8_t
{
	EAudioDeviceChangedState__Invalid                                                = 0,
	EAudioDeviceChangedState__Active                                                 = 1,
	EAudioDeviceChangedState__Disabled                                               = 2,
	EAudioDeviceChangedState__NotPresent                                             = 3,
	EAudioDeviceChangedState__Unplugged                                              = 4,
	EAudioDeviceChangedState__Count                                                  = 5,
	EAudioDeviceChangedState__EAudioDeviceChangedState_MAX                           = 6
};

/// Enum /Script/AudioMixer.EAudioMixerChannelType
/// Size: 0x22
enum class EAudioMixerChannelType : uint8_t
{
	EAudioMixerChannelType__FrontLeft                                                = 0,
	EAudioMixerChannelType__FrontRight                                               = 1,
	EAudioMixerChannelType__FrontCenter                                              = 2,
	EAudioMixerChannelType__LowFrequency                                             = 3,
	EAudioMixerChannelType__BackLeft                                                 = 4,
	EAudioMixerChannelType__BackRight                                                = 5,
	EAudioMixerChannelType__FrontLeftOfCenter                                        = 6,
	EAudioMixerChannelType__FrontRightOfCenter                                       = 7,
	EAudioMixerChannelType__BackCenter                                               = 8,
	EAudioMixerChannelType__SideLeft                                                 = 9,
	EAudioMixerChannelType__SideRight                                                = 10,
	EAudioMixerChannelType__TopCenter                                                = 11,
	EAudioMixerChannelType__TopFrontLeft                                             = 12,
	EAudioMixerChannelType__TopFrontCenter                                           = 13,
	EAudioMixerChannelType__TopFrontRight                                            = 14,
	EAudioMixerChannelType__TopBackLeft                                              = 15,
	EAudioMixerChannelType__TopBackCenter                                            = 16,
	EAudioMixerChannelType__TopBackRight                                             = 17,
	EAudioMixerChannelType__Unknown                                                  = 18,
	EAudioMixerChannelType__ChannelTypeCount                                         = 19,
	EAudioMixerChannelType__DefaultChannel                                           = 0,
	EAudioMixerChannelType__EAudioMixerChannelType_MAX                               = 20
};

/// Enum /Script/AudioMixer.EAudioMixerStreamDataFormatType
/// Size: 0x05
enum class EAudioMixerStreamDataFormatType : uint8_t
{
	EAudioMixerStreamDataFormatType__Unknown                                         = 0,
	EAudioMixerStreamDataFormatType__Float                                           = 1,
	EAudioMixerStreamDataFormatType__Int16                                           = 2,
	EAudioMixerStreamDataFormatType__Unsupported                                     = 3,
	EAudioMixerStreamDataFormatType__EAudioMixerStreamDataFormatType_MAX             = 4
};

/// Enum /Script/AudioMixer.ESwapAudioOutputDeviceResultState
/// Size: 0x04
enum class ESwapAudioOutputDeviceResultState : uint8_t
{
	ESwapAudioOutputDeviceResultState__Failure                                       = 0,
	ESwapAudioOutputDeviceResultState__Success                                       = 1,
	ESwapAudioOutputDeviceResultState__None                                          = 2,
	ESwapAudioOutputDeviceResultState__ESwapAudioOutputDeviceResultState_MAX         = 3
};

/// Enum /Script/AudioMixer.ERequiredSubmixes
/// Size: 0x06
enum class ERequiredSubmixes : uint8_t
{
	ERequiredSubmixes__Main                                                          = 0,
	ERequiredSubmixes__BaseDefault                                                   = 1,
	ERequiredSubmixes__Reverb                                                        = 2,
	ERequiredSubmixes__EQ                                                            = 3,
	ERequiredSubmixes__Count                                                         = 4,
	ERequiredSubmixes__ERequiredSubmixes_MAX                                         = 5
};

/// Enum /Script/AudioMixer.ESourceManagerRenderThreadPhase
/// Size: 0x14
enum class ESourceManagerRenderThreadPhase : uint8_t
{
	Begin                                                                            = 0,
	PumpMpscCmds                                                                     = 1,
	PumpCmds                                                                         = 2,
	ProcessModulators                                                                = 3,
	UpdatePendingReleaseData                                                         = 4,
	GenerateSrcAudio_WithBusses                                                      = 5,
	ComputeBusses                                                                    = 6,
	GenerateSrcAudio_WithoutBusses                                                   = 7,
	UpdateBusses                                                                     = 8,
	SpatialInterface_OnAllSourcesProcessed                                           = 9,
	SourceDataOverride_OnAllSourcesProcessed                                         = 10,
	UpdateGameThreadCopies                                                           = 11,
	Finished                                                                         = 12,
	ESourceManagerRenderThreadPhase_MAX                                              = 13
};

/// Enum /Script/AudioMixer.EMusicalNoteName
/// Size: 0x13
enum class EMusicalNoteName : uint8_t
{
	EMusicalNoteName__C                                                              = 0,
	EMusicalNoteName__Db                                                             = 1,
	EMusicalNoteName__D                                                              = 2,
	EMusicalNoteName__Eb                                                             = 3,
	EMusicalNoteName__E                                                              = 4,
	EMusicalNoteName__F                                                              = 5,
	EMusicalNoteName__Gb                                                             = 6,
	EMusicalNoteName__G                                                              = 7,
	EMusicalNoteName__Ab                                                             = 8,
	EMusicalNoteName__A                                                              = 9,
	EMusicalNoteName__Bb                                                             = 10,
	EMusicalNoteName__B                                                              = 11,
	EMusicalNoteName__EMusicalNoteName_MAX                                           = 12
};

/// Enum /Script/AudioMixer.ESubmixEffectDynamicsProcessorType
/// Size: 0x07
enum class ESubmixEffectDynamicsProcessorType : uint8_t
{
	ESubmixEffectDynamicsProcessorType__Compressor                                   = 0,
	ESubmixEffectDynamicsProcessorType__Limiter                                      = 1,
	ESubmixEffectDynamicsProcessorType__Expander                                     = 2,
	ESubmixEffectDynamicsProcessorType__Gate                                         = 3,
	ESubmixEffectDynamicsProcessorType__UpwardsCompressor                            = 4,
	ESubmixEffectDynamicsProcessorType__Count                                        = 5,
	ESubmixEffectDynamicsProcessorType__ESubmixEffectDynamicsProcessorType_MAX       = 6
};

/// Enum /Script/AudioMixer.ESubmixEffectDynamicsPeakMode
/// Size: 0x05
enum class ESubmixEffectDynamicsPeakMode : uint8_t
{
	ESubmixEffectDynamicsPeakMode__MeanSquared                                       = 0,
	ESubmixEffectDynamicsPeakMode__RootMeanSquared                                   = 1,
	ESubmixEffectDynamicsPeakMode__Peak                                              = 2,
	ESubmixEffectDynamicsPeakMode__Count                                             = 3,
	ESubmixEffectDynamicsPeakMode__ESubmixEffectDynamicsPeakMode_MAX                 = 4
};

/// Enum /Script/AudioMixer.ESubmixEffectDynamicsChannelLinkMode
/// Size: 0x05
enum class ESubmixEffectDynamicsChannelLinkMode : uint8_t
{
	ESubmixEffectDynamicsChannelLinkMode__Disabled                                   = 0,
	ESubmixEffectDynamicsChannelLinkMode__Average                                    = 1,
	ESubmixEffectDynamicsChannelLinkMode__Peak                                       = 2,
	ESubmixEffectDynamicsChannelLinkMode__Count                                      = 3,
	ESubmixEffectDynamicsChannelLinkMode__ESubmixEffectDynamicsChannelLinkMode_MAX   = 4
};

/// Enum /Script/AudioMixer.ESubmixEffectDynamicsKeySource
/// Size: 0x05
enum class ESubmixEffectDynamicsKeySource : uint8_t
{
	ESubmixEffectDynamicsKeySource__Default                                          = 0,
	ESubmixEffectDynamicsKeySource__AudioBus                                         = 1,
	ESubmixEffectDynamicsKeySource__Submix                                           = 2,
	ESubmixEffectDynamicsKeySource__Count                                            = 3,
	ESubmixEffectDynamicsKeySource__ESubmixEffectDynamicsKeySource_MAX               = 4
};

/// Class /Script/AudioMixer.AudioBusSubsystem
/// Size: 0x0060 (0x000030 - 0x000090)
class UAudioBusSubsystem : public UAudioEngineSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x60];                                      // 0x0030   (0x0060)  MISSED
};

/// Class /Script/AudioMixer.AudioDeviceNotificationSubsystem
/// Size: 0x00F8 (0x000030 - 0x000128)
class UAudioDeviceNotificationSubsystem : public UEngineSubsystem
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0030   (0x0008)  MISSED
	SDK_UNDEFINED(16,1735) /* FMulticastInlineDelegate */ __um(DefaultCaptureDeviceChanged);                       // 0x0038   (0x0010)  
	unsigned char                                      UnknownData01_5[0x18];                                      // 0x0048   (0x0018)  MISSED
	SDK_UNDEFINED(16,1736) /* FMulticastInlineDelegate */ __um(DefaultRenderDeviceChanged);                        // 0x0060   (0x0010)  
	unsigned char                                      UnknownData02_5[0x18];                                      // 0x0070   (0x0018)  MISSED
	SDK_UNDEFINED(16,1737) /* FMulticastInlineDelegate */ __um(DeviceAdded);                                       // 0x0088   (0x0010)  
	unsigned char                                      UnknownData03_5[0x18];                                      // 0x0098   (0x0018)  MISSED
	SDK_UNDEFINED(16,1738) /* FMulticastInlineDelegate */ __um(DeviceRemoved);                                     // 0x00B0   (0x0010)  
	unsigned char                                      UnknownData04_5[0x18];                                      // 0x00C0   (0x0018)  MISSED
	SDK_UNDEFINED(16,1739) /* FMulticastInlineDelegate */ __um(DeviceStateChanged);                                // 0x00D8   (0x0010)  
	unsigned char                                      UnknownData05_5[0x18];                                      // 0x00E8   (0x0018)  MISSED
	SDK_UNDEFINED(16,1740) /* FMulticastInlineDelegate */ __um(DeviceSwitched);                                    // 0x0100   (0x0010)  
	unsigned char                                      UnknownData06_6[0x18];                                      // 0x0110   (0x0018)  MISSED
};

/// Class /Script/AudioMixer.AudioMixerBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UAudioMixerBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.UnregisterAudioBusFromSubmix
	// void UnregisterAudioBusFromSubmix(class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, class UAudioBus* AudioBus); // [0x6697938] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.TrimAudioCache
	// float TrimAudioCache(float InMegabytesToFree);                                                                        // [0x66978b4] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.SwapAudioOutputDevice
	// void SwapAudioOutputDevice(class UObject* WorldContextObject, FString NewDeviceId, FDelegateProperty& OnCompletedDeviceSwap); // [0x66976c0] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.StopRecordingOutput
	// class USoundWave* StopRecordingOutput(class UObject* WorldContextObject, EAudioRecordingExportType ExportType, FString Name, FString Path, class USoundSubmix* SubmixToRecord, class USoundWave* ExistingSoundWaveToOverwrite); // [0x6697408] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.StopAudioBus
	// void StopAudioBus(class UObject* WorldContextObject, class UAudioBus* AudioBus);                                      // [0x66972f4] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.StopAnalyzingOutput
	// void StopAnalyzingOutput(class UObject* WorldContextObject, class USoundSubmix* SubmixToStopAnalyzing);               // [0x6697208] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.StartRecordingOutput
	// void StartRecordingOutput(class UObject* WorldContextObject, float ExpectedDuration, class USoundSubmix* SubmixToRecord); // [0x6697110] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.StartAudioBus
	// void StartAudioBus(class UObject* WorldContextObject, class UAudioBus* AudioBus);                                     // [0x6696ff0] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.StartAnalyzingOutput
	// void StartAnalyzingOutput(class UObject* WorldContextObject, class USoundSubmix* SubmixToAnalyze, EFFTSize FFTSize, EFFTPeakInterpolationMethod InterpolationMethod, EFFTWindowType WindowType, float HopSize, EAudioSpectrumType SpectrumType); // [0x6696de8] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.SetSubmixEffectChainOverride
	// void SetSubmixEffectChainOverride(class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, TArray<USoundEffectSubmixPreset*> SubmixEffectPresetChain, float FadeTimeSec); // [0x6696b98] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.SetBypassSourceEffectChainEntry
	// void SetBypassSourceEffectChainEntry(class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain, int32_t EntryIndex, bool bBypassed); // [0x66969b0] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.ResumeRecordingOutput
	// void ResumeRecordingOutput(class UObject* WorldContextObject, class USoundSubmix* SubmixToPause);                     // [0x66968fc] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.ReplaceSubmixEffect
	// void ReplaceSubmixEffect(class UObject* WorldContextObject, class USoundSubmix* InSoundSubmix, int32_t SubmixChainIndex, class USoundEffectSubmixPreset* SubmixEffectPreset); // [0x6696730] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.ReplaceSoundEffectSubmix
	// void ReplaceSoundEffectSubmix(class UObject* WorldContextObject, class USoundSubmix* InSoundSubmix, int32_t SubmixChainIndex, class USoundEffectSubmixPreset* SubmixEffectPreset); // [0x6696730] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.RemoveSubmixEffectPresetAtIndex
	// void RemoveSubmixEffectPresetAtIndex(class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, int32_t SubmixChainIndex); // [0x6696638] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.RemoveSubmixEffectPreset
	// void RemoveSubmixEffectPreset(class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, class USoundEffectSubmixPreset* SubmixEffectPreset); // [0x6696540] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.RemoveSubmixEffectAtIndex
	// void RemoveSubmixEffectAtIndex(class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, int32_t SubmixChainIndex); // [0x6696638] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.RemoveSubmixEffect
	// void RemoveSubmixEffect(class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, class USoundEffectSubmixPreset* SubmixEffectPreset); // [0x6696540] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.RemoveSourceEffectFromPresetChain
	// void RemoveSourceEffectFromPresetChain(class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain, int32_t EntryIndex); // [0x6696374] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.RemoveMasterSubmixEffect
	// void RemoveMasterSubmixEffect(class UObject* WorldContextObject, class USoundEffectSubmixPreset* SubmixEffectPreset); // [0x6696260] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.RegisterAudioBusToSubmix
	// void RegisterAudioBusToSubmix(class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, class UAudioBus* AudioBus); // [0x6696168] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.PrimeSoundForPlayback
	// void PrimeSoundForPlayback(class USoundWave* SoundWave, FDelegateProperty OnLoadCompletion);                          // [0x6695fe0] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.PrimeSoundCueForPlayback
	// void PrimeSoundCueForPlayback(class USoundCue* SoundCue);                                                             // [0x6695f74] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.PauseRecordingOutput
	// void PauseRecordingOutput(class UObject* WorldContextObject, class USoundSubmix* SubmixToPause);                      // [0x6695ec0] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.MakePresetSpectralAnalysisBandSettings
	// TArray<FSoundSubmixSpectralAnalysisBandSettings> MakePresetSpectralAnalysisBandSettings(EAudioSpectrumBandPresetType InBandPresetType, int32_t InNumBands, int32_t InAttackTimeMsec, int32_t InReleaseTimeMsec); // [0x6695d60] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.MakeMusicalSpectralAnalysisBandSettings
	// TArray<FSoundSubmixSpectralAnalysisBandSettings> MakeMusicalSpectralAnalysisBandSettings(int32_t InNumSemitones, EMusicalNoteName InStartingMusicalNote, int32_t InStartingOctave, int32_t InAttackTimeMsec, int32_t InReleaseTimeMsec); // [0x6695bbc] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.MakeFullSpectrumSpectralAnalysisBandSettings
	// TArray<FSoundSubmixSpectralAnalysisBandSettings> MakeFullSpectrumSpectralAnalysisBandSettings(int32_t InNumBands, float InMinimumFrequency, float InMaximumFrequency, int32_t InAttackTimeMsec, int32_t InReleaseTimeMsec); // [0x6695a18] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.IsAudioBusActive
	// bool IsAudioBusActive(class UObject* WorldContextObject, class UAudioBus* AudioBus);                                  // [0x6695904] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.GetPhaseForFrequencies
	// void GetPhaseForFrequencies(class UObject* WorldContextObject, TArray<float>& Frequencies, TArray<float>& Phases, class USoundSubmix* SubmixToAnalyze); // [0x669566c] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.GetNumberOfEntriesInSourceEffectChain
	// int32_t GetNumberOfEntriesInSourceEffectChain(class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain); // [0x6695550] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.GetMagnitudeForFrequencies
	// void GetMagnitudeForFrequencies(class UObject* WorldContextObject, TArray<float>& Frequencies, TArray<float>& Magnitudes, class USoundSubmix* SubmixToAnalyze); // [0x66952b8] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.GetCurrentAudioOutputDeviceName
	// void GetCurrentAudioOutputDeviceName(class UObject* WorldContextObject, FDelegateProperty& OnObtainCurrentDeviceEvent); // [0x66951e0] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.GetAvailableAudioOutputDevices
	// void GetAvailableAudioOutputDevices(class UObject* WorldContextObject, FDelegateProperty& OnObtainDevicesEvent);      // [0x6695108] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.Conv_AudioOutputDeviceInfoToString
	// FString Conv_AudioOutputDeviceInfoToString(FAudioOutputDeviceInfo& Info);                                             // [0x6695050] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.ClearSubmixEffects
	// void ClearSubmixEffects(class UObject* WorldContextObject, class USoundSubmix* SoundSubmix);                          // [0x6694f90] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.ClearSubmixEffectChainOverride
	// void ClearSubmixEffectChainOverride(class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, float FadeTimeSec); // [0x6694e98] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.ClearMasterSubmixEffects
	// void ClearMasterSubmixEffects(class UObject* WorldContextObject);                                                     // [0x6694dfc] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.AddSubmixEffect
	// int32_t AddSubmixEffect(class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, class USoundEffectSubmixPreset* SubmixEffectPreset); // [0x6694c68] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.AddSourceEffectToPresetChain
	// void AddSourceEffectToPresetChain(class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain, FSourceEffectChainEntry Entry); // [0x66949f4] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.AddMasterSubmixEffect
	// void AddMasterSubmixEffect(class UObject* WorldContextObject, class USoundEffectSubmixPreset* SubmixEffectPreset);    // [0x6694844] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/AudioMixer.SynthSound
/// Size: 0x0020 (0x000470 - 0x000490)
class USynthSound : public USoundWaveProcedural
{ 
public:
	SDK_UNDEFINED(8,1741) /* TWeakObjectPtr<USynthComponent*> */ __um(OwningSynthComponent);                       // 0x0470   (0x0008)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x0478   (0x0018)  MISSED
};

/// Class /Script/AudioMixer.SynthComponent
/// Size: 0x0660 (0x000220 - 0x000880)
class USynthComponent : public USceneComponent
{ 
public:
	bool                                               bAutoDestroy : 1;                                           // 0x0220:0 (0x0001)  
	bool                                               bStopWhenOwnerDestroyed : 1;                                // 0x0220:1 (0x0001)  
	bool                                               bAllowSpatialization : 1;                                   // 0x0220:2 (0x0001)  
	bool                                               bOverrideAttenuation : 1;                                   // 0x0220:3 (0x0001)  
	unsigned char                                      UnknownData00_3[0x3];                                       // 0x0221   (0x0003)  MISSED
	bool                                               bEnableBusSends : 1;                                        // 0x0224:0 (0x0001)  
	bool                                               bEnableBaseSubmix : 1;                                      // 0x0224:1 (0x0001)  
	bool                                               bEnableSubmixSends : 1;                                     // 0x0224:2 (0x0001)  
	unsigned char                                      UnknownData01_4[0x3];                                       // 0x0225   (0x0003)  MISSED
	class USoundAttenuation*                           AttenuationSettings;                                        // 0x0228   (0x0008)  
	FSoundAttenuationSettings                          AttenuationOverrides;                                       // 0x0230   (0x03D0)  
	class USoundConcurrency*                           ConcurrencySettings;                                        // 0x0600   (0x0008)  
	SDK_UNDEFINED(80,1742) /* TSet<USoundConcurrency*> */ __um(ConcurrencySet);                                    // 0x0608   (0x0050)  
	FSoundModulationDefaultRoutingSettings             ModulationRouting;                                          // 0x0658   (0x0168)  
	class USoundClass*                                 SoundClass;                                                 // 0x07C0   (0x0008)  
	class USoundEffectSourcePresetChain*               SourceEffectChain;                                          // 0x07C8   (0x0008)  
	class USoundSubmixBase*                            SoundSubmix;                                                // 0x07D0   (0x0008)  
	TArray<FSoundSubmixSendInfo>                       SoundSubmixSends;                                           // 0x07D8   (0x0010)  
	TArray<FSoundSourceBusSendInfo>                    BusSends;                                                   // 0x07E8   (0x0010)  
	TArray<FSoundSourceBusSendInfo>                    PreEffectBusSends;                                          // 0x07F8   (0x0010)  
	bool                                               bIsUISound : 1;                                             // 0x0808:0 (0x0001)  
	bool                                               bIsPreviewSound : 1;                                        // 0x0808:1 (0x0001)  
	unsigned char                                      UnknownData02_4[0x3];                                       // 0x0809   (0x0003)  MISSED
	int32_t                                            EnvelopeFollowerAttackTime;                                 // 0x080C   (0x0004)  
	int32_t                                            EnvelopeFollowerReleaseTime;                                // 0x0810   (0x0004)  
	unsigned char                                      UnknownData03_5[0x4];                                       // 0x0814   (0x0004)  MISSED
	SDK_UNDEFINED(16,1743) /* FMulticastInlineDelegate */ __um(OnAudioEnvelopeValue);                              // 0x0818   (0x0010)  
	unsigned char                                      UnknownData04_5[0x20];                                      // 0x0828   (0x0020)  MISSED
	class USynthSound*                                 Synth;                                                      // 0x0848   (0x0008)  
	class UAudioComponent*                             AudioComponent;                                             // 0x0850   (0x0008)  
	unsigned char                                      UnknownData05_6[0x28];                                      // 0x0858   (0x0028)  MISSED


	/// Functions
	// Function /Script/AudioMixer.SynthComponent.Stop
	// void Stop();                                                                                                          // [0x3d462c4] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AudioMixer.SynthComponent.Start
	// void Start();                                                                                                         // [0x269e100] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AudioMixer.SynthComponent.SetVolumeMultiplier
	// void SetVolumeMultiplier(float VolumeMultiplier);                                                                     // [0x3687894] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AudioMixer.SynthComponent.SetSubmixSend
	// void SetSubmixSend(class USoundSubmixBase* Submix, float SendLevel);                                                  // [0x66a4d78] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AudioMixer.SynthComponent.SetSourceBusSendPreEffect
	// void SetSourceBusSendPreEffect(class USoundSourceBus* SoundSourceBus, float SourceBusSendLevel);                      // [0x66a4cb0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AudioMixer.SynthComponent.SetSourceBusSendPostEffect
	// void SetSourceBusSendPostEffect(class USoundSourceBus* SoundSourceBus, float SourceBusSendLevel);                     // [0x66a4be8] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AudioMixer.SynthComponent.SetOutputToBusOnly
	// void SetOutputToBusOnly(bool bInOutputToBusOnly);                                                                     // [0x66a4364] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AudioMixer.SynthComponent.SetModulationRouting
	// void SetModulationRouting(TSet<USoundModulatorBase*>& Modulators, EModulationDestination Destination, EModulationRouting RoutingMethod); // [0x66a409c] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioMixer.SynthComponent.SetLowPassFilterFrequency
	// void SetLowPassFilterFrequency(float InLowPassFilterFrequency);                                                       // [0x66a3d98] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AudioMixer.SynthComponent.SetLowPassFilterEnabled
	// void SetLowPassFilterEnabled(bool InLowPassFilterEnabled);                                                            // [0x66a3d14] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AudioMixer.SynthComponent.SetAudioBusSendPreEffect
	// void SetAudioBusSendPreEffect(class UAudioBus* AudioBus, float AudioBusSendLevel);                                    // [0x66a3b74] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AudioMixer.SynthComponent.SetAudioBusSendPostEffect
	// void SetAudioBusSendPostEffect(class UAudioBus* AudioBus, float AudioBusSendLevel);                                   // [0x66a3aac] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AudioMixer.SynthComponent.IsPlaying
	// bool IsPlaying();                                                                                                     // [0x1eb9510] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AudioMixer.SynthComponent.GetModulators
	// TSet<USoundModulatorBase*> GetModulators(EModulationDestination Destination);                                         // [0x66a2cec] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AudioMixer.SynthComponent.FadeOut
	// void FadeOut(float FadeOutDuration, float FadeVolumeLevel, EAudioFaderCurve FadeCurve);                               // [0x34f40f8] Final|RequiredAPI|Native|Public|BlueprintCallable|Const 
	// Function /Script/AudioMixer.SynthComponent.FadeIn
	// void FadeIn(float FadeInDuration, float FadeVolumeLevel, float StartTime, EAudioFaderCurve FadeCurve);                // [0x3716834] Final|RequiredAPI|Native|Public|BlueprintCallable|Const 
	// Function /Script/AudioMixer.SynthComponent.AdjustVolume
	// void AdjustVolume(float AdjustVolumeDuration, float AdjustVolumeLevel, EAudioFaderCurve FadeCurve);                   // [0x66a1e58] Final|RequiredAPI|Native|Public|BlueprintCallable|Const 
};

/// Struct /Script/AudioMixer.SubmixEffectDynamicProcessorFilterSettings
/// Size: 0x000C (0x000000 - 0x00000C)
struct FSubmixEffectDynamicProcessorFilterSettings
{ 
	bool                                               bEnabled : 1;                                               // 0x0000:0 (0x0001)  
	unsigned char                                      UnknownData00_4[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              Cutoff;                                                     // 0x0004   (0x0004)  
	float                                              GainDb;                                                     // 0x0008   (0x0004)  
};

/// Struct /Script/AudioMixer.SubmixEffectDynamicsProcessorSettings
/// Size: 0x0060 (0x000000 - 0x000060)
struct FSubmixEffectDynamicsProcessorSettings
{ 
	ESubmixEffectDynamicsProcessorType                 DynamicsProcessorType;                                      // 0x0000   (0x0001)  
	ESubmixEffectDynamicsPeakMode                      PeakMode;                                                   // 0x0001   (0x0001)  
	ESubmixEffectDynamicsChannelLinkMode               LinkMode;                                                   // 0x0002   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x0003   (0x0001)  MISSED
	float                                              InputGainDb;                                                // 0x0004   (0x0004)  
	float                                              ThresholdDb;                                                // 0x0008   (0x0004)  
	float                                              Ratio;                                                      // 0x000C   (0x0004)  
	float                                              KneeBandwidthDb;                                            // 0x0010   (0x0004)  
	float                                              LookAheadMsec;                                              // 0x0014   (0x0004)  
	float                                              AttackTimeMsec;                                             // 0x0018   (0x0004)  
	float                                              ReleaseTimeMsec;                                            // 0x001C   (0x0004)  
	ESubmixEffectDynamicsKeySource                     KeySource;                                                  // 0x0020   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0021   (0x0007)  MISSED
	class UAudioBus*                                   ExternalAudioBus;                                           // 0x0028   (0x0008)  
	class USoundSubmix*                                ExternalSubmix;                                             // 0x0030   (0x0008)  
	bool                                               bChannelLinked : 1;                                         // 0x0038:0 (0x0001)  
	bool                                               bAnalogMode : 1;                                            // 0x0038:1 (0x0001)  
	bool                                               bBypass : 1;                                                // 0x0038:2 (0x0001)  
	bool                                               bKeyAudition : 1;                                           // 0x0038:3 (0x0001)  
	unsigned char                                      UnknownData02_4[0x3];                                       // 0x0039   (0x0003)  MISSED
	float                                              KeyGainDb;                                                  // 0x003C   (0x0004)  
	float                                              OutputGainDb;                                               // 0x0040   (0x0004)  
	FSubmixEffectDynamicProcessorFilterSettings        KeyHighshelf;                                               // 0x0044   (0x000C)  
	FSubmixEffectDynamicProcessorFilterSettings        KeyLowshelf;                                                // 0x0050   (0x000C)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x005C   (0x0004)  MISSED
};

/// Class /Script/AudioMixer.SubmixEffectDynamicsProcessorPreset
/// Size: 0x00E8 (0x000068 - 0x000150)
class USubmixEffectDynamicsProcessorPreset : public USoundEffectSubmixPreset
{ 
public:
	unsigned char                                      UnknownData00_3[0x88];                                      // 0x0068   (0x0088)  MISSED
	FSubmixEffectDynamicsProcessorSettings             Settings;                                                   // 0x00F0   (0x0060)  


	/// Functions
	// Function /Script/AudioMixer.SubmixEffectDynamicsProcessorPreset.SetSettings
	// void SetSettings(FSubmixEffectDynamicsProcessorSettings& Settings);                                                   // [0x66a46e0] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioMixer.SubmixEffectDynamicsProcessorPreset.SetExternalSubmix
	// void SetExternalSubmix(class USoundSubmix* Submix);                                                                   // [0x66a3c3c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AudioMixer.SubmixEffectDynamicsProcessorPreset.SetAudioBus
	// void SetAudioBus(class UAudioBus* AudioBus);                                                                          // [0x66a39cc] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AudioMixer.SubmixEffectDynamicsProcessorPreset.ResetKey
	// void ResetKey();                                                                                                      // [0x66a367c] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Struct /Script/AudioMixer.SubmixEffectEQBand
/// Size: 0x0010 (0x000000 - 0x000010)
struct FSubmixEffectEQBand
{ 
	float                                              Frequency;                                                  // 0x0000   (0x0004)  
	float                                              Bandwidth;                                                  // 0x0004   (0x0004)  
	float                                              GainDb;                                                     // 0x0008   (0x0004)  
	bool                                               bEnabled : 1;                                               // 0x000C:0 (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x000D   (0x0003)  MISSED
};

/// Struct /Script/AudioMixer.SubmixEffectSubmixEQSettings
/// Size: 0x0010 (0x000000 - 0x000010)
struct FSubmixEffectSubmixEQSettings
{ 
	TArray<FSubmixEffectEQBand>                        EqBands;                                                    // 0x0000   (0x0010)  
};

/// Class /Script/AudioMixer.SubmixEffectSubmixEQPreset
/// Size: 0x0048 (0x000068 - 0x0000B0)
class USubmixEffectSubmixEQPreset : public USoundEffectSubmixPreset
{ 
public:
	unsigned char                                      UnknownData00_3[0x38];                                      // 0x0068   (0x0038)  MISSED
	FSubmixEffectSubmixEQSettings                      Settings;                                                   // 0x00A0   (0x0010)  


	/// Functions
	// Function /Script/AudioMixer.SubmixEffectSubmixEQPreset.SetSettings
	// void SetSettings(FSubmixEffectSubmixEQSettings& InSettings);                                                          // [0x66a48b8] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/AudioMixer.SubmixEffectReverbSettings
/// Size: 0x0040 (0x000000 - 0x000040)
struct FSubmixEffectReverbSettings
{ 
	bool                                               bBypassEarlyReflections;                                    // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              ReflectionsDelay;                                           // 0x0004   (0x0004)  
	float                                              GainHF;                                                     // 0x0008   (0x0004)  
	float                                              ReflectionsGain;                                            // 0x000C   (0x0004)  
	bool                                               bBypassLateReflections;                                     // 0x0010   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0011   (0x0003)  MISSED
	float                                              LateDelay;                                                  // 0x0014   (0x0004)  
	float                                              DecayTime;                                                  // 0x0018   (0x0004)  
	float                                              Density;                                                    // 0x001C   (0x0004)  
	float                                              Diffusion;                                                  // 0x0020   (0x0004)  
	float                                              AirAbsorptionGainHF;                                        // 0x0024   (0x0004)  
	float                                              DecayHFRatio;                                               // 0x0028   (0x0004)  
	float                                              LateGain;                                                   // 0x002C   (0x0004)  
	float                                              Gain;                                                       // 0x0030   (0x0004)  
	float                                              WetLevel;                                                   // 0x0034   (0x0004)  
	float                                              DryLevel;                                                   // 0x0038   (0x0004)  
	bool                                               bBypass;                                                    // 0x003C   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x003D   (0x0003)  MISSED
};

/// Class /Script/AudioMixer.SubmixEffectReverbPreset
/// Size: 0x00A8 (0x000068 - 0x000110)
class USubmixEffectReverbPreset : public USoundEffectSubmixPreset
{ 
public:
	unsigned char                                      UnknownData00_3[0x68];                                      // 0x0068   (0x0068)  MISSED
	FSubmixEffectReverbSettings                        Settings;                                                   // 0x00D0   (0x0040)  


	/// Functions
	// Function /Script/AudioMixer.SubmixEffectReverbPreset.SetSettingsWithReverbEffect
	// void SetSettingsWithReverbEffect(class UReverbEffect* InReverbEffect, float WetLevel, float DryLevel);                // [0x66a4a54] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AudioMixer.SubmixEffectReverbPreset.SetSettings
	// void SetSettings(FSubmixEffectReverbSettings& InSettings);                                                            // [0x66a47d8] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/AudioMixer.AudioGenerator
/// Size: 0x0080 (0x000028 - 0x0000A8)
class UAudioGenerator : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0xA8];                                      // 0x0000   (0x00A8)  MISSED
};

/// Class /Script/AudioMixer.QuartzClockHandle
/// Size: 0x01C8 (0x000028 - 0x0001F0)
class UQuartzClockHandle : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x1F0];                                     // 0x0000   (0x01F0)  MISSED


	/// Functions
	// Function /Script/AudioMixer.QuartzClockHandle.UnsubscribeFromTimeDivision
	// void UnsubscribeFromTimeDivision(class UObject* WorldContextObject, EQuartzCommandQuantization InQuantizationBoundary, class UQuartzClockHandle*& ClockHandle); // [0x66a599c] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioMixer.QuartzClockHandle.UnsubscribeFromAllTimeDivisions
	// void UnsubscribeFromAllTimeDivisions(class UObject* WorldContextObject, class UQuartzClockHandle*& ClockHandle);      // [0x66a58d0] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioMixer.QuartzClockHandle.SubscribeToQuantizationEvent
	// void SubscribeToQuantizationEvent(class UObject* WorldContextObject, EQuartzCommandQuantization InQuantizationBoundary, FDelegateProperty& OnQuantizationEvent, class UQuartzClockHandle*& ClockHandle); // [0x66a575c] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioMixer.QuartzClockHandle.SubscribeToAllQuantizationEvents
	// void SubscribeToAllQuantizationEvents(class UObject* WorldContextObject, FDelegateProperty& OnQuantizationEvent, class UQuartzClockHandle*& ClockHandle); // [0x1f9eb34] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioMixer.QuartzClockHandle.StopClock
	// void StopClock(class UObject* WorldContextObject, bool CancelPendingEvents, class UQuartzClockHandle*& ClockHandle);  // [0x66a564c] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioMixer.QuartzClockHandle.StartOtherClock
	// void StartOtherClock(class UObject* WorldContextObject, FName OtherClockName, FQuartzQuantizationBoundary InQuantizationBoundary, FDelegateProperty& InDelegate); // [0x66a540c] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioMixer.QuartzClockHandle.StartClock
	// void StartClock(class UObject* WorldContextObject, class UQuartzClockHandle*& ClockHandle);                           // [0x66a533c] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioMixer.QuartzClockHandle.SetTicksPerSecond
	// void SetTicksPerSecond(class UObject* WorldContextObject, FQuartzQuantizationBoundary& QuantizationBoundary, FDelegateProperty& Delegate, class UQuartzClockHandle*& ClockHandle, float TicksPerSecond); // [0x66a50bc] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioMixer.QuartzClockHandle.SetThirtySecondNotesPerMinute
	// void SetThirtySecondNotesPerMinute(class UObject* WorldContextObject, FQuartzQuantizationBoundary& QuantizationBoundary, FDelegateProperty& Delegate, class UQuartzClockHandle*& ClockHandle, float ThirtySecondsNotesPerMinute); // [0x66a4e3c] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioMixer.QuartzClockHandle.SetSecondsPerTick
	// void SetSecondsPerTick(class UObject* WorldContextObject, FQuartzQuantizationBoundary& QuantizationBoundary, FDelegateProperty& Delegate, class UQuartzClockHandle*& ClockHandle, float SecondsPerTick); // [0x66a4460] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioMixer.QuartzClockHandle.SetMillisecondsPerTick
	// void SetMillisecondsPerTick(class UObject* WorldContextObject, FQuartzQuantizationBoundary& QuantizationBoundary, FDelegateProperty& Delegate, class UQuartzClockHandle*& ClockHandle, float MillisecondsPerTick); // [0x66a3e1c] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioMixer.QuartzClockHandle.SetBeatsPerMinute
	// void SetBeatsPerMinute(class UObject* WorldContextObject, FQuartzQuantizationBoundary& QuantizationBoundary, FDelegateProperty& Delegate, class UQuartzClockHandle*& ClockHandle, float BeatsPerMinute); // [0x1f9e8c4] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioMixer.QuartzClockHandle.ResumeClock
	// void ResumeClock(class UObject* WorldContextObject, class UQuartzClockHandle*& ClockHandle);                          // [0x1f9f1d0] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioMixer.QuartzClockHandle.ResetTransportQuantized
	// void ResetTransportQuantized(class UObject* WorldContextObject, FQuartzQuantizationBoundary InQuantizationBoundary, FDelegateProperty& InDelegate, class UQuartzClockHandle*& ClockHandle); // [0x66a3774] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioMixer.QuartzClockHandle.ResetTransport
	// void ResetTransport(class UObject* WorldContextObject, FDelegateProperty& InDelegate);                                // [0x66a3690] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioMixer.QuartzClockHandle.PauseClock
	// void PauseClock(class UObject* WorldContextObject, class UQuartzClockHandle*& ClockHandle);                           // [0x66a35b0] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioMixer.QuartzClockHandle.NotifyOnQuantizationBoundary
	// void NotifyOnQuantizationBoundary(class UObject* WorldContextObject, FQuartzQuantizationBoundary InQuantizationBoundary, FDelegateProperty& InDelegate, float InMsOffset); // [0x66a32c8] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioMixer.QuartzClockHandle.IsClockRunning
	// bool IsClockRunning(class UObject* WorldContextObject);                                                               // [0x66a3154] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AudioMixer.QuartzClockHandle.GetTicksPerSecond
	// float GetTicksPerSecond(class UObject* WorldContextObject);                                                           // [0x66a30c8] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AudioMixer.QuartzClockHandle.GetThirtySecondNotesPerMinute
	// float GetThirtySecondNotesPerMinute(class UObject* WorldContextObject);                                               // [0x66a303c] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AudioMixer.QuartzClockHandle.GetSecondsPerTick
	// float GetSecondsPerTick(class UObject* WorldContextObject);                                                           // [0x66a2fb0] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AudioMixer.QuartzClockHandle.GetMillisecondsPerTick
	// float GetMillisecondsPerTick(class UObject* WorldContextObject);                                                      // [0x66a2c60] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AudioMixer.QuartzClockHandle.GetEstimatedRunTime
	// float GetEstimatedRunTime(class UObject* WorldContextObject);                                                         // [0x66a29ec] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AudioMixer.QuartzClockHandle.GetDurationOfQuantizationTypeInSeconds
	// float GetDurationOfQuantizationTypeInSeconds(class UObject* WorldContextObject, EQuartzCommandQuantization& QuantizationType, float Multiplier); // [0x66a2574] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioMixer.QuartzClockHandle.GetCurrentTimestamp
	// FQuartzTransportTimeStamp GetCurrentTimestamp(class UObject* WorldContextObject);                                     // [0x66a24dc] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AudioMixer.QuartzClockHandle.GetBeatsPerMinute
	// float GetBeatsPerMinute(class UObject* WorldContextObject);                                                           // [0x66a234c] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AudioMixer.QuartzClockHandle.GetBeatProgressPercent
	// float GetBeatProgressPercent(EQuartzCommandQuantization QuantizationBoundary, float PhaseOffset, float MsOffset);     // [0x66a2250] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/AudioMixer.QuartzSubsystem
/// Size: 0x0028 (0x000040 - 0x000068)
class UQuartzSubsystem : public UTickableWorldSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x28];                                      // 0x0040   (0x0028)  MISSED


	/// Functions
	// Function /Script/AudioMixer.QuartzSubsystem.SetQuartzSubsystemTickableWhenPaused
	// void SetQuartzSubsystemTickableWhenPaused(bool bInTickableWhenPaused);                                                // [0x66a43e4] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AudioMixer.QuartzSubsystem.IsQuartzEnabled
	// bool IsQuartzEnabled();                                                                                               // [0x331049c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AudioMixer.QuartzSubsystem.IsClockRunning
	// bool IsClockRunning(class UObject* WorldContextObject, FName ClockName);                                              // [0x66a31e0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AudioMixer.QuartzSubsystem.GetRoundTripMinLatency
	// float GetRoundTripMinLatency(class UObject* WorldContextObject);                                                      // [0x66a2f08] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AudioMixer.QuartzSubsystem.GetRoundTripMaxLatency
	// float GetRoundTripMaxLatency(class UObject* WorldContextObject);                                                      // [0x66a2e78] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AudioMixer.QuartzSubsystem.GetRoundTripAverageLatency
	// float GetRoundTripAverageLatency(class UObject* WorldContextObject);                                                  // [0x66a2de8] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AudioMixer.QuartzSubsystem.GetHandleForClock
	// class UQuartzClockHandle* GetHandleForClock(class UObject* WorldContextObject, FName ClockName);                      // [0x66a2b9c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AudioMixer.QuartzSubsystem.GetGameThreadToAudioRenderThreadMinLatency
	// float GetGameThreadToAudioRenderThreadMinLatency(class UObject* WorldContextObject);                                  // [0x66a2b0c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AudioMixer.QuartzSubsystem.GetGameThreadToAudioRenderThreadMaxLatency
	// float GetGameThreadToAudioRenderThreadMaxLatency(class UObject* WorldContextObject);                                  // [0x66a2b0c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AudioMixer.QuartzSubsystem.GetGameThreadToAudioRenderThreadAverageLatency
	// float GetGameThreadToAudioRenderThreadAverageLatency(class UObject* WorldContextObject);                              // [0x66a2a7c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AudioMixer.QuartzSubsystem.GetEstimatedClockRunTime
	// float GetEstimatedClockRunTime(class UObject* WorldContextObject, FName& InClockName);                                // [0x66a2920] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioMixer.QuartzSubsystem.GetDurationOfQuantizationTypeInSeconds
	// float GetDurationOfQuantizationTypeInSeconds(class UObject* WorldContextObject, FName ClockName, EQuartzCommandQuantization& QuantizationType, float Multiplier); // [0x66a272c] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioMixer.QuartzSubsystem.GetCurrentClockTimestamp
	// FQuartzTransportTimeStamp GetCurrentClockTimestamp(class UObject* WorldContextObject, FName& InClockName);            // [0x66a23d8] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioMixer.QuartzSubsystem.GetAudioRenderThreadToGameThreadMinLatency
	// float GetAudioRenderThreadToGameThreadMinLatency();                                                                   // [0x66a2224] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AudioMixer.QuartzSubsystem.GetAudioRenderThreadToGameThreadMaxLatency
	// float GetAudioRenderThreadToGameThreadMaxLatency();                                                                   // [0x66a21fc] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AudioMixer.QuartzSubsystem.GetAudioRenderThreadToGameThreadAverageLatency
	// float GetAudioRenderThreadToGameThreadAverageLatency();                                                               // [0x66a21d0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AudioMixer.QuartzSubsystem.DoesClockExist
	// bool DoesClockExist(class UObject* WorldContextObject, FName ClockName);                                              // [0x66a20e8] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AudioMixer.QuartzSubsystem.DeleteClockByName
	// void DeleteClockByName(class UObject* WorldContextObject, FName ClockName);                                           // [0x66a2024] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AudioMixer.QuartzSubsystem.DeleteClockByHandle
	// void DeleteClockByHandle(class UObject* WorldContextObject, class UQuartzClockHandle*& InClockHandle);                // [0x66a1f54] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioMixer.QuartzSubsystem.CreateNewClock
	// class UQuartzClockHandle* CreateNewClock(class UObject* WorldContextObject, FName ClockName, FQuartzClockSettings InSettings, bool bOverrideSettingsIfClockExists, bool bUseAudioEngineClockManager); // [0x3eb9ef0] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Struct /Script/AudioMixer.AudioOutputDeviceInfo
/// Size: 0x0048 (0x000000 - 0x000048)
struct FAudioOutputDeviceInfo
{ 
	SDK_UNDEFINED(16,1744) /* FString */               __um(Name);                                                 // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,1745) /* FString */               __um(DeviceID);                                             // 0x0010   (0x0010)  
	int32_t                                            NumChannels;                                                // 0x0020   (0x0004)  
	int32_t                                            SampleRate;                                                 // 0x0024   (0x0004)  
	EAudioMixerStreamDataFormatType                    Format;                                                     // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0029   (0x0007)  MISSED
	TArray<EAudioMixerChannelType>                     OutputChannelArray;                                         // 0x0030   (0x0010)  
	bool                                               bIsSystemDefault : 1;                                       // 0x0040:0 (0x0001)  
	bool                                               bIsCurrentDevice : 1;                                       // 0x0040:1 (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0041   (0x0007)  MISSED
};

/// Struct /Script/AudioMixer.SwapAudioOutputResult
/// Size: 0x0028 (0x000000 - 0x000028)
struct FSwapAudioOutputResult
{ 
	SDK_UNDEFINED(16,1746) /* FString */               __um(CurrentDeviceId);                                      // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,1747) /* FString */               __um(RequestedDeviceId);                                    // 0x0010   (0x0010)  
	ESwapAudioOutputDeviceResultState                  Result;                                                     // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0021   (0x0007)  MISSED
};

