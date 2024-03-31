
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: DataRegistry
/// dependency: EncountersRuntime
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: GameplayTags
/// dependency: JunoGameNative
/// dependency: LagerRuntime
/// dependency: ModularGameplay
/// dependency: PlayspaceSystem
/// dependency: StateTreeModule
/// dependency: StructUtils
/// dependency: WorldConditions

/// Class /Script/JunoEncountersPOIRuntime.JunoPOIEncounterPersistenceFeatureModule
/// Size: 0x0000 (0x0000E0 - 0x0000E0)
class UJunoPOIEncounterPersistenceFeatureModule : public UPersistenceFrameworkModule
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
};

/// Class /Script/JunoEncountersPOIRuntime.JunoPOIEncounterPersistenceFeatureData_Container
/// Size: 0x0000 (0x0001E0 - 0x0001E0)
class UJunoPOIEncounterPersistenceFeatureData_Container : public UJunoBasePFWPersistenceFeatureDataContainer
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 480;

public:
};

/// Class /Script/JunoEncountersPOIRuntime.JunoPOIEncounterPlayspaceComponent
/// Size: 0x0230 (0x0000F8 - 0x000328)
class UJunoPOIEncounterPlayspaceComponent : public UJunoConnectedActorLevelPlayspaceComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 808;

public:
	CMember(TWeakObjectPtr<UClass*>)                   EncounterPrefabClass                                        OFFSET(get<T>, {0x100, 32, 0, 0})
	CMember(TArray<FGameplayTagQuery>)                 VariantQueries                                              OFFSET(get<T>, {0x120, 16, 0, 0})
	CMember(TWeakObjectPtr<AJunoPOIGameplayVolume*>)   POIPlayspaceVolume                                          OFFSET(get<T>, {0x130, 8, 0, 0})
	CMember(TWeakObjectPtr<AJunoPOIEncounterPrefab*>)  EncounterPrefab                                             OFFSET(get<T>, {0x138, 8, 0, 0})
	SMember(FJunoPOIEncounterSaveData)                 EncounterConfigData                                         OFFSET(getStruct<T>, {0x158, 256, 0, 0})
	CMember(TWeakObjectPtr<UDataTable*>)               EncounterCategoryTable                                      OFFSET(get<T>, {0x258, 32, 0, 0})
};

/// Class /Script/JunoEncountersPOIRuntime.JunoSpawnActorTaskHelper
/// Size: 0x0000 (0x000038 - 0x000038)
class UJunoSpawnActorTaskHelper : public USpawnActorTaskHelper
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Script/JunoEncountersPOIRuntime.JunoEncounterStaticPointProvider
/// Size: 0x0070 (0x000390 - 0x000400)
class AJunoEncounterStaticPointProvider : public AEncounterStaticPointProvider
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1024;

public:
	SMember(FJunoLivingWorldPointProviderEventLimiter) EventLimiter                                                OFFSET(getStruct<T>, {0x3A0, 32, 0, 0})
	CMember(TArray<FJunoEncounterConditionalTags>)     ConditionalTags                                             OFFSET(get<T>, {0x3C0, 16, 0, 0})
	SMember(FGuid)                                     SavedActorGuid                                              OFFSET(getStruct<T>, {0x3D0, 16, 0, 0})
};

/// Class /Script/JunoEncountersPOIRuntime.JunoPOIEncounterPersistenceFeatureData
/// Size: 0x0108 (0x000040 - 0x000148)
class UJunoPOIEncounterPersistenceFeatureData : public UJunoBasePFWPersistenceFeatureData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 328;

public:
	SMember(FJunoPOIEncounterSaveData)                 SavedEncounterState                                         OFFSET(getStruct<T>, {0x48, 256, 0, 0})
};

/// Class /Script/JunoEncountersPOIRuntime.JunoPOIEncounterPersistenceFeatureDataActor
/// Size: 0x0108 (0x0002D0 - 0x0003D8)
class AJunoPOIEncounterPersistenceFeatureDataActor : public AJunoPersistenceFeatureDataActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 984;

