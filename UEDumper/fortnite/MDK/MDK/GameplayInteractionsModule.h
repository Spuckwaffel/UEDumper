
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
/// dependency: GameplayTags
/// dependency: GameplayTasks
/// dependency: SmartObjectsModule
/// dependency: StateTreeModule
/// dependency: StructUtils

/// Class /Script/GameplayInteractionsModule.GameplayInteractionSmartObjectBehaviorDefinition
/// Size: 0x0028 (0x000028 - 0x000050)
class UGameplayInteractionSmartObjectBehaviorDefinition : public USmartObjectBehaviorDefinition
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FStateTreeReference)                       StateTreeReference                                          OFFSET(getStruct<T>, {0x28, 40, 0, 0})
};

/// Class /Script/GameplayInteractionsModule.AITask_UseGameplayInteraction
/// Size: 0x00D8 (0x000068 - 0x000140)
class UAITask_UseGameplayInteraction : public UAITask
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
	SMember(FMulticastInlineDelegate)                  OnFinished                                                  OFFSET(getStruct<T>, {0x68, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnSucceeded                                                 OFFSET(getStruct<T>, {0x78, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnFailed                                                    OFFSET(getStruct<T>, {0x88, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnMoveToFailed                                              OFFSET(getStruct<T>, {0x98, 16, 0, 0})
	SMember(FGameplayInteractionContext)               GameplayInteractionContext                                  OFFSET(getStruct<T>, {0xA8, 104, 0, 0})
	CMember(class UAITask_MoveTo*)                     MoveToTask                                                  OFFSET(get<T>, {0x110, 8, 0, 0})
	SMember(FSmartObjectClaimHandle)                   ClaimedHandle                                               OFFSET(getStruct<T>, {0x118, 32, 0, 0})
	SMember(FGameplayInteractionAbortContext)          AbortContext                                                OFFSET(getStruct<T>, {0x138, 1, 0, 0})


	/// Functions
	// Function /Script/GameplayInteractionsModule.AITask_UseGameplayInteraction.UseSmartObjectWithGameplayInteraction
	// class UAITask_UseGameplayInteraction* UseSmartObjectWithGameplayInteraction(class AAIController* Controller, FSmartObjectClaimHandle ClaimHandle, bool bLockAILogic); // [0x82ac990] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayInteractionsModule.AITask_UseGameplayInteraction.RequestAbort
	// void RequestAbort();                                                                                                     // [0x82ac97c] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayInteractionsModule.AITask_UseGameplayInteraction.MoveToAndUseSmartObjectWithGameplayInteraction
	// class UAITask_UseGameplayInteraction* MoveToAndUseSmartObjectWithGameplayInteraction(class AAIController* Controller, FSmartObjectClaimHandle ClaimHandle, bool bLockAILogic); // [0x82ac528] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameplayInteractionsModule.GameplayInteractionStateTreeSchema
/// Size: 0x0020 (0x000028 - 0x000048)
class UGameplayInteractionStateTreeSchema : public UStateTreeSchema
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(class UClass*)                             ContextActorClass                                           OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(class UClass*)                             SmartObjectActorClass                                       OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(TArray<FStateTreeExternalDataDesc>)        ContextDataDescs                                            OFFSET(get<T>, {0x38, 16, 0, 0})
};

/// Class /Script/GameplayInteractionsModule.StateTreeTask_PlayContextualAnim_InstanceData
/// Size: 0x0078 (0x000028 - 0x0000A0)
class UStateTreeTask_PlayContextualAnim_InstanceData : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	CMember(class AActor*)                             PrimaryActor                                                OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(class AActor*)                             SecondaryActor                                              OFFSET(get<T>, {0x30, 8, 0, 0})
	SMember(FName)                                     SecondaryRole                                               OFFSET(getStruct<T>, {0x38, 4, 0, 0})
	CMember(class AActor*)                             TertiaryActor                                               OFFSET(get<T>, {0x40, 8, 0, 0})
	SMember(FName)                                     TertiaryRole                                                OFFSET(getStruct<T>, {0x48, 4, 0, 0})
	CMember(class UContextualAnimSceneAsset*)          SceneAsset                                                  OFFSET(get<T>, {0x50, 8, 0, 0})
	SMember(FName)                                     SectionName                                                 OFFSET(getStruct<T>, {0x58, 4, 0, 0})
	CMember(EPlayContextualAnimExecutionMethod)        ExecutionMethod                                             OFFSET(get<T>, {0x5C, 1, 0, 0})
	DMember(bool)                                      bWaitForNotifyEventToEnd                                    OFFSET(get<bool>, {0x5D, 1, 0, 0})
	SMember(FName)                                     NotifyEventNameToEnd                                        OFFSET(getStruct<T>, {0x60, 4, 0, 0})
	DMember(int32_t)                                   LoopsToRun                                                  OFFSET(get<int32_t>, {0x64, 4, 0, 0})
	DMember(bool)                                      bLoopForever                                                OFFSET(get<bool>, {0x68, 1, 0, 0})
	DMember(float)                                     DelayBetweenLoops                                           OFFSET(get<float>, {0x6C, 4, 0, 0})
	DMember(float)                                     RandomDeviationBetweenLoops                                 OFFSET(get<float>, {0x70, 4, 0, 0})
	CMember(TArray<FContextualAnimWarpTarget>)         WarpTargets                                                 OFFSET(get<T>, {0x78, 16, 0, 0})


	/// Functions
	// Function /Script/GameplayInteractionsModule.StateTreeTask_PlayContextualAnim_InstanceData.OnNotifyBeginReceived
	// void OnNotifyBeginReceived(FName NotifyName, FBranchingPointNotifyPayload& BranchingPointNotifyPayload);                 // [0x82ac854] Final|Native|Public|HasOutParms 
	// Function /Script/GameplayInteractionsModule.StateTreeTask_PlayContextualAnim_InstanceData.OnMontageEnded
	// void OnMontageEnded(class UAnimMontage* EndedMontage, bool bInterrupted);                                                // [0x82ac714] Final|Native|Public  
};

/// Struct /Script/GameplayInteractionsModule.GameplayInteractionContext
/// Size: 0x0068 (0x000000 - 0x000068)
class FGameplayInteractionContext : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FStateTreeInstanceData)                    StateTreeInstanceData                                       OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FSmartObjectClaimHandle)                   ClaimedHandle                                               OFFSET(getStruct<T>, {0x10, 32, 0, 0})
	SMember(FSmartObjectSlotEntranceHandle)            SlotEntranceHandle                                          OFFSET(getStruct<T>, {0x30, 24, 0, 0})
	SMember(FGameplayInteractionAbortContext)          AbortContext                                                OFFSET(getStruct<T>, {0x48, 1, 0, 0})
	CMember(class AActor*)                             ContextActor                                                OFFSET(get<T>, {0x50, 8, 0, 0})
	CMember(class AActor*)                             SmartObjectActor                                            OFFSET(get<T>, {0x58, 8, 0, 0})
	CMember(class UGameplayInteractionSmartObjectBehaviorDefinition*) Definition                                   OFFSET(get<T>, {0x60, 8, 0, 0})
};

/// Struct /Script/GameplayInteractionsModule.GameplayInteractionAbortContext
/// Size: 0x0001 (0x000000 - 0x000001)
class FGameplayInteractionAbortContext : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
	CMember(EGameplayInteractionAbortReason)           Reason                                                      OFFSET(get<T>, {0x0, 1, 0, 0})
};

