
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: TypedElementFramework

/// Class /Script/TypedElementRuntime.TypedElementSelectionSetLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UTypedElementSelectionSetLibrary : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/TypedElementRuntime.TypedElementSelectionSetLibrary.SetSelectionFromList
	// bool SetSelectionFromList(class UTypedElementSelectionSet* SelectionSet, FScriptTypedElementListProxy ElementList, FTypedElementSelectionOptions SelectionOptions); // [0x610385c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/TypedElementRuntime.TypedElementSelectionSetLibrary.SelectElementsFromList
	// bool SelectElementsFromList(class UTypedElementSelectionSet* SelectionSet, FScriptTypedElementListProxy ElementList, FTypedElementSelectionOptions SelectionOptions); // [0x6102fa4] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/TypedElementRuntime.TypedElementSelectionSetLibrary.GetNormalizedSelection
	// FScriptTypedElementListProxy GetNormalizedSelection(class UTypedElementSelectionSet* SelectionSet, FTypedElementSelectionNormalizationOptions NormalizationOptions); // [0x6101948] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/TypedElementRuntime.TypedElementSelectionSetLibrary.GetNormalizedElementList
	// FScriptTypedElementListProxy GetNormalizedElementList(class UTypedElementSelectionSet* SelectionSet, FScriptTypedElementListProxy ElementList, FTypedElementSelectionNormalizationOptions NormalizationOptions); // [0x61017f4] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/TypedElementRuntime.TypedElementSelectionSetLibrary.DeselectElementsFromList
	// bool DeselectElementsFromList(class UTypedElementSelectionSet* SelectionSet, FScriptTypedElementListProxy ElementList, FTypedElementSelectionOptions SelectionOptions); // [0x6101204] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/TypedElementRuntime.TypedElementSelectionSet
/// Size: 0x0878 (0x000028 - 0x0008A0)
class UTypedElementSelectionSet : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2208;

