
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: AIModule
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: EnhancedInput
/// dependency: FortniteAI
/// dependency: FortniteGame
/// dependency: FortniteVersion
/// dependency: GameFeatures
/// dependency: GameplayAbilities
/// dependency: GameplayTags
/// dependency: ModularGameplay
/// dependency: SlateCore
/// dependency: StructUtils
/// dependency: WorldConditions

/// Class /Script/LagerRuntime.FortAthenaLivingWorldPointProvidersEnabler
/// Size: 0x00B8 (0x000290 - 0x000348)
class AFortAthenaLivingWorldPointProvidersEnabler : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 840;

public:
	CMember(TArray<TScriptInterface<Class>>)           EnabledLinkedPointProviders                                 OFFSET(get<T>, {0x290, 16, 0, 0})
	CMember(TArray<TScriptInterface<Class>>)           AvailableLinkedPointProviders                               OFFSET(get<T>, {0x2A0, 16, 0, 0})
	SMember(FGameplayTagContainer)                     EnablerTags                                                 OFFSET(getStruct<T>, {0x2B0, 32, 0, 0})
	CMember(TArray<TScriptInterface<Class>>)           LinkedPointProviders                                        OFFSET(get<T>, {0x2D0, 16, 0, 0})
	SMember(FScalableFloat)                            PointProvidersToEnable                                      OFFSET(getStruct<T>, {0x2E0, 40, 0, 0})
	SMember(FScalableFloat)                            EvaluateAutomatically                                       OFFSET(getStruct<T>, {0x308, 40, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnCompletedEvaluationDelegate                               OFFSET(getStruct<T>, {0x338, 16, 0, 0})


	/// Functions
	// Function /Script/LagerRuntime.FortAthenaLivingWorldPointProvidersEnabler.RemoveClosestPointProvidersToPoint
	// void RemoveClosestPointProvidersToPoint(FVector& Point, float MaximumDistance, int32_t PointsToDisable);                 // [0xaf2bdfc] Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldPointProvidersEnabler.OnCurrentPlaylistLoaded
	// void OnCurrentPlaylistLoaded(FName PlaylistName, FGameplayTagContainer& PlaylistContextTags);                            // [0x868ae34] Final|Native|Private|HasOutParms 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldPointProvidersEnabler.OnCompletedEvaluation__DelegateSignature
	// void OnCompletedEvaluation__DelegateSignature(TArray<TScriptInterface<Class>>& EnabledPointProviders);                   // [0x186becc] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldPointProvidersEnabler.HasCompletedEvaluation
	// bool HasCompletedEvaluation();                                                                                           // [0xaf28cb0] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldPointProvidersEnabler.GetEnablerTags
	// FGameplayTagContainer GetEnablerTags();                                                                                  // [0xaf28a48] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldPointProvidersEnabler.GetEnabledLinkedPointProviders
	// TArray<TScriptInterface<Class>> GetEnabledLinkedPointProviders();                                                        // [0xaf28a2c] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldPointProvidersEnabler.EvaluateAndEnablePointProviders
	// void EvaluateAndEnablePointProviders();                                                                                  // [0x3518b8c] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldPointProvidersEnabler.DoesStartEnabled
	// bool DoesStartEnabled();                                                                                                 // [0xaf289ac] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/LagerRuntime.FortAthenaLivingWorldPointProvidersEnabler_MiniMapDataOverride
/// Size: 0x0000 (0x000348 - 0x000348)
class AFortAthenaLivingWorldPointProvidersEnabler_MiniMapDataOverride : public AFortAthenaLivingWorldPointProvidersEnabler
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 840;

public:
};

/// Class /Script/LagerRuntime.FortAthenaLinearEncounterAnalyticComponent
/// Size: 0x0058 (0x0000A0 - 0x0000F8)
class UFortAthenaLinearEncounterAnalyticComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:


	/// Functions
	// Function /Script/LagerRuntime.FortAthenaLinearEncounterAnalyticComponent.OnStageCompleted
	// void OnStageCompleted(TArray<AFortPickup*>& SpawnedRewards);                                                             // [0x8b9719c] Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LagerRuntime.FortAthenaLinearEncounterAnalyticComponent.OnEncounterStart
	// void OnEncounterStart(class UFortAthenaLivingWorldEncounterInstance* InAttackerEncounter, class UFortAthenaLivingWorldEncounterInstance* InDefenderEncounter); // [0x6d6d7fc] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/LagerRuntime.FortAthenaLinearEncounterAnalyticComponent.OnEncounterEnd
	// void OnEncounterEnd();                                                                                                   // [0x3518b8c] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/LagerRuntime.FortAthenaLinearEncounterAnalyticComponent.OnDefenderSpawned
	// void OnDefenderSpawned(class AActor* SpawnedDefender);                                                                   // [0xaf069c8] Final|Native|Private 
	// Function /Script/LagerRuntime.FortAthenaLinearEncounterAnalyticComponent.OnDefenderDied
	// void OnDefenderDied(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, FVector HitLocation, class UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum); // [0xaf064b4] Final|Native|Private|HasDefaults 
	// Function /Script/LagerRuntime.FortAthenaLinearEncounterAnalyticComponent.OnDefenderDidDamage
	// void OnDefenderDidDamage(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, FVector HitLocation, class UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum); // [0xaf06070] Final|Native|Private|HasDefaults 
	// Function /Script/LagerRuntime.FortAthenaLinearEncounterAnalyticComponent.OnDefenderDamaged
	// void OnDefenderDamaged(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, FVector HitLocation, class UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum); // [0xaf05c38] Final|Native|Private|HasDefaults 
	// Function /Script/LagerRuntime.FortAthenaLinearEncounterAnalyticComponent.OnAttackerSpawned
	// void OnAttackerSpawned(class AActor* SpawnedAttacker);                                                                   // [0xaf0587c] Final|Native|Private 
};

/// Class /Script/LagerRuntime.FortAthenaLivingWorldConditionSchema
/// Size: 0x0000 (0x000038 - 0x000038)
class UFortAthenaLivingWorldConditionSchema : public UWorldConditionSchema
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Script/LagerRuntime.FortAthenaLivingWorldEventDataConditionSchema
/// Size: 0x0008 (0x000038 - 0x000040)
class UFortAthenaLivingWorldEventDataConditionSchema : public UFortAthenaLivingWorldConditionSchema
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Script/LagerRuntime.FortAthenaLivingWorldConfigData
/// Size: 0x02E8 (0x000030 - 0x000318)
class UFortAthenaLivingWorldConfigData : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 792;

public:
	CMember(TArray<FFortAthenaLivingWorldCategoryTableData>) CategoryTableDatas                                    OFFSET(get<T>, {0x30, 16, 0, 0})
	SMember(FScalableFloat)                            MaxActorCount                                               OFFSET(getStruct<T>, {0x40, 40, 0, 0})
	SMember(FScalableFloat)                            MaxEventSpawnPerTick                                        OFFSET(getStruct<T>, {0x68, 40, 0, 0})
	SMember(FScalableFloat)                            MaxActorDespawnPerTick                                      OFFSET(getStruct<T>, {0x90, 40, 0, 0})
	SMember(FScalableFloat)                            MinimumEventGenerationInterval                              OFFSET(getStruct<T>, {0xB8, 40, 0, 0})
	SMember(FScalableFloat)                            MaxActorDensity                                             OFFSET(getStruct<T>, {0xE0, 40, 0, 0})
	SMember(FScalableFloat)                            MaxActorUpdatesPerTick                                      OFFSET(getStruct<T>, {0x108, 40, 0, 0})
	SMember(FScalableFloat)                            MaxPointProviderUpdatesPerTick                              OFFSET(getStruct<T>, {0x130, 40, 0, 0})
	SMember(FScalableFloat)                            ActorDensityGridCellSize                                    OFFSET(getStruct<T>, {0x158, 40, 0, 0})
	SMember(FScalableFloat)                            ActorDensitySparseToDenseRatio                              OFFSET(getStruct<T>, {0x180, 40, 0, 0})
	SMember(FScalableFloat)                            PointClusterSize                                            OFFSET(getStruct<T>, {0x1A8, 40, 0, 0})
	SMember(FScalableFloat)                            MinNumberOfPlayerForAggressiveSpawning                      OFFSET(getStruct<T>, {0x1D0, 40, 0, 0})
	CMember(TArray<FFortAthenaLivingWorldTagDensityGridData>) TagDensityGridData                                   OFFSET(get<T>, {0x1F8, 16, 0, 0})
	SMember(FGameplayTagQuery)                         SingleUseSpawnerDataQuery                                   OFFSET(getStruct<T>, {0x208, 72, 0, 0})
	SMember(FGameplayTagQuery)                         ConcurrentSingleUseSpawnerDataQuery                         OFFSET(getStruct<T>, {0x250, 72, 0, 0})
	CMember(class UClass*)                             EQSActorHelperClass                                         OFFSET(get<T>, {0x298, 8, 0, 0})
	SMember(FScalableFloat)                            DelayEventGeneration                                        OFFSET(getStruct<T>, {0x2A0, 40, 0, 0})
	SMember(FScalableFloat)                            RestrictDensityReservationForReservoirs                     OFFSET(getStruct<T>, {0x2C8, 40, 0, 0})
	SMember(FScalableFloat)                            TrackDeadPlayers                                            OFFSET(getStruct<T>, {0x2F0, 40, 0, 0})
};

/// Class /Script/LagerRuntime.FortAthenaLivingWorldDebugDensityMiniMapIndicator
/// Size: 0x0060 (0x000140 - 0x0001A0)
class UFortAthenaLivingWorldDebugDensityMiniMapIndicator : public UFortMiniMapIndicator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
	CMember(TArray<FFortAthenaActorDensityDebugInfo>)  ActorDebugInfos                                             OFFSET(get<T>, {0x140, 16, 0, 0})
	CMember(TArray<float>)                             DensityGridValues                                           OFFSET(get<T>, {0x150, 16, 0, 0})
	SMember(FVector)                                   GridOrigin                                                  OFFSET(getStruct<T>, {0x160, 24, 0, 0})
	SMember(FIntVector)                                MaxGridSize                                                 OFFSET(getStruct<T>, {0x178, 12, 0, 0})
	DMember(float)                                     CellSize                                                    OFFSET(get<float>, {0x184, 4, 0, 0})
	DMember(float)                                     MaxDensity                                                  OFFSET(get<float>, {0x188, 4, 0, 0})
	SMember(FString)                                   DisplayName                                                 OFFSET(getStruct<T>, {0x190, 16, 0, 0})
};

/// Class /Script/LagerRuntime.FortAthenaLivingWorldDespawnConditionSchema
/// Size: 0x0008 (0x000038 - 0x000040)
class UFortAthenaLivingWorldDespawnConditionSchema : public UFortAthenaLivingWorldConditionSchema
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Script/LagerRuntime.FortAthenaLivingWorldEncounter
/// Size: 0x0038 (0x000030 - 0x000068)
class UFortAthenaLivingWorldEncounter : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FScalableFloat)                            IntervalBetweenEventGeneration                              OFFSET(getStruct<T>, {0x30, 40, 0, 0})
	CMember(TArray<FFortAthenaLivingWorldEncounterStage>) Stages                                                   OFFSET(get<T>, {0x58, 16, 0, 0})
};

