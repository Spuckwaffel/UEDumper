
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: GameFeatures
/// dependency: GameplayTags

/// Class /Script/GameFeatureDataTables.GameFeatureAction_GameFeatureDataTables
/// Size: 0x0028 (0x000028 - 0x000050)
class UGameFeatureAction_GameFeatureDataTables : public UGameFeatureAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FGameplayTag)                              GameFeatureDataTableID                                      OFFSET(getStruct<T>, {0x28, 4, 0, 0})
	SMember(FSoftObjectPath)                           DataTable                                                   OFFSET(getStruct<T>, {0x30, 24, 0, 0})
	DMember(bool)                                      bIsParentDataTable                                          OFFSET(get<bool>, {0x48, 1, 0, 0})
};

/// Class /Script/GameFeatureDataTables.GameFeatureDataTablesSubsystem
/// Size: 0x0050 (0x000030 - 0x000080)
class UGameFeatureDataTablesSubsystem : public UEngineSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(TMap<FGameplayTag, FGameFeatureDataTableEntry>) DataTableEntryMap                                      OFFSET(get<T>, {0x30, 80, 0, 0})
};

/// Struct /Script/GameFeatureDataTables.GameFeatureDataTableEntry
/// Size: 0x0048 (0x000000 - 0x000048)
class FGameFeatureDataTableEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(TArray<class UCompositeDataTable*>)        CompositeDataTables                                         OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<class UDataTable*>)                 ParentDataTables                                            OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(class UScriptStruct*)                      StructType                                                  OFFSET(get<T>, {0x20, 8, 0, 0})
};

