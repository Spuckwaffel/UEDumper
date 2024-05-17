
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
/// Size: 0x0270 (0x0000F8 - 0x000368)
class UJunoPOIEncounterPlayspaceComponent : public UFortPlayspaceComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 872;

public:
	CMember(TWeakObjectPtr<UClass*>)                   EncounterPrefabClass                                        OFFSET(get<T>, {0x100, 32, 0, 0})
	CMember(TArray<FGameplayTagQuery>)                 VariantQueries                                              OFFSET(get<T>, {0x120, 16, 0, 0})
	CMember(TWeakObjectPtr<AJunoPOIGameplayVolume*>)   POIPlayspaceVolume                                          OFFSET(get<T>, {0x130, 8, 0, 0})
	CMember(TWeakObjectPtr<AJunoPOIEncounterPrefab*>)  EncounterPrefab                                             OFFSET(get<T>, {0x138, 8, 0, 0})
	SMember(FJunoPOIEncounterSaveData)                 EncounterConfigData                                         OFFSET(getStruct<T>, {0x158, 296, 0, 0})
	CMember(TWeakObjectPtr<UDataTable*>)               EncounterCategoryTable                                      OFFSET(get<T>, {0x280, 32, 0, 0})
};

/// Class /Script/JunoEncountersPOIRuntime.JunoSpawnActorTaskHelper
/// Size: 0x0000 (0x000038 - 0x000038)
class UJunoSpawnActorTaskHelper : public USpawnActorTaskHelper
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Script/JunoEncountersPOIRuntime.JunoWaitForCampActorTaskHelper
/// Size: 0x0070 (0x000028 - 0x000098)
class UJunoWaitForCampActorTaskHelper : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
};

/// Class /Script/JunoEncountersPOIRuntime.EncounterCaveGameplayVolume
/// Size: 0x0000 (0x000438 - 0x000438)
class AEncounterCaveGameplayVolume : public AEncounterGameplayVolume
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1080;

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
/// Size: 0x0128 (0x000040 - 0x000168)
class UJunoPOIEncounterPersistenceFeatureData : public UJunoBasePFWPersistenceFeatureData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 360;

public:
	SMember(FJunoPOIEncounterSaveData)                 SavedEncounterState                                         OFFSET(getStruct<T>, {0x40, 296, 0, 0})
};

/// Class /Script/JunoEncountersPOIRuntime.JunoPOIEncounterPrefab
/// Size: 0x0010 (0x0009D0 - 0x0009E0)
class AJunoPOIEncounterPrefab : public ALivingWorldEncounterPrefab
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2528;

public:
	DMember(bool)                                      bEncounterShouldBeLoaded                                    OFFSET(get<bool>, {0x9D0, 1, 0, 0})
	DMember(bool)                                      bEncounterIsInitialized                                     OFFSET(get<bool>, {0x9D1, 1, 0, 0})
	CMember(TWeakObjectPtr<UJunoPOIEncounterPlayspaceComponent*>) POIPlayspaceComponent                            OFFSET(get<T>, {0x9D4, 8, 0, 0})


	/// Functions
	// Function /Script/JunoEncountersPOIRuntime.JunoPOIEncounterPrefab.OnRep_EncounterShouldBeLoaded
	// void OnRep_EncounterShouldBeLoaded();                                                                                    // [0x92a2b3c] Final|Native|Private 
	// Function /Script/JunoEncountersPOIRuntime.JunoPOIEncounterPrefab.OnRep_EncounterInitialized
	// void OnRep_EncounterInitialized();                                                                                       // [0xcd35bd0] Final|Native|Private 
};

/// Class /Script/JunoEncountersPOIRuntime.JunoPOIEncounterSpawner
/// Size: 0x0028 (0x000290 - 0x0002B8)
class AJunoPOIEncounterSpawner : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 696;

public:
	CMember(TWeakObjectPtr<UJunoPOIEncounterPlayspaceComponent*>) POIEncountersPlayspace                           OFFSET(get<T>, {0x298, 8, 0, 0})
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

