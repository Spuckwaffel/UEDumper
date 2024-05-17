
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: GameplayTags
/// dependency: GameplayTasks
/// dependency: NavigationSystem

/// Class /Script/AIModule.AIAsyncTaskBlueprintProxy
/// Size: 0x0040 (0x000028 - 0x000068)
class UAIAsyncTaskBlueprintProxy : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FMulticastInlineDelegate)                  OnSuccess                                                   OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnFail                                                      OFFSET(getStruct<T>, {0x38, 16, 0, 0})


	/// Functions
	// Function /Script/AIModule.AIAsyncTaskBlueprintProxy.OnMoveCompleted
	// void OnMoveCompleted(FAIRequestID RequestID, TEnumAsByte<EPathFollowingResult> MovementResult);                          // [0x756cec0] Final|RequiredAPI|Native|Public 
};

/// Class /Script/AIModule.AIResourceInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UAIResourceInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/AIModule.AISenseBlueprintListener
/// Size: 0x0000 (0x000108 - 0x000108)
class UAISenseBlueprintListener : public UUserDefinedStruct
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:
};

/// Class /Script/AIModule.AISenseConfig
/// Size: 0x0020 (0x000028 - 0x000048)
class UAISenseConfig : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FColor)                                    DebugColor                                                  OFFSET(getStruct<T>, {0x28, 4, 0, 0})
	DMember(float)                                     MaxAge                                                      OFFSET(get<float>, {0x2C, 4, 0, 0})
	DMember(bool)                                      bStartsEnabled                                              OFFSET(get<bool>, {0x30, 1, 1, 0})
};

/// Class /Script/AIModule.AISenseConfig_Blueprint
/// Size: 0x0008 (0x000048 - 0x000050)
class UAISenseConfig_Blueprint : public UAISenseConfig
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(class UClass*)                             Implementation                                              OFFSET(get<T>, {0x48, 8, 0, 0})
};

/// Class /Script/AIModule.AISenseConfig_Hearing
/// Size: 0x0018 (0x000048 - 0x000060)
class UAISenseConfig_Hearing : public UAISenseConfig
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(class UClass*)                             Implementation                                              OFFSET(get<T>, {0x48, 8, 0, 0})
	DMember(float)                                     HearingRange                                                OFFSET(get<float>, {0x50, 4, 0, 0})
	DMember(float)                                     LoSHearingRange                                             OFFSET(get<float>, {0x54, 4, 0, 0})
	DMember(bool)                                      bUseLoSHearing                                              OFFSET(get<bool>, {0x58, 1, 1, 0})
	SMember(FAISenseAffiliationFilter)                 DetectionByAffiliation                                      OFFSET(getStruct<T>, {0x5C, 4, 0, 0})
};

/// Class /Script/AIModule.AISenseConfig_Prediction
/// Size: 0x0000 (0x000048 - 0x000048)
class UAISenseConfig_Prediction : public UAISenseConfig
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Class /Script/AIModule.AISenseConfig_Sight
/// Size: 0x0028 (0x000048 - 0x000070)
class UAISenseConfig_Sight : public UAISenseConfig
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	CMember(class UClass*)                             Implementation                                              OFFSET(get<T>, {0x48, 8, 0, 0})
	DMember(float)                                     SightRadius                                                 OFFSET(get<float>, {0x50, 4, 0, 0})
	DMember(float)                                     LoseSightRadius                                             OFFSET(get<float>, {0x54, 4, 0, 0})
	DMember(float)                                     PeripheralVisionAngleDegrees                                OFFSET(get<float>, {0x58, 4, 0, 0})
	SMember(FAISenseAffiliationFilter)                 DetectionByAffiliation                                      OFFSET(getStruct<T>, {0x5C, 4, 0, 0})
	DMember(float)                                     AutoSuccessRangeFromLastSeenLocation                        OFFSET(get<float>, {0x60, 4, 0, 0})
	DMember(float)                                     PointOfViewBackwardOffset                                   OFFSET(get<float>, {0x64, 4, 0, 0})
	DMember(float)                                     NearClippingRadius                                          OFFSET(get<float>, {0x68, 4, 0, 0})
};

/// Class /Script/AIModule.AISenseConfig_Team
/// Size: 0x0000 (0x000048 - 0x000048)
class UAISenseConfig_Team : public UAISenseConfig
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Class /Script/AIModule.AISenseConfig_Touch
/// Size: 0x0008 (0x000048 - 0x000050)
class UAISenseConfig_Touch : public UAISenseConfig
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FAISenseAffiliationFilter)                 DetectionByAffiliation                                      OFFSET(getStruct<T>, {0x48, 4, 0, 0})
};

/// Class /Script/AIModule.AISenseEvent
/// Size: 0x0000 (0x000028 - 0x000028)
class UAISenseEvent : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/AIModule.AISenseEvent_Damage
/// Size: 0x0050 (0x000028 - 0x000078)
class UAISenseEvent_Damage : public UAISenseEvent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	SMember(FAIDamageEvent)                            Event                                                       OFFSET(getStruct<T>, {0x28, 80, 0, 0})
};

/// Class /Script/AIModule.AISenseEvent_Hearing
/// Size: 0x0038 (0x000028 - 0x000060)
class UAISenseEvent_Hearing : public UAISenseEvent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FAINoiseEvent)                             Event                                                       OFFSET(getStruct<T>, {0x28, 56, 0, 0})
};

/// Class /Script/AIModule.CrowdAgentInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UCrowdAgentInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/AIModule.EnvQueryTypes
/// Size: 0x0000 (0x000028 - 0x000028)
class UEnvQueryTypes : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/AIModule.EQSQueryResultSourceInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UEQSQueryResultSourceInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/AIModule.GenericTeamAgentInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UGenericTeamAgentInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/AIModule.PawnAction
/// Size: 0x0068 (0x000028 - 0x000090)
class UPawnAction : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	CMember(class UPawnAction*)                        ChildAction                                                 OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(class UPawnAction*)                        ParentAction                                                OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(class UPawnActionsComponent*)              OwnerComponent                                              OFFSET(get<T>, {0x38, 8, 0, 0})
	CMember(class UObject*)                            Instigator                                                  OFFSET(get<T>, {0x40, 8, 0, 0})
	CMember(class UBrainComponent*)                    BrainComp                                                   OFFSET(get<T>, {0x48, 8, 0, 0})
	DMember(bool)                                      bAllowNewSameClassInstance                                  OFFSET(get<bool>, {0x80, 1, 1, 0})
	DMember(bool)                                      bReplaceActiveSameClassInstance                             OFFSET(get<bool>, {0x80, 1, 1, 1})
	DMember(bool)                                      bShouldPauseMovement                                        OFFSET(get<bool>, {0x80, 1, 1, 2})
	DMember(bool)                                      bAlwaysNotifyOnFinished                                     OFFSET(get<bool>, {0x80, 1, 1, 3})


	/// Functions
	// Function /Script/AIModule.PawnAction.GetActionPriority
	// TEnumAsByte<EAIRequestPriority> GetActionPriority();                                                                     // [0x69bf804] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AIModule.PawnAction.Finish
	// void Finish(TEnumAsByte<EPawnActionResult> WithResult);                                                                  // [0x756c058] RequiredAPI|Native|Protected|BlueprintCallable 
	// Function /Script/AIModule.PawnAction.CreateActionInstance
	// class UPawnAction* CreateActionInstance(class UObject* WorldContextObject, class UClass* ActionClass);                   // [0x756bf30] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/AIModule.PawnActionsComponent
/// Size: 0x0038 (0x0000A0 - 0x0000D8)
class UPawnActionsComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	CMember(class APawn*)                              ControlledPawn                                              OFFSET(get<T>, {0xA0, 8, 0, 0})
	CMember(TArray<FPawnActionStack>)                  ActionStacks                                                OFFSET(get<T>, {0xA8, 16, 0, 0})
	CMember(TArray<FPawnActionEvent>)                  ActionEvents                                                OFFSET(get<T>, {0xB8, 16, 0, 0})
	CMember(class UPawnAction*)                        CurrentAction                                               OFFSET(get<T>, {0xC8, 8, 0, 0})


	/// Functions
	// Function /Script/AIModule.PawnActionsComponent.K2_PushAction
	// bool K2_PushAction(class UPawnAction* NewAction, TEnumAsByte<EAIRequestPriority> Priority, class UObject* Instigator);   // [0x756c504] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AIModule.PawnActionsComponent.K2_PerformAction
	// bool K2_PerformAction(class APawn* Pawn, class UPawnAction* Action, TEnumAsByte<EAIRequestPriority> Priority);           // [0x756c3fc] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/AIModule.PawnActionsComponent.K2_ForceAbortAction
	// TEnumAsByte<EPawnActionAbortState> K2_ForceAbortAction(class UPawnAction* ActionToAbort);                                // [0x756c370] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AIModule.PawnActionsComponent.K2_AbortAction
	// TEnumAsByte<EPawnActionAbortState> K2_AbortAction(class UPawnAction* ActionToAbort);                                     // [0x756c2bc] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/AIModule.PawnAction_BlueprintBase
/// Size: 0x0000 (0x000090 - 0x000090)
class UPawnAction_BlueprintBase : public UPawnAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:


	/// Functions
	// Function /Script/AIModule.PawnAction_BlueprintBase.ActionTick
	// void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);                                                        // [0x228deb8] RequiredAPI|Event|Public|BlueprintEvent 
	// Function /Script/AIModule.PawnAction_BlueprintBase.ActionStart
	// void ActionStart(class APawn* ControlledPawn);                                                                           // [0x228deb8] RequiredAPI|Event|Public|BlueprintEvent 
	// Function /Script/AIModule.PawnAction_BlueprintBase.ActionResume
	// void ActionResume(class APawn* ControlledPawn);                                                                          // [0x228deb8] RequiredAPI|Event|Public|BlueprintEvent 
	// Function /Script/AIModule.PawnAction_BlueprintBase.ActionPause
	// void ActionPause(class APawn* ControlledPawn);                                                                           // [0x228deb8] RequiredAPI|Event|Public|BlueprintEvent 
	// Function /Script/AIModule.PawnAction_BlueprintBase.ActionFinished
	// void ActionFinished(class APawn* ControlledPawn, TEnumAsByte<EPawnActionResult> WithResult);                             // [0x228deb8] RequiredAPI|Event|Public|BlueprintEvent 
};

/// Class /Script/AIModule.PawnAction_Move
/// Size: 0x0060 (0x000090 - 0x0000F0)
class UPawnAction_Move : public UPawnAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	CMember(class AActor*)                             GoalActor                                                   OFFSET(get<T>, {0x90, 8, 0, 0})
	SMember(FVector)                                   GoalLocation                                                OFFSET(getStruct<T>, {0x98, 24, 0, 0})
	DMember(float)                                     AcceptableRadius                                            OFFSET(get<float>, {0xB0, 4, 0, 0})
	CMember(class UClass*)                             FilterClass                                                 OFFSET(get<T>, {0xB8, 8, 0, 0})
	DMember(bool)                                      bAllowStrafe                                                OFFSET(get<bool>, {0xC0, 1, 1, 0})
	DMember(bool)                                      bFinishOnOverlap                                            OFFSET(get<bool>, {0xC0, 1, 1, 1})
	DMember(bool)                                      bUsePathfinding                                             OFFSET(get<bool>, {0xC0, 1, 1, 2})
	DMember(bool)                                      bAllowPartialPath                                           OFFSET(get<bool>, {0xC0, 1, 1, 3})
	DMember(bool)                                      bProjectGoalToNavigation                                    OFFSET(get<bool>, {0xC0, 1, 1, 4})
	DMember(bool)                                      bUpdatePathToGoal                                           OFFSET(get<bool>, {0xC0, 1, 1, 5})
	DMember(bool)                                      bAbortSubActionOnPathChange                                 OFFSET(get<bool>, {0xC0, 1, 1, 6})
};

/// Class /Script/AIModule.PawnAction_Repeat
/// Size: 0x0020 (0x000090 - 0x0000B0)
class UPawnAction_Repeat : public UPawnAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	CMember(class UPawnAction*)                        ActionToRepeat                                              OFFSET(get<T>, {0x90, 8, 0, 0})
	CMember(class UPawnAction*)                        RecentActionCopy                                            OFFSET(get<T>, {0x98, 8, 0, 0})
	CMember(TEnumAsByte<EPawnActionFailHandling>)      ChildFailureHandlingMode                                    OFFSET(get<T>, {0xA0, 1, 0, 0})
};

/// Class /Script/AIModule.PawnAction_Sequence
/// Size: 0x0028 (0x000090 - 0x0000B8)
class UPawnAction_Sequence : public UPawnAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	CMember(TArray<class UPawnAction*>)                ActionSequence                                              OFFSET(get<T>, {0x90, 16, 0, 0})
	CMember(TEnumAsByte<EPawnActionFailHandling>)      ChildFailureHandlingMode                                    OFFSET(get<T>, {0xA0, 1, 0, 0})
	CMember(class UPawnAction*)                        RecentActionCopy                                            OFFSET(get<T>, {0xA8, 8, 0, 0})
};

/// Class /Script/AIModule.PawnAction_Wait
/// Size: 0x0010 (0x000090 - 0x0000A0)
class UPawnAction_Wait : public UPawnAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	DMember(float)                                     TimeToWait                                                  OFFSET(get<float>, {0x90, 4, 0, 0})
};

/// Class /Script/AIModule.AIController
/// Size: 0x0090 (0x000328 - 0x0003B8)
class AAIController : public AController
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 952;

public:
	DMember(bool)                                      bStartAILogicOnPossess                                      OFFSET(get<bool>, {0x360, 1, 1, 0})
	DMember(bool)                                      bStopAILogicOnUnposses                                      OFFSET(get<bool>, {0x360, 1, 1, 1})
	DMember(bool)                                      bLOSflag                                                    OFFSET(get<bool>, {0x360, 1, 1, 2})
	DMember(bool)                                      bSkipExtraLOSChecks                                         OFFSET(get<bool>, {0x360, 1, 1, 3})
	DMember(bool)                                      bAllowStrafe                                                OFFSET(get<bool>, {0x360, 1, 1, 4})
	DMember(bool)                                      bWantsPlayerState                                           OFFSET(get<bool>, {0x360, 1, 1, 5})
	DMember(bool)                                      bSetControlRotationFromPawnOrientation                      OFFSET(get<bool>, {0x360, 1, 1, 6})
	CMember(class UPathFollowingComponent*)            PathFollowingComponent                                      OFFSET(get<T>, {0x368, 8, 0, 0})
	CMember(class UBrainComponent*)                    BrainComponent                                              OFFSET(get<T>, {0x370, 8, 0, 0})
	CMember(class UAIPerceptionComponent*)             PerceptionComponent                                         OFFSET(get<T>, {0x378, 8, 0, 0})
	CMember(class UPawnActionsComponent*)              ActionsComp                                                 OFFSET(get<T>, {0x380, 8, 0, 0})
	CMember(class UBlackboardComponent*)               Blackboard                                                  OFFSET(get<T>, {0x388, 8, 0, 0})
	CMember(class UGameplayTasksComponent*)            CachedGameplayTasksComponent                                OFFSET(get<T>, {0x390, 8, 0, 0})
	CMember(class UClass*)                             DefaultNavigationFilterClass                                OFFSET(get<T>, {0x398, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  ReceiveMoveCompleted                                        OFFSET(getStruct<T>, {0x3A0, 16, 0, 0})


	/// Functions
	// Function /Script/AIModule.AIController.UseBlackboard
	// bool UseBlackboard(class UBlackboardData* BlackboardAsset, class UBlackboardComponent*& BlackboardComponent);            // [0x756d1bc] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AIModule.AIController.UnclaimTaskResource
	// void UnclaimTaskResource(class UClass* ResourceClass);                                                                   // [0x756d128] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AIModule.AIController.SetPathFollowingComponent
	// void SetPathFollowingComponent(class UPathFollowingComponent* NewPFComponent);                                           // [0x756d09c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AIModule.AIController.SetMoveBlockDetection
	// void SetMoveBlockDetection(bool bEnable);                                                                                // [0x756d018] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AIModule.AIController.RunBehaviorTree
	// bool RunBehaviorTree(class UBehaviorTree* BTAsset);                                                                      // [0x756cf84] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AIModule.AIController.OnUsingBlackBoard
	// void OnUsingBlackBoard(class UBlackboardComponent* BlackboardComp, class UBlackboardData* BlackboardAsset);              // [0x228deb8] RequiredAPI|Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.AIController.OnGameplayTaskResourcesClaimed
	// void OnGameplayTaskResourcesClaimed(FGameplayResourceSet NewlyClaimed, FGameplayResourceSet FreshlyReleased);            // [0x756cdf8] RequiredAPI|Native|Public 
	// Function /Script/AIModule.AIController.MoveToLocation
	// TEnumAsByte<EPathFollowingRequestResult> MoveToLocation(FVector& Dest, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bProjectDestinationToNavigation, bool bCanStrafe, class UClass* FilterClass, bool bAllowPartialPath); // [0x756c97c] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/AIModule.AIController.MoveToActor
	// TEnumAsByte<EPathFollowingRequestResult> MoveToActor(class AActor* Goal, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bCanStrafe, class UClass* FilterClass, bool bAllowPartialPath); // [0x756c72c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AIModule.AIController.K2_SetFocus
	// void K2_SetFocus(class AActor* NewFocus);                                                                                // [0x756c6a4] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AIModule.AIController.K2_SetFocalPoint
	// void K2_SetFocalPoint(FVector FP);                                                                                       // [0x756c60c] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AIModule.AIController.K2_ClearFocus
	// void K2_ClearFocus();                                                                                                    // [0x756c354] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AIModule.AIController.HasPartialPath
	// bool HasPartialPath();                                                                                                   // [0x756c280] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.AIController.GetPathFollowingComponent
	// class UPathFollowingComponent* GetPathFollowingComponent();                                                              // [0x756c268] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.AIController.GetMoveStatus
	// TEnumAsByte<EPathFollowingStatus> GetMoveStatus();                                                                       // [0x756c248] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.AIController.GetImmediateMoveDestination
	// FVector GetImmediateMoveDestination();                                                                                   // [0x756c210] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.AIController.GetFocusActor
	// class AActor* GetFocusActor();                                                                                           // [0x756c1ec] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.AIController.GetFocalPointOnActor
	// FVector GetFocalPointOnActor(class AActor* Actor);                                                                       // [0x756c144] RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.AIController.GetFocalPoint
	// FVector GetFocalPoint();                                                                                                 // [0x756c10c] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.AIController.GetDeprecatedActionsComponent
	// class UPawnActionsComponent* GetDeprecatedActionsComponent();                                                            // [0x756c0f4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.AIController.GetAIPerceptionComponent
	// class UAIPerceptionComponent* GetAIPerceptionComponent();                                                                // [0x756c0dc] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AIModule.AIController.ClaimTaskResource
	// void ClaimTaskResource(class UClass* ResourceClass);                                                                     // [0x756be9c] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/AIModule.AIResource_Movement
/// Size: 0x0000 (0x000038 - 0x000038)
class UAIResource_Movement : public UGameplayTaskResource
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Script/AIModule.AIResource_Logic
/// Size: 0x0000 (0x000038 - 0x000038)
class UAIResource_Logic : public UGameplayTaskResource
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Script/AIModule.AISubsystem
/// Size: 0x0010 (0x000028 - 0x000038)
class UAISubsystem : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(class UAISystem*)                          AISystem                                                    OFFSET(get<T>, {0x30, 8, 0, 0})
};

/// Class /Script/AIModule.AISystem
/// Size: 0x0120 (0x000058 - 0x000178)
class UAISystem : public UAISystemBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 376;

public:
	SMember(FSoftClassPath)                            PerceptionSystemClassName                                   OFFSET(getStruct<T>, {0x58, 24, 0, 0})
	SMember(FSoftClassPath)                            HotSpotManagerClassName                                     OFFSET(getStruct<T>, {0x70, 24, 0, 0})
	SMember(FSoftClassPath)                            EnvQueryManagerClassName                                    OFFSET(getStruct<T>, {0x88, 24, 0, 0})
	DMember(float)                                     AcceptanceRadius                                            OFFSET(get<float>, {0xA0, 4, 0, 0})
	DMember(float)                                     PathfollowingRegularPathPointAcceptanceRadius               OFFSET(get<float>, {0xA4, 4, 0, 0})
	DMember(float)                                     PathfollowingNavLinkAcceptanceRadius                        OFFSET(get<float>, {0xA8, 4, 0, 0})
	DMember(bool)                                      bFinishMoveOnGoalOverlap                                    OFFSET(get<bool>, {0xAC, 1, 0, 0})
	DMember(bool)                                      bAcceptPartialPaths                                         OFFSET(get<bool>, {0xAD, 1, 0, 0})
	DMember(bool)                                      bAllowStrafing                                              OFFSET(get<bool>, {0xAE, 1, 0, 0})
	DMember(bool)                                      bAllowControllersAsEQSQuerier                               OFFSET(get<bool>, {0xAF, 1, 0, 0})
	DMember(bool)                                      bEnableDebuggerPlugin                                       OFFSET(get<bool>, {0xB0, 1, 0, 0})
	DMember(bool)                                      bForgetStaleActors                                          OFFSET(get<bool>, {0xB1, 1, 0, 0})
	DMember(bool)                                      bAddBlackboardSelfKey                                       OFFSET(get<bool>, {0xB2, 1, 0, 0})
	DMember(bool)                                      bClearBBEntryOnBTEQSFail                                    OFFSET(get<bool>, {0xB3, 1, 0, 0})
	DMember(bool)                                      bBlackboardKeyDecoratorAllowsNoneAsValue                    OFFSET(get<bool>, {0xB4, 1, 0, 0})
	CMember(TWeakObjectPtr<UBlackboardData*>)          DefaultBlackboard                                           OFFSET(get<T>, {0xB8, 32, 0, 0})
	CMember(TEnumAsByte<ECollisionChannel>)            DefaultSightCollisionChannel                                OFFSET(get<T>, {0xD8, 1, 0, 0})
	CMember(class UBehaviorTreeManager*)               BehaviorTreeManager                                         OFFSET(get<T>, {0xE0, 8, 0, 0})
	CMember(class UEnvQueryManager*)                   EnvironmentQueryManager                                     OFFSET(get<T>, {0xE8, 8, 0, 0})
	CMember(class UAIPerceptionSystem*)                PerceptionSystem                                            OFFSET(get<T>, {0xF0, 8, 0, 0})
	CMember(TArray<class UAIAsyncTaskBlueprintProxy*>) AllProxyObjects                                             OFFSET(get<T>, {0xF8, 16, 0, 0})
	CMember(class UAIHotSpotManager*)                  HotSpotManager                                              OFFSET(get<T>, {0x108, 8, 0, 0})
	CMember(class UNavLocalGridManager*)               NavLocalGrids                                               OFFSET(get<T>, {0x110, 8, 0, 0})


	/// Functions
	// Function /Script/AIModule.AISystem.AILoggingVerbose
	// void AILoggingVerbose();                                                                                                 // [0x2e43928] RequiredAPI|Exec|Native|Public 
	// Function /Script/AIModule.AISystem.AIIgnorePlayers
	// void AIIgnorePlayers();                                                                                                  // [0x1e86ad8] RequiredAPI|Exec|Native|Public 
};

