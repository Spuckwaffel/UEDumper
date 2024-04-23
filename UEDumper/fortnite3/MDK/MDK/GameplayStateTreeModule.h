
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: AIModule
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: GameplayTags
/// dependency: StateTreeModule

/// Class /Script/GameplayStateTreeModule.BTTask_RunDynamicStateTree
/// Size: 0x0058 (0x000070 - 0x0000C8)
class UBTTask_RunDynamicStateTree : public UBTTaskNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	SMember(FStateTreeReference)                       StateTreeRef                                                OFFSET(getStruct<T>, {0x70, 40, 0, 0})
	SMember(FStateTreeInstanceData)                    InstanceData                                                OFFSET(getStruct<T>, {0x98, 16, 0, 0})
	SMember(FGameplayTag)                              InjectionTag                                                OFFSET(getStruct<T>, {0xA8, 4, 0, 0})
};

/// Class /Script/GameplayStateTreeModule.BTTask_RunStateTree
/// Size: 0x0048 (0x000070 - 0x0000B8)
class UBTTask_RunStateTree : public UBTTaskNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	SMember(FStateTreeReference)                       StateTreeRef                                                OFFSET(getStruct<T>, {0x78, 40, 0, 0})
	SMember(FStateTreeInstanceData)                    InstanceData                                                OFFSET(getStruct<T>, {0xA0, 16, 0, 0})
	DMember(float)                                     Interval                                                    OFFSET(get<float>, {0xB0, 4, 0, 0})
	DMember(float)                                     RandomDeviation                                             OFFSET(get<float>, {0xB4, 4, 0, 0})
};

/// Class /Script/GameplayStateTreeModule.StateTreeComponent
/// Size: 0x0068 (0x0000F8 - 0x000160)
class UStateTreeComponent : public UBrainComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
	SMember(FMulticastInlineDelegate)                  OnStateTreeRunStatusChanged                                 OFFSET(getStruct<T>, {0x108, 16, 0, 0})
	SMember(FStateTreeReference)                       StateTreeRef                                                OFFSET(getStruct<T>, {0x118, 40, 0, 0})
	DMember(bool)                                      bStartLogicAutomatically                                    OFFSET(get<bool>, {0x140, 1, 0, 0})
	SMember(FStateTreeInstanceData)                    InstanceData                                                OFFSET(getStruct<T>, {0x148, 16, 0, 0})


	/// Functions
	// Function /Script/GameplayStateTreeModule.StateTreeComponent.SetStartLogicAutomatically
	// void SetStartLogicAutomatically(bool bInStartLogicAutomatically);                                                        // [0x85ee804] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayStateTreeModule.StateTreeComponent.SendStateTreeEvent
	// void SendStateTreeEvent(FStateTreeEvent& Event);                                                                         // [0x85ee718] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameplayStateTreeModule.StateTreeComponent.GetStateTreeRunStatus
	// EStateTreeRunStatus GetStateTreeRunStatus();                                                                             // [0x85ee6f4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/GameplayStateTreeModule.StateTreeAIComponent
/// Size: 0x0000 (0x000160 - 0x000160)
class UStateTreeAIComponent : public UStateTreeComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
};

/// Class /Script/GameplayStateTreeModule.StateTreeComponentSchema
/// Size: 0x0030 (0x000028 - 0x000058)
class UStateTreeComponentSchema : public UStateTreeSchema
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(class UClass*)                             ContextActorClass                                           OFFSET(get<T>, {0x28, 8, 0, 0})
	SMember(FStateTreeExternalDataDesc)                ContextActorDataDesc                                        OFFSET(getStruct<T>, {0x30, 24, 0, 0})
	CMember(TArray<FStateTreeExternalDataDesc>)        ContextDataDescs                                            OFFSET(get<T>, {0x48, 16, 0, 0})
};

/// Class /Script/GameplayStateTreeModule.StateTreeAIComponentSchema
/// Size: 0x0008 (0x000058 - 0x000060)
class UStateTreeAIComponentSchema : public UStateTreeComponentSchema
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(class UClass*)                             AIControllerClass                                           OFFSET(get<T>, {0x58, 8, 0, 0})
};

/// Struct /Script/GameplayStateTreeModule.StateTreeAITaskBase
/// Size: 0x0000 (0x000020 - 0x000020)
class FStateTreeAITaskBase : public FStateTreeTaskBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/GameplayStateTreeModule.StateTreeAIActionTaskBase
/// Size: 0x0000 (0x000020 - 0x000020)
class FStateTreeAIActionTaskBase : public FStateTreeAITaskBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/GameplayStateTreeModule.StateTreeMoveToTaskInstanceData
/// Size: 0x0058 (0x000000 - 0x000058)
class FStateTreeMoveToTaskInstanceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(class AAIController*)                      AIController                                                OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FVector)                                   Destination                                                 OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	CMember(class AActor*)                             TargetActor                                                 OFFSET(get<T>, {0x20, 8, 0, 0})
	DMember(float)                                     AcceptableRadius                                            OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(float)                                     DestinationMoveTolerance                                    OFFSET(get<float>, {0x2C, 4, 0, 0})
	CMember(class UClass*)                             FilterClass                                                 OFFSET(get<T>, {0x30, 8, 0, 0})
	DMember(bool)                                      bAllowStrafe                                                OFFSET(get<bool>, {0x38, 1, 0, 0})
	DMember(bool)                                      bAllowPartialPath                                           OFFSET(get<bool>, {0x39, 1, 0, 0})
	DMember(bool)                                      bTrackMovingGoal                                            OFFSET(get<bool>, {0x3A, 1, 0, 0})
	DMember(bool)                                      bRequireNavigableEndLocation                                OFFSET(get<bool>, {0x3B, 1, 0, 0})
	DMember(bool)                                      bProjectGoalLocation                                        OFFSET(get<bool>, {0x3C, 1, 0, 0})
	DMember(bool)                                      bReachTestIncludesAgentRadius                               OFFSET(get<bool>, {0x3D, 1, 0, 0})
	DMember(bool)                                      bReachTestIncludesGoalRadius                                OFFSET(get<bool>, {0x3E, 1, 0, 0})
	CMember(class UAITask_MoveTo*)                     MoveToTask                                                  OFFSET(get<T>, {0x40, 8, 0, 0})
	CMember(TScriptInterface<Class>)                   TaskOwner                                                   OFFSET(get<T>, {0x48, 16, 0, 0})
};

/// Struct /Script/GameplayStateTreeModule.StateTreeMoveToTask
/// Size: 0x0000 (0x000020 - 0x000020)
class FStateTreeMoveToTask : public FStateTreeAIActionTaskBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