public:
	SMember(FJunoPOIEncounterSaveData)                 SavedEncounterState                                         OFFSET(getStruct<T>, {0x2D8, 256, 0, 0})
};

/// Class /Script/JunoEncountersPOIRuntime.JunoPOIEncounterPersistenceFeatureDataInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoPOIEncounterPersistenceFeatureDataInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/JunoEncountersPOIRuntime.JunoPOIEncounterPrefab
/// Size: 0x0010 (0x0009C8 - 0x0009D8)
class AJunoPOIEncounterPrefab : public ALivingWorldEncounterPrefab
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2520;

public:
	DMember(bool)                                      bEncounterShouldBeLoaded                                    OFFSET(get<bool>, {0x9C8, 1, 0, 0})
	DMember(bool)                                      bEncounterIsInitialized                                     OFFSET(get<bool>, {0x9C9, 1, 0, 0})
	CMember(TWeakObjectPtr<UJunoPOIEncounterPlayspaceComponent*>) POIPlayspaceComponent                            OFFSET(get<T>, {0x9CC, 8, 0, 0})


	/// Functions
	// Function /Script/JunoEncountersPOIRuntime.JunoPOIEncounterPrefab.OnRep_EncounterShouldBeLoaded
	// void OnRep_EncounterShouldBeLoaded();                                                                                    // [0x8e5d11c] Final|Native|Private 
	// Function /Script/JunoEncountersPOIRuntime.JunoPOIEncounterPrefab.OnRep_EncounterInitialized
	// void OnRep_EncounterInitialized();                                                                                       // [0xc60651c] Final|Native|Private 
};

/// Class /Script/JunoEncountersPOIRuntime.JunoPOIEncounterSpawner
/// Size: 0x0018 (0x000290 - 0x0002A8)
class AJunoPOIEncounterSpawner : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 680;

public:
	CMember(TWeakObjectPtr<UJunoPOIEncounterPlayspaceComponent*>) POIEncountersPlayspace                           OFFSET(get<T>, {0x290, 8, 0, 0})
};

/// Struct /Script/JunoEncountersPOIRuntime.JunoCampApplyPersistentTagsStateTreeTaskInstanceData
/// Size: 0x0028 (0x000000 - 0x000028)
class FJunoCampApplyPersistentTagsStateTreeTaskInstanceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FGameplayTagContainer)                     Tags                                                        OFFSET(getStruct<T>, {0x0, 32, 0, 0})
	CMember(class AActor*)                             UserActor                                                   OFFSET(get<T>, {0x20, 8, 0, 0})
};

/// Struct /Script/JunoEncountersPOIRuntime.JunoCampApplyPersistentTagsStateTreeTask
/// Size: 0x0000 (0x000020 - 0x000020)
class FJunoCampApplyPersistentTagsStateTreeTask : public FStateTreeTaskCommonBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/JunoEncountersPOIRuntime.JunoEnableVillagerProviderStateTreeTaskInstanceData
/// Size: 0x0018 (0x000000 - 0x000018)
class FJunoEnableVillagerProviderStateTreeTaskInstanceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(TWeakObjectPtr<AJunoEncounterStaticPointProvider*>) VillagerProvider                                   OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(bool)                                      bEnableProvider                                             OFFSET(get<bool>, {0x8, 1, 0, 0})
	CMember(class AActor*)                             UserActor                                                   OFFSET(get<T>, {0x10, 8, 0, 0})
};

