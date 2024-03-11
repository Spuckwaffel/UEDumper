
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: ClothingSystemRuntimeInterface
/// dependency: CoreUObject
/// dependency: Engine

/// Enum /Script/ClothingSystemRuntimeCommon.EClothingWindMethod_Legacy
/// Size: 0x03
enum class EClothingWindMethod_Legacy : uint8_t
{
	EClothingWindMethod_Legacy__Legacy                                               = 0,
	EClothingWindMethod_Legacy__Accurate                                             = 1,
	EClothingWindMethod_Legacy__EClothingWindMethod_MAX                              = 2
};

/// Enum /Script/ClothingSystemRuntimeCommon.EWeightMapTargetCommon
/// Size: 0x07
enum class EWeightMapTargetCommon : uint8_t
{
	EWeightMapTargetCommon__None                                                     = 0,
	EWeightMapTargetCommon__MaxDistance                                              = 1,
	EWeightMapTargetCommon__BackstopDistance                                         = 2,
	EWeightMapTargetCommon__BackstopRadius                                           = 3,
	EWeightMapTargetCommon__AnimDriveStiffness                                       = 4,
	EWeightMapTargetCommon__AnimDriveDamping_DEPRECATED                              = 5,
	EWeightMapTargetCommon__EWeightMapTargetCommon_MAX                               = 6
};

/// Enum /Script/ClothingSystemRuntimeCommon.EClothMassMode
/// Size: 0x05
enum class EClothMassMode : uint8_t
{
	EClothMassMode__UniformMass                                                      = 0,
	EClothMassMode__TotalMass                                                        = 1,
	EClothMassMode__Density                                                          = 2,
	EClothMassMode__MaxClothMassMode                                                 = 3,
	EClothMassMode__EClothMassMode_MAX                                               = 4
};

/// Class /Script/ClothingSystemRuntimeCommon.ClothConfigCommon
/// Size: 0x0000 (0x000028 - 0x000028)
class UClothConfigCommon : public UClothConfigBase
{ 
public:
};

/// Class /Script/ClothingSystemRuntimeCommon.ClothSharedConfigCommon
/// Size: 0x0000 (0x000028 - 0x000028)
class UClothSharedConfigCommon : public UClothConfigCommon
{ 
public:
};

/// Class /Script/ClothingSystemRuntimeCommon.ClothingAssetCustomData
/// Size: 0x0000 (0x000028 - 0x000028)
class UClothingAssetCustomData : public UObject
{ 
public:
};

/// Struct /Script/ClothingSystemRuntimeCommon.ClothTetherData
/// Size: 0x0010 (0x000000 - 0x000010)
struct FClothTetherData
{ 
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0000   (0x0010)  MISSED
};

/// Struct /Script/ClothingSystemRuntimeCommon.ClothPhysicalMeshData
/// Size: 0x0128 (0x000000 - 0x000128)
struct FClothPhysicalMeshData
{ 
	TArray<FVector3f>                                  Vertices;                                                   // 0x0000   (0x0010)  
	TArray<FVector3f>                                  Normals;                                                    // 0x0010   (0x0010)  
	TArray<uint32_t>                                   Indices;                                                    // 0x0020   (0x0010)  
	SDK_UNDEFINED(80,1276) /* TMap<uint32_t, FPointWeightMap> */ __um(WeightMaps);                                 // 0x0030   (0x0050)  
	TArray<float>                                      InverseMasses;                                              // 0x0080   (0x0010)  
	TArray<FClothVertBoneData>                         BoneData;                                                   // 0x0090   (0x0010)  
	SDK_UNDEFINED(80,1277) /* TSet<int32_t> */         __um(SelfCollisionVertexSet);                               // 0x00A0   (0x0050)  
	FClothTetherData                                   EuclideanTethers;                                           // 0x00F0   (0x0010)  
	FClothTetherData                                   GeodesicTethers;                                            // 0x0100   (0x0010)  
	int32_t                                            MaxBoneWeights;                                             // 0x0110   (0x0004)  
	int32_t                                            NumFixedVerts;                                              // 0x0114   (0x0004)  
	TArray<uint32_t>                                   SelfCollisionIndices;                                       // 0x0118   (0x0010)  
};

/// Struct /Script/ClothingSystemRuntimeCommon.ClothLODDataCommon
/// Size: 0x0198 (0x000000 - 0x000198)
struct FClothLODDataCommon
{ 
	FClothPhysicalMeshData                             PhysicalMeshData;                                           // 0x0000   (0x0128)  
	FClothCollisionData                                CollisionData;                                              // 0x0128   (0x0040)  
	bool                                               bUseMultipleInfluences;                                     // 0x0168   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0169   (0x0003)  MISSED
	float                                              SkinningKernelRadius;                                       // 0x016C   (0x0004)  
	bool                                               bSmoothTransition;                                          // 0x0170   (0x0001)  
	unsigned char                                      UnknownData01_6[0x27];                                      // 0x0171   (0x0027)  MISSED
};

