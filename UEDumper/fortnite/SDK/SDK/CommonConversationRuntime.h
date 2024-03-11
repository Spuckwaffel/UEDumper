
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine
/// dependency: GameplayTags

/// Enum /Script/CommonConversationRuntime.EConversationTaskResultType
/// Size: 0x09
enum class EConversationTaskResultType : uint8_t
{
	EConversationTaskResultType__Invalid                                             = 0,
	EConversationTaskResultType__AbortConversation                                   = 1,
	EConversationTaskResultType__AdvanceConversation                                 = 2,
	EConversationTaskResultType__AdvanceConversationWithChoice                       = 3,
	EConversationTaskResultType__PauseConversationAndSendClientChoices               = 4,
	EConversationTaskResultType__ReturnToLastClientChoice                            = 5,
	EConversationTaskResultType__ReturnToCurrentClientChoice                         = 6,
	EConversationTaskResultType__ReturnToConversationStart                           = 7,
	EConversationTaskResultType__EConversationTaskResultType_MAX                     = 8
};

/// Enum /Script/CommonConversationRuntime.EConversationRequirementResult
/// Size: 0x04
enum class EConversationRequirementResult : uint8_t
{
	EConversationRequirementResult__Passed                                           = 0,
	EConversationRequirementResult__FailedButVisible                                 = 1,
	EConversationRequirementResult__FailedAndHidden                                  = 2,
	EConversationRequirementResult__EConversationRequirementResult_MAX               = 3
};

/// Enum /Script/CommonConversationRuntime.EConversationChoiceType
/// Size: 0x04
enum class EConversationChoiceType : uint8_t
{
	EConversationChoiceType__ServerOnly                                              = 0,
	EConversationChoiceType__UserChoiceAvailable                                     = 1,
	EConversationChoiceType__UserChoiceUnavailable                                   = 2,
	EConversationChoiceType__EConversationChoiceType_MAX                             = 3
};

/// Class /Script/CommonConversationRuntime.ConversationNode
/// Size: 0x0030 (0x000028 - 0x000058)
class UConversationNode : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	class UObject*                                     EvalWorldContextObj;                                        // 0x0028   (0x0008)  
	SDK_UNDEFINED(16,1766) /* FString */               __um(NodeName);                                             // 0x0030   (0x0010)  
	FGuid                                              Compiled_NodeGUID;                                          // 0x0040   (0x0010)  
	class UConversationNode*                           ParentNode;                                                 // 0x0050   (0x0008)  


	/// Functions
	// Function /Script/CommonConversationRuntime.ConversationNode.GetDebugParticipantColor
	// FLinearColor GetDebugParticipantColor(FGameplayTag ParticipantID);                                                    // [0x7931878] Final|Native|Protected|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/CommonConversationRuntime.ConversationSubNode
/// Size: 0x0000 (0x000058 - 0x000058)
class UConversationSubNode : public UConversationNode
{ 
public:
};

/// Class /Script/CommonConversationRuntime.ConversationChoiceNode
/// Size: 0x0040 (0x000058 - 0x000098)
class UConversationChoiceNode : public UConversationSubNode
{ 
public:
	SDK_UNDEFINED(24,1767) /* FText */                 __um(DefaultChoiceDisplayText);                             // 0x0058   (0x0018)  
	FGameplayTagContainer                              ChoiceTags;                                                 // 0x0070   (0x0020)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0090   (0x0008)  MISSED


	/// Functions
	// Function /Script/CommonConversationRuntime.ConversationChoiceNode.FillChoice
	// void FillChoice(FConversationContext& Context, FClientConversationOptionEntry& ChoiceEntry);                          // [0x7930be0] Native|Event|Protected|HasOutParms|BlueprintEvent|Const 
};

