
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine
/// dependency: StructUtils

/// Enum /Script/PCG.EPCGAttributeAccessorFlags
/// Size: 0x05
enum class EPCGAttributeAccessorFlags : uint8_t
{
	EPCGAttributeAccessorFlags__StrictType                                           = 1,
	EPCGAttributeAccessorFlags__AllowBroadcast                                       = 2,
	EPCGAttributeAccessorFlags__AllowConstructible                                   = 4,
	EPCGAttributeAccessorFlags__AllowSetDefaultValue                                 = 8,
	EPCGAttributeAccessorFlags__EPCGAttributeAccessorFlags_MAX                       = 9
};

/// Enum /Script/PCG.EPCGAttributeFilterOperator
/// Size: 0x10
enum class EPCGAttributeFilterOperator : uint8_t
{
	EPCGAttributeFilterOperator__Greater                                             = 0,
	EPCGAttributeFilterOperator__GreaterOrEqual                                      = 1,
	EPCGAttributeFilterOperator__Lesser                                              = 2,
	EPCGAttributeFilterOperator__LesserOrEqual                                       = 3,
	EPCGAttributeFilterOperator__Equal                                               = 4,
	EPCGAttributeFilterOperator__NotEqual                                            = 5,
	EPCGAttributeFilterOperator__InRange                                             = 6,
	EPCGAttributeFilterOperator__Substring                                           = 7,
	EPCGAttributeFilterOperator__Matches                                             = 8,
	EPCGAttributeFilterOperator__EPCGAttributeFilterOperator_MAX                     = 9
};

/// Enum /Script/PCG.EPCGAttributePropertySelection
/// Size: 0x04
enum class EPCGAttributePropertySelection : uint32_t
{
	EPCGAttributePropertySelection__Attribute                                        = 0,
	EPCGAttributePropertySelection__PointProperty                                    = 1,
	EPCGAttributePropertySelection__ExtraProperty                                    = 2,
	EPCGAttributePropertySelection__EPCGAttributePropertySelection_MAX               = 3
};

/// Enum /Script/PCG.EPCGExtraProperties
/// Size: 0x02
enum class EPCGExtraProperties : uint8_t
{
	EPCGExtraProperties__Index                                                       = 0,
	EPCGExtraProperties__EPCGExtraProperties_MAX                                     = 1
};

/// Enum /Script/PCG.EPCGChangeType
/// Size: 0x09
enum class EPCGChangeType : uint8_t
{
	EPCGChangeType__None                                                             = 0,
	EPCGChangeType__Cosmetic                                                         = 1,
	EPCGChangeType__Settings                                                         = 2,
	EPCGChangeType__Input                                                            = 4,
	EPCGChangeType__Edge                                                             = 8,
	EPCGChangeType__Node                                                             = 16,
	EPCGChangeType__Structural                                                       = 32,
	EPCGChangeType__GenerationGrid                                                   = 64,
	EPCGChangeType__EPCGChangeType_MAX                                               = 65
};

/// Enum /Script/PCG.EPCGDataType
/// Size: 0x20
enum class EPCGDataType : uint32_t
{
	EPCGDataType__None                                                               = 0,
	EPCGDataType__Point                                                              = 2,
	EPCGDataType__Spline                                                             = 4,
	EPCGDataType__LandscapeSpline                                                    = 8,
	EPCGDataType__PolyLine                                                           = 12,
	EPCGDataType__Landscape                                                          = 16,
	EPCGDataType__Texture                                                            = 32,
	EPCGDataType__RenderTarget                                                       = 64,
	EPCGDataType__BaseTexture                                                        = 96,
	EPCGDataType__Surface                                                            = 112,
	EPCGDataType__Volume                                                             = 128,
	EPCGDataType__Primitive                                                          = 256,
	EPCGDataType__Concrete                                                           = 510,
	EPCGDataType__Composite                                                          = 512,
	EPCGDataType__Spatial                                                            = 1022,
	EPCGDataType__Param                                                              = 134217728,
	EPCGDataType__Settings                                                           = 268435456,
	EPCGDataType__Other                                                              = 536870912,
	EPCGDataType__Any                                                                = 1073741823,
	EPCGDataType__EPCGDataType_MAX                                                   = 1073741824
};

/// Enum /Script/PCG.EPCGExclusiveDataType
/// Size: 0x20
enum class EPCGExclusiveDataType : uint8_t
{
	EPCGExclusiveDataType__None                                                      = 0,
	EPCGExclusiveDataType__Point                                                     = 1,
	EPCGExclusiveDataType__Spline                                                    = 2,
	EPCGExclusiveDataType__LandscapeSpline                                           = 3,
	EPCGExclusiveDataType__PolyLine                                                  = 4,
	EPCGExclusiveDataType__Landscape                                                 = 5,
	EPCGExclusiveDataType__Texture                                                   = 6,
	EPCGExclusiveDataType__RenderTarget                                              = 7,
	EPCGExclusiveDataType__BaseTexture                                               = 8,
	EPCGExclusiveDataType__Surface                                                   = 9,
	EPCGExclusiveDataType__Volume                                                    = 10,
	EPCGExclusiveDataType__Primitive                                                 = 11,
	EPCGExclusiveDataType__Concrete                                                  = 12,
	EPCGExclusiveDataType__Composite                                                 = 13,
	EPCGExclusiveDataType__Spatial                                                   = 14,
	EPCGExclusiveDataType__Param                                                     = 15,
	EPCGExclusiveDataType__Settings                                                  = 16,
	EPCGExclusiveDataType__Other                                                     = 17,
	EPCGExclusiveDataType__Any                                                       = 18,
	EPCGExclusiveDataType__EPCGExclusiveDataType_MAX                                 = 19
};

/// Enum /Script/PCG.EPCGCoordinateSpace
/// Size: 0x04
enum class EPCGCoordinateSpace : uint8_t
{
	EPCGCoordinateSpace__World                                                       = 0,
	EPCGCoordinateSpace__OriginalComponent                                           = 1,
	EPCGCoordinateSpace__LocalComponent                                              = 2,
	EPCGCoordinateSpace__EPCGCoordinateSpace_MAX                                     = 3
};

/// Enum /Script/PCG.EPCGHiGenGrid
/// Size: 0x15
enum class EPCGHiGenGrid : uint32_t
{
	EPCGHiGenGrid__Uninitialized                                                     = 0,
	EPCGHiGenGrid__Grid4                                                             = 4,
	EPCGHiGenGrid__Grid8                                                             = 8,
	EPCGHiGenGrid__Grid16                                                            = 16,
	EPCGHiGenGrid__Grid32                                                            = 32,
	EPCGHiGenGrid__Grid64                                                            = 64,
	EPCGHiGenGrid__Grid128                                                           = 128,
	EPCGHiGenGrid__Grid256                                                           = 256,
	EPCGHiGenGrid__Grid512                                                           = 512,
	EPCGHiGenGrid__Grid1024                                                          = 1024,
	EPCGHiGenGrid__Grid2048                                                          = 2048,
	EPCGHiGenGrid__GridMin                                                           = 4,
	EPCGHiGenGrid__GridMax                                                           = 2048,
	EPCGHiGenGrid__Unbounded                                                         = -2147483648,
	EPCGHiGenGrid__EPCGHiGenGrid_MAX                                                 = -2147483647
};

/// Enum /Script/PCG.EPCGAttachOptions
/// Size: 0x04
enum class EPCGAttachOptions : uint32_t
{
	EPCGAttachOptions__NotAttached                                                   = 0,
	EPCGAttachOptions__Attached                                                      = 1,
	EPCGAttachOptions__InFolder                                                      = 2,
	EPCGAttachOptions__EPCGAttachOptions_MAX                                         = 3
};

/// Enum /Script/PCG.EPCGEditorDirtyMode
/// Size: 0x04
enum class EPCGEditorDirtyMode : uint8_t
{
	EPCGEditorDirtyMode__Normal                                                      = 0,
	EPCGEditorDirtyMode__Preview                                                     = 1,
	EPCGEditorDirtyMode__LoadAsPreview                                               = 2,
	EPCGEditorDirtyMode__EPCGEditorDirtyMode_MAX                                     = 3
};

/// Enum /Script/PCG.EPCGNodeTitleType
/// Size: 0x03
enum class EPCGNodeTitleType : uint8_t
{
	EPCGNodeTitleType__FullTitle                                                     = 0,
	EPCGNodeTitleType__ListView                                                      = 1,
	EPCGNodeTitleType__EPCGNodeTitleType_MAX                                         = 2
};

/// Enum /Script/PCG.EPCGControlFlowSelectionMode
/// Size: 0x04
enum class EPCGControlFlowSelectionMode : uint8_t
{
	EPCGControlFlowSelectionMode__Integer                                            = 0,
	EPCGControlFlowSelectionMode__Enum                                               = 1,
	EPCGControlFlowSelectionMode__String                                             = 2,
	EPCGControlFlowSelectionMode__EPCGControlFlowSelectionMode_MAX                   = 3
};

/// Enum /Script/PCG.EPCGLocalGridPivot
/// Size: 0x04
enum class EPCGLocalGridPivot : uint8_t
{
	EPCGLocalGridPivot__Global                                                       = 0,
	EPCGLocalGridPivot__OriginalComponent                                            = 1,
	EPCGLocalGridPivot__LocalComponent                                               = 2,
	EPCGLocalGridPivot__EPCGLocalGridPivot_MAX                                       = 3
};

/// Enum /Script/PCG.EPCGPointPosition
/// Size: 0x03
enum class EPCGPointPosition : uint8_t
{
	EPCGPointPosition__CellCenter                                                    = 0,
	EPCGPointPosition__CellCorners                                                   = 1,
	EPCGPointPosition__EPCGPointPosition_MAX                                         = 2
};

/// Enum /Script/PCG.EPCGGridPivot
/// Size: 0x04
enum class EPCGGridPivot : uint8_t
{
	EPCGGridPivot__Global                                                            = 0,
	EPCGGridPivot__OriginalComponent                                                 = 1,
	EPCGGridPivot__LocalComponent                                                    = 2,
	EPCGGridPivot__EPCGGridPivot_MAX                                                 = 3
};

/// Enum /Script/PCG.EPCGAttributeFilterOperation
/// Size: 0x03
enum class EPCGAttributeFilterOperation : uint32_t
{
	EPCGAttributeFilterOperation__KeepSelectedAttributes                             = 0,
	EPCGAttributeFilterOperation__DeleteSelectedAttributes                           = 1,
	EPCGAttributeFilterOperation__EPCGAttributeFilterOperation_MAX                   = 2
};

/// Enum /Script/PCG.EPCGTagFilterOperation
/// Size: 0x03
enum class EPCGTagFilterOperation : uint32_t
{
	EPCGTagFilterOperation__KeepOnlySelectedTags                                     = 0,
	EPCGTagFilterOperation__DeleteSelectedTags                                       = 1,
	EPCGTagFilterOperation__EPCGTagFilterOperation_MAX                               = 2
};

/// Enum /Script/PCG.PCGDistanceShape
/// Size: 0x04
enum class PCGDistanceShape : uint32_t
{
	PCGDistanceShape__SphereBounds                                                   = 0,
	PCGDistanceShape__BoxBounds                                                      = 1,
	PCGDistanceShape__Center                                                         = 2,
	PCGDistanceShape__PCGDistanceShape_MAX                                           = 3
};

/// Enum /Script/PCG.EPCGUnitTestDummyEnum
/// Size: 0x04
enum class EPCGUnitTestDummyEnum : uint64_t
{
	EPCGUnitTestDummyEnum__One                                                       = 0,
	EPCGUnitTestDummyEnum__Two                                                       = 1,
	EPCGUnitTestDummyEnum__Three                                                     = 2,
	EPCGUnitTestDummyEnum__EPCGUnitTestDummyEnum_MAX                                 = 3
};

/// Enum /Script/PCG.EPCGMetadataTypes
/// Size: 0x18
enum class EPCGMetadataTypes : uint8_t
{
	EPCGMetadataTypes__Float                                                         = 0,
	EPCGMetadataTypes__Double                                                        = 1,
	EPCGMetadataTypes__Integer32                                                     = 2,
	EPCGMetadataTypes__Integer64                                                     = 3,
	EPCGMetadataTypes__Vector2                                                       = 4,
	EPCGMetadataTypes__Vector                                                        = 5,
	EPCGMetadataTypes__Vector4                                                       = 6,
	EPCGMetadataTypes__Quaternion                                                    = 7,
	EPCGMetadataTypes__Transform                                                     = 8,
	EPCGMetadataTypes__String                                                        = 9,
	EPCGMetadataTypes__Boolean                                                       = 10,
	EPCGMetadataTypes__Rotator                                                       = 11,
	EPCGMetadataTypes__Name                                                          = 12,
	EPCGMetadataTypes__SoftObjectPath                                                = 13,
	EPCGMetadataTypes__SoftClassPath                                                 = 14,
	EPCGMetadataTypes__Count                                                         = 15,
	EPCGMetadataTypes__Unknown                                                       = 255,
	EPCGMetadataTypes__EPCGMetadataTypes_MAX                                         = 256
};

/// Enum /Script/PCG.EPCGMetadataOp
/// Size: 0x08
enum class EPCGMetadataOp : uint8_t
{
	EPCGMetadataOp__Min                                                              = 0,
	EPCGMetadataOp__Max                                                              = 1,
	EPCGMetadataOp__Sub                                                              = 2,
	EPCGMetadataOp__Add                                                              = 3,
	EPCGMetadataOp__Mul                                                              = 4,
	EPCGMetadataOp__Div                                                              = 5,
	EPCGMetadataOp__SourceValue                                                      = 6,
	EPCGMetadataOp__TargetValue                                                      = 7
};

/// Enum /Script/PCG.EPCGMetadataFilterMode
/// Size: 0x03
enum class EPCGMetadataFilterMode : uint8_t
{
	EPCGMetadataFilterMode__ExcludeAttributes                                        = 0,
	EPCGMetadataFilterMode__IncludeAttributes                                        = 1,
	EPCGMetadataFilterMode__EPCGMetadataFilterMode_MAX                               = 2
};

/// Enum /Script/PCG.EPCGMetadataMakeRotatorOp
/// Size: 0x12
enum class EPCGMetadataMakeRotatorOp : uint8_t
{
	EPCGMetadataMakeRotatorOp__MakeRotFromX                                          = 0,
	EPCGMetadataMakeRotatorOp__MakeRotFromY                                          = 1,
	EPCGMetadataMakeRotatorOp__MakeRotFromZ                                          = 2,
	EPCGMetadataMakeRotatorOp__MakeRotFromXY                                         = 3,
	EPCGMetadataMakeRotatorOp__MakeRotFromYX                                         = 4,
	EPCGMetadataMakeRotatorOp__MakeRotFromXZ                                         = 5,
	EPCGMetadataMakeRotatorOp__MakeRotFromZX                                         = 6,
	EPCGMetadataMakeRotatorOp__MakeRotFromYZ                                         = 7,
	EPCGMetadataMakeRotatorOp__MakeRotFromZY                                         = 8,
	EPCGMetadataMakeRotatorOp__MakeRotFromAxes                                       = 9,
	EPCGMetadataMakeRotatorOp__MakeRotFromAngles                                     = 10,
	EPCGMetadataMakeRotatorOp__EPCGMetadataMakeRotatorOp_MAX                         = 11
};

/// Enum /Script/PCG.EPCGMetadataTypesConstantStructStringMode
/// Size: 0x04
enum class EPCGMetadataTypesConstantStructStringMode : uint32_t
{
	EPCGMetadataTypesConstantStructStringMode__String                                = 0,
	EPCGMetadataTypesConstantStructStringMode__SoftObjectPath                        = 1,
	EPCGMetadataTypesConstantStructStringMode__SoftClassPath                         = 2,
	EPCGMetadataTypesConstantStructStringMode__EPCGMetadataTypesConstantStructStringMode_MAX = 3
};

/// Enum /Script/PCG.PCGNormalToDensityMode
/// Size: 0x08
enum class PCGNormalToDensityMode : uint8_t
{
	PCGNormalToDensityMode__Set                                                      = 0,
	PCGNormalToDensityMode__Minimum                                                  = 1,
	PCGNormalToDensityMode__Maximum                                                  = 2,
	PCGNormalToDensityMode__Add                                                      = 3,
	PCGNormalToDensityMode__Subtract                                                 = 4,
	PCGNormalToDensityMode__Multiply                                                 = 5,
	PCGNormalToDensityMode__Divide                                                   = 6,
	PCGNormalToDensityMode__PCGNormalToDensityMode_MAX                               = 7
};

/// Enum /Script/PCG.EPCGPointNeighborhoodDensityMode
/// Size: 0x04
enum class EPCGPointNeighborhoodDensityMode : uint32_t
{
	EPCGPointNeighborhoodDensityMode__None                                           = 0,
	EPCGPointNeighborhoodDensityMode__SetNormalizedDistanceToDensity                 = 1,
	EPCGPointNeighborhoodDensityMode__SetAverageDensity                              = 2,
	EPCGPointNeighborhoodDensityMode__EPCGPointNeighborhoodDensityMode_MAX           = 3
};

/// Enum /Script/PCG.EPCGPrintVerbosity
/// Size: 0x04
enum class EPCGPrintVerbosity : uint8_t
{
	EPCGPrintVerbosity__Log                                                          = 5,
	EPCGPrintVerbosity__Warning                                                      = 3,
	EPCGPrintVerbosity__Error                                                        = 2,
	EPCGPrintVerbosity__EPCGPrintVerbosity_MAX                                       = 6
};

/// Enum /Script/PCG.EPCGProjectionColorBlendMode
/// Size: 0x06
enum class EPCGProjectionColorBlendMode : uint8_t
{
	EPCGProjectionColorBlendMode__SourceValue                                        = 0,
	EPCGProjectionColorBlendMode__TargetValue                                        = 1,
	EPCGProjectionColorBlendMode__Add                                                = 2,
	EPCGProjectionColorBlendMode__Subtract                                           = 3,
	EPCGProjectionColorBlendMode__Multiply                                           = 4,
	EPCGProjectionColorBlendMode__EPCGProjectionColorBlendMode_MAX                   = 5
};

/// Enum /Script/PCG.EPCGProjectionTagMergeMode
/// Size: 0x04
enum class EPCGProjectionTagMergeMode : uint8_t
{
	EPCGProjectionTagMergeMode__Source                                               = 0,
	EPCGProjectionTagMergeMode__Target                                               = 1,
	EPCGProjectionTagMergeMode__Both                                                 = 2,
	EPCGProjectionTagMergeMode__EPCGProjectionTagMergeMode_MAX                       = 3
};

/// Enum /Script/PCG.EPCGTextureMappingMethod
/// Size: 0x03
enum class EPCGTextureMappingMethod : uint8_t
{
	EPCGTextureMappingMethod__Planar                                                 = 0,
	EPCGTextureMappingMethod__UVCoordinates                                          = 1,
	EPCGTextureMappingMethod__EPCGTextureMappingMethod_MAX                           = 2
};

/// Enum /Script/PCG.EPCGSortMethod
/// Size: 0x03
enum class EPCGSortMethod : uint8_t
{
	EPCGSortMethod__Ascending                                                        = 0,
	EPCGSortMethod__Descending                                                       = 1,
	EPCGSortMethod__EPCGSortMethod_MAX                                               = 2
};

/// Enum /Script/PCG.EPCGSplitAxis
/// Size: 0x04
enum class EPCGSplitAxis : uint32_t
{
	EPCGSplitAxis__X                                                                 = 0,
	EPCGSplitAxis__Y                                                                 = 1,
	EPCGSplitAxis__Z                                                                 = 2,
	EPCGSplitAxis__EPCGSplitAxis_MAX                                                 = 3
};

/// Enum /Script/PCG.EPCGDifferenceDensityFunction
/// Size: 0x04
enum class EPCGDifferenceDensityFunction : uint8_t
{
	EPCGDifferenceDensityFunction__Minimum                                           = 0,
	EPCGDifferenceDensityFunction__ClampedSubstraction                               = 1,
	EPCGDifferenceDensityFunction__Binary                                            = 2,
	EPCGDifferenceDensityFunction__EPCGDifferenceDensityFunction_MAX                 = 3
};

/// Enum /Script/PCG.EPCGDifferenceMode
/// Size: 0x04
enum class EPCGDifferenceMode : uint8_t
{
	EPCGDifferenceMode__Inferred                                                     = 0,
	EPCGDifferenceMode__Continuous                                                   = 1,
	EPCGDifferenceMode__Discrete                                                     = 2,
	EPCGDifferenceMode__EPCGDifferenceMode_MAX                                       = 3
};

/// Enum /Script/PCG.EPCGIntersectionDensityFunction
/// Size: 0x03
enum class EPCGIntersectionDensityFunction : uint8_t
{
	EPCGIntersectionDensityFunction__Multiply                                        = 0,
	EPCGIntersectionDensityFunction__Minimum                                         = 1,
	EPCGIntersectionDensityFunction__EPCGIntersectionDensityFunction_MAX             = 2
};

/// Enum /Script/PCG.EPCGTextureColorChannel
/// Size: 0x05
enum class EPCGTextureColorChannel : uint8_t
{
	EPCGTextureColorChannel__Red                                                     = 0,
	EPCGTextureColorChannel__Green                                                   = 1,
	EPCGTextureColorChannel__Blue                                                    = 2,
	EPCGTextureColorChannel__Alpha                                                   = 3,
	EPCGTextureColorChannel__EPCGTextureColorChannel_MAX                             = 4
};

/// Enum /Script/PCG.EPCGTextureDensityFunction
/// Size: 0x03
enum class EPCGTextureDensityFunction : uint8_t
{
	EPCGTextureDensityFunction__Ignore                                               = 0,
	EPCGTextureDensityFunction__Multiply                                             = 1,
	EPCGTextureDensityFunction__EPCGTextureDensityFunction_MAX                       = 2
};

/// Enum /Script/PCG.EPCGTextureFilter
/// Size: 0x03
enum class EPCGTextureFilter : uint8_t
{
	EPCGTextureFilter__Point                                                         = 0,
	EPCGTextureFilter__Bilinear                                                      = 1,
	EPCGTextureFilter__EPCGTextureFilter_MAX                                         = 2
};

/// Enum /Script/PCG.EPCGTextureAddressMode
/// Size: 0x03
enum class EPCGTextureAddressMode : uint8_t
{
	EPCGTextureAddressMode__Clamp                                                    = 0,
	EPCGTextureAddressMode__Wrap                                                     = 1,
	EPCGTextureAddressMode__EPCGTextureAddressMode_MAX                               = 2
};

/// Enum /Script/PCG.EPCGUnionType
/// Size: 0x04
enum class EPCGUnionType : uint8_t
{
	EPCGUnionType__LeftToRightPriority                                               = 0,
	EPCGUnionType__RightToLeftPriority                                               = 1,
	EPCGUnionType__KeepAll                                                           = 2,
	EPCGUnionType__EPCGUnionType_MAX                                                 = 3
};

/// Enum /Script/PCG.EPCGUnionDensityFunction
/// Size: 0x04
enum class EPCGUnionDensityFunction : uint8_t
{
	EPCGUnionDensityFunction__Maximum                                                = 0,
	EPCGUnionDensityFunction__ClampedAddition                                        = 1,
	EPCGUnionDensityFunction__Binary                                                 = 2,
	EPCGUnionDensityFunction__EPCGUnionDensityFunction_MAX                           = 3
};

/// Enum /Script/PCG.EPCGWorldQueryFilterByTag
/// Size: 0x04
enum class EPCGWorldQueryFilterByTag : uint32_t
{
	EPCGWorldQueryFilterByTag__NoTagFilter                                           = 0,
	EPCGWorldQueryFilterByTag__IncludeTagged                                         = 1,
	EPCGWorldQueryFilterByTag__ExcludeTagged                                         = 2,
	EPCGWorldQueryFilterByTag__EPCGWorldQueryFilterByTag_MAX                         = 3
};

/// Enum /Script/PCG.EPCGMetadataBitwiseOperation
/// Size: 0x05
enum class EPCGMetadataBitwiseOperation : uint16_t
{
	EPCGMetadataBitwiseOperation__And                                                = 0,
	EPCGMetadataBitwiseOperation__Not                                                = 1,
	EPCGMetadataBitwiseOperation__Or                                                 = 2,
	EPCGMetadataBitwiseOperation__Xor                                                = 3,
	EPCGMetadataBitwiseOperation__EPCGMetadataBitwiseOperation_MAX                   = 4
};

/// Enum /Script/PCG.EPCGMetadataBooleanOperation
/// Size: 0x05
enum class EPCGMetadataBooleanOperation : uint16_t
{
	EPCGMetadataBooleanOperation__And                                                = 0,
	EPCGMetadataBooleanOperation__Not                                                = 1,
	EPCGMetadataBooleanOperation__Or                                                 = 2,
	EPCGMetadataBooleanOperation__Xor                                                = 3,
	EPCGMetadataBooleanOperation__EPCGMetadataBooleanOperation_MAX                   = 4
};

/// Enum /Script/PCG.EPCGMetadataCompareOperation
/// Size: 0x07
enum class EPCGMetadataCompareOperation : uint16_t
{
	EPCGMetadataCompareOperation__Equal                                              = 0,
	EPCGMetadataCompareOperation__NotEqual                                           = 1,
	EPCGMetadataCompareOperation__Greater                                            = 2,
	EPCGMetadataCompareOperation__GreaterOrEqual                                     = 3,
	EPCGMetadataCompareOperation__Less                                               = 4,
	EPCGMetadataCompareOperation__LessOrEqual                                        = 5,
	EPCGMetadataCompareOperation__EPCGMetadataCompareOperation_MAX                   = 6
};

/// Enum /Script/PCG.EPCGMetadataOperationTarget
/// Size: 0x04
enum class EPCGMetadataOperationTarget : uint8_t
{
	EPCGMetadataOperationTarget__PropertyToAttribute                                 = 0,
	EPCGMetadataOperationTarget__AttributeToProperty                                 = 1,
	EPCGMetadataOperationTarget__AttributeToAttribute                                = 2,
	EPCGMetadataOperationTarget__EPCGMetadataOperationTarget_MAX                     = 3
};

/// Enum /Script/PCG.EPCGMetadataMakeVector3
/// Size: 0x03
enum class EPCGMetadataMakeVector3 : uint8_t
{
	EPCGMetadataMakeVector3__ThreeValues                                             = 0,
	EPCGMetadataMakeVector3__Vector2AndValue                                         = 1,
	EPCGMetadataMakeVector3__EPCGMetadataMakeVector3_MAX                             = 2
};

/// Enum /Script/PCG.EPCGMetadataMakeVector4
/// Size: 0x05
enum class EPCGMetadataMakeVector4 : uint8_t
{
	EPCGMetadataMakeVector4__FourValues                                              = 0,
	EPCGMetadataMakeVector4__Vector2AndTwoValues                                     = 1,
	EPCGMetadataMakeVector4__TwoVector2                                              = 2,
	EPCGMetadataMakeVector4__Vector3AndValue                                         = 3,
	EPCGMetadataMakeVector4__EPCGMetadataMakeVector4_MAX                             = 4
};

/// Enum /Script/PCG.EPCGMetadataMathsOperation
/// Size: 0x25
enum class EPCGMetadataMathsOperation : uint16_t
{
	EPCGMetadataMathsOperation__UnaryOp                                              = 1024,
	EPCGMetadataMathsOperation__Sign                                                 = 1025,
	EPCGMetadataMathsOperation__Frac                                                 = 1026,
	EPCGMetadataMathsOperation__Truncate                                             = 1027,
	EPCGMetadataMathsOperation__Round                                                = 1028,
	EPCGMetadataMathsOperation__Sqrt                                                 = 1029,
	EPCGMetadataMathsOperation__Abs                                                  = 1030,
	EPCGMetadataMathsOperation__Floor                                                = 1031,
	EPCGMetadataMathsOperation__Ceil                                                 = 1032,
	EPCGMetadataMathsOperation__OneMinus                                             = 1033,
	EPCGMetadataMathsOperation__BinaryOp                                             = 2048,
	EPCGMetadataMathsOperation__Add                                                  = 2049,
	EPCGMetadataMathsOperation__Subtract                                             = 2050,
	EPCGMetadataMathsOperation__Multiply                                             = 2051,
	EPCGMetadataMathsOperation__Divide                                               = 2052,
	EPCGMetadataMathsOperation__Max                                                  = 2053,
	EPCGMetadataMathsOperation__Min                                                  = 2054,
	EPCGMetadataMathsOperation__Pow                                                  = 2055,
	EPCGMetadataMathsOperation__ClampMin                                             = 2056,
	EPCGMetadataMathsOperation__ClampMax                                             = 2057,
	EPCGMetadataMathsOperation__Modulo                                               = 2058,
	EPCGMetadataMathsOperation__Set                                                  = 2059,
	EPCGMetadataMathsOperation__TernaryOp                                            = 4096,
	EPCGMetadataMathsOperation__Clamp                                                = 4097,
	EPCGMetadataMathsOperation__Lerp                                                 = 4098
};

/// Enum /Script/PCG.EPCGMetadataSettingsBaseMode
/// Size: 0x04
enum class EPCGMetadataSettingsBaseMode : uint8_t
{
	EPCGMetadataSettingsBaseMode__Inferred                                           = 0,
	EPCGMetadataSettingsBaseMode__NoBroadcast                                        = 1,
	EPCGMetadataSettingsBaseMode__Broadcast                                          = 2,
	EPCGMetadataSettingsBaseMode__EPCGMetadataSettingsBaseMode_MAX                   = 3
};

/// Enum /Script/PCG.EPCGMetadataSettingsBaseTypes
/// Size: 0x03
enum class EPCGMetadataSettingsBaseTypes : uint8_t
{
	EPCGMetadataSettingsBaseTypes__AutoUpcastTypes                                   = 0,
	EPCGMetadataSettingsBaseTypes__StrictTypes                                       = 1,
	EPCGMetadataSettingsBaseTypes__EPCGMetadataSettingsBaseTypes_MAX                 = 2
};

/// Enum /Script/PCG.EPCGMetadataRotatorOperation
/// Size: 0x09
enum class EPCGMetadataRotatorOperation : uint16_t
{
	EPCGMetadataRotatorOperation__RotatorOp                                          = 0,
	EPCGMetadataRotatorOperation__Combine                                            = 1,
	EPCGMetadataRotatorOperation__Invert                                             = 2,
	EPCGMetadataRotatorOperation__Lerp                                               = 3,
	EPCGMetadataRotatorOperation__Normalize                                          = 4,
	EPCGMetadataRotatorOperation__TransformOp                                        = 100,
	EPCGMetadataRotatorOperation__TransformRotation                                  = 101,
	EPCGMetadataRotatorOperation__InverseTransformRotation                           = 102,
	EPCGMetadataRotatorOperation__EPCGMetadataRotatorOperation_MAX                   = 103
};

/// Enum /Script/PCG.EPCGMetadataStringOperation
/// Size: 0x02
enum class EPCGMetadataStringOperation : uint16_t
{
	EPCGMetadataStringOperation__Append                                              = 0,
	EPCGMetadataStringOperation__EPCGMetadataStringOperation_MAX                     = 1
};

/// Enum /Script/PCG.EPCGMetadataTransformOperation
/// Size: 0x04
enum class EPCGMetadataTransformOperation : uint16_t
{
	EPCGMetadataTransformOperation__Compose                                          = 0,
	EPCGMetadataTransformOperation__Invert                                           = 1,
	EPCGMetadataTransformOperation__Lerp                                             = 2,
	EPCGMetadataTransformOperation__EPCGMetadataTransformOperation_MAX               = 3
};

/// Enum /Script/PCG.EPCGTransformLerpMode
/// Size: 0x04
enum class EPCGTransformLerpMode : uint16_t
{
	EPCGTransformLerpMode__QuatInterp                                                = 0,
	EPCGTransformLerpMode__EulerInterp                                               = 1,
	EPCGTransformLerpMode__DualQuatInterp                                            = 2,
	EPCGTransformLerpMode__EPCGTransformLerpMode_MAX                                 = 3
};

/// Enum /Script/PCG.EPCGMetadataTrigOperation
/// Size: 0x10
enum class EPCGMetadataTrigOperation : uint16_t
{
	EPCGMetadataTrigOperation__Acos                                                  = 0,
	EPCGMetadataTrigOperation__Asin                                                  = 1,
	EPCGMetadataTrigOperation__Atan                                                  = 2,
	EPCGMetadataTrigOperation__Atan2                                                 = 3,
	EPCGMetadataTrigOperation__Cos                                                   = 4,
	EPCGMetadataTrigOperation__Sin                                                   = 5,
	EPCGMetadataTrigOperation__Tan                                                   = 6,
	EPCGMetadataTrigOperation__DegToRad                                              = 7,
	EPCGMetadataTrigOperation__RadToDeg                                              = 8,
	EPCGMetadataTrigOperation__EPCGMetadataTrigOperation_MAX                         = 9
};

/// Enum /Script/PCG.EPCGMetadataVectorOperation
/// Size: 0x13
enum class EPCGMetadataVectorOperation : uint16_t
{
	EPCGMetadataVectorOperation__VectorOp                                            = 0,
	EPCGMetadataVectorOperation__Cross                                               = 1,
	EPCGMetadataVectorOperation__Dot                                                 = 2,
	EPCGMetadataVectorOperation__Distance                                            = 3,
	EPCGMetadataVectorOperation__Normalize                                           = 4,
	EPCGMetadataVectorOperation__Length                                              = 5,
	EPCGMetadataVectorOperation__RotateAroundAxis                                    = 6,
	EPCGMetadataVectorOperation__TransformOp                                         = 100,
	EPCGMetadataVectorOperation__TransformDirection                                  = 101,
	EPCGMetadataVectorOperation__TransformLocation                                   = 102,
	EPCGMetadataVectorOperation__InverseTransformDirection                           = 103,
	EPCGMetadataVectorOperation__InverseTransformLocation                            = 104,
	EPCGMetadataVectorOperation__EPCGMetadataVectorOperation_MAX                     = 105
};

