
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: GameplayTags

/// Class /Script/IrwinRuntime.FortAIFaunaAnimInstance
/// Size: 0x0188 (0x000598 - 0x000720)
class UFortAIFaunaAnimInstance : public UFortAIAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1824;

public:
	DMember(float)                                     AverageSpeed                                                OFFSET(get<float>, {0x5A0, 4, 0, 0})
	DMember(float)                                     AverageSpeedTimeFrame                                       OFFSET(get<float>, {0x5A4, 4, 0, 0})
	DMember(bool)                                      bHasValidAimTarget                                          OFFSET(get<bool>, {0x5A8, 1, 0, 0})
	DMember(float)                                     AimTime                                                     OFFSET(get<float>, {0x5AC, 4, 0, 0})
	SMember(FVector)                                   AimTargetLocation                                           OFFSET(getStruct<T>, {0x5B0, 24, 0, 0})
	DMember(bool)                                      bIsSurfaceSwimming                                          OFFSET(get<bool>, {0x5C8, 1, 0, 0})
	DMember(bool)                                      bIsMovingOnGround                                           OFFSET(get<bool>, {0x5C9, 1, 0, 0})
	DMember(bool)                                      bIsInTornado                                                OFFSET(get<bool>, {0x5CA, 1, 0, 0})
	DMember(float)                                     LookAtAlpha                                                 OFFSET(get<float>, {0x5CC, 4, 0, 0})
	DMember(float)                                     MaxDistanceToPlayerForLookAt                                OFFSET(get<float>, {0x5D0, 4, 0, 0})
	DMember(float)                                     LookAtTooFarFromPlayerTimeOut                               OFFSET(get<float>, {0x5D4, 4, 0, 0})
	DMember(bool)                                      bDisableLookAtDuringMontage                                 OFFSET(get<bool>, {0x5D8, 1, 0, 0})
	SMember(FName)                                     DisableHeadTrackingCurveName                                OFFSET(getStruct<T>, {0x5DC, 4, 0, 0})
	SMember(FRidingAnimationData)                      RidingAnimationData                                         OFFSET(getStruct<T>, {0x5E0, 20, 0, 0})
	DMember(bool)                                      bIsSlopeSliding                                             OFFSET(get<bool>, {0x5F4, 1, 0, 0})
	DMember(float)                                     SlopeSlidingPitch                                           OFFSET(get<float>, {0x5F8, 4, 0, 0})
	DMember(float)                                     SlopeSlidingRoll                                            OFFSET(get<float>, {0x5FC, 4, 0, 0})
	DMember(float)                                     RidingMovePlayRate                                          OFFSET(get<float>, {0x600, 4, 0, 0})
	DMember(bool)                                      bJustGotPlayer                                              OFFSET(get<bool>, {0x604, 1, 0, 0})
	DMember(bool)                                      bIsBoosting                                                 OFFSET(get<bool>, {0x605, 1, 0, 0})
	DMember(bool)                                      bIsTurningInPlace                                           OFFSET(get<bool>, {0x606, 1, 0, 0})
	DMember(float)                                     TurnInPlaceRotationSpeed                                    OFFSET(get<float>, {0x608, 4, 0, 0})
	DMember(float)                                     TurnInPlaceAngleDelta                                       OFFSET(get<float>, {0x60C, 4, 0, 0})
	DMember(bool)                                      bIsMovingBackwards                                          OFFSET(get<bool>, {0x610, 1, 0, 0})
	DMember(float)                                     RiderReferentialYaw                                         OFFSET(get<float>, {0x614, 4, 0, 0})
	DMember(float)                                     BoostPlayRate                                               OFFSET(get<float>, {0x618, 4, 0, 0})
	DMember(bool)                                      bIsTurnInPlaceAngleDeltaPositive                            OFFSET(get<bool>, {0x61C, 1, 0, 0})
	DMember(bool)                                      bPlayLandAdditive                                           OFFSET(get<bool>, {0x61D, 1, 0, 0})
	DMember(float)                                     BackwardVelocity                                            OFFSET(get<float>, {0x620, 4, 0, 0})
	DMember(bool)                                      bShouldPlayStopBackwards                                    OFFSET(get<bool>, {0x624, 1, 0, 0})
	DMember(float)                                     SwimmingYaw                                                 OFFSET(get<float>, {0x628, 4, 0, 0})
	DMember(float)                                     BackwardsPlayRate                                           OFFSET(get<float>, {0x62C, 4, 0, 0})
	DMember(float)                                     BodyRoll                                                    OFFSET(get<float>, {0x630, 4, 0, 0})
	DMember(float)                                     TurnAngleStored                                             OFFSET(get<float>, {0x634, 4, 0, 0})
	DMember(bool)                                      bWasTurningRight                                            OFFSET(get<bool>, {0x638, 1, 0, 0})
	CMember(ERidingFootPhase)                          FootPhase                                                   OFFSET(get<T>, {0x639, 1, 0, 0})
	DMember(bool)                                      bIsFootPhase_FeetInAir                                      OFFSET(get<bool>, {0x63A, 1, 0, 0})
	DMember(bool)                                      bIsFootPhase_FrontFeetPlanted                               OFFSET(get<bool>, {0x63B, 1, 0, 0})
	DMember(bool)                                      bIsFootPhase_BackFeetPlanted                                OFFSET(get<bool>, {0x63C, 1, 0, 0})
	DMember(bool)                                      bIsFootPhase_LeftBackFeetForward                            OFFSET(get<bool>, {0x63D, 1, 0, 0})
	DMember(bool)                                      bIsFootPhase_RightBackFeetForward                           OFFSET(get<bool>, {0x63E, 1, 0, 0})
	DMember(bool)                                      bIsFootPhase_LeftPlantedRightPass                           OFFSET(get<bool>, {0x63F, 1, 0, 0})
	DMember(bool)                                      bIsFootPhase_RightPlantedLeftPass                           OFFSET(get<bool>, {0x640, 1, 0, 0})
	SMember(FGameplayTagContainer)                     SlipstreamTags                                              OFFSET(getStruct<T>, {0x648, 32, 0, 0})
	DMember(bool)                                      bIsInSlipstream                                             OFFSET(get<bool>, {0x668, 1, 0, 0})
	SMember(FGameplayTagContainer)                     SkydivingTags                                               OFFSET(getStruct<T>, {0x670, 32, 0, 0})
	DMember(bool)                                      bMovementMode_Skydiving                                     OFFSET(get<bool>, {0x690, 1, 0, 0})
	SMember(FGameplayTagContainer)                     SkytubingTags                                               OFFSET(getStruct<T>, {0x698, 32, 0, 0})
	DMember(bool)                                      bGameplay_Status_Skytubing                                  OFFSET(get<bool>, {0x6B8, 1, 0, 0})
	DMember(bool)                                      bIsAbducted                                                 OFFSET(get<bool>, {0x6B9, 1, 0, 0})
	SMember(FGameplayTagContainer)                     TractorBeamTags                                             OFFSET(getStruct<T>, {0x6C0, 32, 0, 0})
	DMember(bool)                                      bIsInTractorBeam                                            OFFSET(get<bool>, {0x6E0, 1, 0, 0})
	DMember(bool)                                      bIsFloating                                                 OFFSET(get<bool>, {0x6E1, 1, 0, 0})
	DMember(float)                                     JustGotPlayerInitialDelaySec                                OFFSET(get<float>, {0x6E4, 4, 0, 0})
	DMember(float)                                     FallAsleepAnimDuration                                      OFFSET(get<float>, {0x704, 4, 0, 0})
	DMember(float)                                     WakeUpAnimDuration                                          OFFSET(get<float>, {0x708, 4, 0, 0})
	DMember(float)                                     FallAsleepToSleepingCrossfade                               OFFSET(get<float>, {0x70C, 4, 0, 0})
	DMember(float)                                     WakeUpToIdleCrossfade                                       OFFSET(get<float>, {0x710, 4, 0, 0})
	DMember(bool)                                      StateTransition_FallAsleepToSleeping                        OFFSET(get<bool>, {0x714, 1, 1, 0})
	DMember(bool)                                      StateTransition_SleepingToWakeUp                            OFFSET(get<bool>, {0x714, 1, 1, 1})
	DMember(bool)                                      StateTransition_WakeUpToIdle                                OFFSET(get<bool>, {0x714, 1, 1, 2})
	DMember(bool)                                      StateTransition_IdleToFallAsleep                            OFFSET(get<bool>, {0x714, 1, 1, 3})


	/// Functions
	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance.UpdateTurnAngleStored
	// void UpdateTurnAngleStored();                                                                                            // [0x6a1b42c] Native|Event|Public|BlueprintEvent 
	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance.UpdateSwimmingYaw
	// void UpdateSwimmingYaw();                                                                                                // [0xb527c20] Native|Event|Public|BlueprintEvent 
	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance.UpdateRidingMovePlayRate
	// void UpdateRidingMovePlayRate();                                                                                         // [0x6a1c0c0] Native|Event|Public|BlueprintEvent 
	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance.UpdatePlayLandAdditive
	// void UpdatePlayLandAdditive();                                                                                           // [0xb527b4c] Native|Event|Public|BlueprintEvent 
	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance.UpdateFootPhaseStop
	// void UpdateFootPhaseStop();                                                                                              // [0x6a1b45c] Native|Event|Public|BlueprintEvent 
	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance.UpdateBoostPlayRate
	// void UpdateBoostPlayRate();                                                                                              // [0x6a1b4a4] Native|Event|Public|BlueprintEvent 
	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance.UpdateBodyRoll
	// void UpdateBodyRoll();                                                                                                   // [0x6a1b474] Native|Event|Public|BlueprintEvent 
	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance.UpdateBackwardVelocity
	// void UpdateBackwardVelocity();                                                                                           // [0xb527968] Native|Event|Public|BlueprintEvent 
	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance.UpdateBackwardsPlayRate
	// void UpdateBackwardsPlayRate();                                                                                          // [0xb527980] Native|Event|Public|BlueprintEvent 
	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance.FinishFootPhaseStopUpdate
	// void FinishFootPhaseStopUpdate();                                                                                        // [0x6a1b444] Native|Event|Public|BlueprintEvent 
	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance.CalculateLookAtAlpha
	// void CalculateLookAtAlpha(bool bForceDisableLookAt, float DeltaSeconds);                                                 // [0xb527770] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/IrwinRuntime.FortAIFaunaAnimInstance_Burt
