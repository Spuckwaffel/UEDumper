
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: GameplayAbilities
/// dependency: GameplayCameras
/// dependency: GameplayTags
/// dependency: Niagara

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

/// Class /Script/MotorcycleRuntime.FortMotorcycleVehicleAnimInstance
/// Size: 0x0070 (0x000620 - 0x000690)
#pragma pack(push, 0x1)
class alignas(0x10) UFortMotorcycleVehicleAnimInstance : public UFortVehicleAnimInstance
{ 
public:
	class AFortMotorcycleVehicle*                      MotorcycleVehicle;                                          // 0x0618   (0x0008)  
	FRotator                                           SwingArmRotation;                                           // 0x0620   (0x0018)  
	bool                                               bIsInInventoryMode;                                         // 0x0638   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0639   (0x0007)  MISSED
	class UFortPlayerAnimInstance_MotorcycleDriver*    DriverAnimInstance;                                         // 0x0640   (0x0008)  
	bool                                               bIsBikeParked;                                              // 0x0648   (0x0001)  
	bool                                               bIsBikeOn;                                                  // 0x0649   (0x0001)  
	bool                                               bIsBikeStopping;                                            // 0x064A   (0x0001)  
	bool                                               bIsReversing;                                               // 0x064B   (0x0001)  
	float                                              TotalSpeed;                                                 // 0x064C   (0x0004)  
	bool                                               bIsSurfaceWater;                                            // 0x0650   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0651   (0x0003)  MISSED
	float                                              AdditiveAlpha;                                              // 0x0654   (0x0004)  
	bool                                               bIsRevving;                                                 // 0x0658   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0659   (0x0003)  MISSED
	float                                              AccelAlpha;                                                 // 0x065C   (0x0004)  
	bool                                               bIsThrottling;                                              // 0x0660   (0x0001)  
	bool                                               bIsHonking;                                                 // 0x0661   (0x0001)  
	bool                                               bIsSoloJumpTrickOutro;                                      // 0x0662   (0x0001)  
	bool                                               bIsJumpTrickNone;                                           // 0x0663   (0x0001)  
	float                                              BrakeLeverAlpha;                                            // 0x0664   (0x0004)  
	bool                                               bShouldExitFromLocomotion;                                  // 0x0668   (0x0001)  
	bool                                               bStateRuleFromRevvingToThrottle;                            // 0x0669   (0x0001)  
	bool                                               bShouldPlayThrottleAnim;                                    // 0x066A   (0x0001)  
	bool                                               bStateTransitionRuleToMovingLoop;                           // 0x066B   (0x0001)  
	bool                                               bEarlyOutFromMovingStart;                                   // 0x066C   (0x0001)  
	bool                                               bShouldStop;                                                // 0x066D   (0x0001)  
	bool                                               bShouldReverse;                                             // 0x066E   (0x0001)  
	bool                                               bShouldReverseStop;                                         // 0x066F   (0x0001)  
	bool                                               bShouldStopThrottling;                                      // 0x0670   (0x0001)  
	bool                                               bIsFromJumpTrick;                                           // 0x0671   (0x0001)  
	bool                                               bIsSoloJumpTrick;                                           // 0x0672   (0x0001)  
	bool                                               bShouldJump;                                                // 0x0673   (0x0001)  
	bool                                               bIsMoving;                                                  // 0x0674   (0x0001)  
	EFortMotorcycleAirTrickType                        AirTrickType;                                               // 0x0675   (0x0001)  
	bool                                               bIsLandingInPlace;                                          // 0x0676   (0x0001)  
	bool                                               bStateRuleFallingToMoving;                                  // 0x0677   (0x0001)  
	float                                              JumpChargeFactor;                                           // 0x0678   (0x0004)  
	float                                              ForwardSpeed;                                               // 0x067C   (0x0004)  
	bool                                               bStoppie;                                                   // 0x0680   (0x0001)  
	bool                                               bIsBraking;                                                 // 0x0681   (0x0001)  
	bool                                               bShouldBrake;                                               // 0x0682   (0x0001)  
	bool                                               bEarlyOutBrakingOutro;                                      // 0x0683   (0x0001)  
	bool                                               bShouldJumpTrick;                                           // 0x0684   (0x0001)  
	bool                                               bStateTransitionRuleToReverseLoop;                          // 0x0685   (0x0001)  
	bool                                               bIsReverseNoFeet;                                           // 0x0686   (0x0001)  
	unsigned char                                      UnknownData03_6[0x1];                                       // 0x0687   (0x0001)  MISSED


	/// Functions
	// Function /Script/MotorcycleRuntime.FortMotorcycleVehicleAnimInstance.CollectConditionsFromDriver
	// void CollectConditionsFromDriver();                                                                                   // [0xa874bf4] Final|Native|Public|BlueprintCallable 
};
#pragma pack(pop)

