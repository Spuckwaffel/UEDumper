
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: AIModule
/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine
/// dependency: GameplayTags
/// dependency: StructUtils

/// Class /Script/StateTreeModule.StateTreeSchemaProvider
/// Size: 0x0000 (0x000028 - 0x000028)
class UStateTreeSchemaProvider : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/StateTreeModule.StateTreeSettings
/// Size: 0x0008 (0x000030 - 0x000038)
class UStateTreeSettings : public UDeveloperSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(bool)                                      bAutoStartDebuggerTracesOnNonEditorTargets                  OFFSET(get<bool>, {0x30, 1, 0, 0})
};

/// Class /Script/StateTreeModule.StateTreeNodeBlueprintBase
/// Size: 0x0018 (0x000028 - 0x000040)
class UStateTreeNodeBlueprintBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(class UObject*)                            CachedOwner                                                 OFFSET(get<T>, {0x38, 8, 0, 0})


	/// Functions
	// Function /Script/StateTreeModule.StateTreeNodeBlueprintBase.SendEvent
	// void SendEvent(FStateTreeEvent& Event);                                                                                  // [0x7311a40] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/StateTreeModule.StateTreeNodeBlueprintBase.RequestTransition
	// void RequestTransition(FStateTreeStateLink& TargetState, EStateTreeTransitionPriority Priority);                         // [0x73118bc] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/StateTreeModule.StateTreeConditionBlueprintBase
/// Size: 0x0008 (0x000040 - 0x000048)
class UStateTreeConditionBlueprintBase : public UStateTreeNodeBlueprintBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:


	/// Functions
	// Function /Script/StateTreeModule.StateTreeConditionBlueprintBase.ReceiveTestCondition
	// bool ReceiveTestCondition();                                                                                             // [0x246f7d8] Event|Public|BlueprintEvent|Const 
};

/// Class /Script/StateTreeModule.StateTreeEvaluatorBlueprintBase
/// Size: 0x0008 (0x000040 - 0x000048)
class UStateTreeEvaluatorBlueprintBase : public UStateTreeNodeBlueprintBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:


	/// Functions
	// Function /Script/StateTreeModule.StateTreeEvaluatorBlueprintBase.ReceiveTreeStop
	// void ReceiveTreeStop();                                                                                                  // [0x246f7d8] Event|Public|BlueprintEvent 
	// Function /Script/StateTreeModule.StateTreeEvaluatorBlueprintBase.ReceiveTreeStart
	// void ReceiveTreeStart();                                                                                                 // [0x246f7d8] Event|Public|BlueprintEvent 
	// Function /Script/StateTreeModule.StateTreeEvaluatorBlueprintBase.ReceiveTick
	// void ReceiveTick(float DeltaTime);                                                                                       // [0x246f7d8] Event|Public|BlueprintEvent 
};

/// Class /Script/StateTreeModule.StateTreeTaskBlueprintBase
/// Size: 0x0008 (0x000040 - 0x000048)
class UStateTreeTaskBlueprintBase : public UStateTreeNodeBlueprintBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	DMember(bool)                                      bShouldStateChangeOnReselect                                OFFSET(get<bool>, {0x41, 1, 1, 0})
	DMember(bool)                                      bShouldCallTickOnlyOnEvents                                 OFFSET(get<bool>, {0x41, 1, 1, 2})
	DMember(bool)                                      bShouldCopyBoundPropertiesOnTick                            OFFSET(get<bool>, {0x41, 1, 1, 3})
	DMember(bool)                                      bShouldCopyBoundPropertiesOnExitState                       OFFSET(get<bool>, {0x41, 1, 1, 4})


	/// Functions
	// Function /Script/StateTreeModule.StateTreeTaskBlueprintBase.ReceiveTick
	// EStateTreeRunStatus ReceiveTick(float DeltaTime);                                                                        // [0x246f7d8] Event|Public|BlueprintEvent 
	// Function /Script/StateTreeModule.StateTreeTaskBlueprintBase.ReceiveStateCompleted
	// void ReceiveStateCompleted(EStateTreeRunStatus CompletionStatus, FStateTreeActiveStates CompletedActiveStates);          // [0x246f7d8] Event|Public|BlueprintEvent 
	// Function /Script/StateTreeModule.StateTreeTaskBlueprintBase.ReceiveLatentTick
	// void ReceiveLatentTick(float DeltaTime);                                                                                 // [0x246f7d8] Event|Public|BlueprintEvent 
	// Function /Script/StateTreeModule.StateTreeTaskBlueprintBase.ReceiveLatentEnterState
	// void ReceiveLatentEnterState(FStateTreeTransitionResult& TRANSITION);                                                    // [0x246f7d8] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/StateTreeModule.StateTreeTaskBlueprintBase.ReceiveExitState
	// void ReceiveExitState(FStateTreeTransitionResult& TRANSITION);                                                           // [0x246f7d8] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/StateTreeModule.StateTreeTaskBlueprintBase.ReceiveEnterState
	// EStateTreeRunStatus ReceiveEnterState(FStateTreeTransitionResult& TRANSITION);                                           // [0x246f7d8] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/StateTreeModule.StateTreeTaskBlueprintBase.FinishTask
	// void FinishTask(bool bSucceeded);                                                                                        // [0x73117fc] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/StateTreeModule.StateTree
/// Size: 0x0168 (0x000030 - 0x000198)
class UStateTree : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 408;

public:
	DMember(uint32_t)                                  LastCompiledEditorDataHash                                  OFFSET(get<uint32_t>, {0x30, 4, 0, 0})
	CMember(class UStateTreeSchema*)                   Schema                                                      OFFSET(get<T>, {0x38, 8, 0, 0})
	CMember(TArray<FCompactStateTreeState>)            States                                                      OFFSET(get<T>, {0x40, 16, 0, 0})
	CMember(TArray<FCompactStateTransition>)           Transitions                                                 OFFSET(get<T>, {0x50, 16, 0, 0})
	SMember(FInstancedStructContainer)                 Nodes                                                       OFFSET(getStruct<T>, {0x60, 16, 0, 0})
	SMember(FStateTreeInstanceData)                    DefaultInstanceData                                         OFFSET(getStruct<T>, {0x70, 16, 0, 0})
	SMember(FStateTreeInstanceData)                    SharedInstanceData                                          OFFSET(getStruct<T>, {0x80, 16, 0, 0})
	CMember(TArray<FStateTreeExternalDataDesc>)        ContextDataDescs                                            OFFSET(get<T>, {0xA8, 16, 0, 0})
	SMember(FStateTreePropertyBindings)                PropertyBindings                                            OFFSET(getStruct<T>, {0xB8, 120, 0, 0})
	CMember(TArray<FStateTreeStateIdToHandle>)         IDToStateMappings                                           OFFSET(get<T>, {0x130, 16, 0, 0})
	CMember(TArray<FStateTreeNodeIdToIndex>)           IDToNodeMappings                                            OFFSET(get<T>, {0x140, 16, 0, 0})
	CMember(TArray<FStateTreeTransitionIdToIndex>)     IDToTransitionMappings                                      OFFSET(get<T>, {0x150, 16, 0, 0})
	SMember(FInstancedPropertyBag)                     Parameters                                                  OFFSET(getStruct<T>, {0x160, 16, 0, 0})
	DMember(uint16_t)                                  NumContextData                                              OFFSET(get<uint16_t>, {0x170, 2, 0, 0})
	DMember(uint16_t)                                  NumGlobalInstanceData                                       OFFSET(get<uint16_t>, {0x172, 2, 0, 0})
	DMember(uint16_t)                                  EvaluatorsBegin                                             OFFSET(get<uint16_t>, {0x174, 2, 0, 0})
	DMember(uint16_t)                                  EvaluatorsNum                                               OFFSET(get<uint16_t>, {0x176, 2, 0, 0})
	DMember(uint16_t)                                  GlobalTasksBegin                                            OFFSET(get<uint16_t>, {0x178, 2, 0, 0})
	DMember(uint16_t)                                  GlobalTasksNum                                              OFFSET(get<uint16_t>, {0x17A, 2, 0, 0})
	DMember(bool)                                      bHasGlobalTransitionTasks                                   OFFSET(get<bool>, {0x17C, 1, 0, 0})
	CMember(TArray<FStateTreeExternalDataDesc>)        ExternalDataDescs                                           OFFSET(get<T>, {0x180, 16, 0, 0})
};

