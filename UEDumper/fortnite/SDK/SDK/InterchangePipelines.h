
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: InterchangeCore
/// dependency: InterchangeFactoryNodes
/// dependency: InterchangeNodes

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

/// Class /Script/InterchangePipelines.InterchangeGenericCommonMeshesProperties
/// Size: 0x0018 (0x000108 - 0x000120)
class UInterchangeGenericCommonMeshesProperties : public UInterchangePipelineBase
{ 
public:
	EInterchangeForceMeshType                          ForceAllMeshAsType;                                         // 0x0108   (0x0001)  
	bool                                               bAutoDetectMeshType;                                        // 0x0109   (0x0001)  
	bool                                               bImportLods;                                                // 0x010A   (0x0001)  
	bool                                               bBakeMeshes;                                                // 0x010B   (0x0001)  
	bool                                               bKeepSectionsSeparate;                                      // 0x010C   (0x0001)  
	EInterchangeVertexColorImportOption                VertexColorImportOption;                                    // 0x010D   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x010E   (0x0002)  MISSED
	FColor                                             VertexOverrideColor;                                        // 0x0110   (0x0004)  
	bool                                               bRecomputeNormals;                                          // 0x0114   (0x0001)  
	bool                                               bRecomputeTangents;                                         // 0x0115   (0x0001)  
	bool                                               bUseMikkTSpace;                                             // 0x0116   (0x0001)  
	bool                                               bComputeWeightedNormals;                                    // 0x0117   (0x0001)  
	bool                                               bUseHighPrecisionTangentBasis;                              // 0x0118   (0x0001)  
	bool                                               bUseFullPrecisionUVs;                                       // 0x0119   (0x0001)  
	bool                                               bUseBackwardsCompatibleF16TruncUVs;                         // 0x011A   (0x0001)  
	bool                                               bRemoveDegenerates;                                         // 0x011B   (0x0001)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x011C   (0x0004)  MISSED
};

/// Class /Script/InterchangePipelines.InterchangeGenericCommonSkeletalMeshesAndAnimationsProperties
/// Size: 0x0010 (0x000108 - 0x000118)
class UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties : public UInterchangePipelineBase
{ 
public:
	bool                                               bImportOnlyAnimations;                                      // 0x0108   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0109   (0x0003)  MISSED
	SDK_UNDEFINED(8,14304) /* TWeakObjectPtr<USkeleton*> */ __um(Skeleton);                                        // 0x010C   (0x0008)  
	bool                                               bImportMeshesInBoneHierarchy;                               // 0x0114   (0x0001)  
	bool                                               bUseT0AsRefPose;                                            // 0x0115   (0x0001)  
	bool                                               bConvertStaticsWithMorphTargetsToSkeletals;                 // 0x0116   (0x0001)  
	unsigned char                                      UnknownData01_6[0x1];                                       // 0x0117   (0x0001)  MISSED
};

/// Class /Script/InterchangePipelines.GLTFPipelineSettings
/// Size: 0x0058 (0x000030 - 0x000088)
class UGLTFPipelineSettings : public UDeveloperSettings
{ 
public:
	SDK_UNDEFINED(80,14305) /* TMap<FString, FSoftObjectPath> */ __um(MaterialParents);                            // 0x0030   (0x0050)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0080   (0x0008)  MISSED
};

/// Class /Script/InterchangePipelines.InterchangeGLTFPipeline
/// Size: 0x0008 (0x000108 - 0x000110)
class UInterchangeGLTFPipeline : public UInterchangePipelineBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0108   (0x0008)  MISSED
};

