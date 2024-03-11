
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: GameplayAbilities
/// dependency: GameplayCameras
/// dependency: GameplayTags
/// dependency: Niagara

/// Class /Script/MotorcycleRuntime.FortMotorcycleVehicleAnimInstance
/// Size: 0x0070 (0x000620 - 0x000690)
class UFortMotorcycleVehicleAnimInstance : public UFortVehicleAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1680;

public:
	CMember(class AFortMotorcycleVehicle*)             MotorcycleVehicle                                           OFFSET(get<T>, {0x618, 8, 0, 0})
	SMember(FRotator)                                  SwingArmRotation                                            OFFSET(getStruct<T>, {0x620, 24, 0, 0})
	DMember(bool)                                      bIsInInventoryMode                                          OFFSET(get<bool>, {0x638, 1, 0, 0})
	CMember(class UFortPlayerAnimInstance_MotorcycleDriver*) DriverAnimInstance                                    OFFSET(get<T>, {0x640, 8, 0, 0})
	DMember(bool)                                      bIsBikeParked                                               OFFSET(get<bool>, {0x648, 1, 0, 0})
	DMember(bool)                                      bIsBikeOn                                                   OFFSET(get<bool>, {0x649, 1, 0, 0})
	DMember(bool)                                      bIsBikeStopping                                             OFFSET(get<bool>, {0x64A, 1, 0, 0})
	DMember(bool)                                      bIsReversing                                                OFFSET(get<bool>, {0x64B, 1, 0, 0})
	DMember(float)                                     TotalSpeed                                                  OFFSET(get<float>, {0x64C, 4, 0, 0})
	DMember(bool)                                      bIsSurfaceWater                                             OFFSET(get<bool>, {0x650, 1, 0, 0})
	DMember(float)                                     AdditiveAlpha                                               OFFSET(get<float>, {0x654, 4, 0, 0})
	DMember(bool)                                      bIsRevving                                                  OFFSET(get<bool>, {0x658, 1, 0, 0})
	DMember(float)                                     AccelAlpha                                                  OFFSET(get<float>, {0x65C, 4, 0, 0})
	DMember(bool)                                      bIsThrottling                                               OFFSET(get<bool>, {0x660, 1, 0, 0})
	DMember(bool)                                      bIsHonking                                                  OFFSET(get<bool>, {0x661, 1, 0, 0})
	DMember(bool)                                      bIsSoloJumpTrickOutro                                       OFFSET(get<bool>, {0x662, 1, 0, 0})
	DMember(bool)                                      bIsJumpTrickNone                                            OFFSET(get<bool>, {0x663, 1, 0, 0})
	DMember(float)                                     BrakeLeverAlpha                                             OFFSET(get<float>, {0x664, 4, 0, 0})
	DMember(bool)                                      bShouldExitFromLocomotion                                   OFFSET(get<bool>, {0x668, 1, 0, 0})
	DMember(bool)                                      bStateRuleFromRevvingToThrottle                             OFFSET(get<bool>, {0x669, 1, 0, 0})
	DMember(bool)                                      bShouldPlayThrottleAnim                                     OFFSET(get<bool>, {0x66A, 1, 0, 0})
	DMember(bool)                                      bStateTransitionRuleToMovingLoop                            OFFSET(get<bool>, {0x66B, 1, 0, 0})
	DMember(bool)                                      bEarlyOutFromMovingStart                                    OFFSET(get<bool>, {0x66C, 1, 0, 0})
	DMember(bool)                                      bShouldStop                                                 OFFSET(get<bool>, {0x66D, 1, 0, 0})
	DMember(bool)                                      bShouldReverse                                              OFFSET(get<bool>, {0x66E, 1, 0, 0})
	DMember(bool)                                      bShouldReverseStop                                          OFFSET(get<bool>, {0x66F, 1, 0, 0})
	DMember(bool)                                      bShouldStopThrottling                                       OFFSET(get<bool>, {0x670, 1, 0, 0})
	DMember(bool)                                      bIsFromJumpTrick                                            OFFSET(get<bool>, {0x671, 1, 0, 0})
	DMember(bool)                                      bIsSoloJumpTrick                                            OFFSET(get<bool>, {0x672, 1, 0, 0})
	DMember(bool)                                      bShouldJump                                                 OFFSET(get<bool>, {0x673, 1, 0, 0})
	DMember(bool)                                      bIsMoving                                                   OFFSET(get<bool>, {0x674, 1, 0, 0})
	CMember(EFortMotorcycleAirTrickType)               AirTrickType                                                OFFSET(get<T>, {0x675, 1, 0, 0})
	DMember(bool)                                      bIsLandingInPlace                                           OFFSET(get<bool>, {0x676, 1, 0, 0})
	DMember(bool)                                      bStateRuleFallingToMoving                                   OFFSET(get<bool>, {0x677, 1, 0, 0})
	DMember(float)                                     JumpChargeFactor                                            OFFSET(get<float>, {0x678, 4, 0, 0})
	DMember(float)                                     ForwardSpeed                                                OFFSET(get<float>, {0x67C, 4, 0, 0})
	DMember(bool)                                      bStoppie                                                    OFFSET(get<bool>, {0x680, 1, 0, 0})
	DMember(bool)                                      bIsBraking                                                  OFFSET(get<bool>, {0x681, 1, 0, 0})
	DMember(bool)                                      bShouldBrake                                                OFFSET(get<bool>, {0x682, 1, 0, 0})
	DMember(bool)                                      bEarlyOutBrakingOutro                                       OFFSET(get<bool>, {0x683, 1, 0, 0})
	DMember(bool)                                      bShouldJumpTrick                                            OFFSET(get<bool>, {0x684, 1, 0, 0})
	DMember(bool)                                      bStateTransitionRuleToReverseLoop                           OFFSET(get<bool>, {0x685, 1, 0, 0})
	DMember(bool)                                      bIsReverseNoFeet                                            OFFSET(get<bool>, {0x686, 1, 0, 0})


	/// Functions
	// Function /Script/MotorcycleRuntime.FortMotorcycleVehicleAnimInstance.CollectConditionsFromDriver
	// void CollectConditionsFromDriver();                                                                                      // [0xa874bf4] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/MotorcycleRuntime.FortPlayerAnimInstance_MotorcycleRider
/// Size: 0x0410 (0x000470 - 0x000880)
class UFortPlayerAnimInstance_MotorcycleRider : public UFortBaseLayerAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2176;

