
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: GameplayAbilities
/// dependency: MantisRuntime

/// Class /Script/GrappleWeaponRuntime.CustomCharacterPartAnimInstance_GrappleHook
/// Size: 0x0020 (0x000720 - 0x000740)
class UCustomCharacterPartAnimInstance_GrappleHook : public UCustomCharacterPartAnimInstance
{ 
public:
	bool                                               IsFired;                                                    // 0x0720   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0721   (0x0003)  MISSED
	int32_t                                            DistanceBucket;                                             // 0x0724   (0x0004)  
	bool                                               MantisAttackAir;                                            // 0x0728   (0x0001)  
	bool                                               MantisAttack;                                               // 0x0729   (0x0001)  
	bool                                               MantisAttack0;                                              // 0x072A   (0x0001)  
	bool                                               MantisAttack1;                                              // 0x072B   (0x0001)  
	bool                                               MantisAttack2;                                              // 0x072C   (0x0001)  
	bool                                               IsAttackFromCast;                                           // 0x072D   (0x0001)  
	bool                                               IsHookFireShort;                                            // 0x072E   (0x0001)  
	bool                                               IsHookFireMid;                                              // 0x072F   (0x0001)  
	bool                                               IsHookFireLong;                                             // 0x0730   (0x0001)  
	unsigned char                                      UnknownData01_6[0xF];                                       // 0x0731   (0x000F)  MISSED
};

/// Class /Script/GrappleWeaponRuntime.GrappleKnifeLayerAnimInstance
/// Size: 0x0020 (0x001630 - 0x001650)
class UGrappleKnifeLayerAnimInstance : public UFortMantisLayerAnimInstance
{ 
public:
	bool                                               bIsAttached;                                                // 0x1630   (0x0001)  
	bool                                               bIsFired;                                                   // 0x1631   (0x0001)  
	bool                                               bAnimStartWallBounce;                                       // 0x1632   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x1633   (0x0001)  MISSED
	float                                              PawnRotationRateYaw;                                        // 0x1634   (0x0004)  
	float                                              AnimBounceAngle;                                            // 0x1638   (0x0004)  
	bool                                               bIsFireOnMotorBike;                                         // 0x163C   (0x0001)  
	bool                                               bIsExitUnexpectedly;                                        // 0x163D   (0x0001)  
	bool                                               bIsCastInAir;                                               // 0x163E   (0x0001)  
	bool                                               bIsCastUpperbody;                                           // 0x163F   (0x0001)  
	bool                                               bIsCastGroundIdle;                                          // 0x1640   (0x0001)  
	bool                                               bIsCastGroundLoco;                                          // 0x1641   (0x0001)  
	bool                                               bDistanceBucketIs0;                                         // 0x1642   (0x0001)  
	bool                                               bDistanceBucketIs2;                                         // 0x1643   (0x0001)  
	bool                                               bIsExitGround;                                              // 0x1644   (0x0001)  
	bool                                               bIsExitWallBounce;                                          // 0x1645   (0x0001)  
	bool                                               bIsExitZipAirStart;                                         // 0x1646   (0x0001)  
	unsigned char                                      UnknownData01_6[0x9];                                       // 0x1647   (0x0009)  MISSED
};

/// Class /Script/GrappleWeaponRuntime.GrappleKnifeWeaponAnimInstance
/// Size: 0x0000 (0x000470 - 0x000470)
class UGrappleKnifeWeaponAnimInstance : public UFortMantisAnimInstance
{ 
public:
};

/// Class /Script/GrappleWeaponRuntime.GrappleKnifeWeaponInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UGrappleKnifeWeaponInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/GrappleWeaponRuntime.GrappleKnifeWeaponInterface.GetGrappleKnifeData
	// void GetGrappleKnifeData(bool& bIsAttached, bool& bIsFired, int32_t& DistanceBucket, bool& bAnimStartWallBounce, float& AnimBounceAngle); // [0xa9925a8] Native|Event|Public|HasOutParms|BlueprintEvent 
};

