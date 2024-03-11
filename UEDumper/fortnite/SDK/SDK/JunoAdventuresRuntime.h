
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
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

/// Class /Script/JunoAdventuresRuntime.JunoAdventuresAnalytics
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoAdventuresAnalytics : public UObject
{ 
public:
};

/// Struct /Script/JunoAdventuresRuntime.JunoConversationContextRequirement
/// Size: 0x0008 (0x000000 - 0x000008)
struct FJunoConversationContextRequirement
{ 
	FGameplayTag                                       ParticipantID;                                              // 0x0000   (0x0004)  
	FGameplayTag                                       RequirementTag;                                             // 0x0004   (0x0004)  
};

/// Struct /Script/JunoAdventuresRuntime.JunoContexualMessageContainer
/// Size: 0x0050 (0x000000 - 0x000050)
struct FJunoContexualMessageContainer
{ 
	SDK_UNDEFINED(24,14356) /* FText */                __um(Message);                                              // 0x0000   (0x0018)  
	FGameplayTag                                       VoiceOverTag;                                               // 0x0018   (0x0004)  
	FGameplayTag                                       MoodReactionTag;                                            // 0x001C   (0x0004)  
	TArray<FConversationNodeParameterPair>             MetadataParameters;                                         // 0x0020   (0x0010)  
	FGameplayTagContainer                              MetadataTags;                                               // 0x0030   (0x0020)  
};

/// Struct /Script/JunoAdventuresRuntime.JunoContextualMessageCandidate
/// Size: 0x0088 (0x000000 - 0x000088)
struct FJunoContextualMessageCandidate
{ 
	EContextRequirementMatchPolicy                     RequirementMatchPolicy;                                     // 0x0000   (0x0001)  
	bool                                               bUseJunoContextRequirements;                                // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x0002   (0x0006)  MISSED
	TArray<FFortConversationContextRequirement>        ContextRequirements;                                        // 0x0008   (0x0010)  
	TArray<FJunoConversationContextRequirement>        JunoContextRequirements;                                    // 0x0018   (0x0010)  
	FScalableFloat                                     Priority;                                                   // 0x0028   (0x0028)  
	FScalableFloat                                     Weight;                                                     // 0x0050   (0x0028)  
	TArray<FJunoContexualMessageContainer>             Messages;                                                   // 0x0078   (0x0010)  
};

/// Struct /Script/JunoAdventuresRuntime.JunoContextualMessageConfig
/// Size: 0x0010 (0x000000 - 0x000010)
struct FJunoContextualMessageConfig
{ 
	TArray<FJunoContextualMessageCandidate>            ContextualMessages;                                         // 0x0000   (0x0010)  
};

/// Struct /Script/JunoAdventuresRuntime.JunoSpecializedContextualMessageConfig
/// Size: 0x00B8 (0x000000 - 0x0000B8)
struct FJunoSpecializedContextualMessageConfig
{ 
	FGameplayTagQuery                                  NPCActorTagQuery;                                           // 0x0000   (0x0048)  
	FScalableFloat                                     Priority;                                                   // 0x0048   (0x0028)  
	FScalableFloat                                     Weight;                                                     // 0x0070   (0x0028)  
	FJunoContextualMessageConfig                       MessageConfig;                                              // 0x0098   (0x0010)  
	FDataTableRowHandle                                MessageConfigTableRow;                                      // 0x00A8   (0x0010)  
};

/// Class /Script/JunoAdventuresRuntime.JunoContextualMessageConfigCollection
/// Size: 0x0030 (0x000030 - 0x000060)
class UJunoContextualMessageConfigCollection : public UDataAsset
{ 
public:
	TArray<FJunoSpecializedContextualMessageConfig>    SpecializedConfigs;                                         // 0x0030   (0x0010)  
	FJunoContextualMessageConfig                       GeneralConfig;                                              // 0x0040   (0x0010)  
	FDataTableRowHandle                                GeneralConfigTableRow;                                      // 0x0050   (0x0010)  
};

/// Class /Script/JunoAdventuresRuntime.JunoControllerComponent_ConversationHistory
/// Size: 0x00A8 (0x0001F8 - 0x0002A0)
class UJunoControllerComponent_ConversationHistory : public UFortControllerComponent_ConversationHistory
{ 
public:
	unsigned char                                      UnknownData00_1[0xA8];                                      // 0x01F8   (0x00A8)  MISSED


	/// Functions
	// Function /Script/JunoAdventuresRuntime.JunoControllerComponent_ConversationHistory.Client_SetCachedContextualMessageResult
	// void Client_SetCachedContextualMessageResult(FJunoContextualMessageQueryResult Result);                               // [0xb3c6ce8] Final|Net|NetReliableNative|Event|Private|NetClient 
};

/// Class /Script/JunoAdventuresRuntime.JunoControllerRequirement
/// Size: 0x0000 (0x000030 - 0x000030)
class UJunoControllerRequirement : public UFortControllerRequirement
{ 
public:
};

