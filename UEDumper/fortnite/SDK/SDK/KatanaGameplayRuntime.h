
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
/// dependency: GameplayTags
/// dependency: MantisRuntime
/// dependency: ModularGameplay

/// Enum /Script/KatanaGameplayRuntime.EFortKatanaPrimaryAttackVariation
/// Size: 0x04
enum class EFortKatanaPrimaryAttackVariation : uint8_t
{
	EFortKatanaPrimaryAttackVariation__OnGroundFirst                                 = 0,
	EFortKatanaPrimaryAttackVariation__OnGroundSecond                                = 1,
	EFortKatanaPrimaryAttackVariation__InAir                                         = 2,
	EFortKatanaPrimaryAttackVariation__EFortKatanaPrimaryAttackVariation_MAX         = 3
};

/// Class /Script/KatanaGameplayRuntime.FortKatanaLayerAnimInstance
/// Size: 0x0170 (0x001630 - 0x0017A0)
class UFortKatanaLayerAnimInstance : public UFortMantisLayerAnimInstance
{ 
public:
	bool                                               IsDashCharge;                                               // 0x1630   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x1631   (0x0007)  MISSED
	class AFortPlayerPawn*                             AsFortPlayerPawn;                                           // 0x1638   (0x0008)  
	bool                                               IsBMeleeKatana;                                             // 0x1640   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x1641   (0x0003)  MISSED
	float                                              HandIKHipAttachAlpha;                                       // 0x1644   (0x0004)  
	FVector                                            LeftAttachedHandIKLoc;                                      // 0x1648   (0x0018)  
	FRotator                                           LeftAttachedhandIKRot;                                      // 0x1660   (0x0018)  
	FVector                                            RightWeaponLoc;                                             // 0x1678   (0x0018)  
	FRotator                                           RightWeaponRot;                                             // 0x1690   (0x0018)  
	FVector                                            LeftAttachedHandIKLocOffsetMED;                             // 0x16A8   (0x0018)  
	FRotator                                           LeftAttachedHandIKRotOffset;                                // 0x16C0   (0x0018)  
	FVector                                            RightWeaponLocOffsetMED;                                    // 0x16D8   (0x0018)  
	FRotator                                           RightWeaponRotOffset;                                       // 0x16F0   (0x0018)  
	bool                                               IsDashAttack;                                               // 0x1708   (0x0001)  
	bool                                               IsDashOutro;                                                // 0x1709   (0x0001)  
	unsigned char                                      UnknownData02_5[0x2];                                       // 0x170A   (0x0002)  MISSED
	float                                              PelvisAOAlpha;                                              // 0x170C   (0x0004)  
	float                                              ClampedAimPitch;                                            // 0x1710   (0x0004)  
	bool                                               EarlyExitFromDashOutro;                                     // 0x1714   (0x0001)  
	bool                                               IsTechniqueActive;                                          // 0x1715   (0x0001)  
	bool                                               IsPrimaryAttack;                                            // 0x1716   (0x0001)  
	unsigned char                                      UnknownData03_5[0x1];                                       // 0x1717   (0x0001)  MISSED
	float                                              WeaponHipAttachAlpha;                                       // 0x1718   (0x0004)  
	unsigned char                                      UnknownData04_5[0x4];                                       // 0x171C   (0x0004)  MISSED
	FVector                                            LeftAttachedHandIKLocOffsetLRG;                             // 0x1720   (0x0018)  
	FVector                                            RightWeaponLocOffsetLRG;                                    // 0x1738   (0x0018)  
	float                                              FeetCorrectionAlpha;                                        // 0x1750   (0x0004)  
	bool                                               IsInAirAttackLeap;                                          // 0x1754   (0x0001)  
	bool                                               ShouldStartDashOutro;                                       // 0x1755   (0x0001)  
	bool                                               StartedDashOutro;                                           // 0x1756   (0x0001)  
	unsigned char                                      UnknownData05_5[0x1];                                       // 0x1757   (0x0001)  MISSED
	FScalableFloat                                     DashRootMotionDuration;                                     // 0x1758   (0x0028)  
	bool                                               IsPrimaryAttack2;                                           // 0x1780   (0x0001)  
	bool                                               IsAirAttackSlam;                                            // 0x1781   (0x0001)  
	bool                                               TransitionRuleToDefault;                                    // 0x1782   (0x0001)  
	bool                                               IsGrindRailSwing;                                           // 0x1783   (0x0001)  
	bool                                               CanExitDashCharge;                                          // 0x1784   (0x0001)  
	unsigned char                                      UnknownData06_5[0x3];                                       // 0x1785   (0x0003)  MISSED
	float                                              DashChargePlayRate;                                         // 0x1788   (0x0004)  
	float                                              YawForKatanaDashAO;                                         // 0x178C   (0x0004)  
	unsigned char                                      UnknownData07_6[0x10];                                      // 0x1790   (0x0010)  MISSED
};

