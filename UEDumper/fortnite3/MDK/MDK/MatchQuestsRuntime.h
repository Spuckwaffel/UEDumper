
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: DataRegistry
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: GameplayTags
/// dependency: ModularGameplay

/// Class /Script/MatchQuestsRuntime.FortGameStateComponent_SquadMatchQuests
/// Size: 0x00B8 (0x0000A0 - 0x000158)
class UFortGameStateComponent_SquadMatchQuests : public UFortGameStateComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 344;

public:
	SMember(FDataRegistryType)                         DataRegistryType_ActiveMatchQuestBuckets                    OFFSET(getStruct<T>, {0xB8, 4, 0, 0})
	CMember(TArray<FGameplayTag>)                      ActiveBuckets                                               OFFSET(get<T>, {0xC0, 16, 0, 0})
	CMember(TMap<char, FSquadMatchQuests>)             SquadQuestsMap                                              OFFSET(get<T>, {0xD0, 80, 0, 0})
};

/// Class /Script/MatchQuestsRuntime.FortPlayerStateComponent_MatchQuests
/// Size: 0x0090 (0x0000A0 - 0x000130)
class UFortPlayerStateComponent_MatchQuests : public UFortPlayerStateComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	CMember(TArray<TScriptInterface<Class>>)           QuestOffering                                               OFFSET(get<T>, {0xD0, 16, 0, 0})
	CMember(TArray<FSquadMemberSelection>)             SquadSelections                                             OFFSET(get<T>, {0xE0, 16, 0, 0})


	/// Functions
	// Function /Script/MatchQuestsRuntime.FortPlayerStateComponent_MatchQuests.TryToGrantSelectedQuest
	// void TryToGrantSelectedQuest(FFortGamePhaseUpdatedEvent& FortGamePhaseUpdatedEvent);                                     // [0x8f8b5d0] Final|Native|Private|HasOutParms 
	// Function /Script/MatchQuestsRuntime.FortPlayerStateComponent_MatchQuests.Server_SetSelectedQuest
	// void Server_SetSelectedQuest(TScriptInterface<Class> Quest);                                                             // [0xb4d2d20] Final|Net|NetReliableNative|Event|Private|NetServer 
	// Function /Script/MatchQuestsRuntime.FortPlayerStateComponent_MatchQuests.OnRep_SquadSelections
	// void OnRep_SquadSelections();                                                                                            // [0x33fdce0] Final|Native|Private|Const 
	// Function /Script/MatchQuestsRuntime.FortPlayerStateComponent_MatchQuests.OnRep_QuestOffering
	// void OnRep_QuestOffering();                                                                                              // [0x3434fc8] Final|Native|Private|Const 
	// Function /Script/MatchQuestsRuntime.FortPlayerStateComponent_MatchQuests.OnLandedFromBus
	// void OnLandedFromBus(class AFortPlayerControllerZone* PlayerController);                                                 // [0x64c3a10] Final|Native|Private 
};

/// Class /Script/MatchQuestsRuntime.FortQuestDefinitionComponent_MatchQuests
/// Size: 0x0000 (0x000078 - 0x000078)
class UFortQuestDefinitionComponent_MatchQuests : public UFortQuestDefinitionComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
};

/// Class /Script/MatchQuestsRuntime.FortQuestItemComponent_MatchQuests
/// Size: 0x0010 (0x000030 - 0x000040)
class UFortQuestItemComponent_MatchQuests : public UFortQuestItemComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Script/MatchQuestsRuntime.MatchQuestsCheatManager
/// Size: 0x0000 (0x000028 - 0x000028)
class UMatchQuestsCheatManager : public UChildCheatManager
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/MatchQuestsRuntime.MatchQuestsCheatManager.MatchQuests_RollNewOffer
	// void MatchQuests_RollNewOffer();                                                                                         // [0x35e6228] Final|Exec|Native|Private|Const 
	// Function /Script/MatchQuestsRuntime.MatchQuestsCheatManager.MatchQuests_LogSquadSelections
	// void MatchQuests_LogSquadSelections();                                                                                   // [0x35e6228] Final|Exec|Native|Private|Const 
	// Function /Script/MatchQuestsRuntime.MatchQuestsCheatManager.MatchQuests_LogRNGSeeds
	// void MatchQuests_LogRNGSeeds();                                                                                          // [0x35e6228] Final|Exec|Native|Private 
	// Function /Script/MatchQuestsRuntime.MatchQuestsCheatManager.MatchQuests_LogReportSimulatedRolls
	// void MatchQuests_LogReportSimulatedRolls(int32_t RollsToSimulate);                                                       // [0x6b56e20] Final|Exec|Native|Private|Const 
	// Function /Script/MatchQuestsRuntime.MatchQuestsCheatManager.MatchQuests_LogAvailableQuestsPool
	// void MatchQuests_LogAvailableQuestsPool();                                                                               // [0x35e6228] Final|Exec|Native|Private 
	// Function /Script/MatchQuestsRuntime.MatchQuestsCheatManager.MatchQuests_ForceQuestInOffer
	// void MatchQuests_ForceQuestInOffer(FString QuestName);                                                                   // [0x6d232d0] Final|Exec|Native|Private|Const 
};

/// Struct /Script/MatchQuestsRuntime.SquadMemberSelection
/// Size: 0x0010 (0x000000 - 0x000010)
class FSquadMemberSelection : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class AFortPlayerState*)                   SquadMember                                                 OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(int32_t)                                   OfferQuestIndex                                             OFFSET(get<int32_t>, {0x8, 4, 0, 0})
};

/// Struct /Script/MatchQuestsRuntime.SquadMatchQuests
/// Size: 0x0020 (0x000000 - 0x000020)
class FSquadMatchQuests : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(TArray<TScriptInterface<Class>>)           SquadOffer                                                  OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FSquadMemberSelection>)             SquadSelections                                             OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/MatchQuestsRuntime.MatchQuestsActiveBucketsTableRow
/// Size: 0x0008 (0x000008 - 0x000010)
class FMatchQuestsActiveBucketsTableRow : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FGameplayTag)                              BucketTag                                                   OFFSET(getStruct<T>, {0x8, 4, 0, 0})
};

