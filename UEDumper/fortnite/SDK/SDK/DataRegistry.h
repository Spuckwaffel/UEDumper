
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine
/// dependency: GameplayTags

/// Enum /Script/DataRegistry.EDataRegistryAcquireStatus
/// Size: 0x08
enum class EDataRegistryAcquireStatus : uint8_t
{
	EDataRegistryAcquireStatus__NotStarted                                           = 0,
	EDataRegistryAcquireStatus__WaitingForInitialAcquire                             = 1,
	EDataRegistryAcquireStatus__InitialAcquireFinished                               = 2,
	EDataRegistryAcquireStatus__WaitingForResources                                  = 3,
	EDataRegistryAcquireStatus__AcquireFinished                                      = 4,
	EDataRegistryAcquireStatus__AcquireError                                         = 5,
	EDataRegistryAcquireStatus__DoesNotExist                                         = 6,
	EDataRegistryAcquireStatus__EDataRegistryAcquireStatus_MAX                       = 7
};

/// Enum /Script/DataRegistry.EMetaDataRegistrySourceAssetUsage
/// Size: 0x05
enum class EMetaDataRegistrySourceAssetUsage : uint8_t
{
	EMetaDataRegistrySourceAssetUsage__NoAssets                                      = 0,
	EMetaDataRegistrySourceAssetUsage__SearchAssets                                  = 1,
	EMetaDataRegistrySourceAssetUsage__RegisterAssets                                = 2,
	EMetaDataRegistrySourceAssetUsage__SearchAndRegisterAssets                       = 3,
	EMetaDataRegistrySourceAssetUsage__EMetaDataRegistrySourceAssetUsage_MAX         = 4
};

/// Enum /Script/DataRegistry.EDataRegistrySubsystemGetItemResult
/// Size: 0x03
enum class EDataRegistrySubsystemGetItemResult : uint8_t
{
	EDataRegistrySubsystemGetItemResult__Found                                       = 0,
	EDataRegistrySubsystemGetItemResult__NotFound                                    = 1,
	EDataRegistrySubsystemGetItemResult__EDataRegistrySubsystemGetItemResult_MAX     = 2
};

/// Enum /Script/DataRegistry.EDataRegistryAvailability
/// Size: 0x07
enum class EDataRegistryAvailability : uint8_t
{
	EDataRegistryAvailability__DoesNotExist                                          = 0,
	EDataRegistryAvailability__Unknown                                               = 1,
	EDataRegistryAvailability__Remote                                                = 2,
	EDataRegistryAvailability__OnDisk                                                = 3,
	EDataRegistryAvailability__LocalAsset                                            = 4,
	EDataRegistryAvailability__PreCached                                             = 5,
	EDataRegistryAvailability__EDataRegistryAvailability_MAX                         = 6
};

/// Class /Script/DataRegistry.DataRegistrySettings
/// Size: 0x0018 (0x000030 - 0x000048)
class UDataRegistrySettings : public UDeveloperSettings
{ 
public:
	TArray<FDirectoryPath>                             DirectoriesToScan;                                          // 0x0030   (0x0010)  
	bool                                               bInitializeAllLoadedRegistries;                             // 0x0040   (0x0001)  
	bool                                               bIgnoreMissingCookedAssetRegistryData;                      // 0x0041   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x0042   (0x0006)  MISSED
};

/// Struct /Script/DataRegistry.DataRegistryIdFormat
/// Size: 0x0004 (0x000000 - 0x000004)
struct FDataRegistryIdFormat
{ 
	FGameplayTag                                       BaseGameplayTag;                                            // 0x0000   (0x0004)  
};

/// Struct /Script/DataRegistry.DataRegistryCachePolicy
/// Size: 0x0014 (0x000000 - 0x000014)
struct FDataRegistryCachePolicy
{ 
	bool                                               bCacheIsAlwaysVolatile;                                     // 0x0000   (0x0001)  
	bool                                               bUseCurveTableCacheVersion;                                 // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0002   (0x0002)  MISSED
	int32_t                                            MinNumberKept;                                              // 0x0004   (0x0004)  
	int32_t                                            MaxNumberKept;                                              // 0x0008   (0x0004)  
	float                                              ForceKeepSeconds;                                           // 0x000C   (0x0004)  
	float                                              ForceReleaseSeconds;                                        // 0x0010   (0x0004)  
};

