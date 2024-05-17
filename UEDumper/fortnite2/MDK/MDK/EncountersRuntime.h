
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: AIModule
/// dependency: CoreUObject
/// dependency: DataRegistry
/// dependency: Engine
/// dependency: FortniteAI
/// dependency: FortniteGame
/// dependency: GameplayAbilities
/// dependency: GameplayStateTreeModule
/// dependency: GameplayTags
/// dependency: ItemizationCoreRuntime
/// dependency: LagerRuntime
/// dependency: McpProfileSys
/// dependency: ModularGameplay
/// dependency: PlayspaceSystem
/// dependency: StateTreeModule
/// dependency: StructUtils
/// dependency: WorldConditions

/// Class /Script/EncountersRuntime.EncounterGameplayCueActor
/// Size: 0x0000 (0x000290 - 0x000290)
class AEncounterGameplayCueActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 656;

public:
};

/// Class /Script/EncountersRuntime.EncounterMobAnchor
/// Size: 0x0020 (0x000290 - 0x0002B0)
class AEncounterMobAnchor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 688;

public:
	SMember(FGameplayTagContainer)                     FilterTags                                                  OFFSET(getStruct<T>, {0x290, 32, 0, 0})
};

/// Class /Script/EncountersRuntime.EncounterMobManagerComponent
/// Size: 0x0178 (0x0000A0 - 0x000218)
class UEncounterMobManagerComponent : public UGameFrameworkComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 536;

