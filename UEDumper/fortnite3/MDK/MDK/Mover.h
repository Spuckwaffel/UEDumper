
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: AnimGraphRuntime
/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine
/// dependency: NetworkPrediction

/// Class /Script/Mover.AirMovementUtils
/// Size: 0x0000 (0x000028 - 0x000028)
class UAirMovementUtils : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/Mover.AirMovementUtils.TryMoveToFallAlongSurface
	// float TryMoveToFallAlongSurface(class USceneComponent* UpdatedComponent, class UPrimitiveComponent* UpdatedPrimitive, class UMoverComponent* MoverComponent, FVector& Delta, float PctOfDeltaToMove, FQuat Rotation, FVector& Normal, FHitResult& Hit, bool bHandleImpact, float FloorSweepDistance, float MaxWalkSlopeCosine, FFloorCheckResult& OutFloorResult, FMovementRecord& MoveRecord); // [0x885b240] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Mover.AirMovementUtils.IsValidLandingSpot
	// bool IsValidLandingSpot(class USceneComponent* UpdatedComponent, class UPrimitiveComponent* UpdatedPrimitive, FVector& Location, FHitResult& Hit, float FloorSweepDistance, float MaxWalkSlopeCosine, FFloorCheckResult& OutFloorResult); // [0x885ad34] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Mover.AirMovementUtils.ComputeControlledFreeMove
	// FProposedMove ComputeControlledFreeMove(FFreeMoveParams& InParams);                                                      // [0x8859fac] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/Mover.MoverComponent
/// Size: 0x0270 (0x0000A0 - 0x000310)
class UMoverComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 784;