/// Enum /Script/PCG.EPCGActorSelection
/// Size: 0x06
enum class EPCGActorSelection : uint8_t
{
	EPCGActorSelection__ByTag                                                        = 0,
	EPCGActorSelection__ByName                                                       = 1,
	EPCGActorSelection__ByClass                                                      = 2,
	EPCGActorSelection__ByPath                                                       = 3,
	EPCGActorSelection__Unknown                                                      = 4,
	EPCGActorSelection__EPCGActorSelection_MAX                                       = 5
};

/// Enum /Script/PCG.EPCGActorFilter
/// Size: 0x06
enum class EPCGActorFilter : uint8_t
{
	EPCGActorFilter__Self                                                            = 0,
	EPCGActorFilter__Parent                                                          = 1,
	EPCGActorFilter__Root                                                            = 2,
	EPCGActorFilter__AllWorldActors                                                  = 3,
	EPCGActorFilter__Original                                                        = 4,
	EPCGActorFilter__EPCGActorFilter_MAX                                             = 5
};

/// Enum /Script/PCG.EPCGAttributeNoiseMode
/// Size: 0x06
enum class EPCGAttributeNoiseMode : uint8_t
{
	EPCGAttributeNoiseMode__Set                                                      = 0,
	EPCGAttributeNoiseMode__Minimum                                                  = 1,
	EPCGAttributeNoiseMode__Maximum                                                  = 2,
	EPCGAttributeNoiseMode__Add                                                      = 3,
	EPCGAttributeNoiseMode__Multiply                                                 = 4,
	EPCGAttributeNoiseMode__EPCGAttributeNoiseMode_MAX                               = 5
};

/// Enum /Script/PCG.EPCGAttributeReduceOperation
/// Size: 0x04
enum class EPCGAttributeReduceOperation : uint32_t
{
	EPCGAttributeReduceOperation__Average                                            = 0,
	EPCGAttributeReduceOperation__Max                                                = 1,
	EPCGAttributeReduceOperation__Min                                                = 2,
	EPCGAttributeReduceOperation__Sum                                                = 3
};

/// Enum /Script/PCG.EPCGAttributeSelectOperation
/// Size: 0x03
enum class EPCGAttributeSelectOperation : uint32_t
{
	EPCGAttributeSelectOperation__Min                                                = 0,
	EPCGAttributeSelectOperation__Max                                                = 1,
	EPCGAttributeSelectOperation__Median                                             = 2
};

/// Enum /Script/PCG.EPCGAttributeSelectAxis
/// Size: 0x06
enum class EPCGAttributeSelectAxis : uint32_t
{
	EPCGAttributeSelectAxis__X                                                       = 0,
	EPCGAttributeSelectAxis__Y                                                       = 1,
	EPCGAttributeSelectAxis__Z                                                       = 2,
	EPCGAttributeSelectAxis__W                                                       = 3,
	EPCGAttributeSelectAxis__CustomAxis                                              = 4,
	EPCGAttributeSelectAxis__EPCGAttributeSelectAxis_MAX                             = 5
};

/// Enum /Script/PCG.EPCGBoundsModifierMode
/// Size: 0x06
enum class EPCGBoundsModifierMode : uint8_t
{
	EPCGBoundsModifierMode__Set                                                      = 0,
	EPCGBoundsModifierMode__Intersect                                                = 1,
	EPCGBoundsModifierMode__Include                                                  = 2,
	EPCGBoundsModifierMode__Translate                                                = 3,
	EPCGBoundsModifierMode__Scale                                                    = 4,
	EPCGBoundsModifierMode__EPCGBoundsModifierMode_MAX                               = 5
};

/// Enum /Script/PCG.EPCGCopyPointsInheritanceMode
/// Size: 0x04
enum class EPCGCopyPointsInheritanceMode : uint8_t
{
	EPCGCopyPointsInheritanceMode__Relative                                          = 0,
	EPCGCopyPointsInheritanceMode__Source                                            = 1,
	EPCGCopyPointsInheritanceMode__Target                                            = 2,
	EPCGCopyPointsInheritanceMode__EPCGCopyPointsInheritanceMode_MAX                 = 3
};

/// Enum /Script/PCG.EPCGCopyPointsTagInheritanceMode
/// Size: 0x04
enum class EPCGCopyPointsTagInheritanceMode : uint8_t
{
	EPCGCopyPointsTagInheritanceMode__Both                                           = 0,
	EPCGCopyPointsTagInheritanceMode__Source                                         = 1,
	EPCGCopyPointsTagInheritanceMode__Target                                         = 2,
	EPCGCopyPointsTagInheritanceMode__EPCGCopyPointsTagInheritanceMode_MAX           = 3
};

/// Enum /Script/PCG.EPCGCopyPointsMetadataInheritanceMode
/// Size: 0x06
enum class EPCGCopyPointsMetadataInheritanceMode : uint8_t
{
	EPCGCopyPointsMetadataInheritanceMode__SourceFirst                               = 0,
	EPCGCopyPointsMetadataInheritanceMode__TargetFirst                               = 1,
	EPCGCopyPointsMetadataInheritanceMode__SourceOnly                                = 2,
	EPCGCopyPointsMetadataInheritanceMode__TargetOnly                                = 3,
	EPCGCopyPointsMetadataInheritanceMode__None                                      = 4,
	EPCGCopyPointsMetadataInheritanceMode__EPCGCopyPointsMetadataInheritanceMode_MAX = 5
};

/// Enum /Script/PCG.EPCGCreateSplineMode
/// Size: 0x04
enum class EPCGCreateSplineMode : uint8_t
{
	EPCGCreateSplineMode__CreateDataOnly                                             = 0,
	EPCGCreateSplineMode__CreateComponent                                            = 1,
	EPCGCreateSplineMode__CreateNewActor                                             = 2,
	EPCGCreateSplineMode__EPCGCreateSplineMode_MAX                                   = 3
};

/// Enum /Script/PCG.EPCGGetDataFromActorMode
/// Size: 0x06
enum class EPCGGetDataFromActorMode : uint8_t
{
	EPCGGetDataFromActorMode__ParseActorComponents                                   = 0,
	EPCGGetDataFromActorMode__GetSinglePoint                                         = 1,
	EPCGGetDataFromActorMode__GetDataFromProperty                                    = 2,
	EPCGGetDataFromActorMode__GetDataFromPCGComponent                                = 3,
	EPCGGetDataFromActorMode__GetDataFromPCGComponentOrParseComponents               = 4,
	EPCGGetDataFromActorMode__EPCGGetDataFromActorMode_MAX                           = 5
};

/// Enum /Script/PCG.EPCGFilterByTagOperation
/// Size: 0x03
enum class EPCGFilterByTagOperation : uint32_t
{
	EPCGFilterByTagOperation__KeepTagged                                             = 0,
	EPCGFilterByTagOperation__RemoveTagged                                           = 1,
	EPCGFilterByTagOperation__EPCGFilterByTagOperation_MAX                           = 2
};

/// Enum /Script/PCG.EPCGProxyInterfaceMode
/// Size: 0x04
enum class EPCGProxyInterfaceMode : uint8_t
{
	EPCGProxyInterfaceMode__ByNativeElement                                          = 0,
	EPCGProxyInterfaceMode__ByBlueprintElement                                       = 1,
	EPCGProxyInterfaceMode__BySettings                                               = 2,
	EPCGProxyInterfaceMode__EPCGProxyInterfaceMode_MAX                               = 3
};

/// Enum /Script/PCG.EPCGMatchMaxDistanceMode
/// Size: 0x04
enum class EPCGMatchMaxDistanceMode : uint32_t
{
	EPCGMatchMaxDistanceMode__NoMaxDistance                                          = 0,
	EPCGMatchMaxDistanceMode__UseConstantMaxDistance                                 = 1,
	EPCGMatchMaxDistanceMode__AttributeMaxDistance                                   = 2,
	EPCGMatchMaxDistanceMode__EPCGMatchMaxDistanceMode_MAX                           = 3
};

/// Enum /Script/PCG.EPCGPointExtentsModifierMode
/// Size: 0x06
enum class EPCGPointExtentsModifierMode : uint8_t
{
	EPCGPointExtentsModifierMode__Set                                                = 0,
	EPCGPointExtentsModifierMode__Minimum                                            = 1,
	EPCGPointExtentsModifierMode__Maximum                                            = 2,
	EPCGPointExtentsModifierMode__Add                                                = 3,
	EPCGPointExtentsModifierMode__Multiply                                           = 4,
	EPCGPointExtentsModifierMode__EPCGPointExtentsModifierMode_MAX                   = 5
};

/// Enum /Script/PCG.EPCGSelfPruningType
/// Size: 0x06
enum class EPCGSelfPruningType : uint8_t
{
	EPCGSelfPruningType__LargeToSmall                                                = 0,
	EPCGSelfPruningType__SmallToLarge                                                = 1,
	EPCGSelfPruningType__AllEqual                                                    = 2,
	EPCGSelfPruningType__None                                                        = 3,
	EPCGSelfPruningType__RemoveDuplicates                                            = 4,
	EPCGSelfPruningType__EPCGSelfPruningType_MAX                                     = 5
};

/// Enum /Script/PCG.PCGSpatialNoiseMode
/// Size: 0x06
enum class PCGSpatialNoiseMode : uint32_t
{
	PCGSpatialNoiseMode__Perlin2D                                                    = 0,
	PCGSpatialNoiseMode__Caustic2D                                                   = 1,
	PCGSpatialNoiseMode__Voronoi2D                                                   = 2,
	PCGSpatialNoiseMode__FractionalBrownian2D                                        = 3,
	PCGSpatialNoiseMode__EdgeMask2D                                                  = 4,
	PCGSpatialNoiseMode__PCGSpatialNoiseMode_MAX                                     = 5
};

/// Enum /Script/PCG.PCGSpatialNoiseMask2DMode
/// Size: 0x04
enum class PCGSpatialNoiseMask2DMode : uint32_t
{
	PCGSpatialNoiseMask2DMode__Perlin                                                = 0,
	PCGSpatialNoiseMask2DMode__Caustic                                               = 1,
	PCGSpatialNoiseMask2DMode__FractionalBrownian                                    = 2,
	PCGSpatialNoiseMask2DMode__PCGSpatialNoiseMask2DMode_MAX                         = 3
};

/// Enum /Script/PCG.EPCGSpawnActorOption
/// Size: 0x04
enum class EPCGSpawnActorOption : uint8_t
{
	EPCGSpawnActorOption__CollapseActors                                             = 0,
	EPCGSpawnActorOption__MergePCGOnly                                               = 1,
	EPCGSpawnActorOption__NoMerging                                                  = 2,
	EPCGSpawnActorOption__EPCGSpawnActorOption_MAX                                   = 3
};

/// Enum /Script/PCG.EPCGSpawnActorGenerationTrigger
/// Size: 0x05
enum class EPCGSpawnActorGenerationTrigger : uint8_t
{
	EPCGSpawnActorGenerationTrigger__Default                                         = 0,
	EPCGSpawnActorGenerationTrigger__ForceGenerate                                   = 1,
	EPCGSpawnActorGenerationTrigger__DoNotGenerateInEditor                           = 2,
	EPCGSpawnActorGenerationTrigger__DoNotGenerate                                   = 3,
	EPCGSpawnActorGenerationTrigger__EPCGSpawnActorGenerationTrigger_MAX             = 4
};

/// Enum /Script/PCG.EPCGSplineSamplingMode
/// Size: 0x04
enum class EPCGSplineSamplingMode : uint8_t
{
	EPCGSplineSamplingMode__Subdivision                                              = 0,
	EPCGSplineSamplingMode__Distance                                                 = 1,
	EPCGSplineSamplingMode__NumberOfSamples                                          = 2,
	EPCGSplineSamplingMode__EPCGSplineSamplingMode_MAX                               = 3
};

/// Enum /Script/PCG.EPCGSplineSamplingDimension
/// Size: 0x06
enum class EPCGSplineSamplingDimension : uint8_t
{
	EPCGSplineSamplingDimension__OnSpline                                            = 0,
	EPCGSplineSamplingDimension__OnHorizontal                                        = 1,
	EPCGSplineSamplingDimension__OnVertical                                          = 2,
	EPCGSplineSamplingDimension__OnVolume                                            = 3,
	EPCGSplineSamplingDimension__OnInterior                                          = 4,
	EPCGSplineSamplingDimension__EPCGSplineSamplingDimension_MAX                     = 5
};

/// Enum /Script/PCG.EPCGSplineSamplingFill
/// Size: 0x03
enum class EPCGSplineSamplingFill : uint8_t
{
	EPCGSplineSamplingFill__Fill                                                     = 0,
	EPCGSplineSamplingFill__EdgesOnly                                                = 1,
	EPCGSplineSamplingFill__EPCGSplineSamplingFill_MAX                               = 2
};

/// Enum /Script/PCG.EPCGSplineSamplingInteriorOrientation
/// Size: 0x03
enum class EPCGSplineSamplingInteriorOrientation : uint8_t
{
	EPCGSplineSamplingInteriorOrientation__Uniform                                   = 0,
	EPCGSplineSamplingInteriorOrientation__FollowCurvature                           = 1,
	EPCGSplineSamplingInteriorOrientation__EPCGSplineSamplingInteriorOrientation_MAX = 2
};

/// Enum /Script/PCG.EPCGLandscapeCacheSerializationMode
/// Size: 0x04
enum class EPCGLandscapeCacheSerializationMode : uint8_t
{
	EPCGLandscapeCacheSerializationMode__SerializeOnlyAtCook                         = 0,
	EPCGLandscapeCacheSerializationMode__NeverSerialize                              = 1,
	EPCGLandscapeCacheSerializationMode__AlwaysSerialize                             = 2,
	EPCGLandscapeCacheSerializationMode__EPCGLandscapeCacheSerializationMode_MAX     = 3
};

/// Enum /Script/PCG.EPCGLandscapeCacheSerializationContents
/// Size: 0x04
enum class EPCGLandscapeCacheSerializationContents : uint8_t
{
	EPCGLandscapeCacheSerializationContents__SerializeOnlyPositionsAndNormals        = 0,
	EPCGLandscapeCacheSerializationContents__SerializeOnlyLayerData                  = 1,
	EPCGLandscapeCacheSerializationContents__SerializeAll                            = 2,
	EPCGLandscapeCacheSerializationContents__EPCGLandscapeCacheSerializationContents_MAX = 3
};

/// Enum /Script/PCG.EPCGMeshSelectorMaterialOverrideMode
/// Size: 0x04
enum class EPCGMeshSelectorMaterialOverrideMode : uint8_t
{
	EPCGMeshSelectorMaterialOverrideMode__NoOverride                                 = 0,
	EPCGMeshSelectorMaterialOverrideMode__StaticOverride                             = 1,
	EPCGMeshSelectorMaterialOverrideMode__ByAttributeOverride                        = 2,
	EPCGMeshSelectorMaterialOverrideMode__EPCGMeshSelectorMaterialOverrideMode_MAX   = 3
};

/// Enum /Script/PCG.EPCGComponentInput
/// Size: 0x04
enum class EPCGComponentInput : uint8_t
{
	EPCGComponentInput__Actor                                                        = 0,
	EPCGComponentInput__Landscape                                                    = 1,
	EPCGComponentInput__Other                                                        = 2,
	EPCGComponentInput__EPCGComponentInput_MAX                                       = 3
};

/// Enum /Script/PCG.EPCGComponentGenerationTrigger
/// Size: 0x04
enum class EPCGComponentGenerationTrigger : uint8_t
{
	EPCGComponentGenerationTrigger__GenerateOnLoad                                   = 0,
	EPCGComponentGenerationTrigger__GenerateOnDemand                                 = 1,
	EPCGComponentGenerationTrigger__GenerateAtRuntime                                = 2,
	EPCGComponentGenerationTrigger__EPCGComponentGenerationTrigger_MAX               = 3
};

/// Enum /Script/PCG.EPCGComponentDirtyFlag
/// Size: 0x07
enum class EPCGComponentDirtyFlag : uint8_t
{
	EPCGComponentDirtyFlag__None                                                     = 0,
	EPCGComponentDirtyFlag__Actor                                                    = 1,
	EPCGComponentDirtyFlag__Landscape                                                = 2,
	EPCGComponentDirtyFlag__Input                                                    = 4,
	EPCGComponentDirtyFlag__Data                                                     = 8,
	EPCGComponentDirtyFlag__All                                                      = 15,
	EPCGComponentDirtyFlag__EPCGComponentDirtyFlag_MAX                               = 16
};

/// Enum /Script/PCG.EPCGExecutionPhase
/// Size: 0x06
enum class EPCGExecutionPhase : uint8_t
{
	EPCGExecutionPhase__NotExecuted                                                  = 0,
	EPCGExecutionPhase__PrepareData                                                  = 1,
	EPCGExecutionPhase__Execute                                                      = 2,
	EPCGExecutionPhase__PostExecute                                                  = 3,
	EPCGExecutionPhase__Done                                                         = 4,
	EPCGExecutionPhase__EPCGExecutionPhase_MAX                                       = 5
};

/// Enum /Script/PCG.EPCGDebugVisScaleMethod
/// Size: 0x04
enum class EPCGDebugVisScaleMethod : uint8_t
{
	EPCGDebugVisScaleMethod__Relative                                                = 0,
	EPCGDebugVisScaleMethod__Absolute                                                = 1,
	EPCGDebugVisScaleMethod__Extents                                                 = 2,
	EPCGDebugVisScaleMethod__EPCGDebugVisScaleMethod_MAX                             = 3
};

/// Enum /Script/PCG.EPCGPinUsage
/// Size: 0x05
enum class EPCGPinUsage : uint8_t
{
	EPCGPinUsage__Normal                                                             = 0,
	EPCGPinUsage__Loop                                                               = 1,
	EPCGPinUsage__Feedback                                                           = 2,
	EPCGPinUsage__DependencyOnly                                                     = 3,
	EPCGPinUsage__EPCGPinUsage_MAX                                                   = 4
};

/// Enum /Script/PCG.EPCGPinStatus
/// Size: 0x04
enum class EPCGPinStatus : uint8_t
{
	EPCGPinStatus__Normal                                                            = 0,
	EPCGPinStatus__Required                                                          = 1,
	EPCGPinStatus__Advanced                                                          = 2,
	EPCGPinStatus__EPCGPinStatus_MAX                                                 = 3
};

/// Enum /Script/PCG.EPCGTypeConversion
/// Size: 0x07
enum class EPCGTypeConversion : uint8_t
{
	EPCGTypeConversion__NoConversionRequired                                         = 0,
	EPCGTypeConversion__CollapseToPoint                                              = 1,
	EPCGTypeConversion__Filter                                                       = 2,
	EPCGTypeConversion__MakeConcrete                                                 = 3,
	EPCGTypeConversion__SplineToSurface                                              = 4,
	EPCGTypeConversion__Failed                                                       = 5,
	EPCGTypeConversion__EPCGTypeConversion_MAX                                       = 6
};

/// Enum /Script/PCG.EPCGPointProperties
/// Size: 0x13
enum class EPCGPointProperties : uint8_t
{
	EPCGPointProperties__Density                                                     = 0,
	EPCGPointProperties__BoundsMin                                                   = 1,
	EPCGPointProperties__BoundsMax                                                   = 2,
	EPCGPointProperties__Extents                                                     = 3,
	EPCGPointProperties__Color                                                       = 4,
	EPCGPointProperties__Position                                                    = 5,
	EPCGPointProperties__Rotation                                                    = 6,
	EPCGPointProperties__Scale                                                       = 7,
	EPCGPointProperties__Transform                                                   = 8,
	EPCGPointProperties__Steepness                                                   = 9,
	EPCGPointProperties__LocalCenter                                                 = 10,
	EPCGPointProperties__Seed                                                        = 11,
	EPCGPointProperties__EPCGPointProperties_MAX                                     = 12
};

/// Enum /Script/PCG.EPCGSettingsExecutionMode
/// Size: 0x05
enum class EPCGSettingsExecutionMode : uint8_t
{
	EPCGSettingsExecutionMode__Enabled                                               = 0,
	EPCGSettingsExecutionMode__Debug                                                 = 1,
	EPCGSettingsExecutionMode__Isolated                                              = 2,
	EPCGSettingsExecutionMode__Disabled                                              = 3,
	EPCGSettingsExecutionMode__EPCGSettingsExecutionMode_MAX                         = 4
};

/// Enum /Script/PCG.EPCGSettingsType
/// Size: 0x18
enum class EPCGSettingsType : uint8_t
{
	EPCGSettingsType__InputOutput                                                    = 0,
	EPCGSettingsType__Spatial                                                        = 1,
	EPCGSettingsType__Density                                                        = 2,
	EPCGSettingsType__Blueprint                                                      = 3,
	EPCGSettingsType__Metadata                                                       = 4,
	EPCGSettingsType__Filter                                                         = 5,
	EPCGSettingsType__Sampler                                                        = 6,
	EPCGSettingsType__Spawner                                                        = 7,
	EPCGSettingsType__Subgraph                                                       = 8,
	EPCGSettingsType__Debug                                                          = 9,
	EPCGSettingsType__Generic                                                        = 10,
	EPCGSettingsType__Param                                                          = 11,
	EPCGSettingsType__HierarchicalGeneration                                         = 12,
	EPCGSettingsType__ControlFlow                                                    = 13,
	EPCGSettingsType__PointOps                                                       = 14,
	EPCGSettingsType__GraphParameters                                                = 15,
	EPCGSettingsType__Reroute                                                        = 16,
	EPCGSettingsType__EPCGSettingsType_MAX                                           = 17
};

/// Enum /Script/PCG.EDeterminismLevel
/// Size: 0x08
enum class EDeterminismLevel : uint8_t
{
	EDeterminismLevel__None                                                          = 0,
	EDeterminismLevel__NoDeterminism                                                 = 0,
	EDeterminismLevel__Basic                                                         = 1,
	EDeterminismLevel__OrderOrthogonal                                               = 2,
	EDeterminismLevel__OrderConsistent                                               = 3,
	EDeterminismLevel__OrderIndependent                                              = 4,
	EDeterminismLevel__Deterministic                                                 = 4,
	EDeterminismLevel__EDeterminismLevel_MAX                                         = 5
};

/// Class /Script/PCG.PCGData
/// Size: 0x0010 (0x000028 - 0x000038)
class UPCGData : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	uint64_t                                           UID;                                                        // 0x0028   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0030   (0x0008)  MISSED
};

/// Class /Script/PCG.PCGSettingsInterface
/// Size: 0x0008 (0x000038 - 0x000040)
class UPCGSettingsInterface : public UPCGData
{ 
public:
	bool                                               bEnabled;                                                   // 0x0038   (0x0001)  
	bool                                               bDebug;                                                     // 0x0039   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x003A   (0x0006)  MISSED
};

/// Struct /Script/PCG.PCGSettingsOverridableParam
/// Size: 0x0088 (0x000000 - 0x000088)
struct FPCGSettingsOverridableParam
{ 
	FName                                              Label;                                                      // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	TArray<FName>                                      PropertiesNames;                                            // 0x0008   (0x0010)  
	class UStruct*                                     PropertyClass;                                              // 0x0018   (0x0008)  
	SDK_UNDEFINED(80,14525) /* TMap<int32_t, FPCGPropertyAliases> */ __um(MapOfAliases);                           // 0x0020   (0x0050)  
	bool                                               bHasNameClash;                                              // 0x0070   (0x0001)  
	unsigned char                                      UnknownData01_6[0x17];                                      // 0x0071   (0x0017)  MISSED
};

/// Class /Script/PCG.PCGSettings
/// Size: 0x0068 (0x000040 - 0x0000A8)
class UPCGSettings : public UPCGSettingsInterface
{ 
public:
	int32_t                                            Seed;                                                       // 0x0040   (0x0004)  
	unsigned char                                      UnknownData00_5[0xC];                                       // 0x0044   (0x000C)  MISSED
	bool                                               bUseSeed;                                                   // 0x0050   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3F];                                      // 0x0051   (0x003F)  MISSED
	TArray<FPCGSettingsOverridableParam>               CachedOverridableParams;                                    // 0x0090   (0x0010)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x00A0   (0x0008)  MISSED
};

/// Class /Script/PCG.PCGAddTagSettings
/// Size: 0x0010 (0x0000A8 - 0x0000B8)
class UPCGAddTagSettings : public UPCGSettings
{ 
public:
	SDK_UNDEFINED(16,14526) /* FString */              __um(TagsToAdd);                                            // 0x00A8   (0x0010)  
};

/// Struct /Script/PCG.PCGAttributePropertySelector
/// Size: 0x0028 (0x000000 - 0x000028)
struct FPCGAttributePropertySelector
{ 
	EPCGAttributePropertySelection                     Selection;                                                  // 0x0008   (0x0004)  
	FName                                              AttributeName;                                              // 0x000C   (0x0004)  
	EPCGPointProperties                                PointProperty;                                              // 0x0010   (0x0001)  
	EPCGExtraProperties                                ExtraProperty;                                              // 0x0011   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x0012   (0x0006)  MISSED
	SDK_UNDEFINED(16,14527) /* TArray<FString> */      __um(ExtraNames);                                           // 0x0018   (0x0010)  
};

/// Struct /Script/PCG.PCGAttributePropertyInputSelector
/// Size: 0x0000 (0x000028 - 0x000028)
struct FPCGAttributePropertyInputSelector : FPCGAttributePropertySelector
{ 
};

/// Struct /Script/PCG.PCGObjectPropertyOverrideDescription
/// Size: 0x0038 (0x000000 - 0x000038)
struct FPCGObjectPropertyOverrideDescription
{ 
	FPCGAttributePropertyInputSelector                 InputSource;                                                // 0x0000   (0x0028)  
	SDK_UNDEFINED(16,14528) /* FString */              __um(PropertyTarget);                                       // 0x0028   (0x0010)  
};

/// Class /Script/PCG.PCGApplyOnActorSettings
/// Size: 0x0040 (0x0000A8 - 0x0000E8)
class UPCGApplyOnActorSettings : public UPCGSettings
{ 
public:
	SDK_UNDEFINED(32,14529) /* TWeakObjectPtr<AActor*> */ __um(TargetActor);                                       // 0x00A8   (0x0020)  
	TArray<FPCGObjectPropertyOverrideDescription>      PropertyOverrideDescriptions;                               // 0x00C8   (0x0010)  
	TArray<FName>                                      PostProcessFunctionNames;                                   // 0x00D8   (0x0010)  
};

/// Class /Script/PCG.PCGApplyScaleToBoundsSettings
/// Size: 0x0000 (0x0000A8 - 0x0000A8)
class UPCGApplyScaleToBoundsSettings : public UPCGSettings
{ 
public:
};

/// Struct /Script/PCG.PCGAttributePropertyOutputSelector
/// Size: 0x0000 (0x000028 - 0x000028)
struct FPCGAttributePropertyOutputSelector : FPCGAttributePropertySelector
{ 
};

/// Class /Script/PCG.PCGAttributeCastSettings
/// Size: 0x0058 (0x0000A8 - 0x000100)
class UPCGAttributeCastSettings : public UPCGSettings
{ 
public:
	FPCGAttributePropertyInputSelector                 InputSource;                                                // 0x00A8   (0x0028)  
	EPCGMetadataTypes                                  OutputType;                                                 // 0x00D0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x00D1   (0x0007)  MISSED
	FPCGAttributePropertyOutputSelector                OutputTarget;                                               // 0x00D8   (0x0028)  
};

/// Class /Script/PCG.PCGAttributeExtractorTestObject
/// Size: 0x0008 (0x000028 - 0x000030)
class UPCGAttributeExtractorTestObject : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	double                                             DoubleValue;                                                // 0x0028   (0x0008)  
};

/// Struct /Script/PCG.PCGMetadataTypesConstantStruct
/// Size: 0x0160 (0x000000 - 0x000160)
struct FPCGMetadataTypesConstantStruct
{ 
	EPCGMetadataTypes                                  Type;                                                       // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	EPCGMetadataTypesConstantStructStringMode          StringMode;                                                 // 0x0004   (0x0004)  
	float                                              FloatValue;                                                 // 0x0008   (0x0004)  
	int32_t                                            Int32Value;                                                 // 0x000C   (0x0004)  
	double                                             DoubleValue;                                                // 0x0010   (0x0008)  
	int64_t                                            IntValue;                                                   // 0x0018   (0x0008)  
	FVector2D                                          Vector2Value;                                               // 0x0020   (0x0010)  
	FVector                                            VectorValue;                                                // 0x0030   (0x0018)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0048   (0x0008)  MISSED
	FVector4                                           Vector4Value;                                               // 0x0050   (0x0020)  
	FQuat                                              QuatValue;                                                  // 0x0070   (0x0020)  
	FTransform                                         TransformValue;                                             // 0x0090   (0x0060)  
	SDK_UNDEFINED(16,14530) /* FString */              __um(StringValue);                                          // 0x00F0   (0x0010)  
	bool                                               BoolValue;                                                  // 0x0100   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x0101   (0x0007)  MISSED
	FRotator                                           RotatorValue;                                               // 0x0108   (0x0018)  
	FName                                              NameValue;                                                  // 0x0120   (0x0004)  
	unsigned char                                      UnknownData03_5[0x4];                                       // 0x0124   (0x0004)  MISSED
	FSoftClassPath                                     SoftClassPathValue;                                         // 0x0128   (0x0018)  
	FSoftObjectPath                                    SoftObjectPathValue;                                        // 0x0140   (0x0018)  
	bool                                               bAllowsTypeChange;                                          // 0x0158   (0x0001)  
	unsigned char                                      UnknownData04_6[0x7];                                       // 0x0159   (0x0007)  MISSED
};

/// Class /Script/PCG.PCGAttributeFilteringSettings
/// Size: 0x01C8 (0x0000A8 - 0x000270)
class UPCGAttributeFilteringSettings : public UPCGSettings
{ 
public:
	EPCGAttributeFilterOperator                        Operator;                                                   // 0x00A8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x00A9   (0x0007)  MISSED
	FPCGAttributePropertyInputSelector                 TargetAttribute;                                            // 0x00B0   (0x0028)  
	bool                                               bUseConstantThreshold;                                      // 0x00D8   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x00D9   (0x0007)  MISSED
	FPCGAttributePropertyInputSelector                 ThresholdAttribute;                                         // 0x00E0   (0x0028)  
	bool                                               bUseSpatialQuery;                                           // 0x0108   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x0109   (0x0007)  MISSED
	FPCGMetadataTypesConstantStruct                    AttributeTypes;                                             // 0x0110   (0x0160)  
};

/// Struct /Script/PCG.PCGAttributeFilterThresholdSettings
/// Size: 0x01A0 (0x000000 - 0x0001A0)
struct FPCGAttributeFilterThresholdSettings
{ 
	bool                                               bInclusive;                                                 // 0x0000   (0x0001)  
	bool                                               bUseConstantThreshold;                                      // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x0002   (0x0006)  MISSED
	FPCGAttributePropertyInputSelector                 ThresholdAttribute;                                         // 0x0008   (0x0028)  
	bool                                               bUseSpatialQuery;                                           // 0x0030   (0x0001)  
	unsigned char                                      UnknownData01_5[0xF];                                       // 0x0031   (0x000F)  MISSED
	FPCGMetadataTypesConstantStruct                    AttributeTypes;                                             // 0x0040   (0x0160)  
};

/// Class /Script/PCG.PCGAttributeFilteringRangeSettings
/// Size: 0x0368 (0x0000A8 - 0x000410)
class UPCGAttributeFilteringRangeSettings : public UPCGSettings
{ 
public:
	FPCGAttributePropertyInputSelector                 TargetAttribute;                                            // 0x00A8   (0x0028)  
	FPCGAttributeFilterThresholdSettings               MinThreshold;                                               // 0x00D0   (0x01A0)  
	FPCGAttributeFilterThresholdSettings               MaxThreshold;                                               // 0x0270   (0x01A0)  
};

/// Class /Script/PCG.PCGAttributePropertySelectorBlueprintHelpers
/// Size: 0x0000 (0x000028 - 0x000028)
class UPCGAttributePropertySelectorBlueprintHelpers : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/PCG.PCGAttributePropertySelectorBlueprintHelpers.SetPointProperty
	// bool SetPointProperty(FPCGAttributePropertySelector& Selector, EPCGPointProperties InPointProperty);                  // [0xa53ba28] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGAttributePropertySelectorBlueprintHelpers.SetExtraProperty
	// bool SetExtraProperty(FPCGAttributePropertySelector& Selector, EPCGExtraProperties InExtraProperty);                  // [0xa53b880] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGAttributePropertySelectorBlueprintHelpers.SetAttributeName
	// bool SetAttributeName(FPCGAttributePropertySelector& Selector, FName InAttributeName);                                // [0xa53b6d8] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGAttributePropertySelectorBlueprintHelpers.GetSelection
	// EPCGAttributePropertySelection GetSelection(FPCGAttributePropertySelector& Selector);                                 // [0xa53b624] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGAttributePropertySelectorBlueprintHelpers.GetPointProperty
	// EPCGPointProperties GetPointProperty(FPCGAttributePropertySelector& Selector);                                        // [0xa53b570] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGAttributePropertySelectorBlueprintHelpers.GetName
	// FName GetName(FPCGAttributePropertySelector& Selector);                                                               // [0xa53b4b4] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGAttributePropertySelectorBlueprintHelpers.GetExtraProperty
	// EPCGExtraProperties GetExtraProperty(FPCGAttributePropertySelector& Selector);                                        // [0xa53b400] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGAttributePropertySelectorBlueprintHelpers.GetExtraNames
	// TArray<FString> GetExtraNames(FPCGAttributePropertySelector& Selector);                                               // [0xa53b344] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGAttributePropertySelectorBlueprintHelpers.GetAttributeName
	// FName GetAttributeName(FPCGAttributePropertySelector& Selector);                                                      // [0xa53b290] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGAttributePropertySelectorBlueprintHelpers.CopyAndFixSource
	// FPCGAttributePropertyOutputSelector CopyAndFixSource(FPCGAttributePropertyOutputSelector& Selector, FPCGAttributePropertyInputSelector& InSelector); // [0xa53b130] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGAttributePropertySelectorBlueprintHelpers.CopyAndFixLast
	// FPCGAttributePropertyInputSelector CopyAndFixLast(FPCGAttributePropertyInputSelector& Selector, class UPCGData* InData); // [0xa53af6c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/PCG.PCGBooleanSelectSettings
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UPCGBooleanSelectSettings : public UPCGSettings
{ 
public:
	bool                                               bUseInputB;                                                 // 0x00A8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x00A9   (0x0007)  MISSED
};