/// Class /Script/AIModule.BehaviorTree
/// Size: 0x0040 (0x000028 - 0x000068)
class UBehaviorTree : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	CMember(class UBTCompositeNode*)                   RootNode                                                    OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(class UBlackboardData*)                    BlackboardAsset                                             OFFSET(get<T>, {0x38, 8, 0, 0})
	CMember(TArray<class UBTDecorator*>)               RootDecorators                                              OFFSET(get<T>, {0x40, 16, 0, 0})
	CMember(TArray<FBTDecoratorLogic>)                 RootDecoratorOps                                            OFFSET(get<T>, {0x50, 16, 0, 0})
};

/// Class /Script/AIModule.BrainComponent
/// Size: 0x0058 (0x0000A0 - 0x0000F8)
class UBrainComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
	CMember(class UBlackboardComponent*)               BlackboardComp                                              OFFSET(get<T>, {0xA8, 8, 0, 0})
	CMember(class AAIController*)                      AIOwner                                                     OFFSET(get<T>, {0xB0, 8, 0, 0})


	/// Functions
	// Function /Script/AIModule.BrainComponent.StopLogic
	// void StopLogic(FString Reason);                                                                                          // [0x75db990] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AIModule.BrainComponent.StartLogic
	// void StartLogic();                                                                                                       // [0x30b77b0] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AIModule.BrainComponent.RestartLogic
	// void RestartLogic();                                                                                                     // [0x14f8d74] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AIModule.BrainComponent.IsRunning
	// bool IsRunning();                                                                                                        // [0x75da5c0] RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.BrainComponent.IsPaused
	// bool IsPaused();                                                                                                         // [0x75da598] RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AIModule.BehaviorTreeComponent
/// Size: 0x01A0 (0x0000F8 - 0x000298)
class UBehaviorTreeComponent : public UBrainComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 664;

public:
	CMember(TArray<class UBTNode*>)                    NodeInstances                                               OFFSET(get<T>, {0x118, 16, 0, 0})
	CMember(class UBehaviorTree*)                      DefaultBehaviorTreeAsset                                    OFFSET(get<T>, {0x270, 8, 0, 0})


	/// Functions
	// Function /Script/AIModule.BehaviorTreeComponent.SetDynamicSubtree
	// void SetDynamicSubtree(FGameplayTag InjectTag, class UBehaviorTree* BehaviorAsset);                                      // [0x759f82c] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AIModule.BehaviorTreeComponent.GetTagCooldownEndTime
	// double GetTagCooldownEndTime(FGameplayTag CooldownTag);                                                                  // [0x7599e5c] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.BehaviorTreeComponent.AddCooldownTagDuration
	// void AddCooldownTagDuration(FGameplayTag CooldownTag, float CooldownDuration, bool bAddToExistingDuration);              // [0x75941d4] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/AIModule.BehaviorTreeManager
/// Size: 0x0028 (0x000028 - 0x000050)
class UBehaviorTreeManager : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	DMember(int32_t)                                   MaxDebuggerSteps                                            OFFSET(get<int32_t>, {0x28, 4, 0, 0})
	CMember(TArray<FBehaviorTreeTemplateInfo>)         LoadedTemplates                                             OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TArray<class UBehaviorTreeComponent*>)     ActiveComponents                                            OFFSET(get<T>, {0x40, 16, 0, 0})
};

/// Class /Script/AIModule.BehaviorTreeTypes
/// Size: 0x0000 (0x000028 - 0x000028)
class UBehaviorTreeTypes : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/AIModule.BlackboardAssetProvider
/// Size: 0x0000 (0x000028 - 0x000028)
class UBlackboardAssetProvider : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/AIModule.BlackboardAssetProvider.GetBlackboardAsset
	// class UBlackboardData* GetBlackboardAsset();                                                                             // [0x7594b4c] RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AIModule.BlackboardComponent
/// Size: 0x0108 (0x0000A0 - 0x0001A8)
class UBlackboardComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 424;

public:
	CMember(class UBrainComponent*)                    BrainComp                                                   OFFSET(get<T>, {0xA0, 8, 0, 0})
	CMember(class UBlackboardData*)                    DefaultBlackboardAsset                                      OFFSET(get<T>, {0xA8, 8, 0, 0})
	CMember(class UBlackboardData*)                    BlackboardAsset                                             OFFSET(get<T>, {0xB0, 8, 0, 0})
	CMember(TArray<class UBlackboardKeyType*>)         KeyInstances                                                OFFSET(get<T>, {0xD8, 16, 0, 0})


	/// Functions
	// Function /Script/AIModule.BlackboardComponent.SetValueAsVector
	// void SetValueAsVector(FName& KeyName, FVector VectorValue);                                                              // [0x75a09c0] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/AIModule.BlackboardComponent.SetValueAsString
	// void SetValueAsString(FName& KeyName, FString StringValue);                                                              // [0x75a0228] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AIModule.BlackboardComponent.SetValueAsRotator
	// void SetValueAsRotator(FName& KeyName, FRotator VectorValue);                                                            // [0x75a00fc] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/AIModule.BlackboardComponent.SetValueAsObject
	// void SetValueAsObject(FName& KeyName, class UObject* ObjectValue);                                                       // [0x759fff0] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AIModule.BlackboardComponent.SetValueAsName
	// void SetValueAsName(FName& KeyName, FName NameValue);                                                                    // [0x759fe74] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AIModule.BlackboardComponent.SetValueAsInt
	// void SetValueAsInt(FName& KeyName, int32_t IntValue);                                                                    // [0x759fd54] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AIModule.BlackboardComponent.SetValueAsFloat
	// void SetValueAsFloat(FName& KeyName, float FloatValue);                                                                  // [0x759fc48] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AIModule.BlackboardComponent.SetValueAsEnum
	// void SetValueAsEnum(FName& KeyName, char EnumValue);                                                                     // [0x759fb28] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AIModule.BlackboardComponent.SetValueAsClass
	// void SetValueAsClass(FName& KeyName, class UClass* ClassValue);                                                          // [0x759fa04] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AIModule.BlackboardComponent.SetValueAsBool
	// void SetValueAsBool(FName& KeyName, bool BoolValue);                                                                     // [0x759f8f4] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AIModule.BlackboardComponent.IsVectorValueSet
	// bool IsVectorValueSet(FName& KeyName);                                                                                   // [0x759a5f8] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.BlackboardComponent.GetValueAsVector
	// FVector GetValueAsVector(FName& KeyName);                                                                                // [0x759a46c] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.BlackboardComponent.GetValueAsString
	// FString GetValueAsString(FName& KeyName);                                                                                // [0x759a3bc] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.BlackboardComponent.GetValueAsRotator
	// FRotator GetValueAsRotator(FName& KeyName);                                                                              // [0x759a310] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.BlackboardComponent.GetValueAsObject
	// class UObject* GetValueAsObject(FName& KeyName);                                                                         // [0x759a278] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.BlackboardComponent.GetValueAsName
	// FName GetValueAsName(FName& KeyName);                                                                                    // [0x759a1e8] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.BlackboardComponent.GetValueAsInt
	// int32_t GetValueAsInt(FName& KeyName);                                                                                   // [0x759a150] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.BlackboardComponent.GetValueAsFloat
	// float GetValueAsFloat(FName& KeyName);                                                                                   // [0x759a0b4] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.BlackboardComponent.GetValueAsEnum
	// char GetValueAsEnum(FName& KeyName);                                                                                     // [0x759a01c] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.BlackboardComponent.GetValueAsClass
	// class UClass* GetValueAsClass(FName& KeyName);                                                                           // [0x7599f84] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.BlackboardComponent.GetValueAsBool
	// bool GetValueAsBool(FName& KeyName);                                                                                     // [0x7599eec] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.BlackboardComponent.GetRotationFromEntry
	// bool GetRotationFromEntry(FName& KeyName, FRotator& ResultRotation);                                                     // [0x7599d60] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.BlackboardComponent.GetLocationFromEntry
	// bool GetLocationFromEntry(FName& KeyName, FVector& ResultLocation);                                                      // [0x7599b18] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.BlackboardComponent.ClearValue
	// void ClearValue(FName& KeyName);                                                                                         // [0x7594ac0] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/AIModule.BlackboardData
/// Size: 0x0020 (0x000030 - 0x000050)
class UBlackboardData : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(class UBlackboardData*)                    Parent                                                      OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(TArray<FBlackboardEntry>)                  Keys                                                        OFFSET(get<T>, {0x38, 16, 0, 0})
	DMember(bool)                                      bHasSynchronizedKeys                                        OFFSET(get<bool>, {0x48, 1, 1, 0})
};

/// Class /Script/AIModule.BlackboardKeyType
/// Size: 0x0008 (0x000028 - 0x000030)
class UBlackboardKeyType : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/AIModule.BlackboardKeyType_Bool
/// Size: 0x0008 (0x000030 - 0x000038)
class UBlackboardKeyType_Bool : public UBlackboardKeyType
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(bool)                                      bDefaultValue                                               OFFSET(get<bool>, {0x30, 1, 0, 0})
};

/// Class /Script/AIModule.BlackboardKeyType_Class
/// Size: 0x0008 (0x000030 - 0x000038)
class UBlackboardKeyType_Class : public UBlackboardKeyType
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(class UClass*)                             BaseClass                                                   OFFSET(get<T>, {0x30, 8, 0, 0})
};

/// Class /Script/AIModule.BlackboardKeyType_Enum
/// Size: 0x0020 (0x000030 - 0x000050)
class UBlackboardKeyType_Enum : public UBlackboardKeyType
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(class UEnum*)                              EnumType                                                    OFFSET(get<T>, {0x30, 8, 0, 0})
	SMember(FString)                                   EnumName                                                    OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	DMember(bool)                                      bIsEnumNameValid                                            OFFSET(get<bool>, {0x48, 1, 1, 0})
};

/// Class /Script/AIModule.BlackboardKeyType_Float
/// Size: 0x0008 (0x000030 - 0x000038)
class UBlackboardKeyType_Float : public UBlackboardKeyType
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(float)                                     DefaultValue                                                OFFSET(get<float>, {0x30, 4, 0, 0})
};

/// Class /Script/AIModule.BlackboardKeyType_Int
/// Size: 0x0008 (0x000030 - 0x000038)
class UBlackboardKeyType_Int : public UBlackboardKeyType
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(int32_t)                                   DefaultValue                                                OFFSET(get<int32_t>, {0x30, 4, 0, 0})
};

/// Class /Script/AIModule.BlackboardKeyType_Name
/// Size: 0x0008 (0x000030 - 0x000038)
class UBlackboardKeyType_Name : public UBlackboardKeyType
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FName)                                     DefaultValue                                                OFFSET(getStruct<T>, {0x30, 4, 0, 0})
};

/// Class /Script/AIModule.BlackboardKeyType_NativeEnum
/// Size: 0x0018 (0x000030 - 0x000048)
class UBlackboardKeyType_NativeEnum : public UBlackboardKeyType
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FString)                                   EnumName                                                    OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	CMember(class UEnum*)                              EnumType                                                    OFFSET(get<T>, {0x40, 8, 0, 0})
};

/// Class /Script/AIModule.BlackboardKeyType_Object
/// Size: 0x0008 (0x000030 - 0x000038)
class UBlackboardKeyType_Object : public UBlackboardKeyType
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(class UClass*)                             BaseClass                                                   OFFSET(get<T>, {0x30, 8, 0, 0})
};

/// Class /Script/AIModule.BlackboardKeyType_Rotator
/// Size: 0x0020 (0x000030 - 0x000050)
class UBlackboardKeyType_Rotator : public UBlackboardKeyType
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FRotator)                                  DefaultValue                                                OFFSET(getStruct<T>, {0x30, 24, 0, 0})
	DMember(bool)                                      bUseDefaultValue                                            OFFSET(get<bool>, {0x48, 1, 0, 0})
};

/// Class /Script/AIModule.BlackboardKeyType_String
/// Size: 0x0020 (0x000030 - 0x000050)
class UBlackboardKeyType_String : public UBlackboardKeyType
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FString)                                   StringValue                                                 OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	SMember(FString)                                   DefaultValue                                                OFFSET(getStruct<T>, {0x40, 16, 0, 0})
};

/// Class /Script/AIModule.BlackboardKeyType_Vector
/// Size: 0x0020 (0x000030 - 0x000050)
class UBlackboardKeyType_Vector : public UBlackboardKeyType
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FVector)                                   DefaultValue                                                OFFSET(getStruct<T>, {0x30, 24, 0, 0})
	DMember(bool)                                      bUseDefaultValue                                            OFFSET(get<bool>, {0x48, 1, 0, 0})
};

/// Class /Script/AIModule.BTNode
/// Size: 0x0030 (0x000028 - 0x000058)
class UBTNode : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FString)                                   NodeName                                                    OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	CMember(class UBehaviorTree*)                      TreeAsset                                                   OFFSET(get<T>, {0x40, 8, 0, 0})
	CMember(class UBTCompositeNode*)                   ParentNode                                                  OFFSET(get<T>, {0x48, 8, 0, 0})
};

/// Class /Script/AIModule.BTAuxiliaryNode
/// Size: 0x0008 (0x000058 - 0x000060)
class UBTAuxiliaryNode : public UBTNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
};

/// Class /Script/AIModule.BTCompositeNode
/// Size: 0x0028 (0x000058 - 0x000080)
class UBTCompositeNode : public UBTNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(TArray<FBTCompositeChild>)                 Children                                                    OFFSET(get<T>, {0x58, 16, 0, 0})
	CMember(TArray<class UBTService*>)                 Services                                                    OFFSET(get<T>, {0x68, 16, 0, 0})
	DMember(bool)                                      bApplyDecoratorScope                                        OFFSET(get<bool>, {0x78, 1, 1, 0})
};

/// Class /Script/AIModule.BTDecorator
/// Size: 0x0008 (0x000060 - 0x000068)
class UBTDecorator : public UBTAuxiliaryNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	DMember(bool)                                      bInverseCondition                                           OFFSET(get<bool>, {0x60, 1, 1, 7})
	CMember(TEnumAsByte<EBTFlowAbortMode>)             FlowAbortMode                                               OFFSET(get<T>, {0x64, 1, 0, 0})
};

/// Class /Script/AIModule.BTFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UBTFunctionLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/AIModule.BTFunctionLibrary.StopUsingExternalEvent
	// void StopUsingExternalEvent(class UBTNode* NodeOwner);                                                                   // [0x660baec] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/AIModule.BTFunctionLibrary.StartUsingExternalEvent
	// void StartUsingExternalEvent(class UBTNode* NodeOwner, class AActor* OwningActor);                                       // [0x6fbbe88] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/AIModule.BTFunctionLibrary.SetBlackboardValueAsVector
	// void SetBlackboardValueAsVector(class UBTNode* NodeOwner, FBlackboardKeySelector& Key, FVector Value);                   // [0x759f000] Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/AIModule.BTFunctionLibrary.SetBlackboardValueAsString
	// void SetBlackboardValueAsString(class UBTNode* NodeOwner, FBlackboardKeySelector& Key, FString Value);                   // [0x759e7c4] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AIModule.BTFunctionLibrary.SetBlackboardValueAsRotator
	// void SetBlackboardValueAsRotator(class UBTNode* NodeOwner, FBlackboardKeySelector& Key, FRotator Value);                 // [0x759df98] Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/AIModule.BTFunctionLibrary.SetBlackboardValueAsObject
	// void SetBlackboardValueAsObject(class UBTNode* NodeOwner, FBlackboardKeySelector& Key, class UObject* Value);            // [0x759d77c] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AIModule.BTFunctionLibrary.SetBlackboardValueAsName
	// void SetBlackboardValueAsName(class UBTNode* NodeOwner, FBlackboardKeySelector& Key, FName Value);                       // [0x759cf60] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AIModule.BTFunctionLibrary.SetBlackboardValueAsInt
	// void SetBlackboardValueAsInt(class UBTNode* NodeOwner, FBlackboardKeySelector& Key, int32_t Value);                      // [0x759c744] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AIModule.BTFunctionLibrary.SetBlackboardValueAsFloat
	// void SetBlackboardValueAsFloat(class UBTNode* NodeOwner, FBlackboardKeySelector& Key, float Value);                      // [0x759bf28] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AIModule.BTFunctionLibrary.SetBlackboardValueAsEnum
	// void SetBlackboardValueAsEnum(class UBTNode* NodeOwner, FBlackboardKeySelector& Key, char Value);                        // [0x759b70c] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AIModule.BTFunctionLibrary.SetBlackboardValueAsClass
	// void SetBlackboardValueAsClass(class UBTNode* NodeOwner, FBlackboardKeySelector& Key, class UClass* Value);              // [0x759aef0] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AIModule.BTFunctionLibrary.SetBlackboardValueAsBool
	// void SetBlackboardValueAsBool(class UBTNode* NodeOwner, FBlackboardKeySelector& Key, bool Value);                        // [0x759a6d0] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AIModule.BTFunctionLibrary.GetOwnersBlackboard
	// class UBlackboardComponent* GetOwnersBlackboard(class UBTNode* NodeOwner);                                               // [0x7599ce0] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AIModule.BTFunctionLibrary.GetOwnerComponent
	// class UBehaviorTreeComponent* GetOwnerComponent(class UBTNode* NodeOwner);                                               // [0x7599c50] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AIModule.BTFunctionLibrary.GetBlackboardValueAsVector
	// FVector GetBlackboardValueAsVector(class UBTNode* NodeOwner, FBlackboardKeySelector& Key);                               // [0x75993b4] Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/AIModule.BTFunctionLibrary.GetBlackboardValueAsString
	// FString GetBlackboardValueAsString(class UBTNode* NodeOwner, FBlackboardKeySelector& Key);                               // [0x7598c78] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AIModule.BTFunctionLibrary.GetBlackboardValueAsRotator
	// FRotator GetBlackboardValueAsRotator(class UBTNode* NodeOwner, FBlackboardKeySelector& Key);                             // [0x7598514] Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/AIModule.BTFunctionLibrary.GetBlackboardValueAsObject
	// class UObject* GetBlackboardValueAsObject(class UBTNode* NodeOwner, FBlackboardKeySelector& Key);                        // [0x7597df4] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AIModule.BTFunctionLibrary.GetBlackboardValueAsName
	// FName GetBlackboardValueAsName(class UBTNode* NodeOwner, FBlackboardKeySelector& Key);                                   // [0x75976b4] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AIModule.BTFunctionLibrary.GetBlackboardValueAsInt
	// int32_t GetBlackboardValueAsInt(class UBTNode* NodeOwner, FBlackboardKeySelector& Key);                                  // [0x7596f7c] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AIModule.BTFunctionLibrary.GetBlackboardValueAsFloat
	// float GetBlackboardValueAsFloat(class UBTNode* NodeOwner, FBlackboardKeySelector& Key);                                  // [0x7596844] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AIModule.BTFunctionLibrary.GetBlackboardValueAsEnum
	// char GetBlackboardValueAsEnum(class UBTNode* NodeOwner, FBlackboardKeySelector& Key);                                    // [0x759610c] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AIModule.BTFunctionLibrary.GetBlackboardValueAsClass
	// class UClass* GetBlackboardValueAsClass(class UBTNode* NodeOwner, FBlackboardKeySelector& Key);                          // [0x75959d4] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AIModule.BTFunctionLibrary.GetBlackboardValueAsBool
	// bool GetBlackboardValueAsBool(class UBTNode* NodeOwner, FBlackboardKeySelector& Key);                                    // [0x759529c] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AIModule.BTFunctionLibrary.GetBlackboardValueAsActor
	// class AActor* GetBlackboardValueAsActor(class UBTNode* NodeOwner, FBlackboardKeySelector& Key);                          // [0x7594b74] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AIModule.BTFunctionLibrary.ClearBlackboardValueAsVector
	// void ClearBlackboardValueAsVector(class UBTNode* NodeOwner, FBlackboardKeySelector& Key);                                // [0x7594380] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AIModule.BTFunctionLibrary.ClearBlackboardValue
	// void ClearBlackboardValue(class UBTNode* NodeOwner, FBlackboardKeySelector& Key);                                        // [0x7594380] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/AIModule.BTService
