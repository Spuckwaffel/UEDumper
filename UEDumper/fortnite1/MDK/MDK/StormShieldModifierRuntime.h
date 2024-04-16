
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: GameplayAbilities

/// Class /Script/StormShieldModifierRuntime.FortAthenaMutator_SplitStorm
/// Size: 0x01E0 (0x000488 - 0x000668)
class AFortAthenaMutator_SplitStorm : public AFortAthenaMutator_GameModeBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1640;

public:
	CMember(class UClass*)                             SafeZoneProxyClass                                          OFFSET(get<T>, {0x488, 8, 0, 0})
	SMember(FScalableFloat)                            ProxyUpdateFrequency                                        OFFSET(getStruct<T>, {0x490, 40, 0, 0})
	SMember(FScalableFloat)                            SplitParallelTravelDistance                                 OFFSET(getStruct<T>, {0x4B8, 40, 0, 0})
	SMember(FScalableFloat)                            JoinParallelTravelDistance                                  OFFSET(getStruct<T>, {0x4E0, 40, 0, 0})
	SMember(FScalableFloat)                            SplitPerpendicularTravelDistance                            OFFSET(getStruct<T>, {0x508, 40, 0, 0})
	SMember(FScalableFloat)                            JoinAngleFromParallelDegrees                                OFFSET(getStruct<T>, {0x530, 40, 0, 0})
	SMember(FScalableFloat)                            PhaseToSplitStorm                                           OFFSET(getStruct<T>, {0x558, 40, 0, 0})
	SMember(FLinearColor)                              ProxyMapCircleColor                                         OFFSET(getStruct<T>, {0x580, 16, 0, 0})
	DMember(float)                                     ProxyMapCircleLineThickness                                 OFFSET(get<float>, {0x590, 4, 0, 0})
	DMember(int32_t)                                   ProxyMapCircleLineSegments                                  OFFSET(get<int32_t>, {0x594, 4, 0, 0})
	CMember(class AActor*)                             SafeZoneProxy                                               OFFSET(get<T>, {0x598, 8, 0, 0})
	CMember(ESplitStormProxyPhase)                     CurrentProxyPhase                                           OFFSET(get<T>, {0x5A0, 1, 0, 0})
	DMember(float)                                     MoveToHoldWaitDuration                                      OFFSET(get<float>, {0x5A4, 4, 0, 0})
	DMember(float)                                     MoveToHoldDuration                                          OFFSET(get<float>, {0x5A8, 4, 0, 0})
	DMember(float)                                     MoveToEndWaitDuration                                       OFFSET(get<float>, {0x5AC, 4, 0, 0})
	DMember(float)                                     MoveToEndDuration                                           OFFSET(get<float>, {0x5B0, 4, 0, 0})
	DMember(float)                                     MoveStartTime                                               OFFSET(get<float>, {0x5B4, 4, 0, 0})
	SMember(FSplitStormProxyCircle)                    ProxyStartCircle                                            OFFSET(getStruct<T>, {0x5B8, 32, 0, 0})
	SMember(FSplitStormProxyCircle)                    ProxyEndCircle                                              OFFSET(getStruct<T>, {0x5D8, 32, 0, 0})
	SMember(FSplitStormProxyCircle)                    ProxyHoldCircle                                             OFFSET(getStruct<T>, {0x5F8, 32, 0, 0})
	SMember(FSplitStormProxyCircle)                    CurrentProxyCircle                                          OFFSET(getStruct<T>, {0x618, 32, 0, 0})


	/// Functions
	// Function /Script/StormShieldModifierRuntime.FortAthenaMutator_SplitStorm.UpdateProxyCenterAndRadius
	// void UpdateProxyCenterAndRadius();                                                                                       // [0x3508bf8] Final|Native|Private 
	// Function /Script/StormShieldModifierRuntime.FortAthenaMutator_SplitStorm.StartProxyUpdateTimer
	// void StartProxyUpdateTimer();                                                                                            // [0x3508bf8] Final|Native|Private 
	// Function /Script/StormShieldModifierRuntime.FortAthenaMutator_SplitStorm.SetSafeZoneProxyPhase
	// void SetSafeZoneProxyPhase(ESplitStormProxyPhase NewPhase);                                                              // [0xbb8d414] Final|Native|Protected|BlueprintCallable 
	// Function /Script/StormShieldModifierRuntime.FortAthenaMutator_SplitStorm.SetProxyRadius
	// void SetProxyRadius(float NewRadius);                                                                                    // [0xbb8d34c] Native|Event|Protected|BlueprintEvent 
	// Function /Script/StormShieldModifierRuntime.FortAthenaMutator_SplitStorm.SetProxyCenter
	// void SetProxyCenter(FVector NewCenter);                                                                                  // [0xbb8d274] Native|Event|Protected|HasDefaults|BlueprintEvent 
	// Function /Script/StormShieldModifierRuntime.FortAthenaMutator_SplitStorm.OnSafeZonePhaseChanged
	// void OnSafeZonePhaseChanged();                                                                                           // [0x3508bf8] Final|Native|Private 
	// Function /Script/StormShieldModifierRuntime.FortAthenaMutator_SplitStorm.OnSafeZoneIndicatorSpawned
	// void OnSafeZoneIndicatorSpawned(FFortSafeZoneIndicatorUpdatedEvent& Event);                                              // [0xbb8d20c] Final|Native|Private|HasOutParms 
	// Function /Script/StormShieldModifierRuntime.FortAthenaMutator_SplitStorm.OnRep_CurrentProxyCircle
	// void OnRep_CurrentProxyCircle();                                                                                         // [0xbb8d178] Final|Native|Private 
};

/// Struct /Script/StormShieldModifierRuntime.SplitStormProxyCircle
/// Size: 0x0020 (0x000000 - 0x000020)
class FSplitStormProxyCircle : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FVector)                                   Center                                                      OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	DMember(float)                                     Radius                                                      OFFSET(get<float>, {0x18, 4, 0, 0})
};

/// Enum /Script/StormShieldModifierRuntime.ESplitStormProxyPhase
/// Size: 0x04
enum class ESplitStormProxyPhase : uint8_t
{
	ESplitStormProxyPhase__None                                                      = 0,
	ESplitStormProxyPhase__MovingToHold                                              = 1,
	ESplitStormProxyPhase__MovingToEnd                                               = 2,
	ESplitStormProxyPhase__ESplitStormProxyPhase_MAX                                 = 3
};

