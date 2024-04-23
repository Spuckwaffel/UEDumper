
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/GameplayEventRouter.AsyncAction_StartListeningToEvent
/// Size: 0x0088 (0x000030 - 0x0000B8)
class UAsyncAction_StartListeningToEvent : public UBlueprintAsyncActionBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	SMember(FMulticastInlineDelegate)                  OnEventReceived                                             OFFSET(getStruct<T>, {0x30, 16, 0, 0})


	/// Functions
	// Function /Script/GameplayEventRouter.AsyncAction_StartListeningToEvent.StopListeningToEvent
	// void StopListeningToEvent();                                                                                             // [0x329b518] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayEventRouter.AsyncAction_StartListeningToEvent.StartListeningToEventBackwardCompatible
	// class UAsyncAction_StartListeningToEvent* StartListeningToEventBackwardCompatible(class UObject* WorldContextObject, FEventMessageTag Channel, class UGameplayEventRouterComponent* Target, class UScriptStruct* EventType, class UObject* Context, EEventBubblingRule EventBubblingRule); // [0x739d858] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayEventRouter.AsyncAction_StartListeningToEvent.StartListeningToEvent
	// class UAsyncAction_StartListeningToEvent* StartListeningToEvent(class UObject* WorldContextObject, class UGameplayEventRouterComponent* Target, class UScriptStruct* EventType, class UObject* Context, EEventBubblingRule EventBubblingRule); // [0x341ba34] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayEventRouter.AsyncAction_StartListeningToEvent.GetPayload
	// bool GetPayload(int32_t& OutPayload);                                                                                    // [0x3895238] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/GameplayEventRouter.AsyncAction_StartListeningToStatefulEvent
/// Size: 0x00A8 (0x000030 - 0x0000D8)
class UAsyncAction_StartListeningToStatefulEvent : public UBlueprintAsyncActionBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	SMember(FMulticastInlineDelegate)                  OnEventReceived                                             OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnSavedEventStateExists                                     OFFSET(getStruct<T>, {0x40, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnEventStateCleared                                         OFFSET(getStruct<T>, {0x50, 16, 0, 0})


	/// Functions
	// Function /Script/GameplayEventRouter.AsyncAction_StartListeningToStatefulEvent.StopListeningToStatefulEvent
	// void StopListeningToStatefulEvent();                                                                                     // [0x329b518] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayEventRouter.AsyncAction_StartListeningToStatefulEvent.StartListeningToStatefulEventBackwardsCompatible
	// class UAsyncAction_StartListeningToStatefulEvent* StartListeningToStatefulEventBackwardsCompatible(class UObject* WorldContextObject, FEventMessageTag Channel, class UGameplayEventRouterComponent* Target, class UScriptStruct* EventType, class UObject* Context, EEventBubblingRule EventBubblingRule); // [0x739da18] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayEventRouter.AsyncAction_StartListeningToStatefulEvent.StartListeningToStatefulEvent
	// class UAsyncAction_StartListeningToStatefulEvent* StartListeningToStatefulEvent(class UObject* WorldContextObject, class UGameplayEventRouterComponent* Target, class UScriptStruct* EventType, class UObject* Context, EEventBubblingRule EventBubblingRule); // [0x341b660] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayEventRouter.AsyncAction_StartListeningToStatefulEvent.GetPayload
	// bool GetPayload(int32_t& OutPayload);                                                                                    // [0x33c46b4] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/GameplayEventRouter.GameplayEventRouterComponent
/// Size: 0x0238 (0x0000A0 - 0x0002D8)
class UGameplayEventRouterComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 728;

public:


	/// Functions
	// Function /Script/GameplayEventRouter.GameplayEventRouterComponent.StopListeningToEvent
	// void StopListeningToEvent(FGameplayEventListenerHandle& HandleToRemove);                                                 // [0x739dbd8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameplayEventRouter.GameplayEventRouterComponent.K2_BroadcastStatefulEvent
	// bool K2_BroadcastStatefulEvent(int32_t& EventData, class UObject* EventContext);                                         // [0x739d4c8] Final|Native|Protected|HasOutParms|BlueprintCallable 
	// Function /Script/GameplayEventRouter.GameplayEventRouterComponent.K2_BroadcastEvent
	// bool K2_BroadcastEvent(int32_t& EventData, class UObject* EventContext);                                                 // [0x739d138] Final|Native|Protected|HasOutParms|BlueprintCallable 
	// Function /Script/GameplayEventRouter.GameplayEventRouterComponent.HasValidEventState
	// bool HasValidEventState(class UScriptStruct* EventType, class UObject* Context);                                         // [0x739cf0c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayEventRouter.GameplayEventRouterComponent.ClearEventStateByContext
	// void ClearEventStateByContext(class UScriptStruct* EventType, class UObject* Context);                                   // [0x739cc74] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayEventRouter.GameplayEventRouterComponent.ClearEventState
	// void ClearEventState(class UScriptStruct* EventType);                                                                    // [0x739c97c] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/GameplayEventRouter.GameplayEventRouterOwnerInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UGameplayEventRouterOwnerInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/GameplayEventRouter.GameplayEventRouterOwnerInterface.GetEventRouterClass
	// class UClass* GetEventRouterClass();                                                                                     // [0x1e05a28] Native|Event|Protected|BlueprintEvent|Const 
};

/// Class /Script/GameplayEventRouter.GameplayEventRouterSubsystem
/// Size: 0x0168 (0x000030 - 0x000198)
class UGameplayEventRouterSubsystem : public UGameInstanceSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 408;

public:
	CMember(TArray<FGameplayEventGlobalRouterPendingListenerData>) PendingGlobalRouterListenerDatas                OFFSET(get<T>, {0x188, 16, 0, 0})


	/// Functions
	// Function /Script/GameplayEventRouter.GameplayEventRouterSubsystem.K2_BroadcastStatefulEventBackwardCompatible
	// bool K2_BroadcastStatefulEventBackwardCompatible(class UObject* WorldContextObject, class UGameplayEventRouterComponent* Target, FEventMessageTag Channel, int32_t& EventData, class UObject* EventContext); // [0x739d5d4] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameplayEventRouter.GameplayEventRouterSubsystem.K2_BroadcastEventBackwardCompatible
	// bool K2_BroadcastEventBackwardCompatible(class UObject* WorldContextObject, class UGameplayEventRouterComponent* Target, FEventMessageTag Channel, int32_t& EventData, class UObject* EventContext); // [0x739d244] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameplayEventRouter.GameplayEventRouterSubsystem.GetGlobalEventRouter
	// class UGameplayEventRouterComponent* GetGlobalEventRouter(class UObject* WorldContextObject);                            // [0x1e05a84] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayEventRouter.GameplayEventRouterSubsystem.GetEventRouter
	// class UGameplayEventRouterComponent* GetEventRouter(class UClass* Scope, class AActor* ContextActor);                    // [0x379d438] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayEventRouter.GameplayEventRouterSubsystem.ClearEventStateByContextBackwardCompatible
	// void ClearEventStateByContextBackwardCompatible(class UObject* WorldContextObject, FEventMessageTag Channel, class UGameplayEventRouterComponent* Target, class UScriptStruct* EventType, class UObject* Context); // [0x739cd38] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayEventRouter.GameplayEventRouterSubsystem.ClearEventStateBackwardCompatible
	// void ClearEventStateBackwardCompatible(class UObject* WorldContextObject, FEventMessageTag Channel, class UGameplayEventRouterComponent* Target, class UScriptStruct* EventType); // [0x739ca74] Final|Native|Static|Public|BlueprintCallable 
};

