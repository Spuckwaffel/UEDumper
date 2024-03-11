
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FieldNotification
/// dependency: UMG

/// Enum /Script/ModelViewViewModel.EMVVMExecutionMode
/// Size: 0x05
enum class EMVVMExecutionMode : uint8_t
{
	EMVVMExecutionMode__Immediate                                                    = 0,
	EMVVMExecutionMode__Delayed                                                      = 1,
	EMVVMExecutionMode__Tick                                                         = 2,
	EMVVMExecutionMode__DelayedWhenSharedElseImmediate                               = 3,
	EMVVMExecutionMode__EMVVMExecutionMode_MAX                                       = 4
};

/// Enum /Script/ModelViewViewModel.EMVVMBindingMode
/// Size: 0x06
enum class EMVVMBindingMode : uint8_t
{
	EMVVMBindingMode__OneTimeToDestination                                           = 0,
	EMVVMBindingMode__OneWayToDestination                                            = 1,
	EMVVMBindingMode__TwoWay                                                         = 2,
	EMVVMBindingMode__OneTimeToSource                                                = 3,
	EMVVMBindingMode__OneWayToSource                                                 = 4,
	EMVVMBindingMode__EMVVMBindingMode_MAX                                           = 5
};

/// Class /Script/ModelViewViewModel.MVVMConversionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UMVVMConversionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/ModelViewViewModel.MVVMConversionLibrary.Conv_BoolToSlateVisibility
	// ESlateVisibility Conv_BoolToSlateVisibility(bool bIsVisible, ESlateVisibility TrueVisibility, ESlateVisibility FalseVisibility); // [0x34e6c1c] Final|Native|Static|Private|BlueprintCallable|BlueprintPure 
};

/// Class /Script/ModelViewViewModel.MVVMViewModelContextResolver
/// Size: 0x0000 (0x000028 - 0x000028)
class UMVVMViewModelContextResolver : public UObject
{ 
public:


	/// Functions
	// Function /Script/ModelViewViewModel.MVVMViewModelContextResolver.K2_DestroyInstance
	// void K2_DestroyInstance(class UObject* ViewModel, class UMVVMView* View);                                             // [0x18a39e4] Event|Public|BlueprintEvent|Const 
	// Function /Script/ModelViewViewModel.MVVMViewModelContextResolver.K2_CreateInstance
	// TScriptInterface<Class> K2_CreateInstance(class UClass* ExpectedType, class UUserWidget* UserWidget);                 // [0x18a39e4] Event|Public|BlueprintEvent|Const 
};

/// Class /Script/ModelViewViewModel.MVVMGameSubsystem
/// Size: 0x0008 (0x000030 - 0x000038)
class UMVVMGameSubsystem : public UGameInstanceSubsystem
{ 
public:
	class UMVVMViewModelCollectionObject*              ViewModelCollection;                                        // 0x0030   (0x0008)  


	/// Functions
	// Function /Script/ModelViewViewModel.MVVMGameSubsystem.GetViewModelCollection
	// class UMVVMViewModelCollectionObject* GetViewModelCollection();                                                       // [0x68142b8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/ModelViewViewModel.MVVMSubsystem
/// Size: 0x0000 (0x000030 - 0x000030)
class UMVVMSubsystem : public UEngineSubsystem
{ 
public:


	/// Functions
	// Function /Script/ModelViewViewModel.MVVMSubsystem.K2_GetViewFromUserWidget
	// class UMVVMView* K2_GetViewFromUserWidget(class UUserWidget* UserWidget);                                             // [0x76c9a58] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ModelViewViewModel.MVVMSubsystem.K2_GetAvailableBindings
	// TArray<FMVVMAvailableBinding> K2_GetAvailableBindings(class UClass* Class, class UClass* Accessor);                   // [0x76c982c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ModelViewViewModel.MVVMSubsystem.K2_GetAvailableBinding
	// FMVVMAvailableBinding K2_GetAvailableBinding(class UClass* Class, FMVVMBindingName BindingName, class UClass* Accessor); // [0x76c9574] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ModelViewViewModel.MVVMSubsystem.GetGlobalViewModelCollection
	// class UMVVMViewModelCollectionObject* GetGlobalViewModelCollection();                                                 // [0x69f1ed4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ModelViewViewModel.MVVMSubsystem.DoesWidgetTreeContainedWidget
	// bool DoesWidgetTreeContainedWidget(class UWidgetTree* WidgetTree, class UWidget* ViewWidget);                         // [0x76c9030] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/ModelViewViewModel.MVVMViewModelBase
/// Size: 0x0040 (0x000028 - 0x000068)
class UMVVMViewModelBase : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x68];                                      // 0x0000   (0x0068)  MISSED


