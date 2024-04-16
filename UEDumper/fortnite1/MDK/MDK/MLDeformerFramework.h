
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: ComputeFramework
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: OptimusCore

/// Class /Script/MLDeformerFramework.MLDeformerAsset
/// Size: 0x0008 (0x000028 - 0x000030)
class UMLDeformerAsset : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(class UMLDeformerModel*)                   Model                                                       OFFSET(get<T>, {0x28, 8, 0, 0})
};

/// Class /Script/MLDeformerFramework.MLDeformerVizSettings
/// Size: 0x0000 (0x000028 - 0x000028)
class UMLDeformerVizSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/MLDeformerFramework.MLDeformerGeomCacheVizSettings
/// Size: 0x0000 (0x000028 - 0x000028)
class UMLDeformerGeomCacheVizSettings : public UMLDeformerVizSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/MLDeformerFramework.MLDeformerMorphModelVizSettings
/// Size: 0x0010 (0x000028 - 0x000038)
class UMLDeformerMorphModelVizSettings : public UMLDeformerGeomCacheVizSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(float)                                     MorphTargetDeltaThreshold                                   OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(int32_t)                                   MorphTargetNumber                                           OFFSET(get<int32_t>, {0x2C, 4, 0, 0})
	DMember(bool)                                      bDrawMorphTargets                                           OFFSET(get<bool>, {0x30, 1, 0, 0})
};

/// Class /Script/MLDeformerFramework.MLDeformerComponent
/// Size: 0x0040 (0x0000A0 - 0x0000E0)
class UMLDeformerComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	CMember(class UMLDeformerAsset*)                   DeformerAsset                                               OFFSET(get<T>, {0xC8, 8, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0xD0, 4, 0, 0})
	DMember(int32_t)                                   QualityLevel                                                OFFSET(get<int32_t>, {0xD4, 4, 0, 0})
	CMember(class UMLDeformerModelInstance*)           ModelInstance                                               OFFSET(get<T>, {0xD8, 8, 0, 0})


	/// Functions
	// Function /Script/MLDeformerFramework.MLDeformerComponent.UpdateSkeletalMeshComponent
	// void UpdateSkeletalMeshComponent();                                                                                      // [0xba5f770] Final|Native|Public|BlueprintCallable 
	// Function /Script/MLDeformerFramework.MLDeformerComponent.SetWeight
	// void SetWeight(float NormalizedWeightValue);                                                                             // [0x72f8820] Final|Native|Public|BlueprintCallable 
	// Function /Script/MLDeformerFramework.MLDeformerComponent.SetQualityLevel
	// void SetQualityLevel(int32_t InQualityLevel);                                                                            // [0x69a71e8] Final|Native|Public  
	// Function /Script/MLDeformerFramework.MLDeformerComponent.SetDeformerAsset
	// void SetDeformerAsset(class UMLDeformerAsset* InDeformerAsset);                                                          // [0x6cdc170] Final|Native|Public|BlueprintCallable 
	// Function /Script/MLDeformerFramework.MLDeformerComponent.GetWeight
	// float GetWeight();                                                                                                       // [0x8e3c8cc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MLDeformerFramework.MLDeformerComponent.GetSkeletalMeshComponent
	// class USkeletalMeshComponent* GetSkeletalMeshComponent();                                                                // [0x6626200] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MLDeformerFramework.MLDeformerComponent.GetQualityLevel
	// int32_t GetQualityLevel();                                                                                               // [0x8687960] Final|Native|Public|Const 
	// Function /Script/MLDeformerFramework.MLDeformerComponent.GetModelInstance
	// class UMLDeformerModelInstance* GetModelInstance();                                                                      // [0x7c39e68] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MLDeformerFramework.MLDeformerComponent.GetDeformerAsset
	// class UMLDeformerAsset* GetDeformerAsset();                                                                              // [0x944f87c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MLDeformerFramework.MLDeformerComponent.FindSkeletalMeshComponent
	// class USkeletalMeshComponent* FindSkeletalMeshComponent(class UMLDeformerAsset* Asset);                                  // [0xba5f15c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/MLDeformerFramework.MLDeformerComponentSource
