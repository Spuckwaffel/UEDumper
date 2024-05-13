
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: AIModule
/// dependency: ContextualAnimation
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteAI
/// dependency: FortniteGame
/// dependency: GameFeatures
/// dependency: GameplayAbilities
/// dependency: GameplayInteractionsModule
/// dependency: GameplayStateTreeModule
/// dependency: GameplayTags
/// dependency: ModularGameplay
/// dependency: SmartObjectsModule
/// dependency: StateTreeModule
/// dependency: WorldConditions

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_ApproachNearbyPawns
/// Size: 0x0130 (0x0001A0 - 0x0002D0)
class UFortAthenaAIBotEvaluator_ApproachNearbyPawns : public UFortAthenaAIBotEvaluator_Movement
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 720;

public:
	SMember(FScalableFloat)                            MaxApproaches                                               OFFSET(getStruct<T>, {0x1C0, 40, 0, 0})
	SMember(FFortNearbyActorsPerceptionConfiguration)  PerceptionConfiguration                                     OFFSET(getStruct<T>, {0x1F0, 208, 0, 0})
	SMember(FName)                                     EnableKeyName                                               OFFSET(getStruct<T>, {0x2C0, 4, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_Harvest
/// Size: 0x0170 (0x0001A0 - 0x000310)
class UFortAthenaAIBotEvaluator_Harvest : public UFortAthenaAIBotEvaluator_Movement
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 784;

public:
	CMember(class UClass*)                             ProjectionNavigationQueryFilterClass                        OFFSET(get<T>, {0x1E8, 8, 0, 0})
	CMember(class UClass*)                             ValidNavigationQueryFilterClassOverride                     OFFSET(get<T>, {0x1F0, 8, 0, 0})
	SMember(FScalableFloat)                            MaximumTimeToHelpFromLastPlayerDamage                       OFFSET(getStruct<T>, {0x1F8, 40, 0, 0})
	SMember(FScalableFloat)                            KeepTargetTimeOnWeaponTrigger                               OFFSET(getStruct<T>, {0x220, 40, 0, 0})
	SMember(FScalableFloat)                            AmountOfTimesPlayerBuiltStructuresNeedToBeDamaged           OFFSET(getStruct<T>, {0x248, 40, 0, 0})
	SMember(FScalableFloat)                            TimeToTrackDamagedActors                                    OFFSET(getStruct<T>, {0x270, 40, 0, 0})
	SMember(FScalableFloat)                            MaxDistanceFromActorForFallbackNoHarvestBehaviour           OFFSET(getStruct<T>, {0x298, 40, 0, 0})
	CMember(TArray<class UClass*>)                     GEsToApplyOnFallbackBehaviorTrigger                         OFFSET(get<T>, {0x2C0, 16, 0, 0})
	CMember(TArray<class UClass*>)                     GEsToApplyOnCannotDamageBehaviorTrigger                     OFFSET(get<T>, {0x2D0, 16, 0, 0})
	SMember(FName)                                     HarvestTargetKeyName                                        OFFSET(getStruct<T>, {0x2E0, 4, 0, 0})
	SMember(FName)                                     HarvestTargetHitPointKeyName                                OFFSET(getStruct<T>, {0x2E8, 4, 0, 0})
	SMember(FName)                                     HarvestDestinationKeyName                                   OFFSET(getStruct<T>, {0x2F0, 4, 0, 0})
	SMember(FName)                                     FallbackBehaviorKeyName                                     OFFSET(getStruct<T>, {0x2F8, 4, 0, 0})
	SMember(FName)                                     CannotDamageKeyName                                         OFFSET(getStruct<T>, {0x300, 4, 0, 0})
	SMember(FName)                                     WeaponTriggerMeleeKeyName                                   OFFSET(getStruct<T>, {0x308, 4, 0, 0})


	/// Functions
	// Function /Script/FortniteAIServer.FortAthenaAIBotEvaluator_Harvest.HandleUnconverted
	// void HandleUnconverted(class AFortPawn* UnconvertedPawn, EUnconvertReason UnconvertReason);                              // [0xa728174] Final|Native|Protected 
	// Function /Script/FortniteAIServer.FortAthenaAIBotEvaluator_Harvest.HandleConverted
	// void HandleConverted(class AFortPawn* InstigatorPawn, class AFortPawn* ConvertedPawn);                                   // [0xa7280b4] Final|Native|Protected 
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_MoveAway
/// Size: 0x0108 (0x0001A0 - 0x0002A8)
class UFortAthenaAIBotEvaluator_MoveAway : public UFortAthenaAIBotEvaluator_Movement
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 680;

public:
	SMember(FScalableFloat)                            MaxSecondsToReactToBump                                     OFFSET(getStruct<T>, {0x210, 40, 0, 0})
	SMember(FScalableFloat)                            MaxSecondsToReactToBox                                      OFFSET(getStruct<T>, {0x238, 40, 0, 0})
	SMember(FScalableFloat)                            MinSecondsBetweenInstantReactions                           OFFSET(getStruct<T>, {0x260, 40, 0, 0})
	CMember(class UEnvQuery*)                          FindAwayLocationFromPawnQueryTemplate                       OFFSET(get<T>, {0x288, 8, 0, 0})
	CMember(TEnumAsByte<EEnvQueryRunMode>)             FindAwayLocationFromPawnRunMode                             OFFSET(get<T>, {0x290, 1, 0, 0})
	CMember(class UEnvQuery*)                          FindAwayLocationFromBoxQueryTemplate                        OFFSET(get<T>, {0x298, 8, 0, 0})
	CMember(TEnumAsByte<EEnvQueryRunMode>)             FindAwayLocationFromBoxRunMode                              OFFSET(get<T>, {0x2A0, 1, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_SmartObjectCommand
/// Size: 0x00A0 (0x0001A0 - 0x000240)
class UFortAthenaAIBotEvaluator_SmartObjectCommand : public UFortAthenaAIBotEvaluator_Movement
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 576;

public:
	CMember(class UFortAthenaAIRuntimeParameters_SmartObjectBase*) SmartObjectRuntimeParameters                    OFFSET(get<T>, {0x1A0, 8, 0, 0})
	CMember(class USmartObjectSubsystem*)              SmartObjectSubsystem                                        OFFSET(get<T>, {0x1A8, 8, 0, 0})
	SMember(FFortAIActiveCommandSOUsageData)           RunningCommandData                                          OFFSET(getStruct<T>, {0x1B8, 16, 0, 0})
	SMember(FBotEvaluatorCommandCooldown)              CommandOnCooldown                                           OFFSET(getStruct<T>, {0x1C8, 24, 0, 0})
	SMember(FGameplayTag)                              EvaluationTag                                               OFFSET(getStruct<T>, {0x1E0, 4, 0, 0})
	DMember(bool)                                      bEvaluateSOValidityAfterChosen                              OFFSET(get<bool>, {0x1E4, 1, 0, 0})
	DMember(bool)                                      bEnableEntryLocationsSupport                                OFFSET(get<bool>, {0x1E5, 1, 0, 0})
	SMember(FScalableFloat)                            SingleCommandCooldown                                       OFFSET(getStruct<T>, {0x1E8, 40, 0, 0})
	CMember(class UClass*)                             OverridenFilterClassForEntryPoints                          OFFSET(get<T>, {0x210, 8, 0, 0})
	SMember(FName)                                     SmartObjectExecutionStatusKeyName                           OFFSET(getStruct<T>, {0x218, 4, 0, 0})
	SMember(FName)                                     SmartObjectMovementStateKeyName                             OFFSET(getStruct<T>, {0x21C, 4, 0, 0})
	SMember(FName)                                     SmartObjectDestinationKeyName                               OFFSET(getStruct<T>, {0x220, 4, 0, 0})
	SMember(FName)                                     SmartObjectDestinationRotationKeyName                       OFFSET(getStruct<T>, {0x224, 4, 0, 0})
	SMember(FName)                                     SmartObjectShouldMoveKeyName                                OFFSET(getStruct<T>, {0x228, 4, 0, 0})
	SMember(FName)                                     SmartObjectUrgencyKeyName                                   OFFSET(getStruct<T>, {0x22C, 4, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_SmartObjectConverted
/// Size: 0x0058 (0x0001A0 - 0x0001F8)
class UFortAthenaAIBotEvaluator_SmartObjectConverted : public UFortAthenaAIBotEvaluator_Movement
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 504;

public:
	CMember(class UFortAthenaAIRuntimeParameters_SmartObjectBase*) SmartObjectRuntimeParameters                    OFFSET(get<T>, {0x1A0, 8, 0, 0})
	CMember(class USmartObjectSubsystem*)              SmartObjectSubsystem                                        OFFSET(get<T>, {0x1A8, 8, 0, 0})
	SMember(FBotEvaluatorSmartObjectConvertedData)     RunningData                                                 OFFSET(getStruct<T>, {0x1B8, 8, 0, 0})
	SMember(FGameplayTag)                              EvaluationTag                                               OFFSET(getStruct<T>, {0x1C0, 4, 0, 0})
	DMember(bool)                                      bEvaluateSOValidityAfterChosen                              OFFSET(get<bool>, {0x1C4, 1, 0, 0})
	DMember(bool)                                      bEnableEntryLocationsSupport                                OFFSET(get<bool>, {0x1C5, 1, 0, 0})
	DMember(bool)                                      bIgnoreCooldowns                                            OFFSET(get<bool>, {0x1C6, 1, 0, 0})
	CMember(class UClass*)                             OverridenFilterClassForEntryPoints                          OFFSET(get<T>, {0x1C8, 8, 0, 0})
	SMember(FName)                                     SmartObjectExecutionStatusKeyName                           OFFSET(getStruct<T>, {0x1D0, 4, 0, 0})
	SMember(FName)                                     SmartObjectMovementStateKeyName                             OFFSET(getStruct<T>, {0x1D4, 4, 0, 0})
	SMember(FName)                                     SmartObjectDestinationKeyName                               OFFSET(getStruct<T>, {0x1D8, 4, 0, 0})
	SMember(FName)                                     SmartObjectDestinationRotationKeyName                       OFFSET(getStruct<T>, {0x1DC, 4, 0, 0})
	SMember(FName)                                     SmartObjectShouldMoveKeyName                                OFFSET(getStruct<T>, {0x1E0, 4, 0, 0})
	SMember(FName)                                     SmartObjectUrgencyKeyName                                   OFFSET(getStruct<T>, {0x1E4, 4, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_TargetContext
/// Size: 0x0078 (0x0000A8 - 0x000120)
class UFortAthenaAIBotEvaluator_TargetContext : public UFortAthenaAIBotEvaluator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	SMember(FGameplayTagQuery)                         TokenPositionTagQuery                                       OFFSET(getStruct<T>, {0xA8, 72, 0, 0})
	SMember(FName)                                     TargetContextReachableKeyName                               OFFSET(getStruct<T>, {0xF0, 4, 0, 0})
	SMember(FName)                                     TargetContextInsideLeashKeyName                             OFFSET(getStruct<T>, {0xF4, 4, 0, 0})
	SMember(FName)                                     TargetActorName                                             OFFSET(getStruct<T>, {0xF8, 4, 0, 0})
	CMember(class UFortAICombatTokenConsumerComponent*) CachedTokenConsumerComponent                               OFFSET(get<T>, {0x100, 8, 0, 0})
	DMember(float)                                     HorizontalProjectionForReachability                         OFFSET(get<float>, {0x108, 4, 0, 0})
	DMember(float)                                     VerticalProjectionForReachability                           OFFSET(get<float>, {0x10C, 4, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_TokenPosition
/// Size: 0x00A0 (0x000188 - 0x000228)
class UFortAthenaAIBotEvaluator_TokenPosition : public UFortAthenaAIEvaluator_Movement
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 552;

public:
	CMember(TArray<FPositioningEQS>)                   EQSs                                                        OFFSET(get<T>, {0x198, 16, 0, 0})
	DMember(float)                                     TokenPositionCooldown                                       OFFSET(get<float>, {0x1A8, 4, 0, 0})
	DMember(float)                                     TokenPositionCooldownVariation                              OFFSET(get<float>, {0x1AC, 4, 0, 0})
	SMember(FFortBehaviorValue_Float)                  NewTokenPositionCooldown                                    OFFSET(getStruct<T>, {0x1B0, 12, 0, 0})
	SMember(FFortBehaviorValue_Float)                  NewTokenPositionCooldownVariation                           OFFSET(getStruct<T>, {0x1BC, 12, 0, 0})
	SMember(FFortBehaviorValue_Bool)                   CanAcquirePositionInEnter                                   OFFSET(getStruct<T>, {0x1C8, 12, 0, 0})
	CMember(class UFortAICombatTokenConsumerComponent*) CachedTokenConsumerComponent                               OFFSET(get<T>, {0x208, 8, 0, 0})
	CMember(TWeakObjectPtr<UFortAICombatTokenProviderComponent*>) CachedTokenProviderComponent                     OFFSET(get<T>, {0x210, 8, 0, 0})
	DMember(int32_t)                                   RunningEQSRequestID                                         OFFSET(get<int32_t>, {0x218, 4, 0, 0})
	DMember(bool)                                      bPositionRequested                                          OFFSET(get<bool>, {0x21C, 1, 0, 0})
	DMember(bool)                                      bPositionAcquiredInEnter                                    OFFSET(get<bool>, {0x21D, 1, 0, 0})
	SMember(FName)                                     WeaponKeyName                                               OFFSET(getStruct<T>, {0x220, 4, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaAIEvaluator_AbovePhysicsObject
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UFortAthenaAIEvaluator_AbovePhysicsObject : public UFortAthenaAIEvaluator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
};

/// Class /Script/FortniteAIServer.FortAthenaBTService_MovementStyle
/// Size: 0x00B0 (0x000070 - 0x000120)
class UFortAthenaBTService_MovementStyle : public UBTService
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	CMember(TEnumAsByte<EFortMovementStyle>)           MovementStyle                                               OFFSET(get<T>, {0x70, 1, 0, 0})
	SMember(FFortBehaviorValue_Enum)                   NewMovementStyle                                            OFFSET(getStruct<T>, {0x78, 24, 0, 0})
	SMember(FGameplayTagQuery)                         TagCondition                                                OFFSET(getStruct<T>, {0x90, 72, 0, 0})
	SMember(FBlackboardKeySelector)                    BlackboardCondition                                         OFFSET(getStruct<T>, {0xD8, 40, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaBTService_TokenQuery
/// Size: 0x0068 (0x000070 - 0x0000D8)
class UFortAthenaBTService_TokenQuery : public UBTService
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	CMember(TArray<FEquippedItemTagAssociationData>)   EquippedItemTagAssociationDatas                             OFFSET(get<T>, {0x70, 16, 0, 0})
	SMember(FGameplayTagQuery)                         DefaultTokenSystemTagQuery                                  OFFSET(getStruct<T>, {0x80, 72, 0, 0})
	SMember(FName)                                     WeaponKeyName                                               OFFSET(getStruct<T>, {0xC8, 4, 0, 0})
	SMember(FName)                                     TargetActorName                                             OFFSET(getStruct<T>, {0xCC, 4, 0, 0})
};

/// Class /Script/FortniteAIServer.FortBTWorldConditionSchema
/// Size: 0x0010 (0x000038 - 0x000048)
class UFortBTWorldConditionSchema : public UWorldConditionSchema
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Class /Script/FortniteAIServer.FortAthenaBTService_WorldCondition
/// Size: 0x0068 (0x000070 - 0x0000D8)
class UFortAthenaBTService_WorldCondition : public UBTService
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	SMember(FWorldConditionQueryDefinition)            Conditions                                                  OFFSET(getStruct<T>, {0x70, 24, 0, 0})
	SMember(FName)                                     ConditionsResultName                                        OFFSET(getStruct<T>, {0x88, 4, 0, 0})
	SMember(FWorldConditionQueryState)                 QueryState                                                  OFFSET(getStruct<T>, {0x90, 48, 0, 0})
	CMember(class AAIController*)                      CachedOwnerController                                       OFFSET(get<T>, {0xC0, 8, 0, 0})
	CMember(class AActor*)                             CachedOwnerPawn                                             OFFSET(get<T>, {0xC8, 8, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaBTTask_Harvest
/// Size: 0x0050 (0x000070 - 0x0000C0)
class UFortAthenaBTTask_Harvest : public UBTTaskNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	SMember(FName)                                     HarvestExecutionStatusKeyName                               OFFSET(getStruct<T>, {0x70, 4, 0, 0})
	SMember(FName)                                     HarvestTargetKeyName                                        OFFSET(getStruct<T>, {0x78, 4, 0, 0})
	SMember(FName)                                     HarvestTargetHitPointKeyName                                OFFSET(getStruct<T>, {0x80, 4, 0, 0})
	SMember(FName)                                     HarvestDestinationKeyName                                   OFFSET(getStruct<T>, {0x88, 4, 0, 0})
	SMember(FName)                                     WeaponTriggerMeleeKeyName                                   OFFSET(getStruct<T>, {0x90, 4, 0, 0})
	SMember(FScalableFloat)                            MeleeSwingDelay                                             OFFSET(getStruct<T>, {0x98, 40, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaBTTask_ReactToVerb
/// Size: 0x0010 (0x000070 - 0x000080)
class UFortAthenaBTTask_ReactToVerb : public UBTTaskNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FName)                                     ReactToVerbExecutionStatusKeyName                           OFFSET(getStruct<T>, {0x70, 4, 0, 0})
	SMember(FName)                                     GameplayEffectReactionKeyName                               OFFSET(getStruct<T>, {0x78, 4, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaBTTask_VehicleSwitchSeat
/// Size: 0x0008 (0x000070 - 0x000078)
class UFortAthenaBTTask_VehicleSwitchSeat : public UBTTaskNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	CMember(TEnumAsByte<SwitchSeatType>)               SwitchSeatType                                              OFFSET(get<T>, {0x70, 1, 0, 0})
};

/// Class /Script/FortniteAIServer.FortStateTreeConditionSchema
/// Size: 0x0018 (0x000038 - 0x000050)
class UFortStateTreeConditionSchema : public UWorldConditionSchema
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Class /Script/FortniteAIServer.FortBTDecorator_AIBotVehicleSeatStatus
/// Size: 0x0008 (0x000068 - 0x000070)
class UFortBTDecorator_AIBotVehicleSeatStatus : public UBTDecorator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	CMember(TEnumAsByte<SeatStatusType>)               SeatType                                                    OFFSET(get<T>, {0x68, 1, 0, 0})
};

/// Class /Script/FortniteAIServer.FortBTService_AIEvaluatorsInjector
/// Size: 0x0018 (0x000070 - 0x000088)
class UFortBTService_AIEvaluatorsInjector : public UBTService
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	CMember(TArray<FFortBTService_InjectionTagKey>)    InjectionTagsKeys                                           OFFSET(get<T>, {0x70, 16, 0, 0})
	SMember(FName)                                     InjectionItemKeyName                                        OFFSET(getStruct<T>, {0x80, 4, 0, 0})
};

/// Class /Script/FortniteAIServer.FortBTService_ClearGoalAndAssignment
/// Size: 0x0000 (0x000070 - 0x000070)
class UFortBTService_ClearGoalAndAssignment : public UBTService
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /Script/FortniteAIServer.FortGameFeatureAction_AddInjectionSupportingBehavior
/// Size: 0x0010 (0x000038 - 0x000048)
class UFortGameFeatureAction_AddInjectionSupportingBehavior : public UFortGameInstanceGameFeatureAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(TArray<TWeakObjectPtr<UBehaviorTree*>>)    InjectionSupportingBehaviors                                OFFSET(get<T>, {0x38, 16, 0, 0})
};

/// Class /Script/FortniteAIServer.FortGameFeatureAction_InjectAIBehavior
/// Size: 0x0010 (0x000038 - 0x000048)
class UFortGameFeatureAction_InjectAIBehavior : public UFortGameInstanceGameFeatureAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(TArray<FFortAISpawnerTagQueryInjectedBehavior>) InjectedBehaviors                                      OFFSET(get<T>, {0x38, 16, 0, 0})
};

/// Class /Script/FortniteAIServer.FortInjectedBehaviorsComponent
/// Size: 0x0050 (0x0000A0 - 0x0000F0)
class UFortInjectedBehaviorsComponent : public UFortGameStateComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
};

/// Class /Script/FortniteAIServer.FortQueryContext_NearbyFactionMembers
/// Size: 0x0028 (0x000028 - 0x000050)
class UFortQueryContext_NearbyFactionMembers : public UEnvQueryContext
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FScalableFloat)                            NearbyFactionMemberDistance                                 OFFSET(getStruct<T>, {0x28, 40, 0, 0})
};

/// Class /Script/FortniteAIServer.FortQueryContext_PlayspaceVolume
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortQueryContext_PlayspaceVolume : public UEnvQueryContext
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/FortniteAIServer.FortQueryContext_TokenReservedPosition
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortQueryContext_TokenReservedPosition : public UEnvQueryContext
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/FortniteAIServer.FortQueryGenerator_GridInBox
/// Size: 0x00B8 (0x000088 - 0x000140)
class UFortQueryGenerator_GridInBox : public UEnvQueryGenerator_ProjectedPoints
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
	SMember(FAIDataProviderFloatValue)                 BoxWidth                                                    OFFSET(getStruct<T>, {0x88, 56, 0, 0})
	SMember(FAIDataProviderFloatValue)                 BoxLength                                                   OFFSET(getStruct<T>, {0xC0, 56, 0, 0})
	SMember(FAIDataProviderFloatValue)                 SpaceBetween                                                OFFSET(getStruct<T>, {0xF8, 56, 0, 0})
	CMember(class UClass*)                             GenerateAround                                              OFFSET(get<T>, {0x130, 8, 0, 0})
	CMember(class UClass*)                             BoxExtentsContext                                           OFFSET(get<T>, {0x138, 8, 0, 0})
};

/// Class /Script/FortniteAIServer.FortQueryGenerator_GridInVolume
/// Size: 0x0040 (0x000088 - 0x0000C8)
class UFortQueryGenerator_GridInVolume : public UEnvQueryGenerator_ProjectedPoints
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	SMember(FAIDataProviderFloatValue)                 SpaceBetween                                                OFFSET(getStruct<T>, {0x88, 56, 0, 0})
	CMember(class UClass*)                             GenerateInVolume                                            OFFSET(get<T>, {0xC0, 8, 0, 0})
};

/// Class /Script/FortniteAIServer.FortQueryGenerator_PointsOutsideBox
/// Size: 0x0128 (0x000088 - 0x0001B0)
class UFortQueryGenerator_PointsOutsideBox : public UEnvQueryGenerator_ProjectedPoints
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 432;

public:
	SMember(FAIDataProviderFloatValue)                 SpaceBetween                                                OFFSET(getStruct<T>, {0x88, 56, 0, 0})
	SMember(FAIDataProviderFloatValue)                 NumberOfRingsAroundVolume                                   OFFSET(getStruct<T>, {0xC0, 56, 0, 0})
	SMember(FAIDataProviderFloatValue)                 ExtraXExtent                                                OFFSET(getStruct<T>, {0xF8, 56, 0, 0})
	SMember(FAIDataProviderFloatValue)                 ExtraYExtent                                                OFFSET(getStruct<T>, {0x130, 56, 0, 0})
	SMember(FAIDataProviderFloatValue)                 ExtraZExtent                                                OFFSET(getStruct<T>, {0x168, 56, 0, 0})
	CMember(class UClass*)                             GenerateInBoxCenter                                         OFFSET(get<T>, {0x1A0, 8, 0, 0})
	CMember(class UClass*)                             GenerateInBoxExtent                                         OFFSET(get<T>, {0x1A8, 8, 0, 0})
};

/// Class /Script/FortniteAIServer.FortTokenGenerator_TokenHintPositions
/// Size: 0x0050 (0x000050 - 0x0000A0)
class UFortTokenGenerator_TokenHintPositions : public UEnvQueryGenerator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	SMember(FScalableFloat)                            MaximumDistance                                             OFFSET(getStruct<T>, {0x50, 40, 0, 0})
	SMember(FScalableFloat)                            HintPositionVerticalOffset                                  OFFSET(getStruct<T>, {0x78, 40, 0, 0})
};

/// Class /Script/FortniteAIServer.FortQueryGenerator_TokenReservedPositions
/// Size: 0x0070 (0x000050 - 0x0000C0)
class UFortQueryGenerator_TokenReservedPositions : public UEnvQueryGenerator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	SMember(FGameplayTagQuery)                         GameplayTagQuery                                            OFFSET(getStruct<T>, {0x50, 72, 0, 0})
	SMember(FScalableFloat)                            MaximumDistanceFromQueryActor                               OFFSET(getStruct<T>, {0x98, 40, 0, 0})
};

/// Class /Script/FortniteAIServer.FortWorldConditionTimeOfDayState
/// Size: 0x0038 (0x000028 - 0x000060)
class UFortWorldConditionTimeOfDayState : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:


	/// Functions
	// Function /Script/FortniteAIServer.FortWorldConditionTimeOfDayState.HandleTimeOfDayPhaseChange
	// void HandleTimeOfDayPhaseChange(EFortDayPhase CurrentDayPhase, EFortDayPhase PreviousDayPhase, bool bAtCreation);        // [0xa729564] Final|Native|Private 
};

/// Class /Script/FortniteAIServer.PFWNPCReactions_Container
/// Size: 0x0020 (0x000140 - 0x000160)
class UPFWNPCReactions_Container : public UPersistenceFrameworkContainer
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
};

/// Class /Script/FortniteAIServer.PFWNPCReactions_Module
/// Size: 0x0000 (0x0000E0 - 0x0000E0)
class UPFWNPCReactions_Module : public UPersistenceFrameworkModule
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
};

/// Class /Script/FortniteAIServer.PFWNPCReactions_Trigger
/// Size: 0x0000 (0x0000C0 - 0x0000C0)
class UPFWNPCReactions_Trigger : public UPersistenceFrameworkSaveTrigger_Manual
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
};

/// Class /Script/FortniteAIServer.PFWNPCReactions_FilteredListContainer
/// Size: 0x00C0 (0x000150 - 0x000210)
class UPFWNPCReactions_FilteredListContainer : public UPersistenceFrameworkFilteredListContainer
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 528;

public:
};

/// Class /Script/FortniteAIServer.TokenProviderQueryGenerator
/// Size: 0x0048 (0x000050 - 0x000098)
class UTokenProviderQueryGenerator : public UEnvQueryGenerator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	SMember(FGameplayTagQuery)                         GameplayTagQuery                                            OFFSET(getStruct<T>, {0x50, 72, 0, 0})
};

/// Class /Script/FortniteAIServer.FortGameFeatureAction_InjectAIEvaluators
/// Size: 0x0010 (0x000028 - 0x000038)
class UFortGameFeatureAction_InjectAIEvaluators : public UGameFeatureAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<FGameFeatureFortAIEvaluatorEntry>)  AIEvaluatorList                                             OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Class /Script/FortniteAIServer.FortEnvQueryGenerator_ProjectedPoints
/// Size: 0x0008 (0x000088 - 0x000090)
class UFortEnvQueryGenerator_ProjectedPoints : public UEnvQueryGenerator_ProjectedPoints
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FName)                                     OverridenAgentNameForNavmesh                                OFFSET(getStruct<T>, {0x88, 4, 0, 0})
};

/// Class /Script/FortniteAIServer.FortEnvQueryGenerator_SimpleGrid
/// Size: 0x00B0 (0x000090 - 0x000140)
class UFortEnvQueryGenerator_SimpleGrid : public UFortEnvQueryGenerator_ProjectedPoints
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
	SMember(FAIDataProviderFloatValue)                 GridSize                                                    OFFSET(getStruct<T>, {0x90, 56, 0, 0})
	SMember(FAIDataProviderFloatValue)                 SpaceBetween                                                OFFSET(getStruct<T>, {0xC8, 56, 0, 0})
	SMember(FAIDataProviderFloatValue)                 RandomDisplacementRatio                                     OFFSET(getStruct<T>, {0x100, 56, 0, 0})
	CMember(class UClass*)                             GenerateAround                                              OFFSET(get<T>, {0x138, 8, 0, 0})
};

/// Class /Script/FortniteAIServer.FortBTService_ContextOverride
/// Size: 0x0000 (0x000070 - 0x000070)
class UFortBTService_ContextOverride : public UBTService
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /Script/FortniteAIServer.FortBTContext_MoveUrgency
/// Size: 0x0020 (0x000070 - 0x000090)
class UFortBTContext_MoveUrgency : public UFortBTService_ContextOverride
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FFortBehaviorValue_Enum)                   MoveUrgencyValue                                            OFFSET(getStruct<T>, {0x70, 24, 0, 0})
	CMember(TEnumAsByte<EFortMovementUrgency>)         MoveUrgency                                                 OFFSET(get<T>, {0x88, 1, 0, 0})
};

/// Class /Script/FortniteAIServer.FortBTContext_SkipNotPerceivedGoals
/// Size: 0x0000 (0x000070 - 0x000070)
class UFortBTContext_SkipNotPerceivedGoals : public UFortBTService_ContextOverride
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /Script/FortniteAIServer.FortBTContext_SuppressGoalUpdate
/// Size: 0x0008 (0x000070 - 0x000078)
class UFortBTContext_SuppressGoalUpdate : public UFortBTService_ContextOverride
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	DMember(bool)                                      bUnregisterFromGoalManager                                  OFFSET(get<bool>, {0x70, 1, 0, 0})
};

/// Class /Script/FortniteAIServer.FortBTDecorator_Affiliation
/// Size: 0x0058 (0x000068 - 0x0000C0)
class UFortBTDecorator_Affiliation : public UBTDecorator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	SMember(FBlackboardKeySelector)                    FirstActorKey                                               OFFSET(getStruct<T>, {0x68, 40, 0, 0})
	SMember(FBlackboardKeySelector)                    SecondActorKey                                              OFFSET(getStruct<T>, {0x90, 40, 0, 0})
	DMember(uint32_t)                                  AcceptedAffiliations                                        OFFSET(get<uint32_t>, {0xB8, 4, 0, 0})
};

/// Class /Script/FortniteAIServer.FortBTDecorator_CanBeConsideredAirborne
/// Size: 0x0000 (0x000090 - 0x000090)
class UFortBTDecorator_CanBeConsideredAirborne : public UBTDecorator_BlackboardBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
};

/// Class /Script/FortniteAIServer.FortBTDecorator_DistanceBetween
/// Size: 0x0068 (0x000068 - 0x0000D0)
class UFortBTDecorator_DistanceBetween : public UBTDecorator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	CMember(TEnumAsByte<EArithmeticKeyOperation>)      Operator                                                    OFFSET(get<T>, {0x68, 1, 0, 0})
	SMember(FBlackboardKeySelector)                    BlackboardKeyA                                              OFFSET(getStruct<T>, {0x70, 40, 0, 0})
	SMember(FBlackboardKeySelector)                    BlackboardKeyB                                              OFFSET(getStruct<T>, {0x98, 40, 0, 0})
	DMember(float)                                     SpecifiedDistance                                           OFFSET(get<float>, {0xC0, 4, 0, 0})
	DMember(bool)                                      bUseSelf                                                    OFFSET(get<bool>, {0xC4, 1, 1, 0})
	DMember(bool)                                      bCalculateAs2D                                              OFFSET(get<bool>, {0xC4, 1, 1, 1})
	DMember(float)                                     DistanceCalculationUpdateRate                               OFFSET(get<float>, {0xC8, 4, 0, 0})
};

/// Class /Script/FortniteAIServer.FortBTDecorator_GameplayAbility_CanActivate
/// Size: 0x0000 (0x000168 - 0x000168)
class UFortBTDecorator_GameplayAbility_CanActivate : public UFortBTDecorator_QueryGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 360;

public:
};

/// Class /Script/FortniteAIServer.FortBTDecorator_GameplayAbility_CanHitTarget
/// Size: 0x0010 (0x000168 - 0x000178)
class UFortBTDecorator_GameplayAbility_CanHitTarget : public UFortBTDecorator_QueryGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 376;

public:
	SMember(FFortBehaviorValue_Bool)                   UseIdealYawRotationToTargetValue                            OFFSET(getStruct<T>, {0x168, 12, 0, 0})
	DMember(bool)                                      UseIdealYawRotationToTarget                                 OFFSET(get<bool>, {0x174, 1, 1, 0})
};

/// Class /Script/FortniteAIServer.FortBTDecorator_GameplayAbility_CompareDistance
/// Size: 0x0010 (0x000168 - 0x000178)
class UFortBTDecorator_GameplayAbility_CompareDistance : public UFortBTDecorator_QueryGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 376;

public:
	CMember(TArray<FDistanceToTargetComparison>)       DistanceComparisons                                         OFFSET(get<T>, {0x168, 16, 0, 0})
};

/// Class /Script/FortniteAIServer.FortBTDecorator_GameplayAbility_DoesTargetHaveProhibitedTags
/// Size: 0x0000 (0x000168 - 0x000168)
class UFortBTDecorator_GameplayAbility_DoesTargetHaveProhibitedTags : public UFortBTDecorator_QueryGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 360;

public:
};

/// Class /Script/FortniteAIServer.FortBTDecorator_GameplayAbility_HasGameplayAbility
/// Size: 0x00C8 (0x000068 - 0x000130)
class UFortBTDecorator_GameplayAbility_HasGameplayAbility : public UBTDecorator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	SMember(FFortBehaviorValue_Object)                 AbilityOwningActor                                          OFFSET(getStruct<T>, {0x68, 24, 0, 0})
	SMember(FFortBehaviorValue_GameplayTagContainer)   GameplayAbilityTagContainer                                 OFFSET(getStruct<T>, {0x80, 40, 0, 0})
	SMember(FFortBehaviorValue_Bool)                   OnlyTestActiveAbility                                       OFFSET(getStruct<T>, {0xA8, 12, 0, 0})
	SMember(FBlackboardKeySelector)                    AbilityOwningActorKey                                       OFFSET(getStruct<T>, {0xB8, 40, 0, 0})
	SMember(FGameplayTagContainer)                     GameplayAbilityTag                                          OFFSET(getStruct<T>, {0xE0, 32, 0, 0})
	SMember(FBlackboardKeySelector)                    GameplayAbilityTagBlackboardKey                             OFFSET(getStruct<T>, {0x100, 40, 0, 0})
	DMember(bool)                                      bOnlyTestActiveAbility                                      OFFSET(get<bool>, {0x128, 1, 0, 0})
};

/// Class /Script/FortniteAIServer.FortBTDecorator_GameplayAbility_HasNearbyPawns
/// Size: 0x0030 (0x000168 - 0x000198)
class UFortBTDecorator_GameplayAbility_HasNearbyPawns : public UFortBTDecorator_QueryGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 408;

public:
	SMember(FFortBehaviorValue_Float)                  NearbyPawnDistanceValue                                     OFFSET(getStruct<T>, {0x168, 12, 0, 0})
	SMember(FFortBehaviorValue_Bool)                   FilterAIPawns                                               OFFSET(getStruct<T>, {0x174, 12, 0, 0})
	SMember(FFortBehaviorValue_Bool)                   FilterPlayerPawns                                           OFFSET(getStruct<T>, {0x180, 12, 0, 0})
	DMember(float)                                     NearbyPawnDistance                                          OFFSET(get<float>, {0x18C, 4, 0, 0})
	DMember(bool)                                      bFilterAIPawns                                              OFFSET(get<bool>, {0x190, 1, 0, 0})
	DMember(bool)                                      bFilterPlayerPawns                                          OFFSET(get<bool>, {0x191, 1, 0, 0})
};

/// Class /Script/FortniteAIServer.FortBTDecorator_GameplayAbility_IsClosestPawnInRange
/// Size: 0x0030 (0x000168 - 0x000198)
class UFortBTDecorator_GameplayAbility_IsClosestPawnInRange : public UFortBTDecorator_QueryGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 408;

public:
	SMember(FFortBehaviorValue_Float)                  NearbyPawnDistanceValue                                     OFFSET(getStruct<T>, {0x168, 12, 0, 0})
	SMember(FFortBehaviorValue_Bool)                   FilterAIPawns                                               OFFSET(getStruct<T>, {0x174, 12, 0, 0})
	SMember(FFortBehaviorValue_Bool)                   FilterPlayerPawns                                           OFFSET(getStruct<T>, {0x180, 12, 0, 0})
	DMember(float)                                     NearbyPawnDistance                                          OFFSET(get<float>, {0x18C, 4, 0, 0})
	DMember(bool)                                      bFilterAIPawns                                              OFFSET(get<bool>, {0x190, 1, 0, 0})
	DMember(bool)                                      bFilterPlayerPawns                                          OFFSET(get<bool>, {0x191, 1, 0, 0})
};

/// Class /Script/FortniteAIServer.FortBTDecorator_GameplayAbility_IsOnCooldown
/// Size: 0x0000 (0x000168 - 0x000168)
class UFortBTDecorator_GameplayAbility_IsOnCooldown : public UFortBTDecorator_QueryGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 360;

public:
};

/// Class /Script/FortniteAIServer.FortBTDecorator_GameplayAbility_IsRotatedToAttackTarget
/// Size: 0x0000 (0x000168 - 0x000168)
class UFortBTDecorator_GameplayAbility_IsRotatedToAttackTarget : public UFortBTDecorator_QueryGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 360;

public:
};

/// Class /Script/FortniteAIServer.FortBTDecorator_GameplayAbility_IsWithinMaxTargetSelectionRange
/// Size: 0x0000 (0x000168 - 0x000168)
class UFortBTDecorator_GameplayAbility_IsWithinMaxTargetSelectionRange : public UFortBTDecorator_QueryGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 360;

public:
};

/// Class /Script/FortniteAIServer.FortBTDecorator_IsGoalPawn
/// Size: 0x0000 (0x000090 - 0x000090)
class UFortBTDecorator_IsGoalPawn : public UBTDecorator_BlackboardBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
};

/// Class /Script/FortniteAIServer.FortBTDecorator_IsInBotEndGame
/// Size: 0x0000 (0x000068 - 0x000068)
class UFortBTDecorator_IsInBotEndGame : public UBTDecorator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
};

/// Class /Script/FortniteAIServer.FortBTDecorator_IsMoving
/// Size: 0x0070 (0x000168 - 0x0001D8)
class UFortBTDecorator_IsMoving : public UFortBTDecorator_QueryGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 472;

public:
	SMember(FFortBehaviorValue_Float)                  UpdateIntervalValue                                         OFFSET(getStruct<T>, {0x168, 12, 0, 0})
	SMember(FFortBehaviorValue_Float)                  MinTimeValue                                                OFFSET(getStruct<T>, {0x174, 12, 0, 0})
	DMember(bool)                                      bUseMinDist                                                 OFFSET(get<bool>, {0x180, 1, 0, 0})
	SMember(FFortBehaviorValue_Float)                  UseMinDistToTargetTime                                      OFFSET(getStruct<T>, {0x184, 12, 0, 0})
	SMember(FDistanceToTargetComparison)               MinDistanceComparison                                       OFFSET(getStruct<T>, {0x190, 56, 0, 0})
	DMember(float)                                     UpdateInterval                                              OFFSET(get<float>, {0x1C8, 4, 0, 0})
	DMember(float)                                     MinTime                                                     OFFSET(get<float>, {0x1CC, 4, 0, 0})
	DMember(float)                                     MinDistMinTime                                              OFFSET(get<float>, {0x1D0, 4, 0, 0})
};

/// Class /Script/FortniteAIServer.FortBTDecorator_IsTakerAirborne
/// Size: 0x0000 (0x000068 - 0x000068)
class UFortBTDecorator_IsTakerAirborne : public UBTDecorator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
};

/// Class /Script/FortniteAIServer.FortBTDecorator_WeaponStatus
/// Size: 0x0030 (0x000068 - 0x000098)
class UFortBTDecorator_WeaponStatus : public UBTDecorator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	DMember(float)                                     WeaponStatusUpdateRate                                      OFFSET(get<float>, {0x68, 4, 0, 0})
	DMember(bool)                                      bTestIfCurrentWeaponIsValid                                 OFFSET(get<bool>, {0x6C, 1, 1, 0})
	DMember(bool)                                      bCurrentWeaponShouldBeValid                                 OFFSET(get<bool>, {0x6C, 1, 1, 1})
	DMember(bool)                                      bTestAllowedCurrentWeaponTags                               OFFSET(get<bool>, {0x6C, 1, 1, 2})
	SMember(FGameplayTagContainer)                     AllowedCurrentWeaponTags                                    OFFSET(getStruct<T>, {0x70, 32, 0, 0})
	DMember(bool)                                      bTestIfCurrentWeaponIsReloading                             OFFSET(get<bool>, {0x90, 1, 1, 0})
	DMember(bool)                                      bCurrentWeaponShouldBeReloading                             OFFSET(get<bool>, {0x90, 1, 1, 1})
	DMember(bool)                                      bTestIfCurrentWeaponHasAmmoInMagazine                       OFFSET(get<bool>, {0x90, 1, 1, 2})
	DMember(bool)                                      bCurrentWeaponShouldHaveAmmoInMagazine                      OFFSET(get<bool>, {0x90, 1, 1, 3})
	DMember(bool)                                      bTestIfCurrentWeaponHasExtraAmmo                            OFFSET(get<bool>, {0x90, 1, 1, 4})
	DMember(bool)                                      bCurrentWeaponShouldHaveExtraAmmo                           OFFSET(get<bool>, {0x90, 1, 1, 5})
	DMember(bool)                                      bAllInterestedTestsMustPass                                 OFFSET(get<bool>, {0x90, 1, 1, 6})
};

/// Class /Script/FortniteAIServer.FortBTService_ActivateAbility
/// Size: 0x0060 (0x000070 - 0x0000D0)
class UFortBTService_ActivateAbility : public UBTService
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	SMember(FGameplayTagContainer)                     AbilityTags                                                 OFFSET(getStruct<T>, {0x70, 32, 0, 0})
	DMember(bool)                                      bRequireCanHitTargetWithAbility                             OFFSET(get<bool>, {0x90, 1, 0, 0})
	DMember(bool)                                      bPawnTargetsOnly                                            OFFSET(get<bool>, {0x91, 1, 0, 0})
	SMember(FGameplayTagContainer)                     ProhibitedTargetTags                                        OFFSET(getStruct<T>, {0x98, 32, 0, 0})
	DMember(bool)                                      bCanActivateWhenMoving                                      OFFSET(get<bool>, {0xB8, 1, 0, 0})
	CMember(TArray<FDistanceToTargetComparison>)       DistanceChecks                                              OFFSET(get<T>, {0xC0, 16, 0, 0})
};

/// Class /Script/FortniteAIServer.FortBTService_UpdateBotMissionBuilding
/// Size: 0x0050 (0x000070 - 0x0000C0)
class UFortBTService_UpdateBotMissionBuilding : public UBTService
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	SMember(FBlackboardKeySelector)                    InterestLocationKey                                         OFFSET(getStruct<T>, {0x70, 40, 0, 0})
	SMember(FBlackboardKeySelector)                    BuildOrderKey                                               OFFSET(getStruct<T>, {0x98, 40, 0, 0})
};

/// Class /Script/FortniteAIServer.FortBTService_UpdateBotMissionGoal
/// Size: 0x0008 (0x000098 - 0x0000A0)
class UFortBTService_UpdateBotMissionGoal : public UBTService_BlackboardBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	DMember(bool)                                      bRequireInteraction                                         OFFSET(get<bool>, {0x98, 1, 1, 0})
	DMember(bool)                                      bRequireInteractionOrLocator                                OFFSET(get<bool>, {0x98, 1, 1, 1})
	DMember(bool)                                      bRequireEncounter                                           OFFSET(get<bool>, {0x98, 1, 1, 2})
	DMember(bool)                                      bPickClosest                                                OFFSET(get<bool>, {0x98, 1, 1, 3})
};

/// Class /Script/FortniteAIServer.FortBTTask_BotMissionBuild
/// Size: 0x0000 (0x000098 - 0x000098)
class UFortBTTask_BotMissionBuild : public UBTTask_BlackboardBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
};

/// Class /Script/FortniteAIServer.FortBTTask_BotMissionInteract
/// Size: 0x0000 (0x000098 - 0x000098)
class UFortBTTask_BotMissionInteract : public UBTTask_BlackboardBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
};

/// Class /Script/FortniteAIServer.FortBTTask_ExecuteGameplayAbility
/// Size: 0x0070 (0x000078 - 0x0000E8)
class UFortBTTask_ExecuteGameplayAbility : public UBTTask_GameplayTaskBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
	SMember(FFortBehaviorValue_GameplayTagContainer)   GameplayAbilityTagContainer                                 OFFSET(getStruct<T>, {0x78, 40, 0, 0})
	SMember(FGameplayTagContainer)                     GameplayAbilityTag                                          OFFSET(getStruct<T>, {0xA0, 32, 0, 0})
	SMember(FBlackboardKeySelector)                    GameplayAbilityTagBlackboardKey                             OFFSET(getStruct<T>, {0xC0, 40, 0, 0})
};

/// Class /Script/FortniteAIServer.FortBTTask_GameMoveTo
/// Size: 0x0070 (0x0000B0 - 0x000120)
class UFortBTTask_GameMoveTo : public UBTTask_MoveTo
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	SMember(FBlackboardKeySelector)                    FocalPointWhileMoving                                       OFFSET(getStruct<T>, {0xB0, 40, 0, 0})
	CMember(TEnumAsByte<EPathObstacleAction>)          PathObstacleAction                                          OFFSET(get<T>, {0xD8, 1, 0, 0})
	CMember(class UClass*)                             PushBumpedPawnClass                                         OFFSET(get<T>, {0xE0, 8, 0, 0})
	SMember(FGameplayTag)                              NavFilterTag                                                OFFSET(getStruct<T>, {0xE8, 4, 0, 0})
	DMember(bool)                                      bDetectUnexpectedPathBlockingObstacles                      OFFSET(get<bool>, {0xEC, 1, 1, 0})
	DMember(bool)                                      bEnableSlowdownAtGoal                                       OFFSET(get<bool>, {0xEC, 1, 1, 1})
	DMember(bool)                                      bStopAtGoal                                                 OFFSET(get<bool>, {0xEC, 1, 1, 2})
	DMember(bool)                                      bFinishMoveOnOverlap                                        OFFSET(get<bool>, {0xEC, 1, 1, 3})
	SMember(FBlackboardKeySelector)                    AcceptableRadiusKey                                         OFFSET(getStruct<T>, {0xF0, 40, 0, 0})
	DMember(bool)                                      bDeimosFlavor                                               OFFSET(get<bool>, {0x118, 1, 1, 0})
};

/// Class /Script/FortniteAIServer.FortBTTask_GameMoveDirectlyToward
/// Size: 0x0000 (0x000120 - 0x000120)
class UFortBTTask_GameMoveDirectlyToward : public UFortBTTask_GameMoveTo
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
};

/// Class /Script/FortniteAIServer.FortBTTask_RequestUndermining
/// Size: 0x0000 (0x000070 - 0x000070)
class UFortBTTask_RequestUndermining : public UBTTaskNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /Script/FortniteAIServer.FortBTTask_RotateToFaceBBEntryWithTags
/// Size: 0x0020 (0x0000A0 - 0x0000C0)
class UFortBTTask_RotateToFaceBBEntryWithTags : public UBTTask_RotateToFaceBBEntry
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	SMember(FGameplayTagContainer)                     TagsToApply                                                 OFFSET(getStruct<T>, {0xA0, 32, 0, 0})
};

/// Class /Script/FortniteAIServer.FortBTTask_RunDynamicStateTree
/// Size: 0x0000 (0x0000C8 - 0x0000C8)
class UFortBTTask_RunDynamicStateTree : public UBTTask_RunDynamicStateTree
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
};

/// Class /Script/FortniteAIServer.FortBTTask_SetFrustrationDiscouragement
/// Size: 0x0008 (0x000070 - 0x000078)
class UFortBTTask_SetFrustrationDiscouragement : public UBTTaskNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	DMember(float)                                     DiscouragementDuration                                      OFFSET(get<float>, {0x70, 4, 0, 0})
};

/// Class /Script/FortniteAIServer.FortBTTask_Sleep
/// Size: 0x0000 (0x000070 - 0x000070)
class UFortBTTask_Sleep : public UBTTaskNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /Script/FortniteAIServer.FortBTTask_TakerMoveToNavmesh
/// Size: 0x0000 (0x0000B0 - 0x0000B0)
class UFortBTTask_TakerMoveToNavmesh : public UBTTask_MoveTo
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
};

/// Class /Script/FortniteAIServer.FortEQSPrevisActor
/// Size: 0x0038 (0x000290 - 0x0002C8)
class AFortEQSPrevisActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 712;

public:
	CMember(class USceneComponent*)                    SceneRoot                                                   OFFSET(get<T>, {0x2A0, 8, 0, 0})
	SMember(FGameplayTagContainer)                     GameplayTags                                                OFFSET(getStruct<T>, {0x2A8, 32, 0, 0})


	/// Functions
	// Function /Script/FortniteAIServer.FortEQSPrevisActor.SetQueryTemplate
	// void SetQueryTemplate(class UEnvQuery* InPrevisQueryTemplate);                                                           // [0x656aec4] Final|Native|Public|BlueprintCallable 
	// Function /Script/FortniteAIServer.FortEQSPrevisActor.PrepForPrevis
	// void PrepForPrevis();                                                                                                    // [0x20c3f9c] Event|Public|BlueprintEvent 
};

/// Class /Script/FortniteAIServer.FortQueryContext_AIPawnSpawnLocation
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortQueryContext_AIPawnSpawnLocation : public UEnvQueryContext
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/FortniteAIServer.FortQueryContext_AllBots
/// Size: 0x0050 (0x000028 - 0x000078)
class UFortQueryContext_AllBots : public UEnvQueryContext
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	DMember(bool)                                      bIncludeOnlyAthenaGameParticipantBots                       OFFSET(get<bool>, {0x28, 1, 0, 0})
	SMember(FGameplayTagQuery)                         BotTagQuery                                                 OFFSET(getStruct<T>, {0x30, 72, 0, 0})
};

/// Class /Script/FortniteAIServer.FortQueryContext_AllEnemies
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortQueryContext_AllEnemies : public UEnvQueryContext
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/FortniteAIServer.FortQueryContext_AllGoals
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortQueryContext_AllGoals : public UEnvQueryContext
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/FortniteAIServer.FortQueryContext_AllPlayers
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortQueryContext_AllPlayers : public UEnvQueryContext
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/FortniteAIServer.FortQueryContext_AllPOIVolumes
/// Size: 0x0048 (0x000028 - 0x000070)
class UFortQueryContext_AllPOIVolumes : public UEnvQueryContext
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FGameplayTagQuery)                         VolumeLocationTagQuery                                      OFFSET(getStruct<T>, {0x28, 72, 0, 0})
};

/// Class /Script/FortniteAIServer.FortQueryContext_AthenaCurrentSafeZoneCenter
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortQueryContext_AthenaCurrentSafeZoneCenter : public UEnvQueryContext
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/FortniteAIServer.FortQueryContext_AthenaCurrentSafeZoneIndicatorCenter
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortQueryContext_AthenaCurrentSafeZoneIndicatorCenter : public UEnvQueryContext
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/FortniteAIServer.FortQueryContext_AthenaSafeZonePredictedLocation
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortQueryContext_AthenaSafeZonePredictedLocation : public UEnvQueryContext
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/FortniteAIServer.FortQueryContext_BlackboardKeyLeader
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortQueryContext_BlackboardKeyLeader : public UEnvQueryContext
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/FortniteAIServer.FortQueryContext_BuildingRifts
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortQueryContext_BuildingRifts : public UEnvQueryContext
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/FortniteAIServer.FortQueryContext_EncounterFallbackTarget
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortQueryContext_EncounterFallbackTarget : public UEnvQueryContext
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/FortniteAIServer.FortQueryContext_EncounterGoalsCenterLocation
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortQueryContext_EncounterGoalsCenterLocation : public UEnvQueryContext
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/FortniteAIServer.FortQueryContext_EncounterGoalsOnGround
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortQueryContext_EncounterGoalsOnGround : public UEnvQueryContext
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/FortniteAIServer.FortQueryContext_EncounterPrimaryAssignmentGoals
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortQueryContext_EncounterPrimaryAssignmentGoals : public UEnvQueryContext
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/FortniteAIServer.FortQueryContext_EncounterProvidedQueryLocations
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortQueryContext_EncounterProvidedQueryLocations : public UEnvQueryContext
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/FortniteAIServer.FortQueryContext_EncounterQueryActor
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortQueryContext_EncounterQueryActor : public UEnvQueryContext
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/FortniteAIServer.FortQueryContext_EncounterRandomDirection
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortQueryContext_EncounterRandomDirection : public UEnvQueryContext
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/FortniteAIServer.FortQueryContext_EncounterTargetObjective
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortQueryContext_EncounterTargetObjective : public UEnvQueryContext
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/FortniteAIServer.FortQueryContext_Goal
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortQueryContext_Goal : public UEnvQueryContext
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/FortniteAIServer.FortQueryContext_GoalProviderRootAssignmentGoals
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortQueryContext_GoalProviderRootAssignmentGoals : public UEnvQueryContext
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/FortniteAIServer.FortQueryContext_Goal_SpawnLocation
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortQueryContext_Goal_SpawnLocation : public UEnvQueryContext
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/FortniteAIServer.FortQueryContext_NearbyAIPawns
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortQueryContext_NearbyAIPawns : public UEnvQueryContext
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/FortniteAIServer.FortQueryContext_NearbyAIPawnsMoveDestinations
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortQueryContext_NearbyAIPawnsMoveDestinations : public UEnvQueryContext
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/FortniteAIServer.FortQueryContext_NearbyFriendlyAIPawns
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortQueryContext_NearbyFriendlyAIPawns : public UEnvQueryContext
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/FortniteAIServer.FortQueryContext_NearbyFriendlyAIPawnsAndPlayerPawns
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortQueryContext_NearbyFriendlyAIPawnsAndPlayerPawns : public UEnvQueryContext
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/FortniteAIServer.FortQueryContext_NearbyFriends
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortQueryContext_NearbyFriends : public UEnvQueryContext
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/FortniteAIServer.FortQueryContext_PlayerSpawnPad
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortQueryContext_PlayerSpawnPad : public UEnvQueryContext
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/FortniteAIServer.FortQueryContext_RandomDirectionXY
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortQueryContext_RandomDirectionXY : public UEnvQueryContext
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/FortniteAIServer.FortQueryContext_SpawnSpotActorLocationOrAIPawnSpawnLocation
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortQueryContext_SpawnSpotActorLocationOrAIPawnSpawnLocation : public UEnvQueryContext
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/FortniteAIServer.FortQueryContext_StWStormShield
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortQueryContext_StWStormShield : public UEnvQueryContext
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/FortniteAIServer.FortQueryContext_TwoPointSolverPointA
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortQueryContext_TwoPointSolverPointA : public UEnvQueryContext
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/FortniteAIServer.FortQueryContext_TwoPointSolverRotationA
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortQueryContext_TwoPointSolverRotationA : public UEnvQueryContext
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/FortniteAIServer.FortQueryData_CurvesAroundLine
/// Size: 0x0060 (0x000030 - 0x000090)
class UFortQueryData_CurvesAroundLine : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FFortPointsOnCurve)                        PointsOnSideA                                               OFFSET(getStruct<T>, {0x30, 48, 0, 0})
	SMember(FFortPointsOnCurve)                        PointsOnSideB                                               OFFSET(getStruct<T>, {0x60, 48, 0, 0})
};

/// Class /Script/FortniteAIServer.FortQueryGenerator_ActorsAround
/// Size: 0x0000 (0x0000D0 - 0x0000D0)
class UFortQueryGenerator_ActorsAround : public UEnvQueryGenerator_ActorsOfClass
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
};

/// Class /Script/FortniteAIServer.FortQueryGenerator_Allies
/// Size: 0x0000 (0x000050 - 0x000050)
class UFortQueryGenerator_Allies : public UEnvQueryGenerator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Class /Script/FortniteAIServer.FortQueryGenerator_AssignmentGoal
/// Size: 0x0000 (0x000050 - 0x000050)
class UFortQueryGenerator_AssignmentGoal : public UEnvQueryGenerator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Class /Script/FortniteAIServer.FortQueryGenerator_BuildingRifts
/// Size: 0x0000 (0x000050 - 0x000050)
class UFortQueryGenerator_BuildingRifts : public UEnvQueryGenerator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Class /Script/FortniteAIServer.FortQueryGenerator_Buildings
/// Size: 0x01D8 (0x000050 - 0x000228)
class UFortQueryGenerator_Buildings : public UEnvQueryGenerator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 552;

public:
	SMember(FFortAIAssignmentIdentifier)               AssignmentIdentifier                                        OFFSET(getStruct<T>, {0x50, 48, 0, 0})
	CMember(class UFortAIAssignmentSettings*)          AssignmentSettings                                          OFFSET(get<T>, {0x80, 8, 0, 0})
	CMember(class UClass*)                             BuildingGridVolumeCenter                                    OFFSET(get<T>, {0x88, 8, 0, 0})
	SMember(FAIDataProviderIntValue)                   HorizontalBuildingCellRadius                                OFFSET(getStruct<T>, {0x90, 56, 0, 0})
	SMember(FAIDataProviderIntValue)                   BuildingCellsAbove                                          OFFSET(getStruct<T>, {0xC8, 56, 0, 0})
	SMember(FAIDataProviderIntValue)                   BuildingCellsBelow                                          OFFSET(getStruct<T>, {0x100, 56, 0, 0})
	SMember(FAIDataProviderBoolValue)                  bIncludeWalls                                               OFFSET(getStruct<T>, {0x138, 56, 0, 0})
	SMember(FAIDataProviderBoolValue)                  bIncludeFloors                                              OFFSET(getStruct<T>, {0x170, 56, 0, 0})
	CMember(TArray<EFloorPatternType>)                 FloorPatternsToIgnore                                       OFFSET(get<T>, {0x1A8, 16, 0, 0})
	SMember(FAIDataProviderBoolValue)                  bIncludeCenterCell                                          OFFSET(getStruct<T>, {0x1B8, 56, 0, 0})
	SMember(FAIDataProviderIntValue)                   MaxBuildingActorsPerVolumeCenterToCollect                   OFFSET(getStruct<T>, {0x1F0, 56, 0, 0})
};

/// Class /Script/FortniteAIServer.FortQueryGenerator_BuildingsOnCachedPath
/// Size: 0x00B0 (0x000050 - 0x000100)
class UFortQueryGenerator_BuildingsOnCachedPath : public UEnvQueryGenerator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	CMember(class UClass*)                             CachedPathSource                                            OFFSET(get<T>, {0x50, 8, 0, 0})
	SMember(FAIDataProviderBoolValue)                  bIncludeWalls                                               OFFSET(getStruct<T>, {0x58, 56, 0, 0})
	SMember(FAIDataProviderBoolValue)                  bIncludeFloors                                              OFFSET(getStruct<T>, {0x90, 56, 0, 0})
	SMember(FAIDataProviderBoolValue)                  bIncludeCenterCell                                          OFFSET(getStruct<T>, {0xC8, 56, 0, 0})
};

/// Class /Script/FortniteAIServer.FortQueryGenerator_EncounterTargets
/// Size: 0x0000 (0x000050 - 0x000050)
class UFortQueryGenerator_EncounterTargets : public UEnvQueryGenerator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Class /Script/FortniteAIServer.FortQueryGenerator_Enemies
/// Size: 0x0080 (0x000050 - 0x0000D0)
class UFortQueryGenerator_Enemies : public UEnvQueryGenerator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	DMember(bool)                                      bPerceivedEnemiesOnly                                       OFFSET(get<bool>, {0x50, 1, 0, 0})
	DMember(bool)                                      bSleepCapableAIUsePerceivedEnemiesOnly                      OFFSET(get<bool>, {0x51, 1, 0, 0})
	DMember(bool)                                      bIgnoreDBNOPawns                                            OFFSET(get<bool>, {0x52, 1, 0, 0})
	DMember(bool)                                      bIgnoreSleepingAIs                                          OFFSET(get<bool>, {0x53, 1, 0, 0})
	DMember(bool)                                      bAddEnemiesFromAbilityRange                                 OFFSET(get<bool>, {0x54, 1, 0, 0})
	SMember(FGameplayTagContainer)                     AbilityTags                                                 OFFSET(getStruct<T>, {0x58, 32, 0, 0})
	SMember(FGameplayTagContainer)                     DistanceTags                                                OFFSET(getStruct<T>, {0x78, 32, 0, 0})
	SMember(FAIDataProviderFloatValue)                 MaxTimeSincePerceived                                       OFFSET(getStruct<T>, {0x98, 56, 0, 0})
};

/// Class /Script/FortniteAIServer.FortQueryGenerator_GoalActorsOfClass
/// Size: 0x0048 (0x000050 - 0x000098)
class UFortQueryGenerator_GoalActorsOfClass : public UEnvQueryGenerator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	CMember(class UClass*)                             SearchedActorClass                                          OFFSET(get<T>, {0x50, 8, 0, 0})
	SMember(FAIDataProviderFloatValue)                 SearchRadius                                                OFFSET(getStruct<T>, {0x58, 56, 0, 0})
	CMember(class UClass*)                             SearchCenter                                                OFFSET(get<T>, {0x90, 8, 0, 0})
};

/// Class /Script/FortniteAIServer.FortQueryGenerator_GoalOnCircle
/// Size: 0x0040 (0x000220 - 0x000260)
class UFortQueryGenerator_GoalOnCircle : public UEnvQueryGenerator_OnCircle
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 608;

public:
	DMember(bool)                                      bIncludeCenterActorInGeneratedGoals                         OFFSET(get<bool>, {0x220, 1, 0, 0})
	CMember(class UFortAIAssignmentSettings*)          OptionalAssignmentSettings                                  OFFSET(get<T>, {0x228, 8, 0, 0})
	SMember(FFortAIAssignmentIdentifier)               OptionalAssignmentIdentifier                                OFFSET(getStruct<T>, {0x230, 48, 0, 0})
};

/// Class /Script/FortniteAIServer.FortQueryGenerator_GoalPlayerPawns
/// Size: 0x0008 (0x000050 - 0x000058)
class UFortQueryGenerator_GoalPlayerPawns : public UEnvQueryGenerator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	DMember(bool)                                      bOnlyAthenaGameParticipants                                 OFFSET(get<bool>, {0x50, 1, 0, 0})
};

/// Class /Script/FortniteAIServer.FortQueryGenerator_GoalTrackableAIObjects
/// Size: 0x0080 (0x000050 - 0x0000D0)
class UFortQueryGenerator_GoalTrackableAIObjects : public UEnvQueryGenerator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	SMember(FFortAIAssignmentIdentifier)               AssignmentIdentifier                                        OFFSET(getStruct<T>, {0x50, 48, 0, 0})
	CMember(class UClass*)                             SearchedActorClass                                          OFFSET(get<T>, {0x80, 8, 0, 0})
	SMember(FGameplayTag)                              RequiredTag                                                 OFFSET(getStruct<T>, {0x88, 4, 0, 0})
	SMember(FAIDataProviderFloatValue)                 SearchRadius                                                OFFSET(getStruct<T>, {0x90, 56, 0, 0})
	CMember(class UClass*)                             SearchCenter                                                OFFSET(get<T>, {0xC8, 8, 0, 0})
};

/// Class /Script/FortniteAIServer.FortQueryGenerator_HotspotSlots
/// Size: 0x0050 (0x000050 - 0x0000A0)
class UFortQueryGenerator_HotspotSlots : public UEnvQueryGenerator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	CMember(class UClass*)                             GenerateAround                                              OFFSET(get<T>, {0x50, 8, 0, 0})
	SMember(FAIDataProviderFloatValue)                 Radius                                                      OFFSET(getStruct<T>, {0x58, 56, 0, 0})
	DMember(bool)                                      bUseTetherZone                                              OFFSET(get<bool>, {0x90, 1, 1, 0})
	CMember(class UClass*)                             HotspotClass                                                OFFSET(get<T>, {0x98, 8, 0, 0})
};

/// Class /Script/FortniteAIServer.FortQueryGenerator_InfluenceMapPoints
/// Size: 0x0048 (0x000088 - 0x0000D0)
class UFortQueryGenerator_InfluenceMapPoints : public UEnvQueryGenerator_ProjectedPoints
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	SMember(FAIDataProviderIntValue)                   Density                                                     OFFSET(getStruct<T>, {0x88, 56, 0, 0})
	DMember(bool)                                      bOnlyFlatSurface                                            OFFSET(get<bool>, {0xC0, 1, 1, 0})
	CMember(class UClass*)                             GenerateAround                                              OFFSET(get<T>, {0xC8, 8, 0, 0})
};

/// Class /Script/FortniteAIServer.FortQueryGenerator_LootGoalsAthena
/// Size: 0x00D8 (0x000050 - 0x000128)
class UFortQueryGenerator_LootGoalsAthena : public UEnvQueryGenerator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
	SMember(FFortAIAssignmentIdentifier)               AssignmentIdentifier                                        OFFSET(getStruct<T>, {0x50, 48, 0, 0})
	CMember(class UFortAIAssignmentSettings*)          AssignmentSettings                                          OFFSET(get<T>, {0x80, 8, 0, 0})
	SMember(FAIDataProviderFloatValue)                 HorizontalHalfExtents                                       OFFSET(getStruct<T>, {0x88, 56, 0, 0})
	SMember(FAIDataProviderFloatValue)                 VerticalHalfExtents                                         OFFSET(getStruct<T>, {0xC0, 56, 0, 0})
	CMember(class UClass*)                             SearchCenter                                                OFFSET(get<T>, {0xF8, 8, 0, 0})
	DMember(bool)                                      bAvailableLootOnly                                          OFFSET(get<bool>, {0x100, 1, 1, 0})
	SMember(FGameplayTagContainer)                     ExcludedAILootGameplayTags                                  OFFSET(getStruct<T>, {0x108, 32, 0, 0})
};

/// Class /Script/FortniteAIServer.FortQueryGenerator_MissionPlacementActors
/// Size: 0x0048 (0x000050 - 0x000098)
class UFortQueryGenerator_MissionPlacementActors : public UEnvQueryGenerator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	SMember(FGameplayTagQuery)                         MissionPlacementActorTagQuery                               OFFSET(getStruct<T>, {0x50, 72, 0, 0})
};

/// Class /Script/FortniteAIServer.FortQueryGenerator_MutatorActorQueryResults
/// Size: 0x0000 (0x000050 - 0x000050)
class UFortQueryGenerator_MutatorActorQueryResults : public UEnvQueryGenerator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Class /Script/FortniteAIServer.FortQueryGenerator_MutatorBaseQueryResults
/// Size: 0x0000 (0x000050 - 0x000050)
class UFortQueryGenerator_MutatorBaseQueryResults : public UEnvQueryGenerator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Class /Script/FortniteAIServer.FortQueryGenerator_PerceivedActors
/// Size: 0x00D8 (0x000050 - 0x000128)
class UFortQueryGenerator_PerceivedActors : public UEnvQueryGenerator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
	DMember(bool)                                      bGenerateHostileActorGoal                                   OFFSET(get<bool>, {0x50, 1, 0, 0})
	SMember(FFortQueryGenerator_PerceivedActors_Settings) HostileActorSettings                                     OFFSET(getStruct<T>, {0x58, 64, 0, 0})
	DMember(bool)                                      bGenerateNeutralActorGoal                                   OFFSET(get<bool>, {0x98, 1, 0, 0})
	SMember(FFortQueryGenerator_PerceivedActors_Settings) NeutralActorSettings                                     OFFSET(getStruct<T>, {0xA0, 64, 0, 0})
	DMember(bool)                                      bGenerateFriendlyActorGoal                                  OFFSET(get<bool>, {0xE0, 1, 0, 0})
	SMember(FFortQueryGenerator_PerceivedActors_Settings) FriendlyActorSettings                                    OFFSET(getStruct<T>, {0xE8, 64, 0, 0})
};

/// Class /Script/FortniteAIServer.FortQueryGenerator_PointsAroundLine
/// Size: 0x0098 (0x000088 - 0x000120)
class UFortQueryGenerator_PointsAroundLine : public UEnvQueryGenerator_ProjectedPoints
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	CMember(class UClass*)                             GenerateAround                                              OFFSET(get<T>, {0x88, 8, 0, 0})
	SMember(FAIDataProviderIntValue)                   MaxPointsPerClusterLocation                                 OFFSET(getStruct<T>, {0x90, 56, 0, 0})
	SMember(FAIDataProviderFloatValue)                 ClusterRadius                                               OFFSET(getStruct<T>, {0xC8, 56, 0, 0})
	CMember(TWeakObjectPtr<UFortQueryData_CurvesAroundLine*>) CurvesAroundLineAsset                                OFFSET(get<T>, {0x100, 32, 0, 0})
};

/// Class /Script/FortniteAIServer.FortQueryGenerator_PointsFromNavGraph
/// Size: 0x0150 (0x000088 - 0x0001D8)
class UFortQueryGenerator_PointsFromNavGraph : public UEnvQueryGenerator_ProjectedPoints
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 472;

public:
	SMember(FAIDataProviderFloatValue)                 MinPathDistance                                             OFFSET(getStruct<T>, {0x88, 56, 0, 0})
	SMember(FAIDataProviderFloatValue)                 MaxPathDistance                                             OFFSET(getStruct<T>, {0xC0, 56, 0, 0})
	SMember(FAIDataProviderIntValue)                   Density                                                     OFFSET(getStruct<T>, {0xF8, 56, 0, 0})
	SMember(FAIDataProviderFloatValue)                 ExploreDirectionYaw                                         OFFSET(getStruct<T>, {0x130, 56, 0, 0})
	SMember(FEnvDirection)                             ExploreDirection                                            OFFSET(getStruct<T>, {0x168, 32, 0, 0})
	DMember(float)                                     ExploreAngleDot                                             OFFSET(get<float>, {0x188, 4, 0, 0})
	SMember(FAIDataProviderFloatValue)                 ExploreInnerRadius                                          OFFSET(getStruct<T>, {0x190, 56, 0, 0})
	DMember(bool)                                      bLimitExplorationDirection                                  OFFSET(get<bool>, {0x1C8, 1, 1, 0})
	DMember(bool)                                      bOnlyFlatSurface                                            OFFSET(get<bool>, {0x1C8, 1, 1, 1})
	DMember(bool)                                      bUseParameterizedDirection                                  OFFSET(get<bool>, {0x1C8, 1, 1, 2})
	DMember(bool)                                      bUseHeightCheck                                             OFFSET(get<bool>, {0x1C8, 1, 1, 3})
	DMember(bool)                                      bFilterAllowTerrain                                         OFFSET(get<bool>, {0x1C8, 1, 1, 4})
	DMember(bool)                                      bFilterAllowBuildings                                       OFFSET(get<bool>, {0x1C8, 1, 1, 5})
	DMember(bool)                                      bFilterAllowDropdown                                        OFFSET(get<bool>, {0x1C8, 1, 1, 6})
	DMember(bool)                                      bFilterAllowClimbup                                         OFFSET(get<bool>, {0x1C8, 1, 1, 7})
	DMember(bool)                                      bFilterAllowSmash                                           OFFSET(get<bool>, {0x1C9, 1, 1, 0})
	CMember(TEnumAsByte<EFortPointsFromNavGraphGoalPathDistanceFilterOperator>) PathDistanceFilterOperator         OFFSET(get<T>, {0x1CC, 1, 0, 0})
	CMember(class UClass*)                             GenerateAround                                              OFFSET(get<T>, {0x1D0, 8, 0, 0})
};

/// Class /Script/FortniteAIServer.FortQueryGenerator_PointsInVolume
/// Size: 0x0048 (0x000050 - 0x000098)
class UFortQueryGenerator_PointsInVolume : public UEnvQueryGenerator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	SMember(FAIDataProviderIntValue)                   NumberOfPoints                                              OFFSET(getStruct<T>, {0x50, 56, 0, 0})
	CMember(TEnumAsByte<EFortNamedNavmesh>)            NavMeshToUse                                                OFFSET(get<T>, {0x88, 1, 0, 0})
	CMember(class UClass*)                             GenerateIn                                                  OFFSET(get<T>, {0x90, 8, 0, 0})
};

/// Class /Script/FortniteAIServer.FortQueryGenerator_PointsOnBuildingActors
/// Size: 0x01C8 (0x000088 - 0x000250)
class UFortQueryGenerator_PointsOnBuildingActors : public UEnvQueryGenerator_ProjectedPoints
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 592;

public:
	SMember(FAIDataProviderFloatValue)                 BoundingBoxExtentXY                                         OFFSET(getStruct<T>, {0x88, 56, 0, 0})
	SMember(FAIDataProviderFloatValue)                 BoundingBoxExtentZ                                          OFFSET(getStruct<T>, {0xC0, 56, 0, 0})
	SMember(FAIDataProviderFloatValue)                 PointDensity                                                OFFSET(getStruct<T>, {0xF8, 56, 0, 0})
	SMember(FAIDataProviderIntValue)                   MaxGeneratedPoints                                          OFFSET(getStruct<T>, {0x130, 56, 0, 0})
	SMember(FFortTaggedActorOctreeFilter)              ActorLookupFilter                                           OFFSET(getStruct<T>, {0x168, 168, 0, 0})
	SMember(FAIDataProviderFloatValue)                 RandomChanceToSkip                                          OFFSET(getStruct<T>, {0x210, 56, 0, 0})
	CMember(class UClass*)                             GenerateAround                                              OFFSET(get<T>, {0x248, 8, 0, 0})
};

/// Class /Script/FortniteAIServer.FortQueryGenerator_PointsOnBuildingGrid
/// Size: 0x0080 (0x000088 - 0x000108)
class UFortQueryGenerator_PointsOnBuildingGrid : public UEnvQueryGenerator_ProjectedPoints
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:
	SMember(FAIDataProviderIntValue)                   HorizontalGridSize                                          OFFSET(getStruct<T>, {0x88, 56, 0, 0})
	SMember(FAIDataProviderIntValue)                   VerticalGridSize                                            OFFSET(getStruct<T>, {0xC0, 56, 0, 0})
	DMember(bool)                                      bStartGridFromBottom                                        OFFSET(get<bool>, {0xF8, 1, 0, 0})
	DMember(bool)                                      bUsePointInVerticalCenterOfCell                             OFFSET(get<bool>, {0xF9, 1, 0, 0})
	CMember(class UClass*)                             GenerateAround                                              OFFSET(get<T>, {0x100, 8, 0, 0})
};

/// Class /Script/FortniteAIServer.FortQueryGenerator_PointsOnWaterShoreLine
/// Size: 0x0060 (0x000088 - 0x0000E8)
class UFortQueryGenerator_PointsOnWaterShoreLine : public UEnvQueryGenerator_ProjectedPoints
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
	CMember(class UClass*)                             GenerateAround                                              OFFSET(get<T>, {0x88, 8, 0, 0})
	CMember(TWeakObjectPtr<UFortQueryData_CurvesAroundLine*>) CurvesAroundLineAsset                                OFFSET(get<T>, {0x90, 32, 0, 0})
	SMember(FAIDataProviderFloatValue)                 SegmentMaximumVerticalDegreeAngle                           OFFSET(getStruct<T>, {0xB0, 56, 0, 0})
};

/// Class /Script/FortniteAIServer.FortQueryGenerator_RandomPointsInBoundingVolume
/// Size: 0x0040 (0x000088 - 0x0000C8)
class UFortQueryGenerator_RandomPointsInBoundingVolume : public UEnvQueryGenerator_ProjectedPoints
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	CMember(class UClass*)                             GenerateIn                                                  OFFSET(get<T>, {0x88, 8, 0, 0})
	SMember(FAIDataProviderFloatValue)                 RandomPointsCount                                           OFFSET(getStruct<T>, {0x90, 56, 0, 0})
};

/// Class /Script/FortniteAIServer.FortQueryGenerator_SpecificAssignmentGoals
/// Size: 0x0040 (0x000050 - 0x000090)
class UFortQueryGenerator_SpecificAssignmentGoals : public UEnvQueryGenerator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FFortAIAssignmentIdentifier)               AssignmentIdentifier                                        OFFSET(getStruct<T>, {0x50, 48, 0, 0})
	CMember(class UFortAIAssignmentSettings*)          AssignmentSettings                                          OFFSET(get<T>, {0x80, 8, 0, 0})
	CMember(class UClass*)                             GoalProvider                                                OFFSET(get<T>, {0x88, 8, 0, 0})
};

/// Class /Script/FortniteAIServer.FortQueryGenerator_SquadMembers
/// Size: 0x0118 (0x000050 - 0x000168)
class UFortQueryGenerator_SquadMembers : public UEnvQueryGenerator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 360;

public:
	SMember(FAIDataProviderBoolValue)                  LookingForHumanPlayers                                      OFFSET(getStruct<T>, {0x50, 56, 0, 0})
	SMember(FAIDataProviderBoolValue)                  LookingForPlayerBots                                        OFFSET(getStruct<T>, {0x88, 56, 0, 0})
	SMember(FAIDataProviderBoolValue)                  LookingForNpcs                                              OFFSET(getStruct<T>, {0xC0, 56, 0, 0})
	SMember(FAIDataProviderBoolValue)                  LookingForAiPawns                                           OFFSET(getStruct<T>, {0xF8, 56, 0, 0})
	SMember(FAIDataProviderBoolValue)                  IncludeSelf                                                 OFFSET(getStruct<T>, {0x130, 56, 0, 0})
};

/// Class /Script/FortniteAIServer.FortQueryGenerator_TerrainDonut
/// Size: 0x00F0 (0x000050 - 0x000140)
class UFortQueryGenerator_TerrainDonut : public UEnvQueryGenerator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
	CMember(class UClass*)                             Center                                                      OFFSET(get<T>, {0x50, 8, 0, 0})
	SMember(FAIDataProviderFloatValue)                 Radius                                                      OFFSET(getStruct<T>, {0x58, 56, 0, 0})
	SMember(FAIDataProviderFloatValue)                 RadiusWidth                                                 OFFSET(getStruct<T>, {0x90, 56, 0, 0})
	SMember(FAIDataProviderFloatValue)                 SpacingArc                                                  OFFSET(getStruct<T>, {0xC8, 56, 0, 0})
	SMember(FAIDataProviderIntValue)                   NumRings                                                    OFFSET(getStruct<T>, {0x100, 56, 0, 0})
	DMember(bool)                                      bFilterAllowTerrain                                         OFFSET(get<bool>, {0x138, 1, 1, 0})
	DMember(bool)                                      bFilterAllowBuildings                                       OFFSET(get<bool>, {0x138, 1, 1, 1})
};

/// Class /Script/FortniteAIServer.FortQueryGenerator_ValidSpawnRiftActors
/// Size: 0x0038 (0x000050 - 0x000088)
class UFortQueryGenerator_ValidSpawnRiftActors : public UEnvQueryGenerator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FAIDataProviderIntValue)                   NumAIForGroup                                               OFFSET(getStruct<T>, {0x50, 56, 0, 0})
};

/// Class /Script/FortniteAIServer.FortQueryItemType_PointOrSlot
/// Size: 0x0000 (0x000030 - 0x000030)
class UFortQueryItemType_PointOrSlot : public UEnvQueryItemType_Point
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/FortniteAIServer.FortQueryTest_GoalBase
/// Size: 0x0070 (0x0001F8 - 0x000268)
class UFortQueryTest_GoalBase : public UEnvQueryTest
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 616;

public:
	DMember(bool)                                      bScoreEnemies                                               OFFSET(get<bool>, {0x1F8, 1, 1, 0})
	DMember(bool)                                      bScoreEncounterGoals                                        OFFSET(get<bool>, {0x1F8, 1, 1, 1})
	DMember(bool)                                      bScoreWorldGoals                                            OFFSET(get<bool>, {0x1F8, 1, 1, 2})
	DMember(bool)                                      bScoreSpecificAssignments                                   OFFSET(get<bool>, {0x1F8, 1, 1, 3})
	CMember(TArray<FFortAIAssignmentIdentifier>)       AssignmentIDs                                               OFFSET(get<T>, {0x200, 16, 0, 0})
	CMember(TArray<FFortAIAssignmentIdentifier>)       ProhibitedAssignmentIDs                                     OFFSET(get<T>, {0x210, 16, 0, 0})
	SMember(FGameplayTagQuery)                         GoalActorTagQuery                                           OFFSET(getStruct<T>, {0x220, 72, 0, 0})
};

/// Class /Script/FortniteAIServer.FortQueryTest_AssignmentTypeInterest
/// Size: 0x01C0 (0x000268 - 0x000428)
class UFortQueryTest_AssignmentTypeInterest : public UFortQueryTest_GoalBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1064;

public:
	SMember(FAIDataProviderFloatValue)                 InvalidTypeStartInterest                                    OFFSET(getStruct<T>, {0x268, 56, 0, 0})
	SMember(FAIDataProviderFloatValue)                 InvalidTypeEndInterest                                      OFFSET(getStruct<T>, {0x2A0, 56, 0, 0})
	SMember(FAIDataProviderFloatValue)                 InvalidTypeTimeBeforeLerp                                   OFFSET(getStruct<T>, {0x2D8, 56, 0, 0})
	SMember(FAIDataProviderFloatValue)                 InvalidTypeLerpDuration                                     OFFSET(getStruct<T>, {0x310, 56, 0, 0})
	SMember(FAIDataProviderFloatValue)                 ValidTypeStartInterest                                      OFFSET(getStruct<T>, {0x348, 56, 0, 0})
	SMember(FAIDataProviderFloatValue)                 ValidTypeEndInterest                                        OFFSET(getStruct<T>, {0x380, 56, 0, 0})
	SMember(FAIDataProviderFloatValue)                 ValidTypeTimeBeforeLerp                                     OFFSET(getStruct<T>, {0x3B8, 56, 0, 0})
	SMember(FAIDataProviderFloatValue)                 ValidTypeLerpDuration                                       OFFSET(getStruct<T>, {0x3F0, 56, 0, 0})
};

/// Class /Script/FortniteAIServer.FortQueryTest_BuildingCriteria
/// Size: 0x0650 (0x000268 - 0x0008B8)
class UFortQueryTest_BuildingCriteria : public UFortQueryTest_GoalBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2232;

public:
	SMember(FAIDataProviderFloatValue)                 ScoreForGroundSupportedFloor                                OFFSET(getStruct<T>, {0x268, 56, 0, 0})
	SMember(FAIDataProviderFloatValue)                 ScoreForBeingGroundSupported                                OFFSET(getStruct<T>, {0x2A0, 56, 0, 0})
	SMember(FAIDataProviderFloatValue)                 ScoreForTraps                                               OFFSET(getStruct<T>, {0x2D8, 56, 0, 0})
	SMember(FAIDataProviderFloatValue)                 ScoreForWalls                                               OFFSET(getStruct<T>, {0x310, 56, 0, 0})
	SMember(FAIDataProviderFloatValue)                 ScoreForNavigableOpening                                    OFFSET(getStruct<T>, {0x348, 56, 0, 0})
	SMember(FFortAIAssignmentIdentifier)               RootAssignmentID                                            OFFSET(getStruct<T>, {0x380, 48, 0, 0})
	SMember(FAIDataProviderBoolValue)                  bPreferCloserToRootAssignment                               OFFSET(getStruct<T>, {0x3B0, 56, 0, 0})
	SMember(FAIDataProviderFloatValue)                 ScoreForDistanceFromClosestRootAssignmentGoal               OFFSET(getStruct<T>, {0x3E8, 56, 0, 0})
	SMember(FAIDataProviderFloatValue)                 MinDistanceForDistanceScoring                               OFFSET(getStruct<T>, {0x420, 56, 0, 0})
	SMember(FAIDataProviderFloatValue)                 MaxDistanceForDistanceScoring                               OFFSET(getStruct<T>, {0x458, 56, 0, 0})
	SMember(FAIDataProviderFloatValue)                 MaxHealthScore                                              OFFSET(getStruct<T>, {0x490, 56, 0, 0})
	SMember(FAIDataProviderBoolValue)                  bPreferHigherHealth                                         OFFSET(getStruct<T>, {0x4C8, 56, 0, 0})
	SMember(FAIDataProviderFloatValue)                 ClampMaxHealthValue                                         OFFSET(getStruct<T>, {0x500, 56, 0, 0})
	SMember(FAIDataProviderFloatValue)                 ClampMinHealthValue                                         OFFSET(getStruct<T>, {0x538, 56, 0, 0})
	SMember(FAIDataProviderBoolValue)                  bPreferHigherHealthPercentage                               OFFSET(getStruct<T>, {0x570, 56, 0, 0})
	SMember(FAIDataProviderFloatValue)                 MaxHealthPercentageScore                                    OFFSET(getStruct<T>, {0x5A8, 56, 0, 0})
	SMember(FAIDataProviderBoolValue)                  bWantsBuildingRepairableByOwner                             OFFSET(getStruct<T>, {0x5E0, 56, 0, 0})
	SMember(FAIDataProviderFloatValue)                 RepairableBuildingScore                                     OFFSET(getStruct<T>, {0x618, 56, 0, 0})
	SMember(FAIDataProviderFloatValue)                 NotRepairableBuildingScore                                  OFFSET(getStruct<T>, {0x650, 56, 0, 0})
	SMember(FAIDataProviderFloatValue)                 NeedsRepairBuildingScore                                    OFFSET(getStruct<T>, {0x688, 56, 0, 0})
	SMember(FAIDataProviderFloatValue)                 DoesntNeedsRepairBuildingScore                              OFFSET(getStruct<T>, {0x6C0, 56, 0, 0})
	SMember(FAIDataProviderBoolValue)                  bWantsDamagedByFriendly                                     OFFSET(getStruct<T>, {0x6F8, 56, 0, 0})
	SMember(FAIDataProviderFloatValue)                 DamagedByFriendlyMaxLifespan                                OFFSET(getStruct<T>, {0x730, 56, 0, 0})
	SMember(FAIDataProviderFloatValue)                 DamagedByFriendlyMinDamage                                  OFFSET(getStruct<T>, {0x768, 56, 0, 0})
	SMember(FAIDataProviderFloatValue)                 DamagedByFriendlyScore                                      OFFSET(getStruct<T>, {0x7A0, 56, 0, 0})
	SMember(FAIDataProviderBoolValue)                  bWantsDamagedByEnemy                                        OFFSET(getStruct<T>, {0x7D8, 56, 0, 0})
	SMember(FAIDataProviderFloatValue)                 DamagedByEnemyMaxLifespan                                   OFFSET(getStruct<T>, {0x810, 56, 0, 0})
	SMember(FAIDataProviderFloatValue)                 DamagedByEnemyMinDamage                                     OFFSET(getStruct<T>, {0x848, 56, 0, 0})
	SMember(FAIDataProviderFloatValue)                 DamagedByEnemyScore                                         OFFSET(getStruct<T>, {0x880, 56, 0, 0})
};

/// Class /Script/FortniteAIServer.FortQueryTest_CanAttackTarget
/// Size: 0x0000 (0x000268 - 0x000268)
class UFortQueryTest_CanAttackTarget : public UFortQueryTest_GoalBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 616;

public:
};

/// Class /Script/FortniteAIServer.FortQueryTest_CanBeDamaged
/// Size: 0x0000 (0x000268 - 0x000268)
class UFortQueryTest_CanBeDamaged : public UFortQueryTest_GoalBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 616;

public:
};

/// Class /Script/FortniteAIServer.FortQueryTest_CanHitWithGameplayAbility
/// Size: 0x0030 (0x0001F8 - 0x000228)
class UFortQueryTest_CanHitWithGameplayAbility : public UEnvQueryTest
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 552;

public:
	CMember(class UClass*)                             AIsUsingAbility                                             OFFSET(get<T>, {0x1F8, 8, 0, 0})
	CMember(class UClass*)                             AbilityTargets                                              OFFSET(get<T>, {0x200, 8, 0, 0})
	SMember(FGameplayTagContainer)                     GameplayAbilityTag                                          OFFSET(getStruct<T>, {0x208, 32, 0, 0})
};

/// Class /Script/FortniteAIServer.FortQueryTest_CurieState
/// Size: 0x0048 (0x0001F8 - 0x000240)
class UFortQueryTest_CurieState : public UEnvQueryTest
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 576;

public:
	SMember(FGameplayTagQuery)                         CurieStateQuery                                             OFFSET(getStruct<T>, {0x1F8, 72, 0, 0})
};

/// Class /Script/FortniteAIServer.FortQueryTest_DecoyDistance
/// Size: 0x0008 (0x0001F8 - 0x000200)
class UFortQueryTest_DecoyDistance : public UEnvQueryTest
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 512;

public:
	CMember(class UClass*)                             DistanceTo                                                  OFFSET(get<T>, {0x1F8, 8, 0, 0})
};

/// Class /Script/FortniteAIServer.FortQueryTest_DeltaDistance
/// Size: 0x0010 (0x0001F8 - 0x000208)
class UFortQueryTest_DeltaDistance : public UEnvQueryTest
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 520;

public:
	CMember(class UClass*)                             LocationProviderContext                                     OFFSET(get<T>, {0x1F8, 8, 0, 0})
	DMember(bool)                                      bUseDistance2D                                              OFFSET(get<bool>, {0x200, 1, 0, 0})
};

/// Class /Script/FortniteAIServer.FortQueryTest_DistanceToActorBound
/// Size: 0x0010 (0x0001F8 - 0x000208)
class UFortQueryTest_DistanceToActorBound : public UEnvQueryTest
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 520;

public:
	CMember(class UClass*)                             DistanceTo                                                  OFFSET(get<T>, {0x1F8, 8, 0, 0})
	DMember(bool)                                      bUse2DDistance                                              OFFSET(get<bool>, {0x200, 1, 0, 0})
};

/// Class /Script/FortniteAIServer.FortQueryTest_DistanceToIndestructibleBuilding
/// Size: 0x0000 (0x0001F8 - 0x0001F8)
class UFortQueryTest_DistanceToIndestructibleBuilding : public UEnvQueryTest
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 504;

public:
};

/// Class /Script/FortniteAIServer.FortQueryTest_EnvironmentalDanger
/// Size: 0x0008 (0x0001F8 - 0x000200)
class UFortQueryTest_EnvironmentalDanger : public UEnvQueryTest
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 512;

public:
	DMember(bool)                                      bUse3DBoundsCheck                                           OFFSET(get<bool>, {0x1F8, 1, 0, 0})
	SMember(FGameplayTag)                              DangerSourceActorRegistryTag                                OFFSET(getStruct<T>, {0x1FC, 4, 0, 0})
};

/// Class /Script/FortniteAIServer.FortQueryTest_GameplayTagsPerDifficulty
/// Size: 0x0010 (0x0001F8 - 0x000208)
class UFortQueryTest_GameplayTagsPerDifficulty : public UEnvQueryTest
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 520;

public:
	CMember(TArray<FFortGameplayTagQueryPerDifficulty>) TagQueriesPerDifficulty                                    OFFSET(get<T>, {0x1F8, 16, 0, 0})
};

/// Class /Script/FortniteAIServer.FortQueryTest_GoalActorDot
/// Size: 0x0018 (0x000268 - 0x000280)
class UFortQueryTest_GoalActorDot : public UFortQueryTest_GoalBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 640;

public:
	CMember(class UClass*)                             LineATo                                                     OFFSET(get<T>, {0x268, 8, 0, 0})
	CMember(class UClass*)                             LineBTo                                                     OFFSET(get<T>, {0x270, 8, 0, 0})
	CMember(EFortTestGoalActorDot)                     TestMode                                                    OFFSET(get<T>, {0x278, 1, 0, 0})
	DMember(bool)                                      bAbsoluteValue                                              OFFSET(get<bool>, {0x279, 1, 0, 0})
};

/// Class /Script/FortniteAIServer.FortQueryTest_GoalActorTimeSinceSpawn
/// Size: 0x0000 (0x000268 - 0x000268)
class UFortQueryTest_GoalActorTimeSinceSpawn : public UFortQueryTest_GoalBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 616;

public:
};

/// Class /Script/FortniteAIServer.FortQueryTest_GoalDiscouragement
/// Size: 0x0038 (0x000268 - 0x0002A0)
class UFortQueryTest_GoalDiscouragement : public UFortQueryTest_GoalBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 672;

public:
	SMember(FAIDataProviderBoolValue)                  DisableDiscouragementWhenUndermining                        OFFSET(getStruct<T>, {0x268, 56, 0, 0})
};

/// Class /Script/FortniteAIServer.FortQueryTest_GoalDistance
/// Size: 0x0018 (0x000268 - 0x000280)
class UFortQueryTest_GoalDistance : public UFortQueryTest_GoalBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 640;

public:
	CMember(EDistanceMode)                             DistanceMode                                                OFFSET(get<T>, {0x268, 1, 0, 0})
	CMember(class UClass*)                             DistanceTo                                                  OFFSET(get<T>, {0x270, 8, 0, 0})
	CMember(TEnumAsByte<EEnvTestDistance>)             TestMode                                                    OFFSET(get<T>, {0x278, 1, 0, 0})
};

/// Class /Script/FortniteAIServer.FortQueryTest_GoalDistanceRanges
/// Size: 0x0028 (0x000268 - 0x000290)
class UFortQueryTest_GoalDistanceRanges : public UFortQueryTest_GoalBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 656;

public:
	CMember(EDistanceMode)                             DistanceMode                                                OFFSET(get<T>, {0x268, 1, 0, 0})
	CMember(class UClass*)                             DistanceTo                                                  OFFSET(get<T>, {0x270, 8, 0, 0})
	CMember(TEnumAsByte<EEnvTestDistance>)             ScreeningTestMode                                           OFFSET(get<T>, {0x278, 1, 0, 0})
	CMember(TEnumAsByte<EEnvTestDistance>)             TestMode                                                    OFFSET(get<T>, {0x279, 1, 0, 0})
	CMember(TArray<FGoalDistanceData>)                 GoalDistanceDataRanges                                      OFFSET(get<T>, {0x280, 16, 0, 0})
};

/// Class /Script/FortniteAIServer.FortQueryTest_GoalFrustrationDiscouragement
/// Size: 0x0000 (0x000268 - 0x000268)
class UFortQueryTest_GoalFrustrationDiscouragement : public UFortQueryTest_GoalBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 616;

public:
};

/// Class /Script/FortniteAIServer.FortQueryTest_GoalGameplayTags
/// Size: 0x0058 (0x000268 - 0x0002C0)
class UFortQueryTest_GoalGameplayTags : public UFortQueryTest_GoalBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 704;

public:
	DMember(bool)                                      bShouldLookupQueryByTag                                     OFFSET(get<bool>, {0x268, 1, 0, 0})
	SMember(FGameplayTagQuery)                         TagQueryToMatch                                             OFFSET(getStruct<T>, {0x270, 72, 0, 0})
	SMember(FGameplayTag)                              QueryLookupTag                                              OFFSET(getStruct<T>, {0x2B8, 4, 0, 0})
	DMember(bool)                                      bShouldPassWhenQueryNotFound                                OFFSET(get<bool>, {0x2BC, 1, 0, 0})
	DMember(bool)                                      bRequireAllProvidedTagQueriesPass                           OFFSET(get<bool>, {0x2BD, 1, 0, 0})
};

/// Class /Script/FortniteAIServer.FortQueryTest_GoalMarkedByPlayer
/// Size: 0x0080 (0x000268 - 0x0002E8)
class UFortQueryTest_GoalMarkedByPlayer : public UFortQueryTest_GoalBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 744;

public:
	SMember(FGameplayTagQuery)                         OwnerTagQuery                                               OFFSET(getStruct<T>, {0x268, 72, 0, 0})
	SMember(FAIDataProviderBoolValue)                  OnlyConverterMarkedTargets                                  OFFSET(getStruct<T>, {0x2B0, 56, 0, 0})
};

/// Class /Script/FortniteAIServer.FortQueryTest_GoalNumberOfAIAssigned
/// Size: 0x0008 (0x000268 - 0x000270)
class UFortQueryTest_GoalNumberOfAIAssigned : public UFortQueryTest_GoalBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 624;

public:
	CMember(ECountAIAssignedToType)                    TypeOfMatchToCount                                          OFFSET(get<T>, {0x268, 1, 0, 0})
};

/// Class /Script/FortniteAIServer.FortQueryTest_GoalOverallDamageCaused
/// Size: 0x0000 (0x000268 - 0x000268)
class UFortQueryTest_GoalOverallDamageCaused : public UFortQueryTest_GoalBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 616;

public:
};

/// Class /Script/FortniteAIServer.FortQueryTest_GoalPickupFilter
/// Size: 0x0008 (0x000268 - 0x000270)
class UFortQueryTest_GoalPickupFilter : public UFortQueryTest_GoalBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 624;

public:
	DMember(float)                                     MaxLifetime                                                 OFFSET(get<float>, {0x268, 4, 0, 0})
	CMember(EFortPickupSpawnSource)                    RequiredPickupSpawnSource                                   OFFSET(get<T>, {0x26C, 1, 0, 0})
};

/// Class /Script/FortniteAIServer.FortQueryTest_GoalProject
/// Size: 0x0038 (0x000268 - 0x0002A0)
class UFortQueryTest_GoalProject : public UFortQueryTest_GoalBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 672;

public:
	SMember(FEnvTraceData)                             ProjectionData                                              OFFSET(getStruct<T>, {0x268, 56, 0, 0})
};

/// Class /Script/FortniteAIServer.FortQueryTest_GoalStickiness
/// Size: 0x0118 (0x000268 - 0x000380)
class UFortQueryTest_GoalStickiness : public UFortQueryTest_GoalBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 896;

public:
	SMember(FAIDataProviderFloatValue)                 StartValueForGoal                                           OFFSET(getStruct<T>, {0x268, 56, 0, 0})
	SMember(FAIDataProviderFloatValue)                 EndValueForGoal                                             OFFSET(getStruct<T>, {0x2A0, 56, 0, 0})
	SMember(FAIDataProviderFloatValue)                 TimeBeforeValueLerp                                         OFFSET(getStruct<T>, {0x2D8, 56, 0, 0})
	SMember(FAIDataProviderFloatValue)                 ValueLerpDuration                                           OFFSET(getStruct<T>, {0x310, 56, 0, 0})
	SMember(FAIDataProviderBoolValue)                  ApplyStickinessToAllGoalsWithSameActor                      OFFSET(getStruct<T>, {0x348, 56, 0, 0})
};

/// Class /Script/FortniteAIServer.FortQueryTest_GoalType
/// Size: 0x0000 (0x000268 - 0x000268)
class UFortQueryTest_GoalType : public UFortQueryTest_GoalBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 616;

public:
};

/// Class /Script/FortniteAIServer.FortQueryTest_GoalWithinTetheredBounds
/// Size: 0x0000 (0x000268 - 0x000268)
class UFortQueryTest_GoalWithinTetheredBounds : public UFortQueryTest_GoalBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 616;

public:
};

/// Class /Script/FortniteAIServer.FortQueryTest_HasNearbyBuildings
/// Size: 0x0010 (0x0001F8 - 0x000208)
class UFortQueryTest_HasNearbyBuildings : public UEnvQueryTest
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 520;

public:
	DMember(bool)                                      bIncludeCenter                                              OFFSET(get<bool>, {0x1F8, 1, 1, 0})
	DMember(bool)                                      bIncludeFloors                                              OFFSET(get<bool>, {0x1F8, 1, 1, 1})
	DMember(bool)                                      bIncludeFloorsAbove                                         OFFSET(get<bool>, {0x1F8, 1, 1, 2})
	DMember(bool)                                      bIncludeWalls                                               OFFSET(get<bool>, {0x1F8, 1, 1, 3})
	DMember(int32_t)                                   ExtentXY                                                    OFFSET(get<int32_t>, {0x1FC, 4, 0, 0})
	DMember(int32_t)                                   ExtentZ                                                     OFFSET(get<int32_t>, {0x200, 4, 0, 0})
};

/// Class /Script/FortniteAIServer.FortQueryTest_HasNearbyEncounterGoals
/// Size: 0x0040 (0x0001F8 - 0x000238)
class UFortQueryTest_HasNearbyEncounterGoals : public UEnvQueryTest
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
	DMember(bool)                                      bOnlyActiveEncounters                                       OFFSET(get<bool>, {0x1F8, 1, 1, 0})
	SMember(FAIDataProviderFloatValue)                 TestDistance                                                OFFSET(getStruct<T>, {0x200, 56, 0, 0})
};

/// Class /Script/FortniteAIServer.FortQueryTest_Health
/// Size: 0x0008 (0x0001F8 - 0x000200)
class UFortQueryTest_Health : public UEnvQueryTest
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 512;

public:
	DMember(bool)                                      bUsePercentHealth                                           OFFSET(get<bool>, {0x1F8, 1, 0, 0})
};

/// Class /Script/FortniteAIServer.FortQueryTest_HealthAndShield
/// Size: 0x00F8 (0x0001F8 - 0x0002F0)
class UFortQueryTest_HealthAndShield : public UEnvQueryTest
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 752;

public:
	DMember(bool)                                      bConsiderHealth                                             OFFSET(get<bool>, {0x1F8, 1, 0, 0})
	SMember(FAIDataProviderFloatValue)                 HealthMin                                                   OFFSET(getStruct<T>, {0x200, 56, 0, 0})
	SMember(FAIDataProviderFloatValue)                 HealthMax                                                   OFFSET(getStruct<T>, {0x238, 56, 0, 0})
	DMember(bool)                                      bHealthAsPercent                                            OFFSET(get<bool>, {0x270, 1, 0, 0})
	DMember(bool)                                      bConsiderShield                                             OFFSET(get<bool>, {0x271, 1, 0, 0})
	SMember(FAIDataProviderFloatValue)                 ShieldMin                                                   OFFSET(getStruct<T>, {0x278, 56, 0, 0})
	SMember(FAIDataProviderFloatValue)                 ShieldMax                                                   OFFSET(getStruct<T>, {0x2B0, 56, 0, 0})
	DMember(bool)                                      bShieldAsPercent                                            OFFSET(get<bool>, {0x2E8, 1, 0, 0})
};

/// Class /Script/FortniteAIServer.FortQueryTest_HotspotSlotOrientation
/// Size: 0x0040 (0x0001F8 - 0x000238)
class UFortQueryTest_HotspotSlotOrientation : public UEnvQueryTest
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
	CMember(class UClass*)                             FaceToward                                                  OFFSET(get<T>, {0x1F8, 8, 0, 0})
	SMember(FAIDataProviderFloatValue)                 DotThreshold                                                OFFSET(getStruct<T>, {0x200, 56, 0, 0})
};

/// Class /Script/FortniteAIServer.FortQueryTest_HotspotSlotState
/// Size: 0x0008 (0x0001F8 - 0x000200)
class UFortQueryTest_HotspotSlotState : public UEnvQueryTest
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 512;

public:
	CMember(EAIHotSpotSlot)                            SlotState                                                   OFFSET(get<T>, {0x1F8, 1, 0, 0})
};

/// Class /Script/FortniteAIServer.FortQueryTest_InfluenceScore
/// Size: 0x0000 (0x0001F8 - 0x0001F8)
class UFortQueryTest_InfluenceScore : public UEnvQueryTest
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 504;

public:
};

/// Class /Script/FortniteAIServer.FortQueryTest_InsideAIBotLeash
/// Size: 0x0000 (0x0001F8 - 0x0001F8)
class UFortQueryTest_InsideAIBotLeash : public UEnvQueryTest
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 504;

public:
};

/// Class /Script/FortniteAIServer.FortQueryTest_InsideAthenaLeash
/// Size: 0x0000 (0x0001F8 - 0x0001F8)
class UFortQueryTest_InsideAthenaLeash : public UEnvQueryTest
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 504;

public:
};

/// Class /Script/FortniteAIServer.FortQueryTest_InsideAthenaSafeZone
/// Size: 0x0048 (0x0001F8 - 0x000240)
class UFortQueryTest_InsideAthenaSafeZone : public UEnvQueryTest
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 576;

public:
	DMember(bool)                                      bUseCurrentSafeZoneIndicatorRadius                          OFFSET(get<bool>, {0x1F8, 1, 0, 0})
	SMember(FAIDataProviderIntValue)                   SafeZoneIndex                                               OFFSET(getStruct<T>, {0x200, 56, 0, 0})
	DMember(bool)                                      bNextSafeZone                                               OFFSET(get<bool>, {0x238, 1, 0, 0})
};

/// Class /Script/FortniteAIServer.FortQueryTest_InsideBuilding
/// Size: 0x0000 (0x0001F8 - 0x0001F8)
class UFortQueryTest_InsideBuilding : public UEnvQueryTest
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 504;

public:
};

/// Class /Script/FortniteAIServer.FortQueryTest_InsideWater
/// Size: 0x0008 (0x0001F8 - 0x000200)
class UFortQueryTest_InsideWater : public UEnvQueryTest
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 512;

public:
	DMember(float)                                     TestRadius                                                  OFFSET(get<float>, {0x1F8, 4, 0, 0})
};

/// Class /Script/FortniteAIServer.FortQueryTest_IsCloseToHotspotSlot
/// Size: 0x0048 (0x0001F8 - 0x000240)
class UFortQueryTest_IsCloseToHotspotSlot : public UEnvQueryTest
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 576;

public:
	CMember(class UClass*)                             HotspotClass                                                OFFSET(get<T>, {0x1F8, 8, 0, 0})
	SMember(FAIDataProviderFloatValue)                 Radius                                                      OFFSET(getStruct<T>, {0x200, 56, 0, 0})
	DMember(bool)                                      bIgnoreItemsWithSlotData                                    OFFSET(get<bool>, {0x238, 1, 0, 0})
};

/// Class /Script/FortniteAIServer.FortQueryTest_IsCloseToPatrolWard
/// Size: 0x0008 (0x0001F8 - 0x000200)
class UFortQueryTest_IsCloseToPatrolWard : public UEnvQueryTest
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 512;

public:
	CMember(EWardAffectType)                           WardEffectTypeFilter                                        OFFSET(get<T>, {0x1F8, 1, 0, 0})
};

/// Class /Script/FortniteAIServer.FortQueryTest_IsGoalForAssignment
/// Size: 0x0038 (0x0001F8 - 0x000230)
class UFortQueryTest_IsGoalForAssignment : public UEnvQueryTest
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 560;

public:
	DMember(bool)                                      bRetrieveRootAssignmentFromOwner                            OFFSET(get<bool>, {0x1F8, 1, 0, 0})
	SMember(FFortAIAssignmentIdentifier)               RootAssignmentID                                            OFFSET(getStruct<T>, {0x200, 48, 0, 0})
};

/// Class /Script/FortniteAIServer.FortQueryTest_IsGoalHostile
/// Size: 0x00B8 (0x000268 - 0x000320)
class UFortQueryTest_IsGoalHostile : public UFortQueryTest_GoalBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 800;

public:
	SMember(FGameplayTagQuery)                         OwnerTagQuery                                               OFFSET(getStruct<T>, {0x268, 72, 0, 0})
	SMember(FGameplayTagQuery)                         EnemyPawnTagsToConsider                                     OFFSET(getStruct<T>, {0x2B0, 72, 0, 0})
	SMember(FGameplayTagContainer)                     BuildingTagsToConsider                                      OFFSET(getStruct<T>, {0x2F8, 32, 0, 0})
	DMember(bool)                                      bConsiderDefenders                                          OFFSET(get<bool>, {0x318, 1, 0, 0})
};

/// Class /Script/FortniteAIServer.FortQueryTest_IsInLeaderLOS
/// Size: 0x0058 (0x0001F8 - 0x000250)
class UFortQueryTest_IsInLeaderLOS : public UEnvQueryTest
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 592;

public:
	SMember(FGameplayTagQuery)                         OwnerTagQuery                                               OFFSET(getStruct<T>, {0x1F8, 72, 0, 0})
	DMember(bool)                                      bRequireLOSRayCast                                          OFFSET(get<bool>, {0x240, 1, 0, 0})
	DMember(float)                                     RayCastLeaderVerticalOffset                                 OFFSET(get<float>, {0x244, 4, 0, 0})
	DMember(float)                                     RayCastItemVerticalOffset                                   OFFSET(get<float>, {0x248, 4, 0, 0})
	DMember(float)                                     MinDotProduct                                               OFFSET(get<float>, {0x24C, 4, 0, 0})
};

/// Class /Script/FortniteAIServer.FortQueryTest_IsObstructed
/// Size: 0x00E0 (0x0002E0 - 0x0003C0)
class UFortQueryTest_IsObstructed : public UEnvQueryTest_Trace
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 960;

public:
	SMember(FAIDataProviderBoolValue)                  OverrideContextLocationXWithItemLocationX                   OFFSET(getStruct<T>, {0x2E0, 56, 0, 0})
	SMember(FAIDataProviderBoolValue)                  OverrideContextLocationYWithItemLocationY                   OFFSET(getStruct<T>, {0x318, 56, 0, 0})
	SMember(FAIDataProviderBoolValue)                  OverrideContextLocationZWithItemLocationZ                   OFFSET(getStruct<T>, {0x350, 56, 0, 0})
	SMember(FAIDataProviderBoolValue)                  OverrideItemLocationZWithContextLocationZ                   OFFSET(getStruct<T>, {0x388, 56, 0, 0})
};

/// Class /Script/FortniteAIServer.FortQueryTest_IsObstructedOverlap
/// Size: 0x00A8 (0x0002E0 - 0x000388)
class UFortQueryTest_IsObstructedOverlap : public UEnvQueryTest_Trace
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 904;

public:
	SMember(FAIDataProviderBoolValue)                  OverrideContextLocationXWithItemLocationX                   OFFSET(getStruct<T>, {0x2E0, 56, 0, 0})
	SMember(FAIDataProviderBoolValue)                  OverrideContextLocationYWithItemLocationY                   OFFSET(getStruct<T>, {0x318, 56, 0, 0})
	SMember(FAIDataProviderBoolValue)                  OverrideContextLocationZWithItemLocationZ                   OFFSET(getStruct<T>, {0x350, 56, 0, 0})
};

/// Class /Script/FortniteAIServer.FortQueryTest_MissionGameplayTagMatch
/// Size: 0x0068 (0x0001F8 - 0x000260)
class UFortQueryTest_MissionGameplayTagMatch : public UEnvQueryTest
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 608;

public:
	SMember(FGameplayTagQuery)                         MissionPlacementActorTagQuery                               OFFSET(getStruct<T>, {0x1F8, 72, 0, 0})
	SMember(FGameplayTagContainer)                     GameplayTagsToMatch                                         OFFSET(getStruct<T>, {0x240, 32, 0, 0})
};

/// Class /Script/FortniteAIServer.FortQueryTest_MissionSameMap
/// Size: 0x0048 (0x0001F8 - 0x000240)
class UFortQueryTest_MissionSameMap : public UEnvQueryTest
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 576;

public:
	SMember(FGameplayTagQuery)                         MissionPlacementActorTagQuery                               OFFSET(getStruct<T>, {0x1F8, 72, 0, 0})
};

/// Class /Script/FortniteAIServer.FortQueryTest_NavGraphDistance
/// Size: 0x0008 (0x0001F8 - 0x000200)
class UFortQueryTest_NavGraphDistance : public UEnvQueryTest
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 512;

public:
	CMember(class UClass*)                             DistanceTo                                                  OFFSET(get<T>, {0x1F8, 8, 0, 0})
};

/// Class /Script/FortniteAIServer.FortQueryTest_OnFlatSurface
/// Size: 0x0018 (0x0001F8 - 0x000210)
class UFortQueryTest_OnFlatSurface : public UEnvQueryTest
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 528;

public:
	DMember(float)                                     Radius                                                      OFFSET(get<float>, {0x1F8, 4, 0, 0})
	DMember(float)                                     ToleranceZ                                                  OFFSET(get<float>, {0x1FC, 4, 0, 0})
	DMember(float)                                     TraceOffsetUp                                               OFFSET(get<float>, {0x200, 4, 0, 0})
	DMember(float)                                     TraceOffsetDown                                             OFFSET(get<float>, {0x204, 4, 0, 0})
	DMember(uint32_t)                                  NumberOfIteration                                           OFFSET(get<uint32_t>, {0x208, 4, 0, 0})
};

/// Class /Script/FortniteAIServer.FortQueryTest_OnFlatSurfaceNoNavMesh
/// Size: 0x0020 (0x0001F8 - 0x000218)
class UFortQueryTest_OnFlatSurfaceNoNavMesh : public UEnvQueryTest
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 536;

public:
	DMember(float)                                     Radius                                                      OFFSET(get<float>, {0x1F8, 4, 0, 0})
	DMember(float)                                     ZTolerance                                                  OFFSET(get<float>, {0x1FC, 4, 0, 0})
	DMember(float)                                     NormalTolerance                                             OFFSET(get<float>, {0x200, 4, 0, 0})
	DMember(float)                                     TraceOffset                                                 OFFSET(get<float>, {0x204, 4, 0, 0})
	CMember(TArray<class UClass*>)                     ActorClassesToIgnoreInTrace                                 OFFSET(get<T>, {0x208, 16, 0, 0})
};

/// Class /Script/FortniteAIServer.FortQueryTest_PathfindingBatch
/// Size: 0x0008 (0x0002B8 - 0x0002C0)
class UFortQueryTest_PathfindingBatch : public UEnvQueryTest_PathfindingBatch
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 704;

public:
	SMember(FGameplayTag)                              NavFilterTag                                                OFFSET(getStruct<T>, {0x2B8, 4, 0, 0})
};

/// Class /Script/FortniteAIServer.FortQueryTest_PawnHealth
/// Size: 0x0008 (0x000268 - 0x000270)
class UFortQueryTest_PawnHealth : public UFortQueryTest_GoalBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 624;

public:
	DMember(bool)                                      bUsePercentHealth                                           OFFSET(get<bool>, {0x268, 1, 0, 0})
};

/// Class /Script/FortniteAIServer.FortQueryTest_PawnIsDBNO
/// Size: 0x0000 (0x000268 - 0x000268)
class UFortQueryTest_PawnIsDBNO : public UFortQueryTest_GoalBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 616;

public:
};

/// Class /Script/FortniteAIServer.FortQueryTest_PerceptionAge
/// Size: 0x0010 (0x0001F8 - 0x000208)
class UFortQueryTest_PerceptionAge : public UEnvQueryTest
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 520;

public:
	CMember(TEnumAsByte<ECorePerceptionTypes>)         Sense                                                       OFFSET(get<T>, {0x1F8, 1, 0, 0})
	CMember(class UClass*)                             SenseClass                                                  OFFSET(get<T>, {0x200, 8, 0, 0})
};

/// Class /Script/FortniteAIServer.FortQueryTest_PerceptionAll
/// Size: 0x0210 (0x000268 - 0x000478)
class UFortQueryTest_PerceptionAll : public UFortQueryTest_GoalBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1144;

public:
	SMember(FAIDataProviderFloatValue)                 SenseScores                                                 OFFSET(getStruct<T>, {0x268, 336, 0, 0})
	CMember(TMap<UClass*, FAIDataProviderFloatValue>)  AdditionalSenseScores                                       OFFSET(get<T>, {0x3B8, 80, 0, 0})
	SMember(FAIDataProviderFloatValue)                 MinSenseAge                                                 OFFSET(getStruct<T>, {0x408, 56, 0, 0})
	SMember(FAIDataProviderFloatValue)                 MaxSenseAge                                                 OFFSET(getStruct<T>, {0x440, 56, 0, 0})
};

/// Class /Script/FortniteAIServer.FortQueryTest_PerceptionExists
/// Size: 0x0010 (0x0001F8 - 0x000208)
class UFortQueryTest_PerceptionExists : public UEnvQueryTest
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 520;

public:
	CMember(TEnumAsByte<ECorePerceptionTypes>)         Sense                                                       OFFSET(get<T>, {0x1F8, 1, 0, 0})
	CMember(class UClass*)                             SenseClass                                                  OFFSET(get<T>, {0x200, 8, 0, 0})
};

/// Class /Script/FortniteAIServer.FortQueryTest_PickupDropper
/// Size: 0x0118 (0x000268 - 0x000380)
class UFortQueryTest_PickupDropper : public UFortQueryTest_GoalBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 896;

public:
	SMember(FAIDataProviderFloatValue)                 ValueConverterDroppedPickup                                 OFFSET(getStruct<T>, {0x268, 56, 0, 0})
	SMember(FAIDataProviderFloatValue)                 ValueOtherDroppedPickupInitial                              OFFSET(getStruct<T>, {0x2A0, 56, 0, 0})
	SMember(FAIDataProviderFloatValue)                 ValueOtherDroppedPickupFinal                                OFFSET(getStruct<T>, {0x2D8, 56, 0, 0})
	SMember(FAIDataProviderFloatValue)                 TimeOtherDroppedPickupFinal                                 OFFSET(getStruct<T>, {0x310, 56, 0, 0})
	SMember(FAIDataProviderBoolValue)                  LerpFromInitialToFinal                                      OFFSET(getStruct<T>, {0x348, 56, 0, 0})
};

/// Class /Script/FortniteAIServer.FortQueryTest_PointInBuildingFoundation
/// Size: 0x0028 (0x0001F8 - 0x000220)
class UFortQueryTest_PointInBuildingFoundation : public UEnvQueryTest
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 544;

public:
	CMember(class UClass*)                             BuildingFoundationContext                                   OFFSET(get<T>, {0x1F8, 8, 0, 0})
	CMember(class UClass*)                             BuildingFoundationClass                                     OFFSET(get<T>, {0x200, 8, 0, 0})
	SMember(FVector)                                   BoundingBoxScale                                            OFFSET(getStruct<T>, {0x208, 24, 0, 0})
};

/// Class /Script/FortniteAIServer.FortQueryTest_PrimaryAssignment
/// Size: 0x0120 (0x000268 - 0x000388)
class UFortQueryTest_PrimaryAssignment : public UFortQueryTest_GoalBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 904;

public:
	DMember(bool)                                      bUseItemActorLocation                                       OFFSET(get<bool>, {0x268, 1, 0, 0})
	SMember(FAIDataProviderFloatValue)                 DistanceClose                                               OFFSET(getStruct<T>, {0x270, 56, 0, 0})
	SMember(FAIDataProviderFloatValue)                 DistanceFar                                                 OFFSET(getStruct<T>, {0x2A8, 56, 0, 0})
	SMember(FAIDataProviderFloatValue)                 PercentValueClose                                           OFFSET(getStruct<T>, {0x2E0, 56, 0, 0})
	SMember(FAIDataProviderFloatValue)                 PercentValueRegular                                         OFFSET(getStruct<T>, {0x318, 56, 0, 0})
	SMember(FAIDataProviderFloatValue)                 PercentValueFar                                             OFFSET(getStruct<T>, {0x350, 56, 0, 0})
};

/// Class /Script/FortniteAIServer.FortQueryTest_ProjectOnNavMesh
/// Size: 0x0000 (0x0001F8 - 0x0001F8)
class UFortQueryTest_ProjectOnNavMesh : public UEnvQueryTest
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 504;

public:
};

/// Class /Script/FortniteAIServer.FortQueryTest_Random
/// Size: 0x0008 (0x0001F8 - 0x000200)
class UFortQueryTest_Random : public UEnvQueryTest
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 512;

public:
	DMember(bool)                                      bUseRandomSeedForAI                                         OFFSET(get<bool>, {0x1F8, 1, 1, 0})
	DMember(bool)                                      bUseRandomSeedForOthers                                     OFFSET(get<bool>, {0x1F8, 1, 1, 1})
};

/// Class /Script/FortniteAIServer.FortQueryTest_TowardNextAthenaSafeZone
/// Size: 0x0058 (0x0001F8 - 0x000250)
class UFortQueryTest_TowardNextAthenaSafeZone : public UEnvQueryTest
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 592;

public:
	SMember(FAIDataProviderIntValue)                   SafeZoneIndex                                               OFFSET(getStruct<T>, {0x1F8, 56, 0, 0})
	DMember(bool)                                      bCheckAcceptanceAngleTowardNextCenter                       OFFSET(get<bool>, {0x230, 1, 0, 0})
	DMember(float)                                     AcceptanceAngleTowardNextCenter                             OFFSET(get<float>, {0x234, 4, 0, 0})
	CMember(TArray<int32_t>)                           ExclusionSafeZoneIndex                                      OFFSET(get<T>, {0x238, 16, 0, 0})
};

/// Class /Script/FortniteAIServer.FortQueryTest_ValidSurface
/// Size: 0x0120 (0x0001F8 - 0x000318)
class UFortQueryTest_ValidSurface : public UEnvQueryTest
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 792;

public:
	SMember(FAIDataProviderFloatValue)                 Radius                                                      OFFSET(getStruct<T>, {0x1F8, 56, 0, 0})
	SMember(FAIDataProviderFloatValue)                 TraceOffsetUp                                               OFFSET(getStruct<T>, {0x230, 56, 0, 0})
	SMember(FAIDataProviderFloatValue)                 TraceOffsetDown                                             OFFSET(getStruct<T>, {0x268, 56, 0, 0})
	CMember(TEnumAsByte<ECollisionChannel>)            TraceCollisionChannel                                       OFFSET(get<T>, {0x2A0, 1, 0, 0})
	SMember(FAIDataProviderFloatValue)                 FlatSurfaceToleranceZ                                       OFFSET(getStruct<T>, {0x2A8, 56, 0, 0})
	CMember(TArray<TWeakObjectPtr<UPhysicalMaterial*>>) SurfaceMaterials                                           OFFSET(get<T>, {0x2E0, 16, 0, 0})
	DMember(bool)                                      bAreSurfaceMaterialsValid                                   OFFSET(get<bool>, {0x2F0, 1, 0, 0})
	CMember(TArray<TWeakObjectPtr<UClass*>>)           ValidHitActorClasses                                        OFFSET(get<T>, {0x2F8, 16, 0, 0})
	CMember(TArray<TWeakObjectPtr<UClass*>>)           InvalidHitActorClasses                                      OFFSET(get<T>, {0x308, 16, 0, 0})
};

/// Class /Script/FortniteAIServer.FortQueryTest_WithinHotfixVolumeBounds
/// Size: 0x0028 (0x0001F8 - 0x000220)
class UFortQueryTest_WithinHotfixVolumeBounds : public UEnvQueryTest
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 544;

public:
	CMember(class UDataTable*)                         BoundsTable                                                 OFFSET(get<T>, {0x1F8, 8, 0, 0})
	SMember(FVector)                                   BoundsExtentBuffer                                          OFFSET(getStruct<T>, {0x200, 24, 0, 0})
	DMember(bool)                                      bXYOnly                                                     OFFSET(get<bool>, {0x218, 1, 0, 0})
};

/// Class /Script/FortniteAIServer.FortQueryTest_WithinTaggedArea
/// Size: 0x0068 (0x0001F8 - 0x000260)
class UFortQueryTest_WithinTaggedArea : public UEnvQueryTest
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 608;

public:
	SMember(FGameplayTagQuery)                         TagQuery                                                    OFFSET(getStruct<T>, {0x1F8, 72, 0, 0})
	SMember(FVector)                                   AreaExtentBuffer                                            OFFSET(getStruct<T>, {0x240, 24, 0, 0})
	DMember(bool)                                      bAssumeInfiniteHeightForArea                                OFFSET(get<bool>, {0x258, 1, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaBTTask_BotAmbushPlayer
/// Size: 0x0090 (0x000078 - 0x000108)
class UFortAthenaBTTask_BotAmbushPlayer : public UBTTask_Wait
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:
	DMember(float)                                     FacingPrecision                                             OFFSET(get<float>, {0x78, 4, 0, 0})
	DMember(float)                                     WeaponCooldown                                              OFFSET(get<float>, {0x7C, 4, 0, 0})
	DMember(bool)                                      bClearBlackboardOnFinished                                  OFFSET(get<bool>, {0x80, 1, 0, 0})
	SMember(FBlackboardKeySelector)                    TargetedPlayerKeySelector                                   OFFSET(getStruct<T>, {0x88, 40, 0, 0})
	SMember(FBlackboardKeySelector)                    MaxLocationErrorKeySelector                                 OFFSET(getStruct<T>, {0xB0, 40, 0, 0})
	SMember(FBlackboardKeySelector)                    MinLocationErrorKeySelector                                 OFFSET(getStruct<T>, {0xD8, 40, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaBTDecorator_BehaviorControls
/// Size: 0x0008 (0x000068 - 0x000070)
class UFortAthenaBTDecorator_BehaviorControls : public UBTDecorator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	CMember(EBehaviorTreeBranches)                     BehaviorTreeBranch                                          OFFSET(get<T>, {0x68, 1, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_AimDownSight
/// Size: 0x0030 (0x0000A8 - 0x0000D8)
class UFortAthenaAIBotEvaluator_AimDownSight : public UFortAthenaAIBotEvaluator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	SMember(FName)                                     WeaponKeyName                                               OFFSET(getStruct<T>, {0xA8, 4, 0, 0})
	SMember(FName)                                     ThrowableAttacksName                                        OFFSET(getStruct<T>, {0xAC, 4, 0, 0})
	SMember(FName)                                     TargetActorName                                             OFFSET(getStruct<T>, {0xB0, 4, 0, 0})
	SMember(FName)                                     UrgentMovementName                                          OFFSET(getStruct<T>, {0xB4, 4, 0, 0})
	DMember(bool)                                      bSkipTargetChecks                                           OFFSET(get<bool>, {0xB8, 1, 0, 0})
	CMember(class UFortAthenaAIBotAimingDigestedSkillSet*) CacheAimingDigestedSkillSet                             OFFSET(get<T>, {0xC0, 8, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_Ambush
/// Size: 0x0068 (0x0001A0 - 0x000208)
class UFortAthenaAIBotEvaluator_Ambush : public UFortAthenaAIBotEvaluator_Movement
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 520;

public:
	SMember(FName)                                     LastKnownPositionName                                       OFFSET(getStruct<T>, {0x1A0, 4, 0, 0})
	SMember(FName)                                     DestinationKeyName                                          OFFSET(getStruct<T>, {0x1A4, 4, 0, 0})
	SMember(FName)                                     MoveToDestinationKeyName                                    OFFSET(getStruct<T>, {0x1A8, 4, 0, 0})
	SMember(FName)                                     AggressivenessName                                          OFFSET(getStruct<T>, {0x1AC, 4, 0, 0})


	/// Functions
	// Function /Script/FortniteAIServer.FortAthenaAIBotEvaluator_Ambush.OnAssignedPerksChangedEvent
	// void OnAssignedPerksChangedEvent();                                                                                      // [0xa7907f4] Final|Native|Private 
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_Attack
/// Size: 0x0018 (0x0001A0 - 0x0001B8)
class UFortAthenaAIBotEvaluator_Attack : public UFortAthenaAIBotEvaluator_Movement
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 440;

public:
	SMember(FName)                                     WeaponKeyName                                               OFFSET(getStruct<T>, {0x1A4, 4, 0, 0})
	SMember(FName)                                     MoveToDestinationKeyName                                    OFFSET(getStruct<T>, {0x1A8, 4, 0, 0})
	SMember(FName)                                     TargetActorName                                             OFFSET(getStruct<T>, {0x1AC, 4, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_AvoidThreat
/// Size: 0x0028 (0x0001A0 - 0x0001C8)
class UFortAthenaAIBotEvaluator_AvoidThreat : public UFortAthenaAIBotEvaluator_Movement
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 456;

public:
	SMember(FName)                                     AvoidThreatKeyName                                          OFFSET(getStruct<T>, {0x1A0, 4, 0, 0})
	SMember(FName)                                     AvoidThreatMovementStateKeyName                             OFFSET(getStruct<T>, {0x1A4, 4, 0, 0})
	SMember(FName)                                     AvoidThreatDestinationKeyName                               OFFSET(getStruct<T>, {0x1A8, 4, 0, 0})
	CMember(class AActor*)                             CurrentThreatActorAvoiding                                  OFFSET(get<T>, {0x1B8, 8, 0, 0})
	CMember(class UFortAthenaAIBotEvasiveManeuversDigestedSkillSet*) CacheEMDigestedSkillSet                       OFFSET(get<T>, {0x1C0, 8, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_Bunker
/// Size: 0x00B8 (0x0001A0 - 0x000258)
class UFortAthenaAIBotEvaluator_Bunker : public UFortAthenaAIBotEvaluator_Movement
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 600;

public:
	SMember(FName)                                     BuildExecutionStatusKeyName                                 OFFSET(getStruct<T>, {0x1A0, 4, 0, 0})
	SMember(FName)                                     HealingStatusKeyName                                        OFFSET(getStruct<T>, {0x1A4, 4, 0, 0})
	SMember(FGameplayTagContainer)                     DangerTags                                                  OFFSET(getStruct<T>, {0x1A8, 32, 0, 0})


	/// Functions
	// Function /Script/FortniteAIServer.FortAthenaAIBotEvaluator_Bunker.OnAssignedPerksChangedEvent
	// void OnAssignedPerksChangedEvent();                                                                                      // [0xa790808] Final|Native|Private 
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_CanMove
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UFortAthenaAIBotEvaluator_CanMove : public UFortAthenaAIBotEvaluator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FName)                                     CanMoveKeyName                                              OFFSET(getStruct<T>, {0xA8, 4, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_CharacterLaunched
/// Size: 0x0048 (0x0000A8 - 0x0000F0)
class UFortAthenaAIBotEvaluator_CharacterLaunched : public UFortAthenaAIBotEvaluator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	DMember(bool)                                      bSteerInSameDirectionAsLaunchVelocity                       OFFSET(get<bool>, {0xA8, 1, 0, 0})
	SMember(FName)                                     CharacterLaunchedExecutionStatusKeyName                     OFFSET(getStruct<T>, {0xAC, 4, 0, 0})
	SMember(FName)                                     SteerDirectionKeyName                                       OFFSET(getStruct<T>, {0xB0, 4, 0, 0})
	SMember(FVector)                                   LastLaunchVelocity                                          OFFSET(getStruct<T>, {0xB8, 24, 0, 0})
	CMember(class UFortAthenaAIBotMovementDigestedSkillSet*) CachedMovementSkillSet                                OFFSET(get<T>, {0xD0, 8, 0, 0})
	DMember(float)                                     LastZiplineTimestamp                                        OFFSET(get<float>, {0xD8, 4, 0, 0})


	/// Functions
	// Function /Script/FortniteAIServer.FortAthenaAIBotEvaluator_CharacterLaunched.OnZiplineStateChanged
	// void OnZiplineStateChanged(bool bIsZiplining, class AFortPlayerPawn* FortPlayerPawn);                                    // [0xa7b02f0] Final|Native|Private 
	// Function /Script/FortniteAIServer.FortAthenaAIBotEvaluator_CharacterLaunched.OnCharacterLaunchChanged
	// void OnCharacterLaunchChanged(class UFortMovementComp_Character* MovementComponent, FVector& LaunchVelocity);            // [0xa7afee4] Final|Native|Private|HasOutParms|HasDefaults 
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_Conversation
/// Size: 0x01B8 (0x0000A8 - 0x000260)
class UFortAthenaAIBotEvaluator_Conversation : public UFortAthenaAIBotEvaluator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 608;

public:
	SMember(FName)                                     IsInConversationStateName                                   OFFSET(getStruct<T>, {0xA8, 4, 0, 0})
	CMember(TArray<FName>)                             ExecutionStatusesToCheckedToAvoidStoppingWhenNearActorNames OFFSET(get<T>, {0xB0, 16, 0, 0})
	CMember(TArray<FName>)                             ExecutionStatusesToCheckForAllowToAvoidStoppingWhenNearActorNames OFFSET(get<T>, {0xD0, 16, 0, 0})
	CMember(TArray<FName>)                             MovementStatusesToCheckedToAvoidStoppingWhenNearActorNames  OFFSET(get<T>, {0xF0, 16, 0, 0})
	DMember(bool)                                      bForceStopIfNoPlayerNearby                                  OFFSET(get<bool>, {0x110, 1, 0, 0})
	SMember(FScalableFloat)                            HolsterWeaponOnConversationEnter                            OFFSET(getStruct<T>, {0x118, 40, 0, 0})
	CMember(class UFortAthenaAIRuntimeParameters_Conversation*) ConversationRuntimeParameters                      OFFSET(get<T>, {0x140, 8, 0, 0})
	CMember(class AActor*)                             ActorToFocus                                                OFFSET(get<T>, {0x148, 8, 0, 0})


	/// Functions
	// Function /Script/FortniteAIServer.FortAthenaAIBotEvaluator_Conversation.OnPlayerPawnSpawned
	// void OnPlayerPawnSpawned(class AAIController* Controller, class AFortPawn* Pawn);                                        // [0xa7b0170] Final|Native|Private 
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_Converted
/// Size: 0x01D8 (0x0001A0 - 0x000378)
class UFortAthenaAIBotEvaluator_Converted : public UFortAthenaAIBotEvaluator_Movement
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 888;

public:
	SMember(FName)                                     ShouldMoveTowardsConverterName                              OFFSET(getStruct<T>, {0x1A0, 4, 0, 0})
	SMember(FName)                                     ShouldTeleportTowardsConverterName                          OFFSET(getStruct<T>, {0x1A4, 4, 0, 0})
	SMember(FName)                                     ConvertedAllowPatrolAroundName                              OFFSET(getStruct<T>, {0x1A8, 4, 0, 0})
	SMember(FName)                                     ConvertedAllowScanAroundWhenWaitingName                     OFFSET(getStruct<T>, {0x1AC, 4, 0, 0})
	SMember(FName)                                     ConvertedDestinationName                                    OFFSET(getStruct<T>, {0x1B0, 4, 0, 0})
	SMember(FName)                                     CrouchExecutionStatusName                                   OFFSET(getStruct<T>, {0x1B4, 4, 0, 0})
	SMember(FVector)                                   TeleportLocationProjectionExtent                            OFFSET(getStruct<T>, {0x1B8, 24, 0, 0})
	SMember(FVector)                                   MovingFromLosLocationProjectionExtent                       OFFSET(getStruct<T>, {0x1D0, 24, 0, 0})
	SMember(FScalableFloat)                            AmountOfTimesNonHostilePawnNeedsToBeDamagedForTargeting     OFFSET(getStruct<T>, {0x1E8, 40, 0, 0})
	SMember(FScalableFloat)                            TimeToTrackDamagedActors                                    OFFSET(getStruct<T>, {0x210, 40, 0, 0})
	SMember(FScalableFloat)                            NearbyPlayerDistanceForTeleportTowardsConverter             OFFSET(getStruct<T>, {0x238, 40, 0, 0})
	SMember(FScalableFloat)                            PlayerFOVForNearbyPlayersVisibility                         OFFSET(getStruct<T>, {0x260, 40, 0, 0})
	CMember(class UEnvQuery*)                          TeleportToConverterQueryTemplate                            OFFSET(get<T>, {0x288, 8, 0, 0})
	CMember(TEnumAsByte<EEnvQueryRunMode>)             TeleportToConverterRunMode                                  OFFSET(get<T>, {0x290, 1, 0, 0})
	CMember(TArray<FMimicConverterAbilityData>)        AbilitiesToMimic                                            OFFSET(get<T>, {0x298, 16, 0, 0})
	SMember(FGameplayTagQuery)                         RequiredTagQueryToTargetConverterDamagedPawn                OFFSET(getStruct<T>, {0x2A8, 72, 0, 0})
	CMember(class AFortPawn*)                          ConverterPawn                                               OFFSET(get<T>, {0x358, 8, 0, 0})
	CMember(class UFortAthenaAIRuntimeParameters_AIBotConvert*) CachedAIBotConvertParameters                       OFFSET(get<T>, {0x360, 8, 0, 0})


	/// Functions
	// Function /Script/FortniteAIServer.FortAthenaAIBotEvaluator_Converted.OnUnconvertedEvent
	// void OnUnconvertedEvent(class AFortPawn* UnconvertedPawn, EUnconvertReason UnconvertReason);                             // [0xa7b0234] Final|Native|Protected 
	// Function /Script/FortniteAIServer.FortAthenaAIBotEvaluator_Converted.OnConvertedEvent
	// void OnConvertedEvent(class AFortPawn* InstigatorPawn, class AFortPawn* ConvertedPawn);                                  // [0xa7affec] Final|Native|Protected 
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_DanceOnKill
/// Size: 0x0028 (0x0000A8 - 0x0000D0)
class UFortAthenaAIBotEvaluator_DanceOnKill : public UFortAthenaAIBotEvaluator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	SMember(FName)                                     LastKillPositionKeyName                                     OFFSET(getStruct<T>, {0xA8, 4, 0, 0})
	SMember(FName)                                     LastKillTimeKeyName                                         OFFSET(getStruct<T>, {0xAC, 4, 0, 0})
	SMember(FName)                                     LastKillWasABotKeyName                                      OFFSET(getStruct<T>, {0xB0, 4, 0, 0})
	SMember(FName)                                     PlayEmoteExecutionStatusKeyName                             OFFSET(getStruct<T>, {0xB4, 4, 0, 0})
	CMember(class UFortAthenaAIBotEmoteDigestedSkillSet*) CacheEmoteDigestedSkillSet                               OFFSET(get<T>, {0xC8, 8, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_TagQuery
/// Size: 0x0050 (0x0000A8 - 0x0000F8)
class UFortAthenaAIBotEvaluator_TagQuery : public UFortAthenaAIBotEvaluator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
	SMember(FGameplayTagQuery)                         TagQuery                                                    OFFSET(getStruct<T>, {0xA8, 72, 0, 0})
	CMember(class UAbilitySystemComponent*)            CachedAbilitySystemComponent                                OFFSET(get<T>, {0xF0, 8, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_DangerDetection
/// Size: 0x0050 (0x0000F8 - 0x000148)
class UFortAthenaAIBotEvaluator_DangerDetection : public UFortAthenaAIBotEvaluator_TagQuery
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 328;

public:
	CMember(class UClass*)                             DangerNavAreaClass                                          OFFSET(get<T>, {0x108, 8, 0, 0})
	DMember(float)                                     TimeToCheckForDangerAfterValidQuery                         OFFSET(get<float>, {0x110, 4, 0, 0})
	DMember(float)                                     MaxRadiusToSearchForSafePlace                               OFFSET(get<float>, {0x114, 4, 0, 0})
	SMember(FName)                                     DangerZoneDetectedExecutionStatusName                       OFFSET(getStruct<T>, {0x118, 4, 0, 0})
	SMember(FName)                                     DangerZoneDetectedSafeLocationKeyName                       OFFSET(getStruct<T>, {0x11C, 4, 0, 0})
	CMember(class UFortAthenaAIBotMovementDigestedSkillSet*) CachedMovementSkillSet                                OFFSET(get<T>, {0x128, 8, 0, 0})
	CMember(class UAthenaAIServiceZoneManager*)        CacheZoneManager                                            OFFSET(get<T>, {0x130, 8, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_DBNO
/// Size: 0x0058 (0x0001A0 - 0x0001F8)
class UFortAthenaAIBotEvaluator_DBNO : public UFortAthenaAIBotEvaluator_Movement
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 504;

public:
	SMember(FName)                                     DBNODestinationKeyName                                      OFFSET(getStruct<T>, {0x1A0, 4, 0, 0})
	DMember(bool)                                      bAllowReachSquadmates                                       OFFSET(get<bool>, {0x1A6, 1, 1, 0})
	DMember(bool)                                      bAllowReachSameFactionNPCs                                  OFFSET(get<bool>, {0x1A6, 1, 1, 1})
	CMember(TArray<class AFortPlayerPawnAthena*>)      AllyPawns                                                   OFFSET(get<T>, {0x1A8, 16, 0, 0})
	SMember(FVector)                                   CachedCurrentDestination                                    OFFSET(getStruct<T>, {0x1B8, 24, 0, 0})
	CMember(class UFortAthenaAIBotDBNODigestedSkillSet*) DBNOSkillSet                                              OFFSET(get<T>, {0x1D0, 8, 0, 0})
	CMember(class UFortAthenaAICoverComponent*)        CachedCoverComponent                                        OFFSET(get<T>, {0x1D8, 8, 0, 0})
	CMember(class UFortAthenaAIRuntimeParameters_DBNOBehavior*) DBNOBehaviorRuntimeParameters                      OFFSET(get<T>, {0x1E0, 8, 0, 0})


	/// Functions
	// Function /Script/FortniteAIServer.FortAthenaAIBotEvaluator_DBNO.OnAllyPawnDBNOStateChanged
	// void OnAllyPawnDBNOStateChanged(class AFortPawn* InPlayer, bool bInIsDBNO);                                              // [0xa7afe08] Final|Native|Private 
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_DefensiveBuilding
/// Size: 0x0018 (0x0000A8 - 0x0000C0)
class UFortAthenaAIBotEvaluator_DefensiveBuilding : public UFortAthenaAIBotEvaluator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	CMember(class UFortAthenaAIBotBuildingDigestedSkillSet*) CachedBuildingDigestedSkillSet                        OFFSET(get<T>, {0xB0, 8, 0, 0})
	CMember(class UFortAthenaAIBotBuildingComponent*)  CachedBuildingComponent                                     OFFSET(get<T>, {0xB8, 8, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_Escape
/// Size: 0x0030 (0x0001A0 - 0x0001D0)
class UFortAthenaAIBotEvaluator_Escape : public UFortAthenaAIBotEvaluator_Movement
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 464;

public:
	SMember(FGameplayTagContainer)                     EscapeTags                                                  OFFSET(getStruct<T>, {0x1A0, 32, 0, 0})
	DMember(float)                                     CooldownBetweenAggressivenessChanges                        OFFSET(get<float>, {0x1C0, 4, 0, 0})
	SMember(FName)                                     AggressivenessName                                          OFFSET(getStruct<T>, {0x1C4, 4, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_EvasiveManeuvers
/// Size: 0x01E8 (0x0000A8 - 0x000290)
class UFortAthenaAIBotEvaluator_EvasiveManeuvers : public UFortAthenaAIBotEvaluator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 656;

public:
	SMember(FName)                                     CrouchExecutionStatusName                                   OFFSET(getStruct<T>, {0x150, 4, 0, 0})
	SMember(FName)                                     JumpExecutionStatusName                                     OFFSET(getStruct<T>, {0x154, 4, 0, 0})
	SMember(FName)                                     JetpackStrafeExecutionStatusName                            OFFSET(getStruct<T>, {0x158, 4, 0, 0})
	SMember(FName)                                     DodgeName                                                   OFFSET(getStruct<T>, {0x15C, 4, 0, 0})
	SMember(FName)                                     DestinationKeyName                                          OFFSET(getStruct<T>, {0x160, 4, 0, 0})
	SMember(FName)                                     UrgentMoveKeyName                                           OFFSET(getStruct<T>, {0x164, 4, 0, 0})
	DMember(bool)                                      bDoCrouching                                                OFFSET(get<bool>, {0x174, 1, 0, 0})
	DMember(bool)                                      bDoDodging                                                  OFFSET(get<bool>, {0x175, 1, 0, 0})
	DMember(bool)                                      bDoJumping                                                  OFFSET(get<bool>, {0x176, 1, 0, 0})
	DMember(bool)                                      bDoJumpingDistanceCheck                                     OFFSET(get<bool>, {0x177, 1, 0, 0})
	DMember(bool)                                      bDoJetpackStrafing                                          OFFSET(get<bool>, {0x178, 1, 0, 0})
	DMember(bool)                                      bDoJetpackStrafingDistanceCheck                             OFFSET(get<bool>, {0x179, 1, 0, 0})
	DMember(float)                                     JetpackStrafingRequiredFuelPercent                          OFFSET(get<float>, {0x17C, 4, 0, 0})
	DMember(float)                                     JetpackStrafeNavPadding                                     OFFSET(get<float>, {0x180, 4, 0, 0})
	SMember(FGameplayTagQuery)                         RequiredTagQuery                                            OFFSET(getStruct<T>, {0x188, 72, 0, 0})
	SMember(FGameplayTagQuery)                         JetpackRequiredTagQuery                                     OFFSET(getStruct<T>, {0x1D0, 72, 0, 0})
	SMember(FGameplayTagQuery)                         JumpRequiredTagQuery                                        OFFSET(getStruct<T>, {0x218, 72, 0, 0})
	CMember(class UClass*)                             ForcedPerkClass                                             OFFSET(get<T>, {0x260, 8, 0, 0})
	CMember(class UFortAthenaAIBotEvasiveManeuversDigestedSkillSet*) CacheEMDigestedSkillSet                       OFFSET(get<T>, {0x268, 8, 0, 0})
	CMember(class UFortAIControllerPerksComponent*)    CachedPerksComponent                                        OFFSET(get<T>, {0x270, 8, 0, 0})


	/// Functions
	// Function /Script/FortniteAIServer.FortAthenaAIBotEvaluator_EvasiveManeuvers.OnMoveCompleted
	// void OnMoveCompleted(FAIRequestID RequestID, TEnumAsByte<EPathFollowingResult> MovementResult);                          // [0xa7b00ac] Final|Native|Public  
	// Function /Script/FortniteAIServer.FortAthenaAIBotEvaluator_EvasiveManeuvers.OnAssignedPerksChangedEvent
	// void OnAssignedPerksChangedEvent();                                                                                      // [0xa7afed0] Final|Native|Private 
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_Flanking
/// Size: 0x0078 (0x0001A0 - 0x000218)
class UFortAthenaAIBotEvaluator_Flanking : public UFortAthenaAIBotEvaluator_Movement
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 536;

public:
	CMember(class AFortAIDirector*)                    CachedAIDirector                                            OFFSET(get<T>, {0x1A0, 8, 0, 0})
	CMember(class UFortAthenaAIBotRangeAttackDigestedSkillSet*) CachedRangeAttackDigestedSkillSet                  OFFSET(get<T>, {0x1A8, 8, 0, 0})
	SMember(FName)                                     FlankingExecutionStatusKeyName                              OFFSET(getStruct<T>, {0x1B0, 4, 0, 0})
	SMember(FName)                                     FlankingMovementStateKeyName                                OFFSET(getStruct<T>, {0x1B4, 4, 0, 0})
	SMember(FName)                                     FlankingDestinationKeyName                                  OFFSET(getStruct<T>, {0x1B8, 4, 0, 0})
	CMember(TArray<FFlankingLocationInfo>)             LocationsToEvaluate                                         OFFSET(get<T>, {0x1C8, 16, 0, 0})
	CMember(TArray<FFlankingLocationInfo>)             BestLocations                                               OFFSET(get<T>, {0x1D8, 16, 0, 0})
	CMember(TArray<TWeakObjectPtr<AActor*>>)           ActorsInArea                                                OFFSET(get<T>, {0x1E8, 16, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_Flee
/// Size: 0x0038 (0x0001A0 - 0x0001D8)
class UFortAthenaAIBotEvaluator_Flee : public UFortAthenaAIBotEvaluator_Movement
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 472;

public:
	DMember(float)                                     MinDistanceFromTarget                                       OFFSET(get<float>, {0x1A0, 4, 0, 0})
	DMember(float)                                     MinValidDistanceForFleeLocation                             OFFSET(get<float>, {0x1A4, 4, 0, 0})
	DMember(float)                                     FleeDistance                                                OFFSET(get<float>, {0x1A8, 4, 0, 0})
	DMember(float)                                     MaxDistanceFromTargetWhenFleeing                            OFFSET(get<float>, {0x1AC, 4, 0, 0})
	DMember(float)                                     MinDistanceHysteresisWhenChangingTarget                     OFFSET(get<float>, {0x1B0, 4, 0, 0})
	SMember(FName)                                     FleeKeyName                                                 OFFSET(getStruct<T>, {0x1B4, 4, 0, 0})
	SMember(FName)                                     FleeMovementStateKeyName                                    OFFSET(getStruct<T>, {0x1B8, 4, 0, 0})
	SMember(FName)                                     FleeDestinationKeyName                                      OFFSET(getStruct<T>, {0x1BC, 4, 0, 0})
	SMember(FName)                                     FleeActorKeyName                                            OFFSET(getStruct<T>, {0x1C0, 4, 0, 0})
	CMember(class AActor*)                             CurrentActorFleeingFrom                                     OFFSET(get<T>, {0x1D0, 8, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_FreeFalling
/// Size: 0x0108 (0x0000A8 - 0x0001B0)
class UFortAthenaAIBotEvaluator_FreeFalling : public UFortAthenaAIBotEvaluator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 432;

public:
	SMember(FName)                                     DiveExecutionStatusKeyName                                  OFFSET(getStruct<T>, {0xA8, 4, 0, 0})
	SMember(FName)                                     DiveDestinationKeyName                                      OFFSET(getStruct<T>, {0xAC, 4, 0, 0})
	SMember(FName)                                     GlideExecutionStatusKeyName                                 OFFSET(getStruct<T>, {0xB0, 4, 0, 0})
	SMember(FName)                                     GlideDestinationKeyName                                     OFFSET(getStruct<T>, {0xB4, 4, 0, 0})
	SMember(FName)                                     JumpOffBusDestinationName                                   OFFSET(getStruct<T>, {0xB8, 4, 0, 0})
	DMember(bool)                                      bRandomlySelectFreeFallingMode                              OFFSET(get<bool>, {0xC6, 1, 0, 0})
	SMember(FScalableFloat)                            IdleWeight                                                  OFFSET(getStruct<T>, {0xC8, 40, 0, 0})
	SMember(FScalableFloat)                            RandomWeight                                                OFFSET(getStruct<T>, {0xF0, 40, 0, 0})
	SMember(FScalableFloat)                            TowardNearestAllyWeight                                     OFFSET(getStruct<T>, {0x118, 40, 0, 0})
	CMember(EFreeFallingMode)                          FreeFallingMode                                             OFFSET(get<T>, {0x140, 1, 0, 0})
	DMember(float)                                     MaxOffsetRangeFromNearestAlly                               OFFSET(get<float>, {0x144, 4, 0, 0})
	DMember(bool)                                      bShouldRecomputeDestinationWhenTowardNearestAlly            OFFSET(get<bool>, {0x148, 1, 1, 0})
	DMember(bool)                                      bShouldSearchAllyInSquad                                    OFFSET(get<bool>, {0x148, 1, 1, 1})
	DMember(bool)                                      bShouldSearchAllyInTeam                                     OFFSET(get<bool>, {0x148, 1, 1, 2})
	DMember(bool)                                      bGlideAllowed                                               OFFSET(get<bool>, {0x148, 1, 1, 3})
	DMember(float)                                     SkyTubeDivingStuckTimeThreshold                             OFFSET(get<float>, {0x14C, 4, 0, 0})
	CMember(class AFortPlayerStateAthena*)             NearestAlly                                                 OFFSET(get<T>, {0x170, 8, 0, 0})
	SMember(FVector)                                   CachedLatestDestination                                     OFFSET(getStruct<T>, {0x178, 24, 0, 0})
	CMember(class UFortAthenaAIBotMovementDigestedSkillSet*) CacheMovementDigestedSkillSet                         OFFSET(get<T>, {0x190, 8, 0, 0})
	CMember(class AFortSkyTube*)                       CachedSkyTube                                               OFFSET(get<T>, {0x1A0, 8, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_Ground
/// Size: 0x0090 (0x0000A8 - 0x000138)
class UFortAthenaAIBotEvaluator_Ground : public UFortAthenaAIBotEvaluator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 312;

public:
	SMember(FVector)                                   SurfaceTypeRaycastDir                                       OFFSET(getStruct<T>, {0xA8, 24, 0, 0})
	CMember(class UFortAthenaAIRuntimeParameters_Behavior*) CachedBehaviorRuntimeParameters                        OFFSET(get<T>, {0x130, 8, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_HandleFocusing
/// Size: 0x00A8 (0x0000A8 - 0x000150)
class UFortAthenaAIBotEvaluator_HandleFocusing : public UFortAthenaAIBotEvaluator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
	SMember(FName)                                     TargetActorName                                             OFFSET(getStruct<T>, {0xA8, 4, 0, 0})
	SMember(FName)                                     InteractActorName                                           OFFSET(getStruct<T>, {0xAC, 4, 0, 0})
	SMember(FName)                                     TargetLocationName                                          OFFSET(getStruct<T>, {0xB0, 4, 0, 0})
	SMember(FName)                                     FocusActorName                                              OFFSET(getStruct<T>, {0xB4, 4, 0, 0})
	SMember(FName)                                     FocalPointName                                              OFFSET(getStruct<T>, {0xB8, 4, 0, 0})
	SMember(FName)                                     WeaponFireName                                              OFFSET(getStruct<T>, {0xBC, 4, 0, 0})
	SMember(FName)                                     RangeAttackIsReadyToFireName                                OFFSET(getStruct<T>, {0xC0, 4, 0, 0})
	SMember(FName)                                     WeaponTriggerMeleeName                                      OFFSET(getStruct<T>, {0xC4, 4, 0, 0})
	SMember(FName)                                     LastKnownPositionName                                       OFFSET(getStruct<T>, {0xC8, 4, 0, 0})
	SMember(FName)                                     TacticalSprintExecutionStatusName                           OFFSET(getStruct<T>, {0xCC, 4, 0, 0})
	CMember(EFocusingBehavior)                         FocusingBehavior                                            OFFSET(get<T>, {0xE4, 1, 0, 0})
	CMember(EFocusingBehavior)                         NoRangedWeaponFocusBehavior                                 OFFSET(get<T>, {0xE5, 1, 0, 0})
	DMember(bool)                                      bPrioritizeThreatOverCurrentTarget                          OFFSET(get<bool>, {0xE6, 1, 0, 0})
	DMember(bool)                                      bUseTargetActorKeyAsFocusTarget                             OFFSET(get<bool>, {0xE7, 1, 0, 0})
	DMember(bool)                                      bFocusOnTargetLocation                                      OFFSET(get<bool>, {0xE8, 1, 0, 0})
	DMember(float)                                     AmbushMaxLKPLookAtAngleDegree                               OFFSET(get<float>, {0xEC, 4, 0, 0})
	DMember(bool)                                      bStopFocusingWhenMoving                                     OFFSET(get<bool>, {0xF0, 1, 0, 0})
	DMember(float)                                     ResumeFocusingWhenMovingDist                                OFFSET(get<float>, {0xF4, 4, 0, 0})
	DMember(float)                                     StopFocusingWhenMovingDist                                  OFFSET(get<float>, {0xF8, 4, 0, 0})
	DMember(bool)                                      bResumeFocusWhileSliding                                    OFFSET(get<bool>, {0xFC, 1, 0, 0})
	CMember(class UFortAthenaAIBotAimingDigestedSkillSet*) CacheAimingDigestedSkillSet                             OFFSET(get<T>, {0x100, 8, 0, 0})
	CMember(class UFortAthenaAIBotMovementDigestedSkillSet*) CacheMovementDigestedSkillSet                         OFFSET(get<T>, {0x108, 8, 0, 0})
	CMember(class AActor*)                             LastTargetedThreat                                          OFFSET(get<T>, {0x110, 8, 0, 0})
	CMember(class AActor*)                             FocusActor                                                  OFFSET(get<T>, {0x120, 8, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_Heal
/// Size: 0x0078 (0x0000A8 - 0x000120)
class UFortAthenaAIBotEvaluator_Heal : public UFortAthenaAIBotEvaluator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	SMember(FName)                                     HealingObjectKeyName                                        OFFSET(getStruct<T>, {0xA8, 4, 0, 0})
	SMember(FName)                                     CanHealWhileMovingKeyName                                   OFFSET(getStruct<T>, {0xB0, 4, 0, 0})
	SMember(FGameplayTagQuery)                         RequiredTagQuery                                            OFFSET(getStruct<T>, {0xC0, 72, 0, 0})
	DMember(bool)                                      bAllowEvaluationRetry                                       OFFSET(get<bool>, {0x108, 1, 0, 0})
	CMember(class UFortAthenaAIBotHealingDigestedSkillSet*) HealingSkillSet                                        OFFSET(get<T>, {0x110, 8, 0, 0})


	/// Functions
	// Function /Script/FortniteAIServer.FortAthenaAIBotEvaluator_Heal.HandlePlayerHealthOrShieldChanged
	// void HandlePlayerHealthOrShieldChanged();                                                                                // [0xa7afdf4] Final|Native|Private 
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_HitAndRun
/// Size: 0x00F8 (0x0001A0 - 0x000298)
class UFortAthenaAIBotEvaluator_HitAndRun : public UFortAthenaAIBotEvaluator_Movement
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 664;

public:
	SMember(FScalableFloat)                            AttackDurationBeforeEvade                                   OFFSET(getStruct<T>, {0x1A0, 40, 0, 0})
	SMember(FScalableFloat)                            MeleeAttackMaxDistToEvade                                   OFFSET(getStruct<T>, {0x1C8, 40, 0, 0})
	SMember(FScalableFloat)                            ClampEvadeDistanceEnable                                    OFFSET(getStruct<T>, {0x1F0, 40, 0, 0})
	SMember(FScalableFloat)                            MinDistanceToEvade                                          OFFSET(getStruct<T>, {0x218, 40, 0, 0})
	SMember(FScalableFloat)                            MaxDistanceToEvade                                          OFFSET(getStruct<T>, {0x240, 40, 0, 0})
	SMember(FName)                                     EvadeKeyName                                                OFFSET(getStruct<T>, {0x268, 4, 0, 0})
	SMember(FName)                                     EvadeMovementStateKeyName                                   OFFSET(getStruct<T>, {0x26C, 4, 0, 0})
	SMember(FName)                                     EvadeDestinationKeyName                                     OFFSET(getStruct<T>, {0x270, 4, 0, 0})
	SMember(FName)                                     WeaponTriggerMeleeName                                      OFFSET(getStruct<T>, {0x274, 4, 0, 0})
	DMember(float)                                     MeleeAttackMaxDistToEvadeSqr                                OFFSET(get<float>, {0x288, 4, 0, 0})
	DMember(float)                                     MaxDistanceToEvadeSqr                                       OFFSET(get<float>, {0x28C, 4, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_HolsterWeapon
/// Size: 0x0030 (0x0000A8 - 0x0000D8)
class UFortAthenaAIBotEvaluator_HolsterWeapon : public UFortAthenaAIBotEvaluator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	CMember(TArray<FName>)                             ExecutionStatusesToCheckedNames                             OFFSET(get<T>, {0xA8, 16, 0, 0})
	CMember(class UFortAthenaAIRuntimeParameters_NPCBehavior*) CachedNPCBehaviorParameters                         OFFSET(get<T>, {0xC8, 8, 0, 0})
	CMember(class UFortAthenaAIRuntimeParameters_AIBotConvert*) CachedConvertParameters                            OFFSET(get<T>, {0xD0, 8, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_Investigate
/// Size: 0x00C0 (0x0001A0 - 0x000260)
class UFortAthenaAIBotEvaluator_Investigate : public UFortAthenaAIBotEvaluator_Movement
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 608;

public:
	SMember(FName)                                     LastKnownPositionName                                       OFFSET(getStruct<T>, {0x1A0, 4, 0, 0})
	SMember(FName)                                     DestinationKeyName                                          OFFSET(getStruct<T>, {0x1A4, 4, 0, 0})
	SMember(FName)                                     MoveToDestinationKeyName                                    OFFSET(getStruct<T>, {0x1A8, 4, 0, 0})
	SMember(FName)                                     AggressivenessName                                          OFFSET(getStruct<T>, {0x1AC, 4, 0, 0})
	SMember(FName)                                     CautiousKeyName                                             OFFSET(getStruct<T>, {0x1B0, 4, 0, 0})
	SMember(FName)                                     AlertLevelName                                              OFFSET(getStruct<T>, {0x1B4, 4, 0, 0})
	CMember(class UClass*)                             SearchQueryFilterClass                                      OFFSET(get<T>, {0x1B8, 8, 0, 0})
	CMember(class UFortAthenaAIBotAimingDigestedSkillSet*) CacheAimingDigestedSkillSet                             OFFSET(get<T>, {0x1D0, 8, 0, 0})
	CMember(class UFortAthenaAIBotAttackingDigestedSkillSet*) CacheAttackingDigestedSkillSet                       OFFSET(get<T>, {0x1D8, 8, 0, 0})
	CMember(class UFortAthenaAIBotUnstuckDigestedSkillSet*) CachedUnstuckSkillSet                                  OFFSET(get<T>, {0x1E0, 8, 0, 0})
	CMember(class AActor*)                             InvestigatingSupportingActor                                OFFSET(get<T>, {0x230, 8, 0, 0})
	CMember(class ABuildingSMActor*)                   UnderminingBuildingActor                                    OFFSET(get<T>, {0x238, 8, 0, 0})
	CMember(class AActor*)                             ExcludeReachingTarget                                       OFFSET(get<T>, {0x240, 8, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_JumpOffBus
/// Size: 0x0048 (0x0000A8 - 0x0000F0)
class UFortAthenaAIBotEvaluator_JumpOffBus : public UFortAthenaAIBotEvaluator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	SMember(FName)                                     JumpOffBusDestinationName                                   OFFSET(getStruct<T>, {0xA8, 4, 0, 0})
	SMember(FName)                                     JumpOffBusDestinationVolumeKeyName                          OFFSET(getStruct<T>, {0xAC, 4, 0, 0})
	CMember(class AFortPoiVolume*)                     BusDroppingVolume                                           OFFSET(get<T>, {0xD0, 8, 0, 0})
	CMember(class AFortGameStateAthena*)               CachedAthenaGameState                                       OFFSET(get<T>, {0xD8, 8, 0, 0})
	CMember(class UFortAthenaAIBotMovementDigestedSkillSet*) CacheMovementDigestedSkillSet                         OFFSET(get<T>, {0xE0, 8, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_MeleeAttack
/// Size: 0x0040 (0x0001B8 - 0x0001F8)
class UFortAthenaAIBotEvaluator_MeleeAttack : public UFortAthenaAIBotEvaluator_Attack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 504;

public:
	SMember(FName)                                     WeaponTriggerMeleeName                                      OFFSET(getStruct<T>, {0x1BC, 4, 0, 0})
	SMember(FName)                                     ThrowableAttacksAllowedName                                 OFFSET(getStruct<T>, {0x1C0, 4, 0, 0})
	SMember(FName)                                     TraversalBlockMeleeAttackName                               OFFSET(getStruct<T>, {0x1C4, 4, 0, 0})
	SMember(FName)                                     TargetContextReachableKeyName                               OFFSET(getStruct<T>, {0x1C8, 4, 0, 0})
	SMember(FName)                                     TargetContextInsideLeashKeyName                             OFFSET(getStruct<T>, {0x1CC, 4, 0, 0})
	CMember(class UFortAthenaAIBotAttackingDigestedSkillSet*) AttackingSkillSet                                    OFFSET(get<T>, {0x1E8, 8, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_Observe
/// Size: 0x0020 (0x0000A8 - 0x0000C8)
class UFortAthenaAIBotEvaluator_Observe : public UFortAthenaAIBotEvaluator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	SMember(FName)                                     AggressivenessName                                          OFFSET(getStruct<T>, {0xA8, 4, 0, 0})
	SMember(FName)                                     ObserveDestinationKeyName                                   OFFSET(getStruct<T>, {0xAC, 4, 0, 0})
	DMember(bool)                                      bContinueMovementOnStart                                    OFFSET(get<bool>, {0xB4, 1, 0, 0})
	DMember(float)                                     MaxMovementDuration                                         OFFSET(get<float>, {0xB8, 4, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_PathExists
/// Size: 0x0020 (0x0000A8 - 0x0000C8)
class UFortAthenaAIBotEvaluator_PathExists : public UFortAthenaAIBotEvaluator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	SMember(FName)                                     PathExistsKeyName                                           OFFSET(getStruct<T>, {0xA8, 4, 0, 0})
	SMember(FName)                                     GoalKeyName                                                 OFFSET(getStruct<T>, {0xB0, 4, 0, 0})
	DMember(float)                                     AcceptableRadius                                            OFFSET(get<float>, {0xB4, 4, 0, 0})
	CMember(class UClass*)                             FilterClass                                                 OFFSET(get<T>, {0xB8, 8, 0, 0})
	CMember(TEnumAsByte<EPathTestQueryType>)           PathQueryType                                               OFFSET(get<T>, {0xC0, 1, 0, 0})
	DMember(bool)                                      bProjectGoalLocation                                        OFFSET(get<bool>, {0xC4, 1, 1, 0})
	DMember(bool)                                      bReachTestIncludesAgentRadius                               OFFSET(get<bool>, {0xC4, 1, 1, 1})
	DMember(bool)                                      bReachTestIncludesGoalRadius                                OFFSET(get<bool>, {0xC4, 1, 1, 2})
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_PatrolAround
/// Size: 0x0098 (0x0001A0 - 0x000238)
class UFortAthenaAIBotEvaluator_PatrolAround : public UFortAthenaAIBotEvaluator_Movement
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
	SMember(FEQSParametrizedQueryExecutionRequest)     EQSRequest                                                  OFFSET(getStruct<T>, {0x1A0, 72, 0, 0})
	CMember(class UClass*)                             NavigationQueryFilterClass                                  OFFSET(get<T>, {0x1E8, 8, 0, 0})
	DMember(bool)                                      bFallbackToPointWithNoCustomNavigationQueryFilter           OFFSET(get<bool>, {0x1F0, 1, 0, 0})
	SMember(FName)                                     PatrolDestinationName                                       OFFSET(getStruct<T>, {0x1F4, 4, 0, 0})
	SMember(FName)                                     PatrolExecutionStatusName                                   OFFSET(getStruct<T>, {0x1F8, 4, 0, 0})
	SMember(FName)                                     PatrolMovementStateName                                     OFFSET(getStruct<T>, {0x1FC, 4, 0, 0})
	SMember(FName)                                     BestTargetActorName                                         OFFSET(getStruct<T>, {0x200, 4, 0, 0})
	SMember(FName)                                     EnableKeyName                                               OFFSET(getStruct<T>, {0x204, 4, 0, 0})
	CMember(class AFortGameModeAthena*)                CacheAthenaGameMode                                         OFFSET(get<T>, {0x210, 8, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_PlayEmote
/// Size: 0x0020 (0x0001A0 - 0x0001C0)
class UFortAthenaAIBotEvaluator_PlayEmote : public UFortAthenaAIBotEvaluator_Movement
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 448;

public:
	SMember(FName)                                     PlayEmoteExecutionStatusKeyName                             OFFSET(getStruct<T>, {0x1A0, 4, 0, 0})
	SMember(FName)                                     PlayEmoteDestinationKeyName                                 OFFSET(getStruct<T>, {0x1A4, 4, 0, 0})
	CMember(class AActor*)                             ExcludeReachingTarget                                       OFFSET(get<T>, {0x1B0, 8, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_PropagateAwareness
/// Size: 0x0088 (0x0000A8 - 0x000130)
class UFortAthenaAIBotEvaluator_PropagateAwareness : public UFortAthenaAIBotEvaluator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	SMember(FGameplayTagQuery)                         AwarenessTagQuery                                           OFFSET(getStruct<T>, {0xA8, 72, 0, 0})
	CMember(class UClass*)                             AwarenessGameplayEffectClass                                OFFSET(get<T>, {0xF0, 8, 0, 0})
	CMember(TArray<class AFortPlayerPawnAthena*>)      AwareAllyPawns                                              OFFSET(get<T>, {0xF8, 16, 0, 0})
	CMember(TArray<class AFortPlayerPawnAthena*>)      AlreadyTestedPawns                                          OFFSET(get<T>, {0x108, 16, 0, 0})
	CMember(class UFortAthenaAIBotPropagateAwarenessDigestedSkillSet*) PropagateAwarenessSkillSet                  OFFSET(get<T>, {0x118, 8, 0, 0})
	CMember(class UFortAthenaAIRuntimeParameters_BehaviorTreeControl*) BehaviorControlsRuntimeParameters           OFFSET(get<T>, {0x120, 8, 0, 0})
	CMember(class UFortAthenaAIRuntimeParameters_AffiliationBase*) AffiliationRuntimeParameters                    OFFSET(get<T>, {0x128, 8, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_RangeAttack
/// Size: 0x0180 (0x0001B8 - 0x000338)
class UFortAthenaAIBotEvaluator_RangeAttack : public UFortAthenaAIBotEvaluator_Attack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 824;

public:
	SMember(FName)                                     WeaponReloadName                                            OFFSET(getStruct<T>, {0x1F0, 4, 0, 0})
	SMember(FName)                                     WeaponFireName                                              OFFSET(getStruct<T>, {0x1F4, 4, 0, 0})
	SMember(FName)                                     RangeAttackIsReadyToFireName                                OFFSET(getStruct<T>, {0x1F8, 4, 0, 0})
	SMember(FName)                                     WeaponTargetingName                                         OFFSET(getStruct<T>, {0x1FC, 4, 0, 0})
	SMember(FName)                                     AggressivenessName                                          OFFSET(getStruct<T>, {0x200, 4, 0, 0})
	SMember(FName)                                     HasLoSOnThreatName                                          OFFSET(getStruct<T>, {0x204, 4, 0, 0})
	SMember(FName)                                     UrgentMovementKeyName                                       OFFSET(getStruct<T>, {0x208, 4, 0, 0})
	DMember(bool)                                      bAlwaysAllowTargetingEvaluation                             OFFSET(get<bool>, {0x21A, 1, 0, 0})
	DMember(bool)                                      bSkipADSEvaluation                                          OFFSET(get<bool>, {0x21B, 1, 0, 0})
	SMember(FFortBehaviorValue_Bool)                   SkipADSEvaluation                                           OFFSET(getStruct<T>, {0x21C, 12, 0, 0})
	DMember(bool)                                      bConsiderLoF                                                OFFSET(get<bool>, {0x228, 1, 0, 0})
	DMember(bool)                                      bShouldValidateRangedWeapon                                 OFFSET(get<bool>, {0x229, 1, 0, 0})
	DMember(float)                                     RangeReachHysteresisRatio                                   OFFSET(get<float>, {0x22C, 4, 0, 0})
	CMember(class UFortAthenaAIBotRangeAttackDigestedSkillSet*) CacheRangeAttackDigestedSkillSet                   OFFSET(get<T>, {0x250, 8, 0, 0})
	CMember(class UFortAthenaAIBotAimingDigestedSkillSet*) CacheAimingDigestedSkillSet                             OFFSET(get<T>, {0x258, 8, 0, 0})
	CMember(class UFortAthenaAIBotPerceptionDigestedSkillSet*) CachePerceptionDigestedSkillSet                     OFFSET(get<T>, {0x260, 8, 0, 0})
	CMember(class UFortAthenaAIBotAttackingDigestedSkillSet*) CacheAttackingDigestedSkillSet                       OFFSET(get<T>, {0x268, 8, 0, 0})
	CMember(TWeakObjectPtr<UAthenaAIServiceZoneManager*>) CacheZoneManager                                         OFFSET(get<T>, {0x270, 8, 0, 0})
	CMember(TWeakObjectPtr<UAthenaAIServiceCover*>)    CachedAIServiceCover                                        OFFSET(get<T>, {0x278, 8, 0, 0})
	CMember(class AActor*)                             ExcludeReachingTarget                                       OFFSET(get<T>, {0x280, 8, 0, 0})


	/// Functions
	// Function /Script/FortniteAIServer.FortAthenaAIBotEvaluator_RangeAttack.FindShootingPosition_Async
	// void FindShootingPosition_Async(int32_t RequestID, float DistanceFromTarget, float WeaponIdealAttackRange, FVector& TargetPosition); // [0xa7ccf74] Final|Native|Protected|HasOutParms|HasDefaults 
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_ReachBeacon
/// Size: 0x0020 (0x0001A0 - 0x0001C0)
class UFortAthenaAIBotEvaluator_ReachBeacon : public UFortAthenaAIBotEvaluator_Movement
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 448;

public:
	SMember(FName)                                     ReachBeaconStatusKeyName                                    OFFSET(getStruct<T>, {0x1A0, 4, 0, 0})
	SMember(FName)                                     ReachBeaconMovementStateKeyName                             OFFSET(getStruct<T>, {0x1A4, 4, 0, 0})
	SMember(FName)                                     ReachBeaconTargetKeyName                                    OFFSET(getStruct<T>, {0x1A8, 4, 0, 0})
	CMember(TWeakObjectPtr<UFortAthenaBeaconComponent*>) CurrentBeacon                                             OFFSET(get<T>, {0x1B4, 8, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_ReactToVerb
/// Size: 0x0240 (0x0001A0 - 0x0003E0)
class UFortAthenaAIBotEvaluator_ReactToVerb : public UFortAthenaAIBotEvaluator_Movement
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 992;

public:
	CMember(class UFortAthenaAIBotReactToVerbDigestedSkillSet*) CacheReactToVerbDigestedSkillSet                   OFFSET(get<T>, {0x208, 8, 0, 0})
	CMember(class UDataTable*)                         VerbReactions                                               OFFSET(get<T>, {0x210, 8, 0, 0})
	SMember(FScalableFloat)                            MinDistanceFromPlayerToReact                                OFFSET(getStruct<T>, {0x218, 40, 0, 0})
	SMember(FScalableFloat)                            MaxReactionEmoteDuration                                    OFFSET(getStruct<T>, {0x240, 40, 0, 0})
	SMember(FScalableFloat)                            MaxReactionWaitTime                                         OFFSET(getStruct<T>, {0x268, 40, 0, 0})
	SMember(FFortNearbyActorsPerceptionConfiguration)  PerceptionConfiguration                                     OFFSET(getStruct<T>, {0x290, 208, 0, 0})
	DMember(bool)                                      bIsHighPriorityEvaluator                                    OFFSET(get<bool>, {0x360, 1, 0, 0})
	SMember(FScalableFloat)                            ReactToEmotes                                               OFFSET(getStruct<T>, {0x368, 40, 0, 0})
	SMember(FName)                                     ReactToVerbTargetActorKeyName                               OFFSET(getStruct<T>, {0x390, 4, 0, 0})
	SMember(FName)                                     ReactToVerbShouldMoveKeyName                                OFFSET(getStruct<T>, {0x398, 4, 0, 0})
	SMember(FName)                                     GameplayEffectReactionKeyName                               OFFSET(getStruct<T>, {0x3A0, 4, 0, 0})
	SMember(FPersistenceFrameworkSaveControl)          SaveControl                                                 OFFSET(getStruct<T>, {0x3D0, 16, 0, 0})


	/// Functions
	// Function /Script/FortniteAIServer.FortAthenaAIBotEvaluator_ReactToVerb.HandlePawnStoppedEmote
	// void HandlePawnStoppedEmote(class UFortItemDefinition* MontageItemDef, class AFortPawn* PawnEmoting);                    // [0x6f30638] Final|Native|Protected 
	// Function /Script/FortniteAIServer.FortAthenaAIBotEvaluator_ReactToVerb.HandlePawnStartedEmote
	// void HandlePawnStartedEmote(class UFortItemDefinition* MontageItemDef, class AFortPawn* PawnEmoting);                    // [0x6f30638] Final|Native|Protected 
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_RecoverLineOfSight
/// Size: 0x0068 (0x0001A0 - 0x000208)
class UFortAthenaAIBotEvaluator_RecoverLineOfSight : public UFortAthenaAIBotEvaluator_Movement
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 520;

public:
	SMember(FScalableFloat)                            RecoveringLineOfSightMaxDuration                            OFFSET(getStruct<T>, {0x1A0, 40, 0, 0})
	CMember(TArray<FName>)                             ExecutionStatusToListenKeyNames                             OFFSET(get<T>, {0x1C8, 16, 0, 0})
	SMember(FName)                                     RecoverLineOfSightExecutionStatusKeyName                    OFFSET(getStruct<T>, {0x1D8, 4, 0, 0})
	SMember(FName)                                     RecoverLineOfSightMovementStateKeyName                      OFFSET(getStruct<T>, {0x1DC, 4, 0, 0})
	SMember(FName)                                     RecoverLineOfSightDestinationKeyName                        OFFSET(getStruct<T>, {0x1E0, 4, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_ReloadWeapon
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UFortAthenaAIBotEvaluator_ReloadWeapon : public UFortAthenaAIBotEvaluator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FName)                                     WeaponKeyName                                               OFFSET(getStruct<T>, {0xA8, 4, 0, 0})
	DMember(bool)                                      bCanReloadWeaponsInInventory                                OFFSET(get<bool>, {0xAE, 1, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_Retreat
/// Size: 0x0030 (0x0001A0 - 0x0001D0)
class UFortAthenaAIBotEvaluator_Retreat : public UFortAthenaAIBotEvaluator_Movement
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 464;

public:
	SMember(FName)                                     RetreatDestinationName                                      OFFSET(getStruct<T>, {0x1A0, 4, 0, 0})
	CMember(class UFortAthenaAIBotAttackingDigestedSkillSet*) CacheAttackingDigestedSkillSet                       OFFSET(get<T>, {0x1A8, 8, 0, 0})
	CMember(class UFortAthenaAICoverComponent*)        CachedCoverComponent                                        OFFSET(get<T>, {0x1B0, 8, 0, 0})


	/// Functions
	// Function /Script/FortniteAIServer.FortAthenaAIBotEvaluator_Retreat.HandlePlayerHealthOrShieldChanged
	// void HandlePlayerHealthOrShieldChanged();                                                                                // [0xa7cd0f4] Final|Native|Protected 
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_Revive
/// Size: 0x0068 (0x0001A0 - 0x000208)
class UFortAthenaAIBotEvaluator_Revive : public UFortAthenaAIBotEvaluator_Movement
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 520;

public:
	SMember(FScalableFloat)                            LastReviveTargetExpiration                                  OFFSET(getStruct<T>, {0x1A0, 40, 0, 0})
	SMember(FName)                                     ReviveTargetKeyName                                         OFFSET(getStruct<T>, {0x1C8, 4, 0, 0})
	SMember(FName)                                     ReviveLastTargetKeyName                                     OFFSET(getStruct<T>, {0x1CC, 4, 0, 0})
	CMember(class UFortAthenaAIRuntimeParameters_ReviveBehavior*) ReviveBehaviorRuntimeParameters                  OFFSET(get<T>, {0x1D0, 8, 0, 0})
	CMember(class AFortPlayerPawnAthena*)              CurrentReviveTarget                                         OFFSET(get<T>, {0x1D8, 8, 0, 0})
	CMember(TArray<class AFortPlayerPawnAthena*>)      DBNOAllyPawns                                               OFFSET(get<T>, {0x1E0, 16, 0, 0})
	CMember(class UFortAthenaAIBotReviveDigestedSkillSet*) ReviveSkillSet                                          OFFSET(get<T>, {0x1F0, 8, 0, 0})


	/// Functions
	// Function /Script/FortniteAIServer.FortAthenaAIBotEvaluator_Revive.OnCurrentTargetRevived
	// void OnCurrentTargetRevived(class AFortPlayerPawn* RevivedPawn);                                                         // [0xa7cd2e4] Final|Native|Private 
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_SandTunnel
/// Size: 0x0078 (0x0000F8 - 0x000170)
class UFortAthenaAIBotEvaluator_SandTunnel : public UFortAthenaAIBotEvaluator_TagQuery
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 368;

public:
	SMember(FName)                                     JumpExecutionStatusName                                     OFFSET(getStruct<T>, {0xF8, 4, 0, 0})
	SMember(FName)                                     LootInteractionExecutionStatusName                          OFFSET(getStruct<T>, {0xFC, 4, 0, 0})
	SMember(FName)                                     WeaponTriggerMeleeName                                      OFFSET(getStruct<T>, {0x100, 4, 0, 0})
	SMember(FName)                                     WeaponFireName                                              OFFSET(getStruct<T>, {0x104, 4, 0, 0})
	SMember(FGameplayTagQuery)                         BuriedTagQuery                                              OFFSET(getStruct<T>, {0x110, 72, 0, 0})
	CMember(class UFortAthenaAIBotMovementDigestedSkillSet*) CacheMovementDigestedSkillSet                         OFFSET(get<T>, {0x158, 8, 0, 0})


	/// Functions
	// Function /Script/FortniteAIServer.FortAthenaAIBotEvaluator_SandTunnel.OnBotControllerAlertLevelChanged
	// void OnBotControllerAlertLevelChanged(class AFortAthenaAIBotController* BotController, EAlertLevel OldAlertLevel, EAlertLevel NewAlertLevel); // [0xa7cd1e0] Final|Native|Private 
	// Function /Script/FortniteAIServer.FortAthenaAIBotEvaluator_SandTunnel.Jump
	// void Jump();                                                                                                             // [0xa7cd108] Final|Native|Protected 
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_SelectNextDynamicPOI
/// Size: 0x0078 (0x0001A0 - 0x000218)
class UFortAthenaAIBotEvaluator_SelectNextDynamicPOI : public UFortAthenaAIBotEvaluator_Movement
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 536;

public:
	SMember(FName)                                     DynamicPOIExecutionStatusKeyName                            OFFSET(getStruct<T>, {0x1A0, 4, 0, 0})
	SMember(FName)                                     DynamicPOILocationKeyName                                   OFFSET(getStruct<T>, {0x1A4, 4, 0, 0})
	CMember(class AFortTeamInfoAthena*)                CachedTeamInfo                                              OFFSET(get<T>, {0x1B0, 8, 0, 0})
	CMember(class UFortGameStateComponent_BattleRoyaleGamePhaseLogic*) CachedGamePhaseLogic                        OFFSET(get<T>, {0x1B8, 8, 0, 0})
	SMember(FTimerHandle)                              NextSearchTimerHandle                                       OFFSET(getStruct<T>, {0x1F8, 8, 0, 0})
	CMember(TArray<FFailedToReachPOI>)                 FailedBotPOIList                                            OFFSET(get<T>, {0x200, 16, 0, 0})
	DMember(int32_t)                                   CachedSelectedBotPOIID                                      OFFSET(get<int32_t>, {0x210, 4, 0, 0})


	/// Functions
	// Function /Script/FortniteAIServer.FortAthenaAIBotEvaluator_SelectNextDynamicPOI.ReachingPositionFail_Async
	// void ReachingPositionFail_Async(int32_t RequestID);                                                                      // [0xa7cd500] Final|Native|Private 
	// Function /Script/FortniteAIServer.FortAthenaAIBotEvaluator_SelectNextDynamicPOI.OnSafeZonePhaseChanged
	// void OnSafeZonePhaseChanged(FFortSafeZonePhaseUpdatedEvent& Event);                                                      // [0xa7cd3f0] Final|Native|Private|HasOutParms 
	// Function /Script/FortniteAIServer.FortAthenaAIBotEvaluator_SelectNextDynamicPOI.OnGamePhaseLogicReady
	// void OnGamePhaseLogicReady(FFortBattleRoyaleGamePhaseLogicComponentReadyEvent& Event);                                   // [0xa7cd364] Final|Native|Private|HasOutParms 
	// Function /Script/FortniteAIServer.FortAthenaAIBotEvaluator_SelectNextDynamicPOI.OnAgentDied
	// void OnAgentDied(class AFortAthenaAIBotController* BotController, class AFortPawn* FortPawn);                            // [0xa7cd11c] Final|Native|Protected 
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_SelectNextPOI
/// Size: 0x0038 (0x0001A0 - 0x0001D8)
class UFortAthenaAIBotEvaluator_SelectNextPOI : public UFortAthenaAIBotEvaluator_Movement
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 472;

public:
	SMember(FName)                                     NextPOIKeyName                                              OFFSET(getStruct<T>, {0x1A0, 4, 0, 0})
	SMember(FName)                                     MarkerLocationKeyName                                       OFFSET(getStruct<T>, {0x1A4, 4, 0, 0})
	CMember(class AFortPoiVolume*)                     StartingGroundPOI                                           OFFSET(get<T>, {0x1B0, 8, 0, 0})
	DMember(bool)                                      bCheckForStartingGroundPOI                                  OFFSET(get<bool>, {0x1B8, 1, 0, 0})
	DMember(float)                                     CurrentPOICompletionTime                                    OFFSET(get<float>, {0x1BC, 4, 0, 0})
	DMember(float)                                     DurationInsideCurrentPOI                                    OFFSET(get<float>, {0x1C0, 4, 0, 0})
	CMember(class AFortTeamInfoAthena*)                CachedTeamInfo                                              OFFSET(get<T>, {0x1C8, 8, 0, 0})
	CMember(class UFortAthenaAIBotLootingDigestedSkillSet*) CachedLootingSkillSet                                  OFFSET(get<T>, {0x1D0, 8, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_SelectVehicle
/// Size: 0x00E0 (0x0001A0 - 0x000280)
class UFortAthenaAIBotEvaluator_SelectVehicle : public UFortAthenaAIBotEvaluator_Movement
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 640;

public:
	SMember(FName)                                     VehicleDestinationKeyName                                   OFFSET(getStruct<T>, {0x1A0, 4, 0, 0})
	SMember(FName)                                     SelectVehicleMovementStateKeyName                           OFFSET(getStruct<T>, {0x1A4, 4, 0, 0})
	SMember(FName)                                     SelectVehicleStatusKeyName                                  OFFSET(getStruct<T>, {0x1A8, 4, 0, 0})
	SMember(FName)                                     SelectedVehicleKeyName                                      OFFSET(getStruct<T>, {0x1AC, 4, 0, 0})
	SMember(FScalableFloat)                            Enabled                                                     OFFSET(getStruct<T>, {0x1B8, 40, 0, 0})
	DMember(float)                                     VehicleSearchRadius                                         OFFSET(get<float>, {0x1E0, 4, 0, 0})
	DMember(bool)                                      bCanEnterOnlyWithHisConverter                               OFFSET(get<bool>, {0x1E4, 1, 0, 0})
	DMember(bool)                                      bCanEnterAsDriver                                           OFFSET(get<bool>, {0x1E5, 1, 0, 0})
	DMember(bool)                                      bCanEnterVehiclesInWater                                    OFFSET(get<bool>, {0x1E6, 1, 0, 0})
	DMember(bool)                                      bCanEnterOutOfFuelVehicles                                  OFFSET(get<bool>, {0x1E7, 1, 0, 0})
	DMember(bool)                                      bCanEnterWithPlayerDriver                                   OFFSET(get<bool>, {0x1E8, 1, 0, 0})
	DMember(bool)                                      bCanEnterOnlyMatchingPatrols                                OFFSET(get<bool>, {0x1E9, 1, 0, 0})
	SMember(FGameplayTagQuery)                         VehiclesFilterTagQuery                                      OFFSET(getStruct<T>, {0x1F0, 72, 0, 0})
	SMember(FGameplayTagQuery)                         SeatsFilterTagQuery                                         OFFSET(getStruct<T>, {0x238, 72, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_SmartObjects
/// Size: 0x00C8 (0x0001A0 - 0x000268)
class UFortAthenaAIBotEvaluator_SmartObjects : public UFortAthenaAIBotEvaluator_Movement
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 616;

public:
	CMember(class UFortAthenaAIRuntimeParameters_SmartObjectBase*) SmartObjectRuntimeParameters                    OFFSET(get<T>, {0x1A0, 8, 0, 0})
	CMember(class USmartObjectSubsystem*)              SmartObjectSubsystem                                        OFFSET(get<T>, {0x1A8, 8, 0, 0})
	SMember(FGameplayTag)                              EvaluationTag                                               OFFSET(getStruct<T>, {0x1B8, 4, 0, 0})
	DMember(bool)                                      bEvaluateSOValidityAfterChosen                              OFFSET(get<bool>, {0x1BC, 1, 0, 0})
	DMember(bool)                                      bEnableEntryLocationsSupport                                OFFSET(get<bool>, {0x1BD, 1, 0, 0})
	SMember(FScalableFloat)                            MaximumEntryLocationsChecksPerEvaluation                    OFFSET(getStruct<T>, {0x1C0, 40, 0, 0})
	SMember(FScalableFloat)                            EntryLocationFailuresBlacklistedTime                        OFFSET(getStruct<T>, {0x1E8, 40, 0, 0})
	CMember(class UCurveFloat*)                        DistanceToWeightCurveForSlotPicking                         OFFSET(get<T>, {0x210, 8, 0, 0})
	CMember(class UClass*)                             OverridenFilterClassForEntryPoints                          OFFSET(get<T>, {0x218, 8, 0, 0})
	CMember(TArray<FName>)                             ExecutionStatusesToCheckForAllowToAvoidGoingToSOKeyNames    OFFSET(get<T>, {0x220, 16, 0, 0})
	SMember(FName)                                     SmartObjectExecutionStatusKeyName                           OFFSET(getStruct<T>, {0x240, 4, 0, 0})
	SMember(FName)                                     SmartObjectMovementStateKeyName                             OFFSET(getStruct<T>, {0x244, 4, 0, 0})
	SMember(FName)                                     SmartObjectDestinationKeyName                               OFFSET(getStruct<T>, {0x248, 4, 0, 0})
	SMember(FName)                                     SmartObjectDestinationRotationKeyName                       OFFSET(getStruct<T>, {0x24C, 4, 0, 0})
	SMember(FName)                                     SmartObjectShouldMoveKeyName                                OFFSET(getStruct<T>, {0x250, 4, 0, 0})
	SMember(FName)                                     SmartObjectUrgencyKeyName                                   OFFSET(getStruct<T>, {0x254, 4, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_Sprinting
/// Size: 0x0090 (0x0000A8 - 0x000138)
class UFortAthenaAIBotEvaluator_Sprinting : public UFortAthenaAIBotEvaluator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 312;

public:
	SMember(FName)                                     AllowSprintKeyName                                          OFFSET(getStruct<T>, {0xA8, 4, 0, 0})
	SMember(FName)                                     AllowSlideKeyName                                           OFFSET(getStruct<T>, {0xAC, 4, 0, 0})
	SMember(FName)                                     JumpExecutionStatusName                                     OFFSET(getStruct<T>, {0xB0, 4, 0, 0})
	SMember(FName)                                     TacticalSprintExecutionStatusName                           OFFSET(getStruct<T>, {0xB4, 4, 0, 0})
	SMember(FName)                                     SlideExecutionStatusName                                    OFFSET(getStruct<T>, {0xB8, 4, 0, 0})
	SMember(FName)                                     UrgentMovementKeyName                                       OFFSET(getStruct<T>, {0xBC, 4, 0, 0})
	SMember(FName)                                     RangeAttackExecutionStatusName                              OFFSET(getStruct<T>, {0xC0, 4, 0, 0})
	SMember(FName)                                     MeleeAttackExecutionStatusName                              OFFSET(getStruct<T>, {0xC4, 4, 0, 0})
	SMember(FName)                                     ThrowableAttackExecutionStatusName                          OFFSET(getStruct<T>, {0xC8, 4, 0, 0})
	SMember(FFortBehaviorValue_Bool)                   ValidateSprintingBeforeTacticalSprinting                    OFFSET(getStruct<T>, {0xCC, 12, 0, 0})
	DMember(bool)                                      bSprintOnlyInWater                                          OFFSET(get<bool>, {0xEA, 1, 0, 0})
	DMember(bool)                                      bSprintOnlyInUrgentMode                                     OFFSET(get<bool>, {0xEB, 1, 0, 0})
	CMember(class UFortAthenaAIBotMovementDigestedSkillSet*) MovementSkillSet                                      OFFSET(get<T>, {0xF0, 8, 0, 0})
	CMember(class UFortAthenaAIBotAimingDigestedSkillSet*) AimingSkillSet                                          OFFSET(get<T>, {0xF8, 8, 0, 0})
	DMember(float)                                     TacticalSprintTriggerChance                                 OFFSET(get<float>, {0x100, 4, 0, 0})
	DMember(float)                                     TacticalSprintTriggerChanceInUrgentMovement                 OFFSET(get<float>, {0x104, 4, 0, 0})
	DMember(float)                                     TacticalSprintJumpTriggerChance                             OFFSET(get<float>, {0x108, 4, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_StealWall
/// Size: 0x00A8 (0x0000A8 - 0x000150)
class UFortAthenaAIBotEvaluator_StealWall : public UFortAthenaAIBotEvaluator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
	SMember(FName)                                     StealWallBuildTypeName                                      OFFSET(getStruct<T>, {0xA8, 4, 0, 0})
	SMember(FName)                                     StealWallBuildGridCoordName                                 OFFSET(getStruct<T>, {0xAC, 4, 0, 0})
	SMember(FName)                                     TargetActorName                                             OFFSET(getStruct<T>, {0xB0, 4, 0, 0})
	CMember(class UFortAthenaAIBotBuildingDigestedSkillSet*) CacheBuildingDigestedSkillSet                         OFFSET(get<T>, {0xC0, 8, 0, 0})
	CMember(class ABuildingActor*)                     CurrentBuildingTarget                                       OFFSET(get<T>, {0xC8, 8, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_StepBack
/// Size: 0x0030 (0x0001A0 - 0x0001D0)
class UFortAthenaAIBotEvaluator_StepBack : public UFortAthenaAIBotEvaluator_Movement
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 464;

public:
	CMember(class UFortAthenaAIBotRangeAttackDigestedSkillSet*) CachedRangeAttackDigestedSkillSet                  OFFSET(get<T>, {0x1A0, 8, 0, 0})
	CMember(class UAthenaAIServiceCover*)              CachedAIServiceCover                                        OFFSET(get<T>, {0x1A8, 8, 0, 0})
	SMember(FName)                                     StepBackExecutionStatusKeyName                              OFFSET(getStruct<T>, {0x1B8, 4, 0, 0})
	SMember(FName)                                     StepBackMovementStateKeyName                                OFFSET(getStruct<T>, {0x1BC, 4, 0, 0})
	SMember(FName)                                     StepBackDestinationKeyName                                  OFFSET(getStruct<T>, {0x1C0, 4, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_Storm
/// Size: 0x0060 (0x0001A0 - 0x000200)
class UFortAthenaAIBotEvaluator_Storm : public UFortAthenaAIBotEvaluator_Movement
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 512;

public:
	SMember(FName)                                     StormDestinationName                                        OFFSET(getStruct<T>, {0x1A0, 4, 0, 0})
	CMember(class AFortGameModeAthena*)                CacheAthenaGameMode                                         OFFSET(get<T>, {0x1B0, 8, 0, 0})
	CMember(class UBehaviorTreeComponent*)             CachedBTComp                                                OFFSET(get<T>, {0x1B8, 8, 0, 0})
	CMember(class UFortGameStateComponent_BattleRoyaleGamePhaseLogic*) CachedGamePhaseLogic                        OFFSET(get<T>, {0x1C0, 8, 0, 0})


	/// Functions
	// Function /Script/FortniteAIServer.FortAthenaAIBotEvaluator_Storm.OnSafeZoneStateChanged
	// void OnSafeZoneStateChanged(EFortSafeZoneState NewState);                                                                // [0xa7cd480] Final|Native|Public  
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_TagQueryToBBKey
/// Size: 0x0008 (0x0000F8 - 0x000100)
class UFortAthenaAIBotEvaluator_TagQueryToBBKey : public UFortAthenaAIBotEvaluator_TagQuery
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	SMember(FName)                                     LinkedBBKeyName                                             OFFSET(getStruct<T>, {0xF8, 4, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_TakeCover
/// Size: 0x0090 (0x0001A0 - 0x000230)
class UFortAthenaAIBotEvaluator_TakeCover : public UFortAthenaAIBotEvaluator_Movement
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 560;

public:
	CMember(class UFortAthenaAIBotRangeAttackDigestedSkillSet*) CacheRangeAttackDigestedSkillSet                   OFFSET(get<T>, {0x1A0, 8, 0, 0})
	CMember(class UFortAthenaAIBotAimingDigestedSkillSet*) CacheAimingDigestedSkillSet                             OFFSET(get<T>, {0x1A8, 8, 0, 0})
	CMember(class UAthenaAIServiceCover*)              CachedAIServiceCover                                        OFFSET(get<T>, {0x1B0, 8, 0, 0})
	SMember(FName)                                     DestinationKeyName                                          OFFSET(getStruct<T>, {0x1B8, 4, 0, 0})
	SMember(FName)                                     MoveToDestinationKeyName                                    OFFSET(getStruct<T>, {0x1BC, 4, 0, 0})
	SMember(FName)                                     HealingStatusKeyName                                        OFFSET(getStruct<T>, {0x1C0, 4, 0, 0})
	SMember(FName)                                     WeaponFireName                                              OFFSET(getStruct<T>, {0x1C4, 4, 0, 0})
	SMember(FName)                                     TargetActorName                                             OFFSET(getStruct<T>, {0x1C8, 4, 0, 0})
	SMember(FName)                                     BunkerStatusKeyName                                         OFFSET(getStruct<T>, {0x1CC, 4, 0, 0})
	CMember(class ABuildingActor*)                     CachedCoverBuildingActor                                    OFFSET(get<T>, {0x1E0, 8, 0, 0})
	CMember(TArray<class ABuildingActor*>)             ExcludedBuildingActors                                      OFFSET(get<T>, {0x1E8, 16, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_ThrowableAttack
/// Size: 0x0050 (0x0001B8 - 0x000208)
class UFortAthenaAIBotEvaluator_ThrowableAttack : public UFortAthenaAIBotEvaluator_Attack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 520;

public:
	SMember(FName)                                     WeaponTriggerThrowableName                                  OFFSET(getStruct<T>, {0x1B8, 4, 0, 0})
	SMember(FName)                                     ThrowableAttackIsReadyToThrowName                           OFFSET(getStruct<T>, {0x1BC, 4, 0, 0})
	CMember(class UFortAthenaAIBotAttackingDigestedSkillSet*) AttackingSkillSet                                    OFFSET(get<T>, {0x1C8, 8, 0, 0})
	CMember(class UFortAthenaAIBotRangeAttackDigestedSkillSet*) RangeAttackSkillSet                                OFFSET(get<T>, {0x1D0, 8, 0, 0})
	CMember(class UFortAthenaAIBotAimingDigestedSkillSet*) AimingSkillSet                                          OFFSET(get<T>, {0x1D8, 8, 0, 0})
	CMember(class UFortWorldItem*)                     ChosenWeapon                                                OFFSET(get<T>, {0x1E0, 8, 0, 0})
	CMember(class AFortPawn*)                          CachedFortPawn                                              OFFSET(get<T>, {0x1E8, 8, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_TrapOnPathDetected
/// Size: 0x0030 (0x0000A8 - 0x0000D8)
class UFortAthenaAIBotEvaluator_TrapOnPathDetected : public UFortAthenaAIBotEvaluator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	CMember(class UFortAthenaAIBotAimingDigestedSkillSet*) CacheAimingDigestedSkillSet                             OFFSET(get<T>, {0xA8, 8, 0, 0})
	SMember(FName)                                     TrapOnPathKeyName                                           OFFSET(getStruct<T>, {0xB0, 4, 0, 0})
	SMember(FName)                                     TrapActorOnPathKeyName                                      OFFSET(getStruct<T>, {0xB4, 4, 0, 0})
	SMember(FName)                                     TargetActorName                                             OFFSET(getStruct<T>, {0xB8, 4, 0, 0})
	SMember(FName)                                     AlertLevelName                                              OFFSET(getStruct<T>, {0xBC, 4, 0, 0})
	SMember(FName)                                     RangeAttackExecutionStatusName                              OFFSET(getStruct<T>, {0xC0, 4, 0, 0})
	CMember(class ABuildingTrap*)                      CurrentTrapTarget                                           OFFSET(get<T>, {0xD0, 8, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_VehicleLeaveSeat
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UFortAthenaAIBotEvaluator_VehicleLeaveSeat : public UFortAthenaAIBotEvaluator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FName)                                     LeaveSeatStatusKeyName                                      OFFSET(getStruct<T>, {0xA8, 4, 0, 0})
	DMember(bool)                                      bLeaveSeatWhenPlayerInVehicle                               OFFSET(get<bool>, {0xAE, 1, 0, 0})
	DMember(bool)                                      bLeaveSeatWhenConverterLeave                                OFFSET(get<bool>, {0xAF, 1, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_VehicleSwitchSeat
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UFortAthenaAIBotEvaluator_VehicleSwitchSeat : public UFortAthenaAIBotEvaluator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FName)                                     SwitchSeatStatusKeyName                                     OFFSET(getStruct<T>, {0xA8, 4, 0, 0})
	DMember(bool)                                      bSwitchToEmptyDriverSeat                                    OFFSET(get<bool>, {0xAE, 1, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_WaitForPassengers
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UFortAthenaAIBotEvaluator_WaitForPassengers : public UFortAthenaAIBotEvaluator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FName)                                     WaitForPassengersStatusKeyName                              OFFSET(getStruct<T>, {0xA8, 4, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_Warmup
/// Size: 0x0030 (0x0000A8 - 0x0000D8)
class UFortAthenaAIBotEvaluator_Warmup : public UFortAthenaAIBotEvaluator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	SMember(FName)                                     WarmupPlayEmoteExecutionStatusKeyName                       OFFSET(getStruct<T>, {0xA8, 4, 0, 0})
	SMember(FName)                                     WarmupLootAndShootExecutionStatusKeyName                    OFFSET(getStruct<T>, {0xAC, 4, 0, 0})
	SMember(FName)                                     WarmupIdleExecutionStatusKeyName                            OFFSET(getStruct<T>, {0xB0, 4, 0, 0})
	CMember(class UFortAthenaAIBotWarmupDigestedSkillSet*) CacheWarmupDigestedSkillSet                             OFFSET(get<T>, {0xC0, 8, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_WeaponSelection
/// Size: 0x0038 (0x0000A8 - 0x0000E0)
class UFortAthenaAIBotEvaluator_WeaponSelection : public UFortAthenaAIBotEvaluator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	SMember(FName)                                     ThrowableAttackIsReadyToThrowName                           OFFSET(getStruct<T>, {0xA8, 4, 0, 0})
	SMember(FName)                                     WeaponKeyName                                               OFFSET(getStruct<T>, {0xAC, 4, 0, 0})
	SMember(FName)                                     TargetActorName                                             OFFSET(getStruct<T>, {0xB0, 4, 0, 0})
	SMember(FName)                                     UseItemSelectNewWeaponKeyName                               OFFSET(getStruct<T>, {0xB4, 4, 0, 0})
	CMember(class UFortAthenaAIBotRangeAttackDigestedSkillSet*) CacheRangeAttackDigestedSkillSet                   OFFSET(get<T>, {0xC8, 8, 0, 0})
	CMember(class UFortAthenaAIBotAttackingDigestedSkillSet*) CacheAttackingDigestedSkillSet                       OFFSET(get<T>, {0xD0, 8, 0, 0})
	CMember(class UFortAthenaAIBotAimingDigestedSkillSet*) CacheAimingDigestedSkillSet                             OFFSET(get<T>, {0xD8, 8, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_Zipline
/// Size: 0x00B0 (0x0001A0 - 0x000250)
class UFortAthenaAIBotEvaluator_Zipline : public UFortAthenaAIBotEvaluator_Movement
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 592;

public:
	SMember(FName)                                     CurrentDestinationKeyName                                   OFFSET(getStruct<T>, {0x1A0, 4, 0, 0})
	SMember(FName)                                     ZiplineTargetKeyName                                        OFFSET(getStruct<T>, {0x1A4, 4, 0, 0})
	SMember(FName)                                     LastZiplineUsedName                                         OFFSET(getStruct<T>, {0x1A8, 4, 0, 0})
	SMember(FName)                                     ZiplineMoveExecutionStatusKeyName                           OFFSET(getStruct<T>, {0x1AC, 4, 0, 0})
	SMember(FName)                                     ZiplineEntryLocationKeyName                                 OFFSET(getStruct<T>, {0x1B0, 4, 0, 0})
	SMember(FName)                                     ZiplineExitLocationKeyName                                  OFFSET(getStruct<T>, {0x1B4, 4, 0, 0})
	SMember(FName)                                     ZiplineLastUsageTimeName                                    OFFSET(getStruct<T>, {0x1B8, 4, 0, 0})
	SMember(FName)                                     ZiplineUsageExecutionStatusName                             OFFSET(getStruct<T>, {0x1BC, 4, 0, 0})
	SMember(FScalableFloat)                            WaitTimeBetweenZiplineRandomChoices                         OFFSET(getStruct<T>, {0x1C0, 40, 0, 0})
	SMember(FScalableFloat)                            ProbabilityToUseZipline                                     OFFSET(getStruct<T>, {0x1E8, 40, 0, 0})


	/// Functions
	// Function /Script/FortniteAIServer.FortAthenaAIBotEvaluator_Zipline.OnZiplineStateChanged
	// void OnZiplineStateChanged(bool bIsZiplining, class AFortPlayerPawn* FortPlayerPawn);                                    // [0xa7f01f8] Final|Native|Protected 
};

/// Class /Script/FortniteAIServer.FortAthenaAIEvaluator_BlueprintBase
/// Size: 0x0088 (0x0000A0 - 0x000128)
class UFortAthenaAIEvaluator_BlueprintBase : public UFortAthenaAIEvaluator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
	DMember(bool)                                      bBlockWeaponActions                                         OFFSET(get<bool>, {0xA0, 1, 0, 0})
	DMember(bool)                                      bGameplayAbilityEvaluator                                   OFFSET(get<bool>, {0xA1, 1, 0, 0})
	SMember(FGameplayAbilityEvaluatorModule)           GameplayAbilityEvaluatorModule                              OFFSET(getStruct<T>, {0xA8, 40, 0, 0})
	DMember(bool)                                      bCooldownEvaluator                                          OFFSET(get<bool>, {0xD0, 1, 0, 0})
	DMember(float)                                     Cooldown                                                    OFFSET(get<float>, {0xD4, 4, 0, 0})
	DMember(float)                                     CooldownVariation                                           OFFSET(get<float>, {0xD8, 4, 0, 0})
	CMember(TEnumAsByte<ECooldownType>)                CooldownType                                                OFFSET(get<T>, {0xDC, 1, 0, 0})
	DMember(bool)                                      bDistanceEvaluator                                          OFFSET(get<bool>, {0xDD, 1, 0, 0})
	DMember(float)                                     StartDistance                                               OFFSET(get<float>, {0xE0, 4, 0, 0})
	DMember(float)                                     OngoingDistance                                             OFFSET(get<float>, {0xE4, 4, 0, 0})
	SMember(FName)                                     DistanceTargetKeyName                                       OFFSET(getStruct<T>, {0xE8, 4, 0, 0})
	DMember(bool)                                      bDurationEvaluator                                          OFFSET(get<bool>, {0xEC, 1, 0, 0})
	DMember(float)                                     duration                                                    OFFSET(get<float>, {0xF0, 4, 0, 0})
	DMember(float)                                     DurationVariation                                           OFFSET(get<float>, {0xF4, 4, 0, 0})
	DMember(bool)                                      bEvaluateOnBlackboardKeyChange                              OFFSET(get<bool>, {0xFA, 1, 0, 0})
	CMember(TArray<FName>)                             ListeningBlackboardKeyNames                                 OFFSET(get<T>, {0x100, 16, 0, 0})


	/// Functions
	// Function /Script/FortniteAIServer.FortAthenaAIEvaluator_BlueprintBase.OnExit
	// void OnExit(class UBehaviorTreeComponent* OwnerComp);                                                                    // [0x20c3f9c] Event|Protected|BlueprintEvent 
	// Function /Script/FortniteAIServer.FortAthenaAIEvaluator_BlueprintBase.OnEnter
	// void OnEnter(class UBehaviorTreeComponent* OwnerComp);                                                                   // [0x20c3f9c] Event|Protected|BlueprintEvent 
	// Function /Script/FortniteAIServer.FortAthenaAIEvaluator_BlueprintBase.EvaluateStartingConditions
	// bool EvaluateStartingConditions(class UBehaviorTreeComponent* OwnerComp);                                                // [0xa7eff9c] Native|Event|Protected|BlueprintEvent|Const 
	// Function /Script/FortniteAIServer.FortAthenaAIEvaluator_BlueprintBase.EvaluateOngoingConditions
	// bool EvaluateOngoingConditions(class UBehaviorTreeComponent* OwnerComp);                                                 // [0xa7eff08] Native|Event|Protected|BlueprintEvent|Const 
};

/// Class /Script/FortniteAIServer.FortAthenaAIEvaluator_DormantUntilPhase
/// Size: 0x00A8 (0x0000A0 - 0x000148)
class UFortAthenaAIEvaluator_DormantUntilPhase : public UFortAthenaAIEvaluator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 328;

public:
	SMember(FScalableFloat)                            bIsEnabled                                                  OFFSET(getStruct<T>, {0xA0, 40, 0, 0})
	DMember(bool)                                      bDisabledInCreative                                         OFFSET(get<bool>, {0xC8, 1, 0, 0})
	CMember(EAthenaGamePhaseStep)                      RequiredGamePhaseStep                                       OFFSET(get<T>, {0xC9, 1, 0, 0})
	SMember(FScalableFloat)                            DelayAfterPhase                                             OFFSET(getStruct<T>, {0xD0, 40, 0, 0})
	SMember(FScalableFloat)                            RandomDeviationAfterPhase                                   OFFSET(getStruct<T>, {0xF8, 40, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaAIEvaluator_FleeEnvDanger
/// Size: 0x0028 (0x0000A0 - 0x0000C8)
class UFortAthenaAIEvaluator_FleeEnvDanger : public UFortAthenaAIEvaluator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	DMember(float)                                     MaximumCheckDistance                                        OFFSET(get<float>, {0xA0, 4, 0, 0})
	DMember(float)                                     AdditionalFleeDistance                                      OFFSET(get<float>, {0xA4, 4, 0, 0})
	SMember(FName)                                     EnvironmentalDangerExecutionStatusName                      OFFSET(getStruct<T>, {0xA8, 4, 0, 0})
	SMember(FName)                                     EnvironmentalDangerFleeDirectionFromKeyName                 OFFSET(getStruct<T>, {0xAC, 4, 0, 0})
	SMember(FName)                                     EnvironmentalDangerFleeDirectionToKeyName                   OFFSET(getStruct<T>, {0xB0, 4, 0, 0})
	SMember(FName)                                     EnvironmentalDangerFleeDistanceKeyName                      OFFSET(getStruct<T>, {0xB4, 4, 0, 0})
	CMember(class AAIController*)                      CachedController                                            OFFSET(get<T>, {0xC0, 8, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaAIEvaluator_FollowGroupLeader
/// Size: 0x0020 (0x0001A0 - 0x0001C0)
class UFortAthenaAIEvaluator_FollowGroupLeader : public UFortAthenaAIBotEvaluator_Movement
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 448;

public:
	SMember(FName)                                     FollowGroupLeaderStatusKeyName                              OFFSET(getStruct<T>, {0x1A0, 4, 0, 0})
	SMember(FName)                                     FollowGroupLeaderMovementStateKeyName                       OFFSET(getStruct<T>, {0x1A4, 4, 0, 0})
	SMember(FName)                                     FollowGroupLeaderDestinationKeyName                         OFFSET(getStruct<T>, {0x1A8, 4, 0, 0})
	SMember(FName)                                     TooFarFromLeaderKeyName                                     OFFSET(getStruct<T>, {0x1AC, 4, 0, 0})
	CMember(class UFortPawnComponent_AIGroup*)         CachedAIGroupComponent                                      OFFSET(get<T>, {0x1B8, 8, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaAIEvaluator_Leash
/// Size: 0x0028 (0x0000A0 - 0x0000C8)
class UFortAthenaAIEvaluator_Leash : public UFortAthenaAIEvaluator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	SMember(FName)                                     GoalIsInsideLeashKeyName                                    OFFSET(getStruct<T>, {0xA0, 4, 0, 0})
	SMember(FName)                                     AIIsInsideLeashKeyName                                      OFFSET(getStruct<T>, {0xA4, 4, 0, 0})
	SMember(FName)                                     LeashCenterLocationKeyName                                  OFFSET(getStruct<T>, {0xA8, 4, 0, 0})
	CMember(class UFortAthenaLeashComponent*)          CachedLeashComponent                                        OFFSET(get<T>, {0xB8, 8, 0, 0})
	CMember(class UFortAIGoalComponent*)               CachedAIGoalComponent                                       OFFSET(get<T>, {0xC0, 8, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaAIEvaluator_NearbyActorsPerception
/// Size: 0x01B0 (0x0000A0 - 0x000250)
class UFortAthenaAIEvaluator_NearbyActorsPerception : public UFortAthenaAIEvaluator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 592;

public:
	SMember(FName)                                     FoundNearbyActorKeyName                                     OFFSET(getStruct<T>, {0xA0, 4, 0, 0})
	SMember(FScalableFloat)                            MinimumUpdateInterval                                       OFFSET(getStruct<T>, {0xA8, 40, 0, 0})
	DMember(int32_t)                                   RequiredTypes                                               OFFSET(get<int32_t>, {0xD0, 4, 0, 0})
	SMember(FScalableFloat)                            MinimumDistanceToActors                                     OFFSET(getStruct<T>, {0xD8, 40, 0, 0})
	CMember(TArray<TEnumAsByte<ETeamAttitude>>)        RequiredAttitudes                                           OFFSET(get<T>, {0x100, 16, 0, 0})
	DMember(bool)                                      bRequireLoS                                                 OFFSET(get<bool>, {0x110, 1, 0, 0})
	SMember(FGameplayTagQuery)                         RequiredTagsQuery                                           OFFSET(getStruct<T>, {0x118, 72, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaAIEvaluator_SmartObjects
/// Size: 0x00C8 (0x0000A0 - 0x000168)
class UFortAthenaAIEvaluator_SmartObjects : public UFortAthenaAIEvaluator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 360;

public:
	CMember(class UFortAthenaAIRuntimeParameters_SmartObjectBase*) SmartObjectRuntimeParameters                    OFFSET(get<T>, {0xA0, 8, 0, 0})
	CMember(class USmartObjectSubsystem*)              SmartObjectSubsystem                                        OFFSET(get<T>, {0xA8, 8, 0, 0})
	SMember(FGameplayTag)                              EvaluationTag                                               OFFSET(getStruct<T>, {0xB8, 4, 0, 0})
	DMember(bool)                                      bEvaluateSOValidityAfterChosen                              OFFSET(get<bool>, {0xBC, 1, 0, 0})
	DMember(bool)                                      bEnableEntryLocationsSupport                                OFFSET(get<bool>, {0xBD, 1, 0, 0})
	SMember(FScalableFloat)                            MaximumEntryLocationsChecksPerEvaluation                    OFFSET(getStruct<T>, {0xC0, 40, 0, 0})
	SMember(FScalableFloat)                            EntryLocationFailuresBlacklistedTime                        OFFSET(getStruct<T>, {0xE8, 40, 0, 0})
	CMember(class UCurveFloat*)                        DistanceToWeightCurveForSlotPicking                         OFFSET(get<T>, {0x110, 8, 0, 0})
	CMember(class UClass*)                             OverridenFilterClassForEntryPoints                          OFFSET(get<T>, {0x118, 8, 0, 0})
	CMember(TArray<FName>)                             ExecutionStatusesToCheckForAllowToAvoidGoingToSOKeyNames    OFFSET(get<T>, {0x120, 16, 0, 0})
	SMember(FName)                                     SmartObjectExecutionStatusKeyName                           OFFSET(getStruct<T>, {0x140, 4, 0, 0})
	SMember(FName)                                     SmartObjectMovementStateKeyName                             OFFSET(getStruct<T>, {0x144, 4, 0, 0})
	SMember(FName)                                     SmartObjectDestinationKeyName                               OFFSET(getStruct<T>, {0x148, 4, 0, 0})
	SMember(FName)                                     SmartObjectDestinationRotationKeyName                       OFFSET(getStruct<T>, {0x14C, 4, 0, 0})
	SMember(FName)                                     SmartObjectShouldMoveKeyName                                OFFSET(getStruct<T>, {0x150, 4, 0, 0})
	SMember(FName)                                     SmartObjectUrgencyKeyName                                   OFFSET(getStruct<T>, {0x154, 4, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaAIEvaluator_SpeechBubble
/// Size: 0x0008 (0x000248 - 0x000250)
class UFortAthenaAIEvaluator_SpeechBubble : public UFortAthenaAIEvaluator_NearbyActorsPerception
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 592;

public:
	CMember(class UFortPawnComponent_SpeechBubble*)    CachedSpeechBubbleComponent                                 OFFSET(get<T>, {0x248, 8, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaBTContext_SuppressAutomaticAttackCheck
/// Size: 0x0000 (0x000070 - 0x000070)
class UFortAthenaBTContext_SuppressAutomaticAttackCheck : public UFortBTService_ContextOverride
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /Script/FortniteAIServer.FortAthenaBTService_AgentOffNavMesh
/// Size: 0x0038 (0x000070 - 0x0000A8)
class UFortAthenaBTService_AgentOffNavMesh : public UBTService
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	SMember(FName)                                     AgentIsOffNavMeshKeyName                                    OFFSET(getStruct<T>, {0x70, 4, 0, 0})
	DMember(bool)                                      bEvaluateOnTick                                             OFFSET(get<bool>, {0x74, 1, 0, 0})
	SMember(FScalableFloat)                            TickInterval                                                OFFSET(getStruct<T>, {0x78, 40, 0, 0})
	DMember(bool)                                      bEvaluateOnMoveRequestFinished                              OFFSET(get<bool>, {0xA0, 1, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaBTService_AIEvaluator
/// Size: 0x0010 (0x000070 - 0x000080)
class UFortAthenaBTService_AIEvaluator : public UBTService
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FGameplayTag)                              InjectionTag                                                OFFSET(getStruct<T>, {0x70, 4, 0, 0})
	CMember(class UClass*)                             AIEvaluatorClass                                            OFFSET(get<T>, {0x78, 8, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaBTService_ApplyGameplayTags
/// Size: 0x0020 (0x000070 - 0x000090)
class UFortAthenaBTService_ApplyGameplayTags : public UBTService
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FGameplayTagContainer)                     GameplayTagsToApply                                         OFFSET(getStruct<T>, {0x70, 32, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaBTService_ApplyPatrolTags
/// Size: 0x0000 (0x000070 - 0x000070)
class UFortAthenaBTService_ApplyPatrolTags : public UBTService
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /Script/FortniteAIServer.FortAthenaBTService_BuildConstruction
/// Size: 0x0018 (0x000070 - 0x000088)
class UFortAthenaBTService_BuildConstruction : public UBTService
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FName)                                     StealWallBuildName                                          OFFSET(getStruct<T>, {0x70, 4, 0, 0})
	SMember(FName)                                     StealWallBuildTypeName                                      OFFSET(getStruct<T>, {0x74, 4, 0, 0})
	SMember(FName)                                     StealWallBuildGridCoordName                                 OFFSET(getStruct<T>, {0x78, 4, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaBTService_Clamber
/// Size: 0x0038 (0x000070 - 0x0000A8)
class UFortAthenaBTService_Clamber : public UBTService
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	SMember(FName)                                     ClamberExecutionStatusName                                  OFFSET(getStruct<T>, {0x70, 4, 0, 0})
	SMember(FName)                                     ClamberOriginLocationName                                   OFFSET(getStruct<T>, {0x74, 4, 0, 0})
	SMember(FName)                                     ClamberDestinationLocationName                              OFFSET(getStruct<T>, {0x78, 4, 0, 0})
	SMember(FName)                                     ClamberAbilityStatusName                                    OFFSET(getStruct<T>, {0x7C, 4, 0, 0})
	SMember(FName)                                     JumpExecutionStatusName                                     OFFSET(getStruct<T>, {0x80, 4, 0, 0})
	SMember(FName)                                     CrouchExecutionStatusName                                   OFFSET(getStruct<T>, {0x84, 4, 0, 0})
	DMember(uint32_t)                                  FirstJumpRetryMaxCount                                      OFFSET(get<uint32_t>, {0x94, 4, 0, 0})
	DMember(uint32_t)                                  ClamberAttemptRetryMaxCount                                 OFFSET(get<uint32_t>, {0x98, 4, 0, 0})
	DMember(float)                                     FirstJumpRetryDelay                                         OFFSET(get<float>, {0x9C, 4, 0, 0})
	DMember(float)                                     FirstJumpClamberMaxStartDelay                               OFFSET(get<float>, {0xA0, 4, 0, 0})
	DMember(float)                                     ClamberRetryDelay                                           OFFSET(get<float>, {0xA4, 4, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaBTService_CopyBlackboardVariable
/// Size: 0x0058 (0x000070 - 0x0000C8)
class UFortAthenaBTService_CopyBlackboardVariable : public UBTService
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	SMember(FBlackboardKeySelector)                    SourceBlackboardKey                                         OFFSET(getStruct<T>, {0x70, 40, 0, 0})
	SMember(FBlackboardKeySelector)                    DestinationBlackboardKey                                    OFFSET(getStruct<T>, {0x98, 40, 0, 0})
	DMember(bool)                                      bCopyOnBecomeRelevant                                       OFFSET(get<bool>, {0xC0, 1, 1, 0})
	DMember(bool)                                      bCopyOnCeaseRelevant                                        OFFSET(get<bool>, {0xC0, 1, 1, 1})
	DMember(bool)                                      bCopyWhenSourceValueChange                                  OFFSET(get<bool>, {0xC0, 1, 1, 2})
};

/// Class /Script/FortniteAIServer.FortAthenaBTService_Crouch
/// Size: 0x0008 (0x000070 - 0x000078)
class UFortAthenaBTService_Crouch : public UBTService
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	SMember(FName)                                     CrouchExecutionStatusName                                   OFFSET(getStruct<T>, {0x70, 4, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaBTService_DontForgetCurrentThreat
/// Size: 0x0000 (0x000070 - 0x000070)
class UFortAthenaBTService_DontForgetCurrentThreat : public UBTService
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /Script/FortniteAIServer.FortAthenaBTService_Escape
/// Size: 0x0010 (0x000070 - 0x000080)
class UFortAthenaBTService_Escape : public UBTService
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FName)                                     EscapeKeyName                                               OFFSET(getStruct<T>, {0x70, 4, 0, 0})
	SMember(FName)                                     EscapeFromStormKeyName                                      OFFSET(getStruct<T>, {0x78, 4, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaBTService_Interact
/// Size: 0x00D0 (0x000070 - 0x000140)
class UFortAthenaBTService_Interact : public UBTService
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
	SMember(FBlackboardKeySelector)                    InteractExecutionStatusKeySelector                          OFFSET(getStruct<T>, {0x70, 40, 0, 0})
	SMember(FBlackboardKeySelector)                    InteractContextInfoKeySelector                              OFFSET(getStruct<T>, {0x98, 40, 0, 0})
	SMember(FBlackboardKeySelector)                    InteractObjectKeySelector                                   OFFSET(getStruct<T>, {0xC0, 40, 0, 0})
	SMember(FBlackboardKeySelector)                    ExecutionStatusKeySelector                                  OFFSET(getStruct<T>, {0xE8, 40, 0, 0})
	SMember(FBlackboardKeySelector)                    MovementStateKeySelector                                    OFFSET(getStruct<T>, {0x110, 40, 0, 0})
	CMember(TEnumAsByte<EInteractionBeingAttempted>)   InteractionBeingAttempted                                   OFFSET(get<T>, {0x138, 1, 0, 0})
	DMember(bool)                                      bRequireDistanceCheck                                       OFFSET(get<bool>, {0x139, 1, 0, 0})
	DMember(bool)                                      bRequireBlockedCheck                                        OFFSET(get<bool>, {0x13A, 1, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaBTService_Jump
/// Size: 0x0018 (0x000070 - 0x000088)
class UFortAthenaBTService_Jump : public UBTService
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FName)                                     JumpExecutionStatusName                                     OFFSET(getStruct<T>, {0x70, 4, 0, 0})
	SMember(FName)                                     CrouchExecutionStatusName                                   OFFSET(getStruct<T>, {0x78, 4, 0, 0})
	DMember(float)                                     JumpInputReleaseDelay                                       OFFSET(get<float>, {0x80, 4, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaBTService_JetpackStrafe
/// Size: 0x0010 (0x000088 - 0x000098)
class UFortAthenaBTService_JetpackStrafe : public UFortAthenaBTService_Jump
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	SMember(FName)                                     JetpackStrafeExecutionStatusName                            OFFSET(getStruct<T>, {0x88, 4, 0, 0})
	CMember(class UFortAthenaAIBotEvasiveManeuversDigestedSkillSet*) CacheEMDigestedSkillSet                       OFFSET(get<T>, {0x90, 8, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaBTService_JumpOffBus
/// Size: 0x0008 (0x000070 - 0x000078)
class UFortAthenaBTService_JumpOffBus : public UBTService
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	SMember(FName)                                     JumpOffBusExecutionStatusName                               OFFSET(getStruct<T>, {0x70, 4, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaBTService_ManageWeapon
/// Size: 0x0040 (0x000070 - 0x0000B0)
class UFortAthenaBTService_ManageWeapon : public UBTService
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FName)                                     WeaponFireName                                              OFFSET(getStruct<T>, {0x70, 4, 0, 0})
	SMember(FName)                                     WeaponTriggerMeleeName                                      OFFSET(getStruct<T>, {0x74, 4, 0, 0})
	SMember(FName)                                     WeaponTriggerThrowableName                                  OFFSET(getStruct<T>, {0x78, 4, 0, 0})
	SMember(FName)                                     WeaponReloadName                                            OFFSET(getStruct<T>, {0x7C, 4, 0, 0})
	SMember(FName)                                     WeaponName                                                  OFFSET(getStruct<T>, {0x80, 4, 0, 0})
	SMember(FName)                                     WeaponTargetingName                                         OFFSET(getStruct<T>, {0x84, 4, 0, 0})
	SMember(FName)                                     SprintExecutionStatusName                                   OFFSET(getStruct<T>, {0x88, 4, 0, 0})
	SMember(FName)                                     TacticalSprintExecutionStatusName                           OFFSET(getStruct<T>, {0x8C, 4, 0, 0})
	SMember(FName)                                     HealingStatusKeyName                                        OFFSET(getStruct<T>, {0x90, 4, 0, 0})
	SMember(FName)                                     BlockWeaponActionsKeyName                                   OFFSET(getStruct<T>, {0x94, 4, 0, 0})
	DMember(bool)                                      bEndChargeOnFireStop                                        OFFSET(get<bool>, {0xAC, 1, 0, 0})


	/// Functions
	// Function /Script/FortniteAIServer.FortAthenaBTService_ManageWeapon.ManageWeaponTargeting
	// void ManageWeaponTargeting(class UBehaviorTreeComponent* OwnerComp);                                                     // [0xa7f0030] Final|Native|Protected|Const 
};

/// Class /Script/FortniteAIServer.FortAthenaBTService_ManageVehicleWeapon
/// Size: 0x0000 (0x0000B0 - 0x0000B0)
class UFortAthenaBTService_ManageVehicleWeapon : public UFortAthenaBTService_ManageWeapon
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
};

/// Class /Script/FortniteAIServer.FortAthenaBTService_ModulateVehicleSpeedUsingDistBetween
/// Size: 0x0070 (0x000070 - 0x0000E0)
class UFortAthenaBTService_ModulateVehicleSpeedUsingDistBetween : public UBTService
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	SMember(FBlackboardKeySelector)                    BlackboardKeyA                                              OFFSET(getStruct<T>, {0x70, 40, 0, 0})
	SMember(FBlackboardKeySelector)                    BlackboardKeyB                                              OFFSET(getStruct<T>, {0x98, 40, 0, 0})
	DMember(float)                                     MinDistance                                                 OFFSET(get<float>, {0xC0, 4, 0, 0})
	DMember(float)                                     MaxDistance                                                 OFFSET(get<float>, {0xC4, 4, 0, 0})
	DMember(float)                                     MinDistanceSpeed                                            OFFSET(get<float>, {0xC8, 4, 0, 0})
	DMember(float)                                     MaxDistanceSpeed                                            OFFSET(get<float>, {0xCC, 4, 0, 0})
	DMember(bool)                                      bCalculateAs2D                                              OFFSET(get<bool>, {0xD0, 1, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaBTService_MovementListener
/// Size: 0x0068 (0x000070 - 0x0000D8)
class UFortAthenaBTService_MovementListener : public UBTService
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	SMember(FName)                                     MovementStateKeyName                                        OFFSET(getStruct<T>, {0x70, 4, 0, 0})
	SMember(FName)                                     IsStuckKeyName                                              OFFSET(getStruct<T>, {0x74, 4, 0, 0})
	DMember(bool)                                      bSuccessPartialAsFail                                       OFFSET(get<bool>, {0x78, 1, 0, 0})
	SMember(FScalableFloat)                            MaxFailCount                                                OFFSET(getStruct<T>, {0x80, 40, 0, 0})
	SMember(FScalableFloat)                            MaxDurationToFail                                           OFFSET(getStruct<T>, {0xA8, 40, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaBTService_Patrolling
/// Size: 0x0020 (0x000070 - 0x000090)
class UFortAthenaBTService_Patrolling : public UBTService
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FName)                                     PatrollingAppendDestinationKeyName                          OFFSET(getStruct<T>, {0x70, 4, 0, 0})
	DMember(float)                                     AcceptableRadius                                            OFFSET(get<float>, {0x78, 4, 0, 0})
	CMember(class UClass*)                             FilterClass                                                 OFFSET(get<T>, {0x80, 8, 0, 0})
	DMember(bool)                                      bAllowPartialPath                                           OFFSET(get<bool>, {0x88, 1, 1, 0})
	DMember(bool)                                      bProjectGoalLocation                                        OFFSET(get<bool>, {0x88, 1, 1, 1})
};

/// Class /Script/FortniteAIServer.FortAthenaBTService_PauseVehicle
/// Size: 0x0000 (0x000070 - 0x000070)
class UFortAthenaBTService_PauseVehicle : public UBTService
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /Script/FortniteAIServer.FortAthenaBTService_PickUpLoot
/// Size: 0x0020 (0x000070 - 0x000090)
class UFortAthenaBTService_PickUpLoot : public UBTService
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FName)                                     LootObjectKeyName                                           OFFSET(getStruct<T>, {0x70, 4, 0, 0})
	SMember(FName)                                     ExecutionStatusName                                         OFFSET(getStruct<T>, {0x74, 4, 0, 0})
	SMember(FName)                                     InteractionExecutionStatusName                              OFFSET(getStruct<T>, {0x78, 4, 0, 0})
	SMember(FName)                                     InteractionContextInfoName                                  OFFSET(getStruct<T>, {0x7C, 4, 0, 0})
	SMember(FName)                                     MovementStateKeyName                                        OFFSET(getStruct<T>, {0x80, 4, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaBTService_PropagatePatrolProgressToPassengers
/// Size: 0x0008 (0x000070 - 0x000078)
class UFortAthenaBTService_PropagatePatrolProgressToPassengers : public UBTService
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	SMember(FName)                                     PatrollingAppendDestinationKeyName                          OFFSET(getStruct<T>, {0x70, 4, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaBTService_Revive
/// Size: 0x0020 (0x000070 - 0x000090)
class UFortAthenaBTService_Revive : public UBTService
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FName)                                     ReviveTargetKeyName                                         OFFSET(getStruct<T>, {0x70, 4, 0, 0})
	SMember(FName)                                     ExecutionStatusName                                         OFFSET(getStruct<T>, {0x74, 4, 0, 0})
	SMember(FName)                                     MoveToPathMovementStateName                                 OFFSET(getStruct<T>, {0x78, 4, 0, 0})
	SMember(FName)                                     InteractionExecutionStatusName                              OFFSET(getStruct<T>, {0x7C, 4, 0, 0})
	SMember(FName)                                     InteractionContextInfoName                                  OFFSET(getStruct<T>, {0x80, 4, 0, 0})
	DMember(bool)                                      bDisableLeash                                               OFFSET(get<bool>, {0x84, 1, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaBTService_SetBlackboardBool
/// Size: 0x0030 (0x000070 - 0x0000A0)
class UFortAthenaBTService_SetBlackboardBool : public UBTService
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	SMember(FBlackboardKeySelector)                    BlackboardKey                                               OFFSET(getStruct<T>, {0x70, 40, 0, 0})
	DMember(bool)                                      bBlackboardValue                                            OFFSET(get<bool>, {0x98, 1, 0, 0})
	CMember(EBTSetBlackboardBoolExitActions)           ExitAction                                                  OFFSET(get<T>, {0x99, 1, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaBTService_SetExecutionStatus
/// Size: 0x0008 (0x000098 - 0x0000A0)
class UFortAthenaBTService_SetExecutionStatus : public UBTService_BlackboardBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	CMember(EExecutionStatus)                          ExecutionStatus                                             OFFSET(get<T>, {0x98, 1, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaBTService_Slide
/// Size: 0x0008 (0x000070 - 0x000078)
class UFortAthenaBTService_Slide : public UBTService
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	SMember(FName)                                     SlideExecutionStatusName                                    OFFSET(getStruct<T>, {0x70, 4, 0, 0})


	/// Functions
	// Function /Script/FortniteAIServer.FortAthenaBTService_Slide.OnStopSliding
	// void OnStopSliding(class AFortPlayerPawn* Pawn);                                                                         // [0xa7f0140] Final|Native|Private 
};

/// Class /Script/FortniteAIServer.FortAthenaBTService_SmartObject
/// Size: 0x0010 (0x000070 - 0x000080)
class UFortAthenaBTService_SmartObject : public UBTService
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FName)                                     SmartObjectStatusKeyName                                    OFFSET(getStruct<T>, {0x70, 4, 0, 0})
	SMember(FName)                                     SmartObjectDestinationKeyName                               OFFSET(getStruct<T>, {0x74, 4, 0, 0})
	SMember(FGameplayTag)                              EvaluationTag                                               OFFSET(getStruct<T>, {0x78, 4, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaBTService_Sprinting
/// Size: 0x0070 (0x000070 - 0x0000E0)
class UFortAthenaBTService_Sprinting : public UBTService
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	SMember(FName)                                     SprintExecutionStatusName                                   OFFSET(getStruct<T>, {0xB0, 4, 0, 0})
	SMember(FName)                                     TacticalSprintExecutionStatusName                           OFFSET(getStruct<T>, {0xB4, 4, 0, 0})
	SMember(FName)                                     TacticalSprintOverridenName                                 OFFSET(getStruct<T>, {0xB8, 4, 0, 0})
	SMember(FFortBehaviorValue_Bool)                   EnableSprinting                                             OFFSET(getStruct<T>, {0xBC, 12, 0, 0})
	SMember(FFortBehaviorValue_Bool)                   ValidateSprintingBeforeTacticalSprinting                    OFFSET(getStruct<T>, {0xC8, 12, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaBTService_UpdateTarget
/// Size: 0x0000 (0x000070 - 0x000070)
class UFortAthenaBTService_UpdateTarget : public UBTService
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /Script/FortniteAIServer.FortAthenaBTService_UseItem
/// Size: 0x0030 (0x000070 - 0x0000A0)
class UFortAthenaBTService_UseItem : public UBTService
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	SMember(FName)                                     ActionObjectKeyName                                         OFFSET(getStruct<T>, {0x70, 4, 0, 0})
	SMember(FName)                                     ExecutionStatusKeyName                                      OFFSET(getStruct<T>, {0x74, 4, 0, 0})
	SMember(FName)                                     CanMoveWhileUsingItemKeyName                                OFFSET(getStruct<T>, {0x78, 4, 0, 0})
	DMember(int32_t)                                   MaxEquipAttempts                                            OFFSET(get<int32_t>, {0x7C, 4, 0, 0})
	DMember(float)                                     EquipRetryInterval                                          OFFSET(get<float>, {0x80, 4, 0, 0})
	DMember(float)                                     UseItemDelay                                                OFFSET(get<float>, {0x84, 4, 0, 0})
	DMember(float)                                     MinWaitTimeBetweenUses                                      OFFSET(get<float>, {0x88, 4, 0, 0})
	DMember(float)                                     MaxWaitTimeBetweenUses                                      OFFSET(get<float>, {0x8C, 4, 0, 0})
	DMember(bool)                                      bCanOnlyUseMobileItems                                      OFFSET(get<bool>, {0x90, 1, 0, 0})
	DMember(bool)                                      bBlockWeaponActions                                         OFFSET(get<bool>, {0x91, 1, 0, 0})
	DMember(bool)                                      bValidateAbility                                            OFFSET(get<bool>, {0x92, 1, 0, 0})
	DMember(bool)                                      bResetActionObjectKey                                       OFFSET(get<bool>, {0x93, 1, 0, 0})
	DMember(bool)                                      bUseAlternateMode                                           OFFSET(get<bool>, {0x94, 1, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaBTService_WaitForPassengers
/// Size: 0x0008 (0x000070 - 0x000078)
class UFortAthenaBTService_WaitForPassengers : public UBTService
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	SMember(FName)                                     WaitForPassengersStatusKeyName                              OFFSET(getStruct<T>, {0x70, 4, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaBTService_Zipline
/// Size: 0x0048 (0x000070 - 0x0000B8)
class UFortAthenaBTService_Zipline : public UBTService
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	SMember(FName)                                     ZiplineTargetName                                           OFFSET(getStruct<T>, {0x70, 4, 0, 0})
	SMember(FName)                                     InteractionExecutionStatusName                              OFFSET(getStruct<T>, {0x74, 4, 0, 0})
	SMember(FName)                                     InteractionContextInfoName                                  OFFSET(getStruct<T>, {0x78, 4, 0, 0})
	SMember(FName)                                     UsageExecutionStatusName                                    OFFSET(getStruct<T>, {0x7C, 4, 0, 0})
	SMember(FName)                                     ZiplineEntryLocationName                                    OFFSET(getStruct<T>, {0x80, 4, 0, 0})
	SMember(FName)                                     ZiplineExitLocationKeyName                                  OFFSET(getStruct<T>, {0x84, 4, 0, 0})
	SMember(FName)                                     MoveToPathMovementStateName                                 OFFSET(getStruct<T>, {0x88, 4, 0, 0})
	SMember(FName)                                     MoveExecutionStatusName                                     OFFSET(getStruct<T>, {0x8C, 4, 0, 0})
	SMember(FName)                                     FocalPointName                                              OFFSET(getStruct<T>, {0x90, 4, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaBTTask_ActivateVehicleBoost
/// Size: 0x0010 (0x000070 - 0x000080)
class UFortAthenaBTTask_ActivateVehicleBoost : public UBTTaskNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	DMember(bool)                                      bActivateBoost                                              OFFSET(get<bool>, {0x70, 1, 0, 0})
	DMember(float)                                     BoostLength                                                 OFFSET(get<float>, {0x74, 4, 0, 0})
	DMember(bool)                                      bIgnoreMinimumDistanceLeft                                  OFFSET(get<bool>, {0x78, 1, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaBTTask_MoveTo
/// Size: 0x0010 (0x0000B0 - 0x0000C0)
class UFortAthenaBTTask_MoveTo : public UBTTask_MoveTo
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	SMember(FName)                                     MovementResultKeyName                                       OFFSET(getStruct<T>, {0xB0, 4, 0, 0})
	SMember(FName)                                     ExecutionStatusKeyName                                      OFFSET(getStruct<T>, {0xB4, 4, 0, 0})
	DMember(bool)                                      bAllowRestartOnPartialSuccess                               OFFSET(get<bool>, {0xBC, 1, 1, 0})
	DMember(bool)                                      bAllowPartialPathToUncompleteNavigationArea                 OFFSET(get<bool>, {0xBC, 1, 1, 1})
};

/// Class /Script/FortniteAIServer.FortAthenaBTTask_BotMoveTo
/// Size: 0x0028 (0x0000C0 - 0x0000E8)
class UFortAthenaBTTask_BotMoveTo : public UFortAthenaBTTask_MoveTo
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
	SMember(FName)                                     NoSmashMoveGoalActorKeyName                                 OFFSET(getStruct<T>, {0xC0, 4, 0, 0})
	DMember(bool)                                      bAllowRandomWobble                                          OFFSET(get<bool>, {0xC6, 1, 1, 0})
	SMember(FFortBehaviorValue_Bool)                   AllowRandomWobble                                           OFFSET(getStruct<T>, {0xC8, 12, 0, 0})
	DMember(bool)                                      bIsUrgentMovement                                           OFFSET(get<bool>, {0xD4, 1, 1, 0})
	SMember(FFortBehaviorValue_Bool)                   IsUrgentMovement                                            OFFSET(getStruct<T>, {0xD8, 12, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaBTTask_BotUnstuckTeleport
/// Size: 0x0080 (0x000070 - 0x0000F0)
class UFortAthenaBTTask_BotUnstuckTeleport : public UBTTaskNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	SMember(FEQSParametrizedQueryExecutionRequest)     EQSRequest                                                  OFFSET(getStruct<T>, {0x70, 72, 0, 0})
	SMember(FName)                                     CanReachDestinationKeyName                                  OFFSET(getStruct<T>, {0xB8, 4, 0, 0})
	SMember(FName)                                     TeleportExecutionStatusKeyName                              OFFSET(getStruct<T>, {0xBC, 4, 0, 0})
	SMember(FName)                                     LastPartialPathTimeKeyName                                  OFFSET(getStruct<T>, {0xC0, 4, 0, 0})
	SMember(FName)                                     LastPartialPathCountKeyName                                 OFFSET(getStruct<T>, {0xC4, 4, 0, 0})
	CMember(class UFortAthenaAIBotUnstuckDigestedSkillSet*) UnstuckSkillSet                                        OFFSET(get<T>, {0xE8, 8, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaBTTask_BotWait
/// Size: 0x0028 (0x000078 - 0x0000A0)
class UFortAthenaBTTask_BotWait : public UBTTask_Wait
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	SMember(FBlackboardKeySelector)                    WaitCompleteKeySelector                                     OFFSET(getStruct<T>, {0x78, 40, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaBTTask_Build
/// Size: 0x0010 (0x000070 - 0x000080)
class UFortAthenaBTTask_Build : public UBTTaskNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FName)                                     ExecutionStatusKeyName                                      OFFSET(getStruct<T>, {0x70, 4, 0, 0})
	SMember(FName)                                     FocalPointName                                              OFFSET(getStruct<T>, {0x74, 4, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaBTTask_Conversation
/// Size: 0x0008 (0x000070 - 0x000078)
class UFortAthenaBTTask_Conversation : public UBTTaskNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	SMember(FName)                                     ConversationStatusKeyName                                   OFFSET(getStruct<T>, {0x70, 4, 0, 0})
	DMember(bool)                                      bResetEvaluatorStatusKeyOnFinish                            OFFSET(get<bool>, {0x76, 1, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaBTTask_Dive
/// Size: 0x0010 (0x000070 - 0x000080)
class UFortAthenaBTTask_Dive : public UBTTaskNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FName)                                     ExecutionStatusKeyName                                      OFFSET(getStruct<T>, {0x70, 4, 0, 0})
	SMember(FName)                                     DiveDestinationKeyName                                      OFFSET(getStruct<T>, {0x74, 4, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaBTTask_EnterVehicle
/// Size: 0x0008 (0x000070 - 0x000078)
class UFortAthenaBTTask_EnterVehicle : public UBTTaskNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	SMember(FName)                                     SelectedVehicleKeyName                                      OFFSET(getStruct<T>, {0x70, 4, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaBTTask_EquipItem
/// Size: 0x0018 (0x000070 - 0x000088)
class UFortAthenaBTTask_EquipItem : public UBTTaskNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FName)                                     WeaponKeyName                                               OFFSET(getStruct<T>, {0x70, 4, 0, 0})
	SMember(FName)                                     EquipItemKeyName                                            OFFSET(getStruct<T>, {0x74, 4, 0, 0})
	SMember(FFortBehaviorValue_Bool)                   DisableEquipAnimation                                       OFFSET(getStruct<T>, {0x78, 12, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaBTTask_Glide
/// Size: 0x0010 (0x000070 - 0x000080)
class UFortAthenaBTTask_Glide : public UBTTaskNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FName)                                     ExecutionStatusKeyName                                      OFFSET(getStruct<T>, {0x70, 4, 0, 0})
	SMember(FName)                                     GlideDestinationKeyName                                     OFFSET(getStruct<T>, {0x74, 4, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaBTTask_Interact
/// Size: 0x0078 (0x000070 - 0x0000E8)
class UFortAthenaBTTask_Interact : public UBTTaskNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
	DMember(float)                                     AttemptInterval                                             OFFSET(get<float>, {0x70, 4, 0, 0})
	DMember(int32_t)                                   MaxInteractAttempts                                         OFFSET(get<int32_t>, {0x74, 4, 0, 0})
	DMember(bool)                                      bShouldFocusOnInteraction                                   OFFSET(get<bool>, {0x78, 1, 0, 0})
	SMember(FBlackboardKeySelector)                    InteractExecutionStatusKeySelector                          OFFSET(getStruct<T>, {0x80, 40, 0, 0})
	SMember(FBlackboardKeySelector)                    InteractContextInfoKeySelector                              OFFSET(getStruct<T>, {0xA8, 40, 0, 0})
	SMember(FName)                                     FocalPointName                                              OFFSET(getStruct<T>, {0xD0, 4, 0, 0})
	SMember(FName)                                     InteractActorName                                           OFFSET(getStruct<T>, {0xD4, 4, 0, 0})
	SMember(FName)                                     JumpExecutionStatusName                                     OFFSET(getStruct<T>, {0xD8, 4, 0, 0})
	SMember(FName)                                     WeaponTriggerMeleeName                                      OFFSET(getStruct<T>, {0xDC, 4, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaBTTask_LeaveVehicle
/// Size: 0x0008 (0x000070 - 0x000078)
class UFortAthenaBTTask_LeaveVehicle : public UBTTaskNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	DMember(bool)                                      bWaitVehicleStop                                            OFFSET(get<bool>, {0x70, 1, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaBTTask_ModulateVehicleSpeed
/// Size: 0x0008 (0x000070 - 0x000078)
class UFortAthenaBTTask_ModulateVehicleSpeed : public UBTTaskNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	DMember(float)                                     NewDrivingSpeed                                             OFFSET(get<float>, {0x70, 4, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaBTTask_PauseVehicle
/// Size: 0x0008 (0x000070 - 0x000078)
class UFortAthenaBTTask_PauseVehicle : public UBTTaskNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	DMember(bool)                                      bPausePathFollow                                            OFFSET(get<bool>, {0x70, 1, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaBTTask_PlayEmote
/// Size: 0x0018 (0x000070 - 0x000088)
class UFortAthenaBTTask_PlayEmote : public UBTTaskNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FName)                                     PlayEmoteExecutionStatusKeyName                             OFFSET(getStruct<T>, {0x70, 4, 0, 0})
	CMember(TArray<class UAthenaDanceItemDefinition*>) BespokeEmotes                                               OFFSET(get<T>, {0x78, 16, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaBTTask_ReverseVehicle
/// Size: 0x0008 (0x000070 - 0x000078)
class UFortAthenaBTTask_ReverseVehicle : public UBTTaskNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	DMember(bool)                                      bReverseVehicle                                             OFFSET(get<bool>, {0x70, 1, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaBTTask_RunDynamicSubtree
/// Size: 0x0008 (0x000088 - 0x000090)
class UFortAthenaBTTask_RunDynamicSubtree : public UBTTask_RunBehaviorDynamic
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	DMember(bool)                                      bCallParentOnInstanceCreated                                OFFSET(get<bool>, {0x88, 1, 1, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaBTTask_SetAggressiveDriving
/// Size: 0x0008 (0x000070 - 0x000078)
class UFortAthenaBTTask_SetAggressiveDriving : public UBTTaskNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	DMember(bool)                                      bAggressiveDriving                                          OFFSET(get<bool>, {0x70, 1, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaBTTask_ShootTrap
/// Size: 0x0030 (0x000078 - 0x0000A8)
class UFortAthenaBTTask_ShootTrap : public UBTTask_Wait
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	SMember(FBlackboardKeySelector)                    TargetActorKey                                              OFFSET(getStruct<T>, {0x78, 40, 0, 0})
	SMember(FName)                                     TrapOnPathKeyName                                           OFFSET(getStruct<T>, {0xA0, 4, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaBTTask_SteerMovement
/// Size: 0x0030 (0x000070 - 0x0000A0)
class UFortAthenaBTTask_SteerMovement : public UBTTaskNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	SMember(FBlackboardKeySelector)                    SteerDirectionKeySelector                                   OFFSET(getStruct<T>, {0x70, 40, 0, 0})
	DMember(bool)                                      bSetControlRotation                                         OFFSET(get<bool>, {0x98, 1, 1, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaBTTask_Undermine
/// Size: 0x0018 (0x000070 - 0x000088)
class UFortAthenaBTTask_Undermine : public UBTTaskNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FName)                                     UndermineTargetKeyName                                      OFFSET(getStruct<T>, {0x70, 4, 0, 0})
	SMember(FName)                                     UndermineLocationImpactName                                 OFFSET(getStruct<T>, {0x74, 4, 0, 0})
	SMember(FName)                                     UndermineExecutionStatusKeyName                             OFFSET(getStruct<T>, {0x78, 4, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaBTTask_UseItem
/// Size: 0x0068 (0x000070 - 0x0000D8)
class UFortAthenaBTTask_UseItem : public UBTTaskNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	SMember(FName)                                     ActionObjectKeyName                                         OFFSET(getStruct<T>, {0x70, 4, 0, 0})
	SMember(FName)                                     ExecutionStatusKeyName                                      OFFSET(getStruct<T>, {0x74, 4, 0, 0})
	SMember(FName)                                     UseItemSelectNewWeaponName                                  OFFSET(getStruct<T>, {0x78, 4, 0, 0})
	SMember(FFortBehaviorValue_Float)                  MinimumWaitTimeBetweenUses                                  OFFSET(getStruct<T>, {0x7C, 12, 0, 0})
	SMember(FFortBehaviorValue_Float)                  MaximumWaitTimeBetweenUses                                  OFFSET(getStruct<T>, {0x88, 12, 0, 0})
	SMember(FFortBehaviorValue_Bool)                   ValidateAbility                                             OFFSET(getStruct<T>, {0x94, 12, 0, 0})
	SMember(FFortBehaviorValue_Bool)                   ValidateAbilityBeforeEquipping                              OFFSET(getStruct<T>, {0xA0, 12, 0, 0})
	SMember(FFortBehaviorValue_Bool)                   ResetActionObjectKey                                        OFFSET(getStruct<T>, {0xAC, 12, 0, 0})
	SMember(FFortBehaviorValue_Bool)                   UseAlternateMode                                            OFFSET(getStruct<T>, {0xB8, 12, 0, 0})
	DMember(float)                                     MinWaitTimeBetweenUses                                      OFFSET(get<float>, {0xCC, 4, 0, 0})
	DMember(float)                                     MaxWaitTimeBetweenUses                                      OFFSET(get<float>, {0xD0, 4, 0, 0})
	DMember(bool)                                      bValidateAbility                                            OFFSET(get<bool>, {0xD4, 1, 0, 0})
	DMember(bool)                                      bResetActionObjectKey                                       OFFSET(get<bool>, {0xD5, 1, 0, 0})
	DMember(bool)                                      bUseAlternateMode                                           OFFSET(get<bool>, {0xD6, 1, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaBTTask_UseSmartObject
/// Size: 0x0028 (0x000070 - 0x000098)
class UFortAthenaBTTask_UseSmartObject : public UBTTaskNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	SMember(FGameplayTag)                              EvaluationTag                                               OFFSET(getStruct<T>, {0x70, 4, 0, 0})
	SMember(FName)                                     SmartObjectsStatusKeyName                                   OFFSET(getStruct<T>, {0x74, 4, 0, 0})
	SMember(FName)                                     SmartObjectDestinationRotationKeyName                       OFFSET(getStruct<T>, {0x7C, 4, 0, 0})
	DMember(bool)                                      bHandleAbortWithSoftDisable                                 OFFSET(get<bool>, {0x82, 1, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaBTTask_VehicleHonk
/// Size: 0x0010 (0x000070 - 0x000080)
class UFortAthenaBTTask_VehicleHonk : public UBTTaskNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	DMember(float)                                     MaxHonkTime                                                 OFFSET(get<float>, {0x70, 4, 0, 0})
	DMember(float)                                     MinHonkTime                                                 OFFSET(get<float>, {0x74, 4, 0, 0})
	DMember(float)                                     MaxFlickerTime                                              OFFSET(get<float>, {0x78, 4, 0, 0})
	DMember(float)                                     MinFlickerTime                                              OFFSET(get<float>, {0x7C, 4, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaBTTask_VehicleTurnTo
/// Size: 0x0008 (0x000098 - 0x0000A0)
class UFortAthenaBTTask_VehicleTurnTo : public UBTTask_BlackboardBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	DMember(float)                                     Precision                                                   OFFSET(get<float>, {0x98, 4, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaBTTask_VerseNPCMoveTo
/// Size: 0x0018 (0x0000C0 - 0x0000D8)
class UFortAthenaBTTask_VerseNPCMoveTo : public UFortAthenaBTTask_MoveTo
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	SMember(FName)                                     AcceptableRadiusKeyName                                     OFFSET(getStruct<T>, {0xC0, 4, 0, 0})
	SMember(FName)                                     AllowStrafeKeyName                                          OFFSET(getStruct<T>, {0xC4, 4, 0, 0})
	SMember(FName)                                     AllowPartialPathName                                        OFFSET(getStruct<T>, {0xC8, 4, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaBTTask_Zipline
/// Size: 0x0010 (0x000070 - 0x000080)
class UFortAthenaBTTask_Zipline : public UBTTaskNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FName)                                     UsageExecutionStatusName                                    OFFSET(getStruct<T>, {0x70, 4, 0, 0})
	SMember(FName)                                     ZiplineTargetName                                           OFFSET(getStruct<T>, {0x78, 4, 0, 0})


	/// Functions
	// Function /Script/FortniteAIServer.FortAthenaBTTask_Zipline.OnZiplineStateChanged
	// void OnZiplineStateChanged(bool bIsZiplining, class AFortPlayerPawn* FortPlayerPawn);                                    // [0xa814954] Final|Native|Public  
};

/// Class /Script/FortniteAIServer.FortAthenaNpcEvaluator_Encampment
/// Size: 0x02A8 (0x0001A0 - 0x000448)
class UFortAthenaNpcEvaluator_Encampment : public UFortAthenaAIBotEvaluator_Movement
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1096;

public:
	SMember(FScalableFloat)                            EncampmentEnable                                            OFFSET(getStruct<T>, {0x1A0, 40, 0, 0})
	SMember(FScalableFloat)                            EncampmentTentativeDelayMin                                 OFFSET(getStruct<T>, {0x1C8, 40, 0, 0})
	SMember(FScalableFloat)                            EncampmentTentativeDelayMax                                 OFFSET(getStruct<T>, {0x1F0, 40, 0, 0})
	SMember(FScalableFloat)                            EncampmentDurationMin                                       OFFSET(getStruct<T>, {0x218, 40, 0, 0})
	SMember(FScalableFloat)                            EncampmentDurationMax                                       OFFSET(getStruct<T>, {0x240, 40, 0, 0})
	SMember(FScalableFloat)                            BuilderPercentage                                           OFFSET(getStruct<T>, {0x268, 40, 0, 0})
	SMember(FScalableFloat)                            BuilderMinDistance                                          OFFSET(getStruct<T>, {0x290, 40, 0, 0})
	SMember(FScalableFloat)                            BuilderMaxDistance                                          OFFSET(getStruct<T>, {0x2B8, 40, 0, 0})
	SMember(FScalableFloat)                            GuardMinDistance                                            OFFSET(getStruct<T>, {0x2E0, 40, 0, 0})
	SMember(FScalableFloat)                            GuardMaxDistance                                            OFFSET(getStruct<T>, {0x308, 40, 0, 0})
	SMember(FScalableFloat)                            AllowInSwimming                                             OFFSET(getStruct<T>, {0x330, 40, 0, 0})
	SMember(FScalableFloat)                            AllowInFalling                                              OFFSET(getStruct<T>, {0x358, 40, 0, 0})
	SMember(FScalableFloat)                            MinSquadMembersCountToBuild                                 OFFSET(getStruct<T>, {0x380, 40, 0, 0})
	SMember(FName)                                     EncampmentStatusKeyName                                     OFFSET(getStruct<T>, {0x3A8, 4, 0, 0})
	SMember(FName)                                     EncampmentMovementStateKeyName                              OFFSET(getStruct<T>, {0x3B0, 4, 0, 0})
	SMember(FName)                                     EncampmentCenterLocationKeyName                             OFFSET(getStruct<T>, {0x3B8, 4, 0, 0})
	SMember(FName)                                     EncampmentDestinationKeyName                                OFFSET(getStruct<T>, {0x3C0, 4, 0, 0})
	SMember(FName)                                     EncampmentAroundCampFireLocationKeyName                     OFFSET(getStruct<T>, {0x3C8, 4, 0, 0})
	SMember(FName)                                     EncampmentRoleKeyName                                       OFFSET(getStruct<T>, {0x3D0, 4, 0, 0})
	SMember(FName)                                     DefensiveBuildName                                          OFFSET(getStruct<T>, {0x3D8, 4, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaNpcEvaluator_FollowPatrolPath
/// Size: 0x0038 (0x0001A0 - 0x0001D8)
class UFortAthenaNpcEvaluator_FollowPatrolPath : public UFortAthenaAIBotEvaluator_Movement
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 472;

public:
	SMember(FName)                                     FollowPatrolPathKeyName                                     OFFSET(getStruct<T>, {0x1A0, 4, 0, 0})
	SMember(FName)                                     FollowPatrolPathMovementStateKeyName                        OFFSET(getStruct<T>, {0x1A4, 4, 0, 0})
	SMember(FName)                                     FollowPatrolPathDestinationKeyName                          OFFSET(getStruct<T>, {0x1A8, 4, 0, 0})
	DMember(float)                                     ChanceToTakeABreak                                          OFFSET(get<float>, {0x1B4, 4, 0, 0})
	DMember(float)                                     BreakDurationMin                                            OFFSET(get<float>, {0x1B8, 4, 0, 0})
	DMember(float)                                     BreakDurationMax                                            OFFSET(get<float>, {0x1BC, 4, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaNpcEvaluator_FollowSquadLeader
/// Size: 0x0150 (0x0001A0 - 0x0002F0)
class UFortAthenaNpcEvaluator_FollowSquadLeader : public UFortAthenaAIBotEvaluator_Movement
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 752;

public:
	SMember(FScalableFloat)                            FormationOffsetRadiusMin                                    OFFSET(getStruct<T>, {0x1A0, 40, 0, 0})
	SMember(FScalableFloat)                            FormationOffsetRadiusMax                                    OFFSET(getStruct<T>, {0x1C8, 40, 0, 0})
	SMember(FScalableFloat)                            TooFarFromSquadLeaderDistance                               OFFSET(getStruct<T>, {0x1F0, 40, 0, 0})
	SMember(FScalableFloat)                            MaxNoiseRadius                                              OFFSET(getStruct<T>, {0x218, 40, 0, 0})
	SMember(FScalableFloat)                            MinDurationNoiseEvaluate                                    OFFSET(getStruct<T>, {0x240, 40, 0, 0})
	SMember(FScalableFloat)                            MaxDurationNoiseEvaluate                                    OFFSET(getStruct<T>, {0x268, 40, 0, 0})
	SMember(FName)                                     FollowSquadLeaderStatusKeyName                              OFFSET(getStruct<T>, {0x290, 4, 0, 0})
	SMember(FName)                                     FollowSquadLeaderMovementStateKeyName                       OFFSET(getStruct<T>, {0x298, 4, 0, 0})
	SMember(FName)                                     FollowSquadLeaderDestinationKeyName                         OFFSET(getStruct<T>, {0x2A0, 4, 0, 0})
	SMember(FName)                                     TooFarFromLeaderKeyName                                     OFFSET(getStruct<T>, {0x2A8, 4, 0, 0})
	SMember(FVector)                                   CachedSquadFormationOffset                                  OFFSET(getStruct<T>, {0x2B0, 24, 0, 0})
	SMember(FVector)                                   CachedNoiseOffset                                           OFFSET(getStruct<T>, {0x2C8, 24, 0, 0})
	DMember(float)                                     CachedTooFarFromSquadLeaderDistanceSqr                      OFFSET(get<float>, {0x2E0, 4, 0, 0})
	DMember(float)                                     LastNoiseOffsetUpdateTime                                   OFFSET(get<float>, {0x2E4, 4, 0, 0})
	DMember(float)                                     DurationNoiseEvaluate                                       OFFSET(get<float>, {0x2E8, 4, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaNpcEvaluator_Leash
/// Size: 0x0040 (0x0001A0 - 0x0001E0)
class UFortAthenaNpcEvaluator_Leash : public UFortAthenaAIBotEvaluator_Movement
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 480;

public:
	SMember(FName)                                     LeashKeyName                                                OFFSET(getStruct<T>, {0x1A0, 4, 0, 0})
	SMember(FName)                                     LeashMovementStateKeyName                                   OFFSET(getStruct<T>, {0x1A4, 4, 0, 0})
	SMember(FName)                                     LeashDestinationKeyName                                     OFFSET(getStruct<T>, {0x1A8, 4, 0, 0})
	SMember(FName)                                     LeashLocationKeyName                                        OFFSET(getStruct<T>, {0x1AC, 4, 0, 0})
	SMember(FName)                                     LeashOuterRadiusKeyName                                     OFFSET(getStruct<T>, {0x1B0, 4, 0, 0})
	SMember(FName)                                     ShouldTeleportInLeashKeyName                                OFFSET(getStruct<T>, {0x1B4, 4, 0, 0})
	SMember(FName)                                     TriggerLeashBehaviorKeyName                                 OFFSET(getStruct<T>, {0x1B8, 4, 0, 0})
	DMember(bool)                                      bAlwaysForceMoveToLeashCenter                               OFFSET(get<bool>, {0x1BC, 1, 0, 0})
	DMember(bool)                                      bForcePositionOnLeash                                       OFFSET(get<bool>, {0x1BD, 1, 0, 0})
	CMember(class UClass*)                             AvoidObstaclesFilterClass                                   OFFSET(get<T>, {0x1C0, 8, 0, 0})
	CMember(class UFortAthenaAIRuntimeParameters_Leash*) LeashRuntimeParameters                                    OFFSET(get<T>, {0x1D8, 8, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaNpcEvaluator_Patrolling
/// Size: 0x0050 (0x0001A0 - 0x0001F0)
class UFortAthenaNpcEvaluator_Patrolling : public UFortAthenaAIBotEvaluator_Movement
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 496;

public:
	SMember(FName)                                     PatrollingKeyName                                           OFFSET(getStruct<T>, {0x1A0, 4, 0, 0})
	SMember(FName)                                     PatrollingMovementStateKeyName                              OFFSET(getStruct<T>, {0x1A4, 4, 0, 0})
	SMember(FName)                                     PatrollingDestinationKeyName                                OFFSET(getStruct<T>, {0x1A8, 4, 0, 0})
	SMember(FName)                                     DynamicBlueprintStatusKeyName                               OFFSET(getStruct<T>, {0x1AC, 4, 0, 0})
	SMember(FName)                                     DynamicBlueprintActorKeyName                                OFFSET(getStruct<T>, {0x1B0, 4, 0, 0})
	SMember(FName)                                     PatrollingShouldMoveKeyName                                 OFFSET(getStruct<T>, {0x1B4, 4, 0, 0})
	SMember(FName)                                     PatrollingAppendDestinationKeyName                          OFFSET(getStruct<T>, {0x1B8, 4, 0, 0})
	DMember(float)                                     DistanceToTestPoint                                         OFFSET(get<float>, {0x1CC, 4, 0, 0})
	DMember(bool)                                      bCanDisablePatrolling                                       OFFSET(get<bool>, {0x1D0, 1, 0, 0})
	DMember(bool)                                      bCanReenablePatrolling                                      OFFSET(get<bool>, {0x1D1, 1, 0, 0})
	DMember(float)                                     ReenableTimer                                               OFFSET(get<float>, {0x1D4, 4, 0, 0})
	DMember(bool)                                      bCanSelectNearestPatrolPointAtStart                         OFFSET(get<bool>, {0x1D8, 1, 0, 0})
	DMember(bool)                                      bCanRetryOnPartialPathSuccess                               OFFSET(get<bool>, {0x1D9, 1, 0, 0})
	CMember(class UFortAthenaNpcPatrollingComponent*)  CachedNpcPatrollingComponent                                OFFSET(get<T>, {0x1E0, 8, 0, 0})
};

/// Class /Script/FortniteAIServer.FortQueryContext_BotPOIVolume
/// Size: 0x0020 (0x000028 - 0x000048)
class UFortQueryContext_BotPOIVolume : public UEnvQueryContext
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	DMember(bool)                                      bSetProjectedToNavmeshLocationAsContext                     OFFSET(get<bool>, {0x28, 1, 0, 0})
	SMember(FVector)                                   ProjectionExtent                                            OFFSET(getStruct<T>, {0x30, 24, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaAttachToActorStateTreeTask
/// Size: 0x0048 (0x000048 - 0x000090)
class UFortAthenaAttachToActorStateTreeTask : public UStateTreeTaskBlueprintBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	CMember(class AActor*)                             Actor                                                       OFFSET(get<T>, {0x48, 8, 0, 0})
	CMember(class AActor*)                             TargetActor                                                 OFFSET(get<T>, {0x50, 8, 0, 0})
	CMember(EFortAthenaStateTreeTaskFeatureExecutionMode) AttachExecutionMode                                      OFFSET(get<T>, {0x58, 4, 0, 0})
	DMember(bool)                                      bHandleAthenaMovComponent                                   OFFSET(get<bool>, {0x5C, 1, 0, 0})
	DMember(bool)                                      bSetPhysicsToQueryOnlyWhileAttached                         OFFSET(get<bool>, {0x5D, 1, 0, 0})
	DMember(bool)                                      bTryToAttachToSkeletalMeshOnTargetActor                     OFFSET(get<bool>, {0x5E, 1, 0, 0})
	DMember(bool)                                      bChangeBaseToSkeletalMeshOnTargetActor                      OFFSET(get<bool>, {0x5F, 1, 0, 0})
	CMember(EAttachmentRule)                           AttachmentLocationRule                                      OFFSET(get<T>, {0x60, 1, 0, 0})
	CMember(EAttachmentRule)                           AttachmentRotationRule                                      OFFSET(get<T>, {0x61, 1, 0, 0})
	CMember(EAttachmentRule)                           AttachmentScaleRule                                         OFFSET(get<T>, {0x62, 1, 0, 0})
	DMember(bool)                                      bWeldSimulatedBodiesOnAttach                                OFFSET(get<bool>, {0x63, 1, 0, 0})
	SMember(FName)                                     AttachmentSocketName                                        OFFSET(getStruct<T>, {0x64, 4, 0, 0})
	CMember(EFortAthenaStateTreeTaskFeatureExecutionMode) DetachExecutionMode                                      OFFSET(get<T>, {0x68, 4, 0, 0})
	DMember(bool)                                      bForceChangeBaseOnDetach                                    OFFSET(get<bool>, {0x6C, 1, 0, 0})
	CMember(EDetachmentRule)                           DetachmentLocationRule                                      OFFSET(get<T>, {0x6D, 1, 0, 0})
	CMember(EDetachmentRule)                           DetachmentRotationRule                                      OFFSET(get<T>, {0x6E, 1, 0, 0})
	CMember(EDetachmentRule)                           DetachmentScaleRule                                         OFFSET(get<T>, {0x6F, 1, 0, 0})
	DMember(bool)                                      bCallModifyOnDetach                                         OFFSET(get<bool>, {0x70, 1, 0, 0})
	DMember(bool)                                      bHandleLaunchCharacter                                      OFFSET(get<bool>, {0x71, 1, 0, 0})
	DMember(bool)                                      bHasHandledLaunchCharacter                                  OFFSET(get<bool>, {0x72, 1, 0, 0})
	CMember(class AFortPawn*)                          FortPawnActor                                               OFFSET(get<T>, {0x78, 8, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaPlayContextualAnimTaskInstanceData
/// Size: 0x00D8 (0x000028 - 0x000100)
class UFortAthenaPlayContextualAnimTaskInstanceData : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	CMember(class AActor*)                             PrimaryActor                                                OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(class AActor*)                             SecondaryActor                                              OFFSET(get<T>, {0x30, 8, 0, 0})
	SMember(FName)                                     SecondaryRole                                               OFFSET(getStruct<T>, {0x38, 4, 0, 0})
	CMember(class AActor*)                             TertiaryActor                                               OFFSET(get<T>, {0x40, 8, 0, 0})
	SMember(FName)                                     TertiaryRole                                                OFFSET(getStruct<T>, {0x48, 4, 0, 0})
	CMember(class UContextualAnimSceneAsset*)          SceneAsset                                                  OFFSET(get<T>, {0x50, 8, 0, 0})
	SMember(FName)                                     SectionName                                                 OFFSET(getStruct<T>, {0x58, 4, 0, 0})
	SMember(FGameplayTagContainer)                     PrimaryActorExternalTags                                    OFFSET(getStruct<T>, {0x60, 32, 0, 0})
	SMember(FGameplayTagContainer)                     SecondaryActorExternalTags                                  OFFSET(getStruct<T>, {0x80, 32, 0, 0})
	SMember(FGameplayTagContainer)                     TertiaryActorExternalTags                                   OFFSET(getStruct<T>, {0xA0, 32, 0, 0})
	CMember(EFortAthenaPlayContextualAnimExecutionMethod) ExecutionMethod                                          OFFSET(get<T>, {0xC0, 1, 0, 0})
	DMember(bool)                                      bWaitForNotifyEventToEnd                                    OFFSET(get<bool>, {0xC1, 1, 0, 0})
	SMember(FName)                                     NotifyEventNameToEnd                                        OFFSET(getStruct<T>, {0xC4, 4, 0, 0})
	DMember(int32_t)                                   LoopsToRun                                                  OFFSET(get<int32_t>, {0xC8, 4, 0, 0})
	DMember(bool)                                      bLoopForever                                                OFFSET(get<bool>, {0xCC, 1, 0, 0})
	DMember(float)                                     DelayBetweenLoops                                           OFFSET(get<float>, {0xD0, 4, 0, 0})
	DMember(float)                                     RandomDeviationBetweenLoops                                 OFFSET(get<float>, {0xD4, 4, 0, 0})
	CMember(TArray<FContextualAnimWarpTarget>)         WarpTargets                                                 OFFSET(get<T>, {0xD8, 16, 0, 0})
	DMember(bool)                                      bFindAnimSetBasedOnWarpTargets                              OFFSET(get<bool>, {0xE8, 1, 0, 0})


	/// Functions
	// Function /Script/FortniteAIServer.FortAthenaPlayContextualAnimTaskInstanceData.OnNotifyBeginReceived
	// void OnNotifyBeginReceived(FName NotifyName, FBranchingPointNotifyPayload& BranchingPointNotifyPayload);                 // [0xa814674] Final|Native|Public|HasOutParms 
	// Function /Script/FortniteAIServer.FortAthenaPlayContextualAnimTaskInstanceData.OnMontageEnded
	// void OnMontageEnded(class UAnimMontage* EndedMontage, bool bInterrupted);                                                // [0xa8144e4] Final|Native|Public  
};

/// Class /Script/FortniteAIServer.FortAthenaPlayInteractionStateTreeTask
/// Size: 0x0080 (0x000048 - 0x0000C8)
class UFortAthenaPlayInteractionStateTreeTask : public UStateTreeTaskBlueprintBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	CMember(class AActor*)                             InteractorActor                                             OFFSET(get<T>, {0x48, 8, 0, 0})
	CMember(class AActor*)                             InteractableActor                                           OFFSET(get<T>, {0x50, 8, 0, 0})
	CMember(class UAnimMontage*)                       InteractorMontage                                           OFFSET(get<T>, {0x58, 8, 0, 0})
	CMember(class UAnimMontage*)                       InteractableMontage                                         OFFSET(get<T>, {0x60, 8, 0, 0})
	DMember(bool)                                      bWaitForNotifyEventToEnd                                    OFFSET(get<bool>, {0x68, 1, 0, 0})
	SMember(FName)                                     NotifyEventNameToEnd                                        OFFSET(getStruct<T>, {0x6C, 4, 0, 0})
	DMember(bool)                                      bAddMotionWarpingTargets                                    OFFSET(get<bool>, {0x70, 1, 0, 0})
	DMember(bool)                                      bDisableCollisionBetweenActors                              OFFSET(get<bool>, {0x71, 1, 0, 0})
	DMember(bool)                                      bSetMovementModeToFlying                                    OFFSET(get<bool>, {0x72, 1, 0, 0})
	DMember(int32_t)                                   LoopsToRun                                                  OFFSET(get<int32_t>, {0x74, 4, 0, 0})
	DMember(bool)                                      bLoopForever                                                OFFSET(get<bool>, {0x78, 1, 0, 0})
	DMember(float)                                     DelayBetweenLoops                                           OFFSET(get<float>, {0x7C, 4, 0, 0})
	DMember(float)                                     RandomDeviationBetweenLoops                                 OFFSET(get<float>, {0x80, 4, 0, 0})
	DMember(bool)                                      bStopInteractorAnimMontageOnExit                            OFFSET(get<bool>, {0x84, 1, 0, 0})
	DMember(bool)                                      bStopInteractableAnimMontageOnExit                          OFFSET(get<bool>, {0x85, 1, 0, 0})


	/// Functions
	// Function /Script/FortniteAIServer.FortAthenaPlayInteractionStateTreeTask.OnNotifyBeginReceived
	// void OnNotifyBeginReceived(FName NotifyName, FBranchingPointNotifyPayload& BranchingPointNotifyPayload);                 // [0xa8147e4] Final|Native|Private|HasOutParms 
	// Function /Script/FortniteAIServer.FortAthenaPlayInteractionStateTreeTask.OnMontageEnded
	// void OnMontageEnded(class UAnimMontage* EndedMontage, bool bInterrupted);                                                // [0xa8145ac] Final|Native|Private 
};

/// Class /Script/FortniteAIServer.FortAthenaPlayMontageStateTreeTask
/// Size: 0x0050 (0x000048 - 0x000098)
class UFortAthenaPlayMontageStateTreeTask : public UStateTreeTaskBlueprintBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	CMember(class AActor*)                             Actor                                                       OFFSET(get<T>, {0x48, 8, 0, 0})
	CMember(class UAnimMontage*)                       Montage                                                     OFFSET(get<T>, {0x50, 8, 0, 0})
	CMember(ESTFortAthenaPlayMontageExecMode)          ExecMode                                                    OFFSET(get<T>, {0x58, 1, 0, 0})
	SMember(FName)                                     SectionName                                                 OFFSET(getStruct<T>, {0x5C, 4, 0, 0})
	CMember(ESTFortAthenaPlayMontageLoopMode)          LoopMode                                                    OFFSET(get<T>, {0x60, 1, 0, 0})
	DMember(bool)                                      bWaitForNotifyEventToEnd                                    OFFSET(get<bool>, {0x61, 1, 0, 0})
	SMember(FName)                                     NotifyEventNameToEnd                                        OFFSET(getStruct<T>, {0x64, 4, 0, 0})
	DMember(bool)                                      bSetMovementModeToFlying                                    OFFSET(get<bool>, {0x68, 1, 0, 0})
	DMember(int32_t)                                   LoopsToRun                                                  OFFSET(get<int32_t>, {0x6C, 4, 0, 0})
	DMember(bool)                                      bLoopForever                                                OFFSET(get<bool>, {0x70, 1, 0, 0})
	DMember(float)                                     DelayBetweenLoops                                           OFFSET(get<float>, {0x74, 4, 0, 0})
	DMember(float)                                     RandomDeviationBetweenLoops                                 OFFSET(get<float>, {0x78, 4, 0, 0})
	DMember(bool)                                      bStopAnimMontageOnExit                                      OFFSET(get<bool>, {0x7C, 1, 0, 0})


	/// Functions
	// Function /Script/FortniteAIServer.FortAthenaPlayMontageStateTreeTask.HandleNotifyBeginReceived
	// void HandleNotifyBeginReceived(FName NotifyName, FBranchingPointNotifyPayload& BranchingPointNotifyPayload);             // [0xa814374] Final|Native|Private|HasOutParms 
	// Function /Script/FortniteAIServer.FortAthenaPlayMontageStateTreeTask.HandleMontageEnded
	// void HandleMontageEnded(class UAnimMontage* EndedMontage, bool bInterrupted);                                            // [0xa8142ac] Final|Native|Private 
};

/// Class /Script/FortniteAIServer.FortWorldConditionWorldState_State
/// Size: 0x0020 (0x000028 - 0x000048)
class UFortWorldConditionWorldState_State : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:


	/// Functions
	// Function /Script/FortniteAIServer.FortWorldConditionWorldState_State.HandleWorldStateChanged
	// void HandleWorldStateChanged();                                                                                          // [0xa8150ec] Final|Native|Private 
};

/// Struct /Script/FortniteAIServer.BotEvaluatorCommandCooldown
/// Size: 0x0018 (0x000000 - 0x000018)
class FBotEvaluatorCommandCooldown : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FFortAIActiveCommandSOUsageData)           Command                                                     OFFSET(getStruct<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/FortniteAIServer.BotEvaluatorSmartObjectConvertedData
/// Size: 0x0008 (0x000000 - 0x000008)
class FBotEvaluatorSmartObjectConvertedData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(class USmartObjectComponent*)              SmartObjectComponent                                        OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/FortniteAIServer.TokenEQSParameter
/// Size: 0x0014 (0x000000 - 0x000014)
class FTokenEQSParameter : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	SMember(FName)                                     ParamName                                                   OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(EAIParamType)                              ParamType                                                   OFFSET(get<T>, {0x4, 1, 0, 0})
	DMember(float)                                     DefaultValue                                                OFFSET(get<float>, {0x8, 4, 0, 0})
	SMember(FName)                                     BlackboardKeyName                                           OFFSET(getStruct<T>, {0xC, 4, 0, 0})
};

/// Struct /Script/FortniteAIServer.PositioningEQS
/// Size: 0x0080 (0x000000 - 0x000080)
class FPositioningEQS : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FGameplayTagQuery)                         ItemTagQuery                                                OFFSET(getStruct<T>, {0x0, 72, 0, 0})
	CMember(class UEnvQuery*)                          QueryTemplate                                               OFFSET(get<T>, {0x48, 8, 0, 0})
	CMember(TArray<FTokenEQSParameter>)                QueryConfig                                                 OFFSET(get<T>, {0x50, 16, 0, 0})
	DMember(bool)                                      bAllowStayingOnSamePosition                                 OFFSET(get<bool>, {0x60, 1, 0, 0})
	DMember(bool)                                      bRequestNewPosititonOnProviderRecomputed                    OFFSET(get<bool>, {0x61, 1, 0, 0})
	SMember(FFortBehaviorValue_Bool)                   AllowStayingOnSamePosition                                  OFFSET(getStruct<T>, {0x64, 12, 0, 0})
	SMember(FFortBehaviorValue_Bool)                   RequestNewPositionOnProviderRecomputed                      OFFSET(getStruct<T>, {0x70, 12, 0, 0})
};

/// Struct /Script/FortniteAIServer.EquippedItemTagAssociationData
/// Size: 0x0090 (0x000000 - 0x000090)
class FEquippedItemTagAssociationData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FGameplayTagQuery)                         ItemTagQuery                                                OFFSET(getStruct<T>, {0x0, 72, 0, 0})
	SMember(FGameplayTagQuery)                         TokenSystemTagQuery                                         OFFSET(getStruct<T>, {0x48, 72, 0, 0})
};

/// Struct /Script/FortniteAIServer.FortAthenaHandleSoftDisableGuardStateTreeTaskInstanceData
/// Size: 0x0020 (0x000000 - 0x000020)
class FFortAthenaHandleSoftDisableGuardStateTreeTaskInstanceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FStateTreeStructRef)                       SoftDisableStateReference                                   OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	CMember(TArray<class AActor*>)                     ActorsToTeleportOnFailure                                   OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/FortniteAIServer.FortAthenaHandleSoftDisableGuardStateTreeTask
/// Size: 0x0000 (0x000020 - 0x000020)
class FFortAthenaHandleSoftDisableGuardStateTreeTask : public FStateTreeTaskCommonBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/FortniteAIServer.FortAthenaSoftDisableStateTreeParameter
/// Size: 0x0010 (0x000000 - 0x000010)
class FFortAthenaSoftDisableStateTreeParameter : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<class AActor*>)                     ActorsToTeleportOnExit                                      OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/FortniteAIServer.FortAthenaHandleSoftDisableStateTreeTaskInstanceData
/// Size: 0x0030 (0x000000 - 0x000030)
class FFortAthenaHandleSoftDisableStateTreeTaskInstanceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(class AActor*)                             SmartObjectActor                                            OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(TArray<class AActor*>)                     ActorsToCleanup                                             OFFSET(get<T>, {0x8, 16, 0, 0})
	DMember(bool)                                      bHasReceivedSoftDisableEvent                                OFFSET(get<bool>, {0x18, 1, 0, 0})
	SMember(FGameplayTag)                              ReceivedSoftDisableEvent                                    OFFSET(getStruct<T>, {0x1C, 4, 0, 0})
	SMember(FFortAthenaSoftDisableStateTreeParameter)  OutState                                                    OFFSET(getStruct<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/FortniteAIServer.FortAthenaHandleSoftDisableStateTreeTask
/// Size: 0x0038 (0x000020 - 0x000058)
class FFortAthenaHandleSoftDisableStateTreeTask : public FStateTreeTaskCommonBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FGameplayTag)                              StateTreeEventTag                                           OFFSET(getStruct<T>, {0x20, 4, 0, 0})
	SMember(FVector)                                   TeleportOnNavmeshQueryBoxExtents                            OFFSET(getStruct<T>, {0x28, 24, 0, 0})
	DMember(int32_t)                                   MaxTeleportToTryPerActor                                    OFFSET(get<int32_t>, {0x40, 4, 0, 0})
	DMember(bool)                                      bEnableNavmeshTeleportForPlayers                            OFFSET(get<bool>, {0x44, 1, 0, 0})
	DMember(float)                                     MultiplierOnCapsuleHalfHeightForTeleportLocation            OFFSET(get<float>, {0x48, 4, 0, 0})
	DMember(float)                                     MultiplierOnCapsuleRadiusForFallbackTeleportSweepCastSize   OFFSET(get<float>, {0x4C, 4, 0, 0})
	DMember(float)                                     MultiplierOnCapsuleHeightForFallbackTeleportSweepCasts      OFFSET(get<float>, {0x50, 4, 0, 0})
};

/// Struct /Script/FortniteAIServer.FortAthenaPickAnimByWorldConditionsConfig
/// Size: 0x0058 (0x000000 - 0x000058)
class FFortAthenaPickAnimByWorldConditionsConfig : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(class UAnimMontage*)                       Montage                                                     OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class UContextualAnimSceneAsset*)          SceneAsset                                                  OFFSET(get<T>, {0x8, 8, 0, 0})
	SMember(FWorldConditionQueryDefinition)            RequiredConditions                                          OFFSET(getStruct<T>, {0x10, 24, 0, 0})
	SMember(FWorldConditionQueryState)                 QueryState                                                  OFFSET(getStruct<T>, {0x28, 48, 0, 0})
};

/// Struct /Script/FortniteAIServer.FortAthenaPickAnimByWorldConditionsStateTreeTaskInstanceData
/// Size: 0x0038 (0x000000 - 0x000038)
class FFortAthenaPickAnimByWorldConditionsStateTreeTaskInstanceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<FFortAthenaPickAnimByWorldConditionsConfig>) PossibleAnims                                      OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(class AActor*)                             ActorAForWorldConditions                                    OFFSET(get<T>, {0x10, 8, 0, 0})
	CMember(class AActor*)                             ActorBForWorldConditions                                    OFFSET(get<T>, {0x18, 8, 0, 0})
	CMember(class AActor*)                             ActorCForWorldConditions                                    OFFSET(get<T>, {0x20, 8, 0, 0})
	CMember(class UAnimMontage*)                       PickedMontage                                               OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(class UContextualAnimSceneAsset*)          PickedSceneAsset                                            OFFSET(get<T>, {0x30, 8, 0, 0})
};

/// Struct /Script/FortniteAIServer.FortAthenaPickAnimByWorldConditionsStateTreeTask
/// Size: 0x0000 (0x000020 - 0x000020)
class FFortAthenaPickAnimByWorldConditionsStateTreeTask : public FStateTreeTaskCommonBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/FortniteAIServer.FortAthenaPickRandomMontageConfig
/// Size: 0x0010 (0x000000 - 0x000010)
class FFortAthenaPickRandomMontageConfig : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class UAnimMontage*)                       Montage                                                     OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(int32_t)                                   RandomWeight                                                OFFSET(get<int32_t>, {0x8, 4, 0, 0})
};

/// Struct /Script/FortniteAIServer.FortAthenaPickRandomMontageStateTreeTaskInstanceData
/// Size: 0x0018 (0x000000 - 0x000018)
class FFortAthenaPickRandomMontageStateTreeTaskInstanceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(TArray<FFortAthenaPickRandomMontageConfig>) PossibleMontages                                           OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(class UAnimMontage*)                       PickedMontage                                               OFFSET(get<T>, {0x10, 8, 0, 0})
};

/// Struct /Script/FortniteAIServer.FortAthenaPickRandomMontageStateTreeTask
/// Size: 0x0000 (0x000020 - 0x000020)
class FFortAthenaPickRandomMontageStateTreeTask : public FStateTreeTaskCommonBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/FortniteAIServer.FortAthenaToggleAllowInteractStateTreeTaskInstanceData
/// Size: 0x0010 (0x000000 - 0x000010)
class FFortAthenaToggleAllowInteractStateTreeTaskInstanceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class AActor*)                             Actor                                                       OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class AActor*)                             TargetActor                                                 OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/FortniteAIServer.FortAthenaToggleAllowInteractStateTreeTaskTreeTask
/// Size: 0x0008 (0x000020 - 0x000028)
class FFortAthenaToggleAllowInteractStateTreeTaskTreeTask : public FStateTreeTaskCommonBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(EFortAthenaStateTreeTaskFeatureExecutionMode) AddExecutionMode                                         OFFSET(get<T>, {0x20, 4, 0, 0})
	CMember(EFortAthenaStateTreeTaskFeatureExecutionMode) RemoveExecutionMode                                      OFFSET(get<T>, {0x24, 4, 0, 0})
};

/// Struct /Script/FortniteAIServer.FortAthenaTrackEventConsumeStateTreeTaskInstanceData
/// Size: 0x0010 (0x000000 - 0x000010)
class FFortAthenaTrackEventConsumeStateTreeTaskInstanceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FStateTreeStructRef)                       ReferencedEvent                                             OFFSET(getStruct<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/FortniteAIServer.FortAthenaTrackEventConsumeStateTreeTask
/// Size: 0x0000 (0x000020 - 0x000020)
class FFortAthenaTrackEventConsumeStateTreeTask : public FStateTreeTaskCommonBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/FortniteAIServer.FortAthenaTrackEventStateTreeTaskStateTreeParameter
/// Size: 0x0008 (0x000000 - 0x000008)
class FFortAthenaTrackEventStateTreeTaskStateTreeParameter : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(bool)                                      bHasReceivedTrackedEvent                                    OFFSET(get<bool>, {0x0, 1, 0, 0})
	SMember(FGameplayTag)                              ReceivedEventTag                                            OFFSET(getStruct<T>, {0x4, 4, 0, 0})
};

/// Struct /Script/FortniteAIServer.FortAthenaTrackEventStateTreeTaskInstanceData
/// Size: 0x0008 (0x000000 - 0x000008)
class FFortAthenaTrackEventStateTreeTaskInstanceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FFortAthenaTrackEventStateTreeTaskStateTreeParameter) OutParameter                                     OFFSET(getStruct<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/FortniteAIServer.FortAthenaTrackEventStateTreeTask
/// Size: 0x0050 (0x000020 - 0x000070)
class FFortAthenaTrackEventStateTreeTask : public FStateTreeTaskCommonBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FGameplayTagQuery)                         EventTagQuery                                               OFFSET(getStruct<T>, {0x20, 72, 0, 0})
	SMember(FGameplayTag)                              StateTreeEventTag                                           OFFSET(getStruct<T>, {0x68, 4, 0, 0})
};

/// Struct /Script/FortniteAIServer.FortAthenaWorldConditionInstanceData
/// Size: 0x0050 (0x000000 - 0x000050)
class FFortAthenaWorldConditionInstanceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(class AActor*)                             ActorA                                                      OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class AActor*)                             ActorB                                                      OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(class AActor*)                             ActorC                                                      OFFSET(get<T>, {0x10, 8, 0, 0})
	DMember(bool)                                      bOutResult                                                  OFFSET(get<bool>, {0x18, 1, 0, 0})
	SMember(FWorldConditionQueryState)                 QueryState                                                  OFFSET(getStruct<T>, {0x20, 48, 0, 0})
};

/// Struct /Script/FortniteAIServer.FortAthenaWorldConditionInstanceDataStateTreeTask
/// Size: 0x0020 (0x000020 - 0x000040)
class FFortAthenaWorldConditionInstanceDataStateTreeTask : public FStateTreeTaskCommonBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FWorldConditionQueryDefinition)            Conditions                                                  OFFSET(getStruct<T>, {0x20, 24, 0, 0})
	SMember(FGameplayTag)                              StateTreeEventTag                                           OFFSET(getStruct<T>, {0x38, 4, 0, 0})
};

/// Struct /Script/FortniteAIServer.FortBTService_InjectionTagKey
/// Size: 0x000C (0x000000 - 0x00000C)
class FFortBTService_InjectionTagKey : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	SMember(FGameplayTag)                              InjectionTag                                                OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FName)                                     InjectionKeyName                                            OFFSET(getStruct<T>, {0x4, 4, 0, 0})
	DMember(bool)                                      bHasBehaviorTreeSubtask                                     OFFSET(get<bool>, {0x8, 1, 0, 0})
	DMember(bool)                                      bHasStateTreeSubtask                                        OFFSET(get<bool>, {0x9, 1, 0, 0})
	DMember(bool)                                      bShareSameExecutionKey                                      OFFSET(get<bool>, {0xA, 1, 0, 0})
};

/// Struct /Script/FortniteAIServer.FortStateTreeBotCrouchTaskInstanceData
/// Size: 0x0010 (0x000000 - 0x000010)
class FFortStateTreeBotCrouchTaskInstanceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class AFortAthenaAIBotController*)         BotController                                               OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(bool)                                      bShouldCrouch                                               OFFSET(get<bool>, {0x8, 1, 0, 0})
};

/// Struct /Script/FortniteAIServer.FortStateTreeBotCrouchTask
/// Size: 0x0000 (0x000020 - 0x000020)
class FFortStateTreeBotCrouchTask : public FStateTreeAIActionTaskBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/FortniteAIServer.FortStateTreeBotEquipItemTaskInstanceData
/// Size: 0x0010 (0x000000 - 0x000010)
class FFortStateTreeBotEquipItemTaskInstanceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class UFortWorldItem*)                     ItemToEquip                                                 OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(bool)                                      bValidateAbility                                            OFFSET(get<bool>, {0x8, 1, 0, 0})
};

/// Struct /Script/FortniteAIServer.FortStateTreeBotEquipItemTask
/// Size: 0x0008 (0x000020 - 0x000028)
class FFortStateTreeBotEquipItemTask : public FStateTreeAIActionTaskBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Struct /Script/FortniteAIServer.FortStateTreeBotSprintTaskInstanceData
/// Size: 0x0010 (0x000000 - 0x000010)
class FFortStateTreeBotSprintTaskInstanceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class APawn*)                              Pawn                                                        OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(bool)                                      bShouldSprint                                               OFFSET(get<bool>, {0x8, 1, 0, 0})
};

/// Struct /Script/FortniteAIServer.FortStateTreeBotSprintTask
/// Size: 0x0020 (0x000020 - 0x000040)
class FFortStateTreeBotSprintTask : public FStateTreeAIActionTaskBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Struct /Script/FortniteAIServer.FortStateTreeBotFireWeaponTaskInstanceData
/// Size: 0x0020 (0x000000 - 0x000020)
class FFortStateTreeBotFireWeaponTaskInstanceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(class AFortAthenaAIBotController*)         BotController                                               OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(EForstStateTreeFireWeaponBehavior)         Behavior                                                    OFFSET(get<T>, {0x8, 1, 0, 0})
	DMember(float)                                     HoldFireDuration                                            OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     PreventFireDuration                                         OFFSET(get<float>, {0x10, 4, 0, 0})
};

/// Struct /Script/FortniteAIServer.FortStateTreeBotFireWeaponTask
/// Size: 0x0000 (0x000020 - 0x000020)
class FFortStateTreeBotFireWeaponTask : public FStateTreeAIActionTaskBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/FortniteAIServer.FortStateTreeBotGetCurrentWeaponTaskInstanceData
/// Size: 0x0010 (0x000000 - 0x000010)
class FFortStateTreeBotGetCurrentWeaponTaskInstanceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class AFortAthenaAIBotController*)         BotController                                               OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class AFortWeapon*)                        CurrentWeapon                                               OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/FortniteAIServer.FortStateTreeBotGetCurrentWeaponTask
/// Size: 0x0000 (0x000020 - 0x000020)
class FFortStateTreeBotGetCurrentWeaponTask : public FStateTreeAITaskBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/FortniteAIServer.FortStateTreeBotGetFiringPatternTaskInstanceData
/// Size: 0x0030 (0x000000 - 0x000030)
class FFortStateTreeBotGetFiringPatternTaskInstanceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(class AFortAthenaAIBotController*)         BotController                                               OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class AFortWeapon*)                        CurrentWeapon                                               OFFSET(get<T>, {0x8, 8, 0, 0})
	DMember(float)                                     HoldFireDuration                                            OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     PreventFireDuration                                         OFFSET(get<float>, {0x14, 4, 0, 0})
	CMember(class UFortAthenaAIBotRangeAttackDigestedSkillSet*) CacheRangeAttackDigestedSkillSet                   OFFSET(get<T>, {0x18, 8, 0, 0})
	CMember(class AFortWeapon*)                        LastUsedWeapon                                              OFFSET(get<T>, {0x20, 8, 0, 0})
};

/// Struct /Script/FortniteAIServer.FortStateTreeBotGetFiringPatternTask
/// Size: 0x0000 (0x000020 - 0x000020)
class FFortStateTreeBotGetFiringPatternTask : public FStateTreeAITaskBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/FortniteAIServer.FortStateTreeGetTargetActorTaskInstanceData
/// Size: 0x0008 (0x000000 - 0x000008)
class FFortStateTreeGetTargetActorTaskInstanceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(class AActor*)                             TargetActor                                                 OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/FortniteAIServer.FortStateTreeGetTargetActorTask
/// Size: 0x0008 (0x000020 - 0x000028)
class FFortStateTreeGetTargetActorTask : public FStateTreeAITaskBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Struct /Script/FortniteAIServer.FortStateTreeReloadWeaponTaskInstanceData
/// Size: 0x0008 (0x000000 - 0x000008)
class FFortStateTreeReloadWeaponTaskInstanceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(class AFortWeapon*)                        Weapon                                                      OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/FortniteAIServer.FortStateTreeReloadWeaponTask
/// Size: 0x0000 (0x000020 - 0x000020)
class FFortStateTreeReloadWeaponTask : public FStateTreeAIActionTaskBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/FortniteAIServer.FortStateTreeGetWeaponRemainingAmmoTaskInstanceData
/// Size: 0x0010 (0x000000 - 0x000010)
class FFortStateTreeGetWeaponRemainingAmmoTaskInstanceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class AFortWeapon*)                        Weapon                                                      OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(int32_t)                                   RemainingAmmo                                               OFFSET(get<int32_t>, {0x8, 4, 0, 0})
};

/// Struct /Script/FortniteAIServer.FortStateTreeGetWeaponRemainingAmmoTask
/// Size: 0x0000 (0x000020 - 0x000020)
class FFortStateTreeGetWeaponRemainingAmmoTask : public FStateTreeTaskCommonBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/FortniteAIServer.FortWorldConditionGameplayTagActorQueryState
/// Size: 0x0008 (0x000000 - 0x000008)
class FFortWorldConditionGameplayTagActorQueryState : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/FortniteAIServer.FortWorldConditionGameplayTagActor
/// Size: 0x0030 (0x000010 - 0x000040)
class FFortWorldConditionGameplayTagActor : public FWorldConditionCommonBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FWorldConditionContextDataRef)             ActorContextRef                                             OFFSET(getStruct<T>, {0x10, 8, 0, 0})
	SMember(FGameplayTagContainer)                     TagContainerToCheck                                         OFFSET(getStruct<T>, {0x18, 32, 0, 0})
	CMember(EHasMatchingGameplayTagContainerTestType)  TestType                                                    OFFSET(get<T>, {0x38, 1, 0, 0})
};

/// Struct /Script/FortniteAIServer.FortWorldConditionPlayerHasConvertedNPC
/// Size: 0x0010 (0x000010 - 0x000020)
class FFortWorldConditionPlayerHasConvertedNPC : public FWorldConditionCommonActorBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FWorldConditionContextDataRef)             ActorRef                                                    OFFSET(getStruct<T>, {0x10, 8, 0, 0})
	CMember(EFortWorldConditionPlayerHasConvertedNPCCondition) ConditionToCheck                                    OFFSET(get<T>, {0x18, 1, 0, 0})
};

/// Struct /Script/FortniteAIServer.FortWorldConditionPlayerUsesCID
/// Size: 0x0018 (0x000010 - 0x000028)
class FFortWorldConditionPlayerUsesCID : public FWorldConditionCommonActorBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FWorldConditionContextDataRef)             ActorRef                                                    OFFSET(getStruct<T>, {0x10, 8, 0, 0})
	CMember(TArray<FPrimaryAssetId>)                   AllowedCharacters                                           OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/FortniteAIServer.FortWorldConditionTimeOfDay
/// Size: 0x0010 (0x000010 - 0x000020)
class FFortWorldConditionTimeOfDay : public FWorldConditionCommonBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FWorldConditionContextDataRef)             ActorContextRef                                             OFFSET(getStruct<T>, {0x10, 8, 0, 0})
	DMember(int32_t)                                   ValidTimesOfDay                                             OFFSET(get<int32_t>, {0x18, 4, 0, 0})
};

/// Struct /Script/FortniteAIServer.FortWorldConditionWorldStatState
/// Size: 0x0020 (0x000000 - 0x000020)
class FFortWorldConditionWorldStatState : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/FortniteAIServer.FortWorldConditionWorldStat
/// Size: 0x0018 (0x000010 - 0x000028)
class FFortWorldConditionWorldStat : public FWorldConditionCommonBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FName)                                     WorldStatRowName                                            OFFSET(getStruct<T>, {0x10, 4, 0, 0})
	SMember(FInt32Range)                               ValueRange                                                  OFFSET(getStruct<T>, {0x14, 16, 0, 0})
};

/// Struct /Script/FortniteAIServer.PFWNPCReactions_TriggeredReactions_PersistentInfoData
/// Size: 0x0010 (0x000000 - 0x000010)
class FPFWNPCReactions_TriggeredReactions_PersistentInfoData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FString>)                           TriggeredReactionRowNames                                   OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/FortniteAIServer.PFWNPCReactions_PersistentInfo
/// Size: 0x0010 (0x000000 - 0x000010)
class FPFWNPCReactions_PersistentInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FPFWNPCReactions_TriggeredReactions_PersistentInfoData) TriggeredReactions_PersistentInfoData          OFFSET(getStruct<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/FortniteAIServer.GameFeatureFortAIEvaluatorEntry
/// Size: 0x0048 (0x000000 - 0x000048)
class FGameFeatureFortAIEvaluatorEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(TWeakObjectPtr<UBehaviorTree*>)            TreeAsset                                                   OFFSET(get<T>, {0x0, 32, 0, 0})
	SMember(FGameplayTag)                              InjectionTag                                                OFFSET(getStruct<T>, {0x20, 4, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   AIEvaluatorClass                                            OFFSET(get<T>, {0x28, 32, 0, 0})
};

/// Struct /Script/FortniteAIServer.FortPointOnCurveRange
/// Size: 0x0008 (0x000000 - 0x000008)
class FFortPointOnCurveRange : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(float)                                     MinPercentage                                               OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     MaxPercentage                                               OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Struct /Script/FortniteAIServer.FortPointsOnCurve
/// Size: 0x0030 (0x000000 - 0x000030)
class FFortPointsOnCurve : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(TWeakObjectPtr<UCurveFloat*>)              Curve                                                       OFFSET(get<T>, {0x0, 32, 0, 0})
	CMember(TArray<FFortPointOnCurveRange>)            RangesForPointsOnCurve                                      OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/FortniteAIServer.FortQueryGenerator_PerceivedActors_Settings
/// Size: 0x0040 (0x000000 - 0x000040)
class FFortQueryGenerator_PerceivedActors_Settings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(bool)                                      bIgnoreDBNOPawns                                            OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(bool)                                      bIgnoreSleepingAIs                                          OFFSET(get<bool>, {0x1, 1, 0, 0})
	SMember(FAIDataProviderFloatValue)                 MaxTimeSincePerceived                                       OFFSET(getStruct<T>, {0x8, 56, 0, 0})
};

/// Struct /Script/FortniteAIServer.FortGameplayTagQueryPerDifficulty
/// Size: 0x0060 (0x000000 - 0x000060)
class FFortGameplayTagQueryPerDifficulty : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FDataTableRowHandle)                       DifficultyInfo                                              OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FGameplayTagQuery)                         TagQueryToMatch                                             OFFSET(getStruct<T>, {0x10, 72, 0, 0})
	DMember(float)                                     Difficulty                                                  OFFSET(get<float>, {0x58, 4, 0, 0})
};

/// Struct /Script/FortniteAIServer.GoalDistanceData
/// Size: 0x0098 (0x000000 - 0x000098)
class FGoalDistanceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	DMember(bool)                                      bIgnoreScreeningDistance                                    OFFSET(get<bool>, {0x0, 1, 0, 0})
	SMember(FAIDataProviderFloatValue)                 ScreeningTestMaxDistance                                    OFFSET(getStruct<T>, {0x8, 56, 0, 0})
	CMember(TWeakObjectPtr<UCurveFloat*>)              TestScoreCurve                                              OFFSET(get<T>, {0x40, 32, 0, 0})
	SMember(FAIDataProviderFloatValue)                 CurveDistanceScale                                          OFFSET(getStruct<T>, {0x60, 56, 0, 0})
};

/// Struct /Script/FortniteAIServer.MimicConverterAbilityData
/// Size: 0x0078 (0x000000 - 0x000078)
class FMimicConverterAbilityData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	SMember(FGameplayTagQuery)                         RequiredConverterAbilityTags                                OFFSET(getStruct<T>, {0x0, 72, 0, 0})
	SMember(FGameplayTagContainer)                     AbilitiesToApply                                            OFFSET(getStruct<T>, {0x48, 32, 0, 0})
	CMember(TArray<class UClass*>)                     GEsToApply                                                  OFFSET(get<T>, {0x68, 16, 0, 0})
};

/// Struct /Script/FortniteAIServer.FlankingLocationInfo
/// Size: 0x0020 (0x000000 - 0x000020)
class FFlankingLocationInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/FortniteAIServer.FailedToReachPOI
/// Size: 0x0008 (0x000000 - 0x000008)
class FFailedToReachPOI : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(int32_t)                                   BotPOIID                                                    OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   FailCount                                                   OFFSET(get<int32_t>, {0x4, 4, 0, 0})
};

/// Struct /Script/FortniteAIServer.GameplayAbilityEvaluatorModule
/// Size: 0x0028 (0x000000 - 0x000028)
class FGameplayAbilityEvaluatorModule : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FGameplayTagContainer)                     GameplayAbilityTag                                          OFFSET(getStruct<T>, {0x0, 32, 0, 0})
	CMember(class UAbilitySystemComponent*)            CachedAbilitySystemComponent                                OFFSET(get<T>, {0x20, 8, 0, 0})
};

/// Struct /Script/FortniteAIServer.GameplayTagActorHasMatchingGameplayTagInstanceData
/// Size: 0x0010 (0x000000 - 0x000010)
class FGameplayTagActorHasMatchingGameplayTagInstanceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class AActor*)                             Actor                                                       OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FGameplayTag)                              TagToCheck                                                  OFFSET(getStruct<T>, {0x8, 4, 0, 0})
};

/// Struct /Script/FortniteAIServer.GameplayTagActorHasMatchingGameplayTagCondition
/// Size: 0x0008 (0x000020 - 0x000028)
class FGameplayTagActorHasMatchingGameplayTagCondition : public FStateTreeConditionCommonBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(bool)                                      bInvert                                                     OFFSET(get<bool>, {0x20, 1, 0, 0})
};

/// Struct /Script/FortniteAIServer.GameplayTagActorHasMatchingGameplayTagContainerInstanceData
/// Size: 0x0028 (0x000000 - 0x000028)
class FGameplayTagActorHasMatchingGameplayTagContainerInstanceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(class AActor*)                             Actor                                                       OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FGameplayTagContainer)                     TagContainerToCheck                                         OFFSET(getStruct<T>, {0x8, 32, 0, 0})
};

/// Struct /Script/FortniteAIServer.GameplayTagActorHasMatchingGameplayContainerTagCondition
/// Size: 0x0008 (0x000020 - 0x000028)
class FGameplayTagActorHasMatchingGameplayContainerTagCondition : public FStateTreeConditionCommonBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(EHasMatchingGameplayTagContainerTestType)  TestType                                                    OFFSET(get<T>, {0x20, 1, 0, 0})
	DMember(bool)                                      bInvert                                                     OFFSET(get<bool>, {0x21, 1, 0, 0})
};

/// Struct /Script/FortniteAIServer.FortAthenaAddGameplayTagsStateTreeTaskInstanceData
/// Size: 0x0028 (0x000000 - 0x000028)
class FFortAthenaAddGameplayTagsStateTreeTaskInstanceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(class AActor*)                             Actor                                                       OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FGameplayTagContainer)                     Tags                                                        OFFSET(getStruct<T>, {0x8, 32, 0, 0})
};

/// Struct /Script/FortniteAIServer.FortAthenaAddGameplayTagsStateTreeTask
/// Size: 0x0010 (0x000020 - 0x000030)
class FFortAthenaAddGameplayTagsStateTreeTask : public FStateTreeTaskCommonBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(bool)                                      bReplicateChange                                            OFFSET(get<bool>, {0x20, 1, 0, 0})
	CMember(EFortAthenaStateTreeTaskFeatureExecutionMode) AddExecutionMode                                         OFFSET(get<T>, {0x24, 4, 0, 0})
	CMember(EFortAthenaStateTreeTaskFeatureExecutionMode) RemoveExecutionMode                                      OFFSET(get<T>, {0x28, 4, 0, 0})
};

/// Struct /Script/FortniteAIServer.FortAthenaArithmeticStateTreeTask
/// Size: 0x0008 (0x000020 - 0x000028)
class FFortAthenaArithmeticStateTreeTask : public FStateTreeTaskCommonBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(EGameplayInteractionTaskTrigger)           OperationTrigger                                            OFFSET(get<T>, {0x20, 1, 0, 0})
	CMember(EFortAthenaArithmeticOperation)            Operation                                                   OFFSET(get<T>, {0x21, 1, 0, 0})
};

/// Struct /Script/FortniteAIServer.FortAthenaIntArithmeticStateTreeTaskInstanceData
/// Size: 0x0018 (0x000000 - 0x000018)
class FFortAthenaIntArithmeticStateTreeTaskInstanceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(int32_t)                                   FirstOperand                                                OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   SecondOperand                                               OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	SMember(FStateTreeStructRef)                       ReferencedResult                                            OFFSET(getStruct<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/FortniteAIServer.FortAthenaIntArithmeticStateTreeTask
/// Size: 0x0000 (0x000028 - 0x000028)
class FFortAthenaIntArithmeticStateTreeTask : public FFortAthenaArithmeticStateTreeTask
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Struct /Script/FortniteAIServer.FortAthenaFindSmartObjectAnimForActorStateTreeTaskInstanceData
/// Size: 0x0040 (0x000000 - 0x000040)
class FFortAthenaFindSmartObjectAnimForActorStateTreeTaskInstanceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(class AActor*)                             UserActor                                                   OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class AActor*)                             SmartObjectActor                                            OFFSET(get<T>, {0x8, 8, 0, 0})
	SMember(FGameplayTagContainer)                     Tags                                                        OFFSET(getStruct<T>, {0x10, 32, 0, 0})
	CMember(class UAnimMontage*)                       PickedMontage                                               OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(class UContextualAnimSceneAsset*)          PickedSceneAsset                                            OFFSET(get<T>, {0x38, 8, 0, 0})
};

/// Struct /Script/FortniteAIServer.FortAthenaFindSmartObjectAnimForActorStateTreeTask
/// Size: 0x0000 (0x000020 - 0x000020)
class FFortAthenaFindSmartObjectAnimForActorStateTreeTask : public FStateTreeTaskCommonBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/FortniteAIServer.FortAthenaFocusAtStateTreeTaskInstanceData
/// Size: 0x0090 (0x000000 - 0x000090)
class FFortAthenaFocusAtStateTreeTaskInstanceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	CMember(class AActor*)                             Actor                                                       OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class AActor*)                             FocusActor                                                  OFFSET(get<T>, {0x8, 8, 0, 0})
	SMember(FVector)                                   FocusActorOffset                                            OFFSET(getStruct<T>, {0x10, 24, 0, 0})
	SMember(FVector)                                   FocusWorldPoint                                             OFFSET(getStruct<T>, {0x28, 24, 0, 0})
	DMember(bool)                                      bSetBackOnExit                                              OFFSET(get<bool>, {0x40, 1, 0, 0})
};

/// Struct /Script/FortniteAIServer.FortAthenaFocusAtStateTreeTask
/// Size: 0x0000 (0x000020 - 0x000020)
class FFortAthenaFocusAtStateTreeTask : public FStateTreeTaskCommonBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/FortniteAIServer.FortAthenaIntStateTreeParameter
/// Size: 0x0004 (0x000000 - 0x000004)
class FFortAthenaIntStateTreeParameter : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(int32_t)                                   Int                                                         OFFSET(get<int32_t>, {0x0, 4, 0, 0})
};

/// Struct /Script/FortniteAIServer.FortAthenaMakeIntVariableStateTreeTaskInstanceData
/// Size: 0x0008 (0x000000 - 0x000008)
class FFortAthenaMakeIntVariableStateTreeTaskInstanceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(int32_t)                                   DefaultIntValue                                             OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	SMember(FFortAthenaIntStateTreeParameter)          OutInt                                                      OFFSET(getStruct<T>, {0x4, 4, 0, 0})
};

/// Struct /Script/FortniteAIServer.FortAthenaMakeIntVariableStateTreeTask
/// Size: 0x0008 (0x000020 - 0x000028)
class FFortAthenaMakeIntVariableStateTreeTask : public FStateTreeTaskCommonBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(bool)                                      bResetOnReselect                                            OFFSET(get<bool>, {0x20, 1, 0, 0})
};

/// Struct /Script/FortniteAIServer.FortAthenaPlayContextualAnimStateTreeTask
/// Size: 0x0000 (0x000020 - 0x000020)
class FFortAthenaPlayContextualAnimStateTreeTask : public FStateTreeTaskCommonBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/FortniteAIServer.FortAthenaPlayInteractionStateTreeTaskActorInfo
/// Size: 0x0024 (0x000000 - 0x000024)
class FFortAthenaPlayInteractionStateTreeTaskActorInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 36;

public:
};

/// Struct /Script/FortniteAIServer.FortAthenaStateTreeCrouchTaskInstanceData
/// Size: 0x0008 (0x000000 - 0x000008)
class FFortAthenaStateTreeCrouchTaskInstanceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(class AActor*)                             Actor                                                       OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/FortniteAIServer.FortAthenaStateTreeCrouchTask
/// Size: 0x0000 (0x000020 - 0x000020)
class FFortAthenaStateTreeCrouchTask : public FStateTreeTaskCommonBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/FortniteAIServer.FortAthenaStateTreeInteractTaskInstanceData
/// Size: 0x0020 (0x000000 - 0x000020)
class FFortAthenaStateTreeInteractTaskInstanceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(TEnumAsByte<TInteractionType>)             InteractType                                                OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(class AActor*)                             Actor                                                       OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(class AActor*)                             InteractTargetActor                                         OFFSET(get<T>, {0x10, 8, 0, 0})
	DMember(float)                                     InteractDuration                                            OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     Timer                                                       OFFSET(get<float>, {0x1C, 4, 0, 0})
};

/// Struct /Script/FortniteAIServer.FortAthenaStateTreeInteractTask
/// Size: 0x0000 (0x000020 - 0x000020)
class FFortAthenaStateTreeInteractTask : public FStateTreeTaskCommonBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/FortniteAIServer.FortAthenaStateTreeLookAroundTaskInstanceData
/// Size: 0x0018 (0x000000 - 0x000018)
class FFortAthenaStateTreeLookAroundTaskInstanceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(class AActor*)                             Actor                                                       OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(float)                                     LookAtDurationMin                                           OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     LookAtDurationMax                                           OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     LookAtDuration                                              OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     Timer                                                       OFFSET(get<float>, {0x14, 4, 0, 0})
};

/// Struct /Script/FortniteAIServer.FortAthenaStateTreeLookAroundTask
/// Size: 0x0000 (0x000020 - 0x000020)
class FFortAthenaStateTreeLookAroundTask : public FStateTreeTaskCommonBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/FortniteAIServer.FortAthenaTeleportToActorStateTreeTaskInstanceData
/// Size: 0x0040 (0x000000 - 0x000040)
class FFortAthenaTeleportToActorStateTreeTaskInstanceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(class AActor*)                             Actor                                                       OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class AActor*)                             TargetActor                                                 OFFSET(get<T>, {0x8, 8, 0, 0})
	SMember(FVector)                                   TeleportRelativeLocation                                    OFFSET(getStruct<T>, {0x10, 24, 0, 0})
	SMember(FRotator)                                  TeleportRelativeRotation                                    OFFSET(getStruct<T>, {0x28, 24, 0, 0})
};

/// Struct /Script/FortniteAIServer.FortAthenaTeleportToActorStateTreeTask
/// Size: 0x0000 (0x000020 - 0x000020)
class FFortAthenaTeleportToActorStateTreeTask : public FStateTreeTaskCommonBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/FortniteAIServer.FortAthenaToggleGameplayEffectStateTreeTaskInstanceData
/// Size: 0x00C8 (0x000000 - 0x0000C8)
class FFortAthenaToggleGameplayEffectStateTreeTaskInstanceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	CMember(class AActor*)                             Actor                                                       OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class AActor*)                             TargetActor                                                 OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(TArray<class UClass*>)                     GameplayEffectClassesToAdd                                  OFFSET(get<T>, {0x10, 16, 0, 0})
	DMember(bool)                                      bAutomaticallyRemoveAddedEffectsOnExit                      OFFSET(get<bool>, {0x20, 1, 0, 0})
	CMember(TArray<class UClass*>)                     GameplayEffectClassesToRemove                               OFFSET(get<T>, {0x28, 16, 0, 0})
	SMember(FGameplayTagContainer)                     GameplayEffectsByTagsToRemove                               OFFSET(getStruct<T>, {0x38, 32, 0, 0})
	SMember(FGameplayTagContainer)                     GameplayEffectsBySourceTagsToRemove                         OFFSET(getStruct<T>, {0x58, 32, 0, 0})
	SMember(FGameplayTagContainer)                     GameplayEffectsByAppliedTagsToRemove                        OFFSET(getStruct<T>, {0x78, 32, 0, 0})
	SMember(FGameplayTagContainer)                     GameplayEffectsByGrantedTagsToRemove                        OFFSET(getStruct<T>, {0x98, 32, 0, 0})
};

/// Struct /Script/FortniteAIServer.FortAthenaToggleGameplayEffectStateTreeTask
/// Size: 0x0008 (0x000020 - 0x000028)
class FFortAthenaToggleGameplayEffectStateTreeTask : public FStateTreeTaskCommonBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(EFortAthenaStateTreeTaskFeatureExecutionMode) AddExecutionMode                                         OFFSET(get<T>, {0x20, 4, 0, 0})
	CMember(EFortAthenaStateTreeTaskFeatureExecutionMode) RemoveExecutionMode                                      OFFSET(get<T>, {0x24, 4, 0, 0})
};

/// Struct /Script/FortniteAIServer.FortWorldConditionWorldState
/// Size: 0x0048 (0x000010 - 0x000058)
class FFortWorldConditionWorldState : public FWorldConditionCommonBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FGameplayTagQuery)                         WorldStateQuery                                             OFFSET(getStruct<T>, {0x10, 72, 0, 0})
};

/// Enum /Script/FortniteAIServer.ETargetContext
/// Size: 0x03
enum class ETargetContext : uint8_t
{
	ETargetContext__Default                                                          = 0,
	ETargetContext__Unreachable                                                      = 1,
	ETargetContext__OutsideOfLeash                                                   = 2
};

/// Enum /Script/FortniteAIServer.SwitchSeatType
/// Size: 0x04
enum class SwitchSeatType : uint8_t
{
	ToDriver                                                                         = 0,
	ToPassenger                                                                      = 1,
	ToGunner                                                                         = 2,
	ToSpotter                                                                        = 3
};

/// Enum /Script/FortniteAIServer.EFortAthenaStateTreeTaskFeatureExecutionMode
/// Size: 0x03
enum class EFortAthenaStateTreeTaskFeatureExecutionMode : uint32_t
{
	EFortAthenaStateTreeTaskFeatureExecutionMode__DoNotExecute                       = 0,
	EFortAthenaStateTreeTaskFeatureExecutionMode__ExecuteOnEnter                     = 1,
	EFortAthenaStateTreeTaskFeatureExecutionMode__ExecuteOnExit                      = 2
};

/// Enum /Script/FortniteAIServer.SeatStatusType
/// Size: 0x04
enum class SeatStatusType : uint8_t
{
	Driver                                                                           = 0,
	Passenger                                                                        = 1,
	Gunner                                                                           = 2,
	Spotter                                                                          = 3
};

/// Enum /Script/FortniteAIServer.EForstStateTreeFireWeaponBehavior
/// Size: 0x04
enum class EForstStateTreeFireWeaponBehavior : uint8_t
{
	EForstStateTreeFireWeaponBehavior__HoldFire                                      = 0,
	EForstStateTreeFireWeaponBehavior__HoldFireForPattern                            = 1,
	EForstStateTreeFireWeaponBehavior__FireSingleAndSucceed                          = 2,
	EForstStateTreeFireWeaponBehavior__FireSingleAndRun                              = 3
};

/// Enum /Script/FortniteAIServer.EFortWorldConditionPlayerHasConvertedNPCCondition
/// Size: 0x02
enum class EFortWorldConditionPlayerHasConvertedNPCCondition : uint8_t
{
	EFortWorldConditionPlayerHasConvertedNPCCondition__HasReachedConvertedNPCLimit   = 0,
	EFortWorldConditionPlayerHasConvertedNPCCondition__HasAnotherConvertedNPC        = 1
};

/// Enum /Script/FortniteAIServer.EFortPointsFromNavGraphGoalPathDistanceFilterOperator
/// Size: 0x02
enum class EFortPointsFromNavGraphGoalPathDistanceFilterOperator : uint8_t
{
	EFortPointsFromNavGraphGoalPathDistanceFilterOperator__AllGoalsInRange           = 0,
	EFortPointsFromNavGraphGoalPathDistanceFilterOperator__AnyGoalInRange            = 1
};

/// Enum /Script/FortniteAIServer.EFortTestGoalActorDot
/// Size: 0x02
enum class EFortTestGoalActorDot : uint8_t
{
	EFortTestGoalActorDot__Dot3D                                                     = 0,
	EFortTestGoalActorDot__Dot2D                                                     = 1
};

/// Enum /Script/FortniteAIServer.EDistanceMode
/// Size: 0x03
enum class EDistanceMode : uint8_t
{
	EDistanceMode__DistItemToContext                                                 = 0,
	EDistanceMode__DistItemGoalActorToContext                                        = 1,
	EDistanceMode__DistItemToItemGoalActor                                           = 2
};

/// Enum /Script/FortniteAIServer.ECountAIAssignedToType
/// Size: 0x03
enum class ECountAIAssignedToType : uint8_t
{
	ECountAIAssignedToType__Goal                                                     = 0,
	ECountAIAssignedToType__Actor                                                    = 1,
	ECountAIAssignedToType__Assignment                                               = 2
};

/// Enum /Script/FortniteAIServer.EFortAthenaAICanMoveState
/// Size: 0x06
enum class EFortAthenaAICanMoveState : uint8_t
{
	EFortAthenaAICanMoveState__None                                                  = 0,
	EFortAthenaAICanMoveState__Failed_AgentOffNavmesh                                = 1,
	EFortAthenaAICanMoveState__Failed_GoalOffNavmesh                                 = 2,
	EFortAthenaAICanMoveState__Failed_Falling                                        = 3,
	EFortAthenaAICanMoveState__Success                                               = 4,
	EFortAthenaAICanMoveState__Success_Partial                                       = 5
};

/// Enum /Script/FortniteAIServer.EEvasiveManeuverType
/// Size: 0x05
enum class EEvasiveManeuverType : uint8_t
{
	EEvasiveManeuverType__Crouch                                                     = 0,
	EEvasiveManeuverType__Dodge                                                      = 1,
	EEvasiveManeuverType__Jump                                                       = 2,
	EEvasiveManeuverType__JetpackStrafe                                              = 3,
	EEvasiveManeuverType__None                                                       = 4
};

/// Enum /Script/FortniteAIServer.EFreeFallingMode
/// Size: 0x04
enum class EFreeFallingMode : uint8_t
{
	EFreeFallingMode__Idle                                                           = 0,
	EFreeFallingMode__Random                                                         = 1,
	EFreeFallingMode__TowardNearestAlly                                              = 2,
	EFreeFallingMode__PatrolPath                                                     = 3
};

/// Enum /Script/FortniteAIServer.EFocusingBehavior
/// Size: 0x10
enum class EFocusingBehavior : uint8_t
{
	EFocusingBehavior__FocusCurrentTarget                                            = 0,
	EFocusingBehavior__IgnoreThreatAfterTimer                                        = 1,
	EFocusingBehavior__IgnoreThreatAlways                                            = 2,
	EFocusingBehavior__IgnoreThreatToFlee                                            = 3,
	EFocusingBehavior__LookAtInvestigate                                             = 4,
	EFocusingBehavior__LookAtAmbush                                                  = 5,
	EFocusingBehavior__LookAtHeardSound                                              = 6,
	EFocusingBehavior__LookAtScanAround                                              = 7,
	EFocusingBehavior__LookAtScanAroundOnly                                          = 8,
	EFocusingBehavior__Invalid                                                       = 9
};

/// Enum /Script/FortniteAIServer.ECannotMeleeAttackReason
/// Size: 0x05
enum class ECannotMeleeAttackReason : uint8_t
{
	ECannotMeleeAttackReason__None                                                   = 0,
	ECannotMeleeAttackReason__CooldownActive                                         = 1,
	ECannotMeleeAttackReason__Other                                                  = 2,
	ECannotMeleeAttackReason__AttackDestinationNotValid                              = 3,
	ECannotMeleeAttackReason__TargetOutsideLeash                                     = 4
};

/// Enum /Script/FortniteAIServer.EPathTestQueryType
/// Size: 0x03
enum class EPathTestQueryType : uint8_t
{
	EPathTestQueryType__NavmeshRaycast2D                                             = 0,
	EPathTestQueryType__HierarchicalQuery                                            = 1,
	EPathTestQueryType__RegularPathFinding                                           = 2
};

/// Enum /Script/FortniteAIServer.ECooldownType
/// Size: 0x03
enum class ECooldownType : uint8_t
{
	OnActionTriggered                                                                = 0,
	OnActionFinished                                                                 = 1,
	OnActionSucceeded                                                                = 2
};

/// Enum /Script/FortniteAIServer.EBTSetBlackboardBoolExitActions
/// Size: 0x03
enum class EBTSetBlackboardBoolExitActions : uint8_t
{
	EBTSetBlackboardBoolExitActions__Invert                                          = 0,
	EBTSetBlackboardBoolExitActions__Revert                                          = 1,
	EBTSetBlackboardBoolExitActions__Keep                                            = 2
};

/// Enum /Script/FortniteAIServer.EGlideBehavior
/// Size: 0x02
enum class EGlideBehavior : uint8_t
{
	EGlideBehavior__GlideFocusOnDestination                                          = 0,
	EGlideBehavior__GlideSurveyArea                                                  = 1
};

/// Enum /Script/FortniteAIServer.EGlideMovementType
/// Size: 0x03
enum class EGlideMovementType : uint8_t
{
	EGlideMovementType__GlideMovementLinear                                          = 0,
	EGlideMovementType__GlideMovementSpiral                                          = 1,
	EGlideMovementType__GlideMovementSerpentine                                      = 2
};

/// Enum /Script/FortniteAIServer.EActionState
/// Size: 0x07
enum class EActionState : uint8_t
{
	EActionState__TryingToEquip                                                      = 0,
	EActionState__EquippingItem                                                      = 1,
	EActionState__UsingItem                                                          = 2,
	EActionState__WaitingItemTermination                                             = 3,
	EActionState__WaitBeforeEquippingNextItem                                        = 4,
	EActionState__ActionEndedWithNoError                                             = 5,
	EActionState__ActionEndedWithError                                               = 6
};

/// Enum /Script/FortniteAIServer.EEncampmentRole
/// Size: 0x03
enum class EEncampmentRole : uint8_t
{
	EEncampmentRole__Guard                                                           = 0,
	EEncampmentRole__Build                                                           = 1,
	EEncampmentRole__Count                                                           = 2
};

/// Enum /Script/FortniteAIServer.EHasMatchingGameplayTagContainerTestType
/// Size: 0x02
enum class EHasMatchingGameplayTagContainerTestType : uint8_t
{
	EHasMatchingGameplayTagContainerTestType__Any                                    = 0,
	EHasMatchingGameplayTagContainerTestType__All                                    = 1
};

/// Enum /Script/FortniteAIServer.EFortAthenaArithmeticOperation
/// Size: 0x04
enum class EFortAthenaArithmeticOperation : uint8_t
{
	EFortAthenaArithmeticOperation__Add                                              = 0,
	EFortAthenaArithmeticOperation__Subtract                                         = 1,
	EFortAthenaArithmeticOperation__Multiply                                         = 2,
	EFortAthenaArithmeticOperation__Divide                                           = 3
};

/// Enum /Script/FortniteAIServer.EFortAthenaPlayContextualAnimExecutionMethod
/// Size: 0x04
enum class EFortAthenaPlayContextualAnimExecutionMethod : uint8_t
{
	EFortAthenaPlayContextualAnimExecutionMethod__StartInteraction                   = 0,
	EFortAthenaPlayContextualAnimExecutionMethod__JoinInteraction                    = 1,
	EFortAthenaPlayContextualAnimExecutionMethod__TransitionAllActors                = 2,
	EFortAthenaPlayContextualAnimExecutionMethod__TransitionSingleActor              = 3
};

/// Enum /Script/FortniteAIServer.ESTFortAthenaPlayMontageExecMode
/// Size: 0x03
enum class ESTFortAthenaPlayMontageExecMode : uint8_t
{
	ESTFortAthenaPlayMontageExecMode__NewMontage                                     = 0,
	ESTFortAthenaPlayMontageExecMode__SetNextSection                                 = 1,
	ESTFortAthenaPlayMontageExecMode__JumpToSection                                  = 2
};

/// Enum /Script/FortniteAIServer.ESTFortAthenaPlayMontageLoopMode
/// Size: 0x02
enum class ESTFortAthenaPlayMontageLoopMode : uint8_t
{
	ESTFortAthenaPlayMontageLoopMode__Task                                           = 0,
	ESTFortAthenaPlayMontageLoopMode__Montage                                        = 1
};

