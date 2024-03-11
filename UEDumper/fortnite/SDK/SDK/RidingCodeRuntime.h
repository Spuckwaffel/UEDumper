
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: EnhancedInput
/// dependency: FortniteAI
/// dependency: FortniteGame
/// dependency: GameplayAbilities
/// dependency: GameplayTags
/// dependency: ModularGameplay

/// Enum /Script/RidingCodeRuntime.ERidingControlInputStyle
/// Size: 0x03
enum class ERidingControlInputStyle : uint8_t
{
	ERidingControlInputStyle__SteeringControl                                        = 0,
	ERidingControlInputStyle__DirectControl                                          = 1,
	ERidingControlInputStyle__ERidingControlInputStyle_MAX                           = 2
};

/// Class /Script/RidingCodeRuntime.FortVehicleLayerAnimInstance_Riding
/// Size: 0x02C0 (0x000830 - 0x000AF0)
class UFortVehicleLayerAnimInstance_Riding : public UFortVehicleOccupantAnimInstance
{ 
public:
	FCachedAnimRelevancyData                           IntoVehicleCachedData;                                      // 0x0830   (0x0014)  
	FCachedAnimRelevancyData                           OutOfVehicleCachedData;                                     // 0x0844   (0x0014)  
	float                                              InTime;                                                     // 0x0858   (0x0004)  
	float                                              OutTime;                                                    // 0x085C   (0x0004)  
	float                                              BodyYawOffset;                                              // 0x0860   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0864   (0x0004)  MISSED
	FRotator                                           BodyCounterRotation;                                        // 0x0868   (0x0018)  
	float                                              BodyCounterRotationAlpha;                                   // 0x0880   (0x0004)  
	bool                                               bIsReloading;                                               // 0x0884   (0x0001)  
	bool                                               bIsTargeting;                                               // 0x0885   (0x0001)  
	bool                                               bIsFiring;                                                  // 0x0886   (0x0001)  
	bool                                               bIsUsingConsumable;                                         // 0x0887   (0x0001)  
	bool                                               bIsInAction;                                                // 0x0888   (0x0001)  
	bool                                               bIsThrowConsumable;                                         // 0x0889   (0x0001)  
	bool                                               bIsTargetingOrThrowingConsumable;                           // 0x088A   (0x0001)  
	bool                                               bIsTurningInPlace;                                          // 0x088B   (0x0001)  
	bool                                               bIsRidingSprinting;                                         // 0x088C   (0x0001)  
	bool                                               bIsRidingPetting;                                           // 0x088D   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x088E   (0x0002)  MISSED
	float                                              TurnInPlaceRotationSpeed;                                   // 0x0890   (0x0004)  
	float                                              TurnInPlaceAngleDelta;                                      // 0x0894   (0x0004)  
	bool                                               bIsRidingMovingBackward;                                    // 0x0898   (0x0001)  
	bool                                               bIsSlopeSliding;                                            // 0x0899   (0x0001)  
	unsigned char                                      UnknownData02_5[0x2];                                       // 0x089A   (0x0002)  MISSED
	float                                              SlopeSlidingPitch;                                          // 0x089C   (0x0004)  
	float                                              SlopeSlidingRoll;                                           // 0x08A0   (0x0004)  
	float                                              RiderReferentialRidableYaw;                                 // 0x08A4   (0x0004)  
	float                                              AimYawDegreesCoverage;                                      // 0x08A8   (0x0004)  
	float                                              SmoothedAimYaw;                                             // 0x08AC   (0x0004)  
	bool                                               bJustEntered;                                               // 0x08B0   (0x0001)  
	bool                                               bIsRidableMoving;                                           // 0x08B1   (0x0001)  
	bool                                               bIsRideMode;                                                // 0x08B2   (0x0001)  
	unsigned char                                      UnknownData03_5[0x1];                                       // 0x08B3   (0x0001)  MISSED
	float                                              RidableVelocity;                                            // 0x08B4   (0x0004)  
	float                                              BodyYaw;                                                    // 0x08B8   (0x0004)  
	float                                              BoostPlayRate;                                              // 0x08BC   (0x0004)  
	float                                              RidingMovePlayRate;                                         // 0x08C0   (0x0004)  
	float                                              FalseBlendTime;                                             // 0x08C4   (0x0004)  
	float                                              CombatToRideYaw;                                            // 0x08C8   (0x0004)  
	float                                              InPlaceYaw;                                                 // 0x08CC   (0x0004)  
	float                                              HeadAOAlpha;                                                // 0x08D0   (0x0004)  
	unsigned char                                      UnknownData04_5[0x4];                                       // 0x08D4   (0x0004)  MISSED
	FRotator                                           MeleeTwistRot;                                              // 0x08D8   (0x0018)  
	bool                                               bIsDualWield;                                               // 0x08F0   (0x0001)  
	bool                                               bIsOneHandedDualWield;                                      // 0x08F1   (0x0001)  
	bool                                               bIsTwoHandedSword;                                          // 0x08F2   (0x0001)  
	bool                                               bShouldAdjustBodyTwistForMelee;                             // 0x08F3   (0x0001)  
	unsigned char                                      UnknownData05_5[0x4];                                       // 0x08F4   (0x0004)  MISSED
	FVector                                            PlayerOffset;                                               // 0x08F8   (0x0018)  
	float                                              NoiseAlpha;                                                 // 0x0910   (0x0004)  
	bool                                               bIsLobsterBlockActive;                                      // 0x0914   (0x0001)  
	unsigned char                                      UnknownData06_5[0x3];                                       // 0x0915   (0x0003)  MISSED
	float                                              SlopePitch;                                                 // 0x0918   (0x0004)  
	float                                              RiderHeightAdjustmentSpringConstant;                        // 0x091C   (0x0004)  
	float                                              MinSlopePitchForRiderHeightAdjustment;                      // 0x0920   (0x0004)  
	float                                              MaxSlopePitchForRiderHeightAdjustment;                      // 0x0924   (0x0004)  
	float                                              RiderHeightAdjustmentForMinSlopePitch;                      // 0x0928   (0x0004)  
	float                                              RiderHeightAdjustmentForMaxSlopePitch;                      // 0x092C   (0x0004)  
	float                                              PettingRotAlpha;                                            // 0x0930   (0x0004)  
	unsigned char                                      UnknownData07_5[0x4];                                       // 0x0934   (0x0004)  MISSED
	FRotator                                           PettingRot;                                                 // 0x0938   (0x0018)  
	float                                              PettingPitchFactor;                                         // 0x0950   (0x0004)  
	float                                              PettingRollFactor;                                          // 0x0954   (0x0004)  
	FVector                                            HandAttachLeft;                                             // 0x0958   (0x0018)  
	FVector                                            HandAttachRight;                                            // 0x0970   (0x0018)  
	float                                              HandAttachAlpha;                                            // 0x0988   (0x0004)  
	ERidingFootPhase                                   FootPhase;                                                  // 0x098C   (0x0001)  
	bool                                               bIsFootPhase_FeetInAir;                                     // 0x098D   (0x0001)  
	bool                                               bIsFootPhase_FrontFeetPlanted;                              // 0x098E   (0x0001)  
	bool                                               bIsFootPhase_BackFeetPlanted;                               // 0x098F   (0x0001)  
	bool                                               bIsFootPhase_LeftBackFeetForward;                           // 0x0990   (0x0001)  
	bool                                               bIsFootPhase_RightBackFeetForward;                          // 0x0991   (0x0001)  
	bool                                               bIsFootPhase_LeftPlantedRightPass;                          // 0x0992   (0x0001)  
	bool                                               bIsFootPhase_RightPlantedLeftPass;                          // 0x0993   (0x0001)  
	float                                              TurnInPlaceModulatedSpeed;                                  // 0x0994   (0x0004)  
	bool                                               bIsTurnInPlaceAngleDeltaPositive;                           // 0x0998   (0x0001)  
	unsigned char                                      UnknownData08_5[0x3];                                       // 0x0999   (0x0003)  MISSED
	float                                              SlopeRoll;                                                  // 0x099C   (0x0004)  
	float                                              MovingVelocityLowerBound;                                   // 0x09A0   (0x0004)  
	float                                              JustEnteredDelayTimeSec;                                    // 0x09A4   (0x0004)  
	float                                              FalseBlendTime_Moving;                                      // 0x09A8   (0x0004)  
	float                                              FalseBlendTime_NotMoving;                                   // 0x09AC   (0x0004)  
	FVector                                            PlayerOffsetMale;                                           // 0x09B0   (0x0018)  
	FVector                                            PlayerOffsetFemale;                                         // 0x09C8   (0x0018)  
	FSoftObjectPath                                    ScytheMontage;                                              // 0x09E0   (0x0018)  
	FSoftObjectPath                                    BRSwordMontage;                                             // 0x09F8   (0x0018)  
	SDK_UNDEFINED(1,11330) /* TEnumAsByte<EFortWeaponCoreAnimation> */ __um(MeleeDualWieldCoreAnimation);          // 0x0A10   (0x0001)  
	unsigned char                                      UnknownData09_5[0x7];                                       // 0x0A11   (0x0007)  MISSED
	FVector                                            SlopePitchTraceStart;                                       // 0x0A18   (0x0018)  
	FVector                                            SlopePitchTraceEnd;                                         // 0x0A30   (0x0018)  
	FVector                                            HandAttachLocationLeftMale;                                 // 0x0A48   (0x0018)  
	FVector                                            HandAttachLocationRightMale;                                // 0x0A60   (0x0018)  
	FVector                                            HandAttachLocationLeftFemale;                               // 0x0A78   (0x0018)  
	FVector                                            HandAttachLocationRightFemale;                              // 0x0A90   (0x0018)  
	FName                                              PlayerHandAttachLeft;                                       // 0x0AA8   (0x0004)  
	FName                                              PlayerHandAttachRight;                                      // 0x0AAC   (0x0004)  
	FName                                              DisableHandAttachCurveName;                                 // 0x0AB0   (0x0004)  
	FName                                              AllowRidingNoiseAdditiveCurveName;                          // 0x0AB4   (0x0004)  
	unsigned char                                      UnknownData10_6[0x38];                                      // 0x0AB8   (0x0038)  MISSED


