
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: InterchangeCore
/// dependency: InterchangeFactoryNodes
/// dependency: InterchangeNodes

/// Class /Script/InterchangePipelines.InterchangeGenericCommonMeshesProperties
/// Size: 0x0018 (0x000108 - 0x000120)
class UInterchangeGenericCommonMeshesProperties : public UInterchangePipelineBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	CMember(EInterchangeForceMeshType)                 ForceAllMeshAsType                                          OFFSET(get<T>, {0x108, 1, 0, 0})
	DMember(bool)                                      bAutoDetectMeshType                                         OFFSET(get<bool>, {0x109, 1, 0, 0})
	DMember(bool)                                      bImportLods                                                 OFFSET(get<bool>, {0x10A, 1, 0, 0})
	DMember(bool)                                      bBakeMeshes                                                 OFFSET(get<bool>, {0x10B, 1, 0, 0})
	DMember(bool)                                      bKeepSectionsSeparate                                       OFFSET(get<bool>, {0x10C, 1, 0, 0})
	CMember(EInterchangeVertexColorImportOption)       VertexColorImportOption                                     OFFSET(get<T>, {0x10D, 1, 0, 0})
	SMember(FColor)                                    VertexOverrideColor                                         OFFSET(getStruct<T>, {0x110, 4, 0, 0})
	DMember(bool)                                      bRecomputeNormals                                           OFFSET(get<bool>, {0x114, 1, 0, 0})
	DMember(bool)                                      bRecomputeTangents                                          OFFSET(get<bool>, {0x115, 1, 0, 0})
	DMember(bool)                                      bUseMikkTSpace                                              OFFSET(get<bool>, {0x116, 1, 0, 0})
	DMember(bool)                                      bComputeWeightedNormals                                     OFFSET(get<bool>, {0x117, 1, 0, 0})
	DMember(bool)                                      bUseHighPrecisionTangentBasis                               OFFSET(get<bool>, {0x118, 1, 0, 0})
	DMember(bool)                                      bUseFullPrecisionUVs                                        OFFSET(get<bool>, {0x119, 1, 0, 0})
	DMember(bool)                                      bUseBackwardsCompatibleF16TruncUVs                          OFFSET(get<bool>, {0x11A, 1, 0, 0})
	DMember(bool)                                      bRemoveDegenerates                                          OFFSET(get<bool>, {0x11B, 1, 0, 0})
};

/// Class /Script/InterchangePipelines.InterchangeGenericCommonSkeletalMeshesAndAnimationsProperties
/// Size: 0x0010 (0x000108 - 0x000118)
class UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties : public UInterchangePipelineBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 280;

public:
	DMember(bool)                                      bImportOnlyAnimations                                       OFFSET(get<bool>, {0x108, 1, 0, 0})
	CMember(TWeakObjectPtr<USkeleton*>)                Skeleton                                                    OFFSET(get<T>, {0x10C, 8, 0, 0})
	DMember(bool)                                      bImportMeshesInBoneHierarchy                                OFFSET(get<bool>, {0x114, 1, 0, 0})
	DMember(bool)                                      bUseT0AsRefPose                                             OFFSET(get<bool>, {0x115, 1, 0, 0})
	DMember(bool)                                      bConvertStaticsWithMorphTargetsToSkeletals                  OFFSET(get<bool>, {0x116, 1, 0, 0})
};

/// Class /Script/InterchangePipelines.GLTFPipelineSettings
/// Size: 0x0058 (0x000030 - 0x000088)
class UGLTFPipelineSettings : public UDeveloperSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	CMember(TMap<FString, FSoftObjectPath>)            MaterialParents                                             OFFSET(get<T>, {0x30, 80, 0, 0})
};

/// Class /Script/InterchangePipelines.InterchangeGLTFPipeline
/// Size: 0x0008 (0x000108 - 0x000110)
class UInterchangeGLTFPipeline : public UInterchangePipelineBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
};

/// Class /Script/InterchangePipelines.MaterialXPipelineSettings
/// Size: 0x0140 (0x000030 - 0x000170)
class UMaterialXPipelineSettings : public UDeveloperSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 368;

