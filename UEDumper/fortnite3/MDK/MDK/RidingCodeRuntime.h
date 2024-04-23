
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: EnhancedInput
/// dependency: FortniteAI
/// dependency: FortniteGame
/// dependency: GameplayAbilities
/// dependency: GameplayTags
/// dependency: ModularGameplay

/// Class /Script/RidingCodeRuntime.FortVehicleLayerAnimInstance_Riding
/// Size: 0x02C0 (0x000830 - 0x000AF0)
class UFortVehicleLayerAnimInstance_Riding : public UFortVehicleOccupantAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2800;

public:
	SMember(FCachedAnimRelevancyData)                  IntoVehicleCachedData                                       OFFSET(getStruct<T>, {0x830, 20, 0, 0})
	SMember(FCachedAnimRelevancyData)                  OutOfVehicleCachedData                                      OFFSET(getStruct<T>, {0x844, 20, 0, 0})
	DMember(float)                                     InTime                                                      OFFSET(get<float>, {0x858, 4, 0, 0})
	DMember(float)                                     OutTime                                                     OFFSET(get<float>, {0x85C, 4, 0, 0})
	DMember(float)                                     BodyYawOffset                                               OFFSET(get<float>, {0x860, 4, 0, 0})
	SMember(FRotator)                                  BodyCounterRotation                                         OFFSET(getStruct<T>, {0x868, 24, 0, 0})
	DMember(float)                                     BodyCounterRotationAlpha                                    OFFSET(get<float>, {0x880, 4, 0, 0})
	DMember(bool)                                      bIsReloading                                                OFFSET(get<bool>, {0x884, 1, 0, 0})
	DMember(bool)                                      bIsTargeting                                                OFFSET(get<bool>, {0x885, 1, 0, 0})
	DMember(bool)                                      bIsFiring                                                   OFFSET(get<bool>, {0x886, 1, 0, 0})
	DMember(bool)                                      bIsUsingConsumable                                          OFFSET(get<bool>, {0x887, 1, 0, 0})
	DMember(bool)                                      bIsInAction                                                 OFFSET(get<bool>, {0x888, 1, 0, 0})
	DMember(bool)                                      bIsThrowConsumable                                          OFFSET(get<bool>, {0x889, 1, 0, 0})
	DMember(bool)                                      bIsTargetingOrThrowingConsumable                            OFFSET(get<bool>, {0x88A, 1, 0, 0})
	DMember(bool)                                      bIsTurningInPlace                                           OFFSET(get<bool>, {0x88B, 1, 0, 0})
	DMember(bool)                                      bIsRidingSprinting                                          OFFSET(get<bool>, {0x88C, 1, 0, 0})
	DMember(bool)                                      bIsRidingPetting                                            OFFSET(get<bool>, {0x88D, 1, 0, 0})
	DMember(float)                                     TurnInPlaceRotationSpeed                                    OFFSET(get<float>, {0x890, 4, 0, 0})
	DMember(float)                                     TurnInPlaceAngleDelta                                       OFFSET(get<float>, {0x894, 4, 0, 0})
	DMember(bool)                                      bIsRidingMovingBackward                                     OFFSET(get<bool>, {0x898, 1, 0, 0})
	DMember(bool)                                      bIsSlopeSliding                                             OFFSET(get<bool>, {0x899, 1, 0, 0})
	DMember(float)                                     SlopeSlidingPitch                                           OFFSET(get<float>, {0x89C, 4, 0, 0})
	DMember(float)                                     SlopeSlidingRoll                                            OFFSET(get<float>, {0x8A0, 4, 0, 0})
	DMember(float)                                     RiderReferentialRidableYaw                                  OFFSET(get<float>, {0x8A4, 4, 0, 0})
	DMember(float)                                     AimYawDegreesCoverage                                       OFFSET(get<float>, {0x8A8, 4, 0, 0})
	DMember(float)                                     SmoothedAimYaw                                              OFFSET(get<float>, {0x8AC, 4, 0, 0})
	DMember(bool)                                      bJustEntered                                                OFFSET(get<bool>, {0x8B0, 1, 0, 0})
	DMember(bool)                                      bIsRidableMoving                                            OFFSET(get<bool>, {0x8B1, 1, 0, 0})
	DMember(bool)                                      bIsRideMode                                                 OFFSET(get<bool>, {0x8B2, 1, 0, 0})
	DMember(float)                                     RidableVelocity                                             OFFSET(get<float>, {0x8B4, 4, 0, 0})
	DMember(float)                                     BodyYaw                                                     OFFSET(get<float>, {0x8B8, 4, 0, 0})
	DMember(float)                                     BoostPlayRate                                               OFFSET(get<float>, {0x8BC, 4, 0, 0})
	DMember(float)                                     RidingMovePlayRate                                          OFFSET(get<float>, {0x8C0, 4, 0, 0})
	DMember(float)                                     FalseBlendTime                                              OFFSET(get<float>, {0x8C4, 4, 0, 0})
	DMember(float)                                     CombatToRideYaw                                             OFFSET(get<float>, {0x8C8, 4, 0, 0})
	DMember(float)                                     InPlaceYaw                                                  OFFSET(get<float>, {0x8CC, 4, 0, 0})
	DMember(float)                                     HeadAOAlpha                                                 OFFSET(get<float>, {0x8D0, 4, 0, 0})
	SMember(FRotator)                                  MeleeTwistRot                                               OFFSET(getStruct<T>, {0x8D8, 24, 0, 0})
	DMember(bool)                                      bIsDualWield                                                OFFSET(get<bool>, {0x8F0, 1, 0, 0})
	DMember(bool)                                      bIsOneHandedDualWield                                       OFFSET(get<bool>, {0x8F1, 1, 0, 0})
	DMember(bool)                                      bIsTwoHandedSword                                           OFFSET(get<bool>, {0x8F2, 1, 0, 0})
	DMember(bool)                                      bShouldAdjustBodyTwistForMelee                              OFFSET(get<bool>, {0x8F3, 1, 0, 0})
	SMember(FVector)                                   PlayerOffset                                                OFFSET(getStruct<T>, {0x8F8, 24, 0, 0})
	DMember(float)                                     NoiseAlpha                                                  OFFSET(get<float>, {0x910, 4, 0, 0})
	DMember(bool)                                      bIsLobsterBlockActive                                       OFFSET(get<bool>, {0x914, 1, 0, 0})
	DMember(float)                                     SlopePitch                                                  OFFSET(get<float>, {0x918, 4, 0, 0})
	DMember(float)                                     RiderHeightAdjustmentSpringConstant                         OFFSET(get<float>, {0x91C, 4, 0, 0})
	DMember(float)                                     MinSlopePitchForRiderHeightAdjustment                       OFFSET(get<float>, {0x920, 4, 0, 0})
	DMember(float)                                     MaxSlopePitchForRiderHeightAdjustment                       OFFSET(get<float>, {0x924, 4, 0, 0})
	DMember(float)                                     RiderHeightAdjustmentForMinSlopePitch                       OFFSET(get<float>, {0x928, 4, 0, 0})
	DMember(float)                                     RiderHeightAdjustmentForMaxSlopePitch                       OFFSET(get<float>, {0x92C, 4, 0, 0})
	DMember(float)                                     PettingRotAlpha                                             OFFSET(get<float>, {0x930, 4, 0, 0})
	SMember(FRotator)                                  PettingRot                                                  OFFSET(getStruct<T>, {0x938, 24, 0, 0})
	DMember(float)                                     PettingPitchFactor                                          OFFSET(get<float>, {0x950, 4, 0, 0})
	DMember(float)                                     PettingRollFactor                                           OFFSET(get<float>, {0x954, 4, 0, 0})
	SMember(FVector)                                   HandAttachLeft                                              OFFSET(getStruct<T>, {0x958, 24, 0, 0})
	SMember(FVector)                                   HandAttachRight                                             OFFSET(getStruct<T>, {0x970, 24, 0, 0})
	DMember(float)                                     HandAttachAlpha                                             OFFSET(get<float>, {0x988, 4, 0, 0})
	CMember(ERidingFootPhase)                          FootPhase                                                   OFFSET(get<T>, {0x98C, 1, 0, 0})
	DMember(bool)                                      bIsFootPhase_FeetInAir                                      OFFSET(get<bool>, {0x98D, 1, 0, 0})
	DMember(bool)                                      bIsFootPhase_FrontFeetPlanted                               OFFSET(get<bool>, {0x98E, 1, 0, 0})
	DMember(bool)                                      bIsFootPhase_BackFeetPlanted                                OFFSET(get<bool>, {0x98F, 1, 0, 0})
	DMember(bool)                                      bIsFootPhase_LeftBackFeetForward                            OFFSET(get<bool>, {0x990, 1, 0, 0})
	DMember(bool)                                      bIsFootPhase_RightBackFeetForward                           OFFSET(get<bool>, {0x991, 1, 0, 0})
	DMember(bool)                                      bIsFootPhase_LeftPlantedRightPass                           OFFSET(get<bool>, {0x992, 1, 0, 0})
	DMember(bool)                                      bIsFootPhase_RightPlantedLeftPass                           OFFSET(get<bool>, {0x993, 1, 0, 0})
	DMember(float)                                     TurnInPlaceModulatedSpeed                                   OFFSET(get<float>, {0x994, 4, 0, 0})
	DMember(bool)                                      bIsTurnInPlaceAngleDeltaPositive                            OFFSET(get<bool>, {0x998, 1, 0, 0})
	DMember(float)                                     SlopeRoll                                                   OFFSET(get<float>, {0x99C, 4, 0, 0})
	DMember(float)                                     MovingVelocityLowerBound                                    OFFSET(get<float>, {0x9A0, 4, 0, 0})
	DMember(float)                                     JustEnteredDelayTimeSec                                     OFFSET(get<float>, {0x9A4, 4, 0, 0})
	DMember(float)                                     FalseBlendTime_Moving                                       OFFSET(get<float>, {0x9A8, 4, 0, 0})
	DMember(float)                                     FalseBlendTime_NotMoving                                    OFFSET(get<float>, {0x9AC, 4, 0, 0})
	SMember(FVector)                                   PlayerOffsetMale                                            OFFSET(getStruct<T>, {0x9B0, 24, 0, 0})
	SMember(FVector)                                   PlayerOffsetFemale                                          OFFSET(getStruct<T>, {0x9C8, 24, 0, 0})
	SMember(FSoftObjectPath)                           ScytheMontage                                               OFFSET(getStruct<T>, {0x9E0, 24, 0, 0})
	SMember(FSoftObjectPath)                           BRSwordMontage                                              OFFSET(getStruct<T>, {0x9F8, 24, 0, 0})
	CMember(TEnumAsByte<EFortWeaponCoreAnimation>)     MeleeDualWieldCoreAnimation                                 OFFSET(get<T>, {0xA10, 1, 0, 0})
	SMember(FVector)                                   SlopePitchTraceStart                                        OFFSET(getStruct<T>, {0xA18, 24, 0, 0})
	SMember(FVector)                                   SlopePitchTraceEnd                                          OFFSET(getStruct<T>, {0xA30, 24, 0, 0})
	SMember(FVector)                                   HandAttachLocationLeftMale                                  OFFSET(getStruct<T>, {0xA48, 24, 0, 0})
	SMember(FVector)                                   HandAttachLocationRightMale                                 OFFSET(getStruct<T>, {0xA60, 24, 0, 0})
	SMember(FVector)                                   HandAttachLocationLeftFemale                                OFFSET(getStruct<T>, {0xA78, 24, 0, 0})
	SMember(FVector)                                   HandAttachLocationRightFemale                               OFFSET(getStruct<T>, {0xA90, 24, 0, 0})
	SMember(FName)                                     PlayerHandAttachLeft                                        OFFSET(getStruct<T>, {0xAA8, 4, 0, 0})
	SMember(FName)                                     PlayerHandAttachRight                                       OFFSET(getStruct<T>, {0xAAC, 4, 0, 0})
	SMember(FName)                                     DisableHandAttachCurveName                                  OFFSET(getStruct<T>, {0xAB0, 4, 0, 0})
	SMember(FName)                                     AllowRidingNoiseAdditiveCurveName                           OFFSET(getStruct<T>, {0xAB4, 4, 0, 0})


	/// Functions
	// Function /Script/RidingCodeRuntime.FortVehicleLayerAnimInstance_Riding.UpdateSlopePitchForRiding
	// void UpdateSlopePitchForRiding();                                                                                        // [0x697d1c8] Native|Event|Protected|BlueprintEvent 
	// Function /Script/RidingCodeRuntime.FortVehicleLayerAnimInstance_Riding.UpdateBoostPlayRate
	// void UpdateBoostPlayRate();                                                                                              // [0x697d1e0] Native|Event|Protected|BlueprintEvent 
	// Function /Script/RidingCodeRuntime.FortVehicleLayerAnimInstance_Riding.SetFootPhase
	// void SetFootPhase(ERidingFootPhase InFootPhase);                                                                         // [0xb4a3e68] Final|Native|Public|BlueprintCallable 
	// Function /Script/RidingCodeRuntime.FortVehicleLayerAnimInstance_Riding.PlaceHandIKTargets
	// void PlaceHandIKTargets();                                                                                               // [0x697d1b0] Native|Event|Protected|BlueprintEvent 
	// Function /Script/RidingCodeRuntime.FortVehicleLayerAnimInstance_Riding.BlueprintCollectRidableAnimBPData
	// void BlueprintCollectRidableAnimBPData(class UAnimInstance* RidableAnimInstance);                                        // [0x1340978] Event|Protected|BlueprintEvent 
};

