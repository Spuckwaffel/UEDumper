
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
/// dependency: ModularGameplay

/// Class /Script/ItemizedPropSpawnerParentRuntime.FortGameplayAbility_RangedPropSpawner
/// Size: 0x0008 (0x000B88 - 0x000B90)
class UFortGameplayAbility_RangedPropSpawner : public UFortGameplayAbility_RangedWeapon
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2960;

public:
	DMember(bool)                                      bRevertAmmoNumberForRejection                               OFFSET(get<bool>, {0xB88, 1, 0, 0})


	/// Functions
	// Function /Script/ItemizedPropSpawnerParentRuntime.FortGameplayAbility_RangedPropSpawner.HandleAbilityRejectedOnClient
	// void HandleAbilityRejectedOnClient(class AFortWeapon* SourceWeapon);                                                     // [0x246f7d8] Event|Public|BlueprintEvent 
};

/// Class /Script/ItemizedPropSpawnerParentRuntime.SereneYardAnimInstanceProxy
/// Size: 0x0030 (0x001530 - 0x001560)
class USereneYardAnimInstanceProxy : public UFortPlayerAnimInstanceProxy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5472;

public:
	DMember(bool)                                      bIsUpperBody                                                OFFSET(get<bool>, {0x1528, 1, 0, 0})
	DMember(bool)                                      bGrindRail                                                  OFFSET(get<bool>, {0x1529, 1, 0, 0})
	DMember(bool)                                      bIsIceFireToSprint                                          OFFSET(get<bool>, {0x152A, 1, 0, 0})
	DMember(bool)                                      bIsIceFireToIdle                                            OFFSET(get<bool>, {0x152B, 1, 0, 0})
	DMember(bool)                                      bIsIceFireFallStart                                         OFFSET(get<bool>, {0x152C, 1, 0, 0})
	DMember(bool)                                      bIsIceFireFallEnd                                           OFFSET(get<bool>, {0x152D, 1, 0, 0})
	DMember(bool)                                      bIsIceFireFullBodyGround                                    OFFSET(get<bool>, {0x152E, 1, 0, 0})
	DMember(bool)                                      bIsIceFire                                                  OFFSET(get<bool>, {0x152F, 1, 0, 0})
	DMember(bool)                                      bIsIceFireUpperBody                                         OFFSET(get<bool>, {0x1530, 1, 0, 0})
	DMember(bool)                                      bIsFromIceFireEndStates                                     OFFSET(get<bool>, {0x1531, 1, 0, 0})
	DMember(bool)                                      bIsTrFromFireEndIdle                                        OFFSET(get<bool>, {0x1532, 1, 0, 0})
	DMember(bool)                                      bIsTrFromFireEndLoco                                        OFFSET(get<bool>, {0x1533, 1, 0, 0})
	DMember(bool)                                      bIsFireExitUnexpectedly                                     OFFSET(get<bool>, {0x1534, 1, 0, 0})
	DMember(bool)                                      bIsFireEndExitUnexpectedly                                  OFFSET(get<bool>, {0x1535, 1, 0, 0})
	SMember(FRotator)                                  UpperBodyTwistRotator                                       OFFSET(getStruct<T>, {0x1538, 24, 0, 0})
	DMember(float)                                     TurnEndThreshold                                            OFFSET(get<float>, {0x1550, 4, 0, 0})
	DMember(float)                                     TurnEndLocoThreshold                                        OFFSET(get<float>, {0x1554, 4, 0, 0})
	DMember(float)                                     PawnVelocityZThreshold                                      OFFSET(get<float>, {0x1558, 4, 0, 0})
	DMember(float)                                     InterruptibleThreshold                                      OFFSET(get<float>, {0x155C, 4, 0, 0})
};

/// Class /Script/ItemizedPropSpawnerParentRuntime.EmeraldGlassIceWallChunk
/// Size: 0x0018 (0x000BC8 - 0x000BE0)
class AEmeraldGlassIceWallChunk : public ABuildingProp
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3040;