/// Class /Script/LagerRuntime.FortAthenaLivingWorldEncounterInstance
/// Size: 0x0178 (0x000028 - 0x0001A0)
class UFortAthenaLivingWorldEncounterInstance : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
	SMember(FMulticastInlineDelegate)                  OnActorSpawned                                              OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnFirstActorSpawned                                         OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnActorDestroyed                                            OFFSET(getStruct<T>, {0x48, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnLastActorDestroyed                                        OFFSET(getStruct<T>, {0x58, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnActorDied                                                 OFFSET(getStruct<T>, {0x68, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnLastActorDied                                             OFFSET(getStruct<T>, {0x78, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnEventSpawned                                              OFFSET(getStruct<T>, {0x88, 16, 0, 0})
	SMember(FFortAthenaLivingWorldConditionContainer)  ConditionContainer                                          OFFSET(getStruct<T>, {0xE8, 24, 0, 0})
	CMember(TArray<TScriptInterface<Class>>)           AllowedPointProviders                                       OFFSET(get<T>, {0x100, 16, 0, 0})
	CMember(TArray<TScriptInterface<Class>>)           RegisteredPointProviders                                    OFFSET(get<T>, {0x110, 16, 0, 0})
	CMember(TArray<class UFortAthenaLivingWorldEventData*>) RuntimeCreatedEventDatas                               OFFSET(get<T>, {0x120, 16, 0, 0})
	CMember(TWeakObjectPtr<UFortAthenaLivingWorldEncounter*>) EncounterDefinition                                  OFFSET(get<T>, {0x150, 32, 0, 0})
	CMember(class AActor*)                             ActorDensityReservoir                                       OFFSET(get<T>, {0x170, 8, 0, 0})
	CMember(TArray<class AActor*>)                     SpawnedActors                                               OFFSET(get<T>, {0x178, 16, 0, 0})
	DMember(int32_t)                                   CurrentStageIndex                                           OFFSET(get<int32_t>, {0x190, 4, 0, 0})
	DMember(int32_t)                                   CurrentStageMaxActorCount                                   OFFSET(get<int32_t>, {0x194, 4, 0, 0})
	DMember(bool)                                      bIsPaused                                                   OFFSET(get<bool>, {0x19C, 1, 0, 0})


	/// Functions
	// Function /Script/LagerRuntime.FortAthenaLivingWorldEncounterInstance.StartEncounterStage
	// void StartEncounterStage(int32_t StageIndex);                                                                            // [0xaf08af8] Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldEncounterInstance.ResumeEncounter
	// void ResumeEncounter();                                                                                                  // [0xaf082d4] Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldEncounterInstance.Reset
	// void Reset();                                                                                                            // [0x3518b8c] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldEncounterInstance.RequestEventGeneration
	// void RequestEventGeneration();                                                                                           // [0xaf0806c] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldEncounterInstance.RemoveAllowedPointProvider
	// void RemoveAllowedPointProvider(TScriptInterface<Class>& PointProvider);                                                 // [0xaf07fbc] Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldEncounterInstance.PauseEncounter
	// void PauseEncounter();                                                                                                   // [0xaf073f0] Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldEncounterInstance.OwnsActor
	// bool OwnsActor(class AActor* Actor);                                                                                     // [0x8c1b990] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldEncounterInstance.OnLastActorDied__DelegateSignature
	// void OnLastActorDied__DelegateSignature();                                                                               // [0x186becc] MulticastDelegate|Public|Delegate 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldEncounterInstance.OnEventSpawned__DelegateSignature
	// void OnEventSpawned__DelegateSignature(TArray<AActor*> SpawnedActors);                                                   // [0x186becc] MulticastDelegate|Public|Delegate 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldEncounterInstance.OnEncounterActorDied
	// void OnEncounterActorDied(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, FVector HitLocation, class UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum); // [0xaf06b8c] Final|Native|Private|HasDefaults 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldEncounterInstance.OnActorSpawned__DelegateSignature
	// void OnActorSpawned__DelegateSignature(class AActor* SpawnedActor);                                                      // [0x186becc] MulticastDelegate|Public|Delegate 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldEncounterInstance.OnActorDied__DelegateSignature
	// void OnActorDied__DelegateSignature(class AActor* DiedActor);                                                            // [0x186becc] MulticastDelegate|Public|Delegate 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldEncounterInstance.OnActorDestroyed__DelegateSignature
	// void OnActorDestroyed__DelegateSignature(class AActor* DestroyedActor);                                                  // [0x186becc] MulticastDelegate|Public|Delegate 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldEncounterInstance.HasReachedMaxSpawnedCount
	// bool HasReachedMaxSpawnedCount();                                                                                        // [0x2fe830c] Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldEncounterInstance.HasPendingSpawnRequest
	// bool HasPendingSpawnRequest();                                                                                           // [0x2fe830c] Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldEncounterInstance.GetTotalActorCount
	// int32_t GetTotalActorCount();                                                                                            // [0x859ec00] Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldEncounterInstance.GetAliveSpawnedActorCount
	// int32_t GetAliveSpawnedActorCount();                                                                                     // [0xaf04444] Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldEncounterInstance.AdvanceEncounterStage
	// void AdvanceEncounterStage();                                                                                            // [0xaf040a4] Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldEncounterInstance.AddAllowedPointProvider
	// void AddAllowedPointProvider(TScriptInterface<Class>& PointProvider);                                                    // [0xaf03fd4] Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/LagerRuntime.FortAthenaLivingWorldEventData
/// Size: 0x0128 (0x000030 - 0x000158)
class UFortAthenaLivingWorldEventData : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 344;

public:
	DMember(int32_t)                                   TimeOfDayFilters                                            OFFSET(get<int32_t>, {0x30, 4, 0, 0})
	DMember(float)                                     WaterLevelIndexMin                                          OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     WaterLevelIndexMax                                          OFFSET(get<float>, {0x38, 4, 0, 0})
	SMember(FWorldConditionQueryDefinition)            CanSpawnCondition                                           OFFSET(getStruct<T>, {0x40, 24, 0, 0})
	CMember(TArray<FFortAthenaLivingWorldDespawnCondition>) DespawnConditions                                      OFFSET(get<T>, {0x58, 16, 0, 0})
	DMember(bool)                                      bRequirePointProviders                                      OFFSET(get<bool>, {0x68, 1, 0, 0})
	SMember(FGameplayTagQuery)                         ProviderFiltersTagQuery                                     OFFSET(getStruct<T>, {0x70, 72, 0, 0})
	CMember(TArray<FPointProviderFilterEntry>)         ProviderFiltersEntries                                      OFFSET(get<T>, {0xB8, 16, 0, 0})
	SMember(FInstancedStruct)                          PointProviderSelector                                       OFFSET(getStruct<T>, {0xC8, 16, 0, 0})
	SMember(FInstancedStruct)                          SpawnerDataSelector                                         OFFSET(getStruct<T>, {0xD8, 16, 0, 0})
	CMember(TArray<FFortAthenaLivingWorldTaggedSpawnActionClass>) SpawnActions                                     OFFSET(get<T>, {0xE8, 16, 0, 0})
	SMember(FScalableFloat)                            MinActorCountToSpawn                                        OFFSET(getStruct<T>, {0xF8, 40, 0, 0})
	SMember(FScalableFloat)                            MaxActorCountToSpawn                                        OFFSET(getStruct<T>, {0x120, 40, 0, 0})
	CMember(TArray<FFortAthenaLivingWorldEventDataActorSpawnDescription>) ActorDescriptions                        OFFSET(get<T>, {0x148, 16, 0, 0})
};

/// Class /Script/LagerRuntime.FortAthenaLivingWorldManager
/// Size: 0x0C10 (0x0000A0 - 0x000CB0)
class UFortAthenaLivingWorldManager : public UGameStateComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3248;

public:
	CMember(TWeakObjectPtr<UFortAthenaLivingWorldConfigData*>) DefaultLagerConfig                                  OFFSET(get<T>, {0xA8, 32, 0, 0})
	CMember(TArray<FFortLivingWorldConfigOverride>)    LagerConfigOverrides                                        OFFSET(get<T>, {0xC8, 16, 0, 0})
	SMember(FScalableFloat)                            LagerEnabled                                                OFFSET(getStruct<T>, {0xD8, 40, 0, 0})
	CMember(TMap<FGameplayTag, UClass*>)               TaggedSpawnActionClassMap                                   OFFSET(get<T>, {0x100, 80, 0, 0})
	CMember(TArray<TScriptInterface<Class>>)           PointProviders                                              OFFSET(get<T>, {0x150, 16, 0, 0})
	DMember(int32_t)                                   RegisteredPointProvidersCount                               OFFSET(get<int32_t>, {0x160, 4, 0, 0})
	SMember(FSlateBrush)                               SpecialActorMinimapIconBrush                                OFFSET(getStruct<T>, {0x170, 192, 0, 0})
	SMember(FVector2D)                                 SpecialActorMinimapIconScale                                OFFSET(getStruct<T>, {0x230, 16, 0, 0})
	SMember(FSlateBrush)                               SpecialActorCompassIconBrush                                OFFSET(getStruct<T>, {0x240, 192, 0, 0})
	SMember(FVector2D)                                 SpecialActorCompassIconScale                                OFFSET(getStruct<T>, {0x300, 16, 0, 0})
	SMember(FFortAthenaLivingWorldSpawnerDataLimiter)  SpawnerDataLimiter                                          OFFSET(getStruct<T>, {0x310, 176, 0, 0})
	CMember(class UWorld*)                             CachedWorld                                                 OFFSET(get<T>, {0x3C0, 8, 0, 0})
	CMember(class UFortAthenaLivingWorldConfigData*)   CachedConfig                                                OFFSET(get<T>, {0x3C8, 8, 0, 0})
	CMember(TArray<class UFortAthenaLivingWorldEncounterInstance*>) RunningEncounterInstances                      OFFSET(get<T>, {0x3D0, 16, 0, 0})
	CMember(class UFortSeasonalEventManager*)          CachedSeasonalEventManager                                  OFFSET(get<T>, {0x3E0, 8, 0, 0})
	CMember(TArray<TWeakObjectPtr<UClass*>>)           ActorClassToPreloadOnClient                                 OFFSET(get<T>, {0x3E8, 16, 0, 0})
	SMember(FFortAthenaLivingWorldActorUpdateHandler)  ActorUpdateHandler                                          OFFSET(getStruct<T>, {0x3F8, 176, 0, 0})
	SMember(FFortAthenaLivingWorldPointProviderUpdateHandler) PointProviderUpdateHandler                           OFFSET(getStruct<T>, {0x4A8, 152, 0, 0})
	SMember(FFortAthenaLivingWorldRuntimePointProviderHandler) RuntimePointProviderHandler                         OFFSET(getStruct<T>, {0x540, 96, 0, 0})
	SMember(FFortAthenaLivingWorldPlayerTracker)       PlayerTracker                                               OFFSET(getStruct<T>, {0x5A0, 192, 0, 0})
	SMember(FFortAthenaLivingWorldPreloader)           Preloader                                                   OFFSET(getStruct<T>, {0x660, 224, 0, 0})
	SMember(FFortAthenaLivingWorldConditionContainer)  GlobalConditionContainer                                    OFFSET(getStruct<T>, {0x740, 24, 0, 0})
	CMember(TMap<UClass*, UFortAthenaLivingWorldSpawnAction*>) SpawnActionCache                                    OFFSET(get<T>, {0xBF0, 80, 0, 0})
	CMember(class AFortAthenaLivingWorldEQSHelper*)    EQSHelper                                                   OFFSET(get<T>, {0xC40, 8, 0, 0})
	CMember(class UFortAthenaLivingWorldDebugDensityMiniMapIndicator*) DebugDensityMinimapIndicator                OFFSET(get<T>, {0xC48, 8, 0, 0})


	/// Functions
	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.UnregisterDensityReservoir
	// void UnregisterDensityReservoir(class AActor* ActorDensityReservoir);                                                    // [0xaf09394] Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.TrySpawnEventWithPreDespawn
	// bool TrySpawnEventWithPreDespawn(FDataTableRowHandle EventEntry, FTransform SpawnLocation, FDelegateProperty& OnRequestFinished, FGameplayTag DespawnDensityTag, float MaxAllowedDensityValue, int32_t& RequestID); // [0xaf08ebc] Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.TrySpawnEvent
	// bool TrySpawnEvent(FDataTableRowHandle EventEntry, FTransform SpawnLocation, FDelegateProperty& OnRequestFinished, int32_t& RequestID); // [0xaf08bb8] Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.StartEncounter
	// class UFortAthenaLivingWorldEncounterInstance* StartEncounter(TWeakObjectPtr<UFortAthenaLivingWorldEncounter*> EncounterType, TArray<TScriptInterface<Class>>& EncounterPointProviders, class AActor* ActorDensityReservoir); // [0xaf082ec] Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.ResetEncounter
	// void ResetEncounter(class UFortAthenaLivingWorldEncounterInstance* EncounterInstance);                                   // [0xaf080d0] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.RequestEventGeneration
	// void RequestEventGeneration();                                                                                           // [0xaf080a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.RegisterTagDensityReservoir
	// bool RegisterTagDensityReservoir(class AActor* ActorDensityReservoir, TArray<FFortAthenaLivingWorldEventTagDensityRegistration>& TagsDensity); // [0xaf07920] Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.RegisterDensityReservoir
	// bool RegisterDensityReservoir(class AActor* ActorDensityReservoir, float Density, float Range);                          // [0xaf07764] Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.QueryEventBudget
	// int32_t QueryEventBudget(FDataTableRowHandle EventEntry, class AActor* SpawnLocation);                                   // [0xaf07600] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.QueryActorDensityBudget
	// float QueryActorDensityBudget(class AActor* ReferenceActor, float Range);                                                // [0xaf07408] Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.OnWorldFinishedInitialization
	// void OnWorldFinishedInitialization(FGameplayTagContainer& ContextTags);                                                  // [0xaf072e4] Final|Native|Private|HasOutParms 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.OnUnmanagedDensityReservoirActorDestroy
	// void OnUnmanagedDensityReservoirActorDestroy(class AActor* DestroyedActor);                                              // [0xaf07224] Final|Native|Private 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.OnSpawnedActorDestroy
	// void OnSpawnedActorDestroy(class AActor* DestroyedActor);                                                                // [0xaf07160] Final|Native|Private 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.OnRep_DebugDensityMinimapIndicator
	// void OnRep_DebugDensityMinimapIndicator(class UFortAthenaLivingWorldDebugDensityMiniMapIndicator* OldMapIndicator);      // [0x63b1a60] Final|Native|Private 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.OnRep_ActorClassToPreloadOnClient
	// void OnRep_ActorClassToPreloadOnClient();                                                                                // [0x3ebae48] Final|Native|Private 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.OnPatrolPathDestroyed
	// void OnPatrolPathDestroyed(class AActor* Actor);                                                                         // [0xaf070a0] Final|Native|Public  
	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.OnPatrolPathAdded
	// void OnPatrolPathAdded(class AFortAthenaPatrolPath* PatrolPath);                                                         // [0xaf06fe0] Final|Native|Private 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.OnDebugSpawnEventSpawned
	// void OnDebugSpawnEventSpawned(TArray<AActor*>& SpawnedActors, bool bSuccess);                                            // [0xaf05a8c] Final|Native|Private|HasOutParms 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.OnCurrentPlaylistLoaded
	// void OnCurrentPlaylistLoaded(FName PlaylistName, FGameplayTagContainer& PlaylistContextTags);                            // [0xaf05938] Final|Native|Private|HasOutParms 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.OnActorSpawned
	// void OnActorSpawned(class AActor* Actor, int32_t RequestID);                                                             // [0xaf05740] Final|Native|Private 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.LWMTAM
	// void LWMTAM(FString Name);                                                                                               // [0xaf048ac] Final|BlueprintAuthorityOnly|Exec|Native|Public 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.LWMF
	// void LWMF();                                                                                                             // [0x3518b8c] Final|BlueprintAuthorityOnly|Exec|Native|Public 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerUnregisterPointProvider
	// void LivingWorldManagerUnregisterPointProvider(class AActor* PointProvider);                                             // [0x63b1a60] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerToggleVerboseLogging
	// void LivingWorldManagerToggleVerboseLogging();                                                                           // [0x3518b8c] Final|BlueprintAuthorityOnly|Exec|Native|Public 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerToggleGenerateEvents
	// void LivingWorldManagerToggleGenerateEvents();                                                                           // [0x3518b8c] Final|BlueprintAuthorityOnly|Exec|Native|Public 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerToggleDensityDisplay
	// void LivingWorldManagerToggleDensityDisplay();                                                                           // [0x3518b8c] Final|BlueprintAuthorityOnly|Exec|Native|Public 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerToggleActorMinimap
	// void LivingWorldManagerToggleActorMinimap(FString Name);                                                                 // [0x9bada54] Final|BlueprintAuthorityOnly|Exec|Native|Public 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerSwitchDensityDisplay
	// void LivingWorldManagerSwitchDensityDisplay(int32_t DensityMapIndex);                                                    // [0x6a309ec] Final|BlueprintAuthorityOnly|Exec|Native|Public 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerSetEventGenerationEnabled
	// void LivingWorldManagerSetEventGenerationEnabled(bool bInGenerateEvents);                                                // [0x63958fc] Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerRegisterPointProvider
	// void LivingWorldManagerRegisterPointProvider(class AActor* PointProvider);                                               // [0x63b1a60] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerProviderDebugActor
	// void LivingWorldManagerProviderDebugActor(int32_t ProviderIndex);                                                        // [0x6a309ec] Final|BlueprintAuthorityOnly|Exec|Native|Public 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerGenerateEvents
	// void LivingWorldManagerGenerateEvents();                                                                                 // [0x3518b8c] Final|BlueprintAuthorityOnly|Exec|Native|Public 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerFlush
	// void LivingWorldManagerFlush();                                                                                          // [0x3518b8c] Final|RequiredAPI|BlueprintAuthorityOnly|Exec|Native|Public|BlueprintCallable 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerEnablePointProvider
	// void LivingWorldManagerEnablePointProvider(class AActor* PointProvider);                                                 // [0x63b1a60] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerDumpSpawnCount
	// void LivingWorldManagerDumpSpawnCount();                                                                                 // [0x3518b8c] Final|BlueprintAuthorityOnly|Exec|Native|Public 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerDumpPrefabLevelBounds
	// void LivingWorldManagerDumpPrefabLevelBounds();                                                                          // [0x3518b8c] Final|BlueprintAuthorityOnly|Exec|Native|Public 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerDumpEventInstances
	// void LivingWorldManagerDumpEventInstances();                                                                             // [0x3518b8c] Final|BlueprintAuthorityOnly|Exec|Native|Public 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerDisablePointProvider
	// void LivingWorldManagerDisablePointProvider(class AActor* PointProvider);                                                // [0x63b1a60] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerDebugEvent
	// void LivingWorldManagerDebugEvent(FString EventName, int32_t DebugIndex, FString RuntimeSpawnDataName, FString EncounterName); // [0xaf04f24] Final|RequiredAPI|BlueprintAuthorityOnly|Exec|Native|Public 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.IsEncounterCategoryActive
	// bool IsEncounterCategoryActive(TWeakObjectPtr<UFortAthenaLivingWorldEncounter*> EncounterType);                          // [0xaf04774] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.HasPendingSpawnRequestForEncounter
	// bool HasPendingSpawnRequestForEncounter(class UFortAthenaLivingWorldEncounterInstance* EncounterInstance);               // [0xaf045f8] Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.GetOwningEncounter
	// class UFortAthenaLivingWorldEncounterInstance* GetOwningEncounter(class AActor* Actor);                                  // [0xaf04528] Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.GetLivingWorldManager
	// class UFortAthenaLivingWorldManager* GetLivingWorldManager(class UObject* WorldContextObject);                           // [0xaf04468] Final|RequiredAPI|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.EndEncounter
	// void EndEncounter(class UFortAthenaLivingWorldEncounterInstance* EncounterInstance);                                     // [0xaf0431c] Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.CancelSpawnRequest
	// void CancelSpawnRequest(int32_t RequestID);                                                                              // [0xaf04248] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.BuildDataRegistryResolverScope_Implementation
	// bool BuildDataRegistryResolverScope_Implementation(TArray<FName>& InOutResolverScopes, int32_t& InOutPriority);          // [0xaf040c0] Native|Public|HasOutParms|Const 
};

/// Class /Script/LagerRuntime.FortAthenaLivingWorldNavigationInvokerComponent
/// Size: 0x0100 (0x0000A0 - 0x0001A0)
class UFortAthenaLivingWorldNavigationInvokerComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
	SMember(FScalableFloat)                            GenerationRadius                                            OFFSET(getStruct<T>, {0xA0, 40, 0, 0})
	SMember(FNavAgentSelector)                         SupportedAgents                                             OFFSET(getStruct<T>, {0xC8, 4, 0, 0})
	SMember(FScalableFloat)                            DistanceToPlayer                                            OFFSET(getStruct<T>, {0xD0, 40, 0, 0})
	SMember(FScalableFloat)                            DistanceToPlayerHysteresis                                  OFFSET(getStruct<T>, {0xF8, 40, 0, 0})
	SMember(FScalableFloat)                            RegistrationDistanceToPlayer                                OFFSET(getStruct<T>, {0x120, 40, 0, 0})
	SMember(FScalableFloat)                            RegistrationDistanceToPlayerHysteresis                      OFFSET(getStruct<T>, {0x148, 40, 0, 0})
	CMember(TArray<FortAthenaLivingWorldNavigationInvokerSettingsOverride>) SettingsOverride                       OFFSET(get<T>, {0x170, 16, 0, 0})
	CMember(TWeakObjectPtr<UFortAthenaLivingWorldManager*>) LivingWorldManager                                     OFFSET(get<T>, {0x180, 8, 0, 0})


	/// Functions
	// Function /Script/LagerRuntime.FortAthenaLivingWorldNavigationInvokerComponent.OnCurrentPlaylistLoaded
	// void OnCurrentPlaylistLoaded(FName PlaylistName, FGameplayTagContainer& PlaylistContextTags);                            // [0x868ae34] Final|Native|Protected|HasOutParms 
};

/// Class /Script/LagerRuntime.FortAthenaLivingWorldPrefabLevelStreaming
/// Size: 0x0000 (0x0001C0 - 0x0001C0)
class UFortAthenaLivingWorldPrefabLevelStreaming : public ULevelStreamingLevelInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 448;

public:
};

/// Class /Script/LagerRuntime.FortAthenaLivingWorldPrefab
/// Size: 0x0170 (0x0007D0 - 0x000940)
class AFortAthenaLivingWorldPrefab : public AFortLevelInstancePrefab
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2368;

public:
	CMember(TArray<FFortAthenaLivingWorldPrefabActorSpawnerData>) ActorSpawnerDatas                                OFFSET(get<T>, {0x7D0, 16, 0, 0})
	SMember(FBox)                                      LocalLevelBounds                                            OFFSET(getStruct<T>, {0x7E0, 56, 0, 0})
	SMember(FBox)                                      LocalGrassRemovalBox                                        OFFSET(getStruct<T>, {0x818, 56, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnAllActorSpawnedDelegate                                   OFFSET(getStruct<T>, {0x850, 16, 0, 0})
	CMember(TArray<TWeakObjectPtr<ABuildingActor*>>)   BuildingsToKill                                             OFFSET(get<T>, {0x878, 16, 0, 0})
	CMember(TArray<TWeakObjectPtr<AActor*>>)           SpawnedActors                                               OFFSET(get<T>, {0x888, 16, 0, 0})
	SMember(FDelegateProperty)                         FinishedDestroyingBuildingCallback                          OFFSET(getStruct<T>, {0x898, 12, 0, 0})
	DMember(bool)                                      bHasFinishedSpawn                                           OFFSET(get<bool>, {0x8A4, 1, 0, 0})
	DMember(bool)                                      bHasRemovedFoliage                                          OFFSET(get<bool>, {0x8A5, 1, 0, 0})
	SMember(FScalableFloat)                            bIsEnabled                                                  OFFSET(getStruct<T>, {0x8A8, 40, 0, 0})
	SMember(FScalableFloat)                            Weight                                                      OFFSET(getStruct<T>, {0x8D0, 40, 0, 0})
	DMember(bool)                                      bShouldLevelBeVisible                                       OFFSET(get<bool>, {0x8F8, 1, 0, 0})
	DMember(bool)                                      bShouldSpawnerBeAllowedToSpawn                              OFFSET(get<bool>, {0x8F9, 1, 0, 0})
	DMember(bool)                                      bShouldAlwaysSnapAboveLandscape                             OFFSET(get<bool>, {0x8FA, 1, 0, 0})
	SMember(FWorldConditionQueryDefinition)            CanSpawnCondition                                           OFFSET(getStruct<T>, {0x900, 24, 0, 0})
	SMember(FGameplayTagContainer)                     PrefabTags                                                  OFFSET(getStruct<T>, {0x920, 32, 0, 0})


	/// Functions
	// Function /Script/LagerRuntime.FortAthenaLivingWorldPrefab.RemoveFoliageInsideLevelBound
	// void RemoveFoliageInsideLevelBound();                                                                                    // [0x36c70e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldPrefab.OnRep_ShouldLevelBeVisible
	// void OnRep_ShouldLevelBeVisible();                                                                                       // [0x1ca75b8] Final|Native|Protected 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldPrefab.OnBuildingInLevelBoundsDestroyed__DelegateSignature
	// void OnBuildingInLevelBoundsDestroyed__DelegateSignature();                                                              // [0x186becc] Public|Delegate      
	// Function /Script/LagerRuntime.FortAthenaLivingWorldPrefab.OnAllActorSpawnedDelegate__DelegateSignature
	// void OnAllActorSpawnedDelegate__DelegateSignature(TArray<AActor*>& SpawnedActors);                                       // [0x186becc] Public|Delegate|HasOutParms 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldPrefab.OnAllActorSpawned__DelegateSignature
	// void OnAllActorSpawned__DelegateSignature(TArray<AActor*>& SpawnedActors);                                               // [0x186becc] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldPrefab.MakeLevelVisible
	// void MakeLevelVisible();                                                                                                 // [0xaf2b1fc] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldPrefab.GetOwningLivingWorldPrefab
	// class AFortAthenaLivingWorldPrefab* GetOwningLivingWorldPrefab(class UObject* WorldContextObject);                       // [0xaf28b68] Final|RequiredAPI|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldPrefab.GetLevelBounds
	// FBox GetLevelBounds();                                                                                                   // [0xaf28b20] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldPrefab.DestroyBuildingsInLevelBounds
	// void DestroyBuildingsInLevelBounds(FDelegateProperty& FinishedDelegate);                                                 // [0xaf288a4] Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldPrefab.CallWhenAllActorHaveSpawned
	// void CallWhenAllActorHaveSpawned(FDelegateProperty& DelegateToCall);                                                     // [0xaf28800] Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldPrefab.AllowSpawnerToSpawn
	// void AllowSpawnerToSpawn();                                                                                              // [0xaf28674] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
};

/// Class /Script/LagerRuntime.FortAthenaLivingWorldPrefabActorSpawner
/// Size: 0x0130 (0x000290 - 0x0003C0)
class AFortAthenaLivingWorldPrefabActorSpawner : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 960;

public:
	SMember(FFortAthenaLivingWorldActorSpawnDescription) ActorDescription                                          OFFSET(getStruct<T>, {0x290, 256, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnActorSpawnedDelegate                                      OFFSET(getStruct<T>, {0x390, 16, 0, 0})
	CMember(class AFortAthenaPatrolPath*)              PatrolPath                                                  OFFSET(get<T>, {0x3A0, 8, 0, 0})
	SMember(FGuid)                                     Guid                                                        OFFSET(getStruct<T>, {0x3A8, 16, 0, 0})
	CMember(TWeakObjectPtr<AActor*>)                   SpawnedActor                                                OFFSET(get<T>, {0x3B8, 8, 0, 0})


	/// Functions
	// Function /Script/LagerRuntime.FortAthenaLivingWorldPrefabActorSpawner.OnSnapCompleted
	// void OnSnapCompleted(class UFortSnapOnSurfaceComponent* Component, FTransform& OldTransform, FTransform& NewTransfom);   // [0xaf2b9d0] Final|Native|Protected|HasOutParms|HasDefaults 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldPrefabActorSpawner.OnActorSpawnedDelegate__DelegateSignature
	// void OnActorSpawnedDelegate__DelegateSignature(class AActor* SpawnedActor);                                              // [0x186becc] Public|Delegate      
	// Function /Script/LagerRuntime.FortAthenaLivingWorldPrefabActorSpawner.OnActorSpawned__DelegateSignature
	// void OnActorSpawned__DelegateSignature(class AActor* SpawnedActor);                                                      // [0x186becc] MulticastDelegate|Public|Delegate 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldPrefabActorSpawner.GetSpawnedActor
	// class AActor* GetSpawnedActor();                                                                                         // [0xaf28c88] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldPrefabActorSpawner.CallWhenActorSpawned
	// void CallWhenActorSpawned(FDelegateProperty& DelegateToCall);                                                            // [0xaf286a8] Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/LagerRuntime.FortAthenaLivingWorldRuntimePointProviderComponent
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UFortAthenaLivingWorldRuntimePointProviderComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
};

/// Class /Script/LagerRuntime.FortAthenaLivingWorldSpawnAction
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortAthenaLivingWorldSpawnAction : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/LagerRuntime.FortAthenaLivingWorldSpawnActionBlueprint
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortAthenaLivingWorldSpawnActionBlueprint : public UFortAthenaLivingWorldSpawnAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/LagerRuntime.FortAthenaLivingWorldSpawnActionBlueprint.K2_OnSpawnedActorFailed
	// void K2_OnSpawnedActorFailed(TScriptInterface<Class>& SourcePointProvider);                                              // [0x186becc] Event|Public|HasOutParms|BlueprintEvent|Const 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldSpawnActionBlueprint.K2_OnSpawnedActor
	// void K2_OnSpawnedActor(class AActor* SpawnedActor, TScriptInterface<Class>& SourcePointProvider);                        // [0x186becc] Event|Public|HasOutParms|BlueprintEvent|Const 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldSpawnActionBlueprint.K2_OnAllActorSpawned
	// void K2_OnAllActorSpawned(TArray<AActor*>& SpawnedActor, TScriptInterface<Class>& SourcePointProvider);                  // [0x186becc] Event|Public|HasOutParms|BlueprintEvent|Const 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldSpawnActionBlueprint.K2_ModifySpawnComponentList
	// void K2_ModifySpawnComponentList(class UFortAthenaAISpawnerDataComponentList* ComponentList, class UObject* ComponentOuter); // [0x186becc] Event|Public|BlueprintEvent|Const 
};

/// Class /Script/LagerRuntime.FortAthenaLivingWorldWardComponent
/// Size: 0x0010 (0x0000A0 - 0x0000B0)
class UFortAthenaLivingWorldWardComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	DMember(float)                                     DefaultRadius                                               OFFSET(get<float>, {0xA0, 4, 0, 0})


	/// Functions
	// Function /Script/LagerRuntime.FortAthenaLivingWorldWardComponent.SetWardRadius
	// void SetWardRadius(float Radius);                                                                                        // [0xa2766d8] Final|Native|Public|BlueprintCallable 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldWardComponent.OnWorldFinishedInitialization
	// void OnWorldFinishedInitialization(FGameplayTagContainer& ContextTags);                                                  // [0xaf2bd3c] Final|Native|Private|HasOutParms 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldWardComponent.OnCurrentPlaylistLoaded
	// void OnCurrentPlaylistLoaded(FName PlaylistName, FGameplayTagContainer& PlaylistContextTags);                            // [0xaf2b720] Final|Native|Private|HasOutParms 
};

/// Class /Script/LagerRuntime.FortCheatManager_LivingWorldManager_EnhancedInputBindingInfo
/// Size: 0x0018 (0x000028 - 0x000040)
class UFortCheatManager_LivingWorldManager_EnhancedInputBindingInfo : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Script/LagerRuntime.FortCheatManager_LivingWorldManager
/// Size: 0x0068 (0x000028 - 0x000090)
class UFortCheatManager_LivingWorldManager : public UChildCheatManager
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	DMember(int32_t)                                   CheatTeleportToCount                                        OFFSET(get<int32_t>, {0x28, 4, 0, 0})
	SMember(FString)                                   CheatTeleportLastEventDataName                              OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	DMember(int32_t)                                   CheatSpawnEventCount                                        OFFSET(get<int32_t>, {0x40, 4, 0, 0})
	SMember(FString)                                   CheatSpawnEventName                                         OFFSET(getStruct<T>, {0x48, 16, 0, 0})
	DMember(int32_t)                                   CheatTriggerEventCount                                      OFFSET(get<int32_t>, {0x58, 4, 0, 0})
	SMember(FString)                                   CheatTriggerEventName                                       OFFSET(getStruct<T>, {0x60, 16, 0, 0})
	CMember(TArray<class UFortCheatManager_LivingWorldManager_EnhancedInputBindingInfo*>) InputBindings            OFFSET(get<T>, {0x70, 16, 0, 0})
	CMember(class UEnhancedInputComponent*)            InputComponent                                              OFFSET(get<T>, {0x80, 8, 0, 0})


	/// Functions
	// Function /Script/LagerRuntime.FortCheatManager_LivingWorldManager.LWMTE
	// void LWMTE(FString EventDataName);                                                                                       // [0xaf048ac] Final|BlueprintAuthorityOnly|Exec|Native|Public 
	// Function /Script/LagerRuntime.FortCheatManager_LivingWorldManager.LWMSE
	// void LWMSE(FString EventDataName, FString SpawnerDataNames);                                                             // [0xaf28cc8] Final|BlueprintAuthorityOnly|Exec|Native|Public 
	// Function /Script/LagerRuntime.FortCheatManager_LivingWorldManager.LWMS
	// void LWMS(FString EventDataName);                                                                                        // [0xaf048ac] Final|BlueprintAuthorityOnly|Exec|Native|Public 
	// Function /Script/LagerRuntime.FortCheatManager_LivingWorldManager.LivingWorldManagerTriggerEvent
	// void LivingWorldManagerTriggerEvent(FString EventDataName);                                                              // [0x9bada54] Final|BlueprintAuthorityOnly|Exec|Native|Public 
	// Function /Script/LagerRuntime.FortCheatManager_LivingWorldManager.LivingWorldManagerTeleportToSpawnPosition
	// void LivingWorldManagerTeleportToSpawnPosition(FString EventDataName);                                                   // [0x91f846c] Final|BlueprintAuthorityOnly|Exec|Native|Public 
	// Function /Script/LagerRuntime.FortCheatManager_LivingWorldManager.LivingWorldManagerTeleportTo
	// void LivingWorldManagerTeleportTo(FString EventDataName);                                                                // [0x91f846c] Final|BlueprintAuthorityOnly|Exec|Native|Public 
	// Function /Script/LagerRuntime.FortCheatManager_LivingWorldManager.LivingWorldManagerSpawnTrackedAtLocation
	// void LivingWorldManagerSpawnTrackedAtLocation(FString EventDataName, FString TrackedActorName, FVector Location, FRotator Rotation); // [0xaf2aa14] Final|BlueprintAuthorityOnly|Exec|Native|Public|HasDefaults 
	// Function /Script/LagerRuntime.FortCheatManager_LivingWorldManager.LivingWorldManagerSpawnEventAtLocation
	// void LivingWorldManagerSpawnEventAtLocation(FString EventDataName, FVector Location, FRotator Rotation, FString SpawnerDataNames); // [0xaf2a22c] Final|BlueprintAuthorityOnly|Exec|Native|Public|HasDefaults 
	// Function /Script/LagerRuntime.FortCheatManager_LivingWorldManager.LivingWorldManagerSpawnEvent
	// void LivingWorldManagerSpawnEvent(FString EventDataName, FString SpawnerDataNames);                                      // [0xaf29b38] Final|BlueprintAuthorityOnly|Exec|Native|Public 
	// Function /Script/LagerRuntime.FortCheatManager_LivingWorldManager.LivingWorldManagerSpawnAtLocation
	// void LivingWorldManagerSpawnAtLocation(FString EventDataName, FVector Location, FRotator Rotation);                      // [0xaf293f4] Final|BlueprintAuthorityOnly|Exec|Native|Public|HasDefaults 
	// Function /Script/LagerRuntime.FortCheatManager_LivingWorldManager.LivingWorldManagerSpawn
	// void LivingWorldManagerSpawn(FString EventDataName);                                                                     // [0x9bada54] Final|BlueprintAuthorityOnly|Exec|Native|Public 
	// Function /Script/LagerRuntime.FortCheatManager_LivingWorldManager.LivingWorldManagerGDTNextDensityGrid
	// void LivingWorldManagerGDTNextDensityGrid();                                                                             // [0x3518b8c] Final|Exec|Native|Public 
	// Function /Script/LagerRuntime.FortCheatManager_LivingWorldManager.LivingWorldManagerDisplaySpawnPoints
	// void LivingWorldManagerDisplaySpawnPoints(float MaxDisplayDistance);                                                     // [0x67dbeb4] Final|Exec|Native|Public 
};

/// Class /Script/LagerRuntime.FortGameFeatureAction_AddCategoryTableToConfig
/// Size: 0x0050 (0x000028 - 0x000078)
class UFortGameFeatureAction_AddCategoryTableToConfig : public UGameFeatureAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	CMember(TMap<TWeakObjectPtr<UFortAthenaLivingWorldConfigData*>, FFortAthenaLivingWorldCategoryTableDataList>) ConfigToCategoryTableDatas OFFSET(get<T>, {0x28, 80, 0, 0})
};

/// Class /Script/LagerRuntime.FortGameFeatureAction_AddLagerConfig
/// Size: 0x0010 (0x000028 - 0x000038)
class UFortGameFeatureAction_AddLagerConfig : public UGameFeatureAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<FFortLivingWorldConfigOverride>)    LagerConfigOverrides                                        OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Class /Script/LagerRuntime.FortGameFeatureAction_MapMarkerTagsProvider_PatrolPath
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortGameFeatureAction_MapMarkerTagsProvider_PatrolPath : public UFortGameFeatureAction_MapMarkerTagsProvider
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/LagerRuntime.FortPawnComponent_LivingWorldSpawnAroundPlayer
/// Size: 0x0020 (0x0000A8 - 0x0000C8)
class UFortPawnComponent_LivingWorldSpawnAroundPlayer : public UFortPawnComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	CMember(TArray<FLivingWorldSpawnAroundPlayerRuntimeData>) RuntimeData                                          OFFSET(get<T>, {0xA8, 16, 0, 0})
	CMember(TArray<FLivingWorldSpawnAroundPlayerConfiguration>) PerPlayerConfigurations                            OFFSET(get<T>, {0xB8, 16, 0, 0})
};

