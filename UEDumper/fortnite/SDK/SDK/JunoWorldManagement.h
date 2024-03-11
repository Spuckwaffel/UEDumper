
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Enum /Script/JunoWorldManagement.EJunoWorldOccupantKind
/// Size: 0x05
enum class EJunoWorldOccupantKind : uint8_t
{
	EJunoWorldOccupantKind__Owner                                                    = 0,
	EJunoWorldOccupantKind__Keyholder                                                = 1,
	EJunoWorldOccupantKind__Guest                                                    = 2,
	EJunoWorldOccupantKind__Count                                                    = 3,
	EJunoWorldOccupantKind__EJunoWorldOccupantKind_MAX                               = 4
};

/// Enum /Script/JunoWorldManagement.EJunoWorldSettingOptions_BuildMode
/// Size: 0x03
enum class EJunoWorldSettingOptions_BuildMode : uint8_t
{
	EJunoWorldSettingOptions_BuildMode__Survival                                     = 0,
	EJunoWorldSettingOptions_BuildMode__Sandbox                                      = 1,
	EJunoWorldSettingOptions_BuildMode__EJunoWorldSettingOptions_MAX                 = 2
};

/// Enum /Script/JunoWorldManagement.EJunoWorldSettingOptions_CreatureActivation
/// Size: 0x03
enum class EJunoWorldSettingOptions_CreatureActivation : uint8_t
{
	EJunoWorldSettingOptions_CreatureActivation__On                                  = 0,
	EJunoWorldSettingOptions_CreatureActivation__Off                                 = 1,
	EJunoWorldSettingOptions_CreatureActivation__EJunoWorldSettingOptions_MAX        = 2
};

/// Enum /Script/JunoWorldManagement.EJunoWorldSettingOptions_WorldSwitch
/// Size: 0x03
enum class EJunoWorldSettingOptions_WorldSwitch : uint8_t
{
	EJunoWorldSettingOptions_WorldSwitch__On                                         = 0,
	EJunoWorldSettingOptions_WorldSwitch__Off                                        = 1,
	EJunoWorldSettingOptions_WorldSwitch__EJunoWorldSettingOptions_MAX               = 2
};

/// Class /Script/JunoWorldManagement.JunoWorldManagementHandler
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoWorldManagementHandler : public UObject
{ 
public:
};

/// Class /Script/JunoWorldManagement.JunoWorld
/// Size: 0x00B8 (0x000028 - 0x0000E0)
class UJunoWorld : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0xE0];                                      // 0x0000   (0x00E0)  MISSED
};

/// Class /Script/JunoWorldManagement.JunoUserWorldView
/// Size: 0x0028 (0x0000E0 - 0x000108)
class UJunoUserWorldView : public UJunoWorld
{ 
public:
	unsigned char                                      UnknownData00_1[0x28];                                      // 0x00E0   (0x0028)  MISSED
};

/// Class /Script/JunoWorldManagement.JunoWorldManagerSubsystem
/// Size: 0x0048 (0x000030 - 0x000078)
class UJunoWorldManagerSubsystem : public UWorldSubsystem
{ 
public:
	bool                                               bEnableWorldManager;                                        // 0x0030   (0x0001)  
	bool                                               bEnableWorldManagerInPIE;                                   // 0x0031   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0032   (0x0002)  MISSED
	int32_t                                            WorldPersistenceCompatibilityVersion;                       // 0x0034   (0x0004)  
	SDK_UNDEFINED(16,11943) /* FString */              __um(DeviceProfileSuffix);                                  // 0x0038   (0x0010)  
	unsigned char                                      UnknownData01_5[0x28];                                      // 0x0048   (0x0028)  MISSED
	class UJunoWorldManagementHandler*                 WorldManagementHandler;                                     // 0x0070   (0x0008)  
};

/// Class /Script/JunoWorldManagement.JunoWorldManagerSubsystemData
/// Size: 0x0018 (0x000030 - 0x000048)
class UJunoWorldManagerSubsystemData : public UPrimaryDataAsset
{ 
public:
	TArray<class UClass*>                              AvailableWorldManagementHandlerClasses;                     // 0x0030   (0x0010)  
	class UClass*                                      DefaultWorldManagementHandlerClass;                         // 0x0040   (0x0008)  
};

/// Class /Script/JunoWorldManagement.JunoPersistenceFeatureWorldMetadataCorrespondentInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoPersistenceFeatureWorldMetadataCorrespondentInterface : public UInterface
{ 
public:
};

/// Class /Script/JunoWorldManagement.JunoWorldManagementHandler_WorldArbitrationService
/// Size: 0x00B0 (0x000028 - 0x0000D8)
class UJunoWorldManagementHandler_WorldArbitrationService : public UJunoWorldManagementHandler
{ 
public:
	SDK_UNDEFINED(80,11944) /* TMap<FString, UJunoUserWorldView*> */ __um(WorldViewMap);                           // 0x0028   (0x0050)  
	unsigned char                                      UnknownData00_5[0x50];                                      // 0x0078   (0x0050)  MISSED
	uint32_t                                           GetAllAccessibleWorldsCacheTime;                            // 0x00C8   (0x0004)  
	unsigned char                                      UnknownData01_6[0xC];                                       // 0x00CC   (0x000C)  MISSED
};

/// Struct /Script/JunoWorldManagement.JunoWorldGameplayProperty
/// Size: 0x0018 (0x000000 - 0x000018)
struct FJunoWorldGameplayProperty
{ 
	SDK_UNDEFINED(16,11945) /* FString */              __um(ID);                                                   // 0x0000   (0x0010)  
	FName                                              Value;                                                      // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/JunoWorldManagement.JunoWorldGameMetadata
/// Size: 0x0028 (0x000000 - 0x000028)
struct FJunoWorldGameMetadata
{ 
	int32_t                                            PersistenceVersion;                                         // 0x0000   (0x0004)  
	int32_t                                            AdventureSeed;                                              // 0x0004   (0x0004)  
	SDK_UNDEFINED(16,11946) /* FString */              __um(Title);                                                // 0x0008   (0x0010)  
	TArray<FJunoWorldGameplayProperty>                 GameplayProperties;                                         // 0x0018   (0x0010)  
};

/// Struct /Script/JunoWorldManagement.JunoWorldMetadata
/// Size: 0x0038 (0x000000 - 0x000038)
struct FJunoWorldMetadata
{ 
	SDK_UNDEFINED(16,11947) /* FString */              __um(ID);                                                   // 0x0000   (0x0010)  
	FJunoWorldGameMetadata                             Game;                                                       // 0x0010   (0x0028)  
};

/// Struct /Script/JunoWorldManagement.JunoWorldQuery
/// Size: 0x0040 (0x000000 - 0x000040)
struct FJunoWorldQuery
{ 
	FJunoWorldMetadata                                 MetaData;                                                   // 0x0008   (0x0038)  
};

/// Struct /Script/JunoWorldManagement.JunoWorldQueryResult
/// Size: 0x0008 (0x000000 - 0x000008)
struct FJunoWorldQueryResult
{ 
	class UJunoUserWorldView*                          UserWorldView;                                              // 0x0000   (0x0008)  
};

