
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: AIModule
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteAI
/// dependency: FortniteAIServer
/// dependency: FortniteGame
/// dependency: GameplayAbilities
/// dependency: GameplayTags
/// dependency: GameplayTasks
/// dependency: JunoGameNative
/// dependency: LagerRuntime
/// dependency: ModularGameplay
/// dependency: PlayspaceSystem
/// dependency: StateTreeModule
/// dependency: StructUtils
/// dependency: WorldConditions

/// Class /Script/JunoAIRuntime.JunoAIBotController
/// Size: 0x0200 (0x0016F0 - 0x0018F0)
class AJunoAIBotController : public AFortAthenaAIBotController
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 6384;

public:
	CMember(class UJunoAIInventoryComponent*)          JunoAIInventoryComponent                                    OFFSET(get<T>, {0x16F0, 8, 0, 0})
	CMember(TArray<FItemAndCount>)                     DefaultItemsToAdd                                           OFFSET(get<T>, {0x16F8, 16, 0, 0})
	DMember(bool)                                      bRequiresPersistentInventory                                OFFSET(get<bool>, {0x1791, 1, 0, 0})
	SMember(FScalableFloat)                            EnableDurabilityOnInventory                                 OFFSET(getStruct<T>, {0x1798, 40, 0, 0})
	SMember(FScalableFloat)                            UseRoleCheckForDurability                                   OFFSET(getStruct<T>, {0x17C0, 40, 0, 0})
	SMember(FGameplayTagQuery)                         RequiredRoleForDurability                                   OFFSET(getStruct<T>, {0x17E8, 72, 0, 0})
	DMember(bool)                                      bUseFocusedActorEyeLocationForFocalPoint                    OFFSET(get<bool>, {0x1830, 1, 0, 0})
	DMember(bool)                                      bUseValidItemsPerType                                       OFFSET(get<bool>, {0x1831, 1, 0, 0})
	SMember(FScalableFloat)                            EffectivenessMultiplierForWeaponSelectionOnPickedOrAddedItem OFFSET(getStruct<T>, {0x1838, 40, 0, 0})
	CMember(TMap<FGameplayTag, FValidItemSlotConfiguration>) ValidItemsTablePerType                                OFFSET(get<T>, {0x1860, 80, 0, 0})
	CMember(class UFortItemDefinition*)                AutomaticallyEquippedWeaponOnDurabilityBreak                OFFSET(get<T>, {0x18B0, 8, 0, 0})
	SMember(FScalableFloat)                            DurabilityMultiplier                                        OFFSET(getStruct<T>, {0x18B8, 40, 0, 0})
	SMember(FGameplayTag)                              TagToApplyWhenAddingFallbackItemForDurabilityBreak          OFFSET(getStruct<T>, {0x18E0, 4, 0, 0})
};

/// Class /Script/JunoAIRuntime.JunoAIBotEvaluator_FallbackBehavior
/// Size: 0x0080 (0x0001A0 - 0x000220)
class UJunoAIBotEvaluator_FallbackBehavior : public UFortAthenaAIBotEvaluator_Movement
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 544;

public:
	SMember(FEQSParametrizedQueryExecutionRequest)     EQSRequest                                                  OFFSET(getStruct<T>, {0x1B8, 72, 0, 0})
	CMember(class UClass*)                             NavigationQueryFilterClass                                  OFFSET(get<T>, {0x200, 8, 0, 0})
	DMember(bool)                                      bFallbackToPointWithNoCustomNavigationQueryFilter           OFFSET(get<bool>, {0x208, 1, 0, 0})
	SMember(FName)                                     BestTargetActorName                                         OFFSET(getStruct<T>, {0x20C, 4, 0, 0})
	SMember(FName)                                     EnableKeyName                                               OFFSET(getStruct<T>, {0x214, 4, 0, 0})
};

/// Class /Script/JunoAIRuntime.JunoAIBotEvaluator_FTUENPC
/// Size: 0x00C0 (0x0000A8 - 0x000168)
class UJunoAIBotEvaluator_FTUENPC : public UFortAthenaAIBotEvaluator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 360;

public:
	SMember(FName)                                     TeleportDestinationKeyName                                  OFFSET(getStruct<T>, {0xCC, 4, 0, 0})
	SMember(FName)                                     ShouldTeleportKeyName                                       OFFSET(getStruct<T>, {0xD4, 4, 0, 0})
	SMember(FJunoAIFTUERuntimeConfiguration)           FTUERuntimeConfiguration                                    OFFSET(getStruct<T>, {0xE0, 136, 0, 0})
};

/// Class /Script/JunoAIRuntime.JunoAIBotEvaluator_HardRemovalStart
/// Size: 0x0088 (0x0001A0 - 0x000228)
class UJunoAIBotEvaluator_HardRemovalStart : public UFortAthenaAIBotEvaluator_Movement
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 552;

public:
	SMember(FEQSParametrizedQueryExecutionRequest)     EQSRequest                                                  OFFSET(getStruct<T>, {0x1B8, 72, 0, 0})
	SMember(FScalableFloat)                            RequestHardRemovalOnSuccess                                 OFFSET(getStruct<T>, {0x200, 40, 0, 0})
};

/// Class /Script/JunoAIRuntime.JunoAIBotEvaluator_OffhandWeapon
/// Size: 0x0068 (0x0000A8 - 0x000110)
class UJunoAIBotEvaluator_OffhandWeapon : public UFortAthenaAIBotEvaluator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
	SMember(FGameplayTag)                              TorchWeaponTag                                              OFFSET(getStruct<T>, {0xC0, 4, 0, 0})
	SMember(FGameplayTag)                              MinTemperatureStateToAlwaysEquipTorch                       OFFSET(getStruct<T>, {0xC4, 4, 0, 0})
	SMember(FGameplayTag)                              TemperatureStateUsedToDecideSpecialTimeTorchUsage           OFFSET(getStruct<T>, {0xC8, 4, 0, 0})
	DMember(float)                                     MaxDeltaFromHotTemperatureToEquipTorch                      OFFSET(get<float>, {0xCC, 4, 0, 0})
	CMember(TArray<FName>)                             ExecutionStatusesToCheckedToHolsterKeyNames                 OFFSET(get<T>, {0xD0, 16, 0, 0})
	CMember(TArray<FName>)                             BoolsToCheckToHolsterKeyNames                               OFFSET(get<T>, {0xF0, 16, 0, 0})
};

/// Class /Script/JunoAIRuntime.JunoAIBotEvaluator_UnderThunderBehavior
/// Size: 0x0110 (0x0001A0 - 0x0002B0)
class UJunoAIBotEvaluator_UnderThunderBehavior : public UFortAthenaAIBotEvaluator_Movement
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 688;

public:
	SMember(FScalableFloat)                            IsEnabled                                                   OFFSET(getStruct<T>, {0x1D0, 40, 0, 0})
	SMember(FScalableFloat)                            UseTagForShelterCheck                                       OFFSET(getStruct<T>, {0x1F8, 40, 0, 0})
	SMember(FGameplayTag)                              TagToCheckForSheltered                                      OFFSET(getStruct<T>, {0x220, 4, 0, 0})
	CMember(TArray<TEnumAsByte<EObjectTypeQuery>>)     ShelterQueryTypes                                           OFFSET(get<T>, {0x228, 16, 0, 0})
	SMember(FScalableFloat)                            MaxShelterDistance                                          OFFSET(getStruct<T>, {0x238, 40, 0, 0})
	SMember(FScalableFloat)                            MinDistanceFromShelterLocationToKeepItValid                 OFFSET(getStruct<T>, {0x260, 40, 0, 0})
	SMember(FGameplayTagContainer)                     ShelterCollidingActorRequiresAnyTag                         OFFSET(getStruct<T>, {0x288, 32, 0, 0})
	SMember(FGameplayTag)                              TagToApplyForShelteredNPC                                   OFFSET(getStruct<T>, {0x2A8, 4, 0, 0})
	SMember(FGameplayTag)                              TagToApplyForNonShelteredNPC                                OFFSET(getStruct<T>, {0x2AC, 4, 0, 0})
};

/// Class /Script/JunoAIRuntime.JunoAIBotEvaluator_UnstuckFailsafe
/// Size: 0x0110 (0x0000A8 - 0x0001B8)
class UJunoAIBotEvaluator_UnstuckFailsafe : public UFortAthenaAIBotEvaluator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 440;

public:
	SMember(FName)                                     TeleportDestinationKeyName                                  OFFSET(getStruct<T>, {0xC0, 4, 0, 0})
	SMember(FName)                                     ShouldTeleportKeyName                                       OFFSET(getStruct<T>, {0xC4, 4, 0, 0})
	SMember(FJunoAIUnstuckFailsafeConfiguration)       Configuration                                               OFFSET(getStruct<T>, {0xD0, 232, 0, 0})
};

/// Class /Script/JunoAIRuntime.JunoAIEvaluator_RequestedMoodReaction
/// Size: 0x0008 (0x0000A0 - 0x0000A8)
class UJunoAIEvaluator_RequestedMoodReaction : public UFortAthenaAIEvaluator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
};

/// Class /Script/JunoAIRuntime.JunoAIFriendshipPawnComponent
/// Size: 0x0358 (0x0000A8 - 0x000400)
class UJunoAIFriendshipPawnComponent : public UFortPawnComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1024;

