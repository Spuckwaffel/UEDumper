
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
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
/// dependency: GameplayTags
/// dependency: ModularGameplay
/// dependency: SmartObjectsModule
/// dependency: StateTreeModule
/// dependency: WorldConditions

/// Enum /Script/FortniteAIServer.ETargetContext
/// Size: 0x04
enum class ETargetContext : uint8_t
{
	ETargetContext__Default                                                          = 0,
	ETargetContext__Unreachable                                                      = 1,
	ETargetContext__OutsideOfLeash                                                   = 2,
	ETargetContext__ETargetContext_MAX                                               = 3
};

/// Enum /Script/FortniteAIServer.SwitchSeatType
/// Size: 0x05
enum class SwitchSeatType : uint8_t
{
	ToDriver                                                                         = 0,
	ToPassenger                                                                      = 1,
	ToGunner                                                                         = 2,
	ToSpotter                                                                        = 3,
	SwitchSeatType_MAX                                                               = 4
};

/// Enum /Script/FortniteAIServer.EFortAthenaStateTreeTaskFeatureExecutionMode
/// Size: 0x04
enum class EFortAthenaStateTreeTaskFeatureExecutionMode : uint32_t
{
	EFortAthenaStateTreeTaskFeatureExecutionMode__DoNotExecute                       = 0,
	EFortAthenaStateTreeTaskFeatureExecutionMode__ExecuteOnEnter                     = 1,
	EFortAthenaStateTreeTaskFeatureExecutionMode__ExecuteOnExit                      = 2,
	EFortAthenaStateTreeTaskFeatureExecutionMode__EFortAthenaStateTreeTaskFeatureExecutionMode_MAX = 3
};

/// Enum /Script/FortniteAIServer.SeatStatusType
/// Size: 0x05
enum class SeatStatusType : uint8_t
{
	Driver                                                                           = 0,
	Passenger                                                                        = 1,
	Gunner                                                                           = 2,
	Spotter                                                                          = 3,
	SeatStatusType_MAX                                                               = 4
};

/// Enum /Script/FortniteAIServer.EFortWorldConditionPlayerHasConvertedNPCCondition
/// Size: 0x03
enum class EFortWorldConditionPlayerHasConvertedNPCCondition : uint8_t
{
	EFortWorldConditionPlayerHasConvertedNPCCondition__HasReachedConvertedNPCLimit   = 0,
	EFortWorldConditionPlayerHasConvertedNPCCondition__HasAnotherConvertedNPC        = 1,
	EFortWorldConditionPlayerHasConvertedNPCCondition__EFortWorldConditionPlayerHasConvertedNPCCondition_MAX = 2
};

/// Enum /Script/FortniteAIServer.EFortPointsFromNavGraphGoalPathDistanceFilterOperator
/// Size: 0x03
enum class EFortPointsFromNavGraphGoalPathDistanceFilterOperator : uint8_t
{
	EFortPointsFromNavGraphGoalPathDistanceFilterOperator__AllGoalsInRange           = 0,
	EFortPointsFromNavGraphGoalPathDistanceFilterOperator__AnyGoalInRange            = 1,
	EFortPointsFromNavGraphGoalPathDistanceFilterOperator__EFortPointsFromNavGraphGoalPathDistanceFilterOperator_MAX = 2
};

/// Enum /Script/FortniteAIServer.EFortTestGoalActorDot
/// Size: 0x03
enum class EFortTestGoalActorDot : uint8_t
{
	EFortTestGoalActorDot__Dot3D                                                     = 0,
	EFortTestGoalActorDot__Dot2D                                                     = 1,
	EFortTestGoalActorDot__EFortTestGoalActorDot_MAX                                 = 2
};

/// Enum /Script/FortniteAIServer.EDistanceMode
/// Size: 0x04
enum class EDistanceMode : uint8_t
{
	EDistanceMode__DistItemToContext                                                 = 0,
	EDistanceMode__DistItemGoalActorToContext                                        = 1,
	EDistanceMode__DistItemToItemGoalActor                                           = 2,
	EDistanceMode__EDistanceMode_MAX                                                 = 3
};

/// Enum /Script/FortniteAIServer.ECountAIAssignedToType
/// Size: 0x04
enum class ECountAIAssignedToType : uint8_t
{
	ECountAIAssignedToType__Goal                                                     = 0,
	ECountAIAssignedToType__Actor                                                    = 1,
	ECountAIAssignedToType__Assignment                                               = 2,
	ECountAIAssignedToType__ECountAIAssignedToType_MAX                               = 3
};

/// Enum /Script/FortniteAIServer.EFortAthenaAICanMoveState
/// Size: 0x07
enum class EFortAthenaAICanMoveState : uint8_t
{
	EFortAthenaAICanMoveState__None                                                  = 0,
	EFortAthenaAICanMoveState__Failed_AgentOffNavmesh                                = 1,
	EFortAthenaAICanMoveState__Failed_GoalOffNavmesh                                 = 2,
	EFortAthenaAICanMoveState__Failed_Falling                                        = 3,
	EFortAthenaAICanMoveState__Success                                               = 4,
	EFortAthenaAICanMoveState__Success_Partial                                       = 5,
	EFortAthenaAICanMoveState__EFortAthenaAICanMoveState_MAX                         = 6
};

/// Enum /Script/FortniteAIServer.EEvasiveManeuverType
/// Size: 0x06
enum class EEvasiveManeuverType : uint8_t
{
	EEvasiveManeuverType__Crouch                                                     = 0,
	EEvasiveManeuverType__Dodge                                                      = 1,
	EEvasiveManeuverType__Jump                                                       = 2,
	EEvasiveManeuverType__JetpackStrafe                                              = 3,
	EEvasiveManeuverType__None                                                       = 4,
	EEvasiveManeuverType__EEvasiveManeuverType_MAX                                   = 5
};

/// Enum /Script/FortniteAIServer.EFreeFallingMode
/// Size: 0x05
enum class EFreeFallingMode : uint8_t
{
	EFreeFallingMode__Idle                                                           = 0,
	EFreeFallingMode__Random                                                         = 1,
	EFreeFallingMode__TowardNearestAlly                                              = 2,
	EFreeFallingMode__PatrolPath                                                     = 3,
	EFreeFallingMode__EFreeFallingMode_MAX                                           = 4
};

/// Enum /Script/FortniteAIServer.EFocusingBehavior
/// Size: 0x11
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
	EFocusingBehavior__Invalid                                                       = 9,
	EFocusingBehavior__EFocusingBehavior_MAX                                         = 10
};

/// Enum /Script/FortniteAIServer.ECannotMeleeAttackReason
/// Size: 0x06
enum class ECannotMeleeAttackReason : uint8_t
{
	ECannotMeleeAttackReason__None                                                   = 0,
	ECannotMeleeAttackReason__CooldownActive                                         = 1,
	ECannotMeleeAttackReason__Other                                                  = 2,
	ECannotMeleeAttackReason__AttackDestinationNotValid                              = 3,
	ECannotMeleeAttackReason__TargetOutsideLeash                                     = 4,
	ECannotMeleeAttackReason__ECannotMeleeAttackReason_MAX                           = 5
};

/// Enum /Script/FortniteAIServer.EPathTestQueryType
/// Size: 0x04
enum class EPathTestQueryType : uint8_t
{
	EPathTestQueryType__NavmeshRaycast2D                                             = 0,
	EPathTestQueryType__HierarchicalQuery                                            = 1,
	EPathTestQueryType__RegularPathFinding                                           = 2,
	EPathTestQueryType__EPathTestQueryType_MAX                                       = 3
};

/// Enum /Script/FortniteAIServer.EBTSetBlackboardBoolExitActions
/// Size: 0x04
enum class EBTSetBlackboardBoolExitActions : uint8_t
{
	EBTSetBlackboardBoolExitActions__Invert                                          = 0,
	EBTSetBlackboardBoolExitActions__Revert                                          = 1,
	EBTSetBlackboardBoolExitActions__Keep                                            = 2,
	EBTSetBlackboardBoolExitActions__EBTSetBlackboardBoolExitActions_MAX             = 3
};

/// Enum /Script/FortniteAIServer.EGlideBehavior
/// Size: 0x03
enum class EGlideBehavior : uint8_t
{
	EGlideBehavior__GlideFocusOnDestination                                          = 0,
	EGlideBehavior__GlideSurveyArea                                                  = 1,
	EGlideBehavior__EGlideBehavior_MAX                                               = 2
};

/// Enum /Script/FortniteAIServer.EGlideMovementType
/// Size: 0x04
enum class EGlideMovementType : uint8_t
{
	EGlideMovementType__GlideMovementLinear                                          = 0,
	EGlideMovementType__GlideMovementSpiral                                          = 1,
	EGlideMovementType__GlideMovementSerpentine                                      = 2,
	EGlideMovementType__EGlideMovementType_MAX                                       = 3
};

/// Enum /Script/FortniteAIServer.EActionState
/// Size: 0x08
enum class EActionState : uint8_t
{
	EActionState__TryingToEquip                                                      = 0,
	EActionState__EquippingItem                                                      = 1,
	EActionState__UsingItem                                                          = 2,
	EActionState__WaitingItemTermination                                             = 3,
	EActionState__WaitBeforeEquippingNextItem                                        = 4,
	EActionState__ActionEndedWithNoError                                             = 5,
	EActionState__ActionEndedWithError                                               = 6,
	EActionState__EActionState_MAX                                                   = 7
};

/// Enum /Script/FortniteAIServer.EEncampmentRole
/// Size: 0x04
enum class EEncampmentRole : uint8_t
{
	EEncampmentRole__Guard                                                           = 0,
	EEncampmentRole__Build                                                           = 1,
	EEncampmentRole__Count                                                           = 2,
	EEncampmentRole__EEncampmentRole_MAX                                             = 3
};

/// Enum /Script/FortniteAIServer.EHasMatchingGameplayTagContainerTestType
/// Size: 0x03
enum class EHasMatchingGameplayTagContainerTestType : uint8_t
{
	EHasMatchingGameplayTagContainerTestType__Any                                    = 0,
	EHasMatchingGameplayTagContainerTestType__All                                    = 1,
	EHasMatchingGameplayTagContainerTestType__EHasMatchingGameplayTagContainerTestType_MAX = 2
};

/// Enum /Script/FortniteAIServer.EFortAthenaArithmeticOperation
/// Size: 0x05
enum class EFortAthenaArithmeticOperation : uint8_t
{
	EFortAthenaArithmeticOperation__Add                                              = 0,
	EFortAthenaArithmeticOperation__Subtract                                         = 1,
	EFortAthenaArithmeticOperation__Multiply                                         = 2,
	EFortAthenaArithmeticOperation__Divide                                           = 3,
	EFortAthenaArithmeticOperation__EFortAthenaArithmeticOperation_MAX               = 4
};

/// Enum /Script/FortniteAIServer.EFortAthenaPlayContextualAnimExecutionMethod
/// Size: 0x05
enum class EFortAthenaPlayContextualAnimExecutionMethod : uint8_t
{
	EFortAthenaPlayContextualAnimExecutionMethod__StartInteraction                   = 0,
	EFortAthenaPlayContextualAnimExecutionMethod__JoinInteraction                    = 1,
	EFortAthenaPlayContextualAnimExecutionMethod__TransitionAllActors                = 2,
	EFortAthenaPlayContextualAnimExecutionMethod__TransitionSingleActor              = 3,
	EFortAthenaPlayContextualAnimExecutionMethod__EFortAthenaPlayContextualAnimExecutionMethod_MAX = 4
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_ApproachNearbyPawns
/// Size: 0x0130 (0x0001B0 - 0x0002E0)
class UFortAthenaAIBotEvaluator_ApproachNearbyPawns : public UFortAthenaAIBotEvaluator_Movement
{ 
public:
	unsigned char                                      UnknownData00_3[0x20];                                      // 0x01B0   (0x0020)  MISSED
	FScalableFloat                                     MaxApproaches;                                              // 0x01D0   (0x0028)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x01F8   (0x0008)  MISSED
	FFortNearbyActorsPerceptionConfiguration           PerceptionConfiguration;                                    // 0x0200   (0x00D0)  
	FName                                              EnableKeyName;                                              // 0x02D0   (0x0004)  
	unsigned char                                      UnknownData02_6[0xC];                                       // 0x02D4   (0x000C)  MISSED
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_Harvest
/// Size: 0x0170 (0x0001B0 - 0x000320)
class UFortAthenaAIBotEvaluator_Harvest : public UFortAthenaAIBotEvaluator_Movement
{ 
public:
	unsigned char                                      UnknownData00_3[0x48];                                      // 0x01B0   (0x0048)  MISSED
	class UClass*                                      ProjectionNavigationQueryFilterClass;                       // 0x01F8   (0x0008)  
	class UClass*                                      ValidNavigationQueryFilterClassOverride;                    // 0x0200   (0x0008)  
	FScalableFloat                                     MaximumTimeToHelpFromLastPlayerDamage;                      // 0x0208   (0x0028)  
	FScalableFloat                                     KeepTargetTimeOnWeaponTrigger;                              // 0x0230   (0x0028)  
	FScalableFloat                                     AmountOfTimesPlayerBuiltStructuresNeedToBeDamaged;          // 0x0258   (0x0028)  
	FScalableFloat                                     TimeToTrackDamagedActors;                                   // 0x0280   (0x0028)  
	FScalableFloat                                     MaxDistanceFromActorForFallbackNoHarvestBehaviour;          // 0x02A8   (0x0028)  
	TArray<class UClass*>                              GEsToApplyOnFallbackBehaviorTrigger;                        // 0x02D0   (0x0010)  
	TArray<class UClass*>                              GEsToApplyOnCannotDamageBehaviorTrigger;                    // 0x02E0   (0x0010)  
	FName                                              HarvestTargetKeyName;                                       // 0x02F0   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x02F4   (0x0004)  MISSED
	FName                                              HarvestTargetHitPointKeyName;                               // 0x02F8   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x02FC   (0x0004)  MISSED
	FName                                              HarvestDestinationKeyName;                                  // 0x0300   (0x0004)  
	unsigned char                                      UnknownData03_5[0x4];                                       // 0x0304   (0x0004)  MISSED
	FName                                              FallbackBehaviorKeyName;                                    // 0x0308   (0x0004)  
	unsigned char                                      UnknownData04_5[0x4];                                       // 0x030C   (0x0004)  MISSED
	FName                                              CannotDamageKeyName;                                        // 0x0310   (0x0004)  
	unsigned char                                      UnknownData05_5[0x4];                                       // 0x0314   (0x0004)  MISSED
	FName                                              WeaponTriggerMeleeKeyName;                                  // 0x0318   (0x0004)  
	unsigned char                                      UnknownData06_6[0x4];                                       // 0x031C   (0x0004)  MISSED


	/// Functions
	// Function /Script/FortniteAIServer.FortAthenaAIBotEvaluator_Harvest.HandleUnconverted
	// void HandleUnconverted(class AFortPawn* UnconvertedPawn, EUnconvertReason UnconvertReason);                           // [0x988e068] Final|Native|Protected 
	// Function /Script/FortniteAIServer.FortAthenaAIBotEvaluator_Harvest.HandleConverted
	// void HandleConverted(class AFortPawn* InstigatorPawn, class AFortPawn* ConvertedPawn);                                // [0x988dfa8] Final|Native|Protected 
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_MoveAway
/// Size: 0x0108 (0x0001B0 - 0x0002B8)
class UFortAthenaAIBotEvaluator_MoveAway : public UFortAthenaAIBotEvaluator_Movement
{ 
public:
	unsigned char                                      UnknownData00_3[0x70];                                      // 0x01B0   (0x0070)  MISSED
	FScalableFloat                                     MaxSecondsToReactToBump;                                    // 0x0220   (0x0028)  
	FScalableFloat                                     MaxSecondsToReactToBox;                                     // 0x0248   (0x0028)  
	FScalableFloat                                     MinSecondsBetweenInstantReactions;                          // 0x0270   (0x0028)  
	class UEnvQuery*                                   FindAwayLocationFromPawnQueryTemplate;                      // 0x0298   (0x0008)  
	SDK_UNDEFINED(1,13950) /* TEnumAsByte<EEnvQueryRunMode> */ __um(FindAwayLocationFromPawnRunMode);              // 0x02A0   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x02A1   (0x0007)  MISSED
	class UEnvQuery*                                   FindAwayLocationFromBoxQueryTemplate;                       // 0x02A8   (0x0008)  
	SDK_UNDEFINED(1,13951) /* TEnumAsByte<EEnvQueryRunMode> */ __um(FindAwayLocationFromBoxRunMode);               // 0x02B0   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x02B1   (0x0007)  MISSED
};

/// Struct /Script/FortniteAIServer.BotEvaluatorCommandCooldown
/// Size: 0x0018 (0x000000 - 0x000018)
struct FBotEvaluatorCommandCooldown
{ 
	FFortAIActiveCommandSOUsageData                    Command;                                                    // 0x0000   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0010   (0x0008)  MISSED
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_SmartObjectCommand
/// Size: 0x00A0 (0x0001B0 - 0x000250)
class UFortAthenaAIBotEvaluator_SmartObjectCommand : public UFortAthenaAIBotEvaluator_Movement
{ 
public:
	class UFortAthenaAIRuntimeParameters_SmartObjectBase* SmartObjectRuntimeParameters;                            // 0x01B0   (0x0008)  
	class USmartObjectSubsystem*                       SmartObjectSubsystem;                                       // 0x01B8   (0x0008)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x01C0   (0x0008)  MISSED
	FFortAIActiveCommandSOUsageData                    RunningCommandData;                                         // 0x01C8   (0x0010)  
	FBotEvaluatorCommandCooldown                       CommandOnCooldown;                                          // 0x01D8   (0x0018)  
	FGameplayTag                                       EvaluationTag;                                              // 0x01F0   (0x0004)  
	bool                                               bEvaluateSOValidityAfterChosen;                             // 0x01F4   (0x0001)  
	bool                                               bEnableEntryLocationsSupport;                               // 0x01F5   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x01F6   (0x0002)  MISSED
	FScalableFloat                                     SingleCommandCooldown;                                      // 0x01F8   (0x0028)  
	class UClass*                                      OverridenFilterClassForEntryPoints;                         // 0x0220   (0x0008)  
	FName                                              SmartObjectExecutionStatusKeyName;                          // 0x0228   (0x0004)  
	FName                                              SmartObjectMovementStateKeyName;                            // 0x022C   (0x0004)  
	FName                                              SmartObjectDestinationKeyName;                              // 0x0230   (0x0004)  
	FName                                              SmartObjectDestinationRotationKeyName;                      // 0x0234   (0x0004)  
	FName                                              SmartObjectShouldMoveKeyName;                               // 0x0238   (0x0004)  
	FName                                              SmartObjectUrgencyKeyName;                                  // 0x023C   (0x0004)  
	unsigned char                                      UnknownData02_6[0x10];                                      // 0x0240   (0x0010)  MISSED
};

/// Struct /Script/FortniteAIServer.BotEvaluatorSmartObjectConvertedData
/// Size: 0x0008 (0x000000 - 0x000008)
struct FBotEvaluatorSmartObjectConvertedData
{ 
	class USmartObjectComponent*                       SmartObjectComponent;                                       // 0x0000   (0x0008)  
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_SmartObjectConverted
/// Size: 0x0058 (0x0001B0 - 0x000208)
class UFortAthenaAIBotEvaluator_SmartObjectConverted : public UFortAthenaAIBotEvaluator_Movement
{ 
public:
	class UFortAthenaAIRuntimeParameters_SmartObjectBase* SmartObjectRuntimeParameters;                            // 0x01B0   (0x0008)  
	class USmartObjectSubsystem*                       SmartObjectSubsystem;                                       // 0x01B8   (0x0008)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x01C0   (0x0008)  MISSED
	FBotEvaluatorSmartObjectConvertedData              RunningData;                                                // 0x01C8   (0x0008)  
	FGameplayTag                                       EvaluationTag;                                              // 0x01D0   (0x0004)  
	bool                                               bEvaluateSOValidityAfterChosen;                             // 0x01D4   (0x0001)  
	bool                                               bEnableEntryLocationsSupport;                               // 0x01D5   (0x0001)  
	bool                                               bIgnoreCooldowns;                                           // 0x01D6   (0x0001)  
	unsigned char                                      UnknownData01_5[0x1];                                       // 0x01D7   (0x0001)  MISSED
	class UClass*                                      OverridenFilterClassForEntryPoints;                         // 0x01D8   (0x0008)  
	FName                                              SmartObjectExecutionStatusKeyName;                          // 0x01E0   (0x0004)  
	FName                                              SmartObjectMovementStateKeyName;                            // 0x01E4   (0x0004)  
	FName                                              SmartObjectDestinationKeyName;                              // 0x01E8   (0x0004)  
	FName                                              SmartObjectDestinationRotationKeyName;                      // 0x01EC   (0x0004)  
	FName                                              SmartObjectShouldMoveKeyName;                               // 0x01F0   (0x0004)  
	FName                                              SmartObjectUrgencyKeyName;                                  // 0x01F4   (0x0004)  
	unsigned char                                      UnknownData02_6[0x10];                                      // 0x01F8   (0x0010)  MISSED
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_TargetContext
/// Size: 0x0020 (0x0000A8 - 0x0000C8)
class UFortAthenaAIBotEvaluator_TargetContext : public UFortAthenaAIBotEvaluator
{ 
public:
	FName                                              TargetContextReachableKeyName;                              // 0x00A8   (0x0004)  
	FName                                              TargetContextInsideLeashKeyName;                            // 0x00AC   (0x0004)  
	FName                                              TargetActorName;                                            // 0x00B0   (0x0004)  
	float                                              HorizontalProjectionForReachability;                        // 0x00B4   (0x0004)  
	float                                              VerticalProjectionForReachability;                          // 0x00B8   (0x0004)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x00BC   (0x000C)  MISSED
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_Attack
/// Size: 0x0018 (0x0001B0 - 0x0001C8)
class UFortAthenaAIBotEvaluator_Attack : public UFortAthenaAIBotEvaluator_Movement
{ 
public:
	unsigned char                                      UnknownData00_3[0x4];                                       // 0x01B0   (0x0004)  MISSED
	FName                                              WeaponKeyName;                                              // 0x01B4   (0x0004)  
	FName                                              MoveToDestinationKeyName;                                   // 0x01B8   (0x0004)  
	FName                                              TargetActorName;                                            // 0x01BC   (0x0004)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x01C0   (0x0008)  MISSED
};

/// Struct /Script/FortniteAIServer.PositioningEQS
/// Size: 0x0058 (0x000000 - 0x000058)
struct FPositioningEQS
{ 
	FGameplayTagQuery                                  ItemTagQuery;                                               // 0x0000   (0x0048)  
	class UEnvQuery*                                   QueryTemplate;                                              // 0x0048   (0x0008)  
	bool                                               bAllowStayingOnSamePosition;                                // 0x0050   (0x0001)  
	bool                                               bRequestNewPosititonOnProviderRecomputed;                   // 0x0051   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x0052   (0x0006)  MISSED
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_TokenPosition
/// Size: 0x0090 (0x0001C8 - 0x000258)
class UFortAthenaAIBotEvaluator_TokenPosition : public UFortAthenaAIBotEvaluator_Attack
{ 
public:
	unsigned char                                      UnknownData00_3[0x10];                                      // 0x01C8   (0x0010)  MISSED
	TArray<FPositioningEQS>                            EQSs;                                                       // 0x01D8   (0x0010)  
	float                                              TokenPositionCooldown;                                      // 0x01E8   (0x0004)  
	float                                              TokenPositionCooldownVariation;                             // 0x01EC   (0x0004)  
	unsigned char                                      UnknownData01_5[0x30];                                      // 0x01F0   (0x0030)  MISSED
	class UFortAICombatTokenConsumerComponent*         CachedTokenConsumerComponent;                               // 0x0220   (0x0008)  
	SDK_UNDEFINED(8,13952) /* TWeakObjectPtr<UFortAICombatTokenProviderComponent*> */ __um(CachedTokenProviderComponent); // 0x0228   (0x0008)  
	int32_t                                            RunningEQSRequestID;                                        // 0x0230   (0x0004)  
	unsigned char                                      UnknownData02_5[0x1C];                                      // 0x0234   (0x001C)  MISSED
	bool                                               bPositionRequested;                                         // 0x0250   (0x0001)  
	unsigned char                                      UnknownData03_6[0x7];                                       // 0x0251   (0x0007)  MISSED
};

/// Class /Script/FortniteAIServer.FortAthenaAIEvaluator_AbovePhysicsObject
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UFortAthenaAIEvaluator_AbovePhysicsObject : public UFortAthenaAIEvaluator
{ 
public:
};

/// Class /Script/FortniteAIServer.FortAthenaBTService_MovementStyle
/// Size: 0x0098 (0x000070 - 0x000108)
class UFortAthenaBTService_MovementStyle : public UBTService
{ 
public:
	SDK_UNDEFINED(1,13953) /* TEnumAsByte<EFortMovementStyle> */ __um(MovementStyle);                              // 0x0070   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0071   (0x0007)  MISSED
	FGameplayTagQuery                                  TagCondition;                                               // 0x0078   (0x0048)  
	FBlackboardKeySelector                             BlackboardCondition;                                        // 0x00C0   (0x0028)  
	unsigned char                                      UnknownData01_6[0x20];                                      // 0x00E8   (0x0020)  MISSED
};

/// Struct /Script/FortniteAIServer.EquippedItemTagAssociationData
/// Size: 0x0090 (0x000000 - 0x000090)
struct FEquippedItemTagAssociationData
{ 
	FGameplayTagQuery                                  ItemTagQuery;                                               // 0x0000   (0x0048)  
	FGameplayTagQuery                                  TokenSystemTagQuery;                                        // 0x0048   (0x0048)  
};

/// Class /Script/FortniteAIServer.FortAthenaBTService_TokenQuery
/// Size: 0x0068 (0x000070 - 0x0000D8)
class UFortAthenaBTService_TokenQuery : public UBTService
{ 
public:
	TArray<FEquippedItemTagAssociationData>            EquippedItemTagAssociationDatas;                            // 0x0070   (0x0010)  
	FGameplayTagQuery                                  DefaultTokenSystemTagQuery;                                 // 0x0080   (0x0048)  
	FName                                              WeaponKeyName;                                              // 0x00C8   (0x0004)  
	FName                                              TargetActorName;                                            // 0x00CC   (0x0004)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x00D0   (0x0008)  MISSED
};

/// Class /Script/FortniteAIServer.FortBTWorldConditionSchema
/// Size: 0x0010 (0x000038 - 0x000048)
class UFortBTWorldConditionSchema : public UWorldConditionSchema
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0038   (0x0010)  MISSED
};

/// Class /Script/FortniteAIServer.FortAthenaBTService_WorldCondition
/// Size: 0x0068 (0x000070 - 0x0000D8)
class UFortAthenaBTService_WorldCondition : public UBTService
{ 
public:
	FWorldConditionQueryDefinition                     Conditions;                                                 // 0x0070   (0x0018)  
	FName                                              ConditionsResultName;                                       // 0x0088   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x008C   (0x0004)  MISSED
	FWorldConditionQueryState                          QueryState;                                                 // 0x0090   (0x0030)  
	class AAIController*                               CachedOwnerController;                                      // 0x00C0   (0x0008)  
	class AActor*                                      CachedOwnerPawn;                                            // 0x00C8   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x00D0   (0x0008)  MISSED
};

/// Class /Script/FortniteAIServer.FortAthenaBTTask_Harvest
/// Size: 0x0050 (0x000070 - 0x0000C0)
class UFortAthenaBTTask_Harvest : public UBTTaskNode
{ 
public:
	FName                                              HarvestExecutionStatusKeyName;                              // 0x0070   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0074   (0x0004)  MISSED
	FName                                              HarvestTargetKeyName;                                       // 0x0078   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x007C   (0x0004)  MISSED
	FName                                              HarvestTargetHitPointKeyName;                               // 0x0080   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x0084   (0x0004)  MISSED
	FName                                              HarvestDestinationKeyName;                                  // 0x0088   (0x0004)  
	unsigned char                                      UnknownData03_5[0x4];                                       // 0x008C   (0x0004)  MISSED
	FName                                              WeaponTriggerMeleeKeyName;                                  // 0x0090   (0x0004)  
	unsigned char                                      UnknownData04_5[0x4];                                       // 0x0094   (0x0004)  MISSED
	FScalableFloat                                     MeleeSwingDelay;                                            // 0x0098   (0x0028)  
};

/// Class /Script/FortniteAIServer.FortAthenaBTTask_ReactToVerb
/// Size: 0x0010 (0x000070 - 0x000080)
class UFortAthenaBTTask_ReactToVerb : public UBTTaskNode
{ 
public:
	FName                                              ReactToVerbExecutionStatusKeyName;                          // 0x0070   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0074   (0x0004)  MISSED
	FName                                              GameplayEffectReactionKeyName;                              // 0x0078   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x007C   (0x0004)  MISSED
};

/// Class /Script/FortniteAIServer.FortAthenaBTTask_VehicleSwitchSeat
/// Size: 0x0008 (0x000070 - 0x000078)
class UFortAthenaBTTask_VehicleSwitchSeat : public UBTTaskNode
{ 
public:
	SDK_UNDEFINED(1,13954) /* TEnumAsByte<SwitchSeatType> */ __um(SwitchSeatType);                                 // 0x0070   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0071   (0x0007)  MISSED
};

/// Class /Script/FortniteAIServer.FortStateTreeConditionSchema
/// Size: 0x0018 (0x000038 - 0x000050)
class UFortStateTreeConditionSchema : public UWorldConditionSchema
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0038   (0x0018)  MISSED
};

/// Class /Script/FortniteAIServer.FortBTDecorator_AIBotVehicleSeatStatus
/// Size: 0x0008 (0x000068 - 0x000070)
class UFortBTDecorator_AIBotVehicleSeatStatus : public UBTDecorator
{ 
public:
	SDK_UNDEFINED(1,13955) /* TEnumAsByte<SeatStatusType> */ __um(SeatType);                                       // 0x0068   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0069   (0x0007)  MISSED
};

/// Struct /Script/FortniteAIServer.FortBTService_InjectionTagKey
/// Size: 0x0008 (0x000000 - 0x000008)
struct FFortBTService_InjectionTagKey
{ 
	FGameplayTag                                       InjectionTag;                                               // 0x0000   (0x0004)  
	FName                                              InjectionKeyName;                                           // 0x0004   (0x0004)  
};

/// Class /Script/FortniteAIServer.FortBTService_AIEvaluatorsInjector
/// Size: 0x0018 (0x000070 - 0x000088)
class UFortBTService_AIEvaluatorsInjector : public UBTService
{ 
public:
	TArray<FFortBTService_InjectionTagKey>             InjectionTagsKeys;                                          // 0x0070   (0x0010)  
	FName                                              InjectionItemKeyName;                                       // 0x0080   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0084   (0x0004)  MISSED
};

/// Class /Script/FortniteAIServer.FortBTService_ClearGoalAndAssignment
/// Size: 0x0000 (0x000070 - 0x000070)
class UFortBTService_ClearGoalAndAssignment : public UBTService
{ 
public:
};

/// Class /Script/FortniteAIServer.FortGameFeatureAction_AddInjectionSupportingBehavior
/// Size: 0x0010 (0x000038 - 0x000048)
class UFortGameFeatureAction_AddInjectionSupportingBehavior : public UFortGameInstanceGameFeatureAction
{ 
public:
	SDK_UNDEFINED(16,13956) /* TArray<TWeakObjectPtr<UBehaviorTree*>> */ __um(InjectionSupportingBehaviors);       // 0x0038   (0x0010)  
};

/// Class /Script/FortniteAIServer.FortGameFeatureAction_InjectAIBehavior
/// Size: 0x0010 (0x000038 - 0x000048)
class UFortGameFeatureAction_InjectAIBehavior : public UFortGameInstanceGameFeatureAction
{ 
public:
	TArray<FFortAISpawnerTagQueryInjectedBehavior>     InjectedBehaviors;                                          // 0x0038   (0x0010)  
};

/// Class /Script/FortniteAIServer.FortInjectedBehaviorsComponent
/// Size: 0x0050 (0x0000A0 - 0x0000F0)
class UFortInjectedBehaviorsComponent : public UFortGameStateComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x50];                                      // 0x00A0   (0x0050)  MISSED
};

/// Class /Script/FortniteAIServer.FortQueryContext_NearbyFactionMembers
/// Size: 0x0028 (0x000028 - 0x000050)
class UFortQueryContext_NearbyFactionMembers : public UEnvQueryContext
{ 
public:
	FScalableFloat                                     NearbyFactionMemberDistance;                                // 0x0028   (0x0028)  
};

/// Class /Script/FortniteAIServer.FortQueryContext_PlayspaceVolume
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortQueryContext_PlayspaceVolume : public UEnvQueryContext
{ 
public:
};

/// Class /Script/FortniteAIServer.FortQueryGenerator_GridInBox
/// Size: 0x00B8 (0x000088 - 0x000140)
class UFortQueryGenerator_GridInBox : public UEnvQueryGenerator_ProjectedPoints
{ 
public:
	FAIDataProviderFloatValue                          BoxWidth;                                                   // 0x0088   (0x0038)  
	FAIDataProviderFloatValue                          BoxLength;                                                  // 0x00C0   (0x0038)  
	FAIDataProviderFloatValue                          SpaceBetween;                                               // 0x00F8   (0x0038)  
	class UClass*                                      GenerateAround;                                             // 0x0130   (0x0008)  
	class UClass*                                      BoxExtentsContext;                                          // 0x0138   (0x0008)  
};

/// Class /Script/FortniteAIServer.FortQueryGenerator_GridInVolume
/// Size: 0x0040 (0x000088 - 0x0000C8)
class UFortQueryGenerator_GridInVolume : public UEnvQueryGenerator_ProjectedPoints
{ 
public:
	FAIDataProviderFloatValue                          SpaceBetween;                                               // 0x0088   (0x0038)  
	class UClass*                                      GenerateInVolume;                                           // 0x00C0   (0x0008)  
};

/// Class /Script/FortniteAIServer.FortQueryGenerator_PointsOutsideBox
/// Size: 0x0128 (0x000088 - 0x0001B0)
class UFortQueryGenerator_PointsOutsideBox : public UEnvQueryGenerator_ProjectedPoints
{ 
public:
	FAIDataProviderFloatValue                          SpaceBetween;                                               // 0x0088   (0x0038)  
	FAIDataProviderFloatValue                          NumberOfRingsAroundVolume;                                  // 0x00C0   (0x0038)  
	FAIDataProviderFloatValue                          ExtraXExtent;                                               // 0x00F8   (0x0038)  
	FAIDataProviderFloatValue                          ExtraYExtent;                                               // 0x0130   (0x0038)  
	FAIDataProviderFloatValue                          ExtraZExtent;                                               // 0x0168   (0x0038)  
	class UClass*                                      GenerateInBoxCenter;                                        // 0x01A0   (0x0008)  
	class UClass*                                      GenerateInBoxExtent;                                        // 0x01A8   (0x0008)  
};

/// Class /Script/FortniteAIServer.FortTokenGenerator_TokenHintPositions
/// Size: 0x0028 (0x000050 - 0x000078)
class UFortTokenGenerator_TokenHintPositions : public UEnvQueryGenerator
{ 
public:
	FScalableFloat                                     MaximumDistance;                                            // 0x0050   (0x0028)  
};

/// Class /Script/FortniteAIServer.FortWorldConditionTimeOfDayState
/// Size: 0x0038 (0x000028 - 0x000060)
class UFortWorldConditionTimeOfDayState : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x60];                                      // 0x0000   (0x0060)  MISSED


