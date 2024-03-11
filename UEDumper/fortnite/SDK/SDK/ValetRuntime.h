
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
/// dependency: GameFeatures
/// dependency: GameplayAbilities
/// dependency: GameplayCameras
/// dependency: GameplayTags
/// dependency: IrisCore
/// dependency: ModularGameplay
/// dependency: MotoSynth
/// dependency: Niagara

/// Enum /Script/ValetRuntime.EFortDagwoodSimEvent
/// Size: 0x09
enum class EFortDagwoodSimEvent : uint8_t
{
	EFortDagwoodSimEvent__EnterLandscape                                             = 0,
	EFortDagwoodSimEvent__ExitLandscape                                              = 1,
	EFortDagwoodSimEvent__EnterRoad                                                  = 2,
	EFortDagwoodSimEvent__ExitRoad                                                   = 3,
	EFortDagwoodSimEvent__Explode                                                    = 4,
	EFortDagwoodSimEvent__FlipImpact                                                 = 5,
	EFortDagwoodSimEvent__StartBoost                                                 = 6,
	EFortDagwoodSimEvent__FinishBoost                                                = 7,
	EFortDagwoodSimEvent__EFortDagwoodSimEvent_MAX                                   = 8
};

/// Enum /Script/ValetRuntime.EControlsPrototypes
/// Size: 0x05
enum class EControlsPrototypes : uint8_t
{
	EControlsPrototypes__CameraSteering                                              = 0,
	EControlsPrototypes__NonCameraSteering                                           = 1,
	EControlsPrototypes__HybridCameraSteering                                        = 2,
	EControlsPrototypes__MaxCount                                                    = 3,
	EControlsPrototypes__EControlsPrototypes_MAX                                     = 4
};

/// Enum /Script/ValetRuntime.EPoppedTireReactionStates
/// Size: 0x08
enum class EPoppedTireReactionStates : uint8_t
{
	EPoppedTireReactionStates__None                                                  = 0,
	EPoppedTireReactionStates__VeerLeft                                              = 1,
	EPoppedTireReactionStates__VeerRight                                             = 2,
	EPoppedTireReactionStates__Wiggle                                                = 3,
	EPoppedTireReactionStates__Yaw90                                                 = 4,
	EPoppedTireReactionStates__FlipPitch                                             = 5,
	EPoppedTireReactionStates__FlipRoll                                              = 6,
	EPoppedTireReactionStates__EPoppedTireReactionStates_MAX                         = 7
};

/// Enum /Script/ValetRuntime.EVehicleClass
/// Size: 0x05
enum class EVehicleClass : uint8_t
{
	EVehicleClass__Sedan                                                             = 0,
	EVehicleClass__Sport                                                             = 1,
	EVehicleClass__PickupTruck                                                       = 2,
	EVehicleClass__SemiTruck                                                         = 3,
	EVehicleClass__EVehicleClass_MAX                                                 = 4
};

/// Class /Script/ValetRuntime.FortValetMountedGunAnimInstance
/// Size: 0x0020 (0x000560 - 0x000580)
class UFortValetMountedGunAnimInstance : public UFortAnimInstance
{ 
public:
	class AFortDagwoodVehicle*                         VehicleActor;                                               // 0x0558   (0x0008)  
	bool                                               bIsUsingMountedGun;                                         // 0x0560   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0561   (0x0003)  MISSED
	int32_t                                            SeatIndexCached;                                            // 0x0564   (0x0004)  
	float                                              AimingYaw;                                                  // 0x0568   (0x0004)  
	float                                              AimingPitch;                                                // 0x056C   (0x0004)  
	class AFortWeaponRangedForVehicle*                 MountedWeapon;                                              // 0x0570   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0578   (0x0008)  MISSED
};

/// Class /Script/ValetRuntime.FortValetPassengerAnimInstance
/// Size: 0x0060 (0x000830 - 0x000890)
class UFortValetPassengerAnimInstance : public UFortVehicleOccupantAnimInstance
{ 
public:
	FCachedAnimRelevancyData                           IntoVehicleCachedData;                                      // 0x0830   (0x0014)  
	FCachedAnimRelevancyData                           OutOfVehicleCachedData;                                     // 0x0844   (0x0014)  
	SDK_UNDEFINED(32,11737) /* TWeakObjectPtr<AFortDagwoodVehicle*> */ __um(DagwoodVehicleInstance);               // 0x0858   (0x0020)  
	float                                              TurnYaw;                                                    // 0x0878   (0x0004)  
	float                                              InTime;                                                     // 0x087C   (0x0004)  
	float                                              OutTime;                                                    // 0x0880   (0x0004)  
	float                                              NegativeTurnYaw;                                            // 0x0884   (0x0004)  
	bool                                               bIsReloading;                                               // 0x0888   (0x0001)  
	bool                                               bIsTargeting;                                               // 0x0889   (0x0001)  
	bool                                               bIsFiring;                                                  // 0x088A   (0x0001)  
	bool                                               bIsUsingConsumable;                                         // 0x088B   (0x0001)  
	bool                                               bIsInAction;                                                // 0x088C   (0x0001)  
	bool                                               bIsPassengerBackLeft;                                       // 0x088D   (0x0001)  
	bool                                               bIsThrowConsumable;                                         // 0x088E   (0x0001)  
	bool                                               bIsTargetingOrThrowingConsumable;                           // 0x088F   (0x0001)  
};

/// Class /Script/ValetRuntime.FortValetSedanAnimInstance
/// Size: 0x0010 (0x000620 - 0x000630)
class UFortValetSedanAnimInstance : public UFortVehicleAnimInstance
{ 
public:
	unsigned char                                      UnknownData00_3[0x4];                                       // 0x0618   (0x0004)  MISSED
	bool                                               bHasTireMod;                                                // 0x061C   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x061D   (0x0003)  MISSED
	float                                              TrunkDamageAlpha;                                           // 0x0620   (0x0004)  
	float                                              MirrorLeftDamageAlpha;                                      // 0x0624   (0x0004)  
	float                                              MirrorRightDamageAlpha;                                     // 0x0628   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x062C   (0x0004)  MISSED
};

/// Struct /Script/ValetRuntime.NetworkPhysicsState
/// Size: 0x0090 (0x000000 - 0x000090)
struct FNetworkPhysicsState
{ 
	unsigned char                                      UnknownData00_2[0x90];                                      // 0x0000   (0x0090)  MISSED
};

/// Struct /Script/ValetRuntime.FortDagwoodCmd
/// Size: 0x0030 (0x000000 - 0x000030)
struct FFortDagwoodCmd
{ 
	float                                              ForwardAlpha;                                               // 0x0000   (0x0004)  
	float                                              RightAlpha;                                                 // 0x0004   (0x0004)  
	float                                              AccelerationAlpha;                                          // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	FVector_NetQuantize100                             MovementDir;                                                // 0x0010   (0x0018)  
	bool                                               bBoost : 1;                                                 // 0x0028:0 (0x0001)  
	bool                                               bHandbrake : 1;                                             // 0x0028:1 (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0029   (0x0007)  MISSED
};

