
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: ComputeFramework
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: OptimusCore

/// Enum /Script/MLDeformerFramework.EMLDeformerVizMode
/// Size: 0x03
enum class EMLDeformerVizMode : uint8_t
{
	EMLDeformerVizMode__TrainingData                                                 = 0,
	EMLDeformerVizMode__TestData                                                     = 1,
	EMLDeformerVizMode__EMLDeformerVizMode_MAX                                       = 2
};

/// Enum /Script/MLDeformerFramework.EMLDeformerHeatMapMode
/// Size: 0x03
enum class EMLDeformerHeatMapMode : uint8_t
{
	EMLDeformerHeatMapMode__Activations                                              = 0,
	EMLDeformerHeatMapMode__GroundTruth                                              = 1,
	EMLDeformerHeatMapMode__EMLDeformerHeatMapMode_MAX                               = 2
};

/// Enum /Script/MLDeformerFramework.EMLDeformerMaskChannel
/// Size: 0x06
enum class EMLDeformerMaskChannel : uint8_t
{
	EMLDeformerMaskChannel__Disabled                                                 = 0,
	EMLDeformerMaskChannel__VertexColorRed                                           = 1,
	EMLDeformerMaskChannel__VertexColorGreen                                         = 2,
	EMLDeformerMaskChannel__VertexColorBlue                                          = 3,
	EMLDeformerMaskChannel__VertexColorAlpha                                         = 4,
	EMLDeformerMaskChannel__EMLDeformerMaskChannel_MAX                               = 5
};

/// Class /Script/MLDeformerFramework.MLDeformerAsset
/// Size: 0x0008 (0x000028 - 0x000030)
class UMLDeformerAsset : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	class UMLDeformerModel*                            Model;                                                      // 0x0028   (0x0008)  
};

/// Class /Script/MLDeformerFramework.MLDeformerVizSettings
/// Size: 0x0000 (0x000028 - 0x000028)
class UMLDeformerVizSettings : public UObject
{ 
public:
};

/// Class /Script/MLDeformerFramework.MLDeformerGeomCacheVizSettings
/// Size: 0x0000 (0x000028 - 0x000028)
class UMLDeformerGeomCacheVizSettings : public UMLDeformerVizSettings
{ 
public:
};

/// Class /Script/MLDeformerFramework.MLDeformerMorphModelVizSettings
/// Size: 0x0010 (0x000028 - 0x000038)
class UMLDeformerMorphModelVizSettings : public UMLDeformerGeomCacheVizSettings
{ 
public:
	float                                              MorphTargetDeltaThreshold;                                  // 0x0028   (0x0004)  
	int32_t                                            MorphTargetNumber;                                          // 0x002C   (0x0004)  
	bool                                               bDrawMorphTargets;                                          // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0031   (0x0007)  MISSED
};

/// Class /Script/MLDeformerFramework.MLDeformerComponent
/// Size: 0x0040 (0x0000A0 - 0x0000E0)
class UMLDeformerComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x00A0   (0x0028)  MISSED
	class UMLDeformerAsset*                            DeformerAsset;                                              // 0x00C8   (0x0008)  
	float                                              Weight;                                                     // 0x00D0   (0x0004)  
	int32_t                                            QualityLevel;                                               // 0x00D4   (0x0004)  
	class UMLDeformerModelInstance*                    ModelInstance;                                              // 0x00D8   (0x0008)  


	/// Functions
	// Function /Script/MLDeformerFramework.MLDeformerComponent.UpdateSkeletalMeshComponent
	// void UpdateSkeletalMeshComponent();                                                                                   // [0xaa1f4bc] Final|Native|Public|BlueprintCallable 
	// Function /Script/MLDeformerFramework.MLDeformerComponent.SetWeight
	// void SetWeight(float NormalizedWeightValue);                                                                          // [0x70d03f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MLDeformerFramework.MLDeformerComponent.SetQualityLevel
	// void SetQualityLevel(int32_t InQualityLevel);                                                                         // [0xaa1f438] Final|Native|Public|BlueprintCallable 
	// Function /Script/MLDeformerFramework.MLDeformerComponent.SetDeformerAsset
	// void SetDeformerAsset(class UMLDeformerAsset* InDeformerAsset);                                                       // [0x6cb20f4] Final|Native|Public|BlueprintCallable 
	// Function /Script/MLDeformerFramework.MLDeformerComponent.GetWeight
	// float GetWeight();                                                                                                    // [0x87852ac] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MLDeformerFramework.MLDeformerComponent.GetSkeletalMeshComponent
	// class USkeletalMeshComponent* GetSkeletalMeshComponent();                                                             // [0x66de484] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MLDeformerFramework.MLDeformerComponent.GetQualityLevel
	// int32_t GetQualityLevel();                                                                                            // [0x960d5ac] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MLDeformerFramework.MLDeformerComponent.GetDeformerAsset
	// class UMLDeformerAsset* GetDeformerAsset();                                                                           // [0x8c79d14] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MLDeformerFramework.MLDeformerComponent.FindSkeletalMeshComponent
	// class USkeletalMeshComponent* FindSkeletalMeshComponent(class UMLDeformerAsset* Asset);                               // [0xaa1ee64] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/MLDeformerFramework.MLDeformerComponentSource