public:
	SMember(FMulticastInlineDelegate)                  OnPreSimulationTick                                         OFFSET(getStruct<T>, {0xA0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPostMovement                                              OFFSET(getStruct<T>, {0xB0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPostSimulationTick                                        OFFSET(getStruct<T>, {0xC0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPostSimulationRollback                                    OFFSET(getStruct<T>, {0xD0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnMovementModeChanged                                       OFFSET(getStruct<T>, {0xE0, 16, 0, 0})
	CMember(class UClass*)                             BackendClass                                                OFFSET(get<T>, {0xF0, 8, 0, 0})
	CMember(TMap<FName, UBaseMovementMode*>)           MovementModes                                               OFFSET(get<T>, {0xF8, 80, 0, 0})
	SMember(FName)                                     StartingMovementMode                                        OFFSET(getStruct<T>, {0x148, 4, 0, 0})
	CMember(TArray<class UBaseMovementModeTransition*>) Transitions                                                OFFSET(get<T>, {0x150, 16, 0, 0})
	CMember(TArray<FMoverDataPersistence>)             PersistentSyncStateDataTypes                                OFFSET(get<T>, {0x160, 16, 0, 0})
	CMember(class UObject*)                            InputProducer                                               OFFSET(get<T>, {0x170, 8, 0, 0})
	CMember(class UMovementMixer*)                     MovementMixer                                               OFFSET(get<T>, {0x178, 8, 0, 0})
	CMember(class USceneComponent*)                    UpdatedComponent                                            OFFSET(get<T>, {0x188, 8, 0, 0})
	CMember(class UPrimitiveComponent*)                UpdatedCompAsPrimitive                                      OFFSET(get<T>, {0x190, 8, 0, 0})
	CMember(class USceneComponent*)                    PrimaryVisualComponent                                      OFFSET(get<T>, {0x198, 8, 0, 0})
	CMember(TArray<class UObject*>)                    SharedSettings                                              OFFSET(get<T>, {0x2C8, 16, 0, 0})
	DMember(bool)                                      bHasGravityOverride                                         OFFSET(get<bool>, {0x2D8, 1, 0, 0})
	SMember(FVector)                                   GravityAccelOverride                                        OFFSET(getStruct<T>, {0x2E0, 24, 0, 0})
	DMember(bool)                                      bSupportsKinematicBasedMovement                             OFFSET(get<bool>, {0x2F8, 1, 0, 0})
	CMember(class UMovementModeStateMachine*)          ModeFSM                                                     OFFSET(get<T>, {0x300, 8, 0, 0})
	CMember(class UMoverBlackboard*)                   SimBlackboard                                               OFFSET(get<T>, {0x308, 8, 0, 0})


	/// Functions
	// Function /Script/Mover.MoverComponent.TryGetFloorCheckHitResult
	// bool TryGetFloorCheckHitResult(FHitResult& OutHitResult);                                                                // [0x88a2830] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Mover.MoverComponent.SetGravityOverride
	// void SetGravityOverride(bool bOverrideGravity, FVector GravityAcceleration);                                             // [0x88a0b48] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Mover.MoverComponent.RemoveMovementMode
	// bool RemoveMovementMode(FName ModeName);                                                                                 // [0x88a09f4] Final|Native|Public|BlueprintCallable 
	// Function /Script/Mover.MoverComponent.QueueNextMode
	// void QueueNextMode(FName DesiredModeName, bool bShouldReenter);                                                          // [0x88a07b8] Final|Native|Public|BlueprintCallable 
	// Function /Script/Mover.MoverComponent.PhysicsVolumeChanged
	// void PhysicsVolumeChanged(class APhysicsVolume* NewVolume);                                                              // [0x6e87c98] Native|Protected     
	// Function /Script/Mover.MoverComponent.OnBeginOverlap
	// void OnBeginOverlap(class UPrimitiveComponent* OverlappedComp, class AActor* Other, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x88a043c] Native|Public|HasOutParms 
	// Function /Script/Mover.MoverComponent.K2_QueueLayeredMove
	// void K2_QueueLayeredMove(int32_t& MoveAsRawData);                                                                        // [0x88a0334] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Mover.MoverComponent.K2_FindActiveLayeredMove
	// void K2_FindActiveLayeredMove(bool& DidSucceed, int32_t& TargetAsRawBytes);                                              // [0x889f7e4] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Mover.MoverComponent.HasValidCachedState
	// bool HasValidCachedState();                                                                                              // [0x889efb4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Mover.MoverComponent.HasValidCachedInputCmd
	// bool HasValidCachedInputCmd();                                                                                           // [0x889ef9c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Mover.MoverComponent.HandleImpact
	// void HandleImpact(FMoverOnImpactParams& ImpactParams);                                                                   // [0x889ef04] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Mover.MoverComponent.GetVelocity
	// FVector GetVelocity();                                                                                                   // [0x889eecc] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Mover.MoverComponent.GetUpDirection
	// FVector GetUpDirection();                                                                                                // [0x889ee94] Final|Native|Public|HasDefaults|BlueprintCallable|Const 
	// Function /Script/Mover.MoverComponent.GetTargetOrientation
	// FRotator GetTargetOrientation();                                                                                         // [0x889ee5c] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Mover.MoverComponent.GetSyncState
	// FMoverSyncState GetSyncState();                                                                                          // [0x889ee30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Mover.MoverComponent.GetSimBlackboard
	// class UMoverBlackboard* GetSimBlackboard();                                                                              // [0x3ea2334] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Mover.MoverComponent.GetMovementModeName
	// FName GetMovementModeName();                                                                                             // [0x889ee08] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Mover.MoverComponent.GetMovementIntent
	// FVector GetMovementIntent();                                                                                             // [0x889edd0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Mover.MoverComponent.GetMovementBaseBoneName
	// FName GetMovementBaseBoneName();                                                                                         // [0x889eacc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Mover.MoverComponent.GetMovementBase
	// class UPrimitiveComponent* GetMovementBase();                                                                            // [0x889ea84] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Mover.MoverComponent.GetLastInputCmd
	// FMoverInputCmdContext GetLastInputCmd();                                                                                 // [0x889ea58] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Mover.MoverComponent.GetGravityAcceleration
	// FVector GetGravityAcceleration();                                                                                        // [0x889ea20] Final|Native|Public|HasDefaults|BlueprintCallable|Const 
	// Function /Script/Mover.MoverComponent.GetFutureTrajectory
	// TArray<FTrajectorySampleInfo> GetFutureTrajectory(float FutureSeconds, float SamplesPerSecond);                          // [0x889e944] Final|Native|Public|BlueprintCallable|Const 
	// Function /Script/Mover.MoverComponent.FindSharedSettings_Mutable_BP
	// class UObject* FindSharedSettings_Mutable_BP(class UClass* SharedSetting);                                               // [0x889e818] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Mover.MoverComponent.FindSharedSettings_BP
	// class UObject* FindSharedSettings_BP(class UClass* SharedSetting);                                                       // [0x889e818] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Mover.MoverComponent.FindMovementMode
	// class UBaseMovementMode* FindMovementMode(class UClass* MovementMode);                                                   // [0x889e774] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Mover.MoverComponent.AddMovementModeFromObject
	// bool AddMovementModeFromObject(FName ModeName, class UBaseMovementMode* MovementMode);                                   // [0x889d3b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Mover.MoverComponent.AddMovementModeFromClass
	// class UBaseMovementMode* AddMovementModeFromClass(FName ModeName, class UClass* MovementMode);                           // [0x889d160] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/Mover.CharacterMoverComponent
/// Size: 0x0000 (0x000310 - 0x000310)
class UCharacterMoverComponent : public UMoverComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 784;

public:


	/// Functions
	// Function /Script/Mover.CharacterMoverComponent.IsSlopeSliding
	// bool IsSlopeSliding();                                                                                                   // [0x885ad0c] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Mover.CharacterMoverComponent.IsOnGround
	// bool IsOnGround();                                                                                                       // [0x885ace4] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Mover.CharacterMoverComponent.IsFalling
	// bool IsFalling();                                                                                                        // [0x885ab4c] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Mover.CharacterMoverComponent.IsAirborne
	// bool IsAirborne();                                                                                                       // [0x885ab24] Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/Mover.CommonLegacyMovementSettings
/// Size: 0x0058 (0x000028 - 0x000080)
class UCommonLegacyMovementSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FName)                                     GroundMovementModeName                                      OFFSET(getStruct<T>, {0x30, 4, 0, 0})
	SMember(FName)                                     AirMovementModeName                                         OFFSET(getStruct<T>, {0x34, 4, 0, 0})
	DMember(float)                                     MaxWalkSlopeCosine                                          OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     FloorSweepDistance                                          OFFSET(get<float>, {0x3C, 4, 0, 0})
	DMember(float)                                     MaxStepHeight                                               OFFSET(get<float>, {0x40, 4, 0, 0})
	DMember(float)                                     MaxSpeed                                                    OFFSET(get<float>, {0x44, 4, 0, 0})
	DMember(float)                                     GroundFriction                                              OFFSET(get<float>, {0x48, 4, 0, 0})
	DMember(bool)                                      bUseSeparateBrakingFriction                                 OFFSET(get<bool>, {0x4C, 1, 1, 0})
	DMember(float)                                     BrakingFriction                                             OFFSET(get<float>, {0x50, 4, 0, 0})
	DMember(float)                                     BrakingFrictionFactor                                       OFFSET(get<float>, {0x54, 4, 0, 0})
	DMember(float)                                     Deceleration                                                OFFSET(get<float>, {0x58, 4, 0, 0})
	DMember(float)                                     Acceleration                                                OFFSET(get<float>, {0x5C, 4, 0, 0})
	DMember(float)                                     TurningRate                                                 OFFSET(get<float>, {0x60, 4, 0, 0})
	DMember(float)                                     TurningBoost                                                OFFSET(get<float>, {0x64, 4, 0, 0})
	DMember(bool)                                      bIgnoreBaseRotation                                         OFFSET(get<bool>, {0x68, 1, 0, 0})
	DMember(float)                                     JumpUpwardsSpeed                                            OFFSET(get<float>, {0x6C, 4, 0, 0})
	DMember(float)                                     SwimmingStartImmersionDepth                                 OFFSET(get<float>, {0x70, 4, 0, 0})
	DMember(float)                                     SwimmingIdealImmersionDepth                                 OFFSET(get<float>, {0x74, 4, 0, 0})
	DMember(float)                                     SwimmingStopImmersionDepth                                  OFFSET(get<float>, {0x78, 4, 0, 0})
};

/// Class /Script/Mover.FloorQueryUtils
/// Size: 0x0000 (0x000028 - 0x000028)
class UFloorQueryUtils : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/Mover.FloorQueryUtils.IsHitSurfaceWalkable
	// bool IsHitSurfaceWalkable(FHitResult& Hit, float MaxWalkSlopeCosine);                                                    // [0x885ab74] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/Mover.GroundMovementUtils
/// Size: 0x0000 (0x000028 - 0x000028)
class UGroundMovementUtils : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/Mover.GroundMovementUtils.TryWalkToSlideAlongSurface
	// float TryWalkToSlideAlongSurface(class USceneComponent* UpdatedComponent, class UPrimitiveComponent* UpdatedPrimitive, class UMoverComponent* MoverComponent, FVector& Delta, float PctOfDeltaToMove, FQuat Rotation, FVector& Normal, FHitResult& Hit, bool bHandleImpact, FMovementRecord& MoveRecord, float MaxWalkSlopeCosine, float MaxStepHeight); // [0x885be68] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Mover.GroundMovementUtils.ComputeDeflectedMoveOntoRamp
	// FVector ComputeDeflectedMoveOntoRamp(FVector& OrigMoveDelta, FHitResult& RampHitResult, float MaxWalkSlopeCosine, bool bHitFromLineTrace); // [0x885a184] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Mover.GroundMovementUtils.ComputeControlledGroundMove
	// FProposedMove ComputeControlledGroundMove(FGroundMoveParams& InParams);                                                  // [0x885a098] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Mover.GroundMovementUtils.CanStepUpOnHitSurface
	// bool CanStepUpOnHitSurface(FHitResult& Hit);                                                                             // [0x8859ed8] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/Mover.TurnGeneratorInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UTurnGeneratorInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/Mover.TurnGeneratorInterface.GetTurn
	// FRotator GetTurn(FRotator TargetOrientation, FMoverTickStartData& FullStartState, FMoverDefaultSyncState& MoverState, FMoverTimeStep& TimeStep, FProposedMove& ProposedMove, class UMoverBlackboard* SimBlackboard); // [0x885a714] Native|Event|Public|HasOutParms|HasDefaults|BlueprintEvent 
};

/// Class /Script/Mover.LinearTurnGenerator
/// Size: 0x0018 (0x000028 - 0x000040)
class ULinearTurnGenerator : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(float)                                     HeadingRate                                                 OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(float)                                     PitchRate                                                   OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     RollRate                                                    OFFSET(get<float>, {0x38, 4, 0, 0})
};

/// Class /Script/Mover.ExactDampedTurnGenerator
/// Size: 0x0010 (0x000028 - 0x000038)
class UExactDampedTurnGenerator : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(float)                                     HalfLifeSeconds                                             OFFSET(get<float>, {0x30, 4, 0, 0})
};

/// Class /Script/Mover.BlueprintableTurnGenerator
/// Size: 0x0008 (0x000028 - 0x000030)
class UBlueprintableTurnGenerator : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/Mover.MovementMixer
/// Size: 0x0008 (0x000028 - 0x000030)
class UMovementMixer : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/Mover.MoverBackendLiaisonInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UMoverBackendLiaisonInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/Mover.MoverBlackboard
/// Size: 0x0050 (0x000028 - 0x000078)
class UMoverBlackboard : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
};

/// Class /Script/Mover.MoverDataModelBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UMoverDataModelBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/Mover.MoverDataModelBlueprintLibrary.SetMoveIntent
	// void SetMoveIntent(FCharacterDefaultInputs& Inputs, FVector& WorldDirectionIntent);                                      // [0x885b064] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Mover.MoverDataModelBlueprintLibrary.GetVelocityFromSyncState
	// FVector GetVelocityFromSyncState(FMoverDefaultSyncState& SyncState);                                                     // [0x885aa74] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Mover.MoverDataModelBlueprintLibrary.GetOrientationFromSyncState
	// FRotator GetOrientationFromSyncState(FMoverDefaultSyncState& SyncState);                                                 // [0x885a664] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Mover.MoverDataModelBlueprintLibrary.GetMoveDirectionIntentFromSyncState
	// FVector GetMoveDirectionIntentFromSyncState(FMoverDefaultSyncState& SyncState);                                          // [0x885a5b4] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Mover.MoverDataModelBlueprintLibrary.GetMoveDirectionIntentFromInputs
	// FVector GetMoveDirectionIntentFromInputs(FCharacterDefaultInputs& Inputs);                                               // [0x885a4cc] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Mover.MoverDataModelBlueprintLibrary.GetLocationFromSyncState
	// FVector GetLocationFromSyncState(FMoverDefaultSyncState& SyncState);                                                     // [0x885a41c] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/Mover.MoverDebugComponent
/// Size: 0x0078 (0x0000A0 - 0x000118)
class UMoverDebugComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 280;

public:
	DMember(float)                                     LookaheadSeconds                                            OFFSET(get<float>, {0xA0, 4, 0, 0})
	DMember(int32_t)                                   LookaheadSamplesPerSecond                                   OFFSET(get<int32_t>, {0xA4, 4, 0, 0})
	DMember(bool)                                      bShowTrajectory                                             OFFSET(get<bool>, {0xA8, 1, 0, 0})
	DMember(bool)                                      bShowTrail                                                  OFFSET(get<bool>, {0xA9, 1, 0, 0})
	DMember(bool)                                      bShowCorrections                                            OFFSET(get<bool>, {0xAA, 1, 0, 0})
	DMember(float)                                     HistoryTrackingSeconds                                      OFFSET(get<float>, {0xAC, 4, 0, 0})
	DMember(int32_t)                                   HistorySamplesPerSecond                                     OFFSET(get<int32_t>, {0xB0, 4, 0, 0})


	/// Functions
	// Function /Script/Mover.MoverDebugComponent.SetHistoryTracking
	// void SetHistoryTracking(float SecondsToTrack, float SamplesPerSecond);                                                   // [0x8878118] Final|Native|Public|BlueprintCallable 
	// Function /Script/Mover.MoverDebugComponent.OnMovementSimTick
	// void OnMovementSimTick(FMoverTimeStep& TimeStep);                                                                        // [0x8877bbc] Final|Native|Private|HasOutParms 
	// Function /Script/Mover.MoverDebugComponent.OnMovementSimRollback
	// void OnMovementSimRollback(FMoverTimeStep& NewTimeStep, FMoverTimeStep& InvalidatedTimeStep);                            // [0x8877aac] Final|Native|Private|HasOutParms 
	// Function /Script/Mover.MoverDebugComponent.OnHistoryTrackingRollback
	// void OnHistoryTrackingRollback(FMoverTimeStep& NewTimeStep, FMoverTimeStep& InvalidatedTimeStep);                        // [0x887799c] Final|Native|Protected|HasOutParms 
	// Function /Script/Mover.MoverDebugComponent.GetPastTrajectory
	// TArray<FTrajectorySampleInfo> GetPastTrajectory();                                                                       // [0x887770c] Final|Native|Public|BlueprintCallable|Const 
};

/// Class /Script/Mover.MoverDeveloperSettings
/// Size: 0x0008 (0x000030 - 0x000038)
class UMoverDeveloperSettings : public UDeveloperSettingsBackedByCVars
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(int32_t)                                   MaxTimesToRefundSubstep                                     OFFSET(get<int32_t>, {0x30, 4, 0, 0})
};

