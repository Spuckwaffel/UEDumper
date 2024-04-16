
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine
/// dependency: GameplayTags

/// Class /Script/CommonConversationRuntime.ConversationNode
/// Size: 0x0030 (0x000028 - 0x000058)
class UConversationNode : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(class UObject*)                            EvalWorldContextObj                                         OFFSET(get<T>, {0x28, 8, 0, 0})
	SMember(FString)                                   NodeName                                                    OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	SMember(FGuid)                                     Compiled_NodeGUID                                           OFFSET(getStruct<T>, {0x40, 16, 0, 0})
	CMember(class UConversationNode*)                  ParentNode                                                  OFFSET(get<T>, {0x50, 8, 0, 0})


	/// Functions
	// Function /Script/CommonConversationRuntime.ConversationNode.GetDebugParticipantColor
	// FLinearColor GetDebugParticipantColor(FGameplayTag ParticipantID);                                                       // [0x7edd93c] Final|Native|Protected|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/CommonConversationRuntime.ConversationSubNode
/// Size: 0x0000 (0x000058 - 0x000058)
class UConversationSubNode : public UConversationNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
};

/// Class /Script/CommonConversationRuntime.ConversationChoiceNode
/// Size: 0x0038 (0x000058 - 0x000090)
class UConversationChoiceNode : public UConversationSubNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FText)                                     DefaultChoiceDisplayText                                    OFFSET(getStruct<T>, {0x58, 16, 0, 0})
	SMember(FGameplayTagContainer)                     ChoiceTags                                                  OFFSET(getStruct<T>, {0x68, 32, 0, 0})


	/// Functions
	// Function /Script/CommonConversationRuntime.ConversationChoiceNode.FillChoice
	// void FillChoice(FConversationContext& Context, FClientConversationOptionEntry& ChoiceEntry);                             // [0x7edb030] Native|Event|Protected|HasOutParms|BlueprintEvent|Const 
};

/// Class /Script/CommonConversationRuntime.ConversationContextHelpers
/// Size: 0x0000 (0x000028 - 0x000028)
class UConversationContextHelpers : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/CommonConversationRuntime.ConversationContextHelpers.ReturnToLastClientChoice
	// FConversationTaskResult ReturnToLastClientChoice(FConversationContext& Context);                                         // [0x7ed8880] Final|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CommonConversationRuntime.ConversationContextHelpers.ReturnToCurrentClientChoice
	// FConversationTaskResult ReturnToCurrentClientChoice(FConversationContext& Context);                                      // [0x7ed8880] Final|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CommonConversationRuntime.ConversationContextHelpers.ReturnToConversationStart
	// FConversationTaskResult ReturnToConversationStart(FConversationContext& Context);                                        // [0x7ed8880] Final|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CommonConversationRuntime.ConversationContextHelpers.PauseConversationAndSendClientChoices
	// FConversationTaskResult PauseConversationAndSendClientChoices(FConversationContext& Context, FClientConversationMessage& Message); // [0x7edf14c] Final|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CommonConversationRuntime.ConversationContextHelpers.MakeConversationParticipant
	// void MakeConversationParticipant(FConversationContext& Context, class AActor* ParticipantActor, FGameplayTag ParticipantTag); // [0x7ede8a8] Final|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CommonConversationRuntime.ConversationContextHelpers.GetCurrentConversationNodeHandle
	// FConversationNodeHandle GetCurrentConversationNodeHandle(FConversationContext& Context);                                 // [0x7edd2e0] Final|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/CommonConversationRuntime.ConversationContextHelpers.GetConversationParticipantActor
	// class AActor* GetConversationParticipantActor(FConversationContext& Context, FGameplayTag ParticipantTag);               // [0x7edcbac] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CommonConversationRuntime.ConversationContextHelpers.GetConversationParticipant
	// class UConversationParticipantComponent* GetConversationParticipant(FConversationContext& Context, FGameplayTag ParticipantTag); // [0x7edc478] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CommonConversationRuntime.ConversationContextHelpers.GetConversationInstance
	// class UConversationInstance* GetConversationInstance(FConversationContext& Context);                                     // [0x7edbe38] Final|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/CommonConversationRuntime.ConversationContextHelpers.FindConversationComponent
	// class UConversationParticipantComponent* FindConversationComponent(class AActor* Actor);                                 // [0x7edb6d4] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/CommonConversationRuntime.ConversationContextHelpers.CanConversationContinue
	// bool CanConversationContinue(FConversationTaskResult& ConversationTasResult);                                            // [0x7ed95a4] Final|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CommonConversationRuntime.ConversationContextHelpers.AdvanceConversationWithChoice
	// FConversationTaskResult AdvanceConversationWithChoice(FConversationContext& Context, FAdvanceConversationRequest& Choice); // [0x7ed8ee4] Final|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CommonConversationRuntime.ConversationContextHelpers.AdvanceConversation
	// FConversationTaskResult AdvanceConversation(FConversationContext& Context);                                              // [0x7ed8880] Final|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CommonConversationRuntime.ConversationContextHelpers.AbortConversation
	// FConversationTaskResult AbortConversation(FConversationContext& Context);                                                // [0x7ed8880] Final|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/CommonConversationRuntime.ConversationDatabase
