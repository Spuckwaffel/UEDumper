
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: GameplayAbilities
/// dependency: GameplayTags
/// dependency: ModularGameplay

/// Class /Script/RandomPrefabSpawningRuntime.FortPrefabSpawner
/// Size: 0x0030 (0x000290 - 0x0002C0)
class AFortPrefabSpawner : public AActor
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0290   (0x0008)  MISSED
	FGameplayTagContainer                              RequiredProperties;                                         // 0x0298   (0x0020)  
	bool                                               bWorldReadyCalled;                                          // 0x02B8   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x02B9   (0x0007)  MISSED
};

/// Struct /Script/RandomPrefabSpawningRuntime.FortRandomPrefabData
/// Size: 0x0050 (0x000000 - 0x000050)
struct FFortRandomPrefabData
{ 
	class UClass*                                      Prefab;                                                     // 0x0000   (0x0008)  
	FGameplayTagContainer                              Tags;                                                       // 0x0008   (0x0020)  
	FScalableFloat                                     bEnabled;                                                   // 0x0028   (0x0028)  
};

/// Class /Script/RandomPrefabSpawningRuntime.FortRandomPrefabSpawnHelper
/// Size: 0x0060 (0x0000A0 - 0x000100)
class UFortRandomPrefabSpawnHelper : public UGameStateComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x10];                                      // 0x00A0   (0x0010)  MISSED
	TArray<FFortRandomPrefabData>                      AllPrefabs;                                                 // 0x00B0   (0x0010)  
	TArray<FFortRandomPrefabData>                      PrefabPool;                                                 // 0x00C0   (0x0010)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x00D0   (0x0008)  MISSED
	FScalableFloat                                     bAcceptDuplicatesWhenOutOfUniquePrefabs;                    // 0x00D8   (0x0028)  
};

