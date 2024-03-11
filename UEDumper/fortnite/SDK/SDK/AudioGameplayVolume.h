
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: AudioGameplay
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/AudioGameplayVolume.AudioGameplayVolumeMutator
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UAudioGameplayVolumeMutator : public UAudioGameplayComponent
{ 
public:
	int32_t                                            Priority;                                                   // 0x00A8   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00AC   (0x0004)  MISSED


	/// Functions
	// Function /Script/AudioGameplayVolume.AudioGameplayVolumeMutator.SetPriority
	// void SetPriority(int32_t InPriority);                                                                                 // [0x7ea2b74] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/AudioGameplayVolume.AttenuationVolumeComponent
/// Size: 0x0010 (0x0000B0 - 0x0000C0)
class UAttenuationVolumeComponent : public UAudioGameplayVolumeMutator
{ 
public:
	float                                              ExteriorVolume;                                             // 0x00B0   (0x0004)  
	float                                              ExteriorTime;                                               // 0x00B4   (0x0004)  
	float                                              InteriorVolume;                                             // 0x00B8   (0x0004)  
	float                                              InteriorTime;                                               // 0x00BC   (0x0004)  


	/// Functions
	// Function /Script/AudioGameplayVolume.AttenuationVolumeComponent.SetInteriorVolume
	// void SetInteriorVolume(float Volume, float InterpolateTime);                                                          // [0x7ea2aa0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioGameplayVolume.AttenuationVolumeComponent.SetExteriorVolume
	// void SetExteriorVolume(float Volume, float InterpolateTime);                                                          // [0x7ea29cc] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/AudioGameplayVolume.AudioGameplayVolume
/// Size: 0x0030 (0x0002C8 - 0x0002F8)
class AAudioGameplayVolume : public AVolume
{ 
public:
	class UAudioGameplayVolumeComponent*               AGVComponent;                                               // 0x02C8   (0x0008)  
	bool                                               bEnabled;                                                   // 0x02D0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x02D1   (0x0007)  MISSED
	SDK_UNDEFINED(16,1730) /* FMulticastInlineDelegate */ __um(OnListenerEnterEvent);                              // 0x02D8   (0x0010)  
	SDK_UNDEFINED(16,1731) /* FMulticastInlineDelegate */ __um(OnListenerExitEvent);                               // 0x02E8   (0x0010)  


	/// Functions
	// Function /Script/AudioGameplayVolume.AudioGameplayVolume.SetEnabled
	// void SetEnabled(bool bEnable);                                                                                        // [0x7ea2934] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioGameplayVolume.AudioGameplayVolume.OnRep_bEnabled
	// void OnRep_bEnabled();                                                                                                // [0x1c2b230] Native|Protected     
	// Function /Script/AudioGameplayVolume.AudioGameplayVolume.OnListenerExit
	// void OnListenerExit();                                                                                                // [0x33e3b10] Native|Event|Public|BlueprintEvent 
	// Function /Script/AudioGameplayVolume.AudioGameplayVolume.OnListenerEnter
	// void OnListenerEnter();                                                                                               // [0x342c5dc] Native|Event|Public|BlueprintEvent 
};

/// Class /Script/AudioGameplayVolume.AudioGameplayVolumeComponent
/// Size: 0x0028 (0x0000A8 - 0x0000D0)
class UAudioGameplayVolumeComponent : public UAudioGameplayComponent
{ 
public:
	SDK_UNDEFINED(16,1732) /* FMulticastInlineDelegate */ __um(OnProxyEnter);                                      // 0x00A8   (0x0010)  
	SDK_UNDEFINED(16,1733) /* FMulticastInlineDelegate */ __um(OnProxyExit);                                       // 0x00B8   (0x0010)  
	class UAudioGameplayVolumeProxy*                   Proxy;                                                      // 0x00C8   (0x0008)  
};

/// Class /Script/AudioGameplayVolume.AudioGameplayVolumeComponentBase
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UAudioGameplayVolumeComponentBase : public UAudioGameplayComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00A8   (0x0008)  MISSED
};

/// Class /Script/AudioGameplayVolume.AudioGameplayVolumeProxy
/// Size: 0x0020 (0x000028 - 0x000048)
class UAudioGameplayVolumeProxy : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x48];                                      // 0x0000   (0x0048)  MISSED
};

