
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

/// Enum /Script/GameFeatures.EGameFeatureTargetState
/// Size: 0x06
enum class EGameFeatureTargetState : uint8_t
{
	EGameFeatureTargetState__Installed                                               = 0,
	EGameFeatureTargetState__Registered                                              = 1,
	EGameFeatureTargetState__Loaded                                                  = 2,
	EGameFeatureTargetState__Active                                                  = 3,
	EGameFeatureTargetState__Count                                                   = 4,
	EGameFeatureTargetState__EGameFeatureTargetState_MAX                             = 5
};

/// Class /Script/GameFeatures.GameFeatureStateChangeObserver
/// Size: 0x0000 (0x000028 - 0x000028)
class UGameFeatureStateChangeObserver : public UInterface
{ 
public:
};

/// Class /Script/GameFeatures.GameFeatureVersePathMapperCommandlet
/// Size: 0x0000 (0x000080 - 0x000080)
class UGameFeatureVersePathMapperCommandlet : public UCommandlet
{ 
public:
};

/// Class /Script/GameFeatures.GameFeatureAction
/// Size: 0x0000 (0x000028 - 0x000028)
class UGameFeatureAction : public UObject
{ 
public:
};

/// Class /Script/GameFeatures.GameFeatureAction_AddCheats
/// Size: 0x0038 (0x000028 - 0x000060)
class UGameFeatureAction_AddCheats : public UGameFeatureAction
{ 
public:
	SDK_UNDEFINED(16,1258) /* TArray<TWeakObjectPtr<UClass*>> */ __um(CheatManagers);                              // 0x0028   (0x0010)  
	bool                                               bLoadCheatManagersAsync;                                    // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_5[0xF];                                       // 0x0039   (0x000F)  MISSED
	SDK_UNDEFINED(16,1259) /* TArray<TWeakObjectPtr<UCheatManagerExtension*>> */ __um(SpawnedCheatManagers);       // 0x0048   (0x0010)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0058   (0x0008)  MISSED
};

/// Class /Script/GameFeatures.GameFeatureAction_AddChunkOverride
/// Size: 0x0000 (0x000028 - 0x000028)
class UGameFeatureAction_AddChunkOverride : public UGameFeatureAction
{ 
public:
};

/// Struct /Script/GameFeatures.GameFeatureComponentEntry
/// Size: 0x0048 (0x000000 - 0x000048)
struct FGameFeatureComponentEntry
{ 
	SDK_UNDEFINED(32,1260) /* TWeakObjectPtr<UClass*> */ __um(ActorClass);                                         // 0x0000   (0x0020)  
	SDK_UNDEFINED(32,1261) /* TWeakObjectPtr<UClass*> */ __um(ComponentClass);                                     // 0x0020   (0x0020)  
	bool                                               bClientComponent : 1;                                       // 0x0040:0 (0x0001)  
	bool                                               bServerComponent : 1;                                       // 0x0040:1 (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0041   (0x0007)  MISSED
};

/// Class /Script/GameFeatures.GameFeatureAction_AddComponents
/// Size: 0x0060 (0x000028 - 0x000088)
class UGameFeatureAction_AddComponents : public UGameFeatureAction
{ 
public:
	TArray<FGameFeatureComponentEntry>                 ComponentList;                                              // 0x0028   (0x0010)  
	unsigned char                                      UnknownData00_6[0x50];                                      // 0x0038   (0x0050)  MISSED
};

/// Class /Script/GameFeatures.GameFeatureAction_AddWorldPartitionContent
/// Size: 0x0018 (0x000028 - 0x000040)
class UGameFeatureAction_AddWorldPartitionContent : public UGameFeatureAction
{ 
public:
	unsigned char                                      UnknownData00_3[0x10];                                      // 0x0028   (0x0010)  MISSED
	class UExternalDataLayerAsset*                     ExternalDataLayerAsset;                                     // 0x0038   (0x0008)  
};

/// Class /Script/GameFeatures.GameFeatureAction_AddWPContent
/// Size: 0x0018 (0x000028 - 0x000040)
class UGameFeatureAction_AddWPContent : public UGameFeatureAction
{ 
public:
	class UContentBundleDescriptor*                    ContentBundleDescriptor;                                    // 0x0028   (0x0008)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0030   (0x0010)  MISSED
};

/// Class /Script/GameFeatures.GameFeatureAction_AudioActionBase
/// Size: 0x0010 (0x000028 - 0x000038)
class UGameFeatureAction_AudioActionBase : public UGameFeatureAction
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0028   (0x0010)  MISSED
};

/// Class /Script/GameFeatures.GameFeatureAction_DataRegistry
/// Size: 0x0018 (0x000028 - 0x000040)
class UGameFeatureAction_DataRegistry : public UGameFeatureAction
{ 
public:
	SDK_UNDEFINED(16,1262) /* TArray<TWeakObjectPtr<UDataRegistry*>> */ __um(RegistriesToAdd);                     // 0x0028   (0x0010)  
	bool                                               bPreloadInEditor;                                           // 0x0038   (0x0001)  
	bool                                               bPreloadInCommandlets;                                      // 0x0039   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x003A   (0x0006)  MISSED
};