/// Class /Script/StateTreeModule.StateTreeSchema
/// Size: 0x0000 (0x000028 - 0x000028)
class UStateTreeSchema : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Struct /Script/StateTreeModule.StateTreeAnyEnum
/// Size: 0x0010 (0x000000 - 0x000010)
class FStateTreeAnyEnum : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(uint32_t)                                  Value                                                       OFFSET(get<uint32_t>, {0x0, 4, 0, 0})
	CMember(class UEnum*)                              Enum                                                        OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/StateTreeModule.StateTreeExternalDataHandle
/// Size: 0x0006 (0x000000 - 0x000006)
class FStateTreeExternalDataHandle : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 6;

public:
	SMember(FStateTreeDataHandle)                      DataHandle                                                  OFFSET(getStruct<T>, {0x0, 6, 0, 0})
};

/// Struct /Script/StateTreeModule.StateTreeDataHandle
/// Size: 0x0006 (0x000000 - 0x000006)
class FStateTreeDataHandle : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 6;

public:
	CMember(EStateTreeDataSourceType)                  Source                                                      OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(uint16_t)                                  Index                                                       OFFSET(get<uint16_t>, {0x2, 2, 0, 0})
	SMember(FStateTreeStateHandle)                     StateHandle                                                 OFFSET(getStruct<T>, {0x4, 2, 0, 0})
};

/// Struct /Script/StateTreeModule.StateTreeStateHandle
/// Size: 0x0002 (0x000000 - 0x000002)
class FStateTreeStateHandle : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2;

public:
	DMember(uint16_t)                                  Index                                                       OFFSET(get<uint16_t>, {0x0, 2, 0, 0})
};

/// Struct /Script/StateTreeModule.StateTreeExternalDataDesc
/// Size: 0x0018 (0x000000 - 0x000018)
class FStateTreeExternalDataDesc : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(class UStruct*)                            Struct                                                      OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	SMember(FStateTreeExternalDataHandle)              Handle                                                      OFFSET(getStruct<T>, {0xC, 6, 0, 0})
	CMember(EStateTreeExternalDataRequirement)         Requirement                                                 OFFSET(get<T>, {0x12, 1, 0, 0})
};

/// Struct /Script/StateTreeModule.StateTreeTransitionRequest
/// Size: 0x0018 (0x000000 - 0x000018)
class FStateTreeTransitionRequest : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FStateTreeStateHandle)                     SourceState                                                 OFFSET(getStruct<T>, {0x0, 2, 0, 0})
	CMember(class UStateTree*)                         SourceStateTree                                             OFFSET(get<T>, {0x8, 8, 0, 0})
	SMember(FStateTreeStateHandle)                     SourceRootState                                             OFFSET(getStruct<T>, {0x10, 2, 0, 0})
	SMember(FStateTreeStateHandle)                     TargetState                                                 OFFSET(getStruct<T>, {0x12, 2, 0, 0})
	CMember(EStateTreeTransitionPriority)              Priority                                                    OFFSET(get<T>, {0x14, 1, 0, 0})
};

/// Struct /Script/StateTreeModule.StateTreeActiveStates
/// Size: 0x0012 (0x000000 - 0x000012)
class FStateTreeActiveStates : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 18;

public:
	SMember(FStateTreeStateHandle)                     States                                                      OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	DMember(char)                                      NumStates                                                   OFFSET(get<char>, {0x10, 1, 0, 0})
};

/// Struct /Script/StateTreeModule.StateTreeTransitionSource
/// Size: 0x0008 (0x000000 - 0x000008)
class FStateTreeTransitionSource : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/StateTreeModule.StateTreeTransitionDelayedState
/// Size: 0x0010 (0x000000 - 0x000010)
class FStateTreeTransitionDelayedState : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class UStateTree*)                         StateTree                                                   OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FStateTreeIndex16)                         TransitionIndex                                             OFFSET(getStruct<T>, {0x8, 2, 0, 0})
	DMember(float)                                     TimeLeft                                                    OFFSET(get<float>, {0xC, 4, 0, 0})
};

/// Struct /Script/StateTreeModule.StateTreeIndex16
/// Size: 0x0002 (0x000000 - 0x000002)
class FStateTreeIndex16 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2;

public:
	DMember(uint16_t)                                  Value                                                       OFFSET(get<uint16_t>, {0x0, 2, 0, 0})
};

/// Struct /Script/StateTreeModule.StateTreeExecutionFrame
/// Size: 0x0030 (0x000000 - 0x000030)
class FStateTreeExecutionFrame : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(class UStateTree*)                         StateTree                                                   OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FStateTreeStateHandle)                     RootState                                                   OFFSET(getStruct<T>, {0x8, 2, 0, 0})
	SMember(FStateTreeActiveStates)                    ActiveStates                                                OFFSET(getStruct<T>, {0xA, 18, 0, 0})
	SMember(FStateTreeIndex16)                         ExternalDataBaseIndex                                       OFFSET(getStruct<T>, {0x1C, 2, 0, 0})
	SMember(FStateTreeIndex16)                         GlobalInstanceIndexBase                                     OFFSET(getStruct<T>, {0x1E, 2, 0, 0})
	SMember(FStateTreeIndex16)                         ActiveInstanceIndexBase                                     OFFSET(getStruct<T>, {0x20, 2, 0, 0})
	SMember(FStateTreeDataHandle)                      StateParameterDataHandle                                    OFFSET(getStruct<T>, {0x22, 6, 0, 0})
	SMember(FStateTreeDataHandle)                      GlobalParameterDataHandle                                   OFFSET(getStruct<T>, {0x28, 6, 0, 0})
	DMember(bool)                                      bIsGlobalFrame                                              OFFSET(get<bool>, {0x2F, 1, 1, 0})
};

/// Struct /Script/StateTreeModule.StateTreeExecutionState
/// Size: 0x0030 (0x000000 - 0x000030)
class FStateTreeExecutionState : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(TArray<FStateTreeExecutionFrame>)          ActiveFrames                                                OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FStateTreeTransitionDelayedState>)  DelayedTransitions                                          OFFSET(get<T>, {0x10, 16, 0, 0})
	SMember(FStateTreeIndex16)                         EnterStateFailedFrameIndex                                  OFFSET(getStruct<T>, {0x20, 2, 0, 0})
	SMember(FStateTreeIndex16)                         EnterStateFailedTaskIndex                                   OFFSET(getStruct<T>, {0x22, 2, 0, 0})
	CMember(EStateTreeRunStatus)                       LastTickStatus                                              OFFSET(get<T>, {0x24, 1, 0, 0})
	CMember(EStateTreeRunStatus)                       TreeRunStatus                                               OFFSET(get<T>, {0x25, 1, 0, 0})
	CMember(EStateTreeRunStatus)                       RequestedStop                                               OFFSET(get<T>, {0x26, 1, 0, 0})
	CMember(EStateTreeUpdatePhase)                     CurrentPhase                                                OFFSET(get<T>, {0x27, 1, 0, 0})
	SMember(FStateTreeIndex16)                         CompletedFrameIndex                                         OFFSET(getStruct<T>, {0x28, 2, 0, 0})
	SMember(FStateTreeStateHandle)                     CompletedStateHandle                                        OFFSET(getStruct<T>, {0x2A, 2, 0, 0})
	DMember(uint16_t)                                  StateChangeCount                                            OFFSET(get<uint16_t>, {0x2C, 2, 0, 0})
};

