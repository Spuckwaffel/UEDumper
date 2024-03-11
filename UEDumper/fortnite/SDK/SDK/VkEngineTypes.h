
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: JsonUtilities
/// dependency: LinkId

/// Enum /Script/VkEngineTypes.EValkyrieProjectDescriptorFileVersion
/// Size: 0x19
enum class EValkyrieProjectDescriptorFileVersion : uint8_t
{
	EValkyrieProjectDescriptorFileVersion__Invalid                                   = 0,
	EValkyrieProjectDescriptorFileVersion__Initial                                   = 1,
	EValkyrieProjectDescriptorFileVersion__AddProjectMetadata                        = 2,
	EValkyrieProjectDescriptorFileVersion__AddedCompatibilityLabel                   = 3,
	EValkyrieProjectDescriptorFileVersion__AddBindings                               = 4,
	EValkyrieProjectDescriptorFileVersion__AddEditorPermissions                      = 5,
	EValkyrieProjectDescriptorFileVersion__AddEpicApp                                = 6,
	EValkyrieProjectDescriptorFileVersion__AddDataSets                               = 7,
	EValkyrieProjectDescriptorFileVersion__AddVersionSuffix                          = 8,
	EValkyrieProjectDescriptorFileVersion__AddProjectKind                            = 9,
	EValkyrieProjectDescriptorFileVersion__AddMetaDataTags                           = 10,
	EValkyrieProjectDescriptorFileVersion__RevertMetaDataTags                        = 11,
	EValkyrieProjectDescriptorFileVersion__AddDocsUrl                                = 12,
	EValkyrieProjectDescriptorFileVersion__AddTemplateCategory                       = 13,
	EValkyrieProjectDescriptorFileVersion__BranchDependencies                        = 14,
	EValkyrieProjectDescriptorFileVersion__AddFeatureSet                             = 15,
	EValkyrieProjectDescriptorFileVersion__LatestPlusOne                             = 16,
	EValkyrieProjectDescriptorFileVersion__Latest                                    = 15,
	EValkyrieProjectDescriptorFileVersion__EValkyrieProjectDescriptorFileVersion_MAX = 17
};

/// Enum /Script/VkEngineTypes.EValkyrieProjectReferenceDescriptorFileVersion
/// Size: 0x06
enum class EValkyrieProjectReferenceDescriptorFileVersion : uint8_t
{
	EValkyrieProjectReferenceDescriptorFileVersion__Invalid                          = 0,
	EValkyrieProjectReferenceDescriptorFileVersion__Initial                          = 1,
	EValkyrieProjectReferenceDescriptorFileVersion__AddLinkCode                      = 2,
	EValkyrieProjectReferenceDescriptorFileVersion__LatestPlusOne                    = 3,
	EValkyrieProjectReferenceDescriptorFileVersion__Latest                           = 2,
	EValkyrieProjectReferenceDescriptorFileVersion__EValkyrieProjectReferenceDescriptorFileVersion_MAX = 4
};

/// Enum /Script/VkEngineTypes.EValkyrieProjectKind
/// Size: 0x06
enum class EValkyrieProjectKind : uint32_t
{
	EValkyrieProjectKind__Island                                                     = 0,
	EValkyrieProjectKind__Library                                                    = 1,
	EValkyrieProjectKind__Count                                                      = 2,
	EValkyrieProjectKind__Unspecified                                                = 3,
	EValkyrieProjectKind__Default                                                    = 0,
	EValkyrieProjectKind__EValkyrieProjectKind_MAX                                   = 4
};

/// Enum /Script/VkEngineTypes.EValkyrieProjectTemplateCategory
/// Size: 0x06
enum class EValkyrieProjectTemplateCategory : uint32_t
{
	EValkyrieProjectTemplateCategory__UserGenerated                                  = 0,
	EValkyrieProjectTemplateCategory__FeatureExample                                 = 1,
	EValkyrieProjectTemplateCategory__SampleProject                                  = 2,
	EValkyrieProjectTemplateCategory__Count                                          = 3,
	EValkyrieProjectTemplateCategory__Default                                        = 0,
	EValkyrieProjectTemplateCategory__EValkyrieProjectTemplateCategory_MAX           = 4
};

/// Enum /Script/VkEngineTypes.EConsumerRole
/// Size: 0x04
enum class EConsumerRole : uint8_t
{
	EConsumerRole__Server                                                            = 0,
	EConsumerRole__Client                                                            = 1,
	EConsumerRole__Editor                                                            = 2,
	EConsumerRole__EConsumerRole_MAX                                                 = 3
};

/// Enum /Script/VkEngineTypes.EVkLinkPublishMode
/// Size: 0x03
enum class EVkLinkPublishMode : uint8_t
{
	EVkLinkPublishMode__Live                                                         = 0,
	EVkLinkPublishMode__Playtest                                                     = 1,
	EVkLinkPublishMode__EVkLinkPublishMode_MAX                                       = 2
};

/// Enum /Script/VkEngineTypes.EVkIdType
/// Size: 0x03
enum class EVkIdType : uint8_t
{
	EVkIdType__Account                                                               = 0,
	EVkIdType__Team                                                                  = 1,
	EVkIdType__EVkIdType_MAX                                                         = 2
};

/// Enum /Script/VkEngineTypes.EVkTicketStatus
/// Size: 0x05
enum class EVkTicketStatus : uint8_t
{
	EVkTicketStatus__None                                                            = 0,
	EVkTicketStatus__Succeeded                                                       = 1,
	EVkTicketStatus__Running                                                         = 2,
	EVkTicketStatus__Failed                                                          = 3,
	EVkTicketStatus__EVkTicketStatus_MAX                                             = 4
};

/// Enum /Script/VkEngineTypes.EVkModuleAccess
/// Size: 0x04
enum class EVkModuleAccess : uint8_t
{
	EVkModuleAccess__Private                                                         = 0,
	EVkModuleAccess__Protected                                                       = 1,
	EVkModuleAccess__Public                                                          = 2,
	EVkModuleAccess__EVkModuleAccess_MAX                                             = 3
};

/// Enum /Script/VkEngineTypes.EVkModulePublishStatus
/// Size: 0x03
enum class EVkModulePublishStatus : uint8_t
{
	EVkModulePublishStatus__Unreleased                                               = 0,
	EVkModulePublishStatus__PublishedLive                                            = 1,
	EVkModulePublishStatus__EVkModulePublishStatus_MAX                               = 2
};

