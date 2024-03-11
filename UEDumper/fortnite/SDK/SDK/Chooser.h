
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: BlendStack
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: GameplayTags
/// dependency: StructUtils

/// Enum /Script/Chooser.EBoolColumnCellValue
/// Size: 0x04
enum class EBoolColumnCellValue : uint8_t
{
	EBoolColumnCellValue__MatchFalse                                                 = 0,
	EBoolColumnCellValue__MatchTrue                                                  = 1,
	EBoolColumnCellValue__MatchAny                                                   = 2,
	EBoolColumnCellValue__EBoolColumnCellValue_MAX                                   = 3
};

/// Enum /Script/Chooser.EContextObjectDirection
/// Size: 0x04
enum class EContextObjectDirection : uint32_t
{
	EContextObjectDirection__Read                                                    = 0,
	EContextObjectDirection__Write                                                   = 1,
	EContextObjectDirection__ReadWrite                                               = 2,
	EContextObjectDirection__EContextObjectDirection_MAX                             = 3
};

/// Enum /Script/Chooser.EEnumColumnCellValueComparison
/// Size: 0x05
enum class EEnumColumnCellValueComparison : uint32_t
{
	EEnumColumnCellValueComparison__MatchEqual                                       = 0,
	EEnumColumnCellValueComparison__MatchNotEqual                                    = 1,
	EEnumColumnCellValueComparison__MatchAny                                         = 2,
	EEnumColumnCellValueComparison__Modulus                                          = 3,
	EEnumColumnCellValueComparison__EEnumColumnCellValueComparison_MAX               = 4
};

/// Enum /Script/Chooser.EObjectChooserResultType
/// Size: 0x03
enum class EObjectChooserResultType : uint32_t
{
	EObjectChooserResultType__ObjectResult                                           = 0,
	EObjectChooserResultType__ClassResult                                            = 1,
	EObjectChooserResultType__EObjectChooserResultType_MAX                           = 2
};

/// Enum /Script/Chooser.EObjectColumnCellValueComparison
/// Size: 0x05
enum class EObjectColumnCellValueComparison : uint32_t
{
	EObjectColumnCellValueComparison__MatchEqual                                     = 0,
	EObjectColumnCellValueComparison__MatchNotEqual                                  = 1,
	EObjectColumnCellValueComparison__MatchAny                                       = 2,
	EObjectColumnCellValueComparison__Modulus                                        = 3,
	EObjectColumnCellValueComparison__EObjectColumnCellValueComparison_MAX           = 4
};

/// Enum /Script/Chooser.EChooserEvaluationFrequency
/// Size: 0x05
enum class EChooserEvaluationFrequency : uint32_t
{
	EChooserEvaluationFrequency__OnInitialUpdate                                     = 0,
	EChooserEvaluationFrequency__OnBecomeRelevant                                    = 1,
	EChooserEvaluationFrequency__OnLoop                                              = 2,
	EChooserEvaluationFrequency__OnUpdate                                            = 3,
	EChooserEvaluationFrequency__EChooserEvaluationFrequency_MAX                     = 4
};

/// Class /Script/Chooser.ChooserParameterBool_ContextProperty
/// Size: 0x0018 (0x000028 - 0x000040)
class UChooserParameterBool_ContextProperty : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x30];                                      // 0x0000   (0x0030)  MISSED
	TArray<FName>                                      PropertyBindingChain;                                       // 0x0030   (0x0010)  
};

/// Class /Script/Chooser.ChooserColumnBool
/// Size: 0x0028 (0x000028 - 0x000050)
class UChooserColumnBool : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x30];                                      // 0x0000   (0x0030)  MISSED
	SDK_UNDEFINED(16,2429) /* TScriptInterface<Class> */ __um(InputValue);                                         // 0x0030   (0x0010)  
	TArray<bool>                                       RowValues;                                                  // 0x0040   (0x0010)  
};

/// Class /Script/Chooser.ChooserParameterEnum_ContextProperty
/// Size: 0x0018 (0x000028 - 0x000040)
class UChooserParameterEnum_ContextProperty : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x30];                                      // 0x0000   (0x0030)  MISSED
	TArray<FName>                                      PropertyBindingChain;                                       // 0x0030   (0x0010)  
};