/// Class /Script/KatanaGameplayRuntime.FortKatanaWeaponAnimInstance
/// Size: 0x0150 (0x000470 - 0x0005C0)
class UFortKatanaWeaponAnimInstance : public UFortMantisAnimInstance
{ 
public:
	class AFortPlayerPawn*                             AsFortPlayerPawn;                                           // 0x0468   (0x0008)  
	class AFortWeapon*                                 BMeleeKatanaAsWeapon;                                       // 0x0470   (0x0008)  
	bool                                               IsBMeleeKatana;                                             // 0x0478   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0479   (0x0003)  MISSED
	float                                              LocalLeftHandIKAlpha;                                       // 0x047C   (0x0004)  
	float                                              LocalRightHandIKAlpha;                                      // 0x0480   (0x0004)  
	bool                                               IsDashCharge;                                               // 0x0484   (0x0001)  
	bool                                               IsDashAttack;                                               // 0x0485   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x0486   (0x0002)  MISSED
	float                                              SwordPlayRate;                                              // 0x0488   (0x0004)  
	bool                                               IsInAirAttack_Leap;                                         // 0x048C   (0x0001)  
	bool                                               IsInAirAttack_Slam;                                         // 0x048D   (0x0001)  
	unsigned char                                      UnknownData02_5[0x2];                                       // 0x048E   (0x0002)  MISSED
	class UFortKatanaLayerAnimInstance*                KatanaPlayer;                                               // 0x0490   (0x0008)  
	bool                                               EarlyExitFromDashOutro;                                     // 0x0498   (0x0001)  
	bool                                               IsDashOutro;                                                // 0x0499   (0x0001)  
	unsigned char                                      UnknownData03_5[0x6];                                       // 0x049A   (0x0006)  MISSED
	FVector                                            ScabbardLoc;                                                // 0x04A0   (0x0018)  
	FRotator                                           ScabbardRot;                                                // 0x04B8   (0x0018)  
	FVector                                            ScabbardLocOffset;                                          // 0x04D0   (0x0018)  
	FRotator                                           ScabbardRotOffset;                                          // 0x04E8   (0x0018)  
	bool                                               IsSurfaceSwimming;                                          // 0x0500   (0x0001)  
	bool                                               IsTechniqueActive;                                          // 0x0501   (0x0001)  
	unsigned char                                      UnknownData04_5[0x6];                                       // 0x0502   (0x0006)  MISSED
	FVector                                            SwordLoc;                                                   // 0x0508   (0x0018)  
	FRotator                                           SwordRot;                                                   // 0x0520   (0x0018)  
	FVector                                            SwordLocOffset;                                             // 0x0538   (0x0018)  
	FRotator                                           SwordRotOffset;                                             // 0x0550   (0x0018)  
	bool                                               IsRidingSwing;                                              // 0x0568   (0x0001)  
	bool                                               IsPrimaryAttack;                                            // 0x0569   (0x0001)  
	bool                                               IsPrimaryAttack2;                                           // 0x056A   (0x0001)  
	bool                                               ExitFromPrimaryAttack;                                      // 0x056B   (0x0001)  
	bool                                               ExitFromPrimaryAttack2;                                     // 0x056C   (0x0001)  
	bool                                               NonPrimaryAttackState;                                      // 0x056D   (0x0001)  
	bool                                               IsComboAttack;                                              // 0x056E   (0x0001)  
	bool                                               TransitionRuleToDefaultPose;                                // 0x056F   (0x0001)  
	bool                                               ExitFromInAirLand;                                          // 0x0570   (0x0001)  
	bool                                               IsGrindRailSwing;                                           // 0x0571   (0x0001)  
	unsigned char                                      UnknownData05_5[0x2];                                       // 0x0572   (0x0002)  MISSED
	int32_t                                            CurrentTechniqueBranch;                                     // 0x0574   (0x0004)  
	int32_t                                            PreviousTechniqueBranch;                                    // 0x0578   (0x0004)  
	FName                                              PelvisSocket;                                               // 0x057C   (0x0004)  
	FVector                                            ScabbardLocOffsetVeh;                                       // 0x0580   (0x0018)  
	FRotator                                           ScabbardRotOffsetVeh;                                       // 0x0598   (0x0018)  
	float                                              DashChargePlayRate;                                         // 0x05B0   (0x0004)  
	unsigned char                                      UnknownData06_6[0xC];                                       // 0x05B4   (0x000C)  MISSED
};

