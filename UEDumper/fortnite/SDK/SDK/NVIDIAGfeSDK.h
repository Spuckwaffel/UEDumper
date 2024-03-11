
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType

/// Enum /Script/NVIDIAGfeSDK.EGfeSDKReturnCode
/// Size: 0x08
enum class EGfeSDKReturnCode : uint8_t
{
	EGfeSDKReturnCode__Success                                                       = 0,
	EGfeSDKReturnCode__SuccessIpcOldSdk                                              = 1,
	EGfeSDKReturnCode__SuccessIpcOldGfe                                              = 2,
	EGfeSDKReturnCode__Error                                                         = 3,
	EGfeSDKReturnCode__ErrorGfeVersion                                               = 4,
	EGfeSDKReturnCode__ErrorSdkVersion                                               = 5,
	EGfeSDKReturnCode__ErrorModuleNotLoaded                                          = 6,
	EGfeSDKReturnCode__EGfeSDKReturnCode_MAX                                         = 7
};

/// Enum /Script/NVIDIAGfeSDK.EGfeSDKScope
/// Size: 0x04
enum class EGfeSDKScope : uint8_t
{
	EGfeSDKScope__Highlights                                                         = 0,
	EGfeSDKScope__HighlightsRecordVideo                                              = 1,
	EGfeSDKScope__HighlightsRecordScreenshot                                         = 2,
	EGfeSDKScope__MAX                                                                = 3
};

/// Enum /Script/NVIDIAGfeSDK.EGfeSDKPermission
/// Size: 0x05
enum class EGfeSDKPermission : uint8_t
{
	EGfeSDKPermission__Granted                                                       = 0,
	EGfeSDKPermission__Denied                                                        = 1,
	EGfeSDKPermission__MustAsk                                                       = 2,
	EGfeSDKPermission__Unknown                                                       = 3,
	EGfeSDKPermission__MAX                                                           = 4
};

/// Enum /Script/NVIDIAGfeSDK.EGfeSDKHighlightType
/// Size: 0x06
enum class EGfeSDKHighlightType : uint8_t
{
	EGfeSDKHighlightType__NONE                                                       = 0,
	EGfeSDKHighlightType__Milestone                                                  = 1,
	EGfeSDKHighlightType__Achievement                                                = 2,
	EGfeSDKHighlightType__Incident                                                   = 4,
	EGfeSDKHighlightType__StateChange                                                = 8,
	EGfeSDKHighlightType__MAX                                                        = 16
};

/// Enum /Script/NVIDIAGfeSDK.EGfeSDKHighlightSignificance
/// Size: 0x09
enum class EGfeSDKHighlightSignificance : uint8_t
{
	EGfeSDKHighlightSignificance__NONE                                               = 0,
	EGfeSDKHighlightSignificance__ExtremelyBad                                       = 1,
	EGfeSDKHighlightSignificance__VeryBad                                            = 2,
	EGfeSDKHighlightSignificance__Bad                                                = 4,
	EGfeSDKHighlightSignificance__Neutral                                            = 8,
	EGfeSDKHighlightSignificance__Good                                               = 16,
	EGfeSDKHighlightSignificance__VeryGood                                           = 32,
	EGfeSDKHighlightSignificance__ExtremelyGood                                      = 64,
	EGfeSDKHighlightSignificance__MAX                                                = 128
};

/// Struct /Script/NVIDIAGfeSDK.GfeSDKCreateInputParams
/// Size: 0x0028 (0x000000 - 0x000028)
struct FGfeSDKCreateInputParams
{ 
	SDK_UNDEFINED(16,15103) /* FString */              __um(AppName);                                              // 0x0000   (0x0010)  
	TArray<EGfeSDKScope>                               RequiredScopes;                                             // 0x0010   (0x0010)  
	bool                                               PollForCallbacks;                                           // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0021   (0x0007)  MISSED
};

/// Struct /Script/NVIDIAGfeSDK.GfeSDKCreateResponse
/// Size: 0x0068 (0x000000 - 0x000068)
struct FGfeSDKCreateResponse
{ 
	uint16_t                                           VersionMajor;                                               // 0x0000   (0x0002)  
	uint16_t                                           VersionMinor;                                               // 0x0002   (0x0002)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	SDK_UNDEFINED(16,15104) /* FString */              __um(NVIDIAGfeVersion);                                     // 0x0008   (0x0010)  
	SDK_UNDEFINED(80,15105) /* TMap<EGfeSDKScope, EGfeSDKPermission> */ __um(ScopePermissions);                    // 0x0018   (0x0050)  
};

