
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

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
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Script/NearestNeighborModel.NearestNeighborNetworkLayer
/// Size: 0x0018 (0x000028 - 0x000040)
class UNearestNeighborNetworkLayer : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(int32_t)                                   NumInputs                                                   OFFSET(get<int32_t>, {0x28, 4, 0, 0})
	DMember(int32_t)                                   NumOutputs                                                  OFFSET(get<int32_t>, {0x2C, 4, 0, 0})
	CMember(TArray<FNearestNeighborNetworkParameter>)  Parameters                                                  OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Class /Script/NearestNeighborModel.NearestNeighborNetworkLayer_Gemm_Prelu
/// Size: 0x0000 (0x000040 - 0x000040)
class UNearestNeighborNetworkLayer_Gemm_Prelu : public UNearestNeighborNetworkLayer
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Script/NearestNeighborModel.NearestNeighborNetworkLayer_Gemm
/// Size: 0x0000 (0x000040 - 0x000040)
class UNearestNeighborNetworkLayer_Gemm : public UNearestNeighborNetworkLayer
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Script/NearestNeighborModel.NearestNeighborOptimizedNetwork
/// Size: 0x0030 (0x000028 - 0x000058)
class UNearestNeighborOptimizedNetwork : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(class UNNEModelData*)                      ModelData                                                   OFFSET(get<T>, {0x28, 8, 0, 0})
	DMember(int32_t)                                   NumInputs                                                   OFFSET(get<int32_t>, {0x40, 4, 0, 0})
	DMember(int32_t)                                   NumOutputs                                                  OFFSET(get<int32_t>, {0x44, 4, 0, 0})
	CMember(TArray<class UNearestNeighborNetworkLayer*>) Layers                                                    OFFSET(get<T>, {0x48, 16, 0, 0})


	/// Functions
	// Function /Script/NearestNeighborModel.NearestNeighborOptimizedNetwork.Empty
	// void Empty();                                                                                                            // [0x1837ea4] Native|Public|BlueprintCallable 
};

/// Class /Script/NearestNeighborModel.NearestNeighborOptimizedNetworkInstance
/// Size: 0x0038 (0x000028 - 0x000060)
class UNearestNeighborOptimizedNetworkInstance : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(class UNearestNeighborOptimizedNetwork*)   Network                                                     OFFSET(get<T>, {0x58, 8, 0, 0})
};

/// Class /Script/NearestNeighborModel.NearestNeighborOptimizedNetworkLoader
/// Size: 0x0008 (0x000028 - 0x000030)
class UNearestNeighborOptimizedNetworkLoader : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:


	/// Functions
	// Function /Script/NearestNeighborModel.NearestNeighborOptimizedNetworkLoader.LoadOptimizedNetwork
	// bool LoadOptimizedNetwork(FString OnnxPath);                                                                             // [0x228deb8] Event|Public|BlueprintEvent 
	// Function /Script/NearestNeighborModel.NearestNeighborOptimizedNetworkLoader.GetOptimizedNetwork
	// class UNearestNeighborOptimizedNetwork* GetOptimizedNetwork();                                                           // [0x8184c00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/NearestNeighborModel.NearestNeighborModelSection
/// Size: 0x0028 (0x000028 - 0x000050)
class UNearestNeighborModelSection : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	DMember(int32_t)                                   NumPCACoeffs                                                OFFSET(get<int32_t>, {0x28, 4, 0, 0})
	DMember(int32_t)                                   NumVertices                                                 OFFSET(get<int32_t>, {0x2C, 4, 0, 0})
	DMember(int32_t)                                   RuntimeNumNeighbors                                         OFFSET(get<int32_t>, {0x30, 4, 0, 0})
	CMember(TArray<float>)                             RuntimeNeighborCoeffs                                       OFFSET(get<T>, {0x38, 16, 0, 0})
	DMember(bool)                                      bIsReadyForTraining                                         OFFSET(get<bool>, {0x48, 1, 0, 0})
	DMember(bool)                                      bIsReadyForInference                                        OFFSET(get<bool>, {0x49, 1, 0, 0})


	/// Functions
	// Function /Script/NearestNeighborModel.NearestNeighborModelSection.GetNumBasis
	// int32_t GetNumBasis();                                                                                                   // [0x6fee498] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/NearestNeighborModel.NearestNeighborModel
/// Size: 0x0098 (0x0001A8 - 0x000240)
class UNearestNeighborModel : public UMLDeformerMorphModel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 576;