/// Size: 0x00A8 (0x000718 - 0x0007C0)
class UFortAIFaunaAnimInstance_Burt : public UFortAIFaunaAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1984;

public:
	DMember(float)                                     MovingPlayRate                                              OFFSET(get<float>, {0x718, 4, 0, 0})
	DMember(float)                                     LocomotionPoseAdditiveAlpha                                 OFFSET(get<float>, {0x71C, 4, 0, 0})
	DMember(bool)                                      bEnableHeadTiltUpAdditive                                   OFFSET(get<bool>, {0x720, 1, 0, 0})
	DMember(bool)                                      bTurnAngleIsNegative                                        OFFSET(get<bool>, {0x721, 1, 0, 0})
	SMember(FName)                                     DisableLocomotionAdditiveCurveName                          OFFSET(getStruct<T>, {0x724, 4, 0, 0})
	SMember(FName)                                     InterruptibleCurveName                                      OFFSET(getStruct<T>, {0x728, 4, 0, 0})
	DMember(bool)                                      bIsIdleShuffleTurn                                          OFFSET(get<bool>, {0x72C, 1, 0, 0})
	DMember(float)                                     IdleShuffleBodyBend                                         OFFSET(get<float>, {0x730, 4, 0, 0})
	DMember(float)                                     IdleShufflePlayRate                                         OFFSET(get<float>, {0x734, 4, 0, 0})
	DMember(bool)                                      bIdleShuffleTurnDirection                                   OFFSET(get<bool>, {0x738, 1, 0, 0})
	DMember(bool)                                      bIsMoving                                                   OFFSET(get<bool>, {0x739, 1, 0, 0})
	DMember(bool)                                      bCanTransitionIdleToApex                                    OFFSET(get<bool>, {0x73A, 1, 0, 0})
	DMember(bool)                                      bCanTransitionIdleToMoving                                  OFFSET(get<bool>, {0x73B, 1, 0, 0})
	DMember(bool)                                      bCanTransitionMovingToIdle                                  OFFSET(get<bool>, {0x73C, 1, 0, 0})
	DMember(bool)                                      bCanTransitionLandToIdle                                    OFFSET(get<bool>, {0x73D, 1, 0, 0})
	DMember(bool)                                      bCanTransitionLandToJumpStart                               OFFSET(get<bool>, {0x73E, 1, 0, 0})
	DMember(bool)                                      bCanTransitionJumpStartToApex                               OFFSET(get<bool>, {0x73F, 1, 0, 0})
	DMember(bool)                                      bCanTransitionApexToFall                                    OFFSET(get<bool>, {0x740, 1, 0, 0})
	DMember(bool)                                      bCanTransitionFallToLand                                    OFFSET(get<bool>, {0x741, 1, 0, 0})
	DMember(bool)                                      bCanTransitionIdleTurnToIdle                                OFFSET(get<bool>, {0x742, 1, 0, 0})
	DMember(bool)                                      bCanTransitionLocomotionTurnToIdle                          OFFSET(get<bool>, {0x743, 1, 0, 0})
	DMember(bool)                                      bCanTransitionLocomotionTurnToMoving                        OFFSET(get<bool>, {0x744, 1, 0, 0})
	DMember(bool)                                      bCanTransitionIdleTurnToMoving                              OFFSET(get<bool>, {0x745, 1, 0, 0})
	DMember(bool)                                      bCanTransitionFallToMoving                                  OFFSET(get<bool>, {0x746, 1, 0, 0})
	DMember(bool)                                      bCanTransitionFallToIdle                                    OFFSET(get<bool>, {0x747, 1, 0, 0})
	DMember(float)                                     MovingPlayRate_SpeedThreshold                               OFFSET(get<float>, {0x748, 4, 0, 0})
	DMember(float)                                     MovingPlayRate_SlowSpeedDivisor                             OFFSET(get<float>, {0x74C, 4, 0, 0})
	DMember(float)                                     MovingPlayRate_FastSpeedDivisor                             OFFSET(get<float>, {0x750, 4, 0, 0})
	DMember(float)                                     MovingPlayRate_MinClamp                                     OFFSET(get<float>, {0x754, 4, 0, 0})
	DMember(float)                                     MovingPlayRate_MaxClamp                                     OFFSET(get<float>, {0x758, 4, 0, 0})
	DMember(float)                                     MovingPlayRate_InterpSpeed                                  OFFSET(get<float>, {0x75C, 4, 0, 0})
	DMember(float)                                     LocomotionPoseAdditiveAlpha_InterpSpeed                     OFFSET(get<float>, {0x760, 4, 0, 0})
	DMember(float)                                     EnableHeadTiltUpAdditive_PawnUniqueIDMultiplier             OFFSET(get<float>, {0x764, 4, 0, 0})
	DMember(float)                                     EnableHeadTiltUpAdditive_ModOperand                         OFFSET(get<float>, {0x768, 4, 0, 0})
	DMember(float)                                     InterruptibleCurveValue_LargeThreshold                      OFFSET(get<float>, {0x76C, 4, 0, 0})
	DMember(float)                                     InterruptibleCurveValue_TurnAngleThreshold                  OFFSET(get<float>, {0x770, 4, 0, 0})
	DMember(float)                                     Speed_MovingThreshold                                       OFFSET(get<float>, {0x774, 4, 0, 0})
	DMember(float)                                     Speed_IdleThreshold                                         OFFSET(get<float>, {0x778, 4, 0, 0})
	DMember(float)                                     TurnAngle_LargeThreshold                                    OFFSET(get<float>, {0x77C, 4, 0, 0})
	DMember(float)                                     Speed_RidingMovingThreshold                                 OFFSET(get<float>, {0x780, 4, 0, 0})
	DMember(float)                                     Speed_RidingIdleThreshold                                   OFFSET(get<float>, {0x784, 4, 0, 0})
	DMember(float)                                     IdleShuffleBodyBendMultiplier                               OFFSET(get<float>, {0x788, 4, 0, 0})
	DMember(float)                                     IdleShuffleTurnThreshold                                    OFFSET(get<float>, {0x78C, 4, 0, 0})
	DMember(float)                                     IdleShuffleTurnDirectionThreshold                           OFFSET(get<float>, {0x790, 4, 0, 0})
	DMember(float)                                     IdleShufflePlayRateInRangeA                                 OFFSET(get<float>, {0x794, 4, 0, 0})
	DMember(float)                                     IdleShufflePlayRateInRangeB                                 OFFSET(get<float>, {0x798, 4, 0, 0})
	DMember(float)                                     IdleShufflePlayRateOutRangeA                                OFFSET(get<float>, {0x79C, 4, 0, 0})
	DMember(float)                                     IdleShufflePlayRateOutRangeB                                OFFSET(get<float>, {0x7A0, 4, 0, 0})
	DMember(float)                                     MinSpeedSlowRidingMovePlayRate                              OFFSET(get<float>, {0x7A4, 4, 0, 0})
	DMember(float)                                     SpeedSlowDivisorRidingMovePlayRate                          OFFSET(get<float>, {0x7A8, 4, 0, 0})
	SMember(FMapRangeClamped_Ranges)                   RidingMovePlayRate_Ranges                                   OFFSET(getStruct<T>, {0x7AC, 16, 0, 0})
};

