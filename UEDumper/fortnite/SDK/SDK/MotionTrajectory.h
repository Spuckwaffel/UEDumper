
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: PoseSearch

/// Struct /Script/MotionTrajectory.TrajectorySamplingData
/// Size: 0x0020 (0x000000 - 0x000020)
struct FTrajectorySamplingData
{ 
	float                                              HistoryLengthSeconds;                                       // 0x0000   (0x0004)  
	int32_t                                            HistorySamplesPerSecond;                                    // 0x0004   (0x0004)  
	float                                              PredictionLengthSeconds;                                    // 0x0008   (0x0004)  
	int32_t                                            PredictionSamplesPerSecond;                                 // 0x000C   (0x0004)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0010   (0x0010)  MISSED
};

/// Struct /Script/MotionTrajectory.CharacterTrajectoryData
/// Size: 0x01E0 (0x000000 - 0x0001E0)
struct FCharacterTrajectoryData
{ 
	float                                              RotateTowardsMovementSpeed;                                 // 0x0000   (0x0004)  
	float                                              MaxControllerYawRate;                                       // 0x0004   (0x0004)  
	float                                              BendVelocityTowardsAcceleration;                            // 0x0008   (0x0004)  
	bool                                               bUseSpeedRemappingCurve;                                    // 0x000C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x000D   (0x0003)  MISSED
	FRuntimeFloatCurve                                 SpeedRemappingCurve;                                        // 0x0010   (0x0088)  
	bool                                               bUseAccelerationRemappingCurve;                             // 0x0098   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0099   (0x0007)  MISSED
	FRuntimeFloatCurve                                 AccelerationRemappingCurve;                                 // 0x00A0   (0x0088)  
	unsigned char                                      UnknownData02_6[0xB8];                                      // 0x0128   (0x00B8)  MISSED
};

/// Class /Script/MotionTrajectory.CharacterTrajectoryComponent
/// Size: 0x0230 (0x0000A0 - 0x0002D0)
class UCharacterTrajectoryComponent : public UActorComponent
{ 
public:
	FPoseSearchQueryTrajectory                         Trajectory;                                                 // 0x00A0   (0x0010)  
	FTrajectorySamplingData                            SamplingData;                                               // 0x00B0   (0x0020)  
	FCharacterTrajectoryData                           CharacterTrajectoryData;                                    // 0x00D0   (0x01E0)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x02B0   (0x0020)  MISSED


	/// Functions
	// Function /Script/MotionTrajectory.CharacterTrajectoryComponent.OnMovementUpdated
	// void OnMovementUpdated(float DeltaSeconds, FVector OldLocation, FVector OldVelocity);                                 // [0xa97e568] Final|Native|Protected|HasDefaults 
};

/// Struct /Script/MotionTrajectory.MotionTrajectorySettings
/// Size: 0x0004 (0x000000 - 0x000004)
struct FMotionTrajectorySettings
{ 
	float                                              Seconds;                                                    // 0x0000   (0x0004)  
};

