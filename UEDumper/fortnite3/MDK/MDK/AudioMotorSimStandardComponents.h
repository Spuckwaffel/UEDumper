
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: AudioMotorSim
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/AudioMotorSimStandardComponents.BoostMotorSimComponent
/// Size: 0x00A8 (0x0000B0 - 0x000158)
class UBoostMotorSimComponent : public UAudioMotorSimComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 344;

public:
	DMember(float)                                     ThrottleScale                                               OFFSET(get<float>, {0xB0, 4, 0, 0})
	DMember(float)                                     InterpExp                                                   OFFSET(get<float>, {0xB4, 4, 0, 0})
	DMember(float)                                     InterpTime                                                  OFFSET(get<float>, {0xB8, 4, 0, 0})
	DMember(bool)                                      ScaleThrottleWithBoostStrength                              OFFSET(get<bool>, {0xBC, 1, 0, 0})
	DMember(bool)                                      bModifyPitch                                                OFFSET(get<bool>, {0xBD, 1, 0, 0})
	DMember(float)                                     PitchModifierInterpSpeed                                    OFFSET(get<float>, {0xC0, 4, 0, 0})
	SMember(FRuntimeFloatCurve)                        BoostToPitchCurve                                           OFFSET(getStruct<T>, {0xC8, 136, 0, 0})
};

/// Class /Script/AudioMotorSimStandardComponents.MotorPhysicsSimComponent
/// Size: 0x0068 (0x0000B0 - 0x000118)
class UMotorPhysicsSimComponent : public UAudioMotorSimComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 280;

public:
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0xB0, 4, 0, 0})
	DMember(float)                                     EngineTorque                                                OFFSET(get<float>, {0xB4, 4, 0, 0})
	DMember(float)                                     BrakingHorsePower                                           OFFSET(get<float>, {0xB8, 4, 0, 0})
	CMember(TArray<float>)                             GearRatios                                                  OFFSET(get<T>, {0xC0, 16, 0, 0})
	DMember(float)                                     ClutchedGearRatio                                           OFFSET(get<float>, {0xD0, 4, 0, 0})
	DMember(bool)                                      bUseInfiniteGears                                           OFFSET(get<bool>, {0xD4, 1, 0, 0})
	DMember(bool)                                      bAlwaysDownshiftToZerothGear                                OFFSET(get<bool>, {0xD5, 1, 0, 0})
	DMember(float)                                     InfiniteGearRatio                                           OFFSET(get<float>, {0xD8, 4, 0, 0})
	DMember(float)                                     UpShiftMaxRpm                                               OFFSET(get<float>, {0xDC, 4, 0, 0})
	DMember(float)                                     DownShiftStartRpm                                           OFFSET(get<float>, {0xE0, 4, 0, 0})
	DMember(float)                                     ClutchedForceModifier                                       OFFSET(get<float>, {0xE4, 4, 0, 0})
	DMember(float)                                     ClutchedDecelScale                                          OFFSET(get<float>, {0xE8, 4, 0, 0})
	DMember(float)                                     EngineGearRatio                                             OFFSET(get<float>, {0xEC, 4, 0, 0})
	DMember(float)                                     EngineFriction                                              OFFSET(get<float>, {0xF0, 4, 0, 0})
	DMember(float)                                     GroundFriction                                              OFFSET(get<float>, {0xF4, 4, 0, 0})
	DMember(float)                                     WindResistancePerVelocity                                   OFFSET(get<float>, {0xF8, 4, 0, 0})
	DMember(float)                                     ThrottleInterpolationTime                                   OFFSET(get<float>, {0xFC, 4, 0, 0})
	DMember(float)                                     RpmInterpSpeed                                              OFFSET(get<float>, {0x100, 4, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnGearChangedEvent                                          OFFSET(getStruct<T>, {0x108, 16, 0, 0})
};

/// Class /Script/AudioMotorSimStandardComponents.ResistanceMotorSimComponent
/// Size: 0x0090 (0x0000B0 - 0x000140)
class UResistanceMotorSimComponent : public UAudioMotorSimComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
	DMember(float)                                     UpSpeedMaxFriction                                          OFFSET(get<float>, {0xB0, 4, 0, 0})
	DMember(float)                                     MinSpeed                                                    OFFSET(get<float>, {0xB4, 4, 0, 0})
	SMember(FRuntimeFloatCurve)                        SideSpeedFrictionCurve                                      OFFSET(getStruct<T>, {0xB8, 136, 0, 0})
};