/// Class /Script/PCG.PCGBranchSettings
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UPCGBranchSettings : public UPCGSettings
{ 
public:
	bool                                               bOutputToB;                                                 // 0x00A8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x00A9   (0x0007)  MISSED
};

/// Class /Script/PCG.PCGSpatialData
/// Size: 0x0048 (0x000038 - 0x000080)
class UPCGSpatialData : public UPCGData
{ 
public:
	SDK_UNDEFINED(8,14531) /* TWeakObjectPtr<AActor*> */ __um(TargetActor);                                        // 0x0038   (0x0008)  
	bool                                               bKeepZeroDensityPoints;                                     // 0x0040   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0041   (0x0007)  MISSED
	class UPCGMetadata*                                MetaData;                                                   // 0x0048   (0x0008)  
	bool                                               bHasCachedLastSelector;                                     // 0x0050   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0051   (0x0007)  MISSED
	FPCGAttributePropertyInputSelector                 CachedLastSelector;                                         // 0x0058   (0x0028)  


	/// Functions
	// Function /Script/PCG.PCGSpatialData.UnionWith
	// class UPCGUnionData* UnionWith(class UPCGSpatialData* InOther);                                                       // [0xa5be56c] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PCG.PCGSpatialData.ToPointDataWithContext
	// class UPCGPointData* ToPointDataWithContext(FPCGContext& Context);                                                    // [0xa5be4a0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PCG.PCGSpatialData.ToPointData
	// class UPCGPointData* ToPointData();                                                                                   // [0xa5be47c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PCG.PCGSpatialData.Subtract
	// class UPCGDifferenceData* Subtract(class UPCGSpatialData* InOther);                                                   // [0xa5be3e8] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PCG.PCGSpatialData.ProjectOn
	// class UPCGSpatialData* ProjectOn(class UPCGSpatialData* InOther, FPCGProjectionParams& InParams);                     // [0xa5be108] Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PCG.PCGSpatialData.MutableMetadata
	// class UPCGMetadata* MutableMetadata();                                                                                // [0x3c5146c] Native|Public|BlueprintCallable 
	// Function /Script/PCG.PCGSpatialData.K2_SamplePoint
	// bool K2_SamplePoint(FTransform& Transform, FBox& Bounds, FPCGPoint& OutPoint, class UPCGMetadata* OutMetadata);       // [0xa5bde60] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PCG.PCGSpatialData.K2_ProjectPoint
	// bool K2_ProjectPoint(FTransform& InTransform, FBox& InBounds, FPCGProjectionParams& InParams, FPCGPoint& OutPoint, class UPCGMetadata* OutMetadata); // [0xa5bdb54] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PCG.PCGSpatialData.IntersectWith
	// class UPCGIntersectionData* IntersectWith(class UPCGSpatialData* InOther);                                            // [0xa5bdac0] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PCG.PCGSpatialData.InitializeFromData
	// void InitializeFromData(class UPCGSpatialData* InSource, class UPCGMetadata* InMetadataParentOverride, bool bInheritMetadata, bool bInheritAttributes); // [0xa5bd970] Final|Native|Public|BlueprintCallable 
	// Function /Script/PCG.PCGSpatialData.HasNonTrivialTransform
	// bool HasNonTrivialTransform();                                                                                        // [0x8e91164] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PCG.PCGSpatialData.GetStrictBounds
	// FBox GetStrictBounds();                                                                                               // [0xa5bd5ec] Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PCG.PCGSpatialData.GetNormal
	// FVector GetNormal();                                                                                                  // [0xa5bd304] Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PCG.PCGSpatialData.GetDimension
	// int32_t GetDimension();                                                                                               // [0x695188c] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PCG.PCGSpatialData.GetDensityAtPosition
	// float GetDensityAtPosition(FVector& InPosition);                                                                      // [0xa5bd22c] Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PCG.PCGSpatialData.GetBounds
	// FBox GetBounds();                                                                                                     // [0xa5bd1e0] Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PCG.PCGSpatialData.CreateEmptyMetadata
	// class UPCGMetadata* CreateEmptyMetadata();                                                                            // [0xa5bd16c] Final|Native|Public|BlueprintCallable 
	// Function /Script/PCG.PCGSpatialData.ConstMetadata
	// class UPCGMetadata* ConstMetadata();                                                                                  // [0x68143f8] Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/PCG.PCGSpatialDataWithPointCache
/// Size: 0x0050 (0x000080 - 0x0000D0)
class UPCGSpatialDataWithPointCache : public UPCGSpatialData
{ 
public:
	class UPCGPointData*                               CachedPointData;                                            // 0x0080   (0x0008)  
	TArray<FBox>                                       CachedBoundedPointDataBoxes;                                // 0x0088   (0x0010)  
	TArray<class UPCGPointData*>                       CachedBoundedPointData;                                     // 0x0098   (0x0010)  
	unsigned char                                      UnknownData00_6[0x28];                                      // 0x00A8   (0x0028)  MISSED
};

/// Class /Script/PCG.PCGCollisionShapeData
/// Size: 0x00F0 (0x0000D0 - 0x0001C0)
class UPCGCollisionShapeData : public UPCGSpatialDataWithPointCache
{ 
public:
	FTransform                                         Transform;                                                  // 0x00D0   (0x0060)  
	unsigned char                                      UnknownData00_5[0x18];                                      // 0x0130   (0x0018)  MISSED
	FBox                                               CachedBounds;                                               // 0x0148   (0x0038)  
	FBox                                               CachedStrictBounds;                                         // 0x0180   (0x0038)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x01B8   (0x0008)  MISSED
};

/// Class /Script/PCG.PCGCombinePointsSettings
/// Size: 0x0068 (0x0000A8 - 0x000110)
class UPCGCombinePointsSettings : public UPCGSettings
{ 
public:
	bool                                               bCenterPivot;                                               // 0x00A8   (0x0001)  
	bool                                               bUseFirstPointTransform;                                    // 0x00A9   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x00AA   (0x0006)  MISSED
	FTransform                                         PointTransform;                                             // 0x00B0   (0x0060)  
};

/// Class /Script/PCG.PCGConvexHull2DSettings
/// Size: 0x0000 (0x0000A8 - 0x0000A8)
class UPCGConvexHull2DSettings : public UPCGSettings
{ 
public:
};

/// Struct /Script/PCG.PCGPoint
/// Size: 0x00D0 (0x000000 - 0x0000D0)
struct FPCGPoint
{ 
	FTransform                                         Transform;                                                  // 0x0000   (0x0060)  
	float                                              Density;                                                    // 0x0060   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0064   (0x0004)  MISSED
	FVector                                            BoundsMin;                                                  // 0x0068   (0x0018)  
	FVector                                            BoundsMax;                                                  // 0x0080   (0x0018)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0098   (0x0008)  MISSED
	FVector4                                           Color;                                                      // 0x00A0   (0x0020)  
	float                                              Steepness;                                                  // 0x00C0   (0x0004)  
	int32_t                                            Seed;                                                       // 0x00C4   (0x0004)  
	int64_t                                            MetadataEntry;                                              // 0x00C8   (0x0008)  
};

/// Class /Script/PCG.PCGCreatePointsSettings
/// Size: 0x0018 (0x0000A8 - 0x0000C0)
class UPCGCreatePointsSettings : public UPCGSettings
{ 
public:
	TArray<FPCGPoint>                                  PointsToCreate;                                             // 0x00A8   (0x0010)  
	EPCGCoordinateSpace                                CoordinateSpace;                                            // 0x00B8   (0x0001)  
	bool                                               bCullPointsOutsideVolume;                                   // 0x00B9   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x00BA   (0x0006)  MISSED
};

/// Class /Script/PCG.PCGCreatePointsGridSettings
/// Size: 0x0038 (0x0000A8 - 0x0000E0)
class UPCGCreatePointsGridSettings : public UPCGSettings
{ 
public:
	FVector                                            GridExtents;                                                // 0x00A8   (0x0018)  
	FVector                                            CellSize;                                                   // 0x00C0   (0x0018)  
	EPCGCoordinateSpace                                CoordinateSpace;                                            // 0x00D8   (0x0001)  
	bool                                               bSetPointsBounds;                                           // 0x00D9   (0x0001)  
	bool                                               bCullPointsOutsideVolume;                                   // 0x00DA   (0x0001)  
	EPCGPointPosition                                  PointPosition;                                              // 0x00DB   (0x0001)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00DC   (0x0004)  MISSED
};

/// Class /Script/PCG.PCGCullPointsOutsideActorBoundsSettings
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UPCGCullPointsOutsideActorBoundsSettings : public UPCGSettings
{ 
public:
	float                                              BoundsExpansion;                                            // 0x00A8   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00AC   (0x0004)  MISSED
};

/// Struct /Script/PCG.PCGTaggedData
/// Size: 0x0060 (0x000000 - 0x000060)
struct FPCGTaggedData
{ 
	class UPCGData*                                    Data;                                                       // 0x0000   (0x0008)  
	SDK_UNDEFINED(80,14532) /* TSet<FString> */        __um(Tags);                                                 // 0x0008   (0x0050)  
	FName                                              Pin;                                                        // 0x0058   (0x0004)  
	bool                                               bPinlessData;                                               // 0x005C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x005D   (0x0003)  MISSED
};

/// Struct /Script/PCG.PCGDataCollection
/// Size: 0x0030 (0x000000 - 0x000030)
struct FPCGDataCollection
{ 
	TArray<FPCGTaggedData>                             TaggedData;                                                 // 0x0000   (0x0010)  
	bool                                               bCancelExecutionOnEmpty;                                    // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1F];                                      // 0x0011   (0x001F)  MISSED
};

/// Class /Script/PCG.PCGDataAsset
/// Size: 0x0040 (0x000028 - 0x000068)
class UPCGDataAsset : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	FPCGDataCollection                                 Data;                                                       // 0x0028   (0x0030)  
	SDK_UNDEFINED(16,14533) /* FString */              __um(Name);                                                 // 0x0058   (0x0010)  
};

/// Class /Script/PCG.PCGExternalDataSettings
/// Size: 0x0050 (0x0000A8 - 0x0000F8)
class UPCGExternalDataSettings : public UPCGSettings
{ 
public:
	SDK_UNDEFINED(80,14534) /* TMap<FString, FPCGAttributePropertyInputSelector> */ __um(AttributeMapping);        // 0x00A8   (0x0050)  
};

/// Class /Script/PCG.PCGLoadDataTableSettings
/// Size: 0x0028 (0x0000F8 - 0x000120)
class UPCGLoadDataTableSettings : public UPCGExternalDataSettings
{ 
public:
	SDK_UNDEFINED(32,14535) /* TWeakObjectPtr<UDataTable*> */ __um(DataTable);                                     // 0x00F8   (0x0020)  
	EPCGExclusiveDataType                              OutputType;                                                 // 0x0118   (0x0001)  
	bool                                               bSynchronousLoad;                                           // 0x0119   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x011A   (0x0006)  MISSED
};

/// Struct /Script/PCG.PCGCrc
/// Size: 0x0008 (0x000000 - 0x000008)
struct FPCGCrc
{ 
	uint32_t                                           Value;                                                      // 0x0000   (0x0004)  
	bool                                               bValid;                                                     // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0005   (0x0003)  MISSED
};

/// Class /Script/PCG.PCGManagedResource
/// Size: 0x0010 (0x000028 - 0x000038)
class UPCGManagedResource : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	FPCGCrc                                            Crc;                                                        // 0x0028   (0x0008)  
	bool                                               bIsMarkedUnused;                                            // 0x0030   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0031   (0x0007)  MISSED
};

/// Class /Script/PCG.PCGManagedComponent
/// Size: 0x0020 (0x000038 - 0x000058)
class UPCGManagedComponent : public UPCGManagedResource
{ 
public:
	SDK_UNDEFINED(32,14536) /* TWeakObjectPtr<UActorComponent*> */ __um(GeneratedComponent);                       // 0x0038   (0x0020)  
};

/// Class /Script/PCG.PCGManagedDebugDrawComponent
/// Size: 0x0000 (0x000058 - 0x000058)
class UPCGManagedDebugDrawComponent : public UPCGManagedComponent
{ 
public:
};

/// Class /Script/PCG.PCGDebugDrawComponent
/// Size: 0x0010 (0x000550 - 0x000560)
class UPCGDebugDrawComponent : public UDebugDrawComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0550   (0x0010)  MISSED
};

/// Class /Script/PCG.PCGDeleteAttributesSettings
/// Size: 0x0018 (0x0000A8 - 0x0000C0)
class UPCGDeleteAttributesSettings : public UPCGSettings
{ 
public:
	EPCGAttributeFilterOperation                       Operation;                                                  // 0x00A8   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00AC   (0x0004)  MISSED
	SDK_UNDEFINED(16,14537) /* FString */              __um(SelectedAttributes);                                   // 0x00B0   (0x0010)  
};

/// Class /Script/PCG.PCGDeleteTagsSettings
/// Size: 0x0018 (0x0000A8 - 0x0000C0)
class UPCGDeleteTagsSettings : public UPCGSettings
{ 
public:
	EPCGTagFilterOperation                             Operation;                                                  // 0x00A8   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00AC   (0x0004)  MISSED
	SDK_UNDEFINED(16,14538) /* FString */              __um(SelectedTags);                                         // 0x00B0   (0x0010)  
};

/// Class /Script/PCG.PCGDistanceSettings
/// Size: 0x0048 (0x0000A8 - 0x0000F0)
class UPCGDistanceSettings : public UPCGSettings
{ 
public:
	bool                                               bOutputToAttribute;                                         // 0x00A8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x00A9   (0x0007)  MISSED
	FPCGAttributePropertySelector                      OutputAttribute;                                            // 0x00B0   (0x0028)  
	bool                                               bOutputDistanceVector;                                      // 0x00D8   (0x0001)  
	bool                                               bSetDensity;                                                // 0x00D9   (0x0001)  
	unsigned char                                      UnknownData01_5[0x6];                                       // 0x00DA   (0x0006)  MISSED
	double                                             MaximumDistance;                                            // 0x00E0   (0x0008)  
	PCGDistanceShape                                   SourceShape;                                                // 0x00E8   (0x0004)  
	PCGDistanceShape                                   TargetShape;                                                // 0x00EC   (0x0004)  
};

/// Class /Script/PCG.PCGDuplicatePointSettings
/// Size: 0x0088 (0x0000A8 - 0x000130)
class UPCGDuplicatePointSettings : public UPCGSettings
{ 
public:
	int32_t                                            Iterations;                                                 // 0x00A8   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00AC   (0x0004)  MISSED
	FVector                                            Direction;                                                  // 0x00B0   (0x0018)  
	bool                                               bDirectionAppliedInRelativeSpace;                           // 0x00C8   (0x0001)  
	bool                                               bOutputSourcePoint;                                         // 0x00C9   (0x0001)  
	unsigned char                                      UnknownData01_5[0x6];                                       // 0x00CA   (0x0006)  MISSED
	FTransform                                         PointTransform;                                             // 0x00D0   (0x0060)  
};

/// Class /Script/PCG.PCGBadOutputsNodeSettings
/// Size: 0x0000 (0x0000A8 - 0x0000A8)
class UPCGBadOutputsNodeSettings : public UPCGSettings
{ 
public:
};

/// Class /Script/PCG.PCGEngineSettings
/// Size: 0x0020 (0x000030 - 0x000050)
class UPCGEngineSettings : public UDeveloperSettingsBackedByCVars
{ 
public:
	FVector                                            VolumeScale;                                                // 0x0030   (0x0018)  
	bool                                               bGenerateOnDrop;                                            // 0x0048   (0x0001)  
	bool                                               bDisplayCullingStateWhenDebugging;                          // 0x0049   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x004A   (0x0006)  MISSED
};

/// Class /Script/PCG.PCGFilterDataBaseSettings
/// Size: 0x0000 (0x0000A8 - 0x0000A8)
class UPCGFilterDataBaseSettings : public UPCGSettings
{ 
public:
};

/// Class /Script/PCG.PCGFilterByAttributeSettings
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UPCGFilterByAttributeSettings : public UPCGFilterDataBaseSettings
{ 
public:
	FName                                              Attribute;                                                  // 0x00A8   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00AC   (0x0004)  MISSED
};

/// Class /Script/PCG.PCGGatherSettings
/// Size: 0x0000 (0x0000A8 - 0x0000A8)
class UPCGGatherSettings : public UPCGSettings
{ 
public:
};

/// Class /Script/PCG.PCGGenSourceBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UPCGGenSourceBase : public UInterface
{ 
public:
};

/// Struct /Script/PCG.PCGActorSelectorSettings
/// Size: 0x0020 (0x000000 - 0x000020)
struct FPCGActorSelectorSettings
{ 
	EPCGActorFilter                                    ActorFilter;                                                // 0x0000   (0x0001)  
	bool                                               bMustOverlapSelf;                                           // 0x0001   (0x0001)  
	bool                                               bIncludeChildren;                                           // 0x0002   (0x0001)  
	bool                                               bDisableFilter;                                             // 0x0003   (0x0001)  
	EPCGActorSelection                                 ActorSelection;                                             // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0005   (0x0003)  MISSED
	FName                                              ActorSelectionTag;                                          // 0x0008   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	class UClass*                                      ActorSelectionClass;                                        // 0x0010   (0x0008)  
	bool                                               bSelectMultiple;                                            // 0x0018   (0x0001)  
	bool                                               bIgnoreSelfAndChildren;                                     // 0x0019   (0x0001)  
	bool                                               bShowActorFilter;                                           // 0x001A   (0x0001)  
	bool                                               bShowIncludeChildren;                                       // 0x001B   (0x0001)  
	bool                                               bShowActorSelection;                                        // 0x001C   (0x0001)  
	bool                                               bShowActorSelectionClass;                                   // 0x001D   (0x0001)  
	bool                                               bShowSelectMultiple;                                        // 0x001E   (0x0001)  
	bool                                               bShowIgnoreSelfAndChildren;                                 // 0x001F   (0x0001)  
};

/// Class /Script/PCG.PCGGetActorPropertySettings
/// Size: 0x0058 (0x0000A8 - 0x000100)
class UPCGGetActorPropertySettings : public UPCGSettings
{ 
public:
	FPCGActorSelectorSettings                          ActorSelector;                                              // 0x00A8   (0x0020)  
	bool                                               bSelectComponent;                                           // 0x00C8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x00C9   (0x0007)  MISSED
	class UClass*                                      ComponentClass;                                             // 0x00D0   (0x0008)  
	FName                                              PropertyName;                                               // 0x00D8   (0x0004)  
	bool                                               bForceObjectAndStructExtraction;                            // 0x00DC   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x00DD   (0x0003)  MISSED
	FName                                              OutputAttributeName;                                        // 0x00E0   (0x0004)  
	bool                                               bAlwaysRequeryActors;                                       // 0x00E4   (0x0001)  
	EPCGActorSelection                                 ActorSelection;                                             // 0x00E5   (0x0001)  
	unsigned char                                      UnknownData02_5[0x2];                                       // 0x00E6   (0x0002)  MISSED
	FName                                              ActorSelectionTag;                                          // 0x00E8   (0x0004)  
	FName                                              ActorSelectionName;                                         // 0x00EC   (0x0004)  
	class UClass*                                      ActorSelectionClass;                                        // 0x00F0   (0x0008)  
	EPCGActorFilter                                    ActorFilter;                                                // 0x00F8   (0x0001)  
	bool                                               bIncludeChildren;                                           // 0x00F9   (0x0001)  
	unsigned char                                      UnknownData03_6[0x6];                                       // 0x00FA   (0x0006)  MISSED
};

/// Class /Script/PCG.PCGDummyGetPropertyTest
/// Size: 0x0010 (0x000028 - 0x000038)
class UPCGDummyGetPropertyTest : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	int64_t                                            Int64Property;                                              // 0x0028   (0x0008)  
	double                                             DoubleProperty;                                             // 0x0030   (0x0008)  
};

/// Struct /Script/PCG.PCGTestMyColorStruct
/// Size: 0x0020 (0x000000 - 0x000020)
struct FPCGTestMyColorStruct
{ 
	double                                             B;                                                          // 0x0000   (0x0008)  
	double                                             G;                                                          // 0x0008   (0x0008)  
	double                                             R;                                                          // 0x0010   (0x0008)  
	double                                             A;                                                          // 0x0018   (0x0008)  
};

/// Struct /Script/PCG.PCGDummyGetPropertyLevel2Struct
/// Size: 0x0010 (0x000000 - 0x000010)
struct FPCGDummyGetPropertyLevel2Struct
{ 
	TArray<double>                                     DoubleArrayProperty;                                        // 0x0000   (0x0010)  
};

/// Struct /Script/PCG.PCGDummyGetPropertyStruct
/// Size: 0x0028 (0x000000 - 0x000028)
struct FPCGDummyGetPropertyStruct
{ 
	TArray<int32_t>                                    IntArrayProperty;                                           // 0x0000   (0x0010)  
	float                                              FloatProperty;                                              // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0014   (0x0004)  MISSED
	FPCGDummyGetPropertyLevel2Struct                   Level2Struct;                                               // 0x0018   (0x0010)  
};

/// Class /Script/PCG.PCGUnitTestDummyActor
/// Size: 0x0200 (0x000290 - 0x000490)
class APCGUnitTestDummyActor : public AActor
{ 
public:
	int32_t                                            IntProperty;                                                // 0x0290   (0x0004)  
	float                                              FloatProperty;                                              // 0x0294   (0x0004)  
	int64_t                                            Int64Property;                                              // 0x0298   (0x0008)  
	double                                             DoubleProperty;                                             // 0x02A0   (0x0008)  
	bool                                               BoolProperty;                                               // 0x02A8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x02A9   (0x0003)  MISSED
	FName                                              NameProperty;                                               // 0x02AC   (0x0004)  
	SDK_UNDEFINED(16,14539) /* FString */              __um(StringProperty);                                       // 0x02B0   (0x0010)  
	EPCGUnitTestDummyEnum                              EnumProperty;                                               // 0x02C0   (0x0008)  
	FVector                                            VectorProperty;                                             // 0x02C8   (0x0018)  
	FVector4                                           Vector4Property;                                            // 0x02E0   (0x0020)  
	FTransform                                         TransformProperty;                                          // 0x0300   (0x0060)  
	FRotator                                           RotatorProperty;                                            // 0x0360   (0x0018)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0378   (0x0008)  MISSED
	FQuat                                              QuatProperty;                                               // 0x0380   (0x0020)  
	FSoftObjectPath                                    SoftObjectPathProperty;                                     // 0x03A0   (0x0018)  
	FSoftClassPath                                     SoftClassPathProperty;                                      // 0x03B8   (0x0018)  
	class UClass*                                      ClassProperty;                                              // 0x03D0   (0x0008)  
	class UPCGDummyGetPropertyTest*                    ObjectProperty;                                             // 0x03D8   (0x0008)  
	FVector2D                                          Vector2Property;                                            // 0x03E0   (0x0010)  
	FColor                                             ColorProperty;                                              // 0x03F0   (0x0004)  
	FLinearColor                                       LinearColorProperty;                                        // 0x03F4   (0x0010)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x0404   (0x0004)  MISSED
	FPCGTestMyColorStruct                              PCGColorProperty;                                           // 0x0408   (0x0020)  
	TArray<int32_t>                                    ArrayOfIntsProperty;                                        // 0x0428   (0x0010)  
	TArray<FVector>                                    ArrayOfVectorsProperty;                                     // 0x0438   (0x0010)  
	TArray<FPCGTestMyColorStruct>                      ArrayOfStructsProperty;                                     // 0x0448   (0x0010)  
	TArray<class UPCGDummyGetPropertyTest*>            ArrayOfObjectsProperty;                                     // 0x0458   (0x0010)  
	FPCGDummyGetPropertyStruct                         DummyStruct;                                                // 0x0468   (0x0028)  
};

/// Class /Script/PCG.PCGUnitTestDummyComponent
/// Size: 0x0008 (0x0000A0 - 0x0000A8)
class UPCGUnitTestDummyComponent : public UActorComponent
{ 
public:
	int32_t                                            IntProperty;                                                // 0x00A0   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00A4   (0x0004)  MISSED
};

/// Class /Script/PCG.PCGGetBoundsSettings
/// Size: 0x0000 (0x0000A8 - 0x0000A8)
class UPCGGetBoundsSettings : public UPCGSettings
{ 
public:
};

/// Class /Script/PCG.PCGGetPropertyFromObjectPathSettings
/// Size: 0x0048 (0x0000A8 - 0x0000F0)
class UPCGGetPropertyFromObjectPathSettings : public UPCGSettings
{ 
public:
	TArray<FSoftObjectPath>                            ObjectPathsToExtract;                                       // 0x00A8   (0x0010)  
	FPCGAttributePropertyInputSelector                 InputSource;                                                // 0x00B8   (0x0028)  
	FName                                              PropertyName;                                               // 0x00E0   (0x0004)  
	bool                                               bForceObjectAndStructExtraction;                            // 0x00E4   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00E5   (0x0003)  MISSED
	FName                                              OutputAttributeName;                                        // 0x00E8   (0x0004)  
	bool                                               bSynchronousLoad;                                           // 0x00EC   (0x0001)  
	bool                                               bPersistAllData;                                            // 0x00ED   (0x0001)  
	bool                                               bSilenceErrorOnEmptyObjectPath;                             // 0x00EE   (0x0001)  
	unsigned char                                      UnknownData01_6[0x1];                                       // 0x00EF   (0x0001)  MISSED
};

/// Class /Script/PCG.PCGGraphAuthoringTestHelperSettings
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UPCGGraphAuthoringTestHelperSettings : public UPCGSettings
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00A8   (0x0008)  MISSED
};

/// Class /Script/PCG.PCGGraphParametersHelpers
/// Size: 0x0000 (0x000028 - 0x000028)
class UPCGGraphParametersHelpers : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/PCG.PCGGraphParametersHelpers.SetVectorParameter
	// void SetVectorParameter(class UPCGGraphInterface* GraphInterface, FName Name, FVector& Value);                        // [0xa53f3c4] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGGraphParametersHelpers.SetVector4Parameter
	// void SetVector4Parameter(class UPCGGraphInterface* GraphInterface, FName Name, FVector4& Value);                      // [0xa53f258] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGGraphParametersHelpers.SetVector2DParameter
	// void SetVector2DParameter(class UPCGGraphInterface* GraphInterface, FName Name, FVector2D& Value);                    // [0xa53f100] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGGraphParametersHelpers.SetTransformParameter
	// void SetTransformParameter(class UPCGGraphInterface* GraphInterface, FName Name, FTransform& Value);                  // [0xa53ef3c] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGGraphParametersHelpers.SetStringParameter
	// void SetStringParameter(class UPCGGraphInterface* GraphInterface, FName Name, FString Value);                         // [0xa53ed08] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PCG.PCGGraphParametersHelpers.SetSoftObjectPathParameter
	// void SetSoftObjectPathParameter(class UPCGGraphInterface* GraphInterface, FName Name, FSoftObjectPath& Value);        // [0xa53eba0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGGraphParametersHelpers.SetSoftObjectParameter
	// void SetSoftObjectParameter(class UPCGGraphInterface* GraphInterface, FName Name, TWeakObjectPtr<UObject*>& Value);   // [0xa53ea44] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGGraphParametersHelpers.SetSoftClassParameter
	// void SetSoftClassParameter(class UPCGGraphInterface* GraphInterface, FName Name, TWeakObjectPtr<UClass*>& Value);     // [0xa53ea44] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGGraphParametersHelpers.SetRotatorParameter
	// void SetRotatorParameter(class UPCGGraphInterface* GraphInterface, FName Name, FRotator& Value);                      // [0xa53e8ec] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGGraphParametersHelpers.SetQuaternionParameter
	// void SetQuaternionParameter(class UPCGGraphInterface* GraphInterface, FName Name, FQuat& Value);                      // [0xa53e794] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGGraphParametersHelpers.SetObjectParameter
	// void SetObjectParameter(class UPCGGraphInterface* GraphInterface, FName Name, class UObject* Value);                  // [0xa53de80] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PCG.PCGGraphParametersHelpers.SetNameParameter
	// void SetNameParameter(class UPCGGraphInterface* GraphInterface, FName Name, FName Value);                             // [0xa53e664] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PCG.PCGGraphParametersHelpers.SetInt64Parameter
	// void SetInt64Parameter(class UPCGGraphInterface* GraphInterface, FName Name, int64_t Value);                          // [0xa53e534] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PCG.PCGGraphParametersHelpers.SetInt32Parameter
	// void SetInt32Parameter(class UPCGGraphInterface* GraphInterface, FName Name, int32_t Value);                          // [0xa53e404] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PCG.PCGGraphParametersHelpers.SetFloatParameter
	// void SetFloatParameter(class UPCGGraphInterface* GraphInterface, FName Name, float Value);                            // [0xa53e2c8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PCG.PCGGraphParametersHelpers.SetEnumParameter
	// void SetEnumParameter(class UPCGGraphInterface* GraphInterface, FName Name, char Value, class UEnum* Enum);           // [0xa53e0f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PCG.PCGGraphParametersHelpers.SetDoubleParameter
	// void SetDoubleParameter(class UPCGGraphInterface* GraphInterface, FName Name, double Value);                          // [0xa53dfb0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PCG.PCGGraphParametersHelpers.SetClassParameter
	// void SetClassParameter(class UPCGGraphInterface* GraphInterface, FName Name, class UClass* Value);                    // [0xa53de80] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PCG.PCGGraphParametersHelpers.SetByteParameter
	// void SetByteParameter(class UPCGGraphInterface* GraphInterface, FName Name, char Value);                              // [0xa53dd50] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PCG.PCGGraphParametersHelpers.SetBoolParameter
	// void SetBoolParameter(class UPCGGraphInterface* GraphInterface, FName Name, bool bValue);                             // [0xa53dc1c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PCG.PCGGraphParametersHelpers.IsOverridden
	// bool IsOverridden(class UPCGGraphInterface* GraphInterface, FName Name);                                              // [0xa53db48] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PCG.PCGGraphParametersHelpers.GetVectorParameter
	// FVector GetVectorParameter(class UPCGGraphInterface* GraphInterface, FName Name);                                     // [0xa53d9c8] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGGraphParametersHelpers.GetVector4Parameter
	// FVector4 GetVector4Parameter(class UPCGGraphInterface* GraphInterface, FName Name);                                   // [0xa53d824] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGGraphParametersHelpers.GetVector2DParameter
	// FVector2D GetVector2DParameter(class UPCGGraphInterface* GraphInterface, FName Name);                                 // [0xa53d6cc] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGGraphParametersHelpers.GetTransformParameter
	// FTransform GetTransformParameter(class UPCGGraphInterface* GraphInterface, FName Name);                               // [0xa53d5c0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGGraphParametersHelpers.GetStringParameter
	// FString GetStringParameter(class UPCGGraphInterface* GraphInterface, FName Name);                                     // [0xa53d39c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PCG.PCGGraphParametersHelpers.GetSoftObjectPathParameter
	// FSoftObjectPath GetSoftObjectPathParameter(class UPCGGraphInterface* GraphInterface, FName Name);                     // [0xa53d1c8] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGGraphParametersHelpers.GetSoftObjectParameter
	// TWeakObjectPtr<UObject*> GetSoftObjectParameter(class UPCGGraphInterface* GraphInterface, FName Name);                // [0xa53d010] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PCG.PCGGraphParametersHelpers.GetSoftClassParameter
	// TWeakObjectPtr<UClass*> GetSoftClassParameter(class UPCGGraphInterface* GraphInterface, FName Name);                  // [0xa53ce58] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PCG.PCGGraphParametersHelpers.GetRotatorParameter
	// FRotator GetRotatorParameter(class UPCGGraphInterface* GraphInterface, FName Name);                                   // [0xa53ccd8] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGGraphParametersHelpers.GetQuaternionParameter
	// FQuat GetQuaternionParameter(class UPCGGraphInterface* GraphInterface, FName Name);                                   // [0xa53cb60] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGGraphParametersHelpers.GetObjectParameter
	// class UObject* GetObjectParameter(class UPCGGraphInterface* GraphInterface, FName Name);                              // [0xa53ca9c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PCG.PCGGraphParametersHelpers.GetNameParameter
	// FName GetNameParameter(class UPCGGraphInterface* GraphInterface, FName Name);                                         // [0xa53c970] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PCG.PCGGraphParametersHelpers.GetInt64Parameter
	// int64_t GetInt64Parameter(class UPCGGraphInterface* GraphInterface, FName Name);                                      // [0xa53c8ac] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PCG.PCGGraphParametersHelpers.GetInt32Parameter
	// int32_t GetInt32Parameter(class UPCGGraphInterface* GraphInterface, FName Name);                                      // [0xa53c7ec] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PCG.PCGGraphParametersHelpers.GetFloatParameter
	// float GetFloatParameter(class UPCGGraphInterface* GraphInterface, FName Name);                                        // [0xa53c728] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PCG.PCGGraphParametersHelpers.GetEnumParameter
	// char GetEnumParameter(class UPCGGraphInterface* GraphInterface, FName Name);                                          // [0xa53c49c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PCG.PCGGraphParametersHelpers.GetDoubleParameter
	// double GetDoubleParameter(class UPCGGraphInterface* GraphInterface, FName Name);                                      // [0xa53c664] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PCG.PCGGraphParametersHelpers.GetClassParameter
	// class UClass* GetClassParameter(class UPCGGraphInterface* GraphInterface, FName Name);                                // [0xa53c5a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PCG.PCGGraphParametersHelpers.GetByteParameter
	// char GetByteParameter(class UPCGGraphInterface* GraphInterface, FName Name);                                          // [0xa53c49c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PCG.PCGGraphParametersHelpers.GetBoolParameter
	// bool GetBoolParameter(class UPCGGraphInterface* GraphInterface, FName Name);                                          // [0xa53c398] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/PCG.PCGFunctionPrototypes
