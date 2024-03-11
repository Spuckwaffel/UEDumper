
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
/// dependency: GameplayTags
/// dependency: GameplayTasks
/// dependency: SmartObjectsModule
/// dependency: StateTreeModule
/// dependency: StructUtils

/// Enum /Script/GameplayInteractionsModule.EGameplayTaskActuationResult
/// Size: 0x05
enum class EGameplayTaskActuationResult : uint8_t
{
	EGameplayTaskActuationResult__None                                               = 0,
	EGameplayTaskActuationResult__RequestFailed                                      = 1,
	EGameplayTaskActuationResult__Failed                                             = 2,
	EGameplayTaskActuationResult__Succeeded                                          = 3,
	EGameplayTaskActuationResult__EGameplayTaskActuationResult_MAX                   = 4
};

/// Enum /Script/GameplayInteractionsModule.EGameplayInteractionAbortReason
/// Size: 0x04
enum class EGameplayInteractionAbortReason : uint8_t
{
	EGameplayInteractionAbortReason__Unset                                           = 0,
	EGameplayInteractionAbortReason__ExternalAbort                                   = 1,
	EGameplayInteractionAbortReason__InternalAbort                                   = 2,
	EGameplayInteractionAbortReason__EGameplayInteractionAbortReason_MAX             = 3
};

/// Enum /Script/GameplayInteractionsModule.EGameplayInteractionModifyGameplayTagOperation
/// Size: 0x03
enum class EGameplayInteractionModifyGameplayTagOperation : uint8_t
{
	EGameplayInteractionModifyGameplayTagOperation__Add                              = 0,
	EGameplayInteractionModifyGameplayTagOperation__Remove                           = 1,
	EGameplayInteractionModifyGameplayTagOperation__EGameplayInteractionModifyGameplayTagOperation_MAX = 2
};

/// Enum /Script/GameplayInteractionsModule.EGameplayInteractionTaskModify
/// Size: 0x06
enum class EGameplayInteractionTaskModify : uint8_t
{
	EGameplayInteractionTaskModify__OnEnterStateUndoOnExitState                      = 0,
	EGameplayInteractionTaskModify__OnEnterState                                     = 1,
	EGameplayInteractionTaskModify__OnExitState                                      = 2,
	EGameplayInteractionTaskModify__OnExitStateFailed                                = 3,
	EGameplayInteractionTaskModify__OnExitStateSucceeded                             = 4,
	EGameplayInteractionTaskModify__EGameplayInteractionTaskModify_MAX               = 5
};

/// Enum /Script/GameplayInteractionsModule.EGameplayInteractionTaskTrigger
/// Size: 0x05
enum class EGameplayInteractionTaskTrigger : uint8_t
{
	EGameplayInteractionTaskTrigger__OnEnterState                                    = 0,
	EGameplayInteractionTaskTrigger__OnExitState                                     = 1,
	EGameplayInteractionTaskTrigger__OnExitStateFailed                               = 2,
	EGameplayInteractionTaskTrigger__OnExitStateSucceeded                            = 3,
	EGameplayInteractionTaskTrigger__EGameplayInteractionTaskTrigger_MAX             = 4
};

/// Enum /Script/GameplayInteractionsModule.EGameplayInteractionMatchSlotTagSource
/// Size: 0x03
enum class EGameplayInteractionMatchSlotTagSource : uint8_t
{
	EGameplayInteractionMatchSlotTagSource__ActivityTags                             = 0,
	EGameplayInteractionMatchSlotTagSource__RuntimeTags                              = 1,
	EGameplayInteractionMatchSlotTagSource__EGameplayInteractionMatchSlotTagSource_MAX = 2
};

/// Enum /Script/GameplayInteractionsModule.EGameplayInteractionSlotReferenceType
/// Size: 0x03
enum class EGameplayInteractionSlotReferenceType : uint8_t
{
	EGameplayInteractionSlotReferenceType__ByActivityTag                             = 0,
	EGameplayInteractionSlotReferenceType__ByLinkTag                                 = 1,
	EGameplayInteractionSlotReferenceType__EGameplayInteractionSlotReferenceType_MAX = 2
};

/// Enum /Script/GameplayInteractionsModule.EGameplayInteractionSyncSlotTransitionState
/// Size: 0x04
enum class EGameplayInteractionSyncSlotTransitionState : uint8_t
{
	EGameplayInteractionSyncSlotTransitionState__WaitingForFromTag                   = 0,
	EGameplayInteractionSyncSlotTransitionState__WaitingForToTag                     = 1,
	EGameplayInteractionSyncSlotTransitionState__Completed                           = 2,
	EGameplayInteractionSyncSlotTransitionState__EGameplayInteractionSyncSlotTransitionState_MAX = 3
};

