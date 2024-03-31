
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: InteractiveToolsFramework
/// dependency: ModelingComponents
/// dependency: ModelingOperators

/// Class /Script/MeshModelingTools.PolyEditActivityContext
/// Size: 0x00F8 (0x000028 - 0x000120)
class UPolyEditActivityContext : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	CMember(class UPolyEditCommonProperties*)          CommonProperties                                            OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(class UMeshOpPreviewWithBackgroundCompute*) Preview                                                    OFFSET(get<T>, {0x40, 8, 0, 0})
	CMember(class UPolygonSelectionMechanic*)          SelectionMechanic                                           OFFSET(get<T>, {0x70, 8, 0, 0})
};

/// Class /Script/MeshModelingTools.PolyEditExtrudeEdgeActivityProperties
/// Size: 0x0018 (0x0000A8 - 0x0000C0)
class UPolyEditExtrudeEdgeActivityProperties : public UInteractiveToolPropertySet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	CMember(EPolyEditExtrudeEdgeDirectionMode)         DirectionMode                                               OFFSET(get<T>, {0xA8, 4, 0, 0})
	CMember(EPolyEditExtrudeEdgeDistanceMode)          DistanceMode                                                OFFSET(get<T>, {0xAC, 4, 0, 0})
	DMember(double)                                    Distance                                                    OFFSET(get<double>, {0xB0, 8, 0, 0})
	DMember(bool)                                      bUseUnselectedForFrames                                     OFFSET(get<bool>, {0xB8, 1, 0, 0})
	DMember(bool)                                      bAdjustToExtrudeEvenly                                      OFFSET(get<bool>, {0xB9, 1, 0, 0})
};

/// Class /Script/MeshModelingTools.PolyEditExtrudeEdgeActivity
/// Size: 0x02A0 (0x000030 - 0x0002D0)
class UPolyEditExtrudeEdgeActivity : public UInteractiveToolActivity
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 720;

public:
	CMember(class UPolyEditExtrudeEdgeActivityProperties*) Settings                                                OFFSET(get<T>, {0x38, 8, 0, 0})
	CMember(class UPolyEditActivityContext*)           ActivityContext                                             OFFSET(get<T>, {0x40, 8, 0, 0})
	CMember(class UTransformProxy*)                    ExtrudeFrameProxy                                           OFFSET(get<T>, {0x48, 8, 0, 0})
	CMember(class UCombinedTransformGizmo*)            ExtrudeFrameGizmo                                           OFFSET(get<T>, {0x50, 8, 0, 0})
	CMember(class UTransformProxy*)                    SingleDirectionProxy                                        OFFSET(get<T>, {0x58, 8, 0, 0})
	CMember(class UCombinedTransformGizmo*)            SingleDirectionGizmo                                        OFFSET(get<T>, {0x60, 8, 0, 0})
	CMember(class UPreviewGeometry*)                   PreviewGeometry                                             OFFSET(get<T>, {0x68, 8, 0, 0})
};

/// Class /Script/MeshModelingTools.AddPrimitiveToolBuilder
/// Size: 0x0008 (0x000028 - 0x000030)
class UAddPrimitiveToolBuilder : public UInteractiveToolBuilder
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/MeshModelingTools.ProceduralShapeToolProperties
/// Size: 0x0010 (0x0000A8 - 0x0000B8)
class UProceduralShapeToolProperties : public UInteractiveToolPropertySet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	CMember(EMakeMeshPolygroupMode)                    PolygroupMode                                               OFFSET(get<T>, {0xA8, 1, 0, 0})
	CMember(EMakeMeshPlacementType)                    TargetSurface                                               OFFSET(get<T>, {0xA9, 1, 0, 0})
	CMember(EMakeMeshPivotLocation)                    PivotLocation                                               OFFSET(get<T>, {0xAA, 1, 0, 0})
	DMember(float)                                     Rotation                                                    OFFSET(get<float>, {0xAC, 4, 0, 0})
	DMember(bool)                                      bAlignToNormal                                              OFFSET(get<bool>, {0xB0, 1, 0, 0})
	DMember(bool)                                      bShowGizmo                                                  OFFSET(get<bool>, {0xB1, 1, 0, 0})
	DMember(bool)                                      bShowGizmoOptions                                           OFFSET(get<bool>, {0xB2, 1, 0, 0})
};

/// Class /Script/MeshModelingTools.ProceduralBoxToolProperties
/// Size: 0x0018 (0x0000B8 - 0x0000D0)
class UProceduralBoxToolProperties : public UProceduralShapeToolProperties
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	DMember(float)                                     Width                                                       OFFSET(get<float>, {0xB8, 4, 0, 0})
	DMember(float)                                     Depth                                                       OFFSET(get<float>, {0xBC, 4, 0, 0})
	DMember(float)                                     Height                                                      OFFSET(get<float>, {0xC0, 4, 0, 0})
	DMember(int32_t)                                   WidthSubdivisions                                           OFFSET(get<int32_t>, {0xC4, 4, 0, 0})
	DMember(int32_t)                                   DepthSubdivisions                                           OFFSET(get<int32_t>, {0xC8, 4, 0, 0})
	DMember(int32_t)                                   HeightSubdivisions                                          OFFSET(get<int32_t>, {0xCC, 4, 0, 0})
};

/// Class /Script/MeshModelingTools.ProceduralRectangleToolProperties
/// Size: 0x0020 (0x0000B8 - 0x0000D8)
class UProceduralRectangleToolProperties : public UProceduralShapeToolProperties
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	CMember(EProceduralRectType)                       RectangleType                                               OFFSET(get<T>, {0xB8, 4, 0, 0})
	DMember(float)                                     Width                                                       OFFSET(get<float>, {0xBC, 4, 0, 0})
	DMember(float)                                     Depth                                                       OFFSET(get<float>, {0xC0, 4, 0, 0})
	DMember(int32_t)                                   WidthSubdivisions                                           OFFSET(get<int32_t>, {0xC4, 4, 0, 0})
	DMember(int32_t)                                   DepthSubdivisions                                           OFFSET(get<int32_t>, {0xC8, 4, 0, 0})
	DMember(bool)                                      bMaintainDimension                                          OFFSET(get<bool>, {0xCC, 1, 0, 0})
	DMember(float)                                     CornerRadius                                                OFFSET(get<float>, {0xD0, 4, 0, 0})
	DMember(int32_t)                                   CornerSlices                                                OFFSET(get<int32_t>, {0xD4, 4, 0, 0})
};

/// Class /Script/MeshModelingTools.ProceduralDiscToolProperties
/// Size: 0x0018 (0x0000B8 - 0x0000D0)
class UProceduralDiscToolProperties : public UProceduralShapeToolProperties
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	CMember(EProceduralDiscType)                       DiscType                                                    OFFSET(get<T>, {0xB8, 4, 0, 0})
	DMember(float)                                     Radius                                                      OFFSET(get<float>, {0xBC, 4, 0, 0})
	DMember(int32_t)                                   RadialSlices                                                OFFSET(get<int32_t>, {0xC0, 4, 0, 0})
	DMember(int32_t)                                   RadialSubdivisions                                          OFFSET(get<int32_t>, {0xC4, 4, 0, 0})
	DMember(float)                                     HoleRadius                                                  OFFSET(get<float>, {0xC8, 4, 0, 0})
};

/// Class /Script/MeshModelingTools.ProceduralTorusToolProperties
/// Size: 0x0010 (0x0000B8 - 0x0000C8)
class UProceduralTorusToolProperties : public UProceduralShapeToolProperties
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	DMember(float)                                     MajorRadius                                                 OFFSET(get<float>, {0xB8, 4, 0, 0})
	DMember(float)                                     MinorRadius                                                 OFFSET(get<float>, {0xBC, 4, 0, 0})
	DMember(int32_t)                                   MajorSlices                                                 OFFSET(get<int32_t>, {0xC0, 4, 0, 0})
	DMember(int32_t)                                   MinorSlices                                                 OFFSET(get<int32_t>, {0xC4, 4, 0, 0})
};

/// Class /Script/MeshModelingTools.ProceduralCylinderToolProperties
/// Size: 0x0010 (0x0000B8 - 0x0000C8)
class UProceduralCylinderToolProperties : public UProceduralShapeToolProperties
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	DMember(float)                                     Radius                                                      OFFSET(get<float>, {0xB8, 4, 0, 0})
	DMember(float)                                     Height                                                      OFFSET(get<float>, {0xBC, 4, 0, 0})
	DMember(int32_t)                                   RadialSlices                                                OFFSET(get<int32_t>, {0xC0, 4, 0, 0})
	DMember(int32_t)                                   HeightSubdivisions                                          OFFSET(get<int32_t>, {0xC4, 4, 0, 0})
};

/// Class /Script/MeshModelingTools.ProceduralConeToolProperties
/// Size: 0x0010 (0x0000B8 - 0x0000C8)
class UProceduralConeToolProperties : public UProceduralShapeToolProperties
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	DMember(float)                                     Radius                                                      OFFSET(get<float>, {0xB8, 4, 0, 0})
	DMember(float)                                     Height                                                      OFFSET(get<float>, {0xBC, 4, 0, 0})
	DMember(int32_t)                                   RadialSlices                                                OFFSET(get<int32_t>, {0xC0, 4, 0, 0})
	DMember(int32_t)                                   HeightSubdivisions                                          OFFSET(get<int32_t>, {0xC4, 4, 0, 0})
};

/// Class /Script/MeshModelingTools.ProceduralArrowToolProperties
/// Size: 0x0018 (0x0000B8 - 0x0000D0)
class UProceduralArrowToolProperties : public UProceduralShapeToolProperties
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	DMember(float)                                     ShaftRadius                                                 OFFSET(get<float>, {0xB8, 4, 0, 0})
	DMember(float)                                     ShaftHeight                                                 OFFSET(get<float>, {0xBC, 4, 0, 0})
	DMember(float)                                     HeadRadius                                                  OFFSET(get<float>, {0xC0, 4, 0, 0})
	DMember(float)                                     HeadHeight                                                  OFFSET(get<float>, {0xC4, 4, 0, 0})
	DMember(int32_t)                                   RadialSlices                                                OFFSET(get<int32_t>, {0xC8, 4, 0, 0})
	DMember(int32_t)                                   HeightSubdivisions                                          OFFSET(get<int32_t>, {0xCC, 4, 0, 0})
};

/// Class /Script/MeshModelingTools.ProceduralSphereToolProperties
/// Size: 0x0018 (0x0000B8 - 0x0000D0)
class UProceduralSphereToolProperties : public UProceduralShapeToolProperties
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	DMember(float)                                     Radius                                                      OFFSET(get<float>, {0xB8, 4, 0, 0})
	CMember(EProceduralSphereType)                     SubdivisionType                                             OFFSET(get<T>, {0xBC, 4, 0, 0})
	DMember(int32_t)                                   Subdivisions                                                OFFSET(get<int32_t>, {0xC0, 4, 0, 0})
	DMember(int32_t)                                   HorizontalSlices                                            OFFSET(get<int32_t>, {0xC4, 4, 0, 0})
	DMember(int32_t)                                   VerticalSlices                                              OFFSET(get<int32_t>, {0xC8, 4, 0, 0})
};