public:
	CMember(TArray<FEncounterMobInstance>)             SpawnedMobs                                                 OFFSET(get<T>, {0xA0, 16, 0, 0})
	CMember(TArray<FEncounterMobSpawnData>)            MobEncounterSpawnData                                       OFFSET(get<T>, {0xB0, 16, 0, 0})
	SMember(FEncounterMobSpawnInfo)                    DefaultMobSpawnInfo                                         OFFSET(getStruct<T>, {0xC0, 160, 0, 0})
	SMember(FScalableFloat)                            LWMDensityWeight                                            OFFSET(getStruct<T>, {0x160, 40, 0, 0})
	SMember(FScalableFloat)                            LWMDensityRange                                             OFFSET(getStruct<T>, {0x188, 40, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnEncounterStarted                                          OFFSET(getStruct<T>, {0x1B0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnEncounterPaused                                           OFFSET(getStruct<T>, {0x1C0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnEncounterResumed                                          OFFSET(getStruct<T>, {0x1D0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnEncounterActorSpawned                                     OFFSET(getStruct<T>, {0x1E0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnEncounterActorDead                                        OFFSET(getStruct<T>, {0x1F0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnEncounterEnded                                            OFFSET(getStruct<T>, {0x200, 16, 0, 0})
	CMember(TWeakObjectPtr<ALivingWorldEncounterPrefab*>) EncounterPrefab                                          OFFSET(get<T>, {0x210, 8, 0, 0})


	/// Functions
	// Function /Script/EncountersRuntime.EncounterMobManagerComponent.StartMobEncounter
	// bool StartMobEncounter(FGameplayTag& MobIdentifier);                                                                     // [0xbd2d550] Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EncountersRuntime.EncounterMobManagerComponent.ResumeMobEncounter
	// void ResumeMobEncounter(FGameplayTag& MobIdentifier);                                                                    // [0xbd2d488] Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EncountersRuntime.EncounterMobManagerComponent.PauseMobEncounter
	// void PauseMobEncounter(FGameplayTag& MobIdentifier);                                                                     // [0xbd2d3c0] Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EncountersRuntime.EncounterMobManagerComponent.OnMobPawnEndPlay
	// void OnMobPawnEndPlay(class AActor* Mob, TEnumAsByte<EEndPlayReason> EndPlayReason);                                     // [0xbd2d234] Final|Native|Private 
	// Function /Script/EncountersRuntime.EncounterMobManagerComponent.OnMobActorSpawn
	// void OnMobActorSpawn(class AActor* SpawnedActor, class UFortAthenaLivingWorldEventData* EventData);                      // [0xbd2cf40] Final|Native|Private 
	// Function /Script/EncountersRuntime.EncounterMobManagerComponent.OnMobActorDied
	// void OnMobActorDied(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, FVector HitLocation, class UPrimitiveComponent* HitComponent, FName BoneName, FVector Momentum); // [0xbd2cb98] Final|Native|Private|HasDefaults 
	// Function /Script/EncountersRuntime.EncounterMobManagerComponent.OnEncounterStarted__DelegateSignature
	// void OnEncounterStarted__DelegateSignature(FGameplayTag MobIdentifier);                                                  // [0x228deb8] MulticastDelegate|Public|Delegate 
	// Function /Script/EncountersRuntime.EncounterMobManagerComponent.OnEncounterResumed__DelegateSignature
	// void OnEncounterResumed__DelegateSignature(FGameplayTag MobIdentifier);                                                  // [0x228deb8] MulticastDelegate|Public|Delegate 
	// Function /Script/EncountersRuntime.EncounterMobManagerComponent.OnEncounterPaused__DelegateSignature
	// void OnEncounterPaused__DelegateSignature(FGameplayTag MobIdentifier);                                                   // [0x228deb8] MulticastDelegate|Public|Delegate 
	// Function /Script/EncountersRuntime.EncounterMobManagerComponent.OnEncounterEnded__DelegateSignature
	// void OnEncounterEnded__DelegateSignature(FGameplayTag MobIdentifier);                                                    // [0x228deb8] MulticastDelegate|Public|Delegate 
	// Function /Script/EncountersRuntime.EncounterMobManagerComponent.OnEncounterActorSpawned__DelegateSignature
	// void OnEncounterActorSpawned__DelegateSignature(FGameplayTag MobIdentifier, class AActor* SpawnedActor);                 // [0x228deb8] MulticastDelegate|Public|Delegate 
	// Function /Script/EncountersRuntime.EncounterMobManagerComponent.OnEncounterActorDead__DelegateSignature
	// void OnEncounterActorDead__DelegateSignature(FGameplayTag MobIdentifier, class AActor* DamagedActor, class AActor* DamageCauser); // [0x228deb8] MulticastDelegate|Public|Delegate 
	// Function /Script/EncountersRuntime.EncounterMobManagerComponent.EndMobEncounter
	// void EndMobEncounter(FGameplayTag& MobIdentifier);                                                                       // [0xbd2cad0] Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EncountersRuntime.EncounterMobManagerComponent.EndAndCleanupAllMobEncounters
	// void EndAndCleanupAllMobEncounters();                                                                                    // [0xbd2cabc] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
};

/// Class /Script/EncountersRuntime.EncounterWorldConditionSchema
/// Size: 0x0008 (0x000038 - 0x000040)
class UEncounterWorldConditionSchema : public UWorldConditionSchema
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Script/EncountersRuntime.LWMEncounterInstance
/// Size: 0x00F0 (0x000028 - 0x000118)
class ULWMEncounterInstance : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 280;

public:
	CMember(TWeakObjectPtr<UFortAthenaLivingWorldEncounterInstance*>) LWMInstance                                  OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(TArray<TWeakObjectPtr<AFortPawn*>>)        SpawnedMobPawns                                             OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TWeakObjectPtr<AActor*>)                   EncounterAnchorPoint                                        OFFSET(get<T>, {0x98, 8, 0, 0})
	CMember(TWeakObjectPtr<AActor*>)                   UserActor                                                   OFFSET(get<T>, {0xA0, 8, 0, 0})
	CMember(TArray<TScriptInterface<Class>>)           ActivePointProviderInterfaces                               OFFSET(get<T>, {0xA8, 16, 0, 0})


	/// Functions
	// Function /Script/EncountersRuntime.LWMEncounterInstance.OnMobPawnEndPlay
	// void OnMobPawnEndPlay(class AActor* Mob, TEnumAsByte<EEndPlayReason> EndPlayReason);                                     // [0xbd30770] Final|Native|Public  
	// Function /Script/EncountersRuntime.LWMEncounterInstance.OnMobActorSpawn
	// void OnMobActorSpawn(class AActor* SpawnedActor, class UFortAthenaLivingWorldEventData* EventData);                      // [0xbd305a8] Final|Native|Public  
	// Function /Script/EncountersRuntime.LWMEncounterInstance.OnMobActorDied
	// void OnMobActorDied(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, FVector HitLocation, class UPrimitiveComponent* HitComponent, FName BoneName, FVector Momentum); // [0xbd30160] Final|Native|Public|HasDefaults 
};

/// Class /Script/EncountersRuntime.SpawnActorTaskHelper
/// Size: 0x0010 (0x000028 - 0x000038)
class USpawnActorTaskHelper : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Script/EncountersRuntime.EncounterActorSpawnerData
/// Size: 0x0050 (0x000050 - 0x0000A0)
class UEncounterActorSpawnerData : public UFortAthenaActorSpawnerData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	SMember(FEncounterPrefabEntry)                     EncounterEntry                                              OFFSET(getStruct<T>, {0x50, 80, 0, 0})
};

/// Class /Script/EncountersRuntime.EncounterBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UEncounterBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/EncountersRuntime.EncounterBlueprintLibrary.GetRelevantMobManagerComponentForActor
	// class UEncounterMobManagerComponent* GetRelevantMobManagerComponentForActor(class AActor* Actor);                        // [0xbd46f04] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/EncountersRuntime.EncounterFactionData
/// Size: 0x0088 (0x000030 - 0x0000B8)
class UEncounterFactionData : public UPrimaryDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	SMember(FGameplayTagQuery)                         RequiredCapabilities                                        OFFSET(getStruct<T>, {0x30, 72, 0, 0})
	SMember(FGameplayTagContainer)                     FactionCapabilities                                         OFFSET(getStruct<T>, {0x78, 32, 0, 0})
	SMember(FWorldConditionQueryDefinition)            WorldConditionDefinition                                    OFFSET(getStruct<T>, {0x98, 24, 0, 0})
	CMember(class UDataTable*)                         LWMEncounterTable                                           OFFSET(get<T>, {0xB0, 8, 0, 0})
};

/// Class /Script/EncountersRuntime.EncounterGameplayVolume
/// Size: 0x0108 (0x000330 - 0x000438)
class AEncounterGameplayVolume : public AGameplayVolume
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1080;

public:
	CMember(class UEncounterStateTreeComponent*)       EncounterStateTreeComponent                                 OFFSET(get<T>, {0x348, 8, 0, 0})
	CMember(TArray<TScriptInterface<Class>>)           TrackedEncounterPointProviders                              OFFSET(get<T>, {0x358, 16, 0, 0})
	CMember(TArray<TWeakObjectPtr<AEncounterMobAnchor*>>) TrackedEncounterAnchors                                  OFFSET(get<T>, {0x368, 16, 0, 0})
	CMember(TArray<TWeakObjectPtr<ABuildingActor*>>)   TrackedBuildingActors                                       OFFSET(get<T>, {0x378, 16, 0, 0})
	CMember(TArray<TWeakObjectPtr<AFortPlayerController*>>) OverlappingPlayers                                     OFFSET(get<T>, {0x388, 16, 0, 0})
	CMember(TWeakObjectPtr<UOverlapComponent*>)        OverlapComponent                                            OFFSET(get<T>, {0x398, 8, 0, 0})
	CMember(TMap<FString, FString>)                    AllVisitedPlayersMap                                        OFFSET(get<T>, {0x3A0, 80, 0, 0})


	/// Functions
	// Function /Script/EncountersRuntime.EncounterGameplayVolume.OnCleanup
	// void OnCleanup();                                                                                                        // [0x228deb8] Event|Public|BlueprintEvent 
	// Function /Script/EncountersRuntime.EncounterGameplayVolume.IsDoneCleaningUp
	// bool IsDoneCleaningUp();                                                                                                 // [0xbd47ae8] Native|Event|Public|BlueprintEvent|Const 
};

/// Class /Script/EncountersRuntime.EncounterItemDefinition
/// Size: 0x0220 (0x000180 - 0x0003A0)
class UEncounterItemDefinition : public UFortItemDefinition
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 928;

public:
	DMember(bool)                                      bAutoHandleSuccessFailure                                   OFFSET(get<bool>, {0x180, 1, 0, 0})
	CMember(TWeakObjectPtr<UWorld*>)                   Level                                                       OFFSET(get<T>, {0x188, 32, 0, 0})
	CMember(TWeakObjectPtr<UStateTree*>)               StateTreeOverride                                           OFFSET(get<T>, {0x1A8, 32, 0, 0})
	SMember(FGameplayCueTag)                           ProximityGameplayCueTag                                     OFFSET(getStruct<T>, {0x1C8, 4, 0, 0})
	SMember(FGameplayCueTag)                           ActorCleanupGameplayCueTag                                  OFFSET(getStruct<T>, {0x1CC, 4, 0, 0})
	CMember(TArray<FName>)                             SuccessRewards                                              OFFSET(get<T>, {0x1D0, 16, 0, 0})
	SMember(FEncounterRewardBehavior)                  SuccessRewardBehavior                                       OFFSET(getStruct<T>, {0x1E0, 128, 0, 0})
	SMember(FGameplayCueTag)                           ActorSuccessGameplayCueTag                                  OFFSET(getStruct<T>, {0x260, 4, 0, 0})
	SMember(FGameplayCueTag)                           PlayerSuccessGameplayCueTag                                 OFFSET(getStruct<T>, {0x264, 4, 0, 0})
	CMember(TArray<FName>)                             FailureRewards                                              OFFSET(get<T>, {0x268, 16, 0, 0})
	SMember(FEncounterRewardBehavior)                  FailureRewardBehavior                                       OFFSET(getStruct<T>, {0x278, 128, 0, 0})
	SMember(FGameplayCueTag)                           ActorFailureGameplayCueTag                                  OFFSET(getStruct<T>, {0x2F8, 4, 0, 0})
	SMember(FGameplayCueTag)                           PlayerFailureGameplayCueTag                                 OFFSET(getStruct<T>, {0x2FC, 4, 0, 0})
	SMember(FScalableFloat)                            LWMDensityWeight                                            OFFSET(getStruct<T>, {0x300, 40, 0, 0})
	SMember(FScalableFloat)                            LWMDensityRange                                             OFFSET(getStruct<T>, {0x328, 40, 0, 0})
	DMember(bool)                                      bUseGlobalLWMBudget                                         OFFSET(get<bool>, {0x350, 1, 0, 0})
	CMember(TArray<FInstancedStruct>)                  Vars                                                        OFFSET(get<T>, {0x358, 16, 0, 0})
	CMember(TArray<FInstancedStruct>)                  VariableSelections                                          OFFSET(get<T>, {0x368, 16, 0, 0})
	SMember(FWorldConditionQueryDefinition)            CanSpawnWorldConditionDefinition                            OFFSET(getStruct<T>, {0x378, 24, 0, 0})
	CMember(TArray<FFortAthenaLivingWorldPrefabActorSpawnerData>) ActorSpawnerDatas                                OFFSET(get<T>, {0x390, 16, 0, 0})
};

/// Class /Script/EncountersRuntime.EncounterManagerComponent
/// Size: 0x0230 (0x0000A0 - 0x0002D0)
class UEncounterManagerComponent : public UGameFrameworkComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 720;

public:
	CMember(TWeakObjectPtr<AEncounterGameplayVolume*>) EncounterVolume                                             OFFSET(get<T>, {0xA0, 8, 0, 0})
	CMember(class UEncounterItemDefinition*)           EncounterDefinition                                         OFFSET(get<T>, {0xA8, 8, 0, 0})
	CMember(TWeakObjectPtr<AActor*>)                   CenterActorOverride                                         OFFSET(get<T>, {0xB0, 8, 0, 0})
	SMember(FDataTableRowHandle)                       PostEncounterLWMEvent                                       OFFSET(getStruct<T>, {0xB8, 16, 0, 0})
	SMember(FDataTableRowHandle)                       PostEncounterLWMCategory                                    OFFSET(getStruct<T>, {0xC8, 16, 0, 0})
	CMember(TSet<AFortPlayerController*>)              ExplicitContributors                                        OFFSET(get<T>, {0xD8, 80, 0, 0})
	CMember(TArray<FActorIdentifierEntry>)             ActorIdentifiers                                            OFFSET(get<T>, {0x128, 16, 0, 0})
	DMember(bool)                                      bHasHandledSuccessFailure                                   OFFSET(get<bool>, {0x138, 1, 0, 0})
	CMember(TArray<FLWMEncounterInfo>)                 EncounterInfos                                              OFFSET(get<T>, {0x140, 16, 0, 0})
	CMember(TArray<FGameplayEffectIdentifierInfo>)     GameplayEffectInfos                                         OFFSET(get<T>, {0x150, 16, 0, 0})
	CMember(TWeakObjectPtr<ALivingWorldEncounterPrefab*>) EncounterPrefab                                          OFFSET(get<T>, {0x160, 8, 0, 0})
	CMember(TWeakObjectPtr<UDataTable*>)               LWMEncounterTable                                           OFFSET(get<T>, {0x168, 32, 0, 0})
	CMember(TWeakObjectPtr<AActor*>)                   LastThreat                                                  OFFSET(get<T>, {0x288, 8, 0, 0})
	CMember(TWeakObjectPtr<AActor*>)                   ReservoirActor                                              OFFSET(get<T>, {0x290, 8, 0, 0})
	CMember(TArray<FTrackedActorInfo>)                 TrackedActorInfos                                           OFFSET(get<T>, {0x298, 16, 0, 0})


	/// Functions
	// Function /Script/EncountersRuntime.EncounterManagerComponent.SetPersistentValue
	// void SetPersistentValue(FGameplayTag& Identifier, int32_t Value);                                                        // [0xbd47c28] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EncountersRuntime.EncounterManagerComponent.RemoveExplicitContributor
	// void RemoveExplicitContributor(class AFortPlayerController* Contributor);                                                // [0xbd47b90] Final|Native|Public|BlueprintCallable 
	// Function /Script/EncountersRuntime.EncounterManagerComponent.OnStateTreeStatusChanged
	// void OnStateTreeStatusChanged(EStateTreeRunStatus Status);                                                               // [0xbd47b10] Final|Native|Private 
	// Function /Script/EncountersRuntime.EncounterManagerComponent.HandleEncounterSuccess
	// void HandleEncounterSuccess(int32_t RewardIndex);                                                                        // [0xbd47a30] Final|Native|Public|BlueprintCallable 
	// Function /Script/EncountersRuntime.EncounterManagerComponent.HandleEncounterFailure
	// void HandleEncounterFailure(int32_t RewardIndex);                                                                        // [0xbd47978] Final|Native|Public|BlueprintCallable 
	// Function /Script/EncountersRuntime.EncounterManagerComponent.GetVariable_TagQuery
	// FGameplayTagQuery GetVariable_TagQuery(FGameplayTag& VarName);                                                           // [0xbd47884] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EncountersRuntime.EncounterManagerComponent.GetVariable_LWMEncounter
	// class UFortAthenaLivingWorldEncounter* GetVariable_LWMEncounter(FGameplayTag& VarName);                                  // [0xbd477ac] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EncountersRuntime.EncounterManagerComponent.GetVariable_ItemDefinition
	// class UFortWorldItemDefinition* GetVariable_ItemDefinition(FGameplayTag& VarName);                                       // [0xbd476d4] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EncountersRuntime.EncounterManagerComponent.GetVariable_Int
	// int32_t GetVariable_Int(FGameplayTag& VarName);                                                                          // [0xbd47600] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EncountersRuntime.EncounterManagerComponent.GetVariable_GameplayTagContainer
	// FGameplayTagContainer GetVariable_GameplayTagContainer(FGameplayTag& VarName);                                           // [0xbd47514] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EncountersRuntime.EncounterManagerComponent.GetVariable_GameplayTag
	// FGameplayTag GetVariable_GameplayTag(FGameplayTag& VarName);                                                             // [0xbd47444] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EncountersRuntime.EncounterManagerComponent.GetVariable_Float
	// float GetVariable_Float(FGameplayTag& VarName);                                                                          // [0xbd4736c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EncountersRuntime.EncounterManagerComponent.GetVariable_Bool
	// bool GetVariable_Bool(FGameplayTag& VarName);                                                                            // [0xbd47298] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EncountersRuntime.EncounterManagerComponent.GetVariable_ActorDescription
	// TArray<FFortAthenaLivingWorldEventDataActorSpawnDescription> GetVariable_ActorDescription(FGameplayTag& VarName);        // [0xbd471b8] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EncountersRuntime.EncounterManagerComponent.GetVariable_ActorClass
	// TWeakObjectPtr<UClass*> GetVariable_ActorClass(FGameplayTag& VarName);                                                   // [0xbd470c4] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EncountersRuntime.EncounterManagerComponent.GetPersistentValue
	// int32_t GetPersistentValue(FGameplayTag& Identifier);                                                                    // [0xbd46e54] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EncountersRuntime.EncounterManagerComponent.AddExplicitContributor
	// void AddExplicitContributor(class AFortPlayerController* Contributor);                                                   // [0xbd46db8] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/EncountersRuntime.EncounterPatrolPathPointProvider
/// Size: 0x0008 (0x000390 - 0x000398)
class AEncounterPatrolPathPointProvider : public AFortAthenaPatrolPathPointProvider
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 920;

public:
};

/// Class /Script/EncountersRuntime.EncounterPointProviderInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UEncounterPointProviderInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/EncountersRuntime.EncounterStateTreeComponent
/// Size: 0x0008 (0x000160 - 0x000168)
class UEncounterStateTreeComponent : public UStateTreeComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 360;

public:
};

/// Class /Script/EncountersRuntime.EncounterStaticPointProvider
/// Size: 0x0008 (0x000388 - 0x000390)
class AEncounterStaticPointProvider : public AFortAthenaLivingWorldStaticPointProvider
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 912;

public:
};

/// Class /Script/EncountersRuntime.EncounterVolumePointProvider
/// Size: 0x0008 (0x0005D8 - 0x0005E0)
class AEncounterVolumePointProvider : public AFortAthenaLivingWorldVolume
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1504;

public:
};

/// Class /Script/EncountersRuntime.FortCheatManager_Encounters
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortCheatManager_Encounters : public UChildCheatManager
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/EncountersRuntime.FortCheatManager_Encounters.EncountersDump
	// void EncountersDump();                                                                                                   // [0x36569a8] Final|BlueprintAuthorityOnly|Exec|Native|Public 
};

/// Class /Script/EncountersRuntime.LivingWorldEncounterPrefab
/// Size: 0x0088 (0x000948 - 0x0009D0)
class ALivingWorldEncounterPrefab : public AFortAthenaLivingWorldPrefab
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2512;

public:
	CMember(TArray<FEncounterPrefabInfo>)              EncounterEntries                                            OFFSET(get<T>, {0x9A0, 16, 0, 0})
	CMember(class UEncounterItemDefinition*)           EncounterDefinition                                         OFFSET(get<T>, {0x9B0, 8, 0, 0})
	CMember(TWeakObjectPtr<AActor*>)                   ReservoirActorOverride                                      OFFSET(get<T>, {0x9B8, 8, 0, 0})
	CMember(TWeakObjectPtr<UEncounterManagerComponent*>) EncounterManager                                          OFFSET(get<T>, {0x9C0, 8, 0, 0})


	/// Functions
	// Function /Script/EncountersRuntime.LivingWorldEncounterPrefab.OnRep_EncounterDefinition
	// void OnRep_EncounterDefinition();                                                                                        // [0x92a2b3c] Final|Native|Private 
};

