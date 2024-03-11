
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: MLDeformerFramework
/// dependency: NNE

/// Enum /Script/NeuralMorphModel.ENeuralMorphMode
/// Size: 0x03
enum class ENeuralMorphMode : uint8_t
{
	ENeuralMorphMode__Local                                                          = 0,
	ENeuralMorphMode__Global                                                         = 1,
	ENeuralMorphMode__ENeuralMorphMode_MAX                                           = 2
};

/// Enum /Script/NeuralMorphModel.ENeuralMorphMaskVizMode
/// Size: 0x04
enum class ENeuralMorphMaskVizMode : uint8_t
{
	ENeuralMorphMaskVizMode__Off                                                     = 0,
	ENeuralMorphMaskVizMode__WhenInFocus                                             = 1,
	ENeuralMorphMaskVizMode__Always                                                  = 2,
	ENeuralMorphMaskVizMode__ENeuralMorphMaskVizMode_MAX                             = 3
};

/// Struct /Script/NeuralMorphModel.NeuralMorphBoneGroup
/// Size: 0x0018 (0x000000 - 0x000018)
struct FNeuralMorphBoneGroup
{ 
	FName                                              GroupName;                                                  // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	TArray<FBoneReference>                             BoneNames;                                                  // 0x0008   (0x0010)  
};

/// Struct /Script/NeuralMorphModel.NeuralMorphCurveGroup
/// Size: 0x0018 (0x000000 - 0x000018)
struct FNeuralMorphCurveGroup
{ 
	FName                                              GroupName;                                                  // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	TArray<FMLDeformerCurveReference>                  CurveNames;                                                 // 0x0008   (0x0010)  
};

/// Class /Script/NeuralMorphModel.NeuralMorphInputInfo
/// Size: 0x0020 (0x000068 - 0x000088)
class UNeuralMorphInputInfo : public UMLDeformerMorphModelInputInfo
{ 
public:
	TArray<FNeuralMorphBoneGroup>                      BoneGroups;                                                 // 0x0068   (0x0010)  
	TArray<FNeuralMorphCurveGroup>                     CurveGroups;                                                // 0x0078   (0x0010)  
};

/// Class /Script/NeuralMorphModel.NeuralMorphModelInstance
/// Size: 0x0028 (0x000090 - 0x0000B8)
class UNeuralMorphModelInstance : public UMLDeformerMorphModelInstance
{ 
public:
	class UNeuralMorphNetworkInstance*                 NetworkInstance;                                            // 0x0090   (0x0008)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x0098   (0x0020)  MISSED
};

/// Class /Script/NeuralMorphModel.NeuralMorphModelVizSettings
/// Size: 0x0008 (0x000038 - 0x000040)
class UNeuralMorphModelVizSettings : public UMLDeformerMorphModelVizSettings
{ 
public:
	ENeuralMorphMaskVizMode                            MaskVizMode;                                                // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0039   (0x0007)  MISSED
};

/// Class /Script/NeuralMorphModel.NeuralMorphMLPLayer
/// Size: 0x0030 (0x000028 - 0x000058)
class UNeuralMorphMLPLayer : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	int32_t                                            NumInputs;                                                  // 0x0028   (0x0004)  
	int32_t                                            NumOutputs;                                                 // 0x002C   (0x0004)  
	int32_t                                            Depth;                                                      // 0x0030   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0034   (0x0004)  MISSED
	TArray<float>                                      Weights;                                                    // 0x0038   (0x0010)  
	TArray<float>                                      Biases;                                                     // 0x0048   (0x0010)  
};

/// Class /Script/NeuralMorphModel.NeuralMorphMLP
/// Size: 0x0010 (0x000028 - 0x000038)
class UNeuralMorphMLP : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	TArray<class UNeuralMorphMLPLayer*>                Layers;                                                     // 0x0028   (0x0010)  
};