/// Enum /Script/GameplayInteractionsModule.EPlayContextualAnimExecutionMethod
/// Size: 0x05
enum class EPlayContextualAnimExecutionMethod : uint8_t
{
	EPlayContextualAnimExecutionMethod__StartInteraction                             = 0,
	EPlayContextualAnimExecutionMethod__JoinInteraction                              = 1,
	EPlayContextualAnimExecutionMethod__TransitionAllActors                          = 2,
	EPlayContextualAnimExecutionMethod__TransitionSingleActor                        = 3,
	EPlayContextualAnimExecutionMethod__EPlayContextualAnimExecutionMethod_MAX       = 4
};

/// Class /Script/GameplayInteractionsModule.GameplayInteractionSmartObjectBehaviorDefinition
/// Size: 0x0028 (0x000028 - 0x000050)
class UGameplayInteractionSmartObjectBehaviorDefinition : public USmartObjectBehaviorDefinition
{ 
public:
	FStateTreeReference                                StateTreeReference;                                         // 0x0028   (0x0028)  
};

/// Struct /Script/GameplayInteractionsModule.GameplayInteractionAbortContext
/// Size: 0x0001 (0x000000 - 0x000001)
struct FGameplayInteractionAbortContext
{ 
	EGameplayInteractionAbortReason                    Reason;                                                     // 0x0000   (0x0001)  
};

/// Struct /Script/GameplayInteractionsModule.GameplayInteractionContext
/// Size: 0x0068 (0x000000 - 0x000068)
struct FGameplayInteractionContext
{ 
	FStateTreeInstanceData                             StateTreeInstanceData;                                      // 0x0000   (0x0010)  
	FSmartObjectClaimHandle                            ClaimedHandle;                                              // 0x0010   (0x0020)  
	FSmartObjectSlotEntranceHandle                     SlotEntranceHandle;                                         // 0x0030   (0x0018)  
	FGameplayInteractionAbortContext                   AbortContext;                                               // 0x0048   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0049   (0x0007)  MISSED
	class AActor*                                      ContextActor;                                               // 0x0050   (0x0008)  
	class AActor*                                      SmartObjectActor;                                           // 0x0058   (0x0008)  
	class UGameplayInteractionSmartObjectBehaviorDefinition* Definition;                                           // 0x0060   (0x0008)  
};

/// Class /Script/GameplayInteractionsModule.AITask_UseGameplayInteraction
/// Size: 0x00D8 (0x000068 - 0x000140)
class UAITask_UseGameplayInteraction : public UAITask
{ 
public:
	SDK_UNDEFINED(16,2303) /* FMulticastInlineDelegate */ __um(OnFinished);                                        // 0x0068   (0x0010)  
	SDK_UNDEFINED(16,2304) /* FMulticastInlineDelegate */ __um(OnSucceeded);                                       // 0x0078   (0x0010)  
	SDK_UNDEFINED(16,2305) /* FMulticastInlineDelegate */ __um(OnFailed);                                          // 0x0088   (0x0010)  
	SDK_UNDEFINED(16,2306) /* FMulticastInlineDelegate */ __um(OnMoveToFailed);                                    // 0x0098   (0x0010)  
	FGameplayInteractionContext                        GameplayInteractionContext;                                 // 0x00A8   (0x0068)  
	class UAITask_MoveTo*                              MoveToTask;                                                 // 0x0110   (0x0008)  
	FSmartObjectClaimHandle                            ClaimedHandle;                                              // 0x0118   (0x0020)  
	FGameplayInteractionAbortContext                   AbortContext;                                               // 0x0138   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0139   (0x0007)  MISSED