/// Class /Script/ClothingSystemRuntimeCommon.ClothingAssetCommon
/// Size: 0x00A8 (0x000048 - 0x0000F0)
class UClothingAssetCommon : public UClothingAssetBase
{ 
public:
	class UPhysicsAsset*                               PhysicsAsset;                                               // 0x0048   (0x0008)  
	SDK_UNDEFINED(80,1278) /* TMap<FName, UClothConfigBase*> */ __um(ClothConfigs);                                // 0x0050   (0x0050)  
	TArray<FClothLODDataCommon>                        LODData;                                                    // 0x00A0   (0x0010)  
	TArray<int32_t>                                    LodMap;                                                     // 0x00B0   (0x0010)  
	TArray<FName>                                      UsedBoneNames;                                              // 0x00C0   (0x0010)  
	TArray<int32_t>                                    UsedBoneIndices;                                            // 0x00D0   (0x0010)  
	int32_t                                            ReferenceBoneIndex;                                         // 0x00E0   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00E4   (0x0004)  MISSED
	class UClothingAssetCustomData*                    CustomData;                                                 // 0x00E8   (0x0008)  
};

/// Class /Script/ClothingSystemRuntimeCommon.ClothLODDataCommon_Legacy
/// Size: 0x0190 (0x000028 - 0x0001B8)
class UClothLODDataCommon_Legacy : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	class UClothPhysicalMeshDataBase_Legacy*           PhysicalMeshData;                                           // 0x0028   (0x0008)  
	FClothPhysicalMeshData                             ClothPhysicalMeshData;                                      // 0x0030   (0x0128)  
	FClothCollisionData                                CollisionData;                                              // 0x0158   (0x0040)  
	unsigned char                                      UnknownData01_6[0x20];                                      // 0x0198   (0x0020)  MISSED
};

/// Struct /Script/ClothingSystemRuntimeCommon.ClothConstraintSetup_Legacy
/// Size: 0x0010 (0x000000 - 0x000010)
struct FClothConstraintSetup_Legacy
{ 
	float                                              Stiffness;                                                  // 0x0000   (0x0004)  
	float                                              StiffnessMultiplier;                                        // 0x0004   (0x0004)  
	float                                              StretchLimit;                                               // 0x0008   (0x0004)  
	float                                              CompressionLimit;                                           // 0x000C   (0x0004)  
};

/// Struct /Script/ClothingSystemRuntimeCommon.ClothConfig_Legacy
/// Size: 0x0130 (0x000000 - 0x000130)
struct FClothConfig_Legacy
{ 
	EClothingWindMethod_Legacy                         WindMethod;                                                 // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	FClothConstraintSetup_Legacy                       VerticalConstraintConfig;                                   // 0x0004   (0x0010)  
	FClothConstraintSetup_Legacy                       HorizontalConstraintConfig;                                 // 0x0014   (0x0010)  
	FClothConstraintSetup_Legacy                       BendConstraintConfig;                                       // 0x0024   (0x0010)  
	FClothConstraintSetup_Legacy                       ShearConstraintConfig;                                      // 0x0034   (0x0010)  
	float                                              SelfCollisionRadius;                                        // 0x0044   (0x0004)  
	float                                              SelfCollisionStiffness;                                     // 0x0048   (0x0004)  
	float                                              SelfCollisionCullScale;                                     // 0x004C   (0x0004)  
	FVector                                            Damping;                                                    // 0x0050   (0x0018)  
	float                                              Friction;                                                   // 0x0068   (0x0004)  
	float                                              WindDragCoefficient;                                        // 0x006C   (0x0004)  
	float                                              WindLiftCoefficient;                                        // 0x0070   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0074   (0x0004)  MISSED
	FVector                                            LinearDrag;                                                 // 0x0078   (0x0018)  
	FVector                                            AngularDrag;                                                // 0x0090   (0x0018)  
	FVector                                            LinearInertiaScale;                                         // 0x00A8   (0x0018)  
	FVector                                            AngularInertiaScale;                                        // 0x00C0   (0x0018)  
	FVector                                            CentrifugalInertiaScale;                                    // 0x00D8   (0x0018)  
	float                                              SolverFrequency;                                            // 0x00F0   (0x0004)  
	float                                              StiffnessFrequency;                                         // 0x00F4   (0x0004)  
	float                                              GravityScale;                                               // 0x00F8   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x00FC   (0x0004)  MISSED
	FVector                                            GravityOverride;                                            // 0x0100   (0x0018)  
	bool                                               bUseGravityOverride;                                        // 0x0118   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x0119   (0x0003)  MISSED
	float                                              TetherStiffness;                                            // 0x011C   (0x0004)  
	float                                              TetherLimit;                                                // 0x0120   (0x0004)  
	float                                              CollisionThickness;                                         // 0x0124   (0x0004)  
	float                                              AnimDriveSpringStiffness;                                   // 0x0128   (0x0004)  
	float                                              AnimDriveDamperStiffness;                                   // 0x012C   (0x0004)  
};

/// Struct /Script/ClothingSystemRuntimeCommon.PointWeightMap
/// Size: 0x0010 (0x000000 - 0x000010)
struct FPointWeightMap
{ 
	TArray<float>                                      Values;                                                     // 0x0000   (0x0010)  
};

/// Struct /Script/ClothingSystemRuntimeCommon.ClothParameterMask_Legacy
/// Size: 0x0028 (0x000000 - 0x000028)
struct FClothParameterMask_Legacy
{ 
	FName                                              MaskName;                                                   // 0x0000   (0x0004)  
	EWeightMapTargetCommon                             CurrentTarget;                                              // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0005   (0x0003)  MISSED
	float                                              MaxValue;                                                   // 0x0008   (0x0004)  
	float                                              MinValue;                                                   // 0x000C   (0x0004)  
	TArray<float>                                      Values;                                                     // 0x0010   (0x0010)  
	bool                                               bEnabled;                                                   // 0x0020   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0021   (0x0007)  MISSED
};