/// Class /Script/MeshModelingTools.ProceduralStairsToolProperties
/// Size: 0x0020 (0x0000B8 - 0x0000D8)
class UProceduralStairsToolProperties : public UProceduralShapeToolProperties
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	CMember(EProceduralStairsType)                     StairsType                                                  OFFSET(get<T>, {0xB8, 4, 0, 0})
	DMember(int32_t)                                   NumSteps                                                    OFFSET(get<int32_t>, {0xBC, 4, 0, 0})
	DMember(float)                                     StepWidth                                                   OFFSET(get<float>, {0xC0, 4, 0, 0})
	DMember(float)                                     StepHeight                                                  OFFSET(get<float>, {0xC4, 4, 0, 0})
	DMember(float)                                     StepDepth                                                   OFFSET(get<float>, {0xC8, 4, 0, 0})
	DMember(float)                                     CurveAngle                                                  OFFSET(get<float>, {0xCC, 4, 0, 0})
	DMember(float)                                     SpiralAngle                                                 OFFSET(get<float>, {0xD0, 4, 0, 0})
	DMember(float)                                     InnerRadius                                                 OFFSET(get<float>, {0xD4, 4, 0, 0})
};

/// Class /Script/MeshModelingTools.AddPrimitiveTool
/// Size: 0x0098 (0x0000A8 - 0x000140)
class UAddPrimitiveTool : public USingleClickTool
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
	CMember(class UCreateMeshObjectTypeProperties*)    OutputTypeProperties                                        OFFSET(get<T>, {0xC0, 8, 0, 0})
	CMember(class UProceduralShapeToolProperties*)     ShapeSettings                                               OFFSET(get<T>, {0xC8, 8, 0, 0})
	CMember(class UNewMeshMaterialProperties*)         MaterialProperties                                          OFFSET(get<T>, {0xD0, 8, 0, 0})
	CMember(class UPreviewMesh*)                       PreviewMesh                                                 OFFSET(get<T>, {0xD8, 8, 0, 0})
	CMember(class UCombinedTransformGizmo*)            Gizmo                                                       OFFSET(get<T>, {0xE0, 8, 0, 0})
	CMember(class UDragAlignmentMechanic*)             DragAlignmentMechanic                                       OFFSET(get<T>, {0xE8, 8, 0, 0})
	SMember(FString)                                   AssetName                                                   OFFSET(getStruct<T>, {0xF0, 16, 0, 0})
};

/// Class /Script/MeshModelingTools.AddBoxPrimitiveTool
/// Size: 0x0000 (0x000140 - 0x000140)
class UAddBoxPrimitiveTool : public UAddPrimitiveTool
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
};

/// Class /Script/MeshModelingTools.AddCylinderPrimitiveTool
/// Size: 0x0000 (0x000140 - 0x000140)
class UAddCylinderPrimitiveTool : public UAddPrimitiveTool
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
};

/// Class /Script/MeshModelingTools.AddConePrimitiveTool
/// Size: 0x0000 (0x000140 - 0x000140)
class UAddConePrimitiveTool : public UAddPrimitiveTool
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
};

/// Class /Script/MeshModelingTools.AddRectanglePrimitiveTool
/// Size: 0x0000 (0x000140 - 0x000140)
class UAddRectanglePrimitiveTool : public UAddPrimitiveTool
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
};

/// Class /Script/MeshModelingTools.AddDiscPrimitiveTool
/// Size: 0x0000 (0x000140 - 0x000140)
class UAddDiscPrimitiveTool : public UAddPrimitiveTool
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
};

/// Class /Script/MeshModelingTools.AddTorusPrimitiveTool
/// Size: 0x0000 (0x000140 - 0x000140)
class UAddTorusPrimitiveTool : public UAddPrimitiveTool
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
};

/// Class /Script/MeshModelingTools.AddArrowPrimitiveTool
/// Size: 0x0000 (0x000140 - 0x000140)
class UAddArrowPrimitiveTool : public UAddPrimitiveTool
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
};

/// Class /Script/MeshModelingTools.AddSpherePrimitiveTool
/// Size: 0x0000 (0x000140 - 0x000140)
class UAddSpherePrimitiveTool : public UAddPrimitiveTool
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
};

/// Class /Script/MeshModelingTools.AddStairsPrimitiveTool
/// Size: 0x0000 (0x000140 - 0x000140)
class UAddStairsPrimitiveTool : public UAddPrimitiveTool
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
};

/// Class /Script/MeshModelingTools.CombineMeshesToolBuilder
/// Size: 0x0008 (0x000028 - 0x000030)
class UCombineMeshesToolBuilder : public UMultiSelectionMeshEditingToolBuilder
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/MeshModelingTools.CombineMeshesToolProperties
/// Size: 0x0028 (0x0000A8 - 0x0000D0)
class UCombineMeshesToolProperties : public UInteractiveToolPropertySet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	DMember(bool)                                      bIsDuplicateMode                                            OFFSET(get<bool>, {0xA8, 1, 0, 0})
	CMember(EBaseCreateFromSelectedTargetType)         OutputWriteTo                                               OFFSET(get<T>, {0xAC, 4, 0, 0})
	SMember(FString)                                   OutputNewName                                               OFFSET(getStruct<T>, {0xB0, 16, 0, 0})
	SMember(FString)                                   OutputExistingName                                          OFFSET(getStruct<T>, {0xC0, 16, 0, 0})
};

/// Class /Script/MeshModelingTools.CombineMeshesTool
/// Size: 0x0028 (0x0000C0 - 0x0000E8)
class UCombineMeshesTool : public UMultiSelectionMeshEditingTool
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
	CMember(class UCombineMeshesToolProperties*)       BasicProperties                                             OFFSET(get<T>, {0xC8, 8, 0, 0})
	CMember(class UCreateMeshObjectTypeProperties*)    OutputTypeProperties                                        OFFSET(get<T>, {0xD0, 8, 0, 0})
	CMember(class UOnAcceptHandleSourcesPropertiesBase*) HandleSourceProperties                                    OFFSET(get<T>, {0xD8, 8, 0, 0})
};

/// Class /Script/MeshModelingTools.DeleteGeometrySelectionCommand
/// Size: 0x0000 (0x000028 - 0x000028)
class UDeleteGeometrySelectionCommand : public UGeometrySelectionEditCommand
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/MeshModelingTools.DisconnectGeometrySelectionCommand
/// Size: 0x0000 (0x000028 - 0x000028)
class UDisconnectGeometrySelectionCommand : public UGeometrySelectionEditCommand
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/MeshModelingTools.ModifyGeometrySelectionCommand
/// Size: 0x0000 (0x000028 - 0x000028)
class UModifyGeometrySelectionCommand : public UGeometrySelectionEditCommand
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/MeshModelingTools.ModifyGeometrySelectionCommand_Invert
/// Size: 0x0000 (0x000028 - 0x000028)
class UModifyGeometrySelectionCommand_Invert : public UModifyGeometrySelectionCommand
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/MeshModelingTools.ModifyGeometrySelectionCommand_ExpandToConnected
/// Size: 0x0000 (0x000028 - 0x000028)
class UModifyGeometrySelectionCommand_ExpandToConnected : public UModifyGeometrySelectionCommand
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/MeshModelingTools.ModifyGeometrySelectionCommand_InvertConnected
/// Size: 0x0000 (0x000028 - 0x000028)
class UModifyGeometrySelectionCommand_InvertConnected : public UModifyGeometrySelectionCommand
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/MeshModelingTools.ModifyGeometrySelectionCommand_Expand
/// Size: 0x0000 (0x000028 - 0x000028)
class UModifyGeometrySelectionCommand_Expand : public UModifyGeometrySelectionCommand
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/MeshModelingTools.ModifyGeometrySelectionCommand_Contract
/// Size: 0x0000 (0x000028 - 0x000028)
class UModifyGeometrySelectionCommand_Contract : public UModifyGeometrySelectionCommand
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/MeshModelingTools.RetriangulateGeometrySelectionCommand
/// Size: 0x0000 (0x000028 - 0x000028)
class URetriangulateGeometrySelectionCommand : public UGeometrySelectionEditCommand
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/MeshModelingTools.CSGMeshesToolProperties
/// Size: 0x0028 (0x0000A8 - 0x0000D0)
class UCSGMeshesToolProperties : public UInteractiveToolPropertySet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	CMember(ECSGOperation)                             Operation                                                   OFFSET(get<T>, {0xA8, 1, 0, 0})
	DMember(bool)                                      bTryFixHoles                                                OFFSET(get<bool>, {0xA9, 1, 0, 0})
	DMember(bool)                                      bTryCollapseEdges                                           OFFSET(get<bool>, {0xAA, 1, 0, 0})
	DMember(float)                                     WindingThreshold                                            OFFSET(get<float>, {0xAC, 4, 0, 0})
	DMember(bool)                                      bShowNewBoundaries                                          OFFSET(get<bool>, {0xB0, 1, 0, 0})
	DMember(bool)                                      bShowSubtractedMesh                                         OFFSET(get<bool>, {0xB1, 1, 0, 0})
	DMember(float)                                     SubtractedMeshOpacity                                       OFFSET(get<float>, {0xB4, 4, 0, 0})
	SMember(FLinearColor)                              SubtractedMeshColor                                         OFFSET(getStruct<T>, {0xB8, 16, 0, 0})
	DMember(bool)                                      bUseFirstMeshMaterials                                      OFFSET(get<bool>, {0xC8, 1, 0, 0})
};

/// Class /Script/MeshModelingTools.TrimMeshesToolProperties
/// Size: 0x0020 (0x0000A8 - 0x0000C8)
class UTrimMeshesToolProperties : public UInteractiveToolPropertySet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	CMember(ETrimOperation)                            WhichMesh                                                   OFFSET(get<T>, {0xA8, 1, 0, 0})
	CMember(ETrimSide)                                 TrimSide                                                    OFFSET(get<T>, {0xA9, 1, 0, 0})
	DMember(float)                                     WindingThreshold                                            OFFSET(get<float>, {0xAC, 4, 0, 0})
	DMember(bool)                                      bShowTrimmingMesh                                           OFFSET(get<bool>, {0xB0, 1, 0, 0})
	DMember(float)                                     OpacityOfTrimmingMesh                                       OFFSET(get<float>, {0xB4, 4, 0, 0})
	SMember(FLinearColor)                              ColorOfTrimmingMesh                                         OFFSET(getStruct<T>, {0xB8, 16, 0, 0})
};

/// Class /Script/MeshModelingTools.CSGMeshesTool
/// Size: 0x0058 (0x000110 - 0x000168)
class UCSGMeshesTool : public UBaseCreateFromSelectedTool
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 360;

public:
	CMember(class UCSGMeshesToolProperties*)           CSGProperties                                               OFFSET(get<T>, {0x110, 8, 0, 0})
	CMember(class UTrimMeshesToolProperties*)          TrimProperties                                              OFFSET(get<T>, {0x118, 8, 0, 0})
	CMember(TArray<class UPreviewMesh*>)               OriginalMeshPreviews                                        OFFSET(get<T>, {0x130, 16, 0, 0})
	CMember(class UMaterialInstanceDynamic*)           PreviewsGhostMaterial                                       OFFSET(get<T>, {0x140, 8, 0, 0})
	CMember(class ULineSetComponent*)                  DrawnLineSet                                                OFFSET(get<T>, {0x148, 8, 0, 0})
};

