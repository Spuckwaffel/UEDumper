
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine
/// dependency: GeometryFramework
/// dependency: InteractiveToolsFramework

/// Class /Script/ModelingComponents.MeshTopologySelectionMechanic
/// Size: 0x0B00 (0x000030 - 0x000B30)
class UMeshTopologySelectionMechanic : public UInteractionMechanic
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2864;

public:
	CMember(class UMeshTopologySelectionMechanicProperties*) Properties                                            OFFSET(get<T>, {0x78, 8, 0, 0})
	CMember(class UMouseHoverBehavior*)                HoverBehavior                                               OFFSET(get<T>, {0xE0, 8, 0, 0})
	CMember(class USingleClickOrDragInputBehavior*)    ClickOrDragBehavior                                         OFFSET(get<T>, {0xE8, 8, 0, 0})
	CMember(class URectangleMarqueeMechanic*)          MarqueeMechanic                                             OFFSET(get<T>, {0xF0, 8, 0, 0})
	CMember(EMarqueeSelectionUpdateType)               MarqueeSelectionUpdateType                                  OFFSET(get<T>, {0xF8, 4, 0, 0})
	CMember(class APreviewGeometryActor*)              PreviewGeometryActor                                        OFFSET(get<T>, {0x700, 8, 0, 0})
	CMember(class UTriangleSetComponent*)              DrawnTriangleSetComponent                                   OFFSET(get<T>, {0x708, 8, 0, 0})
	CMember(class UMaterialInterface*)                 HighlightedFaceMaterial                                     OFFSET(get<T>, {0x760, 8, 0, 0})
};

/// Class /Script/ModelingComponents.BoundarySelectionMechanic
/// Size: 0x0000 (0x000B30 - 0x000B30)
class UBoundarySelectionMechanic : public UMeshTopologySelectionMechanic
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2864;

public:
};

/// Class /Script/ModelingComponents.DynamicMeshCommitter
/// Size: 0x0000 (0x000028 - 0x000028)
class UDynamicMeshCommitter : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/ModelingComponents.DynamicMeshProvider
/// Size: 0x0000 (0x000028 - 0x000028)
class UDynamicMeshProvider : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/ModelingComponents.PersistentDynamicMeshSource
/// Size: 0x0000 (0x000028 - 0x000028)
class UPersistentDynamicMeshSource : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/ModelingComponents.GeometrySelectionVisualizationProperties
/// Size: 0x0060 (0x0000A8 - 0x000108)
class UGeometrySelectionVisualizationProperties : public UInteractiveToolPropertySet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:
	DMember(bool)                                      bEnableShowTriangleROIBorder                                OFFSET(get<bool>, {0xA8, 1, 0, 0})
	DMember(bool)                                      bEnableShowEdgeSelectionVertices                            OFFSET(get<bool>, {0xA9, 1, 0, 0})
	CMember(EGeometrySelectionElementType)             SelectionElementType                                        OFFSET(get<T>, {0xAA, 1, 0, 0})
	CMember(EGeometrySelectionTopologyType)            SelectionTopologyType                                       OFFSET(get<T>, {0xAB, 1, 0, 0})
	DMember(bool)                                      bShowSelection                                              OFFSET(get<bool>, {0xAC, 1, 0, 0})
	DMember(bool)                                      bShowTriangleROIBorder                                      OFFSET(get<bool>, {0xAD, 1, 0, 0})
	DMember(bool)                                      bShowHidden                                                 OFFSET(get<bool>, {0xAE, 1, 0, 0})
	DMember(bool)                                      bShowEdgeSelectionVertices                                  OFFSET(get<bool>, {0xAF, 1, 0, 0})
	DMember(float)                                     LineThickness                                               OFFSET(get<float>, {0xB0, 4, 0, 0})
	DMember(float)                                     PointSize                                                   OFFSET(get<float>, {0xB4, 4, 0, 0})
	DMember(float)                                     DepthBias                                                   OFFSET(get<float>, {0xB8, 4, 0, 0})
	SMember(FColor)                                    FaceColor                                                   OFFSET(getStruct<T>, {0xBC, 4, 0, 0})
	SMember(FColor)                                    LineColor                                                   OFFSET(getStruct<T>, {0xC0, 4, 0, 0})
	SMember(FColor)                                    PointColor                                                  OFFSET(getStruct<T>, {0xC4, 4, 0, 0})
	SMember(FColor)                                    TriangleROIBorderColor                                      OFFSET(getStruct<T>, {0xC8, 4, 0, 0})
	CMember(class UMaterialInterface*)                 TriangleMaterial                                            OFFSET(get<T>, {0xD0, 8, 0, 0})
	CMember(class UMaterialInterface*)                 LineMaterial                                                OFFSET(get<T>, {0xD8, 8, 0, 0})
	CMember(class UMaterialInterface*)                 PointMaterial                                               OFFSET(get<T>, {0xE0, 8, 0, 0})
	CMember(class UMaterialInterface*)                 TriangleMaterialShowingHidden                               OFFSET(get<T>, {0xE8, 8, 0, 0})
	CMember(class UMaterialInterface*)                 LineMaterialShowingHidden                                   OFFSET(get<T>, {0xF0, 8, 0, 0})
	CMember(class UMaterialInterface*)                 PointMaterialShowingHidden                                  OFFSET(get<T>, {0xF8, 8, 0, 0})
};

/// Class /Script/ModelingComponents.InteractiveToolActivity
/// Size: 0x0000 (0x000030 - 0x000030)
class UInteractiveToolActivity : public UInteractionMechanic
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/ModelingComponents.ToolActivityHost
/// Size: 0x0000 (0x000028 - 0x000028)
class UToolActivityHost : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/ModelingComponents.MeshTopologySelectionMechanicProperties
/// Size: 0x0018 (0x0000A8 - 0x0000C0)
class UMeshTopologySelectionMechanicProperties : public UInteractiveToolPropertySet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	DMember(bool)                                      bSelectVertices                                             OFFSET(get<bool>, {0xA8, 1, 0, 0})
	DMember(bool)                                      bSelectEdges                                                OFFSET(get<bool>, {0xA9, 1, 0, 0})
	DMember(bool)                                      bSelectFaces                                                OFFSET(get<bool>, {0xAA, 1, 0, 0})
	DMember(bool)                                      bSelectEdgeLoops                                            OFFSET(get<bool>, {0xAB, 1, 0, 0})
	DMember(bool)                                      bSelectEdgeRings                                            OFFSET(get<bool>, {0xAC, 1, 0, 0})
	DMember(bool)                                      bHitBackFaces                                               OFFSET(get<bool>, {0xAD, 1, 0, 0})
	DMember(bool)                                      bEnableMarquee                                              OFFSET(get<bool>, {0xAE, 1, 0, 0})
	DMember(bool)                                      bMarqueeIgnoreOcclusion                                     OFFSET(get<bool>, {0xAF, 1, 0, 0})
	DMember(bool)                                      bPreferProjectedElement                                     OFFSET(get<bool>, {0xB0, 1, 0, 0})
	DMember(bool)                                      bSelectDownRay                                              OFFSET(get<bool>, {0xB1, 1, 0, 0})
	DMember(bool)                                      bIgnoreOcclusion                                            OFFSET(get<bool>, {0xB2, 1, 0, 0})


	/// Functions
	// Function /Script/ModelingComponents.MeshTopologySelectionMechanicProperties.SelectAll
	// void SelectAll();                                                                                                        // [0xbd04618] Final|Native|Public  
	// Function /Script/ModelingComponents.MeshTopologySelectionMechanicProperties.InvertSelection
	// void InvertSelection();                                                                                                  // [0xbd045dc] Final|Native|Public  
};

/// Class /Script/ModelingComponents.GeometrySelectionEditCommandArguments
/// Size: 0x0020 (0x000030 - 0x000050)
class UGeometrySelectionEditCommandArguments : public UInteractiveCommandArguments
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Class /Script/ModelingComponents.GeometrySelectionEditCommandResult
/// Size: 0x0078 (0x000028 - 0x0000A0)
class UGeometrySelectionEditCommandResult : public UInteractiveCommandResult
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
};

/// Class /Script/ModelingComponents.GeometrySelectionEditCommand
/// Size: 0x0000 (0x000028 - 0x000028)
class UGeometrySelectionEditCommand : public UInteractiveCommand
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/ModelingComponents.ToolHostCustomizationAPI
/// Size: 0x0000 (0x000028 - 0x000028)
class UToolHostCustomizationAPI : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/ModelingComponents.VoxelProperties
/// Size: 0x0018 (0x0000A8 - 0x0000C0)
class UVoxelProperties : public UInteractiveToolPropertySet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	DMember(int32_t)                                   VoxelCount                                                  OFFSET(get<int32_t>, {0xA8, 4, 0, 0})
	DMember(bool)                                      bAutoSimplify                                               OFFSET(get<bool>, {0xAC, 1, 0, 0})
	DMember(bool)                                      bRemoveInternalSurfaces                                     OFFSET(get<bool>, {0xAD, 1, 0, 0})
	DMember(double)                                    SimplifyMaxErrorFactor                                      OFFSET(get<double>, {0xB0, 8, 0, 0})
	DMember(double)                                    CubeRootMinComponentVolume                                  OFFSET(get<double>, {0xB8, 8, 0, 0})
};

