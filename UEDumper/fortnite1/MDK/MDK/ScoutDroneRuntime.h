
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: AudioGameplay
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: EnhancedInput
/// dependency: FortniteGame
/// dependency: GameplayAbilities
/// dependency: GameplayTags
/// dependency: ModularGameplay
/// dependency: Niagara
/// dependency: TargetingSystem

/// Class /Script/ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_Dive
/// Size: 0x01A0 (0x000B48 - 0x000CE8)
class UFortGameplayAbility_ScoutDrone_Dive : public UFortGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3304;

public:
	SMember(FFortScoutDroneDiveTransitionData)         EaseInData                                                  OFFSET(getStruct<T>, {0xB58, 48, 0, 0})
	SMember(FFortScoutDroneDiveTransitionData)         EaseOutData                                                 OFFSET(getStruct<T>, {0xB88, 48, 0, 0})
	SMember(FScalableFloat)                            DiveUpdateInterval                                          OFFSET(getStruct<T>, {0xBC0, 40, 0, 0})
	SMember(FScalableFloat)                            DiveSpeedIncrease                                           OFFSET(getStruct<T>, {0xBE8, 40, 0, 0})
	SMember(FScalableFloat)                            MinSpeedToDive                                              OFFSET(getStruct<T>, {0xC10, 40, 0, 0})
	SMember(FScalableFloat)                            MinDistToGround                                             OFFSET(getStruct<T>, {0xC38, 40, 0, 0})
	SMember(FScalableFloat)                            TargetPitchToDive                                           OFFSET(getStruct<T>, {0xC60, 40, 0, 0})
	SMember(FScalableFloat)                            DivingGravityScale                                          OFFSET(getStruct<T>, {0xC88, 40, 0, 0})
	SMember(FScalableFloat)                            MaxSpeedDivingGravityScale                                  OFFSET(getStruct<T>, {0xCB0, 40, 0, 0})


	/// Functions
	// Function /Script/ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_Dive.BP_OnDroneStoppedDiving
	// void BP_OnDroneStoppedDiving();                                                                                          // [0x246f7d8] BlueprintAuthorityOnly|Event|Protected|BlueprintEvent 
	// Function /Script/ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_Dive.BP_OnDroneStartedDiving
	// void BP_OnDroneStartedDiving();                                                                                          // [0x246f7d8] BlueprintAuthorityOnly|Event|Protected|BlueprintEvent 
};

/// Class /Script/ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_TargetingBase
/// Size: 0x0048 (0x000B48 - 0x000B90)
class UFortGameplayAbility_ScoutDrone_TargetingBase : public UFortGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2960;

public:
	CMember(class UTargetingPreset*)                   TargetingPreset                                             OFFSET(get<T>, {0xB48, 8, 0, 0})
	SMember(FTargetingRequestHandle)                   AsyncTargetingHandle                                        OFFSET(getStruct<T>, {0xB50, 4, 0, 0})
	SMember(FTimerHandle)                              TargetingTimerHandle                                        OFFSET(getStruct<T>, {0xB58, 8, 0, 0})
	SMember(FScalableFloat)                            TargetingInterval                                           OFFSET(getStruct<T>, {0xB60, 40, 0, 0})
	DMember(bool)                                      bUseControllerAsInstigator                                  OFFSET(get<bool>, {0xB88, 1, 0, 0})


	/// Functions
	// Function /Script/ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_TargetingBase.StopTargeting
	// void StopTargeting();                                                                                                    // [0xbc16d48] Final|Native|Protected|BlueprintCallable 
	// Function /Script/ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_TargetingBase.StartTargeting
	// void StartTargeting();                                                                                                   // [0xbc16d20] Final|Native|Protected|BlueprintCallable 
	// Function /Script/ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_TargetingBase.BP_OnTargetsFound
	// void BP_OnTargetsFound(FTargetingRequestHandle& TargetingHandle);                                                        // [0x246f7d8] Event|Protected|HasOutParms|BlueprintEvent 
};

/// Class /Script/ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_SpeedBoost
/// Size: 0x00F0 (0x000B90 - 0x000C80)
class UFortGameplayAbility_ScoutDrone_SpeedBoost : public UFortGameplayAbility_ScoutDrone_TargetingBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3200;

public:
	SMember(FGameplayTag)                              DoorBashCueTag                                              OFFSET(getStruct<T>, {0xB90, 4, 0, 0})
	CMember(class UClass*)                             DamageGameplayEffectClass                                   OFFSET(get<T>, {0xB98, 8, 0, 0})
	SMember(FGameplayTag)                              DoorBashPawnLaunchGameplayCueTag                            OFFSET(getStruct<T>, {0xBA0, 4, 0, 0})
	SMember(FScalableFloat)                            DoorBashEnabledHotfix                                       OFFSET(getStruct<T>, {0xBA8, 40, 0, 0})
	SMember(FScalableFloat)                            DoorBashSphereRadiusForPawnLaunch                           OFFSET(getStruct<T>, {0xBD0, 40, 0, 0})
	SMember(FScalableFloat)                            DoorBashScalarForPawnLaunch                                 OFFSET(getStruct<T>, {0xBF8, 40, 0, 0})
	CMember(TArray<TEnumAsByte<EObjectTypeQuery>>)     DoorBashCollisionTypesForPawn                               OFFSET(get<T>, {0xC20, 16, 0, 0})
	SMember(FScalableFloat)                            DoorBashEnabled                                             OFFSET(getStruct<T>, {0xC30, 40, 0, 0})
	SMember(FScalableFloat)                            DamageOnBoostEnabled                                        OFFSET(getStruct<T>, {0xC58, 40, 0, 0})


	/// Functions
	// Function /Script/ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_SpeedBoost.OnDoorBashed
	// void OnDoorBashed(FHitResult& HitResult, class UFortBuildingWallDoorComponent* BashedDoor);                              // [0x246f7d8] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_SpeedBoost.OnBoostedIntoActor
	// void OnBoostedIntoActor(FHitResult& HitResult);                                                                          // [0x246f7d8] Event|Protected|HasOutParms|BlueprintEvent 
};

/// Class /Script/ScoutDroneRuntime.FortScoutDroneAnalyticsComponent
/// Size: 0x00B0 (0x0000A8 - 0x000158)
class UFortScoutDroneAnalyticsComponent : public UFortControllerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 344;