public:
	DMember(bool)                                      bAutoEnableFriendshipChanges                                OFFSET(get<bool>, {0xA8, 1, 0, 0})
	DMember(bool)                                      bAutoDisableFriendshipChangesWhenConverted                  OFFSET(get<bool>, {0xA9, 1, 0, 0})
	CMember(class UDataTable*)                         VerbsDatatable                                              OFFSET(get<T>, {0xB0, 8, 0, 0})
	SMember(FScalableFloat)                            MaxDistanceFromPlayerToReact                                OFFSET(getStruct<T>, {0xB8, 40, 0, 0})
	SMember(FScalableFloat)                            MinimumFriendship                                           OFFSET(getStruct<T>, {0xE0, 40, 0, 0})
	SMember(FScalableFloat)                            MaximumFriendship                                           OFFSET(getStruct<T>, {0x108, 40, 0, 0})
	CMember(TMap<FGameplayTag, FGameplayTag>)          MoodReactionOnFriendshipStateIncrease                       OFFSET(get<T>, {0x130, 80, 0, 0})
	CMember(TMap<FGameplayTag, FGameplayTag>)          MoodReactionOnFriendshipStateDecrease                       OFFSET(get<T>, {0x180, 80, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnFriendshipValueRequestedChangeDelegate                    OFFSET(getStruct<T>, {0x388, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnFriendshipValueChangedDelegate                            OFFSET(getStruct<T>, {0x3B0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnFriendshipStateChangedDelegate                            OFFSET(getStruct<T>, {0x3D8, 16, 0, 0})
	DMember(float)                                     FriendshipValue                                             OFFSET(get<float>, {0x3EC, 4, 0, 0})
	SMember(FGameplayTag)                              FriendshipState                                             OFFSET(getStruct<T>, {0x3F0, 4, 0, 0})


	/// Functions
	// Function /Script/JunoAIRuntime.JunoAIFriendshipPawnComponent.HandleUnconverted
	// void HandleUnconverted(class AFortPawn* UnconvertedPawn, EUnconvertReason UnconvertReason);                              // [0xcb9b428] Final|Native|Private 
	// Function /Script/JunoAIRuntime.JunoAIFriendshipPawnComponent.HandleConverted
	// void HandleConverted(class AFortPawn* InstigatorPawn, class AFortPawn* ConvertedPawn);                                   // [0xcb9b364] Final|Native|Private 
	// Function /Script/JunoAIRuntime.JunoAIFriendshipPawnComponent.GetFriendshipValue
	// float GetFriendshipValue();                                                                                              // [0xcb9aa24] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoAIRuntime.JunoAIFriendshipPawnComponent.GetFriendshipState
	// FGameplayTag GetFriendshipState();                                                                                       // [0x8ac99e4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoAIRuntime.JunoAIFriendshipPawnComponent.EnableFriendshipChanges
	// bool EnableFriendshipChanges();                                                                                          // [0xcb9a9cc] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/JunoAIRuntime.JunoAIFriendshipPawnComponent.DisableFriendshipChanges
	// bool DisableFriendshipChanges();                                                                                         // [0xcb9a9a8] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/JunoAIRuntime.JunoAIFriendshipPawnComponent.AreFriendshipChangesEnabled
	// bool AreFriendshipChangesEnabled();                                                                                      // [0xcb9a990] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/JunoAIRuntime.JunoAIInventoryComponent
/// Size: 0x0010 (0x000310 - 0x000320)
class UJunoAIInventoryComponent : public UJunoInventoryComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 800;

public:
};

/// Class /Script/JunoAIRuntime.JunoAIMerchantComponent
/// Size: 0x0050 (0x0000A8 - 0x0000F8)
class UJunoAIMerchantComponent : public UFortPawnComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
};

/// Class /Script/JunoAIRuntime.JunoAIRuntimeAnalytics
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoAIRuntimeAnalytics : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/JunoAIRuntime.JunoBTTask_FTUENPC
/// Size: 0x0008 (0x0000E8 - 0x0000F0)
class UJunoBTTask_FTUENPC : public UFortBTTask_ExecuteGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	SMember(FName)                                     FTUENPCStatusKeyName                                        OFFSET(getStruct<T>, {0xE8, 4, 0, 0})
	SMember(FName)                                     ShouldTeleportKeyName                                       OFFSET(getStruct<T>, {0xEC, 4, 0, 0})
};

/// Class /Script/JunoAIRuntime.JunoBTTask_ReactToVerb
/// Size: 0x0008 (0x000080 - 0x000088)
class UJunoBTTask_ReactToVerb : public UFortAthenaBTTask_ReactToVerb
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FName)                                     MoodReactionTagKeyName                                      OFFSET(getStruct<T>, {0x80, 4, 0, 0})
};

/// Class /Script/JunoAIRuntime.JunoBTTask_RunMoodReaction
/// Size: 0x0048 (0x000070 - 0x0000B8)
class UJunoBTTask_RunMoodReaction : public UBTTaskNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	DMember(bool)                                      bRunMoodComponentRequest                                    OFFSET(get<bool>, {0x70, 1, 0, 0})
	CMember(TArray<FRandomizedMoodReactionConfig>)     PossibleMoodReactions                                       OFFSET(get<T>, {0x78, 16, 0, 0})
	SMember(FScalableFloat)                            MaximumDuration                                             OFFSET(getStruct<T>, {0x88, 40, 0, 0})
	SMember(FName)                                     ExecutionStatusKeyName                                      OFFSET(getStruct<T>, {0xB0, 4, 0, 0})
};

/// Class /Script/JunoAIRuntime.FJunoAICampManagementVisitorWorldConditionSchema
/// Size: 0x0000 (0x000040 - 0x000040)
class UFJunoAICampManagementVisitorWorldConditionSchema : public UJunoCampWorldConditionSchema
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Script/JunoAIRuntime.JunoAICampManagementRewardsWorldConditionSchema
/// Size: 0x0008 (0x000040 - 0x000048)
class UJunoAICampManagementRewardsWorldConditionSchema : public UJunoCampWorldConditionSchema
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Class /Script/JunoAIRuntime.JunoCampAIManagementComponent
/// Size: 0x0C98 (0x0000A0 - 0x000D38)
class UJunoCampAIManagementComponent : public UJunoCampComponentBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3384;