/// Class /Script/LagerRuntime.FortQueryTest_IsCloseToLivingWorldWard
/// Size: 0x0000 (0x0001F8 - 0x0001F8)
class UFortQueryTest_IsCloseToLivingWorldWard : public UEnvQueryTest
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 504;

public:
};

/// Class /Script/LagerRuntime.FortAthenaLivingWorldEQSHelper
/// Size: 0x0070 (0x000290 - 0x000300)
class AFortAthenaLivingWorldEQSHelper : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 768;

public:
	SMember(FNavAgentProperties)                       NavAgentProperties                                          OFFSET(getStruct<T>, {0x2D0, 48, 0, 0})
};

/// Class /Script/LagerRuntime.FortAthenaLivingWorldLightStaticPointProvider
/// Size: 0x0138 (0x000028 - 0x000160)
class UFortAthenaLivingWorldLightStaticPointProvider : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
	SMember(FFortAthenaLivingWorldPointProviderSpawnLimiter) SpawnLimiter                                          OFFSET(getStruct<T>, {0x38, 104, 0, 0})
	SMember(FGameplayTagContainer)                     FiltersTags                                                 OFFSET(getStruct<T>, {0xA0, 32, 0, 0})
	SMember(FTransform)                                SpawnPoint                                                  OFFSET(getStruct<T>, {0xC0, 96, 0, 0})
	DMember(bool)                                      bRandomizePointRotation                                     OFFSET(get<bool>, {0x120, 1, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnActorSpawned                                              OFFSET(getStruct<T>, {0x128, 16, 0, 0})
	SMember(FPointProviderDebugInfo)                   DebugInfo                                                   OFFSET(getStruct<T>, {0x138, 16, 0, 0})
	CMember(class AFortGameStateAthena*)               CachedGameState                                             OFFSET(get<T>, {0x148, 8, 0, 0})
	CMember(class UFortAthenaLivingWorldManager*)      CachedLivingWorldManager                                    OFFSET(get<T>, {0x150, 8, 0, 0})


	/// Functions
	// Function /Script/LagerRuntime.FortAthenaLivingWorldLightStaticPointProvider.OnActorSpawned__DelegateSignature
	// void OnActorSpawned__DelegateSignature(class AActor* SpawnedActor);                                                      // [0x186becc] MulticastDelegate|Public|Delegate 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldLightStaticPointProvider.EnablePointProvider
	// void EnablePointProvider();                                                                                              // [0xaf28a14] Native|Public|BlueprintCallable 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldLightStaticPointProvider.DisablePointProvider
	// void DisablePointProvider();                                                                                             // [0xaf28994] Native|Public|BlueprintCallable 
};

/// Class /Script/LagerRuntime.FortAthenaLivingWorldPointProviderInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortAthenaLivingWorldPointProviderInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/LagerRuntime.FortAthenaLivingWorldPointProviderInterface.GetPointProviderMaxRadius
	// float GetPointProviderMaxRadius();                                                                                       // [0xaf28c60] Native|Public|BlueprintCallable 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldPointProviderInterface.GetPointProviderLocation
	// FVector GetPointProviderLocation();                                                                                      // [0xaf28c28] Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldPointProviderInterface.GetFiltersTags
	// void GetFiltersTags(FGameplayTagContainer& FilterTags);                                                                  // [0xaf28a64] Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldPointProviderInterface.EnablePointProvider
	// void EnablePointProvider();                                                                                              // [0x6ac02a8] Native|Public|BlueprintCallable 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldPointProviderInterface.DisablePointProvider
	// void DisablePointProvider();                                                                                             // [0xaf28980] Native|Public|BlueprintCallable 
};

