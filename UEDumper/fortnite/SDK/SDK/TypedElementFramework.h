
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject

/// Enum /Script/TypedElementFramework.ESCCModification
/// Size: 0x05
enum class ESCCModification : uint32_t
{
	ESCCModification__Modified                                                       = 0,
	ESCCModification__Added                                                          = 1,
	ESCCModification__Removed                                                        = 2,
	ESCCModification__Conflicted                                                     = 3,
	ESCCModification__ESCCModification_MAX                                           = 4
};

/// Class /Script/TypedElementFramework.TypedElementDataStorageCompatibilityInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UTypedElementDataStorageCompatibilityInterface : public UInterface
{ 
public:
};

/// Class /Script/TypedElementFramework.TypedElementDataStorageFactory
/// Size: 0x0000 (0x000028 - 0x000028)
class UTypedElementDataStorageFactory : public UObject
{ 
public:
};

/// Class /Script/TypedElementFramework.TypedElementDataStorageInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UTypedElementDataStorageInterface : public UInterface
{ 
public:
};

/// Class /Script/TypedElementFramework.TypedElementDataStorageUiInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UTypedElementDataStorageUiInterface : public UInterface
{ 
public:
};

/// Class /Script/TypedElementFramework.TypedElementHandleLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UTypedElementHandleLibrary : public UObject
{ 
public:


	/// Functions
	// Function /Script/TypedElementFramework.TypedElementHandleLibrary.Release
	// void Release(FScriptTypedElementHandle& ElementHandle);                                                               // [0x5f11b6c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/TypedElementFramework.TypedElementHandleLibrary.NotEqual
	// bool NotEqual(FScriptTypedElementHandle& LHS, FScriptTypedElementHandle& RHS);                                        // [0x5f118dc] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/TypedElementFramework.TypedElementHandleLibrary.IsSet
	// bool IsSet(FScriptTypedElementHandle& ElementHandle);                                                                 // [0x5f115b8] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/TypedElementFramework.TypedElementHandleLibrary.Equal
	// bool Equal(FScriptTypedElementHandle& LHS, FScriptTypedElementHandle& RHS);                                           // [0x5f104fc] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
};