/// Size: 0x0010 (0x000060 - 0x000070)
class UBTService : public UBTAuxiliaryNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	DMember(float)                                     Interval                                                    OFFSET(get<float>, {0x60, 4, 0, 0})
	DMember(float)                                     RandomDeviation                                             OFFSET(get<float>, {0x64, 4, 0, 0})
	DMember(bool)                                      bCallTickOnSearchStart                                      OFFSET(get<bool>, {0x68, 1, 1, 0})
	DMember(bool)                                      bRestartTimerOnEachActivation                               OFFSET(get<bool>, {0x68, 1, 1, 1})
};

/// Class /Script/AIModule.BTTaskNode
/// Size: 0x0018 (0x000058 - 0x000070)
class UBTTaskNode : public UBTNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	CMember(TArray<class UBTService*>)                 Services                                                    OFFSET(get<T>, {0x58, 16, 0, 0})
	DMember(bool)                                      bIgnoreRestartSelf                                          OFFSET(get<bool>, {0x68, 1, 1, 0})
};

/// Class /Script/AIModule.BTComposite_Selector
/// Size: 0x0000 (0x000080 - 0x000080)
class UBTComposite_Selector : public UBTCompositeNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
};

/// Class /Script/AIModule.BTComposite_Sequence
/// Size: 0x0000 (0x000080 - 0x000080)
class UBTComposite_Sequence : public UBTCompositeNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
};

/// Class /Script/AIModule.BTComposite_SimpleParallel
/// Size: 0x0008 (0x000080 - 0x000088)
class UBTComposite_SimpleParallel : public UBTCompositeNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	CMember(TEnumAsByte<EBTParallelMode>)              FinishMode                                                  OFFSET(get<T>, {0x80, 1, 0, 0})
};

/// Class /Script/AIModule.BTDecorator_BlackboardBase
/// Size: 0x0028 (0x000068 - 0x000090)
class UBTDecorator_BlackboardBase : public UBTDecorator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FBlackboardKeySelector)                    BlackboardKey                                               OFFSET(getStruct<T>, {0x68, 40, 0, 0})
};

/// Class /Script/AIModule.BTDecorator_Blackboard
/// Size: 0x0030 (0x000090 - 0x0000C0)
class UBTDecorator_Blackboard : public UBTDecorator_BlackboardBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	DMember(int32_t)                                   IntValue                                                    OFFSET(get<int32_t>, {0x90, 4, 0, 0})
	DMember(float)                                     FloatValue                                                  OFFSET(get<float>, {0x94, 4, 0, 0})
	SMember(FString)                                   StringValue                                                 OFFSET(getStruct<T>, {0x98, 16, 0, 0})
	SMember(FString)                                   CachedDescription                                           OFFSET(getStruct<T>, {0xA8, 16, 0, 0})
	DMember(char)                                      OperationType                                               OFFSET(get<char>, {0xB8, 1, 0, 0})
	CMember(TEnumAsByte<EBTBlackboardRestart>)         NotifyObserver                                              OFFSET(get<T>, {0xB9, 1, 0, 0})
};

/// Class /Script/AIModule.BTDecorator_BlueprintBase
/// Size: 0x0038 (0x000068 - 0x0000A0)
class UBTDecorator_BlueprintBase : public UBTDecorator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	CMember(class AAIController*)                      AIOwner                                                     OFFSET(get<T>, {0x68, 8, 0, 0})
	CMember(class AActor*)                             ActorOwner                                                  OFFSET(get<T>, {0x70, 8, 0, 0})
	CMember(TArray<FName>)                             ObservedKeyNames                                            OFFSET(get<T>, {0x78, 16, 0, 0})
	DMember(bool)                                      bShowPropertyDetails                                        OFFSET(get<bool>, {0x98, 1, 1, 0})
	DMember(bool)                                      bCheckConditionOnlyBlackBoardChanges                        OFFSET(get<bool>, {0x98, 1, 1, 1})


	/// Functions
	// Function /Script/AIModule.BTDecorator_BlueprintBase.ReceiveTickAI
	// void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);               // [0x228deb8] RequiredAPI|Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTDecorator_BlueprintBase.ReceiveTick
	// void ReceiveTick(class AActor* OwnerActor, float DeltaSeconds);                                                          // [0x228deb8] RequiredAPI|Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTDecorator_BlueprintBase.ReceiveObserverDeactivatedAI
	// void ReceiveObserverDeactivatedAI(class AAIController* OwnerController, class APawn* ControlledPawn);                    // [0x228deb8] RequiredAPI|Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTDecorator_BlueprintBase.ReceiveObserverDeactivated
	// void ReceiveObserverDeactivated(class AActor* OwnerActor);                                                               // [0x228deb8] RequiredAPI|Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTDecorator_BlueprintBase.ReceiveObserverActivatedAI
	// void ReceiveObserverActivatedAI(class AAIController* OwnerController, class APawn* ControlledPawn);                      // [0x228deb8] RequiredAPI|Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTDecorator_BlueprintBase.ReceiveObserverActivated
	// void ReceiveObserverActivated(class AActor* OwnerActor);                                                                 // [0x228deb8] RequiredAPI|Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTDecorator_BlueprintBase.ReceiveExecutionStartAI
	// void ReceiveExecutionStartAI(class AAIController* OwnerController, class APawn* ControlledPawn);                         // [0x228deb8] RequiredAPI|Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTDecorator_BlueprintBase.ReceiveExecutionStart
	// void ReceiveExecutionStart(class AActor* OwnerActor);                                                                    // [0x228deb8] RequiredAPI|Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTDecorator_BlueprintBase.ReceiveExecutionFinishAI
	// void ReceiveExecutionFinishAI(class AAIController* OwnerController, class APawn* ControlledPawn, TEnumAsByte<EBTNodeResult> NodeResult); // [0x228deb8] RequiredAPI|Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTDecorator_BlueprintBase.ReceiveExecutionFinish
	// void ReceiveExecutionFinish(class AActor* OwnerActor, TEnumAsByte<EBTNodeResult> NodeResult);                            // [0x228deb8] RequiredAPI|Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTDecorator_BlueprintBase.PerformConditionCheckAI
	// bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn);                         // [0x228deb8] RequiredAPI|Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTDecorator_BlueprintBase.PerformConditionCheck
	// bool PerformConditionCheck(class AActor* OwnerActor);                                                                    // [0x228deb8] RequiredAPI|Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTDecorator_BlueprintBase.IsDecoratorObserverActive
	// bool IsDecoratorObserverActive();                                                                                        // [0x759a590] Final|RequiredAPI|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.BTDecorator_BlueprintBase.IsDecoratorExecutionActive
	// bool IsDecoratorExecutionActive();                                                                                       // [0x759a518] Final|RequiredAPI|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AIModule.BTDecorator_CheckGameplayTagsOnActor
/// Size: 0x0060 (0x000068 - 0x0000C8)
class UBTDecorator_CheckGameplayTagsOnActor : public UBTDecorator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	SMember(FBlackboardKeySelector)                    ActorToCheck                                                OFFSET(getStruct<T>, {0x68, 40, 0, 0})
	CMember(EGameplayContainerMatchType)               TagsToMatch                                                 OFFSET(get<T>, {0x90, 1, 0, 0})
	SMember(FGameplayTagContainer)                     GameplayTags                                                OFFSET(getStruct<T>, {0x98, 32, 0, 0})
	SMember(FString)                                   CachedDescription                                           OFFSET(getStruct<T>, {0xB8, 16, 0, 0})
};

/// Class /Script/AIModule.BTDecorator_CompareBBEntries
/// Size: 0x0058 (0x000068 - 0x0000C0)
class UBTDecorator_CompareBBEntries : public UBTDecorator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	CMember(TEnumAsByte<EBlackBoardEntryComparison>)   Operator                                                    OFFSET(get<T>, {0x68, 1, 0, 0})
	SMember(FBlackboardKeySelector)                    BlackboardKeyA                                              OFFSET(getStruct<T>, {0x70, 40, 0, 0})
	SMember(FBlackboardKeySelector)                    BlackboardKeyB                                              OFFSET(getStruct<T>, {0x98, 40, 0, 0})
};

/// Class /Script/AIModule.BTDecorator_ConditionalLoop
/// Size: 0x0000 (0x0000C0 - 0x0000C0)
class UBTDecorator_ConditionalLoop : public UBTDecorator_Blackboard
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
};

/// Class /Script/AIModule.BTDecorator_ConeCheck
/// Size: 0x0088 (0x000068 - 0x0000F0)
class UBTDecorator_ConeCheck : public UBTDecorator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	DMember(float)                                     ConeHalfAngle                                               OFFSET(get<float>, {0x68, 4, 0, 0})
	SMember(FBlackboardKeySelector)                    ConeOrigin                                                  OFFSET(getStruct<T>, {0x70, 40, 0, 0})
	SMember(FBlackboardKeySelector)                    ConeDirection                                               OFFSET(getStruct<T>, {0x98, 40, 0, 0})
	SMember(FBlackboardKeySelector)                    Observed                                                    OFFSET(getStruct<T>, {0xC0, 40, 0, 0})
};

/// Class /Script/AIModule.BTDecorator_Cooldown
/// Size: 0x0008 (0x000068 - 0x000070)
class UBTDecorator_Cooldown : public UBTDecorator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	DMember(float)                                     CoolDownTime                                                OFFSET(get<float>, {0x68, 4, 0, 0})
};

/// Class /Script/AIModule.BTDecorator_DoesPathExist
/// Size: 0x0060 (0x000068 - 0x0000C8)
class UBTDecorator_DoesPathExist : public UBTDecorator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	SMember(FBlackboardKeySelector)                    BlackboardKeyA                                              OFFSET(getStruct<T>, {0x68, 40, 0, 0})
	SMember(FBlackboardKeySelector)                    BlackboardKeyB                                              OFFSET(getStruct<T>, {0x90, 40, 0, 0})
	DMember(bool)                                      bUseSelf                                                    OFFSET(get<bool>, {0xB8, 1, 1, 0})
	CMember(TEnumAsByte<EPathExistanceQueryType>)      PathQueryType                                               OFFSET(get<T>, {0xBC, 1, 0, 0})
	CMember(class UClass*)                             FilterClass                                                 OFFSET(get<T>, {0xC0, 8, 0, 0})
};

/// Class /Script/AIModule.BTDecorator_ForceSuccess
/// Size: 0x0000 (0x000068 - 0x000068)
class UBTDecorator_ForceSuccess : public UBTDecorator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
};

/// Class /Script/AIModule.BTDecorator_IsAtLocation
/// Size: 0x0048 (0x000090 - 0x0000D8)
class UBTDecorator_IsAtLocation : public UBTDecorator_BlackboardBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	DMember(float)                                     AcceptableRadius                                            OFFSET(get<float>, {0x90, 4, 0, 0})
	SMember(FAIDataProviderFloatValue)                 ParametrizedAcceptableRadius                                OFFSET(getStruct<T>, {0x98, 56, 0, 0})
	SMember(FAIDistanceType)                           GeometricDistanceType                                       OFFSET(getStruct<T>, {0xD0, 1, 0, 0})
	DMember(bool)                                      bUseParametrizedRadius                                      OFFSET(get<bool>, {0xD4, 1, 1, 0})
	DMember(bool)                                      bUseNavAgentGoalLocation                                    OFFSET(get<bool>, {0xD4, 1, 1, 1})
	DMember(bool)                                      bPathFindingBasedTest                                       OFFSET(get<bool>, {0xD4, 1, 1, 2})
};

/// Class /Script/AIModule.BTDecorator_IsBBEntryOfClass
/// Size: 0x0008 (0x000090 - 0x000098)
class UBTDecorator_IsBBEntryOfClass : public UBTDecorator_BlackboardBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	CMember(class UClass*)                             TestClass                                                   OFFSET(get<T>, {0x90, 8, 0, 0})
};

/// Class /Script/AIModule.BTDecorator_KeepInCone
/// Size: 0x0060 (0x000068 - 0x0000C8)
class UBTDecorator_KeepInCone : public UBTDecorator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	DMember(float)                                     ConeHalfAngle                                               OFFSET(get<float>, {0x68, 4, 0, 0})
	SMember(FBlackboardKeySelector)                    ConeOrigin                                                  OFFSET(getStruct<T>, {0x70, 40, 0, 0})
	SMember(FBlackboardKeySelector)                    Observed                                                    OFFSET(getStruct<T>, {0x98, 40, 0, 0})
	DMember(bool)                                      bUseSelfAsOrigin                                            OFFSET(get<bool>, {0xC0, 1, 1, 0})
	DMember(bool)                                      bUseSelfAsObserved                                          OFFSET(get<bool>, {0xC0, 1, 1, 1})
};

/// Class /Script/AIModule.BTDecorator_Loop
/// Size: 0x0010 (0x000068 - 0x000078)
class UBTDecorator_Loop : public UBTDecorator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	DMember(int32_t)                                   NumLoops                                                    OFFSET(get<int32_t>, {0x68, 4, 0, 0})
	DMember(bool)                                      bInfiniteLoop                                               OFFSET(get<bool>, {0x6C, 1, 0, 0})
	DMember(float)                                     InfiniteLoopTimeoutTime                                     OFFSET(get<float>, {0x70, 4, 0, 0})
};

/// Class /Script/AIModule.BTDecorator_ReachedMoveGoal
/// Size: 0x0000 (0x000068 - 0x000068)
class UBTDecorator_ReachedMoveGoal : public UBTDecorator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
};

/// Class /Script/AIModule.BTDecorator_SetTagCooldown
/// Size: 0x0010 (0x000068 - 0x000078)
class UBTDecorator_SetTagCooldown : public UBTDecorator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	SMember(FGameplayTag)                              CooldownTag                                                 OFFSET(getStruct<T>, {0x68, 4, 0, 0})
	DMember(float)                                     CooldownDuration                                            OFFSET(get<float>, {0x6C, 4, 0, 0})
	DMember(bool)                                      bAddToExistingDuration                                      OFFSET(get<bool>, {0x70, 1, 0, 0})
};

/// Class /Script/AIModule.BTDecorator_TagCooldown
/// Size: 0x0010 (0x000068 - 0x000078)
class UBTDecorator_TagCooldown : public UBTDecorator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	SMember(FGameplayTag)                              CooldownTag                                                 OFFSET(getStruct<T>, {0x68, 4, 0, 0})
	DMember(float)                                     CooldownDuration                                            OFFSET(get<float>, {0x6C, 4, 0, 0})
	DMember(bool)                                      bAddToExistingDuration                                      OFFSET(get<bool>, {0x70, 1, 0, 0})
	DMember(bool)                                      bActivatesCooldown                                          OFFSET(get<bool>, {0x71, 1, 0, 0})
};

/// Class /Script/AIModule.BTDecorator_TimeLimit
/// Size: 0x0008 (0x000068 - 0x000070)
class UBTDecorator_TimeLimit : public UBTDecorator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	DMember(float)                                     TimeLimit                                                   OFFSET(get<float>, {0x68, 4, 0, 0})
};

/// Class /Script/AIModule.BTService_BlackboardBase
/// Size: 0x0028 (0x000070 - 0x000098)
class UBTService_BlackboardBase : public UBTService
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	SMember(FBlackboardKeySelector)                    BlackboardKey                                               OFFSET(getStruct<T>, {0x70, 40, 0, 0})
};

/// Class /Script/AIModule.BTService_BlueprintBase
/// Size: 0x0028 (0x000070 - 0x000098)
class UBTService_BlueprintBase : public UBTService
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	CMember(class AAIController*)                      AIOwner                                                     OFFSET(get<T>, {0x70, 8, 0, 0})
	CMember(class AActor*)                             ActorOwner                                                  OFFSET(get<T>, {0x78, 8, 0, 0})
	DMember(bool)                                      bShowPropertyDetails                                        OFFSET(get<bool>, {0x90, 1, 1, 0})
	DMember(bool)                                      bShowEventDetails                                           OFFSET(get<bool>, {0x90, 1, 1, 1})


	/// Functions
	// Function /Script/AIModule.BTService_BlueprintBase.ReceiveTickAI
	// void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);               // [0x228deb8] RequiredAPI|Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTService_BlueprintBase.ReceiveTick
	// void ReceiveTick(class AActor* OwnerActor, float DeltaSeconds);                                                          // [0x228deb8] RequiredAPI|Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTService_BlueprintBase.ReceiveSearchStartAI
	// void ReceiveSearchStartAI(class AAIController* OwnerController, class APawn* ControlledPawn);                            // [0x228deb8] RequiredAPI|Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTService_BlueprintBase.ReceiveSearchStart
	// void ReceiveSearchStart(class AActor* OwnerActor);                                                                       // [0x228deb8] RequiredAPI|Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTService_BlueprintBase.ReceiveDeactivationAI
	// void ReceiveDeactivationAI(class AAIController* OwnerController, class APawn* ControlledPawn);                           // [0x228deb8] RequiredAPI|Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTService_BlueprintBase.ReceiveDeactivation
	// void ReceiveDeactivation(class AActor* OwnerActor);                                                                      // [0x228deb8] RequiredAPI|Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTService_BlueprintBase.ReceiveActivationAI
	// void ReceiveActivationAI(class AAIController* OwnerController, class APawn* ControlledPawn);                             // [0x228deb8] RequiredAPI|Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTService_BlueprintBase.ReceiveActivation
	// void ReceiveActivation(class AActor* OwnerActor);                                                                        // [0x228deb8] RequiredAPI|Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTService_BlueprintBase.IsServiceActive
	// bool IsServiceActive();                                                                                                  // [0x75da5e8] Final|RequiredAPI|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AIModule.BTService_DefaultFocus
/// Size: 0x0008 (0x000098 - 0x0000A0)
class UBTService_DefaultFocus : public UBTService_BlackboardBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	DMember(char)                                      FocusPriority                                               OFFSET(get<char>, {0x98, 1, 0, 0})
};

/// Class /Script/AIModule.BTService_RunEQS
/// Size: 0x0060 (0x000098 - 0x0000F8)
class UBTService_RunEQS : public UBTService_BlackboardBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
	SMember(FEQSParametrizedQueryExecutionRequest)     EQSRequest                                                  OFFSET(getStruct<T>, {0x98, 72, 0, 0})
	DMember(bool)                                      bUpdateBBOnFail                                             OFFSET(get<bool>, {0xE0, 1, 0, 0})
};

/// Class /Script/AIModule.BTTask_BlackboardBase
/// Size: 0x0028 (0x000070 - 0x000098)
class UBTTask_BlackboardBase : public UBTTaskNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	SMember(FBlackboardKeySelector)                    BlackboardKey                                               OFFSET(getStruct<T>, {0x70, 40, 0, 0})
};

/// Class /Script/AIModule.BTTask_BlueprintBase
/// Size: 0x0038 (0x000070 - 0x0000A8)
class UBTTask_BlueprintBase : public UBTTaskNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	CMember(class AAIController*)                      AIOwner                                                     OFFSET(get<T>, {0x70, 8, 0, 0})
	CMember(class AActor*)                             ActorOwner                                                  OFFSET(get<T>, {0x78, 8, 0, 0})
	SMember(FIntervalCountdown)                        TickInterval                                                OFFSET(getStruct<T>, {0x80, 8, 0, 0})
	DMember(bool)                                      bShowPropertyDetails                                        OFFSET(get<bool>, {0xA0, 1, 1, 0})


	/// Functions
	// Function /Script/AIModule.BTTask_BlueprintBase.SetFinishOnMessageWithId
	// void SetFinishOnMessageWithId(FName MessageName, int32_t RequestID);                                                     // [0x75db13c] Final|RequiredAPI|Native|Protected|BlueprintCallable 
	// Function /Script/AIModule.BTTask_BlueprintBase.SetFinishOnMessage
	// void SetFinishOnMessage(FName MessageName);                                                                              // [0x75db014] Final|RequiredAPI|Native|Protected|BlueprintCallable 
	// Function /Script/AIModule.BTTask_BlueprintBase.ReceiveTickAI
	// void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);               // [0x228deb8] RequiredAPI|Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTTask_BlueprintBase.ReceiveTick
	// void ReceiveTick(class AActor* OwnerActor, float DeltaSeconds);                                                          // [0x228deb8] RequiredAPI|Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTTask_BlueprintBase.ReceiveExecuteAI
	// void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);                                // [0x228deb8] RequiredAPI|Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTTask_BlueprintBase.ReceiveExecute
	// void ReceiveExecute(class AActor* OwnerActor);                                                                           // [0x228deb8] RequiredAPI|Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTTask_BlueprintBase.ReceiveAbortAI
	// void ReceiveAbortAI(class AAIController* OwnerController, class APawn* ControlledPawn);                                  // [0x228deb8] RequiredAPI|Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTTask_BlueprintBase.ReceiveAbort
	// void ReceiveAbort(class AActor* OwnerActor);                                                                             // [0x228deb8] RequiredAPI|Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTTask_BlueprintBase.IsTaskExecuting
	// bool IsTaskExecuting();                                                                                                  // [0x75da65c] Final|RequiredAPI|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.BTTask_BlueprintBase.IsTaskAborting
	// bool IsTaskAborting();                                                                                                   // [0x75da640] Final|RequiredAPI|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.BTTask_BlueprintBase.FinishExecute
	// void FinishExecute(bool bSuccess);                                                                                       // [0x75d9e80] Final|RequiredAPI|Native|Protected|BlueprintCallable 
	// Function /Script/AIModule.BTTask_BlueprintBase.FinishAbort
	// void FinishAbort();                                                                                                      // [0x75d9e18] Final|RequiredAPI|Native|Protected|BlueprintCallable 
};

/// Class /Script/AIModule.BTTask_FinishWithResult
/// Size: 0x0008 (0x000070 - 0x000078)
class UBTTask_FinishWithResult : public UBTTaskNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	CMember(TEnumAsByte<EBTNodeResult>)                Result                                                      OFFSET(get<T>, {0x70, 1, 0, 0})
};