/// Class /Script/InterchangePipelines.MaterialXPipelineSettings
/// Size: 0x0140 (0x000030 - 0x000170)
class UMaterialXPipelineSettings : public UDeveloperSettings
{ 
public:
	SDK_UNDEFINED(80,14306) /* TMap<EInterchangeMaterialXShaders, FSoftObjectPath> */ __um(PredefinedSurfaceShaders); // 0x0030   (0x0050)  
	SDK_UNDEFINED(80,14307) /* TMap<EInterchangeMaterialXBSDF, FSoftObjectPath> */ __um(PredefinedBSDF);           // 0x0080   (0x0050)  
	SDK_UNDEFINED(80,14308) /* TMap<EInterchangeMaterialXEDF, FSoftObjectPath> */ __um(PredefinedEDF);             // 0x00D0   (0x0050)  
	SDK_UNDEFINED(80,14309) /* TMap<EInterchangeMaterialXVDF, FSoftObjectPath> */ __um(PredefinedVDF);             // 0x0120   (0x0050)  
};

/// Class /Script/InterchangePipelines.InterchangeMaterialXPipeline
/// Size: 0x0008 (0x000108 - 0x000110)
class UInterchangeMaterialXPipeline : public UInterchangePipelineBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0108   (0x0008)  MISSED
};

/// Class /Script/InterchangePipelines.InterchangeGenericAnimationPipeline
/// Size: 0x0070 (0x000108 - 0x000178)
class UInterchangeGenericAnimationPipeline : public UInterchangePipelineBase
{ 
public:
	SDK_UNDEFINED(8,14310) /* TWeakObjectPtr<UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties*> */ __um(CommonSkeletalMeshesAndAnimationsProperties); // 0x0108   (0x0008)  
	SDK_UNDEFINED(8,14311) /* TWeakObjectPtr<UInterchangeGenericCommonMeshesProperties*> */ __um(CommonMeshesProperties); // 0x0110   (0x0008)  
	bool                                               bImportAnimations;                                          // 0x0118   (0x0001)  
	bool                                               bImportBoneTracks;                                          // 0x0119   (0x0001)  
	EInterchangeAnimationRange                         AnimationRange;                                             // 0x011A   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x011B   (0x0001)  MISSED
	FInt32Interval                                     FrameImportRange;                                           // 0x011C   (0x0008)  
	bool                                               bUse30HzToBakeBoneAnimation;                                // 0x0124   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0125   (0x0003)  MISSED
	int32_t                                            CustomBoneAnimationSampleRate;                              // 0x0128   (0x0004)  
	bool                                               bSnapToClosestFrameBoundary;                                // 0x012C   (0x0001)  
	bool                                               bImportCustomAttribute;                                     // 0x012D   (0x0001)  
	bool                                               bAddCurveMetadataToSkeleton;                                // 0x012E   (0x0001)  
	bool                                               bSetMaterialDriveParameterOnCustomAttribute;                // 0x012F   (0x0001)  
	SDK_UNDEFINED(16,14312) /* TArray<FString> */      __um(MaterialCurveSuffixes);                                // 0x0130   (0x0010)  
	bool                                               bRemoveCurveRedundantKeys;                                  // 0x0140   (0x0001)  
	bool                                               bDoNotImportCurveWithZero;                                  // 0x0141   (0x0001)  
	bool                                               bDeleteExistingNonCurveCustomAttributes;                    // 0x0142   (0x0001)  
	bool                                               bDeleteExistingCustomAttributeCurves;                       // 0x0143   (0x0001)  
	bool                                               bDeleteExistingMorphTargetCurves;                           // 0x0144   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0145   (0x0003)  MISSED
	SDK_UNDEFINED(16,14313) /* FString */              __um(SourceAnimationName);                                  // 0x0148   (0x0010)  
	bool                                               bSceneImport;                                               // 0x0158   (0x0001)  
	unsigned char                                      UnknownData03_6[0x1F];                                      // 0x0159   (0x001F)  MISSED
};

