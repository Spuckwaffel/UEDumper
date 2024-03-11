
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
/// dependency: GameFeatures
/// dependency: GameplayTags

/// Class /Script/FortAudioClustersRuntime.FortAudioClustersSettings
/// Size: 0x0050 (0x000030 - 0x000080)
class UFortAudioClustersSettings : public UDeveloperSettings
{ 
public:
	SDK_UNDEFINED(80,13938) /* TMap<FGameplayTag, double> */ __um(ParameterDefaults);                              // 0x0030   (0x0050)  
};

/// Class /Script/FortAudioClustersRuntime.FortAudioClustersSubsystem
/// Size: 0x0000 (0x000040 - 0x000040)
class UFortAudioClustersSubsystem : public UTickableWorldSubsystem
{ 
public:
};

/// Struct /Script/FortAudioClustersRuntime.GameFeatureAudioClusterEntry
/// Size: 0x0018 (0x000000 - 0x000018)
struct FGameFeatureAudioClusterEntry
{ 
	FGameplayTag                                       ClusterTag;                                                 // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	SDK_UNDEFINED(16,13939) /* TArray<TWeakObjectPtr<UClass*>> */ __um(ActorClasses);                              // 0x0008   (0x0010)  
};

/// Class /Script/FortAudioClustersRuntime.GameFeatureAction_AddAudioCluster
/// Size: 0x00C8 (0x000028 - 0x0000F0)
class UGameFeatureAction_AddAudioCluster : public UGameFeatureAction
{ 
public:
	TArray<FGameFeatureAudioClusterEntry>              Clusters;                                                   // 0x0028   (0x0010)  
	SDK_UNDEFINED(80,13940) /* TMap<FName, FGameplayTag> */ __um(OverrideTable);                                   // 0x0038   (0x0050)  
	FName                                              DisabledActorTag;                                           // 0x0088   (0x0004)  
	unsigned char                                      UnknownData00_6[0x64];                                      // 0x008C   (0x0064)  MISSED


	/// Functions
	// Function /Script/FortAudioClustersRuntime.GameFeatureAction_AddAudioCluster.HandleRegisteredActorDeath
	// void HandleRegisteredActorDeath(float Damage, FGameplayTagContainer& DamageTags, FVector Momentum, FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, FGameplayEffectContextHandle EffectContext); // [0x34733f0] Final|Native|Private|HasOutParms|HasDefaults 
};

/// Class /Script/FortAudioClustersRuntime.GameFeatureAction_AddAudioClusterConfigMaps
/// Size: 0x0060 (0x000028 - 0x000088)
class UGameFeatureAction_AddAudioClusterConfigMaps : public UGameFeatureAction
{ 
public:
	SDK_UNDEFINED(16,13941) /* TArray<TWeakObjectPtr<UAudioClusterConfigMap*>> */ __um(ConfigMaps);                // 0x0028   (0x0010)  
	unsigned char                                      UnknownData00_6[0x50];                                      // 0x0038   (0x0050)  MISSED
};

