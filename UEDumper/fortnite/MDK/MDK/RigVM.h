
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: AnimationCore
/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine
/// dependency: StructUtils

/// Class /Script/RigVM.RigVMGraphFunctionHost
/// Size: 0x0000 (0x000028 - 0x000028)
class URigVMGraphFunctionHost : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/RigVM.RigVMBlueprintGeneratedClass
/// Size: 0x0028 (0x000360 - 0x000388)
class URigVMBlueprintGeneratedClass : public UBlueprintGeneratedClass
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 904;

public:
	SMember(FRigVMGraphFunctionStore)                  GraphFunctionStore                                          OFFSET(getStruct<T>, {0x368, 32, 0, 0})
};

/// Class /Script/RigVM.RigVM
/// Size: 0x0368 (0x000028 - 0x000390)
class URigVM : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 912;

public:
	SMember(FRigVMMemoryStorageStruct)                 LiteralMemoryStorage                                        OFFSET(getStruct<T>, {0x28, 80, 0, 0})
	SMember(FRigVMMemoryStorageStruct)                 DefaultWorkMemoryStorage                                    OFFSET(getStruct<T>, {0x78, 80, 0, 0})
	SMember(FRigVMMemoryStorageStruct)                 DefaultDebugMemoryStorage                                   OFFSET(getStruct<T>, {0xC8, 80, 0, 0})
	SMember(FRigVMByteCode)                            ByteCodeStorage                                             OFFSET(getStruct<T>, {0x138, 176, 0, 0})
	SMember(FRigVMInstructionArray)                    Instructions                                                OFFSET(getStruct<T>, {0x1F0, 16, 0, 0})
	CMember(TArray<FName>)                             FunctionNamesStorage                                        OFFSET(get<T>, {0x208, 16, 0, 0})
	CMember(TArray<FRigVMParameter>)                   Parameters                                                  OFFSET(get<T>, {0x250, 16, 0, 0})
	DMember(uint32_t)                                  CachedVMHash                                                OFFSET(get<uint32_t>, {0x338, 4, 0, 0})


	/// Functions
	// Function /Script/RigVM.RigVM.SetParameterValueVector2D
	// void SetParameterValueVector2D(FName& InParameterName, FVector2D& InValue, int32_t InArrayIndex);                        // [0x75bf570] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/RigVM.RigVM.SetParameterValueVector
	// void SetParameterValueVector(FName& InParameterName, FVector& InValue, int32_t InArrayIndex);                            // [0x75bf694] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/RigVM.RigVM.SetParameterValueTransform
	// void SetParameterValueTransform(FName& InParameterName, FTransform& InValue, int32_t InArrayIndex);                      // [0x75bf3dc] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/RigVM.RigVM.SetParameterValueString
	// void SetParameterValueString(FName& InParameterName, FString InValue, int32_t InArrayIndex);                             // [0x75bec28] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RigVM.RigVM.SetParameterValueQuat
	// void SetParameterValueQuat(FName& InParameterName, FQuat& InValue, int32_t InArrayIndex);                                // [0x75beac0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/RigVM.RigVM.SetParameterValueName
	// void SetParameterValueName(FName& InParameterName, FName& InValue, int32_t InArrayIndex);                                // [0x75be998] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RigVM.RigVM.SetParameterValueInt
	// void SetParameterValueInt(FName& InParameterName, int32_t InValue, int32_t InArrayIndex);                                // [0x75be830] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RigVM.RigVM.SetParameterValueFloat
	// void SetParameterValueFloat(FName& InParameterName, float InValue, int32_t InArrayIndex);                                // [0x75be6c8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RigVM.RigVM.SetParameterValueDouble
	// void SetParameterValueDouble(FName& InParameterName, double InValue, int32_t InArrayIndex);                              // [0x75be55c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RigVM.RigVM.SetParameterValueBool
	// void SetParameterValueBool(FName& InParameterName, bool InValue, int32_t InArrayIndex);                                  // [0x75be3f4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RigVM.RigVM.GetStatistics
	// FRigVMStatistics GetStatistics();                                                                                        // [0x75be234] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RigVM.RigVM.GetRigVMFunctionName
	// FString GetRigVMFunctionName(int32_t InFunctionIndex);                                                                   // [0x75be18c] Native|Public|Const  
	// Function /Script/RigVM.RigVM.GetParameterValueVector2D
	// FVector2D GetParameterValueVector2D(FName& InParameterName, int32_t InArrayIndex);                                       // [0x75bdf80] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/RigVM.RigVM.GetParameterValueVector
	// FVector GetParameterValueVector(FName& InParameterName, int32_t InArrayIndex);                                           // [0x75be080] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/RigVM.RigVM.GetParameterValueTransform
	// FTransform GetParameterValueTransform(FName& InParameterName, int32_t InArrayIndex);                                     // [0x75bde4c] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/RigVM.RigVM.GetParameterValueString
	// FString GetParameterValueString(FName& InParameterName, int32_t InArrayIndex);                                           // [0x75bd720] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RigVM.RigVM.GetParameterValueQuat
	// FQuat GetParameterValueQuat(FName& InParameterName, int32_t InArrayIndex);                                               // [0x75bd618] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/RigVM.RigVM.GetParameterValueName
	// FName GetParameterValueName(FName& InParameterName, int32_t InArrayIndex);                                               // [0x75bd524] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RigVM.RigVM.GetParameterValueInt
	// int32_t GetParameterValueInt(FName& InParameterName, int32_t InArrayIndex);                                              // [0x75bd524] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RigVM.RigVM.GetParameterValueFloat
	// float GetParameterValueFloat(FName& InParameterName, int32_t InArrayIndex);                                              // [0x75bd524] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RigVM.RigVM.GetParameterValueDouble
	// double GetParameterValueDouble(FName& InParameterName, int32_t InArrayIndex);                                            // [0x75bd430] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RigVM.RigVM.GetParameterValueBool
	// bool GetParameterValueBool(FName& InParameterName, int32_t InArrayIndex);                                                // [0x75bd33c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RigVM.RigVM.Execute
	// bool Execute(FRigVMExtendedExecuteContext& Context, FName& InEntryName);                                                 // [0x75bd11c] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RigVM.RigVM.AddRigVMFunction
	// int32_t AddRigVMFunction(class UScriptStruct* InRigVMStruct, FName& InMethodName);                                       // [0x75bd048] Native|Public|HasOutParms 
};

/// Class /Script/RigVM.NameSpacedUserData
/// Size: 0x00D8 (0x000028 - 0x000100)
class UNameSpacedUserData : public UAssetUserData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	SMember(FString)                                   NameSpace                                                   OFFSET(getStruct<T>, {0x28, 16, 0, 0})
};

/// Class /Script/RigVM.DataAssetLink
/// Size: 0x0028 (0x000100 - 0x000128)
class UDataAssetLink : public UNameSpacedUserData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
	CMember(TWeakObjectPtr<UDataAsset*>)               DataAsset                                                   OFFSET(get<T>, {0x100, 32, 0, 0})
	CMember(class UDataAsset*)                         DataAssetCached                                             OFFSET(get<T>, {0x120, 8, 0, 0})


	/// Functions
	// Function /Script/RigVM.DataAssetLink.SetDataAsset
	// void SetDataAsset(TWeakObjectPtr<UDataAsset*> InDataAsset);                                                              // [0x75be300] Final|Native|Public|BlueprintCallable 
	// Function /Script/RigVM.DataAssetLink.GetDataAsset
	// TWeakObjectPtr<UDataAsset*> GetDataAsset();                                                                              // [0x75bd290] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/RigVM.RigVMMemoryStorageGeneratorClass
/// Size: 0x0040 (0x000200 - 0x000240)
class URigVMMemoryStorageGeneratorClass : public UClass
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 576;

public:
};

/// Class /Script/RigVM.RigVMMemoryStorage
/// Size: 0x0000 (0x000028 - 0x000028)
class URigVMMemoryStorage : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/RigVM.RigVMNativized
/// Size: 0x0028 (0x000390 - 0x0003B8)
class URigVMNativized : public URigVM
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 952;

public:
};

/// Class /Script/RigVM.RigVMUserWorkflowOptions
/// Size: 0x0070 (0x000028 - 0x000098)
class URigVMUserWorkflowOptions : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	CMember(class UObject*)                            Subject                                                     OFFSET(get<T>, {0x28, 8, 0, 0})
	SMember(FRigVMUserWorkflow)                        Workflow                                                    OFFSET(getStruct<T>, {0x30, 88, 0, 0})


	/// Functions
	// Function /Script/RigVM.RigVMUserWorkflowOptions.RequiresDialog
	// bool RequiresDialog();                                                                                                   // [0x760ab20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RigVM.RigVMUserWorkflowOptions.ReportWarning
	// void ReportWarning(FString InMessage);                                                                                   // [0x760a438] Final|Native|Public|BlueprintCallable 
	// Function /Script/RigVM.RigVMUserWorkflowOptions.ReportInfo
	// void ReportInfo(FString InMessage);                                                                                      // [0x7609d50] Final|Native|Public|BlueprintCallable 
	// Function /Script/RigVM.RigVMUserWorkflowOptions.ReportError
	// void ReportError(FString InMessage);                                                                                     // [0x7609668] Final|Native|Public|BlueprintCallable 
	// Function /Script/RigVM.RigVMUserWorkflowOptions.IsValid
	// bool IsValid();                                                                                                          // [0x760964c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/RigVM.RigVMHost
/// Size: 0x0250 (0x000028 - 0x000278)
class URigVMHost : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 632;

public:
	SMember(FRigVMRuntimeSettings)                     VMRuntimeSettings                                           OFFSET(getStruct<T>, {0x30, 24, 0, 0})
	CMember(class URigVM*)                             VM                                                          OFFSET(get<T>, {0x58, 8, 0, 0})
	CMember(TMap<FString, FSoftObjectPath>)            UserDefinedStructGuidToPathName                             OFFSET(get<T>, {0x60, 80, 0, 0})
	CMember(TMap<FString, FSoftObjectPath>)            UserDefinedEnumToPathName                                   OFFSET(get<T>, {0xB0, 80, 0, 0})
	CMember(TSet<UObject*>)                            UserDefinedTypesInUse                                       OFFSET(get<T>, {0x100, 80, 0, 0})
	SMember(FRigVMDrawContainer)                       DrawContainer                                               OFFSET(getStruct<T>, {0x158, 24, 0, 0})
	CMember(TArray<FName>)                             EventQueue                                                  OFFSET(get<T>, {0x188, 16, 0, 0})
	CMember(TArray<class UAssetUserData*>)             AssetUserData                                               OFFSET(get<T>, {0x228, 16, 0, 0})


	/// Functions
	// Function /Script/RigVM.RigVMHost.SupportsEvent
	// bool SupportsEvent(FName& InEventName);                                                                                  // [0x762ddc8] Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RigVM.RigVMHost.SetVariableFromString
	// bool SetVariableFromString(FName& InVariableName, FString InValue);                                                      // [0x762d694] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RigVM.RigVMHost.SetFramesPerSecond
	// void SetFramesPerSecond(float InFramesPerSecond);                                                                        // [0x762d614] Final|Native|Public|BlueprintCallable 
	// Function /Script/RigVM.RigVMHost.SetDeltaTime
	// void SetDeltaTime(float InDeltaTime);                                                                                    // [0x762d594] Final|Native|Public|BlueprintCallable 
	// Function /Script/RigVM.RigVMHost.SetAbsoluteTime
	// void SetAbsoluteTime(float InAbsoluteTime, bool InSetDeltaTimeZero);                                                     // [0x762d4cc] Final|Native|Public|BlueprintCallable 
	// Function /Script/RigVM.RigVMHost.SetAbsoluteAndDeltaTime
	// void SetAbsoluteAndDeltaTime(float InAbsoluteTime, float InDeltaTime);                                                   // [0x762d404] Final|Native|Public|BlueprintCallable 
	// Function /Script/RigVM.RigVMHost.RequestRunOnceEvent
	// void RequestRunOnceEvent(FName& InEventName, int32_t InEventIndex);                                                      // [0x762d2f8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RigVM.RigVMHost.RequestInit
	// void RequestInit();                                                                                                      // [0x6a1b334] Native|Public|BlueprintCallable 
	// Function /Script/RigVM.RigVMHost.RemoveRunOnceEvent
	// bool RemoveRunOnceEvent(FName& InEventName);                                                                             // [0x762d260] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RigVM.RigVMHost.IsInitRequired
	// bool IsInitRequired();                                                                                                   // [0x6b5c454] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RigVM.RigVMHost.GetVM
	// class URigVM* GetVM();                                                                                                   // [0x762cad4] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/RigVM.RigVMHost.GetVariableType
	// FName GetVariableType(FName& InVariableName);                                                                            // [0x762d1b0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RigVM.RigVMHost.GetVariableAsString
	// FString GetVariableAsString(FName& InVariableName);                                                                      // [0x762caf8] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RigVM.RigVMHost.GetSupportedEvents
	// TArray<FName> GetSupportedEvents();                                                                                      // [0x762caa4] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RigVM.RigVMHost.GetScriptAccessibleVariables
	// TArray<FName> GetScriptAccessibleVariables();                                                                            // [0x762ca64] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RigVM.RigVMHost.GetExtendedExecuteContext
	// FRigVMExtendedExecuteContext GetExtendedExecuteContext();                                                                // [0x762ca34] Native|Public|BlueprintCallable 
	// Function /Script/RigVM.RigVMHost.GetDeltaTime
	// float GetDeltaTime();                                                                                                    // [0x3e62d5c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RigVM.RigVMHost.GetCurrentFramesPerSecond
	// float GetCurrentFramesPerSecond();                                                                                       // [0x762ca14] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RigVM.RigVMHost.GetAbsoluteTime
	// float GetAbsoluteTime();                                                                                                 // [0x3e62a90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RigVM.RigVMHost.FindRigVMHosts
	// TArray<URigVMHost*> FindRigVMHosts(class UObject* Outer, class UClass* OptionalClass);                                   // [0x762c74c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/RigVM.RigVMHost.ExecuteEvent
	// bool ExecuteEvent(FName& InEventName);                                                                                   // [0x762c6b4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RigVM.RigVMHost.Execute
	// bool Execute(FName& InEventName);                                                                                        // [0x762c614] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RigVM.RigVMHost.CanExecute
	// bool CanExecute();                                                                                                       // [0x36b6e84] Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/RigVM.RigVMEditorSettings
/// Size: 0x0000 (0x000030 - 0x000030)
class URigVMEditorSettings : public UDeveloperSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/RigVM.RigVMExtendedExecuteContext
/// Size: 0x0228 (0x000000 - 0x000228)
class FRigVMExtendedExecuteContext : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 552;

public:
};

/// Struct /Script/RigVM.RigVMDrawContainer
/// Size: 0x0018 (0x000000 - 0x000018)
class FRigVMDrawContainer : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(TArray<FRigVMDrawInstruction>)             Instructions                                                OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/RigVM.RigVMDrawInstruction
/// Size: 0x00C0 (0x000000 - 0x0000C0)
class FRigVMDrawInstruction : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(TEnumAsByte<ERigVMDrawSettings>)           PrimitiveType                                               OFFSET(get<T>, {0x4, 1, 0, 0})
	CMember(TArray<FVector>)                           Positions                                                   OFFSET(get<T>, {0x8, 16, 0, 0})
	SMember(FLinearColor)                              Color                                                       OFFSET(getStruct<T>, {0x18, 16, 0, 0})
	DMember(float)                                     Thickness                                                   OFFSET(get<float>, {0x28, 4, 0, 0})
	SMember(FTransform)                                Transform                                                   OFFSET(getStruct<T>, {0x30, 96, 0, 0})
};

/// Struct /Script/RigVM.RigVMRuntimeSettings
/// Size: 0x0018 (0x000000 - 0x000018)
class FRigVMRuntimeSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(int32_t)                                   MaximumArraySize                                            OFFSET(get<int32_t>, {0x0, 4, 0, 0})
};

/// Struct /Script/RigVM.RigVMStruct
/// Size: 0x0008 (0x000000 - 0x000008)
class FRigVMStruct : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/RigVM.RigVMDecorator
/// Size: 0x0010 (0x000008 - 0x000018)
class FRigVMDecorator : public FRigVMStruct
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/RigVM.RigVMDispatchFactory
/// Size: 0x0070 (0x000000 - 0x000070)
class FRigVMDispatchFactory : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Struct /Script/RigVM.RigVMDispatch_CastEnumToInt
/// Size: 0x0000 (0x000070 - 0x000070)
class FRigVMDispatch_CastEnumToInt : public FRigVMDispatchFactory
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Struct /Script/RigVM.RigVMDispatch_CastIntToEnum
/// Size: 0x0000 (0x000070 - 0x000070)
class FRigVMDispatch_CastIntToEnum : public FRigVMDispatchFactory
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Struct /Script/RigVM.RigVMDispatch_CastObject
/// Size: 0x0000 (0x000070 - 0x000070)
class FRigVMDispatch_CastObject : public FRigVMDispatchFactory
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Struct /Script/RigVM.RigVMExternalVariableDef
/// Size: 0x0028 (0x000000 - 0x000028)
class FRigVMExternalVariableDef : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Struct /Script/RigVM.RigVMExternalVariable
/// Size: 0x0008 (0x000028 - 0x000030)
class FRigVMExternalVariable : public FRigVMExternalVariableDef
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/RigVM.RigVMFunction_AnimBase
/// Size: 0x0000 (0x000008 - 0x000008)
class FRigVMFunction_AnimBase : public FRigVMStruct
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/RigVM.RigVMFunction_DebugBase
/// Size: 0x0000 (0x000008 - 0x000008)
class FRigVMFunction_DebugBase : public FRigVMStruct
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/RigVM.RigVMStructMutable
/// Size: 0x00F8 (0x000008 - 0x000100)
class FRigVMStructMutable : public FRigVMStruct
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	SMember(FRigVMExecuteContext)                      ExecuteContext                                              OFFSET(getStruct<T>, {0x10, 240, 0, 0})
};

/// Struct /Script/RigVM.RigVMExecuteContext
/// Size: 0x00F0 (0x000000 - 0x0000F0)
class FRigVMExecuteContext : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
};

/// Struct /Script/RigVM.RigVMFunction_DebugBaseMutable
/// Size: 0x0000 (0x000100 - 0x000100)
class FRigVMFunction_DebugBaseMutable : public FRigVMStructMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathBase
/// Size: 0x0000 (0x000008 - 0x000008)
class FRigVMFunction_MathBase : public FRigVMStruct
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathMutableBase
/// Size: 0x0000 (0x000100 - 0x000100)
class FRigVMFunction_MathMutableBase : public FRigVMStructMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
};

/// Struct /Script/RigVM.RigVMFunction_Sequence
/// Size: 0x02D8 (0x000008 - 0x0002E0)
class FRigVMFunction_Sequence : public FRigVMStruct
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 736;

public:
	SMember(FRigVMExecuteContext)                      ExecuteContext                                              OFFSET(getStruct<T>, {0x10, 240, 0, 0})
	SMember(FRigVMExecuteContext)                      A                                                           OFFSET(getStruct<T>, {0x100, 240, 0, 0})
	SMember(FRigVMExecuteContext)                      B                                                           OFFSET(getStruct<T>, {0x1F0, 240, 0, 0})
};

/// Struct /Script/RigVM.RigVMUnknownType
/// Size: 0x0004 (0x000000 - 0x000004)
class FRigVMUnknownType : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(uint32_t)                                  Hash                                                        OFFSET(get<uint32_t>, {0x0, 4, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_SimBase
/// Size: 0x0000 (0x000008 - 0x000008)
class FRigVMFunction_SimBase : public FRigVMStruct
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/RigVM.RigVMFunction_SimBaseMutable
/// Size: 0x0000 (0x000100 - 0x000100)
class FRigVMFunction_SimBaseMutable : public FRigVMStructMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
};

/// Struct /Script/RigVM.RigVMGraphFunctionStore
/// Size: 0x0020 (0x000000 - 0x000020)
class FRigVMGraphFunctionStore : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(TArray<FRigVMGraphFunctionData>)           PublicFunctions                                             OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FRigVMGraphFunctionData>)           PrivateFunctions                                            OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/RigVM.RigVMGraphFunctionData
/// Size: 0x0350 (0x000000 - 0x000350)
class FRigVMGraphFunctionData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 848;

public:
	SMember(FRigVMGraphFunctionHeader)                 Header                                                      OFFSET(getStruct<T>, {0x0, 264, 0, 0})
	SMember(FRigVMFunctionCompilationData)             CompilationData                                             OFFSET(getStruct<T>, {0x108, 568, 0, 0})
	SMember(FString)                                   SerializedCollapsedNode                                     OFFSET(getStruct<T>, {0x340, 16, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunctionCompilationData
/// Size: 0x0238 (0x000000 - 0x000238)
class FRigVMFunctionCompilationData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
	SMember(FRigVMByteCode)                            ByteCode                                                    OFFSET(getStruct<T>, {0x0, 176, 0, 0})
	CMember(TArray<FName>)                             FunctionNames                                               OFFSET(get<T>, {0xB0, 16, 0, 0})
	CMember(TArray<FRigVMFunctionCompilationPropertyDescription>) WorkPropertyDescriptions                         OFFSET(get<T>, {0xC0, 16, 0, 0})
	CMember(TArray<FRigVMFunctionCompilationPropertyPath>) WorkPropertyPathDescriptions                            OFFSET(get<T>, {0xD0, 16, 0, 0})
	CMember(TArray<FRigVMFunctionCompilationPropertyDescription>) LiteralPropertyDescriptions                      OFFSET(get<T>, {0xE0, 16, 0, 0})
	CMember(TArray<FRigVMFunctionCompilationPropertyPath>) LiteralPropertyPathDescriptions                         OFFSET(get<T>, {0xF0, 16, 0, 0})
	CMember(TArray<FRigVMFunctionCompilationPropertyDescription>) DebugPropertyDescriptions                        OFFSET(get<T>, {0x100, 16, 0, 0})
	CMember(TArray<FRigVMFunctionCompilationPropertyPath>) DebugPropertyPathDescriptions                           OFFSET(get<T>, {0x110, 16, 0, 0})
	CMember(TArray<FRigVMFunctionCompilationPropertyDescription>) ExternalPropertyDescriptions                     OFFSET(get<T>, {0x120, 16, 0, 0})
	CMember(TArray<FRigVMFunctionCompilationPropertyPath>) ExternalPropertyPathDescriptions                        OFFSET(get<T>, {0x130, 16, 0, 0})
	CMember(TMap<int32_t, FName>)                      ExternalRegisterIndexToVariable                             OFFSET(get<T>, {0x140, 80, 0, 0})
	CMember(TMap<FString, FRigVMOperand>)              Operands                                                    OFFSET(get<T>, {0x190, 80, 0, 0})
	DMember(uint32_t)                                  Hash                                                        OFFSET(get<uint32_t>, {0x1E0, 4, 0, 0})
	DMember(bool)                                      bEncounteredSurpressedErrors                                OFFSET(get<bool>, {0x1E4, 1, 0, 0})
};

/// Struct /Script/RigVM.RigVMOperand
/// Size: 0x0006 (0x000000 - 0x000006)
class FRigVMOperand : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 6;

public:
	CMember(ERigVMMemoryType)                          MemoryType                                                  OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(uint16_t)                                  RegisterIndex                                               OFFSET(get<uint16_t>, {0x2, 2, 0, 0})
	DMember(uint16_t)                                  RegisterOffset                                              OFFSET(get<uint16_t>, {0x4, 2, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunctionCompilationPropertyPath
/// Size: 0x0028 (0x000000 - 0x000028)
class FRigVMFunctionCompilationPropertyPath : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(int32_t)                                   PropertyIndex                                               OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	SMember(FString)                                   HeadCPPType                                                 OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	SMember(FString)                                   SegmentPath                                                 OFFSET(getStruct<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunctionCompilationPropertyDescription
/// Size: 0x0048 (0x000000 - 0x000048)
class FRigVMFunctionCompilationPropertyDescription : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FString)                                   CPPType                                                     OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	CMember(TWeakObjectPtr<UObject*>)                  CPPTypeObject                                               OFFSET(get<T>, {0x18, 32, 0, 0})
	SMember(FString)                                   DefaultValue                                                OFFSET(getStruct<T>, {0x38, 16, 0, 0})
};

/// Struct /Script/RigVM.RigVMByteCode
/// Size: 0x00B0 (0x000000 - 0x0000B0)
class FRigVMByteCode : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	CMember(TArray<char>)                              ByteCode                                                    OFFSET(get<T>, {0x0, 16, 0, 0})
	DMember(int32_t)                                   NumInstructions                                             OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	CMember(TArray<FRigVMByteCodeEntry>)               Entries                                                     OFFSET(get<T>, {0x18, 16, 0, 0})
	CMember(TArray<FRigVMBranchInfo>)                  BranchInfos                                                 OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(TArray<FRigVMPredicateBranch>)             PredicateBranches                                           OFFSET(get<T>, {0x38, 16, 0, 0})
	SMember(FString)                                   PublicContextPathName                                       OFFSET(getStruct<T>, {0x48, 16, 0, 0})
};

/// Struct /Script/RigVM.RigVMPredicateBranch
/// Size: 0x0030 (0x000000 - 0x000030)
class FRigVMPredicateBranch : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/RigVM.RigVMBranchInfo
/// Size: 0x0014 (0x000000 - 0x000014)
class FRigVMBranchInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	DMember(int32_t)                                   Index                                                       OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	SMember(FName)                                     Label                                                       OFFSET(getStruct<T>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   InstructionIndex                                            OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   ArgumentIndex                                               OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	DMember(uint16_t)                                  FirstInstruction                                            OFFSET(get<uint16_t>, {0x10, 2, 0, 0})
	DMember(uint16_t)                                  LastInstruction                                             OFFSET(get<uint16_t>, {0x12, 2, 0, 0})
};

/// Struct /Script/RigVM.RigVMByteCodeEntry
/// Size: 0x0008 (0x000000 - 0x000008)
class FRigVMByteCodeEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   InstructionIndex                                            OFFSET(get<int32_t>, {0x4, 4, 0, 0})
};

/// Struct /Script/RigVM.RigVMGraphFunctionHeader
/// Size: 0x0108 (0x000000 - 0x000108)
class FRigVMGraphFunctionHeader : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:
	SMember(FRigVMGraphFunctionIdentifier)             LibraryPointer                                              OFFSET(getStruct<T>, {0x0, 48, 0, 0})
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x30, 4, 0, 0})
	SMember(FString)                                   NodeTitle                                                   OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	SMember(FLinearColor)                              NodeColor                                                   OFFSET(getStruct<T>, {0x48, 16, 0, 0})
	SMember(FText)                                     ToolTip                                                     OFFSET(getStruct<T>, {0x58, 16, 0, 0})
	SMember(FString)                                   Description                                                 OFFSET(getStruct<T>, {0x68, 16, 0, 0})
	SMember(FString)                                   Category                                                    OFFSET(getStruct<T>, {0x78, 16, 0, 0})
	SMember(FString)                                   Keywords                                                    OFFSET(getStruct<T>, {0x88, 16, 0, 0})
	CMember(TArray<FRigVMGraphFunctionArgument>)       Arguments                                                   OFFSET(get<T>, {0x98, 16, 0, 0})
	CMember(TMap<FRigVMGraphFunctionIdentifier, uint32_t>) Dependencies                                            OFFSET(get<T>, {0xA8, 80, 0, 0})
	CMember(TArray<FRigVMExternalVariable>)            ExternalVariables                                           OFFSET(get<T>, {0xF8, 16, 0, 0})
};

/// Struct /Script/RigVM.RigVMGraphFunctionIdentifier
/// Size: 0x0030 (0x000000 - 0x000030)
class FRigVMGraphFunctionIdentifier : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FSoftObjectPath)                           LibraryNode                                                 OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FSoftObjectPath)                           HostObject                                                  OFFSET(getStruct<T>, {0x18, 24, 0, 0})
};

/// Struct /Script/RigVM.RigVMGraphFunctionArgument
/// Size: 0x00A0 (0x000000 - 0x0000A0)
class FRigVMGraphFunctionArgument : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FName)                                     DisplayName                                                 OFFSET(getStruct<T>, {0x4, 4, 0, 0})
	SMember(FName)                                     CPPType                                                     OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	CMember(TWeakObjectPtr<UObject*>)                  CPPTypeObject                                               OFFSET(get<T>, {0x10, 32, 0, 0})
	DMember(bool)                                      bIsArray                                                    OFFSET(get<bool>, {0x30, 1, 0, 0})
	CMember(ERigVMPinDirection)                        Direction                                                   OFFSET(get<T>, {0x31, 1, 0, 0})
	SMember(FString)                                   DefaultValue                                                OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	DMember(bool)                                      bIsConst                                                    OFFSET(get<bool>, {0x48, 1, 0, 0})
	CMember(TMap<FString, FText>)                      PathToTooltip                                               OFFSET(get<T>, {0x50, 80, 0, 0})
};

/// Struct /Script/RigVM.RigVMMemoryStorageStruct
/// Size: 0x0040 (0x000010 - 0x000050)
class FRigVMMemoryStorageStruct : public FInstancedPropertyBag
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Struct /Script/RigVM.RigVMMemoryStatistics
/// Size: 0x000C (0x000000 - 0x00000C)
class FRigVMMemoryStatistics : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(int32_t)                                   RegisterCount                                               OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   DataBytes                                                   OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   TotalBytes                                                  OFFSET(get<int32_t>, {0x8, 4, 0, 0})
};