public:
	SMember(FJunoCampAICachedRecruitmentData)          CachedAndReplicatedRecruitmentData                          OFFSET(getStruct<T>, {0xB8, 40, 0, 0})
	CMember(TMap<FGameplayTag, TWeakObjectPtr<AFortPawn*>>) UniqueAIIdentifierToSpawnedAIs                         OFFSET(get<T>, {0x148, 80, 0, 0})
	CMember(TArray<TScriptInterface<Class>>)           NPCPointProviders                                           OFFSET(get<T>, {0x280, 16, 0, 0})
	CMember(class UFortAthenaLivingWorldEncounterInstance*) NPCEncounter                                           OFFSET(get<T>, {0x290, 8, 0, 0})
	CMember(TArray<TScriptInterface<Class>>)           CreaturePointProviders                                      OFFSET(get<T>, {0x298, 16, 0, 0})
	CMember(class UFortAthenaLivingWorldEncounterInstance*) CreatureEncounter                                      OFFSET(get<T>, {0x2A8, 8, 0, 0})
	SMember(FJunoAICampManagementVisitorsConfigurationDigested) VisitorsConfigurationDigested                      OFFSET(getStruct<T>, {0x2B0, 24, 0, 0})
	CMember(TArray<FJunoAICampManagementFixedNPCsPickingConfiguration>) CachedFixedNPCsConfigurationAtCurrentAwesomenessLevel OFFSET(get<T>, {0x2C8, 16, 0, 0})
	SMember(FJunoAICampManagementVisitorsPickingConfiguration) CachedVisitorsPickingConfigurationAtCurrentAwesomenessLevel OFFSET(getStruct<T>, {0x2D8, 40, 0, 0})
	CMember(TArray<FGameplayTag>)                      NonSpawnedCreaturesIdentifiersWaitingForSpawnCondition      OFFSET(get<T>, {0x300, 16, 0, 0})
	SMember(FJunoAICampManagementLWMConfiguration)     NPCLWMConfiguration                                         OFFSET(getStruct<T>, {0x318, 928, 0, 0})
	SMember(FJunoAICampManagementLWMConfiguration)     CreaturesLWMConfiguration                                   OFFSET(getStruct<T>, {0x6B8, 928, 0, 0})
	SMember(FJunoAICampManagementVisitorsConfiguration) VisitorsConfiguration                                      OFFSET(getStruct<T>, {0xA58, 48, 0, 0})
	CMember(TMap<int32_t, UDataTable*>)                AwesomenessLevelToFixedNPCsConfiguration                    OFFSET(get<T>, {0xA88, 80, 0, 0})
	CMember(TMap<int32_t, FDataTableRowHandle>)        AwesomenessLevelToVisitorsPickingConfiguration              OFFSET(get<T>, {0xAD8, 80, 0, 0})
	CMember(TMap<int32_t, UDataTable*>)                AwesomenessLevelToNPCRewards                                OFFSET(get<T>, {0xB28, 80, 0, 0})
	SMember(FScalableFloat)                            InitialIngameHoursDelayBeforeFirstRewardRoll                OFFSET(getStruct<T>, {0xB78, 40, 0, 0})
	SMember(FScalableFloat)                            MinimumIngameHoursBetweenRewardRolls                        OFFSET(getStruct<T>, {0xBA0, 40, 0, 0})
	SMember(FScalableFloat)                            ResetDelayBetweenRollsOnLevelChange                         OFFSET(getStruct<T>, {0xBC8, 40, 0, 0})
	SMember(FScalableFloat)                            PassiveResourceGatheringTime                                OFFSET(getStruct<T>, {0xBF0, 40, 0, 0})
	SMember(FScalableFloat)                            MultiplierForSimulatedGeneration                            OFFSET(getStruct<T>, {0xC18, 40, 0, 0})
	SMember(FScalableFloat)                            MaximumAllocableSOPerAIForSimulation                        OFFSET(getStruct<T>, {0xC40, 40, 0, 0})
	SMember(FNavAgentSelector)                         SupportedAgents                                             OFFSET(getStruct<T>, {0xC68, 4, 0, 0})
	SMember(FScalableFloat)                            ShouldCheckWCForRemoteRecruitment                           OFFSET(getStruct<T>, {0xC70, 40, 0, 0})
	SMember(FScalableFloat)                            RequireNPCToBeInVisitorsListForRemoteRecruitment            OFFSET(getStruct<T>, {0xC98, 40, 0, 0})
	SMember(FScalableFloat)                            SpawnDelayFromCampSpawn                                     OFFSET(getStruct<T>, {0xCC0, 40, 0, 0})
	SMember(FScalableFloat)                            MinDistanceFromPlayersToAddVisitors                         OFFSET(getStruct<T>, {0xCE8, 40, 0, 0})
	SMember(FScalableFloat)                            MinDistanceFromPlayersToAddFixedNPCs                        OFFSET(getStruct<T>, {0xD10, 40, 0, 0})


	/// Functions
	// Function /Script/JunoAIRuntime.JunoCampAIManagementComponent.RequestCreatureTemporaryDespawn
	// bool RequestCreatureTemporaryDespawn(FGameplayTag& UniqueAIIdentifier);                                                  // [0xcb9b4ec] Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoAIRuntime.JunoCampAIManagementComponent.HandleAwesomeLevelReady
	// void HandleAwesomeLevelReady(FJunoCampAwesomeStatsData& AwesomeData);                                                    // [0xcb9b2e0] Final|Native|Protected|HasOutParms 
	// Function /Script/JunoAIRuntime.JunoCampAIManagementComponent.HandleAwesomeLevelChanged
	// void HandleAwesomeLevelChanged(FJunoAwesomeLevelChangeData& ChangeData);                                                 // [0xcb9b250] Final|Native|Protected|HasOutParms 
	// Function /Script/JunoAIRuntime.JunoCampAIManagementComponent.HandleAISpawned
	// void HandleAISpawned(class AActor* SpawnedAIPawn, class UFortAthenaLivingWorldEventData* EventData);                     // [0xcb9b18c] Final|Native|Protected 
	// Function /Script/JunoAIRuntime.JunoCampAIManagementComponent.HandleAIDespawned
	// void HandleAIDespawned(class AActor* DespawnedAIPawn, class UFortAthenaLivingWorldEventData* EventData);                 // [0xcb9b0c8] Final|Native|Protected 
	// Function /Script/JunoAIRuntime.JunoCampAIManagementComponent.HandleAIControllerFullySpawned
	// void HandleAIControllerFullySpawned(class AAIController* Controller, class AFortPawn* Pawn);                             // [0xcb9ad5c] Final|Native|Protected 
	// Function /Script/JunoAIRuntime.JunoCampAIManagementComponent.HandleAIControllerChanged
	// void HandleAIControllerChanged(class APawn* Pawn, class AController* OldController, class AController* NewController);   // [0xcb9ab6c] Final|Native|Protected 
	// Function /Script/JunoAIRuntime.JunoCampAIManagementComponent.GetSpawnedAIFromUniqueAIIdentifier
	// class AFortPawn* GetSpawnedAIFromUniqueAIIdentifier(FGameplayTag& UniqueAIIdentifier);                                   // [0xcb9aa3c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoAIRuntime.JunoCampAIManagementComponent.GetCachedAndReplicatedRecruitmentData
	// FJunoCampAICachedRecruitmentData GetCachedAndReplicatedRecruitmentData();                                                // [0xcb9a9f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/JunoAIRuntime.JunoCaveLivingWorldEventData
/// Size: 0x0058 (0x000158 - 0x0001B0)
class UJunoCaveLivingWorldEventData : public UFortAthenaLivingWorldEventData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 432;

public:
	SMember(FScalableFloat)                            CaveRoomDistanceMin                                         OFFSET(getStruct<T>, {0x160, 40, 0, 0})
	SMember(FScalableFloat)                            CaveRoomDistanceMax                                         OFFSET(getStruct<T>, {0x188, 40, 0, 0})
};

/// Class /Script/JunoAIRuntime.JunoCreatureInCampLivingWorldStaticPointProvider
/// Size: 0x0008 (0x000388 - 0x000390)
class AJunoCreatureInCampLivingWorldStaticPointProvider : public AFortAthenaLivingWorldStaticPointProvider
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 912;

public:
};

/// Class /Script/JunoAIRuntime.JunoVerbProcessor_CreaturePet
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UJunoVerbProcessor_CreaturePet : public UFortObjectiveProcessor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
};

/// Class /Script/JunoAIRuntime.JunoVerbProcessor_CreatureFed
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UJunoVerbProcessor_CreatureFed : public UFortObjectiveProcessor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
};

/// Class /Script/JunoAIRuntime.JunoCreaturePawnComponent
/// Size: 0x0200 (0x0000A8 - 0x0002A8)
class UJunoCreaturePawnComponent : public UFortPawnComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 680;

