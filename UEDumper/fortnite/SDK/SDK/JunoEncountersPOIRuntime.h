
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
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
public:
};

/// Class /Script/JunoEncountersPOIRuntime.JunoPOIEncounterPersistenceFeatureData_Container
/// Size: 0x0000 (0x0001E0 - 0x0001E0)
class UJunoPOIEncounterPersistenceFeatureData_Container : public UJunoBasePFWPersistenceFeatureDataContainer
{ 
public:
};

/// Struct /Script/JunoEncountersPOIRuntime.JunoPOIEncounterSaveData
/// Size: 0x0100 (0x000000 - 0x000100)
struct FJunoPOIEncounterSaveData
{ 
	bool                                               bEncounterChosen;                                           // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	SDK_UNDEFINED(32,14435) /* TWeakObjectPtr<UEncounterItemDefinition*> */ __um(ChosenEncounterDefinition);       // 0x0008   (0x0020)  
	SDK_UNDEFINED(32,14436) /* TWeakObjectPtr<UEncounterFactionData*> */ __um(ChosenFaction);                      // 0x0028   (0x0020)  
	int32_t                                            ChosenVariant;                                              // 0x0048   (0x0004)  
	FDataRegistryId                                    EncounterRow;                                               // 0x004C   (0x0008)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0054   (0x0004)  MISSED
	SDK_UNDEFINED(80,14437) /* TMap<FGameplayTag, FPersistenceFrameworkDataTableRowHandle> */ __um(Variables);     // 0x0058   (0x0050)  
	SDK_UNDEFINED(80,14438) /* TMap<FGameplayTag, int32_t> */ __um(PersistentValues);                              // 0x00A8   (0x0050)  
	bool                                               bIsPOISetup;                                                // 0x00F8   (0x0001)  
	bool                                               bEncounterFinished;                                         // 0x00F9   (0x0001)  
	bool                                               bFactionChosen;                                             // 0x00FA   (0x0001)  
	unsigned char                                      UnknownData02_6[0x5];                                       // 0x00FB   (0x0005)  MISSED
};

/// Class /Script/JunoEncountersPOIRuntime.JunoPOIEncounterPlayspaceComponent
/// Size: 0x0230 (0x0000F8 - 0x000328)
class UJunoPOIEncounterPlayspaceComponent : public UJunoConnectedActorLevelPlayspaceComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x00F8   (0x0008)  MISSED
	SDK_UNDEFINED(32,14439) /* TWeakObjectPtr<UClass*> */ __um(EncounterPrefabClass);                              // 0x0100   (0x0020)  
	TArray<FGameplayTagQuery>                          VariantQueries;                                             // 0x0120   (0x0010)  
	SDK_UNDEFINED(8,14440) /* TWeakObjectPtr<AJunoPOIGameplayVolume*> */ __um(POIPlayspaceVolume);                 // 0x0130   (0x0008)  
	SDK_UNDEFINED(8,14441) /* TWeakObjectPtr<AJunoPOIEncounterPrefab*> */ __um(EncounterPrefab);                   // 0x0138   (0x0008)  
	unsigned char                                      UnknownData01_5[0x18];                                      // 0x0140   (0x0018)  MISSED
	FJunoPOIEncounterSaveData                          EncounterConfigData;                                        // 0x0158   (0x0100)  
	SDK_UNDEFINED(32,14442) /* TWeakObjectPtr<UDataTable*> */ __um(EncounterCategoryTable);                        // 0x0258   (0x0020)  
	unsigned char                                      UnknownData02_6[0xB0];                                      // 0x0278   (0x00B0)  MISSED
};

/// Class /Script/JunoEncountersPOIRuntime.JunoSpawnActorTaskHelper
/// Size: 0x0000 (0x000038 - 0x000038)
class UJunoSpawnActorTaskHelper : public USpawnActorTaskHelper
{ 
public:
};

/// Struct /Script/JunoEncountersPOIRuntime.JunoEncounterConditionalTags
/// Size: 0x0028 (0x000000 - 0x000028)
struct FJunoEncounterConditionalTags
{ 
	EJunoBiome                                         Biome;                                                      // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	FGameplayTagContainer                              TagsToApply;                                                // 0x0008   (0x0020)  
};

/// Class /Script/JunoEncountersPOIRuntime.JunoEncounterStaticPointProvider
/// Size: 0x0070 (0x000390 - 0x000400)
class AJunoEncounterStaticPointProvider : public AEncounterStaticPointProvider
{ 
public:
	unsigned char                                      UnknownData00_3[0x10];                                      // 0x0390   (0x0010)  MISSED
	FJunoLivingWorldPointProviderEventLimiter          EventLimiter;                                               // 0x03A0   (0x0020)  
	TArray<FJunoEncounterConditionalTags>              ConditionalTags;                                            // 0x03C0   (0x0010)  
	FGuid                                              SavedActorGuid;                                             // 0x03D0   (0x0010)  
	unsigned char                                      UnknownData01_6[0x20];                                      // 0x03E0   (0x0020)  MISSED
};

