
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject

/// Class /Script/MetasoundFrontend.MetaSoundDocumentInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UMetaSoundDocumentInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/MetasoundFrontend.MetasoundParameterPack
/// Size: 0x0018 (0x000028 - 0x000040)
class UMetasoundParameterPack : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:


	/// Functions
	// Function /Script/MetasoundFrontend.MetasoundParameterPack.SetTrigger
	// ESetParamResult SetTrigger(FName ParameterName, bool OnlyIfExists);                                                      // [0x80a5648] Final|Native|Public|BlueprintCallable 
	// Function /Script/MetasoundFrontend.MetasoundParameterPack.SetString
	// ESetParamResult SetString(FName ParameterName, FString InValue, bool OnlyIfExists);                                      // [0x80a4ef4] Final|Native|Public|BlueprintCallable 
	// Function /Script/MetasoundFrontend.MetasoundParameterPack.SetInt
	// ESetParamResult SetInt(FName ParameterName, int32_t InValue, bool OnlyIfExists);                                         // [0x80a4d38] Final|Native|Public|BlueprintCallable 
	// Function /Script/MetasoundFrontend.MetasoundParameterPack.SetFloat
	// ESetParamResult SetFloat(FName ParameterName, float InValue, bool OnlyIfExists);                                         // [0x80a4b7c] Final|Native|Public|BlueprintCallable 
	// Function /Script/MetasoundFrontend.MetasoundParameterPack.SetBool
	// ESetParamResult SetBool(FName ParameterName, bool InValue, bool OnlyIfExists);                                           // [0x80a49b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MetasoundFrontend.MetasoundParameterPack.MakeMetasoundParameterPack
	// class UMetasoundParameterPack* MakeMetasoundParameterPack();                                                             // [0x80a4984] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MetasoundFrontend.MetasoundParameterPack.HasTrigger
	// bool HasTrigger(FName ParameterName);                                                                                    // [0x80a48a4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MetasoundFrontend.MetasoundParameterPack.HasString
	// bool HasString(FName ParameterName);                                                                                     // [0x80a47c4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MetasoundFrontend.MetasoundParameterPack.HasInt
	// bool HasInt(FName ParameterName);                                                                                        // [0x80a46e4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MetasoundFrontend.MetasoundParameterPack.HasFloat
	// bool HasFloat(FName ParameterName);                                                                                      // [0x80a4604] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MetasoundFrontend.MetasoundParameterPack.HasBool
	// bool HasBool(FName ParameterName);                                                                                       // [0x80a4524] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MetasoundFrontend.MetasoundParameterPack.GetTrigger
	// bool GetTrigger(FName ParameterName, ESetParamResult& Result);                                                           // [0x80a43f8] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MetasoundFrontend.MetasoundParameterPack.GetString
	// FString GetString(FName ParameterName, ESetParamResult& Result);                                                         // [0x80a42c8] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MetasoundFrontend.MetasoundParameterPack.GetInt
	// int32_t GetInt(FName ParameterName, ESetParamResult& Result);                                                            // [0x80a41b0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MetasoundFrontend.MetasoundParameterPack.GetFloat
	// float GetFloat(FName ParameterName, ESetParamResult& Result);                                                            // [0x80a4094] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MetasoundFrontend.MetasoundParameterPack.GetBool
	// bool GetBool(FName ParameterName, ESetParamResult& Result);                                                              // [0x80a3f7c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/MetasoundFrontend.MetaSoundBuilderDocument
/// Size: 0x01D0 (0x000028 - 0x0001F8)
class UMetaSoundBuilderDocument : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 504;