public:
	SMember(FAIFriendshipContinuousChangeConfiguration) ContinuousFriendshipChangeConfigurationWhenNoInteractions  OFFSET(getStruct<T>, {0xA8, 12, 0, 0})
	SMember(FScalableFloat)                            MaxNoInteractionTimeForNPCBeforeFriendshipChangeInJunoGameTimeHours OFFSET(getStruct<T>, {0xB8, 40, 0, 0})
	SMember(FAIFriendshipContinuousChangeConfiguration) ContinuousFriendshipChangeConfigurationWithNoRecruitmentObject OFFSET(getStruct<T>, {0xE0, 12, 0, 0})
	SMember(FAIFriendshipContinuousChangeConfiguration) ContinuousFriendshipChangeConfigurationWithSoftRemovedCamp OFFSET(getStruct<T>, {0xEC, 12, 0, 0})
	SMember(FScalableFloat)                            ConvertedOverrideTileGenerationRadius                       OFFSET(getStruct<T>, {0xF8, 40, 0, 0})
	SMember(FScalableFloat)                            ConvertedOverrideTileRemovalRadius                          OFFSET(getStruct<T>, {0x120, 40, 0, 0})
	SMember(FScalableFloat)                            AutomaticFriendshipResetDelay                               OFFSET(getStruct<T>, {0x148, 40, 0, 0})
	SMember(FGameplayTagQuery)                         ValidFriendshipStateQueryForAutomaticReset                  OFFSET(getStruct<T>, {0x170, 72, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnJunoCreatureRecruitedToCampDelegate                       OFFSET(getStruct<T>, {0x1B8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnJunoCreatureCustomNameChangedDelegate                     OFFSET(getStruct<T>, {0x1C8, 16, 0, 0})
	SMember(FText)                                     CachedAndReplicatedCustomName                               OFFSET(getStruct<T>, {0x1D8, 16, 0, 0})


	/// Functions
	// Function /Script/JunoAIRuntime.JunoCreaturePawnComponent.RecruitToCampIfPossible
	// bool RecruitToCampIfPossible(FJunoCreatureRecruitmentRequestData& RecruitmentRequestData);                               // [0xcb9dc9c] Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoAIRuntime.JunoCreaturePawnComponent.OnRep_CachedCustomName
	// void OnRep_CachedCustomName();                                                                                           // [0xcb9dc88] Final|Native|Private|Const 
	// Function /Script/JunoAIRuntime.JunoCreaturePawnComponent.NotifyPetting
	// void NotifyPetting(class AFortPawn* Instigator);                                                                         // [0xcb9dc08] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/JunoAIRuntime.JunoCreaturePawnComponent.NotifyFeeding
	// void NotifyFeeding(class AFortPawn* Instigator, class UFortItemDefinition* ItemBeingFed);                                // [0xcb9d92c] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/JunoAIRuntime.JunoCreaturePawnComponent.HandleUnconverted
	// void HandleUnconverted(class AFortPawn* UnconvertedPawn, EUnconvertReason UnconvertReason);                              // [0xcb9d868] Final|Native|Private 
	// Function /Script/JunoAIRuntime.JunoCreaturePawnComponent.HandleDied
	// void HandleDied(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, FVector HitLocation, class UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum); // [0xcb9d408] Final|Native|Private|HasDefaults 
	// Function /Script/JunoAIRuntime.JunoCreaturePawnComponent.HandleConverted
	// void HandleConverted(class AFortPawn* InstigatorPawn, class AFortPawn* ConvertedPawn);                                   // [0xcb9d344] Final|Native|Private 
	// Function /Script/JunoAIRuntime.JunoCreaturePawnComponent.GetCustomName
	// FText GetCustomName();                                                                                                   // [0xcb9d30c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoAIRuntime.JunoCreaturePawnComponent.GetAssignedRecruitmentObjectId
	// FGuid GetAssignedRecruitmentObjectId();                                                                                  // [0xcb9d2f0] Final|BlueprintAuthorityOnly|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoAIRuntime.JunoCreaturePawnComponent.GetAssignedAndSpawnedRecruitmentObject
	// class UJunoCampRecruitmentObjectComponent* GetAssignedAndSpawnedRecruitmentObject();                                     // [0xcb9d2cc] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoAIRuntime.JunoCreaturePawnComponent.AssignNewCustomName
	// bool AssignNewCustomName(FText& NewCustomName);                                                                          // [0xcb9d110] Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/JunoAIRuntime.JunoNPCPawnComponent
/// Size: 0x02A8 (0x0000A8 - 0x000350)
class UJunoNPCPawnComponent : public UFortPawnComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 848;

public:
	SMember(FMulticastInlineDelegate)                  OnJunoNPCPawnComponentChangedSoftRemovedReason              OFFSET(getStruct<T>, {0xA8, 16, 0, 0})
	CMember(TArray<class UClass*>)                     PreFTUESkillSetClasses                                      OFFSET(get<T>, {0x1D0, 16, 0, 0})
	CMember(TMap<FGameplayTag, FText>)                 AIRoleToDisplayText                                         OFFSET(get<T>, {0x230, 80, 0, 0})
	CMember(TArray<class UClass*>)                     FTUESkillSetClasses                                         OFFSET(get<T>, {0x280, 16, 0, 0})
	SMember(FGameplayTagContainer)                     FTUETagsToAdd                                               OFFSET(getStruct<T>, {0x290, 32, 0, 0})
	SMember(FScalableFloat)                            FTUEOverrideTileGenerationRadius                            OFFSET(getStruct<T>, {0x2B0, 40, 0, 0})
	SMember(FScalableFloat)                            FTUEOverrideTileRemovalRadius                               OFFSET(getStruct<T>, {0x2D8, 40, 0, 0})
	SMember(FScalableFloat)                            TimeToGoInHardRemovalStartStateBeforeHardRemovalInRealSeconds OFFSET(getStruct<T>, {0x300, 40, 0, 0})
	SMember(FScalableFloat)                            TimeForVisitorsToGoInHardRemovalStartStateBeforeHardRemovalInRealSeconds OFFSET(getStruct<T>, {0x328, 40, 0, 0})


	/// Functions
	// Function /Script/JunoAIRuntime.JunoNPCPawnComponent.GetSoftRemovedReasons
	// FGameplayTagContainer GetSoftRemovedReasons();                                                                           // [0xcb9d328] Final|Native|Private|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoAIRuntime.JunoNPCPawnComponent.GetAIRoleDisplayText
	// FText GetAIRoleDisplayText();                                                                                            // [0xcb9d298] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoAIRuntime.JunoNPCPawnComponent.GetAIRole
	// FGameplayTag GetAIRole();                                                                                                // [0x8383ac0] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoAIRuntime.JunoNPCPawnComponent.ConvertAIRoleToDisplayText
	// FText ConvertAIRoleToDisplayText(FGameplayTag& AIRole);                                                                  // [0xcb9d1b8] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/JunoAIRuntime.JunoQueryContext_AICamp_AssignedRecruitmentObject
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoQueryContext_AICamp_AssignedRecruitmentObject : public UEnvQueryContext
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/JunoAIRuntime.JunoQueryContext_AICamp_LastOrCurrentAssignedRecruitmentObject_Location
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoQueryContext_AICamp_LastOrCurrentAssignedRecruitmentObject_Location : public UEnvQueryContext
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/JunoAIRuntime.JunoAIFTUEEndWorldConditionSchema
/// Size: 0x0000 (0x000038 - 0x000038)
class UJunoAIFTUEEndWorldConditionSchema : public UWorldConditionSchema
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Script/JunoAIRuntime.PlayspaceComponent_Root_JunoAIManagement
/// Size: 0x0A80 (0x0000F8 - 0x000B78)
class UPlayspaceComponent_Root_JunoAIManagement : public UFortPlayspaceComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2936;

public:
	SMember(FJunoAIFollowerLWMConfiguration)           LWMConfiguration                                            OFFSET(getStruct<T>, {0xF8, 928, 0, 0})
	SMember(FJunoAITemporaryGlobalEncounterLWMConfiguration) TemporaryGlobalEncounterLWMConfiguration              OFFSET(getStruct<T>, {0x498, 920, 0, 0})
	CMember(TMap<FGameplayTag, FJunoAIFTUEConfiguration>) FTUEConfigurations                                       OFFSET(get<T>, {0x830, 80, 0, 0})
	SMember(FScalableFloat)                            MaxNoInteractionTimeForNPCBeforeSoftRemovalInJunoGameTimeHours OFFSET(getStruct<T>, {0x880, 40, 0, 0})
	SMember(FScalableFloat)                            TimeBeforeSoftRemovedNPCBecomesHardRemovedInJunoGameTimeHours OFFSET(getStruct<T>, {0x8A8, 40, 0, 0})
	SMember(FScalableFloat)                            TimeToRemoveStaleFollowersFromDisconnectedPlayersInRealHours OFFSET(getStruct<T>, {0x8D0, 40, 0, 0})
	SMember(FScalableFloat)                            SecondsToWaitBeforeRemovingStaleFollowers                   OFFSET(getStruct<T>, {0x8F8, 40, 0, 0})
	SMember(FScalableFloat)                            TimeBeforeSoftRemovedCreatureBecomesHardRemovedInJunoGameTimeHours OFFSET(getStruct<T>, {0x920, 40, 0, 0})
	SMember(FScalableFloat)                            MinFriendshipValueBeforeSoftRemoval                         OFFSET(getStruct<T>, {0x948, 40, 0, 0})
	SMember(FScalableFloat)                            GlobalRecruitableNPCsCap                                    OFFSET(getStruct<T>, {0x970, 40, 0, 0})
	SMember(FScalableFloat)                            GlobalRecruitableCreaturesCap                               OFFSET(getStruct<T>, {0x998, 40, 0, 0})
	CMember(class UDataTable*)                         BannedDescriptorTagsTable                                   OFFSET(get<T>, {0x9C0, 8, 0, 0})
	CMember(TArray<FJunoAIFollowerManagedData>)        ManagedFollowers                                            OFFSET(get<T>, {0x9F8, 16, 0, 0})
	CMember(TScriptInterface<Class>)                   TemporaryGlobalEncounterPointProvider                       OFFSET(get<T>, {0xA08, 16, 0, 0})
	CMember(class UFortAthenaLivingWorldEncounterInstance*) TemporaryGlobalEncounter                               OFFSET(get<T>, {0xA18, 8, 0, 0})
	CMember(TMap<FGameplayTag, FFTUERuntimeData>)      FTUERuntimeDatas                                            OFFSET(get<T>, {0xA20, 80, 0, 0})
	CMember(TMap<FGameplayTag, FJunoAIWorldNPCSpawningData>) WorldAssignedNPCs                                     OFFSET(get<T>, {0xAE0, 80, 0, 0})


	/// Functions
	// Function /Script/JunoAIRuntime.PlayspaceComponent_Root_JunoAIManagement.HandleFTUENPCSpawned
	// void HandleFTUENPCSpawned(class AActor* FTUENPC, class UFortAthenaLivingWorldEventData* EventData);                      // [0xcb9d7a4] Final|Native|Private 
};

/// Class /Script/JunoAIRuntime.JunoAISafetyBubbleComponent
/// Size: 0x00A8 (0x0000A0 - 0x000148)
class UJunoAISafetyBubbleComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 328;

public:
	CMember(TArray<FFortAthenaLivingWorldEventTagDensityRegistration>) TagsData                                    OFFSET(get<T>, {0xA0, 16, 0, 0})
	SMember(FScalableFloat)                            InGameHoursDuration                                         OFFSET(getStruct<T>, {0xB0, 40, 0, 0})
	SMember(FScalableFloat)                            SafetyBubbleRadius                                          OFFSET(getStruct<T>, {0xD8, 40, 0, 0})


	/// Functions
	// Function /Script/JunoAIRuntime.JunoAISafetyBubbleComponent.OnTimeOfDayPhaseChanged
	// void OnTimeOfDayPhaseChanged(EFortDayPhase CurrentDayPhase, EFortDayPhase PreviousDayPhase, bool bAtCreation);           // [0xcbbe470] Final|Native|Protected 
};

/// Class /Script/JunoAIRuntime.EnvQueryTest_JunoIsNearBuilding
/// Size: 0x00A0 (0x0001F8 - 0x000298)
class UEnvQueryTest_JunoIsNearBuilding : public UEnvQueryTest
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 664;

public:
	SMember(FEnvOverlapData)                           OverlapData                                                 OFFSET(getStruct<T>, {0x1F8, 48, 0, 0})
	SMember(FAIDataProviderBoolValue)                  GenerateOnlyInsideClusterBounds                             OFFSET(getStruct<T>, {0x228, 56, 0, 0})
	SMember(FAIDataProviderFloatValue)                 MinimumBuildingClusterVolume                                OFFSET(getStruct<T>, {0x260, 56, 0, 0})
};

/// Class /Script/JunoAIRuntime.EnvQueryTest_JunoIsUnderCeiling
/// Size: 0x0068 (0x0001F8 - 0x000260)
class UEnvQueryTest_JunoIsUnderCeiling : public UEnvQueryTest
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 608;

public:
	SMember(FEnvOverlapData)                           SweepData                                                   OFFSET(getStruct<T>, {0x1F8, 48, 0, 0})
	SMember(FAIDataProviderFloatValue)                 SweepHeight                                                 OFFSET(getStruct<T>, {0x228, 56, 0, 0})
};

/// Class /Script/JunoAIRuntime.JunoAIBotEvaluator_ReactToVerb
/// Size: 0x0010 (0x0003E0 - 0x0003F0)
class UJunoAIBotEvaluator_ReactToVerb : public UFortAthenaAIBotEvaluator_ReactToVerb
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1008;