/// Size: 0x0000 (0x000028 - 0x000028)
class UMLDeformerComponentSource : public UOptimusComponentSource
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/MLDeformerFramework.MLDeformerModel
/// Size: 0x00C8 (0x000028 - 0x0000F0)
class UMLDeformerModel : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	DMember(int32_t)                                   NumBaseMeshVerts                                            OFFSET(get<int32_t>, {0xC0, 4, 0, 0})
	DMember(int32_t)                                   NumTargetMeshVerts                                          OFFSET(get<int32_t>, {0xC4, 4, 0, 0})
	DMember(int32_t)                                   MaxNumLODs                                                  OFFSET(get<int32_t>, {0xC8, 4, 0, 0})
	CMember(class UMLDeformerInputInfo*)               InputInfo                                                   OFFSET(get<T>, {0xD0, 8, 0, 0})
	CMember(TArray<int32_t>)                           VertexMap                                                   OFFSET(get<T>, {0xD8, 16, 0, 0})
	CMember(class USkeletalMesh*)                      SkeletalMesh                                                OFFSET(get<T>, {0xE8, 8, 0, 0})
};

/// Class /Script/MLDeformerFramework.MLDeformerGeomCacheModel
/// Size: 0x0000 (0x0000F0 - 0x0000F0)
class UMLDeformerGeomCacheModel : public UMLDeformerModel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
};

/// Class /Script/MLDeformerFramework.MLDeformerGraphDebugDataInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UMLDeformerGraphDebugDataInterface : public UOptimusComputeDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/MLDeformerFramework.MLDeformerGraphDebugDataProvider
/// Size: 0x0010 (0x000028 - 0x000038)
class UMLDeformerGraphDebugDataProvider : public UComputeDataProvider
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(class UMLDeformerComponent*)               DeformerComponent                                           OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(class UMLDeformerAsset*)                   DeformerAsset                                               OFFSET(get<T>, {0x30, 8, 0, 0})
};

/// Class /Script/MLDeformerFramework.MLDeformerInputInfo
/// Size: 0x0040 (0x000028 - 0x000068)
class UMLDeformerInputInfo : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FSoftObjectPath)                           SkeletalMesh                                                OFFSET(getStruct<T>, {0x28, 24, 0, 0})
	CMember(TArray<FName>)                             BoneNames                                                   OFFSET(get<T>, {0x40, 16, 0, 0})
	CMember(TArray<FName>)                             CurveNames                                                  OFFSET(get<T>, {0x50, 16, 0, 0})
	DMember(int32_t)                                   NumBaseMeshVertices                                         OFFSET(get<int32_t>, {0x60, 4, 0, 0})
	DMember(int32_t)                                   NumTargetMeshVertices                                       OFFSET(get<int32_t>, {0x64, 4, 0, 0})
};

/// Class /Script/MLDeformerFramework.MLDeformerModelInstance
/// Size: 0x0060 (0x000028 - 0x000088)
class UMLDeformerModelInstance : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	CMember(class UMLDeformerModel*)                   Model                                                       OFFSET(get<T>, {0x30, 8, 0, 0})
};

/// Class /Script/MLDeformerFramework.MLDeformerMorphModel
/// Size: 0x00B8 (0x0000F0 - 0x0001A8)
class UMLDeformerMorphModel : public UMLDeformerGeomCacheModel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 424;

