
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: MLDeformerFramework
/// dependency: NNE

/// Class /Script/NeuralMorphModel.NeuralMorphInputInfo
/// Size: 0x0020 (0x000068 - 0x000088)
class UNeuralMorphInputInfo : public UMLDeformerMorphModelInputInfo
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	CMember(TArray<FNeuralMorphBoneGroup>)             BoneGroups                                                  OFFSET(get<T>, {0x68, 16, 0, 0})
	CMember(TArray<FNeuralMorphCurveGroup>)            CurveGroups                                                 OFFSET(get<T>, {0x78, 16, 0, 0})
};

/// Class /Script/NeuralMorphModel.NeuralMorphModelInstance
/// Size: 0x0028 (0x000090 - 0x0000B8)
class UNeuralMorphModelInstance : public UMLDeformerMorphModelInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	CMember(class UNeuralMorphNetworkInstance*)        NetworkInstance                                             OFFSET(get<T>, {0x90, 8, 0, 0})
};

/// Class /Script/NeuralMorphModel.NeuralMorphModelVizSettings
/// Size: 0x0008 (0x000038 - 0x000040)
class UNeuralMorphModelVizSettings : public UMLDeformerMorphModelVizSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(ENeuralMorphMaskVizMode)                   MaskVizMode                                                 OFFSET(get<T>, {0x38, 1, 0, 0})
};

/// Class /Script/NeuralMorphModel.NeuralMorphMLPLayer
/// Size: 0x0030 (0x000028 - 0x000058)
class UNeuralMorphMLPLayer : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	DMember(int32_t)                                   NumInputs                                                   OFFSET(get<int32_t>, {0x28, 4, 0, 0})
	DMember(int32_t)                                   NumOutputs                                                  OFFSET(get<int32_t>, {0x2C, 4, 0, 0})
	DMember(int32_t)                                   Depth                                                       OFFSET(get<int32_t>, {0x30, 4, 0, 0})
	CMember(TArray<float>)                             Weights                                                     OFFSET(get<T>, {0x38, 16, 0, 0})
	CMember(TArray<float>)                             Biases                                                      OFFSET(get<T>, {0x48, 16, 0, 0})
};

/// Class /Script/NeuralMorphModel.NeuralMorphMLP
/// Size: 0x0010 (0x000028 - 0x000038)
class UNeuralMorphMLP : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<class UNeuralMorphMLPLayer*>)       Layers                                                      OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Class /Script/NeuralMorphModel.NeuralMorphNetwork
/// Size: 0x0080 (0x000028 - 0x0000A8)
class UNeuralMorphNetwork : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	CMember(class UNeuralMorphMLP*)                    MainMLP                                                     OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(class UNeuralMorphMLP*)                    GroupMLP                                                    OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(class UNNEModelData*)                      MainModelData                                               OFFSET(get<T>, {0x38, 8, 0, 0})
	CMember(class UNNEModelData*)                      GroupModelData                                              OFFSET(get<T>, {0x50, 8, 0, 0})
	CMember(TArray<float>)                             InputMeans                                                  OFFSET(get<T>, {0x68, 16, 0, 0})
	CMember(TArray<float>)                             InputStd                                                    OFFSET(get<T>, {0x78, 16, 0, 0})
	CMember(ENeuralMorphMode)                          Mode                                                        OFFSET(get<T>, {0x88, 1, 0, 0})
	DMember(int32_t)                                   NumMorphs                                                   OFFSET(get<int32_t>, {0x8C, 4, 0, 0})
	DMember(int32_t)                                   NumMorphsPerBone                                            OFFSET(get<int32_t>, {0x90, 4, 0, 0})
	DMember(int32_t)                                   NumBones                                                    OFFSET(get<int32_t>, {0x94, 4, 0, 0})
	DMember(int32_t)                                   NumCurves                                                   OFFSET(get<int32_t>, {0x98, 4, 0, 0})
	DMember(int32_t)                                   NumFloatsPerCurve                                           OFFSET(get<int32_t>, {0x9C, 4, 0, 0})
	DMember(int32_t)                                   NumGroups                                                   OFFSET(get<int32_t>, {0xA0, 4, 0, 0})
	DMember(int32_t)                                   NumItemsPerGroup                                            OFFSET(get<int32_t>, {0xA4, 4, 0, 0})
};

