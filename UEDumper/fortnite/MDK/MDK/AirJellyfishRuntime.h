
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame

/// Class /Script/AirJellyfishRuntime.FortAirJellyfishAnimInstance
/// Size: 0x0020 (0x000560 - 0x000580)
class UFortAirJellyfishAnimInstance : public UFortAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1408;

public:
	DMember(float)                                     RotatorLerpRate                                             OFFSET(get<float>, {0x558, 4, 0, 0})
	DMember(float)                                     VelocityDirectionScalar                                     OFFSET(get<float>, {0x55C, 4, 0, 0})
	SMember(FRotator)                                  RootRotation                                                OFFSET(getStruct<T>, {0x560, 24, 0, 0})
};

