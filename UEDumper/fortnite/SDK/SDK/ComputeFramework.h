
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Enum /Script/ComputeFramework.EComputeKernelFlags
/// Size: 0x03
enum class EComputeKernelFlags : uint8_t
{
	EComputeKernelFlags__IsDefaultKernel                                             = 1,
	EComputeKernelFlags__IsolatedMemoryWrites                                        = 2,
	EComputeKernelFlags__EComputeKernelFlags_MAX                                     = 3
};

/// Enum /Script/ComputeFramework.EShaderFundamentalType
/// Size: 0x07
enum class EShaderFundamentalType : uint8_t
{
	EShaderFundamentalType__Bool                                                     = 0,
	EShaderFundamentalType__Int                                                      = 1,
	EShaderFundamentalType__Uint                                                     = 2,
	EShaderFundamentalType__Float                                                    = 3,
	EShaderFundamentalType__Struct                                                   = 4,
	EShaderFundamentalType__None                                                     = 255,
	EShaderFundamentalType__EShaderFundamentalType_MAX                               = 256
};

/// Enum /Script/ComputeFramework.EShaderFundamentalDimensionType
/// Size: 0x04
enum class EShaderFundamentalDimensionType : uint8_t
{
	EShaderFundamentalDimensionType__Scalar                                          = 0,
	EShaderFundamentalDimensionType__Vector                                          = 1,
	EShaderFundamentalDimensionType__Matrix                                          = 2,
	EShaderFundamentalDimensionType__EShaderFundamentalDimensionType_MAX             = 3
};

/// Enum /Script/ComputeFramework.EShaderParamBindingType
/// Size: 0x05
enum class EShaderParamBindingType : uint8_t
{
	EShaderParamBindingType__None                                                    = 0,
	EShaderParamBindingType__ConstantParameter                                       = 1,
	EShaderParamBindingType__ReadOnlyResource                                        = 2,
	EShaderParamBindingType__ReadWriteResource                                       = 3,
	EShaderParamBindingType__EShaderParamBindingType_MAX                             = 4
};

/// Enum /Script/ComputeFramework.EShaderResourceType
/// Size: 0x09
enum class EShaderResourceType : uint8_t
{
	EShaderResourceType__None                                                        = 0,
	EShaderResourceType__Texture1D                                                   = 1,
	EShaderResourceType__Texture2D                                                   = 2,
	EShaderResourceType__Texture3D                                                   = 3,
	EShaderResourceType__TextureCube                                                 = 4,
	EShaderResourceType__Buffer                                                      = 5,
	EShaderResourceType__StructuredBuffer                                            = 6,
	EShaderResourceType__ByteAddressBuffer                                           = 7,
	EShaderResourceType__EShaderResourceType_MAX                                     = 8
};

/// Class /Script/ComputeFramework.ComputeDataInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UComputeDataInterface : public UObject
{ 
public:
};

/// Class /Script/ComputeFramework.ComputeDataProvider
/// Size: 0x0000 (0x000028 - 0x000028)
class UComputeDataProvider : public UObject
{ 
public:
};

