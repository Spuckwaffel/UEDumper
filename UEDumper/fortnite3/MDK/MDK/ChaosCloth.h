
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: ClothingSystemRuntimeCommon
/// dependency: ClothingSystemRuntimeInterface
/// dependency: CoreUObject

/// Class /Script/ChaosCloth.ChaosClothConfig
/// Size: 0x0100 (0x000028 - 0x000128)
class UChaosClothConfig : public UClothConfigCommon
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
	CMember(EClothMassMode)                            MassMode                                                    OFFSET(get<T>, {0x28, 1, 0, 0})
	DMember(float)                                     UniformMass                                                 OFFSET(get<float>, {0x2C, 4, 0, 0})
	DMember(float)                                     TotalMass                                                   OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(float)                                     Density                                                     OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     MinPerParticleMass                                          OFFSET(get<float>, {0x38, 4, 0, 0})
	SMember(FChaosClothWeightedValue)                  EdgeStiffnessWeighted                                       OFFSET(getStruct<T>, {0x3C, 8, 0, 0})
	SMember(FChaosClothWeightedValue)                  BendingStiffnessWeighted                                    OFFSET(getStruct<T>, {0x44, 8, 0, 0})
	DMember(bool)                                      bUseBendingElements                                         OFFSET(get<bool>, {0x4C, 1, 0, 0})
	DMember(float)                                     BucklingRatio                                               OFFSET(get<float>, {0x50, 4, 0, 0})
	SMember(FChaosClothWeightedValue)                  BucklingStiffnessWeighted                                   OFFSET(getStruct<T>, {0x54, 8, 0, 0})
	SMember(FChaosClothWeightedValue)                  AreaStiffnessWeighted                                       OFFSET(getStruct<T>, {0x5C, 8, 0, 0})
	DMember(float)                                     VolumeStiffness                                             OFFSET(get<float>, {0x64, 4, 0, 0})
	SMember(FChaosClothWeightedValue)                  TetherStiffness                                             OFFSET(getStruct<T>, {0x68, 8, 0, 0})
	SMember(FChaosClothWeightedValue)                  TetherScale                                                 OFFSET(getStruct<T>, {0x70, 8, 0, 0})
	DMember(bool)                                      bUseGeodesicDistance                                        OFFSET(get<bool>, {0x78, 1, 0, 0})
	DMember(float)                                     ShapeTargetStiffness                                        OFFSET(get<float>, {0x7C, 4, 0, 0})
	DMember(float)                                     CollisionThickness                                          OFFSET(get<float>, {0x80, 4, 0, 0})
	DMember(float)                                     FrictionCoefficient                                         OFFSET(get<float>, {0x84, 4, 0, 0})
	DMember(bool)                                      bUseCCD                                                     OFFSET(get<bool>, {0x88, 1, 0, 0})
	DMember(bool)                                      bUseSelfCollisions                                          OFFSET(get<bool>, {0x89, 1, 0, 0})
	DMember(float)                                     SelfCollisionThickness                                      OFFSET(get<float>, {0x8C, 4, 0, 0})
	DMember(float)                                     SelfCollisionFriction                                       OFFSET(get<float>, {0x90, 4, 0, 0})
	DMember(bool)                                      bUseSelfIntersections                                       OFFSET(get<bool>, {0x94, 1, 0, 0})
	DMember(bool)                                      bUseSelfCollisionSpheres                                    OFFSET(get<bool>, {0x95, 1, 0, 0})
	DMember(float)                                     SelfCollisionSphereRadius                                   OFFSET(get<float>, {0x98, 4, 0, 0})
	DMember(float)                                     SelfCollisionSphereStiffness                                OFFSET(get<float>, {0x9C, 4, 0, 0})
	DMember(float)                                     SelfCollisionSphereRadiusCullMultiplier                     OFFSET(get<float>, {0xA0, 4, 0, 0})
	DMember(bool)                                      bUseLegacyBackstop                                          OFFSET(get<bool>, {0xA4, 1, 0, 0})
	DMember(float)                                     DampingCoefficient                                          OFFSET(get<float>, {0xA8, 4, 0, 0})
	DMember(float)                                     LocalDampingCoefficient                                     OFFSET(get<float>, {0xAC, 4, 0, 0})
	DMember(bool)                                      bUsePointBasedWindModel                                     OFFSET(get<bool>, {0xB0, 1, 0, 0})
	SMember(FChaosClothWeightedValue)                  Drag                                                        OFFSET(getStruct<T>, {0xB4, 8, 0, 0})
	SMember(FChaosClothWeightedValue)                  Lift                                                        OFFSET(getStruct<T>, {0xBC, 8, 0, 0})
	DMember(bool)                                      bUseGravityOverride                                         OFFSET(get<bool>, {0xC4, 1, 0, 0})
	DMember(float)                                     GravityScale                                                OFFSET(get<float>, {0xC8, 4, 0, 0})
	SMember(FVector)                                   Gravity                                                     OFFSET(getStruct<T>, {0xD0, 24, 0, 0})
	SMember(FChaosClothWeightedValue)                  Pressure                                                    OFFSET(getStruct<T>, {0xE8, 8, 0, 0})
	SMember(FChaosClothWeightedValue)                  AnimDriveStiffness                                          OFFSET(getStruct<T>, {0xF0, 8, 0, 0})
	SMember(FChaosClothWeightedValue)                  AnimDriveDamping                                            OFFSET(getStruct<T>, {0xF8, 8, 0, 0})
	SMember(FVector)                                   LinearVelocityScale                                         OFFSET(getStruct<T>, {0x100, 24, 0, 0})
	DMember(float)                                     AngularVelocityScale                                        OFFSET(get<float>, {0x118, 4, 0, 0})
	DMember(float)                                     FictitiousAngularScale                                      OFFSET(get<float>, {0x11C, 4, 0, 0})
	DMember(bool)                                      bUseTetrahedralConstraints                                  OFFSET(get<bool>, {0x120, 1, 0, 0})
	DMember(bool)                                      bUseThinShellVolumeConstraints                              OFFSET(get<bool>, {0x121, 1, 0, 0})
	DMember(bool)                                      bUseContinuousCollisionDetection                            OFFSET(get<bool>, {0x122, 1, 0, 0})
};