/// Class /Script/RidingCodeRuntime.RidingCheatManager
/// Size: 0x0000 (0x000028 - 0x000028)
class URidingCheatManager : public UChildCheatManager
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/RidingCodeRuntime.RidingCheatManager.StopRidingActor
	// void StopRidingActor();                                                                                                  // [0x2491aa8] BlueprintAuthorityOnly|Exec|Native|Public 
	// Function /Script/RidingCodeRuntime.RidingCheatManager.StartRidingActor
	// void StartRidingActor();                                                                                                 // [0x329b518] BlueprintAuthorityOnly|Exec|Native|Public 
	// Function /Script/RidingCodeRuntime.RidingCheatManager.RidingSetStaminaPercent
	// void RidingSetStaminaPercent(float StaminaPercent);                                                                      // [0xb4a3c5c] BlueprintAuthorityOnly|Exec|Native|Public 
};

/// Class /Script/RidingCodeRuntime.RidableComponent
/// Size: 0x0370 (0x0000A0 - 0x000410)
class URidableComponent : public UGameFrameworkComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1040;

public:
	SMember(FMulticastInlineDelegate)                  OnRiderStartedRiding                                        OFFSET(getStruct<T>, {0xA8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnRiderStoppedRiding                                        OFFSET(getStruct<T>, {0xB8, 16, 0, 0})
	CMember(class UClass*)                             RiderAnimLayerOverlayClass                                  OFFSET(get<T>, {0xC8, 8, 0, 0})
	SMember(FName)                                     AttachSocket                                                OFFSET(getStruct<T>, {0xD0, 4, 0, 0})
	SMember(FVector)                                   AttachLocationOffset                                        OFFSET(getStruct<T>, {0xD8, 24, 0, 0})
	SMember(FRotator)                                  AttachRotationOffset                                        OFFSET(getStruct<T>, {0xF0, 24, 0, 0})
	SMember(FName)                                     ClientAttachGuideSocket                                     OFFSET(getStruct<T>, {0x108, 4, 0, 0})
	SMember(FVector)                                   ClientAttachGuideLocationOffset                             OFFSET(getStruct<T>, {0x110, 24, 0, 0})
	SMember(FName)                                     RidablePropAttachSocket                                     OFFSET(getStruct<T>, {0x128, 4, 0, 0})
	SMember(FVector)                                   RidablePropAttachLocationOffset                             OFFSET(getStruct<T>, {0x130, 24, 0, 0})
	SMember(FRotator)                                  RidablePropAttachRotationOffset                             OFFSET(getStruct<T>, {0x148, 24, 0, 0})
	DMember(float)                                     RidablePropAttachScale                                      OFFSET(get<float>, {0x160, 4, 0, 0})
	DMember(float)                                     RidablePropAttachRiderVerticalBuffer                        OFFSET(get<float>, {0x164, 4, 0, 0})
	SMember(FRidingAttachmentBoundsOverride)           RiderPropAttachBoundsOverride                               OFFSET(getStruct<T>, {0x168, 56, 0, 0})
	DMember(bool)                                      bOverrideNoiseGeneration                                    OFFSET(get<bool>, {0x1A0, 1, 0, 0})
	SMember(FFortPlayerPawnAthenaMovementNoiseOverride) RiderMovementNoiseOverride                                 OFFSET(getStruct<T>, {0x1A4, 12, 0, 0})
	DMember(bool)                                      bUsesCameraOverride                                         OFFSET(get<bool>, {0x1B0, 1, 0, 0})
	CMember(class UClass*)                             CameraModeClassOverride                                     OFFSET(get<T>, {0x1B8, 8, 0, 0})
	CMember(class UClass*)                             SprintCameraModeClassOverride                               OFFSET(get<T>, {0x1C0, 8, 0, 0})
	SMember(FScalableFloat)                            UseTargetingAdditionalViewTargetSpaceViewOffsetOverride     OFFSET(getStruct<T>, {0x1C8, 40, 0, 0})
	SMember(FInterpOffset)                             TargetingAdditionalViewTargetSpaceViewOffsetOverride        OFFSET(getStruct<T>, {0x1F0, 56, 0, 0})
	SMember(FVector)                                   WeaponTargetingSourceOffsetModifier                         OFFSET(getStruct<T>, {0x228, 24, 0, 0})
	SMember(FGameplayTag)                              RidableTag                                                  OFFSET(getStruct<T>, {0x240, 4, 0, 0})
	SMember(FGameplayTag)                              EnergyDepletedTag                                           OFFSET(getStruct<T>, {0x244, 4, 0, 0})
	SMember(FDataTableRowHandle)                       PlaylistTagBlacklistRowHandle                               OFFSET(getStruct<T>, {0x248, 16, 0, 0})
	CMember(class URiderComponent*)                    ActiveRider                                                 OFFSET(get<T>, {0x258, 8, 0, 0})
	CMember(class URiderComponent*)                    LastRider                                                   OFFSET(get<T>, {0x260, 8, 0, 0})
	CMember(class USceneComponent*)                    RidableProp                                                 OFFSET(get<T>, {0x268, 8, 0, 0})
	DMember(float)                                     OriginalCapsuleRadius                                       OFFSET(get<float>, {0x270, 4, 0, 0})
	DMember(float)                                     OriginalCapsuleHalfHeight                                   OFFSET(get<float>, {0x274, 4, 0, 0})
	DMember(float)                                     RidingCapsuleRadius                                         OFFSET(get<float>, {0x278, 4, 0, 0})
	DMember(float)                                     RidingCapsuleHalfHeight                                     OFFSET(get<float>, {0x27C, 4, 0, 0})
	DMember(bool)                                      bOriginalClientPositionSmoothingThrottlingSetting           OFFSET(get<bool>, {0x280, 1, 0, 0})
	DMember(bool)                                      LockRotationToRidableActor                                  OFFSET(get<bool>, {0x281, 1, 0, 0})
	SMember(FScalableFloat)                            MaxHalfAimingAngle                                          OFFSET(getStruct<T>, {0x288, 40, 0, 0})
	CMember(TArray<FPrimaryFireAnimMontageAnimCoreTypeOverride>) PrimaryFireMontageAnimCoreTypeOverrides           OFFSET(get<T>, {0x2B0, 16, 0, 0})
	CMember(TArray<FPrimaryFireAnimMontageTagOverride>) PrimaryFireMontageTagOverrides                             OFFSET(get<T>, {0x2C0, 16, 0, 0})
	SMember(FRidingPettingData)                        PettingData                                                 OFFSET(getStruct<T>, {0x2D0, 272, 0, 0})
	SMember(FTimerHandle)                              RestoreCollisionHandle                                      OFFSET(getStruct<T>, {0x3E0, 8, 0, 0})
	DMember(bool)                                      bIsSprinting                                                OFFSET(get<bool>, {0x3F8, 1, 0, 0})


	/// Functions
	// Function /Script/RidingCodeRuntime.RidableComponent.ShouldCameraFocusOnRidable
	// bool ShouldCameraFocusOnRidable(class URiderComponent* Rider);                                                           // [0xb4a3f68] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/RidingCodeRuntime.RidableComponent.OnRep_ActiveRider
	// void OnRep_ActiveRider();                                                                                                // [0xb4a3ac4] Final|Native|Protected 
	// Function /Script/RidingCodeRuntime.RidableComponent.IsSprinting
	// bool IsSprinting();                                                                                                      // [0xb4a36b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RidingCodeRuntime.RidableComponent.IsFlying
	// bool IsFlying();                                                                                                         // [0x33fe294] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RidingCodeRuntime.RidableComponent.IsBeingRidden
	// bool IsBeingRidden();                                                                                                    // [0xb4a3618] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RidingCodeRuntime.RidableComponent.HandleRiderStoppedRiding
	// void HandleRiderStoppedRiding(class URiderComponent* Rider);                                                             // [0x6cc408c] Native|Event|Protected|BlueprintEvent 
	// Function /Script/RidingCodeRuntime.RidableComponent.HandleRiderStartedRiding
	// void HandleRiderStartedRiding(class URiderComponent* Rider);                                                             // [0x6e87c98] Native|Event|Protected|BlueprintEvent 
	// Function /Script/RidingCodeRuntime.RidableComponent.HandleRiderEndPlay
	// void HandleRiderEndPlay(class AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason);                                 // [0xb4a31a4] Final|Native|Protected 
	// Function /Script/RidingCodeRuntime.RidableComponent.GetRidingEmoteCapsuleSize
	// void GetRidingEmoteCapsuleSize(class URiderComponent* Rider, float OriginalRadius, float OriginalHalfHeight, float& OutRadius, float& OutHalfHeight); // [0xb4a2864] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/RidingCodeRuntime.RidableComponent.GetRidingCapsuleSize
	// void GetRidingCapsuleSize(class URiderComponent* Rider, float OriginalRadius, float OriginalHalfHeight, float& OutRadius, float& OutHalfHeight); // [0xb4a26c8] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/RidingCodeRuntime.RidableComponent.GetRidingAttachComponent
	// class USceneComponent* GetRidingAttachComponent();                                                                       // [0xb4a26a0] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/RidingCodeRuntime.RidableComponent.GetPettingData
	// FRidingPettingData GetPettingData();                                                                                     // [0xb4a2684] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RidingCodeRuntime.RidableComponent.GetDismountLaunchVectorOverride
	// FVector GetDismountLaunchVectorOverride(class URiderComponent* Rider);                                                   // [0xb4a25dc] Native|Event|Public|HasDefaults|BlueprintEvent|Const 
	// Function /Script/RidingCodeRuntime.RidableComponent.CheatSetStaminaPercent
	// void CheatSetStaminaPercent(float StaminaPercent);                                                                       // [0x1340978] BlueprintAuthorityOnly|Event|Public|BlueprintEvent 
	// Function /Script/RidingCodeRuntime.RidableComponent.CanRiderPlayEmote
	// bool CanRiderPlayEmote(class URiderComponent* Rider);                                                                    // [0x99d49b4] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/RidingCodeRuntime.RidableComponent.CanBeRiddenBP
	// bool CanBeRiddenBP(class URiderComponent* Rider);                                                                        // [0xb4a2198] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/RidingCodeRuntime.RidableComponent.CanBePet
	// bool CanBePet(class URiderComponent* Rider);                                                                             // [0x91b4834] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
};

/// Class /Script/RidingCodeRuntime.ControllableRidableComponent
/// Size: 0x0318 (0x000410 - 0x000728)
class UControllableRidableComponent : public URidableComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1832;

public:
	DMember(bool)                                      bUseGravityJump                                             OFFSET(get<bool>, {0x410, 1, 0, 0})
	SMember(FGameplayTagQuery)                         IgnoreGravityJumpTagQuery                                   OFFSET(getStruct<T>, {0x418, 72, 0, 0})
	DMember(bool)                                      bIsControllable                                             OFFSET(get<bool>, {0x460, 1, 0, 0})
	DMember(bool)                                      bHasAbility                                                 OFFSET(get<bool>, {0x461, 1, 0, 0})
	SMember(FText)                                     AbilityDisplayText                                          OFFSET(getStruct<T>, {0x468, 16, 0, 0})
	DMember(bool)                                      bCanJump                                                    OFFSET(get<bool>, {0x478, 1, 0, 0})
	DMember(bool)                                      bAlwaysMoveForward                                          OFFSET(get<bool>, {0x479, 1, 0, 0})
	DMember(float)                                     ForwardMoveSpeedMultiplier                                  OFFSET(get<float>, {0x47C, 4, 0, 0})
	DMember(float)                                     BackwardMoveSpeedMultiplier                                 OFFSET(get<float>, {0x480, 4, 0, 0})
	DMember(float)                                     SidewaysMoveRotationOffset                                  OFFSET(get<float>, {0x484, 4, 0, 0})
	CMember(TEnumAsByte<EFortMovementUrgency>)         MovementUrgency                                             OFFSET(get<T>, {0x488, 1, 0, 0})
	DMember(bool)                                      bIsBeingControlled                                          OFFSET(get<bool>, {0x489, 1, 0, 0})
	SMember(FRidableControlParams)                     RidableControlParams                                        OFFSET(getStruct<T>, {0x4A8, 520, 0, 0})
	SMember(FScalableFloat)                            JumpUpwardGravityScale                                      OFFSET(getStruct<T>, {0x6D8, 40, 0, 0})
	SMember(FScalableFloat)                            JumpDownwardGravityScale                                    OFFSET(getStruct<T>, {0x700, 40, 0, 0})


	/// Functions
	// Function /Script/RidingCodeRuntime.ControllableRidableComponent.ServerDoJumpExit
	// void ServerDoJumpExit();                                                                                                 // [0x77bf9d4] Net|NetReliableNative|Event|Protected|NetServer|BlueprintCallable 
	// Function /Script/RidingCodeRuntime.ControllableRidableComponent.OnRep_IsBeingControlled
	// void OnRep_IsBeingControlled();                                                                                          // [0xb4a3b18] Final|Native|Protected 
	// Function /Script/RidingCodeRuntime.ControllableRidableComponent.OnCapsuleBeginOverlap
	// void OnCapsuleBeginOverlap(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0xb4a377c] Final|Native|Protected|HasOutParms 
	// Function /Script/RidingCodeRuntime.ControllableRidableComponent.IsSprintToggleable
	// bool IsSprintToggleable();                                                                                               // [0xb4a3634] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RidingCodeRuntime.ControllableRidableComponent.HandleJumpStopped
	// void HandleJumpStopped();                                                                                                // [0x1340978] Event|Public|BlueprintEvent 
	// Function /Script/RidingCodeRuntime.ControllableRidableComponent.HandleJumpStarted
	// void HandleJumpStarted();                                                                                                // [0x1340978] Event|Public|BlueprintEvent 
	// Function /Script/RidingCodeRuntime.ControllableRidableComponent.HandleJumpHeld
	// void HandleJumpHeld();                                                                                                   // [0x1340978] Event|Public|BlueprintEvent 
	// Function /Script/RidingCodeRuntime.ControllableRidableComponent.HandleCancelSprint
	// void HandleCancelSprint(bool bAbilityInputHeld, bool bForceCancel);                                                      // [0x1340978] Event|Public|BlueprintEvent 
	// Function /Script/RidingCodeRuntime.ControllableRidableComponent.HandleAbilityStopped
	// void HandleAbilityStopped();                                                                                             // [0x1340978] Event|Public|BlueprintEvent 
	// Function /Script/RidingCodeRuntime.ControllableRidableComponent.HandleAbilityStarted
	// void HandleAbilityStarted();                                                                                             // [0x1340978] Event|Public|BlueprintEvent 
	// Function /Script/RidingCodeRuntime.ControllableRidableComponent.HandleAbilityHeld
	// void HandleAbilityHeld();                                                                                                // [0x1340978] Event|Public|BlueprintEvent 
	// Function /Script/RidingCodeRuntime.ControllableRidableComponent.GetAbilityDisplayText
	// FText GetAbilityDisplayText();                                                                                           // [0xb4a2594] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RidingCodeRuntime.ControllableRidableComponent.CanStartSprinting
	// bool CanStartSprinting();                                                                                                // [0xb4a222c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RidingCodeRuntime.ControllableRidableComponent.CancelBuildBar
	// void CancelBuildBar();                                                                                                   // [0xb4a2250] Final|Native|Protected|BlueprintCallable 
	// Function /Script/RidingCodeRuntime.ControllableRidableComponent.CanBeControlled
	// bool CanBeControlled(class URiderComponent* Rider);                                                                      // [0xb4a2104] Native|Event|Public|BlueprintEvent|Const 
};

