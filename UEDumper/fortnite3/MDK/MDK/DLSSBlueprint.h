
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/DLSSBlueprint.DLSSLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UDLSSLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/DLSSBlueprint.DLSSLibrary.SetDLSSSharpness
	// void SetDLSSSharpness(float Sharpness);                                                                                  // [0xd1d1d24] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/DLSSBlueprint.DLSSLibrary.SetDLSSMode
	// void SetDLSSMode(class UObject* WorldContextObject, UDLSSMode DLSSMode);                                                 // [0xd1d1c74] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/DLSSBlueprint.DLSSLibrary.QueryDLSSSupport
	// UDLSSSupport QueryDLSSSupport();                                                                                         // [0xd1d1c50] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/DLSSBlueprint.DLSSLibrary.IsDLSSSupported
	// bool IsDLSSSupported();                                                                                                  // [0xd1d1c2c] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/DLSSBlueprint.DLSSLibrary.IsDLSSModeSupported
	// bool IsDLSSModeSupported(UDLSSMode DLSSMode);                                                                            // [0xd1d1bac] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/DLSSBlueprint.DLSSLibrary.IsDLSSEnabled
	// bool IsDLSSEnabled();                                                                                                    // [0xd1d1b88] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/DLSSBlueprint.DLSSLibrary.IsDLAAEnabled
	// bool IsDLAAEnabled();                                                                                                    // [0xd1d1b00] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/DLSSBlueprint.DLSSLibrary.GetSupportedDLSSModes
	// TArray<UDLSSMode> GetSupportedDLSSModes();                                                                               // [0xd1d1a94] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/DLSSBlueprint.DLSSLibrary.GetDLSSSharpness
	// float GetDLSSSharpness();                                                                                                // [0xd1d1a0c] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/DLSSBlueprint.DLSSLibrary.GetDLSSScreenPercentageRange
	// void GetDLSSScreenPercentageRange(float& MinScreenPercentage, float& MaxScreenPercentage);                               // [0xd1d1934] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/DLSSBlueprint.DLSSLibrary.GetDLSSModeInformation
	// void GetDLSSModeInformation(UDLSSMode DLSSMode, FVector2D ScreenResolution, bool& bIsSupported, float& OptimalScreenPercentage, bool& bIsFixedScreenPercentage, float& MinScreenPercentage, float& MaxScreenPercentage, float& OptimalSharpness); // [0xd1d1684] Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/DLSSBlueprint.DLSSLibrary.GetDLSSMode
	// UDLSSMode GetDLSSMode();                                                                                                 // [0xd1d1660] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/DLSSBlueprint.DLSSLibrary.GetDLSSMinimumDriverVersion
	// void GetDLSSMinimumDriverVersion(int32_t& MinDriverVersionMajor, int32_t& MinDriverVersionMinor);                        // [0xd1d14e4] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/DLSSBlueprint.DLSSLibrary.GetDefaultDLSSMode
	// UDLSSMode GetDefaultDLSSMode();                                                                                          // [0xd1d1a34] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/DLSSBlueprint.DLSSLibrary.EnableDLSS
	// void EnableDLSS(bool bEnabled);                                                                                          // [0xd1d1474] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/DLSSBlueprint.DLSSLibrary.EnableDLAA
	// void EnableDLAA(bool bEnabled);                                                                                          // [0xd1d1404] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
};

/// Enum /Script/DLSSBlueprint.UDLSSSupport
/// Size: 0x08
enum class UDLSSSupport : uint8_t
{
	UDLSSSupport__Supported                                                          = 0,
	UDLSSSupport__NotSupported                                                       = 1,
	UDLSSSupport__NotSupportedIncompatibleHardware                                   = 2,
	UDLSSSupport__NotSupportedDriverOutOfDate                                        = 3,
	UDLSSSupport__NotSupportedOperatingSystemOutOfDate                               = 4,
	UDLSSSupport__NotSupportedByPlatformAtBuildTime                                  = 5,
	UDLSSSupport__NotSupportedIncompatibleAPICaptureToolActive                       = 6,
	UDLSSSupport__UDLSSSupport_MAX                                                   = 7
};

/// Enum /Script/DLSSBlueprint.UDLSSMode
/// Size: 0x08
enum class UDLSSMode : uint8_t
{
	UDLSSMode__Off                                                                   = 0,
	UDLSSMode__Auto                                                                  = 1,
	UDLSSMode__UltraQuality                                                          = 2,
	UDLSSMode__Quality                                                               = 3,
	UDLSSMode__Balanced                                                              = 4,
	UDLSSMode__Performance                                                           = 5,
	UDLSSMode__UltraPerformance                                                      = 6,
	UDLSSMode__UDLSSMode_MAX                                                         = 7
};

