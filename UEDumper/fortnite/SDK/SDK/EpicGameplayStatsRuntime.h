
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: GameplayTags

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

/// Class /Script/EpicGameplayStatsRuntime.BlueprintGameplayStatsLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UBlueprintGameplayStatsLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/EpicGameplayStatsRuntime.BlueprintGameplayStatsLibrary.NotEqual_GameplayStatTagGameplayStatTag
	// bool NotEqual_GameplayStatTagGameplayStatTag(FGameplayStatTag A, FGameplayStatTag B);                                 // [0x811d524] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/EpicGameplayStatsRuntime.BlueprintGameplayStatsLibrary.EqualEqual_GameplayStatTagGameplayStatTag
	// bool EqualEqual_GameplayStatTagGameplayStatTag(FGameplayStatTag A, FGameplayStatTag B);                               // [0x811d318] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Struct /Script/EpicGameplayStatsRuntime.ManagedGameplayTagDataTableItem
/// Size: 0x0010 (0x000000 - 0x000010)
struct FManagedGameplayTagDataTableItem
{ 
	FGameplayTag                                       RootTag;                                                    // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	class UDataTable*                                  DataTable;                                                  // 0x0008   (0x0008)  
};

/// Class /Script/EpicGameplayStatsRuntime.GameplayTagTableManager
/// Size: 0x0068 (0x000030 - 0x000098)
class UGameplayTagTableManager : public UDataAsset
{ 
public:
	TArray<FManagedGameplayTagDataTableItem>           Tables;                                                     // 0x0030   (0x0010)  
	unsigned char                                      UnknownData00_6[0x58];                                      // 0x0040   (0x0058)  MISSED
};

/// Struct /Script/EpicGameplayStatsRuntime.TagTableManagerHelper
/// Size: 0x0001 (0x000000 - 0x000001)
struct FTagTableManagerHelper
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/EpicGameplayStatsRuntime.GameplayStatMetadataTableRow
/// Size: 0x0048 (0x000008 - 0x000050)
struct FGameplayStatMetadataTableRow : FTableRowBase
{ 
	SDK_UNDEFINED(16,13519) /* FString */              __um(BackendName);                                          // 0x0008   (0x0010)  
	SDK_UNDEFINED(24,13520) /* FText */                __um(DisplayName);                                          // 0x0018   (0x0018)  
	TArray<EEpicLeaderboardTimeWindow>                 Windows;                                                    // 0x0030   (0x0010)  
	EEpicLeaderboardUpdateFunction                     Metric;                                                     // 0x0040   (0x0001)  
	EEpicLeaderboardDataType                           DataType;                                                   // 0x0041   (0x0001)  
	bool                                               bPublish;                                                   // 0x0042   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x0043   (0x0001)  MISSED
	int32_t                                            WeeklyRefreshInterval;                                      // 0x0044   (0x0004)  
	bool                                               bExportToBackEnd;                                           // 0x0048   (0x0001)  
	bool                                               bShowInFrontEnd;                                            // 0x0049   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x004A   (0x0006)  MISSED
};

/// Struct /Script/EpicGameplayStatsRuntime.GameplayStatTag
/// Size: 0x0004 (0x000004 - 0x000008)
struct FGameplayStatTag : FGameplayTag
{ 
	FGameplayTag                                       tag;                                                        // 0x0004   (0x0004)  
};

