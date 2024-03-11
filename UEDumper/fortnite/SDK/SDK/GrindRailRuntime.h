
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: AnimGraphRuntime
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteAI
/// dependency: FortniteGame
/// dependency: GameplayAbilities
/// dependency: GameplayTags
/// dependency: ModularGameplay

/// Enum /Script/GrindRailRuntime.EGrindRailBoosterMode
/// Size: 0x04
enum class EGrindRailBoosterMode : uint8_t
{
	EGrindRailBoosterMode__SpeedUp                                                   = 0,
	EGrindRailBoosterMode__SlowDown                                                  = 1,
	EGrindRailBoosterMode__NoEffect                                                  = 2,
	EGrindRailBoosterMode__EGrindRailBoosterMode_MAX                                 = 3
};

/// Enum /Script/GrindRailRuntime.EFortMovementMode_GrindingState
/// Size: 0x05
enum class EFortMovementMode_GrindingState : uint8_t
{
	Created                                                                          = 0,
	Active                                                                           = 1,
	AnchorJump                                                                       = 2,
	RequestToEnd                                                                     = 3,
	EFortMovementMode_GrindingState_MAX                                              = 4
};

/// Class /Script/GrindRailRuntime.FortCameraModifier_Grinding
/// Size: 0x0978 (0x000048 - 0x0009C0)
class UFortCameraModifier_Grinding : public UCameraModifier
{ 
public:
	FScalableFloat                                     bUseNativeCalculation;                                      // 0x0048   (0x0028)  
	class UCurveFloat*                                 BlendInCurve;                                               // 0x0070   (0x0008)  
	class UCurveFloat*                                 BlendOutCurve;                                              // 0x0078   (0x0008)  
	FScalableFloat                                     SnapToGrindingLocation;                                     // 0x0080   (0x0028)  
	FScalableFloat                                     ADSAlphaInterpSpeed;                                        // 0x00A8   (0x0028)  
	FScalableFloat                                     CurrentForwardInterpSpeed;                                  // 0x00D0   (0x0028)  
	FScalableFloat                                     MaxRightSpeedOldRangeForForward;                            // 0x00F8   (0x0028)  
	FScalableFloat                                     MaxRightSpeedNewRangeForForward;                            // 0x0120   (0x0028)  
	FScalableFloat                                     MinForwardSpeedOldRangeForForward;                          // 0x0148   (0x0028)  
	FScalableFloat                                     MaxForwardSpeedOldRangeForForward;                          // 0x0170   (0x0028)  
	FScalableFloat                                     MinForwardSpeedNewRangeForForward;                          // 0x0198   (0x0028)  
	FScalableFloat                                     MaxForwardSpeedNewRangeForForward;                          // 0x01C0   (0x0028)  
	FScalableFloat                                     MinUpSpeedOldRangeForForward;                               // 0x01E8   (0x0028)  
	FScalableFloat                                     MaxUpSpeedOldRangeForForward;                               // 0x0210   (0x0028)  
	FScalableFloat                                     MinUpSpeedNewRangeForForward;                               // 0x0238   (0x0028)  
	FScalableFloat                                     MaxUpSpeedNewRangeForForward;                               // 0x0260   (0x0028)  
	FScalableFloat                                     BaseForwardMultiplier;                                      // 0x0288   (0x0028)  
	FScalableFloat                                     SpeedUpBoosterForwardMultiplier;                            // 0x02B0   (0x0028)  
	FScalableFloat                                     SprintingForwardMultiplier;                                 // 0x02D8   (0x0028)  
	FScalableFloat                                     RightSpeedOldRangeForRight;                                 // 0x0300   (0x0028)  
	FScalableFloat                                     RightSpeedNewRangeForRight;                                 // 0x0328   (0x0028)  
	FScalableFloat                                     MaxUpSpeedOldRangeForRight;                                 // 0x0350   (0x0028)  
	FScalableFloat                                     MaxUpSpeedNewRangeForRight;                                 // 0x0378   (0x0028)  
	FScalableFloat                                     MinForwardSpeedOldRangeForRight;                            // 0x03A0   (0x0028)  
	FScalableFloat                                     MaxForwardSpeedOldRangeForRight;                            // 0x03C8   (0x0028)  
	FScalableFloat                                     MinForwardSpeedNewRangeForRight;                            // 0x03F0   (0x0028)  
	FScalableFloat                                     MaxForwardSpeedNewRangeForRight;                            // 0x0418   (0x0028)  
	FScalableFloat                                     BaseRightMultiplier;                                        // 0x0440   (0x0028)  
	FScalableFloat                                     SpeedUpBoostRightMultiplier;                                // 0x0468   (0x0028)  
	FScalableFloat                                     SprintingRightMultiplier;                                   // 0x0490   (0x0028)  
	FScalableFloat                                     CurrentRightInterpSpeed;                                    // 0x04B8   (0x0028)  
	FScalableFloat                                     UpSpeedOldRangeForUp;                                       // 0x04E0   (0x0028)  
	FScalableFloat                                     UpSpeedNewRangeForUp;                                       // 0x0508   (0x0028)  
	FScalableFloat                                     CurrentUpInterpSpeed;                                       // 0x0530   (0x0028)  
	FScalableFloat                                     BaseUpMultiplier;                                           // 0x0558   (0x0028)  
	FScalableFloat                                     SpeedUpBoostUpMultiplier;                                   // 0x0580   (0x0028)  
	FScalableFloat                                     SprintingUpMultiplier;                                      // 0x05A8   (0x0028)  
	FScalableFloat                                     MinForwardSpeedOldRangeForLean;                             // 0x05D0   (0x0028)  
	FScalableFloat                                     MaxForwardSpeedOldRangeForLean;                             // 0x05F8   (0x0028)  
	FScalableFloat                                     MinForwardSpeedNewRangeForLean;                             // 0x0620   (0x0028)  
	FScalableFloat                                     MaxForwardSpeedNewRangeForLean;                             // 0x0648   (0x0028)  
	FScalableFloat                                     MultiplierForMaxNewLeanRange;                               // 0x0670   (0x0028)  
	FScalableFloat                                     CurrentLeanInterpSpeed;                                     // 0x0698   (0x0028)  
	FScalableFloat                                     MaxSpeedOldRangeForFOV;                                     // 0x06C0   (0x0028)  
	FScalableFloat                                     MaxSpeedNewRangeForFOV;                                     // 0x06E8   (0x0028)  
	FScalableFloat                                     BaseFOV;                                                    // 0x0710   (0x0028)  
	FScalableFloat                                     SpeedUpBoosterFOV;                                          // 0x0738   (0x0028)  
	FScalableFloat                                     SprintingFOV;                                               // 0x0760   (0x0028)  
	FScalableFloat                                     CurrentFOVInterpSpeed;                                      // 0x0788   (0x0028)  
	FScalableFloat                                     DeltaDecreaseInZForOffset;                                  // 0x07B0   (0x0028)  
	FScalableFloat                                     CurrentOffsetInterpSpeed;                                   // 0x07D8   (0x0028)  
	FScalableFloat                                     StraightnessMultiplierForOffset;                            // 0x0800   (0x0028)  
	FScalableFloat                                     FinalOffsetForwardDelta;                                    // 0x0828   (0x0028)  
	FScalableFloat                                     FinalOffsetUpDelta;                                         // 0x0850   (0x0028)  
	FScalableFloat                                     FinalOffsetRightDelta;                                      // 0x0878   (0x0028)  
	unsigned char                                      UnknownData00_5[0x50];                                      // 0x08A0   (0x0050)  MISSED
	bool                                               bCachedUseNativeCalculation;                                // 0x08F0   (0x0001)  
	unsigned char                                      UnknownData01_6[0xCF];                                      // 0x08F1   (0x00CF)  MISSED
};

/// Struct /Script/GrindRailRuntime.GrindRailBoosterInfo
/// Size: 0x000C (0x000000 - 0x00000C)
struct FGrindRailBoosterInfo
{ 
	float                                              MinDistanceAlongSpline;                                     // 0x0000   (0x0004)  
	float                                              MaxDistanceAlongSpline;                                     // 0x0004   (0x0004)  
	EGrindRailBoosterMode                              PositiveMode;                                               // 0x0008   (0x0001)  
	EGrindRailBoosterMode                              NegativeMode;                                               // 0x0009   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x000A   (0x0002)  MISSED
};

/// Class /Script/GrindRailRuntime.FortGrindRail
/// Size: 0x02C0 (0x000980 - 0x000C40)
class AFortGrindRail : public ABuildingGameplayActor
{ 
public:
	FScalableFloat                                     SpeedHardCap;                                               // 0x0980   (0x0028)  
	FScalableFloat                                     BaseMaxSpeed;                                               // 0x09A8   (0x0028)  
	FScalableFloat                                     MaxSpeedIncreaseFromDownwardSlope;                          // 0x09D0   (0x0028)  
	FScalableFloat                                     MaxBaseAcceleration;                                        // 0x09F8   (0x0028)  
	FScalableFloat                                     MinBaseAcceleration;                                        // 0x0A20   (0x0028)  
	FScalableFloat                                     MaxStartSpeed;                                              // 0x0A48   (0x0028)  
	FScalableFloat                                     MinStartSpeed;                                              // 0x0A70   (0x0028)  
	FScalableFloat                                     SprintingAcceleration;                                      // 0x0A98   (0x0028)  
	FScalableFloat                                     SprintingMaxSpeed;                                          // 0x0AC0   (0x0028)  
	TArray<class USplineMeshComponent*>                GrindRailMeshes;                                            // 0x0AE8   (0x0010)  
	TArray<FGrindRailBoosterInfo>                      BoosterInfos;                                               // 0x0AF8   (0x0010)  
	class USplineComponent*                            SplineComponent;                                            // 0x0B08   (0x0008)  
	FScalableFloat                                     EnableBoosters;                                             // 0x0B10   (0x0028)  
	FScalableFloat                                     EnableGrinding;                                             // 0x0B38   (0x0028)  
	FScalableFloat                                     EnableProjectileCollision;                                  // 0x0B60   (0x0028)  
	FScalableFloat                                     EnableMeshCollision;                                        // 0x0B88   (0x0028)  
	FScalableFloat                                     EnableWeaponBulletCollision;                                // 0x0BB0   (0x0028)  
	bool                                               bSimulateSplineGravity;                                     // 0x0BD8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0BD9   (0x0003)  MISSED
	float                                              SimulatedSplineGravityAcceleration;                         // 0x0BDC   (0x0004)  
	float                                              TargetDistanceBetweenSplinePointsForGravitySimulation;      // 0x0BE0   (0x0004)  
	int32_t                                            SplineGravitySimulationIterationCount;                      // 0x0BE4   (0x0004)  
	float                                              SplineGravitySimulationTime;                                // 0x0BE8   (0x0004)  
	bool                                               bDisableBooster;                                            // 0x0BEC   (0x0001)  
	unsigned char                                      UnknownData01_5[0x13];                                      // 0x0BED   (0x0013)  MISSED
	SDK_UNDEFINED(32,14106) /* TWeakObjectPtr<AFortGrindRail*> */ __um(HeadConnectedRail);                         // 0x0C00   (0x0020)  
	SDK_UNDEFINED(32,14107) /* TWeakObjectPtr<AFortGrindRail*> */ __um(TailConnectedRail);                         // 0x0C20   (0x0020)  


