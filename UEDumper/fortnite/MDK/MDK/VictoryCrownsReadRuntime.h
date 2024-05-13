
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: FortniteGame

/// Class /Script/VictoryCrownsReadRuntime.FortVictoryCrownInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortVictoryCrownInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/VictoryCrownsReadRuntime.FortCosmeticStatObject_HasCrown
/// Size: 0x0008 (0x000088 - 0x000090)
class UFortCosmeticStatObject_HasCrown : public UFortCosmeticStatObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	CMember(class UFortVictoryCrownAccountItemDefinition*) VictoryCrownAccountItemDefinition                       OFFSET(get<T>, {0x88, 8, 0, 0})
};

/// Class /Script/VictoryCrownsReadRuntime.FortCosmeticStatObject_TotalRoyalRoyales
/// Size: 0x0018 (0x000088 - 0x0000A0)
class UFortCosmeticStatObject_TotalRoyalRoyales : public UFortCosmeticStatObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	CMember(class UFortVictoryCrownAccountItemDefinition*) VictoryCrownAccountItemDefinition                       OFFSET(get<T>, {0x88, 8, 0, 0})
};

/// Class /Script/VictoryCrownsReadRuntime.FortCosmeticStatObject_TotalVictoryCrowns
/// Size: 0x0008 (0x000088 - 0x000090)
class UFortCosmeticStatObject_TotalVictoryCrowns : public UFortCosmeticStatObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	CMember(class UFortVictoryCrownAccountItemDefinition*) VictoryCrownAccountItemDefinition                       OFFSET(get<T>, {0x88, 8, 0, 0})
};