/// Class /Script/LagerRuntime.FortAthenaLivingWorldStaticPointProvider
/// Size: 0x00F8 (0x000290 - 0x000388)
class AFortAthenaLivingWorldStaticPointProvider : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 904;

public:
	SMember(FFortAthenaLivingWorldPointProviderSpawnLimiter) SpawnLimiter                                          OFFSET(getStruct<T>, {0x298, 104, 0, 0})
	SMember(FGameplayTagContainer)                     FiltersTags                                                 OFFSET(getStruct<T>, {0x300, 32, 0, 0})
	CMember(TArray<FTransform>)                        SpawnPoints                                                 OFFSET(get<T>, {0x320, 16, 0, 0})
	DMember(bool)                                      bStartEnabled                                               OFFSET(get<bool>, {0x330, 1, 0, 0})
	DMember(bool)                                      bRandomizeStartPoint                                        OFFSET(get<bool>, {0x331, 1, 0, 0})
	DMember(bool)                                      bRandomizePointRotation                                     OFFSET(get<bool>, {0x332, 1, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnActorSpawned                                              OFFSET(getStruct<T>, {0x338, 16, 0, 0})
	SMember(FPointProviderDebugInfo)                   DebugInfo                                                   OFFSET(getStruct<T>, {0x348, 16, 0, 0})
	CMember(class AFortGameStateAthena*)               CachedGameState                                             OFFSET(get<T>, {0x358, 8, 0, 0})
	CMember(class UFortAthenaLivingWorldManager*)      CachedLivingWorldManager                                    OFFSET(get<T>, {0x360, 8, 0, 0})


	/// Functions
	// Function /Script/LagerRuntime.FortAthenaLivingWorldStaticPointProvider.OnCurrentPlaylistLoaded
	// void OnCurrentPlaylistLoaded(FName PlaylistName, FGameplayTagContainer& PlaylistContextTags);                            // [0xaf2b238] Final|Native|Protected|HasOutParms 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldStaticPointProvider.OnActorSpawned__DelegateSignature
	// void OnActorSpawned__DelegateSignature(class AActor* SpawnedActor);                                                      // [0x186becc] MulticastDelegate|Public|Delegate 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldStaticPointProvider.EnablePointProvider
	// void EnablePointProvider();                                                                                              // [0xaf289dc] Native|Public|BlueprintCallable 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldStaticPointProvider.DisablePointProvider
	// void DisablePointProvider();                                                                                             // [0xaf28948] Native|Public|BlueprintCallable 
};

/// Class /Script/LagerRuntime.FortAthenaLivingWorldVehiclePointProvider
/// Size: 0x00C8 (0x000388 - 0x000450)
class AFortAthenaLivingWorldVehiclePointProvider : public AFortAthenaLivingWorldStaticPointProvider
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1104;

public:
	CMember(TEnumAsByte<EVehicleInitialOverlapBehavior>) InitialOverlapBehavior                                    OFFSET(get<T>, {0x388, 1, 0, 0})
	SMember(FScalableFloat)                            ForceModsAllowed                                            OFFSET(getStruct<T>, {0x390, 40, 0, 0})
	SMember(FGameplayTagContainer)                     ForceMods                                                   OFFSET(getStruct<T>, {0x3B8, 32, 0, 0})
	SMember(FScalableFloat)                            ForceCosmeticsAllowed                                       OFFSET(getStruct<T>, {0x3D8, 40, 0, 0})
	SMember(FSpawnerInfoForcedCosmetics)               ForceCosmetics                                              OFFSET(getStruct<T>, {0x400, 72, 0, 0})
};