/// Class /Script/EncountersRuntime.FortVerbProcessor_EncounterCompleted
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UFortVerbProcessor_EncounterCompleted : public UFortObjectiveProcessor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
};

/// Struct /Script/EncountersRuntime.EncounterMobSpawnInfo
/// Size: 0x00A0 (0x000000 - 0x0000A0)
class FEncounterMobSpawnInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	SMember(FScalableFloat)                            LeashRadiusInner                                            OFFSET(getStruct<T>, {0x0, 40, 0, 0})
	SMember(FScalableFloat)                            LeashRadiusOuter                                            OFFSET(getStruct<T>, {0x28, 40, 0, 0})
	CMember(TWeakObjectPtr<AEncounterMobAnchor*>)      EncounterAnchorPoint                                        OFFSET(get<T>, {0x50, 8, 0, 0})
	CMember(EEncounterMobSpawnType)                    MobSpawnType                                                OFFSET(get<T>, {0x58, 4, 0, 0})
	SMember(FGameplayTagContainer)                     PointProviderFilterTags                                     OFFSET(getStruct<T>, {0x60, 32, 0, 0})
	CMember(TArray<TWeakObjectPtr<AFortAthenaLivingWorldStaticPointProvider*>>) StaticPointProviders               OFFSET(get<T>, {0x80, 16, 0, 0})
	CMember(class UEnvQuery*)                          PointProviderEQS                                            OFFSET(get<T>, {0x90, 8, 0, 0})
	CMember(class UClass*)                             PointProviderVolumeClass                                    OFFSET(get<T>, {0x98, 8, 0, 0})
};

/// Struct /Script/EncountersRuntime.EncounterMobSpawnData
/// Size: 0x00E0 (0x000000 - 0x0000E0)
class FEncounterMobSpawnData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	SMember(FString)                                   DevNotes                                                    OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FGameplayTag)                              MobIdentifier                                               OFFSET(getStruct<T>, {0x10, 4, 0, 0})
	DMember(bool)                                      bActiveOnStart                                              OFFSET(get<bool>, {0x14, 1, 0, 0})
	CMember(TWeakObjectPtr<UFortAthenaLivingWorldEncounter*>) MobEncounterData                                     OFFSET(get<T>, {0x18, 32, 0, 0})
	DMember(bool)                                      bOverrideDefaultSpawnInfo                                   OFFSET(get<bool>, {0x38, 1, 0, 0})
	SMember(FEncounterMobSpawnInfo)                    MobSpawnInfo                                                OFFSET(getStruct<T>, {0x40, 160, 0, 0})
};

/// Struct /Script/EncountersRuntime.EncounterMobInstance
/// Size: 0x0058 (0x000000 - 0x000058)
class FEncounterMobInstance : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(class AFortAthenaLivingWorldVolume*)       VolumePointProvider                                         OFFSET(get<T>, {0x18, 8, 0, 0})
	CMember(TArray<TScriptInterface<Class>>)           CurrentPointProviders                                       OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Struct /Script/EncountersRuntime.ActorAddLooseTagsStateTreeTaskInstanceData
/// Size: 0x0030 (0x000000 - 0x000030)
class FActorAddLooseTagsStateTreeTaskInstanceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(TWeakObjectPtr<AActor*>)                   InActor                                                     OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FGameplayTagContainer)                     ActorTags                                                   OFFSET(getStruct<T>, {0x8, 32, 0, 0})
	CMember(class AActor*)                             UserActor                                                   OFFSET(get<T>, {0x28, 8, 0, 0})
};

/// Struct /Script/EncountersRuntime.ActorAddLooseTagsStateTreeTask
/// Size: 0x0000 (0x000020 - 0x000020)
class FActorAddLooseTagsStateTreeTask : public FStateTreeTaskCommonBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/EncountersRuntime.ActorPhysicsStateTreeTaskInstanceData
/// Size: 0x0058 (0x000000 - 0x000058)
class FActorPhysicsStateTreeTaskInstanceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FGameplayTagQuery)                         ActorQuery                                                  OFFSET(getStruct<T>, {0x0, 72, 0, 0})
	DMember(bool)                                      bShouldWakeup                                               OFFSET(get<bool>, {0x48, 1, 0, 0})
	CMember(class AActor*)                             UserActor                                                   OFFSET(get<T>, {0x50, 8, 0, 0})
};

/// Struct /Script/EncountersRuntime.ActorPhysicsStateTreeTask
/// Size: 0x0000 (0x000020 - 0x000020)
class FActorPhysicsStateTreeTask : public FStateTreeTaskCommonBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/EncountersRuntime.AddEncounterPrefabTagStateTreeTaskInstanceData
/// Size: 0x0010 (0x000000 - 0x000010)
class FAddEncounterPrefabTagStateTreeTaskInstanceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FGameplayTag)                              PrefabTag                                                   OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(bool)                                      bRemoveOnExit                                               OFFSET(get<bool>, {0x4, 1, 0, 0})
	CMember(class AActor*)                             UserActor                                                   OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/EncountersRuntime.AddEncounterPrefabTagStateTreeTask
/// Size: 0x0000 (0x000020 - 0x000020)
class FAddEncounterPrefabTagStateTreeTask : public FStateTreeTaskCommonBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/EncountersRuntime.AddGameplayCueStateTreeTaskInstanceData
/// Size: 0x0018 (0x000000 - 0x000018)
class FAddGameplayCueStateTreeTaskInstanceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FGameplayCueTag)                           GameplayCue                                                 OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(TWeakObjectPtr<AActor*>)                   TargetActor                                                 OFFSET(get<T>, {0x4, 8, 0, 0})
	DMember(bool)                                      bIsLooping                                                  OFFSET(get<bool>, {0xC, 1, 0, 0})
	CMember(class AActor*)                             UserActor                                                   OFFSET(get<T>, {0x10, 8, 0, 0})
};

/// Struct /Script/EncountersRuntime.AddGameplayCueStateTreeTask
/// Size: 0x0000 (0x000020 - 0x000020)
class FAddGameplayCueStateTreeTask : public FStateTreeTaskCommonBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/EncountersRuntime.DestroyActorsStateTreeTaskInstanceData
/// Size: 0x0050 (0x000000 - 0x000050)
class FDestroyActorsStateTreeTaskInstanceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FGameplayTagQuery)                         ActorQuery                                                  OFFSET(getStruct<T>, {0x0, 72, 0, 0})
	CMember(class AActor*)                             UserActor                                                   OFFSET(get<T>, {0x48, 8, 0, 0})
};

/// Struct /Script/EncountersRuntime.DestroyActorsStateTreeTask
/// Size: 0x0000 (0x000020 - 0x000020)
class FDestroyActorsStateTreeTask : public FStateTreeTaskCommonBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/EncountersRuntime.EnableEncounterPointProvidersStateTreeTaskInstanceData
/// Size: 0x0058 (0x000000 - 0x000058)
class FEnableEncounterPointProvidersStateTreeTaskInstanceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FGameplayTagQuery)                         ProviderTagQuery                                            OFFSET(getStruct<T>, {0x0, 72, 0, 0})
	DMember(bool)                                      bEnableProvider                                             OFFSET(get<bool>, {0x48, 1, 0, 0})
	CMember(class AActor*)                             UserActor                                                   OFFSET(get<T>, {0x50, 8, 0, 0})
};

/// Struct /Script/EncountersRuntime.EnableEncounterPointProvidersStateTreeTask
/// Size: 0x0000 (0x000020 - 0x000020)
class FEnableEncounterPointProvidersStateTreeTask : public FStateTreeTaskCommonBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/EncountersRuntime.EnableSmartObjectsStateTreeTaskInstanceData
/// Size: 0x0080 (0x000000 - 0x000080)
class FEnableSmartObjectsStateTreeTaskInstanceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	DMember(bool)                                      bUseTagQuery                                                OFFSET(get<bool>, {0x0, 1, 0, 0})
	SMember(FGameplayTagQuery)                         ActorQuery                                                  OFFSET(getStruct<T>, {0x8, 72, 0, 0})
	CMember(class AActor*)                             TargetActor                                                 OFFSET(get<T>, {0x50, 8, 0, 0})
	DMember(bool)                                      bEnable                                                     OFFSET(get<bool>, {0x58, 1, 0, 0})
	CMember(class AActor*)                             UserActor                                                   OFFSET(get<T>, {0x60, 8, 0, 0})
	CMember(TArray<class AActor*>)                     AIActors                                                    OFFSET(get<T>, {0x68, 16, 0, 0})
	SMember(FFortAICommandSOUsageDataBase)             AICommandSOUsageData                                        OFFSET(getStruct<T>, {0x78, 8, 0, 0})
};

/// Struct /Script/EncountersRuntime.EnableSmartObjectsStateTreeTask
/// Size: 0x0000 (0x000020 - 0x000020)
class FEnableSmartObjectsStateTreeTask : public FStateTreeTaskCommonBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/EncountersRuntime.EncounterFactionRow
/// Size: 0x0010 (0x000008 - 0x000018)
class FEncounterFactionRow : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(class UEncounterFactionData*)              FactionData                                                 OFFSET(get<T>, {0x8, 8, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x10, 4, 0, 0})
};

/// Struct /Script/EncountersRuntime.EncounterGetKillCountStateTreeTaskInstanceData
/// Size: 0x0058 (0x000000 - 0x000058)
class FEncounterGetKillCountStateTreeTaskInstanceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FGameplayTagQuery)                         EncounterQuery                                              OFFSET(getStruct<T>, {0x0, 72, 0, 0})
	DMember(int32_t)                                   Value                                                       OFFSET(get<int32_t>, {0x48, 4, 0, 0})
	CMember(class AActor*)                             UserActor                                                   OFFSET(get<T>, {0x50, 8, 0, 0})
};

/// Struct /Script/EncountersRuntime.EncounterGetKillCountStateTreeTask
/// Size: 0x0000 (0x000020 - 0x000020)
class FEncounterGetKillCountStateTreeTask : public FStateTreeTaskCommonBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/EncountersRuntime.EncounterGetPersistentValueStateTreeTaskInstanceData
/// Size: 0x0010 (0x000000 - 0x000010)
class FEncounterGetPersistentValueStateTreeTaskInstanceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FGameplayTag)                              VariableIdentifier                                          OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   Value                                                       OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	CMember(class AActor*)                             UserActor                                                   OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/EncountersRuntime.EncounterGetPersistentValueStateTreeTask
/// Size: 0x0000 (0x000020 - 0x000020)
class FEncounterGetPersistentValueStateTreeTask : public FStateTreeTaskCommonBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/EncountersRuntime.EncounterGetRemainingCountStateTreeTaskInstanceData
/// Size: 0x0058 (0x000000 - 0x000058)
class FEncounterGetRemainingCountStateTreeTaskInstanceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FGameplayTagQuery)                         EncounterQuery                                              OFFSET(getStruct<T>, {0x0, 72, 0, 0})
	DMember(int32_t)                                   Value                                                       OFFSET(get<int32_t>, {0x48, 4, 0, 0})
	CMember(class AActor*)                             UserActor                                                   OFFSET(get<T>, {0x50, 8, 0, 0})
};

/// Struct /Script/EncountersRuntime.EncounterGetRemainingCountStateTreeTask
/// Size: 0x0000 (0x000020 - 0x000020)
class FEncounterGetRemainingCountStateTreeTask : public FStateTreeTaskCommonBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/EncountersRuntime.EncounterGetVariableActorClassStateTreeTaskInstanceData
/// Size: 0x0030 (0x000000 - 0x000030)
class FEncounterGetVariableActorClassStateTreeTaskInstanceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FGameplayTag)                              VariableIdentifier                                          OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   Value                                                       OFFSET(get<T>, {0x8, 32, 0, 0})
	CMember(class AActor*)                             UserActor                                                   OFFSET(get<T>, {0x28, 8, 0, 0})
};

