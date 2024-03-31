
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: GeometryFramework
/// dependency: InteractiveToolsFramework
/// dependency: MeshModelingTools
/// dependency: ModelingComponents
/// dependency: ModelingOperators

/// Class /Script/MeshModelingToolsExp.BakeInputMeshProperties
/// Size: 0x0098 (0x0000A8 - 0x000140)
class UBakeInputMeshProperties : public UInteractiveToolPropertySet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
	CMember(class UStaticMesh*)                        TargetStaticMesh                                            OFFSET(get<T>, {0xA8, 8, 0, 0})
	CMember(class USkeletalMesh*)                      TargetSkeletalMesh                                          OFFSET(get<T>, {0xB0, 8, 0, 0})
	CMember(class AActor*)                             TargetDynamicMesh                                           OFFSET(get<T>, {0xB8, 8, 0, 0})
	SMember(FString)                                   TargetUVLayer                                               OFFSET(getStruct<T>, {0xC0, 16, 0, 0})
	DMember(bool)                                      bHasTargetUVLayer                                           OFFSET(get<bool>, {0xD0, 1, 0, 0})
	CMember(class UStaticMesh*)                        SourceStaticMesh                                            OFFSET(get<T>, {0xD8, 8, 0, 0})
	CMember(class USkeletalMesh*)                      SourceSkeletalMesh                                          OFFSET(get<T>, {0xE0, 8, 0, 0})
	CMember(class AActor*)                             SourceDynamicMesh                                           OFFSET(get<T>, {0xE8, 8, 0, 0})
	DMember(bool)                                      bHideSourceMesh                                             OFFSET(get<bool>, {0xF0, 1, 0, 0})
	CMember(class UTexture2D*)                         SourceNormalMap                                             OFFSET(get<T>, {0xF8, 8, 0, 0})
	SMember(FString)                                   SourceNormalMapUVLayer                                      OFFSET(getStruct<T>, {0x100, 16, 0, 0})
	CMember(EBakeNormalSpace)                          SourceNormalSpace                                           OFFSET(get<T>, {0x110, 4, 0, 0})
	DMember(bool)                                      bHasSourceNormalMap                                         OFFSET(get<bool>, {0x114, 1, 0, 0})
	DMember(float)                                     ProjectionDistance                                          OFFSET(get<float>, {0x118, 4, 0, 0})
	DMember(bool)                                      bProjectionInWorldSpace                                     OFFSET(get<bool>, {0x11C, 1, 0, 0})
	CMember(TArray<FString>)                           TargetUVLayerNamesList                                      OFFSET(get<T>, {0x120, 16, 0, 0})
	CMember(TArray<FString>)                           SourceUVLayerNamesList                                      OFFSET(get<T>, {0x130, 16, 0, 0})


	/// Functions
	// Function /Script/MeshModelingToolsExp.BakeInputMeshProperties.GetTargetUVLayerNamesFunc
	// TArray<FString> GetTargetUVLayerNamesFunc();                                                                             // [0xbca2c38] Final|Native|Public|Const 
	// Function /Script/MeshModelingToolsExp.BakeInputMeshProperties.GetSourceUVLayerNamesFunc
	// TArray<FString> GetSourceUVLayerNamesFunc();                                                                             // [0xbca2c1c] Final|Native|Public|Const 
};

/// Class /Script/MeshModelingToolsExp.BakeNormalMapToolProperties
/// Size: 0x0000 (0x0000A8 - 0x0000A8)
class UBakeNormalMapToolProperties : public UInteractiveToolPropertySet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
};