public:
	DMember(bool)                                      bClampMorphWeights                                          OFFSET(get<bool>, {0x110, 1, 0, 0})
	CMember(TArray<FVector3f>)                         MorphTargetDeltas                                           OFFSET(get<T>, {0x118, 16, 0, 0})
	DMember(int32_t)                                   NumMorphTargets                                             OFFSET(get<int32_t>, {0x128, 4, 0, 0})
	DMember(uint64_t)                                  CompressedMorphDataSizeInBytes                              OFFSET(get<uint64_t>, {0x130, 8, 0, 0})
	DMember(uint64_t)                                  UncompressedMorphDataSizeInBytes                            OFFSET(get<uint64_t>, {0x138, 8, 0, 0})
	CMember(TArray<int32_t>)                           MorphTargetErrorOrder                                       OFFSET(get<T>, {0x140, 16, 0, 0})
	CMember(TArray<float>)                             MorphTargetErrors                                           OFFSET(get<T>, {0x150, 16, 0, 0})
	CMember(TArray<float>)                             MaxMorphWeights                                             OFFSET(get<T>, {0x160, 16, 0, 0})
	CMember(TArray<FFloatInterval>)                    MorphTargetsMinMaxWeights                                   OFFSET(get<T>, {0x170, 16, 0, 0})
	CMember(TArray<FMLDeformerMorphModelQualityLevel>) QualityLevels                                               OFFSET(get<T>, {0x180, 16, 0, 0})
	DMember(bool)                                      bIncludeNormals                                             OFFSET(get<bool>, {0x190, 1, 0, 0})
	DMember(float)                                     MorphDeltaZeroThreshold                                     OFFSET(get<float>, {0x194, 4, 0, 0})
	DMember(float)                                     MorphCompressionLevel                                       OFFSET(get<float>, {0x198, 4, 0, 0})
	CMember(EMLDeformerMaskChannel)                    MaskChannel                                                 OFFSET(get<T>, {0x19C, 1, 0, 0})
	DMember(bool)                                      bInvertMaskChannel                                          OFFSET(get<bool>, {0x19D, 1, 0, 0})


	/// Functions
	// Function /Script/MLDeformerFramework.MLDeformerMorphModel.SetMorphTargetsMinMaxWeights
	// void SetMorphTargetsMinMaxWeights(TArray<float>& MinValues, TArray<float>& MaxValues);                                   // [0xba5f5e4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MLDeformerFramework.MLDeformerMorphModel.SetMorphTargetsMaxWeights
	// void SetMorphTargetsMaxWeights(TArray<float>& MaxWeights);                                                               // [0x8e3fbd8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MLDeformerFramework.MLDeformerMorphModel.SetMorphTargetsErrorOrder
	// void SetMorphTargetsErrorOrder(TArray<int32_t>& MorphTargetOrder, TArray<float>& ErrorValues);                           // [0xba5f480] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MLDeformerFramework.MLDeformerMorphModel.SetMorphTargetDeltas
	// void SetMorphTargetDeltas(TArray<FVector3f>& Deltas);                                                                    // [0xba5f3e0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MLDeformerFramework.MLDeformerMorphModel.SetMorphTargetDeltaFloats
	// void SetMorphTargetDeltaFloats(TArray<float>& Deltas);                                                                   // [0xba5f300] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MLDeformerFramework.MLDeformerMorphModel.CanDynamicallyUpdateMorphTargets
	// bool CanDynamicallyUpdateMorphTargets();                                                                                 // [0xba5f11c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/MLDeformerFramework.MLDeformerMorphModelInputInfo
/// Size: 0x0000 (0x000068 - 0x000068)
class UMLDeformerMorphModelInputInfo : public UMLDeformerInputInfo
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
};

/// Class /Script/MLDeformerFramework.MLDeformerMorphModelInstance
/// Size: 0x0008 (0x000088 - 0x000090)
class UMLDeformerMorphModelInstance : public UMLDeformerModelInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
};

/// Struct /Script/MLDeformerFramework.MLDeformerCurveReference
/// Size: 0x0004 (0x000000 - 0x000004)
class FMLDeformerCurveReference : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	SMember(FName)                                     CurveName                                                   OFFSET(getStruct<T>, {0x0, 4, 0, 0})
};

/// Struct /Script/MLDeformerFramework.MLDeformerTrainingInputAnim
/// Size: 0x0008 (0x000000 - 0x000008)
class FMLDeformerTrainingInputAnim : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/MLDeformerFramework.MLDeformerGeomCacheTrainingInputAnim
/// Size: 0x0000 (0x000008 - 0x000008)
class FMLDeformerGeomCacheTrainingInputAnim : public FMLDeformerTrainingInputAnim
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/MLDeformerFramework.MLDeformerMorphModelQualityLevel
/// Size: 0x0004 (0x000000 - 0x000004)
class FMLDeformerMorphModelQualityLevel : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(int32_t)                                   MaxActiveMorphs                                             OFFSET(get<int32_t>, {0x0, 4, 0, 0})
};

/// Struct /Script/MLDeformerFramework.MLDeformerCompareActor
/// Size: 0x0028 (0x000000 - 0x000028)
class FMLDeformerCompareActor : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(TWeakObjectPtr<UMLDeformerAsset*>)         DeformerAsset                                               OFFSET(get<T>, {0x8, 32, 0, 0})
};

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

