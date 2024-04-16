
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: DataRegistry
/// dependency: DeveloperSettings
/// dependency: Engine
/// dependency: GameplayTags
/// dependency: MassActors
/// dependency: MassEntity
/// dependency: MassRepresentation
/// dependency: MassSpawner
/// dependency: NetCore

/// Class /Script/InstancedActors.ClientInstancedActorsSpawnerSubsystem
/// Size: 0x0000 (0x0000F0 - 0x0000F0)
class UClientInstancedActorsSpawnerSubsystem : public UMassActorSpawnerSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
};

/// Class /Script/InstancedActors.InstancedActorsComponent
/// Size: 0x0010 (0x0000A0 - 0x0000B0)
class UInstancedActorsComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FInstancedActorsInstanceHandle)            InstanceHandle                                              OFFSET(getStruct<T>, {0xA0, 16, 0, 0})


	/// Functions
	// Function /Script/InstancedActors.InstancedActorsComponent.OnRep_InstanceHandle
	// void OnRep_InstanceHandle();                                                                                             // [0xc6f2c40] Final|Native|Protected 
	// Function /Script/InstancedActors.InstancedActorsComponent.HasMassEntity
	// bool HasMassEntity();                                                                                                    // [0xc6f2c08] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/InstancedActors.InstancedActorsData
/// Size: 0x0298 (0x000028 - 0x0002C0)
class UInstancedActorsData : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 704;

public:
	DMember(uint16_t)                                  ID                                                          OFFSET(get<uint16_t>, {0x28, 2, 0, 0})
	CMember(class UClass*)                             ActorClass                                                  OFFSET(get<T>, {0x30, 8, 0, 0})
	SMember(FInstancedActorsTagSet)                    Tags                                                        OFFSET(getStruct<T>, {0x38, 40, 0, 0})
	CMember(TArray<FTransform>)                        InstanceTransforms                                          OFFSET(get<T>, {0x70, 16, 0, 0})
	DMember(uint16_t)                                  NumValidInstances                                           OFFSET(get<uint16_t>, {0x80, 2, 0, 0})
	SMember(FBox)                                      Bounds                                                      OFFSET(getStruct<T>, {0x88, 56, 0, 0})
	DMember(uint16_t)                                  NumInstances                                                OFFSET(get<uint16_t>, {0xC0, 2, 0, 0})
	CMember(TArray<FMassEntityHandle>)                 Entities                                                    OFFSET(get<T>, {0xC8, 16, 0, 0})
	CMember(TArray<FInstancedActorsVisualizationInfo>) InstanceVisualizations                                      OFFSET(get<T>, {0x108, 16, 0, 0})
	SMember(FInstancedActorsDeltaList)                 InstanceDeltas                                              OFFSET(getStruct<T>, {0x148, 376, 0, 0})


	/// Functions
	// Function /Script/InstancedActors.InstancedActorsData.GetManager
	// class AInstancedActorsManager* GetManager();                                                                             // [0x2aa2598] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/InstancedActors.InstancedActorsInitializerProcessor
/// Size: 0x02A0 (0x0000C0 - 0x000360)
class UInstancedActorsInitializerProcessor : public UMassProcessor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 864;

public:
};

/// Class /Script/InstancedActors.InstancedActorsManager
/// Size: 0x0120 (0x000290 - 0x0003B0)
class AInstancedActorsManager : public APartitionActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 944;

public:
	CMember(class UInstancedActorsSubsystem*)          InstancedActorSubsystem                                     OFFSET(get<T>, {0x2A0, 8, 0, 0})
	SMember(FInstancedActorsManagerHandle)             ManagerHandle                                               OFFSET(getStruct<T>, {0x2A8, 4, 0, 0})
	SMember(FGuid)                                     SavedActorGuid                                              OFFSET(getStruct<T>, {0x2C0, 16, 0, 0})
	DMember(bool)                                      bHasSpawnedEntities                                         OFFSET(get<bool>, {0x2D0, 1, 0, 0})
	DMember(uint16_t)                                  NextInstanceDataID                                          OFFSET(get<uint16_t>, {0x2D2, 2, 0, 0})
	CMember(TArray<class UInstancedActorsData*>)       PerActorClassInstanceData                                   OFFSET(get<T>, {0x2D8, 16, 0, 0})
	SMember(FBox)                                      InstanceBounds                                              OFFSET(getStruct<T>, {0x2E8, 56, 0, 0})
	CMember(TMap<UInstancedStaticMeshComponent*, int32_t>) ISMComponentToInstanceDataMap                           OFFSET(get<T>, {0x360, 80, 0, 0})
};