	/// Functions
	// Function /Script/FortniteAIServer.FortWorldConditionTimeOfDayState.HandleTimeOfDayPhaseChange
	// void HandleTimeOfDayPhaseChange(EFortDayPhase CurrentDayPhase, EFortDayPhase PreviousDayPhase, bool bAtCreation);     // [0x989bc78] Final|Native|Private 
};

/// Class /Script/FortniteAIServer.PFWNPCReactions_Container
/// Size: 0x0020 (0x000140 - 0x000160)
class UPFWNPCReactions_Container : public UPersistenceFrameworkContainer
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0140   (0x0020)  MISSED
};

/// Class /Script/FortniteAIServer.PFWNPCReactions_Module
/// Size: 0x0000 (0x0000E0 - 0x0000E0)
class UPFWNPCReactions_Module : public UPersistenceFrameworkModule
{ 
public:
};

/// Class /Script/FortniteAIServer.PFWNPCReactions_Trigger
/// Size: 0x0000 (0x0000C0 - 0x0000C0)
class UPFWNPCReactions_Trigger : public UPersistenceFrameworkSaveTrigger_Manual
{ 
public:
};

/// Class /Script/FortniteAIServer.PFWNPCReactions_FilteredListContainer
/// Size: 0x00C0 (0x000150 - 0x000210)
class UPFWNPCReactions_FilteredListContainer : public UPersistenceFrameworkFilteredListContainer
{ 
public:
	unsigned char                                      UnknownData00_1[0xC0];                                      // 0x0150   (0x00C0)  MISSED
};

/// Class /Script/FortniteAIServer.TokenProviderQueryGenerator
/// Size: 0x0048 (0x000050 - 0x000098)
class UTokenProviderQueryGenerator : public UEnvQueryGenerator
{ 
public:
	FGameplayTagQuery                                  GameplayTagQuery;                                           // 0x0050   (0x0048)  
};

/// Struct /Script/FortniteAIServer.GameFeatureFortAIEvaluatorEntry
/// Size: 0x0048 (0x000000 - 0x000048)
struct FGameFeatureFortAIEvaluatorEntry
{ 
	SDK_UNDEFINED(32,13957) /* TWeakObjectPtr<UBehaviorTree*> */ __um(TreeAsset);                                  // 0x0000   (0x0020)  
	FGameplayTag                                       InjectionTag;                                               // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0024   (0x0004)  MISSED
	SDK_UNDEFINED(32,13958) /* TWeakObjectPtr<UClass*> */ __um(AIEvaluatorClass);                                  // 0x0028   (0x0020)  
};

/// Class /Script/FortniteAIServer.FortGameFeatureAction_InjectAIEvaluators
/// Size: 0x0010 (0x000028 - 0x000038)
class UFortGameFeatureAction_InjectAIEvaluators : public UGameFeatureAction
{ 
public:
	TArray<FGameFeatureFortAIEvaluatorEntry>           AIEvaluatorList;                                            // 0x0028   (0x0010)  
};

/// Class /Script/FortniteAIServer.FortEnvQueryGenerator_ProjectedPoints
/// Size: 0x0008 (0x000088 - 0x000090)
class UFortEnvQueryGenerator_ProjectedPoints : public UEnvQueryGenerator_ProjectedPoints
{ 
public:
	FName                                              OverridenAgentNameForNavmesh;                               // 0x0088   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x008C   (0x0004)  MISSED
};

/// Class /Script/FortniteAIServer.FortEnvQueryGenerator_SimpleGrid
/// Size: 0x00B0 (0x000090 - 0x000140)
class UFortEnvQueryGenerator_SimpleGrid : public UFortEnvQueryGenerator_ProjectedPoints
{ 
public:
	FAIDataProviderFloatValue                          GridSize;                                                   // 0x0090   (0x0038)  
	FAIDataProviderFloatValue                          SpaceBetween;                                               // 0x00C8   (0x0038)  
	FAIDataProviderFloatValue                          RandomDisplacementRatio;                                    // 0x0100   (0x0038)  
	class UClass*                                      GenerateAround;                                             // 0x0138   (0x0008)  
};

/// Class /Script/FortniteAIServer.FortBTService_ContextOverride
/// Size: 0x0000 (0x000070 - 0x000070)
class UFortBTService_ContextOverride : public UBTService
{ 
public:
};

/// Class /Script/FortniteAIServer.FortBTContext_MoveUrgency
/// Size: 0x0020 (0x000070 - 0x000090)
class UFortBTContext_MoveUrgency : public UFortBTService_ContextOverride
{ 
public:
	FFortBehaviorValue_Enum                            MoveUrgencyValue;                                           // 0x0070   (0x0018)  
	SDK_UNDEFINED(1,13959) /* TEnumAsByte<EFortMovementUrgency> */ __um(MoveUrgency);                              // 0x0088   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0089   (0x0007)  MISSED
};

/// Class /Script/FortniteAIServer.FortBTContext_SkipNotPerceivedGoals
/// Size: 0x0000 (0x000070 - 0x000070)
class UFortBTContext_SkipNotPerceivedGoals : public UFortBTService_ContextOverride
{ 
public:
};

/// Class /Script/FortniteAIServer.FortBTContext_SuppressGoalUpdate
/// Size: 0x0008 (0x000070 - 0x000078)
class UFortBTContext_SuppressGoalUpdate : public UFortBTService_ContextOverride
{ 
public:
	bool                                               bUnregisterFromGoalManager;                                 // 0x0070   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0071   (0x0007)  MISSED
};

/// Class /Script/FortniteAIServer.FortBTDecorator_Affiliation
/// Size: 0x0058 (0x000068 - 0x0000C0)
class UFortBTDecorator_Affiliation : public UBTDecorator
{ 
public:
	FBlackboardKeySelector                             FirstActorKey;                                              // 0x0068   (0x0028)  
	FBlackboardKeySelector                             SecondActorKey;                                             // 0x0090   (0x0028)  
	uint32_t                                           AcceptedAffiliations;                                       // 0x00B8   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00BC   (0x0004)  MISSED
};

/// Class /Script/FortniteAIServer.FortBTDecorator_CanBeConsideredAirborne
/// Size: 0x0000 (0x000090 - 0x000090)
class UFortBTDecorator_CanBeConsideredAirborne : public UBTDecorator_BlackboardBase
{ 
public:
};

/// Class /Script/FortniteAIServer.FortBTDecorator_DistanceBetween
/// Size: 0x0068 (0x000068 - 0x0000D0)
class UFortBTDecorator_DistanceBetween : public UBTDecorator
{ 
public:
	SDK_UNDEFINED(1,13960) /* TEnumAsByte<EArithmeticKeyOperation> */ __um(Operator);                              // 0x0068   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0069   (0x0007)  MISSED
	FBlackboardKeySelector                             BlackboardKeyA;                                             // 0x0070   (0x0028)  
	FBlackboardKeySelector                             BlackboardKeyB;                                             // 0x0098   (0x0028)  
	float                                              SpecifiedDistance;                                          // 0x00C0   (0x0004)  
	bool                                               bUseSelf : 1;                                               // 0x00C4:0 (0x0001)  
	bool                                               bCalculateAs2D : 1;                                         // 0x00C4:1 (0x0001)  
	unsigned char                                      UnknownData01_4[0x3];                                       // 0x00C5   (0x0003)  MISSED
	float                                              DistanceCalculationUpdateRate;                              // 0x00C8   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x00CC   (0x0004)  MISSED
};

/// Class /Script/FortniteAIServer.FortBTDecorator_GameplayAbility_CanActivate
/// Size: 0x0000 (0x000168 - 0x000168)
class UFortBTDecorator_GameplayAbility_CanActivate : public UFortBTDecorator_QueryGameplayAbility
{ 
public:
};

/// Class /Script/FortniteAIServer.FortBTDecorator_GameplayAbility_CanHitTarget
/// Size: 0x0010 (0x000168 - 0x000178)
class UFortBTDecorator_GameplayAbility_CanHitTarget : public UFortBTDecorator_QueryGameplayAbility
{ 
public:
	FFortBehaviorValue_Bool                            UseIdealYawRotationToTargetValue;                           // 0x0168   (0x000C)  
	bool                                               UseIdealYawRotationToTarget : 1;                            // 0x0174:0 (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0175   (0x0003)  MISSED
};

/// Class /Script/FortniteAIServer.FortBTDecorator_GameplayAbility_CompareDistance
/// Size: 0x0010 (0x000168 - 0x000178)
class UFortBTDecorator_GameplayAbility_CompareDistance : public UFortBTDecorator_QueryGameplayAbility
{ 
public:
	TArray<FDistanceToTargetComparison>                DistanceComparisons;                                        // 0x0168   (0x0010)  
};

/// Class /Script/FortniteAIServer.FortBTDecorator_GameplayAbility_DoesTargetHaveProhibitedTags
/// Size: 0x0000 (0x000168 - 0x000168)
class UFortBTDecorator_GameplayAbility_DoesTargetHaveProhibitedTags : public UFortBTDecorator_QueryGameplayAbility
{ 
public:
};

/// Class /Script/FortniteAIServer.FortBTDecorator_GameplayAbility_HasGameplayAbility
/// Size: 0x00C8 (0x000068 - 0x000130)
class UFortBTDecorator_GameplayAbility_HasGameplayAbility : public UBTDecorator
{ 
public:
	FFortBehaviorValue_Object                          AbilityOwningActor;                                         // 0x0068   (0x0018)  
	FFortBehaviorValue_GameplayTagContainer            GameplayAbilityTagContainer;                                // 0x0080   (0x0028)  
	FFortBehaviorValue_Bool                            OnlyTestActiveAbility;                                      // 0x00A8   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00B4   (0x0004)  MISSED
	FBlackboardKeySelector                             AbilityOwningActorKey;                                      // 0x00B8   (0x0028)  
	FGameplayTagContainer                              GameplayAbilityTag;                                         // 0x00E0   (0x0020)  
	FBlackboardKeySelector                             GameplayAbilityTagBlackboardKey;                            // 0x0100   (0x0028)  
	bool                                               bOnlyTestActiveAbility;                                     // 0x0128   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0129   (0x0007)  MISSED
};

/// Class /Script/FortniteAIServer.FortBTDecorator_GameplayAbility_HasNearbyPawns
/// Size: 0x0030 (0x000168 - 0x000198)
class UFortBTDecorator_GameplayAbility_HasNearbyPawns : public UFortBTDecorator_QueryGameplayAbility
{ 
public:
	FFortBehaviorValue_Float                           NearbyPawnDistanceValue;                                    // 0x0168   (0x000C)  
	FFortBehaviorValue_Bool                            FilterAIPawns;                                              // 0x0174   (0x000C)  
	FFortBehaviorValue_Bool                            FilterPlayerPawns;                                          // 0x0180   (0x000C)  
	float                                              NearbyPawnDistance;                                         // 0x018C   (0x0004)  
	bool                                               bFilterAIPawns;                                             // 0x0190   (0x0001)  
	bool                                               bFilterPlayerPawns;                                         // 0x0191   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x0192   (0x0006)  MISSED
};

/// Class /Script/FortniteAIServer.FortBTDecorator_GameplayAbility_IsClosestPawnInRange
/// Size: 0x0030 (0x000168 - 0x000198)
class UFortBTDecorator_GameplayAbility_IsClosestPawnInRange : public UFortBTDecorator_QueryGameplayAbility
{ 
public:
	FFortBehaviorValue_Float                           NearbyPawnDistanceValue;                                    // 0x0168   (0x000C)  
	FFortBehaviorValue_Bool                            FilterAIPawns;                                              // 0x0174   (0x000C)  
	FFortBehaviorValue_Bool                            FilterPlayerPawns;                                          // 0x0180   (0x000C)  
	float                                              NearbyPawnDistance;                                         // 0x018C   (0x0004)  
	bool                                               bFilterAIPawns;                                             // 0x0190   (0x0001)  
	bool                                               bFilterPlayerPawns;                                         // 0x0191   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x0192   (0x0006)  MISSED
};

/// Class /Script/FortniteAIServer.FortBTDecorator_GameplayAbility_IsOnCooldown
/// Size: 0x0000 (0x000168 - 0x000168)
class UFortBTDecorator_GameplayAbility_IsOnCooldown : public UFortBTDecorator_QueryGameplayAbility
{ 
public:
};

/// Class /Script/FortniteAIServer.FortBTDecorator_GameplayAbility_IsRotatedToAttackTarget
/// Size: 0x0000 (0x000168 - 0x000168)
class UFortBTDecorator_GameplayAbility_IsRotatedToAttackTarget : public UFortBTDecorator_QueryGameplayAbility
{ 
public:
};

/// Class /Script/FortniteAIServer.FortBTDecorator_GameplayAbility_IsWithinMaxTargetSelectionRange
/// Size: 0x0000 (0x000168 - 0x000168)
class UFortBTDecorator_GameplayAbility_IsWithinMaxTargetSelectionRange : public UFortBTDecorator_QueryGameplayAbility
{ 
public:
};

/// Class /Script/FortniteAIServer.FortBTDecorator_IsGoalPawn
/// Size: 0x0000 (0x000090 - 0x000090)
class UFortBTDecorator_IsGoalPawn : public UBTDecorator_BlackboardBase
{ 
public:
};

/// Class /Script/FortniteAIServer.FortBTDecorator_IsInBotEndGame
/// Size: 0x0000 (0x000068 - 0x000068)
class UFortBTDecorator_IsInBotEndGame : public UBTDecorator
{ 
public:
};

/// Class /Script/FortniteAIServer.FortBTDecorator_IsMoving
/// Size: 0x0070 (0x000168 - 0x0001D8)
class UFortBTDecorator_IsMoving : public UFortBTDecorator_QueryGameplayAbility
{ 
public:
	FFortBehaviorValue_Float                           UpdateIntervalValue;                                        // 0x0168   (0x000C)  
	FFortBehaviorValue_Float                           MinTimeValue;                                               // 0x0174   (0x000C)  
	bool                                               bUseMinDist;                                                // 0x0180   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0181   (0x0003)  MISSED
	FFortBehaviorValue_Float                           UseMinDistToTargetTime;                                     // 0x0184   (0x000C)  
	FDistanceToTargetComparison                        MinDistanceComparison;                                      // 0x0190   (0x0038)  
	float                                              UpdateInterval;                                             // 0x01C8   (0x0004)  
	float                                              MinTime;                                                    // 0x01CC   (0x0004)  
	float                                              MinDistMinTime;                                             // 0x01D0   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x01D4   (0x0004)  MISSED
};

/// Class /Script/FortniteAIServer.FortBTDecorator_IsTakerAirborne
/// Size: 0x0000 (0x000068 - 0x000068)
class UFortBTDecorator_IsTakerAirborne : public UBTDecorator
{ 
public:
};

/// Class /Script/FortniteAIServer.FortBTDecorator_WeaponStatus
/// Size: 0x0030 (0x000068 - 0x000098)
class UFortBTDecorator_WeaponStatus : public UBTDecorator
{ 
public:
	float                                              WeaponStatusUpdateRate;                                     // 0x0068   (0x0004)  
	bool                                               bTestIfCurrentWeaponIsValid : 1;                            // 0x006C:0 (0x0001)  
	bool                                               bCurrentWeaponShouldBeValid : 1;                            // 0x006C:1 (0x0001)  
	bool                                               bTestAllowedCurrentWeaponTags : 1;                          // 0x006C:2 (0x0001)  
	unsigned char                                      UnknownData00_4[0x3];                                       // 0x006D   (0x0003)  MISSED
	FGameplayTagContainer                              AllowedCurrentWeaponTags;                                   // 0x0070   (0x0020)  
	bool                                               bTestIfCurrentWeaponIsReloading : 1;                        // 0x0090:0 (0x0001)  
	bool                                               bCurrentWeaponShouldBeReloading : 1;                        // 0x0090:1 (0x0001)  
	bool                                               bTestIfCurrentWeaponHasAmmoInMagazine : 1;                  // 0x0090:2 (0x0001)  
	bool                                               bCurrentWeaponShouldHaveAmmoInMagazine : 1;                 // 0x0090:3 (0x0001)  
	bool                                               bTestIfCurrentWeaponHasExtraAmmo : 1;                       // 0x0090:4 (0x0001)  
	bool                                               bCurrentWeaponShouldHaveExtraAmmo : 1;                      // 0x0090:5 (0x0001)  
	bool                                               bAllInterestedTestsMustPass : 1;                            // 0x0090:6 (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0091   (0x0007)  MISSED
};

/// Class /Script/FortniteAIServer.FortBTService_ActivateAbility
/// Size: 0x0060 (0x000070 - 0x0000D0)
class UFortBTService_ActivateAbility : public UBTService
{ 
public:
	FGameplayTagContainer                              AbilityTags;                                                // 0x0070   (0x0020)  
	bool                                               bRequireCanHitTargetWithAbility;                            // 0x0090   (0x0001)  
	bool                                               bPawnTargetsOnly;                                           // 0x0091   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x0092   (0x0006)  MISSED
	FGameplayTagContainer                              ProhibitedTargetTags;                                       // 0x0098   (0x0020)  
	bool                                               bCanActivateWhenMoving;                                     // 0x00B8   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x00B9   (0x0007)  MISSED
	TArray<FDistanceToTargetComparison>                DistanceChecks;                                             // 0x00C0   (0x0010)  
};

/// Class /Script/FortniteAIServer.FortBTService_UpdateBotMissionBuilding
/// Size: 0x0050 (0x000070 - 0x0000C0)
class UFortBTService_UpdateBotMissionBuilding : public UBTService
{ 
public:
	FBlackboardKeySelector                             InterestLocationKey;                                        // 0x0070   (0x0028)  
	FBlackboardKeySelector                             BuildOrderKey;                                              // 0x0098   (0x0028)  
};

/// Class /Script/FortniteAIServer.FortBTService_UpdateBotMissionGoal
/// Size: 0x0008 (0x000098 - 0x0000A0)
class UFortBTService_UpdateBotMissionGoal : public UBTService_BlackboardBase
{ 
public:
	bool                                               bRequireInteraction : 1;                                    // 0x0098:0 (0x0001)  
	bool                                               bRequireInteractionOrLocator : 1;                           // 0x0098:1 (0x0001)  
	bool                                               bRequireEncounter : 1;                                      // 0x0098:2 (0x0001)  
	bool                                               bPickClosest : 1;                                           // 0x0098:3 (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0099   (0x0007)  MISSED
};

/// Class /Script/FortniteAIServer.FortBTTask_BotMissionBuild
/// Size: 0x0000 (0x000098 - 0x000098)
class UFortBTTask_BotMissionBuild : public UBTTask_BlackboardBase
{ 
public:
};

/// Class /Script/FortniteAIServer.FortBTTask_BotMissionInteract
/// Size: 0x0000 (0x000098 - 0x000098)
class UFortBTTask_BotMissionInteract : public UBTTask_BlackboardBase
{ 
public:
};

/// Class /Script/FortniteAIServer.FortBTTask_ExecuteGameplayAbility
/// Size: 0x0070 (0x000078 - 0x0000E8)
class UFortBTTask_ExecuteGameplayAbility : public UBTTask_GameplayTaskBase
{ 
public:
	FFortBehaviorValue_GameplayTagContainer            GameplayAbilityTagContainer;                                // 0x0078   (0x0028)  
	FGameplayTagContainer                              GameplayAbilityTag;                                         // 0x00A0   (0x0020)  
	FBlackboardKeySelector                             GameplayAbilityTagBlackboardKey;                            // 0x00C0   (0x0028)  
};

/// Class /Script/FortniteAIServer.FortBTTask_GameMoveTo
/// Size: 0x0070 (0x0000B0 - 0x000120)
class UFortBTTask_GameMoveTo : public UBTTask_MoveTo
{ 
public:
	FBlackboardKeySelector                             FocalPointWhileMoving;                                      // 0x00B0   (0x0028)  
	SDK_UNDEFINED(1,13961) /* TEnumAsByte<EPathObstacleAction> */ __um(PathObstacleAction);                        // 0x00D8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x00D9   (0x0007)  MISSED
	class UClass*                                      PushBumpedPawnClass;                                        // 0x00E0   (0x0008)  
	FGameplayTag                                       NavFilterTag;                                               // 0x00E8   (0x0004)  
	bool                                               bDetectUnexpectedPathBlockingObstacles : 1;                 // 0x00EC:0 (0x0001)  
	bool                                               bEnableSlowdownAtGoal : 1;                                  // 0x00EC:1 (0x0001)  
	bool                                               bStopAtGoal : 1;                                            // 0x00EC:2 (0x0001)  
	bool                                               bFinishMoveOnOverlap : 1;                                   // 0x00EC:3 (0x0001)  
	unsigned char                                      UnknownData01_4[0x3];                                       // 0x00ED   (0x0003)  MISSED
	FBlackboardKeySelector                             AcceptableRadiusKey;                                        // 0x00F0   (0x0028)  
	bool                                               bDeimosFlavor : 1;                                          // 0x0118:0 (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x0119   (0x0007)  MISSED
};

/// Class /Script/FortniteAIServer.FortBTTask_GameMoveDirectlyToward
/// Size: 0x0000 (0x000120 - 0x000120)
class UFortBTTask_GameMoveDirectlyToward : public UFortBTTask_GameMoveTo
{ 
public:
};

/// Class /Script/FortniteAIServer.FortBTTask_RequestUndermining
/// Size: 0x0000 (0x000070 - 0x000070)
class UFortBTTask_RequestUndermining : public UBTTaskNode
{ 
public:
};

/// Class /Script/FortniteAIServer.FortBTTask_RotateToFaceBBEntryWithTags
/// Size: 0x0020 (0x0000A0 - 0x0000C0)
class UFortBTTask_RotateToFaceBBEntryWithTags : public UBTTask_RotateToFaceBBEntry
{ 
public:
	FGameplayTagContainer                              TagsToApply;                                                // 0x00A0   (0x0020)  
};

/// Class /Script/FortniteAIServer.FortBTTask_SetFrustrationDiscouragement
/// Size: 0x0008 (0x000070 - 0x000078)
class UFortBTTask_SetFrustrationDiscouragement : public UBTTaskNode
{ 
public:
	float                                              DiscouragementDuration;                                     // 0x0070   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0074   (0x0004)  MISSED
};

/// Class /Script/FortniteAIServer.FortBTTask_Sleep
/// Size: 0x0000 (0x000070 - 0x000070)
class UFortBTTask_Sleep : public UBTTaskNode
{ 
public:
};

/// Class /Script/FortniteAIServer.FortBTTask_TakerMoveToNavmesh
/// Size: 0x0000 (0x0000B0 - 0x0000B0)
class UFortBTTask_TakerMoveToNavmesh : public UBTTask_MoveTo
{ 
public:
};

/// Class /Script/FortniteAIServer.FortEQSPrevisActor
/// Size: 0x0038 (0x000290 - 0x0002C8)
class AFortEQSPrevisActor : public AActor
{ 
public:
	unsigned char                                      UnknownData00_3[0x10];                                      // 0x0290   (0x0010)  MISSED
	class USceneComponent*                             SceneRoot;                                                  // 0x02A0   (0x0008)  
	FGameplayTagContainer                              GameplayTags;                                               // 0x02A8   (0x0020)  


