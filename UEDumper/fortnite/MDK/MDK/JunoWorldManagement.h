
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/JunoWorldManagement.JunoWorldManagementHandler
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoWorldManagementHandler : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/JunoWorldManagement.JunoWorld
/// Size: 0x00C8 (0x000028 - 0x0000F0)
class UJunoWorld : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
};

/// Class /Script/JunoWorldManagement.JunoUserWorldView
/// Size: 0x0028 (0x0000F0 - 0x000118)
class UJunoUserWorldView : public UJunoWorld
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 280;

public:
};

/// Class /Script/JunoWorldManagement.JunoWorldManagerSubsystem
/// Size: 0x0048 (0x000030 - 0x000078)
class UJunoWorldManagerSubsystem : public UWorldSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	DMember(bool)                                      bEnableWorldManager                                         OFFSET(get<bool>, {0x30, 1, 0, 0})
	DMember(bool)                                      bEnableWorldManagerInPIE                                    OFFSET(get<bool>, {0x31, 1, 0, 0})
	DMember(int32_t)                                   WorldPersistenceCompatibilityVersion                        OFFSET(get<int32_t>, {0x34, 4, 0, 0})
	SMember(FString)                                   DeviceProfileSuffix                                         OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	CMember(class UJunoWorldManagementHandler*)        WorldManagementHandler                                      OFFSET(get<T>, {0x70, 8, 0, 0})
};

/// Class /Script/JunoWorldManagement.JunoWorldManagerSubsystemData
/// Size: 0x0018 (0x000030 - 0x000048)
class UJunoWorldManagerSubsystemData : public UPrimaryDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(TArray<class UClass*>)                     AvailableWorldManagementHandlerClasses                      OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(class UClass*)                             DefaultWorldManagementHandlerClass                          OFFSET(get<T>, {0x40, 8, 0, 0})
};

/// Class /Script/JunoWorldManagement.JunoPersistenceFeatureWorldMetadataCorrespondentInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoPersistenceFeatureWorldMetadataCorrespondentInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/JunoWorldManagement.JunoWorldManagementHandler_WorldArbitrationService
/// Size: 0x00F8 (0x000028 - 0x000120)
class UJunoWorldManagementHandler_WorldArbitrationService : public UJunoWorldManagementHandler
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	CMember(TMap<FString, UJunoUserWorldView*>)        WorldViewMap                                                OFFSET(get<T>, {0x28, 80, 0, 0})
	DMember(uint32_t)                                  GetAllAccessibleWorldsCacheTime                             OFFSET(get<uint32_t>, {0xC8, 4, 0, 0})
	DMember(uint32_t)                                  GetAllAccessibleWorldsErrorCacheTime                        OFFSET(get<uint32_t>, {0xCC, 4, 0, 0})
};

/// Struct /Script/JunoWorldManagement.JunoWorldGameplayProperty
/// Size: 0x0018 (0x000000 - 0x000018)
class FJunoWorldGameplayProperty : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FString)                                   ID                                                          OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FName)                                     Value                                                       OFFSET(getStruct<T>, {0x10, 4, 0, 0})
};

/// Struct /Script/JunoWorldManagement.JunoWorldGameMetadata
/// Size: 0x0038 (0x000000 - 0x000038)
class FJunoWorldGameMetadata : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(int32_t)                                   PersistenceVersion                                          OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   AdventureSeed                                               OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	SMember(FString)                                   Title                                                       OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	CMember(TArray<FJunoWorldGameplayProperty>)        GameplayProperties                                          OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/JunoWorldManagement.JunoWorldMetadata
/// Size: 0x0048 (0x000000 - 0x000048)
class FJunoWorldMetadata : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FString)                                   ID                                                          OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FJunoWorldGameMetadata)                    Game                                                        OFFSET(getStruct<T>, {0x10, 56, 0, 0})
};

/// Struct /Script/JunoWorldManagement.JunoWorldQuery
/// Size: 0x0050 (0x000000 - 0x000050)
class FJunoWorldQuery : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FJunoWorldMetadata)                        MetaData                                                    OFFSET(getStruct<T>, {0x8, 72, 0, 0})
};

/// Struct /Script/JunoWorldManagement.JunoWorldQueryResult
/// Size: 0x0008 (0x000000 - 0x000008)
class FJunoWorldQueryResult : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(class UJunoUserWorldView*)                 UserWorldView                                               OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Enum /Script/JunoWorldManagement.EJunoWorldOccupantKind
/// Size: 0x04
enum class EJunoWorldOccupantKind : uint8_t
{
	EJunoWorldOccupantKind__Owner                                                    = 0,
	EJunoWorldOccupantKind__Keyholder                                                = 1,
	EJunoWorldOccupantKind__Guest                                                    = 2,
	EJunoWorldOccupantKind__Count                                                    = 3
};

/// Enum /Script/JunoWorldManagement.EJunoWorldSettingOptions_BuildMode
/// Size: 0x02
enum class EJunoWorldSettingOptions_BuildMode : uint8_t
{
	EJunoWorldSettingOptions_BuildMode__Survival                                     = 0,
	EJunoWorldSettingOptions_BuildMode__Sandbox                                      = 1
};

/// Enum /Script/JunoWorldManagement.EJunoWorldSettingOptions_CreatureActivation
/// Size: 0x02
enum class EJunoWorldSettingOptions_CreatureActivation : uint8_t
{
	EJunoWorldSettingOptions_CreatureActivation__On                                  = 0,
	EJunoWorldSettingOptions_CreatureActivation__Off                                 = 1
};

/// Enum /Script/JunoWorldManagement.EJunoWorldSettingOptions_RecruitedCreaturePermaDeath
/// Size: 0x02
enum class EJunoWorldSettingOptions_RecruitedCreaturePermaDeath : uint8_t
{
	EJunoWorldSettingOptions_RecruitedCreaturePermaDeath__On                         = 0,
	EJunoWorldSettingOptions_RecruitedCreaturePermaDeath__Off                        = 1
};

/// Enum /Script/JunoWorldManagement.EJunoWorldSettingOptions_WorldSwitch
/// Size: 0x02
enum class EJunoWorldSettingOptions_WorldSwitch : uint8_t
{
	EJunoWorldSettingOptions_WorldSwitch__On                                         = 0,
	EJunoWorldSettingOptions_WorldSwitch__Off                                        = 1
};

