
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: MassEntity
/// dependency: MassSpawner

/// Class /Script/MassMovement.MassApplyMovementProcessor
/// Size: 0x02A0 (0x0000C0 - 0x000360)
class UMassApplyMovementProcessor : public UMassProcessor
{ 
public:
	unsigned char                                      UnknownData00_1[0x2A0];                                     // 0x00C0   (0x02A0)  MISSED
};

/// Struct /Script/MassMovement.MassMovementStyle
/// Size: 0x0014 (0x000000 - 0x000014)
struct FMassMovementStyle
{ 
	FName                                              Name;                                                       // 0x0000   (0x0004)  
	FGuid                                              ID;                                                         // 0x0004   (0x0010)  
};

/// Class /Script/MassMovement.MassMovementSettings
/// Size: 0x0010 (0x000028 - 0x000038)
class UMassMovementSettings : public UMassModuleSettings
{ 
public:
	TArray<FMassMovementStyle>                         MovementStyles;                                             // 0x0028   (0x0010)  
};

/// Struct /Script/MassMovement.MassMovementStyleRef
/// Size: 0x0014 (0x000000 - 0x000014)
struct FMassMovementStyleRef
{ 
	FName                                              Name;                                                       // 0x0000   (0x0004)  
	FGuid                                              ID;                                                         // 0x0004   (0x0010)  
};

/// Struct /Script/MassMovement.MassMovementStyleSpeedParameters
/// Size: 0x0010 (0x000000 - 0x000010)
struct FMassMovementStyleSpeedParameters
{ 
	float                                              Speed;                                                      // 0x0000   (0x0004)  
	float                                              Variance;                                                   // 0x0004   (0x0004)  
	float                                              Probability;                                                // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
};

/// Struct /Script/MassMovement.MassMovementStyleParameters
/// Size: 0x0028 (0x000000 - 0x000028)
struct FMassMovementStyleParameters
{ 
	FMassMovementStyleRef                              style;                                                      // 0x0000   (0x0014)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0014   (0x0004)  MISSED
	TArray<FMassMovementStyleSpeedParameters>          DesiredSpeeds;                                              // 0x0018   (0x0010)  
};

/// Struct /Script/MassMovement.MassMovementParameters
/// Size: 0x0027 (0x000001 - 0x000028)
struct FMassMovementParameters : FMassSharedFragment
{ 
	float                                              MaxSpeed;                                                   // 0x0000   (0x0004)  
	float                                              MaxAcceleration;                                            // 0x0004   (0x0004)  
	float                                              DefaultDesiredSpeed;                                        // 0x0008   (0x0004)  
	float                                              DefaultDesiredSpeedVariance;                                // 0x000C   (0x0004)  
	float                                              HeightSmoothingTime;                                        // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0014   (0x0004)  MISSED
	TArray<FMassMovementStyleParameters>               MovementStyles;                                             // 0x0018   (0x0010)  
};

/// Class /Script/MassMovement.MassMovementTrait
/// Size: 0x0028 (0x000028 - 0x000050)
class UMassMovementTrait : public UMassEntityTraitBase
{ 
public:
	FMassMovementParameters                            Movement;                                                   // 0x0028   (0x0028)  
};

/// Class /Script/MassMovement.MassSimpleMovementTrait
/// Size: 0x0000 (0x000028 - 0x000028)
class UMassSimpleMovementTrait : public UMassEntityTraitBase
{ 
public:
};

/// Class /Script/MassMovement.MassSimpleMovementProcessor
/// Size: 0x02A0 (0x0000C0 - 0x000360)
class UMassSimpleMovementProcessor : public UMassProcessor
{ 
public:
	unsigned char                                      UnknownData00_1[0x2A0];                                     // 0x00C0   (0x02A0)  MISSED
};

/// Class /Script/MassMovement.MassVelocityRandomizerTrait
/// Size: 0x0010 (0x000028 - 0x000038)
class UMassVelocityRandomizerTrait : public UMassEntityTraitBase
{ 
public:
	float                                              MinSpeed;                                                   // 0x0028   (0x0004)  
	float                                              MaxSpeed;                                                   // 0x002C   (0x0004)  
	bool                                               bSetZComponent;                                             // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0031   (0x0007)  MISSED
};

/// Class /Script/MassMovement.MassRandomVelocityInitializer
/// Size: 0x02C8 (0x0000D8 - 0x0003A0)
class UMassRandomVelocityInitializer : public UMassObserverProcessor
{ 
public:
	unsigned char                                      UnknownData00_3[0x2A8];                                     // 0x00D8   (0x02A8)  MISSED
	float                                              MinSpeed;                                                   // 0x0380   (0x0004)  
	float                                              MaxSpeed;                                                   // 0x0384   (0x0004)  
	bool                                               bSetZComponent;                                             // 0x0388   (0x0001)  
	unsigned char                                      UnknownData01_6[0x17];                                      // 0x0389   (0x0017)  MISSED
};

/// Struct /Script/MassMovement.MassVelocityFragment
/// Size: 0x0017 (0x000001 - 0x000018)
struct FMassVelocityFragment : FMassFragment
{ 
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0000   (0x0018)  MISSED
};

/// Struct /Script/MassMovement.MassForceFragment
/// Size: 0x0017 (0x000001 - 0x000018)
struct FMassForceFragment : FMassFragment
{ 
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0000   (0x0018)  MISSED
};

/// Struct /Script/MassMovement.MassSimpleMovementTag
/// Size: 0x0000 (0x000001 - 0x000001)
struct FMassSimpleMovementTag : FMassTag
{ 
};

