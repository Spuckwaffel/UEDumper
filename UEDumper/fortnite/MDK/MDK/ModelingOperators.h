
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: InteractiveToolsFramework

/// Class /Script/ModelingOperators.RecomputeUVsToolProperties
/// Size: 0x0038 (0x0000A8 - 0x0000E0)
class URecomputeUVsToolProperties : public UInteractiveToolPropertySet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	DMember(bool)                                      bEnablePolygroupSupport                                     OFFSET(get<bool>, {0xA8, 1, 0, 0})
	CMember(ERecomputeUVsPropertiesIslandMode)         IslandGeneration                                            OFFSET(get<T>, {0xAC, 4, 0, 0})
	CMember(ERecomputeUVsPropertiesUnwrapType)         UnwrapType                                                  OFFSET(get<T>, {0xB0, 4, 0, 0})
	CMember(ERecomputeUVsToolOrientationMode)          AutoRotation                                                OFFSET(get<T>, {0xB4, 4, 0, 0})
	DMember(bool)                                      bPreserveIrregularity                                       OFFSET(get<bool>, {0xB8, 1, 0, 0})
	DMember(int32_t)                                   SmoothingSteps                                              OFFSET(get<int32_t>, {0xBC, 4, 0, 0})
	DMember(float)                                     SmoothingAlpha                                              OFFSET(get<float>, {0xC0, 4, 0, 0})
	DMember(float)                                     MergingDistortionThreshold                                  OFFSET(get<float>, {0xC4, 4, 0, 0})
	DMember(float)                                     MergingAngleThreshold                                       OFFSET(get<float>, {0xC8, 4, 0, 0})
	CMember(ERecomputeUVsPropertiesLayoutType)         LayoutType                                                  OFFSET(get<T>, {0xCC, 4, 0, 0})
	DMember(int32_t)                                   TextureResolution                                           OFFSET(get<int32_t>, {0xD0, 4, 0, 0})
	DMember(float)                                     NormalizeScale                                              OFFSET(get<float>, {0xD4, 4, 0, 0})
	DMember(bool)                                      bEnableUDIMLayout                                           OFFSET(get<bool>, {0xD8, 1, 0, 0})
	DMember(bool)                                      bUDIMCVAREnabled                                            OFFSET(get<bool>, {0xD9, 1, 0, 0})
};

/// Class /Script/ModelingOperators.UVLayoutProperties
/// Size: 0x0028 (0x0000A8 - 0x0000D0)
class UUVLayoutProperties : public UInteractiveToolPropertySet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	CMember(EUVLayoutType)                             LayoutType                                                  OFFSET(get<T>, {0xA8, 4, 0, 0})
	DMember(int32_t)                                   TextureResolution                                           OFFSET(get<int32_t>, {0xAC, 4, 0, 0})
	DMember(float)                                     Scale                                                       OFFSET(get<float>, {0xB0, 4, 0, 0})
	SMember(FVector2D)                                 Translation                                                 OFFSET(getStruct<T>, {0xB8, 16, 0, 0})
	DMember(bool)                                      bAllowFlips                                                 OFFSET(get<bool>, {0xC8, 1, 0, 0})
	DMember(bool)                                      bEnableUDIMLayout                                           OFFSET(get<bool>, {0xC9, 1, 0, 0})
	DMember(bool)                                      bUDIMCVAREnabled                                            OFFSET(get<bool>, {0xCA, 1, 0, 0})
};

/// Class /Script/ModelingOperators.RecomputeUVsOpFactory
/// Size: 0x0118 (0x000028 - 0x000140)
class URecomputeUVsOpFactory : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
	CMember(class URecomputeUVsToolProperties*)        Settings                                                    OFFSET(get<T>, {0x30, 8, 0, 0})
};

/// Class /Script/ModelingOperators.UVLayoutOperatorFactory
/// Size: 0x0178 (0x000028 - 0x0001A0)
class UUVLayoutOperatorFactory : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
	CMember(class UUVLayoutProperties*)                Settings                                                    OFFSET(get<T>, {0x30, 8, 0, 0})
};

