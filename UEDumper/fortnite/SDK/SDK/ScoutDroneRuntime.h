
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
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

/// Struct /Script/ScoutDroneRuntime.FortScoutDroneDiveTransitionData
/// Size: 0x0030 (0x000000 - 0x000030)
struct FFortScoutDroneDiveTransitionData
{ 
	class UCurveFloat*                                 Curve;                                                      // 0x0000   (0x0008)  
	FScalableFloat                                     TransitionDuration;                                         // 0x0008   (0x0028)  
};

/// Class /Script/ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_Dive
/// Size: 0x01A0 (0x000B60 - 0x000D00)
class UFortGameplayAbility_ScoutDrone_Dive : public UFortGameplayAbility
{ 
public:
	unsigned char                                      UnknownData00_3[0x10];                                      // 0x0B60   (0x0010)  MISSED
	FFortScoutDroneDiveTransitionData                  EaseInData;                                                 // 0x0B70   (0x0030)  
	FFortScoutDroneDiveTransitionData                  EaseOutData;                                                // 0x0BA0   (0x0030)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0BD0   (0x0008)  MISSED
	FScalableFloat                                     DiveUpdateInterval;                                         // 0x0BD8   (0x0028)  
	FScalableFloat                                     DiveSpeedIncrease;                                          // 0x0C00   (0x0028)  
	FScalableFloat                                     MinSpeedToDive;                                             // 0x0C28   (0x0028)  
	FScalableFloat                                     MinDistToGround;                                            // 0x0C50   (0x0028)  
	FScalableFloat                                     TargetPitchToDive;                                          // 0x0C78   (0x0028)  
	FScalableFloat                                     DivingGravityScale;                                         // 0x0CA0   (0x0028)  
	FScalableFloat                                     MaxSpeedDivingGravityScale;                                 // 0x0CC8   (0x0028)  
	unsigned char                                      UnknownData02_6[0x10];                                      // 0x0CF0   (0x0010)  MISSED


	/// Functions
	// Function /Script/ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_Dive.BP_OnDroneStoppedDiving
	// void BP_OnDroneStoppedDiving();                                                                                       // [0x18a39e4] BlueprintAuthorityOnly|Event|Protected|BlueprintEvent 
	// Function /Script/ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_Dive.BP_OnDroneStartedDiving
	// void BP_OnDroneStartedDiving();                                                                                       // [0x18a39e4] BlueprintAuthorityOnly|Event|Protected|BlueprintEvent 
};

/// Class /Script/ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_TargetingBase
/// Size: 0x0048 (0x000B60 - 0x000BA8)
class UFortGameplayAbility_ScoutDrone_TargetingBase : public UFortGameplayAbility
{ 
public:
	class UTargetingPreset*                            TargetingPreset;                                            // 0x0B60   (0x0008)  
	FTargetingRequestHandle                            AsyncTargetingHandle;                                       // 0x0B68   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0B6C   (0x0004)  MISSED
	FTimerHandle                                       TargetingTimerHandle;                                       // 0x0B70   (0x0008)  
	FScalableFloat                                     TargetingInterval;                                          // 0x0B78   (0x0028)  
	bool                                               bUseControllerAsInstigator;                                 // 0x0BA0   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0BA1   (0x0007)  MISSED


	/// Functions
	// Function /Script/ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_TargetingBase.StopTargeting
	// void StopTargeting();                                                                                                 // [0xab68948] Final|Native|Protected|BlueprintCallable 
	// Function /Script/ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_TargetingBase.StartTargeting
	// void StartTargeting();                                                                                                // [0xab68920] Final|Native|Protected|BlueprintCallable 
	// Function /Script/ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_TargetingBase.BP_OnTargetsFound
	// void BP_OnTargetsFound(FTargetingRequestHandle& TargetingHandle);                                                     // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
};

/// Class /Script/ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_SpeedBoost
/// Size: 0x00F0 (0x000BA8 - 0x000C98)
class UFortGameplayAbility_ScoutDrone_SpeedBoost : public UFortGameplayAbility_ScoutDrone_TargetingBase
{ 
public:
	FGameplayTag                                       DoorBashCueTag;                                             // 0x0BA8   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0BAC   (0x0004)  MISSED
	class UClass*                                      DamageGameplayEffectClass;                                  // 0x0BB0   (0x0008)  
	FGameplayTag                                       DoorBashPawnLaunchGameplayCueTag;                           // 0x0BB8   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0BBC   (0x0004)  MISSED
	FScalableFloat                                     DoorBashEnabledHotfix;                                      // 0x0BC0   (0x0028)  
	FScalableFloat                                     DoorBashSphereRadiusForPawnLaunch;                          // 0x0BE8   (0x0028)  
	FScalableFloat                                     DoorBashScalarForPawnLaunch;                                // 0x0C10   (0x0028)  
	SDK_UNDEFINED(16,15536) /* TArray<TEnumAsByte<EObjectTypeQuery>> */ __um(DoorBashCollisionTypesForPawn);       // 0x0C38   (0x0010)  
	FScalableFloat                                     DoorBashEnabled;                                            // 0x0C48   (0x0028)  
	FScalableFloat                                     DamageOnBoostEnabled;                                       // 0x0C70   (0x0028)  


	/// Functions
	// Function /Script/ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_SpeedBoost.OnDoorBashed
	// void OnDoorBashed(FHitResult& HitResult, class UFortBuildingWallDoorComponent* BashedDoor);                           // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_SpeedBoost.OnBoostedIntoActor
	// void OnBoostedIntoActor(FHitResult& HitResult);                                                                       // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
};

