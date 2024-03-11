
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
/// dependency: MLDeformerFramework
/// dependency: NNE
/// dependency: OptimusCore

/// Class /Script/NearestNeighborModel.NearestNeighborModelVizSettings
/// Size: 0x0000 (0x000038 - 0x000038)
class UNearestNeighborModelVizSettings : public UMLDeformerMorphModelVizSettings
{ 
public:
};

/// Struct /Script/NearestNeighborModel.NearestNeighborNetworkParameter
/// Size: 0x0020 (0x000000 - 0x000020)
struct FNearestNeighborNetworkParameter
{ 
	TArray<float>                                      Values;                                                     // 0x0000   (0x0010)  
	TArray<int32_t>                                    Shape;                                                      // 0x0010   (0x0010)  
};

/// Class /Script/NearestNeighborModel.NearestNeighborNetworkLayer
/// Size: 0x0018 (0x000028 - 0x000040)
class UNearestNeighborNetworkLayer : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	int32_t                                            NumInputs;                                                  // 0x0028   (0x0004)  
	int32_t                                            NumOutputs;                                                 // 0x002C   (0x0004)  
	TArray<FNearestNeighborNetworkParameter>           Parameters;                                                 // 0x0030   (0x0010)  
};

/// Class /Script/NearestNeighborModel.NearestNeighborNetworkLayer_Gemm_Prelu
/// Size: 0x0000 (0x000040 - 0x000040)
class UNearestNeighborNetworkLayer_Gemm_Prelu : public UNearestNeighborNetworkLayer
{ 
public:
};

/// Class /Script/NearestNeighborModel.NearestNeighborNetworkLayer_Gemm
/// Size: 0x0000 (0x000040 - 0x000040)
class UNearestNeighborNetworkLayer_Gemm : public UNearestNeighborNetworkLayer
{ 
public:
};

/// Class /Script/NearestNeighborModel.NearestNeighborOptimizedNetwork
/// Size: 0x0030 (0x000028 - 0x000058)
class UNearestNeighborOptimizedNetwork : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	class UNNEModelData*                               ModelData;                                                  // 0x0028   (0x0008)  
	unsigned char                                      UnknownData01_5[0x10];                                      // 0x0030   (0x0010)  MISSED
	int32_t                                            NumInputs;                                                  // 0x0040   (0x0004)  
	int32_t                                            NumOutputs;                                                 // 0x0044   (0x0004)  
	TArray<class UNearestNeighborNetworkLayer*>        Layers;                                                     // 0x0048   (0x0010)  


	/// Functions
	// Function /Script/NearestNeighborModel.NearestNeighborOptimizedNetwork.Empty
	// void Empty();                                                                                                         // [0x15d82c4] Native|Public|BlueprintCallable 
};

/// Class /Script/NearestNeighborModel.NearestNeighborOptimizedNetworkInstance
/// Size: 0x0038 (0x000028 - 0x000060)
class UNearestNeighborOptimizedNetworkInstance : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x58];                                      // 0x0000   (0x0058)  MISSED
	class UNearestNeighborOptimizedNetwork*            Network;                                                    // 0x0058   (0x0008)  
};

/// Class /Script/NearestNeighborModel.NearestNeighborOptimizedNetworkLoader
/// Size: 0x0008 (0x000028 - 0x000030)
class UNearestNeighborOptimizedNetworkLoader : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x0000   (0x0030)  MISSED


	/// Functions
	// Function /Script/NearestNeighborModel.NearestNeighborOptimizedNetworkLoader.LoadOptimizedNetwork
	// bool LoadOptimizedNetwork(FString OnnxPath);                                                                          // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/NearestNeighborModel.NearestNeighborOptimizedNetworkLoader.GetOptimizedNetwork
	// class UNearestNeighborOptimizedNetwork* GetOptimizedNetwork();                                                        // [0x78ca134] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/NearestNeighborModel.NearestNeighborModelSection
/// Size: 0x0028 (0x000028 - 0x000050)
class UNearestNeighborModelSection : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	int32_t                                            NumPCACoeffs;                                               // 0x0028   (0x0004)  
	int32_t                                            NumVertices;                                                // 0x002C   (0x0004)  
	int32_t                                            RuntimeNumNeighbors;                                        // 0x0030   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0034   (0x0004)  MISSED
	TArray<float>                                      RuntimeNeighborCoeffs;                                      // 0x0038   (0x0010)  
	bool                                               bIsReadyForTraining;                                        // 0x0048   (0x0001)  
	bool                                               bIsReadyForInference;                                       // 0x0049   (0x0001)  
	unsigned char                                      UnknownData02_6[0x6];                                       // 0x004A   (0x0006)  MISSED
};