/// Struct /Script/GameFeatures.DataRegistrySourceToAdd
/// Size: 0x0050 (0x000000 - 0x000050)
struct FDataRegistrySourceToAdd
{ 
	FName                                              RegistryToAddTo;                                            // 0x0000   (0x0004)  
	int32_t                                            AssetPriority;                                              // 0x0004   (0x0004)  
	bool                                               bClientSource : 1;                                          // 0x0008:0 (0x0001)  
	bool                                               bServerSource : 1;                                          // 0x0008:1 (0x0001)  
	unsigned char                                      UnknownData00_4[0x7];                                       // 0x0009   (0x0007)  MISSED
	SDK_UNDEFINED(32,1263) /* TWeakObjectPtr<UDataTable*> */ __um(DataTableToAdd);                                 // 0x0010   (0x0020)  
	SDK_UNDEFINED(32,1264) /* TWeakObjectPtr<UCurveTable*> */ __um(CurveTableToAdd);                               // 0x0030   (0x0020)  
};

/// Class /Script/GameFeatures.GameFeatureAction_DataRegistrySource
/// Size: 0x0018 (0x000028 - 0x000040)
class UGameFeatureAction_DataRegistrySource : public UGameFeatureAction
{ 
public:
	TArray<FDataRegistrySourceToAdd>                   SourcesToAdd;                                               // 0x0028   (0x0010)  
	bool                                               bPreloadInEditor;                                           // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0039   (0x0007)  MISSED
};

/// Class /Script/GameFeatures.GameFeatureData
/// Size: 0x0020 (0x000030 - 0x000050)
class UGameFeatureData : public UPrimaryDataAsset
{ 
public:
	TArray<class UGameFeatureAction*>                  Actions;                                                    // 0x0030   (0x0010)  
	TArray<FPrimaryAssetTypeInfo>                      PrimaryAssetTypesToScan;                                    // 0x0040   (0x0010)  


	/// Functions
	// Function /Script/GameFeatures.GameFeatureData.GetPluginName
	// void GetPluginName(class UGameFeatureData* GFD, FString& PluginName);                                                 // [0x6fa94f4] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/GameFeatures.GameFeatureOptionalContentInstaller
/// Size: 0x0108 (0x000028 - 0x000130)
class UGameFeatureOptionalContentInstaller : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x130];                                     // 0x0000   (0x0130)  MISSED
};

/// Struct /Script/GameFeatures.GameFeaturePluginStateMachineProperties
/// Size: 0x00D0 (0x000000 - 0x0000D0)
struct FGameFeaturePluginStateMachineProperties
{ 
	class UGameFeatureData*                            GameFeatureData;                                            // 0x0090   (0x0008)  
	unsigned char                                      UnknownData00_6[0x38];                                      // 0x0098   (0x0038)  MISSED
};

/// Class /Script/GameFeatures.GameFeaturePluginStateMachine
/// Size: 0x01F0 (0x000028 - 0x000218)
class UGameFeaturePluginStateMachine : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x30];                                      // 0x0000   (0x0030)  MISSED
	FGameFeaturePluginStateMachineProperties           StateProperties;                                            // 0x0030   (0x00D0)  
	unsigned char                                      UnknownData01_6[0x118];                                     // 0x0100   (0x0118)  MISSED
};

/// Class /Script/GameFeatures.GameFeaturesProjectPolicies
/// Size: 0x0000 (0x000028 - 0x000028)
class UGameFeaturesProjectPolicies : public UObject
{ 
public:
};

/// Class /Script/GameFeatures.DefaultGameFeaturesProjectPolicies
/// Size: 0x0000 (0x000028 - 0x000028)
class UDefaultGameFeaturesProjectPolicies : public UGameFeaturesProjectPolicies
{ 
public:
};

/// Class /Script/GameFeatures.GameFeaturesSubsystem
/// Size: 0x0120 (0x000030 - 0x000150)
class UGameFeaturesSubsystem : public UEngineSubsystem
{ 
public:
	SDK_UNDEFINED(80,1265) /* TMap<FString, UGameFeaturePluginStateMachine*> */ __um(GameFeaturePluginStateMachines); // 0x0030   (0x0050)  
	TArray<class UGameFeaturePluginStateMachine*>      TerminalGameFeaturePluginStateMachines;                     // 0x0080   (0x0010)  
	unsigned char                                      UnknownData00_5[0xA0];                                      // 0x0090   (0x00A0)  MISSED
	TArray<class UObject*>                             Observers;                                                  // 0x0130   (0x0010)  
	class UGameFeaturesProjectPolicies*                GameSpecificPolicies;                                       // 0x0140   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0148   (0x0008)  MISSED
};

/// Class /Script/GameFeatures.GameFeaturesSubsystemSettings
/// Size: 0x0068 (0x000030 - 0x000098)
class UGameFeaturesSubsystemSettings : public UDeveloperSettings
{ 
public:
	FSoftClassPath                                     GameFeaturesManagerClassName;                               // 0x0030   (0x0018)  
	SDK_UNDEFINED(16,1266) /* TArray<FString> */       __um(EnabledPlugins);                                       // 0x0048   (0x0010)  
	SDK_UNDEFINED(16,1267) /* TArray<FString> */       __um(DisabledPlugins);                                      // 0x0058   (0x0010)  
	SDK_UNDEFINED(16,1268) /* TArray<FString> */       __um(AdditionalPluginMetadataKeys);                         // 0x0068   (0x0010)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x0078   (0x0020)  MISSED
};

/// Struct /Script/GameFeatures.GameFeaturePluginIdentifier
/// Size: 0x0028 (0x000000 - 0x000028)
struct FGameFeaturePluginIdentifier
{ 
	unsigned char                                      UnknownData00_2[0x28];                                      // 0x0000   (0x0028)  MISSED
};

/// Struct /Script/GameFeatures.InstallBundlePluginProtocolOptions
/// Size: 0x000C (0x000000 - 0x00000C)
struct FInstallBundlePluginProtocolOptions
{ 
	unsigned char                                      UnknownData00_2[0xC];                                       // 0x0000   (0x000C)  MISSED
};

