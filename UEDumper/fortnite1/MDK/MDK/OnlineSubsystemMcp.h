
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: LinkId

/// Class /Script/OnlineSubsystemMcp.IARCLocaleMappingUtil
/// Size: 0x0020 (0x000028 - 0x000048)
class UIARCLocaleMappingUtil : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(TArray<FOnlineIARCLocaleMapping>)          LocaleMappings                                              OFFSET(get<T>, {0x28, 16, 0, 0})
	SMember(FString)                                   DefaultLocale                                               OFFSET(getStruct<T>, {0x38, 16, 0, 0})
};

/// Class /Script/OnlineSubsystemMcp.OnlineISOConversionUtil
/// Size: 0x0020 (0x000028 - 0x000048)
class UOnlineISOConversionUtil : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(TArray<FOnlineISOLanguageInfo>)            Languages                                                   OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(TArray<FOnlineISORegionInfo>)              Regions                                                     OFFSET(get<T>, {0x38, 16, 0, 0})
};

/// Struct /Script/OnlineSubsystemMcp.OnlineIARCLocaleMapping
/// Size: 0x0020 (0x000000 - 0x000020)
class FOnlineIARCLocaleMapping : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FString)                                   LanguageId                                                  OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   IARCLocaleId                                                OFFSET(getStruct<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/OnlineSubsystemMcp.OnlineDiscoveryModeSetDef
/// Size: 0x0038 (0x000000 - 0x000038)
class FOnlineDiscoveryModeSetDef : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FOnlineLinkId)                             ModeSetId                                                   OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FString)                                   SubModeLinkType                                             OFFSET(getStruct<T>, {0x18, 16, 0, 0})
	CMember(TArray<FOnlineLinkId>)                     SubModeLinkIds                                              OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Struct /Script/OnlineSubsystemMcp.OnlineDiscoverySurfaceDevelopmentLinkCodes
/// Size: 0x0018 (0x000000 - 0x000018)
class FOnlineDiscoverySurfaceDevelopmentLinkCodes : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FName)                                     SurfaceName                                                 OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(TArray<FString>)                           DevelopmentLinkCodes                                        OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/OnlineSubsystemMcp.OnlineISOLanguageInfo
/// Size: 0x0030 (0x000000 - 0x000030)
class FOnlineISOLanguageInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FText)                                     DisplayName                                                 OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   LanguageId                                                  OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FString)                                   BackendId                                                   OFFSET(getStruct<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/OnlineSubsystemMcp.OnlineISORegionInfo
/// Size: 0x0030 (0x000000 - 0x000030)
class FOnlineISORegionInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FText)                                     DisplayName                                                 OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   RegionId                                                    OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FString)                                   BackendId                                                   OFFSET(getStruct<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/OnlineSubsystemMcp.JsonToxicityEvaluationRequestLegacy
/// Size: 0x0010 (0x000000 - 0x000010)
class FJsonToxicityEvaluationRequestLegacy : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FString)                                   Text                                                        OFFSET(getStruct<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/OnlineSubsystemMcp.JsonToxicityBulkEvaluationRequestLegacy
/// Size: 0x0010 (0x000000 - 0x000010)
class FJsonToxicityBulkEvaluationRequestLegacy : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FString>)                           texts                                                       OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/OnlineSubsystemMcp.JsonToxicityEvaluationRequest
/// Size: 0x0010 (0x000000 - 0x000010)
class FJsonToxicityEvaluationRequest : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FString)                                   Name                                                        OFFSET(getStruct<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/OnlineSubsystemMcp.JsonToxicityBulkEvaluationRequest
/// Size: 0x0010 (0x000000 - 0x000010)
class FJsonToxicityBulkEvaluationRequest : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FString>)                           Names                                                       OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/OnlineSubsystemMcp.JsonToxicityEvaluationResponse
/// Size: 0x0001 (0x000000 - 0x000001)
class FJsonToxicityEvaluationResponse : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
	DMember(bool)                                      toxic                                                       OFFSET(get<bool>, {0x0, 1, 0, 0})
};

/// Struct /Script/OnlineSubsystemMcp.JsonToxicityBulkEvaluationResponse
/// Size: 0x0010 (0x000000 - 0x000010)
class FJsonToxicityBulkEvaluationResponse : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<bool>)                              isToxic                                                     OFFSET(get<T>, {0x0, 16, 0, 0})
};

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

