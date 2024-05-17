
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

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
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
};

/// Class /Script/InfernoRuntime.FortCurieElementAttachConditionHandlerVoxelFire
/// Size: 0x0000 (0x000040 - 0x000040)
class UFortCurieElementAttachConditionHandlerVoxelFire : public UFortCurieElementAttachConditionHandlerFire
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Script/InfernoRuntime.FortCurieVoxelFirePropagationManagerConfig
/// Size: 0x0048 (0x000130 - 0x000178)
class UFortCurieVoxelFirePropagationManagerConfig : public UFortCurieFirePropagationManagerConfig
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 376;

public:
	SMember(FFortCurieVoxelPropagationProperties)      DefaultPropagationProperties                                OFFSET(getStruct<T>, {0x130, 24, 0, 0})
	SMember(FName)                                     PropagationPropertiesRegistry                               OFFSET(getStruct<T>, {0x148, 4, 0, 0})
	DMember(float)                                     PropagationNoiseMinimum                                     OFFSET(get<float>, {0x14C, 4, 0, 0})
	DMember(float)                                     PropagationNoiseMaximum                                     OFFSET(get<float>, {0x150, 4, 0, 0})
	DMember(float)                                     PropagationSpeedNoiseRange                                  OFFSET(get<float>, {0x154, 4, 0, 0})
	DMember(float)                                     PropagationMinimumSpeed                                     OFFSET(get<float>, {0x158, 4, 0, 0})
	DMember(float)                                     PropagationMinimumTime                                      OFFSET(get<float>, {0x15C, 4, 0, 0})
	DMember(float)                                     VoxelOverlapExpansionFactor                                 OFFSET(get<float>, {0x160, 4, 0, 0})
	DMember(bool)                                      bAllowPerMaterialPropagationProperties                      OFFSET(get<bool>, {0x164, 1, 0, 0})
	DMember(float)                                     ActorPropagationInteractMagnitude                           OFFSET(get<float>, {0x168, 4, 0, 0})
	DMember(float)                                     MovedActorGrassIgnitionDelay                                OFFSET(get<float>, {0x16C, 4, 0, 0})
	DMember(float)                                     MovedActorGrassGridCellZExpansion                           OFFSET(get<float>, {0x170, 4, 0, 0})
	DMember(float)                                     MovedActorGroundTraceZRange                                 OFFSET(get<float>, {0x174, 4, 0, 0})
};

/// Class /Script/InfernoRuntime.FortCurieVoxelFirePropagationManager
/// Size: 0x0650 (0x000030 - 0x000680)
class UFortCurieVoxelFirePropagationManager : public UFortCurieManagerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1664;

public:
	SMember(FFortCurieVoxelFirePropagationManagerTickFunction) PrimaryTickFunction                                 OFFSET(getStruct<T>, {0x40, 48, 0, 0})
	CMember(class UFortCurieVoxelFirePropagationManagerConfig*) InternalManagerConfig                              OFFSET(get<T>, {0x668, 8, 0, 0})
};

/// Class /Script/InfernoRuntime.FortCurieVoxelFireDebugParticleDataInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortCurieVoxelFireDebugParticleDataInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/InfernoRuntime.FortCurieVoxelFireDebugNiagaraDataInterface
/// Size: 0x0000 (0x000038 - 0x000038)
class UFortCurieVoxelFireDebugNiagaraDataInterface : public UNiagaraDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Script/InfernoRuntime.FortCurieVoxelFireNativeFXHandlerConfig
/// Size: 0x0058 (0x000168 - 0x0001C0)
class UFortCurieVoxelFireNativeFXHandlerConfig : public UFortCurieNativeFXHandlerConfig
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 448;

public:
	CMember(class UNiagaraSystem*)                     WorldFireSystem                                             OFFSET(get<T>, {0x168, 8, 0, 0})
	CMember(class UNiagaraSystem*)                     WorldFireDebugSystem                                        OFFSET(get<T>, {0x170, 8, 0, 0})
	CMember(class UTextureRenderTarget2D*)             LandscapeCharRenderTarget                                   OFFSET(get<T>, {0x178, 8, 0, 0})
	CMember(class UMaterialParameterCollection*)       MaterialParameterCollection                                 OFFSET(get<T>, {0x180, 8, 0, 0})
	SMember(FName)                                     PlayerWorldFireSystemLightScalabilityParamName              OFFSET(getStruct<T>, {0x188, 4, 0, 0})
	SMember(FName)                                     LandscapeBiasParameterName                                  OFFSET(getStruct<T>, {0x18C, 4, 0, 0})
	SMember(FName)                                     LandscapeDivisorParameterName                               OFFSET(getStruct<T>, {0x190, 4, 0, 0})
	DMember(float)                                     LandscapeFireRandomLocationRadius                           OFFSET(get<float>, {0x194, 4, 0, 0})
	DMember(float)                                     MinLandscapeFireSphericalBounds                             OFFSET(get<float>, {0x198, 4, 0, 0})
	DMember(float)                                     MaxLandscapeFireSphericalBounds                             OFFSET(get<float>, {0x19C, 4, 0, 0})
	DMember(float)                                     LandscapeCharInterpSpeed                                    OFFSET(get<float>, {0x1A0, 4, 0, 0})
	DMember(float)                                     LandscapeIgnitionParticleMovementSpeed                      OFFSET(get<float>, {0x1A4, 4, 0, 0})
	DMember(bool)                                      bUseVoxelFireAmbientAudio                                   OFFSET(get<bool>, {0x1A8, 1, 0, 0})
	CMember(class USoundBase*)                         StructureFireAmbientSound                                   OFFSET(get<T>, {0x1B0, 8, 0, 0})
	CMember(class USoundBase*)                         GrassFireAmbientSound                                       OFFSET(get<T>, {0x1B8, 8, 0, 0})
};