public:
	SMember(FMetasoundFrontendDocument)                Document                                                    OFFSET(getStruct<T>, {0x30, 448, 0, 0})
	CMember(class UClass*)                             MetaSoundUClass                                             OFFSET(get<T>, {0x1F0, 8, 0, 0})
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendVersionNumber
/// Size: 0x0008 (0x000000 - 0x000008)
class FMetasoundFrontendVersionNumber : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(int32_t)                                   Major                                                       OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   Minor                                                       OFFSET(get<int32_t>, {0x4, 4, 0, 0})
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendVersion
/// Size: 0x000C (0x000000 - 0x00000C)
class FMetasoundFrontendVersion : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FMetasoundFrontendVersionNumber)           Number                                                      OFFSET(getStruct<T>, {0x4, 8, 0, 0})
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendVertex
/// Size: 0x0018 (0x000000 - 0x000018)
class FMetasoundFrontendVertex : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FName)                                     TypeName                                                    OFFSET(getStruct<T>, {0x4, 4, 0, 0})
	SMember(FGuid)                                     VertexID                                                    OFFSET(getStruct<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendVertexHandle
/// Size: 0x0020 (0x000000 - 0x000020)
class FMetasoundFrontendVertexHandle : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FGuid)                                     NodeId                                                      OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FGuid)                                     VertexID                                                    OFFSET(getStruct<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendVertexLiteral
/// Size: 0x0068 (0x000000 - 0x000068)
class FMetasoundFrontendVertexLiteral : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FGuid)                                     VertexID                                                    OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FMetasoundFrontendLiteral)                 Value                                                       OFFSET(getStruct<T>, {0x10, 88, 0, 0})
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendLiteral
/// Size: 0x0058 (0x000000 - 0x000058)
class FMetasoundFrontendLiteral : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(EMetasoundFrontendLiteralType)             Type                                                        OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(int32_t)                                   AsNumDefault                                                OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	CMember(TArray<bool>)                              AsBoolean                                                   OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(TArray<int32_t>)                           AsInteger                                                   OFFSET(get<T>, {0x18, 16, 0, 0})
	CMember(TArray<float>)                             AsFloat                                                     OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(TArray<FString>)                           AsString                                                    OFFSET(get<T>, {0x38, 16, 0, 0})
	CMember(TArray<class UObject*>)                    AsUObject                                                   OFFSET(get<T>, {0x48, 16, 0, 0})
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendVariable
/// Size: 0x00B0 (0x000000 - 0x0000B0)
class FMetasoundFrontendVariable : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FName)                                     TypeName                                                    OFFSET(getStruct<T>, {0x4, 4, 0, 0})
	SMember(FMetasoundFrontendLiteral)                 Literal                                                     OFFSET(getStruct<T>, {0x8, 88, 0, 0})
	SMember(FGuid)                                     ID                                                          OFFSET(getStruct<T>, {0x60, 16, 0, 0})
	SMember(FGuid)                                     VariableNodeID                                              OFFSET(getStruct<T>, {0x70, 16, 0, 0})
	SMember(FGuid)                                     MutatorNodeID                                               OFFSET(getStruct<T>, {0x80, 16, 0, 0})
	CMember(TArray<FGuid>)                             AccessorNodeIDs                                             OFFSET(get<T>, {0x90, 16, 0, 0})
	CMember(TArray<FGuid>)                             DeferredAccessorNodeIDs                                     OFFSET(get<T>, {0xA0, 16, 0, 0})
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendNodeInterface
/// Size: 0x0030 (0x000000 - 0x000030)
class FMetasoundFrontendNodeInterface : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(TArray<FMetasoundFrontendVertex>)          Inputs                                                      OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FMetasoundFrontendVertex>)          Outputs                                                     OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<FMetasoundFrontendVertex>)          Environment                                                 OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendNodeStyleDisplay
/// Size: 0x0001 (0x000000 - 0x000001)
class FMetasoundFrontendNodeStyleDisplay : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendNodeStyle
/// Size: 0x0001 (0x000000 - 0x000001)
class FMetasoundFrontendNodeStyle : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendNode
/// Size: 0x0068 (0x000000 - 0x000068)
class FMetasoundFrontendNode : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FGuid)                                     ID                                                          OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FGuid)                                     ClassID                                                     OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x20, 4, 0, 0})
	SMember(FMetasoundFrontendNodeInterface)           Interface                                                   OFFSET(getStruct<T>, {0x28, 48, 0, 0})
	CMember(TArray<FMetasoundFrontendVertexLiteral>)   InputLiterals                                               OFFSET(get<T>, {0x58, 16, 0, 0})
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendEdge
/// Size: 0x0040 (0x000000 - 0x000040)
class FMetasoundFrontendEdge : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FGuid)                                     FromNodeID                                                  OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FGuid)                                     FromVertexID                                                OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FGuid)                                     ToNodeID                                                    OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	SMember(FGuid)                                     ToVertexID                                                  OFFSET(getStruct<T>, {0x30, 16, 0, 0})
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendEdgeStyleLiteralColorPair
/// Size: 0x0068 (0x000000 - 0x000068)
class FMetasoundFrontendEdgeStyleLiteralColorPair : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FMetasoundFrontendLiteral)                 Value                                                       OFFSET(getStruct<T>, {0x0, 88, 0, 0})
	SMember(FLinearColor)                              Color                                                       OFFSET(getStruct<T>, {0x58, 16, 0, 0})
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendEdgeStyle
/// Size: 0x0028 (0x000000 - 0x000028)
class FMetasoundFrontendEdgeStyle : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FGuid)                                     NodeId                                                      OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FName)                                     OutputName                                                  OFFSET(getStruct<T>, {0x10, 4, 0, 0})
	CMember(TArray<FMetasoundFrontendEdgeStyleLiteralColorPair>) LiteralColorPairs                                 OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendGraphStyle
/// Size: 0x0018 (0x000000 - 0x000018)
class FMetasoundFrontendGraphStyle : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(bool)                                      bIsGraphEditable                                            OFFSET(get<bool>, {0x0, 1, 0, 0})
	CMember(TArray<FMetasoundFrontendEdgeStyle>)       EdgeStyles                                                  OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendGraph
/// Size: 0x0030 (0x000000 - 0x000030)
class FMetasoundFrontendGraph : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(TArray<FMetasoundFrontendNode>)            Nodes                                                       OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FMetasoundFrontendEdge>)            Edges                                                       OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<FMetasoundFrontendVariable>)        Variables                                                   OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendVertexMetadata
/// Size: 0x0001 (0x000000 - 0x000001)
class FMetasoundFrontendVertexMetadata : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendClassVertex
/// Size: 0x0014 (0x000018 - 0x00002C)
class FMetasoundFrontendClassVertex : public FMetasoundFrontendVertex
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 44;

public:
	SMember(FGuid)                                     NodeId                                                      OFFSET(getStruct<T>, {0x18, 16, 0, 0})
	CMember(EMetasoundFrontendVertexAccessType)        AccessType                                                  OFFSET(get<T>, {0x28, 4, 0, 0})
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendClassStyleDisplay
/// Size: 0x0001 (0x000000 - 0x000001)
class FMetasoundFrontendClassStyleDisplay : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendClassInput
/// Size: 0x005C (0x00002C - 0x000088)
class FMetasoundFrontendClassInput : public FMetasoundFrontendClassVertex
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FMetasoundFrontendLiteral)                 DefaultLiteral                                              OFFSET(getStruct<T>, {0x30, 88, 0, 0})
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendClassVariable
/// Size: 0x005C (0x00002C - 0x000088)
class FMetasoundFrontendClassVariable : public FMetasoundFrontendClassVertex
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FMetasoundFrontendLiteral)                 DefaultLiteral                                              OFFSET(getStruct<T>, {0x30, 88, 0, 0})
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendClassOutput
/// Size: 0x0000 (0x00002C - 0x00002C)
class FMetasoundFrontendClassOutput : public FMetasoundFrontendClassVertex
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 44;

public:
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendClassEnvironmentVariable
/// Size: 0x000C (0x000000 - 0x00000C)
class FMetasoundFrontendClassEnvironmentVariable : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FName)                                     TypeName                                                    OFFSET(getStruct<T>, {0x4, 4, 0, 0})
	DMember(bool)                                      bIsRequired                                                 OFFSET(get<bool>, {0x8, 1, 0, 0})
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendInterfaceStyle
/// Size: 0x0001 (0x000000 - 0x000001)
class FMetasoundFrontendInterfaceStyle : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendClassInterface
/// Size: 0x0040 (0x000000 - 0x000040)
class FMetasoundFrontendClassInterface : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(TArray<FMetasoundFrontendClassInput>)      Inputs                                                      OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FMetasoundFrontendClassOutput>)     Outputs                                                     OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<FMetasoundFrontendClassEnvironmentVariable>) Environment                                        OFFSET(get<T>, {0x20, 16, 0, 0})
	SMember(FGuid)                                     ChangeID                                                    OFFSET(getStruct<T>, {0x30, 16, 0, 0})
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendInterfaceVertexBinding
/// Size: 0x0008 (0x000000 - 0x000008)
class FMetasoundFrontendInterfaceVertexBinding : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FName)                                     OutputName                                                  OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FName)                                     InputName                                                   OFFSET(getStruct<T>, {0x4, 4, 0, 0})
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendInterfaceBinding
/// Size: 0x0030 (0x000000 - 0x000030)
class FMetasoundFrontendInterfaceBinding : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FMetasoundFrontendVersion)                 OutputInterfaceVersion                                      OFFSET(getStruct<T>, {0x0, 12, 0, 0})
	SMember(FMetasoundFrontendVersion)                 InputInterfaceVersion                                       OFFSET(getStruct<T>, {0xC, 12, 0, 0})
	DMember(int32_t)                                   BindingPriority                                             OFFSET(get<int32_t>, {0x18, 4, 0, 0})
	CMember(TArray<FMetasoundFrontendInterfaceVertexBinding>) VertexBindings                                       OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendInterfaceUClassOptions
/// Size: 0x000C (0x000000 - 0x00000C)
class FMetasoundFrontendInterfaceUClassOptions : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	SMember(FTopLevelAssetPath)                        ClassPath                                                   OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	DMember(bool)                                      bIsModifiable                                               OFFSET(get<bool>, {0x8, 1, 0, 0})
	DMember(bool)                                      bIsDefault                                                  OFFSET(get<bool>, {0x9, 1, 0, 0})
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendInterface
/// Size: 0x0020 (0x000040 - 0x000060)
class FMetasoundFrontendInterface : public FMetasoundFrontendClassInterface
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FMetasoundFrontendVersion)                 Version                                                     OFFSET(getStruct<T>, {0x40, 12, 0, 0})
	CMember(TArray<FMetasoundFrontendInterfaceUClassOptions>) UClassOptions                                        OFFSET(get<T>, {0x50, 16, 0, 0})
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendClassName
/// Size: 0x000C (0x000000 - 0x00000C)
class FMetasoundFrontendClassName : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	SMember(FName)                                     NameSpace                                                   OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x4, 4, 0, 0})
	SMember(FName)                                     Variant                                                     OFFSET(getStruct<T>, {0x8, 4, 0, 0})
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendClassMetadata
/// Size: 0x0028 (0x000000 - 0x000028)
class FMetasoundFrontendClassMetadata : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FMetasoundFrontendClassName)               ClassName                                                   OFFSET(getStruct<T>, {0x0, 12, 0, 0})
	SMember(FMetasoundFrontendVersionNumber)           Version                                                     OFFSET(getStruct<T>, {0xC, 8, 0, 0})
	CMember(EMetasoundFrontendClassType)               Type                                                        OFFSET(get<T>, {0x14, 1, 0, 0})
	DMember(bool)                                      bIsDeprecated                                               OFFSET(get<bool>, {0x15, 1, 0, 0})
	DMember(bool)                                      bAutoUpdateManagesInterface                                 OFFSET(get<bool>, {0x16, 1, 0, 0})
	SMember(FGuid)                                     ChangeID                                                    OFFSET(getStruct<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendClassStyle
/// Size: 0x0001 (0x000000 - 0x000001)
class FMetasoundFrontendClassStyle : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendClass
/// Size: 0x0080 (0x000000 - 0x000080)
class FMetasoundFrontendClass : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FGuid)                                     ID                                                          OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	SMember(FMetasoundFrontendClassMetadata)           MetaData                                                    OFFSET(getStruct<T>, {0x18, 40, 0, 0})
	SMember(FMetasoundFrontendClassInterface)          Interface                                                   OFFSET(getStruct<T>, {0x40, 64, 0, 0})
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendGraphClassPresetOptions
/// Size: 0x0058 (0x000000 - 0x000058)
class FMetasoundFrontendGraphClassPresetOptions : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	DMember(bool)                                      bIsPreset                                                   OFFSET(get<bool>, {0x0, 1, 0, 0})
	CMember(TSet<FName>)                               InputsInheritingDefault                                     OFFSET(get<T>, {0x8, 80, 0, 0})
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendGraphClass
/// Size: 0x0088 (0x000080 - 0x000108)
class FMetasoundFrontendGraphClass : public FMetasoundFrontendClass
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:
	SMember(FMetasoundFrontendGraph)                   Graph                                                       OFFSET(getStruct<T>, {0x80, 48, 0, 0})
	SMember(FMetasoundFrontendGraphClassPresetOptions) PresetOptions                                               OFFSET(getStruct<T>, {0xB0, 88, 0, 0})
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendDocumentMetadata
/// Size: 0x000C (0x000000 - 0x00000C)
class FMetasoundFrontendDocumentMetadata : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	SMember(FMetasoundFrontendVersion)                 Version                                                     OFFSET(getStruct<T>, {0x0, 12, 0, 0})
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendDocument
/// Size: 0x01C0 (0x000000 - 0x0001C0)
class FMetasoundFrontendDocument : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 448;

public:
	SMember(FMetasoundFrontendDocumentMetadata)        MetaData                                                    OFFSET(getStruct<T>, {0x10, 12, 0, 0})
	CMember(TSet<FMetasoundFrontendVersion>)           Interfaces                                                  OFFSET(get<T>, {0x20, 80, 0, 0})
	SMember(FMetasoundFrontendGraphClass)              RootGraph                                                   OFFSET(getStruct<T>, {0x70, 264, 0, 0})
	CMember(TArray<FMetasoundFrontendGraphClass>)      Subgraphs                                                   OFFSET(get<T>, {0x178, 16, 0, 0})
	CMember(TArray<FMetasoundFrontendClass>)           Dependencies                                                OFFSET(get<T>, {0x188, 16, 0, 0})
	SMember(FMetasoundFrontendVersion)                 ArchetypeVersion                                            OFFSET(getStruct<T>, {0x198, 12, 0, 0})
	CMember(TArray<FMetasoundFrontendVersion>)         InterfaceVersions                                           OFFSET(get<T>, {0x1A8, 16, 0, 0})
};

/// Struct /Script/MetasoundFrontend.MetaSoundFrontendDocumentBuilder
/// Size: 0x0038 (0x000000 - 0x000038)
class FMetaSoundFrontendDocumentBuilder : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TScriptInterface<Class>)                   DocumentInterface                                           OFFSET(get<T>, {0x8, 16, 0, 0})
};

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