	/// Functions
	// Function /Script/RidingCodeRuntime.FortVehicleLayerAnimInstance_Riding.UpdateSlopePitchForRiding
	// void UpdateSlopePitchForRiding();                                                                                     // [0x6818a30] Native|Event|Protected|BlueprintEvent 
	// Function /Script/RidingCodeRuntime.FortVehicleLayerAnimInstance_Riding.UpdateBoostPlayRate
	// void UpdateBoostPlayRate();                                                                                           // [0x6813fdc] Native|Event|Protected|BlueprintEvent 
	// Function /Script/RidingCodeRuntime.FortVehicleLayerAnimInstance_Riding.SetFootPhase
	// void SetFootPhase(ERidingFootPhase InFootPhase);                                                                      // [0xa31cd58] Final|Native|Public|BlueprintCallable 
	// Function /Script/RidingCodeRuntime.FortVehicleLayerAnimInstance_Riding.PlaceHandIKTargets
	// void PlaceHandIKTargets();                                                                                            // [0x6813ff4] Native|Event|Protected|BlueprintEvent 
	// Function /Script/RidingCodeRuntime.FortVehicleLayerAnimInstance_Riding.BlueprintCollectRidableAnimBPData
	// void BlueprintCollectRidableAnimBPData(class UAnimInstance* RidableAnimInstance);                                     // [0x18a39e4] Event|Protected|BlueprintEvent 
};

/// Class /Script/RidingCodeRuntime.RidingCheatManager
/// Size: 0x0000 (0x000028 - 0x000028)
class URidingCheatManager : public UChildCheatManager
{ 
public:


	/// Functions
	// Function /Script/RidingCodeRuntime.RidingCheatManager.StopRidingActor
	// void StopRidingActor();                                                                                               // [0x1c791ec] BlueprintAuthorityOnly|Exec|Native|Public 
	// Function /Script/RidingCodeRuntime.RidingCheatManager.StartRidingActor
	// void StartRidingActor();                                                                                              // [0x35bd900] BlueprintAuthorityOnly|Exec|Native|Public 
	// Function /Script/RidingCodeRuntime.RidingCheatManager.RidingSetStaminaPercent
	// void RidingSetStaminaPercent(float StaminaPercent);                                                                   // [0xa31c9ec] BlueprintAuthorityOnly|Exec|Native|Public 
};

/// Struct /Script/RidingCodeRuntime.RidingAttachmentBoundsOverride
/// Size: 0x0038 (0x000000 - 0x000038)
struct FRidingAttachmentBoundsOverride
{ 
	bool                                               bUseOverride;                                               // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	FVector                                            AttachSoftBounds;                                           // 0x0008   (0x0018)  
	FVector                                            AttachHardBounds;                                           // 0x0020   (0x0018)  
};

/// Struct /Script/RidingCodeRuntime.PrimaryFireAnimMontageAnimCoreTypeOverride
/// Size: 0x0060 (0x000000 - 0x000060)
struct FPrimaryFireAnimMontageAnimCoreTypeOverride
{ 
	SDK_UNDEFINED(1,11331) /* TEnumAsByte<EFortWeaponCoreAnimation> */ __um(CoreTypeToOverride);                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	FFortGameplayAbilityMontageInfo                    OverridingMontageInfo;                                      // 0x0008   (0x0058)  
};