/// Class /Script/CommonConversationRuntime.ConversationContextHelpers
/// Size: 0x0000 (0x000028 - 0x000028)
class UConversationContextHelpers : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/CommonConversationRuntime.ConversationContextHelpers.ReturnToLastClientChoice
	// FConversationTaskResult ReturnToLastClientChoice(FConversationContext& Context);                                      // [0x792f8dc] Final|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CommonConversationRuntime.ConversationContextHelpers.ReturnToCurrentClientChoice
	// FConversationTaskResult ReturnToCurrentClientChoice(FConversationContext& Context);                                   // [0x792f8dc] Final|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CommonConversationRuntime.ConversationContextHelpers.ReturnToConversationStart
	// FConversationTaskResult ReturnToConversationStart(FConversationContext& Context);                                     // [0x792f8dc] Final|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CommonConversationRuntime.ConversationContextHelpers.PauseConversationAndSendClientChoices
	// FConversationTaskResult PauseConversationAndSendClientChoices(FConversationContext& Context, FClientConversationMessage& Message); // [0x79321f4] Final|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CommonConversationRuntime.ConversationContextHelpers.MakeConversationParticipant
	// void MakeConversationParticipant(FConversationContext& Context, class AActor* ParticipantActor, FGameplayTag ParticipantTag); // [0x7931ecc] Final|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CommonConversationRuntime.ConversationContextHelpers.GetCurrentConversationNodeHandle
	// FConversationNodeHandle GetCurrentConversationNodeHandle(FConversationContext& Context);                              // [0x79316d4] Final|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/CommonConversationRuntime.ConversationContextHelpers.GetConversationParticipantActor
	// class AActor* GetConversationParticipantActor(FConversationContext& Context, FGameplayTag ParticipantTag);            // [0x7931458] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CommonConversationRuntime.ConversationContextHelpers.GetConversationParticipant
	// class UConversationParticipantComponent* GetConversationParticipant(FConversationContext& Context, FGameplayTag ParticipantTag); // [0x79311dc] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CommonConversationRuntime.ConversationContextHelpers.GetConversationInstance
	// class UConversationInstance* GetConversationInstance(FConversationContext& Context);                                  // [0x793105c] Final|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/CommonConversationRuntime.ConversationContextHelpers.FindConversationComponent
	// class UConversationParticipantComponent* FindConversationComponent(class AActor* Actor);                              // [0x7930ddc] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/CommonConversationRuntime.ConversationContextHelpers.CanConversationContinue
	// bool CanConversationContinue(FConversationTaskResult& ConversationTasResult);                                         // [0x792fc7c] Final|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CommonConversationRuntime.ConversationContextHelpers.AdvanceConversationWithChoice
	// FConversationTaskResult AdvanceConversationWithChoice(FConversationContext& Context, FAdvanceConversationRequest& Choice); // [0x792fa74] Final|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CommonConversationRuntime.ConversationContextHelpers.AdvanceConversation
	// FConversationTaskResult AdvanceConversation(FConversationContext& Context);                                           // [0x792f8dc] Final|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CommonConversationRuntime.ConversationContextHelpers.AbortConversation
	// FConversationTaskResult AbortConversation(FConversationContext& Context);                                             // [0x792f8dc] Final|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/CommonConversationRuntime.ConversationEntryList
/// Size: 0x0018 (0x000000 - 0x000018)
struct FConversationEntryList
{ 
	FGameplayTag                                       EntryTag;                                                   // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	TArray<FGuid>                                      DestinationList;                                            // 0x0008   (0x0010)  
};