/// Struct /Script/ComputeFramework.ComputeKernelPermutationBool
/// Size: 0x0018 (0x000000 - 0x000018)
struct FComputeKernelPermutationBool
{ 
	SDK_UNDEFINED(16,12471) /* FString */              __um(Name);                                                 // 0x0000   (0x0010)  
	bool                                               Value;                                                      // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/ComputeFramework.ComputeKernelPermutationSet
/// Size: 0x0010 (0x000000 - 0x000010)
struct FComputeKernelPermutationSet
{ 
	TArray<FComputeKernelPermutationBool>              BooleanOptions;                                             // 0x0000   (0x0010)  
};

/// Struct /Script/ComputeFramework.ComputeKernelDefinition
/// Size: 0x0020 (0x000000 - 0x000020)
struct FComputeKernelDefinition
{ 
	SDK_UNDEFINED(16,12472) /* FString */              __um(Symbol);                                               // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,12473) /* FString */              __um(Define);                                               // 0x0010   (0x0010)  
};

/// Struct /Script/ComputeFramework.ComputeKernelDefinitionSet
/// Size: 0x0010 (0x000000 - 0x000010)
struct FComputeKernelDefinitionSet
{ 
	TArray<FComputeKernelDefinition>                   Defines;                                                    // 0x0000   (0x0010)  
};

/// Struct /Script/ComputeFramework.ShaderValueTypeHandle
/// Size: 0x0008 (0x000000 - 0x000008)
struct FShaderValueTypeHandle
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/ComputeFramework.ShaderParamTypeDefinition
/// Size: 0x0030 (0x000000 - 0x000030)
struct FShaderParamTypeDefinition
{ 
	SDK_UNDEFINED(16,12474) /* FString */              __um(TypeDeclaration);                                      // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,12475) /* FString */              __um(Name);                                                 // 0x0010   (0x0010)  
	FShaderValueTypeHandle                             ValueType;                                                  // 0x0020   (0x0008)  
	uint16_t                                           ArrayElementCount;                                          // 0x0028   (0x0002)  
	EShaderParamBindingType                            BindingType;                                                // 0x002A   (0x0001)  
	EShaderResourceType                                ResourceType;                                               // 0x002B   (0x0001)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Struct /Script/ComputeFramework.ShaderFunctionDefinition
/// Size: 0x0028 (0x000000 - 0x000028)
struct FShaderFunctionDefinition
{ 
	SDK_UNDEFINED(16,12476) /* FString */              __um(Name);                                                 // 0x0000   (0x0010)  
	TArray<FShaderParamTypeDefinition>                 ParamTypes;                                                 // 0x0010   (0x0010)  
	bool                                               bHasReturnType;                                             // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0021   (0x0007)  MISSED
};

/// Class /Script/ComputeFramework.ComputeKernelSource
/// Size: 0x0070 (0x000028 - 0x000098)
class UComputeKernelSource : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	SDK_UNDEFINED(16,12477) /* FString */              __um(EntryPoint);                                           // 0x0028   (0x0010)  
	FIntVector                                         GroupSize;                                                  // 0x0038   (0x000C)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0044   (0x0004)  MISSED
	FComputeKernelPermutationSet                       PermutationSet;                                             // 0x0048   (0x0010)  
	FComputeKernelDefinitionSet                        DefinitionsSet;                                             // 0x0058   (0x0010)  
	TArray<class UComputeSource*>                      AdditionalSources;                                          // 0x0068   (0x0010)  
	TArray<FShaderFunctionDefinition>                  ExternalInputs;                                             // 0x0078   (0x0010)  
	TArray<FShaderFunctionDefinition>                  ExternalOutputs;                                            // 0x0088   (0x0010)  
};

/// Class /Script/ComputeFramework.ComputeSource
/// Size: 0x0010 (0x000028 - 0x000038)
class UComputeSource : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	TArray<class UComputeSource*>                      AdditionalSources;                                          // 0x0028   (0x0010)  
};

/// Struct /Script/ComputeFramework.ComputeGraphEdge
/// Size: 0x0038 (0x000000 - 0x000038)
struct FComputeGraphEdge
{ 
	int32_t                                            KernelIndex;                                                // 0x0000   (0x0004)  
	int32_t                                            KernelBindingIndex;                                         // 0x0004   (0x0004)  
	int32_t                                            DataInterfaceIndex;                                         // 0x0008   (0x0004)  
	int32_t                                            DataInterfaceBindingIndex;                                  // 0x000C   (0x0004)  
	bool                                               bKernelInput;                                               // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0011   (0x0007)  MISSED
	SDK_UNDEFINED(16,12478) /* FString */              __um(BindingFunctionNameOverride);                          // 0x0018   (0x0010)  
	SDK_UNDEFINED(16,12479) /* FString */              __um(BindingFunctionNamespace);                             // 0x0028   (0x0010)  
};