	/// Functions
	// Function /Script/GrindRailRuntime.FortGrindRail.UpdateTransientComponentTransforms
	// void UpdateTransientComponentTransforms(TArray<USceneComponent*> TransientSceneComponents);                           // [0xa8310f8] Final|Native|Protected|BlueprintCallable 
	// Function /Script/GrindRailRuntime.FortGrindRail.ShouldApplyFallDamageImmunity
	// bool ShouldApplyFallDamageImmunity();                                                                                 // [0x3219f08] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/GrindRailRuntime.FortGrindRail.SetupMeshInfo
	// void SetupMeshInfo(class USplineMeshComponent* SplineMeshComponent);                                                  // [0xa831038] Final|Native|Public|BlueprintCallable 
	// Function /Script/GrindRailRuntime.FortGrindRail.OnRep_TailConnectedRail
	// void OnRep_TailConnectedRail();                                                                                       // [0xa831024] Final|Native|Protected 
	// Function /Script/GrindRailRuntime.FortGrindRail.OnRep_HeadConnectedRail
	// void OnRep_HeadConnectedRail();                                                                                       // [0xa831024] Final|Native|Protected 
	// Function /Script/GrindRailRuntime.FortGrindRail.OnRep_DisableBooster
	// void OnRep_DisableBooster();                                                                                          // [0xa830fd4] Final|Native|Protected 
	// Function /Script/GrindRailRuntime.FortGrindRail.OnPlaylistDataReady
	// void OnPlaylistDataReady(class AFortGameStateAthena* GameState, class UFortPlaylist* Playlist, FGameplayTagContainer& PlaylistContextTags); // [0xa830ea4] Final|Native|Protected|HasOutParms 
	// Function /Script/GrindRailRuntime.FortGrindRail.OnPlayerEndedGrinding
	// void OnPlayerEndedGrinding(class AFortPlayerPawn* Pawn);                                                              // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/GrindRailRuntime.FortGrindRail.OnPlayerBeganGrinding
	// void OnPlayerBeganGrinding(class AFortPlayerPawn* GrindingPawn);                                                      // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/GrindRailRuntime.FortGrindRail.NativeGetNextPositionToGrind
	// void NativeGetNextPositionToGrind(float DistanceToTravel, float CurrentDistanceAlongSpline, float RightLeanValue, FVector& OutNextLocation, bool& bGotToEnd, float& NextLocationOnRail, EGrindRailBoosterMode& BoosterMode, bool& bHitObstacle, bool& bNewRail, float& DistanceAlongNewRail, class AFortGrindRail*& TheNewRail, bool& bNewRailReverseDirection); // [0xa83086c] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GrindRailRuntime.FortGrindRail.IsTipCapped
	// bool IsTipCapped(bool bStartTip);                                                                                     // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/GrindRailRuntime.FortGrindRail.IsGrindRailEnabled
	// bool IsGrindRailEnabled();                                                                                            // [0x331049c] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/GrindRailRuntime.FortGrindRail.HasTailConnection
	// bool HasTailConnection();                                                                                             // [0xa830848] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GrindRailRuntime.FortGrindRail.HasHeadConnection
	// bool HasHeadConnection();                                                                                             // [0xa830824] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GrindRailRuntime.FortGrindRail.GetSpeedSettingsOverride
	// bool GetSpeedSettingsOverride(FGrindRailSpeedSettings& SpeedSettingsOverride);                                        // [0xa830598] Native|Event|Public|HasOutParms|BlueprintEvent|Const 
	// Function /Script/GrindRailRuntime.FortGrindRail.GenerateMeshesAlongSpline
	// void GenerateMeshesAlongSpline();                                                                                     // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/GrindRailRuntime.FortGrindRail.ForceClearBoosters
	// void ForceClearBoosters();                                                                                            // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/GrindRailRuntime.FortGrindRail.ConnectToRailAtTailUnchecked
	// void ConnectToRailAtTailUnchecked(class AFortGrindRail* RailToConnectTo);                                             // [0xa82f860] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GrindRailRuntime.FortGrindRail.BPRerunConstructionScript
	// void BPRerunConstructionScript();                                                                                     // [0x36203b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GrindRailRuntime.FortGrindRail.AllowSprinting
	// bool AllowSprinting();                                                                                                // [0x331049c] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
};

/// Class /Script/GrindRailRuntime.FortGrindRailConnector
/// Size: 0x0000 (0x000980 - 0x000980)
class AFortGrindRailConnector : public ABuildingGameplayActor
{ 
public:
};