/// Class /Script/TypedElementFramework.TypedElementListLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UTypedElementListLibrary : public UObject
{ 
public:


	/// Functions
	// Function /Script/TypedElementFramework.TypedElementListLibrary.Shrink
	// void Shrink(FScriptTypedElementListProxy ElementList);                                                                // [0x5f123fc] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/TypedElementFramework.TypedElementListLibrary.Reset
	// void Reset(FScriptTypedElementListProxy ElementList);                                                                 // [0x5f12004] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/TypedElementFramework.TypedElementListLibrary.Reserve
	// void Reserve(FScriptTypedElementListProxy ElementList, int32_t Size);                                                 // [0x5f11dd4] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/TypedElementFramework.TypedElementListLibrary.Remove
	// bool Remove(FScriptTypedElementListProxy ElementList, FScriptTypedElementHandle& ElementHandle);                      // [0x5f11c10] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/TypedElementFramework.TypedElementListLibrary.Num
	// int32_t Num(FScriptTypedElementListProxy ElementList);                                                                // [0x5f11a08] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/TypedElementFramework.TypedElementListLibrary.IsValidIndex
	// bool IsValidIndex(FScriptTypedElementListProxy ElementList, int32_t Index);                                           // [0x5f11668] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/TypedElementFramework.TypedElementListLibrary.HasElementsOfType
	// bool HasElementsOfType(FScriptTypedElementListProxy ElementList, FName ElementTypeName);                              // [0x5f11380] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/TypedElementFramework.TypedElementListLibrary.HasElements
	// bool HasElements(FScriptTypedElementListProxy ElementList, class UClass* BaseInterfaceType);                          // [0x5f1112c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/TypedElementFramework.TypedElementListLibrary.GetElementInterface
	// class UObject* GetElementInterface(FScriptTypedElementListProxy ElementList, FScriptTypedElementHandle& ElementHandle, class UClass* BaseInterfaceType); // [0x5f10bbc] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/TypedElementFramework.TypedElementListLibrary.GetElementHandles
	// TArray<FScriptTypedElementHandle> GetElementHandles(FScriptTypedElementListProxy ElementList, class UClass* BaseInterfaceType); // [0x5f1094c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/TypedElementFramework.TypedElementListLibrary.GetElementHandleAt
	// FScriptTypedElementHandle GetElementHandleAt(FScriptTypedElementListProxy ElementList, int32_t Index);                // [0x5f106fc] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/TypedElementFramework.TypedElementListLibrary.Empty
	// void Empty(FScriptTypedElementListProxy ElementList, int32_t Slack);                                                  // [0x5f102cc] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/TypedElementFramework.TypedElementListLibrary.CreateScriptElementList
	// FScriptTypedElementListProxy CreateScriptElementList(class UTypedElementRegistry* Registry);                          // [0x5f10224] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/TypedElementFramework.TypedElementListLibrary.CountElementsOfType
	// int32_t CountElementsOfType(FScriptTypedElementListProxy ElementList, FName ElementTypeName);                         // [0x5f0ffec] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/TypedElementFramework.TypedElementListLibrary.CountElements
	// int32_t CountElements(FScriptTypedElementListProxy ElementList, class UClass* BaseInterfaceType);                     // [0x5f0fd98] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/TypedElementFramework.TypedElementListLibrary.Contains
	// bool Contains(FScriptTypedElementListProxy ElementList, FScriptTypedElementHandle& ElementHandle);                    // [0x5f0fbd4] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/TypedElementFramework.TypedElementListLibrary.Clone
	// FScriptTypedElementListProxy Clone(FScriptTypedElementListProxy ElementList);                                         // [0x5f0fa5c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/TypedElementFramework.TypedElementListLibrary.AppendList
	// void AppendList(FScriptTypedElementListProxy ElementList, FScriptTypedElementListProxy OtherElementList);             // [0x5f0f7e4] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/TypedElementFramework.TypedElementListLibrary.Append
	// void Append(FScriptTypedElementListProxy ElementList, TArray<FScriptTypedElementHandle>& ElementHandles);             // [0x5f0f62c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/TypedElementFramework.TypedElementListLibrary.Add
	// bool Add(FScriptTypedElementListProxy ElementList, FScriptTypedElementHandle& ElementHandle);                         // [0x5f0f468] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/TypedElementFramework.TypedElementCounterInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UTypedElementCounterInterface : public UInterface
{ 
public:
};

/// Class /Script/TypedElementFramework.TypedElementRegistry
/// Size: 0x0950 (0x000028 - 0x000978)
class UTypedElementRegistry : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x978];                                     // 0x0000   (0x0978)  MISSED


	/// Functions
	// Function /Script/TypedElementFramework.TypedElementRegistry.GetInstance
	// class UTypedElementRegistry* GetInstance();                                                                           // [0x5f11054] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/TypedElementFramework.TypedElementRegistry.GetElementInterface
	// class UObject* GetElementInterface(FScriptTypedElementHandle& InElementHandle, class UClass* InBaseInterfaceType);    // [0x5f10e84] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/TypedElementFramework.TestTypedElementInterfaceA
/// Size: 0x0000 (0x000028 - 0x000028)
class UTestTypedElementInterfaceA : public UInterface
{ 
public:


	/// Functions
	// Function /Script/TypedElementFramework.TestTypedElementInterfaceA.SetDisplayName
	// bool SetDisplayName(FScriptTypedElementHandle& InElementHandle, FText InNewName, bool bNotify);                       // [0x5f12158] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/TypedElementFramework.TestTypedElementInterfaceA.GetDisplayName
	// FText GetDisplayName(FScriptTypedElementHandle& InElementHandle);                                                     // [0x5f10628] Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/TypedElementFramework.TestTypedElementInterfaceB
/// Size: 0x0000 (0x000028 - 0x000028)
class UTestTypedElementInterfaceB : public UInterface
{ 
public:


	/// Functions
	// Function /Script/TypedElementFramework.TestTypedElementInterfaceB.MarkAsTested
	// bool MarkAsTested(FScriptTypedElementHandle& InElementHandle);                                                        // [0x5f11078] Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/TypedElementFramework.TestTypedElementInterfaceC
/// Size: 0x0000 (0x000028 - 0x000028)
class UTestTypedElementInterfaceC : public UInterface
{ 
public:


	/// Functions
	// Function /Script/TypedElementFramework.TestTypedElementInterfaceC.GetIsTested
	// bool GetIsTested(FScriptTypedElementHandle& InElementHandle);                                                         // [0x5f11078] Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/TypedElementFramework.TestTypedElementInterfaceA_ImplTyped
/// Size: 0x0008 (0x000028 - 0x000030)
class UTestTypedElementInterfaceA_ImplTyped : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x0000   (0x0030)  MISSED
};

/// Class /Script/TypedElementFramework.TestTypedElementInterfaceA_ImplUntyped
/// Size: 0x0008 (0x000028 - 0x000030)
class UTestTypedElementInterfaceA_ImplUntyped : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x0000   (0x0030)  MISSED
};

/// Class /Script/TypedElementFramework.TestTypedElementInterfaceBAndC_Typed
/// Size: 0x0010 (0x000028 - 0x000038)
class UTestTypedElementInterfaceBAndC_Typed : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x38];                                      // 0x0000   (0x0038)  MISSED
};

