
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: DataRegistry
/// dependency: Engine
/// dependency: GameplayTags
/// dependency: ModularGameplay

/// Class /Script/ServerRollQuestsRuntime.FortGameStateComponent_ServerRollQuests
/// Size: 0x0080 (0x0000A0 - 0x000120)
class UFortGameStateComponent_ServerRollQuests : public UGameStateComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x18];                                      // 0x00A0   (0x0018)  MISSED
	FDataRegistryType                                  DataRegistryType_ServerRollQuests;                          // 0x00B8   (0x0004)  
	unsigned char                                      UnknownData01_6[0x64];                                      // 0x00BC   (0x0064)  MISSED


	/// Functions
	// Function /Script/ServerRollQuestsRuntime.FortGameStateComponent_ServerRollQuests.PopulateMap
	// void PopulateMap(class UDataRegistry* ServerRollQuestsRegistry, FGameplayTagContainer& PlaylistContextTags);          // [0xa33e710] Final|Native|Private|HasOutParms 
	// Function /Script/ServerRollQuestsRuntime.FortGameStateComponent_ServerRollQuests.HandlePlaylistDataReady
	// void HandlePlaylistDataReady(class AFortGameStateAthena* GameState, class UFortPlaylist* Playlist, FGameplayTagContainer& GameplayTags); // [0x86cce88] Final|Native|Private|HasOutParms 
};

/// Struct /Script/ServerRollQuestsRuntime.ServerRollQuestTableRow
/// Size: 0x0068 (0x000008 - 0x000070)
struct FServerRollQuestTableRow : FTableRowBase
{ 
	SDK_UNDEFINED(16,15562) /* TScriptInterface<Class> */ __um(Quest);                                             // 0x0008   (0x0010)  
	FGameplayTag                                       Bucket;                                                     // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x001C   (0x0004)  MISSED
	FGameplayTagQuery                                  PlaylistQuery;                                              // 0x0020   (0x0048)  
	float                                              Weight;                                                     // 0x0068   (0x0004)  
	bool                                               bZeroWeightOverride : 1;                                    // 0x006C:0 (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x006D   (0x0003)  MISSED
};