/// Struct /Script/GrindRailRuntime.FortAnimInput_GrindRail
/// Size: 0x0018 (0x000000 - 0x000018)
struct FFortAnimInput_GrindRail
{ 
	bool                                               bAimFWD : 1;                                                // 0x0000:0 (0x0001)  
	bool                                               bAimBWD : 1;                                                // 0x0000:1 (0x0001)  
	bool                                               bAimLFT : 1;                                                // 0x0000:2 (0x0001)  
	bool                                               bAimRGT : 1;                                                // 0x0000:3 (0x0001)  
	unsigned char                                      UnknownData00_4[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              AimFWDDeltaAngleDegrees;                                    // 0x0004   (0x0004)  
	float                                              AimBWDDeltaAngleDegrees;                                    // 0x0008   (0x0004)  
	float                                              AimLFTDeltaAngleDegrees;                                    // 0x000C   (0x0004)  
	float                                              AimRGTDeltaAngleDegrees;                                    // 0x0010   (0x0004)  
	float                                              PawnToSplineDeltaYawAngleDegrees;                           // 0x0014   (0x0004)  
};

/// Class /Script/GrindRailRuntime.FortGrindRailLayerAnimInstance
/// Size: 0x02E0 (0x000470 - 0x000750)
class UFortGrindRailLayerAnimInstance : public UFortBaseLayerAnimInstance
{ 
public:
	class UAnimMontage*                                LancePickaxeMontage;                                        // 0x0468   (0x0008)  
	class UAnimMontage*                                ScythePickaxeMontage;                                       // 0x0470   (0x0008)  
	class UAnimMontage*                                FruitCakePickaxeMontage;                                    // 0x0478   (0x0008)  
	FName                                              LeanAlphaCurve;                                             // 0x0480   (0x0004)  
	FName                                              MeleeTwistCurve;                                            // 0x0484   (0x0004)  
	FName                                              InterruptibleCurve;                                         // 0x0488   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x048C   (0x0004)  MISSED
	SDK_UNDEFINED(80,14108) /* TMap<FName, float> */   __um(SlopeWarpingCurveMap);                                 // 0x0490   (0x0050)  
	double                                             LeanBwdVelocityThreshold;                                   // 0x04E0   (0x0008)  
	FCachedAnimRelevancyData                           BwdStartCachedData;                                         // 0x04E8   (0x0014)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x04FC   (0x0004)  MISSED
	double                                             IsMovingThresholdSpeed;                                     // 0x0500   (0x0008)  
	double                                             NoisePlayRateSprintSpeedThreshold;                          // 0x0508   (0x0008)  
	FVector2D                                          NoisePlayRateNormalSpeedInputRange;                         // 0x0510   (0x0010)  
	FVector2D                                          NoisePlayRateNormalSpeedOutputRange;                        // 0x0520   (0x0010)  
	FVector2D                                          NoisePlayRateHighSpeedInputRange;                           // 0x0530   (0x0010)  
	FVector2D                                          NoisePlayRateHighSpeedOutputRange;                          // 0x0540   (0x0010)  
	FVector2D                                          CombatNoisePlayRateSpeedInputRange;                         // 0x0550   (0x0010)  
	FVector2D                                          CombatNoisePlayRateSpeedOutputRange;                        // 0x0560   (0x0010)  
	double                                             CombatNoiseAlphaTargeting;                                  // 0x0570   (0x0008)  
	double                                             CombatNoiseAlphaNonTargeting;                               // 0x0578   (0x0008)  
	double                                             RootLeanAlphaInterpSpeed;                                   // 0x0580   (0x0008)  
	double                                             SlopeWarpAlphaInterpSpeed;                                  // 0x0588   (0x0008)  
	double                                             SplineRelativeAimYawDeltaThreshold;                         // 0x0590   (0x0008)  
	double                                             AimYawSmoothInterpolationCoefficient;                       // 0x0598   (0x0008)  
	double                                             IsSmoothingYawThreshold;                                    // 0x05A0   (0x0008)  
	double                                             LeanBWDThreshold;                                           // 0x05A8   (0x0008)  
	double                                             MuteUpperBodyAlphaMeleeWeapon;                              // 0x05B0   (0x0008)  
	double                                             MuteUpperBodyAlphaNonMeleeWeapon;                           // 0x05B8   (0x0008)  
	double                                             MuteUpperBodyAlphaFruitcakePickaxe;                         // 0x05C0   (0x0008)  
	double                                             MuteUpperBodyAlphaLanceSyctheOrDualWeild;                   // 0x05C8   (0x0008)  
	double                                             BaseLeanDirection;                                          // 0x05D0   (0x0008)  
	bool                                               bIsGrinding;                                                // 0x05D8   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x05D9   (0x0007)  MISSED
	double                                             CurrentSpeed;                                               // 0x05E0   (0x0008)  
	double                                             LeanDirection;                                              // 0x05E8   (0x0008)  
	bool                                               bSprinting;                                                 // 0x05F0   (0x0001)  
	unsigned char                                      UnknownData03_5[0x7];                                       // 0x05F1   (0x0007)  MISSED
	double                                             LeanForward;                                                // 0x05F8   (0x0008)  
	bool                                               bIsWeaponActive;                                            // 0x0600   (0x0001)  
	unsigned char                                      UnknownData04_5[0x7];                                       // 0x0601   (0x0007)  MISSED
	FRotator                                           SplineRelativeAim;                                          // 0x0608   (0x0018)  
	FFortAnimInput_GrindRail                           GrindRailInput;                                             // 0x0620   (0x0018)  
	SDK_UNDEFINED(8,14109) /* TWeakObjectPtr<UFortPawnComponent_GrindingProvider*> */ __um(GrindingProvider);      // 0x0638   (0x0008)  
	SDK_UNDEFINED(8,14110) /* TWeakObjectPtr<UCharacterMovementComponent*> */ __um(MovementComponent);             // 0x0640   (0x0008)  
	SDK_UNDEFINED(8,14111) /* TWeakObjectPtr<AFortPlayerPawn*> */ __um(FortPlayerPawn);                            // 0x0648   (0x0008)  
	bool                                               bIsFalling;                                                 // 0x0650   (0x0001)  
	unsigned char                                      UnknownData05_5[0x7];                                       // 0x0651   (0x0007)  MISSED
	double                                             LeanAlpha;                                                  // 0x0658   (0x0008)  
	bool                                               bIsMoving;                                                  // 0x0660   (0x0001)  
	bool                                               bShould180Turn;                                             // 0x0661   (0x0001)  
	bool                                               bShouldPlayEntry;                                           // 0x0662   (0x0001)  
	unsigned char                                      UnknownData06_5[0x5];                                       // 0x0663   (0x0005)  MISSED
	double                                             NoisePlayRate;                                              // 0x0668   (0x0008)  
	bool                                               bIsLeanBwd;                                                 // 0x0670   (0x0001)  
	bool                                               bIsLeft180Turn;                                             // 0x0671   (0x0001)  
	bool                                               bShould180TurnAgain;                                        // 0x0672   (0x0001)  
	bool                                               bIsTurning;                                                 // 0x0673   (0x0001)  
	bool                                               bShouldExitLocomotion;                                      // 0x0674   (0x0001)  
	bool                                               bIsBoosting;                                                // 0x0675   (0x0001)  
	bool                                               bEarlyExitFromEntry;                                        // 0x0676   (0x0001)  
	bool                                               bAimFWD;                                                    // 0x0677   (0x0001)  
	bool                                               bAimBWD;                                                    // 0x0678   (0x0001)  
	bool                                               bAimLFT;                                                    // 0x0679   (0x0001)  
	bool                                               bAimRGT;                                                    // 0x067A   (0x0001)  
	unsigned char                                      UnknownData07_5[0x5];                                       // 0x067B   (0x0005)  MISSED
	double                                             AimFWDDeltaAngleDegrees;                                    // 0x0680   (0x0008)  
	double                                             AimBWDDeltaAngleDegrees;                                    // 0x0688   (0x0008)  
	double                                             AimLFTDeltaAngleDegrees;                                    // 0x0690   (0x0008)  
	double                                             AimRGTDeltaAngleDegrees;                                    // 0x0698   (0x0008)  
	double                                             NegativeYaw;                                                // 0x06A0   (0x0008)  
	FRotator                                           MeleeTwistRot;                                              // 0x06A8   (0x0018)  
	double                                             BwdStartCachedTime;                                         // 0x06C0   (0x0008)  
	double                                             Velocity;                                                   // 0x06C8   (0x0008)  
	bool                                               bIsEntryLeft;                                               // 0x06D0   (0x0001)  
	bool                                               bIsEntryFromAir;                                            // 0x06D1   (0x0001)  
	bool                                               bIsEntryRight;                                              // 0x06D2   (0x0001)  
	bool                                               bEnteredFromInteraction;                                    // 0x06D3   (0x0001)  
	unsigned char                                      UnknownData08_5[0x4];                                       // 0x06D4   (0x0004)  MISSED
	double                                             SlopeWarpAlpha;                                             // 0x06D8   (0x0008)  
	double                                             SplineRelativeAimYaw;                                       // 0x06E0   (0x0008)  
	double                                             AimYawSmoothed;                                             // 0x06E8   (0x0008)  
	bool                                               bIsSmoothingYaw;                                            // 0x06F0   (0x0001)  
	unsigned char                                      UnknownData09_5[0x7];                                       // 0x06F1   (0x0007)  MISSED
	double                                             LastSplineRelativeAimYaw;                                   // 0x06F8   (0x0008)  
	double                                             RootLeanAlpha;                                              // 0x0700   (0x0008)  
	double                                             MuteUpperBodyAlpha;                                         // 0x0708   (0x0008)  
	bool                                               bIsLanceType;                                               // 0x0710   (0x0001)  
	bool                                               bWasSprinting;                                              // 0x0711   (0x0001)  
	bool                                               bStateRuleToBoostLoop;                                      // 0x0712   (0x0001)  
	bool                                               bIsInAction;                                                // 0x0713   (0x0001)  
	unsigned char                                      UnknownData10_5[0x4];                                       // 0x0714   (0x0004)  MISSED
	double                                             CombatNoisePlayRate;                                        // 0x0718   (0x0008)  
	double                                             CombatNoiseAlpha;                                           // 0x0720   (0x0008)  
	bool                                               bIsTwoHandedMelee;                                          // 0x0728   (0x0001)  
	bool                                               bShouldCorrectUpperBody;                                    // 0x0729   (0x0001)  
	bool                                               bBothHandsDown;                                             // 0x072A   (0x0001)  
	unsigned char                                      UnknownData11_5[0x5];                                       // 0x072B   (0x0005)  MISSED
	double                                             TurnInPlaceAnimCurveValue;                                  // 0x0730   (0x0008)  
	double                                             TurnRotationAmountCurveValue;                               // 0x0738   (0x0008)  
	unsigned char                                      UnknownData12_6[0x10];                                      // 0x0740   (0x0010)  MISSED