/// Class /Script/InstancedActors.InstancedActorsModifierBase
/// Size: 0x0050 (0x000028 - 0x000078)
class UInstancedActorsModifierBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	SMember(FGameplayTagQuery)                         InstanceTagsQuery                                           OFFSET(getStruct<T>, {0x28, 72, 0, 0})
};

/// Class /Script/InstancedActors.RemoveInstancedActorsModifier
/// Size: 0x0000 (0x000078 - 0x000078)
class URemoveInstancedActorsModifier : public UInstancedActorsModifierBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
};

/// Class /Script/InstancedActors.InstancedActorsModifierVolume
/// Size: 0x0008 (0x000290 - 0x000298)
class AInstancedActorsModifierVolume : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 664;

public:
	CMember(class UInstancedActorsModifierVolumeComponent*) ModifierVolumeComponent                                OFFSET(get<T>, {0x290, 8, 0, 0})
};

/// Class /Script/InstancedActors.InstancedActorsRemovalModifierVolume
/// Size: 0x0000 (0x000298 - 0x000298)
class AInstancedActorsRemovalModifierVolume : public AInstancedActorsModifierVolume
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 664;

public:
};

/// Class /Script/InstancedActors.InstancedActorsModifierVolumeComponent
/// Size: 0x0070 (0x000500 - 0x000570)
class UInstancedActorsModifierVolumeComponent : public UPrimitiveComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1392;

public:
	CMember(EInstancedActorsVolumeShape)               Shape                                                       OFFSET(get<T>, {0x500, 1, 0, 0})
	SMember(FVector)                                   Extent                                                      OFFSET(getStruct<T>, {0x508, 24, 0, 0})
	DMember(float)                                     Radius                                                      OFFSET(get<float>, {0x520, 4, 0, 0})
	CMember(TArray<class UInstancedActorsModifierBase*>) Modifiers                                                 OFFSET(get<T>, {0x528, 16, 0, 0})
	DMember(bool)                                      bIgnoreOwnLevelsInstances                                   OFFSET(get<bool>, {0x538, 1, 0, 0})
	CMember(TArray<TWeakObjectPtr<UWorld*>>)           LevelsToIgnore                                              OFFSET(get<T>, {0x540, 16, 0, 0})
	SMember(FColor)                                    Color                                                       OFFSET(getStruct<T>, {0x550, 4, 0, 0})
	DMember(bool)                                      bDrawOnlyIfSelected                                         OFFSET(get<bool>, {0x554, 1, 0, 0})
	DMember(float)                                     LineThickness                                               OFFSET(get<float>, {0x558, 4, 0, 0})
	SMember(FInstancedActorsModifierVolumeHandle)      ModifierVolumeHandle                                        OFFSET(getStruct<T>, {0x55C, 4, 0, 0})
	CMember(TArray<TWeakObjectPtr<AInstancedActorsManager*>>) ModifiedManagers                                     OFFSET(get<T>, {0x560, 16, 0, 0})
};

/// Class /Script/InstancedActors.RemoveInstancesModifierVolumeComponent
/// Size: 0x0000 (0x000570 - 0x000570)
class URemoveInstancesModifierVolumeComponent : public UInstancedActorsModifierVolumeComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1392;

public:
};

/// Class /Script/InstancedActors.InstancedActorsRepresentationActorManagement
/// Size: 0x0000 (0x000028 - 0x000028)
class UInstancedActorsRepresentationActorManagement : public UMassRepresentationActorManagement
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/InstancedActors.InstancedActorsRepresentationSubsystem
/// Size: 0x0000 (0x0000D0 - 0x0000D0)
class UInstancedActorsRepresentationSubsystem : public UMassRepresentationSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
};