/// Class /Script/JunoAdventuresRuntime.JunoControllerRequirement_CampResidentsHaveTag
/// Size: 0x0010 (0x000030 - 0x000040)
class UJunoControllerRequirement_CampResidentsHaveTag : public UJunoControllerRequirement
{ 
public:
	FGameplayTag                                       RoleTagToValidate;                                          // 0x0030   (0x0004)  
	FGameplayTag                                       UniqueIdentifierTagToValidate;                              // 0x0034   (0x0004)  
	bool                                               bIncludeSpeakingNpcInQueries;                               // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0039   (0x0007)  MISSED


	/// Functions
	// Function /Script/JunoAdventuresRuntime.JunoControllerRequirement_CampResidentsHaveTag.ValidateUniqueResidentTag
	// bool ValidateUniqueResidentTag(FGameplayTag& OtherResidentIdentifier);                                                // [0xb3c7ee0] Final|Native|Private|HasOutParms|Const 
	// Function /Script/JunoAdventuresRuntime.JunoControllerRequirement_CampResidentsHaveTag.ValidateRoleTag
	// bool ValidateRoleTag(FGameplayTag& OtherResidentIdentifier, class UPlayspaceComponent_JunoAIPersistence* RootAIPersistenceComp); // [0xb3c7d78] Final|Native|Private|HasOutParms|Const 
};

/// Class /Script/JunoAdventuresRuntime.JunoControllerRequirement_HasCompletedQuestObjective
/// Size: 0x0020 (0x000030 - 0x000050)
class UJunoControllerRequirement_HasCompletedQuestObjective : public UFortControllerRequirement
{ 
public:
	FSoftObjectPath                                    QuestDefinition;                                            // 0x0030   (0x0018)  
	FName                                              ObjectiveBackendName;                                       // 0x0048   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x004C   (0x0004)  MISSED


	/// Functions
	// Function /Script/JunoAdventuresRuntime.JunoControllerRequirement_HasCompletedQuestObjective.Editor_GetValidObjectives
	// TArray<FName> Editor_GetValidObjectives();                                                                            // [0x7c1634c] Final|Native|Private|Const 
};

/// Class /Script/JunoAdventuresRuntime.JunoControllerRequirement_HasEntryTag
/// Size: 0x0008 (0x000030 - 0x000038)
class UJunoControllerRequirement_HasEntryTag : public UFortControllerRequirement
{ 
public:
	FGameplayTag                                       QueryTag;                                                   // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0034   (0x0004)  MISSED
};

/// Class /Script/JunoAdventuresRuntime.JunoControllerRequirement_IsFirstConversationWithNPC
/// Size: 0x0000 (0x000030 - 0x000030)
class UJunoControllerRequirement_IsFirstConversationWithNPC : public UJunoControllerRequirement
{ 
public:
};

/// Class /Script/JunoAdventuresRuntime.JunoControllerRequirement_IsFollowingAnotherPlayer
/// Size: 0x0000 (0x000030 - 0x000030)
class UJunoControllerRequirement_IsFollowingAnotherPlayer : public UJunoControllerRequirement
{ 
public:
};

/// Class /Script/JunoAdventuresRuntime.JunoControllerRequirement_IsGeneratingResourcesAndEmpty
/// Size: 0x0008 (0x000030 - 0x000038)
class UJunoControllerRequirement_IsGeneratingResourcesAndEmpty : public UJunoControllerRequirement
{ 
public:
	bool                                               bRequiresGeneratedPercentageWhenNoLootGenerated;            // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0031   (0x0007)  MISSED
};

/// Class /Script/JunoAdventuresRuntime.JunoControllerRequirement_MerchantHasStock
/// Size: 0x0000 (0x000030 - 0x000030)
class UJunoControllerRequirement_MerchantHasStock : public UJunoControllerRequirement
{ 
public:
};

/// Class /Script/JunoAdventuresRuntime.JunoConversationRequirementDatabase
/// Size: 0x0008 (0x0000F8 - 0x000100)
class UJunoConversationRequirementDatabase : public UFortPlayspaceComponent
{ 
public:
	class UJunoConversationRequirementMappings*        ConversationRequirementMappingData;                         // 0x00F8   (0x0008)  
};

/// Class /Script/JunoAdventuresRuntime.JunoConversationRequirementMappings
/// Size: 0x0050 (0x000030 - 0x000080)
class UJunoConversationRequirementMappings : public UDataAsset
{ 
public:
	SDK_UNDEFINED(80,14357) /* TMap<FGameplayTag, UFortControllerRequirement*> */ __um(ConversationRequirementMappings); // 0x0030   (0x0050)  
};

/// Class /Script/JunoAdventuresRuntime.JunoConversationRequirement_NearestCampWorldConditionSchema
/// Size: 0x0010 (0x000038 - 0x000048)
class UJunoConversationRequirement_NearestCampWorldConditionSchema : public UWorldConditionSchema
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0038   (0x0010)  MISSED
};

/// Class /Script/JunoAdventuresRuntime.JunoConversationRequirement_NearestCampWorldCondition
/// Size: 0x0048 (0x000058 - 0x0000A0)
class UJunoConversationRequirement_NearestCampWorldCondition : public UConversationRequirementNode
{ 
public:
	int32_t                                            CampSlot;                                                   // 0x0058   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x005C   (0x0004)  MISSED
	FScalableFloat                                     MaxDistanceFromCamp;                                        // 0x0060   (0x0028)  
	FWorldConditionQueryDefinition                     Conditions;                                                 // 0x0088   (0x0018)  
};