/// Class /Script/NeuralMorphModel.NeuralMorphNetwork
/// Size: 0x0080 (0x000028 - 0x0000A8)
class UNeuralMorphNetwork : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	class UNeuralMorphMLP*                             MainMLP;                                                    // 0x0028   (0x0008)  
	class UNeuralMorphMLP*                             GroupMLP;                                                   // 0x0030   (0x0008)  
	class UNNEModelData*                               MainModelData;                                              // 0x0038   (0x0008)  
	unsigned char                                      UnknownData01_5[0x10];                                      // 0x0040   (0x0010)  MISSED
	class UNNEModelData*                               GroupModelData;                                             // 0x0050   (0x0008)  
	unsigned char                                      UnknownData02_5[0x10];                                      // 0x0058   (0x0010)  MISSED
	TArray<float>                                      InputMeans;                                                 // 0x0068   (0x0010)  
	TArray<float>                                      InputStd;                                                   // 0x0078   (0x0010)  
	ENeuralMorphMode                                   Mode;                                                       // 0x0088   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x0089   (0x0003)  MISSED
	int32_t                                            NumMorphs;                                                  // 0x008C   (0x0004)  
	int32_t                                            NumMorphsPerBone;                                           // 0x0090   (0x0004)  
	int32_t                                            NumBones;                                                   // 0x0094   (0x0004)  
	int32_t                                            NumCurves;                                                  // 0x0098   (0x0004)  
	int32_t                                            NumFloatsPerCurve;                                          // 0x009C   (0x0004)  
	int32_t                                            NumGroups;                                                  // 0x00A0   (0x0004)  
	int32_t                                            NumItemsPerGroup;                                           // 0x00A4   (0x0004)  
};

/// Class /Script/NeuralMorphModel.NeuralMorphNetworkInstance
/// Size: 0x0058 (0x000028 - 0x000080)
class UNeuralMorphNetworkInstance : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x78];                                      // 0x0000   (0x0078)  MISSED
	class UNeuralMorphNetwork*                         Network;                                                    // 0x0078   (0x0008)  
};

/// Class /Script/NeuralMorphModel.NeuralMorphModel
/// Size: 0x0100 (0x0001A8 - 0x0002A8)
class UNeuralMorphModel : public UMLDeformerMorphModel
{ 
public:
	TArray<FNeuralMorphBoneGroup>                      BoneGroups;                                                 // 0x01A8   (0x0010)  
	TArray<FNeuralMorphCurveGroup>                     CurveGroups;                                                // 0x01B8   (0x0010)  
	SDK_UNDEFINED(80,15095) /* TMap<FName, FNeuralMorphMaskInfo> */ __um(BoneMaskInfos);                           // 0x01C8   (0x0050)  
	SDK_UNDEFINED(80,15096) /* TMap<FName, FNeuralMorphMaskInfo> */ __um(BoneGroupMaskInfos);                      // 0x0218   (0x0050)  
	ENeuralMorphMode                                   Mode;                                                       // 0x0268   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0269   (0x0003)  MISSED
	int32_t                                            LocalNumMorphTargetsPerBone;                                // 0x026C   (0x0004)  
	int32_t                                            GlobalNumMorphTargets;                                      // 0x0270   (0x0004)  
	int32_t                                            NumIterations;                                              // 0x0274   (0x0004)  
	int32_t                                            LocalNumHiddenLayers;                                       // 0x0278   (0x0004)  
	int32_t                                            LocalNumNeuronsPerLayer;                                    // 0x027C   (0x0004)  
	int32_t                                            GlobalNumHiddenLayers;                                      // 0x0280   (0x0004)  
	int32_t                                            GlobalNumNeuronsPerLayer;                                   // 0x0284   (0x0004)  
	int32_t                                            BatchSize;                                                  // 0x0288   (0x0004)  
	float                                              LearningRate;                                               // 0x028C   (0x0004)  
	float                                              RegularizationFactor;                                       // 0x0290   (0x0004)  
	bool                                               bEnableBoneMasks;                                           // 0x0294   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0295   (0x0003)  MISSED
	float                                              SmoothLossBeta;                                             // 0x0298   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x029C   (0x0004)  MISSED
	class UNeuralMorphNetwork*                         NeuralMorphNetwork;                                         // 0x02A0   (0x0008)  
};

/// Struct /Script/NeuralMorphModel.NeuralMorphMaskInfo
/// Size: 0x0010 (0x000000 - 0x000010)
struct FNeuralMorphMaskInfo
{ 
	TArray<FName>                                      BoneNames;                                                  // 0x0000   (0x0010)  
};