/// Struct /Script/Chooser.ChooserEnumRowData
/// Size: 0x0008 (0x000000 - 0x000008)
struct FChooserEnumRowData
{ 
	EEnumColumnCellValueComparison                     Comparison;                                                 // 0x0000   (0x0004)  
	char                                               Value;                                                      // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0005   (0x0003)  MISSED
};

/// Class /Script/Chooser.ChooserColumnEnum
/// Size: 0x0028 (0x000028 - 0x000050)
class UChooserColumnEnum : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x30];                                      // 0x0000   (0x0030)  MISSED
	SDK_UNDEFINED(16,2430) /* TScriptInterface<Class> */ __um(InputValue);                                         // 0x0030   (0x0010)  
	TArray<FChooserEnumRowData>                        RowValues;                                                  // 0x0040   (0x0010)  
};

/// Class /Script/Chooser.ChooserParameterFloat_ContextProperty
/// Size: 0x0018 (0x000028 - 0x000040)
class UChooserParameterFloat_ContextProperty : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x30];                                      // 0x0000   (0x0030)  MISSED
	TArray<FName>                                      PropertyBindingChain;                                       // 0x0030   (0x0010)  
};

/// Struct /Script/Chooser.ChooserFloatRangeRowData
/// Size: 0x0008 (0x000000 - 0x000008)
struct FChooserFloatRangeRowData
{ 
	float                                              Min;                                                        // 0x0000   (0x0004)  
	float                                              Max;                                                        // 0x0004   (0x0004)  
};

/// Class /Script/Chooser.ChooserColumnFloatRange
/// Size: 0x0028 (0x000028 - 0x000050)
class UChooserColumnFloatRange : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x30];                                      // 0x0000   (0x0030)  MISSED
	SDK_UNDEFINED(16,2431) /* TScriptInterface<Class> */ __um(InputValue);                                         // 0x0030   (0x0010)  
	TArray<FChooserFloatRangeRowData>                  RowValues;                                                  // 0x0040   (0x0010)  
};

/// Class /Script/Chooser.ChooserParameterGameplayTag_ContextProperty
/// Size: 0x0018 (0x000028 - 0x000040)
class UChooserParameterGameplayTag_ContextProperty : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x30];                                      // 0x0000   (0x0030)  MISSED
	TArray<FName>                                      PropertyBindingChain;                                       // 0x0030   (0x0010)  
};

/// Class /Script/Chooser.ChooserColumnGameplayTag
/// Size: 0x0030 (0x000028 - 0x000058)
class UChooserColumnGameplayTag : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x30];                                      // 0x0000   (0x0030)  MISSED
	SDK_UNDEFINED(16,2432) /* TScriptInterface<Class> */ __um(InputValue);                                         // 0x0030   (0x0010)  
	EGameplayContainerMatchType                        TagMatchType;                                               // 0x0040   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0041   (0x0007)  MISSED
	TArray<FGameplayTagContainer>                      RowValues;                                                  // 0x0048   (0x0010)  
};

/// Class /Script/Chooser.ChooserColumn
/// Size: 0x0000 (0x000028 - 0x000028)
class UChooserColumn : public UInterface
{ 
public:
};

/// Class /Script/Chooser.ChooserParameterBool
/// Size: 0x0000 (0x000028 - 0x000028)
class UChooserParameterBool : public UInterface
{ 
public:
};

/// Class /Script/Chooser.ChooserParameterEnum
/// Size: 0x0000 (0x000028 - 0x000028)
class UChooserParameterEnum : public UInterface
{ 
public:
};

/// Class /Script/Chooser.ChooserParameterFloat
/// Size: 0x0000 (0x000028 - 0x000028)
class UChooserParameterFloat : public UInterface
{ 
public:
};

/// Class /Script/Chooser.ChooserParameterGameplayTag
/// Size: 0x0000 (0x000028 - 0x000028)
class UChooserParameterGameplayTag : public UInterface
{ 
public:
};

/// Class /Script/Chooser.HasContextClass
/// Size: 0x0000 (0x000028 - 0x000028)
class UHasContextClass : public UInterface
{ 
public:
};

