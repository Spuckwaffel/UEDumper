
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: NiagaraCore

/// Enum /Script/NiagaraShader.ENiagaraMipMapGenerationType
/// Size: 0x07
enum class ENiagaraMipMapGenerationType : uint8_t
{
	ENiagaraMipMapGenerationType__Unfiltered                                         = 0,
	ENiagaraMipMapGenerationType__Linear                                             = 1,
	ENiagaraMipMapGenerationType__Blur1                                              = 2,
	ENiagaraMipMapGenerationType__Blur2                                              = 3,
	ENiagaraMipMapGenerationType__Blur3                                              = 4,
	ENiagaraMipMapGenerationType__Blur4                                              = 5,
	ENiagaraMipMapGenerationType__ENiagaraMipMapGenerationType_MAX                   = 6
};

/// Enum /Script/NiagaraShader.ENiagaraGpuDispatchType
/// Size: 0x05
enum class ENiagaraGpuDispatchType : uint8_t
{
	ENiagaraGpuDispatchType__OneD                                                    = 0,
	ENiagaraGpuDispatchType__TwoD                                                    = 1,
	ENiagaraGpuDispatchType__ThreeD                                                  = 2,
	ENiagaraGpuDispatchType__Custom                                                  = 3,
	ENiagaraGpuDispatchType__ENiagaraGpuDispatchType_MAX                             = 4
};

/// Enum /Script/NiagaraShader.ENiagaraDirectDispatchElementType
/// Size: 0x04
enum class ENiagaraDirectDispatchElementType : uint8_t
{
	ENiagaraDirectDispatchElementType__NumThreads                                    = 0,
	ENiagaraDirectDispatchElementType__NumThreadsNoClipping                          = 1,
	ENiagaraDirectDispatchElementType__NumGroups                                     = 2,
	ENiagaraDirectDispatchElementType__ENiagaraDirectDispatchElementType_MAX         = 3
};

/// Enum /Script/NiagaraShader.ENiagaraSimStageExecuteBehavior
/// Size: 0x04
enum class ENiagaraSimStageExecuteBehavior : uint8_t
{
	ENiagaraSimStageExecuteBehavior__Always                                          = 0,
	ENiagaraSimStageExecuteBehavior__OnSimulationReset                               = 1,
	ENiagaraSimStageExecuteBehavior__NotOnSimulationReset                            = 2,
	ENiagaraSimStageExecuteBehavior__ENiagaraSimStageExecuteBehavior_MAX             = 3
};

/// Enum /Script/NiagaraShader.FNiagaraCompileEventSeverity
/// Size: 0x05
enum class FNiagaraCompileEventSeverity : uint8_t
{
	FNiagaraCompileEventSeverity__Log                                                = 0,
	FNiagaraCompileEventSeverity__Display                                            = 1,
	FNiagaraCompileEventSeverity__Warning                                            = 2,
	FNiagaraCompileEventSeverity__Error                                              = 3,
	FNiagaraCompileEventSeverity__FNiagaraCompileEventSeverity_MAX                   = 4
};

/// Enum /Script/NiagaraShader.FNiagaraCompileEventSource
/// Size: 0x03
enum class FNiagaraCompileEventSource : uint8_t
{
	FNiagaraCompileEventSource__Unset                                                = 0,
	FNiagaraCompileEventSource__ScriptDependency                                     = 1,
	FNiagaraCompileEventSource__FNiagaraCompileEventSource_MAX                       = 2
};

/// Class /Script/NiagaraShader.NiagaraScriptBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UNiagaraScriptBase : public UObject
{ 
public:
};

