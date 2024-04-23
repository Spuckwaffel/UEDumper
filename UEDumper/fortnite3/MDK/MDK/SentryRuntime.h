
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame

/// Class /Script/SentryRuntime.CreativeSentryAnimInstance
/// Size: 0x0020 (0x0005B0 - 0x0005D0)
class UCreativeSentryAnimInstance : public UFortDefenderAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1488;

public:
	DMember(float)                                     RotateAimAnimationPitch                                     OFFSET(get<float>, {0x5B0, 4, 0, 0})
	DMember(float)                                     CounterRotateAimAnimationPitch                              OFFSET(get<float>, {0x5B4, 4, 0, 0})
	DMember(bool)                                      bIsRelaxedLevel1OrNotTargeting                              OFFSET(get<bool>, {0x5B8, 1, 0, 0})
	DMember(float)                                     RightHandIKAlpha                                            OFFSET(get<float>, {0x5BC, 4, 0, 0})
	DMember(float)                                     OneMinusLeftHandFK                                          OFFSET(get<float>, {0x5C0, 4, 0, 0})
	DMember(float)                                     LeftHandIKAlpha                                             OFFSET(get<float>, {0x5C4, 4, 0, 0})
	DMember(float)                                     RetargetHandIKBonesToFKPositionWeight                       OFFSET(get<float>, {0x5C8, 4, 0, 0})
};