/// Class /Script/RidingCodeRuntime.RiderComponent
/// Size: 0x05F0 (0x0000A8 - 0x000698)
class URiderComponent : public UFortPawnOverrideComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1688;

public:
	SMember(FMulticastInlineDelegate)                  OnStartedRiding                                             OFFSET(getStruct<T>, {0xB0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnStoppedRiding                                             OFFSET(getStruct<T>, {0xC0, 16, 0, 0})
	CMember(class UClass*)                             RidingCameraModeClass                                       OFFSET(get<T>, {0xD0, 8, 0, 0})
	CMember(class UClass*)                             RidingSprintCameraModeClass                                 OFFSET(get<T>, {0xD8, 8, 0, 0})
	DMember(float)                                     RidingCameraModeBlendTime                                   OFFSET(get<float>, {0xE0, 4, 0, 0})
	SMember(FInterpOffset)                             TargetingAdditionalViewTargetSpaceViewOffset                OFFSET(getStruct<T>, {0xE8, 56, 0, 0})
	CMember(class UClass*)                             RiderPropClass                                              OFFSET(get<T>, {0x120, 8, 0, 0})
	CMember(class UClass*)                             RidablePropClass                                            OFFSET(get<T>, {0x128, 8, 0, 0})
	SMember(FVector)                                   RiderPropAttachLocationOffset                               OFFSET(getStruct<T>, {0x130, 24, 0, 0})
	SMember(FRotator)                                  RiderPropAttachRotationOffset                               OFFSET(getStruct<T>, {0x148, 24, 0, 0})
	DMember(float)                                     RiderPropAttachScale                                        OFFSET(get<float>, {0x160, 4, 0, 0})
	SMember(FName)                                     RiderPropAttachSocket                                       OFFSET(getStruct<T>, {0x164, 4, 0, 0})
	DMember(bool)                                      bUseClientAttachGuideSocket                                 OFFSET(get<bool>, {0x168, 1, 0, 0})
	SMember(FVector)                                   RiderPropAttachSoftBounds                                   OFFSET(getStruct<T>, {0x170, 24, 0, 0})
	DMember(float)                                     RiderPropAttachSoftBoundsScalar                             OFFSET(get<float>, {0x188, 4, 0, 0})
	SMember(FVector)                                   RiderPropAttachHardBounds                                   OFFSET(getStruct<T>, {0x190, 24, 0, 0})
	DMember(float)                                     RiderPropAttachSoftBoundsTargetingScalar                    OFFSET(get<float>, {0x1A8, 4, 0, 0})
	DMember(float)                                     RiderPropAttachHardBoundsTargetingScalar                    OFFSET(get<float>, {0x1AC, 4, 0, 0})
	DMember(float)                                     RiderPropAttachVerticalBufferTargetingScalar                OFFSET(get<float>, {0x1B0, 4, 0, 0})
	DMember(float)                                     RidingExitHoldTime                                          OFFSET(get<float>, {0x1B4, 4, 0, 0})
	SMember(FScalableFloat)                            TimeBeforeReenteringRiding                                  OFFSET(getStruct<T>, {0x1B8, 40, 0, 0})
	SMember(FGameplayTag)                              RidingExitStartedEventTag                                   OFFSET(getStruct<T>, {0x1E0, 4, 0, 0})
	SMember(FGameplayTag)                              RidingExitStoppedEventTag                                   OFFSET(getStruct<T>, {0x1E4, 4, 0, 0})
	CMember(class UFortInputMappingContext*)           RidingInputContext                                          OFFSET(get<T>, {0x1E8, 8, 0, 0})
	CMember(class UInputAction*)                       RidingExit                                                  OFFSET(get<T>, {0x1F0, 8, 0, 0})
	CMember(class UInputAction*)                       GamepadRidingExit                                           OFFSET(get<T>, {0x1F8, 8, 0, 0})
	CMember(class UFXSystemAsset*)                     ConnectorFXAsset                                            OFFSET(get<T>, {0x200, 8, 0, 0})
	SMember(FName)                                     ConnectorPropSourceMeshParameterName                        OFFSET(getStruct<T>, {0x208, 4, 0, 0})
	SMember(FName)                                     ConnectorPropTargetMeshParameterName                        OFFSET(getStruct<T>, {0x20C, 4, 0, 0})
	DMember(float)                                     SimulatedSmoothedRotationSpeed                              OFFSET(get<float>, {0x210, 4, 0, 0})
	SMember(FGameplayTagContainer)                     ExcludedEmoteTags                                           OFFSET(getStruct<T>, {0x218, 32, 0, 0})
	CMember(class URidableComponent*)                  ActiveRidable                                               OFFSET(get<T>, {0x240, 8, 0, 0})
	CMember(class URidableComponent*)                  LastRidable                                                 OFFSET(get<T>, {0x248, 8, 0, 0})
	CMember(class USceneComponent*)                    RiderProp                                                   OFFSET(get<T>, {0x250, 8, 0, 0})
	CMember(class UFXSystemComponent*)                 ConnectorProp                                               OFFSET(get<T>, {0x258, 8, 0, 0})
	SMember(FVector)                                   PropAttachSeparation                                        OFFSET(getStruct<T>, {0x260, 24, 0, 0})
	SMember(FVector)                                   AdditionalAttachOffset                                      OFFSET(getStruct<T>, {0x278, 24, 0, 0})
	SMember(FVector)                                   SoftBoundsAttachmentOffset                                  OFFSET(getStruct<T>, {0x290, 24, 0, 0})
	SMember(FVector)                                   HardBoundsAttachmentOffset                                  OFFSET(getStruct<T>, {0x2A8, 24, 0, 0})
	SMember(FDataTableRowHandle)                       PlaylistTagDenylistRowHandle                                OFFSET(getStruct<T>, {0x2C0, 16, 0, 0})
	CMember(class UFortInputComponent*)                RiderInputComponent                                         OFFSET(get<T>, {0x2D0, 8, 0, 0})
	SMember(FGameplayTagContainer)                     PendingFailedEmoteErrorTags                                 OFFSET(getStruct<T>, {0x2D8, 32, 0, 0})
	SMember(FRiderDismountLaunchVelocity)              ExitLaunchVelocity                                          OFFSET(getStruct<T>, {0x2F8, 168, 0, 0})
	SMember(FRiderDismountLaunchVelocity)              JumpExitLaunchVelocity                                      OFFSET(getStruct<T>, {0x3A0, 168, 0, 0})
	SMember(FRidingAnalyticsData_Stopped)              ActiveAnaltyicsData                                         OFFSET(getStruct<T>, {0x450, 128, 0, 0})
	SMember(FVector)                                   RidableLocationLastFrame                                    OFFSET(getStruct<T>, {0x4D0, 24, 0, 0})
	SMember(FTimerHandle)                              RestoreCollisionHandle                                      OFFSET(getStruct<T>, {0x4F0, 8, 0, 0})
	SMember(FRidableControlRuntimeData)                RidableControlRuntimeData                                   OFFSET(getStruct<T>, {0x4F8, 64, 0, 0})
	DMember(bool)                                      bIsSprintingReplay                                          OFFSET(get<bool>, {0x538, 1, 1, 0})
	CMember(TWeakObjectPtr<AFortPlayerController*>)    ClampedController                                           OFFSET(get<T>, {0x53C, 8, 0, 0})
	DMember(bool)                                      bIsPetting                                                  OFFSET(get<bool>, {0x544, 1, 0, 0})
	SMember(FScalableFloat)                            RidingCapsuleHalfHeight                                     OFFSET(getStruct<T>, {0x548, 40, 0, 0})
	SMember(FScalableFloat)                            RidingCapsuleRadius                                         OFFSET(getStruct<T>, {0x570, 40, 0, 0})
	SMember(FCollisionProfileName)                     CollisionProfileName                                        OFFSET(getStruct<T>, {0x5A8, 4, 0, 0})
	SMember(FScalableFloat)                            TraceRadius                                                 OFFSET(getStruct<T>, {0x5B0, 40, 0, 0})
	SMember(FScalableFloat)                            TraceLength                                                 OFFSET(getStruct<T>, {0x5D8, 40, 0, 0})
	DMember(bool)                                      bPreventExitRidingFromInput                                 OFFSET(get<bool>, {0x600, 1, 0, 0})


	/// Functions
	// Function /Script/RidingCodeRuntime.RiderComponent.StopRidingActor
	// bool StopRidingActor(bool bLaunchRider, bool bFindDismountLocation, bool bIsJumpExit);                                   // [0xb4a3ffc] BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/RidingCodeRuntime.RiderComponent.StartRidingActor
	// bool StartRidingActor(class AActor* TargetActor);                                                                        // [0x94956bc] BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/RidingCodeRuntime.RiderComponent.SetRidingInputEnabled
	// void SetRidingInputEnabled(bool bEnabled);                                                                               // [0xb4a3ee8] Final|Native|Public|BlueprintCallable 
	// Function /Script/RidingCodeRuntime.RiderComponent.ServerRidingExit
	// void ServerRidingExit();                                                                                                 // [0xb4a3ce0] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/RidingCodeRuntime.RiderComponent.OnRep_RidableControlRuntimeUpdated
	// void OnRep_RidableControlRuntimeUpdated();                                                                               // [0xb4a3bc0] Final|Native|Protected 
	// Function /Script/RidingCodeRuntime.RiderComponent.OnRep_IsSprintingReplay
	// void OnRep_IsSprintingReplay();                                                                                          // [0xb4a3b40] Final|Native|Protected 
	// Function /Script/RidingCodeRuntime.RiderComponent.OnRep_ActiveRidable
	// void OnRep_ActiveRidable();                                                                                              // [0xb4a3ab0] Final|Native|Protected 
	// Function /Script/RidingCodeRuntime.RiderComponent.OnMovementModeChanged
	// void OnMovementModeChanged(class ACharacter* InCharacter, TEnumAsByte<EMovementMode> PrevMovementMode, char PreviousCustomMode); // [0xb4a39a0] Final|Native|Protected 
	// Function /Script/RidingCodeRuntime.RiderComponent.IsRidingActor
	// bool IsRidingActor();                                                                                                    // [0x9861f24] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RidingCodeRuntime.RiderComponent.HandleStoppedRiding
	// void HandleStoppedRiding(class URidableComponent* Ridable);                                                              // [0x91b5708] Native|Event|Protected|BlueprintEvent 
	// Function /Script/RidingCodeRuntime.RiderComponent.HandleStartedRiding
	// void HandleStartedRiding(class URidableComponent* Ridable);                                                              // [0x6884458] Native|Event|Protected|BlueprintEvent 
	// Function /Script/RidingCodeRuntime.RiderComponent.HandleRidingExitReleased
	// void HandleRidingExitReleased();                                                                                         // [0xb4a35dc] Final|Native|Protected 
	// Function /Script/RidingCodeRuntime.RiderComponent.HandleRidingExitPressed
	// void HandleRidingExitPressed();                                                                                          // [0xb4a35c8] Final|Native|Protected 
	// Function /Script/RidingCodeRuntime.RiderComponent.HandleRiderTakenDamage
	// void HandleRiderTakenDamage(class AActor* DamageOnOwnerPawnDamageddActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, FVector HitLocation, class UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum); // [0xb4a3264] Final|Native|Protected|HasDefaults 
	// Function /Script/RidingCodeRuntime.RiderComponent.HandleRiderDidDamage
	// void HandleRiderDidDamage(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, FVector HitLocation, class UPrimitiveComponent* HitComponent, FName BoneName, FVector Momentum); // [0xb4a2e68] Final|Native|Protected|HasDefaults 
	// Function /Script/RidingCodeRuntime.RiderComponent.HandleRidableMovementModeChanged
	// void HandleRidableMovementModeChanged(class ACharacter* InCharacter, TEnumAsByte<EMovementMode> PrevMovementMode, char PreviousCustomMode); // [0xb4a2d6c] Final|Native|Protected 
	// Function /Script/RidingCodeRuntime.RiderComponent.HandleRidableFound
	// void HandleRidableFound(FHitResult& HitResult);                                                                          // [0x1340978] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/RidingCodeRuntime.RiderComponent.HandlePawnTeleported
	// void HandlePawnTeleported(class AFortPawn* TeleportedPawn);                                                              // [0xb4a2cd8] Final|Native|Protected 
	// Function /Script/RidingCodeRuntime.RiderComponent.HandlePawnDiedWhileRiding
	// void HandlePawnDiedWhileRiding(class AFortPawn* DeadPawn);                                                               // [0xb4a2c58] Final|Native|Protected 
	// Function /Script/RidingCodeRuntime.RiderComponent.HandleOnWeaponEquipped
	// void HandleOnWeaponEquipped(class AFortWeapon* NewWeapon, class AFortWeapon* PrevWeapon);                                // [0xb4a2b90] Final|Native|Protected 
	// Function /Script/RidingCodeRuntime.RiderComponent.HandleGamepadRidingExitReleased
	// void HandleGamepadRidingExitReleased();                                                                                  // [0xb4a2b7c] Final|Native|Protected 
	// Function /Script/RidingCodeRuntime.RiderComponent.HandleDeferredExitVelocity
	// void HandleDeferredExitVelocity(FVector ExitVelocity);                                                                   // [0xb4a2ad8] Final|Native|Protected|HasDefaults 
	// Function /Script/RidingCodeRuntime.RiderComponent.HandleDBNOWhileRiding
	// void HandleDBNOWhileRiding();                                                                                            // [0xb4a2ac4] Final|Native|Protected 
	// Function /Script/RidingCodeRuntime.RiderComponent.HandleActorEndPlayWhileRiding
	// void HandleActorEndPlayWhileRiding(class AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason);                      // [0xb4a2a00] Final|Native|Protected 
	// Function /Script/RidingCodeRuntime.RiderComponent.ClientNotifyEmoteFailure
	// void ClientNotifyEmoteFailure(FGameplayTagContainer ErrorTags);                                                          // [0xb4a2350] Net|NetReliableNative|Event|Protected|NetClient 
	// Function /Script/RidingCodeRuntime.RiderComponent.ClientHandleFinishedCharacterCustomization
	// void ClientHandleFinishedCharacterCustomization(class AFortPlayerPawn* PlayerPawn);                                      // [0xb4a22d0] Final|Native|Protected 
};

/// Class /Script/RidingCodeRuntime.ControllingRiderComponent
/// Size: 0x0058 (0x000698 - 0x0006F0)
class UControllingRiderComponent : public URiderComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1776;

public:
	CMember(class UFortInputMappingContext*)           ControllingRidingInputContext                               OFFSET(get<T>, {0x698, 8, 0, 0})
	CMember(class UInputAction*)                       RidingAbility                                               OFFSET(get<T>, {0x6A0, 8, 0, 0})
	CMember(class UInputAction*)                       GamepadRidingAbility                                        OFFSET(get<T>, {0x6A8, 8, 0, 0})
	DMember(bool)                                      bCanControlRidable                                          OFFSET(get<bool>, {0x6B0, 1, 0, 0})
	DMember(bool)                                      bIsControllingRidable                                       OFFSET(get<bool>, {0x6B1, 1, 0, 0})
	CMember(ERidingControlInputStyle)                  ControlInputStyle                                           OFFSET(get<T>, {0x6B2, 1, 0, 0})
	SMember(FRidingControlInputState)                  ReplicatedControlInputState                                 OFFSET(getStruct<T>, {0x6C0, 12, 0, 0})
	SMember(FRidingControlInputStateReliable)          ReplicatedControlInputStateReliable                         OFFSET(getStruct<T>, {0x6CC, 1, 0, 0})
	SMember(FRidingControlInputStateUnreliable)        ReplicatedControlInputStateUnreliable                       OFFSET(getStruct<T>, {0x6CD, 2, 0, 0})
	CMember(class UFortInputComponent*)                ControllingRiderInputComponent                              OFFSET(get<T>, {0x6D0, 8, 0, 0})
	DMember(float)                                     AutoRunDoubleTapTimestamp                                   OFFSET(get<float>, {0x6E8, 4, 0, 0})
	DMember(bool)                                      bCanBePet                                                   OFFSET(get<bool>, {0x6EC, 1, 0, 0})


	/// Functions
	// Function /Script/RidingCodeRuntime.ControllingRiderComponent.UpdateFromInput
	// void UpdateFromInput(float DeltaTime, FRidingControlInputState& InputState);                                             // [0xb4a4110] Native|Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/RidingCodeRuntime.ControllingRiderComponent.ServerUpdateControlInputStateUnreliable
	// void ServerUpdateControlInputStateUnreliable(FRidingControlInputStateUnreliable InputState);                             // [0xb4a3dc8] Net|Native|Event|Protected|NetServer|NetValidate 
	// Function /Script/RidingCodeRuntime.ControllingRiderComponent.ServerUpdateControlInputStateReliable
	// void ServerUpdateControlInputStateReliable(FRidingControlInputStateReliable InputState);                                 // [0xb4a3d2c] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/RidingCodeRuntime.ControllingRiderComponent.ServerCancelPetting
	// void ServerCancelPetting();                                                                                              // [0x934490c] Net|NetReliableNative|Event|Protected|NetServer 
	// Function /Script/RidingCodeRuntime.ControllingRiderComponent.ReloadPressed
	// void ReloadPressed();                                                                                                    // [0xb4a3c48] Final|Native|Protected 
	// Function /Script/RidingCodeRuntime.ControllingRiderComponent.OnSprintCanceled
	// void OnSprintCanceled();                                                                                                 // [0x9f2d19c] Net|NetReliableNative|Event|Protected|NetServer 
	// Function /Script/RidingCodeRuntime.ControllingRiderComponent.OnRep_IsControllingRidable
	// void OnRep_IsControllingRidable();                                                                                       // [0xb4a3b2c] Final|Native|Protected 
	// Function /Script/RidingCodeRuntime.ControllingRiderComponent.OnRep_ControlInputUnreliable
	// void OnRep_ControlInputUnreliable();                                                                                     // [0xb4a3af8] Final|Native|Protected 
	// Function /Script/RidingCodeRuntime.ControllingRiderComponent.OnRep_ControlInputReliable
	// void OnRep_ControlInputReliable();                                                                                       // [0xb4a3ad8] Final|Native|Protected 
	// Function /Script/RidingCodeRuntime.ControllingRiderComponent.IsTryingToMove
	// bool IsTryingToMove(float Tolerance);                                                                                    // [0xb4a36c8] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RidingCodeRuntime.ControllingRiderComponent.HandleSpotActorOrPettingAbilityReleased
	// void HandleSpotActorOrPettingAbilityReleased();                                                                          // [0xb4a3604] Final|Native|Protected 
	// Function /Script/RidingCodeRuntime.ControllingRiderComponent.HandleSpotActorOrPettingAbilityPressed
	// void HandleSpotActorOrPettingAbilityPressed();                                                                           // [0xb4a35f0] Final|Native|Protected 
	// Function /Script/RidingCodeRuntime.ControllingRiderComponent.HandleRidingAbilityReleased
	// void HandleRidingAbilityReleased();                                                                                      // [0xb4a35b4] Final|Native|Protected 
	// Function /Script/RidingCodeRuntime.ControllingRiderComponent.HandleRidingAbilityPressed
	// void HandleRidingAbilityPressed();                                                                                       // [0xb4a35a0] Final|Native|Protected 
	// Function /Script/RidingCodeRuntime.ControllingRiderComponent.HandleRequestPettingStop
	// void HandleRequestPettingStop();                                                                                         // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Script/RidingCodeRuntime.ControllingRiderComponent.HandleRequestPettingStart
	// void HandleRequestPettingStart();                                                                                        // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Script/RidingCodeRuntime.ControllingRiderComponent.HandlePettingAbilityPressed
	// void HandlePettingAbilityPressed();                                                                                      // [0xb4a2d58] Final|Native|Protected 
	// Function /Script/RidingCodeRuntime.ControllingRiderComponent.HandleGamepadRidingAbilityPressed
	// void HandleGamepadRidingAbilityPressed();                                                                                // [0xb4a2b68] Final|Native|Protected 
	// Function /Script/RidingCodeRuntime.ControllingRiderComponent.GetControlInputState
	// FRidingControlInputState GetControlInputState();                                                                         // [0xb4a25b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RidingCodeRuntime.ControllingRiderComponent.ControllingActor_OnMoveRight
	// void ControllingActor_OnMoveRight(float Val);                                                                            // [0xb4a2514] Final|Native|Protected 
	// Function /Script/RidingCodeRuntime.ControllingRiderComponent.ControllingActor_OnMoveForward
	// void ControllingActor_OnMoveForward(float Val);                                                                          // [0xb4a2494] Final|Native|Protected 
	// Function /Script/RidingCodeRuntime.ControllingRiderComponent.ControllingActor_OnJumpInput
	// void ControllingActor_OnJumpInput(bool bPressed);                                                                        // [0xb4a2414] Final|Native|Protected 
};