/// Class /Script/ScoutDroneRuntime.FortScoutDroneAnalyticsComponent
/// Size: 0x00B0 (0x0000A8 - 0x000158)
class UFortScoutDroneAnalyticsComponent : public UFortControllerComponent
{ 
public:
	float                                              SessionStartTime;                                           // 0x00A8   (0x0004)  
	float                                              SessionLength;                                              // 0x00AC   (0x0004)  
	FScalableFloat                                     MinSessionLength;                                           // 0x00B0   (0x0028)  
	float                                              DistanceTraveled;                                           // 0x00D8   (0x0004)  
	int32_t                                            NumberOfContainersInteractedWith;                           // 0x00DC   (0x0004)  
	FGameplayTag                                       DismissalReason;                                            // 0x00E0   (0x0004)  
	int32_t                                            NumberOfItemsPickedUp;                                      // 0x00E4   (0x0004)  
	SDK_UNDEFINED(16,15537) /* TArray<FString> */      __um(DBNOCarriedPlayers);                                   // 0x00E8   (0x0010)  
	int32_t                                            NumberOfEnemiesPassivelyMarked;                             // 0x00F8   (0x0004)  
	int32_t                                            NumberOfEnemiesMarkedOnCaw;                                 // 0x00FC   (0x0004)  
	int32_t                                            NumberOfCaws;                                               // 0x0100   (0x0004)  
	unsigned char                                      UnknownData00_5[0xC];                                       // 0x0104   (0x000C)  MISSED
	FScalableFloat                                     DistanceTraveledUpdateInterval;                             // 0x0110   (0x0028)  
	FTimerHandle                                       DistanceTraveledUpdateTimerHandle;                          // 0x0138   (0x0008)  
	FVector                                            LastRecorderDroneLocation;                                  // 0x0140   (0x0018)  
};

/// Class /Script/ScoutDroneRuntime.FortScoutDroneAnimInstance
/// Size: 0x01F0 (0x000460 - 0x000650)
class UFortScoutDroneAnimInstance : public UFortBaseAnimInstance
{ 
public:
	class UFortScoutDroneMovementComponent*            FortScoutDroneMovementComponent;                            // 0x0458   (0x0008)  
	double                                             YawDeltaLastTick;                                           // 0x0460   (0x0008)  
	FRotator                                           ActorCurrentRotationTick;                                   // 0x0468   (0x0018)  
	double                                             YawDeltaCurrentTick;                                        // 0x0480   (0x0008)  
	FRotator                                           ActorRotationLastTick;                                      // 0x0488   (0x0018)  
	bool                                               IsFlying;                                                   // 0x04A0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x04A1   (0x0007)  MISSED
	double                                             CurrentVelocity;                                            // 0x04A8   (0x0008)  
	double                                             LastVelocity;                                               // 0x04B0   (0x0008)  
	double                                             Velocity;                                                   // 0x04B8   (0x0008)  
	double                                             ForwardInputAlpha;                                          // 0x04C0   (0x0008)  
	double                                             StrafeInputAlpha;                                           // 0x04C8   (0x0008)  
	FRotator                                           DroneRotation;                                              // 0x04D0   (0x0018)  
	double                                             Acceleration;                                               // 0x04E8   (0x0008)  
	class AFortScoutDrone*                             ScoutDrone;                                                 // 0x04F0   (0x0008)  
	bool                                               IsBoosting;                                                 // 0x04F8   (0x0001)  
	bool                                               IsDiving;                                                   // 0x04F9   (0x0001)  
	unsigned char                                      UnknownData01_5[0x6];                                       // 0x04FA   (0x0006)  MISSED
	double                                             AimPitch;                                                   // 0x0500   (0x0008)  
	double                                             NegativeAimPitch;                                           // 0x0508   (0x0008)  
	FRotator                                           FinalFanRotationL;                                          // 0x0510   (0x0018)  
	FRotator                                           FinalFanRotationR;                                          // 0x0528   (0x0018)  
	double                                             FanIdleSpeed;                                               // 0x0540   (0x0008)  
	double                                             FanAuthoredSpeed;                                           // 0x0548   (0x0008)  
	double                                             FanIdleAuthoredSpeed;                                       // 0x0550   (0x0008)  
	double                                             FanBwdSpeed;                                                // 0x0558   (0x0008)  
	double                                             FanFwdSpeed;                                                // 0x0560   (0x0008)  
	double                                             TurnNoiseAlpha;                                             // 0x0568   (0x0008)  
	double                                             LeanAlpha;                                                  // 0x0570   (0x0008)  
	double                                             TurnAlpha;                                                  // 0x0578   (0x0008)  
	bool                                               IsColliding;                                                // 0x0580   (0x0001)  
	bool                                               IsFlyingBwd;                                                // 0x0581   (0x0001)  
	bool                                               ShouldExitFromFlying;                                       // 0x0582   (0x0001)  
	bool                                               ShouldExitFromDiving;                                       // 0x0583   (0x0001)  
	bool                                               EarlyIntoLoop;                                              // 0x0584   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0585   (0x0003)  MISSED
	double                                             AccelerationZ;                                              // 0x0588   (0x0008)  
	bool                                               IsLeftStrafe;                                               // 0x0590   (0x0001)  
	bool                                               WasStrafing;                                                // 0x0591   (0x0001)  
	unsigned char                                      UnknownData03_5[0x6];                                       // 0x0592   (0x0006)  MISSED
	double                                             GroundDistance;                                             // 0x0598   (0x0008)  
	bool                                               HasDivingConditionBeenMet;                                  // 0x05A0   (0x0001)  
	bool                                               IsItemAttached;                                             // 0x05A1   (0x0001)  
	bool                                               IsPlayerAttached;                                           // 0x05A2   (0x0001)  
	unsigned char                                      UnknownData04_5[0x5];                                       // 0x05A3   (0x0005)  MISSED
	double                                             FlapTime;                                                   // 0x05A8   (0x0008)  
	int32_t                                            FlapRandomPick;                                             // 0x05B0   (0x0004)  
	bool                                               IsFlapSmall;                                                // 0x05B4   (0x0001)  
	unsigned char                                      UnknownData05_5[0x3];                                       // 0x05B5   (0x0003)  MISSED
	int32_t                                            FlapRandomMaxRange;                                         // 0x05B8   (0x0004)  
	unsigned char                                      UnknownData06_5[0x4];                                       // 0x05BC   (0x0004)  MISSED
	double                                             FlapSmallTimeThreshold;                                     // 0x05C0   (0x0008)  
	double                                             FlapBigTimeThreshold;                                       // 0x05C8   (0x0008)  
	double                                             FlapSmallResetDelayDuration;                                // 0x05D0   (0x0008)  
	double                                             FlapBigResetDelayDuration;                                  // 0x05D8   (0x0008)  
	bool                                               IsFlapBig;                                                  // 0x05E0   (0x0001)  
	unsigned char                                      UnknownData07_5[0x7];                                       // 0x05E1   (0x0007)  MISSED
	double                                             VerticalInputAlpha;                                         // 0x05E8   (0x0008)  
	bool                                               WasVerticalUp;                                              // 0x05F0   (0x0001)  
	bool                                               IsFlyingVerticalUp;                                         // 0x05F1   (0x0001)  
	bool                                               ShouldExitFromBoostOutro;                                   // 0x05F2   (0x0001)  
	bool                                               HasSpawned;                                                 // 0x05F3   (0x0001)  
	bool                                               ShouldExitFromSpawning;                                     // 0x05F4   (0x0001)  
	bool                                               ShouldAllowTransition;                                      // 0x05F5   (0x0001)  
	bool                                               StateRuleFromBoostOutroToFlying;                            // 0x05F6   (0x0001)  
	bool                                               WasBoosting;                                                // 0x05F7   (0x0001)  
	FScalableFloat                                     SpeedBoostForceBoostVelocity;                               // 0x05F8   (0x0028)  
	FScalableFloat                                     SpeedBoostMaxSpeedIncrease;                                 // 0x0620   (0x0028)  
	bool                                               IsFlappingTime;                                             // 0x0648   (0x0001)  
	unsigned char                                      UnknownData08_6[0x7];                                       // 0x0649   (0x0007)  MISSED
};

