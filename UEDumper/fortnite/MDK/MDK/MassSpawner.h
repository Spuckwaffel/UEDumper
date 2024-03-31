
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: AIModule
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: MassEntity
/// dependency: StructUtils
/// dependency: ZoneGraph

/// Class /Script/MassSpawner.MassEntityTraitBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UMassEntityTraitBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/MassSpawner.MassAssortedFragmentsTrait
/// Size: 0x0020 (0x000028 - 0x000048)
class UMassAssortedFragmentsTrait : public UMassEntityTraitBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(TArray<FInstancedStruct>)                  Fragments                                                   OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(TArray<FInstancedStruct>)                  Tags                                                        OFFSET(get<T>, {0x38, 16, 0, 0})
};

/// Class /Script/MassSpawner.MassEntityConfigAsset
/// Size: 0x0030 (0x000030 - 0x000060)
class UMassEntityConfigAsset : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FMassEntityConfig)                         Config                                                      OFFSET(getStruct<T>, {0x30, 48, 0, 0})
};

/// Class /Script/MassSpawner.MassEntitySpawnDataGeneratorBase
/// Size: 0x0008 (0x000028 - 0x000030)
class UMassEntitySpawnDataGeneratorBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(int32_t)                                   RandomSelectionSeed                                         OFFSET(get<int32_t>, {0x28, 4, 0, 0})
	DMember(bool)                                      bUseCustomSeed                                              OFFSET(get<bool>, {0x2C, 1, 1, 0})
};

/// Class /Script/MassSpawner.MassEntityEQSSpawnPointsGenerator
/// Size: 0x0048 (0x000030 - 0x000078)
class UMassEntityEQSSpawnPointsGenerator : public UMassEntitySpawnDataGeneratorBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	SMember(FEQSParametrizedQueryExecutionRequest)     EQSRequest                                                  OFFSET(getStruct<T>, {0x30, 72, 0, 0})
};

/// Class /Script/MassSpawner.MassEntityTemplateRegistry
/// Size: 0x0000 (0x000028 - 0x000028)
class UMassEntityTemplateRegistry : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/MassSpawner.MassEntityZoneGraphSpawnPointsGenerator
/// Size: 0x0018 (0x000030 - 0x000048)
class UMassEntityZoneGraphSpawnPointsGenerator : public UMassEntitySpawnDataGeneratorBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FZoneGraphTagFilter)                       TagFilter                                                   OFFSET(getStruct<T>, {0x30, 12, 0, 0})
	DMember(float)                                     MinGap                                                      OFFSET(get<float>, {0x3C, 4, 0, 0})
	DMember(float)                                     MaxGap                                                      OFFSET(get<float>, {0x40, 4, 0, 0})
};

/// Class /Script/MassSpawner.MassSpawner
/// Size: 0x00A8 (0x000290 - 0x000338)
class AMassSpawner : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 824;

public:
	SMember(FMulticastInlineDelegate)                  OnSpawningFinishedEvent                                     OFFSET(getStruct<T>, {0x290, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnDespawningFinishedEvent                                   OFFSET(getStruct<T>, {0x2A0, 16, 0, 0})
	DMember(int32_t)                                   Count                                                       OFFSET(get<int32_t>, {0x2B0, 4, 0, 0})
	CMember(TArray<FMassSpawnedEntityType>)            EntityTypes                                                 OFFSET(get<T>, {0x2B8, 16, 0, 0})
	CMember(TArray<FMassSpawnDataGenerator>)           SpawnDataGenerators                                         OFFSET(get<T>, {0x2C8, 16, 0, 0})
	DMember(bool)                                      bAutoSpawnOnBeginPlay                                       OFFSET(get<bool>, {0x2D8, 1, 1, 0})
	DMember(bool)                                      bOverrideSchematics                                         OFFSET(get<bool>, {0x2D8, 1, 1, 1})
	CMember(TArray<class UMassProcessor*>)             PostSpawnProcessors                                         OFFSET(get<T>, {0x2E0, 16, 0, 0})
	DMember(float)                                     SpawningCountScale                                          OFFSET(get<float>, {0x2F0, 4, 0, 0})


	/// Functions
	// Function /Script/MassSpawner.MassSpawner.UnloadConfig
	// void UnloadConfig();                                                                                                     // [0xadcfdf4] Final|Native|Public|BlueprintCallable 
	// Function /Script/MassSpawner.MassSpawner.ScaleSpawningCount
	// void ScaleSpawningCount(float Scale);                                                                                    // [0xadcfd30] Final|Native|Public|BlueprintCallable 
	// Function /Script/MassSpawner.MassSpawner.GetSpawningCountScale
	// float GetSpawningCountScale();                                                                                           // [0xa694f94] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MassSpawner.MassSpawner.GetCount
	// int32_t GetCount();                                                                                                      // [0x8b13cc8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MassSpawner.MassSpawner.DoSpawning
	// void DoSpawning();                                                                                                       // [0xadcfd1c] Final|Native|Public|BlueprintCallable 
	// Function /Script/MassSpawner.MassSpawner.DoDespawning
	// void DoDespawning();                                                                                                     // [0xadcfd08] Final|Native|Public|BlueprintCallable 
	// Function /Script/MassSpawner.MassSpawner.ClearTemplates
	// void ClearTemplates();                                                                                                   // [0xadcfcf4] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/MassSpawner.MassSpawnerSubsystem
/// Size: 0x0088 (0x000038 - 0x0000C0)
class UMassSpawnerSubsystem : public UMassSubsystemBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	CMember(TArray<class UMassProcessor*>)             SpawnDataInitializers                                       OFFSET(get<T>, {0x38, 16, 0, 0})
};

/// Class /Script/MassSpawner.MassSpawnLocationProcessor
/// Size: 0x02B0 (0x0000C0 - 0x000370)
class UMassSpawnLocationProcessor : public UMassProcessor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 880;

public:
};

