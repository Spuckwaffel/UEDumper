
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: InteractiveToolsFramework

/// Enum /Script/ModelingOperators.ERecomputeUVsPropertiesUnwrapType
/// Size: 0x05
enum class ERecomputeUVsPropertiesUnwrapType : uint32_t
{
	ERecomputeUVsPropertiesUnwrapType__ExpMap                                        = 0,
	ERecomputeUVsPropertiesUnwrapType__Conformal                                     = 1,
	ERecomputeUVsPropertiesUnwrapType__SpectralConformal                             = 2,
	ERecomputeUVsPropertiesUnwrapType__IslandMerging                                 = 3,
	ERecomputeUVsPropertiesUnwrapType__ERecomputeUVsPropertiesUnwrapType_MAX         = 4
};

/// Enum /Script/ModelingOperators.ERecomputeUVsPropertiesIslandMode
/// Size: 0x03
enum class ERecomputeUVsPropertiesIslandMode : uint32_t
{
	ERecomputeUVsPropertiesIslandMode__PolyGroups                                    = 0,
	ERecomputeUVsPropertiesIslandMode__ExistingUVs                                   = 1,
	ERecomputeUVsPropertiesIslandMode__ERecomputeUVsPropertiesIslandMode_MAX         = 2
};

/// Enum /Script/ModelingOperators.ERecomputeUVsToolOrientationMode
/// Size: 0x03
enum class ERecomputeUVsToolOrientationMode : uint32_t
{
	ERecomputeUVsToolOrientationMode__None                                           = 0,
	ERecomputeUVsToolOrientationMode__MinBounds                                      = 1,
	ERecomputeUVsToolOrientationMode__ERecomputeUVsToolOrientationMode_MAX           = 2
};

/// Enum /Script/ModelingOperators.ERecomputeUVsPropertiesLayoutType
/// Size: 0x06
enum class ERecomputeUVsPropertiesLayoutType : uint32_t
{
	ERecomputeUVsPropertiesLayoutType__None                                          = 0,
	ERecomputeUVsPropertiesLayoutType__Repack                                        = 1,
	ERecomputeUVsPropertiesLayoutType__NormalizeToExistingBounds                     = 2,
	ERecomputeUVsPropertiesLayoutType__NormalizeToBounds                             = 3,
	ERecomputeUVsPropertiesLayoutType__NormalizeToWorld                              = 4,
	ERecomputeUVsPropertiesLayoutType__ERecomputeUVsPropertiesLayoutType_MAX         = 5
};

/// Enum /Script/ModelingOperators.EFlattenCurveMethod
/// Size: 0x06
enum class EFlattenCurveMethod : uint8_t
{
	EFlattenCurveMethod__DoNotFlatten                                                = 0,
	EFlattenCurveMethod__ToBestFitPlane                                              = 1,
	EFlattenCurveMethod__AlongX                                                      = 2,
	EFlattenCurveMethod__AlongY                                                      = 3,
	EFlattenCurveMethod__AlongZ                                                      = 4,
	EFlattenCurveMethod__EFlattenCurveMethod_MAX                                     = 5
};

/// Enum /Script/ModelingOperators.ECombineCurvesMethod
/// Size: 0x06
enum class ECombineCurvesMethod : uint8_t
{
	ECombineCurvesMethod__LeaveSeparate                                              = 0,
	ECombineCurvesMethod__Union                                                      = 1,
	ECombineCurvesMethod__Intersect                                                  = 2,
	ECombineCurvesMethod__Difference                                                 = 3,
	ECombineCurvesMethod__ExclusiveOr                                                = 4,
	ECombineCurvesMethod__ECombineCurvesMethod_MAX                                   = 5
};

/// Enum /Script/ModelingOperators.EOffsetClosedCurvesMethod
/// Size: 0x04
enum class EOffsetClosedCurvesMethod : uint8_t
{
	EOffsetClosedCurvesMethod__DoNotOffset                                           = 0,
	EOffsetClosedCurvesMethod__OffsetOuterSide                                       = 1,
	EOffsetClosedCurvesMethod__OffsetBothSides                                       = 2,
	EOffsetClosedCurvesMethod__EOffsetClosedCurvesMethod_MAX                         = 3
};

/// Enum /Script/ModelingOperators.EOffsetOpenCurvesMethod
/// Size: 0x03
enum class EOffsetOpenCurvesMethod : uint8_t
{
	EOffsetOpenCurvesMethod__TreatAsClosed                                           = 0,
	EOffsetOpenCurvesMethod__Offset                                                  = 1,
	EOffsetOpenCurvesMethod__EOffsetOpenCurvesMethod_MAX                             = 2
};

