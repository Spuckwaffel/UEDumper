
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
/// dependency: GameplayTags
/// dependency: MantisRuntime
/// dependency: ModularGameplay

/// Class /Script/KatanaGameplayRuntime.FortKatanaLayerAnimInstance
/// Size: 0x0170 (0x001630 - 0x0017A0)
class UFortKatanaLayerAnimInstance : public UFortMantisLayerAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 6048;

public:
	DMember(bool)                                      IsDashCharge                                                OFFSET(get<bool>, {0x1630, 1, 0, 0})
	CMember(class AFortPlayerPawn*)                    AsFortPlayerPawn                                            OFFSET(get<T>, {0x1638, 8, 0, 0})
	DMember(bool)                                      IsBMeleeKatana                                              OFFSET(get<bool>, {0x1640, 1, 0, 0})
	DMember(float)                                     HandIKHipAttachAlpha                                        OFFSET(get<float>, {0x1644, 4, 0, 0})
	SMember(FVector)                                   LeftAttachedHandIKLoc                                       OFFSET(getStruct<T>, {0x1648, 24, 0, 0})
	SMember(FRotator)                                  LeftAttachedhandIKRot                                       OFFSET(getStruct<T>, {0x1660, 24, 0, 0})
	SMember(FVector)                                   RightWeaponLoc                                              OFFSET(getStruct<T>, {0x1678, 24, 0, 0})
	SMember(FRotator)                                  RightWeaponRot                                              OFFSET(getStruct<T>, {0x1690, 24, 0, 0})
	SMember(FVector)                                   LeftAttachedHandIKLocOffsetMED                              OFFSET(getStruct<T>, {0x16A8, 24, 0, 0})
	SMember(FRotator)                                  LeftAttachedHandIKRotOffset                                 OFFSET(getStruct<T>, {0x16C0, 24, 0, 0})
	SMember(FVector)                                   RightWeaponLocOffsetMED                                     OFFSET(getStruct<T>, {0x16D8, 24, 0, 0})
	SMember(FRotator)                                  RightWeaponRotOffset                                        OFFSET(getStruct<T>, {0x16F0, 24, 0, 0})
	DMember(bool)                                      IsDashAttack                                                OFFSET(get<bool>, {0x1708, 1, 0, 0})
	DMember(bool)                                      IsDashOutro                                                 OFFSET(get<bool>, {0x1709, 1, 0, 0})
	DMember(float)                                     PelvisAOAlpha                                               OFFSET(get<float>, {0x170C, 4, 0, 0})
	DMember(float)                                     ClampedAimPitch                                             OFFSET(get<float>, {0x1710, 4, 0, 0})
	DMember(bool)                                      EarlyExitFromDashOutro                                      OFFSET(get<bool>, {0x1714, 1, 0, 0})
	DMember(bool)                                      IsTechniqueActive                                           OFFSET(get<bool>, {0x1715, 1, 0, 0})
	DMember(bool)                                      IsPrimaryAttack                                             OFFSET(get<bool>, {0x1716, 1, 0, 0})
	DMember(float)                                     WeaponHipAttachAlpha                                        OFFSET(get<float>, {0x1718, 4, 0, 0})
	SMember(FVector)                                   LeftAttachedHandIKLocOffsetLRG                              OFFSET(getStruct<T>, {0x1720, 24, 0, 0})
	SMember(FVector)                                   RightWeaponLocOffsetLRG                                     OFFSET(getStruct<T>, {0x1738, 24, 0, 0})
	DMember(float)                                     FeetCorrectionAlpha                                         OFFSET(get<float>, {0x1750, 4, 0, 0})
	DMember(bool)                                      IsInAirAttackLeap                                           OFFSET(get<bool>, {0x1754, 1, 0, 0})
	DMember(bool)                                      ShouldStartDashOutro                                        OFFSET(get<bool>, {0x1755, 1, 0, 0})
	DMember(bool)                                      StartedDashOutro                                            OFFSET(get<bool>, {0x1756, 1, 0, 0})
	SMember(FScalableFloat)                            DashRootMotionDuration                                      OFFSET(getStruct<T>, {0x1758, 40, 0, 0})
	DMember(bool)                                      IsPrimaryAttack2                                            OFFSET(get<bool>, {0x1780, 1, 0, 0})
	DMember(bool)                                      IsAirAttackSlam                                             OFFSET(get<bool>, {0x1781, 1, 0, 0})
	DMember(bool)                                      TransitionRuleToDefault                                     OFFSET(get<bool>, {0x1782, 1, 0, 0})
	DMember(bool)                                      IsGrindRailSwing                                            OFFSET(get<bool>, {0x1783, 1, 0, 0})
	DMember(bool)                                      CanExitDashCharge                                           OFFSET(get<bool>, {0x1784, 1, 0, 0})
	DMember(float)                                     DashChargePlayRate                                          OFFSET(get<float>, {0x1788, 4, 0, 0})
	DMember(float)                                     YawForKatanaDashAO                                          OFFSET(get<float>, {0x178C, 4, 0, 0})
};

