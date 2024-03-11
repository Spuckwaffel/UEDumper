
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: ControlRig
/// dependency: CoreUObject
/// dependency: RigVM

/// Enum /Script/ControlRigSpline.ESplineType
/// Size: 0x03
enum class ESplineType : uint8_t
{
	ESplineType__BSpline                                                             = 0,
	ESplineType__Hermite                                                             = 1,
	ESplineType__Max                                                                 = 2
};

/// Struct /Script/ControlRigSpline.ControlRigSplineImpl
/// Size: 0x0068 (0x000000 - 0x000068)
struct FControlRigSplineImpl
{ 
	unsigned char                                      UnknownData00_2[0x68];                                      // 0x0000   (0x0068)  MISSED
};

/// Struct /Script/ControlRigSpline.ControlRigSpline
/// Size: 0x0018 (0x000000 - 0x000018)
struct FControlRigSpline
{ 
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x0000   (0x0018)  MISSED
};

/// Struct /Script/ControlRigSpline.RigUnit_ControlRigSplineBase
/// Size: 0x0000 (0x000008 - 0x000008)
struct FRigUnit_ControlRigSplineBase : FRigUnit
{ 
};

/// Struct /Script/ControlRigSpline.RigUnit_ControlRigSplineFromPoints
/// Size: 0x0038 (0x000008 - 0x000040)
struct FRigUnit_ControlRigSplineFromPoints : FRigUnit_ControlRigSplineBase
{ 
	TArray<FVector>                                    Points;                                                     // 0x0008   (0x0010)  
	ESplineType                                        SplineMode;                                                 // 0x0018   (0x0001)  
	bool                                               bClosed;                                                    // 0x0019   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x001A   (0x0002)  MISSED
	int32_t                                            SamplesPerSegment;                                          // 0x001C   (0x0004)  
	float                                              Compression;                                                // 0x0020   (0x0004)  
	float                                              Stretch;                                                    // 0x0024   (0x0004)  
	FControlRigSpline                                  Spline;                                                     // 0x0028   (0x0018)  
};

/// Struct /Script/ControlRigSpline.RigUnit_ControlRigSplineFromTransforms
/// Size: 0x0038 (0x000008 - 0x000040)
struct FRigUnit_ControlRigSplineFromTransforms : FRigUnit_ControlRigSplineBase
{ 
	TArray<FTransform>                                 Transforms;                                                 // 0x0008   (0x0010)  
	ESplineType                                        SplineMode;                                                 // 0x0018   (0x0001)  
	bool                                               bClosed;                                                    // 0x0019   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x001A   (0x0002)  MISSED
	int32_t                                            SamplesPerSegment;                                          // 0x001C   (0x0004)  
	float                                              Compression;                                                // 0x0020   (0x0004)  
	float                                              Stretch;                                                    // 0x0024   (0x0004)  
	FControlRigSpline                                  Spline;                                                     // 0x0028   (0x0018)  
};

/// Struct /Script/ControlRigSpline.RigUnit_SetSplinePoints
/// Size: 0x0030 (0x0001D0 - 0x000200)
struct FRigUnit_SetSplinePoints : FRigUnitMutable
{ 
	TArray<FVector>                                    Points;                                                     // 0x01D0   (0x0010)  
	FControlRigSpline                                  Spline;                                                     // 0x01E0   (0x0018)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x01F8   (0x0008)  MISSED
};

/// Struct /Script/ControlRigSpline.RigUnit_SetSplineTransforms
/// Size: 0x0030 (0x0001D0 - 0x000200)
struct FRigUnit_SetSplineTransforms : FRigUnitMutable
{ 
	TArray<FTransform>                                 Transforms;                                                 // 0x01D0   (0x0010)  
	FControlRigSpline                                  Spline;                                                     // 0x01E0   (0x0018)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x01F8   (0x0008)  MISSED
};

/// Struct /Script/ControlRigSpline.RigUnit_PositionFromControlRigSpline
/// Size: 0x0038 (0x000008 - 0x000040)
struct FRigUnit_PositionFromControlRigSpline : FRigUnit_ControlRigSplineBase
{ 
	FControlRigSpline                                  Spline;                                                     // 0x0008   (0x0018)  
	float                                              U;                                                          // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0024   (0x0004)  MISSED
	FVector                                            Position;                                                   // 0x0028   (0x0018)  
};

/// Struct /Script/ControlRigSpline.RigUnit_TransformFromControlRigSpline
/// Size: 0x0098 (0x000008 - 0x0000A0)
struct FRigUnit_TransformFromControlRigSpline : FRigUnit_ControlRigSplineBase
{ 
	FControlRigSpline                                  Spline;                                                     // 0x0008   (0x0018)  
	FVector                                            UpVector;                                                   // 0x0020   (0x0018)  
	float                                              Roll;                                                       // 0x0038   (0x0004)  
	float                                              U;                                                          // 0x003C   (0x0004)  
	FTransform                                         Transform;                                                  // 0x0040   (0x0060)  
};