/// Struct /Script/GameplayInteractionsModule.GameplayInteractionSlotUserData
/// Size: 0x0007 (0x000001 - 0x000008)
class FGameplayInteractionSlotUserData : public FSmartObjectSlotStateData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/GameplayInteractionsModule.GameplayInteractionStateTreeTask
/// Size: 0x0000 (0x000020 - 0x000020)
class FGameplayInteractionStateTreeTask : public FStateTreeTaskBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/GameplayInteractionsModule.GameplayInteractionStateTreeCondition
/// Size: 0x0000 (0x000020 - 0x000020)
class FGameplayInteractionStateTreeCondition : public FStateTreeConditionBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/GameplayInteractionsModule.GameplayInteractionMatchSlotTagsConditionInstanceData
/// Size: 0x0030 (0x000000 - 0x000030)
class FGameplayInteractionMatchSlotTagsConditionInstanceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FSmartObjectSlotHandle)                    Slot                                                        OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FGameplayTagContainer)                     TagsToMatch                                                 OFFSET(getStruct<T>, {0x10, 32, 0, 0})
};

/// Struct /Script/GameplayInteractionsModule.GameplayInteractionSlotTagsMatchCondition
/// Size: 0x0010 (0x000020 - 0x000030)
class FGameplayInteractionSlotTagsMatchCondition : public FGameplayInteractionStateTreeCondition
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(EGameplayInteractionMatchSlotTagSource)    Source                                                      OFFSET(get<T>, {0x20, 1, 0, 0})
	CMember(EGameplayContainerMatchType)               MatchType                                                   OFFSET(get<T>, {0x21, 1, 0, 0})
	DMember(bool)                                      bExactMatch                                                 OFFSET(get<bool>, {0x22, 1, 0, 0})
	DMember(bool)                                      bInvert                                                     OFFSET(get<bool>, {0x23, 1, 0, 0})
};