/// Class /Script/JunoAdventuresRuntime.JunoConversationTaskNode_CampFollowerAssignment
/// Size: 0x0008 (0x000190 - 0x000198)
class UJunoConversationTaskNode_CampFollowerAssignment : public UFortConversationTaskNode_Service
{ 
public:
	bool                                               bEnableFollower;                                            // 0x0190   (0x0001)  
	bool                                               bCampRecruitment;                                           // 0x0191   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x0192   (0x0006)  MISSED
};

/// Class /Script/JunoAdventuresRuntime.JunoConversationTaskNode_CampJobAssignment
/// Size: 0x0008 (0x000190 - 0x000198)
class UJunoConversationTaskNode_CampJobAssignment : public UFortConversationTaskNode_Service
{ 
public:
	FGameplayTag                                       JobTag;                                                     // 0x0190   (0x0004)  
	bool                                               bRemoveJob;                                                 // 0x0194   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0195   (0x0003)  MISSED
};

/// Class /Script/JunoAdventuresRuntime.JunoConversationTaskNode_CampRecruitment
/// Size: 0x0000 (0x000190 - 0x000190)
class UJunoConversationTaskNode_CampRecruitment : public UFortConversationTaskNode_Service
{ 
public:
};

/// Class /Script/JunoAdventuresRuntime.JunoConversationTaskNode_GetResource
/// Size: 0x0038 (0x000190 - 0x0001C8)
class UJunoConversationTaskNode_GetResource : public UFortConversationTaskNode_Service
{ 
public:
	int32_t                                            ResourceSlot;                                               // 0x0190   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0194   (0x0004)  MISSED
	SDK_UNDEFINED(24,14358) /* FText */                __um(GetTextFormat);                                        // 0x0198   (0x0018)  
	SDK_UNDEFINED(24,14359) /* FText */                __um(FinishedTextFormat);                                   // 0x01B0   (0x0018)  
};

/// Class /Script/JunoAdventuresRuntime.JunoConversationTaskNode_GiftNPC
/// Size: 0x0030 (0x000170 - 0x0001A0)
class UJunoConversationTaskNode_GiftNPC : public UFortConversationTaskNode
{ 
public:
	SDK_UNDEFINED(24,14360) /* FText */                __um(GiftTextFormat);                                       // 0x0170   (0x0018)  
	int32_t                                            MaxChoiceNodesToGenerate;                                   // 0x0188   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x018C   (0x0004)  MISSED
	TArray<FGameplayTag>                               InventoryGroupTypesToPickItemsFrom;                         // 0x0190   (0x0010)  
};

/// Class /Script/JunoAdventuresRuntime.JunoConversationTaskNode_GrantAwesomePoints
/// Size: 0x0008 (0x000170 - 0x000178)
class UJunoConversationTaskNode_GrantAwesomePoints : public UFortConversationTaskNode
{ 
public:
	FGameplayTag                                       AwesomeInteractionTag;                                      // 0x0170   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0174   (0x0004)  MISSED
};

/// Class /Script/JunoAdventuresRuntime.JunoConversationTaskNode_GrantNPCCampReward
/// Size: 0x0000 (0x000190 - 0x000190)
class UJunoConversationTaskNode_GrantNPCCampReward : public UFortConversationTaskNode_Service
{ 
public:
};

/// Class /Script/JunoAdventuresRuntime.JunoConversationTaskNode_MarkFirstConversationComplete
/// Size: 0x0000 (0x000170 - 0x000170)
class UJunoConversationTaskNode_MarkFirstConversationComplete : public UFortConversationTaskNode
{ 
public:
};

/// Class /Script/JunoAdventuresRuntime.JunoConversationTaskNode_NukeVillager
/// Size: 0x0000 (0x000190 - 0x000190)
class UJunoConversationTaskNode_NukeVillager : public UFortConversationTaskNode_Service
{ 
public:
};

/// Class /Script/JunoAdventuresRuntime.JunoConversationTaskNode_RemoteCampRecruitment
/// Size: 0x0048 (0x000190 - 0x0001D8)
class UJunoConversationTaskNode_RemoteCampRecruitment : public UFortConversationTaskNode_Service
{ 
public:
	int32_t                                            CampSlot;                                                   // 0x0190   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0194   (0x0004)  MISSED
	SDK_UNDEFINED(24,14361) /* FText */                __um(JoinCampTextFormat);                                   // 0x0198   (0x0018)  
	FScalableFloat                                     MaxDistanceFromCamp;                                        // 0x01B0   (0x0028)  
};