/// Struct /Script/EncountersRuntime.EncounterGetVariableActorClassStateTreeTask
/// Size: 0x0000 (0x000020 - 0x000020)
class FEncounterGetVariableActorClassStateTreeTask : public FStateTreeTaskCommonBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/EncountersRuntime.EncounterGetVariableActorDescriptionStateTreeTaskInstanceData
/// Size: 0x0020 (0x000000 - 0x000020)
class FEncounterGetVariableActorDescriptionStateTreeTaskInstanceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FGameplayTag)                              VariableIdentifier                                          OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(TArray<FFortAthenaLivingWorldEventDataActorSpawnDescription>) Value                                    OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(class AActor*)                             UserActor                                                   OFFSET(get<T>, {0x18, 8, 0, 0})
};

/// Struct /Script/EncountersRuntime.EncounterGetVariableActorDescriptionStateTreeTask
/// Size: 0x0000 (0x000020 - 0x000020)
class FEncounterGetVariableActorDescriptionStateTreeTask : public FStateTreeTaskCommonBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/EncountersRuntime.EncounterGetVariableBoolStateTreeTaskInstanceData
/// Size: 0x0010 (0x000000 - 0x000010)
class FEncounterGetVariableBoolStateTreeTaskInstanceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FGameplayTag)                              VariableIdentifier                                          OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(bool)                                      bValue                                                      OFFSET(get<bool>, {0x4, 1, 0, 0})
	CMember(class AActor*)                             UserActor                                                   OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/EncountersRuntime.EncounterGetVariableBoolStateTreeTask
/// Size: 0x0000 (0x000020 - 0x000020)
class FEncounterGetVariableBoolStateTreeTask : public FStateTreeTaskCommonBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/EncountersRuntime.EncounterGetVariableFloatStateTreeTaskInstanceData
/// Size: 0x0010 (0x000000 - 0x000010)
class FEncounterGetVariableFloatStateTreeTaskInstanceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FGameplayTag)                              VariableIdentifier                                          OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(float)                                     Value                                                       OFFSET(get<float>, {0x4, 4, 0, 0})
	CMember(class AActor*)                             UserActor                                                   OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/EncountersRuntime.EncounterGetVariableFloatStateTreeTask
/// Size: 0x0000 (0x000020 - 0x000020)
class FEncounterGetVariableFloatStateTreeTask : public FStateTreeTaskCommonBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/EncountersRuntime.EncounterGetVariableGameplayTagContainerStateTreeTaskInstanceData
/// Size: 0x0030 (0x000000 - 0x000030)
class FEncounterGetVariableGameplayTagContainerStateTreeTaskInstanceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FGameplayTag)                              VariableIdentifier                                          OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FGameplayTagContainer)                     Value                                                       OFFSET(getStruct<T>, {0x8, 32, 0, 0})
	CMember(class AActor*)                             UserActor                                                   OFFSET(get<T>, {0x28, 8, 0, 0})
};

/// Struct /Script/EncountersRuntime.EncounterGetVariableGameplayTagContainerStateTreeTask
/// Size: 0x0000 (0x000020 - 0x000020)
class FEncounterGetVariableGameplayTagContainerStateTreeTask : public FStateTreeTaskCommonBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/EncountersRuntime.EncounterGetVariableGameplayTagStateTreeTaskInstanceData
/// Size: 0x0010 (0x000000 - 0x000010)
class FEncounterGetVariableGameplayTagStateTreeTaskInstanceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FGameplayTag)                              VariableIdentifier                                          OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FGameplayTag)                              Value                                                       OFFSET(getStruct<T>, {0x4, 4, 0, 0})
	CMember(class AActor*)                             UserActor                                                   OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/EncountersRuntime.EncounterGetVariableGameplayTagStateTreeTask
/// Size: 0x0000 (0x000020 - 0x000020)
class FEncounterGetVariableGameplayTagStateTreeTask : public FStateTreeTaskCommonBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/EncountersRuntime.EncounterGetVariableIntStateTreeTaskInstanceData
/// Size: 0x0010 (0x000000 - 0x000010)
class FEncounterGetVariableIntStateTreeTaskInstanceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FGameplayTag)                              VariableIdentifier                                          OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   Value                                                       OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	CMember(class AActor*)                             UserActor                                                   OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/EncountersRuntime.EncounterGetVariableIntStateTreeTask
/// Size: 0x0000 (0x000020 - 0x000020)
class FEncounterGetVariableIntStateTreeTask : public FStateTreeTaskCommonBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/EncountersRuntime.EncounterGetVariableItemDefinitionStateTreeTaskInstanceData
/// Size: 0x0030 (0x000000 - 0x000030)
class FEncounterGetVariableItemDefinitionStateTreeTaskInstanceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FGameplayTag)                              VariableIdentifier                                          OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(TWeakObjectPtr<UFortWorldItemDefinition*>) Value                                                       OFFSET(get<T>, {0x8, 32, 0, 0})
	CMember(class AActor*)                             UserActor                                                   OFFSET(get<T>, {0x28, 8, 0, 0})
};

/// Struct /Script/EncountersRuntime.EncounterGetVariableItemDefinitionStateTreeTask
/// Size: 0x0000 (0x000020 - 0x000020)
class FEncounterGetVariableItemDefinitionStateTreeTask : public FStateTreeTaskCommonBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/EncountersRuntime.EncounterGetVariableLWMEncounterStateTreeTaskInstanceData
/// Size: 0x0030 (0x000000 - 0x000030)
class FEncounterGetVariableLWMEncounterStateTreeTaskInstanceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FGameplayTag)                              VariableIdentifier                                          OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(TWeakObjectPtr<UFortAthenaLivingWorldEncounter*>) Value                                                OFFSET(get<T>, {0x8, 32, 0, 0})
	CMember(class AActor*)                             UserActor                                                   OFFSET(get<T>, {0x28, 8, 0, 0})
};

/// Struct /Script/EncountersRuntime.EncounterGetVariableLWMEncounterStateTreeTask
/// Size: 0x0000 (0x000020 - 0x000020)
class FEncounterGetVariableLWMEncounterStateTreeTask : public FStateTreeTaskCommonBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/EncountersRuntime.EncounterGetVariableTagQueryStateTreeTaskInstanceData
/// Size: 0x0058 (0x000000 - 0x000058)
class FEncounterGetVariableTagQueryStateTreeTaskInstanceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FGameplayTag)                              VariableIdentifier                                          OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FGameplayTagQuery)                         Value                                                       OFFSET(getStruct<T>, {0x8, 72, 0, 0})
	CMember(class AActor*)                             UserActor                                                   OFFSET(get<T>, {0x50, 8, 0, 0})
};

/// Struct /Script/EncountersRuntime.EncounterGetVariableTagQueryStateTreeTask
/// Size: 0x0000 (0x000020 - 0x000020)
class FEncounterGetVariableTagQueryStateTreeTask : public FStateTreeTaskCommonBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/EncountersRuntime.EncounterGetVariantTagQueryStateTreeTaskInstanceData
/// Size: 0x0098 (0x000000 - 0x000098)
class FEncounterGetVariantTagQueryStateTreeTaskInstanceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	SMember(FGameplayTagQuery)                         BaseTagQuery                                                OFFSET(getStruct<T>, {0x0, 72, 0, 0})
	SMember(FGameplayTagQuery)                         Value                                                       OFFSET(getStruct<T>, {0x48, 72, 0, 0})
	CMember(class AActor*)                             UserActor                                                   OFFSET(get<T>, {0x90, 8, 0, 0})
};

/// Struct /Script/EncountersRuntime.EncounterGetVariantTagQueryStateTreeTask
/// Size: 0x0000 (0x000020 - 0x000020)
class FEncounterGetVariantTagQueryStateTreeTask : public FStateTreeTaskCommonBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/EncountersRuntime.EncounterPrefabEntry
/// Size: 0x0050 (0x000000 - 0x000050)
class FEncounterPrefabEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(class UEncounterItemDefinition*)           EncounterDefinition                                         OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FGameplayTag)                              EncounterIdentifierTag                                      OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	SMember(FScalableFloat)                            Weight                                                      OFFSET(getStruct<T>, {0x10, 40, 0, 0})
	SMember(FWorldConditionQueryDefinition)            CanSpawnCondition                                           OFFSET(getStruct<T>, {0x38, 24, 0, 0})
};

/// Struct /Script/EncountersRuntime.EncounterSelectLWMEncounterStateTreeTaskInstanceData
/// Size: 0x00E8 (0x000000 - 0x0000E8)
class FEncounterSelectLWMEncounterStateTreeTaskInstanceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
	CMember(class UDataRegistry*)                      FactionRegistry                                             OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FGameplayTagContainer)                     Capabilities                                                OFFSET(getStruct<T>, {0x8, 32, 0, 0})
	SMember(FGameplayTagQuery)                         FactionRequirements                                         OFFSET(getStruct<T>, {0x28, 72, 0, 0})
	SMember(FGameplayTagQuery)                         LWMEncounterTagQuery                                        OFFSET(getStruct<T>, {0x70, 72, 0, 0})
	CMember(class AActor*)                             UserActor                                                   OFFSET(get<T>, {0xB8, 8, 0, 0})
	CMember(TWeakObjectPtr<UFortAthenaLivingWorldEncounter*>) LWMEncounter                                         OFFSET(get<T>, {0xC0, 32, 0, 0})
};

/// Struct /Script/EncountersRuntime.EncounterSelectLWMEncounterStateTreeTask
/// Size: 0x0000 (0x000020 - 0x000020)
class FEncounterSelectLWMEncounterStateTreeTask : public FStateTreeTaskCommonBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/EncountersRuntime.EncounterSelectLWMEncounterTableStateTreeTaskInstanceData
/// Size: 0x0038 (0x000000 - 0x000038)
class FEncounterSelectLWMEncounterTableStateTreeTaskInstanceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(class UDataRegistry*)                      FactionRegistry                                             OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FGameplayTagContainer)                     Capabilities                                                OFFSET(getStruct<T>, {0x8, 32, 0, 0})
	CMember(class AActor*)                             UserActor                                                   OFFSET(get<T>, {0x28, 8, 0, 0})
};

/// Struct /Script/EncountersRuntime.EncounterSelectLWMEncounterTableStateTreeTask
/// Size: 0x0000 (0x000020 - 0x000020)
class FEncounterSelectLWMEncounterTableStateTreeTask : public FStateTreeTaskCommonBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/EncountersRuntime.EncounterSetCenterActorStateTreeTaskInstanceData
/// Size: 0x0010 (0x000000 - 0x000010)
class FEncounterSetCenterActorStateTreeTaskInstanceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TWeakObjectPtr<AActor*>)                   CenterActor                                                 OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class AActor*)                             UserActor                                                   OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/EncountersRuntime.EncounterSetCenterActorStateTreeTask
/// Size: 0x0000 (0x000020 - 0x000020)
class FEncounterSetCenterActorStateTreeTask : public FStateTreeTaskCommonBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/EncountersRuntime.EncounterSetPersistentValueStateTreeTaskInstanceData
/// Size: 0x0010 (0x000000 - 0x000010)
class FEncounterSetPersistentValueStateTreeTaskInstanceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FGameplayTag)                              VariableIdentifier                                          OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   Value                                                       OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	CMember(class AActor*)                             UserActor                                                   OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/EncountersRuntime.EncounterSetPersistentValueStateTreeTask
/// Size: 0x0000 (0x000020 - 0x000020)
class FEncounterSetPersistentValueStateTreeTask : public FStateTreeTaskCommonBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/EncountersRuntime.EncounterVariable
/// Size: 0x0010 (0x000000 - 0x000010)
class FEncounterVariable : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FGameplayTag)                              VarName                                                     OFFSET(getStruct<T>, {0x8, 4, 0, 0})
};

/// Struct /Script/EncountersRuntime.EncounterVariableSelections
/// Size: 0x0010 (0x000000 - 0x000010)
class FEncounterVariableSelections : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FGameplayTag)                              VarName                                                     OFFSET(getStruct<T>, {0x8, 4, 0, 0})
};

