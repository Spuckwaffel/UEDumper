
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

/// Class /Script/LagerRuntime.FortAthenaLivingWorldPointProvidersEnabler
/// Size: 0x00B8 (0x000290 - 0x000348)
class AFortAthenaLivingWorldPointProvidersEnabler : public AActor
{ 
public:
	SDK_UNDEFINED(16,13341) /* TArray<TScriptInterface<Class>> */ __um(EnabledLinkedPointProviders);               // 0x0290   (0x0010)  
	SDK_UNDEFINED(16,13342) /* TArray<TScriptInterface<Class>> */ __um(AvailableLinkedPointProviders);             // 0x02A0   (0x0010)  
	FGameplayTagContainer                              EnablerTags;                                                // 0x02B0   (0x0020)  
	SDK_UNDEFINED(16,13343) /* TArray<TScriptInterface<Class>> */ __um(LinkedPointProviders);                      // 0x02D0   (0x0010)  
	FScalableFloat                                     PointProvidersToEnable;                                     // 0x02E0   (0x0028)  
	FScalableFloat                                     EvaluateAutomatically;                                      // 0x0308   (0x0028)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0330   (0x0008)  MISSED
	SDK_UNDEFINED(16,13344) /* FMulticastInlineDelegate */ __um(OnCompletedEvaluationDelegate);                    // 0x0338   (0x0010)  


	/// Functions
	// Function /Script/LagerRuntime.FortAthenaLivingWorldPointProvidersEnabler.RemoveClosestPointProvidersToPoint
	// void RemoveClosestPointProvidersToPoint(FVector& Point, float MaximumDistance, int32_t PointsToDisable);              // [0xa21a96c] Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldPointProvidersEnabler.OnCurrentPlaylistLoaded
	// void OnCurrentPlaylistLoaded(FName PlaylistName, FGameplayTagContainer& PlaylistContextTags);                         // [0x81ed394] Final|Native|Private|HasOutParms 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldPointProvidersEnabler.OnCompletedEvaluation__DelegateSignature
	// void OnCompletedEvaluation__DelegateSignature(TArray<TScriptInterface<Class>>& EnabledPointProviders);                // [0x18a39e4] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldPointProvidersEnabler.HasCompletedEvaluation
	// bool HasCompletedEvaluation();                                                                                        // [0xa2190ac] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldPointProvidersEnabler.GetEnablerTags
	// FGameplayTagContainer GetEnablerTags();                                                                               // [0xa218e84] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldPointProvidersEnabler.GetEnabledLinkedPointProviders
	// TArray<TScriptInterface<Class>> GetEnabledLinkedPointProviders();                                                     // [0xa218e68] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldPointProvidersEnabler.EvaluateAndEnablePointProviders
	// void EvaluateAndEnablePointProviders();                                                                               // [0x36203b0] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldPointProvidersEnabler.DoesStartEnabled
	// bool DoesStartEnabled();                                                                                              // [0xa218de8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/LagerRuntime.FortAthenaLivingWorldPointProvidersEnabler_MiniMapDataOverride
/// Size: 0x0000 (0x000348 - 0x000348)
class AFortAthenaLivingWorldPointProvidersEnabler_MiniMapDataOverride : public AFortAthenaLivingWorldPointProvidersEnabler
{ 
public:
};

/// Class /Script/LagerRuntime.FortAthenaLinearEncounterAnalyticComponent
/// Size: 0x0058 (0x0000A0 - 0x0000F8)
class UFortAthenaLinearEncounterAnalyticComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x58];                                      // 0x00A0   (0x0058)  MISSED


	/// Functions
	// Function /Script/LagerRuntime.FortAthenaLinearEncounterAnalyticComponent.OnStageCompleted
	// void OnStageCompleted(TArray<AFortPickup*>& SpawnedRewards);                                                          // [0x861bc7c] Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LagerRuntime.FortAthenaLinearEncounterAnalyticComponent.OnEncounterStart
	// void OnEncounterStart(class UFortAthenaLivingWorldEncounterInstance* InAttackerEncounter, class UFortAthenaLivingWorldEncounterInstance* InDefenderEncounter); // [0x6cbaff4] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/LagerRuntime.FortAthenaLinearEncounterAnalyticComponent.OnEncounterEnd
	// void OnEncounterEnd();                                                                                                // [0x36203b0] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/LagerRuntime.FortAthenaLinearEncounterAnalyticComponent.OnDefenderSpawned
	// void OnDefenderSpawned(class AActor* SpawnedDefender);                                                                // [0xa20218c] Final|Native|Private 
	// Function /Script/LagerRuntime.FortAthenaLinearEncounterAnalyticComponent.OnDefenderDied
	// void OnDefenderDied(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, FVector HitLocation, class UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum); // [0xa201c0c] Final|Native|Private|HasDefaults 
	// Function /Script/LagerRuntime.FortAthenaLinearEncounterAnalyticComponent.OnDefenderDidDamage
	// void OnDefenderDidDamage(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, FVector HitLocation, class UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum); // [0xa201750] Final|Native|Private|HasDefaults 
	// Function /Script/LagerRuntime.FortAthenaLinearEncounterAnalyticComponent.OnDefenderDamaged
	// void OnDefenderDamaged(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, FVector HitLocation, class UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum); // [0xa2012a0] Final|Native|Private|HasDefaults 
	// Function /Script/LagerRuntime.FortAthenaLinearEncounterAnalyticComponent.OnAttackerSpawned
	// void OnAttackerSpawned(class AActor* SpawnedAttacker);                                                                // [0xa200f68] Final|Native|Private 
};

/// Class /Script/LagerRuntime.FortAthenaLivingWorldConditionSchema
/// Size: 0x0000 (0x000038 - 0x000038)
class UFortAthenaLivingWorldConditionSchema : public UWorldConditionSchema
{ 
public:
};

/// Class /Script/LagerRuntime.FortAthenaLivingWorldEventDataConditionSchema
/// Size: 0x0008 (0x000038 - 0x000040)
class UFortAthenaLivingWorldEventDataConditionSchema : public UFortAthenaLivingWorldConditionSchema
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0038   (0x0008)  MISSED
};

/// Struct /Script/LagerRuntime.FortAthenaLivingWorldCategoryTableData
/// Size: 0x0050 (0x000000 - 0x000050)
struct FFortAthenaLivingWorldCategoryTableData
{ 
	FName                                              Name;                                                       // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	SDK_UNDEFINED(32,13345) /* TWeakObjectPtr<UDataTable*> */ __um(CategoryTable);                                 // 0x0008   (0x0020)  
	FScalableFloat                                     IsEnabled;                                                  // 0x0028   (0x0028)  
};

/// Struct /Script/LagerRuntime.FortAthenaLivingWorldTagDensityGridData
/// Size: 0x0058 (0x000000 - 0x000058)
struct FFortAthenaLivingWorldTagDensityGridData
{ 
	FGameplayTag                                       tag;                                                        // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	FScalableFloat                                     GridCellSize;                                               // 0x0008   (0x0028)  
	FScalableFloat                                     SparseToDenseRatio;                                         // 0x0030   (0x0028)  
};

/// Class /Script/LagerRuntime.FortAthenaLivingWorldConfigData
/// Size: 0x02E8 (0x000030 - 0x000318)
class UFortAthenaLivingWorldConfigData : public UDataAsset
{ 
public:
	TArray<FFortAthenaLivingWorldCategoryTableData>    CategoryTableDatas;                                         // 0x0030   (0x0010)  
	FScalableFloat                                     MaxActorCount;                                              // 0x0040   (0x0028)  
	FScalableFloat                                     MaxEventSpawnPerTick;                                       // 0x0068   (0x0028)  
	FScalableFloat                                     MaxActorDespawnPerTick;                                     // 0x0090   (0x0028)  
	FScalableFloat                                     MinimumEventGenerationInterval;                             // 0x00B8   (0x0028)  
	FScalableFloat                                     MaxActorDensity;                                            // 0x00E0   (0x0028)  
	FScalableFloat                                     MaxActorUpdatesPerTick;                                     // 0x0108   (0x0028)  
	FScalableFloat                                     MaxPointProviderUpdatesPerTick;                             // 0x0130   (0x0028)  
	FScalableFloat                                     ActorDensityGridCellSize;                                   // 0x0158   (0x0028)  
	FScalableFloat                                     ActorDensitySparseToDenseRatio;                             // 0x0180   (0x0028)  
	FScalableFloat                                     PointClusterSize;                                           // 0x01A8   (0x0028)  
	FScalableFloat                                     MinNumberOfPlayerForAggressiveSpawning;                     // 0x01D0   (0x0028)  
	TArray<FFortAthenaLivingWorldTagDensityGridData>   TagDensityGridData;                                         // 0x01F8   (0x0010)  
	FGameplayTagQuery                                  SingleUseSpawnerDataQuery;                                  // 0x0208   (0x0048)  
	FGameplayTagQuery                                  ConcurrentSingleUseSpawnerDataQuery;                        // 0x0250   (0x0048)  
	class UClass*                                      EQSActorHelperClass;                                        // 0x0298   (0x0008)  
	FScalableFloat                                     DelayEventGeneration;                                       // 0x02A0   (0x0028)  
	FScalableFloat                                     RestrictDensityReservationForReservoirs;                    // 0x02C8   (0x0028)  
	FScalableFloat                                     TrackDeadPlayers;                                           // 0x02F0   (0x0028)  
};

/// Struct /Script/LagerRuntime.FortAthenaActorDensityDebugInfo
/// Size: 0x0048 (0x000000 - 0x000048)
struct FFortAthenaActorDensityDebugInfo
{ 
	SDK_UNDEFINED(16,13346) /* FString */              __um(ActorName);                                            // 0x0000   (0x0010)  
	FVector                                            ActorPosition;                                              // 0x0010   (0x0018)  
	FIntVector                                         MinCellIndex;                                               // 0x0028   (0x000C)  
	FIntVector                                         MaxCellIndex;                                               // 0x0034   (0x000C)  
	float                                              DensityValue;                                               // 0x0040   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0044   (0x0004)  MISSED
};

/// Class /Script/LagerRuntime.FortAthenaLivingWorldDebugDensityMiniMapIndicator
/// Size: 0x0060 (0x000140 - 0x0001A0)
class UFortAthenaLivingWorldDebugDensityMiniMapIndicator : public UFortMiniMapIndicator
{ 
public:
	TArray<FFortAthenaActorDensityDebugInfo>           ActorDebugInfos;                                            // 0x0140   (0x0010)  
	TArray<float>                                      DensityGridValues;                                          // 0x0150   (0x0010)  
	FVector                                            GridOrigin;                                                 // 0x0160   (0x0018)  
	FIntVector                                         MaxGridSize;                                                // 0x0178   (0x000C)  
	float                                              CellSize;                                                   // 0x0184   (0x0004)  
	float                                              MaxDensity;                                                 // 0x0188   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x018C   (0x0004)  MISSED
	SDK_UNDEFINED(16,13347) /* FString */              __um(DisplayName);                                          // 0x0190   (0x0010)  
};

/// Class /Script/LagerRuntime.FortAthenaLivingWorldDespawnConditionSchema
/// Size: 0x0008 (0x000038 - 0x000040)
class UFortAthenaLivingWorldDespawnConditionSchema : public UFortAthenaLivingWorldConditionSchema
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0038   (0x0008)  MISSED
};

/// Struct /Script/LagerRuntime.FortAthenaLivingWorldEncounterStage
/// Size: 0x00A0 (0x000000 - 0x0000A0)
struct FFortAthenaLivingWorldEncounterStage
{ 
	SDK_UNDEFINED(32,13348) /* TWeakObjectPtr<UDataTable*> */ __um(EventTable);                                    // 0x0000   (0x0020)  
	FScalableFloat                                     MaximumConcurrentNumberOfAI;                                // 0x0020   (0x0028)  
	bool                                               bAllowRandomMaximumActorCount;                              // 0x0048   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0049   (0x0007)  MISSED
	FScalableFloat                                     MaximumConcurrentNumberOfAI_LowValue;                       // 0x0050   (0x0028)  
	FScalableFloat                                     MaxSpawnCountPerEventGeneration;                            // 0x0078   (0x0028)  
};