/// Class /Script/InterchangePipelines.InterchangeGenericAssetsPipeline
/// Size: 0x0170 (0x000108 - 0x000278)
class UInterchangeGenericAssetsPipeline : public UInterchangePipelineBase
{ 
public:
	SDK_UNDEFINED(16,14314) /* FString */              __um(PipelineDisplayName);                                  // 0x0108   (0x0010)  
	EReimportStrategyFlags                             ReimportStrategy;                                           // 0x0118   (0x0001)  
	bool                                               bUseSourceNameForAsset;                                     // 0x0119   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x011A   (0x0006)  MISSED
	SDK_UNDEFINED(16,14315) /* FString */              __um(AssetName);                                            // 0x0120   (0x0010)  
	FVector                                            ImportOffsetTranslation;                                    // 0x0130   (0x0018)  
	FRotator                                           ImportOffsetRotation;                                       // 0x0148   (0x0018)  
	float                                              ImportOffsetUniformScale;                                   // 0x0160   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0164   (0x0004)  MISSED
	class UInterchangeGenericCommonMeshesProperties*   CommonMeshesProperties;                                     // 0x0168   (0x0008)  
	class UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties* CommonSkeletalMeshesAndAnimationsProperties; // 0x0170   (0x0008)  
	class UInterchangeGenericMeshPipeline*             MeshPipeline;                                               // 0x0178   (0x0008)  
	class UInterchangeGenericAnimationPipeline*        AnimationPipeline;                                          // 0x0180   (0x0008)  
	class UInterchangeGenericMaterialPipeline*         MaterialPipeline;                                           // 0x0188   (0x0008)  
	unsigned char                                      UnknownData02_6[0xE8];                                      // 0x0190   (0x00E8)  MISSED
};

/// Class /Script/InterchangePipelines.InterchangeGenericMaterialPipeline
/// Size: 0x00A8 (0x000108 - 0x0001B0)
class UInterchangeGenericMaterialPipeline : public UInterchangePipelineBase
{ 
public:
	SDK_UNDEFINED(16,14316) /* FString */              __um(PipelineDisplayName);                                  // 0x0108   (0x0010)  
	bool                                               bImportMaterials;                                           // 0x0118   (0x0001)  
	EInterchangeMaterialSearchLocation                 SearchLocation;                                             // 0x0119   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x011A   (0x0006)  MISSED
	SDK_UNDEFINED(16,14317) /* FString */              __um(AssetName);                                            // 0x0120   (0x0010)  
	EInterchangeMaterialImportOption                   MaterialImport;                                             // 0x0130   (0x0001)  
	bool                                               bIdentifyDuplicateMaterials;                                // 0x0131   (0x0001)  
	bool                                               bCreateMaterialInstanceForParent;                           // 0x0132   (0x0001)  
	unsigned char                                      UnknownData01_5[0x5];                                       // 0x0133   (0x0005)  MISSED
	FSoftObjectPath                                    ParentMaterial;                                             // 0x0138   (0x0018)  
	class UInterchangeGenericTexturePipeline*          TexturePipeline;                                            // 0x0150   (0x0008)  
	class UInterchangeBaseNodeContainer*               BaseNodeContainer;                                          // 0x0158   (0x0008)  
	unsigned char                                      UnknownData02_6[0x50];                                      // 0x0160   (0x0050)  MISSED
};