/// Class /Script/AudioGameplayVolume.AGVPrimitiveComponentProxy
/// Size: 0x0008 (0x000048 - 0x000050)
class UAGVPrimitiveComponentProxy : public UAudioGameplayVolumeProxy
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0048   (0x0008)  MISSED
};

/// Class /Script/AudioGameplayVolume.AGVConditionProxy
/// Size: 0x0008 (0x000048 - 0x000050)
class UAGVConditionProxy : public UAudioGameplayVolumeProxy
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0048   (0x0008)  MISSED
};

/// Class /Script/AudioGameplayVolume.AudioGameplayVolumeSubsystem
/// Size: 0x0138 (0x000030 - 0x000168)
class UAudioGameplayVolumeSubsystem : public UAudioEngineSubsystem
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0030   (0x0008)  MISSED
	TArray<class UAudioGameplayVolumeProxy*>           TransientProxyList;                                         // 0x0038   (0x0010)  
	SDK_UNDEFINED(80,1734) /* TMap<uint32_t, UAudioGameplayVolumeComponent*> */ __um(AGVComponents);               // 0x0048   (0x0050)  
	unsigned char                                      UnknownData01_6[0xD0];                                      // 0x0098   (0x00D0)  MISSED
};

/// Class /Script/AudioGameplayVolume.FilterVolumeComponent
/// Size: 0x0010 (0x0000B0 - 0x0000C0)
class UFilterVolumeComponent : public UAudioGameplayVolumeMutator
{ 
public:
	float                                              ExteriorLPF;                                                // 0x00B0   (0x0004)  
	float                                              ExteriorLPFTime;                                            // 0x00B4   (0x0004)  
	float                                              InteriorLPF;                                                // 0x00B8   (0x0004)  
	float                                              InteriorLPFTime;                                            // 0x00BC   (0x0004)  


	/// Functions
	// Function /Script/AudioGameplayVolume.FilterVolumeComponent.SetInteriorLPF
	// void SetInteriorLPF(float Volume, float InterpolateTime);                                                             // [0x7ea2aa0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioGameplayVolume.FilterVolumeComponent.SetExteriorLPF
	// void SetExteriorLPF(float Volume, float InterpolateTime);                                                             // [0x7ea29cc] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/AudioGameplayVolume.ReverbVolumeComponent
/// Size: 0x0020 (0x0000B0 - 0x0000D0)
class UReverbVolumeComponent : public UAudioGameplayVolumeMutator
{ 
public:
	FReverbSettings                                    ReverbSettings;                                             // 0x00B0   (0x0020)  


	/// Functions
	// Function /Script/AudioGameplayVolume.ReverbVolumeComponent.SetReverbSettings
	// void SetReverbSettings(FReverbSettings& NewReverbSettings);                                                           // [0x7ea2c00] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/AudioGameplayVolume.SubmixOverrideVolumeComponent
/// Size: 0x0010 (0x0000B0 - 0x0000C0)
class USubmixOverrideVolumeComponent : public UAudioGameplayVolumeMutator
{ 
public:
	TArray<FAudioVolumeSubmixOverrideSettings>         SubmixOverrideSettings;                                     // 0x00B0   (0x0010)  


	/// Functions
	// Function /Script/AudioGameplayVolume.SubmixOverrideVolumeComponent.SetSubmixOverrideSettings
	// void SetSubmixOverrideSettings(TArray<FAudioVolumeSubmixOverrideSettings>& NewSubmixOverrideSettings);                // [0x7ea2cac] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/AudioGameplayVolume.SubmixSendVolumeComponent
/// Size: 0x0010 (0x0000B0 - 0x0000C0)
class USubmixSendVolumeComponent : public UAudioGameplayVolumeMutator
{ 
public:
	TArray<FAudioVolumeSubmixSendSettings>             SubmixSendSettings;                                         // 0x00B0   (0x0010)  


	/// Functions
	// Function /Script/AudioGameplayVolume.SubmixSendVolumeComponent.SetSubmixSendSettings
	// void SetSubmixSendSettings(TArray<FAudioVolumeSubmixSendSettings>& NewSubmixSendSettings);                            // [0x7ea2d70] Final|Native|Public|HasOutParms|BlueprintCallable 
};

