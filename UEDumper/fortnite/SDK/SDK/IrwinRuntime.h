
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
/// dependency: GameplayTags

/// Struct /Script/IrwinRuntime.RidingAnimationData
/// Size: 0x0014 (0x000000 - 0x000014)
struct FRidingAnimationData
{ 
	bool                                               bIsRidden;                                                  // 0x0000   (0x0001)  
	bool                                               bIsTurningInPlace;                                          // 0x0001   (0x0001)  
	bool                                               bIsSprinting;                                               // 0x0002   (0x0001)  
	bool                                               bIsBeingPetted;                                             // 0x0003   (0x0001)  
	bool                                               bIsMovingBackwards;                                         // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0005   (0x0003)  MISSED
	float                                              TurnInPlaceRotationSpeed;                                   // 0x0008   (0x0004)  
	float                                              TurnInPlaceAngleDelta;                                      // 0x000C   (0x0004)  
	float                                              RiderReferentialYaw;                                        // 0x0010   (0x0004)  
};

/// Class /Script/IrwinRuntime.FortAIFaunaAnimInstance
/// Size: 0x0180 (0x0005A0 - 0x000720)
#pragma pack(push, 0x1)
class alignas(0x10) UFortAIFaunaAnimInstance : public UFortAIAnimInstance
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0598   (0x0008)  MISSED
	float                                              AverageSpeed;                                               // 0x05A0   (0x0004)  
	float                                              AverageSpeedTimeFrame;                                      // 0x05A4   (0x0004)  
	bool                                               bHasValidAimTarget;                                         // 0x05A8   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x05A9   (0x0003)  MISSED
	float                                              AimTime;                                                    // 0x05AC   (0x0004)  
	FVector                                            AimTargetLocation;                                          // 0x05B0   (0x0018)  
	bool                                               bIsSurfaceSwimming;                                         // 0x05C8   (0x0001)  
	bool                                               bIsMovingOnGround;                                          // 0x05C9   (0x0001)  
	bool                                               bIsInTornado;                                               // 0x05CA   (0x0001)  
	unsigned char                                      UnknownData02_5[0x1];                                       // 0x05CB   (0x0001)  MISSED
	float                                              LookAtAlpha;                                                // 0x05CC   (0x0004)  
	float                                              MaxDistanceToPlayerForLookAt;                               // 0x05D0   (0x0004)  
	float                                              LookAtTooFarFromPlayerTimeOut;                              // 0x05D4   (0x0004)  
	bool                                               bDisableLookAtDuringMontage;                                // 0x05D8   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x05D9   (0x0003)  MISSED
	FName                                              DisableHeadTrackingCurveName;                               // 0x05DC   (0x0004)  
	FRidingAnimationData                               RidingAnimationData;                                        // 0x05E0   (0x0014)  
	bool                                               bIsSlopeSliding;                                            // 0x05F4   (0x0001)  
	unsigned char                                      UnknownData04_5[0x3];                                       // 0x05F5   (0x0003)  MISSED
	float                                              SlopeSlidingPitch;                                          // 0x05F8   (0x0004)  
	float                                              SlopeSlidingRoll;                                           // 0x05FC   (0x0004)  
	float                                              RidingMovePlayRate;                                         // 0x0600   (0x0004)  
	bool                                               bJustGotPlayer;                                             // 0x0604   (0x0001)  
	bool                                               bIsBoosting;                                                // 0x0605   (0x0001)  
	bool                                               bIsTurningInPlace;                                          // 0x0606   (0x0001)  
	unsigned char                                      UnknownData05_5[0x1];                                       // 0x0607   (0x0001)  MISSED
	float                                              TurnInPlaceRotationSpeed;                                   // 0x0608   (0x0004)  
	float                                              TurnInPlaceAngleDelta;                                      // 0x060C   (0x0004)  
	bool                                               bIsMovingBackwards;                                         // 0x0610   (0x0001)  
	unsigned char                                      UnknownData06_5[0x3];                                       // 0x0611   (0x0003)  MISSED
	float                                              RiderReferentialYaw;                                        // 0x0614   (0x0004)  
	float                                              BoostPlayRate;                                              // 0x0618   (0x0004)  
	bool                                               bIsTurnInPlaceAngleDeltaPositive;                           // 0x061C   (0x0001)  
	bool                                               bPlayLandAdditive;                                          // 0x061D   (0x0001)  
	unsigned char                                      UnknownData07_5[0x2];                                       // 0x061E   (0x0002)  MISSED
	float                                              BackwardVelocity;                                           // 0x0620   (0x0004)  
	bool                                               bShouldPlayStopBackwards;                                   // 0x0624   (0x0001)  
	unsigned char                                      UnknownData08_5[0x3];                                       // 0x0625   (0x0003)  MISSED
	float                                              SwimmingYaw;                                                // 0x0628   (0x0004)  
	float                                              BackwardsPlayRate;                                          // 0x062C   (0x0004)  
	float                                              BodyRoll;                                                   // 0x0630   (0x0004)  
	float                                              TurnAngleStored;                                            // 0x0634   (0x0004)  
	bool                                               bWasTurningRight;                                           // 0x0638   (0x0001)  
	ERidingFootPhase                                   FootPhase;                                                  // 0x0639   (0x0001)  
	bool                                               bIsFootPhase_FeetInAir;                                     // 0x063A   (0x0001)  
	bool                                               bIsFootPhase_FrontFeetPlanted;                              // 0x063B   (0x0001)  
	bool                                               bIsFootPhase_BackFeetPlanted;                               // 0x063C   (0x0001)  
	bool                                               bIsFootPhase_LeftBackFeetForward;                           // 0x063D   (0x0001)  
	bool                                               bIsFootPhase_RightBackFeetForward;                          // 0x063E   (0x0001)  
	bool                                               bIsFootPhase_LeftPlantedRightPass;                          // 0x063F   (0x0001)  
	bool                                               bIsFootPhase_RightPlantedLeftPass;                          // 0x0640   (0x0001)  
	unsigned char                                      UnknownData09_5[0x7];                                       // 0x0641   (0x0007)  MISSED
	FGameplayTagContainer                              SlipstreamTags;                                             // 0x0648   (0x0020)  
	bool                                               bIsInSlipstream;                                            // 0x0668   (0x0001)  
	unsigned char                                      UnknownData10_5[0x7];                                       // 0x0669   (0x0007)  MISSED
	FGameplayTagContainer                              SkydivingTags;                                              // 0x0670   (0x0020)  
	bool                                               bMovementMode_Skydiving;                                    // 0x0690   (0x0001)  
	unsigned char                                      UnknownData11_5[0x7];                                       // 0x0691   (0x0007)  MISSED
	FGameplayTagContainer                              SkytubingTags;                                              // 0x0698   (0x0020)  
	bool                                               bGameplay_Status_Skytubing;                                 // 0x06B8   (0x0001)  
	bool                                               bIsAbducted;                                                // 0x06B9   (0x0001)  
	unsigned char                                      UnknownData12_5[0x6];                                       // 0x06BA   (0x0006)  MISSED
	FGameplayTagContainer                              TractorBeamTags;                                            // 0x06C0   (0x0020)  
	bool                                               bIsInTractorBeam;                                           // 0x06E0   (0x0001)  
	bool                                               bIsFloating;                                                // 0x06E1   (0x0001)  
	unsigned char                                      UnknownData13_5[0x2];                                       // 0x06E2   (0x0002)  MISSED
	float                                              JustGotPlayerInitialDelaySec;                               // 0x06E4   (0x0004)  
	unsigned char                                      UnknownData14_5[0x1C];                                      // 0x06E8   (0x001C)  MISSED
	float                                              FallAsleepAnimDuration;                                     // 0x0704   (0x0004)  
	float                                              WakeUpAnimDuration;                                         // 0x0708   (0x0004)  
	float                                              FallAsleepToSleepingCrossfade;                              // 0x070C   (0x0004)  
	float                                              WakeUpToIdleCrossfade;                                      // 0x0710   (0x0004)  
	bool                                               StateTransition_FallAsleepToSleeping : 1;                   // 0x0714:0 (0x0001)  
	bool                                               StateTransition_SleepingToWakeUp : 1;                       // 0x0714:1 (0x0001)  
	bool                                               StateTransition_WakeUpToIdle : 1;                           // 0x0714:2 (0x0001)  
	bool                                               StateTransition_IdleToFallAsleep : 1;                       // 0x0714:3 (0x0001)  
	unsigned char                                      UnknownData15_6[0x3];                                       // 0x0715   (0x0003)  MISSED


	/// Functions
	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance.UpdateTurnAngleStored
	// void UpdateTurnAngleStored();                                                                                         // [0x6813ff4] Native|Event|Public|BlueprintEvent 
	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance.UpdateSwimmingYaw
	// void UpdateSwimmingYaw();                                                                                             // [0xa2b6e44] Native|Event|Public|BlueprintEvent 
	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance.UpdateRidingMovePlayRate
	// void UpdateRidingMovePlayRate();                                                                                      // [0x6814054] Native|Event|Public|BlueprintEvent 
	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance.UpdatePlayLandAdditive
	// void UpdatePlayLandAdditive();                                                                                        // [0xa2b6d70] Native|Event|Public|BlueprintEvent 
	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance.UpdateFootPhaseStop
	// void UpdateFootPhaseStop();                                                                                           // [0x6813fdc] Native|Event|Public|BlueprintEvent 
	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance.UpdateBoostPlayRate
	// void UpdateBoostPlayRate();                                                                                           // [0xa2b6bd0] Native|Event|Public|BlueprintEvent 
	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance.UpdateBodyRoll
	// void UpdateBodyRoll();                                                                                                // [0x6813fc4] Native|Event|Public|BlueprintEvent 
	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance.UpdateBackwardVelocity
	// void UpdateBackwardVelocity();                                                                                        // [0xa2b6b8c] Native|Event|Public|BlueprintEvent 
	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance.UpdateBackwardsPlayRate
	// void UpdateBackwardsPlayRate();                                                                                       // [0x681400c] Native|Event|Public|BlueprintEvent 
	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance.FinishFootPhaseStopUpdate
	// void FinishFootPhaseStopUpdate();                                                                                     // [0x6818a30] Native|Event|Public|BlueprintEvent 
	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance.CalculateLookAtAlpha
	// void CalculateLookAtAlpha(bool bForceDisableLookAt, float DeltaSeconds);                                              // [0xa2b6994] Final|Native|Public|BlueprintCallable 
};
#pragma pack(pop)