public:
	CMember(class AFortMotorcycleVehicle*)             Motorcycle                                                  OFFSET(get<T>, {0x468, 8, 0, 0})
	CMember(class UFortMotorcycleVehicleAnimInstance*) MotorcycleAnimInstance                                      OFFSET(get<T>, {0x470, 8, 0, 0})
	SMember(FFortAnimInput_Motorcycle)                 MotorcycleInput                                             OFFSET(getStruct<T>, {0x478, 84, 0, 0})
	CMember(class AFortPlayerPawn*)                    FortPlayerPawn                                              OFFSET(get<T>, {0x4D0, 8, 0, 0})
	SMember(FVector)                                   WorldVelocity                                               OFFSET(getStruct<T>, {0x4D8, 24, 0, 0})
	SMember(FVector)                                   LocalVelocity                                               OFFSET(getStruct<T>, {0x4F0, 24, 0, 0})
	DMember(float)                                     RightHandIKAlpha                                            OFFSET(get<float>, {0x508, 4, 0, 0})
	DMember(float)                                     LeftHandIKAlpha                                             OFFSET(get<float>, {0x50C, 4, 0, 0})
	DMember(float)                                     Speed2D                                                     OFFSET(get<float>, {0x510, 4, 0, 0})
	CMember(EFortCardinalDirection)                    LocomotionCardinalDirection                                 OFFSET(get<T>, {0x514, 1, 0, 0})
	CMember(EFortCardinalDirection)                    PrePivotCardinalDirection                                   OFFSET(get<T>, {0x515, 1, 0, 0})
	DMember(bool)                                      bShouldPlayJogPivotTransition                               OFFSET(get<bool>, {0x516, 1, 1, 0})
	DMember(bool)                                      bPivotTransitionDoOnceTriggered                             OFFSET(get<bool>, {0x516, 1, 1, 1})
	DMember(bool)                                      bIsJumping                                                  OFFSET(get<bool>, {0x516, 1, 1, 2})
	DMember(bool)                                      bIsReloading                                                OFFSET(get<bool>, {0x516, 1, 1, 3})
	SMember(FRotator)                                  RiderCatchupRotation                                        OFFSET(getStruct<T>, {0x518, 24, 0, 0})
	DMember(float)                                     RiderZDisplacement                                          OFFSET(get<float>, {0x538, 4, 0, 0})
	DMember(float)                                     RiderDisplacementDampUpFactor                               OFFSET(get<float>, {0x53C, 4, 0, 0})
	DMember(float)                                     RiderDisplacementDampDownFactor                             OFFSET(get<float>, {0x540, 4, 0, 0})
	DMember(float)                                     RiderDisplacementLandingFallDistanceThreshold               OFFSET(get<float>, {0x544, 4, 0, 0})
	DMember(float)                                     RiderMinDisplacement                                        OFFSET(get<float>, {0x548, 4, 0, 0})
	DMember(float)                                     RiderMaxDisplacement                                        OFFSET(get<float>, {0x54C, 4, 0, 0})
	DMember(float)                                     RiderDisplacementRampPerSecond                              OFFSET(get<float>, {0x550, 4, 0, 0})
	DMember(float)                                     RiderRotationInterpSpeed                                    OFFSET(get<float>, {0x554, 4, 0, 0})
	SMember(FFortAnimInput_VelocityImpact)             VelocityImpact                                              OFFSET(getStruct<T>, {0x558, 240, 0, 0})
	SMember(FVector)                                   ImpactDisplacement                                          OFFSET(getStruct<T>, {0x648, 24, 0, 0})
	DMember(float)                                     AbsSteerAngle                                               OFFSET(get<float>, {0x660, 4, 0, 0})
	DMember(float)                                     LeanAngle                                                   OFFSET(get<float>, {0x664, 4, 0, 0})
	DMember(float)                                     FallDistanceValue                                           OFFSET(get<float>, {0x668, 4, 0, 0})
	SMember(FVector)                                   FootTraceLocation                                           OFFSET(getStruct<T>, {0x670, 24, 0, 0})
	DMember(float)                                     FootTraceSideOffset                                         OFFSET(get<float>, {0x688, 4, 0, 0})
	DMember(float)                                     MaxFootLocationDistance                                     OFFSET(get<float>, {0x68C, 4, 0, 0})
	DMember(bool)                                      bHasFootTrace                                               OFFSET(get<bool>, {0x690, 1, 0, 0})
	DMember(bool)                                      bInAir                                                      OFFSET(get<bool>, {0x691, 1, 0, 0})
	DMember(bool)                                      bIsInRollAngleThreshold                                     OFFSET(get<bool>, {0x692, 1, 0, 0})
	DMember(bool)                                      bIsDriveStarting                                            OFFSET(get<bool>, {0x693, 1, 0, 0})
	SMember(FVector)                                   LocalLeftOffset                                             OFFSET(getStruct<T>, {0x698, 24, 0, 0})
	SMember(FVector)                                   WorldPosLeft                                                OFFSET(getStruct<T>, {0x6B0, 24, 0, 0})
	SMember(FRotator)                                  LocalRotLeftOffset                                          OFFSET(getStruct<T>, {0x6C8, 24, 0, 0})
	SMember(FRotator)                                  WorldRotLeft                                                OFFSET(getStruct<T>, {0x6E0, 24, 0, 0})
	SMember(FVector)                                   LocalRightOffset                                            OFFSET(getStruct<T>, {0x6F8, 24, 0, 0})
	SMember(FVector)                                   WorldPosRight                                               OFFSET(getStruct<T>, {0x710, 24, 0, 0})
	SMember(FRotator)                                  LocalRotRightOffset                                         OFFSET(getStruct<T>, {0x728, 24, 0, 0})
	SMember(FRotator)                                  WorldRotRight                                               OFFSET(getStruct<T>, {0x740, 24, 0, 0})
	DMember(bool)                                      bIsSteeringRotating                                         OFFSET(get<bool>, {0x758, 1, 0, 0})
	DMember(bool)                                      bIsStopped                                                  OFFSET(get<bool>, {0x759, 1, 0, 0})
	DMember(bool)                                      bIsIdle                                                     OFFSET(get<bool>, {0x75A, 1, 0, 0})
	DMember(float)                                     IdleSpeedKmh                                                OFFSET(get<float>, {0x75C, 4, 0, 0})
	DMember(bool)                                      bIsSlowingDown                                              OFFSET(get<bool>, {0x760, 1, 0, 0})
	DMember(bool)                                      bIsDrivingFast                                              OFFSET(get<bool>, {0x761, 1, 0, 0})
	DMember(bool)                                      bIsTurningRightHard                                         OFFSET(get<bool>, {0x762, 1, 0, 0})
	DMember(bool)                                      bIsTurningLeftHard                                          OFFSET(get<bool>, {0x763, 1, 0, 0})
	DMember(bool)                                      bIsBraking                                                  OFFSET(get<bool>, {0x764, 1, 0, 0})
	DMember(bool)                                      bIsBoosting                                                 OFFSET(get<bool>, {0x766, 1, 0, 0})
	DMember(bool)                                      bIsJumpTrick                                                OFFSET(get<bool>, {0x767, 1, 0, 0})
	DMember(float)                                     JumpPlayRate                                                OFFSET(get<float>, {0x768, 4, 0, 0})
	DMember(bool)                                      bIsJumpFlipping                                             OFFSET(get<bool>, {0x76C, 1, 0, 0})
	DMember(bool)                                      bShouldEnableAO                                             OFFSET(get<bool>, {0x76D, 1, 0, 0})
	DMember(bool)                                      bIsBodyDragging                                             OFFSET(get<bool>, {0x76E, 1, 0, 0})
	DMember(float)                                     FallDistanceJumpingThreshold                                OFFSET(get<float>, {0x770, 4, 0, 0})
	DMember(float)                                     FallDistanceJumpTrickThreshold                              OFFSET(get<float>, {0x774, 4, 0, 0})
	DMember(float)                                     RollAngleThreshold                                          OFFSET(get<float>, {0x778, 4, 0, 0})
	DMember(float)                                     StartSpeedThreshold                                         OFFSET(get<float>, {0x77C, 4, 0, 0})
	DMember(float)                                     SlowingSpeedThreshold                                       OFFSET(get<float>, {0x780, 4, 0, 0})
	DMember(float)                                     FastSpeedThreshold                                          OFFSET(get<float>, {0x784, 4, 0, 0})
	DMember(float)                                     BrakingDeltaThreshold                                       OFFSET(get<float>, {0x788, 4, 0, 0})
	DMember(float)                                     SteerHardAngleThreshold                                     OFFSET(get<float>, {0x78C, 4, 0, 0})
	DMember(float)                                     GroundTraceUpOffset                                         OFFSET(get<float>, {0x790, 4, 0, 0})
	DMember(float)                                     GroundTraceLength                                           OFFSET(get<float>, {0x794, 4, 0, 0})
	SMember(FVector2D)                                 JumpPlayRateInRange                                         OFFSET(getStruct<T>, {0x798, 16, 0, 0})
	SMember(FVector2D)                                 JumpPlayRateOutRange                                        OFFSET(getStruct<T>, {0x7A8, 16, 0, 0})
	DMember(float)                                     JumpChargeFactor                                            OFFSET(get<float>, {0x7B8, 4, 0, 0})
	DMember(bool)                                      bIsChargingJump                                             OFFSET(get<bool>, {0x7BC, 1, 0, 0})
	DMember(bool)                                      bIsMotorcycleJumping                                        OFFSET(get<bool>, {0x7BD, 1, 0, 0})
	DMember(bool)                                      bMotorcycleLaunchedJump                                     OFFSET(get<bool>, {0x7BE, 1, 0, 0})
	DMember(bool)                                      bWheelie                                                    OFFSET(get<bool>, {0x7BF, 1, 0, 0})
	DMember(bool)                                      bStoppie                                                    OFFSET(get<bool>, {0x7C0, 1, 0, 0})
	CMember(EFortMotorcycleAirTrickType)               AirTrickType                                                OFFSET(get<T>, {0x7C1, 1, 0, 0})
	DMember(bool)                                      bIsJumpingAndNotRolling                                     OFFSET(get<bool>, {0x7C2, 1, 0, 0})
	DMember(bool)                                      bIsOnGroundAndNotRolling                                    OFFSET(get<bool>, {0x7C3, 1, 0, 0})
	DMember(bool)                                      bIsOnGroundAndBoosting                                      OFFSET(get<bool>, {0x7C4, 1, 0, 0})
	DMember(bool)                                      bPlayPivotOnGroundAndNotBoosting                            OFFSET(get<bool>, {0x7C5, 1, 0, 0})
	DMember(bool)                                      bIsPowerSliding                                             OFFSET(get<bool>, {0x7C6, 1, 0, 0})
	DMember(float)                                     PowerSlideSteeringAngleThreshold                            OFFSET(get<float>, {0x7C8, 4, 0, 0})
	DMember(float)                                     PowerSlideSpeedThreshold                                    OFFSET(get<float>, {0x7CC, 4, 0, 0})
	SMember(FVector2D)                                 LandStartPosInRange                                         OFFSET(getStruct<T>, {0x7D8, 16, 0, 0})
	SMember(FVector2D)                                 LandStartPosOutRange                                        OFFSET(getStruct<T>, {0x7E8, 16, 0, 0})
	DMember(float)                                     LandStartPosition                                           OFFSET(get<float>, {0x7F8, 4, 0, 0})
	DMember(bool)                                      bShouldPawnStandUp                                          OFFSET(get<bool>, {0x7FC, 1, 0, 0})
	DMember(bool)                                      bIsSmoothingYaw                                             OFFSET(get<bool>, {0x7FD, 1, 0, 0})
	DMember(float)                                     AimPitch                                                    OFFSET(get<float>, {0x800, 4, 0, 0})
	DMember(float)                                     AimYaw                                                      OFFSET(get<float>, {0x804, 4, 0, 0})
	DMember(float)                                     AimYawLastFrame                                             OFFSET(get<float>, {0x808, 4, 0, 0})
	DMember(float)                                     AimYawSmoothed                                              OFFSET(get<float>, {0x80C, 4, 0, 0})
	DMember(float)                                     BodyAimYaw                                                  OFFSET(get<float>, {0x810, 4, 0, 0})
	DMember(float)                                     NegativeBodyAimYaw                                          OFFSET(get<float>, {0x814, 4, 0, 0})
	DMember(float)                                     ForwardSpeed                                                OFFSET(get<float>, {0x818, 4, 0, 0})
	DMember(float)                                     PreviousForwardSpeed                                        OFFSET(get<float>, {0x81C, 4, 0, 0})
	DMember(float)                                     TotalSpeed                                                  OFFSET(get<float>, {0x820, 4, 0, 0})
	DMember(bool)                                      bIsReversing                                                OFFSET(get<bool>, {0x824, 1, 0, 0})
	DMember(bool)                                      bIsMoving                                                   OFFSET(get<bool>, {0x825, 1, 0, 0})
	DMember(bool)                                      bIsInAir                                                    OFFSET(get<bool>, {0x826, 1, 0, 0})
	DMember(bool)                                      bIsUsingConsumable                                          OFFSET(get<bool>, {0x827, 1, 0, 0})
	SMember(FCachedAnimRelevancyData)                  IntroCachedTime                                             OFFSET(getStruct<T>, {0x828, 20, 0, 0})
	DMember(float)                                     StoppieLandTime                                             OFFSET(get<float>, {0x83C, 4, 0, 0})
	DMember(bool)                                      bShouldPlayHitReact                                         OFFSET(get<bool>, {0x840, 1, 0, 0})
	DMember(bool)                                      bIsPlayingMontage                                           OFFSET(get<bool>, {0x841, 1, 0, 0})
	DMember(float)                                     VehiclePitch                                                OFFSET(get<float>, {0x844, 4, 0, 0})
	DMember(float)                                     VehicleRoll                                                 OFFSET(get<float>, {0x848, 4, 0, 0})
	SMember(FRotator)                                  MeleeTwistRot                                               OFFSET(getStruct<T>, {0x850, 24, 0, 0})
	DMember(bool)                                      bStateTransitionRuleToMovingLoop                            OFFSET(get<bool>, {0x868, 1, 0, 0})
	DMember(float)                                     UpperBodyAdditiveAlpha                                      OFFSET(get<float>, {0x86C, 4, 0, 0})
	DMember(float)                                     UpperBodyAdditiveStrength                                   OFFSET(get<float>, {0x870, 4, 0, 0})
	DMember(float)                                     MovingNoisePlayRate                                         OFFSET(get<float>, {0x874, 4, 0, 0})
	DMember(bool)                                      bIsFemale                                                   OFFSET(get<bool>, {0x878, 1, 0, 0})


	/// Functions
	// Function /Script/MotorcycleRuntime.FortPlayerAnimInstance_MotorcycleRider.HandleStartWheelie
	// void HandleStartWheelie();                                                                                               // [0xa874e80] Final|Native|Public  
	// Function /Script/MotorcycleRuntime.FortPlayerAnimInstance_MotorcycleRider.HandleStartStoppie
	// void HandleStartStoppie();                                                                                               // [0xa874e68] Final|Native|Public  
	// Function /Script/MotorcycleRuntime.FortPlayerAnimInstance_MotorcycleRider.HandleStartChargingJump
	// void HandleStartChargingJump();                                                                                          // [0xa874e50] Final|Native|Public  
	// Function /Script/MotorcycleRuntime.FortPlayerAnimInstance_MotorcycleRider.HandleStartAirTrick
	// void HandleStartAirTrick(EFortMotorcycleAirTrickType TrickType);                                                         // [0xa874dd4] Final|Native|Public  
	// Function /Script/MotorcycleRuntime.FortPlayerAnimInstance_MotorcycleRider.HandleReleaseWheelie
	// void HandleReleaseWheelie();                                                                                             // [0xa874dbc] Final|Native|Public  
	// Function /Script/MotorcycleRuntime.FortPlayerAnimInstance_MotorcycleRider.HandleReleaseStoppie
	// void HandleReleaseStoppie();                                                                                             // [0xa874da4] Final|Native|Public  
	// Function /Script/MotorcycleRuntime.FortPlayerAnimInstance_MotorcycleRider.HandleJump
	// void HandleJump(float InJumpChargeFactor);                                                                               // [0xa874d20] Final|Native|Public  
	// Function /Script/MotorcycleRuntime.FortPlayerAnimInstance_MotorcycleRider.HandleFinishAirTrick
	// void HandleFinishAirTrick();                                                                                             // [0xa874d08] Final|Native|Public  
	// Function /Script/MotorcycleRuntime.FortPlayerAnimInstance_MotorcycleRider.HandleChargingJump
	// void HandleChargingJump(float InJumpChargeFactor);                                                                       // [0xa874c88] Final|Native|Public  
	// Function /Script/MotorcycleRuntime.FortPlayerAnimInstance_MotorcycleRider.HandleCancelChargingJump
	// void HandleCancelChargingJump();                                                                                         // [0xa874c70] Final|Native|Public  
	// Function /Script/MotorcycleRuntime.FortPlayerAnimInstance_MotorcycleRider.CollapsedAimYawSmoothed
	// void CollapsedAimYawSmoothed(float DeltaSeconds);                                                                        // [0xa874b74] Final|Native|Public|BlueprintCallable 
	// Function /Script/MotorcycleRuntime.FortPlayerAnimInstance_MotorcycleRider.CalculateNoiseAlpha
	// void CalculateNoiseAlpha();                                                                                              // [0xa874ab8] Final|Native|Public|BlueprintCallable 
	// Function /Script/MotorcycleRuntime.FortPlayerAnimInstance_MotorcycleRider.AnimNotify_JumpEntered
	// void AnimNotify_JumpEntered();                                                                                           // [0xa874a98] Final|Native|Public  
};

