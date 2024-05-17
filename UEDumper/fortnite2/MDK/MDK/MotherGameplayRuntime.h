
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

/// Class /Script/MotherGameplayRuntime.GravityGunTargetTrackingComponent
/// Size: 0x01C8 (0x0000A0 - 0x000268)
class UGravityGunTargetTrackingComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 616;

public:
	SMember(FScalableFloat)                            AllowLargeObjects                                           OFFSET(getStruct<T>, {0xA0, 40, 0, 0})
	SMember(FScalableFloat)                            AllowMultipleGrabbers                                       OFFSET(getStruct<T>, {0xC8, 40, 0, 0})
	SMember(FScalableFloat)                            AllowVehicles                                               OFFSET(getStruct<T>, {0xF0, 40, 0, 0})
	SMember(FScalableFloat)                            AllowPickups                                                OFFSET(getStruct<T>, {0x118, 40, 0, 0})
	SMember(FScalableFloat)                            AllowProjectiles                                            OFFSET(getStruct<T>, {0x140, 40, 0, 0})
	SMember(FScalableFloat)                            AllowForay                                                  OFFSET(getStruct<T>, {0x168, 40, 0, 0})
	SMember(FScalableFloat)                            AllowWhileInVehicle                                         OFFSET(getStruct<T>, {0x190, 40, 0, 0})
	SMember(FName)                                     GrabbedByGravityGunTagName                                  OFFSET(getStruct<T>, {0x1B8, 4, 0, 0})
	SMember(FGameplayTagContainer)                     InvalidTargetTags                                           OFFSET(getStruct<T>, {0x1C0, 32, 0, 0})
	SMember(FGameplayTagContainer)                     TargetIsPlayerTag                                           OFFSET(getStruct<T>, {0x1E0, 32, 0, 0})
	SMember(FGameplayTagContainer)                     TargetIsAlreadyGrabbedTag                                   OFFSET(getStruct<T>, {0x200, 32, 0, 0})
	SMember(FGameplayTagContainer)                     TargetIsOwnVehicleTag                                       OFFSET(getStruct<T>, {0x220, 32, 0, 0})
	SMember(FMulticastInlineDelegate)                  FoundTargetDelegate                                         OFFSET(getStruct<T>, {0x240, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  DeactivateReticleDelegate                                   OFFSET(getStruct<T>, {0x250, 16, 0, 0})


	/// Functions
	// Function /Script/MotherGameplayRuntime.GravityGunTargetTrackingComponent.IsValidTarget
	// bool IsValidTarget(class AActor* OwningPlayer, class AActor* PotentialTarget, FGameplayTagContainer& ReasonForFailure);  // [0xc073db0] Final|Native|Protected|HasOutParms|BlueprintCallable 
	// Function /Script/MotherGameplayRuntime.GravityGunTargetTrackingComponent.FindTargetProjectile
	// bool FindTargetProjectile(class AActor* OwningPlayer, FVector& TraceStart, FVector& TraceEnd, float TargetingRadius);    // [0xc0737b4] Final|Native|Protected|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MotherGameplayRuntime.GravityGunTargetTrackingComponent.FindTargetActor
	// void FindTargetActor(class AActor* OwningPlayer, FVector& TraceStart, FVector& TraceEnd);                                // [0xc073618] Final|Native|Protected|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/MotherGameplayRuntime.FortCabbageIglooVehicle
/// Size: 0x0000 (0x002A80 - 0x002A80)
class AFortCabbageIglooVehicle : public AFortOctopusVehicle
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 10880;

public:
};

/// Class /Script/MotherGameplayRuntime.FortBaseAnimInstance_CageSaddle
/// Size: 0x0188 (0x000458 - 0x0005E0)
class UFortBaseAnimInstance_CageSaddle : public UFortBaseAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1504;

public:
	CMember(class AFortSphericalVehicle*)              AsFortSphericalVehicle                                      OFFSET(get<T>, {0x458, 8, 0, 0})
	DMember(bool)                                      bIsOnGround                                                 OFFSET(get<bool>, {0x460, 1, 0, 0})
	DMember(float)                                     RemappedPitch                                               OFFSET(get<float>, {0x464, 4, 0, 0})
	DMember(float)                                     CurrentRoll                                                 OFFSET(get<float>, {0x468, 4, 0, 0})
	DMember(float)                                     LockedRoll                                                  OFFSET(get<float>, {0x46C, 4, 0, 0})
	DMember(bool)                                      bHeadShouldBend                                             OFFSET(get<bool>, {0x470, 1, 0, 0})
	DMember(bool)                                      bFootShouldBend                                             OFFSET(get<bool>, {0x471, 1, 0, 0})
	SMember(FVector)                                   BodyGroundOffset                                            OFFSET(getStruct<T>, {0x478, 24, 0, 0})
	SMember(FVector2D)                                 MinClampPitchInRange                                        OFFSET(getStruct<T>, {0x490, 16, 0, 0})
	SMember(FVector2D)                                 MinClampPitchOutRange                                       OFFSET(getStruct<T>, {0x4A0, 16, 0, 0})
	SMember(FVector2D)                                 MaxClampPitchInRange                                        OFFSET(getStruct<T>, {0x4B0, 16, 0, 0})
	SMember(FVector2D)                                 MaxClampPitchOutRange                                       OFFSET(getStruct<T>, {0x4C0, 16, 0, 0})
	DMember(float)                                     HeadAlphaInterpSpeed                                        OFFSET(get<float>, {0x4D0, 4, 0, 0})
};