/// Struct /Script/ValetRuntime.RuntimeBoostInfo
/// Size: 0x0018 (0x000000 - 0x000018)
struct FRuntimeBoostInfo
{ 
	bool                                               bCanBoost : 1;                                              // 0x0000:0 (0x0001)  
	bool                                               bUsesRechargeableBoost : 1;                                 // 0x0000:1 (0x0001)  
	unsigned char                                      UnknownData00_4[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              BoostPushForce;                                             // 0x0004   (0x0004)  
	float                                              BoostTopSpeedForceMultiplier;                               // 0x0008   (0x0004)  
	float                                              BoostTopSpeedMultiplier;                                    // 0x000C   (0x0004)  
	float                                              RechargeableBoostRateOfRegen;                               // 0x0010   (0x0004)  
	float                                              RechargeableBoostRateOfUse;                                 // 0x0014   (0x0004)  
};

/// Struct /Script/ValetRuntime.RuntimeFuelInfo
/// Size: 0x000C (0x000000 - 0x00000C)
struct FRuntimeFuelInfo
{ 
	float                                              MaxFuel;                                                    // 0x0000   (0x0004)  
	float                                              FuelPerSecondDriving;                                       // 0x0004   (0x0004)  
	float                                              FuelPerSecondBoosting;                                      // 0x0008   (0x0004)  
};

/// Struct /Script/ValetRuntime.RuntimeGearInfo
/// Size: 0x0010 (0x000000 - 0x000010)
struct FRuntimeGearInfo
{ 
	int32_t                                            GearIndex;                                                  // 0x0000   (0x0004)  
	float                                              TopSpeed;                                                   // 0x0004   (0x0004)  
	float                                              MinSpeed;                                                   // 0x0008   (0x0004)  
	float                                              PushForce;                                                  // 0x000C   (0x0004)  
};

/// Struct /Script/ValetRuntime.DagwoodRuntimeModifiers
/// Size: 0x0070 (0x000000 - 0x000070)
struct FDagwoodRuntimeModifiers
{ 
	FRuntimeBoostInfo                                  BoostInfo;                                                  // 0x0000   (0x0018)  
	FRuntimeFuelInfo                                   FuelInfo;                                                   // 0x0018   (0x000C)  
	FRuntimeSpringsInfo                                SpringsInfo;                                                // 0x0024   (0x0020)  
	bool                                               bDamageFriendlyVehicles;                                    // 0x0044   (0x0001)  
	bool                                               bDamageOtherVehicles;                                       // 0x0045   (0x0001)  
	bool                                               bDamageOwnVehicle;                                          // 0x0046   (0x0001)  
	bool                                               bDamageAllowedFromOtherVehicle;                             // 0x0047   (0x0001)  
	float                                              GravityMultiplier;                                          // 0x0048   (0x0004)  
	float                                              MaxInclineAngle;                                            // 0x004C   (0x0004)  
	float                                              MaxTiltAngle;                                               // 0x0050   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0054   (0x0004)  MISSED
	TArray<FRuntimeGearInfo>                           GearInfos;                                                  // 0x0058   (0x0010)  
	FGameplayTag                                       TireModTag;                                                 // 0x0068   (0x0004)  
	char                                               TireModVersion;                                             // 0x006C   (0x0001)  
	bool                                               bTireModAdjustsPosition;                                    // 0x006D   (0x0001)  
	char                                               DataVersion;                                                // 0x006E   (0x0001)  
	unsigned char                                      UnknownData01_6[0x1];                                       // 0x006F   (0x0001)  MISSED
};

/// Struct /Script/ValetRuntime.DagwoodInPersistent
/// Size: 0x00C0 (0x0001A0 - 0x000260)
struct FDagwoodInPersistent : FFortVehicleInPersistent
{ 
	class UFortDagwoodVehicleConfigs*                  FortDagwoodVehicleConfigs;                                  // 0x01A0   (0x0008)  
	FDagwoodRuntimeModifiers                           DagwoodRuntimeModifiedProperties;                           // 0x01A8   (0x0070)  
	unsigned char                                      UnknownData00_6[0x48];                                      // 0x0218   (0x0048)  MISSED
};

/// Struct /Script/ValetRuntime.DagwoodInternal
/// Size: 0x00B8 (0x0000E0 - 0x000198)
struct FDagwoodInternal : FFortVehicleInternalPersistent
{ 
	unsigned char                                      UnknownData00_1[0xB8];                                      // 0x00E0   (0x00B8)  MISSED
};

/// Struct /Script/ValetRuntime.DagwoodOutPersistent
/// Size: 0x0008 (0x000028 - 0x000030)
struct FDagwoodOutPersistent : FFortVehicleOutPersistent
{ 
	bool                                               bHasTraction;                                               // 0x0028   (0x0001)  
	bool                                               bStartHandBrakeCatchupForce;                                // 0x0029   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x002A   (0x0006)  MISSED
};

/// Struct /Script/ValetRuntime.DagwoodOutContinuous
/// Size: 0x0010 (0x000050 - 0x000060)
struct FDagwoodOutContinuous : FFortVehicleOutContinuous
{ 
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0050   (0x0010)  MISSED
};

/// Struct /Script/ValetRuntime.DagwoodState_PT
/// Size: 0x0230 (0x000000 - 0x000230)
struct FDagwoodState_PT
{ 
	FDagwoodInternal                                   Internal;                                                   // 0x0000   (0x0198)  
	FDagwoodOutPersistent                              OutPersistent;                                              // 0x0198   (0x0030)  
	FDagwoodOutContinuous                              OutContinuous;                                              // 0x01C8   (0x0060)  
	bool                                               bOutValid;                                                  // 0x0228   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0229   (0x0007)  MISSED
};

/// Struct /Script/ValetRuntime.DagwoodFutureClientInput
/// Size: 0x0038 (0x000000 - 0x000038)
struct FDagwoodFutureClientInput
{ 
	int32_t                                            Frame;                                                      // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	FFortDagwoodCmd                                    InputCmd;                                                   // 0x0008   (0x0030)  
};

/// Struct /Script/ValetRuntime.DagwoodManagedState
/// Size: 0x04E8 (0x000000 - 0x0004E8)
struct FDagwoodManagedState
{ 
	int32_t                                            Frame;                                                      // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	FFortDagwoodCmd                                    InputCmd;                                                   // 0x0008   (0x0030)  
	FDagwoodInPersistent                               GT_State;                                                   // 0x0038   (0x0260)  
	FDagwoodState_PT                                   PT_State;                                                   // 0x0298   (0x0230)  
	class APlayerController*                           PC;                                                         // 0x04C8   (0x0008)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x04D0   (0x0008)  MISSED
	TArray<FDagwoodFutureClientInput>                  FutureInputs;                                               // 0x04D8   (0x0010)  
};

/// Class /Script/ValetRuntime.DagwoodNetworkPhysicsComponent
/// Size: 0x0F60 (0x0000A0 - 0x001000)
class UDagwoodNetworkPhysicsComponent : public UActorComponent
{ 
public:
	FNetworkPhysicsState                               NetworkPhysicsState;                                        // 0x00A0   (0x0090)  
	SDK_UNDEFINED(16,11738) /* FMulticastInlineDelegate */ __um(OnGeneratedLocalInputCmd);                         // 0x0130   (0x0010)  
	FDagwoodManagedState                               ReplicatedManagedState;                                     // 0x0140   (0x04E8)  
	FDagwoodManagedState                               InManagedState;                                             // 0x0628   (0x04E8)  
	FDagwoodManagedState                               OutManagedState;                                            // 0x0B10   (0x04E8)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0FF8   (0x0008)  MISSED


	/// Functions
	// Function /Script/ValetRuntime.DagwoodNetworkPhysicsComponent.SetState_GT
	// void SetState_GT(FDagwoodInPersistent& In);                                                                           // [0xa240adc] Final|Native|Public|HasOutParms 
	// Function /Script/ValetRuntime.DagwoodNetworkPhysicsComponent.SetPendingInputCmd
	// void SetPendingInputCmd(FFortDagwoodCmd& In);                                                                         // [0xa2406c8] Final|Native|Public|HasOutParms 
	// Function /Script/ValetRuntime.DagwoodNetworkPhysicsComponent.OnGeneratedLocalInputCmd__DelegateSignature
	// void OnGeneratedLocalInputCmd__DelegateSignature();                                                                   // [0x18a39e4] MulticastDelegate|Public|Delegate 
	// Function /Script/ValetRuntime.DagwoodNetworkPhysicsComponent.GetState_PT
	// FDagwoodState_PT GetState_PT();                                                                                       // [0xa23fbec] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ValetRuntime.DagwoodNetworkPhysicsComponent.GetState_GT
	// FDagwoodInPersistent GetState_GT();                                                                                   // [0xa23fb80] Final|Native|Public|Const 
	// Function /Script/ValetRuntime.DagwoodNetworkPhysicsComponent.GetPendingInputCmd
	// FFortDagwoodCmd GetPendingInputCmd();                                                                                 // [0xa23fb4c] Final|Native|Public|Const 
};

/// Class /Script/ValetRuntime.NetworkPhysicsManager
/// Size: 0x60E8 (0x000030 - 0x006118)
class UNetworkPhysicsManager : public UWorldSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x60E8];                                    // 0x0030   (0x60E8)  MISSED
};

/// Class /Script/ValetRuntime.FortAthenaMutator_OverrideValetVehicleParameters
/// Size: 0x0050 (0x000338 - 0x000388)
class AFortAthenaMutator_OverrideValetVehicleParameters : public AFortAthenaMutator
{ 
public:
	FScalableFloat                                     MinInitialVehicleFuelPercent;                               // 0x0338   (0x0028)  
	FScalableFloat                                     MaxInitialVehicleFuelPercent;                               // 0x0360   (0x0028)  


	/// Functions
	// Function /Script/ValetRuntime.FortAthenaMutator_OverrideValetVehicleParameters.OnPlaylistLoaded
	// void OnPlaylistLoaded(FName PlaylistName, FGameplayTagContainer& PlaylistContainerTags);                              // [0x81ed394] Final|Native|Public|HasOutParms 
};