public:
	CMember(TMap<EInterchangeMaterialXShaders, FSoftObjectPath>) PredefinedSurfaceShaders                          OFFSET(get<T>, {0x30, 80, 0, 0})
	CMember(TMap<EInterchangeMaterialXBSDF, FSoftObjectPath>) PredefinedBSDF                                       OFFSET(get<T>, {0x80, 80, 0, 0})
	CMember(TMap<EInterchangeMaterialXEDF, FSoftObjectPath>) PredefinedEDF                                         OFFSET(get<T>, {0xD0, 80, 0, 0})
	CMember(TMap<EInterchangeMaterialXVDF, FSoftObjectPath>) PredefinedVDF                                         OFFSET(get<T>, {0x120, 80, 0, 0})
};

/// Class /Script/InterchangePipelines.InterchangeMaterialXPipeline
/// Size: 0x0008 (0x000108 - 0x000110)
class UInterchangeMaterialXPipeline : public UInterchangePipelineBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
};

/// Class /Script/InterchangePipelines.InterchangeGenericAnimationPipeline
/// Size: 0x0070 (0x000108 - 0x000178)
class UInterchangeGenericAnimationPipeline : public UInterchangePipelineBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 376;

public:
	CMember(TWeakObjectPtr<UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties*>) CommonSkeletalMeshesAndAnimationsProperties OFFSET(get<T>, {0x108, 8, 0, 0})
	CMember(TWeakObjectPtr<UInterchangeGenericCommonMeshesProperties*>) CommonMeshesProperties                     OFFSET(get<T>, {0x110, 8, 0, 0})
	DMember(bool)                                      bImportAnimations                                           OFFSET(get<bool>, {0x118, 1, 0, 0})
	DMember(bool)                                      bImportBoneTracks                                           OFFSET(get<bool>, {0x119, 1, 0, 0})
	CMember(EInterchangeAnimationRange)                AnimationRange                                              OFFSET(get<T>, {0x11A, 1, 0, 0})
	SMember(FInt32Interval)                            FrameImportRange                                            OFFSET(getStruct<T>, {0x11C, 8, 0, 0})
	DMember(bool)                                      bUse30HzToBakeBoneAnimation                                 OFFSET(get<bool>, {0x124, 1, 0, 0})
	DMember(int32_t)                                   CustomBoneAnimationSampleRate                               OFFSET(get<int32_t>, {0x128, 4, 0, 0})
	DMember(bool)                                      bSnapToClosestFrameBoundary                                 OFFSET(get<bool>, {0x12C, 1, 0, 0})
	DMember(bool)                                      bImportCustomAttribute                                      OFFSET(get<bool>, {0x12D, 1, 0, 0})
	DMember(bool)                                      bAddCurveMetadataToSkeleton                                 OFFSET(get<bool>, {0x12E, 1, 0, 0})
	DMember(bool)                                      bSetMaterialDriveParameterOnCustomAttribute                 OFFSET(get<bool>, {0x12F, 1, 0, 0})
	CMember(TArray<FString>)                           MaterialCurveSuffixes                                       OFFSET(get<T>, {0x130, 16, 0, 0})
	DMember(bool)                                      bRemoveCurveRedundantKeys                                   OFFSET(get<bool>, {0x140, 1, 0, 0})
	DMember(bool)                                      bDoNotImportCurveWithZero                                   OFFSET(get<bool>, {0x141, 1, 0, 0})
	DMember(bool)                                      bDeleteExistingNonCurveCustomAttributes                     OFFSET(get<bool>, {0x142, 1, 0, 0})
	DMember(bool)                                      bDeleteExistingCustomAttributeCurves                        OFFSET(get<bool>, {0x143, 1, 0, 0})
	DMember(bool)                                      bDeleteExistingMorphTargetCurves                            OFFSET(get<bool>, {0x144, 1, 0, 0})
	SMember(FString)                                   SourceAnimationName                                         OFFSET(getStruct<T>, {0x148, 16, 0, 0})
	DMember(bool)                                      bSceneImport                                                OFFSET(get<bool>, {0x158, 1, 0, 0})
};