	/// Functions
	// Function /Script/GameplayInteractionsModule.AITask_UseGameplayInteraction.UseSmartObjectWithGameplayInteraction
	// class UAITask_UseGameplayInteraction* UseSmartObjectWithGameplayInteraction(class AAIController* Controller, FSmartObjectClaimHandle ClaimHandle, bool bLockAILogic); // [0x7e996f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayInteractionsModule.AITask_UseGameplayInteraction.RequestAbort
	// void RequestAbort();                                                                                                  // [0x7e996dc] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayInteractionsModule.AITask_UseGameplayInteraction.MoveToAndUseSmartObjectWithGameplayInteraction
	// class UAITask_UseGameplayInteraction* MoveToAndUseSmartObjectWithGameplayInteraction(class AAIController* Controller, FSmartObjectClaimHandle ClaimHandle, bool bLockAILogic); // [0x7e992c0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameplayInteractionsModule.GameplayInteractionStateTreeSchema
/// Size: 0x0020 (0x000028 - 0x000048)
class UGameplayInteractionStateTreeSchema : public UStateTreeSchema
{ 
public:
	class UClass*                                      ContextActorClass;                                          // 0x0028   (0x0008)  
	class UClass*                                      SmartObjectActorClass;                                      // 0x0030   (0x0008)  
	TArray<FStateTreeExternalDataDesc>                 ContextDataDescs;                                           // 0x0038   (0x0010)  
};

/// Class /Script/GameplayInteractionsModule.StateTreeTask_PlayContextualAnim_InstanceData
/// Size: 0x0078 (0x000028 - 0x0000A0)
class UStateTreeTask_PlayContextualAnim_InstanceData : public UObject
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
	EPlayContextualAnimExecutionMethod                 ExecutionMethod;                                            // 0x005C   (0x0001)  
	bool                                               bWaitForNotifyEventToEnd;                                   // 0x005D   (0x0001)  
	unsigned char                                      UnknownData03_5[0x2];                                       // 0x005E   (0x0002)  MISSED
	FName                                              NotifyEventNameToEnd;                                       // 0x0060   (0x0004)  
	int32_t                                            LoopsToRun;                                                 // 0x0064   (0x0004)  
	bool                                               bLoopForever;                                               // 0x0068   (0x0001)  
	unsigned char                                      UnknownData04_5[0x3];                                       // 0x0069   (0x0003)  MISSED
	float                                              DelayBetweenLoops;                                          // 0x006C   (0x0004)  
	float                                              RandomDeviationBetweenLoops;                                // 0x0070   (0x0004)  
	unsigned char                                      UnknownData05_5[0x4];                                       // 0x0074   (0x0004)  MISSED
	TArray<FContextualAnimWarpTarget>                  WarpTargets;                                                // 0x0078   (0x0010)  
	unsigned char                                      UnknownData06_6[0x18];                                      // 0x0088   (0x0018)  MISSED


	/// Functions
	// Function /Script/GameplayInteractionsModule.StateTreeTask_PlayContextualAnim_InstanceData.OnNotifyBeginReceived
	// void OnNotifyBeginReceived(FName NotifyName, FBranchingPointNotifyPayload& BranchingPointNotifyPayload);              // [0x7e995fc] Final|Native|Public|HasOutParms 
	// Function /Script/GameplayInteractionsModule.StateTreeTask_PlayContextualAnim_InstanceData.OnMontageEnded
	// void OnMontageEnded(class UAnimMontage* EndedMontage, bool bInterrupted);                                             // [0x7e99534] Final|Native|Public  
};

/// Struct /Script/GameplayInteractionsModule.GameplayInteractionSlotUserData
/// Size: 0x0007 (0x000001 - 0x000008)
struct FGameplayInteractionSlotUserData : FSmartObjectSlotStateData
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/GameplayInteractionsModule.GameplayInteractionStateTreeTask
/// Size: 0x0000 (0x000020 - 0x000020)
struct FGameplayInteractionStateTreeTask : FStateTreeTaskBase
{ 
};

/// Struct /Script/GameplayInteractionsModule.GameplayInteractionStateTreeCondition
/// Size: 0x0000 (0x000020 - 0x000020)
struct FGameplayInteractionStateTreeCondition : FStateTreeConditionBase
{ 
};

/// Struct /Script/GameplayInteractionsModule.GameplayInteractionMatchSlotTagsConditionInstanceData
/// Size: 0x0030 (0x000000 - 0x000030)
struct FGameplayInteractionMatchSlotTagsConditionInstanceData
{ 
	FSmartObjectSlotHandle                             Slot;                                                       // 0x0000   (0x0010)  
	FGameplayTagContainer                              TagsToMatch;                                                // 0x0010   (0x0020)  
};

/// Struct /Script/GameplayInteractionsModule.GameplayInteractionSlotTagsMatchCondition
/// Size: 0x0010 (0x000020 - 0x000030)
struct FGameplayInteractionSlotTagsMatchCondition : FGameplayInteractionStateTreeCondition
{ 
	EGameplayInteractionMatchSlotTagSource             Source;                                                     // 0x0020   (0x0001)  
	EGameplayContainerMatchType                        MatchType;                                                  // 0x0021   (0x0001)  
	bool                                               bExactMatch;                                                // 0x0022   (0x0001)  
	bool                                               bInvert;                                                    // 0x0023   (0x0001)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x0024   (0x000C)  MISSED
};