/// Struct /Script/JunoEncountersPOIRuntime.JunoCampGetPersistentTagsStateTreeTaskInstanceData
/// Size: 0x0028 (0x000000 - 0x000028)
class FJunoCampGetPersistentTagsStateTreeTaskInstanceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FGameplayTagContainer)                     Value                                                       OFFSET(getStruct<T>, {0x0, 32, 0, 0})
	CMember(class AActor*)                             UserActor                                                   OFFSET(get<T>, {0x20, 8, 0, 0})
};

/// Struct /Script/JunoEncountersPOIRuntime.JunoCampGetPersistentTagsStateTreeTask
/// Size: 0x0000 (0x000020 - 0x000020)
class FJunoCampGetPersistentTagsStateTreeTask : public FStateTreeTaskCommonBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/JunoEncountersPOIRuntime.JunoEnableCaveExitGateStateTreeTaskInstanceData
/// Size: 0x0018 (0x000000 - 0x000018)
class FJunoEnableCaveExitGateStateTreeTaskInstanceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(class AActor*)                             UserActor                                                   OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(TArray<TWeakObjectPtr<UFortActorComponent_ToggleState*>>) GateActors                                   OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/JunoEncountersPOIRuntime.JunoEnableCaveExitGateStateTreeTask
/// Size: 0x0000 (0x000020 - 0x000020)
class FJunoEnableCaveExitGateStateTreeTask : public FStateTreeTaskCommonBase
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
/// Size: 0x0098 (0x000008 - 0x0000A0)
class FJunoPOIEncounterCategoryRow : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	SMember(FSoftDataRegistryOrTable)                  POIEncounterRegistry                                        OFFSET(getStruct<T>, {0x8, 48, 0, 0})
	SMember(FGameplayTagQuery)                         RequiredCapabilities                                        OFFSET(getStruct<T>, {0x38, 72, 0, 0})
	SMember(FWorldConditionQueryDefinition)            WorldConditionDefinition                                    OFFSET(getStruct<T>, {0x80, 24, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x98, 4, 0, 0})
};

/// Struct /Script/JunoEncountersPOIRuntime.JunoPOIEncounterPersistenceFeatureData_InGameClass_PersistentInfo
/// Size: 0x0128 (0x000000 - 0x000128)
class FJunoPOIEncounterPersistenceFeatureData_InGameClass_PersistentInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
	SMember(FJunoPOIEncounterSaveData)                 SavedEncounterState                                         OFFSET(getStruct<T>, {0x0, 296, 0, 0})
};

/// Struct /Script/JunoEncountersPOIRuntime.JunoPOIEncounterSaveData
/// Size: 0x0128 (0x000000 - 0x000128)
class FJunoPOIEncounterSaveData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
	DMember(bool)                                      bEncounterChosen                                            OFFSET(get<bool>, {0x0, 1, 0, 0})
	CMember(TWeakObjectPtr<UEncounterItemDefinition*>) ChosenEncounterDefinition                                   OFFSET(get<T>, {0x8, 32, 0, 0})
	CMember(TWeakObjectPtr<UEncounterFactionData*>)    ChosenFaction                                               OFFSET(get<T>, {0x28, 32, 0, 0})
	DMember(int32_t)                                   ChosenVariant                                               OFFSET(get<int32_t>, {0x48, 4, 0, 0})
	SMember(FDataRegistryOrTableRow)                   SelectedEncounterRow                                        OFFSET(getStruct<T>, {0x50, 32, 0, 0})
	CMember(TMap<FGameplayTag, FPersistenceFrameworkDataTableRowHandle>) Variables                                 OFFSET(get<T>, {0x70, 80, 0, 0})
	CMember(TMap<FGameplayTag, int32_t>)               PersistentValues                                            OFFSET(get<T>, {0xC0, 80, 0, 0})
	DMember(bool)                                      bIsPOISetup                                                 OFFSET(get<bool>, {0x110, 1, 0, 0})
	DMember(bool)                                      bEncounterFinished                                          OFFSET(get<bool>, {0x111, 1, 0, 0})
	DMember(int64_t)                                   LastFinishTime                                              OFFSET(get<int64_t>, {0x118, 8, 0, 0})
	DMember(bool)                                      bFactionChosen                                              OFFSET(get<bool>, {0x120, 1, 0, 0})
};

