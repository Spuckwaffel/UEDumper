
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: GameplayEventRouter

/// Enum /Script/DataDrivenGameplayEventRouter.EGameplayEventNetPolicy
/// Size: 0x03
enum class EGameplayEventNetPolicy : uint8_t
{
	EGameplayEventNetPolicy__ServerOnly                                              = 0,
	EGameplayEventNetPolicy__ClientOrServer                                          = 1,
	EGameplayEventNetPolicy__EGameplayEventNetPolicy_MAX                             = 2
};

/// Class /Script/DataDrivenGameplayEventRouter.GameplayEventLegacyBroadcast
/// Size: 0x0000 (0x000028 - 0x000028)
class UGameplayEventLegacyBroadcast : public UInterface
{ 
public:
};

/// Class /Script/DataDrivenGameplayEventRouter.GameplayEventDescriptorLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UGameplayEventDescriptorLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/DataDrivenGameplayEventRouter.GameplayEventDescriptorLibrary.BroadcastEvent
	// bool BroadcastEvent(FGameplayEventDescriptor& EventDescriptor, class UObject* EventContext, int32_t& Event, class UClass* EventRouterScope, class AActor* RouterContextActor); // [0x2f95534] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
};

/// Struct /Script/DataDrivenGameplayEventRouter.GameplayEventDefinition
/// Size: 0x0010 (0x000000 - 0x000010)
struct FGameplayEventDefinition
{ 
	class UScriptStruct*                               EventType;                                                  // 0x0000   (0x0008)  
	bool                                               bIsStateful;                                                // 0x0008   (0x0001)  
	EGameplayEventNetPolicy                            NetPolicy;                                                  // 0x0009   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x000A   (0x0006)  MISSED
};

/// Struct /Script/DataDrivenGameplayEventRouter.GameplayEventDescriptor
/// Size: 0x0008 (0x000000 - 0x000008)
struct FGameplayEventDescriptor
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/DataDrivenGameplayEventRouter.GameplayEventSubscription
/// Size: 0x0070 (0x000000 - 0x000070)
struct FGameplayEventSubscription
{ 
	SDK_UNDEFINED(32,12785) /* TWeakObjectPtr<UObject*> */ __um(Object);                                           // 0x0000   (0x0020)  
	FMemberReference                                   EventDescriptor;                                            // 0x0020   (0x0030)  
	FGameplayEventListenerHandle                       EventHandle;                                                // 0x0050   (0x001C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x006C   (0x0004)  MISSED
};

/// Struct /Script/DataDrivenGameplayEventRouter.GameplayEventHandlerFunction
/// Size: 0x0080 (0x000000 - 0x000080)
struct FGameplayEventHandlerFunction
{ 
	FMemberReference                                   EventHandlerFunction;                                       // 0x0000   (0x0030)  
	SDK_UNDEFINED(80,12786) /* TMap<FName, FString> */ __um(EventHandlerFunctionDefaultValues);                    // 0x0030   (0x0050)  
};

/// Struct /Script/DataDrivenGameplayEventRouter.GameplayEventHandlerFunctions
/// Size: 0x0180 (0x000000 - 0x000180)
struct FGameplayEventHandlerFunctions
{ 
	FGameplayEventHandlerFunction                      OnEventReceived;                                            // 0x0000   (0x0080)  
	FGameplayEventHandlerFunction                      OnStatefulEventApplied;                                     // 0x0080   (0x0080)  
	FGameplayEventHandlerFunction                      OnStatefulEventCleared;                                     // 0x0100   (0x0080)  
};

/// Struct /Script/DataDrivenGameplayEventRouter.GameplayEventFunction
/// Size: 0x0018 (0x000000 - 0x000018)
struct FGameplayEventFunction
{ 
	TArray<FGameplayEventSubscription>                 EventSubscriptions;                                         // 0x0008   (0x0010)  
};