/// Class /Script/DataRegistry.DataRegistry
/// Size: 0x0090 (0x000028 - 0x0000B8)
class UDataRegistry : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	FName                                              RegistryType;                                               // 0x0028   (0x0004)  
	FDataRegistryIdFormat                              IdFormat;                                                   // 0x002C   (0x0004)  
	class UScriptStruct*                               ItemStruct;                                                 // 0x0030   (0x0008)  
	TArray<class UDataRegistrySource*>                 DataSources;                                                // 0x0038   (0x0010)  
	TArray<class UDataRegistrySource*>                 RuntimeSources;                                             // 0x0048   (0x0010)  
	float                                              TimerUpdateFrequency;                                       // 0x0058   (0x0004)  
	FDataRegistryCachePolicy                           DefaultCachePolicy;                                         // 0x005C   (0x0014)  
	unsigned char                                      UnknownData01_6[0x48];                                      // 0x0070   (0x0048)  MISSED
};

/// Class /Script/DataRegistry.DataRegistrySource
/// Size: 0x0010 (0x000028 - 0x000038)
class UDataRegistrySource : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x30];                                      // 0x0000   (0x0030)  MISSED
	class UDataRegistrySource*                         ParentSource;                                               // 0x0030   (0x0008)  
};

/// Class /Script/DataRegistry.MetaDataRegistrySource
/// Size: 0x00D0 (0x000038 - 0x000108)
class UMetaDataRegistrySource : public UDataRegistrySource
{ 
public:
	EMetaDataRegistrySourceAssetUsage                  AssetUsage;                                                 // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0039   (0x0007)  MISSED
	FAssetManagerSearchRules                           SearchRules;                                                // 0x0040   (0x0050)  
	SDK_UNDEFINED(80,1958) /* TMap<FName, UDataRegistrySource*> */ __um(RuntimeChildren);                          // 0x0090   (0x0050)  
	unsigned char                                      UnknownData01_6[0x28];                                      // 0x00E0   (0x0028)  MISSED
};

/// Struct /Script/DataRegistry.DataRegistrySource_DataTableRules
/// Size: 0x0008 (0x000000 - 0x000008)
struct FDataRegistrySource_DataTableRules
{ 
	bool                                               bPrecacheTable;                                             // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              CachedTableKeepSeconds;                                     // 0x0004   (0x0004)  
};

/// Class /Script/DataRegistry.DataRegistrySource_CurveTable
/// Size: 0x0060 (0x000038 - 0x000098)
class UDataRegistrySource_CurveTable : public UDataRegistrySource
{ 
public:
	SDK_UNDEFINED(32,1959) /* TWeakObjectPtr<UCurveTable*> */ __um(SourceTable);                                   // 0x0038   (0x0020)  
	FDataRegistrySource_DataTableRules                 TableRules;                                                 // 0x0058   (0x0008)  
	class UCurveTable*                                 CachedTable;                                                // 0x0060   (0x0008)  
	class UCurveTable*                                 PreloadTable;                                               // 0x0068   (0x0008)  
	unsigned char                                      UnknownData00_6[0x28];                                      // 0x0070   (0x0028)  MISSED
};

/// Class /Script/DataRegistry.MetaDataRegistrySource_CurveTable
/// Size: 0x0010 (0x000108 - 0x000118)
class UMetaDataRegistrySource_CurveTable : public UMetaDataRegistrySource
{ 
public:
	class UClass*                                      CreatedSource;                                              // 0x0108   (0x0008)  
	FDataRegistrySource_DataTableRules                 TableRules;                                                 // 0x0110   (0x0008)  
};

/// Class /Script/DataRegistry.DataRegistrySource_DataTable
/// Size: 0x0060 (0x000038 - 0x000098)
class UDataRegistrySource_DataTable : public UDataRegistrySource
{ 
public:
	SDK_UNDEFINED(32,1960) /* TWeakObjectPtr<UDataTable*> */ __um(SourceTable);                                    // 0x0038   (0x0020)  
	FDataRegistrySource_DataTableRules                 TableRules;                                                 // 0x0058   (0x0008)  
	class UDataTable*                                  CachedTable;                                                // 0x0060   (0x0008)  
	class UDataTable*                                  PreloadTable;                                               // 0x0068   (0x0008)  
	unsigned char                                      UnknownData00_6[0x28];                                      // 0x0070   (0x0028)  MISSED
};

/// Class /Script/DataRegistry.MetaDataRegistrySource_DataTable
/// Size: 0x0010 (0x000108 - 0x000118)
class UMetaDataRegistrySource_DataTable : public UMetaDataRegistrySource
{ 
public:
	class UClass*                                      CreatedSource;                                              // 0x0108   (0x0008)  
	FDataRegistrySource_DataTableRules                 TableRules;                                                 // 0x0110   (0x0008)  
};

