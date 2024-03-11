
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: MotorcycleRuntime

/// Class /Script/SportbikeRuntime.FortSportbikeAnimInstance
/// Size: 0x0020 (0x000690 - 0x0006B0)
class UFortSportbikeAnimInstance : public UFortMotorcycleVehicleAnimInstance
{ 
public:
	FRotator                                           LimitedWheelRotationFR;                                     // 0x0688   (0x0018)  
	bool                                               HasPassenger;                                               // 0x06A0   (0x0001)  
	bool                                               ShouldPlayGroundTrick;                                      // 0x06A1   (0x0001)  
	bool                                               IsWheelie;                                                  // 0x06A2   (0x0001)  
	bool                                               StateRuleFromWheelieToGroundTrickOutro;                     // 0x06A3   (0x0001)  
	bool                                               SportBikeWheelieEarlyOut;                                   // 0x06A4   (0x0001)  
	bool                                               ShouldExitFromLocomotion;                                   // 0x06A5   (0x0001)  
	bool                                               IsChangingGear;                                             // 0x06A6   (0x0001)  
	unsigned char                                      UnknownData00_6[0x9];                                       // 0x06A7   (0x0009)  MISSED
};

/// Class /Script/SportbikeRuntime.FortSportbikeDriverAnimInstance
/// Size: 0x0030 (0x000940 - 0x000970)
class UFortSportbikeDriverAnimInstance : public UFortPlayerAnimInstance_MotorcycleDriver
{ 
public:
	bool                                               SportBikeWheelieEarlyOut;                                   // 0x0940   (0x0001)  
	bool                                               StateRuleFromWheelieToGroundTrickOutro;                     // 0x0941   (0x0001)  
	bool                                               EarlyExitFromGroundTrick;                                   // 0x0942   (0x0001)  
	bool                                               IsBoostingWithNoPassenger;                                  // 0x0943   (0x0001)  
	int32_t                                            MotorcycleGear;                                             // 0x0944   (0x0004)  
	int32_t                                            CurrentGear;                                                // 0x0948   (0x0004)  
	int32_t                                            PreviousGear;                                               // 0x094C   (0x0004)  
	bool                                               IsChangingGear;                                             // 0x0950   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0951   (0x0003)  MISSED
	float                                              SuperSlideBlendAlpha;                                       // 0x0954   (0x0004)  
	float                                              SuperSlideBlendStart;                                       // 0x0958   (0x0004)  
	float                                              SuperSlideBlendEnd;                                         // 0x095C   (0x0004)  
	bool                                               IsSuperSliding;                                             // 0x0960   (0x0001)  
	unsigned char                                      UnknownData01_6[0xF];                                       // 0x0961   (0x000F)  MISSED
};

/// Class /Script/SportbikeRuntime.FortSportbikeVehicle
/// Size: 0x0010 (0x002470 - 0x002480)
class AFortSportbikeVehicle : public AFortMotorcycleVehicle
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x2470   (0x0010)  MISSED
};

/// Class /Script/SportbikeRuntime.FortSportbikeVehicleConfigs
/// Size: 0x0000 (0x000C18 - 0x000C18)
class UFortSportbikeVehicleConfigs : public UFortMotorcycleVehicleConfigs
{ 
public:
};

