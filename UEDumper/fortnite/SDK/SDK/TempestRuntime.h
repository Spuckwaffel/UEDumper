
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: AIModule
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteAI
/// dependency: FortniteGame
/// dependency: GameplayAbilities
/// dependency: ModularGameplay

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

/// Class /Script/TempestRuntime.FortAIControllerComponent_Tempest
/// Size: 0x0018 (0x0000A8 - 0x0000C0)
class UFortAIControllerComponent_Tempest : public UFortControllerComponent
{ 
public:
	class UFortTimeOfDayWeatherComponent*              WeatherComponent;                                           // 0x00A8   (0x0008)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x00B0   (0x0010)  MISSED
};

/// Class /Script/TempestRuntime.FortCheatManager_Tempest
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortCheatManager_Tempest : public UChildCheatManager
{ 
public:


	/// Functions
	// Function /Script/TempestRuntime.FortCheatManager_Tempest.EndTempestStorm
	// void EndTempestStorm(FString StormName);                                                                              // [0x8b6e5a0] Final|BlueprintAuthorityOnly|Exec|Native|Public 
};

/// Struct /Script/TempestRuntime.TempestReplicatedMovementData
/// Size: 0x0050 (0x000000 - 0x000050)
struct FTempestReplicatedMovementData
{ 
	FVector                                            TargetServerLocation;                                       // 0x0000   (0x0018)  
	FVector                                            LastServerLocation;                                         // 0x0018   (0x0018)  
	FQuat                                              LastServerRotation;                                         // 0x0030   (0x0020)  
};

/// Class /Script/TempestRuntime.TempestMovementComponent
/// Size: 0x0110 (0x0000A0 - 0x0001B0)
class UTempestMovementComponent : public UGameFrameworkComponent
{ 
public:
	FTempestReplicatedMovementData                     MovementData;                                               // 0x00A0   (0x0050)  
	SDK_UNDEFINED(16,15698) /* FMulticastInlineDelegate */ __um(OnTempestMovementStuck);                           // 0x00F0   (0x0010)  
	SDK_UNDEFINED(16,15699) /* FMulticastInlineDelegate */ __um(OnTempestSafeZoneStateChanged);                    // 0x0100   (0x0010)  
	ETempestMovementMode                               MovementMode;                                               // 0x0110   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0111   (0x0007)  MISSED
	class UEnvQuery*                                   FindNextMovementLocationQuery;                              // 0x0118   (0x0008)  
	class AFortAthenaPatrolPath*                       MovementPath;                                               // 0x0120   (0x0008)  
	FScalableFloat                                     MovementSpeed;                                              // 0x0128   (0x0028)  
	FScalableFloat                                     RotationSpeed;                                              // 0x0150   (0x0028)  
	bool                                               bShouldIgnoreZMovement : 1;                                 // 0x0178:0 (0x0001)  
	bool                                               bFloatOnWater : 1;                                          // 0x0178:1 (0x0001)  
	unsigned char                                      UnknownData01_4[0x7];                                       // 0x0179   (0x0007)  MISSED
	FScalableFloat                                     WaterTraceZOffset;                                          // 0x0180   (0x0028)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x01A8   (0x0008)  MISSED


	/// Functions
	// Function /Script/TempestRuntime.TempestMovementComponent.OnRep_MovementData
	// void OnRep_MovementData();                                                                                            // [0xaafb65c] Final|Native|Private|Const 
};

/// Struct /Script/TempestRuntime.TempestStateInfo
/// Size: 0x000C (0x000000 - 0x00000C)
struct FTempestStateInfo
{ 
	ETempestState                                      CurrentState;                                               // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              StartTime;                                                  // 0x0004   (0x0004)  
	float                                              EndTime;                                                    // 0x0008   (0x0004)  
};

/// Class /Script/TempestRuntime.TempestStateMachineComponent
/// Size: 0x00D0 (0x0000A0 - 0x000170)
class UTempestStateMachineComponent : public UGameFrameworkComponent
{ 
public:
	bool                                               bDestroyOnCompletion;                                       // 0x00A0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x00A1   (0x0007)  MISSED
	FScalableFloat                                     FormationDuration;                                          // 0x00A8   (0x0028)  
	FScalableFloat                                     ActiveDuration;                                             // 0x00D0   (0x0028)  
	FScalableFloat                                     DissipationDuration;                                        // 0x00F8   (0x0028)  
	FTempestStateInfo                                  CurrentStateInfo;                                           // 0x0120   (0x000C)  
	unsigned char                                      UnknownData01_5[0x1C];                                      // 0x012C   (0x001C)  MISSED
	SDK_UNDEFINED(16,15700) /* FMulticastInlineDelegate */ __um(OnTempestStateChangedDelegate);                    // 0x0148   (0x0010)  
	unsigned char                                      UnknownData02_6[0x18];                                      // 0x0158   (0x0018)  MISSED


	/// Functions
	// Function /Script/TempestRuntime.TempestStateMachineComponent.OnRep_CurrentStateInfo
	// void OnRep_CurrentStateInfo();                                                                                        // [0xaafb61c] Final|Native|Private 
	// Function /Script/TempestRuntime.TempestStateMachineComponent.GetCurrentStateInfo
	// FTempestStateInfo GetCurrentStateInfo();                                                                              // [0xaafb5f4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TempestRuntime.TempestStateMachineComponent.GetCurrentStateCompletionPercentage
	// float GetCurrentStateCompletionPercentage();                                                                          // [0xaafb5cc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TempestRuntime.TempestStateMachineComponent.GetCurrentState
	// ETempestState GetCurrentState();                                                                                      // [0x76f7814] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TempestRuntime.TempestStateMachineComponent.ForceDissipate
	// void ForceDissipate(FString InDissipationReason);                                                                     // [0xaafb460] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
};

/// Struct /Script/TempestRuntime.TempestStateChangeTimerInfo
/// Size: 0x0008 (0x000000 - 0x000008)
struct FTempestStateChangeTimerInfo
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
};