/// Size: 0x0000 (0x000028 - 0x000028)
class UPCGFunctionPrototypes : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/PCG.PCGFunctionPrototypes.PrototypeWithPointAndMetadata
	// void PrototypeWithPointAndMetadata(FPCGPoint Point, class UPCGMetadata* MetaData);                                    // [0xa5423e8] Final|Native|Private 
	// Function /Script/PCG.PCGFunctionPrototypes.PrototypeWithNoParams
	// void PrototypeWithNoParams();                                                                                         // [0x36203b0] Final|Native|Private 
};

/// Class /Script/PCG.PCGHiGenGridSizeSettings
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UPCGHiGenGridSizeSettings : public UPCGSettings
{ 
public:
	EPCGHiGenGrid                                      HiGenGridSize;                                              // 0x00A8   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00AC   (0x0004)  MISSED
};

/// Struct /Script/PCG.PCGPinProperties
/// Size: 0x0010 (0x000000 - 0x000010)
struct FPCGPinProperties
{ 
	FName                                              Label;                                                      // 0x0000   (0x0004)  
	EPCGPinUsage                                       Usage;                                                      // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0005   (0x0003)  MISSED
	EPCGDataType                                       AllowedTypes;                                               // 0x0008   (0x0004)  
	bool                                               bAllowMultipleData;                                         // 0x000C   (0x0001)  
	EPCGPinStatus                                      PinStatus;                                                  // 0x000D   (0x0001)  
	bool                                               bInvisiblePin;                                              // 0x000E   (0x0001)  
	bool                                               bAllowMultipleConnections;                                  // 0x000F   (0x0001)  
};

/// Class /Script/PCG.PCGLoadDataAssetSettings
/// Size: 0x0048 (0x0000A8 - 0x0000F0)
class UPCGLoadDataAssetSettings : public UPCGSettings
{ 
public:
	SDK_UNDEFINED(32,14540) /* TWeakObjectPtr<UPCGDataAsset*> */ __um(Asset);                                      // 0x00A8   (0x0020)  
	TArray<FPCGPinProperties>                          Pins;                                                       // 0x00C8   (0x0010)  
	SDK_UNDEFINED(16,14541) /* FString */              __um(AssetName);                                            // 0x00D8   (0x0010)  
	bool                                               bWarnIfNoAsset;                                             // 0x00E8   (0x0001)  
	bool                                               bSynchronousLoad;                                           // 0x00E9   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x00EA   (0x0006)  MISSED
};

/// Class /Script/PCG.PCGMakeConcreteSettings
/// Size: 0x0000 (0x0000A8 - 0x0000A8)
class UPCGMakeConcreteSettings : public UPCGSettings
{ 
public:
};

/// Class /Script/PCG.PCGMergeAttributesSettings
/// Size: 0x0000 (0x0000A8 - 0x0000A8)
class UPCGMergeAttributesSettings : public UPCGSettings
{ 
public:
};

/// Class /Script/PCG.PCGMetadataSettingsBase
/// Size: 0x0030 (0x0000A8 - 0x0000D8)
class UPCGMetadataSettingsBase : public UPCGSettings
{ 
public:
	FPCGAttributePropertyOutputSelector                OutputTarget;                                               // 0x00A8   (0x0028)  
	FName                                              OutputDataFromPin;                                          // 0x00D0   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00D4   (0x0004)  MISSED


	/// Functions
	// Function /Script/PCG.PCGMetadataSettingsBase.GetOutputDataFromPinOptions
	// TArray<FName> GetOutputDataFromPinOptions();                                                                          // [0xa5bd340] Final|Native|Protected|Const 
};

/// Class /Script/PCG.PCGMetadataMakeRotatorSettings
/// Size: 0x0080 (0x0000D8 - 0x000158)
class UPCGMetadataMakeRotatorSettings : public UPCGMetadataSettingsBase
{ 
public:
	FPCGAttributePropertyInputSelector                 InputSource1;                                               // 0x00D8   (0x0028)  
	FPCGAttributePropertyInputSelector                 InputSource2;                                               // 0x0100   (0x0028)  
	FPCGAttributePropertyInputSelector                 InputSource3;                                               // 0x0128   (0x0028)  
	EPCGMetadataMakeRotatorOp                          Operation;                                                  // 0x0150   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0151   (0x0007)  MISSED
};

/// Struct /Script/PCG.EnumSelector
/// Size: 0x0010 (0x000000 - 0x000010)
struct FEnumSelector
{ 
	class UEnum*                                       Class;                                                      // 0x0000   (0x0008)  
	int64_t                                            Value;                                                      // 0x0008   (0x0008)  
};

/// Class /Script/PCG.PCGMultiSelectSettings
/// Size: 0x0058 (0x0000A8 - 0x000100)
class UPCGMultiSelectSettings : public UPCGSettings
{ 
public:
	EPCGControlFlowSelectionMode                       SelectionMode;                                              // 0x00A8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00A9   (0x0003)  MISSED
	int32_t                                            IntegerSelection;                                           // 0x00AC   (0x0004)  
	TArray<int32_t>                                    IntOptions;                                                 // 0x00B0   (0x0010)  
	SDK_UNDEFINED(16,14542) /* FString */              __um(StringSelection);                                      // 0x00C0   (0x0010)  
	SDK_UNDEFINED(16,14543) /* TArray<FString> */      __um(StringOptions);                                        // 0x00D0   (0x0010)  
	FEnumSelector                                      EnumSelection;                                              // 0x00E0   (0x0010)  
	TArray<FName>                                      CachedPinLabels;                                            // 0x00F0   (0x0010)  
};

/// Class /Script/PCG.PCGMutateSeedSettings
/// Size: 0x0000 (0x0000A8 - 0x0000A8)
class UPCGMutateSeedSettings : public UPCGSettings
{ 
public:
};

/// Class /Script/PCG.PCGNormalToDensitySettings
/// Size: 0x0030 (0x0000A8 - 0x0000D8)
class UPCGNormalToDensitySettings : public UPCGSettings
{ 
public:
	FVector                                            Normal;                                                     // 0x00A8   (0x0018)  
	double                                             Offset;                                                     // 0x00C0   (0x0008)  
	double                                             Strength;                                                   // 0x00C8   (0x0008)  
	PCGNormalToDensityMode                             DensityMode;                                                // 0x00D0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x00D1   (0x0007)  MISSED
};

/// Class /Script/PCG.PCGNumberOfElementsBaseSettings
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UPCGNumberOfElementsBaseSettings : public UPCGSettings
{ 
public:
	FName                                              OutputAttributeName;                                        // 0x00A8   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00AC   (0x0004)  MISSED
};

/// Class /Script/PCG.PCGNumberOfPointsSettings
/// Size: 0x0000 (0x0000B0 - 0x0000B0)
class UPCGNumberOfPointsSettings : public UPCGNumberOfElementsBaseSettings
{ 
public:
};

/// Class /Script/PCG.PCGNumberOfEntriesSettings
/// Size: 0x0000 (0x0000B0 - 0x0000B0)
class UPCGNumberOfEntriesSettings : public UPCGNumberOfElementsBaseSettings
{ 
public:
};

/// Class /Script/PCG.PCGSettingsWithDynamicInputs
/// Size: 0x0010 (0x0000A8 - 0x0000B8)
class UPCGSettingsWithDynamicInputs : public UPCGSettings
{ 
public:
	TArray<FPCGPinProperties>                          DynamicInputPinProperties;                                  // 0x00A8   (0x0010)  
};

/// Class /Script/PCG.PCGOuterIntersectionSettings
/// Size: 0x0008 (0x0000B8 - 0x0000C0)
class UPCGOuterIntersectionSettings : public UPCGSettingsWithDynamicInputs
{ 
public:
	EPCGIntersectionDensityFunction                    DensityFunction;                                            // 0x00B8   (0x0001)  
	bool                                               bIgnorePinsWithNoInput;                                     // 0x00B9   (0x0001)  
	bool                                               bKeepZeroDensityPoints;                                     // 0x00BA   (0x0001)  
	unsigned char                                      UnknownData00_6[0x5];                                       // 0x00BB   (0x0005)  MISSED
};

/// Class /Script/PCG.PCGPointNeighborhoodSettings
/// Size: 0x0020 (0x0000A8 - 0x0000C8)
class UPCGPointNeighborhoodSettings : public UPCGSettings
{ 
public:
	double                                             SearchDistance;                                             // 0x00A8   (0x0008)  
	bool                                               bSetDistanceToAttribute;                                    // 0x00B0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00B1   (0x0003)  MISSED
	FName                                              DistanceAttribute;                                          // 0x00B4   (0x0004)  
	bool                                               bSetAveragePositionToAttribute;                             // 0x00B8   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x00B9   (0x0003)  MISSED
	FName                                              AveragePositionAttribute;                                   // 0x00BC   (0x0004)  
	EPCGPointNeighborhoodDensityMode                   SetDensity;                                                 // 0x00C0   (0x0004)  
	bool                                               bSetAveragePosition;                                        // 0x00C4   (0x0001)  
	bool                                               bSetAverageColor;                                           // 0x00C5   (0x0001)  
	bool                                               bWeightedAverage;                                           // 0x00C6   (0x0001)  
	unsigned char                                      UnknownData02_6[0x1];                                       // 0x00C7   (0x0001)  MISSED
};

/// Class /Script/PCG.PCGManagedDebugStringMessageKey
/// Size: 0x0008 (0x000038 - 0x000040)
class UPCGManagedDebugStringMessageKey : public UPCGManagedResource
{ 
public:
	uint64_t                                           HashKey;                                                    // 0x0038   (0x0008)  
};

/// Class /Script/PCG.PCGPrintElementSettings
/// Size: 0x0030 (0x0000A8 - 0x0000D8)
class UPCGPrintElementSettings : public UPCGSettings
{ 
public:
	SDK_UNDEFINED(16,14544) /* FString */              __um(PrintString);                                          // 0x00A8   (0x0010)  
	EPCGPrintVerbosity                                 Verbosity;                                                  // 0x00B8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x00B9   (0x0007)  MISSED
	SDK_UNDEFINED(16,14545) /* FString */              __um(CustomPrefix);                                         // 0x00C0   (0x0010)  
	bool                                               bDisplayOnNode;                                             // 0x00D0   (0x0001)  
	bool                                               bPrintPerComponent;                                         // 0x00D1   (0x0001)  
	bool                                               bPrefixWithOwner;                                           // 0x00D2   (0x0001)  
	bool                                               bPrefixWithComponent;                                       // 0x00D3   (0x0001)  
	bool                                               bPrefixWithGraph;                                           // 0x00D4   (0x0001)  
	bool                                               bPrefixWithNode;                                            // 0x00D5   (0x0001)  
	bool                                               bEnablePrint;                                               // 0x00D6   (0x0001)  
	unsigned char                                      UnknownData01_6[0x1];                                       // 0x00D7   (0x0001)  MISSED
};

/// Class /Script/PCG.PCGQualityBranchSettings
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UPCGQualityBranchSettings : public UPCGSettings
{ 
public:
	bool                                               bUseLowPin;                                                 // 0x00A8   (0x0001)  
	bool                                               bUseMediumPin;                                              // 0x00A9   (0x0001)  
	bool                                               bUseHighPin;                                                // 0x00AA   (0x0001)  
	bool                                               bUseEpicPin;                                                // 0x00AB   (0x0001)  
	bool                                               bUseCinematicPin;                                           // 0x00AC   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00AD   (0x0003)  MISSED
};

/// Class /Script/PCG.PCGQualitySelectSettings
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UPCGQualitySelectSettings : public UPCGSettings
{ 
public:
	bool                                               bUseLowPin;                                                 // 0x00A8   (0x0001)  
	bool                                               bUseMediumPin;                                              // 0x00A9   (0x0001)  
	bool                                               bUseHighPin;                                                // 0x00AA   (0x0001)  
	bool                                               bUseEpicPin;                                                // 0x00AB   (0x0001)  
	bool                                               bUseCinematicPin;                                           // 0x00AC   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00AD   (0x0003)  MISSED
};

/// Class /Script/PCG.PCGReplaceTagsSettings
/// Size: 0x0020 (0x0000A8 - 0x0000C8)
class UPCGReplaceTagsSettings : public UPCGSettings
{ 
public:
	SDK_UNDEFINED(16,14546) /* FString */              __um(SelectedTags);                                         // 0x00A8   (0x0010)  
	SDK_UNDEFINED(16,14547) /* FString */              __um(ReplacedTags);                                         // 0x00B8   (0x0010)  
};

/// Class /Script/PCG.PCGRerouteSettings
/// Size: 0x0000 (0x0000A8 - 0x0000A8)
class UPCGRerouteSettings : public UPCGSettings
{ 
public:
};

/// Class /Script/PCG.PCGNamedRerouteBaseSettings
/// Size: 0x0000 (0x0000A8 - 0x0000A8)
class UPCGNamedRerouteBaseSettings : public UPCGRerouteSettings
{ 
public:
};

/// Class /Script/PCG.PCGNamedRerouteDeclarationSettings
/// Size: 0x0000 (0x0000A8 - 0x0000A8)
class UPCGNamedRerouteDeclarationSettings : public UPCGNamedRerouteBaseSettings
{ 
public:
};

/// Class /Script/PCG.PCGNamedRerouteUsageSettings
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UPCGNamedRerouteUsageSettings : public UPCGNamedRerouteBaseSettings
{ 
public:
	class UPCGNamedRerouteDeclarationSettings*         Declaration;                                                // 0x00A8   (0x0008)  
};

/// Class /Script/PCG.PCGResetPointCenterSettings
/// Size: 0x0018 (0x0000A8 - 0x0000C0)
class UPCGResetPointCenterSettings : public UPCGSettings
{ 
public:
	FVector                                            PointCenterLocation;                                        // 0x00A8   (0x0018)  
};

/// Class /Script/PCG.PCGSampleTextureSettings
/// Size: 0x0038 (0x0000A8 - 0x0000E0)
class UPCGSampleTextureSettings : public UPCGSettings
{ 
public:
	EPCGTextureMappingMethod                           TextureMappingMethod;                                       // 0x00A8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x00A9   (0x0007)  MISSED
	FPCGAttributePropertyInputSelector                 UVCoordinatesAttribute;                                     // 0x00B0   (0x0028)  
	EPCGTextureAddressMode                             TilingMode;                                                 // 0x00D8   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x00D9   (0x0007)  MISSED
};

/// Class /Script/PCG.PCGSanityCheckPointDataSettings
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UPCGSanityCheckPointDataSettings : public UPCGSettings
{ 
public:
	int32_t                                            MinPointCount;                                              // 0x00A8   (0x0004)  
	int32_t                                            MaxPointCount;                                              // 0x00AC   (0x0004)  
};

/// Class /Script/PCG.PCGSchedulingPolicyBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UPCGSchedulingPolicyBase : public UObject
{ 
public:
};

/// Class /Script/PCG.PCGSortAttributesSettings
/// Size: 0x0030 (0x0000A8 - 0x0000D8)
class UPCGSortAttributesSettings : public UPCGSettings
{ 
public:
	FPCGAttributePropertyInputSelector                 InputSource;                                                // 0x00A8   (0x0028)  
	EPCGSortMethod                                     SortMethod;                                                 // 0x00D0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x00D1   (0x0007)  MISSED
};

/// Class /Script/PCG.PCGSplitPointsSettings
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UPCGSplitPointsSettings : public UPCGSettings
{ 
public:
	float                                              SplitPosition;                                              // 0x00A8   (0x0004)  
	EPCGSplitAxis                                      SplitAxis;                                                  // 0x00AC   (0x0004)  
};

/// Class /Script/PCG.PCGSwitchSettings
/// Size: 0x0058 (0x0000A8 - 0x000100)
class UPCGSwitchSettings : public UPCGSettings
{ 
public:
	EPCGControlFlowSelectionMode                       SelectionMode;                                              // 0x00A8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00A9   (0x0003)  MISSED
	int32_t                                            IntegerSelection;                                           // 0x00AC   (0x0004)  
	TArray<int32_t>                                    IntOptions;                                                 // 0x00B0   (0x0010)  
	SDK_UNDEFINED(16,14548) /* FString */              __um(StringSelection);                                      // 0x00C0   (0x0010)  
	SDK_UNDEFINED(16,14549) /* TArray<FString> */      __um(StringOptions);                                        // 0x00D0   (0x0010)  
	FEnumSelector                                      EnumSelection;                                              // 0x00E0   (0x0010)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x00F0   (0x0010)  MISSED
};

/// Class /Script/PCG.PCGUserParameterGetSettings
/// Size: 0x0018 (0x0000A8 - 0x0000C0)
class UPCGUserParameterGetSettings : public UPCGSettings
{ 
public:
	FGuid                                              PropertyGuid;                                               // 0x00A8   (0x0010)  
	FName                                              PropertyName;                                               // 0x00B8   (0x0004)  
	bool                                               bForceObjectAndStructExtraction;                            // 0x00BC   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00BD   (0x0003)  MISSED
};

/// Class /Script/PCG.PCGUserParametersData
/// Size: 0x0018 (0x000038 - 0x000050)
class UPCGUserParametersData : public UPCGData
{ 
public:
	class UPCGGraphInterface*                          OriginalGraph;                                              // 0x0038   (0x0008)  
	FInstancedStruct                                   UserParameters;                                             // 0x0040   (0x0010)  
};

/// Class /Script/PCG.PCGVisualizeAttributeSettings
/// Size: 0x0070 (0x0000A8 - 0x000118)
class UPCGVisualizeAttributeSettings : public UPCGSettings
{ 
public:
	FPCGAttributePropertyInputSelector                 AttributeSource;                                            // 0x00A8   (0x0028)  
	SDK_UNDEFINED(16,14550) /* FString */              __um(CustomPrefixString);                                   // 0x00D0   (0x0010)  
	bool                                               bPrefixWithIndex;                                           // 0x00E0   (0x0001)  
	bool                                               bPrefixWithAttributeName;                                   // 0x00E1   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x00E2   (0x0006)  MISSED
	FVector                                            LocalOffset;                                                // 0x00E8   (0x0018)  
	FColor                                             Color;                                                      // 0x0100   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0104   (0x0004)  MISSED
	double                                             duration;                                                   // 0x0108   (0x0008)  
	int32_t                                            PointLimit;                                                 // 0x0110   (0x0004)  
	bool                                               bVisualizeEnabled;                                          // 0x0114   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0115   (0x0003)  MISSED
};

/// Class /Script/PCG.PCGDifferenceData
/// Size: 0x0028 (0x0000D0 - 0x0000F8)
class UPCGDifferenceData : public UPCGSpatialDataWithPointCache
{ 
public:
	bool                                               bDiffMetadata;                                              // 0x00D0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x00D1   (0x0007)  MISSED
	class UPCGSpatialData*                             Source;                                                     // 0x00D8   (0x0008)  
	class UPCGSpatialData*                             Difference;                                                 // 0x00E0   (0x0008)  
	class UPCGUnionData*                               DifferencesUnion;                                           // 0x00E8   (0x0008)  
	EPCGDifferenceDensityFunction                      DensityFunction;                                            // 0x00F0   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x00F1   (0x0007)  MISSED


	/// Functions
	// Function /Script/PCG.PCGDifferenceData.SetDensityFunction
	// void SetDensityFunction(EPCGDifferenceDensityFunction InDensityFunction);                                             // [0xa5be1fc] Final|Native|Public|BlueprintCallable 
	// Function /Script/PCG.PCGDifferenceData.Initialize
	// void Initialize(class UPCGSpatialData* InData);                                                                       // [0xa5bd638] Final|Native|Public|BlueprintCallable 
	// Function /Script/PCG.PCGDifferenceData.AddDifference
	// void AddDifference(class UPCGSpatialData* InDifference);                                                              // [0xa5bd008] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/PCG.PCGIntersectionData
/// Size: 0x0088 (0x0000D0 - 0x000158)
class UPCGIntersectionData : public UPCGSpatialDataWithPointCache
{ 
public:
	EPCGIntersectionDensityFunction                    DensityFunction;                                            // 0x00D0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x00D1   (0x0007)  MISSED
	class UPCGSpatialData*                             A;                                                          // 0x00D8   (0x0008)  
	class UPCGSpatialData*                             B;                                                          // 0x00E0   (0x0008)  
	FBox                                               CachedBounds;                                               // 0x00E8   (0x0038)  
	FBox                                               CachedStrictBounds;                                         // 0x0120   (0x0038)  


	/// Functions
	// Function /Script/PCG.PCGIntersectionData.Initialize
	// void Initialize(class UPCGSpatialData* InA, class UPCGSpatialData* InB);                                              // [0xa5bd6b8] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/PCG.PCGSurfaceData
/// Size: 0x0060 (0x0000D0 - 0x000130)
class UPCGSurfaceData : public UPCGSpatialDataWithPointCache
{ 
public:
	FTransform                                         Transform;                                                  // 0x00D0   (0x0060)  
};

/// Struct /Script/PCG.PCGLandscapeDataProps
/// Size: 0x0005 (0x000000 - 0x000005)
struct FPCGLandscapeDataProps
{ 
	bool                                               bGetHeightOnly;                                             // 0x0000   (0x0001)  
	bool                                               bGetLayerWeights;                                           // 0x0001   (0x0001)  
	bool                                               bGetActorReference;                                         // 0x0002   (0x0001)  
	bool                                               bGetPhysicalMaterial;                                       // 0x0003   (0x0001)  
	bool                                               bGetComponentCoordinates;                                   // 0x0004   (0x0001)  
};

/// Class /Script/PCG.PCGLandscapeData
/// Size: 0x0080 (0x000130 - 0x0001B0)
class UPCGLandscapeData : public UPCGSurfaceData
{ 
public:
	SDK_UNDEFINED(16,14551) /* TArray<TWeakObjectPtr<ALandscapeProxy*>> */ __um(Landscapes);                       // 0x0130   (0x0010)  
	FBox                                               Bounds;                                                     // 0x0140   (0x0038)  
	FPCGLandscapeDataProps                             DataProps;                                                  // 0x0178   (0x0005)  
	unsigned char                                      UnknownData00_6[0x33];                                      // 0x017D   (0x0033)  MISSED
};

/// Class /Script/PCG.PCGPolyLineData
/// Size: 0x0000 (0x0000D0 - 0x0000D0)
class UPCGPolyLineData : public UPCGSpatialDataWithPointCache
{ 
public:
};

/// Class /Script/PCG.PCGLandscapeSplineData
/// Size: 0x0020 (0x0000D0 - 0x0000F0)
class UPCGLandscapeSplineData : public UPCGPolyLineData
{ 
public:
	SDK_UNDEFINED(8,14552) /* TWeakObjectPtr<ULandscapeSplinesComponent*> */ __um(Spline);                         // 0x00D0   (0x0008)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x00D8   (0x0018)  MISSED
};

/// Class /Script/PCG.PCGPointData
/// Size: 0x0130 (0x000080 - 0x0001B0)
class UPCGPointData : public UPCGSpatialData
{ 
public:
	TArray<FPCGPoint>                                  Points;                                                     // 0x0080   (0x0010)  
	unsigned char                                      UnknownData00_6[0x120];                                     // 0x0090   (0x0120)  MISSED


	/// Functions
	// Function /Script/PCG.PCGPointData.SetPoints
	// void SetPoints(TArray<FPCGPoint>& InPoints);                                                                          // [0xa5be27c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGPointData.GetPointsCopy
	// TArray<FPCGPoint> GetPointsCopy();                                                                                    // [0xa5bd4b8] Final|Native|Public|BlueprintCallable|Const 
	// Function /Script/PCG.PCGPointData.GetPoints
	// TArray<FPCGPoint> GetPoints();                                                                                        // [0xa5bd49c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PCG.PCGPointData.GetPoint
	// FPCGPoint GetPoint(int32_t Index);                                                                                    // [0xa5bd380] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PCG.PCGPointData.CopyPointsFrom
	// void CopyPointsFrom(class UPCGPointData* InData, TArray<int32_t>& InDataIndices);                                     // [0xa5bd088] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/PCG.PCGPrimitiveData
/// Size: 0x0090 (0x0000D0 - 0x000160)
class UPCGPrimitiveData : public UPCGSpatialDataWithPointCache
{ 
public:
	FVector                                            VoxelSize;                                                  // 0x00D0   (0x0018)  
	SDK_UNDEFINED(8,14553) /* TWeakObjectPtr<UPrimitiveComponent*> */ __um(Primitive);                             // 0x00E8   (0x0008)  
	FBox                                               CachedBounds;                                               // 0x00F0   (0x0038)  
	FBox                                               CachedStrictBounds;                                         // 0x0128   (0x0038)  
};

/// Struct /Script/PCG.PCGProjectionParams
/// Size: 0x0020 (0x000000 - 0x000020)
struct FPCGProjectionParams
{ 
	bool                                               bProjectPositions;                                          // 0x0000   (0x0001)  
	bool                                               bProjectRotations;                                          // 0x0001   (0x0001)  
	bool                                               bProjectScales;                                             // 0x0002   (0x0001)  
	EPCGProjectionColorBlendMode                       ColorBlendMode;                                             // 0x0003   (0x0001)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	SDK_UNDEFINED(16,14554) /* FString */              __um(AttributeList);                                        // 0x0008   (0x0010)  
	EPCGMetadataFilterMode                             AttributeMode;                                              // 0x0018   (0x0001)  
	EPCGMetadataOp                                     AttributeMergeOperation;                                    // 0x0019   (0x0001)  
	EPCGProjectionTagMergeMode                         TagMergeOperation;                                          // 0x001A   (0x0001)  
	unsigned char                                      UnknownData01_6[0x5];                                       // 0x001B   (0x0005)  MISSED
};

/// Class /Script/PCG.PCGProjectionData
/// Size: 0x00A0 (0x0000D0 - 0x000170)
class UPCGProjectionData : public UPCGSpatialDataWithPointCache
{ 
public:
	class UPCGSpatialData*                             Source;                                                     // 0x00D0   (0x0008)  
	class UPCGSpatialData*                             Target;                                                     // 0x00D8   (0x0008)  
	FBox                                               CachedBounds;                                               // 0x00E0   (0x0038)  
	FBox                                               CachedStrictBounds;                                         // 0x0118   (0x0038)  
	FPCGProjectionParams                               ProjectionParams;                                           // 0x0150   (0x0020)  
};

/// Class /Script/PCG.PCGBaseTextureData
/// Size: 0x00B0 (0x000130 - 0x0001E0)
class UPCGBaseTextureData : public UPCGSurfaceData
{ 
public:
	EPCGTextureDensityFunction                         DensityFunction;                                            // 0x0130   (0x0001)  
	EPCGTextureColorChannel                            ColorChannel;                                               // 0x0131   (0x0001)  
	EPCGTextureFilter                                  Filter;                                                     // 0x0132   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x0133   (0x0001)  MISSED
	float                                              TexelSize;                                                  // 0x0134   (0x0004)  
	bool                                               bUseAdvancedTiling;                                         // 0x0138   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0139   (0x0007)  MISSED
	FVector2D                                          Tiling;                                                     // 0x0140   (0x0010)  
	FVector2D                                          CenterOffset;                                               // 0x0150   (0x0010)  
	float                                              Rotation;                                                   // 0x0160   (0x0004)  
	bool                                               bUseTileBounds;                                             // 0x0164   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0165   (0x0003)  MISSED
	FBox2D                                             TileBounds;                                                 // 0x0168   (0x0028)  
	TArray<FLinearColor>                               ColorData;                                                  // 0x0190   (0x0010)  
	FBox                                               Bounds;                                                     // 0x01A0   (0x0038)  
	int32_t                                            Height;                                                     // 0x01D8   (0x0004)  
	int32_t                                            Width;                                                      // 0x01DC   (0x0004)  
};

/// Class /Script/PCG.PCGRenderTargetData
/// Size: 0x0010 (0x0001E0 - 0x0001F0)
class UPCGRenderTargetData : public UPCGBaseTextureData
{ 
public:
	class UTextureRenderTarget2D*                      RenderTarget;                                               // 0x01E0   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x01E8   (0x0008)  MISSED


	/// Functions
	// Function /Script/PCG.PCGRenderTargetData.Initialize
	// void Initialize(class UTextureRenderTarget2D* InRenderTarget, FTransform& InTransform);                               // [0xa5bd77c] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Struct /Script/PCG.PCGSplineStruct
/// Size: 0x0160 (0x000000 - 0x000160)
struct FPCGSplineStruct
{ 
	FSplineCurves                                      SplineCurves;                                               // 0x0000   (0x0070)  
	FTransform                                         Transform;                                                  // 0x0070   (0x0060)  
	FVector                                            DefaultUpVector;                                            // 0x00D0   (0x0018)  
	int32_t                                            ReparamStepsPerSegment;                                     // 0x00E8   (0x0004)  
	bool                                               bClosedLoop;                                                // 0x00EC   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00ED   (0x0003)  MISSED
	FBoxSphereBounds                                   LocalBounds;                                                // 0x00F0   (0x0038)  
	FBoxSphereBounds                                   Bounds;                                                     // 0x0128   (0x0038)  
};

/// Class /Script/PCG.PCGSplineData
/// Size: 0x01A0 (0x0000D0 - 0x000270)
class UPCGSplineData : public UPCGPolyLineData
{ 
public:
	FPCGSplineStruct                                   SplineStruct;                                               // 0x00D0   (0x0160)  
	FBox                                               CachedBounds;                                               // 0x0230   (0x0038)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0268   (0x0008)  MISSED
};

/// Class /Script/PCG.PCGSplineProjectionData
/// Size: 0x0018 (0x000170 - 0x000188)
class UPCGSplineProjectionData : public UPCGProjectionData
{ 
public:
	FInterpCurveVector2D                               ProjectedPosition;                                          // 0x0170   (0x0018)  
};

/// Class /Script/PCG.PCGSplineInteriorSurfaceData
/// Size: 0x01C0 (0x000130 - 0x0002F0)
class UPCGSplineInteriorSurfaceData : public UPCGSurfaceData
{ 
public:
	FPCGSplineStruct                                   SplineStruct;                                               // 0x0130   (0x0160)  
	FBox                                               CachedBounds;                                               // 0x0290   (0x0038)  
	TArray<FVector>                                    CachedSplinePoints;                                         // 0x02C8   (0x0010)  
	TArray<FVector2D>                                  CachedSplinePoints2D;                                       // 0x02D8   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x02E8   (0x0008)  MISSED
};

/// Class /Script/PCG.PCGTextureData
/// Size: 0x0010 (0x0001E0 - 0x0001F0)
class UPCGTextureData : public UPCGBaseTextureData
{ 
public:
	SDK_UNDEFINED(8,14555) /* TWeakObjectPtr<UTexture*> */ __um(Texture);                                          // 0x01E0   (0x0008)  
	int32_t                                            TextureIndex;                                               // 0x01E8   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x01EC   (0x0004)  MISSED
};

/// Class /Script/PCG.PCGUnionData
/// Size: 0x0098 (0x0000D0 - 0x000168)
class UPCGUnionData : public UPCGSpatialDataWithPointCache
{ 
public:
	TArray<class UPCGSpatialData*>                     Data;                                                       // 0x00D0   (0x0010)  
	class UPCGSpatialData*                             FirstNonTrivialTransformData;                               // 0x00E0   (0x0008)  
	EPCGUnionType                                      UnionType;                                                  // 0x00E8   (0x0001)  
	EPCGUnionDensityFunction                           DensityFunction;                                            // 0x00E9   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x00EA   (0x0006)  MISSED
	FBox                                               CachedBounds;                                               // 0x00F0   (0x0038)  
	FBox                                               CachedStrictBounds;                                         // 0x0128   (0x0038)  
	int32_t                                            CachedDimension;                                            // 0x0160   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0164   (0x0004)  MISSED