/// Class /Script/RidingCodeRuntime.FortCameraMode_Riding
/// Size: 0x0020 (0x001CD0 - 0x001CF0)
class UFortCameraMode_Riding : public UFortCameraMode_ThirdPerson
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 7408;

public:
	SMember(FVector)                                   OriginOffset                                                OFFSET(getStruct<T>, {0x1CD0, 24, 0, 0})
};

/// Class /Script/RidingCodeRuntime.RidingGameStateMutator
/// Size: 0x0000 (0x000338 - 0x000338)
class ARidingGameStateMutator : public AFortAthenaMutator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 824;

public:
};

/// Class /Script/RidingCodeRuntime.RidingAnalytics
/// Size: 0x0000 (0x000028 - 0x000028)
class URidingAnalytics : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/RidingCodeRuntime.FortAthenaPettingWildlifeTelemetryData
/// Size: 0x0008 (0x000028 - 0x000030)
class UFortAthenaPettingWildlifeTelemetryData : public UFortAthenaAITelemetryData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(int32_t)                                   PetCount                                                    OFFSET(get<int32_t>, {0x28, 4, 0, 0})


	/// Functions
	// Function /Script/RidingCodeRuntime.FortAthenaPettingWildlifeTelemetryData.OnPetted
	// void OnPetted();                                                                                                         // [0xb4a3a9c] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/RidingCodeRuntime.RidingControlInputStateReliable