	/// Functions
	// Function /Script/FortniteAIServer.FortEQSPrevisActor.SetQueryTemplate
	// void SetQueryTemplate(class UEnvQuery* InPrevisQueryTemplate);                                                        // [0x6414600] Final|Native|Public|BlueprintCallable 
	// Function /Script/FortniteAIServer.FortEQSPrevisActor.PrepForPrevis
	// void PrepForPrevis();                                                                                                 // [0x18a39e4] Event|Public|BlueprintEvent 
};

/// Class /Script/FortniteAIServer.FortQueryContext_AIPawnSpawnLocation
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortQueryContext_AIPawnSpawnLocation : public UEnvQueryContext
{ 
public:
};

/// Class /Script/FortniteAIServer.FortQueryContext_AllBots
/// Size: 0x0050 (0x000028 - 0x000078)
class UFortQueryContext_AllBots : public UEnvQueryContext
{ 
public:
	bool                                               bIncludeOnlyAthenaGameParticipantBots;                      // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0029   (0x0007)  MISSED
	FGameplayTagQuery                                  BotTagQuery;                                                // 0x0030   (0x0048)  
};

/// Class /Script/FortniteAIServer.FortQueryContext_AllEnemies
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortQueryContext_AllEnemies : public UEnvQueryContext
{ 
public:
};

/// Class /Script/FortniteAIServer.FortQueryContext_AllGoals
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortQueryContext_AllGoals : public UEnvQueryContext
{ 
public:
};

/// Class /Script/FortniteAIServer.FortQueryContext_AllPlayers
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortQueryContext_AllPlayers : public UEnvQueryContext
{ 
public:
};

/// Class /Script/FortniteAIServer.FortQueryContext_AllPOIVolumes
/// Size: 0x0048 (0x000028 - 0x000070)
class UFortQueryContext_AllPOIVolumes : public UEnvQueryContext
{ 
public:
	FGameplayTagQuery                                  VolumeLocationTagQuery;                                     // 0x0028   (0x0048)  
};

/// Class /Script/FortniteAIServer.FortQueryContext_AthenaCurrentSafeZoneCenter
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortQueryContext_AthenaCurrentSafeZoneCenter : public UEnvQueryContext
{ 
public:
};

/// Class /Script/FortniteAIServer.FortQueryContext_AthenaCurrentSafeZoneIndicatorCenter
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortQueryContext_AthenaCurrentSafeZoneIndicatorCenter : public UEnvQueryContext
{ 
public:
};

/// Class /Script/FortniteAIServer.FortQueryContext_AthenaSafeZonePredictedLocation
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortQueryContext_AthenaSafeZonePredictedLocation : public UEnvQueryContext
{ 
public:
};

/// Class /Script/FortniteAIServer.FortQueryContext_BlackboardKeyLeader
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortQueryContext_BlackboardKeyLeader : public UEnvQueryContext
{ 
public:
};

/// Class /Script/FortniteAIServer.FortQueryContext_BuildingRifts
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortQueryContext_BuildingRifts : public UEnvQueryContext
{ 
public:
};

/// Class /Script/FortniteAIServer.FortQueryContext_EncounterFallbackTarget
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortQueryContext_EncounterFallbackTarget : public UEnvQueryContext
{ 
public:
};

/// Class /Script/FortniteAIServer.FortQueryContext_EncounterGoalsCenterLocation
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortQueryContext_EncounterGoalsCenterLocation : public UEnvQueryContext
{ 
public:
};

/// Class /Script/FortniteAIServer.FortQueryContext_EncounterGoalsOnGround
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortQueryContext_EncounterGoalsOnGround : public UEnvQueryContext
{ 
public:
};

/// Class /Script/FortniteAIServer.FortQueryContext_EncounterPrimaryAssignmentGoals
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortQueryContext_EncounterPrimaryAssignmentGoals : public UEnvQueryContext
{ 
public:
};

/// Class /Script/FortniteAIServer.FortQueryContext_EncounterProvidedQueryLocations
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortQueryContext_EncounterProvidedQueryLocations : public UEnvQueryContext
{ 
public:
};

/// Class /Script/FortniteAIServer.FortQueryContext_EncounterQueryActor
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortQueryContext_EncounterQueryActor : public UEnvQueryContext
{ 
public:
};

/// Class /Script/FortniteAIServer.FortQueryContext_EncounterRandomDirection
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortQueryContext_EncounterRandomDirection : public UEnvQueryContext
{ 
public:
};

/// Class /Script/FortniteAIServer.FortQueryContext_EncounterTargetObjective
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortQueryContext_EncounterTargetObjective : public UEnvQueryContext
{ 
public:
};

/// Class /Script/FortniteAIServer.FortQueryContext_Goal
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortQueryContext_Goal : public UEnvQueryContext
{ 
public:
};

/// Class /Script/FortniteAIServer.FortQueryContext_GoalProviderRootAssignmentGoals
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortQueryContext_GoalProviderRootAssignmentGoals : public UEnvQueryContext
{ 
public:
};

/// Class /Script/FortniteAIServer.FortQueryContext_Goal_SpawnLocation
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortQueryContext_Goal_SpawnLocation : public UEnvQueryContext
{ 
public:
};

/// Class /Script/FortniteAIServer.FortQueryContext_NearbyAIPawns
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortQueryContext_NearbyAIPawns : public UEnvQueryContext
{ 
public:
};

/// Class /Script/FortniteAIServer.FortQueryContext_NearbyAIPawnsMoveDestinations
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortQueryContext_NearbyAIPawnsMoveDestinations : public UEnvQueryContext
{ 
public:
};

/// Class /Script/FortniteAIServer.FortQueryContext_NearbyFriendlyAIPawns
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortQueryContext_NearbyFriendlyAIPawns : public UEnvQueryContext
{ 
public:
};

/// Class /Script/FortniteAIServer.FortQueryContext_NearbyFriendlyAIPawnsAndPlayerPawns
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortQueryContext_NearbyFriendlyAIPawnsAndPlayerPawns : public UEnvQueryContext
{ 
public:
};

/// Class /Script/FortniteAIServer.FortQueryContext_NearbyFriends
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortQueryContext_NearbyFriends : public UEnvQueryContext
{ 
public:
};

/// Class /Script/FortniteAIServer.FortQueryContext_PlayerSpawnPad
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortQueryContext_PlayerSpawnPad : public UEnvQueryContext
{ 
public:
};

/// Class /Script/FortniteAIServer.FortQueryContext_RandomDirectionXY
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortQueryContext_RandomDirectionXY : public UEnvQueryContext
{ 
public:
};

/// Class /Script/FortniteAIServer.FortQueryContext_SpawnSpotActorLocationOrAIPawnSpawnLocation
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortQueryContext_SpawnSpotActorLocationOrAIPawnSpawnLocation : public UEnvQueryContext
{ 
public:
};

/// Class /Script/FortniteAIServer.FortQueryContext_StWStormShield
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortQueryContext_StWStormShield : public UEnvQueryContext
{ 
public:
};

/// Class /Script/FortniteAIServer.FortQueryContext_TwoPointSolverPointA
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortQueryContext_TwoPointSolverPointA : public UEnvQueryContext
{ 
public:
};

/// Class /Script/FortniteAIServer.FortQueryContext_TwoPointSolverRotationA
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortQueryContext_TwoPointSolverRotationA : public UEnvQueryContext
{ 
public:
};

/// Struct /Script/FortniteAIServer.FortPointOnCurveRange
/// Size: 0x0008 (0x000000 - 0x000008)
struct FFortPointOnCurveRange
{ 
	float                                              MinPercentage;                                              // 0x0000   (0x0004)  
	float                                              MaxPercentage;                                              // 0x0004   (0x0004)  
};

/// Struct /Script/FortniteAIServer.FortPointsOnCurve
/// Size: 0x0030 (0x000000 - 0x000030)
struct FFortPointsOnCurve
{ 
	SDK_UNDEFINED(32,13962) /* TWeakObjectPtr<UCurveFloat*> */ __um(Curve);                                        // 0x0000   (0x0020)  
	TArray<FFortPointOnCurveRange>                     RangesForPointsOnCurve;                                     // 0x0020   (0x0010)  
};

/// Class /Script/FortniteAIServer.FortQueryData_CurvesAroundLine
/// Size: 0x0060 (0x000030 - 0x000090)
class UFortQueryData_CurvesAroundLine : public UDataAsset
{ 
public:
	FFortPointsOnCurve                                 PointsOnSideA;                                              // 0x0030   (0x0030)  
	FFortPointsOnCurve                                 PointsOnSideB;                                              // 0x0060   (0x0030)  
};

/// Class /Script/FortniteAIServer.FortQueryGenerator_ActorsAround
/// Size: 0x0000 (0x0000D0 - 0x0000D0)
class UFortQueryGenerator_ActorsAround : public UEnvQueryGenerator_ActorsOfClass
{ 
public:
};

/// Class /Script/FortniteAIServer.FortQueryGenerator_Allies
/// Size: 0x0000 (0x000050 - 0x000050)
class UFortQueryGenerator_Allies : public UEnvQueryGenerator
{ 
public:
};

/// Class /Script/FortniteAIServer.FortQueryGenerator_AssignmentGoal
/// Size: 0x0000 (0x000050 - 0x000050)
class UFortQueryGenerator_AssignmentGoal : public UEnvQueryGenerator
{ 
public:
};

/// Class /Script/FortniteAIServer.FortQueryGenerator_BuildingRifts
/// Size: 0x0000 (0x000050 - 0x000050)
class UFortQueryGenerator_BuildingRifts : public UEnvQueryGenerator
{ 
public:
};

/// Class /Script/FortniteAIServer.FortQueryGenerator_Buildings
/// Size: 0x01D8 (0x000050 - 0x000228)
class UFortQueryGenerator_Buildings : public UEnvQueryGenerator
{ 
public:
	FFortAIAssignmentIdentifier                        AssignmentIdentifier;                                       // 0x0050   (0x0030)  
	class UFortAIAssignmentSettings*                   AssignmentSettings;                                         // 0x0080   (0x0008)  
	class UClass*                                      BuildingGridVolumeCenter;                                   // 0x0088   (0x0008)  
	FAIDataProviderIntValue                            HorizontalBuildingCellRadius;                               // 0x0090   (0x0038)  
	FAIDataProviderIntValue                            BuildingCellsAbove;                                         // 0x00C8   (0x0038)  
	FAIDataProviderIntValue                            BuildingCellsBelow;                                         // 0x0100   (0x0038)  
	FAIDataProviderBoolValue                           bIncludeWalls;                                              // 0x0138   (0x0038)  
	FAIDataProviderBoolValue                           bIncludeFloors;                                             // 0x0170   (0x0038)  
	TArray<EFloorPatternType>                          FloorPatternsToIgnore;                                      // 0x01A8   (0x0010)  
	FAIDataProviderBoolValue                           bIncludeCenterCell;                                         // 0x01B8   (0x0038)  
	FAIDataProviderIntValue                            MaxBuildingActorsPerVolumeCenterToCollect;                  // 0x01F0   (0x0038)  
};

/// Class /Script/FortniteAIServer.FortQueryGenerator_BuildingsOnCachedPath
/// Size: 0x00B0 (0x000050 - 0x000100)
class UFortQueryGenerator_BuildingsOnCachedPath : public UEnvQueryGenerator
{ 
public:
	class UClass*                                      CachedPathSource;                                           // 0x0050   (0x0008)  
	FAIDataProviderBoolValue                           bIncludeWalls;                                              // 0x0058   (0x0038)  
	FAIDataProviderBoolValue                           bIncludeFloors;                                             // 0x0090   (0x0038)  
	FAIDataProviderBoolValue                           bIncludeCenterCell;                                         // 0x00C8   (0x0038)  
};

/// Class /Script/FortniteAIServer.FortQueryGenerator_EncounterTargets
/// Size: 0x0000 (0x000050 - 0x000050)
class UFortQueryGenerator_EncounterTargets : public UEnvQueryGenerator
{ 
public:
};

/// Class /Script/FortniteAIServer.FortQueryGenerator_Enemies
/// Size: 0x0080 (0x000050 - 0x0000D0)
class UFortQueryGenerator_Enemies : public UEnvQueryGenerator
{ 
public:
	bool                                               bPerceivedEnemiesOnly;                                      // 0x0050   (0x0001)  
	bool                                               bSleepCapableAIUsePerceivedEnemiesOnly;                     // 0x0051   (0x0001)  
	bool                                               bIgnoreDBNOPawns;                                           // 0x0052   (0x0001)  
	bool                                               bIgnoreSleepingAIs;                                         // 0x0053   (0x0001)  
	bool                                               bAddEnemiesFromAbilityRange;                                // 0x0054   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0055   (0x0003)  MISSED
	FGameplayTagContainer                              AbilityTags;                                                // 0x0058   (0x0020)  
	FGameplayTagContainer                              DistanceTags;                                               // 0x0078   (0x0020)  
	FAIDataProviderFloatValue                          MaxTimeSincePerceived;                                      // 0x0098   (0x0038)  
};

/// Class /Script/FortniteAIServer.FortQueryGenerator_GoalActorsOfClass
/// Size: 0x0048 (0x000050 - 0x000098)
class UFortQueryGenerator_GoalActorsOfClass : public UEnvQueryGenerator
{ 
public:
	class UClass*                                      SearchedActorClass;                                         // 0x0050   (0x0008)  
	FAIDataProviderFloatValue                          SearchRadius;                                               // 0x0058   (0x0038)  
	class UClass*                                      SearchCenter;                                               // 0x0090   (0x0008)  
};

/// Class /Script/FortniteAIServer.FortQueryGenerator_GoalOnCircle
/// Size: 0x0040 (0x000220 - 0x000260)
class UFortQueryGenerator_GoalOnCircle : public UEnvQueryGenerator_OnCircle
{ 
public:
	bool                                               bIncludeCenterActorInGeneratedGoals;                        // 0x0220   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0221   (0x0007)  MISSED
	class UFortAIAssignmentSettings*                   OptionalAssignmentSettings;                                 // 0x0228   (0x0008)  
	FFortAIAssignmentIdentifier                        OptionalAssignmentIdentifier;                               // 0x0230   (0x0030)  
};

/// Class /Script/FortniteAIServer.FortQueryGenerator_GoalPlayerPawns
/// Size: 0x0008 (0x000050 - 0x000058)
class UFortQueryGenerator_GoalPlayerPawns : public UEnvQueryGenerator
{ 
public:
	bool                                               bOnlyAthenaGameParticipants;                                // 0x0050   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0051   (0x0007)  MISSED
};

/// Class /Script/FortniteAIServer.FortQueryGenerator_GoalTrackableAIObjects
/// Size: 0x0080 (0x000050 - 0x0000D0)
class UFortQueryGenerator_GoalTrackableAIObjects : public UEnvQueryGenerator
{ 
public:
	FFortAIAssignmentIdentifier                        AssignmentIdentifier;                                       // 0x0050   (0x0030)  
	class UClass*                                      SearchedActorClass;                                         // 0x0080   (0x0008)  
	FGameplayTag                                       RequiredTag;                                                // 0x0088   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x008C   (0x0004)  MISSED
	FAIDataProviderFloatValue                          SearchRadius;                                               // 0x0090   (0x0038)  
	class UClass*                                      SearchCenter;                                               // 0x00C8   (0x0008)  
};

/// Class /Script/FortniteAIServer.FortQueryGenerator_HotspotSlots
/// Size: 0x0050 (0x000050 - 0x0000A0)
class UFortQueryGenerator_HotspotSlots : public UEnvQueryGenerator
{ 
public:
	class UClass*                                      GenerateAround;                                             // 0x0050   (0x0008)  
	FAIDataProviderFloatValue                          Radius;                                                     // 0x0058   (0x0038)  
	bool                                               bUseTetherZone : 1;                                         // 0x0090:0 (0x0001)  
	unsigned char                                      UnknownData00_4[0x7];                                       // 0x0091   (0x0007)  MISSED
	class UClass*                                      HotspotClass;                                               // 0x0098   (0x0008)  
};

/// Class /Script/FortniteAIServer.FortQueryGenerator_InfluenceMapPoints
/// Size: 0x0048 (0x000088 - 0x0000D0)
class UFortQueryGenerator_InfluenceMapPoints : public UEnvQueryGenerator_ProjectedPoints
{ 
public:
	FAIDataProviderIntValue                            Density;                                                    // 0x0088   (0x0038)  
	bool                                               bOnlyFlatSurface : 1;                                       // 0x00C0:0 (0x0001)  
	unsigned char                                      UnknownData00_4[0x7];                                       // 0x00C1   (0x0007)  MISSED
	class UClass*                                      GenerateAround;                                             // 0x00C8   (0x0008)  
};

/// Class /Script/FortniteAIServer.FortQueryGenerator_LootGoalsAthena
/// Size: 0x00D8 (0x000050 - 0x000128)
class UFortQueryGenerator_LootGoalsAthena : public UEnvQueryGenerator
{ 
public:
	FFortAIAssignmentIdentifier                        AssignmentIdentifier;                                       // 0x0050   (0x0030)  
	class UFortAIAssignmentSettings*                   AssignmentSettings;                                         // 0x0080   (0x0008)  
	FAIDataProviderFloatValue                          HorizontalHalfExtents;                                      // 0x0088   (0x0038)  
	FAIDataProviderFloatValue                          VerticalHalfExtents;                                        // 0x00C0   (0x0038)  
	class UClass*                                      SearchCenter;                                               // 0x00F8   (0x0008)  
	bool                                               bAvailableLootOnly : 1;                                     // 0x0100:0 (0x0001)  
	unsigned char                                      UnknownData00_4[0x7];                                       // 0x0101   (0x0007)  MISSED
	FGameplayTagContainer                              ExcludedAILootGameplayTags;                                 // 0x0108   (0x0020)  
};

/// Class /Script/FortniteAIServer.FortQueryGenerator_MissionPlacementActors
/// Size: 0x0048 (0x000050 - 0x000098)
class UFortQueryGenerator_MissionPlacementActors : public UEnvQueryGenerator
{ 
public:
	FGameplayTagQuery                                  MissionPlacementActorTagQuery;                              // 0x0050   (0x0048)  
};

/// Class /Script/FortniteAIServer.FortQueryGenerator_MutatorActorQueryResults
/// Size: 0x0000 (0x000050 - 0x000050)
class UFortQueryGenerator_MutatorActorQueryResults : public UEnvQueryGenerator
{ 
public:
};

/// Class /Script/FortniteAIServer.FortQueryGenerator_MutatorBaseQueryResults
/// Size: 0x0000 (0x000050 - 0x000050)
class UFortQueryGenerator_MutatorBaseQueryResults : public UEnvQueryGenerator
{ 
public:
};

/// Struct /Script/FortniteAIServer.FortQueryGenerator_PerceivedActors_Settings
/// Size: 0x0040 (0x000000 - 0x000040)
struct FFortQueryGenerator_PerceivedActors_Settings
{ 
	bool                                               bIgnoreDBNOPawns;                                           // 0x0000   (0x0001)  
	bool                                               bIgnoreSleepingAIs;                                         // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x0002   (0x0006)  MISSED
	FAIDataProviderFloatValue                          MaxTimeSincePerceived;                                      // 0x0008   (0x0038)  
};

/// Class /Script/FortniteAIServer.FortQueryGenerator_PerceivedActors
/// Size: 0x00D8 (0x000050 - 0x000128)
class UFortQueryGenerator_PerceivedActors : public UEnvQueryGenerator
{ 
public:
	bool                                               bGenerateHostileActorGoal;                                  // 0x0050   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0051   (0x0007)  MISSED
	FFortQueryGenerator_PerceivedActors_Settings       HostileActorSettings;                                       // 0x0058   (0x0040)  
	bool                                               bGenerateNeutralActorGoal;                                  // 0x0098   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0099   (0x0007)  MISSED
	FFortQueryGenerator_PerceivedActors_Settings       NeutralActorSettings;                                       // 0x00A0   (0x0040)  
	bool                                               bGenerateFriendlyActorGoal;                                 // 0x00E0   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x00E1   (0x0007)  MISSED
	FFortQueryGenerator_PerceivedActors_Settings       FriendlyActorSettings;                                      // 0x00E8   (0x0040)  
};

/// Class /Script/FortniteAIServer.FortQueryGenerator_PointsAroundLine
/// Size: 0x0098 (0x000088 - 0x000120)
class UFortQueryGenerator_PointsAroundLine : public UEnvQueryGenerator_ProjectedPoints
{ 
public:
	class UClass*                                      GenerateAround;                                             // 0x0088   (0x0008)  
	FAIDataProviderIntValue                            MaxPointsPerClusterLocation;                                // 0x0090   (0x0038)  
	FAIDataProviderFloatValue                          ClusterRadius;                                              // 0x00C8   (0x0038)  
	SDK_UNDEFINED(32,13963) /* TWeakObjectPtr<UFortQueryData_CurvesAroundLine*> */ __um(CurvesAroundLineAsset);    // 0x0100   (0x0020)  
};

/// Class /Script/FortniteAIServer.FortQueryGenerator_PointsFromNavGraph
/// Size: 0x0150 (0x000088 - 0x0001D8)
class UFortQueryGenerator_PointsFromNavGraph : public UEnvQueryGenerator_ProjectedPoints
{ 
public:
	FAIDataProviderFloatValue                          MinPathDistance;                                            // 0x0088   (0x0038)  
	FAIDataProviderFloatValue                          MaxPathDistance;                                            // 0x00C0   (0x0038)  
	FAIDataProviderIntValue                            Density;                                                    // 0x00F8   (0x0038)  
	FAIDataProviderFloatValue                          ExploreDirectionYaw;                                        // 0x0130   (0x0038)  
	FEnvDirection                                      ExploreDirection;                                           // 0x0168   (0x0020)  
	float                                              ExploreAngleDot;                                            // 0x0188   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x018C   (0x0004)  MISSED
	FAIDataProviderFloatValue                          ExploreInnerRadius;                                         // 0x0190   (0x0038)  
	bool                                               bLimitExplorationDirection : 1;                             // 0x01C8:0 (0x0001)  
	bool                                               bOnlyFlatSurface : 1;                                       // 0x01C8:1 (0x0001)  
	bool                                               bUseParameterizedDirection : 1;                             // 0x01C8:2 (0x0001)  
	bool                                               bUseHeightCheck : 1;                                        // 0x01C8:3 (0x0001)  
	bool                                               bFilterAllowTerrain : 1;                                    // 0x01C8:4 (0x0001)  
	bool                                               bFilterAllowBuildings : 1;                                  // 0x01C8:5 (0x0001)  
	bool                                               bFilterAllowDropdown : 1;                                   // 0x01C8:6 (0x0001)  
	bool                                               bFilterAllowClimbup : 1;                                    // 0x01C8:7 (0x0001)  
	bool                                               bFilterAllowSmash : 1;                                      // 0x01C9:0 (0x0001)  
	unsigned char                                      UnknownData01_4[0x2];                                       // 0x01CA   (0x0002)  MISSED
	SDK_UNDEFINED(1,13964) /* TEnumAsByte<EFortPointsFromNavGraphGoalPathDistanceFilterOperator> */ __um(PathDistanceFilterOperator); // 0x01CC   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x01CD   (0x0003)  MISSED
	class UClass*                                      GenerateAround;                                             // 0x01D0   (0x0008)  
};

/// Class /Script/FortniteAIServer.FortQueryGenerator_PointsInVolume
/// Size: 0x0048 (0x000050 - 0x000098)
class UFortQueryGenerator_PointsInVolume : public UEnvQueryGenerator
{ 
public:
	FAIDataProviderIntValue                            NumberOfPoints;                                             // 0x0050   (0x0038)  
	SDK_UNDEFINED(1,13965) /* TEnumAsByte<EFortNamedNavmesh> */ __um(NavMeshToUse);                                // 0x0088   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0089   (0x0007)  MISSED
	class UClass*                                      GenerateIn;                                                 // 0x0090   (0x0008)  
};

/// Class /Script/FortniteAIServer.FortQueryGenerator_PointsOnBuildingActors
/// Size: 0x01C8 (0x000088 - 0x000250)
class UFortQueryGenerator_PointsOnBuildingActors : public UEnvQueryGenerator_ProjectedPoints
{ 
public:
	FAIDataProviderFloatValue                          BoundingBoxExtentXY;                                        // 0x0088   (0x0038)  
	FAIDataProviderFloatValue                          BoundingBoxExtentZ;                                         // 0x00C0   (0x0038)  
	FAIDataProviderFloatValue                          PointDensity;                                               // 0x00F8   (0x0038)  
	FAIDataProviderIntValue                            MaxGeneratedPoints;                                         // 0x0130   (0x0038)  
	FFortTaggedActorOctreeFilter                       ActorLookupFilter;                                          // 0x0168   (0x00A8)  
	FAIDataProviderFloatValue                          RandomChanceToSkip;                                         // 0x0210   (0x0038)  
	class UClass*                                      GenerateAround;                                             // 0x0248   (0x0008)  
};

/// Class /Script/FortniteAIServer.FortQueryGenerator_PointsOnBuildingGrid
/// Size: 0x0080 (0x000088 - 0x000108)
class UFortQueryGenerator_PointsOnBuildingGrid : public UEnvQueryGenerator_ProjectedPoints
{ 
public:
	FAIDataProviderIntValue                            HorizontalGridSize;                                         // 0x0088   (0x0038)  
	FAIDataProviderIntValue                            VerticalGridSize;                                           // 0x00C0   (0x0038)  
	bool                                               bStartGridFromBottom;                                       // 0x00F8   (0x0001)  
	bool                                               bUsePointInVerticalCenterOfCell;                            // 0x00F9   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x00FA   (0x0006)  MISSED
	class UClass*                                      GenerateAround;                                             // 0x0100   (0x0008)  
};

/// Class /Script/FortniteAIServer.FortQueryGenerator_PointsOnWaterShoreLine
/// Size: 0x0060 (0x000088 - 0x0000E8)
class UFortQueryGenerator_PointsOnWaterShoreLine : public UEnvQueryGenerator_ProjectedPoints
{ 
public:
	class UClass*                                      GenerateAround;                                             // 0x0088   (0x0008)  
	SDK_UNDEFINED(32,13966) /* TWeakObjectPtr<UFortQueryData_CurvesAroundLine*> */ __um(CurvesAroundLineAsset);    // 0x0090   (0x0020)  
	FAIDataProviderFloatValue                          SegmentMaximumVerticalDegreeAngle;                          // 0x00B0   (0x0038)  
};

/// Class /Script/FortniteAIServer.FortQueryGenerator_RandomPointsInBoundingVolume
/// Size: 0x0040 (0x000088 - 0x0000C8)
class UFortQueryGenerator_RandomPointsInBoundingVolume : public UEnvQueryGenerator_ProjectedPoints
{ 
public:
	class UClass*                                      GenerateIn;                                                 // 0x0088   (0x0008)  
	FAIDataProviderFloatValue                          RandomPointsCount;                                          // 0x0090   (0x0038)  
};

/// Class /Script/FortniteAIServer.FortQueryGenerator_SpecificAssignmentGoals
/// Size: 0x0040 (0x000050 - 0x000090)
class UFortQueryGenerator_SpecificAssignmentGoals : public UEnvQueryGenerator
{ 
public:
	FFortAIAssignmentIdentifier                        AssignmentIdentifier;                                       // 0x0050   (0x0030)  
	class UFortAIAssignmentSettings*                   AssignmentSettings;                                         // 0x0080   (0x0008)  
	class UClass*                                      GoalProvider;                                               // 0x0088   (0x0008)  
};

/// Class /Script/FortniteAIServer.FortQueryGenerator_SquadMembers
/// Size: 0x0118 (0x000050 - 0x000168)
class UFortQueryGenerator_SquadMembers : public UEnvQueryGenerator
{ 
public:
	FAIDataProviderBoolValue                           LookingForHumanPlayers;                                     // 0x0050   (0x0038)  
	FAIDataProviderBoolValue                           LookingForPlayerBots;                                       // 0x0088   (0x0038)  
	FAIDataProviderBoolValue                           LookingForNpcs;                                             // 0x00C0   (0x0038)  
	FAIDataProviderBoolValue                           LookingForAiPawns;                                          // 0x00F8   (0x0038)  
	FAIDataProviderBoolValue                           IncludeSelf;                                                // 0x0130   (0x0038)  
};

/// Class /Script/FortniteAIServer.FortQueryGenerator_TerrainDonut
/// Size: 0x00F0 (0x000050 - 0x000140)
class UFortQueryGenerator_TerrainDonut : public UEnvQueryGenerator
{ 
public:
	class UClass*                                      Center;                                                     // 0x0050   (0x0008)  
	FAIDataProviderFloatValue                          Radius;                                                     // 0x0058   (0x0038)  
	FAIDataProviderFloatValue                          RadiusWidth;                                                // 0x0090   (0x0038)  
	FAIDataProviderFloatValue                          SpacingArc;                                                 // 0x00C8   (0x0038)  
	FAIDataProviderIntValue                            NumRings;                                                   // 0x0100   (0x0038)  
	bool                                               bFilterAllowTerrain : 1;                                    // 0x0138:0 (0x0001)  
	bool                                               bFilterAllowBuildings : 1;                                  // 0x0138:1 (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0139   (0x0007)  MISSED
};

/// Class /Script/FortniteAIServer.FortQueryGenerator_ValidSpawnRiftActors
/// Size: 0x0038 (0x000050 - 0x000088)
class UFortQueryGenerator_ValidSpawnRiftActors : public UEnvQueryGenerator
{ 
public:
	FAIDataProviderIntValue                            NumAIForGroup;                                              // 0x0050   (0x0038)  
};

/// Class /Script/FortniteAIServer.FortQueryItemType_PointOrSlot
/// Size: 0x0000 (0x000030 - 0x000030)
class UFortQueryItemType_PointOrSlot : public UEnvQueryItemType_Point
{ 
public:
};

/// Class /Script/FortniteAIServer.FortQueryTest_GoalBase
/// Size: 0x0070 (0x0001F8 - 0x000268)
class UFortQueryTest_GoalBase : public UEnvQueryTest
{ 
public:
	bool                                               bScoreEnemies : 1;                                          // 0x01F8:0 (0x0001)  
	bool                                               bScoreEncounterGoals : 1;                                   // 0x01F8:1 (0x0001)  
	bool                                               bScoreWorldGoals : 1;                                       // 0x01F8:2 (0x0001)  
	bool                                               bScoreSpecificAssignments : 1;                              // 0x01F8:3 (0x0001)  
	unsigned char                                      UnknownData00_4[0x7];                                       // 0x01F9   (0x0007)  MISSED
	TArray<FFortAIAssignmentIdentifier>                AssignmentIDs;                                              // 0x0200   (0x0010)  
	TArray<FFortAIAssignmentIdentifier>                ProhibitedAssignmentIDs;                                    // 0x0210   (0x0010)  
	FGameplayTagQuery                                  GoalActorTagQuery;                                          // 0x0220   (0x0048)  
};

/// Class /Script/FortniteAIServer.FortQueryTest_AssignmentTypeInterest
/// Size: 0x01C0 (0x000268 - 0x000428)
class UFortQueryTest_AssignmentTypeInterest : public UFortQueryTest_GoalBase
{ 
public:
	FAIDataProviderFloatValue                          InvalidTypeStartInterest;                                   // 0x0268   (0x0038)  
	FAIDataProviderFloatValue                          InvalidTypeEndInterest;                                     // 0x02A0   (0x0038)  
	FAIDataProviderFloatValue                          InvalidTypeTimeBeforeLerp;                                  // 0x02D8   (0x0038)  
	FAIDataProviderFloatValue                          InvalidTypeLerpDuration;                                    // 0x0310   (0x0038)  
	FAIDataProviderFloatValue                          ValidTypeStartInterest;                                     // 0x0348   (0x0038)  
	FAIDataProviderFloatValue                          ValidTypeEndInterest;                                       // 0x0380   (0x0038)  
	FAIDataProviderFloatValue                          ValidTypeTimeBeforeLerp;                                    // 0x03B8   (0x0038)  
	FAIDataProviderFloatValue                          ValidTypeLerpDuration;                                      // 0x03F0   (0x0038)  
};

/// Class /Script/FortniteAIServer.FortQueryTest_BuildingCriteria
/// Size: 0x0650 (0x000268 - 0x0008B8)
class UFortQueryTest_BuildingCriteria : public UFortQueryTest_GoalBase
{ 
public:
	FAIDataProviderFloatValue                          ScoreForGroundSupportedFloor;                               // 0x0268   (0x0038)  
	FAIDataProviderFloatValue                          ScoreForBeingGroundSupported;                               // 0x02A0   (0x0038)  
	FAIDataProviderFloatValue                          ScoreForTraps;                                              // 0x02D8   (0x0038)  
	FAIDataProviderFloatValue                          ScoreForWalls;                                              // 0x0310   (0x0038)  
	FAIDataProviderFloatValue                          ScoreForNavigableOpening;                                   // 0x0348   (0x0038)  
	FFortAIAssignmentIdentifier                        RootAssignmentID;                                           // 0x0380   (0x0030)  
	FAIDataProviderBoolValue                           bPreferCloserToRootAssignment;                              // 0x03B0   (0x0038)  
	FAIDataProviderFloatValue                          ScoreForDistanceFromClosestRootAssignmentGoal;              // 0x03E8   (0x0038)  
	FAIDataProviderFloatValue                          MinDistanceForDistanceScoring;                              // 0x0420   (0x0038)  
	FAIDataProviderFloatValue                          MaxDistanceForDistanceScoring;                              // 0x0458   (0x0038)  
	FAIDataProviderFloatValue                          MaxHealthScore;                                             // 0x0490   (0x0038)  
	FAIDataProviderBoolValue                           bPreferHigherHealth;                                        // 0x04C8   (0x0038)  
	FAIDataProviderFloatValue                          ClampMaxHealthValue;                                        // 0x0500   (0x0038)  
	FAIDataProviderFloatValue                          ClampMinHealthValue;                                        // 0x0538   (0x0038)  
	FAIDataProviderBoolValue                           bPreferHigherHealthPercentage;                              // 0x0570   (0x0038)  
	FAIDataProviderFloatValue                          MaxHealthPercentageScore;                                   // 0x05A8   (0x0038)  
	FAIDataProviderBoolValue                           bWantsBuildingRepairableByOwner;                            // 0x05E0   (0x0038)  
	FAIDataProviderFloatValue                          RepairableBuildingScore;                                    // 0x0618   (0x0038)  
	FAIDataProviderFloatValue                          NotRepairableBuildingScore;                                 // 0x0650   (0x0038)  
	FAIDataProviderFloatValue                          NeedsRepairBuildingScore;                                   // 0x0688   (0x0038)  
	FAIDataProviderFloatValue                          DoesntNeedsRepairBuildingScore;                             // 0x06C0   (0x0038)  
	FAIDataProviderBoolValue                           bWantsDamagedByFriendly;                                    // 0x06F8   (0x0038)  
	FAIDataProviderFloatValue                          DamagedByFriendlyMaxLifespan;                               // 0x0730   (0x0038)  
	FAIDataProviderFloatValue                          DamagedByFriendlyMinDamage;                                 // 0x0768   (0x0038)  
	FAIDataProviderFloatValue                          DamagedByFriendlyScore;                                     // 0x07A0   (0x0038)  
	FAIDataProviderBoolValue                           bWantsDamagedByEnemy;                                       // 0x07D8   (0x0038)  
	FAIDataProviderFloatValue                          DamagedByEnemyMaxLifespan;                                  // 0x0810   (0x0038)  
	FAIDataProviderFloatValue                          DamagedByEnemyMinDamage;                                    // 0x0848   (0x0038)  
	FAIDataProviderFloatValue                          DamagedByEnemyScore;                                        // 0x0880   (0x0038)  
};

/// Class /Script/FortniteAIServer.FortQueryTest_CanAttackTarget
/// Size: 0x0000 (0x000268 - 0x000268)
class UFortQueryTest_CanAttackTarget : public UFortQueryTest_GoalBase
{ 
public:
};

/// Class /Script/FortniteAIServer.FortQueryTest_CanBeDamaged
/// Size: 0x0000 (0x000268 - 0x000268)
class UFortQueryTest_CanBeDamaged : public UFortQueryTest_GoalBase
{ 
public:
};

/// Class /Script/FortniteAIServer.FortQueryTest_CanHitWithGameplayAbility
/// Size: 0x0030 (0x0001F8 - 0x000228)
class UFortQueryTest_CanHitWithGameplayAbility : public UEnvQueryTest
{ 
public:
	class UClass*                                      AIsUsingAbility;                                            // 0x01F8   (0x0008)  
	class UClass*                                      AbilityTargets;                                             // 0x0200   (0x0008)  
	FGameplayTagContainer                              GameplayAbilityTag;                                         // 0x0208   (0x0020)  
};

/// Class /Script/FortniteAIServer.FortQueryTest_CurieState
/// Size: 0x0048 (0x0001F8 - 0x000240)
class UFortQueryTest_CurieState : public UEnvQueryTest
{ 
public:
	FGameplayTagQuery                                  CurieStateQuery;                                            // 0x01F8   (0x0048)  
};

/// Class /Script/FortniteAIServer.FortQueryTest_DecoyDistance
/// Size: 0x0008 (0x0001F8 - 0x000200)
class UFortQueryTest_DecoyDistance : public UEnvQueryTest
{ 
public:
	class UClass*                                      DistanceTo;                                                 // 0x01F8   (0x0008)  
};

/// Class /Script/FortniteAIServer.FortQueryTest_DeltaDistance
/// Size: 0x0010 (0x0001F8 - 0x000208)
class UFortQueryTest_DeltaDistance : public UEnvQueryTest
{ 
public:
	class UClass*                                      LocationProviderContext;                                    // 0x01F8   (0x0008)  
	bool                                               bUseDistance2D;                                             // 0x0200   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0201   (0x0007)  MISSED
};

/// Class /Script/FortniteAIServer.FortQueryTest_DistanceToActorBound
/// Size: 0x0010 (0x0001F8 - 0x000208)
class UFortQueryTest_DistanceToActorBound : public UEnvQueryTest
{ 
public:
	class UClass*                                      DistanceTo;                                                 // 0x01F8   (0x0008)  
	bool                                               bUse2DDistance;                                             // 0x0200   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0201   (0x0007)  MISSED
};

/// Class /Script/FortniteAIServer.FortQueryTest_DistanceToIndestructibleBuilding
/// Size: 0x0000 (0x0001F8 - 0x0001F8)
class UFortQueryTest_DistanceToIndestructibleBuilding : public UEnvQueryTest
{ 
public:
};

/// Class /Script/FortniteAIServer.FortQueryTest_EnvironmentalDanger
/// Size: 0x0008 (0x0001F8 - 0x000200)
class UFortQueryTest_EnvironmentalDanger : public UEnvQueryTest
{ 
public:
	bool                                               bUse3DBoundsCheck;                                          // 0x01F8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x01F9   (0x0003)  MISSED
	FGameplayTag                                       DangerSourceActorRegistryTag;                               // 0x01FC   (0x0004)  
};

/// Struct /Script/FortniteAIServer.FortGameplayTagQueryPerDifficulty
/// Size: 0x0060 (0x000000 - 0x000060)
struct FFortGameplayTagQueryPerDifficulty
{ 
	FDataTableRowHandle                                DifficultyInfo;                                             // 0x0000   (0x0010)  
	FGameplayTagQuery                                  TagQueryToMatch;                                            // 0x0010   (0x0048)  
	float                                              Difficulty;                                                 // 0x0058   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x005C   (0x0004)  MISSED
};

/// Class /Script/FortniteAIServer.FortQueryTest_GameplayTagsPerDifficulty
/// Size: 0x0010 (0x0001F8 - 0x000208)
class UFortQueryTest_GameplayTagsPerDifficulty : public UEnvQueryTest
{ 
public:
	TArray<FFortGameplayTagQueryPerDifficulty>         TagQueriesPerDifficulty;                                    // 0x01F8   (0x0010)  
};

/// Class /Script/FortniteAIServer.FortQueryTest_GoalActorDot
/// Size: 0x0018 (0x000268 - 0x000280)
class UFortQueryTest_GoalActorDot : public UFortQueryTest_GoalBase
{ 
public:
	class UClass*                                      LineATo;                                                    // 0x0268   (0x0008)  
	class UClass*                                      LineBTo;                                                    // 0x0270   (0x0008)  
	EFortTestGoalActorDot                              TestMode;                                                   // 0x0278   (0x0001)  
	bool                                               bAbsoluteValue;                                             // 0x0279   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x027A   (0x0006)  MISSED
};

/// Class /Script/FortniteAIServer.FortQueryTest_GoalActorTimeSinceSpawn
/// Size: 0x0000 (0x000268 - 0x000268)
class UFortQueryTest_GoalActorTimeSinceSpawn : public UFortQueryTest_GoalBase
{ 
public:
};

/// Class /Script/FortniteAIServer.FortQueryTest_GoalDiscouragement
/// Size: 0x0038 (0x000268 - 0x0002A0)
class UFortQueryTest_GoalDiscouragement : public UFortQueryTest_GoalBase
{ 
public:
	FAIDataProviderBoolValue                           DisableDiscouragementWhenUndermining;                       // 0x0268   (0x0038)  
};

/// Class /Script/FortniteAIServer.FortQueryTest_GoalDistance
/// Size: 0x0018 (0x000268 - 0x000280)
class UFortQueryTest_GoalDistance : public UFortQueryTest_GoalBase
{ 
public:
	EDistanceMode                                      DistanceMode;                                               // 0x0268   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0269   (0x0007)  MISSED
	class UClass*                                      DistanceTo;                                                 // 0x0270   (0x0008)  
	SDK_UNDEFINED(1,13967) /* TEnumAsByte<EEnvTestDistance> */ __um(TestMode);                                     // 0x0278   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0279   (0x0007)  MISSED
};

/// Struct /Script/FortniteAIServer.GoalDistanceData
/// Size: 0x0098 (0x000000 - 0x000098)
struct FGoalDistanceData
{ 
	bool                                               bIgnoreScreeningDistance;                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	FAIDataProviderFloatValue                          ScreeningTestMaxDistance;                                   // 0x0008   (0x0038)  
	SDK_UNDEFINED(32,13968) /* TWeakObjectPtr<UCurveFloat*> */ __um(TestScoreCurve);                               // 0x0040   (0x0020)  
	FAIDataProviderFloatValue                          CurveDistanceScale;                                         // 0x0060   (0x0038)  
};

/// Class /Script/FortniteAIServer.FortQueryTest_GoalDistanceRanges
/// Size: 0x0028 (0x000268 - 0x000290)
class UFortQueryTest_GoalDistanceRanges : public UFortQueryTest_GoalBase
{ 
public:
	EDistanceMode                                      DistanceMode;                                               // 0x0268   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0269   (0x0007)  MISSED
	class UClass*                                      DistanceTo;                                                 // 0x0270   (0x0008)  
	SDK_UNDEFINED(1,13969) /* TEnumAsByte<EEnvTestDistance> */ __um(ScreeningTestMode);                            // 0x0278   (0x0001)  
	SDK_UNDEFINED(1,13970) /* TEnumAsByte<EEnvTestDistance> */ __um(TestMode);                                     // 0x0279   (0x0001)  
	unsigned char                                      UnknownData01_5[0x6];                                       // 0x027A   (0x0006)  MISSED
	TArray<FGoalDistanceData>                          GoalDistanceDataRanges;                                     // 0x0280   (0x0010)  
};

/// Class /Script/FortniteAIServer.FortQueryTest_GoalFrustrationDiscouragement
/// Size: 0x0000 (0x000268 - 0x000268)
class UFortQueryTest_GoalFrustrationDiscouragement : public UFortQueryTest_GoalBase
{ 
public:
};

/// Class /Script/FortniteAIServer.FortQueryTest_GoalGameplayTags
/// Size: 0x0058 (0x000268 - 0x0002C0)
class UFortQueryTest_GoalGameplayTags : public UFortQueryTest_GoalBase
{ 
public:
	bool                                               bShouldLookupQueryByTag;                                    // 0x0268   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0269   (0x0007)  MISSED
	FGameplayTagQuery                                  TagQueryToMatch;                                            // 0x0270   (0x0048)  
	FGameplayTag                                       QueryLookupTag;                                             // 0x02B8   (0x0004)  
	bool                                               bShouldPassWhenQueryNotFound;                               // 0x02BC   (0x0001)  
	bool                                               bRequireAllProvidedTagQueriesPass;                          // 0x02BD   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x02BE   (0x0002)  MISSED
};

/// Class /Script/FortniteAIServer.FortQueryTest_GoalMarkedByPlayer
/// Size: 0x0080 (0x000268 - 0x0002E8)
class UFortQueryTest_GoalMarkedByPlayer : public UFortQueryTest_GoalBase
{ 
public:
	FGameplayTagQuery                                  OwnerTagQuery;                                              // 0x0268   (0x0048)  
	FAIDataProviderBoolValue                           OnlyConverterMarkedTargets;                                 // 0x02B0   (0x0038)  
};

/// Class /Script/FortniteAIServer.FortQueryTest_GoalNumberOfAIAssigned
/// Size: 0x0008 (0x000268 - 0x000270)
class UFortQueryTest_GoalNumberOfAIAssigned : public UFortQueryTest_GoalBase
{ 
public:
	ECountAIAssignedToType                             TypeOfMatchToCount;                                         // 0x0268   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0269   (0x0007)  MISSED
};

/// Class /Script/FortniteAIServer.FortQueryTest_GoalOverallDamageCaused
/// Size: 0x0000 (0x000268 - 0x000268)
class UFortQueryTest_GoalOverallDamageCaused : public UFortQueryTest_GoalBase
{ 
public:
};

/// Class /Script/FortniteAIServer.FortQueryTest_GoalPickupFilter
/// Size: 0x0008 (0x000268 - 0x000270)
class UFortQueryTest_GoalPickupFilter : public UFortQueryTest_GoalBase
{ 
public:
	float                                              MaxLifetime;                                                // 0x0268   (0x0004)  
	EFortPickupSpawnSource                             RequiredPickupSpawnSource;                                  // 0x026C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x026D   (0x0003)  MISSED
};

/// Class /Script/FortniteAIServer.FortQueryTest_GoalProject
/// Size: 0x0038 (0x000268 - 0x0002A0)
class UFortQueryTest_GoalProject : public UFortQueryTest_GoalBase
{ 
public:
	FEnvTraceData                                      ProjectionData;                                             // 0x0268   (0x0038)  
};

/// Class /Script/FortniteAIServer.FortQueryTest_GoalStickiness
/// Size: 0x0118 (0x000268 - 0x000380)
class UFortQueryTest_GoalStickiness : public UFortQueryTest_GoalBase
{ 
public:
	FAIDataProviderFloatValue                          StartValueForGoal;                                          // 0x0268   (0x0038)  
	FAIDataProviderFloatValue                          EndValueForGoal;                                            // 0x02A0   (0x0038)  
	FAIDataProviderFloatValue                          TimeBeforeValueLerp;                                        // 0x02D8   (0x0038)  
	FAIDataProviderFloatValue                          ValueLerpDuration;                                          // 0x0310   (0x0038)  
	FAIDataProviderBoolValue                           ApplyStickinessToAllGoalsWithSameActor;                     // 0x0348   (0x0038)  
};

/// Class /Script/FortniteAIServer.FortQueryTest_GoalType
/// Size: 0x0000 (0x000268 - 0x000268)
class UFortQueryTest_GoalType : public UFortQueryTest_GoalBase
{ 
public:
};

/// Class /Script/FortniteAIServer.FortQueryTest_GoalWithinTetheredBounds
/// Size: 0x0000 (0x000268 - 0x000268)
class UFortQueryTest_GoalWithinTetheredBounds : public UFortQueryTest_GoalBase
{ 
public:
};

/// Class /Script/FortniteAIServer.FortQueryTest_HasNearbyBuildings
/// Size: 0x0010 (0x0001F8 - 0x000208)
class UFortQueryTest_HasNearbyBuildings : public UEnvQueryTest
{ 
public:
	bool                                               bIncludeCenter : 1;                                         // 0x01F8:0 (0x0001)  
	bool                                               bIncludeFloors : 1;                                         // 0x01F8:1 (0x0001)  
	bool                                               bIncludeFloorsAbove : 1;                                    // 0x01F8:2 (0x0001)  
	bool                                               bIncludeWalls : 1;                                          // 0x01F8:3 (0x0001)  
	unsigned char                                      UnknownData00_4[0x3];                                       // 0x01F9   (0x0003)  MISSED
	int32_t                                            ExtentXY;                                                   // 0x01FC   (0x0004)  
	int32_t                                            ExtentZ;                                                    // 0x0200   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0204   (0x0004)  MISSED
};

/// Class /Script/FortniteAIServer.FortQueryTest_HasNearbyEncounterGoals
/// Size: 0x0040 (0x0001F8 - 0x000238)
class UFortQueryTest_HasNearbyEncounterGoals : public UEnvQueryTest
{ 
public:
	bool                                               bOnlyActiveEncounters : 1;                                  // 0x01F8:0 (0x0001)  
	unsigned char                                      UnknownData00_4[0x7];                                       // 0x01F9   (0x0007)  MISSED
	FAIDataProviderFloatValue                          TestDistance;                                               // 0x0200   (0x0038)  
};

/// Class /Script/FortniteAIServer.FortQueryTest_Health
/// Size: 0x0008 (0x0001F8 - 0x000200)
class UFortQueryTest_Health : public UEnvQueryTest
{ 
public:
	bool                                               bUsePercentHealth;                                          // 0x01F8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x01F9   (0x0007)  MISSED
};

/// Class /Script/FortniteAIServer.FortQueryTest_HealthAndShield
/// Size: 0x00F8 (0x0001F8 - 0x0002F0)
class UFortQueryTest_HealthAndShield : public UEnvQueryTest
{ 
public:
	bool                                               bConsiderHealth;                                            // 0x01F8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x01F9   (0x0007)  MISSED
	FAIDataProviderFloatValue                          HealthMin;                                                  // 0x0200   (0x0038)  
	FAIDataProviderFloatValue                          HealthMax;                                                  // 0x0238   (0x0038)  
	bool                                               bHealthAsPercent;                                           // 0x0270   (0x0001)  
	bool                                               bConsiderShield;                                            // 0x0271   (0x0001)  
	unsigned char                                      UnknownData01_5[0x6];                                       // 0x0272   (0x0006)  MISSED
	FAIDataProviderFloatValue                          ShieldMin;                                                  // 0x0278   (0x0038)  
	FAIDataProviderFloatValue                          ShieldMax;                                                  // 0x02B0   (0x0038)  
	bool                                               bShieldAsPercent;                                           // 0x02E8   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x02E9   (0x0007)  MISSED
};

/// Class /Script/FortniteAIServer.FortQueryTest_HotspotSlotOrientation
/// Size: 0x0040 (0x0001F8 - 0x000238)
class UFortQueryTest_HotspotSlotOrientation : public UEnvQueryTest
{ 
public:
	class UClass*                                      FaceToward;                                                 // 0x01F8   (0x0008)  
	FAIDataProviderFloatValue                          DotThreshold;                                               // 0x0200   (0x0038)  
};

/// Class /Script/FortniteAIServer.FortQueryTest_HotspotSlotState
/// Size: 0x0008 (0x0001F8 - 0x000200)
class UFortQueryTest_HotspotSlotState : public UEnvQueryTest
{ 
public:
	EAIHotSpotSlot                                     SlotState;                                                  // 0x01F8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x01F9   (0x0007)  MISSED
};

/// Class /Script/FortniteAIServer.FortQueryTest_InfluenceScore
/// Size: 0x0000 (0x0001F8 - 0x0001F8)
class UFortQueryTest_InfluenceScore : public UEnvQueryTest
{ 
public:
};

/// Class /Script/FortniteAIServer.FortQueryTest_InsideAIBotLeash
/// Size: 0x0000 (0x0001F8 - 0x0001F8)
class UFortQueryTest_InsideAIBotLeash : public UEnvQueryTest
{ 
public:
};

/// Class /Script/FortniteAIServer.FortQueryTest_InsideAthenaLeash
/// Size: 0x0000 (0x0001F8 - 0x0001F8)
class UFortQueryTest_InsideAthenaLeash : public UEnvQueryTest
{ 
public:
};

/// Class /Script/FortniteAIServer.FortQueryTest_InsideAthenaSafeZone
/// Size: 0x0048 (0x0001F8 - 0x000240)
class UFortQueryTest_InsideAthenaSafeZone : public UEnvQueryTest
{ 
public:
	bool                                               bUseCurrentSafeZoneIndicatorRadius;                         // 0x01F8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x01F9   (0x0007)  MISSED
	FAIDataProviderIntValue                            SafeZoneIndex;                                              // 0x0200   (0x0038)  
	bool                                               bNextSafeZone;                                              // 0x0238   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0239   (0x0007)  MISSED
};

/// Class /Script/FortniteAIServer.FortQueryTest_InsideBuilding
/// Size: 0x0000 (0x0001F8 - 0x0001F8)
class UFortQueryTest_InsideBuilding : public UEnvQueryTest
{ 
public:
};

/// Class /Script/FortniteAIServer.FortQueryTest_InsideWater
/// Size: 0x0008 (0x0001F8 - 0x000200)
class UFortQueryTest_InsideWater : public UEnvQueryTest
{ 
public:
	float                                              TestRadius;                                                 // 0x01F8   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x01FC   (0x0004)  MISSED
};

/// Class /Script/FortniteAIServer.FortQueryTest_IsCloseToHotspotSlot
/// Size: 0x0048 (0x0001F8 - 0x000240)
class UFortQueryTest_IsCloseToHotspotSlot : public UEnvQueryTest
{ 
public:
	class UClass*                                      HotspotClass;                                               // 0x01F8   (0x0008)  
	FAIDataProviderFloatValue                          Radius;                                                     // 0x0200   (0x0038)  
	bool                                               bIgnoreItemsWithSlotData;                                   // 0x0238   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0239   (0x0007)  MISSED
};

/// Class /Script/FortniteAIServer.FortQueryTest_IsCloseToPatrolWard
/// Size: 0x0008 (0x0001F8 - 0x000200)
class UFortQueryTest_IsCloseToPatrolWard : public UEnvQueryTest
{ 
public:
	EWardAffectType                                    WardEffectTypeFilter;                                       // 0x01F8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x01F9   (0x0007)  MISSED
};

/// Class /Script/FortniteAIServer.FortQueryTest_IsGoalForAssignment
/// Size: 0x0038 (0x0001F8 - 0x000230)
class UFortQueryTest_IsGoalForAssignment : public UEnvQueryTest
{ 
public:
	bool                                               bRetrieveRootAssignmentFromOwner;                           // 0x01F8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x01F9   (0x0007)  MISSED
	FFortAIAssignmentIdentifier                        RootAssignmentID;                                           // 0x0200   (0x0030)  
};

/// Class /Script/FortniteAIServer.FortQueryTest_IsGoalHostile
/// Size: 0x00B8 (0x000268 - 0x000320)
class UFortQueryTest_IsGoalHostile : public UFortQueryTest_GoalBase
{ 
public:
	FGameplayTagQuery                                  OwnerTagQuery;                                              // 0x0268   (0x0048)  
	FGameplayTagQuery                                  EnemyPawnTagsToConsider;                                    // 0x02B0   (0x0048)  
	FGameplayTagContainer                              BuildingTagsToConsider;                                     // 0x02F8   (0x0020)  
	bool                                               bConsiderDefenders;                                         // 0x0318   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0319   (0x0007)  MISSED
};

/// Class /Script/FortniteAIServer.FortQueryTest_IsInLeaderLOS
/// Size: 0x0058 (0x0001F8 - 0x000250)
class UFortQueryTest_IsInLeaderLOS : public UEnvQueryTest
{ 
public:
	FGameplayTagQuery                                  OwnerTagQuery;                                              // 0x01F8   (0x0048)  
	bool                                               bRequireLOSRayCast;                                         // 0x0240   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0241   (0x0003)  MISSED
	float                                              RayCastLeaderVerticalOffset;                                // 0x0244   (0x0004)  
	float                                              RayCastItemVerticalOffset;                                  // 0x0248   (0x0004)  
	float                                              MinDotProduct;                                              // 0x024C   (0x0004)  
};

/// Class /Script/FortniteAIServer.FortQueryTest_IsObstructed
/// Size: 0x00E0 (0x0002E0 - 0x0003C0)
class UFortQueryTest_IsObstructed : public UEnvQueryTest_Trace
{ 
public:
	FAIDataProviderBoolValue                           OverrideContextLocationXWithItemLocationX;                  // 0x02E0   (0x0038)  
	FAIDataProviderBoolValue                           OverrideContextLocationYWithItemLocationY;                  // 0x0318   (0x0038)  
	FAIDataProviderBoolValue                           OverrideContextLocationZWithItemLocationZ;                  // 0x0350   (0x0038)  
	FAIDataProviderBoolValue                           OverrideItemLocationZWithContextLocationZ;                  // 0x0388   (0x0038)  
};

/// Class /Script/FortniteAIServer.FortQueryTest_IsObstructedOverlap
/// Size: 0x00A8 (0x0002E0 - 0x000388)
class UFortQueryTest_IsObstructedOverlap : public UEnvQueryTest_Trace
{ 
public:
	FAIDataProviderBoolValue                           OverrideContextLocationXWithItemLocationX;                  // 0x02E0   (0x0038)  
	FAIDataProviderBoolValue                           OverrideContextLocationYWithItemLocationY;                  // 0x0318   (0x0038)  
	FAIDataProviderBoolValue                           OverrideContextLocationZWithItemLocationZ;                  // 0x0350   (0x0038)  
};

/// Class /Script/FortniteAIServer.FortQueryTest_MissionGameplayTagMatch
/// Size: 0x0068 (0x0001F8 - 0x000260)
class UFortQueryTest_MissionGameplayTagMatch : public UEnvQueryTest
{ 
public:
	FGameplayTagQuery                                  MissionPlacementActorTagQuery;                              // 0x01F8   (0x0048)  
	FGameplayTagContainer                              GameplayTagsToMatch;                                        // 0x0240   (0x0020)  
};

/// Class /Script/FortniteAIServer.FortQueryTest_MissionSameMap
/// Size: 0x0048 (0x0001F8 - 0x000240)
class UFortQueryTest_MissionSameMap : public UEnvQueryTest
{ 
public:
	FGameplayTagQuery                                  MissionPlacementActorTagQuery;                              // 0x01F8   (0x0048)  
};

/// Class /Script/FortniteAIServer.FortQueryTest_NavGraphDistance
/// Size: 0x0008 (0x0001F8 - 0x000200)
class UFortQueryTest_NavGraphDistance : public UEnvQueryTest
{ 
public:
	class UClass*                                      DistanceTo;                                                 // 0x01F8   (0x0008)  
};

/// Class /Script/FortniteAIServer.FortQueryTest_OnFlatSurface
/// Size: 0x0018 (0x0001F8 - 0x000210)
class UFortQueryTest_OnFlatSurface : public UEnvQueryTest
{ 
public:
	float                                              Radius;                                                     // 0x01F8   (0x0004)  
	float                                              ToleranceZ;                                                 // 0x01FC   (0x0004)  
	float                                              TraceOffsetUp;                                              // 0x0200   (0x0004)  
	float                                              TraceOffsetDown;                                            // 0x0204   (0x0004)  
	uint32_t                                           NumberOfIteration;                                          // 0x0208   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x020C   (0x0004)  MISSED
};

/// Class /Script/FortniteAIServer.FortQueryTest_OnFlatSurfaceNoNavMesh
/// Size: 0x0020 (0x0001F8 - 0x000218)
class UFortQueryTest_OnFlatSurfaceNoNavMesh : public UEnvQueryTest
{ 
public:
	float                                              Radius;                                                     // 0x01F8   (0x0004)  
	float                                              ZTolerance;                                                 // 0x01FC   (0x0004)  
	float                                              NormalTolerance;                                            // 0x0200   (0x0004)  
	float                                              TraceOffset;                                                // 0x0204   (0x0004)  
	TArray<class UClass*>                              ActorClassesToIgnoreInTrace;                                // 0x0208   (0x0010)  
};

/// Class /Script/FortniteAIServer.FortQueryTest_PathfindingBatch
/// Size: 0x0008 (0x0002B8 - 0x0002C0)
class UFortQueryTest_PathfindingBatch : public UEnvQueryTest_PathfindingBatch
{ 
public:
	FGameplayTag                                       NavFilterTag;                                               // 0x02B8   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x02BC   (0x0004)  MISSED
};

/// Class /Script/FortniteAIServer.FortQueryTest_PawnHealth
/// Size: 0x0008 (0x000268 - 0x000270)
class UFortQueryTest_PawnHealth : public UFortQueryTest_GoalBase
{ 
public:
	bool                                               bUsePercentHealth;                                          // 0x0268   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0269   (0x0007)  MISSED
};

/// Class /Script/FortniteAIServer.FortQueryTest_PawnIsDBNO
/// Size: 0x0000 (0x000268 - 0x000268)
class UFortQueryTest_PawnIsDBNO : public UFortQueryTest_GoalBase
{ 
public:
};

/// Class /Script/FortniteAIServer.FortQueryTest_PerceptionAge
/// Size: 0x0010 (0x0001F8 - 0x000208)
class UFortQueryTest_PerceptionAge : public UEnvQueryTest
{ 
public:
	SDK_UNDEFINED(1,13971) /* TEnumAsByte<ECorePerceptionTypes> */ __um(Sense);                                    // 0x01F8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x01F9   (0x0007)  MISSED
	class UClass*                                      SenseClass;                                                 // 0x0200   (0x0008)  
};

/// Class /Script/FortniteAIServer.FortQueryTest_PerceptionAll
/// Size: 0x0210 (0x000268 - 0x000478)
class UFortQueryTest_PerceptionAll : public UFortQueryTest_GoalBase
{ 
public:
	FAIDataProviderFloatValue                          SenseScores;                                                // 0x0268   (0x0150)  
	SDK_UNDEFINED(80,13972) /* TMap<UClass*, FAIDataProviderFloatValue> */ __um(AdditionalSenseScores);            // 0x03B8   (0x0050)  
	FAIDataProviderFloatValue                          MinSenseAge;                                                // 0x0408   (0x0038)  
	FAIDataProviderFloatValue                          MaxSenseAge;                                                // 0x0440   (0x0038)  
};

/// Class /Script/FortniteAIServer.FortQueryTest_PerceptionExists
/// Size: 0x0010 (0x0001F8 - 0x000208)
class UFortQueryTest_PerceptionExists : public UEnvQueryTest
{ 
public:
	SDK_UNDEFINED(1,13973) /* TEnumAsByte<ECorePerceptionTypes> */ __um(Sense);                                    // 0x01F8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x01F9   (0x0007)  MISSED
	class UClass*                                      SenseClass;                                                 // 0x0200   (0x0008)  
};

/// Class /Script/FortniteAIServer.FortQueryTest_PickupDropper
/// Size: 0x0118 (0x000268 - 0x000380)
class UFortQueryTest_PickupDropper : public UFortQueryTest_GoalBase
{ 
public:
	FAIDataProviderFloatValue                          ValueConverterDroppedPickup;                                // 0x0268   (0x0038)  
	FAIDataProviderFloatValue                          ValueOtherDroppedPickupInitial;                             // 0x02A0   (0x0038)  
	FAIDataProviderFloatValue                          ValueOtherDroppedPickupFinal;                               // 0x02D8   (0x0038)  
	FAIDataProviderFloatValue                          TimeOtherDroppedPickupFinal;                                // 0x0310   (0x0038)  
	FAIDataProviderBoolValue                           LerpFromInitialToFinal;                                     // 0x0348   (0x0038)  
};

/// Class /Script/FortniteAIServer.FortQueryTest_PointInBuildingFoundation
/// Size: 0x0028 (0x0001F8 - 0x000220)
class UFortQueryTest_PointInBuildingFoundation : public UEnvQueryTest
{ 
public:
	class UClass*                                      BuildingFoundationContext;                                  // 0x01F8   (0x0008)  
	class UClass*                                      BuildingFoundationClass;                                    // 0x0200   (0x0008)  
	FVector                                            BoundingBoxScale;                                           // 0x0208   (0x0018)  
};

/// Class /Script/FortniteAIServer.FortQueryTest_PrimaryAssignment
/// Size: 0x0120 (0x000268 - 0x000388)
class UFortQueryTest_PrimaryAssignment : public UFortQueryTest_GoalBase
{ 
public:
	bool                                               bUseItemActorLocation;                                      // 0x0268   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0269   (0x0007)  MISSED
	FAIDataProviderFloatValue                          DistanceClose;                                              // 0x0270   (0x0038)  
	FAIDataProviderFloatValue                          DistanceFar;                                                // 0x02A8   (0x0038)  
	FAIDataProviderFloatValue                          PercentValueClose;                                          // 0x02E0   (0x0038)  
	FAIDataProviderFloatValue                          PercentValueRegular;                                        // 0x0318   (0x0038)  
	FAIDataProviderFloatValue                          PercentValueFar;                                            // 0x0350   (0x0038)  
};

/// Class /Script/FortniteAIServer.FortQueryTest_ProjectOnNavMesh
/// Size: 0x0000 (0x0001F8 - 0x0001F8)
class UFortQueryTest_ProjectOnNavMesh : public UEnvQueryTest
{ 
public:
};

/// Class /Script/FortniteAIServer.FortQueryTest_Random
/// Size: 0x0008 (0x0001F8 - 0x000200)
class UFortQueryTest_Random : public UEnvQueryTest
{ 
public:
	bool                                               bUseRandomSeedForAI : 1;                                    // 0x01F8:0 (0x0001)  
	bool                                               bUseRandomSeedForOthers : 1;                                // 0x01F8:1 (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x01F9   (0x0007)  MISSED
};

/// Class /Script/FortniteAIServer.FortQueryTest_TowardNextAthenaSafeZone
/// Size: 0x0058 (0x0001F8 - 0x000250)
class UFortQueryTest_TowardNextAthenaSafeZone : public UEnvQueryTest
{ 
public:
	FAIDataProviderIntValue                            SafeZoneIndex;                                              // 0x01F8   (0x0038)  
	bool                                               bCheckAcceptanceAngleTowardNextCenter;                      // 0x0230   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0231   (0x0003)  MISSED
	float                                              AcceptanceAngleTowardNextCenter;                            // 0x0234   (0x0004)  
	TArray<int32_t>                                    ExclusionSafeZoneIndex;                                     // 0x0238   (0x0010)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0248   (0x0008)  MISSED
};

/// Class /Script/FortniteAIServer.FortQueryTest_ValidSurface
/// Size: 0x0120 (0x0001F8 - 0x000318)
class UFortQueryTest_ValidSurface : public UEnvQueryTest
{ 
public:
	FAIDataProviderFloatValue                          Radius;                                                     // 0x01F8   (0x0038)  
	FAIDataProviderFloatValue                          TraceOffsetUp;                                              // 0x0230   (0x0038)  
	FAIDataProviderFloatValue                          TraceOffsetDown;                                            // 0x0268   (0x0038)  
	SDK_UNDEFINED(1,13974) /* TEnumAsByte<ECollisionChannel> */ __um(TraceCollisionChannel);                       // 0x02A0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x02A1   (0x0007)  MISSED
	FAIDataProviderFloatValue                          FlatSurfaceToleranceZ;                                      // 0x02A8   (0x0038)  
	SDK_UNDEFINED(16,13975) /* TArray<TWeakObjectPtr<UPhysicalMaterial*>> */ __um(SurfaceMaterials);               // 0x02E0   (0x0010)  
	bool                                               bAreSurfaceMaterialsValid;                                  // 0x02F0   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x02F1   (0x0007)  MISSED
	SDK_UNDEFINED(16,13976) /* TArray<TWeakObjectPtr<UClass*>> */ __um(ValidHitActorClasses);                      // 0x02F8   (0x0010)  
	SDK_UNDEFINED(16,13977) /* TArray<TWeakObjectPtr<UClass*>> */ __um(InvalidHitActorClasses);                    // 0x0308   (0x0010)  
};

/// Class /Script/FortniteAIServer.FortQueryTest_WithinHotfixVolumeBounds
/// Size: 0x0028 (0x0001F8 - 0x000220)
class UFortQueryTest_WithinHotfixVolumeBounds : public UEnvQueryTest
{ 
public:
	class UDataTable*                                  BoundsTable;                                                // 0x01F8   (0x0008)  
	FVector                                            BoundsExtentBuffer;                                         // 0x0200   (0x0018)  
	bool                                               bXYOnly;                                                    // 0x0218   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0219   (0x0007)  MISSED
};

/// Class /Script/FortniteAIServer.FortQueryTest_WithinTaggedArea
/// Size: 0x0068 (0x0001F8 - 0x000260)
class UFortQueryTest_WithinTaggedArea : public UEnvQueryTest
{ 
public:
	FGameplayTagQuery                                  TagQuery;                                                   // 0x01F8   (0x0048)  
	FVector                                            AreaExtentBuffer;                                           // 0x0240   (0x0018)  
	bool                                               bAssumeInfiniteHeightForArea;                               // 0x0258   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0259   (0x0007)  MISSED
};

/// Class /Script/FortniteAIServer.FortAthenaBTTask_BotAmbushPlayer
/// Size: 0x0090 (0x000078 - 0x000108)
class UFortAthenaBTTask_BotAmbushPlayer : public UBTTask_Wait
{ 
public:
	float                                              FacingPrecision;                                            // 0x0078   (0x0004)  
	float                                              WeaponCooldown;                                             // 0x007C   (0x0004)  
	bool                                               bClearBlackboardOnFinished;                                 // 0x0080   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0081   (0x0007)  MISSED
	FBlackboardKeySelector                             TargetedPlayerKeySelector;                                  // 0x0088   (0x0028)  
	FBlackboardKeySelector                             MaxLocationErrorKeySelector;                                // 0x00B0   (0x0028)  
	FBlackboardKeySelector                             MinLocationErrorKeySelector;                                // 0x00D8   (0x0028)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0100   (0x0008)  MISSED
};

/// Class /Script/FortniteAIServer.FortAthenaBTDecorator_BehaviorControls
/// Size: 0x0008 (0x000068 - 0x000070)
class UFortAthenaBTDecorator_BehaviorControls : public UBTDecorator
{ 
public:
	EBehaviorTreeBranches                              BehaviorTreeBranch;                                         // 0x0068   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0069   (0x0007)  MISSED
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_AimDownSight
/// Size: 0x0030 (0x0000A8 - 0x0000D8)
class UFortAthenaAIBotEvaluator_AimDownSight : public UFortAthenaAIBotEvaluator
{ 
public:
	FName                                              WeaponKeyName;                                              // 0x00A8   (0x0004)  
	FName                                              ThrowableAttacksName;                                       // 0x00AC   (0x0004)  
	FName                                              TargetActorName;                                            // 0x00B0   (0x0004)  
	FName                                              UrgentMovementName;                                         // 0x00B4   (0x0004)  
	bool                                               bSkipTargetChecks;                                          // 0x00B8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x00B9   (0x0007)  MISSED
	class UFortAthenaAIBotAimingDigestedSkillSet*      CacheAimingDigestedSkillSet;                                // 0x00C0   (0x0008)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x00C8   (0x0010)  MISSED
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_Ambush
/// Size: 0x0068 (0x0001B0 - 0x000218)
class UFortAthenaAIBotEvaluator_Ambush : public UFortAthenaAIBotEvaluator_Movement
{ 
public:
	FName                                              LastKnownPositionName;                                      // 0x01B0   (0x0004)  
	FName                                              DestinationKeyName;                                         // 0x01B4   (0x0004)  
	FName                                              MoveToDestinationKeyName;                                   // 0x01B8   (0x0004)  
	FName                                              AggressivenessName;                                         // 0x01BC   (0x0004)  
	unsigned char                                      UnknownData00_6[0x58];                                      // 0x01C0   (0x0058)  MISSED