/// Class /Script/LagerRuntime.FortAthenaLivingWorldVolume
/// Size: 0x0310 (0x0002C8 - 0x0005D8)
class AFortAthenaLivingWorldVolume : public AVolume
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1496;

public:
	DMember(bool)                                      bStartEnabled                                               OFFSET(get<bool>, {0x2D0, 1, 0, 0})
	DMember(bool)                                      bWaitForNavigation                                          OFFSET(get<bool>, {0x2D1, 1, 0, 0})
	SMember(FGameplayTagContainer)                     FiltersTags                                                 OFFSET(getStruct<T>, {0x2D8, 32, 0, 0})
	CMember(class UEnvQuery*)                          EnvironmentQuery                                            OFFSET(get<T>, {0x2F8, 8, 0, 0})
	CMember(TArray<FAIDynamicParam>)                   QueryConfig                                                 OFFSET(get<T>, {0x300, 16, 0, 0})
	DMember(bool)                                      bRemoveUsedPoint                                            OFFSET(get<bool>, {0x310, 1, 0, 0})
	DMember(bool)                                      bRemoveUsedPointPermenantly                                 OFFSET(get<bool>, {0x311, 1, 0, 0})
	SMember(FFortAthenaLivingWorldPointProviderSpawnLimiter) SpawnLimiter                                          OFFSET(getStruct<T>, {0x318, 104, 0, 0})
	SMember(FScalableFloat)                            EQSRefreshInterval                                          OFFSET(getStruct<T>, {0x380, 40, 0, 0})
	SMember(FScalableFloat)                            WaterLevelIndexMin                                          OFFSET(getStruct<T>, {0x3A8, 40, 0, 0})
	SMember(FScalableFloat)                            WaterLevelIndexMax                                          OFFSET(getStruct<T>, {0x3D0, 40, 0, 0})
	CMember(class AFortGameStateAthena*)               CachedGameState                                             OFFSET(get<T>, {0x3F8, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnActorSpawnedResult                                        OFFSET(getStruct<T>, {0x400, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPointProviderRegistered                                   OFFSET(getStruct<T>, {0x410, 16, 0, 0})
	CMember(class UFortAthenaLivingWorldManager*)      CachedLivingWorldManager                                    OFFSET(get<T>, {0x420, 8, 0, 0})


	/// Functions
	// Function /Script/LagerRuntime.FortAthenaLivingWorldVolume.SetSpawnRotation
	// void SetSpawnRotation(FRotator& Rotation);                                                                               // [0xaf2c3e8] Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldVolume.SetFiltersTags
	// void SetFiltersTags(FGameplayTagContainer& TagContainer);                                                                // [0xaf2c1f0] Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldVolume.SetEQSQueryConfigParam
	// void SetEQSQueryConfigParam(FName ParameterName, float Value);                                                           // [0xaf2c0b4] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldVolume.SetEQSQuery
	// void SetEQSQuery(class UEnvQuery* Query);                                                                                // [0xaf2bff4] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldVolume.RunEQS
	// void RunEQS();                                                                                                           // [0x3518b8c] Final|Native|Private 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldVolume.ResetSpawnRotation
	// void ResetSpawnRotation();                                                                                               // [0xaf2bfd0] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldVolume.OnWorldFinishedInitialization
	// void OnWorldFinishedInitialization(FGameplayTagContainer& ContextTags);                                                  // [0xaf2bbd8] Final|Native|Private|HasOutParms 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldVolume.OnPointProviderRegistered__DelegateSignature
	// void OnPointProviderRegistered__DelegateSignature(class AFortAthenaLivingWorldVolume* PointProviderVolume);              // [0x186becc] MulticastDelegate|Public|Delegate 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldVolume.OnNavigationFinishedGeneration
	// void OnNavigationFinishedGeneration(class ANavigationData* NavData);                                                     // [0xaf2b84c] Final|Native|Private 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldVolume.OnCurrentPlaylistLoaded
	// void OnCurrentPlaylistLoaded(FName PlaylistName, FGameplayTagContainer& PlaylistContextTags);                            // [0xaf2b378] Final|Native|Private|HasOutParms 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldVolume.OnActorSpawnedResult__DelegateSignature
	// void OnActorSpawnedResult__DelegateSignature(class AActor* SpawnedActor, bool bResult);                                  // [0x186becc] MulticastDelegate|Public|Delegate 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldVolume.IsPointProviderEnabled
	// bool IsPointProviderEnabled();                                                                                           // [0x94070dc] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldVolume.EnablePointProvider
	// void EnablePointProvider();                                                                                              // [0xaf289f8] Native|Public|BlueprintCallable 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldVolume.DoesStartEnabled
	// bool DoesStartEnabled();                                                                                                 // [0x9dd5ec4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldVolume.DisablePointProvider
	// void DisablePointProvider();                                                                                             // [0xaf28964] Native|Public|BlueprintCallable 
};

/// Class /Script/LagerRuntime.FortAthenaPatrolPathPointProvider
/// Size: 0x0100 (0x000290 - 0x000390)
class AFortAthenaPatrolPathPointProvider : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 912;

public:
	SMember(FGameplayTagContainer)                     FiltersTags                                                 OFFSET(getStruct<T>, {0x298, 32, 0, 0})
	CMember(class AFortAthenaPatrolPath*)              AssociatedPatrolPath                                        OFFSET(get<T>, {0x2B8, 8, 0, 0})
	DMember(bool)                                      bStartEnabled                                               OFFSET(get<bool>, {0x2C0, 1, 1, 0})
	DMember(bool)                                      bSpawnOnPatrolPath                                          OFFSET(get<bool>, {0x2C0, 1, 1, 1})
	DMember(bool)                                      bAlignOrientationToPath                                     OFFSET(get<bool>, {0x2C0, 1, 1, 2})
	DMember(bool)                                      bSyncStatusWithPatrolPath                                   OFFSET(get<bool>, {0x2C0, 1, 1, 3})
	SMember(FFortAthenaLivingWorldPointProviderSpawnLimiter) SpawnLimiter                                          OFFSET(getStruct<T>, {0x2C8, 104, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnActorSpawnedResult                                        OFFSET(getStruct<T>, {0x330, 16, 0, 0})
	CMember(TWeakObjectPtr<AFortAthenaPatrolPath*>)    RuntimePatrolPathWeakPtr                                    OFFSET(get<T>, {0x340, 8, 0, 0})
	CMember(class AFortGameStateAthena*)               CachedGameState                                             OFFSET(get<T>, {0x348, 8, 0, 0})
	CMember(class UFortAthenaLivingWorldManager*)      CachedLivingWorldManager                                    OFFSET(get<T>, {0x350, 8, 0, 0})


	/// Functions
	// Function /Script/LagerRuntime.FortAthenaPatrolPathPointProvider.RegisterToLWM
	// void RegisterToLWM();                                                                                                    // [0xaf2bde8] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/LagerRuntime.FortAthenaPatrolPathPointProvider.OnPatrolPathStatusChanged
	// void OnPatrolPathStatusChanged(bool bEnableState);                                                                       // [0xaf2b90c] Final|Native|Public  
	// Function /Script/LagerRuntime.FortAthenaPatrolPathPointProvider.OnCurrentPlaylistLoaded
	// void OnCurrentPlaylistLoaded(FName PlaylistName, FGameplayTagContainer& PlaylistContextTags);                            // [0xaf2b4a8] Final|Native|Private|HasOutParms 
	// Function /Script/LagerRuntime.FortAthenaPatrolPathPointProvider.OnActorSpawnedResult__DelegateSignature
	// void OnActorSpawnedResult__DelegateSignature(class AActor* SpawnedActor, bool bResult);                                  // [0x186becc] MulticastDelegate|Public|Delegate 
	// Function /Script/LagerRuntime.FortAthenaPatrolPathPointProvider.EnablePointProvider
	// void EnablePointProvider();                                                                                              // [0xaf289dc] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/LagerRuntime.FortAthenaPatrolPathPointProvider.DisablePointProvider
	// void DisablePointProvider();                                                                                             // [0xaf28948] RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/LagerRuntime.FortAthenaPointAroundPlayerProvider
/// Size: 0x00E0 (0x000290 - 0x000370)
class AFortAthenaPointAroundPlayerProvider : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 880;

public:
	SMember(FGameplayTagContainer)                     FiltersTags                                                 OFFSET(getStruct<T>, {0x298, 32, 0, 0})
	CMember(class UEnvQuery*)                          QueryTemplate                                               OFFSET(get<T>, {0x2B8, 8, 0, 0})
	CMember(TEnumAsByte<EEnvQueryRunMode>)             RunMode                                                     OFFSET(get<T>, {0x2C0, 1, 0, 0})
	DMember(bool)                                      bStartEnabled                                               OFFSET(get<bool>, {0x2C1, 1, 1, 0})
	DMember(bool)                                      bGenerateAroundPlayerBots                                   OFFSET(get<bool>, {0x2C1, 1, 1, 1})
	SMember(FGameplayTag)                              IgnorePlayerWithTag                                         OFFSET(getStruct<T>, {0x2C4, 4, 0, 0})
	SMember(FFortAthenaLivingWorldPointProviderSpawnLimiter) SpawnLimiter                                          OFFSET(getStruct<T>, {0x2C8, 104, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnActorSpawnedResult                                        OFFSET(getStruct<T>, {0x330, 16, 0, 0})
	CMember(class AFortGameStateAthena*)               CachedGameState                                             OFFSET(get<T>, {0x340, 8, 0, 0})


	/// Functions
	// Function /Script/LagerRuntime.FortAthenaPointAroundPlayerProvider.SetForcedPawnToUse
	// void SetForcedPawnToUse(class APawn* InForcedPawnToUse);                                                                 // [0xaf2c2a8] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/LagerRuntime.FortAthenaPointAroundPlayerProvider.OnWorldFinishedInitialization
	// void OnWorldFinishedInitialization(FGameplayTagContainer& ContextTags);                                                  // [0xaf2bc84] Final|Native|Private|HasOutParms 
	// Function /Script/LagerRuntime.FortAthenaPointAroundPlayerProvider.OnCurrentPlaylistLoaded
	// void OnCurrentPlaylistLoaded(FName PlaylistName, FGameplayTagContainer& PlaylistContextTags);                            // [0xaf2b5e4] Final|Native|Private|HasOutParms 
	// Function /Script/LagerRuntime.FortAthenaPointAroundPlayerProvider.OnActorSpawnedResult__DelegateSignature
	// void OnActorSpawnedResult__DelegateSignature(class AActor* SpawnedActor, bool bResult);                                  // [0x186becc] MulticastDelegate|Public|Delegate 
	// Function /Script/LagerRuntime.FortAthenaPointAroundPlayerProvider.EnablePointProvider
	// void EnablePointProvider();                                                                                              // [0xaf289dc] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/LagerRuntime.FortAthenaPointAroundPlayerProvider.DisablePointProvider
	// void DisablePointProvider();                                                                                             // [0xaf28948] Native|Public|BlueprintCallable 
};

/// Class /Script/LagerRuntime.FortAthenaWaterBodyPointProvider
/// Size: 0x02A8 (0x000028 - 0x0002D0)
class UFortAthenaWaterBodyPointProvider : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 720;

public:
	CMember(class AFortGameStateAthena*)               CachedGameState                                             OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(class UFortAthenaLivingWorldManager*)      CachedLivingWorldManager                                    OFFSET(get<T>, {0x38, 8, 0, 0})
	SMember(FGameplayTagContainer)                     PointProviderFiltersTags                                    OFFSET(getStruct<T>, {0x40, 32, 0, 0})
	CMember(class UEnvQuery*)                          EnvironmentQuery                                            OFFSET(get<T>, {0x60, 8, 0, 0})
	CMember(TArray<FAIDynamicParam>)                   QueryConfig                                                 OFFSET(get<T>, {0x68, 16, 0, 0})
	SMember(FScalableFloat)                            MaxLocationsCountByWaterArea                                OFFSET(getStruct<T>, {0x78, 40, 0, 0})
	SMember(FScalableFloat)                            MaxLocationsCountBySplineLength                             OFFSET(getStruct<T>, {0xA0, 40, 0, 0})
	DMember(bool)                                      bRemoveUsedLocations                                        OFFSET(get<bool>, {0xC8, 1, 0, 0})
	SMember(FScalableFloat)                            ActivationDistance                                          OFFSET(getStruct<T>, {0xD0, 40, 0, 0})
	SMember(FScalableFloat)                            ValidationSweepRadius                                       OFFSET(getStruct<T>, {0xF8, 40, 0, 0})
	SMember(FScalableFloat)                            ValidationSweepUp                                           OFFSET(getStruct<T>, {0x120, 40, 0, 0})
	SMember(FScalableFloat)                            ValidationSweepDown                                         OFFSET(getStruct<T>, {0x148, 40, 0, 0})
	SMember(FCollisionProfileName)                     ValidationGroundTraceCollisionProfile                       OFFSET(getStruct<T>, {0x170, 4, 0, 0})
	SMember(FFortAthenaLivingWorldPointProviderSpawnLimiter) SpawnLimiter                                          OFFSET(getStruct<T>, {0x178, 104, 0, 0})
	CMember(TWeakObjectPtr<AFortWaterBodyActor*>)      AssociatedWaterBody                                         OFFSET(get<T>, {0x1E0, 8, 0, 0})
};

/// Class /Script/LagerRuntime.FortAthenaRuntimeWaterBodyPointProviderComponent
/// Size: 0x0008 (0x0000A0 - 0x0000A8)
class UFortAthenaRuntimeWaterBodyPointProviderComponent : public UFortAthenaLivingWorldRuntimePointProviderComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	CMember(class UClass*)                             PointProviderClass                                          OFFSET(get<T>, {0xA0, 8, 0, 0})
};

/// Class /Script/LagerRuntime.FortAthenaLivingWorldSpawnAction_AddAIToGroup
/// Size: 0x0020 (0x000028 - 0x000048)
class UFortAthenaLivingWorldSpawnAction_AddAIToGroup : public UFortAthenaLivingWorldSpawnAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FGameplayTagContainer)                     GroupTags                                                   OFFSET(getStruct<T>, {0x28, 32, 0, 0})
};

/// Class /Script/LagerRuntime.FortAthenaLivingWorldSpawnAction_SeatPawnInVehicle
/// Size: 0x0010 (0x000028 - 0x000038)
class UFortAthenaLivingWorldSpawnAction_SeatPawnInVehicle : public UFortAthenaLivingWorldSpawnAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<FFortAthenaLivingWorldTagQueryToSeatMapping>) SeatMappings                                      OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Struct /Script/LagerRuntime.FortAthenaLivingWorldPrefabActorSpawnerData
/// Size: 0x0110 (0x000000 - 0x000110)
class FFortAthenaLivingWorldPrefabActorSpawnerData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
	SMember(FGuid)                                     ActorSpawnerGuid                                            OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FFortAthenaLivingWorldActorSpawnDescription) ActorDescription                                          OFFSET(getStruct<T>, {0x10, 256, 0, 0})
};