/// Class /Script/Mover.MoverNetworkPhysicsLiaisonComponent
/// Size: 0x0130 (0x0000A0 - 0x0001D0)
class UMoverNetworkPhysicsLiaisonComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 464;

public:


	/// Functions
	// Function /Script/Mover.MoverNetworkPhysicsLiaisonComponent.OnComponentPhysicsStateChanged
	// void OnComponentPhysicsStateChanged(class UPrimitiveComponent* ChangedComponent, EComponentPhysicsStateChange StateChange); // [0x8877760] Final|Native|Protected 
};

/// Class /Script/Mover.MoverNetworkPredictionLiaisonComponent
/// Size: 0x0020 (0x000290 - 0x0002B0)
class UMoverNetworkPredictionLiaisonComponent : public UNetworkPredictionComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 688;

public:
};

/// Class /Script/Mover.MoverInputProducerInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UMoverInputProducerInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/Mover.MoverInputProducerInterface.ProduceInput
	// void ProduceInput(int32_t SimTimeMs, FMoverInputCmdContext& InputCmdResult);                                             // [0x887802c] Native|Event|Public|HasOutParms|BlueprintEvent 
};

/// Class /Script/Mover.MoverDataCollectionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UMoverDataCollectionLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/Mover.MoverDataCollectionLibrary.K2_GetDataFromCollection
	// void K2_GetDataFromCollection(bool& DidSucceed, FMoverDataCollection& Collection, int32_t& TargetAsRawBytes);            // [0x889fa44] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Mover.MoverDataCollectionLibrary.K2_AddDataToCollection
	// void K2_AddDataToCollection(FMoverDataCollection& Collection, int32_t& SourceAsRawBytes);                                // [0x889f254] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Mover.MoverDataCollectionLibrary.ClearDataFromCollection
	// void ClearDataFromCollection(FMoverDataCollection& Collection);                                                          // [0x8877578] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/Mover.BaseMovementModeTransition
/// Size: 0x0008 (0x000028 - 0x000030)
class UBaseMovementModeTransition : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:


	/// Functions
	// Function /Script/Mover.BaseMovementModeTransition.K2_OnTrigger
	// void K2_OnTrigger(FSimulationTickParams& Params);                                                                        // [0x1340978] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/Mover.BaseMovementModeTransition.K2_OnEvaluate
	// FTransitionEvalResult K2_OnEvaluate(FSimulationTickParams& Params);                                                      // [0x1340978] Event|Protected|HasOutParms|BlueprintEvent|Const 
};

/// Class /Script/Mover.PhysicsJumpCheck
/// Size: 0x0008 (0x000030 - 0x000038)
class UPhysicsJumpCheck : public UBaseMovementModeTransition
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(float)                                     JumpUpwardsSpeed                                            OFFSET(get<float>, {0x30, 4, 0, 0})
	SMember(FName)                                     TransitionToMode                                            OFFSET(getStruct<T>, {0x34, 4, 0, 0})
};

/// Class /Script/Mover.PhysicsCharacterMovementModeInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UPhysicsCharacterMovementModeInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/Mover.WaterMovementUtils
/// Size: 0x0000 (0x000028 - 0x000028)
class UWaterMovementUtils : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/Mover.WaterMovementUtils.UpdateWaterSplineData
	// void UpdateWaterSplineData(FUpdateWaterSplineDataParams& UpdateWaterSplineDataParams, FWaterCheckResult& OutWaterResult); // [0x88782c8] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Mover.WaterMovementUtils.ComputeControlledWaterMove
	// FProposedMove ComputeControlledWaterMove(FWaterMoveParams& InParams);                                                    // [0x8877620] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/Mover.BaseMovementMode
/// Size: 0x0020 (0x000028 - 0x000048)
class UBaseMovementMode : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(class UClass*)                             SharedSettingsClass                                         OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(TArray<class UBaseMovementModeTransition*>) Transitions                                                OFFSET(get<T>, {0x30, 16, 0, 0})


	/// Functions
	// Function /Script/Mover.BaseMovementMode.K2_OnUnregistered
	// void K2_OnUnregistered();                                                                                                // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Script/Mover.BaseMovementMode.K2_OnSimulationTick
	// FMoverTickEndData K2_OnSimulationTick(FSimulationTickParams& Params);                                                    // [0x1340978] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/Mover.BaseMovementMode.K2_OnRegistered
	// void K2_OnRegistered(FName ModeName);                                                                                    // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Script/Mover.BaseMovementMode.K2_OnGenerateMove
	// FProposedMove K2_OnGenerateMove(FMoverTickStartData& StartState, FMoverTimeStep& TimeStep);                              // [0x1340978] Event|Protected|HasOutParms|BlueprintEvent|Const 
	// Function /Script/Mover.BaseMovementMode.GetMoverComponent
	// class UMoverComponent* GetMoverComponent();                                                                              // [0x133f4ac] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Mover.BaseMovementMode.GetBlackboard_Mutable
	// class UMoverBlackboard* GetBlackboard_Mutable();                                                                         // [0x889e924] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Mover.BaseMovementMode.GetBlackboard
	// class UMoverBlackboard* GetBlackboard();                                                                                 // [0x889e924] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/Mover.FallingMode
/// Size: 0x0038 (0x000048 - 0x000080)
class UFallingMode : public UBaseMovementMode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FMulticastInlineDelegate)                  OnLanded                                                    OFFSET(getStruct<T>, {0x48, 16, 0, 0})
	DMember(float)                                     AirControlPercentage                                        OFFSET(get<float>, {0x58, 4, 0, 0})
	DMember(float)                                     FallingDeceleration                                         OFFSET(get<float>, {0x5C, 4, 0, 0})
	DMember(float)                                     OverTerminalSpeedFallingDeceleration                        OFFSET(get<float>, {0x60, 4, 0, 0})
	DMember(float)                                     TerminalMovementPlaneSpeed                                  OFFSET(get<float>, {0x64, 4, 0, 0})
	DMember(bool)                                      bShouldClampTerminalVerticalSpeed                           OFFSET(get<bool>, {0x68, 1, 0, 0})
	DMember(float)                                     VerticalFallingDeceleration                                 OFFSET(get<float>, {0x6C, 4, 0, 0})
	DMember(float)                                     TerminalVerticalSpeed                                       OFFSET(get<float>, {0x70, 4, 0, 0})


	/// Functions
	// Function /Script/Mover.FallingMode.ProcessLanded
	// void ProcessLanded(FFloorCheckResult& FloorResult, FVector& Velocity, FRelativeBaseInfo& BaseInfo, FMoverTickEndData& TickEndData); // [0x8877d7c] Native|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Mover.FallingMode.OnSimulationTick
	// void OnSimulationTick(FSimulationTickParams& Params, FMoverTickEndData& OutputState);                                    // [0x8877c58] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Mover.FallingMode.OnGenerateMove
	// void OnGenerateMove(FMoverTickStartData& StartState, FMoverTimeStep& TimeStep, FProposedMove& OutProposedMove);          // [0x8877824] Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/Mover.FlyingMode
/// Size: 0x0008 (0x000048 - 0x000050)
class UFlyingMode : public UBaseMovementMode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:


	/// Functions
	// Function /Script/Mover.FlyingMode.OnSimulationTick
	// void OnSimulationTick(FSimulationTickParams& Params, FMoverTickEndData& OutputState);                                    // [0x8877c58] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Mover.FlyingMode.OnGenerateMove
	// void OnGenerateMove(FMoverTickStartData& StartState, FMoverTimeStep& TimeStep, FProposedMove& OutProposedMove);          // [0x8877824] Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/Mover.SwimmingMode
/// Size: 0x00B0 (0x000048 - 0x0000F8)
class USwimmingMode : public UBaseMovementMode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
	SMember(FSwimmingControlSettings)                  SurfaceSwimmingWaterControlSettings                         OFFSET(getStruct<T>, {0x48, 168, 0, 0})


	/// Functions
	// Function /Script/Mover.SwimmingMode.OnSimulationTick
	// void OnSimulationTick(FSimulationTickParams& Params, FMoverTickEndData& OutputState);                                    // [0x8877c58] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Mover.SwimmingMode.OnGenerateMove
	// void OnGenerateMove(FMoverTickStartData& StartState, FMoverTimeStep& TimeStep, FProposedMove& OutProposedMove);          // [0x8877824] Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/Mover.WalkingMode