/// Class /Script/Chooser.ObjectChooser
/// Size: 0x0000 (0x000028 - 0x000028)
class UObjectChooser : public UInterface
{ 
public:
};

/// Class /Script/Chooser.ObjectChooser_Asset
/// Size: 0x0010 (0x000028 - 0x000038)
class UObjectChooser_Asset : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x30];                                      // 0x0000   (0x0030)  MISSED
	class UObject*                                     Asset;                                                      // 0x0030   (0x0008)  
};

/// Class /Script/Chooser.ChooserTable
/// Size: 0x0078 (0x000028 - 0x0000A0)
class UChooserTable : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x48];                                      // 0x0000   (0x0048)  MISSED
	class UChooserTable*                               ParentTable;                                                // 0x0048   (0x0008)  
	FInstancedStruct                                   FallbackResult;                                             // 0x0050   (0x0010)  
	TArray<FInstancedStruct>                           ResultsStructs;                                             // 0x0060   (0x0010)  
	TArray<FInstancedStruct>                           ColumnsStructs;                                             // 0x0070   (0x0010)  
	TArray<FInstancedStruct>                           ContextData;                                                // 0x0080   (0x0010)  
	class UClass*                                      OutputObjectType;                                           // 0x0090   (0x0008)  
	EObjectChooserResultType                           ResultType;                                                 // 0x0098   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x009C   (0x0004)  MISSED
};

/// Class /Script/Chooser.ObjectChooser_EvaluateChooser
/// Size: 0x0010 (0x000028 - 0x000038)
class UObjectChooser_EvaluateChooser : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x30];                                      // 0x0000   (0x0030)  MISSED
	class UChooserTable*                               Chooser;                                                    // 0x0030   (0x0008)  
};

/// Class /Script/Chooser.ChooserColumnMenuContext
/// Size: 0x0018 (0x000028 - 0x000040)
class UChooserColumnMenuContext : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x40];                                      // 0x0000   (0x0040)  MISSED
};

/// Class /Script/Chooser.ChooserFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UChooserFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/Chooser.ChooserFunctionLibrary.MakeEvaluateChooser
	// FInstancedStruct MakeEvaluateChooser(class UChooserTable* Chooser);                                                   // [0x78bc580] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/Chooser.ChooserFunctionLibrary.MakeChooserEvaluationContext
	// FChooserEvaluationContext MakeChooserEvaluationContext();                                                             // [0x78bc504] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Chooser.ChooserFunctionLibrary.GetChooserStructOutput
	// void GetChooserStructOutput(FChooserEvaluationContext& Context, int32_t Index, int32_t& Value);                       // [0x78bc1a4] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/Chooser.ChooserFunctionLibrary.EvaluateObjectChooserBaseMulti
	// TArray<UObject*> EvaluateObjectChooserBaseMulti(FChooserEvaluationContext& Context, FInstancedStruct& ObjectChooser, class UClass* ObjectClass, bool bResultIsClass); // [0x78bbe58] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Chooser.ChooserFunctionLibrary.EvaluateObjectChooserBase
	// class UObject* EvaluateObjectChooserBase(FChooserEvaluationContext& Context, FInstancedStruct& ObjectChooser, class UClass* ObjectClass, bool bResultIsClass); // [0x78bbb2c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Chooser.ChooserFunctionLibrary.EvaluateChooserMulti
	// TArray<UObject*> EvaluateChooserMulti(class UObject* ContextObject, class UChooserTable* ChooserTable, class UClass* ObjectClass); // [0x78bb9f4] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/Chooser.ChooserFunctionLibrary.EvaluateChooser
	// class UObject* EvaluateChooser(class UObject* ContextObject, class UChooserTable* ChooserTable, class UClass* ObjectClass); // [0x78bb8e4] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/Chooser.ChooserFunctionLibrary.AddChooserStructInput
	// void AddChooserStructInput(FChooserEvaluationContext& Context, int32_t Value);                                        // [0x78bb67c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Chooser.ChooserFunctionLibrary.AddChooserObjectInput
	// void AddChooserObjectInput(FChooserEvaluationContext& Context, class UObject* Object);                                // [0x78bb4bc] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/Chooser.ChooserParameterBase
