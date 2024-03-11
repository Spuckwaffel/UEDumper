
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: GeometryFramework
/// dependency: InteractiveToolsFramework
/// dependency: MeshModelingTools
/// dependency: ModelingComponents
/// dependency: ModelingOperators

/// Enum /Script/MeshModelingToolsExp.EBakeNormalSpace
/// Size: 0x03
enum class EBakeNormalSpace : uint32_t
{
	EBakeNormalSpace__Tangent                                                        = 0,
	EBakeNormalSpace__Object                                                         = 1,
	EBakeNormalSpace__EBakeNormalSpace_MAX                                           = 2
};

/// Enum /Script/MeshModelingToolsExp.EBakeCurvatureTypeMode
/// Size: 0x04
enum class EBakeCurvatureTypeMode : uint32_t
{
	EBakeCurvatureTypeMode__MeanAverage                                              = 0,
	EBakeCurvatureTypeMode__Max                                                      = 1,
	EBakeCurvatureTypeMode__Min                                                      = 2,
	EBakeCurvatureTypeMode__Gaussian                                                 = 3
};

/// Enum /Script/MeshModelingToolsExp.EBakeCurvatureColorMode
/// Size: 0x04
enum class EBakeCurvatureColorMode : uint32_t
{
	EBakeCurvatureColorMode__Grayscale                                               = 0,
	EBakeCurvatureColorMode__RedBlue                                                 = 1,
	EBakeCurvatureColorMode__RedGreenBlue                                            = 2,
	EBakeCurvatureColorMode__EBakeCurvatureColorMode_MAX                             = 3
};

/// Enum /Script/MeshModelingToolsExp.EBakeCurvatureClampMode
/// Size: 0x04
enum class EBakeCurvatureClampMode : uint32_t
{
	EBakeCurvatureClampMode__None                                                    = 0,
	EBakeCurvatureClampMode__OnlyPositive                                            = 1,
	EBakeCurvatureClampMode__OnlyNegative                                            = 2,
	EBakeCurvatureClampMode__EBakeCurvatureClampMode_MAX                             = 3
};

/// Enum /Script/MeshModelingToolsExp.EExtrudeMeshSelectionInteractionMode
/// Size: 0x03
enum class EExtrudeMeshSelectionInteractionMode : uint8_t
{
	EExtrudeMeshSelectionInteractionMode__Interactive                                = 0,
	EExtrudeMeshSelectionInteractionMode__Fixed                                      = 1,
	EExtrudeMeshSelectionInteractionMode__EExtrudeMeshSelectionInteractionMode_MAX   = 2
};

/// Enum /Script/MeshModelingToolsExp.EExtrudeMeshSelectionRegionModifierMode
/// Size: 0x04
enum class EExtrudeMeshSelectionRegionModifierMode : uint8_t
{
	EExtrudeMeshSelectionRegionModifierMode__OriginalShape                           = 0,
	EExtrudeMeshSelectionRegionModifierMode__FlattenToPlane                          = 1,
	EExtrudeMeshSelectionRegionModifierMode__RaycastToPlane                          = 2,
	EExtrudeMeshSelectionRegionModifierMode__EExtrudeMeshSelectionRegionModifierMode_MAX = 3
};

/// Enum /Script/MeshModelingToolsExp.EPlaneBrushSideMode
/// Size: 0x04
enum class EPlaneBrushSideMode : uint8_t
{
	EPlaneBrushSideMode__BothSides                                                   = 0,
	EPlaneBrushSideMode__PushDown                                                    = 1,
	EPlaneBrushSideMode__PullTowards                                                 = 2,
	EPlaneBrushSideMode__EPlaneBrushSideMode_MAX                                     = 3
};

/// Enum /Script/MeshModelingToolsExp.EVertexColorPaintBrushOpBlendMode
/// Size: 0x04
enum class EVertexColorPaintBrushOpBlendMode : uint32_t
{
	EVertexColorPaintBrushOpBlendMode__Lerp                                          = 0,
	EVertexColorPaintBrushOpBlendMode__Mix                                           = 1,
	EVertexColorPaintBrushOpBlendMode__Multiply                                      = 2,
	EVertexColorPaintBrushOpBlendMode__EVertexColorPaintBrushOpBlendMode_MAX         = 3
};

/// Enum /Script/MeshModelingToolsExp.EOffsetMeshSelectionInteractionMode
/// Size: 0x02
enum class EOffsetMeshSelectionInteractionMode : uint8_t
{
	EOffsetMeshSelectionInteractionMode__Fixed                                       = 0,
	EOffsetMeshSelectionInteractionMode__EOffsetMeshSelectionInteractionMode_MAX     = 1
};

/// Enum /Script/MeshModelingToolsExp.EOffsetMeshSelectionDirectionMode
/// Size: 0x04
enum class EOffsetMeshSelectionDirectionMode : uint8_t
{
	EOffsetMeshSelectionDirectionMode__VertexNormals                                 = 0,
	EOffsetMeshSelectionDirectionMode__FaceNormals                                   = 1,
	EOffsetMeshSelectionDirectionMode__ConstantWidth                                 = 2,
	EOffsetMeshSelectionDirectionMode__EOffsetMeshSelectionDirectionMode_MAX         = 3
};

/// Enum /Script/MeshModelingToolsExp.EPatternToolShape
/// Size: 0x04
enum class EPatternToolShape : uint8_t
{
	EPatternToolShape__Line                                                          = 0,
	EPatternToolShape__Grid                                                          = 1,
	EPatternToolShape__Circle                                                        = 2,
	EPatternToolShape__EPatternToolShape_MAX                                         = 3
};

/// Enum /Script/MeshModelingToolsExp.EPatternToolSingleAxis
/// Size: 0x04
enum class EPatternToolSingleAxis : uint8_t
{
	EPatternToolSingleAxis__XAxis                                                    = 0,
	EPatternToolSingleAxis__YAxis                                                    = 1,
	EPatternToolSingleAxis__ZAxis                                                    = 2,
	EPatternToolSingleAxis__EPatternToolSingleAxis_MAX                               = 3
};

/// Enum /Script/MeshModelingToolsExp.EPatternToolSinglePlane
/// Size: 0x04
enum class EPatternToolSinglePlane : uint8_t
{
	EPatternToolSinglePlane__XYPlane                                                 = 0,
	EPatternToolSinglePlane__XZPlane                                                 = 1,
	EPatternToolSinglePlane__YZPlane                                                 = 2,
	EPatternToolSinglePlane__EPatternToolSinglePlane_MAX                             = 3
};

/// Enum /Script/MeshModelingToolsExp.EPatternToolAxisSpacingMode
/// Size: 0x04
enum class EPatternToolAxisSpacingMode : uint8_t
{
	EPatternToolAxisSpacingMode__ByCount                                             = 0,
	EPatternToolAxisSpacingMode__StepSize                                            = 1,
	EPatternToolAxisSpacingMode__Packed                                              = 2,
	EPatternToolAxisSpacingMode__EPatternToolAxisSpacingMode_MAX                     = 3
};

/// Enum /Script/MeshModelingToolsExp.EMeshBoundaryConstraint
/// Size: 0x04
enum class EMeshBoundaryConstraint : uint8_t
{
	EMeshBoundaryConstraint__Fixed                                                   = 7,
	EMeshBoundaryConstraint__Refine                                                  = 5,
	EMeshBoundaryConstraint__Free                                                    = 1,
	EMeshBoundaryConstraint__EMeshBoundaryConstraint_MAX                             = 8
};

/// Enum /Script/MeshModelingToolsExp.EGroupBoundaryConstraint
/// Size: 0x05
enum class EGroupBoundaryConstraint : uint8_t
{
	EGroupBoundaryConstraint__Fixed                                                  = 7,
	EGroupBoundaryConstraint__Refine                                                 = 5,
	EGroupBoundaryConstraint__Free                                                   = 1,
	EGroupBoundaryConstraint__Ignore                                                 = 0,
	EGroupBoundaryConstraint__EGroupBoundaryConstraint_MAX                           = 8
};

/// Enum /Script/MeshModelingToolsExp.EMaterialBoundaryConstraint
/// Size: 0x05
enum class EMaterialBoundaryConstraint : uint8_t
{
	EMaterialBoundaryConstraint__Fixed                                               = 7,
	EMaterialBoundaryConstraint__Refine                                              = 5,
	EMaterialBoundaryConstraint__Free                                                = 1,
	EMaterialBoundaryConstraint__Ignore                                              = 0,
	EMaterialBoundaryConstraint__EMaterialBoundaryConstraint_MAX                     = 8
};

/// Enum /Script/MeshModelingToolsExp.ERevolveSplineSampleMode
/// Size: 0x04
enum class ERevolveSplineSampleMode : uint8_t
{
	ERevolveSplineSampleMode__ControlPointsOnly                                      = 0,
	ERevolveSplineSampleMode__PolyLineMaxError                                       = 1,
	ERevolveSplineSampleMode__UniformSpacingAlongCurve                               = 2,
	ERevolveSplineSampleMode__ERevolveSplineSampleMode_MAX                           = 3
};

/// Enum /Script/MeshModelingToolsExp.EAlignObjectsAlignTypes
/// Size: 0x03
enum class EAlignObjectsAlignTypes : uint32_t
{
	EAlignObjectsAlignTypes__Pivots                                                  = 0,
	EAlignObjectsAlignTypes__BoundingBoxes                                           = 1,
	EAlignObjectsAlignTypes__EAlignObjectsAlignTypes_MAX                             = 2
};

/// Enum /Script/MeshModelingToolsExp.EAlignObjectsAlignToOptions
/// Size: 0x04
enum class EAlignObjectsAlignToOptions : uint32_t
{
	EAlignObjectsAlignToOptions__FirstSelected                                       = 0,
	EAlignObjectsAlignToOptions__LastSelected                                        = 1,
	EAlignObjectsAlignToOptions__Combined                                            = 2,
	EAlignObjectsAlignToOptions__EAlignObjectsAlignToOptions_MAX                     = 3
};

/// Enum /Script/MeshModelingToolsExp.EAlignObjectsBoxPoint
/// Size: 0x09
enum class EAlignObjectsBoxPoint : uint32_t
{
	EAlignObjectsBoxPoint__Center                                                    = 0,
	EAlignObjectsBoxPoint__Bottom                                                    = 1,
	EAlignObjectsBoxPoint__Top                                                       = 2,
	EAlignObjectsBoxPoint__Left                                                      = 3,
	EAlignObjectsBoxPoint__Right                                                     = 4,
	EAlignObjectsBoxPoint__Front                                                     = 5,
	EAlignObjectsBoxPoint__Back                                                      = 6,
	EAlignObjectsBoxPoint__Min                                                       = 7,
	EAlignObjectsBoxPoint__Max                                                       = 8
};

/// Enum /Script/MeshModelingToolsExp.EBakeMapType
/// Size: 0x17
enum class EBakeMapType : uint16_t
{
	EBakeMapType__None                                                               = 0,
	EBakeMapType__TangentSpaceNormal                                                 = 1,
	EBakeMapType__ObjectSpaceNormal                                                  = 2,
	EBakeMapType__FaceNormal                                                         = 4,
	EBakeMapType__BentNormal                                                         = 8,
	EBakeMapType__Position                                                           = 16,
	EBakeMapType__Curvature                                                          = 32,
	EBakeMapType__AmbientOcclusion                                                   = 64,
	EBakeMapType__Texture                                                            = 128,
	EBakeMapType__MultiTexture                                                       = 256,
	EBakeMapType__VertexColor                                                        = 512,
	EBakeMapType__MaterialID                                                         = 1024,
	EBakeMapType__PolyGroupID                                                        = 2048,
	EBakeMapType__One                                                                = 4096,
	EBakeMapType__Zero                                                               = 8192,
	EBakeMapType__All                                                                = 8191,
	EBakeMapType__EBakeMapType_MAX                                                   = 8193
};

/// Enum /Script/MeshModelingToolsExp.EBakeVertexOutput
/// Size: 0x03
enum class EBakeVertexOutput : uint32_t
{
	EBakeVertexOutput__RGBA                                                          = 0,
	EBakeVertexOutput__PerChannel                                                    = 1,
	EBakeVertexOutput__EBakeVertexOutput_MAX                                         = 2
};

/// Enum /Script/MeshModelingToolsExp.EBakeVertexChannel
/// Size: 0x06
enum class EBakeVertexChannel : uint32_t
{
	EBakeVertexChannel__R                                                            = 0,
	EBakeVertexChannel__G                                                            = 1,
	EBakeVertexChannel__B                                                            = 2,
	EBakeVertexChannel__A                                                            = 3,
	EBakeVertexChannel__RGBA                                                         = 4,
	EBakeVertexChannel__EBakeVertexChannel_MAX                                       = 5
};

/// Enum /Script/MeshModelingToolsExp.EBakeScaleMethod
/// Size: 0x04
enum class EBakeScaleMethod : uint8_t
{
	EBakeScaleMethod__BakeFullScale                                                  = 0,
	EBakeScaleMethod__BakeNonuniformScale                                            = 1,
	EBakeScaleMethod__DoNotBakeScale                                                 = 2,
	EBakeScaleMethod__EBakeScaleMethod_MAX                                           = 3
};

/// Enum /Script/MeshModelingToolsExp.EConvertToPolygonsMode
/// Size: 0x08
enum class EConvertToPolygonsMode : uint32_t
{
	EConvertToPolygonsMode__FaceNormalDeviation                                      = 0,
	EConvertToPolygonsMode__FindPolygons                                             = 1,
	EConvertToPolygonsMode__FromUVIslands                                            = 2,
	EConvertToPolygonsMode__FromNormalSeams                                          = 3,
	EConvertToPolygonsMode__FromConnectedTris                                        = 4,
	EConvertToPolygonsMode__FromFurthestPointSampling                                = 5,
	EConvertToPolygonsMode__CopyFromLayer                                            = 6,
	EConvertToPolygonsMode__EConvertToPolygonsMode_MAX                               = 7
};

/// Enum /Script/MeshModelingToolsExp.ECubeGridToolFaceSelectionMode
/// Size: 0x05
enum class ECubeGridToolFaceSelectionMode : uint32_t
{
	ECubeGridToolFaceSelectionMode__OutsideBasedOnNormal                             = 0,
	ECubeGridToolFaceSelectionMode__InsideBasedOnNormal                              = 1,
	ECubeGridToolFaceSelectionMode__OutsideBasedOnViewRay                            = 2,
	ECubeGridToolFaceSelectionMode__InsideBasedOnViewRay                             = 3,
	ECubeGridToolFaceSelectionMode__ECubeGridToolFaceSelectionMode_MAX               = 4
};

/// Enum /Script/MeshModelingToolsExp.ECubeGridToolAction
/// Size: 0x12
enum class ECubeGridToolAction : uint8_t
{
	ECubeGridToolAction__NoAction                                                    = 0,
	ECubeGridToolAction__Push                                                        = 1,
	ECubeGridToolAction__Pull                                                        = 2,
	ECubeGridToolAction__Flip                                                        = 3,
	ECubeGridToolAction__SlideForward                                                = 4,
	ECubeGridToolAction__SlideBack                                                   = 5,
	ECubeGridToolAction__DecreaseGridPower                                           = 6,
	ECubeGridToolAction__IncreaseGridPower                                           = 7,
	ECubeGridToolAction__CornerMode                                                  = 8,
	ECubeGridToolAction__ResetFromActor                                              = 9,
	ECubeGridToolAction__AcceptAndStartNew                                           = 10,
	ECubeGridToolAction__ECubeGridToolAction_MAX                                     = 11
};

/// Enum /Script/MeshModelingToolsExp.EGroupTopologyDeformationStrategy
/// Size: 0x03
enum class EGroupTopologyDeformationStrategy : uint8_t
{
	EGroupTopologyDeformationStrategy__Linear                                        = 0,
	EGroupTopologyDeformationStrategy__Laplacian                                     = 1,
	EGroupTopologyDeformationStrategy__EGroupTopologyDeformationStrategy_MAX         = 2
};

/// Enum /Script/MeshModelingToolsExp.EWeightScheme
/// Size: 0x08
enum class EWeightScheme : uint32_t
{
	EWeightScheme__Uniform                                                           = 0,
	EWeightScheme__Umbrella                                                          = 1,
	EWeightScheme__Valence                                                           = 2,
	EWeightScheme__MeanValue                                                         = 3,
	EWeightScheme__Cotangent                                                         = 4,
	EWeightScheme__ClampedCotangent                                                  = 5,
	EWeightScheme__IDTCotangent                                                      = 6,
	EWeightScheme__EWeightScheme_MAX                                                 = 7
};

/// Enum /Script/MeshModelingToolsExp.EQuickTransformerMode
/// Size: 0x03
enum class EQuickTransformerMode : uint8_t
{
	EQuickTransformerMode__AxisTranslation                                           = 0,
	EQuickTransformerMode__AxisRotation                                              = 1,
	EQuickTransformerMode__EQuickTransformerMode_MAX                                 = 2
};

/// Enum /Script/MeshModelingToolsExp.EDisplaceMeshToolDisplaceType
/// Size: 0x06
enum class EDisplaceMeshToolDisplaceType : uint8_t
{
	EDisplaceMeshToolDisplaceType__Constant                                          = 0,
	EDisplaceMeshToolDisplaceType__DisplacementMap                                   = 1,
	EDisplaceMeshToolDisplaceType__RandomNoise                                       = 2,
	EDisplaceMeshToolDisplaceType__PerlinNoise                                       = 3,
	EDisplaceMeshToolDisplaceType__SineWave                                          = 4,
	EDisplaceMeshToolDisplaceType__EDisplaceMeshToolDisplaceType_MAX                 = 5
};

/// Enum /Script/MeshModelingToolsExp.EDisplaceMeshToolSubdivisionType
/// Size: 0x03
enum class EDisplaceMeshToolSubdivisionType : uint8_t
{
	EDisplaceMeshToolSubdivisionType__Flat                                           = 0,
	EDisplaceMeshToolSubdivisionType__PNTriangles                                    = 1,
	EDisplaceMeshToolSubdivisionType__EDisplaceMeshToolSubdivisionType_MAX           = 2
};

/// Enum /Script/MeshModelingToolsExp.EDisplaceMeshToolTriangleSelectionType
/// Size: 0x03
enum class EDisplaceMeshToolTriangleSelectionType : uint8_t
{
	EDisplaceMeshToolTriangleSelectionType__None                                     = 0,
	EDisplaceMeshToolTriangleSelectionType__Material                                 = 1,
	EDisplaceMeshToolTriangleSelectionType__EDisplaceMeshToolTriangleSelectionType_MAX = 2
};

/// Enum /Script/MeshModelingToolsExp.EDisplaceMeshToolChannelType
/// Size: 0x05
enum class EDisplaceMeshToolChannelType : uint8_t
{
	EDisplaceMeshToolChannelType__Red                                                = 0,
	EDisplaceMeshToolChannelType__Green                                              = 1,
	EDisplaceMeshToolChannelType__Blue                                               = 2,
	EDisplaceMeshToolChannelType__Alpha                                              = 3,
	EDisplaceMeshToolChannelType__EDisplaceMeshToolChannelType_MAX                   = 4
};

/// Enum /Script/MeshModelingToolsExp.EDrawPolyPathWidthMode
/// Size: 0x03
enum class EDrawPolyPathWidthMode : uint32_t
{
	EDrawPolyPathWidthMode__Fixed                                                    = 0,
	EDrawPolyPathWidthMode__Interactive                                              = 1,
	EDrawPolyPathWidthMode__EDrawPolyPathWidthMode_MAX                               = 2
};

/// Enum /Script/MeshModelingToolsExp.EDrawPolyPathRadiusMode
/// Size: 0x03
enum class EDrawPolyPathRadiusMode : uint32_t
{
	EDrawPolyPathRadiusMode__Fixed                                                   = 0,
	EDrawPolyPathRadiusMode__Interactive                                             = 1,
	EDrawPolyPathRadiusMode__EDrawPolyPathRadiusMode_MAX                             = 2
};

/// Enum /Script/MeshModelingToolsExp.EDrawPolyPathExtrudeMode
/// Size: 0x06
enum class EDrawPolyPathExtrudeMode : uint32_t
{
	EDrawPolyPathExtrudeMode__Flat                                                   = 0,
	EDrawPolyPathExtrudeMode__Fixed                                                  = 1,
	EDrawPolyPathExtrudeMode__Interactive                                            = 2,
	EDrawPolyPathExtrudeMode__RampFixed                                              = 3,
	EDrawPolyPathExtrudeMode__RampInteractive                                        = 4,
	EDrawPolyPathExtrudeMode__EDrawPolyPathExtrudeMode_MAX                           = 5
};

/// Enum /Script/MeshModelingToolsExp.EDrawPolyPathExtrudeDirection
/// Size: 0x08
enum class EDrawPolyPathExtrudeDirection : uint32_t
{
	EDrawPolyPathExtrudeDirection__SelectionNormal                                   = 0,
	EDrawPolyPathExtrudeDirection__WorldX                                            = 1,
	EDrawPolyPathExtrudeDirection__WorldY                                            = 2,
	EDrawPolyPathExtrudeDirection__WorldZ                                            = 3,
	EDrawPolyPathExtrudeDirection__LocalX                                            = 4,
	EDrawPolyPathExtrudeDirection__LocalY                                            = 5,
	EDrawPolyPathExtrudeDirection__LocalZ                                            = 6,
	EDrawPolyPathExtrudeDirection__EDrawPolyPathExtrudeDirection_MAX                 = 7
};

/// Enum /Script/MeshModelingToolsExp.EDynamicMeshSculptBrushType
/// Size: 0x18
enum class EDynamicMeshSculptBrushType : uint8_t
{
	EDynamicMeshSculptBrushType__Move                                                = 0,
	EDynamicMeshSculptBrushType__PullKelvin                                          = 1,
	EDynamicMeshSculptBrushType__PullSharpKelvin                                     = 2,
	EDynamicMeshSculptBrushType__Smooth                                              = 3,
	EDynamicMeshSculptBrushType__Offset                                              = 4,
	EDynamicMeshSculptBrushType__SculptView                                          = 5,
	EDynamicMeshSculptBrushType__SculptMax                                           = 6,
	EDynamicMeshSculptBrushType__Inflate                                             = 7,
	EDynamicMeshSculptBrushType__ScaleKelvin                                         = 8,
	EDynamicMeshSculptBrushType__Pinch                                               = 9,
	EDynamicMeshSculptBrushType__TwistKelvin                                         = 10,
	EDynamicMeshSculptBrushType__Flatten                                             = 11,
	EDynamicMeshSculptBrushType__Plane                                               = 12,
	EDynamicMeshSculptBrushType__PlaneViewAligned                                    = 13,
	EDynamicMeshSculptBrushType__FixedPlane                                          = 14,
	EDynamicMeshSculptBrushType__Resample                                            = 15,
	EDynamicMeshSculptBrushType__LastValue                                           = 16,
	EDynamicMeshSculptBrushType__EDynamicMeshSculptBrushType_MAX                     = 17
};

/// Enum /Script/MeshModelingToolsExp.EEditPivotSnapDragRotationMode
/// Size: 0x05
enum class EEditPivotSnapDragRotationMode : uint8_t
{
	EEditPivotSnapDragRotationMode__Ignore                                           = 0,
	EEditPivotSnapDragRotationMode__Align                                            = 1,
	EEditPivotSnapDragRotationMode__AlignFlipped                                     = 2,
	EEditPivotSnapDragRotationMode__LastValue                                        = 3,
	EEditPivotSnapDragRotationMode__EEditPivotSnapDragRotationMode_MAX               = 4
};

/// Enum /Script/MeshModelingToolsExp.EEditPivotToolActions
/// Size: 0x10
enum class EEditPivotToolActions : uint8_t
{
	EEditPivotToolActions__NoAction                                                  = 0,
	EEditPivotToolActions__Center                                                    = 1,
	EEditPivotToolActions__Bottom                                                    = 2,
	EEditPivotToolActions__Top                                                       = 3,
	EEditPivotToolActions__Left                                                      = 4,
	EEditPivotToolActions__Right                                                     = 5,
	EEditPivotToolActions__Front                                                     = 6,
	EEditPivotToolActions__Back                                                      = 7,
	EEditPivotToolActions__WorldOrigin                                               = 8,
	EEditPivotToolActions__EEditPivotToolActions_MAX                                 = 9
};

/// Enum /Script/MeshModelingToolsExp.EHoleFillToolActions
/// Size: 0x04
enum class EHoleFillToolActions : uint8_t
{
	EHoleFillToolActions__NoAction                                                   = 0,
	EHoleFillToolActions__SelectAll                                                  = 1,
	EHoleFillToolActions__ClearSelection                                             = 2,
	EHoleFillToolActions__EHoleFillToolActions_MAX                                   = 3
};

/// Enum /Script/MeshModelingToolsExp.ELatticeInterpolationType
/// Size: 0x03
enum class ELatticeInterpolationType : uint8_t
{
	ELatticeInterpolationType__Linear                                                = 0,
	ELatticeInterpolationType__Cubic                                                 = 1,
	ELatticeInterpolationType__ELatticeInterpolationType_MAX                         = 2
};

/// Enum /Script/MeshModelingToolsExp.ELatticeDeformerToolAction
/// Size: 0x04
enum class ELatticeDeformerToolAction : uint8_t
{
	ELatticeDeformerToolAction__NoAction                                             = 0,
	ELatticeDeformerToolAction__Constrain                                            = 1,
	ELatticeDeformerToolAction__ClearConstraints                                     = 2,
	ELatticeDeformerToolAction__ELatticeDeformerToolAction_MAX                       = 3
};

/// Enum /Script/MeshModelingToolsExp.EBrushActionMode
/// Size: 0x03
enum class EBrushActionMode : uint32_t
{
	EBrushActionMode__Paint                                                          = 0,
	EBrushActionMode__FloodFill                                                      = 1,
	EBrushActionMode__EBrushActionMode_MAX                                           = 2
};

/// Enum /Script/MeshModelingToolsExp.EMeshAttributePaintToolActions
/// Size: 0x02
enum class EMeshAttributePaintToolActions : uint8_t
{
	EMeshAttributePaintToolActions__NoAction                                         = 0,
	EMeshAttributePaintToolActions__EMeshAttributePaintToolActions_MAX               = 1
};

/// Enum /Script/MeshModelingToolsExp.EMeshGroupPaintInteractionType
/// Size: 0x06
enum class EMeshGroupPaintInteractionType : uint8_t
{
	EMeshGroupPaintInteractionType__Brush                                            = 0,
	EMeshGroupPaintInteractionType__Fill                                             = 1,
	EMeshGroupPaintInteractionType__GroupFill                                        = 2,
	EMeshGroupPaintInteractionType__PolyLasso                                        = 3,
	EMeshGroupPaintInteractionType__LastValue                                        = 4,
	EMeshGroupPaintInteractionType__EMeshGroupPaintInteractionType_MAX               = 5
};

/// Enum /Script/MeshModelingToolsExp.EMeshGroupPaintBrushType
/// Size: 0x04
enum class EMeshGroupPaintBrushType : uint8_t
{
	EMeshGroupPaintBrushType__Paint                                                  = 0,
	EMeshGroupPaintBrushType__Erase                                                  = 1,
	EMeshGroupPaintBrushType__LastValue                                              = 2,
	EMeshGroupPaintBrushType__EMeshGroupPaintBrushType_MAX                           = 3
};

/// Enum /Script/MeshModelingToolsExp.EMeshGroupPaintBrushAreaType
/// Size: 0x03
enum class EMeshGroupPaintBrushAreaType : uint8_t
{
	EMeshGroupPaintBrushAreaType__Connected                                          = 0,
	EMeshGroupPaintBrushAreaType__Volumetric                                         = 1,
	EMeshGroupPaintBrushAreaType__EMeshGroupPaintBrushAreaType_MAX                   = 2
};

/// Enum /Script/MeshModelingToolsExp.EMeshGroupPaintVisibilityType
/// Size: 0x04
enum class EMeshGroupPaintVisibilityType : uint8_t
{
	EMeshGroupPaintVisibilityType__None                                              = 0,
	EMeshGroupPaintVisibilityType__FrontFacing                                       = 1,
	EMeshGroupPaintVisibilityType__Unoccluded                                        = 2,
	EMeshGroupPaintVisibilityType__EMeshGroupPaintVisibilityType_MAX                 = 3
};

/// Enum /Script/MeshModelingToolsExp.EMeshGroupPaintToolActions
/// Size: 0x10
enum class EMeshGroupPaintToolActions : uint8_t
{
	EMeshGroupPaintToolActions__NoAction                                             = 0,
	EMeshGroupPaintToolActions__ClearFrozen                                          = 1,
	EMeshGroupPaintToolActions__FreezeCurrent                                        = 2,
	EMeshGroupPaintToolActions__FreezeOthers                                         = 3,
	EMeshGroupPaintToolActions__GrowCurrent                                          = 4,
	EMeshGroupPaintToolActions__ShrinkCurrent                                        = 5,
	EMeshGroupPaintToolActions__ClearCurrent                                         = 6,
	EMeshGroupPaintToolActions__FloodFillCurrent                                     = 7,
	EMeshGroupPaintToolActions__ClearAll                                             = 8,
	EMeshGroupPaintToolActions__EMeshGroupPaintToolActions_MAX                       = 9
};

/// Enum /Script/MeshModelingToolsExp.EMeshInspectorToolDrawIndexMode
/// Size: 0x06
enum class EMeshInspectorToolDrawIndexMode : uint8_t
{
	EMeshInspectorToolDrawIndexMode__None                                            = 0,
	EMeshInspectorToolDrawIndexMode__VertexID                                        = 1,
	EMeshInspectorToolDrawIndexMode__TriangleID                                      = 2,
	EMeshInspectorToolDrawIndexMode__GroupID                                         = 3,
	EMeshInspectorToolDrawIndexMode__EdgeID                                          = 4,
	EMeshInspectorToolDrawIndexMode__EMeshInspectorToolDrawIndexMode_MAX             = 5
};

/// Enum /Script/MeshModelingToolsExp.EMeshInspectorMaterialMode
/// Size: 0x10
enum class EMeshInspectorMaterialMode : uint8_t
{
	EMeshInspectorMaterialMode__Original                                             = 0,
	EMeshInspectorMaterialMode__FlatShaded                                           = 1,
	EMeshInspectorMaterialMode__Grey                                                 = 2,
	EMeshInspectorMaterialMode__Transparent                                          = 3,
	EMeshInspectorMaterialMode__TangentNormal                                        = 4,
	EMeshInspectorMaterialMode__VertexColor                                          = 5,
	EMeshInspectorMaterialMode__GroupColor                                           = 6,
	EMeshInspectorMaterialMode__Checkerboard                                         = 7,
	EMeshInspectorMaterialMode__Override                                             = 8,
	EMeshInspectorMaterialMode__EMeshInspectorMaterialMode_MAX                       = 9
};

/// Enum /Script/MeshModelingToolsExp.EMeshSelectionToolActions
/// Size: 0x21
enum class EMeshSelectionToolActions : uint8_t
{
	EMeshSelectionToolActions__NoAction                                              = 0,
	EMeshSelectionToolActions__SelectAll                                             = 1,
	EMeshSelectionToolActions__SelectAllByMaterial                                   = 2,
	EMeshSelectionToolActions__ClearSelection                                        = 3,
	EMeshSelectionToolActions__InvertSelection                                       = 4,
	EMeshSelectionToolActions__GrowSelection                                         = 5,
	EMeshSelectionToolActions__ShrinkSelection                                       = 6,
	EMeshSelectionToolActions__ExpandToConnected                                     = 7,
	EMeshSelectionToolActions__SelectLargestComponentByTriCount                      = 8,
	EMeshSelectionToolActions__SelectLargestComponentByArea                          = 9,
	EMeshSelectionToolActions__OptimizeSelection                                     = 10,
	EMeshSelectionToolActions__DeleteSelected                                        = 11,
	EMeshSelectionToolActions__DisconnectSelected                                    = 12,
	EMeshSelectionToolActions__SeparateSelected                                      = 13,
	EMeshSelectionToolActions__DuplicateSelected                                     = 14,
	EMeshSelectionToolActions__FlipSelected                                          = 15,
	EMeshSelectionToolActions__CreateGroup                                           = 16,
	EMeshSelectionToolActions__SmoothBoundary                                        = 17,
	EMeshSelectionToolActions__CycleSelectionMode                                    = 18,
	EMeshSelectionToolActions__CycleViewMode                                         = 19,
	EMeshSelectionToolActions__EMeshSelectionToolActions_MAX                         = 20
};

