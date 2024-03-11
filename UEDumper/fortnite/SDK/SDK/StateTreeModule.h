
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: AIModule
/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine
/// dependency: GameplayTags
/// dependency: StructUtils

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

/// Class /Script/StateTreeModule.StateTreeSettings
/// Size: 0x0008 (0x000030 - 0x000038)
class UStateTreeSettings : public UDeveloperSettings
{ 
public:
	bool                                               bAutoStartDebuggerTracesOnNonEditorTargets;                 // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0031   (0x0007)  MISSED
};

/// Class /Script/StateTreeModule.StateTreeNodeBlueprintBase
/// Size: 0x0018 (0x000028 - 0x000040)
class UStateTreeNodeBlueprintBase : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x38];                                      // 0x0000   (0x0038)  MISSED
	class UObject*                                     CachedOwner;                                                // 0x0038   (0x0008)  


	/// Functions
	// Function /Script/StateTreeModule.StateTreeNodeBlueprintBase.SendEvent
	// void SendEvent(FStateTreeEvent& Event);                                                                               // [0x70e41c4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/StateTreeModule.StateTreeNodeBlueprintBase.RequestTransition
	// void RequestTransition(FStateTreeStateLink& TargetState, EStateTreeTransitionPriority Priority);                      // [0x70e4040] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/StateTreeModule.StateTreeConditionBlueprintBase
/// Size: 0x0008 (0x000040 - 0x000048)
class UStateTreeConditionBlueprintBase : public UStateTreeNodeBlueprintBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0040   (0x0008)  MISSED


	/// Functions
	// Function /Script/StateTreeModule.StateTreeConditionBlueprintBase.ReceiveTestCondition
	// bool ReceiveTestCondition();                                                                                          // [0x18a39e4] Event|Public|BlueprintEvent|Const 
};

/// Class /Script/StateTreeModule.StateTreeEvaluatorBlueprintBase
/// Size: 0x0008 (0x000040 - 0x000048)
class UStateTreeEvaluatorBlueprintBase : public UStateTreeNodeBlueprintBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0040   (0x0008)  MISSED


	/// Functions
	// Function /Script/StateTreeModule.StateTreeEvaluatorBlueprintBase.ReceiveTreeStop
	// void ReceiveTreeStop();                                                                                               // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/StateTreeModule.StateTreeEvaluatorBlueprintBase.ReceiveTreeStart
	// void ReceiveTreeStart();                                                                                              // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/StateTreeModule.StateTreeEvaluatorBlueprintBase.ReceiveTick
	// void ReceiveTick(float DeltaTime);                                                                                    // [0x18a39e4] Event|Public|BlueprintEvent 
};

/// Class /Script/StateTreeModule.StateTreeTaskBlueprintBase
/// Size: 0x0008 (0x000040 - 0x000048)
class UStateTreeTaskBlueprintBase : public UStateTreeNodeBlueprintBase
{ 
public:
	unsigned char                                      UnknownData00_3[0x1];                                       // 0x0040   (0x0001)  MISSED
	bool                                               bShouldStateChangeOnReselect : 1;                           // 0x0041:0 (0x0001)  
	unsigned char                                      UnknownBit01 : 1;                                           // 0x0041:1 (0x0001)  MISSED
	bool                                               bShouldCallTickOnlyOnEvents : 1;                            // 0x0041:2 (0x0001)  
	bool                                               bShouldCopyBoundPropertiesOnTick : 1;                       // 0x0041:3 (0x0001)  
	bool                                               bShouldCopyBoundPropertiesOnExitState : 1;                  // 0x0041:4 (0x0001)  
	unsigned char                                      UnknownData02_6[0x6];                                       // 0x0042   (0x0006)  MISSED


	/// Functions
	// Function /Script/StateTreeModule.StateTreeTaskBlueprintBase.ReceiveTick
	// EStateTreeRunStatus ReceiveTick(float DeltaTime);                                                                     // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/StateTreeModule.StateTreeTaskBlueprintBase.ReceiveStateCompleted
	// void ReceiveStateCompleted(EStateTreeRunStatus CompletionStatus, FStateTreeActiveStates CompletedActiveStates);       // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/StateTreeModule.StateTreeTaskBlueprintBase.ReceiveLatentTick
	// void ReceiveLatentTick(float DeltaTime);                                                                              // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/StateTreeModule.StateTreeTaskBlueprintBase.ReceiveLatentEnterState
	// void ReceiveLatentEnterState(FStateTreeTransitionResult& TRANSITION);                                                 // [0x18a39e4] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/StateTreeModule.StateTreeTaskBlueprintBase.ReceiveExitState
	// void ReceiveExitState(FStateTreeTransitionResult& TRANSITION);                                                        // [0x18a39e4] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/StateTreeModule.StateTreeTaskBlueprintBase.ReceiveEnterState
	// EStateTreeRunStatus ReceiveEnterState(FStateTreeTransitionResult& TRANSITION);                                        // [0x18a39e4] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/StateTreeModule.StateTreeTaskBlueprintBase.FinishTask
	// void FinishTask(bool bSucceeded);                                                                                     // [0x70e3fc4] Final|Native|Protected|BlueprintCallable 
};

/// Struct /Script/StateTreeModule.StateTreeStateHandle
/// Size: 0x0002 (0x000000 - 0x000002)
struct FStateTreeStateHandle
{ 
	uint16_t                                           Index;                                                      // 0x0000   (0x0002)  
};

/// Struct /Script/StateTreeModule.StateTreeIndex16
/// Size: 0x0002 (0x000000 - 0x000002)
struct FStateTreeIndex16
{ 
	uint16_t                                           Value;                                                      // 0x0000   (0x0002)  
};