/// Class /Script/MotorcycleRuntime.FortPlayerAnimInstance_MotorcycleRider
/// Size: 0x0410 (0x000470 - 0x000880)
class UFortPlayerAnimInstance_MotorcycleRider : public UFortBaseLayerAnimInstance
{ 
public:
	class AFortMotorcycleVehicle*                      Motorcycle;                                                 // 0x0468   (0x0008)  
	class UFortMotorcycleVehicleAnimInstance*          MotorcycleAnimInstance;                                     // 0x0470   (0x0008)  
	FFortAnimInput_Motorcycle                          MotorcycleInput;                                            // 0x0478   (0x0054)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x04CC   (0x0004)  MISSED
	class AFortPlayerPawn*                             FortPlayerPawn;                                             // 0x04D0   (0x0008)  
	FVector                                            WorldVelocity;                                              // 0x04D8   (0x0018)  
	FVector                                            LocalVelocity;                                              // 0x04F0   (0x0018)  
	float                                              RightHandIKAlpha;                                           // 0x0508   (0x0004)  
	float                                              LeftHandIKAlpha;                                            // 0x050C   (0x0004)  
	float                                              Speed2D;                                                    // 0x0510   (0x0004)  
	EFortCardinalDirection                             LocomotionCardinalDirection;                                // 0x0514   (0x0001)  
	EFortCardinalDirection                             PrePivotCardinalDirection;                                  // 0x0515   (0x0001)  
	bool                                               bShouldPlayJogPivotTransition : 1;                          // 0x0516:0 (0x0001)  
	bool                                               bPivotTransitionDoOnceTriggered : 1;                        // 0x0516:1 (0x0001)  
	bool                                               bIsJumping : 1;                                             // 0x0516:2 (0x0001)  
	bool                                               bIsReloading : 1;                                           // 0x0516:3 (0x0001)  
	unsigned char                                      UnknownData01_4[0x1];                                       // 0x0517   (0x0001)  MISSED
	FRotator                                           RiderCatchupRotation;                                       // 0x0518   (0x0018)  
	unsigned char                                      UnknownData02_5[0x8];                                       // 0x0530   (0x0008)  MISSED
	float                                              RiderZDisplacement;                                         // 0x0538   (0x0004)  
	float                                              RiderDisplacementDampUpFactor;                              // 0x053C   (0x0004)  
	float                                              RiderDisplacementDampDownFactor;                            // 0x0540   (0x0004)  
	float                                              RiderDisplacementLandingFallDistanceThreshold;              // 0x0544   (0x0004)  
	float                                              RiderMinDisplacement;                                       // 0x0548   (0x0004)  
	float                                              RiderMaxDisplacement;                                       // 0x054C   (0x0004)  
	float                                              RiderDisplacementRampPerSecond;                             // 0x0550   (0x0004)  
	float                                              RiderRotationInterpSpeed;                                   // 0x0554   (0x0004)  
	FFortAnimInput_VelocityImpact                      VelocityImpact;                                             // 0x0558   (0x00F0)  
	FVector                                            ImpactDisplacement;                                         // 0x0648   (0x0018)  
	float                                              AbsSteerAngle;                                              // 0x0660   (0x0004)  
	float                                              LeanAngle;                                                  // 0x0664   (0x0004)  
	float                                              FallDistanceValue;                                          // 0x0668   (0x0004)  
	unsigned char                                      UnknownData03_5[0x4];                                       // 0x066C   (0x0004)  MISSED
	FVector                                            FootTraceLocation;                                          // 0x0670   (0x0018)  
	float                                              FootTraceSideOffset;                                        // 0x0688   (0x0004)  
	float                                              MaxFootLocationDistance;                                    // 0x068C   (0x0004)  
	bool                                               bHasFootTrace;                                              // 0x0690   (0x0001)  
	bool                                               bInAir;                                                     // 0x0691   (0x0001)  
	bool                                               bIsInRollAngleThreshold;                                    // 0x0692   (0x0001)  
	bool                                               bIsDriveStarting;                                           // 0x0693   (0x0001)  
	unsigned char                                      UnknownData04_5[0x4];                                       // 0x0694   (0x0004)  MISSED
	FVector                                            LocalLeftOffset;                                            // 0x0698   (0x0018)  
	FVector                                            WorldPosLeft;                                               // 0x06B0   (0x0018)  
	FRotator                                           LocalRotLeftOffset;                                         // 0x06C8   (0x0018)  
	FRotator                                           WorldRotLeft;                                               // 0x06E0   (0x0018)  
	FVector                                            LocalRightOffset;                                           // 0x06F8   (0x0018)  
	FVector                                            WorldPosRight;                                              // 0x0710   (0x0018)  
	FRotator                                           LocalRotRightOffset;                                        // 0x0728   (0x0018)  
	FRotator                                           WorldRotRight;                                              // 0x0740   (0x0018)  
	bool                                               bIsSteeringRotating;                                        // 0x0758   (0x0001)  
	bool                                               bIsStopped;                                                 // 0x0759   (0x0001)  
	bool                                               bIsIdle;                                                    // 0x075A   (0x0001)  
	unsigned char                                      UnknownData05_5[0x1];                                       // 0x075B   (0x0001)  MISSED
	float                                              IdleSpeedKmh;                                               // 0x075C   (0x0004)  
	bool                                               bIsSlowingDown;                                             // 0x0760   (0x0001)  
	bool                                               bIsDrivingFast;                                             // 0x0761   (0x0001)  
	bool                                               bIsTurningRightHard;                                        // 0x0762   (0x0001)  
	bool                                               bIsTurningLeftHard;                                         // 0x0763   (0x0001)  
	bool                                               bIsBraking;                                                 // 0x0764   (0x0001)  
	unsigned char                                      UnknownData06_5[0x1];                                       // 0x0765   (0x0001)  MISSED
	bool                                               bIsBoosting;                                                // 0x0766   (0x0001)  
	bool                                               bIsJumpTrick;                                               // 0x0767   (0x0001)  
	float                                              JumpPlayRate;                                               // 0x0768   (0x0004)  
	bool                                               bIsJumpFlipping;                                            // 0x076C   (0x0001)  
	bool                                               bShouldEnableAO;                                            // 0x076D   (0x0001)  
	bool                                               bIsBodyDragging;                                            // 0x076E   (0x0001)  
	unsigned char                                      UnknownData07_5[0x1];                                       // 0x076F   (0x0001)  MISSED
	float                                              FallDistanceJumpingThreshold;                               // 0x0770   (0x0004)  
	float                                              FallDistanceJumpTrickThreshold;                             // 0x0774   (0x0004)  
	float                                              RollAngleThreshold;                                         // 0x0778   (0x0004)  
	float                                              StartSpeedThreshold;                                        // 0x077C   (0x0004)  
	float                                              SlowingSpeedThreshold;                                      // 0x0780   (0x0004)  
	float                                              FastSpeedThreshold;                                         // 0x0784   (0x0004)  
	float                                              BrakingDeltaThreshold;                                      // 0x0788   (0x0004)  
	float                                              SteerHardAngleThreshold;                                    // 0x078C   (0x0004)  
	float                                              GroundTraceUpOffset;                                        // 0x0790   (0x0004)  
	float                                              GroundTraceLength;                                          // 0x0794   (0x0004)  
	FVector2D                                          JumpPlayRateInRange;                                        // 0x0798   (0x0010)  
	FVector2D                                          JumpPlayRateOutRange;                                       // 0x07A8   (0x0010)  
	float                                              JumpChargeFactor;                                           // 0x07B8   (0x0004)  
	bool                                               bIsChargingJump;                                            // 0x07BC   (0x0001)  
	bool                                               bIsMotorcycleJumping;                                       // 0x07BD   (0x0001)  
	bool                                               bMotorcycleLaunchedJump;                                    // 0x07BE   (0x0001)  
	bool                                               bWheelie;                                                   // 0x07BF   (0x0001)  
	bool                                               bStoppie;                                                   // 0x07C0   (0x0001)  
	EFortMotorcycleAirTrickType                        AirTrickType;                                               // 0x07C1   (0x0001)  
	bool                                               bIsJumpingAndNotRolling;                                    // 0x07C2   (0x0001)  
	bool                                               bIsOnGroundAndNotRolling;                                   // 0x07C3   (0x0001)  
	bool                                               bIsOnGroundAndBoosting;                                     // 0x07C4   (0x0001)  
	bool                                               bPlayPivotOnGroundAndNotBoosting;                           // 0x07C5   (0x0001)  
	bool                                               bIsPowerSliding;                                            // 0x07C6   (0x0001)  
	unsigned char                                      UnknownData08_5[0x1];                                       // 0x07C7   (0x0001)  MISSED
	float                                              PowerSlideSteeringAngleThreshold;                           // 0x07C8   (0x0004)  
	float                                              PowerSlideSpeedThreshold;                                   // 0x07CC   (0x0004)  
	unsigned char                                      UnknownData09_5[0x8];                                       // 0x07D0   (0x0008)  MISSED
	FVector2D                                          LandStartPosInRange;                                        // 0x07D8   (0x0010)  
	FVector2D                                          LandStartPosOutRange;                                       // 0x07E8   (0x0010)  
	float                                              LandStartPosition;                                          // 0x07F8   (0x0004)  
	bool                                               bShouldPawnStandUp;                                         // 0x07FC   (0x0001)  
	bool                                               bIsSmoothingYaw;                                            // 0x07FD   (0x0001)  
	unsigned char                                      UnknownData10_5[0x2];                                       // 0x07FE   (0x0002)  MISSED
	float                                              AimPitch;                                                   // 0x0800   (0x0004)  
	float                                              AimYaw;                                                     // 0x0804   (0x0004)  
	float                                              AimYawLastFrame;                                            // 0x0808   (0x0004)  
	float                                              AimYawSmoothed;                                             // 0x080C   (0x0004)  
	float                                              BodyAimYaw;                                                 // 0x0810   (0x0004)  
	float                                              NegativeBodyAimYaw;                                         // 0x0814   (0x0004)  
	float                                              ForwardSpeed;                                               // 0x0818   (0x0004)  
	float                                              PreviousForwardSpeed;                                       // 0x081C   (0x0004)  
	float                                              TotalSpeed;                                                 // 0x0820   (0x0004)  
	bool                                               bIsReversing;                                               // 0x0824   (0x0001)  
	bool                                               bIsMoving;                                                  // 0x0825   (0x0001)  
	bool                                               bIsInAir;                                                   // 0x0826   (0x0001)  
	bool                                               bIsUsingConsumable;                                         // 0x0827   (0x0001)  
	FCachedAnimRelevancyData                           IntroCachedTime;                                            // 0x0828   (0x0014)  
	float                                              StoppieLandTime;                                            // 0x083C   (0x0004)  
	bool                                               bShouldPlayHitReact;                                        // 0x0840   (0x0001)  
	bool                                               bIsPlayingMontage;                                          // 0x0841   (0x0001)  
	unsigned char                                      UnknownData11_5[0x2];                                       // 0x0842   (0x0002)  MISSED
	float                                              VehiclePitch;                                               // 0x0844   (0x0004)  
	float                                              VehicleRoll;                                                // 0x0848   (0x0004)  
	unsigned char                                      UnknownData12_5[0x4];                                       // 0x084C   (0x0004)  MISSED
	FRotator                                           MeleeTwistRot;                                              // 0x0850   (0x0018)  
	bool                                               bStateTransitionRuleToMovingLoop;                           // 0x0868   (0x0001)  
	unsigned char                                      UnknownData13_5[0x3];                                       // 0x0869   (0x0003)  MISSED
	float                                              UpperBodyAdditiveAlpha;                                     // 0x086C   (0x0004)  
	float                                              UpperBodyAdditiveStrength;                                  // 0x0870   (0x0004)  
	float                                              MovingNoisePlayRate;                                        // 0x0874   (0x0004)  
	bool                                               bIsFemale;                                                  // 0x0878   (0x0001)  
	unsigned char                                      UnknownData14_6[0x7];                                       // 0x0879   (0x0007)  MISSED