/// Struct /Script/StateTreeModule.StateTreeTransitionResult
/// Size: 0x0030 (0x000000 - 0x000030)
class FStateTreeTransitionResult : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(TArray<FStateTreeExecutionFrame>)          NextActiveFrames                                            OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(EStateTreeRunStatus)                       CurrentRunStatus                                            OFFSET(get<T>, {0x10, 1, 0, 0})
	SMember(FStateTreeStateHandle)                     SourceState                                                 OFFSET(getStruct<T>, {0x12, 2, 0, 0})
	SMember(FStateTreeStateHandle)                     TargetState                                                 OFFSET(getStruct<T>, {0x14, 2, 0, 0})
	SMember(FStateTreeStateHandle)                     CurrentState                                                OFFSET(getStruct<T>, {0x16, 2, 0, 0})
	CMember(EStateTreeStateChangeType)                 ChangeType                                                  OFFSET(get<T>, {0x18, 1, 0, 0})
	CMember(EStateTreeTransitionPriority)              Priority                                                    OFFSET(get<T>, {0x19, 1, 0, 0})
	CMember(class UStateTree*)                         SourceStateTree                                             OFFSET(get<T>, {0x20, 8, 0, 0})
	SMember(FStateTreeStateHandle)                     SourceRootState                                             OFFSET(getStruct<T>, {0x28, 2, 0, 0})
};

/// Struct /Script/StateTreeModule.StateTreeIndex8
/// Size: 0x0001 (0x000000 - 0x000001)
class FStateTreeIndex8 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
	DMember(char)                                      Value                                                       OFFSET(get<char>, {0x0, 1, 0, 0})
};

/// Struct /Script/StateTreeModule.StateTreeNodeBase
/// Size: 0x0018 (0x000000 - 0x000018)
class FStateTreeNodeBase : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	SMember(FStateTreeIndex16)                         BindingsBatch                                               OFFSET(getStruct<T>, {0xC, 2, 0, 0})
	SMember(FStateTreeIndex16)                         InstanceTemplateIndex                                       OFFSET(getStruct<T>, {0xE, 2, 0, 0})
	SMember(FStateTreeDataHandle)                      InstanceDataHandle                                          OFFSET(getStruct<T>, {0x10, 6, 0, 0})
};

/// Struct /Script/StateTreeModule.StateTreePropertyRef
/// Size: 0x0002 (0x000000 - 0x000002)
class FStateTreePropertyRef : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2;

public:
	SMember(FStateTreeIndex16)                         RefAccessIndex                                              OFFSET(getStruct<T>, {0x0, 2, 0, 0})
};

/// Struct /Script/StateTreeModule.StateTreeConditionBase
/// Size: 0x0008 (0x000018 - 0x000020)
class FStateTreeConditionBase : public FStateTreeNodeBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(EStateTreeConditionOperand)                Operand                                                     OFFSET(get<T>, {0x18, 1, 0, 0})
	DMember(int8_t)                                    DeltaIndent                                                 OFFSET(get<int8_t>, {0x19, 1, 0, 0})
	CMember(EStateTreeConditionEvaluationMode)         EvaluationMode                                              OFFSET(get<T>, {0x1A, 1, 0, 0})
};

/// Struct /Script/StateTreeModule.StateTreeBlueprintConditionWrapper
/// Size: 0x0008 (0x000020 - 0x000028)
class FStateTreeBlueprintConditionWrapper : public FStateTreeConditionBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(class UClass*)                             ConditionClass                                              OFFSET(get<T>, {0x20, 8, 0, 0})
};

/// Struct /Script/StateTreeModule.StateTreeEvaluatorBase
/// Size: 0x0000 (0x000018 - 0x000018)
class FStateTreeEvaluatorBase : public FStateTreeNodeBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/StateTreeModule.StateTreeBlueprintEvaluatorWrapper
/// Size: 0x0008 (0x000018 - 0x000020)
class FStateTreeBlueprintEvaluatorWrapper : public FStateTreeEvaluatorBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(class UClass*)                             EvaluatorClass                                              OFFSET(get<T>, {0x18, 8, 0, 0})
};

/// Struct /Script/StateTreeModule.StateTreeTaskBase
/// Size: 0x0008 (0x000018 - 0x000020)
class FStateTreeTaskBase : public FStateTreeNodeBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(bool)                                      bTaskEnabled                                                OFFSET(get<bool>, {0x18, 1, 1, 6})
};

/// Struct /Script/StateTreeModule.StateTreeBlueprintTaskWrapper
/// Size: 0x0008 (0x000020 - 0x000028)
class FStateTreeBlueprintTaskWrapper : public FStateTreeTaskBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(class UClass*)                             TaskClass                                                   OFFSET(get<T>, {0x20, 8, 0, 0})
};

/// Struct /Script/StateTreeModule.StateTreeCompareIntConditionInstanceData
/// Size: 0x0008 (0x000000 - 0x000008)
class FStateTreeCompareIntConditionInstanceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(int32_t)                                   Left                                                        OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   Right                                                       OFFSET(get<int32_t>, {0x4, 4, 0, 0})
};

/// Struct /Script/StateTreeModule.StateTreeConditionCommonBase
/// Size: 0x0000 (0x000020 - 0x000020)
class FStateTreeConditionCommonBase : public FStateTreeConditionBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/StateTreeModule.StateTreeCompareIntCondition
/// Size: 0x0008 (0x000020 - 0x000028)
class FStateTreeCompareIntCondition : public FStateTreeConditionCommonBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(bool)                                      bInvert                                                     OFFSET(get<bool>, {0x20, 1, 0, 0})
	CMember(EGenericAICheck)                           Operator                                                    OFFSET(get<T>, {0x21, 1, 0, 0})
};

/// Struct /Script/StateTreeModule.StateTreeCompareFloatConditionInstanceData
/// Size: 0x0010 (0x000000 - 0x000010)
class FStateTreeCompareFloatConditionInstanceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(double)                                    Left                                                        OFFSET(get<double>, {0x0, 8, 0, 0})
	DMember(double)                                    Right                                                       OFFSET(get<double>, {0x8, 8, 0, 0})
};

/// Struct /Script/StateTreeModule.StateTreeCompareFloatCondition
/// Size: 0x0008 (0x000020 - 0x000028)
class FStateTreeCompareFloatCondition : public FStateTreeConditionCommonBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(bool)                                      bInvert                                                     OFFSET(get<bool>, {0x20, 1, 0, 0})
	CMember(EGenericAICheck)                           Operator                                                    OFFSET(get<T>, {0x21, 1, 0, 0})
};

/// Struct /Script/StateTreeModule.StateTreeCompareBoolConditionInstanceData
/// Size: 0x0002 (0x000000 - 0x000002)
class FStateTreeCompareBoolConditionInstanceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2;

public:
	DMember(bool)                                      bLeft                                                       OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(bool)                                      bRight                                                      OFFSET(get<bool>, {0x1, 1, 0, 0})
};

/// Struct /Script/StateTreeModule.StateTreeCompareBoolCondition
/// Size: 0x0008 (0x000020 - 0x000028)
class FStateTreeCompareBoolCondition : public FStateTreeConditionCommonBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(bool)                                      bInvert                                                     OFFSET(get<bool>, {0x20, 1, 0, 0})
};

/// Struct /Script/StateTreeModule.StateTreeCompareEnumConditionInstanceData
/// Size: 0x0020 (0x000000 - 0x000020)
class FStateTreeCompareEnumConditionInstanceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FStateTreeAnyEnum)                         Left                                                        OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FStateTreeAnyEnum)                         Right                                                       OFFSET(getStruct<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/StateTreeModule.StateTreeCompareEnumCondition
/// Size: 0x0008 (0x000020 - 0x000028)
class FStateTreeCompareEnumCondition : public FStateTreeConditionCommonBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(bool)                                      bInvert                                                     OFFSET(get<bool>, {0x20, 1, 0, 0})
};

/// Struct /Script/StateTreeModule.StateTreeCompareDistanceConditionInstanceData
/// Size: 0x0038 (0x000000 - 0x000038)
class FStateTreeCompareDistanceConditionInstanceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FVector)                                   Source                                                      OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FVector)                                   Target                                                      OFFSET(getStruct<T>, {0x18, 24, 0, 0})
	DMember(double)                                    Distance                                                    OFFSET(get<double>, {0x30, 8, 0, 0})
};

/// Struct /Script/StateTreeModule.StateTreeCompareDistanceCondition
/// Size: 0x0008 (0x000020 - 0x000028)
class FStateTreeCompareDistanceCondition : public FStateTreeConditionCommonBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(bool)                                      bInvert                                                     OFFSET(get<bool>, {0x20, 1, 0, 0})
	CMember(EGenericAICheck)                           Operator                                                    OFFSET(get<T>, {0x21, 1, 0, 0})
};