/// Class /Script/InstancedActors.InstancedActorsProjectSettings
/// Size: 0x0078 (0x000030 - 0x0000A8)
class UInstancedActorsProjectSettings : public UDeveloperSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	DMember(int32_t)                                   GridSize                                                    OFFSET(get<int32_t>, {0x30, 4, 0, 0})
	SMember(FDataRegistryType)                         NamedSettingsRegistryType                                   OFFSET(getStruct<T>, {0x34, 4, 0, 0})
	SMember(FDataRegistryType)                         ActorClassSettingsRegistryType                              OFFSET(getStruct<T>, {0x38, 4, 0, 0})
	SMember(FName)                                     DefaultBaseSettingsName                                     OFFSET(getStruct<T>, {0x3C, 4, 0, 0})
	SMember(FName)                                     EnforcedSettingsName                                        OFFSET(getStruct<T>, {0x40, 4, 0, 0})
	SMember(FSoftClassPath)                            ServerActorSpawnerSubsystemClass                            OFFSET(getStruct<T>, {0x48, 24, 0, 0})
	SMember(FSoftClassPath)                            ClientActorSpawnerSubsystemClass                            OFFSET(getStruct<T>, {0x60, 24, 0, 0})
	SMember(FSoftClassPath)                            InstancedActorsSubsystemClass                               OFFSET(getStruct<T>, {0x78, 24, 0, 0})
	SMember(FSoftClassPath)                            StationaryVisualizationTraitClass                           OFFSET(getStruct<T>, {0x90, 24, 0, 0})
};

/// Class /Script/InstancedActors.InstancedActorsStationaryLODBatchProcessor
/// Size: 0x0570 (0x0000C0 - 0x000630)
class UInstancedActorsStationaryLODBatchProcessor : public UMassProcessor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1584;

public:
	DMember(double)                                    DelayPerBulkLOD                                             OFFSET(get<double>, {0x600, 32, 0, 0})
};

/// Class /Script/InstancedActors.InstancedActorsSubsystem
/// Size: 0x02C8 (0x000040 - 0x000308)
class UInstancedActorsSubsystem : public UTickableWorldSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 776;

public:
	CMember(class UInstancedActorsProjectSettings*)    ProjectSettings                                             OFFSET(get<T>, {0x40, 8, 0, 0})
	CMember(class UDataRegistrySubsystem*)             DataRegistrySubsystem                                       OFFSET(get<T>, {0x48, 8, 0, 0})
	CMember(class UActorPartitionSubsystem*)           ActorPartitionSubsystem                                     OFFSET(get<T>, {0x50, 8, 0, 0})
	CMember(class UWorld*)                             ExemplarActorWorld                                          OFFSET(get<T>, {0x2A8, 8, 0, 0})
	CMember(class UScriptStruct*)                      SettingsType                                                OFFSET(get<T>, {0x300, 8, 0, 0})
};

/// Class /Script/InstancedActors.InstancedActorsVisualizationSwitcherProcessor
/// Size: 0x02A0 (0x0000C0 - 0x000360)
class UInstancedActorsVisualizationSwitcherProcessor : public UMassProcessor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 864;

public:
};

/// Class /Script/InstancedActors.InstancedActorsVisualizationTrait
/// Size: 0x0000 (0x000120 - 0x000120)
class UInstancedActorsVisualizationTrait : public UMassStationaryDistanceVisualizationTrait
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	CMember(TWeakObjectPtr<UInstancedActorsData*>)     InstanceData                                                OFFSET(get<T>, {0x118, 8, 0, 0})
};

/// Class /Script/InstancedActors.ServerInstancedActorsSpawnerSubsystem
/// Size: 0x0028 (0x0000F0 - 0x000118)
class UServerInstancedActorsSpawnerSubsystem : public UMassActorSpawnerSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 280;

