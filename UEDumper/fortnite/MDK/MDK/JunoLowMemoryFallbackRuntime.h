
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: GameplayTags
/// dependency: LowMemoryFallbackRuntime
/// dependency: ModularGameplay

/// Class /Script/JunoLowMemoryFallbackRuntime.JunoActivateStrategyOnAllClients_LowMemoryFallbackStrategy
/// Size: 0x0008 (0x000038 - 0x000040)
class UJunoActivateStrategyOnAllClients_LowMemoryFallbackStrategy : public ULowMemoryFallbackStrategy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(class UClass*)                             StrategyToActivate                                          OFFSET(get<T>, {0x38, 8, 0, 0})
};

/// Class /Script/JunoLowMemoryFallbackRuntime.JunoBlockBuilding_LowMemoryFallbackStrategy
/// Size: 0x0008 (0x000038 - 0x000040)
class UJunoBlockBuilding_LowMemoryFallbackStrategy : public ULowMemoryFallbackStrategy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FGameplayTag)                              BlockingTag                                                 OFFSET(getStruct<T>, {0x38, 4, 0, 0})
};

/// Class /Script/JunoLowMemoryFallbackRuntime.JunoLowMemoryFallbackGameStateComponent
/// Size: 0x0020 (0x0000A0 - 0x0000C0)
class UJunoLowMemoryFallbackGameStateComponent : public UFortGameStateComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	CMember(TArray<FJunoLowMemoryFallbackTriggeredStrategy>) TriggeredStrategies                                   OFFSET(get<T>, {0xA0, 16, 0, 0})
	CMember(TArray<class ULowMemoryFallbackStrategy*>) ActiveStrategies                                            OFFSET(get<T>, {0xB0, 16, 0, 0})


	/// Functions
	// Function /Script/JunoLowMemoryFallbackRuntime.JunoLowMemoryFallbackGameStateComponent.OnRep_TriggeredStrategies
	// void OnRep_TriggeredStrategies();                                                                                        // [0xccc4768] Final|Native|Private 
};

/// Class /Script/JunoLowMemoryFallbackRuntime.JunoLowMemoryFallbackPlayerControllerComponent
/// Size: 0x0008 (0x0000A0 - 0x0000A8)
class UJunoLowMemoryFallbackPlayerControllerComponent : public UControllerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:


	/// Functions
	// Function /Script/JunoLowMemoryFallbackRuntime.JunoLowMemoryFallbackPlayerControllerComponent.Server_UntriggerStrategy
	// void Server_UntriggerStrategy(class UClass* StrategyClass);                                                              // [0xccc4818] Net|NetReliableNative|Event|Public|NetServer 
	// Function /Script/JunoLowMemoryFallbackRuntime.JunoLowMemoryFallbackPlayerControllerComponent.Server_TriggerStrategy
	// void Server_TriggerStrategy(class UClass* StrategyClass);                                                                // [0xccc477c] Net|NetReliableNative|Event|Public|NetServer 
};

/// Class /Script/JunoLowMemoryFallbackRuntime.JunoLowMemoryFallbackWorldSubsystem
/// Size: 0x0000 (0x000118 - 0x000118)
class UJunoLowMemoryFallbackWorldSubsystem : public ULowMemoryFallbackWorldSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 280;

public:
};

/// Class /Script/JunoLowMemoryFallbackRuntime.JunoSendMemoryStateMessage_LowMemoryFallbackStrategy
/// Size: 0x0008 (0x000038 - 0x000040)
class UJunoSendMemoryStateMessage_LowMemoryFallbackStrategy : public ULowMemoryFallbackStrategy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(EJunoLowMemoryState)                       MemoryState                                                 OFFSET(get<T>, {0x38, 1, 0, 0})
};

/// Class /Script/JunoLowMemoryFallbackRuntime.JunoSendMemoryStateMessage_LowMemoryFallbackStrategyGood
/// Size: 0x0000 (0x000040 - 0x000040)
class UJunoSendMemoryStateMessage_LowMemoryFallbackStrategyGood : public UJunoSendMemoryStateMessage_LowMemoryFallbackStrategy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Script/JunoLowMemoryFallbackRuntime.JunoSendMemoryStateMessage_LowMemoryFallbackStrategyLow
/// Size: 0x0000 (0x000040 - 0x000040)
class UJunoSendMemoryStateMessage_LowMemoryFallbackStrategyLow : public UJunoSendMemoryStateMessage_LowMemoryFallbackStrategy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Script/JunoLowMemoryFallbackRuntime.JunoSendMemoryStateMessage_LowMemoryFallbackStrategyVeryLow
/// Size: 0x0000 (0x000040 - 0x000040)
class UJunoSendMemoryStateMessage_LowMemoryFallbackStrategyVeryLow : public UJunoSendMemoryStateMessage_LowMemoryFallbackStrategy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Script/JunoLowMemoryFallbackRuntime.JunoSendMemoryStateMessage_LowMemoryFallbackStrategyCritical
/// Size: 0x0000 (0x000040 - 0x000040)
class UJunoSendMemoryStateMessage_LowMemoryFallbackStrategyCritical : public UJunoSendMemoryStateMessage_LowMemoryFallbackStrategy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Script/JunoLowMemoryFallbackRuntime.JunoStreamingDistance_LowMemoryFallbackStrategy
/// Size: 0x0008 (0x000038 - 0x000040)
class UJunoStreamingDistance_LowMemoryFallbackStrategy : public ULowMemoryFallbackStrategy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(float)                                     ScaleMultiplier                                             OFFSET(get<float>, {0x38, 4, 0, 0})
};

/// Struct /Script/JunoLowMemoryFallbackRuntime.JunoLowMemoryFallbackTriggeredStrategy
/// Size: 0x0018 (0x000000 - 0x000018)
class FJunoLowMemoryFallbackTriggeredStrategy : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(class UClass*)                             StrategyClass                                               OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(TArray<class APlayerState*>)               TriggeringPlayers                                           OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/JunoLowMemoryFallbackRuntime.JunoLowMemoryMessage
/// Size: 0x0001 (0x000000 - 0x000001)
class FJunoLowMemoryMessage : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
	CMember(EJunoLowMemoryState)                       MemoryState                                                 OFFSET(get<T>, {0x0, 1, 0, 0})
};

/// Enum /Script/JunoLowMemoryFallbackRuntime.EJunoLowMemoryState
/// Size: 0x05
enum class EJunoLowMemoryState : uint8_t
{
	EJunoLowMemoryState__Unset                                                       = -1,
	EJunoLowMemoryState__Good                                                        = 0,
	EJunoLowMemoryState__Low                                                         = 1,
	EJunoLowMemoryState__VeryLow                                                     = 2,
	EJunoLowMemoryState__Critical                                                    = 3
};