/// Class /Script/LagerRuntime.FortAthenaLivingWorldEncounter
/// Size: 0x0038 (0x000030 - 0x000068)
class UFortAthenaLivingWorldEncounter : public UDataAsset
{ 
public:
	FScalableFloat                                     IntervalBetweenEventGeneration;                             // 0x0030   (0x0028)  
	TArray<FFortAthenaLivingWorldEncounterStage>       Stages;                                                     // 0x0058   (0x0010)  
};

/// Struct /Script/LagerRuntime.FortAthenaLivingWorldConditionContainer
/// Size: 0x0018 (0x000000 - 0x000018)
struct FFortAthenaLivingWorldConditionContainer
{ 
	class UObject*                                     Owner;                                                      // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0008   (0x0010)  MISSED
};

/// Class /Script/LagerRuntime.FortAthenaLivingWorldEncounterInstance
/// Size: 0x0178 (0x000028 - 0x0001A0)
class UFortAthenaLivingWorldEncounterInstance : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	SDK_UNDEFINED(16,13349) /* FMulticastInlineDelegate */ __um(OnActorSpawned);                                   // 0x0028   (0x0010)  
	SDK_UNDEFINED(16,13350) /* FMulticastInlineDelegate */ __um(OnFirstActorSpawned);                              // 0x0038   (0x0010)  
	SDK_UNDEFINED(16,13351) /* FMulticastInlineDelegate */ __um(OnActorDestroyed);                                 // 0x0048   (0x0010)  
	SDK_UNDEFINED(16,13352) /* FMulticastInlineDelegate */ __um(OnLastActorDestroyed);                             // 0x0058   (0x0010)  
	SDK_UNDEFINED(16,13353) /* FMulticastInlineDelegate */ __um(OnActorDied);                                      // 0x0068   (0x0010)  
	SDK_UNDEFINED(16,13354) /* FMulticastInlineDelegate */ __um(OnLastActorDied);                                  // 0x0078   (0x0010)  
	SDK_UNDEFINED(16,13355) /* FMulticastInlineDelegate */ __um(OnEventSpawned);                                   // 0x0088   (0x0010)  
	unsigned char                                      UnknownData01_5[0x50];                                      // 0x0098   (0x0050)  MISSED
	FFortAthenaLivingWorldConditionContainer           ConditionContainer;                                         // 0x00E8   (0x0018)  
	SDK_UNDEFINED(16,13356) /* TArray<TScriptInterface<Class>> */ __um(AllowedPointProviders);                     // 0x0100   (0x0010)  
	SDK_UNDEFINED(16,13357) /* TArray<TScriptInterface<Class>> */ __um(RegisteredPointProviders);                  // 0x0110   (0x0010)  
	TArray<class UFortAthenaLivingWorldEventData*>     RuntimeCreatedEventDatas;                                   // 0x0120   (0x0010)  
	unsigned char                                      UnknownData02_5[0x20];                                      // 0x0130   (0x0020)  MISSED
	SDK_UNDEFINED(32,13358) /* TWeakObjectPtr<UFortAthenaLivingWorldEncounter*> */ __um(EncounterDefinition);      // 0x0150   (0x0020)  
	class AActor*                                      ActorDensityReservoir;                                      // 0x0170   (0x0008)  
	TArray<class AActor*>                              SpawnedActors;                                              // 0x0178   (0x0010)  
	unsigned char                                      UnknownData03_5[0x8];                                       // 0x0188   (0x0008)  MISSED
	int32_t                                            CurrentStageIndex;                                          // 0x0190   (0x0004)  
	int32_t                                            CurrentStageMaxActorCount;                                  // 0x0194   (0x0004)  
	unsigned char                                      UnknownData04_5[0x4];                                       // 0x0198   (0x0004)  MISSED
	bool                                               bIsPaused;                                                  // 0x019C   (0x0001)  
	unsigned char                                      UnknownData05_6[0x3];                                       // 0x019D   (0x0003)  MISSED


	/// Functions
	// Function /Script/LagerRuntime.FortAthenaLivingWorldEncounterInstance.StartEncounterStage
	// void StartEncounterStage(int32_t StageIndex);                                                                         // [0xa203778] Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldEncounterInstance.ResumeEncounter
	// void ResumeEncounter();                                                                                               // [0xa203430] Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldEncounterInstance.Reset
	// void Reset();                                                                                                         // [0x36203b0] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldEncounterInstance.RequestEventGeneration
	// void RequestEventGeneration();                                                                                        // [0xa20320c] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldEncounterInstance.RemoveAllowedPointProvider
	// void RemoveAllowedPointProvider(TScriptInterface<Class>& PointProvider);                                              // [0xa20315c] Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldEncounterInstance.PauseEncounter
	// void PauseEncounter();                                                                                                // [0xa202ae8] Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldEncounterInstance.OwnsActor
	// bool OwnsActor(class AActor* Actor);                                                                                  // [0x8685cb4] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldEncounterInstance.OnLastActorDied__DelegateSignature
	// void OnLastActorDied__DelegateSignature();                                                                            // [0x18a39e4] MulticastDelegate|Public|Delegate 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldEncounterInstance.OnEventSpawned__DelegateSignature
	// void OnEventSpawned__DelegateSignature(TArray<AActor*> SpawnedActors);                                                // [0x18a39e4] MulticastDelegate|Public|Delegate 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldEncounterInstance.OnEncounterActorDied
	// void OnEncounterActorDied(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, FVector HitLocation, class UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum); // [0xa202310] Final|Native|Private|HasDefaults 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldEncounterInstance.OnActorSpawned__DelegateSignature
	// void OnActorSpawned__DelegateSignature(class AActor* SpawnedActor);                                                   // [0x18a39e4] MulticastDelegate|Public|Delegate 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldEncounterInstance.OnActorDied__DelegateSignature
	// void OnActorDied__DelegateSignature(class AActor* DiedActor);                                                         // [0x18a39e4] MulticastDelegate|Public|Delegate 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldEncounterInstance.OnActorDestroyed__DelegateSignature
	// void OnActorDestroyed__DelegateSignature(class AActor* DestroyedActor);                                               // [0x18a39e4] MulticastDelegate|Public|Delegate 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldEncounterInstance.HasReachedMaxSpawnedCount
	// bool HasReachedMaxSpawnedCount();                                                                                     // [0x3219f08] Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldEncounterInstance.HasPendingSpawnRequest
	// bool HasPendingSpawnRequest();                                                                                        // [0x3219f08] Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldEncounterInstance.GetTotalActorCount
	// int32_t GetTotalActorCount();                                                                                         // [0x81165c8] Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldEncounterInstance.GetAliveSpawnedActorCount
	// int32_t GetAliveSpawnedActorCount();                                                                                  // [0xa200700] Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldEncounterInstance.AdvanceEncounterStage
	// void AdvanceEncounterStage();                                                                                         // [0xa200468] Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldEncounterInstance.AddAllowedPointProvider
	// void AddAllowedPointProvider(TScriptInterface<Class>& PointProvider);                                                 // [0xa200398] Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/LagerRuntime.FortAthenaLivingWorldDespawnCondition
/// Size: 0x0048 (0x000000 - 0x000048)
struct FFortAthenaLivingWorldDespawnCondition
{ 
	FWorldConditionQueryDefinition                     DespawnWorldCondition;                                      // 0x0000   (0x0018)  
	float                                              TimeAsCandidateBeforeDespawn;                               // 0x0018   (0x0004)  
	float                                              TimeAsCandidateBeforeDespawnDeviation;                      // 0x001C   (0x0004)  
	bool                                               bUseCustomDeathTag;                                         // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0021   (0x0007)  MISSED
	FGameplayTagContainer                              DeathTagContainer;                                          // 0x0028   (0x0020)  
};

/// Struct /Script/LagerRuntime.LivingWorldCalendarEventCondition
/// Size: 0x0010 (0x000000 - 0x000010)
struct FLivingWorldCalendarEventCondition
{ 
	FName                                              CalendarEventName;                                          // 0x0000   (0x0004)  
	ELivingWorldCalendarEventConditionBehavior         Behavior;                                                   // 0x0004   (0x0001)  
	bool                                               ShouldEventBeActive;                                        // 0x0005   (0x0001)  
	ELivingWorldCalendarEventConditionRatioBehavior    RatioBehavior;                                              // 0x0006   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x0007   (0x0001)  MISSED
	float                                              RatioValue;                                                 // 0x0008   (0x0004)  
	float                                              RatioMaxValue;                                              // 0x000C   (0x0004)  
};