	/// Functions
	// Function /Script/ModelViewViewModel.MVVMViewModelBase.K2_SetPropertyValue
	// bool K2_SetPropertyValue(int32_t& OldValue, int32_t& NewValue);                                                       // [0x76c9cf8] Final|Native|Protected|HasOutParms|BlueprintCallable 
	// Function /Script/ModelViewViewModel.MVVMViewModelBase.K2_RemoveFieldValueChangedDelegate
	// void K2_RemoveFieldValueChangedDelegate(FFieldNotificationId FieldId, FDelegateProperty Delegate);                    // [0x76c9ad8] Final|Native|Public|BlueprintCallable 
	// Function /Script/ModelViewViewModel.MVVMViewModelBase.K2_BroadcastFieldValueChanged
	// void K2_BroadcastFieldValueChanged(FFieldNotificationId FieldId);                                                     // [0x76c9444] Final|Native|Protected|BlueprintCallable 
	// Function /Script/ModelViewViewModel.MVVMViewModelBase.K2_AddFieldValueChangedDelegate
	// void K2_AddFieldValueChangedDelegate(FFieldNotificationId FieldId, FDelegateProperty Delegate);                       // [0x1f08f78] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/ModelViewViewModel.MVVMViewModelContext
/// Size: 0x0010 (0x000000 - 0x000010)
struct FMVVMViewModelContext
{ 
	class UClass*                                      ContextClass;                                               // 0x0000   (0x0008)  
	FName                                              ContextName;                                                // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
};

/// Struct /Script/ModelViewViewModel.MVVMViewModelContextInstance
/// Size: 0x0018 (0x000000 - 0x000018)
struct FMVVMViewModelContextInstance
{ 
	FMVVMViewModelContext                              Context;                                                    // 0x0000   (0x0010)  
	class UMVVMViewModelBase*                          Instance;                                                   // 0x0010   (0x0008)  
};

/// Struct /Script/ModelViewViewModel.MVVMViewModelCollection
/// Size: 0x0028 (0x000000 - 0x000028)
struct FMVVMViewModelCollection
{ 
	TArray<FMVVMViewModelContextInstance>              ViewModelInstances;                                         // 0x0000   (0x0010)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x0010   (0x0018)  MISSED
};

/// Class /Script/ModelViewViewModel.MVVMViewModelCollectionObject
/// Size: 0x0028 (0x000028 - 0x000050)
class UMVVMViewModelCollectionObject : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	FMVVMViewModelCollection                           ViewModelCollection;                                        // 0x0028   (0x0028)  


	/// Functions
	// Function /Script/ModelViewViewModel.MVVMViewModelCollectionObject.RemoveViewModel
	// bool RemoveViewModel(FMVVMViewModelContext Context);                                                                  // [0x76ca100] Final|Native|Public|BlueprintCallable 
	// Function /Script/ModelViewViewModel.MVVMViewModelCollectionObject.RemoveAllViewModelInstance
	// int32_t RemoveAllViewModelInstance(class UMVVMViewModelBase* ViewModel);                                              // [0x76ca060] Final|Native|Public|BlueprintCallable 
	// Function /Script/ModelViewViewModel.MVVMViewModelCollectionObject.FindViewModelInstance
	// class UMVVMViewModelBase* FindViewModelInstance(FMVVMViewModelContext Context);                                       // [0x76c921c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ModelViewViewModel.MVVMViewModelCollectionObject.FindFirstViewModelInstanceOfType
	// class UMVVMViewModelBase* FindFirstViewModelInstanceOfType(class UClass*& ViewModelClass);                            // [0x76c9144] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ModelViewViewModel.MVVMViewModelCollectionObject.AddViewModelInstance
	// bool AddViewModelInstance(FMVVMViewModelContext Context, class UMVVMViewModelBase* ViewModel);                        // [0x76c8dc4] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/ModelViewViewModel.MVVMInstancedViewModelGeneratedClass
/// Size: 0x0060 (0x000360 - 0x0003C0)
class UMVVMInstancedViewModelGeneratedClass : public UBlueprintGeneratedClass
{ 
public:
	TArray<class UFunction*>                           OnRepFunctionToLink;                                        // 0x0360   (0x0010)  
	unsigned char                                      UnknownData00_6[0x50];                                      // 0x0370   (0x0050)  MISSED
};

/// Class /Script/ModelViewViewModel.MVVMViewModelBlueprintGeneratedClass
/// Size: 0x0000 (0x000360 - 0x000360)
class UMVVMViewModelBlueprintGeneratedClass : public UBlueprintGeneratedClass
{ 
public:
};

/// Class /Script/ModelViewViewModel.MVVMBindingSubsystem
/// Size: 0x0068 (0x000030 - 0x000098)
class UMVVMBindingSubsystem : public UEngineSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x68];                                      // 0x0030   (0x0068)  MISSED
};

