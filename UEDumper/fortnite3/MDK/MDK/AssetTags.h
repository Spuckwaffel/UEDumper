
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/AssetTags.AssetTagsSubsystem
/// Size: 0x0000 (0x000030 - 0x000030)
class UAssetTagsSubsystem : public UEngineSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:


	/// Functions
	// Function /Script/AssetTags.AssetTagsSubsystem.K2_GetCollectionsContainingAsset
	// TArray<FName> K2_GetCollectionsContainingAsset(FSoftObjectPath& AssetPath);                                              // [0xd4d6790] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/AssetTags.AssetTagsSubsystem.GetCollectionsContainingAssetPtr
	// TArray<FName> GetCollectionsContainingAssetPtr(class UObject* AssetPtr);                                                 // [0xd4d66e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AssetTags.AssetTagsSubsystem.GetCollectionsContainingAssetData
	// TArray<FName> GetCollectionsContainingAssetData(FAssetData& AssetData);                                                  // [0xd4d65e8] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/AssetTags.AssetTagsSubsystem.GetCollectionsContainingAsset
	// TArray<FName> GetCollectionsContainingAsset(FName AssetPathName);                                                        // [0xd4d6484] Final|Native|Public|BlueprintCallable 
	// Function /Script/AssetTags.AssetTagsSubsystem.GetCollections
	// TArray<FName> GetCollections();                                                                                          // [0xd4d6444] Final|Native|Public|BlueprintCallable 
	// Function /Script/AssetTags.AssetTagsSubsystem.GetAssetsInCollection
	// TArray<FAssetData> GetAssetsInCollection(FName Name);                                                                    // [0xd4d62dc] Final|Native|Public|BlueprintCallable 
	// Function /Script/AssetTags.AssetTagsSubsystem.CollectionExists
	// bool CollectionExists(FName Name);                                                                                       // [0xd4d6194] Final|Native|Public|BlueprintCallable 
};

/// Enum /Script/AssetTags.ECollectionScriptingShareType
/// Size: 0x04
enum class ECollectionScriptingShareType : uint8_t
{
	ECollectionScriptingShareType__Local                                             = 0,
	ECollectionScriptingShareType__Private                                           = 1,
	ECollectionScriptingShareType__Shared                                            = 2,
	ECollectionScriptingShareType__ECollectionScriptingShareType_MAX                 = 3
};

