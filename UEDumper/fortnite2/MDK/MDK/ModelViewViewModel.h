
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FieldNotification
/// dependency: UMG

/// Class /Script/ModelViewViewModel.MVVMConversionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UMVVMConversionLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/ModelViewViewModel.MVVMConversionLibrary.Conv_BoolToSlateVisibility
	// ESlateVisibility Conv_BoolToSlateVisibility(bool bIsVisible, ESlateVisibility TrueVisibility, ESlateVisibility FalseVisibility); // [0x3882c24] Final|Native|Static|Private|BlueprintCallable|BlueprintPure 
};

/// Class /Script/ModelViewViewModel.MVVMViewClassExtension
/// Size: 0x0000 (0x000028 - 0x000028)
class UMVVMViewClassExtension : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/ModelViewViewModel.MVVMViewListViewBaseExtension
/// Size: 0x0018 (0x000028 - 0x000040)
class UMVVMViewListViewBaseExtension : public UMVVMViewClassExtension
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FName)                                     WidgetName                                                  OFFSET(getStruct<T>, {0x28, 4, 0, 0})
	SMember(FName)                                     EntryViewModelName                                          OFFSET(getStruct<T>, {0x2C, 4, 0, 0})
	SMember(FMVVMVCompiledFieldPath)                   WidgetPath                                                  OFFSET(getStruct<T>, {0x30, 4, 0, 0})
	CMember(TWeakObjectPtr<UListViewBase*>)            CachedListViewWidget                                        OFFSET(get<T>, {0x34, 8, 0, 0})
};

/// Class /Script/ModelViewViewModel.MVVMViewPanelWidgetExtension
/// Size: 0x0040 (0x000028 - 0x000068)
class UMVVMViewPanelWidgetExtension : public UMVVMViewClassExtension
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FName)                                     WidgetName                                                  OFFSET(getStruct<T>, {0x28, 4, 0, 0})
	SMember(FName)                                     EntryViewModelName                                          OFFSET(getStruct<T>, {0x2C, 4, 0, 0})
	CMember(class UClass*)                             EntryWidgetClass                                            OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(class UPanelSlot*)                         SlotTemplate                                                OFFSET(get<T>, {0x38, 8, 0, 0})
	SMember(FName)                                     PanelPropertyName                                           OFFSET(getStruct<T>, {0x40, 4, 0, 0})
	CMember(class UClass*)                             EntryViewModelClass                                         OFFSET(get<T>, {0x48, 8, 0, 0})
	SMember(FMVVMVCompiledFieldPath)                   WidgetPath                                                  OFFSET(getStruct<T>, {0x50, 4, 0, 0})
	CMember(TWeakObjectPtr<UPanelWidget*>)             CachedPanelWidget                                           OFFSET(get<T>, {0x54, 8, 0, 0})
	CMember(TWeakObjectPtr<UUserWidget*>)              CachedOwningUserWidget                                      OFFSET(get<T>, {0x5C, 8, 0, 0})


	/// Functions
	// Function /Script/ModelViewViewModel.MVVMViewPanelWidgetExtension.BP_SetItems
	// void BP_SetItems(TArray<UObject*>& InItems);                                                                             // [0x7eef838] Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/ModelViewViewModel.MVVMGameSubsystem
/// Size: 0x0008 (0x000030 - 0x000038)
class UMVVMGameSubsystem : public UGameInstanceSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(class UMVVMViewModelCollectionObject*)     ViewModelCollection                                         OFFSET(get<T>, {0x30, 8, 0, 0})


	/// Functions
	// Function /Script/ModelViewViewModel.MVVMGameSubsystem.GetViewModelCollection
	// class UMVVMViewModelCollectionObject* GetViewModelCollection();                                                          // [0x6884848] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/ModelViewViewModel.MVVMSubsystem
