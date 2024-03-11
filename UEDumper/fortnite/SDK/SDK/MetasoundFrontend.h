
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject

/// Enum /Script/MetasoundFrontend.ESetParamResult
/// Size: 0x03
enum class ESetParamResult : uint8_t
{
	ESetParamResult__Succeeded                                                       = 0,
	ESetParamResult__Failed                                                          = 1,
	ESetParamResult__ESetParamResult_MAX                                             = 2
};

/// Enum /Script/MetasoundFrontend.EMetasoundFrontendVertexAccessType
/// Size: 0x04
enum class EMetasoundFrontendVertexAccessType : uint32_t
{
	EMetasoundFrontendVertexAccessType__Reference                                    = 0,
	EMetasoundFrontendVertexAccessType__Value                                        = 1,
	EMetasoundFrontendVertexAccessType__Unset                                        = 2,
	EMetasoundFrontendVertexAccessType__EMetasoundFrontendVertexAccessType_MAX       = 3
};

/// Enum /Script/MetasoundFrontend.EMetasoundFrontendClassType
/// Size: 0x12
enum class EMetasoundFrontendClassType : uint8_t
{
	EMetasoundFrontendClassType__External                                            = 0,
	EMetasoundFrontendClassType__Graph                                               = 1,
	EMetasoundFrontendClassType__Input                                               = 2,
	EMetasoundFrontendClassType__Output                                              = 3,
	EMetasoundFrontendClassType__Literal                                             = 4,
	EMetasoundFrontendClassType__Variable                                            = 5,
	EMetasoundFrontendClassType__VariableDeferredAccessor                            = 6,
	EMetasoundFrontendClassType__VariableAccessor                                    = 7,
	EMetasoundFrontendClassType__VariableMutator                                     = 8,
	EMetasoundFrontendClassType__Template                                            = 9,
	EMetasoundFrontendClassType__Invalid                                             = 10,
	EMetasoundFrontendClassType__EMetasoundFrontendClassType_MAX                     = 11
};

/// Enum /Script/MetasoundFrontend.EMetasoundFrontendNodeStyleDisplayVisibility
/// Size: 0x03
enum class EMetasoundFrontendNodeStyleDisplayVisibility : uint8_t
{
	EMetasoundFrontendNodeStyleDisplayVisibility__Visible                            = 0,
	EMetasoundFrontendNodeStyleDisplayVisibility__Hidden                             = 1,
	EMetasoundFrontendNodeStyleDisplayVisibility__EMetasoundFrontendNodeStyleDisplayVisibility_MAX = 2
};

/// Enum /Script/MetasoundFrontend.EMetasoundFrontendLiteralType
/// Size: 0x14
enum class EMetasoundFrontendLiteralType : uint8_t
{
	EMetasoundFrontendLiteralType__None                                              = 0,
	EMetasoundFrontendLiteralType__Boolean                                           = 1,
	EMetasoundFrontendLiteralType__Integer                                           = 2,
	EMetasoundFrontendLiteralType__Float                                             = 3,
	EMetasoundFrontendLiteralType__String                                            = 4,
	EMetasoundFrontendLiteralType__UObject                                           = 5,
	EMetasoundFrontendLiteralType__NoneArray                                         = 6,
	EMetasoundFrontendLiteralType__BooleanArray                                      = 7,
	EMetasoundFrontendLiteralType__IntegerArray                                      = 8,
	EMetasoundFrontendLiteralType__FloatArray                                        = 9,
	EMetasoundFrontendLiteralType__StringArray                                       = 10,
	EMetasoundFrontendLiteralType__UObjectArray                                      = 11,
	EMetasoundFrontendLiteralType__Invalid                                           = 12,
	EMetasoundFrontendLiteralType__EMetasoundFrontendLiteralType_MAX                 = 13
};

/// Class /Script/MetasoundFrontend.MetaSoundDocumentInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UMetaSoundDocumentInterface : public UInterface
{ 
public:
};