/// Class /Script/MassSpawner.MassTranslator
/// Size: 0x0020 (0x0000C0 - 0x0000E0)
class UMassTranslator : public UMassProcessor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
};

/// Struct /Script/MassSpawner.MassEntityConfig
/// Size: 0x0030 (0x000000 - 0x000030)
class FMassEntityConfig : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(class UMassEntityConfigAsset*)             Parent                                                      OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(TArray<class UMassEntityTraitBase*>)       Traits                                                      OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(class UObject*)                            ConfigOwner                                                 OFFSET(get<T>, {0x18, 8, 0, 0})
	SMember(FGuid)                                     ConfigGuid                                                  OFFSET(getStruct<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/MassSpawner.MassEntitySpawnDataGeneratorResult
/// Size: 0x0030 (0x000000 - 0x000030)
class FMassEntitySpawnDataGeneratorResult : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FInstancedStruct)                          SpawnData                                                   OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	CMember(class UClass*)                             SpawnDataProcessor                                          OFFSET(get<T>, {0x10, 8, 0, 0})
	CMember(TArray<class UClass*>)                     PostSpawnProcessors                                         OFFSET(get<T>, {0x18, 16, 0, 0})
	DMember(int32_t)                                   EntityConfigIndex                                           OFFSET(get<int32_t>, {0x28, 4, 0, 0})
	DMember(int32_t)                                   NumEntities                                                 OFFSET(get<int32_t>, {0x2C, 4, 0, 0})
};

/// Struct /Script/MassSpawner.MassEntityTemplateID
/// Size: 0x0020 (0x000000 - 0x000020)
class FMassEntityTemplateID : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FGuid)                                     ConfigGuid                                                  OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	DMember(uint32_t)                                  FlavorHash                                                  OFFSET(get<uint32_t>, {0x10, 4, 0, 0})
	DMember(uint64_t)                                  TotalHash                                                   OFFSET(get<uint64_t>, {0x18, 8, 0, 0})
};

/// Struct /Script/MassSpawner.MassEntityTemplateData
/// Size: 0x0100 (0x000000 - 0x000100)
class FMassEntityTemplateData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
};

/// Struct /Script/MassSpawner.MassTransformsSpawnData
/// Size: 0x0018 (0x000000 - 0x000018)
class FMassTransformsSpawnData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/MassSpawner.MassSpawnedEntityType
/// Size: 0x0030 (0x000000 - 0x000030)
class FMassSpawnedEntityType : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(TWeakObjectPtr<UMassEntityConfigAsset*>)   EntityConfig                                                OFFSET(get<T>, {0x0, 32, 0, 0})
	DMember(float)                                     Proportion                                                  OFFSET(get<float>, {0x20, 4, 0, 0})
	CMember(class UMassEntityConfigAsset*)             EntityConfigPtr                                             OFFSET(get<T>, {0x28, 8, 0, 0})
};

/// Struct /Script/MassSpawner.MassSpawnDataGenerator
/// Size: 0x0018 (0x000000 - 0x000018)
class FMassSpawnDataGenerator : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(class UClass*)                             GeneratorClass                                              OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class UMassEntitySpawnDataGeneratorBase*)  GeneratorInstance                                           OFFSET(get<T>, {0x8, 8, 0, 0})
	DMember(float)                                     Proportion                                                  OFFSET(get<float>, {0x10, 4, 0, 0})
};

/// Struct /Script/MassSpawner.ReplicationTemplateIDFragment
/// Size: 0x001F (0x000001 - 0x000020)
class FReplicationTemplateIDFragment : public FMassFragment
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FMassEntityTemplateID)                     ID                                                          OFFSET(getStruct<T>, {0x0, 32, 0, 0})
};

/// Enum /Script/MassSpawner.EMassTranslationDirection
/// Size: 0x06
enum class EMassTranslationDirection : uint8_t
{
	EMassTranslationDirection__None                                                  = 0,
	EMassTranslationDirection__InitializationOnly                                    = 1,
	EMassTranslationDirection__ActorToMass                                           = 2,
	EMassTranslationDirection__MassToActor                                           = 4,
	EMassTranslationDirection__BothWays                                              = 6,
	EMassTranslationDirection__EMassTranslationDirection_MAX                         = 7
};