/// Class /Script/InterchangePipelines.InterchangeGenericAssetsPipeline
/// Size: 0x0170 (0x000108 - 0x000278)
class UInterchangeGenericAssetsPipeline : public UInterchangePipelineBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 632;

public:
	SMember(FString)                                   PipelineDisplayName                                         OFFSET(getStruct<T>, {0x108, 16, 0, 0})
	CMember(EReimportStrategyFlags)                    ReimportStrategy                                            OFFSET(get<T>, {0x118, 1, 0, 0})
	DMember(bool)                                      bUseSourceNameForAsset                                      OFFSET(get<bool>, {0x119, 1, 0, 0})
	SMember(FString)                                   AssetName                                                   OFFSET(getStruct<T>, {0x120, 16, 0, 0})
	SMember(FVector)                                   ImportOffsetTranslation                                     OFFSET(getStruct<T>, {0x130, 24, 0, 0})
	SMember(FRotator)                                  ImportOffsetRotation                                        OFFSET(getStruct<T>, {0x148, 24, 0, 0})
	DMember(float)                                     ImportOffsetUniformScale                                    OFFSET(get<float>, {0x160, 4, 0, 0})
	CMember(class UInterchangeGenericCommonMeshesProperties*) CommonMeshesProperties                               OFFSET(get<T>, {0x168, 8, 0, 0})
	CMember(class UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties*) CommonSkeletalMeshesAndAnimationsProperties OFFSET(get<T>, {0x170, 8, 0, 0})
	CMember(class UInterchangeGenericMeshPipeline*)    MeshPipeline                                                OFFSET(get<T>, {0x178, 8, 0, 0})
	CMember(class UInterchangeGenericAnimationPipeline*) AnimationPipeline                                         OFFSET(get<T>, {0x180, 8, 0, 0})
	CMember(class UInterchangeGenericMaterialPipeline*) MaterialPipeline                                           OFFSET(get<T>, {0x188, 8, 0, 0})
};

/// Class /Script/InterchangePipelines.InterchangeGenericMaterialPipeline
/// Size: 0x00A8 (0x000108 - 0x0001B0)
class UInterchangeGenericMaterialPipeline : public UInterchangePipelineBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 432;

public:
	SMember(FString)                                   PipelineDisplayName                                         OFFSET(getStruct<T>, {0x108, 16, 0, 0})
	DMember(bool)                                      bImportMaterials                                            OFFSET(get<bool>, {0x118, 1, 0, 0})
	CMember(EInterchangeMaterialSearchLocation)        SearchLocation                                              OFFSET(get<T>, {0x119, 1, 0, 0})
	SMember(FString)                                   AssetName                                                   OFFSET(getStruct<T>, {0x120, 16, 0, 0})
	CMember(EInterchangeMaterialImportOption)          MaterialImport                                              OFFSET(get<T>, {0x130, 1, 0, 0})
	DMember(bool)                                      bIdentifyDuplicateMaterials                                 OFFSET(get<bool>, {0x131, 1, 0, 0})
	DMember(bool)                                      bCreateMaterialInstanceForParent                            OFFSET(get<bool>, {0x132, 1, 0, 0})
	SMember(FSoftObjectPath)                           ParentMaterial                                              OFFSET(getStruct<T>, {0x138, 24, 0, 0})
	CMember(class UInterchangeGenericTexturePipeline*) TexturePipeline                                             OFFSET(get<T>, {0x150, 8, 0, 0})
	CMember(class UInterchangeBaseNodeContainer*)      BaseNodeContainer                                           OFFSET(get<T>, {0x158, 8, 0, 0})
};

/// Class /Script/InterchangePipelines.InterchangeGenericMeshPipeline
/// Size: 0x00D0 (0x000108 - 0x0001D8)
class UInterchangeGenericMeshPipeline : public UInterchangePipelineBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 472;