/// Size: 0x0000 (0x000030 - 0x000030)
class UMVVMSubsystem : public UEngineSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:


	/// Functions
	// Function /Script/ModelViewViewModel.MVVMSubsystem.K2_GetViewFromUserWidget
	// class UMVVMView* K2_GetViewFromUserWidget(class UUserWidget* UserWidget);                                                // [0x7ef07a8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ModelViewViewModel.MVVMSubsystem.K2_GetAvailableBindings
	// TArray<FMVVMAvailableBinding> K2_GetAvailableBindings(class UClass* Class, class UClass* Accessor);                      // [0x7ef0030] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ModelViewViewModel.MVVMSubsystem.K2_GetAvailableBinding
	// FMVVMAvailableBinding K2_GetAvailableBinding(class UClass* Class, FMVVMBindingName BindingName, class UClass* Accessor); // [0x7eefec4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ModelViewViewModel.MVVMSubsystem.GetGlobalViewModelCollection
	// class UMVVMViewModelCollectionObject* GetGlobalViewModelCollection();                                                    // [0x6c981bc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ModelViewViewModel.MVVMSubsystem.DoesWidgetTreeContainedWidget
	// bool DoesWidgetTreeContainedWidget(class UWidgetTree* WidgetTree, class UWidget* ViewWidget);                            // [0x7eef8d8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/ModelViewViewModel.MVVMViewModelBase
/// Size: 0x0040 (0x000028 - 0x000068)
class UMVVMViewModelBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:


	/// Functions
	// Function /Script/ModelViewViewModel.MVVMViewModelBase.K2_SetPropertyValue
	// bool K2_SetPropertyValue(int32_t& OldValue, int32_t& NewValue);                                                          // [0x7ef0928] Final|Native|Protected|HasOutParms|BlueprintCallable 
	// Function /Script/ModelViewViewModel.MVVMViewModelBase.K2_RemoveFieldValueChangedDelegate
	// void K2_RemoveFieldValueChangedDelegate(FFieldNotificationId FieldId, FDelegateProperty Delegate);                       // [0x7ef0828] Final|Native|Public|BlueprintCallable 
	// Function /Script/ModelViewViewModel.MVVMViewModelBase.K2_BroadcastFieldValueChanged
	// void K2_BroadcastFieldValueChanged(FFieldNotificationId FieldId);                                                        // [0x7eefe20] Final|Native|Protected|BlueprintCallable 
	// Function /Script/ModelViewViewModel.MVVMViewModelBase.K2_AddFieldValueChangedDelegate
	// void K2_AddFieldValueChangedDelegate(FFieldNotificationId FieldId, FDelegateProperty Delegate);                          // [0x2b4adf8] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/ModelViewViewModel.MVVMViewModelCollectionObject
/// Size: 0x0028 (0x000028 - 0x000050)
class UMVVMViewModelCollectionObject : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FMVVMViewModelCollection)                  ViewModelCollection                                         OFFSET(getStruct<T>, {0x28, 40, 0, 0})


	/// Functions
	// Function /Script/ModelViewViewModel.MVVMViewModelCollectionObject.RemoveViewModel
	// bool RemoveViewModel(FMVVMViewModelContext Context);                                                                     // [0x7ef14cc] Final|Native|Public|BlueprintCallable 
	// Function /Script/ModelViewViewModel.MVVMViewModelCollectionObject.RemoveAllViewModelInstance
	// int32_t RemoveAllViewModelInstance(class UMVVMViewModelBase* ViewModel);                                                 // [0x7ef142c] Final|Native|Public|BlueprintCallable 
	// Function /Script/ModelViewViewModel.MVVMViewModelCollectionObject.FindViewModelInstance
	// class UMVVMViewModelBase* FindViewModelInstance(FMVVMViewModelContext Context);                                          // [0x7eefbfc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ModelViewViewModel.MVVMViewModelCollectionObject.FindFirstViewModelInstanceOfType
	// class UMVVMViewModelBase* FindFirstViewModelInstanceOfType(class UClass*& ViewModelClass);                               // [0x7eefb24] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ModelViewViewModel.MVVMViewModelCollectionObject.AddViewModelInstance
	// bool AddViewModelInstance(FMVVMViewModelContext Context, class UMVVMViewModelBase* ViewModel);                           // [0x7eef68c] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/ModelViewViewModel.MVVMInstancedViewModelGeneratedClass