/// Class /Script/ValetRuntime.FortCameraMode_Dagwood
/// Size: 0x0040 (0x001CC0 - 0x001D00)
class UFortCameraMode_Dagwood : public UFortCameraMode_AthenaVehicle
{ 
public:
	float                                              HorizontalCameraSpaceOffsetWhileTurning;                    // 0x1CB8   (0x0004)  
	float                                              SteeringAngleForMaxHorizontalOffset;                        // 0x1CBC   (0x0004)  
	float                                              InAirVerticalOffset;                                        // 0x1CC0   (0x0004)  
	float                                              AirOffsetDampFactor;                                        // 0x1CC4   (0x0004)  
	float                                              SpeedAlphaDampFactor;                                       // 0x1CC8   (0x0004)  
	float                                              TimeInAirRequiredForVertOffset;                             // 0x1CCC   (0x0004)  
	float                                              VehicleBasePitch;                                           // 0x1CD0   (0x0004)  
	float                                              HorizOffsetInterpSpeed;                                     // 0x1CD4   (0x0004)  
	float                                              HorizOffsetInterpSpeedRecovery;                             // 0x1CD8   (0x0004)  
	float                                              CurrentSpeedAlpha;                                          // 0x1CDC   (0x0004)  
	float                                              CurrentVerticalOffset;                                      // 0x1CE0   (0x0004)  
	float                                              CurrentHorizontalOffset;                                    // 0x1CE4   (0x0004)  
	float                                              TimeInAir;                                                  // 0x1CE8   (0x0004)  
	float                                              PreviousSpeed;                                              // 0x1CEC   (0x0004)  
	float                                              AppliedPitch;                                               // 0x1CF0   (0x0004)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x1CF4   (0x000C)  MISSED
};

/// Class /Script/ValetRuntime.FortContextualTutorial_VehicleValetLowFuel
/// Size: 0x0008 (0x0000F8 - 0x000100)
class UFortContextualTutorial_VehicleValetLowFuel : public UFortContextualTutorial
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00F8   (0x0008)  MISSED


	/// Functions
	// Function /Script/ValetRuntime.FortContextualTutorial_VehicleValetLowFuel.HandleVehicleStateChanged
	// void HandleVehicleStateChanged(class AFortPlayerPawn* PlayerPawn, class AActor* NewVehicle, class AActor* OldVehicle); // [0xa23fdc8] Final|Native|Private 
	// Function /Script/ValetRuntime.FortContextualTutorial_VehicleValetLowFuel.HandleStartSkydivingForActivation
	// void HandleStartSkydivingForActivation();                                                                             // [0xa23fdb4] Final|Native|Private 
};

/// Class /Script/ValetRuntime.FortDagwoodModsConfigs
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortDagwoodModsConfigs : public UObject
{ 
public:
};

