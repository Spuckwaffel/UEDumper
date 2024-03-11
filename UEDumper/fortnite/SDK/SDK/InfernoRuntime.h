
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Curie
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: Niagara
/// dependency: NiagaraCore

/// Class /Script/InfernoRuntime.FortCurieElementAttachHandlerVoxelFire
/// Size: 0x0000 (0x000090 - 0x000090)
class UFortCurieElementAttachHandlerVoxelFire : public UFortCurieElementAttachHandlerFire
{ 
public:
};

/// Class /Script/InfernoRuntime.FortCurieElementAttachConditionHandlerVoxelFire
/// Size: 0x0000 (0x000040 - 0x000040)
class UFortCurieElementAttachConditionHandlerVoxelFire : public UFortCurieElementAttachConditionHandlerFire
{ 
public:
};

/// Struct /Script/InfernoRuntime.FortCurieVoxelPropagationProperties
/// Size: 0x0010 (0x000008 - 0x000018)
struct FFortCurieVoxelPropagationProperties : FTableRowBase
{ 
	float                                              PropagationZDirectionDownMultiplier;                        // 0x0008   (0x0004)  
	float                                              PropagationZDirectionUpMultiplier;                          // 0x000C   (0x0004)  
	float                                              PropagationBaseDelay;                                       // 0x0010   (0x0004)  
	float                                              PropagationBaseSpeed;                                       // 0x0014   (0x0004)  
};

/// Class /Script/InfernoRuntime.FortCurieVoxelFirePropagationManagerConfig
/// Size: 0x0048 (0x000130 - 0x000178)
class UFortCurieVoxelFirePropagationManagerConfig : public UFortCurieFirePropagationManagerConfig
{ 
public:
	FFortCurieVoxelPropagationProperties               DefaultPropagationProperties;                               // 0x0130   (0x0018)  
	FName                                              PropagationPropertiesRegistry;                              // 0x0148   (0x0004)  
	float                                              PropagationNoiseMinimum;                                    // 0x014C   (0x0004)  
	float                                              PropagationNoiseMaximum;                                    // 0x0150   (0x0004)  
	float                                              PropagationSpeedNoiseRange;                                 // 0x0154   (0x0004)  
	float                                              PropagationMinimumSpeed;                                    // 0x0158   (0x0004)  
	float                                              PropagationMinimumTime;                                     // 0x015C   (0x0004)  
	float                                              VoxelOverlapExpansionFactor;                                // 0x0160   (0x0004)  
	bool                                               bAllowPerMaterialPropagationProperties;                     // 0x0164   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0165   (0x0003)  MISSED
	float                                              ActorPropagationInteractMagnitude;                          // 0x0168   (0x0004)  
	float                                              MovedActorGrassIgnitionDelay;                               // 0x016C   (0x0004)  
	float                                              MovedActorGrassGridCellZExpansion;                          // 0x0170   (0x0004)  
	float                                              MovedActorGroundTraceZRange;                                // 0x0174   (0x0004)  
};

/// Struct /Script/InfernoRuntime.FortCurieVoxelFirePropagationManagerTickFunction
/// Size: 0x0008 (0x000028 - 0x000030)
struct FFortCurieVoxelFirePropagationManagerTickFunction : FTickFunction
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0028   (0x0008)  MISSED
};

/// Class /Script/InfernoRuntime.FortCurieVoxelFirePropagationManager
/// Size: 0x0650 (0x000030 - 0x000680)
class UFortCurieVoxelFirePropagationManager : public UFortCurieManagerComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x10];                                      // 0x0030   (0x0010)  MISSED
	FFortCurieVoxelFirePropagationManagerTickFunction  PrimaryTickFunction;                                        // 0x0040   (0x0030)  
	unsigned char                                      UnknownData01_5[0x5F8];                                     // 0x0070   (0x05F8)  MISSED
	class UFortCurieVoxelFirePropagationManagerConfig* InternalManagerConfig;                                      // 0x0668   (0x0008)  
	unsigned char                                      UnknownData02_6[0x10];                                      // 0x0670   (0x0010)  MISSED
};

/// Class /Script/InfernoRuntime.FortCurieVoxelFireDebugParticleDataInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortCurieVoxelFireDebugParticleDataInterface : public UInterface
{ 
public:
};

/// Class /Script/InfernoRuntime.FortCurieVoxelFireDebugNiagaraDataInterface
/// Size: 0x0000 (0x000038 - 0x000038)
class UFortCurieVoxelFireDebugNiagaraDataInterface : public UNiagaraDataInterface
{ 
public:
};

/// Class /Script/InfernoRuntime.FortCurieVoxelFireNativeFXHandlerConfig
/// Size: 0x0058 (0x000168 - 0x0001C0)
class UFortCurieVoxelFireNativeFXHandlerConfig : public UFortCurieNativeFXHandlerConfig
{ 
public:
	class UNiagaraSystem*                              WorldFireSystem;                                            // 0x0168   (0x0008)  
	class UNiagaraSystem*                              WorldFireDebugSystem;                                       // 0x0170   (0x0008)  
	class UTextureRenderTarget2D*                      LandscapeCharRenderTarget;                                  // 0x0178   (0x0008)  
	class UMaterialParameterCollection*                MaterialParameterCollection;                                // 0x0180   (0x0008)  
	FName                                              PlayerWorldFireSystemLightScalabilityParamName;             // 0x0188   (0x0004)  
	FName                                              LandscapeBiasParameterName;                                 // 0x018C   (0x0004)  
	FName                                              LandscapeDivisorParameterName;                              // 0x0190   (0x0004)  
	float                                              LandscapeFireRandomLocationRadius;                          // 0x0194   (0x0004)  
	float                                              MinLandscapeFireSphericalBounds;                            // 0x0198   (0x0004)  
	float                                              MaxLandscapeFireSphericalBounds;                            // 0x019C   (0x0004)  
	float                                              LandscapeCharInterpSpeed;                                   // 0x01A0   (0x0004)  
	float                                              LandscapeIgnitionParticleMovementSpeed;                     // 0x01A4   (0x0004)  
	bool                                               bUseVoxelFireAmbientAudio;                                  // 0x01A8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x01A9   (0x0007)  MISSED
	class USoundBase*                                  StructureFireAmbientSound;                                  // 0x01B0   (0x0008)  
	class USoundBase*                                  GrassFireAmbientSound;                                      // 0x01B8   (0x0008)  
};