public:
	SMember(FName)                                     MoodReactionTagKeyName                                      OFFSET(getStruct<T>, {0x3E0, 4, 0, 0})
};

/// Class /Script/JunoAIRuntime.JunoAICheatManager
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoAICheatManager : public UChildCheatManager
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/JunoAIRuntime.JunoAICheatManager.JunoEnableRecruitedCreaturePermaDeath
	// void JunoEnableRecruitedCreaturePermaDeath(bool bEnable);                                                                // [0x8ab7ca0] Final|BlueprintAuthorityOnly|Exec|Native|Private 
	// Function /Script/JunoAIRuntime.JunoAICheatManager.JunoEnableHostileCreatures
	// void JunoEnableHostileCreatures(bool bEnable);                                                                           // [0x65ef434] Final|BlueprintAuthorityOnly|Exec|Native|Private 
	// Function /Script/JunoAIRuntime.JunoAICheatManager.JunoEnableFriendlyNPCs
	// void JunoEnableFriendlyNPCs(bool bEnable);                                                                               // [0x65ef434] Final|BlueprintAuthorityOnly|Exec|Native|Private 
	// Function /Script/JunoAIRuntime.JunoAICheatManager.JunoEnableFriendlyCreatures
	// void JunoEnableFriendlyCreatures(bool bEnable);                                                                          // [0x65ef434] Final|BlueprintAuthorityOnly|Exec|Native|Private 
};

/// Class /Script/JunoAIRuntime.PlayspaceComponent_JunoAISafetyBubble
/// Size: 0x0010 (0x0000F8 - 0x000108)
class UPlayspaceComponent_JunoAISafetyBubble : public UFortPlayspaceComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:
	CMember(class UClass*)                             SafetyBubbleComponent                                       OFFSET(get<T>, {0xF8, 8, 0, 0})
	DMember(bool)                                      bPreventSafetyBubbleInCamp                                  OFFSET(get<bool>, {0x100, 1, 0, 0})
};

/// Class /Script/JunoAIRuntime.AITask_JunoMoveTo
/// Size: 0x0018 (0x000118 - 0x000130)
class UAITask_JunoMoveTo : public UAITask_MoveTo
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	SMember(FJunoMoveConfig)                           MoveConfig                                                  OFFSET(getStruct<T>, {0x118, 12, 0, 0})
	CMember(TWeakObjectPtr<AActor*>)                   BlockedByActor                                              OFFSET(get<T>, {0x124, 8, 0, 0})
};

/// Class /Script/JunoAIRuntime.BTTask_JunoMoveTo
/// Size: 0x00B8 (0x0000C0 - 0x000178)
class UBTTask_JunoMoveTo : public UFortAthenaBTTask_MoveTo
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 376;

public:
	DMember(bool)                                      bOnUnreachableGoalFindBlockingBuilding                      OFFSET(get<bool>, {0xC0, 1, 1, 0})
	DMember(bool)                                      bAssignFoundBlockingBuildingAsTarget                        OFFSET(get<bool>, {0xC0, 1, 1, 1})
	SMember(FScalableFloat)                            BlockingBuildingTraceDistance                               OFFSET(getStruct<T>, {0xC8, 40, 0, 0})
	SMember(FScalableFloat)                            BlockingBuildingTraceCooldown                               OFFSET(getStruct<T>, {0xF0, 40, 0, 0})
	SMember(FBlackboardKeySelector)                    BlockedByBuildingKeySelector                                OFFSET(getStruct<T>, {0x118, 40, 0, 0})
	SMember(FBlackboardKeySelector)                    LastBlockingBuildingTraceTimeKeySelector                    OFFSET(getStruct<T>, {0x140, 40, 0, 0})
	CMember(TEnumAsByte<EPathObstacleAction>)          PathObstacleAction                                          OFFSET(get<T>, {0x168, 1, 0, 0})
	DMember(bool)                                      bApplyCostLimit                                             OFFSET(get<bool>, {0x16C, 1, 1, 0})
	DMember(float)                                     PathingCostLimitFactor                                      OFFSET(get<float>, {0x170, 4, 0, 0})
	DMember(float)                                     PathingMinimumCostLimit                                     OFFSET(get<float>, {0x174, 4, 0, 0})
};

/// Class /Script/JunoAIRuntime.JunoWorldCondition_AIWorldSettings_State
/// Size: 0x0028 (0x000028 - 0x000050)
class UJunoWorldCondition_AIWorldSettings_State : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Struct /Script/JunoAIRuntime.JunoNPCValidItemRow
/// Size: 0x0020 (0x000008 - 0x000028)
class FJunoNPCValidItemRow : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(class UFortItemDefinition*)                ValidItem                                                   OFFSET(get<T>, {0x8, 8, 0, 0})
	SMember(FString)                                   ValidItemPersistentName                                     OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	DMember(bool)                                      bCanBeEquippedAsMainWeapon                                  OFFSET(get<bool>, {0x20, 1, 0, 0})
};

/// Struct /Script/JunoAIRuntime.ValidItemSlotConfiguration
/// Size: 0x0010 (0x000000 - 0x000010)
class FValidItemSlotConfiguration : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class UDataTable*)                         ValidItemsTable                                             OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FGameplayTag)                              TagToApplyWhenMissingItem                                   OFFSET(getStruct<T>, {0x8, 4, 0, 0})
};

/// Struct /Script/JunoAIRuntime.JunoNPCValidItems
/// Size: 0x0070 (0x000000 - 0x000070)
class FJunoNPCValidItems : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	CMember(TArray<class UFortItemDefinition*>)        CachedListOfUnequippableWeapons                             OFFSET(get<T>, {0x50, 16, 0, 0})
};

/// Struct /Script/JunoAIRuntime.JunoAIFTUERuntimeConfiguration
/// Size: 0x0088 (0x000000 - 0x000088)
class FJunoAIFTUERuntimeConfiguration : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FScalableFloat)                            MaxDistanceFromCampToTeleport                               OFFSET(getStruct<T>, {0x0, 40, 0, 0})
	SMember(FScalableFloat)                            MinDistanceFromPlayersToTeleport                            OFFSET(getStruct<T>, {0x28, 40, 0, 0})
	SMember(FScalableFloat)                            TeleportToCampDelay                                         OFFSET(getStruct<T>, {0x50, 40, 0, 0})
	CMember(class UEnvQuery*)                          TeleportToPlayerQueryTemplate                               OFFSET(get<T>, {0x78, 8, 0, 0})
	CMember(TEnumAsByte<EEnvQueryRunMode>)             TeleportToPlayerRunMode                                     OFFSET(get<T>, {0x80, 1, 0, 0})
};

/// Struct /Script/JunoAIRuntime.JunoAIUnstuckFailsafeConfiguration
/// Size: 0x00E8 (0x000000 - 0x0000E8)
class FJunoAIUnstuckFailsafeConfiguration : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
	SMember(FScalableFloat)                            MinimumTimeUnderLandscape                                   OFFSET(getStruct<T>, {0x0, 40, 0, 0})
	SMember(FScalableFloat)                            MinZThresholdForLandscapeTeleport                           OFFSET(getStruct<T>, {0x28, 40, 0, 0})
	SMember(FScalableFloat)                            TeleportToLandscapeDelay                                    OFFSET(getStruct<T>, {0x50, 40, 0, 0})
	CMember(class UEnvQuery*)                          TeleportToLandscapeQueryTemplate                            OFFSET(get<T>, {0x78, 8, 0, 0})
	CMember(TEnumAsByte<EEnvQueryRunMode>)             TeleportToLandscapeRunMode                                  OFFSET(get<T>, {0x80, 1, 0, 0})
	SMember(FScalableFloat)                            MinimumTimeFalling                                          OFFSET(getStruct<T>, {0x88, 40, 0, 0})
	SMember(FScalableFloat)                            TeleportToNavmeshDelay                                      OFFSET(getStruct<T>, {0xB0, 40, 0, 0})
	CMember(class UEnvQuery*)                          TeleportToNavmeshQueryTemplate                              OFFSET(get<T>, {0xD8, 8, 0, 0})
	CMember(TEnumAsByte<EEnvQueryRunMode>)             TeleportToNavmeshRunMode                                    OFFSET(get<T>, {0xE0, 1, 0, 0})
};

/// Struct /Script/JunoAIRuntime.JunoAIFriendshipVerbTableRow
/// Size: 0x0078 (0x000008 - 0x000080)
class FJunoAIFriendshipVerbTableRow : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	DMember(float)                                     FriendshipChange                                            OFFSET(get<float>, {0x8, 4, 0, 0})
	CMember(TArray<FInstancedStruct>)                  VerbFilters                                                 OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(EJunoAIFriendshipVerbPawnSubjectRequirement) VerbSubjectsRequirement                                   OFFSET(get<T>, {0x20, 1, 0, 0})
	SMember(FGameplayTagQuery)                         ConditionalQuery                                            OFFSET(getStruct<T>, {0x28, 72, 0, 0})
	DMember(int32_t)                                   PawnCategories                                              OFFSET(get<int32_t>, {0x70, 4, 0, 0})
	DMember(float)                                     Cooldown                                                    OFFSET(get<float>, {0x74, 4, 0, 0})
	SMember(FMoodReactionDataExposedRequestConfig)     MoodReactionConfig                                          OFFSET(getStruct<T>, {0x78, 8, 0, 0})
};

/// Struct /Script/JunoAIRuntime.AIFriendshipContinuousChangeConfiguration
/// Size: 0x000C (0x000000 - 0x00000C)
class FAIFriendshipContinuousChangeConfiguration : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	SMember(FGameplayTag)                              Name                                                        OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(float)                                     ChangePerTick                                               OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(uint32_t)                                  TickFrequencyInSeconds                                      OFFSET(get<uint32_t>, {0x8, 4, 0, 0})
};