/// Class /Script/ValetRuntime.FortDagwoodVehicle
/// Size: 0x0690 (0x002020 - 0x0026B0)
class AFortDagwoodVehicle : public AFortAthenaSKMotorVehicle
{ 
public:
	unsigned char                                      UnknownData00_3[0x48];                                      // 0x2018   (0x0048)  MISSED
	SDK_UNDEFINED(16,11739) /* FMulticastInlineDelegate */ __um(OnStartHandbrakeDelegate);                         // 0x2060   (0x0010)  
	SDK_UNDEFINED(16,11740) /* FMulticastInlineDelegate */ __um(OnStopHandbrakeDelegate);                          // 0x2070   (0x0010)  
	SDK_UNDEFINED(16,11741) /* FMulticastInlineDelegate */ __um(OnStartHandBrakeCatchupForceDelegate);             // 0x2080   (0x0010)  
	class UClass*                                      HardLandingCameraShake;                                     // 0x2090   (0x0008)  
	class UClass*                                      DriverCamShakeClass;                                        // 0x2098   (0x0008)  
	class UClass*                                      HandBrakeCamShakeClass;                                     // 0x20A0   (0x0008)  
	EVehicleClass                                      VehicleClass;                                               // 0x20A8   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x20A9   (0x0003)  MISSED
	float                                              FadeDelay;                                                  // 0x20AC   (0x0004)  
	float                                              FadeDuration;                                               // 0x20B0   (0x0004)  
	float                                              MinBrakeForceForSkid;                                       // 0x20B4   (0x0004)  
	float                                              MinForwardSpeedForSkid;                                     // 0x20B8   (0x0004)  
	FGameplayTag                                       SpeedLinesCueTag;                                           // 0x20BC   (0x0004)  
	float                                              FadeStartTime;                                              // 0x20C0   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x20C4   (0x0004)  MISSED
	class UDagwoodNetworkPhysicsComponent*             NetworkPhysicsComponent;                                    // 0x20C8   (0x0008)  
	unsigned char                                      UnknownData03_5[0x78];                                      // 0x20D0   (0x0078)  MISSED
	SDK_UNDEFINED(16,11742) /* FMulticastInlineDelegate */ __um(OnTireModHealthChanged);                           // 0x2148   (0x0010)  
	float                                              RechargeableBoostPercent;                                   // 0x2158   (0x0004)  
	unsigned char                                      UnknownData04_5[0x4];                                       // 0x215C   (0x0004)  MISSED
	class UFortSplatterSourceComponent*                SplatterSourceComp;                                         // 0x2160   (0x0008)  
	bool                                               bEnableNativizedTick;                                       // 0x2168   (0x0001)  
	unsigned char                                      UnknownData05_5[0x7];                                       // 0x2169   (0x0007)  MISSED
	TArray<FName>                                      PassengerLeanSockets;                                       // 0x2170   (0x0010)  
	TArray<FVector>                                    PassngerLeanRelativeOffsets;                                // 0x2180   (0x0010)  
	class UClass*                                      PassengerCameraModeClass;                                   // 0x2190   (0x0008)  
	class UClass*                                      PassengerCameraModeClass_ADS;                               // 0x2198   (0x0008)  
	TArray<FName>                                      WheelSocketNames;                                           // 0x21A0   (0x0010)  
	class UFortDagwoodVehicleConfigs*                  FortDagwoodVehicleConfigs;                                  // 0x21B0   (0x0008)  
	TArray<int32_t>                                    RearShocks;                                                 // 0x21B8   (0x0010)  
	FGameplayTagContainer                              OffroadEnvironmentDamageTags;                               // 0x21C8   (0x0020)  
	FGameplayTagContainer                              FireDamageTags;                                             // 0x21E8   (0x0020)  
	FVector                                            NativeWheelScaleRear;                                       // 0x2208   (0x0018)  
	FVector                                            NativeWheelScaleFront;                                      // 0x2220   (0x0018)  
	FVector                                            NativeTireScaleRear;                                        // 0x2238   (0x0018)  
	FVector                                            NativeTireScaleFront;                                       // 0x2250   (0x0018)  
	bool                                               bTireSmokeActive;                                           // 0x2268   (0x0001)  
	bool                                               bBoostFailed;                                               // 0x2269   (0x0001)  
	bool                                               bCanBoostPitch;                                             // 0x226A   (0x0001)  
	unsigned char                                      UnknownData06_5[0x5];                                       // 0x226B   (0x0005)  MISSED
	uint64_t                                           AccelForceFeedbackHandle;                                   // 0x2270   (0x0008)  
	uint64_t                                           SkidForceFeedbackHandle;                                    // 0x2278   (0x0008)  
	uint64_t                                           BrakeForceFeedbackHandle;                                   // 0x2280   (0x0008)  
	uint64_t                                           HandBrakeForceFeedbackHandle;                               // 0x2288   (0x0008)  
	bool                                               bSpeedLinesActive;                                          // 0x2290   (0x0001)  
	unsigned char                                      UnknownData07_5[0x1F];                                      // 0x2291   (0x001F)  MISSED
	FDagwoodRuntimeModifiers                           DagwoodRuntimeModifiedProperties;                           // 0x22B0   (0x0070)  
	TArray<FAttachedWheel>                             ServerRepWheelData;                                         // 0x2320   (0x0010)  
	unsigned char                                      UnknownData08_5[0x50];                                      // 0x2330   (0x0050)  MISSED
	FVector                                            FlipYawForwardTargetDirection;                              // 0x2380   (0x0018)  
	FVector                                            FlipYawOriginalForward;                                     // 0x2398   (0x0018)  
	EVehicleWheelLocations                             LastPoppedTire;                                             // 0x23B0   (0x0001)  
	unsigned char                                      UnknownData09_5[0x3];                                       // 0x23B1   (0x0003)  MISSED
	float                                              RoadTopSpeedMultiplier;                                     // 0x23B4   (0x0004)  
	float                                              CurrentBumpiness;                                           // 0x23B8   (0x0004)  
	float                                              CurrentForwardAcceleration;                                 // 0x23BC   (0x0004)  
	float                                              PreviousTurnAlpha;                                          // 0x23C0   (0x0004)  
	float                                              CurrentCameraAssistStrength;                                // 0x23C4   (0x0004)  
	float                                              LostGripTime;                                               // 0x23C8   (0x0004)  
	float                                              LostGripRightAlpha;                                         // 0x23CC   (0x0004)  
	float                                              HandbrakeTime;                                              // 0x23D0   (0x0004)  
	float                                              HandbrakeStartTime;                                         // 0x23D4   (0x0004)  
	float                                              HandbrakeEndTime;                                           // 0x23D8   (0x0004)  
	float                                              FlipYawMult;                                                // 0x23DC   (0x0004)  
	float                                              FlipTimer;                                                  // 0x23E0   (0x0004)  
	float                                              FlipExplodeTimer;                                           // 0x23E4   (0x0004)  
	float                                              FlipPushForceTimer;                                         // 0x23E8   (0x0004)  
	float                                              FlipAirTimer;                                               // 0x23EC   (0x0004)  
	float                                              FlipLanding;                                                // 0x23F0   (0x0004)  
	float                                              FlipStartTime;                                              // 0x23F4   (0x0004)  
	float                                              LastFlipDamageTime;                                         // 0x23F8   (0x0004)  
	float                                              PreFlipControlLossTimer;                                    // 0x23FC   (0x0004)  
	bool                                               bDidCinematicFlip;                                          // 0x2400   (0x0001)  
	bool                                               bCanCinematicFlip;                                          // 0x2401   (0x0001)  
	bool                                               bInPopTireVeer;                                             // 0x2402   (0x0001)  
	bool                                               bInFlipRecovery;                                            // 0x2403   (0x0001)  
	bool                                               bExplodeAfterFlip;                                          // 0x2404   (0x0001)  
	bool                                               bLostGrip;                                                  // 0x2405   (0x0001)  
	bool                                               bApplyHandbrakeCatchupForce;                                // 0x2406   (0x0001)  
	bool                                               bDidHandbrakeCatchup;                                       // 0x2407   (0x0001)  
	bool                                               bInFlipRoll;                                                // 0x2408   (0x0001)  
	bool                                               bInFlipYaw;                                                 // 0x2409   (0x0001)  
	bool                                               bInFlipPitch;                                               // 0x240A   (0x0001)  
	bool                                               bFlipDidLeaveGround;                                        // 0x240B   (0x0001)  
	bool                                               bBreakBuildingsIfBlockingLeaningPassenger;                  // 0x240C   (0x0001)  
	unsigned char                                      UnknownData10_5[0x3];                                       // 0x240D   (0x0003)  MISSED
	float                                              LeanBreakTimeAccumulator;                                   // 0x2410   (0x0004)  
	float                                              LeanBreakCheckInterval;                                     // 0x2414   (0x0004)  
	TArray<FName>                                      SeatToWindowShapeNames;                                     // 0x2418   (0x0010)  
	class ULegacyCameraShake*                          OffroadCameraShakeInstance;                                 // 0x2428   (0x0008)  
	class ULegacyCameraShake*                          DriverCameraShakeInstance;                                  // 0x2430   (0x0008)  
	class ULegacyCameraShake*                          AccelCameraShakeInstance;                                   // 0x2438   (0x0008)  
	class ULegacyCameraShake*                          HandBrakeCameraShakeInstance;                               // 0x2440   (0x0008)  
	class UNiagaraComponent*                           NativeComp_RoadAndExhaust;                                  // 0x2448   (0x0008)  
	class UNiagaraComponent*                           NativeComp_TireSkid;                                        // 0x2450   (0x0008)  
	class UNiagaraComponent*                           NativeComp_Damage;                                          // 0x2458   (0x0008)  
	class UNiagaraComponent*                           NativeComp_SpeedLines;                                      // 0x2460   (0x0008)  
	class UNiagaraSystem*                              NativeSys_TireExhaust;                                      // 0x2468   (0x0008)  
	class UNiagaraSystem*                              NativeSys_SpeedLines;                                       // 0x2470   (0x0008)  
	class UNiagaraSystem*                              NativeSys_TireSkid;                                         // 0x2478   (0x0008)  
	SDK_UNDEFINED(16,11743) /* TArray<TEnumAsByte<EPhysicalSurface>> */ __um(RoadAndExhaustSurfaceTypeArrayForFX); // 0x2480   (0x0010)  
	FName                                              RoadAndExhaustPeelOutColorIndexName;                        // 0x2490   (0x0004)  
	FName                                              BrakeLightsName;                                            // 0x2494   (0x0004)  
	unsigned char                                      UnknownData11_5[0x18];                                      // 0x2498   (0x0018)  MISSED
	TArray<ETireStates>                                FakeTireStates;                                             // 0x24B0   (0x0010)  
	EPoppedTireReactionStates                          ActivePoppedTireReaction;                                   // 0x24C0   (0x0001)  
	EPoppedTireReactionStates                          ReplicatedPoppedTireReaction;                               // 0x24C1   (0x0001)  
	unsigned char                                      UnknownData12_5[0x2];                                       // 0x24C2   (0x0002)  MISSED
	SDK_UNDEFINED(8,11744) /* TWeakObjectPtr<AFortValetAudioController*> */ __um(ValetAudio);                      // 0x24C4   (0x0008)  
	unsigned char                                      UnknownData13_5[0x4];                                       // 0x24CC   (0x0004)  MISSED
	TArray<class USkeletalMeshComponent*>              TireMeshes;                                                 // 0x24D0   (0x0010)  
	TArray<class USkeletalMeshComponent*>              FakeTireMeshes;                                             // 0x24E0   (0x0010)  
	unsigned char                                      UnknownData14_5[0x4];                                       // 0x24F0   (0x0004)  MISSED
	bool                                               bIsInoperable;                                              // 0x24F4   (0x0001)  
	unsigned char                                      UnknownData15_5[0x3];                                       // 0x24F5   (0x0003)  MISSED
	int32_t                                            RandomSeed;                                                 // 0x24F8   (0x0004)  
	FRandomStream                                      RandStream;                                                 // 0x24FC   (0x0008)  
	bool                                               bHasTraction;                                               // 0x2504   (0x0001)  
	bool                                               bStartHandBrakeCatchupForce;                                // 0x2505   (0x0001)  
	unsigned char                                      UnknownData16_5[0x10A];                                     // 0x2506   (0x010A)  MISSED
	bool                                               bSelfDestructEnabled : 1;                                   // 0x2610:0 (0x0001)  
	bool                                               bClientUsesSelfDestructTimer : 1;                           // 0x2610:1 (0x0001)  
	unsigned char                                      UnknownData17_4[0x7];                                       // 0x2611   (0x0007)  MISSED
	class UStaticMesh*                                 TireBootMesh;                                               // 0x2618   (0x0008)  
	SDK_UNDEFINED(80,11745) /* TMap<int32_t, FDagwoodActionDefForUI> */ __um(MapSelfDestructActionDefForUI);       // 0x2620   (0x0050)  
	float                                              MinimumTimeBetweenSelfDestructPromptChanges;                // 0x2670   (0x0004)  
	unsigned char                                      UnknownData18_6[0x3C];                                      // 0x2674   (0x003C)  MISSED