public:
	DMember(float)                                     SessionStartTime                                            OFFSET(get<float>, {0xA8, 4, 0, 0})
	DMember(float)                                     SessionLength                                               OFFSET(get<float>, {0xAC, 4, 0, 0})
	SMember(FScalableFloat)                            MinSessionLength                                            OFFSET(getStruct<T>, {0xB0, 40, 0, 0})
	DMember(float)                                     DistanceTraveled                                            OFFSET(get<float>, {0xD8, 4, 0, 0})
	DMember(int32_t)                                   NumberOfContainersInteractedWith                            OFFSET(get<int32_t>, {0xDC, 4, 0, 0})
	SMember(FGameplayTag)                              DismissalReason                                             OFFSET(getStruct<T>, {0xE0, 4, 0, 0})
	DMember(int32_t)                                   NumberOfItemsPickedUp                                       OFFSET(get<int32_t>, {0xE4, 4, 0, 0})
	CMember(TArray<FString>)                           DBNOCarriedPlayers                                          OFFSET(get<T>, {0xE8, 16, 0, 0})
	DMember(int32_t)                                   NumberOfEnemiesPassivelyMarked                              OFFSET(get<int32_t>, {0xF8, 4, 0, 0})
	DMember(int32_t)                                   NumberOfEnemiesMarkedOnCaw                                  OFFSET(get<int32_t>, {0xFC, 4, 0, 0})
	DMember(int32_t)                                   NumberOfCaws                                                OFFSET(get<int32_t>, {0x100, 4, 0, 0})
	SMember(FScalableFloat)                            DistanceTraveledUpdateInterval                              OFFSET(getStruct<T>, {0x110, 40, 0, 0})
	SMember(FTimerHandle)                              DistanceTraveledUpdateTimerHandle                           OFFSET(getStruct<T>, {0x138, 8, 0, 0})
	SMember(FVector)                                   LastRecorderDroneLocation                                   OFFSET(getStruct<T>, {0x140, 24, 0, 0})
};

/// Class /Script/ScoutDroneRuntime.FortScoutDroneAnimInstance
/// Size: 0x01F0 (0x000460 - 0x000650)
class UFortScoutDroneAnimInstance : public UFortBaseAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1616;

public:
	CMember(class UFortScoutDroneMovementComponent*)   FortScoutDroneMovementComponent                             OFFSET(get<T>, {0x458, 8, 0, 0})
	DMember(double)                                    YawDeltaLastTick                                            OFFSET(get<double>, {0x460, 8, 0, 0})
	SMember(FRotator)                                  ActorCurrentRotationTick                                    OFFSET(getStruct<T>, {0x468, 24, 0, 0})
	DMember(double)                                    YawDeltaCurrentTick                                         OFFSET(get<double>, {0x480, 8, 0, 0})
	SMember(FRotator)                                  ActorRotationLastTick                                       OFFSET(getStruct<T>, {0x488, 24, 0, 0})
	DMember(bool)                                      IsFlying                                                    OFFSET(get<bool>, {0x4A0, 1, 0, 0})
	DMember(double)                                    CurrentVelocity                                             OFFSET(get<double>, {0x4A8, 8, 0, 0})
	DMember(double)                                    LastVelocity                                                OFFSET(get<double>, {0x4B0, 8, 0, 0})
	DMember(double)                                    Velocity                                                    OFFSET(get<double>, {0x4B8, 8, 0, 0})
	DMember(double)                                    ForwardInputAlpha                                           OFFSET(get<double>, {0x4C0, 8, 0, 0})
	DMember(double)                                    StrafeInputAlpha                                            OFFSET(get<double>, {0x4C8, 8, 0, 0})
	SMember(FRotator)                                  DroneRotation                                               OFFSET(getStruct<T>, {0x4D0, 24, 0, 0})
	DMember(double)                                    Acceleration                                                OFFSET(get<double>, {0x4E8, 8, 0, 0})
	CMember(class AFortScoutDrone*)                    ScoutDrone                                                  OFFSET(get<T>, {0x4F0, 8, 0, 0})
	DMember(bool)                                      IsBoosting                                                  OFFSET(get<bool>, {0x4F8, 1, 0, 0})
	DMember(bool)                                      IsDiving                                                    OFFSET(get<bool>, {0x4F9, 1, 0, 0})
	DMember(double)                                    AimPitch                                                    OFFSET(get<double>, {0x500, 8, 0, 0})
	DMember(double)                                    NegativeAimPitch                                            OFFSET(get<double>, {0x508, 8, 0, 0})
	SMember(FRotator)                                  FinalFanRotationL                                           OFFSET(getStruct<T>, {0x510, 24, 0, 0})
	SMember(FRotator)                                  FinalFanRotationR                                           OFFSET(getStruct<T>, {0x528, 24, 0, 0})
	DMember(double)                                    FanIdleSpeed                                                OFFSET(get<double>, {0x540, 8, 0, 0})
	DMember(double)                                    FanAuthoredSpeed                                            OFFSET(get<double>, {0x548, 8, 0, 0})
	DMember(double)                                    FanIdleAuthoredSpeed                                        OFFSET(get<double>, {0x550, 8, 0, 0})
	DMember(double)                                    FanBwdSpeed                                                 OFFSET(get<double>, {0x558, 8, 0, 0})
	DMember(double)                                    FanFwdSpeed                                                 OFFSET(get<double>, {0x560, 8, 0, 0})
	DMember(double)                                    TurnNoiseAlpha                                              OFFSET(get<double>, {0x568, 8, 0, 0})
	DMember(double)                                    LeanAlpha                                                   OFFSET(get<double>, {0x570, 8, 0, 0})
	DMember(double)                                    TurnAlpha                                                   OFFSET(get<double>, {0x578, 8, 0, 0})
	DMember(bool)                                      IsColliding                                                 OFFSET(get<bool>, {0x580, 1, 0, 0})
	DMember(bool)                                      IsFlyingBwd                                                 OFFSET(get<bool>, {0x581, 1, 0, 0})
	DMember(bool)                                      ShouldExitFromFlying                                        OFFSET(get<bool>, {0x582, 1, 0, 0})
	DMember(bool)                                      ShouldExitFromDiving                                        OFFSET(get<bool>, {0x583, 1, 0, 0})
	DMember(bool)                                      EarlyIntoLoop                                               OFFSET(get<bool>, {0x584, 1, 0, 0})
	DMember(double)                                    AccelerationZ                                               OFFSET(get<double>, {0x588, 8, 0, 0})
	DMember(bool)                                      IsLeftStrafe                                                OFFSET(get<bool>, {0x590, 1, 0, 0})
	DMember(bool)                                      WasStrafing                                                 OFFSET(get<bool>, {0x591, 1, 0, 0})
	DMember(double)                                    GroundDistance                                              OFFSET(get<double>, {0x598, 8, 0, 0})
	DMember(bool)                                      HasDivingConditionBeenMet                                   OFFSET(get<bool>, {0x5A0, 1, 0, 0})
	DMember(bool)                                      IsItemAttached                                              OFFSET(get<bool>, {0x5A1, 1, 0, 0})
	DMember(bool)                                      IsPlayerAttached                                            OFFSET(get<bool>, {0x5A2, 1, 0, 0})
	DMember(double)                                    FlapTime                                                    OFFSET(get<double>, {0x5A8, 8, 0, 0})
	DMember(int32_t)                                   FlapRandomPick                                              OFFSET(get<int32_t>, {0x5B0, 4, 0, 0})
	DMember(bool)                                      IsFlapSmall                                                 OFFSET(get<bool>, {0x5B4, 1, 0, 0})
	DMember(int32_t)                                   FlapRandomMaxRange                                          OFFSET(get<int32_t>, {0x5B8, 4, 0, 0})
	DMember(double)                                    FlapSmallTimeThreshold                                      OFFSET(get<double>, {0x5C0, 8, 0, 0})
	DMember(double)                                    FlapBigTimeThreshold                                        OFFSET(get<double>, {0x5C8, 8, 0, 0})
	DMember(double)                                    FlapSmallResetDelayDuration                                 OFFSET(get<double>, {0x5D0, 8, 0, 0})
	DMember(double)                                    FlapBigResetDelayDuration                                   OFFSET(get<double>, {0x5D8, 8, 0, 0})
	DMember(bool)                                      IsFlapBig                                                   OFFSET(get<bool>, {0x5E0, 1, 0, 0})
	DMember(double)                                    VerticalInputAlpha                                          OFFSET(get<double>, {0x5E8, 8, 0, 0})
	DMember(bool)                                      WasVerticalUp                                               OFFSET(get<bool>, {0x5F0, 1, 0, 0})
	DMember(bool)                                      IsFlyingVerticalUp                                          OFFSET(get<bool>, {0x5F1, 1, 0, 0})
	DMember(bool)                                      ShouldExitFromBoostOutro                                    OFFSET(get<bool>, {0x5F2, 1, 0, 0})
	DMember(bool)                                      HasSpawned                                                  OFFSET(get<bool>, {0x5F3, 1, 0, 0})
	DMember(bool)                                      ShouldExitFromSpawning                                      OFFSET(get<bool>, {0x5F4, 1, 0, 0})
	DMember(bool)                                      ShouldAllowTransition                                       OFFSET(get<bool>, {0x5F5, 1, 0, 0})
	DMember(bool)                                      StateRuleFromBoostOutroToFlying                             OFFSET(get<bool>, {0x5F6, 1, 0, 0})
	DMember(bool)                                      WasBoosting                                                 OFFSET(get<bool>, {0x5F7, 1, 0, 0})
	SMember(FScalableFloat)                            SpeedBoostForceBoostVelocity                                OFFSET(getStruct<T>, {0x5F8, 40, 0, 0})
	SMember(FScalableFloat)                            SpeedBoostMaxSpeedIncrease                                  OFFSET(getStruct<T>, {0x620, 40, 0, 0})
	DMember(bool)                                      IsFlappingTime                                              OFFSET(get<bool>, {0x648, 1, 0, 0})
};

