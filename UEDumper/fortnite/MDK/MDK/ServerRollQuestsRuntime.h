
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: DataRegistry
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: GameplayTags
/// dependency: ModularGameplay

/// Class /Script/ServerRollQuestsRuntime.FortGameStateComponent_ServerRollQuests
/// Size: 0x0080 (0x0000A0 - 0x000120)
class UFortGameStateComponent_ServerRollQuests : public UGameStateComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	SMember(FDataRegistryType)                         DataRegistryType_ServerRollQuests                           OFFSET(getStruct<T>, {0xB8, 4, 0, 0})


	/// Functions
	// Function /Script/ServerRollQuestsRuntime.FortGameStateComponent_ServerRollQuests.PopulateMap
	// void PopulateMap(class UDataRegistry* ServerRollQuestsRegistry, FGameplayTagContainer& PlaylistContextTags);             // [0xb590448] Final|Native|Private|HasOutParms 
	// Function /Script/ServerRollQuestsRuntime.FortGameStateComponent_ServerRollQuests.HandlePlaylistDataReady
	// void HandlePlaylistDataReady(class AFortGameStateAthena* GameState, class UFortPlaylist* Playlist, FGameplayTagContainer& GameplayTags); // [0x9019304] Final|Native|Private|HasOutParms 
};

/// Struct /Script/ServerRollQuestsRuntime.ServerRollQuestTableRow
/// Size: 0x0068 (0x000008 - 0x000070)
class FServerRollQuestTableRow : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	CMember(TScriptInterface<Class>)                   Quest                                                       OFFSET(get<T>, {0x8, 16, 0, 0})
	SMember(FGameplayTag)                              Bucket                                                      OFFSET(getStruct<T>, {0x18, 4, 0, 0})
	SMember(FGameplayTagQuery)                         PlaylistQuery                                               OFFSET(getStruct<T>, {0x20, 72, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x68, 4, 0, 0})
	DMember(bool)                                      bZeroWeightOverride                                         OFFSET(get<bool>, {0x6C, 1, 1, 0})
};