	/// Functions
	// Function /Script/MotorcycleRuntime.FortPlayerAnimInstance_MotorcycleRider.HandleStartWheelie
	// void HandleStartWheelie();                                                                                            // [0xa874e80] Final|Native|Public  
	// Function /Script/MotorcycleRuntime.FortPlayerAnimInstance_MotorcycleRider.HandleStartStoppie
	// void HandleStartStoppie();                                                                                            // [0xa874e68] Final|Native|Public  
	// Function /Script/MotorcycleRuntime.FortPlayerAnimInstance_MotorcycleRider.HandleStartChargingJump
	// void HandleStartChargingJump();                                                                                       // [0xa874e50] Final|Native|Public  
	// Function /Script/MotorcycleRuntime.FortPlayerAnimInstance_MotorcycleRider.HandleStartAirTrick
	// void HandleStartAirTrick(EFortMotorcycleAirTrickType TrickType);                                                      // [0xa874dd4] Final|Native|Public  
	// Function /Script/MotorcycleRuntime.FortPlayerAnimInstance_MotorcycleRider.HandleReleaseWheelie
	// void HandleReleaseWheelie();                                                                                          // [0xa874dbc] Final|Native|Public  
	// Function /Script/MotorcycleRuntime.FortPlayerAnimInstance_MotorcycleRider.HandleReleaseStoppie
	// void HandleReleaseStoppie();                                                                                          // [0xa874da4] Final|Native|Public  
	// Function /Script/MotorcycleRuntime.FortPlayerAnimInstance_MotorcycleRider.HandleJump
	// void HandleJump(float InJumpChargeFactor);                                                                            // [0xa874d20] Final|Native|Public  
	// Function /Script/MotorcycleRuntime.FortPlayerAnimInstance_MotorcycleRider.HandleFinishAirTrick
	// void HandleFinishAirTrick();                                                                                          // [0xa874d08] Final|Native|Public  
	// Function /Script/MotorcycleRuntime.FortPlayerAnimInstance_MotorcycleRider.HandleChargingJump
	// void HandleChargingJump(float InJumpChargeFactor);                                                                    // [0xa874c88] Final|Native|Public  
	// Function /Script/MotorcycleRuntime.FortPlayerAnimInstance_MotorcycleRider.HandleCancelChargingJump
	// void HandleCancelChargingJump();                                                                                      // [0xa874c70] Final|Native|Public  
	// Function /Script/MotorcycleRuntime.FortPlayerAnimInstance_MotorcycleRider.CollapsedAimYawSmoothed
	// void CollapsedAimYawSmoothed(float DeltaSeconds);                                                                     // [0xa874b74] Final|Native|Public|BlueprintCallable 
	// Function /Script/MotorcycleRuntime.FortPlayerAnimInstance_MotorcycleRider.CalculateNoiseAlpha
	// void CalculateNoiseAlpha();                                                                                           // [0xa874ab8] Final|Native|Public|BlueprintCallable 
	// Function /Script/MotorcycleRuntime.FortPlayerAnimInstance_MotorcycleRider.AnimNotify_JumpEntered
	// void AnimNotify_JumpEntered();                                                                                        // [0xa874a98] Final|Native|Public  
};

