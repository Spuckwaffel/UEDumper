
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/StructUtilsEngine.StructUtilsFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UStructUtilsFunctionLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/StructUtilsEngine.StructUtilsFunctionLibrary.SetInstancedStructValue
	// void SetInstancedStructValue(FInstancedStruct& InstancedStruct, int32_t& Value);                                         // [0x721fa40] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/StructUtilsEngine.StructUtilsFunctionLibrary.Reset
	// void Reset(FInstancedStruct& InstancedStruct, class UScriptStruct* StructType);                                          // [0x721f8b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/StructUtilsEngine.StructUtilsFunctionLibrary.NotEqual_InstancedStruct
	// bool NotEqual_InstancedStruct(FInstancedStruct& A, FInstancedStruct& B);                                                 // [0x721f7a4] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/StructUtilsEngine.StructUtilsFunctionLibrary.MakeInstancedStruct
	// FInstancedStruct MakeInstancedStruct(int32_t& Value);                                                                    // [0x721f658] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/StructUtilsEngine.StructUtilsFunctionLibrary.IsValid_InstancedStruct
	// bool IsValid_InstancedStruct(FInstancedStruct& InstancedStruct);                                                         // [0x721f5b4] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/StructUtilsEngine.StructUtilsFunctionLibrary.IsInstancedStructValid
	// EStructUtilsResult IsInstancedStructValid(FInstancedStruct& InstancedStruct);                                            // [0x721f510] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/StructUtilsEngine.StructUtilsFunctionLibrary.GetInstancedStructValue
	// void GetInstancedStructValue(EStructUtilsResult& ExecResult, FInstancedStruct& InstancedStruct, int32_t& Value);         // [0x721f284] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/StructUtilsEngine.StructUtilsFunctionLibrary.EqualEqual_InstancedStruct
	// bool EqualEqual_InstancedStruct(FInstancedStruct& A, FInstancedStruct& B);                                               // [0x721f17c] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
};

/// Enum /Script/StructUtilsEngine.EStructUtilsResult
/// Size: 0x03
enum class EStructUtilsResult : uint8_t
{
	EStructUtilsResult__Valid                                                        = 0,
	EStructUtilsResult__NotValid                                                     = 1,
	EStructUtilsResult__EStructUtilsResult_MAX                                       = 2
};