/// Struct /Script/CommonConversationRuntime.CommonDialogueBankParticipant
/// Size: 0x0030 (0x000000 - 0x000030)
struct FCommonDialogueBankParticipant
{ 
	SDK_UNDEFINED(24,1768) /* FText */                 __um(FallbackName);                                         // 0x0000   (0x0018)  
	FGameplayTag                                       ParticipantName;                                            // 0x0018   (0x0004)  
	FLinearColor                                       NodeTint;                                                   // 0x001C   (0x0010)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Class /Script/CommonConversationRuntime.ConversationDatabase
/// Size: 0x00B8 (0x000030 - 0x0000E8)
class UConversationDatabase : public UPrimaryDataAsset
{ 
public:
	int32_t                                            CompilerVersion;                                            // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0034   (0x0004)  MISSED
	SDK_UNDEFINED(80,1769) /* TMap<FGuid, UConversationNode*> */ __um(ReachableNodeMap);                           // 0x0038   (0x0050)  
	TArray<FConversationEntryList>                     EntryTags;                                                  // 0x0088   (0x0010)  
	FGameplayTagContainer                              ExitTags;                                                   // 0x0098   (0x0020)  
	TArray<FGuid>                                      InternalNodeIds;                                            // 0x00B8   (0x0010)  
	TArray<FGuid>                                      LinkedToNodeIds;                                            // 0x00C8   (0x0010)  
	TArray<FCommonDialogueBankParticipant>             Speakers;                                                   // 0x00D8   (0x0010)  
};

/// Class /Script/CommonConversationRuntime.ConversationNodeWithLinks
/// Size: 0x0010 (0x000058 - 0x000068)
class UConversationNodeWithLinks : public UConversationNode
{ 
public:
	TArray<FGuid>                                      OutputConnections;                                          // 0x0058   (0x0010)  
};

/// Class /Script/CommonConversationRuntime.ConversationEntryPointNode
/// Size: 0x0008 (0x000068 - 0x000070)
class UConversationEntryPointNode : public UConversationNodeWithLinks
{ 
public:
	FGameplayTag                                       EntryTag;                                                   // 0x0068   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x006C   (0x0004)  MISSED
};

/// Struct /Script/CommonConversationRuntime.ConversationParticipantEntry
/// Size: 0x0010 (0x000000 - 0x000010)
struct FConversationParticipantEntry
{ 
	class AActor*                                      Actor;                                                      // 0x0000   (0x0008)  
	FGameplayTag                                       ParticipantID;                                              // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
};

/// Struct /Script/CommonConversationRuntime.ConversationParticipants
/// Size: 0x0010 (0x000000 - 0x000010)
struct FConversationParticipants
{ 
	TArray<FConversationParticipantEntry>              List;                                                       // 0x0000   (0x0010)  
};

/// Class /Script/CommonConversationRuntime.ConversationInstance
/// Size: 0x0188 (0x000028 - 0x0001B0)
class UConversationInstance : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x50];                                      // 0x0000   (0x0050)  MISSED
	FConversationParticipants                          Participants;                                               // 0x0050   (0x0010)  
	class UConversationDatabase*                       ActiveConversationGraph;                                    // 0x0060   (0x0008)  
	unsigned char                                      UnknownData01_6[0x148];                                     // 0x0068   (0x0148)  MISSED
};

/// Class /Script/CommonConversationRuntime.ConversationLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UConversationLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/CommonConversationRuntime.ConversationLibrary.StartConversationFromGraph
	// class UConversationInstance* StartConversationFromGraph(FGameplayTag& ConversationEntryTag, class AActor* Instigator, FGameplayTag& InstigatorTag, class AActor* Target, FGameplayTag& TargetTag, class UConversationDatabase* Graph); // [0x79328e0] Final|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CommonConversationRuntime.ConversationLibrary.StartConversation
	// class UConversationInstance* StartConversation(FGameplayTag& ConversationEntryTag, class AActor* Instigator, FGameplayTag& InstigatorTag, class AActor* Target, FGameplayTag& TargetTag, class UClass* ConversationInstanceClass); // [0x79325f4] Final|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/CommonConversationRuntime.ConversationTaskNode
/// Size: 0x0018 (0x000068 - 0x000080)
class UConversationTaskNode : public UConversationNodeWithLinks
{ 
public:
	TArray<class UConversationSubNode*>                SubNodes;                                                   // 0x0068   (0x0010)  
	bool                                               bIgnoreRequirementsWhileAdvancingConversations;             // 0x0078   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0079   (0x0007)  MISSED


	/// Functions
	// Function /Script/CommonConversationRuntime.ConversationTaskNode.IsRequirementSatisfied
	// EConversationRequirementResult IsRequirementSatisfied(FConversationContext& Context);                                 // [0x7931d38] BlueprintAuthorityOnly|Native|Event|Protected|HasOutParms|BlueprintEvent|Const 
	// Function /Script/CommonConversationRuntime.ConversationTaskNode.GetNodeBodyColor
	// bool GetNodeBodyColor(FLinearColor& BodyColor);                                                                       // [0x79319c0] Native|Event|Public|HasOutParms|HasDefaults|BlueprintEvent|Const 
	// Function /Script/CommonConversationRuntime.ConversationTaskNode.GatherStaticExtraData
	// void GatherStaticExtraData(FConversationContext& Context, TArray<FConversationNodeParameterPair>& InOutExtraData);    // [0x7930e68] BlueprintAuthorityOnly|Native|Event|Protected|HasOutParms|BlueprintEvent|Const 
	// Function /Script/CommonConversationRuntime.ConversationTaskNode.ExecuteTaskNode
	// FConversationTaskResult ExecuteTaskNode(FConversationContext& Context);                                               // [0x7930a24] BlueprintAuthorityOnly|Native|Event|Protected|HasOutParms|BlueprintEvent|Const 
	// Function /Script/CommonConversationRuntime.ConversationTaskNode.ExecuteClientEffects
	// void ExecuteClientEffects(FConversationContext& Context);                                                             // [0x79308a0] BlueprintCosmetic|Native|Event|Protected|HasOutParms|BlueprintEvent|Const 
};