/// Size: 0x0010 (0x000048 - 0x000058)
class UWalkingMode : public UBaseMovementMode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(class UObject*)                            TurnGenerator                                               OFFSET(get<T>, {0x48, 8, 0, 0})


	/// Functions
	// Function /Script/Mover.WalkingMode.SetTurnGeneratorClass
	// void SetTurnGeneratorClass(class UClass* TurnGeneratorClass);                                                            // [0x88781dc] Final|Native|Public|BlueprintCallable 
	// Function /Script/Mover.WalkingMode.OnSimulationTick
	// void OnSimulationTick(FSimulationTickParams& Params, FMoverTickEndData& OutputState);                                    // [0x8877c58] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Mover.WalkingMode.OnGenerateMove
	// void OnGenerateMove(FMoverTickStartData& StartState, FMoverTimeStep& TimeStep, FProposedMove& OutProposedMove);          // [0x8877824] Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Mover.WalkingMode.GetTurnGenerator
	// class UObject* GetTurnGenerator();                                                                                       // [0x8877748] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/Mover.BasedMovementUtils
/// Size: 0x0000 (0x000028 - 0x000028)
class UBasedMovementUtils : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/Mover.BasedMovementUtils.TransformWorldRotatorToBased
	// bool TransformWorldRotatorToBased(class UPrimitiveComponent* MovementBase, FName BoneName, FRotator WorldSpaceRotator, FRotator& OutLocalRotator); // [0x88a255c] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Mover.BasedMovementUtils.TransformWorldLocationToBased
	// bool TransformWorldLocationToBased(class UPrimitiveComponent* MovementBase, FName BoneName, FVector WorldSpaceLocation, FVector& OutLocalLocation); // [0x88a21e0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Mover.BasedMovementUtils.TransformWorldDirectionToBased
	// bool TransformWorldDirectionToBased(class UPrimitiveComponent* MovementBase, FName BoneName, FVector WorldSpaceDirection, FVector& OutLocalDirection); // [0x88a1e64] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Mover.BasedMovementUtils.TransformRotatorToWorld
	// void TransformRotatorToWorld(FQuat BaseQuat, FRotator LocalRotator, FRotator& OutWorldSpaceRotator);                     // [0x88a1d40] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Mover.BasedMovementUtils.TransformRotatorToLocal
	// void TransformRotatorToLocal(FQuat BaseQuat, FRotator WorldSpaceRotator, FRotator& OutLocalRotator);                     // [0x88a1c1c] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Mover.BasedMovementUtils.TransformLocationToWorld
	// void TransformLocationToWorld(FVector BasePos, FQuat BaseQuat, FVector LocalLocation, FVector& OutLocationWorldSpace);   // [0x88a1a6c] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Mover.BasedMovementUtils.TransformLocationToLocal
	// void TransformLocationToLocal(FVector BasePos, FQuat BaseQuat, FVector WorldSpaceLocation, FVector& OutLocalLocation);   // [0x88a18bc] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Mover.BasedMovementUtils.TransformDirectionToWorld
	// void TransformDirectionToWorld(FQuat BaseQuat, FVector LocalDirection, FVector& OutDirectionWorldSpace);                 // [0x88a1758] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Mover.BasedMovementUtils.TransformDirectionToLocal
	// void TransformDirectionToLocal(FQuat BaseQuat, FVector WorldSpaceDirection, FVector& OutLocalDirection);                 // [0x88a15f4] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Mover.BasedMovementUtils.TransformBasedRotatorToWorld
	// bool TransformBasedRotatorToWorld(class UPrimitiveComponent* MovementBase, FName BoneName, FRotator LocalRotator, FRotator& OutWorldSpaceRotator); // [0x88a1320] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Mover.BasedMovementUtils.TransformBasedLocationToWorld
	// bool TransformBasedLocationToWorld(class UPrimitiveComponent* MovementBase, FName BoneName, FVector LocalLocation, FVector& OutLocationWorldSpace); // [0x88a0fa4] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Mover.BasedMovementUtils.TransformBasedDirectionToWorld
	// bool TransformBasedDirectionToWorld(class UPrimitiveComponent* MovementBase, FName BoneName, FVector LocalDirection, FVector& OutDirectionWorldSpace); // [0x88a0c28] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Mover.BasedMovementUtils.IsBaseSimulatingPhysics
	// bool IsBaseSimulatingPhysics(class UPrimitiveComponent* MovementBase);                                                   // [0x889f04c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Mover.BasedMovementUtils.IsADynamicBase
	// bool IsADynamicBase(class UPrimitiveComponent* MovementBase);                                                            // [0x889efcc] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Mover.BasedMovementUtils.GetMovementBaseTransform
	// bool GetMovementBaseTransform(class UPrimitiveComponent* MovementBase, FName BoneName, FVector& OutLocation, FQuat& OutQuat); // [0x889eb14] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/Mover.MovementUtils
/// Size: 0x0000 (0x000028 - 0x000028)
class UMovementUtils : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/Mover.MovementUtils.TrySafeMoveUpdatedComponent
	// bool TrySafeMoveUpdatedComponent(class USceneComponent* UpdatedComponent, class UPrimitiveComponent* UpdatedPrimitive, FVector& Delta, FQuat& NewRotation, bool bSweep, FHitResult& OutHit, ETeleportType Teleport, FMovementRecord& MoveRecord); // [0x88a33fc] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Mover.MovementUtils.TryMoveToSlideAlongSurface
	// float TryMoveToSlideAlongSurface(class USceneComponent* UpdatedComponent, class UPrimitiveComponent* UpdatedPrimitive, class UMoverComponent* MoverComponent, FVector& Delta, float PctOfDeltaToMove, FQuat Rotation, FVector& Normal, FHitResult& Hit, bool bHandleImpact, FMovementRecord& MoveRecord); // [0x88a2914] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Mover.MovementUtils.IsExceedingMaxSpeed
	// bool IsExceedingMaxSpeed(FVector& Velocity, float InMaxSpeed);                                                           // [0x889f0cc] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Mover.MovementUtils.ConstrainToPlane
	// FVector ConstrainToPlane(FVector& Vector, FPlane& MovementPlane, bool bMaintainMagnitude);                               // [0x889e31c] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Mover.MovementUtils.ComputeVelocityFromPositions
	// FVector ComputeVelocityFromPositions(FVector& FromPos, FVector& ToPos, float DeltaSeconds);                              // [0x889e120] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Mover.MovementUtils.ComputeVelocityFromGravity
	// FVector ComputeVelocityFromGravity(FVector& GravityAccel, float DeltaSeconds);                                           // [0x889dfa8] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Mover.MovementUtils.ComputeVelocity
	// FVector ComputeVelocity(FComputeVelocityParams& InParams);                                                               // [0x889dec4] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Mover.MovementUtils.ComputeSlideDelta
	// FVector ComputeSlideDelta(FVector& Delta, float PctOfDeltaToMove, FVector& Normal, FHitResult& Hit);                     // [0x889dc60] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Mover.MovementUtils.ComputeDirectionIntent
	// FVector ComputeDirectionIntent(FVector& MoveInput, EMoveInputType MoveInputType);                                        // [0x889daf8] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Mover.MovementUtils.ComputeCombinedVelocity
	// FVector ComputeCombinedVelocity(FComputeCombinedVelocityParams& InParams);                                               // [0x889da4c] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Mover.MovementUtils.ComputeAngularVelocity
	// FRotator ComputeAngularVelocity(FRotator& From, FRotator& To, float DeltaSeconds, float TurningRateLimit);               // [0x889d850] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Mover.MovementUtils.CanEscapeGravity
	// bool CanEscapeGravity(FVector& PriorVelocity, FVector& NewVelocity, FVector& GravityAccel, float DeltaSeconds);          // [0x889d5ec] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/Mover.PlayMoverMontageCallbackProxy
/// Size: 0x0000 (0x0000A8 - 0x0000A8)
class UPlayMoverMontageCallbackProxy : public UPlayMontageCallbackProxy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:


	/// Functions
	// Function /Script/Mover.PlayMoverMontageCallbackProxy.OnMoverMontageEnded
	// void OnMoverMontageEnded(FName IgnoredNotifyName);                                                                       // [0x88a0674] Final|Native|Protected 
	// Function /Script/Mover.PlayMoverMontageCallbackProxy.CreateProxyObjectForPlayMoverMontage
	// class UPlayMoverMontageCallbackProxy* CreateProxyObjectForPlayMoverMontage(class UMoverComponent* InMoverComponent, class UAnimMontage* MontageToPlay, float PlayRate, float StartingPosition, FName StartingSection); // [0x889e54c] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/Mover.MovementSettingsInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UMovementSettingsInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/Mover.NullMovementMode
/// Size: 0x0000 (0x000048 - 0x000048)
class UNullMovementMode : public UBaseMovementMode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Class /Script/Mover.MovementModeStateMachine
/// Size: 0x0070 (0x000028 - 0x000098)
class UMovementModeStateMachine : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	CMember(TMap<FName, UBaseMovementMode*>)           Modes                                                       OFFSET(get<T>, {0x28, 80, 0, 0})
	CMember(class UImmediateMovementModeTransition*)   QueuedModeTransition                                        OFFSET(get<T>, {0x78, 8, 0, 0})
};