/// Struct /Script/StateTreeModule.StateTreeRandomConditionInstanceData
/// Size: 0x0004 (0x000000 - 0x000004)
class FStateTreeRandomConditionInstanceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(float)                                     Threshold                                                   OFFSET(get<float>, {0x0, 4, 0, 0})
};

/// Struct /Script/StateTreeModule.StateTreeRandomCondition
/// Size: 0x0000 (0x000020 - 0x000020)
class FStateTreeRandomCondition : public FStateTreeConditionCommonBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/StateTreeModule.GameplayTagMatchConditionInstanceData
/// Size: 0x0028 (0x000000 - 0x000028)
class FGameplayTagMatchConditionInstanceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FGameplayTagContainer)                     TagContainer                                                OFFSET(getStruct<T>, {0x0, 32, 0, 0})
	SMember(FGameplayTag)                              tag                                                         OFFSET(getStruct<T>, {0x20, 4, 0, 0})
};

/// Struct /Script/StateTreeModule.GameplayTagMatchCondition
/// Size: 0x0008 (0x000020 - 0x000028)
class FGameplayTagMatchCondition : public FStateTreeConditionCommonBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(bool)                                      bExactMatch                                                 OFFSET(get<bool>, {0x20, 1, 0, 0})
	DMember(bool)                                      bInvert                                                     OFFSET(get<bool>, {0x21, 1, 0, 0})
};

/// Struct /Script/StateTreeModule.GameplayTagContainerMatchConditionInstanceData
/// Size: 0x0040 (0x000000 - 0x000040)
class FGameplayTagContainerMatchConditionInstanceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FGameplayTagContainer)                     TagContainer                                                OFFSET(getStruct<T>, {0x0, 32, 0, 0})
	SMember(FGameplayTagContainer)                     OtherContainer                                              OFFSET(getStruct<T>, {0x20, 32, 0, 0})
};

/// Struct /Script/StateTreeModule.GameplayTagContainerMatchCondition
/// Size: 0x0008 (0x000020 - 0x000028)
class FGameplayTagContainerMatchCondition : public FStateTreeConditionCommonBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(EGameplayContainerMatchType)               MatchType                                                   OFFSET(get<T>, {0x20, 1, 0, 0})
	DMember(bool)                                      bExactMatch                                                 OFFSET(get<bool>, {0x21, 1, 0, 0})
	DMember(bool)                                      bInvert                                                     OFFSET(get<bool>, {0x22, 1, 0, 0})
};

/// Struct /Script/StateTreeModule.GameplayTagQueryConditionInstanceData
/// Size: 0x0020 (0x000000 - 0x000020)
class FGameplayTagQueryConditionInstanceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FGameplayTagContainer)                     TagContainer                                                OFFSET(getStruct<T>, {0x0, 32, 0, 0})
};

/// Struct /Script/StateTreeModule.GameplayTagQueryCondition
/// Size: 0x0050 (0x000020 - 0x000070)
class FGameplayTagQueryCondition : public FStateTreeConditionCommonBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FGameplayTagQuery)                         TagQuery                                                    OFFSET(getStruct<T>, {0x20, 72, 0, 0})
	DMember(bool)                                      bInvert                                                     OFFSET(get<bool>, {0x68, 1, 0, 0})
};

/// Struct /Script/StateTreeModule.StateTreeObjectIsValidConditionInstanceData
/// Size: 0x0008 (0x000000 - 0x000008)
class FStateTreeObjectIsValidConditionInstanceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(class UObject*)                            Object                                                      OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/StateTreeModule.StateTreeObjectIsValidCondition
/// Size: 0x0008 (0x000020 - 0x000028)
class FStateTreeObjectIsValidCondition : public FStateTreeConditionCommonBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(bool)                                      bInvert                                                     OFFSET(get<bool>, {0x20, 1, 0, 0})
};

/// Struct /Script/StateTreeModule.StateTreeObjectEqualsConditionInstanceData
/// Size: 0x0010 (0x000000 - 0x000010)
class FStateTreeObjectEqualsConditionInstanceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class UObject*)                            Left                                                        OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class UObject*)                            Right                                                       OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/StateTreeModule.StateTreeObjectEqualsCondition
/// Size: 0x0008 (0x000020 - 0x000028)
class FStateTreeObjectEqualsCondition : public FStateTreeConditionCommonBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(bool)                                      bInvert                                                     OFFSET(get<bool>, {0x20, 1, 0, 0})
};

/// Struct /Script/StateTreeModule.StateTreeObjectIsChildOfClassConditionInstanceData
/// Size: 0x0010 (0x000000 - 0x000010)
class FStateTreeObjectIsChildOfClassConditionInstanceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class UObject*)                            Object                                                      OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class UClass*)                             Class                                                       OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/StateTreeModule.StateTreeObjectIsChildOfClassCondition
/// Size: 0x0008 (0x000020 - 0x000028)
class FStateTreeObjectIsChildOfClassCondition : public FStateTreeConditionCommonBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(bool)                                      bInvert                                                     OFFSET(get<bool>, {0x20, 1, 0, 0})
};

/// Struct /Script/StateTreeModule.StateTreeEvaluatorCommonBase
/// Size: 0x0000 (0x000018 - 0x000018)
class FStateTreeEvaluatorCommonBase : public FStateTreeEvaluatorBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/StateTreeModule.StateTreeEvent
/// Size: 0x0020 (0x000000 - 0x000020)
class FStateTreeEvent : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FGameplayTag)                              tag                                                         OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FInstancedStruct)                          Payload                                                     OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	SMember(FName)                                     Origin                                                      OFFSET(getStruct<T>, {0x18, 4, 0, 0})
};

/// Struct /Script/StateTreeModule.StateTreeEventQueue
/// Size: 0x0010 (0x000000 - 0x000010)
class FStateTreeEventQueue : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FStateTreeEvent>)                   Events                                                      OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/StateTreeModule.StateTreeInstanceObjectWrapper
/// Size: 0x0008 (0x000000 - 0x000008)
class FStateTreeInstanceObjectWrapper : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(class UObject*)                            InstanceObject                                              OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/StateTreeModule.StateTreeTemporaryInstanceData
/// Size: 0x0028 (0x000000 - 0x000028)
class FStateTreeTemporaryInstanceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(class UStateTree*)                         StateTree                                                   OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FStateTreeStateHandle)                     RootState                                                   OFFSET(getStruct<T>, {0x8, 2, 0, 0})
	SMember(FStateTreeDataHandle)                      DataHandle                                                  OFFSET(getStruct<T>, {0xA, 6, 0, 0})
	SMember(FStateTreeIndex16)                         OwnerNodeIndex                                              OFFSET(getStruct<T>, {0x10, 2, 0, 0})
	SMember(FInstancedStruct)                          Instance                                                    OFFSET(getStruct<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/StateTreeModule.StateTreeInstanceStorage
/// Size: 0x0080 (0x000000 - 0x000080)
class FStateTreeInstanceStorage : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FStateTreeExecutionState)                  ExecutionState                                              OFFSET(getStruct<T>, {0x0, 48, 0, 0})
	SMember(FInstancedStructContainer)                 InstanceStructs                                             OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	CMember(TArray<FStateTreeTemporaryInstanceData>)   TemporaryInstances                                          OFFSET(get<T>, {0x40, 16, 0, 0})
	SMember(FStateTreeEventQueue)                      EventQueue                                                  OFFSET(getStruct<T>, {0x50, 16, 0, 0})
	CMember(TArray<FStateTreeTransitionRequest>)       TransitionRequests                                          OFFSET(get<T>, {0x60, 16, 0, 0})
	SMember(FInstancedPropertyBag)                     GlobalParameters                                            OFFSET(getStruct<T>, {0x70, 16, 0, 0})
};

/// Struct /Script/StateTreeModule.StateTreeInstanceData
/// Size: 0x0010 (0x000000 - 0x000010)
class FStateTreeInstanceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/StateTreeModule.StateTreeBindableStructDesc
/// Size: 0x0018 (0x000000 - 0x000018)
class FStateTreeBindableStructDesc : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(class UStruct*)                            Struct                                                      OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	SMember(FStateTreeDataHandle)                      DataHandle                                                  OFFSET(getStruct<T>, {0xC, 6, 0, 0})
	CMember(EStateTreeBindableStructSource)            DataSource                                                  OFFSET(get<T>, {0x12, 1, 0, 0})
};