/// Class /Script/IrwinRuntime.FortAIFaunaAnimInstance_Burt
/// Size: 0x00A0 (0x000720 - 0x0007C0)
class UFortAIFaunaAnimInstance_Burt : public UFortAIFaunaAnimInstance
{ 
public:
	float                                              MovingPlayRate;                                             // 0x0718   (0x0004)  
	float                                              LocomotionPoseAdditiveAlpha;                                // 0x071C   (0x0004)  
	bool                                               bEnableHeadTiltUpAdditive;                                  // 0x0720   (0x0001)  
	bool                                               bTurnAngleIsNegative;                                       // 0x0721   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0722   (0x0002)  MISSED
	FName                                              DisableLocomotionAdditiveCurveName;                         // 0x0724   (0x0004)  
	FName                                              InterruptibleCurveName;                                     // 0x0728   (0x0004)  
	bool                                               bIsIdleShuffleTurn;                                         // 0x072C   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x072D   (0x0003)  MISSED
	float                                              IdleShuffleBodyBend;                                        // 0x0730   (0x0004)  
	float                                              IdleShufflePlayRate;                                        // 0x0734   (0x0004)  
	bool                                               bIdleShuffleTurnDirection;                                  // 0x0738   (0x0001)  
	bool                                               bIsMoving;                                                  // 0x0739   (0x0001)  
	bool                                               bCanTransitionIdleToApex;                                   // 0x073A   (0x0001)  
	bool                                               bCanTransitionIdleToMoving;                                 // 0x073B   (0x0001)  
	bool                                               bCanTransitionMovingToIdle;                                 // 0x073C   (0x0001)  
	bool                                               bCanTransitionLandToIdle;                                   // 0x073D   (0x0001)  
	bool                                               bCanTransitionLandToJumpStart;                              // 0x073E   (0x0001)  
	bool                                               bCanTransitionJumpStartToApex;                              // 0x073F   (0x0001)  
	bool                                               bCanTransitionApexToFall;                                   // 0x0740   (0x0001)  
	bool                                               bCanTransitionFallToLand;                                   // 0x0741   (0x0001)  
	bool                                               bCanTransitionIdleTurnToIdle;                               // 0x0742   (0x0001)  
	bool                                               bCanTransitionLocomotionTurnToIdle;                         // 0x0743   (0x0001)  
	bool                                               bCanTransitionLocomotionTurnToMoving;                       // 0x0744   (0x0001)  
	bool                                               bCanTransitionIdleTurnToMoving;                             // 0x0745   (0x0001)  
	bool                                               bCanTransitionFallToMoving;                                 // 0x0746   (0x0001)  
	bool                                               bCanTransitionFallToIdle;                                   // 0x0747   (0x0001)  
	float                                              MovingPlayRate_SpeedThreshold;                              // 0x0748   (0x0004)  
	float                                              MovingPlayRate_SlowSpeedDivisor;                            // 0x074C   (0x0004)  
	float                                              MovingPlayRate_FastSpeedDivisor;                            // 0x0750   (0x0004)  
	float                                              MovingPlayRate_MinClamp;                                    // 0x0754   (0x0004)  
	float                                              MovingPlayRate_MaxClamp;                                    // 0x0758   (0x0004)  
	float                                              MovingPlayRate_InterpSpeed;                                 // 0x075C   (0x0004)  
	float                                              LocomotionPoseAdditiveAlpha_InterpSpeed;                    // 0x0760   (0x0004)  
	float                                              EnableHeadTiltUpAdditive_PawnUniqueIDMultiplier;            // 0x0764   (0x0004)  
	float                                              EnableHeadTiltUpAdditive_ModOperand;                        // 0x0768   (0x0004)  
	float                                              InterruptibleCurveValue_LargeThreshold;                     // 0x076C   (0x0004)  
	float                                              InterruptibleCurveValue_TurnAngleThreshold;                 // 0x0770   (0x0004)  
	float                                              Speed_MovingThreshold;                                      // 0x0774   (0x0004)  
	float                                              Speed_IdleThreshold;                                        // 0x0778   (0x0004)  
	float                                              TurnAngle_LargeThreshold;                                   // 0x077C   (0x0004)  
	float                                              Speed_RidingMovingThreshold;                                // 0x0780   (0x0004)  
	float                                              Speed_RidingIdleThreshold;                                  // 0x0784   (0x0004)  
	float                                              IdleShuffleBodyBendMultiplier;                              // 0x0788   (0x0004)  
	float                                              IdleShuffleTurnThreshold;                                   // 0x078C   (0x0004)  
	float                                              IdleShuffleTurnDirectionThreshold;                          // 0x0790   (0x0004)  
	float                                              IdleShufflePlayRateInRangeA;                                // 0x0794   (0x0004)  
	float                                              IdleShufflePlayRateInRangeB;                                // 0x0798   (0x0004)  
	float                                              IdleShufflePlayRateOutRangeA;                               // 0x079C   (0x0004)  
	float                                              IdleShufflePlayRateOutRangeB;                               // 0x07A0   (0x0004)  
	float                                              MinSpeedSlowRidingMovePlayRate;                             // 0x07A4   (0x0004)  
	float                                              SpeedSlowDivisorRidingMovePlayRate;                         // 0x07A8   (0x0004)  
	FMapRangeClamped_Ranges                            RidingMovePlayRate_Ranges;                                  // 0x07AC   (0x0010)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x07BC   (0x0004)  MISSED
};