/// Class /Script/KatanaGameplayRuntime.FortKatanaWeaponAnimInstance
/// Size: 0x0150 (0x000470 - 0x0005C0)
class UFortKatanaWeaponAnimInstance : public UFortMantisAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1472;

public:
	CMember(class AFortPlayerPawn*)                    AsFortPlayerPawn                                            OFFSET(get<T>, {0x468, 8, 0, 0})
	CMember(class AFortWeapon*)                        BMeleeKatanaAsWeapon                                        OFFSET(get<T>, {0x470, 8, 0, 0})
	DMember(bool)                                      IsBMeleeKatana                                              OFFSET(get<bool>, {0x478, 1, 0, 0})
	DMember(float)                                     LocalLeftHandIKAlpha                                        OFFSET(get<float>, {0x47C, 4, 0, 0})
	DMember(float)                                     LocalRightHandIKAlpha                                       OFFSET(get<float>, {0x480, 4, 0, 0})
	DMember(bool)                                      IsDashCharge                                                OFFSET(get<bool>, {0x484, 1, 0, 0})
	DMember(bool)                                      IsDashAttack                                                OFFSET(get<bool>, {0x485, 1, 0, 0})
	DMember(float)                                     SwordPlayRate                                               OFFSET(get<float>, {0x488, 4, 0, 0})
	DMember(bool)                                      IsInAirAttack_Leap                                          OFFSET(get<bool>, {0x48C, 1, 0, 0})
	DMember(bool)                                      IsInAirAttack_Slam                                          OFFSET(get<bool>, {0x48D, 1, 0, 0})
	CMember(class UFortKatanaLayerAnimInstance*)       KatanaPlayer                                                OFFSET(get<T>, {0x490, 8, 0, 0})
	DMember(bool)                                      EarlyExitFromDashOutro                                      OFFSET(get<bool>, {0x498, 1, 0, 0})
	DMember(bool)                                      IsDashOutro                                                 OFFSET(get<bool>, {0x499, 1, 0, 0})
	SMember(FVector)                                   ScabbardLoc                                                 OFFSET(getStruct<T>, {0x4A0, 24, 0, 0})
	SMember(FRotator)                                  ScabbardRot                                                 OFFSET(getStruct<T>, {0x4B8, 24, 0, 0})
	SMember(FVector)                                   ScabbardLocOffset                                           OFFSET(getStruct<T>, {0x4D0, 24, 0, 0})
	SMember(FRotator)                                  ScabbardRotOffset                                           OFFSET(getStruct<T>, {0x4E8, 24, 0, 0})
	DMember(bool)                                      IsSurfaceSwimming                                           OFFSET(get<bool>, {0x500, 1, 0, 0})
	DMember(bool)                                      IsTechniqueActive                                           OFFSET(get<bool>, {0x501, 1, 0, 0})
	SMember(FVector)                                   SwordLoc                                                    OFFSET(getStruct<T>, {0x508, 24, 0, 0})
	SMember(FRotator)                                  SwordRot                                                    OFFSET(getStruct<T>, {0x520, 24, 0, 0})
	SMember(FVector)                                   SwordLocOffset                                              OFFSET(getStruct<T>, {0x538, 24, 0, 0})
	SMember(FRotator)                                  SwordRotOffset                                              OFFSET(getStruct<T>, {0x550, 24, 0, 0})
	DMember(bool)                                      IsRidingSwing                                               OFFSET(get<bool>, {0x568, 1, 0, 0})
	DMember(bool)                                      IsPrimaryAttack                                             OFFSET(get<bool>, {0x569, 1, 0, 0})
	DMember(bool)                                      IsPrimaryAttack2                                            OFFSET(get<bool>, {0x56A, 1, 0, 0})
	DMember(bool)                                      ExitFromPrimaryAttack                                       OFFSET(get<bool>, {0x56B, 1, 0, 0})
	DMember(bool)                                      ExitFromPrimaryAttack2                                      OFFSET(get<bool>, {0x56C, 1, 0, 0})
	DMember(bool)                                      NonPrimaryAttackState                                       OFFSET(get<bool>, {0x56D, 1, 0, 0})
	DMember(bool)                                      IsComboAttack                                               OFFSET(get<bool>, {0x56E, 1, 0, 0})
	DMember(bool)                                      TransitionRuleToDefaultPose                                 OFFSET(get<bool>, {0x56F, 1, 0, 0})
	DMember(bool)                                      ExitFromInAirLand                                           OFFSET(get<bool>, {0x570, 1, 0, 0})
	DMember(bool)                                      IsGrindRailSwing                                            OFFSET(get<bool>, {0x571, 1, 0, 0})
	DMember(int32_t)                                   CurrentTechniqueBranch                                      OFFSET(get<int32_t>, {0x574, 4, 0, 0})
	DMember(int32_t)                                   PreviousTechniqueBranch                                     OFFSET(get<int32_t>, {0x578, 4, 0, 0})
	SMember(FName)                                     PelvisSocket                                                OFFSET(getStruct<T>, {0x57C, 4, 0, 0})
	SMember(FVector)                                   ScabbardLocOffsetVeh                                        OFFSET(getStruct<T>, {0x580, 24, 0, 0})
	SMember(FRotator)                                  ScabbardRotOffsetVeh                                        OFFSET(getStruct<T>, {0x598, 24, 0, 0})
	DMember(float)                                     DashChargePlayRate                                          OFFSET(get<float>, {0x5B0, 4, 0, 0})
};

