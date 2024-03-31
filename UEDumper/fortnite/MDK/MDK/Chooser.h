
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: BlendStack
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: GameplayTags
/// dependency: StructUtils

/// Class /Script/Chooser.ChooserParameterBool_ContextProperty
/// Size: 0x0018 (0x000028 - 0x000040)
class UChooserParameterBool_ContextProperty : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(TArray<FName>)                             PropertyBindingChain                                        OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Class /Script/Chooser.ChooserColumnBool
/// Size: 0x0028 (0x000028 - 0x000050)
class UChooserColumnBool : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TScriptInterface<Class>)                   InputValue                                                  OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TArray<bool>)                              RowValues                                                   OFFSET(get<T>, {0x40, 16, 0, 0})
};

/// Class /Script/Chooser.ChooserParameterEnum_ContextProperty
/// Size: 0x0018 (0x000028 - 0x000040)
class UChooserParameterEnum_ContextProperty : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(TArray<FName>)                             PropertyBindingChain                                        OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Class /Script/Chooser.ChooserColumnEnum
/// Size: 0x0028 (0x000028 - 0x000050)
class UChooserColumnEnum : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TScriptInterface<Class>)                   InputValue                                                  OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TArray<FChooserEnumRowData>)               RowValues                                                   OFFSET(get<T>, {0x40, 16, 0, 0})
};

/// Class /Script/Chooser.ChooserParameterFloat_ContextProperty
/// Size: 0x0018 (0x000028 - 0x000040)
class UChooserParameterFloat_ContextProperty : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(TArray<FName>)                             PropertyBindingChain                                        OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Class /Script/Chooser.ChooserColumnFloatRange
/// Size: 0x0028 (0x000028 - 0x000050)
class UChooserColumnFloatRange : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TScriptInterface<Class>)                   InputValue                                                  OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TArray<FChooserFloatRangeRowData>)         RowValues                                                   OFFSET(get<T>, {0x40, 16, 0, 0})
};

/// Class /Script/Chooser.ChooserParameterGameplayTag_ContextProperty
/// Size: 0x0018 (0x000028 - 0x000040)
class UChooserParameterGameplayTag_ContextProperty : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(TArray<FName>)                             PropertyBindingChain                                        OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Class /Script/Chooser.ChooserColumnGameplayTag
/// Size: 0x0030 (0x000028 - 0x000058)
class UChooserColumnGameplayTag : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(TScriptInterface<Class>)                   InputValue                                                  OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(EGameplayContainerMatchType)               TagMatchType                                                OFFSET(get<T>, {0x40, 1, 0, 0})
	CMember(TArray<FGameplayTagContainer>)             RowValues                                                   OFFSET(get<T>, {0x48, 16, 0, 0})
};

/// Class /Script/Chooser.ChooserColumn
/// Size: 0x0000 (0x000028 - 0x000028)
class UChooserColumn : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/Chooser.ChooserParameterBool
/// Size: 0x0000 (0x000028 - 0x000028)
class UChooserParameterBool : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/Chooser.ChooserParameterEnum
/// Size: 0x0000 (0x000028 - 0x000028)
class UChooserParameterEnum : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/Chooser.ChooserParameterFloat
/// Size: 0x0000 (0x000028 - 0x000028)
class UChooserParameterFloat : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/Chooser.ChooserParameterGameplayTag
/// Size: 0x0000 (0x000028 - 0x000028)
class UChooserParameterGameplayTag : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/Chooser.HasContextClass
/// Size: 0x0000 (0x000028 - 0x000028)
class UHasContextClass : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/Chooser.ObjectChooser
/// Size: 0x0000 (0x000028 - 0x000028)
class UObjectChooser : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/Chooser.ObjectChooser_Asset
/// Size: 0x0010 (0x000028 - 0x000038)
class UObjectChooser_Asset : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(class UObject*)                            Asset                                                       OFFSET(get<T>, {0x30, 8, 0, 0})
};