/// Class /Script/MeshModelingTools.CSGMeshesToolBuilder
/// Size: 0x0008 (0x000028 - 0x000030)
class UCSGMeshesToolBuilder : public UBaseCreateFromSelectedToolBuilder
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/MeshModelingTools.CutMeshWithMeshToolProperties
/// Size: 0x0010 (0x0000A8 - 0x0000B8)
class UCutMeshWithMeshToolProperties : public UInteractiveToolPropertySet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	DMember(bool)                                      bTryFixHoles                                                OFFSET(get<bool>, {0xA8, 1, 0, 0})
	DMember(bool)                                      bTryCollapseEdges                                           OFFSET(get<bool>, {0xA9, 1, 0, 0})
	DMember(float)                                     WindingThreshold                                            OFFSET(get<float>, {0xAC, 4, 0, 0})
	DMember(bool)                                      bShowNewBoundaries                                          OFFSET(get<bool>, {0xB0, 1, 0, 0})
	DMember(bool)                                      bUseFirstMeshMaterials                                      OFFSET(get<bool>, {0xB1, 1, 0, 0})
};

/// Class /Script/MeshModelingTools.CutMeshWithMeshTool
/// Size: 0x0278 (0x000110 - 0x000388)
class UCutMeshWithMeshTool : public UBaseCreateFromSelectedTool
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 904;

public:
	CMember(class UCutMeshWithMeshToolProperties*)     CutProperties                                               OFFSET(get<T>, {0x110, 8, 0, 0})
	CMember(class UPreviewMesh*)                       IntersectPreviewMesh                                        OFFSET(get<T>, {0x118, 8, 0, 0})
	CMember(class ULineSetComponent*)                  DrawnLineSet                                                OFFSET(get<T>, {0x140, 8, 0, 0})
};

/// Class /Script/MeshModelingTools.CutMeshWithMeshToolBuilder
/// Size: 0x0000 (0x000028 - 0x000028)
class UCutMeshWithMeshToolBuilder : public UBaseCreateFromSelectedToolBuilder
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/MeshModelingTools.DrawAndRevolveToolBuilder
/// Size: 0x0000 (0x000028 - 0x000028)
class UDrawAndRevolveToolBuilder : public UInteractiveToolBuilder
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/MeshModelingTools.RevolveProperties
/// Size: 0x0070 (0x0000A8 - 0x000118)
class URevolveProperties : public UInteractiveToolPropertySet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 280;

public:
	DMember(double)                                    RevolveDegreesClamped                                       OFFSET(get<double>, {0xA8, 8, 0, 0})
	DMember(double)                                    RevolveDegrees                                              OFFSET(get<double>, {0xB0, 8, 0, 0})
	DMember(double)                                    RevolveDegreesOffset                                        OFFSET(get<double>, {0xB8, 8, 0, 0})
	DMember(double)                                    StepsMaxDegrees                                             OFFSET(get<double>, {0xC0, 8, 0, 0})
	DMember(bool)                                      bExplicitSteps                                              OFFSET(get<bool>, {0xC8, 1, 0, 0})
	DMember(int32_t)                                   NumExplicitSteps                                            OFFSET(get<int32_t>, {0xCC, 4, 0, 0})
	DMember(double)                                    HeightOffsetPerDegree                                       OFFSET(get<double>, {0xD0, 8, 0, 0})
	DMember(bool)                                      bReverseRevolutionDirection                                 OFFSET(get<bool>, {0xD8, 1, 0, 0})
	DMember(bool)                                      bFlipMesh                                                   OFFSET(get<bool>, {0xD9, 1, 0, 0})
	DMember(bool)                                      bSharpNormals                                               OFFSET(get<bool>, {0xDA, 1, 0, 0})
	DMember(double)                                    SharpNormalsDegreeThreshold                                 OFFSET(get<double>, {0xE0, 8, 0, 0})
	DMember(bool)                                      bPathAtMidpointOfStep                                       OFFSET(get<bool>, {0xE8, 1, 0, 0})
	CMember(ERevolvePropertiesPolygroupMode)           PolygroupMode                                               OFFSET(get<T>, {0xE9, 1, 0, 0})
	CMember(ERevolvePropertiesQuadSplit)               QuadSplitMode                                               OFFSET(get<T>, {0xEA, 1, 0, 0})
};

/// Class /Script/MeshModelingTools.RevolveToolProperties
/// Size: 0x0040 (0x000118 - 0x000158)
class URevolveToolProperties : public URevolveProperties
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 344;

public:
	CMember(ERevolvePropertiesCapFillMode)             CapFillMode                                                 OFFSET(get<T>, {0x118, 1, 0, 0})
	DMember(bool)                                      bClosePathToAxis                                            OFFSET(get<bool>, {0x119, 1, 0, 0})
	SMember(FVector)                                   DrawPlaneOrigin                                             OFFSET(getStruct<T>, {0x120, 24, 0, 0})
	SMember(FRotator)                                  DrawPlaneOrientation                                        OFFSET(getStruct<T>, {0x138, 24, 0, 0})
	DMember(bool)                                      bEnableSnapping                                             OFFSET(get<bool>, {0x150, 1, 0, 0})
	DMember(bool)                                      bAllowedToEditDrawPlane                                     OFFSET(get<bool>, {0x151, 1, 0, 0})
};

/// Class /Script/MeshModelingTools.RevolveOperatorFactory
/// Size: 0x0010 (0x000028 - 0x000038)
class URevolveOperatorFactory : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(class UDrawAndRevolveTool*)                RevolveTool                                                 OFFSET(get<T>, {0x30, 8, 0, 0})
};

/// Class /Script/MeshModelingTools.DrawAndRevolveTool
/// Size: 0x00D0 (0x0000A0 - 0x000170)
class UDrawAndRevolveTool : public UInteractiveTool
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 368;

public:
	CMember(class UCurveControlPointsMechanic*)        ControlPointsMechanic                                       OFFSET(get<T>, {0x138, 8, 0, 0})
	CMember(class UConstructionPlaneMechanic*)         PlaneMechanic                                               OFFSET(get<T>, {0x140, 8, 0, 0})
	CMember(class UCreateMeshObjectTypeProperties*)    OutputTypeProperties                                        OFFSET(get<T>, {0x148, 8, 0, 0})
	CMember(class URevolveToolProperties*)             Settings                                                    OFFSET(get<T>, {0x150, 8, 0, 0})
	CMember(class UNewMeshMaterialProperties*)         MaterialProperties                                          OFFSET(get<T>, {0x158, 8, 0, 0})
	CMember(class UMeshOpPreviewWithBackgroundCompute*) Preview                                                    OFFSET(get<T>, {0x160, 8, 0, 0})
};

/// Class /Script/MeshModelingTools.DrawPolygonToolBuilder
/// Size: 0x0000 (0x000028 - 0x000028)
class UDrawPolygonToolBuilder : public UInteractiveToolBuilder
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/MeshModelingTools.DrawPolygonToolStandardProperties
/// Size: 0x0018 (0x0000A8 - 0x0000C0)
class UDrawPolygonToolStandardProperties : public UInteractiveToolPropertySet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	CMember(EDrawPolygonDrawMode)                      PolygonDrawMode                                             OFFSET(get<T>, {0xA8, 1, 0, 0})
	DMember(bool)                                      bAllowSelfIntersections                                     OFFSET(get<bool>, {0xA9, 1, 0, 0})
	DMember(float)                                     FeatureSizeRatio                                            OFFSET(get<float>, {0xAC, 4, 0, 0})
	DMember(int32_t)                                   RadialSlices                                                OFFSET(get<int32_t>, {0xB0, 4, 0, 0})
	DMember(float)                                     Distance                                                    OFFSET(get<float>, {0xB4, 4, 0, 0})
	DMember(bool)                                      bShowGridGizmo                                              OFFSET(get<bool>, {0xB8, 1, 0, 0})
	CMember(EDrawPolygonExtrudeMode)                   ExtrudeMode                                                 OFFSET(get<T>, {0xB9, 1, 0, 0})
	DMember(float)                                     ExtrudeHeight                                               OFFSET(get<float>, {0xBC, 4, 0, 0})
};

/// Class /Script/MeshModelingTools.DrawPolygonToolSnapProperties
/// Size: 0x0010 (0x0000A8 - 0x0000B8)
class UDrawPolygonToolSnapProperties : public UInteractiveToolPropertySet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	DMember(bool)                                      bEnableSnapping                                             OFFSET(get<bool>, {0xA8, 1, 0, 0})
	DMember(bool)                                      bSnapToWorldGrid                                            OFFSET(get<bool>, {0xA9, 1, 0, 0})
	DMember(bool)                                      bSnapToVertices                                             OFFSET(get<bool>, {0xAA, 1, 0, 0})
	DMember(bool)                                      bSnapToEdges                                                OFFSET(get<bool>, {0xAB, 1, 0, 0})
	DMember(bool)                                      bSnapToAxes                                                 OFFSET(get<bool>, {0xAC, 1, 0, 0})
	DMember(bool)                                      bSnapToLengths                                              OFFSET(get<bool>, {0xAD, 1, 0, 0})
	DMember(bool)                                      bSnapToSurfaces                                             OFFSET(get<bool>, {0xAE, 1, 0, 0})
	DMember(float)                                     SnapToSurfacesOffset                                        OFFSET(get<float>, {0xB0, 4, 0, 0})
};

/// Class /Script/MeshModelingTools.DrawPolygonTool
/// Size: 0x04C0 (0x0000A0 - 0x000560)
class UDrawPolygonTool : public UInteractiveTool
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1376;

public:
	CMember(class UCreateMeshObjectTypeProperties*)    OutputTypeProperties                                        OFFSET(get<T>, {0xA8, 8, 0, 0})
	CMember(class UDrawPolygonToolStandardProperties*) PolygonProperties                                           OFFSET(get<T>, {0xB0, 8, 0, 0})
	CMember(class UDrawPolygonToolSnapProperties*)     SnapProperties                                              OFFSET(get<T>, {0xB8, 8, 0, 0})
	CMember(class UNewMeshMaterialProperties*)         MaterialProperties                                          OFFSET(get<T>, {0xC0, 8, 0, 0})
	CMember(class UPreviewMesh*)                       PreviewMesh                                                 OFFSET(get<T>, {0x160, 8, 0, 0})
	CMember(class UPlaneDistanceFromHitMechanic*)      HeightMechanic                                              OFFSET(get<T>, {0x538, 8, 0, 0})
	CMember(class UDragAlignmentMechanic*)             DragAlignmentMechanic                                       OFFSET(get<T>, {0x540, 8, 0, 0})
	CMember(class UConstructionPlaneMechanic*)         PlaneMechanic                                               OFFSET(get<T>, {0x548, 8, 0, 0})
};

/// Class /Script/MeshModelingTools.EditMeshPolygonsToolBuilder
/// Size: 0x0008 (0x000028 - 0x000030)
class UEditMeshPolygonsToolBuilder : public USingleTargetWithSelectionToolBuilder
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/MeshModelingTools.PolyEditCommonProperties
/// Size: 0x0010 (0x0000A8 - 0x0000B8)
class UPolyEditCommonProperties : public UInteractiveToolPropertySet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	DMember(bool)                                      bShowWireframe                                              OFFSET(get<bool>, {0xA8, 1, 0, 0})
	DMember(bool)                                      bShowSelectableCorners                                      OFFSET(get<bool>, {0xA9, 1, 0, 0})
	DMember(bool)                                      bGizmoVisible                                               OFFSET(get<bool>, {0xAA, 1, 0, 0})
	CMember(ELocalFrameMode)                           LocalFrameMode                                              OFFSET(get<T>, {0xAC, 4, 0, 0})
	DMember(bool)                                      bLockRotation                                               OFFSET(get<bool>, {0xB0, 1, 0, 0})
	DMember(bool)                                      bLocalCoordSystem                                           OFFSET(get<bool>, {0xB1, 1, 0, 0})
};