/// Struct /Script/LagerRuntime.FortAthenaLivingWorldActorSpawnDescription
/// Size: 0x0100 (0x000000 - 0x000100)
class FFortAthenaLivingWorldActorSpawnDescription : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	CMember(TWeakObjectPtr<UClass*>)                   ActorClass                                                  OFFSET(get<T>, {0x0, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   SpawnerData                                                 OFFSET(get<T>, {0x20, 32, 0, 0})
	SMember(FGameplayTagQuery)                         SpawnerDataTagQuery                                         OFFSET(getStruct<T>, {0x40, 72, 0, 0})
	SMember(FScalableFloat)                            ActorDensityValue                                           OFFSET(getStruct<T>, {0x88, 40, 0, 0})
	SMember(FScalableFloat)                            DensityComputationRangeOverride                             OFFSET(getStruct<T>, {0xB0, 40, 0, 0})
	CMember(TArray<FFortAthenaLivingWorldEventTagDensityRegistration>) TagDensityRegistrations                     OFFSET(get<T>, {0xD8, 16, 0, 0})
	CMember(TArray<FFortAthenaLivingWorldTagTimer>)    PostDestructionTagDensityPersistenceDuration                OFFSET(get<T>, {0xE8, 16, 0, 0})
	DMember(bool)                                      bPreloadOnClient                                            OFFSET(get<bool>, {0xF8, 1, 0, 0})
};

/// Struct /Script/LagerRuntime.FortAthenaLivingWorldTagTimer
/// Size: 0x0030 (0x000000 - 0x000030)
class FFortAthenaLivingWorldTagTimer : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FGameplayTag)                              tag                                                         OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FScalableFloat)                            duration                                                    OFFSET(getStruct<T>, {0x8, 40, 0, 0})
};

/// Struct /Script/LagerRuntime.FortAthenaLivingWorldEventTagDensityRegistration
/// Size: 0x0058 (0x000000 - 0x000058)
class FFortAthenaLivingWorldEventTagDensityRegistration : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FGameplayTag)                              tag                                                         OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FScalableFloat)                            Range                                                       OFFSET(getStruct<T>, {0x8, 40, 0, 0})
	SMember(FScalableFloat)                            DensityValue                                                OFFSET(getStruct<T>, {0x30, 40, 0, 0})
};

/// Struct /Script/LagerRuntime.PointProviderDebugInfo
/// Size: 0x0010 (0x000000 - 0x000010)
class FPointProviderDebugInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FPointProviderTagDebugColor>)       DebugColors                                                 OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/LagerRuntime.PointProviderTagDebugColor
/// Size: 0x0028 (0x000000 - 0x000028)
class FPointProviderTagDebugColor : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FGameplayTagContainer)                     Tags                                                        OFFSET(getStruct<T>, {0x0, 32, 0, 0})
	SMember(FColor)                                    Color                                                       OFFSET(getStruct<T>, {0x20, 4, 0, 0})
};

/// Struct /Script/LagerRuntime.FortAthenaLivingWorldPointProviderSpawnLimiter
/// Size: 0x0068 (0x000000 - 0x000068)
class FFortAthenaLivingWorldPointProviderSpawnLimiter : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	CMember(ELivingWorldPointProviderSpawnLimiterBehavior) Behavior                                                OFFSET(get<T>, {0x8, 1, 0, 0})
	SMember(FScalableFloat)                            MaxNumberOfSpawn                                            OFFSET(getStruct<T>, {0x10, 40, 0, 0})
	SMember(FScalableFloat)                            MaxNumberOfEventInstance                                    OFFSET(getStruct<T>, {0x38, 40, 0, 0})
	DMember(bool)                                      bResetLimitWhenEnabling                                     OFFSET(get<bool>, {0x60, 1, 0, 0})
};

/// Struct /Script/LagerRuntime.FortAthenaLivingWorldConditionContainer
/// Size: 0x0018 (0x000000 - 0x000018)
class FFortAthenaLivingWorldConditionContainer : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(class UObject*)                            Owner                                                       OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/LagerRuntime.FortAthenaLivingWorldSpawnerDataSelector
/// Size: 0x0008 (0x000000 - 0x000008)
class FFortAthenaLivingWorldSpawnerDataSelector : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/LagerRuntime.FortAthenaLivingWorldCondition_CheckPrefabTags
/// Size: 0x0050 (0x000010 - 0x000060)
class FFortAthenaLivingWorldCondition_CheckPrefabTags : public FWorldConditionCommonActorBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FWorldConditionContextDataRef)             ActorRef                                                    OFFSET(getStruct<T>, {0x10, 8, 0, 0})
	SMember(FGameplayTagQuery)                         TagQuery                                                    OFFSET(getStruct<T>, {0x18, 72, 0, 0})
};

/// Struct /Script/LagerRuntime.FortAthenaLivingWorldCondition_TrackedPlayerPresence
/// Size: 0x0058 (0x000010 - 0x000068)
class FFortAthenaLivingWorldCondition_TrackedPlayerPresence : public FWorldConditionCommonActorBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FWorldConditionContextDataRef)             ActorRef                                                    OFFSET(getStruct<T>, {0x10, 8, 0, 0})
	SMember(FScalableFloat)                            MinDistanceToPlayer                                         OFFSET(getStruct<T>, {0x18, 40, 0, 0})
	SMember(FScalableFloat)                            MaxDistanceToPlayer                                         OFFSET(getStruct<T>, {0x40, 40, 0, 0})
};

/// Struct /Script/LagerRuntime.FortAthenaLivingWorldDensityCondition
/// Size: 0x0088 (0x000010 - 0x000098)
class FFortAthenaLivingWorldDensityCondition : public FWorldConditionCommonActorBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	SMember(FWorldConditionContextDataRef)             ActorRef                                                    OFFSET(getStruct<T>, {0x10, 8, 0, 0})
	SMember(FGameplayTag)                              tag                                                         OFFSET(getStruct<T>, {0x18, 4, 0, 0})
	SMember(FScalableFloat)                            Distance                                                    OFFSET(getStruct<T>, {0x20, 40, 0, 0})
	SMember(FScalableFloat)                            MaxDensity                                                  OFFSET(getStruct<T>, {0x48, 40, 0, 0})
	SMember(FScalableFloat)                            MinDensity                                                  OFFSET(getStruct<T>, {0x70, 40, 0, 0})
};