/// Struct /Script/StateTreeModule.StateTreeDataHandle
/// Size: 0x0006 (0x000000 - 0x000006)
struct FStateTreeDataHandle
{ 
	EStateTreeDataSourceType                           Source;                                                     // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x0001   (0x0001)  MISSED
	uint16_t                                           Index;                                                      // 0x0002   (0x0002)  
	FStateTreeStateHandle                              StateHandle;                                                // 0x0004   (0x0002)  
};

/// Struct /Script/StateTreeModule.CompactStateTreeState
/// Size: 0x0030 (0x000000 - 0x000030)
struct FCompactStateTreeState
{ 
	FName                                              Name;                                                       // 0x0000   (0x0004)  
	FStateTreeStateHandle                              LinkedState;                                                // 0x0004   (0x0002)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0006   (0x0002)  MISSED
	class UStateTree*                                  LinkedAsset;                                                // 0x0008   (0x0008)  
	FStateTreeStateHandle                              Parent;                                                     // 0x0010   (0x0002)  
	uint16_t                                           ChildrenBegin;                                              // 0x0012   (0x0002)  
	uint16_t                                           ChildrenEnd;                                                // 0x0014   (0x0002)  
	uint16_t                                           EnterConditionsBegin;                                       // 0x0016   (0x0002)  
	uint16_t                                           TransitionsBegin;                                           // 0x0018   (0x0002)  
	uint16_t                                           TasksBegin;                                                 // 0x001A   (0x0002)  
	FStateTreeIndex16                                  ParameterTemplateIndex;                                     // 0x001C   (0x0002)  
	FStateTreeDataHandle                               ParameterDataHandle;                                        // 0x001E   (0x0006)  
	FStateTreeIndex16                                  ParameterBindingsBatch;                                     // 0x0024   (0x0002)  
	char                                               EnterConditionsNum;                                         // 0x0026   (0x0001)  
	char                                               TransitionsNum;                                             // 0x0027   (0x0001)  
	char                                               TasksNum;                                                   // 0x0028   (0x0001)  
	char                                               InstanceDataNum;                                            // 0x0029   (0x0001)  
	EStateTreeStateType                                Type;                                                       // 0x002A   (0x0001)  
	EStateTreeStateSelectionBehavior                   SelectionBehavior;                                          // 0x002B   (0x0001)  
	bool                                               bHasTransitionTasks : 1;                                    // 0x002C:0 (0x0001)  
	bool                                               bEnabled : 1;                                               // 0x002C:1 (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x002D   (0x0003)  MISSED
};

/// Struct /Script/StateTreeModule.StateTreeRandomTimeDuration
/// Size: 0x0004 (0x000000 - 0x000004)
struct FStateTreeRandomTimeDuration
{ 
	uint16_t                                           duration;                                                   // 0x0000   (0x0002)  
	uint16_t                                           RandomVariance;                                             // 0x0002   (0x0002)  
};

/// Struct /Script/StateTreeModule.CompactStateTransition
/// Size: 0x0014 (0x000000 - 0x000014)
struct FCompactStateTransition
{ 
	FGameplayTag                                       EventTag;                                                   // 0x0000   (0x0004)  
	uint16_t                                           ConditionsBegin;                                            // 0x0004   (0x0002)  
	FStateTreeStateHandle                              State;                                                      // 0x0006   (0x0002)  
	FStateTreeRandomTimeDuration                       Delay;                                                      // 0x0008   (0x0004)  
	EStateTreeTransitionTrigger                        Trigger;                                                    // 0x000C   (0x0001)  
	EStateTreeTransitionPriority                       Priority;                                                   // 0x000D   (0x0001)  
	EStateTreeSelectionFallback                        Fallback;                                                   // 0x000E   (0x0001)  
	char                                               ConditionsNum;                                              // 0x000F   (0x0001)  
	bool                                               bTransitionEnabled : 1;                                     // 0x0010:0 (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0011   (0x0003)  MISSED
};

/// Struct /Script/StateTreeModule.StateTreeInstanceData
/// Size: 0x0010 (0x000000 - 0x000010)
struct FStateTreeInstanceData
{ 
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0000   (0x0010)  MISSED
};

/// Struct /Script/StateTreeModule.StateTreeExternalDataHandle
/// Size: 0x0006 (0x000000 - 0x000006)
struct FStateTreeExternalDataHandle
{ 
	FStateTreeDataHandle                               DataHandle;                                                 // 0x0000   (0x0006)  
};

/// Struct /Script/StateTreeModule.StateTreeExternalDataDesc
/// Size: 0x0018 (0x000000 - 0x000018)
struct FStateTreeExternalDataDesc
{ 
	class UStruct*                                     Struct;                                                     // 0x0000   (0x0008)  
	FName                                              Name;                                                       // 0x0008   (0x0004)  
	FStateTreeExternalDataHandle                       Handle;                                                     // 0x000C   (0x0006)  
	EStateTreeExternalDataRequirement                  Requirement;                                                // 0x0012   (0x0001)  
	unsigned char                                      UnknownData00_6[0x5];                                       // 0x0013   (0x0005)  MISSED
};

/// Struct /Script/StateTreeModule.StateTreeBindableStructDesc
/// Size: 0x0018 (0x000000 - 0x000018)
struct FStateTreeBindableStructDesc
{ 
	class UStruct*                                     Struct;                                                     // 0x0000   (0x0008)  
	FName                                              Name;                                                       // 0x0008   (0x0004)  
	FStateTreeDataHandle                               DataHandle;                                                 // 0x000C   (0x0006)  
	EStateTreeBindableStructSource                     DataSource;                                                 // 0x0012   (0x0001)  
	unsigned char                                      UnknownData00_6[0x5];                                       // 0x0013   (0x0005)  MISSED
};

