
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CommonConversationRuntime
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteAI
/// dependency: FortniteGame
/// dependency: GameplayAbilities
/// dependency: GameplayTags
/// dependency: ModularGameplay
/// dependency: PlayspaceSystem
/// dependency: ProxyTable
/// dependency: StateDrivenActorRuntime
/// dependency: WorldConditions

/// Class /Script/JunoAdventuresRuntime.JunoAdventuresAnalytics
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoAdventuresAnalytics : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/JunoAdventuresRuntime.JunoContextualMessageConfigCollection
/// Size: 0x0030 (0x000030 - 0x000060)
class UJunoContextualMessageConfigCollection : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(TArray<FJunoSpecializedContextualMessageConfig>) SpecializedConfigs                                    OFFSET(get<T>, {0x30, 16, 0, 0})
	SMember(FJunoContextualMessageConfig)              GeneralConfig                                               OFFSET(getStruct<T>, {0x40, 16, 0, 0})
	SMember(FDataTableRowHandle)                       GeneralConfigTableRow                                       OFFSET(getStruct<T>, {0x50, 16, 0, 0})
};

/// Class /Script/JunoAdventuresRuntime.JunoControllerComponent_ConversationHistory
/// Size: 0x00A8 (0x0001F8 - 0x0002A0)
class UJunoControllerComponent_ConversationHistory : public UFortControllerComponent_ConversationHistory
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 672;

public:


	/// Functions
	// Function /Script/JunoAdventuresRuntime.JunoControllerComponent_ConversationHistory.Client_SetCachedContextualMessageResult
	// void Client_SetCachedContextualMessageResult(FJunoContextualMessageQueryResult Result);                                  // [0xb3c6ce8] Final|Net|NetReliableNative|Event|Private|NetClient 
};

/// Class /Script/JunoAdventuresRuntime.JunoControllerRequirement
/// Size: 0x0000 (0x000030 - 0x000030)
class UJunoControllerRequirement : public UFortControllerRequirement
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/JunoAdventuresRuntime.JunoControllerRequirement_CampResidentsHaveTag
/// Size: 0x0010 (0x000030 - 0x000040)
class UJunoControllerRequirement_CampResidentsHaveTag : public UJunoControllerRequirement
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FGameplayTag)                              RoleTagToValidate                                           OFFSET(getStruct<T>, {0x30, 4, 0, 0})
	SMember(FGameplayTag)                              UniqueIdentifierTagToValidate                               OFFSET(getStruct<T>, {0x34, 4, 0, 0})
	DMember(bool)                                      bIncludeSpeakingNpcInQueries                                OFFSET(get<bool>, {0x38, 1, 0, 0})


	/// Functions
	// Function /Script/JunoAdventuresRuntime.JunoControllerRequirement_CampResidentsHaveTag.ValidateUniqueResidentTag
	// bool ValidateUniqueResidentTag(FGameplayTag& OtherResidentIdentifier);                                                   // [0xb3c7ee0] Final|Native|Private|HasOutParms|Const 
	// Function /Script/JunoAdventuresRuntime.JunoControllerRequirement_CampResidentsHaveTag.ValidateRoleTag
	// bool ValidateRoleTag(FGameplayTag& OtherResidentIdentifier, class UPlayspaceComponent_JunoAIPersistence* RootAIPersistenceComp); // [0xb3c7d78] Final|Native|Private|HasOutParms|Const 
};

/// Class /Script/JunoAdventuresRuntime.JunoControllerRequirement_HasCompletedQuestObjective
/// Size: 0x0020 (0x000030 - 0x000050)
class UJunoControllerRequirement_HasCompletedQuestObjective : public UFortControllerRequirement
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FSoftObjectPath)                           QuestDefinition                                             OFFSET(getStruct<T>, {0x30, 24, 0, 0})
	SMember(FName)                                     ObjectiveBackendName                                        OFFSET(getStruct<T>, {0x48, 4, 0, 0})


	/// Functions
	// Function /Script/JunoAdventuresRuntime.JunoControllerRequirement_HasCompletedQuestObjective.Editor_GetValidObjectives
	// TArray<FName> Editor_GetValidObjectives();                                                                               // [0x7c1634c] Final|Native|Private|Const 
};

/// Class /Script/JunoAdventuresRuntime.JunoControllerRequirement_HasEntryTag
/// Size: 0x0008 (0x000030 - 0x000038)
class UJunoControllerRequirement_HasEntryTag : public UFortControllerRequirement
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FGameplayTag)                              QueryTag                                                    OFFSET(getStruct<T>, {0x30, 4, 0, 0})
};

/// Class /Script/JunoAdventuresRuntime.JunoControllerRequirement_IsFirstConversationWithNPC
/// Size: 0x0000 (0x000030 - 0x000030)
class UJunoControllerRequirement_IsFirstConversationWithNPC : public UJunoControllerRequirement
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/JunoAdventuresRuntime.JunoControllerRequirement_IsFollowingAnotherPlayer
/// Size: 0x0000 (0x000030 - 0x000030)
class UJunoControllerRequirement_IsFollowingAnotherPlayer : public UJunoControllerRequirement
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/JunoAdventuresRuntime.JunoControllerRequirement_IsGeneratingResourcesAndEmpty
/// Size: 0x0008 (0x000030 - 0x000038)
class UJunoControllerRequirement_IsGeneratingResourcesAndEmpty : public UJunoControllerRequirement
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(bool)                                      bRequiresGeneratedPercentageWhenNoLootGenerated             OFFSET(get<bool>, {0x30, 1, 0, 0})
};