/// Struct /Script/InfernoRuntime.FortCurieVoxelFireParticleGrassData
/// Size: 0x0058 (0x000000 - 0x000058)
struct FFortCurieVoxelFireParticleGrassData
{ 
	unsigned char                                      UnknownData00_2[0x58];                                      // 0x0000   (0x0058)  MISSED
};

/// Class /Script/InfernoRuntime.FortCurieVoxelFireNativeFXHandler
/// Size: 0x0328 (0x000040 - 0x000368)
class UFortCurieVoxelFireNativeFXHandler : public UFortCurieNativeFXHandler
{ 
public:
	unsigned char                                      UnknownData00_3[0x30];                                      // 0x0040   (0x0030)  MISSED
	SDK_UNDEFINED(80,14218) /* TSet<UFortCurieComponent*> */ __um(PendingUpdateComponents);                        // 0x0070   (0x0050)  
	SDK_UNDEFINED(80,14219) /* TSet<UFortCurieComponent*> */ __um(PendingRemoveComponents);                        // 0x00C0   (0x0050)  
	unsigned char                                      UnknownData01_5[0x50];                                      // 0x0110   (0x0050)  MISSED
	TArray<class UFortCurieWorldNiagaraComponent*>     WorldFireNiagaraSystems;                                    // 0x0160   (0x0010)  
	TArray<class UFortCurieWorldNiagaraComponent*>     WorldFireDebugNiagaraSystems;                               // 0x0170   (0x0010)  
	float                                              WorldSystemFireParticleSignificanceRequirement;             // 0x0180   (0x0004)  
	float                                              WorldSystemIgnitionParticleSignificanceRequirement;         // 0x0184   (0x0004)  
	float                                              AudioGrassFireSignificanceRequirement;                      // 0x0188   (0x0004)  
	float                                              AudioActorFireSignificanceRequirement;                      // 0x018C   (0x0004)  
	FRandomStream                                      RandomStream;                                               // 0x0190   (0x0008)  
	FBox                                               GrassFireBounds;                                            // 0x0198   (0x0038)  
	float                                              LandscapeCharInterpSpeed;                                   // 0x01D0   (0x0004)  
	float                                              TimeSinceAudioUpdate;                                       // 0x01D4   (0x0004)  
	TArray<FFortCurieVoxelFireParticleGrassData>       CachedFireParticleGrassData;                                // 0x01D8   (0x0010)  
	TArray<FFortCurieFireParticleActorData>            CachedFireParticleActorData;                                // 0x01E8   (0x0010)  
	unsigned char                                      UnknownData02_5[0x60];                                      // 0x01F8   (0x0060)  MISSED
	SDK_UNDEFINED(80,14220) /* TSet<FFortSpatialCellIndex> */ __um(CachedBurningGrassGridCells);                   // 0x0258   (0x0050)  
	SDK_UNDEFINED(80,14221) /* TMap<FFortSpatialCellIndex, UAudioComponent*> */ __um(GrassAudioMap);               // 0x02A8   (0x0050)  
	unsigned char                                      UnknownData03_5[0x50];                                      // 0x02F8   (0x0050)  MISSED
	TArray<class UAudioComponent*>                     PreallocatedAudioComponents;                                // 0x0348   (0x0010)  
	FTimerHandle                                       AudioComponentCleanupTimerHandle;                           // 0x0358   (0x0008)  
	double                                             PreviousLandscapeCharTickTime;                              // 0x0360   (0x0008)  


	/// Functions
	// Function /Script/InfernoRuntime.FortCurieVoxelFireNativeFXHandler.OnUserSettingsEffectQualityChanged
	// void OnUserSettingsEffectQualityChanged();                                                                            // [0xa9631e4] Final|Native|Private 
};

/// Class /Script/InfernoRuntime.FortCurieVoxelFireParticleDataInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortCurieVoxelFireParticleDataInterface : public UInterface
{ 
public:
};

/// Class /Script/InfernoRuntime.FortCurieVoxelFireNiagaraDataInterface
/// Size: 0x0000 (0x000038 - 0x000038)
class UFortCurieVoxelFireNiagaraDataInterface : public UNiagaraDataInterface
{ 
public:
};

/// Class /Script/InfernoRuntime.InfernoCurieVoxelFireAudioParticleDataInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UInfernoCurieVoxelFireAudioParticleDataInterface : public UInterface
{ 
public:
};

/// Class /Script/InfernoRuntime.InfernoCurieVoxelFireAudioNiagaraDataInterface
/// Size: 0x0000 (0x000038 - 0x000038)
class UInfernoCurieVoxelFireAudioNiagaraDataInterface : public UNiagaraDataInterface
{ 
public:
};