/// Class /Script/ComputeFramework.ComputeGraph
/// Size: 0x00B8 (0x000028 - 0x0000E0)
class UComputeGraph : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	TArray<class UComputeKernel*>                      KernelInvocations;                                          // 0x0028   (0x0010)  
	TArray<class UComputeDataInterface*>               DataInterfaces;                                             // 0x0038   (0x0010)  
	TArray<FComputeGraphEdge>                          GraphEdges;                                                 // 0x0048   (0x0010)  
	TArray<class UClass*>                              Bindings;                                                   // 0x0058   (0x0010)  
	TArray<int32_t>                                    DataInterfaceToBinding;                                     // 0x0068   (0x0010)  
	unsigned char                                      UnknownData01_6[0x68];                                      // 0x0078   (0x0068)  MISSED
};

/// Struct /Script/ComputeFramework.ComputeGraphInstance
/// Size: 0x0018 (0x000000 - 0x000018)
struct FComputeGraphInstance
{ 
	TArray<class UComputeDataProvider*>                DataProviders;                                              // 0x0000   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0010   (0x0008)  MISSED
};

/// Class /Script/ComputeFramework.ComputeGraphComponent
/// Size: 0x0020 (0x0000A0 - 0x0000C0)
class UComputeGraphComponent : public UActorComponent
{ 
public:
	class UComputeGraph*                               ComputeGraph;                                               // 0x00A0   (0x0008)  
	FComputeGraphInstance                              ComputeGraphInstance;                                       // 0x00A8   (0x0018)  


	/// Functions
	// Function /Script/ComputeFramework.ComputeGraphComponent.QueueExecute
	// void QueueExecute();                                                                                                  // [0xa9a0c94] Final|Native|Public|BlueprintCallable 
	// Function /Script/ComputeFramework.ComputeGraphComponent.DestroyDataProviders
	// void DestroyDataProviders();                                                                                          // [0xa9a0c64] Final|Native|Public|BlueprintCallable 
	// Function /Script/ComputeFramework.ComputeGraphComponent.CreateDataProviders
	// void CreateDataProviders(int32_t InBindingIndex, class UObject* InBindingObject);                                     // [0xa9a0b84] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/ComputeFramework.ComputeKernel
/// Size: 0x0010 (0x000028 - 0x000038)
class UComputeKernel : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	class UComputeKernelSource*                        KernelSource;                                               // 0x0028   (0x0008)  
	int32_t                                            KernelFlags;                                                // 0x0030   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0034   (0x0004)  MISSED
};

/// Class /Script/ComputeFramework.ComputeKernelFromText
/// Size: 0x0010 (0x000098 - 0x0000A8)
class UComputeKernelFromText : public UComputeKernelSource
{ 
public:
	FFilePath                                          SourceFile;                                                 // 0x0098   (0x0010)  
};

/// Class /Script/ComputeFramework.ComputeSourceFromText
/// Size: 0x0010 (0x000038 - 0x000048)
class UComputeSourceFromText : public UComputeSource
{ 
public:
	FFilePath                                          SourceFile;                                                 // 0x0038   (0x0010)  
};

/// Struct /Script/ComputeFramework.ComputeKernelPermutationVector
/// Size: 0x0058 (0x000000 - 0x000058)
struct FComputeKernelPermutationVector
{ 
	SDK_UNDEFINED(80,12480) /* TMap<FString, uint32_t> */ __um(Permutations);                                      // 0x0000   (0x0050)  
	uint32_t                                           BitCount;                                                   // 0x0050   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0054   (0x0004)  MISSED
};

/// Struct /Script/ComputeFramework.ShaderValueType
/// Size: 0x0020 (0x000000 - 0x000020)
struct FShaderValueType
{ 
	EShaderFundamentalType                             Type;                                                       // 0x0000   (0x0001)  
	EShaderFundamentalDimensionType                    DimensionType;                                              // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0002   (0x0002)  MISSED
	FName                                              Name;                                                       // 0x0004   (0x0004)  
	bool                                               bIsDynamicArray;                                            // 0x0008   (0x0001)  
	unsigned char                                      UnknownData01_6[0x17];                                      // 0x0009   (0x0017)  MISSED
};