	/// Functions
	// Function /Script/PCG.PCGUnionData.Initialize
	// void Initialize(class UPCGSpatialData* InA, class UPCGSpatialData* InB);                                              // [0xa5bd8ac] Final|Native|Public|BlueprintCallable 
	// Function /Script/PCG.PCGUnionData.AddData
	// void AddData(class UPCGSpatialData* InData);                                                                          // [0xa5bcf88] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/PCG.PCGVolumeData
/// Size: 0x0098 (0x0000D0 - 0x000168)
class UPCGVolumeData : public UPCGSpatialDataWithPointCache
{ 
public:
	FVector                                            VoxelSize;                                                  // 0x00D0   (0x0018)  
	SDK_UNDEFINED(8,14556) /* TWeakObjectPtr<AVolume*> */ __um(Volume);                                            // 0x00E8   (0x0008)  
	FBox                                               Bounds;                                                     // 0x00F0   (0x0038)  
	FBox                                               StrictBounds;                                               // 0x0128   (0x0038)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0160   (0x0008)  MISSED
};

/// Struct /Script/PCG.PCGWorldCommonQueryParams
/// Size: 0x0070 (0x000000 - 0x000070)
struct FPCGWorldCommonQueryParams
{ 
	bool                                               bIgnorePCGHits;                                             // 0x0000   (0x0001)  
	bool                                               bIgnoreSelfHits;                                            // 0x0001   (0x0001)  
	SDK_UNDEFINED(1,14557) /* TEnumAsByte<ECollisionChannel> */ __um(CollisionChannel);                            // 0x0002   (0x0001)  
	bool                                               bTraceComplex;                                              // 0x0003   (0x0001)  
	EPCGWorldQueryFilterByTag                          ActorTagFilter;                                             // 0x0004   (0x0004)  
	SDK_UNDEFINED(16,14558) /* FString */              __um(ActorTagsList);                                        // 0x0008   (0x0010)  
	bool                                               bIgnoreLandscapeHits;                                       // 0x0018   (0x0001)  
	bool                                               bGetReferenceToActorHit;                                    // 0x0019   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x001A   (0x0006)  MISSED
	SDK_UNDEFINED(80,14559) /* TSet<FName> */          __um(ParsedActorTagsList);                                  // 0x0020   (0x0050)  
};

/// Struct /Script/PCG.PCGWorldVolumetricQueryParams
/// Size: 0x0008 (0x000070 - 0x000078)
struct FPCGWorldVolumetricQueryParams : FPCGWorldCommonQueryParams
{ 
	bool                                               bSearchForOverlap;                                          // 0x0070   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0071   (0x0007)  MISSED
};

/// Class /Script/PCG.PCGWorldVolumetricData
/// Size: 0x0088 (0x000168 - 0x0001F0)
class UPCGWorldVolumetricData : public UPCGVolumeData
{ 
public:
	SDK_UNDEFINED(8,14560) /* TWeakObjectPtr<UWorld*> */ __um(World);                                              // 0x0168   (0x0008)  
	SDK_UNDEFINED(8,14561) /* TWeakObjectPtr<UPCGComponent*> */ __um(OriginatingComponent);                        // 0x0170   (0x0008)  
	FPCGWorldVolumetricQueryParams                     QueryParams;                                                // 0x0178   (0x0078)  
};

/// Struct /Script/PCG.PCGWorldRayHitQueryParams
/// Size: 0x0048 (0x000070 - 0x0000B8)
struct FPCGWorldRayHitQueryParams : FPCGWorldCommonQueryParams
{ 
	bool                                               bOverrideDefaultParams;                                     // 0x0070   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0071   (0x0007)  MISSED
	FVector                                            RayOrigin;                                                  // 0x0078   (0x0018)  
	FVector                                            RayDirection;                                               // 0x0090   (0x0018)  
	double                                             RayLength;                                                  // 0x00A8   (0x0008)  
	bool                                               bApplyMetadataFromLandscape;                                // 0x00B0   (0x0001)  
	bool                                               bGetReferenceToPhysicalMaterial;                            // 0x00B1   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x00B2   (0x0006)  MISSED
};

/// Class /Script/PCG.PCGWorldRayHitData
/// Size: 0x0100 (0x000130 - 0x000230)
class UPCGWorldRayHitData : public UPCGSurfaceData
{ 
public:
	SDK_UNDEFINED(8,14562) /* TWeakObjectPtr<UWorld*> */ __um(World);                                              // 0x0130   (0x0008)  
	SDK_UNDEFINED(8,14563) /* TWeakObjectPtr<UPCGComponent*> */ __um(OriginatingComponent);                        // 0x0138   (0x0008)  
	FBox                                               Bounds;                                                     // 0x0140   (0x0038)  
	FPCGWorldRayHitQueryParams                         QueryParams;                                                // 0x0178   (0x00B8)  
};

/// Class /Script/PCG.PCGMetadataBitwiseSettings
/// Size: 0x0058 (0x0000D8 - 0x000130)
class UPCGMetadataBitwiseSettings : public UPCGMetadataSettingsBase
{ 
public:
	EPCGMetadataBitwiseOperation                       Operation;                                                  // 0x00D8   (0x0002)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x00DA   (0x0006)  MISSED
	FPCGAttributePropertyInputSelector                 InputSource1;                                               // 0x00E0   (0x0028)  
	FPCGAttributePropertyInputSelector                 InputSource2;                                               // 0x0108   (0x0028)  
};

/// Class /Script/PCG.PCGMetadataBooleanSettings
/// Size: 0x0058 (0x0000D8 - 0x000130)
class UPCGMetadataBooleanSettings : public UPCGMetadataSettingsBase
{ 
public:
	EPCGMetadataBooleanOperation                       Operation;                                                  // 0x00D8   (0x0002)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x00DA   (0x0006)  MISSED
	FPCGAttributePropertyInputSelector                 InputSource1;                                               // 0x00E0   (0x0028)  
	FPCGAttributePropertyInputSelector                 InputSource2;                                               // 0x0108   (0x0028)  
};

/// Class /Script/PCG.PCGMetadataBreakTransformSettings
/// Size: 0x0028 (0x0000D8 - 0x000100)
class UPCGMetadataBreakTransformSettings : public UPCGMetadataSettingsBase
{ 
public:
	FPCGAttributePropertyInputSelector                 InputSource;                                                // 0x00D8   (0x0028)  
};

/// Class /Script/PCG.PCGMetadataBreakVectorSettings
/// Size: 0x0028 (0x0000D8 - 0x000100)
class UPCGMetadataBreakVectorSettings : public UPCGMetadataSettingsBase
{ 
public:
	FPCGAttributePropertyInputSelector                 InputSource;                                                // 0x00D8   (0x0028)  
};

/// Class /Script/PCG.PCGMetadataCompareSettings
/// Size: 0x0060 (0x0000D8 - 0x000138)
class UPCGMetadataCompareSettings : public UPCGMetadataSettingsBase
{ 
public:
	EPCGMetadataCompareOperation                       Operation;                                                  // 0x00D8   (0x0002)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x00DA   (0x0006)  MISSED
	FPCGAttributePropertyInputSelector                 InputSource1;                                               // 0x00E0   (0x0028)  
	FPCGAttributePropertyInputSelector                 InputSource2;                                               // 0x0108   (0x0028)  
	double                                             Tolerance;                                                  // 0x0130   (0x0008)  
};

/// Class /Script/PCG.PCGMetadataOperationSettings
/// Size: 0x0058 (0x0000A8 - 0x000100)
class UPCGMetadataOperationSettings : public UPCGSettings
{ 
public:
	FPCGAttributePropertyInputSelector                 InputSource;                                                // 0x00A8   (0x0028)  
	FPCGAttributePropertyOutputSelector                OutputTarget;                                               // 0x00D0   (0x0028)  
	bool                                               bCopyAllAttributes;                                         // 0x00F8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x00F9   (0x0007)  MISSED
};

/// Class /Script/PCG.PCGMetadataMakeTransformSettings
/// Size: 0x0078 (0x0000D8 - 0x000150)
class UPCGMetadataMakeTransformSettings : public UPCGMetadataSettingsBase
{ 
public:
	FPCGAttributePropertyInputSelector                 InputSource1;                                               // 0x00D8   (0x0028)  
	FPCGAttributePropertyInputSelector                 InputSource2;                                               // 0x0100   (0x0028)  
	FPCGAttributePropertyInputSelector                 InputSource3;                                               // 0x0128   (0x0028)  
};

/// Class /Script/PCG.PCGMetadataMakeVectorSettings
/// Size: 0x00A8 (0x0000D8 - 0x000180)
class UPCGMetadataMakeVectorSettings : public UPCGMetadataSettingsBase
{ 
public:
	FPCGAttributePropertyInputSelector                 InputSource1;                                               // 0x00D8   (0x0028)  
	FPCGAttributePropertyInputSelector                 InputSource2;                                               // 0x0100   (0x0028)  
	FPCGAttributePropertyInputSelector                 InputSource3;                                               // 0x0128   (0x0028)  
	FPCGAttributePropertyInputSelector                 InputSource4;                                               // 0x0150   (0x0028)  
	EPCGMetadataTypes                                  OutputType;                                                 // 0x0178   (0x0001)  
	EPCGMetadataMakeVector3                            MakeVector3Op;                                              // 0x0179   (0x0001)  
	EPCGMetadataMakeVector4                            MakeVector4Op;                                              // 0x017A   (0x0001)  
	unsigned char                                      UnknownData00_6[0x5];                                       // 0x017B   (0x0005)  MISSED
};

/// Class /Script/PCG.PCGMetadataMathsSettings
/// Size: 0x0080 (0x0000D8 - 0x000158)
class UPCGMetadataMathsSettings : public UPCGMetadataSettingsBase
{ 
public:
	EPCGMetadataMathsOperation                         Operation;                                                  // 0x00D8   (0x0002)  
	bool                                               bForceRoundingOpToInt;                                      // 0x00DA   (0x0001)  
	bool                                               bForceOpToDouble;                                           // 0x00DB   (0x0001)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00DC   (0x0004)  MISSED
	FPCGAttributePropertyInputSelector                 InputSource1;                                               // 0x00E0   (0x0028)  
	FPCGAttributePropertyInputSelector                 InputSource2;                                               // 0x0108   (0x0028)  
	FPCGAttributePropertyInputSelector                 InputSource3;                                               // 0x0130   (0x0028)  
};

/// Class /Script/PCG.PCGMetadataPartitionSettings
/// Size: 0x0020 (0x0000A8 - 0x0000C8)
class UPCGMetadataPartitionSettings : public UPCGSettings
{ 
public:
	TArray<FPCGAttributePropertyInputSelector>         PartitionAttributeSelectors;                                // 0x00A8   (0x0010)  
	SDK_UNDEFINED(16,14564) /* FString */              __um(PartitionAttributeNames);                              // 0x00B8   (0x0010)  
};

/// Class /Script/PCG.PCGMetadataRenameSettings
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UPCGMetadataRenameSettings : public UPCGSettings
{ 
public:
	FName                                              AttributeToRename;                                          // 0x00A8   (0x0004)  
	FName                                              NewAttributeName;                                           // 0x00AC   (0x0004)  
};

/// Class /Script/PCG.PCGMetadataRotatorSettings
/// Size: 0x0080 (0x0000D8 - 0x000158)
class UPCGMetadataRotatorSettings : public UPCGMetadataSettingsBase
{ 
public:
	EPCGMetadataRotatorOperation                       Operation;                                                  // 0x00D8   (0x0002)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x00DA   (0x0006)  MISSED
	FPCGAttributePropertyInputSelector                 InputSource1;                                               // 0x00E0   (0x0028)  
	FPCGAttributePropertyInputSelector                 InputSource2;                                               // 0x0108   (0x0028)  
	FPCGAttributePropertyInputSelector                 InputSource3;                                               // 0x0130   (0x0028)  
};

/// Class /Script/PCG.PCGMetadataStringOpSettings
/// Size: 0x0058 (0x0000D8 - 0x000130)
class UPCGMetadataStringOpSettings : public UPCGMetadataSettingsBase
{ 
public:
	EPCGMetadataStringOperation                        Operation;                                                  // 0x00D8   (0x0002)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x00DA   (0x0006)  MISSED
	FPCGAttributePropertyInputSelector                 InputSource1;                                               // 0x00E0   (0x0028)  
	FPCGAttributePropertyInputSelector                 InputSource2;                                               // 0x0108   (0x0028)  
};

/// Class /Script/PCG.PCGMetadataTransformSettings
/// Size: 0x0080 (0x0000D8 - 0x000158)
class UPCGMetadataTransformSettings : public UPCGMetadataSettingsBase
{ 
public:
	EPCGMetadataTransformOperation                     Operation;                                                  // 0x00D8   (0x0002)  
	EPCGTransformLerpMode                              TransformLerpMode;                                          // 0x00DA   (0x0002)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00DC   (0x0004)  MISSED
	FPCGAttributePropertyInputSelector                 InputSource1;                                               // 0x00E0   (0x0028)  
	FPCGAttributePropertyInputSelector                 InputSource2;                                               // 0x0108   (0x0028)  
	FPCGAttributePropertyInputSelector                 InputSource3;                                               // 0x0130   (0x0028)  
};

/// Class /Script/PCG.PCGMetadataTrigSettings
/// Size: 0x0058 (0x0000D8 - 0x000130)
class UPCGMetadataTrigSettings : public UPCGMetadataSettingsBase
{ 
public:
	EPCGMetadataTrigOperation                          Operation;                                                  // 0x00D8   (0x0002)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x00DA   (0x0006)  MISSED
	FPCGAttributePropertyInputSelector                 InputSource1;                                               // 0x00E0   (0x0028)  
	FPCGAttributePropertyInputSelector                 InputSource2;                                               // 0x0108   (0x0028)  
};

/// Class /Script/PCG.PCGMetadataVectorSettings
/// Size: 0x0080 (0x0000D8 - 0x000158)
class UPCGMetadataVectorSettings : public UPCGMetadataSettingsBase
{ 
public:
	EPCGMetadataVectorOperation                        Operation;                                                  // 0x00D8   (0x0002)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x00DA   (0x0006)  MISSED
	FPCGAttributePropertyInputSelector                 InputSource1;                                               // 0x00E0   (0x0028)  
	FPCGAttributePropertyInputSelector                 InputSource2;                                               // 0x0108   (0x0028)  
	FPCGAttributePropertyInputSelector                 InputSource3;                                               // 0x0130   (0x0028)  
};

/// Class /Script/PCG.PCGAttributeGetFromIndexSettings
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UPCGAttributeGetFromIndexSettings : public UPCGSettings
{ 
public:
	int32_t                                            Index;                                                      // 0x00A8   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00AC   (0x0004)  MISSED
};

/// Class /Script/PCG.PCGAttributeGetFromPointIndexSettings
/// Size: 0x0030 (0x0000A8 - 0x0000D8)
class UPCGAttributeGetFromPointIndexSettings : public UPCGSettings
{ 
public:
	FPCGAttributePropertyInputSelector                 InputSource;                                                // 0x00A8   (0x0028)  
	int32_t                                            Index;                                                      // 0x00D0   (0x0004)  
	FName                                              OutputAttributeName;                                        // 0x00D4   (0x0004)  
};

/// Class /Script/PCG.PCGAttributeNoiseSettings
/// Size: 0x0060 (0x0000A8 - 0x000108)
class UPCGAttributeNoiseSettings : public UPCGSettings
{ 
public:
	FPCGAttributePropertyInputSelector                 InputSource;                                                // 0x00A8   (0x0028)  
	FPCGAttributePropertyOutputSelector                OutputTarget;                                               // 0x00D0   (0x0028)  
	EPCGAttributeNoiseMode                             Mode;                                                       // 0x00F8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00F9   (0x0003)  MISSED
	float                                              NoiseMin;                                                   // 0x00FC   (0x0004)  
	float                                              NoiseMax;                                                   // 0x0100   (0x0004)  
	bool                                               bInvertSource;                                              // 0x0104   (0x0001)  
	bool                                               bClampResult;                                               // 0x0105   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x0106   (0x0002)  MISSED
};

/// Class /Script/PCG.PCGAttributeReduceSettings
/// Size: 0x0038 (0x0000A8 - 0x0000E0)
class UPCGAttributeReduceSettings : public UPCGSettings
{ 
public:
	FPCGAttributePropertyInputSelector                 InputSource;                                                // 0x00A8   (0x0028)  
	FName                                              OutputAttributeName;                                        // 0x00D0   (0x0004)  
	EPCGAttributeReduceOperation                       Operation;                                                  // 0x00D4   (0x0004)  
	bool                                               bMergeOutputAttributes;                                     // 0x00D8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x00D9   (0x0007)  MISSED
};

/// Class /Script/PCG.PCGAttributeSelectSettings
/// Size: 0x0058 (0x0000A8 - 0x000100)
class UPCGAttributeSelectSettings : public UPCGSettings
{ 
public:
	FPCGAttributePropertyInputSelector                 InputSource;                                                // 0x00A8   (0x0028)  
	FName                                              OutputAttributeName;                                        // 0x00D0   (0x0004)  
	EPCGAttributeSelectOperation                       Operation;                                                  // 0x00D4   (0x0004)  
	EPCGAttributeSelectAxis                            Axis;                                                       // 0x00D8   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00DC   (0x0004)  MISSED
	FVector4                                           CustomAxis;                                                 // 0x00E0   (0x0020)  
};

/// Class /Script/PCG.PCGAttributeTransferSettings
/// Size: 0x0050 (0x0000A8 - 0x0000F8)
class UPCGAttributeTransferSettings : public UPCGSettings
{ 
public:
	FPCGAttributePropertyInputSelector                 SourceAttributeProperty;                                    // 0x00A8   (0x0028)  
	FPCGAttributePropertyOutputSelector                TargetAttributeProperty;                                    // 0x00D0   (0x0028)  
};

/// Class /Script/PCG.PCGBoundsModifierSettings
/// Size: 0x0040 (0x0000A8 - 0x0000E8)
class UPCGBoundsModifierSettings : public UPCGSettings
{ 
public:
	EPCGBoundsModifierMode                             Mode;                                                       // 0x00A8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x00A9   (0x0007)  MISSED
	FVector                                            BoundsMin;                                                  // 0x00B0   (0x0018)  
	FVector                                            BoundsMax;                                                  // 0x00C8   (0x0018)  
	bool                                               bAffectSteepness;                                           // 0x00E0   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x00E1   (0x0003)  MISSED
	float                                              Steepness;                                                  // 0x00E4   (0x0004)  
};

/// Class /Script/PCG.PCGCollapseSettings
/// Size: 0x0000 (0x0000A8 - 0x0000A8)
class UPCGCollapseSettings : public UPCGSettings
{ 
public:
};

/// Class /Script/PCG.PCGConvertToPointDataSettings
/// Size: 0x0000 (0x0000A8 - 0x0000A8)
class UPCGConvertToPointDataSettings : public UPCGCollapseSettings
{ 
public:
};

/// Class /Script/PCG.PCGConvertToAttributeSetSettings
/// Size: 0x0000 (0x0000A8 - 0x0000A8)
class UPCGConvertToAttributeSetSettings : public UPCGSettings
{ 
public:
};

/// Class /Script/PCG.PCGCopyPointsSettings
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UPCGCopyPointsSettings : public UPCGSettings
{ 
public:
	EPCGCopyPointsInheritanceMode                      RotationInheritance;                                        // 0x00A8   (0x0001)  
	EPCGCopyPointsInheritanceMode                      ScaleInheritance;                                           // 0x00A9   (0x0001)  
	EPCGCopyPointsInheritanceMode                      ColorInheritance;                                           // 0x00AA   (0x0001)  
	EPCGCopyPointsInheritanceMode                      SeedInheritance;                                            // 0x00AB   (0x0001)  
	EPCGCopyPointsMetadataInheritanceMode              AttributeInheritance;                                       // 0x00AC   (0x0001)  
	EPCGCopyPointsTagInheritanceMode                   TagInheritance;                                             // 0x00AD   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x00AE   (0x0002)  MISSED
};

/// Class /Script/PCG.PCGAddAttributeSettings
/// Size: 0x01C8 (0x0000A8 - 0x000270)
class UPCGAddAttributeSettings : public UPCGSettings
{ 
public:
	FPCGAttributePropertyInputSelector                 InputSource;                                                // 0x00A8   (0x0028)  
	FPCGAttributePropertyOutputSelector                OutputTarget;                                               // 0x00D0   (0x0028)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x00F8   (0x0008)  MISSED
	FPCGMetadataTypesConstantStruct                    AttributeTypes;                                             // 0x0100   (0x0160)  
	bool                                               bCopyAllAttributes;                                         // 0x0260   (0x0001)  
	unsigned char                                      UnknownData01_6[0xF];                                       // 0x0261   (0x000F)  MISSED
};

/// Struct /Script/PCG.PCGAttributePropertyOutputNoSourceSelector
/// Size: 0x0000 (0x000028 - 0x000028)
struct FPCGAttributePropertyOutputNoSourceSelector : FPCGAttributePropertySelector
{ 
};

/// Class /Script/PCG.PCGCreateAttributeSetSettings
/// Size: 0x0198 (0x0000A8 - 0x000240)
class UPCGCreateAttributeSetSettings : public UPCGSettings
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x00A8   (0x0008)  MISSED
	FPCGMetadataTypesConstantStruct                    AttributeTypes;                                             // 0x00B0   (0x0160)  
	FPCGAttributePropertyOutputNoSourceSelector        OutputTarget;                                               // 0x0210   (0x0028)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0238   (0x0008)  MISSED
};

/// Class /Script/PCG.PCGCreateSplineSettings
/// Size: 0x0048 (0x0000A8 - 0x0000F0)
class UPCGCreateSplineSettings : public UPCGSettings
{ 
public:
	EPCGCreateSplineMode                               Mode;                                                       // 0x00A8   (0x0001)  
	bool                                               bClosedLoop;                                                // 0x00A9   (0x0001)  
	bool                                               bLinear;                                                    // 0x00AA   (0x0001)  
	bool                                               bApplyCustomTangents;                                       // 0x00AB   (0x0001)  
	FName                                              ArriveTangentAttribute;                                     // 0x00AC   (0x0004)  
	FName                                              LeaveTangentAttribute;                                      // 0x00B0   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00B4   (0x0004)  MISSED
	SDK_UNDEFINED(32,14565) /* TWeakObjectPtr<AActor*> */ __um(TargetActor);                                       // 0x00B8   (0x0020)  
	EPCGAttachOptions                                  AttachOptions;                                              // 0x00D8   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x00DC   (0x0004)  MISSED
	TArray<FName>                                      PostProcessFunctionNames;                                   // 0x00E0   (0x0010)  
};

/// Class /Script/PCG.PCGCreateSurfaceFromSplineSettings
/// Size: 0x0000 (0x0000A8 - 0x0000A8)
class UPCGCreateSurfaceFromSplineSettings : public UPCGSettings
{ 
public:
};

/// Class /Script/PCG.PCGCreateTargetActor
/// Size: 0x00C8 (0x0000A8 - 0x000170)
class UPCGCreateTargetActor : public UPCGSettings
{ 
public:
	class UClass*                                      TemplateActorClass;                                         // 0x00A8   (0x0008)  
	class AActor*                                      TemplateActor;                                              // 0x00B0   (0x0008)  
	bool                                               bAllowTemplateActorEditing;                                 // 0x00B8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00B9   (0x0003)  MISSED
	EPCGAttachOptions                                  AttachOptions;                                              // 0x00BC   (0x0004)  
	SDK_UNDEFINED(32,14566) /* TWeakObjectPtr<AActor*> */ __um(RootActor);                                         // 0x00C0   (0x0020)  
	SDK_UNDEFINED(16,14567) /* FString */              __um(ActorLabel);                                           // 0x00E0   (0x0010)  
	FTransform                                         ActorPivot;                                                 // 0x00F0   (0x0060)  
	TArray<FPCGObjectPropertyOverrideDescription>      PropertyOverrideDescriptions;                               // 0x0150   (0x0010)  
	TArray<FName>                                      PostProcessFunctionNames;                                   // 0x0160   (0x0010)  
};

/// Class /Script/PCG.PCGDataFromActorSettings
/// Size: 0x0048 (0x0000A8 - 0x0000F0)
class UPCGDataFromActorSettings : public UPCGSettings
{ 
public:
	FPCGActorSelectorSettings                          ActorSelector;                                              // 0x00A8   (0x0020)  
	EPCGGetDataFromActorMode                           Mode;                                                       // 0x00C8   (0x0001)  
	bool                                               bAlsoOutputSinglePointData;                                 // 0x00C9   (0x0001)  
	bool                                               bComponentsMustOverlapSelf;                                 // 0x00CA   (0x0001)  
	bool                                               bGetDataOnAllGrids;                                         // 0x00CB   (0x0001)  
	int32_t                                            AllowedGrids;                                               // 0x00CC   (0x0004)  
	bool                                               bMergeSinglePointData;                                      // 0x00D0   (0x0001)  
	bool                                               bDisplayModeSettings;                                       // 0x00D1   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x00D2   (0x0006)  MISSED
	TArray<FName>                                      ExpectedPins;                                               // 0x00D8   (0x0010)  
	FName                                              PropertyName;                                               // 0x00E8   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x00EC   (0x0004)  MISSED
};

/// Class /Script/PCG.PCGDataNumSettings
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UPCGDataNumSettings : public UPCGSettings
{ 
public:
	FName                                              OutputAttributeName;                                        // 0x00A8   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00AC   (0x0004)  MISSED
};

/// Class /Script/PCG.PCGDataTableRowToParamDataSettings
/// Size: 0x0030 (0x0000A8 - 0x0000D8)
class UPCGDataTableRowToParamDataSettings : public UPCGSettings
{ 
public:
	FName                                              RowName;                                                    // 0x00A8   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00AC   (0x0004)  MISSED
	SDK_UNDEFINED(32,14568) /* TWeakObjectPtr<UDataTable*> */ __um(DataTable);                                     // 0x00B0   (0x0020)  
	bool                                               bSynchronousLoad;                                           // 0x00D0   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x00D1   (0x0007)  MISSED
};

/// Class /Script/PCG.PCGDebugSettings
/// Size: 0x0020 (0x0000A8 - 0x0000C8)
class UPCGDebugSettings : public UPCGSettings
{ 
public:
	SDK_UNDEFINED(32,14569) /* TWeakObjectPtr<AActor*> */ __um(TargetActor);                                       // 0x00A8   (0x0020)  
};

/// Class /Script/PCG.PCGDensityFilterSettings
/// Size: 0x0010 (0x0000A8 - 0x0000B8)
class UPCGDensityFilterSettings : public UPCGSettings
{ 
public:
	float                                              LowerBound;                                                 // 0x00A8   (0x0004)  
	float                                              UpperBound;                                                 // 0x00AC   (0x0004)  
	bool                                               bInvertFilter;                                              // 0x00B0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x00B1   (0x0007)  MISSED
};

/// Class /Script/PCG.PCGLinearDensityRemapSettings
/// Size: 0x0010 (0x0000A8 - 0x0000B8)
class UPCGLinearDensityRemapSettings : public UPCGSettings
{ 
public:
	float                                              RemapMin;                                                   // 0x00A8   (0x0004)  
	float                                              RemapMax;                                                   // 0x00AC   (0x0004)  
	bool                                               bMultiplyDensity;                                           // 0x00B0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x00B1   (0x0007)  MISSED
};

/// Class /Script/PCG.PCGDensityRemapSettings
/// Size: 0x0018 (0x0000A8 - 0x0000C0)
class UPCGDensityRemapSettings : public UPCGSettings
{ 
public:
	float                                              InRangeMin;                                                 // 0x00A8   (0x0004)  
	float                                              InRangeMax;                                                 // 0x00AC   (0x0004)  
	float                                              OutRangeMin;                                                // 0x00B0   (0x0004)  
	float                                              OutRangeMax;                                                // 0x00B4   (0x0004)  
	bool                                               bExcludeValuesOutsideInputRange;                            // 0x00B8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x00B9   (0x0007)  MISSED
};

/// Class /Script/PCG.PCGDifferenceSettings
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UPCGDifferenceSettings : public UPCGSettings
{ 
public:
	EPCGDifferenceDensityFunction                      DensityFunction;                                            // 0x00A8   (0x0001)  
	EPCGDifferenceMode                                 Mode;                                                       // 0x00A9   (0x0001)  
	bool                                               bDiffMetadata;                                              // 0x00AA   (0x0001)  
	bool                                               bKeepZeroDensityPoints;                                     // 0x00AB   (0x0001)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00AC   (0x0004)  MISSED
};

/// Class /Script/PCG.PCGBlueprintElement
/// Size: 0x0040 (0x000028 - 0x000068)
class UPCGBlueprintElement : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	bool                                               bIsCacheable;                                               // 0x0028   (0x0001)  
	bool                                               bComputeFullDataCrc;                                        // 0x0029   (0x0001)  
	bool                                               bRequiresGameThread;                                        // 0x002A   (0x0001)  
	unsigned char                                      UnknownData01_5[0x5];                                       // 0x002B   (0x0005)  MISSED
	TArray<FPCGPinProperties>                          CustomInputPins;                                            // 0x0030   (0x0010)  
	TArray<FPCGPinProperties>                          CustomOutputPins;                                           // 0x0040   (0x0010)  
	bool                                               bHasDefaultInPin;                                           // 0x0050   (0x0001)  
	bool                                               bHasDefaultOutPin;                                          // 0x0051   (0x0001)  
	unsigned char                                      UnknownData02_6[0x16];                                      // 0x0052   (0x0016)  MISSED


	/// Functions
	// Function /Script/PCG.PCGBlueprintElement.VariableLoopBody
	// TArray<FPCGPoint> VariableLoopBody(FPCGContext& InContext, class UPCGPointData* InData, FPCGPoint& InPoint, class UPCGMetadata* OutMetadata, int64_t Iteration); // [0x18a39e4] Event|Public|HasOutParms|BlueprintEvent|Const 
	// Function /Script/PCG.PCGBlueprintElement.VariableLoop
	// void VariableLoop(FPCGContext& InContext, class UPCGPointData* InData, class UPCGPointData*& OutData, class UPCGPointData* OptionalOutData); // [0xa622314] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/PCG.PCGBlueprintElement.PointLoopBody
	// bool PointLoopBody(FPCGContext& InContext, class UPCGPointData* InData, FPCGPoint& InPoint, FPCGPoint& OutPoint, class UPCGMetadata* OutMetadata, int64_t Iteration); // [0x18a39e4] Event|Public|HasOutParms|BlueprintEvent|Const 
	// Function /Script/PCG.PCGBlueprintElement.PointLoop
	// void PointLoop(FPCGContext& InContext, class UPCGPointData* InData, class UPCGPointData*& OutData, class UPCGPointData* OptionalOutData); // [0xa621f70] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/PCG.PCGBlueprintElement.NodeTypeOverride
	// EPCGSettingsType NodeTypeOverride();                                                                                  // [0x1aaf4c4] Native|Event|Public|BlueprintEvent|Const 
	// Function /Script/PCG.PCGBlueprintElement.NodeTitleOverride
	// FName NodeTitleOverride();                                                                                            // [0xa621f40] Native|Event|Public|BlueprintEvent|Const 
	// Function /Script/PCG.PCGBlueprintElement.NodeColorOverride
	// FLinearColor NodeColorOverride();                                                                                     // [0x692611c] Native|Event|Public|HasDefaults|BlueprintEvent|Const 
	// Function /Script/PCG.PCGBlueprintElement.NestedLoopBody
	// bool NestedLoopBody(FPCGContext& InContext, class UPCGPointData* InOuterData, class UPCGPointData* InInnerData, FPCGPoint& InOuterPoint, FPCGPoint& InInnerPoint, FPCGPoint& OutPoint, class UPCGMetadata* OutMetadata, int64_t OuterIteration, int64_t InnerIteration); // [0x18a39e4] Event|Public|HasOutParms|BlueprintEvent|Const 
	// Function /Script/PCG.PCGBlueprintElement.NestedLoop
	// void NestedLoop(FPCGContext& InContext, class UPCGPointData* InOuterData, class UPCGPointData* InInnerData, class UPCGPointData*& OutData, class UPCGPointData* OptionalOutData); // [0xa621bb4] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/PCG.PCGBlueprintElement.IterationLoopBody
	// bool IterationLoopBody(FPCGContext& InContext, int64_t Iteration, class UPCGSpatialData* InA, class UPCGSpatialData* InB, FPCGPoint& OutPoint, class UPCGMetadata* OutMetadata); // [0x18a39e4] Event|Public|HasOutParms|BlueprintEvent|Const 
	// Function /Script/PCG.PCGBlueprintElement.IterationLoop
	// void IterationLoop(FPCGContext& InContext, int64_t NumIterations, class UPCGPointData*& OutData, class UPCGSpatialData* OptionalA, class UPCGSpatialData* OptionalB, class UPCGPointData* OptionalOutData); // [0xa621710] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/PCG.PCGBlueprintElement.IsCacheableOverride
	// bool IsCacheableOverride();                                                                                           // [0x3912dc4] Native|Event|Public|BlueprintEvent|Const 
	// Function /Script/PCG.PCGBlueprintElement.GetSeed
	// int32_t GetSeed(FPCGContext& InContext);                                                                              // [0xa62166c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PCG.PCGBlueprintElement.GetRandomStream
	// FRandomStream GetRandomStream(FPCGContext& InContext);                                                                // [0xa6215b4] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|Const 
	// Function /Script/PCG.PCGBlueprintElement.GetOutputPins
	// TArray<FPCGPinProperties> GetOutputPins();                                                                            // [0xa621574] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PCG.PCGBlueprintElement.GetOutputPinByLabel
	// bool GetOutputPinByLabel(FName InPinLabel, FPCGPinProperties& OutFoundPin);                                           // [0xa621418] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PCG.PCGBlueprintElement.GetInputPins
	// TArray<FPCGPinProperties> GetInputPins();                                                                             // [0xa6213d8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PCG.PCGBlueprintElement.GetInputPinByLabel
	// bool GetInputPinByLabel(FName InPinLabel, FPCGPinProperties& OutFoundPin);                                            // [0xa62127c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PCG.PCGBlueprintElement.GetContext
	// FPCGContext GetContext();                                                                                             // [0xa621224] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PCG.PCGBlueprintElement.ExecuteWithContext
	// void ExecuteWithContext(FPCGContext& InContext, FPCGDataCollection& Input, FPCGDataCollection& Output);               // [0xa621080] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/PCG.PCGBlueprintElement.Execute
	// void Execute(FPCGDataCollection& Input, FPCGDataCollection& Output);                                                  // [0x18a39e4] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/PCG.PCGBlueprintElement.CustomOutputLabels
	// TSet<FName> CustomOutputLabels();                                                                                     // [0xa620f54] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PCG.PCGBlueprintElement.CustomInputLabels
	// TSet<FName> CustomInputLabels();                                                                                      // [0xa620e28] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PCG.PCGBlueprintElement.ApplyPreconfiguredSettings
	// void ApplyPreconfiguredSettings(FPCGPreConfiguredSettingsInfo& InPreconfigureInfo);                                   // [0x18a39e4] Event|Public|HasOutParms|BlueprintEvent 
};

/// Class /Script/PCG.PCGBlueprintSettings
/// Size: 0x0010 (0x0000A8 - 0x0000B8)
class UPCGBlueprintSettings : public UPCGSettings
{ 
public:
	class UClass*                                      BlueprintElementType;                                       // 0x00A8   (0x0008)  
	class UPCGBlueprintElement*                        BlueprintElementInstance;                                   // 0x00B0   (0x0008)  