/// Enum /Script/MeshModelingToolsExp.EMeshSelectionToolPrimaryMode
/// Size: 0x11
enum class EMeshSelectionToolPrimaryMode : uint32_t
{
	EMeshSelectionToolPrimaryMode__Brush                                             = 0,
	EMeshSelectionToolPrimaryMode__VolumetricBrush                                   = 1,
	EMeshSelectionToolPrimaryMode__AngleFiltered                                     = 2,
	EMeshSelectionToolPrimaryMode__Visible                                           = 3,
	EMeshSelectionToolPrimaryMode__AllConnected                                      = 4,
	EMeshSelectionToolPrimaryMode__AllInGroup                                        = 5,
	EMeshSelectionToolPrimaryMode__ByMaterial                                        = 6,
	EMeshSelectionToolPrimaryMode__ByMaterialAll                                     = 7,
	EMeshSelectionToolPrimaryMode__ByUVIsland                                        = 8,
	EMeshSelectionToolPrimaryMode__AllWithinAngle                                    = 9,
	EMeshSelectionToolPrimaryMode__EMeshSelectionToolPrimaryMode_MAX                 = 10
};

/// Enum /Script/MeshModelingToolsExp.EMeshFacesColorMode
/// Size: 0x05
enum class EMeshFacesColorMode : uint32_t
{
	EMeshFacesColorMode__None                                                        = 0,
	EMeshFacesColorMode__ByGroup                                                     = 1,
	EMeshFacesColorMode__ByMaterialID                                                = 2,
	EMeshFacesColorMode__ByUVIsland                                                  = 3,
	EMeshFacesColorMode__EMeshFacesColorMode_MAX                                     = 4
};

/// Enum /Script/MeshModelingToolsExp.ENonlinearOperationType
/// Size: 0x04
enum class ENonlinearOperationType : uint8_t
{
	ENonlinearOperationType__Bend                                                    = 0,
	ENonlinearOperationType__Flare                                                   = 1,
	ENonlinearOperationType__Twist                                                   = 2,
	ENonlinearOperationType__ENonlinearOperationType_MAX                             = 3
};

/// Enum /Script/MeshModelingToolsExp.EFlareProfileType
/// Size: 0x04
enum class EFlareProfileType : uint8_t
{
	EFlareProfileType__SinMode                                                       = 0,
	EFlareProfileType__SinSquaredMode                                                = 1,
	EFlareProfileType__TriangleMode                                                  = 2,
	EFlareProfileType__EFlareProfileType_MAX                                         = 3
};

/// Enum /Script/MeshModelingToolsExp.EMeshSpaceDeformerToolAction
/// Size: 0x03
enum class EMeshSpaceDeformerToolAction : uint8_t
{
	EMeshSpaceDeformerToolAction__NoAction                                           = 0,
	EMeshSpaceDeformerToolAction__ShiftToCenter                                      = 1,
	EMeshSpaceDeformerToolAction__EMeshSpaceDeformerToolAction_MAX                   = 2
};

/// Enum /Script/MeshModelingToolsExp.EMeshVertexPaintInteractionType
/// Size: 0x07
enum class EMeshVertexPaintInteractionType : uint8_t
{
	EMeshVertexPaintInteractionType__Brush                                           = 0,
	EMeshVertexPaintInteractionType__TriFill                                         = 1,
	EMeshVertexPaintInteractionType__Fill                                            = 2,
	EMeshVertexPaintInteractionType__GroupFill                                       = 3,
	EMeshVertexPaintInteractionType__PolyLasso                                       = 4,
	EMeshVertexPaintInteractionType__LastValue                                       = 5,
	EMeshVertexPaintInteractionType__EMeshVertexPaintInteractionType_MAX             = 6
};

/// Enum /Script/MeshModelingToolsExp.EMeshVertexPaintColorChannel
/// Size: 0x05
enum class EMeshVertexPaintColorChannel : uint8_t
{
	EMeshVertexPaintColorChannel__Red                                                = 0,
	EMeshVertexPaintColorChannel__Green                                              = 1,
	EMeshVertexPaintColorChannel__Blue                                               = 2,
	EMeshVertexPaintColorChannel__Alpha                                              = 3,
	EMeshVertexPaintColorChannel__EMeshVertexPaintColorChannel_MAX                   = 4
};

/// Enum /Script/MeshModelingToolsExp.EMeshVertexPaintColorBlendMode
/// Size: 0x04
enum class EMeshVertexPaintColorBlendMode : uint8_t
{
	EMeshVertexPaintColorBlendMode__Lerp                                             = 0,
	EMeshVertexPaintColorBlendMode__Mix                                              = 1,
	EMeshVertexPaintColorBlendMode__Multiply                                         = 2,
	EMeshVertexPaintColorBlendMode__EMeshVertexPaintColorBlendMode_MAX               = 3
};

/// Enum /Script/MeshModelingToolsExp.EMeshVertexPaintBrushType
/// Size: 0x06
enum class EMeshVertexPaintBrushType : uint8_t
{
	EMeshVertexPaintBrushType__Paint                                                 = 0,
	EMeshVertexPaintBrushType__Erase                                                 = 1,
	EMeshVertexPaintBrushType__Soften                                                = 2,
	EMeshVertexPaintBrushType__Smooth                                                = 3,
	EMeshVertexPaintBrushType__LastValue                                             = 4,
	EMeshVertexPaintBrushType__EMeshVertexPaintBrushType_MAX                         = 5
};

/// Enum /Script/MeshModelingToolsExp.EMeshVertexPaintSecondaryActionType
/// Size: 0x04
enum class EMeshVertexPaintSecondaryActionType : uint8_t
{
	EMeshVertexPaintSecondaryActionType__Erase                                       = 0,
	EMeshVertexPaintSecondaryActionType__Soften                                      = 1,
	EMeshVertexPaintSecondaryActionType__Smooth                                      = 2,
	EMeshVertexPaintSecondaryActionType__EMeshVertexPaintSecondaryActionType_MAX     = 3
};

/// Enum /Script/MeshModelingToolsExp.EMeshVertexPaintBrushAreaType
/// Size: 0x03
enum class EMeshVertexPaintBrushAreaType : uint8_t
{
	EMeshVertexPaintBrushAreaType__Connected                                         = 0,
	EMeshVertexPaintBrushAreaType__Volumetric                                        = 1,
	EMeshVertexPaintBrushAreaType__EMeshVertexPaintBrushAreaType_MAX                 = 2
};

/// Enum /Script/MeshModelingToolsExp.EMeshVertexPaintVisibilityType
/// Size: 0x04
enum class EMeshVertexPaintVisibilityType : uint8_t
{
	EMeshVertexPaintVisibilityType__None                                             = 0,
	EMeshVertexPaintVisibilityType__FrontFacing                                      = 1,
	EMeshVertexPaintVisibilityType__Unoccluded                                       = 2,
	EMeshVertexPaintVisibilityType__EMeshVertexPaintVisibilityType_MAX               = 3
};

/// Enum /Script/MeshModelingToolsExp.EMeshVertexPaintMaterialMode
/// Size: 0x04
enum class EMeshVertexPaintMaterialMode : uint8_t
{
	EMeshVertexPaintMaterialMode__LitVertexColor                                     = 0,
	EMeshVertexPaintMaterialMode__UnlitVertexColor                                   = 1,
	EMeshVertexPaintMaterialMode__OriginalMaterial                                   = 2,
	EMeshVertexPaintMaterialMode__EMeshVertexPaintMaterialMode_MAX                   = 3
};

/// Enum /Script/MeshModelingToolsExp.EMeshVertexPaintToolActions
/// Size: 0x07
enum class EMeshVertexPaintToolActions : uint8_t
{
	EMeshVertexPaintToolActions__NoAction                                            = 0,
	EMeshVertexPaintToolActions__PaintAll                                            = 1,
	EMeshVertexPaintToolActions__EraseAll                                            = 2,
	EMeshVertexPaintToolActions__FillBlack                                           = 3,
	EMeshVertexPaintToolActions__FillWhite                                           = 4,
	EMeshVertexPaintToolActions__ApplyCurrentUtility                                 = 5,
	EMeshVertexPaintToolActions__EMeshVertexPaintToolActions_MAX                     = 6
};

/// Enum /Script/MeshModelingToolsExp.EMeshVertexPaintToolUtilityOperations
/// Size: 0x09
enum class EMeshVertexPaintToolUtilityOperations : uint32_t
{
	EMeshVertexPaintToolUtilityOperations__BlendAllSeams                             = 0,
	EMeshVertexPaintToolUtilityOperations__FillChannels                              = 1,
	EMeshVertexPaintToolUtilityOperations__InvertChannels                            = 2,
	EMeshVertexPaintToolUtilityOperations__CopyChannelToChannel                      = 3,
	EMeshVertexPaintToolUtilityOperations__SwapChannels                              = 4,
	EMeshVertexPaintToolUtilityOperations__CopyFromWeightMap                         = 5,
	EMeshVertexPaintToolUtilityOperations__CopyToOtherLODs                           = 6,
	EMeshVertexPaintToolUtilityOperations__CopyToSingleLOD                           = 7,
	EMeshVertexPaintToolUtilityOperations__EMeshVertexPaintToolUtilityOperations_MAX = 8
};

/// Enum /Script/MeshModelingToolsExp.EMeshVertexSculptBrushType
/// Size: 0x18
enum class EMeshVertexSculptBrushType : uint8_t
{
	EMeshVertexSculptBrushType__Move                                                 = 0,
	EMeshVertexSculptBrushType__PullKelvin                                           = 1,
	EMeshVertexSculptBrushType__PullSharpKelvin                                      = 2,
	EMeshVertexSculptBrushType__Smooth                                               = 3,
	EMeshVertexSculptBrushType__SmoothFill                                           = 4,
	EMeshVertexSculptBrushType__Offset                                               = 5,
	EMeshVertexSculptBrushType__SculptView                                           = 6,
	EMeshVertexSculptBrushType__SculptMax                                            = 7,
	EMeshVertexSculptBrushType__Inflate                                              = 8,
	EMeshVertexSculptBrushType__ScaleKelvin                                          = 9,
	EMeshVertexSculptBrushType__Pinch                                                = 10,
	EMeshVertexSculptBrushType__TwistKelvin                                          = 11,
	EMeshVertexSculptBrushType__Flatten                                              = 12,
	EMeshVertexSculptBrushType__Plane                                                = 13,
	EMeshVertexSculptBrushType__PlaneViewAligned                                     = 14,
	EMeshVertexSculptBrushType__FixedPlane                                           = 15,
	EMeshVertexSculptBrushType__LastValue                                            = 16,
	EMeshVertexSculptBrushType__EMeshVertexSculptBrushType_MAX                       = 17
};

/// Enum /Script/MeshModelingToolsExp.EMeshVertexSculptBrushFilterType
/// Size: 0x04
enum class EMeshVertexSculptBrushFilterType : uint8_t
{
	EMeshVertexSculptBrushFilterType__None                                           = 0,
	EMeshVertexSculptBrushFilterType__Component                                      = 1,
	EMeshVertexSculptBrushFilterType__PolyGroup                                      = 2,
	EMeshVertexSculptBrushFilterType__EMeshVertexSculptBrushFilterType_MAX           = 3
};

/// Enum /Script/MeshModelingToolsExp.EMirrorSaveMode
/// Size: 0x03
enum class EMirrorSaveMode : uint8_t
{
	EMirrorSaveMode__InputObjects                                                    = 0,
	EMirrorSaveMode__NewObjects                                                      = 1,
	EMirrorSaveMode__EMirrorSaveMode_MAX                                             = 2
};

/// Enum /Script/MeshModelingToolsExp.EMirrorOperationMode
/// Size: 0x03
enum class EMirrorOperationMode : uint8_t
{
	EMirrorOperationMode__MirrorAndAppend                                            = 0,
	EMirrorOperationMode__MirrorExisting                                             = 1,
	EMirrorOperationMode__EMirrorOperationMode_MAX                                   = 2
};

/// Enum /Script/MeshModelingToolsExp.EMirrorToolAction
/// Size: 0x09
enum class EMirrorToolAction : uint8_t
{
	EMirrorToolAction__NoAction                                                      = 0,
	EMirrorToolAction__ShiftToCenter                                                 = 1,
	EMirrorToolAction__Left                                                          = 2,
	EMirrorToolAction__Right                                                         = 3,
	EMirrorToolAction__Up                                                            = 4,
	EMirrorToolAction__Down                                                          = 5,
	EMirrorToolAction__Forward                                                       = 6,
	EMirrorToolAction__Backward                                                      = 7,
	EMirrorToolAction__EMirrorToolAction_MAX                                         = 8
};

/// Enum /Script/MeshModelingToolsExp.EOffsetMeshToolOffsetType
/// Size: 0x03
enum class EOffsetMeshToolOffsetType : uint8_t
{
	EOffsetMeshToolOffsetType__Iterative                                             = 0,
	EOffsetMeshToolOffsetType__Implicit                                              = 1,
	EOffsetMeshToolOffsetType__EOffsetMeshToolOffsetType_MAX                         = 2
};

/// Enum /Script/MeshModelingToolsExp.ECollisionGeometryMode
/// Size: 0x05
enum class ECollisionGeometryMode : uint32_t
{
	ECollisionGeometryMode__Default                                                  = 0,
	ECollisionGeometryMode__SimpleAndComplex                                         = 1,
	ECollisionGeometryMode__UseSimpleAsComplex                                       = 2,
	ECollisionGeometryMode__UseComplexAsSimple                                       = 3,
	ECollisionGeometryMode__ECollisionGeometryMode_MAX                               = 4
};

/// Enum /Script/MeshModelingToolsExp.EExtractCollisionOutputType
/// Size: 0x03
enum class EExtractCollisionOutputType : uint8_t
{
	EExtractCollisionOutputType__Simple                                              = 0,
	EExtractCollisionOutputType__Complex                                             = 1,
	EExtractCollisionOutputType__EExtractCollisionOutputType_MAX                     = 2
};

/// Enum /Script/MeshModelingToolsExp.ESetCollisionGeometryInputMode
/// Size: 0x05
enum class ESetCollisionGeometryInputMode : uint32_t
{
	ESetCollisionGeometryInputMode__CombineAll                                       = 0,
	ESetCollisionGeometryInputMode__PerInputObject                                   = 1,
	ESetCollisionGeometryInputMode__PerMeshComponent                                 = 2,
	ESetCollisionGeometryInputMode__PerMeshGroup                                     = 3,
	ESetCollisionGeometryInputMode__ESetCollisionGeometryInputMode_MAX               = 4
};

/// Enum /Script/MeshModelingToolsExp.ECollisionGeometryType
/// Size: 0x11
enum class ECollisionGeometryType : uint32_t
{
	ECollisionGeometryType__CopyFromInputs                                           = 0,
	ECollisionGeometryType__AlignedBoxes                                             = 1,
	ECollisionGeometryType__OrientedBoxes                                            = 2,
	ECollisionGeometryType__MinimalSpheres                                           = 3,
	ECollisionGeometryType__Capsules                                                 = 4,
	ECollisionGeometryType__ConvexHulls                                              = 5,
	ECollisionGeometryType__SweptHulls                                               = 6,
	ECollisionGeometryType__LevelSets                                                = 7,
	ECollisionGeometryType__MinVolume                                                = 10,
	ECollisionGeometryType__Empty                                                    = 11,
	ECollisionGeometryType__ECollisionGeometryType_MAX                               = 12
};

/// Enum /Script/MeshModelingToolsExp.EProjectedHullAxis
/// Size: 0x06
enum class EProjectedHullAxis : uint32_t
{
	EProjectedHullAxis__X                                                            = 0,
	EProjectedHullAxis__Y                                                            = 1,
	EProjectedHullAxis__Z                                                            = 2,
	EProjectedHullAxis__SmallestBoxDimension                                         = 3,
	EProjectedHullAxis__SmallestVolume                                               = 4,
	EProjectedHullAxis__EProjectedHullAxis_MAX                                       = 5
};

/// Enum /Script/MeshModelingToolsExp.ESimpleCollisionEditorToolAction
/// Size: 0x08
enum class ESimpleCollisionEditorToolAction : uint8_t
{
	ESimpleCollisionEditorToolAction__NoAction                                       = 0,
	ESimpleCollisionEditorToolAction__AddSphere                                      = 1,
	ESimpleCollisionEditorToolAction__AddBox                                         = 2,
	ESimpleCollisionEditorToolAction__AddCapsule                                     = 3,
	ESimpleCollisionEditorToolAction__Duplicate                                      = 4,
	ESimpleCollisionEditorToolAction__DeleteSelected                                 = 5,
	ESimpleCollisionEditorToolAction__DeleteAll                                      = 6,
	ESimpleCollisionEditorToolAction__ESimpleCollisionEditorToolAction_MAX           = 7
};

/// Enum /Script/MeshModelingToolsExp.EPlaneCutToolActions
/// Size: 0x04
enum class EPlaneCutToolActions : uint8_t
{
	EPlaneCutToolActions__NoAction                                                   = 0,
	EPlaneCutToolActions__Cut                                                        = 1,
	EPlaneCutToolActions__FlipPlane                                                  = 2,
	EPlaneCutToolActions__EPlaneCutToolActions_MAX                                   = 3
};

/// Enum /Script/MeshModelingToolsExp.EOcclusionTriangleSamplingUIMode
/// Size: 0x03
enum class EOcclusionTriangleSamplingUIMode : uint8_t
{
	EOcclusionTriangleSamplingUIMode__Vertices                                       = 0,
	EOcclusionTriangleSamplingUIMode__VerticesAndCentroids                           = 1,
	EOcclusionTriangleSamplingUIMode__EOcclusionTriangleSamplingUIMode_MAX           = 2
};

/// Enum /Script/MeshModelingToolsExp.EOcclusionCalculationUIMode
/// Size: 0x03
enum class EOcclusionCalculationUIMode : uint8_t
{
	EOcclusionCalculationUIMode__GeneralizedWindingNumber                            = 0,
	EOcclusionCalculationUIMode__RaycastOcclusionSamples                             = 1,
	EOcclusionCalculationUIMode__EOcclusionCalculationUIMode_MAX                     = 2
};

/// Enum /Script/MeshModelingToolsExp.EOccludedAction
/// Size: 0x03
enum class EOccludedAction : uint8_t
{
	EOccludedAction__Remove                                                          = 0,
	EOccludedAction__SetNewGroup                                                     = 1,
	EOccludedAction__EOccludedAction_MAX                                             = 2
};

/// Enum /Script/MeshModelingToolsExp.EBrushToolSizeType
/// Size: 0x03
enum class EBrushToolSizeType : uint8_t
{
	EBrushToolSizeType__Adaptive                                                     = 0,
	EBrushToolSizeType__World                                                        = 1,
	EBrushToolSizeType__EBrushToolSizeType_MAX                                       = 2
};

/// Enum /Script/MeshModelingToolsExp.EMeshSculptFalloffType
/// Size: 0x10
enum class EMeshSculptFalloffType : uint8_t
{
	EMeshSculptFalloffType__Smooth                                                   = 0,
	EMeshSculptFalloffType__Linear                                                   = 1,
	EMeshSculptFalloffType__Inverse                                                  = 2,
	EMeshSculptFalloffType__Round                                                    = 3,
	EMeshSculptFalloffType__BoxSmooth                                                = 4,
	EMeshSculptFalloffType__BoxLinear                                                = 5,
	EMeshSculptFalloffType__BoxInverse                                               = 6,
	EMeshSculptFalloffType__BoxRound                                                 = 7,
	EMeshSculptFalloffType__LastValue                                                = 8,
	EMeshSculptFalloffType__EMeshSculptFalloffType_MAX                               = 9
};

/// Enum /Script/MeshModelingToolsExp.ESmoothMeshToolSmoothType
/// Size: 0x04
enum class ESmoothMeshToolSmoothType : uint8_t
{
	ESmoothMeshToolSmoothType__Iterative                                             = 0,
	ESmoothMeshToolSmoothType__Implicit                                              = 1,
	ESmoothMeshToolSmoothType__Diffusion                                             = 2,
	ESmoothMeshToolSmoothType__ESmoothMeshToolSmoothType_MAX                         = 3
};

/// Enum /Script/MeshModelingToolsExp.ETransformMeshesTransformMode
/// Size: 0x05
enum class ETransformMeshesTransformMode : uint8_t
{
	ETransformMeshesTransformMode__SharedGizmo                                       = 0,
	ETransformMeshesTransformMode__SharedGizmoLocal                                  = 1,
	ETransformMeshesTransformMode__PerObjectGizmo                                    = 2,
	ETransformMeshesTransformMode__LastValue                                         = 3,
	ETransformMeshesTransformMode__ETransformMeshesTransformMode_MAX                 = 4
};

/// Enum /Script/MeshModelingToolsExp.ETransformMeshesSnapDragSource
/// Size: 0x04
enum class ETransformMeshesSnapDragSource : uint8_t
{
	ETransformMeshesSnapDragSource__ClickPoint                                       = 0,
	ETransformMeshesSnapDragSource__Pivot                                            = 1,
	ETransformMeshesSnapDragSource__LastValue                                        = 2,
	ETransformMeshesSnapDragSource__ETransformMeshesSnapDragSource_MAX               = 3
};

/// Enum /Script/MeshModelingToolsExp.ETransformMeshesSnapDragRotationMode
/// Size: 0x05
enum class ETransformMeshesSnapDragRotationMode : uint8_t
{
	ETransformMeshesSnapDragRotationMode__Ignore                                     = 0,
	ETransformMeshesSnapDragRotationMode__Align                                      = 1,
	ETransformMeshesSnapDragRotationMode__AlignFlipped                               = 2,
	ETransformMeshesSnapDragRotationMode__LastValue                                  = 3,
	ETransformMeshesSnapDragRotationMode__ETransformMeshesSnapDragRotationMode_MAX   = 4
};

/// Enum /Script/MeshModelingToolsExp.EVoxelBlendOperation
/// Size: 0x03
enum class EVoxelBlendOperation : uint8_t
{
	EVoxelBlendOperation__Union                                                      = 0,
	EVoxelBlendOperation__Subtract                                                   = 1,
	EVoxelBlendOperation__EVoxelBlendOperation_MAX                                   = 2
};

/// Enum /Script/MeshModelingToolsExp.EWeldMeshEdgesAttributeUIMode
/// Size: 0x04
enum class EWeldMeshEdgesAttributeUIMode : uint8_t
{
	EWeldMeshEdgesAttributeUIMode__None                                              = 0,
	EWeldMeshEdgesAttributeUIMode__OnWeldedMeshEdgesOnly                             = 1,
	EWeldMeshEdgesAttributeUIMode__OnFullMesh                                        = 2,
	EWeldMeshEdgesAttributeUIMode__EWeldMeshEdgesAttributeUIMode_MAX                 = 3
};

/// Class /Script/MeshModelingToolsExp.BakeInputMeshProperties
/// Size: 0x0098 (0x0000A8 - 0x000140)
class UBakeInputMeshProperties : public UInteractiveToolPropertySet
{ 
public:
	class UStaticMesh*                                 TargetStaticMesh;                                           // 0x00A8   (0x0008)  
	class USkeletalMesh*                               TargetSkeletalMesh;                                         // 0x00B0   (0x0008)  
	class AActor*                                      TargetDynamicMesh;                                          // 0x00B8   (0x0008)  
	SDK_UNDEFINED(16,14991) /* FString */              __um(TargetUVLayer);                                        // 0x00C0   (0x0010)  
	bool                                               bHasTargetUVLayer;                                          // 0x00D0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x00D1   (0x0007)  MISSED
	class UStaticMesh*                                 SourceStaticMesh;                                           // 0x00D8   (0x0008)  
	class USkeletalMesh*                               SourceSkeletalMesh;                                         // 0x00E0   (0x0008)  
	class AActor*                                      SourceDynamicMesh;                                          // 0x00E8   (0x0008)  
	bool                                               bHideSourceMesh;                                            // 0x00F0   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x00F1   (0x0007)  MISSED
	class UTexture2D*                                  SourceNormalMap;                                            // 0x00F8   (0x0008)  
	SDK_UNDEFINED(16,14992) /* FString */              __um(SourceNormalMapUVLayer);                               // 0x0100   (0x0010)  
	EBakeNormalSpace                                   SourceNormalSpace;                                          // 0x0110   (0x0004)  
	bool                                               bHasSourceNormalMap;                                        // 0x0114   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0115   (0x0003)  MISSED
	float                                              ProjectionDistance;                                         // 0x0118   (0x0004)  
	bool                                               bProjectionInWorldSpace;                                    // 0x011C   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x011D   (0x0003)  MISSED
	SDK_UNDEFINED(16,14993) /* TArray<FString> */      __um(TargetUVLayerNamesList);                               // 0x0120   (0x0010)  
	SDK_UNDEFINED(16,14994) /* TArray<FString> */      __um(SourceUVLayerNamesList);                               // 0x0130   (0x0010)  


	/// Functions
	// Function /Script/MeshModelingToolsExp.BakeInputMeshProperties.GetTargetUVLayerNamesFunc
	// TArray<FString> GetTargetUVLayerNamesFunc();                                                                          // [0xb2dcf24] Final|Native|Public|Const 
	// Function /Script/MeshModelingToolsExp.BakeInputMeshProperties.GetSourceUVLayerNamesFunc
	// TArray<FString> GetSourceUVLayerNamesFunc();                                                                          // [0xb2dcf08] Final|Native|Public|Const 
};

/// Class /Script/MeshModelingToolsExp.BakeNormalMapToolProperties
/// Size: 0x0000 (0x0000A8 - 0x0000A8)
class UBakeNormalMapToolProperties : public UInteractiveToolPropertySet
{ 
public:
};

/// Class /Script/MeshModelingToolsExp.BakeOcclusionMapToolProperties
/// Size: 0x0010 (0x0000A8 - 0x0000B8)
class UBakeOcclusionMapToolProperties : public UInteractiveToolPropertySet
{ 
public:
	int32_t                                            OcclusionRays;                                              // 0x00A8   (0x0004)  
	float                                              MaxDistance;                                                // 0x00AC   (0x0004)  
	float                                              SpreadAngle;                                                // 0x00B0   (0x0004)  
	float                                              BiasAngle;                                                  // 0x00B4   (0x0004)  
};

/// Class /Script/MeshModelingToolsExp.BakeCurvatureMapToolProperties
/// Size: 0x0018 (0x0000A8 - 0x0000C0)
class UBakeCurvatureMapToolProperties : public UInteractiveToolPropertySet
{ 
public:
	EBakeCurvatureTypeMode                             CurvatureType;                                              // 0x00A8   (0x0004)  
	EBakeCurvatureColorMode                            ColorMapping;                                               // 0x00AC   (0x0004)  
	float                                              ColorRangeMultiplier;                                       // 0x00B0   (0x0004)  
	float                                              MinRangeMultiplier;                                         // 0x00B4   (0x0004)  
	EBakeCurvatureClampMode                            Clamping;                                                   // 0x00B8   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00BC   (0x0004)  MISSED
};

/// Class /Script/MeshModelingToolsExp.BakeTexture2DProperties
/// Size: 0x0028 (0x0000A8 - 0x0000D0)
class UBakeTexture2DProperties : public UInteractiveToolPropertySet
{ 
public:
	class UTexture2D*                                  SourceTexture;                                              // 0x00A8   (0x0008)  
	SDK_UNDEFINED(16,14995) /* FString */              __um(UVLayer);                                              // 0x00B0   (0x0010)  
	SDK_UNDEFINED(16,14996) /* TArray<FString> */      __um(UVLayerNamesList);                                     // 0x00C0   (0x0010)  


	/// Functions
	// Function /Script/MeshModelingToolsExp.BakeTexture2DProperties.GetUVLayerNamesFunc
	// TArray<FString> GetUVLayerNamesFunc();                                                                                // [0xae0b120] Final|Native|Public|Const 
};

/// Class /Script/MeshModelingToolsExp.BakeMultiTexture2DProperties
/// Size: 0x0040 (0x0000A8 - 0x0000E8)
class UBakeMultiTexture2DProperties : public UInteractiveToolPropertySet
{ 
public:
	TArray<class UTexture2D*>                          MaterialIDSourceTextures;                                   // 0x00A8   (0x0010)  
	SDK_UNDEFINED(16,14997) /* FString */              __um(UVLayer);                                              // 0x00B8   (0x0010)  
	SDK_UNDEFINED(16,14998) /* TArray<FString> */      __um(UVLayerNamesList);                                     // 0x00C8   (0x0010)  
	TArray<class UTexture2D*>                          AllSourceTextures;                                          // 0x00D8   (0x0010)  


	/// Functions
	// Function /Script/MeshModelingToolsExp.BakeMultiTexture2DProperties.GetUVLayerNamesFunc
	// TArray<FString> GetUVLayerNamesFunc();                                                                                // [0xb0361ec] Final|Native|Public|Const 
};

/// Class /Script/MeshModelingToolsExp.BakeVisualizationProperties
/// Size: 0x0010 (0x0000A8 - 0x0000B8)
class UBakeVisualizationProperties : public UInteractiveToolPropertySet
{ 
public:
	bool                                               bPreviewAsMaterial;                                         // 0x00A8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00A9   (0x0003)  MISSED
	float                                              Brightness;                                                 // 0x00AC   (0x0004)  
	float                                              AOMultiplier;                                               // 0x00B0   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x00B4   (0x0004)  MISSED
};

/// Class /Script/MeshModelingToolsExp.ExtrudeMeshSelectionToolBuilder
/// Size: 0x0000 (0x000028 - 0x000028)
class UExtrudeMeshSelectionToolBuilder : public USingleTargetWithSelectionToolBuilder
{ 
public:
};

/// Class /Script/MeshModelingToolsExp.ExtrudeMeshSelectionToolProperties
/// Size: 0x0048 (0x0000A8 - 0x0000F0)
class UExtrudeMeshSelectionToolProperties : public UInteractiveToolPropertySet
{ 
public:
	EExtrudeMeshSelectionInteractionMode               InputMode;                                                  // 0x00A8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x00A9   (0x0007)  MISSED
	double                                             ExtrudeDistance;                                            // 0x00B0   (0x0008)  
	EExtrudeMeshSelectionRegionModifierMode            RegionMode;                                                 // 0x00B8   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x00B9   (0x0003)  MISSED
	int32_t                                            NumSubdivisions;                                            // 0x00BC   (0x0004)  
	double                                             CreaseAngle;                                                // 0x00C0   (0x0008)  
	double                                             RaycastMaxDistance;                                         // 0x00C8   (0x0008)  
	bool                                               bShellsToSolids;                                            // 0x00D0   (0x0001)  
	bool                                               bInferGroupsFromNbrs;                                       // 0x00D1   (0x0001)  
	bool                                               bGroupPerSubdivision;                                       // 0x00D2   (0x0001)  
	bool                                               bReplaceSelectionGroups;                                    // 0x00D3   (0x0001)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x00D4   (0x0004)  MISSED
	double                                             UVScale;                                                    // 0x00D8   (0x0008)  
	bool                                               bUVIslandPerGroup;                                          // 0x00E0   (0x0001)  
	bool                                               bInferMaterialID;                                           // 0x00E1   (0x0001)  
	unsigned char                                      UnknownData03_5[0x2];                                       // 0x00E2   (0x0002)  MISSED
	int32_t                                            SetMaterialID;                                              // 0x00E4   (0x0004)  
	bool                                               bShowInputMaterials;                                        // 0x00E8   (0x0001)  
	unsigned char                                      UnknownData04_6[0x7];                                       // 0x00E9   (0x0007)  MISSED
};