/// Class /Script/Mover.ImmediateMovementModeTransition
/// Size: 0x0008 (0x000030 - 0x000038)
class UImmediateMovementModeTransition : public UBaseMovementModeTransition
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Script/Mover.PhysicsDrivenFallingMode
/// Size: 0x0018 (0x000080 - 0x000098)
class UPhysicsDrivenFallingMode : public UFallingMode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	DMember(float)                                     TwistTorqueLimit                                            OFFSET(get<float>, {0x88, 4, 0, 0})
	DMember(float)                                     SwingTorqueLimit                                            OFFSET(get<float>, {0x8C, 4, 0, 0})
	DMember(float)                                     TargetHeight                                                OFFSET(get<float>, {0x90, 4, 0, 0})
};

/// Class /Script/Mover.PhysicsDrivenFlyingMode
/// Size: 0x0010 (0x000050 - 0x000060)
class UPhysicsDrivenFlyingMode : public UFlyingMode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	DMember(float)                                     TwistTorqueLimit                                            OFFSET(get<float>, {0x58, 4, 0, 0})
	DMember(float)                                     SwingTorqueLimit                                            OFFSET(get<float>, {0x5C, 4, 0, 0})
};

/// Class /Script/Mover.PhysicsDrivenSwimmingMode
/// Size: 0x0010 (0x0000F8 - 0x000108)
class UPhysicsDrivenSwimmingMode : public USwimmingMode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:
	DMember(float)                                     TargetHeight                                                OFFSET(get<float>, {0x100, 4, 0, 0})
};

/// Class /Script/Mover.PhysicsDrivenWalkingMode
/// Size: 0x0030 (0x000058 - 0x000088)
class UPhysicsDrivenWalkingMode : public UWalkingMode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	DMember(float)                                     RadialForceLimit                                            OFFSET(get<float>, {0x60, 4, 0, 0})
	DMember(float)                                     FrictionForceLimit                                          OFFSET(get<float>, {0x64, 4, 0, 0})
	DMember(float)                                     TwistTorqueLimit                                            OFFSET(get<float>, {0x68, 4, 0, 0})
	DMember(float)                                     SwingTorqueLimit                                            OFFSET(get<float>, {0x6C, 4, 0, 0})
	DMember(float)                                     TargetHeight                                                OFFSET(get<float>, {0x70, 4, 0, 0})
	DMember(float)                                     GroundDamping                                               OFFSET(get<float>, {0x74, 4, 0, 0})
	DMember(float)                                     FractionalVelocityToTarget                                  OFFSET(get<float>, {0x78, 4, 0, 0})
	DMember(float)                                     FractionalDownwardVelocityToTarget                          OFFSET(get<float>, {0x7C, 4, 0, 0})
	DMember(float)                                     MaxUnsupportedTimeBeforeFalling                             OFFSET(get<float>, {0x80, 4, 0, 0})
};

/// Class /Script/Mover.PhysicsMoverManager
/// Size: 0x0020 (0x000030 - 0x000050)
class UPhysicsMoverManager : public UWorldSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Struct /Script/Mover.MoverAuxStateContext
/// Size: 0x0001 (0x000000 - 0x000001)
class FMoverAuxStateContext : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/Mover.MoverSyncState
/// Size: 0x0070 (0x000000 - 0x000070)
class FMoverSyncState : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FName)                                     MovementMode                                                OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FLayeredMoveGroup)                         LayeredMoves                                                OFFSET(getStruct<T>, {0x8, 80, 0, 0})
	SMember(FMoverDataCollection)                      SyncStateCollection                                         OFFSET(getStruct<T>, {0x58, 24, 0, 0})
};

/// Struct /Script/Mover.MoverDataCollection
/// Size: 0x0018 (0x000000 - 0x000018)
class FMoverDataCollection : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/Mover.LayeredMoveGroup
/// Size: 0x0050 (0x000000 - 0x000050)
class FLayeredMoveGroup : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	DMember(bool)                                      bApplyResidualVelocity                                      OFFSET(get<bool>, {0x8, 1, 0, 0})
	SMember(FVector)                                   ResidualVelocity                                            OFFSET(getStruct<T>, {0x10, 24, 0, 0})
	DMember(float)                                     ResidualClamping                                            OFFSET(get<float>, {0x28, 4, 0, 0})
};

/// Struct /Script/Mover.MoverTimeStep
/// Size: 0x0010 (0x000000 - 0x000010)
class FMoverTimeStep : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(int32_t)                                   ServerFrame                                                 OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(float)                                     BaseSimTimeMs                                               OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     StepMs                                                      OFFSET(get<float>, {0x8, 4, 0, 0})
};

/// Struct /Script/Mover.MoverInputCmdContext
/// Size: 0x0018 (0x000000 - 0x000018)
class FMoverInputCmdContext : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FMoverDataCollection)                      InputCollection                                             OFFSET(getStruct<T>, {0x0, 24, 0, 0})
};

/// Struct /Script/Mover.FreeMoveParams
/// Size: 0x0080 (0x000000 - 0x000080)
class FFreeMoveParams : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(EMoveInputType)                            MoveInputType                                               OFFSET(get<T>, {0x0, 1, 0, 0})
	SMember(FVector)                                   MoveInput                                                   OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	SMember(FRotator)                                  OrientationIntent                                           OFFSET(getStruct<T>, {0x20, 24, 0, 0})
	SMember(FVector)                                   PriorVelocity                                               OFFSET(getStruct<T>, {0x38, 24, 0, 0})
	SMember(FRotator)                                  PriorOrientation                                            OFFSET(getStruct<T>, {0x50, 24, 0, 0})
	DMember(float)                                     MaxSpeed                                                    OFFSET(get<float>, {0x68, 4, 0, 0})
	DMember(float)                                     Acceleration                                                OFFSET(get<float>, {0x6C, 4, 0, 0})
	DMember(float)                                     Deceleration                                                OFFSET(get<float>, {0x70, 4, 0, 0})
	DMember(float)                                     TurningBoost                                                OFFSET(get<float>, {0x74, 4, 0, 0})
	DMember(float)                                     TurningRate                                                 OFFSET(get<float>, {0x78, 4, 0, 0})
	DMember(float)                                     DeltaSeconds                                                OFFSET(get<float>, {0x7C, 4, 0, 0})
};

/// Struct /Script/Mover.LayeredMoveBase
/// Size: 0x0048 (0x000000 - 0x000048)
class FLayeredMoveBase : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(EMoveMixMode)                              MixMode                                                     OFFSET(get<T>, {0x8, 1, 0, 0})
	DMember(char)                                      Priority                                                    OFFSET(get<char>, {0x9, 1, 0, 0})
	DMember(float)                                     DurationMs                                                  OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     StartSimTimeMs                                              OFFSET(get<float>, {0x10, 4, 0, 0})
	SMember(FLayeredMoveFinishVelocitySettings)        FinishVelocitySettings                                      OFFSET(getStruct<T>, {0x18, 48, 0, 0})
};

/// Struct /Script/Mover.LayeredMoveFinishVelocitySettings
/// Size: 0x0030 (0x000000 - 0x000030)
class FLayeredMoveFinishVelocitySettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(ELayeredMoveFinishVelocityMode)            FinishVelocityMode                                          OFFSET(get<T>, {0x8, 1, 0, 0})
	SMember(FVector)                                   SetVelocity                                                 OFFSET(getStruct<T>, {0x10, 24, 0, 0})
	DMember(float)                                     ClampVelocity                                               OFFSET(get<float>, {0x28, 4, 0, 0})
};

/// Struct /Script/Mover.LayeredMove_AnimRootMotion
/// Size: 0x0010 (0x000048 - 0x000058)
class FLayeredMove_AnimRootMotion : public FLayeredMoveBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(class UAnimMontage*)                       Montage                                                     OFFSET(get<T>, {0x48, 8, 0, 0})
	DMember(float)                                     StartingMontagePosition                                     OFFSET(get<float>, {0x50, 4, 0, 0})
	DMember(float)                                     PlayRate                                                    OFFSET(get<float>, {0x54, 4, 0, 0})
};

/// Struct /Script/Mover.LayeredMove_LinearVelocity
/// Size: 0x0028 (0x000048 - 0x000070)
class FLayeredMove_LinearVelocity : public FLayeredMoveBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FVector)                                   Velocity                                                    OFFSET(getStruct<T>, {0x48, 24, 0, 0})
	CMember(class UCurveFloat*)                        MagnitudeOverTime                                           OFFSET(get<T>, {0x60, 8, 0, 0})
	DMember(char)                                      SettingsFlags                                               OFFSET(get<char>, {0x68, 1, 0, 0})
};

/// Struct /Script/Mover.LayeredMove_JumpImpulse
/// Size: 0x0008 (0x000048 - 0x000050)
class FLayeredMove_JumpImpulse : public FLayeredMoveBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	DMember(float)                                     UpwardsSpeed                                                OFFSET(get<float>, {0x48, 4, 0, 0})
};

/// Struct /Script/Mover.LayeredMove_JumpTo
/// Size: 0x0038 (0x000048 - 0x000080)
class FLayeredMove_JumpTo : public FLayeredMoveBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	DMember(float)                                     JumpDistance                                                OFFSET(get<float>, {0x48, 4, 0, 0})
	DMember(float)                                     JumpHeight                                                  OFFSET(get<float>, {0x4C, 4, 0, 0})
	DMember(bool)                                      bUseActorRotation                                           OFFSET(get<bool>, {0x50, 1, 0, 0})
	SMember(FRotator)                                  JumpRotation                                                OFFSET(getStruct<T>, {0x58, 24, 0, 0})
	CMember(class UCurveVector*)                       PathOffsetCurve                                             OFFSET(get<T>, {0x70, 8, 0, 0})
	CMember(class UCurveFloat*)                        TimeMappingCurve                                            OFFSET(get<T>, {0x78, 8, 0, 0})
};