	/// Functions
	// Function /Script/FortniteAIServer.FortAthenaAIBotEvaluator_Ambush.OnAssignedPerksChangedEvent
	// void OnAssignedPerksChangedEvent();                                                                                   // [0x98df94c] Final|Native|Private 
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_AvoidThreat
/// Size: 0x0028 (0x0001B0 - 0x0001D8)
class UFortAthenaAIBotEvaluator_AvoidThreat : public UFortAthenaAIBotEvaluator_Movement
{ 
public:
	FName                                              AvoidThreatKeyName;                                         // 0x01B0   (0x0004)  
	FName                                              AvoidThreatMovementStateKeyName;                            // 0x01B4   (0x0004)  
	FName                                              AvoidThreatDestinationKeyName;                              // 0x01B8   (0x0004)  
	unsigned char                                      UnknownData00_5[0xC];                                       // 0x01BC   (0x000C)  MISSED
	class AActor*                                      CurrentThreatActorAvoiding;                                 // 0x01C8   (0x0008)  
	class UFortAthenaAIBotEvasiveManeuversDigestedSkillSet* CacheEMDigestedSkillSet;                               // 0x01D0   (0x0008)  
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_Bunker
/// Size: 0x00B8 (0x0001B0 - 0x000268)
class UFortAthenaAIBotEvaluator_Bunker : public UFortAthenaAIBotEvaluator_Movement
{ 
public:
	FName                                              BuildExecutionStatusKeyName;                                // 0x01B0   (0x0004)  
	FName                                              HealingStatusKeyName;                                       // 0x01B4   (0x0004)  
	FGameplayTagContainer                              DangerTags;                                                 // 0x01B8   (0x0020)  
	unsigned char                                      UnknownData00_6[0x90];                                      // 0x01D8   (0x0090)  MISSED