/// Class /Script/IrwinRuntime.FortAIFaunaAnimInstance_Burt_Hitchhiker
/// Size: 0x0010 (0x0007C0 - 0x0007D0)
class UFortAIFaunaAnimInstance_Burt_Hitchhiker : public UFortAIFaunaAnimInstance_Burt
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2000;

public:
	DMember(bool)                                      IsFloating                                                  OFFSET(get<bool>, {0x7C0, 1, 0, 0})
	DMember(bool)                                      IsInTractorBeam                                             OFFSET(get<bool>, {0x7C1, 1, 0, 0})
	DMember(bool)                                      IsHitchhiked                                                OFFSET(get<bool>, {0x7C2, 1, 0, 0})
};

/// Class /Script/IrwinRuntime.FortAIFaunaAnimInstance_Crow
/// Size: 0x0038 (0x000718 - 0x000750)
class UFortAIFaunaAnimInstance_Crow : public UFortAIFaunaAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1872;

public:
	DMember(float)                                     WingFlapPlayRate                                            OFFSET(get<float>, {0x718, 4, 0, 0})
	DMember(bool)                                      bIsDescending                                               OFFSET(get<bool>, {0x71C, 1, 0, 0})
	DMember(bool)                                      bIsGliding                                                  OFFSET(get<bool>, {0x71D, 1, 0, 0})
	DMember(bool)                                      bIsFlying                                                   OFFSET(get<bool>, {0x71E, 1, 0, 0})
	DMember(bool)                                      bIsFlyingSlow                                               OFFSET(get<bool>, {0x71F, 1, 0, 0})
	DMember(bool)                                      bIsLanding                                                  OFFSET(get<bool>, {0x720, 1, 0, 0})
	DMember(float)                                     WingFlapPlayRateInRangeA                                    OFFSET(get<float>, {0x724, 4, 0, 0})
	DMember(float)                                     WingFlapPlayRateInRangeB                                    OFFSET(get<float>, {0x728, 4, 0, 0})
	DMember(float)                                     WingFlapPlayRateOutRangeA                                   OFFSET(get<float>, {0x72C, 4, 0, 0})
	DMember(float)                                     WingFlapPlayRateOutRangeB                                   OFFSET(get<float>, {0x730, 4, 0, 0})
	DMember(float)                                     ZVelocityDescendingThreshold                                OFFSET(get<float>, {0x734, 4, 0, 0})
	DMember(float)                                     GlidingSpeedThreshold                                       OFFSET(get<float>, {0x738, 4, 0, 0})
	DMember(float)                                     FlyingSpeedThreshold                                        OFFSET(get<float>, {0x73C, 4, 0, 0})
	DMember(float)                                     FlyingSlowSpeedThreshold                                    OFFSET(get<float>, {0x740, 4, 0, 0})
	DMember(float)                                     LandingSpeedThreshold                                       OFFSET(get<float>, {0x744, 4, 0, 0})
};

/// Class /Script/IrwinRuntime.FortAIFaunaAnimInstance_Grandma
/// Size: 0x00C8 (0x000718 - 0x0007E0)
class UFortAIFaunaAnimInstance_Grandma : public UFortAIFaunaAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2016;