public:
	CMember(class AActor*)                             TransientActorBeingSpawned                                  OFFSET(get<T>, {0x100, 8, 0, 0})
	SMember(FInstancedActorsInstanceHandle)            TransientActorSpawningInstance                              OFFSET(getStruct<T>, {0x108, 16, 0, 0})
};

/// Struct /Script/InstancedActors.InstancedActorsInstanceIndex
/// Size: 0x0002 (0x000000 - 0x000002)
class FInstancedActorsInstanceIndex : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2;

public:
	DMember(uint16_t)                                  Index                                                       OFFSET(get<uint16_t>, {0x0, 2, 0, 0})
};

/// Struct /Script/InstancedActors.InstancedActorsInstanceHandle
/// Size: 0x0010 (0x000000 - 0x000010)
class FInstancedActorsInstanceHandle : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class UInstancedActorsData*)               InstancedActorData                                          OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FInstancedActorsInstanceIndex)             Index                                                       OFFSET(getStruct<T>, {0x8, 2, 0, 0})
};

/// Struct /Script/InstancedActors.InstancedActorsMassSpawnData
/// Size: 0x0008 (0x000000 - 0x000008)
class FInstancedActorsMassSpawnData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/InstancedActors.InstancedActorsIterationContext
/// Size: 0x0070 (0x000000 - 0x000070)
class FInstancedActorsIterationContext : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Struct /Script/InstancedActors.InstancedActorsDelta
/// Size: 0x0004 (0x00000C - 0x000010)
class FInstancedActorsDelta : public FFastArraySerializerItem
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FInstancedActorsInstanceIndex)             InstanceIndex                                               OFFSET(getStruct<T>, {0xC, 2, 0, 0})
	DMember(bool)                                      bDestroyed                                                  OFFSET(get<bool>, {0xE, 1, 1, 0})
	DMember(char)                                      CurrentLifecyclePhaseIndex                                  OFFSET(get<char>, {0xF, 1, 0, 0})
};

/// Struct /Script/InstancedActors.InstancedActorsDeltaList
/// Size: 0x0070 (0x000108 - 0x000178)
class FInstancedActorsDeltaList : public FFastArraySerializer
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 376;

public:
	CMember(TArray<FInstancedActorsDelta>)             InstanceDeltas                                              OFFSET(get<T>, {0x160, 16, 0, 0})
};