	/// Functions
	// Function /Script/GrindRailRuntime.FortGrindRailLayerAnimInstance.HandleBegunGrinding
	// void HandleBegunGrinding(bool bWasAlreadyGrinding, bool bWasJumpingFromRail, bool bFromInteraction, FVector PreviousPlayerLocation); // [0xa830620] Final|Native|Public|HasDefaults 
	// Function /Script/GrindRailRuntime.FortGrindRailLayerAnimInstance.AnimNotify_IdleEnter
	// void AnimNotify_IdleEnter(class UAnimNotify* Notify);                                                                 // [0xa82f780] Final|Native|Public  
	// Function /Script/GrindRailRuntime.FortGrindRailLayerAnimInstance.AnimNotify_EntryExit
	// void AnimNotify_EntryExit(class UAnimNotify* Notify);                                                                 // [0xa82f7f0] Final|Native|Public  
	// Function /Script/GrindRailRuntime.FortGrindRailLayerAnimInstance.AnimNotify_EntryEnter
	// void AnimNotify_EntryEnter(class UAnimNotify* Notify);                                                                // [0xa82f780] Final|Native|Public  
};

/// Class /Script/GrindRailRuntime.FortMovementMode_ExtLogicGrinding
/// Size: 0x0C40 (0x000120 - 0x000D60)
class UFortMovementMode_ExtLogicGrinding : public UFortMovementMode_BaseExtLogic
{ 
public:
	unsigned char                                      UnknownData00_3[0x10];                                      // 0x0120   (0x0010)  MISSED
	SDK_UNDEFINED(8,14112) /* TWeakObjectPtr<UFortPawnComponent_GrindingProvider*> */ __um(GrindingProvider);      // 0x0130   (0x0008)  
	class UClass*                                      GrindCameraModifierClass;                                   // 0x0138   (0x0008)  
	class UClass*                                      GrindingAnimLayer;                                          // 0x0140   (0x0008)  
	FGameplayTag                                       StartGrindingGameplayEvent;                                 // 0x0148   (0x0004)  
	FGameplayTag                                       StopGrindingGameplayEvent;                                  // 0x014C   (0x0004)  
	FGameplayTag                                       VehicleLaunchImmuneTag;                                     // 0x0150   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0154   (0x0004)  MISSED
	FScalableFloat                                     ShouldDropHeldObject;                                       // 0x0158   (0x0028)  
	FGameplayTag                                       BuildingTagImmuneToDamage;                                  // 0x0180   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x0184   (0x0004)  MISSED
	FScalableFloat                                     BaseMaxLeanAngularSpeed;                                    // 0x0188   (0x0028)  
	FScalableFloat                                     BaseLeanInterpSpeed;                                        // 0x01B0   (0x0028)  
	SDK_UNDEFINED(8,14113) /* TWeakObjectPtr<UFortComponent_Energy*> */ __um(TacticalSprintEnergyComponent);       // 0x01D8   (0x0008)  
	FGameplayTagContainer                              TacticalSprintTooLowEnergyTag;                              // 0x01E0   (0x0020)  
	FScalableFloat                                     JumpDistanceMultiplier;                                     // 0x0200   (0x0028)  
	FScalableFloat                                     SameRailAnchoring_MaxForwardDistanceMultiplier;             // 0x0228   (0x0028)  
	FScalableFloat                                     NoAnchorJumpDistanceMultiplier;                             // 0x0250   (0x0028)  
	FScalableFloat                                     SameRailAnchoring_MaxAngle;                                 // 0x0278   (0x0028)  
	FScalableFloat                                     MinJumpOffSpeed;                                            // 0x02A0   (0x0028)  
	FScalableFloat                                     JumpHeight;                                                 // 0x02C8   (0x0028)  
	FScalableFloat                                     InfluenceOfMomentumOnAnchorJump;                            // 0x02F0   (0x0028)  
	FScalableFloat                                     SprintUsePerSecond;                                         // 0x0318   (0x0028)  
	FScalableFloat                                     SprintUsePerSecond_Creative;                                // 0x0340   (0x0028)  
	FGameplayTag                                       SprintUseEnergyTag;                                         // 0x0368   (0x0004)  
	FGameplayTag                                       SprintStartedGameplayEvent;                                 // 0x036C   (0x0004)  
	FScalableFloat                                     MaxAllowedInclineSplinePitch;                               // 0x0370   (0x0028)  
	FScalableFloat                                     MaxAllowedDeclineSplinePitch;                               // 0x0398   (0x0028)  
	FScalableFloat                                     MaxAllowedShootingSplinePitch;                              // 0x03C0   (0x0028)  
	FScalableFloat                                     TurnAngleThreshold;                                         // 0x03E8   (0x0028)  
	FScalableFloat                                     AnimatedTurnDuration;                                       // 0x0410   (0x0028)  
	FScalableFloat                                     BaseGrindRailYawRotationInterpSpeed;                        // 0x0438   (0x0028)  
	FScalableFloat                                     InclineGrindRailPitchRotationInterpSpeed;                   // 0x0460   (0x0028)  
	FScalableFloat                                     DeclineGrindRailPitchRotationInterpSpeed;                   // 0x0488   (0x0028)  
	FScalableFloat                                     ShootingGrindRailRotationInterpSpeed;                       // 0x04B0   (0x0028)  
	FScalableFloat                                     NextGrindRailDetectionOffset;                               // 0x04D8   (0x0028)  
	FGameplayTag                                       CancelGrindingTag;                                          // 0x0500   (0x0004)  
	unsigned char                                      UnknownData03_5[0x4];                                       // 0x0504   (0x0004)  MISSED
	FScalableFloat                                     MinTimeBeforeJumpSinceEntry;                                // 0x0508   (0x0028)  
	FScalableFloat                                     CancelSprintLeanBackThreshold;                              // 0x0530   (0x0028)  
	FScalableFloat                                     WeaponHolsterCooldown;                                      // 0x0558   (0x0028)  
	FScalableFloat                                     WeaponIsShootingCooldown;                                   // 0x0580   (0x0028)  
	FScalableFloat                                     GravityForceWhenGoingDown;                                  // 0x05A8   (0x0028)  
	FScalableFloat                                     GravityForceWhenGoingUp;                                    // 0x05D0   (0x0028)  
	FScalableFloat                                     BoosterSprintingAccelerationOnSlowDownBooster;              // 0x05F8   (0x0028)  
	FScalableFloat                                     BoosterAccelerationOnSpeedUpBooster;                        // 0x0620   (0x0028)  
	FScalableFloat                                     BoosterSlowDownBoosterDragMultiplier;                       // 0x0648   (0x0028)  
	FScalableFloat                                     BoosterSlowDownBoosterGoalSpeed;                            // 0x0670   (0x0028)  
	FScalableFloat                                     BoosterMaxSpeed;                                            // 0x0698   (0x0028)  
	FScalableFloat                                     ShootingMaxSpeedMultiplier;                                 // 0x06C0   (0x0028)  
	FScalableFloat                                     AngleForMaxSpeedIncreaseFromDownwardSlope;                  // 0x06E8   (0x0028)  
	FScalableFloat                                     MaxSpeedIncreaseFromDownwardSlope;                          // 0x0710   (0x0028)  
	FScalableFloat                                     MaxDragForSpeedSoftCap;                                     // 0x0738   (0x0028)  
	FScalableFloat                                     SpeedHardCap;                                               // 0x0760   (0x0028)  
	FScalableFloat                                     SprintingAcceleration;                                      // 0x0788   (0x0028)  
	FScalableFloat                                     SprintingMaxSpeed;                                          // 0x07B0   (0x0028)  
	FScalableFloat                                     SpeedThresholdForTurn;                                      // 0x07D8   (0x0028)  
	FScalableFloat                                     TimeToTurnAround;                                           // 0x0800   (0x0028)  
	FScalableFloat                                     SpeedForMaxLeanAcceleration;                                // 0x0828   (0x0028)  
	FScalableFloat                                     SpeedForMinLeanAcceleration;                                // 0x0850   (0x0028)  
	FScalableFloat                                     MaxLeanAcceleration;                                        // 0x0878   (0x0028)  
	FScalableFloat                                     MinLeanAcceleration;                                        // 0x08A0   (0x0028)  
	FScalableFloat                                     CanAccelerateByLeaningIntoTurns;                            // 0x08C8   (0x0028)  
	FScalableFloat                                     CurvatureForMaxLeanIntoTurnsAcceleration;                   // 0x08F0   (0x0028)  
	FScalableFloat                                     LeanIntoTurnsMaxAcceleration;                               // 0x0918   (0x0028)  
	FScalableFloat                                     IncreasedMaxSpeedFromLeanIntoTurn;                          // 0x0940   (0x0028)  
	FScalableFloat                                     SidewaysLeanBoostReductionRate;                             // 0x0968   (0x0028)  
	FScalableFloat                                     SpeedForMaxBaseAcceleration;                                // 0x0990   (0x0028)  
	FScalableFloat                                     SpeedForMinBaseAcceleration;                                // 0x09B8   (0x0028)  
	FScalableFloat                                     MaxBaseAcceleration;                                        // 0x09E0   (0x0028)  
	FScalableFloat                                     MinBaseAcceleration;                                        // 0x0A08   (0x0028)  
	FScalableFloat                                     BaseGoalSpeed;                                              // 0x0A30   (0x0028)  
	FScalableFloat                                     BaseMaxSpeed;                                               // 0x0A58   (0x0028)  
	FScalableFloat                                     EnableFriction;                                             // 0x0A80   (0x0028)  
	FScalableFloat                                     BaseGoalDecelerationSpeed;                                  // 0x0AA8   (0x0028)  
	FScalableFloat                                     FrictionWhenNotLeaning;                                     // 0x0AD0   (0x0028)  
	FScalableFloat                                     SpeedMultiplierOnHitRailCap;                                // 0x0AF8   (0x0028)  
	FScalableFloat                                     MinSpeedAfterBouncedOffRailCap;                             // 0x0B20   (0x0028)  
	FScalableFloat                                     SpeedMultiplierWhenImpactedPlayer;                          // 0x0B48   (0x0028)  
	FScalableFloat                                     SpeedMinBouncePlayer;                                       // 0x0B70   (0x0028)  
	unsigned char                                      UnknownData04_6[0x1C8];                                     // 0x0B98   (0x01C8)  MISSED