/// Class /Script/ModelingComponents.MultiSelectionMeshEditingToolBuilder
/// Size: 0x0000 (0x000028 - 0x000028)
class UMultiSelectionMeshEditingToolBuilder : public UInteractiveToolWithToolTargetsBuilder
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/ModelingComponents.BaseCreateFromSelectedToolBuilder
/// Size: 0x0000 (0x000028 - 0x000028)
class UBaseCreateFromSelectedToolBuilder : public UMultiSelectionMeshEditingToolBuilder
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/ModelingComponents.OnAcceptHandleSourcesPropertiesBase
/// Size: 0x0000 (0x0000A8 - 0x0000A8)
class UOnAcceptHandleSourcesPropertiesBase : public UInteractiveToolPropertySet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
};

/// Class /Script/ModelingComponents.OnAcceptHandleSourcesProperties
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UOnAcceptHandleSourcesProperties : public UOnAcceptHandleSourcesPropertiesBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	CMember(EHandleSourcesMethod)                      HandleInputs                                                OFFSET(get<T>, {0xA8, 1, 0, 0})
};

/// Class /Script/ModelingComponents.BaseCreateFromSelectedHandleSourceProperties
/// Size: 0x0028 (0x0000B0 - 0x0000D8)
class UBaseCreateFromSelectedHandleSourceProperties : public UOnAcceptHandleSourcesProperties
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	CMember(EBaseCreateFromSelectedTargetType)         OutputWriteTo                                               OFFSET(get<T>, {0xB0, 4, 0, 0})
	SMember(FString)                                   OutputNewName                                               OFFSET(getStruct<T>, {0xB8, 16, 0, 0})
	SMember(FString)                                   OutputExistingName                                          OFFSET(getStruct<T>, {0xC8, 16, 0, 0})
};

/// Class /Script/ModelingComponents.BaseCreateFromSelectedCollisionProperties
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UBaseCreateFromSelectedCollisionProperties : public UInteractiveToolPropertySet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	DMember(bool)                                      bTransferCollision                                          OFFSET(get<bool>, {0xA8, 1, 0, 0})
};

/// Class /Script/ModelingComponents.TransformInputsToolProperties
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UTransformInputsToolProperties : public UInteractiveToolPropertySet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	DMember(bool)                                      bShowTransformGizmo                                         OFFSET(get<bool>, {0xA8, 1, 0, 0})
};

/// Class /Script/ModelingComponents.MultiSelectionMeshEditingTool
/// Size: 0x0008 (0x0000B0 - 0x0000B8)
class UMultiSelectionMeshEditingTool : public UMultiSelectionTool
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	CMember(TWeakObjectPtr<UWorld*>)                   TargetWorld                                                 OFFSET(get<T>, {0xB0, 8, 0, 0})
};

/// Class /Script/ModelingComponents.BaseCreateFromSelectedTool
/// Size: 0x0050 (0x0000B8 - 0x000108)
class UBaseCreateFromSelectedTool : public UMultiSelectionMeshEditingTool
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:
	CMember(class UTransformInputsToolProperties*)     TransformProperties                                         OFFSET(get<T>, {0xC0, 8, 0, 0})
	CMember(class UCreateMeshObjectTypeProperties*)    OutputTypeProperties                                        OFFSET(get<T>, {0xC8, 8, 0, 0})
	CMember(class UBaseCreateFromSelectedHandleSourceProperties*) HandleSourcesProperties                          OFFSET(get<T>, {0xD0, 8, 0, 0})
	CMember(class UBaseCreateFromSelectedCollisionProperties*) CollisionProperties                                 OFFSET(get<T>, {0xD8, 8, 0, 0})
	CMember(class UMeshOpPreviewWithBackgroundCompute*) Preview                                                    OFFSET(get<T>, {0xE0, 8, 0, 0})
	CMember(TArray<class UTransformProxy*>)            TransformProxies                                            OFFSET(get<T>, {0xE8, 16, 0, 0})
	CMember(TArray<class UCombinedTransformGizmo*>)    TransformGizmos                                             OFFSET(get<T>, {0xF8, 16, 0, 0})
};

/// Class /Script/ModelingComponents.BaseMeshProcessingToolBuilder
/// Size: 0x0000 (0x000028 - 0x000028)
class UBaseMeshProcessingToolBuilder : public UInteractiveToolWithToolTargetsBuilder
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/ModelingComponents.BaseMeshProcessingTool
/// Size: 0x0358 (0x0000A8 - 0x000400)
class UBaseMeshProcessingTool : public USingleSelectionTool
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1024;

public:
	CMember(class UMeshOpPreviewWithBackgroundCompute*) Preview                                                    OFFSET(get<T>, {0xC8, 8, 0, 0})
};

/// Class /Script/ModelingComponents.BaseVoxelTool
/// Size: 0x0018 (0x000108 - 0x000120)
class UBaseVoxelTool : public UBaseCreateFromSelectedTool
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	CMember(class UVoxelProperties*)                   VoxProperties                                               OFFSET(get<T>, {0x108, 8, 0, 0})
};

/// Class /Script/ModelingComponents.MeshSurfacePointMeshEditingToolBuilder
/// Size: 0x0000 (0x000030 - 0x000030)
class UMeshSurfacePointMeshEditingToolBuilder : public UMeshSurfacePointToolBuilder
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/ModelingComponents.SingleSelectionMeshEditingToolBuilder
/// Size: 0x0000 (0x000028 - 0x000028)
class USingleSelectionMeshEditingToolBuilder : public UInteractiveToolWithToolTargetsBuilder
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/ModelingComponents.SingleSelectionMeshEditingTool
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class USingleSelectionMeshEditingTool : public USingleSelectionTool
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	CMember(TWeakObjectPtr<UWorld*>)                   TargetWorld                                                 OFFSET(get<T>, {0xA8, 8, 0, 0})
};

/// Class /Script/ModelingComponents.SingleTargetWithSelectionToolBuilder
/// Size: 0x0000 (0x000028 - 0x000028)
class USingleTargetWithSelectionToolBuilder : public UInteractiveToolWithToolTargetsBuilder
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/ModelingComponents.SingleTargetWithSelectionTool
/// Size: 0x0078 (0x0000A8 - 0x000120)
class USingleTargetWithSelectionTool : public USingleSelectionTool
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	CMember(TWeakObjectPtr<UWorld*>)                   TargetWorld                                                 OFFSET(get<T>, {0xA8, 8, 0, 0})
	CMember(class UGeometrySelectionVisualizationProperties*) GeometrySelectionVizProperties                       OFFSET(get<T>, {0x110, 8, 0, 0})
	CMember(class UPreviewGeometry*)                   GeometrySelectionViz                                        OFFSET(get<T>, {0x118, 8, 0, 0})
};

/// Class /Script/ModelingComponents.DynamicMeshReplacementChangeTarget
/// Size: 0x0030 (0x000028 - 0x000058)
class UDynamicMeshReplacementChangeTarget : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
};

/// Class /Script/ModelingComponents.OctreeDynamicMeshComponent
/// Size: 0x0120 (0x0005A0 - 0x0006C0)
class UOctreeDynamicMeshComponent : public UBaseDynamicMeshComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1728;

public:
	CMember(class UDynamicMesh*)                       MeshObject                                                  OFFSET(get<T>, {0x600, 8, 0, 0})


	/// Functions
	// Function /Script/ModelingComponents.OctreeDynamicMeshComponent.SetDynamicMesh
	// void SetDynamicMesh(class UDynamicMesh* NewMesh);                                                                        // [0xbd04654] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/ModelingComponents.LineSetComponent
/// Size: 0x0080 (0x000540 - 0x0005C0)
class ULineSetComponent : public UMeshComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1472;

public:
	CMember(class UMaterialInterface*)                 LineMaterial                                                OFFSET(get<T>, {0x538, 8, 0, 0})
	SMember(FBoxSphereBounds)                          Bounds                                                      OFFSET(getStruct<T>, {0x540, 56, 0, 0})
	DMember(bool)                                      bBoundsDirty                                                OFFSET(get<bool>, {0x578, 1, 0, 0})
};