/// Size: 0x0001 (0x000000 - 0x000001)
class FRidingControlInputStateReliable : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
	DMember(bool)                                      bIsJumping                                                  OFFSET(get<bool>, {0x0, 1, 1, 0})
	DMember(bool)                                      bIsUsingAbility                                             OFFSET(get<bool>, {0x0, 1, 1, 1})
	DMember(bool)                                      bIsPetting                                                  OFFSET(get<bool>, {0x0, 1, 1, 2})
};

/// Struct /Script/RidingCodeRuntime.RidingControlInputStateUnreliable
/// Size: 0x0002 (0x000000 - 0x000002)
class FRidingControlInputStateUnreliable : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2;

public:
	DMember(char)                                      RightAlphaQuantized                                         OFFSET(get<char>, {0x0, 1, 0, 0})
	DMember(char)                                      ForwardAlphaQuantized                                       OFFSET(get<char>, {0x1, 1, 0, 0})
};

/// Struct /Script/RidingCodeRuntime.RidingControlInputState
/// Size: 0x000C (0x000000 - 0x00000C)
class FRidingControlInputState : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(float)                                     RightAlpha                                                  OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     ForwardAlpha                                                OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(bool)                                      bIsJumping                                                  OFFSET(get<bool>, {0x8, 1, 1, 0})
	DMember(bool)                                      bIsUsingAbility                                             OFFSET(get<bool>, {0x8, 1, 1, 2})
	DMember(bool)                                      bIsPetting                                                  OFFSET(get<bool>, {0x8, 1, 1, 4})
};