/// Class /Script/InterchangePipelines.InterchangeGenericMeshPipeline
/// Size: 0x00D0 (0x000108 - 0x0001D8)
class UInterchangeGenericMeshPipeline : public UInterchangePipelineBase
{ 
public:
	SDK_UNDEFINED(8,14318) /* TWeakObjectPtr<UInterchangeGenericCommonMeshesProperties*> */ __um(CommonMeshesProperties); // 0x0108   (0x0008)  
	SDK_UNDEFINED(8,14319) /* TWeakObjectPtr<UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties*> */ __um(CommonSkeletalMeshesAndAnimationsProperties); // 0x0110   (0x0008)  
	bool                                               bImportStaticMeshes;                                        // 0x0118   (0x0001)  
	bool                                               bCombineStaticMeshes;                                       // 0x0119   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x011A   (0x0002)  MISSED
	FName                                              LODGroup;                                                   // 0x011C   (0x0004)  
	bool                                               bImportCollision;                                           // 0x0120   (0x0001)  
	bool                                               bImportCollisionAccordingToMeshName;                        // 0x0121   (0x0001)  
	bool                                               bOneConvexHullPerUCX;                                       // 0x0122   (0x0001)  
	bool                                               bBuildNanite;                                               // 0x0123   (0x0001)  
	bool                                               bBuildReversedIndexBuffer;                                  // 0x0124   (0x0001)  
	bool                                               bGenerateLightmapUVs;                                       // 0x0125   (0x0001)  
	bool                                               bGenerateDistanceFieldAsIfTwoSided;                         // 0x0126   (0x0001)  
	bool                                               bSupportFaceRemap;                                          // 0x0127   (0x0001)  
	int32_t                                            MinLightmapResolution;                                      // 0x0128   (0x0004)  
	int32_t                                            SrcLightmapIndex;                                           // 0x012C   (0x0004)  
	int32_t                                            DstLightmapIndex;                                           // 0x0130   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0134   (0x0004)  MISSED
	FVector                                            BuildScale3D;                                               // 0x0138   (0x0018)  
	float                                              DistanceFieldResolutionScale;                               // 0x0150   (0x0004)  
	SDK_UNDEFINED(8,14320) /* TWeakObjectPtr<UStaticMesh*> */ __um(DistanceFieldReplacementMesh);                  // 0x0154   (0x0008)  
	int32_t                                            MaxLumenMeshCards;                                          // 0x015C   (0x0004)  
	bool                                               bImportSkeletalMeshes;                                      // 0x0160   (0x0001)  
	EInterchangeSkeletalMeshContentType                SkeletalMeshImportContentType;                              // 0x0161   (0x0001)  
	EInterchangeSkeletalMeshContentType                LastSkeletalMeshImportContentType;                          // 0x0162   (0x0001)  
	bool                                               bCombineSkeletalMeshes;                                     // 0x0163   (0x0001)  
	bool                                               bImportMorphTargets;                                        // 0x0164   (0x0001)  
	bool                                               bImportVertexAttributes;                                    // 0x0165   (0x0001)  
	bool                                               bUpdateSkeletonReferencePose;                               // 0x0166   (0x0001)  
	bool                                               bCreatePhysicsAsset;                                        // 0x0167   (0x0001)  
	SDK_UNDEFINED(8,14321) /* TWeakObjectPtr<UPhysicsAsset*> */ __um(PhysicsAsset);                                // 0x0168   (0x0008)  
	bool                                               bUseHighPrecisionSkinWeights;                               // 0x0170   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0171   (0x0003)  MISSED
	float                                              ThresholdPosition;                                          // 0x0174   (0x0004)  
	float                                              ThresholdTangentNormal;                                     // 0x0178   (0x0004)  
	float                                              ThresholdUV;                                                // 0x017C   (0x0004)  
	float                                              MorphThresholdPosition;                                     // 0x0180   (0x0004)  
	int32_t                                            BoneInfluenceLimit;                                         // 0x0184   (0x0004)  
	unsigned char                                      UnknownData03_6[0x50];                                      // 0x0188   (0x0050)  MISSED
};

/// Class /Script/InterchangePipelines.InterchangeGenericLevelPipeline
/// Size: 0x0020 (0x000108 - 0x000128)
class UInterchangeGenericLevelPipeline : public UInterchangePipelineBase
{ 
public:
	SDK_UNDEFINED(16,14322) /* FString */              __um(PipelineDisplayName);                                  // 0x0108   (0x0010)  
	EReimportStrategyFlags                             ReimportPropertyStrategy;                                   // 0x0118   (0x0001)  
	bool                                               bDeleteMissingActors;                                       // 0x0119   (0x0001)  
	bool                                               bForceReimportDeletedActors;                                // 0x011A   (0x0001)  
	bool                                               bForceReimportDeletedAssets;                                // 0x011B   (0x0001)  
	bool                                               bDeleteMissingAssets;                                       // 0x011C   (0x0001)  
	bool                                               bUsePhysicalInsteadOfStandardPerspectiveCamera;             // 0x011D   (0x0001)  
	unsigned char                                      UnknownData00_6[0xA];                                       // 0x011E   (0x000A)  MISSED
};

