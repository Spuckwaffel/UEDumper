
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

/// Enum /Script/OptimusCore.EOptimusPinMutability
/// Size: 0x04
enum class EOptimusPinMutability : uint8_t
{
	EOptimusPinMutability__Undefined                                                 = 0,
	EOptimusPinMutability__Immutable                                                 = 1,
	EOptimusPinMutability__Mutable                                                   = 2,
	EOptimusPinMutability__EOptimusPinMutability_MAX                                 = 3
};

/// Enum /Script/OptimusCore.EOptimusConstantType
/// Size: 0x03
enum class EOptimusConstantType : uint32_t
{
	EOptimusConstantType__Input                                                      = 0,
	EOptimusConstantType__Output                                                     = 1,
	EOptimusConstantType__EOptimusConstantType_MAX                                   = 2
};

/// Enum /Script/OptimusCore.EOptimusDiagnosticLevel
/// Size: 0x05
enum class EOptimusDiagnosticLevel : uint8_t
{
	EOptimusDiagnosticLevel__None                                                    = 0,
	EOptimusDiagnosticLevel__Info                                                    = 1,
	EOptimusDiagnosticLevel__Warning                                                 = 2,
	EOptimusDiagnosticLevel__Error                                                   = 3,
	EOptimusDiagnosticLevel__EOptimusDiagnosticLevel_MAX                             = 4
};

/// Enum /Script/OptimusCore.EOptimusBufferWriteType
/// Size: 0x06
enum class EOptimusBufferWriteType : uint8_t
{
	EOptimusBufferWriteType__Write                                                   = 0,
	EOptimusBufferWriteType__WriteAtomicAdd                                          = 1,
	EOptimusBufferWriteType__WriteAtomicMin                                          = 2,
	EOptimusBufferWriteType__WriteAtomicMax                                          = 3,
	EOptimusBufferWriteType__Count                                                   = 4,
	EOptimusBufferWriteType__EOptimusBufferWriteType_MAX                             = 5
};

/// Enum /Script/OptimusCore.EOptimusSkinnedMeshExecDomain
/// Size: 0x04
enum class EOptimusSkinnedMeshExecDomain : uint8_t
{
	EOptimusSkinnedMeshExecDomain__None                                              = 0,
	EOptimusSkinnedMeshExecDomain__Vertex                                            = 1,
	EOptimusSkinnedMeshExecDomain__Triangle                                          = 2,
	EOptimusSkinnedMeshExecDomain__EOptimusSkinnedMeshExecDomain_MAX                 = 3
};

/// Enum /Script/OptimusCore.EOptimusTerminalType
/// Size: 0x04
enum class EOptimusTerminalType : uint32_t
{
	EOptimusTerminalType__Unknown                                                    = 0,
	EOptimusTerminalType__Entry                                                      = 1,
	EOptimusTerminalType__Return                                                     = 2,
	EOptimusTerminalType__EOptimusTerminalType_MAX                                   = 3
};

/// Enum /Script/OptimusCore.EOptimusDataDomainType
/// Size: 0x03
enum class EOptimusDataDomainType : uint32_t
{
	EOptimusDataDomainType__Dimensional                                              = 0,
	EOptimusDataDomainType__Expression                                               = 1,
	EOptimusDataDomainType__EOptimusDataDomainType_MAX                               = 2
};

/// Enum /Script/OptimusCore.EOptimusDataTypeUsageFlags
/// Size: 0x07
enum class EOptimusDataTypeUsageFlags : uint8_t
{
	EOptimusDataTypeUsageFlags__None                                                 = 0,
	EOptimusDataTypeUsageFlags__Resource                                             = 1,
	EOptimusDataTypeUsageFlags__Variable                                             = 2,
	EOptimusDataTypeUsageFlags__AnimAttributes                                       = 4,
	EOptimusDataTypeUsageFlags__DataInterfaceOutput                                  = 8,
	EOptimusDataTypeUsageFlags__PinType                                              = 16,
	EOptimusDataTypeUsageFlags__EOptimusDataTypeUsageFlags_MAX                       = 17
};

/// Enum /Script/OptimusCore.EOptimusDataTypeFlags
/// Size: 0x04
enum class EOptimusDataTypeFlags : uint8_t
{
	EOptimusDataTypeFlags__None                                                      = 0,
	EOptimusDataTypeFlags__IsStructType                                              = 1,
	EOptimusDataTypeFlags__ShowElements                                              = 2,
	EOptimusDataTypeFlags__EOptimusDataTypeFlags_MAX                                 = 3
};

/// Enum /Script/OptimusCore.EOptimusDeformerStatus
/// Size: 0x05
enum class EOptimusDeformerStatus : uint32_t
{
	EOptimusDeformerStatus__Compiled                                                 = 0,
	EOptimusDeformerStatus__CompiledWithWarnings                                     = 1,
	EOptimusDeformerStatus__Modified                                                 = 2,
	EOptimusDeformerStatus__HasErrors                                                = 3,
	EOptimusDeformerStatus__EOptimusDeformerStatus_MAX                               = 4
};

/// Enum /Script/OptimusCore.EOptimusExecutionDomainType
/// Size: 0x03
enum class EOptimusExecutionDomainType : uint32_t
{
	EOptimusExecutionDomainType__DomainName                                          = 0,
	EOptimusExecutionDomainType__Expression                                          = 1,
	EOptimusExecutionDomainType__EOptimusExecutionDomainType_MAX                     = 2
};

/// Enum /Script/OptimusCore.EOptimusNodeGraphType
/// Size: 0x07
enum class EOptimusNodeGraphType : uint32_t
{
	EOptimusNodeGraphType__Setup                                                     = 0,
	EOptimusNodeGraphType__Update                                                    = 1,
	EOptimusNodeGraphType__ExternalTrigger                                           = 2,
	EOptimusNodeGraphType__Function                                                  = 3,
	EOptimusNodeGraphType__SubGraph                                                  = 4,
	EOptimusNodeGraphType__Transient                                                 = 5,
	EOptimusNodeGraphType__EOptimusNodeGraphType_MAX                                 = 6
};

/// Enum /Script/OptimusCore.EOptimusNodePinStorageType
/// Size: 0x03
enum class EOptimusNodePinStorageType : uint8_t
{
	EOptimusNodePinStorageType__Value                                                = 0,
	EOptimusNodePinStorageType__Resource                                             = 1,
	EOptimusNodePinStorageType__EOptimusNodePinStorageType_MAX                       = 2
};

/// Enum /Script/OptimusCore.EOptimusNodePinDirection
/// Size: 0x04
enum class EOptimusNodePinDirection : uint8_t
{
	EOptimusNodePinDirection__Unknown                                                = 0,
	EOptimusNodePinDirection__Input                                                  = 1,
	EOptimusNodePinDirection__Output                                                 = 2,
	EOptimusNodePinDirection__EOptimusNodePinDirection_MAX                           = 3
};

/// Class /Script/OptimusCore.OptimusAlternativeSelectedObjectProvider
/// Size: 0x0000 (0x000028 - 0x000028)
class UOptimusAlternativeSelectedObjectProvider : public UInterface
{ 
public:
};

/// Class /Script/OptimusCore.OptimusComponentBindingProvider
/// Size: 0x0000 (0x000028 - 0x000028)
class UOptimusComponentBindingProvider : public UInterface
{ 
public:
};

/// Class /Script/OptimusCore.OptimusComponentBindingReceiver
/// Size: 0x0000 (0x000028 - 0x000028)
class UOptimusComponentBindingReceiver : public UInterface
{ 
public:
};

/// Class /Script/OptimusCore.OptimusComputeKernelDataInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UOptimusComputeKernelDataInterface : public UInterface
{ 
public:
};

/// Class /Script/OptimusCore.OptimusComputeKernelProvider
/// Size: 0x0000 (0x000028 - 0x000028)
class UOptimusComputeKernelProvider : public UInterface
{ 
public:
};

/// Class /Script/OptimusCore.OptimusDataInterfaceProvider
/// Size: 0x0000 (0x000028 - 0x000028)
class UOptimusDataInterfaceProvider : public UInterface
{ 
public:
};

/// Class /Script/OptimusCore.OptimusDeformerInstanceAccessor
/// Size: 0x0000 (0x000028 - 0x000028)
class UOptimusDeformerInstanceAccessor : public UInterface
{ 
public:
};

/// Class /Script/OptimusCore.OptimusDeprecatedExecutionDataInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UOptimusDeprecatedExecutionDataInterface : public UInterface
{ 
public:
};

/// Class /Script/OptimusCore.OptimusExecutionDomainProvider
/// Size: 0x0000 (0x000028 - 0x000028)
class UOptimusExecutionDomainProvider : public UInterface
{ 
public:
};

/// Class /Script/OptimusCore.OptimusGeneratedClassDefiner
/// Size: 0x0000 (0x000028 - 0x000028)
class UOptimusGeneratedClassDefiner : public UInterface
{ 
public:
};

/// Class /Script/OptimusCore.OptimusNodeAdderPinProvider
/// Size: 0x0000 (0x000028 - 0x000028)
class UOptimusNodeAdderPinProvider : public UInterface
{ 
public:
};

/// Class /Script/OptimusCore.OptimusNodeFunctionLibraryOwner
/// Size: 0x0000 (0x000028 - 0x000028)
class UOptimusNodeFunctionLibraryOwner : public UInterface
{ 
public:
};

/// Class /Script/OptimusCore.OptimusNodeGraphCollectionOwner
/// Size: 0x0000 (0x000028 - 0x000028)
class UOptimusNodeGraphCollectionOwner : public UInterface
{ 
public:
};

/// Class /Script/OptimusCore.OptimusNodeGraphProvider
/// Size: 0x0000 (0x000028 - 0x000028)
class UOptimusNodeGraphProvider : public UInterface
{ 
public:
};

/// Class /Script/OptimusCore.OptimusNodePairProvider
/// Size: 0x0000 (0x000028 - 0x000028)
class UOptimusNodePairProvider : public UInterface
{ 
public:
};

/// Class /Script/OptimusCore.OptimusNodePinRouter
/// Size: 0x0000 (0x000028 - 0x000028)
class UOptimusNodePinRouter : public UInterface
{ 
public:
};

/// Class /Script/OptimusCore.OptimusNodeSubGraphReferencer
/// Size: 0x0000 (0x000028 - 0x000028)
class UOptimusNodeSubGraphReferencer : public UInterface
{ 
public:
};

/// Class /Script/OptimusCore.OptimusNonCollapsibleNode
/// Size: 0x0000 (0x000028 - 0x000028)
class UOptimusNonCollapsibleNode : public UInterface
{ 
public:
};

/// Class /Script/OptimusCore.OptimusParameterBindingProvider
/// Size: 0x0000 (0x000028 - 0x000028)
class UOptimusParameterBindingProvider : public UInterface
{ 
public:
};

/// Class /Script/OptimusCore.OptimusPathResolver
/// Size: 0x0000 (0x000028 - 0x000028)
class UOptimusPathResolver : public UInterface
{ 
public:
};

/// Class /Script/OptimusCore.OptimusPersistentBufferProvider
/// Size: 0x0000 (0x000028 - 0x000028)
class UOptimusPersistentBufferProvider : public UInterface
{ 
public:
};