/// Class /Script/MetasoundFrontend.MetasoundParameterPack
/// Size: 0x0018 (0x000028 - 0x000040)
class UMetasoundParameterPack : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x40];                                      // 0x0000   (0x0040)  MISSED


	/// Functions
	// Function /Script/MetasoundFrontend.MetasoundParameterPack.SetTrigger
	// ESetParamResult SetTrigger(FName ParameterName, bool OnlyIfExists);                                                   // [0x7ad5c10] Final|Native|Public|BlueprintCallable 
	// Function /Script/MetasoundFrontend.MetasoundParameterPack.SetString
	// ESetParamResult SetString(FName ParameterName, FString InValue, bool OnlyIfExists);                                   // [0x7ad5a28] Final|Native|Public|BlueprintCallable 
	// Function /Script/MetasoundFrontend.MetasoundParameterPack.SetInt
	// ESetParamResult SetInt(FName ParameterName, int32_t InValue, bool OnlyIfExists);                                      // [0x7ad592c] Final|Native|Public|BlueprintCallable 
	// Function /Script/MetasoundFrontend.MetasoundParameterPack.SetFloat
	// ESetParamResult SetFloat(FName ParameterName, float InValue, bool OnlyIfExists);                                      // [0x7ad5830] Final|Native|Public|BlueprintCallable 
	// Function /Script/MetasoundFrontend.MetasoundParameterPack.SetBool
	// ESetParamResult SetBool(FName ParameterName, bool InValue, bool OnlyIfExists);                                        // [0x7ad5724] Final|Native|Public|BlueprintCallable 
	// Function /Script/MetasoundFrontend.MetasoundParameterPack.MakeMetasoundParameterPack
	// class UMetasoundParameterPack* MakeMetasoundParameterPack();                                                          // [0x7ad56f8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MetasoundFrontend.MetasoundParameterPack.HasTrigger
	// bool HasTrigger(FName ParameterName);                                                                                 // [0x7ad565c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MetasoundFrontend.MetasoundParameterPack.HasString
	// bool HasString(FName ParameterName);                                                                                  // [0x7ad55c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MetasoundFrontend.MetasoundParameterPack.HasInt
	// bool HasInt(FName ParameterName);                                                                                     // [0x7ad5524] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MetasoundFrontend.MetasoundParameterPack.HasFloat
	// bool HasFloat(FName ParameterName);                                                                                   // [0x7ad5488] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MetasoundFrontend.MetasoundParameterPack.HasBool
	// bool HasBool(FName ParameterName);                                                                                    // [0x7ad53ec] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MetasoundFrontend.MetasoundParameterPack.GetTrigger
	// bool GetTrigger(FName ParameterName, ESetParamResult& Result);                                                        // [0x7ad52fc] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MetasoundFrontend.MetasoundParameterPack.GetString
	// FString GetString(FName ParameterName, ESetParamResult& Result);                                                      // [0x7ad5204] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MetasoundFrontend.MetasoundParameterPack.GetInt
	// int32_t GetInt(FName ParameterName, ESetParamResult& Result);                                                         // [0x7ad5138] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MetasoundFrontend.MetasoundParameterPack.GetFloat
	// float GetFloat(FName ParameterName, ESetParamResult& Result);                                                         // [0x7ad5068] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MetasoundFrontend.MetasoundParameterPack.GetBool
	// bool GetBool(FName ParameterName, ESetParamResult& Result);                                                           // [0x7ad4f9c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendVersionNumber
/// Size: 0x0008 (0x000000 - 0x000008)
struct FMetasoundFrontendVersionNumber
{ 
	int32_t                                            Major;                                                      // 0x0000   (0x0004)  
	int32_t                                            Minor;                                                      // 0x0004   (0x0004)  
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendVersion
/// Size: 0x000C (0x000000 - 0x00000C)
struct FMetasoundFrontendVersion
{ 
	FName                                              Name;                                                       // 0x0000   (0x0004)  
	FMetasoundFrontendVersionNumber                    Number;                                                     // 0x0004   (0x0008)  
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendDocumentMetadata
/// Size: 0x000C (0x000000 - 0x00000C)
struct FMetasoundFrontendDocumentMetadata
{ 
	FMetasoundFrontendVersion                          Version;                                                    // 0x0000   (0x000C)  
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendClassName
/// Size: 0x000C (0x000000 - 0x00000C)
struct FMetasoundFrontendClassName
{ 
	FName                                              NameSpace;                                                  // 0x0000   (0x0004)  
	FName                                              Name;                                                       // 0x0004   (0x0004)  
	FName                                              Variant;                                                    // 0x0008   (0x0004)  
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendClassMetadata
/// Size: 0x0028 (0x000000 - 0x000028)
struct FMetasoundFrontendClassMetadata
{ 
	FMetasoundFrontendClassName                        ClassName;                                                  // 0x0000   (0x000C)  
	FMetasoundFrontendVersionNumber                    Version;                                                    // 0x000C   (0x0008)  
	EMetasoundFrontendClassType                        Type;                                                       // 0x0014   (0x0001)  
	bool                                               bIsDeprecated;                                              // 0x0015   (0x0001)  
	bool                                               bAutoUpdateManagesInterface;                                // 0x0016   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x0017   (0x0001)  MISSED
	FGuid                                              ChangeID;                                                   // 0x0018   (0x0010)  
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendVertex
/// Size: 0x0018 (0x000000 - 0x000018)
struct FMetasoundFrontendVertex
{ 
	FName                                              Name;                                                       // 0x0000   (0x0004)  
	FName                                              TypeName;                                                   // 0x0004   (0x0004)  
	FGuid                                              VertexID;                                                   // 0x0008   (0x0010)  
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendClassVertex
/// Size: 0x0014 (0x000018 - 0x00002C)
struct FMetasoundFrontendClassVertex : FMetasoundFrontendVertex
{ 
	FGuid                                              NodeId;                                                     // 0x0018   (0x0010)  
	EMetasoundFrontendVertexAccessType                 AccessType;                                                 // 0x0028   (0x0004)  
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendLiteral
/// Size: 0x0058 (0x000000 - 0x000058)
struct FMetasoundFrontendLiteral
{ 
	EMetasoundFrontendLiteralType                      Type;                                                       // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	int32_t                                            AsNumDefault;                                               // 0x0004   (0x0004)  
	TArray<bool>                                       AsBoolean;                                                  // 0x0008   (0x0010)  
	TArray<int32_t>                                    AsInteger;                                                  // 0x0018   (0x0010)  
	TArray<float>                                      AsFloat;                                                    // 0x0028   (0x0010)  
	SDK_UNDEFINED(16,2608) /* TArray<FString> */       __um(AsString);                                             // 0x0038   (0x0010)  
	TArray<class UObject*>                             AsUObject;                                                  // 0x0048   (0x0010)  
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendClassInput
/// Size: 0x005C (0x00002C - 0x000088)
struct FMetasoundFrontendClassInput : FMetasoundFrontendClassVertex
{ 
	unsigned char                                      UnknownData00_3[0x4];                                       // 0x002C   (0x0004)  MISSED
	FMetasoundFrontendLiteral                          DefaultLiteral;                                             // 0x0030   (0x0058)  
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendClassOutput
/// Size: 0x0000 (0x00002C - 0x00002C)
struct FMetasoundFrontendClassOutput : FMetasoundFrontendClassVertex
{ 
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendClassEnvironmentVariable
/// Size: 0x000C (0x000000 - 0x00000C)
struct FMetasoundFrontendClassEnvironmentVariable
{ 
	FName                                              Name;                                                       // 0x0000   (0x0004)  
	FName                                              TypeName;                                                   // 0x0004   (0x0004)  
	bool                                               bIsRequired;                                                // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0009   (0x0003)  MISSED
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendClassInterface
/// Size: 0x0040 (0x000000 - 0x000040)
struct FMetasoundFrontendClassInterface
{ 
	TArray<FMetasoundFrontendClassInput>               Inputs;                                                     // 0x0000   (0x0010)  
	TArray<FMetasoundFrontendClassOutput>              Outputs;                                                    // 0x0010   (0x0010)  
	TArray<FMetasoundFrontendClassEnvironmentVariable> Environment;                                                // 0x0020   (0x0010)  
	FGuid                                              ChangeID;                                                   // 0x0030   (0x0010)  
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendClass
/// Size: 0x0080 (0x000000 - 0x000080)
struct FMetasoundFrontendClass
{ 
	FGuid                                              ID;                                                         // 0x0008   (0x0010)  
	FMetasoundFrontendClassMetadata                    MetaData;                                                   // 0x0018   (0x0028)  
	FMetasoundFrontendClassInterface                   Interface;                                                  // 0x0040   (0x0040)  
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendNodeInterface
/// Size: 0x0030 (0x000000 - 0x000030)
struct FMetasoundFrontendNodeInterface
{ 
	TArray<FMetasoundFrontendVertex>                   Inputs;                                                     // 0x0000   (0x0010)  
	TArray<FMetasoundFrontendVertex>                   Outputs;                                                    // 0x0010   (0x0010)  
	TArray<FMetasoundFrontendVertex>                   Environment;                                                // 0x0020   (0x0010)  
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendVertexLiteral
/// Size: 0x0068 (0x000000 - 0x000068)
struct FMetasoundFrontendVertexLiteral
{ 
	FGuid                                              VertexID;                                                   // 0x0000   (0x0010)  
	FMetasoundFrontendLiteral                          Value;                                                      // 0x0010   (0x0058)  
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendNode
/// Size: 0x0068 (0x000000 - 0x000068)
struct FMetasoundFrontendNode
{ 
	FGuid                                              ID;                                                         // 0x0000   (0x0010)  
	FGuid                                              ClassID;                                                    // 0x0010   (0x0010)  
	FName                                              Name;                                                       // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0024   (0x0004)  MISSED
	FMetasoundFrontendNodeInterface                    Interface;                                                  // 0x0028   (0x0030)  
	TArray<FMetasoundFrontendVertexLiteral>            InputLiterals;                                              // 0x0058   (0x0010)  
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendEdge
/// Size: 0x0040 (0x000000 - 0x000040)
struct FMetasoundFrontendEdge
{ 
	FGuid                                              FromNodeID;                                                 // 0x0000   (0x0010)  
	FGuid                                              FromVertexID;                                               // 0x0010   (0x0010)  
	FGuid                                              ToNodeID;                                                   // 0x0020   (0x0010)  
	FGuid                                              ToVertexID;                                                 // 0x0030   (0x0010)  
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendVariable
/// Size: 0x00B0 (0x000000 - 0x0000B0)
struct FMetasoundFrontendVariable
{ 
	FName                                              Name;                                                       // 0x0000   (0x0004)  
	FName                                              TypeName;                                                   // 0x0004   (0x0004)  
	FMetasoundFrontendLiteral                          Literal;                                                    // 0x0008   (0x0058)  
	FGuid                                              ID;                                                         // 0x0060   (0x0010)  
	FGuid                                              VariableNodeID;                                             // 0x0070   (0x0010)  
	FGuid                                              MutatorNodeID;                                              // 0x0080   (0x0010)  
	TArray<FGuid>                                      AccessorNodeIDs;                                            // 0x0090   (0x0010)  
	TArray<FGuid>                                      DeferredAccessorNodeIDs;                                    // 0x00A0   (0x0010)  
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendGraph
/// Size: 0x0030 (0x000000 - 0x000030)
struct FMetasoundFrontendGraph
{ 
	TArray<FMetasoundFrontendNode>                     Nodes;                                                      // 0x0000   (0x0010)  
	TArray<FMetasoundFrontendEdge>                     Edges;                                                      // 0x0010   (0x0010)  
	TArray<FMetasoundFrontendVariable>                 Variables;                                                  // 0x0020   (0x0010)  
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendGraphClassPresetOptions
/// Size: 0x0058 (0x000000 - 0x000058)
struct FMetasoundFrontendGraphClassPresetOptions
{ 
	bool                                               bIsPreset;                                                  // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	SDK_UNDEFINED(80,2609) /* TSet<FName> */           __um(InputsInheritingDefault);                              // 0x0008   (0x0050)  
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendGraphClass
/// Size: 0x0088 (0x000080 - 0x000108)
struct FMetasoundFrontendGraphClass : FMetasoundFrontendClass
{ 
	FMetasoundFrontendGraph                            Graph;                                                      // 0x0080   (0x0030)  
	FMetasoundFrontendGraphClassPresetOptions          PresetOptions;                                              // 0x00B0   (0x0058)  
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendDocument
/// Size: 0x01C0 (0x000000 - 0x0001C0)
struct FMetasoundFrontendDocument
{ 
	FMetasoundFrontendDocumentMetadata                 MetaData;                                                   // 0x0010   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x001C   (0x0004)  MISSED
	SDK_UNDEFINED(80,2610) /* TSet<FMetasoundFrontendVersion> */ __um(Interfaces);                                 // 0x0020   (0x0050)  
	FMetasoundFrontendGraphClass                       RootGraph;                                                  // 0x0070   (0x0108)  
	TArray<FMetasoundFrontendGraphClass>               Subgraphs;                                                  // 0x0178   (0x0010)  
	TArray<FMetasoundFrontendClass>                    Dependencies;                                               // 0x0188   (0x0010)  
	FMetasoundFrontendVersion                          ArchetypeVersion;                                           // 0x0198   (0x000C)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x01A4   (0x0004)  MISSED
	TArray<FMetasoundFrontendVersion>                  InterfaceVersions;                                          // 0x01A8   (0x0010)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x01B8   (0x0008)  MISSED
};

/// Class /Script/MetasoundFrontend.MetaSoundBuilderDocument
/// Size: 0x01D0 (0x000028 - 0x0001F8)
class UMetaSoundBuilderDocument : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x30];                                      // 0x0000   (0x0030)  MISSED
	FMetasoundFrontendDocument                         Document;                                                   // 0x0030   (0x01C0)  
	class UClass*                                      MetaSoundUClass;                                            // 0x01F0   (0x0008)  
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendVertexHandle
/// Size: 0x0020 (0x000000 - 0x000020)
struct FMetasoundFrontendVertexHandle
{ 
	FGuid                                              NodeId;                                                     // 0x0000   (0x0010)  
	FGuid                                              VertexID;                                                   // 0x0010   (0x0010)  
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendNodeStyleDisplay
/// Size: 0x0001 (0x000000 - 0x000001)
struct FMetasoundFrontendNodeStyleDisplay
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendNodeStyle
/// Size: 0x0001 (0x000000 - 0x000001)
struct FMetasoundFrontendNodeStyle
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendEdgeStyleLiteralColorPair
/// Size: 0x0068 (0x000000 - 0x000068)
struct FMetasoundFrontendEdgeStyleLiteralColorPair
{ 
	FMetasoundFrontendLiteral                          Value;                                                      // 0x0000   (0x0058)  
	FLinearColor                                       Color;                                                      // 0x0058   (0x0010)  
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendEdgeStyle
/// Size: 0x0028 (0x000000 - 0x000028)
struct FMetasoundFrontendEdgeStyle
{ 
	FGuid                                              NodeId;                                                     // 0x0000   (0x0010)  
	FName                                              OutputName;                                                 // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0014   (0x0004)  MISSED
	TArray<FMetasoundFrontendEdgeStyleLiteralColorPair> LiteralColorPairs;                                         // 0x0018   (0x0010)  
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendGraphStyle
/// Size: 0x0018 (0x000000 - 0x000018)
struct FMetasoundFrontendGraphStyle
{ 
	bool                                               bIsGraphEditable;                                           // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	TArray<FMetasoundFrontendEdgeStyle>                EdgeStyles;                                                 // 0x0008   (0x0010)  
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendVertexMetadata
/// Size: 0x0001 (0x000000 - 0x000001)
struct FMetasoundFrontendVertexMetadata
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendClassStyleDisplay
/// Size: 0x0001 (0x000000 - 0x000001)
struct FMetasoundFrontendClassStyleDisplay
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendClassVariable
/// Size: 0x005C (0x00002C - 0x000088)
struct FMetasoundFrontendClassVariable : FMetasoundFrontendClassVertex
{ 
	unsigned char                                      UnknownData00_3[0x4];                                       // 0x002C   (0x0004)  MISSED
	FMetasoundFrontendLiteral                          DefaultLiteral;                                             // 0x0030   (0x0058)  
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendInterfaceStyle
/// Size: 0x0001 (0x000000 - 0x000001)
struct FMetasoundFrontendInterfaceStyle
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendInterfaceVertexBinding
/// Size: 0x0008 (0x000000 - 0x000008)
struct FMetasoundFrontendInterfaceVertexBinding
{ 
	FName                                              OutputName;                                                 // 0x0000   (0x0004)  
	FName                                              InputName;                                                  // 0x0004   (0x0004)  
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendInterfaceBinding
/// Size: 0x0030 (0x000000 - 0x000030)
struct FMetasoundFrontendInterfaceBinding
{ 
	FMetasoundFrontendVersion                          OutputInterfaceVersion;                                     // 0x0000   (0x000C)  
	FMetasoundFrontendVersion                          InputInterfaceVersion;                                      // 0x000C   (0x000C)  
	int32_t                                            BindingPriority;                                            // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x001C   (0x0004)  MISSED
	TArray<FMetasoundFrontendInterfaceVertexBinding>   VertexBindings;                                             // 0x0020   (0x0010)  
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendInterfaceUClassOptions
/// Size: 0x000C (0x000000 - 0x00000C)
struct FMetasoundFrontendInterfaceUClassOptions
{ 
	FTopLevelAssetPath                                 ClassPath;                                                  // 0x0000   (0x0008)  
	bool                                               bIsModifiable;                                              // 0x0008   (0x0001)  
	bool                                               bIsDefault;                                                 // 0x0009   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x000A   (0x0002)  MISSED
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendInterface
/// Size: 0x0020 (0x000040 - 0x000060)
struct FMetasoundFrontendInterface : FMetasoundFrontendClassInterface
{ 
	FMetasoundFrontendVersion                          Version;                                                    // 0x0040   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x004C   (0x0004)  MISSED
	TArray<FMetasoundFrontendInterfaceUClassOptions>   UClassOptions;                                              // 0x0050   (0x0010)  
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendClassStyle
/// Size: 0x0001 (0x000000 - 0x000001)
struct FMetasoundFrontendClassStyle
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/MetasoundFrontend.MetaSoundFrontendDocumentBuilder
/// Size: 0x0038 (0x000000 - 0x000038)
struct FMetaSoundFrontendDocumentBuilder
{ 
	SDK_UNDEFINED(16,2611) /* TScriptInterface<Class> */ __um(DocumentInterface);                                  // 0x0008   (0x0010)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x0018   (0x0020)  MISSED
};