/// Struct /Script/JunoEncountersPOIRuntime.JunoEnableVillagerProviderStateTreeTask
/// Size: 0x0000 (0x000020 - 0x000020)
class FJunoEnableVillagerProviderStateTreeTask : public FStateTreeTaskCommonBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/JunoEncountersPOIRuntime.JunoGetCampLevelStateTreeTaskInstanceData
/// Size: 0x0010 (0x000000 - 0x000010)
class FJunoGetCampLevelStateTreeTaskInstanceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(int32_t)                                   Value                                                       OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	CMember(class AActor*)                             UserActor                                                   OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/JunoEncountersPOIRuntime.JunoGetCampLevelStateTreeTask
/// Size: 0x0000 (0x000020 - 0x000020)
class FJunoGetCampLevelStateTreeTask : public FStateTreeTaskCommonBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/JunoEncountersPOIRuntime.JunoGetVillagerProviderStateTreeTaskInstanceData
/// Size: 0x0058 (0x000000 - 0x000058)
class FJunoGetVillagerProviderStateTreeTaskInstanceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FGameplayTagQuery)                         ProviderTagQuery                                            OFFSET(getStruct<T>, {0x0, 72, 0, 0})
	CMember(class AActor*)                             UserActor                                                   OFFSET(get<T>, {0x48, 8, 0, 0})
	CMember(TWeakObjectPtr<AJunoEncounterStaticPointProvider*>) VillagerProvider                                   OFFSET(get<T>, {0x50, 8, 0, 0})
};

/// Struct /Script/JunoEncountersPOIRuntime.JunoGetVillagerProviderStateTreeTask
/// Size: 0x0000 (0x000020 - 0x000020)
class FJunoGetVillagerProviderStateTreeTask : public FStateTreeTaskCommonBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/JunoEncountersPOIRuntime.JunoPOIEncounterCategoryRow
/// Size: 0x0088 (0x000008 - 0x000090)
class FJunoPOIEncounterCategoryRow : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	CMember(TWeakObjectPtr<UDataRegistry*>)            POIEncounterRegistry                                        OFFSET(get<T>, {0x8, 32, 0, 0})
	SMember(FGameplayTagQuery)                         RequiredCapabilities                                        OFFSET(getStruct<T>, {0x28, 72, 0, 0})
	SMember(FWorldConditionQueryDefinition)            WorldConditionDefinition                                    OFFSET(getStruct<T>, {0x70, 24, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x88, 4, 0, 0})
};

/// Struct /Script/JunoEncountersPOIRuntime.JunoPOIEncounterPersistenceFeatureData_InGameClass_PersistentInfo
/// Size: 0x0100 (0x000000 - 0x000100)
class FJunoPOIEncounterPersistenceFeatureData_InGameClass_PersistentInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	SMember(FJunoPOIEncounterSaveData)                 SavedEncounterState                                         OFFSET(getStruct<T>, {0x0, 256, 0, 0})
};

/// Struct /Script/JunoEncountersPOIRuntime.JunoPOIEncounterSaveData
/// Size: 0x0100 (0x000000 - 0x000100)
class FJunoPOIEncounterSaveData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	DMember(bool)                                      bEncounterChosen                                            OFFSET(get<bool>, {0x0, 1, 0, 0})
	CMember(TWeakObjectPtr<UEncounterItemDefinition*>) ChosenEncounterDefinition                                   OFFSET(get<T>, {0x8, 32, 0, 0})
	CMember(TWeakObjectPtr<UEncounterFactionData*>)    ChosenFaction                                               OFFSET(get<T>, {0x28, 32, 0, 0})
	DMember(int32_t)                                   ChosenVariant                                               OFFSET(get<int32_t>, {0x48, 4, 0, 0})
	SMember(FDataRegistryId)                           EncounterRow                                                OFFSET(getStruct<T>, {0x4C, 8, 0, 0})
	CMember(TMap<FGameplayTag, FPersistenceFrameworkDataTableRowHandle>) Variables                                 OFFSET(get<T>, {0x58, 80, 0, 0})
	CMember(TMap<FGameplayTag, int32_t>)               PersistentValues                                            OFFSET(get<T>, {0xA8, 80, 0, 0})
	DMember(bool)                                      bIsPOISetup                                                 OFFSET(get<bool>, {0xF8, 1, 0, 0})
	DMember(bool)                                      bEncounterFinished                                          OFFSET(get<bool>, {0xF9, 1, 0, 0})
	DMember(bool)                                      bFactionChosen                                              OFFSET(get<bool>, {0xFA, 1, 0, 0})
};