/// Enum /Script/VkEngineTypes.EVkModuleSafetyStatus
/// Size: 0x05
enum class EVkModuleSafetyStatus : uint8_t
{
	EVkModuleSafetyStatus__Unknown                                                   = 0,
	EVkModuleSafetyStatus__Passed                                                    = 1,
	EVkModuleSafetyStatus__FailedSoft                                                = 2,
	EVkModuleSafetyStatus__FailedHard                                                = 3,
	EVkModuleSafetyStatus__EVkModuleSafetyStatus_MAX                                 = 4
};

/// Enum /Script/VkEngineTypes.EVkModuleModerationSource
/// Size: 0x04
enum class EVkModuleModerationSource : uint8_t
{
	EVkModuleModerationSource__System                                                = 0,
	EVkModuleModerationSource__Manual                                                = 1,
	EVkModuleModerationSource__Error                                                 = 2,
	EVkModuleModerationSource__EVkModuleModerationSource_MAX                         = 3
};

/// Enum /Script/VkEngineTypes.EVkValidationFlags
/// Size: 0x08
enum class EVkValidationFlags : uint8_t
{
	EVkValidationFlags__None                                                         = 0,
	EVkValidationFlags__VF_IgnoreValidation                                          = 1,
	EVkValidationFlags__VF_AllowMissingGameFeatureDataAsset                          = 2,
	EVkValidationFlags__VF_AllowEngineContent                                        = 4,
	EVkValidationFlags__VF_AllowGameContent                                          = 8,
	EVkValidationFlags__VF_NoPreCheckVerse                                           = 16,
	EVkValidationFlags__VF_ErrorsAsWarnings                                          = 32,
	EVkValidationFlags__EVkValidationFlags_MAX                                       = 33
};

/// Struct /Script/VkEngineTypes.VkLaunchData_JoinMatchmakingSession
/// Size: 0x0010 (0x000000 - 0x000010)
struct FVkLaunchData_JoinMatchmakingSession
{ 
	SDK_UNDEFINED(16,2757) /* FString */               __um(SessionId);                                            // 0x0000   (0x0010)  
};

/// Struct /Script/VkEngineTypes.ValkyrieProjectDescriptorIOContext
/// Size: 0x0040 (0x000000 - 0x000040)
struct FValkyrieProjectDescriptorIOContext
{ 
	unsigned char                                      UnknownData00_2[0x40];                                      // 0x0000   (0x0040)  MISSED
};

/// Struct /Script/VkEngineTypes.ValkyriePluginReferenceDescriptor
/// Size: 0x0018 (0x000000 - 0x000018)
struct FValkyriePluginReferenceDescriptor
{ 
	SDK_UNDEFINED(16,2758) /* FString */               __um(Name);                                                 // 0x0000   (0x0010)  
	bool                                               bIsRoot;                                                    // 0x0010   (0x0001)  
	bool                                               bIsPublic;                                                  // 0x0011   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x0012   (0x0006)  MISSED
};

/// Struct /Script/VkEngineTypes.ValkyrieProjectReferenceDescriptor
/// Size: 0x0038 (0x000000 - 0x000038)
struct FValkyrieProjectReferenceDescriptor
{ 
	char                                               FileVersion;                                                // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	SDK_UNDEFINED(16,2759) /* FString */               __um(ID);                                                   // 0x0008   (0x0010)  
	FOnlineLinkId                                      LinkCode;                                                   // 0x0018   (0x0018)  
	bool                                               bEnabled;                                                   // 0x0030   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0031   (0x0007)  MISSED
};

/// Struct /Script/VkEngineTypes.ValkyrieProjectBindingsDescriptor
/// Size: 0x0070 (0x000000 - 0x000070)
struct FValkyrieProjectBindingsDescriptor
{ 
	SDK_UNDEFINED(16,2760) /* FString */               __um(ProjectID);                                            // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,2761) /* FString */               __um(ProjectVersePath);                                     // 0x0010   (0x0010)  
	SDK_UNDEFINED(80,2762) /* TMap<FString, FString> */ __um(Modules);                                             // 0x0020   (0x0050)  
};

/// Struct /Script/VkEngineTypes.ValkyrieProjectDescriptor
/// Size: 0x0250 (0x000000 - 0x000250)
struct FValkyrieProjectDescriptor
{ 
	char                                               FileVersion;                                                // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	SDK_UNDEFINED(16,2763) /* FString */               __um(VersionSuffix);                                        // 0x0008   (0x0010)  
	SDK_UNDEFINED(16,2764) /* FString */               __um(Title);                                                // 0x0018   (0x0010)  
	SDK_UNDEFINED(16,2765) /* FString */               __um(Description);                                          // 0x0028   (0x0010)  
	SDK_UNDEFINED(16,2766) /* FString */               __um(KeyArt);                                               // 0x0038   (0x0010)  
	SDK_UNDEFINED(16,2767) /* FString */               __um(DocsUrl);                                              // 0x0048   (0x0010)  
	EValkyrieProjectKind                               Kind;                                                       // 0x0058   (0x0004)  
	EValkyrieProjectTemplateCategory                   TemplateCategory;                                           // 0x005C   (0x0004)  
	SDK_UNDEFINED(16,2768) /* FString */               __um(CompatibilityVersion);                                 // 0x0060   (0x0010)  
	SDK_UNDEFINED(16,2769) /* TArray<FString> */       __um(EditorPermissions);                                    // 0x0070   (0x0010)  
	SDK_UNDEFINED(16,2770) /* FString */               __um(EpicApp);                                              // 0x0080   (0x0010)  
	float                                              SortPriority;                                               // 0x0090   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0094   (0x0004)  MISSED
	SDK_UNDEFINED(16,2771) /* FString */               __um(FeatureSet);                                           // 0x0098   (0x0010)  
	TArray<FValkyriePluginReferenceDescriptor>         Plugins;                                                    // 0x00A8   (0x0010)  
	SDK_UNDEFINED(80,2772) /* TMap<FString, FJsonObjectWrapper> */ __um(DataSets);                                 // 0x00B8   (0x0050)  
	TArray<FValkyrieProjectReferenceDescriptor>        Dependencies;                                               // 0x0108   (0x0010)  
	unsigned char                                      UnknownData02_5[0xC8];                                      // 0x0118   (0x00C8)  MISSED
	FValkyrieProjectBindingsDescriptor                 Bindings;                                                   // 0x01E0   (0x0070)  
};

/// Struct /Script/VkEngineTypes.VkNamedId
/// Size: 0x0020 (0x000000 - 0x000020)
struct FVkNamedId
{ 
	SDK_UNDEFINED(16,2773) /* FString */               __um(Name);                                                 // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,2774) /* FString */               __um(ID);                                                   // 0x0010   (0x0010)  
};