/// Class /Script/JunoAdventuresRuntime.JunoConversationTaskNode_Speech
/// Size: 0x0090 (0x000170 - 0x000200)
class UJunoConversationTaskNode_Speech : public UFortConversationTaskNode
{ 
public:
	SDK_UNDEFINED(16,14362) /* FString */              __um(MetaIdentifier_Animations);                            // 0x0170   (0x0010)  
	FGameplayTag                                       SpeakerTag;                                                 // 0x0180   (0x0004)  
	FGameplayTag                                       ListenerTag;                                                // 0x0184   (0x0004)  
	FGameplayTag                                       DefaultMoodReactionTag;                                     // 0x0188   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x018C   (0x0004)  MISSED
	SDK_UNDEFINED(24,14363) /* FText */                __um(StyledParticipantNameFormat);                          // 0x0190   (0x0018)  
	bool                                               bUseInlineConfig;                                           // 0x01A8   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x01A9   (0x0007)  MISSED
	class UJunoContextualMessageConfigCollection*      ExternalContextualMessageCollection;                        // 0x01B0   (0x0008)  
	TArray<FJunoSpecializedContextualMessageConfig>    SpecializedConfigs;                                         // 0x01B8   (0x0010)  
	FJunoContextualMessageConfig                       GeneralConfig;                                              // 0x01C8   (0x0010)  
	FDataTableRowHandle                                GeneralConfigTableRow;                                      // 0x01D8   (0x0010)  
	unsigned char                                      UnknownData02_6[0x18];                                      // 0x01E8   (0x0018)  MISSED


	/// Functions
	// Function /Script/JunoAdventuresRuntime.JunoConversationTaskNode_Speech.PlayClientVoiceLine
	// void PlayClientVoiceLine(FConversationContext& Context, FJunoContextualMessageQueryResult& MessageParams);            // [0xb3c772c] Native|Event|Protected|HasOutParms|BlueprintEvent|Const 
};

/// Class /Script/JunoAdventuresRuntime.JunoConversationTaskNode_TagCurrentConversation
/// Size: 0x0020 (0x000170 - 0x000190)
class UJunoConversationTaskNode_TagCurrentConversation : public UFortConversationTaskNode
{ 
public:
	FGameplayTagContainer                              TagsToApply;                                                // 0x0170   (0x0020)  
};

/// Class /Script/JunoAdventuresRuntime.JunoConversationTaskNode_TradeWithMerchant
/// Size: 0x0068 (0x000170 - 0x0001D8)
class UJunoConversationTaskNode_TradeWithMerchant : public UFortConversationTaskNode
{ 
public:
	SDK_UNDEFINED(24,14364) /* FText */                __um(TradeTextFormat_Single);                               // 0x0170   (0x0018)  
	SDK_UNDEFINED(24,14365) /* FText */                __um(TradeTextFormat_Plural);                               // 0x0188   (0x0018)  
	SDK_UNDEFINED(24,14366) /* FText */                __um(NotEnoughForTradeTextFormat_Single);                   // 0x01A0   (0x0018)  
	SDK_UNDEFINED(24,14367) /* FText */                __um(NotEnoughForTradeTextFormat_Plural);                   // 0x01B8   (0x0018)  
	int32_t                                            MaxChoiceNodesToGenerate;                                   // 0x01D0   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x01D4   (0x0004)  MISSED
};

/// Class /Script/JunoAdventuresRuntime.JunoNPCConversationParticipantComponent
/// Size: 0x0098 (0x000628 - 0x0006C0)
class UJunoNPCConversationParticipantComponent : public UFortNPCConversationParticipantComponent
{ 
public:
	SDK_UNDEFINED(16,14368) /* FMulticastInlineDelegate */ __um(OnJunoConversationParticipantIconChangedDelegate); // 0x0628   (0x0010)  
	SDK_UNDEFINED(32,14369) /* TWeakObjectPtr<UTexture2D*> */ __um(ParticipantIconSmall);                          // 0x0638   (0x0020)  
	unsigned char                                      UnknownData00_6[0x68];                                      // 0x0658   (0x0068)  MISSED


	/// Functions
	// Function /Script/JunoAdventuresRuntime.JunoNPCConversationParticipantComponent.OnRep_ParticipantIconSmall
	// void OnRep_ParticipantIconSmall();                                                                                    // [0xb3c76c8] Final|Native|Protected 
};

/// Class /Script/JunoAdventuresRuntime.JunoChangeInventoryHelper
/// Size: 0x0010 (0x000028 - 0x000038)
class UJunoChangeInventoryHelper : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x38];                                      // 0x0000   (0x0038)  MISSED


	/// Functions
	// Function /Script/JunoAdventuresRuntime.JunoChangeInventoryHelper.HandleInventoryChangedEvent
	// void HandleInventoryChangedEvent(FJunoItemSlot& ItemSlot, EJunoItemChangeType ChangeType);                            // [0xb3c7290] Final|Native|Public|HasOutParms 
};

/// Class /Script/JunoAdventuresRuntime.JunoConversationTaskNode_CompleteQuestObjective
/// Size: 0x0028 (0x000170 - 0x000198)
class UJunoConversationTaskNode_CompleteQuestObjective : public UFortConversationTaskNode
{ 
public:
	SDK_UNDEFINED(32,14370) /* TWeakObjectPtr<UFortQuestItemDefinition_Athena*> */ __um(QuestToProgress);          // 0x0170   (0x0020)  
	FName                                              ObjectiveBackendName;                                       // 0x0190   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0194   (0x0004)  MISSED


	/// Functions
	// Function /Script/JunoAdventuresRuntime.JunoConversationTaskNode_CompleteQuestObjective.Editor_GetValidObjectives
	// TArray<FName> Editor_GetValidObjectives();                                                                            // [0x7c1634c] Final|Native|Private|Const 
};