/// Struct /Script/EncountersRuntime.EncounterVariableSelectionsRow
/// Size: 0x0068 (0x000008 - 0x000070)
class FEncounterVariableSelectionsRow : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FGameplayTagQuery)                         RequiredCapabilities                                        OFFSET(getStruct<T>, {0x8, 72, 0, 0})
	SMember(FWorldConditionQueryDefinition)            WorldConditionDefinition                                    OFFSET(getStruct<T>, {0x50, 24, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x68, 4, 0, 0})
};

/// Struct /Script/EncountersRuntime.EncounterVariableSelectionsRow_ActorClass
/// Size: 0x0010 (0x000070 - 0x000080)
class FEncounterVariableSelectionsRow_ActorClass : public FEncounterVariableSelectionsRow
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FDataTableRowHandle)                       RowValue                                                    OFFSET(getStruct<T>, {0x70, 16, 0, 0})
};

/// Struct /Script/EncountersRuntime.EncounterVariableSelectionsRow_ActorDescription
/// Size: 0x0010 (0x000070 - 0x000080)
class FEncounterVariableSelectionsRow_ActorDescription : public FEncounterVariableSelectionsRow
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FDataTableRowHandle)                       RowValue                                                    OFFSET(getStruct<T>, {0x70, 16, 0, 0})
};

/// Struct /Script/EncountersRuntime.EncounterVariableSelectionsRow_Boolean
/// Size: 0x0010 (0x000070 - 0x000080)
class FEncounterVariableSelectionsRow_Boolean : public FEncounterVariableSelectionsRow
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FDataTableRowHandle)                       RowValue                                                    OFFSET(getStruct<T>, {0x70, 16, 0, 0})
};

/// Struct /Script/EncountersRuntime.EncounterVariableSelectionsRow_Float
/// Size: 0x0010 (0x000070 - 0x000080)
class FEncounterVariableSelectionsRow_Float : public FEncounterVariableSelectionsRow
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FDataTableRowHandle)                       RowValue                                                    OFFSET(getStruct<T>, {0x70, 16, 0, 0})
};

/// Struct /Script/EncountersRuntime.EncounterVariableSelectionsRow_GameplayTag
/// Size: 0x0010 (0x000070 - 0x000080)
class FEncounterVariableSelectionsRow_GameplayTag : public FEncounterVariableSelectionsRow
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FDataTableRowHandle)                       RowValue                                                    OFFSET(getStruct<T>, {0x70, 16, 0, 0})
};

/// Struct /Script/EncountersRuntime.EncounterVariableSelectionsRow_GameplayTagContainer
/// Size: 0x0010 (0x000070 - 0x000080)
class FEncounterVariableSelectionsRow_GameplayTagContainer : public FEncounterVariableSelectionsRow
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FDataTableRowHandle)                       RowValue                                                    OFFSET(getStruct<T>, {0x70, 16, 0, 0})
};

/// Struct /Script/EncountersRuntime.EncounterVariableSelectionsRow_Integer
/// Size: 0x0010 (0x000070 - 0x000080)
class FEncounterVariableSelectionsRow_Integer : public FEncounterVariableSelectionsRow
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FDataTableRowHandle)                       RowValue                                                    OFFSET(getStruct<T>, {0x70, 16, 0, 0})
};

/// Struct /Script/EncountersRuntime.EncounterVariableSelectionsRow_LWMEncounter
/// Size: 0x0010 (0x000070 - 0x000080)
class FEncounterVariableSelectionsRow_LWMEncounter : public FEncounterVariableSelectionsRow
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FDataTableRowHandle)                       RowValue                                                    OFFSET(getStruct<T>, {0x70, 16, 0, 0})
};

/// Struct /Script/EncountersRuntime.EncounterVariableSelectionsRow_TagQuery
/// Size: 0x0010 (0x000070 - 0x000080)
class FEncounterVariableSelectionsRow_TagQuery : public FEncounterVariableSelectionsRow
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FDataTableRowHandle)                       RowValue                                                    OFFSET(getStruct<T>, {0x70, 16, 0, 0})
};

/// Struct /Script/EncountersRuntime.EncounterVariableSelections_ActorClass
/// Size: 0x0008 (0x000010 - 0x000018)
class FEncounterVariableSelections_ActorClass : public FEncounterVariableSelections
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(class UDataTable*)                         ValueChoiceTable                                            OFFSET(get<T>, {0x10, 8, 0, 0})
};

/// Struct /Script/EncountersRuntime.EncounterVariableSelections_ActorDescription
/// Size: 0x0008 (0x000010 - 0x000018)
class FEncounterVariableSelections_ActorDescription : public FEncounterVariableSelections
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(class UDataTable*)                         ValueChoiceTable                                            OFFSET(get<T>, {0x10, 8, 0, 0})
};

/// Struct /Script/EncountersRuntime.EncounterVariableSelections_Boolean
/// Size: 0x0008 (0x000010 - 0x000018)
class FEncounterVariableSelections_Boolean : public FEncounterVariableSelections
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(class UDataTable*)                         ValueChoiceTable                                            OFFSET(get<T>, {0x10, 8, 0, 0})
};

/// Struct /Script/EncountersRuntime.EncounterVariableSelections_Float
/// Size: 0x0008 (0x000010 - 0x000018)
class FEncounterVariableSelections_Float : public FEncounterVariableSelections
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(class UDataTable*)                         ValueChoiceTable                                            OFFSET(get<T>, {0x10, 8, 0, 0})
};

/// Struct /Script/EncountersRuntime.EncounterVariableSelections_GameplayTag
/// Size: 0x0008 (0x000010 - 0x000018)
class FEncounterVariableSelections_GameplayTag : public FEncounterVariableSelections
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(class UDataTable*)                         ValueChoiceTable                                            OFFSET(get<T>, {0x10, 8, 0, 0})
};

/// Struct /Script/EncountersRuntime.EncounterVariableSelections_GameplayTagContainer
/// Size: 0x0008 (0x000010 - 0x000018)
class FEncounterVariableSelections_GameplayTagContainer : public FEncounterVariableSelections
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(class UDataTable*)                         ValueChoiceTable                                            OFFSET(get<T>, {0x10, 8, 0, 0})
};

/// Struct /Script/EncountersRuntime.EncounterVariableSelections_Integer
/// Size: 0x0008 (0x000010 - 0x000018)
class FEncounterVariableSelections_Integer : public FEncounterVariableSelections
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(class UDataTable*)                         ValueChoiceTable                                            OFFSET(get<T>, {0x10, 8, 0, 0})
};

/// Struct /Script/EncountersRuntime.EncounterVariableSelections_LWMEncounter
/// Size: 0x0008 (0x000010 - 0x000018)
class FEncounterVariableSelections_LWMEncounter : public FEncounterVariableSelections
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(class UDataTable*)                         ValueChoiceTable                                            OFFSET(get<T>, {0x10, 8, 0, 0})
};

/// Struct /Script/EncountersRuntime.EncounterVariableSelections_TagQuery
/// Size: 0x0008 (0x000010 - 0x000018)
class FEncounterVariableSelections_TagQuery : public FEncounterVariableSelections
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(class UDataTable*)                         ValueChoiceTable                                            OFFSET(get<T>, {0x10, 8, 0, 0})
};

/// Struct /Script/EncountersRuntime.EncounterVariable_ActorClass
/// Size: 0x0010 (0x000010 - 0x000020)
class FEncounterVariable_ActorClass : public FEncounterVariable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FDataTableRowHandle)                       RowValue                                                    OFFSET(getStruct<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/EncountersRuntime.EncounterVariable_ActorDescription
/// Size: 0x0010 (0x000010 - 0x000020)
class FEncounterVariable_ActorDescription : public FEncounterVariable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FDataTableRowHandle)                       RowValue                                                    OFFSET(getStruct<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/EncountersRuntime.EncounterVariable_Boolean
/// Size: 0x0010 (0x000010 - 0x000020)
class FEncounterVariable_Boolean : public FEncounterVariable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FDataTableRowHandle)                       RowValue                                                    OFFSET(getStruct<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/EncountersRuntime.EncounterVariable_Float
/// Size: 0x0010 (0x000010 - 0x000020)
class FEncounterVariable_Float : public FEncounterVariable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FDataTableRowHandle)                       RowValue                                                    OFFSET(getStruct<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/EncountersRuntime.EncounterVariable_GameplayTag
/// Size: 0x0010 (0x000010 - 0x000020)
class FEncounterVariable_GameplayTag : public FEncounterVariable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FDataTableRowHandle)                       RowValue                                                    OFFSET(getStruct<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/EncountersRuntime.EncounterVariable_GameplayTagContainer
/// Size: 0x0010 (0x000010 - 0x000020)
class FEncounterVariable_GameplayTagContainer : public FEncounterVariable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FDataTableRowHandle)                       RowValue                                                    OFFSET(getStruct<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/EncountersRuntime.EncounterVariable_Integer
/// Size: 0x0010 (0x000010 - 0x000020)
class FEncounterVariable_Integer : public FEncounterVariable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FDataTableRowHandle)                       RowValue                                                    OFFSET(getStruct<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/EncountersRuntime.EncounterVariable_ItemDefinition
/// Size: 0x0010 (0x000010 - 0x000020)
class FEncounterVariable_ItemDefinition : public FEncounterVariable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FDataTableRowHandle)                       RowValue                                                    OFFSET(getStruct<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/EncountersRuntime.EncounterVariable_LWMEncounter
/// Size: 0x0010 (0x000010 - 0x000020)
class FEncounterVariable_LWMEncounter : public FEncounterVariable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FDataTableRowHandle)                       RowValue                                                    OFFSET(getStruct<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/EncountersRuntime.EncounterVariable_TagQuery
/// Size: 0x0010 (0x000010 - 0x000020)
class FEncounterVariable_TagQuery : public FEncounterVariable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FDataTableRowHandle)                       RowValue                                                    OFFSET(getStruct<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/EncountersRuntime.EncounterVarRow
/// Size: 0x0000 (0x000008 - 0x000008)
class FEncounterVarRow : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/EncountersRuntime.EncounterVarRow_ActorClass
/// Size: 0x0020 (0x000008 - 0x000028)
class FEncounterVarRow_ActorClass : public FEncounterVarRow
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(TWeakObjectPtr<UClass*>)                   Value                                                       OFFSET(get<T>, {0x8, 32, 0, 0})
};

/// Struct /Script/EncountersRuntime.EncounterVarRow_ActorDescription
/// Size: 0x0010 (0x000008 - 0x000018)
class FEncounterVarRow_ActorDescription : public FEncounterVarRow
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(TArray<FFortAthenaLivingWorldEventDataActorSpawnDescription>) Value                                    OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/EncountersRuntime.EncounterVarRow_Boolean
/// Size: 0x0008 (0x000008 - 0x000010)
class FEncounterVarRow_Boolean : public FEncounterVarRow
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(bool)                                      bValue                                                      OFFSET(get<bool>, {0x8, 1, 0, 0})
};

/// Struct /Script/EncountersRuntime.EncounterVarRow_Float
/// Size: 0x0008 (0x000008 - 0x000010)
class FEncounterVarRow_Float : public FEncounterVarRow
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(float)                                     Value                                                       OFFSET(get<float>, {0x8, 4, 0, 0})
};

/// Struct /Script/EncountersRuntime.EncounterVarRow_GameplayTag
/// Size: 0x0008 (0x000008 - 0x000010)
class FEncounterVarRow_GameplayTag : public FEncounterVarRow
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FGameplayTag)                              Value                                                       OFFSET(getStruct<T>, {0x8, 4, 0, 0})
};

/// Struct /Script/EncountersRuntime.EncounterVarRow_GameplayTagContainer
/// Size: 0x0020 (0x000008 - 0x000028)
class FEncounterVarRow_GameplayTagContainer : public FEncounterVarRow
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FGameplayTagContainer)                     Value                                                       OFFSET(getStruct<T>, {0x8, 32, 0, 0})
};