/// Struct /Script/GameplayInteractionsModule.GameplayInteractionQuerySlotTagsConditionInstanceData
/// Size: 0x0010 (0x000000 - 0x000010)
struct FGameplayInteractionQuerySlotTagsConditionInstanceData
{ 
	FSmartObjectSlotHandle                             Slot;                                                       // 0x0000   (0x0010)  
};

/// Struct /Script/GameplayInteractionsModule.GameplayInteractionQuerySlotTagCondition
/// Size: 0x0058 (0x000020 - 0x000078)
struct FGameplayInteractionQuerySlotTagCondition : FGameplayInteractionStateTreeCondition
{ 
	EGameplayInteractionMatchSlotTagSource             Source;                                                     // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0021   (0x0007)  MISSED
	FGameplayTagQuery                                  TagQuery;                                                   // 0x0028   (0x0048)  
	bool                                               bInvert;                                                    // 0x0070   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0071   (0x0007)  MISSED
};

/// Struct /Script/GameplayInteractionsModule.GameplayInteractionIsSlotHandleValidConditionInstanceData
/// Size: 0x0010 (0x000000 - 0x000010)
struct FGameplayInteractionIsSlotHandleValidConditionInstanceData
{ 
	FSmartObjectSlotHandle                             Slot;                                                       // 0x0000   (0x0010)  
};

/// Struct /Script/GameplayInteractionsModule.GameplayInteractionIsSlotHandleValidCondition
/// Size: 0x0008 (0x000020 - 0x000028)
struct FGameplayInteractionIsSlotHandleValidCondition : FGameplayInteractionStateTreeCondition
{ 
	bool                                               bInvert;                                                    // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0021   (0x0007)  MISSED
};

/// Struct /Script/GameplayInteractionsModule.GameplayInteractionFindSlotTaskInstanceData
/// Size: 0x0020 (0x000000 - 0x000020)
struct FGameplayInteractionFindSlotTaskInstanceData
{ 
	FSmartObjectSlotHandle                             ReferenceSlot;                                              // 0x0000   (0x0010)  
	FSmartObjectSlotHandle                             ResultSlot;                                                 // 0x0010   (0x0010)  
};

/// Struct /Script/GameplayInteractionsModule.GameplayInteractionFindSlotTask
/// Size: 0x0010 (0x000020 - 0x000030)
struct FGameplayInteractionFindSlotTask : FGameplayInteractionStateTreeTask
{ 
	EGameplayInteractionSlotReferenceType              ReferenceType;                                              // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0021   (0x0003)  MISSED
	FGameplayTag                                       FindByTag;                                                  // 0x0024   (0x0004)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0028   (0x0008)  MISSED
};

/// Struct /Script/GameplayInteractionsModule.GameplayInteractionGetSlotActorTaskInstanceData
/// Size: 0x0018 (0x000000 - 0x000018)
struct FGameplayInteractionGetSlotActorTaskInstanceData
{ 
	FSmartObjectSlotHandle                             TargetSlot;                                                 // 0x0000   (0x0010)  
	class AActor*                                      ResultActor;                                                // 0x0010   (0x0008)  
};

/// Struct /Script/GameplayInteractionsModule.GameplayInteractionGetSlotActorTask
/// Size: 0x0008 (0x000020 - 0x000028)
struct FGameplayInteractionGetSlotActorTask : FGameplayInteractionStateTreeTask
{ 
	bool                                               bFailIfNotFound;                                            // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0021   (0x0007)  MISSED
};

/// Struct /Script/GameplayInteractionsModule.GameplayInteractionListenSlotEventsTaskInstanceData
/// Size: 0x0018 (0x000000 - 0x000018)
struct FGameplayInteractionListenSlotEventsTaskInstanceData
{ 
	FSmartObjectSlotHandle                             TargetSlot;                                                 // 0x0000   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0010   (0x0008)  MISSED
};

/// Struct /Script/GameplayInteractionsModule.GameplayInteractionListenSlotEventsTask
/// Size: 0x0008 (0x000020 - 0x000028)
struct FGameplayInteractionListenSlotEventsTask : FGameplayInteractionStateTreeTask
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0020   (0x0008)  MISSED
};