/// Class /Script/ScoutDroneRuntime.FortScoutDroneGlove
/// Size: 0x0040 (0x001550 - 0x001590)
class AFortScoutDroneGlove : public AFortWeapon
{ 
public:
	FScalableFloat                                     HoldToDeployTime;                                           // 0x1550   (0x0028)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x1578   (0x0018)  MISSED
};

/// Class /Script/ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_Activate
/// Size: 0x0020 (0x000B60 - 0x000B80)
class UFortGameplayAbility_ScoutDrone_Activate : public UFortGameplayAbility
{ 
public:
	class UClass*                                      RCActorClass;                                               // 0x0B60   (0x0008)  
	FVector                                            SpawnOffset;                                                // 0x0B68   (0x0018)  
};

/// Struct /Script/ScoutDroneRuntime.ScoutDroneDeferredDestructionData
/// Size: 0x0010 (0x000000 - 0x000010)
struct FScoutDroneDeferredDestructionData
{ 
	float                                              DeposessDelay;                                              // 0x0000   (0x0004)  
	float                                              DestroyDelay;                                               // 0x0004   (0x0004)  
	FGameplayTag                                       DismissalReason;                                            // 0x0008   (0x0004)  
	float                                              ServerDismissStartTime;                                     // 0x000C   (0x0004)  
};

/// Class /Script/ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_Dismiss
/// Size: 0x0010 (0x000B60 - 0x000B70)
class UFortGameplayAbility_ScoutDrone_Dismiss : public UFortGameplayAbility
{ 
public:
	FScoutDroneDeferredDestructionData                 DismissDelayData;                                           // 0x0B60   (0x0010)  


	/// Functions
	// Function /Script/ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_Dismiss.GetControlledDrone
	// class AFortScoutDrone* GetControlledDrone();                                                                          // [0xab678a8] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_MarkPotentialTargets
/// Size: 0x0130 (0x000BA8 - 0x000CD8)
class UFortGameplayAbility_ScoutDrone_MarkPotentialTargets : public UFortGameplayAbility_ScoutDrone_TargetingBase
{ 
public:
	FIndicatedActorData                                IndicatedActorData;                                         // 0x0BA8   (0x00F8)  
	unsigned char                                      UnknownData00_5[0x10];                                      // 0x0CA0   (0x0010)  MISSED
	FScalableFloat                                     MaxNumberOfPotentialTargets;                                // 0x0CB0   (0x0028)  


	/// Functions
	// Function /Script/ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_MarkPotentialTargets.OnStoppedHighlightingTarget
	// void OnStoppedHighlightingTarget(class AActor* Target);                                                               // [0x18a39e4] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_MarkPotentialTargets.OnStartHighlightingTarget
	// void OnStartHighlightingTarget(class AActor* Target);                                                                 // [0x18a39e4] BlueprintCosmetic|Event|Protected|BlueprintEvent 
};

/// Struct /Script/ScoutDroneRuntime.ScoutDroneStatusData
/// Size: 0x0008 (0x000000 - 0x000008)
struct FScoutDroneStatusData
{ 
	EFortScoutDroneTargetStatus                        Status;                                                     // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              ServerTimeStatusChanged;                                    // 0x0004   (0x0004)  
};

/// Class /Script/ScoutDroneRuntime.ScoutDronePassiveMarkPayload
/// Size: 0x0008 (0x000028 - 0x000030)
class UScoutDronePassiveMarkPayload : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	FScoutDroneStatusData                              TargetStatus;                                               // 0x0028   (0x0008)  
};