/// Struct /Script/NVIDIAGfeSDK.GfeSDKHighlightDefinition
/// Size: 0x0068 (0x000000 - 0x000068)
struct FGfeSDKHighlightDefinition
{ 
	SDK_UNDEFINED(16,15106) /* FString */              __um(ID);                                                   // 0x0000   (0x0010)  
	bool                                               UserDefaultInterest;                                        // 0x0010   (0x0001)  
	EGfeSDKHighlightType                               HighlightTags;                                              // 0x0011   (0x0001)  
	EGfeSDKHighlightSignificance                       Significance;                                               // 0x0012   (0x0001)  
	unsigned char                                      UnknownData00_5[0x5];                                       // 0x0013   (0x0005)  MISSED
	SDK_UNDEFINED(80,15107) /* TMap<FString, FString> */ __um(NameTranslationTable);                               // 0x0018   (0x0050)  
};

/// Struct /Script/NVIDIAGfeSDK.GfeSDKHighlightConfigParams
/// Size: 0x0020 (0x000000 - 0x000020)
struct FGfeSDKHighlightConfigParams
{ 
	TArray<FGfeSDKHighlightDefinition>                 HighlightDefinitions;                                       // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,15108) /* FString */              __um(DefaultLocale);                                        // 0x0010   (0x0010)  
};

/// Struct /Script/NVIDIAGfeSDK.GfeSDKRequestPermissionsParams
/// Size: 0x0010 (0x000000 - 0x000010)
struct FGfeSDKRequestPermissionsParams
{ 
	TArray<EGfeSDKScope>                               Scopes;                                                     // 0x0000   (0x0010)  
};

/// Struct /Script/NVIDIAGfeSDK.GfeSDKPermissionsChangedData
/// Size: 0x0050 (0x000000 - 0x000050)
struct FGfeSDKPermissionsChangedData
{ 
	SDK_UNDEFINED(80,15109) /* TMap<EGfeSDKScope, EGfeSDKPermission> */ __um(ScopePermissions);                    // 0x0000   (0x0050)  
};

/// Struct /Script/NVIDIAGfeSDK.GfeSDKHighlightOpenGroupParams
/// Size: 0x0060 (0x000000 - 0x000060)
struct FGfeSDKHighlightOpenGroupParams
{ 
	SDK_UNDEFINED(16,15110) /* FString */              __um(GroupId);                                              // 0x0000   (0x0010)  
	SDK_UNDEFINED(80,15111) /* TMap<FString, FString> */ __um(GroupDescriptionTranslationTable);                   // 0x0010   (0x0050)  
};

/// Struct /Script/NVIDIAGfeSDK.GfeSDKHighlightCloseGroupParams
/// Size: 0x0018 (0x000000 - 0x000018)
struct FGfeSDKHighlightCloseGroupParams
{ 
	SDK_UNDEFINED(16,15112) /* FString */              __um(GroupId);                                              // 0x0000   (0x0010)  
	bool                                               DestroyHighlights;                                          // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/NVIDIAGfeSDK.GfeSDKHighlightScreenshotParams
/// Size: 0x0020 (0x000000 - 0x000020)
struct FGfeSDKHighlightScreenshotParams
{ 
	SDK_UNDEFINED(16,15113) /* FString */              __um(GroupId);                                              // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,15114) /* FString */              __um(HighlightId);                                          // 0x0010   (0x0010)  
};

/// Struct /Script/NVIDIAGfeSDK.GfeSDKHighlightVideoParams
/// Size: 0x0028 (0x000000 - 0x000028)
struct FGfeSDKHighlightVideoParams
{ 
	SDK_UNDEFINED(16,15115) /* FString */              __um(GroupId);                                              // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,15116) /* FString */              __um(HighlightId);                                          // 0x0010   (0x0010)  
	int32_t                                            StartDelta;                                                 // 0x0020   (0x0004)  
	int32_t                                            EndDelta;                                                   // 0x0024   (0x0004)  
};

/// Struct /Script/NVIDIAGfeSDK.GfeSDKHighlightGroupView
/// Size: 0x0018 (0x000000 - 0x000018)
struct FGfeSDKHighlightGroupView
{ 
	SDK_UNDEFINED(16,15117) /* FString */              __um(GroupId);                                              // 0x0000   (0x0010)  
	EGfeSDKHighlightType                               TagsFilter;                                                 // 0x0010   (0x0001)  
	EGfeSDKHighlightSignificance                       SignificanceFilter;                                         // 0x0011   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x0012   (0x0006)  MISSED
};

/// Struct /Script/NVIDIAGfeSDK.GfeSDKHighlightSummaryParams
/// Size: 0x0010 (0x000000 - 0x000010)
struct FGfeSDKHighlightSummaryParams
{ 
	TArray<FGfeSDKHighlightGroupView>                  GroupViews;                                                 // 0x0000   (0x0010)  
};