/// Struct /Script/RidingCodeRuntime.RidingPlaylistBlacklistTableRow
/// Size: 0x0020 (0x000008 - 0x000028)
class FRidingPlaylistBlacklistTableRow : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FGameplayTagContainer)                     PlaylistTags                                                OFFSET(getStruct<T>, {0x8, 32, 0, 0})
};

/// Struct /Script/RidingCodeRuntime.PrimaryFireAnimMontageAnimCoreTypeOverride
/// Size: 0x0060 (0x000000 - 0x000060)
class FPrimaryFireAnimMontageAnimCoreTypeOverride : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(TEnumAsByte<EFortWeaponCoreAnimation>)     CoreTypeToOverride                                          OFFSET(get<T>, {0x0, 1, 0, 0})
	SMember(FFortGameplayAbilityMontageInfo)           OverridingMontageInfo                                       OFFSET(getStruct<T>, {0x8, 88, 0, 0})
};

/// Struct /Script/RidingCodeRuntime.PrimaryFireAnimMontageTagOverride
/// Size: 0x0060 (0x000000 - 0x000060)
class FPrimaryFireAnimMontageTagOverride : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FGameplayTag)                              TagOverride                                                 OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FFortGameplayAbilityMontageInfo)           OverridingMontageInfo                                       OFFSET(getStruct<T>, {0x8, 88, 0, 0})
};