/// Struct /Script/LagerRuntime.LivingWorldCalendarEventConditions
/// Size: 0x0018 (0x000000 - 0x000018)
struct FLivingWorldCalendarEventConditions
{ 
	TArray<FLivingWorldCalendarEventCondition>         Conditions;                                                 // 0x0000   (0x0010)  
	bool                                               IsActiveWithoutSeasonalManager;                             // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/LagerRuntime.PointProviderFilterEntry
/// Size: 0x0088 (0x000000 - 0x000088)
struct FPointProviderFilterEntry
{ 
	FGameplayTagQuery                                  ProviderFiltersTagQuery;                                    // 0x0000   (0x0048)  
	FLivingWorldCalendarEventConditions                CalendarEventConditions;                                    // 0x0048   (0x0018)  
	FScalableFloat                                     Weight;                                                     // 0x0060   (0x0028)  
};

/// Struct /Script/LagerRuntime.FortAthenaLivingWorldTaggedSpawnActionClass
/// Size: 0x0010 (0x000000 - 0x000010)
struct FFortAthenaLivingWorldTaggedSpawnActionClass
{ 
	FGameplayTag                                       SpawnActionTag;                                             // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	class UClass*                                      SpawnActionClass;                                           // 0x0008   (0x0008)  
};

/// Struct /Script/LagerRuntime.FortAthenaLivingWorldEventTagDensityRegistration
/// Size: 0x0058 (0x000000 - 0x000058)
struct FFortAthenaLivingWorldEventTagDensityRegistration
{ 
	FGameplayTag                                       tag;                                                        // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	FScalableFloat                                     Range;                                                      // 0x0008   (0x0028)  
	FScalableFloat                                     DensityValue;                                               // 0x0030   (0x0028)  
};

/// Struct /Script/LagerRuntime.FortAthenaLivingWorldTagTimer
/// Size: 0x0030 (0x000000 - 0x000030)
struct FFortAthenaLivingWorldTagTimer
{ 
	FGameplayTag                                       tag;                                                        // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	FScalableFloat                                     duration;                                                   // 0x0008   (0x0028)  
};

/// Struct /Script/LagerRuntime.FortAthenaLivingWorldActorSpawnDescription
/// Size: 0x0100 (0x000000 - 0x000100)
struct FFortAthenaLivingWorldActorSpawnDescription
{ 
	SDK_UNDEFINED(32,13359) /* TWeakObjectPtr<UClass*> */ __um(ActorClass);                                        // 0x0000   (0x0020)  
	SDK_UNDEFINED(32,13360) /* TWeakObjectPtr<UClass*> */ __um(SpawnerData);                                       // 0x0020   (0x0020)  
	FGameplayTagQuery                                  SpawnerDataTagQuery;                                        // 0x0040   (0x0048)  
	FScalableFloat                                     ActorDensityValue;                                          // 0x0088   (0x0028)  
	FScalableFloat                                     DensityComputationRangeOverride;                            // 0x00B0   (0x0028)  
	TArray<FFortAthenaLivingWorldEventTagDensityRegistration> TagDensityRegistrations;                             // 0x00D8   (0x0010)  
	TArray<FFortAthenaLivingWorldTagTimer>             PostDestructionTagDensityPersistenceDuration;               // 0x00E8   (0x0010)  
	bool                                               bPreloadOnClient;                                           // 0x00F8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x00F9   (0x0007)  MISSED
};

/// Struct /Script/LagerRuntime.FortAthenaLivingWorldEventDataActorSpawnDescription
/// Size: 0x0030 (0x000100 - 0x000130)
struct FFortAthenaLivingWorldEventDataActorSpawnDescription : FFortAthenaLivingWorldActorSpawnDescription
{ 
	bool                                               bSpawnAroundDefaultPoint;                                   // 0x0100   (0x0001)  
	bool                                               bUpdateDefaultPosition;                                     // 0x0101   (0x0001)  
	bool                                               bSharePreviousActorEQSResult;                               // 0x0102   (0x0001)  
	unsigned char                                      UnknownData00_5[0x5];                                       // 0x0103   (0x0005)  MISSED
	class UEnvQuery*                                   SpawnAroundEnvironmentQuery;                                // 0x0108   (0x0008)  
	SDK_UNDEFINED(1,13361) /* TEnumAsByte<EEnvQueryRunMode> */ __um(SpawnAroundEnvironmentQueryRunMode);           // 0x0110   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0111   (0x0007)  MISSED
	FSoftClassPath                                     SpawnAroundNavigationSourceOverride;                        // 0x0118   (0x0018)  
};

/// Class /Script/LagerRuntime.FortAthenaLivingWorldEventData
/// Size: 0x0120 (0x000030 - 0x000150)
class UFortAthenaLivingWorldEventData : public UDataAsset
{ 
public:
	int32_t                                            TimeOfDayFilters;                                           // 0x0030   (0x0004)  
	float                                              WaterLevelIndexMin;                                         // 0x0034   (0x0004)  
	float                                              WaterLevelIndexMax;                                         // 0x0038   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x003C   (0x0004)  MISSED
	FWorldConditionQueryDefinition                     CanSpawnCondition;                                          // 0x0040   (0x0018)  
	TArray<FFortAthenaLivingWorldDespawnCondition>     DespawnConditions;                                          // 0x0058   (0x0010)  
	FGameplayTagQuery                                  ProviderFiltersTagQuery;                                    // 0x0068   (0x0048)  
	TArray<FPointProviderFilterEntry>                  ProviderFiltersEntries;                                     // 0x00B0   (0x0010)  
	FInstancedStruct                                   PointProviderSelector;                                      // 0x00C0   (0x0010)  
	FInstancedStruct                                   SpawnerDataSelector;                                        // 0x00D0   (0x0010)  
	TArray<FFortAthenaLivingWorldTaggedSpawnActionClass> SpawnActions;                                             // 0x00E0   (0x0010)  
	FScalableFloat                                     MinActorCountToSpawn;                                       // 0x00F0   (0x0028)  
	FScalableFloat                                     MaxActorCountToSpawn;                                       // 0x0118   (0x0028)  
	TArray<FFortAthenaLivingWorldEventDataActorSpawnDescription> ActorDescriptions;                                // 0x0140   (0x0010)  
};

/// Struct /Script/LagerRuntime.FortLivingWorldConfigOverride
/// Size: 0x0068 (0x000000 - 0x000068)
struct FFortLivingWorldConfigOverride
{ 
	SDK_UNDEFINED(32,13362) /* TWeakObjectPtr<UWorld*> */ __um(SourceWorld);                                       // 0x0000   (0x0020)  
	FGameplayTagContainer                              PlaylistTag;                                                // 0x0020   (0x0020)  
	SDK_UNDEFINED(32,13363) /* TWeakObjectPtr<UFortAthenaLivingWorldConfigData*> */ __um(LagerConfig);             // 0x0040   (0x0020)  
	FFortReleaseVersion                                StartVersion;                                               // 0x0060   (0x0004)  
	FFortReleaseVersion                                EndVersion;                                                 // 0x0064   (0x0004)  
};

/// Struct /Script/LagerRuntime.FortAthenaLivingWorldSpawnerDataLimiter
/// Size: 0x00B0 (0x000000 - 0x0000B0)
struct FFortAthenaLivingWorldSpawnerDataLimiter
{ 
	TArray<class UClass*>                              SpawnedSingleUseSpawnerData;                                // 0x0000   (0x0010)  
	FGameplayTagQuery                                  SingleUseSpawnerDataQuery;                                  // 0x0010   (0x0048)  
	TArray<class UClass*>                              SpawnedConcurrentSingleUseSpawnerData;                      // 0x0058   (0x0010)  
	FGameplayTagQuery                                  ConcurrentSingleUseSpawnerDataQuery;                        // 0x0068   (0x0048)  
};

/// Struct /Script/LagerRuntime.FortAthenaLivingWorldActorUpdateHandler
/// Size: 0x00B0 (0x000000 - 0x0000B0)
struct FFortAthenaLivingWorldActorUpdateHandler
{ 
	class UFortAthenaLivingWorldManager*               LivingWorldManager;                                         // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_6[0xA8];                                      // 0x0008   (0x00A8)  MISSED
};

/// Struct /Script/LagerRuntime.FortAthenaLivingWorldPointProviderUpdateHandler
/// Size: 0x0098 (0x000000 - 0x000098)
struct FFortAthenaLivingWorldPointProviderUpdateHandler
{ 
	class UFortAthenaLivingWorldManager*               LivingWorldManager;                                         // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_6[0x90];                                      // 0x0008   (0x0090)  MISSED
};

/// Struct /Script/LagerRuntime.FortAthenaLivingWorldRuntimePointProviderHandler
/// Size: 0x0060 (0x000000 - 0x000060)
struct FFortAthenaLivingWorldRuntimePointProviderHandler
{ 
	class UFortAthenaLivingWorldManager*               LivingWorldManager;                                         // 0x0000   (0x0008)  
	SDK_UNDEFINED(80,13364) /* TMap<AActor*, UObject*> */ __um(RuntimePointProviderMap);                           // 0x0008   (0x0050)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0058   (0x0008)  MISSED
};

/// Struct /Script/LagerRuntime.FortAthenaLivingWorldPlayerTracker
/// Size: 0x00C0 (0x000000 - 0x0000C0)
struct FFortAthenaLivingWorldPlayerTracker
{ 
	SDK_UNDEFINED(80,13365) /* TSet<AFortAthenaAIBotController*> */ __um(TrackedBotControllers);                   // 0x0000   (0x0050)  
	TArray<class AFortPawn*>                           TrackedPawns;                                               // 0x0050   (0x0010)  
	TArray<class AController*>                         TrackedPlayerControllers;                                   // 0x0060   (0x0010)  
	SDK_UNDEFINED(16,13366) /* TArray<TWeakObjectPtr<UObject*>> */ __um(Listeners);                                // 0x0070   (0x0010)  
	unsigned char                                      UnknownData00_6[0x40];                                      // 0x0080   (0x0040)  MISSED
};

/// Struct /Script/LagerRuntime.FortAthenaLivingWorldPreloader
/// Size: 0x00E0 (0x000000 - 0x0000E0)
struct FFortAthenaLivingWorldPreloader
{ 
	class UFortAthenaLivingWorldManager*               LivingWorldManager;                                         // 0x0000   (0x0008)  
	TArray<class UClass*>                              LoadedSpawnerDataClass;                                     // 0x0008   (0x0010)  
	TArray<class UClass*>                              LoadedActorClasses;                                         // 0x0018   (0x0010)  
	unsigned char                                      UnknownData00_6[0xB8];                                      // 0x0028   (0x00B8)  MISSED
};

/// Class /Script/LagerRuntime.FortAthenaLivingWorldManager
/// Size: 0x0C10 (0x0000A0 - 0x000CB0)
class UFortAthenaLivingWorldManager : public UGameStateComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x00A0   (0x0008)  MISSED
	SDK_UNDEFINED(32,13367) /* TWeakObjectPtr<UFortAthenaLivingWorldConfigData*> */ __um(DefaultLagerConfig);      // 0x00A8   (0x0020)  
	TArray<FFortLivingWorldConfigOverride>             LagerConfigOverrides;                                       // 0x00C8   (0x0010)  
	FScalableFloat                                     LagerEnabled;                                               // 0x00D8   (0x0028)  
	SDK_UNDEFINED(80,13368) /* TMap<FGameplayTag, UClass*> */ __um(TaggedSpawnActionClassMap);                     // 0x0100   (0x0050)  
	SDK_UNDEFINED(16,13369) /* TArray<TScriptInterface<Class>> */ __um(PointProviders);                            // 0x0150   (0x0010)  
	int32_t                                            RegisteredPointProvidersCount;                              // 0x0160   (0x0004)  
	unsigned char                                      UnknownData01_5[0xC];                                       // 0x0164   (0x000C)  MISSED
	FSlateBrush                                        SpecialActorMinimapIconBrush;                               // 0x0170   (0x00C0)  
	FVector2D                                          SpecialActorMinimapIconScale;                               // 0x0230   (0x0010)  
	FSlateBrush                                        SpecialActorCompassIconBrush;                               // 0x0240   (0x00C0)  
	FVector2D                                          SpecialActorCompassIconScale;                               // 0x0300   (0x0010)  
	FFortAthenaLivingWorldSpawnerDataLimiter           SpawnerDataLimiter;                                         // 0x0310   (0x00B0)  
	class UWorld*                                      CachedWorld;                                                // 0x03C0   (0x0008)  
	class UFortAthenaLivingWorldConfigData*            CachedConfig;                                               // 0x03C8   (0x0008)  
	TArray<class UFortAthenaLivingWorldEncounterInstance*> RunningEncounterInstances;                              // 0x03D0   (0x0010)  
	class UFortSeasonalEventManager*                   CachedSeasonalEventManager;                                 // 0x03E0   (0x0008)  
	SDK_UNDEFINED(16,13370) /* TArray<TWeakObjectPtr<UClass*>> */ __um(ActorClassToPreloadOnClient);               // 0x03E8   (0x0010)  
	FFortAthenaLivingWorldActorUpdateHandler           ActorUpdateHandler;                                         // 0x03F8   (0x00B0)  
	FFortAthenaLivingWorldPointProviderUpdateHandler   PointProviderUpdateHandler;                                 // 0x04A8   (0x0098)  
	FFortAthenaLivingWorldRuntimePointProviderHandler  RuntimePointProviderHandler;                                // 0x0540   (0x0060)  
	FFortAthenaLivingWorldPlayerTracker                PlayerTracker;                                              // 0x05A0   (0x00C0)  
	FFortAthenaLivingWorldPreloader                    Preloader;                                                  // 0x0660   (0x00E0)  
	FFortAthenaLivingWorldConditionContainer           GlobalConditionContainer;                                   // 0x0740   (0x0018)  
	unsigned char                                      UnknownData02_5[0x498];                                     // 0x0758   (0x0498)  MISSED
	SDK_UNDEFINED(80,13371) /* TMap<UClass*, UFortAthenaLivingWorldSpawnAction*> */ __um(SpawnActionCache);        // 0x0BF0   (0x0050)  
	class AFortAthenaLivingWorldEQSHelper*             EQSHelper;                                                  // 0x0C40   (0x0008)  
	class UFortAthenaLivingWorldDebugDensityMiniMapIndicator* DebugDensityMinimapIndicator;                        // 0x0C48   (0x0008)  
	unsigned char                                      UnknownData03_6[0x60];                                      // 0x0C50   (0x0060)  MISSED