/// Class /Script/MotherGameplayRuntime.FortGameplayCueNotifyLoop_Goop
/// Size: 0x0040 (0x0009B0 - 0x0009F0)
class AFortGameplayCueNotifyLoop_Goop : public AFortGameplayCueNotify_Loop
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2544;

public:
	SMember(FName)                                     SpeedParamName                                              OFFSET(getStruct<T>, {0x9B0, 4, 0, 0})
	SMember(FName)                                     IsFallingParamName                                          OFFSET(getStruct<T>, {0x9B4, 4, 0, 0})
	SMember(FGoopAudioMapRangeClamped)                 SpeedMapRangeClamped                                        OFFSET(getStruct<T>, {0x9B8, 32, 0, 0})
	DMember(float)                                     InterpSpeed                                                 OFFSET(get<float>, {0x9D8, 4, 0, 0})
	CMember(class UAudioComponent*)                    LoopingAudioComponent                                       OFFSET(get<T>, {0x9E0, 8, 0, 0})
};

/// Class /Script/MotherGameplayRuntime.PropGunFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UPropGunFunctionLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/MotherGameplayRuntime.PropGunFunctionLibrary.UpdatePropPreviewPosition
	// void UpdatePropPreviewPosition(class USceneComponent* PropPreviewComponent, float DeltaTime, class AFortPawn* AttachPawn, FName AttachSocket, class USkeletalMeshComponent* WeaponMesh, FVector& DesiredRelativeTransform, float MinimumZOffset, FRotator& RelativeRotation, FVector& CachedScale, float InterpSpeed); // [0xc07410c] Final|Native|Static|Private|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MotherGameplayRuntime.PropGunFunctionLibrary.UpdatePropIndexEventState
	// void UpdatePropIndexEventState(class AActor* ContextActor, FPaddleGingerPropData& Payload);                              // [0xc074004] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/MotherGameplayRuntime.PropGunFunctionLibrary.UpdatePropActivatedEventState
	// void UpdatePropActivatedEventState(class AActor* ContextActor, FPaddleGingerPropActivatedData& Payload);                 // [0xc073f04] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/MotherGameplayRuntime.PropGunFunctionLibrary.ClearPropIndexEventState
	// void ClearPropIndexEventState(class AActor* ContextActor);                                                               // [0xc07358c] Final|Native|Static|Private|BlueprintCallable 
	// Function /Script/MotherGameplayRuntime.PropGunFunctionLibrary.ClearPropActivatedEventState
	// void ClearPropActivatedEventState(class AActor* ContextActor);                                                           // [0xc073500] Final|Native|Static|Private|BlueprintCallable 
};