/// Class /Script/KatanaGameplayRuntime.KatanaTargetingComponent
/// Size: 0x0270 (0x0000A0 - 0x000310)
class UKatanaTargetingComponent : public UFortWeaponComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 784;

public:
	CMember(class UClass*)                             KatanaTechniqueAbilityClass                                 OFFSET(get<T>, {0xA0, 8, 0, 0})
	CMember(class UFortGameplayAbility*)               CachedTechniqueAbilityCDO                                   OFFSET(get<T>, {0xA8, 8, 0, 0})
	SMember(FScalableFloat)                            DashDistance                                                OFFSET(getStruct<T>, {0xB0, 40, 0, 0})
	SMember(FScalableFloat)                            AdditionalDashForwardAttackRange                            OFFSET(getStruct<T>, {0xD8, 40, 0, 0})
	SMember(FScalableFloat)                            AdditionalOutOfRangeDetection                               OFFSET(getStruct<T>, {0x100, 40, 0, 0})
	SMember(FScalableFloat)                            DashOffsetFromTarget                                        OFFSET(getStruct<T>, {0x128, 40, 0, 0})
	SMember(FScalableFloat)                            PropRemainingHealthToDestroy                                OFFSET(getStruct<T>, {0x150, 40, 0, 0})
	SMember(FScalableFloat)                            BuildingRemainingHealthToDestroy                            OFFSET(getStruct<T>, {0x178, 40, 0, 0})
	SMember(FGameplayTagContainer)                     DashBlockingBuildingTags                                    OFFSET(getStruct<T>, {0x1A0, 32, 0, 0})
	CMember(TSet<UClass*>)                             DashBlockingBuildingClasses                                 OFFSET(get<T>, {0x1C0, 80, 0, 0})
	SMember(FFortAbilityTargetSelectionList)           PawnTargetSelectionList                                     OFFSET(getStruct<T>, {0x210, 72, 0, 0})
	CMember(TEnumAsByte<ECollisionChannel>)            DashTraceChannel                                            OFFSET(get<T>, {0x258, 1, 0, 0})
	DMember(float)                                     ObstructionOverlapBoxHalfSize                               OFFSET(get<float>, {0x25C, 4, 0, 0})
	SMember(FFortTargetFilter)                         ObstructionTargetFilter                                     OFFSET(getStruct<T>, {0x260, 56, 0, 0})
	SMember(FGameplayTagContainer)                     DashBlockIgnoreTags                                         OFFSET(getStruct<T>, {0x298, 32, 0, 0})
	CMember(TMap<EFortKatanaPrimaryAttackVariation, FFortKatanaPrimaryAttackVariationInfo>) PrimaryAttackVariationInfos OFFSET(get<T>, {0x2B8, 80, 0, 0})
	DMember(float)                                     PrimaryAttackMinForwardMovement                             OFFSET(get<float>, {0x308, 4, 0, 0})
	CMember(TEnumAsByte<ECollisionChannel>)            PrimaryAttackObstructionTraceChannel                        OFFSET(get<T>, {0x30C, 1, 0, 0})


	/// Functions
	// Function /Script/KatanaGameplayRuntime.KatanaTargetingComponent.PerformPrimaryAttackTargeting
	// FVector PerformPrimaryAttackTargeting(EFortKatanaPrimaryAttackVariation AttackVariation);                                // [0xa8bb76c] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/KatanaGameplayRuntime.KatanaTargetingComponent.PerformDashTargeting
	// bool PerformDashTargeting(FFortKatanaDashTargetingInfo& OutDashTargetingInfo);                                           // [0xa8bb68c] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/KatanaGameplayRuntime.FortKatanaPrimaryAttackVariationInfo
