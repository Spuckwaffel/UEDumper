
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: GameplayEventRouter

/// Class /Script/DataDrivenGameplayEventRouter.GameplayEventLegacyBroadcast
/// Size: 0x0000 (0x000028 - 0x000028)
class UGameplayEventLegacyBroadcast : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/DataDrivenGameplayEventRouter.GameplayEventDescriptorLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UGameplayEventDescriptorLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/DataDrivenGameplayEventRouter.GameplayEventDescriptorLibrary.BroadcastEvent
	// bool BroadcastEvent(FGameplayEventDescriptor& EventDescriptor, class UObject* EventContext, int32_t& Event, class UClass* EventRouterScope, class AActor* RouterContextActor); // [0x1aa6d8c] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
};

/// Struct /Script/DataDrivenGameplayEventRouter.GameplayEventDefinition
/// Size: 0x0010 (0x000000 - 0x000010)
class FGameplayEventDefinition : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class UScriptStruct*)                      EventType                                                   OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(bool)                                      bIsStateful                                                 OFFSET(get<bool>, {0x8, 1, 0, 0})
	CMember(EGameplayEventNetPolicy)                   NetPolicy                                                   OFFSET(get<T>, {0x9, 1, 0, 0})
};

/// Struct /Script/DataDrivenGameplayEventRouter.GameplayEventDescriptor
/// Size: 0x0008 (0x000000 - 0x000008)
class FGameplayEventDescriptor : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/DataDrivenGameplayEventRouter.GameplayEventSubscription
/// Size: 0x0070 (0x000000 - 0x000070)
class FGameplayEventSubscription : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	CMember(TWeakObjectPtr<UObject*>)                  Object                                                      OFFSET(get<T>, {0x0, 32, 0, 0})
	SMember(FMemberReference)                          EventDescriptor                                             OFFSET(getStruct<T>, {0x20, 48, 0, 0})
	SMember(FGameplayEventListenerHandle)              EventHandle                                                 OFFSET(getStruct<T>, {0x50, 28, 0, 0})
};

/// Struct /Script/DataDrivenGameplayEventRouter.GameplayEventHandlerFunction
/// Size: 0x0080 (0x000000 - 0x000080)
class FGameplayEventHandlerFunction : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FMemberReference)                          EventHandlerFunction                                        OFFSET(getStruct<T>, {0x0, 48, 0, 0})
	CMember(TMap<FName, FString>)                      EventHandlerFunctionDefaultValues                           OFFSET(get<T>, {0x30, 80, 0, 0})
};

/// Struct /Script/DataDrivenGameplayEventRouter.GameplayEventHandlerFunctions
/// Size: 0x0180 (0x000000 - 0x000180)
class FGameplayEventHandlerFunctions : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 384;

public:
	SMember(FGameplayEventHandlerFunction)             OnEventReceived                                             OFFSET(getStruct<T>, {0x0, 128, 0, 0})
	SMember(FGameplayEventHandlerFunction)             OnStatefulEventApplied                                      OFFSET(getStruct<T>, {0x80, 128, 0, 0})
	SMember(FGameplayEventHandlerFunction)             OnStatefulEventCleared                                      OFFSET(getStruct<T>, {0x100, 128, 0, 0})
};

/// Struct /Script/DataDrivenGameplayEventRouter.GameplayEventFunction
/// Size: 0x0018 (0x000000 - 0x000018)
class FGameplayEventFunction : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(TArray<FGameplayEventSubscription>)        EventSubscriptions                                          OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Enum /Script/DataDrivenGameplayEventRouter.EGameplayEventNetPolicy
/// Size: 0x02
enum class EGameplayEventNetPolicy : uint8_t
{
	EGameplayEventNetPolicy__ServerOnly                                              = 0,
	EGameplayEventNetPolicy__ClientOrServer                                          = 1
};

