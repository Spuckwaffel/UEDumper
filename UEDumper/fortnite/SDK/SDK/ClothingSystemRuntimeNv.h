
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: ClothingSystemRuntimeCommon
/// dependency: ClothingSystemRuntimeInterface
/// dependency: CoreUObject

/// Enum /Script/ClothingSystemRuntimeNv.EClothingWindMethodNv
/// Size: 0x03
enum class EClothingWindMethodNv : uint8_t
{
	EClothingWindMethodNv__Legacy                                                    = 0,
	EClothingWindMethodNv__Accurate                                                  = 1,
	EClothingWindMethodNv__EClothingWindMethodNv_MAX                                 = 2
};

/// Struct /Script/ClothingSystemRuntimeNv.ClothConstraintSetupNv
/// Size: 0x0010 (0x000000 - 0x000010)
struct FClothConstraintSetupNv
{ 
	float                                              Stiffness;                                                  // 0x0000   (0x0004)  
	float                                              StiffnessMultiplier;                                        // 0x0004   (0x0004)  
	float                                              StretchLimit;                                               // 0x0008   (0x0004)  
	float                                              CompressionLimit;                                           // 0x000C   (0x0004)  
};

/// Class /Script/ClothingSystemRuntimeNv.ClothConfigNv
/// Size: 0x0178 (0x000028 - 0x0001A0)
class UClothConfigNv : public UClothConfigCommon
{ 
public:
	EClothingWindMethodNv                              ClothingWindMethod;                                         // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0029   (0x0003)  MISSED
	FClothConstraintSetupNv                            VerticalConstraint;                                         // 0x002C   (0x0010)  
	FClothConstraintSetupNv                            HorizontalConstraint;                                       // 0x003C   (0x0010)  
	FClothConstraintSetupNv                            BendConstraint;                                             // 0x004C   (0x0010)  
	FClothConstraintSetupNv                            ShearConstraint;                                            // 0x005C   (0x0010)  
	float                                              SelfCollisionRadius;                                        // 0x006C   (0x0004)  
	float                                              SelfCollisionStiffness;                                     // 0x0070   (0x0004)  
	float                                              SelfCollisionCullScale;                                     // 0x0074   (0x0004)  
	FVector                                            Damping;                                                    // 0x0078   (0x0018)  
	float                                              Friction;                                                   // 0x0090   (0x0004)  
	float                                              WindDragCoefficient;                                        // 0x0094   (0x0004)  
	float                                              WindLiftCoefficient;                                        // 0x0098   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x009C   (0x0004)  MISSED
	FVector                                            LinearDrag;                                                 // 0x00A0   (0x0018)  
	FVector                                            AngularDrag;                                                // 0x00B8   (0x0018)  
	FVector                                            LinearInertiaScale;                                         // 0x00D0   (0x0018)  
	FVector                                            AngularInertiaScale;                                        // 0x00E8   (0x0018)  
	FVector                                            CentrifugalInertiaScale;                                    // 0x0100   (0x0018)  
	float                                              SolverFrequency;                                            // 0x0118   (0x0004)  
	float                                              StiffnessFrequency;                                         // 0x011C   (0x0004)  
	float                                              GravityScale;                                               // 0x0120   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x0124   (0x0004)  MISSED
	FVector                                            GravityOverride;                                            // 0x0128   (0x0018)  
	bool                                               bUseGravityOverride;                                        // 0x0140   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x0141   (0x0003)  MISSED
	float                                              TetherStiffness;                                            // 0x0144   (0x0004)  
	float                                              TetherLimit;                                                // 0x0148   (0x0004)  
	float                                              CollisionThickness;                                         // 0x014C   (0x0004)  
	float                                              AnimDriveSpringStiffness;                                   // 0x0150   (0x0004)  
	float                                              AnimDriveDamperStiffness;                                   // 0x0154   (0x0004)  
	EClothingWindMethod_Legacy                         WindMethod;                                                 // 0x0158   (0x0001)  
	unsigned char                                      UnknownData04_5[0x3];                                       // 0x0159   (0x0003)  MISSED
	FClothConstraintSetup_Legacy                       VerticalConstraintConfig;                                   // 0x015C   (0x0010)  
	FClothConstraintSetup_Legacy                       HorizontalConstraintConfig;                                 // 0x016C   (0x0010)  
	FClothConstraintSetup_Legacy                       BendConstraintConfig;                                       // 0x017C   (0x0010)  
	FClothConstraintSetup_Legacy                       ShearConstraintConfig;                                      // 0x018C   (0x0010)  
	unsigned char                                      UnknownData05_6[0x4];                                       // 0x019C   (0x0004)  MISSED
};

/// Class /Script/ClothingSystemRuntimeNv.ClothingSimulationFactoryNv
/// Size: 0x0000 (0x000028 - 0x000028)
class UClothingSimulationFactoryNv : public UClothingSimulationFactory
{ 
public:
};

/// Class /Script/ClothingSystemRuntimeNv.ClothingSimulationInteractorNv
/// Size: 0x0000 (0x000090 - 0x000090)
class UClothingSimulationInteractorNv : public UClothingSimulationInteractor
{ 
public:


	/// Functions
	// Function /Script/ClothingSystemRuntimeNv.ClothingSimulationInteractorNv.SetAnimDriveDamperStiffness
	// void SetAnimDriveDamperStiffness(float InStiffness);                                                                  // [0x67d85bc] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/ClothingSystemRuntimeNv.ClothPhysicalMeshDataNv_Legacy
/// Size: 0x0040 (0x0000E0 - 0x000120)
class UClothPhysicalMeshDataNv_Legacy : public UClothPhysicalMeshDataBase_Legacy
{ 
public:
	TArray<float>                                      MaxDistances;                                               // 0x00E0   (0x0010)  
	TArray<float>                                      BackstopDistances;                                          // 0x00F0   (0x0010)  
	TArray<float>                                      BackstopRadiuses;                                           // 0x0100   (0x0010)  
	TArray<float>                                      AnimDriveMultipliers;                                       // 0x0110   (0x0010)  
};