/// Class /Script/MotorcycleRuntime.FortPlayerAnimInstance_MotorcycleDriver
/// Size: 0x00C0 (0x000880 - 0x000940)
class UFortPlayerAnimInstance_MotorcycleDriver : public UFortPlayerAnimInstance_MotorcycleRider
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2368;

public:
	DMember(bool)                                      bHasMoved                                                   OFFSET(get<bool>, {0x880, 1, 0, 0})
	DMember(float)                                     SteeringRotation                                            OFFSET(get<float>, {0x884, 4, 0, 0})
	DMember(bool)                                      bIsInInventoryMode                                          OFFSET(get<bool>, {0x888, 1, 0, 0})
	DMember(bool)                                      bShouldJump                                                 OFFSET(get<bool>, {0x889, 1, 0, 0})
	DMember(bool)                                      bShouldAllowHeadAO                                          OFFSET(get<bool>, {0x88A, 1, 0, 0})
	DMember(float)                                     FeetDragPlayRate                                            OFFSET(get<float>, {0x88C, 4, 0, 0})
	DMember(bool)                                      bShouldJumpCharge                                           OFFSET(get<bool>, {0x890, 1, 0, 0})
	DMember(bool)                                      bIsLandingInPlace                                           OFFSET(get<bool>, {0x891, 1, 0, 0})
	DMember(bool)                                      bStateRuleFallingToMoving                                   OFFSET(get<bool>, {0x892, 1, 0, 0})
	DMember(bool)                                      bShouldApplyChargingNoise                                   OFFSET(get<bool>, {0x893, 1, 0, 0})
	DMember(float)                                     JumpTimer                                                   OFFSET(get<float>, {0x894, 4, 0, 0})
	DMember(bool)                                      bShouldAllowJump                                            OFFSET(get<bool>, {0x898, 1, 0, 0})
	DMember(bool)                                      bIsSurfaceWater                                             OFFSET(get<bool>, {0x899, 1, 0, 0})
	DMember(bool)                                      bSlopeAlphaShouldIncrease                                   OFFSET(get<bool>, {0x89A, 1, 0, 0})
	DMember(float)                                     SlopeAlpha                                                  OFFSET(get<float>, {0x89C, 4, 0, 0})
	DMember(bool)                                      bHasPassenger                                               OFFSET(get<bool>, {0x8A0, 1, 0, 0})
	DMember(bool)                                      bIsOneHandedDualWield                                       OFFSET(get<bool>, {0x8A1, 1, 0, 0})
	DMember(bool)                                      bShouldApplyBodyTwistForMelee                               OFFSET(get<bool>, {0x8A2, 1, 0, 0})
	DMember(bool)                                      bIsMelee                                                    OFFSET(get<bool>, {0x8A3, 1, 0, 0})
	DMember(bool)                                      bIsRangedOrConsumable                                       OFFSET(get<bool>, {0x8A4, 1, 0, 0})
	DMember(bool)                                      bShouldApplyFeetNoise                                       OFFSET(get<bool>, {0x8A5, 1, 0, 0})
	DMember(float)                                     CachedFallingStartTime                                      OFFSET(get<float>, {0x8A8, 4, 0, 0})
	DMember(bool)                                      bWasFalling                                                 OFFSET(get<bool>, {0x8AC, 1, 0, 0})
	DMember(bool)                                      bIsRevving                                                  OFFSET(get<bool>, {0x8AD, 1, 0, 0})
	DMember(float)                                     StoppieLeanAlpha                                            OFFSET(get<float>, {0x8B0, 4, 0, 0})
	DMember(bool)                                      bShouldPlayMovingJump                                       OFFSET(get<bool>, {0x8B4, 1, 0, 0})
	DMember(bool)                                      bWasJumpTrickLeftOrRight                                    OFFSET(get<bool>, {0x8B5, 1, 0, 0})
	DMember(bool)                                      bIsFromJumpTrick                                            OFFSET(get<bool>, {0x8B6, 1, 0, 0})
	DMember(bool)                                      bShouldAllowMovingJumpLand                                  OFFSET(get<bool>, {0x8B7, 1, 0, 0})
	DMember(bool)                                      bStateTransitionRuleToReverseLoop                           OFFSET(get<bool>, {0x8B8, 1, 0, 0})
	DMember(bool)                                      bIsReverseNoFeet                                            OFFSET(get<bool>, {0x8B9, 1, 0, 0})
	DMember(float)                                     WalkSPlayRate                                               OFFSET(get<float>, {0x8BC, 4, 0, 0})
	DMember(float)                                     LeanSpeed                                                   OFFSET(get<float>, {0x8C0, 4, 0, 0})
	DMember(float)                                     LeanAlpha                                                   OFFSET(get<float>, {0x8C4, 4, 0, 0})
	DMember(bool)                                      bIsCombatTransition                                         OFFSET(get<bool>, {0x8C8, 1, 0, 0})
	DMember(bool)                                      bShouldBrake                                                OFFSET(get<bool>, {0x8C9, 1, 0, 0})
	DMember(bool)                                      bShouldExitFromLocomotion                                   OFFSET(get<bool>, {0x8CA, 1, 0, 0})
	DMember(bool)                                      bEarlyOutBrakingOutro                                       OFFSET(get<bool>, {0x8CB, 1, 0, 0})
	DMember(bool)                                      bIsRightInput                                               OFFSET(get<bool>, {0x8CC, 1, 0, 0})
	DMember(bool)                                      bShouldPlayReverseOutro                                     OFFSET(get<bool>, {0x8CD, 1, 0, 0})
	DMember(bool)                                      bShouldApplyHipSuspension                                   OFFSET(get<bool>, {0x8CE, 1, 0, 0})
	DMember(bool)                                      bIsDefaultJumpTrick                                         OFFSET(get<bool>, {0x8CF, 1, 0, 0})
	DMember(bool)                                      bIsLeftJumpTrick                                            OFFSET(get<bool>, {0x8D0, 1, 0, 0})
	DMember(bool)                                      bIsRightJumpTrick                                           OFFSET(get<bool>, {0x8D1, 1, 0, 0})
	DMember(bool)                                      bIsNoneJumpTrick                                            OFFSET(get<bool>, {0x8D2, 1, 0, 0})
	DMember(bool)                                      bIsSoloJumpTrick                                            OFFSET(get<bool>, {0x8D3, 1, 0, 0})
	DMember(bool)                                      bShouldExitFromDefaultJumpTrick                             OFFSET(get<bool>, {0x8D4, 1, 0, 0})
	DMember(bool)                                      bEarlyOutFromMoveStart                                      OFFSET(get<bool>, {0x8D5, 1, 0, 0})
	DMember(bool)                                      bShouldStop                                                 OFFSET(get<bool>, {0x8D6, 1, 0, 0})
	DMember(float)                                     CachedTrickIntroTime                                        OFFSET(get<float>, {0x8D8, 4, 0, 0})
	DMember(bool)                                      bShouldPlayJumpTrickIntroLeft                               OFFSET(get<bool>, {0x8DC, 1, 0, 0})
	DMember(bool)                                      bShouldPlayJumpTrickIntroRight                              OFFSET(get<bool>, {0x8DD, 1, 0, 0})
	DMember(bool)                                      bStateRuleNeutralToJumpTrickLeft                            OFFSET(get<bool>, {0x8DE, 1, 0, 0})
	DMember(bool)                                      bStateRuleNeutralToJumpTrickRight                           OFFSET(get<bool>, {0x8DF, 1, 0, 0})
	DMember(bool)                                      bShouldJumpTrick                                            OFFSET(get<bool>, {0x8E0, 1, 0, 0})
	DMember(bool)                                      bHasJumpChargeStarted                                       OFFSET(get<bool>, {0x8E1, 1, 0, 0})
	DMember(bool)                                      bIsJumpTrickLanding                                         OFFSET(get<bool>, {0x8E2, 1, 0, 0})
	DMember(bool)                                      bWasSoloJumping                                             OFFSET(get<bool>, {0x8E3, 1, 0, 0})
	DMember(bool)                                      bWasStoppieLanding                                          OFFSET(get<bool>, {0x8E4, 1, 0, 0})
	DMember(float)                                     UpperBodyBlendAlpha                                         OFFSET(get<float>, {0x8E8, 4, 0, 0})
	DMember(float)                                     StoredJumpTrickIntroPosition                                OFFSET(get<float>, {0x8EC, 4, 0, 0})
	DMember(float)                                     JumpTrickIntroPosition                                      OFFSET(get<float>, {0x8F0, 4, 0, 0})
	DMember(float)                                     JumpChargeLegIKAlpha                                        OFFSET(get<float>, {0x8F4, 4, 0, 0})
	SMember(FSoftObjectPath)                           ScytheMontage                                               OFFSET(getStruct<T>, {0x8F8, 24, 0, 0})
	SMember(FName)                                     JumpTrickIntroPositionCurveName                             OFFSET(getStruct<T>, {0x910, 4, 0, 0})
	SMember(FCachedAnimRelevancyData)                  FallStartCachedTime                                         OFFSET(getStruct<T>, {0x914, 20, 0, 0})
	SMember(FCachedAnimRelevancyData)                  TrickCachedTime                                             OFFSET(getStruct<T>, {0x928, 20, 0, 0})
};