	/// Functions
	// Function /Script/ValetRuntime.FortDagwoodVehicle.StartFade
	// void StartFade();                                                                                                     // [0xa240ca4] Final|Native|Public|BlueprintCallable 
	// Function /Script/ValetRuntime.FortDagwoodVehicle.SetValetAudioController
	// void SetValetAudioController(class AFortValetAudioController* ValetAudio);                                            // [0xa240ba4] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/ValetRuntime.FortDagwoodVehicle.SetRuntimeSpringsInfoOnServer
	// void SetRuntimeSpringsInfoOnServer(FRuntimeSpringsInfo& SpringsInfo);                                                 // [0xa240a40] Final|Native|Protected|HasOutParms|BlueprintCallable 
	// Function /Script/ValetRuntime.FortDagwoodVehicle.SetRuntimeGravityOnServer
	// void SetRuntimeGravityOnServer(float GravMult);                                                                       // [0xa2409b0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/ValetRuntime.FortDagwoodVehicle.SetRuntimeFuelInfoOnServer
	// void SetRuntimeFuelInfoOnServer(FRuntimeFuelInfo& FuelInfo);                                                          // [0xa240900] Final|Native|Protected|HasOutParms|BlueprintCallable 
	// Function /Script/ValetRuntime.FortDagwoodVehicle.SetRuntimeDriveInfoOnServer
	// void SetRuntimeDriveInfoOnServer(float MaxIncline, float MaxTilt);                                                    // [0xa240824] Final|Native|Protected|BlueprintCallable 
	// Function /Script/ValetRuntime.FortDagwoodVehicle.SetRuntimeBoostInfoOnServer
	// void SetRuntimeBoostInfoOnServer(FRuntimeBoostInfo& BoostInfo);                                                       // [0xa240770] Final|Native|Protected|HasOutParms|BlueprintCallable 
	// Function /Script/ValetRuntime.FortDagwoodVehicle.SetDamageInfoOnServer
	// void SetDamageInfoOnServer(bool bInDamageFriendlyVehicles, bool bInDamageOtherVehicles, bool bInDamageOwnVehicle, bool bInDamageAllowedFromOtherVehicle); // [0xa240560] Final|BlueprintAuthorityOnly|Native|Protected|BlueprintCallable 
	// Function /Script/ValetRuntime.FortDagwoodVehicle.ServerSetFadeDuration
	// void ServerSetFadeDuration(float NewFadeDuration);                                                                    // [0x67d85bc] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/ValetRuntime.FortDagwoodVehicle.ServerSelfDestructActivated
	// void ServerSelfDestructActivated();                                                                                   // [0xa240548] Net|NetReliableNative|Event|Public|NetServer 
	// Function /Script/ValetRuntime.FortDagwoodVehicle.SelfDestructCleanup
	// void SelfDestructCleanup();                                                                                           // [0xa240534] Final|Native|Public  
	// Function /Script/ValetRuntime.FortDagwoodVehicle.OnTickAudioFade
	// void OnTickAudioFade(float FadeParam);                                                                                // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/ValetRuntime.FortDagwoodVehicle.OnTickAudioController
	// void OnTickAudioController(float DeltaTime);                                                                          // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/ValetRuntime.FortDagwoodVehicle.OnStopHandbrake
	// void OnStopHandbrake();                                                                                               // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/ValetRuntime.FortDagwoodVehicle.OnStartHandbrake
	// void OnStartHandbrake();                                                                                              // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/ValetRuntime.FortDagwoodVehicle.OnServerAltInteract
	// void OnServerAltInteract(class AFortPawn* Pawn);                                                                      // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/ValetRuntime.FortDagwoodVehicle.OnRep_ServerRepWheelData
	// void OnRep_ServerRepWheelData(TArray<FAttachedWheel>& PrevWheelData);                                                 // [0xa240178] Final|Native|Private|HasOutParms 
	// Function /Script/ValetRuntime.FortDagwoodVehicle.OnRep_RandSeed
	// void OnRep_RandSeed();                                                                                                // [0x3586128] Final|Native|Private 
	// Function /Script/ValetRuntime.FortDagwoodVehicle.OnRep_PoppedTireReaction
	// void OnRep_PoppedTireReaction();                                                                                      // [0x3a0c448] Final|Native|Private 
	// Function /Script/ValetRuntime.FortDagwoodVehicle.OnRep_IsInoperable
	// void OnRep_IsInoperable();                                                                                            // [0xa240164] Final|Native|Private 
	// Function /Script/ValetRuntime.FortDagwoodVehicle.OnRep_FakeTires
	// void OnRep_FakeTires(TArray<ETireStates>& PrevTireStates);                                                            // [0xa2400c8] Final|Native|Private|HasOutParms 
	// Function /Script/ValetRuntime.FortDagwoodVehicle.OnRep_DagwoodRuntimeModifiers
	// void OnRep_DagwoodRuntimeModifiers(FDagwoodRuntimeModifiers& PrevMods);                                               // [0x3330fd8] Final|Native|Private|HasOutParms 
	// Function /Script/ValetRuntime.FortDagwoodVehicle.OnInoperableChanged
	// void OnInoperableChanged(bool bInoperable);                                                                           // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/ValetRuntime.FortDagwoodVehicle.OnHoldSelfDestructStopped
	// void OnHoldSelfDestructStopped(class AFortPawn* DriverPawn);                                                          // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/ValetRuntime.FortDagwoodVehicle.OnHoldSelfDestructStarted
	// void OnHoldSelfDestructStarted(class AFortPawn* DriverPawn, float ExitDuration);                                      // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/ValetRuntime.FortDagwoodVehicle.OnFlipImpactDamage
	// void OnFlipImpactDamage();                                                                                            // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/ValetRuntime.FortDagwoodVehicle.OnDestroyedPropFromCollision
	// void OnDestroyedPropFromCollision(class ABuildingActor* BuildingHitActor);                                            // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/ValetRuntime.FortDagwoodVehicle.OnClientBeginAltInteract
	// void OnClientBeginAltInteract(class AFortPawn* Pawn);                                                                 // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/ValetRuntime.FortDagwoodVehicle.OnBoostReady
	// void OnBoostReady();                                                                                                  // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/ValetRuntime.FortDagwoodVehicle.OnBoostFailed
	// void OnBoostFailed();                                                                                                 // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/ValetRuntime.FortDagwoodVehicle.NativeCalculateAccelRumbleIntensity
	// float NativeCalculateAccelRumbleIntensity(float MaxIntensity);                                                        // [0xa24003c] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ValetRuntime.FortDagwoodVehicle.MakeOperable
	// void MakeOperable(bool bAddGas);                                                                                      // [0x63fe5cc] Final|Native|Public|BlueprintCallable 
	// Function /Script/ValetRuntime.FortDagwoodVehicle.MakeInoperable
	// void MakeInoperable();                                                                                                // [0xa24001c] Native|Public|BlueprintCallable 
	// Function /Script/ValetRuntime.FortDagwoodVehicle.IsTireSkidding
	// bool IsTireSkidding(float MinSpeedForSkid, float AngleForSkid, float SpeedForPeelout, float SpeedForBraking);         // [0xa23fed8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ValetRuntime.FortDagwoodVehicle.IsOnLandscape
	// bool IsOnLandscape();                                                                                                 // [0xa23fec0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ValetRuntime.FortDagwoodVehicle.IsNativeBPTickEnabled
	// bool IsNativeBPTickEnabled();                                                                                         // [0x331049c] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ValetRuntime.FortDagwoodVehicle.HandleCurrentPlaylistLoaded
	// void HandleCurrentPlaylistLoaded(FName PlaylistName, FGameplayTagContainer& PlaylistContextTags);                     // [0x3917858] Final|Native|Protected|HasOutParms 
	// Function /Script/ValetRuntime.FortDagwoodVehicle.GetTireSurface
	// ETireSurfaces GetTireSurface(EVehicleWheelLocations TireIndex);                                                       // [0xa23fd28] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ValetRuntime.FortDagwoodVehicle.GetTireHealthPercent
	// float GetTireHealthPercent(EVehicleWheelLocations TireIndex);                                                         // [0xa23fc90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ValetRuntime.FortDagwoodVehicle.GetMiddleAxleForwardAdjust
	// float GetMiddleAxleForwardAdjust();                                                                                   // [0xa23fb24] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ValetRuntime.FortDagwoodVehicle.GetCurrentDagwoodRuntimeProperties
	// FDagwoodRuntimeModifiers GetCurrentDagwoodRuntimeProperties();                                                        // [0xa23fb08] Final|Native|Public|BlueprintCallable 
	// Function /Script/ValetRuntime.FortDagwoodVehicle.GetBumpiness
	// float GetBumpiness();                                                                                                 // [0xa23faf0] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ValetRuntime.FortDagwoodVehicle.ForwardOrReverseInputPressed
	// bool ForwardOrReverseInputPressed();                                                                                  // [0xa23facc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ValetRuntime.FortDagwoodVehicle.CleanupLoopingPooledFX
	// void CleanupLoopingPooledFX();                                                                                        // [0x926a1a4] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/ValetRuntime.FortDagwoodVehicle.ApplyRuntimeModifiers
	// void ApplyRuntimeModifiers();                                                                                         // [0xa23f9b8] Final|Native|Private 
	// Function /Script/ValetRuntime.FortDagwoodVehicle.AddRuntimeGearsInfoOnServer
	// void AddRuntimeGearsInfoOnServer(FRuntimeGearInfo& GearInfo);                                                         // [0xa23f924] Final|Native|Protected|HasOutParms|BlueprintCallable 
};

/// Class /Script/ValetRuntime.FortDagwoodVehicleAnimInstance
/// Size: 0x0060 (0x000620 - 0x000680)
class UFortDagwoodVehicleAnimInstance : public UFortVehicleAnimInstance
{ 
public:
	class AFortDagwoodVehicle*                         Dagwood;                                                    // 0x0618   (0x0008)  
	FVector                                            GlassScale_FR;                                              // 0x0620   (0x0018)  
	FVector                                            GlassScale_FL;                                              // 0x0638   (0x0018)  
	FVector                                            GlassScale_BR;                                              // 0x0650   (0x0018)  
	FVector                                            GlassScale_BL;                                              // 0x0668   (0x0018)  
};

