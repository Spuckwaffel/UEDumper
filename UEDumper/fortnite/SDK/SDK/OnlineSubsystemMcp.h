
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: LinkId

/// Enum /Script/OnlineSubsystemMcp.ESocialCommsPermission
/// Size: 0x05
enum class ESocialCommsPermission : uint8_t
{
	ESocialCommsPermission__Nobody                                                   = 0,
	ESocialCommsPermission__FriendsOnly                                              = 1,
	ESocialCommsPermission__FriendsAndTeammates                                      = 2,
	ESocialCommsPermission__Everybody                                                = 3,
	ESocialCommsPermission__ESocialCommsPermission_MAX                               = 4
};

/// Enum /Script/OnlineSubsystemMcp.ESocialProfilePrivacySettingLevel
/// Size: 0x04
enum class ESocialProfilePrivacySettingLevel : uint8_t
{
	ESocialProfilePrivacySettingLevel__Public                                        = 0,
	ESocialProfilePrivacySettingLevel__FriendsOnly                                   = 1,
	ESocialProfilePrivacySettingLevel__Private                                       = 2,
	ESocialProfilePrivacySettingLevel__ESocialProfilePrivacySettingLevel_MAX         = 3
};

/// Enum /Script/OnlineSubsystemMcp.ESocialProfilePrivacySettingBadges
/// Size: 0x03
enum class ESocialProfilePrivacySettingBadges : uint8_t
{
	ESocialProfilePrivacySettingBadges__FriendsOnly                                  = 0,
	ESocialProfilePrivacySettingBadges__Private                                      = 1,
	ESocialProfilePrivacySettingBadges__ESocialProfilePrivacySettingBadges_MAX       = 2
};

/// Enum /Script/OnlineSubsystemMcp.EMutualFriendsPrivacyPolicy
/// Size: 0x05
enum class EMutualFriendsPrivacyPolicy : uint8_t
{
	EMutualFriendsPrivacyPolicy__All                                                 = 0,
	EMutualFriendsPrivacyPolicy__Friends                                             = 1,
	EMutualFriendsPrivacyPolicy__None                                                = 2,
	EMutualFriendsPrivacyPolicy__InvalidOrMax                                        = 3,
	EMutualFriendsPrivacyPolicy__EMutualFriendsPrivacyPolicy_MAX                     = 4
};

/// Enum /Script/OnlineSubsystemMcp.ESupervisedSettingsRestrictiveOrder
/// Size: 0x08
enum class ESupervisedSettingsRestrictiveOrder : uint8_t
{
	ESupervisedSettingsRestrictiveOrder__FirstRestrictive                            = 0,
	ESupervisedSettingsRestrictiveOrder__FirstPermissive                             = 1,
	ESupervisedSettingsRestrictiveOrder__LowRestrictive                              = 2,
	ESupervisedSettingsRestrictiveOrder__LowPermissive                               = 3,
	ESupervisedSettingsRestrictiveOrder__FalseRestrictive                            = 4,
	ESupervisedSettingsRestrictiveOrder__FalsePermissive                             = 5,
	ESupervisedSettingsRestrictiveOrder__None                                        = 6,
	ESupervisedSettingsRestrictiveOrder__ESupervisedSettingsRestrictiveOrder_MAX     = 7
};

/// Enum /Script/OnlineSubsystemMcp.ESupervisedSettingsValueType
/// Size: 0x05
enum class ESupervisedSettingsValueType : uint8_t
{
	ESupervisedSettingsValueType__Boolean                                            = 0,
	ESupervisedSettingsValueType__Numeric                                            = 1,
	ESupervisedSettingsValueType__Option                                             = 2,
	ESupervisedSettingsValueType__None                                               = 3,
	ESupervisedSettingsValueType__ESupervisedSettingsValueType_MAX                   = 4
};

/// Struct /Script/OnlineSubsystemMcp.OnlineIARCLocaleMapping
/// Size: 0x0020 (0x000000 - 0x000020)
struct FOnlineIARCLocaleMapping
{ 
	SDK_UNDEFINED(16,2634) /* FString */               __um(LanguageId);                                           // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,2635) /* FString */               __um(IARCLocaleId);                                         // 0x0010   (0x0010)  
};

/// Class /Script/OnlineSubsystemMcp.IARCLocaleMappingUtil
/// Size: 0x0020 (0x000028 - 0x000048)
class UIARCLocaleMappingUtil : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	TArray<FOnlineIARCLocaleMapping>                   LocaleMappings;                                             // 0x0028   (0x0010)  
	SDK_UNDEFINED(16,2636) /* FString */               __um(DefaultLocale);                                        // 0x0038   (0x0010)  
};