/// Class /Script/InfernoRuntime.FortCurieVoxelFireNativeFXHandler
/// Size: 0x0328 (0x000040 - 0x000368)
class UFortCurieVoxelFireNativeFXHandler : public UFortCurieNativeFXHandler
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 872;

public:
	CMember(TSet<UFortCurieComponent*>)                PendingUpdateComponents                                     OFFSET(get<T>, {0x70, 80, 0, 0})
	CMember(TSet<UFortCurieComponent*>)                PendingRemoveComponents                                     OFFSET(get<T>, {0xC0, 80, 0, 0})
	CMember(TArray<class UFortCurieWorldNiagaraComponent*>) WorldFireNiagaraSystems                                OFFSET(get<T>, {0x160, 16, 0, 0})
	CMember(TArray<class UFortCurieWorldNiagaraComponent*>) WorldFireDebugNiagaraSystems                           OFFSET(get<T>, {0x170, 16, 0, 0})
	DMember(float)                                     WorldSystemFireParticleSignificanceRequirement              OFFSET(get<float>, {0x180, 4, 0, 0})
	DMember(float)                                     WorldSystemIgnitionParticleSignificanceRequirement          OFFSET(get<float>, {0x184, 4, 0, 0})
	DMember(float)                                     AudioGrassFireSignificanceRequirement                       OFFSET(get<float>, {0x188, 4, 0, 0})
	DMember(float)                                     AudioActorFireSignificanceRequirement                       OFFSET(get<float>, {0x18C, 4, 0, 0})
	SMember(FRandomStream)                             RandomStream                                                OFFSET(getStruct<T>, {0x190, 8, 0, 0})
	SMember(FBox)                                      GrassFireBounds                                             OFFSET(getStruct<T>, {0x198, 56, 0, 0})
	DMember(float)                                     LandscapeCharInterpSpeed                                    OFFSET(get<float>, {0x1D0, 4, 0, 0})
	DMember(float)                                     TimeSinceAudioUpdate                                        OFFSET(get<float>, {0x1D4, 4, 0, 0})
	CMember(TArray<FFortCurieVoxelFireParticleGrassData>) CachedFireParticleGrassData                              OFFSET(get<T>, {0x1D8, 16, 0, 0})
	CMember(TArray<FFortCurieFireParticleActorData>)   CachedFireParticleActorData                                 OFFSET(get<T>, {0x1E8, 16, 0, 0})
	CMember(TSet<FFortSpatialCellIndex>)               CachedBurningGrassGridCells                                 OFFSET(get<T>, {0x258, 80, 0, 0})
	CMember(TMap<FFortSpatialCellIndex, UAudioComponent*>) GrassAudioMap                                           OFFSET(get<T>, {0x2A8, 80, 0, 0})
	CMember(TArray<class UAudioComponent*>)            PreallocatedAudioComponents                                 OFFSET(get<T>, {0x348, 16, 0, 0})
	SMember(FTimerHandle)                              AudioComponentCleanupTimerHandle                            OFFSET(getStruct<T>, {0x358, 8, 0, 0})
	DMember(double)                                    PreviousLandscapeCharTickTime                               OFFSET(get<double>, {0x360, 8, 0, 0})


	/// Functions
	// Function /Script/InfernoRuntime.FortCurieVoxelFireNativeFXHandler.OnUserSettingsEffectQualityChanged
	// void OnUserSettingsEffectQualityChanged();                                                                               // [0xbdba700] Final|Native|Private 
};

/// Class /Script/InfernoRuntime.FortCurieVoxelFireParticleDataInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortCurieVoxelFireParticleDataInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/InfernoRuntime.FortCurieVoxelFireNiagaraDataInterface
/// Size: 0x0000 (0x000038 - 0x000038)
class UFortCurieVoxelFireNiagaraDataInterface : public UNiagaraDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Script/InfernoRuntime.InfernoCurieVoxelFireAudioParticleDataInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UInfernoCurieVoxelFireAudioParticleDataInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/InfernoRuntime.InfernoCurieVoxelFireAudioNiagaraDataInterface
/// Size: 0x0000 (0x000038 - 0x000038)
class UInfernoCurieVoxelFireAudioNiagaraDataInterface : public UNiagaraDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Struct /Script/InfernoRuntime.FortCurieVoxelPropagationProperties
/// Size: 0x0010 (0x000008 - 0x000018)
class FFortCurieVoxelPropagationProperties : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(float)                                     PropagationZDirectionDownMultiplier                         OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     PropagationZDirectionUpMultiplier                           OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     PropagationBaseDelay                                        OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     PropagationBaseSpeed                                        OFFSET(get<float>, {0x14, 4, 0, 0})
};

/// Struct /Script/InfernoRuntime.FortCurieVoxelFirePropagationManagerTickFunction
/// Size: 0x0008 (0x000028 - 0x000030)
class FFortCurieVoxelFirePropagationManagerTickFunction : public FTickFunction
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/InfernoRuntime.FortCurieVoxelFireParticleGrassData
/// Size: 0x0058 (0x000000 - 0x000058)
class FFortCurieVoxelFireParticleGrassData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
};