/// Class /Script/JunoAdventuresRuntime.JunoControllerRequirement_MerchantHasStock
/// Size: 0x0000 (0x000030 - 0x000030)
class UJunoControllerRequirement_MerchantHasStock : public UJunoControllerRequirement
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/JunoAdventuresRuntime.JunoConversationRequirementDatabase
/// Size: 0x0008 (0x0000F8 - 0x000100)
class UJunoConversationRequirementDatabase : public UFortPlayspaceComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	CMember(class UJunoConversationRequirementMappings*) ConversationRequirementMappingData                        OFFSET(get<T>, {0xF8, 8, 0, 0})
};

/// Class /Script/JunoAdventuresRuntime.JunoConversationRequirementMappings
/// Size: 0x0050 (0x000030 - 0x000080)
class UJunoConversationRequirementMappings : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(TMap<FGameplayTag, UFortControllerRequirement*>) ConversationRequirementMappings                       OFFSET(get<T>, {0x30, 80, 0, 0})
};

/// Class /Script/JunoAdventuresRuntime.JunoConversationRequirement_NearestCampWorldConditionSchema
/// Size: 0x0010 (0x000038 - 0x000048)
class UJunoConversationRequirement_NearestCampWorldConditionSchema : public UWorldConditionSchema
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Class /Script/JunoAdventuresRuntime.JunoConversationRequirement_NearestCampWorldCondition
/// Size: 0x0048 (0x000058 - 0x0000A0)
class UJunoConversationRequirement_NearestCampWorldCondition : public UConversationRequirementNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	DMember(int32_t)                                   CampSlot                                                    OFFSET(get<int32_t>, {0x58, 4, 0, 0})
	SMember(FScalableFloat)                            MaxDistanceFromCamp                                         OFFSET(getStruct<T>, {0x60, 40, 0, 0})
	SMember(FWorldConditionQueryDefinition)            Conditions                                                  OFFSET(getStruct<T>, {0x88, 24, 0, 0})
};

/// Class /Script/JunoAdventuresRuntime.JunoConversationTaskNode_CampFollowerAssignment
/// Size: 0x0008 (0x000190 - 0x000198)
class UJunoConversationTaskNode_CampFollowerAssignment : public UFortConversationTaskNode_Service
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 408;

public:
	DMember(bool)                                      bEnableFollower                                             OFFSET(get<bool>, {0x190, 1, 0, 0})
	DMember(bool)                                      bCampRecruitment                                            OFFSET(get<bool>, {0x191, 1, 0, 0})
};

/// Class /Script/JunoAdventuresRuntime.JunoConversationTaskNode_CampJobAssignment
/// Size: 0x0008 (0x000190 - 0x000198)
class UJunoConversationTaskNode_CampJobAssignment : public UFortConversationTaskNode_Service
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 408;

public:
	SMember(FGameplayTag)                              JobTag                                                      OFFSET(getStruct<T>, {0x190, 4, 0, 0})
	DMember(bool)                                      bRemoveJob                                                  OFFSET(get<bool>, {0x194, 1, 0, 0})
};

/// Class /Script/JunoAdventuresRuntime.JunoConversationTaskNode_CampRecruitment
/// Size: 0x0000 (0x000190 - 0x000190)
class UJunoConversationTaskNode_CampRecruitment : public UFortConversationTaskNode_Service
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Script/JunoAdventuresRuntime.JunoConversationTaskNode_GetResource
/// Size: 0x0038 (0x000190 - 0x0001C8)
class UJunoConversationTaskNode_GetResource : public UFortConversationTaskNode_Service
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 456;

public:
	DMember(int32_t)                                   ResourceSlot                                                OFFSET(get<int32_t>, {0x190, 4, 0, 0})
	SMember(FText)                                     GetTextFormat                                               OFFSET(getStruct<T>, {0x198, 24, 0, 0})
	SMember(FText)                                     FinishedTextFormat                                          OFFSET(getStruct<T>, {0x1B0, 24, 0, 0})
};

/// Class /Script/JunoAdventuresRuntime.JunoConversationTaskNode_GiftNPC
/// Size: 0x0030 (0x000170 - 0x0001A0)
class UJunoConversationTaskNode_GiftNPC : public UFortConversationTaskNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
	SMember(FText)                                     GiftTextFormat                                              OFFSET(getStruct<T>, {0x170, 24, 0, 0})
	DMember(int32_t)                                   MaxChoiceNodesToGenerate                                    OFFSET(get<int32_t>, {0x188, 4, 0, 0})
	CMember(TArray<FGameplayTag>)                      InventoryGroupTypesToPickItemsFrom                          OFFSET(get<T>, {0x190, 16, 0, 0})
};

/// Class /Script/JunoAdventuresRuntime.JunoConversationTaskNode_GrantAwesomePoints
/// Size: 0x0008 (0x000170 - 0x000178)
class UJunoConversationTaskNode_GrantAwesomePoints : public UFortConversationTaskNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 376;

public:
	SMember(FGameplayTag)                              AwesomeInteractionTag                                       OFFSET(getStruct<T>, {0x170, 4, 0, 0})
};

/// Class /Script/JunoAdventuresRuntime.JunoConversationTaskNode_GrantNPCCampReward
/// Size: 0x0000 (0x000190 - 0x000190)
class UJunoConversationTaskNode_GrantNPCCampReward : public UFortConversationTaskNode_Service
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Script/JunoAdventuresRuntime.JunoConversationTaskNode_MarkFirstConversationComplete
/// Size: 0x0000 (0x000170 - 0x000170)
class UJunoConversationTaskNode_MarkFirstConversationComplete : public UFortConversationTaskNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 368;