/// Size: 0x0008 (0x000000 - 0x000008)
struct FChooserParameterBase
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/Chooser.ChooserParameterBoolBase
/// Size: 0x0000 (0x000008 - 0x000008)
struct FChooserParameterBoolBase : FChooserParameterBase
{ 
};

/// Struct /Script/Chooser.ChooserPropertyBinding
/// Size: 0x0028 (0x000000 - 0x000028)
struct FChooserPropertyBinding
{ 
	TArray<FName>                                      PropertyBindingChain;                                       // 0x0000   (0x0010)  
	int32_t                                            ContextIndex;                                               // 0x0010   (0x0004)  
	bool                                               IsBoundToRoot;                                              // 0x0014   (0x0001)  
	unsigned char                                      UnknownData00_6[0x13];                                      // 0x0015   (0x0013)  MISSED
};

/// Struct /Script/Chooser.BoolContextProperty
/// Size: 0x0038 (0x000008 - 0x000040)
struct FBoolContextProperty : FChooserParameterBoolBase
{ 
	TArray<FName>                                      PropertyBindingChain;                                       // 0x0008   (0x0010)  
	FChooserPropertyBinding                            Binding;                                                    // 0x0018   (0x0028)  
};

/// Struct /Script/Chooser.ChooserColumnBase
/// Size: 0x0008 (0x000000 - 0x000008)
struct FChooserColumnBase
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/Chooser.BoolColumn
/// Size: 0x0020 (0x000008 - 0x000028)
struct FBoolColumn : FChooserColumnBase
{ 
	FInstancedStruct                                   InputValue;                                                 // 0x0008   (0x0010)  
	TArray<EBoolColumnCellValue>                       RowValuesWithAny;                                           // 0x0018   (0x0010)  
};

/// Struct /Script/Chooser.ChooserEnumPropertyBinding
/// Size: 0x0000 (0x000028 - 0x000028)
struct FChooserEnumPropertyBinding : FChooserPropertyBinding
{ 
};

/// Struct /Script/Chooser.ChooserObjectPropertyBinding
/// Size: 0x0000 (0x000028 - 0x000028)
struct FChooserObjectPropertyBinding : FChooserPropertyBinding
{ 
};

/// Struct /Script/Chooser.ChooserStructPropertyBinding
/// Size: 0x0000 (0x000028 - 0x000028)
struct FChooserStructPropertyBinding : FChooserPropertyBinding
{ 
};

/// Struct /Script/Chooser.ContextObjectTypeBase
/// Size: 0x0004 (0x000000 - 0x000004)
struct FContextObjectTypeBase
{ 
	EContextObjectDirection                            Direction;                                                  // 0x0000   (0x0004)  
};

/// Struct /Script/Chooser.ContextObjectTypeClass
/// Size: 0x000C (0x000004 - 0x000010)
struct FContextObjectTypeClass : FContextObjectTypeBase
{ 
	unsigned char                                      UnknownData00_3[0x4];                                       // 0x0004   (0x0004)  MISSED
	class UClass*                                      Class;                                                      // 0x0008   (0x0008)  
};

/// Struct /Script/Chooser.ContextObjectTypeStruct
/// Size: 0x000C (0x000004 - 0x000010)
struct FContextObjectTypeStruct : FContextObjectTypeBase
{ 
	unsigned char                                      UnknownData00_3[0x4];                                       // 0x0004   (0x0004)  MISSED
	class UScriptStruct*                               Struct;                                                     // 0x0008   (0x0008)  
};

/// Struct /Script/Chooser.ChooserParameterEnumBase
/// Size: 0x0000 (0x000008 - 0x000008)
struct FChooserParameterEnumBase : FChooserParameterBase
{ 
};

/// Struct /Script/Chooser.EnumContextProperty
/// Size: 0x0038 (0x000008 - 0x000040)
struct FEnumContextProperty : FChooserParameterEnumBase
{ 
	TArray<FName>                                      PropertyBindingChain;                                       // 0x0008   (0x0010)  
	FChooserEnumPropertyBinding                        Binding;                                                    // 0x0018   (0x0028)  
};