/// Class /Script/MeshModelingTools.EditMeshPolygonsActionModeToolBuilder
/// Size: 0x0008 (0x000030 - 0x000038)
class UEditMeshPolygonsActionModeToolBuilder : public UEditMeshPolygonsToolBuilder
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Script/MeshModelingTools.EditMeshPolygonsSelectionModeToolBuilder
/// Size: 0x0008 (0x000030 - 0x000038)
class UEditMeshPolygonsSelectionModeToolBuilder : public UEditMeshPolygonsToolBuilder
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Script/MeshModelingTools.EditMeshPolygonsToolActionPropertySet
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UEditMeshPolygonsToolActionPropertySet : public UInteractiveToolPropertySet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
};

/// Class /Script/MeshModelingTools.PolyEditTopologyProperties
/// Size: 0x0010 (0x0000B0 - 0x0000C0)
class UPolyEditTopologyProperties : public UEditMeshPolygonsToolActionPropertySet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	DMember(bool)                                      bAddExtraCorners                                            OFFSET(get<bool>, {0xB0, 1, 0, 0})
	DMember(double)                                    ExtraCornerAngleThresholdDegrees                            OFFSET(get<double>, {0xB8, 8, 0, 0})


	/// Functions
	// Function /Script/MeshModelingTools.PolyEditTopologyProperties.RegenerateExtraCorners
	// void RegenerateExtraCorners();                                                                                           // [0xbca22bc] Final|Native|Public  
};

/// Class /Script/MeshModelingTools.EditMeshPolygonsToolActions
/// Size: 0x0000 (0x0000B0 - 0x0000B0)
class UEditMeshPolygonsToolActions : public UEditMeshPolygonsToolActionPropertySet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:


	/// Functions
	// Function /Script/MeshModelingTools.EditMeshPolygonsToolActions.SimplifyByGroups
	// void SimplifyByGroups();                                                                                                 // [0xbca2304] Final|Native|Public  
	// Function /Script/MeshModelingTools.EditMeshPolygonsToolActions.Retriangulate
	// void Retriangulate();                                                                                                    // [0xbca22d4] Final|Native|Public  
	// Function /Script/MeshModelingTools.EditMeshPolygonsToolActions.RecalcNormals
	// void RecalcNormals();                                                                                                    // [0xbca22a4] Final|Native|Public  
	// Function /Script/MeshModelingTools.EditMeshPolygonsToolActions.PushPull
	// void PushPull();                                                                                                         // [0xbca228c] Final|Native|Public  
	// Function /Script/MeshModelingTools.EditMeshPolygonsToolActions.Outset
	// void Outset();                                                                                                           // [0xbca2244] Final|Native|Public  
	// Function /Script/MeshModelingTools.EditMeshPolygonsToolActions.Offset
	// void Offset();                                                                                                           // [0xbca222c] Final|Native|Public  
	// Function /Script/MeshModelingTools.EditMeshPolygonsToolActions.Merge
	// void Merge();                                                                                                            // [0xbca2214] Final|Native|Public  
	// Function /Script/MeshModelingTools.EditMeshPolygonsToolActions.Inset
	// void Inset();                                                                                                            // [0xbca21fc] Final|Native|Public  
	// Function /Script/MeshModelingTools.EditMeshPolygonsToolActions.InsertEdgeLoop
	// void InsertEdgeLoop();                                                                                                   // [0xbca21e4] Final|Native|Public  
	// Function /Script/MeshModelingTools.EditMeshPolygonsToolActions.InsertEdge
	// void InsertEdge();                                                                                                       // [0xbca21cc] Final|Native|Public  
	// Function /Script/MeshModelingTools.EditMeshPolygonsToolActions.Flip
	// void Flip();                                                                                                             // [0xbca2164] Final|Native|Public  
	// Function /Script/MeshModelingTools.EditMeshPolygonsToolActions.Extrude
	// void Extrude();                                                                                                          // [0xbca211c] Final|Native|Public  
	// Function /Script/MeshModelingTools.EditMeshPolygonsToolActions.Duplicate
	// void Duplicate();                                                                                                        // [0xbca2104] Final|Native|Public  
	// Function /Script/MeshModelingTools.EditMeshPolygonsToolActions.Disconnect
	// void Disconnect();                                                                                                       // [0xbca20ec] Final|Native|Public  
	// Function /Script/MeshModelingTools.EditMeshPolygonsToolActions.Delete
	// void Delete();                                                                                                           // [0xbca20d4] Final|Native|Public  
	// Function /Script/MeshModelingTools.EditMeshPolygonsToolActions.Decompose
	// void Decompose();                                                                                                        // [0xbca20bc] Final|Native|Public  
	// Function /Script/MeshModelingTools.EditMeshPolygonsToolActions.CutFaces
	// void CutFaces();                                                                                                         // [0xbca20a4] Final|Native|Public  
	// Function /Script/MeshModelingTools.EditMeshPolygonsToolActions.Bevel
	// void Bevel();                                                                                                            // [0xbca2044] Final|Native|Public  
};

/// Class /Script/MeshModelingTools.EditMeshPolygonsToolActions_Triangles
/// Size: 0x0000 (0x0000B0 - 0x0000B0)
class UEditMeshPolygonsToolActions_Triangles : public UEditMeshPolygonsToolActionPropertySet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:


	/// Functions
	// Function /Script/MeshModelingTools.EditMeshPolygonsToolActions_Triangles.RecalcNormals
	// void RecalcNormals();                                                                                                    // [0xbca22a4] Final|Native|Public  
	// Function /Script/MeshModelingTools.EditMeshPolygonsToolActions_Triangles.PushPull
	// void PushPull();                                                                                                         // [0xbca228c] Final|Native|Public  
	// Function /Script/MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Poke
	// void Poke();                                                                                                             // [0xbca2274] Final|Native|Public  
	// Function /Script/MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Outset
	// void Outset();                                                                                                           // [0xbca2244] Final|Native|Public  
	// Function /Script/MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Offset
	// void Offset();                                                                                                           // [0xbca222c] Final|Native|Public  
	// Function /Script/MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Inset
	// void Inset();                                                                                                            // [0xbca21fc] Final|Native|Public  
	// Function /Script/MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Flip
	// void Flip();                                                                                                             // [0xbca2164] Final|Native|Public  
	// Function /Script/MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Extrude
	// void Extrude();                                                                                                          // [0xbca211c] Final|Native|Public  
	// Function /Script/MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Duplicate
	// void Duplicate();                                                                                                        // [0xbca2104] Final|Native|Public  
	// Function /Script/MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Disconnect
	// void Disconnect();                                                                                                       // [0xbca20ec] Final|Native|Public  
	// Function /Script/MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Delete
	// void Delete();                                                                                                           // [0xbca20d4] Final|Native|Public  
	// Function /Script/MeshModelingTools.EditMeshPolygonsToolActions_Triangles.CutFaces
	// void CutFaces();                                                                                                         // [0xbca20a4] Final|Native|Public  
};

/// Class /Script/MeshModelingTools.EditMeshPolygonsToolUVActions
/// Size: 0x0000 (0x0000B0 - 0x0000B0)
class UEditMeshPolygonsToolUVActions : public UEditMeshPolygonsToolActionPropertySet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:


	/// Functions
	// Function /Script/MeshModelingTools.EditMeshPolygonsToolUVActions.PlanarProjection
	// void PlanarProjection();                                                                                                 // [0xbca225c] Final|Native|Public  
};

/// Class /Script/MeshModelingTools.EditMeshPolygonsToolEdgeActions
/// Size: 0x0000 (0x0000B0 - 0x0000B0)
class UEditMeshPolygonsToolEdgeActions : public UEditMeshPolygonsToolActionPropertySet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:


	/// Functions
	// Function /Script/MeshModelingTools.EditMeshPolygonsToolEdgeActions.Weld
	// void Weld();                                                                                                             // [0xbca234c] Final|Native|Public  
	// Function /Script/MeshModelingTools.EditMeshPolygonsToolEdgeActions.Straighten
	// void Straighten();                                                                                                       // [0xbca2334] Final|Native|Public  
	// Function /Script/MeshModelingTools.EditMeshPolygonsToolEdgeActions.Simplify
	// void Simplify();                                                                                                         // [0xbca22ec] Final|Native|Public  
	// Function /Script/MeshModelingTools.EditMeshPolygonsToolEdgeActions.FillHole
	// void FillHole();                                                                                                         // [0xbca214c] Final|Native|Public  
	// Function /Script/MeshModelingTools.EditMeshPolygonsToolEdgeActions.Extrude
	// void Extrude();                                                                                                          // [0xbca2134] Final|Native|Public  
	// Function /Script/MeshModelingTools.EditMeshPolygonsToolEdgeActions.DeleteEdge
	// void DeleteEdge();                                                                                                       // [0xbca20d4] Final|Native|Public  
	// Function /Script/MeshModelingTools.EditMeshPolygonsToolEdgeActions.Bridge
	// void Bridge();                                                                                                           // [0xbca2074] Final|Native|Public  
	// Function /Script/MeshModelingTools.EditMeshPolygonsToolEdgeActions.Bevel
	// void Bevel();                                                                                                            // [0xbca205c] Final|Native|Public  
};

/// Class /Script/MeshModelingTools.EditMeshPolygonsToolEdgeActions_Triangles
/// Size: 0x0000 (0x0000B0 - 0x0000B0)
class UEditMeshPolygonsToolEdgeActions_Triangles : public UEditMeshPolygonsToolActionPropertySet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:


	/// Functions
	// Function /Script/MeshModelingTools.EditMeshPolygonsToolEdgeActions_Triangles.Weld
	// void Weld();                                                                                                             // [0xbca234c] Final|Native|Public  
	// Function /Script/MeshModelingTools.EditMeshPolygonsToolEdgeActions_Triangles.Split
	// void Split();                                                                                                            // [0xbca231c] Final|Native|Public  
	// Function /Script/MeshModelingTools.EditMeshPolygonsToolEdgeActions_Triangles.Flip
	// void Flip();                                                                                                             // [0xbca217c] Final|Native|Public  
	// Function /Script/MeshModelingTools.EditMeshPolygonsToolEdgeActions_Triangles.FillHole
	// void FillHole();                                                                                                         // [0xbca214c] Final|Native|Public  
	// Function /Script/MeshModelingTools.EditMeshPolygonsToolEdgeActions_Triangles.Extrude
	// void Extrude();                                                                                                          // [0xbca2134] Final|Native|Public  
	// Function /Script/MeshModelingTools.EditMeshPolygonsToolEdgeActions_Triangles.Collapse
	// void Collapse();                                                                                                         // [0xbca208c] Final|Native|Public  
	// Function /Script/MeshModelingTools.EditMeshPolygonsToolEdgeActions_Triangles.Bridge
	// void Bridge();                                                                                                           // [0xbca2074] Final|Native|Public  
};

/// Class /Script/MeshModelingTools.EditMeshPolygonsTool
/// Size: 0x07E8 (0x000128 - 0x000910)
class UEditMeshPolygonsTool : public USingleTargetWithSelectionTool
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2320;

