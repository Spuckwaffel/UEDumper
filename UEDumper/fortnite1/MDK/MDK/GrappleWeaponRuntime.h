
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: GameplayAbilities
/// dependency: MantisRuntime

/// Class /Script/GrappleWeaponRuntime.CustomCharacterPartAnimInstance_GrappleHook
/// Size: 0x0020 (0x000720 - 0x000740)
class UCustomCharacterPartAnimInstance_GrappleHook : public UCustomCharacterPartAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1856;

public:
	DMember(bool)                                      IsFired                                                     OFFSET(get<bool>, {0x720, 1, 0, 0})
	DMember(int32_t)                                   DistanceBucket                                              OFFSET(get<int32_t>, {0x724, 4, 0, 0})
	DMember(bool)                                      MantisAttackAir                                             OFFSET(get<bool>, {0x728, 1, 0, 0})
	DMember(bool)                                      MantisAttack                                                OFFSET(get<bool>, {0x729, 1, 0, 0})
	DMember(bool)                                      MantisAttack1                                               OFFSET(get<bool>, {0x72A, 1, 0, 0})
	DMember(bool)                                      MantisAttack2                                               OFFSET(get<bool>, {0x72B, 1, 0, 0})
	DMember(bool)                                      MantisAttack3                                               OFFSET(get<bool>, {0x72C, 1, 0, 0})
	DMember(bool)                                      IsAttackFromCast                                            OFFSET(get<bool>, {0x72D, 1, 0, 0})
	DMember(bool)                                      IsHookFireShort                                             OFFSET(get<bool>, {0x72E, 1, 0, 0})
	DMember(bool)                                      IsHookFireMid                                               OFFSET(get<bool>, {0x72F, 1, 0, 0})
	DMember(bool)                                      IsHookFireLong                                              OFFSET(get<bool>, {0x730, 1, 0, 0})
};

/// Class /Script/GrappleWeaponRuntime.GrappleKnifeLayerAnimInstance
/// Size: 0x0020 (0x001540 - 0x001560)
class UGrappleKnifeLayerAnimInstance : public UFortMantisLayerAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5472;

public:
	DMember(bool)                                      bIsAttached                                                 OFFSET(get<bool>, {0x1538, 1, 0, 0})
	DMember(bool)                                      bIsFired                                                    OFFSET(get<bool>, {0x1539, 1, 0, 0})
	DMember(bool)                                      bAnimStartWallBounce                                        OFFSET(get<bool>, {0x153A, 1, 0, 0})
	DMember(float)                                     PawnRotationRateYaw                                         OFFSET(get<float>, {0x153C, 4, 0, 0})
	DMember(float)                                     AnimBounceAngle                                             OFFSET(get<float>, {0x1540, 4, 0, 0})
	DMember(bool)                                      bIsFireOnMotorBike                                          OFFSET(get<bool>, {0x1544, 1, 0, 0})
	DMember(bool)                                      bIsExitUnexpectedly                                         OFFSET(get<bool>, {0x1545, 1, 0, 0})
	DMember(bool)                                      bIsCastInAir                                                OFFSET(get<bool>, {0x1546, 1, 0, 0})
	DMember(bool)                                      bIsCastUpperbody                                            OFFSET(get<bool>, {0x1547, 1, 0, 0})
	DMember(bool)                                      bIsCastGroundIdle                                           OFFSET(get<bool>, {0x1548, 1, 0, 0})
	DMember(bool)                                      bIsCastGroundLoco                                           OFFSET(get<bool>, {0x1549, 1, 0, 0})
	DMember(bool)                                      bDistanceBucketIs0                                          OFFSET(get<bool>, {0x154A, 1, 0, 0})
	DMember(bool)                                      bDistanceBucketIs2                                          OFFSET(get<bool>, {0x154B, 1, 0, 0})
	DMember(bool)                                      bIsExitGround                                               OFFSET(get<bool>, {0x154C, 1, 0, 0})
	DMember(bool)                                      bIsExitWallBounce                                           OFFSET(get<bool>, {0x154D, 1, 0, 0})
	DMember(bool)                                      bIsExitZipAirStart                                          OFFSET(get<bool>, {0x154E, 1, 0, 0})
};

/// Class /Script/GrappleWeaponRuntime.GrappleKnifeWeaponAnimInstance
/// Size: 0x0000 (0x000470 - 0x000470)
class UGrappleKnifeWeaponAnimInstance : public UFortMantisAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1136;

public:
	DMember(bool)                                      MantisAttackAir                                             OFFSET(get<bool>, {0x468, 1, 0, 0})
	DMember(bool)                                      MantisAttack                                                OFFSET(get<bool>, {0x469, 1, 0, 0})
	DMember(bool)                                      MantisAttack1                                               OFFSET(get<bool>, {0x46A, 1, 0, 0})
	DMember(bool)                                      MantisAttack2                                               OFFSET(get<bool>, {0x46B, 1, 0, 0})
	DMember(bool)                                      MantisAttack3                                               OFFSET(get<bool>, {0x46C, 1, 0, 0})
};