/// Class /Script/MotorcycleRuntime.FortPlayerAnimInstance_MotorcyclePassenger
/// Size: 0x0050 (0x000880 - 0x0008D0)
class UFortPlayerAnimInstance_MotorcyclePassenger : public UFortPlayerAnimInstance_MotorcycleRider
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2256;

public:
	CMember(class UFortPlayerAnimInstance_MotorcycleDriver*) DriverAnimInstance                                    OFFSET(get<T>, {0x880, 8, 0, 0})
	DMember(bool)                                      bHasDriver                                                  OFFSET(get<bool>, {0x888, 1, 0, 0})
	DMember(bool)                                      bIsDriverJumping                                            OFFSET(get<bool>, {0x889, 1, 0, 0})
	DMember(bool)                                      bIsDriverInventoryMode                                      OFFSET(get<bool>, {0x88A, 1, 0, 0})
	DMember(bool)                                      bIsSeatedAction                                             OFFSET(get<bool>, {0x88B, 1, 0, 0})
	DMember(bool)                                      bIsThrowingConsumable                                       OFFSET(get<bool>, {0x88C, 1, 0, 0})
	DMember(bool)                                      bEarlyOutStoppieOutro                                       OFFSET(get<bool>, {0x88D, 1, 0, 0})
	DMember(float)                                     RunForwardAlpha                                             OFFSET(get<float>, {0x890, 4, 0, 0})
	DMember(bool)                                      bAimFWD                                                     OFFSET(get<bool>, {0x894, 1, 0, 0})
	DMember(bool)                                      bAimBWD                                                     OFFSET(get<bool>, {0x895, 1, 0, 0})
	DMember(bool)                                      bAimLFT                                                     OFFSET(get<bool>, {0x896, 1, 0, 0})
	DMember(bool)                                      bAimRGT                                                     OFFSET(get<bool>, {0x897, 1, 0, 0})
	DMember(float)                                     AimFWDDeltaAngleDegrees                                     OFFSET(get<float>, {0x898, 4, 0, 0})
	DMember(float)                                     AimBWDDeltaAngleDegrees                                     OFFSET(get<float>, {0x89C, 4, 0, 0})
	DMember(float)                                     AimLFTDeltaAngleDegrees                                     OFFSET(get<float>, {0x8A0, 4, 0, 0})
	DMember(float)                                     AimRGTDeltaAngleDegrees                                     OFFSET(get<float>, {0x8A4, 4, 0, 0})
	DMember(bool)                                      bShouldJump                                                 OFFSET(get<bool>, {0x8A8, 1, 0, 0})
	DMember(bool)                                      bShouldApplySlopeCorrection                                 OFFSET(get<bool>, {0x8A9, 1, 0, 0})
	DMember(bool)                                      bShouldExitFromLocomotion                                   OFFSET(get<bool>, {0x8AA, 1, 0, 0})
	SMember(FCachedAnimRelevancyData)                  JumpIntroCachedTime                                         OFFSET(getStruct<T>, {0x8AC, 20, 0, 0})
	DMember(float)                                     CachedJumpIntroTime                                         OFFSET(get<float>, {0x8C0, 4, 0, 0})
};