public:
};

/// Class /Script/JunoAdventuresRuntime.JunoConversationTaskNode_NukeVillager
/// Size: 0x0000 (0x000190 - 0x000190)
class UJunoConversationTaskNode_NukeVillager : public UFortConversationTaskNode_Service
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Script/JunoAdventuresRuntime.JunoConversationTaskNode_RemoteCampRecruitment
/// Size: 0x0048 (0x000190 - 0x0001D8)
class UJunoConversationTaskNode_RemoteCampRecruitment : public UFortConversationTaskNode_Service
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 472;

public:
	DMember(int32_t)                                   CampSlot                                                    OFFSET(get<int32_t>, {0x190, 4, 0, 0})
	SMember(FText)                                     JoinCampTextFormat                                          OFFSET(getStruct<T>, {0x198, 24, 0, 0})
	SMember(FScalableFloat)                            MaxDistanceFromCamp                                         OFFSET(getStruct<T>, {0x1B0, 40, 0, 0})
};

/// Class /Script/JunoAdventuresRuntime.JunoConversationTaskNode_Speech
/// Size: 0x0090 (0x000170 - 0x000200)
class UJunoConversationTaskNode_Speech : public UFortConversationTaskNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 512;

public:
	SMember(FString)                                   MetaIdentifier_Animations                                   OFFSET(getStruct<T>, {0x170, 16, 0, 0})
	SMember(FGameplayTag)                              SpeakerTag                                                  OFFSET(getStruct<T>, {0x180, 4, 0, 0})
	SMember(FGameplayTag)                              ListenerTag                                                 OFFSET(getStruct<T>, {0x184, 4, 0, 0})
	SMember(FGameplayTag)                              DefaultMoodReactionTag                                      OFFSET(getStruct<T>, {0x188, 4, 0, 0})
	SMember(FText)                                     StyledParticipantNameFormat                                 OFFSET(getStruct<T>, {0x190, 24, 0, 0})
	DMember(bool)                                      bUseInlineConfig                                            OFFSET(get<bool>, {0x1A8, 1, 0, 0})
	CMember(class UJunoContextualMessageConfigCollection*) ExternalContextualMessageCollection                     OFFSET(get<T>, {0x1B0, 8, 0, 0})
	CMember(TArray<FJunoSpecializedContextualMessageConfig>) SpecializedConfigs                                    OFFSET(get<T>, {0x1B8, 16, 0, 0})
	SMember(FJunoContextualMessageConfig)              GeneralConfig                                               OFFSET(getStruct<T>, {0x1C8, 16, 0, 0})
	SMember(FDataTableRowHandle)                       GeneralConfigTableRow                                       OFFSET(getStruct<T>, {0x1D8, 16, 0, 0})


	/// Functions
	// Function /Script/JunoAdventuresRuntime.JunoConversationTaskNode_Speech.PlayClientVoiceLine
	// void PlayClientVoiceLine(FConversationContext& Context, FJunoContextualMessageQueryResult& MessageParams);               // [0xb3c772c] Native|Event|Protected|HasOutParms|BlueprintEvent|Const 
};

/// Class /Script/JunoAdventuresRuntime.JunoConversationTaskNode_TagCurrentConversation
/// Size: 0x0020 (0x000170 - 0x000190)
class UJunoConversationTaskNode_TagCurrentConversation : public UFortConversationTaskNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
	SMember(FGameplayTagContainer)                     TagsToApply                                                 OFFSET(getStruct<T>, {0x170, 32, 0, 0})
};

/// Class /Script/JunoAdventuresRuntime.JunoConversationTaskNode_TradeWithMerchant
/// Size: 0x0068 (0x000170 - 0x0001D8)
class UJunoConversationTaskNode_TradeWithMerchant : public UFortConversationTaskNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 472;

public:
	SMember(FText)                                     TradeTextFormat_Single                                      OFFSET(getStruct<T>, {0x170, 24, 0, 0})
	SMember(FText)                                     TradeTextFormat_Plural                                      OFFSET(getStruct<T>, {0x188, 24, 0, 0})
	SMember(FText)                                     NotEnoughForTradeTextFormat_Single                          OFFSET(getStruct<T>, {0x1A0, 24, 0, 0})
	SMember(FText)                                     NotEnoughForTradeTextFormat_Plural                          OFFSET(getStruct<T>, {0x1B8, 24, 0, 0})
	DMember(int32_t)                                   MaxChoiceNodesToGenerate                                    OFFSET(get<int32_t>, {0x1D0, 4, 0, 0})
};

/// Class /Script/JunoAdventuresRuntime.JunoNPCConversationParticipantComponent
/// Size: 0x0098 (0x000628 - 0x0006C0)
class UJunoNPCConversationParticipantComponent : public UFortNPCConversationParticipantComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1728;

public:
	SMember(FMulticastInlineDelegate)                  OnJunoConversationParticipantIconChangedDelegate            OFFSET(getStruct<T>, {0x628, 16, 0, 0})
	CMember(TWeakObjectPtr<UTexture2D*>)               ParticipantIconSmall                                        OFFSET(get<T>, {0x638, 32, 0, 0})


	/// Functions
	// Function /Script/JunoAdventuresRuntime.JunoNPCConversationParticipantComponent.OnRep_ParticipantIconSmall
	// void OnRep_ParticipantIconSmall();                                                                                       // [0xb3c76c8] Final|Native|Protected 
};