/// Class /Script/OptimusCore.OptimusPinMutabilityDefiner
/// Size: 0x0000 (0x000028 - 0x000028)
class UOptimusPinMutabilityDefiner : public UInterface
{ 
public:
};

/// Class /Script/OptimusCore.OptimusShaderTextProvider
/// Size: 0x0000 (0x000028 - 0x000028)
class UOptimusShaderTextProvider : public UInterface
{ 
public:
};

/// Class /Script/OptimusCore.OptimusUnnamedNodePinProvider
/// Size: 0x0000 (0x000028 - 0x000028)
class UOptimusUnnamedNodePinProvider : public UInterface
{ 
public:
};

/// Class /Script/OptimusCore.OptimusValueProvider
/// Size: 0x0000 (0x000028 - 0x000028)
class UOptimusValueProvider : public UInterface
{ 
public:
};

/// Class /Script/OptimusCore.OptimusComputeDataInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UOptimusComputeDataInterface : public UComputeDataInterface
{ 
public:
};

/// Class /Script/OptimusCore.OptimusSkinnedMeshVertexAttributeDataInterface
/// Size: 0x0008 (0x000028 - 0x000030)
class UOptimusSkinnedMeshVertexAttributeDataInterface : public UOptimusComputeDataInterface
{ 
public:
	FName                                              AttributeName;                                              // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Class /Script/OptimusCore.OptimusSkinnedMeshVertexAttributeDataProvider
/// Size: 0x0010 (0x000028 - 0x000038)
class UOptimusSkinnedMeshVertexAttributeDataProvider : public UComputeDataProvider
{ 
public:
	class USkinnedMeshComponent*                       SkinnedMeshComponent;                                       // 0x0028   (0x0008)  
	FName                                              AttributeName;                                              // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0034   (0x0004)  MISSED
};

/// Class /Script/OptimusCore.OptimusKernelSource
/// Size: 0x0010 (0x000098 - 0x0000A8)
class UOptimusKernelSource : public UComputeKernelSource
{ 
public:
	SDK_UNDEFINED(16,14140) /* FString */              __um(Source);                                               // 0x0098   (0x0010)  
};

/// Class /Script/OptimusCore.OptimusComponentSource
/// Size: 0x0000 (0x000028 - 0x000028)
class UOptimusComponentSource : public UObject
{ 
public:
};

/// Class /Script/OptimusCore.OptimusSceneComponentSource
/// Size: 0x0000 (0x000028 - 0x000028)
class UOptimusSceneComponentSource : public UOptimusComponentSource
{ 
public:
};

/// Class /Script/OptimusCore.OptimusSkinnedMeshComponentSource
/// Size: 0x0000 (0x000028 - 0x000028)
class UOptimusSkinnedMeshComponentSource : public UOptimusComponentSource
{ 
public:
};

/// Class /Script/OptimusCore.OptimusSkeletalMeshComponentSource
/// Size: 0x0000 (0x000028 - 0x000028)
class UOptimusSkeletalMeshComponentSource : public UOptimusSkinnedMeshComponentSource
{ 
public:
};

/// Struct /Script/OptimusCore.OptimusDataTypeRef
/// Size: 0x000C (0x000000 - 0x00000C)
struct FOptimusDataTypeRef
{ 
	FName                                              TypeName;                                                   // 0x0000   (0x0004)  
	SDK_UNDEFINED(8,14141) /* TWeakObjectPtr<UObject*> */ __um(TypeObject);                                        // 0x0004   (0x0008)  
};

/// Struct /Script/OptimusCore.OptimusAnimAttributeDescription
/// Size: 0x0040 (0x000000 - 0x000040)
struct FOptimusAnimAttributeDescription
{ 
	SDK_UNDEFINED(16,14142) /* FString */              __um(Name);                                                 // 0x0000   (0x0010)  
	FName                                              BoneName;                                                   // 0x0010   (0x0004)  
	FOptimusDataTypeRef                                DataType;                                                   // 0x0014   (0x000C)  
	class UOptimusValueContainer*                      DefaultValue;                                               // 0x0020   (0x0008)  
	SDK_UNDEFINED(16,14143) /* FString */              __um(HlslId);                                               // 0x0028   (0x0010)  
	FName                                              PinName;                                                    // 0x0038   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Struct /Script/OptimusCore.OptimusAnimAttributeArray
/// Size: 0x0010 (0x000000 - 0x000010)
struct FOptimusAnimAttributeArray
{ 
	TArray<FOptimusAnimAttributeDescription>           InnerArray;                                                 // 0x0000   (0x0010)  
};

/// Class /Script/OptimusCore.OptimusAnimAttributeDataInterface
/// Size: 0x0010 (0x000028 - 0x000038)
class UOptimusAnimAttributeDataInterface : public UOptimusComputeDataInterface
{ 
public:
	FOptimusAnimAttributeArray                         AttributeArray;                                             // 0x0028   (0x0010)  
};

/// Class /Script/OptimusCore.OptimusAnimAttributeDataProvider
/// Size: 0x0020 (0x000028 - 0x000048)
class UOptimusAnimAttributeDataProvider : public UComputeDataProvider
{ 
public:
	class USkeletalMeshComponent*                      SkeletalMesh;                                               // 0x0028   (0x0008)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x0030   (0x0018)  MISSED
};

/// Class /Script/OptimusCore.OptimusClothDataInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UOptimusClothDataInterface : public UOptimusComputeDataInterface
{ 
public:
};

/// Class /Script/OptimusCore.OptimusClothDataProvider
/// Size: 0x0008 (0x000028 - 0x000030)
class UOptimusClothDataProvider : public UComputeDataProvider
{ 
public:
	class USkinnedMeshComponent*                       SkinnedMesh;                                                // 0x0028   (0x0008)  
};

/// Class /Script/OptimusCore.OptimusConnectivityDataInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UOptimusConnectivityDataInterface : public UOptimusComputeDataInterface
{ 
public:
};

/// Class /Script/OptimusCore.OptimusConnectivityDataProvider
/// Size: 0x0018 (0x000028 - 0x000040)
class UOptimusConnectivityDataProvider : public UComputeDataProvider
{ 
public:
	class USkinnedMeshComponent*                       SkinnedMesh;                                                // 0x0028   (0x0008)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0030   (0x0010)  MISSED
};

/// Class /Script/OptimusCore.OptimusCopyKernelDataInterface
/// Size: 0x0020 (0x000028 - 0x000048)
class UOptimusCopyKernelDataInterface : public UComputeDataInterface
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0028   (0x0008)  MISSED
	SDK_UNDEFINED(8,14144) /* TWeakObjectPtr<UOptimusComponentSourceBinding*> */ __um(ComponentSourceBinding);     // 0x0030   (0x0008)  
	SDK_UNDEFINED(16,14145) /* FString */              __um(NumThreadsExpression);                                 // 0x0038   (0x0010)  
};

/// Class /Script/OptimusCore.OptimusCopyKernelDataProvider
/// Size: 0x0010 (0x000028 - 0x000038)
class UOptimusCopyKernelDataProvider : public UComputeDataProvider
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0028   (0x0010)  MISSED
};

/// Struct /Script/OptimusCore.OptimusConstantIdentifier
/// Size: 0x000C (0x000000 - 0x00000C)
struct FOptimusConstantIdentifier
{ 
	FName                                              NodePath;                                                   // 0x0000   (0x0004)  
	FName                                              GroupName;                                                  // 0x0004   (0x0004)  
	FName                                              ConstantName;                                               // 0x0008   (0x0004)  
};

/// Class /Script/OptimusCore.OptimusCustomComputeKernelDataInterface
/// Size: 0x0030 (0x000028 - 0x000058)
class UOptimusCustomComputeKernelDataInterface : public UComputeDataInterface
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0028   (0x0008)  MISSED
	SDK_UNDEFINED(8,14146) /* TWeakObjectPtr<UOptimusComponentSourceBinding*> */ __um(ComponentSourceBinding);     // 0x0030   (0x0008)  
	SDK_UNDEFINED(16,14147) /* FString */              __um(NumThreadsExpression);                                 // 0x0038   (0x0010)  
	FOptimusConstantIdentifier                         ExecutionDomainConstantIdentifier;                          // 0x0048   (0x000C)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0054   (0x0004)  MISSED
};

/// Class /Script/OptimusCore.OptimusCustomComputeKernelDataProvider
/// Size: 0x0010 (0x000028 - 0x000038)
class UOptimusCustomComputeKernelDataProvider : public UComputeDataProvider
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0028   (0x0010)  MISSED
};

/// Struct /Script/OptimusCore.OptimusDebugDrawParameters
/// Size: 0x0014 (0x000000 - 0x000014)
struct FOptimusDebugDrawParameters
{ 
	bool                                               bForceEnable;                                               // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	int32_t                                            MaxLineCount;                                               // 0x0004   (0x0004)  
	int32_t                                            MaxTriangleCount;                                           // 0x0008   (0x0004)  
	int32_t                                            MaxCharacterCount;                                          // 0x000C   (0x0004)  
	int32_t                                            FontSize;                                                   // 0x0010   (0x0004)  
};

/// Class /Script/OptimusCore.OptimusDebugDrawDataInterface
/// Size: 0x0018 (0x000028 - 0x000040)
class UOptimusDebugDrawDataInterface : public UOptimusComputeDataInterface
{ 
public:
	bool                                               bIsSupported;                                               // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0029   (0x0003)  MISSED
	FOptimusDebugDrawParameters                        DebugDrawParameters;                                        // 0x002C   (0x0014)  
};

/// Class /Script/OptimusCore.OptimusDebugDrawDataProvider
/// Size: 0x0020 (0x000028 - 0x000048)
class UOptimusDebugDrawDataProvider : public UComputeDataProvider
{ 
public:
	class UPrimitiveComponent*                         PrimitiveComponent;                                         // 0x0028   (0x0008)  
	FOptimusDebugDrawParameters                        DebugDrawParameters;                                        // 0x0030   (0x0014)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0044   (0x0004)  MISSED
};

/// Class /Script/OptimusCore.OptimusDuplicateVerticesDataInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UOptimusDuplicateVerticesDataInterface : public UOptimusComputeDataInterface
{ 
public:
};

/// Class /Script/OptimusCore.OptimusDuplicateVerticesDataProvider
/// Size: 0x0008 (0x000028 - 0x000030)
class UOptimusDuplicateVerticesDataProvider : public UComputeDataProvider
{ 
public:
	class USkinnedMeshComponent*                       SkinnedMesh;                                                // 0x0028   (0x0008)  
};