	/// Functions
	// Function /Script/GrindRailRuntime.FortMovementMode_ExtLogicGrinding.RemoveGrindRailInitiatedEffects
	// void RemoveGrindRailInitiatedEffects(class AFortGrindRail* GrindRail);                                                // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/GrindRailRuntime.FortMovementMode_ExtLogicGrinding.OnIgnoredBuildingEndPlay
	// void OnIgnoredBuildingEndPlay(class AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason);                        // [0xa830de0] Final|Native|Protected 
	// Function /Script/GrindRailRuntime.FortMovementMode_ExtLogicGrinding.IsThrowableItem
	// bool IsThrowableItem(class ABuildingActor* BuildingActor);                                                            // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/GrindRailRuntime.FortMovementMode_ExtLogicGrinding.IsDamageableDevice
	// bool IsDamageableDevice(class ABuildingActor* BuildingActor);                                                         // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/GrindRailRuntime.FortMovementMode_ExtLogicGrinding.HandleGrindingEnded
	// void HandleGrindingEnded();                                                                                           // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/GrindRailRuntime.FortMovementMode_ExtLogicGrinding.HandleGrindingBegun
	// void HandleGrindingBegun(class AFortGrindRail* GrindRail);                                                            // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/GrindRailRuntime.FortMovementMode_ExtLogicGrinding.HandleGameplayEffectsOnVehicleHit
	// void HandleGameplayEffectsOnVehicleHit(class AFortAthenaVehicle* AthenaVehicle);                                      // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/GrindRailRuntime.FortMovementMode_ExtLogicGrinding.HandleGameplayCuesOnSprinting
	// void HandleGameplayCuesOnSprinting(class AFortGrindRail* GrindRail, bool bWantsToGrindSprint);                        // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/GrindRailRuntime.FortMovementMode_ExtLogicGrinding.HandleGameplayCuesOnRailJump
	// void HandleGameplayCuesOnRailJump(bool bIsAnchorJumpActive);                                                          // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/GrindRailRuntime.FortMovementMode_ExtLogicGrinding.HandleGameplayCuesOnHit
	// void HandleGameplayCuesOnHit(class AFortGrindRail* GrindRail);                                                        // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/GrindRailRuntime.FortMovementMode_ExtLogicGrinding.HandleGameplayCuesOnFeetLanding
	// void HandleGameplayCuesOnFeetLanding(class AFortGrindRail* GrindRail);                                                // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/GrindRailRuntime.FortMovementMode_ExtLogicGrinding.HandleGameplayCuesOnBoosterModeChange
	// void HandleGameplayCuesOnBoosterModeChange(class AFortGrindRail* GrindRail, EGrindRailBoosterMode OldBoosterMode, EGrindRailBoosterMode NewBoosterMode); // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/GrindRailRuntime.FortMovementMode_ExtLogicGrinding.HandleFallDamageImmunityOnGrindingEnd
	// void HandleFallDamageImmunityOnGrindingEnd(bool bShouldApplyFallDamageImmunityOnEnd);                                 // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/GrindRailRuntime.FortMovementMode_ExtLogicGrinding.GetGrindInAirGameplayEffectClass
	// class UClass* GetGrindInAirGameplayEffectClass(class AFortGrindRail* GrindRail);                                      // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/GrindRailRuntime.FortMovementMode_ExtLogicGrinding.GameplayTagCallback_StartDashMME
	// void GameplayTagCallback_StartDashMME(FGameplayTag tag, int32_t NewCount);                                            // [0xa83038c] Final|Native|Private|Const 
	// Function /Script/GrindRailRuntime.FortMovementMode_ExtLogicGrinding.GameplayTagCallback_CancelGrinding
	// void GameplayTagCallback_CancelGrinding(FGameplayTag tag, int32_t NewCount);                                          // [0xa830180] Final|Native|Private|Const 
	// Function /Script/GrindRailRuntime.FortMovementMode_ExtLogicGrinding.GameplayTagCallback_BlockSprintingAndHolstering
	// void GameplayTagCallback_BlockSprintingAndHolstering(FGameplayTag tag, int32_t NewCount);                             // [0xa82ff74] Final|Native|Private 
	// Function /Script/GrindRailRuntime.FortMovementMode_ExtLogicGrinding.GameplayTagCallback_BlockSprinting
	// void GameplayTagCallback_BlockSprinting(FGameplayTag tag, int32_t NewCount);                                          // [0xa82fd68] Final|Native|Private 
	// Function /Script/GrindRailRuntime.FortMovementMode_ExtLogicGrinding.EventCallback_OnTeleport
	// void EventCallback_OnTeleport(class AFortPawn* TeleportedPawn);                                                       // [0xa82fce8] Final|Native|Private 
	// Function /Script/GrindRailRuntime.FortMovementMode_ExtLogicGrinding.EventCallback_OnSprintInputPressed
	// void EventCallback_OnSprintInputPressed(bool bPressed);                                                               // [0xa82fc68] Final|Native|Private 
	// Function /Script/GrindRailRuntime.FortMovementMode_ExtLogicGrinding.EventCallback_OnReloadInput
	// void EventCallback_OnReloadInput();                                                                                   // [0xa82fc54] Final|Native|Private 
	// Function /Script/GrindRailRuntime.FortMovementMode_ExtLogicGrinding.EventCallback_OnPawnLanded
	// void EventCallback_OnPawnLanded(FHitResult& Hit);                                                                     // [0xa82fb7c] Final|Native|Private|HasOutParms 
	// Function /Script/GrindRailRuntime.FortMovementMode_ExtLogicGrinding.EventCallback_OnJumpInput
	// void EventCallback_OnJumpInput(bool bPressed);                                                                        // [0xa82fafc] Final|Native|Private 
	// Function /Script/GrindRailRuntime.FortMovementMode_ExtLogicGrinding.EventCallback_OnGrindLostStructuralSupport
	// void EventCallback_OnGrindLostStructuralSupport();                                                                    // [0xa82fae8] Final|Native|Private 
	// Function /Script/GrindRailRuntime.FortMovementMode_ExtLogicGrinding.EventCallback_OnFeetLanded
	// void EventCallback_OnFeetLanded();                                                                                    // [0xa82fad4] Final|Native|Private 
	// Function /Script/GrindRailRuntime.FortMovementMode_ExtLogicGrinding.EventCallback_OnEnergyCompletelyDrained
	// void EventCallback_OnEnergyCompletelyDrained(class UFortComponent_Energy* EnergyComponentDrained);                    // [0xa82fa54] Final|Native|Private 
	// Function /Script/GrindRailRuntime.FortMovementMode_ExtLogicGrinding.EventCallback_OnDismountPlayerRequested
	// void EventCallback_OnDismountPlayerRequested();                                                                       // [0xa82fa40] Final|Native|Private 
	// Function /Script/GrindRailRuntime.FortMovementMode_ExtLogicGrinding.EventCallback_OnBaseMeshReady
	// void EventCallback_OnBaseMeshReady(class AFortPlayerPawn* Pawn, class USkeletalMeshComponent* MeshComponent);         // [0xa82f97c] Final|Native|Private 
	// Function /Script/GrindRailRuntime.FortMovementMode_ExtLogicGrinding.EventCallback_OnApplyDamageToDevice
	// void EventCallback_OnApplyDamageToDevice(class ABuildingActor* BuildingActor);                                        // [0xa82f8fc] Final|Native|Private 
	// Function /Script/GrindRailRuntime.FortMovementMode_ExtLogicGrinding.DrawDebugHUD
	// void DrawDebugHUD(class AHUD* HUD, class UCanvas* Canvas);                                                            // [0x6cbaff4] Final|Native|Protected|Const 
	// Function /Script/GrindRailRuntime.FortMovementMode_ExtLogicGrinding.ApplyDamageToDevice
	// void ApplyDamageToDevice(class ABuildingActor* BuildingActor);                                                        // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/GrindRailRuntime.FortMovementMode_ExtLogicGrinding.AddTemporaryMoveIgnoreActor
	// void AddTemporaryMoveIgnoreActor(class ABuildingActor* BuildingActor, float IgnoreDuration);                          // [0xa82f6bc] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/GrindRailRuntime.FortPawnComponent_GrindingProvider
/// Size: 0x0200 (0x0000A8 - 0x0002A8)
class UFortPawnComponent_GrindingProvider : public UFortPawnComponent
{ 
public:
	SDK_UNDEFINED(16,14114) /* FMulticastInlineDelegate */ __um(GrindRailChangedDelegate);                         // 0x00A8   (0x0010)  
	SDK_UNDEFINED(16,14115) /* FMulticastInlineDelegate */ __um(FeetLandedDelegate);                               // 0x00B8   (0x0010)  
	SDK_UNDEFINED(16,14116) /* FMulticastInlineDelegate */ __um(BegunGrindingDelegate);                            // 0x00C8   (0x0010)  
	SDK_UNDEFINED(16,14117) /* FMulticastInlineDelegate */ __um(HitObstacleWhenGrindingDelegate);                  // 0x00D8   (0x0010)  
	SDK_UNDEFINED(16,14118) /* FMulticastInlineDelegate */ __um(BoosterModeChangedDelegate);                       // 0x00E8   (0x0010)  
	SDK_UNDEFINED(16,14119) /* FMulticastInlineDelegate */ __um(SprintingStateChangedDelegate);                    // 0x00F8   (0x0010)  
	SDK_UNDEFINED(16,14120) /* FMulticastInlineDelegate */ __um(EndedGrindingDelegate);                            // 0x0108   (0x0010)  
	SDK_UNDEFINED(16,14121) /* FMulticastInlineDelegate */ __um(ADSPressedDelegate);                               // 0x0118   (0x0010)  
	SDK_UNDEFINED(16,14122) /* FMulticastInlineDelegate */ __um(ADSReleasedDelegate);                              // 0x0128   (0x0010)  
	SDK_UNDEFINED(16,14123) /* FMulticastInlineDelegate */ __um(ApplyDamageToDeviceDelegate);                      // 0x0138   (0x0010)  
	SDK_UNDEFINED(16,14124) /* FMulticastInlineDelegate */ __um(DismountPlayerDelegate);                           // 0x0148   (0x0010)  
	FScalableFloat                                     DisablePlayerFromGrinding;                                  // 0x0158   (0x0028)  
	FScalableFloat                                     ForceGrindingFromWalking;                                   // 0x0180   (0x0028)  
	FScalableFloat                                     GrindFromLandSpeedBoost;                                    // 0x01A8   (0x0028)  
	FGameplayTag                                       CancelGrindingTag;                                          // 0x01D0   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x01D4   (0x0004)  MISSED
	FScalableFloat                                     UseGrindingMME;                                             // 0x01D8   (0x0028)  
	FScalableFloat                                     EnableSprinting;                                            // 0x0200   (0x0028)  
	FScalableFloat                                     GrindInteractionReentryCooldownTime;                        // 0x0228   (0x0028)  
	class UClass*                                      GrindingExtLogicClass;                                      // 0x0250   (0x0008)  
	SDK_UNDEFINED(8,14125) /* TWeakObjectPtr<AFortPlayerPawn*> */ __um(OwnerPawn);                                 // 0x0258   (0x0008)  
	SDK_UNDEFINED(8,14126) /* TWeakObjectPtr<UFortMovementComp_Character*> */ __um(MovementComponent);             // 0x0260   (0x0008)  
	unsigned char                                      UnknownData01_6[0x40];                                      // 0x0268   (0x0040)  MISSED