/// Class /Script/Chooser.ChooserTable
/// Size: 0x0078 (0x000028 - 0x0000A0)
class UChooserTable : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	CMember(class UChooserTable*)                      ParentTable                                                 OFFSET(get<T>, {0x48, 8, 0, 0})
	SMember(FInstancedStruct)                          FallbackResult                                              OFFSET(getStruct<T>, {0x50, 16, 0, 0})
	CMember(TArray<FInstancedStruct>)                  ResultsStructs                                              OFFSET(get<T>, {0x60, 16, 0, 0})
	CMember(TArray<FInstancedStruct>)                  ColumnsStructs                                              OFFSET(get<T>, {0x70, 16, 0, 0})
	CMember(TArray<FInstancedStruct>)                  ContextData                                                 OFFSET(get<T>, {0x80, 16, 0, 0})
	CMember(class UClass*)                             OutputObjectType                                            OFFSET(get<T>, {0x90, 8, 0, 0})
	CMember(EObjectChooserResultType)                  ResultType                                                  OFFSET(get<T>, {0x98, 4, 0, 0})
};

/// Class /Script/Chooser.ObjectChooser_EvaluateChooser
/// Size: 0x0010 (0x000028 - 0x000038)
class UObjectChooser_EvaluateChooser : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(class UChooserTable*)                      Chooser                                                     OFFSET(get<T>, {0x30, 8, 0, 0})
};

/// Class /Script/Chooser.ChooserColumnMenuContext
/// Size: 0x0018 (0x000028 - 0x000040)
class UChooserColumnMenuContext : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Script/Chooser.ChooserFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UChooserFunctionLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/Chooser.ChooserFunctionLibrary.MakeEvaluateChooser
	// FInstancedStruct MakeEvaluateChooser(class UChooserTable* Chooser);                                                      // [0x7cb1074] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/Chooser.ChooserFunctionLibrary.MakeChooserEvaluationContext
	// FChooserEvaluationContext MakeChooserEvaluationContext();                                                                // [0x7cb0ff8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Chooser.ChooserFunctionLibrary.GetChooserStructOutput
	// void GetChooserStructOutput(FChooserEvaluationContext& Context, int32_t Index, int32_t& Value);                          // [0x7cb0c8c] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/Chooser.ChooserFunctionLibrary.EvaluateObjectChooserBaseMulti
	// TArray<UObject*> EvaluateObjectChooserBaseMulti(FChooserEvaluationContext& Context, FInstancedStruct& ObjectChooser, class UClass* ObjectClass, bool bResultIsClass); // [0x7cb0940] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Chooser.ChooserFunctionLibrary.EvaluateObjectChooserBase
	// class UObject* EvaluateObjectChooserBase(FChooserEvaluationContext& Context, FInstancedStruct& ObjectChooser, class UClass* ObjectClass, bool bResultIsClass); // [0x7cb0614] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Chooser.ChooserFunctionLibrary.EvaluateChooserMulti
	// TArray<UObject*> EvaluateChooserMulti(class UObject* ContextObject, class UChooserTable* ChooserTable, class UClass* ObjectClass); // [0x7cb0418] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/Chooser.ChooserFunctionLibrary.EvaluateChooser
	// class UObject* EvaluateChooser(class UObject* ContextObject, class UChooserTable* ChooserTable, class UClass* ObjectClass); // [0x7cb0244] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/Chooser.ChooserFunctionLibrary.AddChooserStructInput
	// void AddChooserStructInput(FChooserEvaluationContext& Context, int32_t Value);                                           // [0x7caffdc] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Chooser.ChooserFunctionLibrary.AddChooserObjectInput
	// void AddChooserObjectInput(FChooserEvaluationContext& Context, class UObject* Object);                                   // [0x7cafe20] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/Chooser.ChooserParameterBase