/// Class /Script/JunoAdventuresRuntime.JunoChangeInventoryHelper
/// Size: 0x0010 (0x000028 - 0x000038)
class UJunoChangeInventoryHelper : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:


	/// Functions
	// Function /Script/JunoAdventuresRuntime.JunoChangeInventoryHelper.HandleInventoryChangedEvent
	// void HandleInventoryChangedEvent(FJunoItemSlot& ItemSlot, EJunoItemChangeType ChangeType);                               // [0xb3c7290] Final|Native|Public|HasOutParms 
};

/// Class /Script/JunoAdventuresRuntime.JunoConversationTaskNode_CompleteQuestObjective
/// Size: 0x0028 (0x000170 - 0x000198)
class UJunoConversationTaskNode_CompleteQuestObjective : public UFortConversationTaskNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 408;

public:
	CMember(TWeakObjectPtr<UFortQuestItemDefinition_Athena*>) QuestToProgress                                      OFFSET(get<T>, {0x170, 32, 0, 0})
	SMember(FName)                                     ObjectiveBackendName                                        OFFSET(getStruct<T>, {0x190, 4, 0, 0})


	/// Functions
	// Function /Script/JunoAdventuresRuntime.JunoConversationTaskNode_CompleteQuestObjective.Editor_GetValidObjectives
	// TArray<FName> Editor_GetValidObjectives();                                                                               // [0x7c1634c] Final|Native|Private|Const 
};

/// Class /Script/JunoAdventuresRuntime.JunoConversationTaskNode_GrantQuest
/// Size: 0x0020 (0x000170 - 0x000190)
class UJunoConversationTaskNode_GrantQuest : public UFortConversationTaskNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
	CMember(TWeakObjectPtr<UFortQuestItemDefinition_Athena*>) QuestToGrant                                         OFFSET(get<T>, {0x170, 32, 0, 0})
};

/// Class /Script/JunoAdventuresRuntime.JunoConversationTaskNode_TurnInQuest
/// Size: 0x0020 (0x000170 - 0x000190)
class UJunoConversationTaskNode_TurnInQuest : public UFortConversationTaskNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
	CMember(TWeakObjectPtr<UFortQuestItemDefinition_Athena*>) QuestToTurnIn                                        OFFSET(get<T>, {0x170, 32, 0, 0})
};

/// Class /Script/JunoAdventuresRuntime.JunoControllerRequirement_HasCompletedNumQuestObjectives
/// Size: 0x0048 (0x000030 - 0x000078)
class UJunoControllerRequirement_HasCompletedNumQuestObjectives : public UFortControllerRequirement
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	SMember(FSoftObjectPath)                           QuestDefinition                                             OFFSET(getStruct<T>, {0x30, 24, 0, 0})
	SMember(FThresholdTestConfig)                      RequiredCount                                               OFFSET(getStruct<T>, {0x48, 48, 0, 0})
};

/// Class /Script/JunoAdventuresRuntime.JunoControllerRequirement_IsQuestActive
/// Size: 0x0018 (0x000030 - 0x000048)
class UJunoControllerRequirement_IsQuestActive : public UFortControllerRequirement
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FSoftObjectPath)                           QuestDefinition                                             OFFSET(getStruct<T>, {0x30, 24, 0, 0})
};

/// Class /Script/JunoAdventuresRuntime.JunoTokenReceiver
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoTokenReceiver : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/JunoAdventuresRuntime.JunoQuestGiverComponent
/// Size: 0x0030 (0x0000A0 - 0x0000D0)
class UJunoQuestGiverComponent : public UGameFrameworkComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	SMember(FString)                                   GrantableQuestID                                            OFFSET(getStruct<T>, {0xA0, 16, 0, 0})
	SMember(FGameplayTagContainer)                     GrantableQuestTags                                          OFFSET(getStruct<T>, {0xB0, 32, 0, 0})


	/// Functions
	// Function /Script/JunoAdventuresRuntime.JunoQuestGiverComponent.RollGrantableQuestID
	// void RollGrantableQuestID();                                                                                             // [0xb3c79f4] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoAdventuresRuntime.JunoQuestGiverComponent.HandleOnJunoQuestComplete
	// void HandleOnJunoQuestComplete(TScriptInterface<Class>& QuestInstance);                                                  // [0xb3c7460] Final|Native|Private|HasOutParms 
	// Function /Script/JunoAdventuresRuntime.JunoQuestGiverComponent.GetGrantableQuestID
	// FString GetGrantableQuestID();                                                                                           // [0xb3c6e34] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoAdventuresRuntime.JunoQuestGiverComponent.BindToQuestManagerDelegates
	// void BindToQuestManagerDelegates();                                                                                      // [0xb3c6cd4] Final|Native|Private 
};

/// Class /Script/JunoAdventuresRuntime.JunoQuestSpawnPointComponent
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UJunoQuestSpawnPointComponent : public UGameFrameworkComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
};

/// Class /Script/JunoAdventuresRuntime.JunoTokenHandlerAIComponent
/// Size: 0x0010 (0x0000A8 - 0x0000B8)
class UJunoTokenHandlerAIComponent : public UFortPawnComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:


	/// Functions
	// Function /Script/JunoAdventuresRuntime.JunoTokenHandlerAIComponent.ReceiveToken
	// void ReceiveToken(FGameplayTag& JunoToken);                                                                              // [0xb3c7928] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoAdventuresRuntime.JunoTokenHandlerAIComponent.GetSavedTokens
	// FGameplayTagContainer GetSavedTokens();                                                                                  // [0xb3c7260] Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/JunoAdventuresRuntime.JunoQuestPoolDataAsset