/// Class /Script/IrwinRuntime.FortAIFaunaAnimInstance_Burt_Hitchhiker
/// Size: 0x0010 (0x0007C0 - 0x0007D0)
class UFortAIFaunaAnimInstance_Burt_Hitchhiker : public UFortAIFaunaAnimInstance_Burt
{ 
public:
	bool                                               IsFloating;                                                 // 0x07C0   (0x0001)  
	bool                                               IsInTractorBeam;                                            // 0x07C1   (0x0001)  
	bool                                               IsHitchhiked;                                               // 0x07C2   (0x0001)  
	unsigned char                                      UnknownData00_6[0xD];                                       // 0x07C3   (0x000D)  MISSED
};

/// Class /Script/IrwinRuntime.FortAIFaunaAnimInstance_Crow
/// Size: 0x0030 (0x000720 - 0x000750)
class UFortAIFaunaAnimInstance_Crow : public UFortAIFaunaAnimInstance
{ 
public:
	float                                              WingFlapPlayRate;                                           // 0x0718   (0x0004)  
	bool                                               bIsDescending;                                              // 0x071C   (0x0001)  
	bool                                               bIsGliding;                                                 // 0x071D   (0x0001)  
	bool                                               bIsFlying;                                                  // 0x071E   (0x0001)  
	bool                                               bIsFlyingSlow;                                              // 0x071F   (0x0001)  
	bool                                               bIsLanding;                                                 // 0x0720   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0721   (0x0003)  MISSED
	float                                              WingFlapPlayRateInRangeA;                                   // 0x0724   (0x0004)  
	float                                              WingFlapPlayRateInRangeB;                                   // 0x0728   (0x0004)  
	float                                              WingFlapPlayRateOutRangeA;                                  // 0x072C   (0x0004)  
	float                                              WingFlapPlayRateOutRangeB;                                  // 0x0730   (0x0004)  
	float                                              ZVelocityDescendingThreshold;                               // 0x0734   (0x0004)  
	float                                              GlidingSpeedThreshold;                                      // 0x0738   (0x0004)  
	float                                              FlyingSpeedThreshold;                                       // 0x073C   (0x0004)  
	float                                              FlyingSlowSpeedThreshold;                                   // 0x0740   (0x0004)  
	float                                              LandingSpeedThreshold;                                      // 0x0744   (0x0004)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0748   (0x0008)  MISSED
};