public:
	CMember(TWeakObjectPtr<UInterchangeGenericCommonMeshesProperties*>) CommonMeshesProperties                     OFFSET(get<T>, {0x108, 8, 0, 0})
	CMember(TWeakObjectPtr<UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties*>) CommonSkeletalMeshesAndAnimationsProperties OFFSET(get<T>, {0x110, 8, 0, 0})
	DMember(bool)                                      bImportStaticMeshes                                         OFFSET(get<bool>, {0x118, 1, 0, 0})
	DMember(bool)                                      bCombineStaticMeshes                                        OFFSET(get<bool>, {0x119, 1, 0, 0})
	SMember(FName)                                     LODGroup                                                    OFFSET(getStruct<T>, {0x11C, 4, 0, 0})
	DMember(bool)                                      bImportCollision                                            OFFSET(get<bool>, {0x120, 1, 0, 0})
	DMember(bool)                                      bImportCollisionAccordingToMeshName                         OFFSET(get<bool>, {0x121, 1, 0, 0})
	DMember(bool)                                      bOneConvexHullPerUCX                                        OFFSET(get<bool>, {0x122, 1, 0, 0})
	DMember(bool)                                      bBuildNanite                                                OFFSET(get<bool>, {0x123, 1, 0, 0})
	DMember(bool)                                      bBuildReversedIndexBuffer                                   OFFSET(get<bool>, {0x124, 1, 0, 0})
	DMember(bool)                                      bGenerateLightmapUVs                                        OFFSET(get<bool>, {0x125, 1, 0, 0})
	DMember(bool)                                      bGenerateDistanceFieldAsIfTwoSided                          OFFSET(get<bool>, {0x126, 1, 0, 0})
	DMember(bool)                                      bSupportFaceRemap                                           OFFSET(get<bool>, {0x127, 1, 0, 0})
	DMember(int32_t)                                   MinLightmapResolution                                       OFFSET(get<int32_t>, {0x128, 4, 0, 0})
	DMember(int32_t)                                   SrcLightmapIndex                                            OFFSET(get<int32_t>, {0x12C, 4, 0, 0})
	DMember(int32_t)                                   DstLightmapIndex                                            OFFSET(get<int32_t>, {0x130, 4, 0, 0})
	SMember(FVector)                                   BuildScale3D                                                OFFSET(getStruct<T>, {0x138, 24, 0, 0})
	DMember(float)                                     DistanceFieldResolutionScale                                OFFSET(get<float>, {0x150, 4, 0, 0})
	CMember(TWeakObjectPtr<UStaticMesh*>)              DistanceFieldReplacementMesh                                OFFSET(get<T>, {0x154, 8, 0, 0})
	DMember(int32_t)                                   MaxLumenMeshCards                                           OFFSET(get<int32_t>, {0x15C, 4, 0, 0})
	DMember(bool)                                      bImportSkeletalMeshes                                       OFFSET(get<bool>, {0x160, 1, 0, 0})
	CMember(EInterchangeSkeletalMeshContentType)       SkeletalMeshImportContentType                               OFFSET(get<T>, {0x161, 1, 0, 0})
	CMember(EInterchangeSkeletalMeshContentType)       LastSkeletalMeshImportContentType                           OFFSET(get<T>, {0x162, 1, 0, 0})
	DMember(bool)                                      bCombineSkeletalMeshes                                      OFFSET(get<bool>, {0x163, 1, 0, 0})
	DMember(bool)                                      bImportMorphTargets                                         OFFSET(get<bool>, {0x164, 1, 0, 0})
	DMember(bool)                                      bImportVertexAttributes                                     OFFSET(get<bool>, {0x165, 1, 0, 0})
	DMember(bool)                                      bUpdateSkeletonReferencePose                                OFFSET(get<bool>, {0x166, 1, 0, 0})
	DMember(bool)                                      bCreatePhysicsAsset                                         OFFSET(get<bool>, {0x167, 1, 0, 0})
	CMember(TWeakObjectPtr<UPhysicsAsset*>)            PhysicsAsset                                                OFFSET(get<T>, {0x168, 8, 0, 0})
	DMember(bool)                                      bUseHighPrecisionSkinWeights                                OFFSET(get<bool>, {0x170, 1, 0, 0})
	DMember(float)                                     ThresholdPosition                                           OFFSET(get<float>, {0x174, 4, 0, 0})
	DMember(float)                                     ThresholdTangentNormal                                      OFFSET(get<float>, {0x178, 4, 0, 0})
	DMember(float)                                     ThresholdUV                                                 OFFSET(get<float>, {0x17C, 4, 0, 0})
	DMember(float)                                     MorphThresholdPosition                                      OFFSET(get<float>, {0x180, 4, 0, 0})
	DMember(int32_t)                                   BoneInfluenceLimit                                          OFFSET(get<int32_t>, {0x184, 4, 0, 0})
};

