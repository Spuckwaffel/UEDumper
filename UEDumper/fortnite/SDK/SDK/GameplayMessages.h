
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: GameplayTags

/// Enum /Script/GameplayMessages.EGameplayMessageMatchType
/// Size: 0x03
enum class EGameplayMessageMatchType : uint8_t
{
	EGameplayMessageMatchType__ExactMatch                                            = 0,
	EGameplayMessageMatchType__PartialMatch                                          = 1,
	EGameplayMessageMatchType__EGameplayMessageMatchType_MAX                         = 2
};

/// Class /Script/GameplayMessages.AsyncAction_RegisterGameplayMessageReceiver
/// Size: 0x0068 (0x000030 - 0x000098)
class UAsyncAction_RegisterGameplayMessageReceiver : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,2307) /* FMulticastInlineDelegate */ __um(OnMessageReceived);                                 // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,2308) /* FMulticastInlineDelegate */ __um(HandleSavedState);                                  // 0x0040   (0x0010)  
	SDK_UNDEFINED(16,2309) /* FMulticastInlineDelegate */ __um(HandleStateCleared);                                // 0x0050   (0x0010)  
	unsigned char                                      UnknownData00_6[0x38];                                      // 0x0060   (0x0038)  MISSED


	/// Functions
	// Function /Script/GameplayMessages.AsyncAction_RegisterGameplayMessageReceiver.Unregister
	// void Unregister();                                                                                                    // [0x35bd900] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayMessages.AsyncAction_RegisterGameplayMessageReceiver.RegisterGameplayMessageReceiver
	// class UAsyncAction_RegisterGameplayMessageReceiver* RegisterGameplayMessageReceiver(class UObject* WorldContextObject, FEventMessageTag Channel, class UScriptStruct* PayloadType, EGameplayMessageMatchType MatchType, class AActor* ActorContext); // [0x6faf218] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayMessages.AsyncAction_RegisterGameplayMessageReceiver.GetPayload
	// bool GetPayload(int32_t& OutPayload);                                                                                 // [0x6fae930] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/GameplayMessages.GameplayMessageReplicator
/// Size: 0x0000 (0x000290 - 0x000290)
class AGameplayMessageReplicator : public AActor
{ 
public:


	/// Functions
	// Function /Script/GameplayMessages.GameplayMessageReplicator.Multicast_ServerMessageTriggered
	// void Multicast_ServerMessageTriggered(FEventMessageTag Channel, FReplicatedMessage MessageData);                      // [0x6faeff8] Final|Net|NetReliableNative|Event|NetMulticast|Private 
};

/// Class /Script/GameplayMessages.GameplayMessageRouter
/// Size: 0x00A8 (0x000030 - 0x0000D8)
class UGameplayMessageRouter : public UGameInstanceSubsystem
{ 
public:
	unsigned char                                      UnknownData00_3[0xA0];                                      // 0x0030   (0x00A0)  MISSED
	class AGameplayMessageReplicator*                  MessageReplicator;                                          // 0x00D0   (0x0008)  


	/// Functions
	// Function /Script/GameplayMessages.GameplayMessageRouter.K2_BroadcastMessage
	// void K2_BroadcastMessage(FEventMessageTag Channel, int32_t& Message, bool bSaveToChannel, class AActor* ActorContext); // [0x6faebfc] Final|Native|Protected|HasOutParms|BlueprintCallable 
	// Function /Script/GameplayMessages.GameplayMessageRouter.HasValidSavedMessage
	// bool HasValidSavedMessage(FEventMessageTag Channel);                                                                  // [0x6faeac0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayMessages.GameplayMessageRouter.ClearSavedMessage
	// void ClearSavedMessage(FEventMessageTag Channel);                                                                     // [0x6fae6d8] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/GameplayMessages.BlueprintEventMessageTagLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UBlueprintEventMessageTagLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/GameplayMessages.BlueprintEventMessageTagLibrary.GetEventMessageTagFromGameplayTag
	// FEventMessageTag GetEventMessageTagFromGameplayTag(FGameplayTag InTag);                                               // [0x6fae808] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Struct /Script/GameplayMessages.EventMessageTag
/// Size: 0x0000 (0x000004 - 0x000004)
struct FEventMessageTag : FGameplayTag
{ 
};

/// Struct /Script/GameplayMessages.ReplicatedMessageData
/// Size: 0x0018 (0x000000 - 0x000018)
struct FReplicatedMessageData
{ 
	class UScriptStruct*                               StructType;                                                 // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0008   (0x0010)  MISSED
};

/// Struct /Script/GameplayMessages.ReplicatedMessage
/// Size: 0x0010 (0x000000 - 0x000010)
struct FReplicatedMessage
{ 
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0000   (0x0010)  MISSED
};

/// Struct /Script/GameplayMessages.GameplayMessageReceiverHandle
/// Size: 0x0018 (0x000000 - 0x000018)
struct FGameplayMessageReceiverHandle
{ 
	SDK_UNDEFINED(8,2310) /* TWeakObjectPtr<UGameplayMessageRouter*> */ __um(Subsystem);                           // 0x0000   (0x0008)  
	FEventMessageTag                                   Channel;                                                    // 0x0008   (0x0004)  
	int32_t                                            ID;                                                         // 0x000C   (0x0004)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0010   (0x0008)  MISSED
};

/// Struct /Script/GameplayMessages.GameplayMessageReceiverData
/// Size: 0x00A0 (0x000000 - 0x0000A0)
struct FGameplayMessageReceiverData
{ 
	unsigned char                                      UnknownData00_2[0xA0];                                      // 0x0000   (0x00A0)  MISSED
};