public:
	CMember(class UMeshOpPreviewWithBackgroundCompute*) Preview                                                    OFFSET(get<T>, {0x148, 8, 0, 0})
	CMember(class UPolyEditCommonProperties*)          CommonProps                                                 OFFSET(get<T>, {0x150, 8, 0, 0})
	CMember(class UEditMeshPolygonsToolActions*)       EditActions                                                 OFFSET(get<T>, {0x158, 8, 0, 0})
	CMember(class UEditMeshPolygonsToolActions_Triangles*) EditActions_Triangles                                   OFFSET(get<T>, {0x160, 8, 0, 0})
	CMember(class UEditMeshPolygonsToolEdgeActions*)   EditEdgeActions                                             OFFSET(get<T>, {0x168, 8, 0, 0})
	CMember(class UEditMeshPolygonsToolEdgeActions_Triangles*) EditEdgeActions_Triangles                           OFFSET(get<T>, {0x170, 8, 0, 0})
	CMember(class UEditMeshPolygonsToolUVActions*)     EditUVActions                                               OFFSET(get<T>, {0x178, 8, 0, 0})
	CMember(class UPolyEditTopologyProperties*)        TopologyProperties                                          OFFSET(get<T>, {0x180, 8, 0, 0})
	CMember(class UPolyEditExtrudeActivity*)           ExtrudeActivity                                             OFFSET(get<T>, {0x188, 8, 0, 0})
	CMember(class UPolyEditInsetOutsetActivity*)       InsetOutsetActivity                                         OFFSET(get<T>, {0x190, 8, 0, 0})
	CMember(class UPolyEditCutFacesActivity*)          CutFacesActivity                                            OFFSET(get<T>, {0x198, 8, 0, 0})
	CMember(class UPolyEditPlanarProjectionUVActivity*) PlanarProjectionUVActivity                                 OFFSET(get<T>, {0x1A0, 8, 0, 0})
	CMember(class UPolyEditInsertEdgeActivity*)        InsertEdgeActivity                                          OFFSET(get<T>, {0x1A8, 8, 0, 0})
	CMember(class UPolyEditInsertEdgeLoopActivity*)    InsertEdgeLoopActivity                                      OFFSET(get<T>, {0x1B0, 8, 0, 0})
	CMember(class UPolyEditBevelEdgeActivity*)         BevelEdgeActivity                                           OFFSET(get<T>, {0x1B8, 8, 0, 0})
	CMember(class UPolyEditExtrudeEdgeActivity*)       ExtrudeEdgeActivity                                         OFFSET(get<T>, {0x1C0, 8, 0, 0})
	CMember(class UPolyEditActivityContext*)           ActivityContext                                             OFFSET(get<T>, {0x2A0, 8, 0, 0})
	CMember(class UPolygonSelectionMechanic*)          SelectionMechanic                                           OFFSET(get<T>, {0x2A8, 8, 0, 0})
	CMember(class UDragAlignmentMechanic*)             DragAlignmentMechanic                                       OFFSET(get<T>, {0x2B0, 8, 0, 0})
	CMember(class UCombinedTransformGizmo*)            TransformGizmo                                              OFFSET(get<T>, {0x2B8, 8, 0, 0})
	CMember(class UTransformProxy*)                    TransformProxy                                              OFFSET(get<T>, {0x2C0, 8, 0, 0})
};

/// Class /Script/MeshModelingTools.NewMeshMaterialProperties
/// Size: 0x0010 (0x0000A8 - 0x0000B8)
class UNewMeshMaterialProperties : public UInteractiveToolPropertySet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	CMember(TWeakObjectPtr<UMaterialInterface*>)       Material                                                    OFFSET(get<T>, {0xA8, 8, 0, 0})
	DMember(float)                                     UVScale                                                     OFFSET(get<float>, {0xB0, 4, 0, 0})
	DMember(bool)                                      bWorldSpaceUVScale                                          OFFSET(get<bool>, {0xB4, 1, 0, 0})
	DMember(bool)                                      bShowWireframe                                              OFFSET(get<bool>, {0xB5, 1, 0, 0})
	DMember(bool)                                      bShowExtendedOptions                                        OFFSET(get<bool>, {0xB6, 1, 0, 0})
};

/// Class /Script/MeshModelingTools.ExistingMeshMaterialProperties
/// Size: 0x0038 (0x0000A8 - 0x0000E0)
class UExistingMeshMaterialProperties : public UInteractiveToolPropertySet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	CMember(ESetMeshMaterialMode)                      MaterialMode                                                OFFSET(get<T>, {0xA8, 1, 0, 0})
	DMember(float)                                     CheckerDensity                                              OFFSET(get<float>, {0xAC, 4, 0, 0})
	CMember(class UMaterialInterface*)                 OverrideMaterial                                            OFFSET(get<T>, {0xB0, 8, 0, 0})
	SMember(FString)                                   UVChannel                                                   OFFSET(getStruct<T>, {0xB8, 16, 0, 0})
	CMember(TArray<FString>)                           UVChannelNamesList                                          OFFSET(get<T>, {0xC8, 16, 0, 0})
	CMember(class UMaterialInstanceDynamic*)           CheckerMaterial                                             OFFSET(get<T>, {0xD8, 8, 0, 0})


	/// Functions
	// Function /Script/MeshModelingTools.ExistingMeshMaterialProperties.GetUVChannelNamesFunc
	// TArray<FString> GetUVChannelNamesFunc();                                                                                 // [0xbca2194] Final|Native|Public|Const 
};

/// Class /Script/MeshModelingTools.MeshEditingViewProperties
/// Size: 0x0050 (0x0000A8 - 0x0000F8)
class UMeshEditingViewProperties : public UInteractiveToolPropertySet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
	DMember(bool)                                      bShowWireframe                                              OFFSET(get<bool>, {0xA8, 1, 0, 0})
	CMember(EMeshEditingMaterialModes)                 MaterialMode                                                OFFSET(get<T>, {0xAC, 4, 0, 0})
	DMember(bool)                                      bFlatShading                                                OFFSET(get<bool>, {0xB0, 1, 0, 0})
	SMember(FLinearColor)                              Color                                                       OFFSET(getStruct<T>, {0xB4, 16, 0, 0})
	CMember(class UTexture2D*)                         Image                                                       OFFSET(get<T>, {0xC8, 8, 0, 0})
	DMember(double)                                    Opacity                                                     OFFSET(get<double>, {0xD0, 8, 0, 0})
	SMember(FLinearColor)                              TransparentMaterialColor                                    OFFSET(getStruct<T>, {0xD8, 16, 0, 0})
	DMember(bool)                                      bTwoSided                                                   OFFSET(get<bool>, {0xE8, 1, 0, 0})
	CMember(TWeakObjectPtr<UMaterialInterface*>)       CustomMaterial                                              OFFSET(get<T>, {0xEC, 8, 0, 0})
};

/// Class /Script/MeshModelingTools.MeshUVChannelProperties
/// Size: 0x0020 (0x0000A8 - 0x0000C8)
class UMeshUVChannelProperties : public UInteractiveToolPropertySet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	SMember(FString)                                   UVChannel                                                   OFFSET(getStruct<T>, {0xA8, 16, 0, 0})
	CMember(TArray<FString>)                           UVChannelNamesList                                          OFFSET(get<T>, {0xB8, 16, 0, 0})


	/// Functions
	// Function /Script/MeshModelingTools.MeshUVChannelProperties.GetUVChannelNamesFunc
	// TArray<FString> GetUVChannelNamesFunc();                                                                                 // [0xbca21b0] Final|Native|Public|Const 
};

/// Class /Script/MeshModelingTools.RecomputeUVsToolBuilder
/// Size: 0x0000 (0x000028 - 0x000028)
class URecomputeUVsToolBuilder : public USingleSelectionMeshEditingToolBuilder
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/MeshModelingTools.RecomputeUVsTool
/// Size: 0x0068 (0x0000B8 - 0x000120)
class URecomputeUVsTool : public USingleSelectionMeshEditingTool
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	CMember(class UMeshUVChannelProperties*)           UVChannelProperties                                         OFFSET(get<T>, {0xC0, 8, 0, 0})
	CMember(class URecomputeUVsToolProperties*)        Settings                                                    OFFSET(get<T>, {0xC8, 8, 0, 0})
	CMember(class UPolygroupLayersProperties*)         PolygroupLayerProperties                                    OFFSET(get<T>, {0xD0, 8, 0, 0})
	CMember(class UExistingMeshMaterialProperties*)    MaterialSettings                                            OFFSET(get<T>, {0xD8, 8, 0, 0})
	DMember(bool)                                      bCreateUVLayoutViewOnSetup                                  OFFSET(get<bool>, {0xE0, 1, 0, 0})
	CMember(class UUVLayoutPreview*)                   UVLayoutView                                                OFFSET(get<T>, {0xE8, 8, 0, 0})
	CMember(class URecomputeUVsOpFactory*)             RecomputeUVsOpFactory                                       OFFSET(get<T>, {0xF0, 8, 0, 0})
	CMember(class UMeshOpPreviewWithBackgroundCompute*) Preview                                                    OFFSET(get<T>, {0xF8, 8, 0, 0})
};

/// Class /Script/MeshModelingTools.PolyEditBevelEdgeProperties
/// Size: 0x0018 (0x0000A8 - 0x0000C0)
class UPolyEditBevelEdgeProperties : public UInteractiveToolPropertySet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	DMember(double)                                    BevelDistance                                               OFFSET(get<double>, {0xA8, 8, 0, 0})
	DMember(int32_t)                                   Subdivisions                                                OFFSET(get<int32_t>, {0xB0, 4, 0, 0})
	DMember(float)                                     RoundWeight                                                 OFFSET(get<float>, {0xB4, 4, 0, 0})
	DMember(bool)                                      bInferMaterialID                                            OFFSET(get<bool>, {0xB8, 1, 0, 0})
	DMember(int32_t)                                   SetMaterialID                                               OFFSET(get<int32_t>, {0xBC, 4, 0, 0})
};

/// Class /Script/MeshModelingTools.PolyEditBevelEdgeActivity
/// Size: 0x0110 (0x000030 - 0x000140)
class UPolyEditBevelEdgeActivity : public UInteractiveToolActivity
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
	CMember(class UPolyEditBevelEdgeProperties*)       BevelProperties                                             OFFSET(get<T>, {0x38, 8, 0, 0})
	CMember(class UPolyEditActivityContext*)           ActivityContext                                             OFFSET(get<T>, {0x40, 8, 0, 0})
};

/// Class /Script/MeshModelingTools.PolyEditCutProperties
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UPolyEditCutProperties : public UInteractiveToolPropertySet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	CMember(EPolyEditCutPlaneOrientation)              orientation                                                 OFFSET(get<T>, {0xA8, 4, 0, 0})
	DMember(bool)                                      bSnapToVertices                                             OFFSET(get<bool>, {0xAC, 1, 0, 0})
};

/// Class /Script/MeshModelingTools.PolyEditCutFacesActivity
/// Size: 0x0090 (0x000030 - 0x0000C0)
class UPolyEditCutFacesActivity : public UInteractiveToolActivity
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	CMember(class UPolyEditCutProperties*)             CutProperties                                               OFFSET(get<T>, {0x40, 8, 0, 0})
	CMember(class UPolyEditPreviewMesh*)               EditPreview                                                 OFFSET(get<T>, {0x48, 8, 0, 0})
	CMember(class UCollectSurfacePathMechanic*)        SurfacePathMechanic                                         OFFSET(get<T>, {0x50, 8, 0, 0})
	CMember(class UPolyEditActivityContext*)           ActivityContext                                             OFFSET(get<T>, {0x58, 8, 0, 0})
};

