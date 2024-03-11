
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: ClothingSystemRuntimeCommon
/// dependency: ClothingSystemRuntimeInterface
/// dependency: CoreUObject

/// Enum /Script/ChaosCloth.EChaosWeightMapTarget
/// Size: 0x16
enum class EChaosWeightMapTarget : uint8_t
{
	EChaosWeightMapTarget__None                                                      = 0,
	EChaosWeightMapTarget__MaxDistance                                               = 1,
	EChaosWeightMapTarget__BackstopDistance                                          = 2,
	EChaosWeightMapTarget__BackstopRadius                                            = 3,
	EChaosWeightMapTarget__AnimDriveStiffness                                        = 4,
	EChaosWeightMapTarget__AnimDriveDamping                                          = 5,
	EChaosWeightMapTarget__TetherStiffness                                           = 6,
	EChaosWeightMapTarget__TetherScale                                               = 7,
	EChaosWeightMapTarget__Drag                                                      = 8,
	EChaosWeightMapTarget__Lift                                                      = 9,
	EChaosWeightMapTarget__EdgeStiffness                                             = 10,
	EChaosWeightMapTarget__BendingStiffness                                          = 11,
	EChaosWeightMapTarget__AreaStiffness                                             = 12,
	EChaosWeightMapTarget__BucklingStiffness                                         = 13,
	EChaosWeightMapTarget__Pressure                                                  = 14,
	EChaosWeightMapTarget__EChaosWeightMapTarget_MAX                                 = 15
};

/// Enum /Script/ChaosCloth.EChaosClothTetherMode
/// Size: 0x05
enum class EChaosClothTetherMode : uint8_t
{
	EChaosClothTetherMode__FastTetherFastLength                                      = 0,
	EChaosClothTetherMode__AccurateTetherFastLength                                  = 1,
	EChaosClothTetherMode__AccurateTetherAccurateLength                              = 2,
	EChaosClothTetherMode__MaxChaosClothTetherMode                                   = 3,
	EChaosClothTetherMode__EChaosClothTetherMode_MAX                                 = 4
};

/// Struct /Script/ChaosCloth.ChaosClothWeightedValue
/// Size: 0x0008 (0x000000 - 0x000008)
struct FChaosClothWeightedValue
{ 
	float                                              Low;                                                        // 0x0000   (0x0004)  
	float                                              High;                                                       // 0x0004   (0x0004)  
};