public:
	CMember(class AFortAIPawn*)                        AIPawn                                                      OFFSET(get<T>, {0x718, 8, 0, 0})
	DMember(float)                                     MeshScale                                                   OFFSET(get<float>, {0x720, 4, 0, 0})
	DMember(bool)                                      bShouldPlayFullBodyInPlace                                  OFFSET(get<bool>, {0x724, 1, 0, 0})
	DMember(float)                                     BlinkAlpha                                                  OFFSET(get<float>, {0x728, 4, 0, 0})
	DMember(float)                                     WalkRunPlayRate                                             OFFSET(get<float>, {0x72C, 4, 0, 0})
	DMember(float)                                     LocomotionPoseAdditiveAlpha                                 OFFSET(get<float>, {0x730, 4, 0, 0})
	DMember(bool)                                      bEnableSniffAdditive                                        OFFSET(get<bool>, {0x734, 1, 0, 0})
	DMember(bool)                                      bEnableAlertAdditive                                        OFFSET(get<bool>, {0x735, 1, 0, 0})
	DMember(bool)                                      bIdleStartTurn                                              OFFSET(get<bool>, {0x736, 1, 0, 0})
	DMember(bool)                                      bLookAtAdditiveTurnAlpha                                    OFFSET(get<bool>, {0x737, 1, 0, 0})
	DMember(bool)                                      bIsIdleShuffleTurn                                          OFFSET(get<bool>, {0x738, 1, 0, 0})
	DMember(float)                                     IdleShuffleBodyBend                                         OFFSET(get<float>, {0x73C, 4, 0, 0})
	DMember(float)                                     IdleShufflePlayRate                                         OFFSET(get<float>, {0x740, 4, 0, 0})
	DMember(bool)                                      bIdleShuffleTurnDirection                                   OFFSET(get<bool>, {0x744, 1, 0, 0})
	DMember(float)                                     TurnInPlaceModulatedSpeed                                   OFFSET(get<float>, {0x748, 4, 0, 0})
	DMember(float)                                     MaxSpeedFullBodyInPlace                                     OFFSET(get<float>, {0x74C, 4, 0, 0})
	DMember(float)                                     MinCurveValueFullBodyInPlace                                OFFSET(get<float>, {0x750, 4, 0, 0})
	DMember(float)                                     LocomotionPoseAdditiveAlphaInterpRate                       OFFSET(get<float>, {0x754, 4, 0, 0})
	DMember(int32_t)                                   SniffAdditiveFrequenceySeconds                              OFFSET(get<int32_t>, {0x758, 4, 0, 0})
	DMember(int32_t)                                   AlertAdditiveFrequenceySeconds                              OFFSET(get<int32_t>, {0x75C, 4, 0, 0})
	DMember(int32_t)                                   PawnIDScale                                                 OFFSET(get<int32_t>, {0x760, 4, 0, 0})
	SMember(FName)                                     ShouldPlayFullBodyInPlaceCurveName                          OFFSET(getStruct<T>, {0x764, 4, 0, 0})
	SMember(FName)                                     BlinkAlphaCurveName                                         OFFSET(getStruct<T>, {0x768, 4, 0, 0})
	DMember(float)                                     IdleStartTurnInterruptibleThreshold                         OFFSET(get<float>, {0x76C, 4, 0, 0})
	DMember(float)                                     IdleShuffleBodyBendMultiplier                               OFFSET(get<float>, {0x770, 4, 0, 0})
	DMember(float)                                     IdleShuffleTurnThreshold                                    OFFSET(get<float>, {0x774, 4, 0, 0})
	DMember(float)                                     IdleShuffleTurnDirectionThreshold                           OFFSET(get<float>, {0x778, 4, 0, 0})
	DMember(float)                                     LookAtAdditiveTurnAlphaThreshold                            OFFSET(get<float>, {0x77C, 4, 0, 0})
	DMember(float)                                     IdleShufflePlayRateInRangeA                                 OFFSET(get<float>, {0x780, 4, 0, 0})
	DMember(float)                                     IdleShufflePlayRateInRangeB                                 OFFSET(get<float>, {0x784, 4, 0, 0})
	DMember(float)                                     IdleShufflePlayRateOutRangeA                                OFFSET(get<float>, {0x788, 4, 0, 0})
	DMember(float)                                     IdleShufflePlayRateOutRangeB                                OFFSET(get<float>, {0x78C, 4, 0, 0})
	DMember(float)                                     TurnInPlaceModulatedSpeedFactor                             OFFSET(get<float>, {0x790, 4, 0, 0})
	DMember(bool)                                      bIsMovingOnGroundORIsSurfaceSwimming                        OFFSET(get<bool>, {0x794, 1, 0, 0})
	DMember(bool)                                      bStateRule_DefaultJump_ToJumpApex                           OFFSET(get<bool>, {0x795, 1, 0, 0})
	DMember(bool)                                      bStateRule_TurnIdle_Idle                                    OFFSET(get<bool>, {0x796, 1, 0, 0})
	DMember(bool)                                      bStateRule_TurnIdle_Moving                                  OFFSET(get<bool>, {0x797, 1, 0, 0})
	DMember(bool)                                      bStateRule_Moving_TurnIdle                                  OFFSET(get<bool>, {0x798, 1, 0, 0})
	DMember(bool)                                      bStateRule_TurnMoving_Moving                                OFFSET(get<bool>, {0x799, 1, 0, 0})
	DMember(bool)                                      bStateRule_Moving_TurnMoving                                OFFSET(get<bool>, {0x79A, 1, 0, 0})
	DMember(bool)                                      bStateRule_Idle_Moving                                      OFFSET(get<bool>, {0x79B, 1, 0, 0})
	DMember(bool)                                      bStateRule_Moving_Idle                                      OFFSET(get<bool>, {0x79C, 1, 0, 0})
	DMember(bool)                                      bStateRule_JumpLand_Idle                                    OFFSET(get<bool>, {0x79D, 1, 0, 0})
	DMember(bool)                                      bStateRule_JumpLand_Moving                                  OFFSET(get<bool>, {0x79E, 1, 0, 0})
	DMember(bool)                                      bStateRule_JumpStart_JumpApex                               OFFSET(get<bool>, {0x79F, 1, 0, 0})
	DMember(bool)                                      bStateRule_Fall_Moving                                      OFFSET(get<bool>, {0x7A0, 1, 0, 0})
	DMember(bool)                                      bStateRule_Fall_Idle                                        OFFSET(get<bool>, {0x7A1, 1, 0, 0})
	DMember(bool)                                      bStateRule_SwimIdle_SwimLoco                                OFFSET(get<bool>, {0x7A2, 1, 0, 0})
	DMember(bool)                                      bStateRule_SwimLoco_SwimIdle                                OFFSET(get<bool>, {0x7A3, 1, 0, 0})
	DMember(bool)                                      bStateRule_SwimTurn_SwimIdle                                OFFSET(get<bool>, {0x7A4, 1, 0, 0})
	DMember(bool)                                      bStateRule_SwimTurn_SwimLoco                                OFFSET(get<bool>, {0x7A5, 1, 0, 0})
	DMember(bool)                                      bAnimRule_NegativeTurnAngle                                 OFFSET(get<bool>, {0x7A6, 1, 0, 0})
	DMember(float)                                     InterruptibleMaxCheck                                       OFFSET(get<float>, {0x7A8, 4, 0, 0})
	DMember(float)                                     SpeedStopTransition                                         OFFSET(get<float>, {0x7AC, 4, 0, 0})
	DMember(float)                                     SpeedIdleMoveTransition                                     OFFSET(get<float>, {0x7B0, 4, 0, 0})
	DMember(float)                                     SpeedMovingTurnIdleTransition                               OFFSET(get<float>, {0x7B4, 4, 0, 0})
	DMember(float)                                     SpeedToMoveMin                                              OFFSET(get<float>, {0x7B8, 4, 0, 0})
	DMember(float)                                     SpeedToMoveMinWhileRiding                                   OFFSET(get<float>, {0x7BC, 4, 0, 0})
	DMember(float)                                     SpeedToMoveMinWhileAcceleratingAndRiding                    OFFSET(get<float>, {0x7C0, 4, 0, 0})
	DMember(float)                                     StateTimeFromEndThreshold                                   OFFSET(get<float>, {0x7C4, 4, 0, 0})
	DMember(float)                                     SpeedIdleStartTurnThreshold                                 OFFSET(get<float>, {0x7C8, 4, 0, 0})
	DMember(float)                                     SpeedFallMovingThreshold                                    OFFSET(get<float>, {0x7CC, 4, 0, 0})


	/// Functions
	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance_Grandma.UpdateStateVariables
	// void UpdateStateVariables(bool bAccelerating);                                                                           // [0xb527b8c] Final|Native|Public|BlueprintCallable 
	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance_Grandma.UpdateShouldPlayFullBodyInPlace
	// void UpdateShouldPlayFullBodyInPlace();                                                                                  // [0xb527b64] Final|Native|Public|BlueprintCallable 
	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance_Grandma.UpdateMovingRates
	// void UpdateMovingRates();                                                                                                // [0xb527b24] Final|Native|Public|BlueprintCallable 
	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance_Grandma.UpdateMeshScale
	// void UpdateMeshScale();                                                                                                  // [0xb527b00] Final|Native|Public|BlueprintCallable 
	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance_Grandma.UpdateLocomotionPoseAlpha
	// void UpdateLocomotionPoseAlpha();                                                                                        // [0xb527ad4] Final|Native|Public|BlueprintCallable 
	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance_Grandma.UpdateIdleStartTurn
	// void UpdateIdleStartTurn();                                                                                              // [0xb527a30] Final|Native|Public|BlueprintCallable 
	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance_Grandma.UpdateEnableSniffAdditive
	// void UpdateEnableSniffAdditive();                                                                                        // [0xb527a0c] Final|Native|Public|BlueprintCallable 
	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance_Grandma.UpdateEnableAlertAdditive
	// void UpdateEnableAlertAdditive();                                                                                        // [0xb5279c4] Final|Native|Public|BlueprintCallable 
	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance_Grandma.UpdateBlinkAlpha
	// void UpdateBlinkAlpha();                                                                                                 // [0xb527998] Final|Native|Public|BlueprintCallable 
	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance_Grandma.DetermineShouldPlayFullBodyInPlace
	// bool DetermineShouldPlayFullBodyInPlace();                                                                               // [0xb527944] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance_Grandma.DetermineIdleStartTurn
	// bool DetermineIdleStartTurn();                                                                                           // [0xb5278d8] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance_Grandma.DetermineEnableSniffAdditive
	// bool DetermineEnableSniffAdditive();                                                                                     // [0xb5278b8] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance_Grandma.DetermineEnableAlertAdditive
	// bool DetermineEnableAlertAdditive();                                                                                     // [0xb527878] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance_Grandma.CalculateWalkRunPlayRate
	// float CalculateWalkRunPlayRate();                                                                                        // [0xb527854] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance_Grandma.CalculateMeshScale
	// float CalculateMeshScale();                                                                                              // [0xb527834] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance_Grandma.CalculateLocomotionPoseAlpha
	// float CalculateLocomotionPoseAlpha();                                                                                    // [0xb527748] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance_Grandma.CalculateBlinkAlpha
	// float CalculateBlinkAlpha();                                                                                             // [0xb5276f8] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/IrwinRuntime.FortAIFaunaAnimInstance_Grandma_Hitchhiker