/// Struct /Script/RidingCodeRuntime.PrimaryFireAnimMontageTagOverride
/// Size: 0x0060 (0x000000 - 0x000060)
struct FPrimaryFireAnimMontageTagOverride
{ 
	FGameplayTag                                       TagOverride;                                                // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	FFortGameplayAbilityMontageInfo                    OverridingMontageInfo;                                      // 0x0008   (0x0058)  
};

/// Struct /Script/RidingCodeRuntime.RidingPettingData
/// Size: 0x0110 (0x000000 - 0x000110)
struct FRidingPettingData
{ 
	bool                                               bIsPettableCreature;                                        // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	FFortGameplayAbilityMontageInfo                    RiderMalePettingMontageInfo;                                // 0x0008   (0x0058)  
	FFortGameplayAbilityMontageInfo                    RiderFemalePettingMontageInfo;                              // 0x0060   (0x0058)  
	FFortGameplayAbilityMontageInfo                    RidablePettingMontageInfo;                                  // 0x00B8   (0x0058)  
};

/// Class /Script/RidingCodeRuntime.RidableComponent
/// Size: 0x0370 (0x0000A0 - 0x000410)
class URidableComponent : public UGameFrameworkComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x00A0   (0x0008)  MISSED
	SDK_UNDEFINED(16,11332) /* FMulticastInlineDelegate */ __um(OnRiderStartedRiding);                             // 0x00A8   (0x0010)  
	SDK_UNDEFINED(16,11333) /* FMulticastInlineDelegate */ __um(OnRiderStoppedRiding);                             // 0x00B8   (0x0010)  
	class UClass*                                      RiderAnimLayerOverlayClass;                                 // 0x00C8   (0x0008)  
	FName                                              AttachSocket;                                               // 0x00D0   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x00D4   (0x0004)  MISSED
	FVector                                            AttachLocationOffset;                                       // 0x00D8   (0x0018)  
	FRotator                                           AttachRotationOffset;                                       // 0x00F0   (0x0018)  
	FName                                              ClientAttachGuideSocket;                                    // 0x0108   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x010C   (0x0004)  MISSED
	FVector                                            ClientAttachGuideLocationOffset;                            // 0x0110   (0x0018)  
	FName                                              RidablePropAttachSocket;                                    // 0x0128   (0x0004)  
	unsigned char                                      UnknownData03_5[0x4];                                       // 0x012C   (0x0004)  MISSED
	FVector                                            RidablePropAttachLocationOffset;                            // 0x0130   (0x0018)  
	FRotator                                           RidablePropAttachRotationOffset;                            // 0x0148   (0x0018)  
	float                                              RidablePropAttachScale;                                     // 0x0160   (0x0004)  
	float                                              RidablePropAttachRiderVerticalBuffer;                       // 0x0164   (0x0004)  
	FRidingAttachmentBoundsOverride                    RiderPropAttachBoundsOverride;                              // 0x0168   (0x0038)  
	bool                                               bOverrideNoiseGeneration;                                   // 0x01A0   (0x0001)  
	unsigned char                                      UnknownData04_5[0x3];                                       // 0x01A1   (0x0003)  MISSED
	FFortPlayerPawnAthenaMovementNoiseOverride         RiderMovementNoiseOverride;                                 // 0x01A4   (0x000C)  
	bool                                               bUsesCameraOverride;                                        // 0x01B0   (0x0001)  
	unsigned char                                      UnknownData05_5[0x7];                                       // 0x01B1   (0x0007)  MISSED
	class UClass*                                      CameraModeClassOverride;                                    // 0x01B8   (0x0008)  
	class UClass*                                      SprintCameraModeClassOverride;                              // 0x01C0   (0x0008)  
	FScalableFloat                                     UseTargetingAdditionalViewTargetSpaceViewOffsetOverride;    // 0x01C8   (0x0028)  
	FInterpOffset                                      TargetingAdditionalViewTargetSpaceViewOffsetOverride;       // 0x01F0   (0x0038)  
	FVector                                            WeaponTargetingSourceOffsetModifier;                        // 0x0228   (0x0018)  
	FGameplayTag                                       RidableTag;                                                 // 0x0240   (0x0004)  
	FGameplayTag                                       EnergyDepletedTag;                                          // 0x0244   (0x0004)  
	FDataTableRowHandle                                PlaylistTagBlacklistRowHandle;                              // 0x0248   (0x0010)  
	class URiderComponent*                             ActiveRider;                                                // 0x0258   (0x0008)  
	class URiderComponent*                             LastRider;                                                  // 0x0260   (0x0008)  
	class USceneComponent*                             RidableProp;                                                // 0x0268   (0x0008)  
	float                                              OriginalCapsuleRadius;                                      // 0x0270   (0x0004)  
	float                                              OriginalCapsuleHalfHeight;                                  // 0x0274   (0x0004)  
	float                                              RidingCapsuleRadius;                                        // 0x0278   (0x0004)  
	float                                              RidingCapsuleHalfHeight;                                    // 0x027C   (0x0004)  
	bool                                               bOriginalClientPositionSmoothingThrottlingSetting;          // 0x0280   (0x0001)  
	bool                                               LockRotationToRidableActor;                                 // 0x0281   (0x0001)  
	unsigned char                                      UnknownData06_5[0x6];                                       // 0x0282   (0x0006)  MISSED
	FScalableFloat                                     MaxHalfAimingAngle;                                         // 0x0288   (0x0028)  
	TArray<FPrimaryFireAnimMontageAnimCoreTypeOverride> PrimaryFireMontageAnimCoreTypeOverrides;                   // 0x02B0   (0x0010)  
	TArray<FPrimaryFireAnimMontageTagOverride>         PrimaryFireMontageTagOverrides;                             // 0x02C0   (0x0010)  
	FRidingPettingData                                 PettingData;                                                // 0x02D0   (0x0110)  
	FTimerHandle                                       RestoreCollisionHandle;                                     // 0x03E0   (0x0008)  
	unsigned char                                      UnknownData07_5[0x10];                                      // 0x03E8   (0x0010)  MISSED
	bool                                               bIsSprinting;                                               // 0x03F8   (0x0001)  
	unsigned char                                      UnknownData08_6[0x17];                                      // 0x03F9   (0x0017)  MISSED


	/// Functions
	// Function /Script/RidingCodeRuntime.RidableComponent.ShouldCameraFocusOnRidable
	// bool ShouldCameraFocusOnRidable(class URiderComponent* Rider);                                                        // [0xa31ce58] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/RidingCodeRuntime.RidableComponent.OnRep_ActiveRider
	// void OnRep_ActiveRider();                                                                                             // [0xa31c854] Final|Native|Protected 
	// Function /Script/RidingCodeRuntime.RidableComponent.IsSprinting
	// bool IsSprinting();                                                                                                   // [0xa31c440] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RidingCodeRuntime.RidableComponent.IsFlying
	// bool IsFlying();                                                                                                      // [0x8de38f0] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RidingCodeRuntime.RidableComponent.IsBeingRidden
	// bool IsBeingRidden();                                                                                                 // [0xa31c380] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RidingCodeRuntime.RidableComponent.HandleRiderStoppedRiding
	// void HandleRiderStoppedRiding(class URiderComponent* Rider);                                                          // [0x6b2e50c] Native|Event|Protected|BlueprintEvent 
	// Function /Script/RidingCodeRuntime.RidableComponent.HandleRiderStartedRiding
	// void HandleRiderStartedRiding(class URiderComponent* Rider);                                                          // [0x6cb20f4] Native|Event|Protected|BlueprintEvent 
	// Function /Script/RidingCodeRuntime.RidableComponent.HandleRiderEndPlay
	// void HandleRiderEndPlay(class AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason);                              // [0xa31bdf0] Final|Native|Protected 
	// Function /Script/RidingCodeRuntime.RidableComponent.GetRidingEmoteCapsuleSize
	// void GetRidingEmoteCapsuleSize(class URiderComponent* Rider, float OriginalRadius, float OriginalHalfHeight, float& OutRadius, float& OutHalfHeight); // [0xa31b2e4] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/RidingCodeRuntime.RidableComponent.GetRidingCapsuleSize
	// void GetRidingCapsuleSize(class URiderComponent* Rider, float OriginalRadius, float OriginalHalfHeight, float& OutRadius, float& OutHalfHeight); // [0xa31b148] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/RidingCodeRuntime.RidableComponent.GetRidingAttachComponent
	// class USceneComponent* GetRidingAttachComponent();                                                                    // [0xa31b120] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/RidingCodeRuntime.RidableComponent.GetPettingData
	// FRidingPettingData GetPettingData();                                                                                  // [0xa31b104] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RidingCodeRuntime.RidableComponent.GetDismountLaunchVectorOverride
	// FVector GetDismountLaunchVectorOverride(class URiderComponent* Rider);                                                // [0xa31b05c] Native|Event|Public|HasDefaults|BlueprintEvent|Const 
	// Function /Script/RidingCodeRuntime.RidableComponent.CheatSetStaminaPercent
	// void CheatSetStaminaPercent(float StaminaPercent);                                                                    // [0x18a39e4] BlueprintAuthorityOnly|Event|Public|BlueprintEvent 
	// Function /Script/RidingCodeRuntime.RidableComponent.CanRiderPlayEmote
	// bool CanRiderPlayEmote(class URiderComponent* Rider);                                                                 // [0x8efaa3c] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/RidingCodeRuntime.RidableComponent.CanBeRiddenBP
	// bool CanBeRiddenBP(class URiderComponent* Rider);                                                                     // [0xa31ab7c] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/RidingCodeRuntime.RidableComponent.CanBePet
	// bool CanBePet(class URiderComponent* Rider);                                                                          // [0x88a68c8] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
};