/// Class /Script/ChaosCloth.ChaosClothConfig
/// Size: 0x0100 (0x000028 - 0x000128)
class UChaosClothConfig : public UClothConfigCommon
{ 
public:
	EClothMassMode                                     MassMode;                                                   // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0029   (0x0003)  MISSED
	float                                              UniformMass;                                                // 0x002C   (0x0004)  
	float                                              TotalMass;                                                  // 0x0030   (0x0004)  
	float                                              Density;                                                    // 0x0034   (0x0004)  
	float                                              MinPerParticleMass;                                         // 0x0038   (0x0004)  
	FChaosClothWeightedValue                           EdgeStiffnessWeighted;                                      // 0x003C   (0x0008)  
	FChaosClothWeightedValue                           BendingStiffnessWeighted;                                   // 0x0044   (0x0008)  
	bool                                               bUseBendingElements;                                        // 0x004C   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x004D   (0x0003)  MISSED
	float                                              BucklingRatio;                                              // 0x0050   (0x0004)  
	FChaosClothWeightedValue                           BucklingStiffnessWeighted;                                  // 0x0054   (0x0008)  
	FChaosClothWeightedValue                           AreaStiffnessWeighted;                                      // 0x005C   (0x0008)  
	float                                              VolumeStiffness;                                            // 0x0064   (0x0004)  
	FChaosClothWeightedValue                           TetherStiffness;                                            // 0x0068   (0x0008)  
	FChaosClothWeightedValue                           TetherScale;                                                // 0x0070   (0x0008)  
	bool                                               bUseGeodesicDistance;                                       // 0x0078   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0079   (0x0003)  MISSED
	float                                              ShapeTargetStiffness;                                       // 0x007C   (0x0004)  
	float                                              CollisionThickness;                                         // 0x0080   (0x0004)  
	float                                              FrictionCoefficient;                                        // 0x0084   (0x0004)  
	bool                                               bUseCCD;                                                    // 0x0088   (0x0001)  
	bool                                               bUseSelfCollisions;                                         // 0x0089   (0x0001)  
	unsigned char                                      UnknownData03_5[0x2];                                       // 0x008A   (0x0002)  MISSED
	float                                              SelfCollisionThickness;                                     // 0x008C   (0x0004)  
	float                                              SelfCollisionFriction;                                      // 0x0090   (0x0004)  
	bool                                               bUseSelfIntersections;                                      // 0x0094   (0x0001)  
	bool                                               bUseSelfCollisionSpheres;                                   // 0x0095   (0x0001)  
	unsigned char                                      UnknownData04_5[0x2];                                       // 0x0096   (0x0002)  MISSED
	float                                              SelfCollisionSphereRadius;                                  // 0x0098   (0x0004)  
	float                                              SelfCollisionSphereStiffness;                               // 0x009C   (0x0004)  
	float                                              SelfCollisionSphereRadiusCullMultiplier;                    // 0x00A0   (0x0004)  
	bool                                               bUseLegacyBackstop;                                         // 0x00A4   (0x0001)  
	unsigned char                                      UnknownData05_5[0x3];                                       // 0x00A5   (0x0003)  MISSED
	float                                              DampingCoefficient;                                         // 0x00A8   (0x0004)  
	float                                              LocalDampingCoefficient;                                    // 0x00AC   (0x0004)  
	bool                                               bUsePointBasedWindModel;                                    // 0x00B0   (0x0001)  
	unsigned char                                      UnknownData06_5[0x3];                                       // 0x00B1   (0x0003)  MISSED
	FChaosClothWeightedValue                           Drag;                                                       // 0x00B4   (0x0008)  
	FChaosClothWeightedValue                           Lift;                                                       // 0x00BC   (0x0008)  
	bool                                               bUseGravityOverride;                                        // 0x00C4   (0x0001)  
	unsigned char                                      UnknownData07_5[0x3];                                       // 0x00C5   (0x0003)  MISSED
	float                                              GravityScale;                                               // 0x00C8   (0x0004)  
	unsigned char                                      UnknownData08_5[0x4];                                       // 0x00CC   (0x0004)  MISSED
	FVector                                            Gravity;                                                    // 0x00D0   (0x0018)  
	FChaosClothWeightedValue                           Pressure;                                                   // 0x00E8   (0x0008)  
	FChaosClothWeightedValue                           AnimDriveStiffness;                                         // 0x00F0   (0x0008)  
	FChaosClothWeightedValue                           AnimDriveDamping;                                           // 0x00F8   (0x0008)  
	FVector                                            LinearVelocityScale;                                        // 0x0100   (0x0018)  
	float                                              AngularVelocityScale;                                       // 0x0118   (0x0004)  
	float                                              FictitiousAngularScale;                                     // 0x011C   (0x0004)  
	bool                                               bUseTetrahedralConstraints;                                 // 0x0120   (0x0001)  
	bool                                               bUseThinShellVolumeConstraints;                             // 0x0121   (0x0001)  
	bool                                               bUseContinuousCollisionDetection;                           // 0x0122   (0x0001)  
	unsigned char                                      UnknownData09_6[0x5];                                       // 0x0123   (0x0005)  MISSED
};

/// Class /Script/ChaosCloth.ChaosClothSharedSimConfig
/// Size: 0x0010 (0x000028 - 0x000038)
class UChaosClothSharedSimConfig : public UClothSharedConfigCommon
{ 
public:
	int32_t                                            IterationCount;                                             // 0x0028   (0x0004)  
	int32_t                                            MaxIterationCount;                                          // 0x002C   (0x0004)  
	int32_t                                            SubdivisionCount;                                           // 0x0030   (0x0004)  
	bool                                               bUseLocalSpaceSimulation;                                   // 0x0034   (0x0001)  
	bool                                               bUseXPBDConstraints;                                        // 0x0035   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0036   (0x0002)  MISSED
};

