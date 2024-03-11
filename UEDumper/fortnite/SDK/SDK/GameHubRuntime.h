
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: GameplayTags
/// dependency: ModularGameplay
/// dependency: PlayspaceSystem

/// Class /Script/GameHubRuntime.GameHubBaseMutator
/// Size: 0x0010 (0x000338 - 0x000348)
class AGameHubBaseMutator : public AFortAthenaMutator
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0338   (0x0010)  MISSED
};

/// Class /Script/GameHubRuntime.GameHubPlayerSpawningComponent
/// Size: 0x0020 (0x0000B0 - 0x0000D0)
class UGameHubPlayerSpawningComponent : public UPlayspaceComponent_PlayerSpawning
{ 
public:
	FGameplayTagContainer                              PlayerStartRequirements;                                    // 0x00B0   (0x0020)  
};

/// Class /Script/GameHubRuntime.GameHubPlayspace
/// Size: 0x0028 (0x0006E8 - 0x000710)
class AGameHubPlayspace : public AFortPlayspace
{ 
public:
	bool                                               bSimulatePlayerDamage;                                      // 0x06E8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x06E9   (0x0007)  MISSED
	FGameplayTagContainer                              PlayerStartRequirements;                                    // 0x06F0   (0x0020)  
};