/// Class /Script/MeshModelingToolsExp.ExtrudeMeshSelectionTool
/// Size: 0x0748 (0x000128 - 0x000870)
class UExtrudeMeshSelectionTool : public USingleTargetWithSelectionTool
{ 
public:
	class UExtrudeMeshSelectionToolProperties*         ExtrudeProperties;                                          // 0x0128   (0x0008)  
	unsigned char                                      UnknownData00_5[0x720];                                     // 0x0130   (0x0720)  MISSED
	class UPreviewMesh*                                SourcePreview;                                              // 0x0850   (0x0008)  
	class UMeshOpPreviewWithBackgroundCompute*         EditCompute;                                                // 0x0858   (0x0008)  
	class UCombinedTransformGizmo*                     TransformGizmo;                                             // 0x0860   (0x0008)  
	class UTransformProxy*                             TransformProxy;                                             // 0x0868   (0x0008)  
};

/// Class /Script/MeshModelingToolsExp.MeshSculptBrushOpProps
/// Size: 0x0000 (0x0000A8 - 0x0000A8)
class UMeshSculptBrushOpProps : public UInteractiveToolPropertySet
{ 
public:
};

/// Class /Script/MeshModelingToolsExp.BaseKelvinletBrushOpProps
/// Size: 0x0010 (0x0000A8 - 0x0000B8)
class UBaseKelvinletBrushOpProps : public UMeshSculptBrushOpProps
{ 
public:
	float                                              Stiffness;                                                  // 0x00A8   (0x0004)  
	float                                              Incompressiblity;                                           // 0x00AC   (0x0004)  
	int32_t                                            BrushSteps;                                                 // 0x00B0   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00B4   (0x0004)  MISSED
};

/// Class /Script/MeshModelingToolsExp.ScaleKelvinletBrushOpProps
/// Size: 0x0008 (0x0000B8 - 0x0000C0)
class UScaleKelvinletBrushOpProps : public UBaseKelvinletBrushOpProps
{ 
public:
	float                                              Strength;                                                   // 0x00B8   (0x0004)  
	float                                              Falloff;                                                    // 0x00BC   (0x0004)  
};

/// Class /Script/MeshModelingToolsExp.PullKelvinletBrushOpProps
/// Size: 0x0008 (0x0000B8 - 0x0000C0)
class UPullKelvinletBrushOpProps : public UBaseKelvinletBrushOpProps
{ 
public:
	float                                              Falloff;                                                    // 0x00B8   (0x0004)  
	float                                              Depth;                                                      // 0x00BC   (0x0004)  
};

/// Class /Script/MeshModelingToolsExp.SharpPullKelvinletBrushOpProps
/// Size: 0x0008 (0x0000B8 - 0x0000C0)
class USharpPullKelvinletBrushOpProps : public UBaseKelvinletBrushOpProps
{ 
public:
	float                                              Falloff;                                                    // 0x00B8   (0x0004)  
	float                                              Depth;                                                      // 0x00BC   (0x0004)  
};

/// Class /Script/MeshModelingToolsExp.TwistKelvinletBrushOpProps
/// Size: 0x0008 (0x0000B8 - 0x0000C0)
class UTwistKelvinletBrushOpProps : public UBaseKelvinletBrushOpProps
{ 
public:
	float                                              Strength;                                                   // 0x00B8   (0x0004)  
	float                                              Falloff;                                                    // 0x00BC   (0x0004)  
};

/// Class /Script/MeshModelingToolsExp.GroupEraseBrushOpProps
/// Size: 0x0048 (0x0000A8 - 0x0000F0)
class UGroupEraseBrushOpProps : public UMeshSculptBrushOpProps
{ 
public:
	int32_t                                            Group;                                                      // 0x00A8   (0x0004)  
	bool                                               bOnlyEraseCurrent;                                          // 0x00AC   (0x0001)  
	unsigned char                                      UnknownData00_6[0x43];                                      // 0x00AD   (0x0043)  MISSED
};

/// Class /Script/MeshModelingToolsExp.GroupPaintBrushOpProps
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UGroupPaintBrushOpProps : public UMeshSculptBrushOpProps
{ 
public:
	int32_t                                            Group;                                                      // 0x00A8   (0x0004)  
	bool                                               bOnlyPaintUngrouped;                                        // 0x00AC   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00AD   (0x0003)  MISSED
};

/// Class /Script/MeshModelingToolsExp.InflateBrushOpProps
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UInflateBrushOpProps : public UMeshSculptBrushOpProps
{ 
public:
	float                                              Strength;                                                   // 0x00A8   (0x0004)  
	float                                              Falloff;                                                    // 0x00AC   (0x0004)  
};

/// Class /Script/MeshModelingToolsExp.MoveBrushOpProps
/// Size: 0x0010 (0x0000A8 - 0x0000B8)
class UMoveBrushOpProps : public UMeshSculptBrushOpProps
{ 
public:
	float                                              Strength;                                                   // 0x00A8   (0x0004)  
	float                                              Falloff;                                                    // 0x00AC   (0x0004)  
	float                                              Depth;                                                      // 0x00B0   (0x0004)  
	FModelingToolsAxisFilter                           AxisFilters;                                                // 0x00B4   (0x0003)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x00B7   (0x0001)  MISSED
};

/// Class /Script/MeshModelingToolsExp.PinchBrushOpProps
/// Size: 0x0010 (0x0000A8 - 0x0000B8)
class UPinchBrushOpProps : public UMeshSculptBrushOpProps
{ 
public:
	float                                              Strength;                                                   // 0x00A8   (0x0004)  
	float                                              Falloff;                                                    // 0x00AC   (0x0004)  
	float                                              Depth;                                                      // 0x00B0   (0x0004)  
	bool                                               bPerpDamping;                                               // 0x00B4   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00B5   (0x0003)  MISSED
};

/// Class /Script/MeshModelingToolsExp.BasePlaneBrushOpProps
/// Size: 0x0000 (0x0000A8 - 0x0000A8)
class UBasePlaneBrushOpProps : public UMeshSculptBrushOpProps
{ 
public:
};

/// Class /Script/MeshModelingToolsExp.PlaneBrushOpProps
/// Size: 0x0010 (0x0000A8 - 0x0000B8)
class UPlaneBrushOpProps : public UBasePlaneBrushOpProps
{ 
public:
	float                                              Strength;                                                   // 0x00A8   (0x0004)  
	float                                              Falloff;                                                    // 0x00AC   (0x0004)  
	float                                              Depth;                                                      // 0x00B0   (0x0004)  
	EPlaneBrushSideMode                                WhichSide;                                                  // 0x00B4   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00B5   (0x0003)  MISSED
};

/// Class /Script/MeshModelingToolsExp.ViewAlignedPlaneBrushOpProps
/// Size: 0x0010 (0x0000A8 - 0x0000B8)
class UViewAlignedPlaneBrushOpProps : public UBasePlaneBrushOpProps
{ 
public:
	float                                              Strength;                                                   // 0x00A8   (0x0004)  
	float                                              Falloff;                                                    // 0x00AC   (0x0004)  
	float                                              Depth;                                                      // 0x00B0   (0x0004)  
	EPlaneBrushSideMode                                WhichSide;                                                  // 0x00B4   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00B5   (0x0003)  MISSED
};

/// Class /Script/MeshModelingToolsExp.FixedPlaneBrushOpProps
/// Size: 0x0010 (0x0000A8 - 0x0000B8)
class UFixedPlaneBrushOpProps : public UBasePlaneBrushOpProps
{ 
public:
	float                                              Strength;                                                   // 0x00A8   (0x0004)  
	float                                              Falloff;                                                    // 0x00AC   (0x0004)  
	float                                              Depth;                                                      // 0x00B0   (0x0004)  
	EPlaneBrushSideMode                                WhichSide;                                                  // 0x00B4   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00B5   (0x0003)  MISSED
};

/// Class /Script/MeshModelingToolsExp.StandardSculptBrushOpProps
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UStandardSculptBrushOpProps : public UMeshSculptBrushOpProps
{ 
public:
	float                                              Strength;                                                   // 0x00A8   (0x0004)  
	float                                              Falloff;                                                    // 0x00AC   (0x0004)  
};

/// Class /Script/MeshModelingToolsExp.ViewAlignedSculptBrushOpProps
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UViewAlignedSculptBrushOpProps : public UMeshSculptBrushOpProps
{ 
public:
	float                                              Strength;                                                   // 0x00A8   (0x0004)  
	float                                              Falloff;                                                    // 0x00AC   (0x0004)  
};

/// Class /Script/MeshModelingToolsExp.SculptMaxBrushOpProps
/// Size: 0x0018 (0x0000A8 - 0x0000C0)
class USculptMaxBrushOpProps : public UMeshSculptBrushOpProps
{ 
public:
	float                                              Strength;                                                   // 0x00A8   (0x0004)  
	float                                              Falloff;                                                    // 0x00AC   (0x0004)  
	float                                              MaxHeight;                                                  // 0x00B0   (0x0004)  
	bool                                               bUseFixedHeight;                                            // 0x00B4   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00B5   (0x0003)  MISSED
	float                                              FixedHeight;                                                // 0x00B8   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x00BC   (0x0004)  MISSED
};

/// Class /Script/MeshModelingToolsExp.BaseSmoothBrushOpProps
/// Size: 0x0000 (0x0000A8 - 0x0000A8)
class UBaseSmoothBrushOpProps : public UMeshSculptBrushOpProps
{ 
public:
};

/// Class /Script/MeshModelingToolsExp.SmoothBrushOpProps
/// Size: 0x0010 (0x0000A8 - 0x0000B8)
class USmoothBrushOpProps : public UBaseSmoothBrushOpProps
{ 
public:
	float                                              Strength;                                                   // 0x00A8   (0x0004)  
	float                                              Falloff;                                                    // 0x00AC   (0x0004)  
	bool                                               bPreserveUVFlow;                                            // 0x00B0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x00B1   (0x0007)  MISSED
};

/// Class /Script/MeshModelingToolsExp.SecondarySmoothBrushOpProps
/// Size: 0x0010 (0x0000A8 - 0x0000B8)
class USecondarySmoothBrushOpProps : public UBaseSmoothBrushOpProps
{ 
public:
	float                                              Strength;                                                   // 0x00A8   (0x0004)  
	float                                              Falloff;                                                    // 0x00AC   (0x0004)  
	bool                                               bPreserveUVFlow;                                            // 0x00B0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x00B1   (0x0007)  MISSED
};

/// Class /Script/MeshModelingToolsExp.SmoothFillBrushOpProps
/// Size: 0x0010 (0x0000A8 - 0x0000B8)
class USmoothFillBrushOpProps : public UBaseSmoothBrushOpProps
{ 
public:
	float                                              Strength;                                                   // 0x00A8   (0x0004)  
	float                                              Falloff;                                                    // 0x00AC   (0x0004)  
	bool                                               bPreserveUVFlow;                                            // 0x00B0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x00B1   (0x0007)  MISSED
};

/// Class /Script/MeshModelingToolsExp.FlattenBrushOpProps
/// Size: 0x0010 (0x0000A8 - 0x0000B8)
class UFlattenBrushOpProps : public UMeshSculptBrushOpProps
{ 
public:
	float                                              Strength;                                                   // 0x00A8   (0x0004)  
	float                                              Falloff;                                                    // 0x00AC   (0x0004)  
	float                                              Depth;                                                      // 0x00B0   (0x0004)  
	EPlaneBrushSideMode                                WhichSide;                                                  // 0x00B4   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00B5   (0x0003)  MISSED
};

/// Class /Script/MeshModelingToolsExp.EraseBrushOpProps
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UEraseBrushOpProps : public UMeshSculptBrushOpProps
{ 
public:
	float                                              Strength;                                                   // 0x00A8   (0x0004)  
	float                                              Falloff;                                                    // 0x00AC   (0x0004)  
};

/// Class /Script/MeshModelingToolsExp.VertexColorBaseBrushOpProps
/// Size: 0x0010 (0x0000A8 - 0x0000B8)
class UVertexColorBaseBrushOpProps : public UMeshSculptBrushOpProps
{ 
public:
	float                                              Strength;                                                   // 0x00A8   (0x0004)  
	float                                              Falloff;                                                    // 0x00AC   (0x0004)  
	EVertexColorPaintBrushOpBlendMode                  BlendMode;                                                  // 0x00B0   (0x0004)  
	bool                                               bApplyFalloff;                                              // 0x00B4   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00B5   (0x0003)  MISSED
};

/// Class /Script/MeshModelingToolsExp.VertexColorPaintBrushOpProps
/// Size: 0x0010 (0x0000B8 - 0x0000C8)
class UVertexColorPaintBrushOpProps : public UVertexColorBaseBrushOpProps
{ 
public:
	FLinearColor                                       Color;                                                      // 0x00B8   (0x0010)  
};

/// Class /Script/MeshModelingToolsExp.VertexColorSoftenBrushOpProps
/// Size: 0x0000 (0x0000B8 - 0x0000B8)
class UVertexColorSoftenBrushOpProps : public UVertexColorBaseBrushOpProps
{ 
public:
};

/// Class /Script/MeshModelingToolsExp.VertexColorSmoothBrushOpProps
/// Size: 0x0000 (0x0000B8 - 0x0000B8)
class UVertexColorSmoothBrushOpProps : public UVertexColorBaseBrushOpProps
{ 
public:
};

/// Class /Script/MeshModelingToolsExp.OffsetMeshSelectionToolBuilder
/// Size: 0x0000 (0x000028 - 0x000028)
class UOffsetMeshSelectionToolBuilder : public USingleTargetWithSelectionToolBuilder
{ 
public:
};

/// Class /Script/MeshModelingToolsExp.OffsetMeshSelectionToolProperties
/// Size: 0x0038 (0x0000A8 - 0x0000E0)
class UOffsetMeshSelectionToolProperties : public UInteractiveToolPropertySet
{ 
public:
	double                                             OffsetDistance;                                             // 0x00A8   (0x0008)  
	EOffsetMeshSelectionDirectionMode                  Direction;                                                  // 0x00B0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00B1   (0x0003)  MISSED
	int32_t                                            NumSubdivisions;                                            // 0x00B4   (0x0004)  
	double                                             CreaseAngle;                                                // 0x00B8   (0x0008)  
	bool                                               bShellsToSolids;                                            // 0x00C0   (0x0001)  
	bool                                               bInferGroupsFromNbrs;                                       // 0x00C1   (0x0001)  
	bool                                               bGroupPerSubdivision;                                       // 0x00C2   (0x0001)  
	bool                                               bReplaceSelectionGroups;                                    // 0x00C3   (0x0001)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x00C4   (0x0004)  MISSED
	double                                             UVScale;                                                    // 0x00C8   (0x0008)  
	bool                                               bUVIslandPerGroup;                                          // 0x00D0   (0x0001)  
	bool                                               bInferMaterialID;                                           // 0x00D1   (0x0001)  
	unsigned char                                      UnknownData02_5[0x2];                                       // 0x00D2   (0x0002)  MISSED
	int32_t                                            SetMaterialID;                                              // 0x00D4   (0x0004)  
	bool                                               bShowInputMaterials;                                        // 0x00D8   (0x0001)  
	unsigned char                                      UnknownData03_6[0x7];                                       // 0x00D9   (0x0007)  MISSED
};

/// Class /Script/MeshModelingToolsExp.OffsetMeshSelectionTool
/// Size: 0x0738 (0x000128 - 0x000860)
class UOffsetMeshSelectionTool : public USingleTargetWithSelectionTool
{ 
public:
	class UOffsetMeshSelectionToolProperties*          OffsetProperties;                                           // 0x0128   (0x0008)  
	unsigned char                                      UnknownData00_5[0x720];                                     // 0x0130   (0x0720)  MISSED
	class UPreviewMesh*                                SourcePreview;                                              // 0x0850   (0x0008)  
	class UMeshOpPreviewWithBackgroundCompute*         EditCompute;                                                // 0x0858   (0x0008)  
};

/// Class /Script/MeshModelingToolsExp.PatternToolBuilder
/// Size: 0x0008 (0x000028 - 0x000030)
class UPatternToolBuilder : public UMultiSelectionMeshEditingToolBuilder
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0028   (0x0008)  MISSED
};

/// Class /Script/MeshModelingToolsExp.PatternToolSettings
/// Size: 0x0018 (0x0000A8 - 0x0000C0)
class UPatternToolSettings : public UInteractiveToolPropertySet
{ 
public:
	int32_t                                            Seed;                                                       // 0x00A8   (0x0004)  
	bool                                               bProjectElementsDown;                                       // 0x00AC   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00AD   (0x0003)  MISSED
	float                                              ProjectionOffset;                                           // 0x00B0   (0x0004)  
	bool                                               bHideSources;                                               // 0x00B4   (0x0001)  
	bool                                               bUseRelativeTransforms;                                     // 0x00B5   (0x0001)  
	bool                                               bRandomlyPickElements;                                      // 0x00B6   (0x0001)  
	EPatternToolShape                                  Shape;                                                      // 0x00B7   (0x0001)  
	EPatternToolSingleAxis                             SingleAxis;                                                 // 0x00B8   (0x0001)  
	EPatternToolSinglePlane                            SinglePlane;                                                // 0x00B9   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x00BA   (0x0006)  MISSED
};

/// Class /Script/MeshModelingToolsExp.PatternTool_BoundingBoxSettings
/// Size: 0x0010 (0x0000A8 - 0x0000B8)
class UPatternTool_BoundingBoxSettings : public UInteractiveToolPropertySet
{ 
public:
	bool                                               bIgnoreTransforms;                                          // 0x00A8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00A9   (0x0003)  MISSED
	float                                              Adjustment;                                                 // 0x00AC   (0x0004)  
	bool                                               bVisualize;                                                 // 0x00B0   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x00B1   (0x0007)  MISSED
};

/// Class /Script/MeshModelingToolsExp.PatternTool_LinearSettings
/// Size: 0x0020 (0x0000A8 - 0x0000C8)
class UPatternTool_LinearSettings : public UInteractiveToolPropertySet
{ 
public:
	EPatternToolAxisSpacingMode                        SpacingMode;                                                // 0x00A8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00A9   (0x0003)  MISSED
	int32_t                                            Count;                                                      // 0x00AC   (0x0004)  
	double                                             StepSize;                                                   // 0x00B0   (0x0008)  
	double                                             Extent;                                                     // 0x00B8   (0x0008)  
	bool                                               bCentered;                                                  // 0x00C0   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x00C1   (0x0007)  MISSED
};

/// Class /Script/MeshModelingToolsExp.PatternTool_GridSettings
/// Size: 0x0038 (0x0000A8 - 0x0000E0)
class UPatternTool_GridSettings : public UInteractiveToolPropertySet
{ 
public:
	EPatternToolAxisSpacingMode                        SpacingX;                                                   // 0x00A8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00A9   (0x0003)  MISSED
	int32_t                                            CountX;                                                     // 0x00AC   (0x0004)  
	double                                             StepSizeX;                                                  // 0x00B0   (0x0008)  
	double                                             ExtentX;                                                    // 0x00B8   (0x0008)  
	bool                                               bCenteredX;                                                 // 0x00C0   (0x0001)  
	EPatternToolAxisSpacingMode                        SpacingY;                                                   // 0x00C1   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x00C2   (0x0002)  MISSED
	int32_t                                            CountY;                                                     // 0x00C4   (0x0004)  
	double                                             StepSizeY;                                                  // 0x00C8   (0x0008)  
	double                                             ExtentY;                                                    // 0x00D0   (0x0008)  
	bool                                               bCenteredY;                                                 // 0x00D8   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x00D9   (0x0007)  MISSED
};

/// Class /Script/MeshModelingToolsExp.PatternTool_RadialSettings
/// Size: 0x0038 (0x0000A8 - 0x0000E0)
class UPatternTool_RadialSettings : public UInteractiveToolPropertySet
{ 
public:
	EPatternToolAxisSpacingMode                        SpacingMode;                                                // 0x00A8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00A9   (0x0003)  MISSED
	int32_t                                            Count;                                                      // 0x00AC   (0x0004)  
	double                                             StepSize;                                                   // 0x00B0   (0x0008)  
	double                                             Radius;                                                     // 0x00B8   (0x0008)  
	double                                             StartAngle;                                                 // 0x00C0   (0x0008)  
	double                                             EndAngle;                                                   // 0x00C8   (0x0008)  
	double                                             AngleShift;                                                 // 0x00D0   (0x0008)  
	bool                                               bOriented;                                                  // 0x00D8   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x00D9   (0x0007)  MISSED
};

/// Class /Script/MeshModelingToolsExp.PatternTool_RotationSettings
/// Size: 0x0050 (0x0000A8 - 0x0000F8)
class UPatternTool_RotationSettings : public UInteractiveToolPropertySet
{ 
public:
	bool                                               bInterpolate;                                               // 0x00A8   (0x0001)  
	bool                                               bJitter;                                                    // 0x00A9   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x00AA   (0x0006)  MISSED
	FRotator                                           StartRotation;                                              // 0x00B0   (0x0018)  
	FRotator                                           EndRotation;                                                // 0x00C8   (0x0018)  
	FRotator                                           Jitter;                                                     // 0x00E0   (0x0018)  
};

/// Class /Script/MeshModelingToolsExp.PatternTool_TranslationSettings
/// Size: 0x0050 (0x0000A8 - 0x0000F8)
class UPatternTool_TranslationSettings : public UInteractiveToolPropertySet
{ 
public:
	bool                                               bInterpolate;                                               // 0x00A8   (0x0001)  
	bool                                               bJitter;                                                    // 0x00A9   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x00AA   (0x0006)  MISSED
	FVector                                            StartTranslation;                                           // 0x00B0   (0x0018)  
	FVector                                            EndTranslation;                                             // 0x00C8   (0x0018)  
	FVector                                            Jitter;                                                     // 0x00E0   (0x0018)  
};

/// Class /Script/MeshModelingToolsExp.PatternTool_ScaleSettings
/// Size: 0x0050 (0x0000A8 - 0x0000F8)
class UPatternTool_ScaleSettings : public UInteractiveToolPropertySet
{ 
public:
	bool                                               bProportional;                                              // 0x00A8   (0x0001)  
	bool                                               bInterpolate;                                               // 0x00A9   (0x0001)  
	bool                                               bJitter;                                                    // 0x00AA   (0x0001)  
	unsigned char                                      UnknownData00_5[0x5];                                       // 0x00AB   (0x0005)  MISSED
	FVector                                            StartScale;                                                 // 0x00B0   (0x0018)  
	FVector                                            EndScale;                                                   // 0x00C8   (0x0018)  
	FVector                                            Jitter;                                                     // 0x00E0   (0x0018)  
};

/// Class /Script/MeshModelingToolsExp.PatternTool_OutputSettings
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UPatternTool_OutputSettings : public UInteractiveToolPropertySet
{ 
public:
	bool                                               bSeparateActors;                                            // 0x00A8   (0x0001)  
	bool                                               bConvertToDynamic;                                          // 0x00A9   (0x0001)  
	bool                                               bCreateISMCs;                                               // 0x00AA   (0x0001)  
	bool                                               bHaveStaticMeshes;                                          // 0x00AB   (0x0001)  
	bool                                               bEnableCreateISMCs;                                         // 0x00AC   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00AD   (0x0003)  MISSED
};

/// Class /Script/MeshModelingToolsExp.PatternTool
/// Size: 0x0400 (0x0000C0 - 0x0004C0)
class UPatternTool : public UMultiSelectionMeshEditingTool
{ 
public:
	class UPatternToolSettings*                        Settings;                                                   // 0x00C0   (0x0008)  
	class UPatternTool_BoundingBoxSettings*            BoundingBoxSettings;                                        // 0x00C8   (0x0008)  
	class UPatternTool_LinearSettings*                 LinearSettings;                                             // 0x00D0   (0x0008)  
	class UPatternTool_GridSettings*                   GridSettings;                                               // 0x00D8   (0x0008)  
	class UPatternTool_RadialSettings*                 RadialSettings;                                             // 0x00E0   (0x0008)  
	class UPatternTool_RotationSettings*               RotationSettings;                                           // 0x00E8   (0x0008)  
	class UPatternTool_TranslationSettings*            TranslationSettings;                                        // 0x00F0   (0x0008)  
	class UPatternTool_ScaleSettings*                  ScaleSettings;                                              // 0x00F8   (0x0008)  
	unsigned char                                      UnknownData00_5[0x58];                                      // 0x0100   (0x0058)  MISSED
	class UPatternTool_OutputSettings*                 OutputSettings;                                             // 0x0158   (0x0008)  
	unsigned char                                      UnknownData01_5[0x48];                                      // 0x0160   (0x0048)  MISSED
	class UTransformProxy*                             PatternGizmoProxy;                                          // 0x01A8   (0x0008)  
	class UCombinedTransformGizmo*                     PatternGizmo;                                               // 0x01B0   (0x0008)  
	unsigned char                                      UnknownData02_5[0x18];                                      // 0x01B8   (0x0018)  MISSED
	class UDragAlignmentMechanic*                      DragAlignmentMechanic;                                      // 0x01D0   (0x0008)  
	class UConstructionPlaneMechanic*                  PlaneMechanic;                                              // 0x01D8   (0x0008)  
	unsigned char                                      UnknownData03_5[0x1E8];                                     // 0x01E0   (0x01E8)  MISSED
	SDK_UNDEFINED(80,14999) /* TSet<UPrimitiveComponent*> */ __um(AllComponents);                                  // 0x03C8   (0x0050)  
	unsigned char                                      UnknownData04_5[0xA0];                                      // 0x0418   (0x00A0)  MISSED
	class UPreviewGeometry*                            PreviewGeometry;                                            // 0x04B8   (0x0008)  
};

/// Class /Script/MeshModelingToolsExp.MeshConstraintProperties
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UMeshConstraintProperties : public UInteractiveToolPropertySet
{ 
public:
	bool                                               bPreserveSharpEdges;                                        // 0x00A8   (0x0001)  
	EMeshBoundaryConstraint                            MeshBoundaryConstraint;                                     // 0x00A9   (0x0001)  
	EGroupBoundaryConstraint                           GroupBoundaryConstraint;                                    // 0x00AA   (0x0001)  
	EMaterialBoundaryConstraint                        MaterialBoundaryConstraint;                                 // 0x00AB   (0x0001)  
	bool                                               bPreventNormalFlips;                                        // 0x00AC   (0x0001)  
	bool                                               bPreventTinyTriangles;                                      // 0x00AD   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x00AE   (0x0002)  MISSED


	/// Functions
	// Function /Script/MeshModelingToolsExp.MeshConstraintProperties.IsPreventTinyTrianglesEnabled
	// bool IsPreventTinyTrianglesEnabled();                                                                                 // [0x66f629c] Native|Protected|Const 
	// Function /Script/MeshModelingToolsExp.MeshConstraintProperties.IsPreventNormalFlipsEnabled
	// bool IsPreventNormalFlipsEnabled();                                                                                   // [0x3727478] Native|Protected|Const 
};

/// Class /Script/MeshModelingToolsExp.RemeshProperties
/// Size: 0x0008 (0x0000B0 - 0x0000B8)
class URemeshProperties : public UMeshConstraintProperties
{ 
public:
	float                                              SmoothingStrength;                                          // 0x00B0   (0x0004)  
	bool                                               bFlips;                                                     // 0x00B4   (0x0001)  
	bool                                               bSplits;                                                    // 0x00B5   (0x0001)  
	bool                                               bCollapses;                                                 // 0x00B6   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x00B7   (0x0001)  MISSED
};

/// Class /Script/MeshModelingToolsExp.RevolveSplineToolProperties
/// Size: 0x0050 (0x000118 - 0x000168)
class URevolveSplineToolProperties : public URevolveProperties
{ 
public:
	ERevolveSplineSampleMode                           SampleMode;                                                 // 0x0118   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0119   (0x0007)  MISSED
	double                                             ErrorTolerance;                                             // 0x0120   (0x0008)  
	double                                             MaxSampleDistance;                                          // 0x0128   (0x0008)  
	ERevolvePropertiesCapFillMode                      CapFillMode;                                                // 0x0130   (0x0001)  
	bool                                               bClosePathToAxis;                                           // 0x0131   (0x0001)  
	unsigned char                                      UnknownData01_5[0x6];                                       // 0x0132   (0x0006)  MISSED
	FVector                                            AxisOrigin;                                                 // 0x0138   (0x0018)  
	FVector2D                                          AxisOrientation;                                            // 0x0150   (0x0010)  
	bool                                               bResetAxisOnStart;                                          // 0x0160   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x0161   (0x0007)  MISSED
};

/// Class /Script/MeshModelingToolsExp.RevolveSplineToolActionPropertySet
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class URevolveSplineToolActionPropertySet : public UInteractiveToolPropertySet
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00A8   (0x0008)  MISSED


	/// Functions
	// Function /Script/MeshModelingToolsExp.RevolveSplineToolActionPropertySet.ResetAxis
	// void ResetAxis();                                                                                                     // [0xb2f1ffc] Final|Native|Public  
};

/// Class /Script/MeshModelingToolsExp.RevolveSplineTool
/// Size: 0x00E0 (0x0000A0 - 0x000180)
class URevolveSplineTool : public UInteractiveTool
{ 
public:
	unsigned char                                      UnknownData00_3[0x10];                                      // 0x00A0   (0x0010)  MISSED
	class URevolveSplineToolProperties*                Settings;                                                   // 0x00B0   (0x0008)  
	class UNewMeshMaterialProperties*                  MaterialProperties;                                         // 0x00B8   (0x0008)  
	class UCreateMeshObjectTypeProperties*             OutputTypeProperties;                                       // 0x00C0   (0x0008)  
	class URevolveSplineToolActionPropertySet*         ToolActions;                                                // 0x00C8   (0x0008)  
	class UMeshOpPreviewWithBackgroundCompute*         Preview;                                                    // 0x00D0   (0x0008)  
	class UConstructionPlaneMechanic*                  PlaneMechanic;                                              // 0x00D8   (0x0008)  
	unsigned char                                      UnknownData01_6[0xA0];                                      // 0x00E0   (0x00A0)  MISSED
};

/// Class /Script/MeshModelingToolsExp.RevolveSplineToolBuilder
/// Size: 0x0000 (0x000028 - 0x000028)
class URevolveSplineToolBuilder : public UInteractiveToolBuilder
{ 
public:
};

/// Class /Script/MeshModelingToolsExp.AddPatchToolBuilder
/// Size: 0x0000 (0x000028 - 0x000028)
class UAddPatchToolBuilder : public UInteractiveToolBuilder
{ 
public:
};

/// Class /Script/MeshModelingToolsExp.AddPatchToolProperties
/// Size: 0x0010 (0x0000A8 - 0x0000B8)
class UAddPatchToolProperties : public UInteractiveToolPropertySet
{ 
public:
	float                                              Width;                                                      // 0x00A8   (0x0004)  
	float                                              Rotation;                                                   // 0x00AC   (0x0004)  
	int32_t                                            Subdivisions;                                               // 0x00B0   (0x0004)  
	float                                              Shift;                                                      // 0x00B4   (0x0004)  
};

/// Class /Script/MeshModelingToolsExp.AddPatchTool
/// Size: 0x0088 (0x0000A8 - 0x000130)
class UAddPatchTool : public USingleClickTool
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x00A8   (0x0008)  MISSED
	class UAddPatchToolProperties*                     ShapeSettings;                                              // 0x00B0   (0x0008)  
	class UNewMeshMaterialProperties*                  MaterialProperties;                                         // 0x00B8   (0x0008)  
	class UPreviewMesh*                                PreviewMesh;                                                // 0x00C0   (0x0008)  
	unsigned char                                      UnknownData01_6[0x68];                                      // 0x00C8   (0x0068)  MISSED
};

/// Class /Script/MeshModelingToolsExp.AlignObjectsToolBuilder
/// Size: 0x0000 (0x000028 - 0x000028)
class UAlignObjectsToolBuilder : public UMultiSelectionMeshEditingToolBuilder
{ 
public:
};

/// Class /Script/MeshModelingToolsExp.AlignObjectsToolProperties
/// Size: 0x0010 (0x0000A8 - 0x0000B8)
class UAlignObjectsToolProperties : public UInteractiveToolPropertySet
{ 
public:
	EAlignObjectsAlignTypes                            AlignType;                                                  // 0x00A8   (0x0004)  
	EAlignObjectsAlignToOptions                        AlignTo;                                                    // 0x00AC   (0x0004)  
	EAlignObjectsBoxPoint                              BoxPosition;                                                // 0x00B0   (0x0004)  
	bool                                               bAlignX;                                                    // 0x00B4   (0x0001)  
	bool                                               bAlignY;                                                    // 0x00B5   (0x0001)  
	bool                                               bAlignZ;                                                    // 0x00B6   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x00B7   (0x0001)  MISSED
};