/// Class /Script/InterchangePipelines.InterchangeGenericLevelPipeline
/// Size: 0x0020 (0x000108 - 0x000128)
class UInterchangeGenericLevelPipeline : public UInterchangePipelineBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
	SMember(FString)                                   PipelineDisplayName                                         OFFSET(getStruct<T>, {0x108, 16, 0, 0})
	CMember(EReimportStrategyFlags)                    ReimportPropertyStrategy                                    OFFSET(get<T>, {0x118, 1, 0, 0})
	DMember(bool)                                      bDeleteMissingActors                                        OFFSET(get<bool>, {0x119, 1, 0, 0})
	DMember(bool)                                      bForceReimportDeletedActors                                 OFFSET(get<bool>, {0x11A, 1, 0, 0})
	DMember(bool)                                      bForceReimportDeletedAssets                                 OFFSET(get<bool>, {0x11B, 1, 0, 0})
	DMember(bool)                                      bDeleteMissingAssets                                        OFFSET(get<bool>, {0x11C, 1, 0, 0})
	DMember(bool)                                      bUsePhysicalInsteadOfStandardPerspectiveCamera              OFFSET(get<bool>, {0x11D, 1, 0, 0})
};

/// Class /Script/InterchangePipelines.InterchangeGenericTexturePipeline
/// Size: 0x0068 (0x000108 - 0x000170)
class UInterchangeGenericTexturePipeline : public UInterchangePipelineBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 368;

public:
	SMember(FString)                                   PipelineDisplayName                                         OFFSET(getStruct<T>, {0x108, 16, 0, 0})
	DMember(bool)                                      bImportTextures                                             OFFSET(get<bool>, {0x118, 1, 0, 0})
	SMember(FString)                                   AssetName                                                   OFFSET(getStruct<T>, {0x120, 16, 0, 0})
	DMember(bool)                                      bAllowNonPowerOfTwo                                         OFFSET(get<bool>, {0x130, 1, 0, 0})
	CMember(class UInterchangeBaseNodeContainer*)      BaseNodeContainer                                           OFFSET(get<T>, {0x138, 8, 0, 0})
};