/// Size: 0x0008 (0x000000 - 0x000008)
class FChooserParameterBase : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/Chooser.ChooserParameterBoolBase
/// Size: 0x0000 (0x000008 - 0x000008)
class FChooserParameterBoolBase : public FChooserParameterBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/Chooser.BoolContextProperty
/// Size: 0x0038 (0x000008 - 0x000040)
class FBoolContextProperty : public FChooserParameterBoolBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(TArray<FName>)                             PropertyBindingChain                                        OFFSET(get<T>, {0x8, 16, 0, 0})
	SMember(FChooserPropertyBinding)                   Binding                                                     OFFSET(getStruct<T>, {0x18, 40, 0, 0})
};

/// Struct /Script/Chooser.ChooserPropertyBinding
/// Size: 0x0028 (0x000000 - 0x000028)
class FChooserPropertyBinding : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(TArray<FName>)                             PropertyBindingChain                                        OFFSET(get<T>, {0x0, 16, 0, 0})
	DMember(int32_t)                                   ContextIndex                                                OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	DMember(bool)                                      IsBoundToRoot                                               OFFSET(get<bool>, {0x14, 1, 0, 0})
};

/// Struct /Script/Chooser.ChooserColumnBase
/// Size: 0x0008 (0x000000 - 0x000008)
class FChooserColumnBase : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/Chooser.BoolColumn
/// Size: 0x0020 (0x000008 - 0x000028)
class FBoolColumn : public FChooserColumnBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FInstancedStruct)                          InputValue                                                  OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	CMember(TArray<EBoolColumnCellValue>)              RowValuesWithAny                                            OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/Chooser.ChooserEnumPropertyBinding
/// Size: 0x0000 (0x000028 - 0x000028)
class FChooserEnumPropertyBinding : public FChooserPropertyBinding
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Struct /Script/Chooser.ChooserObjectPropertyBinding
/// Size: 0x0000 (0x000028 - 0x000028)
class FChooserObjectPropertyBinding : public FChooserPropertyBinding
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Struct /Script/Chooser.ChooserStructPropertyBinding
/// Size: 0x0000 (0x000028 - 0x000028)
class FChooserStructPropertyBinding : public FChooserPropertyBinding
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Struct /Script/Chooser.ContextObjectTypeBase
/// Size: 0x0004 (0x000000 - 0x000004)
class FContextObjectTypeBase : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	CMember(EContextObjectDirection)                   Direction                                                   OFFSET(get<T>, {0x0, 4, 0, 0})
};

/// Struct /Script/Chooser.ContextObjectTypeClass
/// Size: 0x000C (0x000004 - 0x000010)
class FContextObjectTypeClass : public FContextObjectTypeBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class UClass*)                             Class                                                       OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/Chooser.ContextObjectTypeStruct
/// Size: 0x000C (0x000004 - 0x000010)
class FContextObjectTypeStruct : public FContextObjectTypeBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class UScriptStruct*)                      Struct                                                      OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/Chooser.ChooserParameterEnumBase
/// Size: 0x0000 (0x000008 - 0x000008)
class FChooserParameterEnumBase : public FChooserParameterBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/Chooser.EnumContextProperty
/// Size: 0x0038 (0x000008 - 0x000040)
class FEnumContextProperty : public FChooserParameterEnumBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(TArray<FName>)                             PropertyBindingChain                                        OFFSET(get<T>, {0x8, 16, 0, 0})
	SMember(FChooserEnumPropertyBinding)               Binding                                                     OFFSET(getStruct<T>, {0x18, 40, 0, 0})
};

/// Struct /Script/Chooser.ChooserEnumRowData
/// Size: 0x0008 (0x000000 - 0x000008)
class FChooserEnumRowData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(EEnumColumnCellValueComparison)            Comparison                                                  OFFSET(get<T>, {0x0, 4, 0, 0})
	DMember(char)                                      Value                                                       OFFSET(get<char>, {0x4, 1, 0, 0})
};