/// Struct /Script/TypedElementFramework.ScriptTypedElementHandle
/// Size: 0x0008 (0x000000 - 0x000008)
struct FScriptTypedElementHandle
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/TypedElementFramework.TypedElementDataStorageColumn
/// Size: 0x0001 (0x000000 - 0x000001)
struct FTypedElementDataStorageColumn
{ 
};

/// Struct /Script/TypedElementFramework.TypedElementUObjectColumn
/// Size: 0x0007 (0x000001 - 0x000008)
struct FTypedElementUObjectColumn : FTypedElementDataStorageColumn
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/TypedElementFramework.TypedElementExternalObjectColumn
/// Size: 0x0007 (0x000001 - 0x000008)
struct FTypedElementExternalObjectColumn : FTypedElementDataStorageColumn
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/TypedElementFramework.TypedElementDataStorageTag
/// Size: 0x0001 (0x000000 - 0x000001)
struct FTypedElementDataStorageTag
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/TypedElementFramework.TypedElementWidgetConstructor
/// Size: 0x0020 (0x000000 - 0x000020)
struct FTypedElementWidgetConstructor
{ 
	unsigned char                                      UnknownData00_2[0x20];                                      // 0x0000   (0x0020)  MISSED
};

/// Struct /Script/TypedElementFramework.TypedElementParentColumn
/// Size: 0x0007 (0x000001 - 0x000008)
struct FTypedElementParentColumn : FTypedElementDataStorageColumn
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/TypedElementFramework.TypedElementUnresolvedParentColumn
/// Size: 0x0007 (0x000001 - 0x000008)
struct FTypedElementUnresolvedParentColumn : FTypedElementDataStorageColumn
{ 
	uint64_t                                           ParentIdHash;                                               // 0x0000   (0x0008)  
};

/// Struct /Script/TypedElementFramework.TypedElementLabelColumn
/// Size: 0x000F (0x000001 - 0x000010)
struct FTypedElementLabelColumn : FTypedElementDataStorageColumn
{ 
	SDK_UNDEFINED(16,15705) /* FString */              __um(Label);                                                // 0x0000   (0x0010)  
};

/// Struct /Script/TypedElementFramework.TypedElementLabelHashColumn
/// Size: 0x0007 (0x000001 - 0x000008)
struct FTypedElementLabelHashColumn : FTypedElementDataStorageColumn
{ 
	uint64_t                                           LabelHash;                                                  // 0x0000   (0x0008)  
};

/// Struct /Script/TypedElementFramework.ScriptTypedElementListProxy
/// Size: 0x0010 (0x000000 - 0x000010)
struct FScriptTypedElementListProxy
{ 
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0000   (0x0010)  MISSED
};

/// Struct /Script/TypedElementFramework.TypedElementSyncBackToWorldTag
/// Size: 0x0000 (0x000001 - 0x000001)
struct FTypedElementSyncBackToWorldTag : FTypedElementDataStorageTag
{ 
};

/// Struct /Script/TypedElementFramework.TypedElementSyncFromWorldTag
/// Size: 0x0000 (0x000001 - 0x000001)
struct FTypedElementSyncFromWorldTag : FTypedElementDataStorageTag
{ 
};

/// Struct /Script/TypedElementFramework.TypedElementRowReferenceColumn
/// Size: 0x0007 (0x000001 - 0x000008)
struct FTypedElementRowReferenceColumn : FTypedElementDataStorageColumn
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/TypedElementFramework.TypedElementPackageUnresolvedReference
/// Size: 0x0017 (0x000001 - 0x000018)
struct FTypedElementPackageUnresolvedReference : FTypedElementDataStorageColumn
{ 
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0000   (0x0018)  MISSED
};

/// Struct /Script/TypedElementFramework.TypedElementPackageReference
/// Size: 0x0007 (0x000001 - 0x000008)
struct FTypedElementPackageReference : FTypedElementDataStorageColumn
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/TypedElementFramework.TypedElementPackagePathColumn
/// Size: 0x000F (0x000001 - 0x000010)
struct FTypedElementPackagePathColumn : FTypedElementDataStorageColumn
{ 
	SDK_UNDEFINED(16,15706) /* FString */              __um(Path);                                                 // 0x0000   (0x0010)  
};