/// Class /Script/ScoutDroneRuntime.FortScoutDroneGlove
/// Size: 0x0040 (0x001508 - 0x001548)
class AFortScoutDroneGlove : public AFortWeapon
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5448;

public:
	SMember(FScalableFloat)                            HoldToDeployTime                                            OFFSET(getStruct<T>, {0x1508, 40, 0, 0})
};

/// Class /Script/ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_Activate
/// Size: 0x0020 (0x000B48 - 0x000B68)
class UFortGameplayAbility_ScoutDrone_Activate : public UFortGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2920;

public:
	CMember(class UClass*)                             RCActorClass                                                OFFSET(get<T>, {0xB48, 8, 0, 0})
	SMember(FVector)                                   SpawnOffset                                                 OFFSET(getStruct<T>, {0xB50, 24, 0, 0})
};

/// Class /Script/ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_Dismiss
/// Size: 0x0010 (0x000B48 - 0x000B58)
class UFortGameplayAbility_ScoutDrone_Dismiss : public UFortGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2904;

public:
	SMember(FScoutDroneDeferredDestructionData)        DismissDelayData                                            OFFSET(getStruct<T>, {0xB48, 16, 0, 0})


	/// Functions
	// Function /Script/ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_Dismiss.GetControlledDrone
	// class AFortScoutDrone* GetControlledDrone();                                                                             // [0xbc15bfc] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_MarkPotentialTargets
/// Size: 0x0130 (0x000B90 - 0x000CC0)
class UFortGameplayAbility_ScoutDrone_MarkPotentialTargets : public UFortGameplayAbility_ScoutDrone_TargetingBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3264;

public:
	SMember(FIndicatedActorData)                       IndicatedActorData                                          OFFSET(getStruct<T>, {0xB90, 248, 0, 0})
	SMember(FScalableFloat)                            MaxNumberOfPotentialTargets                                 OFFSET(getStruct<T>, {0xC98, 40, 0, 0})


	/// Functions
	// Function /Script/ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_MarkPotentialTargets.OnStoppedHighlightingTarget
	// void OnStoppedHighlightingTarget(class AActor* Target);                                                                  // [0x246f7d8] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_MarkPotentialTargets.OnStartHighlightingTarget
	// void OnStartHighlightingTarget(class AActor* Target);                                                                    // [0x246f7d8] BlueprintCosmetic|Event|Protected|BlueprintEvent 
};

/// Class /Script/ScoutDroneRuntime.ScoutDronePassiveMarkPayload
/// Size: 0x0008 (0x000028 - 0x000030)
class UScoutDronePassiveMarkPayload : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FScoutDroneStatusData)                     TargetStatus                                                OFFSET(getStruct<T>, {0x28, 8, 0, 0})
};

/// Class /Script/ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_PassiveMark
/// Size: 0x01F8 (0x000B90 - 0x000D88)
class UFortGameplayAbility_ScoutDrone_PassiveMark : public UFortGameplayAbility_ScoutDrone_TargetingBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3464;

