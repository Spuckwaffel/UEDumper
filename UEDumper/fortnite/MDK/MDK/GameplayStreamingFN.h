
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: GameplayStreaming

/// Class /Script/GameplayStreamingFN.FortLocalPlayerAccountHelper
/// Size: 0x0028 (0x000028 - 0x000050)
class UFortLocalPlayerAccountHelper : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Class /Script/GameplayStreamingFN.FortGFNGameplayStreamingHandler
/// Size: 0x0038 (0x000078 - 0x0000B0)
class UFortGFNGameplayStreamingHandler : public UGFNGameplayStreamingHandler
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	CMember(class UFortLocalPlayerAccountHelper*)      FortLocalPlayerAccountHelper                                OFFSET(get<T>, {0x80, 8, 0, 0})
	CMember(TWeakObjectPtr<UFortOnlineAccount*>)       WeakFortOnlineAccount                                       OFFSET(get<T>, {0x88, 8, 0, 0})
};

/// Class /Script/GameplayStreamingFN.FortLunaGameplayStreamingHandler
/// Size: 0x0030 (0x000078 - 0x0000A8)
class UFortLunaGameplayStreamingHandler : public ULunaGameplayStreamingHandler
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
};

/// Class /Script/GameplayStreamingFN.FortSalmonGameplayStreamingHandler
/// Size: 0x0018 (0x000078 - 0x000090)
class UFortSalmonGameplayStreamingHandler : public USalmonGameplayStreamingHandler
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
};

/// Class /Script/GameplayStreamingFN.FortGameplayStreamingHandler
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortGameplayStreamingHandler : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/GameplayStreamingFN.FortGameplayStreamingService
/// Size: 0x0008 (0x000030 - 0x000038)
class UFortGameplayStreamingService : public UGameplayStreamingService
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