/// Class /Script/JunoEncountersPOIRuntime.JunoPOIEncounterPersistenceFeatureData
/// Size: 0x0108 (0x000040 - 0x000148)
class UJunoPOIEncounterPersistenceFeatureData : public UJunoBasePFWPersistenceFeatureData
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0040   (0x0008)  MISSED
	FJunoPOIEncounterSaveData                          SavedEncounterState;                                        // 0x0048   (0x0100)  
};

/// Class /Script/JunoEncountersPOIRuntime.JunoPOIEncounterPersistenceFeatureDataActor
/// Size: 0x0108 (0x0002D0 - 0x0003D8)
class AJunoPOIEncounterPersistenceFeatureDataActor : public AJunoPersistenceFeatureDataActor
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x02D0   (0x0008)  MISSED
	FJunoPOIEncounterSaveData                          SavedEncounterState;                                        // 0x02D8   (0x0100)  
};

/// Class /Script/JunoEncountersPOIRuntime.JunoPOIEncounterPersistenceFeatureDataInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoPOIEncounterPersistenceFeatureDataInterface : public UInterface
{ 
public:
};

/// Class /Script/JunoEncountersPOIRuntime.JunoPOIEncounterPrefab
/// Size: 0x0010 (0x0009C8 - 0x0009D8)
class AJunoPOIEncounterPrefab : public ALivingWorldEncounterPrefab
{ 
public:
	bool                                               bEncounterShouldBeLoaded;                                   // 0x09C8   (0x0001)  
	bool                                               bEncounterIsInitialized;                                    // 0x09C9   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x09CA   (0x0002)  MISSED
	SDK_UNDEFINED(8,14443) /* TWeakObjectPtr<UJunoPOIEncounterPlayspaceComponent*> */ __um(POIPlayspaceComponent); // 0x09CC   (0x0008)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x09D4   (0x0004)  MISSED


	/// Functions
	// Function /Script/JunoEncountersPOIRuntime.JunoPOIEncounterPrefab.OnRep_EncounterShouldBeLoaded
	// void OnRep_EncounterShouldBeLoaded();                                                                                 // [0x887d078] Final|Native|Private 
	// Function /Script/JunoEncountersPOIRuntime.JunoPOIEncounterPrefab.OnRep_EncounterInitialized
	// void OnRep_EncounterInitialized();                                                                                    // [0xb4e4558] Final|Native|Private 
};

/// Class /Script/JunoEncountersPOIRuntime.JunoPOIEncounterSpawner
/// Size: 0x0018 (0x000290 - 0x0002A8)
class AJunoPOIEncounterSpawner : public AActor
{ 
public:
	SDK_UNDEFINED(8,14444) /* TWeakObjectPtr<UJunoPOIEncounterPlayspaceComponent*> */ __um(POIEncountersPlayspace); // 0x0290   (0x0008)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0298   (0x0010)  MISSED
};

/// Struct /Script/JunoEncountersPOIRuntime.JunoEnableVillagerProviderStateTreeTaskInstanceData
/// Size: 0x0018 (0x000000 - 0x000018)
struct FJunoEnableVillagerProviderStateTreeTaskInstanceData
{ 
	SDK_UNDEFINED(8,14445) /* TWeakObjectPtr<AJunoEncounterStaticPointProvider*> */ __um(VillagerProvider);        // 0x0000   (0x0008)  
	bool                                               bEnableProvider;                                            // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0009   (0x0007)  MISSED
	class AActor*                                      UserActor;                                                  // 0x0010   (0x0008)  
};

/// Struct /Script/JunoEncountersPOIRuntime.JunoEnableVillagerProviderStateTreeTask
/// Size: 0x0000 (0x000020 - 0x000020)
struct FJunoEnableVillagerProviderStateTreeTask : FStateTreeTaskCommonBase
{ 
};

/// Struct /Script/JunoEncountersPOIRuntime.JunoGetVillagerProviderStateTreeTaskInstanceData
/// Size: 0x0058 (0x000000 - 0x000058)
struct FJunoGetVillagerProviderStateTreeTaskInstanceData
{ 
	FGameplayTagQuery                                  ProviderTagQuery;                                           // 0x0000   (0x0048)  
	class AActor*                                      UserActor;                                                  // 0x0048   (0x0008)  
	SDK_UNDEFINED(8,14446) /* TWeakObjectPtr<AJunoEncounterStaticPointProvider*> */ __um(VillagerProvider);        // 0x0050   (0x0008)  
};