/// Class /Script/MotorcycleRuntime.FortCameraMode_Motorcycle
/// Size: 0x0000 (0x001CC0 - 0x001CC0)
class UFortCameraMode_Motorcycle : public UFortCameraMode_AthenaVehicle
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 7360;

public:
};

/// Class /Script/MotorcycleRuntime.FortMotorcycleVehicle
/// Size: 0x0450 (0x002020 - 0x002470)
class AFortMotorcycleVehicle : public AFortAthenaSKMotorVehicle
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 9328;

public:
	SMember(FMulticastInlineDelegate)                  OnStartChargingJumpDelegate                                 OFFSET(getStruct<T>, {0x2018, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnCancelChargingJumpDelegate                                OFFSET(getStruct<T>, {0x2028, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnJumpDelegate                                              OFFSET(getStruct<T>, {0x2038, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnChargingJumpDelegate                                      OFFSET(getStruct<T>, {0x2048, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnStartAirTrickDelegate                                     OFFSET(getStruct<T>, {0x2058, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnFinishAirTrickDelegate                                    OFFSET(getStruct<T>, {0x2068, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnStartWheelieDelegate                                      OFFSET(getStruct<T>, {0x2078, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnReleaseWheelieDelegate                                    OFFSET(getStruct<T>, {0x2088, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnLandWheelieDelegate                                       OFFSET(getStruct<T>, {0x2098, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnFailWheelieDelegate                                       OFFSET(getStruct<T>, {0x20A8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnStartStoppieDelegate                                      OFFSET(getStruct<T>, {0x20B8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnReleaseStoppieDelegate                                    OFFSET(getStruct<T>, {0x20C8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnLandStoppieDelegate                                       OFFSET(getStruct<T>, {0x20D8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnInventoryModeChangedDelegate                              OFFSET(getStruct<T>, {0x20E8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnSuperSlidingChangedDelegate                               OFFSET(getStruct<T>, {0x20F8, 16, 0, 0})
	CMember(class UClass*)                             InventoryCameraModeClass                                    OFFSET(get<T>, {0x2108, 8, 0, 0})
	CMember(class UClass*)                             InventoryCameraModeClassADS                                 OFFSET(get<T>, {0x2110, 8, 0, 0})
	CMember(class UClass*)                             PassengerCameraModeClass                                    OFFSET(get<T>, {0x2118, 8, 0, 0})
	CMember(class UClass*)                             PassengerCameraModeClassADS                                 OFFSET(get<T>, {0x2120, 8, 0, 0})
	CMember(class UFortMotorcycleVehicleConfigs*)      FortMotorcycleVehicleConfigs                                OFFSET(get<T>, {0x2128, 8, 0, 0})
	SMember(FName)                                     RearAxleSocket                                              OFFSET(getStruct<T>, {0x2130, 4, 0, 0})
	CMember(TArray<FActionDefForUI>)                   ActionDefForUI                                              OFFSET(get<T>, {0x2138, 16, 0, 0})
	DMember(float)                                     SwingArmRotation                                            OFFSET(get<float>, {0x2148, 4, 0, 0})
	CMember(TArray<int32_t>)                           BoostShapeIndices                                           OFFSET(get<T>, {0x21C8, 16, 0, 0})
	DMember(bool)                                      bIsBoostAttacking                                           OFFSET(get<bool>, {0x21D8, 1, 0, 0})
	CMember(EFortMotorcycleAirTrickType)               CachedTrickType                                             OFFSET(get<T>, {0x21E8, 1, 0, 0})
	DMember(bool)                                      bHadPassengerAtTrickStart                                   OFFSET(get<bool>, {0x21E9, 1, 0, 0})
	CMember(TArray<FName>)                             PassengerADSSockets                                         OFFSET(get<T>, {0x2220, 16, 0, 0})
	CMember(TArray<FVector>)                           PassengerADSRelativeOffsets                                 OFFSET(get<T>, {0x2230, 16, 0, 0})
	CMember(class UNiagaraComponent*)                  CachedNiagaraComponentRoadAndExhaust                        OFFSET(get<T>, {0x2240, 8, 0, 0})
	SMember(FString)                                   RoadAndExhaustNiagaraComponentName                          OFFSET(getStruct<T>, {0x2248, 16, 0, 0})
	SMember(FName)                                     RoadAndExhaustVehicleSpeedName                              OFFSET(getStruct<T>, {0x2258, 4, 0, 0})
	SMember(FName)                                     RoadAndExhaustSlideDirectionName                            OFFSET(getStruct<T>, {0x225C, 4, 0, 0})
	DMember(float)                                     RoadAndExhaustMinSpeedForDust                               OFFSET(get<float>, {0x2260, 4, 0, 0})
	SMember(FName)                                     RoadAndExhaustDustRearName                                  OFFSET(getStruct<T>, {0x2264, 4, 0, 0})
	SMember(FName)                                     RoadAndExhaustDustColorLerpName                             OFFSET(getStruct<T>, {0x2268, 4, 0, 0})
	DMember(float)                                     RoadAndExhaustDustColorLerp                                 OFFSET(get<float>, {0x226C, 4, 0, 0})
	SMember(FName)                                     RoadAndExhaustDustAlphaMultiplierName                       OFFSET(getStruct<T>, {0x2270, 4, 0, 0})
	DMember(float)                                     RoadAndExhaustDustAlphaMultiplier                           OFFSET(get<float>, {0x2274, 4, 0, 0})
	SMember(FName)                                     RoadAndExhaustPeelOutColorIndexName                         OFFSET(getStruct<T>, {0x2278, 4, 0, 0})
	SMember(FName)                                     RoadAndExhaustPeelOutRearName                               OFFSET(getStruct<T>, {0x227C, 4, 0, 0})
	SMember(FName)                                     RoadAndExhaustIsPeelOutOnRoadName                           OFFSET(getStruct<T>, {0x2280, 4, 0, 0})
	SMember(FName)                                     RoadAndExhaustIsPeelOutOnRoadRewindName                     OFFSET(getStruct<T>, {0x2284, 4, 0, 0})
	SMember(FName)                                     RoadAndExhaustIsInAirName                                   OFFSET(getStruct<T>, {0x2288, 4, 0, 0})
	SMember(FGameplayTag)                              RoadAndExhaustCameraDirtGameplayCueTag                      OFFSET(getStruct<T>, {0x228C, 4, 0, 0})
	SMember(FGameplayTag)                              RoadAndExhaustCameraWaterGameplayCueTag                     OFFSET(getStruct<T>, {0x2290, 4, 0, 0})
	CMember(TArray<TEnumAsByte<EPhysicalSurface>>)     RoadAndExhaustSurfaceTypeArrayForFX                         OFFSET(get<T>, {0x2298, 16, 0, 0})
	CMember(class ULegacyCameraShake*)                 DriverCameraShakeInstance                                   OFFSET(get<T>, {0x22A8, 8, 0, 0})
	CMember(class ULegacyCameraShake*)                 AcceleratingCameraShakeInstance                             OFFSET(get<T>, {0x22B0, 8, 0, 0})
	SMember(FName)                                     RoadAndExhaustHeadlightsName                                OFFSET(getStruct<T>, {0x22C0, 4, 0, 0})
	SMember(FName)                                     RoadAndExhaustBrakelightsName                               OFFSET(getStruct<T>, {0x22C4, 4, 0, 0})
	SMember(FScalableFloat)                            DoorBashMinSpeed                                            OFFSET(getStruct<T>, {0x22C8, 40, 0, 0})
	SMember(FScalableFloat)                            DoorBashMaxSpeed                                            OFFSET(getStruct<T>, {0x22F0, 40, 0, 0})
	SMember(FScalableFloat)                            DoorBashForwardDistanceMin                                  OFFSET(getStruct<T>, {0x2318, 40, 0, 0})
	SMember(FScalableFloat)                            DoorBashForwardDistanceMax                                  OFFSET(getStruct<T>, {0x2340, 40, 0, 0})
	SMember(FGameplayTag)                              DoorBashGameplayCueTag                                      OFFSET(getStruct<T>, {0x2368, 4, 0, 0})
	CMember(TArray<TEnumAsByte<EObjectTypeQuery>>)     DoorBashCollisionTypesForDoor                               OFFSET(get<T>, {0x2370, 16, 0, 0})
	CMember(TArray<TEnumAsByte<EObjectTypeQuery>>)     DoorBashCollisionTypesForPawn                               OFFSET(get<T>, {0x2380, 16, 0, 0})
	SMember(FScalableFloat)                            DoorBashSphereRadiusForPawnLaunch                           OFFSET(getStruct<T>, {0x2390, 40, 0, 0})
	SMember(FScalableFloat)                            DoorBashScalarForPawnLaunch                                 OFFSET(getStruct<T>, {0x23B8, 40, 0, 0})
	SMember(FGameplayTag)                              DoorBashPawnLaunchGameplayCueTag                            OFFSET(getStruct<T>, {0x23E0, 4, 0, 0})
	SMember(FGameplayTagQuery)                         InventoryModeTagQuery                                       OFFSET(getStruct<T>, {0x23E8, 72, 0, 0})
	SMember(FGameplayTagContainer)                     InputContextBlockedTags                                     OFFSET(getStruct<T>, {0x2430, 32, 0, 0})
	SMember(FGameplayTag)                              MobileHUDTag                                                OFFSET(getStruct<T>, {0x2468, 4, 0, 0})


	/// Functions
	// Function /Script/MotorcycleRuntime.FortMotorcycleVehicle.ServerEjectAllPlayers
	// void ServerEjectAllPlayers();                                                                                            // [0xa240548] Net|NetReliableNative|Event|Public|NetServer 
	// Function /Script/MotorcycleRuntime.FortMotorcycleVehicle.OnRep_IsBoostAttacking
	// void OnRep_IsBoostAttacking();                                                                                           // [0xa874ff8] Final|Native|Protected 
	// Function /Script/MotorcycleRuntime.FortMotorcycleVehicle.OnPlayerWeaponChanged
	// void OnPlayerWeaponChanged(class AFortWeapon* InNewWeapon, class AFortWeapon* InPrevWeapon);                             // [0xa874f04] Final|Native|Public  
	// Function /Script/MotorcycleRuntime.FortMotorcycleVehicle.MotorcycleWheelie__DelegateSignature
	// void MotorcycleWheelie__DelegateSignature();                                                                             // [0x18a39e4] MulticastDelegate|Public|Delegate 
	// Function /Script/MotorcycleRuntime.FortMotorcycleVehicle.MotorcycleSuperSlidingChanged__DelegateSignature
	// void MotorcycleSuperSlidingChanged__DelegateSignature(bool bIsSuperSliding);                                             // [0x18a39e4] MulticastDelegate|Public|Delegate 
	// Function /Script/MotorcycleRuntime.FortMotorcycleVehicle.MotorcycleStoppie__DelegateSignature
	// void MotorcycleStoppie__DelegateSignature();                                                                             // [0x18a39e4] MulticastDelegate|Public|Delegate 
	// Function /Script/MotorcycleRuntime.FortMotorcycleVehicle.MotorcycleStartAirTrick__DelegateSignature
	// void MotorcycleStartAirTrick__DelegateSignature(EFortMotorcycleAirTrickType TrickType);                                  // [0x18a39e4] MulticastDelegate|Public|Delegate 
	// Function /Script/MotorcycleRuntime.FortMotorcycleVehicle.MotorcycleJump__DelegateSignature
	// void MotorcycleJump__DelegateSignature(float JumpChargeFactor);                                                          // [0x18a39e4] MulticastDelegate|Public|Delegate 
	// Function /Script/MotorcycleRuntime.FortMotorcycleVehicle.MotorcycleInventoryMode__DelegateSignature
	// void MotorcycleInventoryMode__DelegateSignature(bool IsInInventoryMode);                                                 // [0x18a39e4] MulticastDelegate|Public|Delegate 
	// Function /Script/MotorcycleRuntime.FortMotorcycleVehicle.MotorcycleChargingJump__DelegateSignature
	// void MotorcycleChargingJump__DelegateSignature();                                                                        // [0x18a39e4] MulticastDelegate|Public|Delegate 
	// Function /Script/MotorcycleRuntime.FortMotorcycleVehicle.MotorcycleAirTrick__DelegateSignature
	// void MotorcycleAirTrick__DelegateSignature();                                                                            // [0x18a39e4] MulticastDelegate|Public|Delegate 
	// Function /Script/MotorcycleRuntime.FortMotorcycleVehicle.IsSuperSliding
	// bool IsSuperSliding();                                                                                                   // [0xa874ee0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MotorcycleRuntime.FortMotorcycleVehicle.IsPowerSliding
	// bool IsPowerSliding();                                                                                                   // [0xa874ebc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MotorcycleRuntime.FortMotorcycleVehicle.IsInInventoryMode
	// bool IsInInventoryMode();                                                                                                // [0xa874e98] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MotorcycleRuntime.FortMotorcycleVehicle.GetSurfaceTypeVehicleOn
	// TEnumAsByte<EPhysicalSurface> GetSurfaceTypeVehicleOn();                                                                 // [0xa874c58] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MotorcycleRuntime.FortMotorcycleVehicle.GetLeanAngleDegrees
	// float GetLeanAngleDegrees();                                                                                             // [0xa874c30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MotorcycleRuntime.FortMotorcycleVehicle.GetAverageSpringNormal
	// FVector GetAverageSpringNormal();                                                                                        // [0xa874c08] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MotorcycleRuntime.FortMotorcycleVehicle.ChangeBoostAttackState
	// void ChangeBoostAttackState(bool bNewIsBoostAttacking);                                                                  // [0xa874acc] Final|Native|Public|BlueprintCallable 
	// Function /Script/MotorcycleRuntime.FortMotorcycleVehicle.BP_OnStartWheelie
	// void BP_OnStartWheelie();                                                                                                // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/MotorcycleRuntime.FortMotorcycleVehicle.BP_OnStartStoppie
	// void BP_OnStartStoppie();                                                                                                // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/MotorcycleRuntime.FortMotorcycleVehicle.BP_OnStartChargingJump
	// void BP_OnStartChargingJump();                                                                                           // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/MotorcycleRuntime.FortMotorcycleVehicle.BP_OnStartAirTrick
	// void BP_OnStartAirTrick(EFortMotorcycleAirTrickType TrickType);                                                          // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/MotorcycleRuntime.FortMotorcycleVehicle.BP_OnReleaseWheelie
	// void BP_OnReleaseWheelie();                                                                                              // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/MotorcycleRuntime.FortMotorcycleVehicle.BP_OnReleaseStoppie
	// void BP_OnReleaseStoppie();                                                                                              // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/MotorcycleRuntime.FortMotorcycleVehicle.BP_OnLandWheelie
	// void BP_OnLandWheelie();                                                                                                 // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/MotorcycleRuntime.FortMotorcycleVehicle.BP_OnLandStoppie
	// void BP_OnLandStoppie();                                                                                                 // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/MotorcycleRuntime.FortMotorcycleVehicle.BP_OnJump
	// void BP_OnJump(float JumpChargeFactor);                                                                                  // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/MotorcycleRuntime.FortMotorcycleVehicle.BP_OnFinishAirTrick
	// void BP_OnFinishAirTrick();                                                                                              // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/MotorcycleRuntime.FortMotorcycleVehicle.BP_OnFailWheelie
	// void BP_OnFailWheelie();                                                                                                 // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/MotorcycleRuntime.FortMotorcycleVehicle.BP_OnChargingJump
	// void BP_OnChargingJump(float JumpChargeFactor);                                                                          // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/MotorcycleRuntime.FortMotorcycleVehicle.BP_OnCancelChargingJump
	// void BP_OnCancelChargingJump();                                                                                          // [0x18a39e4] Event|Public|BlueprintEvent 
};

/// Class /Script/MotorcycleRuntime.FortMotorcycleVehicleConfigs
/// Size: 0x02D0 (0x000948 - 0x000C18)
class UFortMotorcycleVehicleConfigs : public UFortPhysicsVehicleConfigs
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3096;

public:
	CMember(TArray<FMotorcycleWheel>)                  Wheels                                                      OFFSET(get<T>, {0x948, 16, 0, 0})
	DMember(float)                                     SpringInterpDamp                                            OFFSET(get<float>, {0x958, 4, 0, 0})
	DMember(float)                                     WheelieSpringInterpDamp                                     OFFSET(get<float>, {0x95C, 4, 0, 0})
	DMember(float)                                     WallPushStiff                                               OFFSET(get<float>, {0x960, 4, 0, 0})
	DMember(float)                                     WallPushDamp                                                OFFSET(get<float>, {0x964, 4, 0, 0})
	SMember(FVector)                                   WallPushXTraceOffset                                        OFFSET(getStruct<T>, {0x968, 24, 0, 0})
	DMember(float)                                     WallPushForwardTraceLengthScale                             OFFSET(get<float>, {0x980, 4, 0, 0})
	DMember(float)                                     WallPushBackTraceLengthScale                                OFFSET(get<float>, {0x984, 4, 0, 0})
	DMember(float)                                     WallPushRightTraceLength                                    OFFSET(get<float>, {0x988, 4, 0, 0})
	SMember(FVector)                                   WallPushRightTraceOffset                                    OFFSET(getStruct<T>, {0x990, 24, 0, 0})
	SMember(FVector)                                   WallPushRearRightTraceOffset                                OFFSET(getStruct<T>, {0x9A8, 24, 0, 0})
	DMember(float)                                     WallPushAngle                                               OFFSET(get<float>, {0x9C0, 4, 0, 0})
	DMember(bool)                                      bUseWallPushTracesForWalls                                  OFFSET(get<bool>, {0x9C4, 1, 0, 0})
	DMember(bool)                                      bUseWallPushRearSideTracesForWalls                          OFFSET(get<bool>, {0x9C5, 1, 0, 0})
	DMember(float)                                     MaxJumpChargeTime                                           OFFSET(get<float>, {0x9C8, 4, 0, 0})
	DMember(float)                                     MinChargeJumpForce                                          OFFSET(get<float>, {0x9CC, 4, 0, 0})
	DMember(float)                                     MaxChargeJumpForce                                          OFFSET(get<float>, {0x9D0, 4, 0, 0})
	DMember(float)                                     MinJumpForwardAngle                                         OFFSET(get<float>, {0x9D4, 4, 0, 0})
	DMember(float)                                     MaxJumpForwardAngle                                         OFFSET(get<float>, {0x9D8, 4, 0, 0})
	SMember(FVector)                                   JumpForceMinCOMOffset                                       OFFSET(getStruct<T>, {0x9E0, 24, 0, 0})
	SMember(FVector)                                   JumpForceMaxCOMOffset                                       OFFSET(getStruct<T>, {0x9F8, 24, 0, 0})
	DMember(float)                                     JumpChargeGraceTimeSeconds                                  OFFSET(get<float>, {0xA10, 4, 0, 0})
	DMember(float)                                     JumpGraceTimeSeconds                                        OFFSET(get<float>, {0xA14, 4, 0, 0})
	DMember(float)                                     LeanAngleScale                                              OFFSET(get<float>, {0xA18, 4, 0, 0})
	DMember(float)                                     LeanStiff                                                   OFFSET(get<float>, {0xA1C, 4, 0, 0})
	DMember(float)                                     LeanDamp                                                    OFFSET(get<float>, {0xA20, 4, 0, 0})
	DMember(float)                                     LeanStrength                                                OFFSET(get<float>, {0xA24, 4, 0, 0})
	DMember(float)                                     SlideCatchupForceTime                                       OFFSET(get<float>, {0xA28, 4, 0, 0})
	DMember(float)                                     SlideCatchupSpeed                                           OFFSET(get<float>, {0xA2C, 4, 0, 0})
	DMember(float)                                     SlideCatchupPushForce                                       OFFSET(get<float>, {0xA30, 4, 0, 0})
	DMember(float)                                     AutoAirPitchAngle                                           OFFSET(get<float>, {0xA34, 4, 0, 0})
	DMember(float)                                     MinSteeringAngleForModifiedFriction                         OFFSET(get<float>, {0xA38, 4, 0, 0})
	DMember(float)                                     MinSpeedForModifiedFriction                                 OFFSET(get<float>, {0xA3C, 4, 0, 0})
	DMember(float)                                     MinSteeringAngleToConsiderTractionLost                      OFFSET(get<float>, {0xA40, 4, 0, 0})
	DMember(float)                                     FrictionRatioToConsiderTractionLost                         OFFSET(get<float>, {0xA44, 4, 0, 0})
	DMember(float)                                     WheeliePitchStiffMin                                        OFFSET(get<float>, {0xA48, 4, 0, 0})
	DMember(float)                                     WheeliePitchStiffMax                                        OFFSET(get<float>, {0xA4C, 4, 0, 0})
	DMember(float)                                     WheeliePitchDampMin                                         OFFSET(get<float>, {0xA50, 4, 0, 0})
	DMember(float)                                     WheeliePitchDampMax                                         OFFSET(get<float>, {0xA54, 4, 0, 0})
	DMember(float)                                     WheeliePitchAngleMin                                        OFFSET(get<float>, {0xA58, 4, 0, 0})
	DMember(float)                                     WheeliePitchAngleMax                                        OFFSET(get<float>, {0xA5C, 4, 0, 0})
	DMember(float)                                     StoppiePitchAngle                                           OFFSET(get<float>, {0xA60, 4, 0, 0})
	DMember(float)                                     StoppiePitchStiff                                           OFFSET(get<float>, {0xA64, 4, 0, 0})
	DMember(float)                                     StoppiePitchDamp                                            OFFSET(get<float>, {0xA68, 4, 0, 0})
	DMember(float)                                     WheelieRampSeconds                                          OFFSET(get<float>, {0xA6C, 4, 0, 0})
	DMember(float)                                     WheelieFailPitchAngle                                       OFFSET(get<float>, {0xA70, 4, 0, 0})
	DMember(float)                                     WheelieRecoveryRate                                         OFFSET(get<float>, {0xA74, 4, 0, 0})
	DMember(float)                                     WheelieFailRecoveryRate                                     OFFSET(get<float>, {0xA78, 4, 0, 0})
	DMember(float)                                     WheelieMinStartSpeed                                        OFFSET(get<float>, {0xA7C, 4, 0, 0})
	DMember(float)                                     StoppieMinStopSpeed                                         OFFSET(get<float>, {0xA80, 4, 0, 0})
	DMember(float)                                     WheelieSteerFactor                                          OFFSET(get<float>, {0xA84, 4, 0, 0})
	DMember(float)                                     StoppieSteerFactor                                          OFFSET(get<float>, {0xA88, 4, 0, 0})
	DMember(float)                                     WheelieSteerAlphaThreshold                                  OFFSET(get<float>, {0xA8C, 4, 0, 0})
	DMember(float)                                     WheelieStoppieMaxLeanAllowedToInitiate                      OFFSET(get<float>, {0xA90, 4, 0, 0})
	DMember(float)                                     WheelieGroundBufferTime                                     OFFSET(get<float>, {0xA94, 4, 0, 0})
	DMember(float)                                     StoppieGroundBufferTime                                     OFFSET(get<float>, {0xA98, 4, 0, 0})
	DMember(float)                                     WheelieSpringLengthExponent                                 OFFSET(get<float>, {0xA9C, 4, 0, 0})
	DMember(float)                                     WheelieWheelOffsetLerpMultiplier                            OFFSET(get<float>, {0xAA0, 4, 0, 0})
	DMember(float)                                     WheelieBrakeFactor                                          OFFSET(get<float>, {0xAA4, 4, 0, 0})
	DMember(float)                                     StoppieTurnInPlaceSpeed                                     OFFSET(get<float>, {0xAA8, 4, 0, 0})
	DMember(float)                                     StoppieTurnInPlaceSpeedIce                                  OFFSET(get<float>, {0xAAC, 4, 0, 0})
	DMember(float)                                     StoppieTurnInPlaceSpeedMud                                  OFFSET(get<float>, {0xAB0, 4, 0, 0})
	DMember(float)                                     MinSpeedKmhForMaxStoppie                                    OFFSET(get<float>, {0xAB4, 4, 0, 0})
	DMember(float)                                     StoppieTurnAngleExponent                                    OFFSET(get<float>, {0xAB8, 4, 0, 0})
	DMember(float)                                     StoppieMaxTurnAngle                                         OFFSET(get<float>, {0xABC, 4, 0, 0})
	DMember(float)                                     WheelieTireTractionMultiplier_Min                           OFFSET(get<float>, {0xAC0, 4, 0, 0})
	DMember(float)                                     WheelieCameraMinStraightFactor                              OFFSET(get<float>, {0xAC4, 4, 0, 0})
	DMember(float)                                     MaxLeanAccel                                                OFFSET(get<float>, {0xAC8, 4, 0, 0})
	DMember(float)                                     CruiseControlForwardAlpha                                   OFFSET(get<float>, {0xACC, 4, 0, 0})
	DMember(float)                                     InventoryModeSpeedKmh                                       OFFSET(get<float>, {0xAD0, 4, 0, 0})
	DMember(float)                                     CruiseControlDisengageSpeedKmh                              OFFSET(get<float>, {0xAD4, 4, 0, 0})
	DMember(bool)                                      bPowerSlideIsSuperSlide                                     OFFSET(get<bool>, {0xAD8, 1, 0, 0})
	DMember(float)                                     PowerSlideFrontFrictionMultiplier                           OFFSET(get<float>, {0xADC, 4, 0, 0})
	DMember(float)                                     PowerSlideRearFrictionMultiplier                            OFFSET(get<float>, {0xAE0, 4, 0, 0})
	DMember(float)                                     PowerSlideRoadFrontFrictionMultiplier                       OFFSET(get<float>, {0xAE4, 4, 0, 0})
	DMember(float)                                     PowerSlideRoadRearFrictionMultiplier                        OFFSET(get<float>, {0xAE8, 4, 0, 0})
	DMember(float)                                     PowerSlideDirtFrontFrictionMultiplier                       OFFSET(get<float>, {0xAEC, 4, 0, 0})
	DMember(float)                                     PowerSlideDirtRearFrictionMultiplier                        OFFSET(get<float>, {0xAF0, 4, 0, 0})
	DMember(float)                                     PowerSlideGrassFrontFrictionMultiplier                      OFFSET(get<float>, {0xAF4, 4, 0, 0})
	DMember(float)                                     PowerSlideGrassRearFrictionMultiplier                       OFFSET(get<float>, {0xAF8, 4, 0, 0})
	DMember(float)                                     PowerSlideSnowFrontFrictionMultiplier                       OFFSET(get<float>, {0xAFC, 4, 0, 0})
	DMember(float)                                     PowerSlideSnowRearFrictionMultiplier                        OFFSET(get<float>, {0xB00, 4, 0, 0})
	DMember(float)                                     PowerSlideIceFrontFrictionMultiplier                        OFFSET(get<float>, {0xB04, 4, 0, 0})
	DMember(float)                                     PowerSlideIceRearFrictionMultiplier                         OFFSET(get<float>, {0xB08, 4, 0, 0})
	DMember(float)                                     PowerSlideMudFrontFrictionMultiplier                        OFFSET(get<float>, {0xB0C, 4, 0, 0})
	DMember(float)                                     PowerSlideMudRearFrictionMultiplier                         OFFSET(get<float>, {0xB10, 4, 0, 0})
	DMember(float)                                     PowerSlideFactor                                            OFFSET(get<float>, {0xB14, 4, 0, 0})
	DMember(float)                                     PowerSlideDampFactor                                        OFFSET(get<float>, {0xB18, 4, 0, 0})
	DMember(float)                                     FrictionDampFactor                                          OFFSET(get<float>, {0xB1C, 4, 0, 0})
	DMember(float)                                     PowerSlideLeanAngleScale                                    OFFSET(get<float>, {0xB20, 4, 0, 0})
	DMember(float)                                     SuperSlideLeanAngle                                         OFFSET(get<float>, {0xB24, 4, 0, 0})
	DMember(float)                                     SuperSlideMinStartYawSpeedDegrees                           OFFSET(get<float>, {0xB28, 4, 0, 0})
	DMember(float)                                     SuperSlideMinStartSpeedKmh                                  OFFSET(get<float>, {0xB2C, 4, 0, 0})
	DMember(float)                                     SuperSlideMaxEndSpeedKmh                                    OFFSET(get<float>, {0xB30, 4, 0, 0})
	DMember(float)                                     PowerslideInputWindow                                       OFFSET(get<float>, {0xB34, 4, 0, 0})
	DMember(float)                                     ShootingMinSpeedSteeringAngle                               OFFSET(get<float>, {0xB38, 4, 0, 0})
	DMember(float)                                     ShootingMaxSpeedSteeringAngle                               OFFSET(get<float>, {0xB3C, 4, 0, 0})
	DMember(float)                                     InventoryModeCameraYawConstraint                            OFFSET(get<float>, {0xB40, 4, 0, 0})
	DMember(float)                                     BoostTopSpeedMultiplier                                     OFFSET(get<float>, {0xB44, 4, 0, 0})
	DMember(float)                                     BoostPushForceMultiplier                                    OFFSET(get<float>, {0xB48, 4, 0, 0})
	DMember(float)                                     BoostMinPushForce                                           OFFSET(get<float>, {0xB4C, 4, 0, 0})
	DMember(float)                                     BoostSteeringMultiplier                                     OFFSET(get<float>, {0xB50, 4, 0, 0})
	DMember(bool)                                      bPlayHolsterAnimsOnClient                                   OFFSET(get<bool>, {0xB54, 1, 0, 0})
	DMember(float)                                     FrontWheelSteeringFactor                                    OFFSET(get<float>, {0xB58, 4, 0, 0})
	DMember(float)                                     FrontWheelRotationAcceleration                              OFFSET(get<float>, {0xB5C, 4, 0, 0})
	DMember(float)                                     PassengerInventoryCooldown                                  OFFSET(get<float>, {0xB60, 4, 0, 0})
	DMember(float)                                     DriverInventoryCooldown                                     OFFSET(get<float>, {0xB64, 4, 0, 0})
	CMember(TSet<FName>)                               BoostAttackShapes                                           OFFSET(get<T>, {0xB68, 80, 0, 0})
	DMember(float)                                     CameraAssistStrengthMax                                     OFFSET(get<float>, {0xBB8, 4, 0, 0})
	DMember(float)                                     CameraAssistStrengthMin                                     OFFSET(get<float>, {0xBBC, 4, 0, 0})
	DMember(float)                                     CameraAssistStrengthRecovery                                OFFSET(get<float>, {0xBC0, 4, 0, 0})
	DMember(float)                                     CameraAssistInterpSpeed                                     OFFSET(get<float>, {0xBC4, 4, 0, 0})
	DMember(float)                                     AirTrickIncrementInterval                                   OFFSET(get<float>, {0xBC8, 4, 0, 0})
	DMember(float)                                     AirTrickFeedStartTime                                       OFFSET(get<float>, {0xBCC, 4, 0, 0})
	DMember(float)                                     AirTrickPitchMultiplier                                     OFFSET(get<float>, {0xBD0, 4, 0, 0})
	DMember(float)                                     AirTrickYawMultiplier                                       OFFSET(get<float>, {0xBD4, 4, 0, 0})
	DMember(bool)                                      bAllowAirTrickNeutral                                       OFFSET(get<bool>, {0xBD8, 1, 0, 0})
	DMember(bool)                                      bAllowAirTrickRight                                         OFFSET(get<bool>, {0xBD9, 1, 0, 0})
	DMember(bool)                                      bAllowAirTrickLeft                                          OFFSET(get<bool>, {0xBDA, 1, 0, 0})
	DMember(float)                                     PoppedTireTractionScalar_Front                              OFFSET(get<float>, {0xBDC, 4, 0, 0})
	DMember(float)                                     PoppedTireTractionScalar_Rear                               OFFSET(get<float>, {0xBE0, 4, 0, 0})
	DMember(float)                                     PoppedTireTractionScalar_Both                               OFFSET(get<float>, {0xBE4, 4, 0, 0})
	SMember(FScalableFloat)                            TopSpeedKmh                                                 OFFSET(getStruct<T>, {0xBE8, 40, 0, 0})
};

/// Struct /Script/MotorcycleRuntime.MotorcycleWheel
/// Size: 0x003C (0x000000 - 0x00003C)
class FMotorcycleWheel : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 60;

public:
	SMember(FName)                                     WheelSocket                                                 OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(float)                                     Radius                                                      OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     TireWidth                                                   OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     SpringLength                                                OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     WheelieMinSpringLength                                      OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     SpringStiff                                                 OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     SpringDamp                                                  OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     PoppedTireSpringLength                                      OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(float)                                     PoppedTireSpringStiff                                       OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(float)                                     PoppedTireSpringDamp                                        OFFSET(get<float>, {0x24, 4, 0, 0})
	DMember(float)                                     PowerslideSpringStiff                                       OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(float)                                     PowerslideSpringDamp                                        OFFSET(get<float>, {0x2C, 4, 0, 0})
	DMember(float)                                     WheelieSpringStiff                                          OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(float)                                     WheelieSpringDamp                                           OFFSET(get<float>, {0x34, 4, 0, 0})
	CMember(EFortMotorcycleWheelTraceMode)             WheelTraceMode                                              OFFSET(get<T>, {0x38, 1, 0, 0})
};

/// Enum /Script/MotorcycleRuntime.EFortMotorcycleAirTrickType
/// Size: 0x05
enum class EFortMotorcycleAirTrickType : uint8_t
{
	EFortMotorcycleAirTrickType__None                                                = 0,
	EFortMotorcycleAirTrickType__Default                                             = 1,
	EFortMotorcycleAirTrickType__Left                                                = 2,
	EFortMotorcycleAirTrickType__Right                                               = 3,
	EFortMotorcycleAirTrickType__EFortMotorcycleAirTrickType_MAX                     = 4
};

/// Enum /Script/MotorcycleRuntime.EFortMotorcycleWheelTraceMode
/// Size: 0x04
enum class EFortMotorcycleWheelTraceMode : uint8_t
{
	EFortMotorcycleWheelTraceMode__None                                              = 0,
	EFortMotorcycleWheelTraceMode__BoxSweep                                          = 1,
	EFortMotorcycleWheelTraceMode__LineTrace                                         = 2,
	EFortMotorcycleWheelTraceMode__EFortMotorcycleWheelTraceMode_MAX                 = 3
};