/// Class /Script/MotorcycleRuntime.FortPlayerAnimInstance_MotorcycleDriver
/// Size: 0x00C0 (0x000880 - 0x000940)
class UFortPlayerAnimInstance_MotorcycleDriver : public UFortPlayerAnimInstance_MotorcycleRider
{ 
public:
	bool                                               bHasMoved;                                                  // 0x0880   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0881   (0x0003)  MISSED
	float                                              SteeringRotation;                                           // 0x0884   (0x0004)  
	bool                                               bIsInInventoryMode;                                         // 0x0888   (0x0001)  
	bool                                               bShouldJump;                                                // 0x0889   (0x0001)  
	bool                                               bShouldAllowHeadAO;                                         // 0x088A   (0x0001)  
	unsigned char                                      UnknownData01_5[0x1];                                       // 0x088B   (0x0001)  MISSED
	float                                              FeetDragPlayRate;                                           // 0x088C   (0x0004)  
	bool                                               bShouldJumpCharge;                                          // 0x0890   (0x0001)  
	bool                                               bIsLandingInPlace;                                          // 0x0891   (0x0001)  
	bool                                               bStateRuleFallingToMoving;                                  // 0x0892   (0x0001)  
	bool                                               bShouldApplyChargingNoise;                                  // 0x0893   (0x0001)  
	float                                              JumpTimer;                                                  // 0x0894   (0x0004)  
	bool                                               bShouldAllowJump;                                           // 0x0898   (0x0001)  
	bool                                               bIsSurfaceWater;                                            // 0x0899   (0x0001)  
	bool                                               bSlopeAlphaShouldIncrease;                                  // 0x089A   (0x0001)  
	unsigned char                                      UnknownData02_5[0x1];                                       // 0x089B   (0x0001)  MISSED
	float                                              SlopeAlpha;                                                 // 0x089C   (0x0004)  
	bool                                               bHasPassenger;                                              // 0x08A0   (0x0001)  
	bool                                               bIsOneHandedDualWield;                                      // 0x08A1   (0x0001)  
	bool                                               bShouldApplyBodyTwistForMelee;                              // 0x08A2   (0x0001)  
	bool                                               bIsMelee;                                                   // 0x08A3   (0x0001)  
	bool                                               bIsRangedOrConsumable;                                      // 0x08A4   (0x0001)  
	bool                                               bShouldApplyFeetNoise;                                      // 0x08A5   (0x0001)  
	unsigned char                                      UnknownData03_5[0x2];                                       // 0x08A6   (0x0002)  MISSED
	float                                              CachedFallingStartTime;                                     // 0x08A8   (0x0004)  
	bool                                               bWasFalling;                                                // 0x08AC   (0x0001)  
	bool                                               bIsRevving;                                                 // 0x08AD   (0x0001)  
	unsigned char                                      UnknownData04_5[0x2];                                       // 0x08AE   (0x0002)  MISSED
	float                                              StoppieLeanAlpha;                                           // 0x08B0   (0x0004)  
	bool                                               bShouldPlayMovingJump;                                      // 0x08B4   (0x0001)  
	bool                                               bWasJumpTrickLeftOrRight;                                   // 0x08B5   (0x0001)  
	bool                                               bIsFromJumpTrick;                                           // 0x08B6   (0x0001)  
	bool                                               bShouldAllowMovingJumpLand;                                 // 0x08B7   (0x0001)  
	bool                                               bStateTransitionRuleToReverseLoop;                          // 0x08B8   (0x0001)  
	bool                                               bIsReverseNoFeet;                                           // 0x08B9   (0x0001)  
	unsigned char                                      UnknownData05_5[0x2];                                       // 0x08BA   (0x0002)  MISSED
	float                                              WalkSPlayRate;                                              // 0x08BC   (0x0004)  
	float                                              LeanSpeed;                                                  // 0x08C0   (0x0004)  
	float                                              LeanAlpha;                                                  // 0x08C4   (0x0004)  
	bool                                               bIsCombatTransition;                                        // 0x08C8   (0x0001)  
	bool                                               bShouldBrake;                                               // 0x08C9   (0x0001)  
	bool                                               bShouldExitFromLocomotion;                                  // 0x08CA   (0x0001)  
	bool                                               bEarlyOutBrakingOutro;                                      // 0x08CB   (0x0001)  
	bool                                               bIsRightInput;                                              // 0x08CC   (0x0001)  
	bool                                               bShouldPlayReverseOutro;                                    // 0x08CD   (0x0001)  
	bool                                               bShouldApplyHipSuspension;                                  // 0x08CE   (0x0001)  
	bool                                               bIsDefaultJumpTrick;                                        // 0x08CF   (0x0001)  
	bool                                               bIsLeftJumpTrick;                                           // 0x08D0   (0x0001)  
	bool                                               bIsRightJumpTrick;                                          // 0x08D1   (0x0001)  
	bool                                               bIsNoneJumpTrick;                                           // 0x08D2   (0x0001)  
	bool                                               bIsSoloJumpTrick;                                           // 0x08D3   (0x0001)  
	bool                                               bShouldExitFromDefaultJumpTrick;                            // 0x08D4   (0x0001)  
	bool                                               bEarlyOutFromMoveStart;                                     // 0x08D5   (0x0001)  
	bool                                               bShouldStop;                                                // 0x08D6   (0x0001)  
	unsigned char                                      UnknownData06_5[0x1];                                       // 0x08D7   (0x0001)  MISSED
	float                                              CachedTrickIntroTime;                                       // 0x08D8   (0x0004)  
	bool                                               bShouldPlayJumpTrickIntroLeft;                              // 0x08DC   (0x0001)  
	bool                                               bShouldPlayJumpTrickIntroRight;                             // 0x08DD   (0x0001)  
	bool                                               bStateRuleNeutralToJumpTrickLeft;                           // 0x08DE   (0x0001)  
	bool                                               bStateRuleNeutralToJumpTrickRight;                          // 0x08DF   (0x0001)  
	bool                                               bShouldJumpTrick;                                           // 0x08E0   (0x0001)  
	bool                                               bHasJumpChargeStarted;                                      // 0x08E1   (0x0001)  
	bool                                               bIsJumpTrickLanding;                                        // 0x08E2   (0x0001)  
	bool                                               bWasSoloJumping;                                            // 0x08E3   (0x0001)  
	bool                                               bWasStoppieLanding;                                         // 0x08E4   (0x0001)  
	unsigned char                                      UnknownData07_5[0x3];                                       // 0x08E5   (0x0003)  MISSED
	float                                              UpperBodyBlendAlpha;                                        // 0x08E8   (0x0004)  
	float                                              StoredJumpTrickIntroPosition;                               // 0x08EC   (0x0004)  
	float                                              JumpTrickIntroPosition;                                     // 0x08F0   (0x0004)  
	float                                              JumpChargeLegIKAlpha;                                       // 0x08F4   (0x0004)  
	FSoftObjectPath                                    ScytheMontage;                                              // 0x08F8   (0x0018)  
	FName                                              JumpTrickIntroPositionCurveName;                            // 0x0910   (0x0004)  
	FCachedAnimRelevancyData                           FallStartCachedTime;                                        // 0x0914   (0x0014)  
	FCachedAnimRelevancyData                           TrickCachedTime;                                            // 0x0928   (0x0014)  
	unsigned char                                      UnknownData08_6[0x4];                                       // 0x093C   (0x0004)  MISSED
};

/// Class /Script/MotorcycleRuntime.FortPlayerAnimInstance_MotorcyclePassenger
/// Size: 0x0050 (0x000880 - 0x0008D0)
class UFortPlayerAnimInstance_MotorcyclePassenger : public UFortPlayerAnimInstance_MotorcycleRider
{ 
public:
	class UFortPlayerAnimInstance_MotorcycleDriver*    DriverAnimInstance;                                         // 0x0880   (0x0008)  
	bool                                               bHasDriver;                                                 // 0x0888   (0x0001)  
	bool                                               bIsDriverJumping;                                           // 0x0889   (0x0001)  
	bool                                               bIsDriverInventoryMode;                                     // 0x088A   (0x0001)  
	bool                                               bIsSeatedAction;                                            // 0x088B   (0x0001)  
	bool                                               bIsThrowingConsumable;                                      // 0x088C   (0x0001)  
	bool                                               bEarlyOutStoppieOutro;                                      // 0x088D   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x088E   (0x0002)  MISSED
	float                                              RunForwardAlpha;                                            // 0x0890   (0x0004)  
	bool                                               bAimFWD;                                                    // 0x0894   (0x0001)  
	bool                                               bAimBWD;                                                    // 0x0895   (0x0001)  
	bool                                               bAimLFT;                                                    // 0x0896   (0x0001)  
	bool                                               bAimRGT;                                                    // 0x0897   (0x0001)  
	float                                              AimFWDDeltaAngleDegrees;                                    // 0x0898   (0x0004)  
	float                                              AimBWDDeltaAngleDegrees;                                    // 0x089C   (0x0004)  
	float                                              AimLFTDeltaAngleDegrees;                                    // 0x08A0   (0x0004)  
	float                                              AimRGTDeltaAngleDegrees;                                    // 0x08A4   (0x0004)  
	bool                                               bShouldJump;                                                // 0x08A8   (0x0001)  
	bool                                               bShouldApplySlopeCorrection;                                // 0x08A9   (0x0001)  
	bool                                               bShouldExitFromLocomotion;                                  // 0x08AA   (0x0001)  
	unsigned char                                      UnknownData01_5[0x1];                                       // 0x08AB   (0x0001)  MISSED
	FCachedAnimRelevancyData                           JumpIntroCachedTime;                                        // 0x08AC   (0x0014)  
	float                                              CachedJumpIntroTime;                                        // 0x08C0   (0x0004)  
	unsigned char                                      UnknownData02_6[0xC];                                       // 0x08C4   (0x000C)  MISSED
};