/// Struct /Script/GameplayInteractionsModule.GameplayInteractionModifySlotTagTaskInstanceData
/// Size: 0x0018 (0x000000 - 0x000018)
struct FGameplayInteractionModifySlotTagTaskInstanceData
{ 
	FSmartObjectSlotHandle                             TargetSlot;                                                 // 0x0000   (0x0010)  
	bool                                               bTagRemoved;                                                // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/GameplayInteractionsModule.GameplayInteractionModifySlotTagTask
/// Size: 0x0010 (0x000020 - 0x000030)
struct FGameplayInteractionModifySlotTagTask : FGameplayInteractionStateTreeTask
{ 
	EGameplayInteractionTaskModify                     Modify;                                                     // 0x0020   (0x0001)  
	bool                                               bHandleExternalStopAsFailure;                               // 0x0021   (0x0001)  
	EGameplayInteractionModifyGameplayTagOperation     Operation;                                                  // 0x0022   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x0023   (0x0001)  MISSED
	FGameplayTag                                       tag;                                                        // 0x0024   (0x0004)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0028   (0x0008)  MISSED
};

/// Struct /Script/GameplayInteractionsModule.GameplayInteractionSendSlotEventTaskInstanceData
/// Size: 0x0010 (0x000000 - 0x000010)
struct FGameplayInteractionSendSlotEventTaskInstanceData
{ 
	FSmartObjectSlotHandle                             TargetSlot;                                                 // 0x0000   (0x0010)  
};

/// Struct /Script/GameplayInteractionsModule.GameplayInteractionSendSlotEventTask
/// Size: 0x0028 (0x000020 - 0x000048)
struct FGameplayInteractionSendSlotEventTask : FGameplayInteractionStateTreeTask
{ 
	FGameplayTag                                       EventTag;                                                   // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0024   (0x0004)  MISSED
	FInstancedStruct                                   Payload;                                                    // 0x0028   (0x0010)  
	EGameplayInteractionTaskTrigger                    Trigger;                                                    // 0x0038   (0x0001)  
	bool                                               bHandleExternalStopAsFailure;                               // 0x0039   (0x0001)  
	bool                                               bShouldTriggerOnReselect;                                   // 0x003A   (0x0001)  
	unsigned char                                      UnknownData01_6[0xD];                                       // 0x003B   (0x000D)  MISSED
};

/// Struct /Script/GameplayInteractionsModule.GameplayInteractionSetSlotEnabledInstanceData
/// Size: 0x0018 (0x000000 - 0x000018)
struct FGameplayInteractionSetSlotEnabledInstanceData
{ 
	FSmartObjectSlotHandle                             TargetSlot;                                                 // 0x0000   (0x0010)  
	bool                                               bInitialState;                                              // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/GameplayInteractionsModule.GameplayInteractionSetSlotEnabledTask
/// Size: 0x0010 (0x000020 - 0x000030)
struct FGameplayInteractionSetSlotEnabledTask : FGameplayInteractionStateTreeTask
{ 
	EGameplayInteractionTaskModify                     Modify;                                                     // 0x0020   (0x0001)  
	bool                                               bHandleExternalStopAsFailure;                               // 0x0021   (0x0001)  
	bool                                               bEnableSlot;                                                // 0x0022   (0x0001)  
	unsigned char                                      UnknownData00_6[0xD];                                       // 0x0023   (0x000D)  MISSED
};

/// Struct /Script/GameplayInteractionsModule.GameplayInteractionSyncSlotTagStateInstanceData
/// Size: 0x0020 (0x000000 - 0x000020)
struct FGameplayInteractionSyncSlotTagStateInstanceData
{ 
	FSmartObjectSlotHandle                             TargetSlot;                                                 // 0x0000   (0x0010)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0010   (0x0010)  MISSED
};

/// Struct /Script/GameplayInteractionsModule.GameplayInteractionSyncSlotTagStateTask
/// Size: 0x0010 (0x000020 - 0x000030)
struct FGameplayInteractionSyncSlotTagStateTask : FGameplayInteractionStateTreeTask
{ 
	FGameplayTag                                       TagToMonitor;                                               // 0x0020   (0x0004)  
	FGameplayTag                                       BreakEventTag;                                              // 0x0024   (0x0004)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0028   (0x0008)  MISSED
};

/// Struct /Script/GameplayInteractionsModule.GameplayInteractionSyncSlotTagTransitionInstanceData
/// Size: 0x0020 (0x000000 - 0x000020)
struct FGameplayInteractionSyncSlotTagTransitionInstanceData
{ 
	FSmartObjectSlotHandle                             TargetSlot;                                                 // 0x0000   (0x0010)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0010   (0x0010)  MISSED
};

/// Struct /Script/GameplayInteractionsModule.GameplayInteractionSyncSlotTagTransitionTask
/// Size: 0x0018 (0x000020 - 0x000038)
struct FGameplayInteractionSyncSlotTagTransitionTask : FGameplayInteractionStateTreeTask
{ 
	FGameplayTag                                       TransitionFromTag;                                          // 0x0020   (0x0004)  
	FGameplayTag                                       TransitionToTag;                                            // 0x0024   (0x0004)  
	FGameplayTag                                       TransitionEventTag;                                         // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x002C   (0x000C)  MISSED
};

/// Struct /Script/GameplayInteractionsModule.PlayMontageStateTreeTaskInstanceData
/// Size: 0x0010 (0x000000 - 0x000010)
struct FPlayMontageStateTreeTaskInstanceData
{ 
	class AActor*                                      Actor;                                                      // 0x0000   (0x0008)  
	float                                              ComputedDuration;                                           // 0x0008   (0x0004)  
	float                                              Time;                                                       // 0x000C   (0x0004)  
};

/// Struct /Script/GameplayInteractionsModule.PlayMontageStateTreeTask
/// Size: 0x0008 (0x000020 - 0x000028)
struct FPlayMontageStateTreeTask : FGameplayInteractionStateTreeTask
{ 
	class UAnimMontage*                                Montage;                                                    // 0x0020   (0x0008)  
};

/// Struct /Script/GameplayInteractionsModule.StateTreeTask_FindSlotEntranceLocation_InstanceData
/// Size: 0x00A0 (0x000000 - 0x0000A0)
struct FStateTreeTask_FindSlotEntranceLocation_InstanceData
{ 
	class AActor*                                      UserActor;                                                  // 0x0000   (0x0008)  
	FSmartObjectSlotHandle                             ReferenceSlot;                                              // 0x0008   (0x0010)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0018   (0x0008)  MISSED
	FTransform                                         EntryTransform;                                             // 0x0020   (0x0060)  
	FGameplayTagContainer                              EntranceTags;                                               // 0x0080   (0x0020)  
};

/// Struct /Script/GameplayInteractionsModule.StateTreeTask_FindSlotEntranceLocation
/// Size: 0x0018 (0x000020 - 0x000038)
struct FStateTreeTask_FindSlotEntranceLocation : FGameplayInteractionStateTreeTask
{ 
	FSmartObjectSlotEntrySelectionMethod               SelectMethod;                                               // 0x0020   (0x0001)  
	bool                                               bProjectNavigationLocation;                                 // 0x0021   (0x0001)  
	bool                                               bTraceGroundLocation;                                       // 0x0022   (0x0001)  
	bool                                               bCheckTransitionTrajectory;                                 // 0x0023   (0x0001)  
	bool                                               bCheckEntranceLocationOverlap;                              // 0x0024   (0x0001)  
	bool                                               bCheckSlotLocationOverlap;                                  // 0x0025   (0x0001)  
	bool                                               bUseSlotLocationAsFallbackCandidate;                        // 0x0026   (0x0001)  
	ESmartObjectSlotNavigationLocationType             LocationType;                                               // 0x0027   (0x0001)  
	class UClass*                                      ValidationFilter;                                           // 0x0028   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0030   (0x0008)  MISSED
};

/// Struct /Script/GameplayInteractionsModule.StateTreeTask_GetSlotEntranceLocation_InstanceData
/// Size: 0x0038 (0x000000 - 0x000038)
struct FStateTreeTask_GetSlotEntranceLocation_InstanceData
{ 
	FSmartObjectSlotEntranceHandle                     SlotEntranceHandle;                                         // 0x0000   (0x0018)  
	FGameplayTagContainer                              EntranceTags;                                               // 0x0018   (0x0020)  
};

/// Struct /Script/GameplayInteractionsModule.StateTreeTask_GetSlotEntranceLocation
/// Size: 0x0008 (0x000020 - 0x000028)
struct FStateTreeTask_GetSlotEntranceLocation : FGameplayInteractionStateTreeTask
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0020   (0x0008)  MISSED
};

/// Struct /Script/GameplayInteractionsModule.StateTreeTask_PlayContextualAnim
/// Size: 0x0000 (0x000020 - 0x000020)
struct FStateTreeTask_PlayContextualAnim : FStateTreeTaskCommonBase
{ 
};