/// Class /Script/IrwinRuntime.FortAIFaunaAnimInstance_Grandma
/// Size: 0x00C0 (0x000720 - 0x0007E0)
#pragma pack(push, 0x1)
class alignas(0x10) UFortAIFaunaAnimInstance_Grandma : public UFortAIFaunaAnimInstance
{ 
public:
	class AFortAIPawn*                                 AIPawn;                                                     // 0x0718   (0x0008)  
	float                                              MeshScale;                                                  // 0x0720   (0x0004)  
	bool                                               bShouldPlayFullBodyInPlace;                                 // 0x0724   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0725   (0x0003)  MISSED
	float                                              BlinkAlpha;                                                 // 0x0728   (0x0004)  
	float                                              WalkRunPlayRate;                                            // 0x072C   (0x0004)  
	float                                              LocomotionPoseAdditiveAlpha;                                // 0x0730   (0x0004)  
	bool                                               bEnableSniffAdditive;                                       // 0x0734   (0x0001)  
	bool                                               bEnableAlertAdditive;                                       // 0x0735   (0x0001)  
	bool                                               bIdleStartTurn;                                             // 0x0736   (0x0001)  
	bool                                               bLookAtAdditiveTurnAlpha;                                   // 0x0737   (0x0001)  
	bool                                               bIsIdleShuffleTurn;                                         // 0x0738   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0739   (0x0003)  MISSED
	float                                              IdleShuffleBodyBend;                                        // 0x073C   (0x0004)  
	float                                              IdleShufflePlayRate;                                        // 0x0740   (0x0004)  
	bool                                               bIdleShuffleTurnDirection;                                  // 0x0744   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0745   (0x0003)  MISSED
	float                                              TurnInPlaceModulatedSpeed;                                  // 0x0748   (0x0004)  
	float                                              MaxSpeedFullBodyInPlace;                                    // 0x074C   (0x0004)  
	float                                              MinCurveValueFullBodyInPlace;                               // 0x0750   (0x0004)  
	float                                              LocomotionPoseAdditiveAlphaInterpRate;                      // 0x0754   (0x0004)  
	int32_t                                            SniffAdditiveFrequenceySeconds;                             // 0x0758   (0x0004)  
	int32_t                                            AlertAdditiveFrequenceySeconds;                             // 0x075C   (0x0004)  
	int32_t                                            PawnIDScale;                                                // 0x0760   (0x0004)  
	FName                                              ShouldPlayFullBodyInPlaceCurveName;                         // 0x0764   (0x0004)  
	FName                                              BlinkAlphaCurveName;                                        // 0x0768   (0x0004)  
	float                                              IdleStartTurnInterruptibleThreshold;                        // 0x076C   (0x0004)  
	float                                              IdleShuffleBodyBendMultiplier;                              // 0x0770   (0x0004)  
	float                                              IdleShuffleTurnThreshold;                                   // 0x0774   (0x0004)  
	float                                              IdleShuffleTurnDirectionThreshold;                          // 0x0778   (0x0004)  
	float                                              LookAtAdditiveTurnAlphaThreshold;                           // 0x077C   (0x0004)  
	float                                              IdleShufflePlayRateInRangeA;                                // 0x0780   (0x0004)  
	float                                              IdleShufflePlayRateInRangeB;                                // 0x0784   (0x0004)  
	float                                              IdleShufflePlayRateOutRangeA;                               // 0x0788   (0x0004)  
	float                                              IdleShufflePlayRateOutRangeB;                               // 0x078C   (0x0004)  
	float                                              TurnInPlaceModulatedSpeedFactor;                            // 0x0790   (0x0004)  
	bool                                               bIsMovingOnGroundORIsSurfaceSwimming;                       // 0x0794   (0x0001)  
	bool                                               bStateRule_DefaultJump_ToJumpApex;                          // 0x0795   (0x0001)  
	bool                                               bStateRule_TurnIdle_Idle;                                   // 0x0796   (0x0001)  
	bool                                               bStateRule_TurnIdle_Moving;                                 // 0x0797   (0x0001)  
	bool                                               bStateRule_Moving_TurnIdle;                                 // 0x0798   (0x0001)  
	bool                                               bStateRule_TurnMoving_Moving;                               // 0x0799   (0x0001)  
	bool                                               bStateRule_Moving_TurnMoving;                               // 0x079A   (0x0001)  
	bool                                               bStateRule_Idle_Moving;                                     // 0x079B   (0x0001)  
	bool                                               bStateRule_Moving_Idle;                                     // 0x079C   (0x0001)  
	bool                                               bStateRule_JumpLand_Idle;                                   // 0x079D   (0x0001)  
	bool                                               bStateRule_JumpLand_Moving;                                 // 0x079E   (0x0001)  
	bool                                               bStateRule_JumpStart_JumpApex;                              // 0x079F   (0x0001)  
	bool                                               bStateRule_Fall_Moving;                                     // 0x07A0   (0x0001)  
	bool                                               bStateRule_Fall_Idle;                                       // 0x07A1   (0x0001)  
	bool                                               bStateRule_SwimIdle_SwimLoco;                               // 0x07A2   (0x0001)  
	bool                                               bStateRule_SwimLoco_SwimIdle;                               // 0x07A3   (0x0001)  
	bool                                               bStateRule_SwimTurn_SwimIdle;                               // 0x07A4   (0x0001)  
	bool                                               bStateRule_SwimTurn_SwimLoco;                               // 0x07A5   (0x0001)  
	bool                                               bAnimRule_NegativeTurnAngle;                                // 0x07A6   (0x0001)  
	unsigned char                                      UnknownData03_5[0x1];                                       // 0x07A7   (0x0001)  MISSED
	float                                              InterruptibleMaxCheck;                                      // 0x07A8   (0x0004)  
	float                                              SpeedStopTransition;                                        // 0x07AC   (0x0004)  
	float                                              SpeedIdleMoveTransition;                                    // 0x07B0   (0x0004)  
	float                                              SpeedMovingTurnIdleTransition;                              // 0x07B4   (0x0004)  
	float                                              SpeedToMoveMin;                                             // 0x07B8   (0x0004)  
	float                                              SpeedToMoveMinWhileRiding;                                  // 0x07BC   (0x0004)  
	float                                              SpeedToMoveMinWhileAcceleratingAndRiding;                   // 0x07C0   (0x0004)  
	float                                              StateTimeFromEndThreshold;                                  // 0x07C4   (0x0004)  
	float                                              SpeedIdleStartTurnThreshold;                                // 0x07C8   (0x0004)  
	float                                              SpeedFallMovingThreshold;                                   // 0x07CC   (0x0004)  
	unsigned char                                      UnknownData04_6[0x8];                                       // 0x07D0   (0x0008)  MISSED