/// Struct /Script/Chooser.EnumColumn
/// Size: 0x0020 (0x000008 - 0x000028)
class FEnumColumn : public FChooserColumnBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FInstancedStruct)                          InputValue                                                  OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	CMember(TArray<FChooserEnumRowData>)               RowValues                                                   OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/Chooser.ChooserParameterFloatBase
/// Size: 0x0000 (0x000008 - 0x000008)
class FChooserParameterFloatBase : public FChooserParameterBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/Chooser.FloatContextProperty
/// Size: 0x0038 (0x000008 - 0x000040)
class FFloatContextProperty : public FChooserParameterFloatBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(TArray<FName>)                             PropertyBindingChain                                        OFFSET(get<T>, {0x8, 16, 0, 0})
	SMember(FChooserPropertyBinding)                   Binding                                                     OFFSET(getStruct<T>, {0x18, 40, 0, 0})
};

/// Struct /Script/Chooser.ChooserFloatRangeRowData
/// Size: 0x0008 (0x000000 - 0x000008)
class FChooserFloatRangeRowData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(float)                                     Min                                                         OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     Max                                                         OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Struct /Script/Chooser.FloatRangeColumn
/// Size: 0x0020 (0x000008 - 0x000028)
class FFloatRangeColumn : public FChooserColumnBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FInstancedStruct)                          InputValue                                                  OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	CMember(TArray<FChooserFloatRangeRowData>)         RowValues                                                   OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/Chooser.ChooserParameterGameplayTagBase
/// Size: 0x0000 (0x000008 - 0x000008)
class FChooserParameterGameplayTagBase : public FChooserParameterBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/Chooser.GameplayTagContextProperty
/// Size: 0x0038 (0x000008 - 0x000040)
class FGameplayTagContextProperty : public FChooserParameterGameplayTagBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(TArray<FName>)                             PropertyBindingChain                                        OFFSET(get<T>, {0x8, 16, 0, 0})
	SMember(FChooserPropertyBinding)                   Binding                                                     OFFSET(getStruct<T>, {0x18, 40, 0, 0})
};

/// Struct /Script/Chooser.GameplayTagColumn
/// Size: 0x0028 (0x000008 - 0x000030)
class FGameplayTagColumn : public FChooserColumnBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FInstancedStruct)                          InputValue                                                  OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	CMember(EGameplayContainerMatchType)               TagMatchType                                                OFFSET(get<T>, {0x18, 1, 0, 0})
	CMember(TArray<FGameplayTagContainer>)             RowValues                                                   OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/Chooser.ChooserParameterObjectBase
/// Size: 0x0000 (0x000008 - 0x000008)
class FChooserParameterObjectBase : public FChooserParameterBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/Chooser.ChooserRandomizationContext
/// Size: 0x0050 (0x000000 - 0x000050)
class FChooserRandomizationContext : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Struct /Script/Chooser.ChooserParameterRandomizeBase
/// Size: 0x0000 (0x000008 - 0x000008)
class FChooserParameterRandomizeBase : public FChooserParameterBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/Chooser.ChooserParameterStructBase
/// Size: 0x0000 (0x000008 - 0x000008)
class FChooserParameterStructBase : public FChooserParameterBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/Chooser.ChooserEvaluationInputObject
/// Size: 0x0008 (0x000000 - 0x000008)
class FChooserEvaluationInputObject : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/Chooser.ChooserEvaluationContext
/// Size: 0x0078 (0x000000 - 0x000078)
class FChooserEvaluationContext : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
};