/// Class /Script/NeuralMorphModel.NeuralMorphNetworkInstance
/// Size: 0x0058 (0x000028 - 0x000080)
class UNeuralMorphNetworkInstance : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(class UNeuralMorphNetwork*)                Network                                                     OFFSET(get<T>, {0x78, 8, 0, 0})
};

/// Class /Script/NeuralMorphModel.NeuralMorphModel
/// Size: 0x0100 (0x0001A8 - 0x0002A8)
class UNeuralMorphModel : public UMLDeformerMorphModel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 680;

public:
	CMember(TArray<FNeuralMorphBoneGroup>)             BoneGroups                                                  OFFSET(get<T>, {0x1A8, 16, 0, 0})
	CMember(TArray<FNeuralMorphCurveGroup>)            CurveGroups                                                 OFFSET(get<T>, {0x1B8, 16, 0, 0})
	CMember(TMap<FName, FNeuralMorphMaskInfo>)         BoneMaskInfos                                               OFFSET(get<T>, {0x1C8, 80, 0, 0})
	CMember(TMap<FName, FNeuralMorphMaskInfo>)         BoneGroupMaskInfos                                          OFFSET(get<T>, {0x218, 80, 0, 0})
	CMember(ENeuralMorphMode)                          Mode                                                        OFFSET(get<T>, {0x268, 1, 0, 0})
	DMember(int32_t)                                   LocalNumMorphTargetsPerBone                                 OFFSET(get<int32_t>, {0x26C, 4, 0, 0})
	DMember(int32_t)                                   GlobalNumMorphTargets                                       OFFSET(get<int32_t>, {0x270, 4, 0, 0})
	DMember(int32_t)                                   NumIterations                                               OFFSET(get<int32_t>, {0x274, 4, 0, 0})
	DMember(int32_t)                                   LocalNumHiddenLayers                                        OFFSET(get<int32_t>, {0x278, 4, 0, 0})
	DMember(int32_t)                                   LocalNumNeuronsPerLayer                                     OFFSET(get<int32_t>, {0x27C, 4, 0, 0})
	DMember(int32_t)                                   GlobalNumHiddenLayers                                       OFFSET(get<int32_t>, {0x280, 4, 0, 0})
	DMember(int32_t)                                   GlobalNumNeuronsPerLayer                                    OFFSET(get<int32_t>, {0x284, 4, 0, 0})
	DMember(int32_t)                                   BatchSize                                                   OFFSET(get<int32_t>, {0x288, 4, 0, 0})
	DMember(float)                                     LearningRate                                                OFFSET(get<float>, {0x28C, 4, 0, 0})
	DMember(float)                                     RegularizationFactor                                        OFFSET(get<float>, {0x290, 4, 0, 0})
	DMember(bool)                                      bEnableBoneMasks                                            OFFSET(get<bool>, {0x294, 1, 0, 0})
	DMember(float)                                     SmoothLossBeta                                              OFFSET(get<float>, {0x298, 4, 0, 0})
	CMember(class UNeuralMorphNetwork*)                NeuralMorphNetwork                                          OFFSET(get<T>, {0x2A0, 8, 0, 0})
};

/// Struct /Script/NeuralMorphModel.NeuralMorphBoneGroup
/// Size: 0x0018 (0x000000 - 0x000018)
class FNeuralMorphBoneGroup : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FName)                                     GroupName                                                   OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(TArray<FBoneReference>)                    BoneNames                                                   OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/NeuralMorphModel.NeuralMorphCurveGroup
/// Size: 0x0018 (0x000000 - 0x000018)
class FNeuralMorphCurveGroup : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FName)                                     GroupName                                                   OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(TArray<FMLDeformerCurveReference>)         CurveNames                                                  OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/NeuralMorphModel.NeuralMorphMaskInfo
/// Size: 0x0010 (0x000000 - 0x000010)
class FNeuralMorphMaskInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FName>)                             BoneNames                                                   OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Enum /Script/NeuralMorphModel.ENeuralMorphMode
/// Size: 0x02
enum class ENeuralMorphMode : uint8_t
{
	ENeuralMorphMode__Local                                                          = 0,
	ENeuralMorphMode__Global                                                         = 1
};

/// Enum /Script/NeuralMorphModel.ENeuralMorphMaskVizMode
/// Size: 0x03
enum class ENeuralMorphMaskVizMode : uint8_t
{
	ENeuralMorphMaskVizMode__Off                                                     = 0,
	ENeuralMorphMaskVizMode__WhenInFocus                                             = 1,
	ENeuralMorphMaskVizMode__Always                                                  = 2
};