/// Struct /Script/StateTreeModule.StateTreePropertyPathSegment
/// Size: 0x0010 (0x000000 - 0x000010)
class FStateTreePropertyPathSegment : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   ArrayIndex                                                  OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	CMember(class UStruct*)                            InstanceStruct                                              OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/StateTreeModule.StateTreePropertyPath
/// Size: 0x0010 (0x000000 - 0x000010)
class FStateTreePropertyPath : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FStateTreePropertyPathSegment>)     Segments                                                    OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/StateTreeModule.StateTreeEditorPropertyPath
/// Size: 0x0020 (0x000000 - 0x000020)
class FStateTreeEditorPropertyPath : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FGuid)                                     StructID                                                    OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	CMember(TArray<FString>)                           Path                                                        OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/StateTreeModule.StateTreePropertyPathBinding
/// Size: 0x0028 (0x000000 - 0x000028)
class FStateTreePropertyPathBinding : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FStateTreePropertyPath)                    SourcePropertyPath                                          OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FStateTreePropertyPath)                    TargetPropertyPath                                          OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FStateTreeDataHandle)                      SourceDataHandle                                            OFFSET(getStruct<T>, {0x20, 6, 0, 0})
};

/// Struct /Script/StateTreeModule.StateTreePropertyRefPath
/// Size: 0x0018 (0x000000 - 0x000018)
class FStateTreePropertyRefPath : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FStateTreePropertyPath)                    SourcePropertyPath                                          OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FStateTreeDataHandle)                      SourceDataHandle                                            OFFSET(getStruct<T>, {0x10, 6, 0, 0})
};

/// Struct /Script/StateTreeModule.StateTreePropertySegment
/// Size: 0x000C (0x000000 - 0x00000C)
class FStateTreePropertySegment : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FStateTreeIndex16)                         ArrayIndex                                                  OFFSET(getStruct<T>, {0x4, 2, 0, 0})
	SMember(FStateTreeIndex16)                         NextIndex                                                   OFFSET(getStruct<T>, {0x6, 2, 0, 0})
	CMember(EStateTreePropertyAccessType)              Type                                                        OFFSET(get<T>, {0x8, 1, 0, 0})
};

/// Struct /Script/StateTreeModule.StateTreePropertyBinding
/// Size: 0x001C (0x000000 - 0x00001C)
class FStateTreePropertyBinding : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 28;

public:
	SMember(FStateTreePropertySegment)                 SourcePath                                                  OFFSET(getStruct<T>, {0x0, 12, 0, 0})
	SMember(FStateTreePropertySegment)                 TargetPath                                                  OFFSET(getStruct<T>, {0xC, 12, 0, 0})
	SMember(FStateTreeIndex16)                         SourceStructIndex                                           OFFSET(getStruct<T>, {0x18, 2, 0, 0})
	CMember(EStateTreePropertyCopyType)                CopyType                                                    OFFSET(get<T>, {0x1A, 1, 0, 0})
};

/// Struct /Script/StateTreeModule.StateTreePropertyIndirection
/// Size: 0x0018 (0x000000 - 0x000018)
class FStateTreePropertyIndirection : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FStateTreeIndex16)                         ArrayIndex                                                  OFFSET(getStruct<T>, {0x0, 2, 0, 0})
	DMember(uint16_t)                                  Offset                                                      OFFSET(get<uint16_t>, {0x2, 2, 0, 0})
	SMember(FStateTreeIndex16)                         NextIndex                                                   OFFSET(getStruct<T>, {0x4, 2, 0, 0})
	CMember(EStateTreePropertyAccessType)              Type                                                        OFFSET(get<T>, {0x6, 1, 0, 0})
	CMember(class UStruct*)                            InstanceStruct                                              OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/StateTreeModule.StateTreePropertyCopy
/// Size: 0x0058 (0x000000 - 0x000058)
class FStateTreePropertyCopy : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FStateTreePropertyIndirection)             SourceIndirection                                           OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FStateTreePropertyIndirection)             TargetIndirection                                           OFFSET(getStruct<T>, {0x18, 24, 0, 0})
	CMember(class UStruct*)                            SourceStructType                                            OFFSET(get<T>, {0x40, 8, 0, 0})
	DMember(int32_t)                                   CopySize                                                    OFFSET(get<int32_t>, {0x48, 4, 0, 0})
	SMember(FStateTreeDataHandle)                      SourceDataHandle                                            OFFSET(getStruct<T>, {0x4C, 6, 0, 0})
	CMember(EStateTreePropertyCopyType)                Type                                                        OFFSET(get<T>, {0x52, 1, 0, 0})
	SMember(FStateTreeIndex16)                         SourceStructIndex                                           OFFSET(getStruct<T>, {0x54, 2, 0, 0})
};

/// Struct /Script/StateTreeModule.StateTreePropertyCopyBatch
/// Size: 0x0020 (0x000000 - 0x000020)
class FStateTreePropertyCopyBatch : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FStateTreeBindableStructDesc)              TargetStruct                                                OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	DMember(uint16_t)                                  BindingsBegin                                               OFFSET(get<uint16_t>, {0x18, 2, 0, 0})
	DMember(uint16_t)                                  BindingsEnd                                                 OFFSET(get<uint16_t>, {0x1A, 2, 0, 0})
};

/// Struct /Script/StateTreeModule.StateTreePropertyAccess
/// Size: 0x0030 (0x000000 - 0x000030)
class FStateTreePropertyAccess : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FStateTreePropertyIndirection)             SourceIndirection                                           OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	CMember(class UStruct*)                            SourceStructType                                            OFFSET(get<T>, {0x20, 8, 0, 0})
	SMember(FStateTreeDataHandle)                      SourceDataHandle                                            OFFSET(getStruct<T>, {0x28, 6, 0, 0})
};

/// Struct /Script/StateTreeModule.StateTreePropertyBindings
/// Size: 0x0078 (0x000000 - 0x000078)
class FStateTreePropertyBindings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	CMember(TArray<FStateTreeBindableStructDesc>)      SourceStructs                                               OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FStateTreePropertyCopyBatch>)       CopyBatches                                                 OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<FStateTreePropertyPathBinding>)     PropertyPathBindings                                        OFFSET(get<T>, {0x20, 16, 0, 0})
	CMember(TArray<FStateTreePropertyCopy>)            PropertyCopies                                              OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TArray<FStateTreePropertyRefPath>)         PropertyReferencePaths                                      OFFSET(get<T>, {0x40, 16, 0, 0})
	CMember(TArray<FStateTreePropertyAccess>)          PropertyAccesses                                            OFFSET(get<T>, {0x50, 16, 0, 0})
	CMember(TArray<FStateTreePropertyIndirection>)     PropertyIndirections                                        OFFSET(get<T>, {0x60, 16, 0, 0})
};

/// Struct /Script/StateTreeModule.StateTreeReference
/// Size: 0x0028 (0x000000 - 0x000028)
class FStateTreeReference : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(class UStateTree*)                         StateTree                                                   OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FInstancedPropertyBag)                     Parameters                                                  OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	CMember(TArray<FGuid>)                             PropertyOverrides                                           OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/StateTreeModule.StateTreeTaskCommonBase
/// Size: 0x0000 (0x000020 - 0x000020)
class FStateTreeTaskCommonBase : public FStateTreeTaskBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/StateTreeModule.StateTreeRandomTimeDuration
/// Size: 0x0004 (0x000000 - 0x000004)
class FStateTreeRandomTimeDuration : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(uint16_t)                                  duration                                                    OFFSET(get<uint16_t>, {0x0, 2, 0, 0})
	DMember(uint16_t)                                  RandomVariance                                              OFFSET(get<uint16_t>, {0x2, 2, 0, 0})
};