/// Class /Script/MeshModelingToolsExp.AlignObjectsTool
/// Size: 0x00A0 (0x0000C0 - 0x000160)
class UAlignObjectsTool : public UMultiSelectionMeshEditingTool
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x00C0   (0x0008)  MISSED
	class UAlignObjectsToolProperties*                 AlignProps;                                                 // 0x00C8   (0x0008)  
	unsigned char                                      UnknownData01_6[0x90];                                      // 0x00D0   (0x0090)  MISSED
};

/// Class /Script/MeshModelingToolsExp.BakeMeshAttributeMapsToolBuilder
/// Size: 0x0000 (0x000028 - 0x000028)
class UBakeMeshAttributeMapsToolBuilder : public UMultiSelectionMeshEditingToolBuilder
{ 
public:
};

/// Class /Script/MeshModelingToolsExp.BakeMeshAttributeMapsToolProperties
/// Size: 0x0090 (0x0000A8 - 0x000138)
class UBakeMeshAttributeMapsToolProperties : public UInteractiveToolPropertySet
{ 
public:
	int32_t                                            MapTypes;                                                   // 0x00A8   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00AC   (0x0004)  MISSED
	SDK_UNDEFINED(16,15000) /* FString */              __um(MapPreview);                                           // 0x00B0   (0x0010)  
	EBakeTextureResolution                             Resolution;                                                 // 0x00C0   (0x0004)  
	EBakeTextureBitDepth                               BitDepth;                                                   // 0x00C4   (0x0004)  
	EBakeTextureSamplesPerPixel                        SamplesPerPixel;                                            // 0x00C8   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x00CC   (0x0004)  MISSED
	class UTexture2D*                                  SampleFilterMask;                                           // 0x00D0   (0x0008)  
	SDK_UNDEFINED(16,15001) /* TArray<FString> */      __um(MapPreviewNamesList);                                  // 0x00D8   (0x0010)  
	unsigned char                                      UnknownData02_6[0x50];                                      // 0x00E8   (0x0050)  MISSED


	/// Functions
	// Function /Script/MeshModelingToolsExp.BakeMeshAttributeMapsToolProperties.GetMapPreviewNamesFunc
	// TArray<FString> GetMapPreviewNamesFunc();                                                                             // [0xb2f1fc4] Final|Native|Public  
};

/// Class /Script/MeshModelingToolsExp.BakeMeshAttributeTool
/// Size: 0x00F0 (0x0000C0 - 0x0001B0)
class UBakeMeshAttributeTool : public UMultiSelectionMeshEditingTool
{ 
public:
	unsigned char                                      UnknownData00_3[0x10];                                      // 0x00C0   (0x0010)  MISSED
	class UBakeOcclusionMapToolProperties*             OcclusionSettings;                                          // 0x00D0   (0x0008)  
	class UBakeCurvatureMapToolProperties*             CurvatureSettings;                                          // 0x00D8   (0x0008)  
	class UBakeTexture2DProperties*                    TextureSettings;                                            // 0x00E0   (0x0008)  
	class UBakeMultiTexture2DProperties*               MultiTextureSettings;                                       // 0x00E8   (0x0008)  
	class UMaterialInstanceDynamic*                    WorkingPreviewMaterial;                                     // 0x00F0   (0x0008)  
	class UMaterialInstanceDynamic*                    ErrorPreviewMaterial;                                       // 0x00F8   (0x0008)  
	unsigned char                                      UnknownData01_6[0xB0];                                      // 0x0100   (0x00B0)  MISSED
};

/// Class /Script/MeshModelingToolsExp.BakeMeshAttributeMapsToolBase
/// Size: 0x0178 (0x0001B0 - 0x000328)
class UBakeMeshAttributeMapsToolBase : public UBakeMeshAttributeTool
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x01B0   (0x0008)  MISSED
	class UBakeVisualizationProperties*                VisualizationProps;                                         // 0x01B8   (0x0008)  
	class UPreviewMesh*                                PreviewMesh;                                                // 0x01C0   (0x0008)  
	class UMaterialInstanceDynamic*                    PreviewMaterial;                                            // 0x01C8   (0x0008)  
	class UMaterialInstanceDynamic*                    BentNormalPreviewMaterial;                                  // 0x01D0   (0x0008)  
	unsigned char                                      UnknownData01_5[0x50];                                      // 0x01D8   (0x0050)  MISSED
	SDK_UNDEFINED(80,15002) /* TMap<EBakeMapType, UTexture2D*> */ __um(CachedMaps);                                // 0x0228   (0x0050)  
	unsigned char                                      UnknownData02_5[0x98];                                      // 0x0278   (0x0098)  MISSED
	class UTexture2D*                                  EmptyNormalMap;                                             // 0x0310   (0x0008)  
	class UTexture2D*                                  EmptyColorMapBlack;                                         // 0x0318   (0x0008)  
	class UTexture2D*                                  EmptyColorMapWhite;                                         // 0x0320   (0x0008)  
};

/// Class /Script/MeshModelingToolsExp.BakeMeshAttributeMapsTool
/// Size: 0x0070 (0x000328 - 0x000398)
class UBakeMeshAttributeMapsTool : public UBakeMeshAttributeMapsToolBase
{ 
public:
	class UBakeInputMeshProperties*                    InputMeshSettings;                                          // 0x0328   (0x0008)  
	class UBakeMeshAttributeMapsToolProperties*        Settings;                                                   // 0x0330   (0x0008)  
	class UBakeMeshAttributeMapsResultToolProperties*  ResultSettings;                                             // 0x0338   (0x0008)  
	unsigned char                                      UnknownData00_6[0x58];                                      // 0x0340   (0x0058)  MISSED
};

/// Class /Script/MeshModelingToolsExp.BakeMeshAttributeMapsResultToolProperties
/// Size: 0x0050 (0x0000A8 - 0x0000F8)
class UBakeMeshAttributeMapsResultToolProperties : public UInteractiveToolPropertySet
{ 
public:
	SDK_UNDEFINED(80,15003) /* TMap<EBakeMapType, UTexture2D*> */ __um(Result);                                    // 0x00A8   (0x0050)  
};

/// Class /Script/MeshModelingToolsExp.BakeMeshAttributeVertexToolBuilder
/// Size: 0x0000 (0x000028 - 0x000028)
class UBakeMeshAttributeVertexToolBuilder : public UMultiSelectionMeshEditingToolBuilder
{ 
public:
};

/// Class /Script/MeshModelingToolsExp.BakeMeshAttributeVertexToolProperties
/// Size: 0x0020 (0x0000A8 - 0x0000C8)
class UBakeMeshAttributeVertexToolProperties : public UInteractiveToolPropertySet
{ 
public:
	EBakeVertexOutput                                  OutputMode;                                                 // 0x00A8   (0x0004)  
	int32_t                                            OutputType;                                                 // 0x00AC   (0x0004)  
	int32_t                                            OutputTypeR;                                                // 0x00B0   (0x0004)  
	int32_t                                            OutputTypeG;                                                // 0x00B4   (0x0004)  
	int32_t                                            OutputTypeB;                                                // 0x00B8   (0x0004)  
	int32_t                                            OutputTypeA;                                                // 0x00BC   (0x0004)  
	EBakeVertexChannel                                 PreviewMode;                                                // 0x00C0   (0x0004)  
	bool                                               bSplitAtNormalSeams;                                        // 0x00C4   (0x0001)  
	bool                                               bSplitAtUVSeams;                                            // 0x00C5   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x00C6   (0x0002)  MISSED
};

/// Class /Script/MeshModelingToolsExp.BakeMeshAttributeVertexTool
/// Size: 0x0100 (0x0001B0 - 0x0002B0)
class UBakeMeshAttributeVertexTool : public UBakeMeshAttributeTool
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x01B0   (0x0008)  MISSED
	class UBakeInputMeshProperties*                    InputMeshSettings;                                          // 0x01B8   (0x0008)  
	class UBakeMeshAttributeVertexToolProperties*      Settings;                                                   // 0x01C0   (0x0008)  
	class UPreviewMesh*                                PreviewMesh;                                                // 0x01C8   (0x0008)  
	class UMaterialInstanceDynamic*                    PreviewMaterial;                                            // 0x01D0   (0x0008)  
	class UMaterialInstanceDynamic*                    PreviewAlphaMaterial;                                       // 0x01D8   (0x0008)  
	unsigned char                                      UnknownData01_6[0xD0];                                      // 0x01E0   (0x00D0)  MISSED
};

/// Class /Script/MeshModelingToolsExp.BakeMultiMeshAttributeMapsToolBuilder
/// Size: 0x0000 (0x000028 - 0x000028)
class UBakeMultiMeshAttributeMapsToolBuilder : public UMultiSelectionMeshEditingToolBuilder
{ 
public:
};

/// Class /Script/MeshModelingToolsExp.BakeMultiMeshAttributeMapsToolProperties
/// Size: 0x0090 (0x0000A8 - 0x000138)
class UBakeMultiMeshAttributeMapsToolProperties : public UInteractiveToolPropertySet
{ 
public:
	int32_t                                            MapTypes;                                                   // 0x00A8   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00AC   (0x0004)  MISSED
	SDK_UNDEFINED(16,15004) /* FString */              __um(MapPreview);                                           // 0x00B0   (0x0010)  
	EBakeTextureResolution                             Resolution;                                                 // 0x00C0   (0x0004)  
	EBakeTextureBitDepth                               BitDepth;                                                   // 0x00C4   (0x0004)  
	EBakeTextureSamplesPerPixel                        SamplesPerPixel;                                            // 0x00C8   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x00CC   (0x0004)  MISSED
	class UTexture2D*                                  SampleFilterMask;                                           // 0x00D0   (0x0008)  
	SDK_UNDEFINED(16,15005) /* TArray<FString> */      __um(MapPreviewNamesList);                                  // 0x00D8   (0x0010)  
	unsigned char                                      UnknownData02_6[0x50];                                      // 0x00E8   (0x0050)  MISSED


	/// Functions
	// Function /Script/MeshModelingToolsExp.BakeMultiMeshAttributeMapsToolProperties.GetMapPreviewNamesFunc
	// TArray<FString> GetMapPreviewNamesFunc();                                                                             // [0xb2f1fc4] Final|Native|Public  
};

/// Struct /Script/MeshModelingToolsExp.BakeMultiMeshDetailProperties
/// Size: 0x0018 (0x000000 - 0x000018)
struct FBakeMultiMeshDetailProperties
{ 
	class UStaticMesh*                                 SourceMesh;                                                 // 0x0000   (0x0008)  
	class UTexture2D*                                  SourceTexture;                                              // 0x0008   (0x0008)  
	int32_t                                            SourceTextureUVLayer;                                       // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Class /Script/MeshModelingToolsExp.BakeMultiMeshInputToolProperties
/// Size: 0x0050 (0x0000A8 - 0x0000F8)
class UBakeMultiMeshInputToolProperties : public UInteractiveToolPropertySet
{ 
public:
	class UStaticMesh*                                 TargetStaticMesh;                                           // 0x00A8   (0x0008)  
	class USkeletalMesh*                               TargetSkeletalMesh;                                         // 0x00B0   (0x0008)  
	class AActor*                                      TargetDynamicMesh;                                          // 0x00B8   (0x0008)  
	SDK_UNDEFINED(16,15006) /* FString */              __um(TargetUVLayer);                                        // 0x00C0   (0x0010)  
	TArray<FBakeMultiMeshDetailProperties>             SourceMeshes;                                               // 0x00D0   (0x0010)  
	float                                              ProjectionDistance;                                         // 0x00E0   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00E4   (0x0004)  MISSED
	SDK_UNDEFINED(16,15007) /* TArray<FString> */      __um(TargetUVLayerNamesList);                               // 0x00E8   (0x0010)  


	/// Functions
	// Function /Script/MeshModelingToolsExp.BakeMultiMeshInputToolProperties.GetTargetUVLayerNamesFunc
	// TArray<FString> GetTargetUVLayerNamesFunc();                                                                          // [0xb2f1fe0] Final|Native|Public|Const 
};

/// Class /Script/MeshModelingToolsExp.BakeMultiMeshAttributeMapsTool
/// Size: 0x00A8 (0x000328 - 0x0003D0)
class UBakeMultiMeshAttributeMapsTool : public UBakeMeshAttributeMapsToolBase
{ 
public:
	class UBakeMultiMeshAttributeMapsToolProperties*   Settings;                                                   // 0x0328   (0x0008)  
	class UBakeMultiMeshInputToolProperties*           InputMeshSettings;                                          // 0x0330   (0x0008)  
	class UBakeMeshAttributeMapsResultToolProperties*  ResultSettings;                                             // 0x0338   (0x0008)  
	unsigned char                                      UnknownData00_6[0x90];                                      // 0x0340   (0x0090)  MISSED
};

/// Class /Script/MeshModelingToolsExp.BakeTransformToolBuilder
/// Size: 0x0000 (0x000028 - 0x000028)
class UBakeTransformToolBuilder : public UMultiSelectionMeshEditingToolBuilder
{ 
public:
};

/// Class /Script/MeshModelingToolsExp.BakeTransformToolProperties
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UBakeTransformToolProperties : public UInteractiveToolPropertySet
{ 
public:
	bool                                               bApplyToAllLODs;                                            // 0x00A8   (0x0001)  
	bool                                               bBakeRotation;                                              // 0x00A9   (0x0001)  
	EBakeScaleMethod                                   BakeScale;                                                  // 0x00AA   (0x0001)  
	bool                                               bRecenterPivot;                                             // 0x00AB   (0x0001)  
	bool                                               bAllowNoScale;                                              // 0x00AC   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00AD   (0x0003)  MISSED
};

/// Class /Script/MeshModelingToolsExp.BakeTransformTool
/// Size: 0x0020 (0x0000C0 - 0x0000E0)
class UBakeTransformTool : public UMultiSelectionMeshEditingTool
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x00C0   (0x0008)  MISSED
	class UBakeTransformToolProperties*                BasicProperties;                                            // 0x00C8   (0x0008)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x00D0   (0x0010)  MISSED
};

/// Class /Script/MeshModelingToolsExp.ConvertMeshesToolBuilder
/// Size: 0x0000 (0x000028 - 0x000028)
class UConvertMeshesToolBuilder : public UInteractiveToolBuilder
{ 
public:
};

/// Class /Script/MeshModelingToolsExp.ConvertMeshesToolProperties
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UConvertMeshesToolProperties : public UInteractiveToolPropertySet
{ 
public:
	bool                                               bTransferMaterials;                                         // 0x00A8   (0x0001)  
	bool                                               bShowTransferMaterials;                                     // 0x00A9   (0x0001)  
	bool                                               bTransferCollision;                                         // 0x00AA   (0x0001)  
	unsigned char                                      UnknownData00_6[0x5];                                       // 0x00AB   (0x0005)  MISSED
};

/// Class /Script/MeshModelingToolsExp.ConvertMeshesTool
/// Size: 0x0030 (0x0000A0 - 0x0000D0)
class UConvertMeshesTool : public UInteractiveTool
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x00A0   (0x0008)  MISSED
	class UConvertMeshesToolProperties*                BasicProperties;                                            // 0x00A8   (0x0008)  
	class UCreateMeshObjectTypeProperties*             OutputTypeProperties;                                       // 0x00B0   (0x0008)  
	SDK_UNDEFINED(16,15008) /* TArray<TWeakObjectPtr<UPrimitiveComponent*>> */ __um(Inputs);                       // 0x00B8   (0x0010)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x00C8   (0x0008)  MISSED
};

/// Class /Script/MeshModelingToolsExp.ConvertToPolygonsToolBuilder
/// Size: 0x0000 (0x000028 - 0x000028)
class UConvertToPolygonsToolBuilder : public USingleTargetWithSelectionToolBuilder
{ 
public:
};

/// Class /Script/MeshModelingToolsExp.ConvertToPolygonsToolProperties
/// Size: 0x0030 (0x0000A8 - 0x0000D8)
class UConvertToPolygonsToolProperties : public UInteractiveToolPropertySet
{ 
public:
	EConvertToPolygonsMode                             ConversionMode;                                             // 0x00A8   (0x0004)  
	float                                              AngleTolerance;                                             // 0x00AC   (0x0004)  
	bool                                               bUseAverageGroupNormal;                                     // 0x00B0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00B1   (0x0003)  MISSED
	int32_t                                            NumPoints;                                                  // 0x00B4   (0x0004)  
	bool                                               bSplitExisting;                                             // 0x00B8   (0x0001)  
	bool                                               bNormalWeighted;                                            // 0x00B9   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x00BA   (0x0002)  MISSED
	float                                              NormalWeighting;                                            // 0x00BC   (0x0004)  
	float                                              QuadAdjacencyWeight;                                        // 0x00C0   (0x0004)  
	float                                              QuadMetricClamp;                                            // 0x00C4   (0x0004)  
	int32_t                                            QuadSearchRounds;                                           // 0x00C8   (0x0004)  
	bool                                               bRespectUVSeams;                                            // 0x00CC   (0x0001)  
	bool                                               bRespectHardNormals;                                        // 0x00CD   (0x0001)  
	unsigned char                                      UnknownData02_5[0x2];                                       // 0x00CE   (0x0002)  MISSED
	int32_t                                            MinGroupSize;                                               // 0x00D0   (0x0004)  
	bool                                               bCalculateNormals;                                          // 0x00D4   (0x0001)  
	bool                                               bShowGroupColors;                                           // 0x00D5   (0x0001)  
	unsigned char                                      UnknownData03_6[0x2];                                       // 0x00D6   (0x0002)  MISSED
};

/// Class /Script/MeshModelingToolsExp.OutputPolygroupLayerProperties
/// Size: 0x0030 (0x0000A8 - 0x0000D8)
class UOutputPolygroupLayerProperties : public UInteractiveToolPropertySet
{ 
public:
	FName                                              GroupLayer;                                                 // 0x00A8   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00AC   (0x0004)  MISSED
	SDK_UNDEFINED(16,15009) /* TArray<FString> */      __um(OptionsList);                                          // 0x00B0   (0x0010)  
	bool                                               bShowNewLayerName;                                          // 0x00C0   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x00C1   (0x0007)  MISSED
	SDK_UNDEFINED(16,15010) /* FString */              __um(NewLayerName);                                         // 0x00C8   (0x0010)  


	/// Functions
	// Function /Script/MeshModelingToolsExp.OutputPolygroupLayerProperties.GetGroupOptionsList
	// TArray<FString> GetGroupOptionsList();                                                                                // [0xae0b0e4] Final|Native|Public  
};

/// Class /Script/MeshModelingToolsExp.ConvertToPolygonsOperatorFactory
/// Size: 0x0010 (0x000028 - 0x000038)
class UConvertToPolygonsOperatorFactory : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x30];                                      // 0x0000   (0x0030)  MISSED
	class UConvertToPolygonsTool*                      ConvertToPolygonsTool;                                      // 0x0030   (0x0008)  
};

/// Class /Script/MeshModelingToolsExp.ConvertToPolygonsTool
/// Size: 0x0098 (0x000128 - 0x0001C0)
class UConvertToPolygonsTool : public USingleTargetWithSelectionTool
{ 
public:
	class UConvertToPolygonsToolProperties*            Settings;                                                   // 0x0128   (0x0008)  
	class UPolygroupLayersProperties*                  CopyFromLayerProperties;                                    // 0x0130   (0x0008)  
	class UOutputPolygroupLayerProperties*             OutputProperties;                                           // 0x0138   (0x0008)  
	class UMeshOpPreviewWithBackgroundCompute*         PreviewCompute;                                             // 0x0140   (0x0008)  
	class UPreviewGeometry*                            PreviewGeometry;                                            // 0x0148   (0x0008)  
	class UPreviewMesh*                                UnmodifiedAreaPreviewMesh;                                  // 0x0150   (0x0008)  
	unsigned char                                      UnknownData00_6[0x68];                                      // 0x0158   (0x0068)  MISSED
};

/// Class /Script/MeshModelingToolsExp.CubeGridToolBuilder
/// Size: 0x0008 (0x000028 - 0x000030)
class UCubeGridToolBuilder : public UInteractiveToolWithToolTargetsBuilder
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0028   (0x0008)  MISSED
};

/// Class /Script/MeshModelingToolsExp.CubeGridToolProperties
/// Size: 0x0100 (0x0000A8 - 0x0001A8)
class UCubeGridToolProperties : public UInteractiveToolPropertySet
{ 
public:
	FVector                                            GridFrameOrigin;                                            // 0x00A8   (0x0018)  
	FRotator                                           GridFrameOrientation;                                       // 0x00C0   (0x0018)  
	bool                                               bShowGizmo;                                                 // 0x00D8   (0x0001)  
	unsigned char                                      UnknownData00_5[0xF];                                       // 0x00D9   (0x000F)  MISSED
	char                                               GridPower;                                                  // 0x00E8   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x00E9   (0x0007)  MISSED
	double                                             CurrentBlockSize;                                           // 0x00F0   (0x0008)  
	int32_t                                            BlocksPerStep;                                              // 0x00F8   (0x0004)  
	bool                                               bPowerOfTwoBlockSizes;                                      // 0x00FC   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x00FD   (0x0003)  MISSED
	double                                             BlockBaseSize;                                              // 0x0100   (0x0008)  
	bool                                               bCrosswiseDiagonal;                                         // 0x0108   (0x0001)  
	bool                                               bKeepSideGroups;                                            // 0x0109   (0x0001)  
	bool                                               bShowSelectionMeasurements;                                 // 0x010A   (0x0001)  
	unsigned char                                      UnknownData03_5[0x5];                                       // 0x010B   (0x0005)  MISSED
	double                                             PlaneTolerance;                                             // 0x0110   (0x0008)  
	bool                                               bHitUnrelatedGeometry;                                      // 0x0118   (0x0001)  
	bool                                               bHitGridGroundPlaneIfCloser;                                // 0x0119   (0x0001)  
	unsigned char                                      UnknownData04_5[0x2];                                       // 0x011A   (0x0002)  MISSED
	ECubeGridToolFaceSelectionMode                     FaceSelectionMode;                                          // 0x011C   (0x0004)  
	SDK_UNDEFINED(16,15011) /* FString */              __um(ToggleCornerMode);                                     // 0x0120   (0x0010)  
	SDK_UNDEFINED(16,15012) /* FString */              __um(PushPull);                                             // 0x0130   (0x0010)  
	SDK_UNDEFINED(16,15013) /* FString */              __um(ResizeGrid);                                           // 0x0140   (0x0010)  
	unsigned char                                      UnknownData05_5[0x10];                                      // 0x0150   (0x0010)  MISSED
	SDK_UNDEFINED(16,15014) /* FString */              __um(FlipSelection);                                        // 0x0160   (0x0010)  
	SDK_UNDEFINED(16,15015) /* FString */              __um(GridGizmo);                                            // 0x0170   (0x0010)  
	SDK_UNDEFINED(16,15016) /* FString */              __um(QuickShiftGizmo);                                      // 0x0180   (0x0010)  
	SDK_UNDEFINED(16,15017) /* FString */              __um(AlignGizmo);                                           // 0x0190   (0x0010)  
	bool                                               bInCornerMode;                                              // 0x01A0   (0x0001)  
	bool                                               bAllowedToEditGrid;                                         // 0x01A1   (0x0001)  
	unsigned char                                      UnknownData06_6[0x6];                                       // 0x01A2   (0x0006)  MISSED
};

/// Class /Script/MeshModelingToolsExp.CubeGridToolActions
/// Size: 0x0010 (0x0000A8 - 0x0000B8)
class UCubeGridToolActions : public UInteractiveToolPropertySet
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x00A8   (0x0008)  MISSED
	class AActor*                                      GridSourceActor;                                            // 0x00B0   (0x0008)  


	/// Functions
	// Function /Script/MeshModelingToolsExp.CubeGridToolActions.SlideForward
	// void SlideForward();                                                                                                  // [0xb324c9c] Final|Native|Public  
	// Function /Script/MeshModelingToolsExp.CubeGridToolActions.SlideBack
	// void SlideBack();                                                                                                     // [0xb324c84] Final|Native|Public  
	// Function /Script/MeshModelingToolsExp.CubeGridToolActions.ResetGridFromActor
	// void ResetGridFromActor();                                                                                            // [0xb324c54] Final|Native|Public  
	// Function /Script/MeshModelingToolsExp.CubeGridToolActions.Push
	// void Push();                                                                                                          // [0xb324c3c] Final|Native|Public  
	// Function /Script/MeshModelingToolsExp.CubeGridToolActions.Pull
	// void Pull();                                                                                                          // [0xb324c24] Final|Native|Public  
	// Function /Script/MeshModelingToolsExp.CubeGridToolActions.Flip
	// void Flip();                                                                                                          // [0xb324ba0] Final|Native|Public  
	// Function /Script/MeshModelingToolsExp.CubeGridToolActions.CornerMode
	// void CornerMode();                                                                                                    // [0xb324b58] Final|Native|Public  
	// Function /Script/MeshModelingToolsExp.CubeGridToolActions.AcceptAndStartNew
	// void AcceptAndStartNew();                                                                                             // [0xb324af8] Final|Native|Public  
};

/// Class /Script/MeshModelingToolsExp.CubeGridTool
/// Size: 0x0580 (0x0000A0 - 0x000620)
class UCubeGridTool : public UInteractiveTool
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x00A0   (0x0028)  MISSED
	class UCombinedTransformGizmo*                     GridGizmo;                                                  // 0x00C8   (0x0008)  
	class UDragAlignmentMechanic*                      GridGizmoAlignmentMechanic;                                 // 0x00D0   (0x0008)  
	class UTransformProxy*                             GridGizmoTransformProxy;                                    // 0x00D8   (0x0008)  
	class UPreviewGeometry*                            LineSets;                                                   // 0x00E0   (0x0008)  
	class UClickDragInputBehavior*                     ClickDragBehavior;                                          // 0x00E8   (0x0008)  
	class UMouseHoverBehavior*                         HoverBehavior;                                              // 0x00F0   (0x0008)  
	class ULocalSingleClickInputBehavior*              CtrlMiddleClickBehavior;                                    // 0x00F8   (0x0008)  
	class ULocalClickDragInputBehavior*                MiddleClickDragBehavior;                                    // 0x0100   (0x0008)  
	class UCubeGridToolProperties*                     Settings;                                                   // 0x0108   (0x0008)  
	class UCubeGridToolActions*                        ToolActions;                                                // 0x0110   (0x0008)  
	class UNewMeshMaterialProperties*                  MaterialProperties;                                         // 0x0118   (0x0008)  
	class UCreateMeshObjectTypeProperties*             OutputTypeProperties;                                       // 0x0120   (0x0008)  
	class UToolTarget*                                 Target;                                                     // 0x0128   (0x0008)  
	unsigned char                                      UnknownData01_5[0x180];                                     // 0x0130   (0x0180)  MISSED
	class UMeshOpPreviewWithBackgroundCompute*         Preview;                                                    // 0x02B0   (0x0008)  
	unsigned char                                      UnknownData02_6[0x368];                                     // 0x02B8   (0x0368)  MISSED
};

/// Class /Script/MeshModelingToolsExp.DeformMeshPolygonsToolBuilder
/// Size: 0x0000 (0x000030 - 0x000030)
class UDeformMeshPolygonsToolBuilder : public UMeshSurfacePointMeshEditingToolBuilder
{ 
public:
};

/// Class /Script/MeshModelingToolsExp.DeformMeshPolygonsTransformProperties
/// Size: 0x0020 (0x0000A8 - 0x0000C8)
class UDeformMeshPolygonsTransformProperties : public UInteractiveToolPropertySet
{ 
public:
	EGroupTopologyDeformationStrategy                  DeformationStrategy;                                        // 0x00A8   (0x0001)  
	EQuickTransformerMode                              TransformMode;                                              // 0x00A9   (0x0001)  
	bool                                               bSelectFaces;                                               // 0x00AA   (0x0001)  
	bool                                               bSelectEdges;                                               // 0x00AB   (0x0001)  
	bool                                               bSelectVertices;                                            // 0x00AC   (0x0001)  
	bool                                               bShowWireframe;                                             // 0x00AD   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x00AE   (0x0002)  MISSED
	EWeightScheme                                      SelectedWeightScheme;                                       // 0x00B0   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x00B4   (0x0004)  MISSED
	double                                             HandleWeight;                                               // 0x00B8   (0x0008)  
	bool                                               bPostFixHandles;                                            // 0x00C0   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x00C1   (0x0007)  MISSED
};

/// Class /Script/MeshModelingToolsExp.DeformMeshPolygonsTool
/// Size: 0x1708 (0x000108 - 0x001810)
class UDeformMeshPolygonsTool : public UMeshSurfacePointTool
{ 
public:
	unsigned char                                      UnknownData00_3[0x10];                                      // 0x0108   (0x0010)  MISSED
	class AInternalToolFrameworkActor*                 PreviewMeshActor;                                           // 0x0118   (0x0008)  
	class UDynamicMeshComponent*                       DynamicMeshComponent;                                       // 0x0120   (0x0008)  
	class UDeformMeshPolygonsTransformProperties*      TransformProps;                                             // 0x0128   (0x0008)  
	unsigned char                                      UnknownData01_6[0x16E0];                                    // 0x0130   (0x16E0)  MISSED
};

/// Class /Script/MeshModelingToolsExp.DisplaceMeshCommonProperties
/// Size: 0x0030 (0x0000A8 - 0x0000D8)
class UDisplaceMeshCommonProperties : public UInteractiveToolPropertySet
{ 
public:
	EDisplaceMeshToolDisplaceType                      DisplacementType;                                           // 0x00A8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00A9   (0x0003)  MISSED
	float                                              DisplaceIntensity;                                          // 0x00AC   (0x0004)  
	int32_t                                            RandomSeed;                                                 // 0x00B0   (0x0004)  
	EDisplaceMeshToolSubdivisionType                   SubdivisionType;                                            // 0x00B4   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x00B5   (0x0003)  MISSED
	int32_t                                            Subdivisions;                                               // 0x00B8   (0x0004)  
	FName                                              WeightMap;                                                  // 0x00BC   (0x0004)  
	SDK_UNDEFINED(16,15018) /* TArray<FString> */      __um(WeightMapsList);                                       // 0x00C0   (0x0010)  
	bool                                               bInvertWeightMap;                                           // 0x00D0   (0x0001)  
	bool                                               bShowWireframe;                                             // 0x00D1   (0x0001)  
	bool                                               bDisableSizeWarning;                                        // 0x00D2   (0x0001)  
	unsigned char                                      UnknownData02_6[0x5];                                       // 0x00D3   (0x0005)  MISSED


	/// Functions
	// Function /Script/MeshModelingToolsExp.DisplaceMeshCommonProperties.GetWeightMapsFunc
	// TArray<FString> GetWeightMapsFunc();                                                                                  // [0xb324bd0] Final|Native|Public  
};

/// Class /Script/MeshModelingToolsExp.SelectiveTessellationProperties
/// Size: 0x0018 (0x0000A8 - 0x0000C0)
class USelectiveTessellationProperties : public UInteractiveToolPropertySet
{ 
public:
	EDisplaceMeshToolTriangleSelectionType             SelectionType;                                              // 0x00A8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00A9   (0x0003)  MISSED
	FName                                              ActiveMaterial;                                             // 0x00AC   (0x0004)  
	SDK_UNDEFINED(16,15019) /* TArray<FString> */      __um(MaterialIDList);                                       // 0x00B0   (0x0010)  


	/// Functions
	// Function /Script/MeshModelingToolsExp.SelectiveTessellationProperties.GetMaterialIDsFunc
	// TArray<FString> GetMaterialIDsFunc();                                                                                 // [0xae0b0e4] Final|Native|Public  
};