/// Struct /Script/VkEngineTypes.VkTypedId
/// Size: 0x0018 (0x000000 - 0x000018)
struct FVkTypedId
{ 
	SDK_UNDEFINED(16,2775) /* FString */               __um(ID);                                                   // 0x0000   (0x0010)  
	EVkIdType                                          Type;                                                       // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/VkEngineTypes.VkVersionedLinkCode
/// Size: 0x0018 (0x000000 - 0x000018)
struct FVkVersionedLinkCode
{ 
	SDK_UNDEFINED(16,2776) /* FString */               __um(Mnemonic);                                             // 0x0000   (0x0010)  
	int32_t                                            Version;                                                    // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/VkEngineTypes.VkContentFilter
/// Size: 0x0020 (0x000000 - 0x000020)
struct FVkContentFilter
{ 
	SDK_UNDEFINED(16,2777) /* FString */               __um(Platform);                                             // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,2778) /* FString */               __um(BuildVersion);                                         // 0x0010   (0x0010)  
};

/// Struct /Script/VkEngineTypes.VkArtifactOption
/// Size: 0x0038 (0x000000 - 0x000038)
struct FVkArtifactOption
{ 
	SDK_UNDEFINED(16,2779) /* FString */               __um(ArtifactId);                                           // 0x0000   (0x0010)  
	EConsumerRole                                      Role;                                                       // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0011   (0x0007)  MISSED
	FVkContentFilter                                   Filter;                                                     // 0x0018   (0x0020)  
};

/// Struct /Script/VkEngineTypes.VkFoundMatchingArtifact
/// Size: 0x0040 (0x000000 - 0x000040)
struct FVkFoundMatchingArtifact
{ 
	SDK_UNDEFINED(16,2780) /* FString */               __um(ArtifactId);                                           // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,2781) /* FString */               __um(Name);                                                 // 0x0010   (0x0010)  
	FVkContentFilter                                   Filter;                                                     // 0x0020   (0x0020)  
};

/// Struct /Script/VkEngineTypes.VkModuleVersion
/// Size: 0x0018 (0x000000 - 0x000018)
struct FVkModuleVersion
{ 
	SDK_UNDEFINED(16,2782) /* FString */               __um(ModuleId);                                             // 0x0000   (0x0010)  
	int32_t                                            Version;                                                    // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/VkEngineTypes.VkPendingModuleVersion
/// Size: 0x0020 (0x000000 - 0x000020)
struct FVkPendingModuleVersion
{ 
	SDK_UNDEFINED(16,2783) /* FString */               __um(ModuleId);                                             // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,2784) /* FString */               __um(TicketId);                                             // 0x0010   (0x0010)  
};

/// Struct /Script/VkEngineTypes.VkModuleVersionWithArtifacts
/// Size: 0x0010 (0x000018 - 0x000028)
struct FVkModuleVersionWithArtifacts : FVkModuleVersion
{ 
	TArray<FVkArtifactOption>                          Artifacts;                                                  // 0x0018   (0x0010)  
};

/// Struct /Script/VkEngineTypes.VkModuleDoc
/// Size: 0x00F0 (0x000000 - 0x0000F0)
struct FVkModuleDoc
{ 
	SDK_UNDEFINED(16,2785) /* FString */               __um(ModuleId);                                             // 0x0000   (0x0010)  
	FDateTime                                          Created;                                                    // 0x0010   (0x0008)  
	FDateTime                                          Updated;                                                    // 0x0018   (0x0008)  
	FVkTypedId                                         Author;                                                     // 0x0020   (0x0018)  
	SDK_UNDEFINED(16,2786) /* FString */               __um(ProjectID);                                            // 0x0038   (0x0010)  
	SDK_UNDEFINED(16,2787) /* FString */               __um(ModuleName);                                           // 0x0048   (0x0010)  
	SDK_UNDEFINED(16,2788) /* FString */               __um(ContentType);                                          // 0x0058   (0x0010)  
	SDK_UNDEFINED(80,2789) /* TMap<EConsumerRole, bool> */ __um(Relevance);                                        // 0x0068   (0x0050)  
	SDK_UNDEFINED(16,2790) /* FString */               __um(AliasForModuleId);                                     // 0x00B8   (0x0010)  
	FJsonObjectWrapper                                 Meta;                                                       // 0x00C8   (0x0020)  
	int32_t                                            LatestVersion;                                              // 0x00E8   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00EC   (0x0004)  MISSED
};

/// Struct /Script/VkEngineTypes.VkResolvedContent
/// Size: 0x0068 (0x000000 - 0x000068)
struct FVkResolvedContent
{ 
	FVkModuleVersion                                   Root;                                                       // 0x0000   (0x0018)  
	SDK_UNDEFINED(80,2791) /* TMap<FString, int32_t> */ __um(Resolutions);                                         // 0x0018   (0x0050)  
};

/// Struct /Script/VkEngineTypes.VkContentPackage
/// Size: 0x00D8 (0x000000 - 0x0000D8)
struct FVkContentPackage
{ 
	SDK_UNDEFINED(16,2792) /* FString */               __um(ProjectID);                                            // 0x0000   (0x0010)  
	SDK_UNDEFINED(80,2793) /* TMap<FString, FString> */ __um(ProjectFlags);                                        // 0x0010   (0x0050)  
	TArray<FVkModuleVersionWithArtifacts>              Content;                                                    // 0x0060   (0x0010)  
	FVkResolvedContent                                 Resolved;                                                   // 0x0070   (0x0068)  
};

/// Struct /Script/VkEngineTypes.VkInstallMetadata
/// Size: 0x0010 (0x000000 - 0x000010)
struct FVkInstallMetadata
{ 
	SDK_UNDEFINED(16,2794) /* FString */               __um(GameFeaturePluginUri);                                 // 0x0000   (0x0010)  
};

/// Struct /Script/VkEngineTypes.VkModuleBinaries
/// Size: 0x0060 (0x000000 - 0x000060)
struct FVkModuleBinaries
{ 
	SDK_UNDEFINED(16,2795) /* FString */               __um(BaseURL);                                              // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,2796) /* FString */               __um(manifest);                                             // 0x0010   (0x0010)  
	SDK_UNDEFINED(16,2797) /* TArray<FString> */       __um(Files);                                                // 0x0020   (0x0010)  
	double                                             TotalSizeKb;                                                // 0x0030   (0x0008)  
	double                                             ManifestSizeKb;                                             // 0x0038   (0x0008)  
	double                                             ManifestDiskSizeKb;                                         // 0x0040   (0x0008)  
	double                                             ManifestDownloadSizeKb;                                     // 0x0048   (0x0008)  
	TArray<FVkInstallMetadata>                         InstallMetadata;                                            // 0x0050   (0x0010)  
};

/// Struct /Script/VkEngineTypes.VkResolvedModule
/// Size: 0x00A8 (0x000000 - 0x0000A8)
struct FVkResolvedModule
{ 
	SDK_UNDEFINED(16,2798) /* FString */               __um(ModuleId);                                             // 0x0000   (0x0010)  
	int32_t                                            Version;                                                    // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0014   (0x0004)  MISSED
	SDK_UNDEFINED(16,2799) /* FString */               __um(BinaryVersion);                                        // 0x0018   (0x0010)  
	SDK_UNDEFINED(16,2800) /* FString */               __um(ArtifactId);                                           // 0x0028   (0x0010)  
	SDK_UNDEFINED(16,2801) /* FString */               __um(CookJobId);                                            // 0x0038   (0x0010)  
	FVkModuleBinaries                                  Binaries;                                                   // 0x0048   (0x0060)  
};

/// Struct /Script/VkEngineTypes.VkCookedContentPackage
/// Size: 0x00D8 (0x000000 - 0x0000D8)
struct FVkCookedContentPackage
{ 
	SDK_UNDEFINED(16,2802) /* FString */               __um(ProjectID);                                            // 0x0000   (0x0010)  
	SDK_UNDEFINED(80,2803) /* TMap<FString, FString> */ __um(ProjectFlags);                                        // 0x0010   (0x0050)  
	TArray<FVkResolvedModule>                          Content;                                                    // 0x0060   (0x0010)  
	FVkResolvedContent                                 Resolved;                                                   // 0x0070   (0x0068)  
};

/// Struct /Script/VkEngineTypes.VkCookedModuleUpdate
/// Size: 0x0028 (0x000018 - 0x000040)
struct FVkCookedModuleUpdate : FVkModuleVersion
{ 
	SDK_UNDEFINED(16,2804) /* FString */               __um(ArtifactId);                                           // 0x0018   (0x0010)  
	SDK_UNDEFINED(16,2805) /* FString */               __um(CookJobId);                                            // 0x0028   (0x0010)  
	bool                                               IsComplete;                                                 // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0039   (0x0007)  MISSED
};

/// Struct /Script/VkEngineTypes.VkCookedContentUpdate
/// Size: 0x0080 (0x000000 - 0x000080)
struct FVkCookedContentUpdate
{ 
	int32_t                                            PendingCookRequests;                                        // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	FVkResolvedContent                                 Resolved;                                                   // 0x0008   (0x0068)  
	TArray<FVkCookedModuleUpdate>                      Modules;                                                    // 0x0070   (0x0010)  
};

/// Struct /Script/VkEngineTypes.VkFileSize
/// Size: 0x0028 (0x000000 - 0x000028)
struct FVkFileSize
{ 
	SDK_UNDEFINED(16,2806) /* TArray<FString> */       __um(Types);                                                // 0x0000   (0x0010)  
	int64_t                                            SourceSize;                                                 // 0x0010   (0x0008)  
	int64_t                                            UncompressedSize;                                           // 0x0018   (0x0008)  
	int64_t                                            CompressedSize;                                             // 0x0020   (0x0008)  
};

/// Struct /Script/VkEngineTypes.VkFileSizes
/// Size: 0x0050 (0x000000 - 0x000050)
struct FVkFileSizes
{ 
	SDK_UNDEFINED(80,2807) /* TMap<FString, FVkFileSize> */ __um(FileSizeMap);                                     // 0x0000   (0x0050)  
};

/// Struct /Script/VkEngineTypes.VkExtendedErrorParam
/// Size: 0x0020 (0x000000 - 0x000020)
struct FVkExtendedErrorParam
{ 
	SDK_UNDEFINED(16,2808) /* FString */               __um(Key);                                                  // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,2809) /* FString */               __um(Value);                                                // 0x0010   (0x0010)  
};

/// Struct /Script/VkEngineTypes.VkExtendedError
/// Size: 0x0040 (0x000000 - 0x000040)
struct FVkExtendedError
{ 
	SDK_UNDEFINED(16,2810) /* FString */               __um(FormatKey);                                            // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,2811) /* FString */               __um(FormatNs);                                             // 0x0010   (0x0010)  
	SDK_UNDEFINED(16,2812) /* FString */               __um(Message);                                              // 0x0020   (0x0010)  
	TArray<FVkExtendedErrorParam>                      Params;                                                     // 0x0030   (0x0010)  
};

/// Struct /Script/VkEngineTypes.VkExtendedErrorInformation
/// Size: 0x0030 (0x000000 - 0x000030)
struct FVkExtendedErrorInformation
{ 
	SDK_UNDEFINED(16,2813) /* FString */               __um(ErrorCode);                                            // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,2814) /* FString */               __um(ErrorMessage);                                         // 0x0010   (0x0010)  
	TArray<FVkExtendedError>                           AdditionalErrors;                                           // 0x0020   (0x0010)  
};

/// Struct /Script/VkEngineTypes.VkTicketDetails
/// Size: 0x0048 (0x000000 - 0x000048)
struct FVkTicketDetails
{ 
	EVkTicketStatus                                    Status;                                                     // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	FDateTime                                          StartDate;                                                  // 0x0008   (0x0008)  
	FDateTime                                          EndDate;                                                    // 0x0010   (0x0008)  
	FVkExtendedErrorInformation                        Error;                                                      // 0x0018   (0x0030)  
};

/// Struct /Script/VkEngineTypes.VkVersePath
/// Size: 0x0020 (0x000000 - 0x000020)
struct FVkVersePath
{ 
	SDK_UNDEFINED(16,2815) /* FString */               __um(VersePath);                                            // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,2816) /* FString */               __um(URL);                                                  // 0x0010   (0x0010)  
};

/// Struct /Script/VkEngineTypes.VkVersePathTarget
/// Size: 0x0028 (0x000000 - 0x000028)
struct FVkVersePathTarget
{ 
	SDK_UNDEFINED(16,2817) /* FString */               __um(ProjectID);                                            // 0x0000   (0x0010)  
	FVkVersionedLinkCode                               LinkCode;                                                   // 0x0010   (0x0018)  
};

/// Struct /Script/VkEngineTypes.VkResolvedVersePath
/// Size: 0x0028 (0x000020 - 0x000048)
struct FVkResolvedVersePath : FVkVersePath
{ 
	FVkVersePathTarget                                 Target;                                                     // 0x0020   (0x0028)  
};

/// Struct /Script/VkEngineTypes.VkContentManifest
/// Size: 0x0010 (0x000000 - 0x000010)
struct FVkContentManifest
{ 
	TArray<FVkResolvedModule>                          Content;                                                    // 0x0000   (0x0010)  
};

/// Struct /Script/VkEngineTypes.VkBuildVersion
/// Size: 0x0018 (0x000000 - 0x000018)
struct FVkBuildVersion
{ 
	SDK_UNDEFINED(16,2818) /* FString */               __um(Major);                                                // 0x0000   (0x0010)  
	int32_t                                            Minor;                                                      // 0x0010   (0x0004)  
	int32_t                                            Patch;                                                      // 0x0014   (0x0004)  
};

/// Struct /Script/VkEngineTypes.VkJobOutput
/// Size: 0x0040 (0x000000 - 0x000040)
struct FVkJobOutput
{ 
	SDK_UNDEFINED(16,2819) /* FString */               __um(BaseURL);                                              // 0x0000   (0x0010)  
	double                                             TotalSizeKb;                                                // 0x0010   (0x0008)  
	double                                             UserContentTotalSizeKb;                                     // 0x0018   (0x0008)  
	SDK_UNDEFINED(16,2820) /* TArray<FString> */       __um(Files);                                                // 0x0020   (0x0010)  
	SDK_UNDEFINED(16,2821) /* FString */               __um(manifest);                                             // 0x0030   (0x0010)  
};

/// Struct /Script/VkEngineTypes.VkModuleVersionDoc
/// Size: 0x0168 (0x000000 - 0x000168)
struct FVkModuleVersionDoc
{ 
	SDK_UNDEFINED(16,2822) /* FString */               __um(ModuleId);                                             // 0x0000   (0x0010)  
	int32_t                                            Version;                                                    // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0014   (0x0004)  MISSED
	SDK_UNDEFINED(16,2823) /* FString */               __um(ProjectID);                                            // 0x0018   (0x0010)  
	EVkModuleAccess                                    Access;                                                     // 0x0028   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0029   (0x0007)  MISSED
	FDateTime                                          Created;                                                    // 0x0030   (0x0008)  
	FVkTypedId                                         Author;                                                     // 0x0038   (0x0018)  
	FJsonObjectWrapper                                 Meta;                                                       // 0x0050   (0x0020)  
	TArray<FVkModuleVersion>                           Dependencies;                                               // 0x0070   (0x0010)  
	FVkJobOutput                                       StagedFiles;                                                // 0x0080   (0x0040)  
	FVkBuildVersion                                    SourceVersion;                                              // 0x00C0   (0x0018)  
	SDK_UNDEFINED(16,2824) /* FString */               __um(ContentType);                                          // 0x00D8   (0x0010)  
	SDK_UNDEFINED(80,2825) /* TMap<EConsumerRole, bool> */ __um(Relevance);                                        // 0x00E8   (0x0050)  
	SDK_UNDEFINED(16,2826) /* FString */               __um(ArtifactKey);                                          // 0x0138   (0x0010)  
	SDK_UNDEFINED(16,2827) /* FString */               __um(Checksum);                                             // 0x0148   (0x0010)  
	TArray<FVkArtifactOption>                          Artifacts;                                                  // 0x0158   (0x0010)  
};

/// Struct /Script/VkEngineTypes.VkModuleVersionModerationStatus
/// Size: 0x0030 (0x000000 - 0x000030)
struct FVkModuleVersionModerationStatus
{ 
	SDK_UNDEFINED(16,2828) /* FString */               __um(ModuleId);                                             // 0x0000   (0x0010)  
	int32_t                                            Version;                                                    // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0014   (0x0004)  MISSED
	SDK_UNDEFINED(16,2829) /* FString */               __um(MoreInfoUrl);                                          // 0x0018   (0x0010)  
	EVkModulePublishStatus                             PublishStatus;                                              // 0x0028   (0x0001)  
	EVkModuleSafetyStatus                              SafetyStatus;                                               // 0x0029   (0x0001)  
	EVkModuleModerationSource                          ModerationSource;                                           // 0x002A   (0x0001)  
	unsigned char                                      UnknownData01_6[0x5];                                       // 0x002B   (0x0005)  MISSED
};

/// Struct /Script/VkEngineTypes.VkProjectLimitsDoc
/// Size: 0x0030 (0x000000 - 0x000030)
struct FVkProjectLimitsDoc
{ 
	int64_t                                            PublishingMemorySize;                                       // 0x0000   (0x0008)  
	int64_t                                            PublishingDownloadSize;                                     // 0x0008   (0x0008)  
	int64_t                                            ProjectUploadSize;                                          // 0x0010   (0x0008)  
	int32_t                                            ModuleUploadConcurrencyLimit;                               // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x001C   (0x0004)  MISSED
	int64_t                                            FileCount;                                                  // 0x0020   (0x0008)  
	int64_t                                            IndividualFileSizeKb;                                       // 0x0028   (0x0008)  
};

/// Struct /Script/VkEngineTypes.VkProjectUserInfo
/// Size: 0x0098 (0x000000 - 0x000098)
struct FVkProjectUserInfo
{ 
	SDK_UNDEFINED(16,2830) /* FString */               __um(ProjectID);                                            // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,2831) /* FString */               __um(AccountId);                                            // 0x0010   (0x0010)  
	SDK_UNDEFINED(16,2832) /* FString */               __um(Title);                                                // 0x0020   (0x0010)  
	bool                                               HasStar;                                                    // 0x0030   (0x0001)  
	bool                                               IsNew;                                                      // 0x0031   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x0032   (0x0006)  MISSED
	SDK_UNDEFINED(80,2833) /* TMap<FString, bool> */   __um(Access);                                               // 0x0038   (0x0050)  
	SDK_UNDEFINED(16,2834) /* TArray<FString> */       __um(Permissions);                                          // 0x0088   (0x0010)  
};

/// Struct /Script/VkEngineTypes.VkProjectOwnerInfo
/// Size: 0x0020 (0x000000 - 0x000020)
struct FVkProjectOwnerInfo
{ 
	SDK_UNDEFINED(16,2835) /* FString */               __um(Owner);                                                // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,2836) /* FString */               __um(Brand);                                                // 0x0010   (0x0010)  
};

/// Struct /Script/VkEngineTypes.VkCreateProjectRequest
/// Size: 0x0060 (0x000000 - 0x000060)
struct FVkCreateProjectRequest
{ 
	SDK_UNDEFINED(16,2837) /* FString */               __um(DesiredProjectId);                                     // 0x0000   (0x0010)  
	FJsonObjectWrapper                                 Meta;                                                       // 0x0010   (0x0020)  
	FJsonObjectWrapper                                 SysMeta;                                                    // 0x0030   (0x0020)  
	SDK_UNDEFINED(16,2838) /* TArray<FString> */       __um(GameFeaturesets);                                      // 0x0050   (0x0010)  
};

/// Struct /Script/VkEngineTypes.VkTransferProjectRequest
/// Size: 0x0010 (0x000000 - 0x000010)
struct FVkTransferProjectRequest
{ 
	SDK_UNDEFINED(16,2839) /* FString */               __um(TeamId);                                               // 0x0000   (0x0010)  
};

/// Struct /Script/VkEngineTypes.VkCreateModuleRequest
/// Size: 0x00A0 (0x000000 - 0x0000A0)
struct FVkCreateModuleRequest
{ 
	SDK_UNDEFINED(16,2840) /* FString */               __um(ModuleName);                                           // 0x0000   (0x0010)  
	FJsonObjectWrapper                                 Meta;                                                       // 0x0010   (0x0020)  
	SDK_UNDEFINED(16,2841) /* FString */               __um(ContentType);                                          // 0x0030   (0x0010)  
	SDK_UNDEFINED(80,2842) /* TMap<EConsumerRole, bool> */ __um(Relevance);                                        // 0x0040   (0x0050)  
	SDK_UNDEFINED(16,2843) /* FString */               __um(DesiredModuleId);                                      // 0x0090   (0x0010)  
};

/// Struct /Script/VkEngineTypes.VkCreateModuleVersionRequest
/// Size: 0x00C0 (0x000000 - 0x0000C0)
struct FVkCreateModuleVersionRequest
{ 
	SDK_UNDEFINED(80,2844) /* TMap<FString, FString> */ __um(RawFiles);                                            // 0x0000   (0x0050)  
	TArray<FVkModuleVersion>                           Dependencies;                                               // 0x0050   (0x0010)  
	SDK_UNDEFINED(16,2845) /* TArray<FString> */       __um(StaticDependencies);                                   // 0x0060   (0x0010)  
	FJsonObjectWrapper                                 Meta;                                                       // 0x0070   (0x0020)  
	SDK_UNDEFINED(16,2846) /* FString */               __um(Checksum);                                             // 0x0090   (0x0010)  
	SDK_UNDEFINED(16,2847) /* FString */               __um(ManifestLink);                                         // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,2848) /* TArray<FString> */       __um(GameFeaturesets);                                      // 0x00B0   (0x0010)  
};

/// Struct /Script/VkEngineTypes.VkContentPackageRequest
/// Size: 0x0010 (0x000068 - 0x000078)
struct FVkContentPackageRequest : FVkResolvedContent
{ 
	SDK_UNDEFINED(16,2849) /* FString */               __um(ProjectID);                                            // 0x0068   (0x0010)  
};

/// Struct /Script/VkEngineTypes.VkSnapshotSaveRequest
/// Size: 0x00A8 (0x000000 - 0x0000A8)
struct FVkSnapshotSaveRequest
{ 
	FVkResolvedContent                                 Content;                                                    // 0x0000   (0x0068)  
	TArray<FVkVersionedLinkCode>                       Palette;                                                    // 0x0068   (0x0010)  
	SDK_UNDEFINED(16,2850) /* FString */               __um(MapPath);                                              // 0x0078   (0x0010)  
	FJsonObjectWrapper                                 MatchmakingConfig;                                          // 0x0088   (0x0020)  
};

/// Struct /Script/VkEngineTypes.VkProjectSnapshot
/// Size: 0x00E8 (0x000000 - 0x0000E8)
struct FVkProjectSnapshot
{ 
	SDK_UNDEFINED(16,2851) /* FString */               __um(UniqueID);                                             // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,2852) /* FString */               __um(ProjectID);                                            // 0x0010   (0x0010)  
	SDK_UNDEFINED(16,2853) /* FString */               __um(AccountId);                                            // 0x0020   (0x0010)  
	FDateTime                                          CreatedAt;                                                  // 0x0030   (0x0008)  
	int32_t                                            DeltaFileIndex;                                             // 0x0038   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x003C   (0x0004)  MISSED
	FVkResolvedContent                                 Content;                                                    // 0x0040   (0x0068)  
	TArray<FVkVersionedLinkCode>                       Palette;                                                    // 0x00A8   (0x0010)  
	SDK_UNDEFINED(16,2854) /* FString */               __um(MapPath);                                              // 0x00B8   (0x0010)  
	FJsonObjectWrapper                                 MatchmakingConfig;                                          // 0x00C8   (0x0020)  
};

/// Struct /Script/VkEngineTypes.VkGenerateBuildCodeRequest
/// Size: 0x00A8 (0x000000 - 0x0000A8)
struct FVkGenerateBuildCodeRequest
{ 
	FVkResolvedContent                                 Content;                                                    // 0x0000   (0x0068)  
	SDK_UNDEFINED(16,2855) /* FString */               __um(CommitMessage);                                        // 0x0068   (0x0010)  
	FJsonObjectWrapper                                 MatchmakingConfig;                                          // 0x0078   (0x0020)  
	SDK_UNDEFINED(16,2856) /* FString */               __um(SourceControlBase);                                    // 0x0098   (0x0010)  
};

/// Struct /Script/VkEngineTypes.VkProjectSearchResult
/// Size: 0x0070 (0x000000 - 0x000070)
struct FVkProjectSearchResult
{ 
	SDK_UNDEFINED(16,2857) /* FString */               __um(ProjectID);                                            // 0x0000   (0x0010)  
	FDateTime                                          Created;                                                    // 0x0010   (0x0008)  
	FDateTime                                          Accessed;                                                   // 0x0018   (0x0008)  
	FJsonObjectWrapper                                 Meta;                                                       // 0x0020   (0x0020)  
	FJsonObjectWrapper                                 SysMeta;                                                    // 0x0040   (0x0020)  
	SDK_UNDEFINED(16,2858) /* FString */               __um(LinkCode);                                             // 0x0060   (0x0010)  
};

/// Struct /Script/VkEngineTypes.VkProjectInfoSlim
/// Size: 0x0078 (0x000000 - 0x000078)
struct FVkProjectInfoSlim
{ 
	FVkTypedId                                         Owner;                                                      // 0x0000   (0x0018)  
	SDK_UNDEFINED(16,2859) /* FString */               __um(Title);                                                // 0x0018   (0x0010)  
	SDK_UNDEFINED(16,2860) /* FString */               __um(Description);                                          // 0x0028   (0x0010)  
	SDK_UNDEFINED(16,2861) /* FString */               __um(LinkCode);                                             // 0x0038   (0x0010)  
	SDK_UNDEFINED(16,2862) /* FString */               __um(RcsProvider);                                          // 0x0048   (0x0010)  
	FJsonObjectWrapper                                 SysMeta;                                                    // 0x0058   (0x0020)  
};

/// Struct /Script/VkEngineTypes.VkProjectSearchResultSlim
/// Size: 0x0098 (0x000000 - 0x000098)
struct FVkProjectSearchResultSlim
{ 
	SDK_UNDEFINED(16,2863) /* FString */               __um(ProjectID);                                            // 0x0000   (0x0010)  
	FDateTime                                          Date;                                                       // 0x0010   (0x0008)  
	FVkProjectInfoSlim                                 Info;                                                       // 0x0018   (0x0078)  
	bool                                               is_starred;                                                 // 0x0090   (0x0001)  
	bool                                               is_new;                                                     // 0x0091   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x0092   (0x0006)  MISSED
};

/// Struct /Script/VkEngineTypes.VkTeamMembershipResult
/// Size: 0x00A8 (0x000000 - 0x0000A8)
struct FVkTeamMembershipResult
{ 
	SDK_UNDEFINED(16,2864) /* FString */               __um(Name);                                                 // 0x0000   (0x0010)  
	SDK_UNDEFINED(80,2865) /* TMap<FString, bool> */   __um(Access);                                               // 0x0010   (0x0050)  
	SDK_UNDEFINED(16,2866) /* FString */               __um(Status);                                               // 0x0060   (0x0010)  
	SDK_UNDEFINED(16,2867) /* FString */               __um(MembershipId);                                         // 0x0070   (0x0010)  
	SDK_UNDEFINED(16,2868) /* FString */               __um(TeamId);                                               // 0x0080   (0x0010)  
	SDK_UNDEFINED(16,2869) /* FString */               __um(AccountId);                                            // 0x0090   (0x0010)  
	FDateTime                                          Updated;                                                    // 0x00A0   (0x0008)  
};

/// Struct /Script/VkEngineTypes.VkTeamAccessControl
/// Size: 0x0004 (0x000000 - 0x000004)
struct FVkTeamAccessControl
{ 
	bool                                               Admin;                                                      // 0x0000   (0x0001)  
	bool                                               Edit;                                                       // 0x0001   (0x0001)  
	bool                                               Operate;                                                    // 0x0002   (0x0001)  
	bool                                               Publish;                                                    // 0x0003   (0x0001)  
};

/// Struct /Script/VkEngineTypes.VkTeamAuthorizedEmailDomain
/// Size: 0x0018 (0x000000 - 0x000018)
struct FVkTeamAuthorizedEmailDomain
{ 
	SDK_UNDEFINED(16,2870) /* FString */               __um(Domain);                                               // 0x0000   (0x0010)  
	FVkTeamAccessControl                               Access;                                                     // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/VkEngineTypes.VkTeamPublicProperties
/// Size: 0x0030 (0x000000 - 0x000030)
struct FVkTeamPublicProperties
{ 
	SDK_UNDEFINED(16,2871) /* FString */               __um(Name);                                                 // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,2872) /* FString */               __um(Description);                                          // 0x0010   (0x0010)  
	TArray<FVkTeamAuthorizedEmailDomain>               EmailDomains;                                               // 0x0020   (0x0010)  
};

/// Struct /Script/VkEngineTypes.VkTeamDoc
/// Size: 0x0090 (0x000000 - 0x000090)
struct FVkTeamDoc
{ 
	SDK_UNDEFINED(16,2873) /* FString */               __um(TeamId);                                               // 0x0000   (0x0010)  
	FDateTime                                          Created;                                                    // 0x0010   (0x0008)  
	FDateTime                                          Updated;                                                    // 0x0018   (0x0008)  
	FVkTypedId                                         Owner;                                                      // 0x0020   (0x0018)  
	FVkTeamPublicProperties                            PublicProps;                                                // 0x0038   (0x0030)  
	int32_t                                            MemberCount;                                                // 0x0068   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x006C   (0x0004)  MISSED
	FJsonObjectWrapper                                 SysMeta;                                                    // 0x0070   (0x0020)  
};

/// Struct /Script/VkEngineTypes.VkTeamOwnerInfo
/// Size: 0x0020 (0x000000 - 0x000020)
struct FVkTeamOwnerInfo
{ 
	SDK_UNDEFINED(16,2874) /* FString */               __um(Owner);                                                // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,2875) /* FString */               __um(Brand);                                                // 0x0010   (0x0010)  
};

/// Struct /Script/VkEngineTypes.VkLaunchData_Link
/// Size: 0x0018 (0x000000 - 0x000018)
struct FVkLaunchData_Link
{ 
	SDK_UNDEFINED(16,2876) /* FString */               __um(LinkCode);                                             // 0x0000   (0x0010)  
	int32_t                                            Version;                                                    // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/VkEngineTypes.VkProjectPlaytestAccessRequest
/// Size: 0x0020 (0x000000 - 0x000020)
struct FVkProjectPlaytestAccessRequest
{ 
	SDK_UNDEFINED(16,2877) /* TArray<FString> */       __um(Users);                                                // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,2878) /* FString */               __um(PlaytestGroupId);                                      // 0x0010   (0x0010)  
};

/// Struct /Script/VkEngineTypes.VkProjectAccessControl
/// Size: 0x0005 (0x000000 - 0x000005)
struct FVkProjectAccessControl
{ 
	bool                                               Read;                                                       // 0x0000   (0x0001)  
	bool                                               Edit;                                                       // 0x0001   (0x0001)  
	bool                                               Operate;                                                    // 0x0002   (0x0001)  
	bool                                               Publish;                                                    // 0x0003   (0x0001)  
	bool                                               Admin;                                                      // 0x0004   (0x0001)  
};

/// Struct /Script/VkEngineTypes.VkProjectPlaytestAccessResult
/// Size: 0x0080 (0x000000 - 0x000080)
struct FVkProjectPlaytestAccessResult
{ 
	FVkNamedId                                         Owner;                                                      // 0x0000   (0x0020)  
	SDK_UNDEFINED(16,2879) /* FString */               __um(OwnerType);                                            // 0x0020   (0x0010)  
	SDK_UNDEFINED(80,2880) /* TMap<FString, FVkProjectAccessControl> */ __um(Playtesters);                         // 0x0030   (0x0050)  
};

/// Struct /Script/VkEngineTypes.VkSnapshotDeltaFiles
/// Size: 0x0060 (0x000000 - 0x000060)
struct FVkSnapshotDeltaFiles
{ 
	SDK_UNDEFINED(16,2881) /* FString */               __um(SnapshotId);                                           // 0x0000   (0x0010)  
	SDK_UNDEFINED(80,2882) /* TMap<FString, FString> */ __um(DeltaFileLinks);                                      // 0x0010   (0x0050)  
};

/// Struct /Script/VkEngineTypes.VkProfileBuildResult_Duration
/// Size: 0x0010 (0x000000 - 0x000010)
struct FVkProfileBuildResult_Duration
{ 
	FDateTime                                          Start;                                                      // 0x0000   (0x0008)  
	FDateTime                                          End;                                                        // 0x0008   (0x0008)  
};

/// Struct /Script/VkEngineTypes.VkProfileBuildResult_Server
/// Size: 0x0070 (0x000000 - 0x000070)
struct FVkProfileBuildResult_Server
{ 
	SDK_UNDEFINED(16,2883) /* FString */               __um(BuildId);                                              // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,2884) /* FString */               __um(Platform);                                             // 0x0010   (0x0010)  
	SDK_UNDEFINED(80,2885) /* TMap<FString, float> */  __um(Stat);                                                 // 0x0020   (0x0050)  
};

/// Struct /Script/VkEngineTypes.VkProfileBuildResult_Client
/// Size: 0x0080 (0x000000 - 0x000080)
struct FVkProfileBuildResult_Client
{ 
	SDK_UNDEFINED(16,2886) /* FString */               __um(AccountId);                                            // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,2887) /* FString */               __um(BuildId);                                              // 0x0010   (0x0010)  
	SDK_UNDEFINED(16,2888) /* FString */               __um(Platform);                                             // 0x0020   (0x0010)  
	SDK_UNDEFINED(80,2889) /* TMap<FString, float> */  __um(Stat);                                                 // 0x0030   (0x0050)  
};

/// Struct /Script/VkEngineTypes.VkProfileBuildResult
/// Size: 0x00A8 (0x000000 - 0x0000A8)
struct FVkProfileBuildResult
{ 
	float                                              Score;                                                      // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	SDK_UNDEFINED(16,2890) /* FString */               __um(SessionId);                                            // 0x0008   (0x0010)  
	FVkProfileBuildResult_Duration                     duration;                                                   // 0x0018   (0x0010)  
	FVkProfileBuildResult_Server                       Server;                                                     // 0x0028   (0x0070)  
	TArray<FVkProfileBuildResult_Client>               Clients;                                                    // 0x0098   (0x0010)  
};

/// Struct /Script/VkEngineTypes.VkBuildCode
/// Size: 0x0100 (0x000000 - 0x000100)
struct FVkBuildCode
{ 
	SDK_UNDEFINED(16,2891) /* FString */               __um(LinkCode);                                             // 0x0000   (0x0010)  
	int32_t                                            LinkVersion;                                                // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0014   (0x0004)  MISSED
	FDateTime                                          LastPublished;                                              // 0x0018   (0x0008)  
	FVkTypedId                                         PublishedBy;                                                // 0x0020   (0x0018)  
	SDK_UNDEFINED(16,2892) /* FString */               __um(base);                                                 // 0x0038   (0x0010)  
	SDK_UNDEFINED(16,2893) /* FString */               __um(CommitMessage);                                        // 0x0048   (0x0010)  
	FVkProfileBuildResult                              ProfileResult;                                              // 0x0058   (0x00A8)  
};

/// Struct /Script/VkEngineTypes.VkProjectDoc
/// Size: 0x0188 (0x000000 - 0x000188)
struct FVkProjectDoc
{ 
	SDK_UNDEFINED(16,2894) /* FString */               __um(ProjectID);                                            // 0x0000   (0x0010)  
	FDateTime                                          Created;                                                    // 0x0010   (0x0008)  
	FVkTypedId                                         Author;                                                     // 0x0018   (0x0018)  
	FVkTypedId                                         Owner;                                                      // 0x0030   (0x0018)  
	FJsonObjectWrapper                                 Meta;                                                       // 0x0048   (0x0020)  
	FJsonObjectWrapper                                 SysMeta;                                                    // 0x0068   (0x0020)  
	FVkBuildCode                                       LiveLink;                                                   // 0x0088   (0x0100)  
};

/// Struct /Script/VkEngineTypes.VkLinkCodeInfo
/// Size: 0x0070 (0x000000 - 0x000070)
struct FVkLinkCodeInfo
{ 
	SDK_UNDEFINED(16,2895) /* FString */               __um(LinkCode);                                             // 0x0000   (0x0010)  
	int32_t                                            Version;                                                    // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0014   (0x0004)  MISSED
	SDK_UNDEFINED(16,2896) /* FString */               __um(Type);                                                 // 0x0018   (0x0010)  
	bool                                               IsActive;                                                   // 0x0028   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0029   (0x0007)  MISSED
	SDK_UNDEFINED(16,2897) /* FString */               __um(ProjectID);                                            // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,2898) /* FString */               __um(CreatorName);                                          // 0x0040   (0x0010)  
	FJsonObjectWrapper                                 MetaData;                                                   // 0x0050   (0x0020)  
};

/// Struct /Script/VkEngineTypes.VkLinkCodePublicModules
/// Size: 0x0088 (0x000000 - 0x000088)
struct FVkLinkCodePublicModules
{ 
	SDK_UNDEFINED(16,2899) /* FString */               __um(LinkCode);                                             // 0x0000   (0x0010)  
	int32_t                                            Version;                                                    // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0014   (0x0004)  MISSED
	SDK_UNDEFINED(16,2900) /* FString */               __um(Type);                                                 // 0x0018   (0x0010)  
	SDK_UNDEFINED(16,2901) /* FString */               __um(ProjectID);                                            // 0x0028   (0x0010)  
	SDK_UNDEFINED(80,2902) /* TMap<FString, int32_t> */ __um(Public_Modules);                                      // 0x0038   (0x0050)  
};

/// Struct /Script/VkEngineTypes.VkMetaDataFlags
/// Size: 0x0050 (0x000000 - 0x000050)
struct FVkMetaDataFlags
{ 
	SDK_UNDEFINED(80,2903) /* TMap<FString, FString> */ __um(_validation_flags);                                   // 0x0000   (0x0050)  
};