/// Struct /Script/ModelViewViewModel.MVVMViewClass_SourceKey
/// Size: 0x0004 (0x000000 - 0x000004)
struct FMVVMViewClass_SourceKey
{ 
	int32_t                                            Index;                                                      // 0x0000   (0x0004)  
};

/// Struct /Script/ModelViewViewModel.MVVMView_Source
/// Size: 0x0018 (0x000000 - 0x000018)
struct FMVVMView_Source
{ 
	class UObject*                                     Source;                                                     // 0x0000   (0x0008)  
	FMVVMViewClass_SourceKey                           ClassKey;                                                   // 0x0008   (0x0004)  
	int32_t                                            RegisteredCount;                                            // 0x000C   (0x0004)  
	bool                                               bSourceInitialized;                                         // 0x0010   (0x0001)  
	bool                                               bBindingsInitialized;                                       // 0x0011   (0x0001)  
	bool                                               bSetManually;                                               // 0x0012   (0x0001)  
	bool                                               bAssignedToUserWidgetProperty;                              // 0x0013   (0x0001)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Class /Script/ModelViewViewModel.MVVMView
/// Size: 0x0038 (0x000028 - 0x000060)
class UMVVMView : public UUserWidgetExtension
{ 
public:
	class UMVVMViewClass*                              ClassExtension;                                             // 0x0028   (0x0008)  
	TArray<FMVVMView_Source>                           Sources;                                                    // 0x0030   (0x0010)  
	unsigned char                                      UnknownData00_5[0x10];                                      // 0x0040   (0x0010)  MISSED
	uint64_t                                           ValidSources;                                               // 0x0050   (0x0008)  
	char                                               NumberOfSourceWithTickBinding;                              // 0x0058   (0x0001)  
	bool                                               bLogBinding;                                                // 0x0059   (0x0001)  
	bool                                               bConstructed;                                               // 0x005A   (0x0001)  
	bool                                               bSourcesInitialized;                                        // 0x005B   (0x0001)  
	bool                                               bBindingsInitialized;                                       // 0x005C   (0x0001)  
	bool                                               bEventsInitialized;                                         // 0x005D   (0x0001)  
	bool                                               bHasDefaultTickBinding;                                     // 0x005E   (0x0001)  
	unsigned char                                      UnknownData01_6[0x1];                                       // 0x005F   (0x0001)  MISSED


