
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject

/// Enum /Script/AnimationCore.EConstraintType
/// Size: 0x03
enum class EConstraintType : uint8_t
{
	EConstraintType__Transform                                                       = 0,
	EConstraintType__Aim                                                             = 1,
	EConstraintType__MAX                                                             = 2
};

/// Enum /Script/AnimationCore.ETransformConstraintType
/// Size: 0x06
enum class ETransformConstraintType : uint8_t
{
	ETransformConstraintType__Translation                                            = 0,
	ETransformConstraintType__Rotation                                               = 1,
	ETransformConstraintType__Scale                                                  = 2,
	ETransformConstraintType__Parent                                                 = 3,
	ETransformConstraintType__LookAt                                                 = 4,
	ETransformConstraintType__ETransformConstraintType_MAX                           = 5
};

/// Enum /Script/AnimationCore.EEulerRotationOrder
/// Size: 0x07
enum class EEulerRotationOrder : uint8_t
{
	EEulerRotationOrder__XYZ                                                         = 0,
	EEulerRotationOrder__XZY                                                         = 1,
	EEulerRotationOrder__YXZ                                                         = 2,
	EEulerRotationOrder__YZX                                                         = 3,
	EEulerRotationOrder__ZXY                                                         = 4,
	EEulerRotationOrder__ZYX                                                         = 5,
	EEulerRotationOrder__EEulerRotationOrder_MAX                                     = 6
};

/// Class /Script/AnimationCore.AnimationDataSourceRegistry
/// Size: 0x0050 (0x000028 - 0x000078)
class UAnimationDataSourceRegistry : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	SDK_UNDEFINED(80,1211) /* TMap<FName, TWeakObjectPtr<UObject*>> */ __um(DataSources);                          // 0x0028   (0x0050)  
};

/// Struct /Script/AnimationCore.Axis
/// Size: 0x0020 (0x000000 - 0x000020)
struct FAxis
{ 
	FVector                                            Axis;                                                       // 0x0000   (0x0018)  
	bool                                               bInLocalSpace;                                              // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0019   (0x0007)  MISSED
};

/// Struct /Script/AnimationCore.NodeChain
/// Size: 0x0010 (0x000000 - 0x000010)
struct FNodeChain
{ 
	TArray<FName>                                      Nodes;                                                      // 0x0000   (0x0010)  
};

/// Struct /Script/AnimationCore.NodeObject
/// Size: 0x0008 (0x000000 - 0x000008)
struct FNodeObject
{ 
	FName                                              Name;                                                       // 0x0000   (0x0004)  
	FName                                              ParentName;                                                 // 0x0004   (0x0004)  
};

/// Struct /Script/AnimationCore.NodeHierarchyData
/// Size: 0x0070 (0x000000 - 0x000070)
struct FNodeHierarchyData
{ 
	TArray<FNodeObject>                                Nodes;                                                      // 0x0000   (0x0010)  
	TArray<FTransform>                                 Transforms;                                                 // 0x0010   (0x0010)  
	SDK_UNDEFINED(80,1212) /* TMap<FName, int32_t> */  __um(NodeNameToIndexMapping);                               // 0x0020   (0x0050)  
};

/// Struct /Script/AnimationCore.NodeHierarchyWithUserData
/// Size: 0x0078 (0x000000 - 0x000078)
struct FNodeHierarchyWithUserData
{ 
	FNodeHierarchyData                                 Hierarchy;                                                  // 0x0008   (0x0070)  
};

/// Struct /Script/AnimationCore.CCDIKChainLink
/// Size: 0x00E0 (0x000000 - 0x0000E0)
struct FCCDIKChainLink
{ 
	unsigned char                                      UnknownData00_2[0xE0];                                      // 0x0000   (0x00E0)  MISSED
};

/// Struct /Script/AnimationCore.FilterOptionPerAxis
/// Size: 0x0003 (0x000000 - 0x000003)
struct FFilterOptionPerAxis
{ 
	bool                                               bX;                                                         // 0x0000   (0x0001)  
	bool                                               bY;                                                         // 0x0001   (0x0001)  
	bool                                               bZ;                                                         // 0x0002   (0x0001)  
};

/// Struct /Script/AnimationCore.TransformFilter
/// Size: 0x0009 (0x000000 - 0x000009)
struct FTransformFilter
{ 
	FFilterOptionPerAxis                               TranslationFilter;                                          // 0x0000   (0x0003)  
	FFilterOptionPerAxis                               RotationFilter;                                             // 0x0003   (0x0003)  
	FFilterOptionPerAxis                               ScaleFilter;                                                // 0x0006   (0x0003)  
};