	/// Functions
	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.UnregisterDensityReservoir
	// void UnregisterDensityReservoir(class AActor* ActorDensityReservoir);                                                 // [0xa2040d0] Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.TrySpawnEventWithPreDespawn
	// bool TrySpawnEventWithPreDespawn(FDataTableRowHandle EventEntry, FTransform SpawnLocation, FDelegateProperty& OnRequestFinished, FGameplayTag DespawnDensityTag, float MaxAllowedDensityValue, int32_t& RequestID); // [0xa203b88] Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.TrySpawnEvent
	// bool TrySpawnEvent(FDataTableRowHandle EventEntry, FTransform SpawnLocation, FDelegateProperty& OnRequestFinished, int32_t& RequestID); // [0xa2037f8] Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.StartEncounter
	// class UFortAthenaLivingWorldEncounterInstance* StartEncounter(TWeakObjectPtr<UFortAthenaLivingWorldEncounter*> EncounterType, TArray<TScriptInterface<Class>>& EncounterPointProviders, class AActor* ActorDensityReservoir); // [0xa203448] Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.ResetEncounter
	// void ResetEncounter(class UFortAthenaLivingWorldEncounterInstance* EncounterInstance);                                // [0xa203270] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.RequestEventGeneration
	// void RequestEventGeneration();                                                                                        // [0xa203240] Final|Native|Public|BlueprintCallable 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.RegisterTagDensityReservoir
	// bool RegisterTagDensityReservoir(class AActor* ActorDensityReservoir, TArray<FFortAthenaLivingWorldEventTagDensityRegistration>& TagsDensity); // [0xa202f98] Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.RegisterDensityReservoir
	// bool RegisterDensityReservoir(class AActor* ActorDensityReservoir, float Density, float Range);                       // [0xa202e9c] Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.QueryEventBudget
	// int32_t QueryEventBudget(FDataTableRowHandle EventEntry, class AActor* SpawnLocation);                                // [0xa202c6c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.QueryActorDensityBudget
	// float QueryActorDensityBudget(class AActor* ReferenceActor, float Range);                                             // [0xa202b00] Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.OnWorldFinishedInitialization
	// void OnWorldFinishedInitialization(FGameplayTagContainer& ContextTags);                                               // [0xa2029dc] Final|Native|Private|HasOutParms 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.OnUnmanagedDensityReservoirActorDestroy
	// void OnUnmanagedDensityReservoirActorDestroy(class AActor* DestroyedActor);                                           // [0xa20295c] Final|Native|Private 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.OnSpawnedActorDestroy
	// void OnSpawnedActorDestroy(class AActor* DestroyedActor);                                                             // [0xa2028d8] Final|Native|Private 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.OnRep_DebugDensityMinimapIndicator
	// void OnRep_DebugDensityMinimapIndicator(class UFortAthenaLivingWorldDebugDensityMiniMapIndicator* OldMapIndicator);   // [0x6414600] Final|Native|Private 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.OnRep_ActorClassToPreloadOnClient
	// void OnRep_ActorClassToPreloadOnClient();                                                                             // [0x3ffc060] Final|Native|Private 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.OnPatrolPathDestroyed
	// void OnPatrolPathDestroyed(class AActor* Actor);                                                                      // [0xa202858] Final|Native|Public  
	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.OnPatrolPathAdded
	// void OnPatrolPathAdded(class AFortAthenaPatrolPath* PatrolPath);                                                      // [0xa2027d8] Final|Native|Private 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.OnDebugSpawnEventSpawned
	// void OnDebugSpawnEventSpawned(TArray<AActor*>& SpawnedActors, bool bSuccess);                                         // [0xa2010f4] Final|Native|Private|HasOutParms 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.OnCurrentPlaylistLoaded
	// void OnCurrentPlaylistLoaded(FName PlaylistName, FGameplayTagContainer& PlaylistContextTags);                         // [0xa200fe0] Final|Native|Private|HasOutParms 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.OnActorSpawned
	// void OnActorSpawned(class AActor* Actor, int32_t RequestID);                                                          // [0xa200ea4] Final|Native|Private 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.LWMTAM
	// void LWMTAM(FString Name);                                                                                            // [0xa200a74] Final|BlueprintAuthorityOnly|Exec|Native|Public 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.LWMF
	// void LWMF();                                                                                                          // [0x36203b0] Final|BlueprintAuthorityOnly|Exec|Native|Public 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerUnregisterPointProvider
	// void LivingWorldManagerUnregisterPointProvider(class AActor* PointProvider);                                          // [0x6414600] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerToggleVerboseLogging
	// void LivingWorldManagerToggleVerboseLogging();                                                                        // [0x36203b0] Final|BlueprintAuthorityOnly|Exec|Native|Public 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerToggleGenerateEvents
	// void LivingWorldManagerToggleGenerateEvents();                                                                        // [0x36203b0] Final|BlueprintAuthorityOnly|Exec|Native|Public 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerToggleDensityDisplay
	// void LivingWorldManagerToggleDensityDisplay();                                                                        // [0x36203b0] Final|BlueprintAuthorityOnly|Exec|Native|Public 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerToggleActorMinimap
	// void LivingWorldManagerToggleActorMinimap(FString Name);                                                              // [0x92aae98] Final|BlueprintAuthorityOnly|Exec|Native|Public 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerSwitchDensityDisplay
	// void LivingWorldManagerSwitchDensityDisplay(int32_t DensityMapIndex);                                                 // [0x69e33bc] Final|BlueprintAuthorityOnly|Exec|Native|Public 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerSetEventGenerationEnabled
	// void LivingWorldManagerSetEventGenerationEnabled(bool bInGenerateEvents);                                             // [0x63fe5cc] Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerRegisterPointProvider
	// void LivingWorldManagerRegisterPointProvider(class AActor* PointProvider);                                            // [0x6414600] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerProviderDebugActor
	// void LivingWorldManagerProviderDebugActor(int32_t ProviderIndex);                                                     // [0x69e33bc] Final|BlueprintAuthorityOnly|Exec|Native|Public 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerGenerateEvents
	// void LivingWorldManagerGenerateEvents();                                                                              // [0x36203b0] Final|BlueprintAuthorityOnly|Exec|Native|Public 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerFlush
	// void LivingWorldManagerFlush();                                                                                       // [0x36203b0] Final|RequiredAPI|BlueprintAuthorityOnly|Exec|Native|Public|BlueprintCallable 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerEnablePointProvider
	// void LivingWorldManagerEnablePointProvider(class AActor* PointProvider);                                              // [0x6414600] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerDumpSpawnCount
	// void LivingWorldManagerDumpSpawnCount();                                                                              // [0x36203b0] Final|BlueprintAuthorityOnly|Exec|Native|Public 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerDumpPrefabLevelBounds
	// void LivingWorldManagerDumpPrefabLevelBounds();                                                                       // [0x36203b0] Final|BlueprintAuthorityOnly|Exec|Native|Public 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerDumpEventInstances
	// void LivingWorldManagerDumpEventInstances();                                                                          // [0x36203b0] Final|BlueprintAuthorityOnly|Exec|Native|Public 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerDisablePointProvider
	// void LivingWorldManagerDisablePointProvider(class AActor* PointProvider);                                             // [0x6414600] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerDebugEvent
	// void LivingWorldManagerDebugEvent(FString EventName, int32_t DebugIndex, FString RuntimeSpawnDataName, FString EncounterName); // [0xa200bf8] Final|RequiredAPI|BlueprintAuthorityOnly|Exec|Native|Public 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.IsEncounterCategoryActive
	// bool IsEncounterCategoryActive(TWeakObjectPtr<UFortAthenaLivingWorldEncounter*> EncounterType);                       // [0xa200970] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.HasPendingSpawnRequestForEncounter
	// bool HasPendingSpawnRequestForEncounter(class UFortAthenaLivingWorldEncounterInstance* EncounterInstance);            // [0xa200834] Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.GetOwningEncounter
	// class UFortAthenaLivingWorldEncounterInstance* GetOwningEncounter(class AActor* Actor);                               // [0xa2007a4] Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.GetLivingWorldManager
	// class UFortAthenaLivingWorldManager* GetLivingWorldManager(class UObject* WorldContextObject);                        // [0xa200724] Final|RequiredAPI|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.EndEncounter
	// void EndEncounter(class UFortAthenaLivingWorldEncounterInstance* EncounterInstance);                                  // [0xa200618] Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.CancelSpawnRequest
	// void CancelSpawnRequest(int32_t RequestID);                                                                           // [0xa200588] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.BuildDataRegistryResolverScope_Implementation
	// bool BuildDataRegistryResolverScope_Implementation(TArray<FName>& InOutResolverScopes, int32_t& InOutPriority);       // [0xa200484] Native|Public|HasOutParms|Const 
};

/// Struct /Script/LagerRuntime.ortAthenaLivingWorldNavigationInvokerSettingsOverride
/// Size: 0x0070 (0x000000 - 0x000070)
struct FortAthenaLivingWorldNavigationInvokerSettingsOverride
{ 
	FGameplayTagQuery                                  OverrideTagQuery;                                           // 0x0000   (0x0048)  
	FScalableFloat                                     RegistrationDistanceToPlayer;                               // 0x0048   (0x0028)  
};

/// Class /Script/LagerRuntime.FortAthenaLivingWorldNavigationInvokerComponent
/// Size: 0x0100 (0x0000A0 - 0x0001A0)
class UFortAthenaLivingWorldNavigationInvokerComponent : public UActorComponent
{ 
public:
	FScalableFloat                                     GenerationRadius;                                           // 0x00A0   (0x0028)  
	FNavAgentSelector                                  SupportedAgents;                                            // 0x00C8   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00CC   (0x0004)  MISSED
	FScalableFloat                                     DistanceToPlayer;                                           // 0x00D0   (0x0028)  
	FScalableFloat                                     DistanceToPlayerHysteresis;                                 // 0x00F8   (0x0028)  
	FScalableFloat                                     RegistrationDistanceToPlayer;                               // 0x0120   (0x0028)  
	FScalableFloat                                     RegistrationDistanceToPlayerHysteresis;                     // 0x0148   (0x0028)  
	TArray<FortAthenaLivingWorldNavigationInvokerSettingsOverride> SettingsOverride;                               // 0x0170   (0x0010)  
	SDK_UNDEFINED(8,13372) /* TWeakObjectPtr<UFortAthenaLivingWorldManager*> */ __um(LivingWorldManager);          // 0x0180   (0x0008)  
	unsigned char                                      UnknownData01_6[0x18];                                      // 0x0188   (0x0018)  MISSED


	/// Functions
	// Function /Script/LagerRuntime.FortAthenaLivingWorldNavigationInvokerComponent.OnCurrentPlaylistLoaded
	// void OnCurrentPlaylistLoaded(FName PlaylistName, FGameplayTagContainer& PlaylistContextTags);                         // [0x81ed394] Final|Native|Protected|HasOutParms 
};

/// Class /Script/LagerRuntime.FortAthenaLivingWorldPrefabLevelStreaming
/// Size: 0x0000 (0x0001C0 - 0x0001C0)
class UFortAthenaLivingWorldPrefabLevelStreaming : public ULevelStreamingLevelInstance
{ 
public:
};

/// Struct /Script/LagerRuntime.FortAthenaLivingWorldPrefabActorSpawnerData
/// Size: 0x0110 (0x000000 - 0x000110)
struct FFortAthenaLivingWorldPrefabActorSpawnerData
{ 
	FGuid                                              ActorSpawnerGuid;                                           // 0x0000   (0x0010)  
	FFortAthenaLivingWorldActorSpawnDescription        ActorDescription;                                           // 0x0010   (0x0100)  
};

/// Class /Script/LagerRuntime.FortAthenaLivingWorldPrefab
/// Size: 0x0170 (0x0007D0 - 0x000940)
class AFortAthenaLivingWorldPrefab : public AFortLevelInstancePrefab
{ 
public:
	TArray<FFortAthenaLivingWorldPrefabActorSpawnerData> ActorSpawnerDatas;                                        // 0x07D0   (0x0010)  
	FBox                                               LocalLevelBounds;                                           // 0x07E0   (0x0038)  
	FBox                                               LocalGrassRemovalBox;                                       // 0x0818   (0x0038)  
	SDK_UNDEFINED(16,13373) /* FMulticastInlineDelegate */ __um(OnAllActorSpawnedDelegate);                        // 0x0850   (0x0010)  
	unsigned char                                      UnknownData00_5[0x18];                                      // 0x0860   (0x0018)  MISSED
	SDK_UNDEFINED(16,13374) /* TArray<TWeakObjectPtr<ABuildingActor*>> */ __um(BuildingsToKill);                   // 0x0878   (0x0010)  
	SDK_UNDEFINED(16,13375) /* TArray<TWeakObjectPtr<AActor*>> */ __um(SpawnedActors);                             // 0x0888   (0x0010)  
	SDK_UNDEFINED(12,13376) /* FDelegateProperty */    __um(FinishedDestroyingBuildingCallback);                   // 0x0898   (0x000C)  
	bool                                               bHasFinishedSpawn;                                          // 0x08A4   (0x0001)  
	bool                                               bHasRemovedFoliage;                                         // 0x08A5   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x08A6   (0x0002)  MISSED
	FScalableFloat                                     bIsEnabled;                                                 // 0x08A8   (0x0028)  
	FScalableFloat                                     Weight;                                                     // 0x08D0   (0x0028)  
	bool                                               bShouldLevelBeVisible;                                      // 0x08F8   (0x0001)  
	bool                                               bShouldSpawnerBeAllowedToSpawn;                             // 0x08F9   (0x0001)  
	bool                                               bShouldAlwaysSnapAboveLandscape;                            // 0x08FA   (0x0001)  
	unsigned char                                      UnknownData02_5[0x5];                                       // 0x08FB   (0x0005)  MISSED
	FWorldConditionQueryDefinition                     CanSpawnCondition;                                          // 0x0900   (0x0018)  
	unsigned char                                      UnknownData03_5[0x8];                                       // 0x0918   (0x0008)  MISSED
	FGameplayTagContainer                              PrefabTags;                                                 // 0x0920   (0x0020)  