/// Size: 0x0000 (0x000028 - 0x000028)
class UMLDeformerComponentSource : public UOptimusComponentSource
{ 
public:
};

/// Class /Script/MLDeformerFramework.MLDeformerModel
/// Size: 0x00C8 (0x000028 - 0x0000F0)
class UMLDeformerModel : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0xC0];                                      // 0x0000   (0x00C0)  MISSED
	int32_t                                            NumBaseMeshVerts;                                           // 0x00C0   (0x0004)  
	int32_t                                            NumTargetMeshVerts;                                         // 0x00C4   (0x0004)  
	int32_t                                            MaxNumLODs;                                                 // 0x00C8   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x00CC   (0x0004)  MISSED
	class UMLDeformerInputInfo*                        InputInfo;                                                  // 0x00D0   (0x0008)  
	TArray<int32_t>                                    VertexMap;                                                  // 0x00D8   (0x0010)  
	class USkeletalMesh*                               SkeletalMesh;                                               // 0x00E8   (0x0008)  
};

/// Class /Script/MLDeformerFramework.MLDeformerGeomCacheModel
/// Size: 0x0000 (0x0000F0 - 0x0000F0)
class UMLDeformerGeomCacheModel : public UMLDeformerModel
{ 
public:
};

/// Class /Script/MLDeformerFramework.MLDeformerGraphDebugDataInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UMLDeformerGraphDebugDataInterface : public UOptimusComputeDataInterface
{ 
public:
};

/// Class /Script/MLDeformerFramework.MLDeformerGraphDebugDataProvider
/// Size: 0x0010 (0x000028 - 0x000038)
class UMLDeformerGraphDebugDataProvider : public UComputeDataProvider
{ 
public:
	class UMLDeformerComponent*                        DeformerComponent;                                          // 0x0028   (0x0008)  
	class UMLDeformerAsset*                            DeformerAsset;                                              // 0x0030   (0x0008)  
};

/// Class /Script/MLDeformerFramework.MLDeformerInputInfo
/// Size: 0x0040 (0x000028 - 0x000068)
class UMLDeformerInputInfo : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	FSoftObjectPath                                    SkeletalMesh;                                               // 0x0028   (0x0018)  
	TArray<FName>                                      BoneNames;                                                  // 0x0040   (0x0010)  
	TArray<FName>                                      CurveNames;                                                 // 0x0050   (0x0010)  
	int32_t                                            NumBaseMeshVertices;                                        // 0x0060   (0x0004)  
	int32_t                                            NumTargetMeshVertices;                                      // 0x0064   (0x0004)  
};

/// Class /Script/MLDeformerFramework.MLDeformerModelInstance
/// Size: 0x0060 (0x000028 - 0x000088)
class UMLDeformerModelInstance : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x30];                                      // 0x0000   (0x0030)  MISSED
	class UMLDeformerModel*                            Model;                                                      // 0x0030   (0x0008)  
	unsigned char                                      UnknownData01_6[0x50];                                      // 0x0038   (0x0050)  MISSED
};

/// Struct /Script/MLDeformerFramework.MLDeformerMorphModelQualityLevel
/// Size: 0x0004 (0x000000 - 0x000004)
struct FMLDeformerMorphModelQualityLevel
{ 
	int32_t                                            MaxActiveMorphs;                                            // 0x0000   (0x0004)  
};

