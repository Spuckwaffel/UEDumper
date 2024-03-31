
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: AIModule
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteAI
/// dependency: FortniteGame
/// dependency: GameplayAbilities
/// dependency: ModularGameplay

/// Class /Script/TempestRuntime.FortAIControllerComponent_Tempest
/// Size: 0x0018 (0x0000A8 - 0x0000C0)
class UFortAIControllerComponent_Tempest : public UFortControllerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	CMember(class UFortTimeOfDayWeatherComponent*)     WeatherComponent                                            OFFSET(get<T>, {0xA8, 8, 0, 0})
};

/// Class /Script/TempestRuntime.FortCheatManager_Tempest
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortCheatManager_Tempest : public UChildCheatManager
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/TempestRuntime.FortCheatManager_Tempest.EndTempestStorm
	// void EndTempestStorm(FString StormName);                                                                                 // [0x91f846c] Final|BlueprintAuthorityOnly|Exec|Native|Public 
};

/// Class /Script/TempestRuntime.TempestMovementComponent
/// Size: 0x0110 (0x0000A0 - 0x0001B0)
class UTempestMovementComponent : public UGameFrameworkComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 432;

public:
	SMember(FTempestReplicatedMovementData)            MovementData                                                OFFSET(getStruct<T>, {0xA0, 80, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnTempestMovementStuck                                      OFFSET(getStruct<T>, {0xF0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnTempestSafeZoneStateChanged                               OFFSET(getStruct<T>, {0x100, 16, 0, 0})
	CMember(ETempestMovementMode)                      MovementMode                                                OFFSET(get<T>, {0x110, 1, 0, 0})
	CMember(class UEnvQuery*)                          FindNextMovementLocationQuery                               OFFSET(get<T>, {0x118, 8, 0, 0})
	CMember(class AFortAthenaPatrolPath*)              MovementPath                                                OFFSET(get<T>, {0x120, 8, 0, 0})
	SMember(FScalableFloat)                            MovementSpeed                                               OFFSET(getStruct<T>, {0x128, 40, 0, 0})
	SMember(FScalableFloat)                            RotationSpeed                                               OFFSET(getStruct<T>, {0x150, 40, 0, 0})
	DMember(bool)                                      bShouldIgnoreZMovement                                      OFFSET(get<bool>, {0x178, 1, 1, 0})
	DMember(bool)                                      bFloatOnWater                                               OFFSET(get<bool>, {0x178, 1, 1, 1})
	SMember(FScalableFloat)                            WaterTraceZOffset                                           OFFSET(getStruct<T>, {0x180, 40, 0, 0})


	/// Functions
	// Function /Script/TempestRuntime.TempestMovementComponent.OnRep_MovementData
	// void OnRep_MovementData();                                                                                               // [0xb9d0c38] Final|Native|Private|Const 
};

/// Class /Script/TempestRuntime.TempestStateMachineComponent
/// Size: 0x00D0 (0x0000A0 - 0x000170)
class UTempestStateMachineComponent : public UGameFrameworkComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 368;

public:
	DMember(bool)                                      bDestroyOnCompletion                                        OFFSET(get<bool>, {0xA0, 1, 0, 0})
	SMember(FScalableFloat)                            FormationDuration                                           OFFSET(getStruct<T>, {0xA8, 40, 0, 0})
	SMember(FScalableFloat)                            ActiveDuration                                              OFFSET(getStruct<T>, {0xD0, 40, 0, 0})
	SMember(FScalableFloat)                            DissipationDuration                                         OFFSET(getStruct<T>, {0xF8, 40, 0, 0})
	SMember(FTempestStateInfo)                         CurrentStateInfo                                            OFFSET(getStruct<T>, {0x120, 12, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnTempestStateChangedDelegate                               OFFSET(getStruct<T>, {0x148, 16, 0, 0})


	/// Functions
	// Function /Script/TempestRuntime.TempestStateMachineComponent.OnRep_CurrentStateInfo
	// void OnRep_CurrentStateInfo();                                                                                           // [0xb9d0bf8] Final|Native|Private 
	// Function /Script/TempestRuntime.TempestStateMachineComponent.GetCurrentStateInfo
	// FTempestStateInfo GetCurrentStateInfo();                                                                                 // [0xb9d0bd0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TempestRuntime.TempestStateMachineComponent.GetCurrentStateCompletionPercentage
	// float GetCurrentStateCompletionPercentage();                                                                             // [0xb9d0ba8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TempestRuntime.TempestStateMachineComponent.GetCurrentState
	// ETempestState GetCurrentState();                                                                                         // [0x7aaec38] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TempestRuntime.TempestStateMachineComponent.ForceDissipate
	// void ForceDissipate(FString InDissipationReason);                                                                        // [0xb9d054c] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
};

/// Struct /Script/TempestRuntime.TempestStateInfo
/// Size: 0x000C (0x000000 - 0x00000C)
class FTempestStateInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	CMember(ETempestState)                             CurrentState                                                OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(float)                                     StartTime                                                   OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     EndTime                                                     OFFSET(get<float>, {0x8, 4, 0, 0})
};

/// Struct /Script/TempestRuntime.TempestReplicatedMovementData
/// Size: 0x0050 (0x000000 - 0x000050)
class FTempestReplicatedMovementData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FVector)                                   TargetServerLocation                                        OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FVector)                                   LastServerLocation                                          OFFSET(getStruct<T>, {0x18, 24, 0, 0})
	SMember(FQuat)                                     LastServerRotation                                          OFFSET(getStruct<T>, {0x30, 32, 0, 0})
};

/// Struct /Script/TempestRuntime.TempestStateChangeTimerInfo
/// Size: 0x0008 (0x000000 - 0x000008)
class FTempestStateChangeTimerInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Enum /Script/TempestRuntime.ETempestState
/// Size: 0x06
enum class ETempestState : uint8_t
{
	ETempestState__Unformed                                                          = 0,
	ETempestState__Forming                                                           = 1,
	ETempestState__Active                                                            = 2,
	ETempestState__Dissipating                                                       = 3,
	ETempestState__Complete                                                          = 4,
	ETempestState__ETempestState_MAX                                                 = 5
};

/// Enum /Script/TempestRuntime.ETempestMovementMode
/// Size: 0x03
enum class ETempestMovementMode : uint8_t
{
	ETempestMovementMode__EnvQuery                                                   = 0,
	ETempestMovementMode__Path                                                       = 1,
	ETempestMovementMode__ETempestMovementMode_MAX                                   = 2
};