/// Struct /Script/JunoEncountersPOIRuntime.JunoPOIDestroyActorRetainmentEntry
/// Size: 0x0008 (0x000000 - 0x000008)
class FJunoPOIDestroyActorRetainmentEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(int32_t)                                   Count                                                       OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Struct /Script/JunoEncountersPOIRuntime.JunoPOIDestroyActorInfo
/// Size: 0x0058 (0x000000 - 0x000058)
class FJunoPOIDestroyActorInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FGameplayTagQuery)                         DestroyActorQuery                                           OFFSET(getStruct<T>, {0x0, 72, 0, 0})
	CMember(TArray<FJunoPOIDestroyActorRetainmentEntry>) RetainmentEntries                                         OFFSET(get<T>, {0x48, 16, 0, 0})
};

/// Struct /Script/JunoEncountersPOIRuntime.JunoPOIHLODActorInfo
/// Size: 0x0068 (0x000000 - 0x000068)
class FJunoPOIHLODActorInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	CMember(TWeakObjectPtr<UClass*>)                   HLODActorClass                                              OFFSET(get<T>, {0x0, 32, 0, 0})
	SMember(FGameplayTagQuery)                         HLODActorAnchorQuery                                        OFFSET(getStruct<T>, {0x20, 72, 0, 0})
};

/// Struct /Script/JunoEncountersPOIRuntime.JunoPOIEncounterRow
/// Size: 0x00C0 (0x000008 - 0x0000C8)
class FJunoPOIEncounterRow : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	CMember(class UEncounterItemDefinition*)           EncounterDefinition                                         OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(TWeakObjectPtr<UDataRegistry*>)            FactionRegistry                                             OFFSET(get<T>, {0x10, 32, 0, 0})
	SMember(FGameplayTagQuery)                         RequiredCapabilities                                        OFFSET(getStruct<T>, {0x30, 72, 0, 0})
	SMember(FWorldConditionQueryDefinition)            WorldConditionDefinition                                    OFFSET(getStruct<T>, {0x78, 24, 0, 0})
	CMember(TArray<FJunoPOIHLODActorInfo>)             HLODActorsEntries                                           OFFSET(get<T>, {0x90, 16, 0, 0})
	CMember(TArray<FJunoPOIDestroyActorInfo>)          DestroyActorsEntries                                        OFFSET(get<T>, {0xA0, 16, 0, 0})
	CMember(TArray<FInstancedStruct>)                  POIVariables                                                OFFSET(get<T>, {0xB0, 16, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0xC0, 4, 0, 0})
};

/// Struct /Script/JunoEncountersPOIRuntime.JunoSpawnActorStateTreeTaskInstanceData
/// Size: 0x00F8 (0x000000 - 0x0000F8)
class FJunoSpawnActorStateTreeTaskInstanceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
	CMember(TWeakObjectPtr<UClass*>)                   ActorClass                                                  OFFSET(get<T>, {0x0, 32, 0, 0})
	SMember(FGameplayTagQuery)                         AnchorQuery                                                 OFFSET(getStruct<T>, {0x20, 72, 0, 0})
	SMember(FVector)                                   AnchorOffset                                                OFFSET(getStruct<T>, {0x68, 24, 0, 0})
	DMember(bool)                                      bEnablePhysics                                              OFFSET(get<bool>, {0x80, 1, 0, 0})
	DMember(bool)                                      bAttachEncounterVolume                                      OFFSET(get<bool>, {0x81, 1, 0, 0})
	SMember(FGameplayTagContainer)                     ActorTags                                                   OFFSET(getStruct<T>, {0x88, 32, 0, 0})
	SMember(FGameplayTagContainer)                     ActorIdentifierTags                                         OFFSET(getStruct<T>, {0xA8, 32, 0, 0})
	CMember(ESpawnActorPersistenceBehavior)            PersistenceBehavior                                         OFFSET(get<T>, {0xC8, 1, 0, 0})
	SMember(FGameplayTag)                              PersistenceID                                               OFFSET(getStruct<T>, {0xCC, 4, 0, 0})
	DMember(bool)                                      bWaitForSpawnedActor                                        OFFSET(get<bool>, {0xD0, 1, 0, 0})
	CMember(TWeakObjectPtr<AActor*>)                   SpawnedActor                                                OFFSET(get<T>, {0xD4, 8, 0, 0})
	CMember(class AActor*)                             UserActor                                                   OFFSET(get<T>, {0xE0, 8, 0, 0})
	CMember(class UJunoSpawnActorTaskHelper*)          JunoSpawnActorHelper                                        OFFSET(get<T>, {0xE8, 8, 0, 0})
};