	/// Functions
	// Function /Script/LagerRuntime.FortAthenaLivingWorldPrefab.RemoveFoliageInsideLevelBound
	// void RemoveFoliageInsideLevelBound();                                                                                 // [0x37d1694] Final|Native|Public|BlueprintCallable 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldPrefab.OnRep_ShouldLevelBeVisible
	// void OnRep_ShouldLevelBeVisible();                                                                                    // [0x313d8d8] Final|Native|Protected 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldPrefab.OnBuildingInLevelBoundsDestroyed__DelegateSignature
	// void OnBuildingInLevelBoundsDestroyed__DelegateSignature();                                                           // [0x18a39e4] Public|Delegate      
	// Function /Script/LagerRuntime.FortAthenaLivingWorldPrefab.OnAllActorSpawnedDelegate__DelegateSignature
	// void OnAllActorSpawnedDelegate__DelegateSignature(TArray<AActor*>& SpawnedActors);                                    // [0x18a39e4] Public|Delegate|HasOutParms 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldPrefab.OnAllActorSpawned__DelegateSignature
	// void OnAllActorSpawned__DelegateSignature(TArray<AActor*>& SpawnedActors);                                            // [0x18a39e4] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldPrefab.MakeLevelVisible
	// void MakeLevelVisible();                                                                                              // [0xa219ff4] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldPrefab.GetOwningLivingWorldPrefab
	// class AFortAthenaLivingWorldPrefab* GetOwningLivingWorldPrefab(class UObject* WorldContextObject);                    // [0xa218fa4] Final|RequiredAPI|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldPrefab.GetLevelBounds
	// FBox GetLevelBounds();                                                                                                // [0xa218f5c] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldPrefab.DestroyBuildingsInLevelBounds
	// void DestroyBuildingsInLevelBounds(FDelegateProperty& FinishedDelegate);                                              // [0xa218ce0] Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldPrefab.CallWhenAllActorHaveSpawned
	// void CallWhenAllActorHaveSpawned(FDelegateProperty& DelegateToCall);                                                  // [0xa218c3c] Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldPrefab.AllowSpawnerToSpawn
	// void AllowSpawnerToSpawn();                                                                                           // [0xa218ab0] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
};

/// Class /Script/LagerRuntime.FortAthenaLivingWorldPrefabActorSpawner
/// Size: 0x0130 (0x000290 - 0x0003C0)
class AFortAthenaLivingWorldPrefabActorSpawner : public AActor
{ 
public:
	FFortAthenaLivingWorldActorSpawnDescription        ActorDescription;                                           // 0x0290   (0x0100)  
	SDK_UNDEFINED(16,13377) /* FMulticastInlineDelegate */ __um(OnActorSpawnedDelegate);                           // 0x0390   (0x0010)  
	class AFortAthenaPatrolPath*                       PatrolPath;                                                 // 0x03A0   (0x0008)  
	FGuid                                              Guid;                                                       // 0x03A8   (0x0010)  
	SDK_UNDEFINED(8,13378) /* TWeakObjectPtr<AActor*> */ __um(SpawnedActor);                                       // 0x03B8   (0x0008)  


	/// Functions
	// Function /Script/LagerRuntime.FortAthenaLivingWorldPrefabActorSpawner.OnSnapCompleted
	// void OnSnapCompleted(class UFortSnapOnSurfaceComponent* Component, FTransform& OldTransform, FTransform& NewTransfom); // [0xa21a588] Final|Native|Protected|HasOutParms|HasDefaults 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldPrefabActorSpawner.OnActorSpawnedDelegate__DelegateSignature
	// void OnActorSpawnedDelegate__DelegateSignature(class AActor* SpawnedActor);                                           // [0x18a39e4] Public|Delegate      
	// Function /Script/LagerRuntime.FortAthenaLivingWorldPrefabActorSpawner.OnActorSpawned__DelegateSignature
	// void OnActorSpawned__DelegateSignature(class AActor* SpawnedActor);                                                   // [0x18a39e4] MulticastDelegate|Public|Delegate 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldPrefabActorSpawner.GetSpawnedActor
	// class AActor* GetSpawnedActor();                                                                                      // [0xa219084] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldPrefabActorSpawner.CallWhenActorSpawned
	// void CallWhenActorSpawned(FDelegateProperty& DelegateToCall);                                                         // [0xa218ae4] Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/LagerRuntime.FortAthenaLivingWorldRuntimePointProviderComponent
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UFortAthenaLivingWorldRuntimePointProviderComponent : public UActorComponent
{ 
public:
};

/// Class /Script/LagerRuntime.FortAthenaLivingWorldSpawnAction
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortAthenaLivingWorldSpawnAction : public UObject
{ 
public:
};

/// Class /Script/LagerRuntime.FortAthenaLivingWorldSpawnActionBlueprint
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortAthenaLivingWorldSpawnActionBlueprint : public UFortAthenaLivingWorldSpawnAction
{ 
public:


	/// Functions
	// Function /Script/LagerRuntime.FortAthenaLivingWorldSpawnActionBlueprint.K2_OnSpawnedActorFailed
	// void K2_OnSpawnedActorFailed(TScriptInterface<Class>& SourcePointProvider);                                           // [0x18a39e4] Event|Public|HasOutParms|BlueprintEvent|Const 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldSpawnActionBlueprint.K2_OnSpawnedActor
	// void K2_OnSpawnedActor(class AActor* SpawnedActor, TScriptInterface<Class>& SourcePointProvider);                     // [0x18a39e4] Event|Public|HasOutParms|BlueprintEvent|Const 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldSpawnActionBlueprint.K2_OnAllActorSpawned
	// void K2_OnAllActorSpawned(TArray<AActor*>& SpawnedActor, TScriptInterface<Class>& SourcePointProvider);               // [0x18a39e4] Event|Public|HasOutParms|BlueprintEvent|Const 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldSpawnActionBlueprint.K2_ModifySpawnComponentList
	// void K2_ModifySpawnComponentList(class UFortAthenaAISpawnerDataComponentList* ComponentList, class UObject* ComponentOuter); // [0x18a39e4] Event|Public|BlueprintEvent|Const 
};

/// Class /Script/LagerRuntime.FortAthenaLivingWorldWardComponent
/// Size: 0x0010 (0x0000A0 - 0x0000B0)
class UFortAthenaLivingWorldWardComponent : public UActorComponent
{ 
public:
	float                                              DefaultRadius;                                              // 0x00A0   (0x0004)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x00A4   (0x000C)  MISSED


	/// Functions
	// Function /Script/LagerRuntime.FortAthenaLivingWorldWardComponent.SetWardRadius
	// void SetWardRadius(float Radius);                                                                                     // [0x9813eb8] Final|Native|Public|BlueprintCallable 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldWardComponent.OnWorldFinishedInitialization
	// void OnWorldFinishedInitialization(FGameplayTagContainer& ContextTags);                                               // [0xa21a8c0] Final|Native|Private|HasOutParms 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldWardComponent.OnCurrentPlaylistLoaded
	// void OnCurrentPlaylistLoaded(FName PlaylistName, FGameplayTagContainer& PlaylistContextTags);                         // [0xa21a41c] Final|Native|Private|HasOutParms 
};

/// Class /Script/LagerRuntime.FortCheatManager_LivingWorldManager_EnhancedInputBindingInfo
/// Size: 0x0018 (0x000028 - 0x000040)
class UFortCheatManager_LivingWorldManager_EnhancedInputBindingInfo : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x40];                                      // 0x0000   (0x0040)  MISSED
};

/// Class /Script/LagerRuntime.FortCheatManager_LivingWorldManager
/// Size: 0x0068 (0x000028 - 0x000090)
class UFortCheatManager_LivingWorldManager : public UChildCheatManager
{ 
public:
	int32_t                                            CheatTeleportToCount;                                       // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x002C   (0x0004)  MISSED
	SDK_UNDEFINED(16,13379) /* FString */              __um(CheatTeleportLastEventDataName);                       // 0x0030   (0x0010)  
	int32_t                                            CheatSpawnEventCount;                                       // 0x0040   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0044   (0x0004)  MISSED
	SDK_UNDEFINED(16,13380) /* FString */              __um(CheatSpawnEventName);                                  // 0x0048   (0x0010)  
	int32_t                                            CheatTriggerEventCount;                                     // 0x0058   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x005C   (0x0004)  MISSED
	SDK_UNDEFINED(16,13381) /* FString */              __um(CheatTriggerEventName);                                // 0x0060   (0x0010)  
	TArray<class UFortCheatManager_LivingWorldManager_EnhancedInputBindingInfo*> InputBindings;                    // 0x0070   (0x0010)  
	class UEnhancedInputComponent*                     InputComponent;                                             // 0x0080   (0x0008)  
	unsigned char                                      UnknownData03_6[0x8];                                       // 0x0088   (0x0008)  MISSED


	/// Functions
	// Function /Script/LagerRuntime.FortCheatManager_LivingWorldManager.LWMTE
	// void LWMTE(FString EventDataName);                                                                                    // [0xa200a74] Final|BlueprintAuthorityOnly|Exec|Native|Public 
	// Function /Script/LagerRuntime.FortCheatManager_LivingWorldManager.LWMSE
	// void LWMSE(FString EventDataName, FString SpawnerDataNames);                                                          // [0xa2190c4] Final|BlueprintAuthorityOnly|Exec|Native|Public 
	// Function /Script/LagerRuntime.FortCheatManager_LivingWorldManager.LWMS
	// void LWMS(FString EventDataName);                                                                                     // [0xa200a74] Final|BlueprintAuthorityOnly|Exec|Native|Public 
	// Function /Script/LagerRuntime.FortCheatManager_LivingWorldManager.LivingWorldManagerTriggerEvent
	// void LivingWorldManagerTriggerEvent(FString EventDataName);                                                           // [0x92aae98] Final|BlueprintAuthorityOnly|Exec|Native|Public 
	// Function /Script/LagerRuntime.FortCheatManager_LivingWorldManager.LivingWorldManagerTeleportToSpawnPosition
	// void LivingWorldManagerTeleportToSpawnPosition(FString EventDataName);                                                // [0x8b6e5a0] Final|BlueprintAuthorityOnly|Exec|Native|Public 
	// Function /Script/LagerRuntime.FortCheatManager_LivingWorldManager.LivingWorldManagerTeleportTo
	// void LivingWorldManagerTeleportTo(FString EventDataName);                                                             // [0x8b6e5a0] Final|BlueprintAuthorityOnly|Exec|Native|Public 
	// Function /Script/LagerRuntime.FortCheatManager_LivingWorldManager.LivingWorldManagerSpawnTrackedAtLocation
	// void LivingWorldManagerSpawnTrackedAtLocation(FString EventDataName, FString TrackedActorName, FVector Location, FRotator Rotation); // [0xa219c40] Final|BlueprintAuthorityOnly|Exec|Native|Public|HasDefaults 
	// Function /Script/LagerRuntime.FortCheatManager_LivingWorldManager.LivingWorldManagerSpawnEventAtLocation
	// void LivingWorldManagerSpawnEventAtLocation(FString EventDataName, FVector Location, FRotator Rotation, FString SpawnerDataNames); // [0xa21980c] Final|BlueprintAuthorityOnly|Exec|Native|Public|HasDefaults 
	// Function /Script/LagerRuntime.FortCheatManager_LivingWorldManager.LivingWorldManagerSpawnEvent
	// void LivingWorldManagerSpawnEvent(FString EventDataName, FString SpawnerDataNames);                                   // [0xa21961c] Final|BlueprintAuthorityOnly|Exec|Native|Public 
	// Function /Script/LagerRuntime.FortCheatManager_LivingWorldManager.LivingWorldManagerSpawnAtLocation
	// void LivingWorldManagerSpawnAtLocation(FString EventDataName, FVector Location, FRotator Rotation);                   // [0xa2192f0] Final|BlueprintAuthorityOnly|Exec|Native|Public|HasDefaults 
	// Function /Script/LagerRuntime.FortCheatManager_LivingWorldManager.LivingWorldManagerSpawn
	// void LivingWorldManagerSpawn(FString EventDataName);                                                                  // [0x92aae98] Final|BlueprintAuthorityOnly|Exec|Native|Public 
	// Function /Script/LagerRuntime.FortCheatManager_LivingWorldManager.LivingWorldManagerGDTNextDensityGrid
	// void LivingWorldManagerGDTNextDensityGrid();                                                                          // [0x36203b0] Final|Exec|Native|Public 
	// Function /Script/LagerRuntime.FortCheatManager_LivingWorldManager.LivingWorldManagerDisplaySpawnPoints
	// void LivingWorldManagerDisplaySpawnPoints(float MaxDisplayDistance);                                                  // [0x67d85bc] Final|Exec|Native|Public 
};

