
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: AIModule
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: MassEntity
/// dependency: StructUtils
/// dependency: ZoneGraph

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

/// Class /Script/MassSpawner.MassEntityTraitBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UMassEntityTraitBase : public UObject
{ 
public:
};

/// Class /Script/MassSpawner.MassAssortedFragmentsTrait
/// Size: 0x0020 (0x000028 - 0x000048)
class UMassAssortedFragmentsTrait : public UMassEntityTraitBase
{ 
public:
	TArray<FInstancedStruct>                           Fragments;                                                  // 0x0028   (0x0010)  
	TArray<FInstancedStruct>                           Tags;                                                       // 0x0038   (0x0010)  
};

/// Struct /Script/MassSpawner.MassEntityConfig
/// Size: 0x0030 (0x000000 - 0x000030)
struct FMassEntityConfig
{ 
	class UMassEntityConfigAsset*                      Parent;                                                     // 0x0000   (0x0008)  
	TArray<class UMassEntityTraitBase*>                Traits;                                                     // 0x0008   (0x0010)  
	class UObject*                                     ConfigOwner;                                                // 0x0018   (0x0008)  
	FGuid                                              ConfigGuid;                                                 // 0x0020   (0x0010)  
};

/// Class /Script/MassSpawner.MassEntityConfigAsset
/// Size: 0x0030 (0x000030 - 0x000060)
class UMassEntityConfigAsset : public UDataAsset
{ 
public:
	FMassEntityConfig                                  Config;                                                     // 0x0030   (0x0030)  
};

/// Class /Script/MassSpawner.MassEntitySpawnDataGeneratorBase
/// Size: 0x0008 (0x000028 - 0x000030)
class UMassEntitySpawnDataGeneratorBase : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	int32_t                                            RandomSelectionSeed;                                        // 0x0028   (0x0004)  
	bool                                               bUseCustomSeed : 1;                                         // 0x002C:0 (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x002D   (0x0003)  MISSED
};

/// Class /Script/MassSpawner.MassEntityEQSSpawnPointsGenerator
/// Size: 0x0048 (0x000030 - 0x000078)
class UMassEntityEQSSpawnPointsGenerator : public UMassEntitySpawnDataGeneratorBase
{ 
public:
	FEQSParametrizedQueryExecutionRequest              EQSRequest;                                                 // 0x0030   (0x0048)  
};

/// Class /Script/MassSpawner.MassEntityTemplateRegistry
/// Size: 0x0000 (0x000028 - 0x000028)
class UMassEntityTemplateRegistry : public UObject
{ 
public:
};

/// Class /Script/MassSpawner.MassEntityZoneGraphSpawnPointsGenerator
/// Size: 0x0018 (0x000030 - 0x000048)
class UMassEntityZoneGraphSpawnPointsGenerator : public UMassEntitySpawnDataGeneratorBase
{ 
public:
	FZoneGraphTagFilter                                TagFilter;                                                  // 0x0030   (0x000C)  
	float                                              MinGap;                                                     // 0x003C   (0x0004)  
	float                                              MaxGap;                                                     // 0x0040   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0044   (0x0004)  MISSED
};

/// Struct /Script/MassSpawner.MassSpawnedEntityType
/// Size: 0x0030 (0x000000 - 0x000030)
struct FMassSpawnedEntityType
{ 
	SDK_UNDEFINED(32,14514) /* TWeakObjectPtr<UMassEntityConfigAsset*> */ __um(EntityConfig);                      // 0x0000   (0x0020)  
	float                                              Proportion;                                                 // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0024   (0x0004)  MISSED
	class UMassEntityConfigAsset*                      EntityConfigPtr;                                            // 0x0028   (0x0008)  
};

/// Struct /Script/MassSpawner.MassSpawnDataGenerator
/// Size: 0x0018 (0x000000 - 0x000018)
struct FMassSpawnDataGenerator
{ 
	class UClass*                                      GeneratorClass;                                             // 0x0000   (0x0008)  
	class UMassEntitySpawnDataGeneratorBase*           GeneratorInstance;                                          // 0x0008   (0x0008)  
	float                                              Proportion;                                                 // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Class /Script/MassSpawner.MassSpawner
/// Size: 0x00A8 (0x000290 - 0x000338)
class AMassSpawner : public AActor
{ 
public:
	SDK_UNDEFINED(16,14515) /* FMulticastInlineDelegate */ __um(OnSpawningFinishedEvent);                          // 0x0290   (0x0010)  
	SDK_UNDEFINED(16,14516) /* FMulticastInlineDelegate */ __um(OnDespawningFinishedEvent);                        // 0x02A0   (0x0010)  
	int32_t                                            Count;                                                      // 0x02B0   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x02B4   (0x0004)  MISSED
	TArray<FMassSpawnedEntityType>                     EntityTypes;                                                // 0x02B8   (0x0010)  
	TArray<FMassSpawnDataGenerator>                    SpawnDataGenerators;                                        // 0x02C8   (0x0010)  
	bool                                               bAutoSpawnOnBeginPlay : 1;                                  // 0x02D8:0 (0x0001)  
	bool                                               bOverrideSchematics : 1;                                    // 0x02D8:1 (0x0001)  
	unsigned char                                      UnknownData01_4[0x7];                                       // 0x02D9   (0x0007)  MISSED
	TArray<class UMassProcessor*>                      PostSpawnProcessors;                                        // 0x02E0   (0x0010)  
	float                                              SpawningCountScale;                                         // 0x02F0   (0x0004)  
	unsigned char                                      UnknownData02_6[0x44];                                      // 0x02F4   (0x0044)  MISSED