/// Size: 0x00B8 (0x000030 - 0x0000E8)
class UConversationDatabase : public UPrimaryDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
	DMember(int32_t)                                   CompilerVersion                                             OFFSET(get<int32_t>, {0x30, 4, 0, 0})
	CMember(TMap<FGuid, UConversationNode*>)           ReachableNodeMap                                            OFFSET(get<T>, {0x38, 80, 0, 0})
	CMember(TArray<FConversationEntryList>)            EntryTags                                                   OFFSET(get<T>, {0x88, 16, 0, 0})
	SMember(FGameplayTagContainer)                     ExitTags                                                    OFFSET(getStruct<T>, {0x98, 32, 0, 0})
	CMember(TArray<FGuid>)                             InternalNodeIds                                             OFFSET(get<T>, {0xB8, 16, 0, 0})
	CMember(TArray<FGuid>)                             LinkedToNodeIds                                             OFFSET(get<T>, {0xC8, 16, 0, 0})
	CMember(TArray<FCommonDialogueBankParticipant>)    Speakers                                                    OFFSET(get<T>, {0xD8, 16, 0, 0})
};

/// Class /Script/CommonConversationRuntime.ConversationNodeWithLinks
/// Size: 0x0010 (0x000058 - 0x000068)
class UConversationNodeWithLinks : public UConversationNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	CMember(TArray<FGuid>)                             OutputConnections                                           OFFSET(get<T>, {0x58, 16, 0, 0})
};

/// Class /Script/CommonConversationRuntime.ConversationEntryPointNode
/// Size: 0x0008 (0x000068 - 0x000070)
class UConversationEntryPointNode : public UConversationNodeWithLinks
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FGameplayTag)                              EntryTag                                                    OFFSET(getStruct<T>, {0x68, 4, 0, 0})
};

/// Class /Script/CommonConversationRuntime.ConversationInstance
/// Size: 0x0178 (0x000028 - 0x0001A0)
class UConversationInstance : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
	SMember(FConversationParticipants)                 Participants                                                OFFSET(getStruct<T>, {0x50, 16, 0, 0})
	CMember(class UConversationDatabase*)              ActiveConversationGraph                                     OFFSET(get<T>, {0x60, 8, 0, 0})
};

/// Class /Script/CommonConversationRuntime.ConversationLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UConversationLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/CommonConversationRuntime.ConversationLibrary.StartConversationFromGraph
	// class UConversationInstance* StartConversationFromGraph(FGameplayTag& ConversationEntryTag, class AActor* Instigator, FGameplayTag& InstigatorTag, class AActor* Target, FGameplayTag& TargetTag, class UConversationDatabase* Graph); // [0x7edfc8c] Final|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CommonConversationRuntime.ConversationLibrary.StartConversation
	// class UConversationInstance* StartConversation(FGameplayTag& ConversationEntryTag, class AActor* Instigator, FGameplayTag& InstigatorTag, class AActor* Target, FGameplayTag& TargetTag, class UClass* ConversationInstanceClass); // [0x7edf9a0] Final|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/CommonConversationRuntime.ConversationTaskNode