/// Struct /Script/Mover.LayeredMove_Teleport
/// Size: 0x0018 (0x000048 - 0x000060)
class FLayeredMove_Teleport : public FLayeredMoveBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FVector)                                   TargetLocation                                              OFFSET(getStruct<T>, {0x48, 24, 0, 0})
};

/// Struct /Script/Mover.LayeredMove_MoveTo
/// Size: 0x0048 (0x000048 - 0x000090)
class FLayeredMove_MoveTo : public FLayeredMoveBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FVector)                                   StartLocation                                               OFFSET(getStruct<T>, {0x48, 24, 0, 0})
	SMember(FVector)                                   TargetLocation                                              OFFSET(getStruct<T>, {0x60, 24, 0, 0})
	DMember(bool)                                      bRestrictSpeedToExpected                                    OFFSET(get<bool>, {0x78, 1, 0, 0})
	CMember(class UCurveVector*)                       PathOffsetCurve                                             OFFSET(get<T>, {0x80, 8, 0, 0})
	CMember(class UCurveFloat*)                        TimeMappingCurve                                            OFFSET(get<T>, {0x88, 8, 0, 0})
};

/// Struct /Script/Mover.LayeredMove_MoveToDynamic
/// Size: 0x0008 (0x000090 - 0x000098)
class FLayeredMove_MoveToDynamic : public FLayeredMove_MoveTo
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	CMember(class AActor*)                             LocationActor                                               OFFSET(get<T>, {0x90, 8, 0, 0})
};

/// Struct /Script/Mover.LayeredMove_RadialImpulse
/// Size: 0x0060 (0x000048 - 0x0000A8)
class FLayeredMove_RadialImpulse : public FLayeredMoveBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	SMember(FVector)                                   Location                                                    OFFSET(getStruct<T>, {0x48, 24, 0, 0})
	CMember(class AActor*)                             LocationActor                                               OFFSET(get<T>, {0x60, 8, 0, 0})
	DMember(float)                                     Radius                                                      OFFSET(get<float>, {0x68, 4, 0, 0})
	DMember(float)                                     Magnitude                                                   OFFSET(get<float>, {0x6C, 4, 0, 0})
	DMember(bool)                                      bIsPush                                                     OFFSET(get<bool>, {0x70, 1, 0, 0})
	DMember(bool)                                      bNoVerticalVelocity                                         OFFSET(get<bool>, {0x71, 1, 0, 0})
	CMember(class UCurveFloat*)                        DistanceFalloff                                             OFFSET(get<T>, {0x78, 8, 0, 0})
	CMember(class UCurveFloat*)                        MagnitudeOverTime                                           OFFSET(get<T>, {0x80, 8, 0, 0})
	DMember(bool)                                      bUseFixedWorldDirection                                     OFFSET(get<bool>, {0x88, 1, 0, 0})
	SMember(FRotator)                                  FixedWorldDirection                                         OFFSET(getStruct<T>, {0x90, 24, 0, 0})
};

/// Struct /Script/Mover.FloorCheckResult
/// Size: 0x0100 (0x000000 - 0x000100)
class FFloorCheckResult : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	DMember(bool)                                      bBlockingHit                                                OFFSET(get<bool>, {0x0, 1, 1, 0})
	DMember(bool)                                      bWalkableFloor                                              OFFSET(get<bool>, {0x0, 1, 1, 1})
	DMember(bool)                                      bLineTrace                                                  OFFSET(get<bool>, {0x0, 1, 1, 2})
	DMember(float)                                     LineDist                                                    OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     FloorDist                                                   OFFSET(get<float>, {0x8, 4, 0, 0})
	SMember(FHitResult)                                HitResult                                                   OFFSET(getStruct<T>, {0x10, 240, 0, 0})
};

/// Struct /Script/Mover.GroundMoveParams
/// Size: 0x00A0 (0x000000 - 0x0000A0)
class FGroundMoveParams : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	CMember(EMoveInputType)                            MoveInputType                                               OFFSET(get<T>, {0x0, 1, 0, 0})
	SMember(FVector)                                   MoveInput                                                   OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	SMember(FRotator)                                  OrientationIntent                                           OFFSET(getStruct<T>, {0x20, 24, 0, 0})
	SMember(FVector)                                   PriorVelocity                                               OFFSET(getStruct<T>, {0x38, 24, 0, 0})
	SMember(FRotator)                                  PriorOrientation                                            OFFSET(getStruct<T>, {0x50, 24, 0, 0})
	DMember(float)                                     MaxSpeed                                                    OFFSET(get<float>, {0x68, 4, 0, 0})
	DMember(float)                                     Acceleration                                                OFFSET(get<float>, {0x6C, 4, 0, 0})
	DMember(float)                                     Deceleration                                                OFFSET(get<float>, {0x70, 4, 0, 0})
	DMember(float)                                     Friction                                                    OFFSET(get<float>, {0x74, 4, 0, 0})
	DMember(float)                                     TurningRate                                                 OFFSET(get<float>, {0x78, 4, 0, 0})
	DMember(float)                                     TurningBoost                                                OFFSET(get<float>, {0x7C, 4, 0, 0})
	SMember(FVector)                                   GroundNormal                                                OFFSET(getStruct<T>, {0x80, 24, 0, 0})
	DMember(float)                                     DeltaSeconds                                                OFFSET(get<float>, {0x98, 4, 0, 0})
};

/// Struct /Script/Mover.LayeredMove_Launch
/// Size: 0x0020 (0x000048 - 0x000068)
class FLayeredMove_Launch : public FLayeredMoveBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FVector)                                   LaunchVelocity                                              OFFSET(getStruct<T>, {0x48, 24, 0, 0})
	SMember(FName)                                     ForceMovementMode                                           OFFSET(getStruct<T>, {0x60, 4, 0, 0})
};

/// Struct /Script/Mover.MovementSubstep
/// Size: 0x0028 (0x000000 - 0x000028)
class FMovementSubstep : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Struct /Script/Mover.MovementRecord
/// Size: 0x0048 (0x000000 - 0x000048)
class FMovementRecord : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Struct /Script/Mover.ProposedMove
/// Size: 0x0088 (0x000000 - 0x000088)
class FProposedMove : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	CMember(EMoveMixMode)                              MixMode                                                     OFFSET(get<T>, {0x0, 1, 0, 0})
	SMember(FName)                                     PreferredMode                                               OFFSET(getStruct<T>, {0x4, 4, 0, 0})
	DMember(bool)                                      bHasDirIntent                                               OFFSET(get<bool>, {0x8, 1, 1, 0})
	DMember(bool)                                      bHasTargetLocation                                          OFFSET(get<bool>, {0x8, 1, 1, 1})
	SMember(FVector)                                   DirectionIntent                                             OFFSET(getStruct<T>, {0x10, 24, 0, 0})
	SMember(FVector)                                   LinearVelocity                                              OFFSET(getStruct<T>, {0x28, 24, 0, 0})
	SMember(FRotator)                                  AngularVelocity                                             OFFSET(getStruct<T>, {0x40, 24, 0, 0})
	SMember(FVector)                                   MovePlaneVelocity                                           OFFSET(getStruct<T>, {0x58, 24, 0, 0})
	SMember(FVector)                                   TargetLocation                                              OFFSET(getStruct<T>, {0x70, 24, 0, 0})
};

/// Struct /Script/Mover.MoverDataStructBase
/// Size: 0x0008 (0x000000 - 0x000008)
class FMoverDataStructBase : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/Mover.CharacterDefaultInputs
/// Size: 0x0068 (0x000008 - 0x000070)
class FCharacterDefaultInputs : public FMoverDataStructBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	CMember(EMoveInputType)                            MoveInputType                                               OFFSET(get<T>, {0x8, 1, 0, 0})
	SMember(FVector)                                   MoveInput                                                   OFFSET(getStruct<T>, {0x10, 24, 0, 0})
	SMember(FVector)                                   OrientationIntent                                           OFFSET(getStruct<T>, {0x28, 24, 0, 0})
	SMember(FRotator)                                  ControlRotation                                             OFFSET(getStruct<T>, {0x40, 24, 0, 0})
	SMember(FName)                                     SuggestedMovementMode                                       OFFSET(getStruct<T>, {0x58, 4, 0, 0})
	DMember(bool)                                      bUsingMovementBase                                          OFFSET(get<bool>, {0x5C, 1, 0, 0})
	CMember(class UPrimitiveComponent*)                MovementBase                                                OFFSET(get<T>, {0x60, 8, 0, 0})
	SMember(FName)                                     MovementBaseBoneName                                        OFFSET(getStruct<T>, {0x68, 4, 0, 0})
	DMember(bool)                                      bIsJumpJustPressed                                          OFFSET(get<bool>, {0x6C, 1, 0, 0})
	DMember(bool)                                      bIsJumpPressed                                              OFFSET(get<bool>, {0x6D, 1, 0, 0})
};