/// Class /Script/InterchangePipelines.InterchangePipelineMeshesUtilities
/// Size: 0x0100 (0x000028 - 0x000128)
class UInterchangePipelineMeshesUtilities : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:


	/// Functions
	// Function /Script/InterchangePipelines.InterchangePipelineMeshesUtilities.SetContext
	// void SetContext(FInterchangePipelineMeshesUtilitiesContext& Context);                                                    // [0xbbec278] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangePipelines.InterchangePipelineMeshesUtilities.IsValidMeshInstanceUid
	// bool IsValidMeshInstanceUid(FString MeshInstanceUid);                                                                    // [0xbbec10c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangePipelines.InterchangePipelineMeshesUtilities.IsValidMeshGeometryUid
	// bool IsValidMeshGeometryUid(FString MeshGeometryUid);                                                                    // [0xbbebfa0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangePipelines.InterchangePipelineMeshesUtilities.GetMeshInstanceSkeletonRootUid
	// FString GetMeshInstanceSkeletonRootUid(FString MeshInstanceUid);                                                         // [0xbbebdb0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangePipelines.InterchangePipelineMeshesUtilities.GetMeshInstanceByUid
	// FInterchangeMeshInstance GetMeshInstanceByUid(FString MeshInstanceUid);                                                  // [0xbbebc3c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangePipelines.InterchangePipelineMeshesUtilities.GetMeshGeometrySkeletonRootUid
	// FString GetMeshGeometrySkeletonRootUid(FString MeshGeometryUid);                                                         // [0xbbeba4c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangePipelines.InterchangePipelineMeshesUtilities.GetMeshGeometryByUid
	// FInterchangeMeshGeometry GetMeshGeometryByUid(FString MeshGeometryUid);                                                  // [0xbbeb8d8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangePipelines.InterchangePipelineMeshesUtilities.GetAllStaticMeshInstance
	// void GetAllStaticMeshInstance(TArray<FString>& MeshInstanceUids);                                                        // [0xbbeb840] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangePipelines.InterchangePipelineMeshesUtilities.GetAllStaticMeshGeometry
	// void GetAllStaticMeshGeometry(TArray<FString>& MeshGeometryUids);                                                        // [0xbbeb7a8] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangePipelines.InterchangePipelineMeshesUtilities.GetAllSkinnedMeshInstance
	// void GetAllSkinnedMeshInstance(TArray<FString>& MeshInstanceUids);                                                       // [0xbbeb710] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangePipelines.InterchangePipelineMeshesUtilities.GetAllSkinnedMeshGeometry
	// void GetAllSkinnedMeshGeometry(TArray<FString>& MeshGeometryUids);                                                       // [0xbbeb678] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangePipelines.InterchangePipelineMeshesUtilities.GetAllMeshInstanceUidsUsingMeshGeometryUid
	// void GetAllMeshInstanceUidsUsingMeshGeometryUid(FString MeshGeometryUid, TArray<FString>& MeshInstanceUids);             // [0xbbeb4b4] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangePipelines.InterchangePipelineMeshesUtilities.GetAllMeshInstanceUids
	// void GetAllMeshInstanceUids(TArray<FString>& MeshInstanceUids);                                                          // [0xbbeb418] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangePipelines.InterchangePipelineMeshesUtilities.GetAllMeshGeometryNotInstanced
	// void GetAllMeshGeometryNotInstanced(TArray<FString>& MeshGeometryUids);                                                  // [0xbbeb380] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangePipelines.InterchangePipelineMeshesUtilities.GetAllMeshGeometry
	// void GetAllMeshGeometry(TArray<FString>& MeshGeometryUids);                                                              // [0xbbeb2e4] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangePipelines.InterchangePipelineMeshesUtilities.CreateInterchangePipelineMeshesUtilities
	// class UInterchangePipelineMeshesUtilities* CreateInterchangePipelineMeshesUtilities(class UInterchangeBaseNodeContainer* BaseNodeContainer); // [0xbbeb264] Final|Native|Static|Public|BlueprintCallable 
};

/// Struct /Script/InterchangePipelines.InterchangeLodSceneNodeContainer
/// Size: 0x0010 (0x000000 - 0x000010)
class FInterchangeLodSceneNodeContainer : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<class UInterchangeSceneNode*>)      SceneNodes                                                  OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/InterchangePipelines.InterchangeMeshInstance
/// Size: 0x0080 (0x000000 - 0x000080)
class FInterchangeMeshInstance : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FString)                                   MeshInstanceUid                                             OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	CMember(class UInterchangeSceneNode*)              LodGroupNode                                                OFFSET(get<T>, {0x10, 8, 0, 0})
	DMember(bool)                                      bReferenceSkinnedMesh                                       OFFSET(get<bool>, {0x18, 1, 0, 0})
	DMember(bool)                                      bReferenceMorphTarget                                       OFFSET(get<bool>, {0x19, 1, 0, 0})
	DMember(bool)                                      bHasMorphTargets                                            OFFSET(get<bool>, {0x1A, 1, 0, 0})
	CMember(TMap<int32_t, FInterchangeLodSceneNodeContainer>) SceneNodePerLodIndex                                 OFFSET(get<T>, {0x20, 80, 0, 0})
	CMember(TArray<FString>)                           ReferencingMeshGeometryUids                                 OFFSET(get<T>, {0x70, 16, 0, 0})
};

