
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: AudioGameplay
/// dependency: AudioGameplayVolume
/// dependency: AudioModulation
/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine
/// dependency: GameFeatures

/// Enum /Script/AudioWorldization.ETraceDirection
/// Size: 0x07
enum class ETraceDirection : uint8_t
{
	ETraceDirection__N                                                               = 0,
	ETraceDirection__E                                                               = 1,
	ETraceDirection__S                                                               = 2,
	ETraceDirection__W                                                               = 3,
	ETraceDirection__Up                                                              = 4,
	ETraceDirection__None                                                            = 5,
	ETraceDirection__ETraceDirection_MAX                                             = 6
};

/// Class /Script/AudioWorldization.AudioWorldizationReflectionProbe
/// Size: 0x0058 (0x000290 - 0x0002E8)
class AAudioWorldizationReflectionProbe : public AActor
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0290   (0x0008)  MISSED
	class USubmixSendVolumeComponent*                  SubmixSends;                                                // 0x0298   (0x0008)  
	class USubmixOverrideVolumeComponent*              SubmixEffects;                                              // 0x02A0   (0x0008)  
	class UAudioGameplayVolumeComponent*               AGVComponent;                                               // 0x02A8   (0x0008)  
	unsigned char                                      UnknownData01_6[0x38];                                      // 0x02B0   (0x0038)  MISSED
};

/// Struct /Script/AudioWorldization.AudioWorldizationSend
/// Size: 0x0068 (0x000000 - 0x000068)
struct FAudioWorldizationSend
{ 
	class USoundSubmix*                                Submix;                                                     // 0x0000   (0x0008)  
	SDK_UNDEFINED(80,1752) /* TSet<USoundModulatorBase*> */ __um(VolumeModulators);                                // 0x0008   (0x0050)  
	TArray<class USoundEffectSubmixPreset*>            EffectChain;                                                // 0x0058   (0x0010)  
};

/// Class /Script/AudioWorldization.AudioWorldizationSendsVolumeComponent
/// Size: 0x0018 (0x0000B0 - 0x0000C8)
class UAudioWorldizationSendsVolumeComponent : public UAudioGameplayVolumeComponentBase
{ 
public:
	FName                                              Identifier;                                                 // 0x00B0   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00B4   (0x0004)  MISSED
	TArray<FAudioWorldizationSend>                     Sends;                                                      // 0x00B8   (0x0010)  
};

/// Struct /Script/AudioWorldization.AudioWorldizationSettings
/// Size: 0x0078 (0x000000 - 0x000078)
struct FAudioWorldizationSettings
{ 
	FName                                              Identifier;                                                 // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	TArray<FAudioWorldizationSend>                     Sends;                                                      // 0x0008   (0x0010)  
	float                                              EnclosureSmoothSpeed;                                       // 0x0018   (0x0004)  
	float                                              WallDistanceSmoothSpeed;                                    // 0x001C   (0x0004)  
	float                                              TraceRadius;                                                // 0x0020   (0x0004)  
	float                                              CrossfadeTime;                                              // 0x0024   (0x0004)  
	int32_t                                            TracePoints;                                                // 0x0028   (0x0004)  
	int32_t                                            TracesPerFrame;                                             // 0x002C   (0x0004)  
	float                                              SideQuadrantDegrees;                                        // 0x0030   (0x0004)  
	float                                              UpQuadrantDegrees;                                          // 0x0034   (0x0004)  
	FVector                                            TraceOrigin;                                                // 0x0038   (0x0018)  
	SDK_UNDEFINED(1,1753) /* TEnumAsByte<ECollisionChannel> */ __um(TraceChannel);                                 // 0x0050   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0051   (0x0007)  MISSED
	SDK_UNDEFINED(16,1754) /* TArray<TEnumAsByte<ECollisionChannel>> */ __um(ResponseChannels);                    // 0x0058   (0x0010)  
	class UClass*                                      TracePolicy;                                                // 0x0068   (0x0008)  
	class UClass*                                      TraceDirectionPolicy;                                       // 0x0070   (0x0008)  
};