/// Struct /Script/InstancedActors.InstancedActorsSettings
/// Size: 0x0098 (0x000008 - 0x0000A0)
class FInstancedActorsSettings : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	DMember(bool)                                      bOverride_bInstancesCastShadows                             OFFSET(get<bool>, {0x8, 1, 1, 0})
	DMember(bool)                                      bOverride_MaxActorDistance                                  OFFSET(get<bool>, {0x8, 1, 1, 1})
	DMember(bool)                                      bOverride_bDisableAutoDistanceCulling                       OFFSET(get<bool>, {0x8, 1, 1, 2})
	DMember(bool)                                      bOverride_MaxInstanceDistance                               OFFSET(get<bool>, {0x8, 1, 1, 3})
	DMember(bool)                                      bOverride_MaxInstanceDistances                              OFFSET(get<bool>, {0x8, 1, 1, 4})
	DMember(bool)                                      bOverride_LODDistanceScales                                 OFFSET(get<bool>, {0x8, 1, 1, 5})
	DMember(bool)                                      bOverride_AffectDistanceFieldLighting                       OFFSET(get<bool>, {0x8, 1, 1, 6})
	DMember(bool)                                      bOverride_DetailedRepresentationLODDistance                 OFFSET(get<bool>, {0x8, 1, 1, 7})
	DMember(bool)                                      bOverride_ForceLowRepresentationLODDistance                 OFFSET(get<bool>, {0x9, 1, 1, 0})
	DMember(bool)                                      bOverride_WorldPositionOffsetDisableDistance                OFFSET(get<bool>, {0x9, 1, 1, 1})
	DMember(bool)                                      bOverride_bEjectOnActorMoved                                OFFSET(get<bool>, {0x9, 1, 1, 2})
	DMember(bool)                                      bOverride_ActorEjectionMovementThreshold                    OFFSET(get<bool>, {0x9, 1, 1, 3})
	DMember(bool)                                      bOverride_bCanEverAffectNavigation                          OFFSET(get<bool>, {0x9, 1, 1, 4})
	DMember(bool)                                      bOverride_OverrideWorldPartitionGrid                        OFFSET(get<bool>, {0x9, 1, 1, 5})
	DMember(bool)                                      bOverride_ScaleEntityCount                                  OFFSET(get<bool>, {0x9, 1, 1, 6})
	DMember(bool)                                      bOverride_ActorClass                                        OFFSET(get<bool>, {0x9, 1, 1, 7})
	DMember(bool)                                      bOverride_bCanBeDamaged                                     OFFSET(get<bool>, {0xA, 1, 1, 0})
	DMember(bool)                                      bOverride_bIgnoreModifierVolumes                            OFFSET(get<bool>, {0xA, 1, 1, 1})
	DMember(bool)                                      bOverride_bControlPhysicsState                              OFFSET(get<bool>, {0xA, 1, 1, 2})
	DMember(bool)                                      bInstancesCastShadows                                       OFFSET(get<bool>, {0xB, 1, 0, 0})
	DMember(double)                                    MaxActorDistance                                            OFFSET(get<double>, {0x10, 8, 0, 0})
	DMember(bool)                                      bDisableAutoDistanceCulling                                 OFFSET(get<bool>, {0x18, 1, 0, 0})
	DMember(bool)                                      bControlPhysicsState                                        OFFSET(get<bool>, {0x19, 1, 0, 0})
	DMember(double)                                    MaxInstanceDistance                                         OFFSET(get<double>, {0x20, 8, 0, 0})
	CMember(TArray<double>)                            MaxInstanceDistances                                        OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(TArray<float>)                             LODDistanceScales                                           OFFSET(get<T>, {0x38, 16, 0, 0})
	CMember(TArray<bool>)                              AffectDistanceFieldLighting                                 OFFSET(get<T>, {0x48, 16, 0, 0})
	DMember(double)                                    DetailedRepresentationLODDistance                           OFFSET(get<double>, {0x58, 8, 0, 0})
	DMember(double)                                    ForceLowRepresentationLODDistance                           OFFSET(get<double>, {0x60, 8, 0, 0})
	DMember(int32_t)                                   WorldPositionOffsetDisableDistance                          OFFSET(get<int32_t>, {0x68, 4, 0, 0})
	DMember(bool)                                      bEjectOnActorMoved                                          OFFSET(get<bool>, {0x6C, 1, 0, 0})
	DMember(float)                                     ActorEjectionMovementThreshold                              OFFSET(get<float>, {0x70, 4, 0, 0})
	DMember(bool)                                      bCanEverAffectNavigation                                    OFFSET(get<bool>, {0x74, 1, 0, 0})
	SMember(FName)                                     OverrideWorldPartitionGrid                                  OFFSET(getStruct<T>, {0x78, 4, 0, 0})
	DMember(float)                                     ScaleEntityCount                                            OFFSET(get<float>, {0x7C, 4, 0, 0})
	CMember(class UClass*)                             ActorClass                                                  OFFSET(get<T>, {0x80, 8, 0, 0})
	DMember(bool)                                      bCanBeDamaged                                               OFFSET(get<bool>, {0x88, 1, 0, 0})
	DMember(bool)                                      bIgnoreModifierVolumes                                      OFFSET(get<bool>, {0x89, 1, 0, 0})
	CMember(TArray<FName>)                             AppliedSettingsOverrides                                    OFFSET(get<T>, {0x90, 16, 0, 0})
};

/// Struct /Script/InstancedActors.InstancedActorsClassSettingsBase
/// Size: 0x0010 (0x000008 - 0x000018)
class FInstancedActorsClassSettingsBase : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(TArray<FName>)                             BaseSettings                                                OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/InstancedActors.InstancedActorsClassSettings
/// Size: 0x00A0 (0x000018 - 0x0000B8)
class FInstancedActorsClassSettings : public FInstancedActorsClassSettingsBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	SMember(FInstancedActorsSettings)                  OverrideSettings                                            OFFSET(getStruct<T>, {0x18, 160, 0, 0})
};

