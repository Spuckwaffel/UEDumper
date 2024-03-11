
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

/// Struct /Script/GrappleParentRuntime.SpeedScaledAxisOffsetData
/// Size: 0x0060 (0x000000 - 0x000060)
struct FSpeedScaledAxisOffsetData
{ 
	FScalableFloat                                     OffsetModifier;                                             // 0x0000   (0x0028)  
	float                                              BaseOffset;                                                 // 0x0028   (0x0004)  
	float                                              SpeedScaledOffset;                                          // 0x002C   (0x0004)  
	FVector2D                                          SpeedBounds;                                                // 0x0030   (0x0010)  
	FVector2D                                          SpeedMultiplierBounds;                                      // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0050   (0x0010)  MISSED
};

/// Class /Script/GrappleParentRuntime.FortCameraModifier_Swinging
/// Size: 0x0240 (0x000048 - 0x000288)
class UFortCameraModifier_Swinging : public UCameraModifier
{ 
public:
	float                                              MaxVelocityDeltaPerSecond;                                  // 0x0048   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x004C   (0x0004)  MISSED
	class UCurveFloat*                                 BlendInCurve;                                               // 0x0050   (0x0008)  
	class UCurveFloat*                                 BlendOutCurve;                                              // 0x0058   (0x0008)  
	FSpeedScaledAxisOffsetData                         ForwardOffsetData;                                          // 0x0060   (0x0060)  
	FVector2D                                          TotalForwardOffsetBounds;                                   // 0x00C0   (0x0010)  
	FSpeedScaledAxisOffsetData                         RightOffsetData;                                            // 0x00D0   (0x0060)  
	FVector2D                                          RightForwardOffsetMultiplierBounds;                         // 0x0130   (0x0010)  
	FSpeedScaledAxisOffsetData                         UpOffsetData;                                               // 0x0140   (0x0060)  
	FVector2D                                          UpPositiveForwardOffsetMultiplierBounds;                    // 0x01A0   (0x0010)  
	FVector2D                                          UpNegativeForwardOffsetMultiplierBounds;                    // 0x01B0   (0x0010)  
	float                                              FOVInterpSpeed;                                             // 0x01C0   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x01C4   (0x0004)  MISSED
	FVector2D                                          FOVBounds;                                                  // 0x01C8   (0x0010)  
	class UCurveFloat*                                 BoostCurve;                                                 // 0x01D8   (0x0008)  
	FScalableFloat                                     BoostModifier;                                              // 0x01E0   (0x0028)  
	float                                              AttachBoostDuration;                                        // 0x0208   (0x0004)  
	float                                              AttachBoostMagnitude;                                       // 0x020C   (0x0004)  
	float                                              DetachBoostDuration;                                        // 0x0210   (0x0004)  
	float                                              DetachBoostMagnitude;                                       // 0x0214   (0x0004)  
	class UCurveFloat*                                 SlidingHeightCurve;                                         // 0x0218   (0x0008)  
	FGameplayTag                                       SlidingGameplayTag;                                         // 0x0220   (0x0004)  
	float                                              SlideHeightTransitionDuration;                              // 0x0224   (0x0004)  
	float                                              MaxSlidingSpeedMultiplierOffset;                            // 0x0228   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x022C   (0x0004)  MISSED
	class AFortPlayerPawnAthena*                       CachedPlayer;                                               // 0x0230   (0x0008)  
	class AFortWeaponRangedDualSwing*                  CachedWeapon;                                               // 0x0238   (0x0008)  
	unsigned char                                      UnknownData03_6[0x48];                                      // 0x0240   (0x0048)  MISSED


	/// Functions
	// Function /Script/GrappleParentRuntime.FortCameraModifier_Swinging.RemoveSelfFromCameraManager
	// void RemoveSelfFromCameraManager();                                                                                   // [0xa304e60] Final|Native|Protected 
	// Function /Script/GrappleParentRuntime.FortCameraModifier_Swinging.CalculateDynamicMultipliers
	// void CalculateDynamicMultipliers(float& OutFOVBoundsMultiplier, float& OutBoostOffsetMultiplier);                     // [0xa304b74] Native|Event|Protected|HasOutParms|BlueprintEvent|Const 
};