/// Class /Script/RidingCodeRuntime.ControllableRidableComponent
/// Size: 0x0320 (0x000410 - 0x000730)
class UControllableRidableComponent : public URidableComponent
{ 
public:
	bool                                               bUseGravityJump;                                            // 0x0410   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0411   (0x0007)  MISSED
	FGameplayTagQuery                                  IgnoreGravityJumpTagQuery;                                  // 0x0418   (0x0048)  
	bool                                               bIsControllable;                                            // 0x0460   (0x0001)  
	bool                                               bHasAbility;                                                // 0x0461   (0x0001)  
	unsigned char                                      UnknownData01_5[0x6];                                       // 0x0462   (0x0006)  MISSED
	SDK_UNDEFINED(24,11334) /* FText */                __um(AbilityDisplayText);                                   // 0x0468   (0x0018)  
	bool                                               bCanJump;                                                   // 0x0480   (0x0001)  
	bool                                               bAlwaysMoveForward;                                         // 0x0481   (0x0001)  
	unsigned char                                      UnknownData02_5[0x2];                                       // 0x0482   (0x0002)  MISSED
	float                                              ForwardMoveSpeedMultiplier;                                 // 0x0484   (0x0004)  
	float                                              BackwardMoveSpeedMultiplier;                                // 0x0488   (0x0004)  
	float                                              SidewaysMoveRotationOffset;                                 // 0x048C   (0x0004)  
	SDK_UNDEFINED(1,11335) /* TEnumAsByte<EFortMovementUrgency> */ __um(MovementUrgency);                          // 0x0490   (0x0001)  
	bool                                               bIsBeingControlled;                                         // 0x0491   (0x0001)  
	unsigned char                                      UnknownData03_5[0x1E];                                      // 0x0492   (0x001E)  MISSED
	FRidableControlParams                              RidableControlParams;                                       // 0x04B0   (0x0208)  
	unsigned char                                      UnknownData04_5[0x28];                                      // 0x06B8   (0x0028)  MISSED
	FScalableFloat                                     JumpUpwardGravityScale;                                     // 0x06E0   (0x0028)  
	FScalableFloat                                     JumpDownwardGravityScale;                                   // 0x0708   (0x0028)  


	/// Functions
	// Function /Script/RidingCodeRuntime.ControllableRidableComponent.ServerDoJumpExit
	// void ServerDoJumpExit();                                                                                              // [0x7905d9c] Net|NetReliableNative|Event|Protected|NetServer|BlueprintCallable 
	// Function /Script/RidingCodeRuntime.ControllableRidableComponent.OnRep_IsBeingControlled
	// void OnRep_IsBeingControlled();                                                                                       // [0xa31c8a8] Final|Native|Protected 
	// Function /Script/RidingCodeRuntime.ControllableRidableComponent.OnCapsuleBeginOverlap
	// void OnCapsuleBeginOverlap(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0xa31c50c] Final|Native|Protected|HasOutParms 
	// Function /Script/RidingCodeRuntime.ControllableRidableComponent.IsSprintToggleable
	// bool IsSprintToggleable();                                                                                            // [0xa31c3c4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RidingCodeRuntime.ControllableRidableComponent.HandleJumpStopped
	// void HandleJumpStopped();                                                                                             // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/RidingCodeRuntime.ControllableRidableComponent.HandleJumpStarted
	// void HandleJumpStarted();                                                                                             // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/RidingCodeRuntime.ControllableRidableComponent.HandleJumpHeld
	// void HandleJumpHeld();                                                                                                // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/RidingCodeRuntime.ControllableRidableComponent.HandleCancelSprint
	// void HandleCancelSprint(bool bAbilityInputHeld, bool bForceCancel);                                                   // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/RidingCodeRuntime.ControllableRidableComponent.HandleAbilityStopped
	// void HandleAbilityStopped();                                                                                          // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/RidingCodeRuntime.ControllableRidableComponent.HandleAbilityStarted
	// void HandleAbilityStarted();                                                                                          // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/RidingCodeRuntime.ControllableRidableComponent.HandleAbilityHeld
	// void HandleAbilityHeld();                                                                                             // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/RidingCodeRuntime.ControllableRidableComponent.GetAbilityDisplayText
	// FText GetAbilityDisplayText();                                                                                        // [0xa31b014] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RidingCodeRuntime.ControllableRidableComponent.CanStartSprinting
	// bool CanStartSprinting();                                                                                             // [0xa31ac10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RidingCodeRuntime.ControllableRidableComponent.CancelBuildBar
	// void CancelBuildBar();                                                                                                // [0xa31ac34] Final|Native|Protected|BlueprintCallable 
	// Function /Script/RidingCodeRuntime.ControllableRidableComponent.CanBeControlled
	// bool CanBeControlled(class URiderComponent* Rider);                                                                   // [0xa31aae8] Native|Event|Public|BlueprintEvent|Const 
};