/// Class /Script/AIModule.BTTask_GameplayTaskBase
/// Size: 0x0008 (0x000070 - 0x000078)
class UBTTask_GameplayTaskBase : public UBTTaskNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	DMember(bool)                                      bWaitForGameplayTask                                        OFFSET(get<bool>, {0x70, 1, 1, 0})
};

/// Class /Script/AIModule.BTTask_MakeNoise
/// Size: 0x0008 (0x000070 - 0x000078)
class UBTTask_MakeNoise : public UBTTaskNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	DMember(float)                                     Loudnes                                                     OFFSET(get<float>, {0x70, 4, 0, 0})
};

/// Class /Script/AIModule.BTTask_MoveTo
/// Size: 0x0018 (0x000098 - 0x0000B0)
class UBTTask_MoveTo : public UBTTask_BlackboardBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	DMember(float)                                     AcceptableRadius                                            OFFSET(get<float>, {0x98, 4, 0, 0})
	CMember(class UClass*)                             FilterClass                                                 OFFSET(get<T>, {0xA0, 8, 0, 0})
	DMember(float)                                     ObservedBlackboardValueTolerance                            OFFSET(get<float>, {0xA8, 4, 0, 0})
	DMember(bool)                                      bObserveBlackboardValue                                     OFFSET(get<bool>, {0xAC, 1, 1, 0})
	DMember(bool)                                      bAllowStrafe                                                OFFSET(get<bool>, {0xAC, 1, 1, 1})
	DMember(bool)                                      bAllowPartialPath                                           OFFSET(get<bool>, {0xAC, 1, 1, 2})
	DMember(bool)                                      bTrackMovingGoal                                            OFFSET(get<bool>, {0xAC, 1, 1, 3})
	DMember(bool)                                      bRequireNavigableEndLocation                                OFFSET(get<bool>, {0xAC, 1, 1, 4})
	DMember(bool)                                      bProjectGoalLocation                                        OFFSET(get<bool>, {0xAC, 1, 1, 5})
	DMember(bool)                                      bReachTestIncludesAgentRadius                               OFFSET(get<bool>, {0xAC, 1, 1, 6})
	DMember(bool)                                      bReachTestIncludesGoalRadius                                OFFSET(get<bool>, {0xAC, 1, 1, 7})
	DMember(bool)                                      bStopOnOverlap                                              OFFSET(get<bool>, {0xAD, 1, 1, 0})
	DMember(bool)                                      bStopOnOverlapNeedsUpdate                                   OFFSET(get<bool>, {0xAD, 1, 1, 1})
};

/// Class /Script/AIModule.BTTask_MoveDirectlyToward
/// Size: 0x0008 (0x0000B0 - 0x0000B8)
class UBTTask_MoveDirectlyToward : public UBTTask_MoveTo
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	DMember(bool)                                      bDisablePathUpdateOnGoalLocationChange                      OFFSET(get<bool>, {0xB0, 1, 1, 0})
	DMember(bool)                                      bProjectVectorGoalToNavigation                              OFFSET(get<bool>, {0xB0, 1, 1, 1})
	DMember(bool)                                      bUpdatedDeprecatedProperties                                OFFSET(get<bool>, {0xB0, 1, 1, 2})
};

/// Class /Script/AIModule.BTTask_PawnActionBase
/// Size: 0x0000 (0x000070 - 0x000070)
class UBTTask_PawnActionBase : public UBTTaskNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /Script/AIModule.BTTask_PlayAnimation
/// Size: 0x0040 (0x000070 - 0x0000B0)
class UBTTask_PlayAnimation : public UBTTaskNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	CMember(class UAnimationAsset*)                    AnimationToPlay                                             OFFSET(get<T>, {0x70, 8, 0, 0})
	DMember(bool)                                      bLooping                                                    OFFSET(get<bool>, {0x78, 1, 1, 0})
	DMember(bool)                                      bNonBlocking                                                OFFSET(get<bool>, {0x78, 1, 1, 1})
	CMember(class UBehaviorTreeComponent*)             MyOwnerComp                                                 OFFSET(get<T>, {0x80, 8, 0, 0})
	CMember(class USkeletalMeshComponent*)             CachedSkelMesh                                              OFFSET(get<T>, {0x88, 8, 0, 0})
};

/// Class /Script/AIModule.BTTask_PlaySound
/// Size: 0x0008 (0x000070 - 0x000078)
class UBTTask_PlaySound : public UBTTaskNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	CMember(class USoundCue*)                          SoundToPlay                                                 OFFSET(get<T>, {0x70, 8, 0, 0})
};

/// Class /Script/AIModule.BTTask_PushPawnAction
/// Size: 0x0008 (0x000070 - 0x000078)
class UBTTask_PushPawnAction : public UBTTask_PawnActionBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	CMember(class UPawnAction*)                        Action                                                      OFFSET(get<T>, {0x70, 8, 0, 0})
};

/// Class /Script/AIModule.BTTask_RotateToFaceBBEntry
/// Size: 0x0008 (0x000098 - 0x0000A0)
class UBTTask_RotateToFaceBBEntry : public UBTTask_BlackboardBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	DMember(float)                                     Precision                                                   OFFSET(get<float>, {0x98, 4, 0, 0})
};

/// Class /Script/AIModule.BTTask_RunBehavior
/// Size: 0x0008 (0x000070 - 0x000078)
class UBTTask_RunBehavior : public UBTTaskNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	CMember(class UBehaviorTree*)                      BehaviorAsset                                               OFFSET(get<T>, {0x70, 8, 0, 0})
};

/// Class /Script/AIModule.BTTask_RunBehaviorDynamic
/// Size: 0x0018 (0x000070 - 0x000088)
class UBTTask_RunBehaviorDynamic : public UBTTaskNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FGameplayTag)                              InjectionTag                                                OFFSET(getStruct<T>, {0x70, 4, 0, 0})
	CMember(class UBehaviorTree*)                      DefaultBehaviorAsset                                        OFFSET(get<T>, {0x78, 8, 0, 0})
	CMember(class UBehaviorTree*)                      BehaviorAsset                                               OFFSET(get<T>, {0x80, 8, 0, 0})
};

/// Class /Script/AIModule.BTTask_RunEQSQuery
/// Size: 0x00C0 (0x000098 - 0x000158)
class UBTTask_RunEQSQuery : public UBTTask_BlackboardBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 344;

public:
	CMember(class UEnvQuery*)                          QueryTemplate                                               OFFSET(get<T>, {0x98, 8, 0, 0})
	CMember(TArray<FEnvNamedValue>)                    QueryParams                                                 OFFSET(get<T>, {0xA0, 16, 0, 0})
	CMember(TArray<FAIDynamicParam>)                   QueryConfig                                                 OFFSET(get<T>, {0xB0, 16, 0, 0})
	CMember(TEnumAsByte<EEnvQueryRunMode>)             RunMode                                                     OFFSET(get<T>, {0xC0, 1, 0, 0})
	SMember(FBlackboardKeySelector)                    EQSQueryBlackboardKey                                       OFFSET(getStruct<T>, {0xC8, 40, 0, 0})
	DMember(bool)                                      bUseBBKey                                                   OFFSET(get<bool>, {0xF0, 1, 0, 0})
	SMember(FEQSParametrizedQueryExecutionRequest)     EQSRequest                                                  OFFSET(getStruct<T>, {0xF8, 72, 0, 0})
	DMember(bool)                                      bUpdateBBOnFail                                             OFFSET(get<bool>, {0x140, 1, 0, 0})
};

/// Class /Script/AIModule.BTTask_SetTagCooldown
/// Size: 0x0010 (0x000070 - 0x000080)
class UBTTask_SetTagCooldown : public UBTTaskNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FGameplayTag)                              CooldownTag                                                 OFFSET(getStruct<T>, {0x70, 4, 0, 0})
	DMember(bool)                                      bAddToExistingDuration                                      OFFSET(get<bool>, {0x74, 1, 0, 0})
	DMember(float)                                     CooldownDuration                                            OFFSET(get<float>, {0x78, 4, 0, 0})
};

/// Class /Script/AIModule.BTTask_Wait
/// Size: 0x0008 (0x000070 - 0x000078)
class UBTTask_Wait : public UBTTaskNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	DMember(float)                                     WaitTime                                                    OFFSET(get<float>, {0x70, 4, 0, 0})
	DMember(float)                                     RandomDeviation                                             OFFSET(get<float>, {0x74, 4, 0, 0})
};

/// Class /Script/AIModule.BTTask_WaitBlackboardTime
/// Size: 0x0028 (0x000078 - 0x0000A0)
class UBTTask_WaitBlackboardTime : public UBTTask_Wait
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	SMember(FBlackboardKeySelector)                    BlackboardKey                                               OFFSET(getStruct<T>, {0x78, 40, 0, 0})
};

/// Class /Script/AIModule.AIBlueprintHelperLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UAIBlueprintHelperLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/AIModule.AIBlueprintHelperLibrary.UnlockAIResourcesWithAnimation
	// void UnlockAIResourcesWithAnimation(class UAnimInstance* AnimInstance, bool bUnlockMovement, bool UnlockAILogic);        // [0x75dc06c] Final|RequiredAPI|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable 
	// Function /Script/AIModule.AIBlueprintHelperLibrary.SpawnAIFromClass
	// class APawn* SpawnAIFromClass(class UObject* WorldContextObject, class UClass* PawnClass, class UBehaviorTree* BehaviorTree, FVector Location, FRotator Rotation, bool bNoCollisionFail, class AActor* Owner); // [0x75db708] Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AIModule.AIBlueprintHelperLibrary.SimpleMoveToLocation
	// void SimpleMoveToLocation(class AController* Controller, FVector& Goal);                                                 // [0x75db610] Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/AIModule.AIBlueprintHelperLibrary.SimpleMoveToActor
	// void SimpleMoveToActor(class AController* Controller, class AActor* Goal);                                               // [0x75db55c] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/AIModule.AIBlueprintHelperLibrary.SendAIMessage
	// void SendAIMessage(class APawn* Target, FName Message, class UObject* MessageSource, bool bSuccess);                     // [0x75dacb8] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/AIModule.AIBlueprintHelperLibrary.LockAIResourcesWithAnimation
	// void LockAIResourcesWithAnimation(class UAnimInstance* AnimInstance, bool bLockMovement, bool LockAILogic);              // [0x75da8d0] Final|RequiredAPI|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable 
	// Function /Script/AIModule.AIBlueprintHelperLibrary.IsValidAIRotation
	// bool IsValidAIRotation(FRotator Rotation);                                                                               // [0x75da828] Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/AIModule.AIBlueprintHelperLibrary.IsValidAILocation
	// bool IsValidAILocation(FVector Location);                                                                                // [0x75da748] Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/AIModule.AIBlueprintHelperLibrary.IsValidAIDirection
	// bool IsValidAIDirection(FVector DirectionVector);                                                                        // [0x75da6b8] Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/AIModule.AIBlueprintHelperLibrary.GetNextNavLinkIndex
	// int32_t GetNextNavLinkIndex(class AController* Controller);                                                              // [0x75da2d8] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AIModule.AIBlueprintHelperLibrary.GetCurrentPathPoints
	// TArray<FVector> GetCurrentPathPoints(class AController* Controller);                                                     // [0x75da198] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AIModule.AIBlueprintHelperLibrary.GetCurrentPathIndex
	// int32_t GetCurrentPathIndex(class AController* Controller);                                                              // [0x75da0f4] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AIModule.AIBlueprintHelperLibrary.GetCurrentPath
	// class UNavigationPath* GetCurrentPath(class AController* Controller);                                                    // [0x75d9fec] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AIModule.AIBlueprintHelperLibrary.GetBlackboard
	// class UBlackboardComponent* GetBlackboard(class AActor* Target);                                                         // [0x75d9f40] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AIModule.AIBlueprintHelperLibrary.GetAIController
	// class AAIController* GetAIController(class AActor* ControlledActor);                                                     // [0x27a33f8] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AIModule.AIBlueprintHelperLibrary.CreateMoveToProxyObject
	// class UAIAsyncTaskBlueprintProxy* CreateMoveToProxyObject(class UObject* WorldContextObject, class APawn* Pawn, FVector Destination, class AActor* TargetActor, float AcceptanceRadius, bool bStopOnOverlap); // [0x75d9c3c] Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/AIModule.AIDataProvider
/// Size: 0x0000 (0x000028 - 0x000028)
class UAIDataProvider : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/AIModule.AIDataProvider_QueryParams
/// Size: 0x0010 (0x000028 - 0x000038)
class UAIDataProvider_QueryParams : public UAIDataProvider
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FName)                                     ParamName                                                   OFFSET(getStruct<T>, {0x28, 4, 0, 0})
	DMember(float)                                     FloatValue                                                  OFFSET(get<float>, {0x2C, 4, 0, 0})
	DMember(int32_t)                                   IntValue                                                    OFFSET(get<int32_t>, {0x30, 4, 0, 0})
	DMember(bool)                                      BoolValue                                                   OFFSET(get<bool>, {0x34, 1, 0, 0})
};

/// Class /Script/AIModule.AIDataProvider_Random
/// Size: 0x0010 (0x000038 - 0x000048)
class UAIDataProvider_Random : public UAIDataProvider_QueryParams
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	DMember(float)                                     Min                                                         OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     Max                                                         OFFSET(get<float>, {0x3C, 4, 0, 0})
	DMember(bool)                                      bInteger                                                    OFFSET(get<bool>, {0x40, 1, 1, 0})
};

/// Class /Script/AIModule.DetourCrowdAIController
/// Size: 0x0000 (0x0003B8 - 0x0003B8)
class ADetourCrowdAIController : public AAIController
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 952;

public:
};

/// Class /Script/AIModule.EnvQueryContext
/// Size: 0x0000 (0x000028 - 0x000028)
class UEnvQueryContext : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/AIModule.EnvQueryContext_BlueprintBase
/// Size: 0x0008 (0x000028 - 0x000030)
class UEnvQueryContext_BlueprintBase : public UEnvQueryContext
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:


	/// Functions
	// Function /Script/AIModule.EnvQueryContext_BlueprintBase.ProvideSingleLocation
	// void ProvideSingleLocation(class UObject* QuerierObject, class AActor* QuerierActor, FVector& ResultingLocation);        // [0x228deb8] Event|Public|HasOutParms|HasDefaults|BlueprintEvent|Const 
	// Function /Script/AIModule.EnvQueryContext_BlueprintBase.ProvideSingleActor
	// void ProvideSingleActor(class UObject* QuerierObject, class AActor* QuerierActor, class AActor*& ResultingActor);        // [0x228deb8] Event|Public|HasOutParms|BlueprintEvent|Const 
	// Function /Script/AIModule.EnvQueryContext_BlueprintBase.ProvideLocationsSet
	// void ProvideLocationsSet(class UObject* QuerierObject, class AActor* QuerierActor, TArray<FVector>& ResultingLocationSet); // [0x228deb8] Event|Public|HasOutParms|BlueprintEvent|Const 
	// Function /Script/AIModule.EnvQueryContext_BlueprintBase.ProvideActorsSet
	// void ProvideActorsSet(class UObject* QuerierObject, class AActor* QuerierActor, TArray<AActor*>& ResultingActorsSet);    // [0x228deb8] Event|Public|HasOutParms|BlueprintEvent|Const 
};

/// Class /Script/AIModule.EnvQueryContext_Item
/// Size: 0x0000 (0x000028 - 0x000028)
class UEnvQueryContext_Item : public UEnvQueryContext
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/AIModule.EnvQueryContext_Querier
/// Size: 0x0000 (0x000028 - 0x000028)
class UEnvQueryContext_Querier : public UEnvQueryContext
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/AIModule.EnvQuery
/// Size: 0x0018 (0x000030 - 0x000048)
class UEnvQuery : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FName)                                     QueryName                                                   OFFSET(getStruct<T>, {0x30, 4, 0, 0})
	CMember(TArray<class UEnvQueryOption*>)            Options                                                     OFFSET(get<T>, {0x38, 16, 0, 0})
};

/// Class /Script/AIModule.EnvQueryDebugHelpers
/// Size: 0x0000 (0x000028 - 0x000028)
class UEnvQueryDebugHelpers : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/AIModule.EnvQueryNode
/// Size: 0x0008 (0x000028 - 0x000030)
class UEnvQueryNode : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(int32_t)                                   VerNum                                                      OFFSET(get<int32_t>, {0x28, 4, 0, 0})
};

/// Class /Script/AIModule.EnvQueryGenerator
/// Size: 0x0020 (0x000030 - 0x000050)
class UEnvQueryGenerator : public UEnvQueryNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FString)                                   OptionName                                                  OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	CMember(class UClass*)                             ItemType                                                    OFFSET(get<T>, {0x40, 8, 0, 0})
	DMember(bool)                                      bAutoSortTests                                              OFFSET(get<bool>, {0x48, 1, 1, 0})
};

/// Class /Script/AIModule.EnvQueryInstanceBlueprintWrapper
/// Size: 0x0050 (0x000028 - 0x000078)
class UEnvQueryInstanceBlueprintWrapper : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	DMember(int32_t)                                   QueryID                                                     OFFSET(get<int32_t>, {0x30, 4, 0, 0})
	CMember(class UClass*)                             ItemType                                                    OFFSET(get<T>, {0x58, 8, 0, 0})
	DMember(int32_t)                                   OptionIndex                                                 OFFSET(get<int32_t>, {0x60, 4, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnQueryFinishedEvent                                        OFFSET(getStruct<T>, {0x68, 16, 0, 0})


	/// Functions
	// Function /Script/AIModule.EnvQueryInstanceBlueprintWrapper.SetNamedParam
	// void SetNamedParam(FName ParamName, float Value);                                                                        // [0x75db344] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AIModule.EnvQueryInstanceBlueprintWrapper.GetResultsAsLocations
	// TArray<FVector> GetResultsAsLocations();                                                                                 // [0x75da558] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.EnvQueryInstanceBlueprintWrapper.GetResultsAsActors
	// TArray<AActor*> GetResultsAsActors();                                                                                    // [0x75da518] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.EnvQueryInstanceBlueprintWrapper.GetQueryResultsAsLocations
	// bool GetQueryResultsAsLocations(TArray<FVector>& ResultLocations);                                                       // [0x75da46c] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/AIModule.EnvQueryInstanceBlueprintWrapper.GetQueryResultsAsActors
	// bool GetQueryResultsAsActors(TArray<AActor*>& ResultActors);                                                             // [0x75da384] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/AIModule.EnvQueryInstanceBlueprintWrapper.GetItemScore
	// float GetItemScore(int32_t ItemIndex);                                                                                   // [0x75da22c] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.EnvQueryInstanceBlueprintWrapper.EQSQueryDoneSignature__DelegateSignature
	// void EQSQueryDoneSignature__DelegateSignature(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<EEnvQueryStatus> QueryStatus); // [0x228deb8] MulticastDelegate|Public|Delegate 
};

/// Class /Script/AIModule.EnvQueryManager
/// Size: 0x0120 (0x000038 - 0x000158)
class UEnvQueryManager : public UAISubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 344;

public:
	CMember(TArray<FEnvQueryInstanceCache>)            InstanceCache                                               OFFSET(get<T>, {0xA8, 16, 0, 0})
	CMember(TArray<class UEnvQueryContext*>)           LocalContexts                                               OFFSET(get<T>, {0xB8, 16, 0, 0})
	CMember(TArray<class UEnvQueryInstanceBlueprintWrapper*>) GCShieldedWrappers                                   OFFSET(get<T>, {0xC8, 16, 0, 0})
	DMember(float)                                     MaxAllowedTestingTime                                       OFFSET(get<float>, {0x12C, 4, 0, 0})
	DMember(bool)                                      bTestQueriesUsingBreadth                                    OFFSET(get<bool>, {0x130, 1, 0, 0})
	DMember(int32_t)                                   QueryCountWarningThreshold                                  OFFSET(get<int32_t>, {0x134, 4, 0, 0})
	DMember(double)                                    QueryCountWarningInterval                                   OFFSET(get<double>, {0x138, 8, 0, 0})
	DMember(double)                                    ExecutionTimeWarningSeconds                                 OFFSET(get<double>, {0x140, 8, 0, 0})
	DMember(double)                                    HandlingResultTimeWarningSeconds                            OFFSET(get<double>, {0x148, 8, 0, 0})
	DMember(double)                                    GenerationTimeWarningSeconds                                OFFSET(get<double>, {0x150, 8, 0, 0})


	/// Functions
	// Function /Script/AIModule.EnvQueryManager.RunEQSQuery
	// class UEnvQueryInstanceBlueprintWrapper* RunEQSQuery(class UObject* WorldContextObject, class UEnvQuery* QueryTemplate, class UObject* Querier, TEnumAsByte<EEnvQueryRunMode> RunMode, class UClass* WrapperClass); // [0x75daa48] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/AIModule.EnvQueryOption
/// Size: 0x0018 (0x000028 - 0x000040)
class UEnvQueryOption : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(class UEnvQueryGenerator*)                 Generator                                                   OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(TArray<class UEnvQueryTest*>)              Tests                                                       OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Class /Script/AIModule.EnvQueryTest
/// Size: 0x01C8 (0x000030 - 0x0001F8)
class UEnvQueryTest : public UEnvQueryNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 504;

public:
	DMember(int32_t)                                   TestOrder                                                   OFFSET(get<int32_t>, {0x30, 4, 0, 0})
	CMember(TEnumAsByte<EEnvTestPurpose>)              TestPurpose                                                 OFFSET(get<T>, {0x34, 1, 0, 0})
	SMember(FString)                                   TestComment                                                 OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	CMember(TEnumAsByte<EEnvTestFilterOperator>)       MultipleContextFilterOp                                     OFFSET(get<T>, {0x48, 1, 0, 0})
	CMember(TEnumAsByte<EEnvTestScoreOperator>)        MultipleContextScoreOp                                      OFFSET(get<T>, {0x49, 1, 0, 0})
	CMember(TEnumAsByte<EEnvTestFilterType>)           FilterType                                                  OFFSET(get<T>, {0x4A, 1, 0, 0})
	SMember(FAIDataProviderBoolValue)                  BoolValue                                                   OFFSET(getStruct<T>, {0x50, 56, 0, 0})
	SMember(FAIDataProviderFloatValue)                 FloatValueMin                                               OFFSET(getStruct<T>, {0x88, 56, 0, 0})
	SMember(FAIDataProviderFloatValue)                 FloatValueMax                                               OFFSET(getStruct<T>, {0xC0, 56, 0, 0})
	CMember(TEnumAsByte<EEnvTestScoreEquation>)        ScoringEquation                                             OFFSET(get<T>, {0xF9, 1, 0, 0})
	CMember(TEnumAsByte<EEnvQueryTestClamping>)        ClampMinType                                                OFFSET(get<T>, {0xFA, 1, 0, 0})
	CMember(TEnumAsByte<EEnvQueryTestClamping>)        ClampMaxType                                                OFFSET(get<T>, {0xFB, 1, 0, 0})
	CMember(EEQSNormalizationType)                     NormalizationType                                           OFFSET(get<T>, {0xFC, 1, 0, 0})
	SMember(FAIDataProviderFloatValue)                 ScoreClampMin                                               OFFSET(getStruct<T>, {0x100, 56, 0, 0})
	SMember(FAIDataProviderFloatValue)                 ScoreClampMax                                               OFFSET(getStruct<T>, {0x138, 56, 0, 0})
	SMember(FAIDataProviderFloatValue)                 ScoringFactor                                               OFFSET(getStruct<T>, {0x170, 56, 0, 0})
	SMember(FAIDataProviderFloatValue)                 ReferenceValue                                              OFFSET(getStruct<T>, {0x1A8, 56, 0, 0})
	DMember(bool)                                      bDefineReferenceValue                                       OFFSET(get<bool>, {0x1E0, 1, 0, 0})
	DMember(bool)                                      bWorkOnFloatValues                                          OFFSET(get<bool>, {0x1F0, 1, 1, 0})
};