/// Struct /Script/InstancedActors.InstancedActorsTagSet
/// Size: 0x0028 (0x000000 - 0x000028)
class FInstancedActorsTagSet : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FGameplayTagContainer)                     Tags                                                        OFFSET(getStruct<T>, {0x0, 32, 0, 0})
	DMember(uint32_t)                                  Hash                                                        OFFSET(get<uint32_t>, {0x20, 4, 0, 0})
};

/// Struct /Script/InstancedActors.InstancedActorsVisualizationDesc
/// Size: 0x0010 (0x000000 - 0x000010)
class FInstancedActorsVisualizationDesc : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FISMComponentDescriptor>)           ISMComponentDescriptors                                     OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/InstancedActors.InstancedActorsSoftVisualizationDesc
/// Size: 0x0010 (0x000000 - 0x000010)
class FInstancedActorsSoftVisualizationDesc : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FSoftISMComponentDescriptor>)       ISMComponentDescriptors                                     OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/InstancedActors.InstancedActorsVisualizationInfo
/// Size: 0x0050 (0x000000 - 0x000050)
class FInstancedActorsVisualizationInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FInstancedActorsVisualizationDesc)         VisualizationDesc                                           OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	CMember(TArray<class UInstancedStaticMeshComponent*>) ISMComponents                                            OFFSET(get<T>, {0x10, 16, 0, 0})
	SMember(FStaticMeshInstanceVisualizationDescHandle) MassStaticMeshDescHandle                                   OFFSET(getStruct<T>, {0x20, 2, 0, 0})
};

/// Struct /Script/InstancedActors.InstancedActorsMeshSwitchFragment
/// Size: 0x0001 (0x000001 - 0x000002)
class FInstancedActorsMeshSwitchFragment : public FMassFragment
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2;

public:
	SMember(FStaticMeshInstanceVisualizationDescHandle) NewStaticMeshDescHandle                                    OFFSET(getStruct<T>, {0x0, 2, 0, 0})
};

/// Struct /Script/InstancedActors.InstancedActorsManagerHandle
/// Size: 0x0004 (0x000000 - 0x000004)
class FInstancedActorsManagerHandle : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(int32_t)                                   ManagerID                                                   OFFSET(get<int32_t>, {0x0, 4, 0, 0})
};

/// Struct /Script/InstancedActors.InstancedActorsModifierVolumeHandle
/// Size: 0x0004 (0x000000 - 0x000004)
class FInstancedActorsModifierVolumeHandle : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(int32_t)                                   ModifierVolumeID                                            OFFSET(get<int32_t>, {0x0, 4, 0, 0})
};

/// Struct /Script/InstancedActors.InstancedActorsDataSharedFragment
/// Size: 0x000B (0x000001 - 0x00000C)
class FInstancedActorsDataSharedFragment : public FMassSharedFragment
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	CMember(TWeakObjectPtr<UInstancedActorsData*>)     InstanceData                                                OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/InstancedActors.InstancedActorsFragment
/// Size: 0x000B (0x000001 - 0x00000C)
class FInstancedActorsFragment : public FMassFragment
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	CMember(TWeakObjectPtr<UInstancedActorsData*>)     InstanceData                                                OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FInstancedActorsInstanceIndex)             InstanceIndex                                               OFFSET(getStruct<T>, {0x8, 2, 0, 0})
};

/// Enum /Script/InstancedActors.EInstancedActorsVolumeShape
/// Size: 0x03
enum class EInstancedActorsVolumeShape : uint8_t
{
	EInstancedActorsVolumeShape__Box                                                 = 0,
	EInstancedActorsVolumeShape__Sphere                                              = 1,
	EInstancedActorsVolumeShape__EInstancedActorsVolumeShape_MAX                     = 2
};