/// Size: 0x0060 (0x000360 - 0x0003C0)
class UMVVMInstancedViewModelGeneratedClass : public UBlueprintGeneratedClass
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 960;

public:
	CMember(TArray<class UFunction*>)                  OnRepFunctionToLink                                         OFFSET(get<T>, {0x360, 16, 0, 0})
};

/// Class /Script/ModelViewViewModel.MVVMViewModelBlueprintGeneratedClass
/// Size: 0x0000 (0x000360 - 0x000360)
class UMVVMViewModelBlueprintGeneratedClass : public UBlueprintGeneratedClass
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 864;

public:
};

/// Class /Script/ModelViewViewModel.MVVMBindingSubsystem
/// Size: 0x0068 (0x000030 - 0x000098)
class UMVVMBindingSubsystem : public UEngineSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
};

/// Class /Script/ModelViewViewModel.MVVMView
/// Size: 0x0038 (0x000028 - 0x000060)
class UMVVMView : public UUserWidgetExtension
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(class UMVVMViewClass*)                     GeneratedViewClass                                          OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(TArray<FMVVMView_Source>)                  Sources                                                     OFFSET(get<T>, {0x30, 16, 0, 0})
	DMember(uint64_t)                                  ValidSources                                                OFFSET(get<uint64_t>, {0x50, 8, 0, 0})
	DMember(char)                                      NumberOfSourceWithTickBinding                               OFFSET(get<char>, {0x58, 1, 0, 0})
	DMember(bool)                                      bLogBinding                                                 OFFSET(get<bool>, {0x59, 1, 0, 0})
	DMember(bool)                                      bConstructed                                                OFFSET(get<bool>, {0x5A, 1, 0, 0})
	DMember(bool)                                      bSourcesInitialized                                         OFFSET(get<bool>, {0x5B, 1, 0, 0})
	DMember(bool)                                      bBindingsInitialized                                        OFFSET(get<bool>, {0x5C, 1, 0, 0})
	DMember(bool)                                      bEventsInitialized                                          OFFSET(get<bool>, {0x5D, 1, 0, 0})
	DMember(bool)                                      bHasDefaultTickBinding                                      OFFSET(get<bool>, {0x5E, 1, 0, 0})


	/// Functions
	// Function /Script/ModelViewViewModel.MVVMView.UninitializeSources
	// void UninitializeSources();                                                                                              // [0x7ef16e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ModelViewViewModel.MVVMView.UninitializeEvents
	// void UninitializeEvents();                                                                                               // [0x7ef16cc] Final|Native|Public|BlueprintCallable 
	// Function /Script/ModelViewViewModel.MVVMView.UninitializeBindings
	// void UninitializeBindings();                                                                                             // [0x7ef16b8] Final|Native|Public|BlueprintCallable 
	// Function /Script/ModelViewViewModel.MVVMView.SetViewModelByClass
	// bool SetViewModelByClass(TScriptInterface<Class> NewValue);                                                              // [0x7ef156c] Final|Native|Public|BlueprintCallable 
	// Function /Script/ModelViewViewModel.MVVMView.SetViewModel
	// bool SetViewModel(FName ViewModelName, TScriptInterface<Class> ViewModel);                                               // [0x1ce2718] Final|Native|Public|BlueprintCallable 
	// Function /Script/ModelViewViewModel.MVVMView.InitializeSources
	// void InitializeSources();                                                                                                // [0x7eefe0c] Final|Native|Public|BlueprintCallable 
	// Function /Script/ModelViewViewModel.MVVMView.InitializeEvents
	// void InitializeEvents();                                                                                                 // [0x7eefdf8] Final|Native|Public|BlueprintCallable 
	// Function /Script/ModelViewViewModel.MVVMView.InitializeBindings
	// void InitializeBindings();                                                                                               // [0x7eefde4] Final|Native|Public|BlueprintCallable 
	// Function /Script/ModelViewViewModel.MVVMView.GetViewModel
	// TScriptInterface<Class> GetViewModel(FName ViewModelName);                                                               // [0x7eefc9c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ModelViewViewModel.MVVMView.ExecuteViewModelBindings
	// bool ExecuteViewModelBindings(FName ViewModelName);                                                                      // [0x7eef9ec] Final|Native|Public|BlueprintCallable 
	// Function /Script/ModelViewViewModel.MVVMView.AreSourcesValidForEvent
	// bool AreSourcesValidForEvent(int32_t EventKey);                                                                          // [0x7eef7ac] Final|Native|Private|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ModelViewViewModel.MVVMView.AreSourcesInitialized
	// bool AreSourcesInitialized();                                                                                            // [0x7eef798] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ModelViewViewModel.MVVMView.AreEventsInitialized
	// bool AreEventsInitialized();                                                                                             // [0x7eef784] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ModelViewViewModel.MVVMView.AreBindingsInitialized
	// bool AreBindingsInitialized();                                                                                           // [0x7eef770] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/ModelViewViewModel.MVVMViewClass