/// Class /Script/LagerRuntime.FortGameFeatureAction_AddCategoryTableToConfig
/// Size: 0x0050 (0x000028 - 0x000078)
class UFortGameFeatureAction_AddCategoryTableToConfig : public UGameFeatureAction
{ 
public:
	SDK_UNDEFINED(80,13382) /* TMap<TWeakObjectPtr<UFortAthenaLivingWorldConfigData*>, FFortAthenaLivingWorldCategoryTableDataList> */ __um(ConfigToCategoryTableDatas); // 0x0028   (0x0050)  
};

/// Class /Script/LagerRuntime.FortGameFeatureAction_AddLagerConfig
/// Size: 0x0010 (0x000028 - 0x000038)
class UFortGameFeatureAction_AddLagerConfig : public UGameFeatureAction
{ 
public:
	TArray<FFortLivingWorldConfigOverride>             LagerConfigOverrides;                                       // 0x0028   (0x0010)  
};

/// Class /Script/LagerRuntime.FortGameFeatureAction_MapMarkerTagsProvider_PatrolPath
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortGameFeatureAction_MapMarkerTagsProvider_PatrolPath : public UFortGameFeatureAction_MapMarkerTagsProvider
{ 
public:
};

/// Struct /Script/LagerRuntime.LivingWorldSpawnAroundPlayerRuntimeData
/// Size: 0x0018 (0x000000 - 0x000018)
struct FLivingWorldSpawnAroundPlayerRuntimeData
{ 
	SDK_UNDEFINED(16,13383) /* TArray<TScriptInterface<Class>> */ __um(PointAroundPlayerProviders);                // 0x0000   (0x0010)  
	class UFortAthenaLivingWorldEncounterInstance*     Encounter;                                                  // 0x0010   (0x0008)  
};

/// Struct /Script/LagerRuntime.LivingWorldSpawnAroundPlayerConfiguration
/// Size: 0x0038 (0x000000 - 0x000038)
struct FLivingWorldSpawnAroundPlayerConfiguration
{ 
	SDK_UNDEFINED(32,13384) /* TWeakObjectPtr<UFortAthenaLivingWorldEncounter*> */ __um(Encounter);                // 0x0000   (0x0020)  
	TArray<class UClass*>                              PointProviderClasses;                                       // 0x0020   (0x0010)  
	bool                                               bRegisterReservoir;                                         // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0031   (0x0007)  MISSED
};

/// Class /Script/LagerRuntime.FortPawnComponent_LivingWorldSpawnAroundPlayer
/// Size: 0x0020 (0x0000A8 - 0x0000C8)
class UFortPawnComponent_LivingWorldSpawnAroundPlayer : public UFortPawnComponent
{ 
public:
	TArray<FLivingWorldSpawnAroundPlayerRuntimeData>   RuntimeData;                                                // 0x00A8   (0x0010)  
	TArray<FLivingWorldSpawnAroundPlayerConfiguration> PerPlayerConfigurations;                                    // 0x00B8   (0x0010)  
};

/// Class /Script/LagerRuntime.FortQueryTest_IsCloseToLivingWorldWard
/// Size: 0x0000 (0x0001F8 - 0x0001F8)
class UFortQueryTest_IsCloseToLivingWorldWard : public UEnvQueryTest
{ 
public:
};

/// Class /Script/LagerRuntime.FortAthenaLivingWorldEQSHelper
/// Size: 0x0070 (0x000290 - 0x000300)
class AFortAthenaLivingWorldEQSHelper : public AActor
{ 
public:
	unsigned char                                      UnknownData00_3[0x40];                                      // 0x0290   (0x0040)  MISSED
	FNavAgentProperties                                NavAgentProperties;                                         // 0x02D0   (0x0030)  
};

/// Struct /Script/LagerRuntime.FortAthenaLivingWorldPointProviderSpawnLimiter
/// Size: 0x0068 (0x000000 - 0x000068)
struct FFortAthenaLivingWorldPointProviderSpawnLimiter
{ 
	ELivingWorldPointProviderSpawnLimiterBehavior      Behavior;                                                   // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0009   (0x0007)  MISSED
	FScalableFloat                                     MaxNumberOfSpawn;                                           // 0x0010   (0x0028)  
	FScalableFloat                                     MaxNumberOfEventInstance;                                   // 0x0038   (0x0028)  
	bool                                               bResetLimitWhenEnabling;                                    // 0x0060   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0061   (0x0007)  MISSED
};

/// Struct /Script/LagerRuntime.PointProviderTagDebugColor
/// Size: 0x0028 (0x000000 - 0x000028)
struct FPointProviderTagDebugColor
{ 
	FGameplayTagContainer                              Tags;                                                       // 0x0000   (0x0020)  
	FColor                                             Color;                                                      // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Struct /Script/LagerRuntime.PointProviderDebugInfo
/// Size: 0x0010 (0x000000 - 0x000010)
struct FPointProviderDebugInfo
{ 
	TArray<FPointProviderTagDebugColor>                DebugColors;                                                // 0x0000   (0x0010)  
};

/// Class /Script/LagerRuntime.FortAthenaLivingWorldLightStaticPointProvider
/// Size: 0x0138 (0x000028 - 0x000160)
class UFortAthenaLivingWorldLightStaticPointProvider : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x38];                                      // 0x0000   (0x0038)  MISSED
	FFortAthenaLivingWorldPointProviderSpawnLimiter    SpawnLimiter;                                               // 0x0038   (0x0068)  
	FGameplayTagContainer                              FiltersTags;                                                // 0x00A0   (0x0020)  
	FTransform                                         SpawnPoint;                                                 // 0x00C0   (0x0060)  
	bool                                               bRandomizePointRotation;                                    // 0x0120   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0121   (0x0007)  MISSED
	SDK_UNDEFINED(16,13385) /* FMulticastInlineDelegate */ __um(OnActorSpawned);                                   // 0x0128   (0x0010)  
	FPointProviderDebugInfo                            DebugInfo;                                                  // 0x0138   (0x0010)  
	class AFortGameStateAthena*                        CachedGameState;                                            // 0x0148   (0x0008)  
	class UFortAthenaLivingWorldManager*               CachedLivingWorldManager;                                   // 0x0150   (0x0008)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x0158   (0x0008)  MISSED


	/// Functions
	// Function /Script/LagerRuntime.FortAthenaLivingWorldLightStaticPointProvider.OnActorSpawned__DelegateSignature
	// void OnActorSpawned__DelegateSignature(class AActor* SpawnedActor);                                                   // [0x18a39e4] MulticastDelegate|Public|Delegate 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldLightStaticPointProvider.EnablePointProvider
	// void EnablePointProvider();                                                                                           // [0xa218e50] Native|Public|BlueprintCallable 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldLightStaticPointProvider.DisablePointProvider
	// void DisablePointProvider();                                                                                          // [0xa218dd0] Native|Public|BlueprintCallable 
};

/// Class /Script/LagerRuntime.FortAthenaLivingWorldPointProviderInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortAthenaLivingWorldPointProviderInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/LagerRuntime.FortAthenaLivingWorldPointProviderInterface.GetPointProviderMaxRadius
	// float GetPointProviderMaxRadius();                                                                                    // [0xa21905c] Native|Public|BlueprintCallable 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldPointProviderInterface.GetPointProviderLocation
	// FVector GetPointProviderLocation();                                                                                   // [0xa219024] Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldPointProviderInterface.GetFiltersTags
	// void GetFiltersTags(FGameplayTagContainer& FilterTags);                                                               // [0xa218ea0] Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldPointProviderInterface.EnablePointProvider
	// void EnablePointProvider();                                                                                           // [0x6a57d30] Native|Public|BlueprintCallable 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldPointProviderInterface.DisablePointProvider
	// void DisablePointProvider();                                                                                          // [0xa218dbc] Native|Public|BlueprintCallable 
};

/// Class /Script/LagerRuntime.FortAthenaLivingWorldStaticPointProvider
/// Size: 0x00F8 (0x000290 - 0x000388)
class AFortAthenaLivingWorldStaticPointProvider : public AActor
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0290   (0x0008)  MISSED
	FFortAthenaLivingWorldPointProviderSpawnLimiter    SpawnLimiter;                                               // 0x0298   (0x0068)  
	FGameplayTagContainer                              FiltersTags;                                                // 0x0300   (0x0020)  
	TArray<FTransform>                                 SpawnPoints;                                                // 0x0320   (0x0010)  
	bool                                               bStartEnabled;                                              // 0x0330   (0x0001)  
	bool                                               bRandomizeStartPoint;                                       // 0x0331   (0x0001)  
	bool                                               bRandomizePointRotation;                                    // 0x0332   (0x0001)  
	unsigned char                                      UnknownData01_5[0x5];                                       // 0x0333   (0x0005)  MISSED
	SDK_UNDEFINED(16,13386) /* FMulticastInlineDelegate */ __um(OnActorSpawned);                                   // 0x0338   (0x0010)  
	FPointProviderDebugInfo                            DebugInfo;                                                  // 0x0348   (0x0010)  
	class AFortGameStateAthena*                        CachedGameState;                                            // 0x0358   (0x0008)  
	class UFortAthenaLivingWorldManager*               CachedLivingWorldManager;                                   // 0x0360   (0x0008)  
	unsigned char                                      UnknownData02_6[0x20];                                      // 0x0368   (0x0020)  MISSED


	/// Functions
	// Function /Script/LagerRuntime.FortAthenaLivingWorldStaticPointProvider.OnCurrentPlaylistLoaded
	// void OnCurrentPlaylistLoaded(FName PlaylistName, FGameplayTagContainer& PlaylistContextTags);                         // [0xa21a030] Final|Native|Protected|HasOutParms 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldStaticPointProvider.OnActorSpawned__DelegateSignature
	// void OnActorSpawned__DelegateSignature(class AActor* SpawnedActor);                                                   // [0x18a39e4] MulticastDelegate|Public|Delegate 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldStaticPointProvider.EnablePointProvider
	// void EnablePointProvider();                                                                                           // [0xa218e18] Native|Public|BlueprintCallable 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldStaticPointProvider.DisablePointProvider
	// void DisablePointProvider();                                                                                          // [0xa218d84] Native|Public|BlueprintCallable 
};

/// Class /Script/LagerRuntime.FortAthenaLivingWorldVehiclePointProvider
/// Size: 0x00C8 (0x000388 - 0x000450)
class AFortAthenaLivingWorldVehiclePointProvider : public AFortAthenaLivingWorldStaticPointProvider
{ 
public:
	SDK_UNDEFINED(1,13387) /* TEnumAsByte<EVehicleInitialOverlapBehavior> */ __um(InitialOverlapBehavior);         // 0x0388   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0389   (0x0007)  MISSED
	FScalableFloat                                     ForceModsAllowed;                                           // 0x0390   (0x0028)  
	FGameplayTagContainer                              ForceMods;                                                  // 0x03B8   (0x0020)  
	FScalableFloat                                     ForceCosmeticsAllowed;                                      // 0x03D8   (0x0028)  
	FSpawnerInfoForcedCosmetics                        ForceCosmetics;                                             // 0x0400   (0x0048)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0448   (0x0008)  MISSED
};

