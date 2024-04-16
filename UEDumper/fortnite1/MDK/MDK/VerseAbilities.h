
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: GameplayAbilities
/// dependency: NetCore

/// Class /Script/VerseAbilities.GameplayAbility_Verse
/// Size: 0x0000 (0x0003B0 - 0x0003B0)
class UGameplayAbility_Verse : public UGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 944;

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

/// Class /Script/VerseAbilities.VerseAbilitySource
/// Size: 0x0170 (0x000028 - 0x000198)
class UVerseAbilitySource : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 408;

public:
	SMember(FVerseAbilityMappingContainer)             ActivatableAbilities                                        OFFSET(getStruct<T>, {0x28, 280, 0, 0})
};

/// Class /Script/VerseAbilities.VerseAbilitySubsystem
/// Size: 0x0050 (0x000030 - 0x000080)
class UVerseAbilitySubsystem : public UWorldSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
};

/// Struct /Script/VerseAbilities.VerseAbilityMapping
/// Size: 0x000C (0x00000C - 0x000018)
class FVerseAbilityMapping : public FFastArraySerializerItem
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FGameplayAbilitySpecHandle)                Handle                                                      OFFSET(getStruct<T>, {0xC, 4, 0, 0})
	CMember(class UVerseAbility*)                      AbilityArchetype                                            OFFSET(get<T>, {0x10, 8, 0, 0})
};

/// Struct /Script/VerseAbilities.VerseAbilityMappingContainer
/// Size: 0x0010 (0x000108 - 0x000118)
class FVerseAbilityMappingContainer : public FFastArraySerializer
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 280;

public:
	CMember(TArray<FVerseAbilityMapping>)              Items                                                       OFFSET(get<T>, {0x108, 16, 0, 0})
};