/// Class /Script/MLDeformerFramework.MLDeformerMorphModel
/// Size: 0x00B8 (0x0000F0 - 0x0001A8)
class UMLDeformerMorphModel : public UMLDeformerGeomCacheModel
{ 
public:
	unsigned char                                      UnknownData00_3[0x20];                                      // 0x00F0   (0x0020)  MISSED
	bool                                               bClampMorphWeights;                                         // 0x0110   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0111   (0x0007)  MISSED
	TArray<FVector3f>                                  MorphTargetDeltas;                                          // 0x0118   (0x0010)  
	int32_t                                            NumMorphTargets;                                            // 0x0128   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x012C   (0x0004)  MISSED
	uint64_t                                           CompressedMorphDataSizeInBytes;                             // 0x0130   (0x0008)  
	uint64_t                                           UncompressedMorphDataSizeInBytes;                           // 0x0138   (0x0008)  
	TArray<int32_t>                                    MorphTargetErrorOrder;                                      // 0x0140   (0x0010)  
	TArray<float>                                      MorphTargetErrors;                                          // 0x0150   (0x0010)  
	TArray<float>                                      MaxMorphWeights;                                            // 0x0160   (0x0010)  
	TArray<FFloatInterval>                             MorphTargetsMinMaxWeights;                                  // 0x0170   (0x0010)  
	TArray<FMLDeformerMorphModelQualityLevel>          QualityLevels;                                              // 0x0180   (0x0010)  
	bool                                               bIncludeNormals;                                            // 0x0190   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x0191   (0x0003)  MISSED
	float                                              MorphDeltaZeroThreshold;                                    // 0x0194   (0x0004)  
	float                                              MorphCompressionLevel;                                      // 0x0198   (0x0004)  
	EMLDeformerMaskChannel                             MaskChannel;                                                // 0x019C   (0x0001)  
	bool                                               bInvertMaskChannel;                                         // 0x019D   (0x0001)  
	unsigned char                                      UnknownData04_6[0xA];                                       // 0x019E   (0x000A)  MISSED


	/// Functions
	// Function /Script/MLDeformerFramework.MLDeformerMorphModel.SetMorphTargetsMinMaxWeights
	// void SetMorphTargetsMinMaxWeights(TArray<float>& MinValues, TArray<float>& MaxValues);                                // [0xaa1f2ac] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MLDeformerFramework.MLDeformerMorphModel.SetMorphTargetsMaxWeights
	// void SetMorphTargetsMaxWeights(TArray<float>& MaxWeights);                                                            // [0x8787eb8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MLDeformerFramework.MLDeformerMorphModel.SetMorphTargetsErrorOrder
	// void SetMorphTargetsErrorOrder(TArray<int32_t>& MorphTargetOrder, TArray<float>& ErrorValues);                        // [0xaa1f148] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MLDeformerFramework.MLDeformerMorphModel.SetMorphTargetDeltas
	// void SetMorphTargetDeltas(TArray<FVector3f>& Deltas);                                                                 // [0xaa1f0a8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MLDeformerFramework.MLDeformerMorphModel.SetMorphTargetDeltaFloats
	// void SetMorphTargetDeltaFloats(TArray<float>& Deltas);                                                                // [0xaa1efc8] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/MLDeformerFramework.MLDeformerMorphModelInputInfo
/// Size: 0x0000 (0x000068 - 0x000068)
class UMLDeformerMorphModelInputInfo : public UMLDeformerInputInfo
{ 
public:
};

/// Class /Script/MLDeformerFramework.MLDeformerMorphModelInstance
/// Size: 0x0008 (0x000088 - 0x000090)
class UMLDeformerMorphModelInstance : public UMLDeformerModelInstance
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0088   (0x0008)  MISSED
};

/// Struct /Script/MLDeformerFramework.MLDeformerCurveReference
/// Size: 0x0004 (0x000000 - 0x000004)
struct FMLDeformerCurveReference
{ 
	FName                                              CurveName;                                                  // 0x0000   (0x0004)  
};

/// Struct /Script/MLDeformerFramework.MLDeformerTrainingInputAnim
/// Size: 0x0008 (0x000000 - 0x000008)
struct FMLDeformerTrainingInputAnim
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/MLDeformerFramework.MLDeformerGeomCacheTrainingInputAnim
/// Size: 0x0000 (0x000008 - 0x000008)
struct FMLDeformerGeomCacheTrainingInputAnim : FMLDeformerTrainingInputAnim
{ 
};

/// Struct /Script/MLDeformerFramework.MLDeformerCompareActor
/// Size: 0x0028 (0x000000 - 0x000028)
struct FMLDeformerCompareActor
{ 
	FName                                              Name;                                                       // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	SDK_UNDEFINED(32,15066) /* TWeakObjectPtr<UMLDeformerAsset*> */ __um(DeformerAsset);                           // 0x0008   (0x0020)  
};

