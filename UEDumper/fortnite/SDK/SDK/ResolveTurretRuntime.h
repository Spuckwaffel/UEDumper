
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame

/// Class /Script/ResolveTurretRuntime.FortPlayerAnimInstance_AntiVehMountedTurret
/// Size: 0x0040 (0x001620 - 0x001660)
class UFortPlayerAnimInstance_AntiVehMountedTurret : public UFortPlayerAnimInstanceProxy
{ 
public:
	FVector                                            HandAttachL;                                                // 0x1620   (0x0018)  
	FVector                                            HandAttachR;                                                // 0x1638   (0x0018)  
	FName                                              HandAttachBoneNameL;                                        // 0x1650   (0x0004)  
	FName                                              HandAttachBoneNameR;                                        // 0x1654   (0x0004)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x1658   (0x0008)  MISSED
};

/// Class /Script/ResolveTurretRuntime.FortVehicleAnimInstance_AntiVehMountedTurret
/// Size: 0x0000 (0x000640 - 0x000640)
class UFortVehicleAnimInstance_AntiVehMountedTurret : public UFortMountedTurretAnimInstance
{ 
public:
};

/// Class /Script/ResolveTurretRuntime.FortVehicleAnimInstance_SevenMountedTurret
/// Size: 0x0000 (0x000640 - 0x000640)
class UFortVehicleAnimInstance_SevenMountedTurret : public UFortMountedTurretAnimInstance
{ 
public:
};