/// Enum /Script/ModelingOperators.EOffsetJoinMethod
/// Size: 0x04
enum class EOffsetJoinMethod : uint8_t
{
	EOffsetJoinMethod__Square                                                        = 0,
	EOffsetJoinMethod__Miter                                                         = 1,
	EOffsetJoinMethod__Round                                                         = 2,
	EOffsetJoinMethod__EOffsetJoinMethod_MAX                                         = 3
};

/// Enum /Script/ModelingOperators.EOpenCurveEndShapes
/// Size: 0x04
enum class EOpenCurveEndShapes : uint8_t
{
	EOpenCurveEndShapes__Square                                                      = 0,
	EOpenCurveEndShapes__Round                                                       = 1,
	EOpenCurveEndShapes__Butt                                                        = 2,
	EOpenCurveEndShapes__EOpenCurveEndShapes_MAX                                     = 3
};

/// Enum /Script/ModelingOperators.EUVLayoutType
/// Size: 0x05
enum class EUVLayoutType : uint32_t
{
	EUVLayoutType__Transform                                                         = 0,
	EUVLayoutType__Stack                                                             = 1,
	EUVLayoutType__Repack                                                            = 2,
	EUVLayoutType__Normalize                                                         = 3,
	EUVLayoutType__EUVLayoutType_MAX                                                 = 4
};

/// Enum /Script/ModelingOperators.ENormalCalculationMethod
/// Size: 0x04
enum class ENormalCalculationMethod : uint8_t
{
	ENormalCalculationMethod__AreaWeighted                                           = 0,
	ENormalCalculationMethod__AngleWeighted                                          = 1,
	ENormalCalculationMethod__AreaAngleWeighting                                     = 2,
	ENormalCalculationMethod__ENormalCalculationMethod_MAX                           = 3
};

/// Enum /Script/ModelingOperators.ESplitNormalMethod
/// Size: 0x06
enum class ESplitNormalMethod : uint8_t
{
	ESplitNormalMethod__UseExistingTopology                                          = 0,
	ESplitNormalMethod__FaceNormalThreshold                                          = 1,
	ESplitNormalMethod__FaceGroupID                                                  = 2,
	ESplitNormalMethod__PerTriangle                                                  = 3,
	ESplitNormalMethod__PerVertex                                                    = 4,
	ESplitNormalMethod__ESplitNormalMethod_MAX                                       = 5
};

/// Enum /Script/ModelingOperators.EHoleFillOpFillType
/// Size: 0x06
enum class EHoleFillOpFillType : uint8_t
{
	EHoleFillOpFillType__TriangleFan                                                 = 0,
	EHoleFillOpFillType__PolygonEarClipping                                          = 1,
	EHoleFillOpFillType__Planar                                                      = 2,
	EHoleFillOpFillType__Minimal                                                     = 3,
	EHoleFillOpFillType__Smooth                                                      = 4,
	EHoleFillOpFillType__EHoleFillOpFillType_MAX                                     = 5
};

/// Enum /Script/ModelingOperators.ERemeshType
/// Size: 0x04
enum class ERemeshType : uint8_t
{
	ERemeshType__Standard                                                            = 0,
	ERemeshType__FullPass                                                            = 1,
	ERemeshType__NormalFlow                                                          = 2,
	ERemeshType__ERemeshType_MAX                                                     = 3
};

/// Enum /Script/ModelingOperators.ERemeshSmoothingType
/// Size: 0x04
enum class ERemeshSmoothingType : uint8_t
{
	ERemeshSmoothingType__Uniform                                                    = 0,
	ERemeshSmoothingType__Cotangent                                                  = 1,
	ERemeshSmoothingType__MeanValue                                                  = 2,
	ERemeshSmoothingType__ERemeshSmoothingType_MAX                                   = 3
};

/// Enum /Script/ModelingOperators.ECSGOperation
/// Size: 0x05
enum class ECSGOperation : uint8_t
{
	ECSGOperation__DifferenceAB                                                      = 0,
	ECSGOperation__DifferenceBA                                                      = 1,
	ECSGOperation__Intersect                                                         = 2,
	ECSGOperation__Union                                                             = 3,
	ECSGOperation__ECSGOperation_MAX                                                 = 4
};

/// Enum /Script/ModelingOperators.ETrimOperation
/// Size: 0x03
enum class ETrimOperation : uint8_t
{
	ETrimOperation__TrimA                                                            = 0,
	ETrimOperation__TrimB                                                            = 1,
	ETrimOperation__ETrimOperation_MAX                                               = 2
};

/// Enum /Script/ModelingOperators.ETrimSide
/// Size: 0x03
enum class ETrimSide : uint8_t
{
	ETrimSide__RemoveInside                                                          = 0,
	ETrimSide__RemoveOutside                                                         = 1,
	ETrimSide__ETrimSide_MAX                                                         = 2
};