/// Struct /Script/EncountersRuntime.EncounterVarRow_Integer
/// Size: 0x0008 (0x000008 - 0x000010)
class FEncounterVarRow_Integer : public FEncounterVarRow
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(int32_t)                                   Value                                                       OFFSET(get<int32_t>, {0x8, 4, 0, 0})
};

/// Struct /Script/EncountersRuntime.EncounterVarRow_ItemDefinition
/// Size: 0x0020 (0x000008 - 0x000028)
class FEncounterVarRow_ItemDefinition : public FEncounterVarRow
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(TWeakObjectPtr<UFortWorldItemDefinition*>) Value                                                       OFFSET(get<T>, {0x8, 32, 0, 0})
};

/// Struct /Script/EncountersRuntime.EncounterVarRow_LWMEncounter
/// Size: 0x0020 (0x000008 - 0x000028)
class FEncounterVarRow_LWMEncounter : public FEncounterVarRow
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(TWeakObjectPtr<UFortAthenaLivingWorldEncounter*>) Value                                                OFFSET(get<T>, {0x8, 32, 0, 0})
};

/// Struct /Script/EncountersRuntime.EncounterVarRow_TagQuery
/// Size: 0x0048 (0x000008 - 0x000050)
class FEncounterVarRow_TagQuery : public FEncounterVarRow
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FGameplayTagQuery)                         Value                                                       OFFSET(getStruct<T>, {0x8, 72, 0, 0})
};

/// Struct /Script/EncountersRuntime.EndAllMobEncountersStateTreeTaskInstanceData
/// Size: 0x0008 (0x000000 - 0x000008)
class FEndAllMobEncountersStateTreeTaskInstanceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(class AActor*)                             UserActor                                                   OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/EncountersRuntime.EndAllMobEncountersStateTreeTask
/// Size: 0x0000 (0x000020 - 0x000020)
class FEndAllMobEncountersStateTreeTask : public FStateTreeTaskCommonBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/EncountersRuntime.FortVerbMessage_EncounterCompleted
/// Size: 0x0050 (0x000078 - 0x0000C8)
class FFortVerbMessage_EncounterCompleted : public FVerbMessage
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	SMember(FSubjectTagsPair)                          EncounterItemDef                                            OFFSET(getStruct<T>, {0x78, 56, 0, 0})
	DMember(bool)                                      bSuccess                                                    OFFSET(get<bool>, {0xB0, 1, 0, 0})
	CMember(TArray<FSubjectTagsPair>)                  EncounterPlayers                                            OFFSET(get<T>, {0xB8, 16, 0, 0})
};

/// Struct /Script/EncountersRuntime.GetAnchorStateTreeTaskInstanceData
/// Size: 0x0058 (0x000000 - 0x000058)
class FGetAnchorStateTreeTaskInstanceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FGameplayTagQuery)                         AnchorQuery                                                 OFFSET(getStruct<T>, {0x0, 72, 0, 0})
	CMember(TWeakObjectPtr<AActor*>)                   AnchorActor                                                 OFFSET(get<T>, {0x48, 8, 0, 0})
	CMember(class AActor*)                             UserActor                                                   OFFSET(get<T>, {0x50, 8, 0, 0})
};

/// Struct /Script/EncountersRuntime.GetAnchorStateTreeTask
/// Size: 0x0000 (0x000020 - 0x000020)
class FGetAnchorStateTreeTask : public FStateTreeTaskCommonBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/EncountersRuntime.GetEncounterActorStateTreeTaskInstanceData
/// Size: 0x0058 (0x000000 - 0x000058)
class FGetEncounterActorStateTreeTaskInstanceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FGameplayTagQuery)                         ActorQuery                                                  OFFSET(getStruct<T>, {0x0, 72, 0, 0})
	CMember(TWeakObjectPtr<AActor*>)                   ChosenActor                                                 OFFSET(get<T>, {0x48, 8, 0, 0})
	CMember(class AActor*)                             UserActor                                                   OFFSET(get<T>, {0x50, 8, 0, 0})
};

/// Struct /Script/EncountersRuntime.GetEncounterActorStateTreeTask
/// Size: 0x0000 (0x000020 - 0x000020)
class FGetEncounterActorStateTreeTask : public FStateTreeTaskCommonBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/EncountersRuntime.LWMEncounterAddGameplayEffectStateTreeTaskInstanceData
/// Size: 0x0088 (0x000000 - 0x000088)
class FLWMEncounterAddGameplayEffectStateTreeTaskInstanceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FGameplayTagQuery)                         EncounterQuery                                              OFFSET(getStruct<T>, {0x0, 72, 0, 0})
	CMember(class UClass*)                             GameplayEffect                                              OFFSET(get<T>, {0x48, 8, 0, 0})
	DMember(bool)                                      bRemoveEffectOnExit                                         OFFSET(get<bool>, {0x50, 1, 0, 0})
	SMember(FGameplayTagContainer)                     IdentifierTags                                              OFFSET(getStruct<T>, {0x58, 32, 0, 0})
	CMember(class AActor*)                             UserActor                                                   OFFSET(get<T>, {0x78, 8, 0, 0})
};

/// Struct /Script/EncountersRuntime.LWMEncounterAddGameplayEffectStateTreeTask
/// Size: 0x0000 (0x000020 - 0x000020)
class FLWMEncounterAddGameplayEffectStateTreeTask : public FStateTreeTaskCommonBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/EncountersRuntime.LWMEncounterAdvanceStateTreeTaskInstanceData
/// Size: 0x0050 (0x000000 - 0x000050)
class FLWMEncounterAdvanceStateTreeTaskInstanceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FGameplayTagQuery)                         EncounterQuery                                              OFFSET(getStruct<T>, {0x0, 72, 0, 0})
	CMember(class AActor*)                             UserActor                                                   OFFSET(get<T>, {0x48, 8, 0, 0})
};

/// Struct /Script/EncountersRuntime.LWMEncounterAdvanceStateTreeTask
/// Size: 0x0000 (0x000020 - 0x000020)
class FLWMEncounterAdvanceStateTreeTask : public FStateTreeTaskCommonBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/EncountersRuntime.LWMEncounterAssignPointProvidersStateTreeTaskInstanceData
/// Size: 0x00A0 (0x000000 - 0x0000A0)
class FLWMEncounterAssignPointProvidersStateTreeTaskInstanceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	SMember(FGameplayTagQuery)                         EncounterQuery                                              OFFSET(getStruct<T>, {0x0, 72, 0, 0})
	SMember(FGameplayTagQuery)                         PatrolPathTagQuery                                          OFFSET(getStruct<T>, {0x48, 72, 0, 0})
	DMember(bool)                                      bUseClosestProvider                                         OFFSET(get<bool>, {0x90, 1, 0, 0})
	CMember(class AActor*)                             UserActor                                                   OFFSET(get<T>, {0x98, 8, 0, 0})
};

/// Struct /Script/EncountersRuntime.LWMEncounterAssignPointProvidersStateTreeTask
/// Size: 0x0000 (0x000020 - 0x000020)
class FLWMEncounterAssignPointProvidersStateTreeTask : public FStateTreeTaskCommonBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/EncountersRuntime.DynamicEncounterEntry
/// Size: 0x0080 (0x000000 - 0x000080)
class FDynamicEncounterEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FString)                                   DebugName                                                   OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	DMember(int32_t)                                   SpawnCount                                                  OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	DMember(int32_t)                                   MaxConcurrentSpawns                                         OFFSET(get<int32_t>, {0x14, 4, 0, 0})
	DMember(bool)                                      bOverrideActorCount                                         OFFSET(get<bool>, {0x18, 1, 0, 0})
	DMember(int32_t)                                   ActorCountOverrideMax                                       OFFSET(get<int32_t>, {0x1C, 4, 0, 0})
	DMember(int32_t)                                   ActorCountOverrideMin                                       OFFSET(get<int32_t>, {0x20, 4, 0, 0})
	DMember(bool)                                      bUseEncounterTagQuery                                       OFFSET(get<bool>, {0x24, 1, 0, 0})
	SMember(FGameplayTagQuery)                         EncounterTagQuery                                           OFFSET(getStruct<T>, {0x28, 72, 0, 0})
	CMember(TArray<FFortAthenaLivingWorldEventDataActorSpawnDescription>) ActorDescriptions                        OFFSET(get<T>, {0x70, 16, 0, 0})
};

/// Struct /Script/EncountersRuntime.LWMEncounterStartSharedStateTreeTaskInstanceData
/// Size: 0x0160 (0x000000 - 0x000160)
class FLWMEncounterStartSharedStateTreeTaskInstanceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
	SMember(FGameplayTagQuery)                         PointProviderTagQuery                                       OFFSET(getStruct<T>, {0x0, 72, 0, 0})
	DMember(bool)                                      bUseVolumeAsAnchor                                          OFFSET(get<bool>, {0x48, 1, 0, 0})
	DMember(bool)                                      bAttachVolumeToSpawn                                        OFFSET(get<bool>, {0x49, 1, 0, 0})
	SMember(FGameplayTagQuery)                         AnchorPointTagQuery                                         OFFSET(getStruct<T>, {0x50, 72, 0, 0})
	SMember(FScalableFloat)                            LeashRadiusInner                                            OFFSET(getStruct<T>, {0x98, 40, 0, 0})
	SMember(FScalableFloat)                            LeashRadiusOuter                                            OFFSET(getStruct<T>, {0xC0, 40, 0, 0})
	SMember(FGameplayTagContainer)                     EncounterIdentifierTags                                     OFFSET(getStruct<T>, {0xE8, 32, 0, 0})
	SMember(FGameplayTagContainer)                     ActorTags                                                   OFFSET(getStruct<T>, {0x108, 32, 0, 0})
	SMember(FScalableFloat)                            SpawnTimeout                                                OFFSET(getStruct<T>, {0x128, 40, 0, 0})
	DMember(bool)                                      bPauseOnExit                                                OFFSET(get<bool>, {0x150, 1, 0, 0})
	CMember(class AActor*)                             UserActor                                                   OFFSET(get<T>, {0x158, 8, 0, 0})
};

/// Struct /Script/EncountersRuntime.LWMEncounterDynamicStartStateTreeTaskInstanceData
/// Size: 0x0048 (0x000160 - 0x0001A8)
class FLWMEncounterDynamicStartStateTreeTaskInstanceData : public FLWMEncounterStartSharedStateTreeTaskInstanceData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 424;

public:
	CMember(TArray<FDynamicEncounterEntry>)            DynamicEncounterEntries                                     OFFSET(get<T>, {0x160, 16, 0, 0})
	CMember(TWeakObjectPtr<UFortAthenaLivingWorldEncounter*>) DynamicEmptyEncounter                                OFFSET(get<T>, {0x170, 32, 0, 0})
	CMember(TArray<FFortAthenaLivingWorldTaggedSpawnActionClass>) SpawnActions                                     OFFSET(get<T>, {0x190, 16, 0, 0})
	CMember(TWeakObjectPtr<ULWMEncounterInstance*>)    EncounterInstance                                           OFFSET(get<T>, {0x1A0, 8, 0, 0})
};

/// Struct /Script/EncountersRuntime.LWMEncounterDynamicStartStateTreeTask
/// Size: 0x0000 (0x000020 - 0x000020)
class FLWMEncounterDynamicStartStateTreeTask : public FStateTreeTaskCommonBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/EncountersRuntime.LWMEncounterAlertLevelTargetInfo
/// Size: 0x0004 (0x000000 - 0x000004)
class FLWMEncounterAlertLevelTargetInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(float)                                     AwareForgetTime                                             OFFSET(get<float>, {0x0, 4, 0, 0})
};