/// Class /Script/ChaosCloth.ChaosClothSharedSimConfig
/// Size: 0x0010 (0x000028 - 0x000038)
class UChaosClothSharedSimConfig : public UClothSharedConfigCommon
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(int32_t)                                   IterationCount                                              OFFSET(get<int32_t>, {0x28, 4, 0, 0})
	DMember(int32_t)                                   MaxIterationCount                                           OFFSET(get<int32_t>, {0x2C, 4, 0, 0})
	DMember(int32_t)                                   SubdivisionCount                                            OFFSET(get<int32_t>, {0x30, 4, 0, 0})
	DMember(bool)                                      bUseLocalSpaceSimulation                                    OFFSET(get<bool>, {0x34, 1, 0, 0})
	DMember(bool)                                      bUseXPBDConstraints                                         OFFSET(get<bool>, {0x35, 1, 0, 0})
};

/// Class /Script/ChaosCloth.ChaosClothingSimulationFactory
/// Size: 0x0000 (0x000028 - 0x000028)
class UChaosClothingSimulationFactory : public UClothingSimulationFactory
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/ChaosCloth.ChaosClothingInteractor
/// Size: 0x0020 (0x000030 - 0x000050)
class UChaosClothingInteractor : public UClothingInteractor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:


	/// Functions
	// Function /Script/ChaosCloth.ChaosClothingInteractor.SetWind
	// void SetWind(FVector2D Drag, FVector2D Lift, float AirDensity, FVector WindVelocity);                                    // [0x1c50bd4] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ChaosCloth.ChaosClothingInteractor.SetVelocityScale
	// void SetVelocityScale(FVector LinearVelocityScale, float AngularVelocityScale, float FictitiousAngularScale);            // [0x1c51a08] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ChaosCloth.ChaosClothingInteractor.SetPressure
	// void SetPressure(FVector2D Pressure);                                                                                    // [0xb5081d4] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ChaosCloth.ChaosClothingInteractor.SetMaterialLinear
	// void SetMaterialLinear(float EdgeStiffness, float BendingStiffness, float AreaStiffness);                                // [0xb5080d8] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/ChaosCloth.ChaosClothingInteractor.SetMaterialBuckling
	// void SetMaterialBuckling(FVector2D BucklingRatio, FVector2D BucklingStiffness);                                          // [0xb508008] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ChaosCloth.ChaosClothingInteractor.SetMaterial
	// void SetMaterial(FVector2D EdgeStiffness, FVector2D BendingStiffness, FVector2D AreaStiffness);                          // [0x1c50a0c] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ChaosCloth.ChaosClothingInteractor.SetLongRangeAttachmentLinear
	// void SetLongRangeAttachmentLinear(float TetherStiffness, float TetherScale);                                             // [0xb507f44] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/ChaosCloth.ChaosClothingInteractor.SetLongRangeAttachment
	// void SetLongRangeAttachment(FVector2D TetherStiffness, FVector2D TetherScale);                                           // [0x1c4f9bc] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ChaosCloth.ChaosClothingInteractor.SetGravity
	// void SetGravity(float GravityScale, bool bIsGravityOverridden, FVector GravityOverride);                                 // [0x1c51b28] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ChaosCloth.ChaosClothingInteractor.SetDamping
	// void SetDamping(float DampingCoefficient, float LocalDampingCoefficient);                                                // [0x1c51708] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/ChaosCloth.ChaosClothingInteractor.SetCollision
	// void SetCollision(float CollisionThickness, float FrictionCoefficient, bool bUseCCD, float SelfCollisionThickness);      // [0x1c517cc] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/ChaosCloth.ChaosClothingInteractor.SetBackstop
	// void SetBackstop(bool bEnabled);                                                                                         // [0xb507ec4] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/ChaosCloth.ChaosClothingInteractor.SetAnimDriveLinear
	// void SetAnimDriveLinear(float AnimDriveStiffness);                                                                       // [0xb507e44] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/ChaosCloth.ChaosClothingInteractor.SetAnimDrive
	// void SetAnimDrive(FVector2D AnimDriveStiffness, FVector2D AnimDriveDamping);                                             // [0x1c51938] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ChaosCloth.ChaosClothingInteractor.SetAerodynamics
	// void SetAerodynamics(float DragCoefficient, float LiftCoefficient, FVector WindVelocity);                                // [0xb507d38] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ChaosCloth.ChaosClothingInteractor.ResetAndTeleport
	// void ResetAndTeleport(bool bReset, bool bTeleport);                                                                      // [0xb507c74] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/ChaosCloth.ChaosClothingSimulationInteractor
/// Size: 0x0020 (0x000090 - 0x0000B0)
class UChaosClothingSimulationInteractor : public UClothingSimulationInteractor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
};

/// Struct /Script/ChaosCloth.ChaosClothWeightedValue
/// Size: 0x0008 (0x000000 - 0x000008)
class FChaosClothWeightedValue : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(float)                                     Low                                                         OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     High                                                        OFFSET(get<float>, {0x4, 4, 0, 0})
};

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