/// Class /Script/ModelingComponents.MeshElementsVisualizerProperties
/// Size: 0x0030 (0x0000A8 - 0x0000D8)
class UMeshElementsVisualizerProperties : public UInteractiveToolPropertySet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	DMember(bool)                                      bVisible                                                    OFFSET(get<bool>, {0xA8, 1, 0, 0})
	DMember(bool)                                      bShowWireframe                                              OFFSET(get<bool>, {0xA9, 1, 0, 0})
	DMember(bool)                                      bShowBorders                                                OFFSET(get<bool>, {0xAA, 1, 0, 0})
	DMember(bool)                                      bShowUVSeams                                                OFFSET(get<bool>, {0xAB, 1, 0, 0})
	DMember(bool)                                      bShowNormalSeams                                            OFFSET(get<bool>, {0xAC, 1, 0, 0})
	DMember(bool)                                      bShowTangentSeams                                           OFFSET(get<bool>, {0xAD, 1, 0, 0})
	DMember(bool)                                      bShowColorSeams                                             OFFSET(get<bool>, {0xAE, 1, 0, 0})
	DMember(float)                                     ThicknessScale                                              OFFSET(get<float>, {0xB0, 4, 0, 0})
	SMember(FColor)                                    WireframeColor                                              OFFSET(getStruct<T>, {0xB4, 4, 0, 0})
	SMember(FColor)                                    BoundaryEdgeColor                                           OFFSET(getStruct<T>, {0xB8, 4, 0, 0})
	SMember(FColor)                                    UVSeamColor                                                 OFFSET(getStruct<T>, {0xBC, 4, 0, 0})
	SMember(FColor)                                    NormalSeamColor                                             OFFSET(getStruct<T>, {0xC0, 4, 0, 0})
	SMember(FColor)                                    TangentSeamColor                                            OFFSET(getStruct<T>, {0xC4, 4, 0, 0})
	SMember(FColor)                                    ColorSeamColor                                              OFFSET(getStruct<T>, {0xC8, 4, 0, 0})
	DMember(float)                                     DepthBias                                                   OFFSET(get<float>, {0xCC, 4, 0, 0})
	DMember(bool)                                      bAdjustDepthBiasUsingMeshSize                               OFFSET(get<bool>, {0xD0, 1, 0, 0})
};

/// Class /Script/ModelingComponents.PreviewGeometry
/// Size: 0x00F8 (0x000028 - 0x000120)
class UPreviewGeometry : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	CMember(class APreviewGeometryActor*)              ParentActor                                                 OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(TMap<FString, UTriangleSetComponent*>)     TriangleSets                                                OFFSET(get<T>, {0x30, 80, 0, 0})
	CMember(TMap<FString, ULineSetComponent*>)         LineSets                                                    OFFSET(get<T>, {0x80, 80, 0, 0})
	CMember(TMap<FString, UPointSetComponent*>)        PointSets                                                   OFFSET(get<T>, {0xD0, 80, 0, 0})


	/// Functions
	// Function /Script/ModelingComponents.PreviewGeometry.SetPointSetVisibility
	// bool SetPointSetVisibility(FString PointSetIdentifier, bool bVisible);                                                   // [0xbd45978] Final|Native|Public  
	// Function /Script/ModelingComponents.PreviewGeometry.SetPointSetMaterial
	// bool SetPointSetMaterial(FString PointSetIdentifier, class UMaterialInterface* NewMaterial);                             // [0xbd452a0] Final|Native|Public  
	// Function /Script/ModelingComponents.PreviewGeometry.SetLineSetVisibility
	// bool SetLineSetVisibility(FString LineSetIdentifier, bool bVisible);                                                     // [0xbd44bc4] Final|Native|Public  
	// Function /Script/ModelingComponents.PreviewGeometry.SetLineSetMaterial
	// bool SetLineSetMaterial(FString LineSetIdentifier, class UMaterialInterface* NewMaterial);                               // [0xbd444ec] Final|Native|Public  
	// Function /Script/ModelingComponents.PreviewGeometry.SetAllPointSetsMaterial
	// void SetAllPointSetsMaterial(class UMaterialInterface* Material);                                                        // [0xbd4442c] Final|Native|Public  
	// Function /Script/ModelingComponents.PreviewGeometry.SetAllLineSetsMaterial
	// void SetAllLineSetsMaterial(class UMaterialInterface* Material);                                                         // [0xbd4436c] Final|Native|Public  
	// Function /Script/ModelingComponents.PreviewGeometry.RemoveTriangleSet
	// bool RemoveTriangleSet(FString TriangleSetIdentifier, bool bDestroy);                                                    // [0xbd43c90] Final|Native|Public  
	// Function /Script/ModelingComponents.PreviewGeometry.RemovePointSet
	// bool RemovePointSet(FString PointSetIdentifier, bool bDestroy);                                                          // [0xbd435b4] Final|Native|Public  
	// Function /Script/ModelingComponents.PreviewGeometry.RemoveLineSet
	// bool RemoveLineSet(FString LineSetIdentifier, bool bDestroy);                                                            // [0xbd42ed8] Final|Native|Public  
	// Function /Script/ModelingComponents.PreviewGeometry.RemoveAllTriangleSets
	// void RemoveAllTriangleSets(bool bDestroy);                                                                               // [0xbd42e14] Final|Native|Public  
	// Function /Script/ModelingComponents.PreviewGeometry.RemoveAllPointSets
	// void RemoveAllPointSets(bool bDestroy);                                                                                  // [0xbd42d50] Final|Native|Public  
	// Function /Script/ModelingComponents.PreviewGeometry.RemoveAllLineSets
	// void RemoveAllLineSets(bool bDestroy);                                                                                   // [0xbd42c8c] Final|Native|Public  
	// Function /Script/ModelingComponents.PreviewGeometry.GetActor
	// class APreviewGeometryActor* GetActor();                                                                                 // [0x7e4aa58] Final|Native|Public|Const 
	// Function /Script/ModelingComponents.PreviewGeometry.FindTriangleSet
	// class UTriangleSetComponent* FindTriangleSet(FString TriangleSetIdentifier);                                             // [0xbd42624] Final|Native|Public  
	// Function /Script/ModelingComponents.PreviewGeometry.FindPointSet
	// class UPointSetComponent* FindPointSet(FString PointSetIdentifier);                                                      // [0xbd41fbc] Final|Native|Public  
	// Function /Script/ModelingComponents.PreviewGeometry.FindLineSet
	// class ULineSetComponent* FindLineSet(FString LineSetIdentifier);                                                         // [0xbd41954] Final|Native|Public  
	// Function /Script/ModelingComponents.PreviewGeometry.Disconnect
	// void Disconnect();                                                                                                       // [0xbd41940] Final|Native|Public  
	// Function /Script/ModelingComponents.PreviewGeometry.CreateInWorld
	// void CreateInWorld(class UWorld* World, FTransform& WithTransform);                                                      // [0xbd40940] Final|Native|Public|HasOutParms|HasDefaults 
	// Function /Script/ModelingComponents.PreviewGeometry.AddTriangleSet
	// class UTriangleSetComponent* AddTriangleSet(FString TriangleSetIdentifier);                                              // [0xbd402d8] Final|Native|Public  
	// Function /Script/ModelingComponents.PreviewGeometry.AddPointSet
	// class UPointSetComponent* AddPointSet(FString PointSetIdentifier);                                                       // [0xbd3fc70] Final|Native|Public  
	// Function /Script/ModelingComponents.PreviewGeometry.AddLineSet
	// class ULineSetComponent* AddLineSet(FString LineSetIdentifier);                                                          // [0xbd3f608] Final|Native|Public  
};

/// Class /Script/ModelingComponents.MeshElementsVisualizer
/// Size: 0x0028 (0x000120 - 0x000148)
class UMeshElementsVisualizer : public UPreviewGeometry
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 328;

public:
	CMember(class UMeshElementsVisualizerProperties*)  Settings                                                    OFFSET(get<T>, {0x120, 8, 0, 0})
	CMember(class UMeshWireframeComponent*)            WireframeComponent                                          OFFSET(get<T>, {0x128, 8, 0, 0})
};

/// Class /Script/ModelingComponents.MeshWireframeComponent
/// Size: 0x00A0 (0x000540 - 0x0005E0)
class UMeshWireframeComponent : public UMeshComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1504;