	/// Functions
	// Function /Script/PCG.PCGBlueprintSettings.SetElementType
	// void SetElementType(class UClass* InElementType, class UPCGBlueprintElement*& ElementInstance);                       // [0xa62221c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGBlueprintSettings.GetElementType
	// class UClass* GetElementType();                                                                                       // [0xa621240] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/PCG.PCGFilterByIndexSettings
/// Size: 0x0018 (0x0000A8 - 0x0000C0)
class UPCGFilterByIndexSettings : public UPCGFilterDataBaseSettings
{ 
public:
	bool                                               bInvertFilter;                                              // 0x00A8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x00A9   (0x0007)  MISSED
	SDK_UNDEFINED(16,14570) /* FString */              __um(SelectedIndices);                                      // 0x00B0   (0x0010)  
};

/// Class /Script/PCG.PCGFilterByTagSettings
/// Size: 0x0018 (0x0000A8 - 0x0000C0)
class UPCGFilterByTagSettings : public UPCGFilterDataBaseSettings
{ 
public:
	EPCGFilterByTagOperation                           Operation;                                                  // 0x00A8   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00AC   (0x0004)  MISSED
	SDK_UNDEFINED(16,14571) /* FString */              __um(SelectedTags);                                         // 0x00B0   (0x0010)  
};

/// Class /Script/PCG.PCGFilterByTypeSettings
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UPCGFilterByTypeSettings : public UPCGFilterDataBaseSettings
{ 
public:
	EPCGDataType                                       TargetType;                                                 // 0x00A8   (0x0004)  
	bool                                               bShowOutsideFilter;                                         // 0x00AC   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00AD   (0x0003)  MISSED
};

/// Class /Script/PCG.PCGGetLoopIndexSettings
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UPCGGetLoopIndexSettings : public UPCGSettings
{ 
public:
	bool                                               bWarnIfCalledOutsideOfLoop;                                 // 0x00A8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x00A9   (0x0007)  MISSED
};

/// Class /Script/PCG.PCGIndirectionSettings
/// Size: 0x0040 (0x0000A8 - 0x0000E8)
class UPCGIndirectionSettings : public UPCGSettings
{ 
public:
	EPCGProxyInterfaceMode                             ProxyInterfaceMode;                                         // 0x00A8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x00A9   (0x0007)  MISSED
	class UClass*                                      SettingsClass;                                              // 0x00B0   (0x0008)  
	class UClass*                                      BlueprintElementClass;                                      // 0x00B8   (0x0008)  
	SDK_UNDEFINED(32,14572) /* TWeakObjectPtr<UPCGSettings*> */ __um(Settings);                                    // 0x00C0   (0x0020)  
	bool                                               bTagOutputsBasedOnOutputPins;                               // 0x00E0   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x00E1   (0x0007)  MISSED
};

/// Class /Script/PCG.PCGInnerIntersectionSettings
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UPCGInnerIntersectionSettings : public UPCGSettings
{ 
public:
	EPCGIntersectionDensityFunction                    DensityFunction;                                            // 0x00A8   (0x0001)  
	bool                                               bKeepZeroDensityPoints;                                     // 0x00A9   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x00AA   (0x0006)  MISSED
};

/// Class /Script/PCG.PCGBaseSubgraphSettings
/// Size: 0x0000 (0x0000A8 - 0x0000A8)
class UPCGBaseSubgraphSettings : public UPCGSettings
{ 
public:
};

/// Class /Script/PCG.PCGSubgraphSettings
/// Size: 0x0010 (0x0000A8 - 0x0000B8)
class UPCGSubgraphSettings : public UPCGBaseSubgraphSettings
{ 
public:
	class UPCGGraphInstance*                           SubgraphInstance;                                           // 0x00A8   (0x0008)  
	class UPCGGraphInterface*                          SubgraphOverride;                                           // 0x00B0   (0x0008)  
};

/// Class /Script/PCG.PCGLoopSettings
/// Size: 0x0028 (0x0000B8 - 0x0000E0)
class UPCGLoopSettings : public UPCGSubgraphSettings
{ 
public:
	bool                                               bUseGraphDefaultPinUsage;                                   // 0x00B8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x00B9   (0x0007)  MISSED
	SDK_UNDEFINED(16,14573) /* FString */              __um(LoopPins);                                             // 0x00C0   (0x0010)  
	SDK_UNDEFINED(16,14574) /* FString */              __um(FeedbackPins);                                         // 0x00D0   (0x0010)  
};

/// Class /Script/PCG.PCGMatchAndSetAttributesSettings
/// Size: 0x0218 (0x0000A8 - 0x0002C0)
class UPCGMatchAndSetAttributesSettings : public UPCGSettings
{ 
public:
	bool                                               bMatchAttributes;                                           // 0x00A8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x00A9   (0x0007)  MISSED
	FPCGAttributePropertyInputSelector                 InputAttribute;                                             // 0x00B0   (0x0028)  
	FName                                              MatchAttribute;                                             // 0x00D8   (0x0004)  
	bool                                               bKeepUnmatched;                                             // 0x00DC   (0x0001)  
	bool                                               bFindNearest;                                               // 0x00DD   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x00DE   (0x0002)  MISSED
	EPCGMatchMaxDistanceMode                           MaxDistanceMode;                                            // 0x00E0   (0x0004)  
	unsigned char                                      UnknownData02_5[0xC];                                       // 0x00E4   (0x000C)  MISSED
	FPCGMetadataTypesConstantStruct                    MaxDistanceForNearestMatch;                                 // 0x00F0   (0x0160)  
	FPCGAttributePropertyInputSelector                 MaxDistanceInputAttribute;                                  // 0x0250   (0x0028)  
	bool                                               bUseInputWeightAttribute;                                   // 0x0278   (0x0001)  
	unsigned char                                      UnknownData03_5[0x7];                                       // 0x0279   (0x0007)  MISSED
	FPCGAttributePropertyInputSelector                 InputWeightAttribute;                                       // 0x0280   (0x0028)  
	bool                                               bUseWeightAttribute;                                        // 0x02A8   (0x0001)  
	unsigned char                                      UnknownData04_5[0x3];                                       // 0x02A9   (0x0003)  MISSED
	FName                                              WeightAttribute;                                            // 0x02AC   (0x0004)  
	bool                                               bWarnIfNoMatchData;                                         // 0x02B0   (0x0001)  
	unsigned char                                      UnknownData05_6[0xF];                                       // 0x02B1   (0x000F)  MISSED
};

/// Class /Script/PCG.PCGMergeSettings
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UPCGMergeSettings : public UPCGSettings
{ 
public:
	bool                                               bMergeMetadata;                                             // 0x00A8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x00A9   (0x0007)  MISSED
};

/// Class /Script/PCG.PCGPointExtentsModifierSettings
/// Size: 0x0020 (0x0000A8 - 0x0000C8)
class UPCGPointExtentsModifierSettings : public UPCGSettings
{ 
public:
	FVector                                            Extents;                                                    // 0x00A8   (0x0018)  
	EPCGPointExtentsModifierMode                       Mode;                                                       // 0x00C0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x00C1   (0x0007)  MISSED
};

/// Class /Script/PCG.PCGPointFromMeshSettings
/// Size: 0x0028 (0x0000A8 - 0x0000D0)
class UPCGPointFromMeshSettings : public UPCGSettings
{ 
public:
	SDK_UNDEFINED(32,14575) /* TWeakObjectPtr<UStaticMesh*> */ __um(StaticMesh);                                   // 0x00A8   (0x0020)  
	FName                                              MeshPathAttributeName;                                      // 0x00C8   (0x0004)  
	bool                                               bSynchronousLoad;                                           // 0x00CC   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00CD   (0x0003)  MISSED
};

/// Class /Script/PCG.PCGPointMatchAndSetSettings
/// Size: 0x0040 (0x0000A8 - 0x0000E8)
class UPCGPointMatchAndSetSettings : public UPCGSettings
{ 
public:
	class UClass*                                      MatchAndSetType;                                            // 0x00A8   (0x0008)  
	class UPCGMatchAndSetBase*                         MatchAndSetInstance;                                        // 0x00B0   (0x0008)  
	FPCGAttributePropertyOutputSelector                SetTarget;                                                  // 0x00B8   (0x0028)  
	EPCGMetadataTypes                                  SetTargetType;                                              // 0x00E0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00E1   (0x0003)  MISSED
	EPCGMetadataTypesConstantStructStringMode          SetTargetStringMode;                                        // 0x00E4   (0x0004)  


	/// Functions
	// Function /Script/PCG.PCGPointMatchAndSetSettings.SetMatchAndSetType
	// void SetMatchAndSetType(class UClass* InMatchAndSetType);                                                             // [0xa67934c] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/PCG.PCGProjectionSettings
/// Size: 0x0028 (0x0000A8 - 0x0000D0)
class UPCGProjectionSettings : public UPCGSettings
{ 
public:
	FPCGProjectionParams                               ProjectionParams;                                           // 0x00A8   (0x0020)  
	bool                                               bForceCollapseToPoint;                                      // 0x00C8   (0x0001)  
	bool                                               bKeepZeroDensityPoints;                                     // 0x00C9   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x00CA   (0x0006)  MISSED
};

/// Class /Script/PCG.PCGSelectPointsSettings
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UPCGSelectPointsSettings : public UPCGSettings
{ 
public:
	float                                              Ratio;                                                      // 0x00A8   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00AC   (0x0004)  MISSED
};

/// Struct /Script/PCG.PCGSelfPruningParameters
/// Size: 0x0038 (0x000000 - 0x000038)
struct FPCGSelfPruningParameters
{ 
	EPCGSelfPruningType                                PruningType;                                                // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	FPCGAttributePropertyInputSelector                 ComparisonSource;                                           // 0x0008   (0x0028)  
	float                                              RadiusSimilarityFactor;                                     // 0x0030   (0x0004)  
	bool                                               bRandomizedPruning;                                         // 0x0034   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0035   (0x0003)  MISSED
};

/// Class /Script/PCG.PCGSelfPruningSettings
/// Size: 0x0038 (0x0000A8 - 0x0000E0)
class UPCGSelfPruningSettings : public UPCGSettings
{ 
public:
	FPCGSelfPruningParameters                          Parameters;                                                 // 0x00A8   (0x0038)  
};

/// Class /Script/PCG.PCGSpatialNoiseSettings
/// Size: 0x0108 (0x0000A8 - 0x0001B0)
class UPCGSpatialNoiseSettings : public UPCGSettings
{ 
public:
	PCGSpatialNoiseMode                                Mode;                                                       // 0x00A8   (0x0004)  
	PCGSpatialNoiseMask2DMode                          EdgeMask2DMode;                                             // 0x00AC   (0x0004)  
	int32_t                                            Iterations;                                                 // 0x00B0   (0x0004)  
	bool                                               bTiling;                                                    // 0x00B4   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00B5   (0x0003)  MISSED
	float                                              Brightness;                                                 // 0x00B8   (0x0004)  
	float                                              Contrast;                                                   // 0x00BC   (0x0004)  
	FPCGAttributePropertyOutputNoSourceSelector        ValueTarget;                                                // 0x00C0   (0x0028)  
	FVector                                            RandomOffset;                                               // 0x00E8   (0x0018)  
	FTransform                                         Transform;                                                  // 0x0100   (0x0060)  
	double                                             VoronoiCellRandomness;                                      // 0x0160   (0x0008)  
	FPCGAttributePropertyOutputNoSourceSelector        VoronoiCellIDTarget;                                        // 0x0168   (0x0028)  
	bool                                               bVoronoiOrientSamplesToCellEdge;                            // 0x0190   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0191   (0x0003)  MISSED
	int32_t                                            TiledVoronoiResolution;                                     // 0x0194   (0x0004)  
	int32_t                                            TiledVoronoiEdgeBlendCellCount;                             // 0x0198   (0x0004)  
	float                                              EdgeBlendDistance;                                          // 0x019C   (0x0004)  
	float                                              EdgeBlendCurveOffset;                                       // 0x01A0   (0x0004)  
	float                                              EdgeBlendCurveIntensity;                                    // 0x01A4   (0x0004)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x01A8   (0x0008)  MISSED
};

/// Class /Script/PCG.PCGSpawnActorSettings
/// Size: 0x0080 (0x0000A8 - 0x000128)
class UPCGSpawnActorSettings : public UPCGBaseSubgraphSettings
{ 
public:
	class UClass*                                      TemplateActorClass;                                         // 0x00A8   (0x0008)  
	TArray<FName>                                      PostSpawnFunctionNames;                                     // 0x00B0   (0x0010)  
	EPCGSpawnActorOption                               Option;                                                     // 0x00C0   (0x0001)  
	bool                                               bForceDisableActorParsing;                                  // 0x00C1   (0x0001)  
	EPCGSpawnActorGenerationTrigger                    GenerationTrigger;                                          // 0x00C2   (0x0001)  
	bool                                               bInheritActorTags;                                          // 0x00C3   (0x0001)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00C4   (0x0004)  MISSED
	TArray<FName>                                      TagsToAddOnActors;                                          // 0x00C8   (0x0010)  
	bool                                               bAllowTemplateActorEditing;                                 // 0x00D8   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x00D9   (0x0007)  MISSED
	class AActor*                                      TemplateActor;                                              // 0x00E0   (0x0008)  
	TArray<FPCGObjectPropertyOverrideDescription>      SpawnedActorPropertyOverrideDescriptions;                   // 0x00E8   (0x0010)  
	SDK_UNDEFINED(32,14576) /* TWeakObjectPtr<AActor*> */ __um(RootActor);                                         // 0x00F8   (0x0020)  
	EPCGAttachOptions                                  AttachOptions;                                              // 0x0118   (0x0004)  
	bool                                               bSpawnByAttribute;                                          // 0x011C   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x011D   (0x0003)  MISSED
	FName                                              SpawnAttribute;                                             // 0x0120   (0x0004)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x0124   (0x0004)  MISSED
};

/// Class /Script/PCG.PCGNode
/// Size: 0x0060 (0x000028 - 0x000088)
class UPCGNode : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	FName                                              NodeTitle;                                                  // 0x0028   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x002C   (0x0004)  MISSED
	class UPCGSettingsInterface*                       SettingsInterface;                                          // 0x0030   (0x0008)  
	TArray<class UPCGNode*>                            OutboundNodes;                                              // 0x0038   (0x0010)  
	TArray<class UPCGEdge*>                            InboundEdges;                                               // 0x0048   (0x0010)  
	TArray<class UPCGEdge*>                            OutboundEdges;                                              // 0x0058   (0x0010)  
	TArray<class UPCGPin*>                             InputPins;                                                  // 0x0068   (0x0010)  
	TArray<class UPCGPin*>                             OutputPins;                                                 // 0x0078   (0x0010)  


	/// Functions
	// Function /Script/PCG.PCGNode.RemoveEdgeTo
	// bool RemoveEdgeTo(FName FromPinLable, class UPCGNode* To, FName ToPinLabel);                                          // [0xa75c7c8] Final|Native|Public|BlueprintCallable 
	// Function /Script/PCG.PCGNode.GetSettings
	// class UPCGSettings* GetSettings();                                                                                    // [0xa75c438] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PCG.PCGNode.GetGraph
	// class UPCGGraph* GetGraph();                                                                                          // [0xa75c414] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PCG.PCGNode.AddEdgeTo
	// class UPCGNode* AddEdgeTo(FName FromPinLabel, class UPCGNode* To, FName ToPinLabel);                                  // [0xa75bb18] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/PCG.PCGBaseSubgraphNode
/// Size: 0x0000 (0x000088 - 0x000088)
class UPCGBaseSubgraphNode : public UPCGNode
{ 
public:
};

/// Class /Script/PCG.PCGSpawnActorNode
/// Size: 0x0000 (0x000088 - 0x000088)
class UPCGSpawnActorNode : public UPCGBaseSubgraphNode
{ 
public:
};

/// Struct /Script/PCG.PCGSplineSamplerParams
/// Size: 0x0100 (0x000000 - 0x000100)
struct FPCGSplineSamplerParams
{ 
	EPCGSplineSamplingDimension                        Dimension;                                                  // 0x0000   (0x0001)  
	EPCGSplineSamplingMode                             Mode;                                                       // 0x0001   (0x0001)  
	EPCGSplineSamplingFill                             Fill;                                                       // 0x0002   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x0003   (0x0001)  MISSED
	int32_t                                            SubdivisionsPerSegment;                                     // 0x0004   (0x0004)  
	float                                              DistanceIncrement;                                          // 0x0008   (0x0004)  
	int32_t                                            NumSamples;                                                 // 0x000C   (0x0004)  
	int32_t                                            NumPlanarSubdivisions;                                      // 0x0010   (0x0004)  
	int32_t                                            NumHeightSubdivisions;                                      // 0x0014   (0x0004)  
	bool                                               bComputeDirectionDelta;                                     // 0x0018   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0019   (0x0003)  MISSED
	FName                                              NextDirectionDeltaAttribute;                                // 0x001C   (0x0004)  
	bool                                               bComputeCurvature;                                          // 0x0020   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0021   (0x0003)  MISSED
	FName                                              CurvatureAttribute;                                         // 0x0024   (0x0004)  
	bool                                               bComputeSegmentIndex;                                       // 0x0028   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x0029   (0x0003)  MISSED
	FName                                              SegmentIndexAttribute;                                      // 0x002C   (0x0004)  
	bool                                               bComputeSubsegmentIndex;                                    // 0x0030   (0x0001)  
	unsigned char                                      UnknownData04_5[0x3];                                       // 0x0031   (0x0003)  MISSED
	FName                                              SubsegmentIndexAttribute;                                   // 0x0034   (0x0004)  
	bool                                               bComputeTangents;                                           // 0x0038   (0x0001)  
	unsigned char                                      UnknownData05_5[0x3];                                       // 0x0039   (0x0003)  MISSED
	FName                                              ArriveTangentAttribute;                                     // 0x003C   (0x0004)  
	FName                                              LeaveTangentAttribute;                                      // 0x0040   (0x0004)  
	bool                                               bComputeAlpha;                                              // 0x0044   (0x0001)  
	unsigned char                                      UnknownData06_5[0x3];                                       // 0x0045   (0x0003)  MISSED
	FName                                              AlphaAttribute;                                             // 0x0048   (0x0004)  
	bool                                               bComputeDistance;                                           // 0x004C   (0x0001)  
	unsigned char                                      UnknownData07_5[0x3];                                       // 0x004D   (0x0003)  MISSED
	FName                                              DistanceAttribute;                                          // 0x0050   (0x0004)  
	bool                                               bComputeInputKey;                                           // 0x0054   (0x0001)  
	unsigned char                                      UnknownData08_5[0x3];                                       // 0x0055   (0x0003)  MISSED
	FName                                              InputKeyAttribute;                                          // 0x0058   (0x0004)  
	bool                                               bUnbounded;                                                 // 0x005C   (0x0001)  
	unsigned char                                      UnknownData09_5[0x3];                                       // 0x005D   (0x0003)  MISSED
	float                                              InteriorSampleSpacing;                                      // 0x0060   (0x0004)  
	float                                              InteriorBorderSampleSpacing;                                // 0x0064   (0x0004)  
	bool                                               bTreatSplineAsPolyline;                                     // 0x0068   (0x0001)  
	EPCGSplineSamplingInteriorOrientation              InteriorOrientation;                                        // 0x0069   (0x0001)  
	bool                                               bProjectOntoSurface;                                        // 0x006A   (0x0001)  
	unsigned char                                      UnknownData10_5[0x5];                                       // 0x006B   (0x0005)  MISSED
	FRuntimeFloatCurve                                 InteriorDensityFalloffCurve;                                // 0x0070   (0x0088)  
	float                                              PointSteepness;                                             // 0x00F8   (0x0004)  
	bool                                               bSeedFromLocalPosition;                                     // 0x00FC   (0x0001)  
	bool                                               bSeedFrom2DPosition;                                        // 0x00FD   (0x0001)  
	unsigned char                                      UnknownData11_6[0x2];                                       // 0x00FE   (0x0002)  MISSED
};

/// Class /Script/PCG.PCGSplineSamplerSettings
/// Size: 0x0100 (0x0000A8 - 0x0001A8)
class UPCGSplineSamplerSettings : public UPCGSettings
{ 
public:
	FPCGSplineSamplerParams                            SamplerParams;                                              // 0x00A8   (0x0100)  
};

/// Struct /Script/PCG.PCGStaticMeshSpawnerEntry
/// Size: 0x0030 (0x000000 - 0x000030)
struct FPCGStaticMeshSpawnerEntry
{ 
	int32_t                                            Weight;                                                     // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	SDK_UNDEFINED(32,14577) /* TWeakObjectPtr<UStaticMesh*> */ __um(Mesh);                                         // 0x0008   (0x0020)  
	bool                                               bOverrideCollisionProfile;                                  // 0x0028   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0029   (0x0003)  MISSED
	FCollisionProfileName                              CollisionProfile;                                           // 0x002C   (0x0004)  
};

/// Class /Script/PCG.PCGStaticMeshSpawnerSettings
/// Size: 0x0080 (0x0000A8 - 0x000128)
class UPCGStaticMeshSpawnerSettings : public UPCGSettings
{ 
public:
	class UClass*                                      MeshSelectorType;                                           // 0x00A8   (0x0008)  
	class UPCGMeshSelectorBase*                        MeshSelectorParameters;                                     // 0x00B0   (0x0008)  
	class UClass*                                      InstanceDataPackerType;                                     // 0x00B8   (0x0008)  
	class UPCGInstanceDataPackerBase*                  InstanceDataPackerParameters;                               // 0x00C0   (0x0008)  
	TArray<FPCGObjectPropertyOverrideDescription>      StaticMeshComponentPropertyOverrides;                       // 0x00C8   (0x0010)  
	FName                                              OutAttributeName;                                           // 0x00D8   (0x0004)  
	bool                                               bApplyMeshBoundsToPoints;                                   // 0x00DC   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00DD   (0x0003)  MISSED
	SDK_UNDEFINED(32,14578) /* TWeakObjectPtr<AActor*> */ __um(TargetActor);                                       // 0x00E0   (0x0020)  
	TArray<FName>                                      PostProcessFunctionNames;                                   // 0x0100   (0x0010)  
	TArray<FPCGStaticMeshSpawnerEntry>                 Meshes;                                                     // 0x0110   (0x0010)  
	bool                                               bSynchronousLoad;                                           // 0x0120   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0121   (0x0007)  MISSED


	/// Functions
	// Function /Script/PCG.PCGStaticMeshSpawnerSettings.SetMeshSelectorType
	// void SetMeshSelectorType(class UClass* InMeshSelectorType);                                                           // [0xa679454] Final|Native|Public|BlueprintCallable 
	// Function /Script/PCG.PCGStaticMeshSpawnerSettings.SetInstancePackerType
	// void SetInstancePackerType(class UClass* InInstancePackerType);                                                       // [0xa6792b8] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/PCG.PCGSurfaceSamplerSettings
/// Size: 0x0030 (0x0000A8 - 0x0000D8)
class UPCGSurfaceSamplerSettings : public UPCGSettings
{ 
public:
	float                                              PointsPerSquaredMeter;                                      // 0x00A8   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00AC   (0x0004)  MISSED
	FVector                                            PointExtents;                                               // 0x00B0   (0x0018)  
	float                                              Looseness;                                                  // 0x00C8   (0x0004)  
	bool                                               bUnbounded;                                                 // 0x00CC   (0x0001)  
	bool                                               bApplyDensityToPoints;                                      // 0x00CD   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x00CE   (0x0002)  MISSED
	float                                              PointSteepness;                                             // 0x00D0   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x00D4   (0x0004)  MISSED
};

/// Class /Script/PCG.PCGTextureSamplerSettings
/// Size: 0x00F8 (0x0000A8 - 0x0001A0)
class UPCGTextureSamplerSettings : public UPCGSettings
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x00A8   (0x0008)  MISSED
	FTransform                                         Transform;                                                  // 0x00B0   (0x0060)  
	bool                                               bUseAbsoluteTransform;                                      // 0x0110   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0111   (0x0007)  MISSED
	SDK_UNDEFINED(32,14579) /* TWeakObjectPtr<UTexture*> */ __um(Texture);                                         // 0x0118   (0x0020)  
	int32_t                                            TextureArrayIndex;                                          // 0x0138   (0x0004)  
	EPCGTextureDensityFunction                         DensityFunction;                                            // 0x013C   (0x0001)  
	EPCGTextureColorChannel                            ColorChannel;                                               // 0x013D   (0x0001)  
	EPCGTextureFilter                                  Filter;                                                     // 0x013E   (0x0001)  
	unsigned char                                      UnknownData02_5[0x1];                                       // 0x013F   (0x0001)  MISSED
	float                                              TexelSize;                                                  // 0x0140   (0x0004)  
	bool                                               bUseAdvancedTiling;                                         // 0x0144   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x0145   (0x0003)  MISSED
	FVector2D                                          Tiling;                                                     // 0x0148   (0x0010)  
	FVector2D                                          CenterOffset;                                               // 0x0158   (0x0010)  
	float                                              Rotation;                                                   // 0x0168   (0x0004)  
	bool                                               bUseTileBounds;                                             // 0x016C   (0x0001)  
	unsigned char                                      UnknownData04_5[0x3];                                       // 0x016D   (0x0003)  MISSED
	FVector2D                                          TileBoundsMin;                                              // 0x0170   (0x0010)  
	FVector2D                                          TileBoundsMax;                                              // 0x0180   (0x0010)  
	bool                                               bSynchronousLoad;                                           // 0x0190   (0x0001)  
	unsigned char                                      UnknownData05_6[0xF];                                       // 0x0191   (0x000F)  MISSED
};

/// Class /Script/PCG.PCGTransformPointsSettings
/// Size: 0x00B0 (0x0000A8 - 0x000158)
class UPCGTransformPointsSettings : public UPCGSettings
{ 
public:
	bool                                               bApplyToAttribute;                                          // 0x00A8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00A9   (0x0003)  MISSED
	FName                                              AttributeName;                                              // 0x00AC   (0x0004)  
	FVector                                            OffsetMin;                                                  // 0x00B0   (0x0018)  
	FVector                                            OffsetMax;                                                  // 0x00C8   (0x0018)  
	bool                                               bAbsoluteOffset;                                            // 0x00E0   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x00E1   (0x0007)  MISSED
	FRotator                                           RotationMin;                                                // 0x00E8   (0x0018)  
	FRotator                                           RotationMax;                                                // 0x0100   (0x0018)  
	bool                                               bAbsoluteRotation;                                          // 0x0118   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x0119   (0x0007)  MISSED
	FVector                                            ScaleMin;                                                   // 0x0120   (0x0018)  
	FVector                                            ScaleMax;                                                   // 0x0138   (0x0018)  
	bool                                               bAbsoluteScale;                                             // 0x0150   (0x0001)  
	bool                                               bUniformScale;                                              // 0x0151   (0x0001)  
	bool                                               bRecomputeSeed;                                             // 0x0152   (0x0001)  
	unsigned char                                      UnknownData03_6[0x5];                                       // 0x0153   (0x0005)  MISSED
};

/// Class /Script/PCG.PCGGetLandscapeSettings
/// Size: 0x0008 (0x0000F0 - 0x0000F8)
class UPCGGetLandscapeSettings : public UPCGDataFromActorSettings
{ 
public:
	FPCGLandscapeDataProps                             SamplingProperties;                                         // 0x00F0   (0x0005)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00F5   (0x0003)  MISSED
};

/// Class /Script/PCG.PCGGetSplineSettings
/// Size: 0x0000 (0x0000F0 - 0x0000F0)
class UPCGGetSplineSettings : public UPCGDataFromActorSettings
{ 
public:
};

/// Class /Script/PCG.PCGGetVolumeSettings
/// Size: 0x0000 (0x0000F0 - 0x0000F0)
class UPCGGetVolumeSettings : public UPCGDataFromActorSettings
{ 
public:
};

/// Class /Script/PCG.PCGGetPrimitiveSettings
/// Size: 0x0000 (0x0000F0 - 0x0000F0)
class UPCGGetPrimitiveSettings : public UPCGDataFromActorSettings
{ 
public:
};

/// Class /Script/PCG.PCGGetPCGComponentSettings
/// Size: 0x0000 (0x0000F0 - 0x0000F0)
class UPCGGetPCGComponentSettings : public UPCGDataFromActorSettings
{ 
public:
};

/// Class /Script/PCG.PCGUnionSettings
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UPCGUnionSettings : public UPCGSettings
{ 
public:
	EPCGUnionType                                      Type;                                                       // 0x00A8   (0x0001)  
	EPCGUnionDensityFunction                           DensityFunction;                                            // 0x00A9   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x00AA   (0x0006)  MISSED
};

/// Class /Script/PCG.PCGVolumeSamplerSettings
/// Size: 0x0020 (0x0000A8 - 0x0000C8)
class UPCGVolumeSamplerSettings : public UPCGSettings
{ 
public:
	FVector                                            VoxelSize;                                                  // 0x00A8   (0x0018)  
	bool                                               bUnbounded;                                                 // 0x00C0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00C1   (0x0003)  MISSED
	float                                              PointSteepness;                                             // 0x00C4   (0x0004)  
};

/// Class /Script/PCG.PCGWorldQuerySettings
/// Size: 0x0078 (0x0000A8 - 0x000120)
class UPCGWorldQuerySettings : public UPCGSettings
{ 
public:
	FPCGWorldVolumetricQueryParams                     QueryParams;                                                // 0x00A8   (0x0078)  
};

/// Class /Script/PCG.PCGWorldRayHitSettings
/// Size: 0x00B8 (0x0000A8 - 0x000160)
class UPCGWorldRayHitSettings : public UPCGSettings
{ 
public:
	FPCGWorldRayHitQueryParams                         QueryParams;                                                // 0x00A8   (0x00B8)  
};

/// Class /Script/PCG.PCGLandscapeCache
/// Size: 0x00B8 (0x000028 - 0x0000E0)
class UPCGLandscapeCache : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	EPCGLandscapeCacheSerializationMode                SerializationMode;                                          // 0x0028   (0x0001)  
	EPCGLandscapeCacheSerializationContents            CookedSerializedContents;                                   // 0x0029   (0x0001)  
	unsigned char                                      UnknownData01_5[0x56];                                      // 0x002A   (0x0056)  MISSED
	SDK_UNDEFINED(80,14580) /* TSet<FName> */          __um(CachedLayerNames);                                     // 0x0080   (0x0050)  
	unsigned char                                      UnknownData02_6[0x10];                                      // 0x00D0   (0x0010)  MISSED


	/// Functions
	// Function /Script/PCG.PCGLandscapeCache.PrimeCache
	// void PrimeCache();                                                                                                    // [0x36203b0] Final|Native|Public  
	// Function /Script/PCG.PCGLandscapeCache.ClearCache
	// void ClearCache();                                                                                                    // [0xa6edc08] Final|Native|Public  
};

/// Class /Script/PCG.PCGPartitionActor
/// Size: 0x0108 (0x000290 - 0x000398)
class APCGPartitionActor : public APartitionActor
{ 
public:
	FGuid                                              PCGGuid;                                                    // 0x0290   (0x0010)  
	unsigned char                                      UnknownData00_5[0x50];                                      // 0x02A0   (0x0050)  MISSED
	SDK_UNDEFINED(80,14581) /* TMap<UPCGComponent*, TWeakObjectPtr<UPCGComponent*>> */ __um(LocalToOriginal);      // 0x02F0   (0x0050)  
	SDK_UNDEFINED(80,14582) /* TMap<UPCGComponent*, TWeakObjectPtr<UPCGComponent*>> */ __um(LoadedPreviewComponents); // 0x0340   (0x0050)  
	uint32_t                                           PCGGridSize;                                                // 0x0390   (0x0004)  
	bool                                               bUse2DGrid;                                                 // 0x0394   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0395   (0x0003)  MISSED