/// Class /Script/NearestNeighborModel.NearestNeighborModel
/// Size: 0x0090 (0x0001A8 - 0x000238)
class UNearestNeighborModel : public UMLDeformerMorphModel
{ 
public:
	int32_t                                            InputDim;                                                   // 0x01A8   (0x0004)  
	int32_t                                            OutputDim;                                                  // 0x01AC   (0x0004)  
	bool                                               bUseInputMultipliers;                                       // 0x01B0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x01B1   (0x0007)  MISSED
	TArray<FVector3f>                                  InputMultipliers;                                           // 0x01B8   (0x0010)  
	TArray<float>                                      InputsMin;                                                  // 0x01C8   (0x0010)  
	TArray<float>                                      InputsMax;                                                  // 0x01D8   (0x0010)  
	bool                                               bUseDualQuaternionDeltas;                                   // 0x01E8   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x01E9   (0x0003)  MISSED
	float                                              DecayFactor;                                                // 0x01EC   (0x0004)  
	float                                              NearestNeighborOffsetWeight;                                // 0x01F0   (0x0004)  
	bool                                               bUseRBF;                                                    // 0x01F4   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x01F5   (0x0003)  MISSED
	float                                              RBFSigma;                                                   // 0x01F8   (0x0004)  
	unsigned char                                      UnknownData03_5[0x4];                                       // 0x01FC   (0x0004)  MISSED
	TArray<class UNearestNeighborModelSection*>        Sections;                                                   // 0x0200   (0x0010)  
	TArray<int32_t>                                    PCACoeffStarts;                                             // 0x0210   (0x0010)  
	bool                                               bIsReadyForTraining;                                        // 0x0220   (0x0001)  
	bool                                               bIsReadyForInference;                                       // 0x0221   (0x0001)  
	unsigned char                                      UnknownData04_5[0x6];                                       // 0x0222   (0x0006)  MISSED
	class UNearestNeighborOptimizedNetwork*            OptimizedNetwork;                                           // 0x0228   (0x0008)  
	unsigned char                                      UnknownData05_6[0x8];                                       // 0x0230   (0x0008)  MISSED


	/// Functions
	// Function /Script/NearestNeighborModel.NearestNeighborModel.IsReadyForTraining
	// bool IsReadyForTraining();                                                                                            // [0xaa37d54] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/NearestNeighborModel.NearestNeighborModel.IsReadyForInference
	// bool IsReadyForInference();                                                                                           // [0xaa37d3c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/NearestNeighborModel.NearestNeighborModel.GetTotalNumPCACoeffs
	// int32_t GetTotalNumPCACoeffs();                                                                                       // [0xaa37d18] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/NearestNeighborModel.NearestNeighborModel.GetSectionPtr
	// class UNearestNeighborModelSection* GetSectionPtr(int32_t Index);                                                     // [0xaa37c88] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/NearestNeighborModel.NearestNeighborModel.GetPCACoeffStarts
	// TArray<int32_t> GetPCACoeffStarts();                                                                                  // [0xaa37c6c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/NearestNeighborModel.NearestNeighborModel.GetNumSections
	// int32_t GetNumSections();                                                                                             // [0x66deec4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/NearestNeighborModel.NearestNeighborModelInputInfo
/// Size: 0x0010 (0x000068 - 0x000078)
class UNearestNeighborModelInputInfo : public UMLDeformerMorphModelInputInfo
{ 
public:
	TArray<FQuat>                                      RefBoneRotations;                                           // 0x0068   (0x0010)  
};

/// Class /Script/NearestNeighborModel.NearestNeighborModelInstance
/// Size: 0x0028 (0x000090 - 0x0000B8)
class UNearestNeighborModelInstance : public UMLDeformerMorphModelInstance
{ 
public:
	unsigned char                                      UnknownData00_3[0x20];                                      // 0x0090   (0x0020)  MISSED
	class UNearestNeighborOptimizedNetworkInstance*    OptimizedNetworkInstance;                                   // 0x00B0   (0x0008)  


	/// Functions
	// Function /Script/NearestNeighborModel.NearestNeighborModelInstance.Eval
	// TArray<float> Eval(TArray<float>& InputData);                                                                         // [0xaa37b68] Final|Native|Private|HasOutParms|BlueprintCallable 
};

/// Class /Script/NearestNeighborModel.OptimusSkeletonWithQuatsDataInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UOptimusSkeletonWithQuatsDataInterface : public UOptimusComputeDataInterface
{ 
public:
};

/// Class /Script/NearestNeighborModel.OptimusSkeletonWithQuatsDataProvider
/// Size: 0x0008 (0x000028 - 0x000030)
class UOptimusSkeletonWithQuatsDataProvider : public UComputeDataProvider
{ 
public:
	class USkinnedMeshComponent*                       SkinnedMesh;                                                // 0x0028   (0x0008)  
};

/// Struct /Script/NearestNeighborModel.ClothPartData
/// Size: 0x0080 (0x000000 - 0x000080)
struct FClothPartData
{ 
	int32_t                                            PCACoeffNum;                                                // 0x0000   (0x0004)  
	uint32_t                                           PCACoeffStart;                                              // 0x0004   (0x0004)  
	uint32_t                                           NumVertices;                                                // 0x0008   (0x0004)  
	uint32_t                                           NumNeighbors;                                               // 0x000C   (0x0004)  
	TArray<uint32_t>                                   VertexMap;                                                  // 0x0010   (0x0010)  
	TArray<float>                                      PCABasis;                                                   // 0x0020   (0x0010)  
	TArray<float>                                      VertexMean;                                                 // 0x0030   (0x0010)  
	TArray<float>                                      AssetNeighborCoeffs;                                        // 0x0040   (0x0010)  
	TArray<float>                                      AssetNeighborOffsets;                                       // 0x0050   (0x0010)  
	TArray<int32_t>                                    AssetNeighborIndexMap;                                      // 0x0060   (0x0010)  
	TArray<float>                                      NeighborCoeffs;                                             // 0x0070   (0x0010)  
};