/// Class /Script/GrappleWeaponRuntime.GrappleWeaponLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UGrappleWeaponLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/GrappleWeaponRuntime.GrappleWeaponLibrary.IsTargetingLedge
	// void IsTargetingLedge(class ACharacter* SourceCharacter, class AActor* TargetActor, FVector& TargetLocation, FVector& TargetNormal, FGrappleWeaponLedgeConfig& Config, bool& OutDidImpactWalkableSurface, bool& OutTargetingLedge, FVector& OutLedgeLocation, bool bDrawDebug); // [0xa99299c] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GrappleWeaponRuntime.GrappleWeaponLibrary.GetGrappleWeaponTargetInfo
	// FGrappleWeaponTargetInfo GetGrappleWeaponTargetInfo(class AFortPlayerPawn* SourcePlayerPawn, FGrappleWeaponTargetingConfig& Config, float DrawDebugDuration); // [0xa992784] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GrappleWeaponRuntime.GrappleWeaponLibrary.DidHitResultImpactLedge
	// void DidHitResultImpactLedge(class ACharacter* SourceCharacter, FHitResult& HitResult, FGrappleWeaponLedgeConfig& Config, bool& OutDidImpactWalkableSurface, bool& OutTargetingLedge, FVector& OutLedgeLocation, bool bDrawDebug); // [0xa9920a0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GrappleWeaponRuntime.GrappleWeaponLibrary.CalculateDirectionalTargetOffset
	// FVector CalculateDirectionalTargetOffset(FVector& DirToTarget, FVector& MovementOffset, FVector& LedgeOffset);        // [0xa991e98] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
};

/// Struct /Script/GrappleWeaponRuntime.GrappleWeaponLedgeConfig
/// Size: 0x0078 (0x000000 - 0x000078)
struct FGrappleWeaponLedgeConfig
{ 
	FScalableFloat                                     VerticalSurfaceThreshold;                                   // 0x0000   (0x0028)  
	FScalableFloat                                     LedgeHeightCapsuleMultiplier;                               // 0x0028   (0x0028)  
	FScalableFloat                                     ShouldTreatWalkableSurfaceAsLedge;                          // 0x0050   (0x0028)  
};

/// Struct /Script/GrappleWeaponRuntime.GrappleWeaponTargetingConfig
/// Size: 0x0178 (0x000000 - 0x000178)
struct FGrappleWeaponTargetingConfig
{ 
	FGrappleWeaponLedgeConfig                          LedgeConfig;                                                // 0x0000   (0x0078)  
	FScalableFloat                                     PawnTraceRadius;                                            // 0x0078   (0x0028)  
	FScalableFloat                                     SecondaryTraceRadius;                                       // 0x00A0   (0x0028)  
	FScalableFloat                                     SecondaryTraceStartDistance;                                // 0x00C8   (0x0028)  
	FScalableFloat                                     MinHitDistance;                                             // 0x00F0   (0x0028)  
	FScalableFloat                                     MaxHitDistance;                                             // 0x0118   (0x0028)  
	FScalableFloat                                     TraceDownDistance;                                          // 0x0140   (0x0028)  
	float                                              ProjectileRadius;                                           // 0x0168   (0x0004)  
	float                                              TraceForwardOffset;                                         // 0x016C   (0x0004)  
	float                                              TraceMaxAngle;                                              // 0x0170   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0174   (0x0004)  MISSED
};

/// Struct /Script/GrappleWeaponRuntime.GrappleWeaponTargetInfo
/// Size: 0x0038 (0x000000 - 0x000038)
struct FGrappleWeaponTargetInfo
{ 
	bool                                               bHitTarget;                                                 // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	SDK_UNDEFINED(8,14104) /* TWeakObjectPtr<AActor*> */ __um(TargetActor);                                        // 0x0004   (0x0008)  
	SDK_UNDEFINED(8,14105) /* TWeakObjectPtr<USceneComponent*> */ __um(TargetComponent);                           // 0x000C   (0x0008)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0014   (0x0004)  MISSED
	FVector                                            TargetPoint;                                                // 0x0018   (0x0018)  
	float                                              HitDistance;                                                // 0x0030   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0034   (0x0004)  MISSED
};