public:
	DMember(float)                                     LineDepthBias                                               OFFSET(get<float>, {0x538, 4, 0, 0})
	DMember(float)                                     LineDepthBiasSizeScale                                      OFFSET(get<float>, {0x53C, 4, 0, 0})
	DMember(float)                                     ThicknessScale                                              OFFSET(get<float>, {0x540, 4, 0, 0})
	DMember(bool)                                      bEnableWireframe                                            OFFSET(get<bool>, {0x544, 1, 0, 0})
	SMember(FColor)                                    WireframeColor                                              OFFSET(getStruct<T>, {0x548, 4, 0, 0})
	DMember(float)                                     WireframeThickness                                          OFFSET(get<float>, {0x54C, 4, 0, 0})
	DMember(bool)                                      bEnableBoundaryEdges                                        OFFSET(get<bool>, {0x550, 1, 0, 0})
	SMember(FColor)                                    BoundaryEdgeColor                                           OFFSET(getStruct<T>, {0x554, 4, 0, 0})
	DMember(float)                                     BoundaryEdgeThickness                                       OFFSET(get<float>, {0x558, 4, 0, 0})
	DMember(bool)                                      bEnableUVSeams                                              OFFSET(get<bool>, {0x55C, 1, 0, 0})
	SMember(FColor)                                    UVSeamColor                                                 OFFSET(getStruct<T>, {0x560, 4, 0, 0})
	DMember(float)                                     UVSeamThickness                                             OFFSET(get<float>, {0x564, 4, 0, 0})
	DMember(bool)                                      bEnableNormalSeams                                          OFFSET(get<bool>, {0x568, 1, 0, 0})
	SMember(FColor)                                    NormalSeamColor                                             OFFSET(getStruct<T>, {0x56C, 4, 0, 0})
	DMember(float)                                     NormalSeamThickness                                         OFFSET(get<float>, {0x570, 4, 0, 0})
	DMember(bool)                                      bEnableTangentSeams                                         OFFSET(get<bool>, {0x574, 1, 0, 0})
	SMember(FColor)                                    TangentSeamColor                                            OFFSET(getStruct<T>, {0x578, 4, 0, 0})
	DMember(float)                                     TangentSeamThickness                                        OFFSET(get<float>, {0x57C, 4, 0, 0})
	DMember(bool)                                      bEnableColorSeams                                           OFFSET(get<bool>, {0x580, 1, 0, 0})
	SMember(FColor)                                    ColorSeamColor                                              OFFSET(getStruct<T>, {0x584, 4, 0, 0})
	DMember(float)                                     ColorSeamThickness                                          OFFSET(get<float>, {0x588, 4, 0, 0})
	CMember(class UMaterialInterface*)                 LineMaterial                                                OFFSET(get<T>, {0x590, 8, 0, 0})
	SMember(FBoxSphereBounds)                          LocalBounds                                                 OFFSET(getStruct<T>, {0x598, 56, 0, 0})
};

/// Class /Script/ModelingComponents.PointSetComponent
/// Size: 0x0080 (0x000540 - 0x0005C0)
class UPointSetComponent : public UMeshComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1472;

public:
	CMember(class UMaterialInterface*)                 PointMaterial                                               OFFSET(get<T>, {0x538, 8, 0, 0})
	SMember(FBoxSphereBounds)                          Bounds                                                      OFFSET(getStruct<T>, {0x540, 56, 0, 0})
	DMember(bool)                                      bBoundsDirty                                                OFFSET(get<bool>, {0x578, 1, 0, 0})
};

/// Class /Script/ModelingComponents.PreviewMesh
/// Size: 0x0118 (0x000028 - 0x000140)
class UPreviewMesh : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
	DMember(bool)                                      bBuildSpatialDataStructure                                  OFFSET(get<bool>, {0x40, 1, 0, 0})
	CMember(class UDynamicMeshComponent*)              DynamicMeshComponent                                        OFFSET(get<T>, {0x50, 8, 0, 0})
};

/// Class /Script/ModelingComponents.PolyEditPreviewMesh
/// Size: 0x0340 (0x000140 - 0x000480)
class UPolyEditPreviewMesh : public UPreviewMesh
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1152;

public:
};

/// Class /Script/ModelingComponents.PreviewGeometryActor
/// Size: 0x0000 (0x000298 - 0x000298)
class APreviewGeometryActor : public AInternalToolFrameworkActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 664;

public:
};

/// Class /Script/ModelingComponents.TriangleSetComponent
/// Size: 0x0100 (0x000540 - 0x000640)
class UTriangleSetComponent : public UMeshComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1600;

public:
	SMember(FBoxSphereBounds)                          Bounds                                                      OFFSET(getStruct<T>, {0x538, 56, 0, 0})
	DMember(bool)                                      bBoundsDirty                                                OFFSET(get<bool>, {0x570, 1, 0, 0})
};

/// Class /Script/ModelingComponents.UVLayoutPreviewProperties
/// Size: 0x0028 (0x0000A8 - 0x0000D0)
class UUVLayoutPreviewProperties : public UInteractiveToolPropertySet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0xA8, 1, 0, 0})
	CMember(EUVLayoutPreviewSide)                      Side                                                        OFFSET(get<T>, {0xAC, 4, 0, 0})
	DMember(float)                                     Scale                                                       OFFSET(get<float>, {0xB0, 4, 0, 0})
	SMember(FVector2D)                                 Offset                                                      OFFSET(getStruct<T>, {0xB8, 16, 0, 0})
	DMember(bool)                                      bShowWireframe                                              OFFSET(get<bool>, {0xC8, 1, 0, 0})
};

/// Class /Script/ModelingComponents.UVLayoutPreview
/// Size: 0x0148 (0x000028 - 0x000170)
class UUVLayoutPreview : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 368;

public:
	CMember(class UUVLayoutPreviewProperties*)         Settings                                                    OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(class UPreviewMesh*)                       PreviewMesh                                                 OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(class UMeshElementsVisualizer*)            MeshElementsVisualizer                                      OFFSET(get<T>, {0x38, 8, 0, 0})
	CMember(class UTriangleSetComponent*)              TriangleComponent                                           OFFSET(get<T>, {0x40, 8, 0, 0})
	DMember(bool)                                      bShowBackingRectangle                                       OFFSET(get<bool>, {0x48, 1, 0, 0})
	CMember(class UMaterialInterface*)                 BackingRectangleMaterial                                    OFFSET(get<T>, {0x50, 8, 0, 0})
};

/// Class /Script/ModelingComponents.CollectSurfacePathMechanic
/// Size: 0x0590 (0x000030 - 0x0005C0)
class UCollectSurfacePathMechanic : public UInteractionMechanic
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1472;

public:
};

/// Class /Script/ModelingComponents.CollisionPrimitivesMechanic
/// Size: 0x0540 (0x000030 - 0x000570)
class UCollisionPrimitivesMechanic : public UInteractionMechanic
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1392;

public:
	CMember(class UPreviewGeometry*)                   PreviewGeometry                                             OFFSET(get<T>, {0x240, 8, 0, 0})
	CMember(class ULineSetComponent*)                  DrawnPrimitiveEdges                                         OFFSET(get<T>, {0x248, 8, 0, 0})
	CMember(class UTransformProxy*)                    TranslateTransformProxy                                     OFFSET(get<T>, {0x3A0, 8, 0, 0})
	CMember(class UTransformProxy*)                    SphereTransformProxy                                        OFFSET(get<T>, {0x3A8, 8, 0, 0})
	CMember(class UTransformProxy*)                    BoxTransformProxy                                           OFFSET(get<T>, {0x3B0, 8, 0, 0})
	CMember(class UTransformProxy*)                    CapsuleTransformProxy                                       OFFSET(get<T>, {0x3B8, 8, 0, 0})
	CMember(class UTransformProxy*)                    FullTransformProxy                                          OFFSET(get<T>, {0x3C0, 8, 0, 0})
	CMember(class UTransformProxy*)                    CurrentActiveProxy                                          OFFSET(get<T>, {0x3C8, 8, 0, 0})
	CMember(class UCombinedTransformGizmo*)            TranslateTransformGizmo                                     OFFSET(get<T>, {0x3D0, 8, 0, 0})
	CMember(class UCombinedTransformGizmo*)            SphereTransformGizmo                                        OFFSET(get<T>, {0x3D8, 8, 0, 0})
	CMember(class UCombinedTransformGizmo*)            BoxTransformGizmo                                           OFFSET(get<T>, {0x3E0, 8, 0, 0})
	CMember(class UCombinedTransformGizmo*)            CapsuleTransformGizmo                                       OFFSET(get<T>, {0x3E8, 8, 0, 0})
	CMember(class UCombinedTransformGizmo*)            FullTransformGizmo                                          OFFSET(get<T>, {0x3F0, 8, 0, 0})
	CMember(class URectangleMarqueeMechanic*)          MarqueeMechanic                                             OFFSET(get<T>, {0x448, 8, 0, 0})
};