/// Size: 0x0018 (0x000068 - 0x000080)
class UConversationTaskNode : public UConversationNodeWithLinks
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(TArray<class UConversationSubNode*>)       SubNodes                                                    OFFSET(get<T>, {0x68, 16, 0, 0})
	DMember(bool)                                      bIgnoreRequirementsWhileAdvancingConversations              OFFSET(get<bool>, {0x78, 1, 0, 0})


	/// Functions
	// Function /Script/CommonConversationRuntime.ConversationTaskNode.IsRequirementSatisfied
	// EConversationRequirementResult IsRequirementSatisfied(FConversationContext& Context);                                    // [0x7ede260] BlueprintAuthorityOnly|Native|Event|Protected|HasOutParms|BlueprintEvent|Const 
	// Function /Script/CommonConversationRuntime.ConversationTaskNode.GetNodeBodyColor
	// bool GetNodeBodyColor(FLinearColor& BodyColor);                                                                          // [0x7edda3c] Native|Event|Public|HasOutParms|HasDefaults|BlueprintEvent|Const 
	// Function /Script/CommonConversationRuntime.ConversationTaskNode.GatherStaticExtraData
	// void GatherStaticExtraData(FConversationContext& Context, TArray<FConversationNodeParameterPair>& InOutExtraData);       // [0x7edb7a0] BlueprintAuthorityOnly|Native|Event|Protected|HasOutParms|BlueprintEvent|Const 
	// Function /Script/CommonConversationRuntime.ConversationTaskNode.ExecuteTaskNode
	// FConversationTaskResult ExecuteTaskNode(FConversationContext& Context);                                                  // [0x7eda9c4] BlueprintAuthorityOnly|Native|Event|Protected|HasOutParms|BlueprintEvent|Const 
	// Function /Script/CommonConversationRuntime.ConversationTaskNode.ExecuteClientEffects
	// void ExecuteClientEffects(FConversationContext& Context);                                                                // [0x7eda37c] BlueprintCosmetic|Native|Event|Protected|HasOutParms|BlueprintEvent|Const 
};

/// Class /Script/CommonConversationRuntime.ConversationLinkNode
/// Size: 0x0008 (0x000080 - 0x000088)
class UConversationLinkNode : public UConversationTaskNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FGameplayTag)                              RemoteEntryTag                                              OFFSET(getStruct<T>, {0x80, 4, 0, 0})
};

