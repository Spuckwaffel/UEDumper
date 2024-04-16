
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject

/// Class /Script/NNE.NNEModelData
/// Size: 0x00E0 (0x000028 - 0x000108)
class UNNEModelData : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:
};

/// Class /Script/NNE.NNERuntime
/// Size: 0x0000 (0x000028 - 0x000028)
class UNNERuntime : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/NNE.NNERuntimeCPU
/// Size: 0x0000 (0x000028 - 0x000028)
class UNNERuntimeCPU : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/NNE.NNERuntimeGPU
/// Size: 0x0000 (0x000028 - 0x000028)
class UNNERuntimeGPU : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/NNE.NNERuntimeRDG
/// Size: 0x0000 (0x000028 - 0x000028)
class UNNERuntimeRDG : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Struct /Script/NNE.NNEAttributeValue
/// Size: 0x0018 (0x000000 - 0x000018)
class FNNEAttributeValue : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(ENNEAttributeDataType)                     Type                                                        OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(TArray<char>)                              Value                                                       OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/NNE.NNEFormatAttributeDesc
/// Size: 0x0028 (0x000000 - 0x000028)
class FNNEFormatAttributeDesc : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FString)                                   Name                                                        OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FNNEAttributeValue)                        Value                                                       OFFSET(getStruct<T>, {0x10, 24, 0, 0})
};

/// Struct /Script/NNE.NNEFormatOperatorDesc
/// Size: 0x0058 (0x000000 - 0x000058)
class FNNEFormatOperatorDesc : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FString)                                   TypeName                                                    OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   DomainName                                                  OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	CMember(TArray<uint32_t>)                          InTensors                                                   OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(TArray<uint32_t>)                          OutTensors                                                  OFFSET(get<T>, {0x38, 16, 0, 0})
	CMember(TArray<FNNEFormatAttributeDesc>)           Attributes                                                  OFFSET(get<T>, {0x48, 16, 0, 0})
};

/// Struct /Script/NNE.NNEFormatTensorDesc
/// Size: 0x0038 (0x000000 - 0x000038)
class FNNEFormatTensorDesc : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FString)                                   Name                                                        OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	CMember(TArray<int32_t>)                           Shape                                                       OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(ENNEFormatTensorType)                      Type                                                        OFFSET(get<T>, {0x20, 1, 0, 0})
	CMember(ENNETensorDataType)                        DataType                                                    OFFSET(get<T>, {0x21, 1, 0, 0})
	DMember(uint64_t)                                  DataSize                                                    OFFSET(get<uint64_t>, {0x28, 8, 0, 0})
	DMember(uint64_t)                                  DataOffset                                                  OFFSET(get<uint64_t>, {0x30, 8, 0, 0})
};

/// Struct /Script/NNE.NNERuntimeFormat
/// Size: 0x0038 (0x000000 - 0x000038)
class FNNERuntimeFormat : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<FNNEFormatTensorDesc>)              Tensors                                                     OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FNNEFormatOperatorDesc>)            Operators                                                   OFFSET(get<T>, {0x10, 16, 0, 0})
};

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