/// Class /Script/ModelingComponents.ConstructionPlaneMechanic
/// Size: 0x00C0 (0x000030 - 0x0000F0)
class UConstructionPlaneMechanic : public UInteractionMechanic
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	CMember(class UCombinedTransformGizmo*)            PlaneTransformGizmo                                         OFFSET(get<T>, {0xC8, 8, 0, 0})
	CMember(class UTransformProxy*)                    PlaneTransformProxy                                         OFFSET(get<T>, {0xD0, 8, 0, 0})
	CMember(class USingleClickInputBehavior*)          ClickToSetPlaneBehavior                                     OFFSET(get<T>, {0xE0, 8, 0, 0})
	CMember(class ULocalSingleClickInputBehavior*)     MiddleClickToSetGizmoBehavior                               OFFSET(get<T>, {0xE8, 8, 0, 0})
};

/// Class /Script/ModelingComponents.CurveControlPointsMechanic
/// Size: 0x0650 (0x000030 - 0x000680)
class UCurveControlPointsMechanic : public UInteractionMechanic
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1664;

public:
	CMember(class USingleClickInputBehavior*)          ClickBehavior                                               OFFSET(get<T>, {0x40, 8, 0, 0})
	CMember(class UMouseHoverBehavior*)                HoverBehavior                                               OFFSET(get<T>, {0x48, 8, 0, 0})
	CMember(class APreviewGeometryActor*)              PreviewGeometryActor                                        OFFSET(get<T>, {0x4E8, 8, 0, 0})
	CMember(class UPointSetComponent*)                 DrawnControlPoints                                          OFFSET(get<T>, {0x4F0, 8, 0, 0})
	CMember(class ULineSetComponent*)                  DrawnControlSegments                                        OFFSET(get<T>, {0x4F8, 8, 0, 0})
	CMember(class UPointSetComponent*)                 PreviewPoint                                                OFFSET(get<T>, {0x500, 8, 0, 0})
	CMember(class ULineSetComponent*)                  PreviewSegment                                              OFFSET(get<T>, {0x508, 8, 0, 0})
	CMember(class UTransformProxy*)                    PointTransformProxy                                         OFFSET(get<T>, {0x588, 8, 0, 0})
	CMember(class UCombinedTransformGizmo*)            PointTransformGizmo                                         OFFSET(get<T>, {0x590, 8, 0, 0})
};

/// Class /Script/ModelingComponents.DragAlignmentMechanic
/// Size: 0x0240 (0x000030 - 0x000270)
class UDragAlignmentMechanic : public UInteractionMechanic
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 624;

public:
};

/// Class /Script/ModelingComponents.DragAlignmentInteraction
/// Size: 0x02A8 (0x000028 - 0x0002D0)
class UDragAlignmentInteraction : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 720;

public:
};

/// Class /Script/ModelingComponents.LatticeControlPointsMechanic
/// Size: 0x04E0 (0x000030 - 0x000510)
class ULatticeControlPointsMechanic : public UInteractionMechanic
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1296;

public:
	CMember(class APreviewGeometryActor*)              PreviewGeometryActor                                        OFFSET(get<T>, {0x220, 8, 0, 0})
	CMember(class UPointSetComponent*)                 DrawnControlPoints                                          OFFSET(get<T>, {0x228, 8, 0, 0})
	CMember(class ULineSetComponent*)                  DrawnLatticeEdges                                           OFFSET(get<T>, {0x230, 8, 0, 0})
	CMember(class UTransformProxy*)                    PointTransformProxy                                         OFFSET(get<T>, {0x2E0, 8, 0, 0})
	CMember(class UCombinedTransformGizmo*)            PointTransformGizmo                                         OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(class URectangleMarqueeMechanic*)          MarqueeMechanic                                             OFFSET(get<T>, {0x348, 8, 0, 0})
};

/// Class /Script/ModelingComponents.PlaneDistanceFromHitMechanic
/// Size: 0x04F0 (0x000030 - 0x000520)
class UPlaneDistanceFromHitMechanic : public UInteractionMechanic
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1312;

public:
};

/// Class /Script/ModelingComponents.PolyLassoMarqueeMechanic
/// Size: 0x01A0 (0x000030 - 0x0001D0)
class UPolyLassoMarqueeMechanic : public UInteractionMechanic
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 464;

public:
	DMember(float)                                     SpacingTolerance                                            OFFSET(get<float>, {0x88, 4, 0, 0})
	DMember(float)                                     LineThickness                                               OFFSET(get<float>, {0x8C, 4, 0, 0})
	SMember(FLinearColor)                              LineColor                                                   OFFSET(getStruct<T>, {0x90, 16, 0, 0})
	SMember(FLinearColor)                              ClosedColor                                                 OFFSET(getStruct<T>, {0xA0, 16, 0, 0})
	DMember(bool)                                      bEnableFreehandPolygons                                     OFFSET(get<bool>, {0xB0, 1, 0, 0})
	DMember(bool)                                      bEnableMultiClickPolygons                                   OFFSET(get<bool>, {0xB1, 1, 0, 0})
	CMember(class UClickDragInputBehavior*)            ClickDragBehavior                                           OFFSET(get<T>, {0xB8, 8, 0, 0})
	CMember(class UMouseHoverBehavior*)                HoverBehavior                                               OFFSET(get<T>, {0xC0, 8, 0, 0})
};

/// Class /Script/ModelingComponents.RectangleMarqueeMechanic
/// Size: 0x01F0 (0x000030 - 0x000220)
class URectangleMarqueeMechanic : public UInteractionMechanic
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 544;

public:
	DMember(bool)                                      bUseExternalClickDragBehavior                               OFFSET(get<bool>, {0x38, 1, 0, 0})
	DMember(bool)                                      bUseExternalUpdateCameraState                               OFFSET(get<bool>, {0x39, 1, 0, 0})
	DMember(double)                                    OnDragRectangleChangedDeferredThreshold                     OFFSET(get<double>, {0x80, 8, 0, 0})
	CMember(class UClickDragInputBehavior*)            ClickDragBehavior                                           OFFSET(get<T>, {0xD0, 8, 0, 0})
};

/// Class /Script/ModelingComponents.RectangleMarqueeInteraction
/// Size: 0x01E8 (0x000028 - 0x000210)
class URectangleMarqueeInteraction : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 528;

public:
};

/// Class /Script/ModelingComponents.SpaceCurveDeformationMechanicPropertySet
/// Size: 0x0010 (0x0000A8 - 0x0000B8)
class USpaceCurveDeformationMechanicPropertySet : public UInteractiveToolPropertySet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	CMember(ESpaceCurveControlPointTransformMode)      TransformMode                                               OFFSET(get<T>, {0xA8, 4, 0, 0})
	CMember(ESpaceCurveControlPointOriginMode)         TransformOrigin                                             OFFSET(get<T>, {0xAC, 4, 0, 0})
	DMember(float)                                     Softness                                                    OFFSET(get<float>, {0xB0, 4, 0, 0})
	CMember(ESpaceCurveControlPointFalloffType)        SoftFalloff                                                 OFFSET(get<T>, {0xB4, 4, 0, 0})
};

/// Class /Script/ModelingComponents.SpaceCurveDeformationMechanic
/// Size: 0x02A0 (0x000030 - 0x0002D0)
class USpaceCurveDeformationMechanic : public UInteractionMechanic
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 720;

public:
	CMember(class USingleClickInputBehavior*)          ClickBehavior                                               OFFSET(get<T>, {0x40, 8, 0, 0})
	CMember(class UMouseHoverBehavior*)                HoverBehavior                                               OFFSET(get<T>, {0x48, 8, 0, 0})
	CMember(class USpaceCurveDeformationMechanicPropertySet*) TransformProperties                                  OFFSET(get<T>, {0x68, 8, 0, 0})
	CMember(class APreviewGeometryActor*)              PreviewGeometryActor                                        OFFSET(get<T>, {0x168, 8, 0, 0})
	CMember(class UPointSetComponent*)                 RenderPoints                                                OFFSET(get<T>, {0x170, 8, 0, 0})
	CMember(class ULineSetComponent*)                  RenderSegments                                              OFFSET(get<T>, {0x178, 8, 0, 0})
	CMember(class UTransformProxy*)                    PointTransformProxy                                         OFFSET(get<T>, {0x1B8, 8, 0, 0})
	CMember(class UCombinedTransformGizmo*)            PointTransformGizmo                                         OFFSET(get<T>, {0x1C0, 8, 0, 0})
};

/// Class /Script/ModelingComponents.SpatialCurveDistanceMechanic
/// Size: 0x03E0 (0x000030 - 0x000410)
class USpatialCurveDistanceMechanic : public UInteractionMechanic
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1040;

public:
};