/// Struct /Script/EncountersRuntime.LWMEncounterInstanceEffectInfo
/// Size: 0x0058 (0x000000 - 0x000058)
class FLWMEncounterInstanceEffectInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(class UClass*)                             GameplayEffect                                              OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/EncountersRuntime.LWMEncounterPauseStateTreeTaskInstanceData
/// Size: 0x0050 (0x000000 - 0x000050)
class FLWMEncounterPauseStateTreeTaskInstanceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FGameplayTagQuery)                         EncounterQuery                                              OFFSET(getStruct<T>, {0x0, 72, 0, 0})
	CMember(class AActor*)                             UserActor                                                   OFFSET(get<T>, {0x48, 8, 0, 0})
};

/// Struct /Script/EncountersRuntime.LWMEncounterPauseStateTreeTask
/// Size: 0x0000 (0x000020 - 0x000020)
class FLWMEncounterPauseStateTreeTask : public FStateTreeTaskCommonBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/EncountersRuntime.LWMEncounterRemoveGameplayEffectStateTreeTaskInstanceData
/// Size: 0x0050 (0x000000 - 0x000050)
class FLWMEncounterRemoveGameplayEffectStateTreeTaskInstanceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FGameplayTagQuery)                         GameplayEffectQuery                                         OFFSET(getStruct<T>, {0x0, 72, 0, 0})
	CMember(class AActor*)                             UserActor                                                   OFFSET(get<T>, {0x48, 8, 0, 0})
};

/// Struct /Script/EncountersRuntime.LWMEncounterRemoveGameplayEffectStateTreeTask
/// Size: 0x0000 (0x000020 - 0x000020)
class FLWMEncounterRemoveGameplayEffectStateTreeTask : public FStateTreeTaskCommonBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/EncountersRuntime.LWMEncounterResumeStateTreeTaskInstanceData
/// Size: 0x0050 (0x000000 - 0x000050)
class FLWMEncounterResumeStateTreeTaskInstanceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FGameplayTagQuery)                         EncounterQuery                                              OFFSET(getStruct<T>, {0x0, 72, 0, 0})
	CMember(class AActor*)                             UserActor                                                   OFFSET(get<T>, {0x48, 8, 0, 0})
};

/// Struct /Script/EncountersRuntime.LWMEncounterResumeStateTreeTask
/// Size: 0x0000 (0x000020 - 0x000020)
class FLWMEncounterResumeStateTreeTask : public FStateTreeTaskCommonBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/EncountersRuntime.LWMEncounterRow
/// Size: 0x0058 (0x000008 - 0x000060)
class FLWMEncounterRow : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(TWeakObjectPtr<UFortAthenaLivingWorldEncounter*>) Encounter                                            OFFSET(get<T>, {0x8, 32, 0, 0})
	CMember(TArray<FFortAthenaLivingWorldEventDataActorSpawnDescription>) DynamicActorDescriptions                 OFFSET(get<T>, {0x28, 16, 0, 0})
	SMember(FGameplayTagContainer)                     Tags                                                        OFFSET(getStruct<T>, {0x38, 32, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x58, 4, 0, 0})
};

/// Struct /Script/EncountersRuntime.LWMEncounterSetAlertLevelStateTreeTaskInstanceData
/// Size: 0x00A8 (0x000000 - 0x0000A8)
class FLWMEncounterSetAlertLevelStateTreeTaskInstanceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	SMember(FGameplayTagQuery)                         EncounterQuery                                              OFFSET(getStruct<T>, {0x0, 72, 0, 0})
	SMember(FLWMEncounterAlertLevelTargetInfo)         TargetInfo                                                  OFFSET(getStruct<T>, {0x48, 4, 0, 0})
	CMember(TWeakObjectPtr<AActor*>)                   TargetActor                                                 OFFSET(get<T>, {0x4C, 8, 0, 0})
	SMember(FGameplayTagQuery)                         TargetEncounterQuery                                        OFFSET(getStruct<T>, {0x58, 72, 0, 0})
	CMember(class AActor*)                             UserActor                                                   OFFSET(get<T>, {0xA0, 8, 0, 0})
};

/// Struct /Script/EncountersRuntime.LWMEncounterSetAlertLevelStateTreeTask
/// Size: 0x0000 (0x000020 - 0x000020)
class FLWMEncounterSetAlertLevelStateTreeTask : public FStateTreeTaskCommonBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/EncountersRuntime.LWMEncounterSetStageStateTreeTaskInstanceData
/// Size: 0x0058 (0x000000 - 0x000058)
class FLWMEncounterSetStageStateTreeTaskInstanceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FGameplayTagQuery)                         EncounterQuery                                              OFFSET(getStruct<T>, {0x0, 72, 0, 0})
	DMember(int32_t)                                   StageIndex                                                  OFFSET(get<int32_t>, {0x48, 4, 0, 0})
	CMember(class AActor*)                             UserActor                                                   OFFSET(get<T>, {0x50, 8, 0, 0})
};

/// Struct /Script/EncountersRuntime.LWMEncounterSetStageStateTreeTask
/// Size: 0x0000 (0x000020 - 0x000020)
class FLWMEncounterSetStageStateTreeTask : public FStateTreeTaskCommonBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/EncountersRuntime.LWMEncounterStartStateTreeTaskInstanceData
/// Size: 0x0078 (0x000160 - 0x0001D8)
class FLWMEncounterStartStateTreeTaskInstanceData : public FLWMEncounterStartSharedStateTreeTaskInstanceData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 472;

public:
	DMember(bool)                                      bUseEncounterTagQuery                                       OFFSET(get<bool>, {0x160, 1, 0, 0})
	SMember(FGameplayTagQuery)                         LWMEncounterTagQuery                                        OFFSET(getStruct<T>, {0x168, 72, 0, 0})
	CMember(TWeakObjectPtr<UFortAthenaLivingWorldEncounter*>) LWMEncounter                                         OFFSET(get<T>, {0x1B0, 32, 0, 0})
	CMember(TWeakObjectPtr<ULWMEncounterInstance*>)    EncounterInstance                                           OFFSET(get<T>, {0x1D0, 8, 0, 0})
};

/// Struct /Script/EncountersRuntime.LWMEncounterStartStateTreeTask
/// Size: 0x0000 (0x000020 - 0x000020)
class FLWMEncounterStartStateTreeTask : public FStateTreeTaskCommonBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/EncountersRuntime.LWMEncounterStopStateTreeTaskInstanceData
/// Size: 0x0050 (0x000000 - 0x000050)
class FLWMEncounterStopStateTreeTaskInstanceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FGameplayTagQuery)                         EncounterQuery                                              OFFSET(getStruct<T>, {0x0, 72, 0, 0})
	CMember(class AActor*)                             UserActor                                                   OFFSET(get<T>, {0x48, 8, 0, 0})
};

/// Struct /Script/EncountersRuntime.LWMEncounterStopStateTreeTask
/// Size: 0x0000 (0x000020 - 0x000020)
class FLWMEncounterStopStateTreeTask : public FStateTreeTaskCommonBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/EncountersRuntime.LWMEncounterUpdateLeashStateTreeTaskInstanceData
/// Size: 0x00F0 (0x000000 - 0x0000F0)
class FLWMEncounterUpdateLeashStateTreeTaskInstanceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	SMember(FGameplayTagQuery)                         EncounterQuery                                              OFFSET(getStruct<T>, {0x0, 72, 0, 0})
	DMember(bool)                                      bUseVolumeAsAnchor                                          OFFSET(get<bool>, {0x48, 1, 0, 0})
	SMember(FGameplayTagQuery)                         AnchorPointTagQuery                                         OFFSET(getStruct<T>, {0x50, 72, 0, 0})
	SMember(FScalableFloat)                            LeashRadiusInner                                            OFFSET(getStruct<T>, {0x98, 40, 0, 0})
	SMember(FScalableFloat)                            LeashRadiusOuter                                            OFFSET(getStruct<T>, {0xC0, 40, 0, 0})
	CMember(class AActor*)                             UserActor                                                   OFFSET(get<T>, {0xE8, 8, 0, 0})
};

/// Struct /Script/EncountersRuntime.LWMEncounterUpdateLeashStateTreeTask
/// Size: 0x0000 (0x000020 - 0x000020)
class FLWMEncounterUpdateLeashStateTreeTask : public FStateTreeTaskCommonBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/EncountersRuntime.PauseMobEncounterStateTreeTaskInstanceData
/// Size: 0x0010 (0x000000 - 0x000010)
class FPauseMobEncounterStateTreeTaskInstanceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FGameplayTag)                              MobIdentifier                                               OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(class AActor*)                             UserActor                                                   OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/EncountersRuntime.PauseMobEncounterStateTreeTask
/// Size: 0x0000 (0x000020 - 0x000020)
class FPauseMobEncounterStateTreeTask : public FStateTreeTaskCommonBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/EncountersRuntime.RemoveEncounterPrefabTagStateTreeTaskInstanceData
/// Size: 0x0010 (0x000000 - 0x000010)
class FRemoveEncounterPrefabTagStateTreeTaskInstanceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FGameplayTag)                              PrefabTag                                                   OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(class AActor*)                             UserActor                                                   OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/EncountersRuntime.RemoveEncounterPrefabTagStateTreeTask
/// Size: 0x0000 (0x000020 - 0x000020)
class FRemoveEncounterPrefabTagStateTreeTask : public FStateTreeTaskCommonBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/EncountersRuntime.ResumeMobEncounterStateTreeTaskInstanceData
/// Size: 0x0010 (0x000000 - 0x000010)
class FResumeMobEncounterStateTreeTaskInstanceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FGameplayTag)                              MobIdentifier                                               OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(class AActor*)                             UserActor                                                   OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/EncountersRuntime.ResumeMobEncounterStateTreeTask
/// Size: 0x0000 (0x000020 - 0x000020)
class FResumeMobEncounterStateTreeTask : public FStateTreeTaskCommonBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/EncountersRuntime.SpawnActorStateTreeTaskInstanceData
/// Size: 0x00E8 (0x000000 - 0x0000E8)
class FSpawnActorStateTreeTaskInstanceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
	CMember(TWeakObjectPtr<UClass*>)                   ActorClass                                                  OFFSET(get<T>, {0x0, 32, 0, 0})
	SMember(FGameplayTagQuery)                         AnchorQuery                                                 OFFSET(getStruct<T>, {0x20, 72, 0, 0})
	SMember(FVector)                                   AnchorOffset                                                OFFSET(getStruct<T>, {0x68, 24, 0, 0})
	DMember(bool)                                      bEnablePhysics                                              OFFSET(get<bool>, {0x80, 1, 0, 0})
	DMember(bool)                                      bAttachEncounterVolume                                      OFFSET(get<bool>, {0x81, 1, 0, 0})
	SMember(FGameplayTagContainer)                     ActorTags                                                   OFFSET(getStruct<T>, {0x88, 32, 0, 0})
	SMember(FGameplayTagContainer)                     ActorIdentifierTags                                         OFFSET(getStruct<T>, {0xA8, 32, 0, 0})
	DMember(bool)                                      bWaitForSpawnedActor                                        OFFSET(get<bool>, {0xC8, 1, 0, 0})
	CMember(TWeakObjectPtr<AActor*>)                   SpawnedActor                                                OFFSET(get<T>, {0xCC, 8, 0, 0})
	CMember(class AActor*)                             UserActor                                                   OFFSET(get<T>, {0xD8, 8, 0, 0})
	CMember(class USpawnActorTaskHelper*)              SpawnActorHelper                                            OFFSET(get<T>, {0xE0, 8, 0, 0})
};