/// Size: 0x0018 (0x000030 - 0x000048)
class UJunoQuestPoolDataAsset : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(TArray<FJunoQuestPoolDataAssetEntry>)      QuestEntries                                                OFFSET(get<T>, {0x30, 16, 0, 0})
	SMember(FGameplayTag)                              QuestPoolTag                                                OFFSET(getStruct<T>, {0x40, 4, 0, 0})
};

/// Class /Script/JunoAdventuresRuntime.JunoQuestDatabaseComponent
/// Size: 0x00B0 (0x0000F8 - 0x0001A8)
class UJunoQuestDatabaseComponent : public UFortPlayspaceComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 424;

public:
	CMember(TArray<class UJunoQuestPoolDataAsset*>)    QuestPoolAssets                                             OFFSET(get<T>, {0x198, 16, 0, 0})


	/// Functions
	// Function /Script/JunoAdventuresRuntime.JunoQuestDatabaseComponent.GetJunoQuestState
	// EJunoQuestState GetJunoQuestState(FString QuestID);                                                                      // [0xb3c6f80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/JunoAdventuresRuntime.JunoQuestManagerComponent
/// Size: 0x0060 (0x000450 - 0x0004B0)
class UJunoQuestManagerComponent : public UFortPlayspaceComponent_Quests
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1200;

public:


	/// Functions
	// Function /Script/JunoAdventuresRuntime.JunoQuestManagerComponent.SendQuestStatEvent
	// void SendQuestStatEvent(EFortQuestObjectiveStatEvent Type, FGameplayTagContainer SourceTags, FGameplayTagContainer TargetTags, int32_t Count); // [0xb3c7a08] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/JunoAdventuresRuntime.JunoQuestManagerComponent.GetQuestGiverForQuestID
	// class AActor* GetQuestGiverForQuestID(FString QuestID);                                                                  // [0xb3c70ec] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoAdventuresRuntime.JunoQuestManagerComponent.ActivateQuest
	// void ActivateQuest(class UFortQuestItemDefinition_Athena* QuestDefinition, class AActor* QuestGiver);                    // [0xb3c6c10] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
};

/// Class /Script/JunoAdventuresRuntime.JunoEncounterManagerComponent
/// Size: 0x0000 (0x0000F8 - 0x0000F8)
class UJunoEncounterManagerComponent : public UFortPlayspaceComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
};

/// Class /Script/JunoAdventuresRuntime.JunoPOIQuestComponent
/// Size: 0x0000 (0x000450 - 0x000450)
class UJunoPOIQuestComponent : public UFortPlayspaceComponent_Quests
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1104;

public:
};

/// Class /Script/JunoAdventuresRuntime.JunoActionsDB
/// Size: 0x0050 (0x000028 - 0x000078)
class UJunoActionsDB : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	CMember(TMap<FGameplayTag, FMappedJunoActions>)    JunoTokenToJunoActions                                      OFFSET(get<T>, {0x28, 80, 0, 0})
};

/// Class /Script/JunoAdventuresRuntime.PlayspaceComponent_JunoActionsDB
/// Size: 0x0010 (0x0000F8 - 0x000108)
class UPlayspaceComponent_JunoActionsDB : public UFortPlayspaceComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:
	CMember(TArray<class UClass*>)                     JunoActionsDBs                                              OFFSET(get<T>, {0xF8, 16, 0, 0})
};

/// Class /Script/JunoAdventuresRuntime.FortQuestDefinitionComponent_Juno
/// Size: 0x00A8 (0x000078 - 0x000120)
class UFortQuestDefinitionComponent_Juno : public UFortQuestDefinitionComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	SMember(FJunoQuestData)                            JunoQuestData                                               OFFSET(getStruct<T>, {0x78, 168, 0, 0})


	/// Functions
	// Function /Script/JunoAdventuresRuntime.FortQuestDefinitionComponent_Juno.Editor_GetValidObjectiveNames
	// TArray<FName> Editor_GetValidObjectiveNames();                                                                           // [0x7c1634c] Final|Native|Private|Const 
};

/// Class /Script/JunoAdventuresRuntime.FortQuestDefinitionComponent_JunoEncounter
/// Size: 0x0000 (0x000120 - 0x000120)
class UFortQuestDefinitionComponent_JunoEncounter : public UFortQuestDefinitionComponent_Juno
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
};

/// Class /Script/JunoAdventuresRuntime.FortQuestItemComponent_Juno
/// Size: 0x0000 (0x000030 - 0x000030)
class UFortQuestItemComponent_Juno : public UFortQuestItemComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/JunoAdventuresRuntime.FortQuestItemComponent_JunoEncounter
/// Size: 0x0000 (0x000030 - 0x000030)
class UFortQuestItemComponent_JunoEncounter : public UFortQuestItemComponent_Juno
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/JunoAdventuresRuntime.FortAthenaAISpawnerDataComponent_JunoConversation
/// Size: 0x0030 (0x000268 - 0x000298)
class UFortAthenaAISpawnerDataComponent_JunoConversation : public UFortAthenaAISpawnerDataComponent_AIBotConversation
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 664;