/// Class /Script/ModelingComponents.MeshOpPreviewWithBackgroundCompute
/// Size: 0x0090 (0x000028 - 0x0000B8)
class UMeshOpPreviewWithBackgroundCompute : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	CMember(class UPreviewMesh*)                       PreviewMesh                                                 OFFSET(get<T>, {0x58, 8, 0, 0})
	CMember(TArray<class UMaterialInterface*>)         StandardMaterials                                           OFFSET(get<T>, {0x60, 16, 0, 0})
	CMember(class UMaterialInterface*)                 OverrideMaterial                                            OFFSET(get<T>, {0x70, 8, 0, 0})
	CMember(class UMaterialInterface*)                 WorkingMaterial                                             OFFSET(get<T>, {0x78, 8, 0, 0})
	CMember(class UMaterialInterface*)                 SecondaryMaterial                                           OFFSET(get<T>, {0x80, 8, 0, 0})
	CMember(TWeakObjectPtr<UWorld*>)                   PreviewWorld                                                OFFSET(get<T>, {0x88, 8, 0, 0})
};

/// Class /Script/ModelingComponents.ModelingComponentsSettings
/// Size: 0x0008 (0x000030 - 0x000038)
class UModelingComponentsSettings : public UDeveloperSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(bool)                                      bEnableRayTracingWhileEditing                               OFFSET(get<bool>, {0x30, 1, 0, 0})
	DMember(bool)                                      bEnableRayTracing                                           OFFSET(get<bool>, {0x31, 1, 0, 0})
	DMember(bool)                                      bGenerateLightmapUVs                                        OFFSET(get<bool>, {0x32, 1, 0, 0})
	DMember(bool)                                      bEnableCollision                                            OFFSET(get<bool>, {0x33, 1, 0, 0})
	CMember(TEnumAsByte<ECollisionTraceFlag>)          CollisionMode                                               OFFSET(get<T>, {0x34, 1, 0, 0})
};

/// Class /Script/ModelingComponents.ModelingComponentsEditorSettings
/// Size: 0x0018 (0x000030 - 0x000048)
class UModelingComponentsEditorSettings : public UDeveloperSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(EModelingComponentsPlaneVisualizationMode) GridMode                                                    OFFSET(get<T>, {0x30, 1, 0, 0})
	DMember(int32_t)                                   NumGridLines                                                OFFSET(get<int32_t>, {0x34, 4, 0, 0})
	DMember(float)                                     GridSpacing                                                 OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     GridScale                                                   OFFSET(get<float>, {0x3C, 4, 0, 0})
	DMember(float)                                     GridSize                                                    OFFSET(get<float>, {0x40, 4, 0, 0})
};

/// Class /Script/ModelingComponents.ModelingObjectsCreationAPI
/// Size: 0x0000 (0x000028 - 0x000028)
class UModelingObjectsCreationAPI : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/ModelingComponents.ModelingObjectsCreationAPI.CreateTextureObject
	// FCreateTextureObjectResult CreateTextureObject(FCreateTextureObjectParams& CreateTexParams);                             // [0xbd412e8] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ModelingComponents.ModelingObjectsCreationAPI.CreateNewActor
	// FCreateActorResult CreateNewActor(FCreateActorParams& CreateActorParams);                                                // [0xbd41208] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ModelingComponents.ModelingObjectsCreationAPI.CreateMeshObject
	// FCreateMeshObjectResult CreateMeshObject(FCreateMeshObjectParams& CreateMeshParams);                                     // [0xbd4110c] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ModelingComponents.ModelingObjectsCreationAPI.CreateMaterialObject
	// FCreateMaterialObjectResult CreateMaterialObject(FCreateMaterialObjectParams& CreateMaterialParams);                     // [0xbd40ab8] Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/ModelingComponents.PreviewMeshActor
/// Size: 0x0000 (0x000298 - 0x000298)
class APreviewMeshActor : public AInternalToolFrameworkActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 664;

public:
};

/// Class /Script/ModelingComponents.CreateMeshObjectTypeProperties
/// Size: 0x0030 (0x0000A8 - 0x0000D8)
class UCreateMeshObjectTypeProperties : public UInteractiveToolPropertySet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	SMember(FString)                                   OutputType                                                  OFFSET(getStruct<T>, {0xA8, 16, 0, 0})
	CMember(class UClass*)                             VolumeType                                                  OFFSET(get<T>, {0xB8, 8, 0, 0})
	CMember(TArray<FString>)                           OutputTypeNamesList                                         OFFSET(get<T>, {0xC0, 16, 0, 0})
	DMember(bool)                                      bShowVolumeList                                             OFFSET(get<bool>, {0xD0, 1, 0, 0})


	/// Functions
	// Function /Script/ModelingComponents.CreateMeshObjectTypeProperties.ShouldShowPropertySet
	// bool ShouldShowPropertySet();                                                                                            // [0xbd73964] Final|Native|Public|Const 
	// Function /Script/ModelingComponents.CreateMeshObjectTypeProperties.GetOutputTypeNamesFunc
	// TArray<FString> GetOutputTypeNamesFunc();                                                                                // [0xbd73948] Final|Native|Public  
	// Function /Script/ModelingComponents.CreateMeshObjectTypeProperties.GetCurrentCreateMeshType
	// ECreateObjectTypeHint GetCurrentCreateMeshType();                                                                        // [0xbd738e8] Final|Native|Public|Const 
};

/// Class /Script/ModelingComponents.OnAcceptHandleSourcesPropertiesSingle
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UOnAcceptHandleSourcesPropertiesSingle : public UOnAcceptHandleSourcesPropertiesBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	CMember(EHandleSourcesMethod)                      HandleInputs                                                OFFSET(get<T>, {0xA8, 1, 0, 0})
};

/// Class /Script/ModelingComponents.PolygroupLayersProperties
/// Size: 0x0018 (0x0000A8 - 0x0000C0)
class UPolygroupLayersProperties : public UInteractiveToolPropertySet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	SMember(FName)                                     ActiveGroupLayer                                            OFFSET(getStruct<T>, {0xA8, 4, 0, 0})
	CMember(TArray<FString>)                           GroupLayersList                                             OFFSET(get<T>, {0xB0, 16, 0, 0})


	/// Functions
	// Function /Script/ModelingComponents.PolygroupLayersProperties.GetGroupLayersFunc
	// TArray<FString> GetGroupLayersFunc();                                                                                    // [0xbd7390c] Final|Native|Public  
};

/// Class /Script/ModelingComponents.WeightMapSetProperties
/// Size: 0x0020 (0x0000A8 - 0x0000C8)
class UWeightMapSetProperties : public UInteractiveToolPropertySet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	SMember(FName)                                     WeightMap                                                   OFFSET(getStruct<T>, {0xA8, 4, 0, 0})
	CMember(TArray<FString>)                           WeightMapsList                                              OFFSET(get<T>, {0xB0, 16, 0, 0})
	DMember(bool)                                      bInvertWeightMap                                            OFFSET(get<bool>, {0xC0, 1, 0, 0})


	/// Functions
	// Function /Script/ModelingComponents.WeightMapSetProperties.GetWeightMapsFunc
	// TArray<FString> GetWeightMapsFunc();                                                                                     // [0xbd7390c] Final|Native|Public  
};

/// Class /Script/ModelingComponents.GeometrySelectionManager
/// Size: 0x0298 (0x000028 - 0x0002C0)
class UGeometrySelectionManager : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 704;

public:
	CMember(class UGeometrySelectionEditCommandArguments*) SelectionArguments                                      OFFSET(get<T>, {0x50, 8, 0, 0})
	CMember(class UInteractiveToolsContext*)           ToolsContext                                                OFFSET(get<T>, {0x60, 8, 0, 0})
};

/// Class /Script/ModelingComponents.PolygonSelectionMechanicProperties
/// Size: 0x0000 (0x0000C0 - 0x0000C0)
class UPolygonSelectionMechanicProperties : public UMeshTopologySelectionMechanicProperties
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
};

/// Class /Script/ModelingComponents.PolygonSelectionMechanic
/// Size: 0x0010 (0x000B30 - 0x000B40)
class UPolygonSelectionMechanic : public UMeshTopologySelectionMechanic
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2880;

public:
};

/// Class /Script/ModelingComponents.ModelingSceneSnappingManager
/// Size: 0x0128 (0x000028 - 0x000150)
class UModelingSceneSnappingManager : public USceneSnappingManager
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
	CMember(class UInteractiveToolsContext*)           ParentContext                                               OFFSET(get<T>, {0x28, 8, 0, 0})
};

/// Class /Script/ModelingComponents.MultiTransformer
/// Size: 0x0188 (0x000028 - 0x0001B0)
class UMultiTransformer : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 432;