/// Struct /Script/RidingCodeRuntime.RidingAttachmentBoundsOverride
/// Size: 0x0038 (0x000000 - 0x000038)
class FRidingAttachmentBoundsOverride : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(bool)                                      bUseOverride                                                OFFSET(get<bool>, {0x0, 1, 0, 0})
	SMember(FVector)                                   AttachSoftBounds                                            OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	SMember(FVector)                                   AttachHardBounds                                            OFFSET(getStruct<T>, {0x20, 24, 0, 0})
};

/// Struct /Script/RidingCodeRuntime.RidingPettingData
/// Size: 0x0110 (0x000000 - 0x000110)
class FRidingPettingData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
	DMember(bool)                                      bIsPettableCreature                                         OFFSET(get<bool>, {0x0, 1, 0, 0})
	SMember(FFortGameplayAbilityMontageInfo)           RiderMalePettingMontageInfo                                 OFFSET(getStruct<T>, {0x8, 88, 0, 0})
	SMember(FFortGameplayAbilityMontageInfo)           RiderFemalePettingMontageInfo                               OFFSET(getStruct<T>, {0x60, 88, 0, 0})
	SMember(FFortGameplayAbilityMontageInfo)           RidablePettingMontageInfo                                   OFFSET(getStruct<T>, {0xB8, 88, 0, 0})
};