/// Struct /Script/OptimusCore.OptimusGraphVariableDescription
/// Size: 0x0030 (0x000000 - 0x000030)
struct FOptimusGraphVariableDescription
{ 
	SDK_UNDEFINED(16,14148) /* FString */              __um(Name);                                                 // 0x0000   (0x0010)  
	FShaderValueTypeHandle                             ValueType;                                                  // 0x0010   (0x0008)  
	TArray<char>                                       Value;                                                      // 0x0018   (0x0010)  
	int32_t                                            Offset;                                                     // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Class /Script/OptimusCore.OptimusGraphDataInterface
/// Size: 0x0018 (0x000028 - 0x000040)
class UOptimusGraphDataInterface : public UComputeDataInterface
{ 
public:
	TArray<FOptimusGraphVariableDescription>           Variables;                                                  // 0x0028   (0x0010)  
	int32_t                                            ParameterBufferSize;                                        // 0x0038   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Class /Script/OptimusCore.OptimusGraphDataProvider
/// Size: 0x0030 (0x000028 - 0x000058)
class UOptimusGraphDataProvider : public UComputeDataProvider
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0028   (0x0008)  MISSED
	class UMeshComponent*                              MeshComponent;                                              // 0x0030   (0x0008)  
	TArray<FOptimusGraphVariableDescription>           Variables;                                                  // 0x0038   (0x0010)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0048   (0x0008)  MISSED
	class UOptimusDeformerInstance*                    DeformerInstance;                                           // 0x0050   (0x0008)  
};

/// Class /Script/OptimusCore.OptimusHalfEdgeDataInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UOptimusHalfEdgeDataInterface : public UOptimusComputeDataInterface
{ 
public:
};

/// Class /Script/OptimusCore.OptimusHalfEdgeDataProvider
/// Size: 0x0020 (0x000028 - 0x000048)
class UOptimusHalfEdgeDataProvider : public UComputeDataProvider
{ 
public:
	class USkinnedMeshComponent*                       SkinnedMesh;                                                // 0x0028   (0x0008)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x0030   (0x0018)  MISSED
};

/// Class /Script/OptimusCore.OptimusLoopTerminalDataInterface
/// Size: 0x0008 (0x000028 - 0x000030)
class UOptimusLoopTerminalDataInterface : public UOptimusComputeDataInterface
{ 
public:
	uint32_t                                           Index;                                                      // 0x0028   (0x0004)  
	uint32_t                                           Count;                                                      // 0x002C   (0x0004)  
};

/// Class /Script/OptimusCore.OptimusLoopTerminalDataProvider
/// Size: 0x0008 (0x000028 - 0x000030)
class UOptimusLoopTerminalDataProvider : public UComputeDataProvider
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0028   (0x0008)  MISSED
};

/// Class /Script/OptimusCore.OptimusMorphTargetDataInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UOptimusMorphTargetDataInterface : public UOptimusComputeDataInterface
{ 
public:
};

/// Class /Script/OptimusCore.OptimusMorphTargetDataProvider
/// Size: 0x0008 (0x000028 - 0x000030)
class UOptimusMorphTargetDataProvider : public UComputeDataProvider
{ 
public:
	class USkinnedMeshComponent*                       SkinnedMesh;                                                // 0x0028   (0x0008)  
};

/// Struct /Script/OptimusCore.OptimusDataDomain
/// Size: 0x0040 (0x000000 - 0x000040)
struct FOptimusDataDomain
{ 
	EOptimusDataDomainType                             Type;                                                       // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	TArray<FName>                                      DimensionNames;                                             // 0x0008   (0x0010)  
	int32_t                                            Multiplier;                                                 // 0x0018   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x001C   (0x0004)  MISSED
	SDK_UNDEFINED(16,14149) /* FString */              __um(Expression);                                           // 0x0020   (0x0010)  
	TArray<FName>                                      LevelNames;                                                 // 0x0030   (0x0010)  
};

/// Class /Script/OptimusCore.OptimusRawBufferDataInterface
/// Size: 0x0060 (0x000028 - 0x000088)
class UOptimusRawBufferDataInterface : public UOptimusComputeDataInterface
{ 
public:
	FShaderValueTypeHandle                             ValueType;                                                  // 0x0028   (0x0008)  
	FOptimusDataDomain                                 DataDomain;                                                 // 0x0030   (0x0040)  
	SDK_UNDEFINED(8,14150) /* TWeakObjectPtr<UOptimusComponentSourceBinding*> */ __um(ComponentSourceBinding);     // 0x0070   (0x0008)  
	FOptimusConstantIdentifier                         DomainConstantIdentifier;                                   // 0x0078   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0084   (0x0004)  MISSED
};

/// Class /Script/OptimusCore.OptimusTransientBufferDataInterface
/// Size: 0x0008 (0x000088 - 0x000090)
class UOptimusTransientBufferDataInterface : public UOptimusRawBufferDataInterface
{ 
public:
	bool                                               bZeroInitForAtomicWrites;                                   // 0x0088   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0089   (0x0007)  MISSED
};

/// Class /Script/OptimusCore.OptimusImplicitPersistentBufferDataInterface
/// Size: 0x0008 (0x000088 - 0x000090)
class UOptimusImplicitPersistentBufferDataInterface : public UOptimusRawBufferDataInterface
{ 
public:
	bool                                               bZeroInitForAtomicWrites;                                   // 0x0088   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0089   (0x0007)  MISSED
};

/// Class /Script/OptimusCore.OptimusPersistentBufferDataInterface
/// Size: 0x0008 (0x000088 - 0x000090)
class UOptimusPersistentBufferDataInterface : public UOptimusRawBufferDataInterface
{ 
public:
	FName                                              ResourceName;                                               // 0x0088   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x008C   (0x0004)  MISSED
};

/// Class /Script/OptimusCore.OptimusRawBufferDataProvider
/// Size: 0x0058 (0x000028 - 0x000080)
class UOptimusRawBufferDataProvider : public UComputeDataProvider
{ 
public:
	unsigned char                                      UnknownData00_1[0x58];                                      // 0x0028   (0x0058)  MISSED
};

/// Class /Script/OptimusCore.OptimusTransientBufferDataProvider
/// Size: 0x0008 (0x000080 - 0x000088)
class UOptimusTransientBufferDataProvider : public UOptimusRawBufferDataProvider
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0080   (0x0008)  MISSED
};

/// Class /Script/OptimusCore.OptimusImplicitPersistentBufferDataProvider
/// Size: 0x0020 (0x000080 - 0x0000A0)
class UOptimusImplicitPersistentBufferDataProvider : public UOptimusRawBufferDataProvider
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0080   (0x0020)  MISSED
};

/// Class /Script/OptimusCore.OptimusPersistentBufferDataProvider
/// Size: 0x0020 (0x000080 - 0x0000A0)
class UOptimusPersistentBufferDataProvider : public UOptimusRawBufferDataProvider
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0080   (0x0020)  MISSED
};

/// Class /Script/OptimusCore.OptimusSceneDataInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UOptimusSceneDataInterface : public UOptimusComputeDataInterface
{ 
public:
};

/// Class /Script/OptimusCore.OptimusSceneDataProvider
/// Size: 0x0008 (0x000028 - 0x000030)
class UOptimusSceneDataProvider : public UComputeDataProvider
{ 
public:
	class USceneComponent*                             SceneComponent;                                             // 0x0028   (0x0008)  
};

/// Class /Script/OptimusCore.OptimusSkeletonDataInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UOptimusSkeletonDataInterface : public UOptimusComputeDataInterface
{ 
public:
};

/// Class /Script/OptimusCore.OptimusSkeletonDataProvider
/// Size: 0x0008 (0x000028 - 0x000030)
class UOptimusSkeletonDataProvider : public UComputeDataProvider
{ 
public:
	class USkinnedMeshComponent*                       SkinnedMesh;                                                // 0x0028   (0x0008)  
};

/// Class /Script/OptimusCore.OptimusSkinnedMeshDataInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UOptimusSkinnedMeshDataInterface : public UOptimusComputeDataInterface
{ 
public:
};

/// Class /Script/OptimusCore.OptimusSkinnedMeshDataProvider
/// Size: 0x0008 (0x000028 - 0x000030)
class UOptimusSkinnedMeshDataProvider : public UComputeDataProvider
{ 
public:
	class USkinnedMeshComponent*                       SkinnedMesh;                                                // 0x0028   (0x0008)  
};

/// Class /Script/OptimusCore.OptimusSkinnedMeshExecDataInterface
/// Size: 0x0010 (0x000028 - 0x000038)
class UOptimusSkinnedMeshExecDataInterface : public UOptimusComputeDataInterface
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0028   (0x0008)  MISSED
	EOptimusSkinnedMeshExecDomain                      Domain;                                                     // 0x0030   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0031   (0x0007)  MISSED
};

/// Class /Script/OptimusCore.OptimusSkinnedMeshExecDataProvider
/// Size: 0x0010 (0x000028 - 0x000038)
class UOptimusSkinnedMeshExecDataProvider : public UComputeDataProvider
{ 
public:
	class USkinnedMeshComponent*                       SkinnedMesh;                                                // 0x0028   (0x0008)  
	EOptimusSkinnedMeshExecDomain                      Domain;                                                     // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0031   (0x0007)  MISSED
};

/// Class /Script/OptimusCore.OptimusSkinnedMeshWriteDataInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UOptimusSkinnedMeshWriteDataInterface : public UOptimusComputeDataInterface
{ 
public:
};

/// Class /Script/OptimusCore.OptimusSkinnedMeshWriteDataProvider
/// Size: 0x0010 (0x000028 - 0x000038)
class UOptimusSkinnedMeshWriteDataProvider : public UComputeDataProvider
{ 
public:
	class USkinnedMeshComponent*                       SkinnedMesh;                                                // 0x0028   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0030   (0x0008)  MISSED
};

/// Class /Script/OptimusCore.OptimusNode
/// Size: 0x00E8 (0x000028 - 0x000110)
class UOptimusNode : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x30];                                      // 0x0000   (0x0030)  MISSED
	SDK_UNDEFINED(24,14151) /* FText */                __um(DisplayName);                                          // 0x0030   (0x0018)  
	FVector2D                                          GraphPosition;                                              // 0x0048   (0x0010)  
	TArray<class UOptimusNodePin*>                     Pins;                                                       // 0x0058   (0x0010)  
	SDK_UNDEFINED(80,14152) /* TSet<FName> */          __um(ExpandedPins);                                         // 0x0068   (0x0050)  
	EOptimusDiagnosticLevel                            DiagnosticLevel;                                            // 0x00B8   (0x0001)  
	unsigned char                                      UnknownData01_6[0x57];                                      // 0x00B9   (0x0057)  MISSED


	/// Functions
	// Function /Script/OptimusCore.OptimusNode.SetGraphPosition
	// bool SetGraphPosition(FVector2D& InPosition);                                                                         // [0xaa02878] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/OptimusCore.OptimusNode.GetNodeName
	// FName GetNodeName();                                                                                                  // [0xaa0195c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/OptimusCore.OptimusNode.GetNodeCategory
	// FName GetNodeCategory();                                                                                              // [0xaa0192c] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/OptimusCore.OptimusNode.GetGraphPosition
	// FVector2D GetGraphPosition();                                                                                         // [0xaa018d4] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/OptimusCore.OptimusNode.GetDisplayName
	// FText GetDisplayName();                                                                                               // [0x9f8a270] Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/OptimusCore.OptimusNode_DataInterface