/// Struct /Script/ControlRigSpline.RigUnit_TransformFromControlRigSpline2
/// Size: 0x00B8 (0x000008 - 0x0000C0)
struct FRigUnit_TransformFromControlRigSpline2 : FRigUnit_ControlRigSplineBase
{ 
	FControlRigSpline                                  Spline;                                                     // 0x0008   (0x0018)  
	float                                              U;                                                          // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0024   (0x0004)  MISSED
	FVector                                            PrimaryAxis;                                                // 0x0028   (0x0018)  
	FVector                                            SecondaryAxis;                                              // 0x0040   (0x0018)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0058   (0x0008)  MISSED
	FTransform                                         Transform;                                                  // 0x0060   (0x0060)  
};

/// Struct /Script/ControlRigSpline.RigUnit_TangentFromControlRigSpline
/// Size: 0x0038 (0x000008 - 0x000040)
struct FRigUnit_TangentFromControlRigSpline : FRigUnit_ControlRigSplineBase
{ 
	FControlRigSpline                                  Spline;                                                     // 0x0008   (0x0018)  
	float                                              U;                                                          // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0024   (0x0004)  MISSED
	FVector                                            Tangent;                                                    // 0x0028   (0x0018)  
};

/// Struct /Script/ControlRigSpline.RigUnit_DrawControlRigSpline
/// Size: 0x0030 (0x0001D0 - 0x000200)
struct FRigUnit_DrawControlRigSpline : FRigUnitMutable
{ 
	FControlRigSpline                                  Spline;                                                     // 0x01D0   (0x0018)  
	FLinearColor                                       Color;                                                      // 0x01E8   (0x0010)  
	float                                              Thickness;                                                  // 0x01F8   (0x0004)  
	int32_t                                            Detail;                                                     // 0x01FC   (0x0004)  
};

