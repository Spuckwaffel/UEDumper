
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

/// Class /Script/LinedNotebookGameplayRuntime.LinedNotebookItemLayerAnimInstance
/// Size: 0x0140 (0x0006F0 - 0x000830)
class ULinedNotebookItemLayerAnimInstance : public UFortItemLayerAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2096;

public:
	SMember(FGameplayTag)                              IsInAirAttackTag                                            OFFSET(getStruct<T>, {0x6F0, 4, 0, 0})
	SMember(FGameplayTag)                              IsDoubleJumpingTag                                          OFFSET(getStruct<T>, {0x6F4, 4, 0, 0})
	SMember(FGameplayTag)                              IsSurfaceSwimmingTag                                        OFFSET(getStruct<T>, {0x6F8, 4, 0, 0})
	SMember(FGameplayTag)                              IsRidingMotorcycleTag                                       OFFSET(getStruct<T>, {0x6FC, 4, 0, 0})
	SMember(FGameplayTag)                              IsGrindRailTag                                              OFFSET(getStruct<T>, {0x700, 4, 0, 0})
	CMember(class UAnimSequenceBase*)                  DoubleJumpSequenceForward                                   OFFSET(get<T>, {0x708, 8, 0, 0})
	CMember(class UAnimSequenceBase*)                  DoubleJumpSequenceBackward                                  OFFSET(get<T>, {0x710, 8, 0, 0})
	CMember(class UAnimSequenceBase*)                  DoubleJumpSequenceLeft                                      OFFSET(get<T>, {0x718, 8, 0, 0})
	CMember(class UAnimSequenceBase*)                  DoubleJumpSequenceRight                                     OFFSET(get<T>, {0x720, 8, 0, 0})
	CMember(class UAnimSequenceBase*)                  EvergreenMotorcyclePose                                     OFFSET(get<T>, {0x728, 8, 0, 0})
	CMember(class UAnimSequenceBase*)                  EvergreenSlidingPose                                        OFFSET(get<T>, {0x730, 8, 0, 0})
	CMember(class UAnimSequenceBase*)                  EvergreenGrindRailPose                                      OFFSET(get<T>, {0x738, 8, 0, 0})
	CMember(class UAnimSequenceBase*)                  TacSprintHandPose                                           OFFSET(get<T>, {0x740, 8, 0, 0})
	CMember(TWeakObjectPtr<UAnimMontage*>)             DashMontage                                                 OFFSET(get<T>, {0x748, 32, 0, 0})
	CMember(TWeakObjectPtr<UAnimMontage*>)             DeltaEquipMontage                                           OFFSET(get<T>, {0x768, 32, 0, 0})
	CMember(TArray<TWeakObjectPtr<UAnimMontage*>>)     SwingMontages                                               OFFSET(get<T>, {0x788, 16, 0, 0})
	SMember(FAlphaBlendArgs)                           DeltaEquipBlendOut                                          OFFSET(getStruct<T>, {0x798, 16, 0, 0})
	DMember(bool)                                      bUseOceanRiverTacSprint                                     OFFSET(get<bool>, {0x7A8, 1, 0, 0})
	DMember(bool)                                      bUseDeltaTacSprint                                          OFFSET(get<bool>, {0x7A9, 1, 0, 0})
	DMember(bool)                                      bIsDelta                                                    OFFSET(get<bool>, {0x7AA, 1, 0, 0})
	CMember(class UAnimSequenceBase*)                  DoubleJumpSequence                                          OFFSET(get<T>, {0x7B0, 8, 0, 0})
	CMember(class UAnimSequenceBase*)                  EvergreenPose                                               OFFSET(get<T>, {0x7B8, 8, 0, 0})
	DMember(float)                                     Yaw                                                         OFFSET(get<float>, {0x7C0, 4, 0, 0})
	DMember(float)                                     YawAdjusted                                                 OFFSET(get<float>, {0x7C4, 4, 0, 0})
	DMember(float)                                     pitch                                                       OFFSET(get<float>, {0x7C8, 4, 0, 0})
	DMember(float)                                     RotationAlpha                                               OFFSET(get<float>, {0x7CC, 4, 0, 0})
	DMember(float)                                     DeltaDoorBashRightArmAlpha                                  OFFSET(get<float>, {0x7D0, 4, 0, 0})
	DMember(bool)                                      bIsDoubleJumping                                            OFFSET(get<bool>, {0x7D4, 1, 1, 0})
	DMember(bool)                                      bIsDoubleJumpStart                                          OFFSET(get<bool>, {0x7D4, 1, 1, 1})
	DMember(bool)                                      bIsDashLoop                                                 OFFSET(get<bool>, {0x7D4, 1, 1, 2})
	DMember(bool)                                      bIsNoDashOrDoubleJump                                       OFFSET(get<bool>, {0x7D4, 1, 1, 3})
	DMember(bool)                                      bIsExitDoubleJump                                           OFFSET(get<bool>, {0x7D4, 1, 1, 4})
	DMember(bool)                                      bIsDeltaWaterJump                                           OFFSET(get<bool>, {0x7D4, 1, 1, 5})
	DMember(bool)                                      bIsWaterLanding                                             OFFSET(get<bool>, {0x7D4, 1, 1, 6})
	DMember(bool)                                      bIsNotDeltaSwimJump                                         OFFSET(get<bool>, {0x7D4, 1, 1, 7})
	DMember(bool)                                      bIsEvergreenUB                                              OFFSET(get<bool>, {0x7D5, 1, 1, 0})
	DMember(bool)                                      bIsOceanRiverTacSprint                                      OFFSET(get<bool>, {0x7D5, 1, 1, 1})
	DMember(bool)                                      bIsDeltaTacSprint                                           OFFSET(get<bool>, {0x7D5, 1, 1, 2})
	DMember(bool)                                      bIsParachuting                                              OFFSET(get<bool>, {0x7D5, 1, 1, 3})
	DMember(bool)                                      bIsDolphinDoubleJump                                        OFFSET(get<bool>, {0x7D5, 1, 1, 4})
};