/// Size: 0x00B0 (0x000028 - 0x0000D8)
class UMVVMViewClass : public UWidgetBlueprintGeneratedClassExtension
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	CMember(TArray<FMVVMViewClass_Source>)             Sources                                                     OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(TArray<FMVVMViewClass_Binding>)            Bindings                                                    OFFSET(get<T>, {0x38, 16, 0, 0})
	CMember(TArray<FMVVMViewClass_EvaluateSource>)     EvaluateSources                                             OFFSET(get<T>, {0x48, 16, 0, 0})
	CMember(TArray<FMVVMViewClass_Event>)              Events                                                      OFFSET(get<T>, {0x58, 16, 0, 0})
	CMember(TArray<class UMVVMViewClassExtension*>)    ViewClassExtensions                                         OFFSET(get<T>, {0x68, 16, 0, 0})
	SMember(FMVVMCompiledBindingLibrary)               BindingLibrary                                              OFFSET(getStruct<T>, {0x78, 80, 0, 0})
	DMember(uint64_t)                                  OptionalSources                                             OFFSET(get<uint64_t>, {0xC8, 8, 0, 0})
	DMember(bool)                                      bInitializeSourcesOnConstruct                               OFFSET(get<bool>, {0xD4, 1, 0, 0})
	DMember(bool)                                      bInitializeBindingsOnConstruct                              OFFSET(get<bool>, {0xD5, 1, 0, 0})
	DMember(bool)                                      bInitializeEventsOnConstruct                                OFFSET(get<bool>, {0xD6, 1, 0, 0})
	DMember(bool)                                      bListenToViewModelCollectionChanged                         OFFSET(get<bool>, {0xD7, 1, 0, 0})
};

/// Class /Script/ModelViewViewModel.MVVMViewModelContextResolver
/// Size: 0x0000 (0x000028 - 0x000028)
class UMVVMViewModelContextResolver : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/ModelViewViewModel.MVVMViewModelContextResolver.K2_DestroyInstance
	// void K2_DestroyInstance(class UObject* ViewModel, class UMVVMView* View);                                                // [0x228deb8] Event|Public|BlueprintEvent|Const 
	// Function /Script/ModelViewViewModel.MVVMViewModelContextResolver.K2_CreateInstance
	// TScriptInterface<Class> K2_CreateInstance(class UClass* ExpectedType, class UUserWidget* UserWidget);                    // [0x228deb8] Event|Public|BlueprintEvent|Const 
};