/// Struct /Script/ControlRigSpline.RigUnit_GetLengthControlRigSpline
/// Size: 0x0020 (0x000008 - 0x000028)
struct FRigUnit_GetLengthControlRigSpline : FRigUnit
{ 
	FControlRigSpline                                  Spline;                                                     // 0x0008   (0x0018)  
	float                                              Length;                                                     // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Struct /Script/ControlRigSpline.RigUnit_GetLengthAtParamControlRigSpline
/// Size: 0x0020 (0x000008 - 0x000028)
struct FRigUnit_GetLengthAtParamControlRigSpline : FRigUnit
{ 
	FControlRigSpline                                  Spline;                                                     // 0x0008   (0x0018)  
	float                                              U;                                                          // 0x0020   (0x0004)  
	float                                              Length;                                                     // 0x0024   (0x0004)  
};

/// Struct /Script/ControlRigSpline.RigUnit_FitChainToSplineCurve
/// Size: 0x01D0 (0x0001D0 - 0x0003A0)
struct FRigUnit_FitChainToSplineCurve : FRigUnit_HighlevelBaseMutable
{ 
	FRigElementKeyCollection                           Items;                                                      // 0x01D0   (0x0010)  
	FControlRigSpline                                  Spline;                                                     // 0x01E0   (0x0018)  
	EControlRigCurveAlignment                          Alignment;                                                  // 0x01F8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x01F9   (0x0003)  MISSED
	float                                              Minimum;                                                    // 0x01FC   (0x0004)  
	float                                              Maximum;                                                    // 0x0200   (0x0004)  
	int32_t                                            SamplingPrecision;                                          // 0x0204   (0x0004)  
	FVector                                            PrimaryAxis;                                                // 0x0208   (0x0018)  
	FVector                                            SecondaryAxis;                                              // 0x0220   (0x0018)  
	FVector                                            PoleVectorPosition;                                         // 0x0238   (0x0018)  
	TArray<FRigUnit_FitChainToCurve_Rotation>          Rotations;                                                  // 0x0250   (0x0010)  
	ERigVMAnimEasingType                               RotationEaseType;                                           // 0x0260   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0261   (0x0003)  MISSED
	float                                              Weight;                                                     // 0x0264   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x0268   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x0269   (0x0007)  MISSED
	FRigUnit_FitChainToCurve_DebugSettings             DebugSettings;                                              // 0x0270   (0x0090)  
	FRigUnit_FitChainToCurve_WorkData                  WorkData;                                                   // 0x0300   (0x0098)  
	unsigned char                                      UnknownData03_6[0x8];                                       // 0x0398   (0x0008)  MISSED
};

/// Struct /Script/ControlRigSpline.RigUnit_FitChainToSplineCurveItemArray
/// Size: 0x01D0 (0x0001D0 - 0x0003A0)
struct FRigUnit_FitChainToSplineCurveItemArray : FRigUnit_HighlevelBaseMutable
{ 
	TArray<FRigElementKey>                             Items;                                                      // 0x01D0   (0x0010)  
	FControlRigSpline                                  Spline;                                                     // 0x01E0   (0x0018)  
	EControlRigCurveAlignment                          Alignment;                                                  // 0x01F8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x01F9   (0x0003)  MISSED
	float                                              Minimum;                                                    // 0x01FC   (0x0004)  
	float                                              Maximum;                                                    // 0x0200   (0x0004)  
	int32_t                                            SamplingPrecision;                                          // 0x0204   (0x0004)  
	FVector                                            PrimaryAxis;                                                // 0x0208   (0x0018)  
	FVector                                            SecondaryAxis;                                              // 0x0220   (0x0018)  
	FVector                                            PoleVectorPosition;                                         // 0x0238   (0x0018)  
	TArray<FRigUnit_FitChainToCurve_Rotation>          Rotations;                                                  // 0x0250   (0x0010)  
	ERigVMAnimEasingType                               RotationEaseType;                                           // 0x0260   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0261   (0x0003)  MISSED
	float                                              Weight;                                                     // 0x0264   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x0268   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x0269   (0x0007)  MISSED
	FRigUnit_FitChainToCurve_DebugSettings             DebugSettings;                                              // 0x0270   (0x0090)  
	FRigUnit_FitChainToCurve_WorkData                  WorkData;                                                   // 0x0300   (0x0098)  
	unsigned char                                      UnknownData03_6[0x8];                                       // 0x0398   (0x0008)  MISSED
};

/// Struct /Script/ControlRigSpline.RigUnit_SplineConstraint_WorkData
/// Size: 0x0038 (0x000000 - 0x000038)
struct FRigUnit_SplineConstraint_WorkData
{ 
	float                                              ChainLength;                                                // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	TArray<FTransform>                                 ItemTransforms;                                             // 0x0008   (0x0010)  
	TArray<float>                                      ItemSegments;                                               // 0x0018   (0x0010)  
	TArray<FCachedRigElement>                          CachedItems;                                                // 0x0028   (0x0010)  
};

/// Struct /Script/ControlRigSpline.RigUnit_SplineConstraint
/// Size: 0x00B0 (0x0001D0 - 0x000280)
struct FRigUnit_SplineConstraint : FRigUnit_HighlevelBaseMutable
{ 
	TArray<FRigElementKey>                             Items;                                                      // 0x01D0   (0x0010)  
	FControlRigSpline                                  Spline;                                                     // 0x01E0   (0x0018)  
	EControlRigCurveAlignment                          Alignment;                                                  // 0x01F8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x01F9   (0x0003)  MISSED
	float                                              Minimum;                                                    // 0x01FC   (0x0004)  
	float                                              Maximum;                                                    // 0x0200   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0204   (0x0004)  MISSED
	FVector                                            PrimaryAxis;                                                // 0x0208   (0x0018)  
	FVector                                            SecondaryAxis;                                              // 0x0220   (0x0018)  
	bool                                               bPropagateToChildren;                                       // 0x0238   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x0239   (0x0007)  MISSED
	FRigUnit_SplineConstraint_WorkData                 WorkData;                                                   // 0x0240   (0x0038)  
	unsigned char                                      UnknownData03_6[0x8];                                       // 0x0278   (0x0008)  MISSED
};

/// Struct /Script/ControlRigSpline.RigUnit_FitSplineCurveToChain
/// Size: 0x0030 (0x0001D0 - 0x000200)
struct FRigUnit_FitSplineCurveToChain : FRigUnit_HighlevelBaseMutable
{ 
	FRigElementKeyCollection                           Items;                                                      // 0x01D0   (0x0010)  
	FControlRigSpline                                  Spline;                                                     // 0x01E0   (0x0018)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x01F8   (0x0008)  MISSED
};

/// Struct /Script/ControlRigSpline.RigUnit_FitSplineCurveToChainItemArray
/// Size: 0x0030 (0x0001D0 - 0x000200)
struct FRigUnit_FitSplineCurveToChainItemArray : FRigUnit_HighlevelBaseMutable
{ 
	TArray<FRigElementKey>                             Items;                                                      // 0x01D0   (0x0010)  
	FControlRigSpline                                  Spline;                                                     // 0x01E0   (0x0018)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x01F8   (0x0008)  MISSED
};

/// Struct /Script/ControlRigSpline.RigUnit_ClosestParameterFromControlRigSpline
/// Size: 0x0038 (0x000008 - 0x000040)
struct FRigUnit_ClosestParameterFromControlRigSpline : FRigUnit_ControlRigSplineBase
{ 
	FControlRigSpline                                  Spline;                                                     // 0x0008   (0x0018)  
	FVector                                            Position;                                                   // 0x0020   (0x0018)  
	float                                              U;                                                          // 0x0038   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Struct /Script/ControlRigSpline.RigUnit_ParameterAtPercentage
/// Size: 0x0020 (0x000008 - 0x000028)
struct FRigUnit_ParameterAtPercentage : FRigUnit_ControlRigSplineBase
{ 
	FControlRigSpline                                  Spline;                                                     // 0x0008   (0x0018)  
	float                                              Percentage;                                                 // 0x0020   (0x0004)  
	float                                              U;                                                          // 0x0024   (0x0004)  
};