/// Class /Script/CommonConversationRuntime.ConversationParticipantComponent
/// Size: 0x00F0 (0x0000A0 - 0x000190)
class UConversationParticipantComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
	DMember(int32_t)                                   ConversationsActive                                         OFFSET(get<int32_t>, {0x100, 4, 0, 0})
	CMember(class UConversationInstance*)              Auth_CurrentConversation                                    OFFSET(get<T>, {0x108, 8, 0, 0})
	CMember(TArray<class UConversationInstance*>)      Auth_Conversations                                          OFFSET(get<T>, {0x110, 16, 0, 0})
	SMember(FClientConversationMessagePayload)         LastMessage                                                 OFFSET(getStruct<T>, {0x120, 104, 0, 0})


	/// Functions
	// Function /Script/CommonConversationRuntime.ConversationParticipantComponent.ServerAdvanceConversation
	// void ServerAdvanceConversation(FAdvanceConversationRequest InChoicePicked);                                              // [0x7edf8b4] Net|NetReliableNative|Event|Protected|NetServer 
	// Function /Script/CommonConversationRuntime.ConversationParticipantComponent.RequestServerAdvanceConversation
	// void RequestServerAdvanceConversation(FAdvanceConversationRequest& InChoicePicked);                                      // [0x7edf804] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CommonConversationRuntime.ConversationParticipantComponent.OnRep_ConversationsActive
	// void OnRep_ConversationsActive(int32_t OldConversationsActive);                                                          // [0x7edf08c] Final|Native|Protected 
	// Function /Script/CommonConversationRuntime.ConversationParticipantComponent.IsInActiveConversation
	// bool IsInActiveConversation();                                                                                           // [0x7eddbf8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonConversationRuntime.ConversationParticipantComponent.GetParticipantDisplayName
	// FText GetParticipantDisplayName();                                                                                       // [0x7eddbb8] Native|Public|BlueprintCallable 
	// Function /Script/CommonConversationRuntime.ConversationParticipantComponent.GetParticipantActor
	// class AActor* GetParticipantActor(FGameplayTag& ParticipantTag);                                                         // [0x7eddad8] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonConversationRuntime.ConversationParticipantComponent.ClientUpdateParticipants
	// void ClientUpdateParticipants(FConversationParticipants InParticipants);                                                 // [0x7eda2a8] Net|NetReliableNative|Event|Protected|NetClient 
	// Function /Script/CommonConversationRuntime.ConversationParticipantComponent.ClientUpdateConversationTaskChoiceData
	// void ClientUpdateConversationTaskChoiceData(FConversationNodeHandle Handle, FClientConversationOptionEntry OptionEntry); // [0x7eda06c] Net|NetReliableNative|Event|Protected|NetClient 
	// Function /Script/CommonConversationRuntime.ConversationParticipantComponent.ClientUpdateConversations
	// void ClientUpdateConversations(int32_t InConversationsActive);                                                           // [0x7eda1e4] Net|NetReliableNative|Event|Protected|NetClient 
	// Function /Script/CommonConversationRuntime.ConversationParticipantComponent.ClientUpdateConversation
	// void ClientUpdateConversation(FClientConversationMessagePayload Message);                                                // [0x7ed9f90] Net|NetReliableNative|Event|Protected|NetClient 
	// Function /Script/CommonConversationRuntime.ConversationParticipantComponent.ClientStartConversation
	// void ClientStartConversation(FConversationParticipants InParticipants);                                                  // [0x7ed9ebc] Net|NetReliableNative|Event|Protected|NetClient 
	// Function /Script/CommonConversationRuntime.ConversationParticipantComponent.ClientExitConversation
	// void ClientExitConversation(FConversationParticipants InParticipants);                                                   // [0x7ed9de8] Net|NetReliableNative|Event|Protected|NetClient 
	// Function /Script/CommonConversationRuntime.ConversationParticipantComponent.ClientExecuteTaskAndSideEffects
	// void ClientExecuteTaskAndSideEffects(FConversationNodeHandle Handle, class UConversationDatabase* Graph);                // [0x7ed9c90] Net|NetReliableNative|Event|Protected|NetClient 
};

/// Class /Script/CommonConversationRuntime.ConversationRegistry
/// Size: 0x01C8 (0x000030 - 0x0001F8)
class UConversationRegistry : public UWorldSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 504;

public:
	SMember(FNetSerializeScriptStructCache_ConvVersion) ConversationChoiceDataStructCache                          OFFSET(getStruct<T>, {0x38, 96, 0, 0})
};

/// Class /Script/CommonConversationRuntime.ConversationRequirementNode
/// Size: 0x0000 (0x000058 - 0x000058)
class UConversationRequirementNode : public UConversationSubNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:


	/// Functions
	// Function /Script/CommonConversationRuntime.ConversationRequirementNode.IsRequirementSatisfied
	// EConversationRequirementResult IsRequirementSatisfied(FConversationContext& Context);                                    // [0x7eddc18] Native|Event|Public|HasOutParms|BlueprintEvent|Const 
};

/// Class /Script/CommonConversationRuntime.ConversationSettings
/// Size: 0x0020 (0x000030 - 0x000050)
class UConversationSettings : public UDeveloperSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TWeakObjectPtr<UClass*>)                   ConversationInstanceClass                                   OFFSET(get<T>, {0x30, 32, 0, 0})
};