/// Struct /Script/InterchangePipelines.InterchangeMeshGeometry
/// Size: 0x0038 (0x000000 - 0x000038)
class FInterchangeMeshGeometry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FString)                                   MeshUid                                                     OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	CMember(class UInterchangeMeshNode*)               MeshNode                                                    OFFSET(get<T>, {0x10, 8, 0, 0})
	CMember(TArray<FString>)                           ReferencingMeshInstanceUids                                 OFFSET(get<T>, {0x18, 16, 0, 0})
	CMember(TArray<FString>)                           AttachedSocketUids                                          OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Struct /Script/InterchangePipelines.InterchangePipelineMeshesUtilitiesContext
/// Size: 0x0005 (0x000000 - 0x000005)
class FInterchangePipelineMeshesUtilitiesContext : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 5;

public:
	DMember(bool)                                      bConvertStaticMeshToSkeletalMesh                            OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(bool)                                      bConvertSkeletalMeshToStaticMesh                            OFFSET(get<bool>, {0x1, 1, 0, 0})
	DMember(bool)                                      bConvertStaticsWithMorphTargetsToSkeletals                  OFFSET(get<bool>, {0x2, 1, 0, 0})
	DMember(bool)                                      bImportMeshesInBoneHierarchy                                OFFSET(get<bool>, {0x3, 1, 0, 0})
	DMember(bool)                                      bQueryGeometryOnlyIfNoInstance                              OFFSET(get<bool>, {0x4, 1, 0, 0})
};

/// Enum /Script/InterchangePipelines.EInterchangeForceMeshType
/// Size: 0x04
enum class EInterchangeForceMeshType : uint8_t
{
	EInterchangeForceMeshType__IFMT_None                                             = 0,
	EInterchangeForceMeshType__IFMT_StaticMesh                                       = 1,
	EInterchangeForceMeshType__IFMT_SkeletalMesh                                     = 2,
	EInterchangeForceMeshType__IFMT_MAX                                              = 3
};

/// Enum /Script/InterchangePipelines.EInterchangeVertexColorImportOption
/// Size: 0x04
enum class EInterchangeVertexColorImportOption : uint8_t
{
	EInterchangeVertexColorImportOption__IVCIO_Replace                               = 0,
	EInterchangeVertexColorImportOption__IVCIO_Ignore                                = 1,
	EInterchangeVertexColorImportOption__IVCIO_Override                              = 2,
	EInterchangeVertexColorImportOption__IVCIO_MAX                                   = 3
};

/// Enum /Script/InterchangePipelines.EInterchangeAnimationRange
/// Size: 0x04
enum class EInterchangeAnimationRange : uint8_t
{
	EInterchangeAnimationRange__Timeline                                             = 0,
	EInterchangeAnimationRange__Animated                                             = 1,
	EInterchangeAnimationRange__SetRange                                             = 2,
	EInterchangeAnimationRange__MAX                                                  = 3
};

/// Enum /Script/InterchangePipelines.EInterchangeMaterialImportOption
/// Size: 0x03
enum class EInterchangeMaterialImportOption : uint8_t
{
	EInterchangeMaterialImportOption__ImportAsMaterials                              = 0,
	EInterchangeMaterialImportOption__ImportAsMaterialInstances                      = 1,
	EInterchangeMaterialImportOption__EInterchangeMaterialImportOption_MAX           = 2
};

/// Enum /Script/InterchangePipelines.EInterchangeMaterialSearchLocation
/// Size: 0x06
enum class EInterchangeMaterialSearchLocation : uint8_t
{
	EInterchangeMaterialSearchLocation__Local                                        = 0,
	EInterchangeMaterialSearchLocation__UnderParent                                  = 1,
	EInterchangeMaterialSearchLocation__UnderRoot                                    = 2,
	EInterchangeMaterialSearchLocation__AllAssets                                    = 3,
	EInterchangeMaterialSearchLocation__DoNotSearch                                  = 4,
	EInterchangeMaterialSearchLocation__EInterchangeMaterialSearchLocation_MAX       = 5
};