	/// Functions
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindingProvider.RequestGrindingOnRail
	// bool RequestGrindingOnRail(class AFortGrindRail* GrindRail, float OptionalStartDistance, bool bFromInteraction);      // [0xa84e428] Final|Native|Public|BlueprintCallable 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindingProvider.OnWalkingBaseChanged
	// void OnWalkingBaseChanged(class AFortPawn* Pawn, class AActor* NewBase);                                              // [0xa84e364] Final|Native|Private 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindingProvider.OnPawnLandedCallback
	// void OnPawnLandedCallback(FHitResult& Hit);                                                                           // [0xa84ddc4] Final|Native|Private|HasOutParms 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindingProvider.OnMovementModeChanged
	// void OnMovementModeChanged(class ACharacter* InCharacter, TEnumAsByte<EMovementMode> PrevMovementMode, char PreviousCustomMode); // [0x1f98648] Final|Native|Private 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindingProvider.IsUsingOriginalGrinding
	// bool IsUsingOriginalGrinding();                                                                                       // [0xa84dda8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindingProvider.IsSprinting
	// bool IsSprinting();                                                                                                   // [0xa84dd84] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindingProvider.IsGrindingDisabledForPlayers
	// bool IsGrindingDisabledForPlayers();                                                                                  // [0xa84dd60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindingProvider.IsGrinding
	// bool IsGrinding();                                                                                                    // [0x352342c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindingProvider.GetWantsToGrind
	// bool GetWantsToGrind();                                                                                               // [0xa84dd04] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindingProvider.GetStartedGrindingFromLand
	// bool GetStartedGrindingFromLand();                                                                                    // [0xa84dc88] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindingProvider.GetCurrentGrindingRailActor
	// class AFortGrindRail* GetCurrentGrindingRailActor();                                                                  // [0xa84dc64] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindingProvider.GetCurrentBoosterMode
	// EGrindRailBoosterMode GetCurrentBoosterMode();                                                                        // [0xa84dc40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindingProvider.EventCallback_OnEndedGrinding
	// void EventCallback_OnEndedGrinding();                                                                                 // [0xa84dc2c] Final|Native|Private 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindingProvider.Broadcast_FeetLandedEvent
	// void Broadcast_FeetLandedEvent();                                                                                     // [0xa84d9e0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindingProvider.Broadcast_DismountPlayerEvent
	// void Broadcast_DismountPlayerEvent();                                                                                 // [0xa84d9b0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindingProvider.Broadcast_ApplyDamageToBuildingActorEvent
	// void Broadcast_ApplyDamageToBuildingActorEvent(class ABuildingActor* BuildingActor);                                  // [0xa84d920] Final|Native|Protected|BlueprintCallable 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindingProvider.Broadcast_ADSReleasedEvent
	// void Broadcast_ADSReleasedEvent();                                                                                    // [0xa84d8f0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindingProvider.Broadcast_ADSPressedEvent
	// void Broadcast_ADSPressedEvent();                                                                                     // [0xa84d8c0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindingProvider.BP_OnFeetLanded
	// void BP_OnFeetLanded();                                                                                               // [0x18a39e4] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindingProvider.BP_OnDismount
	// void BP_OnDismount();                                                                                                 // [0x18a39e4] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindingProvider.BP_OnApplyDamageToDevice
	// void BP_OnApplyDamageToDevice(class ABuildingActor* BuildingActor);                                                   // [0x18a39e4] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindingProvider.BP_OnADSReleased
	// void BP_OnADSReleased();                                                                                              // [0x18a39e4] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindingProvider.BP_OnADSPressed
	// void BP_OnADSPressed();                                                                                               // [0x18a39e4] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindingProvider.BP_HandleGameplayEffectsOnPlayerJumpOff
	// void BP_HandleGameplayEffectsOnPlayerJumpOff(FVector PlayerPosition);                                                 // [0x18a39e4] Event|Public|HasDefaults|BlueprintEvent 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindingProvider.BP_CanBeginGrinding
	// bool BP_CanBeginGrinding();                                                                                           // [0x18a39e4] Event|Public|BlueprintEvent|Const 
};

/// Class /Script/GrindRailRuntime.GrindRailEditorComponent
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UGrindRailEditorComponent : public UActorComponent
{ 
public:
};

/// Class /Script/GrindRailRuntime.GrindRailMovementControls
/// Size: 0x0000 (0x000030 - 0x000030)
class UGrindRailMovementControls : public UFortMovementControls
{ 
public:
};

/// Class /Script/GrindRailRuntime.StructurallySupportedSplineComponent
/// Size: 0x0078 (0x0000A0 - 0x000118)
class UStructurallySupportedSplineComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x78];                                      // 0x00A0   (0x0078)  MISSED


	/// Functions
	// Function /Script/GrindRailRuntime.StructurallySupportedSplineComponent.OnStructuralSupportDied
	// void OnStructuralSupportDied(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, FVector HitLocation, class UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum); // [0xa84de9c] Final|Native|Protected|HasDefaults 
	// Function /Script/GrindRailRuntime.StructurallySupportedSplineComponent.OnDestroyFromStructuralSupport
	// void OnDestroyFromStructuralSupport(class AActor* SupportActor);                                                      // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/GrindRailRuntime.StructurallySupportedSplineComponent.Multicast_OnStructuralSupportDied
	// void Multicast_OnStructuralSupportDied();                                                                             // [0x6cb2178] Net|NetReliableNative|Event|NetMulticast|Protected 
};

/// Class /Script/GrindRailRuntime.FortAthenaAIBotEvaluator_GrindRail
/// Size: 0x0068 (0x0000A8 - 0x000110)
class UFortAthenaAIBotEvaluator_GrindRail : public UFortAthenaAIBotEvaluator
{ 
public:
	FGameplayTag                                       GrindRailTag;                                               // 0x00A8   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00AC   (0x0004)  MISSED
	FScalableFloat                                     GrindDuration;                                              // 0x00B0   (0x0028)  
	FScalableFloat                                     GrindDurationRandomDeviation;                               // 0x00D8   (0x0028)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x0100   (0x0010)  MISSED
};

/// Class /Script/GrindRailRuntime.FortGameplayCueNotifyLoop_Grinding
/// Size: 0x0190 (0x0009B0 - 0x000B40)
class AFortGameplayCueNotifyLoop_Grinding : public AFortGameplayCueNotify_Loop
{ 
public:
	bool                                               bFeetHasLanded;                                             // 0x09B0   (0x0001)  
	bool                                               bEnableNativeAudioUpdate;                                   // 0x09B1   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x09B2   (0x0002)  MISSED
	float                                              ForwardChangedValueThreshold;                               // 0x09B4   (0x0004)  
	FFortAudioFloatParameter                           Speed;                                                      // 0x09B8   (0x0038)  
	FFortAudioFloatParameter                           Forward;                                                    // 0x09F0   (0x0038)  
	FFortAudioFloatParameter                           Boost;                                                      // 0x0A28   (0x0038)  
	FFortAudioFloatParameter                           Curve;                                                      // 0x0A60   (0x0038)  
	FFortAudioFloatParameter                           IsGrinding;                                                 // 0x0A98   (0x0038)  
	FFortAudioFloatParameter                           IsSlowDown;                                                 // 0x0AD0   (0x0038)  
	FName                                              LeanForwardSpeedName;                                       // 0x0B08   (0x0004)  
	FName                                              TurnOnSpeedFXName;                                          // 0x0B0C   (0x0004)  
	float                                              TurnOnSpeedFXThreshold;                                     // 0x0B10   (0x0004)  
	SDK_UNDEFINED(8,14127) /* TWeakObjectPtr<UFXSystemComponent*> */ __um(EffectsComponent);                       // 0x0B14   (0x0008)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0B1C   (0x0004)  MISSED
	class UAudioComponent*                             AudioComponent;                                             // 0x0B20   (0x0008)  
	class AFortPlayerPawn*                             PlayerPawn;                                                 // 0x0B28   (0x0008)  
	class UFortPawnComponent_GrindingProvider*         GrindingProvider;                                           // 0x0B30   (0x0008)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x0B38   (0x0008)  MISSED