/// Struct /Script/Chooser.EnumColumn
/// Size: 0x0020 (0x000008 - 0x000028)
struct FEnumColumn : FChooserColumnBase
{ 
	FInstancedStruct                                   InputValue;                                                 // 0x0008   (0x0010)  
	TArray<FChooserEnumRowData>                        RowValues;                                                  // 0x0018   (0x0010)  
};

/// Struct /Script/Chooser.ChooserParameterFloatBase
/// Size: 0x0000 (0x000008 - 0x000008)
struct FChooserParameterFloatBase : FChooserParameterBase
{ 
};

/// Struct /Script/Chooser.FloatContextProperty
/// Size: 0x0038 (0x000008 - 0x000040)
struct FFloatContextProperty : FChooserParameterFloatBase
{ 
	TArray<FName>                                      PropertyBindingChain;                                       // 0x0008   (0x0010)  
	FChooserPropertyBinding                            Binding;                                                    // 0x0018   (0x0028)  
};

/// Struct /Script/Chooser.FloatRangeColumn
/// Size: 0x0020 (0x000008 - 0x000028)
struct FFloatRangeColumn : FChooserColumnBase
{ 
	FInstancedStruct                                   InputValue;                                                 // 0x0008   (0x0010)  
	TArray<FChooserFloatRangeRowData>                  RowValues;                                                  // 0x0018   (0x0010)  
};

/// Struct /Script/Chooser.ChooserParameterGameplayTagBase
/// Size: 0x0000 (0x000008 - 0x000008)
struct FChooserParameterGameplayTagBase : FChooserParameterBase
{ 
};

/// Struct /Script/Chooser.GameplayTagContextProperty
/// Size: 0x0038 (0x000008 - 0x000040)
struct FGameplayTagContextProperty : FChooserParameterGameplayTagBase
{ 
	TArray<FName>                                      PropertyBindingChain;                                       // 0x0008   (0x0010)  
	FChooserPropertyBinding                            Binding;                                                    // 0x0018   (0x0028)  
};

/// Struct /Script/Chooser.GameplayTagColumn
/// Size: 0x0028 (0x000008 - 0x000030)
struct FGameplayTagColumn : FChooserColumnBase
{ 
	FInstancedStruct                                   InputValue;                                                 // 0x0008   (0x0010)  
	EGameplayContainerMatchType                        TagMatchType;                                               // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0019   (0x0007)  MISSED
	TArray<FGameplayTagContainer>                      RowValues;                                                  // 0x0020   (0x0010)  
};

/// Struct /Script/Chooser.ChooserParameterObjectBase
/// Size: 0x0000 (0x000008 - 0x000008)
struct FChooserParameterObjectBase : FChooserParameterBase
{ 
};

/// Struct /Script/Chooser.ChooserRandomizationContext
/// Size: 0x0050 (0x000000 - 0x000050)
struct FChooserRandomizationContext
{ 
	unsigned char                                      UnknownData00_2[0x50];                                      // 0x0000   (0x0050)  MISSED
};

/// Struct /Script/Chooser.ChooserParameterRandomizeBase
/// Size: 0x0000 (0x000008 - 0x000008)
struct FChooserParameterRandomizeBase : FChooserParameterBase
{ 
};

/// Struct /Script/Chooser.ChooserParameterStructBase
/// Size: 0x0000 (0x000008 - 0x000008)
struct FChooserParameterStructBase : FChooserParameterBase
{ 
};

/// Struct /Script/Chooser.ChooserEvaluationInputObject
/// Size: 0x0008 (0x000000 - 0x000008)
struct FChooserEvaluationInputObject
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/Chooser.ChooserEvaluationContext
/// Size: 0x0078 (0x000000 - 0x000078)
struct FChooserEvaluationContext
{ 
	unsigned char                                      UnknownData00_2[0x78];                                      // 0x0000   (0x0078)  MISSED
};

/// Struct /Script/Chooser.ObjectChooserBase
/// Size: 0x0008 (0x000000 - 0x000008)
struct FObjectChooserBase
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/Chooser.AssetChooser
/// Size: 0x0008 (0x000008 - 0x000010)
struct FAssetChooser : FObjectChooserBase
{ 
	class UObject*                                     Asset;                                                      // 0x0008   (0x0008)  
};