/// Size: 0x0028 (0x000110 - 0x000138)
class UOptimusNode_DataInterface : public UOptimusNode
{ 
public:
	unsigned char                                      UnknownData00_3[0x18];                                      // 0x0110   (0x0018)  MISSED
	class UClass*                                      DataInterfaceClass;                                         // 0x0128   (0x0008)  
	class UOptimusComputeDataInterface*                DataInterfaceData;                                          // 0x0130   (0x0008)  
};

/// Class /Script/OptimusCore.OptimusNode_AnimAttributeDataInterface
/// Size: 0x0000 (0x000138 - 0x000138)
class UOptimusNode_AnimAttributeDataInterface : public UOptimusNode_DataInterface
{ 
public:
};

/// Struct /Script/OptimusCore.OptimusNode_ComponentSource_DuplicationInfo
/// Size: 0x0010 (0x000000 - 0x000010)
struct FOptimusNode_ComponentSource_DuplicationInfo
{ 
	FName                                              BindingName;                                                // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	class UClass*                                      ComponentType;                                              // 0x0008   (0x0008)  
};

/// Class /Script/OptimusCore.OptimusNode_ComponentSource
/// Size: 0x0028 (0x000110 - 0x000138)
class UOptimusNode_ComponentSource : public UOptimusNode
{ 
public:
	unsigned char                                      UnknownData00_3[0x10];                                      // 0x0110   (0x0010)  MISSED
	class UOptimusComponentSourceBinding*              Binding;                                                    // 0x0120   (0x0008)  
	FOptimusNode_ComponentSource_DuplicationInfo       DuplicationInfo;                                            // 0x0128   (0x0010)  
};

/// Class /Script/OptimusCore.OptimusNode_ComputeKernelBase
/// Size: 0x0008 (0x000110 - 0x000118)
class UOptimusNode_ComputeKernelBase : public UOptimusNode
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0110   (0x0008)  MISSED
};

/// Struct /Script/OptimusCore.OptimusExecutionDomain
/// Size: 0x0018 (0x000000 - 0x000018)
struct FOptimusExecutionDomain
{ 
	EOptimusExecutionDomainType                        Type;                                                       // 0x0000   (0x0004)  
	FName                                              Name;                                                       // 0x0004   (0x0004)  
	SDK_UNDEFINED(16,14153) /* FString */              __um(Expression);                                           // 0x0008   (0x0010)  
};

/// Struct /Script/OptimusCore.OptimusValidatedName
/// Size: 0x0004 (0x000000 - 0x000004)
struct FOptimusValidatedName
{ 
	FName                                              Name;                                                       // 0x0000   (0x0004)  
};

/// Struct /Script/OptimusCore.OptimusParameterBinding
/// Size: 0x0058 (0x000000 - 0x000058)
struct FOptimusParameterBinding
{ 
	FOptimusValidatedName                              Name;                                                       // 0x0000   (0x0004)  
	FOptimusDataTypeRef                                DataType;                                                   // 0x0004   (0x000C)  
	FOptimusDataDomain                                 DataDomain;                                                 // 0x0010   (0x0040)  
	bool                                               bSupportAtomicIfCompatibleDataType;                         // 0x0050   (0x0001)  
	bool                                               bSupportRead;                                               // 0x0051   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x0052   (0x0006)  MISSED
};

/// Class /Script/OptimusCore.OptimusNode_ComputeKernelFunctionGeneratorClass
/// Size: 0x0060 (0x000200 - 0x000260)
class UOptimusNode_ComputeKernelFunctionGeneratorClass : public UClass
{ 
public:
	FName                                              Category;                                                   // 0x0200   (0x0004)  
	FName                                              KernelName;                                                 // 0x0204   (0x0004)  
	FOptimusExecutionDomain                            ExecutionDomain;                                            // 0x0208   (0x0018)  
	FIntVector                                         GroupSize;                                                  // 0x0220   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x022C   (0x0004)  MISSED
	TArray<FOptimusParameterBinding>                   InputBindings;                                              // 0x0230   (0x0010)  
	TArray<FOptimusParameterBinding>                   OutputBindings;                                             // 0x0240   (0x0010)  
	SDK_UNDEFINED(16,14154) /* FString */              __um(ShaderSource);                                         // 0x0250   (0x0010)  
};

/// Class /Script/OptimusCore.OptimusNode_ComputeKernelFunction
/// Size: 0x0000 (0x000118 - 0x000118)
class UOptimusNode_ComputeKernelFunction : public UOptimusNode_ComputeKernelBase
{ 
public:
};

/// Class /Script/OptimusCore.OptimusNode_ConstantValueGeneratorClass
/// Size: 0x0010 (0x000200 - 0x000210)
class UOptimusNode_ConstantValueGeneratorClass : public UClass
{ 
public:
	FOptimusDataTypeRef                                DataType;                                                   // 0x0200   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x020C   (0x0004)  MISSED
};

/// Class /Script/OptimusCore.OptimusNode_ConstantValue
/// Size: 0x0018 (0x000110 - 0x000128)
class UOptimusNode_ConstantValue : public UOptimusNode
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0110   (0x0018)  MISSED
};

/// Struct /Script/OptimusCore.Optimus_ShaderBinding
/// Size: 0x0010 (0x000000 - 0x000010)
struct FOptimus_ShaderBinding
{ 
	FName                                              Name;                                                       // 0x0000   (0x0004)  
	FOptimusDataTypeRef                                DataType;                                                   // 0x0004   (0x000C)  
};

/// Struct /Script/OptimusCore.OptimusParameterBindingArray
/// Size: 0x0010 (0x000000 - 0x000010)
struct FOptimusParameterBindingArray
{ 
	TArray<FOptimusParameterBinding>                   InnerArray;                                                 // 0x0000   (0x0010)  
};

/// Struct /Script/OptimusCore.OptimusSecondaryInputBindingsGroup
/// Size: 0x0018 (0x000000 - 0x000018)
struct FOptimusSecondaryInputBindingsGroup
{ 
	FOptimusValidatedName                              GroupName;                                                  // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	FOptimusParameterBindingArray                      BindingArray;                                               // 0x0008   (0x0010)  
};

/// Struct /Script/OptimusCore.OptimusShaderText
/// Size: 0x0020 (0x000000 - 0x000020)
struct FOptimusShaderText
{ 
	SDK_UNDEFINED(16,14155) /* FString */              __um(Declarations);                                         // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,14156) /* FString */              __um(ShaderText);                                           // 0x0010   (0x0010)  
};

/// Class /Script/OptimusCore.OptimusNode_CustomComputeKernel
/// Size: 0x00E0 (0x000118 - 0x0001F8)
class UOptimusNode_CustomComputeKernel : public UOptimusNode_ComputeKernelBase
{ 
public:
	unsigned char                                      UnknownData00_3[0x20];                                      // 0x0118   (0x0020)  MISSED
	FName                                              Category;                                                   // 0x0138   (0x0004)  
	FOptimusValidatedName                              KernelName;                                                 // 0x013C   (0x0004)  
	FOptimusExecutionDomain                            ExecutionDomain;                                            // 0x0140   (0x0018)  
	FIntVector                                         GroupSize;                                                  // 0x0158   (0x000C)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0164   (0x0004)  MISSED
	TArray<FOptimus_ShaderBinding>                     Parameters;                                                 // 0x0168   (0x0010)  
	TArray<FOptimusParameterBinding>                   InputBindings;                                              // 0x0178   (0x0010)  
	TArray<FOptimusParameterBinding>                   OutputBindings;                                             // 0x0188   (0x0010)  
	FOptimusParameterBindingArray                      InputBindingArray;                                          // 0x0198   (0x0010)  
	FOptimusParameterBindingArray                      OutputBindingArray;                                         // 0x01A8   (0x0010)  
	TArray<FOptimusSecondaryInputBindingsGroup>        SecondaryInputBindingGroups;                                // 0x01B8   (0x0010)  
	TArray<class UComputeSource*>                      AdditionalSources;                                          // 0x01C8   (0x0010)  
	FOptimusShaderText                                 ShaderSource;                                               // 0x01D8   (0x0020)  
};

/// Class /Script/OptimusCore.OptimusNode_FunctionReference
/// Size: 0x0040 (0x000110 - 0x000150)
class UOptimusNode_FunctionReference : public UOptimusNode
{ 
public:
	unsigned char                                      UnknownData00_3[0x18];                                      // 0x0110   (0x0018)  MISSED
	SDK_UNDEFINED(32,14157) /* TWeakObjectPtr<UOptimusFunctionNodeGraph*> */ __um(FunctionGraph);                  // 0x0128   (0x0020)  
	SDK_UNDEFINED(8,14158) /* TWeakObjectPtr<UOptimusNodePin*> */ __um(DefaultComponentPin);                       // 0x0148   (0x0008)  
};

/// Struct /Script/OptimusCore.OptimusNode_ResourceAccessorBase_DuplicationInfo
/// Size: 0x0050 (0x000000 - 0x000050)
struct FOptimusNode_ResourceAccessorBase_DuplicationInfo
{ 
	FName                                              ResourceName;                                               // 0x0000   (0x0004)  
	FOptimusDataTypeRef                                DataType;                                                   // 0x0004   (0x000C)  
	FOptimusDataDomain                                 DataDomain;                                                 // 0x0010   (0x0040)  
};

/// Class /Script/OptimusCore.OptimusNode_ResourceAccessorBase
/// Size: 0x0080 (0x000110 - 0x000190)
class UOptimusNode_ResourceAccessorBase : public UOptimusNode
{ 
public:
	unsigned char                                      UnknownData00_3[0x20];                                      // 0x0110   (0x0020)  MISSED
	SDK_UNDEFINED(8,14159) /* TWeakObjectPtr<UOptimusResourceDescription*> */ __um(ResourceDesc);                  // 0x0130   (0x0008)  
	EOptimusBufferWriteType                            WriteType;                                                  // 0x0138   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0139   (0x0007)  MISSED
	FOptimusNode_ResourceAccessorBase_DuplicationInfo  DuplicationInfo;                                            // 0x0140   (0x0050)  
};

/// Class /Script/OptimusCore.OptimusNode_GetResource
/// Size: 0x0000 (0x000190 - 0x000190)
class UOptimusNode_GetResource : public UOptimusNode_ResourceAccessorBase
{ 
public:
};

/// Struct /Script/OptimusCore.OptimusNode_GetVariable_DuplicationInfo
/// Size: 0x0020 (0x000000 - 0x000020)
struct FOptimusNode_GetVariable_DuplicationInfo
{ 
	FName                                              VariableName;                                               // 0x0000   (0x0004)  
	FOptimusDataTypeRef                                DataType;                                                   // 0x0004   (0x000C)  
	SDK_UNDEFINED(16,14160) /* FString */              __um(DefaultValue);                                         // 0x0010   (0x0010)  
};

/// Class /Script/OptimusCore.OptimusNode_GetVariable
/// Size: 0x0040 (0x000110 - 0x000150)
class UOptimusNode_GetVariable : public UOptimusNode
{ 
public:
	unsigned char                                      UnknownData00_3[0x18];                                      // 0x0110   (0x0018)  MISSED
	SDK_UNDEFINED(8,14161) /* TWeakObjectPtr<UOptimusVariableDescription*> */ __um(VariableDesc);                  // 0x0128   (0x0008)  
	FOptimusNode_GetVariable_DuplicationInfo           DuplicationInfo;                                            // 0x0130   (0x0020)  
};