/// Struct /Script/AnimationCore.ConstraintDescription
/// Size: 0x000D (0x000000 - 0x00000D)
struct FConstraintDescription
{ 
	bool                                               bTranslation;                                               // 0x0000   (0x0001)  
	bool                                               bRotation;                                                  // 0x0001   (0x0001)  
	bool                                               bScale;                                                     // 0x0002   (0x0001)  
	bool                                               bParent;                                                    // 0x0003   (0x0001)  
	FFilterOptionPerAxis                               TranslationAxes;                                            // 0x0004   (0x0003)  
	FFilterOptionPerAxis                               RotationAxes;                                               // 0x0007   (0x0003)  
	FFilterOptionPerAxis                               ScaleAxes;                                                  // 0x000A   (0x0003)  
};

/// Struct /Script/AnimationCore.ConstraintOffset
/// Size: 0x00C0 (0x000000 - 0x0000C0)
struct FConstraintOffset
{ 
	FVector                                            Translation;                                                // 0x0000   (0x0018)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0018   (0x0008)  MISSED
	FQuat                                              Rotation;                                                   // 0x0020   (0x0020)  
	FVector                                            Scale;                                                      // 0x0040   (0x0018)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0058   (0x0008)  MISSED
	FTransform                                         Parent;                                                     // 0x0060   (0x0060)  
};

/// Struct /Script/AnimationCore.TransformConstraint
/// Size: 0x0020 (0x000000 - 0x000020)
struct FTransformConstraint
{ 
	FConstraintDescription                             Operator;                                                   // 0x0000   (0x000D)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x000D   (0x0003)  MISSED
	FName                                              SourceNode;                                                 // 0x0010   (0x0004)  
	FName                                              TargetNode;                                                 // 0x0014   (0x0004)  
	float                                              Weight;                                                     // 0x0018   (0x0004)  
	bool                                               bMaintainOffset;                                            // 0x001C   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x001D   (0x0003)  MISSED
};

/// Struct /Script/AnimationCore.ConstraintDescriptionEx
/// Size: 0x0010 (0x000000 - 0x000010)
struct FConstraintDescriptionEx
{ 
	FFilterOptionPerAxis                               AxesFilterOption;                                           // 0x0008   (0x0003)  
	unsigned char                                      UnknownData00_6[0x5];                                       // 0x000B   (0x0005)  MISSED
};

/// Struct /Script/AnimationCore.TransformConstraintDescription
/// Size: 0x0008 (0x000010 - 0x000018)
struct FTransformConstraintDescription : FConstraintDescriptionEx
{ 
	ETransformConstraintType                           TransformType;                                              // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/AnimationCore.AimConstraintDescription
/// Size: 0x0060 (0x000010 - 0x000070)
struct FAimConstraintDescription : FConstraintDescriptionEx
{ 
	FAxis                                              LookAt_Axis;                                                // 0x0010   (0x0020)  
	FAxis                                              LookUp_Axis;                                                // 0x0030   (0x0020)  
	bool                                               bUseLookUp;                                                 // 0x0050   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0051   (0x0007)  MISSED
	FVector                                            LookUpTarget;                                               // 0x0058   (0x0018)  
};

/// Struct /Script/AnimationCore.ConstraintDescriptor
/// Size: 0x0010 (0x000000 - 0x000010)
struct FConstraintDescriptor
{ 
	EConstraintType                                    Type;                                                       // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0xF];                                       // 0x0001   (0x000F)  MISSED
};

/// Struct /Script/AnimationCore.ConstraintData
/// Size: 0x00E0 (0x000000 - 0x0000E0)
struct FConstraintData
{ 
	FConstraintDescriptor                              Constraint;                                                 // 0x0000   (0x0010)  
	float                                              Weight;                                                     // 0x0010   (0x0004)  
	bool                                               bMaintainOffset;                                            // 0x0014   (0x0001)  
	unsigned char                                      UnknownData00_5[0xB];                                       // 0x0015   (0x000B)  MISSED
	FTransform                                         Offset;                                                     // 0x0020   (0x0060)  
	FTransform                                         CurrentTransform;                                           // 0x0080   (0x0060)  
};

/// Struct /Script/AnimationCore.EulerTransform
/// Size: 0x0048 (0x000000 - 0x000048)
struct FEulerTransform
{ 
	FVector                                            Location;                                                   // 0x0000   (0x0018)  
	FRotator                                           Rotation;                                                   // 0x0018   (0x0018)  
	FVector                                            Scale;                                                      // 0x0030   (0x0018)  
};

/// Struct /Script/AnimationCore.FABRIKChainLink
/// Size: 0x0050 (0x000000 - 0x000050)
struct FFABRIKChainLink
{ 
	unsigned char                                      UnknownData00_2[0x50];                                      // 0x0000   (0x0050)  MISSED
};

/// Struct /Script/AnimationCore.TransformNoScale
/// Size: 0x0040 (0x000000 - 0x000040)
struct FTransformNoScale
{ 
	FVector                                            Location;                                                   // 0x0000   (0x0018)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0018   (0x0008)  MISSED
	FQuat                                              Rotation;                                                   // 0x0020   (0x0020)  
};