/// Struct /Script/ModelViewViewModel.MVVMAvailableBinding
/// Size: 0x0008 (0x000000 - 0x000008)
class FMVVMAvailableBinding : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FMVVMBindingName)                          BindingName                                                 OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(bool)                                      bIsReadable                                                 OFFSET(get<bool>, {0x4, 1, 0, 0})
	DMember(bool)                                      bIsWritable                                                 OFFSET(get<bool>, {0x5, 1, 0, 0})
	DMember(bool)                                      bHasNotify                                                  OFFSET(get<bool>, {0x6, 1, 0, 0})
};

/// Struct /Script/ModelViewViewModel.MVVMBindingName
/// Size: 0x0004 (0x000000 - 0x000004)
class FMVVMBindingName : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	SMember(FName)                                     BindingName                                                 OFFSET(getStruct<T>, {0x0, 4, 0, 0})
};

/// Struct /Script/ModelViewViewModel.MVVMEventField
/// Size: 0x0001 (0x000000 - 0x000001)
class FMVVMEventField : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/ModelViewViewModel.MVVMVCompiledFieldId
/// Size: 0x0002 (0x000000 - 0x000002)
class FMVVMVCompiledFieldId : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2;

public:
	DMember(int16_t)                                   FieldIdIndex                                                OFFSET(get<int16_t>, {0x0, 2, 0, 0})
};

/// Struct /Script/ModelViewViewModel.MVVMViewSource
/// Size: 0x0018 (0x000000 - 0x000018)
class FMVVMViewSource : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(class UObject*)                            Source                                                      OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FName)                                     SourceName                                                  OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   RegisteredCount                                             OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	DMember(bool)                                      bCreatedSource                                              OFFSET(get<bool>, {0x10, 1, 0, 0})
	DMember(bool)                                      bBindingsInitialized                                        OFFSET(get<bool>, {0x11, 1, 0, 0})
	DMember(bool)                                      bSetManually                                                OFFSET(get<bool>, {0x12, 1, 0, 0})
	DMember(bool)                                      bAssignedToUserWidgetProperty                               OFFSET(get<bool>, {0x13, 1, 0, 0})
};

/// Struct /Script/ModelViewViewModel.MVVMViewClass_SourceCreator
/// Size: 0x0030 (0x000000 - 0x000030)
class FMVVMViewClass_SourceCreator : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(class UClass*)                             ExpectedSourceType                                          OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class UMVVMViewModelContextResolver*)      Resolver                                                    OFFSET(get<T>, {0x8, 8, 0, 0})
	SMember(FMVVMViewModelContext)                     GlobalViewModelInstance                                     OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FMVVMVCompiledFieldPath)                   FieldPath                                                   OFFSET(getStruct<T>, {0x20, 4, 0, 0})
	SMember(FName)                                     PropertyName                                                OFFSET(getStruct<T>, {0x24, 4, 0, 0})
	SMember(FName)                                     ParentSourceName                                            OFFSET(getStruct<T>, {0x28, 4, 0, 0})
	DMember(char)                                      Flags                                                       OFFSET(get<char>, {0x2C, 1, 0, 0})
};

/// Struct /Script/ModelViewViewModel.MVVMVCompiledFieldPath
/// Size: 0x0004 (0x000000 - 0x000004)
class FMVVMVCompiledFieldPath : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(int16_t)                                   StartIndex                                                  OFFSET(get<int16_t>, {0x0, 2, 0, 0})
	DMember(int16_t)                                   Num                                                         OFFSET(get<int16_t>, {0x2, 2, 0, 0})
};

/// Struct /Script/ModelViewViewModel.MVVMViewModelContext
/// Size: 0x0010 (0x000000 - 0x000010)
class FMVVMViewModelContext : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class UClass*)                             ContextClass                                                OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FName)                                     ContextName                                                 OFFSET(getStruct<T>, {0x8, 4, 0, 0})
};

/// Struct /Script/ModelViewViewModel.MVVMViewClass_CompiledBinding
/// Size: 0x001C (0x000000 - 0x00001C)
class FMVVMViewClass_CompiledBinding : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 28;