/// Class /Script/MeshModelingToolsExp.DisplaceMeshTextureMapProperties
/// Size: 0x0048 (0x0000A8 - 0x0000F0)
class UDisplaceMeshTextureMapProperties : public UInteractiveToolPropertySet
{ 
public:
	class UTexture2D*                                  DisplacementMap;                                            // 0x00A8   (0x0008)  
	EDisplaceMeshToolChannelType                       Channel;                                                    // 0x00B0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00B1   (0x0003)  MISSED
	float                                              DisplacementMapBaseValue;                                   // 0x00B4   (0x0004)  
	FVector2D                                          UVScale;                                                    // 0x00B8   (0x0010)  
	FVector2D                                          UVOffset;                                                   // 0x00C8   (0x0010)  
	bool                                               bApplyAdjustmentCurve;                                      // 0x00D8   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x00D9   (0x0007)  MISSED
	class UCurveFloat*                                 AdjustmentCurve;                                            // 0x00E0   (0x0008)  
	bool                                               bRecalcNormals;                                             // 0x00E8   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x00E9   (0x0007)  MISSED
};

/// Class /Script/MeshModelingToolsExp.DisplaceMeshDirectionalFilterProperties
/// Size: 0x0028 (0x0000A8 - 0x0000D0)
class UDisplaceMeshDirectionalFilterProperties : public UInteractiveToolPropertySet
{ 
public:
	bool                                               bEnableFilter;                                              // 0x00A8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x00A9   (0x0007)  MISSED
	FVector                                            FilterDirection;                                            // 0x00B0   (0x0018)  
	float                                              FilterWidth;                                                // 0x00C8   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x00CC   (0x0004)  MISSED
};

/// Struct /Script/MeshModelingToolsExp.PerlinLayerProperties
/// Size: 0x0008 (0x000000 - 0x000008)
struct FPerlinLayerProperties
{ 
	float                                              Frequency;                                                  // 0x0000   (0x0004)  
	float                                              Intensity;                                                  // 0x0004   (0x0004)  
};

/// Class /Script/MeshModelingToolsExp.DisplaceMeshPerlinNoiseProperties
/// Size: 0x0010 (0x0000A8 - 0x0000B8)
class UDisplaceMeshPerlinNoiseProperties : public UInteractiveToolPropertySet
{ 
public:
	TArray<FPerlinLayerProperties>                     PerlinLayerProperties;                                      // 0x00A8   (0x0010)  
};

/// Class /Script/MeshModelingToolsExp.DisplaceMeshSineWaveProperties
/// Size: 0x0020 (0x0000A8 - 0x0000C8)
class UDisplaceMeshSineWaveProperties : public UInteractiveToolPropertySet
{ 
public:
	float                                              SineWaveFrequency;                                          // 0x00A8   (0x0004)  
	float                                              SineWavePhaseShift;                                         // 0x00AC   (0x0004)  
	FVector                                            SineWaveDirection;                                          // 0x00B0   (0x0018)  
};

/// Class /Script/MeshModelingToolsExp.DisplaceMeshToolBuilder
/// Size: 0x0000 (0x000028 - 0x000028)
class UDisplaceMeshToolBuilder : public USingleSelectionMeshEditingToolBuilder
{ 
public:
};

/// Class /Script/MeshModelingToolsExp.DisplaceMeshTool
/// Size: 0x03B8 (0x0000B8 - 0x000470)
class UDisplaceMeshTool : public USingleSelectionMeshEditingTool
{ 
public:
	class UDisplaceMeshCommonProperties*               CommonProperties;                                           // 0x00B8   (0x0008)  
	class UDisplaceMeshDirectionalFilterProperties*    DirectionalFilterProperties;                                // 0x00C0   (0x0008)  
	class UDisplaceMeshTextureMapProperties*           TextureMapProperties;                                       // 0x00C8   (0x0008)  
	class UDisplaceMeshPerlinNoiseProperties*          NoiseProperties;                                            // 0x00D0   (0x0008)  
	class UDisplaceMeshSineWaveProperties*             SineWaveProperties;                                         // 0x00D8   (0x0008)  
	class USelectiveTessellationProperties*            SelectiveTessellationProperties;                            // 0x00E0   (0x0008)  
	class UCurveFloat*                                 ActiveContrastCurveTarget;                                  // 0x00E8   (0x0008)  
	class UMeshStatisticsProperties*                   MeshStatistics;                                             // 0x00F0   (0x0008)  
	unsigned char                                      UnknownData00_5[0x348];                                     // 0x00F8   (0x0348)  MISSED
	class AInternalToolFrameworkActor*                 PreviewMeshActor;                                           // 0x0440   (0x0008)  
	class UDynamicMeshComponent*                       DynamicMeshComponent;                                       // 0x0448   (0x0008)  
	unsigned char                                      UnknownData01_6[0x20];                                      // 0x0450   (0x0020)  MISSED
};

/// Class /Script/MeshModelingToolsExp.DrawPolyPathToolBuilder
/// Size: 0x0000 (0x000028 - 0x000028)
class UDrawPolyPathToolBuilder : public UInteractiveToolBuilder
{ 
public:
};

/// Class /Script/MeshModelingToolsExp.DrawPolyPathProperties
/// Size: 0x0028 (0x0000A8 - 0x0000D0)
class UDrawPolyPathProperties : public UInteractiveToolPropertySet
{ 
public:
	EDrawPolyPathWidthMode                             WidthMode;                                                  // 0x00A8   (0x0004)  
	float                                              Width;                                                      // 0x00AC   (0x0004)  
	bool                                               bRoundedCorners;                                            // 0x00B0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00B1   (0x0003)  MISSED
	EDrawPolyPathRadiusMode                            RadiusMode;                                                 // 0x00B4   (0x0004)  
	float                                              CornerRadius;                                               // 0x00B8   (0x0004)  
	int32_t                                            RadialSlices;                                               // 0x00BC   (0x0004)  
	bool                                               bSinglePolyGroup;                                           // 0x00C0   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x00C1   (0x0003)  MISSED
	EDrawPolyPathExtrudeMode                           ExtrudeMode;                                                // 0x00C4   (0x0004)  
	float                                              ExtrudeHeight;                                              // 0x00C8   (0x0004)  
	float                                              RampStartRatio;                                             // 0x00CC   (0x0004)  
};

/// Class /Script/MeshModelingToolsExp.DrawPolyPathExtrudeProperties
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UDrawPolyPathExtrudeProperties : public UInteractiveToolPropertySet
{ 
public:
	EDrawPolyPathExtrudeDirection                      Direction;                                                  // 0x00A8   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00AC   (0x0004)  MISSED
};

/// Class /Script/MeshModelingToolsExp.DrawPolyPathTool
/// Size: 0x01E0 (0x0000A0 - 0x000280)
class UDrawPolyPathTool : public UInteractiveTool
{ 
public:
	unsigned char                                      UnknownData00_3[0x18];                                      // 0x00A0   (0x0018)  MISSED
	class UCreateMeshObjectTypeProperties*             OutputTypeProperties;                                       // 0x00B8   (0x0008)  
	class UDrawPolyPathProperties*                     TransformProps;                                             // 0x00C0   (0x0008)  
	class UDrawPolyPathExtrudeProperties*              ExtrudeProperties;                                          // 0x00C8   (0x0008)  
	class UNewMeshMaterialProperties*                  MaterialProperties;                                         // 0x00D0   (0x0008)  
	unsigned char                                      UnknownData01_5[0xB8];                                      // 0x00D8   (0x00B8)  MISSED
	class UConstructionPlaneMechanic*                  PlaneMechanic;                                              // 0x0190   (0x0008)  
	unsigned char                                      UnknownData02_5[0xC0];                                      // 0x0198   (0x00C0)  MISSED
	class UPolyEditPreviewMesh*                        EditPreview;                                                // 0x0258   (0x0008)  
	class UPlaneDistanceFromHitMechanic*               ExtrudeHeightMechanic;                                      // 0x0260   (0x0008)  
	class USpatialCurveDistanceMechanic*               CurveDistMechanic;                                          // 0x0268   (0x0008)  
	class UCollectSurfacePathMechanic*                 SurfacePathMechanic;                                        // 0x0270   (0x0008)  
	unsigned char                                      UnknownData03_6[0x8];                                       // 0x0278   (0x0008)  MISSED
};

/// Class /Script/MeshModelingToolsExp.DynamicMeshBrushTool
/// Size: 0x0048 (0x000288 - 0x0002D0)
class UDynamicMeshBrushTool : public UBaseBrushTool
{ 
public:
	class UPreviewMesh*                                PreviewMesh;                                                // 0x0288   (0x0008)  
	unsigned char                                      UnknownData00_6[0x40];                                      // 0x0290   (0x0040)  MISSED
};

/// Class /Script/MeshModelingToolsExp.DynamicMeshSculptToolBuilder
/// Size: 0x0008 (0x000030 - 0x000038)
class UDynamicMeshSculptToolBuilder : public UMeshSurfacePointMeshEditingToolBuilder
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0030   (0x0008)  MISSED
};

/// Struct /Script/MeshModelingToolsExp.BrushToolRadius
/// Size: 0x0014 (0x000000 - 0x000014)
struct FBrushToolRadius
{ 
	EBrushToolSizeType                                 SizeType;                                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              AdaptiveSize;                                               // 0x0004   (0x0004)  
	float                                              WorldRadius;                                                // 0x0008   (0x0004)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x000C   (0x0008)  MISSED
};

/// Class /Script/MeshModelingToolsExp.DynamicMeshBrushProperties
/// Size: 0x0020 (0x0000A8 - 0x0000C8)
class UDynamicMeshBrushProperties : public UInteractiveToolPropertySet
{ 
public:
	FBrushToolRadius                                   BrushSize;                                                  // 0x00A8   (0x0014)  
	float                                              BrushFalloffAmount;                                         // 0x00BC   (0x0004)  
	float                                              Depth;                                                      // 0x00C0   (0x0004)  
	bool                                               bHitBackFaces;                                              // 0x00C4   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00C5   (0x0003)  MISSED
};

/// Class /Script/MeshModelingToolsExp.DynamicMeshBrushSculptProperties
/// Size: 0x0018 (0x0000A8 - 0x0000C0)
class UDynamicMeshBrushSculptProperties : public UInteractiveToolPropertySet
{ 
public:
	bool                                               bIsRemeshingEnabled;                                        // 0x00A8   (0x0001)  
	EDynamicMeshSculptBrushType                        PrimaryBrushType;                                           // 0x00A9   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x00AA   (0x0002)  MISSED
	float                                              PrimaryBrushSpeed;                                          // 0x00AC   (0x0004)  
	bool                                               bPreserveUVFlow;                                            // 0x00B0   (0x0001)  
	bool                                               bFreezeTarget;                                              // 0x00B1   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x00B2   (0x0002)  MISSED
	float                                              SmoothBrushSpeed;                                           // 0x00B4   (0x0004)  
	bool                                               bDetailPreservingSmooth;                                    // 0x00B8   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x00B9   (0x0007)  MISSED
};

/// Class /Script/MeshModelingToolsExp.DynamicSculptToolActions
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UDynamicSculptToolActions : public UInteractiveToolPropertySet
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00A8   (0x0008)  MISSED


	/// Functions
	// Function /Script/MeshModelingToolsExp.DynamicSculptToolActions.DiscardAttributes
	// void DiscardAttributes();                                                                                             // [0xb324b70] Final|Native|Public  
};

/// Class /Script/MeshModelingToolsExp.BrushRemeshProperties
/// Size: 0x0010 (0x0000B8 - 0x0000C8)
class UBrushRemeshProperties : public URemeshProperties
{ 
public:
	bool                                               bEnableRemeshing;                                           // 0x00B8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00B9   (0x0003)  MISSED
	int32_t                                            TriangleSize;                                               // 0x00BC   (0x0004)  
	int32_t                                            PreserveDetail;                                             // 0x00C0   (0x0004)  
	int32_t                                            Iterations;                                                 // 0x00C4   (0x0004)  
};

/// Class /Script/MeshModelingToolsExp.FixedPlaneBrushProperties
/// Size: 0x0048 (0x0000A8 - 0x0000F0)
class UFixedPlaneBrushProperties : public UInteractiveToolPropertySet
{ 
public:
	bool                                               bPropertySetEnabled;                                        // 0x00A8   (0x0001)  
	bool                                               bShowGizmo;                                                 // 0x00A9   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x00AA   (0x0006)  MISSED
	FVector                                            Position;                                                   // 0x00B0   (0x0018)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x00C8   (0x0008)  MISSED
	FQuat                                              Rotation;                                                   // 0x00D0   (0x0020)  
};

/// Class /Script/MeshModelingToolsExp.DynamicMeshSculptTool
/// Size: 0x0F18 (0x000108 - 0x001020)
class UDynamicMeshSculptTool : public UMeshSurfacePointTool
{ 
public:
	class UDynamicMeshBrushProperties*                 BrushProperties;                                            // 0x0108   (0x0008)  
	class UDynamicMeshBrushSculptProperties*           SculptProperties;                                           // 0x0110   (0x0008)  
	class USculptMaxBrushProperties*                   SculptMaxBrushProperties;                                   // 0x0118   (0x0008)  
	class UKelvinBrushProperties*                      KelvinBrushProperties;                                      // 0x0120   (0x0008)  
	class UBrushRemeshProperties*                      RemeshProperties;                                           // 0x0128   (0x0008)  
	class UFixedPlaneBrushProperties*                  GizmoProperties;                                            // 0x0130   (0x0008)  
	class UMeshEditingViewProperties*                  ViewProperties;                                             // 0x0138   (0x0008)  
	class UDynamicSculptToolActions*                   SculptToolActions;                                          // 0x0140   (0x0008)  
	unsigned char                                      UnknownData00_5[0x58];                                      // 0x0148   (0x0058)  MISSED
	class UBrushStampIndicator*                        BrushIndicator;                                             // 0x01A0   (0x0008)  
	class UMaterialInstanceDynamic*                    BrushIndicatorMaterial;                                     // 0x01A8   (0x0008)  
	class UPreviewMesh*                                BrushIndicatorMesh;                                         // 0x01B0   (0x0008)  
	class AInternalToolFrameworkActor*                 PreviewMeshActor;                                           // 0x01B8   (0x0008)  
	class UOctreeDynamicMeshComponent*                 DynamicMeshComponent;                                       // 0x01C0   (0x0008)  
	class UMaterialInstanceDynamic*                    ActiveOverrideMaterial;                                     // 0x01C8   (0x0008)  
	unsigned char                                      UnknownData01_5[0xE38];                                     // 0x01D0   (0x0E38)  MISSED
	class UCombinedTransformGizmo*                     PlaneTransformGizmo;                                        // 0x1008   (0x0008)  
	class UTransformProxy*                             PlaneTransformProxy;                                        // 0x1010   (0x0008)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x1018   (0x0008)  MISSED
};

/// Class /Script/MeshModelingToolsExp.EditNormalsToolBuilder
/// Size: 0x0000 (0x000028 - 0x000028)
class UEditNormalsToolBuilder : public UMultiSelectionMeshEditingToolBuilder
{ 
public:
};

/// Class /Script/MeshModelingToolsExp.EditNormalsToolProperties
/// Size: 0x0010 (0x0000A8 - 0x0000B8)
class UEditNormalsToolProperties : public UInteractiveToolPropertySet
{ 
public:
	bool                                               bRecomputeNormals;                                          // 0x00A8   (0x0001)  
	ENormalCalculationMethod                           NormalCalculationMethod;                                    // 0x00A9   (0x0001)  
	bool                                               bFixInconsistentNormals;                                    // 0x00AA   (0x0001)  
	bool                                               bInvertNormals;                                             // 0x00AB   (0x0001)  
	ESplitNormalMethod                                 SplitNormalMethod;                                          // 0x00AC   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00AD   (0x0003)  MISSED
	float                                              SharpEdgeAngleThreshold;                                    // 0x00B0   (0x0004)  
	bool                                               bAllowSharpVertices;                                        // 0x00B4   (0x0001)  
	bool                                               bToolHasSelection;                                          // 0x00B5   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x00B6   (0x0002)  MISSED
};

/// Class /Script/MeshModelingToolsExp.EditNormalsOperatorFactory
/// Size: 0x0018 (0x000028 - 0x000040)
class UEditNormalsOperatorFactory : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x30];                                      // 0x0000   (0x0030)  MISSED
	class UEditNormalsTool*                            Tool;                                                       // 0x0030   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0038   (0x0008)  MISSED
};

/// Class /Script/MeshModelingToolsExp.EditNormalsTool
/// Size: 0x0210 (0x0000C0 - 0x0002D0)
class UEditNormalsTool : public UMultiSelectionMeshEditingTool
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x00C0   (0x0008)  MISSED
	class UEditNormalsToolProperties*                  BasicProperties;                                            // 0x00C8   (0x0008)  
	class UPolygroupLayersProperties*                  PolygroupLayerProperties;                                   // 0x00D0   (0x0008)  
	TArray<class UMeshOpPreviewWithBackgroundCompute*> Previews;                                                   // 0x00D8   (0x0010)  
	unsigned char                                      UnknownData01_5[0x78];                                      // 0x00E8   (0x0078)  MISSED
	class UGeometrySelectionVisualizationProperties*   GeometrySelectionVizProperties;                             // 0x0160   (0x0008)  
	class UPreviewGeometry*                            GeometrySelectionViz;                                       // 0x0168   (0x0008)  
	unsigned char                                      UnknownData02_6[0x160];                                     // 0x0170   (0x0160)  MISSED
};

/// Class /Script/MeshModelingToolsExp.EditPivotToolBuilder
/// Size: 0x0000 (0x000028 - 0x000028)
class UEditPivotToolBuilder : public UMultiSelectionMeshEditingToolBuilder
{ 
public:
};

/// Class /Script/MeshModelingToolsExp.EditPivotToolProperties
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UEditPivotToolProperties : public UInteractiveToolPropertySet
{ 
public:
	bool                                               bApplyToAllLODs;                                            // 0x00A8   (0x0001)  
	bool                                               bEnableSnapDragging;                                        // 0x00A9   (0x0001)  
	EEditPivotSnapDragRotationMode                     RotationMode;                                               // 0x00AA   (0x0001)  
	unsigned char                                      UnknownData00_6[0x5];                                       // 0x00AB   (0x0005)  MISSED
};

/// Class /Script/MeshModelingToolsExp.EditPivotToolActionPropertySet
/// Size: 0x0010 (0x0000A8 - 0x0000B8)
class UEditPivotToolActionPropertySet : public UInteractiveToolPropertySet
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x00A8   (0x0008)  MISSED
	bool                                               bUseWorldBox;                                               // 0x00B0   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x00B1   (0x0007)  MISSED


	/// Functions
	// Function /Script/MeshModelingToolsExp.EditPivotToolActionPropertySet.WorldOrigin
	// void WorldOrigin();                                                                                                   // [0xb324ccc] Final|Native|Public  
	// Function /Script/MeshModelingToolsExp.EditPivotToolActionPropertySet.Top
	// void Top();                                                                                                           // [0xb324cb4] Final|Native|Public  
	// Function /Script/MeshModelingToolsExp.EditPivotToolActionPropertySet.Right
	// void Right();                                                                                                         // [0xb324c6c] Final|Native|Public  
	// Function /Script/MeshModelingToolsExp.EditPivotToolActionPropertySet.Left
	// void Left();                                                                                                          // [0xb324c0c] Final|Native|Public  
	// Function /Script/MeshModelingToolsExp.EditPivotToolActionPropertySet.Front
	// void Front();                                                                                                         // [0xb324bb8] Final|Native|Public  
	// Function /Script/MeshModelingToolsExp.EditPivotToolActionPropertySet.Center
	// void Center();                                                                                                        // [0xb324b40] Final|Native|Public  
	// Function /Script/MeshModelingToolsExp.EditPivotToolActionPropertySet.Bottom
	// void Bottom();                                                                                                        // [0xb324b28] Final|Native|Public  
	// Function /Script/MeshModelingToolsExp.EditPivotToolActionPropertySet.Back
	// void Back();                                                                                                          // [0xb324b10] Final|Native|Public  
};

/// Struct /Script/MeshModelingToolsExp.EditPivotTarget
/// Size: 0x0010 (0x000000 - 0x000010)
struct FEditPivotTarget
{ 
	class UTransformProxy*                             TransformProxy;                                             // 0x0000   (0x0008)  
	class UCombinedTransformGizmo*                     TransformGizmo;                                             // 0x0008   (0x0008)  
};

/// Class /Script/MeshModelingToolsExp.EditPivotTool
/// Size: 0x0180 (0x0000C0 - 0x000240)
class UEditPivotTool : public UMultiSelectionMeshEditingTool
{ 
public:
	unsigned char                                      UnknownData00_3[0x10];                                      // 0x00C0   (0x0010)  MISSED
	class UEditPivotToolProperties*                    TransformProps;                                             // 0x00D0   (0x0008)  
	class UEditPivotToolActionPropertySet*             EditPivotActions;                                           // 0x00D8   (0x0008)  
	unsigned char                                      UnknownData01_5[0xD0];                                      // 0x00E0   (0x00D0)  MISSED
	TArray<FEditPivotTarget>                           ActiveGizmos;                                               // 0x01B0   (0x0010)  
	class UDragAlignmentMechanic*                      DragAlignmentMechanic;                                      // 0x01C0   (0x0008)  
	unsigned char                                      UnknownData02_6[0x78];                                      // 0x01C8   (0x0078)  MISSED
};

/// Class /Script/MeshModelingToolsExp.EditUVIslandsToolBuilder
/// Size: 0x0000 (0x000030 - 0x000030)
class UEditUVIslandsToolBuilder : public UMeshSurfacePointMeshEditingToolBuilder
{ 
public:
};

/// Class /Script/MeshModelingToolsExp.EditUVIslandsTool
/// Size: 0x03E8 (0x000108 - 0x0004F0)
class UEditUVIslandsTool : public UMeshSurfacePointTool
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0108   (0x0008)  MISSED
	class UExistingMeshMaterialProperties*             MaterialSettings;                                           // 0x0110   (0x0008)  
	class UMaterialInstanceDynamic*                    CheckerMaterial;                                            // 0x0118   (0x0008)  
	class AInternalToolFrameworkActor*                 PreviewMeshActor;                                           // 0x0120   (0x0008)  
	class UDynamicMeshComponent*                       DynamicMeshComponent;                                       // 0x0128   (0x0008)  
	class UPolygonSelectionMechanic*                   SelectionMechanic;                                          // 0x0130   (0x0008)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0138   (0x0008)  MISSED
	class UCombinedTransformGizmo*                     TransformGizmo;                                             // 0x0140   (0x0008)  
	class UTransformProxy*                             TransformProxy;                                             // 0x0148   (0x0008)  
	unsigned char                                      UnknownData02_6[0x3A0];                                     // 0x0150   (0x03A0)  MISSED
};

/// Class /Script/MeshModelingToolsExp.HoleFillToolBuilder
/// Size: 0x0000 (0x000028 - 0x000028)
class UHoleFillToolBuilder : public USingleSelectionMeshEditingToolBuilder
{ 
public:
};

/// Class /Script/MeshModelingToolsExp.SmoothHoleFillProperties
/// Size: 0x0028 (0x0000A8 - 0x0000D0)
class USmoothHoleFillProperties : public UInteractiveToolPropertySet
{ 
public:
	bool                                               bConstrainToHoleInterior;                                   // 0x00A8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00A9   (0x0003)  MISSED
	int32_t                                            RemeshingExteriorRegionWidth;                               // 0x00AC   (0x0004)  
	int32_t                                            SmoothingExteriorRegionWidth;                               // 0x00B0   (0x0004)  
	int32_t                                            SmoothingInteriorRegionWidth;                               // 0x00B4   (0x0004)  
	float                                              InteriorSmoothness;                                         // 0x00B8   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x00BC   (0x0004)  MISSED
	double                                             FillDensityScalar;                                          // 0x00C0   (0x0008)  
	bool                                               bProjectDuringRemesh;                                       // 0x00C8   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x00C9   (0x0007)  MISSED
};

/// Class /Script/MeshModelingToolsExp.HoleFillToolProperties
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UHoleFillToolProperties : public UInteractiveToolPropertySet
{ 
public:
	EHoleFillOpFillType                                FillType;                                                   // 0x00A8   (0x0001)  
	bool                                               bRemoveIsolatedTriangles;                                   // 0x00A9   (0x0001)  
	bool                                               bQuickFillSmallHoles;                                       // 0x00AA   (0x0001)  
	unsigned char                                      UnknownData00_6[0x5];                                       // 0x00AB   (0x0005)  MISSED
};

/// Class /Script/MeshModelingToolsExp.HoleFillToolActions
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UHoleFillToolActions : public UInteractiveToolPropertySet
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00A8   (0x0008)  MISSED


	/// Functions
	// Function /Script/MeshModelingToolsExp.HoleFillToolActions.SelectAll
	// void SelectAll();                                                                                                     // [0xb36a218] Final|Native|Public  
	// Function /Script/MeshModelingToolsExp.HoleFillToolActions.Clear
	// void Clear();                                                                                                         // [0xb369f98] Final|Native|Public  
};

/// Class /Script/MeshModelingToolsExp.HoleFillStatisticsProperties
/// Size: 0x0050 (0x0000A8 - 0x0000F8)
class UHoleFillStatisticsProperties : public UInteractiveToolPropertySet
{ 
public:
	SDK_UNDEFINED(16,15020) /* FString */              __um(InitialHoles);                                         // 0x00A8   (0x0010)  
	SDK_UNDEFINED(16,15021) /* FString */              __um(SelectedHoles);                                        // 0x00B8   (0x0010)  
	SDK_UNDEFINED(16,15022) /* FString */              __um(SuccessfulFills);                                      // 0x00C8   (0x0010)  
	SDK_UNDEFINED(16,15023) /* FString */              __um(FailedFills);                                          // 0x00D8   (0x0010)  
	SDK_UNDEFINED(16,15024) /* FString */              __um(RemainingHoles);                                       // 0x00E8   (0x0010)  
};

/// Class /Script/MeshModelingToolsExp.HoleFillOperatorFactory
/// Size: 0x0010 (0x000028 - 0x000038)
class UHoleFillOperatorFactory : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x30];                                      // 0x0000   (0x0030)  MISSED
	class UHoleFillTool*                               FillTool;                                                   // 0x0030   (0x0008)  
};

/// Class /Script/MeshModelingToolsExp.HoleFillTool
/// Size: 0x0188 (0x0000B8 - 0x000240)
class UHoleFillTool : public USingleSelectionMeshEditingTool
{ 
public:
	class USmoothHoleFillProperties*                   SmoothHoleFillProperties;                                   // 0x00B8   (0x0008)  
	class UHoleFillToolProperties*                     Properties;                                                 // 0x00C0   (0x0008)  
	class UHoleFillToolActions*                        Actions;                                                    // 0x00C8   (0x0008)  
	class UHoleFillStatisticsProperties*               Statistics;                                                 // 0x00D0   (0x0008)  
	class UMeshOpPreviewWithBackgroundCompute*         Preview;                                                    // 0x00D8   (0x0008)  
	class UBoundarySelectionMechanic*                  SelectionMechanic;                                          // 0x00E0   (0x0008)  
	unsigned char                                      UnknownData00_6[0x158];                                     // 0x00E8   (0x0158)  MISSED
};

/// Class /Script/MeshModelingToolsExp.LatticeDeformerToolBuilder
/// Size: 0x0000 (0x000028 - 0x000028)
class ULatticeDeformerToolBuilder : public USingleSelectionMeshEditingToolBuilder
{ 
public:
};

/// Class /Script/MeshModelingToolsExp.LatticeDeformerToolProperties
/// Size: 0x0020 (0x0000A8 - 0x0000C8)
class ULatticeDeformerToolProperties : public UInteractiveToolPropertySet
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x00A8   (0x0008)  MISSED
	int32_t                                            XAxisResolution;                                            // 0x00B0   (0x0004)  
	int32_t                                            YAxisResolution;                                            // 0x00B4   (0x0004)  
	int32_t                                            ZAxisResolution;                                            // 0x00B8   (0x0004)  
	float                                              Padding;                                                    // 0x00BC   (0x0004)  
	ELatticeInterpolationType                          InterpolationType;                                          // 0x00C0   (0x0001)  
	bool                                               bDeformNormals;                                             // 0x00C1   (0x0001)  
	bool                                               bCanChangeResolution;                                       // 0x00C2   (0x0001)  
	EToolContextCoordinateSystem                       GizmoCoordinateSystem;                                      // 0x00C3   (0x0001)  
	bool                                               bSetPivotMode;                                              // 0x00C4   (0x0001)  
	bool                                               bSoftDeformation;                                           // 0x00C5   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x00C6   (0x0002)  MISSED


	/// Functions
	// Function /Script/MeshModelingToolsExp.LatticeDeformerToolProperties.Constrain
	// void Constrain();                                                                                                     // [0xb36a00c] Final|Native|Public  
	// Function /Script/MeshModelingToolsExp.LatticeDeformerToolProperties.ClearConstraints
	// void ClearConstraints();                                                                                              // [0xb369fe0] Final|Native|Public  
};

/// Class /Script/MeshModelingToolsExp.LatticeDeformerOperatorFactory
/// Size: 0x0010 (0x000028 - 0x000038)
class ULatticeDeformerOperatorFactory : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x30];                                      // 0x0000   (0x0030)  MISSED
	class ULatticeDeformerTool*                        LatticeDeformerTool;                                        // 0x0030   (0x0008)  
};

/// Class /Script/MeshModelingToolsExp.LatticeDeformerTool
/// Size: 0x00B0 (0x0000B8 - 0x000168)
class ULatticeDeformerTool : public USingleSelectionMeshEditingTool
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x00B8   (0x0028)  MISSED
	class ULatticeControlPointsMechanic*               ControlPointsMechanic;                                      // 0x00E0   (0x0008)  
	class ULatticeDeformerToolProperties*              Settings;                                                   // 0x00E8   (0x0008)  
	class UMeshOpPreviewWithBackgroundCompute*         Preview;                                                    // 0x00F0   (0x0008)  
	bool                                               bLatticeDeformed;                                           // 0x00F8   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6F];                                      // 0x00F9   (0x006F)  MISSED
};

/// Class /Script/MeshModelingToolsExp.MeshAttributePaintToolBuilder
/// Size: 0x0040 (0x000030 - 0x000070)
class UMeshAttributePaintToolBuilder : public UMeshSurfacePointMeshEditingToolBuilder
{ 
public:
	unsigned char                                      UnknownData00_1[0x40];                                      // 0x0030   (0x0040)  MISSED
};

/// Class /Script/MeshModelingToolsExp.MeshAttributePaintBrushOperationProperties
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UMeshAttributePaintBrushOperationProperties : public UInteractiveToolPropertySet
{ 
public:
	EBrushActionMode                                   BrushAction;                                                // 0x00A8   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00AC   (0x0004)  MISSED
};

/// Class /Script/MeshModelingToolsExp.MeshAttributePaintToolProperties
/// Size: 0x0020 (0x0000A8 - 0x0000C8)
class UMeshAttributePaintToolProperties : public UInteractiveToolPropertySet
{ 
public:
	SDK_UNDEFINED(16,15025) /* FString */              __um(Attribute);                                            // 0x00A8   (0x0010)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x00B8   (0x0010)  MISSED


	/// Functions
	// Function /Script/MeshModelingToolsExp.MeshAttributePaintToolProperties.GetAttributeNames
	// TArray<FString> GetAttributeNames();                                                                                  // [0xb036208] Final|Native|Public  
};

/// Class /Script/MeshModelingToolsExp.MeshAttributePaintEditActions
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UMeshAttributePaintEditActions : public UInteractiveToolPropertySet
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00A8   (0x0008)  MISSED
};

/// Class /Script/MeshModelingToolsExp.MeshAttributePaintTool
/// Size: 0x0500 (0x0002D0 - 0x0007D0)
class UMeshAttributePaintTool : public UDynamicMeshBrushTool
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x02D0   (0x0008)  MISSED
	class UMeshAttributePaintBrushOperationProperties* BrushActionProps;                                           // 0x02D8   (0x0008)  
	class UMeshAttributePaintToolProperties*           AttribProps;                                                // 0x02E0   (0x0008)  
	unsigned char                                      UnknownData01_6[0x4E8];                                     // 0x02E8   (0x04E8)  MISSED
};

/// Class /Script/MeshModelingToolsExp.MeshBoundaryToolBase
/// Size: 0x00F8 (0x0000B8 - 0x0001B0)
class UMeshBoundaryToolBase : public USingleSelectionMeshEditingTool
{ 
public:
	unsigned char                                      UnknownData00_3[0xE8];                                      // 0x00B8   (0x00E8)  MISSED
	class UPolygonSelectionMechanic*                   SelectionMechanic;                                          // 0x01A0   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x01A8   (0x0008)  MISSED
};