/// Class /Script/AIModule.EQSRenderingComponent
/// Size: 0x0040 (0x000550 - 0x000590)
class UEQSRenderingComponent : public UDebugDrawComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1424;

public:
};

/// Class /Script/AIModule.EQSTestingPawn
/// Size: 0x00A0 (0x000660 - 0x000700)
class AEQSTestingPawn : public ACharacter
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1792;

public:
	CMember(class UEnvQuery*)                          QueryTemplate                                               OFFSET(get<T>, {0x668, 8, 0, 0})
	CMember(TArray<FEnvNamedValue>)                    QueryParams                                                 OFFSET(get<T>, {0x670, 16, 0, 0})
	CMember(TArray<FAIDynamicParam>)                   QueryConfig                                                 OFFSET(get<T>, {0x680, 16, 0, 0})
	DMember(float)                                     TimeLimitPerStep                                            OFFSET(get<float>, {0x690, 4, 0, 0})
	DMember(int32_t)                                   StepToDebugDraw                                             OFFSET(get<int32_t>, {0x694, 4, 0, 0})
	CMember(EEnvQueryHightlightMode)                   HighlightMode                                               OFFSET(get<T>, {0x698, 1, 0, 0})
	DMember(bool)                                      bDrawLabels                                                 OFFSET(get<bool>, {0x69C, 1, 1, 0})
	DMember(bool)                                      bDrawFailedItems                                            OFFSET(get<bool>, {0x69C, 1, 1, 1})
	DMember(bool)                                      bReRunQueryOnlyOnFinishedMove                               OFFSET(get<bool>, {0x69C, 1, 1, 2})
	DMember(bool)                                      bShouldBeVisibleInGame                                      OFFSET(get<bool>, {0x69C, 1, 1, 3})
	DMember(bool)                                      bTickDuringGame                                             OFFSET(get<bool>, {0x69C, 1, 1, 4})
	CMember(TEnumAsByte<EEnvQueryRunMode>)             QueryingMode                                                OFFSET(get<T>, {0x6A0, 1, 0, 0})
	SMember(FNavAgentProperties)                       NavAgentProperties                                          OFFSET(getStruct<T>, {0x6A8, 48, 0, 0})
};

/// Class /Script/AIModule.EnvQueryGenerator_ActorsOfClass
/// Size: 0x0080 (0x000050 - 0x0000D0)
class UEnvQueryGenerator_ActorsOfClass : public UEnvQueryGenerator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	CMember(class UClass*)                             SearchedActorClass                                          OFFSET(get<T>, {0x50, 8, 0, 0})
	SMember(FAIDataProviderBoolValue)                  GenerateOnlyActorsInRadius                                  OFFSET(getStruct<T>, {0x58, 56, 0, 0})
	SMember(FAIDataProviderFloatValue)                 SearchRadius                                                OFFSET(getStruct<T>, {0x90, 56, 0, 0})
	CMember(class UClass*)                             SearchCenter                                                OFFSET(get<T>, {0xC8, 8, 0, 0})
};

/// Class /Script/AIModule.EnvQueryGenerator_BlueprintBase
/// Size: 0x0030 (0x000050 - 0x000080)
class UEnvQueryGenerator_BlueprintBase : public UEnvQueryGenerator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FText)                                     GeneratorsActionDescription                                 OFFSET(getStruct<T>, {0x50, 16, 0, 0})
	CMember(class UClass*)                             Context                                                     OFFSET(get<T>, {0x60, 8, 0, 0})
	CMember(class UClass*)                             GeneratedItemType                                           OFFSET(get<T>, {0x68, 8, 0, 0})


	/// Functions
	// Function /Script/AIModule.EnvQueryGenerator_BlueprintBase.GetQuerier
	// class UObject* GetQuerier();                                                                                             // [0x75da358] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.EnvQueryGenerator_BlueprintBase.DoItemGenerationFromActors
	// void DoItemGenerationFromActors(TArray<AActor*>& ContextActors);                                                         // [0x228deb8] RequiredAPI|Event|Public|HasOutParms|BlueprintEvent|Const 
	// Function /Script/AIModule.EnvQueryGenerator_BlueprintBase.DoItemGeneration
	// void DoItemGeneration(TArray<FVector>& ContextLocations);                                                                // [0x228deb8] RequiredAPI|Event|Public|HasOutParms|BlueprintEvent|Const 
	// Function /Script/AIModule.EnvQueryGenerator_BlueprintBase.AddGeneratedVector
	// void AddGeneratedVector(FVector GeneratedVector);                                                                        // [0x75d9bac] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|Const 
	// Function /Script/AIModule.EnvQueryGenerator_BlueprintBase.AddGeneratedActor
	// void AddGeneratedActor(class AActor* GeneratedActor);                                                                    // [0x75d9b2c] Final|RequiredAPI|Native|Public|BlueprintCallable|Const 
};

/// Class /Script/AIModule.EnvQueryGenerator_Composite
/// Size: 0x0020 (0x000050 - 0x000070)
class UEnvQueryGenerator_Composite : public UEnvQueryGenerator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	CMember(TArray<class UEnvQueryGenerator*>)         Generators                                                  OFFSET(get<T>, {0x50, 16, 0, 0})
	DMember(bool)                                      bAllowDifferentItemTypes                                    OFFSET(get<bool>, {0x60, 1, 1, 0})
	DMember(bool)                                      bHasMatchingItemType                                        OFFSET(get<bool>, {0x60, 1, 1, 1})
	CMember(class UClass*)                             ForcedItemType                                              OFFSET(get<T>, {0x68, 8, 0, 0})
};

/// Class /Script/AIModule.EnvQueryGenerator_ProjectedPoints
/// Size: 0x0038 (0x000050 - 0x000088)
class UEnvQueryGenerator_ProjectedPoints : public UEnvQueryGenerator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FEnvTraceData)                             ProjectionData                                              OFFSET(getStruct<T>, {0x50, 56, 0, 0})
};

/// Class /Script/AIModule.EnvQueryGenerator_Cone
/// Size: 0x00F0 (0x000088 - 0x000178)
class UEnvQueryGenerator_Cone : public UEnvQueryGenerator_ProjectedPoints
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 376;

public:
	SMember(FAIDataProviderFloatValue)                 AlignedPointsDistance                                       OFFSET(getStruct<T>, {0x88, 56, 0, 0})
	SMember(FAIDataProviderFloatValue)                 ConeDegrees                                                 OFFSET(getStruct<T>, {0xC0, 56, 0, 0})
	SMember(FAIDataProviderFloatValue)                 AngleStep                                                   OFFSET(getStruct<T>, {0xF8, 56, 0, 0})
	SMember(FAIDataProviderFloatValue)                 Range                                                       OFFSET(getStruct<T>, {0x130, 56, 0, 0})
	CMember(class UClass*)                             CenterActor                                                 OFFSET(get<T>, {0x168, 8, 0, 0})
	DMember(bool)                                      bIncludeContextLocation                                     OFFSET(get<bool>, {0x170, 1, 1, 0})
};

/// Class /Script/AIModule.EnvQueryGenerator_CurrentLocation
/// Size: 0x0008 (0x000050 - 0x000058)
class UEnvQueryGenerator_CurrentLocation : public UEnvQueryGenerator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(class UClass*)                             QueryContext                                                OFFSET(get<T>, {0x50, 8, 0, 0})
};

/// Class /Script/AIModule.EnvQueryGenerator_Donut
/// Size: 0x0150 (0x000088 - 0x0001D8)
class UEnvQueryGenerator_Donut : public UEnvQueryGenerator_ProjectedPoints
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 472;

public:
	SMember(FAIDataProviderFloatValue)                 InnerRadius                                                 OFFSET(getStruct<T>, {0x88, 56, 0, 0})
	SMember(FAIDataProviderFloatValue)                 OuterRadius                                                 OFFSET(getStruct<T>, {0xC0, 56, 0, 0})
	SMember(FAIDataProviderIntValue)                   NumberOfRings                                               OFFSET(getStruct<T>, {0xF8, 56, 0, 0})
	SMember(FAIDataProviderIntValue)                   PointsPerRing                                               OFFSET(getStruct<T>, {0x130, 56, 0, 0})
	SMember(FEnvDirection)                             ArcDirection                                                OFFSET(getStruct<T>, {0x168, 32, 0, 0})
	SMember(FAIDataProviderFloatValue)                 ArcAngle                                                    OFFSET(getStruct<T>, {0x188, 56, 0, 0})
	DMember(bool)                                      bUseSpiralPattern                                           OFFSET(get<bool>, {0x1C0, 1, 0, 0})
	CMember(class UClass*)                             Center                                                      OFFSET(get<T>, {0x1C8, 8, 0, 0})
	DMember(bool)                                      bDefineArc                                                  OFFSET(get<bool>, {0x1D0, 1, 1, 0})
};

/// Class /Script/AIModule.EnvQueryGenerator_OnCircle
/// Size: 0x0198 (0x000088 - 0x000220)
class UEnvQueryGenerator_OnCircle : public UEnvQueryGenerator_ProjectedPoints
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 544;

public:
	SMember(FAIDataProviderFloatValue)                 CircleRadius                                                OFFSET(getStruct<T>, {0x88, 56, 0, 0})
	CMember(EPointOnCircleSpacingMethod)               PointOnCircleSpacingMethod                                  OFFSET(get<T>, {0xC0, 1, 0, 0})
	SMember(FAIDataProviderFloatValue)                 SpaceBetween                                                OFFSET(getStruct<T>, {0xC8, 56, 0, 0})
	SMember(FAIDataProviderIntValue)                   NumberOfPoints                                              OFFSET(getStruct<T>, {0x100, 56, 0, 0})
	SMember(FEnvDirection)                             ArcDirection                                                OFFSET(getStruct<T>, {0x138, 32, 0, 0})
	SMember(FAIDataProviderFloatValue)                 ArcAngle                                                    OFFSET(getStruct<T>, {0x158, 56, 0, 0})
	DMember(float)                                     AngleRadians                                                OFFSET(get<float>, {0x190, 4, 0, 0})
	CMember(class UClass*)                             CircleCenter                                                OFFSET(get<T>, {0x198, 8, 0, 0})
	DMember(bool)                                      bIgnoreAnyContextActorsWhenGeneratingCircle                 OFFSET(get<bool>, {0x1A0, 1, 0, 0})
	SMember(FAIDataProviderFloatValue)                 CircleCenterZOffset                                         OFFSET(getStruct<T>, {0x1A8, 56, 0, 0})
	SMember(FEnvTraceData)                             TraceData                                                   OFFSET(getStruct<T>, {0x1E0, 56, 0, 0})
	DMember(bool)                                      bDefineArc                                                  OFFSET(get<bool>, {0x218, 1, 1, 0})
};

/// Class /Script/AIModule.EnvQueryGenerator_SimpleGrid
/// Size: 0x0078 (0x000088 - 0x000100)
class UEnvQueryGenerator_SimpleGrid : public UEnvQueryGenerator_ProjectedPoints
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	SMember(FAIDataProviderFloatValue)                 GridSize                                                    OFFSET(getStruct<T>, {0x88, 56, 0, 0})
	SMember(FAIDataProviderFloatValue)                 SpaceBetween                                                OFFSET(getStruct<T>, {0xC0, 56, 0, 0})
	CMember(class UClass*)                             GenerateAround                                              OFFSET(get<T>, {0xF8, 8, 0, 0})
};

/// Class /Script/AIModule.EnvQueryGenerator_PathingGrid
/// Size: 0x0078 (0x000100 - 0x000178)
class UEnvQueryGenerator_PathingGrid : public UEnvQueryGenerator_SimpleGrid
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 376;

public:
	SMember(FAIDataProviderBoolValue)                  PathToItem                                                  OFFSET(getStruct<T>, {0x100, 56, 0, 0})
	CMember(class UClass*)                             NavigationFilter                                            OFFSET(get<T>, {0x138, 8, 0, 0})
	SMember(FAIDataProviderFloatValue)                 ScanRangeMultiplier                                         OFFSET(getStruct<T>, {0x140, 56, 0, 0})
};

/// Class /Script/AIModule.EnvQueryGenerator_PerceivedActors
/// Size: 0x0058 (0x000050 - 0x0000A8)
class UEnvQueryGenerator_PerceivedActors : public UEnvQueryGenerator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	CMember(class UClass*)                             AllowedActorClass                                           OFFSET(get<T>, {0x50, 8, 0, 0})
	SMember(FAIDataProviderFloatValue)                 SearchRadius                                                OFFSET(getStruct<T>, {0x58, 56, 0, 0})
	CMember(class UClass*)                             ListenerContext                                             OFFSET(get<T>, {0x90, 8, 0, 0})
	CMember(class UClass*)                             SenseToUse                                                  OFFSET(get<T>, {0x98, 8, 0, 0})
	DMember(bool)                                      bIncludeKnownActors                                         OFFSET(get<bool>, {0xA0, 1, 0, 0})
};

/// Class /Script/AIModule.EnvQueryItemType
/// Size: 0x0008 (0x000028 - 0x000030)
class UEnvQueryItemType : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/AIModule.EnvQueryItemType_VectorBase
/// Size: 0x0000 (0x000030 - 0x000030)
class UEnvQueryItemType_VectorBase : public UEnvQueryItemType
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/AIModule.EnvQueryItemType_ActorBase
/// Size: 0x0000 (0x000030 - 0x000030)
class UEnvQueryItemType_ActorBase : public UEnvQueryItemType_VectorBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/AIModule.EnvQueryItemType_Actor
/// Size: 0x0000 (0x000030 - 0x000030)
class UEnvQueryItemType_Actor : public UEnvQueryItemType_ActorBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/AIModule.EnvQueryItemType_Direction
/// Size: 0x0000 (0x000030 - 0x000030)
class UEnvQueryItemType_Direction : public UEnvQueryItemType_VectorBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/AIModule.EnvQueryItemType_Point
/// Size: 0x0000 (0x000030 - 0x000030)
class UEnvQueryItemType_Point : public UEnvQueryItemType_VectorBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/AIModule.EnvQueryTest_Distance
/// Size: 0x0010 (0x0001F8 - 0x000208)
class UEnvQueryTest_Distance : public UEnvQueryTest
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 520;

public:
	CMember(TEnumAsByte<EEnvTestDistance>)             TestMode                                                    OFFSET(get<T>, {0x1F8, 1, 0, 0})
	CMember(class UClass*)                             DistanceTo                                                  OFFSET(get<T>, {0x200, 8, 0, 0})
};

/// Class /Script/AIModule.EnvQueryTest_Dot
/// Size: 0x0048 (0x0001F8 - 0x000240)
class UEnvQueryTest_Dot : public UEnvQueryTest
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 576;

public:
	SMember(FEnvDirection)                             LineA                                                       OFFSET(getStruct<T>, {0x1F8, 32, 0, 0})
	SMember(FEnvDirection)                             LineB                                                       OFFSET(getStruct<T>, {0x218, 32, 0, 0})
	CMember(EEnvTestDot)                               TestMode                                                    OFFSET(get<T>, {0x238, 1, 0, 0})
	DMember(bool)                                      bAbsoluteValue                                              OFFSET(get<bool>, {0x239, 1, 0, 0})
};

/// Class /Script/AIModule.EnvQueryTest_GameplayTags
/// Size: 0x0070 (0x0001F8 - 0x000268)
class UEnvQueryTest_GameplayTags : public UEnvQueryTest
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 616;

public:
	SMember(FGameplayTagQuery)                         TagQueryToMatch                                             OFFSET(getStruct<T>, {0x1F8, 72, 0, 0})
	DMember(bool)                                      bRejectIncompatibleItems                                    OFFSET(get<bool>, {0x240, 1, 0, 0})
	DMember(bool)                                      bUpdatedToUseQuery                                          OFFSET(get<bool>, {0x241, 1, 0, 0})
	CMember(EGameplayContainerMatchType)               TagsToMatch                                                 OFFSET(get<T>, {0x242, 1, 0, 0})
	SMember(FGameplayTagContainer)                     GameplayTags                                                OFFSET(getStruct<T>, {0x248, 32, 0, 0})
};

/// Class /Script/AIModule.EnvQueryTest_Overlap
/// Size: 0x0030 (0x0001F8 - 0x000228)
class UEnvQueryTest_Overlap : public UEnvQueryTest
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 552;

public:
	SMember(FEnvOverlapData)                           OverlapData                                                 OFFSET(getStruct<T>, {0x1F8, 48, 0, 0})
};

/// Class /Script/AIModule.EnvQueryTest_Pathfinding
/// Size: 0x0088 (0x0001F8 - 0x000280)
class UEnvQueryTest_Pathfinding : public UEnvQueryTest
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 640;

public:
	CMember(TEnumAsByte<EEnvTestPathfinding>)          TestMode                                                    OFFSET(get<T>, {0x1F8, 1, 0, 0})
	CMember(class UClass*)                             Context                                                     OFFSET(get<T>, {0x200, 8, 0, 0})
	SMember(FAIDataProviderBoolValue)                  PathFromContext                                             OFFSET(getStruct<T>, {0x208, 56, 0, 0})
	SMember(FAIDataProviderBoolValue)                  SkipUnreachable                                             OFFSET(getStruct<T>, {0x240, 56, 0, 0})
	CMember(class UClass*)                             FilterClass                                                 OFFSET(get<T>, {0x278, 8, 0, 0})
};

/// Class /Script/AIModule.EnvQueryTest_PathfindingBatch
/// Size: 0x0038 (0x000280 - 0x0002B8)
class UEnvQueryTest_PathfindingBatch : public UEnvQueryTest_Pathfinding
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 696;

public:
	SMember(FAIDataProviderFloatValue)                 ScanRangeMultiplier                                         OFFSET(getStruct<T>, {0x280, 56, 0, 0})
};

/// Class /Script/AIModule.EnvQueryTest_Project
/// Size: 0x0038 (0x0001F8 - 0x000230)
class UEnvQueryTest_Project : public UEnvQueryTest
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 560;

public:
	SMember(FEnvTraceData)                             ProjectionData                                              OFFSET(getStruct<T>, {0x1F8, 56, 0, 0})
};

/// Class /Script/AIModule.EnvQueryTest_Random
/// Size: 0x0000 (0x0001F8 - 0x0001F8)
class UEnvQueryTest_Random : public UEnvQueryTest
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 504;

public:
};

/// Class /Script/AIModule.EnvQueryTest_Trace
/// Size: 0x00E8 (0x0001F8 - 0x0002E0)
class UEnvQueryTest_Trace : public UEnvQueryTest
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 736;

public:
	SMember(FEnvTraceData)                             TraceData                                                   OFFSET(getStruct<T>, {0x1F8, 56, 0, 0})
	SMember(FAIDataProviderBoolValue)                  TraceFromContext                                            OFFSET(getStruct<T>, {0x230, 56, 0, 0})
	SMember(FAIDataProviderFloatValue)                 ItemHeightOffset                                            OFFSET(getStruct<T>, {0x268, 56, 0, 0})
	SMember(FAIDataProviderFloatValue)                 ContextHeightOffset                                         OFFSET(getStruct<T>, {0x2A0, 56, 0, 0})
	CMember(class UClass*)                             Context                                                     OFFSET(get<T>, {0x2D8, 8, 0, 0})
};

/// Class /Script/AIModule.EnvQueryTest_Volume
/// Size: 0x0018 (0x0001F8 - 0x000210)
class UEnvQueryTest_Volume : public UEnvQueryTest
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 528;