	/// Functions
	// Function /Script/FortniteAIServer.FortAthenaAIBotEvaluator_Bunker.OnAssignedPerksChangedEvent
	// void OnAssignedPerksChangedEvent();                                                                                   // [0x98df960] Final|Native|Private 
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_CanMove
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UFortAthenaAIBotEvaluator_CanMove : public UFortAthenaAIBotEvaluator
{ 
public:
	FName                                              CanMoveKeyName;                                             // 0x00A8   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00AC   (0x0004)  MISSED
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_CharacterLaunched
/// Size: 0x0048 (0x0000A8 - 0x0000F0)
class UFortAthenaAIBotEvaluator_CharacterLaunched : public UFortAthenaAIBotEvaluator
{ 
public:
	bool                                               bSteerInSameDirectionAsLaunchVelocity;                      // 0x00A8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00A9   (0x0003)  MISSED
	FName                                              CharacterLaunchedExecutionStatusKeyName;                    // 0x00AC   (0x0004)  
	FName                                              SteerDirectionKeyName;                                      // 0x00B0   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x00B4   (0x0004)  MISSED
	FVector                                            LastLaunchVelocity;                                         // 0x00B8   (0x0018)  
	class UFortAthenaAIBotMovementDigestedSkillSet*    CachedMovementSkillSet;                                     // 0x00D0   (0x0008)  
	float                                              LastZiplineTimestamp;                                       // 0x00D8   (0x0004)  
	unsigned char                                      UnknownData02_6[0x14];                                      // 0x00DC   (0x0014)  MISSED


	/// Functions
	// Function /Script/FortniteAIServer.FortAthenaAIBotEvaluator_CharacterLaunched.OnZiplineStateChanged
	// void OnZiplineStateChanged(bool bIsZiplining, class AFortPlayerPawn* FortPlayerPawn);                                 // [0x98dfee0] Final|Native|Private 
	// Function /Script/FortniteAIServer.FortAthenaAIBotEvaluator_CharacterLaunched.OnCharacterLaunchChanged
	// void OnCharacterLaunchChanged(class UFortMovementComp_Character* MovementComponent, FVector& LaunchVelocity);         // [0x98df988] Final|Native|Private|HasOutParms|HasDefaults 
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_Conversation
/// Size: 0x01B8 (0x0000A8 - 0x000260)
class UFortAthenaAIBotEvaluator_Conversation : public UFortAthenaAIBotEvaluator
{ 
public:
	FName                                              IsInConversationStateName;                                  // 0x00A8   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00AC   (0x0004)  MISSED
	TArray<FName>                                      ExecutionStatusesToCheckedToAvoidStoppingWhenNearActorNames; // 0x00B0   (0x0010)  
	unsigned char                                      UnknownData01_5[0x10];                                      // 0x00C0   (0x0010)  MISSED
	TArray<FName>                                      ExecutionStatusesToCheckForAllowToAvoidStoppingWhenNearActorNames; // 0x00D0   (0x0010)  
	unsigned char                                      UnknownData02_5[0x10];                                      // 0x00E0   (0x0010)  MISSED
	TArray<FName>                                      MovementStatusesToCheckedToAvoidStoppingWhenNearActorNames; // 0x00F0   (0x0010)  
	unsigned char                                      UnknownData03_5[0x10];                                      // 0x0100   (0x0010)  MISSED
	bool                                               bForceStopIfNoPlayerNearby;                                 // 0x0110   (0x0001)  
	unsigned char                                      UnknownData04_5[0x7];                                       // 0x0111   (0x0007)  MISSED
	FScalableFloat                                     HolsterWeaponOnConversationEnter;                           // 0x0118   (0x0028)  
	class UFortAthenaAIRuntimeParameters_Conversation* ConversationRuntimeParameters;                              // 0x0140   (0x0008)  
	class AActor*                                      ActorToFocus;                                               // 0x0148   (0x0008)  
	unsigned char                                      UnknownData05_6[0x110];                                     // 0x0150   (0x0110)  MISSED


	/// Functions
	// Function /Script/FortniteAIServer.FortAthenaAIBotEvaluator_Conversation.OnPlayerPawnSpawned
	// void OnPlayerPawnSpawned(class AAIController* Controller, class AFortPawn* Pawn);                                     // [0x98dfd60] Final|Native|Private 
};

/// Struct /Script/FortniteAIServer.MimicConverterAbilityData
/// Size: 0x0078 (0x000000 - 0x000078)
struct FMimicConverterAbilityData
{ 
	FGameplayTagQuery                                  RequiredConverterAbilityTags;                               // 0x0000   (0x0048)  
	FGameplayTagContainer                              AbilitiesToApply;                                           // 0x0048   (0x0020)  
	TArray<class UClass*>                              GEsToApply;                                                 // 0x0068   (0x0010)  
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_Converted
/// Size: 0x01D8 (0x0001B0 - 0x000388)
class UFortAthenaAIBotEvaluator_Converted : public UFortAthenaAIBotEvaluator_Movement
{ 
public:
	FName                                              ShouldMoveTowardsConverterName;                             // 0x01B0   (0x0004)  
	FName                                              ShouldTeleportTowardsConverterName;                         // 0x01B4   (0x0004)  
	FName                                              ConvertedAllowPatrolAroundName;                             // 0x01B8   (0x0004)  
	FName                                              ConvertedAllowScanAroundWhenWaitingName;                    // 0x01BC   (0x0004)  
	FName                                              ConvertedDestinationName;                                   // 0x01C0   (0x0004)  
	FName                                              CrouchExecutionStatusName;                                  // 0x01C4   (0x0004)  
	FVector                                            TeleportLocationProjectionExtent;                           // 0x01C8   (0x0018)  
	FVector                                            MovingFromLosLocationProjectionExtent;                      // 0x01E0   (0x0018)  
	FScalableFloat                                     AmountOfTimesNonHostilePawnNeedsToBeDamagedForTargeting;    // 0x01F8   (0x0028)  
	FScalableFloat                                     TimeToTrackDamagedActors;                                   // 0x0220   (0x0028)  
	FScalableFloat                                     NearbyPlayerDistanceForTeleportTowardsConverter;            // 0x0248   (0x0028)  
	FScalableFloat                                     PlayerFOVForNearbyPlayersVisibility;                        // 0x0270   (0x0028)  
	class UEnvQuery*                                   TeleportToConverterQueryTemplate;                           // 0x0298   (0x0008)  
	SDK_UNDEFINED(1,13978) /* TEnumAsByte<EEnvQueryRunMode> */ __um(TeleportToConverterRunMode);                   // 0x02A0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x02A1   (0x0007)  MISSED
	TArray<FMimicConverterAbilityData>                 AbilitiesToMimic;                                           // 0x02A8   (0x0010)  
	FGameplayTagQuery                                  RequiredTagQueryToTargetConverterDamagedPawn;               // 0x02B8   (0x0048)  
	unsigned char                                      UnknownData01_5[0x68];                                      // 0x0300   (0x0068)  MISSED
	class AFortPawn*                                   ConverterPawn;                                              // 0x0368   (0x0008)  
	class UFortAthenaAIRuntimeParameters_AIBotConvert* CachedAIBotConvertParameters;                               // 0x0370   (0x0008)  
	unsigned char                                      UnknownData02_6[0x10];                                      // 0x0378   (0x0010)  MISSED


	/// Functions
	// Function /Script/FortniteAIServer.FortAthenaAIBotEvaluator_Converted.OnUnconvertedEvent
	// void OnUnconvertedEvent(class AFortPawn* UnconvertedPawn, EUnconvertReason UnconvertReason);                          // [0x98dfe24] Final|Native|Protected 
	// Function /Script/FortniteAIServer.FortAthenaAIBotEvaluator_Converted.OnConvertedEvent
	// void OnConvertedEvent(class AFortPawn* InstigatorPawn, class AFortPawn* ConvertedPawn);                               // [0x98dfa90] Final|Native|Protected 
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_DanceOnKill
/// Size: 0x0028 (0x0000A8 - 0x0000D0)
class UFortAthenaAIBotEvaluator_DanceOnKill : public UFortAthenaAIBotEvaluator
{ 
public:
	FName                                              LastKillPositionKeyName;                                    // 0x00A8   (0x0004)  
	FName                                              LastKillTimeKeyName;                                        // 0x00AC   (0x0004)  
	FName                                              LastKillWasABotKeyName;                                     // 0x00B0   (0x0004)  
	FName                                              PlayEmoteExecutionStatusKeyName;                            // 0x00B4   (0x0004)  
	unsigned char                                      UnknownData00_5[0x10];                                      // 0x00B8   (0x0010)  MISSED
	class UFortAthenaAIBotEmoteDigestedSkillSet*       CacheEmoteDigestedSkillSet;                                 // 0x00C8   (0x0008)  
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_TagQuery
/// Size: 0x0050 (0x0000A8 - 0x0000F8)
class UFortAthenaAIBotEvaluator_TagQuery : public UFortAthenaAIBotEvaluator
{ 
public:
	FGameplayTagQuery                                  TagQuery;                                                   // 0x00A8   (0x0048)  
	class UAbilitySystemComponent*                     CachedAbilitySystemComponent;                               // 0x00F0   (0x0008)  
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_DangerDetection
/// Size: 0x0050 (0x0000F8 - 0x000148)
class UFortAthenaAIBotEvaluator_DangerDetection : public UFortAthenaAIBotEvaluator_TagQuery
{ 
public:
	unsigned char                                      UnknownData00_3[0x10];                                      // 0x00F8   (0x0010)  MISSED
	class UClass*                                      DangerNavAreaClass;                                         // 0x0108   (0x0008)  
	float                                              TimeToCheckForDangerAfterValidQuery;                        // 0x0110   (0x0004)  
	float                                              MaxRadiusToSearchForSafePlace;                              // 0x0114   (0x0004)  
	FName                                              DangerZoneDetectedExecutionStatusName;                      // 0x0118   (0x0004)  
	FName                                              DangerZoneDetectedSafeLocationKeyName;                      // 0x011C   (0x0004)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0120   (0x0008)  MISSED
	class UFortAthenaAIBotMovementDigestedSkillSet*    CachedMovementSkillSet;                                     // 0x0128   (0x0008)  
	class UAthenaAIServiceZoneManager*                 CacheZoneManager;                                           // 0x0130   (0x0008)  
	unsigned char                                      UnknownData02_6[0x10];                                      // 0x0138   (0x0010)  MISSED
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_DBNO
/// Size: 0x0058 (0x0001B0 - 0x000208)
class UFortAthenaAIBotEvaluator_DBNO : public UFortAthenaAIBotEvaluator_Movement
{ 
public:
	FName                                              DBNODestinationKeyName;                                     // 0x01B0   (0x0004)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x01B4   (0x0002)  MISSED
	bool                                               bAllowReachSquadmates : 1;                                  // 0x01B6:0 (0x0001)  
	bool                                               bAllowReachSameFactionNPCs : 1;                             // 0x01B6:1 (0x0001)  
	unsigned char                                      UnknownData01_4[0x1];                                       // 0x01B7   (0x0001)  MISSED
	TArray<class AFortPlayerPawnAthena*>               AllyPawns;                                                  // 0x01B8   (0x0010)  
	FVector                                            CachedCurrentDestination;                                   // 0x01C8   (0x0018)  
	class UFortAthenaAIBotDBNODigestedSkillSet*        DBNOSkillSet;                                               // 0x01E0   (0x0008)  
	class UFortAthenaAICoverComponent*                 CachedCoverComponent;                                       // 0x01E8   (0x0008)  
	class UFortAthenaAIRuntimeParameters_DBNOBehavior* DBNOBehaviorRuntimeParameters;                              // 0x01F0   (0x0008)  
	unsigned char                                      UnknownData02_6[0x10];                                      // 0x01F8   (0x0010)  MISSED


	/// Functions
	// Function /Script/FortniteAIServer.FortAthenaAIBotEvaluator_DBNO.OnAllyPawnDBNOStateChanged
	// void OnAllyPawnDBNOStateChanged(class AFortPawn* InPlayer, bool bInIsDBNO);                                           // [0x98df884] Final|Native|Private 
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_DefensiveBuilding
/// Size: 0x0018 (0x0000A8 - 0x0000C0)
class UFortAthenaAIBotEvaluator_DefensiveBuilding : public UFortAthenaAIBotEvaluator
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x00A8   (0x0008)  MISSED
	class UFortAthenaAIBotBuildingDigestedSkillSet*    CachedBuildingDigestedSkillSet;                             // 0x00B0   (0x0008)  
	class UFortAthenaAIBotBuildingComponent*           CachedBuildingComponent;                                    // 0x00B8   (0x0008)  
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_Escape
/// Size: 0x0030 (0x0001B0 - 0x0001E0)
class UFortAthenaAIBotEvaluator_Escape : public UFortAthenaAIBotEvaluator_Movement
{ 
public:
	FGameplayTagContainer                              EscapeTags;                                                 // 0x01B0   (0x0020)  
	float                                              CooldownBetweenAggressivenessChanges;                       // 0x01D0   (0x0004)  
	FName                                              AggressivenessName;                                         // 0x01D4   (0x0004)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x01D8   (0x0008)  MISSED
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_EvasiveManeuvers
/// Size: 0x01E8 (0x0000A8 - 0x000290)
class UFortAthenaAIBotEvaluator_EvasiveManeuvers : public UFortAthenaAIBotEvaluator
{ 
public:
	unsigned char                                      UnknownData00_3[0xA8];                                      // 0x00A8   (0x00A8)  MISSED
	FName                                              CrouchExecutionStatusName;                                  // 0x0150   (0x0004)  
	FName                                              JumpExecutionStatusName;                                    // 0x0154   (0x0004)  
	FName                                              JetpackStrafeExecutionStatusName;                           // 0x0158   (0x0004)  
	FName                                              DodgeName;                                                  // 0x015C   (0x0004)  
	FName                                              DestinationKeyName;                                         // 0x0160   (0x0004)  
	FName                                              UrgentMoveKeyName;                                          // 0x0164   (0x0004)  
	unsigned char                                      UnknownData01_5[0xC];                                       // 0x0168   (0x000C)  MISSED
	bool                                               bDoCrouching;                                               // 0x0174   (0x0001)  
	bool                                               bDoDodging;                                                 // 0x0175   (0x0001)  
	bool                                               bDoJumping;                                                 // 0x0176   (0x0001)  
	bool                                               bDoJumpingDistanceCheck;                                    // 0x0177   (0x0001)  
	bool                                               bDoJetpackStrafing;                                         // 0x0178   (0x0001)  
	bool                                               bDoJetpackStrafingDistanceCheck;                            // 0x0179   (0x0001)  
	unsigned char                                      UnknownData02_5[0x2];                                       // 0x017A   (0x0002)  MISSED
	float                                              JetpackStrafingRequiredFuelPercent;                         // 0x017C   (0x0004)  
	float                                              JetpackStrafeNavPadding;                                    // 0x0180   (0x0004)  
	unsigned char                                      UnknownData03_5[0x4];                                       // 0x0184   (0x0004)  MISSED
	FGameplayTagQuery                                  RequiredTagQuery;                                           // 0x0188   (0x0048)  
	FGameplayTagQuery                                  JetpackRequiredTagQuery;                                    // 0x01D0   (0x0048)  
	FGameplayTagQuery                                  JumpRequiredTagQuery;                                       // 0x0218   (0x0048)  
	class UClass*                                      ForcedPerkClass;                                            // 0x0260   (0x0008)  
	class UFortAthenaAIBotEvasiveManeuversDigestedSkillSet* CacheEMDigestedSkillSet;                               // 0x0268   (0x0008)  
	class UFortAIControllerPerksComponent*             CachedPerksComponent;                                       // 0x0270   (0x0008)  
	unsigned char                                      UnknownData04_6[0x18];                                      // 0x0278   (0x0018)  MISSED


	/// Functions
	// Function /Script/FortniteAIServer.FortAthenaAIBotEvaluator_EvasiveManeuvers.OnMoveCompleted
	// void OnMoveCompleted(FAIRequestID RequestID, TEnumAsByte<EPathFollowingResult> MovementResult);                       // [0x98dfb50] Final|Native|Public  
	// Function /Script/FortniteAIServer.FortAthenaAIBotEvaluator_EvasiveManeuvers.OnAssignedPerksChangedEvent
	// void OnAssignedPerksChangedEvent();                                                                                   // [0x98df974] Final|Native|Private 
};

/// Struct /Script/FortniteAIServer.FlankingLocationInfo
/// Size: 0x0020 (0x000000 - 0x000020)
struct FFlankingLocationInfo
{ 
	unsigned char                                      UnknownData00_2[0x20];                                      // 0x0000   (0x0020)  MISSED
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_Flanking
/// Size: 0x0078 (0x0001B0 - 0x000228)
class UFortAthenaAIBotEvaluator_Flanking : public UFortAthenaAIBotEvaluator_Movement
{ 
public:
	class AFortAIDirector*                             CachedAIDirector;                                           // 0x01B0   (0x0008)  
	class UFortAthenaAIBotRangeAttackDigestedSkillSet* CachedRangeAttackDigestedSkillSet;                          // 0x01B8   (0x0008)  
	FName                                              FlankingExecutionStatusKeyName;                             // 0x01C0   (0x0004)  
	FName                                              FlankingMovementStateKeyName;                               // 0x01C4   (0x0004)  
	FName                                              FlankingDestinationKeyName;                                 // 0x01C8   (0x0004)  
	unsigned char                                      UnknownData00_5[0xC];                                       // 0x01CC   (0x000C)  MISSED
	TArray<FFlankingLocationInfo>                      LocationsToEvaluate;                                        // 0x01D8   (0x0010)  
	TArray<FFlankingLocationInfo>                      BestLocations;                                              // 0x01E8   (0x0010)  
	SDK_UNDEFINED(16,13979) /* TArray<TWeakObjectPtr<AActor*>> */ __um(ActorsInArea);                              // 0x01F8   (0x0010)  
	unsigned char                                      UnknownData01_6[0x20];                                      // 0x0208   (0x0020)  MISSED
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_Flee
/// Size: 0x0038 (0x0001B0 - 0x0001E8)
class UFortAthenaAIBotEvaluator_Flee : public UFortAthenaAIBotEvaluator_Movement
{ 
public:
	float                                              MinDistanceFromTarget;                                      // 0x01B0   (0x0004)  
	float                                              MinValidDistanceForFleeLocation;                            // 0x01B4   (0x0004)  
	float                                              FleeDistance;                                               // 0x01B8   (0x0004)  
	float                                              MaxDistanceFromTargetWhenFleeing;                           // 0x01BC   (0x0004)  
	float                                              MinDistanceHysteresisWhenChangingTarget;                    // 0x01C0   (0x0004)  
	FName                                              FleeKeyName;                                                // 0x01C4   (0x0004)  
	FName                                              FleeMovementStateKeyName;                                   // 0x01C8   (0x0004)  
	FName                                              FleeDestinationKeyName;                                     // 0x01CC   (0x0004)  
	FName                                              FleeActorKeyName;                                           // 0x01D0   (0x0004)  
	unsigned char                                      UnknownData00_5[0xC];                                       // 0x01D4   (0x000C)  MISSED
	class AActor*                                      CurrentActorFleeingFrom;                                    // 0x01E0   (0x0008)  
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_FreeFalling
/// Size: 0x0108 (0x0000A8 - 0x0001B0)
class UFortAthenaAIBotEvaluator_FreeFalling : public UFortAthenaAIBotEvaluator
{ 
public:
	FName                                              DiveExecutionStatusKeyName;                                 // 0x00A8   (0x0004)  
	FName                                              DiveDestinationKeyName;                                     // 0x00AC   (0x0004)  
	FName                                              GlideExecutionStatusKeyName;                                // 0x00B0   (0x0004)  
	FName                                              GlideDestinationKeyName;                                    // 0x00B4   (0x0004)  
	FName                                              JumpOffBusDestinationName;                                  // 0x00B8   (0x0004)  
	unsigned char                                      UnknownData00_5[0xA];                                       // 0x00BC   (0x000A)  MISSED
	bool                                               bRandomlySelectFreeFallingMode;                             // 0x00C6   (0x0001)  
	unsigned char                                      UnknownData01_5[0x1];                                       // 0x00C7   (0x0001)  MISSED
	FScalableFloat                                     IdleWeight;                                                 // 0x00C8   (0x0028)  
	FScalableFloat                                     RandomWeight;                                               // 0x00F0   (0x0028)  
	FScalableFloat                                     TowardNearestAllyWeight;                                    // 0x0118   (0x0028)  
	EFreeFallingMode                                   FreeFallingMode;                                            // 0x0140   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0141   (0x0003)  MISSED
	float                                              MaxOffsetRangeFromNearestAlly;                              // 0x0144   (0x0004)  
	bool                                               bShouldRecomputeDestinationWhenTowardNearestAlly : 1;       // 0x0148:0 (0x0001)  
	bool                                               bShouldSearchAllyInSquad : 1;                               // 0x0148:1 (0x0001)  
	bool                                               bShouldSearchAllyInTeam : 1;                                // 0x0148:2 (0x0001)  
	bool                                               bGlideAllowed : 1;                                          // 0x0148:3 (0x0001)  
	unsigned char                                      UnknownData03_4[0x3];                                       // 0x0149   (0x0003)  MISSED
	float                                              SkyTubeDivingStuckTimeThreshold;                            // 0x014C   (0x0004)  
	unsigned char                                      UnknownData04_5[0x20];                                      // 0x0150   (0x0020)  MISSED
	class AFortPlayerStateAthena*                      NearestAlly;                                                // 0x0170   (0x0008)  
	FVector                                            CachedLatestDestination;                                    // 0x0178   (0x0018)  
	class UFortAthenaAIBotMovementDigestedSkillSet*    CacheMovementDigestedSkillSet;                              // 0x0190   (0x0008)  
	unsigned char                                      UnknownData05_5[0x8];                                       // 0x0198   (0x0008)  MISSED
	class AFortSkyTube*                                CachedSkyTube;                                              // 0x01A0   (0x0008)  
	unsigned char                                      UnknownData06_6[0x8];                                       // 0x01A8   (0x0008)  MISSED
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_Ground
/// Size: 0x0090 (0x0000A8 - 0x000138)
class UFortAthenaAIBotEvaluator_Ground : public UFortAthenaAIBotEvaluator
{ 
public:
	FVector                                            SurfaceTypeRaycastDir;                                      // 0x00A8   (0x0018)  
	unsigned char                                      UnknownData00_5[0x70];                                      // 0x00C0   (0x0070)  MISSED
	class UFortAthenaAIRuntimeParameters_Behavior*     CachedBehaviorRuntimeParameters;                            // 0x0130   (0x0008)  
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_HandleFocusing
/// Size: 0x00A8 (0x0000A8 - 0x000150)
class UFortAthenaAIBotEvaluator_HandleFocusing : public UFortAthenaAIBotEvaluator
{ 
public:
	FName                                              TargetActorName;                                            // 0x00A8   (0x0004)  
	FName                                              InteractActorName;                                          // 0x00AC   (0x0004)  
	FName                                              TargetLocationName;                                         // 0x00B0   (0x0004)  
	FName                                              FocusActorName;                                             // 0x00B4   (0x0004)  
	FName                                              FocalPointName;                                             // 0x00B8   (0x0004)  
	FName                                              WeaponFireName;                                             // 0x00BC   (0x0004)  
	FName                                              RangeAttackIsReadyToFireName;                               // 0x00C0   (0x0004)  
	FName                                              WeaponTriggerMeleeName;                                     // 0x00C4   (0x0004)  
	FName                                              LastKnownPositionName;                                      // 0x00C8   (0x0004)  
	FName                                              TacticalSprintExecutionStatusName;                          // 0x00CC   (0x0004)  
	unsigned char                                      UnknownData00_5[0x14];                                      // 0x00D0   (0x0014)  MISSED
	EFocusingBehavior                                  FocusingBehavior;                                           // 0x00E4   (0x0001)  
	EFocusingBehavior                                  NoRangedWeaponFocusBehavior;                                // 0x00E5   (0x0001)  
	bool                                               bPrioritizeThreatOverCurrentTarget;                         // 0x00E6   (0x0001)  
	bool                                               bUseTargetActorKeyAsFocusTarget;                            // 0x00E7   (0x0001)  
	bool                                               bFocusOnTargetLocation;                                     // 0x00E8   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x00E9   (0x0003)  MISSED
	float                                              AmbushMaxLKPLookAtAngleDegree;                              // 0x00EC   (0x0004)  
	bool                                               bStopFocusingWhenMoving;                                    // 0x00F0   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x00F1   (0x0003)  MISSED
	float                                              ResumeFocusingWhenMovingDist;                               // 0x00F4   (0x0004)  
	float                                              StopFocusingWhenMovingDist;                                 // 0x00F8   (0x0004)  
	bool                                               bResumeFocusWhileSliding;                                   // 0x00FC   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x00FD   (0x0003)  MISSED
	class UFortAthenaAIBotAimingDigestedSkillSet*      CacheAimingDigestedSkillSet;                                // 0x0100   (0x0008)  
	class UFortAthenaAIBotMovementDigestedSkillSet*    CacheMovementDigestedSkillSet;                              // 0x0108   (0x0008)  
	class AActor*                                      LastTargetedThreat;                                         // 0x0110   (0x0008)  
	unsigned char                                      UnknownData04_5[0x8];                                       // 0x0118   (0x0008)  MISSED
	class AActor*                                      FocusActor;                                                 // 0x0120   (0x0008)  
	unsigned char                                      UnknownData05_6[0x28];                                      // 0x0128   (0x0028)  MISSED
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_Heal
/// Size: 0x0078 (0x0000A8 - 0x000120)
class UFortAthenaAIBotEvaluator_Heal : public UFortAthenaAIBotEvaluator
{ 
public:
	FName                                              HealingObjectKeyName;                                       // 0x00A8   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00AC   (0x0004)  MISSED
	FName                                              CanHealWhileMovingKeyName;                                  // 0x00B0   (0x0004)  
	unsigned char                                      UnknownData01_5[0xC];                                       // 0x00B4   (0x000C)  MISSED
	FGameplayTagQuery                                  RequiredTagQuery;                                           // 0x00C0   (0x0048)  
	bool                                               bAllowEvaluationRetry;                                      // 0x0108   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x0109   (0x0007)  MISSED
	class UFortAthenaAIBotHealingDigestedSkillSet*     HealingSkillSet;                                            // 0x0110   (0x0008)  
	unsigned char                                      UnknownData03_6[0x8];                                       // 0x0118   (0x0008)  MISSED


	/// Functions
	// Function /Script/FortniteAIServer.FortAthenaAIBotEvaluator_Heal.HandlePlayerHealthOrShieldChanged
	// void HandlePlayerHealthOrShieldChanged();                                                                             // [0x98fb114] Final|Native|Private 
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_HitAndRun
/// Size: 0x00F8 (0x0001B0 - 0x0002A8)
class UFortAthenaAIBotEvaluator_HitAndRun : public UFortAthenaAIBotEvaluator_Movement
{ 
public:
	FScalableFloat                                     AttackDurationBeforeEvade;                                  // 0x01B0   (0x0028)  
	FScalableFloat                                     MeleeAttackMaxDistToEvade;                                  // 0x01D8   (0x0028)  
	FScalableFloat                                     ClampEvadeDistanceEnable;                                   // 0x0200   (0x0028)  
	FScalableFloat                                     MinDistanceToEvade;                                         // 0x0228   (0x0028)  
	FScalableFloat                                     MaxDistanceToEvade;                                         // 0x0250   (0x0028)  
	FName                                              EvadeKeyName;                                               // 0x0278   (0x0004)  
	FName                                              EvadeMovementStateKeyName;                                  // 0x027C   (0x0004)  
	FName                                              EvadeDestinationKeyName;                                    // 0x0280   (0x0004)  
	FName                                              WeaponTriggerMeleeName;                                     // 0x0284   (0x0004)  
	unsigned char                                      UnknownData00_5[0x10];                                      // 0x0288   (0x0010)  MISSED
	float                                              MeleeAttackMaxDistToEvadeSqr;                               // 0x0298   (0x0004)  
	float                                              MaxDistanceToEvadeSqr;                                      // 0x029C   (0x0004)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x02A0   (0x0008)  MISSED
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_HolsterWeapon
/// Size: 0x0030 (0x0000A8 - 0x0000D8)
class UFortAthenaAIBotEvaluator_HolsterWeapon : public UFortAthenaAIBotEvaluator
{ 
public:
	TArray<FName>                                      ExecutionStatusesToCheckedNames;                            // 0x00A8   (0x0010)  
	unsigned char                                      UnknownData00_5[0x10];                                      // 0x00B8   (0x0010)  MISSED
	class UFortAthenaAIRuntimeParameters_NPCBehavior*  CachedNPCBehaviorParameters;                                // 0x00C8   (0x0008)  
	class UFortAthenaAIRuntimeParameters_AIBotConvert* CachedConvertParameters;                                    // 0x00D0   (0x0008)  
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_Investigate
/// Size: 0x00C0 (0x0001B0 - 0x000270)
class UFortAthenaAIBotEvaluator_Investigate : public UFortAthenaAIBotEvaluator_Movement
{ 
public:
	FName                                              LastKnownPositionName;                                      // 0x01B0   (0x0004)  
	FName                                              DestinationKeyName;                                         // 0x01B4   (0x0004)  
	FName                                              MoveToDestinationKeyName;                                   // 0x01B8   (0x0004)  
	FName                                              AggressivenessName;                                         // 0x01BC   (0x0004)  
	FName                                              CautiousKeyName;                                            // 0x01C0   (0x0004)  
	FName                                              AlertLevelName;                                             // 0x01C4   (0x0004)  
	class UClass*                                      SearchQueryFilterClass;                                     // 0x01C8   (0x0008)  
	unsigned char                                      UnknownData00_5[0x10];                                      // 0x01D0   (0x0010)  MISSED
	class UFortAthenaAIBotAimingDigestedSkillSet*      CacheAimingDigestedSkillSet;                                // 0x01E0   (0x0008)  
	class UFortAthenaAIBotAttackingDigestedSkillSet*   CacheAttackingDigestedSkillSet;                             // 0x01E8   (0x0008)  
	class UFortAthenaAIBotUnstuckDigestedSkillSet*     CachedUnstuckSkillSet;                                      // 0x01F0   (0x0008)  
	unsigned char                                      UnknownData01_5[0x48];                                      // 0x01F8   (0x0048)  MISSED
	class AActor*                                      InvestigatingSupportingActor;                               // 0x0240   (0x0008)  
	class ABuildingSMActor*                            UnderminingBuildingActor;                                   // 0x0248   (0x0008)  
	class AActor*                                      ExcludeReachingTarget;                                      // 0x0250   (0x0008)  
	unsigned char                                      UnknownData02_6[0x18];                                      // 0x0258   (0x0018)  MISSED
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_JumpOffBus
/// Size: 0x0048 (0x0000A8 - 0x0000F0)
class UFortAthenaAIBotEvaluator_JumpOffBus : public UFortAthenaAIBotEvaluator
{ 
public:
	FName                                              JumpOffBusDestinationName;                                  // 0x00A8   (0x0004)  
	FName                                              JumpOffBusDestinationVolumeKeyName;                         // 0x00AC   (0x0004)  
	unsigned char                                      UnknownData00_5[0x20];                                      // 0x00B0   (0x0020)  MISSED
	class AFortPoiVolume*                              BusDroppingVolume;                                          // 0x00D0   (0x0008)  
	class AFortGameStateAthena*                        CachedAthenaGameState;                                      // 0x00D8   (0x0008)  
	class UFortAthenaAIBotMovementDigestedSkillSet*    CacheMovementDigestedSkillSet;                              // 0x00E0   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x00E8   (0x0008)  MISSED
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_MeleeAttack
/// Size: 0x0040 (0x0001C8 - 0x000208)
class UFortAthenaAIBotEvaluator_MeleeAttack : public UFortAthenaAIBotEvaluator_Attack
{ 
public:
	unsigned char                                      UnknownData00_3[0x4];                                       // 0x01C8   (0x0004)  MISSED
	FName                                              WeaponTriggerMeleeName;                                     // 0x01CC   (0x0004)  
	FName                                              ThrowableAttacksAllowedName;                                // 0x01D0   (0x0004)  
	FName                                              TraversalBlockMeleeAttackName;                              // 0x01D4   (0x0004)  
	FName                                              TargetContextReachableKeyName;                              // 0x01D8   (0x0004)  
	FName                                              TargetContextInsideLeashKeyName;                            // 0x01DC   (0x0004)  
	unsigned char                                      UnknownData01_5[0x18];                                      // 0x01E0   (0x0018)  MISSED
	class UFortAthenaAIBotAttackingDigestedSkillSet*   AttackingSkillSet;                                          // 0x01F8   (0x0008)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x0200   (0x0008)  MISSED
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_Observe
/// Size: 0x0020 (0x0000A8 - 0x0000C8)
class UFortAthenaAIBotEvaluator_Observe : public UFortAthenaAIBotEvaluator
{ 
public:
	FName                                              AggressivenessName;                                         // 0x00A8   (0x0004)  
	FName                                              ObserveDestinationKeyName;                                  // 0x00AC   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00B0   (0x0004)  MISSED
	bool                                               bContinueMovementOnStart;                                   // 0x00B4   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x00B5   (0x0003)  MISSED
	float                                              MaxMovementDuration;                                        // 0x00B8   (0x0004)  
	unsigned char                                      UnknownData02_6[0xC];                                       // 0x00BC   (0x000C)  MISSED
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_PathExists
/// Size: 0x0020 (0x0000A8 - 0x0000C8)
class UFortAthenaAIBotEvaluator_PathExists : public UFortAthenaAIBotEvaluator
{ 
public:
	FName                                              PathExistsKeyName;                                          // 0x00A8   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00AC   (0x0004)  MISSED
	FName                                              GoalKeyName;                                                // 0x00B0   (0x0004)  
	float                                              AcceptableRadius;                                           // 0x00B4   (0x0004)  
	class UClass*                                      FilterClass;                                                // 0x00B8   (0x0008)  
	SDK_UNDEFINED(1,13980) /* TEnumAsByte<EPathTestQueryType> */ __um(PathQueryType);                              // 0x00C0   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x00C1   (0x0003)  MISSED
	bool                                               bProjectGoalLocation : 1;                                   // 0x00C4:0 (0x0001)  
	bool                                               bReachTestIncludesAgentRadius : 1;                          // 0x00C4:1 (0x0001)  
	bool                                               bReachTestIncludesGoalRadius : 1;                           // 0x00C4:2 (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x00C5   (0x0003)  MISSED
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_PatrolAround
/// Size: 0x0098 (0x0001B0 - 0x000248)
class UFortAthenaAIBotEvaluator_PatrolAround : public UFortAthenaAIBotEvaluator_Movement
{ 
public:
	FEQSParametrizedQueryExecutionRequest              EQSRequest;                                                 // 0x01B0   (0x0048)  
	class UClass*                                      NavigationQueryFilterClass;                                 // 0x01F8   (0x0008)  
	bool                                               bFallbackToPointWithNoCustomNavigationQueryFilter;          // 0x0200   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0201   (0x0003)  MISSED
	FName                                              PatrolDestinationName;                                      // 0x0204   (0x0004)  
	FName                                              PatrolExecutionStatusName;                                  // 0x0208   (0x0004)  
	FName                                              PatrolMovementStateName;                                    // 0x020C   (0x0004)  
	FName                                              BestTargetActorName;                                        // 0x0210   (0x0004)  
	FName                                              EnableKeyName;                                              // 0x0214   (0x0004)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0218   (0x0008)  MISSED
	class AFortGameModeAthena*                         CacheAthenaGameMode;                                        // 0x0220   (0x0008)  
	unsigned char                                      UnknownData02_6[0x20];                                      // 0x0228   (0x0020)  MISSED
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_PlayEmote
/// Size: 0x0020 (0x0001B0 - 0x0001D0)
class UFortAthenaAIBotEvaluator_PlayEmote : public UFortAthenaAIBotEvaluator_Movement
{ 
public:
	FName                                              PlayEmoteExecutionStatusKeyName;                            // 0x01B0   (0x0004)  
	FName                                              PlayEmoteDestinationKeyName;                                // 0x01B4   (0x0004)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x01B8   (0x0008)  MISSED
	class AActor*                                      ExcludeReachingTarget;                                      // 0x01C0   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x01C8   (0x0008)  MISSED
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_PropagateAwareness
/// Size: 0x0088 (0x0000A8 - 0x000130)
class UFortAthenaAIBotEvaluator_PropagateAwareness : public UFortAthenaAIBotEvaluator
{ 
public:
	FGameplayTagQuery                                  AwarenessTagQuery;                                          // 0x00A8   (0x0048)  
	class UClass*                                      AwarenessGameplayEffectClass;                               // 0x00F0   (0x0008)  
	TArray<class AFortPlayerPawnAthena*>               AwareAllyPawns;                                             // 0x00F8   (0x0010)  
	TArray<class AFortPlayerPawnAthena*>               AlreadyTestedPawns;                                         // 0x0108   (0x0010)  
	class UFortAthenaAIBotPropagateAwarenessDigestedSkillSet* PropagateAwarenessSkillSet;                          // 0x0118   (0x0008)  
	class UFortAthenaAIRuntimeParameters_BehaviorTreeControl* BehaviorControlsRuntimeParameters;                   // 0x0120   (0x0008)  
	class UFortAthenaAIRuntimeParameters_AffiliationBase* AffiliationRuntimeParameters;                            // 0x0128   (0x0008)  
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_RangeAttack
/// Size: 0x0170 (0x0001C8 - 0x000338)
class UFortAthenaAIBotEvaluator_RangeAttack : public UFortAthenaAIBotEvaluator_Attack
{ 
public:
	unsigned char                                      UnknownData00_3[0x38];                                      // 0x01C8   (0x0038)  MISSED
	FName                                              WeaponReloadName;                                           // 0x0200   (0x0004)  
	FName                                              WeaponFireName;                                             // 0x0204   (0x0004)  
	FName                                              RangeAttackIsReadyToFireName;                               // 0x0208   (0x0004)  
	FName                                              WeaponTargetingName;                                        // 0x020C   (0x0004)  
	FName                                              AggressivenessName;                                         // 0x0210   (0x0004)  
	FName                                              HasLoSOnThreatName;                                         // 0x0214   (0x0004)  
	FName                                              UrgentMovementKeyName;                                      // 0x0218   (0x0004)  
	unsigned char                                      UnknownData01_5[0xE];                                       // 0x021C   (0x000E)  MISSED
	bool                                               bAlwaysAllowTargetingEvaluation;                            // 0x022A   (0x0001)  
	bool                                               bSkipADSEvaluation;                                         // 0x022B   (0x0001)  
	bool                                               bConsiderLoF;                                               // 0x022C   (0x0001)  
	bool                                               bShouldValidateRangedWeapon;                                // 0x022D   (0x0001)  
	unsigned char                                      UnknownData02_5[0x2];                                       // 0x022E   (0x0002)  MISSED
	float                                              RangeReachHysteresisRatio;                                  // 0x0230   (0x0004)  
	unsigned char                                      UnknownData03_5[0x1C];                                      // 0x0234   (0x001C)  MISSED
	class UFortAthenaAIBotRangeAttackDigestedSkillSet* CacheRangeAttackDigestedSkillSet;                           // 0x0250   (0x0008)  
	class UFortAthenaAIBotAimingDigestedSkillSet*      CacheAimingDigestedSkillSet;                                // 0x0258   (0x0008)  
	class UFortAthenaAIBotPerceptionDigestedSkillSet*  CachePerceptionDigestedSkillSet;                            // 0x0260   (0x0008)  
	class UFortAthenaAIBotAttackingDigestedSkillSet*   CacheAttackingDigestedSkillSet;                             // 0x0268   (0x0008)  
	SDK_UNDEFINED(8,13981) /* TWeakObjectPtr<UAthenaAIServiceZoneManager*> */ __um(CacheZoneManager);              // 0x0270   (0x0008)  
	SDK_UNDEFINED(8,13982) /* TWeakObjectPtr<UAthenaAIServiceCover*> */ __um(CachedAIServiceCover);                // 0x0278   (0x0008)  
	class AActor*                                      ExcludeReachingTarget;                                      // 0x0280   (0x0008)  
	unsigned char                                      UnknownData04_6[0xB0];                                      // 0x0288   (0x00B0)  MISSED


	/// Functions
	// Function /Script/FortniteAIServer.FortAthenaAIBotEvaluator_RangeAttack.FindShootingPosition_Async
	// void FindShootingPosition_Async(int32_t RequestID, float DistanceFromTarget, float WeaponIdealAttackRange, FVector& TargetPosition); // [0x98faf94] Final|Native|Protected|HasOutParms|HasDefaults 
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_ReachBeacon
/// Size: 0x0020 (0x0001B0 - 0x0001D0)
class UFortAthenaAIBotEvaluator_ReachBeacon : public UFortAthenaAIBotEvaluator_Movement
{ 
public:
	FName                                              ReachBeaconStatusKeyName;                                   // 0x01B0   (0x0004)  
	FName                                              ReachBeaconMovementStateKeyName;                            // 0x01B4   (0x0004)  
	FName                                              ReachBeaconTargetKeyName;                                   // 0x01B8   (0x0004)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x01BC   (0x0008)  MISSED
	SDK_UNDEFINED(8,13983) /* TWeakObjectPtr<UFortAthenaBeaconComponent*> */ __um(CurrentBeacon);                  // 0x01C4   (0x0008)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x01CC   (0x0004)  MISSED
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_ReactToVerb
/// Size: 0x0240 (0x0001B0 - 0x0003F0)
class UFortAthenaAIBotEvaluator_ReactToVerb : public UFortAthenaAIBotEvaluator_Movement
{ 
public:
	unsigned char                                      UnknownData00_3[0x68];                                      // 0x01B0   (0x0068)  MISSED
	class UFortAthenaAIBotReactToVerbDigestedSkillSet* CacheReactToVerbDigestedSkillSet;                           // 0x0218   (0x0008)  
	class UDataTable*                                  VerbReactions;                                              // 0x0220   (0x0008)  
	FScalableFloat                                     MinDistanceFromPlayerToReact;                               // 0x0228   (0x0028)  
	FScalableFloat                                     MaxReactionEmoteDuration;                                   // 0x0250   (0x0028)  
	FScalableFloat                                     MaxReactionWaitTime;                                        // 0x0278   (0x0028)  
	FFortNearbyActorsPerceptionConfiguration           PerceptionConfiguration;                                    // 0x02A0   (0x00D0)  
	bool                                               bIsHighPriorityEvaluator;                                   // 0x0370   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0371   (0x0007)  MISSED
	FScalableFloat                                     ReactToEmotes;                                              // 0x0378   (0x0028)  
	FName                                              ReactToVerbTargetActorKeyName;                              // 0x03A0   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x03A4   (0x0004)  MISSED
	FName                                              ReactToVerbShouldMoveKeyName;                               // 0x03A8   (0x0004)  
	unsigned char                                      UnknownData03_5[0x4];                                       // 0x03AC   (0x0004)  MISSED
	FName                                              GameplayEffectReactionKeyName;                              // 0x03B0   (0x0004)  
	unsigned char                                      UnknownData04_5[0x2C];                                      // 0x03B4   (0x002C)  MISSED
	FPersistenceFrameworkSaveControl                   SaveControl;                                                // 0x03E0   (0x0010)  


	/// Functions
	// Function /Script/FortniteAIServer.FortAthenaAIBotEvaluator_ReactToVerb.HandlePawnStoppedEmote
	// void HandlePawnStoppedEmote(class UFortItemDefinition* MontageItemDef, class AFortPawn* PawnEmoting);                 // [0x6cbaff4] Final|Native|Protected 
	// Function /Script/FortniteAIServer.FortAthenaAIBotEvaluator_ReactToVerb.HandlePawnStartedEmote
	// void HandlePawnStartedEmote(class UFortItemDefinition* MontageItemDef, class AFortPawn* PawnEmoting);                 // [0x6cbaff4] Final|Native|Protected 
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_RecoverLineOfSight
/// Size: 0x0068 (0x0001B0 - 0x000218)
class UFortAthenaAIBotEvaluator_RecoverLineOfSight : public UFortAthenaAIBotEvaluator_Movement
{ 
public:
	FScalableFloat                                     RecoveringLineOfSightMaxDuration;                           // 0x01B0   (0x0028)  
	TArray<FName>                                      ExecutionStatusToListenKeyNames;                            // 0x01D8   (0x0010)  
	FName                                              RecoverLineOfSightExecutionStatusKeyName;                   // 0x01E8   (0x0004)  
	FName                                              RecoverLineOfSightMovementStateKeyName;                     // 0x01EC   (0x0004)  
	FName                                              RecoverLineOfSightDestinationKeyName;                       // 0x01F0   (0x0004)  
	unsigned char                                      UnknownData00_6[0x24];                                      // 0x01F4   (0x0024)  MISSED
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_ReloadWeapon
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UFortAthenaAIBotEvaluator_ReloadWeapon : public UFortAthenaAIBotEvaluator
{ 
public:
	FName                                              WeaponKeyName;                                              // 0x00A8   (0x0004)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x00AC   (0x0002)  MISSED
	bool                                               bCanReloadWeaponsInInventory;                               // 0x00AE   (0x0001)  
	unsigned char                                      UnknownData01_6[0x1];                                       // 0x00AF   (0x0001)  MISSED
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_Retreat
/// Size: 0x0030 (0x0001B0 - 0x0001E0)
class UFortAthenaAIBotEvaluator_Retreat : public UFortAthenaAIBotEvaluator_Movement
{ 
public:
	FName                                              RetreatDestinationName;                                     // 0x01B0   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x01B4   (0x0004)  MISSED
	class UFortAthenaAIBotAttackingDigestedSkillSet*   CacheAttackingDigestedSkillSet;                             // 0x01B8   (0x0008)  
	class UFortAthenaAICoverComponent*                 CachedCoverComponent;                                       // 0x01C0   (0x0008)  
	unsigned char                                      UnknownData01_6[0x18];                                      // 0x01C8   (0x0018)  MISSED


	/// Functions
	// Function /Script/FortniteAIServer.FortAthenaAIBotEvaluator_Retreat.HandlePlayerHealthOrShieldChanged
	// void HandlePlayerHealthOrShieldChanged();                                                                             // [0x98fb128] Final|Native|Protected 
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_Revive
/// Size: 0x0068 (0x0001B0 - 0x000218)
class UFortAthenaAIBotEvaluator_Revive : public UFortAthenaAIBotEvaluator_Movement
{ 
public:
	FScalableFloat                                     LastReviveTargetExpiration;                                 // 0x01B0   (0x0028)  
	FName                                              ReviveTargetKeyName;                                        // 0x01D8   (0x0004)  
	FName                                              ReviveLastTargetKeyName;                                    // 0x01DC   (0x0004)  
	class UFortAthenaAIRuntimeParameters_ReviveBehavior* ReviveBehaviorRuntimeParameters;                          // 0x01E0   (0x0008)  
	class AFortPlayerPawnAthena*                       CurrentReviveTarget;                                        // 0x01E8   (0x0008)  
	TArray<class AFortPlayerPawnAthena*>               DBNOAllyPawns;                                              // 0x01F0   (0x0010)  
	class UFortAthenaAIBotReviveDigestedSkillSet*      ReviveSkillSet;                                             // 0x0200   (0x0008)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0208   (0x0010)  MISSED


	/// Functions
	// Function /Script/FortniteAIServer.FortAthenaAIBotEvaluator_Revive.OnCurrentTargetRevived
	// void OnCurrentTargetRevived(class AFortPlayerPawn* RevivedPawn);                                                      // [0x98fb318] Final|Native|Private 
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_SandTunnel
/// Size: 0x0078 (0x0000F8 - 0x000170)
class UFortAthenaAIBotEvaluator_SandTunnel : public UFortAthenaAIBotEvaluator_TagQuery
{ 
public:
	FName                                              JumpExecutionStatusName;                                    // 0x00F8   (0x0004)  
	FName                                              LootInteractionExecutionStatusName;                         // 0x00FC   (0x0004)  
	FName                                              WeaponTriggerMeleeName;                                     // 0x0100   (0x0004)  
	FName                                              WeaponFireName;                                             // 0x0104   (0x0004)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0108   (0x0008)  MISSED
	FGameplayTagQuery                                  BuriedTagQuery;                                             // 0x0110   (0x0048)  
	class UFortAthenaAIBotMovementDigestedSkillSet*    CacheMovementDigestedSkillSet;                              // 0x0158   (0x0008)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x0160   (0x0010)  MISSED


	/// Functions
	// Function /Script/FortniteAIServer.FortAthenaAIBotEvaluator_SandTunnel.OnBotControllerAlertLevelChanged
	// void OnBotControllerAlertLevelChanged(class AFortAthenaAIBotController* BotController, EAlertLevel OldAlertLevel, EAlertLevel NewAlertLevel); // [0x98fb214] Final|Native|Private 
	// Function /Script/FortniteAIServer.FortAthenaAIBotEvaluator_SandTunnel.Jump
	// void Jump();                                                                                                          // [0x98fb13c] Final|Native|Protected 
};

/// Struct /Script/FortniteAIServer.FailedToReachPOI
/// Size: 0x0008 (0x000000 - 0x000008)
struct FFailedToReachPOI
{ 
	int32_t                                            BotPOIID;                                                   // 0x0000   (0x0004)  
	int32_t                                            FailCount;                                                  // 0x0004   (0x0004)  
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_SelectNextDynamicPOI
/// Size: 0x0078 (0x0001B0 - 0x000228)
class UFortAthenaAIBotEvaluator_SelectNextDynamicPOI : public UFortAthenaAIBotEvaluator_Movement
{ 
public:
	FName                                              DynamicPOIExecutionStatusKeyName;                           // 0x01B0   (0x0004)  
	FName                                              DynamicPOILocationKeyName;                                  // 0x01B4   (0x0004)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x01B8   (0x0008)  MISSED
	class AFortTeamInfoAthena*                         CachedTeamInfo;                                             // 0x01C0   (0x0008)  
	class UFortGameStateComponent_BattleRoyaleGamePhaseLogic* CachedGamePhaseLogic;                                // 0x01C8   (0x0008)  
	unsigned char                                      UnknownData01_5[0x38];                                      // 0x01D0   (0x0038)  MISSED
	FTimerHandle                                       NextSearchTimerHandle;                                      // 0x0208   (0x0008)  
	TArray<FFailedToReachPOI>                          FailedBotPOIList;                                           // 0x0210   (0x0010)  
	int32_t                                            CachedSelectedBotPOIID;                                     // 0x0220   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0224   (0x0004)  MISSED


	/// Functions
	// Function /Script/FortniteAIServer.FortAthenaAIBotEvaluator_SelectNextDynamicPOI.ReachingPositionFail_Async
	// void ReachingPositionFail_Async(int32_t RequestID);                                                                   // [0x98fb4b4] Final|Native|Private 
	// Function /Script/FortniteAIServer.FortAthenaAIBotEvaluator_SelectNextDynamicPOI.OnSafeZonePhaseChanged
	// void OnSafeZonePhaseChanged(FFortSafeZonePhaseUpdatedEvent& Event);                                                   // [0x98fb424] Final|Native|Private|HasOutParms 
	// Function /Script/FortniteAIServer.FortAthenaAIBotEvaluator_SelectNextDynamicPOI.OnGamePhaseLogicReady
	// void OnGamePhaseLogicReady(FFortBattleRoyaleGamePhaseLogicComponentReadyEvent& Event);                                // [0x98fb398] Final|Native|Private|HasOutParms 
	// Function /Script/FortniteAIServer.FortAthenaAIBotEvaluator_SelectNextDynamicPOI.OnAgentDied
	// void OnAgentDied(class AFortAthenaAIBotController* BotController, class AFortPawn* FortPawn);                         // [0x98fb150] Final|Native|Protected 
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_SelectNextPOI
/// Size: 0x0038 (0x0001B0 - 0x0001E8)
class UFortAthenaAIBotEvaluator_SelectNextPOI : public UFortAthenaAIBotEvaluator_Movement
{ 
public:
	FName                                              NextPOIKeyName;                                             // 0x01B0   (0x0004)  
	FName                                              MarkerLocationKeyName;                                      // 0x01B4   (0x0004)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x01B8   (0x0008)  MISSED
	class AFortPoiVolume*                              StartingGroundPOI;                                          // 0x01C0   (0x0008)  
	bool                                               bCheckForStartingGroundPOI;                                 // 0x01C8   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x01C9   (0x0003)  MISSED
	float                                              CurrentPOICompletionTime;                                   // 0x01CC   (0x0004)  
	float                                              DurationInsideCurrentPOI;                                   // 0x01D0   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x01D4   (0x0004)  MISSED
	class AFortTeamInfoAthena*                         CachedTeamInfo;                                             // 0x01D8   (0x0008)  
	class UFortAthenaAIBotLootingDigestedSkillSet*     CachedLootingSkillSet;                                      // 0x01E0   (0x0008)  
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_SelectVehicle
/// Size: 0x00E0 (0x0001B0 - 0x000290)
class UFortAthenaAIBotEvaluator_SelectVehicle : public UFortAthenaAIBotEvaluator_Movement
{ 
public:
	FName                                              VehicleDestinationKeyName;                                  // 0x01B0   (0x0004)  
	FName                                              SelectVehicleMovementStateKeyName;                          // 0x01B4   (0x0004)  
	FName                                              SelectVehicleStatusKeyName;                                 // 0x01B8   (0x0004)  
	FName                                              SelectedVehicleKeyName;                                     // 0x01BC   (0x0004)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x01C0   (0x0008)  MISSED
	FScalableFloat                                     Enabled;                                                    // 0x01C8   (0x0028)  
	float                                              VehicleSearchRadius;                                        // 0x01F0   (0x0004)  
	bool                                               bCanEnterOnlyWithHisConverter;                              // 0x01F4   (0x0001)  
	bool                                               bCanEnterAsDriver;                                          // 0x01F5   (0x0001)  
	bool                                               bCanEnterVehiclesInWater;                                   // 0x01F6   (0x0001)  
	bool                                               bCanEnterOutOfFuelVehicles;                                 // 0x01F7   (0x0001)  
	bool                                               bCanEnterWithPlayerDriver;                                  // 0x01F8   (0x0001)  
	bool                                               bCanEnterOnlyMatchingPatrols;                               // 0x01F9   (0x0001)  
	unsigned char                                      UnknownData01_5[0x6];                                       // 0x01FA   (0x0006)  MISSED
	FGameplayTagQuery                                  VehiclesFilterTagQuery;                                     // 0x0200   (0x0048)  
	FGameplayTagQuery                                  SeatsFilterTagQuery;                                        // 0x0248   (0x0048)  
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_SmartObjects
/// Size: 0x00C8 (0x0001B0 - 0x000278)
class UFortAthenaAIBotEvaluator_SmartObjects : public UFortAthenaAIBotEvaluator_Movement
{ 
public:
	class UFortAthenaAIRuntimeParameters_SmartObjectBase* SmartObjectRuntimeParameters;                            // 0x01B0   (0x0008)  
	class USmartObjectSubsystem*                       SmartObjectSubsystem;                                       // 0x01B8   (0x0008)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x01C0   (0x0008)  MISSED
	FGameplayTag                                       EvaluationTag;                                              // 0x01C8   (0x0004)  
	bool                                               bEvaluateSOValidityAfterChosen;                             // 0x01CC   (0x0001)  
	bool                                               bEnableEntryLocationsSupport;                               // 0x01CD   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x01CE   (0x0002)  MISSED
	FScalableFloat                                     MaximumEntryLocationsChecksPerEvaluation;                   // 0x01D0   (0x0028)  
	FScalableFloat                                     EntryLocationFailuresBlacklistedTime;                       // 0x01F8   (0x0028)  
	class UCurveFloat*                                 DistanceToWeightCurveForSlotPicking;                        // 0x0220   (0x0008)  
	class UClass*                                      OverridenFilterClassForEntryPoints;                         // 0x0228   (0x0008)  
	TArray<FName>                                      ExecutionStatusesToCheckForAllowToAvoidGoingToSOKeyNames;   // 0x0230   (0x0010)  
	unsigned char                                      UnknownData02_5[0x10];                                      // 0x0240   (0x0010)  MISSED
	FName                                              SmartObjectExecutionStatusKeyName;                          // 0x0250   (0x0004)  
	FName                                              SmartObjectMovementStateKeyName;                            // 0x0254   (0x0004)  
	FName                                              SmartObjectDestinationKeyName;                              // 0x0258   (0x0004)  
	FName                                              SmartObjectDestinationRotationKeyName;                      // 0x025C   (0x0004)  
	FName                                              SmartObjectShouldMoveKeyName;                               // 0x0260   (0x0004)  
	FName                                              SmartObjectUrgencyKeyName;                                  // 0x0264   (0x0004)  
	unsigned char                                      UnknownData03_6[0x10];                                      // 0x0268   (0x0010)  MISSED
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_Sprinting
/// Size: 0x0080 (0x0000A8 - 0x000128)
class UFortAthenaAIBotEvaluator_Sprinting : public UFortAthenaAIBotEvaluator
{ 
public:
	FName                                              AllowSprintKeyName;                                         // 0x00A8   (0x0004)  
	FName                                              AllowSlideKeyName;                                          // 0x00AC   (0x0004)  
	FName                                              JumpExecutionStatusName;                                    // 0x00B0   (0x0004)  
	FName                                              TacticalSprintExecutionStatusName;                          // 0x00B4   (0x0004)  
	FName                                              SlideExecutionStatusName;                                   // 0x00B8   (0x0004)  
	FName                                              UrgentMovementKeyName;                                      // 0x00BC   (0x0004)  
	FName                                              RangeAttackExecutionStatusName;                             // 0x00C0   (0x0004)  
	FName                                              MeleeAttackExecutionStatusName;                             // 0x00C4   (0x0004)  
	FName                                              ThrowableAttackExecutionStatusName;                         // 0x00C8   (0x0004)  
	unsigned char                                      UnknownData00_5[0x12];                                      // 0x00CC   (0x0012)  MISSED
	bool                                               bSprintOnlyInWater;                                         // 0x00DE   (0x0001)  
	bool                                               bSprintOnlyInUrgentMode;                                    // 0x00DF   (0x0001)  
	class UFortAthenaAIBotMovementDigestedSkillSet*    MovementSkillSet;                                           // 0x00E0   (0x0008)  
	class UFortAthenaAIBotAimingDigestedSkillSet*      AimingSkillSet;                                             // 0x00E8   (0x0008)  
	float                                              TacticalSprintTriggerChance;                                // 0x00F0   (0x0004)  
	float                                              TacticalSprintTriggerChanceInUrgentMovement;                // 0x00F4   (0x0004)  
	float                                              TacticalSprintJumpTriggerChance;                            // 0x00F8   (0x0004)  
	unsigned char                                      UnknownData01_6[0x2C];                                      // 0x00FC   (0x002C)  MISSED
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_StealWall
/// Size: 0x00A8 (0x0000A8 - 0x000150)
class UFortAthenaAIBotEvaluator_StealWall : public UFortAthenaAIBotEvaluator
{ 
public:
	FName                                              StealWallBuildTypeName;                                     // 0x00A8   (0x0004)  
	FName                                              StealWallBuildGridCoordName;                                // 0x00AC   (0x0004)  
	FName                                              TargetActorName;                                            // 0x00B0   (0x0004)  
	unsigned char                                      UnknownData00_5[0xC];                                       // 0x00B4   (0x000C)  MISSED
	class UFortAthenaAIBotBuildingDigestedSkillSet*    CacheBuildingDigestedSkillSet;                              // 0x00C0   (0x0008)  
	class ABuildingActor*                              CurrentBuildingTarget;                                      // 0x00C8   (0x0008)  
	unsigned char                                      UnknownData01_6[0x80];                                      // 0x00D0   (0x0080)  MISSED
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_StepBack
/// Size: 0x0030 (0x0001B0 - 0x0001E0)
class UFortAthenaAIBotEvaluator_StepBack : public UFortAthenaAIBotEvaluator_Movement
{ 
public:
	class UFortAthenaAIBotRangeAttackDigestedSkillSet* CachedRangeAttackDigestedSkillSet;                          // 0x01B0   (0x0008)  
	class UAthenaAIServiceCover*                       CachedAIServiceCover;                                       // 0x01B8   (0x0008)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x01C0   (0x0008)  MISSED
	FName                                              StepBackExecutionStatusKeyName;                             // 0x01C8   (0x0004)  
	FName                                              StepBackMovementStateKeyName;                               // 0x01CC   (0x0004)  
	FName                                              StepBackDestinationKeyName;                                 // 0x01D0   (0x0004)  
	unsigned char                                      UnknownData01_6[0xC];                                       // 0x01D4   (0x000C)  MISSED
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_Storm
/// Size: 0x0060 (0x0001B0 - 0x000210)
class UFortAthenaAIBotEvaluator_Storm : public UFortAthenaAIBotEvaluator_Movement
{ 
public:
	FName                                              StormDestinationName;                                       // 0x01B0   (0x0004)  
	unsigned char                                      UnknownData00_5[0xC];                                       // 0x01B4   (0x000C)  MISSED
	class AFortGameModeAthena*                         CacheAthenaGameMode;                                        // 0x01C0   (0x0008)  
	class UBehaviorTreeComponent*                      CachedBTComp;                                               // 0x01C8   (0x0008)  
	class UFortGameStateComponent_BattleRoyaleGamePhaseLogic* CachedGamePhaseLogic;                                // 0x01D0   (0x0008)  
	unsigned char                                      UnknownData01_6[0x38];                                      // 0x01D8   (0x0038)  MISSED


	/// Functions
	// Function /Script/FortniteAIServer.FortAthenaAIBotEvaluator_Storm.OnSafeZoneStateChanged
	// void OnSafeZoneStateChanged(EFortSafeZoneState NewState);                                                             // [0x99163a0] Final|Native|Public  
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_TagQueryToBBKey
/// Size: 0x0008 (0x0000F8 - 0x000100)
class UFortAthenaAIBotEvaluator_TagQueryToBBKey : public UFortAthenaAIBotEvaluator_TagQuery
{ 
public:
	FName                                              LinkedBBKeyName;                                            // 0x00F8   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00FC   (0x0004)  MISSED
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_TakeCover
/// Size: 0x0090 (0x0001B0 - 0x000240)
class UFortAthenaAIBotEvaluator_TakeCover : public UFortAthenaAIBotEvaluator_Movement
{ 
public:
	class UFortAthenaAIBotRangeAttackDigestedSkillSet* CacheRangeAttackDigestedSkillSet;                           // 0x01B0   (0x0008)  
	class UFortAthenaAIBotAimingDigestedSkillSet*      CacheAimingDigestedSkillSet;                                // 0x01B8   (0x0008)  
	class UAthenaAIServiceCover*                       CachedAIServiceCover;                                       // 0x01C0   (0x0008)  
	FName                                              DestinationKeyName;                                         // 0x01C8   (0x0004)  
	FName                                              MoveToDestinationKeyName;                                   // 0x01CC   (0x0004)  
	FName                                              HealingStatusKeyName;                                       // 0x01D0   (0x0004)  
	FName                                              WeaponFireName;                                             // 0x01D4   (0x0004)  
	FName                                              TargetActorName;                                            // 0x01D8   (0x0004)  
	FName                                              BunkerStatusKeyName;                                        // 0x01DC   (0x0004)  
	unsigned char                                      UnknownData00_5[0x10];                                      // 0x01E0   (0x0010)  MISSED
	class ABuildingActor*                              CachedCoverBuildingActor;                                   // 0x01F0   (0x0008)  
	TArray<class ABuildingActor*>                      ExcludedBuildingActors;                                     // 0x01F8   (0x0010)  
	unsigned char                                      UnknownData01_6[0x38];                                      // 0x0208   (0x0038)  MISSED
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_ThrowableAttack
/// Size: 0x0050 (0x0001C8 - 0x000218)
class UFortAthenaAIBotEvaluator_ThrowableAttack : public UFortAthenaAIBotEvaluator_Attack
{ 
public:
	FName                                              WeaponTriggerThrowableName;                                 // 0x01C8   (0x0004)  
	FName                                              ThrowableAttackIsReadyToThrowName;                          // 0x01CC   (0x0004)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x01D0   (0x0008)  MISSED
	class UFortAthenaAIBotAttackingDigestedSkillSet*   AttackingSkillSet;                                          // 0x01D8   (0x0008)  
	class UFortAthenaAIBotRangeAttackDigestedSkillSet* RangeAttackSkillSet;                                        // 0x01E0   (0x0008)  
	class UFortAthenaAIBotAimingDigestedSkillSet*      AimingSkillSet;                                             // 0x01E8   (0x0008)  
	class UFortWorldItem*                              ChosenWeapon;                                               // 0x01F0   (0x0008)  
	class AFortPawn*                                   CachedFortPawn;                                             // 0x01F8   (0x0008)  
	unsigned char                                      UnknownData01_6[0x18];                                      // 0x0200   (0x0018)  MISSED
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_TrapOnPathDetected
/// Size: 0x0030 (0x0000A8 - 0x0000D8)
class UFortAthenaAIBotEvaluator_TrapOnPathDetected : public UFortAthenaAIBotEvaluator
{ 
public:
	class UFortAthenaAIBotAimingDigestedSkillSet*      CacheAimingDigestedSkillSet;                                // 0x00A8   (0x0008)  
	FName                                              TrapOnPathKeyName;                                          // 0x00B0   (0x0004)  
	FName                                              TrapActorOnPathKeyName;                                     // 0x00B4   (0x0004)  
	FName                                              TargetActorName;                                            // 0x00B8   (0x0004)  
	FName                                              AlertLevelName;                                             // 0x00BC   (0x0004)  
	FName                                              RangeAttackExecutionStatusName;                             // 0x00C0   (0x0004)  
	unsigned char                                      UnknownData00_5[0xC];                                       // 0x00C4   (0x000C)  MISSED
	class ABuildingTrap*                               CurrentTrapTarget;                                          // 0x00D0   (0x0008)  
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_VehicleLeaveSeat
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UFortAthenaAIBotEvaluator_VehicleLeaveSeat : public UFortAthenaAIBotEvaluator
{ 
public:
	FName                                              LeaveSeatStatusKeyName;                                     // 0x00A8   (0x0004)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x00AC   (0x0002)  MISSED
	bool                                               bLeaveSeatWhenPlayerInVehicle;                              // 0x00AE   (0x0001)  
	bool                                               bLeaveSeatWhenConverterLeave;                               // 0x00AF   (0x0001)  
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_VehicleSwitchSeat
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UFortAthenaAIBotEvaluator_VehicleSwitchSeat : public UFortAthenaAIBotEvaluator
{ 
public:
	FName                                              SwitchSeatStatusKeyName;                                    // 0x00A8   (0x0004)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x00AC   (0x0002)  MISSED
	bool                                               bSwitchToEmptyDriverSeat;                                   // 0x00AE   (0x0001)  
	unsigned char                                      UnknownData01_6[0x1];                                       // 0x00AF   (0x0001)  MISSED
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_WaitForPassengers
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UFortAthenaAIBotEvaluator_WaitForPassengers : public UFortAthenaAIBotEvaluator
{ 
public:
	FName                                              WaitForPassengersStatusKeyName;                             // 0x00A8   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00AC   (0x0004)  MISSED
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_Warmup
/// Size: 0x0030 (0x0000A8 - 0x0000D8)
class UFortAthenaAIBotEvaluator_Warmup : public UFortAthenaAIBotEvaluator
{ 
public:
	FName                                              WarmupPlayEmoteExecutionStatusKeyName;                      // 0x00A8   (0x0004)  
	FName                                              WarmupLootAndShootExecutionStatusKeyName;                   // 0x00AC   (0x0004)  
	FName                                              WarmupIdleExecutionStatusKeyName;                           // 0x00B0   (0x0004)  
	unsigned char                                      UnknownData00_5[0xC];                                       // 0x00B4   (0x000C)  MISSED
	class UFortAthenaAIBotWarmupDigestedSkillSet*      CacheWarmupDigestedSkillSet;                                // 0x00C0   (0x0008)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x00C8   (0x0010)  MISSED
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_WeaponSelection
/// Size: 0x0038 (0x0000A8 - 0x0000E0)
class UFortAthenaAIBotEvaluator_WeaponSelection : public UFortAthenaAIBotEvaluator
{ 
public:
	FName                                              ThrowableAttackIsReadyToThrowName;                          // 0x00A8   (0x0004)  
	FName                                              WeaponKeyName;                                              // 0x00AC   (0x0004)  
	FName                                              TargetActorName;                                            // 0x00B0   (0x0004)  
	unsigned char                                      UnknownData00_5[0x14];                                      // 0x00B4   (0x0014)  MISSED
	class UFortAthenaAIBotRangeAttackDigestedSkillSet* CacheRangeAttackDigestedSkillSet;                           // 0x00C8   (0x0008)  
	class UFortAthenaAIBotAttackingDigestedSkillSet*   CacheAttackingDigestedSkillSet;                             // 0x00D0   (0x0008)  
	class UFortAthenaAIBotAimingDigestedSkillSet*      CacheAimingDigestedSkillSet;                                // 0x00D8   (0x0008)  
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_Zipline
/// Size: 0x00A0 (0x0001B0 - 0x000250)
class UFortAthenaAIBotEvaluator_Zipline : public UFortAthenaAIBotEvaluator_Movement
{ 
public:
	FName                                              CurrentDestinationKeyName;                                  // 0x01B0   (0x0004)  
	FName                                              ZiplineTargetKeyName;                                       // 0x01B4   (0x0004)  
	FName                                              LastZiplineUsedName;                                        // 0x01B8   (0x0004)  
	FName                                              ZiplineMoveExecutionStatusKeyName;                          // 0x01BC   (0x0004)  
	FName                                              ZiplineEntryLocationKeyName;                                // 0x01C0   (0x0004)  
	FName                                              ZiplineExitLocationKeyName;                                 // 0x01C4   (0x0004)  
	FName                                              ZiplineLastUsageTimeName;                                   // 0x01C8   (0x0004)  
	FName                                              ZiplineUsageExecutionStatusName;                            // 0x01CC   (0x0004)  
	FScalableFloat                                     WaitTimeBetweenZiplineRandomChoices;                        // 0x01D0   (0x0028)  
	FScalableFloat                                     ProbabilityToUseZipline;                                    // 0x01F8   (0x0028)  
	unsigned char                                      UnknownData00_6[0x30];                                      // 0x0220   (0x0030)  MISSED


	/// Functions
	// Function /Script/FortniteAIServer.FortAthenaAIBotEvaluator_Zipline.OnZiplineStateChanged
	// void OnZiplineStateChanged(bool bIsZiplining, class AFortPlayerPawn* FortPlayerPawn);                                 // [0x9916420] Final|Native|Protected 
};

/// Struct /Script/FortniteAIServer.GameplayAbilityEvaluatorModule
/// Size: 0x0028 (0x000000 - 0x000028)
struct FGameplayAbilityEvaluatorModule
{ 
	FGameplayTagContainer                              GameplayAbilityTag;                                         // 0x0000   (0x0020)  
	class UAbilitySystemComponent*                     CachedAbilitySystemComponent;                               // 0x0020   (0x0008)  
};

/// Class /Script/FortniteAIServer.FortAthenaAIEvaluator_BlueprintBase
/// Size: 0x0058 (0x0000A8 - 0x000100)
class UFortAthenaAIEvaluator_BlueprintBase : public UFortAthenaAIBotEvaluator
{ 
public:
	bool                                               bBlockWeaponActions;                                        // 0x00A8   (0x0001)  
	bool                                               bGameplayAbilityEvaluator;                                  // 0x00A9   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x00AA   (0x0006)  MISSED
	FGameplayAbilityEvaluatorModule                    GameplayAbilityEvaluatorModule;                             // 0x00B0   (0x0028)  
	bool                                               bEvaluateOnBlackboardKeyChange;                             // 0x00D8   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x00D9   (0x0007)  MISSED
	TArray<FName>                                      ListeningBlackboardKeyNames;                                // 0x00E0   (0x0010)  
	unsigned char                                      UnknownData02_6[0x10];                                      // 0x00F0   (0x0010)  MISSED


	/// Functions
	// Function /Script/FortniteAIServer.FortAthenaAIEvaluator_BlueprintBase.OnExit
	// void OnExit(class UBehaviorTreeComponent* OwnerComp);                                                                 // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/FortniteAIServer.FortAthenaAIEvaluator_BlueprintBase.OnEnter
	// void OnEnter(class UBehaviorTreeComponent* OwnerComp);                                                                // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/FortniteAIServer.FortAthenaAIEvaluator_BlueprintBase.EvaluateStartingConditions
	// bool EvaluateStartingConditions(class UBehaviorTreeComponent* OwnerComp);                                             // [0x991630c] Native|Event|Protected|BlueprintEvent|Const 
	// Function /Script/FortniteAIServer.FortAthenaAIEvaluator_BlueprintBase.EvaluateOngoingConditions
	// bool EvaluateOngoingConditions(class UBehaviorTreeComponent* OwnerComp);                                              // [0x9916278] Native|Event|Protected|BlueprintEvent|Const 
};

/// Class /Script/FortniteAIServer.FortAthenaAIEvaluator_DormantUntilPhase
/// Size: 0x00A8 (0x0000A0 - 0x000148)
class UFortAthenaAIEvaluator_DormantUntilPhase : public UFortAthenaAIEvaluator
{ 
public:
	FScalableFloat                                     bIsEnabled;                                                 // 0x00A0   (0x0028)  
	bool                                               bDisabledInCreative;                                        // 0x00C8   (0x0001)  
	EAthenaGamePhaseStep                               RequiredGamePhaseStep;                                      // 0x00C9   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x00CA   (0x0006)  MISSED
	FScalableFloat                                     DelayAfterPhase;                                            // 0x00D0   (0x0028)  
	FScalableFloat                                     RandomDeviationAfterPhase;                                  // 0x00F8   (0x0028)  
	unsigned char                                      UnknownData01_6[0x28];                                      // 0x0120   (0x0028)  MISSED
};

/// Class /Script/FortniteAIServer.FortAthenaAIEvaluator_FleeEnvDanger
/// Size: 0x0028 (0x0000A0 - 0x0000C8)
class UFortAthenaAIEvaluator_FleeEnvDanger : public UFortAthenaAIEvaluator
{ 
public:
	float                                              MaximumCheckDistance;                                       // 0x00A0   (0x0004)  
	float                                              AdditionalFleeDistance;                                     // 0x00A4   (0x0004)  
	FName                                              EnvironmentalDangerExecutionStatusName;                     // 0x00A8   (0x0004)  
	FName                                              EnvironmentalDangerFleeDirectionFromKeyName;                // 0x00AC   (0x0004)  
	FName                                              EnvironmentalDangerFleeDirectionToKeyName;                  // 0x00B0   (0x0004)  
	FName                                              EnvironmentalDangerFleeDistanceKeyName;                     // 0x00B4   (0x0004)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x00B8   (0x0008)  MISSED
	class AAIController*                               CachedController;                                           // 0x00C0   (0x0008)  
};

/// Class /Script/FortniteAIServer.FortAthenaAIEvaluator_FollowGroupLeader
/// Size: 0x0020 (0x0001B0 - 0x0001D0)
class UFortAthenaAIEvaluator_FollowGroupLeader : public UFortAthenaAIBotEvaluator_Movement
{ 
public:
	FName                                              FollowGroupLeaderStatusKeyName;                             // 0x01B0   (0x0004)  
	FName                                              FollowGroupLeaderMovementStateKeyName;                      // 0x01B4   (0x0004)  
	FName                                              FollowGroupLeaderDestinationKeyName;                        // 0x01B8   (0x0004)  
	FName                                              TooFarFromLeaderKeyName;                                    // 0x01BC   (0x0004)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x01C0   (0x0008)  MISSED
	class UFortPawnComponent_AIGroup*                  CachedAIGroupComponent;                                     // 0x01C8   (0x0008)  
};

/// Class /Script/FortniteAIServer.FortAthenaAIEvaluator_Leash
/// Size: 0x0028 (0x0000A0 - 0x0000C8)
class UFortAthenaAIEvaluator_Leash : public UFortAthenaAIEvaluator
{ 
public:
	FName                                              GoalIsInsideLeashKeyName;                                   // 0x00A0   (0x0004)  
	FName                                              AIIsInsideLeashKeyName;                                     // 0x00A4   (0x0004)  
	FName                                              LeashCenterLocationKeyName;                                 // 0x00A8   (0x0004)  
	unsigned char                                      UnknownData00_5[0xC];                                       // 0x00AC   (0x000C)  MISSED
	class UFortAthenaLeashComponent*                   CachedLeashComponent;                                       // 0x00B8   (0x0008)  
	class UFortAIGoalComponent*                        CachedAIGoalComponent;                                      // 0x00C0   (0x0008)  
};

/// Class /Script/FortniteAIServer.FortAthenaAIEvaluator_NearbyActorsPerception
/// Size: 0x01B0 (0x0000A0 - 0x000250)
#pragma pack(push, 0x1)
class alignas(0x10) UFortAthenaAIEvaluator_NearbyActorsPerception : public UFortAthenaAIEvaluator
{ 
public:
	FName                                              FoundNearbyActorKeyName;                                    // 0x00A0   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00A4   (0x0004)  MISSED
	FScalableFloat                                     MinimumUpdateInterval;                                      // 0x00A8   (0x0028)  
	int32_t                                            RequiredTypes;                                              // 0x00D0   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x00D4   (0x0004)  MISSED
	FScalableFloat                                     MinimumDistanceToActors;                                    // 0x00D8   (0x0028)  
	SDK_UNDEFINED(16,13984) /* TArray<TEnumAsByte<ETeamAttitude>> */ __um(RequiredAttitudes);                      // 0x0100   (0x0010)  
	bool                                               bRequireLoS;                                                // 0x0110   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x0111   (0x0007)  MISSED
	FGameplayTagQuery                                  RequiredTagsQuery;                                          // 0x0118   (0x0048)  
	unsigned char                                      UnknownData03_6[0xE8];                                      // 0x0160   (0x00E8)  MISSED
};
#pragma pack(pop)

/// Class /Script/FortniteAIServer.FortAthenaAIEvaluator_SmartObjects
/// Size: 0x00C8 (0x0000A0 - 0x000168)
class UFortAthenaAIEvaluator_SmartObjects : public UFortAthenaAIEvaluator
{ 
public:
	class UFortAthenaAIRuntimeParameters_SmartObjectBase* SmartObjectRuntimeParameters;                            // 0x00A0   (0x0008)  
	class USmartObjectSubsystem*                       SmartObjectSubsystem;                                       // 0x00A8   (0x0008)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x00B0   (0x0008)  MISSED
	FGameplayTag                                       EvaluationTag;                                              // 0x00B8   (0x0004)  
	bool                                               bEvaluateSOValidityAfterChosen;                             // 0x00BC   (0x0001)  
	bool                                               bEnableEntryLocationsSupport;                               // 0x00BD   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x00BE   (0x0002)  MISSED
	FScalableFloat                                     MaximumEntryLocationsChecksPerEvaluation;                   // 0x00C0   (0x0028)  
	FScalableFloat                                     EntryLocationFailuresBlacklistedTime;                       // 0x00E8   (0x0028)  
	class UCurveFloat*                                 DistanceToWeightCurveForSlotPicking;                        // 0x0110   (0x0008)  
	class UClass*                                      OverridenFilterClassForEntryPoints;                         // 0x0118   (0x0008)  
	TArray<FName>                                      ExecutionStatusesToCheckForAllowToAvoidGoingToSOKeyNames;   // 0x0120   (0x0010)  
	unsigned char                                      UnknownData02_5[0x10];                                      // 0x0130   (0x0010)  MISSED
	FName                                              SmartObjectExecutionStatusKeyName;                          // 0x0140   (0x0004)  
	FName                                              SmartObjectMovementStateKeyName;                            // 0x0144   (0x0004)  
	FName                                              SmartObjectDestinationKeyName;                              // 0x0148   (0x0004)  
	FName                                              SmartObjectDestinationRotationKeyName;                      // 0x014C   (0x0004)  
	FName                                              SmartObjectShouldMoveKeyName;                               // 0x0150   (0x0004)  
	FName                                              SmartObjectUrgencyKeyName;                                  // 0x0154   (0x0004)  
	unsigned char                                      UnknownData03_6[0x10];                                      // 0x0158   (0x0010)  MISSED
};

/// Class /Script/FortniteAIServer.FortAthenaAIEvaluator_SpeechBubble
/// Size: 0x0000 (0x000250 - 0x000250)
class UFortAthenaAIEvaluator_SpeechBubble : public UFortAthenaAIEvaluator_NearbyActorsPerception
{ 
public:
};

/// Class /Script/FortniteAIServer.FortAthenaBTContext_SuppressAutomaticAttackCheck
/// Size: 0x0000 (0x000070 - 0x000070)
class UFortAthenaBTContext_SuppressAutomaticAttackCheck : public UFortBTService_ContextOverride
{ 
public:
};

/// Class /Script/FortniteAIServer.FortAthenaBTService_AgentOffNavMesh
/// Size: 0x0038 (0x000070 - 0x0000A8)
class UFortAthenaBTService_AgentOffNavMesh : public UBTService
{ 
public:
	FName                                              AgentIsOffNavMeshKeyName;                                   // 0x0070   (0x0004)  
	bool                                               bEvaluateOnTick;                                            // 0x0074   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0075   (0x0003)  MISSED
	FScalableFloat                                     TickInterval;                                               // 0x0078   (0x0028)  
	bool                                               bEvaluateOnMoveRequestFinished;                             // 0x00A0   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x00A1   (0x0007)  MISSED
};

/// Class /Script/FortniteAIServer.FortAthenaBTService_AIEvaluator
/// Size: 0x0010 (0x000070 - 0x000080)
class UFortAthenaBTService_AIEvaluator : public UBTService
{ 
public:
	FGameplayTag                                       InjectionTag;                                               // 0x0070   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0074   (0x0004)  MISSED
	class UClass*                                      AIEvaluatorClass;                                           // 0x0078   (0x0008)  
};

/// Class /Script/FortniteAIServer.FortAthenaBTService_ApplyGameplayTags
/// Size: 0x0020 (0x000070 - 0x000090)
class UFortAthenaBTService_ApplyGameplayTags : public UBTService
{ 
public:
	FGameplayTagContainer                              GameplayTagsToApply;                                        // 0x0070   (0x0020)  
};

/// Class /Script/FortniteAIServer.FortAthenaBTService_BuildConstruction
/// Size: 0x0018 (0x000070 - 0x000088)
class UFortAthenaBTService_BuildConstruction : public UBTService
{ 
public:
	FName                                              StealWallBuildName;                                         // 0x0070   (0x0004)  
	FName                                              StealWallBuildTypeName;                                     // 0x0074   (0x0004)  
	FName                                              StealWallBuildGridCoordName;                                // 0x0078   (0x0004)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x007C   (0x000C)  MISSED
};

/// Class /Script/FortniteAIServer.FortAthenaBTService_Clamber
/// Size: 0x0038 (0x000070 - 0x0000A8)
class UFortAthenaBTService_Clamber : public UBTService
{ 
public:
	FName                                              ClamberExecutionStatusName;                                 // 0x0070   (0x0004)  
	FName                                              ClamberOriginLocationName;                                  // 0x0074   (0x0004)  
	FName                                              ClamberDestinationLocationName;                             // 0x0078   (0x0004)  
	FName                                              ClamberAbilityStatusName;                                   // 0x007C   (0x0004)  
	FName                                              JumpExecutionStatusName;                                    // 0x0080   (0x0004)  
	FName                                              CrouchExecutionStatusName;                                  // 0x0084   (0x0004)  
	unsigned char                                      UnknownData00_5[0xC];                                       // 0x0088   (0x000C)  MISSED
	uint32_t                                           FirstJumpRetryMaxCount;                                     // 0x0094   (0x0004)  
	uint32_t                                           ClamberAttemptRetryMaxCount;                                // 0x0098   (0x0004)  
	float                                              FirstJumpRetryDelay;                                        // 0x009C   (0x0004)  
	float                                              FirstJumpClamberMaxStartDelay;                              // 0x00A0   (0x0004)  
	float                                              ClamberRetryDelay;                                          // 0x00A4   (0x0004)  
};

/// Class /Script/FortniteAIServer.FortAthenaBTService_CopyBlackboardVariable
/// Size: 0x0058 (0x000070 - 0x0000C8)
class UFortAthenaBTService_CopyBlackboardVariable : public UBTService
{ 
public:
	FBlackboardKeySelector                             SourceBlackboardKey;                                        // 0x0070   (0x0028)  
	FBlackboardKeySelector                             DestinationBlackboardKey;                                   // 0x0098   (0x0028)  
	bool                                               bCopyOnBecomeRelevant : 1;                                  // 0x00C0:0 (0x0001)  
	bool                                               bCopyOnCeaseRelevant : 1;                                   // 0x00C0:1 (0x0001)  
	bool                                               bCopyWhenSourceValueChange : 1;                             // 0x00C0:2 (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x00C1   (0x0007)  MISSED
};

/// Class /Script/FortniteAIServer.FortAthenaBTService_Crouch
/// Size: 0x0008 (0x000070 - 0x000078)
class UFortAthenaBTService_Crouch : public UBTService
{ 
public:
	FName                                              CrouchExecutionStatusName;                                  // 0x0070   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0074   (0x0004)  MISSED
};

/// Class /Script/FortniteAIServer.FortAthenaBTService_DontForgetCurrentThreat
/// Size: 0x0000 (0x000070 - 0x000070)
class UFortAthenaBTService_DontForgetCurrentThreat : public UBTService
{ 
public:
};

/// Class /Script/FortniteAIServer.FortAthenaBTService_Escape
/// Size: 0x0010 (0x000070 - 0x000080)
class UFortAthenaBTService_Escape : public UBTService
{ 
public:
	FName                                              EscapeKeyName;                                              // 0x0070   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0074   (0x0004)  MISSED
	FName                                              EscapeFromStormKeyName;                                     // 0x0078   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x007C   (0x0004)  MISSED
};

/// Class /Script/FortniteAIServer.FortAthenaBTService_Interact
/// Size: 0x00D0 (0x000070 - 0x000140)
class UFortAthenaBTService_Interact : public UBTService
{ 
public:
	FBlackboardKeySelector                             InteractExecutionStatusKeySelector;                         // 0x0070   (0x0028)  
	FBlackboardKeySelector                             InteractContextInfoKeySelector;                             // 0x0098   (0x0028)  
	FBlackboardKeySelector                             InteractObjectKeySelector;                                  // 0x00C0   (0x0028)  
	FBlackboardKeySelector                             ExecutionStatusKeySelector;                                 // 0x00E8   (0x0028)  
	FBlackboardKeySelector                             MovementStateKeySelector;                                   // 0x0110   (0x0028)  
	SDK_UNDEFINED(1,13985) /* TEnumAsByte<EInteractionBeingAttempted> */ __um(InteractionBeingAttempted);          // 0x0138   (0x0001)  
	bool                                               bRequireDistanceCheck;                                      // 0x0139   (0x0001)  
	bool                                               bRequireBlockedCheck;                                       // 0x013A   (0x0001)  
	unsigned char                                      UnknownData00_6[0x5];                                       // 0x013B   (0x0005)  MISSED
};

/// Class /Script/FortniteAIServer.FortAthenaBTService_Jump
/// Size: 0x0018 (0x000070 - 0x000088)
class UFortAthenaBTService_Jump : public UBTService
{ 
public:
	FName                                              JumpExecutionStatusName;                                    // 0x0070   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0074   (0x0004)  MISSED
	FName                                              CrouchExecutionStatusName;                                  // 0x0078   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x007C   (0x0004)  MISSED
	float                                              JumpInputReleaseDelay;                                      // 0x0080   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0084   (0x0004)  MISSED
};

/// Class /Script/FortniteAIServer.FortAthenaBTService_JetpackStrafe
/// Size: 0x0010 (0x000088 - 0x000098)
class UFortAthenaBTService_JetpackStrafe : public UFortAthenaBTService_Jump
{ 
public:
	FName                                              JetpackStrafeExecutionStatusName;                           // 0x0088   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x008C   (0x0004)  MISSED
	class UFortAthenaAIBotEvasiveManeuversDigestedSkillSet* CacheEMDigestedSkillSet;                               // 0x0090   (0x0008)  
};

/// Class /Script/FortniteAIServer.FortAthenaBTService_JumpOffBus
/// Size: 0x0008 (0x000070 - 0x000078)
class UFortAthenaBTService_JumpOffBus : public UBTService
{ 
public:
	FName                                              JumpOffBusExecutionStatusName;                              // 0x0070   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0074   (0x0004)  MISSED
};

/// Class /Script/FortniteAIServer.FortAthenaBTService_ManageWeapon
/// Size: 0x0040 (0x000070 - 0x0000B0)
class UFortAthenaBTService_ManageWeapon : public UBTService
{ 
public:
	FName                                              WeaponFireName;                                             // 0x0070   (0x0004)  
	FName                                              WeaponTriggerMeleeName;                                     // 0x0074   (0x0004)  
	FName                                              WeaponTriggerThrowableName;                                 // 0x0078   (0x0004)  
	FName                                              WeaponReloadName;                                           // 0x007C   (0x0004)  
	FName                                              WeaponName;                                                 // 0x0080   (0x0004)  
	FName                                              WeaponTargetingName;                                        // 0x0084   (0x0004)  
	FName                                              SprintExecutionStatusName;                                  // 0x0088   (0x0004)  
	FName                                              TacticalSprintExecutionStatusName;                          // 0x008C   (0x0004)  
	FName                                              HealingStatusKeyName;                                       // 0x0090   (0x0004)  
	FName                                              BlockWeaponActionsKeyName;                                  // 0x0094   (0x0004)  
	unsigned char                                      UnknownData00_5[0x14];                                      // 0x0098   (0x0014)  MISSED
	bool                                               bEndChargeOnFireStop;                                       // 0x00AC   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x00AD   (0x0003)  MISSED


	/// Functions
	// Function /Script/FortniteAIServer.FortAthenaBTService_ManageWeapon.ManageWeaponTargeting
	// void ManageWeaponTargeting(class UBehaviorTreeComponent* OwnerComp);                                                  // [0x9930dbc] Final|Native|Protected|Const 
};

/// Class /Script/FortniteAIServer.FortAthenaBTService_ManageVehicleWeapon
/// Size: 0x0000 (0x0000B0 - 0x0000B0)
class UFortAthenaBTService_ManageVehicleWeapon : public UFortAthenaBTService_ManageWeapon
{ 
public:
};

/// Class /Script/FortniteAIServer.FortAthenaBTService_ModulateVehicleSpeedUsingDistBetween
/// Size: 0x0070 (0x000070 - 0x0000E0)
class UFortAthenaBTService_ModulateVehicleSpeedUsingDistBetween : public UBTService
{ 
public:
	FBlackboardKeySelector                             BlackboardKeyA;                                             // 0x0070   (0x0028)  
	FBlackboardKeySelector                             BlackboardKeyB;                                             // 0x0098   (0x0028)  
	float                                              MinDistance;                                                // 0x00C0   (0x0004)  
	float                                              MaxDistance;                                                // 0x00C4   (0x0004)  
	float                                              MinDistanceSpeed;                                           // 0x00C8   (0x0004)  
	float                                              MaxDistanceSpeed;                                           // 0x00CC   (0x0004)  
	bool                                               bCalculateAs2D;                                             // 0x00D0   (0x0001)  
	unsigned char                                      UnknownData00_6[0xF];                                       // 0x00D1   (0x000F)  MISSED
};

/// Class /Script/FortniteAIServer.FortAthenaBTService_MovementListener
/// Size: 0x0068 (0x000070 - 0x0000D8)
class UFortAthenaBTService_MovementListener : public UBTService
{ 
public:
	FName                                              MovementStateKeyName;                                       // 0x0070   (0x0004)  
	FName                                              IsStuckKeyName;                                             // 0x0074   (0x0004)  
	bool                                               bSuccessPartialAsFail;                                      // 0x0078   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0079   (0x0007)  MISSED
	FScalableFloat                                     MaxFailCount;                                               // 0x0080   (0x0028)  
	FScalableFloat                                     MaxDurationToFail;                                          // 0x00A8   (0x0028)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x00D0   (0x0008)  MISSED
};

/// Class /Script/FortniteAIServer.FortAthenaBTService_Patrolling
/// Size: 0x0020 (0x000070 - 0x000090)
class UFortAthenaBTService_Patrolling : public UBTService
{ 
public:
	FName                                              PatrollingAppendDestinationKeyName;                         // 0x0070   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0074   (0x0004)  MISSED
	float                                              AcceptableRadius;                                           // 0x0078   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x007C   (0x0004)  MISSED
	class UClass*                                      FilterClass;                                                // 0x0080   (0x0008)  
	bool                                               bAllowPartialPath : 1;                                      // 0x0088:0 (0x0001)  
	bool                                               bProjectGoalLocation : 1;                                   // 0x0088:1 (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x0089   (0x0007)  MISSED
};

/// Class /Script/FortniteAIServer.FortAthenaBTService_PauseVehicle
/// Size: 0x0000 (0x000070 - 0x000070)
class UFortAthenaBTService_PauseVehicle : public UBTService
{ 
public:
};

/// Class /Script/FortniteAIServer.FortAthenaBTService_PickUpLoot
/// Size: 0x0020 (0x000070 - 0x000090)
class UFortAthenaBTService_PickUpLoot : public UBTService
{ 
public:
	FName                                              LootObjectKeyName;                                          // 0x0070   (0x0004)  
	FName                                              ExecutionStatusName;                                        // 0x0074   (0x0004)  
	FName                                              InteractionExecutionStatusName;                             // 0x0078   (0x0004)  
	FName                                              InteractionContextInfoName;                                 // 0x007C   (0x0004)  
	FName                                              MovementStateKeyName;                                       // 0x0080   (0x0004)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x0084   (0x000C)  MISSED
};

/// Class /Script/FortniteAIServer.FortAthenaBTService_PropagatePatrolProgressToPassengers
/// Size: 0x0008 (0x000070 - 0x000078)
class UFortAthenaBTService_PropagatePatrolProgressToPassengers : public UBTService
{ 
public:
	FName                                              PatrollingAppendDestinationKeyName;                         // 0x0070   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0074   (0x0004)  MISSED
};

/// Class /Script/FortniteAIServer.FortAthenaBTService_Revive
/// Size: 0x0020 (0x000070 - 0x000090)
class UFortAthenaBTService_Revive : public UBTService
{ 
public:
	FName                                              ReviveTargetKeyName;                                        // 0x0070   (0x0004)  
	FName                                              ExecutionStatusName;                                        // 0x0074   (0x0004)  
	FName                                              MoveToPathMovementStateName;                                // 0x0078   (0x0004)  
	FName                                              InteractionExecutionStatusName;                             // 0x007C   (0x0004)  
	FName                                              InteractionContextInfoName;                                 // 0x0080   (0x0004)  
	bool                                               bDisableLeash;                                              // 0x0084   (0x0001)  
	unsigned char                                      UnknownData00_6[0xB];                                       // 0x0085   (0x000B)  MISSED
};

/// Class /Script/FortniteAIServer.FortAthenaBTService_SetBlackboardBool
/// Size: 0x0030 (0x000070 - 0x0000A0)
class UFortAthenaBTService_SetBlackboardBool : public UBTService
{ 
public:
	FBlackboardKeySelector                             BlackboardKey;                                              // 0x0070   (0x0028)  
	bool                                               bBlackboardValue;                                           // 0x0098   (0x0001)  
	EBTSetBlackboardBoolExitActions                    ExitAction;                                                 // 0x0099   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x009A   (0x0006)  MISSED
};

/// Class /Script/FortniteAIServer.FortAthenaBTService_SetExecutionStatus
/// Size: 0x0008 (0x000098 - 0x0000A0)
class UFortAthenaBTService_SetExecutionStatus : public UBTService_BlackboardBase
{ 
public:
	EExecutionStatus                                   ExecutionStatus;                                            // 0x0098   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0099   (0x0007)  MISSED
};

/// Class /Script/FortniteAIServer.FortAthenaBTService_Slide
/// Size: 0x0008 (0x000070 - 0x000078)
class UFortAthenaBTService_Slide : public UBTService
{ 
public:
	FName                                              SlideExecutionStatusName;                                   // 0x0070   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0074   (0x0004)  MISSED


	/// Functions
	// Function /Script/FortniteAIServer.FortAthenaBTService_Slide.OnStopSliding
	// void OnStopSliding(class AFortPlayerPawn* Pawn);                                                                      // [0x9930ecc] Final|Native|Private 
};

/// Class /Script/FortniteAIServer.FortAthenaBTService_SmartObject
/// Size: 0x0010 (0x000070 - 0x000080)
class UFortAthenaBTService_SmartObject : public UBTService
{ 
public:
	FName                                              SmartObjectStatusKeyName;                                   // 0x0070   (0x0004)  
	FName                                              SmartObjectDestinationKeyName;                              // 0x0074   (0x0004)  
	FGameplayTag                                       EvaluationTag;                                              // 0x0078   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x007C   (0x0004)  MISSED
};

/// Class /Script/FortniteAIServer.FortAthenaBTService_Sprinting
/// Size: 0x0058 (0x000070 - 0x0000C8)
class UFortAthenaBTService_Sprinting : public UBTService
{ 
public:
	unsigned char                                      UnknownData00_3[0x40];                                      // 0x0070   (0x0040)  MISSED
	FName                                              SprintExecutionStatusName;                                  // 0x00B0   (0x0004)  
	FName                                              TacticalSprintExecutionStatusName;                          // 0x00B4   (0x0004)  
	FName                                              TacticalSprintOverridenName;                                // 0x00B8   (0x0004)  
	unsigned char                                      UnknownData01_6[0xC];                                       // 0x00BC   (0x000C)  MISSED
};

/// Class /Script/FortniteAIServer.FortAthenaBTService_UpdateTarget
/// Size: 0x0000 (0x000070 - 0x000070)
class UFortAthenaBTService_UpdateTarget : public UBTService
{ 
public:
};

/// Class /Script/FortniteAIServer.FortAthenaBTService_UseItem
/// Size: 0x0030 (0x000070 - 0x0000A0)
class UFortAthenaBTService_UseItem : public UBTService
{ 
public:
	FName                                              ActionObjectKeyName;                                        // 0x0070   (0x0004)  
	FName                                              ExecutionStatusKeyName;                                     // 0x0074   (0x0004)  
	FName                                              CanMoveWhileUsingItemKeyName;                               // 0x0078   (0x0004)  
	int32_t                                            MaxEquipAttempts;                                           // 0x007C   (0x0004)  
	float                                              EquipRetryInterval;                                         // 0x0080   (0x0004)  
	float                                              UseItemDelay;                                               // 0x0084   (0x0004)  
	float                                              MinWaitTimeBetweenUses;                                     // 0x0088   (0x0004)  
	float                                              MaxWaitTimeBetweenUses;                                     // 0x008C   (0x0004)  
	bool                                               bCanOnlyUseMobileItems;                                     // 0x0090   (0x0001)  
	bool                                               bBlockWeaponActions;                                        // 0x0091   (0x0001)  
	bool                                               bValidateAbility;                                           // 0x0092   (0x0001)  
	bool                                               bResetActionObjectKey;                                      // 0x0093   (0x0001)  
	bool                                               bUseAlternateMode;                                          // 0x0094   (0x0001)  
	unsigned char                                      UnknownData00_6[0xB];                                       // 0x0095   (0x000B)  MISSED
};

/// Class /Script/FortniteAIServer.FortAthenaBTService_WaitForPassengers
/// Size: 0x0008 (0x000070 - 0x000078)
class UFortAthenaBTService_WaitForPassengers : public UBTService
{ 
public:
	FName                                              WaitForPassengersStatusKeyName;                             // 0x0070   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0074   (0x0004)  MISSED
};

/// Class /Script/FortniteAIServer.FortAthenaBTService_Zipline
/// Size: 0x0048 (0x000070 - 0x0000B8)
class UFortAthenaBTService_Zipline : public UBTService
{ 
public:
	FName                                              ZiplineTargetName;                                          // 0x0070   (0x0004)  
	FName                                              InteractionExecutionStatusName;                             // 0x0074   (0x0004)  
	FName                                              InteractionContextInfoName;                                 // 0x0078   (0x0004)  
	FName                                              UsageExecutionStatusName;                                   // 0x007C   (0x0004)  
	FName                                              ZiplineEntryLocationName;                                   // 0x0080   (0x0004)  
	FName                                              ZiplineExitLocationKeyName;                                 // 0x0084   (0x0004)  
	FName                                              MoveToPathMovementStateName;                                // 0x0088   (0x0004)  
	FName                                              MoveExecutionStatusName;                                    // 0x008C   (0x0004)  
	FName                                              FocalPointName;                                             // 0x0090   (0x0004)  
	unsigned char                                      UnknownData00_6[0x24];                                      // 0x0094   (0x0024)  MISSED
};

/// Class /Script/FortniteAIServer.FortAthenaBTTask_ActivateVehicleBoost
/// Size: 0x0010 (0x000070 - 0x000080)
class UFortAthenaBTTask_ActivateVehicleBoost : public UBTTaskNode
{ 
public:
	bool                                               bActivateBoost;                                             // 0x0070   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0071   (0x0003)  MISSED
	float                                              BoostLength;                                                // 0x0074   (0x0004)  
	bool                                               bIgnoreMinimumDistanceLeft;                                 // 0x0078   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0079   (0x0007)  MISSED
};

/// Class /Script/FortniteAIServer.FortAthenaBTTask_MoveTo
/// Size: 0x0010 (0x0000B0 - 0x0000C0)
class UFortAthenaBTTask_MoveTo : public UBTTask_MoveTo
{ 
public:
	FName                                              MovementResultKeyName;                                      // 0x00B0   (0x0004)  
	FName                                              ExecutionStatusKeyName;                                     // 0x00B4   (0x0004)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x00B8   (0x0008)  MISSED
};

/// Class /Script/FortniteAIServer.FortAthenaBTTask_BotMoveTo
/// Size: 0x0008 (0x0000C0 - 0x0000C8)
class UFortAthenaBTTask_BotMoveTo : public UFortAthenaBTTask_MoveTo
{ 
public:
	FName                                              NoSmashMoveGoalActorKeyName;                                // 0x00C0   (0x0004)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x00C4   (0x0002)  MISSED
	bool                                               bAllowRandomWobble : 1;                                     // 0x00C6:0 (0x0001)  
	bool                                               bIsUrgentMovement : 1;                                      // 0x00C6:1 (0x0001)  
	unsigned char                                      UnknownData01_6[0x1];                                       // 0x00C7   (0x0001)  MISSED
};

/// Class /Script/FortniteAIServer.FortAthenaBTTask_BotUnstuckTeleport
/// Size: 0x0080 (0x000070 - 0x0000F0)
class UFortAthenaBTTask_BotUnstuckTeleport : public UBTTaskNode
{ 
public:
	FEQSParametrizedQueryExecutionRequest              EQSRequest;                                                 // 0x0070   (0x0048)  
	FName                                              CanReachDestinationKeyName;                                 // 0x00B8   (0x0004)  
	FName                                              TeleportExecutionStatusKeyName;                             // 0x00BC   (0x0004)  
	FName                                              LastPartialPathTimeKeyName;                                 // 0x00C0   (0x0004)  
	FName                                              LastPartialPathCountKeyName;                                // 0x00C4   (0x0004)  
	unsigned char                                      UnknownData00_5[0x20];                                      // 0x00C8   (0x0020)  MISSED
	class UFortAthenaAIBotUnstuckDigestedSkillSet*     UnstuckSkillSet;                                            // 0x00E8   (0x0008)  
};

/// Class /Script/FortniteAIServer.FortAthenaBTTask_BotWait
/// Size: 0x0028 (0x000078 - 0x0000A0)
class UFortAthenaBTTask_BotWait : public UBTTask_Wait
{ 
public:
	FBlackboardKeySelector                             WaitCompleteKeySelector;                                    // 0x0078   (0x0028)  
};

/// Class /Script/FortniteAIServer.FortAthenaBTTask_Build
/// Size: 0x0010 (0x000070 - 0x000080)
class UFortAthenaBTTask_Build : public UBTTaskNode
{ 
public:
	FName                                              ExecutionStatusKeyName;                                     // 0x0070   (0x0004)  
	FName                                              FocalPointName;                                             // 0x0074   (0x0004)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0078   (0x0008)  MISSED
};

/// Class /Script/FortniteAIServer.FortAthenaBTTask_Conversation
/// Size: 0x0008 (0x000070 - 0x000078)
class UFortAthenaBTTask_Conversation : public UBTTaskNode
{ 
public:
	FName                                              ConversationStatusKeyName;                                  // 0x0070   (0x0004)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0074   (0x0002)  MISSED
	bool                                               bResetEvaluatorStatusKeyOnFinish;                           // 0x0076   (0x0001)  
	unsigned char                                      UnknownData01_6[0x1];                                       // 0x0077   (0x0001)  MISSED
};

/// Class /Script/FortniteAIServer.FortAthenaBTTask_Dive
/// Size: 0x0010 (0x000070 - 0x000080)
class UFortAthenaBTTask_Dive : public UBTTaskNode
{ 
public:
	FName                                              ExecutionStatusKeyName;                                     // 0x0070   (0x0004)  
	FName                                              DiveDestinationKeyName;                                     // 0x0074   (0x0004)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0078   (0x0008)  MISSED
};

/// Class /Script/FortniteAIServer.FortAthenaBTTask_EnterVehicle
/// Size: 0x0008 (0x000070 - 0x000078)
class UFortAthenaBTTask_EnterVehicle : public UBTTaskNode
{ 
public:
	FName                                              SelectedVehicleKeyName;                                     // 0x0070   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0074   (0x0004)  MISSED
};

/// Class /Script/FortniteAIServer.FortAthenaBTTask_EquipItem
/// Size: 0x0010 (0x000070 - 0x000080)
class UFortAthenaBTTask_EquipItem : public UBTTaskNode
{ 
public:
	FName                                              WeaponKeyName;                                              // 0x0070   (0x0004)  
	FName                                              EquipItemKeyName;                                           // 0x0074   (0x0004)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0078   (0x0008)  MISSED
};

/// Class /Script/FortniteAIServer.FortAthenaBTTask_Glide
/// Size: 0x0010 (0x000070 - 0x000080)
class UFortAthenaBTTask_Glide : public UBTTaskNode
{ 
public:
	FName                                              ExecutionStatusKeyName;                                     // 0x0070   (0x0004)  
	FName                                              GlideDestinationKeyName;                                    // 0x0074   (0x0004)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0078   (0x0008)  MISSED
};

/// Class /Script/FortniteAIServer.FortAthenaBTTask_Interact
/// Size: 0x0078 (0x000070 - 0x0000E8)
class UFortAthenaBTTask_Interact : public UBTTaskNode
{ 
public:
	float                                              AttemptInterval;                                            // 0x0070   (0x0004)  
	int32_t                                            MaxInteractAttempts;                                        // 0x0074   (0x0004)  
	bool                                               bShouldFocusOnInteraction;                                  // 0x0078   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0079   (0x0007)  MISSED
	FBlackboardKeySelector                             InteractExecutionStatusKeySelector;                         // 0x0080   (0x0028)  
	FBlackboardKeySelector                             InteractContextInfoKeySelector;                             // 0x00A8   (0x0028)  
	FName                                              FocalPointName;                                             // 0x00D0   (0x0004)  
	FName                                              InteractActorName;                                          // 0x00D4   (0x0004)  
	FName                                              JumpExecutionStatusName;                                    // 0x00D8   (0x0004)  
	FName                                              WeaponTriggerMeleeName;                                     // 0x00DC   (0x0004)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x00E0   (0x0008)  MISSED
};

/// Class /Script/FortniteAIServer.FortAthenaBTTask_LeaveVehicle
/// Size: 0x0008 (0x000070 - 0x000078)
class UFortAthenaBTTask_LeaveVehicle : public UBTTaskNode
{ 
public:
	bool                                               bWaitVehicleStop;                                           // 0x0070   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0071   (0x0007)  MISSED
};

/// Class /Script/FortniteAIServer.FortAthenaBTTask_ModulateVehicleSpeed
/// Size: 0x0008 (0x000070 - 0x000078)
class UFortAthenaBTTask_ModulateVehicleSpeed : public UBTTaskNode
{ 
public:
	float                                              NewDrivingSpeed;                                            // 0x0070   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0074   (0x0004)  MISSED
};

/// Class /Script/FortniteAIServer.FortAthenaBTTask_PauseVehicle
/// Size: 0x0008 (0x000070 - 0x000078)
class UFortAthenaBTTask_PauseVehicle : public UBTTaskNode
{ 
public:
	bool                                               bPausePathFollow;                                           // 0x0070   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0071   (0x0007)  MISSED
};

/// Class /Script/FortniteAIServer.FortAthenaBTTask_PlayEmote
/// Size: 0x0018 (0x000070 - 0x000088)
class UFortAthenaBTTask_PlayEmote : public UBTTaskNode
{ 
public:
	FName                                              PlayEmoteExecutionStatusKeyName;                            // 0x0070   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0074   (0x0004)  MISSED
	TArray<class UAthenaDanceItemDefinition*>          BespokeEmotes;                                              // 0x0078   (0x0010)  
};

/// Class /Script/FortniteAIServer.FortAthenaBTTask_ReverseVehicle
/// Size: 0x0008 (0x000070 - 0x000078)
class UFortAthenaBTTask_ReverseVehicle : public UBTTaskNode
{ 
public:
	bool                                               bReverseVehicle;                                            // 0x0070   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0071   (0x0007)  MISSED
};

/// Class /Script/FortniteAIServer.FortAthenaBTTask_RunDynamicSubtree
/// Size: 0x0008 (0x000088 - 0x000090)
class UFortAthenaBTTask_RunDynamicSubtree : public UBTTask_RunBehaviorDynamic
{ 
public:
	bool                                               bCallParentOnInstanceCreated : 1;                           // 0x0088:0 (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0089   (0x0007)  MISSED
};

/// Class /Script/FortniteAIServer.FortAthenaBTTask_SetAggressiveDriving
/// Size: 0x0008 (0x000070 - 0x000078)
class UFortAthenaBTTask_SetAggressiveDriving : public UBTTaskNode
{ 
public:
	bool                                               bAggressiveDriving;                                         // 0x0070   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0071   (0x0007)  MISSED
};

/// Class /Script/FortniteAIServer.FortAthenaBTTask_ShootTrap
/// Size: 0x0030 (0x000078 - 0x0000A8)
class UFortAthenaBTTask_ShootTrap : public UBTTask_Wait
{ 
public:
	FBlackboardKeySelector                             TargetActorKey;                                             // 0x0078   (0x0028)  
	FName                                              TrapOnPathKeyName;                                          // 0x00A0   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00A4   (0x0004)  MISSED
};

/// Class /Script/FortniteAIServer.FortAthenaBTTask_SteerMovement
/// Size: 0x0030 (0x000070 - 0x0000A0)
class UFortAthenaBTTask_SteerMovement : public UBTTaskNode
{ 
public:
	FBlackboardKeySelector                             SteerDirectionKeySelector;                                  // 0x0070   (0x0028)  
	bool                                               bSetControlRotation : 1;                                    // 0x0098:0 (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0099   (0x0007)  MISSED
};

/// Class /Script/FortniteAIServer.FortAthenaBTTask_Undermine
/// Size: 0x0018 (0x000070 - 0x000088)
class UFortAthenaBTTask_Undermine : public UBTTaskNode
{ 
public:
	FName                                              UndermineTargetKeyName;                                     // 0x0070   (0x0004)  
	FName                                              UndermineLocationImpactName;                                // 0x0074   (0x0004)  
	FName                                              UndermineExecutionStatusKeyName;                            // 0x0078   (0x0004)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x007C   (0x000C)  MISSED
};

/// Class /Script/FortniteAIServer.FortAthenaBTTask_UseItem
/// Size: 0x0058 (0x000070 - 0x0000C8)
class UFortAthenaBTTask_UseItem : public UBTTaskNode
{ 
public:
	FName                                              ActionObjectKeyName;                                        // 0x0070   (0x0004)  
	FName                                              ExecutionStatusKeyName;                                     // 0x0074   (0x0004)  
	FFortBehaviorValue_Float                           MinimumWaitTimeBetweenUses;                                 // 0x0078   (0x000C)  
	FFortBehaviorValue_Float                           MaximumWaitTimeBetweenUses;                                 // 0x0084   (0x000C)  
	FFortBehaviorValue_Bool                            ValidateAbility;                                            // 0x0090   (0x000C)  
	FFortBehaviorValue_Bool                            ResetActionObjectKey;                                       // 0x009C   (0x000C)  
	FFortBehaviorValue_Bool                            UseAlternateMode;                                           // 0x00A8   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00B4   (0x0004)  MISSED
	float                                              MinWaitTimeBetweenUses;                                     // 0x00B8   (0x0004)  
	float                                              MaxWaitTimeBetweenUses;                                     // 0x00BC   (0x0004)  
	bool                                               bValidateAbility;                                           // 0x00C0   (0x0001)  
	bool                                               bResetActionObjectKey;                                      // 0x00C1   (0x0001)  
	bool                                               bUseAlternateMode;                                          // 0x00C2   (0x0001)  
	unsigned char                                      UnknownData01_6[0x5];                                       // 0x00C3   (0x0005)  MISSED
};

/// Class /Script/FortniteAIServer.FortAthenaBTTask_UseSmartObject
/// Size: 0x0028 (0x000070 - 0x000098)
class UFortAthenaBTTask_UseSmartObject : public UBTTaskNode
{ 
public:
	FGameplayTag                                       EvaluationTag;                                              // 0x0070   (0x0004)  
	FName                                              SmartObjectsStatusKeyName;                                  // 0x0074   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0078   (0x0004)  MISSED
	FName                                              SmartObjectDestinationRotationKeyName;                      // 0x007C   (0x0004)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x0080   (0x0002)  MISSED
	bool                                               bHandleAbortWithSoftDisable;                                // 0x0082   (0x0001)  
	unsigned char                                      UnknownData02_6[0x15];                                      // 0x0083   (0x0015)  MISSED
};

/// Class /Script/FortniteAIServer.FortAthenaBTTask_VehicleHonk
/// Size: 0x0010 (0x000070 - 0x000080)
class UFortAthenaBTTask_VehicleHonk : public UBTTaskNode
{ 
public:
	float                                              MaxHonkTime;                                                // 0x0070   (0x0004)  
	float                                              MinHonkTime;                                                // 0x0074   (0x0004)  
	float                                              MaxFlickerTime;                                             // 0x0078   (0x0004)  
	float                                              MinFlickerTime;                                             // 0x007C   (0x0004)  
};

/// Class /Script/FortniteAIServer.FortAthenaBTTask_VehicleTurnTo
/// Size: 0x0008 (0x000098 - 0x0000A0)
class UFortAthenaBTTask_VehicleTurnTo : public UBTTask_BlackboardBase
{ 
public:
	float                                              Precision;                                                  // 0x0098   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x009C   (0x0004)  MISSED
};

/// Class /Script/FortniteAIServer.FortAthenaBTTask_VerseNPCMoveTo
/// Size: 0x0018 (0x0000C0 - 0x0000D8)
class UFortAthenaBTTask_VerseNPCMoveTo : public UFortAthenaBTTask_MoveTo
{ 
public:
	FName                                              AcceptableRadiusKeyName;                                    // 0x00C0   (0x0004)  
	FName                                              AllowStrafeKeyName;                                         // 0x00C4   (0x0004)  
	FName                                              AllowPartialPathName;                                       // 0x00C8   (0x0004)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x00CC   (0x000C)  MISSED
};

/// Class /Script/FortniteAIServer.FortAthenaBTTask_Zipline
/// Size: 0x0010 (0x000070 - 0x000080)
class UFortAthenaBTTask_Zipline : public UBTTaskNode
{ 
public:
	FName                                              UsageExecutionStatusName;                                   // 0x0070   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0074   (0x0004)  MISSED
	FName                                              ZiplineTargetName;                                          // 0x0078   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x007C   (0x0004)  MISSED


	/// Functions
	// Function /Script/FortniteAIServer.FortAthenaBTTask_Zipline.OnZiplineStateChanged
	// void OnZiplineStateChanged(bool bIsZiplining, class AFortPlayerPawn* FortPlayerPawn);                                 // [0x9930f84] Final|Native|Public  
};

/// Class /Script/FortniteAIServer.FortAthenaNpcEvaluator_Encampment
/// Size: 0x02A8 (0x0001B0 - 0x000458)
class UFortAthenaNpcEvaluator_Encampment : public UFortAthenaAIBotEvaluator_Movement
{ 
public:
	FScalableFloat                                     EncampmentEnable;                                           // 0x01B0   (0x0028)  
	FScalableFloat                                     EncampmentTentativeDelayMin;                                // 0x01D8   (0x0028)  
	FScalableFloat                                     EncampmentTentativeDelayMax;                                // 0x0200   (0x0028)  
	FScalableFloat                                     EncampmentDurationMin;                                      // 0x0228   (0x0028)  
	FScalableFloat                                     EncampmentDurationMax;                                      // 0x0250   (0x0028)  
	FScalableFloat                                     BuilderPercentage;                                          // 0x0278   (0x0028)  
	FScalableFloat                                     BuilderMinDistance;                                         // 0x02A0   (0x0028)  
	FScalableFloat                                     BuilderMaxDistance;                                         // 0x02C8   (0x0028)  
	FScalableFloat                                     GuardMinDistance;                                           // 0x02F0   (0x0028)  
	FScalableFloat                                     GuardMaxDistance;                                           // 0x0318   (0x0028)  
	FScalableFloat                                     AllowInSwimming;                                            // 0x0340   (0x0028)  
	FScalableFloat                                     AllowInFalling;                                             // 0x0368   (0x0028)  
	FScalableFloat                                     MinSquadMembersCountToBuild;                                // 0x0390   (0x0028)  
	FName                                              EncampmentStatusKeyName;                                    // 0x03B8   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x03BC   (0x0004)  MISSED
	FName                                              EncampmentMovementStateKeyName;                             // 0x03C0   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x03C4   (0x0004)  MISSED
	FName                                              EncampmentCenterLocationKeyName;                            // 0x03C8   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x03CC   (0x0004)  MISSED
	FName                                              EncampmentDestinationKeyName;                               // 0x03D0   (0x0004)  
	unsigned char                                      UnknownData03_5[0x4];                                       // 0x03D4   (0x0004)  MISSED
	FName                                              EncampmentAroundCampFireLocationKeyName;                    // 0x03D8   (0x0004)  
	unsigned char                                      UnknownData04_5[0x4];                                       // 0x03DC   (0x0004)  MISSED
	FName                                              EncampmentRoleKeyName;                                      // 0x03E0   (0x0004)  
	unsigned char                                      UnknownData05_5[0x4];                                       // 0x03E4   (0x0004)  MISSED
	FName                                              DefensiveBuildName;                                         // 0x03E8   (0x0004)  
	unsigned char                                      UnknownData06_6[0x6C];                                      // 0x03EC   (0x006C)  MISSED
};

/// Class /Script/FortniteAIServer.FortAthenaNpcEvaluator_FollowPatrolPath
/// Size: 0x0038 (0x0001B0 - 0x0001E8)
class UFortAthenaNpcEvaluator_FollowPatrolPath : public UFortAthenaAIBotEvaluator_Movement
{ 
public:
	FName                                              FollowPatrolPathKeyName;                                    // 0x01B0   (0x0004)  
	FName                                              FollowPatrolPathMovementStateKeyName;                       // 0x01B4   (0x0004)  
	FName                                              FollowPatrolPathDestinationKeyName;                         // 0x01B8   (0x0004)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x01BC   (0x0008)  MISSED
	float                                              ChanceToTakeABreak;                                         // 0x01C4   (0x0004)  
	float                                              BreakDurationMin;                                           // 0x01C8   (0x0004)  
	float                                              BreakDurationMax;                                           // 0x01CC   (0x0004)  
	unsigned char                                      UnknownData01_6[0x18];                                      // 0x01D0   (0x0018)  MISSED
};

/// Class /Script/FortniteAIServer.FortAthenaNpcEvaluator_FollowSquadLeader
/// Size: 0x0150 (0x0001B0 - 0x000300)
class UFortAthenaNpcEvaluator_FollowSquadLeader : public UFortAthenaAIBotEvaluator_Movement
{ 
public:
	FScalableFloat                                     FormationOffsetRadiusMin;                                   // 0x01B0   (0x0028)  
	FScalableFloat                                     FormationOffsetRadiusMax;                                   // 0x01D8   (0x0028)  
	FScalableFloat                                     TooFarFromSquadLeaderDistance;                              // 0x0200   (0x0028)  
	FScalableFloat                                     MaxNoiseRadius;                                             // 0x0228   (0x0028)  
	FScalableFloat                                     MinDurationNoiseEvaluate;                                   // 0x0250   (0x0028)  
	FScalableFloat                                     MaxDurationNoiseEvaluate;                                   // 0x0278   (0x0028)  
	FName                                              FollowSquadLeaderStatusKeyName;                             // 0x02A0   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x02A4   (0x0004)  MISSED
	FName                                              FollowSquadLeaderMovementStateKeyName;                      // 0x02A8   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x02AC   (0x0004)  MISSED
	FName                                              FollowSquadLeaderDestinationKeyName;                        // 0x02B0   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x02B4   (0x0004)  MISSED
	FName                                              TooFarFromLeaderKeyName;                                    // 0x02B8   (0x0004)  
	unsigned char                                      UnknownData03_5[0x4];                                       // 0x02BC   (0x0004)  MISSED
	FVector                                            CachedSquadFormationOffset;                                 // 0x02C0   (0x0018)  
	FVector                                            CachedNoiseOffset;                                          // 0x02D8   (0x0018)  
	float                                              CachedTooFarFromSquadLeaderDistanceSqr;                     // 0x02F0   (0x0004)  
	float                                              LastNoiseOffsetUpdateTime;                                  // 0x02F4   (0x0004)  
	float                                              DurationNoiseEvaluate;                                      // 0x02F8   (0x0004)  
	unsigned char                                      UnknownData04_6[0x4];                                       // 0x02FC   (0x0004)  MISSED
};

/// Class /Script/FortniteAIServer.FortAthenaNpcEvaluator_Leash
/// Size: 0x0040 (0x0001B0 - 0x0001F0)
class UFortAthenaNpcEvaluator_Leash : public UFortAthenaAIBotEvaluator_Movement
{ 
public:
	FName                                              LeashKeyName;                                               // 0x01B0   (0x0004)  
	FName                                              LeashMovementStateKeyName;                                  // 0x01B4   (0x0004)  
	FName                                              LeashDestinationKeyName;                                    // 0x01B8   (0x0004)  
	FName                                              LeashLocationKeyName;                                       // 0x01BC   (0x0004)  
	FName                                              LeashOuterRadiusKeyName;                                    // 0x01C0   (0x0004)  
	FName                                              ShouldTeleportInLeashKeyName;                               // 0x01C4   (0x0004)  
	FName                                              TriggerLeashBehaviorKeyName;                                // 0x01C8   (0x0004)  
	bool                                               bAlwaysForceMoveToLeashCenter;                              // 0x01CC   (0x0001)  
	bool                                               bForcePositionOnLeash;                                      // 0x01CD   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x01CE   (0x0002)  MISSED
	class UClass*                                      AvoidObstaclesFilterClass;                                  // 0x01D0   (0x0008)  
	unsigned char                                      UnknownData01_5[0x10];                                      // 0x01D8   (0x0010)  MISSED
	class UFortAthenaAIRuntimeParameters_Leash*        LeashRuntimeParameters;                                     // 0x01E8   (0x0008)  
};

/// Class /Script/FortniteAIServer.FortAthenaNpcEvaluator_Patrolling
/// Size: 0x0050 (0x0001B0 - 0x000200)
class UFortAthenaNpcEvaluator_Patrolling : public UFortAthenaAIBotEvaluator_Movement
{ 
public:
	FName                                              PatrollingKeyName;                                          // 0x01B0   (0x0004)  
	FName                                              PatrollingMovementStateKeyName;                             // 0x01B4   (0x0004)  
	FName                                              PatrollingDestinationKeyName;                               // 0x01B8   (0x0004)  
	FName                                              DynamicBlueprintStatusKeyName;                              // 0x01BC   (0x0004)  
	FName                                              DynamicBlueprintActorKeyName;                               // 0x01C0   (0x0004)  
	FName                                              PatrollingShouldMoveKeyName;                                // 0x01C4   (0x0004)  
	FName                                              PatrollingAppendDestinationKeyName;                         // 0x01C8   (0x0004)  
	unsigned char                                      UnknownData00_5[0x10];                                      // 0x01CC   (0x0010)  MISSED
	float                                              DistanceToTestPoint;                                        // 0x01DC   (0x0004)  
	bool                                               bCanDisablePatrolling;                                      // 0x01E0   (0x0001)  
	bool                                               bCanReenablePatrolling;                                     // 0x01E1   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x01E2   (0x0002)  MISSED
	float                                              ReenableTimer;                                              // 0x01E4   (0x0004)  
	bool                                               bCanSelectNearestPatrolPointAtStart;                        // 0x01E8   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x01E9   (0x0007)  MISSED
	class UFortAthenaNpcPatrollingComponent*           CachedNpcPatrollingComponent;                               // 0x01F0   (0x0008)  
	unsigned char                                      UnknownData03_6[0x8];                                       // 0x01F8   (0x0008)  MISSED
};

/// Class /Script/FortniteAIServer.FortQueryContext_BotPOIVolume
/// Size: 0x0020 (0x000028 - 0x000048)
class UFortQueryContext_BotPOIVolume : public UEnvQueryContext
{ 
public:
	bool                                               bSetProjectedToNavmeshLocationAsContext;                    // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0029   (0x0007)  MISSED
	FVector                                            ProjectionExtent;                                           // 0x0030   (0x0018)  
};

/// Class /Script/FortniteAIServer.FortAthenaAttachToActorStateTreeTask
/// Size: 0x0048 (0x000048 - 0x000090)
class UFortAthenaAttachToActorStateTreeTask : public UStateTreeTaskBlueprintBase
{ 
public:
	class AActor*                                      Actor;                                                      // 0x0048   (0x0008)  
	class AActor*                                      TargetActor;                                                // 0x0050   (0x0008)  
	EFortAthenaStateTreeTaskFeatureExecutionMode       AttachExecutionMode;                                        // 0x0058   (0x0004)  
	bool                                               bHandleAthenaMovComponent;                                  // 0x005C   (0x0001)  
	bool                                               bSetPhysicsToQueryOnlyWhileAttached;                        // 0x005D   (0x0001)  
	bool                                               bTryToAttachToSkeletalMeshOnTargetActor;                    // 0x005E   (0x0001)  
	bool                                               bChangeBaseToSkeletalMeshOnTargetActor;                     // 0x005F   (0x0001)  
	EAttachmentRule                                    AttachmentLocationRule;                                     // 0x0060   (0x0001)  
	EAttachmentRule                                    AttachmentRotationRule;                                     // 0x0061   (0x0001)  
	EAttachmentRule                                    AttachmentScaleRule;                                        // 0x0062   (0x0001)  
	bool                                               bWeldSimulatedBodiesOnAttach;                               // 0x0063   (0x0001)  
	FName                                              AttachmentSocketName;                                       // 0x0064   (0x0004)  
	EFortAthenaStateTreeTaskFeatureExecutionMode       DetachExecutionMode;                                        // 0x0068   (0x0004)  
	bool                                               bForceChangeBaseOnDetach;                                   // 0x006C   (0x0001)  
	EDetachmentRule                                    DetachmentLocationRule;                                     // 0x006D   (0x0001)  
	EDetachmentRule                                    DetachmentRotationRule;                                     // 0x006E   (0x0001)  
	EDetachmentRule                                    DetachmentScaleRule;                                        // 0x006F   (0x0001)  
	bool                                               bCallModifyOnDetach;                                        // 0x0070   (0x0001)  
	bool                                               bHandleLaunchCharacter;                                     // 0x0071   (0x0001)  
	bool                                               bHasHandledLaunchCharacter;                                 // 0x0072   (0x0001)  
	unsigned char                                      UnknownData00_5[0x5];                                       // 0x0073   (0x0005)  MISSED
	class AFortPawn*                                   FortPawnActor;                                              // 0x0078   (0x0008)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x0080   (0x0010)  MISSED
};

/// Class /Script/FortniteAIServer.FortAthenaPlayContextualAnimTaskInstanceData
/// Size: 0x00D8 (0x000028 - 0x000100)
class UFortAthenaPlayContextualAnimTaskInstanceData : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	class AActor*                                      PrimaryActor;                                               // 0x0028   (0x0008)  
	class AActor*                                      SecondaryActor;                                             // 0x0030   (0x0008)  
	FName                                              SecondaryRole;                                              // 0x0038   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x003C   (0x0004)  MISSED
	class AActor*                                      TertiaryActor;                                              // 0x0040   (0x0008)  
	FName                                              TertiaryRole;                                               // 0x0048   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x004C   (0x0004)  MISSED
	class UContextualAnimSceneAsset*                   SceneAsset;                                                 // 0x0050   (0x0008)  
	FName                                              SectionName;                                                // 0x0058   (0x0004)  
	unsigned char                                      UnknownData03_5[0x4];                                       // 0x005C   (0x0004)  MISSED
	FGameplayTagContainer                              PrimaryActorExternalTags;                                   // 0x0060   (0x0020)  
	FGameplayTagContainer                              SecondaryActorExternalTags;                                 // 0x0080   (0x0020)  
	FGameplayTagContainer                              TertiaryActorExternalTags;                                  // 0x00A0   (0x0020)  
	EFortAthenaPlayContextualAnimExecutionMethod       ExecutionMethod;                                            // 0x00C0   (0x0001)  
	bool                                               bWaitForNotifyEventToEnd;                                   // 0x00C1   (0x0001)  
	unsigned char                                      UnknownData04_5[0x2];                                       // 0x00C2   (0x0002)  MISSED
	FName                                              NotifyEventNameToEnd;                                       // 0x00C4   (0x0004)  
	int32_t                                            LoopsToRun;                                                 // 0x00C8   (0x0004)  
	bool                                               bLoopForever;                                               // 0x00CC   (0x0001)  
	unsigned char                                      UnknownData05_5[0x3];                                       // 0x00CD   (0x0003)  MISSED
	float                                              DelayBetweenLoops;                                          // 0x00D0   (0x0004)  
	float                                              RandomDeviationBetweenLoops;                                // 0x00D4   (0x0004)  
	TArray<FContextualAnimWarpTarget>                  WarpTargets;                                                // 0x00D8   (0x0010)  
	bool                                               bFindAnimSetBasedOnWarpTargets;                             // 0x00E8   (0x0001)  
	unsigned char                                      UnknownData06_6[0x17];                                      // 0x00E9   (0x0017)  MISSED


	/// Functions
	// Function /Script/FortniteAIServer.FortAthenaPlayContextualAnimTaskInstanceData.OnNotifyBeginReceived
	// void OnNotifyBeginReceived(FName NotifyName, FBranchingPointNotifyPayload& BranchingPointNotifyPayload);              // [0x993fe60] Final|Native|Public|HasOutParms 
	// Function /Script/FortniteAIServer.FortAthenaPlayContextualAnimTaskInstanceData.OnMontageEnded
	// void OnMontageEnded(class UAnimMontage* EndedMontage, bool bInterrupted);                                             // [0x993fcd0] Final|Native|Public  
};

/// Class /Script/FortniteAIServer.FortAthenaPlayInteractionStateTreeTask
/// Size: 0x0080 (0x000048 - 0x0000C8)
class UFortAthenaPlayInteractionStateTreeTask : public UStateTreeTaskBlueprintBase
{ 
public:
	class AActor*                                      InteractorActor;                                            // 0x0048   (0x0008)  
	class AActor*                                      InteractableActor;                                          // 0x0050   (0x0008)  
	class UAnimMontage*                                InteractorMontage;                                          // 0x0058   (0x0008)  
	class UAnimMontage*                                InteractableMontage;                                        // 0x0060   (0x0008)  
	bool                                               bWaitForNotifyEventToEnd;                                   // 0x0068   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0069   (0x0003)  MISSED
	FName                                              NotifyEventNameToEnd;                                       // 0x006C   (0x0004)  
	bool                                               bAddMotionWarpingTargets;                                   // 0x0070   (0x0001)  
	bool                                               bDisableCollisionBetweenActors;                             // 0x0071   (0x0001)  
	bool                                               bSetMovementModeToFlying;                                   // 0x0072   (0x0001)  
	unsigned char                                      UnknownData01_5[0x1];                                       // 0x0073   (0x0001)  MISSED
	int32_t                                            LoopsToRun;                                                 // 0x0074   (0x0004)  
	bool                                               bLoopForever;                                               // 0x0078   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0079   (0x0003)  MISSED
	float                                              DelayBetweenLoops;                                          // 0x007C   (0x0004)  
	float                                              RandomDeviationBetweenLoops;                                // 0x0080   (0x0004)  
	bool                                               bStopInteractorAnimMontageOnExit;                           // 0x0084   (0x0001)  
	bool                                               bStopInteractableAnimMontageOnExit;                         // 0x0085   (0x0001)  
	unsigned char                                      UnknownData03_6[0x42];                                      // 0x0086   (0x0042)  MISSED


	/// Functions
	// Function /Script/FortniteAIServer.FortAthenaPlayInteractionStateTreeTask.OnNotifyBeginReceived
	// void OnNotifyBeginReceived(FName NotifyName, FBranchingPointNotifyPayload& BranchingPointNotifyPayload);              // [0x993ff40] Final|Native|Private|HasOutParms 
	// Function /Script/FortniteAIServer.FortAthenaPlayInteractionStateTreeTask.OnMontageEnded
	// void OnMontageEnded(class UAnimMontage* EndedMontage, bool bInterrupted);                                             // [0x993fd98] Final|Native|Private 
};

/// Class /Script/FortniteAIServer.FortAthenaPlayMontageStateTreeTask
/// Size: 0x0048 (0x000048 - 0x000090)
class UFortAthenaPlayMontageStateTreeTask : public UStateTreeTaskBlueprintBase
{ 
public:
	class AActor*                                      Actor;                                                      // 0x0048   (0x0008)  
	class UAnimMontage*                                Montage;                                                    // 0x0050   (0x0008)  
	bool                                               bWaitForNotifyEventToEnd;                                   // 0x0058   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0059   (0x0003)  MISSED
	FName                                              NotifyEventNameToEnd;                                       // 0x005C   (0x0004)  
	bool                                               bSetMovementModeToFlying;                                   // 0x0060   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0061   (0x0003)  MISSED
	int32_t                                            LoopsToRun;                                                 // 0x0064   (0x0004)  
	bool                                               bLoopForever;                                               // 0x0068   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0069   (0x0003)  MISSED
	float                                              DelayBetweenLoops;                                          // 0x006C   (0x0004)  
	float                                              RandomDeviationBetweenLoops;                                // 0x0070   (0x0004)  
	bool                                               bStopAnimMontageOnExit;                                     // 0x0074   (0x0001)  
	unsigned char                                      UnknownData03_6[0x1B];                                      // 0x0075   (0x001B)  MISSED


	/// Functions
	// Function /Script/FortniteAIServer.FortAthenaPlayMontageStateTreeTask.HandleNotifyBeginReceived
	// void HandleNotifyBeginReceived(FName NotifyName, FBranchingPointNotifyPayload& BranchingPointNotifyPayload);          // [0x993fbd8] Final|Native|Private|HasOutParms 
	// Function /Script/FortniteAIServer.FortAthenaPlayMontageStateTreeTask.HandleMontageEnded
	// void HandleMontageEnded(class UAnimMontage* EndedMontage, bool bInterrupted);                                         // [0x993fb10] Final|Native|Private 
};

/// Class /Script/FortniteAIServer.FortWorldConditionWorldState_State
/// Size: 0x0020 (0x000028 - 0x000048)
class UFortWorldConditionWorldState_State : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x48];                                      // 0x0000   (0x0048)  MISSED


	/// Functions
	// Function /Script/FortniteAIServer.FortWorldConditionWorldState_State.HandleWorldStateChanged
	// void HandleWorldStateChanged();                                                                                       // [0x993fcb8] Final|Native|Private 
};

/// Struct /Script/FortniteAIServer.FortAthenaHandleSoftDisableGuardStateTreeTaskInstanceData
/// Size: 0x0020 (0x000000 - 0x000020)
struct FFortAthenaHandleSoftDisableGuardStateTreeTaskInstanceData
{ 
	FStateTreeStructRef                                SoftDisableStateReference;                                  // 0x0000   (0x0010)  
	TArray<class AActor*>                              ActorsToTeleportOnFailure;                                  // 0x0010   (0x0010)  
};

/// Struct /Script/FortniteAIServer.FortAthenaHandleSoftDisableGuardStateTreeTask
/// Size: 0x0000 (0x000020 - 0x000020)
struct FFortAthenaHandleSoftDisableGuardStateTreeTask : FStateTreeTaskCommonBase
{ 
};

/// Struct /Script/FortniteAIServer.FortAthenaSoftDisableStateTreeParameter
/// Size: 0x0010 (0x000000 - 0x000010)
struct FFortAthenaSoftDisableStateTreeParameter
{ 
	TArray<class AActor*>                              ActorsToTeleportOnExit;                                     // 0x0000   (0x0010)  
};

/// Struct /Script/FortniteAIServer.FortAthenaHandleSoftDisableStateTreeTaskInstanceData
/// Size: 0x0030 (0x000000 - 0x000030)
struct FFortAthenaHandleSoftDisableStateTreeTaskInstanceData
{ 
	class AActor*                                      SmartObjectActor;                                           // 0x0000   (0x0008)  
	TArray<class AActor*>                              ActorsToCleanup;                                            // 0x0008   (0x0010)  
	bool                                               bHasReceivedSoftDisableEvent;                               // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0019   (0x0003)  MISSED
	FGameplayTag                                       ReceivedSoftDisableEvent;                                   // 0x001C   (0x0004)  
	FFortAthenaSoftDisableStateTreeParameter           OutState;                                                   // 0x0020   (0x0010)  
};

/// Struct /Script/FortniteAIServer.FortAthenaHandleSoftDisableStateTreeTask
/// Size: 0x0038 (0x000020 - 0x000058)
struct FFortAthenaHandleSoftDisableStateTreeTask : FStateTreeTaskCommonBase
{ 
	FGameplayTag                                       StateTreeEventTag;                                          // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0024   (0x0004)  MISSED
	FVector                                            TeleportOnNavmeshQueryBoxExtents;                           // 0x0028   (0x0018)  
	int32_t                                            MaxTeleportToTryPerActor;                                   // 0x0040   (0x0004)  
	bool                                               bEnableNavmeshTeleportForPlayers;                           // 0x0044   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0045   (0x0003)  MISSED
	float                                              MultiplierOnCapsuleHeightForTeleportLocation;               // 0x0048   (0x0004)  
	float                                              MultiplierOnCapsuleRadiusForFallbackTeleportSweepCastSize;  // 0x004C   (0x0004)  
	float                                              MultiplierOnCapsuleHeightForFallbackTeleportSweepCast;      // 0x0050   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0054   (0x0004)  MISSED
};

/// Struct /Script/FortniteAIServer.FortAthenaPickRandomMontageConfig
/// Size: 0x0010 (0x000000 - 0x000010)
struct FFortAthenaPickRandomMontageConfig
{ 
	class UAnimMontage*                                Montage;                                                    // 0x0000   (0x0008)  
	int32_t                                            RandomWeight;                                               // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
};

/// Struct /Script/FortniteAIServer.FortAthenaPickRandomMontageStateTreeTaskInstanceData
/// Size: 0x0018 (0x000000 - 0x000018)
struct FFortAthenaPickRandomMontageStateTreeTaskInstanceData
{ 
	TArray<FFortAthenaPickRandomMontageConfig>         PossibleMontages;                                           // 0x0000   (0x0010)  
	class UAnimMontage*                                PickedMontage;                                              // 0x0010   (0x0008)  
};

/// Struct /Script/FortniteAIServer.FortAthenaPickRandomMontageStateTreeTask
/// Size: 0x0000 (0x000020 - 0x000020)
struct FFortAthenaPickRandomMontageStateTreeTask : FStateTreeTaskCommonBase
{ 
};

/// Struct /Script/FortniteAIServer.FortAthenaToggleAllowInteractStateTreeTaskInstanceData
/// Size: 0x0010 (0x000000 - 0x000010)
struct FFortAthenaToggleAllowInteractStateTreeTaskInstanceData
{ 
	class AActor*                                      Actor;                                                      // 0x0000   (0x0008)  
	class AActor*                                      TargetActor;                                                // 0x0008   (0x0008)  
};

/// Struct /Script/FortniteAIServer.FortAthenaToggleAllowInteractStateTreeTaskTreeTask
/// Size: 0x0008 (0x000020 - 0x000028)
struct FFortAthenaToggleAllowInteractStateTreeTaskTreeTask : FStateTreeTaskCommonBase
{ 
	EFortAthenaStateTreeTaskFeatureExecutionMode       AddExecutionMode;                                           // 0x0020   (0x0004)  
	EFortAthenaStateTreeTaskFeatureExecutionMode       RemoveExecutionMode;                                        // 0x0024   (0x0004)  
};

/// Struct /Script/FortniteAIServer.FortAthenaTrackEventConsumeStateTreeTaskInstanceData
/// Size: 0x0010 (0x000000 - 0x000010)
struct FFortAthenaTrackEventConsumeStateTreeTaskInstanceData
{ 
	FStateTreeStructRef                                ReferencedEvent;                                            // 0x0000   (0x0010)  
};

/// Struct /Script/FortniteAIServer.FortAthenaTrackEventConsumeStateTreeTask
/// Size: 0x0000 (0x000020 - 0x000020)
struct FFortAthenaTrackEventConsumeStateTreeTask : FStateTreeTaskCommonBase
{ 
};

/// Struct /Script/FortniteAIServer.FortAthenaTrackEventStateTreeTaskStateTreeParameter
/// Size: 0x0008 (0x000000 - 0x000008)
struct FFortAthenaTrackEventStateTreeTaskStateTreeParameter
{ 
	bool                                               bHasReceivedTrackedEvent;                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	FGameplayTag                                       ReceivedEventTag;                                           // 0x0004   (0x0004)  
};

/// Struct /Script/FortniteAIServer.FortAthenaTrackEventStateTreeTaskInstanceData
/// Size: 0x0008 (0x000000 - 0x000008)
struct FFortAthenaTrackEventStateTreeTaskInstanceData
{ 
	FFortAthenaTrackEventStateTreeTaskStateTreeParameter OutParameter;                                             // 0x0000   (0x0008)  
};

/// Struct /Script/FortniteAIServer.FortAthenaTrackEventStateTreeTask
/// Size: 0x0050 (0x000020 - 0x000070)
struct FFortAthenaTrackEventStateTreeTask : FStateTreeTaskCommonBase
{ 
	FGameplayTagQuery                                  EventTagQuery;                                              // 0x0020   (0x0048)  
	FGameplayTag                                       StateTreeEventTag;                                          // 0x0068   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x006C   (0x0004)  MISSED
};

/// Struct /Script/FortniteAIServer.FortAthenaWorldConditionInstanceData
/// Size: 0x0050 (0x000000 - 0x000050)
struct FFortAthenaWorldConditionInstanceData
{ 
	class AActor*                                      ActorA;                                                     // 0x0000   (0x0008)  
	class AActor*                                      ActorB;                                                     // 0x0008   (0x0008)  
	class AActor*                                      ActorC;                                                     // 0x0010   (0x0008)  
	bool                                               bOutResult;                                                 // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0019   (0x0007)  MISSED
	FWorldConditionQueryState                          QueryState;                                                 // 0x0020   (0x0030)  
};

/// Struct /Script/FortniteAIServer.FortAthenaWorldConditionInstanceDataStateTreeTask
/// Size: 0x0020 (0x000020 - 0x000040)
struct FFortAthenaWorldConditionInstanceDataStateTreeTask : FStateTreeTaskCommonBase
{ 
	FWorldConditionQueryDefinition                     Conditions;                                                 // 0x0020   (0x0018)  
	FGameplayTag                                       StateTreeEventTag;                                          // 0x0038   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Struct /Script/FortniteAIServer.FortWorldConditionGameplayTagActorQueryState
/// Size: 0x0008 (0x000000 - 0x000008)
struct FFortWorldConditionGameplayTagActorQueryState
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/FortniteAIServer.FortWorldConditionGameplayTagActor
/// Size: 0x0030 (0x000010 - 0x000040)
struct FFortWorldConditionGameplayTagActor : FWorldConditionCommonBase
{ 
	FWorldConditionContextDataRef                      ActorContextRef;                                            // 0x0010   (0x0008)  
	FGameplayTagContainer                              TagContainerToCheck;                                        // 0x0018   (0x0020)  
	EHasMatchingGameplayTagContainerTestType           TestType;                                                   // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0039   (0x0007)  MISSED
};

/// Struct /Script/FortniteAIServer.FortWorldConditionPlayerHasConvertedNPC
/// Size: 0x0010 (0x000010 - 0x000020)
struct FFortWorldConditionPlayerHasConvertedNPC : FWorldConditionCommonActorBase
{ 
	FWorldConditionContextDataRef                      ActorRef;                                                   // 0x0010   (0x0008)  
	EFortWorldConditionPlayerHasConvertedNPCCondition  ConditionToCheck;                                           // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0019   (0x0007)  MISSED
};

/// Struct /Script/FortniteAIServer.FortWorldConditionTimeOfDay
/// Size: 0x0010 (0x000010 - 0x000020)
struct FFortWorldConditionTimeOfDay : FWorldConditionCommonBase
{ 
	FWorldConditionContextDataRef                      ActorContextRef;                                            // 0x0010   (0x0008)  
	int32_t                                            ValidTimesOfDay;                                            // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/FortniteAIServer.FortWorldConditionWorldStatState
/// Size: 0x0020 (0x000000 - 0x000020)
struct FFortWorldConditionWorldStatState
{ 
	unsigned char                                      UnknownData00_2[0x20];                                      // 0x0000   (0x0020)  MISSED
};

/// Struct /Script/FortniteAIServer.FortWorldConditionWorldStat
/// Size: 0x0018 (0x000010 - 0x000028)
struct FFortWorldConditionWorldStat : FWorldConditionCommonBase
{ 
	FName                                              WorldStatRowName;                                           // 0x0010   (0x0004)  
	FInt32Range                                        ValueRange;                                                 // 0x0014   (0x0010)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Struct /Script/FortniteAIServer.PFWNPCReactions_TriggeredReactions_PersistentInfoData
/// Size: 0x0010 (0x000000 - 0x000010)
struct FPFWNPCReactions_TriggeredReactions_PersistentInfoData
{ 
	SDK_UNDEFINED(16,13986) /* TArray<FString> */      __um(TriggeredReactionRowNames);                            // 0x0000   (0x0010)  
};

/// Struct /Script/FortniteAIServer.PFWNPCReactions_PersistentInfo
/// Size: 0x0010 (0x000000 - 0x000010)
struct FPFWNPCReactions_PersistentInfo
{ 
	FPFWNPCReactions_TriggeredReactions_PersistentInfoData TriggeredReactions_PersistentInfoData;                  // 0x0000   (0x0010)  
};

/// Struct /Script/FortniteAIServer.GameplayTagActorHasMatchingGameplayTagInstanceData
/// Size: 0x0010 (0x000000 - 0x000010)
struct FGameplayTagActorHasMatchingGameplayTagInstanceData
{ 
	class AActor*                                      Actor;                                                      // 0x0000   (0x0008)  
	FGameplayTag                                       TagToCheck;                                                 // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
};

/// Struct /Script/FortniteAIServer.GameplayTagActorHasMatchingGameplayTagCondition
/// Size: 0x0008 (0x000020 - 0x000028)
struct FGameplayTagActorHasMatchingGameplayTagCondition : FStateTreeConditionCommonBase
{ 
	bool                                               bInvert;                                                    // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0021   (0x0007)  MISSED
};

/// Struct /Script/FortniteAIServer.GameplayTagActorHasMatchingGameplayTagContainerInstanceData
/// Size: 0x0028 (0x000000 - 0x000028)
struct FGameplayTagActorHasMatchingGameplayTagContainerInstanceData
{ 
	class AActor*                                      Actor;                                                      // 0x0000   (0x0008)  
	FGameplayTagContainer                              TagContainerToCheck;                                        // 0x0008   (0x0020)  
};

/// Struct /Script/FortniteAIServer.GameplayTagActorHasMatchingGameplayContainerTagCondition
/// Size: 0x0008 (0x000020 - 0x000028)
struct FGameplayTagActorHasMatchingGameplayContainerTagCondition : FStateTreeConditionCommonBase
{ 
	EHasMatchingGameplayTagContainerTestType           TestType;                                                   // 0x0020   (0x0001)  
	bool                                               bInvert;                                                    // 0x0021   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x0022   (0x0006)  MISSED
};

/// Struct /Script/FortniteAIServer.FortAthenaAddGameplayTagsStateTreeTaskInstanceData
/// Size: 0x0028 (0x000000 - 0x000028)
struct FFortAthenaAddGameplayTagsStateTreeTaskInstanceData
{ 
	class AActor*                                      Actor;                                                      // 0x0000   (0x0008)  
	FGameplayTagContainer                              Tags;                                                       // 0x0008   (0x0020)  
};

/// Struct /Script/FortniteAIServer.FortAthenaAddGameplayTagsStateTreeTask
/// Size: 0x0010 (0x000020 - 0x000030)
struct FFortAthenaAddGameplayTagsStateTreeTask : FStateTreeTaskCommonBase
{ 
	bool                                               bReplicateChange;                                           // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0021   (0x0003)  MISSED
	EFortAthenaStateTreeTaskFeatureExecutionMode       AddExecutionMode;                                           // 0x0024   (0x0004)  
	EFortAthenaStateTreeTaskFeatureExecutionMode       RemoveExecutionMode;                                        // 0x0028   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Struct /Script/FortniteAIServer.FortAthenaArithmeticStateTreeTask
/// Size: 0x0008 (0x000020 - 0x000028)
struct FFortAthenaArithmeticStateTreeTask : FStateTreeTaskCommonBase
{ 
	EGameplayInteractionTaskTrigger                    OperationTrigger;                                           // 0x0020   (0x0001)  
	EFortAthenaArithmeticOperation                     Operation;                                                  // 0x0021   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x0022   (0x0006)  MISSED
};

/// Struct /Script/FortniteAIServer.FortAthenaIntArithmeticStateTreeTaskInstanceData
/// Size: 0x0018 (0x000000 - 0x000018)
struct FFortAthenaIntArithmeticStateTreeTaskInstanceData
{ 
	int32_t                                            FirstOperand;                                               // 0x0000   (0x0004)  
	int32_t                                            SecondOperand;                                              // 0x0004   (0x0004)  
	FStateTreeStructRef                                ReferencedResult;                                           // 0x0008   (0x0010)  
};

/// Struct /Script/FortniteAIServer.FortAthenaIntArithmeticStateTreeTask
/// Size: 0x0000 (0x000028 - 0x000028)
struct FFortAthenaIntArithmeticStateTreeTask : FFortAthenaArithmeticStateTreeTask
{ 
};

/// Struct /Script/FortniteAIServer.FortAthenaFocusAtStateTreeTaskInstanceData
/// Size: 0x0090 (0x000000 - 0x000090)
struct FFortAthenaFocusAtStateTreeTaskInstanceData
{ 
	class AActor*                                      Actor;                                                      // 0x0000   (0x0008)  
	class AActor*                                      FocusActor;                                                 // 0x0008   (0x0008)  
	FVector                                            FocusActorOffset;                                           // 0x0010   (0x0018)  
	FVector                                            FocusWorldPoint;                                            // 0x0028   (0x0018)  
	bool                                               bSetBackOnExit;                                             // 0x0040   (0x0001)  
	unsigned char                                      UnknownData00_6[0x4F];                                      // 0x0041   (0x004F)  MISSED
};

/// Struct /Script/FortniteAIServer.FortAthenaFocusAtStateTreeTask
/// Size: 0x0000 (0x000020 - 0x000020)
struct FFortAthenaFocusAtStateTreeTask : FStateTreeTaskCommonBase
{ 
};

/// Struct /Script/FortniteAIServer.FortAthenaIntStateTreeParameter
/// Size: 0x0004 (0x000000 - 0x000004)
struct FFortAthenaIntStateTreeParameter
{ 
	int32_t                                            Int;                                                        // 0x0000   (0x0004)  
};

/// Struct /Script/FortniteAIServer.FortAthenaMakeIntVariableStateTreeTaskInstanceData
/// Size: 0x0008 (0x000000 - 0x000008)
struct FFortAthenaMakeIntVariableStateTreeTaskInstanceData
{ 
	int32_t                                            DefaultIntValue;                                            // 0x0000   (0x0004)  
	FFortAthenaIntStateTreeParameter                   OutInt;                                                     // 0x0004   (0x0004)  
};

/// Struct /Script/FortniteAIServer.FortAthenaMakeIntVariableStateTreeTask
/// Size: 0x0008 (0x000020 - 0x000028)
struct FFortAthenaMakeIntVariableStateTreeTask : FStateTreeTaskCommonBase
{ 
	bool                                               bResetOnReselect;                                           // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0021   (0x0007)  MISSED
};

/// Struct /Script/FortniteAIServer.FortAthenaPlayContextualAnimStateTreeTask
/// Size: 0x0000 (0x000020 - 0x000020)
struct FFortAthenaPlayContextualAnimStateTreeTask : FStateTreeTaskCommonBase
{ 
};

/// Struct /Script/FortniteAIServer.FortAthenaPlayInteractionStateTreeTaskActorInfo
/// Size: 0x0024 (0x000000 - 0x000024)
struct FFortAthenaPlayInteractionStateTreeTaskActorInfo
{ 
	unsigned char                                      UnknownData00_2[0x24];                                      // 0x0000   (0x0024)  MISSED
};

/// Struct /Script/FortniteAIServer.FortAthenaStateTreeCrouchTaskInstanceData
/// Size: 0x0008 (0x000000 - 0x000008)
struct FFortAthenaStateTreeCrouchTaskInstanceData
{ 
	class AActor*                                      Actor;                                                      // 0x0000   (0x0008)  
};

/// Struct /Script/FortniteAIServer.FortAthenaStateTreeCrouchTask
/// Size: 0x0000 (0x000020 - 0x000020)
struct FFortAthenaStateTreeCrouchTask : FStateTreeTaskCommonBase
{ 
};

/// Struct /Script/FortniteAIServer.FortAthenaStateTreeInteractTaskInstanceData
/// Size: 0x0020 (0x000000 - 0x000020)
struct FFortAthenaStateTreeInteractTaskInstanceData
{ 
	SDK_UNDEFINED(1,13987) /* TEnumAsByte<TInteractionType> */ __um(InteractType);                                 // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	class AActor*                                      Actor;                                                      // 0x0008   (0x0008)  
	class AActor*                                      InteractTargetActor;                                        // 0x0010   (0x0008)  
	float                                              InteractDuration;                                           // 0x0018   (0x0004)  
	float                                              Timer;                                                      // 0x001C   (0x0004)  
};

/// Struct /Script/FortniteAIServer.FortAthenaStateTreeInteractTask
/// Size: 0x0000 (0x000020 - 0x000020)
struct FFortAthenaStateTreeInteractTask : FStateTreeTaskCommonBase
{ 
};

/// Struct /Script/FortniteAIServer.FortAthenaStateTreeLookAroundTaskInstanceData
/// Size: 0x0018 (0x000000 - 0x000018)
struct FFortAthenaStateTreeLookAroundTaskInstanceData
{ 
	class AActor*                                      Actor;                                                      // 0x0000   (0x0008)  
	float                                              LookAtDurationMin;                                          // 0x0008   (0x0004)  
	float                                              LookAtDurationMax;                                          // 0x000C   (0x0004)  
	float                                              LookAtDuration;                                             // 0x0010   (0x0004)  
	float                                              Timer;                                                      // 0x0014   (0x0004)  
};

/// Struct /Script/FortniteAIServer.FortAthenaStateTreeLookAroundTask
/// Size: 0x0000 (0x000020 - 0x000020)
struct FFortAthenaStateTreeLookAroundTask : FStateTreeTaskCommonBase
{ 
};

/// Struct /Script/FortniteAIServer.FortAthenaTeleportToActorStateTreeTaskInstanceData
/// Size: 0x0040 (0x000000 - 0x000040)
struct FFortAthenaTeleportToActorStateTreeTaskInstanceData
{ 
	class AActor*                                      Actor;                                                      // 0x0000   (0x0008)  
	class AActor*                                      TargetActor;                                                // 0x0008   (0x0008)  
	FVector                                            TeleportRelativeLocation;                                   // 0x0010   (0x0018)  
	FRotator                                           TeleportRelativeRotation;                                   // 0x0028   (0x0018)  
};

/// Struct /Script/FortniteAIServer.FortAthenaTeleportToActorStateTreeTask
/// Size: 0x0000 (0x000020 - 0x000020)
struct FFortAthenaTeleportToActorStateTreeTask : FStateTreeTaskCommonBase
{ 
};

/// Struct /Script/FortniteAIServer.FortAthenaToggleGameplayEffectStateTreeTaskInstanceData
/// Size: 0x00C8 (0x000000 - 0x0000C8)
struct FFortAthenaToggleGameplayEffectStateTreeTaskInstanceData
{ 
	class AActor*                                      Actor;                                                      // 0x0000   (0x0008)  
	class AActor*                                      TargetActor;                                                // 0x0008   (0x0008)  
	TArray<class UClass*>                              GameplayEffectClassesToAdd;                                 // 0x0010   (0x0010)  
	bool                                               bAutomaticallyRemoveAddedEffectsOnExit;                     // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0021   (0x0007)  MISSED
	TArray<class UClass*>                              GameplayEffectClassesToRemove;                              // 0x0028   (0x0010)  
	FGameplayTagContainer                              GameplayEffectsByTagsToRemove;                              // 0x0038   (0x0020)  
	FGameplayTagContainer                              GameplayEffectsBySourceTagsToRemove;                        // 0x0058   (0x0020)  
	FGameplayTagContainer                              GameplayEffectsByAppliedTagsToRemove;                       // 0x0078   (0x0020)  
	FGameplayTagContainer                              GameplayEffectsByGrantedTagsToRemove;                       // 0x0098   (0x0020)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x00B8   (0x0010)  MISSED
};

/// Struct /Script/FortniteAIServer.FortAthenaToggleGameplayEffectStateTreeTask
/// Size: 0x0008 (0x000020 - 0x000028)
struct FFortAthenaToggleGameplayEffectStateTreeTask : FStateTreeTaskCommonBase
{ 
	EFortAthenaStateTreeTaskFeatureExecutionMode       AddExecutionMode;                                           // 0x0020   (0x0004)  
	EFortAthenaStateTreeTaskFeatureExecutionMode       RemoveExecutionMode;                                        // 0x0024   (0x0004)  
};

/// Struct /Script/FortniteAIServer.FortWorldConditionWorldState
/// Size: 0x0048 (0x000010 - 0x000058)
struct FFortWorldConditionWorldState : FWorldConditionCommonBase
{ 
	FGameplayTagQuery                                  WorldStateQuery;                                            // 0x0010   (0x0048)  
};