	/// Functions
	// Function /Script/PCG.PCGPartitionActor.GetOriginalComponent
	// class UPCGComponent* GetOriginalComponent(class UPCGComponent* LocalComponent);                                       // [0xa6ee5a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PCG.PCGPartitionActor.GetLocalComponent
	// class UPCGComponent* GetLocalComponent(class UPCGComponent* OriginalComponent);                                       // [0xa6ee510] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/PCG.PCGActorHelpers
/// Size: 0x0000 (0x000028 - 0x000028)
class UPCGActorHelpers : public UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/PCG.PCGBlueprintHelpers
/// Size: 0x0000 (0x000028 - 0x000028)
class UPCGBlueprintHelpers : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/PCG.PCGBlueprintHelpers.SetSeedFromPosition
	// void SetSeedFromPosition(FPCGPoint& InPoint);                                                                         // [0xa6efc0c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGBlueprintHelpers.SetLocalCenter
	// void SetLocalCenter(FPCGPoint& InPoint, FVector& InLocalCenter);                                                      // [0xa6efa5c] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGBlueprintHelpers.SetExtents
	// void SetExtents(FPCGPoint& InPoint, FVector& InExtents);                                                              // [0xa6ef8ac] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGBlueprintHelpers.GetTransformedBounds
	// FBox GetTransformedBounds(FPCGPoint& InPoint);                                                                        // [0xa6eef54] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGBlueprintHelpers.GetTaskId
	// int64_t GetTaskId(FPCGContext& Context);                                                                              // [0xa6eeeb0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGBlueprintHelpers.GetTargetActor
	// class AActor* GetTargetActor(FPCGContext& Context, class UPCGSpatialData* SpatialData);                               // [0xa6eed10] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGBlueprintHelpers.GetSettings
	// class UPCGSettings* GetSettings(FPCGContext& Context);                                                                // [0xa6eec6c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGBlueprintHelpers.GetRandomStreamFromTwoPoints
	// FRandomStream GetRandomStreamFromTwoPoints(FPCGPoint& InPointA, FPCGPoint& InPointB, class UPCGSettings* OptionalSettings, class UPCGComponent* OptionalComponent); // [0xa6ee970] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGBlueprintHelpers.GetRandomStreamFromPoint
	// FRandomStream GetRandomStreamFromPoint(FPCGPoint& InPoint, class UPCGSettings* OptionalSettings, class UPCGComponent* OptionalComponent); // [0xa6ee6d4] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGBlueprintHelpers.GetOriginalComponent
	// class UPCGComponent* GetOriginalComponent(FPCGContext& Context);                                                      // [0xa6ee630] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGBlueprintHelpers.GetLocalCenter
	// FVector GetLocalCenter(FPCGPoint& InPoint);                                                                           // [0xa6ee40c] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGBlueprintHelpers.GetInterpolatedPCGLandscapeLayerWeights
	// TArray<FPCGLandscapeLayerWeight> GetInterpolatedPCGLandscapeLayerWeights(class UObject* WorldContextObject, FVector& Location); // [0xa6ee2c8] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGBlueprintHelpers.GetInputData
	// class UPCGData* GetInputData(FPCGContext& Context);                                                                   // [0xa6ee208] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGBlueprintHelpers.GetExtents
	// FVector GetExtents(FPCGPoint& InPoint);                                                                               // [0xa6ee104] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGBlueprintHelpers.GetComponent
	// class UPCGComponent* GetComponent(FPCGContext& Context);                                                              // [0xa6ee05c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGBlueprintHelpers.GetActorLocalBoundsPCG
	// FBox GetActorLocalBoundsPCG(class AActor* InActor, bool bIgnorePCGCreatedComponents);                                 // [0xa6edf7c] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGBlueprintHelpers.GetActorData
	// class UPCGData* GetActorData(FPCGContext& Context);                                                                   // [0xa6edebc] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGBlueprintHelpers.GetActorBoundsPCG
	// FBox GetActorBoundsPCG(class AActor* InActor, bool bIgnorePCGCreatedComponents);                                      // [0xa6edddc] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGBlueprintHelpers.CreatePCGDataFromActor
	// class UPCGData* CreatePCGDataFromActor(class AActor* InActor, bool bParseActor);                                      // [0xa6edd14] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PCG.PCGBlueprintHelpers.ComputeSeedFromPosition
	// int32_t ComputeSeedFromPosition(FVector& InPosition);                                                                 // [0xa6edc1c] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/PCG.PCGInstanceDataPackerBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UPCGInstanceDataPackerBase : public UObject
{ 
public:


	/// Functions
	// Function /Script/PCG.PCGInstanceDataPackerBase.PackInstances
	// void PackInstances(FPCGContext& Context, class UPCGSpatialData* InSpatialData, FPCGMeshInstanceList& InstanceList, FPCGPackedCustomData& OutPackedCustomData); // [0xa6ef624] Native|Event|Public|HasOutParms|BlueprintEvent|Const 
	// Function /Script/PCG.PCGInstanceDataPackerBase.PackCustomDataFromAttributes
	// void PackCustomDataFromAttributes(FPCGMeshInstanceList& InstanceList, class UPCGMetadata* MetaData, TArray<FName>& AttributeNames, FPCGPackedCustomData& OutPackedCustomData); // [0xa6ef3bc] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PCG.PCGInstanceDataPackerBase.AddTypeToPacking
	// bool AddTypeToPacking(int32_t TypeId, FPCGPackedCustomData& OutPackedCustomData);                                     // [0xa6edb20] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/PCG.PCGInstanceDataPackerByAttribute
/// Size: 0x0010 (0x000028 - 0x000038)
class UPCGInstanceDataPackerByAttribute : public UPCGInstanceDataPackerBase
{ 
public:
	TArray<FName>                                      AttributeNames;                                             // 0x0028   (0x0010)  
};

/// Class /Script/PCG.PCGInstanceDataPackerByRegex
/// Size: 0x0010 (0x000028 - 0x000038)
class UPCGInstanceDataPackerByRegex : public UPCGInstanceDataPackerBase
{ 
public:
	SDK_UNDEFINED(16,14583) /* TArray<FString> */      __um(RegexPatterns);                                        // 0x0028   (0x0010)  
};

/// Class /Script/PCG.PCGMatchAndSetBase
/// Size: 0x0008 (0x000028 - 0x000030)
class UPCGMatchAndSetBase : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	EPCGMetadataTypes                                  Type;                                                       // 0x0028   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0029   (0x0003)  MISSED
	EPCGMetadataTypesConstantStructStringMode          StringMode;                                                 // 0x002C   (0x0004)  


	/// Functions
	// Function /Script/PCG.PCGMatchAndSetBase.ValidatePreconditions
	// bool ValidatePreconditions(class UPCGPointData* InPointData);                                                         // [0xa6efd04] Native|Event|Public|BlueprintEvent|Const 
	// Function /Script/PCG.PCGMatchAndSetBase.MatchAndSet
	// void MatchAndSet(FPCGContext& Context, class UPCGPointMatchAndSetSettings* InSettings, class UPCGPointData* InPointData, class UPCGPointData* OutPointData); // [0xa6ef064] Native|Event|Public|HasOutParms|BlueprintEvent|Const 
};

/// Struct /Script/PCG.PCGMatchAndSetByAttributeEntry
/// Size: 0x02C0 (0x000000 - 0x0002C0)
struct FPCGMatchAndSetByAttributeEntry
{ 
	FPCGMetadataTypesConstantStruct                    ValueToMatch;                                               // 0x0000   (0x0160)  
	FPCGMetadataTypesConstantStruct                    Value;                                                      // 0x0160   (0x0160)  
};

/// Class /Script/PCG.PCGMatchAndSetByAttribute
/// Size: 0x0020 (0x000030 - 0x000050)
class UPCGMatchAndSetByAttribute : public UPCGMatchAndSetBase
{ 
public:
	FName                                              MatchSourceAttribute;                                       // 0x0030   (0x0004)  
	EPCGMetadataTypes                                  MatchSourceType;                                            // 0x0034   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0035   (0x0003)  MISSED
	EPCGMetadataTypesConstantStructStringMode          MatchSourceStringMode;                                      // 0x0038   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x003C   (0x0004)  MISSED
	TArray<FPCGMatchAndSetByAttributeEntry>            Entries;                                                    // 0x0040   (0x0010)  
};

/// Struct /Script/PCG.PCGMatchAndSetWeightedEntry
/// Size: 0x0170 (0x000000 - 0x000170)
struct FPCGMatchAndSetWeightedEntry
{ 
	FPCGMetadataTypesConstantStruct                    Value;                                                      // 0x0000   (0x0160)  
	int32_t                                            Weight;                                                     // 0x0160   (0x0004)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x0164   (0x000C)  MISSED
};

/// Class /Script/PCG.PCGMatchAndSetWeighted
/// Size: 0x0018 (0x000030 - 0x000048)
class UPCGMatchAndSetWeighted : public UPCGMatchAndSetBase
{ 
public:
	TArray<FPCGMatchAndSetWeightedEntry>               Entries;                                                    // 0x0030   (0x0010)  
	bool                                               bShouldMutateSeed;                                          // 0x0040   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0041   (0x0007)  MISSED
};

/// Struct /Script/PCG.PCGMatchAndSetWeightedByCategoryEntryList
/// Size: 0x0180 (0x000000 - 0x000180)
struct FPCGMatchAndSetWeightedByCategoryEntryList
{ 
	FPCGMetadataTypesConstantStruct                    CategoryValue;                                              // 0x0000   (0x0160)  
	bool                                               bIsDefault;                                                 // 0x0160   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0161   (0x0007)  MISSED
	TArray<FPCGMatchAndSetWeightedEntry>               WeightedEntries;                                            // 0x0168   (0x0010)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0178   (0x0008)  MISSED
};

/// Class /Script/PCG.PCGMatchAndSetWeightedByCategory
/// Size: 0x0028 (0x000030 - 0x000058)
class UPCGMatchAndSetWeightedByCategory : public UPCGMatchAndSetBase
{ 
public:
	FName                                              CategoryAttribute;                                          // 0x0030   (0x0004)  
	EPCGMetadataTypes                                  CategoryType;                                               // 0x0034   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0035   (0x0003)  MISSED
	EPCGMetadataTypesConstantStructStringMode          CategoryStringMode;                                         // 0x0038   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x003C   (0x0004)  MISSED
	TArray<FPCGMatchAndSetWeightedByCategoryEntryList> Categories;                                                 // 0x0040   (0x0010)  
	bool                                               bShouldMutateSeed;                                          // 0x0050   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x0051   (0x0007)  MISSED
};

/// Class /Script/PCG.PCGMeshSelectorBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UPCGMeshSelectorBase : public UObject
{ 
public:
};

/// Class /Script/PCG.PCGMeshSelectorByAttribute
/// Size: 0x0260 (0x000028 - 0x000288)
class UPCGMeshSelectorByAttribute : public UPCGMeshSelectorBase
{ 
public:
	FName                                              AttributeName;                                              // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x002C   (0x0004)  MISSED
	FSoftISMComponentDescriptor                        TemplateDescriptor;                                         // 0x0030   (0x0240)  
	bool                                               bUseAttributeMaterialOverrides;                             // 0x0270   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0271   (0x0007)  MISSED
	TArray<FName>                                      MaterialOverrideAttributes;                                 // 0x0278   (0x0010)  
};

/// Struct /Script/PCG.PCGMeshSelectorWeightedEntry
/// Size: 0x0248 (0x000000 - 0x000248)
struct FPCGMeshSelectorWeightedEntry
{ 
	FSoftISMComponentDescriptor                        Descriptor;                                                 // 0x0000   (0x0240)  
	int32_t                                            Weight;                                                     // 0x0240   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0244   (0x0004)  MISSED
};

/// Class /Script/PCG.PCGMeshSelectorWeighted
/// Size: 0x0028 (0x000028 - 0x000050)
class UPCGMeshSelectorWeighted : public UPCGMeshSelectorBase
{ 
public:
	TArray<FPCGMeshSelectorWeightedEntry>              MeshEntries;                                                // 0x0028   (0x0010)  
	bool                                               bUseAttributeMaterialOverrides;                             // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0039   (0x0007)  MISSED
	TArray<FName>                                      MaterialOverrideAttributes;                                 // 0x0040   (0x0010)  
};

/// Struct /Script/PCG.PCGWeightedByCategoryEntryList
/// Size: 0x0028 (0x000000 - 0x000028)
struct FPCGWeightedByCategoryEntryList
{ 
	SDK_UNDEFINED(16,14584) /* FString */              __um(CategoryEntry);                                        // 0x0000   (0x0010)  
	bool                                               IsDefault;                                                  // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0011   (0x0007)  MISSED
	TArray<FPCGMeshSelectorWeightedEntry>              WeightedMeshEntries;                                        // 0x0018   (0x0010)  
};

/// Class /Script/PCG.PCGMeshSelectorWeightedByCategory
/// Size: 0x0030 (0x000028 - 0x000058)
class UPCGMeshSelectorWeightedByCategory : public UPCGMeshSelectorBase
{ 
public:
	FName                                              CategoryAttribute;                                          // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x002C   (0x0004)  MISSED
	TArray<FPCGWeightedByCategoryEntryList>            Entries;                                                    // 0x0030   (0x0010)  
	bool                                               bUseAttributeMaterialOverrides;                             // 0x0040   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0041   (0x0007)  MISSED
	TArray<FName>                                      MaterialOverrideAttributes;                                 // 0x0048   (0x0010)  
};

/// Class /Script/PCG.PCGMetadata
/// Size: 0x00E0 (0x000028 - 0x000108)
class UPCGMetadata : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	class UPCGMetadata*                                Parent;                                                     // 0x0028   (0x0008)  
	SDK_UNDEFINED(80,14585) /* TSet<TWeakObjectPtr<UPCGMetadata*>> */ __um(OtherParents);                          // 0x0030   (0x0050)  
	unsigned char                                      UnknownData01_6[0x88];                                      // 0x0080   (0x0088)  MISSED


	/// Functions
	// Function /Script/PCG.PCGMetadata.SetPointAttributes
	// void SetPointAttributes(FPCGPoint& Point, class UPCGMetadata* MetaData, FPCGPoint& OutPoint);                         // [0xa7420e4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGMetadata.SetAttributesByKey
	// void SetAttributesByKey(int64_t Key, class UPCGMetadata* InMetaData, int64_t TargetKey, int64_t& OutKey);             // [0xa73f928] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGMetadata.ResetWeightedAttributesByKey
	// void ResetWeightedAttributesByKey(int64_t TargetKey, int64_t& OutKey);                                                // [0xa73f444] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGMetadata.ResetPointWeightedAttributes
	// void ResetPointWeightedAttributes(FPCGPoint& OutPoint);                                                               // [0xa73f380] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGMetadata.RenameAttribute
	// bool RenameAttribute(FName AttributeToRename, FName NewAttributeName);                                                // [0xa73f2c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/PCG.PCGMetadata.MergePointAttributes
	// void MergePointAttributes(FPCGPoint& PointA, class UPCGMetadata* MetadataA, FPCGPoint& PointB, class UPCGMetadata* MetadataB, FPCGPoint& TargetPoint, EPCGMetadataOp Op); // [0xa73eb04] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGMetadata.MergeAttributesByKey
	// void MergeAttributesByKey(int64_t KeyA, class UPCGMetadata* MetadataA, int64_t KeyB, class UPCGMetadata* MetadataB, int64_t TargetKey, EPCGMetadataOp Op, int64_t& OutKey); // [0xa73e8ec] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGMetadata.K2_InitializeAsCopyWithAttributeFilter
	// void K2_InitializeAsCopyWithAttributeFilter(class UPCGMetadata* InMetadataToCopy, TSet<FName>& InFilteredAttributes, TArray<int64_t>& InOptionalEntriesToCopy, EPCGMetadataFilterMode InFilterMode); // [0xa73e620] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGMetadata.K2_InitializeAsCopy
	// void K2_InitializeAsCopy(class UPCGMetadata* InMetadataToCopy, TArray<int64_t>& InOptionalEntriesToCopy);             // [0xa73e524] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGMetadata.InitializeWithAttributeFilter
	// void InitializeWithAttributeFilter(class UPCGMetadata* InParent, TSet<FName>& InFilteredAttributes, EPCGMetadataFilterMode InFilterMode); // [0xa73e2b8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGMetadata.Initialize
	// void Initialize(class UPCGMetadata* InParent);                                                                        // [0xa73df54] Final|Native|Public|BlueprintCallable 
	// Function /Script/PCG.PCGMetadata.HasCommonAttributes
	// bool HasCommonAttributes(class UPCGMetadata* InMetaData);                                                             // [0xa73dde8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PCG.PCGMetadata.HasAttribute
	// bool HasAttribute(FName AttributeName);                                                                               // [0xa73d9cc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PCG.PCGMetadata.GetItemCountForChild
	// int64_t GetItemCountForChild();                                                                                       // [0xa73a5f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PCG.PCGMetadata.GetAttributes
	// void GetAttributes(TArray<FName>& AttributeNames, TArray<EPCGMetadataTypes>& AttributeTypes);                         // [0xa738dc0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PCG.PCGMetadata.GetAttributeCount
	// int32_t GetAttributeCount();                                                                                          // [0xa738d9c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PCG.PCGMetadata.Flatten
	// void Flatten();                                                                                                       // [0xa738bf8] Final|Native|Public|BlueprintCallable 
	// Function /Script/PCG.PCGMetadata.DeleteAttribute
	// void DeleteAttribute(FName AttributeName);                                                                            // [0xa738b78] Final|Native|Public|BlueprintCallable 
	// Function /Script/PCG.PCGMetadata.CreateVectorAttribute
	// class UPCGMetadata* CreateVectorAttribute(FName AttributeName, FVector DefaultValue, bool bAllowsInterpolation, bool bOverrideParent); // [0xa73882c] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGMetadata.CreateVector4Attribute
	// class UPCGMetadata* CreateVector4Attribute(FName AttributeName, FVector4 DefaultValue, bool bAllowsInterpolation, bool bOverrideParent); // [0xa7384d0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGMetadata.CreateVector2Attribute
	// class UPCGMetadata* CreateVector2Attribute(FName AttributeName, FVector2D DefaultValue, bool bAllowsInterpolation, bool bOverrideParent); // [0xa738190] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGMetadata.CreateTransformAttribute
	// class UPCGMetadata* CreateTransformAttribute(FName AttributeName, FTransform DefaultValue, bool bAllowsInterpolation, bool bOverrideParent); // [0xa737da8] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGMetadata.CreateStringAttribute
	// class UPCGMetadata* CreateStringAttribute(FName AttributeName, FString DefaultValue, bool bAllowsInterpolation, bool bOverrideParent); // [0xa737b74] Final|Native|Public|BlueprintCallable 
	// Function /Script/PCG.PCGMetadata.CreateSoftObjectPathAttribute
	// class UPCGMetadata* CreateSoftObjectPathAttribute(FName AttributeName, FSoftObjectPath& DefaultValue, bool bAllowsInterpolation, bool bOverrideParent); // [0xa7378c4] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGMetadata.CreateSoftClassPathAttribute
	// class UPCGMetadata* CreateSoftClassPathAttribute(FName AttributeName, FSoftClassPath& DefaultValue, bool bAllowsInterpolation, bool bOverrideParent); // [0xa73752c] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGMetadata.CreateRotatorAttribute
	// class UPCGMetadata* CreateRotatorAttribute(FName AttributeName, FRotator DefaultValue, bool bAllowsInterpolation, bool bOverrideParent); // [0xa7371e0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGMetadata.CreateQuatAttribute
	// class UPCGMetadata* CreateQuatAttribute(FName AttributeName, FQuat DefaultValue, bool bAllowsInterpolation, bool bOverrideParent); // [0xa736e98] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGMetadata.CreateNameAttribute
	// class UPCGMetadata* CreateNameAttribute(FName AttributeName, FName DefaultValue, bool bAllowsInterpolation, bool bOverrideParent); // [0xa736d4c] Final|Native|Public|BlueprintCallable 
	// Function /Script/PCG.PCGMetadata.CreateInteger64Attribute
	// class UPCGMetadata* CreateInteger64Attribute(FName AttributeName, int64_t DefaultValue, bool bAllowsInterpolation, bool bOverrideParent); // [0xa736bfc] Final|Native|Public|BlueprintCallable 
	// Function /Script/PCG.PCGMetadata.CreateInteger32Attribute
	// class UPCGMetadata* CreateInteger32Attribute(FName AttributeName, int32_t DefaultValue, bool bAllowsInterpolation, bool bOverrideParent); // [0xa736aac] Final|Native|Public|BlueprintCallable 
	// Function /Script/PCG.PCGMetadata.CreateFloatAttribute
	// class UPCGMetadata* CreateFloatAttribute(FName AttributeName, float DefaultValue, bool bAllowsInterpolation, bool bOverrideParent); // [0xa73695c] Final|Native|Public|BlueprintCallable 
	// Function /Script/PCG.PCGMetadata.CreateDoubleAttribute
	// class UPCGMetadata* CreateDoubleAttribute(FName AttributeName, double DefaultValue, bool bAllowsInterpolation, bool bOverrideParent); // [0xa736804] Final|Native|Public|BlueprintCallable 
	// Function /Script/PCG.PCGMetadata.CreateBoolAttribute
	// class UPCGMetadata* CreateBoolAttribute(FName AttributeName, bool DefaultValue, bool bAllowsInterpolation, bool bOverrideParent); // [0xa7366ac] Final|Native|Public|BlueprintCallable 
	// Function /Script/PCG.PCGMetadata.CopyExistingAttribute
	// bool CopyExistingAttribute(FName AttributeToCopy, FName NewAttributeName, bool bKeepParent);                          // [0xa7361b8] Final|Native|Public|BlueprintCallable 
	// Function /Script/PCG.PCGMetadata.CopyAttributes
	// void CopyAttributes(class UPCGMetadata* InOther);                                                                     // [0xa736014] Final|Native|Public|BlueprintCallable 
	// Function /Script/PCG.PCGMetadata.CopyAttribute
	// void CopyAttribute(class UPCGMetadata* InOther, FName AttributeToCopy, FName NewAttributeName);                       // [0xa735e8c] Final|Native|Public|BlueprintCallable 
	// Function /Script/PCG.PCGMetadata.ClearAttribute
	// void ClearAttribute(FName AttributeToClear);                                                                          // [0xa735d7c] Final|Native|Public|BlueprintCallable 
	// Function /Script/PCG.PCGMetadata.AddEntry
	// int64_t AddEntry(int64_t ParentEntryKey);                                                                             // [0xa735350] Final|Native|Public|BlueprintCallable 
	// Function /Script/PCG.PCGMetadata.AddAttributesFiltered
	// void AddAttributesFiltered(class UPCGMetadata* InOther, TSet<FName>& InFilteredAttributes, EPCGMetadataFilterMode InFilterMode); // [0xa734d04] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGMetadata.AddAttributes
	// void AddAttributes(class UPCGMetadata* InOther);                                                                      // [0xa734c84] Final|Native|Public|BlueprintCallable 
	// Function /Script/PCG.PCGMetadata.AddAttribute
	// void AddAttribute(class UPCGMetadata* InOther, FName AttributeName);                                                  // [0xa734ad8] Final|Native|Public|BlueprintCallable 
	// Function /Script/PCG.PCGMetadata.AccumulateWeightedAttributesByKey
	// void AccumulateWeightedAttributesByKey(int64_t Key, class UPCGMetadata* MetaData, float Weight, bool bSetNonInterpolableAttributes, int64_t TargetKey, int64_t& OutKey); // [0xa73474c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGMetadata.AccumulatePointWeightedAttributes
	// void AccumulatePointWeightedAttributes(FPCGPoint& InPoint, class UPCGMetadata* InMetaData, float Weight, bool bSetNonInterpolableAttributes, FPCGPoint& OutPoint); // [0xa734370] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/PCG.PCGMetadataAccessorHelpers
/// Size: 0x0000 (0x000028 - 0x000028)
class UPCGMetadataAccessorHelpers : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/PCG.PCGMetadataAccessorHelpers.SetVectorAttributeByMetadataKey
	// void SetVectorAttributeByMetadataKey(int64_t& Key, class UPCGMetadata* MetaData, FName AttributeName, FVector& Value); // [0xa7456e0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.SetVectorAttribute
	// void SetVectorAttribute(FPCGPoint& Point, class UPCGMetadata* MetaData, FName AttributeName, FVector& Value);         // [0xa745390] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.SetVector4AttributeByMetadataKey
	// void SetVector4AttributeByMetadataKey(int64_t& Key, class UPCGMetadata* MetaData, FName AttributeName, FVector4& Value); // [0xa745114] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.SetVector4Attribute
	// void SetVector4Attribute(FPCGPoint& Point, class UPCGMetadata* MetaData, FName AttributeName, FVector4& Value);       // [0xa744e58] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.SetVector2AttributeByMetadataKey
	// void SetVector2AttributeByMetadataKey(int64_t& Key, class UPCGMetadata* MetaData, FName AttributeName, FVector2D& Value); // [0xa744bf0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.SetVector2Attribute
	// void SetVector2Attribute(FPCGPoint& Point, class UPCGMetadata* MetaData, FName AttributeName, FVector2D& Value);      // [0xa744948] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.SetTransformAttributeByMetadataKey
	// void SetTransformAttributeByMetadataKey(int64_t& Key, class UPCGMetadata* MetaData, FName AttributeName, FTransform& Value); // [0xa7445e8] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.SetTransformAttribute
	// void SetTransformAttribute(FPCGPoint& Point, class UPCGMetadata* MetaData, FName AttributeName, FTransform& Value);   // [0xa744268] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.SetStringAttributeByMetadataKey
	// void SetStringAttributeByMetadataKey(int64_t& Key, class UPCGMetadata* MetaData, FName AttributeName, FString Value); // [0xa743f34] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.SetStringAttribute
	// void SetStringAttribute(FPCGPoint& Point, class UPCGMetadata* MetaData, FName AttributeName, FString Value);          // [0xa743bac] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.SetSoftObjectPathAttributeByMetadataKey
	// void SetSoftObjectPathAttributeByMetadataKey(int64_t& Key, class UPCGMetadata* MetaData, FName AttributeName, FSoftObjectPath& Value); // [0xa743858] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.SetSoftObjectPathAttribute
	// void SetSoftObjectPathAttribute(FPCGPoint& Point, class UPCGMetadata* MetaData, FName AttributeName, FSoftObjectPath& Value); // [0xa7434c0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.SetSoftClassPathAttributeByMetadataKey
	// void SetSoftClassPathAttributeByMetadataKey(int64_t& Key, class UPCGMetadata* MetaData, FName AttributeName, FSoftClassPath& Value); // [0xa74316c] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.SetSoftClassPathAttribute
	// void SetSoftClassPathAttribute(FPCGPoint& Point, class UPCGMetadata* MetaData, FName AttributeName, FSoftClassPath& Value); // [0xa742dd4] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.SetRotatorAttributeByMetadataKey
	// void SetRotatorAttributeByMetadataKey(int64_t& Key, class UPCGMetadata* MetaData, FName AttributeName, FRotator& Value); // [0xa742b10] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.SetRotatorAttribute
	// void SetRotatorAttribute(FPCGPoint& Point, class UPCGMetadata* MetaData, FName AttributeName, FRotator& Value);       // [0xa7427fc] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.SetQuatAttributeByMetadataKey
	// void SetQuatAttributeByMetadataKey(int64_t& Key, class UPCGMetadata* MetaData, FName AttributeName, FQuat& Value);    // [0xa742594] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.SetQuatAttribute
	// void SetQuatAttribute(FPCGPoint& Point, class UPCGMetadata* MetaData, FName AttributeName, FQuat& Value);             // [0xa7422ec] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.SetNameAttribute
	// void SetNameAttribute(FPCGPoint& Point, class UPCGMetadata* MetaData, FName AttributeName, FName& Value);             // [0xa741dcc] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.SetInteger64AttributeByMetadataKey
	// void SetInteger64AttributeByMetadataKey(int64_t& Key, class UPCGMetadata* MetaData, FName AttributeName, int64_t Value); // [0xa741aa8] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.SetInteger64Attribute
	// void SetInteger64Attribute(FPCGPoint& Point, class UPCGMetadata* MetaData, FName AttributeName, int64_t Value);       // [0xa741730] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.SetInteger32AttributeByMetadataKey
	// void SetInteger32AttributeByMetadataKey(int64_t& Key, class UPCGMetadata* MetaData, FName AttributeName, int32_t Value); // [0xa74140c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.SetInteger32Attribute
	// void SetInteger32Attribute(FPCGPoint& Point, class UPCGMetadata* MetaData, FName AttributeName, int32_t Value);       // [0xa741098] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.SetFloatAttributeByMetadataKey
	// void SetFloatAttributeByMetadataKey(int64_t& Key, class UPCGMetadata* MetaData, FName AttributeName, float Value);    // [0xa740d74] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.SetFloatAttribute
	// void SetFloatAttribute(FPCGPoint& Point, class UPCGMetadata* MetaData, FName AttributeName, float Value);             // [0xa740a00] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.SetDoubleAttributeByMetadataKey
	// void SetDoubleAttributeByMetadataKey(int64_t& Key, class UPCGMetadata* MetaData, FName AttributeName, double Value);  // [0xa74060c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.SetDoubleAttribute
	// void SetDoubleAttribute(FPCGPoint& Point, class UPCGMetadata* MetaData, FName AttributeName, double Value);           // [0xa74028c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.SetBoolAttributeByMetadataKey
	// void SetBoolAttributeByMetadataKey(int64_t& Key, class UPCGMetadata* MetaData, FName AttributeName, bool Value);      // [0xa73ff68] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.SetBoolAttribute
	// void SetBoolAttribute(FPCGPoint& Point, class UPCGMetadata* MetaData, FName AttributeName, bool Value);               // [0xa73fbf0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.SetAttributeFromPropertyByMetadataKey
	// bool SetAttributeFromPropertyByMetadataKey(int64_t& Key, class UPCGMetadata* MetaData, FName AttributeName, class UObject* Object, FName PropertyName); // [0xa73f518] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.InitializeMetadata
	// void InitializeMetadata(FPCGPoint& Point, class UPCGMetadata* MetaData, FPCGPoint& ParentPoint, class UPCGMetadata* ParentMetadata); // [0xa73dfd4] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.HasAttributeSetByMetadataKey
	// bool HasAttributeSetByMetadataKey(int64_t Key, class UPCGMetadata* MetaData, FName AttributeName);                    // [0xa73dcf0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.HasAttributeSet
	// bool HasAttributeSet(FPCGPoint& Point, class UPCGMetadata* MetaData, FName AttributeName);                            // [0xa73da58] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.GetVectorAttributeByMetadataKey
	// FVector GetVectorAttributeByMetadataKey(int64_t Key, class UPCGMetadata* MetaData, FName AttributeName);              // [0xa73d8c0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.GetVectorAttribute
	// FVector GetVectorAttribute(FPCGPoint& Point, class UPCGMetadata* MetaData, FName AttributeName);                      // [0xa73d614] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.GetVector4AttributeByMetadataKey
	// FVector4 GetVector4AttributeByMetadataKey(int64_t Key, class UPCGMetadata* MetaData, FName AttributeName);            // [0xa73d50c] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.GetVector4Attribute
	// FVector4 GetVector4Attribute(FPCGPoint& Point, class UPCGMetadata* MetaData, FName AttributeName);                    // [0xa73d260] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.GetVector2AttributeByMetadataKey
	// FVector2D GetVector2AttributeByMetadataKey(int64_t Key, class UPCGMetadata* MetaData, FName AttributeName);           // [0xa73d160] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.GetVector2Attribute
	// FVector2D GetVector2Attribute(FPCGPoint& Point, class UPCGMetadata* MetaData, FName AttributeName);                   // [0xa73cebc] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.GetTransformAttributeByMetadataKey
	// FTransform GetTransformAttributeByMetadataKey(int64_t Key, class UPCGMetadata* MetaData, FName AttributeName);        // [0xa73c2c8] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.GetTransformAttribute
	// FTransform GetTransformAttribute(FPCGPoint& Point, class UPCGMetadata* MetaData, FName AttributeName);                // [0xa73bff8] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.GetStringAttributeByMetadataKey
	// FString GetStringAttributeByMetadataKey(int64_t Key, class UPCGMetadata* MetaData, FName AttributeName);              // [0xa73bee8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.GetStringAttribute
	// FString GetStringAttribute(FPCGPoint& Point, class UPCGMetadata* MetaData, FName AttributeName);                      // [0xa73bc30] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.GetSoftObjectPathAttributeByMetadataKey
	// FSoftObjectPath GetSoftObjectPathAttributeByMetadataKey(int64_t Key, class UPCGMetadata* MetaData, FName AttributeName); // [0xa73bb10] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.GetSoftObjectPathAttribute
	// FSoftObjectPath GetSoftObjectPathAttribute(FPCGPoint& Point, class UPCGMetadata* MetaData, FName AttributeName);      // [0xa73b858] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.GetSoftClassPathAttributeByMetadataKey
	// FSoftClassPath GetSoftClassPathAttributeByMetadataKey(int64_t Key, class UPCGMetadata* MetaData, FName AttributeName); // [0xa73b738] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.GetSoftClassPathAttribute
	// FSoftClassPath GetSoftClassPathAttribute(FPCGPoint& Point, class UPCGMetadata* MetaData, FName AttributeName);        // [0xa73b480] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.GetRotatorAttributeByMetadataKey
	// FRotator GetRotatorAttributeByMetadataKey(int64_t Key, class UPCGMetadata* MetaData, FName AttributeName);            // [0xa73b35c] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.GetRotatorAttribute
	// FRotator GetRotatorAttribute(FPCGPoint& Point, class UPCGMetadata* MetaData, FName AttributeName);                    // [0xa73b0b0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.GetQuatAttributeByMetadataKey
	// FQuat GetQuatAttributeByMetadataKey(int64_t Key, class UPCGMetadata* MetaData, FName AttributeName);                  // [0xa73afa8] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.GetQuatAttribute
	// FQuat GetQuatAttribute(FPCGPoint& Point, class UPCGMetadata* MetaData, FName AttributeName);                          // [0xa73acfc] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.GetNameAttribute
	// FName GetNameAttribute(FPCGPoint& Point, class UPCGMetadata* MetaData, FName AttributeName);                          // [0xa73a614] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.GetInteger64AttributeByMetadataKey
	// int64_t GetInteger64AttributeByMetadataKey(int64_t Key, class UPCGMetadata* MetaData, FName AttributeName);           // [0xa73a4f8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.GetInteger64Attribute
	// int64_t GetInteger64Attribute(FPCGPoint& Point, class UPCGMetadata* MetaData, FName AttributeName);                   // [0xa73a260] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.GetInteger32AttributeByMetadataKey
	// int32_t GetInteger32AttributeByMetadataKey(int64_t Key, class UPCGMetadata* MetaData, FName AttributeName);           // [0xa73a168] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.GetInteger32Attribute
	// int32_t GetInteger32Attribute(FPCGPoint& Point, class UPCGMetadata* MetaData, FName AttributeName);                   // [0xa739ed0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.GetFloatAttributeByMetadataKey
	// float GetFloatAttributeByMetadataKey(int64_t Key, class UPCGMetadata* MetaData, FName AttributeName);                 // [0xa739974] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.GetFloatAttribute
	// float GetFloatAttribute(FPCGPoint& Point, class UPCGMetadata* MetaData, FName AttributeName);                         // [0xa7396dc] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.GetDoubleAttributeByMetadataKey
	// double GetDoubleAttributeByMetadataKey(int64_t Key, class UPCGMetadata* MetaData, FName AttributeName);               // [0xa7395e4] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.GetDoubleAttribute
	// double GetDoubleAttribute(FPCGPoint& Point, class UPCGMetadata* MetaData, FName AttributeName);                       // [0xa73934c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.GetBoolAttributeByMetadataKey
	// bool GetBoolAttributeByMetadataKey(int64_t Key, class UPCGMetadata* MetaData, FName AttributeName);                   // [0xa739254] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.GetBoolAttribute
	// bool GetBoolAttribute(FPCGPoint& Point, class UPCGMetadata* MetaData, FName AttributeName);                           // [0xa738fbc] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.CopyPoint
	// void CopyPoint(FPCGPoint& InPoint, FPCGPoint& OutPoint, bool bCopyMetadata, class UPCGMetadata* InMetaData, class UPCGMetadata* OutMetadata); // [0xa7362c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/PCG.PCGRuntimeGenerationRadii
/// Size: 0x0060 (0x000000 - 0x000060)
struct FPCGRuntimeGenerationRadii
{ 
	double                                             GenerationRadius;                                           // 0x0000   (0x0008)  
	double                                             GenerationRadius400;                                        // 0x0008   (0x0008)  
	double                                             GenerationRadius800;                                        // 0x0010   (0x0008)  
	double                                             GenerationRadius1600;                                       // 0x0018   (0x0008)  
	double                                             GenerationRadius3200;                                       // 0x0020   (0x0008)  
	double                                             GenerationRadius6400;                                       // 0x0028   (0x0008)  
	double                                             GenerationRadius12800;                                      // 0x0030   (0x0008)  
	double                                             GenerationRadius25600;                                      // 0x0038   (0x0008)  
	double                                             GenerationRadius51200;                                      // 0x0040   (0x0008)  
	double                                             GenerationRadius102400;                                     // 0x0048   (0x0008)  
	double                                             GenerationRadius204800;                                     // 0x0050   (0x0008)  
	double                                             CleanupRadiusMultiplier;                                    // 0x0058   (0x0008)  
};

/// Class /Script/PCG.PCGComponent
/// Size: 0x01F0 (0x0000A0 - 0x000290)
class UPCGComponent : public UActorComponent
{ 
public:
	int32_t                                            Seed;                                                       // 0x00A0   (0x0004)  
	bool                                               bActivated;                                                 // 0x00A4   (0x0001)  
	bool                                               bIsComponentPartitioned;                                    // 0x00A5   (0x0001)  
	EPCGComponentGenerationTrigger                     GenerationTrigger;                                          // 0x00A6   (0x0001)  
	bool                                               bGenerateOnDropWhenTriggerOnDemand;                         // 0x00A7   (0x0001)  
	bool                                               bOverrideGenerationRadii;                                   // 0x00A8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x00A9   (0x0007)  MISSED
	FPCGRuntimeGenerationRadii                         GenerationRadii;                                            // 0x00B0   (0x0060)  
	class UClass*                                      SchedulingPolicyClass;                                      // 0x0110   (0x0008)  
	class UPCGSchedulingPolicyBase*                    SchedulingPolicy;                                           // 0x0118   (0x0008)  
	bool                                               bGenerated;                                                 // 0x0120   (0x0001)  
	bool                                               bRuntimeGenerated;                                          // 0x0121   (0x0001)  
	unsigned char                                      UnknownData01_5[0x6];                                       // 0x0122   (0x0006)  MISSED
	TArray<FName>                                      PostGenerateFunctionNames;                                  // 0x0128   (0x0010)  
	class UPCGGraphInstance*                           GraphInstance;                                              // 0x0138   (0x0008)  
	uint32_t                                           GenerationGridSize;                                         // 0x0140   (0x0004)  
	EPCGEditorDirtyMode                                CurrentEditingMode;                                         // 0x0144   (0x0001)  
	EPCGEditorDirtyMode                                SerializedEditingMode;                                      // 0x0145   (0x0001)  
	unsigned char                                      UnknownData02_5[0x1];                                       // 0x0146   (0x0001)  MISSED
	EPCGComponentInput                                 InputType;                                                  // 0x0147   (0x0001)  
	bool                                               bParseActorComponents;                                      // 0x0148   (0x0001)  
	unsigned char                                      UnknownData03_5[0x7];                                       // 0x0149   (0x0007)  MISSED
	class UPCGData*                                    CachedPCGData;                                              // 0x0150   (0x0008)  
	class UPCGData*                                    CachedInputData;                                            // 0x0158   (0x0008)  
	class UPCGData*                                    CachedActorData;                                            // 0x0160   (0x0008)  
	class UPCGData*                                    CachedLandscapeData;                                        // 0x0168   (0x0008)  
	class UPCGData*                                    CachedLandscapeHeightData;                                  // 0x0170   (0x0008)  
	TArray<class UPCGManagedResource*>                 GeneratedResources;                                         // 0x0178   (0x0010)  
	unsigned char                                      UnknownData04_5[0x8];                                       // 0x0188   (0x0008)  MISSED
	FBox                                               LastGeneratedBounds;                                        // 0x0190   (0x0038)  
	FPCGDataCollection                                 GeneratedGraphOutput;                                       // 0x01C8   (0x0030)  
	SDK_UNDEFINED(80,14586) /* TMap<FString, FPCGDataCollection> */ __um(PerPinGeneratedOutput);                   // 0x01F8   (0x0050)  
	unsigned char                                      UnknownData05_5[0x18];                                      // 0x0248   (0x0018)  MISSED
	bool                                               bIsComponentLocal;                                          // 0x0260   (0x0001)  
	unsigned char                                      UnknownData06_6[0x2F];                                      // 0x0261   (0x002F)  MISSED