public:
	CMember(class UProxyTable*)                        NPCMoodReactionAnimTable                                    OFFSET(get<T>, {0x268, 8, 0, 0})
	SMember(FGameplayTagContainer)                     GrantableQuestTags                                          OFFSET(getStruct<T>, {0x270, 32, 0, 0})
	DMember(bool)                                      bShouldCreateMerchantComponent                              OFFSET(get<bool>, {0x290, 1, 0, 0})
};

/// Class /Script/JunoAdventuresRuntime.JunoAdventuresBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoAdventuresBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/JunoAdventuresRuntime.JunoAdventuresBlueprintLibrary.GetJunoQuestManager
	// class UJunoQuestManagerComponent* GetJunoQuestManager(class UObject* WorldContextObject);                                // [0xb3c6f00] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/JunoAdventuresRuntime.JunoAdventuresBlueprintLibrary.GetJunoQuestDatabase
	// class UJunoQuestDatabaseComponent* GetJunoQuestDatabase(class UObject* WorldContextObject);                              // [0xb3c6e80] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/JunoAdventuresRuntime.JunoCheatManager_Adventures
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoCheatManager_Adventures : public UChildCheatManager
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/JunoAdventuresRuntime.JunoCheatManager_Adventures.JunoSpawnVisitorInClosestCamp
	// void JunoSpawnVisitorInClosestCamp(FString PartialUniqueAIIdentifier, int32_t Count);                                    // [0x8f976ac] Final|Exec|Native|Private|Const 
	// Function /Script/JunoAdventuresRuntime.JunoCheatManager_Adventures.JunoRepopulateAvailableQuestsWithTags
	// void JunoRepopulateAvailableQuestsWithTags(FString QuestPoolTags);                                                       // [0xb3c7568] Final|BlueprintAuthorityOnly|Exec|Native|Private 
	// Function /Script/JunoAdventuresRuntime.JunoCheatManager_Adventures.JunoRepopulateAvailableQuests
	// void JunoRepopulateAvailableQuests();                                                                                    // [0xb3c74f0] Final|BlueprintAuthorityOnly|Exec|Native|Private 
	// Function /Script/JunoAdventuresRuntime.JunoCheatManager_Adventures.JunoQueueScriptRowMessagesForNpcConversation
	// void JunoQueueScriptRowMessagesForNpcConversation(FString ScriptName, FString RowName);                                  // [0x92ab884] Final|BlueprintAuthorityOnly|Exec|Native|Private 
	// Function /Script/JunoAdventuresRuntime.JunoCheatManager_Adventures.JunoPrintNPCsInfo
	// void JunoPrintNPCsInfo(bool bIgnoreAIsWithNoAssignment);                                                                 // [0x63fe5cc] Final|Exec|Native|Private|Const 
	// Function /Script/JunoAdventuresRuntime.JunoCheatManager_Adventures.JunoPrintCurrentConversationInfo
	// void JunoPrintCurrentConversationInfo();                                                                                 // [0x36203b0] Final|Exec|Native|Private|Const 
	// Function /Script/JunoAdventuresRuntime.JunoCheatManager_Adventures.JunoInjectDisplayTextForNpcConversation
	// void JunoInjectDisplayTextForNpcConversation(FString TestString);                                                        // [0x6b8287c] Final|BlueprintAuthorityOnly|Exec|Native|Private|Const 
};

/// Struct /Script/JunoAdventuresRuntime.JunoContextualMessageConfigTableRow
/// Size: 0x0010 (0x000008 - 0x000018)
class FJunoContextualMessageConfigTableRow : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FJunoContextualMessageConfig)              MessageConfig                                               OFFSET(getStruct<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/JunoAdventuresRuntime.JunoContextualMessageConfig
/// Size: 0x0010 (0x000000 - 0x000010)
class FJunoContextualMessageConfig : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FJunoContextualMessageCandidate>)   ContextualMessages                                          OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/JunoAdventuresRuntime.JunoContextualMessageCandidate
/// Size: 0x0088 (0x000000 - 0x000088)
class FJunoContextualMessageCandidate : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	CMember(EContextRequirementMatchPolicy)            RequirementMatchPolicy                                      OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(bool)                                      bUseJunoContextRequirements                                 OFFSET(get<bool>, {0x1, 1, 0, 0})
	CMember(TArray<FFortConversationContextRequirement>) ContextRequirements                                       OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(TArray<FJunoConversationContextRequirement>) JunoContextRequirements                                   OFFSET(get<T>, {0x18, 16, 0, 0})
	SMember(FScalableFloat)                            Priority                                                    OFFSET(getStruct<T>, {0x28, 40, 0, 0})
	SMember(FScalableFloat)                            Weight                                                      OFFSET(getStruct<T>, {0x50, 40, 0, 0})
	CMember(TArray<FJunoContexualMessageContainer>)    Messages                                                    OFFSET(get<T>, {0x78, 16, 0, 0})
};

/// Struct /Script/JunoAdventuresRuntime.JunoContexualMessageContainer
/// Size: 0x0050 (0x000000 - 0x000050)
class FJunoContexualMessageContainer : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FText)                                     Message                                                     OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FGameplayTag)                              VoiceOverTag                                                OFFSET(getStruct<T>, {0x18, 4, 0, 0})
	SMember(FGameplayTag)                              MoodReactionTag                                             OFFSET(getStruct<T>, {0x1C, 4, 0, 0})
	CMember(TArray<FConversationNodeParameterPair>)    MetadataParameters                                          OFFSET(get<T>, {0x20, 16, 0, 0})
	SMember(FGameplayTagContainer)                     MetadataTags                                                OFFSET(getStruct<T>, {0x30, 32, 0, 0})
};

