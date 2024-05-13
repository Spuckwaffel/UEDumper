
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: ModularGameplay

/// Class /Script/FMJamCoreRuntime.JamControllerComponent_QuestPersistence
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UJamControllerComponent_QuestPersistence : public UFortControllerComponent_QuestPersistence
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
};

/// Class /Script/FMJamCoreRuntime.JamCoreBPFL
/// Size: 0x0000 (0x000028 - 0x000028)
class UJamCoreBPFL : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/FMJamCoreRuntime.JamCoreBPFL.ShouldRunServerCode
	// bool ShouldRunServerCode(class AActor* Context);                                                                         // [0xb667d00] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/FMJamCoreRuntime.JamCoreBPFL.ShouldRunClientCode
	// bool ShouldRunClientCode(class AActor* Context);                                                                         // [0xb667b18] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Enum /Script/FMJamCoreRuntime.EFMJamLoopType
/// Size: 0x05
enum class EFMJamLoopType : uint8_t
{
	EFMJamLoopType__Lead                                                             = 0,
	EFMJamLoopType__Misc                                                             = 1,
	EFMJamLoopType__Bass                                                             = 2,
	EFMJamLoopType__Beat                                                             = 3,
	EFMJamLoopType__Num                                                              = 4
};