	/// Functions
	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance_Grandma.UpdateStateVariables
	// void UpdateStateVariables(bool bAccelerating);                                                                        // [0xa2b6db0] Final|Native|Public|BlueprintCallable 
	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance_Grandma.UpdateShouldPlayFullBodyInPlace
	// void UpdateShouldPlayFullBodyInPlace();                                                                               // [0xa2b6d88] Final|Native|Public|BlueprintCallable 
	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance_Grandma.UpdateMovingRates
	// void UpdateMovingRates();                                                                                             // [0xa2b6d48] Final|Native|Public|BlueprintCallable 
	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance_Grandma.UpdateMeshScale
	// void UpdateMeshScale();                                                                                               // [0xa2b6d24] Final|Native|Public|BlueprintCallable 
	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance_Grandma.UpdateLocomotionPoseAlpha
	// void UpdateLocomotionPoseAlpha();                                                                                     // [0xa2b6cf8] Final|Native|Public|BlueprintCallable 
	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance_Grandma.UpdateIdleStartTurn
	// void UpdateIdleStartTurn();                                                                                           // [0xa2b6c54] Final|Native|Public|BlueprintCallable 
	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance_Grandma.UpdateEnableSniffAdditive
	// void UpdateEnableSniffAdditive();                                                                                     // [0xa2b6c30] Final|Native|Public|BlueprintCallable 
	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance_Grandma.UpdateEnableAlertAdditive
	// void UpdateEnableAlertAdditive();                                                                                     // [0xa2b6be8] Final|Native|Public|BlueprintCallable 
	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance_Grandma.UpdateBlinkAlpha
	// void UpdateBlinkAlpha();                                                                                              // [0xa2b6ba4] Final|Native|Public|BlueprintCallable 
	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance_Grandma.DetermineShouldPlayFullBodyInPlace
	// bool DetermineShouldPlayFullBodyInPlace();                                                                            // [0xa2b6b68] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance_Grandma.DetermineIdleStartTurn
	// bool DetermineIdleStartTurn();                                                                                        // [0xa2b6afc] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance_Grandma.DetermineEnableSniffAdditive
	// bool DetermineEnableSniffAdditive();                                                                                  // [0xa2b6adc] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance_Grandma.DetermineEnableAlertAdditive
	// bool DetermineEnableAlertAdditive();                                                                                  // [0xa2b6a9c] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance_Grandma.CalculateWalkRunPlayRate
	// float CalculateWalkRunPlayRate();                                                                                     // [0xa2b6a78] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance_Grandma.CalculateMeshScale
	// float CalculateMeshScale();                                                                                           // [0xa2b6a58] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance_Grandma.CalculateLocomotionPoseAlpha
	// float CalculateLocomotionPoseAlpha();                                                                                 // [0xa2b696c] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance_Grandma.CalculateBlinkAlpha
	// float CalculateBlinkAlpha();                                                                                          // [0xa2b691c] Final|Native|Public|BlueprintCallable|BlueprintPure 
};
#pragma pack(pop)

/// Class /Script/IrwinRuntime.FortAIFaunaAnimInstance_Grandma_Hitchhiker
/// Size: 0x0000 (0x0007E0 - 0x0007E0)
class UFortAIFaunaAnimInstance_Grandma_Hitchhiker : public UFortAIFaunaAnimInstance_Grandma
{ 
public:
};

/// Class /Script/IrwinRuntime.FortAIFaunaAnimInstance_Nug
/// Size: 0x0090 (0x000720 - 0x0007B0)
#pragma pack(push, 0x1)
class alignas(0x10) UFortAIFaunaAnimInstance_Nug : public UFortAIFaunaAnimInstance
{ 
public:
	bool                                               bIsBeingHeld;                                               // 0x0718   (0x0001)  
	bool                                               bIsBeingThrown;                                             // 0x0719   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x071A   (0x0002)  MISSED
	float                                              LowerBodyMaskAlpha;                                         // 0x071C   (0x0004)  
	bool                                               bShouldExitJump;                                            // 0x0720   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0721   (0x0003)  MISSED
	float                                              MovingPlayRate;                                             // 0x0724   (0x0004)  
	bool                                               bShouldLean;                                                // 0x0728   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0729   (0x0003)  MISSED
	float                                              LeanDirection;                                              // 0x072C   (0x0004)  
	bool                                               bTurnAngleIsNegative;                                       // 0x0730   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x0731   (0x0003)  MISSED
	FName                                              InterruptibleCurveName;                                     // 0x0734   (0x0004)  
	bool                                               bIsIdleShuffleTurn;                                         // 0x0738   (0x0001)  
	unsigned char                                      UnknownData04_5[0x3];                                       // 0x0739   (0x0003)  MISSED
	float                                              IdleShuffleBodyBend;                                        // 0x073C   (0x0004)  
	float                                              IdleShufflePlayRate;                                        // 0x0740   (0x0004)  
	bool                                               bIdleShuffleTurnDirection;                                  // 0x0744   (0x0001)  
	bool                                               bCanTransitionIdleToIdleTurn;                               // 0x0745   (0x0001)  
	bool                                               bCanTransitionIdleToLocomotionTurn;                         // 0x0746   (0x0001)  
	bool                                               bCanTransitionIdleToMoving;                                 // 0x0747   (0x0001)  
	bool                                               bCanTransitionIdleToJumpApex;                               // 0x0748   (0x0001)  
	bool                                               bCanTransitionMovingToIdle;                                 // 0x0749   (0x0001)  
	bool                                               bCanTransitionJumpStartToJumpApex;                          // 0x074A   (0x0001)  
	bool                                               bCanTransitionJumpApexToJumpLoop;                           // 0x074B   (0x0001)  
	bool                                               bCanTransitionLocomotionTurnToIdle;                         // 0x074C   (0x0001)  
	bool                                               bCanTransitionLocomotionTurnToMoving;                       // 0x074D   (0x0001)  
	bool                                               bCanTransitionIdleTurnToMoving;                             // 0x074E   (0x0001)  
	bool                                               bCanTransitionIdleTurnToIdle;                               // 0x074F   (0x0001)  
	bool                                               bCanTransitionJumpLoopToJumpLand;                           // 0x0750   (0x0001)  
	bool                                               bCanTransitionIsBeingHeldToChickenChuck;                    // 0x0751   (0x0001)  
	unsigned char                                      UnknownData05_5[0x2];                                       // 0x0752   (0x0002)  MISSED
	float                                              ShouldExitJump_SpeedThreshold;                              // 0x0754   (0x0004)  
	float                                              MovingPlayRate_SpeedThreshold;                              // 0x0758   (0x0004)  
	float                                              MovingPlayRate_SlowSpeedDivisor;                            // 0x075C   (0x0004)  
	float                                              MovingPlayRate_FastSpeedDivisor;                            // 0x0760   (0x0004)  
	float                                              MovingPlayRate_InterpSpeed;                                 // 0x0764   (0x0004)  
	float                                              MovingPlayRate_MinClamp;                                    // 0x0768   (0x0004)  
	float                                              MovingPlayRate_MaxClamp;                                    // 0x076C   (0x0004)  
	float                                              LeanDirection_SpeedThreshold;                               // 0x0770   (0x0004)  
	float                                              ShouldLean_SpeedThreshold;                                  // 0x0774   (0x0004)  
	float                                              InterruptibleCurveValue_LargeThreshold;                     // 0x0778   (0x0004)  
	float                                              Speed_MovingThreshold;                                      // 0x077C   (0x0004)  
	float                                              Speed_IdleThreshold;                                        // 0x0780   (0x0004)  
	float                                              IdleTurnTransition_SpeedThreshold;                          // 0x0784   (0x0004)  
	float                                              LocomotionTurnTransition_SpeedThreshold;                    // 0x0788   (0x0004)  
	float                                              IdleShuffleBodyBendMultiplier;                              // 0x078C   (0x0004)  
	float                                              IdleShuffleTurnThreshold;                                   // 0x0790   (0x0004)  
	float                                              IdleShuffleTurnDirectionThreshold;                          // 0x0794   (0x0004)  
	float                                              IdleShufflePlayRateInRangeA;                                // 0x0798   (0x0004)  
	float                                              IdleShufflePlayRateInRangeB;                                // 0x079C   (0x0004)  
	float                                              IdleShufflePlayRateOutRangeA;                               // 0x07A0   (0x0004)  
	float                                              IdleShufflePlayRateOutRangeB;                               // 0x07A4   (0x0004)  
};
#pragma pack(pop)