/// Class /Script/AudioMotorSimStandardComponents.ReverseMotorSimComponent
/// Size: 0x0008 (0x0000B0 - 0x0000B8)
class UReverseMotorSimComponent : public UAudioMotorSimComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	DMember(float)                                     ReverseEngineResistanceModifier                             OFFSET(get<float>, {0xB0, 4, 0, 0})
};

/// Class /Script/AudioMotorSimStandardComponents.RevLimiterMotorSimComponent
/// Size: 0x0048 (0x0000B0 - 0x0000F8)
class URevLimiterMotorSimComponent : public UAudioMotorSimComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
	DMember(float)                                     LimitTime                                                   OFFSET(get<float>, {0xB0, 4, 0, 0})
	DMember(float)                                     DecelScale                                                  OFFSET(get<float>, {0xB4, 4, 0, 0})
	DMember(float)                                     AirMaxThrottleTime                                          OFFSET(get<float>, {0xB8, 4, 0, 0})
	DMember(float)                                     SideSpeedThreshold                                          OFFSET(get<float>, {0xBC, 4, 0, 0})
	DMember(float)                                     LimiterMaxRpm                                               OFFSET(get<float>, {0xC0, 4, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnRevLimiterHit                                             OFFSET(getStruct<T>, {0xC8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnRevLimiterStateChanged                                    OFFSET(getStruct<T>, {0xD8, 16, 0, 0})
};

/// Class /Script/AudioMotorSimStandardComponents.RpmCurveMotorSimComponent
/// Size: 0x0038 (0x0000B0 - 0x0000E8)
class URpmCurveMotorSimComponent : public UAudioMotorSimComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
	CMember(TArray<FMotorSimGearCurve>)                Gears                                                       OFFSET(get<T>, {0xB0, 16, 0, 0})
	DMember(float)                                     InterpSpeed                                                 OFFSET(get<float>, {0xC0, 4, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnUpShift                                                   OFFSET(getStruct<T>, {0xC8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnDownShift                                                 OFFSET(getStruct<T>, {0xD8, 16, 0, 0})
};

/// Class /Script/AudioMotorSimStandardComponents.ThrottleStateMotorSimComponent
/// Size: 0x0040 (0x0000B0 - 0x0000F0)
class UThrottleStateMotorSimComponent : public UAudioMotorSimComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	SMember(FMulticastInlineDelegate)                  OnThrottleEngaged                                           OFFSET(getStruct<T>, {0xB0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnThrottleReleased                                          OFFSET(getStruct<T>, {0xC0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnEngineBlowoff                                             OFFSET(getStruct<T>, {0xD0, 16, 0, 0})
	DMember(float)                                     BlowoffMinThrottleTime                                      OFFSET(get<float>, {0xE0, 4, 0, 0})
};

/// Class /Script/AudioMotorSimStandardComponents.VelocitySyncMotorSimComponent
/// Size: 0x00A8 (0x0000B0 - 0x000158)
class UVelocitySyncMotorSimComponent : public UAudioMotorSimComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 344;

public:
	DMember(float)                                     NoThrottleTime                                              OFFSET(get<float>, {0xB0, 4, 0, 0})
	DMember(float)                                     SpeedThreshold                                              OFFSET(get<float>, {0xB4, 4, 0, 0})
	SMember(FRuntimeFloatCurve)                        SpeedToRpmCurve                                             OFFSET(getStruct<T>, {0xB8, 136, 0, 0})
	DMember(float)                                     InterpSpeed                                                 OFFSET(get<float>, {0x140, 4, 0, 0})
	DMember(float)                                     InterpTime                                                  OFFSET(get<float>, {0x144, 4, 0, 0})
	DMember(float)                                     FirstGearThrottleThreshold                                  OFFSET(get<float>, {0x148, 4, 0, 0})
};

/// Struct /Script/AudioMotorSimStandardComponents.MotorSimGearCurve
/// Size: 0x0090 (0x000000 - 0x000090)
class FMotorSimGearCurve : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FRuntimeFloatCurve)                        RpmCurve                                                    OFFSET(getStruct<T>, {0x0, 136, 0, 0})
	DMember(float)                                     SpeedTopThreshold                                           OFFSET(get<float>, {0x88, 4, 0, 0})
};