/// Struct /Script/JunoEncountersPOIRuntime.JunoPOIEncounterPersistenceFeatureData_InGameClass_PersistentInfo_v0
/// Size: 0x0100 (0x000000 - 0x000100)
class FJunoPOIEncounterPersistenceFeatureData_InGameClass_PersistentInfo_v0 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	SMember(FJunoPOIEncounterSaveData_v0)              SavedEncounterState                                         OFFSET(getStruct<T>, {0x0, 256, 0, 0})
};

/// Struct /Script/JunoEncountersPOIRuntime.JunoPOIEncounterSaveData_v0
/// Size: 0x0100 (0x000000 - 0x000100)
class FJunoPOIEncounterSaveData_v0 : public MDKBase
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
/// Size: 0x0108 (0x000008 - 0x000110)
class FJunoPOIEncounterRow : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
	CMember(class UEncounterItemDefinition*)           EncounterDefinition                                         OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(TWeakObjectPtr<UDataRegistry*>)            FactionRegistry                                             OFFSET(get<T>, {0x10, 32, 0, 0})
	SMember(FGameplayTagQuery)                         RequiredCapabilities                                        OFFSET(getStruct<T>, {0x30, 72, 0, 0})
	SMember(FGameplayTagQuery)                         FactionRequirements                                         OFFSET(getStruct<T>, {0x78, 72, 0, 0})
	SMember(FWorldConditionQueryDefinition)            WorldConditionDefinition                                    OFFSET(getStruct<T>, {0xC0, 24, 0, 0})
	CMember(TArray<FJunoPOIHLODActorInfo>)             HLODActorsEntries                                           OFFSET(get<T>, {0xD8, 16, 0, 0})
	CMember(TArray<FJunoPOIDestroyActorInfo>)          DestroyActorsEntries                                        OFFSET(get<T>, {0xE8, 16, 0, 0})
	CMember(TArray<FInstancedStruct>)                  POIVariables                                                OFFSET(get<T>, {0xF8, 16, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x108, 4, 0, 0})
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

/// Struct /Script/JunoEncountersPOIRuntime.JunoWaitForCampActorStateTreeTaskInstanceData
/// Size: 0x0060 (0x000000 - 0x000060)
class FJunoWaitForCampActorStateTreeTaskInstanceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FGameplayTagQuery)                         CampTagQuery                                                OFFSET(getStruct<T>, {0x0, 72, 0, 0})
	CMember(TWeakObjectPtr<AActor*>)                   CampActor                                                   OFFSET(get<T>, {0x48, 8, 0, 0})
	CMember(class AActor*)                             UserActor                                                   OFFSET(get<T>, {0x50, 8, 0, 0})
	CMember(class UJunoWaitForCampActorTaskHelper*)    JunoWaitForCampActorHelper                                  OFFSET(get<T>, {0x58, 8, 0, 0})
};

/// Struct /Script/JunoEncountersPOIRuntime.JunoWaitForCampActorStateTreeTask
/// Size: 0x0000 (0x000020 - 0x000020)
class FJunoWaitForCampActorStateTreeTask : public FStateTreeTaskCommonBase
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

/// Enum /Script/JunoEncountersPOIRuntime.EJunoPOIEncounterState
/// Size: 0x06
enum class EJunoPOIEncounterState : uint8_t
{
	EJunoPOIEncounterState__Invalid                                                  = 0,
	EJunoPOIEncounterState__Initialized                                              = 1,
	EJunoPOIEncounterState__PersistentDataReady                                      = 2,
	EJunoPOIEncounterState__Idle                                                     = 3,
	EJunoPOIEncounterState__Ready                                                    = 4,
	EJunoPOIEncounterState__Active                                                   = 5
};