/// Struct /Script/EncountersRuntime.SpawnActorStateTreeTask
/// Size: 0x0000 (0x000020 - 0x000020)
class FSpawnActorStateTreeTask : public FStateTreeTaskCommonBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/EncountersRuntime.StartMobEncounterStateTreeTaskInstanceData
/// Size: 0x0010 (0x000000 - 0x000010)
class FStartMobEncounterStateTreeTaskInstanceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FGameplayTag)                              MobIdentifier                                               OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(class AActor*)                             UserActor                                                   OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/EncountersRuntime.StartMobEncounterStateTreeTask
/// Size: 0x0008 (0x000020 - 0x000028)
class FStartMobEncounterStateTreeTask : public FStateTreeTaskCommonBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(bool)                                      bStopEncounterOnExit                                        OFFSET(get<bool>, {0x20, 1, 0, 0})
};

/// Struct /Script/EncountersRuntime.StopMobEncounterStateTreeTaskInstanceData
/// Size: 0x0010 (0x000000 - 0x000010)
class FStopMobEncounterStateTreeTaskInstanceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FGameplayTag)                              MobIdentifier                                               OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(class AActor*)                             UserActor                                                   OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/EncountersRuntime.StopMobEncounterStateTreeTask
/// Size: 0x0000 (0x000020 - 0x000020)
class FStopMobEncounterStateTreeTask : public FStateTreeTaskCommonBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/EncountersRuntime.EncounterRewardBehavior
/// Size: 0x0080 (0x000000 - 0x000080)
class FEncounterRewardBehavior : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FVector)                                   RewardOffset                                                OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FVector)                                   RewardDirection                                             OFFSET(getStruct<T>, {0x18, 24, 0, 0})
	SMember(FScalableFloat)                            RewardConeAngle                                             OFFSET(getStruct<T>, {0x30, 40, 0, 0})
	SMember(FScalableFloat)                            RewardFlingMagnitude                                        OFFSET(getStruct<T>, {0x58, 40, 0, 0})
};

/// Struct /Script/EncountersRuntime.ActorIdentifierEntry
/// Size: 0x0028 (0x000000 - 0x000028)
class FActorIdentifierEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FGameplayTagContainer)                     IdentifierTags                                              OFFSET(getStruct<T>, {0x0, 32, 0, 0})
	CMember(TWeakObjectPtr<AActor*>)                   TargetActor                                                 OFFSET(get<T>, {0x20, 8, 0, 0})
};

/// Struct /Script/EncountersRuntime.LWMEncounterInfo
/// Size: 0x0028 (0x000000 - 0x000028)
class FLWMEncounterInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(class ULWMEncounterInstance*)              LWMEncounter                                                OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/EncountersRuntime.GameplayEffectIdentifierInfo
/// Size: 0x0028 (0x000000 - 0x000028)
class FGameplayEffectIdentifierInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Struct /Script/EncountersRuntime.EncounterGroupEffectInfo
/// Size: 0x0050 (0x000000 - 0x000050)
class FEncounterGroupEffectInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Struct /Script/EncountersRuntime.TrackedActorInfo
/// Size: 0x0038 (0x000000 - 0x000038)
class FTrackedActorInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TWeakObjectPtr<AActor*>)                   TrackedActor                                                OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/EncountersRuntime.EncounterPrefabInfo
/// Size: 0x0038 (0x000000 - 0x000038)
class FEncounterPrefabInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(class UEncounterItemDefinition*)           EncounterDefinition                                         OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FGameplayTag)                              EncounterIdentifierTag                                      OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	SMember(FScalableFloat)                            Weight                                                      OFFSET(getStruct<T>, {0x10, 40, 0, 0})
};

/// Struct /Script/EncountersRuntime.EncounterSendCustomVerbStateTreeTaskInstanceDataEntry
/// Size: 0x0030 (0x000000 - 0x000030)
class FEncounterSendCustomVerbStateTreeTaskInstanceDataEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(class AActor*)                             Actor                                                       OFFSET(get<T>, {0x8, 8, 0, 0})
	SMember(FGameplayTagContainer)                     AdditionalTags                                              OFFSET(getStruct<T>, {0x10, 32, 0, 0})
};

/// Struct /Script/EncountersRuntime.EncounterSendCustomVerbStateTreeTaskInstanceValueEntry
/// Size: 0x0010 (0x000000 - 0x000010)
class FEncounterSendCustomVerbStateTreeTaskInstanceValueEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(double)                                    Value                                                       OFFSET(get<double>, {0x8, 8, 0, 0})
};

/// Struct /Script/EncountersRuntime.EncounterSendCustomVerbStateTreeTaskInstanceData
/// Size: 0x0030 (0x000000 - 0x000030)
class FEncounterSendCustomVerbStateTreeTaskInstanceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FGameplayTag)                              CustomVerbTag                                               OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(uint32_t)                                  Amount                                                      OFFSET(get<uint32_t>, {0x4, 4, 0, 0})
	CMember(TArray<FEncounterSendCustomVerbStateTreeTaskInstanceDataEntry>) Subjects                               OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(TArray<FEncounterSendCustomVerbStateTreeTaskInstanceValueEntry>) Values                                OFFSET(get<T>, {0x18, 16, 0, 0})
	CMember(class AActor*)                             UserActor                                                   OFFSET(get<T>, {0x28, 8, 0, 0})
};

/// Struct /Script/EncountersRuntime.EncounterSendCustomVerbStateTreeTask
/// Size: 0x0000 (0x000020 - 0x000020)
class FEncounterSendCustomVerbStateTreeTask : public FStateTreeTaskCommonBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/EncountersRuntime.EncounterVerbTransitionStateTreeTaskInstanceData
/// Size: 0x0048 (0x000000 - 0x000048)
class FEncounterVerbTransitionStateTreeTaskInstanceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(TArray<FInstancedStruct>)                  ObjectiveVerbs                                              OFFSET(get<T>, {0x0, 16, 0, 0})
	DMember(int32_t)                                   ObjectiveValueThreshold                                     OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	CMember(class AActor*)                             UserActor                                                   OFFSET(get<T>, {0x18, 8, 0, 0})
};

/// Struct /Script/EncountersRuntime.EncounterVerbTransitionStateTreeTask
/// Size: 0x0008 (0x000020 - 0x000028)
class FEncounterVerbTransitionStateTreeTask : public FStateTreeTaskCommonBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FStateTreeStateLink)                       TransitionTo                                                OFFSET(getStruct<T>, {0x20, 2, 0, 0})
};

/// Struct /Script/EncountersRuntime.LWMEncounterAlertLevelTransitionStateTreeTaskInstanceData
/// Size: 0x0078 (0x000000 - 0x000078)
class FLWMEncounterAlertLevelTransitionStateTreeTaskInstanceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	SMember(FGameplayTagQuery)                         EncounterQuery                                              OFFSET(getStruct<T>, {0x0, 72, 0, 0})
	CMember(TArray<EAlertLevel>)                       AlertLevels                                                 OFFSET(get<T>, {0x48, 16, 0, 0})
	CMember(EAlertLevelComparisonOperator)             ComparisonOperator                                          OFFSET(get<T>, {0x58, 1, 0, 0})
	DMember(int32_t)                                   Value                                                       OFFSET(get<int32_t>, {0x5C, 4, 0, 0})
	CMember(class AActor*)                             UserActor                                                   OFFSET(get<T>, {0x60, 8, 0, 0})
};

/// Struct /Script/EncountersRuntime.LWMEncounterAlertLevelTransitionStateTreeTask
/// Size: 0x0008 (0x000020 - 0x000028)
class FLWMEncounterAlertLevelTransitionStateTreeTask : public FStateTreeTaskCommonBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FStateTreeStateLink)                       TransitionTo                                                OFFSET(getStruct<T>, {0x20, 2, 0, 0})
};

/// Struct /Script/EncountersRuntime.LWMEncounterKillCountTransitionStateTreeTaskInstanceData
/// Size: 0x0068 (0x000000 - 0x000068)
class FLWMEncounterKillCountTransitionStateTreeTaskInstanceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FGameplayTagQuery)                         EncounterQuery                                              OFFSET(getStruct<T>, {0x0, 72, 0, 0})
	DMember(uint32_t)                                  Value                                                       OFFSET(get<uint32_t>, {0x48, 4, 0, 0})
	CMember(class AActor*)                             UserActor                                                   OFFSET(get<T>, {0x50, 8, 0, 0})
};

/// Struct /Script/EncountersRuntime.LWMEncounterKillCountTransitionStateTreeTask
/// Size: 0x0008 (0x000020 - 0x000028)
class FLWMEncounterKillCountTransitionStateTreeTask : public FStateTreeTaskCommonBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FStateTreeStateLink)                       TransitionTo                                                OFFSET(getStruct<T>, {0x20, 2, 0, 0})
};

/// Struct /Script/EncountersRuntime.LWMEncounterRemainingCountTransitionStateTreeTaskInstanceData
/// Size: 0x0068 (0x000000 - 0x000068)
class FLWMEncounterRemainingCountTransitionStateTreeTaskInstanceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FGameplayTagQuery)                         EncounterQuery                                              OFFSET(getStruct<T>, {0x0, 72, 0, 0})
	DMember(int32_t)                                   Value                                                       OFFSET(get<int32_t>, {0x48, 4, 0, 0})
	CMember(class AActor*)                             UserActor                                                   OFFSET(get<T>, {0x50, 8, 0, 0})
	DMember(bool)                                      bOnlyTriggerOnce                                            OFFSET(get<bool>, {0x58, 1, 0, 0})
};

/// Struct /Script/EncountersRuntime.LWMEncounterRemainingCountTransitionStateTreeTask
/// Size: 0x0008 (0x000020 - 0x000028)
class FLWMEncounterRemainingCountTransitionStateTreeTask : public FStateTreeTaskCommonBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FStateTreeStateLink)                       TransitionTo                                                OFFSET(getStruct<T>, {0x20, 2, 0, 0})
};

/// Struct /Script/EncountersRuntime.FortVerbFilter_EncounterCompleted
/// Size: 0x00A0 (0x0000A0 - 0x000140)
class FFortVerbFilter_EncounterCompleted : public FObjectiveFilter
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
	SMember(FObjectiveSubjectTags)                     EncounterItemDef                                            OFFSET(getStruct<T>, {0xA0, 72, 0, 0})
	CMember(EEncounterSuccessState)                    SuccessState                                                OFFSET(get<T>, {0xE8, 1, 0, 0})
	SMember(FObjectiveSubjectTags_Progressible)        Participants                                                OFFSET(getStruct<T>, {0xF0, 80, 0, 0})
};

/// Enum /Script/EncountersRuntime.EEncounterMobSpawnType
/// Size: 0x02
enum class EEncounterMobSpawnType : uint32_t
{
	EEncounterMobSpawnType__VolumeBased                                              = 0,
	EEncounterMobSpawnType__StaticPointBased                                         = 1
};

/// Enum /Script/EncountersRuntime.EAlertLevelComparisonOperator
/// Size: 0x06
enum class EAlertLevelComparisonOperator : uint8_t
{
	EAlertLevelComparisonOperator__GreaterThan                                       = 0,
	EAlertLevelComparisonOperator__LessThan                                          = 1,
	EAlertLevelComparisonOperator__EqualTo                                           = 2,
	EAlertLevelComparisonOperator__NotEqualTo                                        = 3,
	EAlertLevelComparisonOperator__GreaterThanOrEqualTo                              = 4,
	EAlertLevelComparisonOperator__LessThanOrEqualTo                                 = 5
};

/// Enum /Script/EncountersRuntime.ESpawnActorPersistenceBehavior
/// Size: 0x03
enum class ESpawnActorPersistenceBehavior : uint8_t
{
	ESpawnActorPersistenceBehavior__Destroy                                          = 0,
	ESpawnActorPersistenceBehavior__Transient                                        = 1,
	ESpawnActorPersistenceBehavior__Persistent                                       = 2
};

/// Enum /Script/EncountersRuntime.EEncounterSuccessState
/// Size: 0x03
enum class EEncounterSuccessState : uint8_t
{
	EEncounterSuccessState__Passed                                                   = 0,
	EEncounterSuccessState__Failed                                                   = 1,
	EEncounterSuccessState__Any                                                      = 2
};

