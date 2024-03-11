
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: AudioMotorSim
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/AudioMotorSimStandardComponents.BoostMotorSimComponent
/// Size: 0x00A8 (0x0000B0 - 0x000158)
class UBoostMotorSimComponent : public UAudioMotorSimComponent
{ 
public:
	float                                              ThrottleScale;                                              // 0x00B0   (0x0004)  
	float                                              InterpExp;                                                  // 0x00B4   (0x0004)  
	float                                              InterpTime;                                                 // 0x00B8   (0x0004)  
	bool                                               ScaleThrottleWithBoostStrength;                             // 0x00BC   (0x0001)  
	bool                                               bModifyPitch;                                               // 0x00BD   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x00BE   (0x0002)  MISSED
	float                                              PitchModifierInterpSpeed;                                   // 0x00C0   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x00C4   (0x0004)  MISSED
	FRuntimeFloatCurve                                 BoostToPitchCurve;                                          // 0x00C8   (0x0088)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x0150   (0x0008)  MISSED
};

/// Class /Script/AudioMotorSimStandardComponents.MotorPhysicsSimComponent
/// Size: 0x0068 (0x0000B0 - 0x000118)
class UMotorPhysicsSimComponent : public UAudioMotorSimComponent
{ 
public:
	float                                              Weight;                                                     // 0x00B0   (0x0004)  
	float                                              EngineTorque;                                               // 0x00B4   (0x0004)  
	float                                              BrakingHorsePower;                                          // 0x00B8   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00BC   (0x0004)  MISSED
	TArray<float>                                      GearRatios;                                                 // 0x00C0   (0x0010)  
	float                                              ClutchedGearRatio;                                          // 0x00D0   (0x0004)  
	bool                                               bUseInfiniteGears;                                          // 0x00D4   (0x0001)  
	bool                                               bAlwaysDownshiftToZerothGear;                               // 0x00D5   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x00D6   (0x0002)  MISSED
	float                                              InfiniteGearRatio;                                          // 0x00D8   (0x0004)  
	float                                              UpShiftMaxRpm;                                              // 0x00DC   (0x0004)  
	float                                              DownShiftStartRpm;                                          // 0x00E0   (0x0004)  
	float                                              ClutchedForceModifier;                                      // 0x00E4   (0x0004)  
	float                                              ClutchedDecelScale;                                         // 0x00E8   (0x0004)  
	float                                              EngineGearRatio;                                            // 0x00EC   (0x0004)  
	float                                              EngineFriction;                                             // 0x00F0   (0x0004)  
	float                                              GroundFriction;                                             // 0x00F4   (0x0004)  
	float                                              WindResistancePerVelocity;                                  // 0x00F8   (0x0004)  
	float                                              ThrottleInterpolationTime;                                  // 0x00FC   (0x0004)  
	float                                              RpmInterpSpeed;                                             // 0x0100   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x0104   (0x0004)  MISSED
	SDK_UNDEFINED(16,11826) /* FMulticastInlineDelegate */ __um(OnGearChangedEvent);                               // 0x0108   (0x0010)  
};

/// Class /Script/AudioMotorSimStandardComponents.ResistanceMotorSimComponent
/// Size: 0x0090 (0x0000B0 - 0x000140)
class UResistanceMotorSimComponent : public UAudioMotorSimComponent
{ 
public:
	float                                              UpSpeedMaxFriction;                                         // 0x00B0   (0x0004)  
	float                                              MinSpeed;                                                   // 0x00B4   (0x0004)  
	FRuntimeFloatCurve                                 SideSpeedFrictionCurve;                                     // 0x00B8   (0x0088)  
};

/// Class /Script/AudioMotorSimStandardComponents.ReverseMotorSimComponent
/// Size: 0x0008 (0x0000B0 - 0x0000B8)
class UReverseMotorSimComponent : public UAudioMotorSimComponent
{ 
public:
	float                                              ReverseEngineResistanceModifier;                            // 0x00B0   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00B4   (0x0004)  MISSED
};