/// Class /Script/MotorcycleRuntime.FortCameraMode_Motorcycle
/// Size: 0x0000 (0x001CC0 - 0x001CC0)
class UFortCameraMode_Motorcycle : public UFortCameraMode_AthenaVehicle
{ 
public:
};

/// Class /Script/MotorcycleRuntime.FortMotorcycleVehicle
/// Size: 0x0450 (0x002020 - 0x002470)
class AFortMotorcycleVehicle : public AFortAthenaSKMotorVehicle
{ 
public:
	SDK_UNDEFINED(16,13299) /* FMulticastInlineDelegate */ __um(OnStartChargingJumpDelegate);                      // 0x2018   (0x0010)  
	SDK_UNDEFINED(16,13300) /* FMulticastInlineDelegate */ __um(OnCancelChargingJumpDelegate);                     // 0x2028   (0x0010)  
	SDK_UNDEFINED(16,13301) /* FMulticastInlineDelegate */ __um(OnJumpDelegate);                                   // 0x2038   (0x0010)  
	SDK_UNDEFINED(16,13302) /* FMulticastInlineDelegate */ __um(OnChargingJumpDelegate);                           // 0x2048   (0x0010)  
	SDK_UNDEFINED(16,13303) /* FMulticastInlineDelegate */ __um(OnStartAirTrickDelegate);                          // 0x2058   (0x0010)  
	SDK_UNDEFINED(16,13304) /* FMulticastInlineDelegate */ __um(OnFinishAirTrickDelegate);                         // 0x2068   (0x0010)  
	SDK_UNDEFINED(16,13305) /* FMulticastInlineDelegate */ __um(OnStartWheelieDelegate);                           // 0x2078   (0x0010)  
	SDK_UNDEFINED(16,13306) /* FMulticastInlineDelegate */ __um(OnReleaseWheelieDelegate);                         // 0x2088   (0x0010)  
	SDK_UNDEFINED(16,13307) /* FMulticastInlineDelegate */ __um(OnLandWheelieDelegate);                            // 0x2098   (0x0010)  
	SDK_UNDEFINED(16,13308) /* FMulticastInlineDelegate */ __um(OnFailWheelieDelegate);                            // 0x20A8   (0x0010)  
	SDK_UNDEFINED(16,13309) /* FMulticastInlineDelegate */ __um(OnStartStoppieDelegate);                           // 0x20B8   (0x0010)  
	SDK_UNDEFINED(16,13310) /* FMulticastInlineDelegate */ __um(OnReleaseStoppieDelegate);                         // 0x20C8   (0x0010)  
	SDK_UNDEFINED(16,13311) /* FMulticastInlineDelegate */ __um(OnLandStoppieDelegate);                            // 0x20D8   (0x0010)  
	SDK_UNDEFINED(16,13312) /* FMulticastInlineDelegate */ __um(OnInventoryModeChangedDelegate);                   // 0x20E8   (0x0010)  
	SDK_UNDEFINED(16,13313) /* FMulticastInlineDelegate */ __um(OnSuperSlidingChangedDelegate);                    // 0x20F8   (0x0010)  
	class UClass*                                      InventoryCameraModeClass;                                   // 0x2108   (0x0008)  
	class UClass*                                      InventoryCameraModeClassADS;                                // 0x2110   (0x0008)  
	class UClass*                                      PassengerCameraModeClass;                                   // 0x2118   (0x0008)  
	class UClass*                                      PassengerCameraModeClassADS;                                // 0x2120   (0x0008)  
	class UFortMotorcycleVehicleConfigs*               FortMotorcycleVehicleConfigs;                               // 0x2128   (0x0008)  
	FName                                              RearAxleSocket;                                             // 0x2130   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x2134   (0x0004)  MISSED
	TArray<FActionDefForUI>                            ActionDefForUI;                                             // 0x2138   (0x0010)  
	float                                              SwingArmRotation;                                           // 0x2148   (0x0004)  
	unsigned char                                      UnknownData01_5[0x7C];                                      // 0x214C   (0x007C)  MISSED
	TArray<int32_t>                                    BoostShapeIndices;                                          // 0x21C8   (0x0010)  
	bool                                               bIsBoostAttacking;                                          // 0x21D8   (0x0001)  
	unsigned char                                      UnknownData02_5[0xF];                                       // 0x21D9   (0x000F)  MISSED
	EFortMotorcycleAirTrickType                        CachedTrickType;                                            // 0x21E8   (0x0001)  
	bool                                               bHadPassengerAtTrickStart;                                  // 0x21E9   (0x0001)  
	unsigned char                                      UnknownData03_5[0x36];                                      // 0x21EA   (0x0036)  MISSED
	TArray<FName>                                      PassengerADSSockets;                                        // 0x2220   (0x0010)  
	TArray<FVector>                                    PassengerADSRelativeOffsets;                                // 0x2230   (0x0010)  
	class UNiagaraComponent*                           CachedNiagaraComponentRoadAndExhaust;                       // 0x2240   (0x0008)  
	SDK_UNDEFINED(16,13314) /* FString */              __um(RoadAndExhaustNiagaraComponentName);                   // 0x2248   (0x0010)  
	FName                                              RoadAndExhaustVehicleSpeedName;                             // 0x2258   (0x0004)  
	FName                                              RoadAndExhaustSlideDirectionName;                           // 0x225C   (0x0004)  
	float                                              RoadAndExhaustMinSpeedForDust;                              // 0x2260   (0x0004)  
	FName                                              RoadAndExhaustDustRearName;                                 // 0x2264   (0x0004)  
	FName                                              RoadAndExhaustDustColorLerpName;                            // 0x2268   (0x0004)  
	float                                              RoadAndExhaustDustColorLerp;                                // 0x226C   (0x0004)  
	FName                                              RoadAndExhaustDustAlphaMultiplierName;                      // 0x2270   (0x0004)  
	float                                              RoadAndExhaustDustAlphaMultiplier;                          // 0x2274   (0x0004)  
	FName                                              RoadAndExhaustPeelOutColorIndexName;                        // 0x2278   (0x0004)  
	FName                                              RoadAndExhaustPeelOutRearName;                              // 0x227C   (0x0004)  
	FName                                              RoadAndExhaustIsPeelOutOnRoadName;                          // 0x2280   (0x0004)  
	FName                                              RoadAndExhaustIsPeelOutOnRoadRewindName;                    // 0x2284   (0x0004)  
	FName                                              RoadAndExhaustIsInAirName;                                  // 0x2288   (0x0004)  
	FGameplayTag                                       RoadAndExhaustCameraDirtGameplayCueTag;                     // 0x228C   (0x0004)  
	FGameplayTag                                       RoadAndExhaustCameraWaterGameplayCueTag;                    // 0x2290   (0x0004)  
	unsigned char                                      UnknownData04_5[0x4];                                       // 0x2294   (0x0004)  MISSED
	SDK_UNDEFINED(16,13315) /* TArray<TEnumAsByte<EPhysicalSurface>> */ __um(RoadAndExhaustSurfaceTypeArrayForFX); // 0x2298   (0x0010)  
	class ULegacyCameraShake*                          DriverCameraShakeInstance;                                  // 0x22A8   (0x0008)  
	class ULegacyCameraShake*                          AcceleratingCameraShakeInstance;                            // 0x22B0   (0x0008)  
	unsigned char                                      UnknownData05_5[0x8];                                       // 0x22B8   (0x0008)  MISSED
	FName                                              RoadAndExhaustHeadlightsName;                               // 0x22C0   (0x0004)  
	FName                                              RoadAndExhaustBrakelightsName;                              // 0x22C4   (0x0004)  
	FScalableFloat                                     DoorBashMinSpeed;                                           // 0x22C8   (0x0028)  
	FScalableFloat                                     DoorBashMaxSpeed;                                           // 0x22F0   (0x0028)  
	FScalableFloat                                     DoorBashForwardDistanceMin;                                 // 0x2318   (0x0028)  
	FScalableFloat                                     DoorBashForwardDistanceMax;                                 // 0x2340   (0x0028)  
	FGameplayTag                                       DoorBashGameplayCueTag;                                     // 0x2368   (0x0004)  
	unsigned char                                      UnknownData06_5[0x4];                                       // 0x236C   (0x0004)  MISSED
	SDK_UNDEFINED(16,13316) /* TArray<TEnumAsByte<EObjectTypeQuery>> */ __um(DoorBashCollisionTypesForDoor);       // 0x2370   (0x0010)  
	SDK_UNDEFINED(16,13317) /* TArray<TEnumAsByte<EObjectTypeQuery>> */ __um(DoorBashCollisionTypesForPawn);       // 0x2380   (0x0010)  
	FScalableFloat                                     DoorBashSphereRadiusForPawnLaunch;                          // 0x2390   (0x0028)  
	FScalableFloat                                     DoorBashScalarForPawnLaunch;                                // 0x23B8   (0x0028)  
	FGameplayTag                                       DoorBashPawnLaunchGameplayCueTag;                           // 0x23E0   (0x0004)  
	unsigned char                                      UnknownData07_5[0x4];                                       // 0x23E4   (0x0004)  MISSED
	FGameplayTagQuery                                  InventoryModeTagQuery;                                      // 0x23E8   (0x0048)  
	FGameplayTagContainer                              InputContextBlockedTags;                                    // 0x2430   (0x0020)  
	unsigned char                                      UnknownData08_5[0x18];                                      // 0x2450   (0x0018)  MISSED
	FGameplayTag                                       MobileHUDTag;                                               // 0x2468   (0x0004)  
	unsigned char                                      UnknownData09_6[0x4];                                       // 0x246C   (0x0004)  MISSED