/// Enum /Script/ModelingOperators.EMorphologyOperation
/// Size: 0x05
enum class EMorphologyOperation : uint8_t
{
	EMorphologyOperation__Dilate                                                     = 0,
	EMorphologyOperation__Contract                                                   = 1,
	EMorphologyOperation__Close                                                      = 2,
	EMorphologyOperation__Open                                                       = 3,
	EMorphologyOperation__EMorphologyOperation_MAX                                   = 4
};

/// Enum /Script/ModelingOperators.EUVProjectionMethod
/// Size: 0x05
enum class EUVProjectionMethod : uint8_t
{
	EUVProjectionMethod__Box                                                         = 0,
	EUVProjectionMethod__Cylinder                                                    = 1,
	EUVProjectionMethod__Plane                                                       = 2,
	EUVProjectionMethod__ExpMap                                                      = 3,
	EUVProjectionMethod__EUVProjectionMethod_MAX                                     = 4
};

/// Class /Script/ModelingOperators.RecomputeUVsToolProperties
/// Size: 0x0038 (0x0000A8 - 0x0000E0)
class URecomputeUVsToolProperties : public UInteractiveToolPropertySet
{ 
public:
	bool                                               bEnablePolygroupSupport;                                    // 0x00A8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00A9   (0x0003)  MISSED
	ERecomputeUVsPropertiesIslandMode                  IslandGeneration;                                           // 0x00AC   (0x0004)  
	ERecomputeUVsPropertiesUnwrapType                  UnwrapType;                                                 // 0x00B0   (0x0004)  
	ERecomputeUVsToolOrientationMode                   AutoRotation;                                               // 0x00B4   (0x0004)  
	bool                                               bPreserveIrregularity;                                      // 0x00B8   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x00B9   (0x0003)  MISSED
	int32_t                                            SmoothingSteps;                                             // 0x00BC   (0x0004)  
	float                                              SmoothingAlpha;                                             // 0x00C0   (0x0004)  
	float                                              MergingDistortionThreshold;                                 // 0x00C4   (0x0004)  
	float                                              MergingAngleThreshold;                                      // 0x00C8   (0x0004)  
	ERecomputeUVsPropertiesLayoutType                  LayoutType;                                                 // 0x00CC   (0x0004)  
	int32_t                                            TextureResolution;                                          // 0x00D0   (0x0004)  
	float                                              NormalizeScale;                                             // 0x00D4   (0x0004)  
	bool                                               bEnableUDIMLayout;                                          // 0x00D8   (0x0001)  
	bool                                               bUDIMCVAREnabled;                                           // 0x00D9   (0x0001)  
	unsigned char                                      UnknownData02_6[0x6];                                       // 0x00DA   (0x0006)  MISSED
};

/// Class /Script/ModelingOperators.UVLayoutProperties
/// Size: 0x0028 (0x0000A8 - 0x0000D0)
class UUVLayoutProperties : public UInteractiveToolPropertySet
{ 
public:
	EUVLayoutType                                      LayoutType;                                                 // 0x00A8   (0x0004)  
	int32_t                                            TextureResolution;                                          // 0x00AC   (0x0004)  
	float                                              Scale;                                                      // 0x00B0   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00B4   (0x0004)  MISSED
	FVector2D                                          Translation;                                                // 0x00B8   (0x0010)  
	bool                                               bAllowFlips;                                                // 0x00C8   (0x0001)  
	bool                                               bEnableUDIMLayout;                                          // 0x00C9   (0x0001)  
	bool                                               bUDIMCVAREnabled;                                           // 0x00CA   (0x0001)  
	unsigned char                                      UnknownData01_6[0x5];                                       // 0x00CB   (0x0005)  MISSED
};

/// Class /Script/ModelingOperators.RecomputeUVsOpFactory
/// Size: 0x0118 (0x000028 - 0x000140)
class URecomputeUVsOpFactory : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x30];                                      // 0x0000   (0x0030)  MISSED
	class URecomputeUVsToolProperties*                 Settings;                                                   // 0x0030   (0x0008)  
	unsigned char                                      UnknownData01_6[0x108];                                     // 0x0038   (0x0108)  MISSED
};

/// Class /Script/ModelingOperators.UVLayoutOperatorFactory
/// Size: 0x0178 (0x000028 - 0x0001A0)
class UUVLayoutOperatorFactory : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x30];                                      // 0x0000   (0x0030)  MISSED
	class UUVLayoutProperties*                         Settings;                                                   // 0x0030   (0x0008)  
	unsigned char                                      UnknownData01_6[0x168];                                     // 0x0038   (0x0168)  MISSED
};