/// Class /Script/GrappleWeaponRuntime.GrappleKnifeWeaponInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UGrappleKnifeWeaponInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/GrappleWeaponRuntime.GrappleKnifeWeaponInterface.GetGrappleKnifeData
	// void GetGrappleKnifeData(bool& bIsAttached, bool& bIsFired, int32_t& DistanceBucket, bool& bAnimStartWallBounce, float& AnimBounceAngle); // [0xb9b1b34] Native|Event|Public|HasOutParms|BlueprintEvent 
};

/// Class /Script/GrappleWeaponRuntime.GrappleWeaponLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UGrappleWeaponLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/GrappleWeaponRuntime.GrappleWeaponLibrary.IsTargetingLedge
	// void IsTargetingLedge(class ACharacter* SourceCharacter, class AActor* TargetActor, FVector& TargetLocation, FVector& TargetNormal, FGrappleWeaponLedgeConfig& Config, bool& OutDidImpactWalkableSurface, bool& OutTargetingLedge, FVector& OutLedgeLocation, bool bDrawDebug); // [0xb9b1f94] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GrappleWeaponRuntime.GrappleWeaponLibrary.GetGrappleWeaponTargetInfo
	// FGrappleWeaponTargetInfo GetGrappleWeaponTargetInfo(class AFortPlayerPawn* SourcePlayerPawn, FGrappleWeaponTargetingConfig& Config, float DrawDebugDuration); // [0xb9b1d4c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GrappleWeaponRuntime.GrappleWeaponLibrary.DidHitResultImpactLedge
	// void DidHitResultImpactLedge(class ACharacter* SourceCharacter, FHitResult& HitResult, FGrappleWeaponLedgeConfig& Config, bool& OutDidImpactWalkableSurface, bool& OutTargetingLedge, FVector& OutLedgeLocation, bool bDrawDebug); // [0xb9b15e4] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GrappleWeaponRuntime.GrappleWeaponLibrary.CalculateDirectionalTargetOffset
	// FVector CalculateDirectionalTargetOffset(FVector& DirToTarget, FVector& MovementOffset, FVector& LedgeOffset);           // [0xb9b13dc] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
};

/// Struct /Script/GrappleWeaponRuntime.GrappleWeaponLedgeConfig
/// Size: 0x0078 (0x000000 - 0x000078)
class FGrappleWeaponLedgeConfig : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	SMember(FScalableFloat)                            VerticalSurfaceThreshold                                    OFFSET(getStruct<T>, {0x0, 40, 0, 0})
	SMember(FScalableFloat)                            LedgeHeightCapsuleMultiplier                                OFFSET(getStruct<T>, {0x28, 40, 0, 0})
	SMember(FScalableFloat)                            ShouldTreatWalkableSurfaceAsLedge                           OFFSET(getStruct<T>, {0x50, 40, 0, 0})
};

/// Struct /Script/GrappleWeaponRuntime.GrappleWeaponTargetingConfig
/// Size: 0x0178 (0x000000 - 0x000178)
class FGrappleWeaponTargetingConfig : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 376;

public:
	SMember(FGrappleWeaponLedgeConfig)                 LedgeConfig                                                 OFFSET(getStruct<T>, {0x0, 120, 0, 0})
	SMember(FScalableFloat)                            PawnTraceRadius                                             OFFSET(getStruct<T>, {0x78, 40, 0, 0})
	SMember(FScalableFloat)                            SecondaryTraceRadius                                        OFFSET(getStruct<T>, {0xA0, 40, 0, 0})
	SMember(FScalableFloat)                            SecondaryTraceStartDistance                                 OFFSET(getStruct<T>, {0xC8, 40, 0, 0})
	SMember(FScalableFloat)                            MinHitDistance                                              OFFSET(getStruct<T>, {0xF0, 40, 0, 0})
	SMember(FScalableFloat)                            MaxHitDistance                                              OFFSET(getStruct<T>, {0x118, 40, 0, 0})
	SMember(FScalableFloat)                            TraceDownDistance                                           OFFSET(getStruct<T>, {0x140, 40, 0, 0})
	DMember(float)                                     ProjectileRadius                                            OFFSET(get<float>, {0x168, 4, 0, 0})
	DMember(float)                                     TraceForwardOffset                                          OFFSET(get<float>, {0x16C, 4, 0, 0})
	DMember(float)                                     TraceMaxAngle                                               OFFSET(get<float>, {0x170, 4, 0, 0})
};

/// Struct /Script/GrappleWeaponRuntime.GrappleWeaponTargetInfo
/// Size: 0x0038 (0x000000 - 0x000038)
class FGrappleWeaponTargetInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(bool)                                      bHitTarget                                                  OFFSET(get<bool>, {0x0, 1, 0, 0})
	CMember(TWeakObjectPtr<AActor*>)                   TargetActor                                                 OFFSET(get<T>, {0x4, 8, 0, 0})
	CMember(TWeakObjectPtr<USceneComponent*>)          TargetComponent                                             OFFSET(get<T>, {0xC, 8, 0, 0})
	SMember(FVector)                                   TargetPoint                                                 OFFSET(getStruct<T>, {0x18, 24, 0, 0})
	DMember(float)                                     HitDistance                                                 OFFSET(get<float>, {0x30, 4, 0, 0})
};