/// Struct /Script/Chooser.ObjectChooserBase
/// Size: 0x0008 (0x000000 - 0x000008)
class FObjectChooserBase : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/Chooser.AssetChooser
/// Size: 0x0008 (0x000008 - 0x000010)
class FAssetChooser : public FObjectChooserBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class UObject*)                            Asset                                                       OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/Chooser.ClassChooser
/// Size: 0x0008 (0x000008 - 0x000010)
class FClassChooser : public FObjectChooserBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class UClass*)                             Class                                                       OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/Chooser.ObjectContextProperty
/// Size: 0x0028 (0x000008 - 0x000030)
class FObjectContextProperty : public FChooserParameterObjectBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FChooserObjectPropertyBinding)             Binding                                                     OFFSET(getStruct<T>, {0x8, 40, 0, 0})
};

/// Struct /Script/Chooser.ChooserObjectRowData
/// Size: 0x0028 (0x000000 - 0x000028)
class FChooserObjectRowData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(EObjectColumnCellValueComparison)          Comparison                                                  OFFSET(get<T>, {0x0, 4, 0, 0})
	CMember(TWeakObjectPtr<UObject*>)                  Value                                                       OFFSET(get<T>, {0x8, 32, 0, 0})
};

/// Struct /Script/Chooser.ObjectColumn
/// Size: 0x0020 (0x000008 - 0x000028)
class FObjectColumn : public FChooserColumnBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FInstancedStruct)                          InputValue                                                  OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	CMember(TArray<FChooserObjectRowData>)             RowValues                                                   OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/Chooser.OutputBoolColumn
/// Size: 0x0028 (0x000008 - 0x000030)
class FOutputBoolColumn : public FChooserColumnBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FInstancedStruct)                          InputValue                                                  OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	DMember(bool)                                      bFallbackValue                                              OFFSET(get<bool>, {0x18, 1, 0, 0})
	CMember(TArray<bool>)                              RowValues                                                   OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/Chooser.ChooserOutputEnumRowData
/// Size: 0x0001 (0x000000 - 0x000001)
class FChooserOutputEnumRowData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
	DMember(char)                                      Value                                                       OFFSET(get<char>, {0x0, 1, 0, 0})
};

/// Struct /Script/Chooser.OutputEnumColumn
/// Size: 0x0028 (0x000008 - 0x000030)
class FOutputEnumColumn : public FChooserColumnBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FInstancedStruct)                          InputValue                                                  OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	SMember(FChooserOutputEnumRowData)                 FallbackValue                                               OFFSET(getStruct<T>, {0x18, 1, 0, 0})
	CMember(TArray<FChooserOutputEnumRowData>)         RowValues                                                   OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/Chooser.OutputFloatColumn
/// Size: 0x0028 (0x000008 - 0x000030)
class FOutputFloatColumn : public FChooserColumnBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FInstancedStruct)                          InputValue                                                  OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	DMember(double)                                    FallbackValue                                               OFFSET(get<double>, {0x18, 8, 0, 0})
	CMember(TArray<double>)                            RowValues                                                   OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/Chooser.StructContextProperty
/// Size: 0x0028 (0x000008 - 0x000030)
class FStructContextProperty : public FChooserParameterStructBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FChooserStructPropertyBinding)             Binding                                                     OFFSET(getStruct<T>, {0x8, 40, 0, 0})
};

/// Struct /Script/Chooser.OutputStructColumn
/// Size: 0x0030 (0x000008 - 0x000038)
class FOutputStructColumn : public FChooserColumnBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FInstancedStruct)                          InputValue                                                  OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	SMember(FInstancedStruct)                          FallbackValue                                               OFFSET(getStruct<T>, {0x18, 16, 0, 0})
	CMember(TArray<FInstancedStruct>)                  RowValues                                                   OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Struct /Script/Chooser.RandomizeContextProperty
/// Size: 0x0028 (0x000008 - 0x000030)
class FRandomizeContextProperty : public FChooserParameterRandomizeBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FChooserPropertyBinding)                   Binding                                                     OFFSET(getStruct<T>, {0x8, 40, 0, 0})
};