/// Class /Script/LagerRuntime.FortAthenaLivingWorldVolume
/// Size: 0x0310 (0x0002C8 - 0x0005D8)
class AFortAthenaLivingWorldVolume : public AVolume
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x02C8   (0x0008)  MISSED
	bool                                               bStartEnabled;                                              // 0x02D0   (0x0001)  
	bool                                               bWaitForNavigation;                                         // 0x02D1   (0x0001)  
	unsigned char                                      UnknownData01_5[0x6];                                       // 0x02D2   (0x0006)  MISSED
	FGameplayTagContainer                              FiltersTags;                                                // 0x02D8   (0x0020)  
	class UEnvQuery*                                   EnvironmentQuery;                                           // 0x02F8   (0x0008)  
	TArray<FAIDynamicParam>                            QueryConfig;                                                // 0x0300   (0x0010)  
	bool                                               bRemoveUsedPoint;                                           // 0x0310   (0x0001)  
	bool                                               bRemoveUsedPointPermenantly;                                // 0x0311   (0x0001)  
	unsigned char                                      UnknownData02_5[0x6];                                       // 0x0312   (0x0006)  MISSED
	FFortAthenaLivingWorldPointProviderSpawnLimiter    SpawnLimiter;                                               // 0x0318   (0x0068)  
	FScalableFloat                                     EQSRefreshInterval;                                         // 0x0380   (0x0028)  
	FScalableFloat                                     WaterLevelIndexMin;                                         // 0x03A8   (0x0028)  
	FScalableFloat                                     WaterLevelIndexMax;                                         // 0x03D0   (0x0028)  
	class AFortGameStateAthena*                        CachedGameState;                                            // 0x03F8   (0x0008)  
	SDK_UNDEFINED(16,13388) /* FMulticastInlineDelegate */ __um(OnActorSpawnedResult);                             // 0x0400   (0x0010)  
	SDK_UNDEFINED(16,13389) /* FMulticastInlineDelegate */ __um(OnPointProviderRegistered);                        // 0x0410   (0x0010)  
	class UFortAthenaLivingWorldManager*               CachedLivingWorldManager;                                   // 0x0420   (0x0008)  
	unsigned char                                      UnknownData03_6[0x1B0];                                     // 0x0428   (0x01B0)  MISSED


	/// Functions
	// Function /Script/LagerRuntime.FortAthenaLivingWorldVolume.SetSpawnRotation
	// void SetSpawnRotation(FRotator& Rotation);                                                                            // [0xa21b0d0] Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldVolume.SetFiltersTags
	// void SetFiltersTags(FGameplayTagContainer& TagContainer);                                                             // [0xa21af18] Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldVolume.SetEQSQueryConfigParam
	// void SetEQSQueryConfigParam(FName ParameterName, float Value);                                                        // [0xa21ae54] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldVolume.SetEQSQuery
	// void SetEQSQuery(class UEnvQuery* Query);                                                                             // [0xa21add4] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldVolume.RunEQS
	// void RunEQS();                                                                                                        // [0x36203b0] Final|Native|Private 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldVolume.ResetSpawnRotation
	// void ResetSpawnRotation();                                                                                            // [0xa21adb0] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldVolume.OnWorldFinishedInitialization
	// void OnWorldFinishedInitialization(FGameplayTagContainer& ContextTags);                                               // [0xa21a75c] Final|Native|Private|HasOutParms 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldVolume.OnPointProviderRegistered__DelegateSignature
	// void OnPointProviderRegistered__DelegateSignature(class AFortAthenaLivingWorldVolume* PointProviderVolume);           // [0x18a39e4] MulticastDelegate|Public|Delegate 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldVolume.OnNavigationFinishedGeneration
	// void OnNavigationFinishedGeneration(class ANavigationData* NavData);                                                  // [0xa21a508] Final|Native|Private 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldVolume.OnCurrentPlaylistLoaded
	// void OnCurrentPlaylistLoaded(FName PlaylistName, FGameplayTagContainer& PlaylistContextTags);                         // [0xa21a130] Final|Native|Private|HasOutParms 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldVolume.OnActorSpawnedResult__DelegateSignature
	// void OnActorSpawnedResult__DelegateSignature(class AActor* SpawnedActor, bool bResult);                               // [0x18a39e4] MulticastDelegate|Public|Delegate 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldVolume.IsPointProviderEnabled
	// bool IsPointProviderEnabled();                                                                                        // [0x8e205a0] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldVolume.EnablePointProvider
	// void EnablePointProvider();                                                                                           // [0xa218e34] Native|Public|BlueprintCallable 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldVolume.DoesStartEnabled
	// bool DoesStartEnabled();                                                                                              // [0x945cf00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldVolume.DisablePointProvider
	// void DisablePointProvider();                                                                                          // [0xa218da0] Native|Public|BlueprintCallable 
};

/// Class /Script/LagerRuntime.FortAthenaPatrolPathPointProvider
/// Size: 0x0100 (0x000290 - 0x000390)
class AFortAthenaPatrolPathPointProvider : public AActor
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0290   (0x0008)  MISSED
	FGameplayTagContainer                              FiltersTags;                                                // 0x0298   (0x0020)  
	class AFortAthenaPatrolPath*                       AssociatedPatrolPath;                                       // 0x02B8   (0x0008)  
	bool                                               bStartEnabled : 1;                                          // 0x02C0:0 (0x0001)  
	bool                                               bSpawnOnPatrolPath : 1;                                     // 0x02C0:1 (0x0001)  
	bool                                               bAlignOrientationToPath : 1;                                // 0x02C0:2 (0x0001)  
	unsigned char                                      UnknownData01_4[0x7];                                       // 0x02C1   (0x0007)  MISSED
	FFortAthenaLivingWorldPointProviderSpawnLimiter    SpawnLimiter;                                               // 0x02C8   (0x0068)  
	SDK_UNDEFINED(16,13390) /* FMulticastInlineDelegate */ __um(OnActorSpawnedResult);                             // 0x0330   (0x0010)  
	SDK_UNDEFINED(8,13391) /* TWeakObjectPtr<AFortAthenaPatrolPath*> */ __um(RuntimePatrolPathWeakPtr);            // 0x0340   (0x0008)  
	class AFortGameStateAthena*                        CachedGameState;                                            // 0x0348   (0x0008)  
	class UFortAthenaLivingWorldManager*               CachedLivingWorldManager;                                   // 0x0350   (0x0008)  
	unsigned char                                      UnknownData02_6[0x38];                                      // 0x0358   (0x0038)  MISSED


	/// Functions
	// Function /Script/LagerRuntime.FortAthenaPatrolPathPointProvider.OnCurrentPlaylistLoaded
	// void OnCurrentPlaylistLoaded(FName PlaylistName, FGameplayTagContainer& PlaylistContextTags);                         // [0xa21a224] Final|Native|Private|HasOutParms 
	// Function /Script/LagerRuntime.FortAthenaPatrolPathPointProvider.OnActorSpawnedResult__DelegateSignature
	// void OnActorSpawnedResult__DelegateSignature(class AActor* SpawnedActor, bool bResult);                               // [0x18a39e4] MulticastDelegate|Public|Delegate 
	// Function /Script/LagerRuntime.FortAthenaPatrolPathPointProvider.EnablePointProvider
	// void EnablePointProvider();                                                                                           // [0xa218e18] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/LagerRuntime.FortAthenaPatrolPathPointProvider.DisablePointProvider
	// void DisablePointProvider();                                                                                          // [0xa218d84] RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/LagerRuntime.FortAthenaPointAroundPlayerProvider
/// Size: 0x00E0 (0x000290 - 0x000370)
class AFortAthenaPointAroundPlayerProvider : public AActor
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0290   (0x0008)  MISSED
	FGameplayTagContainer                              FiltersTags;                                                // 0x0298   (0x0020)  
	class UEnvQuery*                                   QueryTemplate;                                              // 0x02B8   (0x0008)  
	SDK_UNDEFINED(1,13392) /* TEnumAsByte<EEnvQueryRunMode> */ __um(RunMode);                                      // 0x02C0   (0x0001)  
	bool                                               bStartEnabled : 1;                                          // 0x02C1:0 (0x0001)  
	bool                                               bGenerateAroundPlayerBots : 1;                              // 0x02C1:1 (0x0001)  
	unsigned char                                      UnknownData01_4[0x2];                                       // 0x02C2   (0x0002)  MISSED
	FGameplayTag                                       IgnorePlayerWithTag;                                        // 0x02C4   (0x0004)  
	FFortAthenaLivingWorldPointProviderSpawnLimiter    SpawnLimiter;                                               // 0x02C8   (0x0068)  
	SDK_UNDEFINED(16,13393) /* FMulticastInlineDelegate */ __um(OnActorSpawnedResult);                             // 0x0330   (0x0010)  
	class AFortGameStateAthena*                        CachedGameState;                                            // 0x0340   (0x0008)  
	unsigned char                                      UnknownData02_6[0x28];                                      // 0x0348   (0x0028)  MISSED


	/// Functions
	// Function /Script/LagerRuntime.FortAthenaPointAroundPlayerProvider.SetForcedPawnToUse
	// void SetForcedPawnToUse(class APawn* InForcedPawnToUse);                                                              // [0xa21afd0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/LagerRuntime.FortAthenaPointAroundPlayerProvider.OnWorldFinishedInitialization
	// void OnWorldFinishedInitialization(FGameplayTagContainer& ContextTags);                                               // [0xa21a808] Final|Native|Private|HasOutParms 
	// Function /Script/LagerRuntime.FortAthenaPointAroundPlayerProvider.OnCurrentPlaylistLoaded
	// void OnCurrentPlaylistLoaded(FName PlaylistName, FGameplayTagContainer& PlaylistContextTags);                         // [0xa21a320] Final|Native|Private|HasOutParms 
	// Function /Script/LagerRuntime.FortAthenaPointAroundPlayerProvider.OnActorSpawnedResult__DelegateSignature
	// void OnActorSpawnedResult__DelegateSignature(class AActor* SpawnedActor, bool bResult);                               // [0x18a39e4] MulticastDelegate|Public|Delegate 
	// Function /Script/LagerRuntime.FortAthenaPointAroundPlayerProvider.EnablePointProvider
	// void EnablePointProvider();                                                                                           // [0xa218e18] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/LagerRuntime.FortAthenaPointAroundPlayerProvider.DisablePointProvider
	// void DisablePointProvider();                                                                                          // [0xa218d84] Native|Public|BlueprintCallable 
};

/// Class /Script/LagerRuntime.FortAthenaWaterBodyPointProvider
/// Size: 0x02A8 (0x000028 - 0x0002D0)
class UFortAthenaWaterBodyPointProvider : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x30];                                      // 0x0000   (0x0030)  MISSED
	class AFortGameStateAthena*                        CachedGameState;                                            // 0x0030   (0x0008)  
	class UFortAthenaLivingWorldManager*               CachedLivingWorldManager;                                   // 0x0038   (0x0008)  
	FGameplayTagContainer                              PointProviderFiltersTags;                                   // 0x0040   (0x0020)  
	class UEnvQuery*                                   EnvironmentQuery;                                           // 0x0060   (0x0008)  
	TArray<FAIDynamicParam>                            QueryConfig;                                                // 0x0068   (0x0010)  
	FScalableFloat                                     MaxLocationsCountByWaterArea;                               // 0x0078   (0x0028)  
	FScalableFloat                                     MaxLocationsCountBySplineLength;                            // 0x00A0   (0x0028)  
	bool                                               bRemoveUsedLocations;                                       // 0x00C8   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x00C9   (0x0007)  MISSED
	FScalableFloat                                     ActivationDistance;                                         // 0x00D0   (0x0028)  
	FScalableFloat                                     ValidationSweepRadius;                                      // 0x00F8   (0x0028)  
	FScalableFloat                                     ValidationSweepUp;                                          // 0x0120   (0x0028)  
	FScalableFloat                                     ValidationSweepDown;                                        // 0x0148   (0x0028)  
	FCollisionProfileName                              ValidationGroundTraceCollisionProfile;                      // 0x0170   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x0174   (0x0004)  MISSED
	FFortAthenaLivingWorldPointProviderSpawnLimiter    SpawnLimiter;                                               // 0x0178   (0x0068)  
	SDK_UNDEFINED(8,13394) /* TWeakObjectPtr<AFortWaterBodyActor*> */ __um(AssociatedWaterBody);                   // 0x01E0   (0x0008)  
	unsigned char                                      UnknownData03_6[0xE8];                                      // 0x01E8   (0x00E8)  MISSED
};

/// Class /Script/LagerRuntime.FortAthenaRuntimeWaterBodyPointProviderComponent
/// Size: 0x0008 (0x0000A0 - 0x0000A8)
class UFortAthenaRuntimeWaterBodyPointProviderComponent : public UFortAthenaLivingWorldRuntimePointProviderComponent
{ 
public:
	class UClass*                                      PointProviderClass;                                         // 0x00A0   (0x0008)  
};

/// Class /Script/LagerRuntime.FortAthenaLivingWorldSpawnAction_AddAIToGroup
/// Size: 0x0020 (0x000028 - 0x000048)
class UFortAthenaLivingWorldSpawnAction_AddAIToGroup : public UFortAthenaLivingWorldSpawnAction
{ 
public:
	FGameplayTagContainer                              GroupTags;                                                  // 0x0028   (0x0020)  
};

