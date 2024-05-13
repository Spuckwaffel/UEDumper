
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject

/// Class /Script/GameplayStreaming.BaseGameplayStreamingHandler
/// Size: 0x0050 (0x000028 - 0x000078)
class UBaseGameplayStreamingHandler : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
};

/// Class /Script/GameplayStreaming.GFNGameplayStreamingHandler
/// Size: 0x0000 (0x000078 - 0x000078)
class UGFNGameplayStreamingHandler : public UBaseGameplayStreamingHandler
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
};

/// Class /Script/GameplayStreaming.LunaGameplayStreamingHandler
/// Size: 0x0000 (0x000078 - 0x000078)
class ULunaGameplayStreamingHandler : public UBaseGameplayStreamingHandler
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
};

/// Class /Script/GameplayStreaming.SalmonGameplayStreamingHandler
/// Size: 0x0000 (0x000078 - 0x000078)
class USalmonGameplayStreamingHandler : public UBaseGameplayStreamingHandler
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
};

/// Class /Script/GameplayStreaming.GameplayStreamingClassLoader
/// Size: 0x0020 (0x000028 - 0x000048)
class UGameplayStreamingClassLoader : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FSoftClassPath)                            GameplayStreamingServiceClassName                           OFFSET(getStruct<T>, {0x28, 24, 0, 0})
};

/// Class /Script/GameplayStreaming.GameplayStreamingService
/// Size: 0x0008 (0x000028 - 0x000030)
class UGameplayStreamingService : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(class UBaseGameplayStreamingHandler*)      ActiveHandler                                               OFFSET(get<T>, {0x28, 8, 0, 0})
};