/// Size: 0x0098 (0x000000 - 0x000098)
class FFortKatanaPrimaryAttackVariationInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	SMember(FScalableFloat)                            Range                                                       OFFSET(getStruct<T>, {0x0, 40, 0, 0})
	SMember(FScalableFloat)                            OffsetFromTarget                                            OFFSET(getStruct<T>, {0x28, 40, 0, 0})
	SMember(FFortAbilityTargetSelectionList)           TargetSelectionList                                         OFFSET(getStruct<T>, {0x50, 72, 0, 0})
};

/// Struct /Script/KatanaGameplayRuntime.FortKatanaDashTargetingInfo
/// Size: 0x0040 (0x000000 - 0x000040)
class FFortKatanaDashTargetingInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FVector)                                   DashDirection                                               OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	DMember(float)                                     DashDistance                                                OFFSET(get<float>, {0x18, 4, 0, 0})
	CMember(TWeakObjectPtr<AActor*>)                   DashBlockingActor                                           OFFSET(get<T>, {0x1C, 8, 0, 0})
	DMember(bool)                                      bWasDashDirectionAdjusted                                   OFFSET(get<bool>, {0x24, 1, 0, 0})
	CMember(TArray<class AActor*>)                     DamagedActors                                               OFFSET(get<T>, {0x28, 16, 0, 0})
	DMember(float)                                     OutOfRangePercent                                           OFFSET(get<float>, {0x38, 4, 0, 0})
};

/// Enum /Script/KatanaGameplayRuntime.EFortKatanaPrimaryAttackVariation
/// Size: 0x04
enum class EFortKatanaPrimaryAttackVariation : uint8_t
{
	EFortKatanaPrimaryAttackVariation__OnGroundFirst                                 = 0,
	EFortKatanaPrimaryAttackVariation__OnGroundSecond                                = 1,
	EFortKatanaPrimaryAttackVariation__InAir                                         = 2,
	EFortKatanaPrimaryAttackVariation__EFortKatanaPrimaryAttackVariation_MAX         = 3
};