public:
	SMember(FMVVMVCompiledFieldId)                     FieldId                                                     OFFSET(getStruct<T>, {0x0, 2, 0, 0})
	SMember(FName)                                     SourcePropertyName                                          OFFSET(getStruct<T>, {0x4, 4, 0, 0})
	SMember(FMVVMVCompiledBinding)                     Binding                                                     OFFSET(getStruct<T>, {0x8, 14, 0, 0})
	CMember(EMVVMExecutionMode)                        ExecutionMode                                               OFFSET(get<T>, {0x16, 1, 0, 0})
	DMember(int8_t)                                    EvaluateSourceCreatorIndex                                  OFFSET(get<int8_t>, {0x17, 1, 0, 0})
	DMember(char)                                      Flags                                                       OFFSET(get<char>, {0x18, 1, 0, 0})
};

/// Struct /Script/ModelViewViewModel.MVVMVCompiledBinding
/// Size: 0x000E (0x000000 - 0x00000E)
class FMVVMVCompiledBinding : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 14;

public:
	SMember(FMVVMVCompiledFieldPath)                   SourceFieldPath                                             OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FMVVMVCompiledFieldPath)                   DestinationFieldPath                                        OFFSET(getStruct<T>, {0x4, 4, 0, 0})
	SMember(FMVVMVCompiledFieldPath)                   ConversionFunctionFieldPath                                 OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	DMember(char)                                      Type                                                        OFFSET(get<char>, {0xC, 1, 0, 0})
};

/// Struct /Script/ModelViewViewModel.MVVMViewClass_CompiledEvent
/// Size: 0x000C (0x000000 - 0x00000C)
class FMVVMViewClass_CompiledEvent : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	SMember(FMVVMVCompiledFieldPath)                   FieldPath                                                   OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FName)                                     FunctionName                                                OFFSET(getStruct<T>, {0x4, 4, 0, 0})
	SMember(FName)                                     SourceName                                                  OFFSET(getStruct<T>, {0x8, 4, 0, 0})
};

/// Struct /Script/ModelViewViewModel.MVVMViewModelContextInstance
/// Size: 0x0018 (0x000000 - 0x000018)
class FMVVMViewModelContextInstance : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FMVVMViewModelContext)                     Context                                                     OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	CMember(class UMVVMViewModelBase*)                 Instance                                                    OFFSET(get<T>, {0x10, 8, 0, 0})
};

/// Struct /Script/ModelViewViewModel.MVVMViewClass_FieldId
/// Size: 0x0008 (0x000000 - 0x000008)
class FMVVMViewClass_FieldId : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FName)                                     FieldName                                                   OFFSET(getStruct<T>, {0x0, 4, 0, 0})
};

/// Struct /Script/ModelViewViewModel.MVVMViewClass_SourceKey
/// Size: 0x0004 (0x000000 - 0x000004)
class FMVVMViewClass_SourceKey : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(int32_t)                                   Index                                                       OFFSET(get<int32_t>, {0x0, 4, 0, 0})
};

/// Struct /Script/ModelViewViewModel.MVVMViewClass_BindingKey
/// Size: 0x0004 (0x000000 - 0x000004)
class FMVVMViewClass_BindingKey : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(int32_t)                                   Index                                                       OFFSET(get<int32_t>, {0x0, 4, 0, 0})
};

/// Struct /Script/ModelViewViewModel.MVVMViewClass_EvaluateBindingKey
/// Size: 0x0004 (0x000000 - 0x000004)
class FMVVMViewClass_EvaluateBindingKey : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(int32_t)                                   Index                                                       OFFSET(get<int32_t>, {0x0, 4, 0, 0})
};

/// Struct /Script/ModelViewViewModel.MVVMViewClass_EventKey
/// Size: 0x0004 (0x000000 - 0x000004)
class FMVVMViewClass_EventKey : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(int32_t)                                   Index                                                       OFFSET(get<int32_t>, {0x0, 4, 0, 0})
};