/// Struct /Script/StateTreeModule.StateTreePropertyCopyBatch
/// Size: 0x0020 (0x000000 - 0x000020)
struct FStateTreePropertyCopyBatch
{ 
	FStateTreeBindableStructDesc                       TargetStruct;                                               // 0x0000   (0x0018)  
	uint16_t                                           BindingsBegin;                                              // 0x0018   (0x0002)  
	uint16_t                                           BindingsEnd;                                                // 0x001A   (0x0002)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/StateTreeModule.StateTreePropertyPathSegment
/// Size: 0x0010 (0x000000 - 0x000010)
struct FStateTreePropertyPathSegment
{ 
	FName                                              Name;                                                       // 0x0000   (0x0004)  
	int32_t                                            ArrayIndex;                                                 // 0x0004   (0x0004)  
	class UStruct*                                     InstanceStruct;                                             // 0x0008   (0x0008)  
};

/// Struct /Script/StateTreeModule.StateTreePropertyPath
/// Size: 0x0010 (0x000000 - 0x000010)
struct FStateTreePropertyPath
{ 
	TArray<FStateTreePropertyPathSegment>              Segments;                                                   // 0x0000   (0x0010)  
};

/// Struct /Script/StateTreeModule.StateTreePropertyPathBinding
/// Size: 0x0028 (0x000000 - 0x000028)
struct FStateTreePropertyPathBinding
{ 
	FStateTreePropertyPath                             SourcePropertyPath;                                         // 0x0000   (0x0010)  
	FStateTreePropertyPath                             TargetPropertyPath;                                         // 0x0010   (0x0010)  
	FStateTreeDataHandle                               SourceDataHandle;                                           // 0x0020   (0x0006)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0026   (0x0002)  MISSED
};

/// Struct /Script/StateTreeModule.StateTreePropertyIndirection
/// Size: 0x0018 (0x000000 - 0x000018)
struct FStateTreePropertyIndirection
{ 
	FStateTreeIndex16                                  ArrayIndex;                                                 // 0x0000   (0x0002)  
	uint16_t                                           Offset;                                                     // 0x0002   (0x0002)  
	FStateTreeIndex16                                  NextIndex;                                                  // 0x0004   (0x0002)  
	EStateTreePropertyAccessType                       Type;                                                       // 0x0006   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x0007   (0x0001)  MISSED
	class UStruct*                                     InstanceStruct;                                             // 0x0008   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0010   (0x0008)  MISSED
};

/// Struct /Script/StateTreeModule.StateTreePropertyCopy
/// Size: 0x0058 (0x000000 - 0x000058)
struct FStateTreePropertyCopy
{ 
	FStateTreePropertyIndirection                      SourceIndirection;                                          // 0x0000   (0x0018)  
	FStateTreePropertyIndirection                      TargetIndirection;                                          // 0x0018   (0x0018)  
	unsigned char                                      UnknownData00_5[0x10];                                      // 0x0030   (0x0010)  MISSED
	class UStruct*                                     SourceStructType;                                           // 0x0040   (0x0008)  
	int32_t                                            CopySize;                                                   // 0x0048   (0x0004)  
	FStateTreeDataHandle                               SourceDataHandle;                                           // 0x004C   (0x0006)  
	EStateTreePropertyCopyType                         Type;                                                       // 0x0052   (0x0001)  
	unsigned char                                      UnknownData01_5[0x1];                                       // 0x0053   (0x0001)  MISSED
	FStateTreeIndex16                                  SourceStructIndex;                                          // 0x0054   (0x0002)  
	unsigned char                                      UnknownData02_6[0x2];                                       // 0x0056   (0x0002)  MISSED
};

/// Struct /Script/StateTreeModule.StateTreePropertyRefPath
/// Size: 0x0018 (0x000000 - 0x000018)
struct FStateTreePropertyRefPath
{ 
	FStateTreePropertyPath                             SourcePropertyPath;                                         // 0x0000   (0x0010)  
	FStateTreeDataHandle                               SourceDataHandle;                                           // 0x0010   (0x0006)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0016   (0x0002)  MISSED
};

/// Struct /Script/StateTreeModule.StateTreePropertyAccess
/// Size: 0x0030 (0x000000 - 0x000030)
struct FStateTreePropertyAccess
{ 
	FStateTreePropertyIndirection                      SourceIndirection;                                          // 0x0000   (0x0018)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0018   (0x0008)  MISSED
	class UStruct*                                     SourceStructType;                                           // 0x0020   (0x0008)  
	FStateTreeDataHandle                               SourceDataHandle;                                           // 0x0028   (0x0006)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x002E   (0x0002)  MISSED
};

/// Struct /Script/StateTreeModule.StateTreePropertyBindings
/// Size: 0x0078 (0x000000 - 0x000078)
struct FStateTreePropertyBindings
{ 
	TArray<FStateTreeBindableStructDesc>               SourceStructs;                                              // 0x0000   (0x0010)  
	TArray<FStateTreePropertyCopyBatch>                CopyBatches;                                                // 0x0010   (0x0010)  
	TArray<FStateTreePropertyPathBinding>              PropertyPathBindings;                                       // 0x0020   (0x0010)  
	TArray<FStateTreePropertyCopy>                     PropertyCopies;                                             // 0x0030   (0x0010)  
	TArray<FStateTreePropertyRefPath>                  PropertyReferencePaths;                                     // 0x0040   (0x0010)  
	TArray<FStateTreePropertyAccess>                   PropertyAccesses;                                           // 0x0050   (0x0010)  
	TArray<FStateTreePropertyIndirection>              PropertyIndirections;                                       // 0x0060   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0070   (0x0008)  MISSED
};

/// Struct /Script/StateTreeModule.StateTreeStateIdToHandle
/// Size: 0x0014 (0x000000 - 0x000014)
struct FStateTreeStateIdToHandle
{ 
	FGuid                                              ID;                                                         // 0x0000   (0x0010)  
	FStateTreeStateHandle                              Handle;                                                     // 0x0010   (0x0002)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0012   (0x0002)  MISSED
};

/// Struct /Script/StateTreeModule.StateTreeNodeIdToIndex
/// Size: 0x0014 (0x000000 - 0x000014)
struct FStateTreeNodeIdToIndex
{ 
	FGuid                                              ID;                                                         // 0x0000   (0x0010)  
	FStateTreeIndex16                                  Index;                                                      // 0x0010   (0x0002)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0012   (0x0002)  MISSED
};

/// Struct /Script/StateTreeModule.StateTreeTransitionIdToIndex
/// Size: 0x0014 (0x000000 - 0x000014)
struct FStateTreeTransitionIdToIndex
{ 
	FGuid                                              ID;                                                         // 0x0000   (0x0010)  
	FStateTreeIndex16                                  Index;                                                      // 0x0010   (0x0002)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0012   (0x0002)  MISSED
};

/// Class /Script/StateTreeModule.StateTree
/// Size: 0x0168 (0x000030 - 0x000198)
class UStateTree : public UDataAsset
{ 
public:
	uint32_t                                           LastCompiledEditorDataHash;                                 // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0034   (0x0004)  MISSED
	class UStateTreeSchema*                            Schema;                                                     // 0x0038   (0x0008)  
	TArray<FCompactStateTreeState>                     States;                                                     // 0x0040   (0x0010)  
	TArray<FCompactStateTransition>                    Transitions;                                                // 0x0050   (0x0010)  
	FInstancedStructContainer                          Nodes;                                                      // 0x0060   (0x0010)  
	FStateTreeInstanceData                             DefaultInstanceData;                                        // 0x0070   (0x0010)  
	FStateTreeInstanceData                             SharedInstanceData;                                         // 0x0080   (0x0010)  
	unsigned char                                      UnknownData01_5[0x18];                                      // 0x0090   (0x0018)  MISSED
	TArray<FStateTreeExternalDataDesc>                 ContextDataDescs;                                           // 0x00A8   (0x0010)  
	FStateTreePropertyBindings                         PropertyBindings;                                           // 0x00B8   (0x0078)  
	TArray<FStateTreeStateIdToHandle>                  IDToStateMappings;                                          // 0x0130   (0x0010)  
	TArray<FStateTreeNodeIdToIndex>                    IDToNodeMappings;                                           // 0x0140   (0x0010)  
	TArray<FStateTreeTransitionIdToIndex>              IDToTransitionMappings;                                     // 0x0150   (0x0010)  
	FInstancedPropertyBag                              Parameters;                                                 // 0x0160   (0x0010)  
	uint16_t                                           NumContextData;                                             // 0x0170   (0x0002)  
	uint16_t                                           NumGlobalInstanceData;                                      // 0x0172   (0x0002)  
	uint16_t                                           EvaluatorsBegin;                                            // 0x0174   (0x0002)  
	uint16_t                                           EvaluatorsNum;                                              // 0x0176   (0x0002)  
	uint16_t                                           GlobalTasksBegin;                                           // 0x0178   (0x0002)  
	uint16_t                                           GlobalTasksNum;                                             // 0x017A   (0x0002)  
	bool                                               bHasGlobalTransitionTasks;                                  // 0x017C   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x017D   (0x0003)  MISSED
	TArray<FStateTreeExternalDataDesc>                 ExternalDataDescs;                                          // 0x0180   (0x0010)  
	unsigned char                                      UnknownData03_6[0x8];                                       // 0x0190   (0x0008)  MISSED
};

/// Class /Script/StateTreeModule.StateTreeSchema
/// Size: 0x0000 (0x000028 - 0x000028)
class UStateTreeSchema : public UObject
{ 
public:
};

/// Struct /Script/StateTreeModule.StateTreeAnyEnum
/// Size: 0x0010 (0x000000 - 0x000010)
struct FStateTreeAnyEnum
{ 
	uint32_t                                           Value;                                                      // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	class UEnum*                                       Enum;                                                       // 0x0008   (0x0008)  
};

/// Struct /Script/StateTreeModule.StateTreeTransitionRequest
/// Size: 0x0018 (0x000000 - 0x000018)
struct FStateTreeTransitionRequest
{ 
	FStateTreeStateHandle                              SourceState;                                                // 0x0000   (0x0002)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x0002   (0x0006)  MISSED
	class UStateTree*                                  SourceStateTree;                                            // 0x0008   (0x0008)  
	FStateTreeStateHandle                              SourceRootState;                                            // 0x0010   (0x0002)  
	FStateTreeStateHandle                              TargetState;                                                // 0x0012   (0x0002)  
	EStateTreeTransitionPriority                       Priority;                                                   // 0x0014   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0015   (0x0003)  MISSED
};

/// Struct /Script/StateTreeModule.StateTreeActiveStates
/// Size: 0x0012 (0x000000 - 0x000012)
struct FStateTreeActiveStates
{ 
	FStateTreeStateHandle                              States;                                                     // 0x0000   (0x0010)  
	char                                               NumStates;                                                  // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x0011   (0x0001)  MISSED
};

/// Struct /Script/StateTreeModule.StateTreeTransitionSource
/// Size: 0x0008 (0x000000 - 0x000008)
struct FStateTreeTransitionSource
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/StateTreeModule.StateTreeTransitionDelayedState
/// Size: 0x0010 (0x000000 - 0x000010)
struct FStateTreeTransitionDelayedState
{ 
	class UStateTree*                                  StateTree;                                                  // 0x0000   (0x0008)  
	FStateTreeIndex16                                  TransitionIndex;                                            // 0x0008   (0x0002)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x000A   (0x0002)  MISSED
	float                                              TimeLeft;                                                   // 0x000C   (0x0004)  
};

/// Struct /Script/StateTreeModule.StateTreeExecutionFrame
/// Size: 0x0030 (0x000000 - 0x000030)
struct FStateTreeExecutionFrame
{ 
	class UStateTree*                                  StateTree;                                                  // 0x0000   (0x0008)  
	FStateTreeStateHandle                              RootState;                                                  // 0x0008   (0x0002)  
	FStateTreeActiveStates                             ActiveStates;                                               // 0x000A   (0x0012)  
	FStateTreeIndex16                                  ExternalDataBaseIndex;                                      // 0x001C   (0x0002)  
	FStateTreeIndex16                                  GlobalInstanceIndexBase;                                    // 0x001E   (0x0002)  
	FStateTreeIndex16                                  ActiveInstanceIndexBase;                                    // 0x0020   (0x0002)  
	FStateTreeDataHandle                               StateParameterDataHandle;                                   // 0x0022   (0x0006)  
	FStateTreeDataHandle                               GlobalParameterDataHandle;                                  // 0x0028   (0x0006)  
	bool                                               bIsGlobalFrame : 1;                                         // 0x002E:0 (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x002F   (0x0001)  MISSED
};

/// Struct /Script/StateTreeModule.StateTreeExecutionState
/// Size: 0x0030 (0x000000 - 0x000030)
struct FStateTreeExecutionState
{ 
	TArray<FStateTreeExecutionFrame>                   ActiveFrames;                                               // 0x0000   (0x0010)  
	TArray<FStateTreeTransitionDelayedState>           DelayedTransitions;                                         // 0x0010   (0x0010)  
	FStateTreeIndex16                                  EnterStateFailedFrameIndex;                                 // 0x0020   (0x0002)  
	FStateTreeIndex16                                  EnterStateFailedTaskIndex;                                  // 0x0022   (0x0002)  
	EStateTreeRunStatus                                LastTickStatus;                                             // 0x0024   (0x0001)  
	EStateTreeRunStatus                                TreeRunStatus;                                              // 0x0025   (0x0001)  
	EStateTreeRunStatus                                RequestedStop;                                              // 0x0026   (0x0001)  
	EStateTreeUpdatePhase                              CurrentPhase;                                               // 0x0027   (0x0001)  
	FStateTreeIndex16                                  CompletedFrameIndex;                                        // 0x0028   (0x0002)  
	FStateTreeStateHandle                              CompletedStateHandle;                                       // 0x002A   (0x0002)  
	uint16_t                                           StateChangeCount;                                           // 0x002C   (0x0002)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x002E   (0x0002)  MISSED
};

/// Struct /Script/StateTreeModule.StateTreeTransitionResult
/// Size: 0x0030 (0x000000 - 0x000030)
struct FStateTreeTransitionResult
{ 
	TArray<FStateTreeExecutionFrame>                   NextActiveFrames;                                           // 0x0000   (0x0010)  
	EStateTreeRunStatus                                CurrentRunStatus;                                           // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x0011   (0x0001)  MISSED
	FStateTreeStateHandle                              SourceState;                                                // 0x0012   (0x0002)  
	FStateTreeStateHandle                              TargetState;                                                // 0x0014   (0x0002)  
	FStateTreeStateHandle                              CurrentState;                                               // 0x0016   (0x0002)  
	EStateTreeStateChangeType                          ChangeType;                                                 // 0x0018   (0x0001)  
	EStateTreeTransitionPriority                       Priority;                                                   // 0x0019   (0x0001)  
	unsigned char                                      UnknownData01_5[0x6];                                       // 0x001A   (0x0006)  MISSED
	class UStateTree*                                  SourceStateTree;                                            // 0x0020   (0x0008)  
	FStateTreeStateHandle                              SourceRootState;                                            // 0x0028   (0x0002)  
	unsigned char                                      UnknownData02_6[0x6];                                       // 0x002A   (0x0006)  MISSED
};

/// Struct /Script/StateTreeModule.StateTreeIndex8
/// Size: 0x0001 (0x000000 - 0x000001)
struct FStateTreeIndex8
{ 
	char                                               Value;                                                      // 0x0000   (0x0001)  
};

/// Struct /Script/StateTreeModule.StateTreeNodeBase
/// Size: 0x0018 (0x000000 - 0x000018)
struct FStateTreeNodeBase
{ 
	FName                                              Name;                                                       // 0x0008   (0x0004)  
	FStateTreeIndex16                                  BindingsBatch;                                              // 0x000C   (0x0002)  
	FStateTreeIndex16                                  InstanceTemplateIndex;                                      // 0x000E   (0x0002)  
	FStateTreeDataHandle                               InstanceDataHandle;                                         // 0x0010   (0x0006)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0016   (0x0002)  MISSED
};

/// Struct /Script/StateTreeModule.StateTreePropertyRef
/// Size: 0x0002 (0x000000 - 0x000002)
struct FStateTreePropertyRef
{ 
	FStateTreeIndex16                                  RefAccessIndex;                                             // 0x0000   (0x0002)  
};

/// Struct /Script/StateTreeModule.StateTreeConditionBase
/// Size: 0x0008 (0x000018 - 0x000020)
struct FStateTreeConditionBase : FStateTreeNodeBase
{ 
	EStateTreeConditionOperand                         Operand;                                                    // 0x0018   (0x0001)  
	int8_t                                             DeltaIndent;                                                // 0x0019   (0x0001)  
	EStateTreeConditionEvaluationMode                  EvaluationMode;                                             // 0x001A   (0x0001)  
	unsigned char                                      UnknownData00_6[0x5];                                       // 0x001B   (0x0005)  MISSED
};

/// Struct /Script/StateTreeModule.StateTreeBlueprintConditionWrapper
/// Size: 0x0008 (0x000020 - 0x000028)
struct FStateTreeBlueprintConditionWrapper : FStateTreeConditionBase
{ 
	class UClass*                                      ConditionClass;                                             // 0x0020   (0x0008)  
};

/// Struct /Script/StateTreeModule.StateTreeEvaluatorBase
/// Size: 0x0000 (0x000018 - 0x000018)
struct FStateTreeEvaluatorBase : FStateTreeNodeBase
{ 
};

/// Struct /Script/StateTreeModule.StateTreeBlueprintEvaluatorWrapper
/// Size: 0x0008 (0x000018 - 0x000020)
struct FStateTreeBlueprintEvaluatorWrapper : FStateTreeEvaluatorBase
{ 
	class UClass*                                      EvaluatorClass;                                             // 0x0018   (0x0008)  
};

/// Struct /Script/StateTreeModule.StateTreeTaskBase
/// Size: 0x0008 (0x000018 - 0x000020)
struct FStateTreeTaskBase : FStateTreeNodeBase
{ 
	bool                                               bTaskEnabled : 1;                                           // 0x0018:6 (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0019   (0x0007)  MISSED
};

/// Struct /Script/StateTreeModule.StateTreeBlueprintTaskWrapper
/// Size: 0x0008 (0x000020 - 0x000028)
struct FStateTreeBlueprintTaskWrapper : FStateTreeTaskBase
{ 
	class UClass*                                      TaskClass;                                                  // 0x0020   (0x0008)  
};

/// Struct /Script/StateTreeModule.StateTreeCompareIntConditionInstanceData
/// Size: 0x0008 (0x000000 - 0x000008)
struct FStateTreeCompareIntConditionInstanceData
{ 
	int32_t                                            Left;                                                       // 0x0000   (0x0004)  
	int32_t                                            Right;                                                      // 0x0004   (0x0004)  
};

/// Struct /Script/StateTreeModule.StateTreeConditionCommonBase
/// Size: 0x0000 (0x000020 - 0x000020)
struct FStateTreeConditionCommonBase : FStateTreeConditionBase
{ 
};

/// Struct /Script/StateTreeModule.StateTreeCompareIntCondition
/// Size: 0x0008 (0x000020 - 0x000028)
struct FStateTreeCompareIntCondition : FStateTreeConditionCommonBase
{ 
	bool                                               bInvert;                                                    // 0x0020   (0x0001)  
	EGenericAICheck                                    Operator;                                                   // 0x0021   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x0022   (0x0006)  MISSED
};

/// Struct /Script/StateTreeModule.StateTreeCompareFloatConditionInstanceData
/// Size: 0x0010 (0x000000 - 0x000010)
struct FStateTreeCompareFloatConditionInstanceData
{ 
	double                                             Left;                                                       // 0x0000   (0x0008)  
	double                                             Right;                                                      // 0x0008   (0x0008)  
};

/// Struct /Script/StateTreeModule.StateTreeCompareFloatCondition
/// Size: 0x0008 (0x000020 - 0x000028)
struct FStateTreeCompareFloatCondition : FStateTreeConditionCommonBase
{ 
	bool                                               bInvert;                                                    // 0x0020   (0x0001)  
	EGenericAICheck                                    Operator;                                                   // 0x0021   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x0022   (0x0006)  MISSED
};

/// Struct /Script/StateTreeModule.StateTreeCompareBoolConditionInstanceData
/// Size: 0x0002 (0x000000 - 0x000002)
struct FStateTreeCompareBoolConditionInstanceData
{ 
	bool                                               bLeft;                                                      // 0x0000   (0x0001)  
	bool                                               bRight;                                                     // 0x0001   (0x0001)  
};

/// Struct /Script/StateTreeModule.StateTreeCompareBoolCondition
/// Size: 0x0008 (0x000020 - 0x000028)
struct FStateTreeCompareBoolCondition : FStateTreeConditionCommonBase
{ 
	bool                                               bInvert;                                                    // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0021   (0x0007)  MISSED
};

/// Struct /Script/StateTreeModule.StateTreeCompareEnumConditionInstanceData
/// Size: 0x0020 (0x000000 - 0x000020)
struct FStateTreeCompareEnumConditionInstanceData
{ 
	FStateTreeAnyEnum                                  Left;                                                       // 0x0000   (0x0010)  
	FStateTreeAnyEnum                                  Right;                                                      // 0x0010   (0x0010)  
};

/// Struct /Script/StateTreeModule.StateTreeCompareEnumCondition
/// Size: 0x0008 (0x000020 - 0x000028)
struct FStateTreeCompareEnumCondition : FStateTreeConditionCommonBase
{ 
	bool                                               bInvert;                                                    // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0021   (0x0007)  MISSED
};

/// Struct /Script/StateTreeModule.StateTreeCompareDistanceConditionInstanceData
/// Size: 0x0038 (0x000000 - 0x000038)
struct FStateTreeCompareDistanceConditionInstanceData
{ 
	FVector                                            Source;                                                     // 0x0000   (0x0018)  
	FVector                                            Target;                                                     // 0x0018   (0x0018)  
	double                                             Distance;                                                   // 0x0030   (0x0008)  
};

/// Struct /Script/StateTreeModule.StateTreeCompareDistanceCondition
/// Size: 0x0008 (0x000020 - 0x000028)
struct FStateTreeCompareDistanceCondition : FStateTreeConditionCommonBase
{ 
	bool                                               bInvert;                                                    // 0x0020   (0x0001)  
	EGenericAICheck                                    Operator;                                                   // 0x0021   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x0022   (0x0006)  MISSED
};

/// Struct /Script/StateTreeModule.StateTreeRandomConditionInstanceData
/// Size: 0x0004 (0x000000 - 0x000004)
struct FStateTreeRandomConditionInstanceData
{ 
	float                                              Threshold;                                                  // 0x0000   (0x0004)  
};

/// Struct /Script/StateTreeModule.StateTreeRandomCondition
/// Size: 0x0000 (0x000020 - 0x000020)
struct FStateTreeRandomCondition : FStateTreeConditionCommonBase
{ 
};

/// Struct /Script/StateTreeModule.GameplayTagMatchConditionInstanceData
/// Size: 0x0028 (0x000000 - 0x000028)
struct FGameplayTagMatchConditionInstanceData
{ 
	FGameplayTagContainer                              TagContainer;                                               // 0x0000   (0x0020)  
	FGameplayTag                                       tag;                                                        // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Struct /Script/StateTreeModule.GameplayTagMatchCondition
/// Size: 0x0008 (0x000020 - 0x000028)
struct FGameplayTagMatchCondition : FStateTreeConditionCommonBase
{ 
	bool                                               bExactMatch;                                                // 0x0020   (0x0001)  
	bool                                               bInvert;                                                    // 0x0021   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x0022   (0x0006)  MISSED
};

/// Struct /Script/StateTreeModule.GameplayTagContainerMatchConditionInstanceData
/// Size: 0x0040 (0x000000 - 0x000040)
struct FGameplayTagContainerMatchConditionInstanceData
{ 
	FGameplayTagContainer                              TagContainer;                                               // 0x0000   (0x0020)  
	FGameplayTagContainer                              OtherContainer;                                             // 0x0020   (0x0020)  
};

/// Struct /Script/StateTreeModule.GameplayTagContainerMatchCondition
/// Size: 0x0008 (0x000020 - 0x000028)
struct FGameplayTagContainerMatchCondition : FStateTreeConditionCommonBase
{ 
	EGameplayContainerMatchType                        MatchType;                                                  // 0x0020   (0x0001)  
	bool                                               bExactMatch;                                                // 0x0021   (0x0001)  
	bool                                               bInvert;                                                    // 0x0022   (0x0001)  
	unsigned char                                      UnknownData00_6[0x5];                                       // 0x0023   (0x0005)  MISSED
};

/// Struct /Script/StateTreeModule.GameplayTagQueryConditionInstanceData
/// Size: 0x0020 (0x000000 - 0x000020)
struct FGameplayTagQueryConditionInstanceData
{ 
	FGameplayTagContainer                              TagContainer;                                               // 0x0000   (0x0020)  
};

/// Struct /Script/StateTreeModule.GameplayTagQueryCondition
/// Size: 0x0050 (0x000020 - 0x000070)
struct FGameplayTagQueryCondition : FStateTreeConditionCommonBase
{ 
	FGameplayTagQuery                                  TagQuery;                                                   // 0x0020   (0x0048)  
	bool                                               bInvert;                                                    // 0x0068   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0069   (0x0007)  MISSED
};

/// Struct /Script/StateTreeModule.StateTreeObjectIsValidConditionInstanceData
/// Size: 0x0008 (0x000000 - 0x000008)
struct FStateTreeObjectIsValidConditionInstanceData
{ 
	class UObject*                                     Object;                                                     // 0x0000   (0x0008)  
};

/// Struct /Script/StateTreeModule.StateTreeObjectIsValidCondition
/// Size: 0x0008 (0x000020 - 0x000028)
struct FStateTreeObjectIsValidCondition : FStateTreeConditionCommonBase
{ 
	bool                                               bInvert;                                                    // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0021   (0x0007)  MISSED
};

/// Struct /Script/StateTreeModule.StateTreeObjectEqualsConditionInstanceData
/// Size: 0x0010 (0x000000 - 0x000010)
struct FStateTreeObjectEqualsConditionInstanceData
{ 
	class UObject*                                     Left;                                                       // 0x0000   (0x0008)  
	class UObject*                                     Right;                                                      // 0x0008   (0x0008)  
};

/// Struct /Script/StateTreeModule.StateTreeObjectEqualsCondition
/// Size: 0x0008 (0x000020 - 0x000028)
struct FStateTreeObjectEqualsCondition : FStateTreeConditionCommonBase
{ 
	bool                                               bInvert;                                                    // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0021   (0x0007)  MISSED
};

/// Struct /Script/StateTreeModule.StateTreeObjectIsChildOfClassConditionInstanceData
/// Size: 0x0010 (0x000000 - 0x000010)
struct FStateTreeObjectIsChildOfClassConditionInstanceData
{ 
	class UObject*                                     Object;                                                     // 0x0000   (0x0008)  
	class UClass*                                      Class;                                                      // 0x0008   (0x0008)  
};

/// Struct /Script/StateTreeModule.StateTreeObjectIsChildOfClassCondition
/// Size: 0x0008 (0x000020 - 0x000028)
struct FStateTreeObjectIsChildOfClassCondition : FStateTreeConditionCommonBase
{ 
	bool                                               bInvert;                                                    // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0021   (0x0007)  MISSED
};

/// Struct /Script/StateTreeModule.StateTreeEvaluatorCommonBase
/// Size: 0x0000 (0x000018 - 0x000018)
struct FStateTreeEvaluatorCommonBase : FStateTreeEvaluatorBase
{ 
};

/// Struct /Script/StateTreeModule.StateTreeEvent
/// Size: 0x0020 (0x000000 - 0x000020)
struct FStateTreeEvent
{ 
	FGameplayTag                                       tag;                                                        // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	FInstancedStruct                                   Payload;                                                    // 0x0008   (0x0010)  
	FName                                              Origin;                                                     // 0x0018   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/StateTreeModule.StateTreeEventQueue
/// Size: 0x0010 (0x000000 - 0x000010)
struct FStateTreeEventQueue
{ 
	TArray<FStateTreeEvent>                            Events;                                                     // 0x0000   (0x0010)  
};

/// Struct /Script/StateTreeModule.StateTreeInstanceObjectWrapper
/// Size: 0x0008 (0x000000 - 0x000008)
struct FStateTreeInstanceObjectWrapper
{ 
	class UObject*                                     InstanceObject;                                             // 0x0000   (0x0008)  
};

/// Struct /Script/StateTreeModule.StateTreeTemporaryInstanceData
/// Size: 0x0028 (0x000000 - 0x000028)
struct FStateTreeTemporaryInstanceData
{ 
	class UStateTree*                                  StateTree;                                                  // 0x0000   (0x0008)  
	FStateTreeStateHandle                              RootState;                                                  // 0x0008   (0x0002)  
	FStateTreeDataHandle                               DataHandle;                                                 // 0x000A   (0x0006)  
	FStateTreeIndex16                                  OwnerNodeIndex;                                             // 0x0010   (0x0002)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x0012   (0x0006)  MISSED
	FInstancedStruct                                   Instance;                                                   // 0x0018   (0x0010)  
};

/// Struct /Script/StateTreeModule.StateTreeInstanceStorage
/// Size: 0x0080 (0x000000 - 0x000080)
struct FStateTreeInstanceStorage
{ 
	FStateTreeExecutionState                           ExecutionState;                                             // 0x0000   (0x0030)  
	FInstancedStructContainer                          InstanceStructs;                                            // 0x0030   (0x0010)  
	TArray<FStateTreeTemporaryInstanceData>            TemporaryInstances;                                         // 0x0040   (0x0010)  
	FStateTreeEventQueue                               EventQueue;                                                 // 0x0050   (0x0010)  
	TArray<FStateTreeTransitionRequest>                TransitionRequests;                                         // 0x0060   (0x0010)  
	FInstancedPropertyBag                              GlobalParameters;                                           // 0x0070   (0x0010)  
};

/// Struct /Script/StateTreeModule.StateTreeEditorPropertyPath
/// Size: 0x0020 (0x000000 - 0x000020)
struct FStateTreeEditorPropertyPath
{ 
	FGuid                                              StructID;                                                   // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,2046) /* TArray<FString> */       __um(Path);                                                 // 0x0010   (0x0010)  
};

/// Struct /Script/StateTreeModule.StateTreePropertySegment
/// Size: 0x000C (0x000000 - 0x00000C)
struct FStateTreePropertySegment
{ 
	FName                                              Name;                                                       // 0x0000   (0x0004)  
	FStateTreeIndex16                                  ArrayIndex;                                                 // 0x0004   (0x0002)  
	FStateTreeIndex16                                  NextIndex;                                                  // 0x0006   (0x0002)  
	EStateTreePropertyAccessType                       Type;                                                       // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0009   (0x0003)  MISSED
};

/// Struct /Script/StateTreeModule.StateTreePropertyBinding
/// Size: 0x001C (0x000000 - 0x00001C)
struct FStateTreePropertyBinding
{ 
	FStateTreePropertySegment                          SourcePath;                                                 // 0x0000   (0x000C)  
	FStateTreePropertySegment                          TargetPath;                                                 // 0x000C   (0x000C)  
	FStateTreeIndex16                                  SourceStructIndex;                                          // 0x0018   (0x0002)  
	EStateTreePropertyCopyType                         CopyType;                                                   // 0x001A   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x001B   (0x0001)  MISSED
};

/// Struct /Script/StateTreeModule.StateTreeReference
/// Size: 0x0028 (0x000000 - 0x000028)
struct FStateTreeReference
{ 
	class UStateTree*                                  StateTree;                                                  // 0x0000   (0x0008)  
	FInstancedPropertyBag                              Parameters;                                                 // 0x0008   (0x0010)  
	TArray<FGuid>                                      PropertyOverrides;                                          // 0x0018   (0x0010)  
};

/// Struct /Script/StateTreeModule.StateTreeTaskCommonBase
/// Size: 0x0000 (0x000020 - 0x000020)
struct FStateTreeTaskCommonBase : FStateTreeTaskBase
{ 
};

/// Struct /Script/StateTreeModule.CompactStateTreeParameters
/// Size: 0x0010 (0x000000 - 0x000010)
struct FCompactStateTreeParameters
{ 
	FInstancedPropertyBag                              Parameters;                                                 // 0x0000   (0x0010)  
};

/// Struct /Script/StateTreeModule.StateTreeStructRef
/// Size: 0x0010 (0x000000 - 0x000010)
struct FStateTreeStructRef
{ 
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0000   (0x0010)  MISSED
};

/// Struct /Script/StateTreeModule.StateTreeStateLink
/// Size: 0x0002 (0x000000 - 0x000002)
struct FStateTreeStateLink
{ 
	FStateTreeStateHandle                              StateHandle;                                                // 0x0000   (0x0002)  
};

/// Struct /Script/StateTreeModule.StateTreeDebugTextTaskInstanceData
/// Size: 0x0008 (0x000000 - 0x000008)
struct FStateTreeDebugTextTaskInstanceData
{ 
	class AActor*                                      ReferenceActor;                                             // 0x0000   (0x0008)  
};

/// Struct /Script/StateTreeModule.StateTreeDebugTextTask
/// Size: 0x0038 (0x000020 - 0x000058)
struct FStateTreeDebugTextTask : FStateTreeTaskCommonBase
{ 
	SDK_UNDEFINED(16,2047) /* FString */               __um(Text);                                                 // 0x0020   (0x0010)  
	FColor                                             TextColor;                                                  // 0x0030   (0x0004)  
	float                                              FontScale;                                                  // 0x0034   (0x0004)  
	FVector                                            Offset;                                                     // 0x0038   (0x0018)  
	bool                                               bEnabled;                                                   // 0x0050   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0051   (0x0007)  MISSED
};

/// Struct /Script/StateTreeModule.StateTreeDelayTaskInstanceData
/// Size: 0x0010 (0x000000 - 0x000010)
struct FStateTreeDelayTaskInstanceData
{ 
	float                                              duration;                                                   // 0x0000   (0x0004)  
	float                                              RandomDeviation;                                            // 0x0004   (0x0004)  
	bool                                               bRunForever;                                                // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0009   (0x0007)  MISSED
};

/// Struct /Script/StateTreeModule.StateTreeDelayTask
/// Size: 0x0000 (0x000020 - 0x000020)
struct FStateTreeDelayTask : FStateTreeTaskCommonBase
{ 
};