/// Class /Script/ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_PassiveMark
/// Size: 0x01F8 (0x000BA8 - 0x000DA0)
class UFortGameplayAbility_ScoutDrone_PassiveMark : public UFortGameplayAbility_ScoutDrone_TargetingBase
{ 
public:
	FScoutDroneStatusData                              CurrentTargetStatus;                                        // 0x0BA8   (0x0008)  
	FStenciledActorData                                StenciledActorData;                                         // 0x0BB0   (0x0080)  
	FIndicatedActorData                                IndicatedActorData;                                         // 0x0C30   (0x00F8)  
	FScalableFloat                                     ActorTargetingRange;                                        // 0x0D28   (0x0028)  
	FScalableFloat                                     TimeToConfirmTarget;                                        // 0x0D50   (0x0028)  
	class AActor*                                      CurrentTarget;                                              // 0x0D78   (0x0008)  
	FTimerHandle                                       TargetConfirmationTimerHandle;                              // 0x0D80   (0x0008)  
	class UScoutDronePassiveMarkPayload*               PayloadCache;                                               // 0x0D88   (0x0008)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0D90   (0x0010)  MISSED


	/// Functions
	// Function /Script/ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_PassiveMark.OnRep_CurrentTargetStatus
	// void OnRep_CurrentTargetStatus();                                                                                     // [0xab683e4] Final|Native|Protected 
	// Function /Script/ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_PassiveMark.OnActorIndicatorExpired
	// void OnActorIndicatorExpired(class AActor* IndicatedActor);                                                           // [0xab67aac] Final|Native|Private 
	// Function /Script/ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_PassiveMark.BP_OnTargetStatusChanged
	// void BP_OnTargetStatusChanged(class AActor* ActiveTarget);                                                            // [0x18a39e4] BlueprintAuthorityOnly|Event|Protected|BlueprintEvent 
};

/// Struct /Script/ScoutDroneRuntime.ScoutDronePickupTargets
/// Size: 0x0018 (0x000000 - 0x000018)
struct FScoutDronePickupTargets
{ 
	TArray<class AActor*>                              Items;                                                      // 0x0000   (0x0010)  
	class AFortPawn*                                   DBNOPawn;                                                   // 0x0010   (0x0008)  
};

/// Class /Script/ScoutDroneRuntime.ScoutDronePickUpTargetsPayload
/// Size: 0x0018 (0x000028 - 0x000040)
class UScoutDronePickUpTargetsPayload : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	FScoutDronePickupTargets                           PickUpTargets;                                              // 0x0028   (0x0018)  
};

/// Class /Script/ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_PickUp
/// Size: 0x0078 (0x000BA8 - 0x000C20)
class UFortGameplayAbility_ScoutDrone_PickUp : public UFortGameplayAbility_ScoutDrone_TargetingBase
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0BA8   (0x0008)  MISSED
	FScalableFloat                                     MaxNumberOfItemsToGrab;                                     // 0x0BB0   (0x0028)  
	class UScoutDronePickUpTargetsPayload*             PayloadCache;                                               // 0x0BD8   (0x0008)  
	FScalableFloat                                     PickupToggleCooldownDuration;                               // 0x0BE0   (0x0028)  
	unsigned char                                      UnknownData01_5[0x10];                                      // 0x0C08   (0x0010)  MISSED
	class UClass*                                      AttachedPawnGEClass;                                        // 0x0C18   (0x0008)  


	/// Functions
	// Function /Script/ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_PickUp.ServerConfirmTargets
	// void ServerConfirmTargets();                                                                                          // [0x82b9fcc] Final|Net|NetReliableNative|Event|Private|NetServer 
};

/// Class /Script/ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_Tether
/// Size: 0x0078 (0x000B60 - 0x000BD8)
class UFortGameplayAbility_ScoutDrone_Tether : public UFortGameplayAbility
{ 
public:
	FScalableFloat                                     WarningRange;                                               // 0x0B60   (0x0028)  
	FScalableFloat                                     SignalLossRange;                                            // 0x0B88   (0x0028)  
	bool                                               bIsInWarningRange;                                          // 0x0BB0   (0x0001)  
	bool                                               bIsInSignalLossRange;                                       // 0x0BB1   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x0BB2   (0x0006)  MISSED
	FTimerHandle                                       TetheringTimerHandle;                                       // 0x0BB8   (0x0008)  
	FTimerHandle                                       TetheringReportTimerHandle;                                 // 0x0BC0   (0x0008)  
	FScoutDroneDeferredDestructionData                 DismissDelayData;                                           // 0x0BC8   (0x0010)  


	/// Functions
	// Function /Script/ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_Tether.StopCheckingDistances
	// void StopCheckingDistances();                                                                                         // [0xab68934] Final|Native|Protected|BlueprintCallable 
	// Function /Script/ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_Tether.StartCheckingDistances
	// void StartCheckingDistances();                                                                                        // [0xab6890c] Final|Native|Protected|BlueprintCallable 
	// Function /Script/ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_Tether.OnRep_bIsInWarningRange
	// void OnRep_bIsInWarningRange();                                                                                       // [0xab68550] Final|Native|Private 
	// Function /Script/ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_Tether.OnRep_bIsInSignalLossRange
	// void OnRep_bIsInSignalLossRange();                                                                                    // [0xab684f8] Final|Native|Private 
};

/// Class /Script/ScoutDroneRuntime.FortAthenaMutator_ScoutDrone
/// Size: 0x0048 (0x000338 - 0x000380)
class AFortAthenaMutator_ScoutDrone : public AFortAthenaMutator
{ 
public:
	FGameplayTagContainer                              DroneAllowedInteractionTags;                                // 0x0338   (0x0020)  
	FGameplayTagContainer                              DroneBlockedInteractionTags;                                // 0x0358   (0x0020)  
	bool                                               bIsControllingDrone;                                        // 0x0378   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0379   (0x0007)  MISSED