/// Class /Script/LinedNotebookGameplayRuntime.LinedNotebookLakeWeaponAnimInstance
/// Size: 0x0090 (0x000470 - 0x000500)
class ULinedNotebookLakeWeaponAnimInstance : public UFortWeaponAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1280;

public:
	CMember(TArray<TWeakObjectPtr<UAnimMontage*>>)     Swing01Montages                                             OFFSET(get<T>, {0x468, 16, 0, 0})
	CMember(TArray<TWeakObjectPtr<UAnimMontage*>>)     Swing02Montages                                             OFFSET(get<T>, {0x478, 16, 0, 0})
	CMember(TArray<TWeakObjectPtr<UAnimMontage*>>)     Swing03Montages                                             OFFSET(get<T>, {0x488, 16, 0, 0})
	CMember(TArray<TWeakObjectPtr<UAnimMontage*>>)     Swing04Montages                                             OFFSET(get<T>, {0x498, 16, 0, 0})
	CMember(TArray<TWeakObjectPtr<UAnimMontage*>>)     Swing05Montages                                             OFFSET(get<T>, {0x4A8, 16, 0, 0})
	CMember(TArray<TWeakObjectPtr<UAnimMontage*>>)     UpperBodySwing01Montages                                    OFFSET(get<T>, {0x4B8, 16, 0, 0})
	CMember(TArray<TWeakObjectPtr<UAnimMontage*>>)     UpperBodySwing02Montages                                    OFFSET(get<T>, {0x4C8, 16, 0, 0})
	CMember(TArray<TWeakObjectPtr<UAnimMontage*>>)     InAirAttackMontages                                         OFFSET(get<T>, {0x4D8, 16, 0, 0})
	DMember(bool)                                      bIsEquipping                                                OFFSET(get<bool>, {0x4E8, 1, 0, 0})
	DMember(bool)                                      bSwing01                                                    OFFSET(get<bool>, {0x4E9, 1, 0, 0})
	DMember(bool)                                      bSwing02                                                    OFFSET(get<bool>, {0x4EA, 1, 0, 0})
	DMember(bool)                                      bSwing03                                                    OFFSET(get<bool>, {0x4EB, 1, 0, 0})
	DMember(bool)                                      bSwing04                                                    OFFSET(get<bool>, {0x4EC, 1, 0, 0})
	DMember(bool)                                      bSwing05                                                    OFFSET(get<bool>, {0x4ED, 1, 0, 0})
	DMember(bool)                                      bIsUpperBodySwing01                                         OFFSET(get<bool>, {0x4EE, 1, 0, 0})
	DMember(bool)                                      bIsUpperBodySwing02                                         OFFSET(get<bool>, {0x4EF, 1, 0, 0})
	DMember(bool)                                      bIsAirLand                                                  OFFSET(get<bool>, {0x4F0, 1, 0, 0})
};

/// Class /Script/LinedNotebookGameplayRuntime.LinedNotebookRiverWeaponAnimInstance
/// Size: 0x0010 (0x000470 - 0x000480)
class ULinedNotebookRiverWeaponAnimInstance : public UFortWeaponAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1152;

public:
	CMember(TArray<TWeakObjectPtr<UAnimMontage*>>)     InAirMontages                                               OFFSET(get<T>, {0x468, 16, 0, 0})
	DMember(bool)                                      bIsAirLand                                                  OFFSET(get<bool>, {0x478, 1, 0, 0})
};

