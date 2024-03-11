
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame

/// Class /Script/RocketRamGameplayRuntime.RocketRamItemLayerAnimInstance
/// Size: 0x00E0 (0x0006F0 - 0x0007D0)
class URocketRamItemLayerAnimInstance : public UFortItemLayerAnimInstance
{ 
public:
	bool                                               bIsRRWindUp;                                                // 0x06F0   (0x0001)  
	bool                                               bIsRRSlowAcceleration;                                      // 0x06F1   (0x0001)  
	bool                                               bIsRRActiveThrust;                                          // 0x06F2   (0x0001)  
	bool                                               bIsRRFreeFall;                                              // 0x06F3   (0x0001)  
	bool                                               bIsRRFastFreeFall;                                          // 0x06F4   (0x0001)  
	bool                                               bIsRRBraking;                                               // 0x06F5   (0x0001)  
	bool                                               bIsRRRecovery;                                              // 0x06F6   (0x0001)  
	bool                                               bIsRRRecoveryDelayed;                                       // 0x06F7   (0x0001)  
	bool                                               bIsRRRecoveryHalfSecDelay;                                  // 0x06F8   (0x0001)  
	bool                                               bIsRROff;                                                   // 0x06F9   (0x0001)  
	bool                                               bIsFalling;                                                 // 0x06FA   (0x0001)  
	bool                                               bIsSliding;                                                 // 0x06FB   (0x0001)  
	bool                                               bIsCrouchingLocal;                                          // 0x06FC   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x06FD   (0x0003)  MISSED
	float                                              XInput;                                                     // 0x0700   (0x0004)  
	float                                              YInput;                                                     // 0x0704   (0x0004)  
	float                                              pitch;                                                      // 0x0708   (0x0004)  
	float                                              Yaw;                                                        // 0x070C   (0x0004)  
	float                                              WallImpactPitch;                                            // 0x0710   (0x0004)  
	float                                              WallImpactYaw;                                              // 0x0714   (0x0004)  
	FVector                                            WeaponLaunchDirection;                                      // 0x0718   (0x0018)  
	bool                                               bIsBoneRotOn;                                               // 0x0730   (0x0001)  
	bool                                               bIsPitchAndYawRot;                                          // 0x0731   (0x0001)  
	bool                                               bIsNoMortar;                                                // 0x0732   (0x0001)  
	bool                                               bIsGoingUp;                                                 // 0x0733   (0x0001)  
	bool                                               bIsJumpFromGround;                                          // 0x0734   (0x0001)  
	bool                                               bIsMoving2DLocal;                                           // 0x0735   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x0736   (0x0002)  MISSED
	float                                              AdditiveSquatAlpha;                                         // 0x0738   (0x0004)  
	float                                              JumpAddCurveAlpha;                                          // 0x073C   (0x0004)  
	float                                              ArmsHeadAddAlpha;                                           // 0x0740   (0x0004)  
	float                                              JumpAddOffsetAlpha;                                         // 0x0744   (0x0004)  
	bool                                               bIsImpactWallBackup;                                        // 0x0748   (0x0001)  
	bool                                               bIsLandingDetected;                                         // 0x0749   (0x0001)  
	bool                                               bIsWallImpact;                                              // 0x074A   (0x0001)  
	bool                                               bIsApexTimerEnd;                                            // 0x074B   (0x0001)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x074C   (0x0004)  MISSED
	class AFortPlayerPawn*                             FortPlayerPawn;                                             // 0x0750   (0x0008)  
	class AFortWeapon*                                 WeaponRocketRam;                                            // 0x0758   (0x0008)  
	float                                              FBImpactGroundStateAlpha;                                   // 0x0760   (0x0004)  
	bool                                               bFBGroundSlideToFBWait;                                     // 0x0764   (0x0001)  
	bool                                               bFBThrustingToFBApex;                                       // 0x0765   (0x0001)  
	bool                                               bFBApexToFBToMortar;                                        // 0x0766   (0x0001)  
	bool                                               bFBOffGroundToFBImpactGround;                               // 0x0767   (0x0001)  
	bool                                               bFBOffWallToFBImpactWall;                                   // 0x0768   (0x0001)  
	bool                                               bFBDetectGroundToFBToImpactGround;                          // 0x0769   (0x0001)  
	unsigned char                                      UnknownData03_5[0x2];                                       // 0x076A   (0x0002)  MISSED
	float                                              FBJumpStateAlpha;                                           // 0x076C   (0x0004)  
	float                                              FBToApexStateAlpha;                                         // 0x0770   (0x0004)  
	bool                                               bFBDetectSlideToFBToSlide;                                  // 0x0774   (0x0001)  
	bool                                               bFBOffToFBWait;                                             // 0x0775   (0x0001)  
	unsigned char                                      UnknownData04_5[0x2];                                       // 0x0776   (0x0002)  MISSED
	float                                              UBPullLeverStateAlpha;                                      // 0x0778   (0x0004)  
	float                                              UBSquatStateAlpha;                                          // 0x077C   (0x0004)  
	float                                              UBJumpStateAlpha;                                           // 0x0780   (0x0004)  
	bool                                               bUBSquatToUBJump;                                           // 0x0784   (0x0001)  
	bool                                               bUBJumpToUBWait;                                            // 0x0785   (0x0001)  
	bool                                               bUBJumpToUBToGroundImpact;                                  // 0x0786   (0x0001)  
	bool                                               bUBWaitToUBImpactGround;                                    // 0x0787   (0x0001)  
	bool                                               bUBOffToUBWait;                                             // 0x0788   (0x0001)  
	unsigned char                                      UnknownData05_6[0x47];                                      // 0x0789   (0x0047)  MISSED
};