	/// Functions
	// Function /Script/ScoutDroneRuntime.FortAthenaMutator_ScoutDrone.OnViewTargetChanged
	// void OnViewTargetChanged(class AFortPlayerController* PlayerController, class AActor* OldViewTarget, class AActor* NewViewTarget); // [0xab68564] Final|Native|Private 
};

/// Class /Script/ScoutDroneRuntime.FortChargingSet_ScoutDroneEnergy
/// Size: 0x00C0 (0x000048 - 0x000108)
class UFortChargingSet_ScoutDroneEnergy : public UFortChargingSet_Base
{ 
public:
	FFortGameplayAttributeData                         Energy;                                                     // 0x0048   (0x0028)  
	FFortGameplayAttributeData                         MaxEnergy;                                                  // 0x0070   (0x0028)  
	FFortGameplayAttributeData                         EnergyChargeRate;                                           // 0x0098   (0x0028)  
	FFortGameplayAttributeData                         ServerTimeEnergyIncrements;                                 // 0x00C0   (0x0028)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x00E8   (0x0020)  MISSED


	/// Functions
	// Function /Script/ScoutDroneRuntime.FortChargingSet_ScoutDroneEnergy.OnRep_Energy
	// void OnRep_Energy(FFortGameplayAttributeData& OldValue);                                                              // [0xab683f8] Final|Native|Protected|HasOutParms 
};

/// Class /Script/ScoutDroneRuntime.FortScoutDrone
/// Size: 0x01B0 (0x000660 - 0x000810)
class AFortScoutDrone : public ACharacter
{ 
public:
	unsigned char                                      UnknownData00_3[0x58];                                      // 0x0660   (0x0058)  MISSED
	bool                                               bIsDiving;                                                  // 0x06B8   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x06B9   (0x0007)  MISSED
	FScalableFloat                                     DivingEnabled;                                              // 0x06C0   (0x0028)  
	bool                                               bIsSpeedBoosting;                                           // 0x06E8   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x06E9   (0x0007)  MISSED
	class UNiagaraComponent*                           NSScoutDroneIdle_Native;                                    // 0x06F0   (0x0008)  
	class UFortScoutDronePickupManager*                PickupManagerComponent_Native;                              // 0x06F8   (0x0008)  
	class UClass*                                      TeamMateIndicatorMarkerWidgetClass;                         // 0x0700   (0x0008)  
	class UAudioComponent*                             DroneMotorLoopComponent;                                    // 0x0708   (0x0008)  
	class UAudioComponent*                             DroneThrustSoundComponent;                                  // 0x0710   (0x0008)  
	FScalableFloat                                     BaseMaxFlySpeed;                                            // 0x0718   (0x0028)  
	FGameplayTagContainer                              DefaultTags;                                                // 0x0740   (0x0020)  
	unsigned char                                      UnknownData03_5[0x8];                                       // 0x0760   (0x0008)  MISSED
	class UFortAbilitySystemComponent*                 AbilitySystemComponent;                                     // 0x0768   (0x0008)  
	class UFortActorComponent_Affiliation*             AffiliationComponent;                                       // 0x0770   (0x0008)  
	class UFortAbilitySet*                             StartupAbilitySet;                                          // 0x0778   (0x0008)  
	class AFortPawn*                                   ControllingPlayerPawn;                                      // 0x0780   (0x0008)  
	class UFortHealthSet*                              HealthSet;                                                  // 0x0788   (0x0008)  
	class UFortChargingSet_ScoutDroneEnergy*           EnergySet;                                                  // 0x0790   (0x0008)  
	float                                              LifespanAfterDeath;                                         // 0x0798   (0x0004)  
	FFortAttributeInitializationKey                    AttributeInitKey;                                           // 0x079C   (0x0008)  
	SDK_UNDEFINED(1,15538) /* TEnumAsByte<EPhysicalSurface> */ __um(PrimarySurfaceType);                           // 0x07A4   (0x0001)  
	SDK_UNDEFINED(1,15539) /* TEnumAsByte<EFortBaseWeaponDamage> */ __um(WeaponResponseType);                      // 0x07A5   (0x0001)  
	bool                                               bPlayedDeath;                                               // 0x07A6   (0x0001)  
	unsigned char                                      UnknownData04_5[0x1];                                       // 0x07A7   (0x0001)  MISSED
	FScoutDroneDeferredDestructionData                 OutOfHealthDismissDelayData;                                // 0x07A8   (0x0010)  
	FScoutDroneDeferredDestructionData                 OutOfEnergyDismissDelayData;                                // 0x07B8   (0x0010)  
	SDK_UNDEFINED(16,15540) /* FMulticastInlineDelegate */ __um(OnTeamIndexChanged);                               // 0x07C8   (0x0010)  
	class UClass*                                      PawnOverrideComponentClass;                                 // 0x07D8   (0x0008)  
	class USoundBase*                                  DroneMotorLoopSound;                                        // 0x07E0   (0x0008)  
	class USoundBase*                                  DroneThrusterSound;                                         // 0x07E8   (0x0008)  
	class UAudioParameterComponent*                    AudioParameter;                                             // 0x07F0   (0x0008)  
	FName                                              LocallyViewedPawnAudioParamName;                            // 0x07F8   (0x0004)  
	FName                                              IsEnemyAudioParamName;                                      // 0x07FC   (0x0004)  
	FName                                              ThrustAmountAudioParamName;                                 // 0x0800   (0x0004)  
	float                                              ThrustSoundThreshold;                                       // 0x0804   (0x0004)  
	unsigned char                                      UnknownData05_6[0x8];                                       // 0x0808   (0x0008)  MISSED