/// Struct /Script/OnlineSubsystemMcp.OnlineISOLanguageInfo
/// Size: 0x0038 (0x000000 - 0x000038)
struct FOnlineISOLanguageInfo
{ 
	SDK_UNDEFINED(24,2637) /* FText */                 __um(DisplayName);                                          // 0x0000   (0x0018)  
	SDK_UNDEFINED(16,2638) /* FString */               __um(LanguageId);                                           // 0x0018   (0x0010)  
	SDK_UNDEFINED(16,2639) /* FString */               __um(BackendId);                                            // 0x0028   (0x0010)  
};

/// Struct /Script/OnlineSubsystemMcp.OnlineISORegionInfo
/// Size: 0x0038 (0x000000 - 0x000038)
struct FOnlineISORegionInfo
{ 
	SDK_UNDEFINED(24,2640) /* FText */                 __um(DisplayName);                                          // 0x0000   (0x0018)  
	SDK_UNDEFINED(16,2641) /* FString */               __um(RegionId);                                             // 0x0018   (0x0010)  
	SDK_UNDEFINED(16,2642) /* FString */               __um(BackendId);                                            // 0x0028   (0x0010)  
};

/// Class /Script/OnlineSubsystemMcp.OnlineISOConversionUtil
/// Size: 0x0020 (0x000028 - 0x000048)
class UOnlineISOConversionUtil : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	TArray<FOnlineISOLanguageInfo>                     Languages;                                                  // 0x0028   (0x0010)  
	TArray<FOnlineISORegionInfo>                       Regions;                                                    // 0x0038   (0x0010)  
};

/// Struct /Script/OnlineSubsystemMcp.OnlineDiscoveryModeSetDef
/// Size: 0x0038 (0x000000 - 0x000038)
struct FOnlineDiscoveryModeSetDef
{ 
	FOnlineLinkId                                      ModeSetId;                                                  // 0x0000   (0x0018)  
	SDK_UNDEFINED(16,2643) /* FString */               __um(SubModeLinkType);                                      // 0x0018   (0x0010)  
	TArray<FOnlineLinkId>                              SubModeLinkIds;                                             // 0x0028   (0x0010)  
};

/// Struct /Script/OnlineSubsystemMcp.OnlineDiscoverySurfaceDevelopmentLinkCodes
/// Size: 0x0018 (0x000000 - 0x000018)
struct FOnlineDiscoverySurfaceDevelopmentLinkCodes
{ 
	FName                                              SurfaceName;                                                // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	SDK_UNDEFINED(16,2644) /* TArray<FString> */       __um(DevelopmentLinkCodes);                                 // 0x0008   (0x0010)  
};

/// Struct /Script/OnlineSubsystemMcp.JsonToxicityEvaluationRequestLegacy
/// Size: 0x0010 (0x000000 - 0x000010)
struct FJsonToxicityEvaluationRequestLegacy
{ 
	SDK_UNDEFINED(16,2645) /* FString */               __um(Text);                                                 // 0x0000   (0x0010)  
};

/// Struct /Script/OnlineSubsystemMcp.JsonToxicityBulkEvaluationRequestLegacy
/// Size: 0x0010 (0x000000 - 0x000010)
struct FJsonToxicityBulkEvaluationRequestLegacy
{ 
	SDK_UNDEFINED(16,2646) /* TArray<FString> */       __um(texts);                                                // 0x0000   (0x0010)  
};

/// Struct /Script/OnlineSubsystemMcp.JsonToxicityEvaluationRequest
/// Size: 0x0010 (0x000000 - 0x000010)
struct FJsonToxicityEvaluationRequest
{ 
	SDK_UNDEFINED(16,2647) /* FString */               __um(Name);                                                 // 0x0000   (0x0010)  
};

/// Struct /Script/OnlineSubsystemMcp.JsonToxicityBulkEvaluationRequest
/// Size: 0x0010 (0x000000 - 0x000010)
struct FJsonToxicityBulkEvaluationRequest
{ 
	SDK_UNDEFINED(16,2648) /* TArray<FString> */       __um(Names);                                                // 0x0000   (0x0010)  
};

/// Struct /Script/OnlineSubsystemMcp.JsonToxicityEvaluationResponse
/// Size: 0x0001 (0x000000 - 0x000001)
struct FJsonToxicityEvaluationResponse
{ 
	bool                                               toxic;                                                      // 0x0000   (0x0001)  
};

/// Struct /Script/OnlineSubsystemMcp.JsonToxicityBulkEvaluationResponse
/// Size: 0x0010 (0x000000 - 0x000010)
struct FJsonToxicityBulkEvaluationResponse
{ 
	TArray<bool>                                       isToxic;                                                    // 0x0000   (0x0010)  
};