public:
	CMember(class UClass*)                             VolumeContext                                               OFFSET(get<T>, {0x1F8, 8, 0, 0})
	CMember(class UClass*)                             VolumeClass                                                 OFFSET(get<T>, {0x200, 8, 0, 0})
	DMember(bool)                                      bDoComplexVolumeTest                                        OFFSET(get<bool>, {0x208, 1, 1, 0})
	DMember(bool)                                      bSkipTestIfNoVolumes                                        OFFSET(get<bool>, {0x208, 1, 1, 1})
};

/// Class /Script/AIModule.GridPathAIController
/// Size: 0x0000 (0x0003B8 - 0x0003B8)
class AGridPathAIController : public AAIController
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 952;

public:
};

/// Class /Script/AIModule.AIHotSpotManager
/// Size: 0x0000 (0x000028 - 0x000028)
class UAIHotSpotManager : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/AIModule.PathFollowingComponent
/// Size: 0x0240 (0x0000A0 - 0x0002E0)
class UPathFollowingComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 736;

public:
	CMember(class UNavMovementComponent*)              MovementComp                                                OFFSET(get<T>, {0xD8, 8, 0, 0})
	CMember(class ANavigationData*)                    MyNavData                                                   OFFSET(get<T>, {0xF0, 8, 0, 0})


	/// Functions
	// Function /Script/AIModule.PathFollowingComponent.OnNavDataRegistered
	// void OnNavDataRegistered(class ANavigationData* NavData);                                                                // [0x76096f0] Final|RequiredAPI|Native|Protected 
	// Function /Script/AIModule.PathFollowingComponent.OnActorBump
	// void OnActorBump(class AActor* SelfActor, class AActor* OtherActor, FVector NormalImpulse, FHitResult& Hit);             // [0x7609524] RequiredAPI|Native|Public|HasOutParms|HasDefaults 
	// Function /Script/AIModule.PathFollowingComponent.GetPathDestination
	// FVector GetPathDestination();                                                                                            // [0x7609460] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.PathFollowingComponent.GetPathActionType
	// TEnumAsByte<EPathFollowingAction> GetPathActionType();                                                                   // [0x76093e8] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AIModule.CrowdFollowingComponent
/// Size: 0x0050 (0x0002E0 - 0x000330)
class UCrowdFollowingComponent : public UPathFollowingComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 816;

public:
	SMember(FVector)                                   CrowdAgentMoveDirection                                     OFFSET(getStruct<T>, {0x2F8, 24, 0, 0})


	/// Functions
	// Function /Script/AIModule.CrowdFollowingComponent.SuspendCrowdSteering
	// void SuspendCrowdSteering(bool bSuspend);                                                                                // [0x7609b04] RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/AIModule.CrowdManager
/// Size: 0x00C8 (0x000028 - 0x0000F0)
class UCrowdManager : public UCrowdManagerBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	CMember(class ANavigationData*)                    MyNavData                                                   OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(TArray<FCrowdAvoidanceConfig>)             AvoidanceConfig                                             OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TArray<FCrowdAvoidanceSamplingPattern>)    SamplingPatterns                                            OFFSET(get<T>, {0x40, 16, 0, 0})
	DMember(int32_t)                                   MaxAgents                                                   OFFSET(get<int32_t>, {0x50, 4, 0, 0})
	DMember(float)                                     MaxAgentRadius                                              OFFSET(get<float>, {0x54, 4, 0, 0})
	DMember(int32_t)                                   MaxAvoidedAgents                                            OFFSET(get<int32_t>, {0x58, 4, 0, 0})
	DMember(int32_t)                                   MaxAvoidedWalls                                             OFFSET(get<int32_t>, {0x5C, 4, 0, 0})
	DMember(float)                                     NavmeshCheckInterval                                        OFFSET(get<float>, {0x60, 4, 0, 0})
	DMember(float)                                     PathOptimizationInterval                                    OFFSET(get<float>, {0x64, 4, 0, 0})
	DMember(float)                                     SeparationDirClamp                                          OFFSET(get<float>, {0x68, 4, 0, 0})
	DMember(float)                                     PathOffsetRadiusMultiplier                                  OFFSET(get<float>, {0x6C, 4, 0, 0})
	DMember(bool)                                      bResolveCollisions                                          OFFSET(get<bool>, {0x70, 1, 1, 4})
};

/// Class /Script/AIModule.GridPathFollowingComponent
/// Size: 0x0030 (0x0002E0 - 0x000310)
class UGridPathFollowingComponent : public UPathFollowingComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 784;

public:
	CMember(class UNavLocalGridManager*)               GridManager                                                 OFFSET(get<T>, {0x2E0, 8, 0, 0})
};

/// Class /Script/AIModule.NavFilter_AIControllerDefault
/// Size: 0x0000 (0x000048 - 0x000048)
class UNavFilter_AIControllerDefault : public UNavigationQueryFilter
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Class /Script/AIModule.NavLinkProxy
/// Size: 0x0050 (0x000290 - 0x0002E0)
class ANavLinkProxy : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 736;

public:
	CMember(TArray<FNavigationLink>)                   PointLinks                                                  OFFSET(get<T>, {0x2A0, 16, 0, 0})
	CMember(TArray<FNavigationSegmentLink>)            SegmentLinks                                                OFFSET(get<T>, {0x2B0, 16, 0, 0})
	CMember(class UNavLinkCustomComponent*)            SmartLinkComp                                               OFFSET(get<T>, {0x2C0, 8, 0, 0})
	DMember(bool)                                      bSmartLinkIsRelevant                                        OFFSET(get<bool>, {0x2C8, 1, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnSmartLinkReached                                          OFFSET(getStruct<T>, {0x2D0, 16, 0, 0})


	/// Functions
	// Function /Script/AIModule.NavLinkProxy.SetSmartLinkEnabled
	// void SetSmartLinkEnabled(bool bEnabled);                                                                                 // [0x7609a80] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AIModule.NavLinkProxy.ResumePathFollowing
	// void ResumePathFollowing(class AActor* Agent);                                                                           // [0x76098e4] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AIModule.NavLinkProxy.ReceiveSmartLinkReached
	// void ReceiveSmartLinkReached(class AActor* Agent, FVector& Destination);                                                 // [0x228deb8] RequiredAPI|Event|Public|HasOutParms|HasDefaults|BlueprintEvent 
	// Function /Script/AIModule.NavLinkProxy.IsSmartLinkEnabled
	// bool IsSmartLinkEnabled();                                                                                               // [0x7609500] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.NavLinkProxy.HasMovingAgents
	// bool HasMovingAgents();                                                                                                  // [0x7609498] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AIModule.NavLocalGridManager
/// Size: 0x0030 (0x000028 - 0x000058)
class UNavLocalGridManager : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:


	/// Functions
	// Function /Script/AIModule.NavLocalGridManager.SetLocalNavigationGridDensity
	// bool SetLocalNavigationGridDensity(class UObject* WorldContextObject, float CellSize);                                   // [0x76099bc] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/AIModule.NavLocalGridManager.RemoveLocalNavigationGrid
	// void RemoveLocalNavigationGrid(class UObject* WorldContextObject, int32_t GridId, bool bRebuildGrids);                   // [0x76097d4] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/AIModule.NavLocalGridManager.FindLocalNavigationGridPath
	// bool FindLocalNavigationGridPath(class UObject* WorldContextObject, FVector& Start, FVector& End, TArray<FVector>& PathPoints); // [0x76091d4] Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/AIModule.NavLocalGridManager.AddLocalNavigationGridForPoints
	// int32_t AddLocalNavigationGridForPoints(class UObject* WorldContextObject, TArray<FVector>& Locations, int32_t Radius2D, float Height, bool bRebuildGrids); // [0x7608e3c] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AIModule.NavLocalGridManager.AddLocalNavigationGridForPoint
	// int32_t AddLocalNavigationGridForPoint(class UObject* WorldContextObject, FVector& Location, int32_t Radius2D, float Height, bool bRebuildGrids); // [0x7608ba8] Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/AIModule.NavLocalGridManager.AddLocalNavigationGridForCapsule
	// int32_t AddLocalNavigationGridForCapsule(class UObject* WorldContextObject, FVector& Location, float CapsuleRadius, float CapsuleHalfHeight, int32_t Radius2D, float Height, bool bRebuildGrids); // [0x7608808] Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/AIModule.NavLocalGridManager.AddLocalNavigationGridForBox
	// int32_t AddLocalNavigationGridForBox(class UObject* WorldContextObject, FVector& Location, FVector Extent, FRotator Rotation, int32_t Radius2D, float Height, bool bRebuildGrids); // [0x7608444] Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/AIModule.PathFollowingManager
/// Size: 0x0000 (0x000028 - 0x000028)
class UPathFollowingManager : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/AIModule.AIPerceptionComponent
/// Size: 0x00E8 (0x0000A0 - 0x000188)
class UAIPerceptionComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 392;

public:
	CMember(TArray<class UAISenseConfig*>)             SensesConfig                                                OFFSET(get<T>, {0xA0, 16, 0, 0})
	CMember(class UClass*)                             DominantSense                                               OFFSET(get<T>, {0xB0, 8, 0, 0})
	CMember(class AAIController*)                      AIOwner                                                     OFFSET(get<T>, {0xC0, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPerceptionUpdated                                         OFFSET(getStruct<T>, {0x148, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnTargetPerceptionForgotten                                 OFFSET(getStruct<T>, {0x158, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnTargetPerceptionUpdated                                   OFFSET(getStruct<T>, {0x168, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnTargetPerceptionInfoUpdated                               OFFSET(getStruct<T>, {0x178, 16, 0, 0})


	/// Functions
	// Function /Script/AIModule.AIPerceptionComponent.SetSenseEnabled
	// void SetSenseEnabled(class UClass* SenseClass, bool bEnable);                                                            // [0x761b6e4] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AIModule.AIPerceptionComponent.RequestStimuliListenerUpdate
	// void RequestStimuliListenerUpdate();                                                                                     // [0x761b538] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AIModule.AIPerceptionComponent.OnOwnerEndPlay
	// void OnOwnerEndPlay(class AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason);                                     // [0x761a748] Final|RequiredAPI|Native|Public 
	// Function /Script/AIModule.AIPerceptionComponent.IsSenseEnabled
	// bool IsSenseEnabled(class UClass* SenseClass);                                                                           // [0x761a6a4] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.AIPerceptionComponent.GetPerceivedHostileActorsBySense
	// void GetPerceivedHostileActorsBySense(class UClass* SenseToUse, TArray<AActor*>& OutActors);                             // [0x761a3b8] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.AIPerceptionComponent.GetPerceivedHostileActors
	// void GetPerceivedHostileActors(TArray<AActor*>& OutActors);                                                              // [0x761a2d8] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.AIPerceptionComponent.GetKnownPerceivedActors
	// void GetKnownPerceivedActors(class UClass* SenseToUse, TArray<AActor*>& OutActors);                                      // [0x761a19c] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.AIPerceptionComponent.GetCurrentlyPerceivedActors
	// void GetCurrentlyPerceivedActors(class UClass* SenseToUse, TArray<AActor*>& OutActors);                                  // [0x761a060] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.AIPerceptionComponent.GetActorsPerception
	// bool GetActorsPerception(class AActor* Actor, FActorPerceptionBlueprintInfo& Info);                                      // [0x76195f0] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AIModule.AIPerceptionComponent.ForgetAll
	// void ForgetAll();                                                                                                        // [0x76195dc] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/AIModule.AIPerceptionListenerInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UAIPerceptionListenerInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/AIModule.AIPerceptionStimuliSourceComponent
/// Size: 0x0018 (0x0000A0 - 0x0000B8)
class UAIPerceptionStimuliSourceComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	DMember(bool)                                      bAutoRegisterAsSource                                       OFFSET(get<bool>, {0xA0, 1, 1, 0})
	CMember(TArray<class UClass*>)                     RegisterAsSourceForSenses                                   OFFSET(get<T>, {0xA8, 16, 0, 0})


	/// Functions
	// Function /Script/AIModule.AIPerceptionStimuliSourceComponent.UnregisterFromSense
	// void UnregisterFromSense(class UClass* SenseClass);                                                                      // [0x761b8ec] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AIModule.AIPerceptionStimuliSourceComponent.UnregisterFromPerceptionSystem
	// void UnregisterFromPerceptionSystem();                                                                                   // [0x761b8d8] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AIModule.AIPerceptionStimuliSourceComponent.RegisterWithPerceptionSystem
	// void RegisterWithPerceptionSystem();                                                                                     // [0x761aad8] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AIModule.AIPerceptionStimuliSourceComponent.RegisterForSense
	// void RegisterForSense(class UClass* SenseClass);                                                                         // [0x761a80c] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/AIModule.AIPerceptionSystem
/// Size: 0x00F8 (0x000038 - 0x000130)
class UAIPerceptionSystem : public UAISubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	CMember(TArray<class UAISense*>)                   Senses                                                      OFFSET(get<T>, {0x88, 16, 0, 0})
	DMember(float)                                     PerceptionAgingRate                                         OFFSET(get<float>, {0x98, 4, 0, 0})


	/// Functions
	// Function /Script/AIModule.AIPerceptionSystem.ReportPerceptionEvent
	// void ReportPerceptionEvent(class UObject* WorldContextObject, class UAISenseEvent* PerceptionEvent);                     // [0x761b0b0] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/AIModule.AIPerceptionSystem.ReportEvent
	// void ReportEvent(class UAISenseEvent* PerceptionEvent);                                                                  // [0x761ad94] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AIModule.AIPerceptionSystem.RegisterPerceptionStimuliSource
	// bool RegisterPerceptionStimuliSource(class UObject* WorldContextObject, class UClass* Sense, class AActor* Target);      // [0x761a95c] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/AIModule.AIPerceptionSystem.OnPerceptionStimuliSourceEndPlay
	// void OnPerceptionStimuliSourceEndPlay(class AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason);                   // [0x2334fe0] Final|RequiredAPI|Native|Protected 
	// Function /Script/AIModule.AIPerceptionSystem.GetSenseClassForStimulus
	// class UClass* GetSenseClassForStimulus(class UObject* WorldContextObject, FAIStimulus& Stimulus);                        // [0x761a530] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/AIModule.AISense
/// Size: 0x0050 (0x000028 - 0x000078)
class UAISense : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	CMember(EAISenseNotifyType)                        NotifyType                                                  OFFSET(get<T>, {0x28, 1, 0, 0})
	DMember(bool)                                      bWantsNewPawnNotification                                   OFFSET(get<bool>, {0x2C, 1, 1, 0})
	DMember(bool)                                      bAutoRegisterAllPawnsAsSources                              OFFSET(get<bool>, {0x2C, 1, 1, 1})
	CMember(class UAIPerceptionSystem*)                PerceptionSystemInstance                                    OFFSET(get<T>, {0x30, 8, 0, 0})
};

/// Class /Script/AIModule.AISenseConfig_Damage
/// Size: 0x0008 (0x000048 - 0x000050)
class UAISenseConfig_Damage : public UAISenseConfig
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(class UClass*)                             Implementation                                              OFFSET(get<T>, {0x48, 8, 0, 0})
};

/// Class /Script/AIModule.AISense_Blueprint
/// Size: 0x0028 (0x000078 - 0x0000A0)
class UAISense_Blueprint : public UAISense
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	CMember(class UClass*)                             ListenerDataType                                            OFFSET(get<T>, {0x78, 8, 0, 0})
	CMember(TArray<class UAIPerceptionComponent*>)     ListenerContainer                                           OFFSET(get<T>, {0x80, 16, 0, 0})
	CMember(TArray<class UAISenseEvent*>)              UnprocessedEvents                                           OFFSET(get<T>, {0x90, 16, 0, 0})


	/// Functions
	// Function /Script/AIModule.AISense_Blueprint.OnUpdate
	// float OnUpdate(TArray<UAISenseEvent*>& EventsToProcess);                                                                 // [0x228deb8] RequiredAPI|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/AIModule.AISense_Blueprint.OnListenerUpdated
	// void OnListenerUpdated(class AActor* ActorListener, class UAIPerceptionComponent* PerceptionComponent);                  // [0x228deb8] RequiredAPI|Event|Public|BlueprintEvent 
	// Function /Script/AIModule.AISense_Blueprint.OnListenerUnregistered
	// void OnListenerUnregistered(class AActor* ActorListener, class UAIPerceptionComponent* PerceptionComponent);             // [0x228deb8] RequiredAPI|Event|Public|BlueprintEvent 
	// Function /Script/AIModule.AISense_Blueprint.OnListenerRegistered
	// void OnListenerRegistered(class AActor* ActorListener, class UAIPerceptionComponent* PerceptionComponent);               // [0x228deb8] RequiredAPI|Event|Public|BlueprintEvent 
	// Function /Script/AIModule.AISense_Blueprint.K2_OnNewPawn
	// void K2_OnNewPawn(class APawn* NewPawn);                                                                                 // [0x228deb8] RequiredAPI|Event|Public|BlueprintEvent 
	// Function /Script/AIModule.AISense_Blueprint.GetAllListenerComponents
	// void GetAllListenerComponents(TArray<UAIPerceptionComponent*>& ListenerComponents);                                      // [0x7619938] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.AISense_Blueprint.GetAllListenerActors
	// void GetAllListenerActors(TArray<AActor*>& ListenerActors);                                                              // [0x761985c] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AIModule.AISense_Damage
/// Size: 0x0010 (0x000078 - 0x000088)
class UAISense_Damage : public UAISense
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	CMember(TArray<FAIDamageEvent>)                    RegisteredEvents                                            OFFSET(get<T>, {0x78, 16, 0, 0})


	/// Functions
	// Function /Script/AIModule.AISense_Damage.ReportDamageEvent
	// void ReportDamageEvent(class UObject* WorldContextObject, class AActor* DamagedActor, class AActor* Instigator, float DamageAmount, FVector EventLocation, FVector HitLocation, FName tag); // [0x761aaec] Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/AIModule.AISense_Hearing
/// Size: 0x0068 (0x000078 - 0x0000E0)
class UAISense_Hearing : public UAISense
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	CMember(TArray<FAINoiseEvent>)                     NoiseEvents                                                 OFFSET(get<T>, {0x78, 16, 0, 0})
	DMember(float)                                     SpeedOfSoundSq                                              OFFSET(get<float>, {0x88, 4, 0, 0})


	/// Functions
	// Function /Script/AIModule.AISense_Hearing.ReportNoiseEvent
	// void ReportNoiseEvent(class UObject* WorldContextObject, FVector NoiseLocation, float Loudness, class AActor* Instigator, float MaxRange, FName tag); // [0x761ae54] Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/AIModule.AISense_Prediction
/// Size: 0x0010 (0x000078 - 0x000088)
class UAISense_Prediction : public UAISense
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	CMember(TArray<FAIPredictionEvent>)                RegisteredEvents                                            OFFSET(get<T>, {0x78, 16, 0, 0})


	/// Functions
	// Function /Script/AIModule.AISense_Prediction.RequestPawnPredictionEvent
	// void RequestPawnPredictionEvent(class APawn* Requestor, class AActor* PredictedActor, float PredictionTime);             // [0x761b440] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/AIModule.AISense_Prediction.RequestControllerPredictionEvent
	// void RequestControllerPredictionEvent(class AAIController* Requestor, class AActor* PredictedActor, float PredictionTime); // [0x761b348] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/AIModule.AISense_Sight
/// Size: 0x0130 (0x000078 - 0x0001A8)
class UAISense_Sight : public UAISense
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 424;

public:
	DMember(int32_t)                                   MaxTracesPerTick                                            OFFSET(get<int32_t>, {0x150, 4, 0, 0})
	DMember(int32_t)                                   MaxAsyncTracesPerTick                                       OFFSET(get<int32_t>, {0x154, 4, 0, 0})
	DMember(int32_t)                                   MinQueriesPerTimeSliceCheck                                 OFFSET(get<int32_t>, {0x158, 4, 0, 0})
	DMember(double)                                    MaxTimeSlicePerTick                                         OFFSET(get<double>, {0x160, 8, 0, 0})
	DMember(float)                                     HighImportanceQueryDistanceThreshold                        OFFSET(get<float>, {0x168, 4, 0, 0})
	DMember(float)                                     MaxQueryImportance                                          OFFSET(get<float>, {0x170, 4, 0, 0})
	DMember(float)                                     SightLimitQueryImportance                                   OFFSET(get<float>, {0x174, 4, 0, 0})
	DMember(float)                                     PendingQueriesBudgetReductionRatio                          OFFSET(get<float>, {0x178, 4, 0, 0})
	DMember(bool)                                      bUseAsynchronousTraceForDefaultSightQueries                 OFFSET(get<bool>, {0x17C, 1, 0, 0})
};

/// Class /Script/AIModule.AISense_Team
/// Size: 0x0010 (0x000078 - 0x000088)
class UAISense_Team : public UAISense
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	CMember(TArray<FAITeamStimulusEvent>)              RegisteredEvents                                            OFFSET(get<T>, {0x78, 16, 0, 0})
};

/// Class /Script/AIModule.AISense_Touch
/// Size: 0x0060 (0x000078 - 0x0000D8)
class UAISense_Touch : public UAISense
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	CMember(TArray<FAITouchEvent>)                     RegisteredEvents                                            OFFSET(get<T>, {0x78, 16, 0, 0})


	/// Functions
	// Function /Script/AIModule.AISense_Touch.ReportTouchEvent
	// void ReportTouchEvent(class UObject* WorldContextObject, class AActor* TouchReceiver, class AActor* OtherActor, FVector Location); // [0x761b200] Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/AIModule.AISightTargetInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UAISightTargetInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/AIModule.PawnSensingComponent
/// Size: 0x0048 (0x0000A0 - 0x0000E8)
class UPawnSensingComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
	DMember(float)                                     HearingThreshold                                            OFFSET(get<float>, {0xA0, 4, 0, 0})
	DMember(float)                                     LOSHearingThreshold                                         OFFSET(get<float>, {0xA4, 4, 0, 0})
	DMember(float)                                     SightRadius                                                 OFFSET(get<float>, {0xA8, 4, 0, 0})
	DMember(float)                                     SensingInterval                                             OFFSET(get<float>, {0xAC, 4, 0, 0})
	DMember(float)                                     HearingMaxSoundAge                                          OFFSET(get<float>, {0xB0, 4, 0, 0})
	DMember(bool)                                      bEnableSensingUpdates                                       OFFSET(get<bool>, {0xB4, 1, 1, 0})
	DMember(bool)                                      bOnlySensePlayers                                           OFFSET(get<bool>, {0xB4, 1, 1, 1})
	DMember(bool)                                      bSeePawns                                                   OFFSET(get<bool>, {0xB4, 1, 1, 2})
	DMember(bool)                                      bHearNoises                                                 OFFSET(get<bool>, {0xB4, 1, 1, 3})
	SMember(FMulticastInlineDelegate)                  OnSeePawn                                                   OFFSET(getStruct<T>, {0xC0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnHearNoise                                                 OFFSET(getStruct<T>, {0xD0, 16, 0, 0})
	DMember(float)                                     PeripheralVisionAngle                                       OFFSET(get<float>, {0xE0, 4, 0, 0})
	DMember(float)                                     PeripheralVisionCosine                                      OFFSET(get<float>, {0xE4, 4, 0, 0})


	/// Functions
	// Function /Script/AIModule.PawnSensingComponent.SetSensingUpdatesEnabled
	// void SetSensingUpdatesEnabled(bool bEnabled);                                                                            // [0x761b854] RequiredAPI|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/AIModule.PawnSensingComponent.SetSensingInterval
	// void SetSensingInterval(float NewSensingInterval);                                                                       // [0x761b7d0] RequiredAPI|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/AIModule.PawnSensingComponent.SetPeripheralVisionAngle
	// void SetPeripheralVisionAngle(float NewPeripheralVisionAngle);                                                           // [0x761b660] RequiredAPI|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/AIModule.PawnSensingComponent.SeePawnDelegate__DelegateSignature
	// void SeePawnDelegate__DelegateSignature(class APawn* Pawn);                                                              // [0x228deb8] MulticastDelegate|Public|Delegate 
	// Function /Script/AIModule.PawnSensingComponent.HearNoiseDelegate__DelegateSignature
	// void HearNoiseDelegate__DelegateSignature(class APawn* Instigator, FVector& Location, float Volume);                     // [0x228deb8] MulticastDelegate|Public|Delegate|HasOutParms|HasDefaults 
	// Function /Script/AIModule.PawnSensingComponent.GetPeripheralVisionCosine
	// float GetPeripheralVisionCosine();                                                                                       // [0x761a518] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.PawnSensingComponent.GetPeripheralVisionAngle
	// float GetPeripheralVisionAngle();                                                                                        // [0x761a500] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AIModule.AITask
/// Size: 0x0008 (0x000060 - 0x000068)
class UAITask : public UGameplayTask
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	CMember(class AAIController*)                      OwnerController                                             OFFSET(get<T>, {0x60, 8, 0, 0})
};

/// Class /Script/AIModule.AITask_LockLogic
/// Size: 0x0000 (0x000068 - 0x000068)
class UAITask_LockLogic : public UAITask
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
};

/// Class /Script/AIModule.AITask_MoveTo
/// Size: 0x00B0 (0x000068 - 0x000118)
class UAITask_MoveTo : public UAITask
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 280;

public:
	SMember(FMulticastInlineDelegate)                  OnRequestFailed                                             OFFSET(getStruct<T>, {0x68, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnMoveFinished                                              OFFSET(getStruct<T>, {0x78, 16, 0, 0})
	SMember(FAIMoveRequest)                            MoveRequest                                                 OFFSET(getStruct<T>, {0x88, 80, 0, 0})


	/// Functions
	// Function /Script/AIModule.AITask_MoveTo.AIMoveTo
	// class UAITask_MoveTo* AIMoveTo(class AAIController* Controller, FVector GoalLocation, class AActor* GoalActor, float AcceptanceRadius, TEnumAsByte<EAIOptionFlag> StopOnOverlap, TEnumAsByte<EAIOptionFlag> AcceptPartialPath, bool bUsePathfinding, bool bLockAILogic, bool bUseContinuousGoalTracking, TEnumAsByte<EAIOptionFlag> ProjectGoalOnNavigation, TEnumAsByte<EAIOptionFlag> RequireNavigableEndLocation); // [0x76192a0] Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/AIModule.AITask_RunEQS
/// Size: 0x0078 (0x000068 - 0x0000E0)
class UAITask_RunEQS : public UAITask
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:


	/// Functions
	// Function /Script/AIModule.AITask_RunEQS.RunEQS
	// class UAITask_RunEQS* RunEQS(class AAIController* Controller, class UEnvQuery* QueryTemplate);                           // [0x761b54c] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/AIModule.VisualLoggerExtension
/// Size: 0x0000 (0x000028 - 0x000028)
class UVisualLoggerExtension : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Struct /Script/AIModule.ActorPerceptionUpdateInfo
/// Size: 0x0060 (0x000000 - 0x000060)
class FActorPerceptionUpdateInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	DMember(int32_t)                                   TargetId                                                    OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	CMember(TWeakObjectPtr<AActor*>)                   Target                                                      OFFSET(get<T>, {0x4, 8, 0, 0})
	SMember(FAIStimulus)                               Stimulus                                                    OFFSET(getStruct<T>, {0x10, 80, 0, 0})
};

/// Struct /Script/AIModule.AIStimulus
/// Size: 0x0050 (0x000000 - 0x000050)
class FAIStimulus : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	DMember(float)                                     Age                                                         OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     ExpirationAge                                               OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     Strength                                                    OFFSET(get<float>, {0x8, 4, 0, 0})
	SMember(FVector)                                   StimulusLocation                                            OFFSET(getStruct<T>, {0x10, 24, 0, 0})
	SMember(FVector)                                   ReceiverLocation                                            OFFSET(getStruct<T>, {0x28, 24, 0, 0})
	SMember(FName)                                     tag                                                         OFFSET(getStruct<T>, {0x40, 4, 0, 0})
	DMember(bool)                                      bSuccessfullySensed                                         OFFSET(get<bool>, {0x4C, 1, 1, 1})
};

/// Struct /Script/AIModule.AIRequestID
/// Size: 0x0004 (0x000000 - 0x000004)
class FAIRequestID : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(uint32_t)                                  RequestID                                                   OFFSET(get<uint32_t>, {0x0, 4, 0, 0})
};

/// Struct /Script/AIModule.EnvNamedValue
/// Size: 0x000C (0x000000 - 0x00000C)
class FEnvNamedValue : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	SMember(FName)                                     ParamName                                                   OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(EAIParamType)                              ParamType                                                   OFFSET(get<T>, {0x4, 1, 0, 0})
	DMember(float)                                     Value                                                       OFFSET(get<float>, {0x8, 4, 0, 0})
};

/// Struct /Script/AIModule.AIDynamicParam
/// Size: 0x0038 (0x000000 - 0x000038)
class FAIDynamicParam : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FName)                                     ParamName                                                   OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(EAIParamType)                              ParamType                                                   OFFSET(get<T>, {0x4, 1, 0, 0})
	DMember(float)                                     Value                                                       OFFSET(get<float>, {0x8, 4, 0, 0})
	SMember(FBlackboardKeySelector)                    BBKey                                                       OFFSET(getStruct<T>, {0x10, 40, 0, 0})
};

/// Struct /Script/AIModule.BlackboardKeySelector
/// Size: 0x0028 (0x000000 - 0x000028)
class FBlackboardKeySelector : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(TArray<class UBlackboardKeyType*>)         AllowedTypes                                                OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FName)                                     SelectedKeyName                                             OFFSET(getStruct<T>, {0x10, 4, 0, 0})
	CMember(class UClass*)                             SelectedKeyType                                             OFFSET(get<T>, {0x18, 8, 0, 0})
	DMember(int32_t)                                   SelectedKeyID                                               OFFSET(get<int32_t>, {0x20, 4, 0, 0})
	DMember(bool)                                      bNoneIsAllowedValue                                         OFFSET(get<bool>, {0x24, 1, 1, 0})
};

