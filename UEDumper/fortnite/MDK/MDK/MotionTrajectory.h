
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: PoseSearch

/// Class /Script/MotionTrajectory.CharacterTrajectoryComponent
/// Size: 0x0230 (0x0000A0 - 0x0002D0)
class UCharacterTrajectoryComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 720;

public:
	SMember(FPoseSearchQueryTrajectory)                Trajectory                                                  OFFSET(getStruct<T>, {0xA0, 16, 0, 0})
	SMember(FTrajectorySamplingData)                   SamplingData                                                OFFSET(getStruct<T>, {0xB0, 32, 0, 0})
	SMember(FCharacterTrajectoryData)                  CharacterTrajectoryData                                     OFFSET(getStruct<T>, {0xD0, 480, 0, 0})


	/// Functions
	// Function /Script/MotionTrajectory.CharacterTrajectoryComponent.OnMovementUpdated
	// void OnMovementUpdated(float DeltaSeconds, FVector OldLocation, FVector OldVelocity);                                    // [0xbd3f8e0] Final|Native|Protected|HasDefaults 
};

/// Struct /Script/MotionTrajectory.MotionTrajectorySettings
/// Size: 0x0004 (0x000000 - 0x000004)
class FMotionTrajectorySettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(float)                                     Seconds                                                     OFFSET(get<float>, {0x0, 4, 0, 0})
};

/// Struct /Script/MotionTrajectory.TrajectorySamplingData
/// Size: 0x0020 (0x000000 - 0x000020)
class FTrajectorySamplingData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(float)                                     HistoryLengthSeconds                                        OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   HistorySamplesPerSecond                                     OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(float)                                     PredictionLengthSeconds                                     OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   PredictionSamplesPerSecond                                  OFFSET(get<int32_t>, {0xC, 4, 0, 0})
};

/// Struct /Script/MotionTrajectory.CharacterTrajectoryData
/// Size: 0x01E0 (0x000000 - 0x0001E0)
class FCharacterTrajectoryData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 480;

public:
	DMember(float)                                     RotateTowardsMovementSpeed                                  OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     MaxControllerYawRate                                        OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     BendVelocityTowardsAcceleration                             OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(bool)                                      bUseSpeedRemappingCurve                                     OFFSET(get<bool>, {0xC, 1, 0, 0})
	SMember(FRuntimeFloatCurve)                        SpeedRemappingCurve                                         OFFSET(getStruct<T>, {0x10, 136, 0, 0})
	DMember(bool)                                      bUseAccelerationRemappingCurve                              OFFSET(get<bool>, {0x98, 1, 0, 0})
	SMember(FRuntimeFloatCurve)                        AccelerationRemappingCurve                                  OFFSET(getStruct<T>, {0xA0, 136, 0, 0})
};