public:
	CMember(TWeakObjectPtr<AEmeraldGlassIceWallChunk*>) ParentChunk                                                OFFSET(get<T>, {0xBC8, 8, 0, 0})
	CMember(TArray<TWeakObjectPtr<UClass*>>)           IceWallActorClassDenyList                                   OFFSET(get<T>, {0xBD0, 16, 0, 0})


	/// Functions
	// Function /Script/ItemizedPropSpawnerParentRuntime.EmeraldGlassIceWallChunk.NativeShouldDestroyOverlappedActor
	// bool NativeShouldDestroyOverlappedActor(class AActor* Actor, FGameplayTagContainer& TagsToDestroyOverlappedActor);       // [0xb8b623c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ItemizedPropSpawnerParentRuntime.EmeraldGlassIceWallChunk.NativeShouldActorBlockSpawn
	// bool NativeShouldActorBlockSpawn(class AActor* Actor, bool bShouldLaunch, FGameplayTag& BlockTag);                       // [0xb8b6068] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ItemizedPropSpawnerParentRuntime.EmeraldGlassIceWallChunk.NativeCheckOverlappedActor
	// void NativeCheckOverlappedActor(FSereneYardOverlappedActorCheckData& CheckData, class AActor* OverlappedActor, TArray<UCapsuleComponent*>& InOutComponentsSetToIgnoreCollision, bool& bInOutShouldPlayImpulseCue, bool& bOutDestroyOverlappedActor, bool& bOutShouldWaitATick, bool& bOutDestroyProp); // [0x25b5e78] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ItemizedPropSpawnerParentRuntime.EmeraldGlassIceWallChunk.IsIceWallAllowedToOverlapActor
	// bool IsIceWallAllowedToOverlapActor(class AActor* Actor);                                                                // [0xb8b5a40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizedPropSpawnerParentRuntime.EmeraldGlassIceWallChunk.GetComponentsForOverlapCheck
	// void GetComponentsForOverlapCheck(TArray<UPrimitiveComponent*>& OutComponents);                                          // [0x246f7d8] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Script/ItemizedPropSpawnerParentRuntime.EmeraldGlassIceWallChunk.FindSupportingActors
	// void FindSupportingActors(TArray<AActor*>& InOutSupportingActors, bool bAllowIceWallsAsSupportingActors, TArray<AEmeraldGlassIceWallChunk*>& ChunksInMyWall); // [0xb8b4dc0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ItemizedPropSpawnerParentRuntime.EmeraldGlassIceWallChunk.AttachActors
	// void AttachActors(TArray<AEmeraldGlassIceWallChunk*>& ChunksInMyWall, TArray<AActor*>& SupportingActors, class AActor* DirectBase); // [0xb8b4604] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/ItemizedPropSpawnerParentRuntime.FortControllerComponent_SereneYard
/// Size: 0x0010 (0x0000A0 - 0x0000B0)
class UFortControllerComponent_SereneYard : public UControllerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	CMember(TArray<TWeakObjectPtr<ABuildingGameplayActor*>>) TrackedInstances                                      OFFSET(get<T>, {0xA0, 16, 0, 0})


	/// Functions
	// Function /Script/ItemizedPropSpawnerParentRuntime.FortControllerComponent_SereneYard.RemoveOldestTrackedInstance
	// void RemoveOldestTrackedInstance();                                                                                      // [0xb8b6610] Final|Native|Public|BlueprintCallable 
	// Function /Script/ItemizedPropSpawnerParentRuntime.FortControllerComponent_SereneYard.GetTrackedInstanceCount
	// int32_t GetTrackedInstanceCount();                                                                                       // [0x6381944] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizedPropSpawnerParentRuntime.FortControllerComponent_SereneYard.GetOldestTrackedInstance
	// class ABuildingGameplayActor* GetOldestTrackedInstance();                                                                // [0xb8b5a08] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizedPropSpawnerParentRuntime.FortControllerComponent_SereneYard.AddTrackedInstance
	// void AddTrackedInstance(class ABuildingGameplayActor* TrackedInstance);                                                  // [0xb8b4490] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/ItemizedPropSpawnerParentRuntime.ItemizedPropSpawnerMultiPropSpawner
/// Size: 0x0000 (0x000978 - 0x000978)
class AItemizedPropSpawnerMultiPropSpawner : public ABuildingGameplayActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2424;