	/// Functions
	// Function /Script/MassSpawner.MassSpawner.UnloadConfig
	// void UnloadConfig();                                                                                                  // [0xa0f08d4] Final|Native|Public|BlueprintCallable 
	// Function /Script/MassSpawner.MassSpawner.ScaleSpawningCount
	// void ScaleSpawningCount(float Scale);                                                                                 // [0xa0f0854] Final|Native|Public|BlueprintCallable 
	// Function /Script/MassSpawner.MassSpawner.GetSpawningCountScale
	// float GetSpawningCountScale();                                                                                        // [0x9b869d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MassSpawner.MassSpawner.GetCount
	// int32_t GetCount();                                                                                                   // [0x85b0444] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MassSpawner.MassSpawner.DoSpawning
	// void DoSpawning();                                                                                                    // [0xa0f0840] Final|Native|Public|BlueprintCallable 
	// Function /Script/MassSpawner.MassSpawner.DoDespawning
	// void DoDespawning();                                                                                                  // [0xa0f082c] Final|Native|Public|BlueprintCallable 
	// Function /Script/MassSpawner.MassSpawner.ClearTemplates
	// void ClearTemplates();                                                                                                // [0xa0f0818] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/MassSpawner.MassSpawnerSubsystem
/// Size: 0x0088 (0x000038 - 0x0000C0)
class UMassSpawnerSubsystem : public UMassSubsystemBase
{ 
public:
	TArray<class UMassProcessor*>                      SpawnDataInitializers;                                      // 0x0038   (0x0010)  
	unsigned char                                      UnknownData00_6[0x78];                                      // 0x0048   (0x0078)  MISSED
};

/// Class /Script/MassSpawner.MassSpawnLocationProcessor
/// Size: 0x02B0 (0x0000C0 - 0x000370)
class UMassSpawnLocationProcessor : public UMassProcessor
{ 
public:
	unsigned char                                      UnknownData00_1[0x2B0];                                     // 0x00C0   (0x02B0)  MISSED
};

/// Class /Script/MassSpawner.MassTranslator
/// Size: 0x0020 (0x0000C0 - 0x0000E0)
class UMassTranslator : public UMassProcessor
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x00C0   (0x0020)  MISSED
};

/// Struct /Script/MassSpawner.MassEntitySpawnDataGeneratorResult
/// Size: 0x0030 (0x000000 - 0x000030)
struct FMassEntitySpawnDataGeneratorResult
{ 
	FInstancedStruct                                   SpawnData;                                                  // 0x0000   (0x0010)  
	class UClass*                                      SpawnDataProcessor;                                         // 0x0010   (0x0008)  
	TArray<class UClass*>                              PostSpawnProcessors;                                        // 0x0018   (0x0010)  
	int32_t                                            EntityConfigIndex;                                          // 0x0028   (0x0004)  
	int32_t                                            NumEntities;                                                // 0x002C   (0x0004)  
};

/// Struct /Script/MassSpawner.MassEntityTemplateID
/// Size: 0x0020 (0x000000 - 0x000020)
struct FMassEntityTemplateID
{ 
	FGuid                                              ConfigGuid;                                                 // 0x0000   (0x0010)  
	uint32_t                                           FlavorHash;                                                 // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0014   (0x0004)  MISSED
	uint64_t                                           TotalHash;                                                  // 0x0018   (0x0008)  
};

/// Struct /Script/MassSpawner.MassEntityTemplateData
/// Size: 0x0100 (0x000000 - 0x000100)
struct FMassEntityTemplateData
{ 
	unsigned char                                      UnknownData00_2[0x100];                                     // 0x0000   (0x0100)  MISSED
};

/// Struct /Script/MassSpawner.MassTransformsSpawnData
/// Size: 0x0018 (0x000000 - 0x000018)
struct FMassTransformsSpawnData
{ 
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x0000   (0x0018)  MISSED
};

/// Struct /Script/MassSpawner.ReplicationTemplateIDFragment
/// Size: 0x001F (0x000001 - 0x000020)
struct FReplicationTemplateIDFragment : FMassFragment
{ 
	FMassEntityTemplateID                              ID;                                                         // 0x0000   (0x0020)  
};