/// Class /Script/MeshModelingTools.PolyEditExtrudeProperties
/// Size: 0x0030 (0x0000A8 - 0x0000D8)
class UPolyEditExtrudeProperties : public UInteractiveToolPropertySet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	CMember(EPolyEditExtrudeDistanceMode)              DistanceMode                                                OFFSET(get<T>, {0xA8, 4, 0, 0})
	DMember(double)                                    Distance                                                    OFFSET(get<double>, {0xB0, 8, 0, 0})
	CMember(EPolyEditExtrudeModeOptions)               DirectionMode                                               OFFSET(get<T>, {0xB8, 4, 0, 0})
	CMember(EPolyEditExtrudeDirection)                 Direction                                                   OFFSET(get<T>, {0xBC, 4, 0, 0})
	DMember(double)                                    MaxDistanceScaleFactor                                      OFFSET(get<double>, {0xC0, 8, 0, 0})
	DMember(bool)                                      bShellsToSolids                                             OFFSET(get<bool>, {0xC8, 1, 0, 0})
	CMember(EPolyEditExtrudeDirection)                 MeasureDirection                                            OFFSET(get<T>, {0xCC, 4, 0, 0})
	DMember(bool)                                      bUseColinearityForSettingBorderGroups                       OFFSET(get<bool>, {0xD0, 1, 0, 0})
};

/// Class /Script/MeshModelingTools.PolyEditOffsetProperties
/// Size: 0x0030 (0x0000A8 - 0x0000D8)
class UPolyEditOffsetProperties : public UInteractiveToolPropertySet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	CMember(EPolyEditExtrudeDistanceMode)              DistanceMode                                                OFFSET(get<T>, {0xA8, 4, 0, 0})
	DMember(double)                                    Distance                                                    OFFSET(get<double>, {0xB0, 8, 0, 0})
	CMember(EPolyEditOffsetModeOptions)                DirectionMode                                               OFFSET(get<T>, {0xB8, 4, 0, 0})
	DMember(double)                                    MaxDistanceScaleFactor                                      OFFSET(get<double>, {0xC0, 8, 0, 0})
	DMember(bool)                                      bShellsToSolids                                             OFFSET(get<bool>, {0xC8, 1, 0, 0})
	CMember(EPolyEditExtrudeDirection)                 MeasureDirection                                            OFFSET(get<T>, {0xCC, 4, 0, 0})
	DMember(bool)                                      bUseColinearityForSettingBorderGroups                       OFFSET(get<bool>, {0xD0, 1, 0, 0})
};

/// Class /Script/MeshModelingTools.PolyEditPushPullProperties
/// Size: 0x0030 (0x0000A8 - 0x0000D8)
class UPolyEditPushPullProperties : public UInteractiveToolPropertySet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	CMember(EPolyEditExtrudeDistanceMode)              DistanceMode                                                OFFSET(get<T>, {0xA8, 4, 0, 0})
	DMember(double)                                    Distance                                                    OFFSET(get<double>, {0xB0, 8, 0, 0})
	CMember(EPolyEditPushPullModeOptions)              DirectionMode                                               OFFSET(get<T>, {0xB8, 4, 0, 0})
	CMember(EPolyEditExtrudeDirection)                 SingleDirection                                             OFFSET(get<T>, {0xBC, 4, 0, 0})
	DMember(double)                                    MaxDistanceScaleFactor                                      OFFSET(get<double>, {0xC0, 8, 0, 0})
	DMember(bool)                                      bShellsToSolids                                             OFFSET(get<bool>, {0xC8, 1, 0, 0})
	CMember(EPolyEditExtrudeDirection)                 MeasureDirection                                            OFFSET(get<T>, {0xCC, 4, 0, 0})
	DMember(bool)                                      bUseColinearityForSettingBorderGroups                       OFFSET(get<bool>, {0xD0, 1, 0, 0})
};

/// Class /Script/MeshModelingTools.PolyEditExtrudeActivity
/// Size: 0x01A0 (0x000030 - 0x0001D0)
class UPolyEditExtrudeActivity : public UInteractiveToolActivity
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 464;

public:
	CMember(class UPolyEditExtrudeProperties*)         ExtrudeProperties                                           OFFSET(get<T>, {0x50, 8, 0, 0})
	CMember(class UPolyEditOffsetProperties*)          OffsetProperties                                            OFFSET(get<T>, {0x58, 8, 0, 0})
	CMember(class UPolyEditPushPullProperties*)        PushPullProperties                                          OFFSET(get<T>, {0x60, 8, 0, 0})
	CMember(class UPlaneDistanceFromHitMechanic*)      ExtrudeHeightMechanic                                       OFFSET(get<T>, {0x68, 8, 0, 0})
	CMember(class UPolyEditActivityContext*)           ActivityContext                                             OFFSET(get<T>, {0x70, 8, 0, 0})
};

/// Class /Script/MeshModelingTools.GroupEdgeInsertionProperties
/// Size: 0x0010 (0x0000A8 - 0x0000B8)
class UGroupEdgeInsertionProperties : public UInteractiveToolPropertySet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	CMember(EGroupEdgeInsertionMode)                   InsertionMode                                               OFFSET(get<T>, {0xA8, 4, 0, 0})
	DMember(bool)                                      bContinuousInsertion                                        OFFSET(get<bool>, {0xAC, 1, 0, 0})
	DMember(double)                                    VertexTolerance                                             OFFSET(get<double>, {0xB0, 8, 0, 0})
};

/// Class /Script/MeshModelingTools.PolyEditInsertEdgeActivity
/// Size: 0x0440 (0x000030 - 0x000470)
class UPolyEditInsertEdgeActivity : public UInteractiveToolActivity
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1136;

public:
	CMember(class UGroupEdgeInsertionProperties*)      Settings                                                    OFFSET(get<T>, {0x48, 8, 0, 0})
	CMember(class UPolyEditActivityContext*)           ActivityContext                                             OFFSET(get<T>, {0x50, 8, 0, 0})
};

/// Class /Script/MeshModelingTools.EdgeLoopInsertionProperties
/// Size: 0x0030 (0x0000A8 - 0x0000D8)
class UEdgeLoopInsertionProperties : public UInteractiveToolPropertySet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	CMember(EEdgeLoopPositioningMode)                  PositionMode                                                OFFSET(get<T>, {0xA8, 4, 0, 0})
	CMember(EEdgeLoopInsertionMode)                    InsertionMode                                               OFFSET(get<T>, {0xAC, 4, 0, 0})
	DMember(int32_t)                                   NumLoops                                                    OFFSET(get<int32_t>, {0xB0, 4, 0, 0})
	DMember(double)                                    ProportionOffset                                            OFFSET(get<double>, {0xB8, 8, 0, 0})
	DMember(double)                                    DistanceOffset                                              OFFSET(get<double>, {0xC0, 8, 0, 0})
	DMember(bool)                                      bInteractive                                                OFFSET(get<bool>, {0xC8, 1, 0, 0})
	DMember(bool)                                      bFlipOffsetDirection                                        OFFSET(get<bool>, {0xC9, 1, 0, 0})
	DMember(bool)                                      bHighlightProblemGroups                                     OFFSET(get<bool>, {0xCA, 1, 0, 0})
	DMember(double)                                    VertexTolerance                                             OFFSET(get<double>, {0xD0, 8, 0, 0})
};

/// Class /Script/MeshModelingTools.PolyEditInsertEdgeLoopActivity
/// Size: 0x03D0 (0x000030 - 0x000400)
class UPolyEditInsertEdgeLoopActivity : public UInteractiveToolActivity
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1024;

public:
	CMember(class UEdgeLoopInsertionProperties*)       Settings                                                    OFFSET(get<T>, {0x48, 8, 0, 0})
	CMember(class UPolyEditActivityContext*)           ActivityContext                                             OFFSET(get<T>, {0x50, 8, 0, 0})
};

/// Class /Script/MeshModelingTools.PolyEditInsetOutsetProperties
/// Size: 0x0010 (0x0000A8 - 0x0000B8)
class UPolyEditInsetOutsetProperties : public UInteractiveToolPropertySet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	DMember(float)                                     Softness                                                    OFFSET(get<float>, {0xA8, 4, 0, 0})
	DMember(bool)                                      bBoundaryOnly                                               OFFSET(get<bool>, {0xAC, 1, 0, 0})
	DMember(float)                                     AreaScale                                                   OFFSET(get<float>, {0xB0, 4, 0, 0})
	DMember(bool)                                      bReproject                                                  OFFSET(get<bool>, {0xB4, 1, 0, 0})
	DMember(bool)                                      bOutset                                                     OFFSET(get<bool>, {0xB5, 1, 0, 0})
};

/// Class /Script/MeshModelingTools.PolyEditInsetOutsetActivity
/// Size: 0x0040 (0x000030 - 0x000070)
class UPolyEditInsetOutsetActivity : public UInteractiveToolActivity
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	CMember(class UPolyEditInsetOutsetProperties*)     Settings                                                    OFFSET(get<T>, {0x40, 8, 0, 0})
	CMember(class UPolyEditPreviewMesh*)               EditPreview                                                 OFFSET(get<T>, {0x50, 8, 0, 0})
	CMember(class USpatialCurveDistanceMechanic*)      CurveDistMechanic                                           OFFSET(get<T>, {0x58, 8, 0, 0})
	CMember(class UPolyEditActivityContext*)           ActivityContext                                             OFFSET(get<T>, {0x60, 8, 0, 0})
};

/// Class /Script/MeshModelingTools.PolyEditSetUVProperties
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UPolyEditSetUVProperties : public UInteractiveToolPropertySet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	DMember(bool)                                      bShowMaterial                                               OFFSET(get<bool>, {0xA8, 1, 0, 0})
};

/// Class /Script/MeshModelingTools.PolyEditPlanarProjectionUVActivity
/// Size: 0x00C0 (0x000030 - 0x0000F0)
class UPolyEditPlanarProjectionUVActivity : public UInteractiveToolActivity
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	CMember(class UPolyEditSetUVProperties*)           SetUVProperties                                             OFFSET(get<T>, {0x40, 8, 0, 0})
	CMember(class UPolyEditPreviewMesh*)               EditPreview                                                 OFFSET(get<T>, {0x48, 8, 0, 0})
	CMember(class UCollectSurfacePathMechanic*)        SurfacePathMechanic                                         OFFSET(get<T>, {0x50, 8, 0, 0})
	CMember(class UPolyEditActivityContext*)           ActivityContext                                             OFFSET(get<T>, {0x58, 8, 0, 0})
};

/// Class /Script/MeshModelingTools.UVLayoutToolBuilder
/// Size: 0x0000 (0x000028 - 0x000028)
class UUVLayoutToolBuilder : public UMultiSelectionMeshEditingToolBuilder
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/MeshModelingTools.UVLayoutTool
/// Size: 0x00B0 (0x0000C0 - 0x000170)
class UUVLayoutTool : public UMultiSelectionMeshEditingTool
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 368;

public:
	CMember(class UMeshUVChannelProperties*)           UVChannelProperties                                         OFFSET(get<T>, {0xC8, 8, 0, 0})
	CMember(class UUVLayoutProperties*)                BasicProperties                                             OFFSET(get<T>, {0xD0, 8, 0, 0})
	CMember(class UExistingMeshMaterialProperties*)    MaterialSettings                                            OFFSET(get<T>, {0xD8, 8, 0, 0})
	CMember(TArray<class UMeshOpPreviewWithBackgroundCompute*>) Previews                                           OFFSET(get<T>, {0xE0, 16, 0, 0})
	CMember(TArray<class UUVLayoutOperatorFactory*>)   Factories                                                   OFFSET(get<T>, {0xF0, 16, 0, 0})
	CMember(class UUVLayoutPreview*)                   UVLayoutView                                                OFFSET(get<T>, {0x160, 8, 0, 0})
};