/// Struct /Script/Mover.MoverDefaultSyncState
/// Size: 0x00A8 (0x000008 - 0x0000B0)
class FMoverDefaultSyncState : public FMoverDataStructBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FVector)                                   Location                                                    OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	SMember(FRotator)                                  orientation                                                 OFFSET(getStruct<T>, {0x20, 24, 0, 0})
	SMember(FVector)                                   Velocity                                                    OFFSET(getStruct<T>, {0x38, 24, 0, 0})
	SMember(FVector)                                   MoveDirectionIntent                                         OFFSET(getStruct<T>, {0x50, 24, 0, 0})
	CMember(class UPrimitiveComponent*)                MovementBase                                                OFFSET(get<T>, {0x68, 8, 0, 0})
	SMember(FName)                                     MovementBaseBoneName                                        OFFSET(getStruct<T>, {0x70, 4, 0, 0})
	SMember(FVector)                                   MovementBasePos                                             OFFSET(getStruct<T>, {0x78, 24, 0, 0})
	SMember(FQuat)                                     MovementBaseQuat                                            OFFSET(getStruct<T>, {0x90, 32, 0, 0})
};

/// Struct /Script/Mover.NetworkPhysicsMoverInputs
/// Size: 0x0018 (0x000018 - 0x000030)
class FNetworkPhysicsMoverInputs : public FNetworkPhysicsData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FMoverInputCmdContext)                     InputCmdContext                                             OFFSET(getStruct<T>, {0x18, 24, 0, 0})
};

/// Struct /Script/Mover.NetworkPhysicsMoverState
/// Size: 0x0070 (0x000018 - 0x000088)
class FNetworkPhysicsMoverState : public FNetworkPhysicsData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FMoverSyncState)                           SyncStateContext                                            OFFSET(getStruct<T>, {0x18, 112, 0, 0})
};

/// Struct /Script/Mover.MovementModeTickEndState
/// Size: 0x0008 (0x000000 - 0x000008)
class FMovementModeTickEndState : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(float)                                     RemainingMs                                                 OFFSET(get<float>, {0x0, 4, 0, 0})
	SMember(FName)                                     NextModeName                                                OFFSET(getStruct<T>, {0x4, 4, 0, 0})
};

/// Struct /Script/Mover.MoverTickStartData
/// Size: 0x0090 (0x000000 - 0x000090)
class FMoverTickStartData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FMoverInputCmdContext)                     InputCmd                                                    OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FMoverSyncState)                           SyncState                                                   OFFSET(getStruct<T>, {0x18, 112, 0, 0})
	SMember(FMoverAuxStateContext)                     AuxState                                                    OFFSET(getStruct<T>, {0x88, 1, 0, 0})
};

/// Struct /Script/Mover.MoverTickEndData
/// Size: 0x00C8 (0x000000 - 0x0000C8)
class FMoverTickEndData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	SMember(FMoverSyncState)                           SyncState                                                   OFFSET(getStruct<T>, {0x0, 112, 0, 0})
	SMember(FMoverAuxStateContext)                     AuxState                                                    OFFSET(getStruct<T>, {0x70, 1, 0, 0})
	SMember(FMovementModeTickEndState)                 MovementEndState                                            OFFSET(getStruct<T>, {0x74, 8, 0, 0})
};

/// Struct /Script/Mover.SimulationTickParams
/// Size: 0x0140 (0x000000 - 0x000140)
class FSimulationTickParams : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
	CMember(class USceneComponent*)                    UpdatedComponent                                            OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class UPrimitiveComponent*)                UpdatedPrimitive                                            OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(class UMoverComponent*)                    MoverComponent                                              OFFSET(get<T>, {0x10, 8, 0, 0})
	SMember(FMoverTickStartData)                       StartState                                                  OFFSET(getStruct<T>, {0x18, 144, 0, 0})
	SMember(FMoverTimeStep)                            TimeStep                                                    OFFSET(getStruct<T>, {0xA8, 16, 0, 0})
	SMember(FProposedMove)                             ProposedMove                                                OFFSET(getStruct<T>, {0xB8, 136, 0, 0})
};

/// Struct /Script/Mover.MoverOnImpactParams
/// Size: 0x0110 (0x000000 - 0x000110)
class FMoverOnImpactParams : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
	SMember(FName)                                     MovementModeName                                            OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FHitResult)                                HitResult                                                   OFFSET(getStruct<T>, {0x8, 240, 0, 0})
	SMember(FVector)                                   AttemptedMoveDelta                                          OFFSET(getStruct<T>, {0xF8, 24, 0, 0})
};

/// Struct /Script/Mover.MoverDataPersistence
/// Size: 0x0010 (0x000000 - 0x000010)
class FMoverDataPersistence : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class UScriptStruct*)                      RequiredType                                                OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(bool)                                      bCopyFromPriorFrame                                         OFFSET(get<bool>, {0x8, 1, 0, 0})
};

/// Struct /Script/Mover.LayeredMove_MultiJump
/// Size: 0x0010 (0x000048 - 0x000058)
class FLayeredMove_MultiJump : public FLayeredMoveBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	DMember(int32_t)                                   MaximumInAirJumps                                           OFFSET(get<int32_t>, {0x48, 4, 0, 0})
	DMember(float)                                     UpwardsSpeed                                                OFFSET(get<float>, {0x4C, 4, 0, 0})
	DMember(int32_t)                                   JumpsInAirRemaining                                         OFFSET(get<int32_t>, {0x50, 4, 0, 0})
	DMember(float)                                     TimeOfLastJumpMS                                            OFFSET(get<float>, {0x54, 4, 0, 0})
};

/// Struct /Script/Mover.MovementSettingsInputs
/// Size: 0x0008 (0x000008 - 0x000010)
class FMovementSettingsInputs : public FMoverDataStructBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(float)                                     MaxSpeed                                                    OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     Acceleration                                                OFFSET(get<float>, {0xC, 4, 0, 0})
};

/// Struct /Script/Mover.WaterMoveParams
/// Size: 0x00A8 (0x000000 - 0x0000A8)
class FWaterMoveParams : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	CMember(EMoveInputType)                            MoveInputType                                               OFFSET(get<T>, {0x0, 1, 0, 0})
	SMember(FVector)                                   MoveInput                                                   OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	SMember(FRotator)                                  OrientationIntent                                           OFFSET(getStruct<T>, {0x20, 24, 0, 0})
	SMember(FVector)                                   PriorVelocity                                               OFFSET(getStruct<T>, {0x38, 24, 0, 0})
	SMember(FRotator)                                  PriorOrientation                                            OFFSET(getStruct<T>, {0x50, 24, 0, 0})
	DMember(float)                                     MaxSpeed                                                    OFFSET(get<float>, {0x68, 4, 0, 0})
	DMember(float)                                     Acceleration                                                OFFSET(get<float>, {0x6C, 4, 0, 0})
	DMember(float)                                     Deceleration                                                OFFSET(get<float>, {0x70, 4, 0, 0})
	DMember(float)                                     Friction                                                    OFFSET(get<float>, {0x74, 4, 0, 0})
	DMember(float)                                     TurningRate                                                 OFFSET(get<float>, {0x78, 4, 0, 0})
	DMember(float)                                     TurningBoost                                                OFFSET(get<float>, {0x7C, 4, 0, 0})
	DMember(float)                                     DeltaSeconds                                                OFFSET(get<float>, {0x80, 4, 0, 0})
	SMember(FVector)                                   MoveAcceleration                                            OFFSET(getStruct<T>, {0x88, 24, 0, 0})
	DMember(float)                                     MoveSpeed                                                   OFFSET(get<float>, {0xA0, 4, 0, 0})
};

/// Struct /Script/Mover.WaterFlowSplineData
/// Size: 0x00E8 (0x000000 - 0x0000E8)
class FWaterFlowSplineData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
};

/// Struct /Script/Mover.WaterCheckResult
/// Size: 0x01E0 (0x000000 - 0x0001E0)
class FWaterCheckResult : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 480;

public:
	DMember(bool)                                      bSwimmableVolume                                            OFFSET(get<bool>, {0x0, 1, 1, 0})
	SMember(FHitResult)                                HitResult                                                   OFFSET(getStruct<T>, {0x8, 240, 0, 0})
	SMember(FWaterFlowSplineData)                      WaterSplineData                                             OFFSET(getStruct<T>, {0xF8, 232, 0, 0})
};

/// Struct /Script/Mover.UpdateWaterSplineDataParams
/// Size: 0x0048 (0x000000 - 0x000048)
class FUpdateWaterSplineDataParams : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	DMember(float)                                     TargetImmersionDepth                                        OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     WaterVelocityDepthForMax                                    OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     WaterVelocityMinMultiplier                                  OFFSET(get<float>, {0x8, 4, 0, 0})
	SMember(FVector)                                   PlayerVelocity                                              OFFSET(getStruct<T>, {0x10, 24, 0, 0})
	SMember(FVector)                                   PlayerLocation                                              OFFSET(getStruct<T>, {0x28, 24, 0, 0})
	DMember(float)                                     CapsuleHalfHeight                                           OFFSET(get<float>, {0x40, 4, 0, 0})
};