/// Size: 0x0008 (0x0007D8 - 0x0007E0)
class UFortAIFaunaAnimInstance_Grandma_Hitchhiker : public UFortAIFaunaAnimInstance_Grandma
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2016;

public:
	DMember(bool)                                      bIsHitchhiked                                               OFFSET(get<bool>, {0x7D8, 1, 0, 0})
	DMember(bool)                                      bIsGrandmaSprinting                                         OFFSET(get<bool>, {0x7D9, 1, 0, 0})
	DMember(float)                                     SprintCheckSpeed                                            OFFSET(get<float>, {0x7DC, 4, 0, 0})
};

/// Class /Script/IrwinRuntime.FortAIFaunaAnimInstance_Nug
/// Size: 0x0098 (0x000718 - 0x0007B0)
class UFortAIFaunaAnimInstance_Nug : public UFortAIFaunaAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1968;

public:
	DMember(bool)                                      bIsBeingHeld                                                OFFSET(get<bool>, {0x718, 1, 0, 0})
	DMember(bool)                                      bIsBeingThrown                                              OFFSET(get<bool>, {0x719, 1, 0, 0})
	DMember(float)                                     LowerBodyMaskAlpha                                          OFFSET(get<float>, {0x71C, 4, 0, 0})
	DMember(bool)                                      bShouldExitJump                                             OFFSET(get<bool>, {0x720, 1, 0, 0})
	DMember(float)                                     MovingPlayRate                                              OFFSET(get<float>, {0x724, 4, 0, 0})
	DMember(bool)                                      bShouldLean                                                 OFFSET(get<bool>, {0x728, 1, 0, 0})
	DMember(float)                                     LeanDirection                                               OFFSET(get<float>, {0x72C, 4, 0, 0})
	DMember(bool)                                      bTurnAngleIsNegative                                        OFFSET(get<bool>, {0x730, 1, 0, 0})
	SMember(FName)                                     InterruptibleCurveName                                      OFFSET(getStruct<T>, {0x734, 4, 0, 0})
	DMember(bool)                                      bIsIdleShuffleTurn                                          OFFSET(get<bool>, {0x738, 1, 0, 0})
	DMember(float)                                     IdleShuffleBodyBend                                         OFFSET(get<float>, {0x73C, 4, 0, 0})
	DMember(float)                                     IdleShufflePlayRate                                         OFFSET(get<float>, {0x740, 4, 0, 0})
	DMember(bool)                                      bIdleShuffleTurnDirection                                   OFFSET(get<bool>, {0x744, 1, 0, 0})
	DMember(bool)                                      bCanTransitionIdleToIdleTurn                                OFFSET(get<bool>, {0x745, 1, 0, 0})
	DMember(bool)                                      bCanTransitionIdleToLocomotionTurn                          OFFSET(get<bool>, {0x746, 1, 0, 0})
	DMember(bool)                                      bCanTransitionIdleToMoving                                  OFFSET(get<bool>, {0x747, 1, 0, 0})
	DMember(bool)                                      bCanTransitionIdleToJumpApex                                OFFSET(get<bool>, {0x748, 1, 0, 0})
	DMember(bool)                                      bCanTransitionMovingToIdle                                  OFFSET(get<bool>, {0x749, 1, 0, 0})
	DMember(bool)                                      bCanTransitionJumpStartToJumpApex                           OFFSET(get<bool>, {0x74A, 1, 0, 0})
	DMember(bool)                                      bCanTransitionJumpApexToJumpLoop                            OFFSET(get<bool>, {0x74B, 1, 0, 0})
	DMember(bool)                                      bCanTransitionLocomotionTurnToIdle                          OFFSET(get<bool>, {0x74C, 1, 0, 0})
	DMember(bool)                                      bCanTransitionLocomotionTurnToMoving                        OFFSET(get<bool>, {0x74D, 1, 0, 0})
	DMember(bool)                                      bCanTransitionIdleTurnToMoving                              OFFSET(get<bool>, {0x74E, 1, 0, 0})
	DMember(bool)                                      bCanTransitionIdleTurnToIdle                                OFFSET(get<bool>, {0x74F, 1, 0, 0})
	DMember(bool)                                      bCanTransitionJumpLoopToJumpLand                            OFFSET(get<bool>, {0x750, 1, 0, 0})
	DMember(bool)                                      bCanTransitionIsBeingHeldToChickenChuck                     OFFSET(get<bool>, {0x751, 1, 0, 0})
	DMember(float)                                     ShouldExitJump_SpeedThreshold                               OFFSET(get<float>, {0x754, 4, 0, 0})
	DMember(float)                                     MovingPlayRate_SpeedThreshold                               OFFSET(get<float>, {0x758, 4, 0, 0})
	DMember(float)                                     MovingPlayRate_SlowSpeedDivisor                             OFFSET(get<float>, {0x75C, 4, 0, 0})
	DMember(float)                                     MovingPlayRate_FastSpeedDivisor                             OFFSET(get<float>, {0x760, 4, 0, 0})
	DMember(float)                                     MovingPlayRate_InterpSpeed                                  OFFSET(get<float>, {0x764, 4, 0, 0})
	DMember(float)                                     MovingPlayRate_MinClamp                                     OFFSET(get<float>, {0x768, 4, 0, 0})
	DMember(float)                                     MovingPlayRate_MaxClamp                                     OFFSET(get<float>, {0x76C, 4, 0, 0})
	DMember(float)                                     LeanDirection_SpeedThreshold                                OFFSET(get<float>, {0x770, 4, 0, 0})
	DMember(float)                                     ShouldLean_SpeedThreshold                                   OFFSET(get<float>, {0x774, 4, 0, 0})
	DMember(float)                                     InterruptibleCurveValue_LargeThreshold                      OFFSET(get<float>, {0x778, 4, 0, 0})
	DMember(float)                                     Speed_MovingThreshold                                       OFFSET(get<float>, {0x77C, 4, 0, 0})
	DMember(float)                                     Speed_IdleThreshold                                         OFFSET(get<float>, {0x780, 4, 0, 0})
	DMember(float)                                     IdleTurnTransition_SpeedThreshold                           OFFSET(get<float>, {0x784, 4, 0, 0})
	DMember(float)                                     LocomotionTurnTransition_SpeedThreshold                     OFFSET(get<float>, {0x788, 4, 0, 0})
	DMember(float)                                     IdleShuffleBodyBendMultiplier                               OFFSET(get<float>, {0x78C, 4, 0, 0})
	DMember(float)                                     IdleShuffleTurnThreshold                                    OFFSET(get<float>, {0x790, 4, 0, 0})
	DMember(float)                                     IdleShuffleTurnDirectionThreshold                           OFFSET(get<float>, {0x794, 4, 0, 0})
	DMember(float)                                     IdleShufflePlayRateInRangeA                                 OFFSET(get<float>, {0x798, 4, 0, 0})
	DMember(float)                                     IdleShufflePlayRateInRangeB                                 OFFSET(get<float>, {0x79C, 4, 0, 0})
	DMember(float)                                     IdleShufflePlayRateOutRangeA                                OFFSET(get<float>, {0x7A0, 4, 0, 0})
	DMember(float)                                     IdleShufflePlayRateOutRangeB                                OFFSET(get<float>, {0x7A4, 4, 0, 0})
};

/// Class /Script/IrwinRuntime.FortAIFaunaAnimInstance_Nug_Hitchhiker
/// Size: 0x0008 (0x0007A8 - 0x0007B0)
class UFortAIFaunaAnimInstance_Nug_Hitchhiker : public UFortAIFaunaAnimInstance_Nug
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1968;

public:
	DMember(bool)                                      bIsSwimming                                                 OFFSET(get<bool>, {0x7A8, 1, 0, 0})
	DMember(bool)                                      bIsHitchhiked                                               OFFSET(get<bool>, {0x7A9, 1, 0, 0})
};

/// Class /Script/IrwinRuntime.FortAIFaunaAnimInstance_Robert
/// Size: 0x01B8 (0x000718 - 0x0008D0)
class UFortAIFaunaAnimInstance_Robert : public UFortAIFaunaAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2256;

