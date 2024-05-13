
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: MotorcycleRuntime

/// Class /Script/SportbikeRuntime.FortSportbikeAnimInstance
/// Size: 0x0028 (0x000688 - 0x0006B0)
class UFortSportbikeAnimInstance : public UFortMotorcycleVehicleAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1712;

public:
	SMember(FRotator)                                  LimitedWheelRotationFR                                      OFFSET(getStruct<T>, {0x688, 24, 0, 0})
	DMember(bool)                                      HasPassenger                                                OFFSET(get<bool>, {0x6A0, 1, 0, 0})
	DMember(bool)                                      ShouldPlayGroundTrick                                       OFFSET(get<bool>, {0x6A1, 1, 0, 0})
	DMember(bool)                                      IsWheelie                                                   OFFSET(get<bool>, {0x6A2, 1, 0, 0})
	DMember(bool)                                      StateRuleFromWheelieToGroundTrickOutro                      OFFSET(get<bool>, {0x6A3, 1, 0, 0})
	DMember(bool)                                      SportBikeWheelieEarlyOut                                    OFFSET(get<bool>, {0x6A4, 1, 0, 0})
	DMember(bool)                                      ShouldExitFromLocomotion                                    OFFSET(get<bool>, {0x6A5, 1, 0, 0})
	DMember(bool)                                      IsChangingGear                                              OFFSET(get<bool>, {0x6A6, 1, 0, 0})
};

/// Class /Script/SportbikeRuntime.FortSportbikeDriverAnimInstance
/// Size: 0x0030 (0x000940 - 0x000970)
class UFortSportbikeDriverAnimInstance : public UFortPlayerAnimInstance_MotorcycleDriver
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2416;

public:
	DMember(bool)                                      SportBikeWheelieEarlyOut                                    OFFSET(get<bool>, {0x940, 1, 0, 0})
	DMember(bool)                                      StateRuleFromWheelieToGroundTrickOutro                      OFFSET(get<bool>, {0x941, 1, 0, 0})
	DMember(bool)                                      EarlyExitFromGroundTrick                                    OFFSET(get<bool>, {0x942, 1, 0, 0})
	DMember(bool)                                      IsBoostingWithNoPassenger                                   OFFSET(get<bool>, {0x943, 1, 0, 0})
	DMember(int32_t)                                   MotorcycleGear                                              OFFSET(get<int32_t>, {0x944, 4, 0, 0})
	DMember(int32_t)                                   CurrentGear                                                 OFFSET(get<int32_t>, {0x948, 4, 0, 0})
	DMember(int32_t)                                   PreviousGear                                                OFFSET(get<int32_t>, {0x94C, 4, 0, 0})
	DMember(bool)                                      IsChangingGear                                              OFFSET(get<bool>, {0x950, 1, 0, 0})
	DMember(float)                                     SuperSlideBlendAlpha                                        OFFSET(get<float>, {0x954, 4, 0, 0})
	DMember(float)                                     SuperSlideBlendStart                                        OFFSET(get<float>, {0x958, 4, 0, 0})
	DMember(float)                                     SuperSlideBlendEnd                                          OFFSET(get<float>, {0x95C, 4, 0, 0})
	DMember(bool)                                      IsSuperSliding                                              OFFSET(get<bool>, {0x960, 1, 0, 0})
};

/// Class /Script/SportbikeRuntime.FortSportbikeVehicle
/// Size: 0x0010 (0x002400 - 0x002410)
class AFortSportbikeVehicle : public AFortMotorcycleVehicle
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 9232;

public:
};

/// Class /Script/SportbikeRuntime.FortSportbikeVehicleConfigs
/// Size: 0x0000 (0x000C00 - 0x000C00)
class UFortSportbikeVehicleConfigs : public UFortMotorcycleVehicleConfigs
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3072;

public:
};