/// Class /Script/InterchangePipelines.InterchangeGenericTexturePipeline
/// Size: 0x0068 (0x000108 - 0x000170)
class UInterchangeGenericTexturePipeline : public UInterchangePipelineBase
{ 
public:
	SDK_UNDEFINED(16,14323) /* FString */              __um(PipelineDisplayName);                                  // 0x0108   (0x0010)  
	bool                                               bImportTextures;                                            // 0x0118   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0119   (0x0007)  MISSED
	SDK_UNDEFINED(16,14324) /* FString */              __um(AssetName);                                            // 0x0120   (0x0010)  
	bool                                               bAllowNonPowerOfTwo;                                        // 0x0130   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0131   (0x0007)  MISSED
	class UInterchangeBaseNodeContainer*               BaseNodeContainer;                                          // 0x0138   (0x0008)  
	unsigned char                                      UnknownData02_6[0x30];                                      // 0x0140   (0x0030)  MISSED
};

/// Class /Script/InterchangePipelines.InterchangePipelineMeshesUtilities
/// Size: 0x0100 (0x000028 - 0x000128)
class UInterchangePipelineMeshesUtilities : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x128];                                     // 0x0000   (0x0128)  MISSED


	/// Functions
	// Function /Script/InterchangePipelines.InterchangePipelineMeshesUtilities.SetContext
	// void SetContext(FInterchangePipelineMeshesUtilitiesContext& Context);                                                 // [0xbbec278] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangePipelines.InterchangePipelineMeshesUtilities.IsValidMeshInstanceUid
	// bool IsValidMeshInstanceUid(FString MeshInstanceUid);                                                                 // [0xbbec10c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangePipelines.InterchangePipelineMeshesUtilities.IsValidMeshGeometryUid
	// bool IsValidMeshGeometryUid(FString MeshGeometryUid);                                                                 // [0xbbebfa0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangePipelines.InterchangePipelineMeshesUtilities.GetMeshInstanceSkeletonRootUid
	// FString GetMeshInstanceSkeletonRootUid(FString MeshInstanceUid);                                                      // [0xbbebdb0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangePipelines.InterchangePipelineMeshesUtilities.GetMeshInstanceByUid
	// FInterchangeMeshInstance GetMeshInstanceByUid(FString MeshInstanceUid);                                               // [0xbbebc3c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangePipelines.InterchangePipelineMeshesUtilities.GetMeshGeometrySkeletonRootUid
	// FString GetMeshGeometrySkeletonRootUid(FString MeshGeometryUid);                                                      // [0xbbeba4c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangePipelines.InterchangePipelineMeshesUtilities.GetMeshGeometryByUid
	// FInterchangeMeshGeometry GetMeshGeometryByUid(FString MeshGeometryUid);                                               // [0xbbeb8d8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangePipelines.InterchangePipelineMeshesUtilities.GetAllStaticMeshInstance
	// void GetAllStaticMeshInstance(TArray<FString>& MeshInstanceUids);                                                     // [0xbbeb840] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangePipelines.InterchangePipelineMeshesUtilities.GetAllStaticMeshGeometry
	// void GetAllStaticMeshGeometry(TArray<FString>& MeshGeometryUids);                                                     // [0xbbeb7a8] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangePipelines.InterchangePipelineMeshesUtilities.GetAllSkinnedMeshInstance
	// void GetAllSkinnedMeshInstance(TArray<FString>& MeshInstanceUids);                                                    // [0xbbeb710] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangePipelines.InterchangePipelineMeshesUtilities.GetAllSkinnedMeshGeometry
	// void GetAllSkinnedMeshGeometry(TArray<FString>& MeshGeometryUids);                                                    // [0xbbeb678] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangePipelines.InterchangePipelineMeshesUtilities.GetAllMeshInstanceUidsUsingMeshGeometryUid
	// void GetAllMeshInstanceUidsUsingMeshGeometryUid(FString MeshGeometryUid, TArray<FString>& MeshInstanceUids);          // [0xbbeb4b4] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangePipelines.InterchangePipelineMeshesUtilities.GetAllMeshInstanceUids
	// void GetAllMeshInstanceUids(TArray<FString>& MeshInstanceUids);                                                       // [0xbbeb418] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangePipelines.InterchangePipelineMeshesUtilities.GetAllMeshGeometryNotInstanced
	// void GetAllMeshGeometryNotInstanced(TArray<FString>& MeshGeometryUids);                                               // [0xbbeb380] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangePipelines.InterchangePipelineMeshesUtilities.GetAllMeshGeometry
	// void GetAllMeshGeometry(TArray<FString>& MeshGeometryUids);                                                           // [0xbbeb2e4] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangePipelines.InterchangePipelineMeshesUtilities.CreateInterchangePipelineMeshesUtilities
	// class UInterchangePipelineMeshesUtilities* CreateInterchangePipelineMeshesUtilities(class UInterchangeBaseNodeContainer* BaseNodeContainer); // [0xbbeb264] Final|Native|Static|Public|BlueprintCallable 
};