public:
	CMember(class AFortAIPawn*)                        AIPawn                                                      OFFSET(get<T>, {0x720, 8, 0, 0})
	DMember(bool)                                      bIdleStartTurn                                              OFFSET(get<bool>, {0x728, 1, 0, 0})
	DMember(bool)                                      bEnableHeadTiltDownAdditive                                 OFFSET(get<bool>, {0x729, 1, 0, 0})
	DMember(bool)                                      bIsFullBodyInPlace                                          OFFSET(get<bool>, {0x72A, 1, 0, 0})
	DMember(float)                                     LocomotionPoseAdditiveAlpha                                 OFFSET(get<float>, {0x72C, 4, 0, 0})
	DMember(bool)                                      bIsIdleShuffleTurn                                          OFFSET(get<bool>, {0x730, 1, 0, 0})
	DMember(float)                                     IdleShuffleBodyBend                                         OFFSET(get<float>, {0x734, 4, 0, 0})
	DMember(float)                                     IdleShufflePlayRate                                         OFFSET(get<float>, {0x738, 4, 0, 0})
	DMember(bool)                                      bIdleShuffleTurnDirection                                   OFFSET(get<bool>, {0x73C, 1, 0, 0})
	DMember(bool)                                      bLookAtAdditiveTurnAlpha                                    OFFSET(get<bool>, {0x73D, 1, 0, 0})
	DMember(bool)                                      bTurnDirection                                              OFFSET(get<bool>, {0x73E, 1, 0, 0})
	DMember(int32_t)                                   PawnIDScale                                                 OFFSET(get<int32_t>, {0x740, 4, 0, 0})
	DMember(int32_t)                                   HeadTiltDownAdditiveFrequenceySeconds                       OFFSET(get<int32_t>, {0x744, 4, 0, 0})
	DMember(float)                                     ForceFullBodyTransition                                     OFFSET(get<float>, {0x748, 4, 0, 0})
	DMember(float)                                     LocomotionPoseAdditiveAlphaInterpRate                       OFFSET(get<float>, {0x74C, 4, 0, 0})
	DMember(float)                                     IdleStartTurnInterruptibleThreshold                         OFFSET(get<float>, {0x750, 4, 0, 0})
	DMember(float)                                     LookAtAlphaThreshold                                        OFFSET(get<float>, {0x754, 4, 0, 0})
	DMember(float)                                     SpeedMovingThreshold                                        OFFSET(get<float>, {0x758, 4, 0, 0})
	DMember(float)                                     TurnDirectionThreshold                                      OFFSET(get<float>, {0x75C, 4, 0, 0})
	DMember(float)                                     SprintStopThreshold                                         OFFSET(get<float>, {0x760, 4, 0, 0})
	DMember(float)                                     WalkStopThreshold                                           OFFSET(get<float>, {0x764, 4, 0, 0})
	DMember(float)                                     BackwardStopThreshold                                       OFFSET(get<float>, {0x768, 4, 0, 0})
	DMember(float)                                     AdditiveInterruptibleThreshold                              OFFSET(get<float>, {0x76C, 4, 0, 0})
	DMember(float)                                     InterruptibleThreshold                                      OFFSET(get<float>, {0x770, 4, 0, 0})
	DMember(float)                                     TurningRightThreshold                                       OFFSET(get<float>, {0x774, 4, 0, 0})
	DMember(float)                                     LeftFootStopThreshold                                       OFFSET(get<float>, {0x778, 4, 0, 0})
	DMember(float)                                     HipInterpSpeed_Fast                                         OFFSET(get<float>, {0x77C, 4, 0, 0})
	DMember(float)                                     HipInterpSpeed_Slow                                         OFFSET(get<float>, {0x780, 4, 0, 0})
	DMember(float)                                     AdditiveHipAlphaTargeting_Constant                          OFFSET(get<float>, {0x784, 4, 0, 0})
	DMember(float)                                     BackwardLocomotionThreshold                                 OFFSET(get<float>, {0x788, 4, 0, 0})
	DMember(float)                                     LocomotionThreshold                                         OFFSET(get<float>, {0x78C, 4, 0, 0})
	DMember(float)                                     PawnSpeedThreshold                                          OFFSET(get<float>, {0x790, 4, 0, 0})
	DMember(float)                                     LocomotionPlayRate_Fixed                                    OFFSET(get<float>, {0x794, 4, 0, 0})
	DMember(float)                                     BoostJumpingThreshold                                       OFFSET(get<float>, {0x798, 4, 0, 0})
	DMember(float)                                     BoostStartPosition_Jumping                                  OFFSET(get<float>, {0x79C, 4, 0, 0})
	DMember(float)                                     BoostStartPosition_NotJumping                               OFFSET(get<float>, {0x7A0, 4, 0, 0})
	DMember(float)                                     AdditiveBodyTurnSwimInRangeA                                OFFSET(get<float>, {0x7A4, 4, 0, 0})
	DMember(float)                                     AdditiveBodyTurnSwimInRangeB                                OFFSET(get<float>, {0x7A8, 4, 0, 0})
	DMember(float)                                     AdditiveBodyTurnSwimOutRangeA                               OFFSET(get<float>, {0x7AC, 4, 0, 0})
	DMember(float)                                     AdditiveBodyTurnSwimOutRangeB                               OFFSET(get<float>, {0x7B0, 4, 0, 0})
	DMember(float)                                     AdditiveBodyTurnNotSwimInRangeA                             OFFSET(get<float>, {0x7B4, 4, 0, 0})
	DMember(float)                                     AdditiveBodyTurnNotSwimInRangeB                             OFFSET(get<float>, {0x7B8, 4, 0, 0})
	DMember(float)                                     AdditiveBodyTurnNotSwimOutRangeA                            OFFSET(get<float>, {0x7BC, 4, 0, 0})
	DMember(float)                                     AdditiveBodyTurnNotSwimOutRangeB                            OFFSET(get<float>, {0x7C0, 4, 0, 0})
	DMember(float)                                     BodyTurnInterpSpeed_Accel                                   OFFSET(get<float>, {0x7C4, 4, 0, 0})
	DMember(float)                                     BodyTurnInterpSpeed_NotAccel                                OFFSET(get<float>, {0x7C8, 4, 0, 0})
	DMember(float)                                     IdleAdditiveBodyTurnTarget_NotAccel                         OFFSET(get<float>, {0x7CC, 4, 0, 0})
	DMember(float)                                     AdditiveLeanAlphaTargeting_Targeting                        OFFSET(get<float>, {0x7D0, 4, 0, 0})
	DMember(float)                                     AdditiveLeanAlphaTargeting_NonTargeting                     OFFSET(get<float>, {0x7D4, 4, 0, 0})
	DMember(float)                                     AdditiveLeanAlphaInterpSpeed                                OFFSET(get<float>, {0x7D8, 4, 0, 0})
	DMember(float)                                     AdditiveHipStopAlphaTargeting_PlayerTargeting               OFFSET(get<float>, {0x7DC, 4, 0, 0})
	DMember(float)                                     HipInterpSpeed_PlayerTargeting                              OFFSET(get<float>, {0x7E0, 4, 0, 0})
	DMember(float)                                     AdditiveHipStopAlphaTargeting_NotPlayerTargeting            OFFSET(get<float>, {0x7E4, 4, 0, 0})
	DMember(float)                                     HipInterpSpeed_NotPlayerTargeting                           OFFSET(get<float>, {0x7E8, 4, 0, 0})
	DMember(float)                                     LocomotionSecondaryInRangeA                                 OFFSET(get<float>, {0x7EC, 4, 0, 0})
	DMember(float)                                     LocomotionSecondaryInRangeB                                 OFFSET(get<float>, {0x7F0, 4, 0, 0})
	DMember(float)                                     LocomotionSecondaryOutRangeA                                OFFSET(get<float>, {0x7F4, 4, 0, 0})
	DMember(float)                                     LocomotionSecondaryOutRangeB                                OFFSET(get<float>, {0x7F8, 4, 0, 0})
	DMember(float)                                     SwimCameraRotationSecondaryInRangeA                         OFFSET(get<float>, {0x7FC, 4, 0, 0})
	DMember(float)                                     SwimCameraRotationSecondaryInRangeB                         OFFSET(get<float>, {0x800, 4, 0, 0})
	DMember(float)                                     SwimCameraRotationSecondaryOutRangeA                        OFFSET(get<float>, {0x804, 4, 0, 0})
	DMember(float)                                     SwimCameraRotationSecondaryOutRangeB                        OFFSET(get<float>, {0x808, 4, 0, 0})
	DMember(float)                                     SwimRaptorRotationSecondaryInRangeA                         OFFSET(get<float>, {0x80C, 4, 0, 0})
	DMember(float)                                     SwimRaptorRotationSecondaryInRangeB                         OFFSET(get<float>, {0x810, 4, 0, 0})
	DMember(float)                                     SwimRaptorRotationSecondaryOutRangeA                        OFFSET(get<float>, {0x814, 4, 0, 0})
	DMember(float)                                     SwimRaptorRotationSecondaryOutRangeB                        OFFSET(get<float>, {0x818, 4, 0, 0})
	DMember(float)                                     IdleShuffleBodyBendMultiplier                               OFFSET(get<float>, {0x81C, 4, 0, 0})
	DMember(float)                                     IdleShuffleTurnThreshold                                    OFFSET(get<float>, {0x820, 4, 0, 0})
	DMember(float)                                     IdleShuffleTurnDirectionThreshold                           OFFSET(get<float>, {0x824, 4, 0, 0})
	DMember(float)                                     IdleShufflePlayRateInRangeA                                 OFFSET(get<float>, {0x828, 4, 0, 0})
	DMember(float)                                     IdleShufflePlayRateInRangeB                                 OFFSET(get<float>, {0x82C, 4, 0, 0})
	DMember(float)                                     IdleShufflePlayRateOutRangeA                                OFFSET(get<float>, {0x830, 4, 0, 0})
	DMember(float)                                     IdleShufflePlayRateOutRangeB                                OFFSET(get<float>, {0x834, 4, 0, 0})
	DMember(bool)                                      bStateRule_Idle_Moving                                      OFFSET(get<bool>, {0x838, 1, 0, 0})
	DMember(bool)                                      bStateRule_Moving_Idle                                      OFFSET(get<bool>, {0x839, 1, 0, 0})
	DMember(bool)                                      bStateRule_Swimming_Fall                                    OFFSET(get<bool>, {0x83A, 1, 0, 0})
	DMember(bool)                                      bStateRule_Land_Idle                                        OFFSET(get<bool>, {0x83B, 1, 0, 0})
	DMember(bool)                                      bStateRule_Fall_Idle                                        OFFSET(get<bool>, {0x83C, 1, 0, 0})
	DMember(bool)                                      bStateRule_Fall_Moving                                      OFFSET(get<bool>, {0x83D, 1, 0, 0})
	DMember(bool)                                      bStateRule_SwimIdle_SwimLoco                                OFFSET(get<bool>, {0x83E, 1, 0, 0})
	DMember(bool)                                      bStateRule_IsTurnInPlace                                    OFFSET(get<bool>, {0x83F, 1, 0, 0})
	DMember(bool)                                      bStateRule_IsSprintStop                                     OFFSET(get<bool>, {0x840, 1, 0, 0})
	DMember(bool)                                      bStateRule_IsStopBackwards                                  OFFSET(get<bool>, {0x841, 1, 0, 0})
	DMember(bool)                                      bStateRule_IsLocomotion                                     OFFSET(get<bool>, {0x842, 1, 0, 0})
	DMember(bool)                                      bStateRule_IsFinishedTurnInPlace                            OFFSET(get<bool>, {0x843, 1, 0, 0})
	DMember(bool)                                      bStateRule_IsInterruptible                                  OFFSET(get<bool>, {0x844, 1, 0, 0})
	DMember(bool)                                      bStateRule_IsIdleTurnRight                                  OFFSET(get<bool>, {0x845, 1, 0, 0})
	DMember(bool)                                      bStateRule_IsLeftFootStop                                   OFFSET(get<bool>, {0x846, 1, 0, 0})
	DMember(bool)                                      bStateRule_IsTurningRight                                   OFFSET(get<bool>, {0x847, 1, 0, 0})
	DMember(bool)                                      bStateRule_IsAdditiveInterruptible                          OFFSET(get<bool>, {0x848, 1, 0, 0})
	DMember(bool)                                      bStateRule_IsBackwardLocomotion                             OFFSET(get<bool>, {0x849, 1, 0, 0})
	DMember(bool)                                      bStateRule_IsJumpIdleLand                                   OFFSET(get<bool>, {0x84A, 1, 0, 0})
	DMember(bool)                                      bStateRule_IsIdleTurnToIdleTurn                             OFFSET(get<bool>, {0x84B, 1, 0, 0})
	DMember(bool)                                      bStateRule_BoostJumpToBoostLand                             OFFSET(get<bool>, {0x84C, 1, 0, 0})
	DMember(bool)                                      bStateRule_IsJumpToBoostJump                                OFFSET(get<bool>, {0x84D, 1, 0, 0})
	DMember(bool)                                      bStateRule_IsJumpToJumpLand                                 OFFSET(get<bool>, {0x84E, 1, 0, 0})
	DMember(bool)                                      bStateRule_BoostFallLoopToBoostLand                         OFFSET(get<bool>, {0x84F, 1, 0, 0})
	DMember(bool)                                      bStateRule_IsLocomotionToIdle                               OFFSET(get<bool>, {0x850, 1, 0, 0})
	DMember(bool)                                      bStateRule_IsExitLocomotionToIdle                           OFFSET(get<bool>, {0x851, 1, 0, 0})
	DMember(bool)                                      bStateRule_IsLocomotionHoldToSecondary                      OFFSET(get<bool>, {0x852, 1, 0, 0})
	DMember(bool)                                      bStateRule_IsLocomotionSecondaryToHold                      OFFSET(get<bool>, {0x853, 1, 0, 0})
	DMember(bool)                                      bStateRule_IsJumpAdditive                                   OFFSET(get<bool>, {0x854, 1, 0, 0})
	DMember(bool)                                      bStateRule_IsLandAdditiveToJump                             OFFSET(get<bool>, {0x855, 1, 0, 0})
	DMember(bool)                                      bStateRule_IsAllowSlopeSlide                                OFFSET(get<bool>, {0x856, 1, 0, 0})
	DMember(bool)                                      bStateRule_IsToJumpState                                    OFFSET(get<bool>, {0x857, 1, 0, 0})
	DMember(bool)                                      bIsRidden                                                   OFFSET(get<bool>, {0x858, 1, 0, 0})
	DMember(bool)                                      bIsStop                                                     OFFSET(get<bool>, {0x859, 1, 0, 0})
	DMember(bool)                                      bIsWalkStop                                                 OFFSET(get<bool>, {0x85A, 1, 0, 0})
	DMember(float)                                     AdditiveHipAlpha                                            OFFSET(get<float>, {0x85C, 4, 0, 0})
	DMember(float)                                     AdditiveBodyAlpha                                           OFFSET(get<float>, {0x860, 4, 0, 0})
	DMember(float)                                     RiderAimYaw                                                 OFFSET(get<float>, {0x864, 4, 0, 0})
	DMember(float)                                     PlayerSlopePitch                                            OFFSET(get<float>, {0x868, 4, 0, 0})
	DMember(bool)                                      bIsPlayerTargeting                                          OFFSET(get<bool>, {0x86C, 1, 0, 0})
	DMember(float)                                     AdditiveHipAlphaTargeting                                   OFFSET(get<float>, {0x870, 4, 0, 0})
	DMember(float)                                     HipInterpSpeed                                              OFFSET(get<float>, {0x874, 4, 0, 0})
	DMember(float)                                     IdleAdditiveBodyTurnTarget                                  OFFSET(get<float>, {0x878, 4, 0, 0})
	DMember(float)                                     BodyTurnAlpha                                               OFFSET(get<float>, {0x87C, 4, 0, 0})
	DMember(float)                                     BodyTurnInterpSpeed                                         OFFSET(get<float>, {0x880, 4, 0, 0})
	DMember(float)                                     LocomotionPlayRate                                          OFFSET(get<float>, {0x884, 4, 0, 0})
	DMember(float)                                     AdditiveLeanAlpha                                           OFFSET(get<float>, {0x888, 4, 0, 0})
	DMember(float)                                     AdditiveLeanAlphaTargeting                                  OFFSET(get<float>, {0x88C, 4, 0, 0})
	DMember(float)                                     BoostStartPosition                                          OFFSET(get<float>, {0x890, 4, 0, 0})
	DMember(float)                                     AdditiveHipStopAlpha                                        OFFSET(get<float>, {0x894, 4, 0, 0})
	DMember(float)                                     AdditiveHipStopAlphaTargeting                               OFFSET(get<float>, {0x898, 4, 0, 0})
	DMember(bool)                                      bIsAllowBoost                                               OFFSET(get<bool>, {0x89C, 1, 0, 0})
	DMember(bool)                                      bIsSlopeWarpHack                                            OFFSET(get<bool>, {0x89D, 1, 0, 0})
	DMember(float)                                     LocomotionHeadSecondary                                     OFFSET(get<float>, {0x8A0, 4, 0, 0})
	DMember(float)                                     LocomotionTailSecondary                                     OFFSET(get<float>, {0x8A4, 4, 0, 0})
	DMember(float)                                     SwimCameraRotationSecondary                                 OFFSET(get<float>, {0x8A8, 4, 0, 0})
	DMember(float)                                     SwimRaptorRotationSecondary                                 OFFSET(get<float>, {0x8AC, 4, 0, 0})
	DMember(float)                                     SwimTurnYaw                                                 OFFSET(get<float>, {0x8B0, 4, 0, 0})
	DMember(float)                                     SwimHeadYaw                                                 OFFSET(get<float>, {0x8B4, 4, 0, 0})
	DMember(bool)                                      bAnimRule_NegativeTurnAngle                                 OFFSET(get<bool>, {0x8B8, 1, 0, 0})
	DMember(bool)                                      bIsAccelerating2D                                           OFFSET(get<bool>, {0x8B9, 1, 0, 0})
	DMember(float)                                     InterruptibleMaxCheck                                       OFFSET(get<float>, {0x8BC, 4, 0, 0})
	DMember(float)                                     SpeedStopTransition                                         OFFSET(get<float>, {0x8C0, 4, 0, 0})
	DMember(float)                                     SpeedIdleMoveTransition                                     OFFSET(get<float>, {0x8C4, 4, 0, 0})
	DMember(float)                                     SpeedToMoveMin                                              OFFSET(get<float>, {0x8C8, 4, 0, 0})
	DMember(float)                                     StateTimeFromEndThreshold                                   OFFSET(get<float>, {0x8CC, 4, 0, 0})


	/// Functions
	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance_Robert.UpdateStateVariables
	// void UpdateStateVariables();                                                                                             // [0xb527c0c] Final|Native|Public|BlueprintCallable 
	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance_Robert.UpdateLocomotionPoseAdditiveAlpha
	// void UpdateLocomotionPoseAdditiveAlpha();                                                                                // [0xb527aa8] Final|Native|Public|BlueprintCallable 
	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance_Robert.UpdateIsFullBodyInPlace
	// void UpdateIsFullBodyInPlace();                                                                                          // [0xb527a80] Final|Native|Public|BlueprintCallable 
	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance_Robert.UpdateIdleStartTurn
	// void UpdateIdleStartTurn();                                                                                              // [0xb527a58] Final|Native|Public|BlueprintCallable 
	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance_Robert.UpdateEnableHeadTiltDownAdditive
	// void UpdateEnableHeadTiltDownAdditive();                                                                                 // [0xb5279e8] Final|Native|Public|BlueprintCallable 
	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance_Robert.DetermineIsFullBodyInPlace
	// bool DetermineIsFullBodyInPlace();                                                                                       // [0xb527920] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance_Robert.DetermineIdleStartTurn
	// bool DetermineIdleStartTurn();                                                                                           // [0xb5278fc] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance_Robert.DetermineEnableHeadTiltDownAdditive
	// bool DetermineEnableHeadTiltDownAdditive();                                                                              // [0xb527898] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance_Robert.CalculateLocomotionPoseAdditiveAlpha
	// float CalculateLocomotionPoseAdditiveAlpha();                                                                            // [0xb527720] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/IrwinRuntime.FortAIFaunaAnimInstance_Smackie