/// Struct /Script/RigVM.RigVMByteCodeStatistics
/// Size: 0x0008 (0x000000 - 0x000008)
class FRigVMByteCodeStatistics : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(int32_t)                                   InstructionCount                                            OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   DataBytes                                                   OFFSET(get<int32_t>, {0x4, 4, 0, 0})
};

/// Struct /Script/RigVM.RigVMStatistics
/// Size: 0x0038 (0x000000 - 0x000038)
class FRigVMStatistics : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(int32_t)                                   BytesForCDO                                                 OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   BytesPerInstance                                            OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	SMember(FRigVMMemoryStatistics)                    LiteralMemory                                               OFFSET(getStruct<T>, {0x8, 12, 0, 0})
	SMember(FRigVMMemoryStatistics)                    WorkMemory                                                  OFFSET(getStruct<T>, {0x14, 12, 0, 0})
	SMember(FRigVMMemoryStatistics)                    DebugMemory                                                 OFFSET(getStruct<T>, {0x20, 12, 0, 0})
	DMember(int32_t)                                   BytesForCaching                                             OFFSET(get<int32_t>, {0x2C, 4, 0, 0})
	SMember(FRigVMByteCodeStatistics)                  ByteCode                                                    OFFSET(getStruct<T>, {0x30, 8, 0, 0})
};

/// Struct /Script/RigVM.RigVMGraphFunctionHeaderArray
/// Size: 0x0010 (0x000000 - 0x000010)
class FRigVMGraphFunctionHeaderArray : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FRigVMGraphFunctionHeader>)         Headers                                                     OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/RigVM.RigVMParameter
/// Size: 0x0030 (0x000000 - 0x000030)
class FRigVMParameter : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(ERigVMParameterType)                       Type                                                        OFFSET(get<T>, {0x0, 1, 0, 0})
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   RegisterIndex                                               OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	SMember(FString)                                   CPPType                                                     OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	CMember(class UScriptStruct*)                      ScriptStruct                                                OFFSET(get<T>, {0x20, 8, 0, 0})
	SMember(FName)                                     ScriptStructPath                                            OFFSET(getStruct<T>, {0x28, 4, 0, 0})
};

/// Struct /Script/RigVM.RigVMBaseOp
/// Size: 0x0001 (0x000000 - 0x000001)
class FRigVMBaseOp : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/RigVM.RigVMExecuteOp
/// Size: 0x0009 (0x000001 - 0x00000A)
class FRigVMExecuteOp : public FRigVMBaseOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 10;

public:
};

/// Struct /Script/RigVM.RigVMUnaryOp
/// Size: 0x0007 (0x000001 - 0x000008)
class FRigVMUnaryOp : public FRigVMBaseOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/RigVM.RigVMBinaryOp
/// Size: 0x000D (0x000001 - 0x00000E)
class FRigVMBinaryOp : public FRigVMBaseOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 14;

public:
};

/// Struct /Script/RigVM.RigVMTernaryOp
/// Size: 0x0013 (0x000001 - 0x000014)
class FRigVMTernaryOp : public FRigVMBaseOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
};

/// Struct /Script/RigVM.RigVMQuaternaryOp
/// Size: 0x0019 (0x000001 - 0x00001A)
class FRigVMQuaternaryOp : public FRigVMBaseOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 26;

public:
};

/// Struct /Script/RigVM.RigVMQuinaryOp
/// Size: 0x001F (0x000001 - 0x000020)
class FRigVMQuinaryOp : public FRigVMBaseOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/RigVM.RigVMSenaryOp
/// Size: 0x0025 (0x000001 - 0x000026)
class FRigVMSenaryOp : public FRigVMBaseOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 38;

public:
};

/// Struct /Script/RigVM.RigVMCopyOp
/// Size: 0x0011 (0x000001 - 0x000012)
class FRigVMCopyOp : public FRigVMBaseOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 18;

public:
};

/// Struct /Script/RigVM.RigVMComparisonOp
/// Size: 0x0013 (0x000001 - 0x000014)
class FRigVMComparisonOp : public FRigVMBaseOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
};

/// Struct /Script/RigVM.RigVMJumpOp
/// Size: 0x0007 (0x000001 - 0x000008)
class FRigVMJumpOp : public FRigVMBaseOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/RigVM.RigVMJumpIfOp
/// Size: 0x0008 (0x000008 - 0x000010)
class FRigVMJumpIfOp : public FRigVMUnaryOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/RigVM.RigVMChangeTypeOp
/// Size: 0x0000 (0x000008 - 0x000008)
class FRigVMChangeTypeOp : public FRigVMUnaryOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/RigVM.RigVMInvokeEntryOp
/// Size: 0x0007 (0x000001 - 0x000008)
class FRigVMInvokeEntryOp : public FRigVMBaseOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/RigVM.RigVMJumpToBranchOp
/// Size: 0x0004 (0x000008 - 0x00000C)
class FRigVMJumpToBranchOp : public FRigVMUnaryOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
};

/// Struct /Script/RigVM.RigVMRunInstructionsOp
/// Size: 0x0008 (0x000008 - 0x000010)
class FRigVMRunInstructionsOp : public FRigVMUnaryOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/RigVM.RigVMInstruction
/// Size: 0x0010 (0x000000 - 0x000010)
class FRigVMInstruction : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(uint64_t)                                  ByteCodeIndex                                               OFFSET(get<uint64_t>, {0x0, 8, 0, 0})
	CMember(ERigVMOpCode)                              OpCode                                                      OFFSET(get<T>, {0x8, 1, 0, 0})
	DMember(char)                                      OperandAlignment                                            OFFSET(get<char>, {0x9, 1, 0, 0})
};

/// Struct /Script/RigVM.RigVMInstructionArray
/// Size: 0x0010 (0x000000 - 0x000010)
class FRigVMInstructionArray : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FRigVMInstruction>)                 Instructions                                                OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/RigVM.RigVMBreakpoint
/// Size: 0x0024 (0x000000 - 0x000024)
class FRigVMBreakpoint : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 36;

public:
};

/// Struct /Script/RigVM.RigVMDebugInfo
/// Size: 0x0140 (0x000000 - 0x000140)
class FRigVMDebugInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
};

/// Struct /Script/RigVM.RigVMDrawInterface
/// Size: 0x0000 (0x000018 - 0x000018)
class FRigVMDrawInterface : public FRigVMDrawContainer
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/RigVM.RigVMSlice
/// Size: 0x0014 (0x000000 - 0x000014)
class FRigVMSlice : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
};

/// Struct /Script/RigVM.RigVMInstructionSetExecuteState
/// Size: 0x0050 (0x000000 - 0x000050)
class FRigVMInstructionSetExecuteState : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TMap<uint32_t, uint32_t>)                  SliceHashToNumInstruction                                   OFFSET(get<T>, {0x0, 80, 0, 0})
};

/// Struct /Script/RigVM.RigVMRegister
/// Size: 0x0020 (0x000000 - 0x000020)
class FRigVMRegister : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(ERigVMRegisterType)                        Type                                                        OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(uint32_t)                                  ByteIndex                                                   OFFSET(get<uint32_t>, {0x4, 4, 0, 0})
	DMember(uint16_t)                                  ElementSize                                                 OFFSET(get<uint16_t>, {0x8, 2, 0, 0})
	DMember(uint16_t)                                  ElementCount                                                OFFSET(get<uint16_t>, {0xA, 2, 0, 0})
	DMember(uint16_t)                                  SliceCount                                                  OFFSET(get<uint16_t>, {0xC, 2, 0, 0})
	DMember(char)                                      AlignmentBytes                                              OFFSET(get<char>, {0xE, 1, 0, 0})
	DMember(uint16_t)                                  TrailingBytes                                               OFFSET(get<uint16_t>, {0x10, 2, 0, 0})
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x14, 4, 0, 0})
	DMember(int32_t)                                   ScriptStructIndex                                           OFFSET(get<int32_t>, {0x18, 4, 0, 0})
	DMember(bool)                                      bIsArray                                                    OFFSET(get<bool>, {0x1C, 1, 0, 0})
	DMember(bool)                                      bIsDynamic                                                  OFFSET(get<bool>, {0x1D, 1, 0, 0})
};

/// Struct /Script/RigVM.RigVMRegisterOffset
/// Size: 0x0040 (0x000000 - 0x000040)
class FRigVMRegisterOffset : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(TArray<int32_t>)                           Segments                                                    OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(ERigVMRegisterType)                        Type                                                        OFFSET(get<T>, {0x10, 1, 0, 0})
	SMember(FName)                                     CPPType                                                     OFFSET(getStruct<T>, {0x14, 4, 0, 0})
	CMember(class UScriptStruct*)                      ScriptStruct                                                OFFSET(get<T>, {0x18, 8, 0, 0})
	CMember(class UScriptStruct*)                      ParentScriptStruct                                          OFFSET(get<T>, {0x20, 8, 0, 0})
	DMember(int32_t)                                   ArrayIndex                                                  OFFSET(get<int32_t>, {0x28, 4, 0, 0})
	DMember(uint16_t)                                  ElementSize                                                 OFFSET(get<uint16_t>, {0x2C, 2, 0, 0})
	SMember(FString)                                   CachedSegmentPath                                           OFFSET(getStruct<T>, {0x30, 16, 0, 0})
};

/// Struct /Script/RigVM.RigVMMemoryContainer
/// Size: 0x00A0 (0x000000 - 0x0000A0)
class FRigVMMemoryContainer : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	DMember(bool)                                      bUseNameMap                                                 OFFSET(get<bool>, {0x0, 1, 0, 0})
	CMember(ERigVMMemoryType)                          MemoryType                                                  OFFSET(get<T>, {0x1, 1, 0, 0})
	CMember(TArray<FRigVMRegister>)                    Registers                                                   OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(TArray<FRigVMRegisterOffset>)              RegisterOffsets                                             OFFSET(get<T>, {0x18, 16, 0, 0})
	CMember(TArray<char>)                              Data                                                        OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(TArray<class UScriptStruct*>)              ScriptStructs                                               OFFSET(get<T>, {0x38, 16, 0, 0})
	CMember(TMap<FName, int32_t>)                      NameMap                                                     OFFSET(get<T>, {0x48, 80, 0, 0})
	DMember(bool)                                      bEncounteredErrorDuringLoad                                 OFFSET(get<bool>, {0x98, 1, 0, 0})
};

