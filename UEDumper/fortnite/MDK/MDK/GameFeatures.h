
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine

/// Class /Script/GameFeatures.GameFeatureStateChangeObserver
/// Size: 0x0000 (0x000028 - 0x000028)
class UGameFeatureStateChangeObserver : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/GameFeatures.GameFeatureVersePathMapperCommandlet
/// Size: 0x0000 (0x000080 - 0x000080)
class UGameFeatureVersePathMapperCommandlet : public UCommandlet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
};

/// Class /Script/GameFeatures.GameFeatureAction
/// Size: 0x0000 (0x000028 - 0x000028)
class UGameFeatureAction : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/GameFeatures.GameFeatureAction_AddCheats
/// Size: 0x0038 (0x000028 - 0x000060)
class UGameFeatureAction_AddCheats : public UGameFeatureAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(TArray<TWeakObjectPtr<UClass*>>)           CheatManagers                                               OFFSET(get<T>, {0x28, 16, 0, 0})
	DMember(bool)                                      bLoadCheatManagersAsync                                     OFFSET(get<bool>, {0x38, 1, 0, 0})
	CMember(TArray<TWeakObjectPtr<UCheatManagerExtension*>>) SpawnedCheatManagers                                  OFFSET(get<T>, {0x48, 16, 0, 0})
};

/// Class /Script/GameFeatures.GameFeatureAction_AddChunkOverride
/// Size: 0x0000 (0x000028 - 0x000028)
class UGameFeatureAction_AddChunkOverride : public UGameFeatureAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/GameFeatures.GameFeatureAction_AddComponents
/// Size: 0x0060 (0x000028 - 0x000088)
class UGameFeatureAction_AddComponents : public UGameFeatureAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	CMember(TArray<FGameFeatureComponentEntry>)        ComponentList                                               OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Class /Script/GameFeatures.GameFeatureAction_AddWorldPartitionContent
/// Size: 0x0018 (0x000028 - 0x000040)
class UGameFeatureAction_AddWorldPartitionContent : public UGameFeatureAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(class UExternalDataLayerAsset*)            ExternalDataLayerAsset                                      OFFSET(get<T>, {0x38, 8, 0, 0})
};

/// Class /Script/GameFeatures.GameFeatureAction_AddWPContent
/// Size: 0x0018 (0x000028 - 0x000040)
class UGameFeatureAction_AddWPContent : public UGameFeatureAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(class UContentBundleDescriptor*)           ContentBundleDescriptor                                     OFFSET(get<T>, {0x28, 8, 0, 0})
};

/// Class /Script/GameFeatures.GameFeatureAction_AudioActionBase
/// Size: 0x0010 (0x000028 - 0x000038)
class UGameFeatureAction_AudioActionBase : public UGameFeatureAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Script/GameFeatures.GameFeatureAction_DataRegistry
/// Size: 0x0018 (0x000028 - 0x000040)
class UGameFeatureAction_DataRegistry : public UGameFeatureAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(TArray<TWeakObjectPtr<UDataRegistry*>>)    RegistriesToAdd                                             OFFSET(get<T>, {0x28, 16, 0, 0})
	DMember(bool)                                      bPreloadInEditor                                            OFFSET(get<bool>, {0x38, 1, 0, 0})
	DMember(bool)                                      bPreloadInCommandlets                                       OFFSET(get<bool>, {0x39, 1, 0, 0})
};

/// Class /Script/GameFeatures.GameFeatureAction_DataRegistrySource
/// Size: 0x0018 (0x000028 - 0x000040)
class UGameFeatureAction_DataRegistrySource : public UGameFeatureAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(TArray<FDataRegistrySourceToAdd>)          SourcesToAdd                                                OFFSET(get<T>, {0x28, 16, 0, 0})
	DMember(bool)                                      bPreloadInEditor                                            OFFSET(get<bool>, {0x38, 1, 0, 0})
};

/// Class /Script/GameFeatures.GameFeatureData
/// Size: 0x0020 (0x000030 - 0x000050)
class UGameFeatureData : public UPrimaryDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TArray<class UGameFeatureAction*>)         Actions                                                     OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TArray<FPrimaryAssetTypeInfo>)             PrimaryAssetTypesToScan                                     OFFSET(get<T>, {0x40, 16, 0, 0})


	/// Functions
	// Function /Script/GameFeatures.GameFeatureData.GetPluginName
	// void GetPluginName(class UGameFeatureData* GFD, FString& PluginName);                                                    // [0x6fa94f4] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/GameFeatures.GameFeatureOptionalContentInstaller