/// Struct /Script/JunoEncountersPOIRuntime.JunoSpawnActorStateTreeTask
/// Size: 0x0000 (0x000020 - 0x000020)
class FJunoSpawnActorStateTreeTask : public FStateTreeTaskCommonBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/JunoEncountersPOIRuntime.JunoSpawnedActorMakePersistentStateTreeTaskInstanceData
/// Size: 0x0058 (0x000000 - 0x000058)
class FJunoSpawnedActorMakePersistentStateTreeTaskInstanceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FGameplayTagQuery)                         ActorQuery                                                  OFFSET(getStruct<T>, {0x0, 72, 0, 0})
	DMember(bool)                                      bMakeTransient                                              OFFSET(get<bool>, {0x48, 1, 0, 0})
	CMember(class AActor*)                             UserActor                                                   OFFSET(get<T>, {0x50, 8, 0, 0})
};

/// Struct /Script/JunoEncountersPOIRuntime.JunoSpawnedActorMakePersistentStateTreeTask
/// Size: 0x0000 (0x000020 - 0x000020)
class FJunoSpawnedActorMakePersistentStateTreeTask : public FStateTreeTaskCommonBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/JunoEncountersPOIRuntime.JunoEncounterConditionalTags
/// Size: 0x0028 (0x000000 - 0x000028)
class FJunoEncounterConditionalTags : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(EJunoBiome)                                Biome                                                       OFFSET(get<T>, {0x0, 1, 0, 0})
	SMember(FGameplayTagContainer)                     TagsToApply                                                 OFFSET(getStruct<T>, {0x8, 32, 0, 0})
};

/// Struct /Script/JunoEncountersPOIRuntime.FindPrefabSpawnedActorStateTreeTaskInstanceData
/// Size: 0x0020 (0x000000 - 0x000020)
class FFindPrefabSpawnedActorStateTreeTaskInstanceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(class UClass*)                             MustBeOfClass                                               OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class AActor*)                             UserActor                                                   OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(TWeakObjectPtr<AActor*>)                   Actor                                                       OFFSET(get<T>, {0x10, 8, 0, 0})
};

/// Struct /Script/JunoEncountersPOIRuntime.FindPrefabSpawnedActorStateTreeTask
/// Size: 0x0008 (0x000020 - 0x000028)
class FFindPrefabSpawnedActorStateTreeTask : public FStateTreeTaskCommonBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FStateTreeStateLink)                       TransitionTo                                                OFFSET(getStruct<T>, {0x20, 2, 0, 0})
};

/// Struct /Script/JunoEncountersPOIRuntime.JunoVillagerProviderSpawnTransitionStateTreeTaskInstanceData
/// Size: 0x0020 (0x000000 - 0x000020)
class FJunoVillagerProviderSpawnTransitionStateTreeTaskInstanceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(TWeakObjectPtr<AJunoEncounterStaticPointProvider*>) VillagerProvider                                   OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class AActor*)                             UserActor                                                   OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(TWeakObjectPtr<AActor*>)                   Villager                                                    OFFSET(get<T>, {0x10, 8, 0, 0})
};

/// Struct /Script/JunoEncountersPOIRuntime.JunoVillagerProviderSpawnTransitionStateTreeTask
/// Size: 0x0008 (0x000020 - 0x000028)
class FJunoVillagerProviderSpawnTransitionStateTreeTask : public FStateTreeTaskCommonBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FStateTreeStateLink)                       TransitionTo                                                OFFSET(getStruct<T>, {0x20, 2, 0, 0})
};