/// Struct /Script/GameplayInteractionsModule.GameplayInteractionQuerySlotTagsConditionInstanceData
/// Size: 0x0010 (0x000000 - 0x000010)
class FGameplayInteractionQuerySlotTagsConditionInstanceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FSmartObjectSlotHandle)                    Slot                                                        OFFSET(getStruct<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/GameplayInteractionsModule.GameplayInteractionQuerySlotTagCondition
/// Size: 0x0058 (0x000020 - 0x000078)
class FGameplayInteractionQuerySlotTagCondition : public FGameplayInteractionStateTreeCondition
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	CMember(EGameplayInteractionMatchSlotTagSource)    Source                                                      OFFSET(get<T>, {0x20, 1, 0, 0})
	SMember(FGameplayTagQuery)                         TagQuery                                                    OFFSET(getStruct<T>, {0x28, 72, 0, 0})
	DMember(bool)                                      bInvert                                                     OFFSET(get<bool>, {0x70, 1, 0, 0})
};

/// Struct /Script/GameplayInteractionsModule.GameplayInteractionIsSlotHandleValidConditionInstanceData
/// Size: 0x0010 (0x000000 - 0x000010)
class FGameplayInteractionIsSlotHandleValidConditionInstanceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FSmartObjectSlotHandle)                    Slot                                                        OFFSET(getStruct<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/GameplayInteractionsModule.GameplayInteractionIsSlotHandleValidCondition
/// Size: 0x0008 (0x000020 - 0x000028)
class FGameplayInteractionIsSlotHandleValidCondition : public FGameplayInteractionStateTreeCondition
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(bool)                                      bInvert                                                     OFFSET(get<bool>, {0x20, 1, 0, 0})
};

/// Struct /Script/GameplayInteractionsModule.GameplayInteractionFindSlotTaskInstanceData
/// Size: 0x0020 (0x000000 - 0x000020)
class FGameplayInteractionFindSlotTaskInstanceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FSmartObjectSlotHandle)                    ReferenceSlot                                               OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FSmartObjectSlotHandle)                    ResultSlot                                                  OFFSET(getStruct<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/GameplayInteractionsModule.GameplayInteractionFindSlotTask
/// Size: 0x0010 (0x000020 - 0x000030)
class FGameplayInteractionFindSlotTask : public FGameplayInteractionStateTreeTask
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(EGameplayInteractionSlotReferenceType)     ReferenceType                                               OFFSET(get<T>, {0x20, 1, 0, 0})
	SMember(FGameplayTag)                              FindByTag                                                   OFFSET(getStruct<T>, {0x24, 4, 0, 0})
};

/// Struct /Script/GameplayInteractionsModule.GameplayInteractionGetSlotActorTaskInstanceData
/// Size: 0x0018 (0x000000 - 0x000018)
class FGameplayInteractionGetSlotActorTaskInstanceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FSmartObjectSlotHandle)                    TargetSlot                                                  OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	CMember(class AActor*)                             ResultActor                                                 OFFSET(get<T>, {0x10, 8, 0, 0})
};

/// Struct /Script/GameplayInteractionsModule.GameplayInteractionGetSlotActorTask
/// Size: 0x0008 (0x000020 - 0x000028)
class FGameplayInteractionGetSlotActorTask : public FGameplayInteractionStateTreeTask
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(bool)                                      bFailIfNotFound                                             OFFSET(get<bool>, {0x20, 1, 0, 0})
};

/// Struct /Script/GameplayInteractionsModule.GameplayInteractionListenSlotEventsTaskInstanceData
/// Size: 0x0018 (0x000000 - 0x000018)
class FGameplayInteractionListenSlotEventsTaskInstanceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FSmartObjectSlotHandle)                    TargetSlot                                                  OFFSET(getStruct<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/GameplayInteractionsModule.GameplayInteractionListenSlotEventsTask
/// Size: 0x0008 (0x000020 - 0x000028)
class FGameplayInteractionListenSlotEventsTask : public FGameplayInteractionStateTreeTask
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Struct /Script/GameplayInteractionsModule.GameplayInteractionModifySlotTagTaskInstanceData
/// Size: 0x0018 (0x000000 - 0x000018)
class FGameplayInteractionModifySlotTagTaskInstanceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FSmartObjectSlotHandle)                    TargetSlot                                                  OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	DMember(bool)                                      bTagRemoved                                                 OFFSET(get<bool>, {0x10, 1, 0, 0})
};