/// Struct /Script/RidingCodeRuntime.RiderDismountLaunchVelocity
/// Size: 0x00A8 (0x000000 - 0x0000A8)
struct FRiderDismountLaunchVelocity
{ 
	FScalableFloat                                     DismountVelocityMultiplier;                                 // 0x0000   (0x0028)  
	FScalableFloat                                     DismountVelocityBaseForwardVelocity;                        // 0x0028   (0x0028)  
	FScalableFloat                                     DismountVelocityBaseRightVelocity;                          // 0x0050   (0x0028)  
	FScalableFloat                                     DismountVelocityBaseUpVelocity;                             // 0x0078   (0x0028)  
	bool                                               bApplyDismountVelocityMultiplierToZVelocity;                // 0x00A0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x00A1   (0x0007)  MISSED
};

/// Struct /Script/RidingCodeRuntime.RidingAnalyticsData_Base
/// Size: 0x0048 (0x000000 - 0x000048)
struct FRidingAnalyticsData_Base
{ 
	SDK_UNDEFINED(32,11336) /* TWeakObjectPtr<URiderComponent*> */ __um(Rider);                                    // 0x0008   (0x0020)  
	SDK_UNDEFINED(32,11337) /* TWeakObjectPtr<URidableComponent*> */ __um(Ridable);                                // 0x0028   (0x0020)  
};

/// Struct /Script/RidingCodeRuntime.RidingAnalyticsData_Stopped
/// Size: 0x0038 (0x000048 - 0x000080)
struct FRidingAnalyticsData_Stopped : FRidingAnalyticsData_Base
{ 
	float                                              TotalRidingTime;                                            // 0x0048   (0x0004)  
	float                                              RiderStartHealth;                                           // 0x004C   (0x0004)  
	float                                              RiderStartShield;                                           // 0x0050   (0x0004)  
	float                                              RiderEndHealth;                                             // 0x0054   (0x0004)  
	float                                              RiderEndShield;                                             // 0x0058   (0x0004)  
	float                                              TotalDistanceTraveled;                                      // 0x005C   (0x0004)  
	int32_t                                            JumpUseCount;                                               // 0x0060   (0x0004)  
	int32_t                                            AbilityUseCount;                                            // 0x0064   (0x0004)  
	float                                              RiderDamageDealt;                                           // 0x0068   (0x0004)  
	float                                              RiderDamageTaken;                                           // 0x006C   (0x0004)  
	float                                              RiderHealingReceived;                                       // 0x0070   (0x0004)  
	float                                              RiderShieldGained;                                          // 0x0074   (0x0004)  
	bool                                               bRidableEliminated : 1;                                     // 0x0078:0 (0x0001)  
	bool                                               bRidableExhausted : 1;                                      // 0x0078:1 (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0079   (0x0007)  MISSED
};

