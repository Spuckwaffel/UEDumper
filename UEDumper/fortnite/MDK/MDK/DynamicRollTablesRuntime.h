
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
/// dependency: GameplayAbilities
/// dependency: GameplayTags
/// dependency: ModularGameplay

/// Class /Script/DynamicRollTablesRuntime.FortControllerComponent_DynamicRollPlayerComponent
/// Size: 0x00F8 (0x0000A8 - 0x0001A0)
class UFortControllerComponent_DynamicRollPlayerComponent : public UFortControllerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
	CMember(class UClass*)                             AssociatedManagerClass                                      OFFSET(get<T>, {0xA8, 8, 0, 0})
	SMember(FScalableFloat)                            Enabled                                                     OFFSET(getStruct<T>, {0xB0, 40, 0, 0})
	CMember(class UFortGamestateComponent_DynamicRollTableManager*) TableManager                                   OFFSET(get<T>, {0xD8, 8, 0, 0})
	SMember(FRandomStream)                             SeededRNG                                                   OFFSET(getStruct<T>, {0x144, 8, 0, 0})


	/// Functions
	// Function /Script/DynamicRollTablesRuntime.FortControllerComponent_DynamicRollPlayerComponent.AuthorityRollChoices
	// TArray<FFortDynamicRollResult> AuthorityRollChoices(int32_t NumChoices, TArray<UFortItemDefinition*>& IgnoreItems);      // [0xa2cde60] Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/DynamicRollTablesRuntime.FortGamestateComponent_DynamicRollTableManager
/// Size: 0x0238 (0x0000A0 - 0x0002D8)
class UFortGamestateComponent_DynamicRollTableManager : public UFortGameStateComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 728;

public:
	SMember(FDataRegistryType)                         DataRegistryType_BaseWeights                                OFFSET(getStruct<T>, {0xD0, 4, 0, 0})
	SMember(FDataRegistryType)                         DataRegistryType_WeightModifiers                            OFFSET(getStruct<T>, {0xD4, 4, 0, 0})
	SMember(FScalableFloat)                            Enabled                                                     OFFSET(getStruct<T>, {0xD8, 40, 0, 0})


	/// Functions
	// Function /Script/DynamicRollTablesRuntime.FortGamestateComponent_DynamicRollTableManager.HandlePlaylistDataReady
	// void HandlePlaylistDataReady(class AFortGameStateAthena* GameState, class UFortPlaylist* Playlist, FGameplayTagContainer& PlaylistContextTags); // [0xa2ce048] Final|Native|Private|HasOutParms 
};

/// Struct /Script/DynamicRollTablesRuntime.FortDynamicRollResult
/// Size: 0x0008 (0x000000 - 0x000008)
class FFortDynamicRollResult : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(class UFortItemDefinition*)                Item                                                        OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/DynamicRollTablesRuntime.FortDynamicRollBaseWeightTableRow
/// Size: 0x0030 (0x000008 - 0x000038)
class FFortDynamicRollBaseWeightTableRow : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(class UFortItemDefinition*)                ItemDefinition                                              OFFSET(get<T>, {0x8, 8, 0, 0})
	DMember(float)                                     BaseWeight                                                  OFFSET(get<float>, {0x10, 4, 0, 0})
	CMember(TArray<FGameplayTag>)                      ModTags                                                     OFFSET(get<T>, {0x18, 16, 0, 0})
	DMember(bool)                                      bOwningItemZerosWeight                                      OFFSET(get<bool>, {0x28, 1, 0, 0})
	DMember(float)                                     MaxModifiedWeight                                           OFFSET(get<float>, {0x2C, 4, 0, 0})
	DMember(float)                                     MinModifiedWeight                                           OFFSET(get<float>, {0x30, 4, 0, 0})
};

/// Struct /Script/DynamicRollTablesRuntime.FortDynamicRollWeightModifierTableRow
/// Size: 0x0010 (0x000008 - 0x000018)
class FFortDynamicRollWeightModifierTableRow : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FGameplayTag)                              ActivatingPlayerTag                                         OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	SMember(FGameplayTag)                              TargetModTag                                                OFFSET(getStruct<T>, {0xC, 4, 0, 0})
	CMember(ERollModifierOperation)                    WeightModifierOperation                                     OFFSET(get<T>, {0x10, 1, 0, 0})
	DMember(float)                                     WeightModificationValue                                     OFFSET(get<float>, {0x14, 4, 0, 0})
};

/// Struct /Script/DynamicRollTablesRuntime.DynamicRollModifiersActivatedByPlayerTagContainer
/// Size: 0x0010 (0x000000 - 0x000010)
class FDynamicRollModifiersActivatedByPlayerTagContainer : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Enum /Script/DynamicRollTablesRuntime.ERollModifierOperation
/// Size: 0x04
enum class ERollModifierOperation : uint8_t
{
	ERollModifierOperation__Add                                                      = 0,
	ERollModifierOperation__Multiply                                                 = 1,
	ERollModifierOperation__Zero                                                     = 2,
	ERollModifierOperation__ERollModifierOperation_MAX                               = 3
};