public:
};

/// Class /Script/ItemizedPropSpawnerParentRuntime.SereneYardFunctionLibraryNative
/// Size: 0x0000 (0x000028 - 0x000028)
class USereneYardFunctionLibraryNative : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/ItemizedPropSpawnerParentRuntime.SereneYardFunctionLibraryNative.NativeUpdateTarget
	// bool NativeUpdateTarget(FSereneYardWeaponData& WeaponData, FVector& outTargetLocation, ESereneYardTargetingFailedReason& OutFailureReason, TArray<bool>& OutValidity); // [0xb8b6398] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/ItemizedPropSpawnerParentRuntime.SereneYardFunctionLibraryNative.NativeCheckSpawnValidity
	// bool NativeCheckSpawnValidity(FSereneYardWeaponData& WeaponData, FVector& InOutTargetLocation, float CameraYaw, bool bCheckForAllChunks, TArray<bool>& OutValidity, TArray<double>& OutOffsets, TArray<AActor*>& OutActorsBeingUsedAsBase, ESereneYardTargetingFailedReason& OutFailureReason); // [0xb8b5b50] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/ItemizedPropSpawnerParentRuntime.SereneYardFunctionLibraryNative.BuildPropDataForWeaponData
	// void BuildPropDataForWeaponData(TArray<FNativeItemizedPropSpawner_PropSpawnData>& PropSpawnDataArray, TArray<FTransform>& PropRelativeTransforms, TMap<ESereneYardChunkLocation, int32_t>& ChunkLocationToPropIndexMap); // [0x24ffb90] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
};

/// Struct /Script/ItemizedPropSpawnerParentRuntime.SereneYardOverlappedActorCheckData
/// Size: 0x0098 (0x000000 - 0x000098)
class FSereneYardOverlappedActorCheckData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	CMember(TArray<TEnumAsByte<EObjectTypeQuery>>)     CapsuleOverlapObjectTypes                                   OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   CapsuleOverlapActorClassFilter                              OFFSET(get<T>, {0x10, 32, 0, 0})
	SMember(FGameplayTagContainer)                     TagsToDestroyOverlappedActor                                OFFSET(getStruct<T>, {0x30, 32, 0, 0})
	SMember(FGameplayTag)                              BlockSpawnTag                                               OFFSET(getStruct<T>, {0x50, 4, 0, 0})
	SMember(FVector)                                   VehicleLaunchVelocity                                       OFFSET(getStruct<T>, {0x58, 24, 0, 0})
	SMember(FVector)                                   PawnLaunchVelocity                                          OFFSET(getStruct<T>, {0x70, 24, 0, 0})
	DMember(float)                                     AbilityImpactRadius                                         OFFSET(get<float>, {0x88, 4, 0, 0})
	DMember(float)                                     CapsuleOverlapRadiusMulipler                                OFFSET(get<float>, {0x8C, 4, 0, 0})
	DMember(float)                                     CapsuleOverlapHalfHeightMultipler                           OFFSET(get<float>, {0x90, 4, 0, 0})
	DMember(bool)                                      bApplyFallImunityToKnockbackVictims                         OFFSET(get<bool>, {0x94, 1, 0, 0})
	DMember(bool)                                      bShouldLaunch                                               OFFSET(get<bool>, {0x95, 1, 0, 0})
	DMember(bool)                                      bInstigatorIsSameTeam                                       OFFSET(get<bool>, {0x96, 1, 0, 0})
};

/// Struct /Script/ItemizedPropSpawnerParentRuntime.NativeItemizedPropSpawner_PropSpawnData
/// Size: 0x0080 (0x000000 - 0x000080)
class FNativeItemizedPropSpawner_PropSpawnData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(class UClass*)                             ClassToSpawn                                                OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FTransform)                                RelativeTransform                                           OFFSET(getStruct<T>, {0x10, 96, 0, 0})
	CMember(ESereneYardChunkLocation)                  ChunkLocation                                               OFFSET(get<T>, {0x70, 1, 0, 0})
};