/// Struct /Script/LagerRuntime.FortAthenaLivingWorldTagQueryToSeatMapping
/// Size: 0x0050 (0x000000 - 0x000050)
struct FFortAthenaLivingWorldTagQueryToSeatMapping
{ 
	FGameplayTagQuery                                  TagQuery;                                                   // 0x0000   (0x0048)  
	int32_t                                            SeatIndex;                                                  // 0x0048   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x004C   (0x0004)  MISSED
};

/// Class /Script/LagerRuntime.FortAthenaLivingWorldSpawnAction_SeatPawnInVehicle
/// Size: 0x0010 (0x000028 - 0x000038)
class UFortAthenaLivingWorldSpawnAction_SeatPawnInVehicle : public UFortAthenaLivingWorldSpawnAction
{ 
public:
	TArray<FFortAthenaLivingWorldTagQueryToSeatMapping> SeatMappings;                                              // 0x0028   (0x0010)  
};

/// Struct /Script/LagerRuntime.FortAthenaLivingWorldSpawnerDataSelector
/// Size: 0x0008 (0x000000 - 0x000008)
struct FFortAthenaLivingWorldSpawnerDataSelector
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/LagerRuntime.FortAthenaLivingWorldCondition_CheckPrefabTags
/// Size: 0x0050 (0x000010 - 0x000060)
struct FFortAthenaLivingWorldCondition_CheckPrefabTags : FWorldConditionCommonActorBase
{ 
	FWorldConditionContextDataRef                      ActorRef;                                                   // 0x0010   (0x0008)  
	FGameplayTagQuery                                  TagQuery;                                                   // 0x0018   (0x0048)  
};

/// Struct /Script/LagerRuntime.FortAthenaLivingWorldCondition_TrackedPlayerPresence
/// Size: 0x0058 (0x000010 - 0x000068)
struct FFortAthenaLivingWorldCondition_TrackedPlayerPresence : FWorldConditionCommonActorBase
{ 
	FWorldConditionContextDataRef                      ActorRef;                                                   // 0x0010   (0x0008)  
	FScalableFloat                                     MinDistanceToPlayer;                                        // 0x0018   (0x0028)  
	FScalableFloat                                     MaxDistanceToPlayer;                                        // 0x0040   (0x0028)  
};

/// Struct /Script/LagerRuntime.FortAthenaLivingWorldDensityCondition
/// Size: 0x0088 (0x000010 - 0x000098)
struct FFortAthenaLivingWorldDensityCondition : FWorldConditionCommonActorBase
{ 
	FWorldConditionContextDataRef                      ActorRef;                                                   // 0x0010   (0x0008)  
	FGameplayTag                                       tag;                                                        // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x001C   (0x0004)  MISSED
	FScalableFloat                                     Distance;                                                   // 0x0020   (0x0028)  
	FScalableFloat                                     MaxDensity;                                                 // 0x0048   (0x0028)  
	FScalableFloat                                     MinDensity;                                                 // 0x0070   (0x0028)  
};

/// Struct /Script/LagerRuntime.FortAthenaLinearEncounterPlayerParticipationData
/// Size: 0x0040 (0x000000 - 0x000040)
struct FFortAthenaLinearEncounterPlayerParticipationData
{ 
	unsigned char                                      UnknownData00_2[0x40];                                      // 0x0000   (0x0040)  MISSED
};

/// Struct /Script/LagerRuntime.FortLivingWorldEventTableVariation
/// Size: 0x0048 (0x000000 - 0x000048)
struct FFortLivingWorldEventTableVariation
{ 
	SDK_UNDEFINED(32,13395) /* TWeakObjectPtr<UDataTable*> */ __um(EventTableVariation);                           // 0x0000   (0x0020)  
	FScalableFloat                                     VariationWeight;                                            // 0x0020   (0x0028)  
};

/// Struct /Script/LagerRuntime.FortAthenaLivingWorldCategory
/// Size: 0x00E0 (0x000008 - 0x0000E8)
struct FFortAthenaLivingWorldCategory : FTableRowBase
{ 
	SDK_UNDEFINED(32,13396) /* TWeakObjectPtr<UDataTable*> */ __um(EventTable);                                    // 0x0008   (0x0020)  
	TArray<FFortLivingWorldEventTableVariation>        EventTableVariations;                                       // 0x0028   (0x0010)  
	int32_t                                            MaxCount;                                                   // 0x0038   (0x0004)  
	int32_t                                            MaxSpawnedCount;                                            // 0x003C   (0x0004)  
	int32_t                                            EventInstanceMaxCount;                                      // 0x0040   (0x0004)  
	int32_t                                            EventInstanceMaxSpawnedCount;                               // 0x0044   (0x0004)  
	FWorldConditionQueryDefinition                     CanSpawnCondition;                                          // 0x0048   (0x0018)  
	float                                              Priority;                                                   // 0x0060   (0x0004)  
	bool                                               bExcludeFromGlobalAIBudget;                                 // 0x0064   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0065   (0x0003)  MISSED
	FGameplayTagQuery                                  RequirePlaylistTagQuery;                                    // 0x0068   (0x0048)  
	SDK_UNDEFINED(16,13397) /* TArray<TWeakObjectPtr<UFortAthenaLivingWorldEncounter*>> */ __um(Encounters);       // 0x00B0   (0x0010)  
	FScalableFloat                                     IsEnabled;                                                  // 0x00C0   (0x0028)  
};

/// Struct /Script/LagerRuntime.FortAthenaLivingWorldDensityGrid
/// Size: 0x00C0 (0x0000C0 - 0x000180)
struct FFortAthenaLivingWorldDensityGrid : FFortSpatialGrid
{ 
	unsigned char                                      UnknownData00_1[0xC0];                                      // 0x00C0   (0x00C0)  MISSED
};

/// Struct /Script/LagerRuntime.FortAthenaLivingWorldEventDespawnCondition
/// Size: 0x0020 (0x000000 - 0x000020)
struct FFortAthenaLivingWorldEventDespawnCondition
{ 
	bool                                               bCanBeDespawned;                                            // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              MinDistanceToPlayer;                                        // 0x0004   (0x0004)  
	float                                              TimeAsCandidateBeforeDespawn;                               // 0x0008   (0x0004)  
	EAthenaGamePhaseStep                               CanStartDespawningPhaseStep;                                // 0x000C   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x000D   (0x0003)  MISSED
	int32_t                                            CanStartDespawningSafeZonePhase;                            // 0x0010   (0x0004)  
	bool                                               bCanDespawnWhenInCombatWithPlayer;                          // 0x0014   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0015   (0x0003)  MISSED
	float                                              MaxStimulusAgeToBeConsideredInCombat;                       // 0x0018   (0x0004)  
	bool                                               bCanDespawnInTheStorm;                                      // 0x001C   (0x0001)  
	unsigned char                                      UnknownData03_6[0x3];                                       // 0x001D   (0x0003)  MISSED
};

/// Struct /Script/LagerRuntime.FortAthenaLivingWorldEventTagDensityCondition
/// Size: 0x000C (0x000000 - 0x00000C)
struct FFortAthenaLivingWorldEventTagDensityCondition
{ 
	FGameplayTag                                       tag;                                                        // 0x0000   (0x0004)  
	float                                              Distance;                                                   // 0x0004   (0x0004)  
	float                                              MaxDensity;                                                 // 0x0008   (0x0004)  
};

/// Struct /Script/LagerRuntime.FortAthenaLivingWorldEventDataEntry
/// Size: 0x0048 (0x000000 - 0x000048)
struct FFortAthenaLivingWorldEventDataEntry
{ 
	SDK_UNDEFINED(32,13398) /* TWeakObjectPtr<UFortAthenaLivingWorldEventData*> */ __um(EventData);                // 0x0000   (0x0020)  
	FScalableFloat                                     Weight;                                                     // 0x0020   (0x0028)  
};

/// Struct /Script/LagerRuntime.FortAthenaLivingWorldEvent
/// Size: 0x01A8 (0x000008 - 0x0001B0)
struct FFortAthenaLivingWorldEvent : FTableRowBase
{ 
	SDK_UNDEFINED(32,13399) /* TWeakObjectPtr<UFortAthenaLivingWorldEventData*> */ __um(EventData);                // 0x0008   (0x0020)  
	TArray<FFortAthenaLivingWorldEventDataEntry>       EventDatas;                                                 // 0x0028   (0x0010)  
	FScalableFloat                                     IsEnabled;                                                  // 0x0038   (0x0028)  
	TArray<float>                                      MaxCount;                                                   // 0x0060   (0x0010)  
	TArray<float>                                      MaxSpawnedCount;                                            // 0x0070   (0x0010)  
	TArray<float>                                      EventInstanceMaxCount;                                      // 0x0080   (0x0010)  
	TArray<float>                                      EventInstanceMaxSpawnedCount;                               // 0x0090   (0x0010)  
	float                                              Weight;                                                     // 0x00A0   (0x0004)  
	bool                                               bCheckForActorDensity;                                      // 0x00A4   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00A5   (0x0003)  MISSED
	float                                              MaxActorDensityOverride;                                    // 0x00A8   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x00AC   (0x0004)  MISSED
	TArray<float>                                      MinRespawnTime;                                             // 0x00B0   (0x0010)  
	TArray<float>                                      MaxRespawnTime;                                             // 0x00C0   (0x0010)  
	TArray<float>                                      InstantDeathMinRespawnTime;                                 // 0x00D0   (0x0010)  
	TArray<float>                                      InstantDeathMaxRespawnTime;                                 // 0x00E0   (0x0010)  
	bool                                               bOnlyInSafeZone;                                            // 0x00F0   (0x0001)  
	bool                                               bOnlyInNextSafeZone;                                        // 0x00F1   (0x0001)  
	bool                                               bOnlyInNextSafeZoneIfStormShrinking;                        // 0x00F2   (0x0001)  
	unsigned char                                      UnknownData02_5[0x5];                                       // 0x00F3   (0x0005)  MISSED
	FWorldConditionQueryDefinition                     CanSpawnCondition;                                          // 0x00F8   (0x0018)  
	EAthenaGamePhaseStep                               ActivationGamePhaseStep;                                    // 0x0110   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x0111   (0x0003)  MISSED
	int32_t                                            ActivationSafezoneIndex;                                    // 0x0114   (0x0004)  
	float                                              ActivationMinDelay;                                         // 0x0118   (0x0004)  
	float                                              ActivationMaxDelay;                                         // 0x011C   (0x0004)  
	float                                              DeactivationMinDelay;                                       // 0x0120   (0x0004)  
	float                                              DeactivationMaxDelay;                                       // 0x0124   (0x0004)  
	TArray<FFortAthenaLivingWorldEventTagDensityCondition> TagDensityConditions;                                   // 0x0128   (0x0010)  
	float                                              MinDistanceToPlayer;                                        // 0x0138   (0x0004)  
	float                                              MaxDistanceToPlayer;                                        // 0x013C   (0x0004)  
	bool                                               bCanSpawnWithoutMatchingPlayerDistance;                     // 0x0140   (0x0001)  
	unsigned char                                      UnknownData04_5[0x3];                                       // 0x0141   (0x0003)  MISSED
	float                                              RandomActivationChance;                                     // 0x0144   (0x0004)  
	FFortAthenaLivingWorldEventDespawnCondition        DespawnCondition;                                           // 0x0148   (0x0020)  
	TArray<FFortAthenaLivingWorldDespawnCondition>     DespawnConditions;                                          // 0x0168   (0x0010)  
	FGameplayTagContainer                              RequirePlaylistTags;                                        // 0x0178   (0x0020)  
	FLivingWorldCalendarEventConditions                CalendarEventConditions;                                    // 0x0198   (0x0018)  
};

/// Struct /Script/LagerRuntime.FortAthenaLivingWorldCategoryTableDataList
/// Size: 0x0010 (0x000000 - 0x000010)
struct FFortAthenaLivingWorldCategoryTableDataList
{ 
	TArray<FFortAthenaLivingWorldCategoryTableData>    CategoryTableDatas;                                         // 0x0000   (0x0010)  
};

/// Struct /Script/LagerRuntime.FortAthenaLivingWorldPointProviderFilterRules
/// Size: 0x0038 (0x000000 - 0x000038)
struct FFortAthenaLivingWorldPointProviderFilterRules
{ 
	unsigned char                                      UnknownData00_2[0x38];                                      // 0x0000   (0x0038)  MISSED
};

/// Struct /Script/LagerRuntime.FortAthenaLivingWorldPointProviderSelector
/// Size: 0x0008 (0x000000 - 0x000008)
struct FFortAthenaLivingWorldPointProviderSelector
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
};