/// Struct /Script/JunoAIRuntime.AIFriendshipContinuousChangeRuntimeData
/// Size: 0x0010 (0x000000 - 0x000010)
class FAIFriendshipContinuousChangeRuntimeData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/JunoAIRuntime.RandomizedMoodReactionConfig
/// Size: 0x0030 (0x000000 - 0x000030)
class FRandomizedMoodReactionConfig : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FScalableFloat)                            Weight                                                      OFFSET(getStruct<T>, {0x0, 40, 0, 0})
	SMember(FGameplayTag)                              MoodReactionTag                                             OFFSET(getStruct<T>, {0x28, 4, 0, 0})
};

/// Struct /Script/JunoAIRuntime.JunoAICampManagementLWMConfiguration
/// Size: 0x03A0 (0x000000 - 0x0003A0)
class FJunoAICampManagementLWMConfiguration : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 928;

public:
	SMember(FFortAthenaLivingWorldEvent)               EventTemplate                                               OFFSET(getStruct<T>, {0x0, 432, 0, 0})
	SMember(FFortAthenaLivingWorldEventDataActorSpawnDescription) SpawnDescriptionTemplate                         OFFSET(getStruct<T>, {0x1B0, 304, 0, 0})
	SMember(FPointProviderFilterEntry)                 FilterEntry                                                 OFFSET(getStruct<T>, {0x2E0, 136, 0, 0})
	CMember(TWeakObjectPtr<UFortAthenaLivingWorldEncounter*>) Encounter                                            OFFSET(get<T>, {0x368, 32, 0, 0})
	CMember(TArray<class UClass*>)                     PointProviderClasses                                        OFFSET(get<T>, {0x388, 16, 0, 0})
	DMember(bool)                                      bRegisterReservoir                                          OFFSET(get<bool>, {0x398, 1, 0, 0})
};

/// Struct /Script/JunoAIRuntime.JunoAICampManagementVisitorsRarityConfiguration
/// Size: 0x0008 (0x000000 - 0x000008)
class FJunoAICampManagementVisitorsRarityConfiguration : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FGameplayTag)                              Rarity                                                      OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   PickPercentage                                              OFFSET(get<int32_t>, {0x4, 4, 0, 0})
};

/// Struct /Script/JunoAIRuntime.JunoAICampManagementVisitorsPickingConfiguration
/// Size: 0x0020 (0x000008 - 0x000028)
class FJunoAICampManagementVisitorsPickingConfiguration : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(TArray<FJunoAICampManagementVisitorsRarityConfiguration>) RaritiesConfiguration                        OFFSET(get<T>, {0x8, 16, 0, 0})
	DMember(int32_t)                                   MaxRecruitableNPCs                                          OFFSET(get<int32_t>, {0x18, 4, 0, 0})
	DMember(int32_t)                                   MaxRecruitableCreatures                                     OFFSET(get<int32_t>, {0x1C, 4, 0, 0})
	DMember(int32_t)                                   MaxRecruitableAIsSharedPool                                 OFFSET(get<int32_t>, {0x20, 4, 0, 0})
};

/// Struct /Script/JunoAIRuntime.JunoAICampManagementNPCRewardRecipe
/// Size: 0x0028 (0x000000 - 0x000028)
class FJunoAICampManagementNPCRewardRecipe : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(TWeakObjectPtr<UJunoBuildInstructionsItemDefinition*>) KnowledgeItemDefinition                         OFFSET(get<T>, {0x0, 32, 0, 0})
	CMember(EJunoKnowledgeState)                       NewState                                                    OFFSET(get<T>, {0x20, 1, 0, 0})
};

/// Struct /Script/JunoAIRuntime.JunoAICampManagementNPCReward
/// Size: 0x0048 (0x000008 - 0x000050)
class FJunoAICampManagementNPCReward : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	DMember(bool)                                      bAlwaysPick                                                 OFFSET(get<bool>, {0x8, 1, 0, 0})
	SMember(FGameplayTag)                              AlwaysPickBlockTag                                          OFFSET(getStruct<T>, {0xC, 4, 0, 0})
	DMember(float)                                     PickWeight                                                  OFFSET(get<float>, {0x10, 4, 0, 0})
	SMember(FWorldConditionQueryDefinition)            SelectionPreconditions                                      OFFSET(getStruct<T>, {0x18, 24, 0, 0})
	CMember(ENPCRewardType)                            RewardType                                                  OFFSET(get<T>, {0x30, 1, 0, 0})
	DMember(int32_t)                                   MaximumPickAmount                                           OFFSET(get<int32_t>, {0x34, 4, 0, 0})
	SMember(FName)                                     MaximumPickSaveName                                         OFFSET(getStruct<T>, {0x38, 4, 0, 0})
	SMember(FName)                                     LootTierGroup                                               OFFSET(getStruct<T>, {0x3C, 4, 0, 0})
	CMember(TArray<FJunoAICampManagementNPCRewardRecipe>) Recipes                                                  OFFSET(get<T>, {0x40, 16, 0, 0})
};

/// Struct /Script/JunoAIRuntime.JunoAICampManagementVisitorConfiguration
/// Size: 0x0020 (0x000008 - 0x000028)
class FJunoAICampManagementVisitorConfiguration : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FGameplayTag)                              UniqueAIIdentifier                                          OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	SMember(FWorldConditionQueryDefinition)            SelectionPreconditions                                      OFFSET(getStruct<T>, {0x10, 24, 0, 0})
};

/// Struct /Script/JunoAIRuntime.JunoAICampManagementVisitorConfigurationRuntime
/// Size: 0x0060 (0x000000 - 0x000060)
class FJunoAICampManagementVisitorConfigurationRuntime : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FWorldConditionQueryState)                 SelectionPreconditionsQueryState                            OFFSET(getStruct<T>, {0x30, 48, 0, 0})
};

/// Struct /Script/JunoAIRuntime.JunoAICampManagementVisitorsConfiguration
/// Size: 0x0030 (0x000000 - 0x000030)
class FJunoAICampManagementVisitorsConfiguration : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(class UDataTable*)                         PossibleVisitorsDataTable                                   OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FScalableFloat)                            InitialInGameHoursDelay                                     OFFSET(getStruct<T>, {0x8, 40, 0, 0})
};

/// Struct /Script/JunoAIRuntime.JunoAICampManagementFixedNPCsPickingConfiguration
/// Size: 0x0008 (0x000008 - 0x000010)
class FJunoAICampManagementFixedNPCsPickingConfiguration : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FGameplayTag)                              DescriptorTag                                               OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	SMember(FGameplayTag)                              PreselectedJob                                              OFFSET(getStruct<T>, {0xC, 4, 0, 0})
};

/// Struct /Script/JunoAIRuntime.JunoAICampManagementVisitorsConfigurationDigested
/// Size: 0x0018 (0x000000 - 0x000018)
class FJunoAICampManagementVisitorsConfigurationDigested : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(TArray<FJunoAICampManagementVisitorConfigurationRuntime>) PossibleVisitors                             OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/JunoAIRuntime.SpawnedCampCreatureRuntimeData
/// Size: 0x0018 (0x000000 - 0x000018)
class FSpawnedCampCreatureRuntimeData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(TWeakObjectPtr<AFortAIPawn*>)              CreaturePawn                                                OFFSET(get<T>, {0x10, 8, 0, 0})
};

/// Struct /Script/JunoAIRuntime.JunoCampAICachedRecruitmentData
/// Size: 0x0028 (0x000000 - 0x000028)
class FJunoCampAICachedRecruitmentData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(int32_t)                                   RecruitedNPCsFixedPool                                      OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   RecruitedNPCsSharedPool                                     OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   RecruitedCreaturesFixedPool                                 OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   RecruitedCreaturesSharedPool                                OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	DMember(int32_t)                                   FreeSlotsForNPCs                                            OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	DMember(int32_t)                                   GlobalRecruitableNPCsCap                                    OFFSET(get<int32_t>, {0x14, 4, 0, 0})
	DMember(bool)                                      bHasReachedGlobalNPCsCap                                    OFFSET(get<bool>, {0x18, 1, 0, 0})
	DMember(int32_t)                                   FreeSlotsForCreatures                                       OFFSET(get<int32_t>, {0x1C, 4, 0, 0})
	DMember(int32_t)                                   GlobalRecruitableCreaturesCap                               OFFSET(get<int32_t>, {0x20, 4, 0, 0})
	DMember(bool)                                      bHasReachedGlobalCreaturesCap                               OFFSET(get<bool>, {0x24, 1, 0, 0})
};

/// Struct /Script/JunoAIRuntime.FedItemHistoryEntry
/// Size: 0x000C (0x000000 - 0x00000C)
class FFedItemHistoryEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
};

/// Struct /Script/JunoAIRuntime.FortVerbMessage_CreaturePet
/// Size: 0x0038 (0x000078 - 0x0000B0)
class FFortVerbMessage_CreaturePet : public FVerbMessage
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FSubjectTagsPair)                          Creature                                                    OFFSET(getStruct<T>, {0x78, 56, 0, 0})
};

/// Struct /Script/JunoAIRuntime.JunoVerbFilter_CreaturePet
/// Size: 0x0050 (0x0000A0 - 0x0000F0)
class FJunoVerbFilter_CreaturePet : public FObjectiveFilter
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	SMember(FObjectiveSubjectTags_Progressible)        Creature                                                    OFFSET(getStruct<T>, {0xA0, 80, 0, 0})
};