	/// Functions
	// Function /Script/ScoutDroneRuntime.FortScoutDrone.SetupGameplayAudioParameters
	// void SetupGameplayAudioParameters();                                                                                  // [0xab688f8] Final|BlueprintCosmetic|Native|Protected|BlueprintCallable 
	// Function /Script/ScoutDroneRuntime.FortScoutDrone.SetTeamMatesIndicator
	// void SetTeamMatesIndicator(bool bState);                                                                              // [0xab68878] Final|Native|Protected|BlueprintCallable 
	// Function /Script/ScoutDroneRuntime.FortScoutDrone.SetAffiliationAudio
	// void SetAffiliationAudio();                                                                                           // [0xab68864] Final|Native|Protected|BlueprintCallable 
	// Function /Script/ScoutDroneRuntime.FortScoutDrone.OnRep_ControllingPlayerPawn
	// void OnRep_ControllingPlayerPawn();                                                                                   // [0xab683bc] Final|Native|Private 
	// Function /Script/ScoutDroneRuntime.FortScoutDrone.OnDeathPlayEffects
	// void OnDeathPlayEffects(float Damage, FGameplayTagContainer& DamageTags, FVector Momentum, FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, FGameplayEffectContextHandle EffectContext); // [0x18a39e4] BlueprintCosmetic|Event|Protected|HasOutParms|HasDefaults|BlueprintEvent 
	// Function /Script/ScoutDroneRuntime.FortScoutDrone.OnDamagePlayEffects
	// void OnDamagePlayEffects(float Damage, FGameplayTagContainer& DamageTags, FVector Momentum, FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, FGameplayEffectContextHandle EffectContext); // [0x18a39e4] BlueprintCosmetic|Event|Protected|HasOutParms|HasDefaults|BlueprintEvent 
	// Function /Script/ScoutDroneRuntime.FortScoutDrone.GetHealthPercentage
	// float GetHealthPercentage();                                                                                          // [0xab67a50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ScoutDroneRuntime.FortScoutDrone.GetForwardAndRightDotProducts_Native
	// void GetForwardAndRightDotProducts_Native(float& OutForwardDot, float& OutRightDot);                                  // [0xab67978] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/ScoutDroneRuntime.FortScoutDrone.GetDeltaRotator
	// FRotator GetDeltaRotator();                                                                                           // [0xab67928] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ScoutDroneRuntime.FortScoutDrone.GetControllingPlayerPawn
	// class AFortPawn* GetControllingPlayerPawn();                                                                          // [0xab67910] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ScoutDroneRuntime.FortScoutDrone.GameplayCue_Damage
	// void GameplayCue_Damage(TEnumAsByte<EGameplayCueEvent> EventType, FGameplayCueParameters Parameters);                 // [0x8784e78] Native|Protected     
};

/// Class /Script/ScoutDroneRuntime.FortScoutDroneCameraMode
/// Size: 0x0008 (0x0001F0 - 0x0001F8)
class UFortScoutDroneCameraMode : public UFort3PCameraMode
{ 
public:
	bool                                               bShouldInterpolateLocation;                                 // 0x01F0   (0x0001)  
	bool                                               bShouldInterpolateRotation;                                 // 0x01F1   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x01F2   (0x0006)  MISSED
};

/// Class /Script/ScoutDroneRuntime.ScoutDroneDeferredDestructionPayload
/// Size: 0x0010 (0x000028 - 0x000038)
class UScoutDroneDeferredDestructionPayload : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	FScoutDroneDeferredDestructionData                 DeferredDestructionData;                                    // 0x0028   (0x0010)  
};