/// Class /Script/OptimusCore.OptimusNode_GraphTerminal
/// Size: 0x0030 (0x000110 - 0x000140)
class UOptimusNode_GraphTerminal : public UOptimusNode
{ 
public:
	unsigned char                                      UnknownData00_3[0x18];                                      // 0x0110   (0x0018)  MISSED
	EOptimusTerminalType                               TerminalType;                                               // 0x0128   (0x0004)  
	SDK_UNDEFINED(8,14162) /* TWeakObjectPtr<UOptimusNodeSubGraph*> */ __um(OwningGraph);                          // 0x012C   (0x0008)  
	SDK_UNDEFINED(8,14163) /* TWeakObjectPtr<UOptimusNodePin*> */ __um(DefaultComponentPin);                       // 0x0134   (0x0008)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x013C   (0x0004)  MISSED
};

/// Struct /Script/OptimusCore.OptimusLoopTerminalInfo
/// Size: 0x0018 (0x000000 - 0x000018)
struct FOptimusLoopTerminalInfo
{ 
	int32_t                                            Count;                                                      // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	FOptimusParameterBindingArray                      Bindings;                                                   // 0x0008   (0x0010)  
};

/// Struct /Script/OptimusCore.OptimusPinPairInfo
/// Size: 0x0020 (0x000000 - 0x000020)
struct FOptimusPinPairInfo
{ 
	TArray<FName>                                      InputPinPath;                                               // 0x0000   (0x0010)  
	TArray<FName>                                      OutputPinPath;                                              // 0x0010   (0x0010)  
};

/// Class /Script/OptimusCore.OptimusNode_LoopTerminal
/// Size: 0x0068 (0x000110 - 0x000178)
class UOptimusNode_LoopTerminal : public UOptimusNode
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0110   (0x0028)  MISSED
	EOptimusTerminalType                               TerminalType;                                               // 0x0138   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x013C   (0x0004)  MISSED
	FOptimusLoopTerminalInfo                           LoopInfo;                                                   // 0x0140   (0x0018)  
	class UOptimusNodePin*                             IndexPin;                                                   // 0x0158   (0x0008)  
	class UOptimusNodePin*                             CountPin;                                                   // 0x0160   (0x0008)  
	TArray<FOptimusPinPairInfo>                        PinPairInfos;                                               // 0x0168   (0x0010)  
};

/// Class /Script/OptimusCore.OptimusNode_Resource
/// Size: 0x0000 (0x000190 - 0x000190)
class UOptimusNode_Resource : public UOptimusNode_ResourceAccessorBase
{ 
public:
};

/// Class /Script/OptimusCore.OptimusNode_SetResource
/// Size: 0x0000 (0x000190 - 0x000190)
class UOptimusNode_SetResource : public UOptimusNode_ResourceAccessorBase
{ 
public:
};

/// Class /Script/OptimusCore.OptimusNode_SubGraphReference
/// Size: 0x0030 (0x000110 - 0x000140)
class UOptimusNode_SubGraphReference : public UOptimusNode
{ 
public:
	unsigned char                                      UnknownData00_3[0x18];                                      // 0x0110   (0x0018)  MISSED
	FName                                              SubgraphName;                                               // 0x0128   (0x0004)  
	SDK_UNDEFINED(8,14164) /* TWeakObjectPtr<UOptimusNodePin*> */ __um(DefaultComponentPin);                       // 0x012C   (0x0008)  
	SDK_UNDEFINED(8,14165) /* TWeakObjectPtr<UOptimusNodeSubGraph*> */ __um(SubGraph);                             // 0x0134   (0x0008)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x013C   (0x0004)  MISSED
};

/// Class /Script/OptimusCore.OptimusActionStack
/// Size: 0x00B8 (0x000028 - 0x0000E0)
class UOptimusActionStack : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	int32_t                                            TransactedActionIndex;                                      // 0x0028   (0x0004)  
	unsigned char                                      UnknownData01_6[0xB4];                                      // 0x002C   (0x00B4)  MISSED
};

/// Class /Script/OptimusCore.OptimusComponentSourceBinding
/// Size: 0x0028 (0x000028 - 0x000050)
class UOptimusComponentSourceBinding : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	FName                                              BindingName;                                                // 0x0028   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x002C   (0x0004)  MISSED
	class UClass*                                      ComponentType;                                              // 0x0030   (0x0008)  
	TArray<FName>                                      ComponentTags;                                              // 0x0038   (0x0010)  
	bool                                               bIsPrimaryBinding;                                          // 0x0048   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x0049   (0x0007)  MISSED
};

/// Class /Script/OptimusCore.OptimusComputeGraph
/// Size: 0x0010 (0x0000E0 - 0x0000F0)
class UOptimusComputeGraph : public UComputeGraph
{ 
public:
	SDK_UNDEFINED(16,14166) /* TArray<TWeakObjectPtr<UOptimusNode*>> */ __um(KernelToNode);                        // 0x00E0   (0x0010)  
};

/// Class /Script/OptimusCore.OptimusComponentSourceBindingContainer
/// Size: 0x0010 (0x000028 - 0x000038)
class UOptimusComponentSourceBindingContainer : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	TArray<class UOptimusComponentSourceBinding*>      Bindings;                                                   // 0x0028   (0x0010)  
};

/// Class /Script/OptimusCore.OptimusVariableContainer
/// Size: 0x0010 (0x000028 - 0x000038)
class UOptimusVariableContainer : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	TArray<class UOptimusVariableDescription*>         Descriptions;                                               // 0x0028   (0x0010)  
};

/// Class /Script/OptimusCore.OptimusResourceContainer
/// Size: 0x0010 (0x000028 - 0x000038)
class UOptimusResourceContainer : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	TArray<class UOptimusResourceDescription*>         Descriptions;                                               // 0x0028   (0x0010)  
};

/// Struct /Script/OptimusCore.OptimusComputeGraphInfo
/// Size: 0x0010 (0x000000 - 0x000010)
struct FOptimusComputeGraphInfo
{ 
	EOptimusNodeGraphType                              GraphType;                                                  // 0x0000   (0x0004)  
	FName                                              GraphName;                                                  // 0x0004   (0x0004)  
	class UOptimusComputeGraph*                        ComputeGraph;                                               // 0x0008   (0x0008)  
};

/// Class /Script/OptimusCore.OptimusDeformer
/// Size: 0x0100 (0x000028 - 0x000128)
class UOptimusDeformer : public UMeshDeformer
{ 
public:
	unsigned char                                      UnknownData00_3[0x20];                                      // 0x0028   (0x0020)  MISSED
	class USkeletalMesh*                               Mesh;                                                       // 0x0048   (0x0008)  
	TArray<FOptimusComputeGraphInfo>                   ComputeGraphs;                                              // 0x0050   (0x0010)  
	class UOptimusActionStack*                         ActionStack;                                                // 0x0060   (0x0008)  
	EOptimusDeformerStatus                             Status;                                                     // 0x0068   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x006C   (0x0004)  MISSED
	TArray<class UOptimusNodeGraph*>                   Graphs;                                                     // 0x0070   (0x0010)  
	class UOptimusComponentSourceBindingContainer*     Bindings;                                                   // 0x0080   (0x0008)  
	class UOptimusVariableContainer*                   Variables;                                                  // 0x0088   (0x0008)  
	class UOptimusResourceContainer*                   Resources;                                                  // 0x0090   (0x0008)  
	unsigned char                                      UnknownData02_6[0x90];                                      // 0x0098   (0x0090)  MISSED


	/// Functions
	// Function /Script/OptimusCore.OptimusDeformer.GetVariables
	// TArray<UOptimusVariableDescription*> GetVariables();                                                                  // [0xaa01a10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/OptimusCore.OptimusDeformer.GetResources
	// TArray<UOptimusResourceDescription*> GetResources();                                                                  // [0xaa01994] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/OptimusCore.OptimusDeformer.GetPrimaryComponentBinding
	// class UOptimusComponentSourceBinding* GetPrimaryComponentBinding();                                                   // [0xaa01974] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/OptimusCore.OptimusDeformer.GetComponentBindings
	// TArray<UOptimusComponentSourceBinding*> GetComponentBindings();                                                       // [0xaa01834] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/OptimusCore.OptimusDeformerInstanceComponentBinding
/// Size: 0x0008 (0x000000 - 0x000008)
struct FOptimusDeformerInstanceComponentBinding
{ 
	FName                                              ProviderName;                                               // 0x0000   (0x0004)  
	FName                                              ComponentName;                                              // 0x0004   (0x0004)  
};

/// Class /Script/OptimusCore.OptimusDeformerInstanceSettings
/// Size: 0x0018 (0x000028 - 0x000040)
class UOptimusDeformerInstanceSettings : public UMeshDeformerInstanceSettings
{ 
public:
	SDK_UNDEFINED(8,14167) /* TWeakObjectPtr<UOptimusDeformer*> */ __um(Deformer);                                 // 0x0028   (0x0008)  
	TArray<FOptimusDeformerInstanceComponentBinding>   Bindings;                                                   // 0x0030   (0x0010)  
};

/// Struct /Script/OptimusCore.OptimusDeformerInstanceExecInfo
/// Size: 0x0028 (0x000000 - 0x000028)
struct FOptimusDeformerInstanceExecInfo
{ 
	FName                                              GraphName;                                                  // 0x0000   (0x0004)  
	EOptimusNodeGraphType                              GraphType;                                                  // 0x0004   (0x0004)  
	class UComputeGraph*                               ComputeGraph;                                               // 0x0008   (0x0008)  
	FComputeGraphInstance                              ComputeGraphInstance;                                       // 0x0010   (0x0018)  
};

/// Class /Script/OptimusCore.OptimusDeformerInstance
/// Size: 0x00E0 (0x000028 - 0x000108)
class UOptimusDeformerInstance : public UMeshDeformerInstance
{ 
public:
	SDK_UNDEFINED(8,14168) /* TWeakObjectPtr<UMeshComponent*> */ __um(MeshComponent);                              // 0x0028   (0x0008)  
	SDK_UNDEFINED(8,14169) /* TWeakObjectPtr<UOptimusDeformerInstanceSettings*> */ __um(InstanceSettings);         // 0x0030   (0x0008)  
	TArray<FOptimusDeformerInstanceExecInfo>           ComputeGraphExecInfos;                                      // 0x0038   (0x0010)  
	class UOptimusVariableContainer*                   Variables;                                                  // 0x0048   (0x0008)  
	SDK_UNDEFINED(16,14170) /* TArray<TWeakObjectPtr<UActorComponent*>> */ __um(WeakBoundComponents);              // 0x0050   (0x0010)  
	SDK_UNDEFINED(16,14171) /* TArray<TWeakObjectPtr<UOptimusComponentSource*>> */ __um(WeakComponentSources);     // 0x0060   (0x0010)  
	unsigned char                                      UnknownData00_6[0x98];                                      // 0x0070   (0x0098)  MISSED