/// Size: 0x0038 (0x000718 - 0x000750)
class UFortAIFaunaAnimInstance_Smackie : public UFortAIFaunaAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1872;

public:
	DMember(bool)                                      bIsIdleShuffleTurn                                          OFFSET(get<bool>, {0x718, 1, 0, 0})
	DMember(float)                                     IdleShuffleBodyBend                                         OFFSET(get<float>, {0x71C, 4, 0, 0})
	DMember(float)                                     IdleShufflePlayRate                                         OFFSET(get<float>, {0x720, 4, 0, 0})
	DMember(bool)                                      bIdleShuffleTurnDirection                                   OFFSET(get<bool>, {0x724, 1, 0, 0})
	DMember(bool)                                      bCanTransitionIdleToHop                                     OFFSET(get<bool>, {0x725, 1, 0, 0})
	DMember(bool)                                      bCanTransitionHopToIdle                                     OFFSET(get<bool>, {0x726, 1, 0, 0})
	DMember(bool)                                      bCanTransitionFallToIdle                                    OFFSET(get<bool>, {0x727, 1, 0, 0})
	DMember(bool)                                      bCanTransitionFallToHop                                     OFFSET(get<bool>, {0x728, 1, 0, 0})
	DMember(float)                                     SpeedThreshold                                              OFFSET(get<float>, {0x72C, 4, 0, 0})
	DMember(float)                                     IdleShuffleBodyBendMultiplier                               OFFSET(get<float>, {0x730, 4, 0, 0})
	DMember(float)                                     IdleShuffleTurnThreshold                                    OFFSET(get<float>, {0x734, 4, 0, 0})
	DMember(float)                                     IdleShuffleTurnDirectionThreshold                           OFFSET(get<float>, {0x738, 4, 0, 0})
	DMember(float)                                     IdleShufflePlayRateInRangeA                                 OFFSET(get<float>, {0x73C, 4, 0, 0})
	DMember(float)                                     IdleShufflePlayRateInRangeB                                 OFFSET(get<float>, {0x740, 4, 0, 0})
	DMember(float)                                     IdleShufflePlayRateOutRangeA                                OFFSET(get<float>, {0x744, 4, 0, 0})
	DMember(float)                                     IdleShufflePlayRateOutRangeB                                OFFSET(get<float>, {0x748, 4, 0, 0})
};

