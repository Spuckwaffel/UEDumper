
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FMJamContentResolver
/// dependency: ModularGameplay

/// Class /Script/FMJamLoadReporter.JamLoadReporter
/// Size: 0x00B0 (0x0000A0 - 0x000150)
class UJamLoadReporter : public UGameStateComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:


	/// Functions
	// Function /Script/FMJamLoadReporter.JamLoadReporter.TryGet
	// class UJamLoadReporter* TryGet(class UObject* WorldContext);                                                             // [0xb7bb08c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/FMJamLoadReporter.JamLoadReporter.OnResolveComplete
	// void OnResolveComplete(class UJamContentResolver* Sender, FString LinkCode, bool bSuccess);                              // [0xb7bb89c] Final|Native|Private 
	// Function /Script/FMJamLoadReporter.JamLoadReporter.OnResolveAndLoadComplete
	// void OnResolveAndLoadComplete(class UJamContentResolver* Sender, FString LinkCode, bool bSuccess, bool bWasAlreadyLoaded); // [0xb7bb10c] Final|Native|Private 
	// Function /Script/FMJamLoadReporter.JamLoadReporter.Get
	// class UJamLoadReporter* Get(class UObject* WorldContext);                                                                // [0xb7bb08c] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/FMJamLoadReporter.JamLoadReporter.GenerateFullReport
	// TArray<FString> GenerateFullReport();                                                                                    // [0xb7bb050] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Enum /Script/FMJamLoadReporter.EJamLoadState
/// Size: 0x06
enum class EJamLoadState : uint8_t
{
	EJamLoadState__Resolve                                                           = 0,
	EJamLoadState__Load                                                              = 1,
	EJamLoadState__LoadMidi                                                          = 2,
	EJamLoadState__Total                                                             = 3,
	EJamLoadState__Preload                                                           = 4,
	EJamLoadState__NumStates                                                         = 5
};