/// Class /Script/DataRegistry.DataRegistrySubsystem
/// Size: 0x00B0 (0x000030 - 0x0000E0)
class UDataRegistrySubsystem : public UEngineSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0xB0];                                      // 0x0030   (0x00B0)  MISSED


	/// Functions
	// Function /Script/DataRegistry.DataRegistrySubsystem.NotEqual_DataRegistryType
	// bool NotEqual_DataRegistryType(FDataRegistryType A, FDataRegistryType B);                                             // [0x6a243fc] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/DataRegistry.DataRegistrySubsystem.NotEqual_DataRegistryId
	// bool NotEqual_DataRegistryId(FDataRegistryId A, FDataRegistryId B);                                                   // [0x6a241d8] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/DataRegistry.DataRegistrySubsystem.IsValidDataRegistryType
	// bool IsValidDataRegistryType(FDataRegistryType DataRegistryType);                                                     // [0x6a0cb6c] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/DataRegistry.DataRegistrySubsystem.IsValidDataRegistryId
	// bool IsValidDataRegistryId(FDataRegistryId DataRegistryId);                                                           // [0x6a0ca2c] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/DataRegistry.DataRegistrySubsystem.GetCachedItemFromLookupBP
	// bool GetCachedItemFromLookupBP(FDataRegistryId ItemId, FDataRegistryLookup& ResolvedLookup, FTableRowBase& OutItem);  // [0x6f8de98] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/DataRegistry.DataRegistrySubsystem.GetCachedItemBP
	// bool GetCachedItemBP(FDataRegistryId ItemId, FTableRowBase& OutItem);                                                 // [0x6f8dbc0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/DataRegistry.DataRegistrySubsystem.FindCachedItemBP
	// void FindCachedItemBP(FDataRegistryId ItemId, EDataRegistrySubsystemGetItemResult& OutResult, FTableRowBase& OutItem); // [0x6f8d8b4] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/DataRegistry.DataRegistrySubsystem.EvaluateDataRegistryCurve
	// void EvaluateDataRegistryCurve(FDataRegistryId ItemId, float InputValue, float DefaultValue, EDataRegistrySubsystemGetItemResult& OutResult, float& OutValue); // [0x6f8d500] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/DataRegistry.DataRegistrySubsystem.EqualEqual_DataRegistryType
	// bool EqualEqual_DataRegistryType(FDataRegistryType A, FDataRegistryType B);                                           // [0x69fb4c0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/DataRegistry.DataRegistrySubsystem.EqualEqual_DataRegistryId
	// bool EqualEqual_DataRegistryId(FDataRegistryId A, FDataRegistryId B);                                                 // [0x69fb298] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/DataRegistry.DataRegistrySubsystem.Conv_DataRegistryTypeToString
	// FString Conv_DataRegistryTypeToString(FDataRegistryType DataRegistryType);                                            // [0x69eb210] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/DataRegistry.DataRegistrySubsystem.Conv_DataRegistryIdToString
	// FString Conv_DataRegistryIdToString(FDataRegistryId DataRegistryId);                                                  // [0x6f8d3ac] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/DataRegistry.DataRegistrySubsystem.AcquireItemBP
	// bool AcquireItemBP(FDataRegistryId ItemId, FDelegateProperty AcquireCallback);                                        // [0x6f8d18c] Final|Native|Static|Public|BlueprintCallable 
};

/// Struct /Script/DataRegistry.DataRegistryLookup
/// Size: 0x0018 (0x000000 - 0x000018)
struct FDataRegistryLookup
{ 
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x0000   (0x0018)  MISSED
};

/// Struct /Script/DataRegistry.DataRegistryType
/// Size: 0x0004 (0x000000 - 0x000004)
struct FDataRegistryType
{ 
	FName                                              Name;                                                       // 0x0000   (0x0004)  
};

/// Struct /Script/DataRegistry.DataRegistryId
/// Size: 0x0008 (0x000000 - 0x000008)
struct FDataRegistryId
{ 
	FDataRegistryType                                  RegistryType;                                               // 0x0000   (0x0004)  
	FName                                              ItemName;                                                   // 0x0004   (0x0004)  
};

/// Struct /Script/DataRegistry.DataRegistrySourceItemId
/// Size: 0x0030 (0x000000 - 0x000030)
struct FDataRegistrySourceItemId
{ 
	unsigned char                                      UnknownData00_2[0x30];                                      // 0x0000   (0x0030)  MISSED
};