/// Struct /Script/Chooser.RandomizeColumn
/// Size: 0x0028 (0x000008 - 0x000030)
class FRandomizeColumn : public FChooserColumnBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FInstancedStruct)                          InputValue                                                  OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	DMember(float)                                     RepeatProbabilityMultiplier                                 OFFSET(get<float>, {0x18, 4, 0, 0})
	CMember(TArray<float>)                             RowValues                                                   OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/Chooser.AnimCurveOverride
/// Size: 0x0008 (0x000000 - 0x000008)
class FAnimCurveOverride : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FName)                                     CurveName                                                   OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(float)                                     CurveValue                                                  OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Struct /Script/Chooser.AnimCurveOverrideList
/// Size: 0x0018 (0x000000 - 0x000018)
class FAnimCurveOverrideList : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(TArray<FAnimCurveOverride>)                Values                                                      OFFSET(get<T>, {0x0, 16, 0, 0})
	DMember(uint32_t)                                  Hash                                                        OFFSET(get<uint32_t>, {0x10, 4, 0, 0})
};

/// Struct /Script/Chooser.ChooserPlayerSettings
/// Size: 0x0040 (0x000000 - 0x000040)
class FChooserPlayerSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(bool)                                      bMirror                                                     OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(float)                                     StartTime                                                   OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(bool)                                      bForceLooping                                               OFFSET(get<bool>, {0x8, 1, 0, 0})
	DMember(float)                                     PlaybackRate                                                OFFSET(get<float>, {0xC, 4, 0, 0})
	SMember(FAnimCurveOverrideList)                    CurveOverrides                                              OFFSET(getStruct<T>, {0x10, 24, 0, 0})
	DMember(float)                                     BlendTime                                                   OFFSET(get<float>, {0x28, 4, 0, 0})
	CMember(class UBlendProfile*)                      BlendProfile                                                OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(EAlphaBlendOption)                         BlendOption                                                 OFFSET(get<T>, {0x38, 1, 0, 0})
	DMember(bool)                                      bUseInertialBlend                                           OFFSET(get<bool>, {0x39, 1, 0, 0})
};

/// Struct /Script/Chooser.AnimNode_ChooserPlayer
/// Size: 0x0188 (0x0000B0 - 0x000238)
class FAnimNode_ChooserPlayer : public FAnimNode_BlendStack_Standalone
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
	CMember(EChooserEvaluationFrequency)               EvaluationFrequency                                         OFFSET(get<T>, {0xD0, 4, 0, 0})
	SMember(FInstancedStruct)                          Chooser                                                     OFFSET(getStruct<T>, {0xD8, 16, 0, 0})
	CMember(class UMirrorDataTable*)                   MirrorDataTable                                             OFFSET(get<T>, {0xE8, 8, 0, 0})
	DMember(float)                                     BlendSpaceX                                                 OFFSET(get<float>, {0xF0, 4, 0, 0})
	DMember(float)                                     BlendSpaceY                                                 OFFSET(get<float>, {0xF4, 4, 0, 0})
	SMember(FChooserPlayerSettings)                    DefaultSettings                                             OFFSET(getStruct<T>, {0x100, 64, 0, 0})
	CMember(TArray<FInstancedStruct>)                  ChooserContextDefinition                                    OFFSET(get<T>, {0x140, 16, 0, 0})
	DMember(bool)                                      bStartFromMatchingPose                                      OFFSET(get<bool>, {0x150, 1, 0, 0})
};

/// Struct /Script/Chooser.NestedChooser
/// Size: 0x0008 (0x000008 - 0x000010)
class FNestedChooser : public FObjectChooserBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class UChooserTable*)                      Chooser                                                     OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/Chooser.EvaluateChooser
/// Size: 0x0008 (0x000008 - 0x000010)
class FEvaluateChooser : public FObjectChooserBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class UChooserTable*)                      Chooser                                                     OFFSET(get<T>, {0x8, 8, 0, 0})
};

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