public:
	SMember(FScoutDroneStatusData)                     CurrentTargetStatus                                         OFFSET(getStruct<T>, {0xB90, 8, 0, 0})
	SMember(FStenciledActorData)                       StenciledActorData                                          OFFSET(getStruct<T>, {0xB98, 128, 0, 0})
	SMember(FIndicatedActorData)                       IndicatedActorData                                          OFFSET(getStruct<T>, {0xC18, 248, 0, 0})
	SMember(FScalableFloat)                            ActorTargetingRange                                         OFFSET(getStruct<T>, {0xD10, 40, 0, 0})
	SMember(FScalableFloat)                            TimeToConfirmTarget                                         OFFSET(getStruct<T>, {0xD38, 40, 0, 0})
	CMember(class AActor*)                             CurrentTarget                                               OFFSET(get<T>, {0xD60, 8, 0, 0})
	SMember(FTimerHandle)                              TargetConfirmationTimerHandle                               OFFSET(getStruct<T>, {0xD68, 8, 0, 0})
	CMember(class UScoutDronePassiveMarkPayload*)      PayloadCache                                                OFFSET(get<T>, {0xD70, 8, 0, 0})


	/// Functions
	// Function /Script/ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_PassiveMark.OnRep_CurrentTargetStatus
	// void OnRep_CurrentTargetStatus();                                                                                        // [0xbc16708] Final|Native|Protected 
	// Function /Script/ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_PassiveMark.OnActorIndicatorExpired
	// void OnActorIndicatorExpired(class AActor* IndicatedActor);                                                              // [0xbc15e00] Final|Native|Private 
	// Function /Script/ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_PassiveMark.BP_OnTargetStatusChanged
	// void BP_OnTargetStatusChanged(class AActor* ActiveTarget);                                                               // [0x246f7d8] BlueprintAuthorityOnly|Event|Protected|BlueprintEvent 
};

/// Class /Script/ScoutDroneRuntime.ScoutDronePickUpTargetsPayload
/// Size: 0x0018 (0x000028 - 0x000040)
class UScoutDronePickUpTargetsPayload : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FScoutDronePickupTargets)                  PickUpTargets                                               OFFSET(getStruct<T>, {0x28, 24, 0, 0})
};

/// Class /Script/ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_PickUp
/// Size: 0x0078 (0x000B90 - 0x000C08)
class UFortGameplayAbility_ScoutDrone_PickUp : public UFortGameplayAbility_ScoutDrone_TargetingBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3080;

public:
	SMember(FScalableFloat)                            MaxNumberOfItemsToGrab                                      OFFSET(getStruct<T>, {0xB98, 40, 0, 0})
	CMember(class UScoutDronePickUpTargetsPayload*)    PayloadCache                                                OFFSET(get<T>, {0xBC0, 8, 0, 0})
	SMember(FScalableFloat)                            PickupToggleCooldownDuration                                OFFSET(getStruct<T>, {0xBC8, 40, 0, 0})
	CMember(class UClass*)                             AttachedPawnGEClass                                         OFFSET(get<T>, {0xC00, 8, 0, 0})


	/// Functions
	// Function /Script/ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_PickUp.ServerConfirmTargets
	// void ServerConfirmTargets();                                                                                             // [0x88751b0] Final|Net|NetReliableNative|Event|Private|NetServer 
};

/// Class /Script/ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_Tether
/// Size: 0x0078 (0x000B48 - 0x000BC0)
class UFortGameplayAbility_ScoutDrone_Tether : public UFortGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3008;

public:
	SMember(FScalableFloat)                            WarningRange                                                OFFSET(getStruct<T>, {0xB48, 40, 0, 0})
	SMember(FScalableFloat)                            SignalLossRange                                             OFFSET(getStruct<T>, {0xB70, 40, 0, 0})
	DMember(bool)                                      bIsInWarningRange                                           OFFSET(get<bool>, {0xB98, 1, 0, 0})
	DMember(bool)                                      bIsInSignalLossRange                                        OFFSET(get<bool>, {0xB99, 1, 0, 0})
	SMember(FTimerHandle)                              TetheringTimerHandle                                        OFFSET(getStruct<T>, {0xBA0, 8, 0, 0})
	SMember(FTimerHandle)                              TetheringReportTimerHandle                                  OFFSET(getStruct<T>, {0xBA8, 8, 0, 0})
	SMember(FScoutDroneDeferredDestructionData)        DismissDelayData                                            OFFSET(getStruct<T>, {0xBB0, 16, 0, 0})


	/// Functions
	// Function /Script/ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_Tether.StopCheckingDistances
	// void StopCheckingDistances();                                                                                            // [0xbc16d34] Final|Native|Protected|BlueprintCallable 
	// Function /Script/ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_Tether.StartCheckingDistances
	// void StartCheckingDistances();                                                                                           // [0xbc16d0c] Final|Native|Protected|BlueprintCallable 
	// Function /Script/ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_Tether.OnRep_bIsInWarningRange
	// void OnRep_bIsInWarningRange();                                                                                          // [0xbc16838] Final|Native|Private 
	// Function /Script/ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_Tether.OnRep_bIsInSignalLossRange
	// void OnRep_bIsInSignalLossRange();                                                                                       // [0xbc167e0] Final|Native|Private 
};

/// Class /Script/ScoutDroneRuntime.FortAthenaMutator_ScoutDrone
/// Size: 0x0048 (0x000338 - 0x000380)
class AFortAthenaMutator_ScoutDrone : public AFortAthenaMutator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 896;

public:
	SMember(FGameplayTagContainer)                     DroneAllowedInteractionTags                                 OFFSET(getStruct<T>, {0x338, 32, 0, 0})
	SMember(FGameplayTagContainer)                     DroneBlockedInteractionTags                                 OFFSET(getStruct<T>, {0x358, 32, 0, 0})
	DMember(bool)                                      bIsControllingDrone                                         OFFSET(get<bool>, {0x378, 1, 0, 0})


	/// Functions
	// Function /Script/ScoutDroneRuntime.FortAthenaMutator_ScoutDrone.OnViewTargetChanged
	// void OnViewTargetChanged(class AFortPlayerController* PlayerController, class AActor* OldViewTarget, class AActor* NewViewTarget); // [0xbc1684c] Final|Native|Private 
};