/// Struct /Script/ModelViewViewModel.MVVMView_SourceKey
/// Size: 0x0004 (0x000000 - 0x000004)
class FMVVMView_SourceKey : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(int32_t)                                   Index                                                       OFFSET(get<int32_t>, {0x0, 4, 0, 0})
};

/// Struct /Script/ModelViewViewModel.MVVMVCompiledFields
/// Size: 0x0010 (0x000000 - 0x000010)
class FMVVMVCompiledFields : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class UStruct*)                            ClassOrScriptStruct                                         OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(int16_t)                                   LibraryStartIndex                                           OFFSET(get<int16_t>, {0x8, 2, 0, 0})
	DMember(int16_t)                                   NumberOfProperties                                          OFFSET(get<int16_t>, {0xA, 2, 0, 0})
	DMember(int16_t)                                   NumberOfFunctions                                           OFFSET(get<int16_t>, {0xC, 2, 0, 0})
};

/// Struct /Script/ModelViewViewModel.MVVMCompiledLoadedPropertyOrFunctionIndex
/// Size: 0x0004 (0x000000 - 0x000004)
class FMVVMCompiledLoadedPropertyOrFunctionIndex : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(int16_t)                                   Index                                                       OFFSET(get<int16_t>, {0x0, 2, 0, 0})
	DMember(bool)                                      bIsObjectProperty                                           OFFSET(get<bool>, {0x2, 1, 1, 0})
	DMember(bool)                                      bIsScriptStructProperty                                     OFFSET(get<bool>, {0x2, 1, 1, 1})
	DMember(bool)                                      bIsProperty                                                 OFFSET(get<bool>, {0x2, 1, 1, 2})
};

/// Struct /Script/ModelViewViewModel.MVVMCompiledBindingLibrary
/// Size: 0x0050 (0x000000 - 0x000050)
class FMVVMCompiledBindingLibrary : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TArray<FMVVMCompiledLoadedPropertyOrFunctionIndex>) FieldPaths                                         OFFSET(get<T>, {0x20, 16, 0, 0})
	CMember(TArray<FMVVMVCompiledFields>)              CompiledFields                                              OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TArray<FName>)                             CompiledFieldNames                                          OFFSET(get<T>, {0x40, 16, 0, 0})
};

/// Struct /Script/ModelViewViewModel.MVVMViewModelCollection
/// Size: 0x0028 (0x000000 - 0x000028)
class FMVVMViewModelCollection : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(TArray<FMVVMViewModelContextInstance>)     ViewModelInstances                                          OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/ModelViewViewModel.MVVMView_Source
/// Size: 0x0018 (0x000000 - 0x000018)
class FMVVMView_Source : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(class UObject*)                            Source                                                      OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FMVVMViewClass_SourceKey)                  ClassKey                                                    OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   RegisteredCount                                             OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	DMember(bool)                                      bSourceInitialized                                          OFFSET(get<bool>, {0x10, 1, 0, 0})
	DMember(bool)                                      bBindingsInitialized                                        OFFSET(get<bool>, {0x11, 1, 0, 0})
	DMember(bool)                                      bSetManually                                                OFFSET(get<bool>, {0x12, 1, 0, 0})
	DMember(bool)                                      bAssignedToUserWidgetProperty                               OFFSET(get<bool>, {0x13, 1, 0, 0})
};

/// Struct /Script/ModelViewViewModel.MVVMViewClass_SourceBinding
/// Size: 0x000C (0x000000 - 0x00000C)
class FMVVMViewClass_SourceBinding : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	SMember(FFieldNotificationId)                      FieldId                                                     OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FMVVMViewClass_BindingKey)                 BindingKey                                                  OFFSET(getStruct<T>, {0x4, 4, 0, 0})
	DMember(char)                                      Flags                                                       OFFSET(get<char>, {0x8, 1, 0, 0})
};