	/// Functions
	// Function /Script/PCG.PCGComponent.SetGraph
	// void SetGraph(class UPCGGraphInterface* InGraph);                                                                     // [0x7c2bb64] Net|NetReliableNative|Event|NetMulticast|Public|BlueprintCallable 
	// Function /Script/PCG.PCGComponent.SetEditingMode
	// void SetEditingMode(EPCGEditorDirtyMode InEditingMode, EPCGEditorDirtyMode InSerializedEditingMode);                  // [0xa740938] Final|Native|Public|BlueprintCallable 
	// Function /Script/PCG.PCGComponent.NotifyPropertiesChangedFromBlueprint
	// void NotifyPropertiesChangedFromBlueprint();                                                                          // [0x36203b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/PCG.PCGComponent.GetSerializedEditingMode
	// EPCGEditorDirtyMode GetSerializedEditingMode();                                                                       // [0xa73b468] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PCG.PCGComponent.GetGeneratedGraphOutput
	// FPCGDataCollection GetGeneratedGraphOutput();                                                                         // [0xa739a6c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PCG.PCGComponent.GetEditingMode
	// EPCGEditorDirtyMode GetEditingMode();                                                                                 // [0xa4fd6cc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PCG.PCGComponent.GenerateLocal
	// void GenerateLocal(bool bForce);                                                                                      // [0xa738c54] Final|Native|Public|BlueprintCallable 
	// Function /Script/PCG.PCGComponent.Generate
	// void Generate(bool bForce);                                                                                           // [0x70d0474] Net|NetReliableNative|Event|NetMulticast|Public|BlueprintCallable 
	// Function /Script/PCG.PCGComponent.ClearPCGLink
	// class AActor* ClearPCGLink(class UClass* TemplateActor);                                                              // [0xa735dfc] Final|Native|Public|BlueprintCallable 
	// Function /Script/PCG.PCGComponent.CleanupLocal
	// void CleanupLocal(bool bRemoveComponents, bool bSave);                                                                // [0xa735cc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/PCG.PCGComponent.Cleanup
	// void Cleanup(bool bRemoveComponents, bool bSave);                                                                     // [0xa735bf8] Net|NetReliableNative|Event|NetMulticast|Public|BlueprintCallable 
	// Function /Script/PCG.PCGComponent.AddToManagedResources
	// void AddToManagedResources(class UPCGManagedResource* InResource);                                                    // [0xa735b18] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/PCG.PCGDataFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UPCGDataFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/PCG.PCGDataFunctionLibrary.GetTypedInputsByTag
	// TArray<UPCGData*> GetTypedInputsByTag(FPCGDataCollection& InCollection, FString InTag, TArray<FPCGTaggedData>& OutTaggedData, class UClass* InDataTypeClass); // [0xa73cbb8] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGDataFunctionLibrary.GetTypedInputsByPinLabel
	// TArray<UPCGData*> GetTypedInputsByPinLabel(FPCGDataCollection& InCollection, FName InPinLabel, TArray<FPCGTaggedData>& OutTaggedData, class UClass* InDataTypeClass); // [0xa73c8c4] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGDataFunctionLibrary.GetTypedInputsByPin
	// TArray<UPCGData*> GetTypedInputsByPin(FPCGDataCollection& InCollection, FPCGPinProperties& InPin, TArray<FPCGTaggedData>& OutTaggedData, class UClass* InDataTypeClass); // [0xa73c638] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGDataFunctionLibrary.GetTypedInputs
	// TArray<UPCGData*> GetTypedInputs(FPCGDataCollection& InCollection, TArray<FPCGTaggedData>& OutTaggedData, class UClass* InDataTypeClass); // [0xa73c414] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGDataFunctionLibrary.GetParamsByTag
	// TArray<FPCGTaggedData> GetParamsByTag(FPCGDataCollection& InCollection, FString InTag);                               // [0xa73ab2c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGDataFunctionLibrary.GetParamsByPinLabel
	// TArray<FPCGTaggedData> GetParamsByPinLabel(FPCGDataCollection& InCollection, FName InPinLabel);                       // [0xa73a97c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGDataFunctionLibrary.GetParams
	// TArray<FPCGTaggedData> GetParams(FPCGDataCollection& InCollection);                                                   // [0xa73a8b4] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGDataFunctionLibrary.GetInputsByTag
	// TArray<FPCGTaggedData> GetInputsByTag(FPCGDataCollection& InCollection, FString InTag);                               // [0xa739d00] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGDataFunctionLibrary.GetInputsByPinLabel
	// TArray<FPCGTaggedData> GetInputsByPinLabel(FPCGDataCollection& InCollection, FName InPinLabel);                       // [0xa739b50] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGDataFunctionLibrary.GetInputs
	// TArray<FPCGTaggedData> GetInputs(FPCGDataCollection& InCollection);                                                   // [0xa739a88] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGDataFunctionLibrary.GetAllSettings
	// TArray<FPCGTaggedData> GetAllSettings(FPCGDataCollection& InCollection);                                              // [0xa738cd4] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGDataFunctionLibrary.AddToCollection
	// void AddToCollection(FPCGDataCollection& InCollection, class UPCGData* InData, FName InPinLabel, TArray<FString> InTags); // [0xa73575c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/PCG.PCGEdge
/// Size: 0x0030 (0x000028 - 0x000058)
class UPCGEdge : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	FName                                              InboundLabel;                                               // 0x0028   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x002C   (0x0004)  MISSED
	class UPCGNode*                                    InboundNode;                                                // 0x0030   (0x0008)  
	FName                                              OutboundLabel;                                              // 0x0038   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x003C   (0x0004)  MISSED
	class UPCGNode*                                    OutboundNode;                                               // 0x0040   (0x0008)  
	class UPCGPin*                                     InputPin;                                                   // 0x0048   (0x0008)  
	class UPCGPin*                                     OutputPin;                                                  // 0x0050   (0x0008)  
};

/// Class /Script/PCG.PCGGraphInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UPCGGraphInterface : public UObject
{ 
public:


	/// Functions
	// Function /Script/PCG.PCGGraphInterface.GetMutablePCGGraph
	// class UPCGGraph* GetMutablePCGGraph();                                                                                // [0x7f3a054] Final|Native|Public|BlueprintCallable 
	// Function /Script/PCG.PCGGraphInterface.GetConstPCGGraph
	// class UPCGGraph* GetConstPCGGraph();                                                                                  // [0x30ea940] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/PCG.PCGGraph
/// Size: 0x0100 (0x000028 - 0x000128)
class UPCGGraph : public UPCGGraphInterface
{ 
public:
	bool                                               bLandscapeUsesMetadata;                                     // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0029   (0x0007)  MISSED
	TArray<class UPCGNode*>                            Nodes;                                                      // 0x0030   (0x0010)  
	class UPCGNode*                                    InputNode;                                                  // 0x0040   (0x0008)  
	class UPCGNode*                                    OutputNode;                                                 // 0x0048   (0x0008)  
	FInstancedPropertyBag                              UserParameters;                                             // 0x0050   (0x0010)  
	bool                                               bUseHierarchicalGeneration;                                 // 0x0060   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0061   (0x0003)  MISSED
	EPCGHiGenGrid                                      HiGenGridSize;                                              // 0x0064   (0x0004)  
	unsigned char                                      UnknownData02_5[0x58];                                      // 0x0068   (0x0058)  MISSED
	bool                                               bIsEditorOnly;                                              // 0x00C0   (0x0001)  
	unsigned char                                      UnknownData03_5[0x7];                                       // 0x00C1   (0x0007)  MISSED
	FPCGRuntimeGenerationRadii                         GenerationRadii;                                            // 0x00C8   (0x0060)  


	/// Functions
	// Function /Script/PCG.PCGGraph.RemoveNodes
	// void RemoveNodes(TArray<UPCGNode*>& InNodes);                                                                         // [0xa73f134] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGGraph.RemoveNode
	// void RemoveNode(class UPCGNode* InNode);                                                                              // [0xa73f0b4] Final|Native|Public|BlueprintCallable 
	// Function /Script/PCG.PCGGraph.RemoveEdge
	// bool RemoveEdge(class UPCGNode* From, FName& FromLabel, class UPCGNode* To, FName& ToLabel);                          // [0xa73ef50] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGGraph.GetOutputNode
	// class UPCGNode* GetOutputNode();                                                                                      // [0x9443d7c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PCG.PCGGraph.GetInputNode
	// class UPCGNode* GetInputNode();                                                                                       // [0x6473ba8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PCG.PCGGraph.AddNodeOfType
	// class UPCGNode* AddNodeOfType(class UClass* InSettingsClass, class UPCGSettings*& DefaultNodeSettings);               // [0xa735608] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGGraph.AddNodeInstance
	// class UPCGNode* AddNodeInstance(class UPCGSettings* InSettings);                                                      // [0xa735520] Final|Native|Public|BlueprintCallable 
	// Function /Script/PCG.PCGGraph.AddNodeCopy
	// class UPCGNode* AddNodeCopy(class UPCGSettings* InSettings, class UPCGSettings*& DefaultNodeSettings);                // [0xa7353e0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGGraph.AddEdge
	// class UPCGNode* AddEdge(class UPCGNode* From, FName& FromPinLabel, class UPCGNode* To, FName& ToPinLabel);            // [0xa7351ec] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/PCG.PCGOverrideInstancedPropertyBag
/// Size: 0x0060 (0x000000 - 0x000060)
struct FPCGOverrideInstancedPropertyBag
{ 
	FInstancedPropertyBag                              Parameters;                                                 // 0x0000   (0x0010)  
	SDK_UNDEFINED(80,14587) /* TSet<FGuid> */          __um(PropertiesIDsOverridden);                              // 0x0010   (0x0050)  
};

/// Class /Script/PCG.PCGGraphInstance
/// Size: 0x0068 (0x000028 - 0x000090)
class UPCGGraphInstance : public UPCGGraphInterface
{ 
public:
	class UPCGGraphInterface*                          Graph;                                                      // 0x0028   (0x0008)  
	FPCGOverrideInstancedPropertyBag                   ParametersOverrides;                                        // 0x0030   (0x0060)  
};

/// Class /Script/PCG.PCGGraphInputOutputSettings
/// Size: 0x0078 (0x0000A8 - 0x000120)
class UPCGGraphInputOutputSettings : public UPCGSettings
{ 
public:
	SDK_UNDEFINED(80,14588) /* TSet<FName> */          __um(PinLabels);                                            // 0x00A8   (0x0050)  
	TArray<FPCGPinProperties>                          CustomPins;                                                 // 0x00F8   (0x0010)  
	TArray<FPCGPinProperties>                          Pins;                                                       // 0x0108   (0x0010)  
	bool                                               bHasAddedDefaultPin;                                        // 0x0118   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0119   (0x0007)  MISSED
};

/// Class /Script/PCG.PCGManagedActors
/// Size: 0x0050 (0x000038 - 0x000088)
class UPCGManagedActors : public UPCGManagedResource
{ 
public:
	SDK_UNDEFINED(80,14589) /* TSet<TWeakObjectPtr<AActor*>> */ __um(GeneratedActors);                             // 0x0038   (0x0050)  
};

/// Class /Script/PCG.PCGManagedISMComponent
/// Size: 0x0248 (0x000058 - 0x0002A0)
class UPCGManagedISMComponent : public UPCGManagedComponent
{ 
public:
	bool                                               bHasDescriptor;                                             // 0x0058   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0059   (0x0007)  MISSED
	FISMComponentDescriptor                            Descriptor;                                                 // 0x0060   (0x0210)  
	bool                                               bHasRootLocation;                                           // 0x0270   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0271   (0x0007)  MISSED
	FVector                                            RootLocation;                                               // 0x0278   (0x0018)  
	uint64_t                                           SettingsUID;                                                // 0x0290   (0x0008)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x0298   (0x0008)  MISSED
};

/// Class /Script/PCG.PCGParamData
/// Size: 0x0088 (0x000038 - 0x0000C0)
class UPCGParamData : public UPCGData
{ 
public:
	class UPCGMetadata*                                MetaData;                                                   // 0x0038   (0x0008)  
	SDK_UNDEFINED(80,14590) /* TMap<FName, int64_t> */ __um(NameMap);                                              // 0x0040   (0x0050)  
	bool                                               bHasCachedLastSelector;                                     // 0x0090   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0091   (0x0007)  MISSED
	FPCGAttributePropertyInputSelector                 CachedLastSelector;                                         // 0x0098   (0x0028)  


	/// Functions
	// Function /Script/PCG.PCGParamData.MutableMetadata
	// class UPCGMetadata* MutableMetadata();                                                                                // [0x3c5146c] Native|Public|BlueprintCallable 
	// Function /Script/PCG.PCGParamData.FindOrAddMetadataKey
	// int64_t FindOrAddMetadataKey(FName& InName);                                                                          // [0xa75c37c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGParamData.FindMetadataKey
	// int64_t FindMetadataKey(FName& InName);                                                                               // [0xa75c2e4] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PCG.PCGParamData.FilterParamsByName
	// class UPCGParamData* FilterParamsByName(FName& InName);                                                               // [0xa75c210] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PCG.PCGParamData.FilterParamsByKey
	// class UPCGParamData* FilterParamsByKey(int64_t InKey);                                                                // [0xa75c180] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PCG.PCGParamData.ConstMetadata
	// class UPCGMetadata* ConstMetadata();                                                                                  // [0x68143f8] Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/PCG.PCGBlueprintPinHelpers
/// Size: 0x0000 (0x000028 - 0x000028)
class UPCGBlueprintPinHelpers : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/PCG.PCGBlueprintPinHelpers.MakePinProperty
	// FPCGPinProperties MakePinProperty(FName Label, bool bAllowMultipleData, bool bAllowMultipleConnections, bool bIsAdvancedPin, EPCGExclusiveDataType AllowedType); // [0xa75c62c] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/PCG.PCGBlueprintPinHelpers.BreakPinProperty
	// void BreakPinProperty(FPCGPinProperties& PinProperty, FName& Label, bool& bAllowMultipleData, bool& bAllowMultipleConnections, bool& bIsAdvancedPin, EPCGExclusiveDataType& AllowedType); // [0xa75bce4] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
};

/// Class /Script/PCG.PCGPin
/// Size: 0x0030 (0x000028 - 0x000058)
class UPCGPin : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	class UPCGNode*                                    Node;                                                       // 0x0028   (0x0008)  
	FName                                              Label;                                                      // 0x0030   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0034   (0x0004)  MISSED
	TArray<class UPCGEdge*>                            Edges;                                                      // 0x0038   (0x0010)  
	FPCGPinProperties                                  Properties;                                                 // 0x0048   (0x0010)  


	/// Functions
	// Function /Script/PCG.PCGPin.SetToolTip
	// void SetToolTip(FText& InTooltip);                                                                                    // [0x91fe8bc] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGPin.GetTooltip
	// FText GetTooltip();                                                                                                   // [0x99c0f3c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/PCG.PCGPinPropertiesBlueprintHelpers
/// Size: 0x0000 (0x000028 - 0x000028)
class UPCGPinPropertiesBlueprintHelpers : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/PCG.PCGPinPropertiesBlueprintHelpers.SetRequiredPin
	// void SetRequiredPin(FPCGPinProperties& PinProperties);                                                                // [0xa75cb80] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGPinPropertiesBlueprintHelpers.SetNormalPin
	// void SetNormalPin(FPCGPinProperties& PinProperties);                                                                  // [0xa75caf8] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGPinPropertiesBlueprintHelpers.SetAllowMultipleConnections
	// void SetAllowMultipleConnections(FPCGPinProperties& PinProperties, bool bAllowMultipleConnections);                   // [0xa75c974] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGPinPropertiesBlueprintHelpers.SetAdvancedPin
	// void SetAdvancedPin(FPCGPinProperties& PinProperties);                                                                // [0xa75c8e8] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGPinPropertiesBlueprintHelpers.IsRequiredPin
	// bool IsRequiredPin(FPCGPinProperties& PinProperties);                                                                 // [0xa75c590] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGPinPropertiesBlueprintHelpers.IsNormalPin
	// bool IsNormalPin(FPCGPinProperties& PinProperties);                                                                   // [0xa75c4f8] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGPinPropertiesBlueprintHelpers.IsAdvancedPin
	// bool IsAdvancedPin(FPCGPinProperties& PinProperties);                                                                 // [0xa75c45c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGPinPropertiesBlueprintHelpers.AllowsMultipleConnections
	// bool AllowsMultipleConnections(FPCGPinProperties& PinProperties);                                                     // [0xa75bc38] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/PCG.PCGSettingsInstance
/// Size: 0x0008 (0x000040 - 0x000048)
class UPCGSettingsInstance : public UPCGSettingsInterface
{ 
public:
	class UPCGSettings*                                Settings;                                                   // 0x0040   (0x0008)  
};

/// Class /Script/PCG.PCGTrivialSettings
/// Size: 0x0000 (0x0000A8 - 0x0000A8)
class UPCGTrivialSettings : public UPCGSettings
{ 
public:
};

/// Class /Script/PCG.PCGSubgraphNode
/// Size: 0x0000 (0x000088 - 0x000088)
class UPCGSubgraphNode : public UPCGBaseSubgraphNode
{ 
public:
};

/// Class /Script/PCG.PCGSubsystem
/// Size: 0x0640 (0x000040 - 0x000680)
class UPCGSubsystem : public UTickableWorldSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x640];                                     // 0x0040   (0x0640)  MISSED
};

/// Class /Script/PCG.PCGVolume
/// Size: 0x0008 (0x0002C8 - 0x0002D0)
class APCGVolume : public AVolume
{ 
public:
	class UPCGComponent*                               PCGComponent;                                               // 0x02C8   (0x0008)  
};

/// Class /Script/PCG.PCGWorldActor
/// Size: 0x0118 (0x000290 - 0x0003A8)
class APCGWorldActor : public AActor
{ 
public:
	uint32_t                                           PartitionGridSize;                                          // 0x0290   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0294   (0x0004)  MISSED
	class UPCGLandscapeCache*                          LandscapeCacheObject;                                       // 0x0298   (0x0008)  
	bool                                               bUse2DGrid;                                                 // 0x02A0   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x02A1   (0x0007)  MISSED
	SDK_UNDEFINED(80,14591) /* TMap<uint32_t, FGuid> */ __um(GridGuids);                                           // 0x02A8   (0x0050)  
	unsigned char                                      UnknownData02_5[0x8];                                       // 0x02F8   (0x0008)  MISSED
	SDK_UNDEFINED(80,14592) /* TMap<uint32_t, FGuid> */ __um(TransientGridGuids);                                  // 0x0300   (0x0050)  
	unsigned char                                      UnknownData03_5[0x8];                                       // 0x0350   (0x0008)  MISSED
	SDK_UNDEFINED(80,14593) /* TSet<FPCGPartitionActorRecord> */ __um(SerializedPartitionActorRecords);            // 0x0358   (0x0050)  
};

/// Class /Script/PCG.PCGGenSourceComponent
/// Size: 0x0008 (0x0000A0 - 0x0000A8)
class UPCGGenSourceComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00A0   (0x0008)  MISSED
};

/// Class /Script/PCG.PCGGenSourceEditorCamera
/// Size: 0x0008 (0x000028 - 0x000030)
class UPCGGenSourceEditorCamera : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x0000   (0x0030)  MISSED
};

/// Class /Script/PCG.PCGGenSourcePlayer
/// Size: 0x0010 (0x000028 - 0x000038)
class UPCGGenSourcePlayer : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x38];                                      // 0x0000   (0x0038)  MISSED
};

/// Class /Script/PCG.PCGGenSourceWPStreamingSource
/// Size: 0x0010 (0x000028 - 0x000038)
class UPCGGenSourceWPStreamingSource : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x38];                                      // 0x0000   (0x0038)  MISSED
};

/// Class /Script/PCG.PCGSchedulingPolicyDistanceAndDirection
/// Size: 0x0010 (0x000028 - 0x000038)
class UPCGSchedulingPolicyDistanceAndDirection : public UPCGSchedulingPolicyBase
{ 
public:
	bool                                               bUseDistance;                                               // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0029   (0x0003)  MISSED
	float                                              DistanceWeight;                                             // 0x002C   (0x0004)  
	bool                                               bUseDirection;                                              // 0x0030   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0031   (0x0003)  MISSED
	float                                              DirectionWeight;                                            // 0x0034   (0x0004)  
};

/// Class /Script/PCG.PCGDeterminismTestBlueprintBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UPCGDeterminismTestBlueprintBase : public UObject
{ 
public:


	/// Functions
	// Function /Script/PCG.PCGDeterminismTestBlueprintBase.ExecuteTest
	// void ExecuteTest(class UPCGNode* InPCGNode, FDeterminismTestResult& InOutTestResult);                                 // [0xa75c074] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
};

/// Struct /Script/PCG.PCGAttributeExtractorTestStructDepth2
/// Size: 0x0004 (0x000000 - 0x000004)
struct FPCGAttributeExtractorTestStructDepth2
{ 
	int32_t                                            IntValue;                                                   // 0x0000   (0x0004)  
};

/// Struct /Script/PCG.PCGAttributeExtractorTestStructDepth1
/// Size: 0x0008 (0x000000 - 0x000008)
struct FPCGAttributeExtractorTestStructDepth1
{ 
	FPCGAttributeExtractorTestStructDepth2             Depth2Struct;                                               // 0x0000   (0x0004)  
	float                                              FloatValue;                                                 // 0x0004   (0x0004)  
};

/// Struct /Script/PCG.PCGAttributeExtractorTestStruct
/// Size: 0x0010 (0x000000 - 0x000010)
struct FPCGAttributeExtractorTestStruct
{ 
	FPCGAttributeExtractorTestStructDepth1             DepthStruct;                                                // 0x0000   (0x0008)  
	class UPCGAttributeExtractorTestObject*            Object;                                                     // 0x0008   (0x0008)  
};

/// Struct /Script/PCG.PCGDataTableRowToParamDataTestStruct
/// Size: 0x00A0 (0x000000 - 0x0000A0)
struct FPCGDataTableRowToParamDataTestStruct
{ 
	FName                                              Name;                                                       // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	SDK_UNDEFINED(16,14594) /* FString */              __um(String);                                               // 0x0008   (0x0010)  
	int32_t                                            I32;                                                        // 0x0018   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x001C   (0x0004)  MISSED
	int64_t                                            I64;                                                        // 0x0020   (0x0008)  
	float                                              F32;                                                        // 0x0028   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x002C   (0x0004)  MISSED
	double                                             F64;                                                        // 0x0030   (0x0008)  
	FVector2D                                          v2;                                                         // 0x0038   (0x0010)  
	FVector                                            V3;                                                         // 0x0048   (0x0018)  
	FVector4                                           V4;                                                         // 0x0060   (0x0020)  
	FSoftObjectPath                                    SoftPath;                                                   // 0x0080   (0x0018)  
	unsigned char                                      UnknownData03_6[0x8];                                       // 0x0098   (0x0008)  MISSED
};

/// Struct /Script/PCG.PCGDeterminismSettings
/// Size: 0x0010 (0x000000 - 0x000010)
struct FPCGDeterminismSettings
{ 
	bool                                               bNativeTests;                                               // 0x0000   (0x0001)  
	bool                                               bUseBlueprintDeterminismTest;                               // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x0002   (0x0006)  MISSED
	class UClass*                                      DeterminismTestBlueprint;                                   // 0x0008   (0x0008)  
};

/// Struct /Script/PCG.PCGActorPropertyOverride
/// Size: 0x0038 (0x000000 - 0x000038)
struct FPCGActorPropertyOverride
{ 
	FPCGAttributePropertyInputSelector                 InputSource;                                                // 0x0000   (0x0028)  
	SDK_UNDEFINED(16,14595) /* FString */              __um(PropertyTarget);                                       // 0x0028   (0x0010)  
};

/// Struct /Script/PCG.PCGContext
/// Size: 0x00D0 (0x000000 - 0x0000D0)
struct FPCGContext
{ 
	unsigned char                                      UnknownData00_2[0xD0];                                      // 0x0000   (0x00D0)  MISSED
};

/// Struct /Script/PCG.PCGStaticMeshSpawnerContext
/// Size: 0x0238 (0x0000D0 - 0x000308)
struct FPCGStaticMeshSpawnerContext : FPCGContext
{ 
	unsigned char                                      UnknownData00_1[0x238];                                     // 0x00D0   (0x0238)  MISSED
};

/// Struct /Script/PCG.PCGSelectionKey
/// Size: 0x0030 (0x000000 - 0x000030)
struct FPCGSelectionKey
{ 
	EPCGActorFilter                                    ActorFilter;                                                // 0x0000   (0x0001)  
	EPCGActorSelection                                 Selection;                                                  // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0002   (0x0002)  MISSED
	FName                                              tag;                                                        // 0x0004   (0x0004)  
	class UClass*                                      SelectionClass;                                             // 0x0008   (0x0008)  
	FSoftObjectPath                                    ObjectPath;                                                 // 0x0010   (0x0018)  
	class UClass*                                      OptionalExtraDependency;                                    // 0x0028   (0x0008)  
};

/// Struct /Script/PCG.PCGStackFrame
/// Size: 0x0010 (0x000000 - 0x000010)
struct FPCGStackFrame
{ 
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0000   (0x0010)  MISSED
};

/// Struct /Script/PCG.PCGStack
/// Size: 0x0010 (0x000000 - 0x000010)
struct FPCGStack
{ 
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0000   (0x0010)  MISSED
};

/// Struct /Script/PCG.PCGLandscapeLayerWeight
/// Size: 0x0008 (0x000000 - 0x000008)
struct FPCGLandscapeLayerWeight
{ 
	FName                                              Name;                                                       // 0x0000   (0x0004)  
	float                                              Weight;                                                     // 0x0004   (0x0004)  
};

/// Struct /Script/PCG.PCGPackedCustomData
/// Size: 0x0018 (0x000000 - 0x000018)
struct FPCGPackedCustomData
{ 
	int32_t                                            NumCustomDataFloats;                                        // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	TArray<float>                                      CustomData;                                                 // 0x0008   (0x0010)  
};

/// Struct /Script/PCG.PCGMeshInstanceList
/// Size: 0x0268 (0x000000 - 0x000268)
struct FPCGMeshInstanceList
{ 
	FSoftISMComponentDescriptor                        Descriptor;                                                 // 0x0000   (0x0240)  
	TArray<FTransform>                                 Instances;                                                  // 0x0240   (0x0010)  
	TArray<int64_t>                                    InstancesMetadataEntry;                                     // 0x0250   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0260   (0x0008)  MISSED
};

/// Struct /Script/PCG.PCGComponentInstanceData
/// Size: 0x0018 (0x000068 - 0x000080)
struct FPCGComponentInstanceData : FActorComponentInstanceData
{ 
	TArray<class UPCGManagedResource*>                 GeneratedResources;                                         // 0x0068   (0x0010)  
	class UPCGComponent*                               SourceComponent;                                            // 0x0078   (0x0008)  
};

/// Struct /Script/PCG.PCGDebugVisualizationSettings
/// Size: 0x0048 (0x000000 - 0x000048)
struct FPCGDebugVisualizationSettings
{ 
	float                                              PointScale;                                                 // 0x0000   (0x0004)  
	EPCGDebugVisScaleMethod                            ScaleMethod;                                                // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0005   (0x0003)  MISSED
	SDK_UNDEFINED(32,14596) /* TWeakObjectPtr<UStaticMesh*> */ __um(PointMesh);                                    // 0x0008   (0x0020)  
	SDK_UNDEFINED(32,14597) /* TWeakObjectPtr<UMaterialInterface*> */ __um(MaterialOverride);                      // 0x0028   (0x0020)  
};

/// Struct /Script/PCG.PCGPropertyAliases
/// Size: 0x0010 (0x000000 - 0x000010)
struct FPCGPropertyAliases
{ 
	TArray<FName>                                      Aliases;                                                    // 0x0000   (0x0010)  
};

/// Struct /Script/PCG.PCGPreConfiguredSettingsInfo
/// Size: 0x0020 (0x000000 - 0x000020)
struct FPCGPreConfiguredSettingsInfo
{ 
	int32_t                                            PreconfiguredIndex;                                         // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	SDK_UNDEFINED(24,14598) /* FText */                __um(Label);                                                // 0x0008   (0x0018)  
};

/// Struct /Script/PCG.PCGPartitionActorRecord
/// Size: 0x0020 (0x000000 - 0x000020)
struct FPCGPartitionActorRecord
{ 
	FGuid                                              GridGuid;                                                   // 0x0000   (0x0010)  
	uint32_t                                           GridSize;                                                   // 0x0010   (0x0004)  
	FIntVector                                         GridCoords;                                                 // 0x0014   (0x000C)  
};

/// Struct /Script/PCG.DeterminismTestResult
/// Size: 0x0088 (0x000000 - 0x000088)
struct FDeterminismTestResult
{ 
	FName                                              TestResultTitle;                                            // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	SDK_UNDEFINED(16,14599) /* FString */              __um(TestResultName);                                       // 0x0008   (0x0010)  
	int32_t                                            Seed;                                                       // 0x0018   (0x0004)  
	EPCGDataType                                       DataTypesTested;                                            // 0x001C   (0x0004)  
	SDK_UNDEFINED(80,14600) /* TMap<FName, EDeterminismLevel> */ __um(TestResults);                                // 0x0020   (0x0050)  
	SDK_UNDEFINED(16,14601) /* TArray<FString> */      __um(AdditionalDetails);                                    // 0x0070   (0x0010)  
	bool                                               bFlagRaised;                                                // 0x0080   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0081   (0x0007)  MISSED
};