/// Size: 0x0108 (0x000028 - 0x000130)
class UGameFeatureOptionalContentInstaller : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
};

/// Class /Script/GameFeatures.GameFeaturePluginStateMachine
/// Size: 0x01F0 (0x000028 - 0x000218)
class UGameFeaturePluginStateMachine : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 536;

public:
	SMember(FGameFeaturePluginStateMachineProperties)  StateProperties                                             OFFSET(getStruct<T>, {0x30, 208, 0, 0})
};

/// Class /Script/GameFeatures.GameFeaturesProjectPolicies
/// Size: 0x0000 (0x000028 - 0x000028)
class UGameFeaturesProjectPolicies : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/GameFeatures.DefaultGameFeaturesProjectPolicies
/// Size: 0x0000 (0x000028 - 0x000028)
class UDefaultGameFeaturesProjectPolicies : public UGameFeaturesProjectPolicies
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/GameFeatures.GameFeaturesSubsystem
/// Size: 0x0120 (0x000030 - 0x000150)
class UGameFeaturesSubsystem : public UEngineSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
	CMember(TMap<FString, UGameFeaturePluginStateMachine*>) GameFeaturePluginStateMachines                         OFFSET(get<T>, {0x30, 80, 0, 0})
	CMember(TArray<class UGameFeaturePluginStateMachine*>) TerminalGameFeaturePluginStateMachines                  OFFSET(get<T>, {0x80, 16, 0, 0})
	CMember(TArray<class UObject*>)                    Observers                                                   OFFSET(get<T>, {0x130, 16, 0, 0})
	CMember(class UGameFeaturesProjectPolicies*)       GameSpecificPolicies                                        OFFSET(get<T>, {0x140, 8, 0, 0})
};

/// Class /Script/GameFeatures.GameFeaturesSubsystemSettings
/// Size: 0x0068 (0x000030 - 0x000098)
class UGameFeaturesSubsystemSettings : public UDeveloperSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	SMember(FSoftClassPath)                            GameFeaturesManagerClassName                                OFFSET(getStruct<T>, {0x30, 24, 0, 0})
	CMember(TArray<FString>)                           EnabledPlugins                                              OFFSET(get<T>, {0x48, 16, 0, 0})
	CMember(TArray<FString>)                           DisabledPlugins                                             OFFSET(get<T>, {0x58, 16, 0, 0})
	CMember(TArray<FString>)                           AdditionalPluginMetadataKeys                                OFFSET(get<T>, {0x68, 16, 0, 0})
};

/// Struct /Script/GameFeatures.GameFeatureComponentEntry
/// Size: 0x0048 (0x000000 - 0x000048)
class FGameFeatureComponentEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(TWeakObjectPtr<UClass*>)                   ActorClass                                                  OFFSET(get<T>, {0x0, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   ComponentClass                                              OFFSET(get<T>, {0x20, 32, 0, 0})
	DMember(bool)                                      bClientComponent                                            OFFSET(get<bool>, {0x40, 1, 1, 0})
	DMember(bool)                                      bServerComponent                                            OFFSET(get<bool>, {0x40, 1, 1, 1})
};

/// Struct /Script/GameFeatures.DataRegistrySourceToAdd
/// Size: 0x0050 (0x000000 - 0x000050)
class FDataRegistrySourceToAdd : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FName)                                     RegistryToAddTo                                             OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   AssetPriority                                               OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(bool)                                      bClientSource                                               OFFSET(get<bool>, {0x8, 1, 1, 0})
	DMember(bool)                                      bServerSource                                               OFFSET(get<bool>, {0x8, 1, 1, 1})
	CMember(TWeakObjectPtr<UDataTable*>)               DataTableToAdd                                              OFFSET(get<T>, {0x10, 32, 0, 0})
	CMember(TWeakObjectPtr<UCurveTable*>)              CurveTableToAdd                                             OFFSET(get<T>, {0x30, 32, 0, 0})
};

/// Struct /Script/GameFeatures.GameFeaturePluginStateMachineProperties
/// Size: 0x00D0 (0x000000 - 0x0000D0)
class FGameFeaturePluginStateMachineProperties : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	CMember(class UGameFeatureData*)                   GameFeatureData                                             OFFSET(get<T>, {0x90, 8, 0, 0})
};

/// Struct /Script/GameFeatures.GameFeaturePluginIdentifier
/// Size: 0x0028 (0x000000 - 0x000028)
class FGameFeaturePluginIdentifier : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Struct /Script/GameFeatures.InstallBundlePluginProtocolOptions
/// Size: 0x000C (0x000000 - 0x00000C)
class FInstallBundlePluginProtocolOptions : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
};

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