/// Class /Script/MotherGameplayRuntime.ReactorGradeGameplayCue_ChargeUp
/// Size: 0x0088 (0x0009B0 - 0x000A38)
class AReactorGradeGameplayCue_ChargeUp : public AFortGameplayCueNotify_Loop
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2616;

public:
	CMember(class AFortPawn*)                          Pawn                                                        OFFSET(get<T>, {0x9B0, 8, 0, 0})
	CMember(class UFortWeaponFxComponent_ChargeAimLocation*) CachedAimLocationComponent                            OFFSET(get<T>, {0x9B8, 8, 0, 0})
	SMember(FVector)                                   FoundEndPoint                                               OFFSET(getStruct<T>, {0x9C0, 24, 0, 0})
	SMember(FScalableFloat)                            MinHitDistance                                              OFFSET(getStruct<T>, {0x9D8, 40, 0, 0})
	SMember(FScalableFloat)                            HitObjectsLimit                                             OFFSET(getStruct<T>, {0xA00, 40, 0, 0})
	CMember(TEnumAsByte<ECollisionChannel>)            TraceChannel                                                OFFSET(get<T>, {0xA2C, 1, 0, 0})


	/// Functions
	// Function /Script/MotherGameplayRuntime.ReactorGradeGameplayCue_ChargeUp.UpdateAimEndPoint
	// void UpdateAimEndPoint();                                                                                                // [0xc073ef0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MotherGameplayRuntime.ReactorGradeGameplayCue_ChargeUp.OnEndPointUpdated
	// void OnEndPointUpdated(FVector& FoundPoint);                                                                             // [0x228deb8] Event|Public|HasOutParms|HasDefaults|BlueprintEvent 
	// Function /Script/MotherGameplayRuntime.ReactorGradeGameplayCue_ChargeUp.GetFoundEndPoint
	// FVector GetFoundEndPoint();                                                                                              // [0xc073d88] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/MotherGameplayRuntime.GravyGoblinActivatable_Event
/// Size: 0x0001 (0x000000 - 0x000001)
class FGravyGoblinActivatable_Event : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
	DMember(bool)                                      bIsActivatable                                              OFFSET(get<bool>, {0x0, 1, 0, 0})
};

/// Struct /Script/MotherGameplayRuntime.GravyGoblinRotatable_Event
/// Size: 0x0001 (0x000000 - 0x000001)
class FGravyGoblinRotatable_Event : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
	DMember(bool)                                      bIsRotatable                                                OFFSET(get<bool>, {0x0, 1, 0, 0})
};

/// Struct /Script/MotherGameplayRuntime.GoopAudioMapRangeClamped
/// Size: 0x0020 (0x000000 - 0x000020)
class FGoopAudioMapRangeClamped : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FVector2D)                                 InRange                                                     OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FVector2D)                                 OutRange                                                    OFFSET(getStruct<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/MotherGameplayRuntime.PaddleGingerPropData
/// Size: 0x0028 (0x000000 - 0x000028)
class FPaddleGingerPropData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FText)                                     CategoryLabelText                                           OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	DMember(int32_t)                                   PropIndex                                                   OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	DMember(int32_t)                                   MaxPropCount                                                OFFSET(get<int32_t>, {0x14, 4, 0, 0})
	DMember(int32_t)                                   CategoryIndex                                               OFFSET(get<int32_t>, {0x18, 4, 0, 0})
	DMember(int32_t)                                   MaxCategoryCount                                            OFFSET(get<int32_t>, {0x1C, 4, 0, 0})
	CMember(TWeakObjectPtr<APlayerState*>)             Sender                                                      OFFSET(get<T>, {0x20, 8, 0, 0})
};

/// Struct /Script/MotherGameplayRuntime.PaddleGingerPropActivatedData
/// Size: 0x0010 (0x000000 - 0x000010)
class FPaddleGingerPropActivatedData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(bool)                                      bActivated                                                  OFFSET(get<bool>, {0x0, 1, 0, 0})
	CMember(class APlayerState*)                       Sender                                                      OFFSET(get<T>, {0x8, 8, 0, 0})
};