/// Struct /Script/LagerRuntime.FortAthenaLivingWorldDespawnCondition
/// Size: 0x0048 (0x000000 - 0x000048)
class FFortAthenaLivingWorldDespawnCondition : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FWorldConditionQueryDefinition)            DespawnWorldCondition                                       OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	DMember(float)                                     TimeAsCandidateBeforeDespawn                                OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     TimeAsCandidateBeforeDespawnDeviation                       OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(bool)                                      bUseCustomDeathTag                                          OFFSET(get<bool>, {0x20, 1, 0, 0})
	SMember(FGameplayTagContainer)                     DeathTagContainer                                           OFFSET(getStruct<T>, {0x28, 32, 0, 0})
};

/// Struct /Script/LagerRuntime.FortAthenaLinearEncounterPlayerParticipationData
/// Size: 0x0040 (0x000000 - 0x000040)
class FFortAthenaLinearEncounterPlayerParticipationData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Struct /Script/LagerRuntime.FortAthenaLivingWorldActorUpdateHandler
/// Size: 0x00B0 (0x000000 - 0x0000B0)
class FFortAthenaLivingWorldActorUpdateHandler : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	CMember(class UFortAthenaLivingWorldManager*)      LivingWorldManager                                          OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/LagerRuntime.FortLivingWorldEventTableVariation
/// Size: 0x0048 (0x000000 - 0x000048)
class FFortLivingWorldEventTableVariation : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(TWeakObjectPtr<UDataTable*>)               EventTableVariation                                         OFFSET(get<T>, {0x0, 32, 0, 0})
	SMember(FScalableFloat)                            VariationWeight                                             OFFSET(getStruct<T>, {0x20, 40, 0, 0})
};

/// Struct /Script/LagerRuntime.FortAthenaLivingWorldCategory
/// Size: 0x00E0 (0x000008 - 0x0000E8)
class FFortAthenaLivingWorldCategory : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
	CMember(TWeakObjectPtr<UDataTable*>)               EventTable                                                  OFFSET(get<T>, {0x8, 32, 0, 0})
	CMember(TArray<FFortLivingWorldEventTableVariation>) EventTableVariations                                      OFFSET(get<T>, {0x28, 16, 0, 0})
	DMember(int32_t)                                   MaxCount                                                    OFFSET(get<int32_t>, {0x38, 4, 0, 0})
	DMember(int32_t)                                   MaxSpawnedCount                                             OFFSET(get<int32_t>, {0x3C, 4, 0, 0})
	DMember(int32_t)                                   EventInstanceMaxCount                                       OFFSET(get<int32_t>, {0x40, 4, 0, 0})
	DMember(int32_t)                                   EventInstanceMaxSpawnedCount                                OFFSET(get<int32_t>, {0x44, 4, 0, 0})
	SMember(FWorldConditionQueryDefinition)            CanSpawnCondition                                           OFFSET(getStruct<T>, {0x48, 24, 0, 0})
	DMember(float)                                     Priority                                                    OFFSET(get<float>, {0x60, 4, 0, 0})
	DMember(bool)                                      bExcludeFromGlobalAIBudget                                  OFFSET(get<bool>, {0x64, 1, 0, 0})
	SMember(FGameplayTagQuery)                         RequirePlaylistTagQuery                                     OFFSET(getStruct<T>, {0x68, 72, 0, 0})
	CMember(TArray<TWeakObjectPtr<UFortAthenaLivingWorldEncounter*>>) Encounters                                   OFFSET(get<T>, {0xB0, 16, 0, 0})
	SMember(FScalableFloat)                            IsEnabled                                                   OFFSET(getStruct<T>, {0xC0, 40, 0, 0})
};

/// Struct /Script/LagerRuntime.FortAthenaLivingWorldTagDensityGridData
/// Size: 0x0058 (0x000000 - 0x000058)
class FFortAthenaLivingWorldTagDensityGridData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FGameplayTag)                              tag                                                         OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FScalableFloat)                            GridCellSize                                                OFFSET(getStruct<T>, {0x8, 40, 0, 0})
	SMember(FScalableFloat)                            SparseToDenseRatio                                          OFFSET(getStruct<T>, {0x30, 40, 0, 0})
};

/// Struct /Script/LagerRuntime.FortAthenaLivingWorldCategoryTableData
/// Size: 0x0050 (0x000000 - 0x000050)
class FFortAthenaLivingWorldCategoryTableData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(TWeakObjectPtr<UDataTable*>)               CategoryTable                                               OFFSET(get<T>, {0x8, 32, 0, 0})
	SMember(FScalableFloat)                            IsEnabled                                                   OFFSET(getStruct<T>, {0x28, 40, 0, 0})
};

/// Struct /Script/LagerRuntime.FortAthenaActorDensityDebugInfo
/// Size: 0x0048 (0x000000 - 0x000048)
class FFortAthenaActorDensityDebugInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FString)                                   ActorName                                                   OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FVector)                                   ActorPosition                                               OFFSET(getStruct<T>, {0x10, 24, 0, 0})
	SMember(FIntVector)                                MinCellIndex                                                OFFSET(getStruct<T>, {0x28, 12, 0, 0})
	SMember(FIntVector)                                MaxCellIndex                                                OFFSET(getStruct<T>, {0x34, 12, 0, 0})
	DMember(float)                                     DensityValue                                                OFFSET(get<float>, {0x40, 4, 0, 0})
};

/// Struct /Script/LagerRuntime.FortAthenaLivingWorldDensityGrid
/// Size: 0x00C0 (0x0000C0 - 0x000180)
class FFortAthenaLivingWorldDensityGrid : public FFortSpatialGrid
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 384;

public:
};

/// Struct /Script/LagerRuntime.FortAthenaLivingWorldEncounterStage
/// Size: 0x00A0 (0x000000 - 0x0000A0)
class FFortAthenaLivingWorldEncounterStage : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	CMember(TWeakObjectPtr<UDataTable*>)               EventTable                                                  OFFSET(get<T>, {0x0, 32, 0, 0})
	SMember(FScalableFloat)                            MaximumConcurrentNumberOfAI                                 OFFSET(getStruct<T>, {0x20, 40, 0, 0})
	DMember(bool)                                      bAllowRandomMaximumActorCount                               OFFSET(get<bool>, {0x48, 1, 0, 0})
	SMember(FScalableFloat)                            MaximumConcurrentNumberOfAI_LowValue                        OFFSET(getStruct<T>, {0x50, 40, 0, 0})
	SMember(FScalableFloat)                            MaxSpawnCountPerEventGeneration                             OFFSET(getStruct<T>, {0x78, 40, 0, 0})
};

/// Struct /Script/LagerRuntime.FortAthenaLivingWorldEventDespawnCondition
/// Size: 0x0020 (0x000000 - 0x000020)
class FFortAthenaLivingWorldEventDespawnCondition : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(bool)                                      bCanBeDespawned                                             OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(float)                                     MinDistanceToPlayer                                         OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     TimeAsCandidateBeforeDespawn                                OFFSET(get<float>, {0x8, 4, 0, 0})
	CMember(EAthenaGamePhaseStep)                      CanStartDespawningPhaseStep                                 OFFSET(get<T>, {0xC, 1, 0, 0})
	DMember(int32_t)                                   CanStartDespawningSafeZonePhase                             OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	DMember(bool)                                      bCanDespawnWhenInCombatWithPlayer                           OFFSET(get<bool>, {0x14, 1, 0, 0})
	DMember(float)                                     MaxStimulusAgeToBeConsideredInCombat                        OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(bool)                                      bCanDespawnInTheStorm                                       OFFSET(get<bool>, {0x1C, 1, 0, 0})
};

/// Struct /Script/LagerRuntime.FortAthenaLivingWorldEventTagDensityCondition
/// Size: 0x000C (0x000000 - 0x00000C)
class FFortAthenaLivingWorldEventTagDensityCondition : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	SMember(FGameplayTag)                              tag                                                         OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(float)                                     Distance                                                    OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     MaxDensity                                                  OFFSET(get<float>, {0x8, 4, 0, 0})
};

/// Struct /Script/LagerRuntime.FortAthenaLivingWorldEventDataEntry
/// Size: 0x0048 (0x000000 - 0x000048)
class FFortAthenaLivingWorldEventDataEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(TWeakObjectPtr<UFortAthenaLivingWorldEventData*>) EventData                                            OFFSET(get<T>, {0x0, 32, 0, 0})
	SMember(FScalableFloat)                            Weight                                                      OFFSET(getStruct<T>, {0x20, 40, 0, 0})
};

/// Struct /Script/LagerRuntime.FortAthenaLivingWorldEvent
/// Size: 0x01A8 (0x000008 - 0x0001B0)
class FFortAthenaLivingWorldEvent : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 432;

public:
	CMember(TWeakObjectPtr<UFortAthenaLivingWorldEventData*>) EventData                                            OFFSET(get<T>, {0x8, 32, 0, 0})
	CMember(TArray<FFortAthenaLivingWorldEventDataEntry>) EventDatas                                               OFFSET(get<T>, {0x28, 16, 0, 0})
	SMember(FScalableFloat)                            IsEnabled                                                   OFFSET(getStruct<T>, {0x38, 40, 0, 0})
	CMember(TArray<float>)                             MaxCount                                                    OFFSET(get<T>, {0x60, 16, 0, 0})
	CMember(TArray<float>)                             MaxSpawnedCount                                             OFFSET(get<T>, {0x70, 16, 0, 0})
	CMember(TArray<float>)                             EventInstanceMaxCount                                       OFFSET(get<T>, {0x80, 16, 0, 0})
	CMember(TArray<float>)                             EventInstanceMaxSpawnedCount                                OFFSET(get<T>, {0x90, 16, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0xA0, 4, 0, 0})
	DMember(bool)                                      bCheckForActorDensity                                       OFFSET(get<bool>, {0xA4, 1, 0, 0})
	DMember(float)                                     MaxActorDensityOverride                                     OFFSET(get<float>, {0xA8, 4, 0, 0})
	CMember(TArray<float>)                             MinRespawnTime                                              OFFSET(get<T>, {0xB0, 16, 0, 0})
	CMember(TArray<float>)                             MaxRespawnTime                                              OFFSET(get<T>, {0xC0, 16, 0, 0})
	CMember(TArray<float>)                             InstantDeathMinRespawnTime                                  OFFSET(get<T>, {0xD0, 16, 0, 0})
	CMember(TArray<float>)                             InstantDeathMaxRespawnTime                                  OFFSET(get<T>, {0xE0, 16, 0, 0})
	DMember(bool)                                      bOnlyInSafeZone                                             OFFSET(get<bool>, {0xF0, 1, 0, 0})
	DMember(bool)                                      bOnlyInNextSafeZone                                         OFFSET(get<bool>, {0xF1, 1, 0, 0})
	DMember(bool)                                      bOnlyInNextSafeZoneIfStormShrinking                         OFFSET(get<bool>, {0xF2, 1, 0, 0})
	SMember(FWorldConditionQueryDefinition)            CanSpawnCondition                                           OFFSET(getStruct<T>, {0xF8, 24, 0, 0})
	CMember(EAthenaGamePhaseStep)                      ActivationGamePhaseStep                                     OFFSET(get<T>, {0x110, 1, 0, 0})
	DMember(int32_t)                                   ActivationSafezoneIndex                                     OFFSET(get<int32_t>, {0x114, 4, 0, 0})
	DMember(float)                                     ActivationMinDelay                                          OFFSET(get<float>, {0x118, 4, 0, 0})
	DMember(float)                                     ActivationMaxDelay                                          OFFSET(get<float>, {0x11C, 4, 0, 0})
	DMember(float)                                     DeactivationMinDelay                                        OFFSET(get<float>, {0x120, 4, 0, 0})
	DMember(float)                                     DeactivationMaxDelay                                        OFFSET(get<float>, {0x124, 4, 0, 0})
	CMember(TArray<FFortAthenaLivingWorldEventTagDensityCondition>) TagDensityConditions                           OFFSET(get<T>, {0x128, 16, 0, 0})
	DMember(bool)                                      bCanSpawnWithoutMatchingPlayerDistance                      OFFSET(get<bool>, {0x138, 1, 0, 0})
	DMember(float)                                     MinDistanceToPlayer                                         OFFSET(get<float>, {0x13C, 4, 0, 0})
	DMember(float)                                     MaxDistanceToPlayer                                         OFFSET(get<float>, {0x140, 4, 0, 0})
	DMember(float)                                     RandomActivationChance                                      OFFSET(get<float>, {0x144, 4, 0, 0})
	SMember(FFortAthenaLivingWorldEventDespawnCondition) DespawnCondition                                          OFFSET(getStruct<T>, {0x148, 32, 0, 0})
	CMember(TArray<FFortAthenaLivingWorldDespawnCondition>) DespawnConditions                                      OFFSET(get<T>, {0x168, 16, 0, 0})
	SMember(FGameplayTagContainer)                     RequirePlaylistTags                                         OFFSET(getStruct<T>, {0x178, 32, 0, 0})
	SMember(FLivingWorldCalendarEventConditions)       CalendarEventConditions                                     OFFSET(getStruct<T>, {0x198, 24, 0, 0})
};