/// Class /Script/MeshModelingToolsExp.BakeOcclusionMapToolProperties
/// Size: 0x0010 (0x0000A8 - 0x0000B8)
class UBakeOcclusionMapToolProperties : public UInteractiveToolPropertySet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	DMember(int32_t)                                   OcclusionRays                                               OFFSET(get<int32_t>, {0xA8, 4, 0, 0})
	DMember(float)                                     MaxDistance                                                 OFFSET(get<float>, {0xAC, 4, 0, 0})
	DMember(float)                                     SpreadAngle                                                 OFFSET(get<float>, {0xB0, 4, 0, 0})
	DMember(float)                                     BiasAngle                                                   OFFSET(get<float>, {0xB4, 4, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.BakeCurvatureMapToolProperties
/// Size: 0x0018 (0x0000A8 - 0x0000C0)
class UBakeCurvatureMapToolProperties : public UInteractiveToolPropertySet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	CMember(EBakeCurvatureTypeMode)                    CurvatureType                                               OFFSET(get<T>, {0xA8, 4, 0, 0})
	CMember(EBakeCurvatureColorMode)                   ColorMapping                                                OFFSET(get<T>, {0xAC, 4, 0, 0})
	DMember(float)                                     ColorRangeMultiplier                                        OFFSET(get<float>, {0xB0, 4, 0, 0})
	DMember(float)                                     MinRangeMultiplier                                          OFFSET(get<float>, {0xB4, 4, 0, 0})
	CMember(EBakeCurvatureClampMode)                   Clamping                                                    OFFSET(get<T>, {0xB8, 4, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.BakeTexture2DProperties
/// Size: 0x0028 (0x0000A8 - 0x0000D0)
class UBakeTexture2DProperties : public UInteractiveToolPropertySet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	CMember(class UTexture2D*)                         SourceTexture                                               OFFSET(get<T>, {0xA8, 8, 0, 0})
	SMember(FString)                                   UVLayer                                                     OFFSET(getStruct<T>, {0xB0, 16, 0, 0})
	CMember(TArray<FString>)                           UVLayerNamesList                                            OFFSET(get<T>, {0xC0, 16, 0, 0})


	/// Functions
	// Function /Script/MeshModelingToolsExp.BakeTexture2DProperties.GetUVLayerNamesFunc
	// TArray<FString> GetUVLayerNamesFunc();                                                                                   // [0xbbb0118] Final|Native|Public|Const 
};

/// Class /Script/MeshModelingToolsExp.BakeMultiTexture2DProperties
/// Size: 0x0040 (0x0000A8 - 0x0000E8)
class UBakeMultiTexture2DProperties : public UInteractiveToolPropertySet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
	CMember(TArray<class UTexture2D*>)                 MaterialIDSourceTextures                                    OFFSET(get<T>, {0xA8, 16, 0, 0})
	SMember(FString)                                   UVLayer                                                     OFFSET(getStruct<T>, {0xB8, 16, 0, 0})
	CMember(TArray<FString>)                           UVLayerNamesList                                            OFFSET(get<T>, {0xC8, 16, 0, 0})
	CMember(TArray<class UTexture2D*>)                 AllSourceTextures                                           OFFSET(get<T>, {0xD8, 16, 0, 0})


	/// Functions
	// Function /Script/MeshModelingToolsExp.BakeMultiTexture2DProperties.GetUVLayerNamesFunc
	// TArray<FString> GetUVLayerNamesFunc();                                                                                   // [0xbca2194] Final|Native|Public|Const 
};

/// Class /Script/MeshModelingToolsExp.BakeVisualizationProperties
/// Size: 0x0010 (0x0000A8 - 0x0000B8)
class UBakeVisualizationProperties : public UInteractiveToolPropertySet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	DMember(bool)                                      bPreviewAsMaterial                                          OFFSET(get<bool>, {0xA8, 1, 0, 0})
	DMember(float)                                     Brightness                                                  OFFSET(get<float>, {0xAC, 4, 0, 0})
	DMember(float)                                     AOMultiplier                                                OFFSET(get<float>, {0xB0, 4, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.ExtrudeMeshSelectionToolBuilder
/// Size: 0x0000 (0x000028 - 0x000028)
class UExtrudeMeshSelectionToolBuilder : public USingleTargetWithSelectionToolBuilder
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/MeshModelingToolsExp.ExtrudeMeshSelectionToolProperties
/// Size: 0x0048 (0x0000A8 - 0x0000F0)
class UExtrudeMeshSelectionToolProperties : public UInteractiveToolPropertySet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	CMember(EExtrudeMeshSelectionInteractionMode)      InputMode                                                   OFFSET(get<T>, {0xA8, 1, 0, 0})
	DMember(double)                                    ExtrudeDistance                                             OFFSET(get<double>, {0xB0, 8, 0, 0})
	CMember(EExtrudeMeshSelectionRegionModifierMode)   RegionMode                                                  OFFSET(get<T>, {0xB8, 1, 0, 0})
	DMember(int32_t)                                   NumSubdivisions                                             OFFSET(get<int32_t>, {0xBC, 4, 0, 0})
	DMember(double)                                    CreaseAngle                                                 OFFSET(get<double>, {0xC0, 8, 0, 0})
	DMember(double)                                    RaycastMaxDistance                                          OFFSET(get<double>, {0xC8, 8, 0, 0})
	DMember(bool)                                      bShellsToSolids                                             OFFSET(get<bool>, {0xD0, 1, 0, 0})
	DMember(bool)                                      bInferGroupsFromNbrs                                        OFFSET(get<bool>, {0xD1, 1, 0, 0})
	DMember(bool)                                      bGroupPerSubdivision                                        OFFSET(get<bool>, {0xD2, 1, 0, 0})
	DMember(bool)                                      bReplaceSelectionGroups                                     OFFSET(get<bool>, {0xD3, 1, 0, 0})
	DMember(double)                                    UVScale                                                     OFFSET(get<double>, {0xD8, 8, 0, 0})
	DMember(bool)                                      bUVIslandPerGroup                                           OFFSET(get<bool>, {0xE0, 1, 0, 0})
	DMember(bool)                                      bInferMaterialID                                            OFFSET(get<bool>, {0xE1, 1, 0, 0})
	DMember(int32_t)                                   SetMaterialID                                               OFFSET(get<int32_t>, {0xE4, 4, 0, 0})
	DMember(bool)                                      bShowInputMaterials                                         OFFSET(get<bool>, {0xE8, 1, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.ExtrudeMeshSelectionTool
/// Size: 0x0748 (0x000128 - 0x000870)
class UExtrudeMeshSelectionTool : public USingleTargetWithSelectionTool
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2160;

public:
	CMember(class UExtrudeMeshSelectionToolProperties*) ExtrudeProperties                                          OFFSET(get<T>, {0x128, 8, 0, 0})
	CMember(class UPreviewMesh*)                       SourcePreview                                               OFFSET(get<T>, {0x850, 8, 0, 0})
	CMember(class UMeshOpPreviewWithBackgroundCompute*) EditCompute                                                OFFSET(get<T>, {0x858, 8, 0, 0})
	CMember(class UCombinedTransformGizmo*)            TransformGizmo                                              OFFSET(get<T>, {0x860, 8, 0, 0})
	CMember(class UTransformProxy*)                    TransformProxy                                              OFFSET(get<T>, {0x868, 8, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.MeshSculptBrushOpProps
/// Size: 0x0000 (0x0000A8 - 0x0000A8)
class UMeshSculptBrushOpProps : public UInteractiveToolPropertySet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
};

/// Class /Script/MeshModelingToolsExp.BaseKelvinletBrushOpProps
/// Size: 0x0010 (0x0000A8 - 0x0000B8)
class UBaseKelvinletBrushOpProps : public UMeshSculptBrushOpProps
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	DMember(float)                                     Stiffness                                                   OFFSET(get<float>, {0xA8, 4, 0, 0})
	DMember(float)                                     Incompressiblity                                            OFFSET(get<float>, {0xAC, 4, 0, 0})
	DMember(int32_t)                                   BrushSteps                                                  OFFSET(get<int32_t>, {0xB0, 4, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.ScaleKelvinletBrushOpProps
/// Size: 0x0008 (0x0000B8 - 0x0000C0)
class UScaleKelvinletBrushOpProps : public UBaseKelvinletBrushOpProps
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	DMember(float)                                     Strength                                                    OFFSET(get<float>, {0xB8, 4, 0, 0})
	DMember(float)                                     Falloff                                                     OFFSET(get<float>, {0xBC, 4, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.PullKelvinletBrushOpProps
/// Size: 0x0008 (0x0000B8 - 0x0000C0)
class UPullKelvinletBrushOpProps : public UBaseKelvinletBrushOpProps
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	DMember(float)                                     Falloff                                                     OFFSET(get<float>, {0xB8, 4, 0, 0})
	DMember(float)                                     Depth                                                       OFFSET(get<float>, {0xBC, 4, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.SharpPullKelvinletBrushOpProps
/// Size: 0x0008 (0x0000B8 - 0x0000C0)
class USharpPullKelvinletBrushOpProps : public UBaseKelvinletBrushOpProps
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	DMember(float)                                     Falloff                                                     OFFSET(get<float>, {0xB8, 4, 0, 0})
	DMember(float)                                     Depth                                                       OFFSET(get<float>, {0xBC, 4, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.TwistKelvinletBrushOpProps
/// Size: 0x0008 (0x0000B8 - 0x0000C0)
class UTwistKelvinletBrushOpProps : public UBaseKelvinletBrushOpProps
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	DMember(float)                                     Strength                                                    OFFSET(get<float>, {0xB8, 4, 0, 0})
	DMember(float)                                     Falloff                                                     OFFSET(get<float>, {0xBC, 4, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.GroupEraseBrushOpProps
/// Size: 0x0048 (0x0000A8 - 0x0000F0)
class UGroupEraseBrushOpProps : public UMeshSculptBrushOpProps
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	DMember(int32_t)                                   Group                                                       OFFSET(get<int32_t>, {0xA8, 4, 0, 0})
	DMember(bool)                                      bOnlyEraseCurrent                                           OFFSET(get<bool>, {0xAC, 1, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.GroupPaintBrushOpProps
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UGroupPaintBrushOpProps : public UMeshSculptBrushOpProps
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	DMember(int32_t)                                   Group                                                       OFFSET(get<int32_t>, {0xA8, 4, 0, 0})
	DMember(bool)                                      bOnlyPaintUngrouped                                         OFFSET(get<bool>, {0xAC, 1, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.InflateBrushOpProps
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UInflateBrushOpProps : public UMeshSculptBrushOpProps
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	DMember(float)                                     Strength                                                    OFFSET(get<float>, {0xA8, 4, 0, 0})
	DMember(float)                                     Falloff                                                     OFFSET(get<float>, {0xAC, 4, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.MoveBrushOpProps
/// Size: 0x0010 (0x0000A8 - 0x0000B8)
class UMoveBrushOpProps : public UMeshSculptBrushOpProps
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	DMember(float)                                     Strength                                                    OFFSET(get<float>, {0xA8, 4, 0, 0})
	DMember(float)                                     Falloff                                                     OFFSET(get<float>, {0xAC, 4, 0, 0})
	DMember(float)                                     Depth                                                       OFFSET(get<float>, {0xB0, 4, 0, 0})
	SMember(FModelingToolsAxisFilter)                  AxisFilters                                                 OFFSET(getStruct<T>, {0xB4, 3, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.PinchBrushOpProps
/// Size: 0x0010 (0x0000A8 - 0x0000B8)
class UPinchBrushOpProps : public UMeshSculptBrushOpProps
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	DMember(float)                                     Strength                                                    OFFSET(get<float>, {0xA8, 4, 0, 0})
	DMember(float)                                     Falloff                                                     OFFSET(get<float>, {0xAC, 4, 0, 0})
	DMember(float)                                     Depth                                                       OFFSET(get<float>, {0xB0, 4, 0, 0})
	DMember(bool)                                      bPerpDamping                                                OFFSET(get<bool>, {0xB4, 1, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.BasePlaneBrushOpProps
/// Size: 0x0000 (0x0000A8 - 0x0000A8)
class UBasePlaneBrushOpProps : public UMeshSculptBrushOpProps
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
};

/// Class /Script/MeshModelingToolsExp.PlaneBrushOpProps
/// Size: 0x0010 (0x0000A8 - 0x0000B8)
class UPlaneBrushOpProps : public UBasePlaneBrushOpProps
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	DMember(float)                                     Strength                                                    OFFSET(get<float>, {0xA8, 4, 0, 0})
	DMember(float)                                     Falloff                                                     OFFSET(get<float>, {0xAC, 4, 0, 0})
	DMember(float)                                     Depth                                                       OFFSET(get<float>, {0xB0, 4, 0, 0})
	CMember(EPlaneBrushSideMode)                       WhichSide                                                   OFFSET(get<T>, {0xB4, 1, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.ViewAlignedPlaneBrushOpProps
/// Size: 0x0010 (0x0000A8 - 0x0000B8)
class UViewAlignedPlaneBrushOpProps : public UBasePlaneBrushOpProps
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	DMember(float)                                     Strength                                                    OFFSET(get<float>, {0xA8, 4, 0, 0})
	DMember(float)                                     Falloff                                                     OFFSET(get<float>, {0xAC, 4, 0, 0})
	DMember(float)                                     Depth                                                       OFFSET(get<float>, {0xB0, 4, 0, 0})
	CMember(EPlaneBrushSideMode)                       WhichSide                                                   OFFSET(get<T>, {0xB4, 1, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.FixedPlaneBrushOpProps
/// Size: 0x0010 (0x0000A8 - 0x0000B8)
class UFixedPlaneBrushOpProps : public UBasePlaneBrushOpProps
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	DMember(float)                                     Strength                                                    OFFSET(get<float>, {0xA8, 4, 0, 0})
	DMember(float)                                     Falloff                                                     OFFSET(get<float>, {0xAC, 4, 0, 0})
	DMember(float)                                     Depth                                                       OFFSET(get<float>, {0xB0, 4, 0, 0})
	CMember(EPlaneBrushSideMode)                       WhichSide                                                   OFFSET(get<T>, {0xB4, 1, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.StandardSculptBrushOpProps
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UStandardSculptBrushOpProps : public UMeshSculptBrushOpProps
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	DMember(float)                                     Strength                                                    OFFSET(get<float>, {0xA8, 4, 0, 0})
	DMember(float)                                     Falloff                                                     OFFSET(get<float>, {0xAC, 4, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.ViewAlignedSculptBrushOpProps
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UViewAlignedSculptBrushOpProps : public UMeshSculptBrushOpProps
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	DMember(float)                                     Strength                                                    OFFSET(get<float>, {0xA8, 4, 0, 0})
	DMember(float)                                     Falloff                                                     OFFSET(get<float>, {0xAC, 4, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.SculptMaxBrushOpProps
/// Size: 0x0018 (0x0000A8 - 0x0000C0)
class USculptMaxBrushOpProps : public UMeshSculptBrushOpProps
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	DMember(float)                                     Strength                                                    OFFSET(get<float>, {0xA8, 4, 0, 0})
	DMember(float)                                     Falloff                                                     OFFSET(get<float>, {0xAC, 4, 0, 0})
	DMember(float)                                     MaxHeight                                                   OFFSET(get<float>, {0xB0, 4, 0, 0})
	DMember(bool)                                      bUseFixedHeight                                             OFFSET(get<bool>, {0xB4, 1, 0, 0})
	DMember(float)                                     FixedHeight                                                 OFFSET(get<float>, {0xB8, 4, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.BaseSmoothBrushOpProps
/// Size: 0x0000 (0x0000A8 - 0x0000A8)
class UBaseSmoothBrushOpProps : public UMeshSculptBrushOpProps
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
};

/// Class /Script/MeshModelingToolsExp.SmoothBrushOpProps
/// Size: 0x0010 (0x0000A8 - 0x0000B8)
class USmoothBrushOpProps : public UBaseSmoothBrushOpProps
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	DMember(float)                                     Strength                                                    OFFSET(get<float>, {0xA8, 4, 0, 0})
	DMember(float)                                     Falloff                                                     OFFSET(get<float>, {0xAC, 4, 0, 0})
	DMember(bool)                                      bPreserveUVFlow                                             OFFSET(get<bool>, {0xB0, 1, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.SecondarySmoothBrushOpProps
/// Size: 0x0010 (0x0000A8 - 0x0000B8)
class USecondarySmoothBrushOpProps : public UBaseSmoothBrushOpProps
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	DMember(float)                                     Strength                                                    OFFSET(get<float>, {0xA8, 4, 0, 0})
	DMember(float)                                     Falloff                                                     OFFSET(get<float>, {0xAC, 4, 0, 0})
	DMember(bool)                                      bPreserveUVFlow                                             OFFSET(get<bool>, {0xB0, 1, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.SmoothFillBrushOpProps
/// Size: 0x0010 (0x0000A8 - 0x0000B8)
class USmoothFillBrushOpProps : public UBaseSmoothBrushOpProps
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	DMember(float)                                     Strength                                                    OFFSET(get<float>, {0xA8, 4, 0, 0})
	DMember(float)                                     Falloff                                                     OFFSET(get<float>, {0xAC, 4, 0, 0})
	DMember(bool)                                      bPreserveUVFlow                                             OFFSET(get<bool>, {0xB0, 1, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.FlattenBrushOpProps
/// Size: 0x0010 (0x0000A8 - 0x0000B8)
class UFlattenBrushOpProps : public UMeshSculptBrushOpProps
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	DMember(float)                                     Strength                                                    OFFSET(get<float>, {0xA8, 4, 0, 0})
	DMember(float)                                     Falloff                                                     OFFSET(get<float>, {0xAC, 4, 0, 0})
	DMember(float)                                     Depth                                                       OFFSET(get<float>, {0xB0, 4, 0, 0})
	CMember(EPlaneBrushSideMode)                       WhichSide                                                   OFFSET(get<T>, {0xB4, 1, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.EraseBrushOpProps
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UEraseBrushOpProps : public UMeshSculptBrushOpProps
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	DMember(float)                                     Strength                                                    OFFSET(get<float>, {0xA8, 4, 0, 0})
	DMember(float)                                     Falloff                                                     OFFSET(get<float>, {0xAC, 4, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.VertexColorBaseBrushOpProps
/// Size: 0x0010 (0x0000A8 - 0x0000B8)
class UVertexColorBaseBrushOpProps : public UMeshSculptBrushOpProps
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	DMember(float)                                     Strength                                                    OFFSET(get<float>, {0xA8, 4, 0, 0})
	DMember(float)                                     Falloff                                                     OFFSET(get<float>, {0xAC, 4, 0, 0})
	CMember(EVertexColorPaintBrushOpBlendMode)         BlendMode                                                   OFFSET(get<T>, {0xB0, 4, 0, 0})
	DMember(bool)                                      bApplyFalloff                                               OFFSET(get<bool>, {0xB4, 1, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.VertexColorPaintBrushOpProps
/// Size: 0x0010 (0x0000B8 - 0x0000C8)
class UVertexColorPaintBrushOpProps : public UVertexColorBaseBrushOpProps
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	SMember(FLinearColor)                              Color                                                       OFFSET(getStruct<T>, {0xB8, 16, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.VertexColorSoftenBrushOpProps
/// Size: 0x0000 (0x0000B8 - 0x0000B8)
class UVertexColorSoftenBrushOpProps : public UVertexColorBaseBrushOpProps
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
};

/// Class /Script/MeshModelingToolsExp.VertexColorSmoothBrushOpProps
/// Size: 0x0000 (0x0000B8 - 0x0000B8)
class UVertexColorSmoothBrushOpProps : public UVertexColorBaseBrushOpProps
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
};

/// Class /Script/MeshModelingToolsExp.OffsetMeshSelectionToolBuilder
/// Size: 0x0000 (0x000028 - 0x000028)
class UOffsetMeshSelectionToolBuilder : public USingleTargetWithSelectionToolBuilder
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/MeshModelingToolsExp.OffsetMeshSelectionToolProperties
/// Size: 0x0038 (0x0000A8 - 0x0000E0)
class UOffsetMeshSelectionToolProperties : public UInteractiveToolPropertySet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	DMember(double)                                    OffsetDistance                                              OFFSET(get<double>, {0xA8, 8, 0, 0})
	CMember(EOffsetMeshSelectionDirectionMode)         Direction                                                   OFFSET(get<T>, {0xB0, 1, 0, 0})
	DMember(int32_t)                                   NumSubdivisions                                             OFFSET(get<int32_t>, {0xB4, 4, 0, 0})
	DMember(double)                                    CreaseAngle                                                 OFFSET(get<double>, {0xB8, 8, 0, 0})
	DMember(bool)                                      bShellsToSolids                                             OFFSET(get<bool>, {0xC0, 1, 0, 0})
	DMember(bool)                                      bInferGroupsFromNbrs                                        OFFSET(get<bool>, {0xC1, 1, 0, 0})
	DMember(bool)                                      bGroupPerSubdivision                                        OFFSET(get<bool>, {0xC2, 1, 0, 0})
	DMember(bool)                                      bReplaceSelectionGroups                                     OFFSET(get<bool>, {0xC3, 1, 0, 0})
	DMember(double)                                    UVScale                                                     OFFSET(get<double>, {0xC8, 8, 0, 0})
	DMember(bool)                                      bUVIslandPerGroup                                           OFFSET(get<bool>, {0xD0, 1, 0, 0})
	DMember(bool)                                      bInferMaterialID                                            OFFSET(get<bool>, {0xD1, 1, 0, 0})
	DMember(int32_t)                                   SetMaterialID                                               OFFSET(get<int32_t>, {0xD4, 4, 0, 0})
	DMember(bool)                                      bShowInputMaterials                                         OFFSET(get<bool>, {0xD8, 1, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.OffsetMeshSelectionTool
/// Size: 0x0738 (0x000128 - 0x000860)
class UOffsetMeshSelectionTool : public USingleTargetWithSelectionTool
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2144;

public:
	CMember(class UOffsetMeshSelectionToolProperties*) OffsetProperties                                            OFFSET(get<T>, {0x128, 8, 0, 0})
	CMember(class UPreviewMesh*)                       SourcePreview                                               OFFSET(get<T>, {0x850, 8, 0, 0})
	CMember(class UMeshOpPreviewWithBackgroundCompute*) EditCompute                                                OFFSET(get<T>, {0x858, 8, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.PatternToolBuilder
/// Size: 0x0008 (0x000028 - 0x000030)
class UPatternToolBuilder : public UMultiSelectionMeshEditingToolBuilder
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/MeshModelingToolsExp.PatternToolSettings
/// Size: 0x0018 (0x0000A8 - 0x0000C0)
class UPatternToolSettings : public UInteractiveToolPropertySet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	DMember(int32_t)                                   Seed                                                        OFFSET(get<int32_t>, {0xA8, 4, 0, 0})
	DMember(bool)                                      bProjectElementsDown                                        OFFSET(get<bool>, {0xAC, 1, 0, 0})
	DMember(float)                                     ProjectionOffset                                            OFFSET(get<float>, {0xB0, 4, 0, 0})
	DMember(bool)                                      bHideSources                                                OFFSET(get<bool>, {0xB4, 1, 0, 0})
	DMember(bool)                                      bUseRelativeTransforms                                      OFFSET(get<bool>, {0xB5, 1, 0, 0})
	DMember(bool)                                      bRandomlyPickElements                                       OFFSET(get<bool>, {0xB6, 1, 0, 0})
	CMember(EPatternToolShape)                         Shape                                                       OFFSET(get<T>, {0xB7, 1, 0, 0})
	CMember(EPatternToolSingleAxis)                    SingleAxis                                                  OFFSET(get<T>, {0xB8, 1, 0, 0})
	CMember(EPatternToolSinglePlane)                   SinglePlane                                                 OFFSET(get<T>, {0xB9, 1, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.PatternTool_BoundingBoxSettings
/// Size: 0x0010 (0x0000A8 - 0x0000B8)
class UPatternTool_BoundingBoxSettings : public UInteractiveToolPropertySet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	DMember(bool)                                      bIgnoreTransforms                                           OFFSET(get<bool>, {0xA8, 1, 0, 0})
	DMember(float)                                     Adjustment                                                  OFFSET(get<float>, {0xAC, 4, 0, 0})
	DMember(bool)                                      bVisualize                                                  OFFSET(get<bool>, {0xB0, 1, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.PatternTool_LinearSettings
/// Size: 0x0020 (0x0000A8 - 0x0000C8)
class UPatternTool_LinearSettings : public UInteractiveToolPropertySet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	CMember(EPatternToolAxisSpacingMode)               SpacingMode                                                 OFFSET(get<T>, {0xA8, 1, 0, 0})
	DMember(int32_t)                                   Count                                                       OFFSET(get<int32_t>, {0xAC, 4, 0, 0})
	DMember(double)                                    StepSize                                                    OFFSET(get<double>, {0xB0, 8, 0, 0})
	DMember(double)                                    Extent                                                      OFFSET(get<double>, {0xB8, 8, 0, 0})
	DMember(bool)                                      bCentered                                                   OFFSET(get<bool>, {0xC0, 1, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.PatternTool_GridSettings
/// Size: 0x0038 (0x0000A8 - 0x0000E0)
class UPatternTool_GridSettings : public UInteractiveToolPropertySet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	CMember(EPatternToolAxisSpacingMode)               SpacingX                                                    OFFSET(get<T>, {0xA8, 1, 0, 0})
	DMember(int32_t)                                   CountX                                                      OFFSET(get<int32_t>, {0xAC, 4, 0, 0})
	DMember(double)                                    StepSizeX                                                   OFFSET(get<double>, {0xB0, 8, 0, 0})
	DMember(double)                                    ExtentX                                                     OFFSET(get<double>, {0xB8, 8, 0, 0})
	DMember(bool)                                      bCenteredX                                                  OFFSET(get<bool>, {0xC0, 1, 0, 0})
	CMember(EPatternToolAxisSpacingMode)               SpacingY                                                    OFFSET(get<T>, {0xC1, 1, 0, 0})
	DMember(int32_t)                                   CountY                                                      OFFSET(get<int32_t>, {0xC4, 4, 0, 0})
	DMember(double)                                    StepSizeY                                                   OFFSET(get<double>, {0xC8, 8, 0, 0})
	DMember(double)                                    ExtentY                                                     OFFSET(get<double>, {0xD0, 8, 0, 0})
	DMember(bool)                                      bCenteredY                                                  OFFSET(get<bool>, {0xD8, 1, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.PatternTool_RadialSettings
/// Size: 0x0038 (0x0000A8 - 0x0000E0)
class UPatternTool_RadialSettings : public UInteractiveToolPropertySet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	CMember(EPatternToolAxisSpacingMode)               SpacingMode                                                 OFFSET(get<T>, {0xA8, 1, 0, 0})
	DMember(int32_t)                                   Count                                                       OFFSET(get<int32_t>, {0xAC, 4, 0, 0})
	DMember(double)                                    StepSize                                                    OFFSET(get<double>, {0xB0, 8, 0, 0})
	DMember(double)                                    Radius                                                      OFFSET(get<double>, {0xB8, 8, 0, 0})
	DMember(double)                                    StartAngle                                                  OFFSET(get<double>, {0xC0, 8, 0, 0})
	DMember(double)                                    EndAngle                                                    OFFSET(get<double>, {0xC8, 8, 0, 0})
	DMember(double)                                    AngleShift                                                  OFFSET(get<double>, {0xD0, 8, 0, 0})
	DMember(bool)                                      bOriented                                                   OFFSET(get<bool>, {0xD8, 1, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.PatternTool_RotationSettings
/// Size: 0x0050 (0x0000A8 - 0x0000F8)
class UPatternTool_RotationSettings : public UInteractiveToolPropertySet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
	DMember(bool)                                      bInterpolate                                                OFFSET(get<bool>, {0xA8, 1, 0, 0})
	DMember(bool)                                      bJitter                                                     OFFSET(get<bool>, {0xA9, 1, 0, 0})
	SMember(FRotator)                                  StartRotation                                               OFFSET(getStruct<T>, {0xB0, 24, 0, 0})
	SMember(FRotator)                                  EndRotation                                                 OFFSET(getStruct<T>, {0xC8, 24, 0, 0})
	SMember(FRotator)                                  Jitter                                                      OFFSET(getStruct<T>, {0xE0, 24, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.PatternTool_TranslationSettings
/// Size: 0x0050 (0x0000A8 - 0x0000F8)
class UPatternTool_TranslationSettings : public UInteractiveToolPropertySet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
	DMember(bool)                                      bInterpolate                                                OFFSET(get<bool>, {0xA8, 1, 0, 0})
	DMember(bool)                                      bJitter                                                     OFFSET(get<bool>, {0xA9, 1, 0, 0})
	SMember(FVector)                                   StartTranslation                                            OFFSET(getStruct<T>, {0xB0, 24, 0, 0})
	SMember(FVector)                                   EndTranslation                                              OFFSET(getStruct<T>, {0xC8, 24, 0, 0})
	SMember(FVector)                                   Jitter                                                      OFFSET(getStruct<T>, {0xE0, 24, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.PatternTool_ScaleSettings
/// Size: 0x0050 (0x0000A8 - 0x0000F8)
class UPatternTool_ScaleSettings : public UInteractiveToolPropertySet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
	DMember(bool)                                      bProportional                                               OFFSET(get<bool>, {0xA8, 1, 0, 0})
	DMember(bool)                                      bInterpolate                                                OFFSET(get<bool>, {0xA9, 1, 0, 0})
	DMember(bool)                                      bJitter                                                     OFFSET(get<bool>, {0xAA, 1, 0, 0})
	SMember(FVector)                                   StartScale                                                  OFFSET(getStruct<T>, {0xB0, 24, 0, 0})
	SMember(FVector)                                   EndScale                                                    OFFSET(getStruct<T>, {0xC8, 24, 0, 0})
	SMember(FVector)                                   Jitter                                                      OFFSET(getStruct<T>, {0xE0, 24, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.PatternTool_OutputSettings
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UPatternTool_OutputSettings : public UInteractiveToolPropertySet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	DMember(bool)                                      bSeparateActors                                             OFFSET(get<bool>, {0xA8, 1, 0, 0})
	DMember(bool)                                      bConvertToDynamic                                           OFFSET(get<bool>, {0xA9, 1, 0, 0})
	DMember(bool)                                      bCreateISMCs                                                OFFSET(get<bool>, {0xAA, 1, 0, 0})
	DMember(bool)                                      bHaveStaticMeshes                                           OFFSET(get<bool>, {0xAB, 1, 0, 0})
	DMember(bool)                                      bEnableCreateISMCs                                          OFFSET(get<bool>, {0xAC, 1, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.PatternTool
/// Size: 0x0400 (0x0000C0 - 0x0004C0)
class UPatternTool : public UMultiSelectionMeshEditingTool
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1216;

public:
	CMember(class UPatternToolSettings*)               Settings                                                    OFFSET(get<T>, {0xC0, 8, 0, 0})
	CMember(class UPatternTool_BoundingBoxSettings*)   BoundingBoxSettings                                         OFFSET(get<T>, {0xC8, 8, 0, 0})
	CMember(class UPatternTool_LinearSettings*)        LinearSettings                                              OFFSET(get<T>, {0xD0, 8, 0, 0})
	CMember(class UPatternTool_GridSettings*)          GridSettings                                                OFFSET(get<T>, {0xD8, 8, 0, 0})
	CMember(class UPatternTool_RadialSettings*)        RadialSettings                                              OFFSET(get<T>, {0xE0, 8, 0, 0})
	CMember(class UPatternTool_RotationSettings*)      RotationSettings                                            OFFSET(get<T>, {0xE8, 8, 0, 0})
	CMember(class UPatternTool_TranslationSettings*)   TranslationSettings                                         OFFSET(get<T>, {0xF0, 8, 0, 0})
	CMember(class UPatternTool_ScaleSettings*)         ScaleSettings                                               OFFSET(get<T>, {0xF8, 8, 0, 0})
	CMember(class UPatternTool_OutputSettings*)        OutputSettings                                              OFFSET(get<T>, {0x158, 8, 0, 0})
	CMember(class UTransformProxy*)                    PatternGizmoProxy                                           OFFSET(get<T>, {0x1A8, 8, 0, 0})
	CMember(class UCombinedTransformGizmo*)            PatternGizmo                                                OFFSET(get<T>, {0x1B0, 8, 0, 0})
	CMember(class UDragAlignmentMechanic*)             DragAlignmentMechanic                                       OFFSET(get<T>, {0x1D0, 8, 0, 0})
	CMember(class UConstructionPlaneMechanic*)         PlaneMechanic                                               OFFSET(get<T>, {0x1D8, 8, 0, 0})
	CMember(TSet<UPrimitiveComponent*>)                AllComponents                                               OFFSET(get<T>, {0x3C8, 80, 0, 0})
	CMember(class UPreviewGeometry*)                   PreviewGeometry                                             OFFSET(get<T>, {0x4B8, 8, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.MeshConstraintProperties
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UMeshConstraintProperties : public UInteractiveToolPropertySet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	DMember(bool)                                      bPreserveSharpEdges                                         OFFSET(get<bool>, {0xA8, 1, 0, 0})
	CMember(EMeshBoundaryConstraint)                   MeshBoundaryConstraint                                      OFFSET(get<T>, {0xA9, 1, 0, 0})
	CMember(EGroupBoundaryConstraint)                  GroupBoundaryConstraint                                     OFFSET(get<T>, {0xAA, 1, 0, 0})
	CMember(EMaterialBoundaryConstraint)               MaterialBoundaryConstraint                                  OFFSET(get<T>, {0xAB, 1, 0, 0})
	DMember(bool)                                      bPreventNormalFlips                                         OFFSET(get<bool>, {0xAC, 1, 0, 0})
	DMember(bool)                                      bPreventTinyTriangles                                       OFFSET(get<bool>, {0xAD, 1, 0, 0})


	/// Functions
	// Function /Script/MeshModelingToolsExp.MeshConstraintProperties.IsPreventTinyTrianglesEnabled
	// bool IsPreventTinyTrianglesEnabled();                                                                                    // [0x66d60a8] Native|Protected|Const 
	// Function /Script/MeshModelingToolsExp.MeshConstraintProperties.IsPreventNormalFlipsEnabled
	// bool IsPreventNormalFlipsEnabled();                                                                                      // [0x3967494] Native|Protected|Const 
};

/// Class /Script/MeshModelingToolsExp.RemeshProperties
/// Size: 0x0008 (0x0000B0 - 0x0000B8)
class URemeshProperties : public UMeshConstraintProperties
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	DMember(float)                                     SmoothingStrength                                           OFFSET(get<float>, {0xB0, 4, 0, 0})
	DMember(bool)                                      bFlips                                                      OFFSET(get<bool>, {0xB4, 1, 0, 0})
	DMember(bool)                                      bSplits                                                     OFFSET(get<bool>, {0xB5, 1, 0, 0})
	DMember(bool)                                      bCollapses                                                  OFFSET(get<bool>, {0xB6, 1, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.RevolveSplineToolProperties
/// Size: 0x0050 (0x000118 - 0x000168)
class URevolveSplineToolProperties : public URevolveProperties
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 360;

public:
	CMember(ERevolveSplineSampleMode)                  SampleMode                                                  OFFSET(get<T>, {0x118, 1, 0, 0})
	DMember(double)                                    ErrorTolerance                                              OFFSET(get<double>, {0x120, 8, 0, 0})
	DMember(double)                                    MaxSampleDistance                                           OFFSET(get<double>, {0x128, 8, 0, 0})
	CMember(ERevolvePropertiesCapFillMode)             CapFillMode                                                 OFFSET(get<T>, {0x130, 1, 0, 0})
	DMember(bool)                                      bClosePathToAxis                                            OFFSET(get<bool>, {0x131, 1, 0, 0})
	SMember(FVector)                                   AxisOrigin                                                  OFFSET(getStruct<T>, {0x138, 24, 0, 0})
	SMember(FVector2D)                                 AxisOrientation                                             OFFSET(getStruct<T>, {0x150, 16, 0, 0})
	DMember(bool)                                      bResetAxisOnStart                                           OFFSET(get<bool>, {0x160, 1, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.RevolveSplineToolActionPropertySet
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class URevolveSplineToolActionPropertySet : public UInteractiveToolPropertySet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:


	/// Functions
	// Function /Script/MeshModelingToolsExp.RevolveSplineToolActionPropertySet.ResetAxis
	// void ResetAxis();                                                                                                        // [0xbcb93f0] Final|Native|Public  
};

/// Class /Script/MeshModelingToolsExp.RevolveSplineTool
/// Size: 0x00E0 (0x0000A0 - 0x000180)
class URevolveSplineTool : public UInteractiveTool
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 384;

public:
	CMember(class URevolveSplineToolProperties*)       Settings                                                    OFFSET(get<T>, {0xB0, 8, 0, 0})
	CMember(class UNewMeshMaterialProperties*)         MaterialProperties                                          OFFSET(get<T>, {0xB8, 8, 0, 0})
	CMember(class UCreateMeshObjectTypeProperties*)    OutputTypeProperties                                        OFFSET(get<T>, {0xC0, 8, 0, 0})
	CMember(class URevolveSplineToolActionPropertySet*) ToolActions                                                OFFSET(get<T>, {0xC8, 8, 0, 0})
	CMember(class UMeshOpPreviewWithBackgroundCompute*) Preview                                                    OFFSET(get<T>, {0xD0, 8, 0, 0})
	CMember(class UConstructionPlaneMechanic*)         PlaneMechanic                                               OFFSET(get<T>, {0xD8, 8, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.RevolveSplineToolBuilder
/// Size: 0x0000 (0x000028 - 0x000028)
class URevolveSplineToolBuilder : public UInteractiveToolBuilder
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/MeshModelingToolsExp.AddPatchToolBuilder
/// Size: 0x0000 (0x000028 - 0x000028)
class UAddPatchToolBuilder : public UInteractiveToolBuilder
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/MeshModelingToolsExp.AddPatchToolProperties
/// Size: 0x0010 (0x0000A8 - 0x0000B8)
class UAddPatchToolProperties : public UInteractiveToolPropertySet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	DMember(float)                                     Width                                                       OFFSET(get<float>, {0xA8, 4, 0, 0})
	DMember(float)                                     Rotation                                                    OFFSET(get<float>, {0xAC, 4, 0, 0})
	DMember(int32_t)                                   Subdivisions                                                OFFSET(get<int32_t>, {0xB0, 4, 0, 0})
	DMember(float)                                     Shift                                                       OFFSET(get<float>, {0xB4, 4, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.AddPatchTool
/// Size: 0x0088 (0x0000A8 - 0x000130)
class UAddPatchTool : public USingleClickTool
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	CMember(class UAddPatchToolProperties*)            ShapeSettings                                               OFFSET(get<T>, {0xB0, 8, 0, 0})
	CMember(class UNewMeshMaterialProperties*)         MaterialProperties                                          OFFSET(get<T>, {0xB8, 8, 0, 0})
	CMember(class UPreviewMesh*)                       PreviewMesh                                                 OFFSET(get<T>, {0xC0, 8, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.AlignObjectsToolBuilder
/// Size: 0x0000 (0x000028 - 0x000028)
class UAlignObjectsToolBuilder : public UMultiSelectionMeshEditingToolBuilder
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/MeshModelingToolsExp.AlignObjectsToolProperties
/// Size: 0x0010 (0x0000A8 - 0x0000B8)
class UAlignObjectsToolProperties : public UInteractiveToolPropertySet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	CMember(EAlignObjectsAlignTypes)                   AlignType                                                   OFFSET(get<T>, {0xA8, 4, 0, 0})
	CMember(EAlignObjectsAlignToOptions)               AlignTo                                                     OFFSET(get<T>, {0xAC, 4, 0, 0})
	CMember(EAlignObjectsBoxPoint)                     BoxPosition                                                 OFFSET(get<T>, {0xB0, 4, 0, 0})
	DMember(bool)                                      bAlignX                                                     OFFSET(get<bool>, {0xB4, 1, 0, 0})
	DMember(bool)                                      bAlignY                                                     OFFSET(get<bool>, {0xB5, 1, 0, 0})
	DMember(bool)                                      bAlignZ                                                     OFFSET(get<bool>, {0xB6, 1, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.AlignObjectsTool
/// Size: 0x00A0 (0x0000C0 - 0x000160)
class UAlignObjectsTool : public UMultiSelectionMeshEditingTool
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
	CMember(class UAlignObjectsToolProperties*)        AlignProps                                                  OFFSET(get<T>, {0xC8, 8, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.BakeMeshAttributeMapsToolBuilder
/// Size: 0x0000 (0x000028 - 0x000028)
class UBakeMeshAttributeMapsToolBuilder : public UMultiSelectionMeshEditingToolBuilder
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/MeshModelingToolsExp.BakeMeshAttributeMapsToolProperties
/// Size: 0x0090 (0x0000A8 - 0x000138)
class UBakeMeshAttributeMapsToolProperties : public UInteractiveToolPropertySet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 312;

public:
	DMember(int32_t)                                   MapTypes                                                    OFFSET(get<int32_t>, {0xA8, 4, 0, 0})
	SMember(FString)                                   MapPreview                                                  OFFSET(getStruct<T>, {0xB0, 16, 0, 0})
	CMember(EBakeTextureResolution)                    Resolution                                                  OFFSET(get<T>, {0xC0, 4, 0, 0})
	CMember(EBakeTextureBitDepth)                      BitDepth                                                    OFFSET(get<T>, {0xC4, 4, 0, 0})
	CMember(EBakeTextureSamplesPerPixel)               SamplesPerPixel                                             OFFSET(get<T>, {0xC8, 4, 0, 0})
	CMember(class UTexture2D*)                         SampleFilterMask                                            OFFSET(get<T>, {0xD0, 8, 0, 0})
	CMember(TArray<FString>)                           MapPreviewNamesList                                         OFFSET(get<T>, {0xD8, 16, 0, 0})


	/// Functions
	// Function /Script/MeshModelingToolsExp.BakeMeshAttributeMapsToolProperties.GetMapPreviewNamesFunc
	// TArray<FString> GetMapPreviewNamesFunc();                                                                                // [0xbcb93b8] Final|Native|Public  
};

/// Class /Script/MeshModelingToolsExp.BakeMeshAttributeTool
/// Size: 0x00F0 (0x0000C0 - 0x0001B0)
class UBakeMeshAttributeTool : public UMultiSelectionMeshEditingTool
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 432;

public:
	CMember(class UBakeOcclusionMapToolProperties*)    OcclusionSettings                                           OFFSET(get<T>, {0xD0, 8, 0, 0})
	CMember(class UBakeCurvatureMapToolProperties*)    CurvatureSettings                                           OFFSET(get<T>, {0xD8, 8, 0, 0})
	CMember(class UBakeTexture2DProperties*)           TextureSettings                                             OFFSET(get<T>, {0xE0, 8, 0, 0})
	CMember(class UBakeMultiTexture2DProperties*)      MultiTextureSettings                                        OFFSET(get<T>, {0xE8, 8, 0, 0})
	CMember(class UMaterialInstanceDynamic*)           WorkingPreviewMaterial                                      OFFSET(get<T>, {0xF0, 8, 0, 0})
	CMember(class UMaterialInstanceDynamic*)           ErrorPreviewMaterial                                        OFFSET(get<T>, {0xF8, 8, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.BakeMeshAttributeMapsToolBase
/// Size: 0x0178 (0x0001B0 - 0x000328)
class UBakeMeshAttributeMapsToolBase : public UBakeMeshAttributeTool
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 808;

public:
	CMember(class UBakeVisualizationProperties*)       VisualizationProps                                          OFFSET(get<T>, {0x1B8, 8, 0, 0})
	CMember(class UPreviewMesh*)                       PreviewMesh                                                 OFFSET(get<T>, {0x1C0, 8, 0, 0})
	CMember(class UMaterialInstanceDynamic*)           PreviewMaterial                                             OFFSET(get<T>, {0x1C8, 8, 0, 0})
	CMember(class UMaterialInstanceDynamic*)           BentNormalPreviewMaterial                                   OFFSET(get<T>, {0x1D0, 8, 0, 0})
	CMember(TMap<EBakeMapType, UTexture2D*>)           CachedMaps                                                  OFFSET(get<T>, {0x228, 80, 0, 0})
	CMember(class UTexture2D*)                         EmptyNormalMap                                              OFFSET(get<T>, {0x310, 8, 0, 0})
	CMember(class UTexture2D*)                         EmptyColorMapBlack                                          OFFSET(get<T>, {0x318, 8, 0, 0})
	CMember(class UTexture2D*)                         EmptyColorMapWhite                                          OFFSET(get<T>, {0x320, 8, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.BakeMeshAttributeMapsTool
/// Size: 0x0070 (0x000328 - 0x000398)
class UBakeMeshAttributeMapsTool : public UBakeMeshAttributeMapsToolBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 920;

public:
	CMember(class UBakeInputMeshProperties*)           InputMeshSettings                                           OFFSET(get<T>, {0x328, 8, 0, 0})
	CMember(class UBakeMeshAttributeMapsToolProperties*) Settings                                                  OFFSET(get<T>, {0x330, 8, 0, 0})
	CMember(class UBakeMeshAttributeMapsResultToolProperties*) ResultSettings                                      OFFSET(get<T>, {0x338, 8, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.BakeMeshAttributeMapsResultToolProperties
/// Size: 0x0050 (0x0000A8 - 0x0000F8)
class UBakeMeshAttributeMapsResultToolProperties : public UInteractiveToolPropertySet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
	CMember(TMap<EBakeMapType, UTexture2D*>)           Result                                                      OFFSET(get<T>, {0xA8, 80, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.BakeMeshAttributeVertexToolBuilder
/// Size: 0x0000 (0x000028 - 0x000028)
class UBakeMeshAttributeVertexToolBuilder : public UMultiSelectionMeshEditingToolBuilder
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/MeshModelingToolsExp.BakeMeshAttributeVertexToolProperties
/// Size: 0x0020 (0x0000A8 - 0x0000C8)
class UBakeMeshAttributeVertexToolProperties : public UInteractiveToolPropertySet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	CMember(EBakeVertexOutput)                         OutputMode                                                  OFFSET(get<T>, {0xA8, 4, 0, 0})
	DMember(int32_t)                                   OutputType                                                  OFFSET(get<int32_t>, {0xAC, 4, 0, 0})
	DMember(int32_t)                                   OutputTypeR                                                 OFFSET(get<int32_t>, {0xB0, 4, 0, 0})
	DMember(int32_t)                                   OutputTypeG                                                 OFFSET(get<int32_t>, {0xB4, 4, 0, 0})
	DMember(int32_t)                                   OutputTypeB                                                 OFFSET(get<int32_t>, {0xB8, 4, 0, 0})
	DMember(int32_t)                                   OutputTypeA                                                 OFFSET(get<int32_t>, {0xBC, 4, 0, 0})
	CMember(EBakeVertexChannel)                        PreviewMode                                                 OFFSET(get<T>, {0xC0, 4, 0, 0})
	DMember(bool)                                      bSplitAtNormalSeams                                         OFFSET(get<bool>, {0xC4, 1, 0, 0})
	DMember(bool)                                      bSplitAtUVSeams                                             OFFSET(get<bool>, {0xC5, 1, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.BakeMeshAttributeVertexTool
/// Size: 0x0100 (0x0001B0 - 0x0002B0)
class UBakeMeshAttributeVertexTool : public UBakeMeshAttributeTool
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 688;

public:
	CMember(class UBakeInputMeshProperties*)           InputMeshSettings                                           OFFSET(get<T>, {0x1B8, 8, 0, 0})
	CMember(class UBakeMeshAttributeVertexToolProperties*) Settings                                                OFFSET(get<T>, {0x1C0, 8, 0, 0})
	CMember(class UPreviewMesh*)                       PreviewMesh                                                 OFFSET(get<T>, {0x1C8, 8, 0, 0})
	CMember(class UMaterialInstanceDynamic*)           PreviewMaterial                                             OFFSET(get<T>, {0x1D0, 8, 0, 0})
	CMember(class UMaterialInstanceDynamic*)           PreviewAlphaMaterial                                        OFFSET(get<T>, {0x1D8, 8, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.BakeMultiMeshAttributeMapsToolBuilder
/// Size: 0x0000 (0x000028 - 0x000028)
class UBakeMultiMeshAttributeMapsToolBuilder : public UMultiSelectionMeshEditingToolBuilder
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/MeshModelingToolsExp.BakeMultiMeshAttributeMapsToolProperties
/// Size: 0x0090 (0x0000A8 - 0x000138)
class UBakeMultiMeshAttributeMapsToolProperties : public UInteractiveToolPropertySet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 312;

public:
	DMember(int32_t)                                   MapTypes                                                    OFFSET(get<int32_t>, {0xA8, 4, 0, 0})
	SMember(FString)                                   MapPreview                                                  OFFSET(getStruct<T>, {0xB0, 16, 0, 0})
	CMember(EBakeTextureResolution)                    Resolution                                                  OFFSET(get<T>, {0xC0, 4, 0, 0})
	CMember(EBakeTextureBitDepth)                      BitDepth                                                    OFFSET(get<T>, {0xC4, 4, 0, 0})
	CMember(EBakeTextureSamplesPerPixel)               SamplesPerPixel                                             OFFSET(get<T>, {0xC8, 4, 0, 0})
	CMember(class UTexture2D*)                         SampleFilterMask                                            OFFSET(get<T>, {0xD0, 8, 0, 0})
	CMember(TArray<FString>)                           MapPreviewNamesList                                         OFFSET(get<T>, {0xD8, 16, 0, 0})


	/// Functions
	// Function /Script/MeshModelingToolsExp.BakeMultiMeshAttributeMapsToolProperties.GetMapPreviewNamesFunc
	// TArray<FString> GetMapPreviewNamesFunc();                                                                                // [0xbcb93b8] Final|Native|Public  
};

/// Class /Script/MeshModelingToolsExp.BakeMultiMeshInputToolProperties
/// Size: 0x0050 (0x0000A8 - 0x0000F8)
class UBakeMultiMeshInputToolProperties : public UInteractiveToolPropertySet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
	CMember(class UStaticMesh*)                        TargetStaticMesh                                            OFFSET(get<T>, {0xA8, 8, 0, 0})
	CMember(class USkeletalMesh*)                      TargetSkeletalMesh                                          OFFSET(get<T>, {0xB0, 8, 0, 0})
	CMember(class AActor*)                             TargetDynamicMesh                                           OFFSET(get<T>, {0xB8, 8, 0, 0})
	SMember(FString)                                   TargetUVLayer                                               OFFSET(getStruct<T>, {0xC0, 16, 0, 0})
	CMember(TArray<FBakeMultiMeshDetailProperties>)    SourceMeshes                                                OFFSET(get<T>, {0xD0, 16, 0, 0})
	DMember(float)                                     ProjectionDistance                                          OFFSET(get<float>, {0xE0, 4, 0, 0})
	CMember(TArray<FString>)                           TargetUVLayerNamesList                                      OFFSET(get<T>, {0xE8, 16, 0, 0})


	/// Functions
	// Function /Script/MeshModelingToolsExp.BakeMultiMeshInputToolProperties.GetTargetUVLayerNamesFunc
	// TArray<FString> GetTargetUVLayerNamesFunc();                                                                             // [0xbcb93d4] Final|Native|Public|Const 
};

/// Class /Script/MeshModelingToolsExp.BakeMultiMeshAttributeMapsTool
/// Size: 0x00A8 (0x000328 - 0x0003D0)
class UBakeMultiMeshAttributeMapsTool : public UBakeMeshAttributeMapsToolBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 976;

public:
	CMember(class UBakeMultiMeshAttributeMapsToolProperties*) Settings                                             OFFSET(get<T>, {0x328, 8, 0, 0})
	CMember(class UBakeMultiMeshInputToolProperties*)  InputMeshSettings                                           OFFSET(get<T>, {0x330, 8, 0, 0})
	CMember(class UBakeMeshAttributeMapsResultToolProperties*) ResultSettings                                      OFFSET(get<T>, {0x338, 8, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.BakeTransformToolBuilder
/// Size: 0x0000 (0x000028 - 0x000028)
class UBakeTransformToolBuilder : public UMultiSelectionMeshEditingToolBuilder
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/MeshModelingToolsExp.BakeTransformToolProperties
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UBakeTransformToolProperties : public UInteractiveToolPropertySet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	DMember(bool)                                      bApplyToAllLODs                                             OFFSET(get<bool>, {0xA8, 1, 0, 0})
	DMember(bool)                                      bBakeRotation                                               OFFSET(get<bool>, {0xA9, 1, 0, 0})
	CMember(EBakeScaleMethod)                          BakeScale                                                   OFFSET(get<T>, {0xAA, 1, 0, 0})
	DMember(bool)                                      bRecenterPivot                                              OFFSET(get<bool>, {0xAB, 1, 0, 0})
	DMember(bool)                                      bAllowNoScale                                               OFFSET(get<bool>, {0xAC, 1, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.BakeTransformTool
/// Size: 0x0020 (0x0000C0 - 0x0000E0)
class UBakeTransformTool : public UMultiSelectionMeshEditingTool
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	CMember(class UBakeTransformToolProperties*)       BasicProperties                                             OFFSET(get<T>, {0xC8, 8, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.ConvertMeshesToolBuilder
/// Size: 0x0000 (0x000028 - 0x000028)
class UConvertMeshesToolBuilder : public UInteractiveToolBuilder
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/MeshModelingToolsExp.ConvertMeshesToolProperties
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UConvertMeshesToolProperties : public UInteractiveToolPropertySet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	DMember(bool)                                      bTransferMaterials                                          OFFSET(get<bool>, {0xA8, 1, 0, 0})
	DMember(bool)                                      bShowTransferMaterials                                      OFFSET(get<bool>, {0xA9, 1, 0, 0})
	DMember(bool)                                      bTransferCollision                                          OFFSET(get<bool>, {0xAA, 1, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.ConvertMeshesTool
/// Size: 0x0030 (0x0000A0 - 0x0000D0)
class UConvertMeshesTool : public UInteractiveTool
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	CMember(class UConvertMeshesToolProperties*)       BasicProperties                                             OFFSET(get<T>, {0xA8, 8, 0, 0})
	CMember(class UCreateMeshObjectTypeProperties*)    OutputTypeProperties                                        OFFSET(get<T>, {0xB0, 8, 0, 0})
	CMember(TArray<TWeakObjectPtr<UPrimitiveComponent*>>) Inputs                                                   OFFSET(get<T>, {0xB8, 16, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.ConvertToPolygonsToolBuilder
/// Size: 0x0000 (0x000028 - 0x000028)
class UConvertToPolygonsToolBuilder : public USingleTargetWithSelectionToolBuilder
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/MeshModelingToolsExp.ConvertToPolygonsToolProperties
/// Size: 0x0030 (0x0000A8 - 0x0000D8)
class UConvertToPolygonsToolProperties : public UInteractiveToolPropertySet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	CMember(EConvertToPolygonsMode)                    ConversionMode                                              OFFSET(get<T>, {0xA8, 4, 0, 0})
	DMember(float)                                     AngleTolerance                                              OFFSET(get<float>, {0xAC, 4, 0, 0})
	DMember(bool)                                      bUseAverageGroupNormal                                      OFFSET(get<bool>, {0xB0, 1, 0, 0})
	DMember(int32_t)                                   NumPoints                                                   OFFSET(get<int32_t>, {0xB4, 4, 0, 0})
	DMember(bool)                                      bSplitExisting                                              OFFSET(get<bool>, {0xB8, 1, 0, 0})
	DMember(bool)                                      bNormalWeighted                                             OFFSET(get<bool>, {0xB9, 1, 0, 0})
	DMember(float)                                     NormalWeighting                                             OFFSET(get<float>, {0xBC, 4, 0, 0})
	DMember(float)                                     QuadAdjacencyWeight                                         OFFSET(get<float>, {0xC0, 4, 0, 0})
	DMember(float)                                     QuadMetricClamp                                             OFFSET(get<float>, {0xC4, 4, 0, 0})
	DMember(int32_t)                                   QuadSearchRounds                                            OFFSET(get<int32_t>, {0xC8, 4, 0, 0})
	DMember(bool)                                      bRespectUVSeams                                             OFFSET(get<bool>, {0xCC, 1, 0, 0})
	DMember(bool)                                      bRespectHardNormals                                         OFFSET(get<bool>, {0xCD, 1, 0, 0})
	DMember(int32_t)                                   MinGroupSize                                                OFFSET(get<int32_t>, {0xD0, 4, 0, 0})
	DMember(bool)                                      bCalculateNormals                                           OFFSET(get<bool>, {0xD4, 1, 0, 0})
	DMember(bool)                                      bShowGroupColors                                            OFFSET(get<bool>, {0xD5, 1, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.OutputPolygroupLayerProperties
/// Size: 0x0030 (0x0000A8 - 0x0000D8)
class UOutputPolygroupLayerProperties : public UInteractiveToolPropertySet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	SMember(FName)                                     GroupLayer                                                  OFFSET(getStruct<T>, {0xA8, 4, 0, 0})
	CMember(TArray<FString>)                           OptionsList                                                 OFFSET(get<T>, {0xB0, 16, 0, 0})
	DMember(bool)                                      bShowNewLayerName                                           OFFSET(get<bool>, {0xC0, 1, 0, 0})
	SMember(FString)                                   NewLayerName                                                OFFSET(getStruct<T>, {0xC8, 16, 0, 0})


	/// Functions
	// Function /Script/MeshModelingToolsExp.OutputPolygroupLayerProperties.GetGroupOptionsList
	// TArray<FString> GetGroupOptionsList();                                                                                   // [0xbbb00dc] Final|Native|Public  
};

/// Class /Script/MeshModelingToolsExp.ConvertToPolygonsOperatorFactory
/// Size: 0x0010 (0x000028 - 0x000038)
class UConvertToPolygonsOperatorFactory : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(class UConvertToPolygonsTool*)             ConvertToPolygonsTool                                       OFFSET(get<T>, {0x30, 8, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.ConvertToPolygonsTool
/// Size: 0x0098 (0x000128 - 0x0001C0)
class UConvertToPolygonsTool : public USingleTargetWithSelectionTool
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 448;

public:
	CMember(class UConvertToPolygonsToolProperties*)   Settings                                                    OFFSET(get<T>, {0x128, 8, 0, 0})
	CMember(class UPolygroupLayersProperties*)         CopyFromLayerProperties                                     OFFSET(get<T>, {0x130, 8, 0, 0})
	CMember(class UOutputPolygroupLayerProperties*)    OutputProperties                                            OFFSET(get<T>, {0x138, 8, 0, 0})
	CMember(class UMeshOpPreviewWithBackgroundCompute*) PreviewCompute                                             OFFSET(get<T>, {0x140, 8, 0, 0})
	CMember(class UPreviewGeometry*)                   PreviewGeometry                                             OFFSET(get<T>, {0x148, 8, 0, 0})
	CMember(class UPreviewMesh*)                       UnmodifiedAreaPreviewMesh                                   OFFSET(get<T>, {0x150, 8, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.CubeGridToolBuilder
/// Size: 0x0008 (0x000028 - 0x000030)
class UCubeGridToolBuilder : public UInteractiveToolWithToolTargetsBuilder
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/MeshModelingToolsExp.CubeGridToolProperties
/// Size: 0x0100 (0x0000A8 - 0x0001A8)
class UCubeGridToolProperties : public UInteractiveToolPropertySet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 424;

public:
	SMember(FVector)                                   GridFrameOrigin                                             OFFSET(getStruct<T>, {0xA8, 24, 0, 0})
	SMember(FRotator)                                  GridFrameOrientation                                        OFFSET(getStruct<T>, {0xC0, 24, 0, 0})
	DMember(bool)                                      bShowGizmo                                                  OFFSET(get<bool>, {0xD8, 1, 0, 0})
	DMember(char)                                      GridPower                                                   OFFSET(get<char>, {0xE8, 1, 0, 0})
	DMember(double)                                    CurrentBlockSize                                            OFFSET(get<double>, {0xF0, 8, 0, 0})
	DMember(int32_t)                                   BlocksPerStep                                               OFFSET(get<int32_t>, {0xF8, 4, 0, 0})
	DMember(bool)                                      bPowerOfTwoBlockSizes                                       OFFSET(get<bool>, {0xFC, 1, 0, 0})
	DMember(double)                                    BlockBaseSize                                               OFFSET(get<double>, {0x100, 8, 0, 0})
	DMember(bool)                                      bCrosswiseDiagonal                                          OFFSET(get<bool>, {0x108, 1, 0, 0})
	DMember(bool)                                      bKeepSideGroups                                             OFFSET(get<bool>, {0x109, 1, 0, 0})
	DMember(bool)                                      bShowSelectionMeasurements                                  OFFSET(get<bool>, {0x10A, 1, 0, 0})
	DMember(double)                                    PlaneTolerance                                              OFFSET(get<double>, {0x110, 8, 0, 0})
	DMember(bool)                                      bHitUnrelatedGeometry                                       OFFSET(get<bool>, {0x118, 1, 0, 0})
	DMember(bool)                                      bHitGridGroundPlaneIfCloser                                 OFFSET(get<bool>, {0x119, 1, 0, 0})
	CMember(ECubeGridToolFaceSelectionMode)            FaceSelectionMode                                           OFFSET(get<T>, {0x11C, 4, 0, 0})
	SMember(FString)                                   ToggleCornerMode                                            OFFSET(getStruct<T>, {0x120, 16, 0, 0})
	SMember(FString)                                   PushPull                                                    OFFSET(getStruct<T>, {0x130, 16, 0, 0})
	SMember(FString)                                   ResizeGrid                                                  OFFSET(getStruct<T>, {0x140, 16, 0, 0})
	SMember(FString)                                   FlipSelection                                               OFFSET(getStruct<T>, {0x160, 16, 0, 0})
	SMember(FString)                                   GridGizmo                                                   OFFSET(getStruct<T>, {0x170, 16, 0, 0})
	SMember(FString)                                   QuickShiftGizmo                                             OFFSET(getStruct<T>, {0x180, 16, 0, 0})
	SMember(FString)                                   AlignGizmo                                                  OFFSET(getStruct<T>, {0x190, 16, 0, 0})
	DMember(bool)                                      bInCornerMode                                               OFFSET(get<bool>, {0x1A0, 1, 0, 0})
	DMember(bool)                                      bAllowedToEditGrid                                          OFFSET(get<bool>, {0x1A1, 1, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.CubeGridToolActions
/// Size: 0x0010 (0x0000A8 - 0x0000B8)
class UCubeGridToolActions : public UInteractiveToolPropertySet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	CMember(class AActor*)                             GridSourceActor                                             OFFSET(get<T>, {0xB0, 8, 0, 0})


	/// Functions
	// Function /Script/MeshModelingToolsExp.CubeGridToolActions.SlideForward
	// void SlideForward();                                                                                                     // [0xbcef1b0] Final|Native|Public  
	// Function /Script/MeshModelingToolsExp.CubeGridToolActions.SlideBack
	// void SlideBack();                                                                                                        // [0xbcef198] Final|Native|Public  
	// Function /Script/MeshModelingToolsExp.CubeGridToolActions.ResetGridFromActor
	// void ResetGridFromActor();                                                                                               // [0xbcef168] Final|Native|Public  
	// Function /Script/MeshModelingToolsExp.CubeGridToolActions.Push
	// void Push();                                                                                                             // [0xbcef150] Final|Native|Public  
	// Function /Script/MeshModelingToolsExp.CubeGridToolActions.Pull
	// void Pull();                                                                                                             // [0xbcef138] Final|Native|Public  
	// Function /Script/MeshModelingToolsExp.CubeGridToolActions.Flip
	// void Flip();                                                                                                             // [0xbcef0b4] Final|Native|Public  
	// Function /Script/MeshModelingToolsExp.CubeGridToolActions.CornerMode
	// void CornerMode();                                                                                                       // [0xbcef06c] Final|Native|Public  
	// Function /Script/MeshModelingToolsExp.CubeGridToolActions.AcceptAndStartNew
	// void AcceptAndStartNew();                                                                                                // [0xbcef00c] Final|Native|Public  
};

/// Class /Script/MeshModelingToolsExp.CubeGridTool
/// Size: 0x0580 (0x0000A0 - 0x000620)
class UCubeGridTool : public UInteractiveTool
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1568;

public:
	CMember(class UCombinedTransformGizmo*)            GridGizmo                                                   OFFSET(get<T>, {0xC8, 8, 0, 0})
	CMember(class UDragAlignmentMechanic*)             GridGizmoAlignmentMechanic                                  OFFSET(get<T>, {0xD0, 8, 0, 0})
	CMember(class UTransformProxy*)                    GridGizmoTransformProxy                                     OFFSET(get<T>, {0xD8, 8, 0, 0})
	CMember(class UPreviewGeometry*)                   LineSets                                                    OFFSET(get<T>, {0xE0, 8, 0, 0})
	CMember(class UClickDragInputBehavior*)            ClickDragBehavior                                           OFFSET(get<T>, {0xE8, 8, 0, 0})
	CMember(class UMouseHoverBehavior*)                HoverBehavior                                               OFFSET(get<T>, {0xF0, 8, 0, 0})
	CMember(class ULocalSingleClickInputBehavior*)     CtrlMiddleClickBehavior                                     OFFSET(get<T>, {0xF8, 8, 0, 0})
	CMember(class ULocalClickDragInputBehavior*)       MiddleClickDragBehavior                                     OFFSET(get<T>, {0x100, 8, 0, 0})
	CMember(class UCubeGridToolProperties*)            Settings                                                    OFFSET(get<T>, {0x108, 8, 0, 0})
	CMember(class UCubeGridToolActions*)               ToolActions                                                 OFFSET(get<T>, {0x110, 8, 0, 0})
	CMember(class UNewMeshMaterialProperties*)         MaterialProperties                                          OFFSET(get<T>, {0x118, 8, 0, 0})
	CMember(class UCreateMeshObjectTypeProperties*)    OutputTypeProperties                                        OFFSET(get<T>, {0x120, 8, 0, 0})
	CMember(class UToolTarget*)                        Target                                                      OFFSET(get<T>, {0x128, 8, 0, 0})
	CMember(class UMeshOpPreviewWithBackgroundCompute*) Preview                                                    OFFSET(get<T>, {0x2B0, 8, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.DeformMeshPolygonsToolBuilder
/// Size: 0x0000 (0x000030 - 0x000030)
class UDeformMeshPolygonsToolBuilder : public UMeshSurfacePointMeshEditingToolBuilder
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/MeshModelingToolsExp.DeformMeshPolygonsTransformProperties
/// Size: 0x0020 (0x0000A8 - 0x0000C8)
class UDeformMeshPolygonsTransformProperties : public UInteractiveToolPropertySet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	CMember(EGroupTopologyDeformationStrategy)         DeformationStrategy                                         OFFSET(get<T>, {0xA8, 1, 0, 0})
	CMember(EQuickTransformerMode)                     TransformMode                                               OFFSET(get<T>, {0xA9, 1, 0, 0})
	DMember(bool)                                      bSelectFaces                                                OFFSET(get<bool>, {0xAA, 1, 0, 0})
	DMember(bool)                                      bSelectEdges                                                OFFSET(get<bool>, {0xAB, 1, 0, 0})
	DMember(bool)                                      bSelectVertices                                             OFFSET(get<bool>, {0xAC, 1, 0, 0})
	DMember(bool)                                      bShowWireframe                                              OFFSET(get<bool>, {0xAD, 1, 0, 0})
	CMember(EWeightScheme)                             SelectedWeightScheme                                        OFFSET(get<T>, {0xB0, 4, 0, 0})
	DMember(double)                                    HandleWeight                                                OFFSET(get<double>, {0xB8, 8, 0, 0})
	DMember(bool)                                      bPostFixHandles                                             OFFSET(get<bool>, {0xC0, 1, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.DeformMeshPolygonsTool
/// Size: 0x1708 (0x000108 - 0x001810)
class UDeformMeshPolygonsTool : public UMeshSurfacePointTool
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 6160;

public:
	CMember(class AInternalToolFrameworkActor*)        PreviewMeshActor                                            OFFSET(get<T>, {0x118, 8, 0, 0})
	CMember(class UDynamicMeshComponent*)              DynamicMeshComponent                                        OFFSET(get<T>, {0x120, 8, 0, 0})
	CMember(class UDeformMeshPolygonsTransformProperties*) TransformProps                                          OFFSET(get<T>, {0x128, 8, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.DisplaceMeshCommonProperties
/// Size: 0x0030 (0x0000A8 - 0x0000D8)
class UDisplaceMeshCommonProperties : public UInteractiveToolPropertySet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	CMember(EDisplaceMeshToolDisplaceType)             DisplacementType                                            OFFSET(get<T>, {0xA8, 1, 0, 0})
	DMember(float)                                     DisplaceIntensity                                           OFFSET(get<float>, {0xAC, 4, 0, 0})
	DMember(int32_t)                                   RandomSeed                                                  OFFSET(get<int32_t>, {0xB0, 4, 0, 0})
	CMember(EDisplaceMeshToolSubdivisionType)          SubdivisionType                                             OFFSET(get<T>, {0xB4, 1, 0, 0})
	DMember(int32_t)                                   Subdivisions                                                OFFSET(get<int32_t>, {0xB8, 4, 0, 0})
	SMember(FName)                                     WeightMap                                                   OFFSET(getStruct<T>, {0xBC, 4, 0, 0})
	CMember(TArray<FString>)                           WeightMapsList                                              OFFSET(get<T>, {0xC0, 16, 0, 0})
	DMember(bool)                                      bInvertWeightMap                                            OFFSET(get<bool>, {0xD0, 1, 0, 0})
	DMember(bool)                                      bShowWireframe                                              OFFSET(get<bool>, {0xD1, 1, 0, 0})
	DMember(bool)                                      bDisableSizeWarning                                         OFFSET(get<bool>, {0xD2, 1, 0, 0})


	/// Functions
	// Function /Script/MeshModelingToolsExp.DisplaceMeshCommonProperties.GetWeightMapsFunc
	// TArray<FString> GetWeightMapsFunc();                                                                                     // [0xbcef0e4] Final|Native|Public  
};

/// Class /Script/MeshModelingToolsExp.SelectiveTessellationProperties
/// Size: 0x0018 (0x0000A8 - 0x0000C0)
class USelectiveTessellationProperties : public UInteractiveToolPropertySet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	CMember(EDisplaceMeshToolTriangleSelectionType)    SelectionType                                               OFFSET(get<T>, {0xA8, 1, 0, 0})
	SMember(FName)                                     ActiveMaterial                                              OFFSET(getStruct<T>, {0xAC, 4, 0, 0})
	CMember(TArray<FString>)                           MaterialIDList                                              OFFSET(get<T>, {0xB0, 16, 0, 0})


	/// Functions
	// Function /Script/MeshModelingToolsExp.SelectiveTessellationProperties.GetMaterialIDsFunc
	// TArray<FString> GetMaterialIDsFunc();                                                                                    // [0xbbb00dc] Final|Native|Public  
};

/// Class /Script/MeshModelingToolsExp.DisplaceMeshTextureMapProperties
/// Size: 0x0048 (0x0000A8 - 0x0000F0)
class UDisplaceMeshTextureMapProperties : public UInteractiveToolPropertySet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	CMember(class UTexture2D*)                         DisplacementMap                                             OFFSET(get<T>, {0xA8, 8, 0, 0})
	CMember(EDisplaceMeshToolChannelType)              Channel                                                     OFFSET(get<T>, {0xB0, 1, 0, 0})
	DMember(float)                                     DisplacementMapBaseValue                                    OFFSET(get<float>, {0xB4, 4, 0, 0})
	SMember(FVector2D)                                 UVScale                                                     OFFSET(getStruct<T>, {0xB8, 16, 0, 0})
	SMember(FVector2D)                                 UVOffset                                                    OFFSET(getStruct<T>, {0xC8, 16, 0, 0})
	DMember(bool)                                      bApplyAdjustmentCurve                                       OFFSET(get<bool>, {0xD8, 1, 0, 0})
	CMember(class UCurveFloat*)                        AdjustmentCurve                                             OFFSET(get<T>, {0xE0, 8, 0, 0})
	DMember(bool)                                      bRecalcNormals                                              OFFSET(get<bool>, {0xE8, 1, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.DisplaceMeshDirectionalFilterProperties
/// Size: 0x0028 (0x0000A8 - 0x0000D0)
class UDisplaceMeshDirectionalFilterProperties : public UInteractiveToolPropertySet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	DMember(bool)                                      bEnableFilter                                               OFFSET(get<bool>, {0xA8, 1, 0, 0})
	SMember(FVector)                                   FilterDirection                                             OFFSET(getStruct<T>, {0xB0, 24, 0, 0})
	DMember(float)                                     FilterWidth                                                 OFFSET(get<float>, {0xC8, 4, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.DisplaceMeshPerlinNoiseProperties
/// Size: 0x0010 (0x0000A8 - 0x0000B8)
class UDisplaceMeshPerlinNoiseProperties : public UInteractiveToolPropertySet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	CMember(TArray<FPerlinLayerProperties>)            PerlinLayerProperties                                       OFFSET(get<T>, {0xA8, 16, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.DisplaceMeshSineWaveProperties
/// Size: 0x0020 (0x0000A8 - 0x0000C8)
class UDisplaceMeshSineWaveProperties : public UInteractiveToolPropertySet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	DMember(float)                                     SineWaveFrequency                                           OFFSET(get<float>, {0xA8, 4, 0, 0})
	DMember(float)                                     SineWavePhaseShift                                          OFFSET(get<float>, {0xAC, 4, 0, 0})
	SMember(FVector)                                   SineWaveDirection                                           OFFSET(getStruct<T>, {0xB0, 24, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.DisplaceMeshToolBuilder
/// Size: 0x0000 (0x000028 - 0x000028)
class UDisplaceMeshToolBuilder : public USingleSelectionMeshEditingToolBuilder
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/MeshModelingToolsExp.DisplaceMeshTool
/// Size: 0x03B8 (0x0000B8 - 0x000470)
class UDisplaceMeshTool : public USingleSelectionMeshEditingTool
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1136;

public:
	CMember(class UDisplaceMeshCommonProperties*)      CommonProperties                                            OFFSET(get<T>, {0xB8, 8, 0, 0})
	CMember(class UDisplaceMeshDirectionalFilterProperties*) DirectionalFilterProperties                           OFFSET(get<T>, {0xC0, 8, 0, 0})
	CMember(class UDisplaceMeshTextureMapProperties*)  TextureMapProperties                                        OFFSET(get<T>, {0xC8, 8, 0, 0})
	CMember(class UDisplaceMeshPerlinNoiseProperties*) NoiseProperties                                             OFFSET(get<T>, {0xD0, 8, 0, 0})
	CMember(class UDisplaceMeshSineWaveProperties*)    SineWaveProperties                                          OFFSET(get<T>, {0xD8, 8, 0, 0})
	CMember(class USelectiveTessellationProperties*)   SelectiveTessellationProperties                             OFFSET(get<T>, {0xE0, 8, 0, 0})
	CMember(class UCurveFloat*)                        ActiveContrastCurveTarget                                   OFFSET(get<T>, {0xE8, 8, 0, 0})
	CMember(class UMeshStatisticsProperties*)          MeshStatistics                                              OFFSET(get<T>, {0xF0, 8, 0, 0})
	CMember(class AInternalToolFrameworkActor*)        PreviewMeshActor                                            OFFSET(get<T>, {0x440, 8, 0, 0})
	CMember(class UDynamicMeshComponent*)              DynamicMeshComponent                                        OFFSET(get<T>, {0x448, 8, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.DrawPolyPathToolBuilder
/// Size: 0x0000 (0x000028 - 0x000028)
class UDrawPolyPathToolBuilder : public UInteractiveToolBuilder
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/MeshModelingToolsExp.DrawPolyPathProperties
/// Size: 0x0028 (0x0000A8 - 0x0000D0)
class UDrawPolyPathProperties : public UInteractiveToolPropertySet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	CMember(EDrawPolyPathWidthMode)                    WidthMode                                                   OFFSET(get<T>, {0xA8, 4, 0, 0})
	DMember(float)                                     Width                                                       OFFSET(get<float>, {0xAC, 4, 0, 0})
	DMember(bool)                                      bRoundedCorners                                             OFFSET(get<bool>, {0xB0, 1, 0, 0})
	CMember(EDrawPolyPathRadiusMode)                   RadiusMode                                                  OFFSET(get<T>, {0xB4, 4, 0, 0})
	DMember(float)                                     CornerRadius                                                OFFSET(get<float>, {0xB8, 4, 0, 0})
	DMember(int32_t)                                   RadialSlices                                                OFFSET(get<int32_t>, {0xBC, 4, 0, 0})
	DMember(bool)                                      bSinglePolyGroup                                            OFFSET(get<bool>, {0xC0, 1, 0, 0})
	CMember(EDrawPolyPathExtrudeMode)                  ExtrudeMode                                                 OFFSET(get<T>, {0xC4, 4, 0, 0})
	DMember(float)                                     ExtrudeHeight                                               OFFSET(get<float>, {0xC8, 4, 0, 0})
	DMember(float)                                     RampStartRatio                                              OFFSET(get<float>, {0xCC, 4, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.DrawPolyPathExtrudeProperties
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UDrawPolyPathExtrudeProperties : public UInteractiveToolPropertySet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	CMember(EDrawPolyPathExtrudeDirection)             Direction                                                   OFFSET(get<T>, {0xA8, 4, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.DrawPolyPathTool
/// Size: 0x01E0 (0x0000A0 - 0x000280)
class UDrawPolyPathTool : public UInteractiveTool
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 640;

public:
	CMember(class UCreateMeshObjectTypeProperties*)    OutputTypeProperties                                        OFFSET(get<T>, {0xB8, 8, 0, 0})
	CMember(class UDrawPolyPathProperties*)            TransformProps                                              OFFSET(get<T>, {0xC0, 8, 0, 0})
	CMember(class UDrawPolyPathExtrudeProperties*)     ExtrudeProperties                                           OFFSET(get<T>, {0xC8, 8, 0, 0})
	CMember(class UNewMeshMaterialProperties*)         MaterialProperties                                          OFFSET(get<T>, {0xD0, 8, 0, 0})
	CMember(class UConstructionPlaneMechanic*)         PlaneMechanic                                               OFFSET(get<T>, {0x190, 8, 0, 0})
	CMember(class UPolyEditPreviewMesh*)               EditPreview                                                 OFFSET(get<T>, {0x258, 8, 0, 0})
	CMember(class UPlaneDistanceFromHitMechanic*)      ExtrudeHeightMechanic                                       OFFSET(get<T>, {0x260, 8, 0, 0})
	CMember(class USpatialCurveDistanceMechanic*)      CurveDistMechanic                                           OFFSET(get<T>, {0x268, 8, 0, 0})
	CMember(class UCollectSurfacePathMechanic*)        SurfacePathMechanic                                         OFFSET(get<T>, {0x270, 8, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.DynamicMeshBrushTool
/// Size: 0x0048 (0x000288 - 0x0002D0)
class UDynamicMeshBrushTool : public UBaseBrushTool
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 720;

public:
	CMember(class UPreviewMesh*)                       PreviewMesh                                                 OFFSET(get<T>, {0x288, 8, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.DynamicMeshSculptToolBuilder
/// Size: 0x0008 (0x000030 - 0x000038)
class UDynamicMeshSculptToolBuilder : public UMeshSurfacePointMeshEditingToolBuilder
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Script/MeshModelingToolsExp.DynamicMeshBrushProperties
/// Size: 0x0020 (0x0000A8 - 0x0000C8)
class UDynamicMeshBrushProperties : public UInteractiveToolPropertySet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	SMember(FBrushToolRadius)                          BrushSize                                                   OFFSET(getStruct<T>, {0xA8, 20, 0, 0})
	DMember(float)                                     BrushFalloffAmount                                          OFFSET(get<float>, {0xBC, 4, 0, 0})
	DMember(float)                                     Depth                                                       OFFSET(get<float>, {0xC0, 4, 0, 0})
	DMember(bool)                                      bHitBackFaces                                               OFFSET(get<bool>, {0xC4, 1, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.DynamicMeshBrushSculptProperties
/// Size: 0x0018 (0x0000A8 - 0x0000C0)
class UDynamicMeshBrushSculptProperties : public UInteractiveToolPropertySet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	DMember(bool)                                      bIsRemeshingEnabled                                         OFFSET(get<bool>, {0xA8, 1, 0, 0})
	CMember(EDynamicMeshSculptBrushType)               PrimaryBrushType                                            OFFSET(get<T>, {0xA9, 1, 0, 0})
	DMember(float)                                     PrimaryBrushSpeed                                           OFFSET(get<float>, {0xAC, 4, 0, 0})
	DMember(bool)                                      bPreserveUVFlow                                             OFFSET(get<bool>, {0xB0, 1, 0, 0})
	DMember(bool)                                      bFreezeTarget                                               OFFSET(get<bool>, {0xB1, 1, 0, 0})
	DMember(float)                                     SmoothBrushSpeed                                            OFFSET(get<float>, {0xB4, 4, 0, 0})
	DMember(bool)                                      bDetailPreservingSmooth                                     OFFSET(get<bool>, {0xB8, 1, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.DynamicSculptToolActions
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UDynamicSculptToolActions : public UInteractiveToolPropertySet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:


	/// Functions
	// Function /Script/MeshModelingToolsExp.DynamicSculptToolActions.DiscardAttributes
	// void DiscardAttributes();                                                                                                // [0xbcef084] Final|Native|Public  
};

/// Class /Script/MeshModelingToolsExp.BrushRemeshProperties
/// Size: 0x0010 (0x0000B8 - 0x0000C8)
class UBrushRemeshProperties : public URemeshProperties
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	DMember(bool)                                      bEnableRemeshing                                            OFFSET(get<bool>, {0xB8, 1, 0, 0})
	DMember(int32_t)                                   TriangleSize                                                OFFSET(get<int32_t>, {0xBC, 4, 0, 0})
	DMember(int32_t)                                   PreserveDetail                                              OFFSET(get<int32_t>, {0xC0, 4, 0, 0})
	DMember(int32_t)                                   Iterations                                                  OFFSET(get<int32_t>, {0xC4, 4, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.FixedPlaneBrushProperties
/// Size: 0x0048 (0x0000A8 - 0x0000F0)
class UFixedPlaneBrushProperties : public UInteractiveToolPropertySet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	DMember(bool)                                      bPropertySetEnabled                                         OFFSET(get<bool>, {0xA8, 1, 0, 0})
	DMember(bool)                                      bShowGizmo                                                  OFFSET(get<bool>, {0xA9, 1, 0, 0})
	SMember(FVector)                                   Position                                                    OFFSET(getStruct<T>, {0xB0, 24, 0, 0})
	SMember(FQuat)                                     Rotation                                                    OFFSET(getStruct<T>, {0xD0, 32, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.DynamicMeshSculptTool
/// Size: 0x0F18 (0x000108 - 0x001020)
class UDynamicMeshSculptTool : public UMeshSurfacePointTool
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 4128;

public:
	CMember(class UDynamicMeshBrushProperties*)        BrushProperties                                             OFFSET(get<T>, {0x108, 8, 0, 0})
	CMember(class UDynamicMeshBrushSculptProperties*)  SculptProperties                                            OFFSET(get<T>, {0x110, 8, 0, 0})
	CMember(class USculptMaxBrushProperties*)          SculptMaxBrushProperties                                    OFFSET(get<T>, {0x118, 8, 0, 0})
	CMember(class UKelvinBrushProperties*)             KelvinBrushProperties                                       OFFSET(get<T>, {0x120, 8, 0, 0})
	CMember(class UBrushRemeshProperties*)             RemeshProperties                                            OFFSET(get<T>, {0x128, 8, 0, 0})
	CMember(class UFixedPlaneBrushProperties*)         GizmoProperties                                             OFFSET(get<T>, {0x130, 8, 0, 0})
	CMember(class UMeshEditingViewProperties*)         ViewProperties                                              OFFSET(get<T>, {0x138, 8, 0, 0})
	CMember(class UDynamicSculptToolActions*)          SculptToolActions                                           OFFSET(get<T>, {0x140, 8, 0, 0})
	CMember(class UBrushStampIndicator*)               BrushIndicator                                              OFFSET(get<T>, {0x1A0, 8, 0, 0})
	CMember(class UMaterialInstanceDynamic*)           BrushIndicatorMaterial                                      OFFSET(get<T>, {0x1A8, 8, 0, 0})
	CMember(class UPreviewMesh*)                       BrushIndicatorMesh                                          OFFSET(get<T>, {0x1B0, 8, 0, 0})
	CMember(class AInternalToolFrameworkActor*)        PreviewMeshActor                                            OFFSET(get<T>, {0x1B8, 8, 0, 0})
	CMember(class UOctreeDynamicMeshComponent*)        DynamicMeshComponent                                        OFFSET(get<T>, {0x1C0, 8, 0, 0})
	CMember(class UMaterialInstanceDynamic*)           ActiveOverrideMaterial                                      OFFSET(get<T>, {0x1C8, 8, 0, 0})
	CMember(class UCombinedTransformGizmo*)            PlaneTransformGizmo                                         OFFSET(get<T>, {0x1008, 8, 0, 0})
	CMember(class UTransformProxy*)                    PlaneTransformProxy                                         OFFSET(get<T>, {0x1010, 8, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.EditNormalsToolBuilder
/// Size: 0x0000 (0x000028 - 0x000028)
class UEditNormalsToolBuilder : public UMultiSelectionMeshEditingToolBuilder
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/MeshModelingToolsExp.EditNormalsToolProperties
/// Size: 0x0010 (0x0000A8 - 0x0000B8)
class UEditNormalsToolProperties : public UInteractiveToolPropertySet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	DMember(bool)                                      bRecomputeNormals                                           OFFSET(get<bool>, {0xA8, 1, 0, 0})
	CMember(ENormalCalculationMethod)                  NormalCalculationMethod                                     OFFSET(get<T>, {0xA9, 1, 0, 0})
	DMember(bool)                                      bFixInconsistentNormals                                     OFFSET(get<bool>, {0xAA, 1, 0, 0})
	DMember(bool)                                      bInvertNormals                                              OFFSET(get<bool>, {0xAB, 1, 0, 0})
	CMember(ESplitNormalMethod)                        SplitNormalMethod                                           OFFSET(get<T>, {0xAC, 1, 0, 0})
	DMember(float)                                     SharpEdgeAngleThreshold                                     OFFSET(get<float>, {0xB0, 4, 0, 0})
	DMember(bool)                                      bAllowSharpVertices                                         OFFSET(get<bool>, {0xB4, 1, 0, 0})
	DMember(bool)                                      bToolHasSelection                                           OFFSET(get<bool>, {0xB5, 1, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.EditNormalsOperatorFactory
/// Size: 0x0018 (0x000028 - 0x000040)
class UEditNormalsOperatorFactory : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(class UEditNormalsTool*)                   Tool                                                        OFFSET(get<T>, {0x30, 8, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.EditNormalsTool
/// Size: 0x0210 (0x0000C0 - 0x0002D0)
class UEditNormalsTool : public UMultiSelectionMeshEditingTool
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 720;

public:
	CMember(class UEditNormalsToolProperties*)         BasicProperties                                             OFFSET(get<T>, {0xC8, 8, 0, 0})
	CMember(class UPolygroupLayersProperties*)         PolygroupLayerProperties                                    OFFSET(get<T>, {0xD0, 8, 0, 0})
	CMember(TArray<class UMeshOpPreviewWithBackgroundCompute*>) Previews                                           OFFSET(get<T>, {0xD8, 16, 0, 0})
	CMember(class UGeometrySelectionVisualizationProperties*) GeometrySelectionVizProperties                       OFFSET(get<T>, {0x160, 8, 0, 0})
	CMember(class UPreviewGeometry*)                   GeometrySelectionViz                                        OFFSET(get<T>, {0x168, 8, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.EditPivotToolBuilder
/// Size: 0x0000 (0x000028 - 0x000028)
class UEditPivotToolBuilder : public UMultiSelectionMeshEditingToolBuilder
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/MeshModelingToolsExp.EditPivotToolProperties
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UEditPivotToolProperties : public UInteractiveToolPropertySet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	DMember(bool)                                      bApplyToAllLODs                                             OFFSET(get<bool>, {0xA8, 1, 0, 0})
	DMember(bool)                                      bEnableSnapDragging                                         OFFSET(get<bool>, {0xA9, 1, 0, 0})
	CMember(EEditPivotSnapDragRotationMode)            RotationMode                                                OFFSET(get<T>, {0xAA, 1, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.EditPivotToolActionPropertySet
/// Size: 0x0010 (0x0000A8 - 0x0000B8)
class UEditPivotToolActionPropertySet : public UInteractiveToolPropertySet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	DMember(bool)                                      bUseWorldBox                                                OFFSET(get<bool>, {0xB0, 1, 0, 0})


	/// Functions
	// Function /Script/MeshModelingToolsExp.EditPivotToolActionPropertySet.WorldOrigin
	// void WorldOrigin();                                                                                                      // [0xbcef1e0] Final|Native|Public  
	// Function /Script/MeshModelingToolsExp.EditPivotToolActionPropertySet.Top
	// void Top();                                                                                                              // [0xbcef1c8] Final|Native|Public  
	// Function /Script/MeshModelingToolsExp.EditPivotToolActionPropertySet.Right
	// void Right();                                                                                                            // [0xbcef180] Final|Native|Public  
	// Function /Script/MeshModelingToolsExp.EditPivotToolActionPropertySet.Left
	// void Left();                                                                                                             // [0xbcef120] Final|Native|Public  
	// Function /Script/MeshModelingToolsExp.EditPivotToolActionPropertySet.Front
	// void Front();                                                                                                            // [0xbcef0cc] Final|Native|Public  
	// Function /Script/MeshModelingToolsExp.EditPivotToolActionPropertySet.Center
	// void Center();                                                                                                           // [0xbcef054] Final|Native|Public  
	// Function /Script/MeshModelingToolsExp.EditPivotToolActionPropertySet.Bottom
	// void Bottom();                                                                                                           // [0xbcef03c] Final|Native|Public  
	// Function /Script/MeshModelingToolsExp.EditPivotToolActionPropertySet.Back
	// void Back();                                                                                                             // [0xbcef024] Final|Native|Public  
};

/// Class /Script/MeshModelingToolsExp.EditPivotTool
/// Size: 0x0180 (0x0000C0 - 0x000240)
class UEditPivotTool : public UMultiSelectionMeshEditingTool
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 576;

public:
	CMember(class UEditPivotToolProperties*)           TransformProps                                              OFFSET(get<T>, {0xD0, 8, 0, 0})
	CMember(class UEditPivotToolActionPropertySet*)    EditPivotActions                                            OFFSET(get<T>, {0xD8, 8, 0, 0})
	CMember(TArray<FEditPivotTarget>)                  ActiveGizmos                                                OFFSET(get<T>, {0x1B0, 16, 0, 0})
	CMember(class UDragAlignmentMechanic*)             DragAlignmentMechanic                                       OFFSET(get<T>, {0x1C0, 8, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.EditUVIslandsToolBuilder
/// Size: 0x0000 (0x000030 - 0x000030)
class UEditUVIslandsToolBuilder : public UMeshSurfacePointMeshEditingToolBuilder
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/MeshModelingToolsExp.EditUVIslandsTool
/// Size: 0x03E8 (0x000108 - 0x0004F0)
class UEditUVIslandsTool : public UMeshSurfacePointTool
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1264;

public:
	CMember(class UExistingMeshMaterialProperties*)    MaterialSettings                                            OFFSET(get<T>, {0x110, 8, 0, 0})
	CMember(class UMaterialInstanceDynamic*)           CheckerMaterial                                             OFFSET(get<T>, {0x118, 8, 0, 0})
	CMember(class AInternalToolFrameworkActor*)        PreviewMeshActor                                            OFFSET(get<T>, {0x120, 8, 0, 0})
	CMember(class UDynamicMeshComponent*)              DynamicMeshComponent                                        OFFSET(get<T>, {0x128, 8, 0, 0})
	CMember(class UPolygonSelectionMechanic*)          SelectionMechanic                                           OFFSET(get<T>, {0x130, 8, 0, 0})
	CMember(class UCombinedTransformGizmo*)            TransformGizmo                                              OFFSET(get<T>, {0x140, 8, 0, 0})
	CMember(class UTransformProxy*)                    TransformProxy                                              OFFSET(get<T>, {0x148, 8, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.HoleFillToolBuilder
/// Size: 0x0000 (0x000028 - 0x000028)
class UHoleFillToolBuilder : public USingleSelectionMeshEditingToolBuilder
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/MeshModelingToolsExp.SmoothHoleFillProperties
/// Size: 0x0028 (0x0000A8 - 0x0000D0)
class USmoothHoleFillProperties : public UInteractiveToolPropertySet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	DMember(bool)                                      bConstrainToHoleInterior                                    OFFSET(get<bool>, {0xA8, 1, 0, 0})
	DMember(int32_t)                                   RemeshingExteriorRegionWidth                                OFFSET(get<int32_t>, {0xAC, 4, 0, 0})
	DMember(int32_t)                                   SmoothingExteriorRegionWidth                                OFFSET(get<int32_t>, {0xB0, 4, 0, 0})
	DMember(int32_t)                                   SmoothingInteriorRegionWidth                                OFFSET(get<int32_t>, {0xB4, 4, 0, 0})
	DMember(float)                                     InteriorSmoothness                                          OFFSET(get<float>, {0xB8, 4, 0, 0})
	DMember(double)                                    FillDensityScalar                                           OFFSET(get<double>, {0xC0, 8, 0, 0})
	DMember(bool)                                      bProjectDuringRemesh                                        OFFSET(get<bool>, {0xC8, 1, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.HoleFillToolProperties
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UHoleFillToolProperties : public UInteractiveToolPropertySet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	CMember(EHoleFillOpFillType)                       FillType                                                    OFFSET(get<T>, {0xA8, 1, 0, 0})
	DMember(bool)                                      bRemoveIsolatedTriangles                                    OFFSET(get<bool>, {0xA9, 1, 0, 0})
	DMember(bool)                                      bQuickFillSmallHoles                                        OFFSET(get<bool>, {0xAA, 1, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.HoleFillToolActions
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UHoleFillToolActions : public UInteractiveToolPropertySet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:


	/// Functions
	// Function /Script/MeshModelingToolsExp.HoleFillToolActions.SelectAll
	// void SelectAll();                                                                                                        // [0xbd3a3bc] Final|Native|Public  
	// Function /Script/MeshModelingToolsExp.HoleFillToolActions.Clear
	// void Clear();                                                                                                            // [0xbd3a13c] Final|Native|Public  
};

/// Class /Script/MeshModelingToolsExp.HoleFillStatisticsProperties
/// Size: 0x0050 (0x0000A8 - 0x0000F8)
class UHoleFillStatisticsProperties : public UInteractiveToolPropertySet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
	SMember(FString)                                   InitialHoles                                                OFFSET(getStruct<T>, {0xA8, 16, 0, 0})
	SMember(FString)                                   SelectedHoles                                               OFFSET(getStruct<T>, {0xB8, 16, 0, 0})
	SMember(FString)                                   SuccessfulFills                                             OFFSET(getStruct<T>, {0xC8, 16, 0, 0})
	SMember(FString)                                   FailedFills                                                 OFFSET(getStruct<T>, {0xD8, 16, 0, 0})
	SMember(FString)                                   RemainingHoles                                              OFFSET(getStruct<T>, {0xE8, 16, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.HoleFillOperatorFactory
/// Size: 0x0010 (0x000028 - 0x000038)
class UHoleFillOperatorFactory : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(class UHoleFillTool*)                      FillTool                                                    OFFSET(get<T>, {0x30, 8, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.HoleFillTool
/// Size: 0x0188 (0x0000B8 - 0x000240)
class UHoleFillTool : public USingleSelectionMeshEditingTool
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 576;

public:
	CMember(class USmoothHoleFillProperties*)          SmoothHoleFillProperties                                    OFFSET(get<T>, {0xB8, 8, 0, 0})
	CMember(class UHoleFillToolProperties*)            Properties                                                  OFFSET(get<T>, {0xC0, 8, 0, 0})
	CMember(class UHoleFillToolActions*)               Actions                                                     OFFSET(get<T>, {0xC8, 8, 0, 0})
	CMember(class UHoleFillStatisticsProperties*)      Statistics                                                  OFFSET(get<T>, {0xD0, 8, 0, 0})
	CMember(class UMeshOpPreviewWithBackgroundCompute*) Preview                                                    OFFSET(get<T>, {0xD8, 8, 0, 0})
	CMember(class UBoundarySelectionMechanic*)         SelectionMechanic                                           OFFSET(get<T>, {0xE0, 8, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.LatticeDeformerToolBuilder
/// Size: 0x0000 (0x000028 - 0x000028)
class ULatticeDeformerToolBuilder : public USingleSelectionMeshEditingToolBuilder
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/MeshModelingToolsExp.LatticeDeformerToolProperties
/// Size: 0x0020 (0x0000A8 - 0x0000C8)
class ULatticeDeformerToolProperties : public UInteractiveToolPropertySet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	DMember(int32_t)                                   XAxisResolution                                             OFFSET(get<int32_t>, {0xB0, 4, 0, 0})
	DMember(int32_t)                                   YAxisResolution                                             OFFSET(get<int32_t>, {0xB4, 4, 0, 0})
	DMember(int32_t)                                   ZAxisResolution                                             OFFSET(get<int32_t>, {0xB8, 4, 0, 0})
	DMember(float)                                     Padding                                                     OFFSET(get<float>, {0xBC, 4, 0, 0})
	CMember(ELatticeInterpolationType)                 InterpolationType                                           OFFSET(get<T>, {0xC0, 1, 0, 0})
	DMember(bool)                                      bDeformNormals                                              OFFSET(get<bool>, {0xC1, 1, 0, 0})
	DMember(bool)                                      bCanChangeResolution                                        OFFSET(get<bool>, {0xC2, 1, 0, 0})
	CMember(EToolContextCoordinateSystem)              GizmoCoordinateSystem                                       OFFSET(get<T>, {0xC3, 1, 0, 0})
	DMember(bool)                                      bSetPivotMode                                               OFFSET(get<bool>, {0xC4, 1, 0, 0})
	DMember(bool)                                      bSoftDeformation                                            OFFSET(get<bool>, {0xC5, 1, 0, 0})


	/// Functions
	// Function /Script/MeshModelingToolsExp.LatticeDeformerToolProperties.Constrain
	// void Constrain();                                                                                                        // [0xbd3a1b0] Final|Native|Public  
	// Function /Script/MeshModelingToolsExp.LatticeDeformerToolProperties.ClearConstraints
	// void ClearConstraints();                                                                                                 // [0xbd3a184] Final|Native|Public  
};

/// Class /Script/MeshModelingToolsExp.LatticeDeformerOperatorFactory
/// Size: 0x0010 (0x000028 - 0x000038)
class ULatticeDeformerOperatorFactory : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(class ULatticeDeformerTool*)               LatticeDeformerTool                                         OFFSET(get<T>, {0x30, 8, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.LatticeDeformerTool
/// Size: 0x00B0 (0x0000B8 - 0x000168)
class ULatticeDeformerTool : public USingleSelectionMeshEditingTool
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 360;

public:
	CMember(class ULatticeControlPointsMechanic*)      ControlPointsMechanic                                       OFFSET(get<T>, {0xE0, 8, 0, 0})
	CMember(class ULatticeDeformerToolProperties*)     Settings                                                    OFFSET(get<T>, {0xE8, 8, 0, 0})
	CMember(class UMeshOpPreviewWithBackgroundCompute*) Preview                                                    OFFSET(get<T>, {0xF0, 8, 0, 0})
	DMember(bool)                                      bLatticeDeformed                                            OFFSET(get<bool>, {0xF8, 1, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.MeshAttributePaintToolBuilder
/// Size: 0x0040 (0x000030 - 0x000070)
class UMeshAttributePaintToolBuilder : public UMeshSurfacePointMeshEditingToolBuilder
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /Script/MeshModelingToolsExp.MeshAttributePaintBrushOperationProperties
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UMeshAttributePaintBrushOperationProperties : public UInteractiveToolPropertySet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	CMember(EBrushActionMode)                          BrushAction                                                 OFFSET(get<T>, {0xA8, 4, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.MeshAttributePaintToolProperties
/// Size: 0x0020 (0x0000A8 - 0x0000C8)
class UMeshAttributePaintToolProperties : public UInteractiveToolPropertySet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	SMember(FString)                                   Attribute                                                   OFFSET(getStruct<T>, {0xA8, 16, 0, 0})


	/// Functions
	// Function /Script/MeshModelingToolsExp.MeshAttributePaintToolProperties.GetAttributeNames
	// TArray<FString> GetAttributeNames();                                                                                     // [0xbca21b0] Final|Native|Public  
};

/// Class /Script/MeshModelingToolsExp.MeshAttributePaintEditActions
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UMeshAttributePaintEditActions : public UInteractiveToolPropertySet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
};

/// Class /Script/MeshModelingToolsExp.MeshAttributePaintTool
/// Size: 0x0500 (0x0002D0 - 0x0007D0)
class UMeshAttributePaintTool : public UDynamicMeshBrushTool
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2000;

public:
	CMember(class UMeshAttributePaintBrushOperationProperties*) BrushActionProps                                   OFFSET(get<T>, {0x2D8, 8, 0, 0})
	CMember(class UMeshAttributePaintToolProperties*)  AttribProps                                                 OFFSET(get<T>, {0x2E0, 8, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.MeshBoundaryToolBase
/// Size: 0x00F8 (0x0000B8 - 0x0001B0)
class UMeshBoundaryToolBase : public USingleSelectionMeshEditingTool
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 432;

public:
	CMember(class UPolygonSelectionMechanic*)          SelectionMechanic                                           OFFSET(get<T>, {0x1A0, 8, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.MeshGroupPaintToolBuilder
/// Size: 0x0000 (0x000030 - 0x000030)
class UMeshGroupPaintToolBuilder : public UMeshSurfacePointMeshEditingToolBuilder
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/MeshModelingToolsExp.GroupPaintBrushFilterProperties
/// Size: 0x0030 (0x0000A8 - 0x0000D8)
class UGroupPaintBrushFilterProperties : public UInteractiveToolPropertySet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	CMember(EMeshGroupPaintBrushType)                  PrimaryBrushType                                            OFFSET(get<T>, {0xA8, 1, 0, 0})
	CMember(EMeshGroupPaintInteractionType)            SubToolType                                                 OFFSET(get<T>, {0xA9, 1, 0, 0})
	DMember(float)                                     BrushSize                                                   OFFSET(get<float>, {0xAC, 4, 0, 0})
	CMember(EMeshGroupPaintBrushAreaType)              BrushAreaMode                                               OFFSET(get<T>, {0xB0, 1, 0, 0})
	DMember(bool)                                      bHitBackFaces                                               OFFSET(get<bool>, {0xB1, 1, 0, 0})
	DMember(int32_t)                                   SetGroup                                                    OFFSET(get<int32_t>, {0xB4, 4, 0, 0})
	DMember(bool)                                      bOnlySetUngrouped                                           OFFSET(get<bool>, {0xB8, 1, 0, 0})
	DMember(int32_t)                                   EraseGroup                                                  OFFSET(get<int32_t>, {0xBC, 4, 0, 0})
	DMember(bool)                                      bOnlyEraseCurrent                                           OFFSET(get<bool>, {0xC0, 1, 0, 0})
	DMember(float)                                     AngleThreshold                                              OFFSET(get<float>, {0xC4, 4, 0, 0})
	DMember(bool)                                      bUVSeams                                                    OFFSET(get<bool>, {0xC8, 1, 0, 0})
	DMember(bool)                                      bNormalSeams                                                OFFSET(get<bool>, {0xC9, 1, 0, 0})
	CMember(EMeshGroupPaintVisibilityType)             VisibilityFilter                                            OFFSET(get<T>, {0xCA, 1, 0, 0})
	DMember(int32_t)                                   MinTriVertCount                                             OFFSET(get<int32_t>, {0xCC, 4, 0, 0})
	DMember(bool)                                      bShowHitGroup                                               OFFSET(get<bool>, {0xD0, 1, 0, 0})
	DMember(bool)                                      bShowAllGroups                                              OFFSET(get<bool>, {0xD1, 1, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.MeshGroupPaintToolActionPropertySet
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UMeshGroupPaintToolActionPropertySet : public UInteractiveToolPropertySet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
};

/// Class /Script/MeshModelingToolsExp.MeshGroupPaintToolFreezeActions
/// Size: 0x0000 (0x0000B0 - 0x0000B0)
class UMeshGroupPaintToolFreezeActions : public UMeshGroupPaintToolActionPropertySet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:


	/// Functions
	// Function /Script/MeshModelingToolsExp.MeshGroupPaintToolFreezeActions.UnfreezeAll
	// void UnfreezeAll();                                                                                                      // [0xbd3a38c] Final|Native|Public  
	// Function /Script/MeshModelingToolsExp.MeshGroupPaintToolFreezeActions.ShrinkCurrent
	// void ShrinkCurrent();                                                                                                    // [0xbd3a10c] Final|Native|Public  
	// Function /Script/MeshModelingToolsExp.MeshGroupPaintToolFreezeActions.GrowCurrent
	// void GrowCurrent();                                                                                                      // [0xbd3a284] Final|Native|Public  
	// Function /Script/MeshModelingToolsExp.MeshGroupPaintToolFreezeActions.FreezeOthers
	// void FreezeOthers();                                                                                                     // [0xbd3a26c] Final|Native|Public  
	// Function /Script/MeshModelingToolsExp.MeshGroupPaintToolFreezeActions.FreezeCurrent
	// void FreezeCurrent();                                                                                                    // [0xbd3a23c] Final|Native|Public  
	// Function /Script/MeshModelingToolsExp.MeshGroupPaintToolFreezeActions.FloodFillCurrent
	// void FloodFillCurrent();                                                                                                 // [0xbd3a2cc] Final|Native|Public  
	// Function /Script/MeshModelingToolsExp.MeshGroupPaintToolFreezeActions.ClearCurrent
	// void ClearCurrent();                                                                                                     // [0xbd3a198] Final|Native|Public  
	// Function /Script/MeshModelingToolsExp.MeshGroupPaintToolFreezeActions.ClearAll
	// void ClearAll();                                                                                                         // [0xbd3a16c] Final|Native|Public  
};

/// Class /Script/MeshModelingToolsExp.MeshSculptToolBase
/// Size: 0x0A98 (0x000108 - 0x000BA0)
class UMeshSculptToolBase : public UMeshSurfacePointTool
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2976;

public:
	CMember(class USculptBrushProperties*)             BrushProperties                                             OFFSET(get<T>, {0x108, 8, 0, 0})
	CMember(class UWorkPlaneProperties*)               GizmoProperties                                             OFFSET(get<T>, {0x110, 8, 0, 0})
	CMember(TMap<int32_t, UMeshSculptBrushOpProps*>)   BrushOpPropSets                                             OFFSET(get<T>, {0x230, 80, 0, 0})
	CMember(TMap<int32_t, UMeshSculptBrushOpProps*>)   SecondaryBrushOpPropSets                                    OFFSET(get<T>, {0x2D0, 80, 0, 0})
	CMember(class UMeshEditingViewProperties*)         ViewProperties                                              OFFSET(get<T>, {0xA10, 8, 0, 0})
	CMember(class UMaterialInstanceDynamic*)           ActiveOverrideMaterial                                      OFFSET(get<T>, {0xA18, 8, 0, 0})
	CMember(class UBrushStampIndicator*)               BrushIndicator                                              OFFSET(get<T>, {0xA20, 8, 0, 0})
	DMember(bool)                                      bIsVolumetricIndicator                                      OFFSET(get<bool>, {0xA28, 1, 0, 0})
	CMember(class UMaterialInstanceDynamic*)           BrushIndicatorMaterial                                      OFFSET(get<T>, {0xA30, 8, 0, 0})
	CMember(class UPreviewMesh*)                       BrushIndicatorMesh                                          OFFSET(get<T>, {0xA38, 8, 0, 0})
	CMember(class UCombinedTransformGizmo*)            PlaneTransformGizmo                                         OFFSET(get<T>, {0xA40, 8, 0, 0})
	CMember(class UTransformProxy*)                    PlaneTransformProxy                                         OFFSET(get<T>, {0xA48, 8, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.MeshGroupPaintTool
/// Size: 0x0440 (0x000BA0 - 0x000FE0)
class UMeshGroupPaintTool : public UMeshSculptToolBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 4064;

public:
	CMember(class UPolygroupLayersProperties*)         PolygroupLayerProperties                                    OFFSET(get<T>, {0xBA0, 8, 0, 0})
	CMember(class UGroupPaintBrushFilterProperties*)   FilterProperties                                            OFFSET(get<T>, {0xBA8, 8, 0, 0})
	CMember(class UGroupPaintBrushOpProps*)            PaintBrushOpProperties                                      OFFSET(get<T>, {0xBB0, 8, 0, 0})
	CMember(class UGroupEraseBrushOpProps*)            EraseBrushOpProperties                                      OFFSET(get<T>, {0xBB8, 8, 0, 0})
	CMember(class UMeshGroupPaintToolFreezeActions*)   FreezeActions                                               OFFSET(get<T>, {0xBC0, 8, 0, 0})
	CMember(class UPolyLassoMarqueeMechanic*)          PolyLassoMechanic                                           OFFSET(get<T>, {0xBD0, 8, 0, 0})
	CMember(class AInternalToolFrameworkActor*)        PreviewMeshActor                                            OFFSET(get<T>, {0xBD8, 8, 0, 0})
	CMember(class UDynamicMeshComponent*)              DynamicMeshComponent                                        OFFSET(get<T>, {0xBE0, 8, 0, 0})
	CMember(class UMeshElementsVisualizer*)            MeshElementsDisplay                                         OFFSET(get<T>, {0xBE8, 8, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.MeshInspectorToolBuilder
/// Size: 0x0000 (0x000028 - 0x000028)
class UMeshInspectorToolBuilder : public USingleSelectionMeshEditingToolBuilder
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/MeshModelingToolsExp.MeshInspectorProperties
/// Size: 0x0018 (0x0000A8 - 0x0000C0)
class UMeshInspectorProperties : public UInteractiveToolPropertySet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	DMember(bool)                                      bWireframe                                                  OFFSET(get<bool>, {0xA8, 1, 0, 0})
	DMember(bool)                                      bBoundaryEdges                                              OFFSET(get<bool>, {0xA9, 1, 0, 0})
	DMember(bool)                                      bBowtieVertices                                             OFFSET(get<bool>, {0xAA, 1, 0, 0})
	DMember(bool)                                      bPolygonBorders                                             OFFSET(get<bool>, {0xAB, 1, 0, 0})
	DMember(bool)                                      bUVSeams                                                    OFFSET(get<bool>, {0xAC, 1, 0, 0})
	DMember(bool)                                      bUVBowties                                                  OFFSET(get<bool>, {0xAD, 1, 0, 0})
	DMember(bool)                                      bMissingUVs                                                 OFFSET(get<bool>, {0xAE, 1, 0, 0})
	DMember(bool)                                      bNormalSeams                                                OFFSET(get<bool>, {0xAF, 1, 0, 0})
	DMember(bool)                                      bTangentSeams                                               OFFSET(get<bool>, {0xB0, 1, 0, 0})
	DMember(bool)                                      bNormalVectors                                              OFFSET(get<bool>, {0xB1, 1, 0, 0})
	DMember(bool)                                      bTangentVectors                                             OFFSET(get<bool>, {0xB2, 1, 0, 0})
	DMember(bool)                                      bDrawHiddenEdgesAndSeams                                    OFFSET(get<bool>, {0xB3, 1, 0, 0})
	DMember(float)                                     NormalLength                                                OFFSET(get<float>, {0xB4, 4, 0, 0})
	DMember(float)                                     TangentLength                                               OFFSET(get<float>, {0xB8, 4, 0, 0})
	CMember(EMeshInspectorToolDrawIndexMode)           ShowIndices                                                 OFFSET(get<T>, {0xBC, 1, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.MeshInspectorMaterialProperties
/// Size: 0x0078 (0x0000A8 - 0x000120)
class UMeshInspectorMaterialProperties : public UInteractiveToolPropertySet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	CMember(EMeshInspectorMaterialMode)                MaterialMode                                                OFFSET(get<T>, {0xA8, 1, 0, 0})
	DMember(float)                                     CheckerDensity                                              OFFSET(get<float>, {0xAC, 4, 0, 0})
	CMember(class UMaterialInterface*)                 OverrideMaterial                                            OFFSET(get<T>, {0xB0, 8, 0, 0})
	SMember(FString)                                   UVChannel                                                   OFFSET(getStruct<T>, {0xB8, 16, 0, 0})
	CMember(TArray<FString>)                           UVChannelNamesList                                          OFFSET(get<T>, {0xC8, 16, 0, 0})
	DMember(bool)                                      bFlatShading                                                OFFSET(get<bool>, {0xD8, 1, 0, 0})
	SMember(FLinearColor)                              Color                                                       OFFSET(getStruct<T>, {0xDC, 16, 0, 0})
	DMember(double)                                    Opacity                                                     OFFSET(get<double>, {0xF0, 8, 0, 0})
	SMember(FLinearColor)                              TransparentMaterialColor                                    OFFSET(getStruct<T>, {0xF8, 16, 0, 0})
	DMember(bool)                                      bTwoSided                                                   OFFSET(get<bool>, {0x108, 1, 0, 0})
	CMember(class UMaterialInstanceDynamic*)           CheckerMaterial                                             OFFSET(get<T>, {0x110, 8, 0, 0})
	CMember(class UMaterialInstanceDynamic*)           ActiveCustomMaterial                                        OFFSET(get<T>, {0x118, 8, 0, 0})


	/// Functions
	// Function /Script/MeshModelingToolsExp.MeshInspectorMaterialProperties.GetUVChannelNamesFunc
	// TArray<FString> GetUVChannelNamesFunc();                                                                                 // [0xbca2194] Final|Native|Public|Const 
};

/// Class /Script/MeshModelingToolsExp.MeshInspectorTool
/// Size: 0x01A8 (0x0000B8 - 0x000260)
class UMeshInspectorTool : public USingleSelectionMeshEditingTool
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 608;

public:
	CMember(class UMeshInspectorProperties*)           Settings                                                    OFFSET(get<T>, {0xC0, 8, 0, 0})
	CMember(class UPolygroupLayersProperties*)         PolygroupLayerProperties                                    OFFSET(get<T>, {0xC8, 8, 0, 0})
	CMember(class UMeshInspectorMaterialProperties*)   MaterialSettings                                            OFFSET(get<T>, {0xD0, 8, 0, 0})
	CMember(class UPreviewMesh*)                       PreviewMesh                                                 OFFSET(get<T>, {0xE0, 8, 0, 0})
	CMember(class ULineSetComponent*)                  DrawnLineSet                                                OFFSET(get<T>, {0xE8, 8, 0, 0})
	CMember(class UMaterialInterface*)                 DefaultMaterial                                             OFFSET(get<T>, {0xF0, 8, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.MeshSelectionToolBuilder
/// Size: 0x0000 (0x000030 - 0x000030)
class UMeshSelectionToolBuilder : public UMeshSurfacePointMeshEditingToolBuilder
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/MeshModelingToolsExp.MeshSelectionToolActionPropertySet
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UMeshSelectionToolActionPropertySet : public UInteractiveToolPropertySet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
};

/// Class /Script/MeshModelingToolsExp.MeshSelectionEditActions
/// Size: 0x0000 (0x0000B0 - 0x0000B0)
class UMeshSelectionEditActions : public UMeshSelectionToolActionPropertySet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:


	/// Functions
	// Function /Script/MeshModelingToolsExp.MeshSelectionEditActions.Shrink
	// void Shrink();                                                                                                           // [0xbd3a460] Final|Native|Public  
	// Function /Script/MeshModelingToolsExp.MeshSelectionEditActions.SelectAll
	// void SelectAll();                                                                                                        // [0xbd3a3d4] Final|Native|Public  
	// Function /Script/MeshModelingToolsExp.MeshSelectionEditActions.OptimizeBorder
	// void OptimizeBorder();                                                                                                   // [0xbd3a374] Final|Native|Public  
	// Function /Script/MeshModelingToolsExp.MeshSelectionEditActions.LargestTriCountPart
	// void LargestTriCountPart();                                                                                              // [0xbd3a344] Final|Native|Public  
	// Function /Script/MeshModelingToolsExp.MeshSelectionEditActions.LargestAreaPart
	// void LargestAreaPart();                                                                                                  // [0xbd3a32c] Final|Native|Public  
	// Function /Script/MeshModelingToolsExp.MeshSelectionEditActions.Invert
	// void Invert();                                                                                                           // [0xbd3a314] Final|Native|Public  
	// Function /Script/MeshModelingToolsExp.MeshSelectionEditActions.Grow
	// void Grow();                                                                                                             // [0xbd3a2fc] Final|Native|Public  
	// Function /Script/MeshModelingToolsExp.MeshSelectionEditActions.FloodFill
	// void FloodFill();                                                                                                        // [0xbd3a2b4] Final|Native|Public  
	// Function /Script/MeshModelingToolsExp.MeshSelectionEditActions.ExpandToMaterials
	// void ExpandToMaterials();                                                                                                // [0xbd3a254] Final|Native|Public  
	// Function /Script/MeshModelingToolsExp.MeshSelectionEditActions.Clear
	// void Clear();                                                                                                            // [0xbd3a154] Final|Native|Public  
};

/// Class /Script/MeshModelingToolsExp.MeshSelectionMeshEditActions
/// Size: 0x0000 (0x0000B0 - 0x0000B0)
class UMeshSelectionMeshEditActions : public UMeshSelectionToolActionPropertySet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:


	/// Functions
	// Function /Script/MeshModelingToolsExp.MeshSelectionMeshEditActions.SmoothBorder
	// void SmoothBorder();                                                                                                     // [0xbd3a478] Final|Native|Public  
	// Function /Script/MeshModelingToolsExp.MeshSelectionMeshEditActions.Separate
	// void Separate();                                                                                                         // [0xbd3a3ec] Final|Native|Public  
	// Function /Script/MeshModelingToolsExp.MeshSelectionMeshEditActions.FlipNormals
	// void FlipNormals();                                                                                                      // [0xbd3a29c] Final|Native|Public  
	// Function /Script/MeshModelingToolsExp.MeshSelectionMeshEditActions.Duplicate
	// void Duplicate();                                                                                                        // [0xbd3a224] Final|Native|Public  
	// Function /Script/MeshModelingToolsExp.MeshSelectionMeshEditActions.Disconnect
	// void Disconnect();                                                                                                       // [0xbd3a1f4] Final|Native|Public  
	// Function /Script/MeshModelingToolsExp.MeshSelectionMeshEditActions.Delete
	// void Delete();                                                                                                           // [0xbd3a1dc] Final|Native|Public  
	// Function /Script/MeshModelingToolsExp.MeshSelectionMeshEditActions.CreatePolygroup
	// void CreatePolygroup();                                                                                                  // [0xbd3a1c4] Final|Native|Public  
};

/// Class /Script/MeshModelingToolsExp.MeshSelectionToolProperties
/// Size: 0x0010 (0x0000A8 - 0x0000B8)
class UMeshSelectionToolProperties : public UInteractiveToolPropertySet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	CMember(EMeshSelectionToolPrimaryMode)             SelectionMode                                               OFFSET(get<T>, {0xA8, 4, 0, 0})
	DMember(float)                                     AngleTolerance                                              OFFSET(get<float>, {0xAC, 4, 0, 0})
	DMember(bool)                                      bHitBackFaces                                               OFFSET(get<bool>, {0xB0, 1, 0, 0})
	DMember(bool)                                      bShowPoints                                                 OFFSET(get<bool>, {0xB1, 1, 0, 0})
	CMember(EMeshFacesColorMode)                       FaceColorMode                                               OFFSET(get<T>, {0xB4, 4, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.MeshSelectionTool
/// Size: 0x0428 (0x0002D0 - 0x0006F8)
class UMeshSelectionTool : public UDynamicMeshBrushTool
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1784;

public:
	CMember(class UMeshSelectionToolProperties*)       SelectionProps                                              OFFSET(get<T>, {0x2D8, 8, 0, 0})
	CMember(class UMeshSelectionEditActions*)          SelectionActions                                            OFFSET(get<T>, {0x2E0, 8, 0, 0})
	CMember(class UMeshSelectionToolActionPropertySet*) EditActions                                                OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(class UMeshStatisticsProperties*)          MeshStatisticsProperties                                    OFFSET(get<T>, {0x2F0, 8, 0, 0})
	CMember(class UMeshElementsVisualizer*)            MeshElementsDisplay                                         OFFSET(get<T>, {0x2F8, 8, 0, 0})
	CMember(class UMeshUVChannelProperties*)           UVChannelProperties                                         OFFSET(get<T>, {0x300, 8, 0, 0})
	CMember(class UPolygroupLayersProperties*)         PolygroupLayerProperties                                    OFFSET(get<T>, {0x308, 8, 0, 0})
	CMember(class UMeshSelectionSet*)                  Selection                                                   OFFSET(get<T>, {0x368, 8, 0, 0})
	CMember(TArray<class AActor*>)                     SpawnedActors                                               OFFSET(get<T>, {0x370, 16, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.MeshSpaceDeformerToolBuilder
/// Size: 0x0000 (0x000028 - 0x000028)
class UMeshSpaceDeformerToolBuilder : public USingleSelectionMeshEditingToolBuilder
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/MeshModelingToolsExp.MeshSpaceDeformerToolProperties
/// Size: 0x0028 (0x0000A8 - 0x0000D0)
class UMeshSpaceDeformerToolProperties : public UInteractiveToolPropertySet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	CMember(ENonlinearOperationType)                   SelectedOperationType                                       OFFSET(get<T>, {0xA8, 1, 0, 0})
	DMember(float)                                     UpperBoundsInterval                                         OFFSET(get<float>, {0xAC, 4, 0, 0})
	DMember(float)                                     LowerBoundsInterval                                         OFFSET(get<float>, {0xB0, 4, 0, 0})
	DMember(float)                                     BendDegrees                                                 OFFSET(get<float>, {0xB4, 4, 0, 0})
	DMember(float)                                     TwistDegrees                                                OFFSET(get<float>, {0xB8, 4, 0, 0})
	CMember(EFlareProfileType)                         FlareProfileType                                            OFFSET(get<T>, {0xBC, 1, 0, 0})
	DMember(float)                                     FlarePercentY                                               OFFSET(get<float>, {0xC0, 4, 0, 0})
	DMember(bool)                                      bLockXAndYFlaring                                           OFFSET(get<bool>, {0xC4, 1, 0, 0})
	DMember(float)                                     FlarePercentX                                               OFFSET(get<float>, {0xC8, 4, 0, 0})
	DMember(bool)                                      bLockBottom                                                 OFFSET(get<bool>, {0xCC, 1, 0, 0})
	DMember(bool)                                      bShowOriginalMesh                                           OFFSET(get<bool>, {0xCD, 1, 0, 0})
	DMember(bool)                                      bDrawVisualization                                          OFFSET(get<bool>, {0xCE, 1, 0, 0})
	DMember(bool)                                      bAlignToNormalOnCtrlClick                                   OFFSET(get<bool>, {0xCF, 1, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.MeshSpaceDeformerToolActionPropertySet
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UMeshSpaceDeformerToolActionPropertySet : public UInteractiveToolPropertySet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:


	/// Functions
	// Function /Script/MeshModelingToolsExp.MeshSpaceDeformerToolActionPropertySet.ShiftToCenter
	// void ShiftToCenter();                                                                                                    // [0xbd3a404] Final|Native|Public  
};

/// Class /Script/MeshModelingToolsExp.SpaceDeformerOperatorFactory
/// Size: 0x0010 (0x000028 - 0x000038)
class USpaceDeformerOperatorFactory : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(class UMeshSpaceDeformerTool*)             SpaceDeformerTool                                           OFFSET(get<T>, {0x30, 8, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.MeshSpaceDeformerTool
/// Size: 0x0218 (0x0000B8 - 0x0002D0)
class UMeshSpaceDeformerTool : public USingleSelectionMeshEditingTool
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 720;

public:
	CMember(class UMeshSpaceDeformerToolProperties*)   Settings                                                    OFFSET(get<T>, {0xC0, 8, 0, 0})
	CMember(class UMeshSpaceDeformerToolActionPropertySet*) ToolActions                                            OFFSET(get<T>, {0xC8, 8, 0, 0})
	CMember(class UGizmoTransformChangeStateTarget*)   StateTarget                                                 OFFSET(get<T>, {0xD0, 8, 0, 0})
	CMember(class UDragAlignmentMechanic*)             DragAlignmentMechanic                                       OFFSET(get<T>, {0xD8, 8, 0, 0})
	CMember(class UMeshOpPreviewWithBackgroundCompute*) Preview                                                    OFFSET(get<T>, {0xE0, 8, 0, 0})
	CMember(class UPreviewMesh*)                       OriginalMeshPreview                                         OFFSET(get<T>, {0xF8, 8, 0, 0})
	CMember(class UIntervalGizmo*)                     IntervalGizmo                                               OFFSET(get<T>, {0x100, 8, 0, 0})
	CMember(class UCombinedTransformGizmo*)            TransformGizmo                                              OFFSET(get<T>, {0x108, 8, 0, 0})
	CMember(class UTransformProxy*)                    TransformProxy                                              OFFSET(get<T>, {0x110, 8, 0, 0})
	CMember(class UGizmoLocalFloatParameterSource*)    UpIntervalSource                                            OFFSET(get<T>, {0x118, 8, 0, 0})
	CMember(class UGizmoLocalFloatParameterSource*)    DownIntervalSource                                          OFFSET(get<T>, {0x120, 8, 0, 0})
	CMember(class UGizmoLocalFloatParameterSource*)    ForwardIntervalSource                                       OFFSET(get<T>, {0x128, 8, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.MeshVertexPaintToolBuilder
/// Size: 0x0000 (0x000030 - 0x000030)
class UMeshVertexPaintToolBuilder : public UMeshSurfacePointMeshEditingToolBuilder
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/MeshModelingToolsExp.VertexPaintBasicProperties
/// Size: 0x0038 (0x0000A8 - 0x0000E0)
class UVertexPaintBasicProperties : public UInteractiveToolPropertySet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	CMember(EMeshVertexPaintBrushType)                 PrimaryBrushType                                            OFFSET(get<T>, {0xA8, 1, 0, 0})
	CMember(EMeshVertexPaintInteractionType)           SubToolType                                                 OFFSET(get<T>, {0xA9, 1, 0, 0})
	SMember(FLinearColor)                              PaintColor                                                  OFFSET(getStruct<T>, {0xAC, 16, 0, 0})
	CMember(EMeshVertexPaintColorBlendMode)            BlendMode                                                   OFFSET(get<T>, {0xBC, 1, 0, 0})
	CMember(EMeshVertexPaintSecondaryActionType)       SecondaryActionType                                         OFFSET(get<T>, {0xBD, 1, 0, 0})
	SMember(FLinearColor)                              EraseColor                                                  OFFSET(getStruct<T>, {0xC0, 16, 0, 0})
	DMember(float)                                     SmoothStrength                                              OFFSET(get<float>, {0xD0, 4, 0, 0})
	SMember(FModelingToolsColorChannelFilter)          ChannelFilter                                               OFFSET(getStruct<T>, {0xD4, 4, 0, 0})
	DMember(bool)                                      bHardEdges                                                  OFFSET(get<bool>, {0xD8, 1, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.VertexPaintBrushFilterProperties
/// Size: 0x0018 (0x0000A8 - 0x0000C0)
class UVertexPaintBrushFilterProperties : public UInteractiveToolPropertySet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	CMember(EMeshVertexPaintBrushAreaType)             BrushAreaMode                                               OFFSET(get<T>, {0xA8, 1, 0, 0})
	DMember(float)                                     AngleThreshold                                              OFFSET(get<float>, {0xAC, 4, 0, 0})
	DMember(bool)                                      bUVSeams                                                    OFFSET(get<bool>, {0xB0, 1, 0, 0})
	DMember(bool)                                      bNormalSeams                                                OFFSET(get<bool>, {0xB1, 1, 0, 0})
	CMember(EMeshVertexPaintVisibilityType)            VisibilityFilter                                            OFFSET(get<T>, {0xB2, 1, 0, 0})
	DMember(int32_t)                                   MinTriVertCount                                             OFFSET(get<int32_t>, {0xB4, 4, 0, 0})
	CMember(EMeshVertexPaintMaterialMode)              MaterialMode                                                OFFSET(get<T>, {0xB8, 1, 0, 0})
	DMember(bool)                                      bShowHitColor                                               OFFSET(get<bool>, {0xB9, 1, 0, 0})
	CMember(EMeshVertexPaintInteractionType)           CurrentSubToolType                                          OFFSET(get<T>, {0xBA, 1, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.MeshVertexPaintToolActionPropertySet
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UMeshVertexPaintToolActionPropertySet : public UInteractiveToolPropertySet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
};

/// Class /Script/MeshModelingToolsExp.MeshVertexPaintToolQuickActions
/// Size: 0x0000 (0x0000B0 - 0x0000B0)
class UMeshVertexPaintToolQuickActions : public UMeshVertexPaintToolActionPropertySet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:


	/// Functions
	// Function /Script/MeshModelingToolsExp.MeshVertexPaintToolQuickActions.PaintAll
	// void PaintAll();                                                                                                         // [0xbd3a38c] Final|Native|Public  
	// Function /Script/MeshModelingToolsExp.MeshVertexPaintToolQuickActions.FillWhite
	// void FillWhite();                                                                                                        // [0xbd3a284] Final|Native|Public  
	// Function /Script/MeshModelingToolsExp.MeshVertexPaintToolQuickActions.FillBlack
	// void FillBlack();                                                                                                        // [0xbd3a26c] Final|Native|Public  
	// Function /Script/MeshModelingToolsExp.MeshVertexPaintToolQuickActions.EraseAll
	// void EraseAll();                                                                                                         // [0xbd3a23c] Final|Native|Public  
};

/// Class /Script/MeshModelingToolsExp.MeshVertexPaintToolUtilityActions
/// Size: 0x0048 (0x0000B0 - 0x0000F8)
class UMeshVertexPaintToolUtilityActions : public UMeshVertexPaintToolActionPropertySet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
	CMember(EMeshVertexPaintToolUtilityOperations)     Operation                                                   OFFSET(get<T>, {0xB0, 4, 0, 0})
	CMember(EMeshVertexPaintColorChannel)              SourceChannel                                               OFFSET(get<T>, {0xB4, 1, 0, 0})
	DMember(float)                                     SourceValue                                                 OFFSET(get<float>, {0xB8, 4, 0, 0})
	SMember(FName)                                     WeightMap                                                   OFFSET(getStruct<T>, {0xBC, 4, 0, 0})
	CMember(TArray<FString>)                           WeightMapsList                                              OFFSET(get<T>, {0xC0, 16, 0, 0})
	SMember(FModelingToolsColorChannelFilter)          TargetChannels                                              OFFSET(getStruct<T>, {0xD0, 4, 0, 0})
	CMember(EMeshVertexPaintColorChannel)              TargetChannel                                               OFFSET(get<T>, {0xD4, 1, 0, 0})
	DMember(bool)                                      bCopyToHiRes                                                OFFSET(get<bool>, {0xD5, 1, 0, 0})
	SMember(FString)                                   CopyToLODName                                               OFFSET(getStruct<T>, {0xD8, 16, 0, 0})
	CMember(TArray<FString>)                           LODNamesList                                                OFFSET(get<T>, {0xE8, 16, 0, 0})


	/// Functions
	// Function /Script/MeshModelingToolsExp.MeshVertexPaintToolUtilityActions.GetWeightMapsFunc
	// TArray<FString> GetWeightMapsFunc();                                                                                     // [0xbcef0e4] Final|Native|Public  
	// Function /Script/MeshModelingToolsExp.MeshVertexPaintToolUtilityActions.GetLODNamesFunc
	// TArray<FString> GetLODNamesFunc();                                                                                       // [0xbcb93d4] Final|Native|Public|Const 
	// Function /Script/MeshModelingToolsExp.MeshVertexPaintToolUtilityActions.ApplySelectedOperation
	// void ApplySelectedOperation();                                                                                           // [0xbd3a10c] Final|Native|Public  
};

/// Class /Script/MeshModelingToolsExp.MeshVertexPaintTool
/// Size: 0x05A0 (0x000BA0 - 0x001140)
class UMeshVertexPaintTool : public UMeshSculptToolBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 4416;

public:
	CMember(class UPolygroupLayersProperties*)         PolygroupLayerProperties                                    OFFSET(get<T>, {0xBA8, 8, 0, 0})
	CMember(class UVertexPaintBasicProperties*)        BasicProperties                                             OFFSET(get<T>, {0xBB0, 8, 0, 0})
	CMember(class UVertexPaintBrushFilterProperties*)  FilterProperties                                            OFFSET(get<T>, {0xBB8, 8, 0, 0})
	CMember(class UVertexColorPaintBrushOpProps*)      PaintBrushOpProperties                                      OFFSET(get<T>, {0xBC0, 8, 0, 0})
	CMember(class UVertexColorPaintBrushOpProps*)      EraseBrushOpProperties                                      OFFSET(get<T>, {0xBC8, 8, 0, 0})
	CMember(class UMeshVertexPaintToolQuickActions*)   QuickActions                                                OFFSET(get<T>, {0xBD0, 8, 0, 0})
	CMember(class UMeshVertexPaintToolUtilityActions*) UtilityActions                                              OFFSET(get<T>, {0xBD8, 8, 0, 0})
	CMember(class UPolyLassoMarqueeMechanic*)          PolyLassoMechanic                                           OFFSET(get<T>, {0xBE8, 8, 0, 0})
	CMember(class AInternalToolFrameworkActor*)        PreviewMeshActor                                            OFFSET(get<T>, {0xBF0, 8, 0, 0})
	CMember(class UDynamicMeshComponent*)              DynamicMeshComponent                                        OFFSET(get<T>, {0xBF8, 8, 0, 0})
	CMember(class UMeshElementsVisualizer*)            MeshElementsDisplay                                         OFFSET(get<T>, {0xC00, 8, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.MeshVertexSculptToolBuilder
/// Size: 0x0000 (0x000030 - 0x000030)
class UMeshVertexSculptToolBuilder : public UMeshSurfacePointMeshEditingToolBuilder
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/MeshModelingToolsExp.VertexBrushSculptProperties
/// Size: 0x0010 (0x0000A8 - 0x0000B8)
class UVertexBrushSculptProperties : public UInteractiveToolPropertySet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	CMember(EMeshVertexSculptBrushType)                PrimaryBrushType                                            OFFSET(get<T>, {0xA8, 1, 0, 0})
	CMember(EMeshSculptFalloffType)                    PrimaryFalloffType                                          OFFSET(get<T>, {0xA9, 1, 0, 0})
	CMember(EMeshVertexSculptBrushFilterType)          BrushFilter                                                 OFFSET(get<T>, {0xAA, 1, 0, 0})
	DMember(bool)                                      bFreezeTarget                                               OFFSET(get<bool>, {0xAB, 1, 0, 0})
	CMember(TWeakObjectPtr<UMeshVertexSculptTool*>)    Tool                                                        OFFSET(get<T>, {0xAC, 8, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.VertexBrushAlphaProperties
/// Size: 0x0020 (0x0000A8 - 0x0000C8)
class UVertexBrushAlphaProperties : public UInteractiveToolPropertySet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	CMember(class UTexture2D*)                         Alpha                                                       OFFSET(get<T>, {0xA8, 8, 0, 0})
	DMember(float)                                     RotationAngle                                               OFFSET(get<float>, {0xB0, 4, 0, 0})
	DMember(bool)                                      bRandomize                                                  OFFSET(get<bool>, {0xB4, 1, 0, 0})
	DMember(float)                                     RandomRange                                                 OFFSET(get<float>, {0xB8, 4, 0, 0})
	CMember(TWeakObjectPtr<UMeshVertexSculptTool*>)    Tool                                                        OFFSET(get<T>, {0xBC, 8, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.MeshSymmetryProperties
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UMeshSymmetryProperties : public UInteractiveToolPropertySet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	DMember(bool)                                      bEnableSymmetry                                             OFFSET(get<bool>, {0xA8, 1, 0, 0})
	DMember(bool)                                      bSymmetryCanBeEnabled                                       OFFSET(get<bool>, {0xA9, 1, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.MeshVertexSculptTool
/// Size: 0x0960 (0x000BA0 - 0x001500)
class UMeshVertexSculptTool : public UMeshSculptToolBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5376;

public:
	CMember(class UVertexBrushSculptProperties*)       SculptProperties                                            OFFSET(get<T>, {0xBA8, 8, 0, 0})
	CMember(class UVertexBrushAlphaProperties*)        AlphaProperties                                             OFFSET(get<T>, {0xBB0, 8, 0, 0})
	CMember(class UTexture2D*)                         BrushAlpha                                                  OFFSET(get<T>, {0xBB8, 8, 0, 0})
	CMember(class UMeshSymmetryProperties*)            SymmetryProperties                                          OFFSET(get<T>, {0xBC0, 8, 0, 0})
	CMember(class AInternalToolFrameworkActor*)        PreviewMeshActor                                            OFFSET(get<T>, {0xBE0, 8, 0, 0})
	CMember(class UDynamicMeshComponent*)              DynamicMeshComponent                                        OFFSET(get<T>, {0xBE8, 8, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.MirrorToolBuilder
/// Size: 0x0000 (0x000028 - 0x000028)
class UMirrorToolBuilder : public UMultiSelectionMeshEditingToolBuilder
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/MeshModelingToolsExp.MirrorToolProperties
/// Size: 0x0018 (0x0000A8 - 0x0000C0)
class UMirrorToolProperties : public UInteractiveToolPropertySet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	CMember(EMirrorOperationMode)                      OperationMode                                               OFFSET(get<T>, {0xA8, 1, 0, 0})
	DMember(bool)                                      bCropAlongMirrorPlaneFirst                                  OFFSET(get<bool>, {0xA9, 1, 0, 0})
	DMember(bool)                                      bSimplifyAlongCrop                                          OFFSET(get<bool>, {0xAA, 1, 0, 0})
	DMember(bool)                                      bWeldVerticesOnMirrorPlane                                  OFFSET(get<bool>, {0xAB, 1, 0, 0})
	DMember(double)                                    PlaneTolerance                                              OFFSET(get<double>, {0xB0, 8, 0, 0})
	DMember(bool)                                      bAllowBowtieVertexCreation                                  OFFSET(get<bool>, {0xB8, 1, 0, 0})
	DMember(bool)                                      bShowPreview                                                OFFSET(get<bool>, {0xB9, 1, 0, 0})
	CMember(EMirrorSaveMode)                           WriteTo                                                     OFFSET(get<T>, {0xBA, 1, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.MirrorOperatorFactory
/// Size: 0x0018 (0x000028 - 0x000040)
class UMirrorOperatorFactory : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(class UMirrorTool*)                        MirrorTool                                                  OFFSET(get<T>, {0x30, 8, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.MirrorToolActionPropertySet
/// Size: 0x0010 (0x0000A8 - 0x0000B8)
class UMirrorToolActionPropertySet : public UInteractiveToolPropertySet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	DMember(bool)                                      bButtonsOnlyChangeOrientation                               OFFSET(get<bool>, {0xB0, 1, 0, 0})


	/// Functions
	// Function /Script/MeshModelingToolsExp.MirrorToolActionPropertySet.Up
	// void Up();                                                                                                               // [0xbd3a490] Final|Native|Public  
	// Function /Script/MeshModelingToolsExp.MirrorToolActionPropertySet.ShiftToCenter
	// void ShiftToCenter();                                                                                                    // [0xbd3a448] Final|Native|Public  
	// Function /Script/MeshModelingToolsExp.MirrorToolActionPropertySet.Right
	// void Right();                                                                                                            // [0xbd3a3a4] Final|Native|Public  
	// Function /Script/MeshModelingToolsExp.MirrorToolActionPropertySet.Left
	// void Left();                                                                                                             // [0xbd3a35c] Final|Native|Public  
	// Function /Script/MeshModelingToolsExp.MirrorToolActionPropertySet.Forward
	// void Forward();                                                                                                          // [0xbd3a2e4] Final|Native|Public  
	// Function /Script/MeshModelingToolsExp.MirrorToolActionPropertySet.Down
	// void Down();                                                                                                             // [0xbd3a20c] Final|Native|Public  
	// Function /Script/MeshModelingToolsExp.MirrorToolActionPropertySet.Backward
	// void Backward();                                                                                                         // [0xbd3a124] Final|Native|Public  
};

/// Class /Script/MeshModelingToolsExp.MirrorTool
/// Size: 0x00C0 (0x0000C0 - 0x000180)
class UMirrorTool : public UMultiSelectionMeshEditingTool
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 384;

public:
	CMember(class UMirrorToolProperties*)              Settings                                                    OFFSET(get<T>, {0xC8, 8, 0, 0})
	CMember(class UCreateMeshObjectTypeProperties*)    OutputTypeProperties                                        OFFSET(get<T>, {0xD0, 8, 0, 0})
	CMember(class UOnAcceptHandleSourcesProperties*)   HandleSourcesProperties                                     OFFSET(get<T>, {0xD8, 8, 0, 0})
	CMember(class UMirrorToolActionPropertySet*)       ToolActions                                                 OFFSET(get<T>, {0xE0, 8, 0, 0})
	CMember(TArray<class UDynamicMeshReplacementChangeTarget*>) MeshesToMirror                                     OFFSET(get<T>, {0xE8, 16, 0, 0})
	CMember(TArray<class UMeshOpPreviewWithBackgroundCompute*>) Previews                                           OFFSET(get<T>, {0xF8, 16, 0, 0})
	CMember(class UConstructionPlaneMechanic*)         PlaneMechanic                                               OFFSET(get<T>, {0x138, 8, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.OffsetMeshToolProperties
/// Size: 0x0010 (0x0000A8 - 0x0000B8)
class UOffsetMeshToolProperties : public UInteractiveToolPropertySet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	CMember(EOffsetMeshToolOffsetType)                 OffsetType                                                  OFFSET(get<T>, {0xA8, 1, 0, 0})
	DMember(float)                                     Distance                                                    OFFSET(get<float>, {0xAC, 4, 0, 0})
	DMember(bool)                                      bCreateShell                                                OFFSET(get<bool>, {0xB0, 1, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.OffsetWeightMapSetProperties
/// Size: 0x0008 (0x0000C8 - 0x0000D0)
class UOffsetWeightMapSetProperties : public UWeightMapSetProperties
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	DMember(float)                                     MinDistance                                                 OFFSET(get<float>, {0xC8, 4, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.IterativeOffsetProperties
/// Size: 0x0010 (0x0000A8 - 0x0000B8)
class UIterativeOffsetProperties : public UInteractiveToolPropertySet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	DMember(int32_t)                                   Steps                                                       OFFSET(get<int32_t>, {0xA8, 4, 0, 0})
	DMember(bool)                                      bOffsetBoundaries                                           OFFSET(get<bool>, {0xAC, 1, 0, 0})
	DMember(float)                                     SmoothingPerStep                                            OFFSET(get<float>, {0xB0, 4, 0, 0})
	DMember(bool)                                      bReprojectSmooth                                            OFFSET(get<bool>, {0xB4, 1, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.ImplicitOffsetProperties
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UImplicitOffsetProperties : public UInteractiveToolPropertySet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	DMember(float)                                     Smoothness                                                  OFFSET(get<float>, {0xA8, 4, 0, 0})
	DMember(bool)                                      bPreserveUVs                                                OFFSET(get<bool>, {0xAC, 1, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.OffsetMeshTool
/// Size: 0x0020 (0x000410 - 0x000430)
class UOffsetMeshTool : public UBaseMeshProcessingTool
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1072;

public:
	CMember(class UOffsetMeshToolProperties*)          OffsetProperties                                            OFFSET(get<T>, {0x410, 8, 0, 0})
	CMember(class UIterativeOffsetProperties*)         IterativeProperties                                         OFFSET(get<T>, {0x418, 8, 0, 0})
	CMember(class UImplicitOffsetProperties*)          ImplicitProperties                                          OFFSET(get<T>, {0x420, 8, 0, 0})
	CMember(class UOffsetWeightMapSetProperties*)      WeightMapProperties                                         OFFSET(get<T>, {0x428, 8, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.OffsetMeshToolBuilder
/// Size: 0x0000 (0x000028 - 0x000028)
class UOffsetMeshToolBuilder : public UBaseMeshProcessingToolBuilder
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/MeshModelingToolsExp.PhysicsObjectToolPropertySet
/// Size: 0x0068 (0x0000A8 - 0x000110)
class UPhysicsObjectToolPropertySet : public UInteractiveToolPropertySet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
	SMember(FString)                                   ObjectName                                                  OFFSET(getStruct<T>, {0xA8, 16, 0, 0})
	CMember(ECollisionGeometryMode)                    CollisionType                                               OFFSET(get<T>, {0xB8, 4, 0, 0})
	CMember(TArray<FPhysicsSphereData>)                Spheres                                                     OFFSET(get<T>, {0xC0, 16, 0, 0})
	CMember(TArray<FPhysicsBoxData>)                   Boxes                                                       OFFSET(get<T>, {0xD0, 16, 0, 0})
	CMember(TArray<FPhysicsCapsuleData>)               Capsules                                                    OFFSET(get<T>, {0xE0, 16, 0, 0})
	CMember(TArray<FPhysicsConvexData>)                Convexes                                                    OFFSET(get<T>, {0xF0, 16, 0, 0})
	CMember(TArray<FPhysicsLevelSetData>)              LevelSets                                                   OFFSET(get<T>, {0x100, 16, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.CollisionGeometryVisualizationProperties
/// Size: 0x0030 (0x0000A8 - 0x0000D8)
class UCollisionGeometryVisualizationProperties : public UInteractiveToolPropertySet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	DMember(bool)                                      bShowCollision                                              OFFSET(get<bool>, {0xA8, 1, 0, 0})
	DMember(bool)                                      bShowSolid                                                  OFFSET(get<bool>, {0xA9, 1, 0, 0})
	DMember(float)                                     LineThickness                                               OFFSET(get<float>, {0xAC, 4, 0, 0})
	DMember(bool)                                      bShowHidden                                                 OFFSET(get<bool>, {0xB0, 1, 0, 0})
	DMember(bool)                                      bRandomColors                                               OFFSET(get<bool>, {0xB1, 1, 0, 0})
	SMember(FColor)                                    Color                                                       OFFSET(getStruct<T>, {0xB4, 4, 0, 0})
	CMember(class UMaterialInterface*)                 LineMaterial                                                OFFSET(get<T>, {0xB8, 8, 0, 0})
	CMember(class UMaterialInterface*)                 LineMaterialShowingHidden                                   OFFSET(get<T>, {0xC0, 8, 0, 0})
	CMember(class UMaterialInterface*)                 TriangleMaterial                                            OFFSET(get<T>, {0xC8, 8, 0, 0})
	DMember(bool)                                      bEnableShowCollision                                        OFFSET(get<bool>, {0xD0, 1, 0, 0})
	DMember(bool)                                      bEnableShowSolid                                            OFFSET(get<bool>, {0xD1, 1, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.ExtractCollisionGeometryToolBuilder
/// Size: 0x0000 (0x000028 - 0x000028)
class UExtractCollisionGeometryToolBuilder : public USingleSelectionMeshEditingToolBuilder
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/MeshModelingToolsExp.ExtractCollisionToolProperties
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UExtractCollisionToolProperties : public UInteractiveToolPropertySet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	CMember(EExtractCollisionOutputType)               CollisionType                                               OFFSET(get<T>, {0xA8, 1, 0, 0})
	DMember(bool)                                      bOutputSeparateMeshes                                       OFFSET(get<bool>, {0xA9, 1, 0, 0})
	DMember(bool)                                      bShowPreview                                                OFFSET(get<bool>, {0xAA, 1, 0, 0})
	DMember(bool)                                      bShowInputMesh                                              OFFSET(get<bool>, {0xAB, 1, 0, 0})
	DMember(bool)                                      bWeldEdges                                                  OFFSET(get<bool>, {0xAC, 1, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.ExtractCollisionGeometryTool
/// Size: 0x0278 (0x0000B8 - 0x000330)
class UExtractCollisionGeometryTool : public USingleSelectionMeshEditingTool
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 816;

public:
	CMember(class UCreateMeshObjectTypeProperties*)    OutputTypeProperties                                        OFFSET(get<T>, {0xB8, 8, 0, 0})
	CMember(class UExtractCollisionToolProperties*)    Settings                                                    OFFSET(get<T>, {0xC0, 8, 0, 0})
	CMember(class UCollisionGeometryVisualizationProperties*) VizSettings                                          OFFSET(get<T>, {0xC8, 8, 0, 0})
	CMember(class UPhysicsObjectToolPropertySet*)      ObjectProps                                                 OFFSET(get<T>, {0xD0, 8, 0, 0})
	CMember(class UPreviewGeometry*)                   PreviewElements                                             OFFSET(get<T>, {0xD8, 8, 0, 0})
	CMember(class UPreviewMesh*)                       PreviewMesh                                                 OFFSET(get<T>, {0xE0, 8, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.PhysicsInspectorToolBuilder
/// Size: 0x0000 (0x000028 - 0x000028)
class UPhysicsInspectorToolBuilder : public UMultiSelectionMeshEditingToolBuilder
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/MeshModelingToolsExp.PhysicsInspectorTool
/// Size: 0x0040 (0x0000C0 - 0x000100)
class UPhysicsInspectorTool : public UMultiSelectionMeshEditingTool
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	CMember(class UCollisionGeometryVisualizationProperties*) VizSettings                                          OFFSET(get<T>, {0xC8, 8, 0, 0})
	CMember(TArray<class UPhysicsObjectToolPropertySet*>) ObjectData                                               OFFSET(get<T>, {0xD0, 16, 0, 0})
	CMember(TArray<class UPreviewGeometry*>)           PreviewElements                                             OFFSET(get<T>, {0xE0, 16, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.SetCollisionGeometryToolBuilder
/// Size: 0x0000 (0x000028 - 0x000028)
class USetCollisionGeometryToolBuilder : public UMultiSelectionMeshEditingToolBuilder
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/MeshModelingToolsExp.SetCollisionGeometryToolProperties
/// Size: 0x0068 (0x0000A8 - 0x000110)
class USetCollisionGeometryToolProperties : public UInteractiveToolPropertySet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
	CMember(ECollisionGeometryType)                    GeometryType                                                OFFSET(get<T>, {0xA8, 4, 0, 0})
	DMember(bool)                                      bAppendToExisting                                           OFFSET(get<bool>, {0xAC, 1, 0, 0})
	DMember(bool)                                      bUseWorldSpace                                              OFFSET(get<bool>, {0xAD, 1, 0, 0})
	CMember(ESetCollisionGeometryInputMode)            InputMode                                                   OFFSET(get<T>, {0xB0, 4, 0, 0})
	DMember(bool)                                      bRemoveContained                                            OFFSET(get<bool>, {0xB4, 1, 0, 0})
	DMember(bool)                                      bEnableMaxCount                                             OFFSET(get<bool>, {0xB5, 1, 0, 0})
	DMember(int32_t)                                   MaxCount                                                    OFFSET(get<int32_t>, {0xB8, 4, 0, 0})
	DMember(float)                                     MinThickness                                                OFFSET(get<float>, {0xBC, 4, 0, 0})
	DMember(bool)                                      bDetectBoxes                                                OFFSET(get<bool>, {0xC0, 1, 0, 0})
	DMember(bool)                                      bDetectSpheres                                              OFFSET(get<bool>, {0xC1, 1, 0, 0})
	DMember(bool)                                      bDetectCapsules                                             OFFSET(get<bool>, {0xC2, 1, 0, 0})
	DMember(bool)                                      bMergeCollisionShapes                                       OFFSET(get<bool>, {0xC3, 1, 0, 0})
	DMember(int32_t)                                   MergeAboveCount                                             OFFSET(get<int32_t>, {0xC4, 4, 0, 0})
	DMember(bool)                                      bUseNegativeSpaceInMerge                                    OFFSET(get<bool>, {0xC8, 1, 0, 0})
	DMember(bool)                                      bSimplifyHulls                                              OFFSET(get<bool>, {0xC9, 1, 0, 0})
	DMember(int32_t)                                   HullTargetFaceCount                                         OFFSET(get<int32_t>, {0xCC, 4, 0, 0})
	DMember(int32_t)                                   MaxHullsPerMesh                                             OFFSET(get<int32_t>, {0xD0, 4, 0, 0})
	DMember(float)                                     ConvexDecompositionSearchFactor                             OFFSET(get<float>, {0xD4, 4, 0, 0})
	DMember(float)                                     AddHullsErrorTolerance                                      OFFSET(get<float>, {0xD8, 4, 0, 0})
	DMember(float)                                     MinPartThickness                                            OFFSET(get<float>, {0xDC, 4, 0, 0})
	DMember(bool)                                      bUseNegativeSpaceInDecomposition                            OFFSET(get<bool>, {0xE0, 1, 0, 0})
	DMember(double)                                    NegativeSpaceTolerance                                      OFFSET(get<double>, {0xE8, 8, 0, 0})
	DMember(double)                                    NegativeSpaceMinRadius                                      OFFSET(get<double>, {0xF0, 8, 0, 0})
	DMember(bool)                                      bIgnoreInternalNegativeSpace                                OFFSET(get<bool>, {0xF8, 1, 0, 0})
	DMember(float)                                     HullTolerance                                               OFFSET(get<float>, {0xFC, 4, 0, 0})
	CMember(EProjectedHullAxis)                        SweepAxis                                                   OFFSET(get<T>, {0x100, 4, 0, 0})
	DMember(int32_t)                                   LevelSetResolution                                          OFFSET(get<int32_t>, {0x104, 4, 0, 0})
	CMember(ECollisionGeometryMode)                    SetCollisionType                                            OFFSET(get<T>, {0x108, 4, 0, 0})
	DMember(bool)                                      bShowTargetMesh                                             OFFSET(get<bool>, {0x10C, 1, 0, 0})
	DMember(bool)                                      bUsingMultipleInputs                                        OFFSET(get<bool>, {0x10D, 1, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.SetCollisionGeometryTool
/// Size: 0x02D0 (0x0000C0 - 0x000390)
class USetCollisionGeometryTool : public UMultiSelectionMeshEditingTool
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 912;

public:
	CMember(class USetCollisionGeometryToolProperties*) Settings                                                   OFFSET(get<T>, {0xD0, 8, 0, 0})
	CMember(class UPolygroupLayersProperties*)         PolygroupLayerProperties                                    OFFSET(get<T>, {0xD8, 8, 0, 0})
	CMember(class UCollisionGeometryVisualizationProperties*) VizSettings                                          OFFSET(get<T>, {0xE0, 8, 0, 0})
	CMember(class UPhysicsObjectToolPropertySet*)      CollisionProps                                              OFFSET(get<T>, {0xE8, 8, 0, 0})
	CMember(class UPreviewGeometry*)                   PreviewGeom                                                 OFFSET(get<T>, {0xF8, 8, 0, 0})
	CMember(class UGeometrySelectionVisualizationProperties*) GeometrySelectionVizProperties                       OFFSET(get<T>, {0x380, 8, 0, 0})
	CMember(class UPreviewGeometry*)                   GeometrySelectionViz                                        OFFSET(get<T>, {0x388, 8, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.SimpleCollisionEditorToolBuilder
/// Size: 0x0000 (0x000028 - 0x000028)
class USimpleCollisionEditorToolBuilder : public USingleSelectionMeshEditingToolBuilder
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/MeshModelingToolsExp.SimpleCollisionEditorToolActionProperties
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class USimpleCollisionEditorToolActionProperties : public UInteractiveToolPropertySet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:


	/// Functions
	// Function /Script/MeshModelingToolsExp.SimpleCollisionEditorToolActionProperties.Duplicate
	// void Duplicate();                                                                                                        // [0xbd6f68c] Final|Native|Public  
	// Function /Script/MeshModelingToolsExp.SimpleCollisionEditorToolActionProperties.DeleteAll
	// void DeleteAll();                                                                                                        // [0xbd6f678] Final|Native|Public  
	// Function /Script/MeshModelingToolsExp.SimpleCollisionEditorToolActionProperties.Delete
	// void Delete();                                                                                                           // [0xbd6f664] Final|Native|Public  
	// Function /Script/MeshModelingToolsExp.SimpleCollisionEditorToolActionProperties.AddSphere
	// void AddSphere();                                                                                                        // [0xbd6f638] Final|Native|Public  
	// Function /Script/MeshModelingToolsExp.SimpleCollisionEditorToolActionProperties.AddCapsule
	// void AddCapsule();                                                                                                       // [0xbd6f624] Final|Native|Public  
	// Function /Script/MeshModelingToolsExp.SimpleCollisionEditorToolActionProperties.AddBox
	// void AddBox();                                                                                                           // [0xbd6f610] Final|Native|Public  
};

/// Class /Script/MeshModelingToolsExp.SimpleCollisionEditorTool
/// Size: 0x0030 (0x0000B8 - 0x0000E8)
class USimpleCollisionEditorTool : public USingleSelectionMeshEditingTool
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
	CMember(class USimpleCollisionEditorToolActionProperties*) ActionProperties                                    OFFSET(get<T>, {0xC0, 8, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.PlaneCutToolBuilder
/// Size: 0x0000 (0x000028 - 0x000028)
class UPlaneCutToolBuilder : public UMultiSelectionMeshEditingToolBuilder
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/MeshModelingToolsExp.PlaneCutToolProperties
/// Size: 0x0010 (0x0000A8 - 0x0000B8)
class UPlaneCutToolProperties : public UInteractiveToolPropertySet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	DMember(bool)                                      bKeepBothHalves                                             OFFSET(get<bool>, {0xA8, 1, 0, 0})
	DMember(float)                                     SpacingBetweenHalves                                        OFFSET(get<float>, {0xAC, 4, 0, 0})
	DMember(bool)                                      bExportSeparatedPiecesAsNewMeshAssets                       OFFSET(get<bool>, {0xB0, 1, 0, 0})
	DMember(bool)                                      bShowPreview                                                OFFSET(get<bool>, {0xB1, 1, 0, 0})
	DMember(bool)                                      bFillCutHole                                                OFFSET(get<bool>, {0xB2, 1, 0, 0})
	DMember(bool)                                      bFillSpans                                                  OFFSET(get<bool>, {0xB3, 1, 0, 0})
	DMember(bool)                                      bSimplifyAlongCut                                           OFFSET(get<bool>, {0xB4, 1, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.PlaneCutOperatorFactory
/// Size: 0x0018 (0x000028 - 0x000040)
class UPlaneCutOperatorFactory : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(class UPlaneCutTool*)                      CutTool                                                     OFFSET(get<T>, {0x30, 8, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.PlaneCutTool
/// Size: 0x00E0 (0x0000C0 - 0x0001A0)
class UPlaneCutTool : public UMultiSelectionMeshEditingTool
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
	CMember(class UPlaneCutToolProperties*)            BasicProperties                                             OFFSET(get<T>, {0xC0, 8, 0, 0})
	CMember(TArray<class UMeshOpPreviewWithBackgroundCompute*>) Previews                                           OFFSET(get<T>, {0xC8, 16, 0, 0})
	CMember(TArray<class UDynamicMeshReplacementChangeTarget*>) MeshesToCut                                        OFFSET(get<T>, {0xD8, 16, 0, 0})
	CMember(class UConstructionPlaneMechanic*)         PlaneMechanic                                               OFFSET(get<T>, {0xE8, 8, 0, 0})


	/// Functions
	// Function /Script/MeshModelingToolsExp.PlaneCutTool.FlipPlane
	// void FlipPlane();                                                                                                        // [0xbd6f6a0] Final|Native|Protected 
	// Function /Script/MeshModelingToolsExp.PlaneCutTool.Cut
	// void Cut();                                                                                                              // [0xbd6f64c] Final|Native|Protected 
};

/// Class /Script/MeshModelingToolsExp.ProjectToTargetToolBuilder
/// Size: 0x0000 (0x000028 - 0x000028)
class UProjectToTargetToolBuilder : public UMultiSelectionMeshEditingToolBuilder
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/MeshModelingToolsExp.RemeshMeshToolProperties
/// Size: 0x0028 (0x0000B8 - 0x0000E0)
class URemeshMeshToolProperties : public URemeshProperties
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	DMember(int32_t)                                   TargetTriangleCount                                         OFFSET(get<int32_t>, {0xB8, 4, 0, 0})
	CMember(ERemeshSmoothingType)                      SmoothingType                                               OFFSET(get<T>, {0xBC, 1, 0, 0})
	DMember(bool)                                      bDiscardAttributes                                          OFFSET(get<bool>, {0xBD, 1, 0, 0})
	DMember(bool)                                      bShowGroupColors                                            OFFSET(get<bool>, {0xBE, 1, 0, 0})
	CMember(ERemeshType)                               RemeshType                                                  OFFSET(get<T>, {0xBF, 1, 0, 0})
	DMember(int32_t)                                   RemeshIterations                                            OFFSET(get<int32_t>, {0xC0, 4, 0, 0})
	DMember(int32_t)                                   MaxRemeshIterations                                         OFFSET(get<int32_t>, {0xC4, 4, 0, 0})
	DMember(int32_t)                                   ExtraProjectionIterations                                   OFFSET(get<int32_t>, {0xC8, 4, 0, 0})
	DMember(bool)                                      bUseTargetEdgeLength                                        OFFSET(get<bool>, {0xCC, 1, 0, 0})
	DMember(float)                                     TargetEdgeLength                                            OFFSET(get<float>, {0xD0, 4, 0, 0})
	DMember(bool)                                      bReproject                                                  OFFSET(get<bool>, {0xD4, 1, 0, 0})
	DMember(bool)                                      bReprojectConstraints                                       OFFSET(get<bool>, {0xD5, 1, 0, 0})
	DMember(float)                                     BoundaryCornerAngleThreshold                                OFFSET(get<float>, {0xD8, 4, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.ProjectToTargetToolProperties
/// Size: 0x0020 (0x0000E0 - 0x000100)
class UProjectToTargetToolProperties : public URemeshMeshToolProperties
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	DMember(bool)                                      bWorldSpace                                                 OFFSET(get<bool>, {0xE0, 1, 0, 0})
	DMember(bool)                                      bParallel                                                   OFFSET(get<bool>, {0xE1, 1, 0, 0})
	DMember(int32_t)                                   FaceProjectionPassesPerRemeshIteration                      OFFSET(get<int32_t>, {0xE4, 4, 0, 0})
	DMember(float)                                     SurfaceProjectionSpeed                                      OFFSET(get<float>, {0xE8, 4, 0, 0})
	DMember(float)                                     NormalAlignmentSpeed                                        OFFSET(get<float>, {0xEC, 4, 0, 0})
	DMember(bool)                                      bSmoothInFillAreas                                          OFFSET(get<bool>, {0xF0, 1, 0, 0})
	DMember(float)                                     FillAreaDistanceMultiplier                                  OFFSET(get<float>, {0xF4, 4, 0, 0})
	DMember(float)                                     FillAreaSmoothMultiplier                                    OFFSET(get<float>, {0xF8, 4, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.RemeshMeshTool
/// Size: 0x0050 (0x0000C0 - 0x000110)
class URemeshMeshTool : public UMultiSelectionMeshEditingTool
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
	CMember(class URemeshMeshToolProperties*)          BasicProperties                                             OFFSET(get<T>, {0xC8, 8, 0, 0})
	CMember(class UMeshStatisticsProperties*)          MeshStatisticsProperties                                    OFFSET(get<T>, {0xD0, 8, 0, 0})
	CMember(class UMeshOpPreviewWithBackgroundCompute*) Preview                                                    OFFSET(get<T>, {0xD8, 8, 0, 0})
	CMember(class UMeshElementsVisualizer*)            MeshElementsDisplay                                         OFFSET(get<T>, {0xE0, 8, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.ProjectToTargetTool
/// Size: 0x0010 (0x000110 - 0x000120)
class UProjectToTargetTool : public URemeshMeshTool
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
};

/// Class /Script/MeshModelingToolsExp.MeshAnalysisProperties
/// Size: 0x0020 (0x0000A8 - 0x0000C8)
class UMeshAnalysisProperties : public UInteractiveToolPropertySet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	SMember(FString)                                   SurfaceArea                                                 OFFSET(getStruct<T>, {0xA8, 16, 0, 0})
	SMember(FString)                                   Volume                                                      OFFSET(getStruct<T>, {0xB8, 16, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.MeshStatisticsProperties
/// Size: 0x0030 (0x0000A8 - 0x0000D8)
class UMeshStatisticsProperties : public UInteractiveToolPropertySet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	SMember(FString)                                   Mesh                                                        OFFSET(getStruct<T>, {0xA8, 16, 0, 0})
	SMember(FString)                                   UV                                                          OFFSET(getStruct<T>, {0xB8, 16, 0, 0})
	SMember(FString)                                   Attributes                                                  OFFSET(getStruct<T>, {0xC8, 16, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.RemeshMeshToolBuilder
/// Size: 0x0000 (0x000028 - 0x000028)
class URemeshMeshToolBuilder : public UMultiSelectionMeshEditingToolBuilder
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/MeshModelingToolsExp.RemoveOccludedTrianglesToolBuilder
/// Size: 0x0000 (0x000028 - 0x000028)
class URemoveOccludedTrianglesToolBuilder : public UMultiSelectionMeshEditingToolBuilder
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/MeshModelingToolsExp.RemoveOccludedTrianglesToolProperties
/// Size: 0x0030 (0x0000A8 - 0x0000D8)
class URemoveOccludedTrianglesToolProperties : public UInteractiveToolPropertySet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	CMember(EOcclusionCalculationUIMode)               OcclusionTestMethod                                         OFFSET(get<T>, {0xA8, 1, 0, 0})
	CMember(EOcclusionTriangleSamplingUIMode)          TriangleSampling                                            OFFSET(get<T>, {0xA9, 1, 0, 0})
	DMember(double)                                    WindingIsoValue                                             OFFSET(get<double>, {0xB0, 8, 0, 0})
	DMember(int32_t)                                   AddRandomRays                                               OFFSET(get<int32_t>, {0xB8, 4, 0, 0})
	DMember(int32_t)                                   AddTriangleSamples                                          OFFSET(get<int32_t>, {0xBC, 4, 0, 0})
	DMember(bool)                                      bOnlySelfOcclude                                            OFFSET(get<bool>, {0xC0, 1, 0, 0})
	DMember(int32_t)                                   ShrinkRemoval                                               OFFSET(get<int32_t>, {0xC4, 4, 0, 0})
	DMember(double)                                    MinAreaIsland                                               OFFSET(get<double>, {0xC8, 8, 0, 0})
	DMember(int32_t)                                   MinTriCountIsland                                           OFFSET(get<int32_t>, {0xD0, 4, 0, 0})
	CMember(EOccludedAction)                           Action                                                      OFFSET(get<T>, {0xD4, 1, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.RemoveOccludedTrianglesAdvancedProperties
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class URemoveOccludedTrianglesAdvancedProperties : public UInteractiveToolPropertySet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
};

/// Class /Script/MeshModelingToolsExp.RemoveOccludedTrianglesOperatorFactory
/// Size: 0x0018 (0x000028 - 0x000040)
class URemoveOccludedTrianglesOperatorFactory : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(class URemoveOccludedTrianglesTool*)       Tool                                                        OFFSET(get<T>, {0x30, 8, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.RemoveOccludedTrianglesTool
/// Size: 0x0120 (0x0000C0 - 0x0001E0)
class URemoveOccludedTrianglesTool : public UMultiSelectionMeshEditingTool
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 480;

public:
	CMember(class URemoveOccludedTrianglesToolProperties*) BasicProperties                                         OFFSET(get<T>, {0xC0, 8, 0, 0})
	CMember(class UPolygroupLayersProperties*)         PolygroupLayersProperties                                   OFFSET(get<T>, {0xC8, 8, 0, 0})
	CMember(class URemoveOccludedTrianglesAdvancedProperties*) AdvancedProperties                                  OFFSET(get<T>, {0xD0, 8, 0, 0})
	CMember(TArray<class UMeshOpPreviewWithBackgroundCompute*>) Previews                                           OFFSET(get<T>, {0xD8, 16, 0, 0})
	CMember(TArray<class UPreviewMesh*>)               PreviewCopies                                               OFFSET(get<T>, {0xE8, 16, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.RevolveBoundaryToolBuilder
/// Size: 0x0000 (0x000028 - 0x000028)
class URevolveBoundaryToolBuilder : public USingleSelectionMeshEditingToolBuilder
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/MeshModelingToolsExp.RevolveBoundaryOperatorFactory
/// Size: 0x0010 (0x000028 - 0x000038)
class URevolveBoundaryOperatorFactory : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(class URevolveBoundaryTool*)               RevolveBoundaryTool                                         OFFSET(get<T>, {0x30, 8, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.RevolveBoundaryToolProperties
/// Size: 0x0030 (0x000118 - 0x000148)
class URevolveBoundaryToolProperties : public URevolveProperties
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 328;

public:
	CMember(ERevolvePropertiesCapFillMode)             CapFillMode                                                 OFFSET(get<T>, {0x118, 1, 0, 0})
	DMember(bool)                                      bDisplayInputMesh                                           OFFSET(get<bool>, {0x119, 1, 0, 0})
	SMember(FVector)                                   AxisOrigin                                                  OFFSET(getStruct<T>, {0x120, 24, 0, 0})
	SMember(FVector2D)                                 AxisOrientation                                             OFFSET(getStruct<T>, {0x138, 16, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.RevolveBoundaryTool
/// Size: 0x0070 (0x0001B0 - 0x000220)
class URevolveBoundaryTool : public UMeshBoundaryToolBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 544;

public:
	CMember(class UCreateMeshObjectTypeProperties*)    OutputTypeProperties                                        OFFSET(get<T>, {0x1C8, 8, 0, 0})
	CMember(class URevolveBoundaryToolProperties*)     Settings                                                    OFFSET(get<T>, {0x1D0, 8, 0, 0})
	CMember(class UNewMeshMaterialProperties*)         MaterialProperties                                          OFFSET(get<T>, {0x1D8, 8, 0, 0})
	CMember(class UConstructionPlaneMechanic*)         PlaneMechanic                                               OFFSET(get<T>, {0x1E0, 8, 0, 0})
	CMember(class UMeshOpPreviewWithBackgroundCompute*) Preview                                                    OFFSET(get<T>, {0x1E8, 8, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.SculptBrushProperties
/// Size: 0x0038 (0x0000A8 - 0x0000E0)
class USculptBrushProperties : public UInteractiveToolPropertySet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	SMember(FBrushToolRadius)                          BrushSize                                                   OFFSET(getStruct<T>, {0xA8, 20, 0, 0})
	DMember(float)                                     BrushFalloffAmount                                          OFFSET(get<float>, {0xBC, 4, 0, 0})
	DMember(bool)                                      bShowFalloff                                                OFFSET(get<bool>, {0xC0, 1, 0, 0})
	DMember(float)                                     Depth                                                       OFFSET(get<float>, {0xC4, 4, 0, 0})
	DMember(bool)                                      bHitBackFaces                                               OFFSET(get<bool>, {0xC8, 1, 0, 0})
	DMember(float)                                     FlowRate                                                    OFFSET(get<float>, {0xCC, 4, 0, 0})
	DMember(float)                                     Spacing                                                     OFFSET(get<float>, {0xD0, 4, 0, 0})
	DMember(float)                                     Lazyness                                                    OFFSET(get<float>, {0xD4, 4, 0, 0})
	DMember(bool)                                      bShowPerBrushProps                                          OFFSET(get<bool>, {0xD8, 1, 0, 0})
	DMember(bool)                                      bShowLazyness                                               OFFSET(get<bool>, {0xD9, 1, 0, 0})
	DMember(bool)                                      bShowFlowRate                                               OFFSET(get<bool>, {0xDA, 1, 0, 0})
	DMember(bool)                                      bShowSpacing                                                OFFSET(get<bool>, {0xDB, 1, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.KelvinBrushProperties
/// Size: 0x0010 (0x0000A8 - 0x0000B8)
class UKelvinBrushProperties : public UInteractiveToolPropertySet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	DMember(float)                                     FalloffDistance                                             OFFSET(get<float>, {0xA8, 4, 0, 0})
	DMember(float)                                     Stiffness                                                   OFFSET(get<float>, {0xAC, 4, 0, 0})
	DMember(float)                                     Incompressiblity                                            OFFSET(get<float>, {0xB0, 4, 0, 0})
	DMember(int32_t)                                   BrushSteps                                                  OFFSET(get<int32_t>, {0xB4, 4, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.WorkPlaneProperties
/// Size: 0x0048 (0x0000A8 - 0x0000F0)
class UWorkPlaneProperties : public UInteractiveToolPropertySet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	DMember(bool)                                      bPropertySetEnabled                                         OFFSET(get<bool>, {0xA8, 1, 0, 0})
	DMember(bool)                                      bShowGizmo                                                  OFFSET(get<bool>, {0xA9, 1, 0, 0})
	SMember(FVector)                                   Position                                                    OFFSET(getStruct<T>, {0xB0, 24, 0, 0})
	SMember(FQuat)                                     Rotation                                                    OFFSET(getStruct<T>, {0xD0, 32, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.SculptMaxBrushProperties
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class USculptMaxBrushProperties : public UInteractiveToolPropertySet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	DMember(float)                                     MaxHeight                                                   OFFSET(get<float>, {0xA8, 4, 0, 0})
	DMember(bool)                                      bFreezeCurrentHeight                                        OFFSET(get<bool>, {0xAC, 1, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.SeamSculptToolBuilder
/// Size: 0x0000 (0x000030 - 0x000030)
class USeamSculptToolBuilder : public UMeshSurfacePointMeshEditingToolBuilder
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/MeshModelingToolsExp.SeamSculptToolProperties
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class USeamSculptToolProperties : public UInteractiveToolPropertySet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	DMember(bool)                                      bShowWireframe                                              OFFSET(get<bool>, {0xA8, 1, 0, 0})
	DMember(bool)                                      bHitBackFaces                                               OFFSET(get<bool>, {0xA9, 1, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.SeamSculptTool
/// Size: 0x0100 (0x0002D0 - 0x0003D0)
class USeamSculptTool : public UDynamicMeshBrushTool
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 976;

public:
	CMember(class USeamSculptToolProperties*)          Settings                                                    OFFSET(get<T>, {0x2D8, 8, 0, 0})
	CMember(class UPreviewGeometry*)                   PreviewGeom                                                 OFFSET(get<T>, {0x2E0, 8, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.SelfUnionMeshesToolProperties
/// Size: 0x0010 (0x0000A8 - 0x0000B8)
class USelfUnionMeshesToolProperties : public UInteractiveToolPropertySet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	DMember(bool)                                      bTrimFlaps                                                  OFFSET(get<bool>, {0xA8, 1, 0, 0})
	DMember(bool)                                      bTryFixHoles                                                OFFSET(get<bool>, {0xA9, 1, 0, 0})
	DMember(bool)                                      bTryCollapseEdges                                           OFFSET(get<bool>, {0xAA, 1, 0, 0})
	DMember(float)                                     WindingThreshold                                            OFFSET(get<float>, {0xAC, 4, 0, 0})
	DMember(bool)                                      bShowNewBoundaryEdges                                       OFFSET(get<bool>, {0xB0, 1, 0, 0})
	DMember(bool)                                      bOnlyUseFirstMeshMaterials                                  OFFSET(get<bool>, {0xB1, 1, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.SelfUnionMeshesTool
/// Size: 0x0048 (0x000110 - 0x000158)
class USelfUnionMeshesTool : public UBaseCreateFromSelectedTool
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 344;

public:
	CMember(class USelfUnionMeshesToolProperties*)     Properties                                                  OFFSET(get<T>, {0x110, 8, 0, 0})
	CMember(class ULineSetComponent*)                  DrawnLineSet                                                OFFSET(get<T>, {0x118, 8, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.SelfUnionMeshesToolBuilder
/// Size: 0x0000 (0x000028 - 0x000028)
class USelfUnionMeshesToolBuilder : public UBaseCreateFromSelectedToolBuilder
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/MeshModelingToolsExp.SmoothMeshToolProperties
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class USmoothMeshToolProperties : public UInteractiveToolPropertySet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	CMember(ESmoothMeshToolSmoothType)                 SmoothingType                                               OFFSET(get<T>, {0xA8, 1, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.IterativeSmoothProperties
/// Size: 0x0010 (0x0000A8 - 0x0000B8)
class UIterativeSmoothProperties : public UInteractiveToolPropertySet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	DMember(float)                                     SmoothingPerStep                                            OFFSET(get<float>, {0xA8, 4, 0, 0})
	DMember(int32_t)                                   Steps                                                       OFFSET(get<int32_t>, {0xAC, 4, 0, 0})
	DMember(bool)                                      bSmoothBoundary                                             OFFSET(get<bool>, {0xB0, 1, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.DiffusionSmoothProperties
/// Size: 0x0010 (0x0000A8 - 0x0000B8)
class UDiffusionSmoothProperties : public UInteractiveToolPropertySet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	DMember(float)                                     SmoothingPerStep                                            OFFSET(get<float>, {0xA8, 4, 0, 0})
	DMember(int32_t)                                   Steps                                                       OFFSET(get<int32_t>, {0xAC, 4, 0, 0})
	DMember(bool)                                      bPreserveUVs                                                OFFSET(get<bool>, {0xB0, 1, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.ImplicitSmoothProperties
/// Size: 0x0010 (0x0000A8 - 0x0000B8)
class UImplicitSmoothProperties : public UInteractiveToolPropertySet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	DMember(float)                                     SmoothSpeed                                                 OFFSET(get<float>, {0xA8, 4, 0, 0})
	DMember(float)                                     Smoothness                                                  OFFSET(get<float>, {0xAC, 4, 0, 0})
	DMember(bool)                                      bPreserveUVs                                                OFFSET(get<bool>, {0xB0, 1, 0, 0})
	DMember(float)                                     VolumeCorrection                                            OFFSET(get<float>, {0xB4, 4, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.SmoothWeightMapSetProperties
/// Size: 0x0008 (0x0000C8 - 0x0000D0)
class USmoothWeightMapSetProperties : public UWeightMapSetProperties
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	DMember(float)                                     MinSmoothMultiplier                                         OFFSET(get<float>, {0xC8, 4, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.SmoothMeshTool
/// Size: 0x0030 (0x000410 - 0x000440)
class USmoothMeshTool : public UBaseMeshProcessingTool
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1088;

public:
	CMember(class USmoothMeshToolProperties*)          SmoothProperties                                            OFFSET(get<T>, {0x418, 8, 0, 0})
	CMember(class UIterativeSmoothProperties*)         IterativeProperties                                         OFFSET(get<T>, {0x420, 8, 0, 0})
	CMember(class UDiffusionSmoothProperties*)         DiffusionProperties                                         OFFSET(get<T>, {0x428, 8, 0, 0})
	CMember(class UImplicitSmoothProperties*)          ImplicitProperties                                          OFFSET(get<T>, {0x430, 8, 0, 0})
	CMember(class USmoothWeightMapSetProperties*)      WeightMapProperties                                         OFFSET(get<T>, {0x438, 8, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.SmoothMeshToolBuilder
/// Size: 0x0000 (0x000028 - 0x000028)
class USmoothMeshToolBuilder : public UBaseMeshProcessingToolBuilder
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/MeshModelingToolsExp.SplitMeshesToolBuilder
/// Size: 0x0000 (0x000028 - 0x000028)
class USplitMeshesToolBuilder : public UMultiSelectionMeshEditingToolBuilder
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/MeshModelingToolsExp.SplitMeshesToolProperties
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class USplitMeshesToolProperties : public UInteractiveToolPropertySet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	DMember(bool)                                      bTransferMaterials                                          OFFSET(get<bool>, {0xA8, 1, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.SplitMeshesTool
/// Size: 0x0038 (0x0000C0 - 0x0000F8)
class USplitMeshesTool : public UMultiSelectionMeshEditingTool
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
	CMember(class USplitMeshesToolProperties*)         BasicProperties                                             OFFSET(get<T>, {0xC0, 8, 0, 0})
	CMember(class UCreateMeshObjectTypeProperties*)    OutputTypeProperties                                        OFFSET(get<T>, {0xC8, 8, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.TransferMeshToolBuilder
/// Size: 0x0000 (0x000028 - 0x000028)
class UTransferMeshToolBuilder : public UMultiSelectionMeshEditingToolBuilder
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/MeshModelingToolsExp.TransferMeshToolProperties
/// Size: 0x0078 (0x0000A8 - 0x000120)
class UTransferMeshToolProperties : public UInteractiveToolPropertySet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	DMember(bool)                                      bTransferMaterials                                          OFFSET(get<bool>, {0xA8, 1, 0, 0})
	DMember(bool)                                      bTransferCollision                                          OFFSET(get<bool>, {0xA9, 1, 0, 0})
	SMember(FString)                                   SourceLOD                                                   OFFSET(getStruct<T>, {0xB0, 16, 0, 0})
	SMember(FString)                                   TargetLod                                                   OFFSET(getStruct<T>, {0xC0, 16, 0, 0})
	DMember(bool)                                      bIsStaticMeshSource                                         OFFSET(get<bool>, {0xD0, 1, 0, 0})
	CMember(TArray<FString>)                           SourceLODNamesList                                          OFFSET(get<T>, {0xD8, 16, 0, 0})
	CMember(TArray<FString>)                           TargetLODNamesList                                          OFFSET(get<T>, {0xF8, 16, 0, 0})
	DMember(bool)                                      bIsStaticMeshTarget                                         OFFSET(get<bool>, {0x118, 1, 0, 0})


	/// Functions
	// Function /Script/MeshModelingToolsExp.TransferMeshToolProperties.GetTargetLODNamesFunc
	// TArray<FString> GetTargetLODNamesFunc();                                                                                 // [0xbd6f6b8] Final|Native|Public|Const 
	// Function /Script/MeshModelingToolsExp.TransferMeshToolProperties.GetSourceLODNamesFunc
	// TArray<FString> GetSourceLODNamesFunc();                                                                                 // [0xbcb93b8] Final|Native|Public|Const 
};

/// Class /Script/MeshModelingToolsExp.TransferMeshTool
/// Size: 0x0010 (0x0000C0 - 0x0000D0)
class UTransferMeshTool : public UMultiSelectionMeshEditingTool
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	CMember(class UTransferMeshToolProperties*)        BasicProperties                                             OFFSET(get<T>, {0xC8, 8, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.TransformMeshesToolBuilder
/// Size: 0x0000 (0x000028 - 0x000028)
class UTransformMeshesToolBuilder : public UMultiSelectionMeshEditingToolBuilder
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/MeshModelingToolsExp.TransformMeshesToolProperties
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UTransformMeshesToolProperties : public UInteractiveToolPropertySet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	CMember(ETransformMeshesTransformMode)             TransformMode                                               OFFSET(get<T>, {0xA8, 1, 0, 0})
	DMember(bool)                                      bApplyToInstances                                           OFFSET(get<bool>, {0xA9, 1, 0, 0})
	DMember(bool)                                      bSetPivotMode                                               OFFSET(get<bool>, {0xAA, 1, 0, 0})
	DMember(bool)                                      bEnableSnapDragging                                         OFFSET(get<bool>, {0xAB, 1, 0, 0})
	CMember(ETransformMeshesSnapDragSource)            SnapDragSource                                              OFFSET(get<T>, {0xAC, 1, 0, 0})
	CMember(ETransformMeshesSnapDragRotationMode)      RotationMode                                                OFFSET(get<T>, {0xAD, 1, 0, 0})
	DMember(bool)                                      bHaveInstances                                              OFFSET(get<bool>, {0xAE, 1, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.TransformMeshesTool
/// Size: 0x00E0 (0x0000C0 - 0x0001A0)
class UTransformMeshesTool : public UMultiSelectionMeshEditingTool
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
	CMember(class UTransformMeshesToolProperties*)     TransformProps                                              OFFSET(get<T>, {0xD0, 8, 0, 0})
	CMember(TArray<FTransformMeshesTarget>)            ActiveGizmos                                                OFFSET(get<T>, {0xD8, 16, 0, 0})
	CMember(class UDragAlignmentMechanic*)             DragAlignmentMechanic                                       OFFSET(get<T>, {0xE8, 8, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.TriangulateSplinesToolProperties
/// Size: 0x0038 (0x0000A8 - 0x0000E0)
class UTriangulateSplinesToolProperties : public UInteractiveToolPropertySet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	DMember(double)                                    ErrorTolerance                                              OFFSET(get<double>, {0xA8, 8, 0, 0})
	CMember(EFlattenCurveMethod)                       FlattenMethod                                               OFFSET(get<T>, {0xB0, 1, 0, 0})
	CMember(ECombineCurvesMethod)                      CombineMethod                                               OFFSET(get<T>, {0xB1, 1, 0, 0})
	DMember(double)                                    Thickness                                                   OFFSET(get<double>, {0xB8, 8, 0, 0})
	DMember(bool)                                      bFlipResult                                                 OFFSET(get<bool>, {0xC0, 1, 0, 0})
	CMember(EOffsetOpenCurvesMethod)                   OpenCurves                                                  OFFSET(get<T>, {0xC1, 1, 0, 0})
	DMember(double)                                    CurveOffset                                                 OFFSET(get<double>, {0xC8, 8, 0, 0})
	CMember(EOffsetClosedCurvesMethod)                 OffsetClosedCurves                                          OFFSET(get<T>, {0xD0, 1, 0, 0})
	CMember(EOpenCurveEndShapes)                       EndShapes                                                   OFFSET(get<T>, {0xD1, 1, 0, 0})
	CMember(EOffsetJoinMethod)                         JoinMethod                                                  OFFSET(get<T>, {0xD2, 1, 0, 0})
	DMember(double)                                    MiterLimit                                                  OFFSET(get<double>, {0xD8, 8, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.TriangulateSplinesTool
/// Size: 0x0060 (0x0000A0 - 0x000100)
class UTriangulateSplinesTool : public UInteractiveTool
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	CMember(class UTriangulateSplinesToolProperties*)  TriangulateProperties                                       OFFSET(get<T>, {0xB0, 8, 0, 0})
	CMember(class UCreateMeshObjectTypeProperties*)    OutputTypeProperties                                        OFFSET(get<T>, {0xB8, 8, 0, 0})
	CMember(class UMeshOpPreviewWithBackgroundCompute*) Preview                                                    OFFSET(get<T>, {0xC0, 8, 0, 0})
	CMember(TWeakObjectPtr<UWorld*>)                   TargetWorld                                                 OFFSET(get<T>, {0xC8, 8, 0, 0})
	CMember(TArray<TWeakObjectPtr<AActor*>>)           ActorsWithSplines                                           OFFSET(get<T>, {0xD0, 16, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.TriangulateSplinesToolBuilder
/// Size: 0x0000 (0x000028 - 0x000028)
class UTriangulateSplinesToolBuilder : public UInteractiveToolBuilder
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/MeshModelingToolsExp.VolumeToMeshToolBuilder
/// Size: 0x0000 (0x000028 - 0x000028)
class UVolumeToMeshToolBuilder : public UInteractiveToolBuilder
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/MeshModelingToolsExp.VolumeToMeshToolProperties
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UVolumeToMeshToolProperties : public UInteractiveToolPropertySet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	DMember(bool)                                      bWeldEdges                                                  OFFSET(get<bool>, {0xA8, 1, 0, 0})
	DMember(bool)                                      bAutoRepair                                                 OFFSET(get<bool>, {0xA9, 1, 0, 0})
	DMember(bool)                                      bOptimizeMesh                                               OFFSET(get<bool>, {0xAA, 1, 0, 0})
	DMember(bool)                                      bShowWireframe                                              OFFSET(get<bool>, {0xAB, 1, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.VolumeToMeshTool
/// Size: 0x0268 (0x0000A0 - 0x000308)
class UVolumeToMeshTool : public UInteractiveTool
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 776;

public:
	CMember(class UVolumeToMeshToolProperties*)        Settings                                                    OFFSET(get<T>, {0xA0, 8, 0, 0})
	CMember(class UCreateMeshObjectTypeProperties*)    OutputTypeProperties                                        OFFSET(get<T>, {0xA8, 8, 0, 0})
	CMember(class UPreviewMesh*)                       PreviewMesh                                                 OFFSET(get<T>, {0xB0, 8, 0, 0})
	CMember(TLazyObjectPtr<AVolume*>)                  TargetVolume                                                OFFSET(get<T>, {0xB8, 24, 0, 0})
	CMember(class ULineSetComponent*)                  VolumeEdgesSet                                              OFFSET(get<T>, {0xD0, 8, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.VoxelBlendMeshesToolProperties
/// Size: 0x0020 (0x0000A8 - 0x0000C8)
class UVoxelBlendMeshesToolProperties : public UInteractiveToolPropertySet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	DMember(double)                                    BlendPower                                                  OFFSET(get<double>, {0xA8, 8, 0, 0})
	DMember(double)                                    BlendFalloff                                                OFFSET(get<double>, {0xB0, 8, 0, 0})
	CMember(EVoxelBlendOperation)                      Operation                                                   OFFSET(get<T>, {0xB8, 1, 0, 0})
	DMember(bool)                                      bVoxWrap                                                    OFFSET(get<bool>, {0xB9, 1, 0, 0})
	DMember(bool)                                      bRemoveInternalsAfterVoxWrap                                OFFSET(get<bool>, {0xBA, 1, 0, 0})
	DMember(double)                                    ThickenShells                                               OFFSET(get<double>, {0xC0, 8, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.VoxelBlendMeshesTool
/// Size: 0x0008 (0x000128 - 0x000130)
class UVoxelBlendMeshesTool : public UBaseVoxelTool
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	CMember(class UVoxelBlendMeshesToolProperties*)    BlendProperties                                             OFFSET(get<T>, {0x128, 8, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.VoxelBlendMeshesToolBuilder
/// Size: 0x0000 (0x000028 - 0x000028)
class UVoxelBlendMeshesToolBuilder : public UBaseCreateFromSelectedToolBuilder
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/MeshModelingToolsExp.VoxelMorphologyMeshesToolProperties
/// Size: 0x0020 (0x0000A8 - 0x0000C8)
class UVoxelMorphologyMeshesToolProperties : public UInteractiveToolPropertySet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	CMember(EMorphologyOperation)                      Operation                                                   OFFSET(get<T>, {0xA8, 1, 0, 0})
	DMember(double)                                    Distance                                                    OFFSET(get<double>, {0xB0, 8, 0, 0})
	DMember(bool)                                      bVoxWrap                                                    OFFSET(get<bool>, {0xB8, 1, 0, 0})
	DMember(bool)                                      bRemoveInternalsAfterVoxWrap                                OFFSET(get<bool>, {0xB9, 1, 0, 0})
	DMember(double)                                    ThickenShells                                               OFFSET(get<double>, {0xC0, 8, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.VoxelMorphologyMeshesTool
/// Size: 0x0008 (0x000128 - 0x000130)
class UVoxelMorphologyMeshesTool : public UBaseVoxelTool
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	CMember(class UVoxelMorphologyMeshesToolProperties*) MorphologyProperties                                      OFFSET(get<T>, {0x128, 8, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.VoxelMorphologyMeshesToolBuilder
/// Size: 0x0000 (0x000028 - 0x000028)
class UVoxelMorphologyMeshesToolBuilder : public UBaseCreateFromSelectedToolBuilder
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/MeshModelingToolsExp.VoxelSolidifyMeshesToolProperties
/// Size: 0x0020 (0x0000A8 - 0x0000C8)
class UVoxelSolidifyMeshesToolProperties : public UInteractiveToolPropertySet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	DMember(double)                                    WindingThreshold                                            OFFSET(get<double>, {0xA8, 8, 0, 0})
	DMember(double)                                    ExtendBounds                                                OFFSET(get<double>, {0xB0, 8, 0, 0})
	DMember(int32_t)                                   SurfaceSearchSteps                                          OFFSET(get<int32_t>, {0xB8, 4, 0, 0})
	DMember(bool)                                      bSolidAtBoundaries                                          OFFSET(get<bool>, {0xBC, 1, 0, 0})
	DMember(bool)                                      bApplyThickenShells                                         OFFSET(get<bool>, {0xBD, 1, 0, 0})
	DMember(double)                                    ThickenShells                                               OFFSET(get<double>, {0xC0, 8, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.VoxelSolidifyMeshesTool
/// Size: 0x0008 (0x000128 - 0x000130)
class UVoxelSolidifyMeshesTool : public UBaseVoxelTool
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	CMember(class UVoxelSolidifyMeshesToolProperties*) SolidifyProperties                                          OFFSET(get<T>, {0x128, 8, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.VoxelSolidifyMeshesToolBuilder
/// Size: 0x0000 (0x000028 - 0x000028)
class UVoxelSolidifyMeshesToolBuilder : public UBaseCreateFromSelectedToolBuilder
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/MeshModelingToolsExp.WeldMeshEdgesToolBuilder
/// Size: 0x0000 (0x000028 - 0x000028)
class UWeldMeshEdgesToolBuilder : public USingleSelectionMeshEditingToolBuilder
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/MeshModelingToolsExp.WeldMeshEdgesToolProperties
/// Size: 0x0028 (0x0000A8 - 0x0000D0)
class UWeldMeshEdgesToolProperties : public UInteractiveToolPropertySet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	DMember(float)                                     Tolerance                                                   OFFSET(get<float>, {0xA8, 4, 0, 0})
	DMember(bool)                                      bOnlyUnique                                                 OFFSET(get<bool>, {0xAC, 1, 0, 0})
	DMember(bool)                                      bResolveTJunctions                                          OFFSET(get<bool>, {0xAD, 1, 0, 0})
	DMember(int32_t)                                   InitialEdges                                                OFFSET(get<int32_t>, {0xB0, 4, 0, 0})
	DMember(int32_t)                                   RemainingEdges                                              OFFSET(get<int32_t>, {0xB4, 4, 0, 0})
	CMember(EWeldMeshEdgesAttributeUIMode)             AttrWeldingMode                                             OFFSET(get<T>, {0xB8, 1, 0, 0})
	DMember(float)                                     SplitNormalThreshold                                        OFFSET(get<float>, {0xBC, 4, 0, 0})
	DMember(float)                                     SplitTangentsThreshold                                      OFFSET(get<float>, {0xC0, 4, 0, 0})
	DMember(float)                                     SplitUVThreshold                                            OFFSET(get<float>, {0xC4, 4, 0, 0})
	DMember(float)                                     SplitColorThreshold                                         OFFSET(get<float>, {0xC8, 4, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.WeldMeshEdgesOperatorFactory
/// Size: 0x0010 (0x000028 - 0x000038)
class UWeldMeshEdgesOperatorFactory : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(class UWeldMeshEdgesTool*)                 WeldMeshEdgesTool                                           OFFSET(get<T>, {0x30, 8, 0, 0})
};

/// Class /Script/MeshModelingToolsExp.WeldMeshEdgesTool
/// Size: 0x0030 (0x0000B8 - 0x0000E8)
class UWeldMeshEdgesTool : public USingleSelectionMeshEditingTool
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
	CMember(class UWeldMeshEdgesToolProperties*)       Settings                                                    OFFSET(get<T>, {0xB8, 8, 0, 0})
	CMember(class UMeshOpPreviewWithBackgroundCompute*) PreviewCompute                                             OFFSET(get<T>, {0xC0, 8, 0, 0})
	CMember(class UMeshElementsVisualizer*)            MeshElementsDisplay                                         OFFSET(get<T>, {0xC8, 8, 0, 0})
	CMember(class UWeldMeshEdgesOperatorFactory*)      OperatorFactory                                             OFFSET(get<T>, {0xD0, 8, 0, 0})
};

/// Struct /Script/MeshModelingToolsExp.BakeMultiMeshDetailProperties
/// Size: 0x0018 (0x000000 - 0x000018)
class FBakeMultiMeshDetailProperties : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(class UStaticMesh*)                        SourceMesh                                                  OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class UTexture2D*)                         SourceTexture                                               OFFSET(get<T>, {0x8, 8, 0, 0})
	DMember(int32_t)                                   SourceTextureUVLayer                                        OFFSET(get<int32_t>, {0x10, 4, 0, 0})
};

/// Struct /Script/MeshModelingToolsExp.PerlinLayerProperties
/// Size: 0x0008 (0x000000 - 0x000008)
class FPerlinLayerProperties : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(float)                                     Frequency                                                   OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     Intensity                                                   OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Struct /Script/MeshModelingToolsExp.EditPivotTarget
/// Size: 0x0010 (0x000000 - 0x000010)
class FEditPivotTarget : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class UTransformProxy*)                    TransformProxy                                              OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class UCombinedTransformGizmo*)            TransformGizmo                                              OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/MeshModelingToolsExp.PhysicsSphereData
/// Size: 0x00A0 (0x000000 - 0x0000A0)
class FPhysicsSphereData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	DMember(float)                                     Radius                                                      OFFSET(get<float>, {0x0, 4, 0, 0})
	SMember(FTransform)                                Transform                                                   OFFSET(getStruct<T>, {0x10, 96, 0, 0})
	SMember(FKShapeElem)                               Element                                                     OFFSET(getStruct<T>, {0x70, 40, 0, 0})
};

/// Struct /Script/MeshModelingToolsExp.PhysicsBoxData
/// Size: 0x00B0 (0x000000 - 0x0000B0)
class FPhysicsBoxData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FVector)                                   Dimensions                                                  OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FTransform)                                Transform                                                   OFFSET(getStruct<T>, {0x20, 96, 0, 0})
	SMember(FKShapeElem)                               Element                                                     OFFSET(getStruct<T>, {0x80, 40, 0, 0})
};

/// Struct /Script/MeshModelingToolsExp.PhysicsCapsuleData
/// Size: 0x00A0 (0x000000 - 0x0000A0)
class FPhysicsCapsuleData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	DMember(float)                                     Radius                                                      OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     Length                                                      OFFSET(get<float>, {0x4, 4, 0, 0})
	SMember(FTransform)                                Transform                                                   OFFSET(getStruct<T>, {0x10, 96, 0, 0})
	SMember(FKShapeElem)                               Element                                                     OFFSET(getStruct<T>, {0x70, 40, 0, 0})
};

/// Struct /Script/MeshModelingToolsExp.PhysicsConvexData
/// Size: 0x0030 (0x000000 - 0x000030)
class FPhysicsConvexData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(int32_t)                                   NumVertices                                                 OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   NumFaces                                                    OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	SMember(FKShapeElem)                               Element                                                     OFFSET(getStruct<T>, {0x8, 40, 0, 0})
};

/// Struct /Script/MeshModelingToolsExp.PhysicsLevelSetData
/// Size: 0x0028 (0x000000 - 0x000028)
class FPhysicsLevelSetData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FKShapeElem)                               Element                                                     OFFSET(getStruct<T>, {0x0, 40, 0, 0})
};

/// Struct /Script/MeshModelingToolsExp.BrushToolRadius
/// Size: 0x0014 (0x000000 - 0x000014)
class FBrushToolRadius : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	CMember(EBrushToolSizeType)                        SizeType                                                    OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(float)                                     AdaptiveSize                                                OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     WorldRadius                                                 OFFSET(get<float>, {0x8, 4, 0, 0})
};

/// Struct /Script/MeshModelingToolsExp.TransformMeshesTarget
/// Size: 0x0010 (0x000000 - 0x000010)
class FTransformMeshesTarget : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class UTransformProxy*)                    TransformProxy                                              OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class UCombinedTransformGizmo*)            TransformGizmo                                              OFFSET(get<T>, {0x8, 8, 0, 0})
};

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

