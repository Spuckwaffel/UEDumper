
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject

/// Enum /Script/NNE.ENNEAttributeDataType
/// Size: 0x08
enum class ENNEAttributeDataType : uint8_t
{
	ENNEAttributeDataType__None                                                      = 0,
	ENNEAttributeDataType__Float                                                     = 1,
	ENNEAttributeDataType__FloatArray                                                = 2,
	ENNEAttributeDataType__Int32                                                     = 3,
	ENNEAttributeDataType__Int32Array                                                = 4,
	ENNEAttributeDataType__String                                                    = 5,
	ENNEAttributeDataType__StringArray                                               = 6,
	ENNEAttributeDataType__ENNEAttributeDataType_MAX                                 = 7
};

/// Enum /Script/NNE.ENNEFormatTensorType
/// Size: 0x08
enum class ENNEFormatTensorType : uint8_t
{
	ENNEFormatTensorType__None                                                       = 0,
	ENNEFormatTensorType__Input                                                      = 1,
	ENNEFormatTensorType__Output                                                     = 2,
	ENNEFormatTensorType__Intermediate                                               = 3,
	ENNEFormatTensorType__Initializer                                                = 4,
	ENNEFormatTensorType__Empty                                                      = 5,
	ENNEFormatTensorType__NUM                                                        = 6,
	ENNEFormatTensorType__ENNEFormatTensorType_MAX                                   = 7
};

/// Enum /Script/NNE.ENNEInferenceFormat
/// Size: 0x05
enum class ENNEInferenceFormat : uint8_t
{
	ENNEInferenceFormat__Invalid                                                     = 0,
	ENNEInferenceFormat__ONNX                                                        = 1,
	ENNEInferenceFormat__ORT                                                         = 2,
	ENNEInferenceFormat__NNERT                                                       = 3,
	ENNEInferenceFormat__ENNEInferenceFormat_MAX                                     = 4
};

/// Enum /Script/NNE.ENNETensorDataType
/// Size: 0x18
enum class ENNETensorDataType : uint8_t
{
	ENNETensorDataType__None                                                         = 0,
	ENNETensorDataType__Char                                                         = 1,
	ENNETensorDataType__Boolean                                                      = 2,
	ENNETensorDataType__Half                                                         = 3,
	ENNETensorDataType__Float                                                        = 4,
	ENNETensorDataType__Double                                                       = 5,
	ENNETensorDataType__Int8                                                         = 6,
	ENNETensorDataType__Int16                                                        = 7,
	ENNETensorDataType__Int32                                                        = 8,
	ENNETensorDataType__Int64                                                        = 9,
	ENNETensorDataType__UInt8                                                        = 10,
	ENNETensorDataType__UInt16                                                       = 11,
	ENNETensorDataType__UInt32                                                       = 12,
	ENNETensorDataType__UInt64                                                       = 13,
	ENNETensorDataType__Complex64                                                    = 14,
	ENNETensorDataType__Complex128                                                   = 15,
	ENNETensorDataType__BFloat16                                                     = 16,
	ENNETensorDataType__ENNETensorDataType_MAX                                       = 17
};

/// Class /Script/NNE.NNEModelData
/// Size: 0x00E0 (0x000028 - 0x000108)
class UNNEModelData : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x108];                                     // 0x0000   (0x0108)  MISSED
};

/// Class /Script/NNE.NNERuntime
/// Size: 0x0000 (0x000028 - 0x000028)
class UNNERuntime : public UInterface
{ 
public:
};

/// Class /Script/NNE.NNERuntimeCPU
/// Size: 0x0000 (0x000028 - 0x000028)
class UNNERuntimeCPU : public UInterface
{ 
public:
};

/// Class /Script/NNE.NNERuntimeGPU
/// Size: 0x0000 (0x000028 - 0x000028)
class UNNERuntimeGPU : public UInterface
{ 
public:
};

/// Class /Script/NNE.NNERuntimeRDG
/// Size: 0x0000 (0x000028 - 0x000028)
class UNNERuntimeRDG : public UInterface
{ 
public:
};

/// Struct /Script/NNE.NNEAttributeValue
/// Size: 0x0018 (0x000000 - 0x000018)
struct FNNEAttributeValue
{ 
	ENNEAttributeDataType                              Type;                                                       // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	TArray<char>                                       Value;                                                      // 0x0008   (0x0010)  
};

/// Struct /Script/NNE.NNEFormatAttributeDesc
/// Size: 0x0028 (0x000000 - 0x000028)
struct FNNEFormatAttributeDesc
{ 
	SDK_UNDEFINED(16,14850) /* FString */              __um(Name);                                                 // 0x0000   (0x0010)  
	FNNEAttributeValue                                 Value;                                                      // 0x0010   (0x0018)  
};

/// Struct /Script/NNE.NNEFormatOperatorDesc
/// Size: 0x0058 (0x000000 - 0x000058)
struct FNNEFormatOperatorDesc
{ 
	SDK_UNDEFINED(16,14851) /* FString */              __um(TypeName);                                             // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,14852) /* FString */              __um(DomainName);                                           // 0x0010   (0x0010)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0020   (0x0008)  MISSED
	TArray<uint32_t>                                   InTensors;                                                  // 0x0028   (0x0010)  
	TArray<uint32_t>                                   OutTensors;                                                 // 0x0038   (0x0010)  
	TArray<FNNEFormatAttributeDesc>                    Attributes;                                                 // 0x0048   (0x0010)  
};

/// Struct /Script/NNE.NNEFormatTensorDesc
/// Size: 0x0038 (0x000000 - 0x000038)
struct FNNEFormatTensorDesc
{ 
	SDK_UNDEFINED(16,14853) /* FString */              __um(Name);                                                 // 0x0000   (0x0010)  
	TArray<int32_t>                                    Shape;                                                      // 0x0010   (0x0010)  
	ENNEFormatTensorType                               Type;                                                       // 0x0020   (0x0001)  
	ENNETensorDataType                                 DataType;                                                   // 0x0021   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x0022   (0x0006)  MISSED
	uint64_t                                           DataSize;                                                   // 0x0028   (0x0008)  
	uint64_t                                           DataOffset;                                                 // 0x0030   (0x0008)  
};

/// Struct /Script/NNE.NNERuntimeFormat
/// Size: 0x0038 (0x000000 - 0x000038)
struct FNNERuntimeFormat
{ 
	TArray<FNNEFormatTensorDesc>                       Tensors;                                                    // 0x0000   (0x0010)  
	TArray<FNNEFormatOperatorDesc>                     Operators;                                                  // 0x0010   (0x0010)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x0020   (0x0018)  MISSED
};