	/// Functions
	// Function /Script/OptimusCore.OptimusDeformerInstance.SetVectorVariable
	// bool SetVectorVariable(FName InVariableName, FVector& InValue);                                                       // [0xaa02c38] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/OptimusCore.OptimusDeformerInstance.SetVector4Variable
	// bool SetVector4Variable(FName InVariableName, FVector4& InValue);                                                     // [0xaa02b4c] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/OptimusCore.OptimusDeformerInstance.SetTransformVariable
	// bool SetTransformVariable(FName InVariableName, FTransform& InValue);                                                 // [0xaa029f4] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/OptimusCore.OptimusDeformerInstance.SetIntVariable
	// bool SetIntVariable(FName InVariableName, int32_t InValue);                                                           // [0xaa02920] Final|Native|Public|BlueprintCallable 
	// Function /Script/OptimusCore.OptimusDeformerInstance.SetFloatVariable
	// bool SetFloatVariable(FName InVariableName, double InValue);                                                          // [0xaa027b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/OptimusCore.OptimusDeformerInstance.SetBoolVariable
	// bool SetBoolVariable(FName InVariableName, bool InValue);                                                             // [0xaa026d8] Final|Native|Public|BlueprintCallable 
	// Function /Script/OptimusCore.OptimusDeformerInstance.GetVariables
	// TArray<UOptimusVariableDescription*> GetVariables();                                                                  // [0xaa01a30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/OptimusCore.OptimusDeformerInstance.EnqueueTriggerGraph
	// bool EnqueueTriggerGraph(FName InTriggerGraphName);                                                                   // [0xaa01648] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/OptimusCore.OptimusNodeGraph
/// Size: 0x0068 (0x000028 - 0x000090)
class UOptimusNodeGraph : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x30];                                      // 0x0000   (0x0030)  MISSED
	EOptimusNodeGraphType                              GraphType;                                                  // 0x0030   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0034   (0x0004)  MISSED
	TArray<class UOptimusNode*>                        Nodes;                                                      // 0x0038   (0x0010)  
	TArray<class UOptimusNodeLink*>                    Links;                                                      // 0x0048   (0x0010)  
	TArray<class UOptimusNodePair*>                    NodePairs;                                                  // 0x0058   (0x0010)  
	TArray<class UOptimusNodeGraph*>                   Subgraphs;                                                  // 0x0068   (0x0010)  
	unsigned char                                      UnknownData02_6[0x18];                                      // 0x0078   (0x0018)  MISSED


	/// Functions
	// Function /Script/OptimusCore.OptimusNodeGraph.RenameGraphDirect
	// bool RenameGraphDirect(class UOptimusNodeGraph* InGraph, FString InNewName);                                          // [0xaa02524] Final|Native|Public|BlueprintCallable 
	// Function /Script/OptimusCore.OptimusNodeGraph.RenameGraph
	// bool RenameGraph(class UOptimusNodeGraph* InGraph, FString InNewName);                                                // [0xaa02370] Final|Native|Public|BlueprintCallable 
	// Function /Script/OptimusCore.OptimusNodeGraph.RemoveNodes
	// bool RemoveNodes(TArray<UOptimusNode*>& InNodes);                                                                     // [0xaa021f8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/OptimusCore.OptimusNodeGraph.RemoveNode
	// bool RemoveNode(class UOptimusNode* InNode);                                                                          // [0xaa02134] Final|Native|Public|BlueprintCallable 
	// Function /Script/OptimusCore.OptimusNodeGraph.RemoveLink
	// bool RemoveLink(class UOptimusNodePin* InNodeOutputPin, class UOptimusNodePin* InNodeInputPin);                       // [0xaa02014] Final|Native|Public|BlueprintCallable 
	// Function /Script/OptimusCore.OptimusNodeGraph.RemoveAllLinks
	// bool RemoveAllLinks(class UOptimusNodePin* InNodePin);                                                                // [0xaa01d98] Final|Native|Public|BlueprintCallable 
	// Function /Script/OptimusCore.OptimusNodeGraph.MoveGraphDirect
	// bool MoveGraphDirect(class UOptimusNodeGraph* InGraph, int32_t InInsertBefore);                                       // [0xaa01cd4] Final|Native|Public|BlueprintCallable 
	// Function /Script/OptimusCore.OptimusNodeGraph.IsSubGraphReference
	// bool IsSubGraphReference(class UOptimusNode* InNode);                                                                 // [0xaa01c3c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/OptimusCore.OptimusNodeGraph.IsKernelFunction
	// bool IsKernelFunction(class UOptimusNode* InNode);                                                                    // [0xaa01ba4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/OptimusCore.OptimusNodeGraph.IsFunctionReference
	// bool IsFunctionReference(class UOptimusNode* InNode);                                                                 // [0xaa01b18] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/OptimusCore.OptimusNodeGraph.IsFunctionGraph
	// bool IsFunctionGraph();                                                                                               // [0xaa01b00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/OptimusCore.OptimusNodeGraph.IsExecutionGraph
	// bool IsExecutionGraph();                                                                                              // [0xaa01ae8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/OptimusCore.OptimusNodeGraph.IsCustomKernel
	// bool IsCustomKernel(class UOptimusNode* InNode);                                                                      // [0xaa01a50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/OptimusCore.OptimusNodeGraph.GetGraphType
	// EOptimusNodeGraphType GetGraphType();                                                                                 // [0x66dfad4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/OptimusCore.OptimusNodeGraph.GetGraphs
	// TArray<UOptimusNodeGraph*> GetGraphs();                                                                               // [0xaa018ec] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/OptimusCore.OptimusNodeGraph.GetGraphIndex
	// int32_t GetGraphIndex();                                                                                              // [0xaa018b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/OptimusCore.OptimusNodeGraph.ExpandCollapsedNodes
	// TArray<UOptimusNode*> ExpandCollapsedNodes(class UOptimusNode* InGraphReferenceNode);                                 // [0xaa01720] Final|Native|Public|BlueprintCallable 
	// Function /Script/OptimusCore.OptimusNodeGraph.DuplicateNodes
	// bool DuplicateNodes(TArray<UOptimusNode*>& InNodes, FVector2D& InPosition);                                           // [0xaa01450] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/OptimusCore.OptimusNodeGraph.DuplicateNode
	// class UOptimusNode* DuplicateNode(class UOptimusNode* InNode, FVector2D& InPosition);                                 // [0xaa01290] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/OptimusCore.OptimusNodeGraph.ConvertToSubGraph
	// bool ConvertToSubGraph(class UOptimusNode* InFunctionNode);                                                           // [0xaa01200] Final|Native|Public|BlueprintCallable 
	// Function /Script/OptimusCore.OptimusNodeGraph.ConvertToFunction
	// bool ConvertToFunction(class UOptimusNode* InSubGraphNode);                                                           // [0xaa01170] Final|Native|Public|BlueprintCallable 
	// Function /Script/OptimusCore.OptimusNodeGraph.ConvertFunctionToCustomKernel
	// class UOptimusNode* ConvertFunctionToCustomKernel(class UOptimusNode* InKernelFunction);                              // [0xaa010e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/OptimusCore.OptimusNodeGraph.ConvertCustomKernelToFunction
	// class UOptimusNode* ConvertCustomKernelToFunction(class UOptimusNode* InCustomKernel);                                // [0xaa01050] Final|Native|Public|BlueprintCallable 
	// Function /Script/OptimusCore.OptimusNodeGraph.CollapseNodesToSubGraph
	// class UOptimusNode* CollapseNodesToSubGraph(TArray<UOptimusNode*>& InNodes);                                          // [0xaa00ed4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/OptimusCore.OptimusNodeGraph.CollapseNodesToFunction
	// class UOptimusNode* CollapseNodesToFunction(TArray<UOptimusNode*>& InNodes);                                          // [0xaa00d7c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/OptimusCore.OptimusNodeGraph.AddVariableGetNode
	// class UOptimusNode* AddVariableGetNode(class UOptimusVariableDescription* InVariableDesc, FVector2D& InPosition);     // [0xaa00c58] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/OptimusCore.OptimusNodeGraph.AddValueNode
	// class UOptimusNode* AddValueNode(FOptimusDataTypeRef InDataTypeRef, FVector2D& InPosition);                           // [0xaa00ab0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/OptimusCore.OptimusNodeGraph.AddResourceSetNode
	// class UOptimusNode* AddResourceSetNode(class UOptimusResourceDescription* InResourceDesc, FVector2D& InPosition);     // [0xaa0098c] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/OptimusCore.OptimusNodeGraph.AddResourceNode
	// class UOptimusNode* AddResourceNode(class UOptimusResourceDescription* InResourceDesc, FVector2D& InPosition);        // [0xaa00868] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/OptimusCore.OptimusNodeGraph.AddResourceGetNode
	// class UOptimusNode* AddResourceGetNode(class UOptimusResourceDescription* InResourceDesc, FVector2D& InPosition);     // [0xaa00744] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/OptimusCore.OptimusNodeGraph.AddNode
	// class UOptimusNode* AddNode(class UClass* InNodeClass, FVector2D& InPosition);                                        // [0xaa00640] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/OptimusCore.OptimusNodeGraph.AddLoopTerminalNodes
	// TArray<UOptimusNode*> AddLoopTerminalNodes(FVector2D& InPosition);                                                    // [0xaa00594] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/OptimusCore.OptimusNodeGraph.AddLink
	// bool AddLink(class UOptimusNodePin* InNodeOutputPin, class UOptimusNodePin* InNodeInputPin);                          // [0xaa0029c] Final|Native|Public|BlueprintCallable 
	// Function /Script/OptimusCore.OptimusNodeGraph.AddFunctionReferenceNode
	// class UOptimusNode* AddFunctionReferenceNode(TWeakObjectPtr<UOptimusFunctionNodeGraph*> InFunctionGraph, FVector2D& InPosition); // [0xaa00158] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/OptimusCore.OptimusNodeGraph.AddDataInterfaceNode
	// class UOptimusNode* AddDataInterfaceNode(class UClass* InDataInterfaceClass, FVector2D& InPosition);                  // [0xaa00068] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/OptimusCore.OptimusNodeGraph.AddComponentBindingGetNode
	// class UOptimusNode* AddComponentBindingGetNode(class UOptimusComponentSourceBinding* InComponentBinding, FVector2D& InPosition); // [0xa9fff8c] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/OptimusCore.OptimusNodeSubGraph
/// Size: 0x00C8 (0x000090 - 0x000158)
class UOptimusNodeSubGraph : public UOptimusNodeGraph
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0090   (0x0008)  MISSED
	FOptimusParameterBindingArray                      InputBindings;                                              // 0x0098   (0x0010)  
	FOptimusParameterBindingArray                      OutputBindings;                                             // 0x00A8   (0x0010)  
	SDK_UNDEFINED(8,14172) /* TWeakObjectPtr<UOptimusNode_GraphTerminal*> */ __um(EntryNode);                      // 0x00B8   (0x0008)  
	SDK_UNDEFINED(8,14173) /* TWeakObjectPtr<UOptimusNode_GraphTerminal*> */ __um(ReturnNode);                     // 0x00C0   (0x0008)  
	unsigned char                                      UnknownData01_6[0x90];                                      // 0x00C8   (0x0090)  MISSED
};