/// Class /Script/ValetRuntime.FortDagwoodVehicleConfigs
/// Size: 0x0240 (0x000948 - 0x000B88)
class UFortDagwoodVehicleConfigs : public UFortPhysicsVehicleConfigs
{ 
public:
	float                                              BoostMinPushForce;                                          // 0x0948   (0x0004)  
	float                                              BoostTopSpeedForceMultiplier;                               // 0x094C   (0x0004)  
	float                                              BoostTopSpeedMultiplier;                                    // 0x0950   (0x0004)  
	float                                              BoostWaterMultiplier;                                       // 0x0954   (0x0004)  
	float                                              VehiclePowerSlideFrontMultiplier;                           // 0x0958   (0x0004)  
	float                                              VehiclePowerSlideRearMultiplier;                            // 0x095C   (0x0004)  
	float                                              IceVehiclePowerSlideFrontMultiplier;                        // 0x0960   (0x0004)  
	float                                              IceVehiclePowerSlideRearMultiplier;                         // 0x0964   (0x0004)  
	float                                              MudVehiclePowerSlideFrontMultiplier;                        // 0x0968   (0x0004)  
	float                                              MudVehiclePowerSlideRearMultiplier;                         // 0x096C   (0x0004)  
	bool                                               bUseAccelerationLean;                                       // 0x0970   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0971   (0x0003)  MISSED
	float                                              HandbrakeGripAngle;                                         // 0x0974   (0x0004)  
	float                                              HandbrakeGripAngleRecovery;                                 // 0x0978   (0x0004)  
	float                                              HandbrakeSpeedForGripLoss;                                  // 0x097C   (0x0004)  
	float                                              MinSlipDuration;                                            // 0x0980   (0x0004)  
	float                                              HandbrakeLateralFriction;                                   // 0x0984   (0x0004)  
	float                                              HandbrakeSteeringMultiplier;                                // 0x0988   (0x0004)  
	float                                              HandbrakeFrictionDampFactor;                                // 0x098C   (0x0004)  
	float                                              RestoreTractionDampFactor;                                  // 0x0990   (0x0004)  
	float                                              HandBrakeForce;                                             // 0x0994   (0x0004)  
	float                                              HandbrakeForceNoAccel;                                      // 0x0998   (0x0004)  
	bool                                               bUseHandbrakeToDrift;                                       // 0x099C   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x099D   (0x0003)  MISSED
	float                                              DriftMinSpeedSteeringAngle;                                 // 0x09A0   (0x0004)  
	float                                              DriftMaxSpeedSteeringAngle;                                 // 0x09A4   (0x0004)  
	float                                              DriftFrontLateralFrictionMultiplier;                        // 0x09A8   (0x0004)  
	float                                              DriftRearLateralFrictionMultiplier;                         // 0x09AC   (0x0004)  
	float                                              BoostSteeringMultiplier;                                    // 0x09B0   (0x0004)  
	float                                              DirtRoadTopSpeedMultiplier;                                 // 0x09B4   (0x0004)  
	float                                              DirtRoadFrontLateralFriction;                               // 0x09B8   (0x0004)  
	float                                              DirtRoadRearLateralFriction;                                // 0x09BC   (0x0004)  
	float                                              DirtRoadAccelForceMultiplier;                               // 0x09C0   (0x0004)  
	float                                              OffRoadTopSpeedMultiplier;                                  // 0x09C4   (0x0004)  
	float                                              OffRoadFrontLateralFriction;                                // 0x09C8   (0x0004)  
	float                                              OffRoadRearLateralFriction;                                 // 0x09CC   (0x0004)  
	float                                              OffRoadPushForceMultiplier;                                 // 0x09D0   (0x0004)  
	float                                              OffroadDamageImpactForceMin;                                // 0x09D4   (0x0004)  
	float                                              OffroadDamageImpactForceMax;                                // 0x09D8   (0x0004)  
	float                                              OffroadImpactDamageMin;                                     // 0x09DC   (0x0004)  
	float                                              OffroadImpactDamageMax;                                     // 0x09E0   (0x0004)  
	float                                              MinSpeedForOffroadHandling;                                 // 0x09E4   (0x0004)  
	float                                              SnowFrontLateralFriction;                                   // 0x09E8   (0x0004)  
	float                                              SnowRearLateralFriction;                                    // 0x09EC   (0x0004)  
	float                                              IceFrontLateralFriction;                                    // 0x09F0   (0x0004)  
	float                                              IceRearLateralFriction;                                     // 0x09F4   (0x0004)  
	float                                              MudFrontLateralFriction;                                    // 0x09F8   (0x0004)  
	float                                              MudRearLateralFriction;                                     // 0x09FC   (0x0004)  
	float                                              IcePushForceMultiplier;                                     // 0x0A00   (0x0004)  
	float                                              IceBrakeForceMultiplier;                                    // 0x0A04   (0x0004)  
	float                                              FireHealthPercentThreshold;                                 // 0x0A08   (0x0004)  
	float                                              OffroadRumbleIntensity;                                     // 0x0A0C   (0x0004)  
	float                                              DirtRoadRumbleIntensity;                                    // 0x0A10   (0x0004)  
	float                                              OffroadDamageScaleExponent;                                 // 0x0A14   (0x0004)  
	float                                              HardLandingThresholdMin;                                    // 0x0A18   (0x0004)  
	float                                              HardLandingThresholdMax;                                    // 0x0A1C   (0x0004)  
	float                                              HardLandingShakeZAmplitudeMin;                              // 0x0A20   (0x0004)  
	float                                              HardLandingShakeZAmplitudeMax;                              // 0x0A24   (0x0004)  
	float                                              SpeedLinesThreshold;                                        // 0x0A28   (0x0004)  
	float                                              PropDestructionImpulse;                                     // 0x0A2C   (0x0004)  
	float                                              DestructionAngle;                                           // 0x0A30   (0x0004)  
	float                                              UpNormalMinProtected;                                       // 0x0A34   (0x0004)  
	float                                              UpForwardMinProtected;                                      // 0x0A38   (0x0004)  
	float                                              NonCameraSteeringAngleMultiplier;                           // 0x0A3C   (0x0004)  
	float                                              CameraAssistStrengthMax;                                    // 0x0A40   (0x0004)  
	float                                              CameraAssistStrengthMin;                                    // 0x0A44   (0x0004)  
	float                                              CameraAssistStrengthRecovery;                               // 0x0A48   (0x0004)  
	float                                              CameraAssistInterpSpeed;                                    // 0x0A4C   (0x0004)  
	float                                              ReverseChangeDirectionBrakeForceMultiplier;                 // 0x0A50   (0x0004)  
	float                                              ReverseChangeDirectionSpeedThreshold;                       // 0x0A54   (0x0004)  
	float                                              DriftExitPushForce;                                         // 0x0A58   (0x0004)  
	float                                              DriftExitCatchupSpeed;                                      // 0x0A5C   (0x0004)  
	float                                              HandbrakeDurationRequiredForCatchup;                        // 0x0A60   (0x0004)  
	float                                              ImpactMagnitudeToEndCatchup;                                // 0x0A64   (0x0004)  
	float                                              PoppedTireSpringLength;                                     // 0x0A68   (0x0004)  
	float                                              PoppedTireSpringStiff;                                      // 0x0A6C   (0x0004)  
	float                                              PoppedTireSpringDamp;                                       // 0x0A70   (0x0004)  
	float                                              PoppedTireScrapeFrictionMultiplier;                         // 0x0A74   (0x0004)  
	float                                              RimScrapeFlipRollMagnitude;                                 // 0x0A78   (0x0004)  
	float                                              RimScrapeFlipPitchMagnitude;                                // 0x0A7C   (0x0004)  
	float                                              SpeedForRimFlip;                                            // 0x0A80   (0x0004)  
	float                                              HealthPercentForFlip;                                       // 0x0A84   (0x0004)  
	float                                              FlipYawDuration;                                            // 0x0A88   (0x0004)  
	float                                              FlipRollDuration;                                           // 0x0A8C   (0x0004)  
	float                                              FlipPitchDuration;                                          // 0x0A90   (0x0004)  
	float                                              FlipExplodeDuration_Yaw;                                    // 0x0A94   (0x0004)  
	float                                              FlipExplodeDuration_Pitch;                                  // 0x0A98   (0x0004)  
	float                                              FlipPushForceDuration_Yaw;                                  // 0x0A9C   (0x0004)  
	float                                              FlipPushForceDuration_Pitch;                                // 0x0AA0   (0x0004)  
	float                                              FlipPushForcMultiplier;                                     // 0x0AA4   (0x0004)  
	float                                              FlipPushForce_UpComponentPitch;                             // 0x0AA8   (0x0004)  
	float                                              FlipPushForce_UpComponentRoll;                              // 0x0AAC   (0x0004)  
	float                                              MinTimeInAirRequiredForExplodeLanding;                      // 0x0AB0   (0x0004)  
	float                                              FlipYawSpringStiff;                                         // 0x0AB4   (0x0004)  
	float                                              FlipYawSpringDamp;                                          // 0x0AB8   (0x0004)  
	float                                              FlipYawSpringMaxAccel;                                      // 0x0ABC   (0x0004)  
	float                                              HealthPercentForExplode;                                    // 0x0AC0   (0x0004)  
	float                                              FlipRecoveryTime;                                           // 0x0AC4   (0x0004)  
	float                                              FlipMaxDuration;                                            // 0x0AC8   (0x0004)  
	float                                              FlipWiggleDuration;                                         // 0x0ACC   (0x0004)  
	float                                              PoppedTireVeerDuration;                                     // 0x0AD0   (0x0004)  
	float                                              PoppedTireVeerSteeringAngle;                                // 0x0AD4   (0x0004)  
	float                                              FlipWiggleFrequency;                                        // 0x0AD8   (0x0004)  
	float                                              FlipWiggleSteeringAngle;                                    // 0x0ADC   (0x0004)  
	float                                              FlipYawAngleThreshold;                                      // 0x0AE0   (0x0004)  
	bool                                               bUsesBoost;                                                 // 0x0AE4   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0AE5   (0x0003)  MISSED
	float                                              RechargeableBoostRateOfUse;                                 // 0x0AE8   (0x0004)  
	float                                              RechargeableBoostRateOfRegen;                               // 0x0AEC   (0x0004)  
	float                                              BoostRateOfRegenMinMultiplier;                              // 0x0AF0   (0x0004)  
	float                                              BoostRateOfRegenMaxMultiplier;                              // 0x0AF4   (0x0004)  
	float                                              BoostRegenMaxMultiplyTime;                                  // 0x0AF8   (0x0004)  
	float                                              RechargeableBoostRequiredPercentToActivate;                 // 0x0AFC   (0x0004)  
	float                                              RechargeableBoostMaxPercent;                                // 0x0B00   (0x0004)  
	float                                              RechargeableBoostMinPercent;                                // 0x0B04   (0x0004)  
	float                                              AnalogDriftStickThreshold;                                  // 0x0B08   (0x0004)  
	FName                                              TireBootRightSocketName;                                    // 0x0B0C   (0x0004)  
	FName                                              TireBootLeftSocketName;                                     // 0x0B10   (0x0004)  
	float                                              TireBootRelativeDistance;                                   // 0x0B14   (0x0004)  
	float                                              BoostForceInAir;                                            // 0x0B18   (0x0004)  
	float                                              BoostAirMaxSpeed;                                           // 0x0B1C   (0x0004)  
	TArray<FName>                                      TireSocketNames;                                            // 0x0B20   (0x0010)  
	TArray<FName>                                      TireBoneNames;                                              // 0x0B30   (0x0010)  
	TArray<int32_t>                                    RearTireIndices;                                            // 0x0B40   (0x0010)  
	TArray<int32_t>                                    RightSideTires;                                             // 0x0B50   (0x0010)  
	TArray<int32_t>                                    FakeTireIndices;                                            // 0x0B60   (0x0010)  
	bool                                               bNoWheels;                                                  // 0x0B70   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x0B71   (0x0003)  MISSED
	float                                              NoWheelsSpringLenMult;                                      // 0x0B74   (0x0004)  
	TArray<FName>                                      NoWheelsBonesToHide;                                        // 0x0B78   (0x0010)  
};