/// Struct /Script/RigVM.RigVMInstructionVisitInfo
/// Size: 0x0028 (0x000000 - 0x000028)
class FRigVMInstructionVisitInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Struct /Script/RigVM.RigVMProfilingInfo
/// Size: 0x0028 (0x000000 - 0x000028)
class FRigVMProfilingInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Struct /Script/RigVM.RigVMTemplateArgumentType
/// Size: 0x0010 (0x000000 - 0x000010)
class FRigVMTemplateArgumentType : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FName)                                     CPPType                                                     OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(class UObject*)                            CPPTypeObject                                               OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/RigVM.RigVMUserWorkflow
/// Size: 0x0058 (0x000000 - 0x000058)
class FRigVMUserWorkflow : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FString)                                   Title                                                       OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	SMember(FString)                                   ToolTip                                                     OFFSET(getStruct<T>, {0x18, 16, 0, 0})
	CMember(ERigVMUserWorkflowType)                    Type                                                        OFFSET(get<T>, {0x28, 1, 0, 0})
	SMember(FDelegateProperty)                         PerformDynamicDelegate                                      OFFSET(getStruct<T>, {0x40, 12, 0, 0})
	CMember(class UClass*)                             OptionsClass                                                OFFSET(get<T>, {0x50, 8, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_AnimEasingType
/// Size: 0x0008 (0x000008 - 0x000010)
class FRigVMFunction_AnimEasingType : public FRigVMFunction_AnimBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(ERigVMAnimEasingType)                      Type                                                        OFFSET(get<T>, {0x8, 1, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_AnimEasing
/// Size: 0x0020 (0x000008 - 0x000028)
class FRigVMFunction_AnimEasing : public FRigVMFunction_AnimBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(float)                                     Value                                                       OFFSET(get<float>, {0x8, 4, 0, 0})
	CMember(ERigVMAnimEasingType)                      Type                                                        OFFSET(get<T>, {0xC, 1, 0, 0})
	DMember(float)                                     SourceMinimum                                               OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     SourceMaximum                                               OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     TargetMinimum                                               OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     TargetMaximum                                               OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(float)                                     Result                                                      OFFSET(get<float>, {0x20, 4, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_AnimEvalRichCurve
/// Size: 0x00A8 (0x000008 - 0x0000B0)
class FRigVMFunction_AnimEvalRichCurve : public FRigVMFunction_AnimBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	DMember(float)                                     Value                                                       OFFSET(get<float>, {0x8, 4, 0, 0})
	SMember(FRuntimeFloatCurve)                        Curve                                                       OFFSET(getStruct<T>, {0x10, 136, 0, 0})
	DMember(float)                                     SourceMinimum                                               OFFSET(get<float>, {0x98, 4, 0, 0})
	DMember(float)                                     SourceMaximum                                               OFFSET(get<float>, {0x9C, 4, 0, 0})
	DMember(float)                                     TargetMinimum                                               OFFSET(get<float>, {0xA0, 4, 0, 0})
	DMember(float)                                     TargetMaximum                                               OFFSET(get<float>, {0xA4, 4, 0, 0})
	DMember(float)                                     Result                                                      OFFSET(get<float>, {0xA8, 4, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_AnimRichCurve
/// Size: 0x0088 (0x000008 - 0x000090)
class FRigVMFunction_AnimRichCurve : public FRigVMFunction_AnimBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FRuntimeFloatCurve)                        Curve                                                       OFFSET(getStruct<T>, {0x8, 136, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_GetDeltaTime
/// Size: 0x0008 (0x000008 - 0x000010)
class FRigVMFunction_GetDeltaTime : public FRigVMFunction_AnimBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(float)                                     Result                                                      OFFSET(get<float>, {0x8, 4, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_GetWorldTime
/// Size: 0x0020 (0x000008 - 0x000028)
class FRigVMFunction_GetWorldTime : public FRigVMFunction_AnimBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(float)                                     Year                                                        OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     Month                                                       OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     Day                                                         OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     WeekDay                                                     OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     Hours                                                       OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     Minutes                                                     OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(float)                                     Seconds                                                     OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(float)                                     OverallSeconds                                              OFFSET(get<float>, {0x24, 4, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_FramesToSeconds
/// Size: 0x0008 (0x000008 - 0x000010)
class FRigVMFunction_FramesToSeconds : public FRigVMFunction_AnimBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(float)                                     Frames                                                      OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     Seconds                                                     OFFSET(get<float>, {0xC, 4, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_SecondsToFrames
/// Size: 0x0008 (0x000008 - 0x000010)
class FRigVMFunction_SecondsToFrames : public FRigVMFunction_AnimBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(float)                                     Seconds                                                     OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     Frames                                                      OFFSET(get<float>, {0xC, 4, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_DebugLineNoSpace
/// Size: 0x00C0 (0x000100 - 0x0001C0)
class FRigVMFunction_DebugLineNoSpace : public FRigVMFunction_DebugBaseMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 448;

public:
	SMember(FVector)                                   A                                                           OFFSET(getStruct<T>, {0x100, 24, 0, 0})
	SMember(FVector)                                   B                                                           OFFSET(getStruct<T>, {0x118, 24, 0, 0})
	SMember(FLinearColor)                              Color                                                       OFFSET(getStruct<T>, {0x130, 16, 0, 0})
	DMember(float)                                     Thickness                                                   OFFSET(get<float>, {0x140, 4, 0, 0})
	SMember(FTransform)                                WorldOffset                                                 OFFSET(getStruct<T>, {0x150, 96, 0, 0})
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x1B0, 1, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_DebugLineStripNoSpace
/// Size: 0x00A0 (0x000100 - 0x0001A0)
class FRigVMFunction_DebugLineStripNoSpace : public FRigVMFunction_DebugBaseMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
	CMember(TArray<FVector>)                           Points                                                      OFFSET(get<T>, {0x100, 16, 0, 0})
	SMember(FLinearColor)                              Color                                                       OFFSET(getStruct<T>, {0x110, 16, 0, 0})
	DMember(float)                                     Thickness                                                   OFFSET(get<float>, {0x120, 4, 0, 0})
	SMember(FTransform)                                WorldOffset                                                 OFFSET(getStruct<T>, {0x130, 96, 0, 0})
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x190, 1, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_DebugPoint
/// Size: 0x00A8 (0x000008 - 0x0000B0)
class FRigVMFunction_DebugPoint : public FRigVMFunction_DebugBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FVector)                                   Vector                                                      OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	CMember(ERigUnitDebugPointMode)                    Mode                                                        OFFSET(get<T>, {0x20, 1, 0, 0})
	SMember(FLinearColor)                              Color                                                       OFFSET(getStruct<T>, {0x24, 16, 0, 0})
	DMember(float)                                     Scale                                                       OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     Thickness                                                   OFFSET(get<float>, {0x38, 4, 0, 0})
	SMember(FName)                                     Space                                                       OFFSET(getStruct<T>, {0x3C, 4, 0, 0})
	SMember(FTransform)                                WorldOffset                                                 OFFSET(getStruct<T>, {0x40, 96, 0, 0})
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0xA0, 1, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_DebugPointMutable
/// Size: 0x00B0 (0x000100 - 0x0001B0)
class FRigVMFunction_DebugPointMutable : public FRigVMFunction_DebugBaseMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 432;

public:
	SMember(FVector)                                   Vector                                                      OFFSET(getStruct<T>, {0x100, 24, 0, 0})
	CMember(ERigUnitDebugPointMode)                    Mode                                                        OFFSET(get<T>, {0x118, 1, 0, 0})
	SMember(FLinearColor)                              Color                                                       OFFSET(getStruct<T>, {0x11C, 16, 0, 0})
	DMember(float)                                     Scale                                                       OFFSET(get<float>, {0x12C, 4, 0, 0})
	DMember(float)                                     Thickness                                                   OFFSET(get<float>, {0x130, 4, 0, 0})
	SMember(FName)                                     Space                                                       OFFSET(getStruct<T>, {0x134, 4, 0, 0})
	SMember(FTransform)                                WorldOffset                                                 OFFSET(getStruct<T>, {0x140, 96, 0, 0})
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x1A0, 1, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_DebugRectangle
/// Size: 0x00F0 (0x000100 - 0x0001F0)
class FRigVMFunction_DebugRectangle : public FRigVMFunction_DebugBaseMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 496;

public:
	SMember(FTransform)                                Transform                                                   OFFSET(getStruct<T>, {0x100, 96, 0, 0})
	SMember(FLinearColor)                              Color                                                       OFFSET(getStruct<T>, {0x160, 16, 0, 0})
	DMember(float)                                     Scale                                                       OFFSET(get<float>, {0x170, 4, 0, 0})
	DMember(float)                                     Thickness                                                   OFFSET(get<float>, {0x174, 4, 0, 0})
	SMember(FName)                                     Space                                                       OFFSET(getStruct<T>, {0x178, 4, 0, 0})
	SMember(FTransform)                                WorldOffset                                                 OFFSET(getStruct<T>, {0x180, 96, 0, 0})
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x1E0, 1, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_DebugRectangleNoSpace
/// Size: 0x00F0 (0x000100 - 0x0001F0)
class FRigVMFunction_DebugRectangleNoSpace : public FRigVMFunction_DebugBaseMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 496;

public:
	SMember(FTransform)                                Transform                                                   OFFSET(getStruct<T>, {0x100, 96, 0, 0})
	SMember(FLinearColor)                              Color                                                       OFFSET(getStruct<T>, {0x160, 16, 0, 0})
	DMember(float)                                     Scale                                                       OFFSET(get<float>, {0x170, 4, 0, 0})
	DMember(float)                                     Thickness                                                   OFFSET(get<float>, {0x174, 4, 0, 0})
	SMember(FTransform)                                WorldOffset                                                 OFFSET(getStruct<T>, {0x180, 96, 0, 0})
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x1E0, 1, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_DebugArc
/// Size: 0x0100 (0x000100 - 0x000200)
class FRigVMFunction_DebugArc : public FRigVMFunction_DebugBaseMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 512;

public:
	SMember(FTransform)                                Transform                                                   OFFSET(getStruct<T>, {0x100, 96, 0, 0})
	SMember(FLinearColor)                              Color                                                       OFFSET(getStruct<T>, {0x160, 16, 0, 0})
	DMember(float)                                     Radius                                                      OFFSET(get<float>, {0x170, 4, 0, 0})
	DMember(float)                                     MinimumDegrees                                              OFFSET(get<float>, {0x174, 4, 0, 0})
	DMember(float)                                     MaximumDegrees                                              OFFSET(get<float>, {0x178, 4, 0, 0})
	DMember(float)                                     Thickness                                                   OFFSET(get<float>, {0x17C, 4, 0, 0})
	DMember(int32_t)                                   Detail                                                      OFFSET(get<int32_t>, {0x180, 4, 0, 0})
	SMember(FName)                                     Space                                                       OFFSET(getStruct<T>, {0x184, 4, 0, 0})
	SMember(FTransform)                                WorldOffset                                                 OFFSET(getStruct<T>, {0x190, 96, 0, 0})
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x1F0, 1, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_DebugArcNoSpace
/// Size: 0x0100 (0x000100 - 0x000200)
class FRigVMFunction_DebugArcNoSpace : public FRigVMFunction_DebugBaseMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 512;

public:
	SMember(FTransform)                                Transform                                                   OFFSET(getStruct<T>, {0x100, 96, 0, 0})
	SMember(FLinearColor)                              Color                                                       OFFSET(getStruct<T>, {0x160, 16, 0, 0})
	DMember(float)                                     Radius                                                      OFFSET(get<float>, {0x170, 4, 0, 0})
	DMember(float)                                     MinimumDegrees                                              OFFSET(get<float>, {0x174, 4, 0, 0})
	DMember(float)                                     MaximumDegrees                                              OFFSET(get<float>, {0x178, 4, 0, 0})
	DMember(float)                                     Thickness                                                   OFFSET(get<float>, {0x17C, 4, 0, 0})
	DMember(int32_t)                                   Detail                                                      OFFSET(get<int32_t>, {0x180, 4, 0, 0})
	SMember(FTransform)                                WorldOffset                                                 OFFSET(getStruct<T>, {0x190, 96, 0, 0})
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x1F0, 1, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_DebugTransformMutableNoSpace
/// Size: 0x00F0 (0x000100 - 0x0001F0)
class FRigVMFunction_DebugTransformMutableNoSpace : public FRigVMFunction_DebugBaseMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 496;

public:
	SMember(FTransform)                                Transform                                                   OFFSET(getStruct<T>, {0x100, 96, 0, 0})
	CMember(ERigUnitDebugTransformMode)                Mode                                                        OFFSET(get<T>, {0x160, 1, 0, 0})
	SMember(FLinearColor)                              Color                                                       OFFSET(getStruct<T>, {0x164, 16, 0, 0})
	DMember(float)                                     Thickness                                                   OFFSET(get<float>, {0x174, 4, 0, 0})
	DMember(float)                                     Scale                                                       OFFSET(get<float>, {0x178, 4, 0, 0})
	SMember(FTransform)                                WorldOffset                                                 OFFSET(getStruct<T>, {0x180, 96, 0, 0})
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x1E0, 1, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_DebugTransformArrayMutable_WorkData
/// Size: 0x0010 (0x000000 - 0x000010)
class FRigVMFunction_DebugTransformArrayMutable_WorkData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FTransform>)                        DrawTransforms                                              OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_DebugTransformArrayMutableNoSpace
/// Size: 0x00B0 (0x000100 - 0x0001B0)
class FRigVMFunction_DebugTransformArrayMutableNoSpace : public FRigVMFunction_DebugBaseMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 432;

public:
	CMember(TArray<FTransform>)                        Transforms                                                  OFFSET(get<T>, {0x100, 16, 0, 0})
	CMember(TArray<int32_t>)                           ParentIndices                                               OFFSET(get<T>, {0x110, 16, 0, 0})
	CMember(ERigUnitDebugTransformMode)                Mode                                                        OFFSET(get<T>, {0x120, 1, 0, 0})
	SMember(FLinearColor)                              Color                                                       OFFSET(getStruct<T>, {0x124, 16, 0, 0})
	DMember(float)                                     Thickness                                                   OFFSET(get<float>, {0x134, 4, 0, 0})
	DMember(float)                                     Scale                                                       OFFSET(get<float>, {0x138, 4, 0, 0})
	SMember(FTransform)                                WorldOffset                                                 OFFSET(getStruct<T>, {0x140, 96, 0, 0})
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x1A0, 1, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_VisualDebugVector
/// Size: 0x0038 (0x000008 - 0x000040)
class FRigVMFunction_VisualDebugVector : public FRigVMFunction_DebugBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FVector)                                   Value                                                       OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x20, 1, 0, 0})
	CMember(ERigUnitVisualDebugPointMode)              Mode                                                        OFFSET(get<T>, {0x21, 1, 0, 0})
	SMember(FLinearColor)                              Color                                                       OFFSET(getStruct<T>, {0x24, 16, 0, 0})
	DMember(float)                                     Thickness                                                   OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     Scale                                                       OFFSET(get<float>, {0x38, 4, 0, 0})
	SMember(FName)                                     BoneSpace                                                   OFFSET(getStruct<T>, {0x3C, 4, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_VisualDebugVectorNoSpace
/// Size: 0x0038 (0x000008 - 0x000040)
class FRigVMFunction_VisualDebugVectorNoSpace : public FRigVMFunction_DebugBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FVector)                                   Value                                                       OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x20, 1, 0, 0})
	CMember(ERigUnitVisualDebugPointMode)              Mode                                                        OFFSET(get<T>, {0x21, 1, 0, 0})
	SMember(FLinearColor)                              Color                                                       OFFSET(getStruct<T>, {0x24, 16, 0, 0})
	DMember(float)                                     Thickness                                                   OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     Scale                                                       OFFSET(get<float>, {0x38, 4, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_VisualDebugQuat
/// Size: 0x0038 (0x000008 - 0x000040)
class FRigVMFunction_VisualDebugQuat : public FRigVMFunction_DebugBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FQuat)                                     Value                                                       OFFSET(getStruct<T>, {0x10, 32, 0, 0})
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x30, 1, 0, 0})
	DMember(float)                                     Thickness                                                   OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     Scale                                                       OFFSET(get<float>, {0x38, 4, 0, 0})
	SMember(FName)                                     BoneSpace                                                   OFFSET(getStruct<T>, {0x3C, 4, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_VisualDebugQuatNoSpace
/// Size: 0x0038 (0x000008 - 0x000040)
class FRigVMFunction_VisualDebugQuatNoSpace : public FRigVMFunction_DebugBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FQuat)                                     Value                                                       OFFSET(getStruct<T>, {0x10, 32, 0, 0})
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x30, 1, 0, 0})
	DMember(float)                                     Thickness                                                   OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     Scale                                                       OFFSET(get<float>, {0x38, 4, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_VisualDebugTransform
/// Size: 0x0078 (0x000008 - 0x000080)
class FRigVMFunction_VisualDebugTransform : public FRigVMFunction_DebugBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FTransform)                                Value                                                       OFFSET(getStruct<T>, {0x10, 96, 0, 0})
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x70, 1, 0, 0})
	DMember(float)                                     Thickness                                                   OFFSET(get<float>, {0x74, 4, 0, 0})
	DMember(float)                                     Scale                                                       OFFSET(get<float>, {0x78, 4, 0, 0})
	SMember(FName)                                     BoneSpace                                                   OFFSET(getStruct<T>, {0x7C, 4, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_VisualDebugTransformNoSpace
/// Size: 0x0078 (0x000008 - 0x000080)
class FRigVMFunction_VisualDebugTransformNoSpace : public FRigVMFunction_DebugBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FTransform)                                Value                                                       OFFSET(getStruct<T>, {0x10, 96, 0, 0})
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x70, 1, 0, 0})
	DMember(float)                                     Thickness                                                   OFFSET(get<float>, {0x74, 4, 0, 0})
	DMember(float)                                     Scale                                                       OFFSET(get<float>, {0x78, 4, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_ForLoopCount
/// Size: 0x0100 (0x000100 - 0x000200)
class FRigVMFunction_ForLoopCount : public FRigVMStructMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 512;

public:
	SMember(FName)                                     BlockToRun                                                  OFFSET(getStruct<T>, {0x100, 4, 0, 0})
	DMember(int32_t)                                   Count                                                       OFFSET(get<int32_t>, {0x104, 4, 0, 0})
	DMember(int32_t)                                   Index                                                       OFFSET(get<int32_t>, {0x108, 4, 0, 0})
	DMember(float)                                     Ratio                                                       OFFSET(get<float>, {0x10C, 4, 0, 0})
	SMember(FRigVMExecuteContext)                      Completed                                                   OFFSET(getStruct<T>, {0x110, 240, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_UserDefinedEvent
/// Size: 0x0108 (0x000008 - 0x000110)
class FRigVMFunction_UserDefinedEvent : public FRigVMStruct
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
	SMember(FRigVMExecuteContext)                      ExecuteContext                                              OFFSET(getStruct<T>, {0x10, 240, 0, 0})
	SMember(FName)                                     EventName                                                   OFFSET(getStruct<T>, {0x100, 4, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathBoolBase
/// Size: 0x0000 (0x000008 - 0x000008)
class FRigVMFunction_MathBoolBase : public FRigVMFunction_MathBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathBoolConstant
/// Size: 0x0008 (0x000008 - 0x000010)
class FRigVMFunction_MathBoolConstant : public FRigVMFunction_MathBoolBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(bool)                                      Value                                                       OFFSET(get<bool>, {0x8, 1, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathBoolUnaryOp
/// Size: 0x0008 (0x000008 - 0x000010)
class FRigVMFunction_MathBoolUnaryOp : public FRigVMFunction_MathBoolBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(bool)                                      Value                                                       OFFSET(get<bool>, {0x8, 1, 0, 0})
	DMember(bool)                                      Result                                                      OFFSET(get<bool>, {0x9, 1, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathBoolBinaryOp
/// Size: 0x0008 (0x000008 - 0x000010)
class FRigVMFunction_MathBoolBinaryOp : public FRigVMFunction_MathBoolBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(bool)                                      A                                                           OFFSET(get<bool>, {0x8, 1, 0, 0})
	DMember(bool)                                      B                                                           OFFSET(get<bool>, {0x9, 1, 0, 0})
	DMember(bool)                                      Result                                                      OFFSET(get<bool>, {0xA, 1, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathBoolBinaryAggregateOp
/// Size: 0x0008 (0x000008 - 0x000010)
class FRigVMFunction_MathBoolBinaryAggregateOp : public FRigVMFunction_MathBoolBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(bool)                                      A                                                           OFFSET(get<bool>, {0x8, 1, 0, 0})
	DMember(bool)                                      B                                                           OFFSET(get<bool>, {0x9, 1, 0, 0})
	DMember(bool)                                      Result                                                      OFFSET(get<bool>, {0xA, 1, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathBoolMake
/// Size: 0x0008 (0x000008 - 0x000010)
class FRigVMFunction_MathBoolMake : public FRigVMFunction_MathBoolBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(bool)                                      Value                                                       OFFSET(get<bool>, {0x8, 1, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathBoolConstTrue
/// Size: 0x0000 (0x000010 - 0x000010)
class FRigVMFunction_MathBoolConstTrue : public FRigVMFunction_MathBoolConstant
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathBoolConstFalse
/// Size: 0x0000 (0x000010 - 0x000010)
class FRigVMFunction_MathBoolConstFalse : public FRigVMFunction_MathBoolConstant
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathBoolNot
/// Size: 0x0000 (0x000010 - 0x000010)
class FRigVMFunction_MathBoolNot : public FRigVMFunction_MathBoolUnaryOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathBoolAnd
/// Size: 0x0000 (0x000010 - 0x000010)
class FRigVMFunction_MathBoolAnd : public FRigVMFunction_MathBoolBinaryAggregateOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathBoolNand
/// Size: 0x0000 (0x000010 - 0x000010)
class FRigVMFunction_MathBoolNand : public FRigVMFunction_MathBoolBinaryOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathBoolNand2
/// Size: 0x0000 (0x000010 - 0x000010)
class FRigVMFunction_MathBoolNand2 : public FRigVMFunction_MathBoolBinaryOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathBoolOr
/// Size: 0x0000 (0x000010 - 0x000010)
class FRigVMFunction_MathBoolOr : public FRigVMFunction_MathBoolBinaryAggregateOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathBoolEquals
/// Size: 0x0008 (0x000008 - 0x000010)
class FRigVMFunction_MathBoolEquals : public FRigVMFunction_MathBoolBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(bool)                                      A                                                           OFFSET(get<bool>, {0x8, 1, 0, 0})
	DMember(bool)                                      B                                                           OFFSET(get<bool>, {0x9, 1, 0, 0})
	DMember(bool)                                      Result                                                      OFFSET(get<bool>, {0xA, 1, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathBoolNotEquals
/// Size: 0x0008 (0x000008 - 0x000010)
class FRigVMFunction_MathBoolNotEquals : public FRigVMFunction_MathBoolBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(bool)                                      A                                                           OFFSET(get<bool>, {0x8, 1, 0, 0})
	DMember(bool)                                      B                                                           OFFSET(get<bool>, {0x9, 1, 0, 0})
	DMember(bool)                                      Result                                                      OFFSET(get<bool>, {0xA, 1, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathBoolToggled
/// Size: 0x0008 (0x000008 - 0x000010)
class FRigVMFunction_MathBoolToggled : public FRigVMFunction_MathBoolBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(bool)                                      Value                                                       OFFSET(get<bool>, {0x8, 1, 0, 0})
	DMember(bool)                                      Toggled                                                     OFFSET(get<bool>, {0x9, 1, 0, 0})
	DMember(bool)                                      Initialized                                                 OFFSET(get<bool>, {0xA, 1, 0, 0})
	DMember(bool)                                      LastValue                                                   OFFSET(get<bool>, {0xB, 1, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathBoolFlipFlop
/// Size: 0x0010 (0x000008 - 0x000018)
class FRigVMFunction_MathBoolFlipFlop : public FRigVMFunction_MathBoolBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(bool)                                      StartValue                                                  OFFSET(get<bool>, {0x8, 1, 0, 0})
	DMember(float)                                     duration                                                    OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(bool)                                      Result                                                      OFFSET(get<bool>, {0x10, 1, 0, 0})
	DMember(bool)                                      LastValue                                                   OFFSET(get<bool>, {0x11, 1, 0, 0})
	DMember(float)                                     TimeLeft                                                    OFFSET(get<float>, {0x14, 4, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathBoolOnce
/// Size: 0x0010 (0x000008 - 0x000018)
class FRigVMFunction_MathBoolOnce : public FRigVMFunction_MathBoolBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(float)                                     duration                                                    OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(bool)                                      Result                                                      OFFSET(get<bool>, {0xC, 1, 0, 0})
	DMember(bool)                                      LastValue                                                   OFFSET(get<bool>, {0xD, 1, 0, 0})
	DMember(float)                                     TimeLeft                                                    OFFSET(get<float>, {0x10, 4, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathBoolToFloat
/// Size: 0x0008 (0x000008 - 0x000010)
class FRigVMFunction_MathBoolToFloat : public FRigVMFunction_MathBoolBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(bool)                                      Value                                                       OFFSET(get<bool>, {0x8, 1, 0, 0})
	DMember(float)                                     Result                                                      OFFSET(get<float>, {0xC, 4, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathBoolToInteger
/// Size: 0x0008 (0x000008 - 0x000010)
class FRigVMFunction_MathBoolToInteger : public FRigVMFunction_MathBoolBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(bool)                                      Value                                                       OFFSET(get<bool>, {0x8, 1, 0, 0})
	DMember(int32_t)                                   Result                                                      OFFSET(get<int32_t>, {0xC, 4, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathColorBase
/// Size: 0x0000 (0x000008 - 0x000008)
class FRigVMFunction_MathColorBase : public FRigVMFunction_MathBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathColorBinaryOp
/// Size: 0x0030 (0x000008 - 0x000038)
class FRigVMFunction_MathColorBinaryOp : public FRigVMFunction_MathColorBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FLinearColor)                              A                                                           OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	SMember(FLinearColor)                              B                                                           OFFSET(getStruct<T>, {0x18, 16, 0, 0})
	SMember(FLinearColor)                              Result                                                      OFFSET(getStruct<T>, {0x28, 16, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathColorBinaryAggregateOp
/// Size: 0x0030 (0x000008 - 0x000038)
class FRigVMFunction_MathColorBinaryAggregateOp : public FRigVMFunction_MathColorBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FLinearColor)                              A                                                           OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	SMember(FLinearColor)                              B                                                           OFFSET(getStruct<T>, {0x18, 16, 0, 0})
	SMember(FLinearColor)                              Result                                                      OFFSET(getStruct<T>, {0x28, 16, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathColorMake
/// Size: 0x0020 (0x000008 - 0x000028)
class FRigVMFunction_MathColorMake : public FRigVMFunction_MathColorBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(float)                                     R                                                           OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     G                                                           OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     B                                                           OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     A                                                           OFFSET(get<float>, {0x14, 4, 0, 0})
	SMember(FLinearColor)                              Result                                                      OFFSET(getStruct<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathColorFromFloat
/// Size: 0x0018 (0x000008 - 0x000020)
class FRigVMFunction_MathColorFromFloat : public FRigVMFunction_MathColorBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(float)                                     Value                                                       OFFSET(get<float>, {0x8, 4, 0, 0})
	SMember(FLinearColor)                              Result                                                      OFFSET(getStruct<T>, {0xC, 16, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathColorFromDouble
/// Size: 0x0018 (0x000008 - 0x000020)
class FRigVMFunction_MathColorFromDouble : public FRigVMFunction_MathColorBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(double)                                    Value                                                       OFFSET(get<double>, {0x8, 8, 0, 0})
	SMember(FLinearColor)                              Result                                                      OFFSET(getStruct<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathColorAdd
/// Size: 0x0000 (0x000038 - 0x000038)
class FRigVMFunction_MathColorAdd : public FRigVMFunction_MathColorBinaryAggregateOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathColorSub
/// Size: 0x0000 (0x000038 - 0x000038)
class FRigVMFunction_MathColorSub : public FRigVMFunction_MathColorBinaryOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathColorMul
/// Size: 0x0000 (0x000038 - 0x000038)
class FRigVMFunction_MathColorMul : public FRigVMFunction_MathColorBinaryAggregateOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathColorLerp
/// Size: 0x0038 (0x000008 - 0x000040)
class FRigVMFunction_MathColorLerp : public FRigVMFunction_MathColorBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FLinearColor)                              A                                                           OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	SMember(FLinearColor)                              B                                                           OFFSET(getStruct<T>, {0x18, 16, 0, 0})
	DMember(float)                                     T                                                           OFFSET(get<float>, {0x28, 4, 0, 0})
	SMember(FLinearColor)                              Result                                                      OFFSET(getStruct<T>, {0x2C, 16, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleBase
/// Size: 0x0000 (0x000008 - 0x000008)
class FRigVMFunction_MathDoubleBase : public FRigVMFunction_MathBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleConstant
/// Size: 0x0008 (0x000008 - 0x000010)
class FRigVMFunction_MathDoubleConstant : public FRigVMFunction_MathDoubleBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(double)                                    Value                                                       OFFSET(get<double>, {0x8, 8, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleUnaryOp
/// Size: 0x0010 (0x000008 - 0x000018)
class FRigVMFunction_MathDoubleUnaryOp : public FRigVMFunction_MathDoubleBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(double)                                    Value                                                       OFFSET(get<double>, {0x8, 8, 0, 0})
	DMember(double)                                    Result                                                      OFFSET(get<double>, {0x10, 8, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleBinaryOp
/// Size: 0x0018 (0x000008 - 0x000020)
class FRigVMFunction_MathDoubleBinaryOp : public FRigVMFunction_MathDoubleBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(double)                                    A                                                           OFFSET(get<double>, {0x8, 8, 0, 0})
	DMember(double)                                    B                                                           OFFSET(get<double>, {0x10, 8, 0, 0})
	DMember(double)                                    Result                                                      OFFSET(get<double>, {0x18, 8, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleBinaryAggregateOp
/// Size: 0x0018 (0x000008 - 0x000020)
class FRigVMFunction_MathDoubleBinaryAggregateOp : public FRigVMFunction_MathDoubleBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(double)                                    A                                                           OFFSET(get<double>, {0x8, 8, 0, 0})
	DMember(double)                                    B                                                           OFFSET(get<double>, {0x10, 8, 0, 0})
	DMember(double)                                    Result                                                      OFFSET(get<double>, {0x18, 8, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleMake
/// Size: 0x0008 (0x000008 - 0x000010)
class FRigVMFunction_MathDoubleMake : public FRigVMFunction_MathDoubleBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(double)                                    Value                                                       OFFSET(get<double>, {0x8, 8, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleConstPi
/// Size: 0x0000 (0x000010 - 0x000010)
class FRigVMFunction_MathDoubleConstPi : public FRigVMFunction_MathDoubleConstant
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleConstHalfPi
/// Size: 0x0000 (0x000010 - 0x000010)
class FRigVMFunction_MathDoubleConstHalfPi : public FRigVMFunction_MathDoubleConstant
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleConstTwoPi
/// Size: 0x0000 (0x000010 - 0x000010)
class FRigVMFunction_MathDoubleConstTwoPi : public FRigVMFunction_MathDoubleConstant
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleConstE
/// Size: 0x0000 (0x000010 - 0x000010)
class FRigVMFunction_MathDoubleConstE : public FRigVMFunction_MathDoubleConstant
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleAdd
/// Size: 0x0000 (0x000020 - 0x000020)
class FRigVMFunction_MathDoubleAdd : public FRigVMFunction_MathDoubleBinaryAggregateOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleSub
/// Size: 0x0000 (0x000020 - 0x000020)
class FRigVMFunction_MathDoubleSub : public FRigVMFunction_MathDoubleBinaryOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleMul
/// Size: 0x0000 (0x000020 - 0x000020)
class FRigVMFunction_MathDoubleMul : public FRigVMFunction_MathDoubleBinaryAggregateOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleDiv
/// Size: 0x0000 (0x000020 - 0x000020)
class FRigVMFunction_MathDoubleDiv : public FRigVMFunction_MathDoubleBinaryOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleMod
/// Size: 0x0000 (0x000020 - 0x000020)
class FRigVMFunction_MathDoubleMod : public FRigVMFunction_MathDoubleBinaryOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleMin
/// Size: 0x0000 (0x000020 - 0x000020)
class FRigVMFunction_MathDoubleMin : public FRigVMFunction_MathDoubleBinaryAggregateOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleMax
/// Size: 0x0000 (0x000020 - 0x000020)
class FRigVMFunction_MathDoubleMax : public FRigVMFunction_MathDoubleBinaryAggregateOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathDoublePow
/// Size: 0x0000 (0x000020 - 0x000020)
class FRigVMFunction_MathDoublePow : public FRigVMFunction_MathDoubleBinaryOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleSqrt
/// Size: 0x0000 (0x000018 - 0x000018)
class FRigVMFunction_MathDoubleSqrt : public FRigVMFunction_MathDoubleUnaryOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleNegate
/// Size: 0x0000 (0x000018 - 0x000018)
class FRigVMFunction_MathDoubleNegate : public FRigVMFunction_MathDoubleUnaryOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleAbs
/// Size: 0x0000 (0x000018 - 0x000018)
class FRigVMFunction_MathDoubleAbs : public FRigVMFunction_MathDoubleUnaryOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleFloor
/// Size: 0x0018 (0x000008 - 0x000020)
class FRigVMFunction_MathDoubleFloor : public FRigVMFunction_MathDoubleBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(double)                                    Value                                                       OFFSET(get<double>, {0x8, 8, 0, 0})
	DMember(double)                                    Result                                                      OFFSET(get<double>, {0x10, 8, 0, 0})
	DMember(int32_t)                                   Int                                                         OFFSET(get<int32_t>, {0x18, 4, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleCeil
/// Size: 0x0018 (0x000008 - 0x000020)
class FRigVMFunction_MathDoubleCeil : public FRigVMFunction_MathDoubleBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(double)                                    Value                                                       OFFSET(get<double>, {0x8, 8, 0, 0})
	DMember(double)                                    Result                                                      OFFSET(get<double>, {0x10, 8, 0, 0})
	DMember(int32_t)                                   Int                                                         OFFSET(get<int32_t>, {0x18, 4, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleRound
/// Size: 0x0018 (0x000008 - 0x000020)
class FRigVMFunction_MathDoubleRound : public FRigVMFunction_MathDoubleBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(double)                                    Value                                                       OFFSET(get<double>, {0x8, 8, 0, 0})
	DMember(double)                                    Result                                                      OFFSET(get<double>, {0x10, 8, 0, 0})
	DMember(int32_t)                                   Int                                                         OFFSET(get<int32_t>, {0x18, 4, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleToInt
/// Size: 0x0010 (0x000008 - 0x000018)
class FRigVMFunction_MathDoubleToInt : public FRigVMFunction_MathDoubleBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(double)                                    Value                                                       OFFSET(get<double>, {0x8, 8, 0, 0})
	DMember(int32_t)                                   Result                                                      OFFSET(get<int32_t>, {0x10, 4, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleSign
/// Size: 0x0000 (0x000018 - 0x000018)
class FRigVMFunction_MathDoubleSign : public FRigVMFunction_MathDoubleUnaryOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleClamp
/// Size: 0x0020 (0x000008 - 0x000028)
class FRigVMFunction_MathDoubleClamp : public FRigVMFunction_MathDoubleBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(double)                                    Value                                                       OFFSET(get<double>, {0x8, 8, 0, 0})
	DMember(double)                                    Minimum                                                     OFFSET(get<double>, {0x10, 8, 0, 0})
	DMember(double)                                    Maximum                                                     OFFSET(get<double>, {0x18, 8, 0, 0})
	DMember(double)                                    Result                                                      OFFSET(get<double>, {0x20, 8, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleLerp
/// Size: 0x0020 (0x000008 - 0x000028)
class FRigVMFunction_MathDoubleLerp : public FRigVMFunction_MathDoubleBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(double)                                    A                                                           OFFSET(get<double>, {0x8, 8, 0, 0})
	DMember(double)                                    B                                                           OFFSET(get<double>, {0x10, 8, 0, 0})
	DMember(double)                                    T                                                           OFFSET(get<double>, {0x18, 8, 0, 0})
	DMember(double)                                    Result                                                      OFFSET(get<double>, {0x20, 8, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleRemap
/// Size: 0x0038 (0x000008 - 0x000040)
class FRigVMFunction_MathDoubleRemap : public FRigVMFunction_MathDoubleBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(double)                                    Value                                                       OFFSET(get<double>, {0x8, 8, 0, 0})
	DMember(double)                                    SourceMinimum                                               OFFSET(get<double>, {0x10, 8, 0, 0})
	DMember(double)                                    SourceMaximum                                               OFFSET(get<double>, {0x18, 8, 0, 0})
	DMember(double)                                    TargetMinimum                                               OFFSET(get<double>, {0x20, 8, 0, 0})
	DMember(double)                                    TargetMaximum                                               OFFSET(get<double>, {0x28, 8, 0, 0})
	DMember(bool)                                      bClamp                                                      OFFSET(get<bool>, {0x30, 1, 0, 0})
	DMember(double)                                    Result                                                      OFFSET(get<double>, {0x38, 8, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleEquals
/// Size: 0x0018 (0x000008 - 0x000020)
class FRigVMFunction_MathDoubleEquals : public FRigVMFunction_MathDoubleBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(double)                                    A                                                           OFFSET(get<double>, {0x8, 8, 0, 0})
	DMember(double)                                    B                                                           OFFSET(get<double>, {0x10, 8, 0, 0})
	DMember(bool)                                      Result                                                      OFFSET(get<bool>, {0x18, 1, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleNotEquals
/// Size: 0x0018 (0x000008 - 0x000020)
class FRigVMFunction_MathDoubleNotEquals : public FRigVMFunction_MathDoubleBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(double)                                    A                                                           OFFSET(get<double>, {0x8, 8, 0, 0})
	DMember(double)                                    B                                                           OFFSET(get<double>, {0x10, 8, 0, 0})
	DMember(bool)                                      Result                                                      OFFSET(get<bool>, {0x18, 1, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleGreater
/// Size: 0x0018 (0x000008 - 0x000020)
class FRigVMFunction_MathDoubleGreater : public FRigVMFunction_MathDoubleBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(double)                                    A                                                           OFFSET(get<double>, {0x8, 8, 0, 0})
	DMember(double)                                    B                                                           OFFSET(get<double>, {0x10, 8, 0, 0})
	DMember(bool)                                      Result                                                      OFFSET(get<bool>, {0x18, 1, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleLess
/// Size: 0x0018 (0x000008 - 0x000020)
class FRigVMFunction_MathDoubleLess : public FRigVMFunction_MathDoubleBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(double)                                    A                                                           OFFSET(get<double>, {0x8, 8, 0, 0})
	DMember(double)                                    B                                                           OFFSET(get<double>, {0x10, 8, 0, 0})
	DMember(bool)                                      Result                                                      OFFSET(get<bool>, {0x18, 1, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleGreaterEqual
/// Size: 0x0018 (0x000008 - 0x000020)
class FRigVMFunction_MathDoubleGreaterEqual : public FRigVMFunction_MathDoubleBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(double)                                    A                                                           OFFSET(get<double>, {0x8, 8, 0, 0})
	DMember(double)                                    B                                                           OFFSET(get<double>, {0x10, 8, 0, 0})
	DMember(bool)                                      Result                                                      OFFSET(get<bool>, {0x18, 1, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleLessEqual
/// Size: 0x0018 (0x000008 - 0x000020)
class FRigVMFunction_MathDoubleLessEqual : public FRigVMFunction_MathDoubleBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(double)                                    A                                                           OFFSET(get<double>, {0x8, 8, 0, 0})
	DMember(double)                                    B                                                           OFFSET(get<double>, {0x10, 8, 0, 0})
	DMember(bool)                                      Result                                                      OFFSET(get<bool>, {0x18, 1, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleIsNearlyZero
/// Size: 0x0018 (0x000008 - 0x000020)
class FRigVMFunction_MathDoubleIsNearlyZero : public FRigVMFunction_MathDoubleBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(double)                                    Value                                                       OFFSET(get<double>, {0x8, 8, 0, 0})
	DMember(double)                                    Tolerance                                                   OFFSET(get<double>, {0x10, 8, 0, 0})
	DMember(bool)                                      Result                                                      OFFSET(get<bool>, {0x18, 1, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleIsNearlyEqual
/// Size: 0x0020 (0x000008 - 0x000028)
class FRigVMFunction_MathDoubleIsNearlyEqual : public FRigVMFunction_MathDoubleBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(double)                                    A                                                           OFFSET(get<double>, {0x8, 8, 0, 0})
	DMember(double)                                    B                                                           OFFSET(get<double>, {0x10, 8, 0, 0})
	DMember(double)                                    Tolerance                                                   OFFSET(get<double>, {0x18, 8, 0, 0})
	DMember(bool)                                      Result                                                      OFFSET(get<bool>, {0x20, 1, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleDeg
/// Size: 0x0000 (0x000018 - 0x000018)
class FRigVMFunction_MathDoubleDeg : public FRigVMFunction_MathDoubleUnaryOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleRad
/// Size: 0x0000 (0x000018 - 0x000018)
class FRigVMFunction_MathDoubleRad : public FRigVMFunction_MathDoubleUnaryOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleSin
/// Size: 0x0000 (0x000018 - 0x000018)
class FRigVMFunction_MathDoubleSin : public FRigVMFunction_MathDoubleUnaryOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleCos
/// Size: 0x0000 (0x000018 - 0x000018)
class FRigVMFunction_MathDoubleCos : public FRigVMFunction_MathDoubleUnaryOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleTan
/// Size: 0x0000 (0x000018 - 0x000018)
class FRigVMFunction_MathDoubleTan : public FRigVMFunction_MathDoubleUnaryOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleAsin
/// Size: 0x0000 (0x000018 - 0x000018)
class FRigVMFunction_MathDoubleAsin : public FRigVMFunction_MathDoubleUnaryOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleAcos
/// Size: 0x0000 (0x000018 - 0x000018)
class FRigVMFunction_MathDoubleAcos : public FRigVMFunction_MathDoubleUnaryOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleAtan
/// Size: 0x0000 (0x000018 - 0x000018)
class FRigVMFunction_MathDoubleAtan : public FRigVMFunction_MathDoubleUnaryOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleAtan2
/// Size: 0x0000 (0x000020 - 0x000020)
class FRigVMFunction_MathDoubleAtan2 : public FRigVMFunction_MathDoubleBinaryOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleLawOfCosine
/// Size: 0x0038 (0x000008 - 0x000040)
class FRigVMFunction_MathDoubleLawOfCosine : public FRigVMFunction_MathDoubleBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(double)                                    A                                                           OFFSET(get<double>, {0x8, 8, 0, 0})
	DMember(double)                                    B                                                           OFFSET(get<double>, {0x10, 8, 0, 0})
	DMember(double)                                    C                                                           OFFSET(get<double>, {0x18, 8, 0, 0})
	DMember(double)                                    AlphaAngle                                                  OFFSET(get<double>, {0x20, 8, 0, 0})
	DMember(double)                                    BetaAngle                                                   OFFSET(get<double>, {0x28, 8, 0, 0})
	DMember(double)                                    GammaAngle                                                  OFFSET(get<double>, {0x30, 8, 0, 0})
	DMember(bool)                                      bValid                                                      OFFSET(get<bool>, {0x38, 1, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleExponential
/// Size: 0x0000 (0x000018 - 0x000018)
class FRigVMFunction_MathDoubleExponential : public FRigVMFunction_MathDoubleUnaryOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleArraySum
/// Size: 0x0018 (0x000008 - 0x000020)
class FRigVMFunction_MathDoubleArraySum : public FRigVMFunction_MathDoubleBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(TArray<double>)                            Array                                                       OFFSET(get<T>, {0x8, 16, 0, 0})
	DMember(double)                                    Sum                                                         OFFSET(get<double>, {0x18, 8, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleArrayAverage
/// Size: 0x0018 (0x000008 - 0x000020)
class FRigVMFunction_MathDoubleArrayAverage : public FRigVMFunction_MathDoubleBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(TArray<double>)                            Array                                                       OFFSET(get<T>, {0x8, 16, 0, 0})
	DMember(double)                                    Average                                                     OFFSET(get<double>, {0x18, 8, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatBase
/// Size: 0x0000 (0x000008 - 0x000008)
class FRigVMFunction_MathFloatBase : public FRigVMFunction_MathBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatConstant
/// Size: 0x0008 (0x000008 - 0x000010)
class FRigVMFunction_MathFloatConstant : public FRigVMFunction_MathFloatBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(float)                                     Value                                                       OFFSET(get<float>, {0x8, 4, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatUnaryOp
/// Size: 0x0008 (0x000008 - 0x000010)
class FRigVMFunction_MathFloatUnaryOp : public FRigVMFunction_MathFloatBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(float)                                     Value                                                       OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     Result                                                      OFFSET(get<float>, {0xC, 4, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatBinaryOp
/// Size: 0x0010 (0x000008 - 0x000018)
class FRigVMFunction_MathFloatBinaryOp : public FRigVMFunction_MathFloatBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(float)                                     A                                                           OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     B                                                           OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     Result                                                      OFFSET(get<float>, {0x10, 4, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatBinaryAggregateOp
/// Size: 0x0010 (0x000008 - 0x000018)
class FRigVMFunction_MathFloatBinaryAggregateOp : public FRigVMFunction_MathFloatBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(float)                                     A                                                           OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     B                                                           OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     Result                                                      OFFSET(get<float>, {0x10, 4, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatMake
/// Size: 0x0008 (0x000008 - 0x000010)
class FRigVMFunction_MathFloatMake : public FRigVMFunction_MathFloatBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(float)                                     Value                                                       OFFSET(get<float>, {0x8, 4, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatConstPi
/// Size: 0x0000 (0x000010 - 0x000010)
class FRigVMFunction_MathFloatConstPi : public FRigVMFunction_MathFloatConstant
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatConstHalfPi
/// Size: 0x0000 (0x000010 - 0x000010)
class FRigVMFunction_MathFloatConstHalfPi : public FRigVMFunction_MathFloatConstant
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatConstTwoPi
/// Size: 0x0000 (0x000010 - 0x000010)
class FRigVMFunction_MathFloatConstTwoPi : public FRigVMFunction_MathFloatConstant
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatConstE
/// Size: 0x0000 (0x000010 - 0x000010)
class FRigVMFunction_MathFloatConstE : public FRigVMFunction_MathFloatConstant
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatAdd
/// Size: 0x0000 (0x000018 - 0x000018)
class FRigVMFunction_MathFloatAdd : public FRigVMFunction_MathFloatBinaryAggregateOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatSub
/// Size: 0x0000 (0x000018 - 0x000018)
class FRigVMFunction_MathFloatSub : public FRigVMFunction_MathFloatBinaryOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatMul
/// Size: 0x0000 (0x000018 - 0x000018)
class FRigVMFunction_MathFloatMul : public FRigVMFunction_MathFloatBinaryAggregateOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatDiv
/// Size: 0x0000 (0x000018 - 0x000018)
class FRigVMFunction_MathFloatDiv : public FRigVMFunction_MathFloatBinaryOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatMod
/// Size: 0x0000 (0x000018 - 0x000018)
class FRigVMFunction_MathFloatMod : public FRigVMFunction_MathFloatBinaryOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatMin
/// Size: 0x0000 (0x000018 - 0x000018)
class FRigVMFunction_MathFloatMin : public FRigVMFunction_MathFloatBinaryAggregateOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatMax
/// Size: 0x0000 (0x000018 - 0x000018)
class FRigVMFunction_MathFloatMax : public FRigVMFunction_MathFloatBinaryAggregateOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatPow
/// Size: 0x0000 (0x000018 - 0x000018)
class FRigVMFunction_MathFloatPow : public FRigVMFunction_MathFloatBinaryOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatSqrt
/// Size: 0x0000 (0x000010 - 0x000010)
class FRigVMFunction_MathFloatSqrt : public FRigVMFunction_MathFloatUnaryOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatNegate
/// Size: 0x0000 (0x000010 - 0x000010)
class FRigVMFunction_MathFloatNegate : public FRigVMFunction_MathFloatUnaryOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatAbs
/// Size: 0x0000 (0x000010 - 0x000010)
class FRigVMFunction_MathFloatAbs : public FRigVMFunction_MathFloatUnaryOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatFloor
/// Size: 0x0010 (0x000008 - 0x000018)
class FRigVMFunction_MathFloatFloor : public FRigVMFunction_MathFloatBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(float)                                     Value                                                       OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     Result                                                      OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(int32_t)                                   Int                                                         OFFSET(get<int32_t>, {0x10, 4, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatCeil
/// Size: 0x0010 (0x000008 - 0x000018)
class FRigVMFunction_MathFloatCeil : public FRigVMFunction_MathFloatBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(float)                                     Value                                                       OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     Result                                                      OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(int32_t)                                   Int                                                         OFFSET(get<int32_t>, {0x10, 4, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatRound
/// Size: 0x0010 (0x000008 - 0x000018)
class FRigVMFunction_MathFloatRound : public FRigVMFunction_MathFloatBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(float)                                     Value                                                       OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     Result                                                      OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(int32_t)                                   Int                                                         OFFSET(get<int32_t>, {0x10, 4, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatToInt
/// Size: 0x0008 (0x000008 - 0x000010)
class FRigVMFunction_MathFloatToInt : public FRigVMFunction_MathFloatBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(float)                                     Value                                                       OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   Result                                                      OFFSET(get<int32_t>, {0xC, 4, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatSign
/// Size: 0x0000 (0x000010 - 0x000010)
class FRigVMFunction_MathFloatSign : public FRigVMFunction_MathFloatUnaryOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatClamp
/// Size: 0x0010 (0x000008 - 0x000018)
class FRigVMFunction_MathFloatClamp : public FRigVMFunction_MathFloatBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(float)                                     Value                                                       OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     Minimum                                                     OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     Maximum                                                     OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     Result                                                      OFFSET(get<float>, {0x14, 4, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatLerp
/// Size: 0x0010 (0x000008 - 0x000018)
class FRigVMFunction_MathFloatLerp : public FRigVMFunction_MathFloatBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(float)                                     A                                                           OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     B                                                           OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     T                                                           OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     Result                                                      OFFSET(get<float>, {0x14, 4, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatRemap
/// Size: 0x0020 (0x000008 - 0x000028)
class FRigVMFunction_MathFloatRemap : public FRigVMFunction_MathFloatBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(float)                                     Value                                                       OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     SourceMinimum                                               OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     SourceMaximum                                               OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     TargetMinimum                                               OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     TargetMaximum                                               OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(bool)                                      bClamp                                                      OFFSET(get<bool>, {0x1C, 1, 0, 0})
	DMember(float)                                     Result                                                      OFFSET(get<float>, {0x20, 4, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatEquals
/// Size: 0x0010 (0x000008 - 0x000018)
class FRigVMFunction_MathFloatEquals : public FRigVMFunction_MathFloatBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(float)                                     A                                                           OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     B                                                           OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(bool)                                      Result                                                      OFFSET(get<bool>, {0x10, 1, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatNotEquals
/// Size: 0x0010 (0x000008 - 0x000018)
class FRigVMFunction_MathFloatNotEquals : public FRigVMFunction_MathFloatBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(float)                                     A                                                           OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     B                                                           OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(bool)                                      Result                                                      OFFSET(get<bool>, {0x10, 1, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatGreater
/// Size: 0x0010 (0x000008 - 0x000018)
class FRigVMFunction_MathFloatGreater : public FRigVMFunction_MathFloatBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(float)                                     A                                                           OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     B                                                           OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(bool)                                      Result                                                      OFFSET(get<bool>, {0x10, 1, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatLess
/// Size: 0x0010 (0x000008 - 0x000018)
class FRigVMFunction_MathFloatLess : public FRigVMFunction_MathFloatBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(float)                                     A                                                           OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     B                                                           OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(bool)                                      Result                                                      OFFSET(get<bool>, {0x10, 1, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatGreaterEqual
/// Size: 0x0010 (0x000008 - 0x000018)
class FRigVMFunction_MathFloatGreaterEqual : public FRigVMFunction_MathFloatBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(float)                                     A                                                           OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     B                                                           OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(bool)                                      Result                                                      OFFSET(get<bool>, {0x10, 1, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatLessEqual
/// Size: 0x0010 (0x000008 - 0x000018)
class FRigVMFunction_MathFloatLessEqual : public FRigVMFunction_MathFloatBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(float)                                     A                                                           OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     B                                                           OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(bool)                                      Result                                                      OFFSET(get<bool>, {0x10, 1, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatIsNearlyZero
/// Size: 0x0010 (0x000008 - 0x000018)
class FRigVMFunction_MathFloatIsNearlyZero : public FRigVMFunction_MathFloatBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(float)                                     Value                                                       OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     Tolerance                                                   OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(bool)                                      Result                                                      OFFSET(get<bool>, {0x10, 1, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatIsNearlyEqual
/// Size: 0x0010 (0x000008 - 0x000018)
class FRigVMFunction_MathFloatIsNearlyEqual : public FRigVMFunction_MathFloatBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(float)                                     A                                                           OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     B                                                           OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     Tolerance                                                   OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(bool)                                      Result                                                      OFFSET(get<bool>, {0x14, 1, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatSelectBool
/// Size: 0x0010 (0x000008 - 0x000018)
class FRigVMFunction_MathFloatSelectBool : public FRigVMFunction_MathFloatBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(bool)                                      Condition                                                   OFFSET(get<bool>, {0x8, 1, 0, 0})
	DMember(float)                                     IfTrue                                                      OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     IfFalse                                                     OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     Result                                                      OFFSET(get<float>, {0x14, 4, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatDeg
/// Size: 0x0000 (0x000010 - 0x000010)
class FRigVMFunction_MathFloatDeg : public FRigVMFunction_MathFloatUnaryOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatRad
/// Size: 0x0000 (0x000010 - 0x000010)
class FRigVMFunction_MathFloatRad : public FRigVMFunction_MathFloatUnaryOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatSin
/// Size: 0x0000 (0x000010 - 0x000010)
class FRigVMFunction_MathFloatSin : public FRigVMFunction_MathFloatUnaryOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatCos
/// Size: 0x0000 (0x000010 - 0x000010)
class FRigVMFunction_MathFloatCos : public FRigVMFunction_MathFloatUnaryOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatTan
/// Size: 0x0000 (0x000010 - 0x000010)
class FRigVMFunction_MathFloatTan : public FRigVMFunction_MathFloatUnaryOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatAsin
/// Size: 0x0000 (0x000010 - 0x000010)
class FRigVMFunction_MathFloatAsin : public FRigVMFunction_MathFloatUnaryOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatAcos
/// Size: 0x0000 (0x000010 - 0x000010)
class FRigVMFunction_MathFloatAcos : public FRigVMFunction_MathFloatUnaryOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatAtan
/// Size: 0x0000 (0x000010 - 0x000010)
class FRigVMFunction_MathFloatAtan : public FRigVMFunction_MathFloatUnaryOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatAtan2
/// Size: 0x0000 (0x000018 - 0x000018)
class FRigVMFunction_MathFloatAtan2 : public FRigVMFunction_MathFloatBinaryOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatLawOfCosine
/// Size: 0x0020 (0x000008 - 0x000028)
class FRigVMFunction_MathFloatLawOfCosine : public FRigVMFunction_MathFloatBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(float)                                     A                                                           OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     B                                                           OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     C                                                           OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     AlphaAngle                                                  OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     BetaAngle                                                   OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     GammaAngle                                                  OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(bool)                                      bValid                                                      OFFSET(get<bool>, {0x20, 1, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatExponential
/// Size: 0x0000 (0x000010 - 0x000010)
class FRigVMFunction_MathFloatExponential : public FRigVMFunction_MathFloatUnaryOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatArraySum
/// Size: 0x0018 (0x000008 - 0x000020)
class FRigVMFunction_MathFloatArraySum : public FRigVMFunction_MathFloatBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(TArray<float>)                             Array                                                       OFFSET(get<T>, {0x8, 16, 0, 0})
	DMember(float)                                     Sum                                                         OFFSET(get<float>, {0x18, 4, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatArrayAverage
/// Size: 0x0018 (0x000008 - 0x000020)
class FRigVMFunction_MathFloatArrayAverage : public FRigVMFunction_MathFloatBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(TArray<float>)                             Array                                                       OFFSET(get<T>, {0x8, 16, 0, 0})
	DMember(float)                                     Average                                                     OFFSET(get<float>, {0x18, 4, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathIntBase
/// Size: 0x0000 (0x000008 - 0x000008)
class FRigVMFunction_MathIntBase : public FRigVMFunction_MathBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathIntUnaryOp
/// Size: 0x0008 (0x000008 - 0x000010)
class FRigVMFunction_MathIntUnaryOp : public FRigVMFunction_MathIntBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(int32_t)                                   Value                                                       OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   Result                                                      OFFSET(get<int32_t>, {0xC, 4, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathIntBinaryOp
/// Size: 0x0010 (0x000008 - 0x000018)
class FRigVMFunction_MathIntBinaryOp : public FRigVMFunction_MathIntBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(int32_t)                                   A                                                           OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   B                                                           OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	DMember(int32_t)                                   Result                                                      OFFSET(get<int32_t>, {0x10, 4, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathIntBinaryAggregateOp
/// Size: 0x0010 (0x000008 - 0x000018)
class FRigVMFunction_MathIntBinaryAggregateOp : public FRigVMFunction_MathIntBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(int32_t)                                   A                                                           OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   B                                                           OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	DMember(int32_t)                                   Result                                                      OFFSET(get<int32_t>, {0x10, 4, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathIntMake
/// Size: 0x0008 (0x000008 - 0x000010)
class FRigVMFunction_MathIntMake : public FRigVMFunction_MathIntBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(int32_t)                                   Value                                                       OFFSET(get<int32_t>, {0x8, 4, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathIntAdd
/// Size: 0x0000 (0x000018 - 0x000018)
class FRigVMFunction_MathIntAdd : public FRigVMFunction_MathIntBinaryAggregateOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathIntSub
/// Size: 0x0000 (0x000018 - 0x000018)
class FRigVMFunction_MathIntSub : public FRigVMFunction_MathIntBinaryOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathIntMul
/// Size: 0x0000 (0x000018 - 0x000018)
class FRigVMFunction_MathIntMul : public FRigVMFunction_MathIntBinaryAggregateOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathIntDiv
/// Size: 0x0000 (0x000018 - 0x000018)
class FRigVMFunction_MathIntDiv : public FRigVMFunction_MathIntBinaryOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathIntMod
/// Size: 0x0000 (0x000018 - 0x000018)
class FRigVMFunction_MathIntMod : public FRigVMFunction_MathIntBinaryOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathIntMin
/// Size: 0x0000 (0x000018 - 0x000018)
class FRigVMFunction_MathIntMin : public FRigVMFunction_MathIntBinaryAggregateOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathIntMax
/// Size: 0x0000 (0x000018 - 0x000018)
class FRigVMFunction_MathIntMax : public FRigVMFunction_MathIntBinaryAggregateOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathIntPow
/// Size: 0x0000 (0x000018 - 0x000018)
class FRigVMFunction_MathIntPow : public FRigVMFunction_MathIntBinaryOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathIntNegate
/// Size: 0x0000 (0x000010 - 0x000010)
class FRigVMFunction_MathIntNegate : public FRigVMFunction_MathIntUnaryOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathIntAbs
/// Size: 0x0000 (0x000010 - 0x000010)
class FRigVMFunction_MathIntAbs : public FRigVMFunction_MathIntUnaryOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathIntToFloat
/// Size: 0x0008 (0x000008 - 0x000010)
class FRigVMFunction_MathIntToFloat : public FRigVMFunction_MathIntBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(int32_t)                                   Value                                                       OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(float)                                     Result                                                      OFFSET(get<float>, {0xC, 4, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathIntToDouble
/// Size: 0x0010 (0x000008 - 0x000018)
class FRigVMFunction_MathIntToDouble : public FRigVMFunction_MathIntBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(int32_t)                                   Value                                                       OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(double)                                    Result                                                      OFFSET(get<double>, {0x10, 8, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathIntSign
/// Size: 0x0000 (0x000010 - 0x000010)
class FRigVMFunction_MathIntSign : public FRigVMFunction_MathIntUnaryOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathIntClamp
/// Size: 0x0010 (0x000008 - 0x000018)
class FRigVMFunction_MathIntClamp : public FRigVMFunction_MathIntBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(int32_t)                                   Value                                                       OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   Minimum                                                     OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	DMember(int32_t)                                   Maximum                                                     OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	DMember(int32_t)                                   Result                                                      OFFSET(get<int32_t>, {0x14, 4, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathIntEquals
/// Size: 0x0010 (0x000008 - 0x000018)
class FRigVMFunction_MathIntEquals : public FRigVMFunction_MathIntBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(int32_t)                                   A                                                           OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   B                                                           OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	DMember(bool)                                      Result                                                      OFFSET(get<bool>, {0x10, 1, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathIntNotEquals
/// Size: 0x0010 (0x000008 - 0x000018)
class FRigVMFunction_MathIntNotEquals : public FRigVMFunction_MathIntBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(int32_t)                                   A                                                           OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   B                                                           OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	DMember(bool)                                      Result                                                      OFFSET(get<bool>, {0x10, 1, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathIntGreater
/// Size: 0x0010 (0x000008 - 0x000018)
class FRigVMFunction_MathIntGreater : public FRigVMFunction_MathIntBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(int32_t)                                   A                                                           OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   B                                                           OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	DMember(bool)                                      Result                                                      OFFSET(get<bool>, {0x10, 1, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathIntLess
/// Size: 0x0010 (0x000008 - 0x000018)
class FRigVMFunction_MathIntLess : public FRigVMFunction_MathIntBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(int32_t)                                   A                                                           OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   B                                                           OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	DMember(bool)                                      Result                                                      OFFSET(get<bool>, {0x10, 1, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathIntGreaterEqual
/// Size: 0x0010 (0x000008 - 0x000018)
class FRigVMFunction_MathIntGreaterEqual : public FRigVMFunction_MathIntBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(int32_t)                                   A                                                           OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   B                                                           OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	DMember(bool)                                      Result                                                      OFFSET(get<bool>, {0x10, 1, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathIntLessEqual
/// Size: 0x0010 (0x000008 - 0x000018)
class FRigVMFunction_MathIntLessEqual : public FRigVMFunction_MathIntBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(int32_t)                                   A                                                           OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   B                                                           OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	DMember(bool)                                      Result                                                      OFFSET(get<bool>, {0x10, 1, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathIntArraySum
/// Size: 0x0018 (0x000008 - 0x000020)
class FRigVMFunction_MathIntArraySum : public FRigVMFunction_MathIntBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(TArray<int32_t>)                           Array                                                       OFFSET(get<T>, {0x8, 16, 0, 0})
	DMember(int32_t)                                   Sum                                                         OFFSET(get<int32_t>, {0x18, 4, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathIntArrayAverage
/// Size: 0x0018 (0x000008 - 0x000020)
class FRigVMFunction_MathIntArrayAverage : public FRigVMFunction_MathIntBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(TArray<int32_t>)                           Array                                                       OFFSET(get<T>, {0x8, 16, 0, 0})
	DMember(int32_t)                                   Average                                                     OFFSET(get<int32_t>, {0x18, 4, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathIntToString
/// Size: 0x0018 (0x000008 - 0x000020)
class FRigVMFunction_MathIntToString : public FRigVMFunction_MathIntBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(int32_t)                                   Number                                                      OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   PaddedSize                                                  OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	SMember(FString)                                   Result                                                      OFFSET(getStruct<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathIntToName
/// Size: 0x0010 (0x000008 - 0x000018)
class FRigVMFunction_MathIntToName : public FRigVMFunction_MathIntBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(int32_t)                                   Number                                                      OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   PaddedSize                                                  OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	SMember(FName)                                     Result                                                      OFFSET(getStruct<T>, {0x10, 4, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathMatrixBase
/// Size: 0x0000 (0x000008 - 0x000008)
class FRigVMFunction_MathMatrixBase : public FRigVMFunction_MathBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathMatrixUnaryOp
/// Size: 0x0108 (0x000008 - 0x000110)
class FRigVMFunction_MathMatrixUnaryOp : public FRigVMFunction_MathMatrixBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
	SMember(FMatrix)                                   Value                                                       OFFSET(getStruct<T>, {0x10, 128, 0, 0})
	SMember(FMatrix)                                   Result                                                      OFFSET(getStruct<T>, {0x90, 128, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathMatrixBinaryOp
/// Size: 0x0188 (0x000008 - 0x000190)
class FRigVMFunction_MathMatrixBinaryOp : public FRigVMFunction_MathMatrixBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
	SMember(FMatrix)                                   A                                                           OFFSET(getStruct<T>, {0x10, 128, 0, 0})
	SMember(FMatrix)                                   B                                                           OFFSET(getStruct<T>, {0x90, 128, 0, 0})
	SMember(FMatrix)                                   Result                                                      OFFSET(getStruct<T>, {0x110, 128, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathMatrixBinaryAggregateOp
/// Size: 0x0188 (0x000008 - 0x000190)
class FRigVMFunction_MathMatrixBinaryAggregateOp : public FRigVMFunction_MathMatrixBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
	SMember(FMatrix)                                   A                                                           OFFSET(getStruct<T>, {0x10, 128, 0, 0})
	SMember(FMatrix)                                   B                                                           OFFSET(getStruct<T>, {0x90, 128, 0, 0})
	SMember(FMatrix)                                   Result                                                      OFFSET(getStruct<T>, {0x110, 128, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathMatrixToTransform
/// Size: 0x00E8 (0x000008 - 0x0000F0)
class FRigVMFunction_MathMatrixToTransform : public FRigVMFunction_MathMatrixBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	SMember(FMatrix)                                   Value                                                       OFFSET(getStruct<T>, {0x10, 128, 0, 0})
	SMember(FTransform)                                Result                                                      OFFSET(getStruct<T>, {0x90, 96, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathMatrixFromTransform
/// Size: 0x00E8 (0x000008 - 0x0000F0)
class FRigVMFunction_MathMatrixFromTransform : public FRigVMFunction_MathMatrixBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	SMember(FTransform)                                Transform                                                   OFFSET(getStruct<T>, {0x10, 96, 0, 0})
	SMember(FMatrix)                                   Result                                                      OFFSET(getStruct<T>, {0x70, 128, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathMatrixFromTransformV2
/// Size: 0x00E8 (0x000008 - 0x0000F0)
class FRigVMFunction_MathMatrixFromTransformV2 : public FRigVMFunction_MathMatrixBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	SMember(FTransform)                                Value                                                       OFFSET(getStruct<T>, {0x10, 96, 0, 0})
	SMember(FMatrix)                                   Result                                                      OFFSET(getStruct<T>, {0x70, 128, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathMatrixToVectors
/// Size: 0x00E8 (0x000008 - 0x0000F0)
class FRigVMFunction_MathMatrixToVectors : public FRigVMFunction_MathMatrixBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	SMember(FMatrix)                                   Value                                                       OFFSET(getStruct<T>, {0x10, 128, 0, 0})
	SMember(FVector)                                   Origin                                                      OFFSET(getStruct<T>, {0x90, 24, 0, 0})
	SMember(FVector)                                   X                                                           OFFSET(getStruct<T>, {0xA8, 24, 0, 0})
	SMember(FVector)                                   Y                                                           OFFSET(getStruct<T>, {0xC0, 24, 0, 0})
	SMember(FVector)                                   Z                                                           OFFSET(getStruct<T>, {0xD8, 24, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathMatrixFromVectors
/// Size: 0x00E8 (0x000008 - 0x0000F0)
class FRigVMFunction_MathMatrixFromVectors : public FRigVMFunction_MathMatrixBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	SMember(FVector)                                   Origin                                                      OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	SMember(FVector)                                   X                                                           OFFSET(getStruct<T>, {0x20, 24, 0, 0})
	SMember(FVector)                                   Y                                                           OFFSET(getStruct<T>, {0x38, 24, 0, 0})
	SMember(FVector)                                   Z                                                           OFFSET(getStruct<T>, {0x50, 24, 0, 0})
	SMember(FMatrix)                                   Result                                                      OFFSET(getStruct<T>, {0x70, 128, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathMatrixMul
/// Size: 0x0000 (0x000190 - 0x000190)
class FRigVMFunction_MathMatrixMul : public FRigVMFunction_MathMatrixBinaryAggregateOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathMatrixInverse
/// Size: 0x0000 (0x000110 - 0x000110)
class FRigVMFunction_MathMatrixInverse : public FRigVMFunction_MathMatrixUnaryOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathQuaternionBase
/// Size: 0x0000 (0x000008 - 0x000008)
class FRigVMFunction_MathQuaternionBase : public FRigVMFunction_MathBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathQuaternionUnaryOp
/// Size: 0x0048 (0x000008 - 0x000050)
class FRigVMFunction_MathQuaternionUnaryOp : public FRigVMFunction_MathQuaternionBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FQuat)                                     Value                                                       OFFSET(getStruct<T>, {0x10, 32, 0, 0})
	SMember(FQuat)                                     Result                                                      OFFSET(getStruct<T>, {0x30, 32, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathQuaternionBinaryOp
/// Size: 0x0068 (0x000008 - 0x000070)
class FRigVMFunction_MathQuaternionBinaryOp : public FRigVMFunction_MathQuaternionBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FQuat)                                     A                                                           OFFSET(getStruct<T>, {0x10, 32, 0, 0})
	SMember(FQuat)                                     B                                                           OFFSET(getStruct<T>, {0x30, 32, 0, 0})
	SMember(FQuat)                                     Result                                                      OFFSET(getStruct<T>, {0x50, 32, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathQuaternionBinaryAggregateOp
/// Size: 0x0068 (0x000008 - 0x000070)
class FRigVMFunction_MathQuaternionBinaryAggregateOp : public FRigVMFunction_MathQuaternionBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FQuat)                                     A                                                           OFFSET(getStruct<T>, {0x10, 32, 0, 0})
	SMember(FQuat)                                     B                                                           OFFSET(getStruct<T>, {0x30, 32, 0, 0})
	SMember(FQuat)                                     Result                                                      OFFSET(getStruct<T>, {0x50, 32, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathQuaternionMake
/// Size: 0x0038 (0x000008 - 0x000040)
class FRigVMFunction_MathQuaternionMake : public FRigVMFunction_MathQuaternionBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(float)                                     X                                                           OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     Y                                                           OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     Z                                                           OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     W                                                           OFFSET(get<float>, {0x14, 4, 0, 0})
	SMember(FQuat)                                     Result                                                      OFFSET(getStruct<T>, {0x20, 32, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathQuaternionFromAxisAndAngle
/// Size: 0x0048 (0x000008 - 0x000050)
class FRigVMFunction_MathQuaternionFromAxisAndAngle : public FRigVMFunction_MathQuaternionBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FVector)                                   Axis                                                        OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	DMember(float)                                     Angle                                                       OFFSET(get<float>, {0x20, 4, 0, 0})
	SMember(FQuat)                                     Result                                                      OFFSET(getStruct<T>, {0x30, 32, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathQuaternionFromEuler
/// Size: 0x0048 (0x000008 - 0x000050)
class FRigVMFunction_MathQuaternionFromEuler : public FRigVMFunction_MathQuaternionBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FVector)                                   Euler                                                       OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	CMember(EEulerRotationOrder)                       RotationOrder                                               OFFSET(get<T>, {0x20, 1, 0, 0})
	SMember(FQuat)                                     Result                                                      OFFSET(getStruct<T>, {0x30, 32, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathQuaternionFromRotator
/// Size: 0x0038 (0x000008 - 0x000040)
class FRigVMFunction_MathQuaternionFromRotator : public FRigVMFunction_MathQuaternionBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FRotator)                                  Rotator                                                     OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	SMember(FQuat)                                     Result                                                      OFFSET(getStruct<T>, {0x20, 32, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathQuaternionFromRotatorV2
/// Size: 0x0038 (0x000008 - 0x000040)
class FRigVMFunction_MathQuaternionFromRotatorV2 : public FRigVMFunction_MathQuaternionBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FRotator)                                  Value                                                       OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	SMember(FQuat)                                     Result                                                      OFFSET(getStruct<T>, {0x20, 32, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathQuaternionFromTwoVectors
/// Size: 0x0058 (0x000008 - 0x000060)
class FRigVMFunction_MathQuaternionFromTwoVectors : public FRigVMFunction_MathQuaternionBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FVector)                                   A                                                           OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	SMember(FVector)                                   B                                                           OFFSET(getStruct<T>, {0x20, 24, 0, 0})
	SMember(FQuat)                                     Result                                                      OFFSET(getStruct<T>, {0x40, 32, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathQuaternionToAxisAndAngle
/// Size: 0x0048 (0x000008 - 0x000050)
class FRigVMFunction_MathQuaternionToAxisAndAngle : public FRigVMFunction_MathQuaternionBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FQuat)                                     Value                                                       OFFSET(getStruct<T>, {0x10, 32, 0, 0})
	SMember(FVector)                                   Axis                                                        OFFSET(getStruct<T>, {0x30, 24, 0, 0})
	DMember(float)                                     Angle                                                       OFFSET(get<float>, {0x48, 4, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathQuaternionToVectors
/// Size: 0x0078 (0x000008 - 0x000080)
class FRigVMFunction_MathQuaternionToVectors : public FRigVMFunction_MathQuaternionBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FQuat)                                     Value                                                       OFFSET(getStruct<T>, {0x10, 32, 0, 0})
	SMember(FVector)                                   Forward                                                     OFFSET(getStruct<T>, {0x30, 24, 0, 0})
	SMember(FVector)                                   Right                                                       OFFSET(getStruct<T>, {0x48, 24, 0, 0})
	SMember(FVector)                                   Up                                                          OFFSET(getStruct<T>, {0x60, 24, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathQuaternionScale
/// Size: 0x0038 (0x000008 - 0x000040)
class FRigVMFunction_MathQuaternionScale : public FRigVMFunction_MathQuaternionBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FQuat)                                     Value                                                       OFFSET(getStruct<T>, {0x10, 32, 0, 0})
	DMember(float)                                     Scale                                                       OFFSET(get<float>, {0x30, 4, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathQuaternionScaleV2
/// Size: 0x0058 (0x000008 - 0x000060)
class FRigVMFunction_MathQuaternionScaleV2 : public FRigVMFunction_MathQuaternionBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FQuat)                                     Value                                                       OFFSET(getStruct<T>, {0x10, 32, 0, 0})
	DMember(float)                                     Factor                                                      OFFSET(get<float>, {0x30, 4, 0, 0})
	SMember(FQuat)                                     Result                                                      OFFSET(getStruct<T>, {0x40, 32, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathQuaternionToEuler
/// Size: 0x0048 (0x000008 - 0x000050)
class FRigVMFunction_MathQuaternionToEuler : public FRigVMFunction_MathQuaternionBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FQuat)                                     Value                                                       OFFSET(getStruct<T>, {0x10, 32, 0, 0})
	CMember(EEulerRotationOrder)                       RotationOrder                                               OFFSET(get<T>, {0x30, 1, 0, 0})
	SMember(FVector)                                   Result                                                      OFFSET(getStruct<T>, {0x38, 24, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathQuaternionToRotator
/// Size: 0x0048 (0x000008 - 0x000050)
class FRigVMFunction_MathQuaternionToRotator : public FRigVMFunction_MathQuaternionBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FQuat)                                     Value                                                       OFFSET(getStruct<T>, {0x10, 32, 0, 0})
	SMember(FRotator)                                  Result                                                      OFFSET(getStruct<T>, {0x30, 24, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathQuaternionMul
/// Size: 0x0000 (0x000070 - 0x000070)
class FRigVMFunction_MathQuaternionMul : public FRigVMFunction_MathQuaternionBinaryAggregateOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathQuaternionInverse
/// Size: 0x0000 (0x000050 - 0x000050)
class FRigVMFunction_MathQuaternionInverse : public FRigVMFunction_MathQuaternionUnaryOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathQuaternionSlerp
/// Size: 0x0078 (0x000008 - 0x000080)
class FRigVMFunction_MathQuaternionSlerp : public FRigVMFunction_MathQuaternionBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FQuat)                                     A                                                           OFFSET(getStruct<T>, {0x10, 32, 0, 0})
	SMember(FQuat)                                     B                                                           OFFSET(getStruct<T>, {0x30, 32, 0, 0})
	DMember(float)                                     T                                                           OFFSET(get<float>, {0x50, 4, 0, 0})
	SMember(FQuat)                                     Result                                                      OFFSET(getStruct<T>, {0x60, 32, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathQuaternionEquals
/// Size: 0x0058 (0x000008 - 0x000060)
class FRigVMFunction_MathQuaternionEquals : public FRigVMFunction_MathQuaternionBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FQuat)                                     A                                                           OFFSET(getStruct<T>, {0x10, 32, 0, 0})
	SMember(FQuat)                                     B                                                           OFFSET(getStruct<T>, {0x30, 32, 0, 0})
	DMember(bool)                                      Result                                                      OFFSET(get<bool>, {0x50, 1, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathQuaternionNotEquals
/// Size: 0x0058 (0x000008 - 0x000060)
class FRigVMFunction_MathQuaternionNotEquals : public FRigVMFunction_MathQuaternionBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FQuat)                                     A                                                           OFFSET(getStruct<T>, {0x10, 32, 0, 0})
	SMember(FQuat)                                     B                                                           OFFSET(getStruct<T>, {0x30, 32, 0, 0})
	DMember(bool)                                      Result                                                      OFFSET(get<bool>, {0x50, 1, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathQuaternionSelectBool
/// Size: 0x0068 (0x000008 - 0x000070)
class FRigVMFunction_MathQuaternionSelectBool : public FRigVMFunction_MathQuaternionBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	DMember(bool)                                      Condition                                                   OFFSET(get<bool>, {0x8, 1, 0, 0})
	SMember(FQuat)                                     IfTrue                                                      OFFSET(getStruct<T>, {0x10, 32, 0, 0})
	SMember(FQuat)                                     IfFalse                                                     OFFSET(getStruct<T>, {0x30, 32, 0, 0})
	SMember(FQuat)                                     Result                                                      OFFSET(getStruct<T>, {0x50, 32, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathQuaternionDot
/// Size: 0x0058 (0x000008 - 0x000060)
class FRigVMFunction_MathQuaternionDot : public FRigVMFunction_MathQuaternionBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FQuat)                                     A                                                           OFFSET(getStruct<T>, {0x10, 32, 0, 0})
	SMember(FQuat)                                     B                                                           OFFSET(getStruct<T>, {0x30, 32, 0, 0})
	DMember(float)                                     Result                                                      OFFSET(get<float>, {0x50, 4, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathQuaternionUnit
/// Size: 0x0000 (0x000050 - 0x000050)
class FRigVMFunction_MathQuaternionUnit : public FRigVMFunction_MathQuaternionUnaryOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathQuaternionRotateVector
/// Size: 0x0058 (0x000008 - 0x000060)
class FRigVMFunction_MathQuaternionRotateVector : public FRigVMFunction_MathQuaternionBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FQuat)                                     Transform                                                   OFFSET(getStruct<T>, {0x10, 32, 0, 0})
	SMember(FVector)                                   Vector                                                      OFFSET(getStruct<T>, {0x30, 24, 0, 0})
	SMember(FVector)                                   Result                                                      OFFSET(getStruct<T>, {0x48, 24, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathQuaternionGetAxis
/// Size: 0x0048 (0x000008 - 0x000050)
class FRigVMFunction_MathQuaternionGetAxis : public FRigVMFunction_MathQuaternionBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FQuat)                                     Quaternion                                                  OFFSET(getStruct<T>, {0x10, 32, 0, 0})
	CMember(TEnumAsByte<EAxis>)                        Axis                                                        OFFSET(get<T>, {0x30, 1, 0, 0})
	SMember(FVector)                                   Result                                                      OFFSET(getStruct<T>, {0x38, 24, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathQuaternionSwingTwist
/// Size: 0x0088 (0x000008 - 0x000090)
class FRigVMFunction_MathQuaternionSwingTwist : public FRigVMFunction_MathQuaternionBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FQuat)                                     Input                                                       OFFSET(getStruct<T>, {0x10, 32, 0, 0})
	SMember(FVector)                                   TwistAxis                                                   OFFSET(getStruct<T>, {0x30, 24, 0, 0})
	SMember(FQuat)                                     Swing                                                       OFFSET(getStruct<T>, {0x50, 32, 0, 0})
	SMember(FQuat)                                     Twist                                                       OFFSET(getStruct<T>, {0x70, 32, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathQuaternionRotationOrder
/// Size: 0x0008 (0x000008 - 0x000010)
class FRigVMFunction_MathQuaternionRotationOrder : public FRigVMFunction_MathBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(EEulerRotationOrder)                       RotationOrder                                               OFFSET(get<T>, {0x8, 1, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathQuaternionMakeRelative
/// Size: 0x0068 (0x000008 - 0x000070)
class FRigVMFunction_MathQuaternionMakeRelative : public FRigVMFunction_MathQuaternionBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FQuat)                                     Global                                                      OFFSET(getStruct<T>, {0x10, 32, 0, 0})
	SMember(FQuat)                                     Parent                                                      OFFSET(getStruct<T>, {0x30, 32, 0, 0})
	SMember(FQuat)                                     Local                                                       OFFSET(getStruct<T>, {0x50, 32, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathQuaternionMakeAbsolute
/// Size: 0x0068 (0x000008 - 0x000070)
class FRigVMFunction_MathQuaternionMakeAbsolute : public FRigVMFunction_MathQuaternionBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FQuat)                                     Local                                                       OFFSET(getStruct<T>, {0x10, 32, 0, 0})
	SMember(FQuat)                                     Parent                                                      OFFSET(getStruct<T>, {0x30, 32, 0, 0})
	SMember(FQuat)                                     Global                                                      OFFSET(getStruct<T>, {0x50, 32, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathQuaternionMirrorTransform
/// Size: 0x00B8 (0x000008 - 0x0000C0)
class FRigVMFunction_MathQuaternionMirrorTransform : public FRigVMFunction_MathQuaternionBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	SMember(FQuat)                                     Value                                                       OFFSET(getStruct<T>, {0x10, 32, 0, 0})
	CMember(TEnumAsByte<EAxis>)                        MirrorAxis                                                  OFFSET(get<T>, {0x30, 1, 0, 0})
	CMember(TEnumAsByte<EAxis>)                        AxisToFlip                                                  OFFSET(get<T>, {0x31, 1, 0, 0})
	SMember(FTransform)                                CentralTransform                                            OFFSET(getStruct<T>, {0x40, 96, 0, 0})
	SMember(FQuat)                                     Result                                                      OFFSET(getStruct<T>, {0xA0, 32, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathRayBase
/// Size: 0x0000 (0x000008 - 0x000008)
class FRigVMFunction_MathRayBase : public FRigVMFunction_MathBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathRayIntersectRay
/// Size: 0x0088 (0x000008 - 0x000090)
class FRigVMFunction_MathRayIntersectRay : public FRigVMFunction_MathRayBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FRay)                                      A                                                           OFFSET(getStruct<T>, {0x8, 48, 0, 0})
	SMember(FRay)                                      B                                                           OFFSET(getStruct<T>, {0x38, 48, 0, 0})
	SMember(FVector)                                   Result                                                      OFFSET(getStruct<T>, {0x68, 24, 0, 0})
	DMember(float)                                     Distance                                                    OFFSET(get<float>, {0x80, 4, 0, 0})
	DMember(float)                                     RatioA                                                      OFFSET(get<float>, {0x84, 4, 0, 0})
	DMember(float)                                     RatioB                                                      OFFSET(get<float>, {0x88, 4, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathRayIntersectPlane
/// Size: 0x0080 (0x000008 - 0x000088)
class FRigVMFunction_MathRayIntersectPlane : public FRigVMFunction_MathRayBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FRay)                                      Ray                                                         OFFSET(getStruct<T>, {0x8, 48, 0, 0})
	SMember(FVector)                                   PlanePoint                                                  OFFSET(getStruct<T>, {0x38, 24, 0, 0})
	SMember(FVector)                                   PlaneNormal                                                 OFFSET(getStruct<T>, {0x50, 24, 0, 0})
	SMember(FVector)                                   Result                                                      OFFSET(getStruct<T>, {0x68, 24, 0, 0})
	DMember(float)                                     Distance                                                    OFFSET(get<float>, {0x80, 4, 0, 0})
	DMember(float)                                     Ratio                                                       OFFSET(get<float>, {0x84, 4, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathRayGetAt
/// Size: 0x0050 (0x000008 - 0x000058)
class FRigVMFunction_MathRayGetAt : public FRigVMFunction_MathRayBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FRay)                                      Ray                                                         OFFSET(getStruct<T>, {0x8, 48, 0, 0})
	DMember(float)                                     Ratio                                                       OFFSET(get<float>, {0x38, 4, 0, 0})
	SMember(FVector)                                   Result                                                      OFFSET(getStruct<T>, {0x40, 24, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathRayTransform
/// Size: 0x00C8 (0x000008 - 0x0000D0)
class FRigVMFunction_MathRayTransform : public FRigVMFunction_MathRayBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	SMember(FRay)                                      Ray                                                         OFFSET(getStruct<T>, {0x8, 48, 0, 0})
	SMember(FTransform)                                Transform                                                   OFFSET(getStruct<T>, {0x40, 96, 0, 0})
	SMember(FRay)                                      Result                                                      OFFSET(getStruct<T>, {0xA0, 48, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathRBFInterpolateQuatWorkData
/// Size: 0x0090 (0x000000 - 0x000090)
class FRigVMFunction_MathRBFInterpolateQuatWorkData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathRBFInterpolateVectorWorkData
/// Size: 0x0090 (0x000000 - 0x000090)
class FRigVMFunction_MathRBFInterpolateVectorWorkData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathRBFInterpolateBase
/// Size: 0x0000 (0x000008 - 0x000008)
class FRigVMFunction_MathRBFInterpolateBase : public FRigVMFunction_MathBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathRBFInterpolateQuatBase
/// Size: 0x00E8 (0x000008 - 0x0000F0)
class FRigVMFunction_MathRBFInterpolateQuatBase : public FRigVMFunction_MathRBFInterpolateBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	SMember(FQuat)                                     Input                                                       OFFSET(getStruct<T>, {0x10, 32, 0, 0})
	CMember(ERBFQuatDistanceType)                      DistanceFunction                                            OFFSET(get<T>, {0x30, 1, 0, 0})
	CMember(ERBFKernelType)                            SmoothingFunction                                           OFFSET(get<T>, {0x31, 1, 0, 0})
	DMember(float)                                     SmoothingAngle                                              OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(bool)                                      bNormalizeOutput                                            OFFSET(get<bool>, {0x38, 1, 0, 0})
	SMember(FVector)                                   TwistAxis                                                   OFFSET(getStruct<T>, {0x40, 24, 0, 0})
	SMember(FRigVMFunction_MathRBFInterpolateQuatWorkData) WorkData                                                OFFSET(getStruct<T>, {0x60, 144, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathRBFInterpolateVectorBase
/// Size: 0x00B8 (0x000008 - 0x0000C0)
class FRigVMFunction_MathRBFInterpolateVectorBase : public FRigVMFunction_MathRBFInterpolateBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	SMember(FVector)                                   Input                                                       OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	CMember(ERBFVectorDistanceType)                    DistanceFunction                                            OFFSET(get<T>, {0x20, 1, 0, 0})
	CMember(ERBFKernelType)                            SmoothingFunction                                           OFFSET(get<T>, {0x21, 1, 0, 0})
	DMember(float)                                     SmoothingRadius                                             OFFSET(get<float>, {0x24, 4, 0, 0})
	DMember(bool)                                      bNormalizeOutput                                            OFFSET(get<bool>, {0x28, 1, 0, 0})
	SMember(FRigVMFunction_MathRBFInterpolateVectorWorkData) WorkData                                              OFFSET(getStruct<T>, {0x30, 144, 0, 0})
};

/// Struct /Script/RigVM.MathRBFInterpolateQuatFloat_Target
/// Size: 0x0030 (0x000000 - 0x000030)
class FMathRBFInterpolateQuatFloat_Target : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FQuat)                                     Target                                                      OFFSET(getStruct<T>, {0x0, 32, 0, 0})
	DMember(float)                                     Value                                                       OFFSET(get<float>, {0x20, 4, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathRBFInterpolateQuatFloat
/// Size: 0x0020 (0x0000F0 - 0x000110)
class FRigVMFunction_MathRBFInterpolateQuatFloat : public FRigVMFunction_MathRBFInterpolateQuatBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
	CMember(TArray<FMathRBFInterpolateQuatFloat_Target>) Targets                                                   OFFSET(get<T>, {0xF0, 16, 0, 0})
	DMember(float)                                     Output                                                      OFFSET(get<float>, {0x100, 4, 0, 0})
};

/// Struct /Script/RigVM.MathRBFInterpolateQuatVector_Target
/// Size: 0x0040 (0x000000 - 0x000040)
class FMathRBFInterpolateQuatVector_Target : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FQuat)                                     Target                                                      OFFSET(getStruct<T>, {0x0, 32, 0, 0})
	SMember(FVector)                                   Value                                                       OFFSET(getStruct<T>, {0x20, 24, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathRBFInterpolateQuatVector
/// Size: 0x0030 (0x0000F0 - 0x000120)
class FRigVMFunction_MathRBFInterpolateQuatVector : public FRigVMFunction_MathRBFInterpolateQuatBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	CMember(TArray<FMathRBFInterpolateQuatVector_Target>) Targets                                                  OFFSET(get<T>, {0xF0, 16, 0, 0})
	SMember(FVector)                                   Output                                                      OFFSET(getStruct<T>, {0x100, 24, 0, 0})
};

/// Struct /Script/RigVM.MathRBFInterpolateQuatColor_Target
/// Size: 0x0030 (0x000000 - 0x000030)
class FMathRBFInterpolateQuatColor_Target : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FQuat)                                     Target                                                      OFFSET(getStruct<T>, {0x0, 32, 0, 0})
	SMember(FLinearColor)                              Value                                                       OFFSET(getStruct<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathRBFInterpolateQuatColor
/// Size: 0x0020 (0x0000F0 - 0x000110)
class FRigVMFunction_MathRBFInterpolateQuatColor : public FRigVMFunction_MathRBFInterpolateQuatBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
	CMember(TArray<FMathRBFInterpolateQuatColor_Target>) Targets                                                   OFFSET(get<T>, {0xF0, 16, 0, 0})
	SMember(FLinearColor)                              Output                                                      OFFSET(getStruct<T>, {0x100, 16, 0, 0})
};

/// Struct /Script/RigVM.MathRBFInterpolateQuatQuat_Target
/// Size: 0x0040 (0x000000 - 0x000040)
class FMathRBFInterpolateQuatQuat_Target : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FQuat)                                     Target                                                      OFFSET(getStruct<T>, {0x0, 32, 0, 0})
	SMember(FQuat)                                     Value                                                       OFFSET(getStruct<T>, {0x20, 32, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathRBFInterpolateQuatQuat
/// Size: 0x0030 (0x0000F0 - 0x000120)
class FRigVMFunction_MathRBFInterpolateQuatQuat : public FRigVMFunction_MathRBFInterpolateQuatBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	CMember(TArray<FMathRBFInterpolateQuatQuat_Target>) Targets                                                    OFFSET(get<T>, {0xF0, 16, 0, 0})
	SMember(FQuat)                                     Output                                                      OFFSET(getStruct<T>, {0x100, 32, 0, 0})
};

/// Struct /Script/RigVM.MathRBFInterpolateQuatXform_Target
/// Size: 0x0080 (0x000000 - 0x000080)
class FMathRBFInterpolateQuatXform_Target : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FQuat)                                     Target                                                      OFFSET(getStruct<T>, {0x0, 32, 0, 0})
	SMember(FTransform)                                Value                                                       OFFSET(getStruct<T>, {0x20, 96, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathRBFInterpolateQuatXform
/// Size: 0x0070 (0x0000F0 - 0x000160)
class FRigVMFunction_MathRBFInterpolateQuatXform : public FRigVMFunction_MathRBFInterpolateQuatBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
	CMember(TArray<FMathRBFInterpolateQuatXform_Target>) Targets                                                   OFFSET(get<T>, {0xF0, 16, 0, 0})
	SMember(FTransform)                                Output                                                      OFFSET(getStruct<T>, {0x100, 96, 0, 0})
};

/// Struct /Script/RigVM.MathRBFInterpolateVectorFloat_Target
/// Size: 0x0020 (0x000000 - 0x000020)
class FMathRBFInterpolateVectorFloat_Target : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FVector)                                   Target                                                      OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	DMember(float)                                     Value                                                       OFFSET(get<float>, {0x18, 4, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathRBFInterpolateVectorFloat
/// Size: 0x0020 (0x0000C0 - 0x0000E0)
class FRigVMFunction_MathRBFInterpolateVectorFloat : public FRigVMFunction_MathRBFInterpolateVectorBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	CMember(TArray<FMathRBFInterpolateVectorFloat_Target>) Targets                                                 OFFSET(get<T>, {0xC0, 16, 0, 0})
	DMember(float)                                     Output                                                      OFFSET(get<float>, {0xD0, 4, 0, 0})
};

/// Struct /Script/RigVM.MathRBFInterpolateVectorVector_Target
/// Size: 0x0030 (0x000000 - 0x000030)
class FMathRBFInterpolateVectorVector_Target : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FVector)                                   Target                                                      OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FVector)                                   Value                                                       OFFSET(getStruct<T>, {0x18, 24, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathRBFInterpolateVectorVector
/// Size: 0x0030 (0x0000C0 - 0x0000F0)
class FRigVMFunction_MathRBFInterpolateVectorVector : public FRigVMFunction_MathRBFInterpolateVectorBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	CMember(TArray<FMathRBFInterpolateVectorVector_Target>) Targets                                                OFFSET(get<T>, {0xC0, 16, 0, 0})
	SMember(FVector)                                   Output                                                      OFFSET(getStruct<T>, {0xD0, 24, 0, 0})
};

/// Struct /Script/RigVM.MathRBFInterpolateVectorColor_Target
/// Size: 0x0028 (0x000000 - 0x000028)
class FMathRBFInterpolateVectorColor_Target : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FVector)                                   Target                                                      OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FLinearColor)                              Value                                                       OFFSET(getStruct<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathRBFInterpolateVectorColor
/// Size: 0x0020 (0x0000C0 - 0x0000E0)
class FRigVMFunction_MathRBFInterpolateVectorColor : public FRigVMFunction_MathRBFInterpolateVectorBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	CMember(TArray<FMathRBFInterpolateVectorColor_Target>) Targets                                                 OFFSET(get<T>, {0xC0, 16, 0, 0})
	SMember(FLinearColor)                              Output                                                      OFFSET(getStruct<T>, {0xD0, 16, 0, 0})
};

/// Struct /Script/RigVM.MathRBFInterpolateVectorQuat_Target
/// Size: 0x0040 (0x000000 - 0x000040)
class FMathRBFInterpolateVectorQuat_Target : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FVector)                                   Target                                                      OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FQuat)                                     Value                                                       OFFSET(getStruct<T>, {0x20, 32, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathRBFInterpolateVectorQuat
/// Size: 0x0030 (0x0000C0 - 0x0000F0)
class FRigVMFunction_MathRBFInterpolateVectorQuat : public FRigVMFunction_MathRBFInterpolateVectorBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	CMember(TArray<FMathRBFInterpolateVectorQuat_Target>) Targets                                                  OFFSET(get<T>, {0xC0, 16, 0, 0})
	SMember(FQuat)                                     Output                                                      OFFSET(getStruct<T>, {0xD0, 32, 0, 0})
};

/// Struct /Script/RigVM.MathRBFInterpolateVectorXform_Target
/// Size: 0x0080 (0x000000 - 0x000080)
class FMathRBFInterpolateVectorXform_Target : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FVector)                                   Target                                                      OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FTransform)                                Value                                                       OFFSET(getStruct<T>, {0x20, 96, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathRBFInterpolateVectorXform
/// Size: 0x0070 (0x0000C0 - 0x000130)
class FRigVMFunction_MathRBFInterpolateVectorXform : public FRigVMFunction_MathRBFInterpolateVectorBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	CMember(TArray<FMathRBFInterpolateVectorXform_Target>) Targets                                                 OFFSET(get<T>, {0xC0, 16, 0, 0})
	SMember(FTransform)                                Output                                                      OFFSET(getStruct<T>, {0xD0, 96, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathTransformBase
/// Size: 0x0000 (0x000008 - 0x000008)
class FRigVMFunction_MathTransformBase : public FRigVMFunction_MathBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathTransformMutableBase
/// Size: 0x0000 (0x000100 - 0x000100)
class FRigVMFunction_MathTransformMutableBase : public FRigVMFunction_MathMutableBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathTransformUnaryOp
/// Size: 0x00C8 (0x000008 - 0x0000D0)
class FRigVMFunction_MathTransformUnaryOp : public FRigVMFunction_MathTransformBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	SMember(FTransform)                                Value                                                       OFFSET(getStruct<T>, {0x10, 96, 0, 0})
	SMember(FTransform)                                Result                                                      OFFSET(getStruct<T>, {0x70, 96, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathTransformBinaryOp
/// Size: 0x0128 (0x000008 - 0x000130)
class FRigVMFunction_MathTransformBinaryOp : public FRigVMFunction_MathTransformBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	SMember(FTransform)                                A                                                           OFFSET(getStruct<T>, {0x10, 96, 0, 0})
	SMember(FTransform)                                B                                                           OFFSET(getStruct<T>, {0x70, 96, 0, 0})
	SMember(FTransform)                                Result                                                      OFFSET(getStruct<T>, {0xD0, 96, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathTransformBinaryAggregateOp
/// Size: 0x0128 (0x000008 - 0x000130)
class FRigVMFunction_MathTransformBinaryAggregateOp : public FRigVMFunction_MathTransformBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	SMember(FTransform)                                A                                                           OFFSET(getStruct<T>, {0x10, 96, 0, 0})
	SMember(FTransform)                                B                                                           OFFSET(getStruct<T>, {0x70, 96, 0, 0})
	SMember(FTransform)                                Result                                                      OFFSET(getStruct<T>, {0xD0, 96, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathTransformMake
/// Size: 0x00B8 (0x000008 - 0x0000C0)
class FRigVMFunction_MathTransformMake : public FRigVMFunction_MathTransformBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	SMember(FVector)                                   Translation                                                 OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	SMember(FQuat)                                     Rotation                                                    OFFSET(getStruct<T>, {0x20, 32, 0, 0})
	SMember(FVector)                                   Scale                                                       OFFSET(getStruct<T>, {0x40, 24, 0, 0})
	SMember(FTransform)                                Result                                                      OFFSET(getStruct<T>, {0x60, 96, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathTransformFromEulerTransform
/// Size: 0x00A8 (0x000008 - 0x0000B0)
class FRigVMFunction_MathTransformFromEulerTransform : public FRigVMFunction_MathTransformBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FEulerTransform)                           EulerTransform                                              OFFSET(getStruct<T>, {0x8, 72, 0, 0})
	SMember(FTransform)                                Result                                                      OFFSET(getStruct<T>, {0x50, 96, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathTransformFromEulerTransformV2
/// Size: 0x00A8 (0x000008 - 0x0000B0)
class FRigVMFunction_MathTransformFromEulerTransformV2 : public FRigVMFunction_MathTransformBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FEulerTransform)                           Value                                                       OFFSET(getStruct<T>, {0x8, 72, 0, 0})
	SMember(FTransform)                                Result                                                      OFFSET(getStruct<T>, {0x50, 96, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathTransformToEulerTransform
/// Size: 0x00B8 (0x000008 - 0x0000C0)
class FRigVMFunction_MathTransformToEulerTransform : public FRigVMFunction_MathTransformBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	SMember(FTransform)                                Value                                                       OFFSET(getStruct<T>, {0x10, 96, 0, 0})
	SMember(FEulerTransform)                           Result                                                      OFFSET(getStruct<T>, {0x70, 72, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathTransformToVectors
/// Size: 0x00B8 (0x000008 - 0x0000C0)
class FRigVMFunction_MathTransformToVectors : public FRigVMFunction_MathTransformBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	SMember(FTransform)                                Value                                                       OFFSET(getStruct<T>, {0x10, 96, 0, 0})
	SMember(FVector)                                   Forward                                                     OFFSET(getStruct<T>, {0x70, 24, 0, 0})
	SMember(FVector)                                   Right                                                       OFFSET(getStruct<T>, {0x88, 24, 0, 0})
	SMember(FVector)                                   Up                                                          OFFSET(getStruct<T>, {0xA0, 24, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathTransformMul
/// Size: 0x0000 (0x000130 - 0x000130)
class FRigVMFunction_MathTransformMul : public FRigVMFunction_MathTransformBinaryAggregateOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathTransformMakeRelative
/// Size: 0x0128 (0x000008 - 0x000130)
class FRigVMFunction_MathTransformMakeRelative : public FRigVMFunction_MathTransformBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	SMember(FTransform)                                Global                                                      OFFSET(getStruct<T>, {0x10, 96, 0, 0})
	SMember(FTransform)                                Parent                                                      OFFSET(getStruct<T>, {0x70, 96, 0, 0})
	SMember(FTransform)                                Local                                                       OFFSET(getStruct<T>, {0xD0, 96, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathTransformMakeAbsolute
/// Size: 0x0128 (0x000008 - 0x000130)
class FRigVMFunction_MathTransformMakeAbsolute : public FRigVMFunction_MathTransformBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	SMember(FTransform)                                Local                                                       OFFSET(getStruct<T>, {0x10, 96, 0, 0})
	SMember(FTransform)                                Parent                                                      OFFSET(getStruct<T>, {0x70, 96, 0, 0})
	SMember(FTransform)                                Global                                                      OFFSET(getStruct<T>, {0xD0, 96, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathTransformAccumulateArray
/// Size: 0x0090 (0x000100 - 0x000190)
class FRigVMFunction_MathTransformAccumulateArray : public FRigVMFunction_MathTransformMutableBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
	CMember(TArray<FTransform>)                        Transforms                                                  OFFSET(get<T>, {0x100, 16, 0, 0})
	CMember(ERigVMTransformSpace)                      TargetSpace                                                 OFFSET(get<T>, {0x110, 1, 0, 0})
	SMember(FTransform)                                Root                                                        OFFSET(getStruct<T>, {0x120, 96, 0, 0})
	CMember(TArray<int32_t>)                           ParentIndices                                               OFFSET(get<T>, {0x180, 16, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathTransformInverse
/// Size: 0x0000 (0x0000D0 - 0x0000D0)
class FRigVMFunction_MathTransformInverse : public FRigVMFunction_MathTransformUnaryOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathTransformLerp
/// Size: 0x0138 (0x000008 - 0x000140)
class FRigVMFunction_MathTransformLerp : public FRigVMFunction_MathTransformBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
	SMember(FTransform)                                A                                                           OFFSET(getStruct<T>, {0x10, 96, 0, 0})
	SMember(FTransform)                                B                                                           OFFSET(getStruct<T>, {0x70, 96, 0, 0})
	DMember(float)                                     T                                                           OFFSET(get<float>, {0xD0, 4, 0, 0})
	SMember(FTransform)                                Result                                                      OFFSET(getStruct<T>, {0xE0, 96, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathTransformSelectBool
/// Size: 0x0128 (0x000008 - 0x000130)
class FRigVMFunction_MathTransformSelectBool : public FRigVMFunction_MathTransformBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	DMember(bool)                                      Condition                                                   OFFSET(get<bool>, {0x8, 1, 0, 0})
	SMember(FTransform)                                IfTrue                                                      OFFSET(getStruct<T>, {0x10, 96, 0, 0})
	SMember(FTransform)                                IfFalse                                                     OFFSET(getStruct<T>, {0x70, 96, 0, 0})
	SMember(FTransform)                                Result                                                      OFFSET(getStruct<T>, {0xD0, 96, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathTransformRotateVector
/// Size: 0x0098 (0x000008 - 0x0000A0)
class FRigVMFunction_MathTransformRotateVector : public FRigVMFunction_MathTransformBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	SMember(FTransform)                                Transform                                                   OFFSET(getStruct<T>, {0x10, 96, 0, 0})
	SMember(FVector)                                   Vector                                                      OFFSET(getStruct<T>, {0x70, 24, 0, 0})
	SMember(FVector)                                   Result                                                      OFFSET(getStruct<T>, {0x88, 24, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathTransformTransformVector
/// Size: 0x0098 (0x000008 - 0x0000A0)
class FRigVMFunction_MathTransformTransformVector : public FRigVMFunction_MathTransformBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	SMember(FTransform)                                Transform                                                   OFFSET(getStruct<T>, {0x10, 96, 0, 0})
	SMember(FVector)                                   Location                                                    OFFSET(getStruct<T>, {0x70, 24, 0, 0})
	SMember(FVector)                                   Result                                                      OFFSET(getStruct<T>, {0x88, 24, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathTransformFromSRT
/// Size: 0x0108 (0x000008 - 0x000110)
class FRigVMFunction_MathTransformFromSRT : public FRigVMFunction_MathTransformBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
	SMember(FVector)                                   Location                                                    OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	SMember(FVector)                                   Rotation                                                    OFFSET(getStruct<T>, {0x20, 24, 0, 0})
	CMember(EEulerRotationOrder)                       RotationOrder                                               OFFSET(get<T>, {0x38, 1, 0, 0})
	SMember(FVector)                                   Scale                                                       OFFSET(getStruct<T>, {0x40, 24, 0, 0})
	SMember(FTransform)                                Transform                                                   OFFSET(getStruct<T>, {0x60, 96, 0, 0})
	SMember(FEulerTransform)                           EulerTransform                                              OFFSET(getStruct<T>, {0xC0, 72, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathTransformArrayToSRT
/// Size: 0x0040 (0x000008 - 0x000048)
class FRigVMFunction_MathTransformArrayToSRT : public FRigVMFunction_MathTransformBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(TArray<FTransform>)                        Transforms                                                  OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(TArray<FVector>)                           Translations                                                OFFSET(get<T>, {0x18, 16, 0, 0})
	CMember(TArray<FQuat>)                             Rotations                                                   OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(TArray<FVector>)                           Scales                                                      OFFSET(get<T>, {0x38, 16, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathTransformClampSpatially
/// Size: 0x0158 (0x000008 - 0x000160)
class FRigVMFunction_MathTransformClampSpatially : public FRigVMFunction_MathTransformBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
	SMember(FTransform)                                Value                                                       OFFSET(getStruct<T>, {0x10, 96, 0, 0})
	CMember(TEnumAsByte<EAxis>)                        Axis                                                        OFFSET(get<T>, {0x70, 1, 0, 0})
	CMember(TEnumAsByte<ERigVMClampSpatialMode>)       Type                                                        OFFSET(get<T>, {0x71, 1, 0, 0})
	DMember(float)                                     Minimum                                                     OFFSET(get<float>, {0x74, 4, 0, 0})
	DMember(float)                                     Maximum                                                     OFFSET(get<float>, {0x78, 4, 0, 0})
	SMember(FTransform)                                Space                                                       OFFSET(getStruct<T>, {0x80, 96, 0, 0})
	DMember(bool)                                      bDrawDebug                                                  OFFSET(get<bool>, {0xE0, 1, 0, 0})
	SMember(FLinearColor)                              DebugColor                                                  OFFSET(getStruct<T>, {0xE4, 16, 0, 0})
	DMember(float)                                     DebugThickness                                              OFFSET(get<float>, {0xF4, 4, 0, 0})
	SMember(FTransform)                                Result                                                      OFFSET(getStruct<T>, {0x100, 96, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathTransformMirrorTransform
/// Size: 0x0138 (0x000008 - 0x000140)
class FRigVMFunction_MathTransformMirrorTransform : public FRigVMFunction_MathTransformBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
	SMember(FTransform)                                Value                                                       OFFSET(getStruct<T>, {0x10, 96, 0, 0})
	CMember(TEnumAsByte<EAxis>)                        MirrorAxis                                                  OFFSET(get<T>, {0x70, 1, 0, 0})
	CMember(TEnumAsByte<EAxis>)                        AxisToFlip                                                  OFFSET(get<T>, {0x71, 1, 0, 0})
	SMember(FTransform)                                CentralTransform                                            OFFSET(getStruct<T>, {0x80, 96, 0, 0})
	SMember(FTransform)                                Result                                                      OFFSET(getStruct<T>, {0xE0, 96, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorBase
/// Size: 0x0000 (0x000008 - 0x000008)
class FRigVMFunction_MathVectorBase : public FRigVMFunction_MathBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorUnaryOp
/// Size: 0x0030 (0x000008 - 0x000038)
class FRigVMFunction_MathVectorUnaryOp : public FRigVMFunction_MathVectorBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FVector)                                   Value                                                       OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	SMember(FVector)                                   Result                                                      OFFSET(getStruct<T>, {0x20, 24, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorBinaryOp
/// Size: 0x0048 (0x000008 - 0x000050)
class FRigVMFunction_MathVectorBinaryOp : public FRigVMFunction_MathVectorBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FVector)                                   A                                                           OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	SMember(FVector)                                   B                                                           OFFSET(getStruct<T>, {0x20, 24, 0, 0})
	SMember(FVector)                                   Result                                                      OFFSET(getStruct<T>, {0x38, 24, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorBinaryAggregateOp
/// Size: 0x0048 (0x000008 - 0x000050)
class FRigVMFunction_MathVectorBinaryAggregateOp : public FRigVMFunction_MathVectorBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FVector)                                   A                                                           OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	SMember(FVector)                                   B                                                           OFFSET(getStruct<T>, {0x20, 24, 0, 0})
	SMember(FVector)                                   Result                                                      OFFSET(getStruct<T>, {0x38, 24, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorMake
/// Size: 0x0028 (0x000008 - 0x000030)
class FRigVMFunction_MathVectorMake : public FRigVMFunction_MathVectorBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(float)                                     X                                                           OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     Y                                                           OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     Z                                                           OFFSET(get<float>, {0x10, 4, 0, 0})
	SMember(FVector)                                   Result                                                      OFFSET(getStruct<T>, {0x18, 24, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorFromFloat
/// Size: 0x0020 (0x000008 - 0x000028)
class FRigVMFunction_MathVectorFromFloat : public FRigVMFunction_MathVectorBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(float)                                     Value                                                       OFFSET(get<float>, {0x8, 4, 0, 0})
	SMember(FVector)                                   Result                                                      OFFSET(getStruct<T>, {0x10, 24, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorFromDouble
/// Size: 0x0020 (0x000008 - 0x000028)
class FRigVMFunction_MathVectorFromDouble : public FRigVMFunction_MathVectorBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(double)                                    Value                                                       OFFSET(get<double>, {0x8, 8, 0, 0})
	SMember(FVector)                                   Result                                                      OFFSET(getStruct<T>, {0x10, 24, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorAdd
/// Size: 0x0000 (0x000050 - 0x000050)
class FRigVMFunction_MathVectorAdd : public FRigVMFunction_MathVectorBinaryAggregateOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorSub
/// Size: 0x0000 (0x000050 - 0x000050)
class FRigVMFunction_MathVectorSub : public FRigVMFunction_MathVectorBinaryOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorMul
/// Size: 0x0000 (0x000050 - 0x000050)
class FRigVMFunction_MathVectorMul : public FRigVMFunction_MathVectorBinaryAggregateOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorScale
/// Size: 0x0038 (0x000008 - 0x000040)
class FRigVMFunction_MathVectorScale : public FRigVMFunction_MathVectorBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FVector)                                   Value                                                       OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	DMember(float)                                     Factor                                                      OFFSET(get<float>, {0x20, 4, 0, 0})
	SMember(FVector)                                   Result                                                      OFFSET(getStruct<T>, {0x28, 24, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorDiv
/// Size: 0x0000 (0x000050 - 0x000050)
class FRigVMFunction_MathVectorDiv : public FRigVMFunction_MathVectorBinaryOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorMod
/// Size: 0x0000 (0x000050 - 0x000050)
class FRigVMFunction_MathVectorMod : public FRigVMFunction_MathVectorBinaryOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorMin
/// Size: 0x0000 (0x000050 - 0x000050)
class FRigVMFunction_MathVectorMin : public FRigVMFunction_MathVectorBinaryAggregateOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorMax
/// Size: 0x0000 (0x000050 - 0x000050)
class FRigVMFunction_MathVectorMax : public FRigVMFunction_MathVectorBinaryAggregateOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorNegate
/// Size: 0x0000 (0x000038 - 0x000038)
class FRigVMFunction_MathVectorNegate : public FRigVMFunction_MathVectorUnaryOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorAbs
/// Size: 0x0000 (0x000038 - 0x000038)
class FRigVMFunction_MathVectorAbs : public FRigVMFunction_MathVectorUnaryOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorFloor
/// Size: 0x0000 (0x000038 - 0x000038)
class FRigVMFunction_MathVectorFloor : public FRigVMFunction_MathVectorUnaryOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorCeil
/// Size: 0x0000 (0x000038 - 0x000038)
class FRigVMFunction_MathVectorCeil : public FRigVMFunction_MathVectorUnaryOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorRound
/// Size: 0x0000 (0x000038 - 0x000038)
class FRigVMFunction_MathVectorRound : public FRigVMFunction_MathVectorUnaryOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorSign
/// Size: 0x0000 (0x000038 - 0x000038)
class FRigVMFunction_MathVectorSign : public FRigVMFunction_MathVectorUnaryOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorClamp
/// Size: 0x0060 (0x000008 - 0x000068)
class FRigVMFunction_MathVectorClamp : public FRigVMFunction_MathVectorBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FVector)                                   Value                                                       OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	SMember(FVector)                                   Minimum                                                     OFFSET(getStruct<T>, {0x20, 24, 0, 0})
	SMember(FVector)                                   Maximum                                                     OFFSET(getStruct<T>, {0x38, 24, 0, 0})
	SMember(FVector)                                   Result                                                      OFFSET(getStruct<T>, {0x50, 24, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorLerp
/// Size: 0x0050 (0x000008 - 0x000058)
class FRigVMFunction_MathVectorLerp : public FRigVMFunction_MathVectorBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FVector)                                   A                                                           OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	SMember(FVector)                                   B                                                           OFFSET(getStruct<T>, {0x20, 24, 0, 0})
	DMember(float)                                     T                                                           OFFSET(get<float>, {0x38, 4, 0, 0})
	SMember(FVector)                                   Result                                                      OFFSET(getStruct<T>, {0x40, 24, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorRemap
/// Size: 0x0098 (0x000008 - 0x0000A0)
class FRigVMFunction_MathVectorRemap : public FRigVMFunction_MathVectorBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	SMember(FVector)                                   Value                                                       OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	SMember(FVector)                                   SourceMinimum                                               OFFSET(getStruct<T>, {0x20, 24, 0, 0})
	SMember(FVector)                                   SourceMaximum                                               OFFSET(getStruct<T>, {0x38, 24, 0, 0})
	SMember(FVector)                                   TargetMinimum                                               OFFSET(getStruct<T>, {0x50, 24, 0, 0})
	SMember(FVector)                                   TargetMaximum                                               OFFSET(getStruct<T>, {0x68, 24, 0, 0})
	DMember(bool)                                      bClamp                                                      OFFSET(get<bool>, {0x80, 1, 0, 0})
	SMember(FVector)                                   Result                                                      OFFSET(getStruct<T>, {0x88, 24, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorEquals
/// Size: 0x0038 (0x000008 - 0x000040)
class FRigVMFunction_MathVectorEquals : public FRigVMFunction_MathVectorBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FVector)                                   A                                                           OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	SMember(FVector)                                   B                                                           OFFSET(getStruct<T>, {0x20, 24, 0, 0})
	DMember(bool)                                      Result                                                      OFFSET(get<bool>, {0x38, 1, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorNotEquals
/// Size: 0x0038 (0x000008 - 0x000040)
class FRigVMFunction_MathVectorNotEquals : public FRigVMFunction_MathVectorBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FVector)                                   A                                                           OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	SMember(FVector)                                   B                                                           OFFSET(getStruct<T>, {0x20, 24, 0, 0})
	DMember(bool)                                      Result                                                      OFFSET(get<bool>, {0x38, 1, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorIsNearlyZero
/// Size: 0x0020 (0x000008 - 0x000028)
class FRigVMFunction_MathVectorIsNearlyZero : public FRigVMFunction_MathVectorBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FVector)                                   Value                                                       OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	DMember(float)                                     Tolerance                                                   OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(bool)                                      Result                                                      OFFSET(get<bool>, {0x24, 1, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorIsNearlyEqual
/// Size: 0x0038 (0x000008 - 0x000040)
class FRigVMFunction_MathVectorIsNearlyEqual : public FRigVMFunction_MathVectorBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FVector)                                   A                                                           OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	SMember(FVector)                                   B                                                           OFFSET(getStruct<T>, {0x20, 24, 0, 0})
	DMember(float)                                     Tolerance                                                   OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(bool)                                      Result                                                      OFFSET(get<bool>, {0x3C, 1, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorSelectBool
/// Size: 0x0050 (0x000008 - 0x000058)
class FRigVMFunction_MathVectorSelectBool : public FRigVMFunction_MathVectorBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	DMember(bool)                                      Condition                                                   OFFSET(get<bool>, {0x8, 1, 0, 0})
	SMember(FVector)                                   IfTrue                                                      OFFSET(getStruct<T>, {0x10, 24, 0, 0})
	SMember(FVector)                                   IfFalse                                                     OFFSET(getStruct<T>, {0x28, 24, 0, 0})
	SMember(FVector)                                   Result                                                      OFFSET(getStruct<T>, {0x40, 24, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorDeg
/// Size: 0x0000 (0x000038 - 0x000038)
class FRigVMFunction_MathVectorDeg : public FRigVMFunction_MathVectorUnaryOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorRad
/// Size: 0x0000 (0x000038 - 0x000038)
class FRigVMFunction_MathVectorRad : public FRigVMFunction_MathVectorUnaryOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorLengthSquared
/// Size: 0x0020 (0x000008 - 0x000028)
class FRigVMFunction_MathVectorLengthSquared : public FRigVMFunction_MathVectorBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FVector)                                   Value                                                       OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	DMember(float)                                     Result                                                      OFFSET(get<float>, {0x20, 4, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorLength
/// Size: 0x0020 (0x000008 - 0x000028)
class FRigVMFunction_MathVectorLength : public FRigVMFunction_MathVectorBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FVector)                                   Value                                                       OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	DMember(float)                                     Result                                                      OFFSET(get<float>, {0x20, 4, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorDistance
/// Size: 0x0038 (0x000008 - 0x000040)
class FRigVMFunction_MathVectorDistance : public FRigVMFunction_MathVectorBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FVector)                                   A                                                           OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	SMember(FVector)                                   B                                                           OFFSET(getStruct<T>, {0x20, 24, 0, 0})
	DMember(float)                                     Result                                                      OFFSET(get<float>, {0x38, 4, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorCross
/// Size: 0x0000 (0x000050 - 0x000050)
class FRigVMFunction_MathVectorCross : public FRigVMFunction_MathVectorBinaryOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorDot
/// Size: 0x0038 (0x000008 - 0x000040)
class FRigVMFunction_MathVectorDot : public FRigVMFunction_MathVectorBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FVector)                                   A                                                           OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	SMember(FVector)                                   B                                                           OFFSET(getStruct<T>, {0x20, 24, 0, 0})
	DMember(float)                                     Result                                                      OFFSET(get<float>, {0x38, 4, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorUnit
/// Size: 0x0000 (0x000038 - 0x000038)
class FRigVMFunction_MathVectorUnit : public FRigVMFunction_MathVectorUnaryOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorSetLength
/// Size: 0x0038 (0x000008 - 0x000040)
class FRigVMFunction_MathVectorSetLength : public FRigVMFunction_MathVectorBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FVector)                                   Value                                                       OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	DMember(float)                                     Length                                                      OFFSET(get<float>, {0x20, 4, 0, 0})
	SMember(FVector)                                   Result                                                      OFFSET(getStruct<T>, {0x28, 24, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorClampLength
/// Size: 0x0038 (0x000008 - 0x000040)
class FRigVMFunction_MathVectorClampLength : public FRigVMFunction_MathVectorBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FVector)                                   Value                                                       OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	DMember(float)                                     MinimumLength                                               OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(float)                                     MaximumLength                                               OFFSET(get<float>, {0x24, 4, 0, 0})
	SMember(FVector)                                   Result                                                      OFFSET(getStruct<T>, {0x28, 24, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorMirror
/// Size: 0x0048 (0x000008 - 0x000050)
class FRigVMFunction_MathVectorMirror : public FRigVMFunction_MathVectorBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FVector)                                   Value                                                       OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	SMember(FVector)                                   Normal                                                      OFFSET(getStruct<T>, {0x20, 24, 0, 0})
	SMember(FVector)                                   Result                                                      OFFSET(getStruct<T>, {0x38, 24, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorAngle
/// Size: 0x0038 (0x000008 - 0x000040)
class FRigVMFunction_MathVectorAngle : public FRigVMFunction_MathVectorBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FVector)                                   A                                                           OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	SMember(FVector)                                   B                                                           OFFSET(getStruct<T>, {0x20, 24, 0, 0})
	DMember(float)                                     Result                                                      OFFSET(get<float>, {0x38, 4, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorParallel
/// Size: 0x0038 (0x000008 - 0x000040)
class FRigVMFunction_MathVectorParallel : public FRigVMFunction_MathVectorBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FVector)                                   A                                                           OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	SMember(FVector)                                   B                                                           OFFSET(getStruct<T>, {0x20, 24, 0, 0})
	DMember(bool)                                      Result                                                      OFFSET(get<bool>, {0x38, 1, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorOrthogonal
/// Size: 0x0038 (0x000008 - 0x000040)
class FRigVMFunction_MathVectorOrthogonal : public FRigVMFunction_MathVectorBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FVector)                                   A                                                           OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	SMember(FVector)                                   B                                                           OFFSET(getStruct<T>, {0x20, 24, 0, 0})
	DMember(bool)                                      Result                                                      OFFSET(get<bool>, {0x38, 1, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorBezierFourPoint
/// Size: 0x0098 (0x000008 - 0x0000A0)
class FRigVMFunction_MathVectorBezierFourPoint : public FRigVMFunction_MathVectorBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	SMember(FRigVMFourPointBezier)                     Bezier                                                      OFFSET(getStruct<T>, {0x8, 96, 0, 0})
	DMember(float)                                     T                                                           OFFSET(get<float>, {0x68, 4, 0, 0})
	SMember(FVector)                                   Result                                                      OFFSET(getStruct<T>, {0x70, 24, 0, 0})
	SMember(FVector)                                   Tangent                                                     OFFSET(getStruct<T>, {0x88, 24, 0, 0})
};

/// Struct /Script/RigVM.RigVMFourPointBezier
/// Size: 0x0060 (0x000000 - 0x000060)
class FRigVMFourPointBezier : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FVector)                                   A                                                           OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FVector)                                   B                                                           OFFSET(getStruct<T>, {0x18, 24, 0, 0})
	SMember(FVector)                                   C                                                           OFFSET(getStruct<T>, {0x30, 24, 0, 0})
	SMember(FVector)                                   D                                                           OFFSET(getStruct<T>, {0x48, 24, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorMakeBezierFourPoint
/// Size: 0x0060 (0x000008 - 0x000068)
class FRigVMFunction_MathVectorMakeBezierFourPoint : public FRigVMFunction_MathVectorBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FRigVMFourPointBezier)                     Bezier                                                      OFFSET(getStruct<T>, {0x8, 96, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorClampSpatially
/// Size: 0x00B8 (0x000008 - 0x0000C0)
class FRigVMFunction_MathVectorClampSpatially : public FRigVMFunction_MathVectorBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	SMember(FVector)                                   Value                                                       OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	CMember(TEnumAsByte<EAxis>)                        Axis                                                        OFFSET(get<T>, {0x20, 1, 0, 0})
	CMember(TEnumAsByte<ERigVMClampSpatialMode>)       Type                                                        OFFSET(get<T>, {0x21, 1, 0, 0})
	DMember(float)                                     Minimum                                                     OFFSET(get<float>, {0x24, 4, 0, 0})
	DMember(float)                                     Maximum                                                     OFFSET(get<float>, {0x28, 4, 0, 0})
	SMember(FTransform)                                Space                                                       OFFSET(getStruct<T>, {0x30, 96, 0, 0})
	DMember(bool)                                      bDrawDebug                                                  OFFSET(get<bool>, {0x90, 1, 0, 0})
	SMember(FLinearColor)                              DebugColor                                                  OFFSET(getStruct<T>, {0x94, 16, 0, 0})
	DMember(float)                                     DebugThickness                                              OFFSET(get<float>, {0xA4, 4, 0, 0})
	SMember(FVector)                                   Result                                                      OFFSET(getStruct<T>, {0xA8, 24, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathIntersectPlane
/// Size: 0x0080 (0x000008 - 0x000088)
class FRigVMFunction_MathIntersectPlane : public FRigVMFunction_MathVectorBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FVector)                                   Start                                                       OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	SMember(FVector)                                   Direction                                                   OFFSET(getStruct<T>, {0x20, 24, 0, 0})
	SMember(FVector)                                   PlanePoint                                                  OFFSET(getStruct<T>, {0x38, 24, 0, 0})
	SMember(FVector)                                   PlaneNormal                                                 OFFSET(getStruct<T>, {0x50, 24, 0, 0})
	SMember(FVector)                                   Result                                                      OFFSET(getStruct<T>, {0x68, 24, 0, 0})
	DMember(float)                                     Distance                                                    OFFSET(get<float>, {0x80, 4, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathDistanceToPlane
/// Size: 0x0068 (0x000008 - 0x000070)
class FRigVMFunction_MathDistanceToPlane : public FRigVMFunction_MathVectorBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FVector)                                   Point                                                       OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	SMember(FVector)                                   PlanePoint                                                  OFFSET(getStruct<T>, {0x20, 24, 0, 0})
	SMember(FVector)                                   PlaneNormal                                                 OFFSET(getStruct<T>, {0x38, 24, 0, 0})
	SMember(FVector)                                   ClosestPointOnPlane                                         OFFSET(getStruct<T>, {0x50, 24, 0, 0})
	DMember(float)                                     SignedDistance                                              OFFSET(get<float>, {0x68, 4, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorMakeRelative
/// Size: 0x0048 (0x000008 - 0x000050)
class FRigVMFunction_MathVectorMakeRelative : public FRigVMFunction_MathVectorBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FVector)                                   Global                                                      OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	SMember(FVector)                                   Parent                                                      OFFSET(getStruct<T>, {0x20, 24, 0, 0})
	SMember(FVector)                                   Local                                                       OFFSET(getStruct<T>, {0x38, 24, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorMakeAbsolute
/// Size: 0x0048 (0x000008 - 0x000050)
class FRigVMFunction_MathVectorMakeAbsolute : public FRigVMFunction_MathVectorBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FVector)                                   Local                                                       OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	SMember(FVector)                                   Parent                                                      OFFSET(getStruct<T>, {0x20, 24, 0, 0})
	SMember(FVector)                                   Global                                                      OFFSET(getStruct<T>, {0x38, 24, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorMirrorTransform
/// Size: 0x00A8 (0x000008 - 0x0000B0)
class FRigVMFunction_MathVectorMirrorTransform : public FRigVMFunction_MathVectorBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FVector)                                   Value                                                       OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	CMember(TEnumAsByte<EAxis>)                        MirrorAxis                                                  OFFSET(get<T>, {0x20, 1, 0, 0})
	CMember(TEnumAsByte<EAxis>)                        AxisToFlip                                                  OFFSET(get<T>, {0x21, 1, 0, 0})
	SMember(FTransform)                                CentralTransform                                            OFFSET(getStruct<T>, {0x30, 96, 0, 0})
	SMember(FVector)                                   Result                                                      OFFSET(getStruct<T>, {0x90, 24, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorArraySum
/// Size: 0x0028 (0x000008 - 0x000030)
class FRigVMFunction_MathVectorArraySum : public FRigVMFunction_MathVectorBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(TArray<FVector>)                           Array                                                       OFFSET(get<T>, {0x8, 16, 0, 0})
	SMember(FVector)                                   Sum                                                         OFFSET(getStruct<T>, {0x18, 24, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorArrayAverage
/// Size: 0x0028 (0x000008 - 0x000030)
class FRigVMFunction_MathVectorArrayAverage : public FRigVMFunction_MathVectorBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(TArray<FVector>)                           Array                                                       OFFSET(get<T>, {0x8, 16, 0, 0})
	SMember(FVector)                                   Average                                                     OFFSET(getStruct<T>, {0x18, 24, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_NoiseFloat
/// Size: 0x0020 (0x000008 - 0x000028)
class FRigVMFunction_NoiseFloat : public FRigVMFunction_MathBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(float)                                     Value                                                       OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     Speed                                                       OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     Frequency                                                   OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     Minimum                                                     OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     Maximum                                                     OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     Result                                                      OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(float)                                     Time                                                        OFFSET(get<float>, {0x20, 4, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_NoiseDouble
/// Size: 0x0038 (0x000008 - 0x000040)
class FRigVMFunction_NoiseDouble : public FRigVMFunction_MathBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(double)                                    Value                                                       OFFSET(get<double>, {0x8, 8, 0, 0})
	DMember(double)                                    Speed                                                       OFFSET(get<double>, {0x10, 8, 0, 0})
	DMember(double)                                    Frequency                                                   OFFSET(get<double>, {0x18, 8, 0, 0})
	DMember(double)                                    Minimum                                                     OFFSET(get<double>, {0x20, 8, 0, 0})
	DMember(double)                                    Maximum                                                     OFFSET(get<double>, {0x28, 8, 0, 0})
	DMember(double)                                    Result                                                      OFFSET(get<double>, {0x30, 8, 0, 0})
	DMember(double)                                    Time                                                        OFFSET(get<double>, {0x38, 8, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_NoiseVector
/// Size: 0x0080 (0x000008 - 0x000088)
class FRigVMFunction_NoiseVector : public FRigVMFunction_MathBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FVector)                                   Position                                                    OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	SMember(FVector)                                   Speed                                                       OFFSET(getStruct<T>, {0x20, 24, 0, 0})
	SMember(FVector)                                   Frequency                                                   OFFSET(getStruct<T>, {0x38, 24, 0, 0})
	DMember(float)                                     Minimum                                                     OFFSET(get<float>, {0x50, 4, 0, 0})
	DMember(float)                                     Maximum                                                     OFFSET(get<float>, {0x54, 4, 0, 0})
	SMember(FVector)                                   Result                                                      OFFSET(getStruct<T>, {0x58, 24, 0, 0})
	SMember(FVector)                                   Time                                                        OFFSET(getStruct<T>, {0x70, 24, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_NoiseVector2
/// Size: 0x0088 (0x000008 - 0x000090)
class FRigVMFunction_NoiseVector2 : public FRigVMFunction_MathBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FVector)                                   Value                                                       OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	SMember(FVector)                                   Speed                                                       OFFSET(getStruct<T>, {0x20, 24, 0, 0})
	SMember(FVector)                                   Frequency                                                   OFFSET(getStruct<T>, {0x38, 24, 0, 0})
	DMember(double)                                    Minimum                                                     OFFSET(get<double>, {0x50, 8, 0, 0})
	DMember(double)                                    Maximum                                                     OFFSET(get<double>, {0x58, 8, 0, 0})
	SMember(FVector)                                   Result                                                      OFFSET(getStruct<T>, {0x60, 24, 0, 0})
	SMember(FVector)                                   Time                                                        OFFSET(getStruct<T>, {0x78, 24, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_RandomFloat
/// Size: 0x0028 (0x000008 - 0x000030)
class FRigVMFunction_RandomFloat : public FRigVMFunction_MathBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(int32_t)                                   Seed                                                        OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(float)                                     Minimum                                                     OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     Maximum                                                     OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     duration                                                    OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     Result                                                      OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     LastResult                                                  OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(int32_t)                                   LastSeed                                                    OFFSET(get<int32_t>, {0x20, 4, 0, 0})
	DMember(int32_t)                                   BaseSeed                                                    OFFSET(get<int32_t>, {0x24, 4, 0, 0})
	DMember(float)                                     TimeLeft                                                    OFFSET(get<float>, {0x28, 4, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_RandomVector
/// Size: 0x0050 (0x000008 - 0x000058)
class FRigVMFunction_RandomVector : public FRigVMFunction_MathBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	DMember(int32_t)                                   Seed                                                        OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(float)                                     Minimum                                                     OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     Maximum                                                     OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     duration                                                    OFFSET(get<float>, {0x14, 4, 0, 0})
	SMember(FVector)                                   Result                                                      OFFSET(getStruct<T>, {0x18, 24, 0, 0})
	SMember(FVector)                                   LastResult                                                  OFFSET(getStruct<T>, {0x30, 24, 0, 0})
	DMember(int32_t)                                   LastSeed                                                    OFFSET(get<int32_t>, {0x48, 4, 0, 0})
	DMember(int32_t)                                   BaseSeed                                                    OFFSET(get<int32_t>, {0x4C, 4, 0, 0})
	DMember(float)                                     TimeLeft                                                    OFFSET(get<float>, {0x50, 4, 0, 0})
};

/// Struct /Script/RigVM.RigVMMirrorSettings
/// Size: 0x0028 (0x000000 - 0x000028)
class FRigVMMirrorSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(TEnumAsByte<EAxis>)                        MirrorAxis                                                  OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(TEnumAsByte<EAxis>)                        AxisToFlip                                                  OFFSET(get<T>, {0x1, 1, 0, 0})
	SMember(FString)                                   SearchString                                                OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	SMember(FString)                                   ReplaceString                                               OFFSET(getStruct<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/RigVM.RigVMSimPoint
/// Size: 0x0040 (0x000000 - 0x000040)
class FRigVMSimPoint : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(float)                                     Mass                                                        OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     Size                                                        OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     LinearDamping                                               OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     InheritMotion                                               OFFSET(get<float>, {0xC, 4, 0, 0})
	SMember(FVector)                                   Position                                                    OFFSET(getStruct<T>, {0x10, 24, 0, 0})
	SMember(FVector)                                   LinearVelocity                                              OFFSET(getStruct<T>, {0x28, 24, 0, 0})
};

/// Struct /Script/RigVM.RigVMDispatch_CoreBase
/// Size: 0x0000 (0x000070 - 0x000070)
class FRigVMDispatch_CoreBase : public FRigVMDispatchFactory
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Struct /Script/RigVM.RigVMDispatch_ArrayBase
/// Size: 0x0000 (0x000070 - 0x000070)
class FRigVMDispatch_ArrayBase : public FRigVMDispatch_CoreBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Struct /Script/RigVM.RigVMDispatch_ArrayBaseMutable
/// Size: 0x0000 (0x000070 - 0x000070)
class FRigVMDispatch_ArrayBaseMutable : public FRigVMDispatch_ArrayBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Struct /Script/RigVM.RigVMDispatch_ArrayMake
/// Size: 0x0000 (0x000070 - 0x000070)
class FRigVMDispatch_ArrayMake : public FRigVMDispatch_ArrayBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Struct /Script/RigVM.RigVMDispatch_ArrayReset
/// Size: 0x0000 (0x000070 - 0x000070)
class FRigVMDispatch_ArrayReset : public FRigVMDispatch_ArrayBaseMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Struct /Script/RigVM.RigVMDispatch_ArrayGetNum
/// Size: 0x0000 (0x000070 - 0x000070)
class FRigVMDispatch_ArrayGetNum : public FRigVMDispatch_ArrayBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Struct /Script/RigVM.RigVMDispatch_ArraySetNum
/// Size: 0x0000 (0x000070 - 0x000070)
class FRigVMDispatch_ArraySetNum : public FRigVMDispatch_ArrayBaseMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Struct /Script/RigVM.RigVMDispatch_ArrayGetAtIndex
/// Size: 0x0000 (0x000070 - 0x000070)
class FRigVMDispatch_ArrayGetAtIndex : public FRigVMDispatch_ArrayBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Struct /Script/RigVM.RigVMDispatch_ArraySetAtIndex
/// Size: 0x0000 (0x000070 - 0x000070)
class FRigVMDispatch_ArraySetAtIndex : public FRigVMDispatch_ArrayBaseMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Struct /Script/RigVM.RigVMDispatch_ArrayAdd
/// Size: 0x0000 (0x000070 - 0x000070)
class FRigVMDispatch_ArrayAdd : public FRigVMDispatch_ArraySetAtIndex
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Struct /Script/RigVM.RigVMDispatch_ArrayInsert
/// Size: 0x0000 (0x000070 - 0x000070)
class FRigVMDispatch_ArrayInsert : public FRigVMDispatch_ArraySetAtIndex
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Struct /Script/RigVM.RigVMDispatch_ArrayRemove
/// Size: 0x0000 (0x000070 - 0x000070)
class FRigVMDispatch_ArrayRemove : public FRigVMDispatch_ArrayBaseMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Struct /Script/RigVM.RigVMDispatch_ArrayReverse
/// Size: 0x0000 (0x000070 - 0x000070)
class FRigVMDispatch_ArrayReverse : public FRigVMDispatch_ArrayReset
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Struct /Script/RigVM.RigVMDispatch_ArrayFind
/// Size: 0x0000 (0x000070 - 0x000070)
class FRigVMDispatch_ArrayFind : public FRigVMDispatch_ArrayBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Struct /Script/RigVM.RigVMDispatch_ArrayAppend
/// Size: 0x0000 (0x000070 - 0x000070)
class FRigVMDispatch_ArrayAppend : public FRigVMDispatch_ArrayBaseMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Struct /Script/RigVM.RigVMDispatch_ArrayClone
/// Size: 0x0000 (0x000070 - 0x000070)
class FRigVMDispatch_ArrayClone : public FRigVMDispatch_ArrayBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Struct /Script/RigVM.RigVMDispatch_ArrayUnion
/// Size: 0x0000 (0x000070 - 0x000070)
class FRigVMDispatch_ArrayUnion : public FRigVMDispatch_ArrayAppend
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Struct /Script/RigVM.RigVMDispatch_ArrayDifference
/// Size: 0x0000 (0x000070 - 0x000070)
class FRigVMDispatch_ArrayDifference : public FRigVMDispatch_ArrayBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Struct /Script/RigVM.RigVMDispatch_ArrayIntersection
/// Size: 0x0000 (0x000070 - 0x000070)
class FRigVMDispatch_ArrayIntersection : public FRigVMDispatch_ArrayDifference
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Struct /Script/RigVM.RigVMDispatch_ArrayIterator
/// Size: 0x0000 (0x000070 - 0x000070)
class FRigVMDispatch_ArrayIterator : public FRigVMDispatch_ArrayBaseMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Struct /Script/RigVM.RigVMDispatch_Constant
/// Size: 0x0000 (0x000070 - 0x000070)
class FRigVMDispatch_Constant : public FRigVMDispatch_CoreBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Struct /Script/RigVM.RigVMDispatch_CoreEquals
/// Size: 0x0000 (0x000070 - 0x000070)
class FRigVMDispatch_CoreEquals : public FRigVMDispatch_CoreBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Struct /Script/RigVM.RigVMDispatch_CoreNotEquals
/// Size: 0x0000 (0x000070 - 0x000070)
class FRigVMDispatch_CoreNotEquals : public FRigVMDispatch_CoreEquals
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Struct /Script/RigVM.RigVMDispatch_If
/// Size: 0x0000 (0x000070 - 0x000070)
class FRigVMDispatch_If : public FRigVMDispatch_CoreBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Struct /Script/RigVM.RigVMDispatch_MakeStruct
/// Size: 0x0000 (0x000070 - 0x000070)
class FRigVMDispatch_MakeStruct : public FRigVMDispatch_CoreBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Struct /Script/RigVM.RigVMDispatch_BreakStruct
/// Size: 0x0000 (0x000070 - 0x000070)
class FRigVMDispatch_BreakStruct : public FRigVMDispatch_MakeStruct
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Struct /Script/RigVM.RigVMDispatch_Print
/// Size: 0x0000 (0x000070 - 0x000070)
class FRigVMDispatch_Print : public FRigVMDispatchFactory
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Struct /Script/RigVM.RigVMDispatch_SelectInt32
/// Size: 0x0000 (0x000070 - 0x000070)
class FRigVMDispatch_SelectInt32 : public FRigVMDispatch_CoreBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Struct /Script/RigVM.RigVMDispatch_SwitchInt32
/// Size: 0x0000 (0x000070 - 0x000070)
class FRigVMDispatch_SwitchInt32 : public FRigVMDispatch_CoreBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Struct /Script/RigVM.RigVMFunction_ControlFlowBase
/// Size: 0x0000 (0x000008 - 0x000008)
class FRigVMFunction_ControlFlowBase : public FRigVMStruct
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/RigVM.RigVMFunction_ControlFlowBranch
/// Size: 0x03E8 (0x000008 - 0x0003F0)
class FRigVMFunction_ControlFlowBranch : public FRigVMFunction_ControlFlowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1008;

public:
	SMember(FRigVMExecuteContext)                      ExecuteContext                                              OFFSET(getStruct<T>, {0x10, 240, 0, 0})
	DMember(bool)                                      Condition                                                   OFFSET(get<bool>, {0x100, 1, 0, 0})
	SMember(FRigVMExecuteContext)                      TRUE_                                                       OFFSET(getStruct<T>, {0x110, 240, 0, 0})
	SMember(FRigVMExecuteContext)                      FALSE_                                                      OFFSET(getStruct<T>, {0x200, 240, 0, 0})
	SMember(FRigVMExecuteContext)                      Completed                                                   OFFSET(getStruct<T>, {0x2F0, 240, 0, 0})
	SMember(FName)                                     BlockToRun                                                  OFFSET(getStruct<T>, {0x3E0, 4, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_NameBase
/// Size: 0x0000 (0x000008 - 0x000008)
class FRigVMFunction_NameBase : public FRigVMStruct
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/RigVM.RigVMFunction_NameConcat
/// Size: 0x0010 (0x000008 - 0x000018)
class FRigVMFunction_NameConcat : public FRigVMFunction_NameBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FName)                                     A                                                           OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	SMember(FName)                                     B                                                           OFFSET(getStruct<T>, {0xC, 4, 0, 0})
	SMember(FName)                                     Result                                                      OFFSET(getStruct<T>, {0x10, 4, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_NameTruncate
/// Size: 0x0018 (0x000008 - 0x000020)
class FRigVMFunction_NameTruncate : public FRigVMFunction_NameBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   Count                                                       OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	DMember(bool)                                      FromEnd                                                     OFFSET(get<bool>, {0x10, 1, 0, 0})
	SMember(FName)                                     Remainder                                                   OFFSET(getStruct<T>, {0x14, 4, 0, 0})
	SMember(FName)                                     Chopped                                                     OFFSET(getStruct<T>, {0x18, 4, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_NameReplace
/// Size: 0x0010 (0x000008 - 0x000018)
class FRigVMFunction_NameReplace : public FRigVMFunction_NameBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	SMember(FName)                                     Old                                                         OFFSET(getStruct<T>, {0xC, 4, 0, 0})
	SMember(FName)                                     New                                                         OFFSET(getStruct<T>, {0x10, 4, 0, 0})
	SMember(FName)                                     Result                                                      OFFSET(getStruct<T>, {0x14, 4, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_EndsWith
/// Size: 0x0010 (0x000008 - 0x000018)
class FRigVMFunction_EndsWith : public FRigVMFunction_NameBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	SMember(FName)                                     Ending                                                      OFFSET(getStruct<T>, {0xC, 4, 0, 0})
	DMember(bool)                                      Result                                                      OFFSET(get<bool>, {0x10, 1, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_StartsWith
/// Size: 0x0010 (0x000008 - 0x000018)
class FRigVMFunction_StartsWith : public FRigVMFunction_NameBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	SMember(FName)                                     Start                                                       OFFSET(getStruct<T>, {0xC, 4, 0, 0})
	DMember(bool)                                      Result                                                      OFFSET(get<bool>, {0x10, 1, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_Contains
/// Size: 0x0010 (0x000008 - 0x000018)
class FRigVMFunction_Contains : public FRigVMFunction_NameBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	SMember(FName)                                     Search                                                      OFFSET(getStruct<T>, {0xC, 4, 0, 0})
	DMember(bool)                                      Result                                                      OFFSET(get<bool>, {0x10, 1, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_StringBase
/// Size: 0x0000 (0x000008 - 0x000008)
class FRigVMFunction_StringBase : public FRigVMStruct
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/RigVM.RigVMFunction_StringConcat
/// Size: 0x0030 (0x000008 - 0x000038)
class FRigVMFunction_StringConcat : public FRigVMFunction_StringBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FString)                                   A                                                           OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	SMember(FString)                                   B                                                           OFFSET(getStruct<T>, {0x18, 16, 0, 0})
	SMember(FString)                                   Result                                                      OFFSET(getStruct<T>, {0x28, 16, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_StringTruncate
/// Size: 0x0038 (0x000008 - 0x000040)
class FRigVMFunction_StringTruncate : public FRigVMFunction_StringBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FString)                                   Name                                                        OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	DMember(int32_t)                                   Count                                                       OFFSET(get<int32_t>, {0x18, 4, 0, 0})
	DMember(bool)                                      FromEnd                                                     OFFSET(get<bool>, {0x1C, 1, 0, 0})
	SMember(FString)                                   Remainder                                                   OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	SMember(FString)                                   Chopped                                                     OFFSET(getStruct<T>, {0x30, 16, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_StringReplace
/// Size: 0x0040 (0x000008 - 0x000048)
class FRigVMFunction_StringReplace : public FRigVMFunction_StringBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FString)                                   Name                                                        OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	SMember(FString)                                   Old                                                         OFFSET(getStruct<T>, {0x18, 16, 0, 0})
	SMember(FString)                                   New                                                         OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	SMember(FString)                                   Result                                                      OFFSET(getStruct<T>, {0x38, 16, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_StringEndsWith
/// Size: 0x0028 (0x000008 - 0x000030)
class FRigVMFunction_StringEndsWith : public FRigVMFunction_StringBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FString)                                   Name                                                        OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	SMember(FString)                                   Ending                                                      OFFSET(getStruct<T>, {0x18, 16, 0, 0})
	DMember(bool)                                      Result                                                      OFFSET(get<bool>, {0x28, 1, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_StringStartsWith
/// Size: 0x0028 (0x000008 - 0x000030)
class FRigVMFunction_StringStartsWith : public FRigVMFunction_StringBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FString)                                   Name                                                        OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	SMember(FString)                                   Start                                                       OFFSET(getStruct<T>, {0x18, 16, 0, 0})
	DMember(bool)                                      Result                                                      OFFSET(get<bool>, {0x28, 1, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_StringContains
/// Size: 0x0028 (0x000008 - 0x000030)
class FRigVMFunction_StringContains : public FRigVMFunction_StringBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FString)                                   Name                                                        OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	SMember(FString)                                   Search                                                      OFFSET(getStruct<T>, {0x18, 16, 0, 0})
	DMember(bool)                                      Result                                                      OFFSET(get<bool>, {0x28, 1, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_StringLength
/// Size: 0x0018 (0x000008 - 0x000020)
class FRigVMFunction_StringLength : public FRigVMFunction_StringBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FString)                                   Value                                                       OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	DMember(int32_t)                                   Length                                                      OFFSET(get<int32_t>, {0x18, 4, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_StringTrimWhitespace
/// Size: 0x0020 (0x000008 - 0x000028)
class FRigVMFunction_StringTrimWhitespace : public FRigVMFunction_StringBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FString)                                   Value                                                       OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	SMember(FString)                                   Result                                                      OFFSET(getStruct<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_StringToUppercase
/// Size: 0x0020 (0x000008 - 0x000028)
class FRigVMFunction_StringToUppercase : public FRigVMFunction_StringBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FString)                                   Value                                                       OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	SMember(FString)                                   Result                                                      OFFSET(getStruct<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_StringToLowercase
/// Size: 0x0020 (0x000008 - 0x000028)
class FRigVMFunction_StringToLowercase : public FRigVMFunction_StringBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FString)                                   Value                                                       OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	SMember(FString)                                   Result                                                      OFFSET(getStruct<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_StringReverse
/// Size: 0x0020 (0x000008 - 0x000028)
class FRigVMFunction_StringReverse : public FRigVMFunction_StringBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FString)                                   Value                                                       OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	SMember(FString)                                   Reverse                                                     OFFSET(getStruct<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_StringLeft
/// Size: 0x0028 (0x000008 - 0x000030)
class FRigVMFunction_StringLeft : public FRigVMFunction_StringBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FString)                                   Value                                                       OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	DMember(int32_t)                                   Count                                                       OFFSET(get<int32_t>, {0x18, 4, 0, 0})
	SMember(FString)                                   Result                                                      OFFSET(getStruct<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_StringRight
/// Size: 0x0028 (0x000008 - 0x000030)
class FRigVMFunction_StringRight : public FRigVMFunction_StringBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FString)                                   Value                                                       OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	DMember(int32_t)                                   Count                                                       OFFSET(get<int32_t>, {0x18, 4, 0, 0})
	SMember(FString)                                   Result                                                      OFFSET(getStruct<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_StringMiddle
/// Size: 0x0028 (0x000008 - 0x000030)
class FRigVMFunction_StringMiddle : public FRigVMFunction_StringBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FString)                                   Value                                                       OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	DMember(int32_t)                                   Start                                                       OFFSET(get<int32_t>, {0x18, 4, 0, 0})
	DMember(int32_t)                                   Count                                                       OFFSET(get<int32_t>, {0x1C, 4, 0, 0})
	SMember(FString)                                   Result                                                      OFFSET(getStruct<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_StringFind
/// Size: 0x0028 (0x000008 - 0x000030)
class FRigVMFunction_StringFind : public FRigVMFunction_StringBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FString)                                   Value                                                       OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	SMember(FString)                                   Search                                                      OFFSET(getStruct<T>, {0x18, 16, 0, 0})
	DMember(bool)                                      Found                                                       OFFSET(get<bool>, {0x28, 1, 0, 0})
	DMember(int32_t)                                   Index                                                       OFFSET(get<int32_t>, {0x2C, 4, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_StringSplit
/// Size: 0x0030 (0x000008 - 0x000038)
class FRigVMFunction_StringSplit : public FRigVMFunction_StringBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FString)                                   Value                                                       OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	SMember(FString)                                   Separator                                                   OFFSET(getStruct<T>, {0x18, 16, 0, 0})
	CMember(TArray<FString>)                           Result                                                      OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_StringJoin
/// Size: 0x0030 (0x000008 - 0x000038)
class FRigVMFunction_StringJoin : public FRigVMFunction_StringBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<FString>)                           Values                                                      OFFSET(get<T>, {0x8, 16, 0, 0})
	SMember(FString)                                   Separator                                                   OFFSET(getStruct<T>, {0x18, 16, 0, 0})
	SMember(FString)                                   Result                                                      OFFSET(getStruct<T>, {0x28, 16, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_StringPadInteger
/// Size: 0x0018 (0x000008 - 0x000020)
class FRigVMFunction_StringPadInteger : public FRigVMFunction_StringBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(int32_t)                                   Value                                                       OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   Digits                                                      OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	SMember(FString)                                   Result                                                      OFFSET(getStruct<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/RigVM.RigDispatch_ToString
/// Size: 0x0000 (0x000070 - 0x000070)
class FRigDispatch_ToString : public FRigVMDispatchFactory
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Struct /Script/RigVM.RigDispatch_FromString
/// Size: 0x0000 (0x000070 - 0x000070)
class FRigDispatch_FromString : public FRigVMDispatchFactory
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Struct /Script/RigVM.RigVMFunction_AccumulateBase
/// Size: 0x0000 (0x000008 - 0x000008)
class FRigVMFunction_AccumulateBase : public FRigVMFunction_SimBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/RigVM.RigVMFunction_AccumulateFloatAdd
/// Size: 0x0018 (0x000008 - 0x000020)
class FRigVMFunction_AccumulateFloatAdd : public FRigVMFunction_AccumulateBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(float)                                     Increment                                                   OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     InitialValue                                                OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(bool)                                      bIntegrateDeltaTime                                         OFFSET(get<bool>, {0x10, 1, 0, 0})
	DMember(float)                                     Result                                                      OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     AccumulatedValue                                            OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(bool)                                      bIsInitialized                                              OFFSET(get<bool>, {0x1C, 1, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_AccumulateVectorAdd
/// Size: 0x0070 (0x000008 - 0x000078)
class FRigVMFunction_AccumulateVectorAdd : public FRigVMFunction_AccumulateBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	SMember(FVector)                                   Increment                                                   OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	SMember(FVector)                                   InitialValue                                                OFFSET(getStruct<T>, {0x20, 24, 0, 0})
	DMember(bool)                                      bIntegrateDeltaTime                                         OFFSET(get<bool>, {0x38, 1, 0, 0})
	SMember(FVector)                                   Result                                                      OFFSET(getStruct<T>, {0x40, 24, 0, 0})
	SMember(FVector)                                   AccumulatedValue                                            OFFSET(getStruct<T>, {0x58, 24, 0, 0})
	DMember(bool)                                      bIsInitialized                                              OFFSET(get<bool>, {0x70, 1, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_AccumulateFloatMul
/// Size: 0x0018 (0x000008 - 0x000020)
class FRigVMFunction_AccumulateFloatMul : public FRigVMFunction_AccumulateBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(float)                                     Multiplier                                                  OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     InitialValue                                                OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(bool)                                      bIntegrateDeltaTime                                         OFFSET(get<bool>, {0x10, 1, 0, 0})
	DMember(float)                                     Result                                                      OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     AccumulatedValue                                            OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(bool)                                      bIsInitialized                                              OFFSET(get<bool>, {0x1C, 1, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_AccumulateVectorMul
/// Size: 0x0070 (0x000008 - 0x000078)
class FRigVMFunction_AccumulateVectorMul : public FRigVMFunction_AccumulateBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	SMember(FVector)                                   Multiplier                                                  OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	SMember(FVector)                                   InitialValue                                                OFFSET(getStruct<T>, {0x20, 24, 0, 0})
	DMember(bool)                                      bIntegrateDeltaTime                                         OFFSET(get<bool>, {0x38, 1, 0, 0})
	SMember(FVector)                                   Result                                                      OFFSET(getStruct<T>, {0x40, 24, 0, 0})
	SMember(FVector)                                   AccumulatedValue                                            OFFSET(getStruct<T>, {0x58, 24, 0, 0})
	DMember(bool)                                      bIsInitialized                                              OFFSET(get<bool>, {0x70, 1, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_AccumulateQuatMul
/// Size: 0x00A8 (0x000008 - 0x0000B0)
class FRigVMFunction_AccumulateQuatMul : public FRigVMFunction_AccumulateBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FQuat)                                     Multiplier                                                  OFFSET(getStruct<T>, {0x10, 32, 0, 0})
	SMember(FQuat)                                     InitialValue                                                OFFSET(getStruct<T>, {0x30, 32, 0, 0})
	DMember(bool)                                      bFlipOrder                                                  OFFSET(get<bool>, {0x50, 1, 0, 0})
	DMember(bool)                                      bIntegrateDeltaTime                                         OFFSET(get<bool>, {0x51, 1, 0, 0})
	SMember(FQuat)                                     Result                                                      OFFSET(getStruct<T>, {0x60, 32, 0, 0})
	SMember(FQuat)                                     AccumulatedValue                                            OFFSET(getStruct<T>, {0x80, 32, 0, 0})
	DMember(bool)                                      bIsInitialized                                              OFFSET(get<bool>, {0xA0, 1, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_AccumulateTransformMul
/// Size: 0x01A8 (0x000008 - 0x0001B0)
class FRigVMFunction_AccumulateTransformMul : public FRigVMFunction_AccumulateBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 432;

public:
	SMember(FTransform)                                Multiplier                                                  OFFSET(getStruct<T>, {0x10, 96, 0, 0})
	SMember(FTransform)                                InitialValue                                                OFFSET(getStruct<T>, {0x70, 96, 0, 0})
	DMember(bool)                                      bFlipOrder                                                  OFFSET(get<bool>, {0xD0, 1, 0, 0})
	DMember(bool)                                      bIntegrateDeltaTime                                         OFFSET(get<bool>, {0xD1, 1, 0, 0})
	SMember(FTransform)                                Result                                                      OFFSET(getStruct<T>, {0xE0, 96, 0, 0})
	SMember(FTransform)                                AccumulatedValue                                            OFFSET(getStruct<T>, {0x140, 96, 0, 0})
	DMember(bool)                                      bIsInitialized                                              OFFSET(get<bool>, {0x1A0, 1, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_AccumulateFloatLerp
/// Size: 0x0020 (0x000008 - 0x000028)
class FRigVMFunction_AccumulateFloatLerp : public FRigVMFunction_AccumulateBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(float)                                     TargetValue                                                 OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     InitialValue                                                OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     Blend                                                       OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(bool)                                      bIntegrateDeltaTime                                         OFFSET(get<bool>, {0x14, 1, 0, 0})
	DMember(float)                                     Result                                                      OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     AccumulatedValue                                            OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(bool)                                      bIsInitialized                                              OFFSET(get<bool>, {0x20, 1, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_AccumulateVectorLerp
/// Size: 0x0070 (0x000008 - 0x000078)
class FRigVMFunction_AccumulateVectorLerp : public FRigVMFunction_AccumulateBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	SMember(FVector)                                   TargetValue                                                 OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	SMember(FVector)                                   InitialValue                                                OFFSET(getStruct<T>, {0x20, 24, 0, 0})
	DMember(float)                                     Blend                                                       OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(bool)                                      bIntegrateDeltaTime                                         OFFSET(get<bool>, {0x3C, 1, 0, 0})
	SMember(FVector)                                   Result                                                      OFFSET(getStruct<T>, {0x40, 24, 0, 0})
	SMember(FVector)                                   AccumulatedValue                                            OFFSET(getStruct<T>, {0x58, 24, 0, 0})
	DMember(bool)                                      bIsInitialized                                              OFFSET(get<bool>, {0x70, 1, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_AccumulateQuatLerp
/// Size: 0x00A8 (0x000008 - 0x0000B0)
class FRigVMFunction_AccumulateQuatLerp : public FRigVMFunction_AccumulateBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FQuat)                                     TargetValue                                                 OFFSET(getStruct<T>, {0x10, 32, 0, 0})
	SMember(FQuat)                                     InitialValue                                                OFFSET(getStruct<T>, {0x30, 32, 0, 0})
	DMember(float)                                     Blend                                                       OFFSET(get<float>, {0x50, 4, 0, 0})
	DMember(bool)                                      bIntegrateDeltaTime                                         OFFSET(get<bool>, {0x54, 1, 0, 0})
	SMember(FQuat)                                     Result                                                      OFFSET(getStruct<T>, {0x60, 32, 0, 0})
	SMember(FQuat)                                     AccumulatedValue                                            OFFSET(getStruct<T>, {0x80, 32, 0, 0})
	DMember(bool)                                      bIsInitialized                                              OFFSET(get<bool>, {0xA0, 1, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_AccumulateTransformLerp
/// Size: 0x01A8 (0x000008 - 0x0001B0)
class FRigVMFunction_AccumulateTransformLerp : public FRigVMFunction_AccumulateBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 432;

public:
	SMember(FTransform)                                TargetValue                                                 OFFSET(getStruct<T>, {0x10, 96, 0, 0})
	SMember(FTransform)                                InitialValue                                                OFFSET(getStruct<T>, {0x70, 96, 0, 0})
	DMember(float)                                     Blend                                                       OFFSET(get<float>, {0xD0, 4, 0, 0})
	DMember(bool)                                      bIntegrateDeltaTime                                         OFFSET(get<bool>, {0xD4, 1, 0, 0})
	SMember(FTransform)                                Result                                                      OFFSET(getStruct<T>, {0xE0, 96, 0, 0})
	SMember(FTransform)                                AccumulatedValue                                            OFFSET(getStruct<T>, {0x140, 96, 0, 0})
	DMember(bool)                                      bIsInitialized                                              OFFSET(get<bool>, {0x1A0, 1, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_AccumulateFloatRange
/// Size: 0x0018 (0x000008 - 0x000020)
class FRigVMFunction_AccumulateFloatRange : public FRigVMFunction_AccumulateBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(float)                                     Value                                                       OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     Minimum                                                     OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     Maximum                                                     OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     AccumulatedMinimum                                          OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     AccumulatedMaximum                                          OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(bool)                                      bIsInitialized                                              OFFSET(get<bool>, {0x1C, 1, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_AccumulateVectorRange
/// Size: 0x0080 (0x000008 - 0x000088)
class FRigVMFunction_AccumulateVectorRange : public FRigVMFunction_AccumulateBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FVector)                                   Value                                                       OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	SMember(FVector)                                   Minimum                                                     OFFSET(getStruct<T>, {0x20, 24, 0, 0})
	SMember(FVector)                                   Maximum                                                     OFFSET(getStruct<T>, {0x38, 24, 0, 0})
	SMember(FVector)                                   AccumulatedMinimum                                          OFFSET(getStruct<T>, {0x50, 24, 0, 0})
	SMember(FVector)                                   AccumulatedMaximum                                          OFFSET(getStruct<T>, {0x68, 24, 0, 0})
	DMember(bool)                                      bIsInitialized                                              OFFSET(get<bool>, {0x80, 1, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_AlphaInterp
/// Size: 0x0070 (0x000008 - 0x000078)
class FRigVMFunction_AlphaInterp : public FRigVMFunction_SimBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	DMember(float)                                     Value                                                       OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     Scale                                                       OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     Bias                                                        OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(bool)                                      bMapRange                                                   OFFSET(get<bool>, {0x14, 1, 0, 0})
	SMember(FInputRange)                               InRange                                                     OFFSET(getStruct<T>, {0x18, 8, 0, 0})
	SMember(FInputRange)                               OutRange                                                    OFFSET(getStruct<T>, {0x20, 8, 0, 0})
	DMember(bool)                                      bClampResult                                                OFFSET(get<bool>, {0x28, 1, 0, 0})
	DMember(float)                                     ClampMin                                                    OFFSET(get<float>, {0x2C, 4, 0, 0})
	DMember(float)                                     ClampMax                                                    OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(bool)                                      bInterpResult                                               OFFSET(get<bool>, {0x34, 1, 0, 0})
	DMember(float)                                     InterpSpeedIncreasing                                       OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     InterpSpeedDecreasing                                       OFFSET(get<float>, {0x3C, 4, 0, 0})
	DMember(float)                                     Result                                                      OFFSET(get<float>, {0x40, 4, 0, 0})
	SMember(FInputScaleBiasClamp)                      ScaleBiasClamp                                              OFFSET(getStruct<T>, {0x44, 48, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_AlphaInterpVector
/// Size: 0x0098 (0x000008 - 0x0000A0)
class FRigVMFunction_AlphaInterpVector : public FRigVMFunction_SimBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	SMember(FVector)                                   Value                                                       OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	DMember(float)                                     Scale                                                       OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(float)                                     Bias                                                        OFFSET(get<float>, {0x24, 4, 0, 0})
	DMember(bool)                                      bMapRange                                                   OFFSET(get<bool>, {0x28, 1, 0, 0})
	SMember(FInputRange)                               InRange                                                     OFFSET(getStruct<T>, {0x2C, 8, 0, 0})
	SMember(FInputRange)                               OutRange                                                    OFFSET(getStruct<T>, {0x34, 8, 0, 0})
	DMember(bool)                                      bClampResult                                                OFFSET(get<bool>, {0x3C, 1, 0, 0})
	DMember(float)                                     ClampMin                                                    OFFSET(get<float>, {0x40, 4, 0, 0})
	DMember(float)                                     ClampMax                                                    OFFSET(get<float>, {0x44, 4, 0, 0})
	DMember(bool)                                      bInterpResult                                               OFFSET(get<bool>, {0x48, 1, 0, 0})
	DMember(float)                                     InterpSpeedIncreasing                                       OFFSET(get<float>, {0x4C, 4, 0, 0})
	DMember(float)                                     InterpSpeedDecreasing                                       OFFSET(get<float>, {0x50, 4, 0, 0})
	SMember(FVector)                                   Result                                                      OFFSET(getStruct<T>, {0x58, 24, 0, 0})
	SMember(FInputScaleBiasClamp)                      ScaleBiasClamp                                              OFFSET(getStruct<T>, {0x70, 48, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_AlphaInterpQuat
/// Size: 0x00B8 (0x000008 - 0x0000C0)
class FRigVMFunction_AlphaInterpQuat : public FRigVMFunction_SimBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	SMember(FQuat)                                     Value                                                       OFFSET(getStruct<T>, {0x10, 32, 0, 0})
	DMember(float)                                     Scale                                                       OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(float)                                     Bias                                                        OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(bool)                                      bMapRange                                                   OFFSET(get<bool>, {0x38, 1, 0, 0})
	SMember(FInputRange)                               InRange                                                     OFFSET(getStruct<T>, {0x3C, 8, 0, 0})
	SMember(FInputRange)                               OutRange                                                    OFFSET(getStruct<T>, {0x44, 8, 0, 0})
	DMember(bool)                                      bClampResult                                                OFFSET(get<bool>, {0x4C, 1, 0, 0})
	DMember(float)                                     ClampMin                                                    OFFSET(get<float>, {0x50, 4, 0, 0})
	DMember(float)                                     ClampMax                                                    OFFSET(get<float>, {0x54, 4, 0, 0})
	DMember(bool)                                      bInterpResult                                               OFFSET(get<bool>, {0x58, 1, 0, 0})
	DMember(float)                                     InterpSpeedIncreasing                                       OFFSET(get<float>, {0x5C, 4, 0, 0})
	DMember(float)                                     InterpSpeedDecreasing                                       OFFSET(get<float>, {0x60, 4, 0, 0})
	SMember(FQuat)                                     Result                                                      OFFSET(getStruct<T>, {0x70, 32, 0, 0})
	SMember(FInputScaleBiasClamp)                      ScaleBiasClamp                                              OFFSET(getStruct<T>, {0x90, 48, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_DeltaFromPreviousFloat
/// Size: 0x0018 (0x000008 - 0x000020)
class FRigVMFunction_DeltaFromPreviousFloat : public FRigVMFunction_SimBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(float)                                     Value                                                       OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     Delta                                                       OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     PreviousValue                                               OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     Cache                                                       OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(bool)                                      bIsInitialized                                              OFFSET(get<bool>, {0x18, 1, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_DeltaFromPreviousVector
/// Size: 0x0068 (0x000008 - 0x000070)
class FRigVMFunction_DeltaFromPreviousVector : public FRigVMFunction_SimBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FVector)                                   Value                                                       OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	SMember(FVector)                                   Delta                                                       OFFSET(getStruct<T>, {0x20, 24, 0, 0})
	SMember(FVector)                                   PreviousValue                                               OFFSET(getStruct<T>, {0x38, 24, 0, 0})
	SMember(FVector)                                   Cache                                                       OFFSET(getStruct<T>, {0x50, 24, 0, 0})
	DMember(bool)                                      bIsInitialized                                              OFFSET(get<bool>, {0x68, 1, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_DeltaFromPreviousQuat
/// Size: 0x0098 (0x000008 - 0x0000A0)
class FRigVMFunction_DeltaFromPreviousQuat : public FRigVMFunction_SimBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	SMember(FQuat)                                     Value                                                       OFFSET(getStruct<T>, {0x10, 32, 0, 0})
	SMember(FQuat)                                     Delta                                                       OFFSET(getStruct<T>, {0x30, 32, 0, 0})
	SMember(FQuat)                                     PreviousValue                                               OFFSET(getStruct<T>, {0x50, 32, 0, 0})
	SMember(FQuat)                                     Cache                                                       OFFSET(getStruct<T>, {0x70, 32, 0, 0})
	DMember(bool)                                      bIsInitialized                                              OFFSET(get<bool>, {0x90, 1, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_DeltaFromPreviousTransform
/// Size: 0x0198 (0x000008 - 0x0001A0)
class FRigVMFunction_DeltaFromPreviousTransform : public FRigVMFunction_SimBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
	SMember(FTransform)                                Value                                                       OFFSET(getStruct<T>, {0x10, 96, 0, 0})
	SMember(FTransform)                                Delta                                                       OFFSET(getStruct<T>, {0x70, 96, 0, 0})
	SMember(FTransform)                                PreviousValue                                               OFFSET(getStruct<T>, {0xD0, 96, 0, 0})
	SMember(FTransform)                                Cache                                                       OFFSET(getStruct<T>, {0x130, 96, 0, 0})
	DMember(bool)                                      bIsInitialized                                              OFFSET(get<bool>, {0x190, 1, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_KalmanFloat
/// Size: 0x0028 (0x000008 - 0x000030)
class FRigVMFunction_KalmanFloat : public FRigVMFunction_SimBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(float)                                     Value                                                       OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   BufferSize                                                  OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	DMember(float)                                     Result                                                      OFFSET(get<float>, {0x10, 4, 0, 0})
	CMember(TArray<float>)                             Buffer                                                      OFFSET(get<T>, {0x18, 16, 0, 0})
	DMember(int32_t)                                   LastInsertIndex                                             OFFSET(get<int32_t>, {0x28, 4, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_KalmanVector
/// Size: 0x0050 (0x000008 - 0x000058)
class FRigVMFunction_KalmanVector : public FRigVMFunction_SimBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FVector)                                   Value                                                       OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	DMember(int32_t)                                   BufferSize                                                  OFFSET(get<int32_t>, {0x20, 4, 0, 0})
	SMember(FVector)                                   Result                                                      OFFSET(getStruct<T>, {0x28, 24, 0, 0})
	CMember(TArray<FVector>)                           Buffer                                                      OFFSET(get<T>, {0x40, 16, 0, 0})
	DMember(int32_t)                                   LastInsertIndex                                             OFFSET(get<int32_t>, {0x50, 4, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_KalmanTransform
/// Size: 0x00F8 (0x000008 - 0x000100)
class FRigVMFunction_KalmanTransform : public FRigVMFunction_SimBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	SMember(FTransform)                                Value                                                       OFFSET(getStruct<T>, {0x10, 96, 0, 0})
	DMember(int32_t)                                   BufferSize                                                  OFFSET(get<int32_t>, {0x70, 4, 0, 0})
	SMember(FTransform)                                Result                                                      OFFSET(getStruct<T>, {0x80, 96, 0, 0})
	CMember(TArray<FTransform>)                        Buffer                                                      OFFSET(get<T>, {0xE0, 16, 0, 0})
	DMember(int32_t)                                   LastInsertIndex                                             OFFSET(get<int32_t>, {0xF0, 4, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_Timeline
/// Size: 0x0010 (0x000008 - 0x000018)
class FRigVMFunction_Timeline : public FRigVMFunction_SimBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(float)                                     Speed                                                       OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     Time                                                        OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     AccumulatedValue                                            OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(bool)                                      bIsInitialized                                              OFFSET(get<bool>, {0x14, 1, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_TimeLoop
/// Size: 0x0030 (0x000008 - 0x000038)
class FRigVMFunction_TimeLoop : public FRigVMFunction_SimBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(float)                                     Speed                                                       OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     duration                                                    OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(bool)                                      Normalize                                                   OFFSET(get<bool>, {0x10, 1, 0, 0})
	DMember(float)                                     Absolute                                                    OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     Relative                                                    OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     FlipFlop                                                    OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(bool)                                      Even                                                        OFFSET(get<bool>, {0x20, 1, 0, 0})
	DMember(float)                                     AccumulatedAbsolute                                         OFFSET(get<float>, {0x24, 4, 0, 0})
	DMember(float)                                     AccumulatedRelative                                         OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(int32_t)                                   NumIterations                                               OFFSET(get<int32_t>, {0x2C, 4, 0, 0})
	DMember(bool)                                      bIsInitialized                                              OFFSET(get<bool>, {0x30, 1, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_TimeOffsetFloat
/// Size: 0x0040 (0x000008 - 0x000048)
class FRigVMFunction_TimeOffsetFloat : public FRigVMFunction_SimBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	DMember(float)                                     Value                                                       OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     SecondsAgo                                                  OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(int32_t)                                   BufferSize                                                  OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	DMember(float)                                     TimeRange                                                   OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     Result                                                      OFFSET(get<float>, {0x18, 4, 0, 0})
	CMember(TArray<float>)                             Buffer                                                      OFFSET(get<T>, {0x20, 16, 0, 0})
	CMember(TArray<float>)                             DeltaTimes                                                  OFFSET(get<T>, {0x30, 16, 0, 0})
	DMember(int32_t)                                   LastInsertIndex                                             OFFSET(get<int32_t>, {0x40, 4, 0, 0})
	DMember(int32_t)                                   UpperBound                                                  OFFSET(get<int32_t>, {0x44, 4, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_TimeOffsetVector
/// Size: 0x0068 (0x000008 - 0x000070)
class FRigVMFunction_TimeOffsetVector : public FRigVMFunction_SimBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FVector)                                   Value                                                       OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	DMember(float)                                     SecondsAgo                                                  OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(int32_t)                                   BufferSize                                                  OFFSET(get<int32_t>, {0x24, 4, 0, 0})
	DMember(float)                                     TimeRange                                                   OFFSET(get<float>, {0x28, 4, 0, 0})
	SMember(FVector)                                   Result                                                      OFFSET(getStruct<T>, {0x30, 24, 0, 0})
	CMember(TArray<FVector>)                           Buffer                                                      OFFSET(get<T>, {0x48, 16, 0, 0})
	CMember(TArray<float>)                             DeltaTimes                                                  OFFSET(get<T>, {0x58, 16, 0, 0})
	DMember(int32_t)                                   LastInsertIndex                                             OFFSET(get<int32_t>, {0x68, 4, 0, 0})
	DMember(int32_t)                                   UpperBound                                                  OFFSET(get<int32_t>, {0x6C, 4, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_TimeOffsetTransform
/// Size: 0x0108 (0x000008 - 0x000110)
class FRigVMFunction_TimeOffsetTransform : public FRigVMFunction_SimBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
	SMember(FTransform)                                Value                                                       OFFSET(getStruct<T>, {0x10, 96, 0, 0})
	DMember(float)                                     SecondsAgo                                                  OFFSET(get<float>, {0x70, 4, 0, 0})
	DMember(int32_t)                                   BufferSize                                                  OFFSET(get<int32_t>, {0x74, 4, 0, 0})
	DMember(float)                                     TimeRange                                                   OFFSET(get<float>, {0x78, 4, 0, 0})
	SMember(FTransform)                                Result                                                      OFFSET(getStruct<T>, {0x80, 96, 0, 0})
	CMember(TArray<FTransform>)                        Buffer                                                      OFFSET(get<T>, {0xE0, 16, 0, 0})
	CMember(TArray<float>)                             DeltaTimes                                                  OFFSET(get<T>, {0xF0, 16, 0, 0})
	DMember(int32_t)                                   LastInsertIndex                                             OFFSET(get<int32_t>, {0x100, 4, 0, 0})
	DMember(int32_t)                                   UpperBound                                                  OFFSET(get<int32_t>, {0x104, 4, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_VerletIntegrateVector
/// Size: 0x00D0 (0x000008 - 0x0000D8)
class FRigVMFunction_VerletIntegrateVector : public FRigVMFunction_SimBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	SMember(FVector)                                   Target                                                      OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	DMember(float)                                     Strength                                                    OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(float)                                     Damp                                                        OFFSET(get<float>, {0x24, 4, 0, 0})
	DMember(float)                                     Blend                                                       OFFSET(get<float>, {0x28, 4, 0, 0})
	SMember(FVector)                                   Force                                                       OFFSET(getStruct<T>, {0x30, 24, 0, 0})
	SMember(FVector)                                   Position                                                    OFFSET(getStruct<T>, {0x48, 24, 0, 0})
	SMember(FVector)                                   Velocity                                                    OFFSET(getStruct<T>, {0x60, 24, 0, 0})
	SMember(FVector)                                   Acceleration                                                OFFSET(getStruct<T>, {0x78, 24, 0, 0})
	SMember(FRigVMSimPoint)                            Point                                                       OFFSET(getStruct<T>, {0x90, 64, 0, 0})
	DMember(bool)                                      bInitialized                                                OFFSET(get<bool>, {0xD0, 1, 0, 0})
};

/// Enum /Script/RigVM.ERigVMPinDirection
/// Size: 0x06
enum class ERigVMPinDirection : uint8_t
{
	ERigVMPinDirection__Input                                                        = 0,
	ERigVMPinDirection__Output                                                       = 1,
	ERigVMPinDirection__IO                                                           = 2,
	ERigVMPinDirection__Visible                                                      = 3,
	ERigVMPinDirection__Hidden                                                       = 4,
	ERigVMPinDirection__Invalid                                                      = 5
};

/// Enum /Script/RigVM.ERigVMFunctionArgumentDirection
/// Size: 0x03
enum class ERigVMFunctionArgumentDirection : uint8_t
{
	ERigVMFunctionArgumentDirection__Input                                           = 0,
	ERigVMFunctionArgumentDirection__Output                                          = 1,
	ERigVMFunctionArgumentDirection__Invalid                                         = 2
};

/// Enum /Script/RigVM.ERigVMTransformSpace
/// Size: 0x03
enum class ERigVMTransformSpace : uint8_t
{
	ERigVMTransformSpace__LocalSpace                                                 = 0,
	ERigVMTransformSpace__GlobalSpace                                                = 1,
	ERigVMTransformSpace__Max                                                        = 2
};

/// Enum /Script/RigVM.ERigVMClampSpatialMode
/// Size: 0x04
enum class ERigVMClampSpatialMode : uint8_t
{
	ERigVMClampSpatialMode__Plane                                                    = 0,
	ERigVMClampSpatialMode__Cylinder                                                 = 1,
	ERigVMClampSpatialMode__Sphere                                                   = 2,
	ERigVMClampSpatialMode__Capsule                                                  = 3
};

/// Enum /Script/RigVM.ERigVMParameterType
/// Size: 0x03
enum class ERigVMParameterType : uint8_t
{
	ERigVMParameterType__Input                                                       = 0,
	ERigVMParameterType__Output                                                      = 1,
	ERigVMParameterType__Invalid                                                     = 2
};

/// Enum /Script/RigVM.ERigVMOpCode
/// Size: 0x106
enum class ERigVMOpCode : uint8_t
{
	ERigVMOpCode__Execute_0_Operands                                                 = 0,
	ERigVMOpCode__Execute_1_Operands                                                 = 1,
	ERigVMOpCode__Execute_2_Operands                                                 = 2,
	ERigVMOpCode__Execute_3_Operands                                                 = 3,
	ERigVMOpCode__Execute_4_Operands                                                 = 4,
	ERigVMOpCode__Execute_5_Operands                                                 = 5,
	ERigVMOpCode__Execute_6_Operands                                                 = 6,
	ERigVMOpCode__Execute_7_Operands                                                 = 7,
	ERigVMOpCode__Execute_8_Operands                                                 = 8,
	ERigVMOpCode__Execute_9_Operands                                                 = 9,
	ERigVMOpCode__Execute_10_Operands                                                = 10,
	ERigVMOpCode__Execute_11_Operands                                                = 11,
	ERigVMOpCode__Execute_12_Operands                                                = 12,
	ERigVMOpCode__Execute_13_Operands                                                = 13,
	ERigVMOpCode__Execute_14_Operands                                                = 14,
	ERigVMOpCode__Execute_15_Operands                                                = 15,
	ERigVMOpCode__Execute_16_Operands                                                = 16,
	ERigVMOpCode__Execute_17_Operands                                                = 17,
	ERigVMOpCode__Execute_18_Operands                                                = 18,
	ERigVMOpCode__Execute_19_Operands                                                = 19,
	ERigVMOpCode__Execute_20_Operands                                                = 20,
	ERigVMOpCode__Execute_21_Operands                                                = 21,
	ERigVMOpCode__Execute_22_Operands                                                = 22,
	ERigVMOpCode__Execute_23_Operands                                                = 23,
	ERigVMOpCode__Execute_24_Operands                                                = 24,
	ERigVMOpCode__Execute_25_Operands                                                = 25,
	ERigVMOpCode__Execute_26_Operands                                                = 26,
	ERigVMOpCode__Execute_27_Operands                                                = 27,
	ERigVMOpCode__Execute_28_Operands                                                = 28,
	ERigVMOpCode__Execute_29_Operands                                                = 29,
	ERigVMOpCode__Execute_30_Operands                                                = 30,
	ERigVMOpCode__Execute_31_Operands                                                = 31,
	ERigVMOpCode__Execute_32_Operands                                                = 32,
	ERigVMOpCode__Execute_33_Operands                                                = 33,
	ERigVMOpCode__Execute_34_Operands                                                = 34,
	ERigVMOpCode__Execute_35_Operands                                                = 35,
	ERigVMOpCode__Execute_36_Operands                                                = 36,
	ERigVMOpCode__Execute_37_Operands                                                = 37,
	ERigVMOpCode__Execute_38_Operands                                                = 38,
	ERigVMOpCode__Execute_39_Operands                                                = 39,
	ERigVMOpCode__Execute_40_Operands                                                = 40,
	ERigVMOpCode__Execute_41_Operands                                                = 41,
	ERigVMOpCode__Execute_42_Operands                                                = 42,
	ERigVMOpCode__Execute_43_Operands                                                = 43,
	ERigVMOpCode__Execute_44_Operands                                                = 44,
	ERigVMOpCode__Execute_45_Operands                                                = 45,
	ERigVMOpCode__Execute_46_Operands                                                = 46,
	ERigVMOpCode__Execute_47_Operands                                                = 47,
	ERigVMOpCode__Execute_48_Operands                                                = 48,
	ERigVMOpCode__Execute_49_Operands                                                = 49,
	ERigVMOpCode__Execute_50_Operands                                                = 50,
	ERigVMOpCode__Execute_51_Operands                                                = 51,
	ERigVMOpCode__Execute_52_Operands                                                = 52,
	ERigVMOpCode__Execute_53_Operands                                                = 53,
	ERigVMOpCode__Execute_54_Operands                                                = 54,
	ERigVMOpCode__Execute_55_Operands                                                = 55,
	ERigVMOpCode__Execute_56_Operands                                                = 56,
	ERigVMOpCode__Execute_57_Operands                                                = 57,
	ERigVMOpCode__Execute_58_Operands                                                = 58,
	ERigVMOpCode__Execute_59_Operands                                                = 59,
	ERigVMOpCode__Execute_60_Operands                                                = 60,
	ERigVMOpCode__Execute_61_Operands                                                = 61,
	ERigVMOpCode__Execute_62_Operands                                                = 62,
	ERigVMOpCode__Execute_63_Operands                                                = 63,
	ERigVMOpCode__Execute_64_Operands                                                = 64,
	ERigVMOpCode__Zero                                                               = 65,
	ERigVMOpCode__BoolFalse                                                          = 66,
	ERigVMOpCode__BoolTrue                                                           = 67,
	ERigVMOpCode__Copy                                                               = 68,
	ERigVMOpCode__Increment                                                          = 69,
	ERigVMOpCode__Decrement                                                          = 70,
	ERigVMOpCode__Equals                                                             = 71,
	ERigVMOpCode__NotEquals                                                          = 72,
	ERigVMOpCode__JumpAbsolute                                                       = 73,
	ERigVMOpCode__JumpForward                                                        = 74,
	ERigVMOpCode__JumpBackward                                                       = 75,
	ERigVMOpCode__JumpAbsoluteIf                                                     = 76,
	ERigVMOpCode__JumpForwardIf                                                      = 77,
	ERigVMOpCode__JumpBackwardIf                                                     = 78,
	ERigVMOpCode__ChangeType                                                         = 79,
	ERigVMOpCode__Exit                                                               = 80,
	ERigVMOpCode__BeginBlock                                                         = 81,
	ERigVMOpCode__EndBlock                                                           = 82,
	ERigVMOpCode__ArrayReset                                                         = 83,
	ERigVMOpCode__ArrayGetNum                                                        = 84,
	ERigVMOpCode__ArraySetNum                                                        = 85,
	ERigVMOpCode__ArrayGetAtIndex                                                    = 86,
	ERigVMOpCode__ArraySetAtIndex                                                    = 87,
	ERigVMOpCode__ArrayAdd                                                           = 88,
	ERigVMOpCode__ArrayInsert                                                        = 89,
	ERigVMOpCode__ArrayRemove                                                        = 90,
	ERigVMOpCode__ArrayFind                                                          = 91,
	ERigVMOpCode__ArrayAppend                                                        = 92,
	ERigVMOpCode__ArrayClone                                                         = 93,
	ERigVMOpCode__ArrayIterator                                                      = 94,
	ERigVMOpCode__ArrayUnion                                                         = 95,
	ERigVMOpCode__ArrayDifference                                                    = 96,
	ERigVMOpCode__ArrayIntersection                                                  = 97,
	ERigVMOpCode__ArrayReverse                                                       = 98,
	ERigVMOpCode__InvokeEntry                                                        = 99,
	ERigVMOpCode__JumpToBranch                                                       = 100,
	ERigVMOpCode__Execute                                                            = 101,
	ERigVMOpCode__RunInstructions                                                    = 102,
	ERigVMOpCode__Invalid                                                            = 103,
	ERigVMOpCode__FirstArrayOpCode                                                   = 83,
	ERigVMOpCode__LastArrayOpCode                                                    = 98
};

/// Enum /Script/RigVM.ERigVMCopyType
/// Size: 0x03
enum class ERigVMCopyType : uint8_t
{
	ERigVMCopyType__Default                                                          = 0,
	ERigVMCopyType__FloatToDouble                                                    = 1,
	ERigVMCopyType__DoubleToFloat                                                    = 2
};

/// Enum /Script/RigVM.ERigVMBreakpointAction
/// Size: 0x06
enum class ERigVMBreakpointAction : uint8_t
{
	ERigVMBreakpointAction__None                                                     = 0,
	ERigVMBreakpointAction__Resume                                                   = 1,
	ERigVMBreakpointAction__StepOver                                                 = 2,
	ERigVMBreakpointAction__StepInto                                                 = 3,
	ERigVMBreakpointAction__StepOut                                                  = 4,
	ERigVMBreakpointAction__Max                                                      = 5
};

/// Enum /Script/RigVM.ERigVMDrawSettings
/// Size: 0x04
enum class ERigVMDrawSettings : uint8_t
{
	ERigVMDrawSettings__Points                                                       = 0,
	ERigVMDrawSettings__Lines                                                        = 1,
	ERigVMDrawSettings__LineStrip                                                    = 2,
	ERigVMDrawSettings__DynamicMesh                                                  = 3
};

/// Enum /Script/RigVM.ERigVMMemoryType
/// Size: 0x05
enum class ERigVMMemoryType : uint8_t
{
	ERigVMMemoryType__Work                                                           = 0,
	ERigVMMemoryType__Literal                                                        = 1,
	ERigVMMemoryType__External                                                       = 2,
	ERigVMMemoryType__Debug                                                          = 3,
	ERigVMMemoryType__Invalid                                                        = 4
};

/// Enum /Script/RigVM.ERigVMRegisterType
/// Size: 0x05
enum class ERigVMRegisterType : uint8_t
{
	ERigVMRegisterType__Plain                                                        = 0,
	ERigVMRegisterType__String                                                       = 1,
	ERigVMRegisterType__Name                                                         = 2,
	ERigVMRegisterType__Struct                                                       = 3,
	ERigVMRegisterType__Invalid                                                      = 4
};

/// Enum /Script/RigVM.ERigVMUserWorkflowType
/// Size: 0x05
enum class ERigVMUserWorkflowType : uint8_t
{
	ERigVMUserWorkflowType__Invalid                                                  = 0,
	ERigVMUserWorkflowType__NodeContext                                              = 1,
	ERigVMUserWorkflowType__PinContext                                               = 2,
	ERigVMUserWorkflowType__OnPinDefaultChanged                                      = 4,
	ERigVMUserWorkflowType__All                                                      = 7
};

/// Enum /Script/RigVM.ERigUnitDebugPointMode
/// Size: 0x03
enum class ERigUnitDebugPointMode : uint8_t
{
	ERigUnitDebugPointMode__Point                                                    = 0,
	ERigUnitDebugPointMode__Vector                                                   = 1,
	ERigUnitDebugPointMode__Max                                                      = 2
};

/// Enum /Script/RigVM.ERigUnitDebugTransformMode
/// Size: 0x04
enum class ERigUnitDebugTransformMode : uint8_t
{
	ERigUnitDebugTransformMode__Point                                                = 0,
	ERigUnitDebugTransformMode__Axes                                                 = 1,
	ERigUnitDebugTransformMode__Box                                                  = 2,
	ERigUnitDebugTransformMode__Max                                                  = 3
};

/// Enum /Script/RigVM.ERigUnitVisualDebugPointMode
/// Size: 0x03
enum class ERigUnitVisualDebugPointMode : uint8_t
{
	ERigUnitVisualDebugPointMode__Point                                              = 0,
	ERigUnitVisualDebugPointMode__Vector                                             = 1,
	ERigUnitVisualDebugPointMode__Max                                                = 2
};

/// Enum /Script/RigVM.ERBFKernelType
/// Size: 0x05
enum class ERBFKernelType : uint8_t
{
	ERBFKernelType__Gaussian                                                         = 0,
	ERBFKernelType__Exponential                                                      = 1,
	ERBFKernelType__Linear                                                           = 2,
	ERBFKernelType__Cubic                                                            = 3,
	ERBFKernelType__Quintic                                                          = 4
};

/// Enum /Script/RigVM.ERBFQuatDistanceType
/// Size: 0x04
enum class ERBFQuatDistanceType : uint8_t
{
	ERBFQuatDistanceType__Euclidean                                                  = 0,
	ERBFQuatDistanceType__ArcLength                                                  = 1,
	ERBFQuatDistanceType__SwingAngle                                                 = 2,
	ERBFQuatDistanceType__TwistAngle                                                 = 3
};

/// Enum /Script/RigVM.ERBFVectorDistanceType
/// Size: 0x03
enum class ERBFVectorDistanceType : uint8_t
{
	ERBFVectorDistanceType__Euclidean                                                = 0,
	ERBFVectorDistanceType__Manhattan                                                = 1,
	ERBFVectorDistanceType__ArcLength                                                = 2
};

/// Enum /Script/RigVM.ERigVMAnimEasingType
/// Size: 0x31
enum class ERigVMAnimEasingType : uint8_t
{
	ERigVMAnimEasingType__Linear                                                     = 0,
	ERigVMAnimEasingType__QuadraticEaseIn                                            = 1,
	ERigVMAnimEasingType__QuadraticEaseOut                                           = 2,
	ERigVMAnimEasingType__QuadraticEaseInOut                                         = 3,
	ERigVMAnimEasingType__CubicEaseIn                                                = 4,
	ERigVMAnimEasingType__CubicEaseOut                                               = 5,
	ERigVMAnimEasingType__CubicEaseInOut                                             = 6,
	ERigVMAnimEasingType__QuarticEaseIn                                              = 7,
	ERigVMAnimEasingType__QuarticEaseOut                                             = 8,
	ERigVMAnimEasingType__QuarticEaseInOut                                           = 9,
	ERigVMAnimEasingType__QuinticEaseIn                                              = 10,
	ERigVMAnimEasingType__QuinticEaseOut                                             = 11,
	ERigVMAnimEasingType__QuinticEaseInOut                                           = 12,
	ERigVMAnimEasingType__SineEaseIn                                                 = 13,
	ERigVMAnimEasingType__SineEaseOut                                                = 14,
	ERigVMAnimEasingType__SineEaseInOut                                              = 15,
	ERigVMAnimEasingType__CircularEaseIn                                             = 16,
	ERigVMAnimEasingType__CircularEaseOut                                            = 17,
	ERigVMAnimEasingType__CircularEaseInOut                                          = 18,
	ERigVMAnimEasingType__ExponentialEaseIn                                          = 19,
	ERigVMAnimEasingType__ExponentialEaseOut                                         = 20,
	ERigVMAnimEasingType__ExponentialEaseInOut                                       = 21,
	ERigVMAnimEasingType__ElasticEaseIn                                              = 22,
	ERigVMAnimEasingType__ElasticEaseOut                                             = 23,
	ERigVMAnimEasingType__ElasticEaseInOut                                           = 24,
	ERigVMAnimEasingType__BackEaseIn                                                 = 25,
	ERigVMAnimEasingType__BackEaseOut                                                = 26,
	ERigVMAnimEasingType__BackEaseInOut                                              = 27,
	ERigVMAnimEasingType__BounceEaseIn                                               = 28,
	ERigVMAnimEasingType__BounceEaseOut                                              = 29,
	ERigVMAnimEasingType__BounceEaseInOut                                            = 30
};

/// Enum /Script/RigVM.ERigVMSimPointIntegrateType
/// Size: 0x02
enum class ERigVMSimPointIntegrateType : uint8_t
{
	ERigVMSimPointIntegrateType__Verlet                                              = 0,
	ERigVMSimPointIntegrateType__SemiExplicitEuler                                   = 1
};