/// Struct /Script/ItemizedPropSpawnerParentRuntime.NativeItemizedPropSpawner_SpawnedPropData
/// Size: 0x0110 (0x000000 - 0x000110)
class FNativeItemizedPropSpawner_SpawnedPropData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
	SMember(FNativeItemizedPropSpawner_PropSpawnData)  SpawnData                                                   OFFSET(getStruct<T>, {0x0, 128, 0, 0})
	CMember(TArray<class AActor*>)                     SupportingActors                                            OFFSET(get<T>, {0x80, 16, 0, 0})
	CMember(class AActor*)                             BaseActor                                                   OFFSET(get<T>, {0x90, 8, 0, 0})
	CMember(class AEmeraldGlassIceWallChunk*)          SpawnedActor                                                OFFSET(get<T>, {0x98, 8, 0, 0})
	SMember(FTransform)                                SpawnedRelativeTransform                                    OFFSET(getStruct<T>, {0xA0, 96, 0, 0})
	DMember(float)                                     ZOffset                                                     OFFSET(get<float>, {0x100, 4, 0, 0})
	DMember(bool)                                      bValid                                                      OFFSET(get<bool>, {0x104, 1, 0, 0})
};

/// Struct /Script/ItemizedPropSpawnerParentRuntime.SereneYardWeaponData
/// Size: 0x0140 (0x000000 - 0x000140)
class FSereneYardWeaponData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
	CMember(TWeakObjectPtr<AFortPlayerPawnAthena*>)    Player                                                      OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(TWeakObjectPtr<AFortWeaponRangedDual*>)    Weapon                                                      OFFSET(get<T>, {0x8, 8, 0, 0})
	DMember(bool)                                      bPreviewing                                                 OFFSET(get<bool>, {0x10, 1, 0, 0})
	DMember(float)                                     PreviewDistance                                             OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     MaxDistance                                                 OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     MinDistance                                                 OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(float)                                     MinDistFromIndestructible                                   OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(bool)                                      bEnableBlockedByIndestructibles                             OFFSET(get<bool>, {0x24, 1, 0, 0})
	DMember(float)                                     PlayerForwardVectorScale                                    OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(float)                                     InitialTracePullbackDist                                    OFFSET(get<float>, {0x2C, 4, 0, 0})
	DMember(float)                                     DownwardTraceDistanceNear                                   OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(float)                                     DownwardTraceDistanceNearUp                                 OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     DownwardTraceDistanceFar                                    OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(bool)                                      bStopped                                                    OFFSET(get<bool>, {0x3C, 1, 0, 0})
	CMember(TArray<class UClass*>)                     ClassesToIgnoreWhenTracing                                  OFFSET(get<T>, {0x40, 16, 0, 0})
	CMember(TArray<class UClass*>)                     ClassesToIgnoreWhenTracingIfTooSmall                        OFFSET(get<T>, {0x50, 16, 0, 0})
	DMember(float)                                     DebugDrawTime                                               OFFSET(get<float>, {0x60, 4, 0, 0})
	CMember(TArray<FTransform>)                        IceRelativeTransforms                                       OFFSET(get<T>, {0x68, 16, 0, 0})
	CMember(TMap<ESereneYardChunkLocation, int32_t>)   ChunkLocationToChunkIndexMap                                OFFSET(get<T>, {0x78, 80, 0, 0})
	DMember(float)                                     IceRelativeRightVectorScale                                 OFFSET(get<float>, {0xC8, 4, 0, 0})
	DMember(float)                                     GroundFindStartOffset                                       OFFSET(get<float>, {0xCC, 4, 0, 0})
	DMember(float)                                     GroundFindEndOffset                                         OFFSET(get<float>, {0xD0, 4, 0, 0})
	DMember(float)                                     GroundFindDistanceOffset                                    OFFSET(get<float>, {0xD4, 4, 0, 0})
	DMember(float)                                     MaxSpawnDistBelowPlayer                                     OFFSET(get<float>, {0xD8, 4, 0, 0})
	CMember(TArray<class UStaticMeshComponent*>)       PreviewMeshesTEMP                                           OFFSET(get<T>, {0xE0, 16, 0, 0})
	CMember(class UMaterialInterface*)                 IceMaterial                                                 OFFSET(get<T>, {0xF0, 8, 0, 0})
	CMember(class UMaterialInterface*)                 IceMaterialBlocked                                          OFFSET(get<T>, {0xF8, 8, 0, 0})
	DMember(float)                                     IceBlockPitch                                               OFFSET(get<float>, {0x100, 4, 0, 0})
	DMember(float)                                     BlockingIndestructibleObjectDist                            OFFSET(get<float>, {0x104, 4, 0, 0})
	DMember(float)                                     MaxVerticalChunkSpacing                                     OFFSET(get<float>, {0x108, 4, 0, 0})
	DMember(float)                                     MinSupportingPropSize                                       OFFSET(get<float>, {0x10C, 4, 0, 0})
	DMember(float)                                     TooCloseForHeightDistStep                                   OFFSET(get<float>, {0x110, 4, 0, 0})
	DMember(int32_t)                                   TooCloseForHeightMaxIterations                              OFFSET(get<int32_t>, {0x114, 4, 0, 0})
	DMember(float)                                     TooCloseForHeightMinHeightAbovePlayer                       OFFSET(get<float>, {0x118, 4, 0, 0})
	DMember(float)                                     TooCloseForHeightMaxHeightAbovePlayer                       OFFSET(get<float>, {0x11C, 4, 0, 0})
	DMember(float)                                     TooCloseForHeightMinDistFromPlayer                          OFFSET(get<float>, {0x120, 4, 0, 0})
	DMember(float)                                     SphereTraceRadius                                           OFFSET(get<float>, {0x124, 4, 0, 0})
	DMember(bool)                                      bAllowUnwalkableTargets                                     OFFSET(get<bool>, {0x128, 1, 0, 0})
	DMember(bool)                                      bAllowWaterTargets                                          OFFSET(get<bool>, {0x129, 1, 0, 0})
	DMember(float)                                     TryCloserOnInvalidTargetDist                                OFFSET(get<float>, {0x12C, 4, 0, 0})
	DMember(bool)                                      bEnableTargetOnLandCheck                                    OFFSET(get<bool>, {0x130, 1, 0, 0})
	DMember(float)                                     LandFindStartOffset                                         OFFSET(get<float>, {0x134, 4, 0, 0})
	DMember(float)                                     LandFindEndOffset                                           OFFSET(get<float>, {0x138, 4, 0, 0})
	DMember(float)                                     VerticalDistanceLimit                                       OFFSET(get<float>, {0x13C, 4, 0, 0})
};