/// Struct /Script/GameplayInteractionsModule.GameplayInteractionModifySlotTagTask
/// Size: 0x0010 (0x000020 - 0x000030)
class FGameplayInteractionModifySlotTagTask : public FGameplayInteractionStateTreeTask
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(EGameplayInteractionTaskModify)            Modify                                                      OFFSET(get<T>, {0x20, 1, 0, 0})
	DMember(bool)                                      bHandleExternalStopAsFailure                                OFFSET(get<bool>, {0x21, 1, 0, 0})
	CMember(EGameplayInteractionModifyGameplayTagOperation) Operation                                              OFFSET(get<T>, {0x22, 1, 0, 0})
	SMember(FGameplayTag)                              tag                                                         OFFSET(getStruct<T>, {0x24, 4, 0, 0})
};

/// Struct /Script/GameplayInteractionsModule.GameplayInteractionSendSlotEventTaskInstanceData
/// Size: 0x0010 (0x000000 - 0x000010)
class FGameplayInteractionSendSlotEventTaskInstanceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FSmartObjectSlotHandle)                    TargetSlot                                                  OFFSET(getStruct<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/GameplayInteractionsModule.GameplayInteractionSendSlotEventTask
/// Size: 0x0028 (0x000020 - 0x000048)
class FGameplayInteractionSendSlotEventTask : public FGameplayInteractionStateTreeTask
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FGameplayTag)                              EventTag                                                    OFFSET(getStruct<T>, {0x20, 4, 0, 0})
	SMember(FInstancedStruct)                          Payload                                                     OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	CMember(EGameplayInteractionTaskTrigger)           Trigger                                                     OFFSET(get<T>, {0x38, 1, 0, 0})
	DMember(bool)                                      bHandleExternalStopAsFailure                                OFFSET(get<bool>, {0x39, 1, 0, 0})
	DMember(bool)                                      bShouldTriggerOnReselect                                    OFFSET(get<bool>, {0x3A, 1, 0, 0})
};

/// Struct /Script/GameplayInteractionsModule.GameplayInteractionSetSlotEnabledInstanceData
/// Size: 0x0018 (0x000000 - 0x000018)
class FGameplayInteractionSetSlotEnabledInstanceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FSmartObjectSlotHandle)                    TargetSlot                                                  OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	DMember(bool)                                      bInitialState                                               OFFSET(get<bool>, {0x10, 1, 0, 0})
};

/// Struct /Script/GameplayInteractionsModule.GameplayInteractionSetSlotEnabledTask
/// Size: 0x0010 (0x000020 - 0x000030)
class FGameplayInteractionSetSlotEnabledTask : public FGameplayInteractionStateTreeTask
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(EGameplayInteractionTaskModify)            Modify                                                      OFFSET(get<T>, {0x20, 1, 0, 0})
	DMember(bool)                                      bHandleExternalStopAsFailure                                OFFSET(get<bool>, {0x21, 1, 0, 0})
	DMember(bool)                                      bEnableSlot                                                 OFFSET(get<bool>, {0x22, 1, 0, 0})
};

/// Struct /Script/GameplayInteractionsModule.GameplayInteractionSyncSlotTagStateInstanceData
/// Size: 0x0020 (0x000000 - 0x000020)
class FGameplayInteractionSyncSlotTagStateInstanceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FSmartObjectSlotHandle)                    TargetSlot                                                  OFFSET(getStruct<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/GameplayInteractionsModule.GameplayInteractionSyncSlotTagStateTask
/// Size: 0x0010 (0x000020 - 0x000030)
class FGameplayInteractionSyncSlotTagStateTask : public FGameplayInteractionStateTreeTask
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FGameplayTag)                              TagToMonitor                                                OFFSET(getStruct<T>, {0x20, 4, 0, 0})
	SMember(FGameplayTag)                              BreakEventTag                                               OFFSET(getStruct<T>, {0x24, 4, 0, 0})
};