	/// Functions
	// Function /Script/MotorcycleRuntime.FortMotorcycleVehicle.ServerEjectAllPlayers
	// void ServerEjectAllPlayers();                                                                                         // [0xa240548] Net|NetReliableNative|Event|Public|NetServer 
	// Function /Script/MotorcycleRuntime.FortMotorcycleVehicle.OnRep_IsBoostAttacking
	// void OnRep_IsBoostAttacking();                                                                                        // [0xa874ff8] Final|Native|Protected 
	// Function /Script/MotorcycleRuntime.FortMotorcycleVehicle.OnPlayerWeaponChanged
	// void OnPlayerWeaponChanged(class AFortWeapon* InNewWeapon, class AFortWeapon* InPrevWeapon);                          // [0xa874f04] Final|Native|Public  
	// Function /Script/MotorcycleRuntime.FortMotorcycleVehicle.MotorcycleWheelie__DelegateSignature
	// void MotorcycleWheelie__DelegateSignature();                                                                          // [0x18a39e4] MulticastDelegate|Public|Delegate 
	// Function /Script/MotorcycleRuntime.FortMotorcycleVehicle.MotorcycleSuperSlidingChanged__DelegateSignature
	// void MotorcycleSuperSlidingChanged__DelegateSignature(bool bIsSuperSliding);                                          // [0x18a39e4] MulticastDelegate|Public|Delegate 
	// Function /Script/MotorcycleRuntime.FortMotorcycleVehicle.MotorcycleStoppie__DelegateSignature
	// void MotorcycleStoppie__DelegateSignature();                                                                          // [0x18a39e4] MulticastDelegate|Public|Delegate 
	// Function /Script/MotorcycleRuntime.FortMotorcycleVehicle.MotorcycleStartAirTrick__DelegateSignature
	// void MotorcycleStartAirTrick__DelegateSignature(EFortMotorcycleAirTrickType TrickType);                               // [0x18a39e4] MulticastDelegate|Public|Delegate 
	// Function /Script/MotorcycleRuntime.FortMotorcycleVehicle.MotorcycleJump__DelegateSignature
	// void MotorcycleJump__DelegateSignature(float JumpChargeFactor);                                                       // [0x18a39e4] MulticastDelegate|Public|Delegate 
	// Function /Script/MotorcycleRuntime.FortMotorcycleVehicle.MotorcycleInventoryMode__DelegateSignature
	// void MotorcycleInventoryMode__DelegateSignature(bool IsInInventoryMode);                                              // [0x18a39e4] MulticastDelegate|Public|Delegate 
	// Function /Script/MotorcycleRuntime.FortMotorcycleVehicle.MotorcycleChargingJump__DelegateSignature
	// void MotorcycleChargingJump__DelegateSignature();                                                                     // [0x18a39e4] MulticastDelegate|Public|Delegate 
	// Function /Script/MotorcycleRuntime.FortMotorcycleVehicle.MotorcycleAirTrick__DelegateSignature
	// void MotorcycleAirTrick__DelegateSignature();                                                                         // [0x18a39e4] MulticastDelegate|Public|Delegate 
	// Function /Script/MotorcycleRuntime.FortMotorcycleVehicle.IsSuperSliding
	// bool IsSuperSliding();                                                                                                // [0xa874ee0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MotorcycleRuntime.FortMotorcycleVehicle.IsPowerSliding
	// bool IsPowerSliding();                                                                                                // [0xa874ebc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MotorcycleRuntime.FortMotorcycleVehicle.IsInInventoryMode
	// bool IsInInventoryMode();                                                                                             // [0xa874e98] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MotorcycleRuntime.FortMotorcycleVehicle.GetSurfaceTypeVehicleOn
	// TEnumAsByte<EPhysicalSurface> GetSurfaceTypeVehicleOn();                                                              // [0xa874c58] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MotorcycleRuntime.FortMotorcycleVehicle.GetLeanAngleDegrees
	// float GetLeanAngleDegrees();                                                                                          // [0xa874c30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MotorcycleRuntime.FortMotorcycleVehicle.GetAverageSpringNormal
	// FVector GetAverageSpringNormal();                                                                                     // [0xa874c08] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MotorcycleRuntime.FortMotorcycleVehicle.ChangeBoostAttackState
	// void ChangeBoostAttackState(bool bNewIsBoostAttacking);                                                               // [0xa874acc] Final|Native|Public|BlueprintCallable 
	// Function /Script/MotorcycleRuntime.FortMotorcycleVehicle.BP_OnStartWheelie
	// void BP_OnStartWheelie();                                                                                             // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/MotorcycleRuntime.FortMotorcycleVehicle.BP_OnStartStoppie
	// void BP_OnStartStoppie();                                                                                             // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/MotorcycleRuntime.FortMotorcycleVehicle.BP_OnStartChargingJump
	// void BP_OnStartChargingJump();                                                                                        // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/MotorcycleRuntime.FortMotorcycleVehicle.BP_OnStartAirTrick
	// void BP_OnStartAirTrick(EFortMotorcycleAirTrickType TrickType);                                                       // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/MotorcycleRuntime.FortMotorcycleVehicle.BP_OnReleaseWheelie
	// void BP_OnReleaseWheelie();                                                                                           // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/MotorcycleRuntime.FortMotorcycleVehicle.BP_OnReleaseStoppie
	// void BP_OnReleaseStoppie();                                                                                           // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/MotorcycleRuntime.FortMotorcycleVehicle.BP_OnLandWheelie
	// void BP_OnLandWheelie();                                                                                              // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/MotorcycleRuntime.FortMotorcycleVehicle.BP_OnLandStoppie
	// void BP_OnLandStoppie();                                                                                              // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/MotorcycleRuntime.FortMotorcycleVehicle.BP_OnJump
	// void BP_OnJump(float JumpChargeFactor);                                                                               // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/MotorcycleRuntime.FortMotorcycleVehicle.BP_OnFinishAirTrick
	// void BP_OnFinishAirTrick();                                                                                           // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/MotorcycleRuntime.FortMotorcycleVehicle.BP_OnFailWheelie
	// void BP_OnFailWheelie();                                                                                              // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/MotorcycleRuntime.FortMotorcycleVehicle.BP_OnChargingJump
	// void BP_OnChargingJump(float JumpChargeFactor);                                                                       // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/MotorcycleRuntime.FortMotorcycleVehicle.BP_OnCancelChargingJump
	// void BP_OnCancelChargingJump();                                                                                       // [0x18a39e4] Event|Public|BlueprintEvent 
};