/// Struct /Script/RidingCodeRuntime.RiderDismountLaunchVelocity
/// Size: 0x00A8 (0x000000 - 0x0000A8)
class FRiderDismountLaunchVelocity : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	SMember(FScalableFloat)                            DismountVelocityMultiplier                                  OFFSET(getStruct<T>, {0x0, 40, 0, 0})
	SMember(FScalableFloat)                            DismountVelocityBaseForwardVelocity                         OFFSET(getStruct<T>, {0x28, 40, 0, 0})
	SMember(FScalableFloat)                            DismountVelocityBaseRightVelocity                           OFFSET(getStruct<T>, {0x50, 40, 0, 0})
	SMember(FScalableFloat)                            DismountVelocityBaseUpVelocity                              OFFSET(getStruct<T>, {0x78, 40, 0, 0})
	DMember(bool)                                      bApplyDismountVelocityMultiplierToZVelocity                 OFFSET(get<bool>, {0xA0, 1, 0, 0})
};

/// Struct /Script/RidingCodeRuntime.RidingAnalyticsData_Base
/// Size: 0x0048 (0x000000 - 0x000048)
class FRidingAnalyticsData_Base : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(TWeakObjectPtr<URiderComponent*>)          Rider                                                       OFFSET(get<T>, {0x8, 32, 0, 0})
	CMember(TWeakObjectPtr<URidableComponent*>)        Ridable                                                     OFFSET(get<T>, {0x28, 32, 0, 0})
};

/// Struct /Script/RidingCodeRuntime.RidingAnalyticsData_Started
/// Size: 0x0000 (0x000048 - 0x000048)
class FRidingAnalyticsData_Started : public FRidingAnalyticsData_Base
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Struct /Script/RidingCodeRuntime.RidingAnalyticsData_Stopped
/// Size: 0x0038 (0x000048 - 0x000080)
class FRidingAnalyticsData_Stopped : public FRidingAnalyticsData_Base
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	DMember(float)                                     TotalRidingTime                                             OFFSET(get<float>, {0x48, 4, 0, 0})
	DMember(float)                                     RiderStartHealth                                            OFFSET(get<float>, {0x4C, 4, 0, 0})
	DMember(float)                                     RiderStartShield                                            OFFSET(get<float>, {0x50, 4, 0, 0})
	DMember(float)                                     RiderEndHealth                                              OFFSET(get<float>, {0x54, 4, 0, 0})
	DMember(float)                                     RiderEndShield                                              OFFSET(get<float>, {0x58, 4, 0, 0})
	DMember(float)                                     TotalDistanceTraveled                                       OFFSET(get<float>, {0x5C, 4, 0, 0})
	DMember(int32_t)                                   JumpUseCount                                                OFFSET(get<int32_t>, {0x60, 4, 0, 0})
	DMember(int32_t)                                   AbilityUseCount                                             OFFSET(get<int32_t>, {0x64, 4, 0, 0})
	DMember(float)                                     RiderDamageDealt                                            OFFSET(get<float>, {0x68, 4, 0, 0})
	DMember(float)                                     RiderDamageTaken                                            OFFSET(get<float>, {0x6C, 4, 0, 0})
	DMember(float)                                     RiderHealingReceived                                        OFFSET(get<float>, {0x70, 4, 0, 0})
	DMember(float)                                     RiderShieldGained                                           OFFSET(get<float>, {0x74, 4, 0, 0})
	DMember(bool)                                      bRidableEliminated                                          OFFSET(get<bool>, {0x78, 1, 1, 0})
	DMember(bool)                                      bRidableExhausted                                           OFFSET(get<bool>, {0x78, 1, 1, 1})
};

/// Enum /Script/RidingCodeRuntime.ERidingControlInputStyle
/// Size: 0x03
enum class ERidingControlInputStyle : uint8_t
{
	ERidingControlInputStyle__SteeringControl                                        = 0,
	ERidingControlInputStyle__DirectControl                                          = 1,
	ERidingControlInputStyle__ERidingControlInputStyle_MAX                           = 2
};