/// Struct /Script/AIModule.AIMoveRequest
/// Size: 0x0050 (0x000000 - 0x000050)
class FAIMoveRequest : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TWeakObjectPtr<AActor*>)                   GoalActor                                                   OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/AIModule.IntervalCountdown
/// Size: 0x0008 (0x000000 - 0x000008)
class FIntervalCountdown : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(float)                                     Interval                                                    OFFSET(get<float>, {0x0, 4, 0, 0})
};

/// Struct /Script/AIModule.EnvDirection
/// Size: 0x0020 (0x000000 - 0x000020)
class FEnvDirection : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(class UClass*)                             LineFrom                                                    OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class UClass*)                             LineTo                                                      OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(class UClass*)                             Rotation                                                    OFFSET(get<T>, {0x10, 8, 0, 0})
	CMember(TEnumAsByte<EEnvDirection>)                DirMode                                                     OFFSET(get<T>, {0x18, 1, 0, 0})
};

/// Struct /Script/AIModule.EnvTraceData
/// Size: 0x0038 (0x000000 - 0x000038)
class FEnvTraceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(int32_t)                                   VersionNum                                                  OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	CMember(class UClass*)                             NavigationFilter                                            OFFSET(get<T>, {0x8, 8, 0, 0})
	DMember(float)                                     ProjectDown                                                 OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     ProjectUp                                                   OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     ExtentX                                                     OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     ExtentY                                                     OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(float)                                     ExtentZ                                                     OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(float)                                     PostProjectionVerticalOffset                                OFFSET(get<float>, {0x24, 4, 0, 0})
	CMember(TEnumAsByte<ETraceTypeQuery>)              TraceChannel                                                OFFSET(get<T>, {0x28, 1, 0, 0})
	CMember(TEnumAsByte<ECollisionChannel>)            SerializedChannel                                           OFFSET(get<T>, {0x29, 1, 0, 0})
	SMember(FName)                                     TraceProfileName                                            OFFSET(getStruct<T>, {0x2C, 4, 0, 0})
	CMember(TEnumAsByte<EEnvTraceShape>)               TraceShape                                                  OFFSET(get<T>, {0x30, 1, 0, 0})
	CMember(TEnumAsByte<EEnvQueryTrace>)               TraceMode                                                   OFFSET(get<T>, {0x31, 1, 0, 0})
	DMember(bool)                                      bTraceComplex                                               OFFSET(get<bool>, {0x34, 1, 1, 0})
	DMember(bool)                                      bOnlyBlockingHits                                           OFFSET(get<bool>, {0x34, 1, 1, 1})
	DMember(bool)                                      bCanTraceOnNavMesh                                          OFFSET(get<bool>, {0x34, 1, 1, 2})
	DMember(bool)                                      bCanTraceOnGeometry                                         OFFSET(get<bool>, {0x34, 1, 1, 3})
	DMember(bool)                                      bCanDisableTrace                                            OFFSET(get<bool>, {0x34, 1, 1, 4})
	DMember(bool)                                      bCanProjectDown                                             OFFSET(get<bool>, {0x34, 1, 1, 5})
};

/// Struct /Script/AIModule.EnvOverlapData
/// Size: 0x0030 (0x000000 - 0x000030)
class FEnvOverlapData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(float)                                     ExtentX                                                     OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     ExtentY                                                     OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     ExtentZ                                                     OFFSET(get<float>, {0x8, 4, 0, 0})
	SMember(FVector)                                   ShapeOffset                                                 OFFSET(getStruct<T>, {0x10, 24, 0, 0})
	CMember(TEnumAsByte<ECollisionChannel>)            OverlapChannel                                              OFFSET(get<T>, {0x28, 1, 0, 0})
	CMember(TEnumAsByte<EEnvOverlapShape>)             OverlapShape                                                OFFSET(get<T>, {0x29, 1, 0, 0})
	DMember(bool)                                      bOnlyBlockingHits                                           OFFSET(get<bool>, {0x2C, 1, 1, 0})
	DMember(bool)                                      bOverlapComplex                                             OFFSET(get<bool>, {0x2C, 1, 1, 1})
	DMember(bool)                                      bSkipOverlapQuerier                                         OFFSET(get<bool>, {0x2C, 1, 1, 2})
};

/// Struct /Script/AIModule.EnvQueryResult
/// Size: 0x0040 (0x000000 - 0x000040)
class FEnvQueryResult : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(class UClass*)                             ItemType                                                    OFFSET(get<T>, {0x10, 8, 0, 0})
	DMember(int32_t)                                   OptionIndex                                                 OFFSET(get<int32_t>, {0x2C, 4, 0, 0})
	DMember(int32_t)                                   QueryID                                                     OFFSET(get<int32_t>, {0x30, 4, 0, 0})
};

/// Struct /Script/AIModule.EQSParametrizedQueryExecutionRequest
/// Size: 0x0048 (0x000000 - 0x000048)
class FEQSParametrizedQueryExecutionRequest : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(class UEnvQuery*)                          QueryTemplate                                               OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(TArray<FAIDynamicParam>)                   QueryConfig                                                 OFFSET(get<T>, {0x8, 16, 0, 0})
	SMember(FBlackboardKeySelector)                    EQSQueryBlackboardKey                                       OFFSET(getStruct<T>, {0x18, 40, 0, 0})
	CMember(TEnumAsByte<EEnvQueryRunMode>)             RunMode                                                     OFFSET(get<T>, {0x40, 1, 0, 0})
	DMember(bool)                                      bUseBBKeyForQueryTemplate                                   OFFSET(get<bool>, {0x44, 1, 1, 0})
};

/// Struct /Script/AIModule.GenericTeamId
/// Size: 0x0001 (0x000000 - 0x000001)
class FGenericTeamId : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
	DMember(char)                                      TeamID                                                      OFFSET(get<char>, {0x0, 1, 0, 0})
};

/// Struct /Script/AIModule.SimpleIndexedHandleBase
/// Size: 0x0004 (0x000000 - 0x000004)
class FSimpleIndexedHandleBase : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
};

/// Struct /Script/AIModule.IndexedHandleBase
/// Size: 0x0004 (0x000004 - 0x000008)
class FIndexedHandleBase : public FSimpleIndexedHandleBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/AIModule.CompactIndexedHandleBase
/// Size: 0x0004 (0x000000 - 0x000004)
class FCompactIndexedHandleBase : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
};

/// Struct /Script/AIModule.SequentialIDBase
/// Size: 0x0004 (0x000000 - 0x000004)
class FSequentialIDBase : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(uint32_t)                                  Value                                                       OFFSET(get<uint32_t>, {0x0, 4, 0, 0})
};

/// Struct /Script/AIModule.PawnActionEvent
/// Size: 0x0018 (0x000000 - 0x000018)
class FPawnActionEvent : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(class UPawnAction*)                        Action                                                      OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/AIModule.PawnActionStack
/// Size: 0x0008 (0x000000 - 0x000008)
class FPawnActionStack : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(class UPawnAction*)                        TopAction                                                   OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/AIModule.BehaviorTreeTemplateInfo
/// Size: 0x0018 (0x000000 - 0x000018)
class FBehaviorTreeTemplateInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(class UBehaviorTree*)                      Asset                                                       OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class UBTCompositeNode*)                   Template                                                    OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/AIModule.BlackboardEntry
/// Size: 0x0018 (0x000000 - 0x000018)
class FBlackboardEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FName)                                     EntryName                                                   OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(class UBlackboardKeyType*)                 KeyType                                                     OFFSET(get<T>, {0x8, 8, 0, 0})
	DMember(bool)                                      bInstanceSynced                                             OFFSET(get<bool>, {0x10, 1, 1, 0})
};

/// Struct /Script/AIModule.BTDecoratorLogic
/// Size: 0x0004 (0x000000 - 0x000004)
class FBTDecoratorLogic : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	CMember(TEnumAsByte<EBTDecoratorLogic>)            Operation                                                   OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(uint16_t)                                  Number                                                      OFFSET(get<uint16_t>, {0x2, 2, 0, 0})
};

/// Struct /Script/AIModule.BTCompositeChild
/// Size: 0x0030 (0x000000 - 0x000030)
class FBTCompositeChild : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(class UBTCompositeNode*)                   ChildComposite                                              OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class UBTTaskNode*)                        ChildTask                                                   OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(TArray<class UBTDecorator*>)               Decorators                                                  OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<FBTDecoratorLogic>)                 DecoratorOps                                                OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/AIModule.AIDataProviderValue
/// Size: 0x0020 (0x000000 - 0x000020)
class FAIDataProviderValue : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(class UAIDataProvider*)                    DataBinding                                                 OFFSET(get<T>, {0x10, 8, 0, 0})
	SMember(FName)                                     DataField                                                   OFFSET(getStruct<T>, {0x18, 4, 0, 0})
};

/// Struct /Script/AIModule.AIDataProviderTypedValue
/// Size: 0x0010 (0x000020 - 0x000030)
class FAIDataProviderTypedValue : public FAIDataProviderValue
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(class UClass*)                             PropertyType                                                OFFSET(get<T>, {0x20, 8, 0, 0})
};

/// Struct /Script/AIModule.AIDataProviderStructValue
/// Size: 0x0010 (0x000020 - 0x000030)
class FAIDataProviderStructValue : public FAIDataProviderValue
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/AIModule.AIDataProviderIntValue
/// Size: 0x0008 (0x000030 - 0x000038)
class FAIDataProviderIntValue : public FAIDataProviderTypedValue
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(int32_t)                                   DefaultValue                                                OFFSET(get<int32_t>, {0x30, 4, 0, 0})
};

/// Struct /Script/AIModule.AIDataProviderFloatValue
/// Size: 0x0008 (0x000030 - 0x000038)
class FAIDataProviderFloatValue : public FAIDataProviderTypedValue
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(float)                                     DefaultValue                                                OFFSET(get<float>, {0x30, 4, 0, 0})
};

/// Struct /Script/AIModule.AIDataProviderBoolValue
/// Size: 0x0008 (0x000030 - 0x000038)
class FAIDataProviderBoolValue : public FAIDataProviderTypedValue
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(bool)                                      DefaultValue                                                OFFSET(get<bool>, {0x30, 1, 0, 0})
};

/// Struct /Script/AIModule.EnvQueryManagerConfig
/// Size: 0x0030 (0x000000 - 0x000030)
class FEnvQueryManagerConfig : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(float)                                     MaxAllowedTestingTime                                       OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(bool)                                      bTestQueriesUsingBreadth                                    OFFSET(get<bool>, {0x4, 1, 0, 0})
	DMember(int32_t)                                   QueryCountWarningThreshold                                  OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(double)                                    QueryCountWarningInterval                                   OFFSET(get<double>, {0x10, 8, 0, 0})
	DMember(double)                                    ExecutionTimeWarningSeconds                                 OFFSET(get<double>, {0x18, 8, 0, 0})
	DMember(double)                                    HandlingResultTimeWarningSeconds                            OFFSET(get<double>, {0x20, 8, 0, 0})
	DMember(double)                                    GenerationTimeWarningSeconds                                OFFSET(get<double>, {0x28, 8, 0, 0})
};

/// Struct /Script/AIModule.EnvQueryRequest
/// Size: 0x0068 (0x000000 - 0x000068)
class FEnvQueryRequest : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	CMember(class UEnvQuery*)                          QueryTemplate                                               OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class UObject*)                            Owner                                                       OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(class UWorld*)                             World                                                       OFFSET(get<T>, {0x10, 8, 0, 0})
};

/// Struct /Script/AIModule.EnvQueryInstanceCache
/// Size: 0x0180 (0x000000 - 0x000180)
class FEnvQueryInstanceCache : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 384;

public:
	CMember(class UEnvQuery*)                          Template                                                    OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/AIModule.CrowdAvoidanceConfig
/// Size: 0x001C (0x000000 - 0x00001C)
class FCrowdAvoidanceConfig : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 28;

public:
	DMember(float)                                     VelocityBias                                                OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     DesiredVelocityWeight                                       OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     CurrentVelocityWeight                                       OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     SideBiasWeight                                              OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     ImpactTimeWeight                                            OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     ImpactTimeRange                                             OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(char)                                      CustomPatternIdx                                            OFFSET(get<char>, {0x18, 1, 0, 0})
	DMember(char)                                      AdaptiveDivisions                                           OFFSET(get<char>, {0x19, 1, 0, 0})
	DMember(char)                                      AdaptiveRings                                               OFFSET(get<char>, {0x1A, 1, 0, 0})
	DMember(char)                                      AdaptiveDepth                                               OFFSET(get<char>, {0x1B, 1, 0, 0})
};

/// Struct /Script/AIModule.CrowdAvoidanceSamplingPattern
/// Size: 0x0020 (0x000000 - 0x000020)
class FCrowdAvoidanceSamplingPattern : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(TArray<float>)                             Angles                                                      OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<float>)                             Radii                                                       OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/AIModule.RecastGraphWrapper
/// Size: 0x00B8 (0x000000 - 0x0000B8)
class FRecastGraphWrapper : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	CMember(class ARecastNavMesh*)                     RecastNavMeshActor                                          OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/AIModule.ActorPerceptionBlueprintInfo
/// Size: 0x0020 (0x000000 - 0x000020)
class FActorPerceptionBlueprintInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(class AActor*)                             Target                                                      OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(TArray<FAIStimulus>)                       LastSensedStimuli                                           OFFSET(get<T>, {0x8, 16, 0, 0})
	DMember(bool)                                      bIsHostile                                                  OFFSET(get<bool>, {0x18, 1, 1, 0})
	DMember(bool)                                      bIsFriendly                                                 OFFSET(get<bool>, {0x18, 1, 1, 1})
};

