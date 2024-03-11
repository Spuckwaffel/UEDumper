
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: DataRegistry
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: GameplayAbilities
/// dependency: GameplayTags
/// dependency: ModularGameplay

/// Enum /Script/DynamicRollTablesRuntime.ERollModifierOperation
/// Size: 0x04
enum class ERollModifierOperation : uint8_t
{
	ERollModifierOperation__Add                                                      = 0,
	ERollModifierOperation__Multiply                                                 = 1,
	ERollModifierOperation__Zero                                                     = 2,
	ERollModifierOperation__ERollModifierOperation_MAX                               = 3
};

/// Class /Script/DynamicRollTablesRuntime.FortControllerComponent_DynamicRollPlayerComponent
/// Size: 0x00F8 (0x0000A8 - 0x0001A0)
class UFortControllerComponent_DynamicRollPlayerComponent : public UFortControllerComponent
{ 
public:
	class UClass*                                      AssociatedManagerClass;                                     // 0x00A8   (0x0008)  
	FScalableFloat                                     Enabled;                                                    // 0x00B0   (0x0028)  
	class UFortGamestateComponent_DynamicRollTableManager* TableManager;                                           // 0x00D8   (0x0008)  
	unsigned char                                      UnknownData00_5[0x64];                                      // 0x00E0   (0x0064)  MISSED
	FRandomStream                                      SeededRNG;                                                  // 0x0144   (0x0008)  
	unsigned char                                      UnknownData01_6[0x54];                                      // 0x014C   (0x0054)  MISSED


	/// Functions
	// Function /Script/DynamicRollTablesRuntime.FortControllerComponent_DynamicRollPlayerComponent.AuthorityRollChoices
	// TArray<FFortDynamicRollResult> AuthorityRollChoices(int32_t NumChoices, TArray<UFortItemDefinition*>& IgnoreItems);   // [0xa2cde60] Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/DynamicRollTablesRuntime.FortGamestateComponent_DynamicRollTableManager
/// Size: 0x0238 (0x0000A0 - 0x0002D8)
class UFortGamestateComponent_DynamicRollTableManager : public UFortGameStateComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x30];                                      // 0x00A0   (0x0030)  MISSED
	FDataRegistryType                                  DataRegistryType_BaseWeights;                               // 0x00D0   (0x0004)  
	FDataRegistryType                                  DataRegistryType_WeightModifiers;                           // 0x00D4   (0x0004)  
	FScalableFloat                                     Enabled;                                                    // 0x00D8   (0x0028)  
	unsigned char                                      UnknownData01_6[0x1D8];                                     // 0x0100   (0x01D8)  MISSED


	/// Functions
	// Function /Script/DynamicRollTablesRuntime.FortGamestateComponent_DynamicRollTableManager.HandlePlaylistDataReady
	// void HandlePlaylistDataReady(class AFortGameStateAthena* GameState, class UFortPlaylist* Playlist, FGameplayTagContainer& PlaylistContextTags); // [0xa2ce048] Final|Native|Private|HasOutParms 
};

/// Struct /Script/DynamicRollTablesRuntime.FortDynamicRollResult
/// Size: 0x0008 (0x000000 - 0x000008)
struct FFortDynamicRollResult
{ 
	class UFortItemDefinition*                         Item;                                                       // 0x0000   (0x0008)  
};

/// Struct /Script/DynamicRollTablesRuntime.FortDynamicRollBaseWeightTableRow
/// Size: 0x0030 (0x000008 - 0x000038)
struct FFortDynamicRollBaseWeightTableRow : FTableRowBase
{ 
	class UFortItemDefinition*                         ItemDefinition;                                             // 0x0008   (0x0008)  
	float                                              BaseWeight;                                                 // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0014   (0x0004)  MISSED
	TArray<FGameplayTag>                               ModTags;                                                    // 0x0018   (0x0010)  
	bool                                               bOwningItemZerosWeight;                                     // 0x0028   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0029   (0x0003)  MISSED
	float                                              MaxModifiedWeight;                                          // 0x002C   (0x0004)  
	float                                              MinModifiedWeight;                                          // 0x0030   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0034   (0x0004)  MISSED
};

/// Struct /Script/DynamicRollTablesRuntime.FortDynamicRollWeightModifierTableRow
/// Size: 0x0010 (0x000008 - 0x000018)
struct FFortDynamicRollWeightModifierTableRow : FTableRowBase
{ 
	FGameplayTag                                       ActivatingPlayerTag;                                        // 0x0008   (0x0004)  
	FGameplayTag                                       TargetModTag;                                               // 0x000C   (0x0004)  
	ERollModifierOperation                             WeightModifierOperation;                                    // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0011   (0x0003)  MISSED
	float                                              WeightModificationValue;                                    // 0x0014   (0x0004)  
};

/// Struct /Script/DynamicRollTablesRuntime.DynamicRollModifiersActivatedByPlayerTagContainer
/// Size: 0x0010 (0x000000 - 0x000010)
struct FDynamicRollModifiersActivatedByPlayerTagContainer
{ 
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0000   (0x0010)  MISSED
};