/// Class /Script/KatanaGameplayRuntime.KatanaTargetingComponent
/// Size: 0x0270 (0x0000A0 - 0x000310)
class UKatanaTargetingComponent : public UFortWeaponComponent
{ 
public:
	class UClass*                                      KatanaTechniqueAbilityClass;                                // 0x00A0   (0x0008)  
	class UFortGameplayAbility*                        CachedTechniqueAbilityCDO;                                  // 0x00A8   (0x0008)  
	FScalableFloat                                     DashDistance;                                               // 0x00B0   (0x0028)  
	FScalableFloat                                     AdditionalDashForwardAttackRange;                           // 0x00D8   (0x0028)  
	FScalableFloat                                     AdditionalOutOfRangeDetection;                              // 0x0100   (0x0028)  
	FScalableFloat                                     DashOffsetFromTarget;                                       // 0x0128   (0x0028)  
	FScalableFloat                                     PropRemainingHealthToDestroy;                               // 0x0150   (0x0028)  
	FScalableFloat                                     BuildingRemainingHealthToDestroy;                           // 0x0178   (0x0028)  
	FGameplayTagContainer                              DashBlockingBuildingTags;                                   // 0x01A0   (0x0020)  
	SDK_UNDEFINED(80,14828) /* TSet<UClass*> */        __um(DashBlockingBuildingClasses);                          // 0x01C0   (0x0050)  
	FFortAbilityTargetSelectionList                    PawnTargetSelectionList;                                    // 0x0210   (0x0048)  
	SDK_UNDEFINED(1,14829) /* TEnumAsByte<ECollisionChannel> */ __um(DashTraceChannel);                            // 0x0258   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0259   (0x0003)  MISSED
	float                                              ObstructionOverlapBoxHalfSize;                              // 0x025C   (0x0004)  
	FFortTargetFilter                                  ObstructionTargetFilter;                                    // 0x0260   (0x0038)  
	FGameplayTagContainer                              DashBlockIgnoreTags;                                        // 0x0298   (0x0020)  
	SDK_UNDEFINED(80,14830) /* TMap<EFortKatanaPrimaryAttackVariation, FFortKatanaPrimaryAttackVariationInfo> */ __um(PrimaryAttackVariationInfos); // 0x02B8   (0x0050)  
	float                                              PrimaryAttackMinForwardMovement;                            // 0x0308   (0x0004)  
	SDK_UNDEFINED(1,14831) /* TEnumAsByte<ECollisionChannel> */ __um(PrimaryAttackObstructionTraceChannel);        // 0x030C   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x030D   (0x0003)  MISSED


	/// Functions
	// Function /Script/KatanaGameplayRuntime.KatanaTargetingComponent.PerformPrimaryAttackTargeting
	// FVector PerformPrimaryAttackTargeting(EFortKatanaPrimaryAttackVariation AttackVariation);                             // [0xa8bb76c] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/KatanaGameplayRuntime.KatanaTargetingComponent.PerformDashTargeting
	// bool PerformDashTargeting(FFortKatanaDashTargetingInfo& OutDashTargetingInfo);                                        // [0xa8bb68c] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/KatanaGameplayRuntime.FortKatanaPrimaryAttackVariationInfo
/// Size: 0x0098 (0x000000 - 0x000098)
struct FFortKatanaPrimaryAttackVariationInfo
{ 
	FScalableFloat                                     Range;                                                      // 0x0000   (0x0028)  
	FScalableFloat                                     OffsetFromTarget;                                           // 0x0028   (0x0028)  
	FFortAbilityTargetSelectionList                    TargetSelectionList;                                        // 0x0050   (0x0048)  
};

/// Struct /Script/KatanaGameplayRuntime.FortKatanaDashTargetingInfo
/// Size: 0x0040 (0x000000 - 0x000040)
struct FFortKatanaDashTargetingInfo
{ 
	FVector                                            DashDirection;                                              // 0x0000   (0x0018)  
	float                                              DashDistance;                                               // 0x0018   (0x0004)  
	SDK_UNDEFINED(8,14832) /* TWeakObjectPtr<AActor*> */ __um(DashBlockingActor);                                  // 0x001C   (0x0008)  
	bool                                               bWasDashDirectionAdjusted;                                  // 0x0024   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0025   (0x0003)  MISSED
	TArray<class AActor*>                              DamagedActors;                                              // 0x0028   (0x0010)  
	float                                              OutOfRangePercent;                                          // 0x0038   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x003C   (0x0004)  MISSED
};