/// Class /Script/AudioMotorSimStandardComponents.RevLimiterMotorSimComponent
/// Size: 0x0048 (0x0000B0 - 0x0000F8)
class URevLimiterMotorSimComponent : public UAudioMotorSimComponent
{ 
public:
	float                                              LimitTime;                                                  // 0x00B0   (0x0004)  
	float                                              DecelScale;                                                 // 0x00B4   (0x0004)  
	float                                              AirMaxThrottleTime;                                         // 0x00B8   (0x0004)  
	float                                              SideSpeedThreshold;                                         // 0x00BC   (0x0004)  
	float                                              LimiterMaxRpm;                                              // 0x00C0   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00C4   (0x0004)  MISSED
	SDK_UNDEFINED(16,11827) /* FMulticastInlineDelegate */ __um(OnRevLimiterHit);                                  // 0x00C8   (0x0010)  
	SDK_UNDEFINED(16,11828) /* FMulticastInlineDelegate */ __um(OnRevLimiterStateChanged);                         // 0x00D8   (0x0010)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x00E8   (0x0010)  MISSED
};

/// Struct /Script/AudioMotorSimStandardComponents.MotorSimGearCurve
/// Size: 0x0090 (0x000000 - 0x000090)
struct FMotorSimGearCurve
{ 
	FRuntimeFloatCurve                                 RpmCurve;                                                   // 0x0000   (0x0088)  
	float                                              SpeedTopThreshold;                                          // 0x0088   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x008C   (0x0004)  MISSED
};

/// Class /Script/AudioMotorSimStandardComponents.RpmCurveMotorSimComponent
/// Size: 0x0038 (0x0000B0 - 0x0000E8)
class URpmCurveMotorSimComponent : public UAudioMotorSimComponent
{ 
public:
	TArray<FMotorSimGearCurve>                         Gears;                                                      // 0x00B0   (0x0010)  
	float                                              InterpSpeed;                                                // 0x00C0   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00C4   (0x0004)  MISSED
	SDK_UNDEFINED(16,11829) /* FMulticastInlineDelegate */ __um(OnUpShift);                                        // 0x00C8   (0x0010)  
	SDK_UNDEFINED(16,11830) /* FMulticastInlineDelegate */ __um(OnDownShift);                                      // 0x00D8   (0x0010)  
};

/// Class /Script/AudioMotorSimStandardComponents.ThrottleStateMotorSimComponent
/// Size: 0x0040 (0x0000B0 - 0x0000F0)
class UThrottleStateMotorSimComponent : public UAudioMotorSimComponent
{ 
public:
	SDK_UNDEFINED(16,11831) /* FMulticastInlineDelegate */ __um(OnThrottleEngaged);                                // 0x00B0   (0x0010)  
	SDK_UNDEFINED(16,11832) /* FMulticastInlineDelegate */ __um(OnThrottleReleased);                               // 0x00C0   (0x0010)  
	SDK_UNDEFINED(16,11833) /* FMulticastInlineDelegate */ __um(OnEngineBlowoff);                                  // 0x00D0   (0x0010)  
	float                                              BlowoffMinThrottleTime;                                     // 0x00E0   (0x0004)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x00E4   (0x000C)  MISSED
};

/// Class /Script/AudioMotorSimStandardComponents.VelocitySyncMotorSimComponent
/// Size: 0x00A8 (0x0000B0 - 0x000158)
class UVelocitySyncMotorSimComponent : public UAudioMotorSimComponent
{ 
public:
	float                                              NoThrottleTime;                                             // 0x00B0   (0x0004)  
	float                                              SpeedThreshold;                                             // 0x00B4   (0x0004)  
	FRuntimeFloatCurve                                 SpeedToRpmCurve;                                            // 0x00B8   (0x0088)  
	float                                              InterpSpeed;                                                // 0x0140   (0x0004)  
	float                                              InterpTime;                                                 // 0x0144   (0x0004)  
	float                                              FirstGearThrottleThreshold;                                 // 0x0148   (0x0004)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x014C   (0x000C)  MISSED
};