/// Class /Script/IrwinRuntime.FortAIFaunaLayerAnimInstance
/// Size: 0x0008 (0x000468 - 0x000470)
class UFortAIFaunaLayerAnimInstance : public UFortBaseLayerAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1136;

public:
	CMember(class UAnimInstance*)                      MainAnimBP                                                  OFFSET(get<T>, {0x468, 8, 0, 0})
};

/// Struct /Script/IrwinRuntime.RidingAnimationData
/// Size: 0x0014 (0x000000 - 0x000014)
class FRidingAnimationData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	DMember(bool)                                      bIsRidden                                                   OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(bool)                                      bIsTurningInPlace                                           OFFSET(get<bool>, {0x1, 1, 0, 0})
	DMember(bool)                                      bIsSprinting                                                OFFSET(get<bool>, {0x2, 1, 0, 0})
	DMember(bool)                                      bIsBeingPetted                                              OFFSET(get<bool>, {0x3, 1, 0, 0})
	DMember(bool)                                      bIsMovingBackwards                                          OFFSET(get<bool>, {0x4, 1, 0, 0})
	DMember(float)                                     TurnInPlaceRotationSpeed                                    OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     TurnInPlaceAngleDelta                                       OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     RiderReferentialYaw                                         OFFSET(get<float>, {0x10, 4, 0, 0})
};