/// Struct /Script/MotorcycleRuntime.MotorcycleWheel
/// Size: 0x003C (0x000000 - 0x00003C)
struct FMotorcycleWheel
{ 
	FName                                              WheelSocket;                                                // 0x0000   (0x0004)  
	float                                              Radius;                                                     // 0x0004   (0x0004)  
	float                                              TireWidth;                                                  // 0x0008   (0x0004)  
	float                                              SpringLength;                                               // 0x000C   (0x0004)  
	float                                              WheelieMinSpringLength;                                     // 0x0010   (0x0004)  
	float                                              SpringStiff;                                                // 0x0014   (0x0004)  
	float                                              SpringDamp;                                                 // 0x0018   (0x0004)  
	float                                              PoppedTireSpringLength;                                     // 0x001C   (0x0004)  
	float                                              PoppedTireSpringStiff;                                      // 0x0020   (0x0004)  
	float                                              PoppedTireSpringDamp;                                       // 0x0024   (0x0004)  
	float                                              PowerslideSpringStiff;                                      // 0x0028   (0x0004)  
	float                                              PowerslideSpringDamp;                                       // 0x002C   (0x0004)  
	float                                              WheelieSpringStiff;                                         // 0x0030   (0x0004)  
	float                                              WheelieSpringDamp;                                          // 0x0034   (0x0004)  
	EFortMotorcycleWheelTraceMode                      WheelTraceMode;                                             // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0039   (0x0003)  MISSED
};