/// Struct /Script/ScoutDroneRuntime.ScoutDroneInputTriggerableEvent
/// Size: 0x0018 (0x000000 - 0x000018)
struct FScoutDroneInputTriggerableEvent
{ 
	FName                                              InputActionName;                                            // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	class UInputAction*                                InputAction;                                                // 0x0008   (0x0008)  
	FGameplayTag                                       GameplayEventToTrigger;                                     // 0x0010   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Class /Script/ScoutDroneRuntime.FortScoutDroneControllingComponent
/// Size: 0x02B8 (0x0000A8 - 0x000360)
class UFortScoutDroneControllingComponent : public UFortControllerComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x30];                                      // 0x00A8   (0x0030)  MISSED
	class UInputComponent*                             DroneInputComponent;                                        // 0x00D8   (0x0008)  
	class AFortScoutDrone*                             ControlledDrone;                                            // 0x00E0   (0x0008)  
	class AActor*                                      OriginalDroneOwner;                                         // 0x00E8   (0x0008)  
	class UFortInputMappingContext*                    DroneInputContext;                                          // 0x00F0   (0x0008)  
	TArray<FScoutDroneInputTriggerableEvent>           InputTriggerableEvents;                                     // 0x00F8   (0x0010)  
	class UInputAction*                                MoveUpAction;                                               // 0x0108   (0x0008)  
	class UInputAction*                                MoveAction;                                                 // 0x0110   (0x0008)  
	class UInputAction*                                DismissAction;                                              // 0x0118   (0x0008)  
	class UClass*                                      DroneCooldownEffectClass;                                   // 0x0120   (0x0008)  
	unsigned char                                      UnknownData01_5[0x18];                                      // 0x0128   (0x0018)  MISSED
	FStenciledActorData                                OwningActorStencilData;                                     // 0x0140   (0x0080)  
	FScoutDroneDeferredDestructionData                 CurrentDestructionData;                                     // 0x01C0   (0x0010)  
	class UClass*                                      FirstPersonCameraModeOverride;                              // 0x01D0   (0x0008)  
	class UClass*                                      ThirdPersonCameraModeOverride;                              // 0x01D8   (0x0008)  
	FGameplayAbilitySpec                               FakeCameraAbilitySpec;                                      // 0x01E0   (0x00F8)  
	TArray<FName>                                      LegacyInputActionsToBlock;                                  // 0x02D8   (0x0010)  
	class UScoutDroneDeferredDestructionPayload*       DismissPayloadCache;                                        // 0x02E8   (0x0008)  
	FScalableFloat                                     DismissButtonPressCooldown;                                 // 0x02F0   (0x0028)  
	unsigned char                                      UnknownData02_5[0x8];                                       // 0x0318   (0x0008)  MISSED
	FViewTargetTransitionParams                        PlayerToDroneTransitionParams;                              // 0x0320   (0x0010)  
	unsigned char                                      UnknownData03_5[0x8];                                       // 0x0330   (0x0008)  MISSED
	FGameplayTagContainer                              InterruptingPlayerTags;                                     // 0x0338   (0x0020)  
	unsigned char                                      UnknownData04_6[0x8];                                       // 0x0358   (0x0008)  MISSED


	/// Functions
	// Function /Script/ScoutDroneRuntime.FortScoutDroneControllingComponent.ServerRequestDroneDismissal
	// void ServerRequestDroneDismissal();                                                                                   // [0x81db0dc] Final|Net|NetReliableNative|Event|Private|NetServer 
	// Function /Script/ScoutDroneRuntime.FortScoutDroneControllingComponent.OnWeaponEquipped
	// void OnWeaponEquipped(class AFortWeapon* NewWeapon, class AFortWeapon* PrevWeapon);                                   // [0xab6865c] Final|Native|Private 
	// Function /Script/ScoutDroneRuntime.FortScoutDroneControllingComponent.OnRep_CurrentDestructionData
	// void OnRep_CurrentDestructionData();                                                                                  // [0xab683d0] Final|Native|Private 
	// Function /Script/ScoutDroneRuntime.FortScoutDroneControllingComponent.OnRep_ControlledDrone
	// void OnRep_ControlledDrone();                                                                                         // [0xab68380] Final|Native|Private 
	// Function /Script/ScoutDroneRuntime.FortScoutDroneControllingComponent.OnPlayerInterruptionTagsChanged
	// void OnPlayerInterruptionTagsChanged(FGameplayTag tag, int32_t NewCount);                                             // [0xab680ec] Final|Native|Private 
	// Function /Script/ScoutDroneRuntime.FortScoutDroneControllingComponent.OnOwningPlayerStartedDBNO
	// void OnOwningPlayerStartedDBNO();                                                                                     // [0xab68010] Final|Native|Private 
	// Function /Script/ScoutDroneRuntime.FortScoutDroneControllingComponent.OnControlledDroneDestroyed
	// void OnControlledDroneDestroyed(class AActor* InControlledDrone);                                                     // [0xab67f90] Final|Native|Private 
	// Function /Script/ScoutDroneRuntime.FortScoutDroneControllingComponent.GetControlledDrone
	// class AFortScoutDrone* GetControlledDrone();                                                                          // [0x81fc3a4] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ScoutDroneRuntime.FortScoutDroneControllingComponent.BP_OnPlayerShortInteract
	// void BP_OnPlayerShortInteract();                                                                                      // [0x18a39e4] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/ScoutDroneRuntime.FortScoutDroneControllingComponent.BP_OnPlayerInteractLongUseChanged
	// void BP_OnPlayerInteractLongUseChanged(bool bInteracting, bool bLongUseInteractionCompleted);                         // [0x18a39e4] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/ScoutDroneRuntime.FortScoutDroneControllingComponent.BP_OnDroneDestroyed
	// void BP_OnDroneDestroyed(FGameplayTag& DismissalReason);                                                              // [0x18a39e4] BlueprintCosmetic|Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/ScoutDroneRuntime.FortScoutDroneControllingComponent.BP_OnDismissalStarted
	// void BP_OnDismissalStarted(bool bInstantDismissal, FGameplayTag DismissalReason);                                     // [0x18a39e4] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/ScoutDroneRuntime.FortScoutDroneControllingComponent.BP_OnDestructionStarted
	// void BP_OnDestructionStarted(bool bInstantDestruction, FGameplayTag DismissalReason);                                 // [0x18a39e4] BlueprintCosmetic|Event|Protected|BlueprintEvent 
};

/// Class /Script/ScoutDroneRuntime.FortScoutDroneCooldownMagnitudeCalculation
/// Size: 0x0028 (0x000040 - 0x000068)
class UFortScoutDroneCooldownMagnitudeCalculation : public UFortGameplayModMagnitudeCalculation
{ 
public:
	FScalableFloat                                     MinDroneCooldown;                                           // 0x0040   (0x0028)  
};

/// Class /Script/ScoutDroneRuntime.FortScoutDroneMovementComponent
/// Size: 0x00C0 (0x000F50 - 0x001010)
class UFortScoutDroneMovementComponent : public UCharacterMovementComponent
{ 
public:
	FVector                                            LocalInputState;                                            // 0x0F48   (0x0018)  
	FVector                                            LastInputState;                                             // 0x0F60   (0x0018)  
	FVector                                            ReplicatedAcceleration;                                     // 0x0F78   (0x0018)  
	FScalableFloat                                     StrafeInputMultiplier;                                      // 0x0F90   (0x0028)  
	FScalableFloat                                     BacktrackingInputMultiplier;                                // 0x0FB8   (0x0028)  
	FScalableFloat                                     VerticalMovementInputMultiplier;                            // 0x0FE0   (0x0028)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x1008   (0x0008)  MISSED
};