/// Class /Script/JunoAdventuresRuntime.JunoConversationTaskNode_GrantQuest
/// Size: 0x0020 (0x000170 - 0x000190)
class UJunoConversationTaskNode_GrantQuest : public UFortConversationTaskNode
{ 
public:
	SDK_UNDEFINED(32,14371) /* TWeakObjectPtr<UFortQuestItemDefinition_Athena*> */ __um(QuestToGrant);             // 0x0170   (0x0020)  
};

/// Class /Script/JunoAdventuresRuntime.JunoConversationTaskNode_TurnInQuest
/// Size: 0x0020 (0x000170 - 0x000190)
class UJunoConversationTaskNode_TurnInQuest : public UFortConversationTaskNode
{ 
public:
	SDK_UNDEFINED(32,14372) /* TWeakObjectPtr<UFortQuestItemDefinition_Athena*> */ __um(QuestToTurnIn);            // 0x0170   (0x0020)  
};

/// Class /Script/JunoAdventuresRuntime.JunoControllerRequirement_HasCompletedNumQuestObjectives
/// Size: 0x0048 (0x000030 - 0x000078)
class UJunoControllerRequirement_HasCompletedNumQuestObjectives : public UFortControllerRequirement
{ 
public:
	FSoftObjectPath                                    QuestDefinition;                                            // 0x0030   (0x0018)  
	FThresholdTestConfig                               RequiredCount;                                              // 0x0048   (0x0030)  
};

/// Class /Script/JunoAdventuresRuntime.JunoControllerRequirement_IsQuestActive
/// Size: 0x0018 (0x000030 - 0x000048)
class UJunoControllerRequirement_IsQuestActive : public UFortControllerRequirement
{ 
public:
	FSoftObjectPath                                    QuestDefinition;                                            // 0x0030   (0x0018)  
};

/// Class /Script/JunoAdventuresRuntime.JunoTokenReceiver
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoTokenReceiver : public UInterface
{ 
public:
};

/// Class /Script/JunoAdventuresRuntime.JunoQuestGiverComponent
/// Size: 0x0030 (0x0000A0 - 0x0000D0)
class UJunoQuestGiverComponent : public UGameFrameworkComponent
{ 
public:
	SDK_UNDEFINED(16,14373) /* FString */              __um(GrantableQuestID);                                     // 0x00A0   (0x0010)  
	FGameplayTagContainer                              GrantableQuestTags;                                         // 0x00B0   (0x0020)  


	/// Functions
	// Function /Script/JunoAdventuresRuntime.JunoQuestGiverComponent.RollGrantableQuestID
	// void RollGrantableQuestID();                                                                                          // [0xb3c79f4] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoAdventuresRuntime.JunoQuestGiverComponent.HandleOnJunoQuestComplete
	// void HandleOnJunoQuestComplete(TScriptInterface<Class>& QuestInstance);                                               // [0xb3c7460] Final|Native|Private|HasOutParms 
	// Function /Script/JunoAdventuresRuntime.JunoQuestGiverComponent.GetGrantableQuestID
	// FString GetGrantableQuestID();                                                                                        // [0xb3c6e34] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoAdventuresRuntime.JunoQuestGiverComponent.BindToQuestManagerDelegates
	// void BindToQuestManagerDelegates();                                                                                   // [0xb3c6cd4] Final|Native|Private 
};

/// Class /Script/JunoAdventuresRuntime.JunoQuestSpawnPointComponent
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UJunoQuestSpawnPointComponent : public UGameFrameworkComponent
{ 
public:
};

/// Class /Script/JunoAdventuresRuntime.JunoTokenHandlerAIComponent
/// Size: 0x0010 (0x0000A8 - 0x0000B8)
class UJunoTokenHandlerAIComponent : public UFortPawnComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x00A8   (0x0010)  MISSED


	/// Functions
	// Function /Script/JunoAdventuresRuntime.JunoTokenHandlerAIComponent.ReceiveToken
	// void ReceiveToken(FGameplayTag& JunoToken);                                                                           // [0xb3c7928] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoAdventuresRuntime.JunoTokenHandlerAIComponent.GetSavedTokens
	// FGameplayTagContainer GetSavedTokens();                                                                               // [0xb3c7260] Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/JunoAdventuresRuntime.JunoQuestPoolDataAssetEntry
/// Size: 0x0010 (0x000000 - 0x000010)
struct FJunoQuestPoolDataAssetEntry
{ 
	class UFortQuestItemDefinition*                    QuestDefinition;                                            // 0x0000   (0x0008)  
	bool                                               bIsRepeatable;                                              // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0009   (0x0007)  MISSED
};

/// Class /Script/JunoAdventuresRuntime.JunoQuestPoolDataAsset
/// Size: 0x0018 (0x000030 - 0x000048)
class UJunoQuestPoolDataAsset : public UDataAsset
{ 
public:
	TArray<FJunoQuestPoolDataAssetEntry>               QuestEntries;                                               // 0x0030   (0x0010)  
	FGameplayTag                                       QuestPoolTag;                                               // 0x0040   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0044   (0x0004)  MISSED
};