	/// Functions
	// Function /Script/GrindRailRuntime.FortGameplayCueNotifyLoop_Grinding.OnForwardChanged
	// void OnForwardChanged(bool bNewState);                                                                                // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/GrindRailRuntime.FortGameplayCueNotifyLoop_Grinding.CacheReferences
	// void CacheReferences(class UAudioComponent* InAudioComponent, class UFXSystemComponent* InEffectsComponent, class AFortPlayerPawn* InPlayerPawn, class UFortPawnComponent_GrindingProvider* InGrindingProvider); // [0xa84da10] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/GrindRailRuntime.FortPawnComponent_GrindRail
/// Size: 0x0B18 (0x0000A8 - 0x000BC0)
class UFortPawnComponent_GrindRail : public UFortPawnComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x10];                                      // 0x00A8   (0x0010)  MISSED
	bool                                               bUseNativeSpeedCalculation;                                 // 0x00B8   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x00B9   (0x0003)  MISSED
	float                                              LeanForward;                                                // 0x00BC   (0x0004)  
	float                                              LeanRight;                                                  // 0x00C0   (0x0004)  
	float                                              BaseLeanRight;                                              // 0x00C4   (0x0004)  
	float                                              CurrentSpeedAlongSpline;                                    // 0x00C8   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x00CC   (0x0004)  MISSED
	FVector                                            CurrentDirection;                                           // 0x00D0   (0x0018)  
	EGrindRailBoosterMode                              CurrentBoosterMode;                                         // 0x00E8   (0x0001)  
	bool                                               bShould180Turn;                                             // 0x00E9   (0x0001)  
	bool                                               bShould180TurnAgain;                                        // 0x00EA   (0x0001)  
	unsigned char                                      UnknownData03_5[0x5];                                       // 0x00EB   (0x0005)  MISSED
	class UClass*                                      GrindCameraModifierClass;                                   // 0x00F0   (0x0008)  
	class UClass*                                      GrindingAnimLayer;                                          // 0x00F8   (0x0008)  
	FScalableFloat                                     BaseMaxLeanAngularSpeed;                                    // 0x0100   (0x0028)  
	FScalableFloat                                     BaseLeanInterpSpeed;                                        // 0x0128   (0x0028)  
	SDK_UNDEFINED(8,14128) /* TWeakObjectPtr<AFortGrindRail*> */ __um(ReplicatedGrindingRail);                     // 0x0150   (0x0008)  
	SDK_UNDEFINED(8,14129) /* TWeakObjectPtr<AFortGrindRail*> */ __um(PreviousGrindingRail);                       // 0x0158   (0x0008)  
	SDK_UNDEFINED(8,14130) /* TWeakObjectPtr<AFortGrindRail*> */ __um(GrindingRail);                               // 0x0160   (0x0008)  
	SDK_UNDEFINED(8,14131) /* TWeakObjectPtr<AFortGrindRail*> */ __um(NextGrindingRail);                           // 0x0168   (0x0008)  
	bool                                               bIsGrinding;                                                // 0x0170   (0x0001)  
	bool                                               bIsGrindJumping;                                            // 0x0171   (0x0001)  
	bool                                               bIsSprinting;                                               // 0x0172   (0x0001)  
	bool                                               bWeaponHolstered;                                           // 0x0173   (0x0001)  
	bool                                               bJumpInputReady;                                            // 0x0174   (0x0001)  
	unsigned char                                      UnknownData04_5[0x3];                                       // 0x0175   (0x0003)  MISSED
	float                                              GrindStartDistance;                                         // 0x0178   (0x0004)  
	float                                              CurrentDistanceAlongSpline;                                 // 0x017C   (0x0004)  
	FVector                                            NativeLastRailLocation;                                     // 0x0180   (0x0018)  
	float                                              NativeMaxSpeed;                                             // 0x0198   (0x0004)  
	unsigned char                                      UnknownData05_5[0x4];                                       // 0x019C   (0x0004)  MISSED
	FRotator                                           GoalRotation;                                               // 0x01A0   (0x0018)  
	bool                                               bIs180Turning;                                              // 0x01B8   (0x0001)  
	unsigned char                                      UnknownData06_5[0x3];                                       // 0x01B9   (0x0003)  MISSED
	float                                              HorizontalSplineAngleDeltaDegrees;                          // 0x01BC   (0x0004)  
	FScalableFloat                                     MaxAllowedInclineSplinePitch;                               // 0x01C0   (0x0028)  
	FScalableFloat                                     MaxAllowedDeclineSplinePitch;                               // 0x01E8   (0x0028)  
	FScalableFloat                                     MaxAllowedShootingSplinePitch;                              // 0x0210   (0x0028)  
	FScalableFloat                                     TurnAngleThreshold;                                         // 0x0238   (0x0028)  
	FScalableFloat                                     AnimatedTurnDuration;                                       // 0x0260   (0x0028)  
	FScalableFloat                                     BaseGrindRailYawRotationInterpSpeed;                        // 0x0288   (0x0028)  
	FScalableFloat                                     InclineGrindRailPitchRotationInterpSpeed;                   // 0x02B0   (0x0028)  
	FScalableFloat                                     DeclineGrindRailPitchRotationInterpSpeed;                   // 0x02D8   (0x0028)  
	FScalableFloat                                     ShootingGrindRailRotationInterpSpeed;                       // 0x0300   (0x0028)  
	FScalableFloat                                     NextGrindRailDetectionOffset;                               // 0x0328   (0x0028)  
	FGameplayTag                                       CancelGrindingTag;                                          // 0x0350   (0x0004)  
	unsigned char                                      UnknownData07_5[0x4];                                       // 0x0354   (0x0004)  MISSED
	FScalableFloat                                     GrindInteractionReentryCooldownTime;                        // 0x0358   (0x0028)  
	FScalableFloat                                     ForceGrindingFromWalking;                                   // 0x0380   (0x0028)  
	FScalableFloat                                     MinTimeBeforeJumpSinceEntry;                                // 0x03A8   (0x0028)  
	FScalableFloat                                     CancelSprintLeanBackThreshold;                              // 0x03D0   (0x0028)  
	FScalableFloat                                     WeaponHolsterCooldown;                                      // 0x03F8   (0x0028)  
	FScalableFloat                                     WeaponIsShootingCooldown;                                   // 0x0420   (0x0028)  
	FScalableFloat                                     GravityForceWhenGoingDown;                                  // 0x0448   (0x0028)  
	FScalableFloat                                     GravityForceWhenGoingUp;                                    // 0x0470   (0x0028)  
	FScalableFloat                                     BoosterSprintingAccelerationOnSlowDownBooster;              // 0x0498   (0x0028)  
	FScalableFloat                                     BoosterAccelerationOnSpeedUpBooster;                        // 0x04C0   (0x0028)  
	FScalableFloat                                     BoosterSlowDownBoosterDragMultiplier;                       // 0x04E8   (0x0028)  
	FScalableFloat                                     BoosterSlowDownBoosterGoalSpeed;                            // 0x0510   (0x0028)  
	FScalableFloat                                     BoosterMaxSpeed;                                            // 0x0538   (0x0028)  
	FScalableFloat                                     ShootingMaxSpeedMultiplier;                                 // 0x0560   (0x0028)  
	FScalableFloat                                     AngleForMaxSpeedIncreaseFromDownwardSlope;                  // 0x0588   (0x0028)  
	FScalableFloat                                     MaxSpeedIncreaseFromDownwardSlope;                          // 0x05B0   (0x0028)  
	FScalableFloat                                     MaxDragForSpeedSoftCap;                                     // 0x05D8   (0x0028)  
	FScalableFloat                                     SpeedHardCap;                                               // 0x0600   (0x0028)  
	FScalableFloat                                     SprintingAcceleration;                                      // 0x0628   (0x0028)  
	FScalableFloat                                     SprintingMaxSpeed;                                          // 0x0650   (0x0028)  
	FScalableFloat                                     SpeedThresholdForTurn;                                      // 0x0678   (0x0028)  
	FScalableFloat                                     TimeToTurnAround;                                           // 0x06A0   (0x0028)  
	FScalableFloat                                     SpeedForMaxLeanAcceleration;                                // 0x06C8   (0x0028)  
	FScalableFloat                                     SpeedForMinLeanAcceleration;                                // 0x06F0   (0x0028)  
	FScalableFloat                                     MaxLeanAcceleration;                                        // 0x0718   (0x0028)  
	FScalableFloat                                     MinLeanAcceleration;                                        // 0x0740   (0x0028)  
	FScalableFloat                                     CanAccelerateByLeaningIntoTurns;                            // 0x0768   (0x0028)  
	FScalableFloat                                     CurvatureForMaxLeanIntoTurnsAcceleration;                   // 0x0790   (0x0028)  
	FScalableFloat                                     LeanIntoTurnsMaxAcceleration;                               // 0x07B8   (0x0028)  
	FScalableFloat                                     IncreasedMaxSpeedFromLeanIntoTurn;                          // 0x07E0   (0x0028)  
	FScalableFloat                                     SidewaysLeanBoostReductionRate;                             // 0x0808   (0x0028)  
	FScalableFloat                                     SpeedForMaxBaseAcceleration;                                // 0x0830   (0x0028)  
	FScalableFloat                                     SpeedForMinBaseAcceleration;                                // 0x0858   (0x0028)  
	FScalableFloat                                     MaxBaseAcceleration;                                        // 0x0880   (0x0028)  
	FScalableFloat                                     MinBaseAcceleration;                                        // 0x08A8   (0x0028)  
	FScalableFloat                                     BaseGoalSpeed;                                              // 0x08D0   (0x0028)  
	FScalableFloat                                     BaseMaxSpeed;                                               // 0x08F8   (0x0028)  
	FScalableFloat                                     EnableFriction;                                             // 0x0920   (0x0028)  
	FScalableFloat                                     BaseGoalDecelerationSpeed;                                  // 0x0948   (0x0028)  
	FScalableFloat                                     FrictionWhenNotLeaning;                                     // 0x0970   (0x0028)  
	FScalableFloat                                     SpeedMultiplierOnHitRailCap;                                // 0x0998   (0x0028)  
	FScalableFloat                                     MinSpeedAfterBouncedOffRailCap;                             // 0x09C0   (0x0028)  
	SDK_UNDEFINED(8,14132) /* TWeakObjectPtr<UFortPawnComponent_GrindingProvider*> */ __um(GrindingProvider);      // 0x09E8   (0x0008)  
	unsigned char                                      UnknownData08_6[0x1D0];                                     // 0x09F0   (0x01D0)  MISSED


	/// Functions
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindRail.SetMovementStatus
	// void SetMovementStatus(FVector& NewStatus);                                                                           // [0xa85ee60] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindRail.SetIsSprinting
	// void SetIsSprinting(bool bNewIsSprinting);                                                                            // [0xa85ede0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindRail.SetGrindDistanceOnSpline
	// void SetGrindDistanceOnSpline(float NewDistanceOnSpline);                                                             // [0xa85ed60] Final|Native|Public|BlueprintCallable 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindRail.SetGrindBaseActor
	// void SetGrindBaseActor(class AActor* NewBaseActor);                                                                   // [0xa85ece0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindRail.ServerUpdateWeaponHolstered
	// void ServerUpdateWeaponHolstered(bool bNewHolstered, bool bPlayEquipAnim);                                            // [0xa85ec18] Net|NetReliableNative|Event|Protected|NetServer 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindRail.ServerBeginGrinding
	// void ServerBeginGrinding(class AFortGrindRail* GrindRail, float OptionalStartDistance, bool bFromInteraction);        // [0xa85eb18] Net|NetReliableNative|Event|Protected|NetServer 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindRail.RemoveMoveIgnoreActors
	// void RemoveMoveIgnoreActors();                                                                                        // [0xa85eb04] Final|Native|Protected|BlueprintCallable 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindRail.OnRep_IsSprinting
	// void OnRep_IsSprinting();                                                                                             // [0xa85ea9c] Final|Native|Protected 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindRail.OnRep_GrindingRail
	// void OnRep_GrindingRail();                                                                                            // [0xa85ea18] Final|Native|Protected 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindRail.OnRep_CurrentBoosterMode
	// void OnRep_CurrentBoosterMode(EGrindRailBoosterMode PreviousBoosterMode);                                             // [0xa85e968] Final|Native|Protected 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindRail.OnReloadInput
	// void OnReloadInput();                                                                                                 // [0xa85e954] Final|Native|Protected 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindRail.OnMovementModeChanged
	// void OnMovementModeChanged(class ACharacter* InCharacter, TEnumAsByte<EMovementMode> PrevMovementMode, char PreviousCustomMode); // [0x1f989f0] Final|Native|Protected 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindRail.OnJumpInput
	// void OnJumpInput(bool bPressed);                                                                                      // [0xa85e8d4] Final|Native|Protected 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindRail.OnIgnoredBuildingEndPlay
	// void OnIgnoredBuildingEndPlay(class AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason);                        // [0xa85e810] Final|Native|Protected 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindRail.OnGrindLostStructuralSupport
	// void OnGrindLostStructuralSupport();                                                                                  // [0xa85e7fc] Final|Native|Private 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindRail.OnBaseMeshReady
	// void OnBaseMeshReady(class AFortPlayerPawn* Pawn, class USkeletalMeshComponent* MeshComponent);                       // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindRail.NativeIsShooting
	// bool NativeIsShooting();                                                                                              // [0xa85e7d8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindRail.IsWeaponADS
	// bool IsWeaponADS();                                                                                                   // [0xa85e74c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindRail.IsWeaponActive
	// bool IsWeaponActive();                                                                                                // [0xa85e7bc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindRail.IsUsingToggleSprint
	// bool IsUsingToggleSprint();                                                                                           // [0xa85e6ec] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindRail.IsUsingFirstPersonCamera
	// bool IsUsingFirstPersonCamera();                                                                                      // [0xa85e654] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindRail.IsOriginalGrindingSupported
	// bool IsOriginalGrindingSupported();                                                                                   // [0x1f99634] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindRail.IsGrinding
	// bool IsGrinding();                                                                                                    // [0xa85e63c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindRail.HandleSprintInput
	// void HandleSprintInput(bool bPressed);                                                                                // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindRail.HandleRailJump
	// void HandleRailJump();                                                                                                // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindRail.HandleJumpOffEnd
	// void HandleJumpOffEnd();                                                                                              // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindRail.HandleHitWhenGrinding
	// void HandleHitWhenGrinding(FHitResult& Hit);                                                                          // [0x18a39e4] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindRail.HandleGrindingEndedFromReplication
	// void HandleGrindingEndedFromReplication();                                                                            // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindRail.HandleGrindingEnded
	// void HandleGrindingEnded();                                                                                           // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindRail.HandleGrindingBegun
	// void HandleGrindingBegun();                                                                                           // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindRail.HandleGrindFinishedAfterJumping
	// void HandleGrindFinishedAfterJumping();                                                                               // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindRail.GetWantsToGrind
	// bool GetWantsToGrind();                                                                                               // [0xa85e5f4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindRail.GetSpeedHardCap
	// float GetSpeedHardCap();                                                                                              // [0x91a0ff0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindRail.GetMovementStatus
	// FVector GetMovementStatus();                                                                                          // [0xa85e594] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindRail.GetLeanForwardSpeedNormalized
	// float GetLeanForwardSpeedNormalized();                                                                                // [0xa85e574] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindRail.GetHorizontalSplineAngleDeltaDegrees
	// float GetHorizontalSplineAngleDeltaDegrees();                                                                         // [0xa85e55c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindRail.GetGrindRequestJump
	// bool GetGrindRequestJump();                                                                                           // [0xa85e514] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindRail.GetGrindDistanceOnSpline
	// float GetGrindDistanceOnSpline();                                                                                     // [0xa85e4f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindRail.GetGrindBaseActor
	// class AActor* GetGrindBaseActor();                                                                                    // [0xa85e4a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindRail.GetCurrentGrindingRailActor
	// class AFortGrindRail* GetCurrentGrindingRailActor();                                                                  // [0xa85e47c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindRail.GetCameraOrientedLeanValues
	// void GetCameraOrientedLeanValues(float RawLeanForward, float RawLeanRight, float& OrientedLeanForward, float& OrientedLeanRight); // [0xa85e318] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindRail.EventCallback_OnSprintInput
	// void EventCallback_OnSprintInput(bool bPressed);                                                                      // [0xa85e298] Final|Native|Private 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindRail.EventCallback_OnBaseMeshReady
	// void EventCallback_OnBaseMeshReady(class AFortPlayerPawn* Pawn, class USkeletalMeshComponent* MeshComponent);         // [0xa85e1d4] Final|Native|Private 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindRail.EndGrinding
	// void EndGrinding(bool bSetEndMovementMode);                                                                           // [0xa85e154] Final|Native|Public|BlueprintCallable 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindRail.DrawDebugHUD
	// void DrawDebugHUD(class AHUD* HUD, class UCanvas* Canvas);                                                            // [0x6cbaff4] Final|Native|Protected|Const 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindRail.CanBeginGrinding
	// bool CanBeginGrinding();                                                                                              // [0x8107e80] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindRail.CalculateVelocity
	// void CalculateVelocity(float DeltaTime, bool bReplayingMovement, FVector& OutVelocity);                               // [0x18a39e4] Event|Public|HasOutParms|HasDefaults|BlueprintEvent 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindRail.BeginGrinding
	// void BeginGrinding(class AFortGrindRail* GrindRail, float OptionalStartDistance, bool bFromInteraction);              // [0xa85e058] Final|Native|Public|BlueprintCallable 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindRail.AttemptDestroyVehicleWhileGrinding
	// bool AttemptDestroyVehicleWhileGrinding(class AFortAthenaVehicle* Vehicle);                                           // [0xa85de50] Final|Native|Protected|BlueprintCallable 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindRail.AddTemporaryMoveIgnoreActor
	// void AddTemporaryMoveIgnoreActor(class ABuildingActor* BuildingActor, float IgnoreDuration);                          // [0xa85dd8c] Final|Native|Protected|BlueprintCallable 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindRail.AddMoveIgnoreActor
	// bool AddMoveIgnoreActor(class ABuildingActor* BuildingActor);                                                         // [0xa85dcfc] Final|Native|Protected|BlueprintCallable 
};