/// Class /Script/MeshModelingToolsExp.MeshGroupPaintToolBuilder
/// Size: 0x0000 (0x000030 - 0x000030)
class UMeshGroupPaintToolBuilder : public UMeshSurfacePointMeshEditingToolBuilder
{ 
public:
};

/// Class /Script/MeshModelingToolsExp.GroupPaintBrushFilterProperties
/// Size: 0x0030 (0x0000A8 - 0x0000D8)
class UGroupPaintBrushFilterProperties : public UInteractiveToolPropertySet
{ 
public:
	EMeshGroupPaintBrushType                           PrimaryBrushType;                                           // 0x00A8   (0x0001)  
	EMeshGroupPaintInteractionType                     SubToolType;                                                // 0x00A9   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x00AA   (0x0002)  MISSED
	float                                              BrushSize;                                                  // 0x00AC   (0x0004)  
	EMeshGroupPaintBrushAreaType                       BrushAreaMode;                                              // 0x00B0   (0x0001)  
	bool                                               bHitBackFaces;                                              // 0x00B1   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x00B2   (0x0002)  MISSED
	int32_t                                            SetGroup;                                                   // 0x00B4   (0x0004)  
	bool                                               bOnlySetUngrouped;                                          // 0x00B8   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x00B9   (0x0003)  MISSED
	int32_t                                            EraseGroup;                                                 // 0x00BC   (0x0004)  
	bool                                               bOnlyEraseCurrent;                                          // 0x00C0   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x00C1   (0x0003)  MISSED
	float                                              AngleThreshold;                                             // 0x00C4   (0x0004)  
	bool                                               bUVSeams;                                                   // 0x00C8   (0x0001)  
	bool                                               bNormalSeams;                                               // 0x00C9   (0x0001)  
	EMeshGroupPaintVisibilityType                      VisibilityFilter;                                           // 0x00CA   (0x0001)  
	unsigned char                                      UnknownData04_5[0x1];                                       // 0x00CB   (0x0001)  MISSED
	int32_t                                            MinTriVertCount;                                            // 0x00CC   (0x0004)  
	bool                                               bShowHitGroup;                                              // 0x00D0   (0x0001)  
	bool                                               bShowAllGroups;                                             // 0x00D1   (0x0001)  
	unsigned char                                      UnknownData05_6[0x6];                                       // 0x00D2   (0x0006)  MISSED
};

/// Class /Script/MeshModelingToolsExp.MeshGroupPaintToolActionPropertySet
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UMeshGroupPaintToolActionPropertySet : public UInteractiveToolPropertySet
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00A8   (0x0008)  MISSED
};

/// Class /Script/MeshModelingToolsExp.MeshGroupPaintToolFreezeActions
/// Size: 0x0000 (0x0000B0 - 0x0000B0)
class UMeshGroupPaintToolFreezeActions : public UMeshGroupPaintToolActionPropertySet
{ 
public:


	/// Functions
	// Function /Script/MeshModelingToolsExp.MeshGroupPaintToolFreezeActions.UnfreezeAll
	// void UnfreezeAll();                                                                                                   // [0xb36a1e8] Final|Native|Public  
	// Function /Script/MeshModelingToolsExp.MeshGroupPaintToolFreezeActions.ShrinkCurrent
	// void ShrinkCurrent();                                                                                                 // [0xb369f68] Final|Native|Public  
	// Function /Script/MeshModelingToolsExp.MeshGroupPaintToolFreezeActions.GrowCurrent
	// void GrowCurrent();                                                                                                   // [0xb36a0e0] Final|Native|Public  
	// Function /Script/MeshModelingToolsExp.MeshGroupPaintToolFreezeActions.FreezeOthers
	// void FreezeOthers();                                                                                                  // [0xb36a0c8] Final|Native|Public  
	// Function /Script/MeshModelingToolsExp.MeshGroupPaintToolFreezeActions.FreezeCurrent
	// void FreezeCurrent();                                                                                                 // [0xb36a098] Final|Native|Public  
	// Function /Script/MeshModelingToolsExp.MeshGroupPaintToolFreezeActions.FloodFillCurrent
	// void FloodFillCurrent();                                                                                              // [0xb36a128] Final|Native|Public  
	// Function /Script/MeshModelingToolsExp.MeshGroupPaintToolFreezeActions.ClearCurrent
	// void ClearCurrent();                                                                                                  // [0xb369ff4] Final|Native|Public  
	// Function /Script/MeshModelingToolsExp.MeshGroupPaintToolFreezeActions.ClearAll
	// void ClearAll();                                                                                                      // [0xb369fc8] Final|Native|Public  
};

/// Class /Script/MeshModelingToolsExp.MeshSculptToolBase
/// Size: 0x0A98 (0x000108 - 0x000BA0)
class UMeshSculptToolBase : public UMeshSurfacePointTool
{ 
public:
	class USculptBrushProperties*                      BrushProperties;                                            // 0x0108   (0x0008)  
	class UWorkPlaneProperties*                        GizmoProperties;                                            // 0x0110   (0x0008)  
	unsigned char                                      UnknownData00_5[0x118];                                     // 0x0118   (0x0118)  MISSED
	SDK_UNDEFINED(80,15026) /* TMap<int32_t, UMeshSculptBrushOpProps*> */ __um(BrushOpPropSets);                   // 0x0230   (0x0050)  
	unsigned char                                      UnknownData01_5[0x50];                                      // 0x0280   (0x0050)  MISSED
	SDK_UNDEFINED(80,15027) /* TMap<int32_t, UMeshSculptBrushOpProps*> */ __um(SecondaryBrushOpPropSets);          // 0x02D0   (0x0050)  
	unsigned char                                      UnknownData02_5[0x6F0];                                     // 0x0320   (0x06F0)  MISSED
	class UMeshEditingViewProperties*                  ViewProperties;                                             // 0x0A10   (0x0008)  
	class UMaterialInstanceDynamic*                    ActiveOverrideMaterial;                                     // 0x0A18   (0x0008)  
	class UBrushStampIndicator*                        BrushIndicator;                                             // 0x0A20   (0x0008)  
	bool                                               bIsVolumetricIndicator;                                     // 0x0A28   (0x0001)  
	unsigned char                                      UnknownData03_5[0x7];                                       // 0x0A29   (0x0007)  MISSED
	class UMaterialInstanceDynamic*                    BrushIndicatorMaterial;                                     // 0x0A30   (0x0008)  
	class UPreviewMesh*                                BrushIndicatorMesh;                                         // 0x0A38   (0x0008)  
	class UCombinedTransformGizmo*                     PlaneTransformGizmo;                                        // 0x0A40   (0x0008)  
	class UTransformProxy*                             PlaneTransformProxy;                                        // 0x0A48   (0x0008)  
	unsigned char                                      UnknownData04_6[0x150];                                     // 0x0A50   (0x0150)  MISSED
};

/// Class /Script/MeshModelingToolsExp.MeshGroupPaintTool
/// Size: 0x0440 (0x000BA0 - 0x000FE0)
class UMeshGroupPaintTool : public UMeshSculptToolBase
{ 
public:
	class UPolygroupLayersProperties*                  PolygroupLayerProperties;                                   // 0x0BA0   (0x0008)  
	class UGroupPaintBrushFilterProperties*            FilterProperties;                                           // 0x0BA8   (0x0008)  
	class UGroupPaintBrushOpProps*                     PaintBrushOpProperties;                                     // 0x0BB0   (0x0008)  
	class UGroupEraseBrushOpProps*                     EraseBrushOpProperties;                                     // 0x0BB8   (0x0008)  
	class UMeshGroupPaintToolFreezeActions*            FreezeActions;                                              // 0x0BC0   (0x0008)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0BC8   (0x0008)  MISSED
	class UPolyLassoMarqueeMechanic*                   PolyLassoMechanic;                                          // 0x0BD0   (0x0008)  
	class AInternalToolFrameworkActor*                 PreviewMeshActor;                                           // 0x0BD8   (0x0008)  
	class UDynamicMeshComponent*                       DynamicMeshComponent;                                       // 0x0BE0   (0x0008)  
	class UMeshElementsVisualizer*                     MeshElementsDisplay;                                        // 0x0BE8   (0x0008)  
	unsigned char                                      UnknownData01_6[0x3F0];                                     // 0x0BF0   (0x03F0)  MISSED
};

/// Class /Script/MeshModelingToolsExp.MeshInspectorToolBuilder
/// Size: 0x0000 (0x000028 - 0x000028)
class UMeshInspectorToolBuilder : public USingleSelectionMeshEditingToolBuilder
{ 
public:
};

/// Class /Script/MeshModelingToolsExp.MeshInspectorProperties
/// Size: 0x0018 (0x0000A8 - 0x0000C0)
class UMeshInspectorProperties : public UInteractiveToolPropertySet
{ 
public:
	bool                                               bWireframe;                                                 // 0x00A8   (0x0001)  
	bool                                               bBoundaryEdges;                                             // 0x00A9   (0x0001)  
	bool                                               bBowtieVertices;                                            // 0x00AA   (0x0001)  
	bool                                               bPolygonBorders;                                            // 0x00AB   (0x0001)  
	bool                                               bUVSeams;                                                   // 0x00AC   (0x0001)  
	bool                                               bUVBowties;                                                 // 0x00AD   (0x0001)  
	bool                                               bMissingUVs;                                                // 0x00AE   (0x0001)  
	bool                                               bNormalSeams;                                               // 0x00AF   (0x0001)  
	bool                                               bTangentSeams;                                              // 0x00B0   (0x0001)  
	bool                                               bNormalVectors;                                             // 0x00B1   (0x0001)  
	bool                                               bTangentVectors;                                            // 0x00B2   (0x0001)  
	bool                                               bDrawHiddenEdgesAndSeams;                                   // 0x00B3   (0x0001)  
	float                                              NormalLength;                                               // 0x00B4   (0x0004)  
	float                                              TangentLength;                                              // 0x00B8   (0x0004)  
	EMeshInspectorToolDrawIndexMode                    ShowIndices;                                                // 0x00BC   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00BD   (0x0003)  MISSED
};

/// Class /Script/MeshModelingToolsExp.MeshInspectorMaterialProperties
/// Size: 0x0078 (0x0000A8 - 0x000120)
class UMeshInspectorMaterialProperties : public UInteractiveToolPropertySet
{ 
public:
	EMeshInspectorMaterialMode                         MaterialMode;                                               // 0x00A8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00A9   (0x0003)  MISSED
	float                                              CheckerDensity;                                             // 0x00AC   (0x0004)  
	class UMaterialInterface*                          OverrideMaterial;                                           // 0x00B0   (0x0008)  
	SDK_UNDEFINED(16,15028) /* FString */              __um(UVChannel);                                            // 0x00B8   (0x0010)  
	SDK_UNDEFINED(16,15029) /* TArray<FString> */      __um(UVChannelNamesList);                                   // 0x00C8   (0x0010)  
	bool                                               bFlatShading;                                               // 0x00D8   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x00D9   (0x0003)  MISSED
	FLinearColor                                       Color;                                                      // 0x00DC   (0x0010)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x00EC   (0x0004)  MISSED
	double                                             Opacity;                                                    // 0x00F0   (0x0008)  
	FLinearColor                                       TransparentMaterialColor;                                   // 0x00F8   (0x0010)  
	bool                                               bTwoSided;                                                  // 0x0108   (0x0001)  
	unsigned char                                      UnknownData03_5[0x7];                                       // 0x0109   (0x0007)  MISSED
	class UMaterialInstanceDynamic*                    CheckerMaterial;                                            // 0x0110   (0x0008)  
	class UMaterialInstanceDynamic*                    ActiveCustomMaterial;                                       // 0x0118   (0x0008)  


	/// Functions
	// Function /Script/MeshModelingToolsExp.MeshInspectorMaterialProperties.GetUVChannelNamesFunc
	// TArray<FString> GetUVChannelNamesFunc();                                                                              // [0xb0361ec] Final|Native|Public|Const 
};

/// Class /Script/MeshModelingToolsExp.MeshInspectorTool
/// Size: 0x01A8 (0x0000B8 - 0x000260)
class UMeshInspectorTool : public USingleSelectionMeshEditingTool
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x00B8   (0x0008)  MISSED
	class UMeshInspectorProperties*                    Settings;                                                   // 0x00C0   (0x0008)  
	class UPolygroupLayersProperties*                  PolygroupLayerProperties;                                   // 0x00C8   (0x0008)  
	class UMeshInspectorMaterialProperties*            MaterialSettings;                                           // 0x00D0   (0x0008)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x00D8   (0x0008)  MISSED
	class UPreviewMesh*                                PreviewMesh;                                                // 0x00E0   (0x0008)  
	class ULineSetComponent*                           DrawnLineSet;                                               // 0x00E8   (0x0008)  
	class UMaterialInterface*                          DefaultMaterial;                                            // 0x00F0   (0x0008)  
	unsigned char                                      UnknownData02_6[0x168];                                     // 0x00F8   (0x0168)  MISSED
};

/// Class /Script/MeshModelingToolsExp.MeshSelectionToolBuilder
/// Size: 0x0000 (0x000030 - 0x000030)
class UMeshSelectionToolBuilder : public UMeshSurfacePointMeshEditingToolBuilder
{ 
public:
};

/// Class /Script/MeshModelingToolsExp.MeshSelectionToolActionPropertySet
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UMeshSelectionToolActionPropertySet : public UInteractiveToolPropertySet
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00A8   (0x0008)  MISSED
};

/// Class /Script/MeshModelingToolsExp.MeshSelectionEditActions
/// Size: 0x0000 (0x0000B0 - 0x0000B0)
class UMeshSelectionEditActions : public UMeshSelectionToolActionPropertySet
{ 
public:


	/// Functions
	// Function /Script/MeshModelingToolsExp.MeshSelectionEditActions.Shrink
	// void Shrink();                                                                                                        // [0xb36a2bc] Final|Native|Public  
	// Function /Script/MeshModelingToolsExp.MeshSelectionEditActions.SelectAll
	// void SelectAll();                                                                                                     // [0xb36a230] Final|Native|Public  
	// Function /Script/MeshModelingToolsExp.MeshSelectionEditActions.OptimizeBorder
	// void OptimizeBorder();                                                                                                // [0xb36a1d0] Final|Native|Public  
	// Function /Script/MeshModelingToolsExp.MeshSelectionEditActions.LargestTriCountPart
	// void LargestTriCountPart();                                                                                           // [0xb36a1a0] Final|Native|Public  
	// Function /Script/MeshModelingToolsExp.MeshSelectionEditActions.LargestAreaPart
	// void LargestAreaPart();                                                                                               // [0xb36a188] Final|Native|Public  
	// Function /Script/MeshModelingToolsExp.MeshSelectionEditActions.Invert
	// void Invert();                                                                                                        // [0xb36a170] Final|Native|Public  
	// Function /Script/MeshModelingToolsExp.MeshSelectionEditActions.Grow
	// void Grow();                                                                                                          // [0xb36a158] Final|Native|Public  
	// Function /Script/MeshModelingToolsExp.MeshSelectionEditActions.FloodFill
	// void FloodFill();                                                                                                     // [0xb36a110] Final|Native|Public  
	// Function /Script/MeshModelingToolsExp.MeshSelectionEditActions.ExpandToMaterials
	// void ExpandToMaterials();                                                                                             // [0xb36a0b0] Final|Native|Public  
	// Function /Script/MeshModelingToolsExp.MeshSelectionEditActions.Clear
	// void Clear();                                                                                                         // [0xb369fb0] Final|Native|Public  
};

/// Class /Script/MeshModelingToolsExp.MeshSelectionMeshEditActions
/// Size: 0x0000 (0x0000B0 - 0x0000B0)
class UMeshSelectionMeshEditActions : public UMeshSelectionToolActionPropertySet
{ 
public:


	/// Functions
	// Function /Script/MeshModelingToolsExp.MeshSelectionMeshEditActions.SmoothBorder
	// void SmoothBorder();                                                                                                  // [0xb36a2d4] Final|Native|Public  
	// Function /Script/MeshModelingToolsExp.MeshSelectionMeshEditActions.Separate
	// void Separate();                                                                                                      // [0xb36a248] Final|Native|Public  
	// Function /Script/MeshModelingToolsExp.MeshSelectionMeshEditActions.FlipNormals
	// void FlipNormals();                                                                                                   // [0xb36a0f8] Final|Native|Public  
	// Function /Script/MeshModelingToolsExp.MeshSelectionMeshEditActions.Duplicate
	// void Duplicate();                                                                                                     // [0xb36a080] Final|Native|Public  
	// Function /Script/MeshModelingToolsExp.MeshSelectionMeshEditActions.Disconnect
	// void Disconnect();                                                                                                    // [0xb36a050] Final|Native|Public  
	// Function /Script/MeshModelingToolsExp.MeshSelectionMeshEditActions.Delete
	// void Delete();                                                                                                        // [0xb36a038] Final|Native|Public  
	// Function /Script/MeshModelingToolsExp.MeshSelectionMeshEditActions.CreatePolygroup
	// void CreatePolygroup();                                                                                               // [0xb36a020] Final|Native|Public  
};

/// Class /Script/MeshModelingToolsExp.MeshSelectionToolProperties
/// Size: 0x0010 (0x0000A8 - 0x0000B8)
class UMeshSelectionToolProperties : public UInteractiveToolPropertySet
{ 
public:
	EMeshSelectionToolPrimaryMode                      SelectionMode;                                              // 0x00A8   (0x0004)  
	float                                              AngleTolerance;                                             // 0x00AC   (0x0004)  
	bool                                               bHitBackFaces;                                              // 0x00B0   (0x0001)  
	bool                                               bShowPoints;                                                // 0x00B1   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x00B2   (0x0002)  MISSED
	EMeshFacesColorMode                                FaceColorMode;                                              // 0x00B4   (0x0004)  
};

/// Class /Script/MeshModelingToolsExp.MeshSelectionTool
/// Size: 0x0428 (0x0002D0 - 0x0006F8)
class UMeshSelectionTool : public UDynamicMeshBrushTool
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x02D0   (0x0008)  MISSED
	class UMeshSelectionToolProperties*                SelectionProps;                                             // 0x02D8   (0x0008)  
	class UMeshSelectionEditActions*                   SelectionActions;                                           // 0x02E0   (0x0008)  
	class UMeshSelectionToolActionPropertySet*         EditActions;                                                // 0x02E8   (0x0008)  
	class UMeshStatisticsProperties*                   MeshStatisticsProperties;                                   // 0x02F0   (0x0008)  
	class UMeshElementsVisualizer*                     MeshElementsDisplay;                                        // 0x02F8   (0x0008)  
	class UMeshUVChannelProperties*                    UVChannelProperties;                                        // 0x0300   (0x0008)  
	class UPolygroupLayersProperties*                  PolygroupLayerProperties;                                   // 0x0308   (0x0008)  
	unsigned char                                      UnknownData01_5[0x58];                                      // 0x0310   (0x0058)  MISSED
	class UMeshSelectionSet*                           Selection;                                                  // 0x0368   (0x0008)  
	TArray<class AActor*>                              SpawnedActors;                                              // 0x0370   (0x0010)  
	unsigned char                                      UnknownData02_6[0x378];                                     // 0x0380   (0x0378)  MISSED
};

/// Class /Script/MeshModelingToolsExp.MeshSpaceDeformerToolBuilder
/// Size: 0x0000 (0x000028 - 0x000028)
class UMeshSpaceDeformerToolBuilder : public USingleSelectionMeshEditingToolBuilder
{ 
public:
};

/// Class /Script/MeshModelingToolsExp.MeshSpaceDeformerToolProperties
/// Size: 0x0028 (0x0000A8 - 0x0000D0)
class UMeshSpaceDeformerToolProperties : public UInteractiveToolPropertySet
{ 
public:
	ENonlinearOperationType                            SelectedOperationType;                                      // 0x00A8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00A9   (0x0003)  MISSED
	float                                              UpperBoundsInterval;                                        // 0x00AC   (0x0004)  
	float                                              LowerBoundsInterval;                                        // 0x00B0   (0x0004)  
	float                                              BendDegrees;                                                // 0x00B4   (0x0004)  
	float                                              TwistDegrees;                                               // 0x00B8   (0x0004)  
	EFlareProfileType                                  FlareProfileType;                                           // 0x00BC   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x00BD   (0x0003)  MISSED
	float                                              FlarePercentY;                                              // 0x00C0   (0x0004)  
	bool                                               bLockXAndYFlaring;                                          // 0x00C4   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x00C5   (0x0003)  MISSED
	float                                              FlarePercentX;                                              // 0x00C8   (0x0004)  
	bool                                               bLockBottom;                                                // 0x00CC   (0x0001)  
	bool                                               bShowOriginalMesh;                                          // 0x00CD   (0x0001)  
	bool                                               bDrawVisualization;                                         // 0x00CE   (0x0001)  
	bool                                               bAlignToNormalOnCtrlClick;                                  // 0x00CF   (0x0001)  
};

/// Class /Script/MeshModelingToolsExp.MeshSpaceDeformerToolActionPropertySet
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UMeshSpaceDeformerToolActionPropertySet : public UInteractiveToolPropertySet
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00A8   (0x0008)  MISSED


	/// Functions
	// Function /Script/MeshModelingToolsExp.MeshSpaceDeformerToolActionPropertySet.ShiftToCenter
	// void ShiftToCenter();                                                                                                 // [0xb36a260] Final|Native|Public  
};

/// Class /Script/MeshModelingToolsExp.SpaceDeformerOperatorFactory
/// Size: 0x0010 (0x000028 - 0x000038)
class USpaceDeformerOperatorFactory : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x30];                                      // 0x0000   (0x0030)  MISSED
	class UMeshSpaceDeformerTool*                      SpaceDeformerTool;                                          // 0x0030   (0x0008)  
};

/// Class /Script/MeshModelingToolsExp.MeshSpaceDeformerTool
/// Size: 0x0218 (0x0000B8 - 0x0002D0)
class UMeshSpaceDeformerTool : public USingleSelectionMeshEditingTool
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x00B8   (0x0008)  MISSED
	class UMeshSpaceDeformerToolProperties*            Settings;                                                   // 0x00C0   (0x0008)  
	class UMeshSpaceDeformerToolActionPropertySet*     ToolActions;                                                // 0x00C8   (0x0008)  
	class UGizmoTransformChangeStateTarget*            StateTarget;                                                // 0x00D0   (0x0008)  
	class UDragAlignmentMechanic*                      DragAlignmentMechanic;                                      // 0x00D8   (0x0008)  
	class UMeshOpPreviewWithBackgroundCompute*         Preview;                                                    // 0x00E0   (0x0008)  
	unsigned char                                      UnknownData01_5[0x10];                                      // 0x00E8   (0x0010)  MISSED
	class UPreviewMesh*                                OriginalMeshPreview;                                        // 0x00F8   (0x0008)  
	class UIntervalGizmo*                              IntervalGizmo;                                              // 0x0100   (0x0008)  
	class UCombinedTransformGizmo*                     TransformGizmo;                                             // 0x0108   (0x0008)  
	class UTransformProxy*                             TransformProxy;                                             // 0x0110   (0x0008)  
	class UGizmoLocalFloatParameterSource*             UpIntervalSource;                                           // 0x0118   (0x0008)  
	class UGizmoLocalFloatParameterSource*             DownIntervalSource;                                         // 0x0120   (0x0008)  
	class UGizmoLocalFloatParameterSource*             ForwardIntervalSource;                                      // 0x0128   (0x0008)  
	unsigned char                                      UnknownData02_6[0x1A0];                                     // 0x0130   (0x01A0)  MISSED
};

/// Class /Script/MeshModelingToolsExp.MeshVertexPaintToolBuilder
/// Size: 0x0000 (0x000030 - 0x000030)
class UMeshVertexPaintToolBuilder : public UMeshSurfacePointMeshEditingToolBuilder
{ 
public:
};

/// Class /Script/MeshModelingToolsExp.VertexPaintBasicProperties
/// Size: 0x0038 (0x0000A8 - 0x0000E0)
class UVertexPaintBasicProperties : public UInteractiveToolPropertySet
{ 
public:
	EMeshVertexPaintBrushType                          PrimaryBrushType;                                           // 0x00A8   (0x0001)  
	EMeshVertexPaintInteractionType                    SubToolType;                                                // 0x00A9   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x00AA   (0x0002)  MISSED
	FLinearColor                                       PaintColor;                                                 // 0x00AC   (0x0010)  
	EMeshVertexPaintColorBlendMode                     BlendMode;                                                  // 0x00BC   (0x0001)  
	EMeshVertexPaintSecondaryActionType                SecondaryActionType;                                        // 0x00BD   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x00BE   (0x0002)  MISSED
	FLinearColor                                       EraseColor;                                                 // 0x00C0   (0x0010)  
	float                                              SmoothStrength;                                             // 0x00D0   (0x0004)  
	FModelingToolsColorChannelFilter                   ChannelFilter;                                              // 0x00D4   (0x0004)  
	bool                                               bHardEdges;                                                 // 0x00D8   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x00D9   (0x0007)  MISSED
};

/// Class /Script/MeshModelingToolsExp.VertexPaintBrushFilterProperties
/// Size: 0x0018 (0x0000A8 - 0x0000C0)
class UVertexPaintBrushFilterProperties : public UInteractiveToolPropertySet
{ 
public:
	EMeshVertexPaintBrushAreaType                      BrushAreaMode;                                              // 0x00A8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00A9   (0x0003)  MISSED
	float                                              AngleThreshold;                                             // 0x00AC   (0x0004)  
	bool                                               bUVSeams;                                                   // 0x00B0   (0x0001)  
	bool                                               bNormalSeams;                                               // 0x00B1   (0x0001)  
	EMeshVertexPaintVisibilityType                     VisibilityFilter;                                           // 0x00B2   (0x0001)  
	unsigned char                                      UnknownData01_5[0x1];                                       // 0x00B3   (0x0001)  MISSED
	int32_t                                            MinTriVertCount;                                            // 0x00B4   (0x0004)  
	EMeshVertexPaintMaterialMode                       MaterialMode;                                               // 0x00B8   (0x0001)  
	bool                                               bShowHitColor;                                              // 0x00B9   (0x0001)  
	EMeshVertexPaintInteractionType                    CurrentSubToolType;                                         // 0x00BA   (0x0001)  
	unsigned char                                      UnknownData02_6[0x5];                                       // 0x00BB   (0x0005)  MISSED
};

/// Class /Script/MeshModelingToolsExp.MeshVertexPaintToolActionPropertySet
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UMeshVertexPaintToolActionPropertySet : public UInteractiveToolPropertySet
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00A8   (0x0008)  MISSED
};

/// Class /Script/MeshModelingToolsExp.MeshVertexPaintToolQuickActions
/// Size: 0x0000 (0x0000B0 - 0x0000B0)
class UMeshVertexPaintToolQuickActions : public UMeshVertexPaintToolActionPropertySet
{ 
public:


	/// Functions
	// Function /Script/MeshModelingToolsExp.MeshVertexPaintToolQuickActions.PaintAll
	// void PaintAll();                                                                                                      // [0xb36a1e8] Final|Native|Public  
	// Function /Script/MeshModelingToolsExp.MeshVertexPaintToolQuickActions.FillWhite
	// void FillWhite();                                                                                                     // [0xb36a0e0] Final|Native|Public  
	// Function /Script/MeshModelingToolsExp.MeshVertexPaintToolQuickActions.FillBlack
	// void FillBlack();                                                                                                     // [0xb36a0c8] Final|Native|Public  
	// Function /Script/MeshModelingToolsExp.MeshVertexPaintToolQuickActions.EraseAll
	// void EraseAll();                                                                                                      // [0xb36a098] Final|Native|Public  
};

/// Class /Script/MeshModelingToolsExp.MeshVertexPaintToolUtilityActions
/// Size: 0x0048 (0x0000B0 - 0x0000F8)
class UMeshVertexPaintToolUtilityActions : public UMeshVertexPaintToolActionPropertySet
{ 
public:
	EMeshVertexPaintToolUtilityOperations              Operation;                                                  // 0x00B0   (0x0004)  
	EMeshVertexPaintColorChannel                       SourceChannel;                                              // 0x00B4   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00B5   (0x0003)  MISSED
	float                                              SourceValue;                                                // 0x00B8   (0x0004)  
	FName                                              WeightMap;                                                  // 0x00BC   (0x0004)  
	SDK_UNDEFINED(16,15030) /* TArray<FString> */      __um(WeightMapsList);                                       // 0x00C0   (0x0010)  
	FModelingToolsColorChannelFilter                   TargetChannels;                                             // 0x00D0   (0x0004)  
	EMeshVertexPaintColorChannel                       TargetChannel;                                              // 0x00D4   (0x0001)  
	bool                                               bCopyToHiRes;                                               // 0x00D5   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x00D6   (0x0002)  MISSED
	SDK_UNDEFINED(16,15031) /* FString */              __um(CopyToLODName);                                        // 0x00D8   (0x0010)  
	SDK_UNDEFINED(16,15032) /* TArray<FString> */      __um(LODNamesList);                                         // 0x00E8   (0x0010)  


	/// Functions
	// Function /Script/MeshModelingToolsExp.MeshVertexPaintToolUtilityActions.GetWeightMapsFunc
	// TArray<FString> GetWeightMapsFunc();                                                                                  // [0xb324bd0] Final|Native|Public  
	// Function /Script/MeshModelingToolsExp.MeshVertexPaintToolUtilityActions.GetLODNamesFunc
	// TArray<FString> GetLODNamesFunc();                                                                                    // [0xb2f1fe0] Final|Native|Public|Const 
	// Function /Script/MeshModelingToolsExp.MeshVertexPaintToolUtilityActions.ApplySelectedOperation
	// void ApplySelectedOperation();                                                                                        // [0xb369f68] Final|Native|Public  
};

/// Class /Script/MeshModelingToolsExp.MeshVertexPaintTool
/// Size: 0x05A0 (0x000BA0 - 0x001140)
class UMeshVertexPaintTool : public UMeshSculptToolBase
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0BA0   (0x0008)  MISSED
	class UPolygroupLayersProperties*                  PolygroupLayerProperties;                                   // 0x0BA8   (0x0008)  
	class UVertexPaintBasicProperties*                 BasicProperties;                                            // 0x0BB0   (0x0008)  
	class UVertexPaintBrushFilterProperties*           FilterProperties;                                           // 0x0BB8   (0x0008)  
	class UVertexColorPaintBrushOpProps*               PaintBrushOpProperties;                                     // 0x0BC0   (0x0008)  
	class UVertexColorPaintBrushOpProps*               EraseBrushOpProperties;                                     // 0x0BC8   (0x0008)  
	class UMeshVertexPaintToolQuickActions*            QuickActions;                                               // 0x0BD0   (0x0008)  
	class UMeshVertexPaintToolUtilityActions*          UtilityActions;                                             // 0x0BD8   (0x0008)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0BE0   (0x0008)  MISSED
	class UPolyLassoMarqueeMechanic*                   PolyLassoMechanic;                                          // 0x0BE8   (0x0008)  
	class AInternalToolFrameworkActor*                 PreviewMeshActor;                                           // 0x0BF0   (0x0008)  
	class UDynamicMeshComponent*                       DynamicMeshComponent;                                       // 0x0BF8   (0x0008)  
	class UMeshElementsVisualizer*                     MeshElementsDisplay;                                        // 0x0C00   (0x0008)  
	unsigned char                                      UnknownData02_6[0x538];                                     // 0x0C08   (0x0538)  MISSED
};

/// Class /Script/MeshModelingToolsExp.MeshVertexSculptToolBuilder
/// Size: 0x0000 (0x000030 - 0x000030)
class UMeshVertexSculptToolBuilder : public UMeshSurfacePointMeshEditingToolBuilder
{ 
public:
};