/// Class /Script/JunoAdventuresRuntime.JunoQuestDatabaseComponent
/// Size: 0x00B0 (0x0000F8 - 0x0001A8)
class UJunoQuestDatabaseComponent : public UFortPlayspaceComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0xA0];                                      // 0x00F8   (0x00A0)  MISSED
	TArray<class UJunoQuestPoolDataAsset*>             QuestPoolAssets;                                            // 0x0198   (0x0010)  


	/// Functions
	// Function /Script/JunoAdventuresRuntime.JunoQuestDatabaseComponent.GetJunoQuestState
	// EJunoQuestState GetJunoQuestState(FString QuestID);                                                                   // [0xb3c6f80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/JunoAdventuresRuntime.JunoQuestManagerComponent
/// Size: 0x0060 (0x000450 - 0x0004B0)
class UJunoQuestManagerComponent : public UFortPlayspaceComponent_Quests
{ 
public:
	unsigned char                                      UnknownData00_1[0x60];                                      // 0x0450   (0x0060)  MISSED


	/// Functions
	// Function /Script/JunoAdventuresRuntime.JunoQuestManagerComponent.SendQuestStatEvent
	// void SendQuestStatEvent(EFortQuestObjectiveStatEvent Type, FGameplayTagContainer SourceTags, FGameplayTagContainer TargetTags, int32_t Count); // [0xb3c7a08] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/JunoAdventuresRuntime.JunoQuestManagerComponent.GetQuestGiverForQuestID
	// class AActor* GetQuestGiverForQuestID(FString QuestID);                                                               // [0xb3c70ec] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoAdventuresRuntime.JunoQuestManagerComponent.ActivateQuest
	// void ActivateQuest(class UFortQuestItemDefinition_Athena* QuestDefinition, class AActor* QuestGiver);                 // [0xb3c6c10] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
};

/// Class /Script/JunoAdventuresRuntime.JunoEncounterManagerComponent
/// Size: 0x0000 (0x0000F8 - 0x0000F8)
class UJunoEncounterManagerComponent : public UFortPlayspaceComponent
{ 
public:
};

/// Class /Script/JunoAdventuresRuntime.JunoPOIQuestComponent
/// Size: 0x0000 (0x000450 - 0x000450)
class UJunoPOIQuestComponent : public UFortPlayspaceComponent_Quests
{ 
public:
};

/// Class /Script/JunoAdventuresRuntime.JunoActionsDB
/// Size: 0x0050 (0x000028 - 0x000078)
class UJunoActionsDB : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	SDK_UNDEFINED(80,14374) /* TMap<FGameplayTag, FMappedJunoActions> */ __um(JunoTokenToJunoActions);             // 0x0028   (0x0050)  
};

/// Class /Script/JunoAdventuresRuntime.PlayspaceComponent_JunoActionsDB
/// Size: 0x0010 (0x0000F8 - 0x000108)
class UPlayspaceComponent_JunoActionsDB : public UFortPlayspaceComponent
{ 
public:
	TArray<class UClass*>                              JunoActionsDBs;                                             // 0x00F8   (0x0010)  
};

/// Struct /Script/JunoAdventuresRuntime.QuestTokenMappings
/// Size: 0x0050 (0x000000 - 0x000050)
struct FQuestTokenMappings
{ 
	SDK_UNDEFINED(80,14375) /* TMap<FName, FQuestTokenMappingContainer> */ __um(ObjectiveQuestTokensToGrant);      // 0x0000   (0x0050)  
};

/// Struct /Script/JunoAdventuresRuntime.JunoQuestData
/// Size: 0x00A8 (0x000000 - 0x0000A8)
struct FJunoQuestData
{ 
	SDK_UNDEFINED(80,14376) /* TMap<FName, FQuestPropSpawnInfoContainer> */ __um(ObjectiveQuestPropActorsToSpawn); // 0x0000   (0x0050)  
	FQuestTokenMappings                                QuestTokenMappings;                                         // 0x0050   (0x0050)  
	int32_t                                            AwesomePointsToGrant;                                       // 0x00A0   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00A4   (0x0004)  MISSED
};

/// Class /Script/JunoAdventuresRuntime.FortQuestDefinitionComponent_Juno
/// Size: 0x00A8 (0x000078 - 0x000120)
class UFortQuestDefinitionComponent_Juno : public UFortQuestDefinitionComponent
{ 
public:
	FJunoQuestData                                     JunoQuestData;                                              // 0x0078   (0x00A8)  


	/// Functions
	// Function /Script/JunoAdventuresRuntime.FortQuestDefinitionComponent_Juno.Editor_GetValidObjectiveNames
	// TArray<FName> Editor_GetValidObjectiveNames();                                                                        // [0x7c1634c] Final|Native|Private|Const 
};

/// Class /Script/JunoAdventuresRuntime.FortQuestDefinitionComponent_JunoEncounter
/// Size: 0x0000 (0x000120 - 0x000120)
class UFortQuestDefinitionComponent_JunoEncounter : public UFortQuestDefinitionComponent_Juno
{ 
public:
};

/// Class /Script/JunoAdventuresRuntime.FortQuestItemComponent_Juno
/// Size: 0x0000 (0x000030 - 0x000030)
class UFortQuestItemComponent_Juno : public UFortQuestItemComponent
{ 
public:
};

/// Class /Script/JunoAdventuresRuntime.FortQuestItemComponent_JunoEncounter
/// Size: 0x0000 (0x000030 - 0x000030)
class UFortQuestItemComponent_JunoEncounter : public UFortQuestItemComponent_Juno
{ 
public:
};

