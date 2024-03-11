
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: GameplayTags
/// dependency: LowMemoryFallbackRuntime
/// dependency: ModularGameplay

/// Enum /Script/JunoLowMemoryFallbackRuntime.EJunoLowMemoryState
/// Size: 0x06
enum class EJunoLowMemoryState : uint8_t
{
	EJunoLowMemoryState__Unset                                                       = -1,
	EJunoLowMemoryState__Good                                                        = 0,
	EJunoLowMemoryState__Low                                                         = 1,
	EJunoLowMemoryState__VeryLow                                                     = 2,
	EJunoLowMemoryState__Critical                                                    = 3,
	EJunoLowMemoryState__EJunoLowMemoryState_MAX                                     = 4
};

/// Class /Script/JunoLowMemoryFallbackRuntime.JunoActivateStrategyOnAllClients_LowMemoryFallbackStrategy
/// Size: 0x0008 (0x000038 - 0x000040)
class UJunoActivateStrategyOnAllClients_LowMemoryFallbackStrategy : public ULowMemoryFallbackStrategy
{ 
public:
	class UClass*                                      StrategyToActivate;                                         // 0x0038   (0x0008)  
};

/// Class /Script/JunoLowMemoryFallbackRuntime.JunoBlockBuilding_LowMemoryFallbackStrategy
/// Size: 0x0008 (0x000038 - 0x000040)
class UJunoBlockBuilding_LowMemoryFallbackStrategy : public ULowMemoryFallbackStrategy
{ 
public:
	FGameplayTag                                       BlockingTag;                                                // 0x0038   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Struct /Script/JunoLowMemoryFallbackRuntime.JunoLowMemoryFallbackTriggeredStrategy
/// Size: 0x0018 (0x000000 - 0x000018)
struct FJunoLowMemoryFallbackTriggeredStrategy
{ 
	class UClass*                                      StrategyClass;                                              // 0x0000   (0x0008)  
	TArray<class APlayerState*>                        TriggeringPlayers;                                          // 0x0008   (0x0010)  
};

/// Class /Script/JunoLowMemoryFallbackRuntime.JunoLowMemoryFallbackGameStateComponent
/// Size: 0x0020 (0x0000A0 - 0x0000C0)
class UJunoLowMemoryFallbackGameStateComponent : public UFortGameStateComponent
{ 
public:
	TArray<FJunoLowMemoryFallbackTriggeredStrategy>    TriggeredStrategies;                                        // 0x00A0   (0x0010)  
	TArray<class ULowMemoryFallbackStrategy*>          ActiveStrategies;                                           // 0x00B0   (0x0010)  


	/// Functions
	// Function /Script/JunoLowMemoryFallbackRuntime.JunoLowMemoryFallbackGameStateComponent.OnRep_TriggeredStrategies
	// void OnRep_TriggeredStrategies();                                                                                     // [0xb5132d4] Final|Native|Private 
};

/// Class /Script/JunoLowMemoryFallbackRuntime.JunoLowMemoryFallbackPlayerControllerComponent
/// Size: 0x0008 (0x0000A0 - 0x0000A8)
class UJunoLowMemoryFallbackPlayerControllerComponent : public UControllerComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00A0   (0x0008)  MISSED


	/// Functions
	// Function /Script/JunoLowMemoryFallbackRuntime.JunoLowMemoryFallbackPlayerControllerComponent.Server_UntriggerStrategy
	// void Server_UntriggerStrategy(class UClass* StrategyClass);                                                           // [0xb513384] Net|NetReliableNative|Event|Public|NetServer 
	// Function /Script/JunoLowMemoryFallbackRuntime.JunoLowMemoryFallbackPlayerControllerComponent.Server_TriggerStrategy
	// void Server_TriggerStrategy(class UClass* StrategyClass);                                                             // [0xb5132e8] Net|NetReliableNative|Event|Public|NetServer 
};

/// Class /Script/JunoLowMemoryFallbackRuntime.JunoLowMemoryFallbackWorldSubsystem
/// Size: 0x0000 (0x000118 - 0x000118)
class UJunoLowMemoryFallbackWorldSubsystem : public ULowMemoryFallbackWorldSubsystem
{ 
public:
};

/// Class /Script/JunoLowMemoryFallbackRuntime.JunoSendMemoryStateMessage_LowMemoryFallbackStrategy
/// Size: 0x0008 (0x000038 - 0x000040)
class UJunoSendMemoryStateMessage_LowMemoryFallbackStrategy : public ULowMemoryFallbackStrategy
{ 
public:
	EJunoLowMemoryState                                MemoryState;                                                // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0039   (0x0007)  MISSED
};

/// Class /Script/JunoLowMemoryFallbackRuntime.JunoSendMemoryStateMessage_LowMemoryFallbackStrategyGood
/// Size: 0x0000 (0x000040 - 0x000040)
class UJunoSendMemoryStateMessage_LowMemoryFallbackStrategyGood : public UJunoSendMemoryStateMessage_LowMemoryFallbackStrategy
{ 
public:
};

/// Class /Script/JunoLowMemoryFallbackRuntime.JunoSendMemoryStateMessage_LowMemoryFallbackStrategyLow
/// Size: 0x0000 (0x000040 - 0x000040)
class UJunoSendMemoryStateMessage_LowMemoryFallbackStrategyLow : public UJunoSendMemoryStateMessage_LowMemoryFallbackStrategy
{ 
public:
};

/// Class /Script/JunoLowMemoryFallbackRuntime.JunoSendMemoryStateMessage_LowMemoryFallbackStrategyVeryLow
/// Size: 0x0000 (0x000040 - 0x000040)
class UJunoSendMemoryStateMessage_LowMemoryFallbackStrategyVeryLow : public UJunoSendMemoryStateMessage_LowMemoryFallbackStrategy
{ 
public:
};

/// Class /Script/JunoLowMemoryFallbackRuntime.JunoSendMemoryStateMessage_LowMemoryFallbackStrategyCritical
/// Size: 0x0000 (0x000040 - 0x000040)
class UJunoSendMemoryStateMessage_LowMemoryFallbackStrategyCritical : public UJunoSendMemoryStateMessage_LowMemoryFallbackStrategy
{ 
public:
};

/// Class /Script/JunoLowMemoryFallbackRuntime.JunoStreamingDistance_LowMemoryFallbackStrategy
/// Size: 0x0008 (0x000038 - 0x000040)
class UJunoStreamingDistance_LowMemoryFallbackStrategy : public ULowMemoryFallbackStrategy
{ 
public:
	float                                              ScaleMultiplier;                                            // 0x0038   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Struct /Script/JunoLowMemoryFallbackRuntime.JunoLowMemoryMessage
/// Size: 0x0001 (0x000000 - 0x000001)
struct FJunoLowMemoryMessage
{ 
	EJunoLowMemoryState                                MemoryState;                                                // 0x0000   (0x0001)  
};