/// Class /Script/MeshModelingTools.UVProjectionToolBuilder
/// Size: 0x0000 (0x000028 - 0x000028)
class UUVProjectionToolBuilder : public USingleTargetWithSelectionToolBuilder
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/MeshModelingTools.UVProjectionToolEditActions
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UUVProjectionToolEditActions : public UInteractiveToolPropertySet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:


	/// Functions
	// Function /Script/MeshModelingTools.UVProjectionToolEditActions.Reset
	// void Reset();                                                                                                            // [0xbca211c] Final|Native|Public  
	// Function /Script/MeshModelingTools.UVProjectionToolEditActions.AutoFitAlign
	// void AutoFitAlign();                                                                                                     // [0xbca202c] Final|Native|Public  
	// Function /Script/MeshModelingTools.UVProjectionToolEditActions.AutoFit
	// void AutoFit();                                                                                                          // [0xbca2014] Final|Native|Public  
};

/// Class /Script/MeshModelingTools.UVProjectionToolProperties
/// Size: 0x00E8 (0x0000A8 - 0x000190)
class UUVProjectionToolProperties : public UInteractiveToolPropertySet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
	CMember(EUVProjectionMethod)                       ProjectionType                                              OFFSET(get<T>, {0xA8, 1, 0, 0})
	SMember(FVector)                                   Dimensions                                                  OFFSET(getStruct<T>, {0xB0, 24, 0, 0})
	DMember(bool)                                      bProportionalDimensions                                     OFFSET(get<bool>, {0xC8, 1, 0, 0})
	CMember(EUVProjectionToolInitializationMode)       Initialization                                              OFFSET(get<T>, {0xCC, 4, 0, 0})
	DMember(float)                                     CylinderSplitAngle                                          OFFSET(get<float>, {0xD0, 4, 0, 0})
	DMember(float)                                     ExpMapNormalBlending                                        OFFSET(get<float>, {0xD4, 4, 0, 0})
	DMember(int32_t)                                   ExpMapSmoothingSteps                                        OFFSET(get<int32_t>, {0xD8, 4, 0, 0})
	DMember(float)                                     ExpMapSmoothingAlpha                                        OFFSET(get<float>, {0xDC, 4, 0, 0})
	DMember(float)                                     Rotation                                                    OFFSET(get<float>, {0xE0, 4, 0, 0})
	SMember(FVector2D)                                 Scale                                                       OFFSET(getStruct<T>, {0xE8, 16, 0, 0})
	SMember(FVector2D)                                 Translation                                                 OFFSET(getStruct<T>, {0xF8, 16, 0, 0})
	SMember(FVector)                                   SavedDimensions                                             OFFSET(getStruct<T>, {0x108, 24, 0, 0})
	DMember(bool)                                      bSavedProportionalDimensions                                OFFSET(get<bool>, {0x120, 1, 0, 0})
	SMember(FTransform)                                SavedTransform                                              OFFSET(getStruct<T>, {0x130, 96, 0, 0})
};

/// Class /Script/MeshModelingTools.UVProjectionOperatorFactory
/// Size: 0x0010 (0x000028 - 0x000038)
class UUVProjectionOperatorFactory : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(class UUVProjectionTool*)                  Tool                                                        OFFSET(get<T>, {0x30, 8, 0, 0})
};

/// Class /Script/MeshModelingTools.UVProjectionTool
/// Size: 0x03B8 (0x000128 - 0x0004E0)
class UUVProjectionTool : public USingleTargetWithSelectionTool
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1248;

public:
	CMember(class UMeshUVChannelProperties*)           UVChannelProperties                                         OFFSET(get<T>, {0x128, 8, 0, 0})
	CMember(class UUVProjectionToolProperties*)        BasicProperties                                             OFFSET(get<T>, {0x130, 8, 0, 0})
	CMember(class UUVProjectionToolEditActions*)       EditActions                                                 OFFSET(get<T>, {0x138, 8, 0, 0})
	CMember(class UExistingMeshMaterialProperties*)    MaterialSettings                                            OFFSET(get<T>, {0x140, 8, 0, 0})
	CMember(class UMeshOpPreviewWithBackgroundCompute*) Preview                                                    OFFSET(get<T>, {0x148, 8, 0, 0})
	CMember(class UMaterialInstanceDynamic*)           CheckerMaterial                                             OFFSET(get<T>, {0x150, 8, 0, 0})
	CMember(class UCombinedTransformGizmo*)            TransformGizmo                                              OFFSET(get<T>, {0x158, 8, 0, 0})
	CMember(class UTransformProxy*)                    TransformProxy                                              OFFSET(get<T>, {0x160, 8, 0, 0})
	CMember(class UUVProjectionOperatorFactory*)       OperatorFactory                                             OFFSET(get<T>, {0x168, 8, 0, 0})
	CMember(class UPreviewGeometry*)                   EdgeRenderer                                                OFFSET(get<T>, {0x170, 8, 0, 0})
	CMember(class USingleClickInputBehavior*)          ClickToSetPlaneBehavior                                     OFFSET(get<T>, {0x4C8, 8, 0, 0})
};

/// Enum /Script/MeshModelingTools.EPolyEditExtrudeEdgeDirectionMode
/// Size: 0x03
enum class EPolyEditExtrudeEdgeDirectionMode : uint32_t
{
	EPolyEditExtrudeEdgeDirectionMode__LocalExtrudeFrames                            = 0,
	EPolyEditExtrudeEdgeDirectionMode__SingleDirection                               = 1,
	EPolyEditExtrudeEdgeDirectionMode__EPolyEditExtrudeEdgeDirectionMode_MAX         = 2
};

/// Enum /Script/MeshModelingTools.EPolyEditExtrudeEdgeDistanceMode
/// Size: 0x03
enum class EPolyEditExtrudeEdgeDistanceMode : uint32_t
{
	EPolyEditExtrudeEdgeDistanceMode__Fixed                                          = 0,
	EPolyEditExtrudeEdgeDistanceMode__Gizmo                                          = 1,
	EPolyEditExtrudeEdgeDistanceMode__EPolyEditExtrudeEdgeDistanceMode_MAX           = 2
};

/// Enum /Script/MeshModelingTools.EMakeMeshPlacementType
/// Size: 0x04
enum class EMakeMeshPlacementType : uint8_t
{
	EMakeMeshPlacementType__GroundPlane                                              = 0,
	EMakeMeshPlacementType__OnScene                                                  = 1,
	EMakeMeshPlacementType__AtOrigin                                                 = 2,
	EMakeMeshPlacementType__EMakeMeshPlacementType_MAX                               = 3
};

/// Enum /Script/MeshModelingTools.EMakeMeshPivotLocation
/// Size: 0x04
enum class EMakeMeshPivotLocation : uint8_t
{
	EMakeMeshPivotLocation__Base                                                     = 0,
	EMakeMeshPivotLocation__Centered                                                 = 1,
	EMakeMeshPivotLocation__Top                                                      = 2,
	EMakeMeshPivotLocation__EMakeMeshPivotLocation_MAX                               = 3
};

/// Enum /Script/MeshModelingTools.EMakeMeshPolygroupMode
/// Size: 0x04
enum class EMakeMeshPolygroupMode : uint8_t
{
	EMakeMeshPolygroupMode__PerShape                                                 = 0,
	EMakeMeshPolygroupMode__PerFace                                                  = 1,
	EMakeMeshPolygroupMode__PerQuad                                                  = 2,
	EMakeMeshPolygroupMode__EMakeMeshPolygroupMode_MAX                               = 3
};

/// Enum /Script/MeshModelingTools.EProceduralRectType
/// Size: 0x03
enum class EProceduralRectType : uint32_t
{
	EProceduralRectType__Rectangle                                                   = 0,
	EProceduralRectType__RoundedRectangle                                            = 1,
	EProceduralRectType__EProceduralRectType_MAX                                     = 2
};

/// Enum /Script/MeshModelingTools.EProceduralDiscType
/// Size: 0x03
enum class EProceduralDiscType : uint32_t
{
	EProceduralDiscType__Disc                                                        = 0,
	EProceduralDiscType__PuncturedDisc                                               = 1,
	EProceduralDiscType__EProceduralDiscType_MAX                                     = 2
};

/// Enum /Script/MeshModelingTools.EProceduralSphereType
/// Size: 0x03
enum class EProceduralSphereType : uint32_t
{
	EProceduralSphereType__LatLong                                                   = 0,
	EProceduralSphereType__Box                                                       = 1,
	EProceduralSphereType__EProceduralSphereType_MAX                                 = 2
};

/// Enum /Script/MeshModelingTools.EProceduralStairsType
/// Size: 0x05
enum class EProceduralStairsType : uint32_t
{
	EProceduralStairsType__Linear                                                    = 0,
	EProceduralStairsType__Floating                                                  = 1,
	EProceduralStairsType__Curved                                                    = 2,
	EProceduralStairsType__Spiral                                                    = 3,
	EProceduralStairsType__EProceduralStairsType_MAX                                 = 4
};

/// Enum /Script/MeshModelingTools.EDrawPolygonDrawMode
/// Size: 0x07
enum class EDrawPolygonDrawMode : uint8_t
{
	EDrawPolygonDrawMode__Freehand                                                   = 0,
	EDrawPolygonDrawMode__Circle                                                     = 1,
	EDrawPolygonDrawMode__Square                                                     = 2,
	EDrawPolygonDrawMode__Rectangle                                                  = 3,
	EDrawPolygonDrawMode__RoundedRectangle                                           = 4,
	EDrawPolygonDrawMode__Ring                                                       = 5,
	EDrawPolygonDrawMode__EDrawPolygonDrawMode_MAX                                   = 6
};

/// Enum /Script/MeshModelingTools.EDrawPolygonExtrudeMode
/// Size: 0x04
enum class EDrawPolygonExtrudeMode : uint8_t
{
	EDrawPolygonExtrudeMode__Flat                                                    = 0,
	EDrawPolygonExtrudeMode__Fixed                                                   = 1,
	EDrawPolygonExtrudeMode__Interactive                                             = 2,
	EDrawPolygonExtrudeMode__EDrawPolygonExtrudeMode_MAX                             = 3
};

/// Enum /Script/MeshModelingTools.ELocalFrameMode
/// Size: 0x03
enum class ELocalFrameMode : uint32_t
{
	ELocalFrameMode__FromObject                                                      = 0,
	ELocalFrameMode__FromGeometry                                                    = 1,
	ELocalFrameMode__ELocalFrameMode_MAX                                             = 2
};