/// Struct /Script/AIModule.AISenseAffiliationFilter
/// Size: 0x0004 (0x000000 - 0x000004)
class FAISenseAffiliationFilter : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(bool)                                      bDetectEnemies                                              OFFSET(get<bool>, {0x0, 1, 1, 0})
	DMember(bool)                                      bDetectNeutrals                                             OFFSET(get<bool>, {0x0, 1, 1, 1})
	DMember(bool)                                      bDetectFriendlies                                           OFFSET(get<bool>, {0x0, 1, 1, 2})
};

/// Struct /Script/AIModule.AIDamageEvent
/// Size: 0x0050 (0x000000 - 0x000050)
class FAIDamageEvent : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	DMember(float)                                     Amount                                                      OFFSET(get<float>, {0x0, 4, 0, 0})
	SMember(FVector)                                   Location                                                    OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	SMember(FVector)                                   HitLocation                                                 OFFSET(getStruct<T>, {0x20, 24, 0, 0})
	CMember(class AActor*)                             DamagedActor                                                OFFSET(get<T>, {0x38, 8, 0, 0})
	CMember(class AActor*)                             Instigator                                                  OFFSET(get<T>, {0x40, 8, 0, 0})
	SMember(FName)                                     tag                                                         OFFSET(getStruct<T>, {0x48, 4, 0, 0})
};

/// Struct /Script/AIModule.AINoiseEvent
/// Size: 0x0038 (0x000000 - 0x000038)
class FAINoiseEvent : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FVector)                                   NoiseLocation                                               OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	DMember(float)                                     Loudness                                                    OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(float)                                     MaxRange                                                    OFFSET(get<float>, {0x24, 4, 0, 0})
	CMember(class AActor*)                             Instigator                                                  OFFSET(get<T>, {0x28, 8, 0, 0})
	SMember(FName)                                     tag                                                         OFFSET(getStruct<T>, {0x30, 4, 0, 0})
};

/// Struct /Script/AIModule.AIPredictionEvent
/// Size: 0x0018 (0x000000 - 0x000018)
class FAIPredictionEvent : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(class AActor*)                             Requestor                                                   OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class AActor*)                             PredictedActor                                              OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/AIModule.AISightEvent
/// Size: 0x0018 (0x000000 - 0x000018)
class FAISightEvent : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(class AActor*)                             SeenActor                                                   OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(class AActor*)                             Observer                                                    OFFSET(get<T>, {0x10, 8, 0, 0})
};

/// Struct /Script/AIModule.AITeamStimulusEvent
/// Size: 0x0050 (0x000000 - 0x000050)
class FAITeamStimulusEvent : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(class AActor*)                             Broadcaster                                                 OFFSET(get<T>, {0x40, 8, 0, 0})
	CMember(class AActor*)                             Enemy                                                       OFFSET(get<T>, {0x48, 8, 0, 0})
};

/// Struct /Script/AIModule.AITouchEvent
/// Size: 0x0030 (0x000000 - 0x000030)
class FAITouchEvent : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(class AActor*)                             TouchReceiver                                               OFFSET(get<T>, {0x18, 8, 0, 0})
	CMember(class AActor*)                             OtherActor                                                  OFFSET(get<T>, {0x20, 8, 0, 0})
};

/// Enum /Script/AIModule.EPathFollowingResult
/// Size: 0x06
enum class EPathFollowingResult : uint8_t
{
	EPathFollowingResult__Success                                                    = 0,
	EPathFollowingResult__Blocked                                                    = 1,
	EPathFollowingResult__OffPath                                                    = 2,
	EPathFollowingResult__Aborted                                                    = 3,
	EPathFollowingResult__Skipped_DEPRECATED                                         = 4,
	EPathFollowingResult__Invalid                                                    = 5
};

/// Enum /Script/AIModule.EEnvQueryStatus
/// Size: 0x06
enum class EEnvQueryStatus : uint8_t
{
	EEnvQueryStatus__Processing                                                      = 0,
	EEnvQueryStatus__Success                                                         = 1,
	EEnvQueryStatus__Failed                                                          = 2,
	EEnvQueryStatus__Aborted                                                         = 3,
	EEnvQueryStatus__OwnerLost                                                       = 4,
	EEnvQueryStatus__MissingParam                                                    = 5
};

/// Enum /Script/AIModule.EAIOptionFlag
/// Size: 0x03
enum class EAIOptionFlag : uint8_t
{
	EAIOptionFlag__Default                                                           = 0,
	EAIOptionFlag__Enable                                                            = 1,
	EAIOptionFlag__Disable                                                           = 2
};

/// Enum /Script/AIModule.FAIDistanceType
/// Size: 0x03
enum class FAIDistanceType : uint8_t
{
	FAIDistanceType__Distance3D                                                      = 0,
	FAIDistanceType__Distance2D                                                      = 1,
	FAIDistanceType__DistanceZ                                                       = 2
};

/// Enum /Script/AIModule.EPawnActionAbortState
/// Size: 0x05
enum class EPawnActionAbortState : uint8_t
{
	EPawnActionAbortState__NeverStarted                                              = 0,
	EPawnActionAbortState__NotBeingAborted                                           = 1,
	EPawnActionAbortState__MarkPendingAbort                                          = 2,
	EPawnActionAbortState__LatentAbortInProgress                                     = 3,
	EPawnActionAbortState__AbortDone                                                 = 4
};

/// Enum /Script/AIModule.EPawnActionResult
/// Size: 0x05
enum class EPawnActionResult : uint8_t
{
	EPawnActionResult__NotStarted                                                    = 0,
	EPawnActionResult__InProgress                                                    = 1,
	EPawnActionResult__Success                                                       = 2,
	EPawnActionResult__Failed                                                        = 3,
	EPawnActionResult__Aborted                                                       = 4
};

/// Enum /Script/AIModule.EPawnActionEventType
/// Size: 0x06
enum class EPawnActionEventType : uint8_t
{
	EPawnActionEventType__Invalid                                                    = 0,
	EPawnActionEventType__FailedToStart                                              = 1,
	EPawnActionEventType__InstantAbort                                               = 2,
	EPawnActionEventType__FinishedAborting                                           = 3,
	EPawnActionEventType__FinishedExecution                                          = 4,
	EPawnActionEventType__Push                                                       = 5
};

/// Enum /Script/AIModule.EAIRequestPriority
/// Size: 0x05
enum class EAIRequestPriority : uint8_t
{
	EAIRequestPriority__SoftScript                                                   = 0,
	EAIRequestPriority__Logic                                                        = 1,
	EAIRequestPriority__HardScript                                                   = 2,
	EAIRequestPriority__Reaction                                                     = 3,
	EAIRequestPriority__Ultimate                                                     = 4
};

/// Enum /Script/AIModule.EAILockSource
/// Size: 0x04
enum class EAILockSource : uint8_t
{
	EAILockSource__Animation                                                         = 0,
	EAILockSource__Logic                                                             = 1,
	EAILockSource__Script                                                            = 2,
	EAILockSource__Gameplay                                                          = 3
};

/// Enum /Script/AIModule.EGenericAICheck
/// Size: 0x07
enum class EGenericAICheck : uint8_t
{
	EGenericAICheck__Less                                                            = 0,
	EGenericAICheck__LessOrEqual                                                     = 1,
	EGenericAICheck__Equal                                                           = 2,
	EGenericAICheck__NotEqual                                                        = 3,
	EGenericAICheck__GreaterOrEqual                                                  = 4,
	EGenericAICheck__Greater                                                         = 5,
	EGenericAICheck__IsTrue                                                          = 6
};

/// Enum /Script/AIModule.EBasicKeyOperation
/// Size: 0x02
enum class EBasicKeyOperation : uint8_t
{
	EBasicKeyOperation__Set                                                          = 0,
	EBasicKeyOperation__NotSet                                                       = 1
};

/// Enum /Script/AIModule.EArithmeticKeyOperation
/// Size: 0x06
enum class EArithmeticKeyOperation : uint8_t
{
	EArithmeticKeyOperation__Equal                                                   = 0,
	EArithmeticKeyOperation__NotEqual                                                = 1,
	EArithmeticKeyOperation__Less                                                    = 2,
	EArithmeticKeyOperation__LessOrEqual                                             = 3,
	EArithmeticKeyOperation__Greater                                                 = 4,
	EArithmeticKeyOperation__GreaterOrEqual                                          = 5
};

/// Enum /Script/AIModule.ETextKeyOperation
/// Size: 0x04
enum class ETextKeyOperation : uint8_t
{
	ETextKeyOperation__Equal                                                         = 0,
	ETextKeyOperation__NotEqual                                                      = 1,
	ETextKeyOperation__Contain                                                       = 2,
	ETextKeyOperation__NotContain                                                    = 3
};

/// Enum /Script/AIModule.EEnvTestPurpose
/// Size: 0x03
enum class EEnvTestPurpose : uint8_t
{
	EEnvTestPurpose__Filter                                                          = 0,
	EEnvTestPurpose__Score                                                           = 1,
	EEnvTestPurpose__FilterAndScore                                                  = 2
};

/// Enum /Script/AIModule.EEnvTestFilterType
/// Size: 0x04
enum class EEnvTestFilterType : uint8_t
{
	EEnvTestFilterType__Minimum                                                      = 0,
	EEnvTestFilterType__Maximum                                                      = 1,
	EEnvTestFilterType__Range                                                        = 2,
	EEnvTestFilterType__Match                                                        = 3
};

/// Enum /Script/AIModule.EEnvTestScoreEquation
/// Size: 0x05
enum class EEnvTestScoreEquation : uint8_t
{
	EEnvTestScoreEquation__Linear                                                    = 0,
	EEnvTestScoreEquation__Square                                                    = 1,
	EEnvTestScoreEquation__InverseLinear                                             = 2,
	EEnvTestScoreEquation__SquareRoot                                                = 3,
	EEnvTestScoreEquation__Constant                                                  = 4
};

/// Enum /Script/AIModule.EEnvTestWeight
/// Size: 0x06
enum class EEnvTestWeight : uint8_t
{
	EEnvTestWeight__None                                                             = 0,
	EEnvTestWeight__Square                                                           = 1,
	EEnvTestWeight__Inverse                                                          = 2,
	EEnvTestWeight__Unused                                                           = 3,
	EEnvTestWeight__Constant                                                         = 4,
	EEnvTestWeight__Skip                                                             = 5
};

/// Enum /Script/AIModule.EEnvTestCost
/// Size: 0x03
enum class EEnvTestCost : uint8_t
{
	EEnvTestCost__Low                                                                = 0,
	EEnvTestCost__Medium                                                             = 1,
	EEnvTestCost__High                                                               = 2
};

/// Enum /Script/AIModule.EEnvTestFilterOperator
/// Size: 0x02
enum class EEnvTestFilterOperator : uint8_t
{
	EEnvTestFilterOperator__AllPass                                                  = 0,
	EEnvTestFilterOperator__AnyPass                                                  = 1
};

/// Enum /Script/AIModule.EEnvTestScoreOperator
/// Size: 0x04
enum class EEnvTestScoreOperator : uint8_t
{
	EEnvTestScoreOperator__AverageScore                                              = 0,
	EEnvTestScoreOperator__MinScore                                                  = 1,
	EEnvTestScoreOperator__MaxScore                                                  = 2,
	EEnvTestScoreOperator__Multiply                                                  = 3
};

/// Enum /Script/AIModule.EEnvQueryRunMode
/// Size: 0x04
enum class EEnvQueryRunMode : uint8_t
{
	EEnvQueryRunMode__SingleResult                                                   = 0,
	EEnvQueryRunMode__RandomBest5Pct                                                 = 1,
	EEnvQueryRunMode__RandomBest25Pct                                                = 2,
	EEnvQueryRunMode__AllMatching                                                    = 3
};

/// Enum /Script/AIModule.EEnvQueryParam
/// Size: 0x03
enum class EEnvQueryParam : uint8_t
{
	EEnvQueryParam__Float                                                            = 0,
	EEnvQueryParam__Int                                                              = 1,
	EEnvQueryParam__Bool                                                             = 2
};

/// Enum /Script/AIModule.EAIParamType
/// Size: 0x03
enum class EAIParamType : uint8_t
{
	EAIParamType__Float                                                              = 0,
	EAIParamType__Int                                                                = 1,
	EAIParamType__Bool                                                               = 2
};

/// Enum /Script/AIModule.EEnvQueryTrace
/// Size: 0x05
enum class EEnvQueryTrace : uint8_t
{
	EEnvQueryTrace__None                                                             = 0,
	EEnvQueryTrace__Navigation                                                       = 1,
	EEnvQueryTrace__GeometryByChannel                                                = 2,
	EEnvQueryTrace__GeometryByProfile                                                = 3,
	EEnvQueryTrace__NavigationOverLedges                                             = 4
};

/// Enum /Script/AIModule.EEnvTraceShape
/// Size: 0x04
enum class EEnvTraceShape : uint8_t
{
	EEnvTraceShape__Line                                                             = 0,
	EEnvTraceShape__Box                                                              = 1,
	EEnvTraceShape__Sphere                                                           = 2,
	EEnvTraceShape__Capsule                                                          = 3
};

/// Enum /Script/AIModule.EEnvOverlapShape
/// Size: 0x03
enum class EEnvOverlapShape : uint8_t
{
	EEnvOverlapShape__Box                                                            = 0,
	EEnvOverlapShape__Sphere                                                         = 1,
	EEnvOverlapShape__Capsule                                                        = 2
};

/// Enum /Script/AIModule.EEnvDirection
/// Size: 0x02
enum class EEnvDirection : uint8_t
{
	EEnvDirection__TwoPoints                                                         = 0,
	EEnvDirection__Rotation                                                          = 1
};

/// Enum /Script/AIModule.EEnvQueryTestClamping
/// Size: 0x03
enum class EEnvQueryTestClamping : uint8_t
{
	EEnvQueryTestClamping__None                                                      = 0,
	EEnvQueryTestClamping__SpecifiedValue                                            = 1,
	EEnvQueryTestClamping__FilterThreshold                                           = 2
};

/// Enum /Script/AIModule.ETeamAttitude
/// Size: 0x03
enum class ETeamAttitude : uint8_t
{
	ETeamAttitude__Friendly                                                          = 0,
	ETeamAttitude__Neutral                                                           = 1,
	ETeamAttitude__Hostile                                                           = 2
};

/// Enum /Script/AIModule.EPawnSubActionTriggeringPolicy
/// Size: 0x02
enum class EPawnSubActionTriggeringPolicy : uint8_t
{
	EPawnSubActionTriggeringPolicy__CopyBeforeTriggering                             = 0,
	EPawnSubActionTriggeringPolicy__ReuseInstances                                   = 1
};

/// Enum /Script/AIModule.EPawnActionFailHandling
/// Size: 0x02
enum class EPawnActionFailHandling : uint8_t
{
	EPawnActionFailHandling__RequireSuccess                                          = 0,
	EPawnActionFailHandling__IgnoreFailure                                           = 1
};

/// Enum /Script/AIModule.EPawnActionMoveMode
/// Size: 0x02
enum class EPawnActionMoveMode : uint8_t
{
	EPawnActionMoveMode__UsePathfinding                                              = 0,
	EPawnActionMoveMode__StraightLine                                                = 1
};

/// Enum /Script/AIModule.EBTNodeResult
/// Size: 0x04
enum class EBTNodeResult : uint8_t
{
	EBTNodeResult__Succeeded                                                         = 0,
	EBTNodeResult__Failed                                                            = 1,
	EBTNodeResult__Aborted                                                           = 2,
	EBTNodeResult__InProgress                                                        = 3
};

/// Enum /Script/AIModule.EBTFlowAbortMode
/// Size: 0x04
enum class EBTFlowAbortMode : uint8_t
{
	EBTFlowAbortMode__None                                                           = 0,
	EBTFlowAbortMode__LowerPriority                                                  = 1,
	EBTFlowAbortMode__Self                                                           = 2,
	EBTFlowAbortMode__Both                                                           = 3
};

/// Enum /Script/AIModule.EBTChildIndex
/// Size: 0x02
enum class EBTChildIndex : uint8_t
{
	EBTChildIndex__FirstNode                                                         = 0,
	EBTChildIndex__TaskNode                                                          = 1
};

/// Enum /Script/AIModule.EBTDecoratorLogic
/// Size: 0x05
enum class EBTDecoratorLogic : uint8_t
{
	EBTDecoratorLogic__Invalid                                                       = 0,
	EBTDecoratorLogic__Test                                                          = 1,
	EBTDecoratorLogic__And                                                           = 2,
	EBTDecoratorLogic__Or                                                            = 3,
	EBTDecoratorLogic__Not                                                           = 4
};

/// Enum /Script/AIModule.EBTParallelMode
/// Size: 0x02
enum class EBTParallelMode : uint8_t
{
	EBTParallelMode__AbortBackground                                                 = 0,
	EBTParallelMode__WaitForBackground                                               = 1
};

/// Enum /Script/AIModule.EBTBlackboardRestart
/// Size: 0x02
enum class EBTBlackboardRestart : uint8_t
{
	EBTBlackboardRestart__ValueChange                                                = 0,
	EBTBlackboardRestart__ResultChange                                               = 1
};

/// Enum /Script/AIModule.EBlackBoardEntryComparison
/// Size: 0x02
enum class EBlackBoardEntryComparison : uint8_t
{
	EBlackBoardEntryComparison__Equal                                                = 0,
	EBlackBoardEntryComparison__NotEqual                                             = 1
};

/// Enum /Script/AIModule.EPathExistanceQueryType
/// Size: 0x03
enum class EPathExistanceQueryType : uint8_t
{
	EPathExistanceQueryType__NavmeshRaycast2D                                        = 0,
	EPathExistanceQueryType__HierarchicalQuery                                       = 1,
	EPathExistanceQueryType__RegularPathFinding                                      = 2
};

/// Enum /Script/AIModule.EEQSNormalizationType
/// Size: 0x02
enum class EEQSNormalizationType : uint8_t
{
	EEQSNormalizationType__Absolute                                                  = 0,
	EEQSNormalizationType__RelativeToScores                                          = 1
};

/// Enum /Script/AIModule.EEnvQueryHightlightMode
/// Size: 0x03
enum class EEnvQueryHightlightMode : uint8_t
{
	EEnvQueryHightlightMode__All                                                     = 0,
	EEnvQueryHightlightMode__Best5Pct                                                = 1,
	EEnvQueryHightlightMode__Best25Pct                                               = 2
};

/// Enum /Script/AIModule.EPointOnCircleSpacingMethod
/// Size: 0x02
enum class EPointOnCircleSpacingMethod : uint8_t
{
	EPointOnCircleSpacingMethod__BySpaceBetween                                      = 0,
	EPointOnCircleSpacingMethod__ByNumberOfPoints                                    = 1
};

/// Enum /Script/AIModule.EEnvTestDistance
/// Size: 0x04
enum class EEnvTestDistance : uint8_t
{
	EEnvTestDistance__Distance3D                                                     = 0,
	EEnvTestDistance__Distance2D                                                     = 1,
	EEnvTestDistance__DistanceZ                                                      = 2,
	EEnvTestDistance__DistanceAbsoluteZ                                              = 3
};

/// Enum /Script/AIModule.EEnvTestDot
/// Size: 0x02
enum class EEnvTestDot : uint8_t
{
	EEnvTestDot__Dot3D                                                               = 0,
	EEnvTestDot__Dot2D                                                               = 1
};

/// Enum /Script/AIModule.EEnvTestPathfinding
/// Size: 0x03
enum class EEnvTestPathfinding : uint8_t
{
	EEnvTestPathfinding__PathExist                                                   = 0,
	EEnvTestPathfinding__PathCost                                                    = 1,
	EEnvTestPathfinding__PathLength                                                  = 2
};

/// Enum /Script/AIModule.EPathFollowingStatus
/// Size: 0x04
enum class EPathFollowingStatus : uint8_t
{
	EPathFollowingStatus__Idle                                                       = 0,
	EPathFollowingStatus__Waiting                                                    = 1,
	EPathFollowingStatus__Paused                                                     = 2,
	EPathFollowingStatus__Moving                                                     = 3
};

/// Enum /Script/AIModule.EPathFollowingAction
/// Size: 0x05
enum class EPathFollowingAction : uint8_t
{
	EPathFollowingAction__Error                                                      = 0,
	EPathFollowingAction__NoMove                                                     = 1,
	EPathFollowingAction__DirectMove                                                 = 2,
	EPathFollowingAction__PartialPath                                                = 3,
	EPathFollowingAction__PathToGoal                                                 = 4
};

/// Enum /Script/AIModule.EPathFollowingRequestResult
/// Size: 0x03
enum class EPathFollowingRequestResult : uint8_t
{
	EPathFollowingRequestResult__Failed                                              = 0,
	EPathFollowingRequestResult__AlreadyAtGoal                                       = 1,
	EPathFollowingRequestResult__RequestSuccessful                                   = 2
};

/// Enum /Script/AIModule.EAISenseNotifyType
/// Size: 0x02
enum class EAISenseNotifyType : uint8_t
{
	EAISenseNotifyType__OnEveryPerception                                            = 0,
	EAISenseNotifyType__OnPerceptionChange                                           = 1
};

/// Enum /Script/AIModule.EAITaskPriority
/// Size: 0x05
enum class EAITaskPriority : uint8_t
{
	EAITaskPriority__Lowest                                                          = 0,
	EAITaskPriority__Low                                                             = 64,
	EAITaskPriority__AutonomousAI                                                    = 127,
	EAITaskPriority__High                                                            = 192,
	EAITaskPriority__Ultimate                                                        = 254
};

