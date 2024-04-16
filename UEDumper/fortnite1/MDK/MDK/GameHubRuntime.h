
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

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
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 840;

public:
};

/// Class /Script/GameHubRuntime.GameHubPlayerSpawningComponent
/// Size: 0x0020 (0x0000B0 - 0x0000D0)
class UGameHubPlayerSpawningComponent : public UPlayspaceComponent_PlayerSpawning
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	SMember(FGameplayTagContainer)                     PlayerStartRequirements                                     OFFSET(getStruct<T>, {0xB0, 32, 0, 0})
};

/// Class /Script/GameHubRuntime.GameHubPlayspace
/// Size: 0x0028 (0x000740 - 0x000768)
class AGameHubPlayspace : public AFortPlayspace
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1896;

public:
	DMember(bool)                                      bSimulatePlayerDamage                                       OFFSET(get<bool>, {0x740, 1, 0, 0})
	SMember(FGameplayTagContainer)                     PlayerStartRequirements                                     OFFSET(getStruct<T>, {0x748, 32, 0, 0})
};