/// Class /Script/MeshModelingToolsExp.VertexBrushSculptProperties
/// Size: 0x0010 (0x0000A8 - 0x0000B8)
class UVertexBrushSculptProperties : public UInteractiveToolPropertySet
{ 
public:
	EMeshVertexSculptBrushType                         PrimaryBrushType;                                           // 0x00A8   (0x0001)  
	EMeshSculptFalloffType                             PrimaryFalloffType;                                         // 0x00A9   (0x0001)  
	EMeshVertexSculptBrushFilterType                   BrushFilter;                                                // 0x00AA   (0x0001)  
	bool                                               bFreezeTarget;                                              // 0x00AB   (0x0001)  
	SDK_UNDEFINED(8,15033) /* TWeakObjectPtr<UMeshVertexSculptTool*> */ __um(Tool);                                // 0x00AC   (0x0008)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00B4   (0x0004)  MISSED
};

/// Class /Script/MeshModelingToolsExp.VertexBrushAlphaProperties
/// Size: 0x0020 (0x0000A8 - 0x0000C8)
class UVertexBrushAlphaProperties : public UInteractiveToolPropertySet
{ 
public:
	class UTexture2D*                                  Alpha;                                                      // 0x00A8   (0x0008)  
	float                                              RotationAngle;                                              // 0x00B0   (0x0004)  
	bool                                               bRandomize;                                                 // 0x00B4   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00B5   (0x0003)  MISSED
	float                                              RandomRange;                                                // 0x00B8   (0x0004)  
	SDK_UNDEFINED(8,15034) /* TWeakObjectPtr<UMeshVertexSculptTool*> */ __um(Tool);                                // 0x00BC   (0x0008)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x00C4   (0x0004)  MISSED
};

/// Class /Script/MeshModelingToolsExp.MeshSymmetryProperties
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UMeshSymmetryProperties : public UInteractiveToolPropertySet
{ 
public:
	bool                                               bEnableSymmetry;                                            // 0x00A8   (0x0001)  
	bool                                               bSymmetryCanBeEnabled;                                      // 0x00A9   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x00AA   (0x0006)  MISSED
};

/// Class /Script/MeshModelingToolsExp.MeshVertexSculptTool
/// Size: 0x0960 (0x000BA0 - 0x001500)
class UMeshVertexSculptTool : public UMeshSculptToolBase
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0BA0   (0x0008)  MISSED
	class UVertexBrushSculptProperties*                SculptProperties;                                           // 0x0BA8   (0x0008)  
	class UVertexBrushAlphaProperties*                 AlphaProperties;                                            // 0x0BB0   (0x0008)  
	class UTexture2D*                                  BrushAlpha;                                                 // 0x0BB8   (0x0008)  
	class UMeshSymmetryProperties*                     SymmetryProperties;                                         // 0x0BC0   (0x0008)  
	unsigned char                                      UnknownData01_5[0x18];                                      // 0x0BC8   (0x0018)  MISSED
	class AInternalToolFrameworkActor*                 PreviewMeshActor;                                           // 0x0BE0   (0x0008)  
	class UDynamicMeshComponent*                       DynamicMeshComponent;                                       // 0x0BE8   (0x0008)  
	unsigned char                                      UnknownData02_6[0x910];                                     // 0x0BF0   (0x0910)  MISSED
};

/// Class /Script/MeshModelingToolsExp.MirrorToolBuilder
/// Size: 0x0000 (0x000028 - 0x000028)
class UMirrorToolBuilder : public UMultiSelectionMeshEditingToolBuilder
{ 
public:
};

/// Class /Script/MeshModelingToolsExp.MirrorToolProperties
/// Size: 0x0018 (0x0000A8 - 0x0000C0)
class UMirrorToolProperties : public UInteractiveToolPropertySet
{ 
public:
	EMirrorOperationMode                               OperationMode;                                              // 0x00A8   (0x0001)  
	bool                                               bCropAlongMirrorPlaneFirst;                                 // 0x00A9   (0x0001)  
	bool                                               bSimplifyAlongCrop;                                         // 0x00AA   (0x0001)  
	bool                                               bWeldVerticesOnMirrorPlane;                                 // 0x00AB   (0x0001)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00AC   (0x0004)  MISSED
	double                                             PlaneTolerance;                                             // 0x00B0   (0x0008)  
	bool                                               bAllowBowtieVertexCreation;                                 // 0x00B8   (0x0001)  
	bool                                               bShowPreview;                                               // 0x00B9   (0x0001)  
	EMirrorSaveMode                                    WriteTo;                                                    // 0x00BA   (0x0001)  
	unsigned char                                      UnknownData01_6[0x5];                                       // 0x00BB   (0x0005)  MISSED
};

/// Class /Script/MeshModelingToolsExp.MirrorOperatorFactory
/// Size: 0x0018 (0x000028 - 0x000040)
class UMirrorOperatorFactory : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x30];                                      // 0x0000   (0x0030)  MISSED
	class UMirrorTool*                                 MirrorTool;                                                 // 0x0030   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0038   (0x0008)  MISSED
};

/// Class /Script/MeshModelingToolsExp.MirrorToolActionPropertySet
/// Size: 0x0010 (0x0000A8 - 0x0000B8)
class UMirrorToolActionPropertySet : public UInteractiveToolPropertySet
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x00A8   (0x0008)  MISSED
	bool                                               bButtonsOnlyChangeOrientation;                              // 0x00B0   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x00B1   (0x0007)  MISSED


	/// Functions
	// Function /Script/MeshModelingToolsExp.MirrorToolActionPropertySet.Up
	// void Up();                                                                                                            // [0xb36a2ec] Final|Native|Public  
	// Function /Script/MeshModelingToolsExp.MirrorToolActionPropertySet.ShiftToCenter
	// void ShiftToCenter();                                                                                                 // [0xb36a2a4] Final|Native|Public  
	// Function /Script/MeshModelingToolsExp.MirrorToolActionPropertySet.Right
	// void Right();                                                                                                         // [0xb36a200] Final|Native|Public  
	// Function /Script/MeshModelingToolsExp.MirrorToolActionPropertySet.Left
	// void Left();                                                                                                          // [0xb36a1b8] Final|Native|Public  
	// Function /Script/MeshModelingToolsExp.MirrorToolActionPropertySet.Forward
	// void Forward();                                                                                                       // [0xb36a140] Final|Native|Public  
	// Function /Script/MeshModelingToolsExp.MirrorToolActionPropertySet.Down
	// void Down();                                                                                                          // [0xb36a068] Final|Native|Public  
	// Function /Script/MeshModelingToolsExp.MirrorToolActionPropertySet.Backward
	// void Backward();                                                                                                      // [0xb369f80] Final|Native|Public  
};

/// Class /Script/MeshModelingToolsExp.MirrorTool
/// Size: 0x00C0 (0x0000C0 - 0x000180)
class UMirrorTool : public UMultiSelectionMeshEditingTool
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x00C0   (0x0008)  MISSED
	class UMirrorToolProperties*                       Settings;                                                   // 0x00C8   (0x0008)  
	class UCreateMeshObjectTypeProperties*             OutputTypeProperties;                                       // 0x00D0   (0x0008)  
	class UOnAcceptHandleSourcesProperties*            HandleSourcesProperties;                                    // 0x00D8   (0x0008)  
	class UMirrorToolActionPropertySet*                ToolActions;                                                // 0x00E0   (0x0008)  
	TArray<class UDynamicMeshReplacementChangeTarget*> MeshesToMirror;                                             // 0x00E8   (0x0010)  
	TArray<class UMeshOpPreviewWithBackgroundCompute*> Previews;                                                   // 0x00F8   (0x0010)  
	unsigned char                                      UnknownData01_5[0x30];                                      // 0x0108   (0x0030)  MISSED
	class UConstructionPlaneMechanic*                  PlaneMechanic;                                              // 0x0138   (0x0008)  
	unsigned char                                      UnknownData02_6[0x40];                                      // 0x0140   (0x0040)  MISSED
};

/// Class /Script/MeshModelingToolsExp.OffsetMeshToolProperties
/// Size: 0x0010 (0x0000A8 - 0x0000B8)
class UOffsetMeshToolProperties : public UInteractiveToolPropertySet
{ 
public:
	EOffsetMeshToolOffsetType                          OffsetType;                                                 // 0x00A8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00A9   (0x0003)  MISSED
	float                                              Distance;                                                   // 0x00AC   (0x0004)  
	bool                                               bCreateShell;                                               // 0x00B0   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x00B1   (0x0007)  MISSED
};

/// Class /Script/MeshModelingToolsExp.OffsetWeightMapSetProperties
/// Size: 0x0008 (0x0000C8 - 0x0000D0)
class UOffsetWeightMapSetProperties : public UWeightMapSetProperties
{ 
public:
	float                                              MinDistance;                                                // 0x00C8   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00CC   (0x0004)  MISSED
};

/// Class /Script/MeshModelingToolsExp.IterativeOffsetProperties
/// Size: 0x0010 (0x0000A8 - 0x0000B8)
class UIterativeOffsetProperties : public UInteractiveToolPropertySet
{ 
public:
	int32_t                                            Steps;                                                      // 0x00A8   (0x0004)  
	bool                                               bOffsetBoundaries;                                          // 0x00AC   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00AD   (0x0003)  MISSED
	float                                              SmoothingPerStep;                                           // 0x00B0   (0x0004)  
	bool                                               bReprojectSmooth;                                           // 0x00B4   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x00B5   (0x0003)  MISSED
};

/// Class /Script/MeshModelingToolsExp.ImplicitOffsetProperties
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UImplicitOffsetProperties : public UInteractiveToolPropertySet
{ 
public:
	float                                              Smoothness;                                                 // 0x00A8   (0x0004)  
	bool                                               bPreserveUVs;                                               // 0x00AC   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00AD   (0x0003)  MISSED
};

/// Class /Script/MeshModelingToolsExp.OffsetMeshTool
/// Size: 0x0020 (0x000410 - 0x000430)
class UOffsetMeshTool : public UBaseMeshProcessingTool
{ 
public:
	class UOffsetMeshToolProperties*                   OffsetProperties;                                           // 0x0410   (0x0008)  
	class UIterativeOffsetProperties*                  IterativeProperties;                                        // 0x0418   (0x0008)  
	class UImplicitOffsetProperties*                   ImplicitProperties;                                         // 0x0420   (0x0008)  
	class UOffsetWeightMapSetProperties*               WeightMapProperties;                                        // 0x0428   (0x0008)  
};

/// Class /Script/MeshModelingToolsExp.OffsetMeshToolBuilder
/// Size: 0x0000 (0x000028 - 0x000028)
class UOffsetMeshToolBuilder : public UBaseMeshProcessingToolBuilder
{ 
public:
};

/// Struct /Script/MeshModelingToolsExp.PhysicsSphereData
/// Size: 0x00A0 (0x000000 - 0x0000A0)
struct FPhysicsSphereData
{ 
	float                                              Radius;                                                     // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0xC];                                       // 0x0004   (0x000C)  MISSED
	FTransform                                         Transform;                                                  // 0x0010   (0x0060)  
	FKShapeElem                                        Element;                                                    // 0x0070   (0x0028)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0098   (0x0008)  MISSED
};

/// Struct /Script/MeshModelingToolsExp.PhysicsBoxData
/// Size: 0x00B0 (0x000000 - 0x0000B0)
struct FPhysicsBoxData
{ 
	FVector                                            Dimensions;                                                 // 0x0000   (0x0018)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0018   (0x0008)  MISSED
	FTransform                                         Transform;                                                  // 0x0020   (0x0060)  
	FKShapeElem                                        Element;                                                    // 0x0080   (0x0028)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x00A8   (0x0008)  MISSED
};

/// Struct /Script/MeshModelingToolsExp.PhysicsCapsuleData
/// Size: 0x00A0 (0x000000 - 0x0000A0)
struct FPhysicsCapsuleData
{ 
	float                                              Radius;                                                     // 0x0000   (0x0004)  
	float                                              Length;                                                     // 0x0004   (0x0004)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         Transform;                                                  // 0x0010   (0x0060)  
	FKShapeElem                                        Element;                                                    // 0x0070   (0x0028)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0098   (0x0008)  MISSED
};

/// Struct /Script/MeshModelingToolsExp.PhysicsConvexData
/// Size: 0x0030 (0x000000 - 0x000030)
struct FPhysicsConvexData
{ 
	int32_t                                            NumVertices;                                                // 0x0000   (0x0004)  
	int32_t                                            NumFaces;                                                   // 0x0004   (0x0004)  
	FKShapeElem                                        Element;                                                    // 0x0008   (0x0028)  
};

/// Struct /Script/MeshModelingToolsExp.PhysicsLevelSetData
/// Size: 0x0028 (0x000000 - 0x000028)
struct FPhysicsLevelSetData
{ 
	FKShapeElem                                        Element;                                                    // 0x0000   (0x0028)  
};

/// Class /Script/MeshModelingToolsExp.PhysicsObjectToolPropertySet
/// Size: 0x0068 (0x0000A8 - 0x000110)
class UPhysicsObjectToolPropertySet : public UInteractiveToolPropertySet
{ 
public:
	SDK_UNDEFINED(16,15035) /* FString */              __um(ObjectName);                                           // 0x00A8   (0x0010)  
	ECollisionGeometryMode                             CollisionType;                                              // 0x00B8   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00BC   (0x0004)  MISSED
	TArray<FPhysicsSphereData>                         Spheres;                                                    // 0x00C0   (0x0010)  
	TArray<FPhysicsBoxData>                            Boxes;                                                      // 0x00D0   (0x0010)  
	TArray<FPhysicsCapsuleData>                        Capsules;                                                   // 0x00E0   (0x0010)  
	TArray<FPhysicsConvexData>                         Convexes;                                                   // 0x00F0   (0x0010)  
	TArray<FPhysicsLevelSetData>                       LevelSets;                                                  // 0x0100   (0x0010)  
};

/// Class /Script/MeshModelingToolsExp.CollisionGeometryVisualizationProperties
/// Size: 0x0030 (0x0000A8 - 0x0000D8)
class UCollisionGeometryVisualizationProperties : public UInteractiveToolPropertySet
{ 
public:
	bool                                               bShowCollision;                                             // 0x00A8   (0x0001)  
	bool                                               bShowSolid;                                                 // 0x00A9   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x00AA   (0x0002)  MISSED
	float                                              LineThickness;                                              // 0x00AC   (0x0004)  
	bool                                               bShowHidden;                                                // 0x00B0   (0x0001)  
	bool                                               bRandomColors;                                              // 0x00B1   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x00B2   (0x0002)  MISSED
	FColor                                             Color;                                                      // 0x00B4   (0x0004)  
	class UMaterialInterface*                          LineMaterial;                                               // 0x00B8   (0x0008)  
	class UMaterialInterface*                          LineMaterialShowingHidden;                                  // 0x00C0   (0x0008)  
	class UMaterialInterface*                          TriangleMaterial;                                           // 0x00C8   (0x0008)  
	bool                                               bEnableShowCollision;                                       // 0x00D0   (0x0001)  
	bool                                               bEnableShowSolid;                                           // 0x00D1   (0x0001)  
	unsigned char                                      UnknownData02_6[0x6];                                       // 0x00D2   (0x0006)  MISSED
};

/// Class /Script/MeshModelingToolsExp.ExtractCollisionGeometryToolBuilder
/// Size: 0x0000 (0x000028 - 0x000028)
class UExtractCollisionGeometryToolBuilder : public USingleSelectionMeshEditingToolBuilder
{ 
public:
};

/// Class /Script/MeshModelingToolsExp.ExtractCollisionToolProperties
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UExtractCollisionToolProperties : public UInteractiveToolPropertySet
{ 
public:
	EExtractCollisionOutputType                        CollisionType;                                              // 0x00A8   (0x0001)  
	bool                                               bOutputSeparateMeshes;                                      // 0x00A9   (0x0001)  
	bool                                               bShowPreview;                                               // 0x00AA   (0x0001)  
	bool                                               bShowInputMesh;                                             // 0x00AB   (0x0001)  
	bool                                               bWeldEdges;                                                 // 0x00AC   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00AD   (0x0003)  MISSED
};

/// Class /Script/MeshModelingToolsExp.ExtractCollisionGeometryTool
/// Size: 0x0278 (0x0000B8 - 0x000330)
class UExtractCollisionGeometryTool : public USingleSelectionMeshEditingTool
{ 
public:
	class UCreateMeshObjectTypeProperties*             OutputTypeProperties;                                       // 0x00B8   (0x0008)  
	class UExtractCollisionToolProperties*             Settings;                                                   // 0x00C0   (0x0008)  
	class UCollisionGeometryVisualizationProperties*   VizSettings;                                                // 0x00C8   (0x0008)  
	class UPhysicsObjectToolPropertySet*               ObjectProps;                                                // 0x00D0   (0x0008)  
	class UPreviewGeometry*                            PreviewElements;                                            // 0x00D8   (0x0008)  
	class UPreviewMesh*                                PreviewMesh;                                                // 0x00E0   (0x0008)  
	unsigned char                                      UnknownData00_6[0x248];                                     // 0x00E8   (0x0248)  MISSED
};

/// Class /Script/MeshModelingToolsExp.PhysicsInspectorToolBuilder
/// Size: 0x0000 (0x000028 - 0x000028)
class UPhysicsInspectorToolBuilder : public UMultiSelectionMeshEditingToolBuilder
{ 
public:
};

/// Class /Script/MeshModelingToolsExp.PhysicsInspectorTool
/// Size: 0x0040 (0x0000C0 - 0x000100)
class UPhysicsInspectorTool : public UMultiSelectionMeshEditingTool
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x00C0   (0x0008)  MISSED
	class UCollisionGeometryVisualizationProperties*   VizSettings;                                                // 0x00C8   (0x0008)  
	TArray<class UPhysicsObjectToolPropertySet*>       ObjectData;                                                 // 0x00D0   (0x0010)  
	TArray<class UPreviewGeometry*>                    PreviewElements;                                            // 0x00E0   (0x0010)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x00F0   (0x0010)  MISSED
};

/// Class /Script/MeshModelingToolsExp.SetCollisionGeometryToolBuilder
/// Size: 0x0000 (0x000028 - 0x000028)
class USetCollisionGeometryToolBuilder : public UMultiSelectionMeshEditingToolBuilder
{ 
public:
};

/// Class /Script/MeshModelingToolsExp.SetCollisionGeometryToolProperties
/// Size: 0x0068 (0x0000A8 - 0x000110)
class USetCollisionGeometryToolProperties : public UInteractiveToolPropertySet
{ 
public:
	ECollisionGeometryType                             GeometryType;                                               // 0x00A8   (0x0004)  
	bool                                               bAppendToExisting;                                          // 0x00AC   (0x0001)  
	bool                                               bUseWorldSpace;                                             // 0x00AD   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x00AE   (0x0002)  MISSED
	ESetCollisionGeometryInputMode                     InputMode;                                                  // 0x00B0   (0x0004)  
	bool                                               bRemoveContained;                                           // 0x00B4   (0x0001)  
	bool                                               bEnableMaxCount;                                            // 0x00B5   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x00B6   (0x0002)  MISSED
	int32_t                                            MaxCount;                                                   // 0x00B8   (0x0004)  
	float                                              MinThickness;                                               // 0x00BC   (0x0004)  
	bool                                               bDetectBoxes;                                               // 0x00C0   (0x0001)  
	bool                                               bDetectSpheres;                                             // 0x00C1   (0x0001)  
	bool                                               bDetectCapsules;                                            // 0x00C2   (0x0001)  
	bool                                               bMergeCollisionShapes;                                      // 0x00C3   (0x0001)  
	int32_t                                            MergeAboveCount;                                            // 0x00C4   (0x0004)  
	bool                                               bUseNegativeSpaceInMerge;                                   // 0x00C8   (0x0001)  
	bool                                               bSimplifyHulls;                                             // 0x00C9   (0x0001)  
	unsigned char                                      UnknownData02_5[0x2];                                       // 0x00CA   (0x0002)  MISSED
	int32_t                                            HullTargetFaceCount;                                        // 0x00CC   (0x0004)  
	int32_t                                            MaxHullsPerMesh;                                            // 0x00D0   (0x0004)  
	float                                              ConvexDecompositionSearchFactor;                            // 0x00D4   (0x0004)  
	float                                              AddHullsErrorTolerance;                                     // 0x00D8   (0x0004)  
	float                                              MinPartThickness;                                           // 0x00DC   (0x0004)  
	bool                                               bUseNegativeSpaceInDecomposition;                           // 0x00E0   (0x0001)  
	unsigned char                                      UnknownData03_5[0x7];                                       // 0x00E1   (0x0007)  MISSED
	double                                             NegativeSpaceTolerance;                                     // 0x00E8   (0x0008)  
	double                                             NegativeSpaceMinRadius;                                     // 0x00F0   (0x0008)  
	bool                                               bIgnoreInternalNegativeSpace;                               // 0x00F8   (0x0001)  
	unsigned char                                      UnknownData04_5[0x3];                                       // 0x00F9   (0x0003)  MISSED
	float                                              HullTolerance;                                              // 0x00FC   (0x0004)  
	EProjectedHullAxis                                 SweepAxis;                                                  // 0x0100   (0x0004)  
	int32_t                                            LevelSetResolution;                                         // 0x0104   (0x0004)  
	ECollisionGeometryMode                             SetCollisionType;                                           // 0x0108   (0x0004)  
	bool                                               bShowTargetMesh;                                            // 0x010C   (0x0001)  
	bool                                               bUsingMultipleInputs;                                       // 0x010D   (0x0001)  
	unsigned char                                      UnknownData05_6[0x2];                                       // 0x010E   (0x0002)  MISSED
};

/// Class /Script/MeshModelingToolsExp.SetCollisionGeometryTool
/// Size: 0x02D0 (0x0000C0 - 0x000390)
class USetCollisionGeometryTool : public UMultiSelectionMeshEditingTool
{ 
public:
	unsigned char                                      UnknownData00_3[0x10];                                      // 0x00C0   (0x0010)  MISSED
	class USetCollisionGeometryToolProperties*         Settings;                                                   // 0x00D0   (0x0008)  
	class UPolygroupLayersProperties*                  PolygroupLayerProperties;                                   // 0x00D8   (0x0008)  
	class UCollisionGeometryVisualizationProperties*   VizSettings;                                                // 0x00E0   (0x0008)  
	class UPhysicsObjectToolPropertySet*               CollisionProps;                                             // 0x00E8   (0x0008)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x00F0   (0x0008)  MISSED
	class UPreviewGeometry*                            PreviewGeom;                                                // 0x00F8   (0x0008)  
	unsigned char                                      UnknownData02_5[0x280];                                     // 0x0100   (0x0280)  MISSED
	class UGeometrySelectionVisualizationProperties*   GeometrySelectionVizProperties;                             // 0x0380   (0x0008)  
	class UPreviewGeometry*                            GeometrySelectionViz;                                       // 0x0388   (0x0008)  
};

/// Class /Script/MeshModelingToolsExp.SimpleCollisionEditorToolBuilder
/// Size: 0x0000 (0x000028 - 0x000028)
class USimpleCollisionEditorToolBuilder : public USingleSelectionMeshEditingToolBuilder
{ 
public:
};

/// Class /Script/MeshModelingToolsExp.SimpleCollisionEditorToolActionProperties
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class USimpleCollisionEditorToolActionProperties : public UInteractiveToolPropertySet
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00A8   (0x0008)  MISSED


	/// Functions
	// Function /Script/MeshModelingToolsExp.SimpleCollisionEditorToolActionProperties.Duplicate
	// void Duplicate();                                                                                                     // [0xb399458] Final|Native|Public  
	// Function /Script/MeshModelingToolsExp.SimpleCollisionEditorToolActionProperties.DeleteAll
	// void DeleteAll();                                                                                                     // [0xb399444] Final|Native|Public  
	// Function /Script/MeshModelingToolsExp.SimpleCollisionEditorToolActionProperties.Delete
	// void Delete();                                                                                                        // [0xb399430] Final|Native|Public  
	// Function /Script/MeshModelingToolsExp.SimpleCollisionEditorToolActionProperties.AddSphere
	// void AddSphere();                                                                                                     // [0xb399404] Final|Native|Public  
	// Function /Script/MeshModelingToolsExp.SimpleCollisionEditorToolActionProperties.AddCapsule
	// void AddCapsule();                                                                                                    // [0xb3993f0] Final|Native|Public  
	// Function /Script/MeshModelingToolsExp.SimpleCollisionEditorToolActionProperties.AddBox
	// void AddBox();                                                                                                        // [0xb3993dc] Final|Native|Public  
};

/// Class /Script/MeshModelingToolsExp.SimpleCollisionEditorTool
/// Size: 0x0030 (0x0000B8 - 0x0000E8)
class USimpleCollisionEditorTool : public USingleSelectionMeshEditingTool
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x00B8   (0x0008)  MISSED
	class USimpleCollisionEditorToolActionProperties*  ActionProperties;                                           // 0x00C0   (0x0008)  
	unsigned char                                      UnknownData01_6[0x20];                                      // 0x00C8   (0x0020)  MISSED
};

/// Class /Script/MeshModelingToolsExp.PlaneCutToolBuilder
/// Size: 0x0000 (0x000028 - 0x000028)
class UPlaneCutToolBuilder : public UMultiSelectionMeshEditingToolBuilder
{ 
public:
};

/// Class /Script/MeshModelingToolsExp.PlaneCutToolProperties
/// Size: 0x0010 (0x0000A8 - 0x0000B8)
class UPlaneCutToolProperties : public UInteractiveToolPropertySet
{ 
public:
	bool                                               bKeepBothHalves;                                            // 0x00A8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00A9   (0x0003)  MISSED
	float                                              SpacingBetweenHalves;                                       // 0x00AC   (0x0004)  
	bool                                               bExportSeparatedPiecesAsNewMeshAssets;                      // 0x00B0   (0x0001)  
	bool                                               bShowPreview;                                               // 0x00B1   (0x0001)  
	bool                                               bFillCutHole;                                               // 0x00B2   (0x0001)  
	bool                                               bFillSpans;                                                 // 0x00B3   (0x0001)  
	bool                                               bSimplifyAlongCut;                                          // 0x00B4   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x00B5   (0x0003)  MISSED
};

/// Class /Script/MeshModelingToolsExp.PlaneCutOperatorFactory
/// Size: 0x0018 (0x000028 - 0x000040)
class UPlaneCutOperatorFactory : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x30];                                      // 0x0000   (0x0030)  MISSED
	class UPlaneCutTool*                               CutTool;                                                    // 0x0030   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0038   (0x0008)  MISSED
};

/// Class /Script/MeshModelingToolsExp.PlaneCutTool
/// Size: 0x00E0 (0x0000C0 - 0x0001A0)
class UPlaneCutTool : public UMultiSelectionMeshEditingTool
{ 
public:
	class UPlaneCutToolProperties*                     BasicProperties;                                            // 0x00C0   (0x0008)  
	TArray<class UMeshOpPreviewWithBackgroundCompute*> Previews;                                                   // 0x00C8   (0x0010)  
	TArray<class UDynamicMeshReplacementChangeTarget*> MeshesToCut;                                                // 0x00D8   (0x0010)  
	class UConstructionPlaneMechanic*                  PlaneMechanic;                                              // 0x00E8   (0x0008)  
	unsigned char                                      UnknownData00_6[0xB0];                                      // 0x00F0   (0x00B0)  MISSED


	/// Functions
	// Function /Script/MeshModelingToolsExp.PlaneCutTool.FlipPlane
	// void FlipPlane();                                                                                                     // [0xb39946c] Final|Native|Protected 
	// Function /Script/MeshModelingToolsExp.PlaneCutTool.Cut
	// void Cut();                                                                                                           // [0xb399418] Final|Native|Protected 
};

/// Class /Script/MeshModelingToolsExp.ProjectToTargetToolBuilder
/// Size: 0x0000 (0x000028 - 0x000028)
class UProjectToTargetToolBuilder : public UMultiSelectionMeshEditingToolBuilder
{ 
public:
};

/// Class /Script/MeshModelingToolsExp.RemeshMeshToolProperties
/// Size: 0x0028 (0x0000B8 - 0x0000E0)
class URemeshMeshToolProperties : public URemeshProperties
{ 
public:
	int32_t                                            TargetTriangleCount;                                        // 0x00B8   (0x0004)  
	ERemeshSmoothingType                               SmoothingType;                                              // 0x00BC   (0x0001)  
	bool                                               bDiscardAttributes;                                         // 0x00BD   (0x0001)  
	bool                                               bShowGroupColors;                                           // 0x00BE   (0x0001)  
	ERemeshType                                        RemeshType;                                                 // 0x00BF   (0x0001)  
	int32_t                                            RemeshIterations;                                           // 0x00C0   (0x0004)  
	int32_t                                            MaxRemeshIterations;                                        // 0x00C4   (0x0004)  
	int32_t                                            ExtraProjectionIterations;                                  // 0x00C8   (0x0004)  
	bool                                               bUseTargetEdgeLength;                                       // 0x00CC   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00CD   (0x0003)  MISSED
	float                                              TargetEdgeLength;                                           // 0x00D0   (0x0004)  
	bool                                               bReproject;                                                 // 0x00D4   (0x0001)  
	bool                                               bReprojectConstraints;                                      // 0x00D5   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x00D6   (0x0002)  MISSED
	float                                              BoundaryCornerAngleThreshold;                               // 0x00D8   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x00DC   (0x0004)  MISSED
};

/// Class /Script/MeshModelingToolsExp.ProjectToTargetToolProperties
/// Size: 0x0020 (0x0000E0 - 0x000100)
class UProjectToTargetToolProperties : public URemeshMeshToolProperties
{ 
public:
	bool                                               bWorldSpace;                                                // 0x00E0   (0x0001)  
	bool                                               bParallel;                                                  // 0x00E1   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x00E2   (0x0002)  MISSED
	int32_t                                            FaceProjectionPassesPerRemeshIteration;                     // 0x00E4   (0x0004)  
	float                                              SurfaceProjectionSpeed;                                     // 0x00E8   (0x0004)  
	float                                              NormalAlignmentSpeed;                                       // 0x00EC   (0x0004)  
	bool                                               bSmoothInFillAreas;                                         // 0x00F0   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x00F1   (0x0003)  MISSED
	float                                              FillAreaDistanceMultiplier;                                 // 0x00F4   (0x0004)  
	float                                              FillAreaSmoothMultiplier;                                   // 0x00F8   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x00FC   (0x0004)  MISSED
};

/// Class /Script/MeshModelingToolsExp.RemeshMeshTool
/// Size: 0x0050 (0x0000C0 - 0x000110)
class URemeshMeshTool : public UMultiSelectionMeshEditingTool
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x00C0   (0x0008)  MISSED
	class URemeshMeshToolProperties*                   BasicProperties;                                            // 0x00C8   (0x0008)  
	class UMeshStatisticsProperties*                   MeshStatisticsProperties;                                   // 0x00D0   (0x0008)  
	class UMeshOpPreviewWithBackgroundCompute*         Preview;                                                    // 0x00D8   (0x0008)  
	class UMeshElementsVisualizer*                     MeshElementsDisplay;                                        // 0x00E0   (0x0008)  
	unsigned char                                      UnknownData01_6[0x28];                                      // 0x00E8   (0x0028)  MISSED
};

/// Class /Script/MeshModelingToolsExp.ProjectToTargetTool
/// Size: 0x0010 (0x000110 - 0x000120)
class UProjectToTargetTool : public URemeshMeshTool
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0110   (0x0010)  MISSED
};

/// Class /Script/MeshModelingToolsExp.MeshAnalysisProperties
/// Size: 0x0020 (0x0000A8 - 0x0000C8)
class UMeshAnalysisProperties : public UInteractiveToolPropertySet
{ 
public:
	SDK_UNDEFINED(16,15036) /* FString */              __um(SurfaceArea);                                          // 0x00A8   (0x0010)  
	SDK_UNDEFINED(16,15037) /* FString */              __um(Volume);                                               // 0x00B8   (0x0010)  
};

/// Class /Script/MeshModelingToolsExp.MeshStatisticsProperties
/// Size: 0x0030 (0x0000A8 - 0x0000D8)
class UMeshStatisticsProperties : public UInteractiveToolPropertySet
{ 
public:
	SDK_UNDEFINED(16,15038) /* FString */              __um(Mesh);                                                 // 0x00A8   (0x0010)  
	SDK_UNDEFINED(16,15039) /* FString */              __um(UV);                                                   // 0x00B8   (0x0010)  
	SDK_UNDEFINED(16,15040) /* FString */              __um(Attributes);                                           // 0x00C8   (0x0010)  
};