/// Class /Script/ScoutDroneRuntime.FortChargingSet_ScoutDroneEnergy
/// Size: 0x00C0 (0x000048 - 0x000108)
class UFortChargingSet_ScoutDroneEnergy : public UFortChargingSet_Base
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:
	SMember(FFortGameplayAttributeData)                Energy                                                      OFFSET(getStruct<T>, {0x48, 40, 0, 0})
	SMember(FFortGameplayAttributeData)                MaxEnergy                                                   OFFSET(getStruct<T>, {0x70, 40, 0, 0})
	SMember(FFortGameplayAttributeData)                EnergyChargeRate                                            OFFSET(getStruct<T>, {0x98, 40, 0, 0})
	SMember(FFortGameplayAttributeData)                ServerTimeEnergyIncrements                                  OFFSET(getStruct<T>, {0xC0, 40, 0, 0})


	/// Functions
	// Function /Script/ScoutDroneRuntime.FortChargingSet_ScoutDroneEnergy.OnRep_Energy
	// void OnRep_Energy(FFortGameplayAttributeData& OldValue);                                                                 // [0xbc1671c] Final|Native|Protected|HasOutParms 
};

/// Class /Script/ScoutDroneRuntime.FortScoutDrone
/// Size: 0x01B0 (0x000660 - 0x000810)
class AFortScoutDrone : public ACharacter
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2064;

public:
	DMember(bool)                                      bIsDiving                                                   OFFSET(get<bool>, {0x6B8, 1, 0, 0})
	SMember(FScalableFloat)                            DivingEnabled                                               OFFSET(getStruct<T>, {0x6C0, 40, 0, 0})
	DMember(bool)                                      bIsSpeedBoosting                                            OFFSET(get<bool>, {0x6E8, 1, 0, 0})
	CMember(class UNiagaraComponent*)                  NSScoutDroneIdle_Native                                     OFFSET(get<T>, {0x6F0, 8, 0, 0})
	CMember(class UFortScoutDronePickupManager*)       PickupManagerComponent_Native                               OFFSET(get<T>, {0x6F8, 8, 0, 0})
	CMember(class UClass*)                             TeamMateIndicatorMarkerWidgetClass                          OFFSET(get<T>, {0x700, 8, 0, 0})
	CMember(class UAudioComponent*)                    DroneMotorLoopComponent                                     OFFSET(get<T>, {0x708, 8, 0, 0})
	CMember(class UAudioComponent*)                    DroneThrustSoundComponent                                   OFFSET(get<T>, {0x710, 8, 0, 0})
	SMember(FScalableFloat)                            BaseMaxFlySpeed                                             OFFSET(getStruct<T>, {0x718, 40, 0, 0})
	SMember(FGameplayTagContainer)                     DefaultTags                                                 OFFSET(getStruct<T>, {0x740, 32, 0, 0})
	CMember(class UFortAbilitySystemComponent*)        AbilitySystemComponent                                      OFFSET(get<T>, {0x768, 8, 0, 0})
	CMember(class UFortActorComponent_Affiliation*)    AffiliationComponent                                        OFFSET(get<T>, {0x770, 8, 0, 0})
	CMember(class UFortAbilitySet*)                    StartupAbilitySet                                           OFFSET(get<T>, {0x778, 8, 0, 0})
	CMember(class AFortPawn*)                          ControllingPlayerPawn                                       OFFSET(get<T>, {0x780, 8, 0, 0})
	CMember(class UFortHealthSet*)                     HealthSet                                                   OFFSET(get<T>, {0x788, 8, 0, 0})
	CMember(class UFortChargingSet_ScoutDroneEnergy*)  EnergySet                                                   OFFSET(get<T>, {0x790, 8, 0, 0})
	DMember(float)                                     LifespanAfterDeath                                          OFFSET(get<float>, {0x798, 4, 0, 0})
	SMember(FFortAttributeInitializationKey)           AttributeInitKey                                            OFFSET(getStruct<T>, {0x79C, 8, 0, 0})
	CMember(TEnumAsByte<EPhysicalSurface>)             PrimarySurfaceType                                          OFFSET(get<T>, {0x7A4, 1, 0, 0})
	CMember(TEnumAsByte<EFortBaseWeaponDamage>)        WeaponResponseType                                          OFFSET(get<T>, {0x7A5, 1, 0, 0})
	DMember(bool)                                      bPlayedDeath                                                OFFSET(get<bool>, {0x7A6, 1, 0, 0})
	SMember(FScoutDroneDeferredDestructionData)        OutOfHealthDismissDelayData                                 OFFSET(getStruct<T>, {0x7A8, 16, 0, 0})
	SMember(FScoutDroneDeferredDestructionData)        OutOfEnergyDismissDelayData                                 OFFSET(getStruct<T>, {0x7B8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnTeamIndexChanged                                          OFFSET(getStruct<T>, {0x7C8, 16, 0, 0})
	CMember(class UClass*)                             PawnOverrideComponentClass                                  OFFSET(get<T>, {0x7D8, 8, 0, 0})
	CMember(class USoundBase*)                         DroneMotorLoopSound                                         OFFSET(get<T>, {0x7E0, 8, 0, 0})
	CMember(class USoundBase*)                         DroneThrusterSound                                          OFFSET(get<T>, {0x7E8, 8, 0, 0})
	CMember(class UAudioParameterComponent*)           AudioParameter                                              OFFSET(get<T>, {0x7F0, 8, 0, 0})
	SMember(FName)                                     LocallyViewedPawnAudioParamName                             OFFSET(getStruct<T>, {0x7F8, 4, 0, 0})
	SMember(FName)                                     IsEnemyAudioParamName                                       OFFSET(getStruct<T>, {0x7FC, 4, 0, 0})
	SMember(FName)                                     ThrustAmountAudioParamName                                  OFFSET(getStruct<T>, {0x800, 4, 0, 0})
	DMember(float)                                     ThrustSoundThreshold                                        OFFSET(get<float>, {0x804, 4, 0, 0})


	/// Functions
	// Function /Script/ScoutDroneRuntime.FortScoutDrone.SetupGameplayAudioParameters
	// void SetupGameplayAudioParameters();                                                                                     // [0xbc16cf8] Final|BlueprintCosmetic|Native|Protected|BlueprintCallable 
	// Function /Script/ScoutDroneRuntime.FortScoutDrone.SetTeamMatesIndicator
	// void SetTeamMatesIndicator(bool bState);                                                                                 // [0xbc16c34] Final|Native|Protected|BlueprintCallable 
	// Function /Script/ScoutDroneRuntime.FortScoutDrone.SetAffiliationAudio
	// void SetAffiliationAudio();                                                                                              // [0xbc16c20] Final|Native|Protected|BlueprintCallable 
	// Function /Script/ScoutDroneRuntime.FortScoutDrone.OnRep_ControllingPlayerPawn
	// void OnRep_ControllingPlayerPawn();                                                                                      // [0xbc166e0] Final|Native|Private 
	// Function /Script/ScoutDroneRuntime.FortScoutDrone.OnDeathPlayEffects
	// void OnDeathPlayEffects(float Damage, FGameplayTagContainer& DamageTags, FVector Momentum, FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, FGameplayEffectContextHandle EffectContext); // [0x246f7d8] BlueprintCosmetic|Event|Protected|HasOutParms|HasDefaults|BlueprintEvent 
	// Function /Script/ScoutDroneRuntime.FortScoutDrone.OnDamagePlayEffects
	// void OnDamagePlayEffects(float Damage, FGameplayTagContainer& DamageTags, FVector Momentum, FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, FGameplayEffectContextHandle EffectContext); // [0x246f7d8] BlueprintCosmetic|Event|Protected|HasOutParms|HasDefaults|BlueprintEvent 
	// Function /Script/ScoutDroneRuntime.FortScoutDrone.GetHealthPercentage
	// float GetHealthPercentage();                                                                                             // [0xbc15da4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ScoutDroneRuntime.FortScoutDrone.GetForwardAndRightDotProducts_Native
	// void GetForwardAndRightDotProducts_Native(float& OutForwardDot, float& OutRightDot);                                     // [0xbc15ccc] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/ScoutDroneRuntime.FortScoutDrone.GetDeltaRotator
	// FRotator GetDeltaRotator();                                                                                              // [0xbc15c7c] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ScoutDroneRuntime.FortScoutDrone.GetControllingPlayerPawn
	// class AFortPawn* GetControllingPlayerPawn();                                                                             // [0xbc15c64] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ScoutDroneRuntime.FortScoutDrone.GameplayCue_Damage
	// void GameplayCue_Damage(TEnumAsByte<EGameplayCueEvent> EventType, FGameplayCueParameters Parameters);                    // [0x8e3c000] Native|Protected     
};

/// Class /Script/ScoutDroneRuntime.FortScoutDroneCameraMode
/// Size: 0x0008 (0x0001F0 - 0x0001F8)
class UFortScoutDroneCameraMode : public UFort3PCameraMode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 504;

public:
	DMember(bool)                                      bShouldInterpolateLocation                                  OFFSET(get<bool>, {0x1F0, 1, 0, 0})
	DMember(bool)                                      bShouldInterpolateRotation                                  OFFSET(get<bool>, {0x1F1, 1, 0, 0})
};