/// Struct /Script/JunoEncountersPOIRuntime.JunoGetVillagerProviderStateTreeTask
/// Size: 0x0000 (0x000020 - 0x000020)
struct FJunoGetVillagerProviderStateTreeTask : FStateTreeTaskCommonBase
{ 
};

/// Struct /Script/JunoEncountersPOIRuntime.JunoPOIEncounterCategoryRow
/// Size: 0x0088 (0x000008 - 0x000090)
struct FJunoPOIEncounterCategoryRow : FTableRowBase
{ 
	SDK_UNDEFINED(32,14447) /* TWeakObjectPtr<UDataRegistry*> */ __um(POIEncounterRegistry);                       // 0x0008   (0x0020)  
	FGameplayTagQuery                                  RequiredCapabilities;                                       // 0x0028   (0x0048)  
	FWorldConditionQueryDefinition                     WorldConditionDefinition;                                   // 0x0070   (0x0018)  
	float                                              Weight;                                                     // 0x0088   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x008C   (0x0004)  MISSED
};

/// Struct /Script/JunoEncountersPOIRuntime.JunoPOIEncounterPersistenceFeatureData_InGameClass_PersistentInfo
/// Size: 0x0100 (0x000000 - 0x000100)
struct FJunoPOIEncounterPersistenceFeatureData_InGameClass_PersistentInfo
{ 
	FJunoPOIEncounterSaveData                          SavedEncounterState;                                        // 0x0000   (0x0100)  
};

/// Struct /Script/JunoEncountersPOIRuntime.JunoPOIDestroyActorRetainmentEntry
/// Size: 0x0008 (0x000000 - 0x000008)
struct FJunoPOIDestroyActorRetainmentEntry
{ 
	int32_t                                            Count;                                                      // 0x0000   (0x0004)  
	float                                              Weight;                                                     // 0x0004   (0x0004)  
};

/// Struct /Script/JunoEncountersPOIRuntime.JunoPOIDestroyActorInfo
/// Size: 0x0058 (0x000000 - 0x000058)
struct FJunoPOIDestroyActorInfo
{ 
	FGameplayTagQuery                                  DestroyActorQuery;                                          // 0x0000   (0x0048)  
	TArray<FJunoPOIDestroyActorRetainmentEntry>        RetainmentEntries;                                          // 0x0048   (0x0010)  
};

/// Struct /Script/JunoEncountersPOIRuntime.JunoPOIHLODActorInfo
/// Size: 0x0068 (0x000000 - 0x000068)
struct FJunoPOIHLODActorInfo
{ 
	SDK_UNDEFINED(32,14448) /* TWeakObjectPtr<UClass*> */ __um(HLODActorClass);                                    // 0x0000   (0x0020)  
	FGameplayTagQuery                                  HLODActorAnchorQuery;                                       // 0x0020   (0x0048)  
};

/// Struct /Script/JunoEncountersPOIRuntime.JunoPOIEncounterRow
/// Size: 0x00C0 (0x000008 - 0x0000C8)
struct FJunoPOIEncounterRow : FTableRowBase
{ 
	class UEncounterItemDefinition*                    EncounterDefinition;                                        // 0x0008   (0x0008)  
	SDK_UNDEFINED(32,14449) /* TWeakObjectPtr<UDataRegistry*> */ __um(FactionRegistry);                            // 0x0010   (0x0020)  
	FGameplayTagQuery                                  RequiredCapabilities;                                       // 0x0030   (0x0048)  
	FWorldConditionQueryDefinition                     WorldConditionDefinition;                                   // 0x0078   (0x0018)  
	TArray<FJunoPOIHLODActorInfo>                      HLODActorsEntries;                                          // 0x0090   (0x0010)  
	TArray<FJunoPOIDestroyActorInfo>                   DestroyActorsEntries;                                       // 0x00A0   (0x0010)  
	TArray<FInstancedStruct>                           POIVariables;                                               // 0x00B0   (0x0010)  
	float                                              Weight;                                                     // 0x00C0   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00C4   (0x0004)  MISSED
};