public:
	SMember(FMulticastInlineDelegate)                  OnPreSelectionChange                                        OFFSET(getStruct<T>, {0x828, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnSelectionChange                                           OFFSET(getStruct<T>, {0x838, 16, 0, 0})


	/// Functions
	// Function /Script/TypedElementRuntime.TypedElementSelectionSet.SetSelection
	// bool SetSelection(TArray<FScriptTypedElementHandle>& InElementHandles, FTypedElementSelectionOptions InSelectionOptions); // [0x61036a0] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/TypedElementRuntime.TypedElementSelectionSet.SelectElements
	// bool SelectElements(TArray<FScriptTypedElementHandle>& InElementHandles, FTypedElementSelectionOptions InSelectionOptions); // [0x6102de8] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/TypedElementRuntime.TypedElementSelectionSet.SelectElement
	// bool SelectElement(FScriptTypedElementHandle& InElementHandle, FTypedElementSelectionOptions InSelectionOptions);        // [0x6102c1c] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/TypedElementRuntime.TypedElementSelectionSet.RestoreSelectionState
	// void RestoreSelectionState(FTypedElementSelectionSetState& InSelectionState);                                            // [0x6102974] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/TypedElementRuntime.TypedElementSelectionSet.OnPreChangeDynamic__DelegateSignature
	// void OnPreChangeDynamic__DelegateSignature(class UTypedElementSelectionSet* SelectionSet);                               // [0x228deb8] MulticastDelegate|Public|Delegate 
	// Function /Script/TypedElementRuntime.TypedElementSelectionSet.OnChangeDynamic__DelegateSignature
	// void OnChangeDynamic__DelegateSignature(class UTypedElementSelectionSet* SelectionSet);                                  // [0x228deb8] MulticastDelegate|Public|Delegate 
	// Function /Script/TypedElementRuntime.TypedElementSelectionSet.K2_GetSelectedElementHandles
	// TArray<FScriptTypedElementHandle> K2_GetSelectedElementHandles(class UClass* InBaseInterfaceType);                       // [0x61028b8] Final|RequiredAPI|Native|Public|BlueprintCallable|Const 
	// Function /Script/TypedElementRuntime.TypedElementSelectionSet.IsElementSelected
	// bool IsElementSelected(FScriptTypedElementHandle& InElementHandle, FTypedElementIsSelectedOptions InSelectionOptions);   // [0x610270c] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TypedElementRuntime.TypedElementSelectionSet.HasSelectedObjects
	// bool HasSelectedObjects(class UClass* InRequiredClass);                                                                  // [0x6102478] Final|Native|Public|BlueprintCallable|Const 
	// Function /Script/TypedElementRuntime.TypedElementSelectionSet.HasSelectedElements
	// bool HasSelectedElements(class UClass* InBaseInterfaceType);                                                             // [0x610237c] Final|Native|Public|BlueprintCallable|Const 
	// Function /Script/TypedElementRuntime.TypedElementSelectionSet.GetTopSelectedObject
	// class UObject* GetTopSelectedObject(class UClass* InRequiredClass);                                                      // [0x61022b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TypedElementRuntime.TypedElementSelectionSet.GetSelectionElement
	// FScriptTypedElementHandle GetSelectionElement(FScriptTypedElementHandle& InElementHandle, ETypedElementSelectionMethod InSelectionMethod); // [0x6102104] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TypedElementRuntime.TypedElementSelectionSet.GetSelectedObjects
	// TArray<UObject*> GetSelectedObjects(class UClass* InRequiredClass);                                                      // [0x6101d4c] Final|Native|Public|BlueprintCallable|Const 
	// Function /Script/TypedElementRuntime.TypedElementSelectionSet.GetNumSelectedElements
	// int32_t GetNumSelectedElements();                                                                                        // [0x6101a18] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TypedElementRuntime.TypedElementSelectionSet.GetCurrentSelectionState
	// FTypedElementSelectionSetState GetCurrentSelectionState();                                                               // [0x61017b8] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TypedElementRuntime.TypedElementSelectionSet.GetBottomSelectedObject
	// class UObject* GetBottomSelectedObject(class UClass* InRequiredClass);                                                   // [0x61014f4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TypedElementRuntime.TypedElementSelectionSet.DeselectElements
	// bool DeselectElements(TArray<FScriptTypedElementHandle>& InElementHandles, FTypedElementSelectionOptions InSelectionOptions); // [0x6101048] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/TypedElementRuntime.TypedElementSelectionSet.DeselectElement
	// bool DeselectElement(FScriptTypedElementHandle& InElementHandle, FTypedElementSelectionOptions InSelectionOptions);      // [0x6100e7c] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/TypedElementRuntime.TypedElementSelectionSet.CountSelectedObjects
	// int32_t CountSelectedObjects(class UClass* InRequiredClass);                                                             // [0x6100be0] Final|Native|Public|BlueprintCallable|Const 
	// Function /Script/TypedElementRuntime.TypedElementSelectionSet.CountSelectedElements
	// int32_t CountSelectedElements(class UClass* InBaseInterfaceType);                                                        // [0x6100b38] Final|Native|Public|BlueprintCallable|Const 
	// Function /Script/TypedElementRuntime.TypedElementSelectionSet.ClearSelection
	// bool ClearSelection(FTypedElementSelectionOptions InSelectionOptions);                                                   // [0x6100a88] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/TypedElementRuntime.TypedElementSelectionSet.CanSelectElement
	// bool CanSelectElement(FScriptTypedElementHandle& InElementHandle, FTypedElementSelectionOptions InSelectionOptions);     // [0x61008bc] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TypedElementRuntime.TypedElementSelectionSet.CanDeselectElement
	// bool CanDeselectElement(FScriptTypedElementHandle& InElementHandle, FTypedElementSelectionOptions InSelectionOptions);   // [0x61005d4] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TypedElementRuntime.TypedElementSelectionSet.AllowSelectionModifiers
	// bool AllowSelectionModifiers(FScriptTypedElementHandle& InElementHandle);                                                // [0x61003c8] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/TypedElementRuntime.TypedElementAssetDataInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UTypedElementAssetDataInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/TypedElementRuntime.TypedElementAssetDataInterface.GetAssetData
	// FAssetData GetAssetData(FScriptTypedElementHandle& InElementHandle);                                                     // [0x6101428] RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/TypedElementRuntime.TypedElementAssetDataInterface.GetAllReferencedAssetDatas
	// TArray<FAssetData> GetAllReferencedAssetDatas(FScriptTypedElementHandle& InElementHandle);                               // [0x610135c] RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/TypedElementRuntime.TypedElementHierarchyInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UTypedElementHierarchyInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/TypedElementRuntime.TypedElementHierarchyInterface.GetParentElement
	// FScriptTypedElementHandle GetParentElement(FScriptTypedElementHandle& InElementHandle, bool bAllowCreate);               // [0x6101b9c] RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/TypedElementRuntime.TypedElementHierarchyInterface.GetChildElements
	// void GetChildElements(FScriptTypedElementHandle& InElementHandle, TArray<FScriptTypedElementHandle>& OutElementHandles, bool bAllowCreate); // [0x61015c0] RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/TypedElementRuntime.TypedElementObjectInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UTypedElementObjectInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/TypedElementRuntime.TypedElementObjectInterface.GetObjectClass
	// class UClass* GetObjectClass(FScriptTypedElementHandle& InElementHandle);                                                // [0x6101ae8] RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/TypedElementRuntime.TypedElementObjectInterface.GetObject
	// class UObject* GetObject(FScriptTypedElementHandle& InElementHandle);                                                    // [0x6101a34] RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/TypedElementRuntime.TypedElementPrimitiveCustomDataInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UTypedElementPrimitiveCustomDataInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/TypedElementRuntime.TypedElementPrimitiveCustomDataInterface.SetCustomDataValue
	// void SetCustomDataValue(FScriptTypedElementHandle& InElementHandle, int32_t CustomDataIndex, float CustomDataValue, bool bMarkRenderStateDirty); // [0x6103334] RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/TypedElementRuntime.TypedElementPrimitiveCustomDataInterface.SetCustomData
	// void SetCustomData(FScriptTypedElementHandle& InElementHandle, TArray<float>& CustomDataFloats, bool bMarkRenderStateDirty); // [0x61030fc] RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/TypedElementRuntime.TypedElementSelectionInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UTypedElementSelectionInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/TypedElementRuntime.TypedElementSelectionInterface.SelectElement
	// bool SelectElement(FScriptTypedElementHandle& InElementHandle, FScriptTypedElementListProxy InSelectionSet, FTypedElementSelectionOptions& InSelectionOptions); // [0x6102a10] RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/TypedElementRuntime.TypedElementSelectionInterface.IsElementSelected
	// bool IsElementSelected(FScriptTypedElementHandle& InElementHandle, FScriptTypedElementListProxy InSelectionSet, FTypedElementIsSelectedOptions& InSelectionOptions); // [0x6102508] RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/TypedElementRuntime.TypedElementSelectionInterface.GetSelectionElement
	// FScriptTypedElementHandle GetSelectionElement(FScriptTypedElementHandle& InElementHandle, FScriptTypedElementListProxy InCurrentSelection, ETypedElementSelectionMethod InSelectionMethod); // [0x6101e34] RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/TypedElementRuntime.TypedElementSelectionInterface.DeselectElement
	// bool DeselectElement(FScriptTypedElementHandle& InElementHandle, FScriptTypedElementListProxy InSelectionSet, FTypedElementSelectionOptions& InSelectionOptions); // [0x6100c70] RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/TypedElementRuntime.TypedElementSelectionInterface.CanSelectElement
	// bool CanSelectElement(FScriptTypedElementHandle& InElementHandle, FTypedElementSelectionOptions& InSelectionOptions);    // [0x61007a0] RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/TypedElementRuntime.TypedElementSelectionInterface.CanDeselectElement
	// bool CanDeselectElement(FScriptTypedElementHandle& InElementHandle, FTypedElementSelectionOptions& InSelectionOptions);  // [0x61004b8] RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/TypedElementRuntime.TypedElementSelectionInterface.AllowSelectionModifiers
	// bool AllowSelectionModifiers(FScriptTypedElementHandle& InElementHandle, FScriptTypedElementListProxy InSelectionSet);   // [0x61001e4] RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/TypedElementRuntime.TypedElementSelectionOptions
/// Size: 0x000C (0x000000 - 0x00000C)
class FTypedElementSelectionOptions : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(bool)                                      bAllowHidden                                                OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(bool)                                      bAllowGroups                                                OFFSET(get<bool>, {0x1, 1, 0, 0})
	DMember(bool)                                      bAllowLegacyNotifications                                   OFFSET(get<bool>, {0x2, 1, 0, 0})
	DMember(bool)                                      bWarnIfLocked                                               OFFSET(get<bool>, {0x3, 1, 0, 0})
	DMember(bool)                                      bAllowSubRootSelection                                      OFFSET(get<bool>, {0x4, 1, 0, 0})
	CMember(ETypedElementChildInclusionMethod)         ChildElementInclusionMethod                                 OFFSET(get<T>, {0x5, 1, 0, 0})
};

/// Struct /Script/TypedElementRuntime.TypedElementSelectionSetState
/// Size: 0x0018 (0x000000 - 0x000018)
class FTypedElementSelectionSetState : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(TWeakObjectPtr<UTypedElementSelectionSet*>) CreatedFromSelectionSet                                    OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/TypedElementRuntime.TypedElementIsSelectedOptions
/// Size: 0x0008 (0x000000 - 0x000008)
class FTypedElementIsSelectedOptions : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(bool)                                      bAllowIndirect                                              OFFSET(get<bool>, {0x0, 1, 0, 0})
};

/// Struct /Script/TypedElementRuntime.TypedElementSelectionNormalizationOptions
/// Size: 0x0008 (0x000000 - 0x000008)
class FTypedElementSelectionNormalizationOptions : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(bool)                                      bExpandGroups                                               OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(bool)                                      bFollowAttachment                                           OFFSET(get<bool>, {0x1, 1, 0, 0})
};

/// Enum /Script/TypedElementRuntime.ETypedElementChildInclusionMethod
/// Size: 0x03
enum class ETypedElementChildInclusionMethod : uint8_t
{
	ETypedElementChildInclusionMethod__None                                          = 0,
	ETypedElementChildInclusionMethod__Immediate                                     = 1,
	ETypedElementChildInclusionMethod__Recursive                                     = 2
};

/// Enum /Script/TypedElementRuntime.ETypedElementSelectionMethod
/// Size: 0x02
enum class ETypedElementSelectionMethod : uint8_t
{
	ETypedElementSelectionMethod__Primary                                            = 0,
	ETypedElementSelectionMethod__Secondary                                          = 1
};

