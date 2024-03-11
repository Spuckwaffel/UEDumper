
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: GameplayAbilities

/// Enum /Script/StormShieldModifierRuntime.ESplitStormProxyPhase
/// Size: 0x04
enum class ESplitStormProxyPhase : uint8_t
{
	ESplitStormProxyPhase__None                                                      = 0,
	ESplitStormProxyPhase__MovingToHold                                              = 1,
	ESplitStormProxyPhase__MovingToEnd                                               = 2,
	ESplitStormProxyPhase__ESplitStormProxyPhase_MAX                                 = 3
};

/// Struct /Script/StormShieldModifierRuntime.SplitStormProxyCircle
/// Size: 0x0020 (0x000000 - 0x000020)
struct FSplitStormProxyCircle
{ 
	FVector                                            Center;                                                     // 0x0000   (0x0018)  
	float                                              Radius;                                                     // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Class /Script/StormShieldModifierRuntime.FortAthenaMutator_SplitStorm
/// Size: 0x01E0 (0x000490 - 0x000670)
class AFortAthenaMutator_SplitStorm : public AFortAthenaMutator_GameModeBase
{ 
public:
	class UClass*                                      SafeZoneProxyClass;                                         // 0x0490   (0x0008)  
	FScalableFloat                                     ProxyUpdateFrequency;                                       // 0x0498   (0x0028)  
	FScalableFloat                                     SplitParallelTravelDistance;                                // 0x04C0   (0x0028)  
	FScalableFloat                                     JoinParallelTravelDistance;                                 // 0x04E8   (0x0028)  
	FScalableFloat                                     SplitPerpendicularTravelDistance;                           // 0x0510   (0x0028)  
	FScalableFloat                                     JoinAngleFromParallelDegrees;                               // 0x0538   (0x0028)  
	FScalableFloat                                     PhaseToSplitStorm;                                          // 0x0560   (0x0028)  
	FLinearColor                                       ProxyMapCircleColor;                                        // 0x0588   (0x0010)  
	float                                              ProxyMapCircleLineThickness;                                // 0x0598   (0x0004)  
	int32_t                                            ProxyMapCircleLineSegments;                                 // 0x059C   (0x0004)  
	class AActor*                                      SafeZoneProxy;                                              // 0x05A0   (0x0008)  
	ESplitStormProxyPhase                              CurrentProxyPhase;                                          // 0x05A8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x05A9   (0x0003)  MISSED
	float                                              MoveToHoldWaitDuration;                                     // 0x05AC   (0x0004)  
	float                                              MoveToHoldDuration;                                         // 0x05B0   (0x0004)  
	float                                              MoveToEndWaitDuration;                                      // 0x05B4   (0x0004)  
	float                                              MoveToEndDuration;                                          // 0x05B8   (0x0004)  
	float                                              MoveStartTime;                                              // 0x05BC   (0x0004)  
	FSplitStormProxyCircle                             ProxyStartCircle;                                           // 0x05C0   (0x0020)  
	FSplitStormProxyCircle                             ProxyEndCircle;                                             // 0x05E0   (0x0020)  
	FSplitStormProxyCircle                             ProxyHoldCircle;                                            // 0x0600   (0x0020)  
	FSplitStormProxyCircle                             CurrentProxyCircle;                                         // 0x0620   (0x0020)  
	unsigned char                                      UnknownData01_6[0x30];                                      // 0x0640   (0x0030)  MISSED


	/// Functions
	// Function /Script/StormShieldModifierRuntime.FortAthenaMutator_SplitStorm.UpdateProxyCenterAndRadius
	// void UpdateProxyCenterAndRadius();                                                                                    // [0x36203b0] Final|Native|Private 
	// Function /Script/StormShieldModifierRuntime.FortAthenaMutator_SplitStorm.StartProxyUpdateTimer
	// void StartProxyUpdateTimer();                                                                                         // [0x36203b0] Final|Native|Private 
	// Function /Script/StormShieldModifierRuntime.FortAthenaMutator_SplitStorm.SetSafeZoneProxyPhase
	// void SetSafeZoneProxyPhase(ESplitStormProxyPhase NewPhase);                                                           // [0x81e7214] Final|Native|Protected|BlueprintCallable 
	// Function /Script/StormShieldModifierRuntime.FortAthenaMutator_SplitStorm.SetProxyRadius
	// void SetProxyRadius(float NewRadius);                                                                                 // [0xaaf7f44] Native|Event|Protected|BlueprintEvent 
	// Function /Script/StormShieldModifierRuntime.FortAthenaMutator_SplitStorm.SetProxyCenter
	// void SetProxyCenter(FVector NewCenter);                                                                               // [0xaaf7e00] Native|Event|Protected|HasDefaults|BlueprintEvent 
	// Function /Script/StormShieldModifierRuntime.FortAthenaMutator_SplitStorm.OnSafeZonePhaseChanged
	// void OnSafeZonePhaseChanged();                                                                                        // [0x36203b0] Final|Native|Private 
	// Function /Script/StormShieldModifierRuntime.FortAthenaMutator_SplitStorm.OnSafeZoneIndicatorSpawned
	// void OnSafeZoneIndicatorSpawned(FFortSafeZoneIndicatorUpdatedEvent& Event);                                           // [0x81e7278] Final|Native|Private|HasOutParms 
	// Function /Script/StormShieldModifierRuntime.FortAthenaMutator_SplitStorm.OnRep_CurrentProxyCircle
	// void OnRep_CurrentProxyCircle();                                                                                      // [0xaaf7d6c] Final|Native|Private 
};