/// Class /Script/ScoutDroneRuntime.ScoutDroneDeferredDestructionPayload
/// Size: 0x0010 (0x000028 - 0x000038)
class UScoutDroneDeferredDestructionPayload : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FScoutDroneDeferredDestructionData)        DeferredDestructionData                                     OFFSET(getStruct<T>, {0x28, 16, 0, 0})
};

/// Class /Script/ScoutDroneRuntime.FortScoutDroneControllingComponent
/// Size: 0x02B0 (0x0000A8 - 0x000358)
class UFortScoutDroneControllingComponent : public UFortControllerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 856;

public:
	CMember(class UInputComponent*)                    DroneInputComponent                                         OFFSET(get<T>, {0xD8, 8, 0, 0})
	CMember(class AFortScoutDrone*)                    ControlledDrone                                             OFFSET(get<T>, {0xE0, 8, 0, 0})
	CMember(class AActor*)                             OriginalDroneOwner                                          OFFSET(get<T>, {0xE8, 8, 0, 0})
	CMember(class UFortInputMappingContext*)           DroneInputContext                                           OFFSET(get<T>, {0xF0, 8, 0, 0})
	CMember(TArray<FScoutDroneInputTriggerableEvent>)  InputTriggerableEvents                                      OFFSET(get<T>, {0xF8, 16, 0, 0})
	CMember(class UInputAction*)                       MoveUpAction                                                OFFSET(get<T>, {0x108, 8, 0, 0})
	CMember(class UInputAction*)                       MoveAction                                                  OFFSET(get<T>, {0x110, 8, 0, 0})
	CMember(class UInputAction*)                       DismissAction                                               OFFSET(get<T>, {0x118, 8, 0, 0})
	CMember(class UClass*)                             DroneCooldownEffectClass                                    OFFSET(get<T>, {0x120, 8, 0, 0})
	SMember(FStenciledActorData)                       OwningActorStencilData                                      OFFSET(getStruct<T>, {0x140, 128, 0, 0})
	SMember(FScoutDroneDeferredDestructionData)        CurrentDestructionData                                      OFFSET(getStruct<T>, {0x1C0, 16, 0, 0})
	CMember(class UClass*)                             FirstPersonCameraModeOverride                               OFFSET(get<T>, {0x1D0, 8, 0, 0})
	CMember(class UClass*)                             ThirdPersonCameraModeOverride                               OFFSET(get<T>, {0x1D8, 8, 0, 0})
	SMember(FGameplayAbilitySpec)                      FakeCameraAbilitySpec                                       OFFSET(getStruct<T>, {0x1E0, 240, 0, 0})
	CMember(TArray<FName>)                             LegacyInputActionsToBlock                                   OFFSET(get<T>, {0x2D0, 16, 0, 0})
	CMember(class UScoutDroneDeferredDestructionPayload*) DismissPayloadCache                                      OFFSET(get<T>, {0x2E0, 8, 0, 0})
	SMember(FScalableFloat)                            DismissButtonPressCooldown                                  OFFSET(getStruct<T>, {0x2E8, 40, 0, 0})
	SMember(FViewTargetTransitionParams)               PlayerToDroneTransitionParams                               OFFSET(getStruct<T>, {0x318, 16, 0, 0})
	SMember(FGameplayTagContainer)                     InterruptingPlayerTags                                      OFFSET(getStruct<T>, {0x330, 32, 0, 0})


	/// Functions
	// Function /Script/ScoutDroneRuntime.FortScoutDroneControllingComponent.ServerRequestDroneDismissal
	// void ServerRequestDroneDismissal();                                                                                      // [0x875f0a8] Final|Net|NetReliableNative|Event|Private|NetServer 
	// Function /Script/ScoutDroneRuntime.FortScoutDroneControllingComponent.OnWeaponEquipped
	// void OnWeaponEquipped(class AFortWeapon* NewWeapon, class AFortWeapon* PrevWeapon);                                      // [0xbc16a08] Final|Native|Private 
	// Function /Script/ScoutDroneRuntime.FortScoutDroneControllingComponent.OnRep_CurrentDestructionData
	// void OnRep_CurrentDestructionData();                                                                                     // [0xbc166f4] Final|Native|Private 
	// Function /Script/ScoutDroneRuntime.FortScoutDroneControllingComponent.OnRep_ControlledDrone
	// void OnRep_ControlledDrone();                                                                                            // [0xbc166a4] Final|Native|Private 
	// Function /Script/ScoutDroneRuntime.FortScoutDroneControllingComponent.OnPlayerInterruptionTagsChanged
	// void OnPlayerInterruptionTagsChanged(FGameplayTag tag, int32_t NewCount);                                                // [0xbc164c4] Final|Native|Private 
	// Function /Script/ScoutDroneRuntime.FortScoutDroneControllingComponent.OnOwningPlayerStartedDBNO
	// void OnOwningPlayerStartedDBNO();                                                                                        // [0xbc16370] Final|Native|Private 
	// Function /Script/ScoutDroneRuntime.FortScoutDroneControllingComponent.OnControlledDroneDestroyed
	// void OnControlledDroneDestroyed(class AActor* InControlledDrone);                                                        // [0xbc162b0] Final|Native|Private 
	// Function /Script/ScoutDroneRuntime.FortScoutDroneControllingComponent.GetControlledDrone
	// class AFortScoutDrone* GetControlledDrone();                                                                             // [0x8788880] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ScoutDroneRuntime.FortScoutDroneControllingComponent.BP_OnPlayerShortInteract
	// void BP_OnPlayerShortInteract();                                                                                         // [0x246f7d8] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/ScoutDroneRuntime.FortScoutDroneControllingComponent.BP_OnPlayerInteractLongUseChanged
	// void BP_OnPlayerInteractLongUseChanged(bool bInteracting, bool bLongUseInteractionCompleted);                            // [0x246f7d8] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/ScoutDroneRuntime.FortScoutDroneControllingComponent.BP_OnDroneDestroyed
	// void BP_OnDroneDestroyed(FGameplayTag& DismissalReason);                                                                 // [0x246f7d8] BlueprintCosmetic|Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/ScoutDroneRuntime.FortScoutDroneControllingComponent.BP_OnDismissalStarted
	// void BP_OnDismissalStarted(bool bInstantDismissal, FGameplayTag DismissalReason);                                        // [0x246f7d8] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/ScoutDroneRuntime.FortScoutDroneControllingComponent.BP_OnDestructionStarted
	// void BP_OnDestructionStarted(bool bInstantDestruction, FGameplayTag DismissalReason);                                    // [0x246f7d8] BlueprintCosmetic|Event|Protected|BlueprintEvent 
};