/// Struct /Script/NiagaraShader.SimulationStageMetaData
/// Size: 0x0080 (0x000000 - 0x000080)
struct FSimulationStageMetaData
{ 
	FName                                              SimulationStageName;                                        // 0x0000   (0x0004)  
	FName                                              EnabledBinding;                                             // 0x0004   (0x0004)  
	FIntVector                                         ElementCount;                                               // 0x0008   (0x000C)  
	FName                                              ElementCountXBinding;                                       // 0x0014   (0x0004)  
	FName                                              ElementCountYBinding;                                       // 0x0018   (0x0004)  
	FName                                              ElementCountZBinding;                                       // 0x001C   (0x0004)  
	ENiagaraIterationSource                            IterationSourceType;                                        // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0021   (0x0003)  MISSED
	FName                                              IterationDataInterface;                                     // 0x0024   (0x0004)  
	FName                                              IterationDirectBinding;                                     // 0x0028   (0x0004)  
	ENiagaraSimStageExecuteBehavior                    ExecuteBehavior;                                            // 0x002C   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x002D   (0x0003)  MISSED
	bool                                               bWritesParticles : 1;                                       // 0x0030:0 (0x0001)  
	bool                                               bPartialParticleUpdate : 1;                                 // 0x0030:1 (0x0001)  
	bool                                               bParticleIterationStateEnabled : 1;                         // 0x0030:2 (0x0001)  
	bool                                               bGpuIndirectDispatch : 1;                                   // 0x0030:3 (0x0001)  
	unsigned char                                      UnknownData02_4[0x3];                                       // 0x0031   (0x0003)  MISSED
	FName                                              ParticleIterationStateBinding;                              // 0x0034   (0x0004)  
	unsigned char                                      UnknownData03_5[0x4];                                       // 0x0038   (0x0004)  MISSED
	FIntPoint                                          ParticleIterationStateRange;                                // 0x003C   (0x0008)  
	unsigned char                                      UnknownData04_5[0x4];                                       // 0x0044   (0x0004)  MISSED
	TArray<FName>                                      OutputDestinations;                                         // 0x0048   (0x0010)  
	TArray<FName>                                      InputDataInterfaces;                                        // 0x0058   (0x0010)  
	int32_t                                            NumIterations;                                              // 0x0068   (0x0004)  
	FName                                              NumIterationsBinding;                                       // 0x006C   (0x0004)  
	ENiagaraGpuDispatchType                            GpuDispatchType;                                            // 0x0070   (0x0001)  
	ENiagaraDirectDispatchElementType                  GpuDirectDispatchElementType;                               // 0x0071   (0x0001)  
	unsigned char                                      UnknownData05_5[0x2];                                       // 0x0072   (0x0002)  MISSED
	FIntVector                                         GpuDispatchNumThreads;                                      // 0x0074   (0x000C)  
};

/// Struct /Script/NiagaraShader.NiagaraCompileEvent
/// Size: 0x0060 (0x000000 - 0x000060)
struct FNiagaraCompileEvent
{ 
	FNiagaraCompileEventSeverity                       Severity;                                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	SDK_UNDEFINED(16,2049) /* FString */               __um(Message);                                              // 0x0008   (0x0010)  
	SDK_UNDEFINED(16,2050) /* FString */               __um(ShortDescription);                                     // 0x0018   (0x0010)  
	FGuid                                              NodeGUID;                                                   // 0x0028   (0x0010)  
	FGuid                                              PinGuid;                                                    // 0x0038   (0x0010)  
	TArray<FGuid>                                      StackGuids;                                                 // 0x0048   (0x0010)  
	FNiagaraCompileEventSource                         Source;                                                     // 0x0058   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0059   (0x0007)  MISSED
};

/// Struct /Script/NiagaraShader.NiagaraDataInterfaceGeneratedFunction
/// Size: 0x0050 (0x000000 - 0x000050)
struct FNiagaraDataInterfaceGeneratedFunction
{ 
	TArray<FNiagaraVariableCommonReference>            VariadicInputs;                                             // 0x0030   (0x0010)  
	TArray<FNiagaraVariableCommonReference>            VariadicOutputs;                                            // 0x0040   (0x0010)  
};

/// Struct /Script/NiagaraShader.NiagaraDataInterfaceGPUParamInfo
/// Size: 0x0038 (0x000000 - 0x000038)
struct FNiagaraDataInterfaceGPUParamInfo
{ 
	SDK_UNDEFINED(16,2051) /* FString */               __um(DataInterfaceHLSLSymbol);                              // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,2052) /* FString */               __um(DIClassName);                                          // 0x0010   (0x0010)  
	uint32_t                                           ShaderParametersOffset;                                     // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0024   (0x0004)  MISSED
	TArray<FNiagaraDataInterfaceGeneratedFunction>     GeneratedFunctions;                                         // 0x0028   (0x0010)  
};

/// Struct /Script/NiagaraShader.NiagaraShaderScriptExternalConstant
/// Size: 0x0018 (0x000000 - 0x000018)
struct FNiagaraShaderScriptExternalConstant
{ 
	FName                                              Type;                                                       // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	SDK_UNDEFINED(16,2053) /* FString */               __um(Name);                                                 // 0x0008   (0x0010)  
};

/// Struct /Script/NiagaraShader.NiagaraShaderScriptParametersMetadata
/// Size: 0x0058 (0x000000 - 0x000058)
struct FNiagaraShaderScriptParametersMetadata
{ 
	TArray<FNiagaraDataInterfaceGPUParamInfo>          DataInterfaceParamInfo;                                     // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,2054) /* TArray<FString> */       __um(LooseMetadataNames);                                   // 0x0010   (0x0010)  
	bool                                               bExternalConstantsInterpolated;                             // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0021   (0x0007)  MISSED
	TArray<FNiagaraShaderScriptExternalConstant>       ExternalConstants;                                          // 0x0028   (0x0010)  
	unsigned char                                      UnknownData01_6[0x20];                                      // 0x0038   (0x0020)  MISSED
};