/// Class /Script/MotorcycleRuntime.FortMotorcycleVehicleConfigs
/// Size: 0x02D0 (0x000948 - 0x000C18)
class UFortMotorcycleVehicleConfigs : public UFortPhysicsVehicleConfigs
{ 
public:
	TArray<FMotorcycleWheel>                           Wheels;                                                     // 0x0948   (0x0010)  
	float                                              SpringInterpDamp;                                           // 0x0958   (0x0004)  
	float                                              WheelieSpringInterpDamp;                                    // 0x095C   (0x0004)  
	float                                              WallPushStiff;                                              // 0x0960   (0x0004)  
	float                                              WallPushDamp;                                               // 0x0964   (0x0004)  
	FVector                                            WallPushXTraceOffset;                                       // 0x0968   (0x0018)  
	float                                              WallPushForwardTraceLengthScale;                            // 0x0980   (0x0004)  
	float                                              WallPushBackTraceLengthScale;                               // 0x0984   (0x0004)  
	float                                              WallPushRightTraceLength;                                   // 0x0988   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x098C   (0x0004)  MISSED
	FVector                                            WallPushRightTraceOffset;                                   // 0x0990   (0x0018)  
	FVector                                            WallPushRearRightTraceOffset;                               // 0x09A8   (0x0018)  
	float                                              WallPushAngle;                                              // 0x09C0   (0x0004)  
	bool                                               bUseWallPushTracesForWalls;                                 // 0x09C4   (0x0001)  
	bool                                               bUseWallPushRearSideTracesForWalls;                         // 0x09C5   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x09C6   (0x0002)  MISSED
	float                                              MaxJumpChargeTime;                                          // 0x09C8   (0x0004)  
	float                                              MinChargeJumpForce;                                         // 0x09CC   (0x0004)  
	float                                              MaxChargeJumpForce;                                         // 0x09D0   (0x0004)  
	float                                              MinJumpForwardAngle;                                        // 0x09D4   (0x0004)  
	float                                              MaxJumpForwardAngle;                                        // 0x09D8   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x09DC   (0x0004)  MISSED
	FVector                                            JumpForceMinCOMOffset;                                      // 0x09E0   (0x0018)  
	FVector                                            JumpForceMaxCOMOffset;                                      // 0x09F8   (0x0018)  
	float                                              JumpChargeGraceTimeSeconds;                                 // 0x0A10   (0x0004)  
	float                                              JumpGraceTimeSeconds;                                       // 0x0A14   (0x0004)  
	float                                              LeanAngleScale;                                             // 0x0A18   (0x0004)  
	float                                              LeanStiff;                                                  // 0x0A1C   (0x0004)  
	float                                              LeanDamp;                                                   // 0x0A20   (0x0004)  
	float                                              LeanStrength;                                               // 0x0A24   (0x0004)  
	float                                              SlideCatchupForceTime;                                      // 0x0A28   (0x0004)  
	float                                              SlideCatchupSpeed;                                          // 0x0A2C   (0x0004)  
	float                                              SlideCatchupPushForce;                                      // 0x0A30   (0x0004)  
	float                                              AutoAirPitchAngle;                                          // 0x0A34   (0x0004)  
	float                                              MinSteeringAngleForModifiedFriction;                        // 0x0A38   (0x0004)  
	float                                              MinSpeedForModifiedFriction;                                // 0x0A3C   (0x0004)  
	float                                              MinSteeringAngleToConsiderTractionLost;                     // 0x0A40   (0x0004)  
	float                                              FrictionRatioToConsiderTractionLost;                        // 0x0A44   (0x0004)  
	float                                              WheeliePitchStiffMin;                                       // 0x0A48   (0x0004)  
	float                                              WheeliePitchStiffMax;                                       // 0x0A4C   (0x0004)  
	float                                              WheeliePitchDampMin;                                        // 0x0A50   (0x0004)  
	float                                              WheeliePitchDampMax;                                        // 0x0A54   (0x0004)  
	float                                              WheeliePitchAngleMin;                                       // 0x0A58   (0x0004)  
	float                                              WheeliePitchAngleMax;                                       // 0x0A5C   (0x0004)  
	float                                              StoppiePitchAngle;                                          // 0x0A60   (0x0004)  
	float                                              StoppiePitchStiff;                                          // 0x0A64   (0x0004)  
	float                                              StoppiePitchDamp;                                           // 0x0A68   (0x0004)  
	float                                              WheelieRampSeconds;                                         // 0x0A6C   (0x0004)  
	float                                              WheelieFailPitchAngle;                                      // 0x0A70   (0x0004)  
	float                                              WheelieRecoveryRate;                                        // 0x0A74   (0x0004)  
	float                                              WheelieFailRecoveryRate;                                    // 0x0A78   (0x0004)  
	float                                              WheelieMinStartSpeed;                                       // 0x0A7C   (0x0004)  
	float                                              StoppieMinStopSpeed;                                        // 0x0A80   (0x0004)  
	float                                              WheelieSteerFactor;                                         // 0x0A84   (0x0004)  
	float                                              StoppieSteerFactor;                                         // 0x0A88   (0x0004)  
	float                                              WheelieSteerAlphaThreshold;                                 // 0x0A8C   (0x0004)  
	float                                              WheelieStoppieMaxLeanAllowedToInitiate;                     // 0x0A90   (0x0004)  
	float                                              WheelieGroundBufferTime;                                    // 0x0A94   (0x0004)  
	float                                              StoppieGroundBufferTime;                                    // 0x0A98   (0x0004)  
	float                                              WheelieSpringLengthExponent;                                // 0x0A9C   (0x0004)  
	float                                              WheelieWheelOffsetLerpMultiplier;                           // 0x0AA0   (0x0004)  
	float                                              WheelieBrakeFactor;                                         // 0x0AA4   (0x0004)  
	float                                              StoppieTurnInPlaceSpeed;                                    // 0x0AA8   (0x0004)  
	float                                              StoppieTurnInPlaceSpeedIce;                                 // 0x0AAC   (0x0004)  
	float                                              StoppieTurnInPlaceSpeedMud;                                 // 0x0AB0   (0x0004)  
	float                                              MinSpeedKmhForMaxStoppie;                                   // 0x0AB4   (0x0004)  
	float                                              StoppieTurnAngleExponent;                                   // 0x0AB8   (0x0004)  
	float                                              StoppieMaxTurnAngle;                                        // 0x0ABC   (0x0004)  
	float                                              WheelieTireTractionMultiplier_Min;                          // 0x0AC0   (0x0004)  
	float                                              WheelieCameraMinStraightFactor;                             // 0x0AC4   (0x0004)  
	float                                              MaxLeanAccel;                                               // 0x0AC8   (0x0004)  
	float                                              CruiseControlForwardAlpha;                                  // 0x0ACC   (0x0004)  
	float                                              InventoryModeSpeedKmh;                                      // 0x0AD0   (0x0004)  
	float                                              CruiseControlDisengageSpeedKmh;                             // 0x0AD4   (0x0004)  
	bool                                               bPowerSlideIsSuperSlide;                                    // 0x0AD8   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x0AD9   (0x0003)  MISSED
	float                                              PowerSlideFrontFrictionMultiplier;                          // 0x0ADC   (0x0004)  
	float                                              PowerSlideRearFrictionMultiplier;                           // 0x0AE0   (0x0004)  
	float                                              PowerSlideRoadFrontFrictionMultiplier;                      // 0x0AE4   (0x0004)  
	float                                              PowerSlideRoadRearFrictionMultiplier;                       // 0x0AE8   (0x0004)  
	float                                              PowerSlideDirtFrontFrictionMultiplier;                      // 0x0AEC   (0x0004)  
	float                                              PowerSlideDirtRearFrictionMultiplier;                       // 0x0AF0   (0x0004)  
	float                                              PowerSlideGrassFrontFrictionMultiplier;                     // 0x0AF4   (0x0004)  
	float                                              PowerSlideGrassRearFrictionMultiplier;                      // 0x0AF8   (0x0004)  
	float                                              PowerSlideSnowFrontFrictionMultiplier;                      // 0x0AFC   (0x0004)  
	float                                              PowerSlideSnowRearFrictionMultiplier;                       // 0x0B00   (0x0004)  
	float                                              PowerSlideIceFrontFrictionMultiplier;                       // 0x0B04   (0x0004)  
	float                                              PowerSlideIceRearFrictionMultiplier;                        // 0x0B08   (0x0004)  
	float                                              PowerSlideMudFrontFrictionMultiplier;                       // 0x0B0C   (0x0004)  
	float                                              PowerSlideMudRearFrictionMultiplier;                        // 0x0B10   (0x0004)  
	float                                              PowerSlideFactor;                                           // 0x0B14   (0x0004)  
	float                                              PowerSlideDampFactor;                                       // 0x0B18   (0x0004)  
	float                                              FrictionDampFactor;                                         // 0x0B1C   (0x0004)  
	float                                              PowerSlideLeanAngleScale;                                   // 0x0B20   (0x0004)  
	float                                              SuperSlideLeanAngle;                                        // 0x0B24   (0x0004)  
	float                                              SuperSlideMinStartYawSpeedDegrees;                          // 0x0B28   (0x0004)  
	float                                              SuperSlideMinStartSpeedKmh;                                 // 0x0B2C   (0x0004)  
	float                                              SuperSlideMaxEndSpeedKmh;                                   // 0x0B30   (0x0004)  
	float                                              PowerslideInputWindow;                                      // 0x0B34   (0x0004)  
	float                                              ShootingMinSpeedSteeringAngle;                              // 0x0B38   (0x0004)  
	float                                              ShootingMaxSpeedSteeringAngle;                              // 0x0B3C   (0x0004)  
	float                                              InventoryModeCameraYawConstraint;                           // 0x0B40   (0x0004)  
	float                                              BoostTopSpeedMultiplier;                                    // 0x0B44   (0x0004)  
	float                                              BoostPushForceMultiplier;                                   // 0x0B48   (0x0004)  
	float                                              BoostMinPushForce;                                          // 0x0B4C   (0x0004)  
	float                                              BoostSteeringMultiplier;                                    // 0x0B50   (0x0004)  
	bool                                               bPlayHolsterAnimsOnClient;                                  // 0x0B54   (0x0001)  
	unsigned char                                      UnknownData04_5[0x3];                                       // 0x0B55   (0x0003)  MISSED
	float                                              FrontWheelSteeringFactor;                                   // 0x0B58   (0x0004)  
	float                                              FrontWheelRotationAcceleration;                             // 0x0B5C   (0x0004)  
	float                                              PassengerInventoryCooldown;                                 // 0x0B60   (0x0004)  
	float                                              DriverInventoryCooldown;                                    // 0x0B64   (0x0004)  
	SDK_UNDEFINED(80,13318) /* TSet<FName> */          __um(BoostAttackShapes);                                    // 0x0B68   (0x0050)  
	float                                              CameraAssistStrengthMax;                                    // 0x0BB8   (0x0004)  
	float                                              CameraAssistStrengthMin;                                    // 0x0BBC   (0x0004)  
	float                                              CameraAssistStrengthRecovery;                               // 0x0BC0   (0x0004)  
	float                                              CameraAssistInterpSpeed;                                    // 0x0BC4   (0x0004)  
	float                                              AirTrickIncrementInterval;                                  // 0x0BC8   (0x0004)  
	float                                              AirTrickFeedStartTime;                                      // 0x0BCC   (0x0004)  
	float                                              AirTrickPitchMultiplier;                                    // 0x0BD0   (0x0004)  
	float                                              AirTrickYawMultiplier;                                      // 0x0BD4   (0x0004)  
	bool                                               bAllowAirTrickNeutral;                                      // 0x0BD8   (0x0001)  
	bool                                               bAllowAirTrickRight;                                        // 0x0BD9   (0x0001)  
	bool                                               bAllowAirTrickLeft;                                         // 0x0BDA   (0x0001)  
	unsigned char                                      UnknownData05_5[0x1];                                       // 0x0BDB   (0x0001)  MISSED
	float                                              PoppedTireTractionScalar_Front;                             // 0x0BDC   (0x0004)  
	float                                              PoppedTireTractionScalar_Rear;                              // 0x0BE0   (0x0004)  
	float                                              PoppedTireTractionScalar_Both;                              // 0x0BE4   (0x0004)  
	FScalableFloat                                     TopSpeedKmh;                                                // 0x0BE8   (0x0028)  
	unsigned char                                      UnknownData06_6[0x8];                                       // 0x0C10   (0x0008)  MISSED
};