public:
	CMember(class UInteractiveGizmoManager*)           GizmoManager                                                OFFSET(get<T>, {0x88, 8, 0, 0})
	CMember(class UCombinedTransformGizmo*)            TransformGizmo                                              OFFSET(get<T>, {0x100, 8, 0, 0})
	CMember(class UTransformProxy*)                    TransformProxy                                              OFFSET(get<T>, {0x108, 8, 0, 0})
	CMember(class UDragAlignmentMechanic*)             DragAlignmentMechanic                                       OFFSET(get<T>, {0x110, 8, 0, 0})
};

/// Struct /Script/ModelingComponents.ModelingToolsAxisFilter
/// Size: 0x0003 (0x000000 - 0x000003)
class FModelingToolsAxisFilter : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 3;

public:
	DMember(bool)                                      bAxisX                                                      OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(bool)                                      bAxisY                                                      OFFSET(get<bool>, {0x1, 1, 0, 0})
	DMember(bool)                                      bAxisZ                                                      OFFSET(get<bool>, {0x2, 1, 0, 0})
};

/// Struct /Script/ModelingComponents.ModelingToolsColorChannelFilter
/// Size: 0x0004 (0x000000 - 0x000004)
class FModelingToolsColorChannelFilter : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(bool)                                      bRed                                                        OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(bool)                                      bGreen                                                      OFFSET(get<bool>, {0x1, 1, 0, 0})
	DMember(bool)                                      bBlue                                                       OFFSET(get<bool>, {0x2, 1, 0, 0})
	DMember(bool)                                      bAlpha                                                      OFFSET(get<bool>, {0x3, 1, 0, 0})
};

/// Struct /Script/ModelingComponents.RenderableTriangleVertex
/// Size: 0x0048 (0x000000 - 0x000048)
class FRenderableTriangleVertex : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FVector)                                   Position                                                    OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FVector2D)                                 UV                                                          OFFSET(getStruct<T>, {0x18, 16, 0, 0})
	SMember(FVector)                                   Normal                                                      OFFSET(getStruct<T>, {0x28, 24, 0, 0})
	SMember(FColor)                                    Color                                                       OFFSET(getStruct<T>, {0x40, 4, 0, 0})
};

/// Struct /Script/ModelingComponents.RenderableTriangle
/// Size: 0x00E0 (0x000000 - 0x0000E0)
class FRenderableTriangle : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	CMember(class UMaterialInterface*)                 Material                                                    OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FRenderableTriangleVertex)                 Vertex0                                                     OFFSET(getStruct<T>, {0x8, 72, 0, 0})
	SMember(FRenderableTriangleVertex)                 Vertex1                                                     OFFSET(getStruct<T>, {0x50, 72, 0, 0})
	SMember(FRenderableTriangleVertex)                 Vertex2                                                     OFFSET(getStruct<T>, {0x98, 72, 0, 0})
};

/// Struct /Script/ModelingComponents.CreateMeshObjectParams
/// Size: 0x0670 (0x000000 - 0x000670)
class FCreateMeshObjectParams : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
	CMember(class UPrimitiveComponent*)                SourceComponent                                             OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(ECreateObjectTypeHint)                     TypeHint                                                    OFFSET(get<T>, {0x8, 1, 0, 0})
	CMember(class UClass*)                             TypeHintClass                                               OFFSET(get<T>, {0x10, 8, 0, 0})
	DMember(int32_t)                                   TypeHintExtended                                            OFFSET(get<int32_t>, {0x18, 4, 0, 0})
	CMember(class UWorld*)                             TargetWorld                                                 OFFSET(get<T>, {0x20, 8, 0, 0})
	SMember(FTransform)                                Transform                                                   OFFSET(getStruct<T>, {0x30, 96, 0, 0})
	SMember(FString)                                   BaseName                                                    OFFSET(getStruct<T>, {0x90, 16, 0, 0})
	CMember(TArray<class UMaterialInterface*>)         Materials                                                   OFFSET(get<T>, {0xA0, 16, 0, 0})
	CMember(TArray<class UMaterialInterface*>)         AssetMaterials                                              OFFSET(get<T>, {0xB0, 16, 0, 0})
	DMember(bool)                                      bEnableCollision                                            OFFSET(get<bool>, {0xC0, 1, 0, 0})
	CMember(TEnumAsByte<ECollisionTraceFlag>)          CollisionMode                                               OFFSET(get<T>, {0xC1, 1, 0, 0})
	DMember(bool)                                      bEnableRaytracingSupport                                    OFFSET(get<bool>, {0x120, 1, 0, 0})
	DMember(bool)                                      bGenerateLightmapUVs                                        OFFSET(get<bool>, {0x121, 1, 0, 0})
	DMember(bool)                                      bEnableRecomputeNormals                                     OFFSET(get<bool>, {0x122, 1, 0, 0})
	DMember(bool)                                      bEnableRecomputeTangents                                    OFFSET(get<bool>, {0x123, 1, 0, 0})
	DMember(bool)                                      bEnableNanite                                               OFFSET(get<bool>, {0x124, 1, 0, 0})
	DMember(float)                                     NaniteProxyTrianglePercent                                  OFFSET(get<float>, {0x128, 4, 0, 0})
	SMember(FMeshNaniteSettings)                       NaniteSettings                                              OFFSET(getStruct<T>, {0x130, 64, 0, 0})
};

/// Struct /Script/ModelingComponents.CreateMeshObjectResult
/// Size: 0x0020 (0x000000 - 0x000020)
class FCreateMeshObjectResult : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(ECreateModelingObjectResult)               ResultCode                                                  OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(class AActor*)                             NewActor                                                    OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(class UPrimitiveComponent*)                NewComponent                                                OFFSET(get<T>, {0x10, 8, 0, 0})
	CMember(class UObject*)                            NewAsset                                                    OFFSET(get<T>, {0x18, 8, 0, 0})
};

/// Struct /Script/ModelingComponents.CreateTextureObjectParams
/// Size: 0x0030 (0x000000 - 0x000030)
class FCreateTextureObjectParams : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(int32_t)                                   TypeHintExtended                                            OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	CMember(class UWorld*)                             TargetWorld                                                 OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(class UObject*)                            StoreRelativeToObject                                       OFFSET(get<T>, {0x10, 8, 0, 0})
	SMember(FString)                                   BaseName                                                    OFFSET(getStruct<T>, {0x18, 16, 0, 0})
	CMember(class UTexture2D*)                         GeneratedTransientTexture                                   OFFSET(get<T>, {0x28, 8, 0, 0})
};

/// Struct /Script/ModelingComponents.CreateTextureObjectResult
/// Size: 0x0010 (0x000000 - 0x000010)
class FCreateTextureObjectResult : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(ECreateModelingObjectResult)               ResultCode                                                  OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(class UObject*)                            NewAsset                                                    OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/ModelingComponents.CreateMaterialObjectParams
/// Size: 0x0028 (0x000000 - 0x000028)
class FCreateMaterialObjectParams : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(class UWorld*)                             TargetWorld                                                 OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class UObject*)                            StoreRelativeToObject                                       OFFSET(get<T>, {0x8, 8, 0, 0})
	SMember(FString)                                   BaseName                                                    OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	CMember(class UMaterialInterface*)                 MaterialToDuplicate                                         OFFSET(get<T>, {0x20, 8, 0, 0})
};

/// Struct /Script/ModelingComponents.CreateMaterialObjectResult
/// Size: 0x0010 (0x000000 - 0x000010)
class FCreateMaterialObjectResult : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(ECreateModelingObjectResult)               ResultCode                                                  OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(class UObject*)                            NewAsset                                                    OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/ModelingComponents.CreateActorParams
/// Size: 0x0090 (0x000000 - 0x000090)
class FCreateActorParams : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	CMember(class UWorld*)                             TargetWorld                                                 OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FString)                                   BaseName                                                    OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	SMember(FTransform)                                Transform                                                   OFFSET(getStruct<T>, {0x20, 96, 0, 0})
	CMember(class AActor*)                             TemplateActor                                               OFFSET(get<T>, {0x80, 8, 0, 0})
	CMember(class UObject*)                            TemplateAsset                                               OFFSET(get<T>, {0x88, 8, 0, 0})
};

/// Struct /Script/ModelingComponents.CreateActorResult
/// Size: 0x0010 (0x000000 - 0x000010)
class FCreateActorResult : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(ECreateModelingObjectResult)               ResultCode                                                  OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(class AActor*)                             NewActor                                                    OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Enum /Script/ModelingComponents.EBakeTextureResolution
/// Size: 0x11
enum class EBakeTextureResolution : uint32_t
{
	EBakeTextureResolution__Resolution16                                             = 16,
	EBakeTextureResolution__Resolution32                                             = 32,
	EBakeTextureResolution__Resolution64                                             = 64,
	EBakeTextureResolution__Resolution128                                            = 128,
	EBakeTextureResolution__Resolution256                                            = 256,
	EBakeTextureResolution__Resolution512                                            = 512,
	EBakeTextureResolution__Resolution1024                                           = 1024,
	EBakeTextureResolution__Resolution2048                                           = 2048,
	EBakeTextureResolution__Resolution4096                                           = 4096,
	EBakeTextureResolution__Resolution8192                                           = 8192,
	EBakeTextureResolution__EBakeTextureResolution_MAX                               = 8193
};