/// Class /Script/CommonConversationRuntime.ConversationLinkNode
/// Size: 0x0008 (0x000080 - 0x000088)
class UConversationLinkNode : public UConversationTaskNode
{ 
public:
	FGameplayTag                                       RemoteEntryTag;                                             // 0x0080   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0084   (0x0004)  MISSED
};

/// Struct /Script/CommonConversationRuntime.ConversationNodeParameterPair
/// Size: 0x0020 (0x000000 - 0x000020)
struct FConversationNodeParameterPair
{ 
	SDK_UNDEFINED(16,1770) /* FString */               __um(Name);                                                 // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,1771) /* FString */               __um(Value);                                                // 0x0010   (0x0010)  
};

/// Struct /Script/CommonConversationRuntime.ClientConversationMessage
/// Size: 0x0048 (0x000000 - 0x000048)
struct FClientConversationMessage
{ 
	FGameplayTag                                       SpeakerID;                                                  // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	SDK_UNDEFINED(24,1772) /* FText */                 __um(ParticipantDisplayName);                               // 0x0008   (0x0018)  
	SDK_UNDEFINED(24,1773) /* FText */                 __um(Text);                                                 // 0x0020   (0x0018)  
	TArray<FConversationNodeParameterPair>             MetadataParameters;                                         // 0x0038   (0x0010)  
};

/// Struct /Script/CommonConversationRuntime.ConversationNodeHandle
/// Size: 0x0010 (0x000000 - 0x000010)
struct FConversationNodeHandle
{ 
	FGuid                                              NodeGUID;                                                   // 0x0000   (0x0010)  
};

/// Struct /Script/CommonConversationRuntime.ConversationChoiceReference
/// Size: 0x0020 (0x000000 - 0x000020)
struct FConversationChoiceReference
{ 
	FConversationNodeHandle                            NodeReference;                                              // 0x0000   (0x0010)  
	TArray<FConversationNodeParameterPair>             NodeParameters;                                             // 0x0010   (0x0010)  
};

/// Struct /Script/CommonConversationRuntime.ClientConversationOptionEntry
/// Size: 0x0070 (0x000000 - 0x000070)
struct FClientConversationOptionEntry
{ 
	SDK_UNDEFINED(24,1774) /* FText */                 __um(ChoiceText);                                           // 0x0000   (0x0018)  
	FGameplayTagContainer                              ChoiceTags;                                                 // 0x0018   (0x0020)  
	EConversationChoiceType                            ChoiceType;                                                 // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0039   (0x0007)  MISSED
	FConversationChoiceReference                       ChoiceReference;                                            // 0x0040   (0x0020)  
	TArray<FConversationNodeParameterPair>             ExtraData;                                                  // 0x0060   (0x0010)  
};

/// Struct /Script/CommonConversationRuntime.ClientConversationMessagePayload
/// Size: 0x0078 (0x000000 - 0x000078)
struct FClientConversationMessagePayload
{ 
	FClientConversationMessage                         Message;                                                    // 0x0000   (0x0048)  
	FConversationParticipants                          Participants;                                               // 0x0048   (0x0010)  
	FConversationNodeHandle                            CurrentNode;                                                // 0x0058   (0x0010)  
	TArray<FClientConversationOptionEntry>             Options;                                                    // 0x0068   (0x0010)  
};

