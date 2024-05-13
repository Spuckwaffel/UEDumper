
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/Reflex.ReflexBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UReflexBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/Reflex.ReflexBlueprintLibrary.SetReflexMode
	// void SetReflexMode(EReflexMode Mode);                                                                                    // [0xd134124] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Reflex.ReflexBlueprintLibrary.SetFlashIndicatorEnabled
	// void SetFlashIndicatorEnabled(bool bEnabled);                                                                            // [0xd1340b4] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Reflex.ReflexBlueprintLibrary.GetRenderLatencyInMs
	// float GetRenderLatencyInMs();                                                                                            // [0xd13408c] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/Reflex.ReflexBlueprintLibrary.GetReflexMode
	// EReflexMode GetReflexMode();                                                                                             // [0xd134014] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/Reflex.ReflexBlueprintLibrary.GetReflexAvailable
	// bool GetReflexAvailable();                                                                                               // [0xd133ff0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/Reflex.ReflexBlueprintLibrary.GetGameToRenderLatencyInMs
	// float GetGameToRenderLatencyInMs();                                                                                      // [0xd133fc8] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/Reflex.ReflexBlueprintLibrary.GetGameLatencyInMs
	// float GetGameLatencyInMs();                                                                                              // [0xd133fa0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/Reflex.ReflexBlueprintLibrary.GetFlashIndicatorEnabled
	// bool GetFlashIndicatorEnabled();                                                                                         // [0xd133f1c] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Enum /Script/Reflex.EReflexMode
/// Size: 0x03
enum class EReflexMode : uint8_t
{
	EReflexMode__Disabled                                                            = 0,
	EReflexMode__Enabled                                                             = 1,
	EReflexMode__EnabledPlusBoost                                                    = 3
};