/// Class /Script/ScoutDroneRuntime.FortScoutDroneCooldownMagnitudeCalculation
/// Size: 0x0028 (0x000040 - 0x000068)
class UFortScoutDroneCooldownMagnitudeCalculation : public UFortGameplayModMagnitudeCalculation
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FScalableFloat)                            MinDroneCooldown                                            OFFSET(getStruct<T>, {0x40, 40, 0, 0})
};

/// Class /Script/ScoutDroneRuntime.FortScoutDroneMovementComponent
/// Size: 0x00C0 (0x000F60 - 0x001020)
class UFortScoutDroneMovementComponent : public UCharacterMovementComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 4128;

public:
	SMember(FVector)                                   LocalInputState                                             OFFSET(getStruct<T>, {0xF58, 24, 0, 0})
	SMember(FVector)                                   LastInputState                                              OFFSET(getStruct<T>, {0xF70, 24, 0, 0})
	SMember(FVector)                                   ReplicatedAcceleration                                      OFFSET(getStruct<T>, {0xF88, 24, 0, 0})
	SMember(FScalableFloat)                            StrafeInputMultiplier                                       OFFSET(getStruct<T>, {0xFA0, 40, 0, 0})
	SMember(FScalableFloat)                            BacktrackingInputMultiplier                                 OFFSET(getStruct<T>, {0xFC8, 40, 0, 0})
	SMember(FScalableFloat)                            VerticalMovementInputMultiplier                             OFFSET(getStruct<T>, {0xFF0, 40, 0, 0})
};

/// Class /Script/ScoutDroneRuntime.FortScoutDronePawnOverrideComponent
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UFortScoutDronePawnOverrideComponent : public UFortPawnOverrideComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	CMember(class UClass*)                             DroneSpectateCameraMode                                     OFFSET(get<T>, {0xA8, 8, 0, 0})
};

/// Class /Script/ScoutDroneRuntime.FortScoutDronePawnOwnerOverrideComponent
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UFortScoutDronePawnOwnerOverrideComponent : public UFortPawnOverrideComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	CMember(TWeakObjectPtr<AFortScoutDrone*>)          ControlledDrone                                             OFFSET(get<T>, {0xA8, 8, 0, 0})
};

/// Class /Script/ScoutDroneRuntime.FortScoutDronePickupManager
/// Size: 0x0138 (0x0000A0 - 0x0001D8)
class UFortScoutDronePickupManager : public UPawnComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 472;