/// Class /Script/RidingCodeRuntime.RiderComponent
/// Size: 0x05F0 (0x0000A8 - 0x000698)
class URiderComponent : public UFortPawnOverrideComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x00A8   (0x0008)  MISSED
	SDK_UNDEFINED(16,11338) /* FMulticastInlineDelegate */ __um(OnStartedRiding);                                  // 0x00B0   (0x0010)  
	SDK_UNDEFINED(16,11339) /* FMulticastInlineDelegate */ __um(OnStoppedRiding);                                  // 0x00C0   (0x0010)  
	class UClass*                                      RidingCameraModeClass;                                      // 0x00D0   (0x0008)  
	class UClass*                                      RidingSprintCameraModeClass;                                // 0x00D8   (0x0008)  
	float                                              RidingCameraModeBlendTime;                                  // 0x00E0   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x00E4   (0x0004)  MISSED
	FInterpOffset                                      TargetingAdditionalViewTargetSpaceViewOffset;               // 0x00E8   (0x0038)  
	class UClass*                                      RiderPropClass;                                             // 0x0120   (0x0008)  
	class UClass*                                      RidablePropClass;                                           // 0x0128   (0x0008)  
	FVector                                            RiderPropAttachLocationOffset;                              // 0x0130   (0x0018)  
	FRotator                                           RiderPropAttachRotationOffset;                              // 0x0148   (0x0018)  
	float                                              RiderPropAttachScale;                                       // 0x0160   (0x0004)  
	FName                                              RiderPropAttachSocket;                                      // 0x0164   (0x0004)  
	bool                                               bUseClientAttachGuideSocket;                                // 0x0168   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x0169   (0x0007)  MISSED
	FVector                                            RiderPropAttachSoftBounds;                                  // 0x0170   (0x0018)  
	float                                              RiderPropAttachSoftBoundsScalar;                            // 0x0188   (0x0004)  
	unsigned char                                      UnknownData03_5[0x4];                                       // 0x018C   (0x0004)  MISSED
	FVector                                            RiderPropAttachHardBounds;                                  // 0x0190   (0x0018)  
	float                                              RiderPropAttachSoftBoundsTargetingScalar;                   // 0x01A8   (0x0004)  
	float                                              RiderPropAttachHardBoundsTargetingScalar;                   // 0x01AC   (0x0004)  
	float                                              RiderPropAttachVerticalBufferTargetingScalar;               // 0x01B0   (0x0004)  
	float                                              RidingExitHoldTime;                                         // 0x01B4   (0x0004)  
	FScalableFloat                                     TimeBeforeReenteringRiding;                                 // 0x01B8   (0x0028)  
	FGameplayTag                                       RidingExitStartedEventTag;                                  // 0x01E0   (0x0004)  
	FGameplayTag                                       RidingExitStoppedEventTag;                                  // 0x01E4   (0x0004)  
	class UFortInputMappingContext*                    RidingInputContext;                                         // 0x01E8   (0x0008)  
	class UInputAction*                                RidingExit;                                                 // 0x01F0   (0x0008)  
	class UInputAction*                                GamepadRidingExit;                                          // 0x01F8   (0x0008)  
	class UFXSystemAsset*                              ConnectorFXAsset;                                           // 0x0200   (0x0008)  
	FName                                              ConnectorPropSourceMeshParameterName;                       // 0x0208   (0x0004)  
	FName                                              ConnectorPropTargetMeshParameterName;                       // 0x020C   (0x0004)  
	float                                              SimulatedSmoothedRotationSpeed;                             // 0x0210   (0x0004)  
	unsigned char                                      UnknownData04_5[0x4];                                       // 0x0214   (0x0004)  MISSED
	FGameplayTagContainer                              ExcludedEmoteTags;                                          // 0x0218   (0x0020)  
	unsigned char                                      UnknownData05_5[0x8];                                       // 0x0238   (0x0008)  MISSED
	class URidableComponent*                           ActiveRidable;                                              // 0x0240   (0x0008)  
	class URidableComponent*                           LastRidable;                                                // 0x0248   (0x0008)  
	class USceneComponent*                             RiderProp;                                                  // 0x0250   (0x0008)  
	class UFXSystemComponent*                          ConnectorProp;                                              // 0x0258   (0x0008)  
	FVector                                            PropAttachSeparation;                                       // 0x0260   (0x0018)  
	FVector                                            AdditionalAttachOffset;                                     // 0x0278   (0x0018)  
	FVector                                            SoftBoundsAttachmentOffset;                                 // 0x0290   (0x0018)  
	FVector                                            HardBoundsAttachmentOffset;                                 // 0x02A8   (0x0018)  
	FDataTableRowHandle                                PlaylistTagDenylistRowHandle;                               // 0x02C0   (0x0010)  
	class UFortInputComponent*                         RiderInputComponent;                                        // 0x02D0   (0x0008)  
	FGameplayTagContainer                              PendingFailedEmoteErrorTags;                                // 0x02D8   (0x0020)  
	FRiderDismountLaunchVelocity                       ExitLaunchVelocity;                                         // 0x02F8   (0x00A8)  
	FRiderDismountLaunchVelocity                       JumpExitLaunchVelocity;                                     // 0x03A0   (0x00A8)  
	unsigned char                                      UnknownData06_5[0x8];                                       // 0x0448   (0x0008)  MISSED
	FRidingAnalyticsData_Stopped                       ActiveAnaltyicsData;                                        // 0x0450   (0x0080)  
	FVector                                            RidableLocationLastFrame;                                   // 0x04D0   (0x0018)  
	unsigned char                                      UnknownData07_5[0x8];                                       // 0x04E8   (0x0008)  MISSED
	FTimerHandle                                       RestoreCollisionHandle;                                     // 0x04F0   (0x0008)  
	FRidableControlRuntimeData                         RidableControlRuntimeData;                                  // 0x04F8   (0x0040)  
	bool                                               bIsSprintingReplay : 1;                                     // 0x0538:0 (0x0001)  
	unsigned char                                      UnknownData08_4[0x3];                                       // 0x0539   (0x0003)  MISSED
	SDK_UNDEFINED(8,11340) /* TWeakObjectPtr<AFortPlayerController*> */ __um(ClampedController);                   // 0x053C   (0x0008)  
	bool                                               bIsPetting;                                                 // 0x0544   (0x0001)  
	unsigned char                                      UnknownData09_5[0x3];                                       // 0x0545   (0x0003)  MISSED
	FScalableFloat                                     RidingCapsuleHalfHeight;                                    // 0x0548   (0x0028)  
	FScalableFloat                                     RidingCapsuleRadius;                                        // 0x0570   (0x0028)  
	unsigned char                                      UnknownData10_5[0x10];                                      // 0x0598   (0x0010)  MISSED
	FCollisionProfileName                              CollisionProfileName;                                       // 0x05A8   (0x0004)  
	unsigned char                                      UnknownData11_5[0x4];                                       // 0x05AC   (0x0004)  MISSED
	FScalableFloat                                     TraceRadius;                                                // 0x05B0   (0x0028)  
	FScalableFloat                                     TraceLength;                                                // 0x05D8   (0x0028)  
	bool                                               bPreventExitRidingFromInput;                                // 0x0600   (0x0001)  
	unsigned char                                      UnknownData12_6[0x97];                                      // 0x0601   (0x0097)  MISSED


	/// Functions
	// Function /Script/RidingCodeRuntime.RiderComponent.StopRidingActor
	// bool StopRidingActor(bool bLaunchRider, bool bFindDismountLocation, bool bIsJumpExit);                                // [0xa31ceec] BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/RidingCodeRuntime.RiderComponent.StartRidingActor
	// bool StartRidingActor(class AActor* TargetActor);                                                                     // [0x8aec49c] BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/RidingCodeRuntime.RiderComponent.SetRidingInputEnabled
	// void SetRidingInputEnabled(bool bEnabled);                                                                            // [0xa31cdd8] Final|Native|Public|BlueprintCallable 
	// Function /Script/RidingCodeRuntime.RiderComponent.ServerRidingExit
	// void ServerRidingExit();                                                                                              // [0xa31ca70] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/RidingCodeRuntime.RiderComponent.OnRep_RidableControlRuntimeUpdated
	// void OnRep_RidableControlRuntimeUpdated();                                                                            // [0xa31c950] Final|Native|Protected 
	// Function /Script/RidingCodeRuntime.RiderComponent.OnRep_IsSprintingReplay
	// void OnRep_IsSprintingReplay();                                                                                       // [0xa31c8d0] Final|Native|Protected 
	// Function /Script/RidingCodeRuntime.RiderComponent.OnRep_ActiveRidable
	// void OnRep_ActiveRidable();                                                                                           // [0xa31c840] Final|Native|Protected 
	// Function /Script/RidingCodeRuntime.RiderComponent.OnMovementModeChanged
	// void OnMovementModeChanged(class ACharacter* InCharacter, TEnumAsByte<EMovementMode> PrevMovementMode, char PreviousCustomMode); // [0xa31c730] Final|Native|Protected 
	// Function /Script/RidingCodeRuntime.RiderComponent.IsRidingActor
	// bool IsRidingActor();                                                                                                 // [0xa31c39c] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RidingCodeRuntime.RiderComponent.HandleStoppedRiding
	// void HandleStoppedRiding(class URidableComponent* Ridable);                                                           // [0x8108cc8] Native|Event|Protected|BlueprintEvent 
	// Function /Script/RidingCodeRuntime.RiderComponent.HandleStartedRiding
	// void HandleStartedRiding(class URidableComponent* Ridable);                                                           // [0x754ec40] Native|Event|Protected|BlueprintEvent 
	// Function /Script/RidingCodeRuntime.RiderComponent.HandleRidingExitReleased
	// void HandleRidingExitReleased();                                                                                      // [0xa31c344] Final|Native|Protected 
	// Function /Script/RidingCodeRuntime.RiderComponent.HandleRidingExitPressed
	// void HandleRidingExitPressed();                                                                                       // [0xa31c330] Final|Native|Protected 
	// Function /Script/RidingCodeRuntime.RiderComponent.HandleRiderTakenDamage
	// void HandleRiderTakenDamage(class AActor* DamageOnOwnerPawnDamageddActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, FVector HitLocation, class UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum); // [0xa31beb0] Final|Native|Protected|HasDefaults 
	// Function /Script/RidingCodeRuntime.RiderComponent.HandleRiderDidDamage
	// void HandleRiderDidDamage(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, FVector HitLocation, class UPrimitiveComponent* HitComponent, FName BoneName, FVector Momentum); // [0xa31b998] Final|Native|Protected|HasDefaults 
	// Function /Script/RidingCodeRuntime.RiderComponent.HandleRidableMovementModeChanged
	// void HandleRidableMovementModeChanged(class ACharacter* InCharacter, TEnumAsByte<EMovementMode> PrevMovementMode, char PreviousCustomMode); // [0xa31b89c] Final|Native|Protected 
	// Function /Script/RidingCodeRuntime.RiderComponent.HandleRidableFound
	// void HandleRidableFound(FHitResult& HitResult);                                                                       // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/RidingCodeRuntime.RiderComponent.HandlePawnTeleported
	// void HandlePawnTeleported(class AFortPawn* TeleportedPawn);                                                           // [0xa31b808] Final|Native|Protected 
	// Function /Script/RidingCodeRuntime.RiderComponent.HandlePawnDiedWhileRiding
	// void HandlePawnDiedWhileRiding(class AFortPawn* DeadPawn);                                                            // [0xa31b788] Final|Native|Protected 
	// Function /Script/RidingCodeRuntime.RiderComponent.HandleOnWeaponEquipped
	// void HandleOnWeaponEquipped(class AFortWeapon* NewWeapon, class AFortWeapon* PrevWeapon);                             // [0xa31b6c0] Final|Native|Protected 
	// Function /Script/RidingCodeRuntime.RiderComponent.HandleGamepadRidingExitReleased
	// void HandleGamepadRidingExitReleased();                                                                               // [0xa31b6ac] Final|Native|Protected 
	// Function /Script/RidingCodeRuntime.RiderComponent.HandleDeferredExitVelocity
	// void HandleDeferredExitVelocity(FVector ExitVelocity);                                                                // [0xa31b558] Final|Native|Protected|HasDefaults 
	// Function /Script/RidingCodeRuntime.RiderComponent.HandleDBNOWhileRiding
	// void HandleDBNOWhileRiding();                                                                                         // [0xa31b544] Final|Native|Protected 
	// Function /Script/RidingCodeRuntime.RiderComponent.HandleActorEndPlayWhileRiding
	// void HandleActorEndPlayWhileRiding(class AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason);                   // [0xa31b480] Final|Native|Protected 
	// Function /Script/RidingCodeRuntime.RiderComponent.ClientNotifyEmoteFailure
	// void ClientNotifyEmoteFailure(FGameplayTagContainer ErrorTags);                                                       // [0xa31ad34] Net|NetReliableNative|Event|Protected|NetClient 
	// Function /Script/RidingCodeRuntime.RiderComponent.ClientHandleFinishedCharacterCustomization
	// void ClientHandleFinishedCharacterCustomization(class AFortPlayerPawn* PlayerPawn);                                   // [0xa31acb4] Final|Native|Protected 
};