	/// Functions
	// Function /Script/ModelViewViewModel.MVVMView.UninitializeSources
	// void UninitializeSources();                                                                                           // [0x76ca3c8] Final|Native|Public|BlueprintCallable 
	// Function /Script/ModelViewViewModel.MVVMView.UninitializeEvents
	// void UninitializeEvents();                                                                                            // [0x76ca3b4] Final|Native|Public|BlueprintCallable 
	// Function /Script/ModelViewViewModel.MVVMView.UninitializeBindings
	// void UninitializeBindings();                                                                                          // [0x76ca3a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ModelViewViewModel.MVVMView.SetViewModelByClass
	// bool SetViewModelByClass(TScriptInterface<Class> NewValue);                                                           // [0x76ca250] Final|Native|Public|BlueprintCallable 
	// Function /Script/ModelViewViewModel.MVVMView.SetViewModel
	// bool SetViewModel(FName ViewModelName, TScriptInterface<Class> ViewModel);                                            // [0x252b7b8] Final|Native|Public|BlueprintCallable 
	// Function /Script/ModelViewViewModel.MVVMView.InitializeSources
	// void InitializeSources();                                                                                             // [0x76c9430] Final|Native|Public|BlueprintCallable 
	// Function /Script/ModelViewViewModel.MVVMView.InitializeEvents
	// void InitializeEvents();                                                                                              // [0x76c941c] Final|Native|Public|BlueprintCallable 
	// Function /Script/ModelViewViewModel.MVVMView.InitializeBindings
	// void InitializeBindings();                                                                                            // [0x76c9408] Final|Native|Public|BlueprintCallable 
	// Function /Script/ModelViewViewModel.MVVMView.GetViewModel
	// TScriptInterface<Class> GetViewModel(FName ViewModelName);                                                            // [0x76c936c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ModelViewViewModel.MVVMView.AreSourcesInitialized
	// bool AreSourcesInitialized();                                                                                         // [0x76c901c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ModelViewViewModel.MVVMView.AreEventsInitialized
	// bool AreEventsInitialized();                                                                                          // [0x76c9008] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ModelViewViewModel.MVVMView.AreBindingsInitialized
	// bool AreBindingsInitialized();                                                                                        // [0x76c8ff4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/ModelViewViewModel.MVVMVCompiledFieldPath
/// Size: 0x0004 (0x000000 - 0x000004)
struct FMVVMVCompiledFieldPath
{ 
	int16_t                                            StartIndex;                                                 // 0x0000   (0x0002)  
	int16_t                                            Num;                                                        // 0x0002   (0x0002)  
};

/// Struct /Script/ModelViewViewModel.MVVMViewClass_FieldId
/// Size: 0x0008 (0x000000 - 0x000008)
struct FMVVMViewClass_FieldId
{ 
	FName                                              FieldName;                                                  // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
};

/// Struct /Script/ModelViewViewModel.MVVMViewClass_BindingKey
/// Size: 0x0004 (0x000000 - 0x000004)
struct FMVVMViewClass_BindingKey
{ 
	int32_t                                            Index;                                                      // 0x0000   (0x0004)  
};

/// Struct /Script/ModelViewViewModel.MVVMViewClass_SourceBinding
/// Size: 0x000C (0x000000 - 0x00000C)
struct FMVVMViewClass_SourceBinding
{ 
	FFieldNotificationId                               FieldId;                                                    // 0x0000   (0x0004)  
	FMVVMViewClass_BindingKey                          BindingKey;                                                 // 0x0004   (0x0004)  
	char                                               Flags;                                                      // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0009   (0x0003)  MISSED
};

/// Struct /Script/ModelViewViewModel.MVVMViewClass_Source
/// Size: 0x0050 (0x000000 - 0x000050)
struct FMVVMViewClass_Source
{ 
	class UClass*                                      ExpectedSourceType;                                         // 0x0000   (0x0008)  
	class UMVVMViewModelContextResolver*               Resolver;                                                   // 0x0008   (0x0008)  
	FMVVMViewModelContext                              GlobalViewModelInstance;                                    // 0x0010   (0x0010)  
	FMVVMVCompiledFieldPath                            FieldPath;                                                  // 0x0020   (0x0004)  
	FName                                              PropertyName;                                               // 0x0024   (0x0004)  
	TArray<FMVVMViewClass_FieldId>                     FieldToRegisterTo;                                          // 0x0028   (0x0010)  
	TArray<FMVVMViewClass_SourceBinding>               Bindings;                                                   // 0x0038   (0x0010)  
	uint16_t                                           Flags;                                                      // 0x0048   (0x0002)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x004A   (0x0006)  MISSED
};

/// Struct /Script/ModelViewViewModel.MVVMVCompiledBinding
/// Size: 0x000E (0x000000 - 0x00000E)
struct FMVVMVCompiledBinding
{ 
	FMVVMVCompiledFieldPath                            SourceFieldPath;                                            // 0x0000   (0x0004)  
	FMVVMVCompiledFieldPath                            DestinationFieldPath;                                       // 0x0004   (0x0004)  
	FMVVMVCompiledFieldPath                            ConversionFunctionFieldPath;                                // 0x0008   (0x0004)  
	char                                               Type;                                                       // 0x000C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x000D   (0x0001)  MISSED
};

/// Struct /Script/ModelViewViewModel.MVVMViewClass_Binding
/// Size: 0x0018 (0x000000 - 0x000018)
struct FMVVMViewClass_Binding
{ 
	FMVVMVCompiledBinding                              Binding;                                                    // 0x0000   (0x000E)  
	char                                               Flags;                                                      // 0x000E   (0x0001)  
	EMVVMExecutionMode                                 ExecutionMode;                                              // 0x000F   (0x0001)  
	uint64_t                                           SourceBitField;                                             // 0x0010   (0x0008)  
};

/// Struct /Script/ModelViewViewModel.MVVMViewClass_EvaluateSource
/// Size: 0x000C (0x000000 - 0x00000C)
struct FMVVMViewClass_EvaluateSource
{ 
	FFieldNotificationId                               ParentFieldId;                                              // 0x0000   (0x0004)  
	FMVVMViewClass_SourceKey                           ParentSource;                                               // 0x0004   (0x0004)  
	FMVVMViewClass_SourceKey                           ToEvaluate;                                                 // 0x0008   (0x0004)  
};

/// Struct /Script/ModelViewViewModel.MVVMViewClass_Event
/// Size: 0x000C (0x000000 - 0x00000C)
struct FMVVMViewClass_Event
{ 
	FMVVMVCompiledFieldPath                            FieldPath;                                                  // 0x0000   (0x0004)  
	FName                                              UserWidgetFunctionName;                                     // 0x0004   (0x0004)  
	FMVVMViewClass_SourceKey                           SourceToReevaluate;                                         // 0x0008   (0x0004)  
};

/// Struct /Script/ModelViewViewModel.MVVMCompiledLoadedPropertyOrFunctionIndex
/// Size: 0x0004 (0x000000 - 0x000004)
struct FMVVMCompiledLoadedPropertyOrFunctionIndex
{ 
	int16_t                                            Index;                                                      // 0x0000   (0x0002)  
	bool                                               bIsObjectProperty : 1;                                      // 0x0002:0 (0x0001)  
	bool                                               bIsScriptStructProperty : 1;                                // 0x0002:1 (0x0001)  
	bool                                               bIsProperty : 1;                                            // 0x0002:2 (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x0003   (0x0001)  MISSED
};

/// Struct /Script/ModelViewViewModel.MVVMVCompiledFields
/// Size: 0x0010 (0x000000 - 0x000010)
struct FMVVMVCompiledFields
{ 
	class UStruct*                                     ClassOrScriptStruct;                                        // 0x0000   (0x0008)  
	int16_t                                            LibraryStartIndex;                                          // 0x0008   (0x0002)  
	int16_t                                            NumberOfProperties;                                         // 0x000A   (0x0002)  
	int16_t                                            NumberOfFunctions;                                          // 0x000C   (0x0002)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x000E   (0x0002)  MISSED
};

/// Struct /Script/ModelViewViewModel.MVVMCompiledBindingLibrary
/// Size: 0x0050 (0x000000 - 0x000050)
struct FMVVMCompiledBindingLibrary
{ 
	TArray<FMVVMCompiledLoadedPropertyOrFunctionIndex> FieldPaths;                                                 // 0x0020   (0x0010)  
	TArray<FMVVMVCompiledFields>                       CompiledFields;                                             // 0x0030   (0x0010)  
	TArray<FName>                                      CompiledFieldNames;                                         // 0x0040   (0x0010)  
};

/// Class /Script/ModelViewViewModel.MVVMViewClass
/// Size: 0x00A0 (0x000028 - 0x0000C8)
class UMVVMViewClass : public UWidgetBlueprintGeneratedClassExtension
{ 
public:
	TArray<FMVVMViewClass_Source>                      Sources;                                                    // 0x0028   (0x0010)  
	TArray<FMVVMViewClass_Binding>                     Bindings;                                                   // 0x0038   (0x0010)  
	TArray<FMVVMViewClass_EvaluateSource>              EvaluateSources;                                            // 0x0048   (0x0010)  
	TArray<FMVVMViewClass_Event>                       Events;                                                     // 0x0058   (0x0010)  
	FMVVMCompiledBindingLibrary                        BindingLibrary;                                             // 0x0068   (0x0050)  
	uint64_t                                           OptionalSources;                                            // 0x00B8   (0x0008)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00C0   (0x0004)  MISSED
	bool                                               bInitializeSourcesOnConstruct;                              // 0x00C4   (0x0001)  
	bool                                               bInitializeBindingsOnConstruct;                             // 0x00C5   (0x0001)  
	bool                                               bInitializeEventsOnConstruct;                               // 0x00C6   (0x0001)  
	unsigned char                                      UnknownData01_6[0x1];                                       // 0x00C7   (0x0001)  MISSED
};

/// Struct /Script/ModelViewViewModel.MVVMBindingName
/// Size: 0x0004 (0x000000 - 0x000004)
struct FMVVMBindingName
{ 
	FName                                              BindingName;                                                // 0x0000   (0x0004)  
};

/// Struct /Script/ModelViewViewModel.MVVMAvailableBinding
/// Size: 0x0008 (0x000000 - 0x000008)
struct FMVVMAvailableBinding
{ 
	FMVVMBindingName                                   BindingName;                                                // 0x0000   (0x0004)  
	bool                                               bIsReadable;                                                // 0x0004   (0x0001)  
	bool                                               bIsWritable;                                                // 0x0005   (0x0001)  
	bool                                               bHasNotify;                                                 // 0x0006   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x0007   (0x0001)  MISSED
};

/// Struct /Script/ModelViewViewModel.MVVMEventField
/// Size: 0x0001 (0x000000 - 0x000001)
struct FMVVMEventField
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/ModelViewViewModel.MVVMVCompiledFieldId
/// Size: 0x0002 (0x000000 - 0x000002)
struct FMVVMVCompiledFieldId
{ 
	int16_t                                            FieldIdIndex;                                               // 0x0000   (0x0002)  
};

/// Struct /Script/ModelViewViewModel.MVVMViewSource
/// Size: 0x0018 (0x000000 - 0x000018)
struct FMVVMViewSource
{ 
	class UObject*                                     Source;                                                     // 0x0000   (0x0008)  
	FName                                              SourceName;                                                 // 0x0008   (0x0004)  
	int32_t                                            RegisteredCount;                                            // 0x000C   (0x0004)  
	bool                                               bCreatedSource;                                             // 0x0010   (0x0001)  
	bool                                               bBindingsInitialized;                                       // 0x0011   (0x0001)  
	bool                                               bSetManually;                                               // 0x0012   (0x0001)  
	bool                                               bAssignedToUserWidgetProperty;                              // 0x0013   (0x0001)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/ModelViewViewModel.MVVMViewClass_SourceCreator
/// Size: 0x0030 (0x000000 - 0x000030)
struct FMVVMViewClass_SourceCreator
{ 
	class UClass*                                      ExpectedSourceType;                                         // 0x0000   (0x0008)  
	class UMVVMViewModelContextResolver*               Resolver;                                                   // 0x0008   (0x0008)  
	FMVVMViewModelContext                              GlobalViewModelInstance;                                    // 0x0010   (0x0010)  
	FMVVMVCompiledFieldPath                            FieldPath;                                                  // 0x0020   (0x0004)  
	FName                                              PropertyName;                                               // 0x0024   (0x0004)  
	FName                                              ParentSourceName;                                           // 0x0028   (0x0004)  
	char                                               Flags;                                                      // 0x002C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x002D   (0x0003)  MISSED
};

/// Struct /Script/ModelViewViewModel.MVVMViewClass_CompiledBinding
/// Size: 0x001C (0x000000 - 0x00001C)
struct FMVVMViewClass_CompiledBinding
{ 
	FMVVMVCompiledFieldId                              FieldId;                                                    // 0x0000   (0x0002)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0002   (0x0002)  MISSED
	FName                                              SourcePropertyName;                                         // 0x0004   (0x0004)  
	FMVVMVCompiledBinding                              Binding;                                                    // 0x0008   (0x000E)  
	EMVVMExecutionMode                                 ExecutionMode;                                              // 0x0016   (0x0001)  
	int8_t                                             EvaluateSourceCreatorIndex;                                 // 0x0017   (0x0001)  
	char                                               Flags;                                                      // 0x0018   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0019   (0x0003)  MISSED
};

/// Struct /Script/ModelViewViewModel.MVVMViewClass_CompiledEvent
/// Size: 0x000C (0x000000 - 0x00000C)
struct FMVVMViewClass_CompiledEvent
{ 
	FMVVMVCompiledFieldPath                            FieldPath;                                                  // 0x0000   (0x0004)  
	FName                                              FunctionName;                                               // 0x0004   (0x0004)  
	FName                                              SourceName;                                                 // 0x0008   (0x0004)  
};

/// Struct /Script/ModelViewViewModel.MVVMViewClass_EvaluateBindingKey
/// Size: 0x0004 (0x000000 - 0x000004)
struct FMVVMViewClass_EvaluateBindingKey
{ 
	int32_t                                            Index;                                                      // 0x0000   (0x0004)  
};

/// Struct /Script/ModelViewViewModel.MVVMViewClass_EventKey
/// Size: 0x0004 (0x000000 - 0x000004)
struct FMVVMViewClass_EventKey
{ 
	int32_t                                            Index;                                                      // 0x0000   (0x0004)  
};

/// Struct /Script/ModelViewViewModel.MVVMView_SourceKey
/// Size: 0x0004 (0x000000 - 0x000004)
struct FMVVMView_SourceKey
{ 
	int32_t                                            Index;                                                      // 0x0000   (0x0004)  
};

