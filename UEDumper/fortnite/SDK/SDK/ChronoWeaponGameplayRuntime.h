
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/ChronoWeaponGameplayRuntime.AnimInstance_ChronoPanRifle
/// Size: 0x0010 (0x000370 - 0x000380)
class UAnimInstance_ChronoPanRifle : public UAnimInstance
{ 
public:
	bool                                               bIsFiring;                                                  // 0x0368   (0x0001)  
	bool                                               bIsReloading;                                               // 0x0369   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x036A   (0x0002)  MISSED
	float                                              MagRotationValue;                                           // 0x036C   (0x0004)  
	FName                                              ResetMagRotationCurveName;                                  // 0x0370   (0x0004)  
	unsigned char                                      UnknownData01_6[0xC];                                       // 0x0374   (0x000C)  MISSED
};