/// Struct /Script/RidingCodeRuntime.RidingControlInputState
/// Size: 0x000C (0x000000 - 0x00000C)
struct FRidingControlInputState
{ 
	float                                              RightAlpha;                                                 // 0x0000   (0x0004)  
	float                                              ForwardAlpha;                                               // 0x0004   (0x0004)  
	bool                                               bIsJumping : 1;                                             // 0x0008:0 (0x0001)  
	unsigned char                                      UnknownBit00 : 1;                                           // 0x0008:1 (0x0001)  MISSED
	bool                                               bIsUsingAbility : 1;                                        // 0x0008:2 (0x0001)  
	unsigned char                                      UnknownBit01 : 1;                                           // 0x0008:3 (0x0001)  MISSED
	bool                                               bIsPetting : 1;                                             // 0x0008:4 (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0009   (0x0003)  MISSED
};

/// Struct /Script/RidingCodeRuntime.RidingControlInputStateReliable
/// Size: 0x0001 (0x000000 - 0x000001)
struct FRidingControlInputStateReliable
{ 
	bool                                               bIsJumping : 1;                                             // 0x0000:0 (0x0001)  
	bool                                               bIsUsingAbility : 1;                                        // 0x0000:1 (0x0001)  
	bool                                               bIsPetting : 1;                                             // 0x0000:2 (0x0001)  
};

/// Struct /Script/RidingCodeRuntime.RidingControlInputStateUnreliable
/// Size: 0x0002 (0x000000 - 0x000002)
struct FRidingControlInputStateUnreliable
{ 
	char                                               RightAlphaQuantized;                                        // 0x0000   (0x0001)  
	char                                               ForwardAlphaQuantized;                                      // 0x0001   (0x0001)  
};

/// Class /Script/RidingCodeRuntime.ControllingRiderComponent
/// Size: 0x0058 (0x000698 - 0x0006F0)
class UControllingRiderComponent : public URiderComponent
{ 
public:
	class UFortInputMappingContext*                    ControllingRidingInputContext;                              // 0x0698   (0x0008)  
	class UInputAction*                                RidingAbility;                                              // 0x06A0   (0x0008)  
	class UInputAction*                                GamepadRidingAbility;                                       // 0x06A8   (0x0008)  
	bool                                               bCanControlRidable;                                         // 0x06B0   (0x0001)  
	bool                                               bIsControllingRidable;                                      // 0x06B1   (0x0001)  
	ERidingControlInputStyle                           ControlInputStyle;                                          // 0x06B2   (0x0001)  
	unsigned char                                      UnknownData00_5[0xD];                                       // 0x06B3   (0x000D)  MISSED
	FRidingControlInputState                           ReplicatedControlInputState;                                // 0x06C0   (0x000C)  
	FRidingControlInputStateReliable                   ReplicatedControlInputStateReliable;                        // 0x06CC   (0x0001)  
	FRidingControlInputStateUnreliable                 ReplicatedControlInputStateUnreliable;                      // 0x06CD   (0x0002)  
	unsigned char                                      UnknownData01_5[0x1];                                       // 0x06CF   (0x0001)  MISSED
	class UFortInputComponent*                         ControllingRiderInputComponent;                             // 0x06D0   (0x0008)  
	unsigned char                                      UnknownData02_5[0x10];                                      // 0x06D8   (0x0010)  MISSED
	float                                              AutoRunDoubleTapTimestamp;                                  // 0x06E8   (0x0004)  
	bool                                               bCanBePet;                                                  // 0x06EC   (0x0001)  
	unsigned char                                      UnknownData03_6[0x3];                                       // 0x06ED   (0x0003)  MISSED