/// Class /Script/OptimusCore.OptimusFunctionNodeGraph
/// Size: 0x0008 (0x000158 - 0x000160)
class UOptimusFunctionNodeGraph : public UOptimusNodeSubGraph
{ 
public:
	FName                                              Category;                                                   // 0x0158   (0x0004)  
	FName                                              AccessSpecifier;                                            // 0x015C   (0x0004)  


	/// Functions
	// Function /Script/OptimusCore.OptimusFunctionNodeGraph.GetAccessSpecifierOptions
	// TArray<FName> GetAccessSpecifierOptions();                                                                            // [0xaa017c8] Final|Native|Public|Const 
};

/// Class /Script/OptimusCore.OptimusNodeLink
/// Size: 0x0010 (0x000028 - 0x000038)
class UOptimusNodeLink : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	class UOptimusNodePin*                             NodeOutputPin;                                              // 0x0028   (0x0008)  
	class UOptimusNodePin*                             NodeInputPin;                                               // 0x0030   (0x0008)  
};

/// Class /Script/OptimusCore.OptimusNodePair
/// Size: 0x0010 (0x000028 - 0x000038)
class UOptimusNodePair : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	class UOptimusNode*                                First;                                                      // 0x0028   (0x0008)  
	class UOptimusNode*                                Second;                                                     // 0x0030   (0x0008)  
};

/// Class /Script/OptimusCore.OptimusNodePin
/// Size: 0x0068 (0x000028 - 0x000090)
class UOptimusNodePin : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	bool                                               bIsGroupingPin;                                             // 0x0028   (0x0001)  
	EOptimusNodePinDirection                           Direction;                                                  // 0x0029   (0x0001)  
	EOptimusNodePinStorageType                         StorageType;                                                // 0x002A   (0x0001)  
	unsigned char                                      UnknownData01_5[0x5];                                       // 0x002B   (0x0005)  MISSED
	FOptimusDataDomain                                 DataDomain;                                                 // 0x0030   (0x0040)  
	FOptimusDataTypeRef                                DataType;                                                   // 0x0070   (0x000C)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x007C   (0x0004)  MISSED
	TArray<class UOptimusNodePin*>                     SubPins;                                                    // 0x0080   (0x0010)  
};

/// Class /Script/OptimusCore.OptimusResourceDescription
/// Size: 0x0060 (0x000028 - 0x000088)
class UOptimusResourceDescription : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	FName                                              ResourceName;                                               // 0x0028   (0x0004)  
	FOptimusDataTypeRef                                DataType;                                                   // 0x002C   (0x000C)  
	SDK_UNDEFINED(8,14174) /* TWeakObjectPtr<UOptimusComponentSourceBinding*> */ __um(ComponentBinding);           // 0x0038   (0x0008)  
	FOptimusDataDomain                                 DataDomain;                                                 // 0x0040   (0x0040)  
	class UOptimusPersistentBufferDataInterface*       DataInterface;                                              // 0x0080   (0x0008)  
};

/// Class /Script/OptimusCore.OptimusSource
/// Size: 0x0018 (0x000038 - 0x000050)
class UOptimusSource : public UComputeSource
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0038   (0x0008)  MISSED
	SDK_UNDEFINED(16,14175) /* FString */              __um(SourceText);                                           // 0x0040   (0x0010)  
};

/// Class /Script/OptimusCore.OptimusValueContainerGeneratorClass
/// Size: 0x0010 (0x000200 - 0x000210)
class UOptimusValueContainerGeneratorClass : public UClass
{ 
public:
	FOptimusDataTypeRef                                DataType;                                                   // 0x0200   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x020C   (0x0004)  MISSED
};

/// Class /Script/OptimusCore.OptimusValueContainer
/// Size: 0x0000 (0x000028 - 0x000028)
class UOptimusValueContainer : public UObject
{ 
public:
};

/// Class /Script/OptimusCore.OptimusVariableDescription
/// Size: 0x0038 (0x000028 - 0x000060)
class UOptimusVariableDescription : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	FGuid                                              Guid;                                                       // 0x0028   (0x0010)  
	FName                                              VariableName;                                               // 0x0038   (0x0004)  
	FOptimusDataTypeRef                                DataType;                                                   // 0x003C   (0x000C)  
	class UOptimusValueContainer*                      DefaultValue;                                               // 0x0048   (0x0008)  
	TArray<char>                                       ValueData;                                                  // 0x0050   (0x0010)  
};

/// Struct /Script/OptimusCore.OptimusConstantDefinition
/// Size: 0x0020 (0x000000 - 0x000020)
struct FOptimusConstantDefinition
{ 
	FOptimusConstantIdentifier                         ReferencedConstant;                                         // 0x0000   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	SDK_UNDEFINED(16,14176) /* FString */              __um(Expression);                                           // 0x0010   (0x0010)  
};

/// Struct /Script/OptimusCore.OptimusConstant
/// Size: 0x0038 (0x000000 - 0x000038)
struct FOptimusConstant
{ 
	FOptimusConstantIdentifier                         Identifier;                                                 // 0x0000   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	FOptimusConstantDefinition                         Definition;                                                 // 0x0010   (0x0020)  
	int32_t                                            ComponentBindingIndex;                                      // 0x0030   (0x0004)  
	EOptimusConstantType                               Type;                                                       // 0x0034   (0x0004)  
};

/// Struct /Script/OptimusCore.OptimusConstantIndex
/// Size: 0x000C (0x000000 - 0x00000C)
struct FOptimusConstantIndex
{ 
	int32_t                                            KernelIndex;                                                // 0x0000   (0x0004)  
	EOptimusConstantType                               Type;                                                       // 0x0004   (0x0004)  
	int32_t                                            ConstantIndex;                                              // 0x0008   (0x0004)  
};

/// Struct /Script/OptimusCore.OptimusKernelConstantContainer
/// Size: 0x0070 (0x000000 - 0x000070)
struct FOptimusKernelConstantContainer
{ 
	TArray<FOptimusConstant>                           InputConstants;                                             // 0x0000   (0x0010)  
	TArray<FOptimusConstant>                           OutputConstants;                                            // 0x0010   (0x0010)  
	SDK_UNDEFINED(80,14177) /* TMap<FName, int32_t> */ __um(GroupNameToBindingIndex);                              // 0x0020   (0x0050)  
};

/// Struct /Script/OptimusCore.OptimusConstantContainer
/// Size: 0x0010 (0x000000 - 0x000010)
struct FOptimusConstantContainer
{ 
	TArray<FOptimusKernelConstantContainer>            KernelContainers;                                           // 0x0000   (0x0010)  
};

/// Struct /Script/OptimusCore.OptimusAction
/// Size: 0x0018 (0x000000 - 0x000018)
struct FOptimusAction
{ 
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x0000   (0x0018)  MISSED
};

/// Struct /Script/OptimusCore.OptimusCompoundAction
/// Size: 0x0010 (0x000018 - 0x000028)
struct FOptimusCompoundAction : FOptimusAction
{ 
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0018   (0x0010)  MISSED
};

/// Struct /Script/OptimusCore.OptimusComponentBindingAction_AddBinding
/// Size: 0x0010 (0x000018 - 0x000028)
struct FOptimusComponentBindingAction_AddBinding : FOptimusAction
{ 
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0018   (0x0010)  MISSED
};

/// Struct /Script/OptimusCore.OptimusComponentBindingAction_RemoveBinding
/// Size: 0x0028 (0x000018 - 0x000040)
struct FOptimusComponentBindingAction_RemoveBinding : FOptimusAction
{ 
	unsigned char                                      UnknownData00_1[0x28];                                      // 0x0018   (0x0028)  MISSED
};

/// Struct /Script/OptimusCore.OptimusComponentBindingAction_RenameBinding
/// Size: 0x0008 (0x000018 - 0x000020)
struct FOptimusComponentBindingAction_RenameBinding : FOptimusAction
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0018   (0x0008)  MISSED
};

/// Struct /Script/OptimusCore.OptimusComponentBindingAction_SetComponentSource
/// Size: 0x0018 (0x000018 - 0x000030)
struct FOptimusComponentBindingAction_SetComponentSource : FOptimusAction
{ 
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0018   (0x0018)  MISSED
};

/// Struct /Script/OptimusCore.OptimusNodeAction_RenameNode
/// Size: 0x0040 (0x000018 - 0x000058)
struct FOptimusNodeAction_RenameNode : FOptimusAction
{ 
	unsigned char                                      UnknownData00_1[0x40];                                      // 0x0018   (0x0040)  MISSED
};

/// Struct /Script/OptimusCore.OptimusNodeAction_MoveNode
/// Size: 0x0030 (0x000018 - 0x000048)
struct FOptimusNodeAction_MoveNode : FOptimusAction
{ 
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x0018   (0x0030)  MISSED
};

/// Struct /Script/OptimusCore.OptimusNodeAction_SetPinValue
/// Size: 0x0030 (0x000018 - 0x000048)
struct FOptimusNodeAction_SetPinValue : FOptimusAction
{ 
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x0018   (0x0030)  MISSED
};

/// Struct /Script/OptimusCore.OptimusNodeAction_SetPinName
/// Size: 0x0018 (0x000018 - 0x000030)
struct FOptimusNodeAction_SetPinName : FOptimusAction
{ 
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0018   (0x0018)  MISSED
};

/// Struct /Script/OptimusCore.OptimusNodeAction_SetPinType
/// Size: 0x0018 (0x000018 - 0x000030)
struct FOptimusNodeAction_SetPinType : FOptimusAction
{ 
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0018   (0x0018)  MISSED
};

/// Struct /Script/OptimusCore.OptimusNodeAction_SetPinDataDomain
/// Size: 0x0090 (0x000018 - 0x0000A8)
struct FOptimusNodeAction_SetPinDataDomain : FOptimusAction
{ 
	unsigned char                                      UnknownData00_1[0x90];                                      // 0x0018   (0x0090)  MISSED
};

/// Struct /Script/OptimusCore.OptimusNodeAction_AddRemovePin
/// Size: 0x0098 (0x000018 - 0x0000B0)
struct FOptimusNodeAction_AddRemovePin : FOptimusAction
{ 
	unsigned char                                      UnknownData00_1[0x98];                                      // 0x0018   (0x0098)  MISSED
};

/// Struct /Script/OptimusCore.OptimusNodeAction_AddPin
/// Size: 0x0000 (0x0000B0 - 0x0000B0)
struct FOptimusNodeAction_AddPin : FOptimusNodeAction_AddRemovePin
{ 
};

/// Struct /Script/OptimusCore.OptimusNodeAction_AddGroupingPin
/// Size: 0x0000 (0x0000B0 - 0x0000B0)
struct FOptimusNodeAction_AddGroupingPin : FOptimusNodeAction_AddRemovePin
{ 
};

/// Struct /Script/OptimusCore.OptimusNodeAction_RemovePin
/// Size: 0x0000 (0x0000B0 - 0x0000B0)
struct FOptimusNodeAction_RemovePin : FOptimusNodeAction_AddRemovePin
{ 
};

/// Struct /Script/OptimusCore.OptimusNodeAction_MovePin
/// Size: 0x0030 (0x000018 - 0x000048)
struct FOptimusNodeAction_MovePin : FOptimusAction
{ 
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x0018   (0x0030)  MISSED
};