/// Struct /Script/Chooser.ClassChooser
/// Size: 0x0008 (0x000008 - 0x000010)
struct FClassChooser : FObjectChooserBase
{ 
	class UClass*                                      Class;                                                      // 0x0008   (0x0008)  
};

/// Struct /Script/Chooser.ObjectContextProperty
/// Size: 0x0028 (0x000008 - 0x000030)
struct FObjectContextProperty : FChooserParameterObjectBase
{ 
	FChooserObjectPropertyBinding                      Binding;                                                    // 0x0008   (0x0028)  
};

/// Struct /Script/Chooser.ChooserObjectRowData
/// Size: 0x0028 (0x000000 - 0x000028)
struct FChooserObjectRowData
{ 
	EObjectColumnCellValueComparison                   Comparison;                                                 // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	SDK_UNDEFINED(32,2433) /* TWeakObjectPtr<UObject*> */ __um(Value);                                             // 0x0008   (0x0020)  
};

/// Struct /Script/Chooser.ObjectColumn
/// Size: 0x0020 (0x000008 - 0x000028)
struct FObjectColumn : FChooserColumnBase
{ 
	FInstancedStruct                                   InputValue;                                                 // 0x0008   (0x0010)  
	TArray<FChooserObjectRowData>                      RowValues;                                                  // 0x0018   (0x0010)  
};

/// Struct /Script/Chooser.OutputBoolColumn
/// Size: 0x0028 (0x000008 - 0x000030)
struct FOutputBoolColumn : FChooserColumnBase
{ 
	FInstancedStruct                                   InputValue;                                                 // 0x0008   (0x0010)  
	bool                                               bFallbackValue;                                             // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0019   (0x0007)  MISSED
	TArray<bool>                                       RowValues;                                                  // 0x0020   (0x0010)  
};

/// Struct /Script/Chooser.ChooserOutputEnumRowData
/// Size: 0x0001 (0x000000 - 0x000001)
struct FChooserOutputEnumRowData
{ 
	char                                               Value;                                                      // 0x0000   (0x0001)  
};

/// Struct /Script/Chooser.OutputEnumColumn
/// Size: 0x0028 (0x000008 - 0x000030)
struct FOutputEnumColumn : FChooserColumnBase
{ 
	FInstancedStruct                                   InputValue;                                                 // 0x0008   (0x0010)  
	FChooserOutputEnumRowData                          FallbackValue;                                              // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0019   (0x0007)  MISSED
	TArray<FChooserOutputEnumRowData>                  RowValues;                                                  // 0x0020   (0x0010)  
};

/// Struct /Script/Chooser.OutputFloatColumn
/// Size: 0x0028 (0x000008 - 0x000030)
struct FOutputFloatColumn : FChooserColumnBase
{ 
	FInstancedStruct                                   InputValue;                                                 // 0x0008   (0x0010)  
	double                                             FallbackValue;                                              // 0x0018   (0x0008)  
	TArray<double>                                     RowValues;                                                  // 0x0020   (0x0010)  
};

/// Struct /Script/Chooser.StructContextProperty
/// Size: 0x0028 (0x000008 - 0x000030)
struct FStructContextProperty : FChooserParameterStructBase
{ 
	FChooserStructPropertyBinding                      Binding;                                                    // 0x0008   (0x0028)  
};

/// Struct /Script/Chooser.OutputStructColumn
/// Size: 0x0030 (0x000008 - 0x000038)
struct FOutputStructColumn : FChooserColumnBase
{ 
	FInstancedStruct                                   InputValue;                                                 // 0x0008   (0x0010)  
	FInstancedStruct                                   FallbackValue;                                              // 0x0018   (0x0010)  
	TArray<FInstancedStruct>                           RowValues;                                                  // 0x0028   (0x0010)  
};

/// Struct /Script/Chooser.RandomizeContextProperty
/// Size: 0x0028 (0x000008 - 0x000030)
struct FRandomizeContextProperty : FChooserParameterRandomizeBase
{ 
	FChooserPropertyBinding                            Binding;                                                    // 0x0008   (0x0028)  
};

