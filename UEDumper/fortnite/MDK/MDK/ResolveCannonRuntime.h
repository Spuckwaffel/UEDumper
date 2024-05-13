
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame

/// Class /Script/ResolveCannonRuntime.FortVehicleAnimInstance_MountedCannon
/// Size: 0x0008 (0x000638 - 0x000640)
class UFortVehicleAnimInstance_MountedCannon : public UFortMountedTurretAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1600;

public:
	DMember(float)                                     AimingYawLastFrame                                          OFFSET(get<float>, {0x638, 4, 0, 0})
	DMember(float)                                     MinTimeStepForInterpolatingTurnRate                         OFFSET(get<float>, {0x63C, 4, 0, 0})
};