/// Class /Script/CommonConversationRuntime.ConversationSideEffectNode
/// Size: 0x0000 (0x000058 - 0x000058)
class UConversationSideEffectNode : public UConversationSubNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:


	/// Functions
	// Function /Script/CommonConversationRuntime.ConversationSideEffectNode.ServerCauseSideEffect
	// void ServerCauseSideEffect(FConversationContext& Context);                                                               // [0x7eda37c] BlueprintAuthorityOnly|Native|Event|Protected|HasOutParms|BlueprintEvent|Const 
	// Function /Script/CommonConversationRuntime.ConversationSideEffectNode.ClientCauseSideEffect
	// void ClientCauseSideEffect(FConversationContext& Context);                                                               // [0x7ed9648] BlueprintCosmetic|Native|Event|Protected|HasOutParms|BlueprintEvent|Const 
};

/// Struct /Script/CommonConversationRuntime.ClientConversationMessagePayload
/// Size: 0x0068 (0x000000 - 0x000068)
class FClientConversationMessagePayload : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FClientConversationMessage)                Message                                                     OFFSET(getStruct<T>, {0x0, 56, 0, 0})
	SMember(FConversationParticipants)                 Participants                                                OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	SMember(FConversationNodeHandle)                   CurrentNode                                                 OFFSET(getStruct<T>, {0x48, 16, 0, 0})
	CMember(TArray<FClientConversationOptionEntry>)    Options                                                     OFFSET(get<T>, {0x58, 16, 0, 0})
};

/// Struct /Script/CommonConversationRuntime.ClientConversationOptionEntry
/// Size: 0x0068 (0x000000 - 0x000068)
class FClientConversationOptionEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FText)                                     ChoiceText                                                  OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FGameplayTagContainer)                     ChoiceTags                                                  OFFSET(getStruct<T>, {0x10, 32, 0, 0})
	CMember(EConversationChoiceType)                   ChoiceType                                                  OFFSET(get<T>, {0x30, 1, 0, 0})
	SMember(FConversationChoiceReference)              ChoiceReference                                             OFFSET(getStruct<T>, {0x38, 32, 0, 0})
	CMember(TArray<FConversationNodeParameterPair>)    ExtraData                                                   OFFSET(get<T>, {0x58, 16, 0, 0})
};

/// Struct /Script/CommonConversationRuntime.ConversationNodeParameterPair
/// Size: 0x0020 (0x000000 - 0x000020)
class FConversationNodeParameterPair : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FString)                                   Name                                                        OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   Value                                                       OFFSET(getStruct<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/CommonConversationRuntime.ConversationChoiceReference
/// Size: 0x0020 (0x000000 - 0x000020)
class FConversationChoiceReference : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FConversationNodeHandle)                   NodeReference                                               OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	CMember(TArray<FConversationNodeParameterPair>)    NodeParameters                                              OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/CommonConversationRuntime.ConversationNodeHandle
/// Size: 0x0010 (0x000000 - 0x000010)
class FConversationNodeHandle : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FGuid)                                     NodeGUID                                                    OFFSET(getStruct<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/CommonConversationRuntime.ConversationParticipants
/// Size: 0x0010 (0x000000 - 0x000010)
class FConversationParticipants : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FConversationParticipantEntry>)     List                                                        OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/CommonConversationRuntime.ConversationParticipantEntry
/// Size: 0x0010 (0x000000 - 0x000010)
class FConversationParticipantEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class AActor*)                             Actor                                                       OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FGameplayTag)                              ParticipantID                                               OFFSET(getStruct<T>, {0x8, 4, 0, 0})
};

/// Struct /Script/CommonConversationRuntime.ClientConversationMessage
/// Size: 0x0038 (0x000000 - 0x000038)
class FClientConversationMessage : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FGameplayTag)                              SpeakerID                                                   OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FText)                                     ParticipantDisplayName                                      OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	SMember(FText)                                     Text                                                        OFFSET(getStruct<T>, {0x18, 16, 0, 0})
	CMember(TArray<FConversationNodeParameterPair>)    MetadataParameters                                          OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Struct /Script/CommonConversationRuntime.ConversationTaskResult
