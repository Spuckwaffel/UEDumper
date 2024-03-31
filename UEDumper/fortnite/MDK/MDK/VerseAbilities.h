
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: GameplayAbilities

/// Class /Script/VerseAbilities.GameplayAbility_Verse
/// Size: 0x0000 (0x0003B8 - 0x0003B8)
class UGameplayAbility_Verse : public UGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 952;

public:
};

/// Class /Script/VerseAbilities.VerseAbility
/// Size: 0x0008 (0x000028 - 0x000030)
class UVerseAbility : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(class UClass*)                             GameplayAbilityClass                                        OFFSET(get<T>, {0x28, 8, 0, 0})
};

/// Class /Script/VerseAbilities.VerseAbilityArchetype
/// Size: 0x0010 (0x000028 - 0x000038)
class UVerseAbilityArchetype : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(class UClass*)                             AbilityClass                                                OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(class UVerseAbility*)                      Archetype                                                   OFFSET(get<T>, {0x30, 8, 0, 0})
};