/// Struct /Script/Mover.SwimmingControlSettings
/// Size: 0x00A8 (0x000000 - 0x0000A8)
class FSwimmingControlSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	DMember(float)                                     CancelCrouchImmersionDepth                                  OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     DBNOSwimImmersionDepth                                      OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     MaxAcceleration                                             OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     MaxAccelerationSprinting                                    OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     BrakingDeceleration                                         OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     MaxNormalSpeed                                              OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     MaxSprintSpeed                                              OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     MinSprintJumpSpeed                                          OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(float)                                     SprintJumpAirAccelAngleLimit                                OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(float)                                     SprintRetriggerDelay                                        OFFSET(get<float>, {0x24, 4, 0, 0})
	DMember(float)                                     SprintDelayAfterFiring                                      OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(float)                                     MaxTargetingSpeed                                           OFFSET(get<float>, {0x2C, 4, 0, 0})
	DMember(float)                                     BackwardsSpeedMultiplier                                    OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(float)                                     BackwardsSpeedCosAngle                                      OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     AngledSpeedMultiplier                                       OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     AngledSpeedCosAngle                                         OFFSET(get<float>, {0x3C, 4, 0, 0})
	DMember(float)                                     Friction                                                    OFFSET(get<float>, {0x40, 4, 0, 0})
	DMember(float)                                     FrictionSprinting                                           OFFSET(get<float>, {0x44, 4, 0, 0})
	DMember(float)                                     FrictionDirectionChangeDot                                  OFFSET(get<float>, {0x48, 4, 0, 0})
	DMember(float)                                     FrictionDirectionChangeMultiplier                           OFFSET(get<float>, {0x4C, 4, 0, 0})
	DMember(float)                                     MaxSpeedUp                                                  OFFSET(get<float>, {0x50, 4, 0, 0})
	DMember(float)                                     MaxSpeedDown                                                OFFSET(get<float>, {0x54, 4, 0, 0})
	DMember(float)                                     MaxHorizontalEntrySpeed                                     OFFSET(get<float>, {0x58, 4, 0, 0})
	DMember(float)                                     WaterForceMultiplier                                        OFFSET(get<float>, {0x5C, 4, 0, 0})
	DMember(float)                                     WaterForceSecondMultiplier                                  OFFSET(get<float>, {0x60, 4, 0, 0})
	DMember(float)                                     MaxWaterForce                                               OFFSET(get<float>, {0x64, 4, 0, 0})
	DMember(float)                                     WaterVelocityDepthForMax                                    OFFSET(get<float>, {0x68, 4, 0, 0})
	DMember(float)                                     WaterVelocityMinMultiplier                                  OFFSET(get<float>, {0x6C, 4, 0, 0})
	DMember(float)                                     WaterSimMaxTimeStep                                         OFFSET(get<float>, {0x70, 4, 0, 0})
	DMember(float)                                     WaterSimSubStepTime                                         OFFSET(get<float>, {0x74, 4, 0, 0})
	DMember(float)                                     BobbingMaxForce                                             OFFSET(get<float>, {0x78, 4, 0, 0})
	DMember(float)                                     BobbingIdealDepthTolerance                                  OFFSET(get<float>, {0x7C, 4, 0, 0})
	DMember(float)                                     BobbingFrictionDown                                         OFFSET(get<float>, {0x80, 4, 0, 0})
	DMember(float)                                     BobbingExpDragDown                                          OFFSET(get<float>, {0x84, 4, 0, 0})
	DMember(float)                                     BobbingFrictionDownSubmerged                                OFFSET(get<float>, {0x88, 4, 0, 0})
	DMember(float)                                     BobbingExpDragDownSubmerged                                 OFFSET(get<float>, {0x8C, 4, 0, 0})
	DMember(float)                                     BobbingFrictionUp                                           OFFSET(get<float>, {0x90, 4, 0, 0})
	DMember(float)                                     BobbingExpDragUp                                            OFFSET(get<float>, {0x94, 4, 0, 0})
	DMember(float)                                     BobbingFrictionMultiplier                                   OFFSET(get<float>, {0x98, 4, 0, 0})
	DMember(float)                                     BobbingExpDragMultiplier                                    OFFSET(get<float>, {0x9C, 4, 0, 0})
	DMember(float)                                     BoostDragMultiplier                                         OFFSET(get<float>, {0xA0, 4, 0, 0})
	DMember(float)                                     JumpMultiplier                                              OFFSET(get<float>, {0xA4, 4, 0, 0})
};

/// Struct /Script/Mover.RelativeBaseInfo
/// Size: 0x0070 (0x000000 - 0x000070)
class FRelativeBaseInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	CMember(TWeakObjectPtr<UPrimitiveComponent*>)      MovementBase                                                OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FName)                                     BoneName                                                    OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	SMember(FVector)                                   Location                                                    OFFSET(getStruct<T>, {0x10, 24, 0, 0})
	SMember(FQuat)                                     Rotation                                                    OFFSET(getStruct<T>, {0x30, 32, 0, 0})
	SMember(FVector)                                   ContactLocalPosition                                        OFFSET(getStruct<T>, {0x50, 24, 0, 0})
};

/// Struct /Script/Mover.MoverDynamicBasedMovementTickFunction
/// Size: 0x0010 (0x000028 - 0x000038)
class FMoverDynamicBasedMovementTickFunction : public FTickFunction
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Struct /Script/Mover.TrajectorySampleInfo
/// Size: 0x00B0 (0x000000 - 0x0000B0)
class FTrajectorySampleInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
};

/// Struct /Script/Mover.ComputeVelocityParams
/// Size: 0x0050 (0x000000 - 0x000050)
class FComputeVelocityParams : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	DMember(float)                                     DeltaSeconds                                                OFFSET(get<float>, {0x0, 4, 0, 0})
	SMember(FVector)                                   InitialVelocity                                             OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	SMember(FVector)                                   MoveDirectionIntent                                         OFFSET(getStruct<T>, {0x20, 24, 0, 0})
	DMember(float)                                     MaxSpeed                                                    OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     TurningBoost                                                OFFSET(get<float>, {0x3C, 4, 0, 0})
	DMember(float)                                     Friction                                                    OFFSET(get<float>, {0x40, 4, 0, 0})
	DMember(float)                                     Deceleration                                                OFFSET(get<float>, {0x44, 4, 0, 0})
	DMember(float)                                     Acceleration                                                OFFSET(get<float>, {0x48, 4, 0, 0})
};

/// Struct /Script/Mover.ComputeCombinedVelocityParams
/// Size: 0x0070 (0x000000 - 0x000070)
class FComputeCombinedVelocityParams : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	DMember(float)                                     DeltaSeconds                                                OFFSET(get<float>, {0x0, 4, 0, 0})
	SMember(FVector)                                   InitialVelocity                                             OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	SMember(FVector)                                   MoveDirectionIntent                                         OFFSET(getStruct<T>, {0x20, 24, 0, 0})
	DMember(float)                                     MaxSpeed                                                    OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     TurningBoost                                                OFFSET(get<float>, {0x3C, 4, 0, 0})
	DMember(float)                                     Friction                                                    OFFSET(get<float>, {0x40, 4, 0, 0})
	DMember(float)                                     Deceleration                                                OFFSET(get<float>, {0x44, 4, 0, 0})
	DMember(float)                                     Acceleration                                                OFFSET(get<float>, {0x48, 4, 0, 0})
	SMember(FVector)                                   ExternalAcceleration                                        OFFSET(getStruct<T>, {0x50, 24, 0, 0})
	DMember(float)                                     OverallMaxSpeed                                             OFFSET(get<float>, {0x68, 4, 0, 0})
};

/// Struct /Script/Mover.TransitionEvalResult
/// Size: 0x0004 (0x000000 - 0x000004)
class FTransitionEvalResult : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	SMember(FName)                                     NextMode                                                    OFFSET(getStruct<T>, {0x0, 4, 0, 0})
};

/// Enum /Script/Mover.ELayeredMove_ConstantVelocitySettingsFlags
/// Size: 0x04
enum class ELayeredMove_ConstantVelocitySettingsFlags : uint8_t
{
	ELayeredMove_ConstantVelocitySettingsFlags__NoFlags                              = 0,
	ELayeredMove_ConstantVelocitySettingsFlags__VelocityStartRelative                = 1,
	ELayeredMove_ConstantVelocitySettingsFlags__VelocityAlwaysRelative               = 2,
	ELayeredMove_ConstantVelocitySettingsFlags__ELayeredMove_MAX                     = 3
};

/// Enum /Script/Mover.ELayeredMoveFinishVelocityMode
/// Size: 0x04
enum class ELayeredMoveFinishVelocityMode : uint8_t
{
	ELayeredMoveFinishVelocityMode__MaintainLastRootMotionVelocity                   = 0,
	ELayeredMoveFinishVelocityMode__SetVelocity                                      = 1,
	ELayeredMoveFinishVelocityMode__ClampVelocity                                    = 2,
	ELayeredMoveFinishVelocityMode__ELayeredMoveFinishVelocityMode_MAX               = 3
};

/// Enum /Script/Mover.EMoveMixMode
/// Size: 0x04
enum class EMoveMixMode : uint8_t
{
	EMoveMixMode__AdditiveVelocity                                                   = 0,
	EMoveMixMode__OverrideVelocity                                                   = 1,
	EMoveMixMode__OverrideAll                                                        = 2,
	EMoveMixMode__EMoveMixMode_MAX                                                   = 3
};

/// Enum /Script/Mover.EMoveInputType
/// Size: 0x04
enum class EMoveInputType : uint8_t
{
	EMoveInputType__Invalid                                                          = 0,
	EMoveInputType__DirectionalIntent                                                = 1,
	EMoveInputType__Velocity                                                         = 2,
	EMoveInputType__EMoveInputType_MAX                                               = 3
};