/// Class /Script/ScoutDroneRuntime.FortScoutDronePawnOverrideComponent
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UFortScoutDronePawnOverrideComponent : public UFortPawnOverrideComponent
{ 
public:
	class UClass*                                      DroneSpectateCameraMode;                                    // 0x00A8   (0x0008)  
};

/// Class /Script/ScoutDroneRuntime.FortScoutDronePawnOwnerOverrideComponent
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UFortScoutDronePawnOwnerOverrideComponent : public UFortPawnOverrideComponent
{ 
public:
	SDK_UNDEFINED(8,15541) /* TWeakObjectPtr<AFortScoutDrone*> */ __um(ControlledDrone);                           // 0x00A8   (0x0008)  
};

/// Struct /Script/ScoutDroneRuntime.ScoutDroneCapsuleSizeData
/// Size: 0x0050 (0x000000 - 0x000050)
struct FScoutDroneCapsuleSizeData
{ 
	FScalableFloat                                     CapsuleHalfHeight;                                          // 0x0000   (0x0028)  
	FScalableFloat                                     CapsuleRadius;                                              // 0x0028   (0x0028)  
};

/// Class /Script/ScoutDroneRuntime.FortScoutDronePickupManager
/// Size: 0x0138 (0x0000A0 - 0x0001D8)
class UFortScoutDronePickupManager : public UPawnComponent
{ 
public:
	FScoutDronePickupTargets                           AttachedTargets;                                            // 0x00A0   (0x0018)  
	FName                                              AttachPointSocketName;                                      // 0x00B8   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00BC   (0x0004)  MISSED
	FScoutDronePickupTargets                           PreviouslyAttachedTargets;                                  // 0x00C0   (0x0018)  
	FVector                                            ItemOffset;                                                 // 0x00D8   (0x0018)  
	FVector                                            DBNOPawnOffset;                                             // 0x00F0   (0x0018)  
	float                                              CurrentlyAppliedCameraOffset;                               // 0x0108   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x010C   (0x0004)  MISSED
	FScoutDroneCapsuleSizeData                         MaxExtraCapsuleDimensions;                                  // 0x0110   (0x0050)  
	FScalableFloat                                     MaxPickupSpread;                                            // 0x0160   (0x0028)  
	FScalableFloat                                     PickupTossSpeed;                                            // 0x0188   (0x0028)  
	FGameplayTagContainer                              ItemsPickupTags;                                            // 0x01B0   (0x0020)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x01D0   (0x0008)  MISSED


	/// Functions
	// Function /Script/ScoutDroneRuntime.FortScoutDronePickupManager.ServerUpdateItemAttachment
	// void ServerUpdateItemAttachment(FVector CalculatedItemOffset);                                                        // [0xab68720] Final|Net|NetReliableNative|Event|Private|NetServer|HasDefaults 
	// Function /Script/ScoutDroneRuntime.FortScoutDronePickupManager.ServerDropAttachedActors
	// void ServerDropAttachedActors();                                                                                      // [0x30fd094] Net|NetReliableNative|Event|Public|NetServer 
	// Function /Script/ScoutDroneRuntime.FortScoutDronePickupManager.OnRep_AttachedTargets
	// void OnRep_AttachedTargets();                                                                                         // [0xab682f8] Final|Native|Private 
	// Function /Script/ScoutDroneRuntime.FortScoutDronePickupManager.OnPawnDBNOStateChanged
	// void OnPawnDBNOStateChanged(class AFortPawn* Pawn, bool bIsDBNO);                                                     // [0xab68024] Final|Native|Private 
	// Function /Script/ScoutDroneRuntime.FortScoutDronePickupManager.OnAttachedPawnDied
	// void OnAttachedPawnDied(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, FVector HitLocation, class UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum); // [0xab67b2c] Final|Native|Private|HasDefaults 
	// Function /Script/ScoutDroneRuntime.FortScoutDronePickupManager.HasAPawnAtached
	// bool HasAPawnAtached();                                                                                               // [0xab67a70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ScoutDroneRuntime.FortScoutDronePickupManager.HasAnyAttachedActors
	// bool HasAnyAttachedActors();                                                                                          // [0xab67a8c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ScoutDroneRuntime.FortScoutDronePickupManager.BP_OnActorsDetached
	// void BP_OnActorsDetached();                                                                                           // [0x18a39e4] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/ScoutDroneRuntime.FortScoutDronePickupManager.BP_OnActorsAttached
	// void BP_OnActorsAttached();                                                                                           // [0x18a39e4] BlueprintCosmetic|Event|Protected|BlueprintEvent 
};

/// Struct /Script/ScoutDroneRuntime.OnFortScoutDroneDeployed
/// Size: 0x0008 (0x000000 - 0x000008)
struct FOnFortScoutDroneDeployed
{ 
	SDK_UNDEFINED(8,15542) /* TWeakObjectPtr<AFortScoutDrone*> */ __um(DeployedDrone);                             // 0x0000   (0x0008)  
};

/// Struct /Script/ScoutDroneRuntime.OnFortScoutDroneDismissed
/// Size: 0x0004 (0x000000 - 0x000004)
struct FOnFortScoutDroneDismissed
{ 
	FGameplayTag                                       DismissalReason;                                            // 0x0000   (0x0004)  
};

/// Struct /Script/ScoutDroneRuntime.OnFortScoutDroneMarkedEnemies
/// Size: 0x0018 (0x000000 - 0x000018)
struct FOnFortScoutDroneMarkedEnemies
{ 
	FGameplayTag                                       Source;                                                     // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	TArray<class AActor*>                              MarkedActors;                                               // 0x0008   (0x0010)  
};

/// Struct /Script/ScoutDroneRuntime.OnFortScoutDroneFinishedLongInteract
/// Size: 0x0001 (0x000000 - 0x000001)
struct FOnFortScoutDroneFinishedLongInteract
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