/// Struct /Script/TypedElementFramework.TypedElementPackageLoadedPathColumn
/// Size: 0x0007 (0x000001 - 0x000008)
struct FTypedElementPackageLoadedPathColumn : FTypedElementDataStorageColumn
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/TypedElementFramework.TypedElementPivotOffset
/// Size: 0x0017 (0x000001 - 0x000018)
struct FTypedElementPivotOffset : FTypedElementDataStorageColumn
{ 
	FVector                                            Offset;                                                     // 0x0000   (0x0018)  
};

/// Struct /Script/TypedElementFramework.SCCInChangelistTag
/// Size: 0x0000 (0x000001 - 0x000001)
struct FSCCInChangelistTag : FTypedElementDataStorageTag
{ 
};

/// Struct /Script/TypedElementFramework.SCCStagedTag
/// Size: 0x0000 (0x000001 - 0x000001)
struct FSCCStagedTag : FTypedElementDataStorageTag
{ 
};

/// Struct /Script/TypedElementFramework.SCCLockedTag
/// Size: 0x0000 (0x000001 - 0x000001)
struct FSCCLockedTag : FTypedElementDataStorageTag
{ 
};

/// Struct /Script/TypedElementFramework.SCCExternallyEditedTag
/// Size: 0x0000 (0x000001 - 0x000001)
struct FSCCExternallyEditedTag : FTypedElementDataStorageTag
{ 
};

/// Struct /Script/TypedElementFramework.SCCStatusColumn
/// Size: 0x0003 (0x000001 - 0x000004)
struct FSCCStatusColumn : FTypedElementDataStorageColumn
{ 
	ESCCModification                                   Modification;                                               // 0x0000   (0x0004)  
};

/// Struct /Script/TypedElementFramework.SCCRevisionId
/// Size: 0x0014 (0x000000 - 0x000014)
struct FSCCRevisionId
{ 
	uint32_t                                           ID;                                                         // 0x0000   (0x0014)  
};

/// Struct /Script/TypedElementFramework.SCCRevisionIdColumn
/// Size: 0x0013 (0x000001 - 0x000014)
struct FSCCRevisionIdColumn : FTypedElementDataStorageColumn
{ 
	FSCCRevisionId                                     RevisionId;                                                 // 0x0000   (0x0014)  
};

/// Struct /Script/TypedElementFramework.SCCExternalRevisionIdColumn
/// Size: 0x0013 (0x000001 - 0x000014)
struct FSCCExternalRevisionIdColumn : FTypedElementDataStorageColumn
{ 
	FSCCRevisionId                                     RevisionId;                                                 // 0x0000   (0x0014)  
};

/// Struct /Script/TypedElementFramework.SCCUserInfo
/// Size: 0x0010 (0x000000 - 0x000010)
struct FSCCUserInfo
{ 
	SDK_UNDEFINED(16,15707) /* FString */              __um(Name);                                                 // 0x0000   (0x0010)  
};

/// Struct /Script/TypedElementFramework.SCCExternallyLockedColumn
/// Size: 0x000F (0x000001 - 0x000010)
struct FSCCExternallyLockedColumn : FTypedElementDataStorageColumn
{ 
	FSCCUserInfo                                       LockedBy;                                                   // 0x0000   (0x0010)  
};

/// Struct /Script/TypedElementFramework.TypedElementSelectionColumn
/// Size: 0x0003 (0x000001 - 0x000004)
struct FTypedElementSelectionColumn : FTypedElementDataStorageColumn
{ 
	FName                                              SelectionSet;                                               // 0x0000   (0x0004)  
};

/// Struct /Script/TypedElementFramework.TypedElementSlateWidgetReferenceColumn
/// Size: 0x000F (0x000001 - 0x000010)
struct FTypedElementSlateWidgetReferenceColumn : FTypedElementDataStorageColumn
{ 
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0000   (0x0010)  MISSED
};

/// Struct /Script/TypedElementFramework.TypedElementSlateWidgetReferenceDeletesRowTag
/// Size: 0x0000 (0x000001 - 0x000001)
struct FTypedElementSlateWidgetReferenceDeletesRowTag : FTypedElementDataStorageTag
{ 
};

/// Struct /Script/TypedElementFramework.TestColumnA
/// Size: 0x0000 (0x000001 - 0x000001)
struct FTestColumnA : FTypedElementDataStorageColumn
{ 
};

/// Struct /Script/TypedElementFramework.TestColumnB
/// Size: 0x0000 (0x000001 - 0x000001)
struct FTestColumnB : FTypedElementDataStorageColumn
{ 
};