public:
	SMember(FScoutDronePickupTargets)                  AttachedTargets                                             OFFSET(getStruct<T>, {0xA0, 24, 0, 0})
	SMember(FName)                                     AttachPointSocketName                                       OFFSET(getStruct<T>, {0xB8, 4, 0, 0})
	SMember(FScoutDronePickupTargets)                  PreviouslyAttachedTargets                                   OFFSET(getStruct<T>, {0xC0, 24, 0, 0})
	SMember(FVector)                                   ItemOffset                                                  OFFSET(getStruct<T>, {0xD8, 24, 0, 0})
	SMember(FVector)                                   DBNOPawnOffset                                              OFFSET(getStruct<T>, {0xF0, 24, 0, 0})
	DMember(float)                                     CurrentlyAppliedCameraOffset                                OFFSET(get<float>, {0x108, 4, 0, 0})
	SMember(FScoutDroneCapsuleSizeData)                MaxExtraCapsuleDimensions                                   OFFSET(getStruct<T>, {0x110, 80, 0, 0})
	SMember(FScalableFloat)                            MaxPickupSpread                                             OFFSET(getStruct<T>, {0x160, 40, 0, 0})
	SMember(FScalableFloat)                            PickupTossSpeed                                             OFFSET(getStruct<T>, {0x188, 40, 0, 0})
	SMember(FGameplayTagContainer)                     ItemsPickupTags                                             OFFSET(getStruct<T>, {0x1B0, 32, 0, 0})


	/// Functions
	// Function /Script/ScoutDroneRuntime.FortScoutDronePickupManager.ServerUpdateItemAttachment
	// void ServerUpdateItemAttachment(FVector CalculatedItemOffset);                                                           // [0xbc16b48] Final|Net|NetReliableNative|Event|Private|NetServer|HasDefaults 
	// Function /Script/ScoutDroneRuntime.FortScoutDronePickupManager.ServerDropAttachedActors
	// void ServerDropAttachedActors();                                                                                         // [0x3449a4c] Net|NetReliableNative|Event|Public|NetServer 
	// Function /Script/ScoutDroneRuntime.FortScoutDronePickupManager.OnRep_AttachedTargets
	// void OnRep_AttachedTargets();                                                                                            // [0xbc1661c] Final|Native|Private 
	// Function /Script/ScoutDroneRuntime.FortScoutDronePickupManager.OnPawnDBNOStateChanged
	// void OnPawnDBNOStateChanged(class AFortPawn* Pawn, bool bIsDBNO);                                                        // [0xbc16384] Final|Native|Private 
	// Function /Script/ScoutDroneRuntime.FortScoutDronePickupManager.OnAttachedPawnDied
	// void OnAttachedPawnDied(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, FVector HitLocation, class UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum); // [0xbc15ec0] Final|Native|Private|HasDefaults 
	// Function /Script/ScoutDroneRuntime.FortScoutDronePickupManager.HasAPawnAtached
	// bool HasAPawnAtached();                                                                                                  // [0xbc15dc4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ScoutDroneRuntime.FortScoutDronePickupManager.HasAnyAttachedActors
	// bool HasAnyAttachedActors();                                                                                             // [0xbc15de0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ScoutDroneRuntime.FortScoutDronePickupManager.BP_OnActorsDetached
	// void BP_OnActorsDetached();                                                                                              // [0x246f7d8] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/ScoutDroneRuntime.FortScoutDronePickupManager.BP_OnActorsAttached
	// void BP_OnActorsAttached();                                                                                              // [0x246f7d8] BlueprintCosmetic|Event|Protected|BlueprintEvent 
};

/// Struct /Script/ScoutDroneRuntime.FortScoutDroneDiveTransitionData
/// Size: 0x0030 (0x000000 - 0x000030)
class FFortScoutDroneDiveTransitionData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(class UCurveFloat*)                        Curve                                                       OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FScalableFloat)                            TransitionDuration                                          OFFSET(getStruct<T>, {0x8, 40, 0, 0})
};

/// Struct /Script/ScoutDroneRuntime.OnFortScoutDroneDeployed
/// Size: 0x0008 (0x000000 - 0x000008)
class FOnFortScoutDroneDeployed : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(TWeakObjectPtr<AFortScoutDrone*>)          DeployedDrone                                               OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/ScoutDroneRuntime.OnFortScoutDroneDismissed
/// Size: 0x0004 (0x000000 - 0x000004)
class FOnFortScoutDroneDismissed : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	SMember(FGameplayTag)                              DismissalReason                                             OFFSET(getStruct<T>, {0x0, 4, 0, 0})
};

/// Struct /Script/ScoutDroneRuntime.OnFortScoutDroneMarkedEnemies
/// Size: 0x0018 (0x000000 - 0x000018)
class FOnFortScoutDroneMarkedEnemies : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FGameplayTag)                              Source                                                      OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(TArray<class AActor*>)                     MarkedActors                                                OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/ScoutDroneRuntime.OnFortScoutDroneFinishedLongInteract
/// Size: 0x0001 (0x000000 - 0x000001)
class FOnFortScoutDroneFinishedLongInteract : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/ScoutDroneRuntime.ScoutDroneDeferredDestructionData
/// Size: 0x0010 (0x000000 - 0x000010)
class FScoutDroneDeferredDestructionData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(float)                                     DeposessDelay                                               OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     DestroyDelay                                                OFFSET(get<float>, {0x4, 4, 0, 0})
	SMember(FGameplayTag)                              DismissalReason                                             OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	DMember(float)                                     ServerDismissStartTime                                      OFFSET(get<float>, {0xC, 4, 0, 0})
};

/// Struct /Script/ScoutDroneRuntime.ScoutDronePickupTargets
/// Size: 0x0018 (0x000000 - 0x000018)
class FScoutDronePickupTargets : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(TArray<class AActor*>)                     Items                                                       OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(class AFortPawn*)                          DBNOPawn                                                    OFFSET(get<T>, {0x10, 8, 0, 0})
};

/// Struct /Script/ScoutDroneRuntime.ScoutDroneStatusData
/// Size: 0x0008 (0x000000 - 0x000008)
class FScoutDroneStatusData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(EFortScoutDroneTargetStatus)               Status                                                      OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(float)                                     ServerTimeStatusChanged                                     OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Struct /Script/ScoutDroneRuntime.ScoutDroneInputTriggerableEvent
/// Size: 0x0018 (0x000000 - 0x000018)
class FScoutDroneInputTriggerableEvent : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FName)                                     InputActionName                                             OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(class UInputAction*)                       InputAction                                                 OFFSET(get<T>, {0x8, 8, 0, 0})
	SMember(FGameplayTag)                              GameplayEventToTrigger                                      OFFSET(getStruct<T>, {0x10, 4, 0, 0})
};

/// Struct /Script/ScoutDroneRuntime.ScoutDroneCapsuleSizeData
/// Size: 0x0050 (0x000000 - 0x000050)
class FScoutDroneCapsuleSizeData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FScalableFloat)                            CapsuleHalfHeight                                           OFFSET(getStruct<T>, {0x0, 40, 0, 0})
	SMember(FScalableFloat)                            CapsuleRadius                                               OFFSET(getStruct<T>, {0x28, 40, 0, 0})
};

/// Enum /Script/ScoutDroneRuntime.EFortScoutDroneTargetStatus
/// Size: 0x05
enum class EFortScoutDroneTargetStatus : uint8_t
{
	EFortScoutDroneTargetStatus__None                                                = 0,
	EFortScoutDroneTargetStatus__TooFar                                              = 1,
	EFortScoutDroneTargetStatus__Pending                                             = 2,
	EFortScoutDroneTargetStatus__Confirmed                                           = 3,
	EFortScoutDroneTargetStatus__EFortScoutDroneTargetStatus_MAX                     = 4
};