/// Struct /Script/OptimusCore.OptimusNodeGraphAction_AddGraph
/// Size: 0x0078 (0x000018 - 0x000090)
struct FOptimusNodeGraphAction_AddGraph : FOptimusAction
{ 
	unsigned char                                      UnknownData00_1[0x78];                                      // 0x0018   (0x0078)  MISSED
};

/// Struct /Script/OptimusCore.OptimusNodeGraphAction_RemoveGraph
/// Size: 0x0040 (0x000018 - 0x000058)
struct FOptimusNodeGraphAction_RemoveGraph : FOptimusAction
{ 
	unsigned char                                      UnknownData00_1[0x40];                                      // 0x0018   (0x0040)  MISSED
};

/// Struct /Script/OptimusCore.OptimusNodeGraphAction_RenameGraph
/// Size: 0x0028 (0x000018 - 0x000040)
struct FOptimusNodeGraphAction_RenameGraph : FOptimusAction
{ 
	unsigned char                                      UnknownData00_1[0x28];                                      // 0x0018   (0x0028)  MISSED
};

/// Struct /Script/OptimusCore.OptimusNodeGraphAction_AddNode
/// Size: 0x0088 (0x000018 - 0x0000A0)
struct FOptimusNodeGraphAction_AddNode : FOptimusAction
{ 
	unsigned char                                      UnknownData00_1[0x88];                                      // 0x0018   (0x0088)  MISSED
};

/// Struct /Script/OptimusCore.OptimusNodeGraphAction_DuplicateNode
/// Size: 0x0088 (0x000018 - 0x0000A0)
struct FOptimusNodeGraphAction_DuplicateNode : FOptimusAction
{ 
	unsigned char                                      UnknownData00_1[0x88];                                      // 0x0018   (0x0088)  MISSED
};

/// Struct /Script/OptimusCore.OptimusNodeGraphAction_RemoveNode
/// Size: 0x0048 (0x000018 - 0x000060)
struct FOptimusNodeGraphAction_RemoveNode : FOptimusAction
{ 
	unsigned char                                      UnknownData00_1[0x48];                                      // 0x0018   (0x0048)  MISSED
};

/// Struct /Script/OptimusCore.OptimusNodeGraphAction_AddRemoveNodePair
/// Size: 0x0020 (0x000018 - 0x000038)
struct FOptimusNodeGraphAction_AddRemoveNodePair : FOptimusAction
{ 
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0018   (0x0020)  MISSED
};

/// Struct /Script/OptimusCore.OptimusNodeGraphAction_AddNodePair
/// Size: 0x0020 (0x000038 - 0x000058)
struct FOptimusNodeGraphAction_AddNodePair : FOptimusNodeGraphAction_AddRemoveNodePair
{ 
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0038   (0x0020)  MISSED
};

/// Struct /Script/OptimusCore.OptimusNodeGraphAction_RemoveNodePair
/// Size: 0x0000 (0x000038 - 0x000038)
struct FOptimusNodeGraphAction_RemoveNodePair : FOptimusNodeGraphAction_AddRemoveNodePair
{ 
};

/// Struct /Script/OptimusCore.OptimusNodeGraphAction_AddRemoveLink
/// Size: 0x0028 (0x000018 - 0x000040)
struct FOptimusNodeGraphAction_AddRemoveLink : FOptimusAction
{ 
	unsigned char                                      UnknownData00_1[0x28];                                      // 0x0018   (0x0028)  MISSED
};

/// Struct /Script/OptimusCore.OptimusNodeGraphAction_AddLink
/// Size: 0x0000 (0x000040 - 0x000040)
struct FOptimusNodeGraphAction_AddLink : FOptimusNodeGraphAction_AddRemoveLink
{ 
};

/// Struct /Script/OptimusCore.OptimusNodeGraphAction_RemoveLink
/// Size: 0x0000 (0x000040 - 0x000040)
struct FOptimusNodeGraphAction_RemoveLink : FOptimusNodeGraphAction_AddRemoveLink
{ 
};

/// Struct /Script/OptimusCore.OptimusNodeGraphAction_ConnectAdderPin
/// Size: 0x0060 (0x000040 - 0x0000A0)
struct FOptimusNodeGraphAction_ConnectAdderPin : FOptimusNodeGraphAction_AddRemoveLink
{ 
	unsigned char                                      UnknownData00_1[0x60];                                      // 0x0040   (0x0060)  MISSED
};

/// Struct /Script/OptimusCore.OptimusNodeGraphAction_PackageKernelFunction
/// Size: 0x0090 (0x000018 - 0x0000A8)
struct FOptimusNodeGraphAction_PackageKernelFunction : FOptimusAction
{ 
	unsigned char                                      UnknownData00_1[0x90];                                      // 0x0018   (0x0090)  MISSED
};

/// Struct /Script/OptimusCore.OptimusNodeGraphAction_UnpackageKernelFunction
/// Size: 0x0048 (0x000018 - 0x000060)
struct FOptimusNodeGraphAction_UnpackageKernelFunction : FOptimusAction
{ 
	unsigned char                                      UnknownData00_1[0x48];                                      // 0x0018   (0x0048)  MISSED
};

/// Struct /Script/OptimusCore.OptimusResourceAction_AddResource
/// Size: 0x0050 (0x000018 - 0x000068)
struct FOptimusResourceAction_AddResource : FOptimusAction
{ 
	unsigned char                                      UnknownData00_1[0x50];                                      // 0x0018   (0x0050)  MISSED
};

/// Struct /Script/OptimusCore.OptimusResourceAction_RemoveResource
/// Size: 0x0028 (0x000018 - 0x000040)
struct FOptimusResourceAction_RemoveResource : FOptimusAction
{ 
	unsigned char                                      UnknownData00_1[0x28];                                      // 0x0018   (0x0028)  MISSED
};

/// Struct /Script/OptimusCore.OptimusResourceAction_RenameResource
/// Size: 0x0008 (0x000018 - 0x000020)
struct FOptimusResourceAction_RenameResource : FOptimusAction
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0018   (0x0008)  MISSED
};

/// Struct /Script/OptimusCore.OptimusResourceAction_SetDataType
/// Size: 0x0020 (0x000018 - 0x000038)
struct FOptimusResourceAction_SetDataType : FOptimusAction
{ 
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0018   (0x0020)  MISSED
};

/// Struct /Script/OptimusCore.OptimusResourceAction_SetDataDomain
/// Size: 0x0088 (0x000018 - 0x0000A0)
struct FOptimusResourceAction_SetDataDomain : FOptimusAction
{ 
	unsigned char                                      UnknownData00_1[0x88];                                      // 0x0018   (0x0088)  MISSED
};

/// Struct /Script/OptimusCore.OptimusVariableAction_AddVariable
/// Size: 0x0010 (0x000018 - 0x000028)
struct FOptimusVariableAction_AddVariable : FOptimusAction
{ 
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0018   (0x0010)  MISSED
};

/// Struct /Script/OptimusCore.OptimusVariableAction_RemoveVariable
/// Size: 0x0038 (0x000018 - 0x000050)
struct FOptimusVariableAction_RemoveVariable : FOptimusAction
{ 
	unsigned char                                      UnknownData00_1[0x38];                                      // 0x0018   (0x0038)  MISSED
};

/// Struct /Script/OptimusCore.OptimusVariableAction_RenameVariable
/// Size: 0x0008 (0x000018 - 0x000020)
struct FOptimusVariableAction_RenameVariable : FOptimusAction
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0018   (0x0008)  MISSED
};

/// Struct /Script/OptimusCore.OptimusVariableAction_SetDataType
/// Size: 0x0020 (0x000018 - 0x000038)
struct FOptimusVariableAction_SetDataType : FOptimusAction
{ 
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0018   (0x0020)  MISSED
};

/// Struct /Script/OptimusCore.OptimusDataType
/// Size: 0x0050 (0x000000 - 0x000050)
struct FOptimusDataType
{ 
	FName                                              TypeName;                                                   // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	SDK_UNDEFINED(24,14178) /* FText */                __um(DisplayName);                                          // 0x0008   (0x0018)  
	FShaderValueTypeHandle                             ShaderValueType;                                            // 0x0020   (0x0008)  
	int32_t                                            ShaderValueSize;                                            // 0x0028   (0x0004)  
	FName                                              TypeCategory;                                               // 0x002C   (0x0004)  
	SDK_UNDEFINED(8,14179) /* TWeakObjectPtr<UObject*> */ __um(TypeObject);                                        // 0x0030   (0x0008)  
	bool                                               bHasCustomPinColor;                                         // 0x0038   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0039   (0x0003)  MISSED
	FLinearColor                                       CustomPinColor;                                             // 0x003C   (0x0010)  
	EOptimusDataTypeUsageFlags                         UsageFlags;                                                 // 0x004C   (0x0001)  
	EOptimusDataTypeFlags                              TypeFlags;                                                  // 0x004D   (0x0001)  
	unsigned char                                      UnknownData02_6[0x2];                                       // 0x004E   (0x0002)  MISSED
};

/// Struct /Script/OptimusCore.OptimusFunctionNodeGraphHeader
/// Size: 0x0028 (0x000000 - 0x000028)
struct FOptimusFunctionNodeGraphHeader
{ 
	SDK_UNDEFINED(32,14180) /* TWeakObjectPtr<UOptimusFunctionNodeGraph*> */ __um(GraphPath);                      // 0x0000   (0x0020)  
	FName                                              FunctionName;                                               // 0x0020   (0x0004)  
	FName                                              Category;                                                   // 0x0024   (0x0004)  
};

/// Struct /Script/OptimusCore.OptimusFunctionNodeGraphHeaderArray
/// Size: 0x0010 (0x000000 - 0x000010)
struct FOptimusFunctionNodeGraphHeaderArray
{ 
	TArray<FOptimusFunctionNodeGraphHeader>            Headers;                                                    // 0x0000   (0x0010)  
};

/// Struct /Script/OptimusCore.OptimusFunctionReferenceNodeSet
/// Size: 0x0050 (0x000000 - 0x000050)
struct FOptimusFunctionReferenceNodeSet
{ 
	SDK_UNDEFINED(80,14181) /* TSet<TWeakObjectPtr<UOptimusNode_FunctionReference*>> */ __um(Nodes);               // 0x0000   (0x0050)  
};

/// Struct /Script/OptimusCore.OptimusFunctionReferenceData
/// Size: 0x0050 (0x000000 - 0x000050)
struct FOptimusFunctionReferenceData
{ 
	SDK_UNDEFINED(80,14182) /* TMap<FSoftObjectPath, FOptimusFunctionReferenceNodeSet> */ __um(FunctionReferences); // 0x0000   (0x0050)  
};

/// Struct /Script/OptimusCore.OptimusVariableMetaDataEntry
/// Size: 0x0018 (0x000000 - 0x000018)
struct FOptimusVariableMetaDataEntry
{ 
	FName                                              Key;                                                        // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	SDK_UNDEFINED(16,14183) /* FString */              __um(Value);                                                // 0x0008   (0x0010)  
};