/// Class /Script/AudioWorldization.AudioWorldizationData
/// Size: 0x0078 (0x000030 - 0x0000A8)
class UAudioWorldizationData : public UDataAsset
{ 
public:
	FAudioWorldizationSettings                         Settings;                                                   // 0x0030   (0x0078)  
};

/// Struct /Script/AudioWorldization.AudioWorldizationQuadrantSettings
/// Size: 0x0010 (0x000000 - 0x000010)
struct FAudioWorldizationQuadrantSettings
{ 
	class USoundControlBus*                            WallDistanceBus;                                            // 0x0000   (0x0008)  
	class USoundControlBus*                            EnclosureBus;                                               // 0x0008   (0x0008)  
};

/// Struct /Script/AudioWorldization.AudioWorldizationGlobalSettings
/// Size: 0x0030 (0x000000 - 0x000030)
struct FAudioWorldizationGlobalSettings
{ 
	float                                              EffectCrossfadeTime;                                        // 0x0000   (0x0004)  
	FName                                              IgnoreTraceActorTag;                                        // 0x0004   (0x0004)  
	class USoundControlBus*                            EnclosureBus;                                               // 0x0008   (0x0008)  
	class USoundControlBus*                            WallDistanceBus;                                            // 0x0010   (0x0008)  
	class USoundControlBus*                            ListenerAzimuthBus;                                         // 0x0018   (0x0008)  
	TArray<FAudioWorldizationQuadrantSettings>         Quadrants;                                                  // 0x0020   (0x0010)  
};

/// Class /Script/AudioWorldization.AudioWorldizationDefaultSettings
/// Size: 0x00B8 (0x000030 - 0x0000E8)
class UAudioWorldizationDefaultSettings : public UDeveloperSettings
{ 
public:
	FAudioWorldizationGlobalSettings                   GlobalSettings;                                             // 0x0030   (0x0030)  
	FAudioWorldizationSettings                         DefaultSettings;                                            // 0x0060   (0x0078)  
	TArray<FSoftObjectPath>                            ModulationParameters;                                       // 0x00D8   (0x0010)  
};

/// Class /Script/AudioWorldization.AudioWorldizationSubsystem
/// Size: 0x0190 (0x000040 - 0x0001D0)
class UAudioWorldizationSubsystem : public UTickableWorldSubsystem
{ 
public:
	class USoundControlBus*                            EnclosureBus;                                               // 0x0040   (0x0008)  
	class USoundControlBus*                            WallDistanceBus;                                            // 0x0048   (0x0008)  
	class USoundControlBus*                            ListenerAzimuthBus;                                         // 0x0050   (0x0008)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0058   (0x0008)  MISSED
	FAudioWorldizationSettings                         CurrentSettings;                                            // 0x0060   (0x0078)  
	class AAudioWorldizationReflectionProbe*           VolumeActor;                                                // 0x00D8   (0x0008)  
	class UAudioWorldizationTracePolicyBase*           TracePolicy;                                                // 0x00E0   (0x0008)  
	class UAudioWorldizationTraceDirectionPolicyBase*  TraceDirectionPolicy;                                       // 0x00E8   (0x0008)  
	unsigned char                                      UnknownData01_5[0xB0];                                      // 0x00F0   (0x00B0)  MISSED
	TArray<FAudioWorldizationSettings>                 SettingsStack;                                              // 0x01A0   (0x0010)  
	TArray<class USoundControlBus*>                    QuadrantEnclosureBuses;                                     // 0x01B0   (0x0010)  
	TArray<class USoundControlBus*>                    QuadrantWallDistanceBuses;                                  // 0x01C0   (0x0010)  