/// Class /Script/MeshModelingToolsExp.RemeshMeshToolBuilder
/// Size: 0x0000 (0x000028 - 0x000028)
class URemeshMeshToolBuilder : public UMultiSelectionMeshEditingToolBuilder
{ 
public:
};

/// Class /Script/MeshModelingToolsExp.RemoveOccludedTrianglesToolBuilder
/// Size: 0x0000 (0x000028 - 0x000028)
class URemoveOccludedTrianglesToolBuilder : public UMultiSelectionMeshEditingToolBuilder
{ 
public:
};

/// Class /Script/MeshModelingToolsExp.RemoveOccludedTrianglesToolProperties
/// Size: 0x0030 (0x0000A8 - 0x0000D8)
class URemoveOccludedTrianglesToolProperties : public UInteractiveToolPropertySet
{ 
public:
	EOcclusionCalculationUIMode                        OcclusionTestMethod;                                        // 0x00A8   (0x0001)  
	EOcclusionTriangleSamplingUIMode                   TriangleSampling;                                           // 0x00A9   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x00AA   (0x0006)  MISSED
	double                                             WindingIsoValue;                                            // 0x00B0   (0x0008)  
	int32_t                                            AddRandomRays;                                              // 0x00B8   (0x0004)  
	int32_t                                            AddTriangleSamples;                                         // 0x00BC   (0x0004)  
	bool                                               bOnlySelfOcclude;                                           // 0x00C0   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x00C1   (0x0003)  MISSED
	int32_t                                            ShrinkRemoval;                                              // 0x00C4   (0x0004)  
	double                                             MinAreaIsland;                                              // 0x00C8   (0x0008)  
	int32_t                                            MinTriCountIsland;                                          // 0x00D0   (0x0004)  
	EOccludedAction                                    Action;                                                     // 0x00D4   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x00D5   (0x0003)  MISSED
};

/// Class /Script/MeshModelingToolsExp.RemoveOccludedTrianglesAdvancedProperties
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class URemoveOccludedTrianglesAdvancedProperties : public UInteractiveToolPropertySet
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00A8   (0x0008)  MISSED
};

/// Class /Script/MeshModelingToolsExp.RemoveOccludedTrianglesOperatorFactory
/// Size: 0x0018 (0x000028 - 0x000040)
class URemoveOccludedTrianglesOperatorFactory : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x30];                                      // 0x0000   (0x0030)  MISSED
	class URemoveOccludedTrianglesTool*                Tool;                                                       // 0x0030   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0038   (0x0008)  MISSED
};

/// Class /Script/MeshModelingToolsExp.RemoveOccludedTrianglesTool
/// Size: 0x0120 (0x0000C0 - 0x0001E0)
class URemoveOccludedTrianglesTool : public UMultiSelectionMeshEditingTool
{ 
public:
	class URemoveOccludedTrianglesToolProperties*      BasicProperties;                                            // 0x00C0   (0x0008)  
	class UPolygroupLayersProperties*                  PolygroupLayersProperties;                                  // 0x00C8   (0x0008)  
	class URemoveOccludedTrianglesAdvancedProperties*  AdvancedProperties;                                         // 0x00D0   (0x0008)  
	TArray<class UMeshOpPreviewWithBackgroundCompute*> Previews;                                                   // 0x00D8   (0x0010)  
	TArray<class UPreviewMesh*>                        PreviewCopies;                                              // 0x00E8   (0x0010)  
	unsigned char                                      UnknownData00_6[0xE8];                                      // 0x00F8   (0x00E8)  MISSED
};

/// Class /Script/MeshModelingToolsExp.RevolveBoundaryToolBuilder
/// Size: 0x0000 (0x000028 - 0x000028)
class URevolveBoundaryToolBuilder : public USingleSelectionMeshEditingToolBuilder
{ 
public:
};

/// Class /Script/MeshModelingToolsExp.RevolveBoundaryOperatorFactory
/// Size: 0x0010 (0x000028 - 0x000038)
class URevolveBoundaryOperatorFactory : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x30];                                      // 0x0000   (0x0030)  MISSED
	class URevolveBoundaryTool*                        RevolveBoundaryTool;                                        // 0x0030   (0x0008)  
};

/// Class /Script/MeshModelingToolsExp.RevolveBoundaryToolProperties
/// Size: 0x0030 (0x000118 - 0x000148)
class URevolveBoundaryToolProperties : public URevolveProperties
{ 
public:
	ERevolvePropertiesCapFillMode                      CapFillMode;                                                // 0x0118   (0x0001)  
	bool                                               bDisplayInputMesh;                                          // 0x0119   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x011A   (0x0006)  MISSED
	FVector                                            AxisOrigin;                                                 // 0x0120   (0x0018)  
	FVector2D                                          AxisOrientation;                                            // 0x0138   (0x0010)  
};

/// Class /Script/MeshModelingToolsExp.RevolveBoundaryTool
/// Size: 0x0070 (0x0001B0 - 0x000220)
class URevolveBoundaryTool : public UMeshBoundaryToolBase
{ 
public:
	unsigned char                                      UnknownData00_3[0x18];                                      // 0x01B0   (0x0018)  MISSED
	class UCreateMeshObjectTypeProperties*             OutputTypeProperties;                                       // 0x01C8   (0x0008)  
	class URevolveBoundaryToolProperties*              Settings;                                                   // 0x01D0   (0x0008)  
	class UNewMeshMaterialProperties*                  MaterialProperties;                                         // 0x01D8   (0x0008)  
	class UConstructionPlaneMechanic*                  PlaneMechanic;                                              // 0x01E0   (0x0008)  
	class UMeshOpPreviewWithBackgroundCompute*         Preview;                                                    // 0x01E8   (0x0008)  
	unsigned char                                      UnknownData01_6[0x30];                                      // 0x01F0   (0x0030)  MISSED
};

/// Class /Script/MeshModelingToolsExp.SculptBrushProperties
/// Size: 0x0038 (0x0000A8 - 0x0000E0)
class USculptBrushProperties : public UInteractiveToolPropertySet
{ 
public:
	FBrushToolRadius                                   BrushSize;                                                  // 0x00A8   (0x0014)  
	float                                              BrushFalloffAmount;                                         // 0x00BC   (0x0004)  
	bool                                               bShowFalloff;                                               // 0x00C0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00C1   (0x0003)  MISSED
	float                                              Depth;                                                      // 0x00C4   (0x0004)  
	bool                                               bHitBackFaces;                                              // 0x00C8   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x00C9   (0x0003)  MISSED
	float                                              FlowRate;                                                   // 0x00CC   (0x0004)  
	float                                              Spacing;                                                    // 0x00D0   (0x0004)  
	float                                              Lazyness;                                                   // 0x00D4   (0x0004)  
	bool                                               bShowPerBrushProps;                                         // 0x00D8   (0x0001)  
	bool                                               bShowLazyness;                                              // 0x00D9   (0x0001)  
	bool                                               bShowFlowRate;                                              // 0x00DA   (0x0001)  
	bool                                               bShowSpacing;                                               // 0x00DB   (0x0001)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x00DC   (0x0004)  MISSED
};

/// Class /Script/MeshModelingToolsExp.KelvinBrushProperties
/// Size: 0x0010 (0x0000A8 - 0x0000B8)
class UKelvinBrushProperties : public UInteractiveToolPropertySet
{ 
public:
	float                                              FalloffDistance;                                            // 0x00A8   (0x0004)  
	float                                              Stiffness;                                                  // 0x00AC   (0x0004)  
	float                                              Incompressiblity;                                           // 0x00B0   (0x0004)  
	int32_t                                            BrushSteps;                                                 // 0x00B4   (0x0004)  
};

/// Class /Script/MeshModelingToolsExp.WorkPlaneProperties
/// Size: 0x0048 (0x0000A8 - 0x0000F0)
class UWorkPlaneProperties : public UInteractiveToolPropertySet
{ 
public:
	bool                                               bPropertySetEnabled;                                        // 0x00A8   (0x0001)  
	bool                                               bShowGizmo;                                                 // 0x00A9   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x00AA   (0x0006)  MISSED
	FVector                                            Position;                                                   // 0x00B0   (0x0018)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x00C8   (0x0008)  MISSED
	FQuat                                              Rotation;                                                   // 0x00D0   (0x0020)  
};

/// Class /Script/MeshModelingToolsExp.SculptMaxBrushProperties
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class USculptMaxBrushProperties : public UInteractiveToolPropertySet
{ 
public:
	float                                              MaxHeight;                                                  // 0x00A8   (0x0004)  
	bool                                               bFreezeCurrentHeight;                                       // 0x00AC   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00AD   (0x0003)  MISSED
};

/// Class /Script/MeshModelingToolsExp.SeamSculptToolBuilder
/// Size: 0x0000 (0x000030 - 0x000030)
class USeamSculptToolBuilder : public UMeshSurfacePointMeshEditingToolBuilder
{ 
public:
};

/// Class /Script/MeshModelingToolsExp.SeamSculptToolProperties
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class USeamSculptToolProperties : public UInteractiveToolPropertySet
{ 
public:
	bool                                               bShowWireframe;                                             // 0x00A8   (0x0001)  
	bool                                               bHitBackFaces;                                              // 0x00A9   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x00AA   (0x0006)  MISSED
};

/// Class /Script/MeshModelingToolsExp.SeamSculptTool
/// Size: 0x0100 (0x0002D0 - 0x0003D0)
class USeamSculptTool : public UDynamicMeshBrushTool
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x02D0   (0x0008)  MISSED
	class USeamSculptToolProperties*                   Settings;                                                   // 0x02D8   (0x0008)  
	class UPreviewGeometry*                            PreviewGeom;                                                // 0x02E0   (0x0008)  
	unsigned char                                      UnknownData01_6[0xE8];                                      // 0x02E8   (0x00E8)  MISSED
};

/// Class /Script/MeshModelingToolsExp.SelfUnionMeshesToolProperties
/// Size: 0x0010 (0x0000A8 - 0x0000B8)
class USelfUnionMeshesToolProperties : public UInteractiveToolPropertySet
{ 
public:
	bool                                               bTrimFlaps;                                                 // 0x00A8   (0x0001)  
	bool                                               bTryFixHoles;                                               // 0x00A9   (0x0001)  
	bool                                               bTryCollapseEdges;                                          // 0x00AA   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x00AB   (0x0001)  MISSED
	float                                              WindingThreshold;                                           // 0x00AC   (0x0004)  
	bool                                               bShowNewBoundaryEdges;                                      // 0x00B0   (0x0001)  
	bool                                               bOnlyUseFirstMeshMaterials;                                 // 0x00B1   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x00B2   (0x0006)  MISSED
};

/// Class /Script/MeshModelingToolsExp.SelfUnionMeshesTool
/// Size: 0x0048 (0x000110 - 0x000158)
class USelfUnionMeshesTool : public UBaseCreateFromSelectedTool
{ 
public:
	class USelfUnionMeshesToolProperties*              Properties;                                                 // 0x0110   (0x0008)  
	class ULineSetComponent*                           DrawnLineSet;                                               // 0x0118   (0x0008)  
	unsigned char                                      UnknownData00_6[0x38];                                      // 0x0120   (0x0038)  MISSED
};

/// Class /Script/MeshModelingToolsExp.SelfUnionMeshesToolBuilder
/// Size: 0x0000 (0x000028 - 0x000028)
class USelfUnionMeshesToolBuilder : public UBaseCreateFromSelectedToolBuilder
{ 
public:
};

/// Class /Script/MeshModelingToolsExp.SmoothMeshToolProperties
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class USmoothMeshToolProperties : public UInteractiveToolPropertySet
{ 
public:
	ESmoothMeshToolSmoothType                          SmoothingType;                                              // 0x00A8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x00A9   (0x0007)  MISSED
};

/// Class /Script/MeshModelingToolsExp.IterativeSmoothProperties
/// Size: 0x0010 (0x0000A8 - 0x0000B8)
class UIterativeSmoothProperties : public UInteractiveToolPropertySet
{ 
public:
	float                                              SmoothingPerStep;                                           // 0x00A8   (0x0004)  
	int32_t                                            Steps;                                                      // 0x00AC   (0x0004)  
	bool                                               bSmoothBoundary;                                            // 0x00B0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x00B1   (0x0007)  MISSED
};

/// Class /Script/MeshModelingToolsExp.DiffusionSmoothProperties
/// Size: 0x0010 (0x0000A8 - 0x0000B8)
class UDiffusionSmoothProperties : public UInteractiveToolPropertySet
{ 
public:
	float                                              SmoothingPerStep;                                           // 0x00A8   (0x0004)  
	int32_t                                            Steps;                                                      // 0x00AC   (0x0004)  
	bool                                               bPreserveUVs;                                               // 0x00B0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x00B1   (0x0007)  MISSED
};

/// Class /Script/MeshModelingToolsExp.ImplicitSmoothProperties
/// Size: 0x0010 (0x0000A8 - 0x0000B8)
class UImplicitSmoothProperties : public UInteractiveToolPropertySet
{ 
public:
	float                                              SmoothSpeed;                                                // 0x00A8   (0x0004)  
	float                                              Smoothness;                                                 // 0x00AC   (0x0004)  
	bool                                               bPreserveUVs;                                               // 0x00B0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00B1   (0x0003)  MISSED
	float                                              VolumeCorrection;                                           // 0x00B4   (0x0004)  
};

/// Class /Script/MeshModelingToolsExp.SmoothWeightMapSetProperties
/// Size: 0x0008 (0x0000C8 - 0x0000D0)
class USmoothWeightMapSetProperties : public UWeightMapSetProperties
{ 
public:
	float                                              MinSmoothMultiplier;                                        // 0x00C8   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00CC   (0x0004)  MISSED
};

/// Class /Script/MeshModelingToolsExp.SmoothMeshTool
/// Size: 0x0030 (0x000410 - 0x000440)
class USmoothMeshTool : public UBaseMeshProcessingTool
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0410   (0x0008)  MISSED
	class USmoothMeshToolProperties*                   SmoothProperties;                                           // 0x0418   (0x0008)  
	class UIterativeSmoothProperties*                  IterativeProperties;                                        // 0x0420   (0x0008)  
	class UDiffusionSmoothProperties*                  DiffusionProperties;                                        // 0x0428   (0x0008)  
	class UImplicitSmoothProperties*                   ImplicitProperties;                                         // 0x0430   (0x0008)  
	class USmoothWeightMapSetProperties*               WeightMapProperties;                                        // 0x0438   (0x0008)  
};

/// Class /Script/MeshModelingToolsExp.SmoothMeshToolBuilder
/// Size: 0x0000 (0x000028 - 0x000028)
class USmoothMeshToolBuilder : public UBaseMeshProcessingToolBuilder
{ 
public:
};

/// Class /Script/MeshModelingToolsExp.SplitMeshesToolBuilder
/// Size: 0x0000 (0x000028 - 0x000028)
class USplitMeshesToolBuilder : public UMultiSelectionMeshEditingToolBuilder
{ 
public:
};

/// Class /Script/MeshModelingToolsExp.SplitMeshesToolProperties
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class USplitMeshesToolProperties : public UInteractiveToolPropertySet
{ 
public:
	bool                                               bTransferMaterials;                                         // 0x00A8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x00A9   (0x0007)  MISSED
};

/// Class /Script/MeshModelingToolsExp.SplitMeshesTool
/// Size: 0x0038 (0x0000C0 - 0x0000F8)
class USplitMeshesTool : public UMultiSelectionMeshEditingTool
{ 
public:
	class USplitMeshesToolProperties*                  BasicProperties;                                            // 0x00C0   (0x0008)  
	class UCreateMeshObjectTypeProperties*             OutputTypeProperties;                                       // 0x00C8   (0x0008)  
	unsigned char                                      UnknownData00_6[0x28];                                      // 0x00D0   (0x0028)  MISSED
};

/// Class /Script/MeshModelingToolsExp.TransferMeshToolBuilder
/// Size: 0x0000 (0x000028 - 0x000028)
class UTransferMeshToolBuilder : public UMultiSelectionMeshEditingToolBuilder
{ 
public:
};

/// Class /Script/MeshModelingToolsExp.TransferMeshToolProperties
/// Size: 0x0078 (0x0000A8 - 0x000120)
class UTransferMeshToolProperties : public UInteractiveToolPropertySet
{ 
public:
	bool                                               bTransferMaterials;                                         // 0x00A8   (0x0001)  
	bool                                               bTransferCollision;                                         // 0x00A9   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x00AA   (0x0006)  MISSED
	SDK_UNDEFINED(16,15041) /* FString */              __um(SourceLOD);                                            // 0x00B0   (0x0010)  
	SDK_UNDEFINED(16,15042) /* FString */              __um(TargetLod);                                            // 0x00C0   (0x0010)  
	bool                                               bIsStaticMeshSource;                                        // 0x00D0   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x00D1   (0x0007)  MISSED
	SDK_UNDEFINED(16,15043) /* TArray<FString> */      __um(SourceLODNamesList);                                   // 0x00D8   (0x0010)  
	unsigned char                                      UnknownData02_5[0x10];                                      // 0x00E8   (0x0010)  MISSED
	SDK_UNDEFINED(16,15044) /* TArray<FString> */      __um(TargetLODNamesList);                                   // 0x00F8   (0x0010)  
	unsigned char                                      UnknownData03_5[0x10];                                      // 0x0108   (0x0010)  MISSED
	bool                                               bIsStaticMeshTarget;                                        // 0x0118   (0x0001)  
	unsigned char                                      UnknownData04_6[0x7];                                       // 0x0119   (0x0007)  MISSED


	/// Functions
	// Function /Script/MeshModelingToolsExp.TransferMeshToolProperties.GetTargetLODNamesFunc
	// TArray<FString> GetTargetLODNamesFunc();                                                                              // [0xb399484] Final|Native|Public|Const 
	// Function /Script/MeshModelingToolsExp.TransferMeshToolProperties.GetSourceLODNamesFunc
	// TArray<FString> GetSourceLODNamesFunc();                                                                              // [0xb2f1fc4] Final|Native|Public|Const 
};

/// Class /Script/MeshModelingToolsExp.TransferMeshTool
/// Size: 0x0010 (0x0000C0 - 0x0000D0)
class UTransferMeshTool : public UMultiSelectionMeshEditingTool
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x00C0   (0x0008)  MISSED
	class UTransferMeshToolProperties*                 BasicProperties;                                            // 0x00C8   (0x0008)  
};

/// Class /Script/MeshModelingToolsExp.TransformMeshesToolBuilder
/// Size: 0x0000 (0x000028 - 0x000028)
class UTransformMeshesToolBuilder : public UMultiSelectionMeshEditingToolBuilder
{ 
public:
};

/// Class /Script/MeshModelingToolsExp.TransformMeshesToolProperties
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UTransformMeshesToolProperties : public UInteractiveToolPropertySet
{ 
public:
	ETransformMeshesTransformMode                      TransformMode;                                              // 0x00A8   (0x0001)  
	bool                                               bApplyToInstances;                                          // 0x00A9   (0x0001)  
	bool                                               bSetPivotMode;                                              // 0x00AA   (0x0001)  
	bool                                               bEnableSnapDragging;                                        // 0x00AB   (0x0001)  
	ETransformMeshesSnapDragSource                     SnapDragSource;                                             // 0x00AC   (0x0001)  
	ETransformMeshesSnapDragRotationMode               RotationMode;                                               // 0x00AD   (0x0001)  
	bool                                               bHaveInstances;                                             // 0x00AE   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x00AF   (0x0001)  MISSED
};

/// Struct /Script/MeshModelingToolsExp.TransformMeshesTarget
/// Size: 0x0010 (0x000000 - 0x000010)
struct FTransformMeshesTarget
{ 
	class UTransformProxy*                             TransformProxy;                                             // 0x0000   (0x0008)  
	class UCombinedTransformGizmo*                     TransformGizmo;                                             // 0x0008   (0x0008)  
};

/// Class /Script/MeshModelingToolsExp.TransformMeshesTool
/// Size: 0x00E0 (0x0000C0 - 0x0001A0)
class UTransformMeshesTool : public UMultiSelectionMeshEditingTool
{ 
public:
	unsigned char                                      UnknownData00_3[0x10];                                      // 0x00C0   (0x0010)  MISSED
	class UTransformMeshesToolProperties*              TransformProps;                                             // 0x00D0   (0x0008)  
	TArray<FTransformMeshesTarget>                     ActiveGizmos;                                               // 0x00D8   (0x0010)  
	class UDragAlignmentMechanic*                      DragAlignmentMechanic;                                      // 0x00E8   (0x0008)  
	unsigned char                                      UnknownData01_6[0xB0];                                      // 0x00F0   (0x00B0)  MISSED
};

/// Class /Script/MeshModelingToolsExp.TriangulateSplinesToolProperties
/// Size: 0x0038 (0x0000A8 - 0x0000E0)
class UTriangulateSplinesToolProperties : public UInteractiveToolPropertySet
{ 
public:
	double                                             ErrorTolerance;                                             // 0x00A8   (0x0008)  
	EFlattenCurveMethod                                FlattenMethod;                                              // 0x00B0   (0x0001)  
	ECombineCurvesMethod                               CombineMethod;                                              // 0x00B1   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x00B2   (0x0006)  MISSED
	double                                             Thickness;                                                  // 0x00B8   (0x0008)  
	bool                                               bFlipResult;                                                // 0x00C0   (0x0001)  
	EOffsetOpenCurvesMethod                            OpenCurves;                                                 // 0x00C1   (0x0001)  
	unsigned char                                      UnknownData01_5[0x6];                                       // 0x00C2   (0x0006)  MISSED
	double                                             CurveOffset;                                                // 0x00C8   (0x0008)  
	EOffsetClosedCurvesMethod                          OffsetClosedCurves;                                         // 0x00D0   (0x0001)  
	EOpenCurveEndShapes                                EndShapes;                                                  // 0x00D1   (0x0001)  
	EOffsetJoinMethod                                  JoinMethod;                                                 // 0x00D2   (0x0001)  
	unsigned char                                      UnknownData02_5[0x5];                                       // 0x00D3   (0x0005)  MISSED
	double                                             MiterLimit;                                                 // 0x00D8   (0x0008)  
};

/// Class /Script/MeshModelingToolsExp.TriangulateSplinesTool
/// Size: 0x0060 (0x0000A0 - 0x000100)
class UTriangulateSplinesTool : public UInteractiveTool
{ 
public:
	unsigned char                                      UnknownData00_3[0x10];                                      // 0x00A0   (0x0010)  MISSED
	class UTriangulateSplinesToolProperties*           TriangulateProperties;                                      // 0x00B0   (0x0008)  
	class UCreateMeshObjectTypeProperties*             OutputTypeProperties;                                       // 0x00B8   (0x0008)  
	class UMeshOpPreviewWithBackgroundCompute*         Preview;                                                    // 0x00C0   (0x0008)  
	SDK_UNDEFINED(8,15045) /* TWeakObjectPtr<UWorld*> */ __um(TargetWorld);                                        // 0x00C8   (0x0008)  
	SDK_UNDEFINED(16,15046) /* TArray<TWeakObjectPtr<AActor*>> */ __um(ActorsWithSplines);                         // 0x00D0   (0x0010)  
	unsigned char                                      UnknownData01_6[0x20];                                      // 0x00E0   (0x0020)  MISSED
};

/// Class /Script/MeshModelingToolsExp.TriangulateSplinesToolBuilder
/// Size: 0x0000 (0x000028 - 0x000028)
class UTriangulateSplinesToolBuilder : public UInteractiveToolBuilder
{ 
public:
};

/// Class /Script/MeshModelingToolsExp.VolumeToMeshToolBuilder
/// Size: 0x0000 (0x000028 - 0x000028)
class UVolumeToMeshToolBuilder : public UInteractiveToolBuilder
{ 
public:
};

/// Class /Script/MeshModelingToolsExp.VolumeToMeshToolProperties
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UVolumeToMeshToolProperties : public UInteractiveToolPropertySet
{ 
public:
	bool                                               bWeldEdges;                                                 // 0x00A8   (0x0001)  
	bool                                               bAutoRepair;                                                // 0x00A9   (0x0001)  
	bool                                               bOptimizeMesh;                                              // 0x00AA   (0x0001)  
	bool                                               bShowWireframe;                                             // 0x00AB   (0x0001)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00AC   (0x0004)  MISSED
};

/// Class /Script/MeshModelingToolsExp.VolumeToMeshTool
/// Size: 0x0268 (0x0000A0 - 0x000308)
class UVolumeToMeshTool : public UInteractiveTool
{ 
public:
	class UVolumeToMeshToolProperties*                 Settings;                                                   // 0x00A0   (0x0008)  
	class UCreateMeshObjectTypeProperties*             OutputTypeProperties;                                       // 0x00A8   (0x0008)  
	class UPreviewMesh*                                PreviewMesh;                                                // 0x00B0   (0x0008)  
	SDK_UNDEFINED(24,15047) /* TLazyObjectPtr<AVolume*> */ __um(TargetVolume);                                     // 0x00B8   (0x0018)  
	class ULineSetComponent*                           VolumeEdgesSet;                                             // 0x00D0   (0x0008)  
	unsigned char                                      UnknownData00_6[0x230];                                     // 0x00D8   (0x0230)  MISSED
};

/// Class /Script/MeshModelingToolsExp.VoxelBlendMeshesToolProperties
/// Size: 0x0020 (0x0000A8 - 0x0000C8)
class UVoxelBlendMeshesToolProperties : public UInteractiveToolPropertySet
{ 
public:
	double                                             BlendPower;                                                 // 0x00A8   (0x0008)  
	double                                             BlendFalloff;                                               // 0x00B0   (0x0008)  
	EVoxelBlendOperation                               Operation;                                                  // 0x00B8   (0x0001)  
	bool                                               bVoxWrap;                                                   // 0x00B9   (0x0001)  
	bool                                               bRemoveInternalsAfterVoxWrap;                               // 0x00BA   (0x0001)  
	unsigned char                                      UnknownData00_5[0x5];                                       // 0x00BB   (0x0005)  MISSED
	double                                             ThickenShells;                                              // 0x00C0   (0x0008)  
};

/// Class /Script/MeshModelingToolsExp.VoxelBlendMeshesTool
/// Size: 0x0008 (0x000128 - 0x000130)
class UVoxelBlendMeshesTool : public UBaseVoxelTool
{ 
public:
	class UVoxelBlendMeshesToolProperties*             BlendProperties;                                            // 0x0128   (0x0008)  
};

/// Class /Script/MeshModelingToolsExp.VoxelBlendMeshesToolBuilder
/// Size: 0x0000 (0x000028 - 0x000028)
class UVoxelBlendMeshesToolBuilder : public UBaseCreateFromSelectedToolBuilder
{ 
public:
};

/// Class /Script/MeshModelingToolsExp.VoxelMorphologyMeshesToolProperties
/// Size: 0x0020 (0x0000A8 - 0x0000C8)
class UVoxelMorphologyMeshesToolProperties : public UInteractiveToolPropertySet
{ 
public:
	EMorphologyOperation                               Operation;                                                  // 0x00A8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x00A9   (0x0007)  MISSED
	double                                             Distance;                                                   // 0x00B0   (0x0008)  
	bool                                               bVoxWrap;                                                   // 0x00B8   (0x0001)  
	bool                                               bRemoveInternalsAfterVoxWrap;                               // 0x00B9   (0x0001)  
	unsigned char                                      UnknownData01_5[0x6];                                       // 0x00BA   (0x0006)  MISSED
	double                                             ThickenShells;                                              // 0x00C0   (0x0008)  
};

/// Class /Script/MeshModelingToolsExp.VoxelMorphologyMeshesTool
/// Size: 0x0008 (0x000128 - 0x000130)
class UVoxelMorphologyMeshesTool : public UBaseVoxelTool
{ 
public:
	class UVoxelMorphologyMeshesToolProperties*        MorphologyProperties;                                       // 0x0128   (0x0008)  
};

/// Class /Script/MeshModelingToolsExp.VoxelMorphologyMeshesToolBuilder
/// Size: 0x0000 (0x000028 - 0x000028)
class UVoxelMorphologyMeshesToolBuilder : public UBaseCreateFromSelectedToolBuilder
{ 
public:
};

/// Class /Script/MeshModelingToolsExp.VoxelSolidifyMeshesToolProperties
/// Size: 0x0020 (0x0000A8 - 0x0000C8)
class UVoxelSolidifyMeshesToolProperties : public UInteractiveToolPropertySet
{ 
public:
	double                                             WindingThreshold;                                           // 0x00A8   (0x0008)  
	double                                             ExtendBounds;                                               // 0x00B0   (0x0008)  
	int32_t                                            SurfaceSearchSteps;                                         // 0x00B8   (0x0004)  
	bool                                               bSolidAtBoundaries;                                         // 0x00BC   (0x0001)  
	bool                                               bApplyThickenShells;                                        // 0x00BD   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x00BE   (0x0002)  MISSED
	double                                             ThickenShells;                                              // 0x00C0   (0x0008)  
};

/// Class /Script/MeshModelingToolsExp.VoxelSolidifyMeshesTool
/// Size: 0x0008 (0x000128 - 0x000130)
class UVoxelSolidifyMeshesTool : public UBaseVoxelTool
{ 
public:
	class UVoxelSolidifyMeshesToolProperties*          SolidifyProperties;                                         // 0x0128   (0x0008)  
};

/// Class /Script/MeshModelingToolsExp.VoxelSolidifyMeshesToolBuilder
/// Size: 0x0000 (0x000028 - 0x000028)
class UVoxelSolidifyMeshesToolBuilder : public UBaseCreateFromSelectedToolBuilder
{ 
public:
};

/// Class /Script/MeshModelingToolsExp.WeldMeshEdgesToolBuilder
/// Size: 0x0000 (0x000028 - 0x000028)
class UWeldMeshEdgesToolBuilder : public USingleSelectionMeshEditingToolBuilder
{ 
public:
};

/// Class /Script/MeshModelingToolsExp.WeldMeshEdgesToolProperties
/// Size: 0x0028 (0x0000A8 - 0x0000D0)
class UWeldMeshEdgesToolProperties : public UInteractiveToolPropertySet
{ 
public:
	float                                              Tolerance;                                                  // 0x00A8   (0x0004)  
	bool                                               bOnlyUnique;                                                // 0x00AC   (0x0001)  
	bool                                               bResolveTJunctions;                                         // 0x00AD   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x00AE   (0x0002)  MISSED
	int32_t                                            InitialEdges;                                               // 0x00B0   (0x0004)  
	int32_t                                            RemainingEdges;                                             // 0x00B4   (0x0004)  
	EWeldMeshEdgesAttributeUIMode                      AttrWeldingMode;                                            // 0x00B8   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x00B9   (0x0003)  MISSED
	float                                              SplitNormalThreshold;                                       // 0x00BC   (0x0004)  
	float                                              SplitTangentsThreshold;                                     // 0x00C0   (0x0004)  
	float                                              SplitUVThreshold;                                           // 0x00C4   (0x0004)  
	float                                              SplitColorThreshold;                                        // 0x00C8   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x00CC   (0x0004)  MISSED
};

/// Class /Script/MeshModelingToolsExp.WeldMeshEdgesOperatorFactory
/// Size: 0x0010 (0x000028 - 0x000038)
class UWeldMeshEdgesOperatorFactory : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x30];                                      // 0x0000   (0x0030)  MISSED
	class UWeldMeshEdgesTool*                          WeldMeshEdgesTool;                                          // 0x0030   (0x0008)  
};

/// Class /Script/MeshModelingToolsExp.WeldMeshEdgesTool
/// Size: 0x0030 (0x0000B8 - 0x0000E8)
class UWeldMeshEdgesTool : public USingleSelectionMeshEditingTool
{ 
public:
	class UWeldMeshEdgesToolProperties*                Settings;                                                   // 0x00B8   (0x0008)  
	class UMeshOpPreviewWithBackgroundCompute*         PreviewCompute;                                             // 0x00C0   (0x0008)  
	class UMeshElementsVisualizer*                     MeshElementsDisplay;                                        // 0x00C8   (0x0008)  
	class UWeldMeshEdgesOperatorFactory*               OperatorFactory;                                            // 0x00D0   (0x0008)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x00D8   (0x0010)  MISSED
};