/// Class /Script/IrwinRuntime.FortAIFaunaAnimInstance_Nug_Hitchhiker
/// Size: 0x0000 (0x0007B0 - 0x0007B0)
class UFortAIFaunaAnimInstance_Nug_Hitchhiker : public UFortAIFaunaAnimInstance_Nug
{ 
public:
};

/// Class /Script/IrwinRuntime.FortAIFaunaAnimInstance_Robert
/// Size: 0x01B0 (0x000720 - 0x0008D0)
class UFortAIFaunaAnimInstance_Robert : public UFortAIFaunaAnimInstance
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0718   (0x0008)  MISSED
	class AFortAIPawn*                                 AIPawn;                                                     // 0x0720   (0x0008)  
	bool                                               bIdleStartTurn;                                             // 0x0728   (0x0001)  
	bool                                               bEnableHeadTiltDownAdditive;                                // 0x0729   (0x0001)  
	bool                                               bIsFullBodyInPlace;                                         // 0x072A   (0x0001)  
	unsigned char                                      UnknownData01_5[0x1];                                       // 0x072B   (0x0001)  MISSED
	float                                              LocomotionPoseAdditiveAlpha;                                // 0x072C   (0x0004)  
	bool                                               bIsIdleShuffleTurn;                                         // 0x0730   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0731   (0x0003)  MISSED
	float                                              IdleShuffleBodyBend;                                        // 0x0734   (0x0004)  
	float                                              IdleShufflePlayRate;                                        // 0x0738   (0x0004)  
	bool                                               bIdleShuffleTurnDirection;                                  // 0x073C   (0x0001)  
	bool                                               bLookAtAdditiveTurnAlpha;                                   // 0x073D   (0x0001)  
	bool                                               bTurnDirection;                                             // 0x073E   (0x0001)  
	unsigned char                                      UnknownData03_5[0x1];                                       // 0x073F   (0x0001)  MISSED
	int32_t                                            PawnIDScale;                                                // 0x0740   (0x0004)  
	int32_t                                            HeadTiltDownAdditiveFrequenceySeconds;                      // 0x0744   (0x0004)  
	float                                              ForceFullBodyTransition;                                    // 0x0748   (0x0004)  
	float                                              LocomotionPoseAdditiveAlphaInterpRate;                      // 0x074C   (0x0004)  
	float                                              IdleStartTurnInterruptibleThreshold;                        // 0x0750   (0x0004)  
	float                                              LookAtAlphaThreshold;                                       // 0x0754   (0x0004)  
	float                                              SpeedMovingThreshold;                                       // 0x0758   (0x0004)  
	float                                              TurnDirectionThreshold;                                     // 0x075C   (0x0004)  
	float                                              SprintStopThreshold;                                        // 0x0760   (0x0004)  
	float                                              WalkStopThreshold;                                          // 0x0764   (0x0004)  
	float                                              BackwardStopThreshold;                                      // 0x0768   (0x0004)  
	float                                              AdditiveInterruptibleThreshold;                             // 0x076C   (0x0004)  
	float                                              InterruptibleThreshold;                                     // 0x0770   (0x0004)  
	float                                              TurningRightThreshold;                                      // 0x0774   (0x0004)  
	float                                              LeftFootStopThreshold;                                      // 0x0778   (0x0004)  
	float                                              HipInterpSpeed_Fast;                                        // 0x077C   (0x0004)  
	float                                              HipInterpSpeed_Slow;                                        // 0x0780   (0x0004)  
	float                                              AdditiveHipAlphaTargeting_Constant;                         // 0x0784   (0x0004)  
	float                                              BackwardLocomotionThreshold;                                // 0x0788   (0x0004)  
	float                                              LocomotionThreshold;                                        // 0x078C   (0x0004)  
	float                                              PawnSpeedThreshold;                                         // 0x0790   (0x0004)  
	float                                              LocomotionPlayRate_Fixed;                                   // 0x0794   (0x0004)  
	float                                              BoostJumpingThreshold;                                      // 0x0798   (0x0004)  
	float                                              BoostStartPosition_Jumping;                                 // 0x079C   (0x0004)  
	float                                              BoostStartPosition_NotJumping;                              // 0x07A0   (0x0004)  
	float                                              AdditiveBodyTurnSwimInRangeA;                               // 0x07A4   (0x0004)  
	float                                              AdditiveBodyTurnSwimInRangeB;                               // 0x07A8   (0x0004)  
	float                                              AdditiveBodyTurnSwimOutRangeA;                              // 0x07AC   (0x0004)  
	float                                              AdditiveBodyTurnSwimOutRangeB;                              // 0x07B0   (0x0004)  
	float                                              AdditiveBodyTurnNotSwimInRangeA;                            // 0x07B4   (0x0004)  
	float                                              AdditiveBodyTurnNotSwimInRangeB;                            // 0x07B8   (0x0004)  
	float                                              AdditiveBodyTurnNotSwimOutRangeA;                           // 0x07BC   (0x0004)  
	float                                              AdditiveBodyTurnNotSwimOutRangeB;                           // 0x07C0   (0x0004)  
	float                                              BodyTurnInterpSpeed_Accel;                                  // 0x07C4   (0x0004)  
	float                                              BodyTurnInterpSpeed_NotAccel;                               // 0x07C8   (0x0004)  
	float                                              IdleAdditiveBodyTurnTarget_NotAccel;                        // 0x07CC   (0x0004)  
	float                                              AdditiveLeanAlphaTargeting_Targeting;                       // 0x07D0   (0x0004)  
	float                                              AdditiveLeanAlphaTargeting_NonTargeting;                    // 0x07D4   (0x0004)  
	float                                              AdditiveLeanAlphaInterpSpeed;                               // 0x07D8   (0x0004)  
	float                                              AdditiveHipStopAlphaTargeting_PlayerTargeting;              // 0x07DC   (0x0004)  
	float                                              HipInterpSpeed_PlayerTargeting;                             // 0x07E0   (0x0004)  
	float                                              AdditiveHipStopAlphaTargeting_NotPlayerTargeting;           // 0x07E4   (0x0004)  
	float                                              HipInterpSpeed_NotPlayerTargeting;                          // 0x07E8   (0x0004)  
	float                                              LocomotionSecondaryInRangeA;                                // 0x07EC   (0x0004)  
	float                                              LocomotionSecondaryInRangeB;                                // 0x07F0   (0x0004)  
	float                                              LocomotionSecondaryOutRangeA;                               // 0x07F4   (0x0004)  
	float                                              LocomotionSecondaryOutRangeB;                               // 0x07F8   (0x0004)  
	float                                              SwimCameraRotationSecondaryInRangeA;                        // 0x07FC   (0x0004)  
	float                                              SwimCameraRotationSecondaryInRangeB;                        // 0x0800   (0x0004)  
	float                                              SwimCameraRotationSecondaryOutRangeA;                       // 0x0804   (0x0004)  
	float                                              SwimCameraRotationSecondaryOutRangeB;                       // 0x0808   (0x0004)  
	float                                              SwimRaptorRotationSecondaryInRangeA;                        // 0x080C   (0x0004)  
	float                                              SwimRaptorRotationSecondaryInRangeB;                        // 0x0810   (0x0004)  
	float                                              SwimRaptorRotationSecondaryOutRangeA;                       // 0x0814   (0x0004)  
	float                                              SwimRaptorRotationSecondaryOutRangeB;                       // 0x0818   (0x0004)  
	float                                              IdleShuffleBodyBendMultiplier;                              // 0x081C   (0x0004)  
	float                                              IdleShuffleTurnThreshold;                                   // 0x0820   (0x0004)  
	float                                              IdleShuffleTurnDirectionThreshold;                          // 0x0824   (0x0004)  
	float                                              IdleShufflePlayRateInRangeA;                                // 0x0828   (0x0004)  
	float                                              IdleShufflePlayRateInRangeB;                                // 0x082C   (0x0004)  
	float                                              IdleShufflePlayRateOutRangeA;                               // 0x0830   (0x0004)  
	float                                              IdleShufflePlayRateOutRangeB;                               // 0x0834   (0x0004)  
	bool                                               bStateRule_Idle_Moving;                                     // 0x0838   (0x0001)  
	bool                                               bStateRule_Moving_Idle;                                     // 0x0839   (0x0001)  
	bool                                               bStateRule_Swimming_Fall;                                   // 0x083A   (0x0001)  
	bool                                               bStateRule_Land_Idle;                                       // 0x083B   (0x0001)  
	bool                                               bStateRule_Fall_Idle;                                       // 0x083C   (0x0001)  
	bool                                               bStateRule_Fall_Moving;                                     // 0x083D   (0x0001)  
	bool                                               bStateRule_SwimIdle_SwimLoco;                               // 0x083E   (0x0001)  
	bool                                               bStateRule_IsTurnInPlace;                                   // 0x083F   (0x0001)  
	bool                                               bStateRule_IsSprintStop;                                    // 0x0840   (0x0001)  
	bool                                               bStateRule_IsStopBackwards;                                 // 0x0841   (0x0001)  
	bool                                               bStateRule_IsLocomotion;                                    // 0x0842   (0x0001)  
	bool                                               bStateRule_IsFinishedTurnInPlace;                           // 0x0843   (0x0001)  
	bool                                               bStateRule_IsInterruptible;                                 // 0x0844   (0x0001)  
	bool                                               bStateRule_IsIdleTurnRight;                                 // 0x0845   (0x0001)  
	bool                                               bStateRule_IsLeftFootStop;                                  // 0x0846   (0x0001)  
	bool                                               bStateRule_IsTurningRight;                                  // 0x0847   (0x0001)  
	bool                                               bStateRule_IsAdditiveInterruptible;                         // 0x0848   (0x0001)  
	bool                                               bStateRule_IsBackwardLocomotion;                            // 0x0849   (0x0001)  
	bool                                               bStateRule_IsJumpIdleLand;                                  // 0x084A   (0x0001)  
	bool                                               bStateRule_IsIdleTurnToIdleTurn;                            // 0x084B   (0x0001)  
	bool                                               bStateRule_BoostJumpToBoostLand;                            // 0x084C   (0x0001)  
	bool                                               bStateRule_IsJumpToBoostJump;                               // 0x084D   (0x0001)  
	bool                                               bStateRule_IsJumpToJumpLand;                                // 0x084E   (0x0001)  
	bool                                               bStateRule_BoostFallLoopToBoostLand;                        // 0x084F   (0x0001)  
	bool                                               bStateRule_IsLocomotionToIdle;                              // 0x0850   (0x0001)  
	bool                                               bStateRule_IsExitLocomotionToIdle;                          // 0x0851   (0x0001)  
	bool                                               bStateRule_IsLocomotionHoldToSecondary;                     // 0x0852   (0x0001)  
	bool                                               bStateRule_IsLocomotionSecondaryToHold;                     // 0x0853   (0x0001)  
	bool                                               bStateRule_IsJumpAdditive;                                  // 0x0854   (0x0001)  
	bool                                               bStateRule_IsLandAdditiveToJump;                            // 0x0855   (0x0001)  
	bool                                               bStateRule_IsAllowSlopeSlide;                               // 0x0856   (0x0001)  
	bool                                               bStateRule_IsToJumpState;                                   // 0x0857   (0x0001)  
	bool                                               bIsRidden;                                                  // 0x0858   (0x0001)  
	bool                                               bIsStop;                                                    // 0x0859   (0x0001)  
	bool                                               bIsWalkStop;                                                // 0x085A   (0x0001)  
	unsigned char                                      UnknownData04_5[0x1];                                       // 0x085B   (0x0001)  MISSED
	float                                              AdditiveHipAlpha;                                           // 0x085C   (0x0004)  
	float                                              AdditiveBodyAlpha;                                          // 0x0860   (0x0004)  
	float                                              RiderAimYaw;                                                // 0x0864   (0x0004)  
	float                                              PlayerSlopePitch;                                           // 0x0868   (0x0004)  
	bool                                               bIsPlayerTargeting;                                         // 0x086C   (0x0001)  
	unsigned char                                      UnknownData05_5[0x3];                                       // 0x086D   (0x0003)  MISSED
	float                                              AdditiveHipAlphaTargeting;                                  // 0x0870   (0x0004)  
	float                                              HipInterpSpeed;                                             // 0x0874   (0x0004)  
	float                                              IdleAdditiveBodyTurnTarget;                                 // 0x0878   (0x0004)  
	float                                              BodyTurnAlpha;                                              // 0x087C   (0x0004)  
	float                                              BodyTurnInterpSpeed;                                        // 0x0880   (0x0004)  
	float                                              LocomotionPlayRate;                                         // 0x0884   (0x0004)  
	float                                              AdditiveLeanAlpha;                                          // 0x0888   (0x0004)  
	float                                              AdditiveLeanAlphaTargeting;                                 // 0x088C   (0x0004)  
	float                                              BoostStartPosition;                                         // 0x0890   (0x0004)  
	float                                              AdditiveHipStopAlpha;                                       // 0x0894   (0x0004)  
	float                                              AdditiveHipStopAlphaTargeting;                              // 0x0898   (0x0004)  
	bool                                               bIsAllowBoost;                                              // 0x089C   (0x0001)  
	bool                                               bIsSlopeWarpHack;                                           // 0x089D   (0x0001)  
	unsigned char                                      UnknownData06_5[0x2];                                       // 0x089E   (0x0002)  MISSED
	float                                              LocomotionHeadSecondary;                                    // 0x08A0   (0x0004)  
	float                                              LocomotionTailSecondary;                                    // 0x08A4   (0x0004)  
	float                                              SwimCameraRotationSecondary;                                // 0x08A8   (0x0004)  
	float                                              SwimRaptorRotationSecondary;                                // 0x08AC   (0x0004)  
	float                                              SwimTurnYaw;                                                // 0x08B0   (0x0004)  
	float                                              SwimHeadYaw;                                                // 0x08B4   (0x0004)  
	bool                                               bAnimRule_NegativeTurnAngle;                                // 0x08B8   (0x0001)  
	bool                                               bIsAccelerating2D;                                          // 0x08B9   (0x0001)  
	unsigned char                                      UnknownData07_5[0x2];                                       // 0x08BA   (0x0002)  MISSED
	float                                              InterruptibleMaxCheck;                                      // 0x08BC   (0x0004)  
	float                                              SpeedStopTransition;                                        // 0x08C0   (0x0004)  
	float                                              SpeedIdleMoveTransition;                                    // 0x08C4   (0x0004)  
	float                                              SpeedToMoveMin;                                             // 0x08C8   (0x0004)  
	float                                              StateTimeFromEndThreshold;                                  // 0x08CC   (0x0004)  


	/// Functions
	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance_Robert.UpdateStateVariables
	// void UpdateStateVariables();                                                                                          // [0xa2b6e30] Final|Native|Public|BlueprintCallable 
	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance_Robert.UpdateLocomotionPoseAdditiveAlpha
	// void UpdateLocomotionPoseAdditiveAlpha();                                                                             // [0xa2b6ccc] Final|Native|Public|BlueprintCallable 
	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance_Robert.UpdateIsFullBodyInPlace
	// void UpdateIsFullBodyInPlace();                                                                                       // [0xa2b6ca4] Final|Native|Public|BlueprintCallable 
	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance_Robert.UpdateIdleStartTurn
	// void UpdateIdleStartTurn();                                                                                           // [0xa2b6c7c] Final|Native|Public|BlueprintCallable 
	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance_Robert.UpdateEnableHeadTiltDownAdditive
	// void UpdateEnableHeadTiltDownAdditive();                                                                              // [0xa2b6c0c] Final|Native|Public|BlueprintCallable 
	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance_Robert.DetermineIsFullBodyInPlace
	// bool DetermineIsFullBodyInPlace();                                                                                    // [0xa2b6b44] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance_Robert.DetermineIdleStartTurn
	// bool DetermineIdleStartTurn();                                                                                        // [0xa2b6b20] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance_Robert.DetermineEnableHeadTiltDownAdditive
	// bool DetermineEnableHeadTiltDownAdditive();                                                                           // [0xa2b6abc] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance_Robert.CalculateLocomotionPoseAdditiveAlpha
	// float CalculateLocomotionPoseAdditiveAlpha();                                                                         // [0xa2b6944] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/IrwinRuntime.FortAIFaunaAnimInstance_Smackie