/// Class /Script/JunoAdventuresRuntime.FortAthenaAISpawnerDataComponent_JunoConversation
/// Size: 0x0030 (0x000268 - 0x000298)
class UFortAthenaAISpawnerDataComponent_JunoConversation : public UFortAthenaAISpawnerDataComponent_AIBotConversation
{ 
public:
	class UProxyTable*                                 NPCMoodReactionAnimTable;                                   // 0x0268   (0x0008)  
	FGameplayTagContainer                              GrantableQuestTags;                                         // 0x0270   (0x0020)  
	bool                                               bShouldCreateMerchantComponent;                             // 0x0290   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0291   (0x0007)  MISSED
};

/// Class /Script/JunoAdventuresRuntime.JunoAdventuresBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoAdventuresBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/JunoAdventuresRuntime.JunoAdventuresBlueprintLibrary.GetJunoQuestManager
	// class UJunoQuestManagerComponent* GetJunoQuestManager(class UObject* WorldContextObject);                             // [0xb3c6f00] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/JunoAdventuresRuntime.JunoAdventuresBlueprintLibrary.GetJunoQuestDatabase
	// class UJunoQuestDatabaseComponent* GetJunoQuestDatabase(class UObject* WorldContextObject);                           // [0xb3c6e80] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/JunoAdventuresRuntime.JunoCheatManager_Adventures
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoCheatManager_Adventures : public UChildCheatManager
{ 
public:


	/// Functions
	// Function /Script/JunoAdventuresRuntime.JunoCheatManager_Adventures.JunoSpawnVisitorInClosestCamp
	// void JunoSpawnVisitorInClosestCamp(FString PartialUniqueAIIdentifier, int32_t Count);                                 // [0x8f976ac] Final|Exec|Native|Private|Const 
	// Function /Script/JunoAdventuresRuntime.JunoCheatManager_Adventures.JunoRepopulateAvailableQuestsWithTags
	// void JunoRepopulateAvailableQuestsWithTags(FString QuestPoolTags);                                                    // [0xb3c7568] Final|BlueprintAuthorityOnly|Exec|Native|Private 
	// Function /Script/JunoAdventuresRuntime.JunoCheatManager_Adventures.JunoRepopulateAvailableQuests
	// void JunoRepopulateAvailableQuests();                                                                                 // [0xb3c74f0] Final|BlueprintAuthorityOnly|Exec|Native|Private 
	// Function /Script/JunoAdventuresRuntime.JunoCheatManager_Adventures.JunoQueueScriptRowMessagesForNpcConversation
	// void JunoQueueScriptRowMessagesForNpcConversation(FString ScriptName, FString RowName);                               // [0x92ab884] Final|BlueprintAuthorityOnly|Exec|Native|Private 
	// Function /Script/JunoAdventuresRuntime.JunoCheatManager_Adventures.JunoPrintNPCsInfo
	// void JunoPrintNPCsInfo(bool bIgnoreAIsWithNoAssignment);                                                              // [0x63fe5cc] Final|Exec|Native|Private|Const 
	// Function /Script/JunoAdventuresRuntime.JunoCheatManager_Adventures.JunoPrintCurrentConversationInfo
	// void JunoPrintCurrentConversationInfo();                                                                              // [0x36203b0] Final|Exec|Native|Private|Const 
	// Function /Script/JunoAdventuresRuntime.JunoCheatManager_Adventures.JunoInjectDisplayTextForNpcConversation
	// void JunoInjectDisplayTextForNpcConversation(FString TestString);                                                     // [0x6b8287c] Final|BlueprintAuthorityOnly|Exec|Native|Private|Const 
};

/// Struct /Script/JunoAdventuresRuntime.JunoContextualMessageConfigTableRow
/// Size: 0x0010 (0x000008 - 0x000018)
struct FJunoContextualMessageConfigTableRow : FTableRowBase
{ 
	FJunoContextualMessageConfig                       MessageConfig;                                              // 0x0008   (0x0010)  
};

/// Struct /Script/JunoAdventuresRuntime.JunoContextualMessageQueryResult
/// Size: 0x0058 (0x000000 - 0x000058)
struct FJunoContextualMessageQueryResult
{ 
	SDK_UNDEFINED(24,14377) /* FText */                __um(Message);                                              // 0x0000   (0x0018)  
	FGameplayTag                                       MoodReactionTag;                                            // 0x0018   (0x0004)  
	FGameplayTag                                       VoiceOverTag;                                               // 0x001C   (0x0004)  
	TArray<FConversationNodeParameterPair>             MetadataParameters;                                         // 0x0020   (0x0010)  
	FGameplayTagContainer                              MetadataTags;                                               // 0x0030   (0x0020)  
	bool                                               bAreConsecutiveMessagesPending;                             // 0x0050   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0051   (0x0007)  MISSED
};

/// Struct /Script/JunoAdventuresRuntime.JunoConversationGetResourceTaskMemory
/// Size: 0x0010 (0x000000 - 0x000010)
struct FJunoConversationGetResourceTaskMemory
{ 
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0000   (0x0010)  MISSED
};

/// Struct /Script/JunoAdventuresRuntime.JunoConversationGiftNPCTaskMemory
/// Size: 0x0010 (0x000000 - 0x000010)
struct FJunoConversationGiftNPCTaskMemory
{ 
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0000   (0x0010)  MISSED
};