/// Struct /Script/GrindRailRuntime.FortAnimNode_GrindRailSlopeWarping
/// Size: 0x0060 (0x0002E8 - 0x000348)
struct FFortAnimNode_GrindRailSlopeWarping : FFortAnimNode_SlopeWarping
{ 
	float                                              BaseSplineRadius;                                           // 0x02E8   (0x0004)  
	bool                                               bAbsentCurveMeansFootDown : 1;                              // 0x02EC:0 (0x0001)  
	unsigned char                                      UnknownData00_4[0x3];                                       // 0x02ED   (0x0003)  MISSED
	FName                                              LFootOnGroundCurveName;                                     // 0x02F0   (0x0004)  
	bool                                               bLeftCurveHighMeansFootDown : 1;                            // 0x02F4:0 (0x0001)  
	unsigned char                                      UnknownData01_4[0x3];                                       // 0x02F5   (0x0003)  MISSED
	FName                                              RFootOnGroundCurveName;                                     // 0x02F8   (0x0004)  
	bool                                               bRightCurveHighMeansFootDown : 1;                           // 0x02FC:0 (0x0001)  
	unsigned char                                      UnknownData02_4[0x3];                                       // 0x02FD   (0x0003)  MISSED
	FBoneReference                                     LeftFootFKBone;                                             // 0x0300   (0x000C)  
	unsigned char                                      UnknownData03_6[0x3C];                                      // 0x030C   (0x003C)  MISSED
};

/// Struct /Script/GrindRailRuntime.FortRailPointSnapData
/// Size: 0x0010 (0x000000 - 0x000010)
struct FFortRailPointSnapData
{ 
	class AFortGrindRail*                              RailToSnapTo;                                               // 0x0000   (0x0008)  
	int32_t                                            PointToSnapTo;                                              // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
};

/// Struct /Script/GrindRailRuntime.GrindRailSpeedSettings
/// Size: 0x0018 (0x000000 - 0x000018)
struct FGrindRailSpeedSettings
{ 
	float                                              SprintAcceleration;                                         // 0x0000   (0x0004)  
	float                                              MaxLeanAcceleration;                                        // 0x0004   (0x0004)  
	float                                              MinLeanAcceleration;                                        // 0x0008   (0x0004)  
	float                                              ShootingSpeedMultiplier;                                    // 0x000C   (0x0004)  
	float                                              GravityForceWhenGoingUp;                                    // 0x0010   (0x0004)  
	float                                              GravityForceWhenGoingDown;                                  // 0x0014   (0x0004)  
};

/// Struct /Script/GrindRailRuntime.FortMovementMode_GrindingRuntimeData
/// Size: 0x01A0 (0x000010 - 0x0001B0)
struct FFortMovementMode_GrindingRuntimeData : FFortMovementMode_BaseExtRuntimeData
{ 
	unsigned char                                      UnknownData00_1[0x1A0];                                     // 0x0010   (0x01A0)  MISSED
};

/// Struct /Script/GrindRailRuntime.FortMovementMode_GrindingCreationData
/// Size: 0x0040 (0x000008 - 0x000048)
struct FFortMovementMode_GrindingCreationData : FFortMovementMode_BaseExtCreationData
{ 
	unsigned char                                      UnknownData00_1[0x40];                                      // 0x0008   (0x0040)  MISSED
};

/// Struct /Script/GrindRailRuntime.FortMovementMode_GrindingRailJumpResult
/// Size: 0x0020 (0x000000 - 0x000020)
struct FFortMovementMode_GrindingRailJumpResult
{ 
	unsigned char                                      UnknownData00_2[0x20];                                      // 0x0000   (0x0020)  MISSED
};

/// Struct /Script/GrindRailRuntime.GrindingRequestCalculationData
/// Size: 0x0038 (0x000000 - 0x000038)
struct FGrindingRequestCalculationData
{ 
	FVector                                            ResultActorLocation;                                        // 0x0000   (0x0018)  
	FVector                                            ResultActorDirection;                                       // 0x0018   (0x0018)  
	float                                              ResultDistanceOnSpline;                                     // 0x0030   (0x0004)  
	float                                              ResultSpeed;                                                // 0x0034   (0x0004)  
};

/// Struct /Script/GrindRailRuntime.GrindRailStatus
/// Size: 0x0010 (0x000000 - 0x000010)
struct FGrindRailStatus
{ 
	SDK_UNDEFINED(8,14133) /* TWeakObjectPtr<AFortGrindRail*> */ __um(GrindingRail);                               // 0x0000   (0x0008)  
	float                                              CurrentSpeedAlongSpline;                                    // 0x0008   (0x0004)  
	float                                              CurrentDistanceAlongSpline;                                 // 0x000C   (0x0004)  
};