/// Struct /Script/GameplayInteractionsModule.GameplayInteractionSyncSlotTagTransitionInstanceData
/// Size: 0x0020 (0x000000 - 0x000020)
class FGameplayInteractionSyncSlotTagTransitionInstanceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FSmartObjectSlotHandle)                    TargetSlot                                                  OFFSET(getStruct<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/GameplayInteractionsModule.GameplayInteractionSyncSlotTagTransitionTask
/// Size: 0x0018 (0x000020 - 0x000038)
class FGameplayInteractionSyncSlotTagTransitionTask : public FGameplayInteractionStateTreeTask
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FGameplayTag)                              TransitionFromTag                                           OFFSET(getStruct<T>, {0x20, 4, 0, 0})
	SMember(FGameplayTag)                              TransitionToTag                                             OFFSET(getStruct<T>, {0x24, 4, 0, 0})
	SMember(FGameplayTag)                              TransitionEventTag                                          OFFSET(getStruct<T>, {0x28, 4, 0, 0})
};

/// Struct /Script/GameplayInteractionsModule.PlayMontageStateTreeTaskInstanceData
/// Size: 0x0010 (0x000000 - 0x000010)
class FPlayMontageStateTreeTaskInstanceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class AActor*)                             Actor                                                       OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(float)                                     ComputedDuration                                            OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     Time                                                        OFFSET(get<float>, {0xC, 4, 0, 0})
};

/// Struct /Script/GameplayInteractionsModule.PlayMontageStateTreeTask
/// Size: 0x0008 (0x000020 - 0x000028)
class FPlayMontageStateTreeTask : public FGameplayInteractionStateTreeTask
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(class UAnimMontage*)                       Montage                                                     OFFSET(get<T>, {0x20, 8, 0, 0})
};

/// Struct /Script/GameplayInteractionsModule.StateTreeTask_FindSlotEntranceLocation_InstanceData
/// Size: 0x00A0 (0x000000 - 0x0000A0)
class FStateTreeTask_FindSlotEntranceLocation_InstanceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	CMember(class AActor*)                             UserActor                                                   OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FSmartObjectSlotHandle)                    ReferenceSlot                                               OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	SMember(FTransform)                                EntryTransform                                              OFFSET(getStruct<T>, {0x20, 96, 0, 0})
	SMember(FGameplayTagContainer)                     EntranceTags                                                OFFSET(getStruct<T>, {0x80, 32, 0, 0})
};

/// Struct /Script/GameplayInteractionsModule.StateTreeTask_FindSlotEntranceLocation
/// Size: 0x0018 (0x000020 - 0x000038)
class FStateTreeTask_FindSlotEntranceLocation : public FGameplayInteractionStateTreeTask
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FSmartObjectSlotEntrySelectionMethod)      SelectMethod                                                OFFSET(getStruct<T>, {0x20, 1, 0, 0})
	DMember(bool)                                      bProjectNavigationLocation                                  OFFSET(get<bool>, {0x21, 1, 0, 0})
	DMember(bool)                                      bTraceGroundLocation                                        OFFSET(get<bool>, {0x22, 1, 0, 0})
	DMember(bool)                                      bCheckTransitionTrajectory                                  OFFSET(get<bool>, {0x23, 1, 0, 0})
	DMember(bool)                                      bCheckEntranceLocationOverlap                               OFFSET(get<bool>, {0x24, 1, 0, 0})
	DMember(bool)                                      bCheckSlotLocationOverlap                                   OFFSET(get<bool>, {0x25, 1, 0, 0})
	DMember(bool)                                      bUseSlotLocationAsFallbackCandidate                         OFFSET(get<bool>, {0x26, 1, 0, 0})
	CMember(ESmartObjectSlotNavigationLocationType)    LocationType                                                OFFSET(get<T>, {0x27, 1, 0, 0})
	CMember(class UClass*)                             ValidationFilter                                            OFFSET(get<T>, {0x28, 8, 0, 0})
};

/// Struct /Script/GameplayInteractionsModule.StateTreeTask_GetSlotEntranceLocation_InstanceData
/// Size: 0x0038 (0x000000 - 0x000038)
class FStateTreeTask_GetSlotEntranceLocation_InstanceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FSmartObjectSlotEntranceHandle)            SlotEntranceHandle                                          OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FGameplayTagContainer)                     EntranceTags                                                OFFSET(getStruct<T>, {0x18, 32, 0, 0})
};

/// Struct /Script/GameplayInteractionsModule.StateTreeTask_GetSlotEntranceLocation
/// Size: 0x0008 (0x000020 - 0x000028)
class FStateTreeTask_GetSlotEntranceLocation : public FGameplayInteractionStateTreeTask
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Struct /Script/GameplayInteractionsModule.StateTreeTask_PlayContextualAnim
/// Size: 0x0000 (0x000020 - 0x000020)
class FStateTreeTask_PlayContextualAnim : public FStateTreeTaskCommonBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

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

