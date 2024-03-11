
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine

/// Enum /Script/EyeTracker.EEyeTrackerStatus
/// Size: 0x04
enum class EEyeTrackerStatus : uint8_t
{
	EEyeTrackerStatus__NotConnected                                                  = 0,
	EEyeTrackerStatus__NotTracking                                                   = 1,
	EEyeTrackerStatus__Tracking                                                      = 2,
	EEyeTrackerStatus__EEyeTrackerStatus_MAX                                         = 3
};

/// Class /Script/EyeTracker.EyeTrackerFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UEyeTrackerFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/EyeTracker.EyeTrackerFunctionLibrary.SetEyeTrackedPlayer
	// void SetEyeTrackedPlayer(class APlayerController* PlayerController);                                                  // [0x5f9bed8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/EyeTracker.EyeTrackerFunctionLibrary.IsStereoGazeDataAvailable
	// bool IsStereoGazeDataAvailable();                                                                                     // [0x5f9be94] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/EyeTracker.EyeTrackerFunctionLibrary.IsEyeTrackerConnected
	// bool IsEyeTrackerConnected();                                                                                         // [0x5f9be48] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/EyeTracker.EyeTrackerFunctionLibrary.GetStereoGazeData
	// bool GetStereoGazeData(FEyeTrackerStereoGazeData& OutGazeData);                                                       // [0x5f9bdb0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EyeTracker.EyeTrackerFunctionLibrary.GetGazeData
	// bool GetGazeData(FEyeTrackerGazeData& OutGazeData);                                                                   // [0x5f9bcb8] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/EyeTracker.EyeTrackerGazeData
/// Size: 0x0058 (0x000000 - 0x000058)
struct FEyeTrackerGazeData
{ 
	FVector                                            GazeOrigin;                                                 // 0x0000   (0x0018)  
	FVector                                            GazeDirection;                                              // 0x0018   (0x0018)  
	FVector                                            FixationPoint;                                              // 0x0030   (0x0018)  
	float                                              ConfidenceValue;                                            // 0x0048   (0x0004)  
	bool                                               bIsLeftEyeBlink;                                            // 0x004C   (0x0001)  
	bool                                               bIsRightEyeBlink;                                           // 0x004D   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x004E   (0x0002)  MISSED
	float                                              LeftPupilDiameter;                                          // 0x0050   (0x0004)  
	float                                              RightPupilDiameter;                                         // 0x0054   (0x0004)  
};

/// Struct /Script/EyeTracker.EyeTrackerStereoGazeData
/// Size: 0x0080 (0x000000 - 0x000080)
struct FEyeTrackerStereoGazeData
{ 
	FVector                                            LeftEyeOrigin;                                              // 0x0000   (0x0018)  
	FVector                                            LeftEyeDirection;                                           // 0x0018   (0x0018)  
	FVector                                            RightEyeOrigin;                                             // 0x0030   (0x0018)  
	FVector                                            RightEyeDirection;                                          // 0x0048   (0x0018)  
	FVector                                            FixationPoint;                                              // 0x0060   (0x0018)  
	float                                              ConfidenceValue;                                            // 0x0078   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x007C   (0x0004)  MISSED
};