/// Struct /Script/StateTreeModule.CompactStateTransition
/// Size: 0x0014 (0x000000 - 0x000014)
class FCompactStateTransition : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	SMember(FGameplayTag)                              EventTag                                                    OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(uint16_t)                                  ConditionsBegin                                             OFFSET(get<uint16_t>, {0x4, 2, 0, 0})
	SMember(FStateTreeStateHandle)                     State                                                       OFFSET(getStruct<T>, {0x6, 2, 0, 0})
	SMember(FStateTreeRandomTimeDuration)              Delay                                                       OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	CMember(EStateTreeTransitionTrigger)               Trigger                                                     OFFSET(get<T>, {0xC, 1, 0, 0})
	CMember(EStateTreeTransitionPriority)              Priority                                                    OFFSET(get<T>, {0xD, 1, 0, 0})
	CMember(EStateTreeSelectionFallback)               Fallback                                                    OFFSET(get<T>, {0xE, 1, 0, 0})
	DMember(char)                                      ConditionsNum                                               OFFSET(get<char>, {0xF, 1, 0, 0})
	DMember(bool)                                      bTransitionEnabled                                          OFFSET(get<bool>, {0x10, 1, 1, 0})
};

/// Struct /Script/StateTreeModule.CompactStateTreeState
/// Size: 0x0030 (0x000000 - 0x000030)
class FCompactStateTreeState : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FStateTreeStateHandle)                     LinkedState                                                 OFFSET(getStruct<T>, {0x4, 2, 0, 0})
	CMember(class UStateTree*)                         LinkedAsset                                                 OFFSET(get<T>, {0x8, 8, 0, 0})
	SMember(FStateTreeStateHandle)                     Parent                                                      OFFSET(getStruct<T>, {0x10, 2, 0, 0})
	DMember(uint16_t)                                  ChildrenBegin                                               OFFSET(get<uint16_t>, {0x12, 2, 0, 0})
	DMember(uint16_t)                                  ChildrenEnd                                                 OFFSET(get<uint16_t>, {0x14, 2, 0, 0})
	DMember(uint16_t)                                  EnterConditionsBegin                                        OFFSET(get<uint16_t>, {0x16, 2, 0, 0})
	DMember(uint16_t)                                  TransitionsBegin                                            OFFSET(get<uint16_t>, {0x18, 2, 0, 0})
	DMember(uint16_t)                                  TasksBegin                                                  OFFSET(get<uint16_t>, {0x1A, 2, 0, 0})
	SMember(FStateTreeIndex16)                         ParameterTemplateIndex                                      OFFSET(getStruct<T>, {0x1C, 2, 0, 0})
	SMember(FStateTreeDataHandle)                      ParameterDataHandle                                         OFFSET(getStruct<T>, {0x1E, 6, 0, 0})
	SMember(FStateTreeIndex16)                         ParameterBindingsBatch                                      OFFSET(getStruct<T>, {0x24, 2, 0, 0})
	DMember(char)                                      EnterConditionsNum                                          OFFSET(get<char>, {0x26, 1, 0, 0})
	DMember(char)                                      TransitionsNum                                              OFFSET(get<char>, {0x27, 1, 0, 0})
	DMember(char)                                      TasksNum                                                    OFFSET(get<char>, {0x28, 1, 0, 0})
	DMember(char)                                      InstanceDataNum                                             OFFSET(get<char>, {0x29, 1, 0, 0})
	CMember(EStateTreeStateType)                       Type                                                        OFFSET(get<T>, {0x2A, 1, 0, 0})
	CMember(EStateTreeStateSelectionBehavior)          SelectionBehavior                                           OFFSET(get<T>, {0x2B, 1, 0, 0})
	DMember(bool)                                      bHasTransitionTasks                                         OFFSET(get<bool>, {0x2C, 1, 1, 0})
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x2C, 1, 1, 1})
};

/// Struct /Script/StateTreeModule.CompactStateTreeParameters
/// Size: 0x0010 (0x000000 - 0x000010)
class FCompactStateTreeParameters : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FInstancedPropertyBag)                     Parameters                                                  OFFSET(getStruct<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/StateTreeModule.StateTreeStateIdToHandle
/// Size: 0x0014 (0x000000 - 0x000014)
class FStateTreeStateIdToHandle : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	SMember(FGuid)                                     ID                                                          OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FStateTreeStateHandle)                     Handle                                                      OFFSET(getStruct<T>, {0x10, 2, 0, 0})
};

/// Struct /Script/StateTreeModule.StateTreeNodeIdToIndex
/// Size: 0x0014 (0x000000 - 0x000014)
class FStateTreeNodeIdToIndex : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	SMember(FGuid)                                     ID                                                          OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FStateTreeIndex16)                         Index                                                       OFFSET(getStruct<T>, {0x10, 2, 0, 0})
};

/// Struct /Script/StateTreeModule.StateTreeTransitionIdToIndex
/// Size: 0x0014 (0x000000 - 0x000014)
class FStateTreeTransitionIdToIndex : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	SMember(FGuid)                                     ID                                                          OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FStateTreeIndex16)                         Index                                                       OFFSET(getStruct<T>, {0x10, 2, 0, 0})
};

/// Struct /Script/StateTreeModule.StateTreeStructRef
/// Size: 0x0010 (0x000000 - 0x000010)
class FStateTreeStructRef : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/StateTreeModule.StateTreeStateLink
/// Size: 0x0002 (0x000000 - 0x000002)
class FStateTreeStateLink : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2;

public:
	SMember(FStateTreeStateHandle)                     StateHandle                                                 OFFSET(getStruct<T>, {0x0, 2, 0, 0})
};

/// Struct /Script/StateTreeModule.StateTreeDebugTextTaskInstanceData
/// Size: 0x0008 (0x000000 - 0x000008)
class FStateTreeDebugTextTaskInstanceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(class AActor*)                             ReferenceActor                                              OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/StateTreeModule.StateTreeDebugTextTask
/// Size: 0x0038 (0x000020 - 0x000058)
class FStateTreeDebugTextTask : public FStateTreeTaskCommonBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FString)                                   Text                                                        OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	SMember(FColor)                                    TextColor                                                   OFFSET(getStruct<T>, {0x30, 4, 0, 0})
	DMember(float)                                     FontScale                                                   OFFSET(get<float>, {0x34, 4, 0, 0})
	SMember(FVector)                                   Offset                                                      OFFSET(getStruct<T>, {0x38, 24, 0, 0})
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x50, 1, 0, 0})
};

/// Struct /Script/StateTreeModule.StateTreeDelayTaskInstanceData
/// Size: 0x0010 (0x000000 - 0x000010)
class FStateTreeDelayTaskInstanceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(float)                                     duration                                                    OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     RandomDeviation                                             OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(bool)                                      bRunForever                                                 OFFSET(get<bool>, {0x8, 1, 0, 0})
};

/// Struct /Script/StateTreeModule.StateTreeDelayTask
/// Size: 0x0000 (0x000020 - 0x000020)
class FStateTreeDelayTask : public FStateTreeTaskCommonBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Enum /Script/StateTreeModule.EStateTreeBreakpointType
/// Size: 0x05
enum class EStateTreeBreakpointType : uint8_t
{
	EStateTreeBreakpointType__Unset                                                  = 0,
	EStateTreeBreakpointType__OnEnter                                                = 1,
	EStateTreeBreakpointType__OnExit                                                 = 2,
	EStateTreeBreakpointType__OnTransition                                           = 3,
	EStateTreeBreakpointType__EStateTreeBreakpointType_MAX                           = 4
};

/// Enum /Script/StateTreeModule.EStateTreeUpdatePhase
/// Size: 0x18
enum class EStateTreeUpdatePhase : uint8_t
{
	EStateTreeUpdatePhase__Unset                                                     = 0,
	EStateTreeUpdatePhase__StartTree                                                 = 1,
	EStateTreeUpdatePhase__StopTree                                                  = 2,
	EStateTreeUpdatePhase__StartGlobalTasks                                          = 3,
	EStateTreeUpdatePhase__StopGlobalTasks                                           = 4,
	EStateTreeUpdatePhase__TickStateTree                                             = 5,
	EStateTreeUpdatePhase__ApplyTransitions                                          = 6,
	EStateTreeUpdatePhase__TriggerTransitions                                        = 7,
	EStateTreeUpdatePhase__TickingGlobalTasks                                        = 8,
	EStateTreeUpdatePhase__TickingTasks                                              = 9,
	EStateTreeUpdatePhase__TransitionConditions                                      = 10,
	EStateTreeUpdatePhase__StateSelection                                            = 11,
	EStateTreeUpdatePhase__TrySelectBehavior                                         = 12,
	EStateTreeUpdatePhase__EnterConditions                                           = 13,
	EStateTreeUpdatePhase__EnterStates                                               = 14,
	EStateTreeUpdatePhase__ExitStates                                                = 15,
	EStateTreeUpdatePhase__StateCompleted                                            = 16,
	EStateTreeUpdatePhase__EStateTreeUpdatePhase_MAX                                 = 17
};

