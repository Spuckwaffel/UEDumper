
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: GameFeatures
/// dependency: GameplayAbilities
/// dependency: GameplayTags

/// Class /Script/FortAudioClustersRuntime.FortAudioClustersSettings
/// Size: 0x0050 (0x000030 - 0x000080)
class UFortAudioClustersSettings : public UDeveloperSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(TMap<FGameplayTag, double>)                ParameterDefaults                                           OFFSET(get<T>, {0x30, 80, 0, 0})
};

/// Class /Script/FortAudioClustersRuntime.FortAudioClustersSubsystem
/// Size: 0x0000 (0x000040 - 0x000040)
class UFortAudioClustersSubsystem : public UTickableWorldSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Script/FortAudioClustersRuntime.GameFeatureAction_AddAudioCluster
/// Size: 0x00C8 (0x000028 - 0x0000F0)
class UGameFeatureAction_AddAudioCluster : public UGameFeatureAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	CMember(TArray<FGameFeatureAudioClusterEntry>)     Clusters                                                    OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(TMap<FName, FGameplayTag>)                 OverrideTable                                               OFFSET(get<T>, {0x38, 80, 0, 0})
	SMember(FName)                                     DisabledActorTag                                            OFFSET(getStruct<T>, {0x88, 4, 0, 0})


	/// Functions
	// Function /Script/FortAudioClustersRuntime.GameFeatureAction_AddAudioCluster.HandleRegisteredActorDeath
	// void HandleRegisteredActorDeath(float Damage, FGameplayTagContainer& DamageTags, FVector Momentum, FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, FGameplayEffectContextHandle EffectContext); // [0x239aac4] Final|Native|Private|HasOutParms|HasDefaults 
};

/// Class /Script/FortAudioClustersRuntime.GameFeatureAction_AddAudioClusterConfigMaps
/// Size: 0x0060 (0x000028 - 0x000088)
class UGameFeatureAction_AddAudioClusterConfigMaps : public UGameFeatureAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	CMember(TArray<TWeakObjectPtr<UAudioClusterConfigMap*>>) ConfigMaps                                            OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Struct /Script/FortAudioClustersRuntime.GameFeatureAudioClusterEntry
/// Size: 0x0018 (0x000000 - 0x000018)
class FGameFeatureAudioClusterEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FGameplayTag)                              ClusterTag                                                  OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(TArray<TWeakObjectPtr<UClass*>>)           ActorClasses                                                OFFSET(get<T>, {0x8, 16, 0, 0})
};

