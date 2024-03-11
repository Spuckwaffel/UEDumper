
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/EyeTracker.EyeTrackerFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UEyeTrackerFunctionLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/EyeTracker.EyeTrackerFunctionLibrary.SetEyeTrackedPlayer
	// void SetEyeTrackedPlayer(class APlayerController* PlayerController);                                                     // [0x5f9bed8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/EyeTracker.EyeTrackerFunctionLibrary.IsStereoGazeDataAvailable
	// bool IsStereoGazeDataAvailable();                                                                                        // [0x5f9be94] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/EyeTracker.EyeTrackerFunctionLibrary.IsEyeTrackerConnected
	// bool IsEyeTrackerConnected();                                                                                            // [0x5f9be48] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/EyeTracker.EyeTrackerFunctionLibrary.GetStereoGazeData
	// bool GetStereoGazeData(FEyeTrackerStereoGazeData& OutGazeData);                                                          // [0x5f9bdb0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EyeTracker.EyeTrackerFunctionLibrary.GetGazeData
	// bool GetGazeData(FEyeTrackerGazeData& OutGazeData);                                                                      // [0x5f9bcb8] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/EyeTracker.EyeTrackerGazeData
/// Size: 0x0058 (0x000000 - 0x000058)
class FEyeTrackerGazeData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FVector)                                   GazeOrigin                                                  OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FVector)                                   GazeDirection                                               OFFSET(getStruct<T>, {0x18, 24, 0, 0})
	SMember(FVector)                                   FixationPoint                                               OFFSET(getStruct<T>, {0x30, 24, 0, 0})
	DMember(float)                                     ConfidenceValue                                             OFFSET(get<float>, {0x48, 4, 0, 0})
	DMember(bool)                                      bIsLeftEyeBlink                                             OFFSET(get<bool>, {0x4C, 1, 0, 0})
	DMember(bool)                                      bIsRightEyeBlink                                            OFFSET(get<bool>, {0x4D, 1, 0, 0})
	DMember(float)                                     LeftPupilDiameter                                           OFFSET(get<float>, {0x50, 4, 0, 0})
	DMember(float)                                     RightPupilDiameter                                          OFFSET(get<float>, {0x54, 4, 0, 0})
};

/// Struct /Script/EyeTracker.EyeTrackerStereoGazeData
/// Size: 0x0080 (0x000000 - 0x000080)
class FEyeTrackerStereoGazeData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FVector)                                   LeftEyeOrigin                                               OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FVector)                                   LeftEyeDirection                                            OFFSET(getStruct<T>, {0x18, 24, 0, 0})
	SMember(FVector)                                   RightEyeOrigin                                              OFFSET(getStruct<T>, {0x30, 24, 0, 0})
	SMember(FVector)                                   RightEyeDirection                                           OFFSET(getStruct<T>, {0x48, 24, 0, 0})
	SMember(FVector)                                   FixationPoint                                               OFFSET(getStruct<T>, {0x60, 24, 0, 0})
	DMember(float)                                     ConfidenceValue                                             OFFSET(get<float>, {0x78, 4, 0, 0})
};

/// Enum /Script/EyeTracker.EEyeTrackerStatus
/// Size: 0x04
enum class EEyeTrackerStatus : uint8_t
{
	EEyeTrackerStatus__NotConnected                                                  = 0,
	EEyeTrackerStatus__NotTracking                                                   = 1,
	EEyeTrackerStatus__Tracking                                                      = 2,
	EEyeTrackerStatus__EEyeTrackerStatus_MAX                                         = 3
};