/// Struct /Script/JunoAdventuresRuntime.JunoConversationContextRequirement
/// Size: 0x0008 (0x000000 - 0x000008)
class FJunoConversationContextRequirement : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FGameplayTag)                              ParticipantID                                               OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FGameplayTag)                              RequirementTag                                              OFFSET(getStruct<T>, {0x4, 4, 0, 0})
};

/// Struct /Script/JunoAdventuresRuntime.JunoContextualMessageQueryResult
/// Size: 0x0058 (0x000000 - 0x000058)
class FJunoContextualMessageQueryResult : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FText)                                     Message                                                     OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FGameplayTag)                              MoodReactionTag                                             OFFSET(getStruct<T>, {0x18, 4, 0, 0})
	SMember(FGameplayTag)                              VoiceOverTag                                                OFFSET(getStruct<T>, {0x1C, 4, 0, 0})
	CMember(TArray<FConversationNodeParameterPair>)    MetadataParameters                                          OFFSET(get<T>, {0x20, 16, 0, 0})
	SMember(FGameplayTagContainer)                     MetadataTags                                                OFFSET(getStruct<T>, {0x30, 32, 0, 0})
	DMember(bool)                                      bAreConsecutiveMessagesPending                              OFFSET(get<bool>, {0x50, 1, 0, 0})
};

/// Struct /Script/JunoAdventuresRuntime.JunoSpecializedContextualMessageConfig
/// Size: 0x00B8 (0x000000 - 0x0000B8)
class FJunoSpecializedContextualMessageConfig : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	SMember(FGameplayTagQuery)                         NPCActorTagQuery                                            OFFSET(getStruct<T>, {0x0, 72, 0, 0})
	SMember(FScalableFloat)                            Priority                                                    OFFSET(getStruct<T>, {0x48, 40, 0, 0})
	SMember(FScalableFloat)                            Weight                                                      OFFSET(getStruct<T>, {0x70, 40, 0, 0})
	SMember(FJunoContextualMessageConfig)              MessageConfig                                               OFFSET(getStruct<T>, {0x98, 16, 0, 0})
	SMember(FDataTableRowHandle)                       MessageConfigTableRow                                       OFFSET(getStruct<T>, {0xA8, 16, 0, 0})
};

/// Struct /Script/JunoAdventuresRuntime.JunoConversationGetResourceTaskMemory
/// Size: 0x0010 (0x000000 - 0x000010)
class FJunoConversationGetResourceTaskMemory : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/JunoAdventuresRuntime.JunoConversationGiftNPCTaskMemory
/// Size: 0x0010 (0x000000 - 0x000010)
class FJunoConversationGiftNPCTaskMemory : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/JunoAdventuresRuntime.JunoConversationRemoteCampRecruitmentTaskMemory
/// Size: 0x000C (0x000000 - 0x00000C)
class FJunoConversationRemoteCampRecruitmentTaskMemory : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
};

/// Struct /Script/JunoAdventuresRuntime.QuestPropSpawnInfo
/// Size: 0x0088 (0x000000 - 0x000088)
class FQuestPropSpawnInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	CMember(TWeakObjectPtr<UClass*>)                   ClassToSpawn                                                OFFSET(get<T>, {0x0, 32, 0, 0})
	SMember(FGameplayTagContainer)                     RequiredTags                                                OFFSET(getStruct<T>, {0x20, 32, 0, 0})
	SMember(FGameplayTagContainer)                     ForbiddenTags                                               OFFSET(getStruct<T>, {0x40, 32, 0, 0})
	DMember(bool)                                      bUseMinMaxDistances                                         OFFSET(get<bool>, {0x60, 1, 0, 0})
	SMember(FVector2D)                                 MinMaxDistanceFromOtherQuestPropActors                      OFFSET(getStruct<T>, {0x68, 16, 0, 0})
	SMember(FVector2D)                                 MinMaxDistanceFromQuestGiver                                OFFSET(getStruct<T>, {0x78, 16, 0, 0})
};

/// Struct /Script/JunoAdventuresRuntime.QuestPropSpawnInfoContainer
/// Size: 0x0010 (0x000000 - 0x000010)
class FQuestPropSpawnInfoContainer : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FQuestPropSpawnInfo>)               QuestPropSpawnInfos                                         OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/JunoAdventuresRuntime.QuestTokenMappingContainer
/// Size: 0x0050 (0x000000 - 0x000050)
class FQuestTokenMappingContainer : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TMap<EJunoTokenReceiverType, FGameplayTagContainer>) QuestTokens                                       OFFSET(get<T>, {0x0, 80, 0, 0})
};

/// Struct /Script/JunoAdventuresRuntime.QuestTokenMappings
/// Size: 0x0050 (0x000000 - 0x000050)
class FQuestTokenMappings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TMap<FName, FQuestTokenMappingContainer>)  ObjectiveQuestTokensToGrant                                 OFFSET(get<T>, {0x0, 80, 0, 0})
};