/// Enum /Script/ModelingOperators.ERecomputeUVsPropertiesUnwrapType
/// Size: 0x04
enum class ERecomputeUVsPropertiesUnwrapType : uint32_t
{
	ERecomputeUVsPropertiesUnwrapType__ExpMap                                        = 0,
	ERecomputeUVsPropertiesUnwrapType__Conformal                                     = 1,
	ERecomputeUVsPropertiesUnwrapType__SpectralConformal                             = 2,
	ERecomputeUVsPropertiesUnwrapType__IslandMerging                                 = 3
};

/// Enum /Script/ModelingOperators.ERecomputeUVsPropertiesIslandMode
/// Size: 0x02
enum class ERecomputeUVsPropertiesIslandMode : uint32_t
{
	ERecomputeUVsPropertiesIslandMode__PolyGroups                                    = 0,
	ERecomputeUVsPropertiesIslandMode__ExistingUVs                                   = 1
};

/// Enum /Script/ModelingOperators.ERecomputeUVsToolOrientationMode
/// Size: 0x02
enum class ERecomputeUVsToolOrientationMode : uint32_t
{
	ERecomputeUVsToolOrientationMode__None                                           = 0,
	ERecomputeUVsToolOrientationMode__MinBounds                                      = 1
};

/// Enum /Script/ModelingOperators.ERecomputeUVsPropertiesLayoutType
/// Size: 0x05
enum class ERecomputeUVsPropertiesLayoutType : uint32_t
{
	ERecomputeUVsPropertiesLayoutType__None                                          = 0,
	ERecomputeUVsPropertiesLayoutType__Repack                                        = 1,
	ERecomputeUVsPropertiesLayoutType__NormalizeToExistingBounds                     = 2,
	ERecomputeUVsPropertiesLayoutType__NormalizeToBounds                             = 3,
	ERecomputeUVsPropertiesLayoutType__NormalizeToWorld                              = 4
};

/// Enum /Script/ModelingOperators.EFlattenCurveMethod
/// Size: 0x05
enum class EFlattenCurveMethod : uint8_t
{
	EFlattenCurveMethod__DoNotFlatten                                                = 0,
	EFlattenCurveMethod__ToBestFitPlane                                              = 1,
	EFlattenCurveMethod__AlongX                                                      = 2,
	EFlattenCurveMethod__AlongY                                                      = 3,
	EFlattenCurveMethod__AlongZ                                                      = 4
};

/// Enum /Script/ModelingOperators.ECombineCurvesMethod
/// Size: 0x05
enum class ECombineCurvesMethod : uint8_t
{
	ECombineCurvesMethod__LeaveSeparate                                              = 0,
	ECombineCurvesMethod__Union                                                      = 1,
	ECombineCurvesMethod__Intersect                                                  = 2,
	ECombineCurvesMethod__Difference                                                 = 3,
	ECombineCurvesMethod__ExclusiveOr                                                = 4
};

/// Enum /Script/ModelingOperators.EOffsetClosedCurvesMethod
/// Size: 0x03
enum class EOffsetClosedCurvesMethod : uint8_t
{
	EOffsetClosedCurvesMethod__DoNotOffset                                           = 0,
	EOffsetClosedCurvesMethod__OffsetOuterSide                                       = 1,
	EOffsetClosedCurvesMethod__OffsetBothSides                                       = 2
};

/// Enum /Script/ModelingOperators.EOffsetOpenCurvesMethod
/// Size: 0x02
enum class EOffsetOpenCurvesMethod : uint8_t
{
	EOffsetOpenCurvesMethod__TreatAsClosed                                           = 0,
	EOffsetOpenCurvesMethod__Offset                                                  = 1
};

/// Enum /Script/ModelingOperators.EOffsetJoinMethod
/// Size: 0x03
enum class EOffsetJoinMethod : uint8_t
{
	EOffsetJoinMethod__Square                                                        = 0,
	EOffsetJoinMethod__Miter                                                         = 1,
	EOffsetJoinMethod__Round                                                         = 2
};

/// Enum /Script/ModelingOperators.EOpenCurveEndShapes
/// Size: 0x03
enum class EOpenCurveEndShapes : uint8_t
{
	EOpenCurveEndShapes__Square                                                      = 0,
	EOpenCurveEndShapes__Round                                                       = 1,
	EOpenCurveEndShapes__Butt                                                        = 2
};