/// Struct /Script/ModelViewViewModel.MVVMViewClass_Binding
/// Size: 0x0018 (0x000000 - 0x000018)
class FMVVMViewClass_Binding : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FMVVMVCompiledBinding)                     Binding                                                     OFFSET(getStruct<T>, {0x0, 14, 0, 0})
	DMember(char)                                      Flags                                                       OFFSET(get<char>, {0xE, 1, 0, 0})
	CMember(EMVVMExecutionMode)                        ExecutionMode                                               OFFSET(get<T>, {0xF, 1, 0, 0})
	DMember(uint64_t)                                  SourceBitField                                              OFFSET(get<uint64_t>, {0x10, 8, 0, 0})
};

/// Struct /Script/ModelViewViewModel.MVVMViewClass_EvaluateSource
/// Size: 0x000C (0x000000 - 0x00000C)
class FMVVMViewClass_EvaluateSource : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	SMember(FFieldNotificationId)                      ParentFieldId                                               OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FMVVMViewClass_SourceKey)                  ParentSource                                                OFFSET(getStruct<T>, {0x4, 4, 0, 0})
	SMember(FMVVMViewClass_SourceKey)                  ToEvaluate                                                  OFFSET(getStruct<T>, {0x8, 4, 0, 0})
};

/// Struct /Script/ModelViewViewModel.MVVMViewClass_Source
/// Size: 0x0050 (0x000000 - 0x000050)
class FMVVMViewClass_Source : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(class UClass*)                             ExpectedSourceType                                          OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class UMVVMViewModelContextResolver*)      Resolver                                                    OFFSET(get<T>, {0x8, 8, 0, 0})
	SMember(FMVVMViewModelContext)                     GlobalViewModelInstance                                     OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FMVVMVCompiledFieldPath)                   FieldPath                                                   OFFSET(getStruct<T>, {0x20, 4, 0, 0})
	SMember(FName)                                     PropertyName                                                OFFSET(getStruct<T>, {0x24, 4, 0, 0})
	CMember(TArray<FMVVMViewClass_FieldId>)            FieldToRegisterTo                                           OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(TArray<FMVVMViewClass_SourceBinding>)      Bindings                                                    OFFSET(get<T>, {0x38, 16, 0, 0})
	DMember(uint16_t)                                  Flags                                                       OFFSET(get<uint16_t>, {0x48, 2, 0, 0})
};

/// Struct /Script/ModelViewViewModel.MVVMViewClass_Event
/// Size: 0x0018 (0x000000 - 0x000018)
class FMVVMViewClass_Event : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FMVVMVCompiledFieldPath)                   FieldPath                                                   OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FName)                                     UserWidgetFunctionName                                      OFFSET(getStruct<T>, {0x4, 4, 0, 0})
	SMember(FMVVMViewClass_SourceKey)                  SourceToReevaluate                                          OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	DMember(uint64_t)                                  SourceBitField                                              OFFSET(get<uint64_t>, {0x10, 8, 0, 0})
};

/// Enum /Script/ModelViewViewModel.EMVVMExecutionMode
/// Size: 0x04
enum class EMVVMExecutionMode : uint8_t
{
	EMVVMExecutionMode__Immediate                                                    = 0,
	EMVVMExecutionMode__Delayed                                                      = 1,
	EMVVMExecutionMode__Tick                                                         = 2,
	EMVVMExecutionMode__DelayedWhenSharedElseImmediate                               = 3
};

/// Enum /Script/ModelViewViewModel.EMVVMBindingMode
/// Size: 0x05
enum class EMVVMBindingMode : uint8_t
{
	EMVVMBindingMode__OneTimeToDestination                                           = 0,
	EMVVMBindingMode__OneWayToDestination                                            = 1,
	EMVVMBindingMode__TwoWay                                                         = 2,
	EMVVMBindingMode__OneTimeToSource                                                = 3,
	EMVVMBindingMode__OneWayToSource                                                 = 4
};

