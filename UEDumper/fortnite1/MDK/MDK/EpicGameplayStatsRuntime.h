
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: GameplayTags

/// Class /Script/EpicGameplayStatsRuntime.BlueprintGameplayStatsLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UBlueprintGameplayStatsLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/EpicGameplayStatsRuntime.BlueprintGameplayStatsLibrary.NotEqual_GameplayStatTagGameplayStatTag
	// bool NotEqual_GameplayStatTagGameplayStatTag(FGameplayStatTag A, FGameplayStatTag B);                                    // [0x868ee00] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/EpicGameplayStatsRuntime.BlueprintGameplayStatsLibrary.EqualEqual_GameplayStatTagGameplayStatTag
	// bool EqualEqual_GameplayStatTagGameplayStatTag(FGameplayStatTag A, FGameplayStatTag B);                                  // [0x868ecc4] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/EpicGameplayStatsRuntime.GameplayTagTableManager
/// Size: 0x0068 (0x000030 - 0x000098)
class UGameplayTagTableManager : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	CMember(TArray<FManagedGameplayTagDataTableItem>)  Tables                                                      OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Struct /Script/EpicGameplayStatsRuntime.TagTableManagerHelper
/// Size: 0x0001 (0x000000 - 0x000001)
class FTagTableManagerHelper : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/EpicGameplayStatsRuntime.GameplayStatMetadataTableRow
/// Size: 0x0040 (0x000008 - 0x000048)
class FGameplayStatMetadataTableRow : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FString)                                   BackendName                                                 OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	SMember(FText)                                     DisplayName                                                 OFFSET(getStruct<T>, {0x18, 16, 0, 0})
	CMember(TArray<EEpicLeaderboardTimeWindow>)        Windows                                                     OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(EEpicLeaderboardUpdateFunction)            Metric                                                      OFFSET(get<T>, {0x38, 1, 0, 0})
	CMember(EEpicLeaderboardDataType)                  DataType                                                    OFFSET(get<T>, {0x39, 1, 0, 0})
	DMember(bool)                                      bPublish                                                    OFFSET(get<bool>, {0x3A, 1, 0, 0})
	DMember(int32_t)                                   WeeklyRefreshInterval                                       OFFSET(get<int32_t>, {0x3C, 4, 0, 0})
	DMember(bool)                                      bExportToBackEnd                                            OFFSET(get<bool>, {0x40, 1, 0, 0})
	DMember(bool)                                      bShowInFrontEnd                                             OFFSET(get<bool>, {0x41, 1, 0, 0})
};

/// Struct /Script/EpicGameplayStatsRuntime.GameplayStatTag
/// Size: 0x0004 (0x000004 - 0x000008)
class FGameplayStatTag : public FGameplayTag
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FGameplayTag)                              tag                                                         OFFSET(getStruct<T>, {0x4, 4, 0, 0})
};

/// Struct /Script/EpicGameplayStatsRuntime.ManagedGameplayTagDataTableItem
/// Size: 0x0010 (0x000000 - 0x000010)
class FManagedGameplayTagDataTableItem : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FGameplayTag)                              RootTag                                                     OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(class UDataTable*)                         DataTable                                                   OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Enum /Script/EpicGameplayStatsRuntime.EEpicLeaderboardDataType
/// Size: 0x03
enum class EEpicLeaderboardDataType : uint8_t
{
	EEpicLeaderboardDataType__Integer                                                = 0,
	EEpicLeaderboardDataType__Double                                                 = 1,
	EEpicLeaderboardDataType__EEpicLeaderboardDataType_MAX                           = 2
};

/// Enum /Script/EpicGameplayStatsRuntime.EEpicLeaderboardTimeWindow
/// Size: 0x05
enum class EEpicLeaderboardTimeWindow : uint8_t
{
	EEpicLeaderboardTimeWindow__Daily                                                = 0,
	EEpicLeaderboardTimeWindow__Weekly                                               = 1,
	EEpicLeaderboardTimeWindow__Monthly                                              = 2,
	EEpicLeaderboardTimeWindow__AllTime                                              = 3,
	EEpicLeaderboardTimeWindow__EEpicLeaderboardTimeWindow_MAX                       = 4
};

/// Enum /Script/EpicGameplayStatsRuntime.EEpicLeaderboardUpdateFunction
/// Size: 0x04
enum class EEpicLeaderboardUpdateFunction : uint8_t
{
	EEpicLeaderboardUpdateFunction__Min                                              = 0,
	EEpicLeaderboardUpdateFunction__Max                                              = 1,
	EEpicLeaderboardUpdateFunction__Sum                                              = 2,
	EEpicLeaderboardUpdateFunction__MostRecent                                       = 3
};

