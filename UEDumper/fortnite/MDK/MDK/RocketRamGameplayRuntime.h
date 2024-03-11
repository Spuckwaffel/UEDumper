
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame

/// Class /Script/RocketRamGameplayRuntime.RocketRamItemLayerAnimInstance
/// Size: 0x00E0 (0x0006F0 - 0x0007D0)
class URocketRamItemLayerAnimInstance : public UFortItemLayerAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2000;

public:
	DMember(bool)                                      bIsRRWindUp                                                 OFFSET(get<bool>, {0x6F0, 1, 0, 0})
	DMember(bool)                                      bIsRRSlowAcceleration                                       OFFSET(get<bool>, {0x6F1, 1, 0, 0})
	DMember(bool)                                      bIsRRActiveThrust                                           OFFSET(get<bool>, {0x6F2, 1, 0, 0})
	DMember(bool)                                      bIsRRFreeFall                                               OFFSET(get<bool>, {0x6F3, 1, 0, 0})
	DMember(bool)                                      bIsRRFastFreeFall                                           OFFSET(get<bool>, {0x6F4, 1, 0, 0})
	DMember(bool)                                      bIsRRBraking                                                OFFSET(get<bool>, {0x6F5, 1, 0, 0})
	DMember(bool)                                      bIsRRRecovery                                               OFFSET(get<bool>, {0x6F6, 1, 0, 0})
	DMember(bool)                                      bIsRRRecoveryDelayed                                        OFFSET(get<bool>, {0x6F7, 1, 0, 0})
	DMember(bool)                                      bIsRRRecoveryHalfSecDelay                                   OFFSET(get<bool>, {0x6F8, 1, 0, 0})
	DMember(bool)                                      bIsRROff                                                    OFFSET(get<bool>, {0x6F9, 1, 0, 0})
	DMember(bool)                                      bIsFalling                                                  OFFSET(get<bool>, {0x6FA, 1, 0, 0})
	DMember(bool)                                      bIsSliding                                                  OFFSET(get<bool>, {0x6FB, 1, 0, 0})
	DMember(bool)                                      bIsCrouchingLocal                                           OFFSET(get<bool>, {0x6FC, 1, 0, 0})
	DMember(float)                                     XInput                                                      OFFSET(get<float>, {0x700, 4, 0, 0})
	DMember(float)                                     YInput                                                      OFFSET(get<float>, {0x704, 4, 0, 0})
	DMember(float)                                     pitch                                                       OFFSET(get<float>, {0x708, 4, 0, 0})
	DMember(float)                                     Yaw                                                         OFFSET(get<float>, {0x70C, 4, 0, 0})
	DMember(float)                                     WallImpactPitch                                             OFFSET(get<float>, {0x710, 4, 0, 0})
	DMember(float)                                     WallImpactYaw                                               OFFSET(get<float>, {0x714, 4, 0, 0})
	SMember(FVector)                                   WeaponLaunchDirection                                       OFFSET(getStruct<T>, {0x718, 24, 0, 0})
	DMember(bool)                                      bIsBoneRotOn                                                OFFSET(get<bool>, {0x730, 1, 0, 0})
	DMember(bool)                                      bIsPitchAndYawRot                                           OFFSET(get<bool>, {0x731, 1, 0, 0})
	DMember(bool)                                      bIsNoMortar                                                 OFFSET(get<bool>, {0x732, 1, 0, 0})
	DMember(bool)                                      bIsGoingUp                                                  OFFSET(get<bool>, {0x733, 1, 0, 0})
	DMember(bool)                                      bIsJumpFromGround                                           OFFSET(get<bool>, {0x734, 1, 0, 0})
	DMember(bool)                                      bIsMoving2DLocal                                            OFFSET(get<bool>, {0x735, 1, 0, 0})
	DMember(float)                                     AdditiveSquatAlpha                                          OFFSET(get<float>, {0x738, 4, 0, 0})
	DMember(float)                                     JumpAddCurveAlpha                                           OFFSET(get<float>, {0x73C, 4, 0, 0})
	DMember(float)                                     ArmsHeadAddAlpha                                            OFFSET(get<float>, {0x740, 4, 0, 0})
	DMember(float)                                     JumpAddOffsetAlpha                                          OFFSET(get<float>, {0x744, 4, 0, 0})
	DMember(bool)                                      bIsImpactWallBackup                                         OFFSET(get<bool>, {0x748, 1, 0, 0})
	DMember(bool)                                      bIsLandingDetected                                          OFFSET(get<bool>, {0x749, 1, 0, 0})
	DMember(bool)                                      bIsWallImpact                                               OFFSET(get<bool>, {0x74A, 1, 0, 0})
	DMember(bool)                                      bIsApexTimerEnd                                             OFFSET(get<bool>, {0x74B, 1, 0, 0})
	CMember(class AFortPlayerPawn*)                    FortPlayerPawn                                              OFFSET(get<T>, {0x750, 8, 0, 0})
	CMember(class AFortWeapon*)                        WeaponRocketRam                                             OFFSET(get<T>, {0x758, 8, 0, 0})
	DMember(float)                                     FBImpactGroundStateAlpha                                    OFFSET(get<float>, {0x760, 4, 0, 0})
	DMember(bool)                                      bFBGroundSlideToFBWait                                      OFFSET(get<bool>, {0x764, 1, 0, 0})
	DMember(bool)                                      bFBThrustingToFBApex                                        OFFSET(get<bool>, {0x765, 1, 0, 0})
	DMember(bool)                                      bFBApexToFBToMortar                                         OFFSET(get<bool>, {0x766, 1, 0, 0})
	DMember(bool)                                      bFBOffGroundToFBImpactGround                                OFFSET(get<bool>, {0x767, 1, 0, 0})
	DMember(bool)                                      bFBOffWallToFBImpactWall                                    OFFSET(get<bool>, {0x768, 1, 0, 0})
	DMember(bool)                                      bFBDetectGroundToFBToImpactGround                           OFFSET(get<bool>, {0x769, 1, 0, 0})
	DMember(float)                                     FBJumpStateAlpha                                            OFFSET(get<float>, {0x76C, 4, 0, 0})
	DMember(float)                                     FBToApexStateAlpha                                          OFFSET(get<float>, {0x770, 4, 0, 0})
	DMember(bool)                                      bFBDetectSlideToFBToSlide                                   OFFSET(get<bool>, {0x774, 1, 0, 0})
	DMember(bool)                                      bFBOffToFBWait                                              OFFSET(get<bool>, {0x775, 1, 0, 0})
	DMember(float)                                     UBPullLeverStateAlpha                                       OFFSET(get<float>, {0x778, 4, 0, 0})
	DMember(float)                                     UBSquatStateAlpha                                           OFFSET(get<float>, {0x77C, 4, 0, 0})
	DMember(float)                                     UBJumpStateAlpha                                            OFFSET(get<float>, {0x780, 4, 0, 0})
	DMember(bool)                                      bUBSquatToUBJump                                            OFFSET(get<bool>, {0x784, 1, 0, 0})
	DMember(bool)                                      bUBJumpToUBWait                                             OFFSET(get<bool>, {0x785, 1, 0, 0})
	DMember(bool)                                      bUBJumpToUBToGroundImpact                                   OFFSET(get<bool>, {0x786, 1, 0, 0})
	DMember(bool)                                      bUBWaitToUBImpactGround                                     OFFSET(get<bool>, {0x787, 1, 0, 0})
	DMember(bool)                                      bUBOffToUBWait                                              OFFSET(get<bool>, {0x788, 1, 0, 0})
};