/// Struct /Script/JunoEncountersPOIRuntime.JunoSpawnActorStateTreeTaskInstanceData
/// Size: 0x00F8 (0x000000 - 0x0000F8)
struct FJunoSpawnActorStateTreeTaskInstanceData
{ 
	SDK_UNDEFINED(32,14450) /* TWeakObjectPtr<UClass*> */ __um(ActorClass);                                        // 0x0000   (0x0020)  
	FGameplayTagQuery                                  AnchorQuery;                                                // 0x0020   (0x0048)  
	FVector                                            AnchorOffset;                                               // 0x0068   (0x0018)  
	bool                                               bEnablePhysics;                                             // 0x0080   (0x0001)  
	bool                                               bAttachEncounterVolume;                                     // 0x0081   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x0082   (0x0006)  MISSED
	FGameplayTagContainer                              ActorTags;                                                  // 0x0088   (0x0020)  
	FGameplayTagContainer                              ActorIdentifierTags;                                        // 0x00A8   (0x0020)  
	ESpawnActorPersistenceBehavior                     PersistenceBehavior;                                        // 0x00C8   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x00C9   (0x0003)  MISSED
	FGameplayTag                                       PersistenceID;                                              // 0x00CC   (0x0004)  
	bool                                               bWaitForSpawnedActor;                                       // 0x00D0   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x00D1   (0x0003)  MISSED
	SDK_UNDEFINED(8,14451) /* TWeakObjectPtr<AActor*> */ __um(SpawnedActor);                                       // 0x00D4   (0x0008)  
	unsigned char                                      UnknownData03_5[0x4];                                       // 0x00DC   (0x0004)  MISSED
	class AActor*                                      UserActor;                                                  // 0x00E0   (0x0008)  
	class UJunoSpawnActorTaskHelper*                   JunoSpawnActorHelper;                                       // 0x00E8   (0x0008)  
	unsigned char                                      UnknownData04_6[0x8];                                       // 0x00F0   (0x0008)  MISSED
};

/// Struct /Script/JunoEncountersPOIRuntime.JunoSpawnActorStateTreeTask
/// Size: 0x0000 (0x000020 - 0x000020)
struct FJunoSpawnActorStateTreeTask : FStateTreeTaskCommonBase
{ 
};

/// Struct /Script/JunoEncountersPOIRuntime.JunoSpawnedActorMakePersistentStateTreeTaskInstanceData
/// Size: 0x0058 (0x000000 - 0x000058)
struct FJunoSpawnedActorMakePersistentStateTreeTaskInstanceData
{ 
	FGameplayTagQuery                                  ActorQuery;                                                 // 0x0000   (0x0048)  
	bool                                               bMakeTransient;                                             // 0x0048   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0049   (0x0007)  MISSED
	class AActor*                                      UserActor;                                                  // 0x0050   (0x0008)  
};

/// Struct /Script/JunoEncountersPOIRuntime.JunoSpawnedActorMakePersistentStateTreeTask
/// Size: 0x0000 (0x000020 - 0x000020)
struct FJunoSpawnedActorMakePersistentStateTreeTask : FStateTreeTaskCommonBase
{ 
};

/// Struct /Script/JunoEncountersPOIRuntime.FindPrefabSpawnedActorStateTreeTaskInstanceData
/// Size: 0x0020 (0x000000 - 0x000020)
struct FFindPrefabSpawnedActorStateTreeTaskInstanceData
{ 
	class UClass*                                      MustBeOfClass;                                              // 0x0000   (0x0008)  
	class AActor*                                      UserActor;                                                  // 0x0008   (0x0008)  
	SDK_UNDEFINED(8,14452) /* TWeakObjectPtr<AActor*> */ __um(Actor);                                              // 0x0010   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0018   (0x0008)  MISSED
};

/// Struct /Script/JunoEncountersPOIRuntime.FindPrefabSpawnedActorStateTreeTask
/// Size: 0x0008 (0x000020 - 0x000028)
struct FFindPrefabSpawnedActorStateTreeTask : FStateTreeTaskCommonBase
{ 
	FStateTreeStateLink                                TransitionTo;                                               // 0x0020   (0x0002)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x0022   (0x0006)  MISSED
};

/// Struct /Script/JunoEncountersPOIRuntime.JunoVillagerProviderSpawnTransitionStateTreeTaskInstanceData
/// Size: 0x0020 (0x000000 - 0x000020)
struct FJunoVillagerProviderSpawnTransitionStateTreeTaskInstanceData
{ 
	SDK_UNDEFINED(8,14453) /* TWeakObjectPtr<AJunoEncounterStaticPointProvider*> */ __um(VillagerProvider);        // 0x0000   (0x0008)  
	class AActor*                                      UserActor;                                                  // 0x0008   (0x0008)  
	SDK_UNDEFINED(8,14454) /* TWeakObjectPtr<AActor*> */ __um(Villager);                                           // 0x0010   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0018   (0x0008)  MISSED
};

/// Struct /Script/JunoEncountersPOIRuntime.JunoVillagerProviderSpawnTransitionStateTreeTask
/// Size: 0x0008 (0x000020 - 0x000028)
struct FJunoVillagerProviderSpawnTransitionStateTreeTask : FStateTreeTaskCommonBase
{ 
	FStateTreeStateLink                                TransitionTo;                                               // 0x0020   (0x0002)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x0022   (0x0006)  MISSED
};