/// Struct /Script/Chooser.RandomizeColumn
/// Size: 0x0028 (0x000008 - 0x000030)
struct FRandomizeColumn : FChooserColumnBase
{ 
	FInstancedStruct                                   InputValue;                                                 // 0x0008   (0x0010)  
	float                                              RepeatProbabilityMultiplier;                                // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x001C   (0x0004)  MISSED
	TArray<float>                                      RowValues;                                                  // 0x0020   (0x0010)  
};

/// Struct /Script/Chooser.AnimCurveOverride
/// Size: 0x0008 (0x000000 - 0x000008)
struct FAnimCurveOverride
{ 
	FName                                              CurveName;                                                  // 0x0000   (0x0004)  
	float                                              CurveValue;                                                 // 0x0004   (0x0004)  
};

/// Struct /Script/Chooser.AnimCurveOverrideList
/// Size: 0x0018 (0x000000 - 0x000018)
struct FAnimCurveOverrideList
{ 
	TArray<FAnimCurveOverride>                         Values;                                                     // 0x0000   (0x0010)  
	uint32_t                                           Hash;                                                       // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/Chooser.ChooserPlayerSettings
/// Size: 0x0040 (0x000000 - 0x000040)
struct FChooserPlayerSettings
{ 
	bool                                               bMirror;                                                    // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              StartTime;                                                  // 0x0004   (0x0004)  
	bool                                               bForceLooping;                                              // 0x0008   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0009   (0x0003)  MISSED
	float                                              PlaybackRate;                                               // 0x000C   (0x0004)  
	FAnimCurveOverrideList                             CurveOverrides;                                             // 0x0010   (0x0018)  
	float                                              BlendTime;                                                  // 0x0028   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x002C   (0x0004)  MISSED
	class UBlendProfile*                               BlendProfile;                                               // 0x0030   (0x0008)  
	EAlphaBlendOption                                  BlendOption;                                                // 0x0038   (0x0001)  
	bool                                               bUseInertialBlend;                                          // 0x0039   (0x0001)  
	unsigned char                                      UnknownData03_6[0x6];                                       // 0x003A   (0x0006)  MISSED
};

/// Struct /Script/Chooser.AnimNode_ChooserPlayer
/// Size: 0x0188 (0x0000B0 - 0x000238)
struct FAnimNode_ChooserPlayer : FAnimNode_BlendStack_Standalone
{ 
	unsigned char                                      UnknownData00_3[0x20];                                      // 0x00B0   (0x0020)  MISSED
	EChooserEvaluationFrequency                        EvaluationFrequency;                                        // 0x00D0   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x00D4   (0x0004)  MISSED
	FInstancedStruct                                   Chooser;                                                    // 0x00D8   (0x0010)  
	class UMirrorDataTable*                            MirrorDataTable;                                            // 0x00E8   (0x0008)  
	float                                              BlendSpaceX;                                                // 0x00F0   (0x0004)  
	float                                              BlendSpaceY;                                                // 0x00F4   (0x0004)  
	unsigned char                                      UnknownData02_5[0x8];                                       // 0x00F8   (0x0008)  MISSED
	FChooserPlayerSettings                             DefaultSettings;                                            // 0x0100   (0x0040)  
	TArray<FInstancedStruct>                           ChooserContextDefinition;                                   // 0x0140   (0x0010)  
	bool                                               bStartFromMatchingPose;                                     // 0x0150   (0x0001)  
	unsigned char                                      UnknownData03_6[0xE7];                                      // 0x0151   (0x00E7)  MISSED
};

/// Struct /Script/Chooser.NestedChooser
/// Size: 0x0008 (0x000008 - 0x000010)
struct FNestedChooser : FObjectChooserBase
{ 
	class UChooserTable*                               Chooser;                                                    // 0x0008   (0x0008)  
};

/// Struct /Script/Chooser.EvaluateChooser
/// Size: 0x0008 (0x000008 - 0x000010)
struct FEvaluateChooser : FObjectChooserBase
{ 
	class UChooserTable*                               Chooser;                                                    // 0x0008   (0x0008)  
};