/// Enum /Script/MeshModelingTools.EEditMeshPolygonsToolActions
/// Size: 0x39
enum class EEditMeshPolygonsToolActions : uint8_t
{
	EEditMeshPolygonsToolActions__NoAction                                           = 0,
	EEditMeshPolygonsToolActions__AcceptCurrent                                      = 1,
	EEditMeshPolygonsToolActions__CancelCurrent                                      = 2,
	EEditMeshPolygonsToolActions__Extrude                                            = 3,
	EEditMeshPolygonsToolActions__PushPull                                           = 4,
	EEditMeshPolygonsToolActions__Offset                                             = 5,
	EEditMeshPolygonsToolActions__Inset                                              = 6,
	EEditMeshPolygonsToolActions__Outset                                             = 7,
	EEditMeshPolygonsToolActions__BevelFaces                                         = 8,
	EEditMeshPolygonsToolActions__InsertEdge                                         = 9,
	EEditMeshPolygonsToolActions__InsertEdgeLoop                                     = 10,
	EEditMeshPolygonsToolActions__Complete                                           = 11,
	EEditMeshPolygonsToolActions__PlaneCut                                           = 12,
	EEditMeshPolygonsToolActions__Merge                                              = 13,
	EEditMeshPolygonsToolActions__Delete                                             = 14,
	EEditMeshPolygonsToolActions__CutFaces                                           = 15,
	EEditMeshPolygonsToolActions__RecalculateNormals                                 = 16,
	EEditMeshPolygonsToolActions__FlipNormals                                        = 17,
	EEditMeshPolygonsToolActions__Retriangulate                                      = 18,
	EEditMeshPolygonsToolActions__Decompose                                          = 19,
	EEditMeshPolygonsToolActions__Disconnect                                         = 20,
	EEditMeshPolygonsToolActions__Duplicate                                          = 21,
	EEditMeshPolygonsToolActions__CollapseEdge                                       = 22,
	EEditMeshPolygonsToolActions__WeldEdges                                          = 23,
	EEditMeshPolygonsToolActions__StraightenEdge                                     = 24,
	EEditMeshPolygonsToolActions__FillHole                                           = 25,
	EEditMeshPolygonsToolActions__BridgeEdges                                        = 26,
	EEditMeshPolygonsToolActions__ExtrudeEdges                                       = 27,
	EEditMeshPolygonsToolActions__BevelEdges                                         = 28,
	EEditMeshPolygonsToolActions__SimplifyAlongEdges                                 = 29,
	EEditMeshPolygonsToolActions__PlanarProjectionUV                                 = 30,
	EEditMeshPolygonsToolActions__SimplifyByGroups                                   = 31,
	EEditMeshPolygonsToolActions__RegenerateExtraCorners                             = 32,
	EEditMeshPolygonsToolActions__PokeSingleFace                                     = 33,
	EEditMeshPolygonsToolActions__SplitSingleEdge                                    = 34,
	EEditMeshPolygonsToolActions__FlipSingleEdge                                     = 35,
	EEditMeshPolygonsToolActions__CollapseSingleEdge                                 = 36,
	EEditMeshPolygonsToolActions__BevelAuto                                          = 37,
	EEditMeshPolygonsToolActions__EEditMeshPolygonsToolActions_MAX                   = 38
};

/// Enum /Script/MeshModelingTools.EEditMeshPolygonsToolSelectionMode
/// Size: 0x07
enum class EEditMeshPolygonsToolSelectionMode : uint8_t
{
	EEditMeshPolygonsToolSelectionMode__Faces                                        = 0,
	EEditMeshPolygonsToolSelectionMode__Edges                                        = 1,
	EEditMeshPolygonsToolSelectionMode__Vertices                                     = 2,
	EEditMeshPolygonsToolSelectionMode__Loops                                        = 3,
	EEditMeshPolygonsToolSelectionMode__Rings                                        = 4,
	EEditMeshPolygonsToolSelectionMode__FacesEdgesVertices                           = 5,
	EEditMeshPolygonsToolSelectionMode__EEditMeshPolygonsToolSelectionMode_MAX       = 6
};

/// Enum /Script/MeshModelingTools.ESetMeshMaterialMode
/// Size: 0x04
enum class ESetMeshMaterialMode : uint8_t
{
	ESetMeshMaterialMode__Original                                                   = 0,
	ESetMeshMaterialMode__Checkerboard                                               = 1,
	ESetMeshMaterialMode__Override                                                   = 2,
	ESetMeshMaterialMode__ESetMeshMaterialMode_MAX                                   = 3
};

/// Enum /Script/MeshModelingTools.EMeshEditingMaterialModes
/// Size: 0x10
enum class EMeshEditingMaterialModes : uint32_t
{
	EMeshEditingMaterialModes__ExistingMaterial                                      = 0,
	EMeshEditingMaterialModes__Diffuse                                               = 1,
	EMeshEditingMaterialModes__Grey                                                  = 2,
	EMeshEditingMaterialModes__Soft                                                  = 3,
	EMeshEditingMaterialModes__Transparent                                           = 4,
	EMeshEditingMaterialModes__TangentNormal                                         = 5,
	EMeshEditingMaterialModes__VertexColor                                           = 6,
	EMeshEditingMaterialModes__CustomImage                                           = 7,
	EMeshEditingMaterialModes__Custom                                                = 8,
	EMeshEditingMaterialModes__EMeshEditingMaterialModes_MAX                         = 9
};

/// Enum /Script/MeshModelingTools.ERevolvePropertiesCapFillMode
/// Size: 0x05
enum class ERevolvePropertiesCapFillMode : uint8_t
{
	ERevolvePropertiesCapFillMode__None                                              = 0,
	ERevolvePropertiesCapFillMode__CenterFan                                         = 1,
	ERevolvePropertiesCapFillMode__Delaunay                                          = 2,
	ERevolvePropertiesCapFillMode__EarClipping                                       = 3,
	ERevolvePropertiesCapFillMode__ERevolvePropertiesCapFillMode_MAX                 = 4
};

/// Enum /Script/MeshModelingTools.ERevolvePropertiesPolygroupMode
/// Size: 0x05
enum class ERevolvePropertiesPolygroupMode : uint8_t
{
	ERevolvePropertiesPolygroupMode__PerShape                                        = 0,
	ERevolvePropertiesPolygroupMode__PerFace                                         = 1,
	ERevolvePropertiesPolygroupMode__PerRevolveStep                                  = 2,
	ERevolvePropertiesPolygroupMode__PerPathSegment                                  = 3,
	ERevolvePropertiesPolygroupMode__ERevolvePropertiesPolygroupMode_MAX             = 4
};

/// Enum /Script/MeshModelingTools.ERevolvePropertiesQuadSplit
/// Size: 0x03
enum class ERevolvePropertiesQuadSplit : uint8_t
{
	ERevolvePropertiesQuadSplit__Uniform                                             = 0,
	ERevolvePropertiesQuadSplit__Compact                                             = 1,
	ERevolvePropertiesQuadSplit__ERevolvePropertiesQuadSplit_MAX                     = 2
};

/// Enum /Script/MeshModelingTools.EPolyEditCutPlaneOrientation
/// Size: 0x03
enum class EPolyEditCutPlaneOrientation : uint32_t
{
	EPolyEditCutPlaneOrientation__FaceNormals                                        = 0,
	EPolyEditCutPlaneOrientation__ViewDirection                                      = 1,
	EPolyEditCutPlaneOrientation__EPolyEditCutPlaneOrientation_MAX                   = 2
};

/// Enum /Script/MeshModelingTools.EPolyEditExtrudeDirection
/// Size: 0x08
enum class EPolyEditExtrudeDirection : uint32_t
{
	EPolyEditExtrudeDirection__SelectionNormal                                       = 0,
	EPolyEditExtrudeDirection__WorldX                                                = 1,
	EPolyEditExtrudeDirection__WorldY                                                = 2,
	EPolyEditExtrudeDirection__WorldZ                                                = 3,
	EPolyEditExtrudeDirection__LocalX                                                = 4,
	EPolyEditExtrudeDirection__LocalY                                                = 5,
	EPolyEditExtrudeDirection__LocalZ                                                = 6,
	EPolyEditExtrudeDirection__EPolyEditExtrudeDirection_MAX                         = 7
};

/// Enum /Script/MeshModelingTools.EPolyEditExtrudeDistanceMode
/// Size: 0x03
enum class EPolyEditExtrudeDistanceMode : uint32_t
{
	EPolyEditExtrudeDistanceMode__ClickInViewport                                    = 0,
	EPolyEditExtrudeDistanceMode__Fixed                                              = 1,
	EPolyEditExtrudeDistanceMode__EPolyEditExtrudeDistanceMode_MAX                   = 2
};

/// Enum /Script/MeshModelingTools.EPolyEditExtrudeModeOptions
/// Size: 0x04
enum class EPolyEditExtrudeModeOptions : uint32_t
{
	EPolyEditExtrudeModeOptions__SingleDirection                                     = 3,
	EPolyEditExtrudeModeOptions__SelectedTriangleNormals                             = 0,
	EPolyEditExtrudeModeOptions__SelectedTriangleNormalsEven                         = 1,
	EPolyEditExtrudeModeOptions__EPolyEditExtrudeModeOptions_MAX                     = 4
};

/// Enum /Script/MeshModelingTools.EPolyEditOffsetModeOptions
/// Size: 0x04
enum class EPolyEditOffsetModeOptions : uint32_t
{
	EPolyEditOffsetModeOptions__VertexNormals                                        = 2,
	EPolyEditOffsetModeOptions__SelectedTriangleNormals                              = 0,
	EPolyEditOffsetModeOptions__SelectedTriangleNormalsEven                          = 1,
	EPolyEditOffsetModeOptions__EPolyEditOffsetModeOptions_MAX                       = 3
};

/// Enum /Script/MeshModelingTools.EPolyEditPushPullModeOptions
/// Size: 0x05
enum class EPolyEditPushPullModeOptions : uint32_t
{
	EPolyEditPushPullModeOptions__SelectedTriangleNormals                            = 0,
	EPolyEditPushPullModeOptions__SelectedTriangleNormalsEven                        = 1,
	EPolyEditPushPullModeOptions__SingleDirection                                    = 3,
	EPolyEditPushPullModeOptions__VertexNormals                                      = 2,
	EPolyEditPushPullModeOptions__EPolyEditPushPullModeOptions_MAX                   = 4
};

/// Enum /Script/MeshModelingTools.EGroupEdgeInsertionMode
/// Size: 0x03
enum class EGroupEdgeInsertionMode : uint32_t
{
	EGroupEdgeInsertionMode__Retriangulate                                           = 0,
	EGroupEdgeInsertionMode__PlaneCut                                                = 1,
	EGroupEdgeInsertionMode__EGroupEdgeInsertionMode_MAX                             = 2
};

/// Enum /Script/MeshModelingTools.EEdgeLoopPositioningMode
/// Size: 0x04
enum class EEdgeLoopPositioningMode : uint32_t
{
	EEdgeLoopPositioningMode__Even                                                   = 0,
	EEdgeLoopPositioningMode__ProportionOffset                                       = 1,
	EEdgeLoopPositioningMode__DistanceOffset                                         = 2,
	EEdgeLoopPositioningMode__EEdgeLoopPositioningMode_MAX                           = 3
};

/// Enum /Script/MeshModelingTools.EEdgeLoopInsertionMode
/// Size: 0x03
enum class EEdgeLoopInsertionMode : uint32_t
{
	EEdgeLoopInsertionMode__Retriangulate                                            = 0,
	EEdgeLoopInsertionMode__PlaneCut                                                 = 1,
	EEdgeLoopInsertionMode__EEdgeLoopInsertionMode_MAX                               = 2
};

/// Enum /Script/MeshModelingTools.EUVProjectionToolActions
/// Size: 0x05
enum class EUVProjectionToolActions : uint8_t
{
	EUVProjectionToolActions__NoAction                                               = 0,
	EUVProjectionToolActions__AutoFit                                                = 1,
	EUVProjectionToolActions__AutoFitAlign                                           = 2,
	EUVProjectionToolActions__Reset                                                  = 3,
	EUVProjectionToolActions__EUVProjectionToolActions_MAX                           = 4
};

/// Enum /Script/MeshModelingTools.EUVProjectionToolInitializationMode
/// Size: 0x05
enum class EUVProjectionToolInitializationMode : uint32_t
{
	EUVProjectionToolInitializationMode__Default                                     = 0,
	EUVProjectionToolInitializationMode__UsePrevious                                 = 1,
	EUVProjectionToolInitializationMode__AutoFit                                     = 2,
	EUVProjectionToolInitializationMode__AutoFitAlign                                = 3,
	EUVProjectionToolInitializationMode__EUVProjectionToolInitializationMode_MAX     = 4
};