	/// Functions
	// Function /Script/AudioWorldization.AudioWorldizationSubsystem.SetWorldizationSettings
	// void SetWorldizationSettings(FAudioWorldizationSettings& InSettings);                                                 // [0x811c424] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioWorldization.AudioWorldizationSubsystem.SetEnabled
	// void SetEnabled(bool bNewEnabled);                                                                                    // [0x811c3a4] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWorldization.AudioWorldizationSubsystem.SetDefaultSettings
	// void SetDefaultSettings();                                                                                            // [0x811c390] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWorldization.AudioWorldizationSubsystem.RemoveWorldizationSettings
	// void RemoveWorldizationSettings(FName InIdentifier);                                                                  // [0x811c310] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWorldization.AudioWorldizationSubsystem.RemoveEffectSendOverride
	// void RemoveEffectSendOverride(FName InIdentifier);                                                                    // [0x811c310] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWorldization.AudioWorldizationSubsystem.OverrideEffectSends
	// void OverrideEffectSends(FName InIdentifier, TArray<FAudioWorldizationSend>& InSends);                                // [0x811c234] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioWorldization.AudioWorldizationSubsystem.GetWallDistanceRatio
	// float GetWallDistanceRatio();                                                                                         // [0x811c20c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AudioWorldization.AudioWorldizationSubsystem.GetEnclosureFactor
	// float GetEnclosureFactor();                                                                                           // [0x811c1e4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AudioWorldization.AudioWorldizationTraceDirectionPolicyBase
/// Size: 0x0008 (0x000028 - 0x000030)
class UAudioWorldizationTraceDirectionPolicyBase : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x0000   (0x0030)  MISSED
};

/// Class /Script/AudioWorldization.AudioWorldizationTraceDirectionPolicyDefault
/// Size: 0x0000 (0x000030 - 0x000030)
class UAudioWorldizationTraceDirectionPolicyDefault : public UAudioWorldizationTraceDirectionPolicyBase
{ 
public:
};

/// Class /Script/AudioWorldization.AudioWorldizationTracePolicyBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UAudioWorldizationTracePolicyBase : public UObject
{ 
public:
};

/// Class /Script/AudioWorldization.AudioWorldizationTracePolicyDefault
/// Size: 0x0000 (0x000028 - 0x000028)
class UAudioWorldizationTracePolicyDefault : public UAudioWorldizationTracePolicyBase
{ 
public:
};

/// Class /Script/AudioWorldization.AudioWorldizationVolumeComponent
/// Size: 0x0008 (0x0000B0 - 0x0000B8)
class UAudioWorldizationVolumeComponent : public UAudioGameplayVolumeComponentBase
{ 
public:
	class UAudioWorldizationData*                      Settings;                                                   // 0x00B0   (0x0008)  
};

/// Class /Script/AudioWorldization.GameFeatureAction_SetAudioWorldizationEffectSends
/// Size: 0x0068 (0x000028 - 0x000090)
class UGameFeatureAction_SetAudioWorldizationEffectSends : public UGameFeatureAction
{ 
public:
	FName                                              Identifier;                                                 // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x002C   (0x0004)  MISSED
	TArray<FAudioWorldizationSend>                     Sends;                                                      // 0x0030   (0x0010)  
	unsigned char                                      UnknownData01_6[0x50];                                      // 0x0040   (0x0050)  MISSED
};

/// Class /Script/AudioWorldization.GameFeatureAction_SetAudioWorldizationSettings
/// Size: 0x00C8 (0x000028 - 0x0000F0)
class UGameFeatureAction_SetAudioWorldizationSettings : public UGameFeatureAction
{ 
public:
	FAudioWorldizationSettings                         Settings;                                                   // 0x0028   (0x0078)  
	unsigned char                                      UnknownData00_6[0x50];                                      // 0x00A0   (0x0050)  MISSED
};

/// Struct /Script/AudioWorldization.AudioSphereTraceResult
/// Size: 0x000C (0x000000 - 0x00000C)
struct FAudioSphereTraceResult
{ 
	bool                                               bBlocking;                                                  // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              Distance;                                                   // 0x0004   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0008   (0x0004)  MISSED
};