/// Class /Script/GrappleParentRuntime.FortSwingingLayerAnimInstance
/// Size: 0x01A0 (0x000470 - 0x000610)
class UFortSwingingLayerAnimInstance : public UFortBaseLayerAnimInstance
{ 
public:
	class UAnimInstance*                               MainAnimBP;                                                 // 0x0468   (0x0008)  
	class AFortPlayerPawnAthena*                       Player;                                                     // 0x0470   (0x0008)  
	bool                                               IsGroundSwing;                                              // 0x0478   (0x0001)  
	bool                                               IsFemale;                                                   // 0x0479   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x047A   (0x0002)  MISSED
	float                                              PlayerDistanceToGround;                                     // 0x047C   (0x0004)  
	bool                                               CalculateRotation;                                          // 0x0480   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0481   (0x0007)  MISSED
	FScalableFloat                                     ForwardInfluenceOnRotation;                                 // 0x0488   (0x0028)  
	FScalableFloat                                     TimeForMaxRotationSpeed;                                    // 0x04B0   (0x0028)  
	FScalableFloat                                     MaxRotationSpeed;                                           // 0x04D8   (0x0028)  
	FScalableFloat                                     RotationSpeedWhileNotAttached;                              // 0x0500   (0x0028)  
	FScalableFloat                                     RotationSpeedWhileNotRotated;                               // 0x0528   (0x0028)  
	class AActor*                                      GetAttachedActor;                                           // 0x0550   (0x0008)  
	bool                                               IsFreeFalling;                                              // 0x0558   (0x0001)  
	bool                                               IsAttached;                                                 // 0x0559   (0x0001)  
	bool                                               IsNotAttachedToCliff;                                       // 0x055A   (0x0001)  
	unsigned char                                      UnknownData02_5[0x5];                                       // 0x055B   (0x0005)  MISSED
	FVector                                            Velocity;                                                   // 0x0560   (0x0018)  
	FVector                                            XYVelocity;                                                 // 0x0578   (0x0018)  
	FVector                                            VecFromPlayerToAttachPoint;                                 // 0x0590   (0x0018)  
	float                                              PitchAngleFromAttachPoint;                                  // 0x05A8   (0x0004)  
	float                                              RollAngle;                                                  // 0x05AC   (0x0004)  
	float                                              YawAngleToAttachTarget;                                     // 0x05B0   (0x0004)  
	FName                                              CurveName_SwingPhase;                                       // 0x05B4   (0x0004)  
	FName                                              CurveName_BlendOut;                                         // 0x05B8   (0x0004)  
	float                                              SwingPhase;                                                 // 0x05BC   (0x0004)  
	FRotator                                           CurrentRootRotation;                                        // 0x05C0   (0x0018)  
	FVector                                            CurrentRootTranslation;                                     // 0x05D8   (0x0018)  
	bool                                               IsSwingRelease1;                                            // 0x05F0   (0x0001)  
	bool                                               IsSwingRelease2;                                            // 0x05F1   (0x0001)  
	bool                                               IsSwingRelease3;                                            // 0x05F2   (0x0001)  
	bool                                               IsSwingRelease4;                                            // 0x05F3   (0x0001)  
	bool                                               IsSwingRelease5;                                            // 0x05F4   (0x0001)  
	bool                                               IsSwingReleaseSkid;                                         // 0x05F5   (0x0001)  
	bool                                               IsMovingAttachPoint;                                        // 0x05F6   (0x0001)  
	bool                                               IsBlendOut;                                                 // 0x05F7   (0x0001)  
	float                                              WebCastAttachDirection;                                     // 0x05F8   (0x0004)  
	bool                                               IsWebCastDown;                                              // 0x05FC   (0x0001)  
	bool                                               IsSwingOneHand;                                             // 0x05FD   (0x0001)  
	bool                                               IsRandomHandBool;                                           // 0x05FE   (0x0001)  
	bool                                               IsRandomSwingReleaseBool;                                   // 0x05FF   (0x0001)  
	bool                                               IsRandomeReleaseBool;                                       // 0x0600   (0x0001)  
	bool                                               IsWithin100UnitsOfGround;                                   // 0x0601   (0x0001)  
	bool                                               IsHanging;                                                  // 0x0602   (0x0001)  
	bool                                               IsFallRelease;                                              // 0x0603   (0x0001)  
	bool                                               IsOnGroundWebCast;                                          // 0x0604   (0x0001)  
	bool                                               IsSwingNearGroundToSkid;                                    // 0x0605   (0x0001)  
	bool                                               IsHangToSwingInAir;                                         // 0x0606   (0x0001)  
	bool                                               IsHangToSwingNearGround;                                    // 0x0607   (0x0001)  
	unsigned char                                      UnknownData03_6[0x8];                                       // 0x0608   (0x0008)  MISSED


	/// Functions
	// Function /Script/GrappleParentRuntime.FortSwingingLayerAnimInstance.GetPlayerAnglesFromAttachPoint
	// void GetPlayerAnglesFromAttachPoint(float& pitch, float& Roll, float& Yaw);                                           // [0xa304d38] Final|Native|Public|HasOutParms 
	// Function /Script/GrappleParentRuntime.FortSwingingLayerAnimInstance.GetAttachVectorInPlayerSpace
	// FVector GetAttachVectorInPlayerSpace(FVector& InPlayerToAttachPoint);                                                 // [0xa304c54] Final|Native|Public|HasOutParms|HasDefaults 
};