public:
	DMember(int32_t)                                   InputDim                                                    OFFSET(get<int32_t>, {0x1A8, 4, 0, 0})
	DMember(int32_t)                                   OutputDim                                                   OFFSET(get<int32_t>, {0x1AC, 4, 0, 0})
	DMember(bool)                                      bUseInputMultipliers                                        OFFSET(get<bool>, {0x1B0, 1, 0, 0})
	CMember(TArray<FVector3f>)                         InputMultipliers                                            OFFSET(get<T>, {0x1B8, 16, 0, 0})
	CMember(TArray<float>)                             InputsMin                                                   OFFSET(get<T>, {0x1C8, 16, 0, 0})
	CMember(TArray<float>)                             InputsMax                                                   OFFSET(get<T>, {0x1D8, 16, 0, 0})
	DMember(bool)                                      bUsePCA                                                     OFFSET(get<bool>, {0x1E8, 1, 0, 0})
	DMember(int32_t)                                   NumBasisPerSection                                          OFFSET(get<int32_t>, {0x1EC, 4, 0, 0})
	DMember(bool)                                      bUseDualQuaternionDeltas                                    OFFSET(get<bool>, {0x1F0, 1, 0, 0})
	DMember(float)                                     DecayFactor                                                 OFFSET(get<float>, {0x1F4, 4, 0, 0})
	DMember(float)                                     NearestNeighborOffsetWeight                                 OFFSET(get<float>, {0x1F8, 4, 0, 0})
	DMember(bool)                                      bUseRBF                                                     OFFSET(get<bool>, {0x1FC, 1, 0, 0})
	DMember(float)                                     RBFSigma                                                    OFFSET(get<float>, {0x200, 4, 0, 0})
	CMember(TArray<class UNearestNeighborModelSection*>) Sections                                                  OFFSET(get<T>, {0x208, 16, 0, 0})
	CMember(TArray<int32_t>)                           PCACoeffStarts                                              OFFSET(get<T>, {0x218, 16, 0, 0})
	DMember(bool)                                      bIsReadyForTraining                                         OFFSET(get<bool>, {0x228, 1, 0, 0})
	DMember(bool)                                      bIsReadyForInference                                        OFFSET(get<bool>, {0x229, 1, 0, 0})
	CMember(class UNearestNeighborOptimizedNetwork*)   OptimizedNetwork                                            OFFSET(get<T>, {0x230, 8, 0, 0})


	/// Functions
	// Function /Script/NearestNeighborModel.NearestNeighborModel.IsReadyForTraining
	// bool IsReadyForTraining();                                                                                               // [0xbebd230] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/NearestNeighborModel.NearestNeighborModel.IsReadyForInference
	// bool IsReadyForInference();                                                                                              // [0xbebd218] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/NearestNeighborModel.NearestNeighborModel.GetTotalNumBasis
	// int32_t GetTotalNumBasis();                                                                                              // [0xbebd1f4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/NearestNeighborModel.NearestNeighborModel.GetSectionPtr
	// class UNearestNeighborModelSection* GetSectionPtr(int32_t Index);                                                        // [0xbebd164] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/NearestNeighborModel.NearestNeighborModel.GetPCACoeffStarts
	// TArray<int32_t> GetPCACoeffStarts();                                                                                     // [0xbebd148] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/NearestNeighborModel.NearestNeighborModel.GetNumSections
	// int32_t GetNumSections();                                                                                                // [0xb73a528] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/NearestNeighborModel.NearestNeighborModel.DoesUsePCA
	// bool DoesUsePCA();                                                                                                       // [0xbebd02c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/NearestNeighborModel.NearestNeighborModelInputInfo
/// Size: 0x0010 (0x000068 - 0x000078)
class UNearestNeighborModelInputInfo : public UMLDeformerMorphModelInputInfo
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	CMember(TArray<FQuat>)                             RefBoneRotations                                            OFFSET(get<T>, {0x68, 16, 0, 0})
};

/// Class /Script/NearestNeighborModel.NearestNeighborModelInstance
/// Size: 0x0030 (0x000090 - 0x0000C0)
class UNearestNeighborModelInstance : public UMLDeformerMorphModelInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	CMember(class UNearestNeighborOptimizedNetworkInstance*) OptimizedNetworkInstance                              OFFSET(get<T>, {0xB8, 8, 0, 0})


	/// Functions
	// Function /Script/NearestNeighborModel.NearestNeighborModelInstance.Reset
	// void Reset();                                                                                                            // [0xbebd248] Final|Native|Public|BlueprintCallable 
	// Function /Script/NearestNeighborModel.NearestNeighborModelInstance.Eval
	// TArray<float> Eval(TArray<float>& InputData);                                                                            // [0xbebd044] Final|Native|Private|HasOutParms|BlueprintCallable 
};

/// Class /Script/NearestNeighborModel.OptimusSkeletonWithQuatsDataInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UOptimusSkeletonWithQuatsDataInterface : public UOptimusComputeDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/NearestNeighborModel.OptimusSkeletonWithQuatsDataProvider
/// Size: 0x0008 (0x000028 - 0x000030)
class UOptimusSkeletonWithQuatsDataProvider : public UComputeDataProvider
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(class USkinnedMeshComponent*)              SkinnedMesh                                                 OFFSET(get<T>, {0x28, 8, 0, 0})
};

/// Struct /Script/NearestNeighborModel.NearestNeighborNetworkParameter
/// Size: 0x0020 (0x000000 - 0x000020)
class FNearestNeighborNetworkParameter : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(TArray<float>)                             Values                                                      OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<int32_t>)                           Shape                                                       OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/NearestNeighborModel.ClothPartData
/// Size: 0x0080 (0x000000 - 0x000080)
class FClothPartData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	DMember(int32_t)                                   PCACoeffNum                                                 OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(uint32_t)                                  PCACoeffStart                                               OFFSET(get<uint32_t>, {0x4, 4, 0, 0})
	DMember(uint32_t)                                  NumVertices                                                 OFFSET(get<uint32_t>, {0x8, 4, 0, 0})
	DMember(uint32_t)                                  NumNeighbors                                                OFFSET(get<uint32_t>, {0xC, 4, 0, 0})
	CMember(TArray<uint32_t>)                          VertexMap                                                   OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<float>)                             PCABasis                                                    OFFSET(get<T>, {0x20, 16, 0, 0})
	CMember(TArray<float>)                             VertexMean                                                  OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TArray<float>)                             AssetNeighborCoeffs                                         OFFSET(get<T>, {0x40, 16, 0, 0})
	CMember(TArray<float>)                             AssetNeighborOffsets                                        OFFSET(get<T>, {0x50, 16, 0, 0})
	CMember(TArray<int32_t>)                           AssetNeighborIndexMap                                       OFFSET(get<T>, {0x60, 16, 0, 0})
	CMember(TArray<float>)                             NeighborCoeffs                                              OFFSET(get<T>, {0x70, 16, 0, 0})
};