/// Size: 0x0070 (0x000000 - 0x000070)
class FConversationTaskResult : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	CMember(EConversationTaskResultType)               Type                                                        OFFSET(get<T>, {0x0, 1, 0, 0})
	SMember(FAdvanceConversationRequest)               AdvanceToChoice                                             OFFSET(getStruct<T>, {0x8, 48, 0, 0})
	SMember(FClientConversationMessage)                Message                                                     OFFSET(getStruct<T>, {0x38, 56, 0, 0})
};

/// Struct /Script/CommonConversationRuntime.AdvanceConversationRequest
/// Size: 0x0030 (0x000000 - 0x000030)
class FAdvanceConversationRequest : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FConversationChoiceReference)              Choice                                                      OFFSET(getStruct<T>, {0x0, 32, 0, 0})
	CMember(TArray<FConversationNodeParameterPair>)    UserParameters                                              OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/CommonConversationRuntime.ConversationContext
/// Size: 0x0038 (0x000000 - 0x000038)
class FConversationContext : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(class UConversationRegistry*)              ConversationRegistry                                        OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class UConversationInstance*)              ActiveConversation                                          OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(class UConversationParticipantComponent*)  ClientParticipant                                           OFFSET(get<T>, {0x10, 8, 0, 0})
	CMember(class UConversationTaskNode*)              TaskBeingConsidered                                         OFFSET(get<T>, {0x18, 8, 0, 0})
	CMember(TArray<FConversationNodeHandle>)           ReturnScopeStack                                            OFFSET(get<T>, {0x20, 16, 0, 0})
	DMember(bool)                                      bServer_PRIVATE                                             OFFSET(get<bool>, {0x30, 1, 0, 0})
	DMember(bool)                                      bClient_PRIVATE                                             OFFSET(get<bool>, {0x31, 1, 0, 0})
};

/// Struct /Script/CommonConversationRuntime.ConversationEntryList
/// Size: 0x0018 (0x000000 - 0x000018)
class FConversationEntryList : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FGameplayTag)                              EntryTag                                                    OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(TArray<FGuid>)                             DestinationList                                             OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/CommonConversationRuntime.CommonDialogueBankParticipant
/// Size: 0x0028 (0x000000 - 0x000028)
class FCommonDialogueBankParticipant : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FText)                                     FallbackName                                                OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FGameplayTag)                              ParticipantName                                             OFFSET(getStruct<T>, {0x10, 4, 0, 0})
	SMember(FLinearColor)                              NodeTint                                                    OFFSET(getStruct<T>, {0x14, 16, 0, 0})
};

/// Struct /Script/CommonConversationRuntime.NetSerializeScriptStructCache_ConvVersion
/// Size: 0x0060 (0x000000 - 0x000060)
class FNetSerializeScriptStructCache_ConvVersion : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(TMap<UScriptStruct*, int32_t>)             ScriptStructsToIndex                                        OFFSET(get<T>, {0x0, 80, 0, 0})
	CMember(TArray<class UScriptStruct*>)              IndexToScriptStructs                                        OFFSET(get<T>, {0x50, 16, 0, 0})
};

/// Struct /Script/CommonConversationRuntime.ConversationChoiceData
/// Size: 0x0008 (0x000000 - 0x000008)
class FConversationChoiceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/CommonConversationRuntime.ConversationChoiceDataHandle
/// Size: 0x0020 (0x000000 - 0x000020)
class FConversationChoiceDataHandle : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/CommonConversationRuntime.ConversationBranchPoint
/// Size: 0x0078 (0x000000 - 0x000078)
class FConversationBranchPoint : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	CMember(TArray<FConversationNodeHandle>)           ReturnScopeStack                                            OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FClientConversationOptionEntry)            ClientChoice                                                OFFSET(getStruct<T>, {0x10, 104, 0, 0})
};

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