/// Struct /Script/JunoAdventuresRuntime.JunoQuestData
/// Size: 0x00A8 (0x000000 - 0x0000A8)
class FJunoQuestData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	CMember(TMap<FName, FQuestPropSpawnInfoContainer>) ObjectiveQuestPropActorsToSpawn                             OFFSET(get<T>, {0x0, 80, 0, 0})
	SMember(FQuestTokenMappings)                       QuestTokenMappings                                          OFFSET(getStruct<T>, {0x50, 80, 0, 0})
	DMember(int32_t)                                   AwesomePointsToGrant                                        OFFSET(get<int32_t>, {0xA0, 4, 0, 0})
};

/// Struct /Script/JunoAdventuresRuntime.JunoChangeInventoryEventEntry
/// Size: 0x0030 (0x000000 - 0x000030)
class FJunoChangeInventoryEventEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FStateDrivenTagQuery)                      ItemTagQuery                                                OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FStateDrivenFloat)                         ItemCount                                                   OFFSET(getStruct<T>, {0x18, 24, 0, 0})
};

/// Struct /Script/JunoAdventuresRuntime.JunoStateDrivenEvent_ChangeInventory
/// Size: 0x0028 (0x000058 - 0x000080)
class FJunoStateDrivenEvent_ChangeInventory : public FStateDrivenEvent_InteractionBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(TArray<FJunoChangeInventoryEventEntry>)    ItemRequirements                                            OFFSET(get<T>, {0x58, 16, 0, 0})
	DMember(bool)                                      bExactRequirements                                          OFFSET(get<bool>, {0x68, 1, 0, 0})
	CMember(class UJunoChangeInventoryHelper*)         ChangeInventoryHelper                                       OFFSET(get<T>, {0x70, 8, 0, 0})
	CMember(TWeakObjectPtr<AFortPawn*>)                SavedInteractingPawn                                        OFFSET(get<T>, {0x78, 8, 0, 0})
};

/// Struct /Script/JunoAdventuresRuntime.JunoStateDrivenEvent_InsertItem
/// Size: 0x0050 (0x000058 - 0x0000A8)
class FJunoStateDrivenEvent_InsertItem : public FStateDrivenEvent_InteractionBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	CMember(EJunoInsertItemType)                       InsertType                                                  OFFSET(get<T>, {0x58, 1, 0, 0})
	SMember(FStateDrivenTagQuery)                      EquippedItemTagQuery                                        OFFSET(getStruct<T>, {0x60, 24, 0, 0})
	SMember(FStateDrivenTagQuery)                      OffHandItemTagQuery                                         OFFSET(getStruct<T>, {0x78, 24, 0, 0})
	SMember(FStateDrivenTagQuery)                      AnyHandItemTagQuery                                         OFFSET(getStruct<T>, {0x90, 24, 0, 0})
};

/// Struct /Script/JunoAdventuresRuntime.JunoQuestPoolDataAssetEntry
/// Size: 0x0010 (0x000000 - 0x000010)
class FJunoQuestPoolDataAssetEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class UFortQuestItemDefinition*)           QuestDefinition                                             OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(bool)                                      bIsRepeatable                                               OFFSET(get<bool>, {0x8, 1, 0, 0})
};

/// Struct /Script/JunoAdventuresRuntime.JunoQuestIDListWrapper
/// Size: 0x0010 (0x000000 - 0x000010)
class FJunoQuestIDListWrapper : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/JunoAdventuresRuntime.JunoQuestRuntimeEntry
/// Size: 0x0018 (0x000000 - 0x000018)
class FJunoQuestRuntimeEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/JunoAdventuresRuntime.ActiveQuestInfo
/// Size: 0x00D0 (0x000000 - 0x0000D0)
class FActiveQuestInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	CMember(class AActor*)                             QuestGiver                                                  OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/JunoAdventuresRuntime.MappedJunoActions
/// Size: 0x0010 (0x000000 - 0x000010)
class FMappedJunoActions : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<class UJunoActionConfig*>)          MappedJunoActions                                           OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Enum /Script/JunoAdventuresRuntime.EJunoNPCJoinReason
/// Size: 0x03
enum class EJunoNPCJoinReason : uint8_t
{
	EJunoNPCJoinReason__StandardRecruitment                                          = 0,
	EJunoNPCJoinReason__RemoteRecruitment                                            = 1,
	EJunoNPCJoinReason__EJunoNPCJoinReason_MAX                                       = 2
};

/// Enum /Script/JunoAdventuresRuntime.EJunoTokenReceiverType
/// Size: 0x03
enum class EJunoTokenReceiverType : uint8_t
{
	EJunoTokenReceiverType__QuestGiver                                               = 0,
	EJunoTokenReceiverType__QuestGiverBoundPlayspace                                 = 1,
	EJunoTokenReceiverType__EJunoTokenReceiverType_MAX                               = 2
};

/// Enum /Script/JunoAdventuresRuntime.EJunoInsertItemType
/// Size: 0x04
enum class EJunoInsertItemType : uint8_t
{
	EJunoInsertItemType__Equipped                                                    = 0,
	EJunoInsertItemType__OffHand                                                     = 1,
	EJunoInsertItemType__Any                                                         = 2,
	EJunoInsertItemType__EJunoInsertItemType_MAX                                     = 3
};

/// Enum /Script/JunoAdventuresRuntime.EJunoQuestState
/// Size: 0x06
enum class EJunoQuestState : uint8_t
{
	EJunoQuestState__Invalid                                                         = 0,
	EJunoQuestState__Available                                                       = 1,
	EJunoQuestState__Rolled                                                          = 2,
	EJunoQuestState__InProgress                                                      = 3,
	EJunoQuestState__Completed                                                       = 4,
	EJunoQuestState__EJunoQuestState_MAX                                             = 5
};