/// Enum /Script/ModelingComponents.EBakeTextureBitDepth
/// Size: 0x03
enum class EBakeTextureBitDepth : uint32_t
{
	EBakeTextureBitDepth__ChannelBits8                                               = 0,
	EBakeTextureBitDepth__ChannelBits16                                              = 1,
	EBakeTextureBitDepth__EBakeTextureBitDepth_MAX                                   = 2
};

/// Enum /Script/ModelingComponents.EBakeTextureSamplesPerPixel
/// Size: 0x06
enum class EBakeTextureSamplesPerPixel : uint32_t
{
	EBakeTextureSamplesPerPixel__Sample1                                             = 1,
	EBakeTextureSamplesPerPixel__Sample4                                             = 4,
	EBakeTextureSamplesPerPixel__Sample16                                            = 16,
	EBakeTextureSamplesPerPixel__Sample64                                            = 64,
	EBakeTextureSamplesPerPixel__Sample256                                           = 256,
	EBakeTextureSamplesPerPixel__EBakeTextureSamplesPerPixel_MAX                     = 257
};

/// Enum /Script/ModelingComponents.EGeometrySelectionElementType
/// Size: 0x04
enum class EGeometrySelectionElementType : uint8_t
{
	EGeometrySelectionElementType__Vertex                                            = 1,
	EGeometrySelectionElementType__Edge                                              = 2,
	EGeometrySelectionElementType__Face                                              = 4,
	EGeometrySelectionElementType__EGeometrySelectionElementType_MAX                 = 5
};

/// Enum /Script/ModelingComponents.EGeometrySelectionTopologyType
/// Size: 0x03
enum class EGeometrySelectionTopologyType : uint8_t
{
	EGeometrySelectionTopologyType__Triangle                                         = 1,
	EGeometrySelectionTopologyType__Polygroup                                        = 2,
	EGeometrySelectionTopologyType__EGeometrySelectionTopologyType_MAX               = 3
};

/// Enum /Script/ModelingComponents.EMarqueeSelectionUpdateType
/// Size: 0x04
enum class EMarqueeSelectionUpdateType : uint32_t
{
	EMarqueeSelectionUpdateType__OnDrag                                              = 0,
	EMarqueeSelectionUpdateType__OnTickAndRelease                                    = 1,
	EMarqueeSelectionUpdateType__OnRelease                                           = 2,
	EMarqueeSelectionUpdateType__EMarqueeSelectionUpdateType_MAX                     = 3
};

/// Enum /Script/ModelingComponents.EBaseCreateFromSelectedTargetType
/// Size: 0x04
enum class EBaseCreateFromSelectedTargetType : uint32_t
{
	EBaseCreateFromSelectedTargetType__NewObject                                     = 0,
	EBaseCreateFromSelectedTargetType__FirstInputObject                              = 1,
	EBaseCreateFromSelectedTargetType__LastInputObject                               = 2,
	EBaseCreateFromSelectedTargetType__EBaseCreateFromSelectedTargetType_MAX         = 3
};

/// Enum /Script/ModelingComponents.EUVLayoutPreviewSide
/// Size: 0x03
enum class EUVLayoutPreviewSide : uint32_t
{
	EUVLayoutPreviewSide__Left                                                       = 0,
	EUVLayoutPreviewSide__Right                                                      = 1,
	EUVLayoutPreviewSide__EUVLayoutPreviewSide_MAX                                   = 2
};

/// Enum /Script/ModelingComponents.ESpaceCurveControlPointTransformMode
/// Size: 0x03
enum class ESpaceCurveControlPointTransformMode : uint32_t
{
	ESpaceCurveControlPointTransformMode__Shared                                     = 0,
	ESpaceCurveControlPointTransformMode__PerVertex                                  = 1,
	ESpaceCurveControlPointTransformMode__ESpaceCurveControlPointTransformMode_MAX   = 2
};

/// Enum /Script/ModelingComponents.ESpaceCurveControlPointOriginMode
/// Size: 0x04
enum class ESpaceCurveControlPointOriginMode : uint32_t
{
	ESpaceCurveControlPointOriginMode__Shared                                        = 0,
	ESpaceCurveControlPointOriginMode__First                                         = 1,
	ESpaceCurveControlPointOriginMode__Last                                          = 2,
	ESpaceCurveControlPointOriginMode__ESpaceCurveControlPointOriginMode_MAX         = 3
};

/// Enum /Script/ModelingComponents.ESpaceCurveControlPointFalloffType
/// Size: 0x03
enum class ESpaceCurveControlPointFalloffType : uint32_t
{
	ESpaceCurveControlPointFalloffType__Linear                                       = 0,
	ESpaceCurveControlPointFalloffType__Smooth                                       = 1,
	ESpaceCurveControlPointFalloffType__ESpaceCurveControlPointFalloffType_MAX       = 2
};

/// Enum /Script/ModelingComponents.EModelingComponentsPlaneVisualizationMode
/// Size: 0x04
enum class EModelingComponentsPlaneVisualizationMode : uint8_t
{
	EModelingComponentsPlaneVisualizationMode__SimpleGrid                            = 0,
	EModelingComponentsPlaneVisualizationMode__HierarchicalGrid                      = 1,
	EModelingComponentsPlaneVisualizationMode__FixedScreenAreaGrid                   = 2,
	EModelingComponentsPlaneVisualizationMode__EModelingComponentsPlaneVisualizationMode_MAX = 3
};

/// Enum /Script/ModelingComponents.ECreateModelingObjectResult
/// Size: 0x11
enum class ECreateModelingObjectResult : uint8_t
{
	ECreateModelingObjectResult__Ok                                                  = 0,
	ECreateModelingObjectResult__Cancelled                                           = 1,
	ECreateModelingObjectResult__Failed_Unknown                                      = 2,
	ECreateModelingObjectResult__Failed_NoAPIFound                                   = 3,
	ECreateModelingObjectResult__Failed_InvalidWorld                                 = 4,
	ECreateModelingObjectResult__Failed_InvalidMesh                                  = 5,
	ECreateModelingObjectResult__Failed_InvalidTexture                               = 6,
	ECreateModelingObjectResult__Failed_AssetCreationFailed                          = 7,
	ECreateModelingObjectResult__Failed_ActorCreationFailed                          = 8,
	ECreateModelingObjectResult__Failed_InvalidMaterial                              = 9,
	ECreateModelingObjectResult__ECreateModelingObjectResult_MAX                     = 10
};

/// Enum /Script/ModelingComponents.ECreateMeshObjectSourceMeshType
/// Size: 0x03
enum class ECreateMeshObjectSourceMeshType : uint8_t
{
	ECreateMeshObjectSourceMeshType__MeshDescription                                 = 0,
	ECreateMeshObjectSourceMeshType__DynamicMesh                                     = 1,
	ECreateMeshObjectSourceMeshType__ECreateMeshObjectSourceMeshType_MAX             = 2
};

/// Enum /Script/ModelingComponents.ECreateObjectTypeHint
/// Size: 0x05
enum class ECreateObjectTypeHint : uint8_t
{
	ECreateObjectTypeHint__Undefined                                                 = 0,
	ECreateObjectTypeHint__StaticMesh                                                = 1,
	ECreateObjectTypeHint__Volume                                                    = 2,
	ECreateObjectTypeHint__DynamicMeshActor                                          = 3,
	ECreateObjectTypeHint__ECreateObjectTypeHint_MAX                                 = 4
};

/// Enum /Script/ModelingComponents.EHandleSourcesMethod
/// Size: 0x06
enum class EHandleSourcesMethod : uint8_t
{
	EHandleSourcesMethod__DeleteSources                                              = 0,
	EHandleSourcesMethod__HideSources                                                = 1,
	EHandleSourcesMethod__KeepSources                                                = 2,
	EHandleSourcesMethod__KeepFirstSource                                            = 3,
	EHandleSourcesMethod__KeepLastSource                                             = 4,
	EHandleSourcesMethod__EHandleSourcesMethod_MAX                                   = 5
};

/// Enum /Script/ModelingComponents.EMultiTransformerMode
/// Size: 0x03
enum class EMultiTransformerMode : uint8_t
{
	EMultiTransformerMode__DefaultGizmo                                              = 1,
	EMultiTransformerMode__QuickAxisTranslation                                      = 2,
	EMultiTransformerMode__EMultiTransformerMode_MAX                                 = 3
};

