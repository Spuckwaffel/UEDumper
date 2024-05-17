
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/ChronoWeaponGameplayRuntime.AnimInstance_ChronoPanRifle
/// Size: 0x0018 (0x000368 - 0x000380)
class UAnimInstance_ChronoPanRifle : public UAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 896;

public:
	DMember(bool)                                      bIsFiring                                                   OFFSET(get<bool>, {0x368, 1, 0, 0})
	DMember(bool)                                      bIsReloading                                                OFFSET(get<bool>, {0x369, 1, 0, 0})
	DMember(float)                                     MagRotationValue                                            OFFSET(get<float>, {0x36C, 4, 0, 0})
	SMember(FName)                                     ResetMagRotationCurveName                                   OFFSET(getStruct<T>, {0x370, 4, 0, 0})
};