/// Enum /Script/StateTreeModule.EStateTreeRunStatus
/// Size: 0x06
enum class EStateTreeRunStatus : uint8_t
{
	EStateTreeRunStatus__Running                                                     = 0,
	EStateTreeRunStatus__Failed                                                      = 1,
	EStateTreeRunStatus__Succeeded                                                   = 2,
	EStateTreeRunStatus__Stopped                                                     = 3,
	EStateTreeRunStatus__Unset                                                       = 4,
	EStateTreeRunStatus__EStateTreeRunStatus_MAX                                     = 5
};

/// Enum /Script/StateTreeModule.EStateTreeStateChangeType
/// Size: 0x04
enum class EStateTreeStateChangeType : uint8_t
{
	EStateTreeStateChangeType__None                                                  = 0,
	EStateTreeStateChangeType__Changed                                               = 1,
	EStateTreeStateChangeType__Sustained                                             = 2,
	EStateTreeStateChangeType__EStateTreeStateChangeType_MAX                         = 3
};

/// Enum /Script/StateTreeModule.EStateTreeConditionEvaluationMode
/// Size: 0x04
enum class EStateTreeConditionEvaluationMode : uint8_t
{
	EStateTreeConditionEvaluationMode__Evaluated                                     = 0,
	EStateTreeConditionEvaluationMode__ForcedTrue                                    = 1,
	EStateTreeConditionEvaluationMode__ForcedFalse                                   = 2,
	EStateTreeConditionEvaluationMode__EStateTreeConditionEvaluationMode_MAX         = 3
};

/// Enum /Script/StateTreeModule.EStateTreeTransitionSourceType
/// Size: 0x05
enum class EStateTreeTransitionSourceType : uint8_t
{
	EStateTreeTransitionSourceType__Unset                                            = 0,
	EStateTreeTransitionSourceType__Asset                                            = 1,
	EStateTreeTransitionSourceType__ExternalRequest                                  = 2,
	EStateTreeTransitionSourceType__Internal                                         = 3,
	EStateTreeTransitionSourceType__EStateTreeTransitionSourceType_MAX               = 4
};

/// Enum /Script/StateTreeModule.EStateTreeLinkerStatus
/// Size: 0x03
enum class EStateTreeLinkerStatus : uint8_t
{
	EStateTreeLinkerStatus__Succeeded                                                = 0,
	EStateTreeLinkerStatus__Failed                                                   = 1,
	EStateTreeLinkerStatus__EStateTreeLinkerStatus_MAX                               = 2
};

/// Enum /Script/StateTreeModule.EStateTreeTraceEventType
/// Size: 0x22
enum class EStateTreeTraceEventType : uint8_t
{
	EStateTreeTraceEventType__Unset                                                  = 0,
	EStateTreeTraceEventType__OnEntering                                             = 1,
	EStateTreeTraceEventType__OnEntered                                              = 2,
	EStateTreeTraceEventType__OnExiting                                              = 3,
	EStateTreeTraceEventType__OnExited                                               = 4,
	EStateTreeTraceEventType__Push                                                   = 5,
	EStateTreeTraceEventType__Pop                                                    = 6,
	EStateTreeTraceEventType__OnStateSelected                                        = 7,
	EStateTreeTraceEventType__OnStateCompleted                                       = 8,
	EStateTreeTraceEventType__OnTicking                                              = 9,
	EStateTreeTraceEventType__OnTaskCompleted                                        = 10,
	EStateTreeTraceEventType__OnTicked                                               = 11,
	EStateTreeTraceEventType__Passed                                                 = 12,
	EStateTreeTraceEventType__Failed                                                 = 13,
	EStateTreeTraceEventType__ForcedSuccess                                          = 14,
	EStateTreeTraceEventType__ForcedFailure                                          = 15,
	EStateTreeTraceEventType__InternalForcedFailure                                  = 16,
	EStateTreeTraceEventType__OnEvaluating                                           = 17,
	EStateTreeTraceEventType__OnTransition                                           = 18,
	EStateTreeTraceEventType__OnTreeStarted                                          = 19,
	EStateTreeTraceEventType__OnTreeStopped                                          = 20,
	EStateTreeTraceEventType__EStateTreeTraceEventType_MAX                           = 21
};

/// Enum /Script/StateTreeModule.EStateTreeBlueprintPropertyCategory
/// Size: 0x06
enum class EStateTreeBlueprintPropertyCategory : uint8_t
{
	EStateTreeBlueprintPropertyCategory__NotSet                                      = 0,
	EStateTreeBlueprintPropertyCategory__Input                                       = 1,
	EStateTreeBlueprintPropertyCategory__Parameter                                   = 2,
	EStateTreeBlueprintPropertyCategory__Output                                      = 3,
	EStateTreeBlueprintPropertyCategory__ContextObject                               = 4,
	EStateTreeBlueprintPropertyCategory__EStateTreeBlueprintPropertyCategory_MAX     = 5
};

/// Enum /Script/StateTreeModule.EStateTreeLoopEvents
/// Size: 0x03
enum class EStateTreeLoopEvents : uint8_t
{
	EStateTreeLoopEvents__Next                                                       = 0,
	EStateTreeLoopEvents__Break                                                      = 1,
	EStateTreeLoopEvents__EStateTreeLoopEvents_MAX                                   = 2
};

/// Enum /Script/StateTreeModule.EStateTreeBindableStructSource
/// Size: 0x08
enum class EStateTreeBindableStructSource : uint8_t
{
	EStateTreeBindableStructSource__Context                                          = 0,
	EStateTreeBindableStructSource__Parameter                                        = 1,
	EStateTreeBindableStructSource__Evaluator                                        = 2,
	EStateTreeBindableStructSource__GlobalTask                                       = 3,
	EStateTreeBindableStructSource__State                                            = 4,
	EStateTreeBindableStructSource__Task                                             = 5,
	EStateTreeBindableStructSource__Condition                                        = 6,
	EStateTreeBindableStructSource__EStateTreeBindableStructSource_MAX               = 7
};

/// Enum /Script/StateTreeModule.EStateTreePropertyAccessType
/// Size: 0x08
enum class EStateTreePropertyAccessType : uint8_t
{
	EStateTreePropertyAccessType__Offset                                             = 0,
	EStateTreePropertyAccessType__Object                                             = 1,
	EStateTreePropertyAccessType__WeakObject                                         = 2,
	EStateTreePropertyAccessType__SoftObject                                         = 3,
	EStateTreePropertyAccessType__ObjectInstance                                     = 4,
	EStateTreePropertyAccessType__StructInstance                                     = 5,
	EStateTreePropertyAccessType__IndexArray                                         = 6,
	EStateTreePropertyAccessType__EStateTreePropertyAccessType_MAX                   = 7
};