/// Enum /Script/ItemizedPropSpawnerParentRuntime.ESereneYardTargetingFailedReason
/// Size: 0x11
enum class ESereneYardTargetingFailedReason : uint8_t
{
	ESereneYardTargetingFailedReason__None                                           = 0,
	ESereneYardTargetingFailedReason__TooHigh                                        = 1,
	ESereneYardTargetingFailedReason__TooClose                                       = 2,
	ESereneYardTargetingFailedReason__Obstructed                                     = 3,
	ESereneYardTargetingFailedReason__TargetNotWalkable                              = 4,
	ESereneYardTargetingFailedReason__TargetBlocksSpawn                              = 5,
	ESereneYardTargetingFailedReason__TooCloseForHeight                              = 6,
	ESereneYardTargetingFailedReason__InvalidIndestructible                          = 7,
	ESereneYardTargetingFailedReason__NoValidTargetsFound                            = 8,
	ESereneYardTargetingFailedReason__Unknown                                        = 9,
	ESereneYardTargetingFailedReason__ESereneYardTargetingFailedReason_MAX           = 10
};

/// Enum /Script/ItemizedPropSpawnerParentRuntime.ESereneYardChunkLocation
/// Size: 0x06
enum class ESereneYardChunkLocation : uint8_t
{
	ESereneYardChunkLocation__Left                                                   = 0,
	ESereneYardChunkLocation__CenterLeft                                             = 1,
	ESereneYardChunkLocation__Center                                                 = 2,
	ESereneYardChunkLocation__CenterRight                                            = 3,
	ESereneYardChunkLocation__Right                                                  = 4,
	ESereneYardChunkLocation__ESereneYardChunkLocation_MAX                           = 5
};