/// Class /Script/ChaosCloth.ChaosClothingSimulationFactory
/// Size: 0x0000 (0x000028 - 0x000028)
class UChaosClothingSimulationFactory : public UClothingSimulationFactory
{ 
public:
};

/// Class /Script/ChaosCloth.ChaosClothingInteractor
/// Size: 0x0020 (0x000030 - 0x000050)
class UChaosClothingInteractor : public UClothingInteractor
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0030   (0x0020)  MISSED


	/// Functions
	// Function /Script/ChaosCloth.ChaosClothingInteractor.SetWind
	// void SetWind(FVector2D Drag, FVector2D Lift, float AirDensity, FVector WindVelocity);                                 // [0x335aef4] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ChaosCloth.ChaosClothingInteractor.SetVelocityScale
	// void SetVelocityScale(FVector LinearVelocityScale, float AngularVelocityScale, float FictitiousAngularScale);         // [0x3359c0c] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ChaosCloth.ChaosClothingInteractor.SetPressure
	// void SetPressure(FVector2D Pressure);                                                                                 // [0xa371d24] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ChaosCloth.ChaosClothingInteractor.SetMaterialLinear
	// void SetMaterialLinear(float EdgeStiffness, float BendingStiffness, float AreaStiffness);                             // [0xa371c28] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/ChaosCloth.ChaosClothingInteractor.SetMaterial
	// void SetMaterial(FVector2D EdgeStiffness, FVector2D BendingStiffness, FVector2D AreaStiffness);                       // [0x335acb4] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ChaosCloth.ChaosClothingInteractor.SetLongRangeAttachmentLinear
	// void SetLongRangeAttachmentLinear(float TetherStiffness, float TetherScale);                                          // [0xa371b64] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/ChaosCloth.ChaosClothingInteractor.SetLongRangeAttachment
	// void SetLongRangeAttachment(FVector2D TetherStiffness, FVector2D TetherScale);                                        // [0x335a1fc] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ChaosCloth.ChaosClothingInteractor.SetGravity
	// void SetGravity(float GravityScale, bool bIsGravityOverridden, FVector GravityOverride);                              // [0x3359a80] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ChaosCloth.ChaosClothingInteractor.SetDamping
	// void SetDamping(float DampingCoefficient, float LocalDampingCoefficient);                                             // [0x335a138] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/ChaosCloth.ChaosClothingInteractor.SetCollision
	// void SetCollision(float CollisionThickness, float FrictionCoefficient, bool bUseCCD, float SelfCollisionThickness);   // [0x3359fcc] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/ChaosCloth.ChaosClothingInteractor.SetBackstop
	// void SetBackstop(bool bEnabled);                                                                                      // [0xa371ae4] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/ChaosCloth.ChaosClothingInteractor.SetAnimDriveLinear
	// void SetAnimDriveLinear(float AnimDriveStiffness);                                                                    // [0xa371a64] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/ChaosCloth.ChaosClothingInteractor.SetAnimDrive
	// void SetAnimDrive(FVector2D AnimDriveStiffness, FVector2D AnimDriveDamping);                                          // [0x3359e2c] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ChaosCloth.ChaosClothingInteractor.SetAerodynamics
	// void SetAerodynamics(float DragCoefficient, float LiftCoefficient, FVector WindVelocity);                             // [0xa3718b4] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ChaosCloth.ChaosClothingInteractor.ResetAndTeleport
	// void ResetAndTeleport(bool bReset, bool bTeleport);                                                                   // [0xa3717f0] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/ChaosCloth.ChaosClothingSimulationInteractor
/// Size: 0x0020 (0x000090 - 0x0000B0)
class UChaosClothingSimulationInteractor : public UClothingSimulationInteractor
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0090   (0x0020)  MISSED
};