/// Class /Script/CommonConversationRuntime.ConversationParticipantComponent
/// Size: 0x0100 (0x0000A0 - 0x0001A0)
class UConversationParticipantComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x60];                                      // 0x00A0   (0x0060)  MISSED
	int32_t                                            ConversationsActive;                                        // 0x0100   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0104   (0x0004)  MISSED
	class UConversationInstance*                       Auth_CurrentConversation;                                   // 0x0108   (0x0008)  
	TArray<class UConversationInstance*>               Auth_Conversations;                                         // 0x0110   (0x0010)  
	FClientConversationMessagePayload                  LastMessage;                                                // 0x0120   (0x0078)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x0198   (0x0008)  MISSED


	/// Functions
	// Function /Script/CommonConversationRuntime.ConversationParticipantComponent.ServerAdvanceConversation
	// void ServerAdvanceConversation(FAdvanceConversationRequest InChoicePicked);                                           // [0x793249c] Net|NetReliableNative|Event|Protected|NetServer 
	// Function /Script/CommonConversationRuntime.ConversationParticipantComponent.RequestServerAdvanceConversation
	// void RequestServerAdvanceConversation(FAdvanceConversationRequest& InChoicePicked);                                   // [0x79323ec] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CommonConversationRuntime.ConversationParticipantComponent.OnRep_ConversationsActive
	// void OnRep_ConversationsActive(int32_t OldConversationsActive);                                                       // [0x22f0958] Final|Native|Protected 
	// Function /Script/CommonConversationRuntime.ConversationParticipantComponent.IsInActiveConversation
	// bool IsInActiveConversation();                                                                                        // [0x7931b84] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonConversationRuntime.ConversationParticipantComponent.GetParticipantDisplayName
	// FText GetParticipantDisplayName();                                                                                    // [0x7931b3c] Native|Public|BlueprintCallable 
	// Function /Script/CommonConversationRuntime.ConversationParticipantComponent.GetParticipantActor
	// class AActor* GetParticipantActor(FGameplayTag& ParticipantTag);                                                      // [0x7931a5c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonConversationRuntime.ConversationParticipantComponent.ClientUpdateParticipants
	// void ClientUpdateParticipants(FConversationParticipants InParticipants);                                              // [0x793075c] Net|NetReliableNative|Event|Protected|NetClient 
	// Function /Script/CommonConversationRuntime.ConversationParticipantComponent.ClientUpdateConversationTaskChoiceData
	// void ClientUpdateConversationTaskChoiceData(FConversationNodeHandle Handle, FClientConversationOptionEntry OptionEntry); // [0x7930498] Net|NetReliableNative|Event|Protected|NetClient 
	// Function /Script/CommonConversationRuntime.ConversationParticipantComponent.ClientUpdateConversations
	// void ClientUpdateConversations(int32_t InConversationsActive);                                                        // [0x79306d8] Net|NetReliableNative|Event|Protected|NetClient 
	// Function /Script/CommonConversationRuntime.ConversationParticipantComponent.ClientUpdateConversation
	// void ClientUpdateConversation(FClientConversationMessagePayload Message);                                             // [0x793034c] Net|NetReliableNative|Event|Protected|NetClient 
	// Function /Script/CommonConversationRuntime.ConversationParticipantComponent.ClientStartConversation
	// void ClientStartConversation(FConversationParticipants InParticipants);                                               // [0x7930208] Net|NetReliableNative|Event|Protected|NetClient 
	// Function /Script/CommonConversationRuntime.ConversationParticipantComponent.ClientExitConversation
	// void ClientExitConversation(FConversationParticipants InParticipants);                                                // [0x79300c4] Net|NetReliableNative|Event|Protected|NetClient 
	// Function /Script/CommonConversationRuntime.ConversationParticipantComponent.ClientExecuteTaskAndSideEffects
	// void ClientExecuteTaskAndSideEffects(FConversationNodeHandle Handle, class UConversationDatabase* Graph);             // [0x792fea4] Net|NetReliableNative|Event|Protected|NetClient 
};

/// Struct /Script/CommonConversationRuntime.NetSerializeScriptStructCache_ConvVersion
/// Size: 0x0060 (0x000000 - 0x000060)
struct FNetSerializeScriptStructCache_ConvVersion
{ 
	SDK_UNDEFINED(80,1775) /* TMap<UScriptStruct*, int32_t> */ __um(ScriptStructsToIndex);                         // 0x0000   (0x0050)  
	TArray<class UScriptStruct*>                       IndexToScriptStructs;                                       // 0x0050   (0x0010)  
};

/// Class /Script/CommonConversationRuntime.ConversationRegistry
/// Size: 0x01C8 (0x000030 - 0x0001F8)
class UConversationRegistry : public UWorldSubsystem
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0030   (0x0008)  MISSED
	FNetSerializeScriptStructCache_ConvVersion         ConversationChoiceDataStructCache;                          // 0x0038   (0x0060)  
	unsigned char                                      UnknownData01_6[0x160];                                     // 0x0098   (0x0160)  MISSED
};