/// Struct /Script/LagerRuntime.LivingWorldCalendarEventConditions
/// Size: 0x0018 (0x000000 - 0x000018)
class FLivingWorldCalendarEventConditions : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(TArray<FLivingWorldCalendarEventCondition>) Conditions                                                 OFFSET(get<T>, {0x0, 16, 0, 0})
	DMember(bool)                                      IsActiveWithoutSeasonalManager                              OFFSET(get<bool>, {0x10, 1, 0, 0})
};

/// Struct /Script/LagerRuntime.LivingWorldCalendarEventCondition
/// Size: 0x0010 (0x000000 - 0x000010)
class FLivingWorldCalendarEventCondition : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FName)                                     CalendarEventName                                           OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(ELivingWorldCalendarEventConditionBehavior) Behavior                                                   OFFSET(get<T>, {0x4, 1, 0, 0})
	DMember(bool)                                      ShouldEventBeActive                                         OFFSET(get<bool>, {0x5, 1, 0, 0})
	CMember(ELivingWorldCalendarEventConditionRatioBehavior) RatioBehavior                                         OFFSET(get<T>, {0x6, 1, 0, 0})
	DMember(float)                                     RatioValue                                                  OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     RatioMaxValue                                               OFFSET(get<float>, {0xC, 4, 0, 0})
};

/// Struct /Script/LagerRuntime.PointProviderFilterEntry
/// Size: 0x0088 (0x000000 - 0x000088)
class FPointProviderFilterEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FGameplayTagQuery)                         ProviderFiltersTagQuery                                     OFFSET(getStruct<T>, {0x0, 72, 0, 0})
	SMember(FLivingWorldCalendarEventConditions)       CalendarEventConditions                                     OFFSET(getStruct<T>, {0x48, 24, 0, 0})
	SMember(FScalableFloat)                            Weight                                                      OFFSET(getStruct<T>, {0x60, 40, 0, 0})
};

/// Struct /Script/LagerRuntime.FortAthenaLivingWorldEventDataActorSpawnDescription
/// Size: 0x0030 (0x000100 - 0x000130)
class FFortAthenaLivingWorldEventDataActorSpawnDescription : public FFortAthenaLivingWorldActorSpawnDescription
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	DMember(bool)                                      bSpawnAroundDefaultPoint                                    OFFSET(get<bool>, {0x100, 1, 0, 0})
	DMember(bool)                                      bUpdateDefaultPosition                                      OFFSET(get<bool>, {0x101, 1, 0, 0})
	DMember(bool)                                      bSharePreviousActorEQSResult                                OFFSET(get<bool>, {0x102, 1, 0, 0})
	CMember(class UEnvQuery*)                          SpawnAroundEnvironmentQuery                                 OFFSET(get<T>, {0x108, 8, 0, 0})
	CMember(TEnumAsByte<EEnvQueryRunMode>)             SpawnAroundEnvironmentQueryRunMode                          OFFSET(get<T>, {0x110, 1, 0, 0})
	SMember(FSoftClassPath)                            SpawnAroundNavigationSourceOverride                         OFFSET(getStruct<T>, {0x118, 24, 0, 0})
};

/// Struct /Script/LagerRuntime.FortLivingWorldConfigOverride
/// Size: 0x0068 (0x000000 - 0x000068)
class FFortLivingWorldConfigOverride : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	CMember(TWeakObjectPtr<UWorld*>)                   SourceWorld                                                 OFFSET(get<T>, {0x0, 32, 0, 0})
	SMember(FGameplayTagContainer)                     PlaylistTag                                                 OFFSET(getStruct<T>, {0x20, 32, 0, 0})
	CMember(TWeakObjectPtr<UFortAthenaLivingWorldConfigData*>) LagerConfig                                         OFFSET(get<T>, {0x40, 32, 0, 0})
	SMember(FFortReleaseVersion)                       StartVersion                                                OFFSET(getStruct<T>, {0x60, 4, 0, 0})
	SMember(FFortReleaseVersion)                       EndVersion                                                  OFFSET(getStruct<T>, {0x64, 4, 0, 0})
};

/// Struct /Script/LagerRuntime.ortAthenaLivingWorldNavigationInvokerSettingsOverride
/// Size: 0x0070 (0x000000 - 0x000070)
class FortAthenaLivingWorldNavigationInvokerSettingsOverride : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FGameplayTagQuery)                         OverrideTagQuery                                            OFFSET(getStruct<T>, {0x0, 72, 0, 0})
	SMember(FScalableFloat)                            RegistrationDistanceToPlayer                                OFFSET(getStruct<T>, {0x48, 40, 0, 0})
};

/// Struct /Script/LagerRuntime.FortAthenaLivingWorldPlayerTracker
/// Size: 0x00C0 (0x000000 - 0x0000C0)
class FFortAthenaLivingWorldPlayerTracker : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	CMember(TSet<AFortAthenaAIBotController*>)         TrackedBotControllers                                       OFFSET(get<T>, {0x0, 80, 0, 0})
	CMember(TArray<class AFortPawn*>)                  TrackedPawns                                                OFFSET(get<T>, {0x50, 16, 0, 0})
	CMember(TArray<class AController*>)                TrackedPlayerControllers                                    OFFSET(get<T>, {0x60, 16, 0, 0})
	CMember(TArray<TWeakObjectPtr<UObject*>>)          Listeners                                                   OFFSET(get<T>, {0x70, 16, 0, 0})
};

/// Struct /Script/LagerRuntime.FortAthenaLivingWorldPointProviderUpdateHandler
/// Size: 0x0098 (0x000000 - 0x000098)
class FFortAthenaLivingWorldPointProviderUpdateHandler : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	CMember(class UFortAthenaLivingWorldManager*)      LivingWorldManager                                          OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/LagerRuntime.FortAthenaLivingWorldPreloader
/// Size: 0x00E0 (0x000000 - 0x0000E0)
class FFortAthenaLivingWorldPreloader : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	CMember(class UFortAthenaLivingWorldManager*)      LivingWorldManager                                          OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(TArray<class UClass*>)                     LoadedSpawnerDataClass                                      OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(TArray<class UClass*>)                     LoadedActorClasses                                          OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/LagerRuntime.FortAthenaLivingWorldRuntimePointProviderHandler
/// Size: 0x0060 (0x000000 - 0x000060)
class FFortAthenaLivingWorldRuntimePointProviderHandler : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(class UFortAthenaLivingWorldManager*)      LivingWorldManager                                          OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(TMap<AActor*, UObject*>)                   RuntimePointProviderMap                                     OFFSET(get<T>, {0x8, 80, 0, 0})
};

/// Struct /Script/LagerRuntime.FortAthenaLivingWorldTaggedSpawnActionClass
/// Size: 0x0010 (0x000000 - 0x000010)
class FFortAthenaLivingWorldTaggedSpawnActionClass : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FGameplayTag)                              SpawnActionTag                                              OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(class UClass*)                             SpawnActionClass                                            OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/LagerRuntime.FortAthenaLivingWorldCategoryTableDataList
/// Size: 0x0010 (0x000000 - 0x000010)
class FFortAthenaLivingWorldCategoryTableDataList : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FFortAthenaLivingWorldCategoryTableData>) CategoryTableDatas                                    OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/LagerRuntime.LivingWorldSpawnAroundPlayerConfiguration
/// Size: 0x0038 (0x000000 - 0x000038)
class FLivingWorldSpawnAroundPlayerConfiguration : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TWeakObjectPtr<UFortAthenaLivingWorldEncounter*>) Encounter                                            OFFSET(get<T>, {0x0, 32, 0, 0})
	CMember(TArray<class UClass*>)                     PointProviderClasses                                        OFFSET(get<T>, {0x20, 16, 0, 0})
	DMember(bool)                                      bRegisterReservoir                                          OFFSET(get<bool>, {0x30, 1, 0, 0})
};

/// Struct /Script/LagerRuntime.LivingWorldSpawnAroundPlayerRuntimeData
/// Size: 0x0018 (0x000000 - 0x000018)
class FLivingWorldSpawnAroundPlayerRuntimeData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(TArray<TScriptInterface<Class>>)           PointAroundPlayerProviders                                  OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(class UFortAthenaLivingWorldEncounterInstance*) Encounter                                              OFFSET(get<T>, {0x10, 8, 0, 0})
};

/// Struct /Script/LagerRuntime.FortAthenaLivingWorldSpawnerDataLimiter
/// Size: 0x00B0 (0x000000 - 0x0000B0)
class FFortAthenaLivingWorldSpawnerDataLimiter : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	CMember(TArray<class UClass*>)                     SpawnedSingleUseSpawnerData                                 OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FGameplayTagQuery)                         SingleUseSpawnerDataQuery                                   OFFSET(getStruct<T>, {0x10, 72, 0, 0})
	CMember(TArray<class UClass*>)                     SpawnedConcurrentSingleUseSpawnerData                       OFFSET(get<T>, {0x58, 16, 0, 0})
	SMember(FGameplayTagQuery)                         ConcurrentSingleUseSpawnerDataQuery                         OFFSET(getStruct<T>, {0x68, 72, 0, 0})
};

/// Struct /Script/LagerRuntime.FortAthenaLivingWorldPointProviderFilterRules
/// Size: 0x0038 (0x000000 - 0x000038)
class FFortAthenaLivingWorldPointProviderFilterRules : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Struct /Script/LagerRuntime.FortAthenaLivingWorldPointProviderSelector
/// Size: 0x0008 (0x000000 - 0x000008)
class FFortAthenaLivingWorldPointProviderSelector : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/LagerRuntime.FortAthenaLivingWorldTagQueryToSeatMapping
/// Size: 0x0050 (0x000000 - 0x000050)
class FFortAthenaLivingWorldTagQueryToSeatMapping : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FGameplayTagQuery)                         TagQuery                                                    OFFSET(getStruct<T>, {0x0, 72, 0, 0})
	DMember(int32_t)                                   SeatIndex                                                   OFFSET(get<int32_t>, {0x48, 4, 0, 0})
};

/// Enum /Script/LagerRuntime.ELivingWorldPointProviderSpawnLimiterBehavior
/// Size: 0x03
enum class ELivingWorldPointProviderSpawnLimiterBehavior : uint8_t
{
	ELivingWorldPointProviderSpawnLimiterBehavior__Lifetime                          = 0,
	ELivingWorldPointProviderSpawnLimiterBehavior__Concurrent                        = 1,
	ELivingWorldPointProviderSpawnLimiterBehavior__ELivingWorldPointProviderSpawnLimiterBehavior_MAX = 2
};

/// Enum /Script/LagerRuntime.EFortAthenaLivingWorldEventToDebugStopBehavior
/// Size: 0x03
enum class EFortAthenaLivingWorldEventToDebugStopBehavior : uint8_t
{
	EFortAthenaLivingWorldEventToDebugStopBehavior__Once                             = 0,
	EFortAthenaLivingWorldEventToDebugStopBehavior__UntilEventSuccess                = 1,
	EFortAthenaLivingWorldEventToDebugStopBehavior__EFortAthenaLivingWorldEventToDebugStopBehavior_MAX = 2
};

/// Enum /Script/LagerRuntime.ELivingWorldCalendarEventConditionBehavior
/// Size: 0x03
enum class ELivingWorldCalendarEventConditionBehavior : uint8_t
{
	ELivingWorldCalendarEventConditionBehavior__IsActive                             = 0,
	ELivingWorldCalendarEventConditionBehavior__Ratio                                = 1,
	ELivingWorldCalendarEventConditionBehavior__ELivingWorldCalendarEventConditionBehavior_MAX = 2
};

/// Enum /Script/LagerRuntime.ELivingWorldCalendarEventConditionRatioBehavior
/// Size: 0x06
enum class ELivingWorldCalendarEventConditionRatioBehavior : uint8_t
{
	ELivingWorldCalendarEventConditionRatioBehavior__Less                            = 0,
	ELivingWorldCalendarEventConditionRatioBehavior__LessOrEqual                     = 1,
	ELivingWorldCalendarEventConditionRatioBehavior__Greater                         = 2,
	ELivingWorldCalendarEventConditionRatioBehavior__GreaterOrEqual                  = 3,
	ELivingWorldCalendarEventConditionRatioBehavior__InBetween                       = 4,
	ELivingWorldCalendarEventConditionRatioBehavior__ELivingWorldCalendarEventConditionRatioBehavior_MAX = 5
};

/// Enum /Script/LagerRuntime.EFortAthenaLivingWorldEventRuntimeDeactivationReason
/// Size: 0x07
enum class EFortAthenaLivingWorldEventRuntimeDeactivationReason : uint8_t
{
	EFortAthenaLivingWorldEventRuntimeDeactivationReason__None                       = 0,
	EFortAthenaLivingWorldEventRuntimeDeactivationReason__NoValidEventData           = 1,
	EFortAthenaLivingWorldEventRuntimeDeactivationReason__RandomDeactivation         = 2,
	EFortAthenaLivingWorldEventRuntimeDeactivationReason__CalendarEvent              = 3,
	EFortAthenaLivingWorldEventRuntimeDeactivationReason__MatchedPrefabAndNormalActor = 4,
	EFortAthenaLivingWorldEventRuntimeDeactivationReason__ActorDescDoesntMatchAnySpawnerData = 5,
	EFortAthenaLivingWorldEventRuntimeDeactivationReason__EFortAthenaLivingWorldEventRuntimeDeactivationReason_MAX = 6
};