/// Class /Script/ValetRuntime.FortDagwoodVehicleManager
/// Size: 0x0010 (0x0000A0 - 0x0000B0)
class UFortDagwoodVehicleManager : public UGameStateComponent
{ 
public:
	bool                                               bHasUpdatedPropReplacement;                                 // 0x00A0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00A1   (0x0003)  MISSED
	int32_t                                            NumVehiclesSpawnedWithTireMod;                              // 0x00A4   (0x0004)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x00A8   (0x0008)  MISSED


	/// Functions
	// Function /Script/ValetRuntime.FortDagwoodVehicleManager.UpdatePropReplacement
	// void UpdatePropReplacement();                                                                                         // [0x36203b0] Final|Native|Public  
	// Function /Script/ValetRuntime.FortDagwoodVehicleManager.OnVehicleSpawnsUpdated
	// void OnVehicleSpawnsUpdated(class UFortVehicleItemDefinition* VehicleItemDef, TArray<AActor*>& SpawnedVehicles, int32_t NewVehicleCount); // [0xa24038c] Final|Native|Public|HasOutParms 
	// Function /Script/ValetRuntime.FortDagwoodVehicleManager.OnVehicleSpawned
	// void OnVehicleSpawned(class AFortAthenaVehicle* Vehicle);                                                             // [0xa240310] Final|Native|Public  
	// Function /Script/ValetRuntime.FortDagwoodVehicleManager.CustomHandleActorStreamedInEditor
	// void CustomHandleActorStreamedInEditor(class AActor* SourceActor);                                                    // [0x6414600] Final|Native|Public  
};

/// Class /Script/ValetRuntime.FortValetAudioController
/// Size: 0x0150 (0x000290 - 0x0003E0)
class AFortValetAudioController : public AActor
{ 
public:
	SDK_UNDEFINED(16,11746) /* FMulticastInlineDelegate */ __um(OnEngineLoadChanged);                              // 0x0290   (0x0010)  
	SDK_UNDEFINED(16,11747) /* FMulticastInlineDelegate */ __um(OnShiftGearCompleted);                             // 0x02A0   (0x0010)  
	SDK_UNDEFINED(16,11748) /* FMulticastInlineDelegate */ __um(OnShiftGearDelegate);                              // 0x02B0   (0x0010)  
	float                                              RPMResetTime_Native;                                        // 0x02C0   (0x0004)  
	float                                              JitterAmount_Native;                                        // 0x02C4   (0x0004)  
	float                                              ShiftTimeThreshold_Native;                                  // 0x02C8   (0x0004)  
	float                                              TimeSinceShift_Native;                                      // 0x02CC   (0x0004)  
	float                                              EngineRPMInterp_Native;                                     // 0x02D0   (0x0004)  
	float                                              EngineRPMLinear_Native;                                     // 0x02D4   (0x0004)  
	float                                              MinRPMRange_Native;                                         // 0x02D8   (0x0004)  
	float                                              MaxRPMRange_Native;                                         // 0x02DC   (0x0004)  
	bool                                               bCurrentlyShifting_Native;                                  // 0x02E0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x02E1   (0x0003)  MISSED
	float                                              CurrentAccelRateGearModifier_Native;                        // 0x02E4   (0x0004)  
	float                                              CurrentAccelRate_Native;                                    // 0x02E8   (0x0004)  
	int32_t                                            CurrentGear_Native;                                         // 0x02EC   (0x0004)  
	int32_t                                            MaxGear_Native;                                             // 0x02F0   (0x0004)  
	float                                              DefaultAccelRateScalar_Native;                              // 0x02F4   (0x0004)  
	float                                              GearAttackInterpSpeed_Native;                               // 0x02F8   (0x0004)  
	float                                              GearReleaseInterpSpeed_Native;                              // 0x02FC   (0x0004)  
	float                                              AccelRateScalarFirstGear_Native;                            // 0x0300   (0x0004)  
	float                                              AccelRateScalarMinGear_Native;                              // 0x0304   (0x0004)  
	float                                              AccelRateScalarMaxGear_Native;                              // 0x0308   (0x0004)  
	float                                              ShiftToRPMStart_Native;                                     // 0x030C   (0x0004)  
	float                                              ShiftToRPMEnd_Native;                                       // 0x0310   (0x0004)  
	float                                              ShiftFromRPMStart_Native;                                   // 0x0314   (0x0004)  
	float                                              ShiftFromRPMEnd_Native;                                     // 0x0318   (0x0004)  
	float                                              MaxRPMSawtoothDecrement_Native;                             // 0x031C   (0x0004)  
	float                                              MaxRPMSawtoothRepeatTime_Native;                            // 0x0320   (0x0004)  
	float                                              DownhillAccelScalar_Native;                                 // 0x0324   (0x0004)  
	float                                              UphillAccelScalar_Native;                                   // 0x0328   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x032C   (0x0004)  MISSED
	class UCurveFloat*                                 RPMFloatCurveMapping;                                       // 0x0330   (0x0008)  
	float                                              NormalizedSpeed_Native;                                     // 0x0338   (0x0004)  
	float                                              SuspValue_Native;                                           // 0x033C   (0x0004)  
	bool                                               bIsHandbraking_Native;                                      // 0x0340   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0341   (0x0003)  MISSED
	float                                              MotoSynthVolume_Native;                                     // 0x0344   (0x0004)  
	float                                              MotoSynthInitialFadeInTime_Native;                          // 0x0348   (0x0004)  
	unsigned char                                      UnknownData03_5[0x4];                                       // 0x034C   (0x0004)  MISSED
	float                                              MotoSynthLogRPM_Native;                                     // 0x0350   (0x0004)  
	bool                                               bHasFuel_Native;                                            // 0x0354   (0x0001)  
	bool                                               bIsInWater_Native;                                          // 0x0355   (0x0001)  
	bool                                               bLocalPlayerInVehicle_Native;                               // 0x0356   (0x0001)  
	unsigned char                                      UnknownData04_5[0x1];                                       // 0x0357   (0x0001)  MISSED
	float                                              TimeLocalPlayerEnteredVehicle_Native;                       // 0x0358   (0x0004)  
	bool                                               bAttemptingDirectionChange_Native;                          // 0x035C   (0x0001)  
	bool                                               bPreDestroy_Native;                                         // 0x035D   (0x0001)  
	bool                                               bEngineLoad_Native;                                         // 0x035E   (0x0001)  
	unsigned char                                      UnknownData05_5[0x1];                                       // 0x035F   (0x0001)  MISSED
	float                                              SkidAmount_Native;                                          // 0x0360   (0x0004)  
	float                                              TimeSinceAwoken_Native;                                     // 0x0364   (0x0004)  
	bool                                               bDestroyed_Native;                                          // 0x0368   (0x0001)  
	unsigned char                                      UnknownData06_5[0x3];                                       // 0x0369   (0x0003)  MISSED
	float                                              TimeSinceSurfaceChange_Native;                              // 0x036C   (0x0004)  
	class USoundBase*                                  OnInitialSuspensionSound;                                   // 0x0370   (0x0008)  
	float                                              AngleForSkidding_Native;                                    // 0x0378   (0x0004)  
	float                                              SpringCompressionMultiplier;                                // 0x037C   (0x0004)  
	float                                              MotoSynthMaxVolume_Native;                                  // 0x0380   (0x0004)  
	unsigned char                                      UnknownData07_5[0x4];                                       // 0x0384   (0x0004)  MISSED
	FVector2D                                          MotoSynthTimeInVehicleTimeRange;                            // 0x0388   (0x0010)  
	FVector2D                                          MotoSynthTimeInVehicleVolumeRange;                          // 0x0398   (0x0010)  
	SDK_UNDEFINED(8,11749) /* TWeakObjectPtr<AFortDagwoodVehicle*> */ __um(ValetVehicle);                          // 0x03A8   (0x0008)  
	class UFortLayeredAudioComponent*                  Engine_Native;                                              // 0x03B0   (0x0008)  
	class UAudioComponent*                             BoostAudioComponent_Native;                                 // 0x03B8   (0x0008)  
	class USynthComponentMoto*                         SynthComponentMoto_Native;                                  // 0x03C0   (0x0008)  
	class UFortCollisionAudioComponent*                SuspensionCollisionComponent_Native;                        // 0x03C8   (0x0008)  
	unsigned char                                      UnknownData08_6[0x10];                                      // 0x03D0   (0x0010)  MISSED