/// Struct /Script/JunoAIRuntime.FortVerbMessage_CreatureFed
/// Size: 0x0070 (0x000078 - 0x0000E8)
class FFortVerbMessage_CreatureFed : public FVerbMessage
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
	SMember(FSubjectTagsPair)                          Creature                                                    OFFSET(getStruct<T>, {0x78, 56, 0, 0})
	SMember(FSubjectTagsPair)                          FedItem                                                     OFFSET(getStruct<T>, {0xB0, 56, 0, 0})
};

/// Struct /Script/JunoAIRuntime.JunoVerbFilter_CreatureFed
/// Size: 0x0098 (0x0000A0 - 0x000138)
class FJunoVerbFilter_CreatureFed : public FObjectiveFilter
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 312;

public:
	SMember(FObjectiveSubjectTags_Progressible)        Creature                                                    OFFSET(getStruct<T>, {0xA0, 80, 0, 0})
	SMember(FObjectiveSubjectTags)                     FedItem                                                     OFFSET(getStruct<T>, {0xF0, 72, 0, 0})
};

/// Struct /Script/JunoAIRuntime.JunoCreatureRecruitmentRequestData
/// Size: 0x0018 (0x000000 - 0x000018)
class FJunoCreatureRecruitmentRequestData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/JunoAIRuntime.JunoIsVillagerProviderExpiredStateTreeTaskInstanceData
/// Size: 0x0018 (0x000000 - 0x000018)
class FJunoIsVillagerProviderExpiredStateTreeTaskInstanceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(TWeakObjectPtr<AFortAthenaLivingWorldStaticPointProvider*>) VillagerProvider                           OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(bool)                                      bIsExpired                                                  OFFSET(get<bool>, {0x8, 1, 0, 0})
	CMember(class AActor*)                             UserActor                                                   OFFSET(get<T>, {0x10, 8, 0, 0})
};

/// Struct /Script/JunoAIRuntime.JunoIsVillagerProviderExpiredStateTreeTask
/// Size: 0x0000 (0x000020 - 0x000020)
class FJunoIsVillagerProviderExpiredStateTreeTask : public FStateTreeTaskCommonBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/JunoAIRuntime.JunoNPCVerbReactionTableRow
/// Size: 0x0008 (0x000078 - 0x000080)
class FJunoNPCVerbReactionTableRow : public FFortNPCVerbReactionTableRow
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FGameplayTag)                              MoodReactionTag                                             OFFSET(getStruct<T>, {0x78, 4, 0, 0})
};

/// Struct /Script/JunoAIRuntime.JunoResetVillagerProviderTimerStateTreeTaskInstanceData
/// Size: 0x0040 (0x000000 - 0x000040)
class FJunoResetVillagerProviderTimerStateTreeTaskInstanceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(TWeakObjectPtr<AFortAthenaLivingWorldStaticPointProvider*>) VillagerProvider                           OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(TWeakObjectPtr<AActor*>)                   Villager                                                    OFFSET(get<T>, {0x8, 8, 0, 0})
	SMember(FScalableFloat)                            ResetDuration                                               OFFSET(getStruct<T>, {0x10, 40, 0, 0})
	CMember(class AActor*)                             UserActor                                                   OFFSET(get<T>, {0x38, 8, 0, 0})
};

/// Struct /Script/JunoAIRuntime.JunoResetVillagerProviderTimerStateTreeTask
/// Size: 0x0000 (0x000020 - 0x000020)
class FJunoResetVillagerProviderTimerStateTreeTask : public FStateTreeTaskCommonBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/JunoAIRuntime.JunoWorldConditionAILocalCampChecks
/// Size: 0x0070 (0x000010 - 0x000080)
class FJunoWorldConditionAILocalCampChecks : public FWorldConditionCommonActorBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FWorldConditionContextDataRef)             ActorRef                                                    OFFSET(getStruct<T>, {0x10, 8, 0, 0})
	DMember(int32_t)                                   RequiredNPCsSlots                                           OFFSET(get<int32_t>, {0x18, 4, 0, 0})
	CMember(EJunoWorldConditionNPCSlotsLimit)          PotentialSlotCap                                            OFFSET(get<T>, {0x1C, 1, 0, 0})
	DMember(float)                                     MinimumRemainingNPCSoftRemovalTimeInJunoHours               OFFSET(get<float>, {0x20, 4, 0, 0})
	SMember(FGameplayTag)                              HasGatheringActorUsableByRole                               OFFSET(getStruct<T>, {0x24, 4, 0, 0})
	SMember(FWorldConditionContextDataRef)             HasGatheringActorUsableByActorRef                           OFFSET(getStruct<T>, {0x28, 8, 0, 0})
	DMember(bool)                                      bRequireGatheringActorToBeActive                            OFFSET(get<bool>, {0x30, 1, 0, 0})
	SMember(FGameplayTagQuery)                         RequireCreatureMatchingDescriptorTag                        OFFSET(getStruct<T>, {0x38, 72, 0, 0})
};

/// Struct /Script/JunoAIRuntime.JunoWorldConditionHitGlobalNPCsCap
/// Size: 0x0008 (0x000010 - 0x000018)
class FJunoWorldConditionHitGlobalNPCsCap : public FWorldConditionCommonBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(int32_t)                                   RequiredSpaceInGlobalCap                                    OFFSET(get<int32_t>, {0x10, 4, 0, 0})
};

/// Struct /Script/JunoAIRuntime.JunoWorldConditionNearestCampChecks
/// Size: 0x0080 (0x000010 - 0x000090)
class FJunoWorldConditionNearestCampChecks : public FWorldConditionCommonBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	DMember(int32_t)                                   RequiredCamps                                               OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	SMember(FGameplayTagQuery)                         RequiresCampTagQuery                                        OFFSET(getStruct<T>, {0x18, 72, 0, 0})
	SMember(FScalableFloat)                            MaxDistanceFromCamp                                         OFFSET(getStruct<T>, {0x60, 40, 0, 0})
	SMember(FWorldConditionContextDataRef)             ActorRef                                                    OFFSET(getStruct<T>, {0x88, 8, 0, 0})
};

/// Struct /Script/JunoAIRuntime.JunoWorldConditionNPCCampReward
/// Size: 0x0010 (0x000010 - 0x000020)
class FJunoWorldConditionNPCCampReward : public FWorldConditionCommonActorBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FWorldConditionContextDataRef)             AIRef                                                       OFFSET(getStruct<T>, {0x10, 8, 0, 0})
	SMember(FWorldConditionContextDataRef)             InstigatorRef                                               OFFSET(getStruct<T>, {0x18, 8, 0, 0})
};

/// Struct /Script/JunoAIRuntime.JunoWorldCondition_IsInTemporaryGlobalEncounter
/// Size: 0x0008 (0x000010 - 0x000018)
class FJunoWorldCondition_IsInTemporaryGlobalEncounter : public FWorldConditionCommonBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FGameplayTag)                              NPCGameplayTag                                              OFFSET(getStruct<T>, {0x10, 4, 0, 0})
};

/// Struct /Script/JunoAIRuntime.JunoAIBannedDescriptorTagRow
/// Size: 0x0008 (0x000008 - 0x000010)
class FJunoAIBannedDescriptorTagRow : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FGameplayTag)                              DescriptorTag                                               OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	DMember(bool)                                      bDisableAsVisitor                                           OFFSET(get<bool>, {0xC, 1, 0, 0})
	DMember(bool)                                      bDisableAsCampRecruit                                       OFFSET(get<bool>, {0xD, 1, 0, 0})
	DMember(bool)                                      bDisableAsAFollower                                         OFFSET(get<bool>, {0xE, 1, 0, 0})
};

/// Struct /Script/JunoAIRuntime.JunoAIGlobalLWMConfiguration
/// Size: 0x0390 (0x000000 - 0x000390)
class FJunoAIGlobalLWMConfiguration : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 912;

public:
	SMember(FFortAthenaLivingWorldEvent)               EventTemplate                                               OFFSET(getStruct<T>, {0x0, 432, 0, 0})
	SMember(FFortAthenaLivingWorldEventDataActorSpawnDescription) SpawnDescriptionTemplate                         OFFSET(getStruct<T>, {0x1B0, 304, 0, 0})
	SMember(FPointProviderFilterEntry)                 FilterEntry                                                 OFFSET(getStruct<T>, {0x2E0, 136, 0, 0})
	CMember(TWeakObjectPtr<UFortAthenaLivingWorldEncounter*>) Encounter                                            OFFSET(get<T>, {0x368, 32, 0, 0})
	DMember(bool)                                      bRegisterReservoir                                          OFFSET(get<bool>, {0x388, 1, 0, 0})
};

/// Struct /Script/JunoAIRuntime.JunoAISinglePointProviderEncounterLWMConfiguration
/// Size: 0x0008 (0x000390 - 0x000398)
class FJunoAISinglePointProviderEncounterLWMConfiguration : public FJunoAIGlobalLWMConfiguration
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 920;

public:
	CMember(class UClass*)                             PointProviderClass                                          OFFSET(get<T>, {0x390, 8, 0, 0})
};

/// Struct /Script/JunoAIRuntime.JunoAITemporaryGlobalEncounterLWMConfiguration
/// Size: 0x0000 (0x000398 - 0x000398)
class FJunoAITemporaryGlobalEncounterLWMConfiguration : public FJunoAISinglePointProviderEncounterLWMConfiguration
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 920;

public:
};