	/// Functions
	// Function /Script/RidingCodeRuntime.ControllingRiderComponent.UpdateFromInput
	// void UpdateFromInput(float DeltaTime, FRidingControlInputState& InputState);                                          // [0xa31d000] Native|Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/RidingCodeRuntime.ControllingRiderComponent.ServerUpdateControlInputStateUnreliable
	// void ServerUpdateControlInputStateUnreliable(FRidingControlInputStateUnreliable InputState);                          // [0xa31cc08] Net|Native|Event|Protected|NetServer|NetValidate 
	// Function /Script/RidingCodeRuntime.ControllingRiderComponent.ServerUpdateControlInputStateReliable
	// void ServerUpdateControlInputStateReliable(FRidingControlInputStateReliable InputState);                              // [0xa31cabc] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/RidingCodeRuntime.ControllingRiderComponent.ServerCancelPetting
	// void ServerCancelPetting();                                                                                           // [0x726fb9c] Net|NetReliableNative|Event|Protected|NetServer 
	// Function /Script/RidingCodeRuntime.ControllingRiderComponent.ReloadPressed
	// void ReloadPressed();                                                                                                 // [0xa31c9d8] Final|Native|Protected 
	// Function /Script/RidingCodeRuntime.ControllingRiderComponent.OnSprintCanceled
	// void OnSprintCanceled();                                                                                              // [0x92ababc] Net|NetReliableNative|Event|Protected|NetServer 
	// Function /Script/RidingCodeRuntime.ControllingRiderComponent.OnRep_IsControllingRidable
	// void OnRep_IsControllingRidable();                                                                                    // [0xa31c8bc] Final|Native|Protected 
	// Function /Script/RidingCodeRuntime.ControllingRiderComponent.OnRep_ControlInputUnreliable
	// void OnRep_ControlInputUnreliable();                                                                                  // [0xa31c888] Final|Native|Protected 
	// Function /Script/RidingCodeRuntime.ControllingRiderComponent.OnRep_ControlInputReliable
	// void OnRep_ControlInputReliable();                                                                                    // [0xa31c868] Final|Native|Protected 
	// Function /Script/RidingCodeRuntime.ControllingRiderComponent.IsTryingToMove
	// bool IsTryingToMove(float Tolerance);                                                                                 // [0xa31c458] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RidingCodeRuntime.ControllingRiderComponent.HandleSpotActorOrPettingAbilityReleased
	// void HandleSpotActorOrPettingAbilityReleased();                                                                       // [0xa31c36c] Final|Native|Protected 
	// Function /Script/RidingCodeRuntime.ControllingRiderComponent.HandleSpotActorOrPettingAbilityPressed
	// void HandleSpotActorOrPettingAbilityPressed();                                                                        // [0xa31c358] Final|Native|Protected 
	// Function /Script/RidingCodeRuntime.ControllingRiderComponent.HandleRidingAbilityReleased
	// void HandleRidingAbilityReleased();                                                                                   // [0xa31c31c] Final|Native|Protected 
	// Function /Script/RidingCodeRuntime.ControllingRiderComponent.HandleRidingAbilityPressed
	// void HandleRidingAbilityPressed();                                                                                    // [0xa31c308] Final|Native|Protected 
	// Function /Script/RidingCodeRuntime.ControllingRiderComponent.HandleRequestPettingStop
	// void HandleRequestPettingStop();                                                                                      // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/RidingCodeRuntime.ControllingRiderComponent.HandleRequestPettingStart
	// void HandleRequestPettingStart();                                                                                     // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/RidingCodeRuntime.ControllingRiderComponent.HandlePettingAbilityPressed
	// void HandlePettingAbilityPressed();                                                                                   // [0xa31b888] Final|Native|Protected 
	// Function /Script/RidingCodeRuntime.ControllingRiderComponent.HandleGamepadRidingAbilityPressed
	// void HandleGamepadRidingAbilityPressed();                                                                             // [0xa31b698] Final|Native|Protected 
	// Function /Script/RidingCodeRuntime.ControllingRiderComponent.GetControlInputState
	// FRidingControlInputState GetControlInputState();                                                                      // [0xa31b030] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RidingCodeRuntime.ControllingRiderComponent.ControllingActor_OnMoveRight
	// void ControllingActor_OnMoveRight(float Val);                                                                         // [0xa31af94] Final|Native|Protected 
	// Function /Script/RidingCodeRuntime.ControllingRiderComponent.ControllingActor_OnMoveForward
	// void ControllingActor_OnMoveForward(float Val);                                                                       // [0xa31af14] Final|Native|Protected 
	// Function /Script/RidingCodeRuntime.ControllingRiderComponent.ControllingActor_OnJumpInput
	// void ControllingActor_OnJumpInput(bool bPressed);                                                                     // [0xa31ae94] Final|Native|Protected 
};

/// Class /Script/RidingCodeRuntime.FortCameraMode_Riding
/// Size: 0x0020 (0x001CA0 - 0x001CC0)
class UFortCameraMode_Riding : public UFortCameraMode_ThirdPerson
{ 
public:
	FVector                                            OriginOffset;                                               // 0x1CA0   (0x0018)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x1CB8   (0x0008)  MISSED
};

/// Class /Script/RidingCodeRuntime.RidingGameStateMutator
/// Size: 0x0000 (0x000338 - 0x000338)
class ARidingGameStateMutator : public AFortAthenaMutator
{ 
public:
};

/// Class /Script/RidingCodeRuntime.RidingAnalytics
/// Size: 0x0000 (0x000028 - 0x000028)
class URidingAnalytics : public UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/RidingCodeRuntime.FortAthenaPettingWildlifeTelemetryData
/// Size: 0x0008 (0x000028 - 0x000030)
class UFortAthenaPettingWildlifeTelemetryData : public UFortAthenaAITelemetryData
{ 
public:
	int32_t                                            PetCount;                                                   // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x002C   (0x0004)  MISSED


	/// Functions
	// Function /Script/RidingCodeRuntime.FortAthenaPettingWildlifeTelemetryData.OnPetted
	// void OnPetted();                                                                                                      // [0xa31c82c] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/RidingCodeRuntime.RidingPlaylistBlacklistTableRow
/// Size: 0x0020 (0x000008 - 0x000028)
struct FRidingPlaylistBlacklistTableRow : FTableRowBase
{ 
	FGameplayTagContainer                              PlaylistTags;                                               // 0x0008   (0x0020)  
};

/// Struct /Script/RidingCodeRuntime.RidingAnalyticsData_Started
/// Size: 0x0000 (0x000048 - 0x000048)
struct FRidingAnalyticsData_Started : FRidingAnalyticsData_Base
{ 
};