/// Size: 0x0030 (0x000720 - 0x000750)
class UFortAIFaunaAnimInstance_Smackie : public UFortAIFaunaAnimInstance
{ 
public:
	bool                                               bIsIdleShuffleTurn;                                         // 0x0718   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0719   (0x0003)  MISSED
	float                                              IdleShuffleBodyBend;                                        // 0x071C   (0x0004)  
	float                                              IdleShufflePlayRate;                                        // 0x0720   (0x0004)  
	bool                                               bIdleShuffleTurnDirection;                                  // 0x0724   (0x0001)  
	bool                                               bCanTransitionIdleToHop;                                    // 0x0725   (0x0001)  
	bool                                               bCanTransitionHopToIdle;                                    // 0x0726   (0x0001)  
	bool                                               bCanTransitionFallToIdle;                                   // 0x0727   (0x0001)  
	bool                                               bCanTransitionFallToHop;                                    // 0x0728   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0729   (0x0003)  MISSED
	float                                              SpeedThreshold;                                             // 0x072C   (0x0004)  
	float                                              IdleShuffleBodyBendMultiplier;                              // 0x0730   (0x0004)  
	float                                              IdleShuffleTurnThreshold;                                   // 0x0734   (0x0004)  
	float                                              IdleShuffleTurnDirectionThreshold;                          // 0x0738   (0x0004)  
	float                                              IdleShufflePlayRateInRangeA;                                // 0x073C   (0x0004)  
	float                                              IdleShufflePlayRateInRangeB;                                // 0x0740   (0x0004)  
	float                                              IdleShufflePlayRateOutRangeA;                               // 0x0744   (0x0004)  
	float                                              IdleShufflePlayRateOutRangeB;                               // 0x0748   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x074C   (0x0004)  MISSED
};

/// Class /Script/IrwinRuntime.FortAIFaunaLayerAnimInstance
/// Size: 0x0000 (0x000470 - 0x000470)
class UFortAIFaunaLayerAnimInstance : public UFortBaseLayerAnimInstance
{ 
public:
};