/// Enum /Script/StateTreeModule.EStateTreePropertyCopyType
/// Size: 0x33
enum class EStateTreePropertyCopyType : uint8_t
{
	EStateTreePropertyCopyType__None                                                 = 0,
	EStateTreePropertyCopyType__CopyPlain                                            = 1,
	EStateTreePropertyCopyType__CopyComplex                                          = 2,
	EStateTreePropertyCopyType__CopyBool                                             = 3,
	EStateTreePropertyCopyType__CopyStruct                                           = 4,
	EStateTreePropertyCopyType__CopyObject                                           = 5,
	EStateTreePropertyCopyType__CopyName                                             = 6,
	EStateTreePropertyCopyType__CopyFixedArray                                       = 7,
	EStateTreePropertyCopyType__StructReference                                      = 8,
	EStateTreePropertyCopyType__PromoteBoolToByte                                    = 9,
	EStateTreePropertyCopyType__PromoteBoolToInt32                                   = 10,
	EStateTreePropertyCopyType__PromoteBoolToUInt32                                  = 11,
	EStateTreePropertyCopyType__PromoteBoolToInt64                                   = 12,
	EStateTreePropertyCopyType__PromoteBoolToFloat                                   = 13,
	EStateTreePropertyCopyType__PromoteBoolToDouble                                  = 14,
	EStateTreePropertyCopyType__PromoteByteToInt32                                   = 15,
	EStateTreePropertyCopyType__PromoteByteToUInt32                                  = 16,
	EStateTreePropertyCopyType__PromoteByteToInt64                                   = 17,
	EStateTreePropertyCopyType__PromoteByteToFloat                                   = 18,
	EStateTreePropertyCopyType__PromoteByteToDouble                                  = 19,
	EStateTreePropertyCopyType__PromoteInt32ToInt64                                  = 20,
	EStateTreePropertyCopyType__PromoteInt32ToFloat                                  = 21,
	EStateTreePropertyCopyType__PromoteInt32ToDouble                                 = 22,
	EStateTreePropertyCopyType__PromoteUInt32ToInt64                                 = 23,
	EStateTreePropertyCopyType__PromoteUInt32ToFloat                                 = 24,
	EStateTreePropertyCopyType__PromoteUInt32ToDouble                                = 25,
	EStateTreePropertyCopyType__PromoteFloatToInt32                                  = 26,
	EStateTreePropertyCopyType__PromoteFloatToInt64                                  = 27,
	EStateTreePropertyCopyType__PromoteFloatToDouble                                 = 28,
	EStateTreePropertyCopyType__DemoteDoubleToInt32                                  = 29,
	EStateTreePropertyCopyType__DemoteDoubleToInt64                                  = 30,
	EStateTreePropertyCopyType__DemoteDoubleToFloat                                  = 31,
	EStateTreePropertyCopyType__EStateTreePropertyCopyType_MAX                       = 32
};

/// Enum /Script/StateTreeModule.EStateTreeTransitionType
/// Size: 0x08
enum class EStateTreeTransitionType : uint8_t
{
	EStateTreeTransitionType__None                                                   = 0,
	EStateTreeTransitionType__Succeeded                                              = 1,
	EStateTreeTransitionType__Failed                                                 = 2,
	EStateTreeTransitionType__GotoState                                              = 3,
	EStateTreeTransitionType__NextState                                              = 4,
	EStateTreeTransitionType__NextSelectableState                                    = 5,
	EStateTreeTransitionType__NotSet                                                 = 6,
	EStateTreeTransitionType__EStateTreeTransitionType_MAX                           = 7
};

/// Enum /Script/StateTreeModule.EStateTreeConditionOperand
/// Size: 0x04
enum class EStateTreeConditionOperand : uint8_t
{
	EStateTreeConditionOperand__Copy                                                 = 0,
	EStateTreeConditionOperand__And                                                  = 1,
	EStateTreeConditionOperand__Or                                                   = 2,
	EStateTreeConditionOperand__EStateTreeConditionOperand_MAX                       = 3
};

/// Enum /Script/StateTreeModule.EStateTreeStateType
/// Size: 0x06
enum class EStateTreeStateType : uint8_t
{
	EStateTreeStateType__State                                                       = 0,
	EStateTreeStateType__Group                                                       = 1,
	EStateTreeStateType__Linked                                                      = 2,
	EStateTreeStateType__LinkedAsset                                                 = 3,
	EStateTreeStateType__Subtree                                                     = 4,
	EStateTreeStateType__EStateTreeStateType_MAX                                     = 5
};

/// Enum /Script/StateTreeModule.EStateTreeStateSelectionBehavior
/// Size: 0x05
enum class EStateTreeStateSelectionBehavior : uint8_t
{
	EStateTreeStateSelectionBehavior__None                                           = 0,
	EStateTreeStateSelectionBehavior__TryEnterState                                  = 1,
	EStateTreeStateSelectionBehavior__TrySelectChildrenInOrder                       = 2,
	EStateTreeStateSelectionBehavior__TryFollowTransitions                           = 3,
	EStateTreeStateSelectionBehavior__EStateTreeStateSelectionBehavior_MAX           = 4
};

/// Enum /Script/StateTreeModule.EStateTreeTransitionTrigger
/// Size: 0x07
enum class EStateTreeTransitionTrigger : uint8_t
{
	EStateTreeTransitionTrigger__None                                                = 0,
	EStateTreeTransitionTrigger__OnStateCompleted                                    = 3,
	EStateTreeTransitionTrigger__OnStateSucceeded                                    = 1,
	EStateTreeTransitionTrigger__OnStateFailed                                       = 2,
	EStateTreeTransitionTrigger__OnTick                                              = 4,
	EStateTreeTransitionTrigger__OnEvent                                             = 8,
	EStateTreeTransitionTrigger__MAX                                                 = 9
};

/// Enum /Script/StateTreeModule.EStateTreeTransitionPriority
/// Size: 0x06
enum class EStateTreeTransitionPriority : uint8_t
{
	EStateTreeTransitionPriority__None                                               = 0,
	EStateTreeTransitionPriority__Normal                                             = 1,
	EStateTreeTransitionPriority__Medium                                             = 2,
	EStateTreeTransitionPriority__High                                               = 3,
	EStateTreeTransitionPriority__Critical                                           = 4,
	EStateTreeTransitionPriority__EStateTreeTransitionPriority_MAX                   = 5
};

/// Enum /Script/StateTreeModule.EStateTreeDataSourceType
/// Size: 0x13
enum class EStateTreeDataSourceType : uint8_t
{
	EStateTreeDataSourceType__None                                                   = 0,
	EStateTreeDataSourceType__GlobalInstanceData                                     = 1,
	EStateTreeDataSourceType__GlobalInstanceDataObject                               = 2,
	EStateTreeDataSourceType__ActiveInstanceData                                     = 3,
	EStateTreeDataSourceType__ActiveInstanceDataObject                               = 4,
	EStateTreeDataSourceType__SharedInstanceData                                     = 5,
	EStateTreeDataSourceType__SharedInstanceDataObject                               = 6,
	EStateTreeDataSourceType__ContextData                                            = 7,
	EStateTreeDataSourceType__ExternalData                                           = 8,
	EStateTreeDataSourceType__GlobalParameterData                                    = 9,
	EStateTreeDataSourceType__SubtreeParameterData                                   = 10,
	EStateTreeDataSourceType__StateParameterData                                     = 11,
	EStateTreeDataSourceType__EStateTreeDataSourceType_MAX                           = 12
};

/// Enum /Script/StateTreeModule.EStateTreeSelectionFallback
/// Size: 0x03
enum class EStateTreeSelectionFallback : uint8_t
{
	EStateTreeSelectionFallback__None                                                = 0,
	EStateTreeSelectionFallback__NextSelectableSibling                               = 1,
	EStateTreeSelectionFallback__EStateTreeSelectionFallback_MAX                     = 2
};

/// Enum /Script/StateTreeModule.EStateTreeExternalDataRequirement
/// Size: 0x03
enum class EStateTreeExternalDataRequirement : uint8_t
{
	EStateTreeExternalDataRequirement__Required                                      = 0,
	EStateTreeExternalDataRequirement__Optional                                      = 1,
	EStateTreeExternalDataRequirement__EStateTreeExternalDataRequirement_MAX         = 2
};

/// Enum /Script/StateTreeModule.EStateTreePropertyUsage
/// Size: 0x06
enum class EStateTreePropertyUsage : uint8_t
{
	EStateTreePropertyUsage__Invalid                                                 = 0,
	EStateTreePropertyUsage__Context                                                 = 1,
	EStateTreePropertyUsage__Input                                                   = 2,
	EStateTreePropertyUsage__Parameter                                               = 3,
	EStateTreePropertyUsage__Output                                                  = 4,
	EStateTreePropertyUsage__EStateTreePropertyUsage_MAX                             = 5
};