/// Class /Script/CommonConversationRuntime.ConversationRequirementNode
/// Size: 0x0000 (0x000058 - 0x000058)
class UConversationRequirementNode : public UConversationSubNode
{ 
public:


	/// Functions
	// Function /Script/CommonConversationRuntime.ConversationRequirementNode.IsRequirementSatisfied
	// EConversationRequirementResult IsRequirementSatisfied(FConversationContext& Context);                                 // [0x7931ba4] Native|Event|Public|HasOutParms|BlueprintEvent|Const 
};

/// Class /Script/CommonConversationRuntime.ConversationSettings
/// Size: 0x0020 (0x000030 - 0x000050)
class UConversationSettings : public UDeveloperSettings
{ 
public:
	SDK_UNDEFINED(32,1776) /* TWeakObjectPtr<UClass*> */ __um(ConversationInstanceClass);                          // 0x0030   (0x0020)  
};

/// Class /Script/CommonConversationRuntime.ConversationSideEffectNode
/// Size: 0x0000 (0x000058 - 0x000058)
class UConversationSideEffectNode : public UConversationSubNode
{ 
public:


	/// Functions
	// Function /Script/CommonConversationRuntime.ConversationSideEffectNode.ServerCauseSideEffect
	// void ServerCauseSideEffect(FConversationContext& Context);                                                            // [0x79308a0] BlueprintAuthorityOnly|Native|Event|Protected|HasOutParms|BlueprintEvent|Const 
	// Function /Script/CommonConversationRuntime.ConversationSideEffectNode.ClientCauseSideEffect
	// void ClientCauseSideEffect(FConversationContext& Context);                                                            // [0x792fd20] BlueprintCosmetic|Native|Event|Protected|HasOutParms|BlueprintEvent|Const 
};

/// Struct /Script/CommonConversationRuntime.AdvanceConversationRequest
/// Size: 0x0030 (0x000000 - 0x000030)
struct FAdvanceConversationRequest
{ 
	FConversationChoiceReference                       Choice;                                                     // 0x0000   (0x0020)  
	TArray<FConversationNodeParameterPair>             UserParameters;                                             // 0x0020   (0x0010)  
};

/// Struct /Script/CommonConversationRuntime.ConversationTaskResult
/// Size: 0x0080 (0x000000 - 0x000080)
struct FConversationTaskResult
{ 
	EConversationTaskResultType                        Type;                                                       // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	FAdvanceConversationRequest                        AdvanceToChoice;                                            // 0x0008   (0x0030)  
	FClientConversationMessage                         Message;                                                    // 0x0038   (0x0048)  
};

/// Struct /Script/CommonConversationRuntime.ConversationContext
/// Size: 0x0038 (0x000000 - 0x000038)
struct FConversationContext
{ 
	class UConversationRegistry*                       ConversationRegistry;                                       // 0x0000   (0x0008)  
	class UConversationInstance*                       ActiveConversation;                                         // 0x0008   (0x0008)  
	class UConversationParticipantComponent*           ClientParticipant;                                          // 0x0010   (0x0008)  
	class UConversationTaskNode*                       TaskBeingConsidered;                                        // 0x0018   (0x0008)  
	TArray<FConversationNodeHandle>                    ReturnScopeStack;                                           // 0x0020   (0x0010)  
	bool                                               bServer_PRIVATE;                                            // 0x0030   (0x0001)  
	bool                                               bClient_PRIVATE;                                            // 0x0031   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x0032   (0x0006)  MISSED
};

/// Struct /Script/CommonConversationRuntime.ConversationChoiceData
/// Size: 0x0008 (0x000000 - 0x000008)
struct FConversationChoiceData
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/CommonConversationRuntime.ConversationChoiceDataHandle
/// Size: 0x0020 (0x000000 - 0x000020)
struct FConversationChoiceDataHandle
{ 
	unsigned char                                      UnknownData00_2[0x20];                                      // 0x0000   (0x0020)  MISSED
};

/// Struct /Script/CommonConversationRuntime.ConversationBranchPoint
/// Size: 0x0080 (0x000000 - 0x000080)
struct FConversationBranchPoint
{ 
	TArray<FConversationNodeHandle>                    ReturnScopeStack;                                           // 0x0000   (0x0010)  
	FClientConversationOptionEntry                     ClientChoice;                                               // 0x0010   (0x0070)  
};