/// Struct /Script/GameplayEventRouter.GameplayEventId
/// Size: 0x0010 (0x000000 - 0x000010)
class FGameplayEventId : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/GameplayEventRouter.GameplayEventListenerHandle
/// Size: 0x001C (0x000000 - 0x00001C)
class FGameplayEventListenerHandle : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 28;

public:
	DMember(int32_t)                                   Handle                                                      OFFSET(get<int32_t>, {0x10, 4, 0, 0})
};

/// Struct /Script/GameplayEventRouter.GameplayEventListenerBackwardCompatibleHandle
/// Size: 0x0048 (0x000000 - 0x000048)
class FGameplayEventListenerBackwardCompatibleHandle : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Struct /Script/GameplayEventRouter.GameplayEventListenerData
/// Size: 0x00F0 (0x000000 - 0x0000F0)
class FGameplayEventListenerData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	CMember(class UScriptStruct*)                      EventType                                                   OFFSET(get<T>, {0xC0, 8, 0, 0})
	CMember(class UObject*)                            EventContext                                                OFFSET(get<T>, {0xC8, 8, 0, 0})
};

/// Struct /Script/GameplayEventRouter.GameplayEventListenerList
/// Size: 0x0038 (0x000000 - 0x000038)
class FGameplayEventListenerList : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Struct /Script/GameplayEventRouter.GameplayEventGlobalRouterPendingListenerData
/// Size: 0x00F0 (0x000000 - 0x0000F0)
class FGameplayEventGlobalRouterPendingListenerData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	CMember(class UScriptStruct*)                      EventType                                                   OFFSET(get<T>, {0xE0, 8, 0, 0})
	CMember(class UObject*)                            EventContext                                                OFFSET(get<T>, {0xE8, 8, 0, 0})
};

/// Enum /Script/GameplayEventRouter.EEventBubblingRule
/// Size: 0x04
enum class EEventBubblingRule : uint8_t
{
	EEventBubblingRule__None                                                         = 0,
	EEventBubblingRule__Down                                                         = 1,
	EEventBubblingRule__Up                                                           = 2,
	EEventBubblingRule__EEventBubblingRule_MAX                                       = 3
};