/// Struct /Script/JunoAdventuresRuntime.JunoConversationRemoteCampRecruitmentTaskMemory
/// Size: 0x000C (0x000000 - 0x00000C)
struct FJunoConversationRemoteCampRecruitmentTaskMemory
{ 
	unsigned char                                      UnknownData00_2[0xC];                                       // 0x0000   (0x000C)  MISSED
};

/// Struct /Script/JunoAdventuresRuntime.QuestPropSpawnInfo
/// Size: 0x0088 (0x000000 - 0x000088)
struct FQuestPropSpawnInfo
{ 
	SDK_UNDEFINED(32,14378) /* TWeakObjectPtr<UClass*> */ __um(ClassToSpawn);                                      // 0x0000   (0x0020)  
	FGameplayTagContainer                              RequiredTags;                                               // 0x0020   (0x0020)  
	FGameplayTagContainer                              ForbiddenTags;                                              // 0x0040   (0x0020)  
	bool                                               bUseMinMaxDistances;                                        // 0x0060   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0061   (0x0007)  MISSED
	FVector2D                                          MinMaxDistanceFromOtherQuestPropActors;                     // 0x0068   (0x0010)  
	FVector2D                                          MinMaxDistanceFromQuestGiver;                               // 0x0078   (0x0010)  
};

/// Struct /Script/JunoAdventuresRuntime.QuestPropSpawnInfoContainer
/// Size: 0x0010 (0x000000 - 0x000010)
struct FQuestPropSpawnInfoContainer
{ 
	TArray<FQuestPropSpawnInfo>                        QuestPropSpawnInfos;                                        // 0x0000   (0x0010)  
};

/// Struct /Script/JunoAdventuresRuntime.QuestTokenMappingContainer
/// Size: 0x0050 (0x000000 - 0x000050)
struct FQuestTokenMappingContainer
{ 
	SDK_UNDEFINED(80,14379) /* TMap<EJunoTokenReceiverType, FGameplayTagContainer> */ __um(QuestTokens);           // 0x0000   (0x0050)  
};

/// Struct /Script/JunoAdventuresRuntime.JunoChangeInventoryEventEntry
/// Size: 0x0030 (0x000000 - 0x000030)
struct FJunoChangeInventoryEventEntry
{ 
	FStateDrivenTagQuery                               ItemTagQuery;                                               // 0x0000   (0x0018)  
	FStateDrivenFloat                                  ItemCount;                                                  // 0x0018   (0x0018)  
};

/// Struct /Script/JunoAdventuresRuntime.JunoStateDrivenEvent_ChangeInventory
/// Size: 0x0028 (0x000058 - 0x000080)
struct FJunoStateDrivenEvent_ChangeInventory : FStateDrivenEvent_InteractionBase
{ 
	TArray<FJunoChangeInventoryEventEntry>             ItemRequirements;                                           // 0x0058   (0x0010)  
	bool                                               bExactRequirements;                                         // 0x0068   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0069   (0x0007)  MISSED
	class UJunoChangeInventoryHelper*                  ChangeInventoryHelper;                                      // 0x0070   (0x0008)  
	SDK_UNDEFINED(8,14380) /* TWeakObjectPtr<AFortPawn*> */ __um(SavedInteractingPawn);                            // 0x0078   (0x0008)  
};

/// Struct /Script/JunoAdventuresRuntime.JunoStateDrivenEvent_InsertItem
/// Size: 0x0050 (0x000058 - 0x0000A8)
struct FJunoStateDrivenEvent_InsertItem : FStateDrivenEvent_InteractionBase
{ 
	EJunoInsertItemType                                InsertType;                                                 // 0x0058   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0059   (0x0007)  MISSED
	FStateDrivenTagQuery                               EquippedItemTagQuery;                                       // 0x0060   (0x0018)  
	FStateDrivenTagQuery                               OffHandItemTagQuery;                                        // 0x0078   (0x0018)  
	FStateDrivenTagQuery                               AnyHandItemTagQuery;                                        // 0x0090   (0x0018)  
};

/// Struct /Script/JunoAdventuresRuntime.JunoQuestIDListWrapper
/// Size: 0x0010 (0x000000 - 0x000010)
struct FJunoQuestIDListWrapper
{ 
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0000   (0x0010)  MISSED
};

/// Struct /Script/JunoAdventuresRuntime.JunoQuestRuntimeEntry
/// Size: 0x0018 (0x000000 - 0x000018)
struct FJunoQuestRuntimeEntry
{ 
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x0000   (0x0018)  MISSED
};

/// Struct /Script/JunoAdventuresRuntime.ActiveQuestInfo
/// Size: 0x00D0 (0x000000 - 0x0000D0)
struct FActiveQuestInfo
{ 
	class AActor*                                      QuestGiver;                                                 // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_6[0xC8];                                      // 0x0008   (0x00C8)  MISSED
};

/// Struct /Script/JunoAdventuresRuntime.MappedJunoActions
/// Size: 0x0010 (0x000000 - 0x000010)
struct FMappedJunoActions
{ 
	TArray<class UJunoActionConfig*>                   MappedJunoActions;                                          // 0x0000   (0x0010)  
};