/// Struct /Script/TypedElementFramework.TestColumnC
/// Size: 0x0000 (0x000001 - 0x000001)
struct FTestColumnC : FTypedElementDataStorageColumn
{ 
};

/// Struct /Script/TypedElementFramework.TestColumnD
/// Size: 0x0000 (0x000001 - 0x000001)
struct FTestColumnD : FTypedElementDataStorageColumn
{ 
};

/// Struct /Script/TypedElementFramework.TestColumnE
/// Size: 0x0000 (0x000001 - 0x000001)
struct FTestColumnE : FTypedElementDataStorageColumn
{ 
};

/// Struct /Script/TypedElementFramework.TestColumnF
/// Size: 0x0000 (0x000001 - 0x000001)
struct FTestColumnF : FTypedElementDataStorageColumn
{ 
};

/// Struct /Script/TypedElementFramework.TestColumnG
/// Size: 0x0000 (0x000001 - 0x000001)
struct FTestColumnG : FTypedElementDataStorageColumn
{ 
};

/// Struct /Script/TypedElementFramework.TestTagColumnA
/// Size: 0x0000 (0x000001 - 0x000001)
struct FTestTagColumnA : FTypedElementDataStorageTag
{ 
};

/// Struct /Script/TypedElementFramework.TestTagColumnB
/// Size: 0x0000 (0x000001 - 0x000001)
struct FTestTagColumnB : FTypedElementDataStorageTag
{ 
};

/// Struct /Script/TypedElementFramework.TestTagColumnC
/// Size: 0x0000 (0x000001 - 0x000001)
struct FTestTagColumnC : FTypedElementDataStorageTag
{ 
};

/// Struct /Script/TypedElementFramework.TestTagColumnD
/// Size: 0x0000 (0x000001 - 0x000001)
struct FTestTagColumnD : FTypedElementDataStorageTag
{ 
};

/// Struct /Script/TypedElementFramework.TypedElementLocalTransformColumn
/// Size: 0x005F (0x000001 - 0x000060)
struct FTypedElementLocalTransformColumn : FTypedElementDataStorageColumn
{ 
	FTransform                                         Transform;                                                  // 0x0000   (0x0060)  
};

/// Struct /Script/TypedElementFramework.TypedElementClassTypeInfoColumn
/// Size: 0x0007 (0x000001 - 0x000008)
struct FTypedElementClassTypeInfoColumn : FTypedElementDataStorageColumn
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/TypedElementFramework.TypedElementScriptStructTypeInfoColumn
/// Size: 0x0007 (0x000001 - 0x000008)
struct FTypedElementScriptStructTypeInfoColumn : FTypedElementDataStorageColumn
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/TypedElementFramework.TypedElementU32IntValueCacheColumn
/// Size: 0x0003 (0x000001 - 0x000004)
struct FTypedElementU32IntValueCacheColumn : FTypedElementDataStorageColumn
{ 
	uint32_t                                           Value;                                                      // 0x0000   (0x0004)  
};

/// Struct /Script/TypedElementFramework.TypedElementI32IntValueCacheColumn
/// Size: 0x0003 (0x000001 - 0x000004)
struct FTypedElementI32IntValueCacheColumn : FTypedElementDataStorageColumn
{ 
	int32_t                                            Value;                                                      // 0x0000   (0x0004)  
};

/// Struct /Script/TypedElementFramework.TypedElementU64IntValueCacheColumn
/// Size: 0x0007 (0x000001 - 0x000008)
struct FTypedElementU64IntValueCacheColumn : FTypedElementDataStorageColumn
{ 
	uint64_t                                           Value;                                                      // 0x0000   (0x0008)  
};

/// Struct /Script/TypedElementFramework.TypedElementI64IntValueCacheColumn
/// Size: 0x0007 (0x000001 - 0x000008)
struct FTypedElementI64IntValueCacheColumn : FTypedElementDataStorageColumn
{ 
	int64_t                                            Value;                                                      // 0x0000   (0x0008)  
};

/// Struct /Script/TypedElementFramework.TypedElementFloatValueCacheColumn
/// Size: 0x0003 (0x000001 - 0x000004)
struct FTypedElementFloatValueCacheColumn : FTypedElementDataStorageColumn
{ 
	float                                              Value;                                                      // 0x0000   (0x0004)  
};

/// Struct /Script/TypedElementFramework.TypedElementViewportColorColumn
/// Size: 0x0000 (0x000001 - 0x000001)
struct FTypedElementViewportColorColumn : FTypedElementDataStorageColumn
{ 
};