	/// Functions
	// Function /Script/ValetRuntime.FortValetAudioController.Update_Native
	// void Update_Native();                                                                                                 // [0xa240cd4] Final|Native|Public|BlueprintCallable 
	// Function /Script/ValetRuntime.FortValetAudioController.OnTireModApplied
	// void OnTireModApplied(FTireInfo& AppliedTireMod);                                                                     // [0x18a39e4] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/ValetRuntime.FortValetAudioController.OnSuspensionCollision_Native
	// void OnSuspensionCollision_Native(bool& OutResult, float& OutMagnitude);                                              // [0xa240238] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ValetRuntime.FortValetAudioController.CacheValetVehicle
	// void CacheValetVehicle(class AFortDagwoodVehicle* InVehicle);                                                         // [0xa23f9cc] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/ValetRuntime.FortValetGameFeatureData
/// Size: 0x0078 (0x000530 - 0x0005A8)
class UFortValetGameFeatureData : public UFortGameFeatureData
{ 
public:
	SDK_UNDEFINED(80,11750) /* TMap<TWeakObjectPtr<UClass*>, FVehiclePropReplacementData> */ __um(PropReplacements); // 0x0530   (0x0050)  
	SDK_UNDEFINED(32,11751) /* TWeakObjectPtr<UClass*> */ __um(VehicleSpawnerClass);                               // 0x0580   (0x0020)  
	ESpawnActorCollisionHandlingMethod                 SpawnActorCollisionHandlingMethod;                          // 0x05A0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x05A1   (0x0007)  MISSED
};

/// Struct /Script/ValetRuntime.NetworkPhysicsStateNetSerializerState
/// Size: 0x0080 (0x000000 - 0x000080)
struct FNetworkPhysicsStateNetSerializerState
{ 
	FVector                                            Location;                                                   // 0x0000   (0x0018)  
	FVector                                            LinearVelocity;                                             // 0x0018   (0x0018)  
	FVector                                            AngularVelocity;                                            // 0x0030   (0x0018)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0048   (0x0008)  MISSED
	FQuat                                              Rotation;                                                   // 0x0050   (0x0020)  
	int32_t                                            NetworkHandle;                                              // 0x0070   (0x0004)  
	int32_t                                            Frame;                                                      // 0x0074   (0x0004)  
	char                                               ObjectState;                                                // 0x0078   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0079   (0x0007)  MISSED
};

/// Struct /Script/ValetRuntime.NetworkPhysicsStateNetSerializerDebugData
/// Size: 0x0060 (0x000000 - 0x000060)
struct FNetworkPhysicsStateNetSerializerDebugData
{ 
	FVector                                            Force;                                                      // 0x0000   (0x0018)  
	FVector                                            Torque;                                                     // 0x0018   (0x0018)  
	FVector                                            LinearImpulse;                                              // 0x0030   (0x0018)  
	FVector                                            AngularImpulse;                                             // 0x0048   (0x0018)  
};

/// Struct /Script/ValetRuntime.NetworkPhysicsStateNetSerializerDebugState
/// Size: 0x0120 (0x000000 - 0x000120)
struct FNetworkPhysicsStateNetSerializerDebugState
{ 
	FNetworkPhysicsStateNetSerializerDebugData         DebugData;                                                  // 0x0000   (0x0120)  
};

/// Struct /Script/ValetRuntime.NetworkPhysicsStateNetSerializerConfig
/// Size: 0x0000 (0x000010 - 0x000010)
struct FNetworkPhysicsStateNetSerializerConfig : FNetSerializerConfig
{ 
};

/// Struct /Script/ValetRuntime.VehicleAttachment
/// Size: 0x0010 (0x000000 - 0x000010)
struct FVehicleAttachment
{ 
	FName                                              ModName;                                                    // 0x0000   (0x0004)  
	FName                                              SocketName;                                                 // 0x0004   (0x0004)  
	class USkeletalMesh*                               SkeletalMesh;                                               // 0x0008   (0x0008)  
};

/// Struct /Script/ValetRuntime.DagwoodActionDefForUI
/// Size: 0x0010 (0x000000 - 0x000010)
struct FDagwoodActionDefForUI
{ 
	TArray<FActionDefForUI>                            ActionDefForUI;                                             // 0x0000   (0x0010)  
};

/// Struct /Script/ValetRuntime.TireSimulationRuntimeData
/// Size: 0x0020 (0x000000 - 0x000020)
struct FTireSimulationRuntimeData
{ 
	FRuntimeTerrainHandlingInfo                        HandlingInfo;                                               // 0x0000   (0x0014)  
	float                                              PoppedTireSpringLength;                                     // 0x0014   (0x0004)  
	float                                              PoppedTireSpringStiff;                                      // 0x0018   (0x0004)  
	float                                              PoppedTireSpringDamp;                                       // 0x001C   (0x0004)  
};

/// Struct /Script/ValetRuntime.ValetUpdateContext
/// Size: 0x0018 (0x000000 - 0x000018)
struct FValetUpdateContext
{ 
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x0000   (0x0018)  MISSED
};

/// Struct /Script/ValetRuntime.VehiclePropReplacementData
/// Size: 0x0050 (0x000000 - 0x000050)
struct FVehiclePropReplacementData
{ 
	SDK_UNDEFINED(32,11752) /* TWeakObjectPtr<UFortVehicleItemDefinition*> */ __um(FortVehicleItemDefinition);     // 0x0000   (0x0020)  
	FVector                                            TransOffset;                                                // 0x0020   (0x0018)  
	FRotator                                           RotOffset;                                                  // 0x0038   (0x0018)  
};