/// Enum /Script/ModelingOperators.EUVLayoutType
/// Size: 0x04
enum class EUVLayoutType : uint32_t
{
	EUVLayoutType__Transform                                                         = 0,
	EUVLayoutType__Stack                                                             = 1,
	EUVLayoutType__Repack                                                            = 2,
	EUVLayoutType__Normalize                                                         = 3
};

/// Enum /Script/ModelingOperators.ENormalCalculationMethod
/// Size: 0x03
enum class ENormalCalculationMethod : uint8_t
{
	ENormalCalculationMethod__AreaWeighted                                           = 0,
	ENormalCalculationMethod__AngleWeighted                                          = 1,
	ENormalCalculationMethod__AreaAngleWeighting                                     = 2
};

/// Enum /Script/ModelingOperators.ESplitNormalMethod
/// Size: 0x05
enum class ESplitNormalMethod : uint8_t
{
	ESplitNormalMethod__UseExistingTopology                                          = 0,
	ESplitNormalMethod__FaceNormalThreshold                                          = 1,
	ESplitNormalMethod__FaceGroupID                                                  = 2,
	ESplitNormalMethod__PerTriangle                                                  = 3,
	ESplitNormalMethod__PerVertex                                                    = 4
};

/// Enum /Script/ModelingOperators.EHoleFillOpFillType
/// Size: 0x05
enum class EHoleFillOpFillType : uint8_t
{
	EHoleFillOpFillType__TriangleFan                                                 = 0,
	EHoleFillOpFillType__PolygonEarClipping                                          = 1,
	EHoleFillOpFillType__Planar                                                      = 2,
	EHoleFillOpFillType__Minimal                                                     = 3,
	EHoleFillOpFillType__Smooth                                                      = 4
};

/// Enum /Script/ModelingOperators.ERemeshType
/// Size: 0x03
enum class ERemeshType : uint8_t
{
	ERemeshType__Standard                                                            = 0,
	ERemeshType__FullPass                                                            = 1,
	ERemeshType__NormalFlow                                                          = 2
};

/// Enum /Script/ModelingOperators.ERemeshSmoothingType
/// Size: 0x03
enum class ERemeshSmoothingType : uint8_t
{
	ERemeshSmoothingType__Uniform                                                    = 0,
	ERemeshSmoothingType__Cotangent                                                  = 1,
	ERemeshSmoothingType__MeanValue                                                  = 2
};

/// Enum /Script/ModelingOperators.ECSGOperation
/// Size: 0x04
enum class ECSGOperation : uint8_t
{
	ECSGOperation__DifferenceAB                                                      = 0,
	ECSGOperation__DifferenceBA                                                      = 1,
	ECSGOperation__Intersect                                                         = 2,
	ECSGOperation__Union                                                             = 3
};

/// Enum /Script/ModelingOperators.ETrimOperation
/// Size: 0x02
enum class ETrimOperation : uint8_t
{
	ETrimOperation__TrimA                                                            = 0,
	ETrimOperation__TrimB                                                            = 1
};

/// Enum /Script/ModelingOperators.ETrimSide
/// Size: 0x02
enum class ETrimSide : uint8_t
{
	ETrimSide__RemoveInside                                                          = 0,
	ETrimSide__RemoveOutside                                                         = 1
};

/// Enum /Script/ModelingOperators.EMorphologyOperation
/// Size: 0x04
enum class EMorphologyOperation : uint8_t
{
	EMorphologyOperation__Dilate                                                     = 0,
	EMorphologyOperation__Contract                                                   = 1,
	EMorphologyOperation__Close                                                      = 2,
	EMorphologyOperation__Open                                                       = 3
};

/// Enum /Script/ModelingOperators.EUVProjectionMethod
/// Size: 0x04
enum class EUVProjectionMethod : uint8_t
{
	EUVProjectionMethod__Box                                                         = 0,
	EUVProjectionMethod__Cylinder                                                    = 1,
	EUVProjectionMethod__Plane                                                       = 2,
	EUVProjectionMethod__ExpMap                                                      = 3
};