/// Struct /Script/InterchangePipelines.InterchangeLodSceneNodeContainer
/// Size: 0x0010 (0x000000 - 0x000010)
struct FInterchangeLodSceneNodeContainer
{ 
	TArray<class UInterchangeSceneNode*>               SceneNodes;                                                 // 0x0000   (0x0010)  
};

/// Struct /Script/InterchangePipelines.InterchangeMeshInstance
/// Size: 0x0080 (0x000000 - 0x000080)
struct FInterchangeMeshInstance
{ 
	SDK_UNDEFINED(16,14325) /* FString */              __um(MeshInstanceUid);                                      // 0x0000   (0x0010)  
	class UInterchangeSceneNode*                       LodGroupNode;                                               // 0x0010   (0x0008)  
	bool                                               bReferenceSkinnedMesh;                                      // 0x0018   (0x0001)  
	bool                                               bReferenceMorphTarget;                                      // 0x0019   (0x0001)  
	bool                                               bHasMorphTargets;                                           // 0x001A   (0x0001)  
	unsigned char                                      UnknownData00_5[0x5];                                       // 0x001B   (0x0005)  MISSED
	SDK_UNDEFINED(80,14326) /* TMap<int32_t, FInterchangeLodSceneNodeContainer> */ __um(SceneNodePerLodIndex);     // 0x0020   (0x0050)  
	SDK_UNDEFINED(16,14327) /* TArray<FString> */      __um(ReferencingMeshGeometryUids);                          // 0x0070   (0x0010)  
};

/// Struct /Script/InterchangePipelines.InterchangeMeshGeometry
/// Size: 0x0038 (0x000000 - 0x000038)
struct FInterchangeMeshGeometry
{ 
	SDK_UNDEFINED(16,14328) /* FString */              __um(MeshUid);                                              // 0x0000   (0x0010)  
	class UInterchangeMeshNode*                        MeshNode;                                                   // 0x0010   (0x0008)  
	SDK_UNDEFINED(16,14329) /* TArray<FString> */      __um(ReferencingMeshInstanceUids);                          // 0x0018   (0x0010)  
	SDK_UNDEFINED(16,14330) /* TArray<FString> */      __um(AttachedSocketUids);                                   // 0x0028   (0x0010)  
};

/// Struct /Script/InterchangePipelines.InterchangePipelineMeshesUtilitiesContext
/// Size: 0x0005 (0x000000 - 0x000005)
struct FInterchangePipelineMeshesUtilitiesContext
{ 
	bool                                               bConvertStaticMeshToSkeletalMesh;                           // 0x0000   (0x0001)  
	bool                                               bConvertSkeletalMeshToStaticMesh;                           // 0x0001   (0x0001)  
	bool                                               bConvertStaticsWithMorphTargetsToSkeletals;                 // 0x0002   (0x0001)  
	bool                                               bImportMeshesInBoneHierarchy;                               // 0x0003   (0x0001)  
	bool                                               bQueryGeometryOnlyIfNoInstance;                             // 0x0004   (0x0001)  
};