/// Struct /Script/JunoAIRuntime.JunoAIFTUEConfiguration
/// Size: 0x0130 (0x000398 - 0x0004C8)
class FJunoAIFTUEConfiguration : public FJunoAISinglePointProviderEncounterLWMConfiguration
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1224;

public:
	SMember(FGameplayTagQuery)                         PossibleFTUEDescriptorTagQuery                              OFFSET(getStruct<T>, {0x398, 72, 0, 0})
	CMember(TArray<class UClass*>)                     GEsToAddToFTUENPC                                           OFFSET(get<T>, {0x3E0, 16, 0, 0})
	SMember(FScalableFloat)                            InitialChecksDelay                                          OFFSET(getStruct<T>, {0x3F0, 40, 0, 0})
	SMember(FWorldConditionQueryDefinition)            StartConditions                                             OFFSET(getStruct<T>, {0x418, 24, 0, 0})
	SMember(FWorldConditionQueryDefinition)            EndConditions                                               OFFSET(getStruct<T>, {0x430, 24, 0, 0})
	SMember(FScalableFloat)                            CustomLeashInnerRadius                                      OFFSET(getStruct<T>, {0x448, 40, 0, 0})
	SMember(FScalableFloat)                            CustomLeashOuterRadius                                      OFFSET(getStruct<T>, {0x470, 40, 0, 0})
	SMember(FScalableFloat)                            SpawnDelay                                                  OFFSET(getStruct<T>, {0x498, 40, 0, 0})
	DMember(bool)                                      bUseFirstSpawnLocationForever                               OFFSET(get<bool>, {0x4C0, 1, 0, 0})
	DMember(bool)                                      bInstantDespawnOnEnd                                        OFFSET(get<bool>, {0x4C1, 1, 0, 0})
};

/// Struct /Script/JunoAIRuntime.JunoAIFollowerLWMConfiguration
/// Size: 0x0010 (0x000390 - 0x0003A0)
class FJunoAIFollowerLWMConfiguration : public FJunoAIGlobalLWMConfiguration
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 928;

public:
	CMember(TArray<class UClass*>)                     PointProviderClasses                                        OFFSET(get<T>, {0x390, 16, 0, 0})
};

/// Struct /Script/JunoAIRuntime.JunoAIFollowerManagedData
/// Size: 0x0098 (0x000000 - 0x000098)
class FJunoAIFollowerManagedData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	SMember(FUniqueNetIdRepl)                          PlayerId                                                    OFFSET(getStruct<T>, {0x0, 48, 0, 0})
	CMember(class UFortAthenaLivingWorldEncounterInstance*) Encounter                                              OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(TArray<TScriptInterface<Class>>)           PointProviders                                              OFFSET(get<T>, {0x38, 16, 0, 0})
};

/// Struct /Script/JunoAIRuntime.JunoAIWorldNPCSpawningData
/// Size: 0x0028 (0x000000 - 0x000028)
class FJunoAIWorldNPCSpawningData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(TWeakObjectPtr<UObject*>)                  AssignedPointProvider                                       OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(TWeakObjectPtr<UFortAthenaLivingWorldEventData*>) EventData                                            OFFSET(get<T>, {0x18, 8, 0, 0})
};

/// Struct /Script/JunoAIRuntime.FTUERuntimeData
/// Size: 0x0090 (0x000000 - 0x000090)
class FFTUERuntimeData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	CMember(TScriptInterface<Class>)                   EncounterPointProvider                                      OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(class UFortAthenaLivingWorldEncounterInstance*) Encounter                                              OFFSET(get<T>, {0x18, 8, 0, 0})
	SMember(FWorldConditionQueryState)                 StartQueryState                                             OFFSET(getStruct<T>, {0x20, 48, 0, 0})
	SMember(FWorldConditionQueryState)                 EndQueryState                                               OFFSET(getStruct<T>, {0x50, 48, 0, 0})
};

/// Struct /Script/JunoAIRuntime.JunoUniqueNPCLivingWorldPointProviderSelector
/// Size: 0x0070 (0x000008 - 0x000078)
class FJunoUniqueNPCLivingWorldPointProviderSelector : public FFortAthenaLivingWorldPointProviderSelector
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	SMember(FGameplayTag)                              NPCGameplayTag                                              OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	SMember(FScalableFloat)                            InitialPersistenceDuration                                  OFFSET(getStruct<T>, {0x10, 40, 0, 0})
	SMember(FScalableFloat)                            RespawnPersistenceDuration                                  OFFSET(getStruct<T>, {0x38, 40, 0, 0})
	CMember(TWeakObjectPtr<UFortAthenaLivingWorldEventData*>) EventData                                            OFFSET(get<T>, {0x60, 8, 0, 0})
	CMember(TWeakObjectPtr<UPlayspaceComponent_Root_JunoAIManagement*>) CachedRootJunoAIManagement                 OFFSET(get<T>, {0x68, 8, 0, 0})
};

/// Struct /Script/JunoAIRuntime.JunoVillagerSpawnerDataSelector
/// Size: 0x0098 (0x000008 - 0x0000A0)
class FJunoVillagerSpawnerDataSelector : public FFortAthenaLivingWorldSpawnerDataSelector
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	CMember(TWeakObjectPtr<UPlayspaceComponent_JunoAIPersistence*>) CachedRootAIPersistence                        OFFSET(get<T>, {0x8, 8, 0, 0})
	SMember(FGameplayTagQuery)                         SpawnerDataToFilter                                         OFFSET(getStruct<T>, {0x10, 72, 0, 0})
	SMember(FGameplayTagQuery)                         RoleMustMatchQuery                                          OFFSET(getStruct<T>, {0x58, 72, 0, 0})
};

/// Struct /Script/JunoAIRuntime.JunoMoveConfig
/// Size: 0x000C (0x000000 - 0x00000C)
class FJunoMoveConfig : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
};

/// Struct /Script/JunoAIRuntime.JunoWorldCondition_AIWorldSettings
/// Size: 0x0010 (0x000010 - 0x000020)
class FJunoWorldCondition_AIWorldSettings : public FWorldConditionCommonBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(EJunoWorldCondition_AIWorldSettingsExpectedValue) FriendlyCreatures                                    OFFSET(get<T>, {0x10, 4, 0, 0})
	CMember(EJunoWorldCondition_AIWorldSettingsExpectedValue) HostileCreatures                                     OFFSET(get<T>, {0x14, 4, 0, 0})
	CMember(EJunoWorldCondition_AIWorldSettingsExpectedValue) FriendlyNPCs                                         OFFSET(get<T>, {0x18, 4, 0, 0})
};

/// Enum /Script/JunoAIRuntime.EJunoAIFriendshipVerbPawnCategory
/// Size: 0x03
enum class EJunoAIFriendshipVerbPawnCategory : uint8_t
{
	EJunoAIFriendshipVerbPawnCategory__None                                          = 0,
	EJunoAIFriendshipVerbPawnCategory__Self                                          = 1,
	EJunoAIFriendshipVerbPawnCategory__Players                                       = 2
};

/// Enum /Script/JunoAIRuntime.EJunoAIFriendshipVerbPawnSubjectRequirement
/// Size: 0x03
enum class EJunoAIFriendshipVerbPawnSubjectRequirement : uint8_t
{
	EJunoAIFriendshipVerbPawnSubjectRequirement__None                                = 0,
	EJunoAIFriendshipVerbPawnSubjectRequirement__NoSelf                              = 1,
	EJunoAIFriendshipVerbPawnSubjectRequirement__RequireSelf                         = 2
};

/// Enum /Script/JunoAIRuntime.EJunoNPCJobEndReason
/// Size: 0x03
enum class EJunoNPCJobEndReason : uint8_t
{
	EJunoNPCJobEndReason__ManualPlayerUnassignment                                   = 0,
	EJunoNPCJobEndReason__AutoUnassigmentViaFollowerAssignment                       = 1,
	EJunoNPCJobEndReason__AutoUnassignmentViaCampHardRemoval                         = 2
};

/// Enum /Script/JunoAIRuntime.EJunoNPCFollowEndReason
/// Size: 0x03
enum class EJunoNPCFollowEndReason : uint8_t
{
	EJunoNPCFollowEndReason__ManualPlayerUnassignment                                = 0,
	EJunoNPCFollowEndReason__AutoUnassigmentViaRecruitment                           = 1,
	EJunoNPCFollowEndReason__AutoUnassignmentDueToStaleFollower                      = 2
};

/// Enum /Script/JunoAIRuntime.ENPCRewardType
/// Size: 0x02
enum class ENPCRewardType : uint8_t
{
	ENPCRewardType__LootTier                                                         = 0,
	ENPCRewardType__Recipe                                                           = 1
};

/// Enum /Script/JunoAIRuntime.EJunoWorldConditionNPCSlotsLimit
/// Size: 0x03
enum class EJunoWorldConditionNPCSlotsLimit : uint8_t
{
	EJunoWorldConditionNPCSlotsLimit__Unset                                          = 0,
	EJunoWorldConditionNPCSlotsLimit__ReachedMaxCap                                  = 1,
	EJunoWorldConditionNPCSlotsLimit__CanIncrease                                    = 2
};

/// Enum /Script/JunoAIRuntime.EJunoWorldCondition_AIWorldSettingsExpectedValue
/// Size: 0x03
enum class EJunoWorldCondition_AIWorldSettingsExpectedValue : uint32_t
{
	EJunoWorldCondition_AIWorldSettingsExpectedValue__Any                            = 0,
	EJunoWorldCondition_AIWorldSettingsExpectedValue__On                             = 1,
	EJunoWorldCondition_AIWorldSettingsExpectedValue__Off                            = 2
};

