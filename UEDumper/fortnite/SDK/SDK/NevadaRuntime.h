
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
/// dependency: Niagara

/// Enum /Script/NevadaRuntime.ETractorBeamState
/// Size: 0x04
enum class ETractorBeamState : uint8_t
{
	TBS_Inactive                                                                     = 0,
	TBS_Charging                                                                     = 1,
	TBS_Active                                                                       = 2,
	TBS_MAX                                                                          = 3
};

/// Enum /Script/NevadaRuntime.ENevadaFlightStates
/// Size: 0x09
enum class ENevadaFlightStates : uint8_t
{
	ENevadaFlightStates__FLIGHT                                                      = 0,
	ENevadaFlightStates__CRASHING                                                    = 1,
	ENevadaFlightStates__CRASHED                                                     = 2,
	ENevadaFlightStates__REBOOTING                                                   = 3,
	ENevadaFlightStates__LANDING                                                     = 4,
	ENevadaFlightStates__LANDED                                                      = 5,
	ENevadaFlightStates__IDLE                                                        = 6,
	ENevadaFlightStates__NONE                                                        = 7,
	ENevadaFlightStates__ENevadaFlightStates_MAX                                     = 8
};

/// Class /Script/NevadaRuntime.FortNevadaVehicleAnimInstance
/// Size: 0x00E0 (0x000620 - 0x000700)
class UFortNevadaVehicleAnimInstance : public UFortVehicleAnimInstance
{ 
public:
	class AFortNevadaVehicle*                          NevadaVehicle;                                              // 0x0618   (0x0008)  
	bool                                               bTractorBeam_IsAttached;                                    // 0x0620   (0x0001)  
	bool                                               bTractorBeam_IsCharging;                                    // 0x0621   (0x0001)  
	bool                                               bTractorBeam_IsActive;                                      // 0x0622   (0x0001)  
	bool                                               bTractorBeam_IsInactive;                                    // 0x0623   (0x0001)  
	bool                                               bTractorBeam_IsOn;                                          // 0x0624   (0x0001)  
	bool                                               bTractorBeam_HasTarget;                                     // 0x0625   (0x0001)  
	bool                                               bTractorBeam_ShouldApplyCustomAO;                           // 0x0626   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x0627   (0x0001)  MISSED
	float                                              TractorBeam_LookAtPitch;                                    // 0x0628   (0x0004)  
	float                                              TractorBeam_LookAtYaw;                                      // 0x062C   (0x0004)  
	float                                              LeanLeftRight;                                              // 0x0630   (0x0004)  
	float                                              LeanForwardBackward;                                        // 0x0634   (0x0004)  
	float                                              LeanValue;                                                  // 0x0638   (0x0004)  
	float                                              PreviousLeanValue;                                          // 0x063C   (0x0004)  
	float                                              VelocityZValue;                                             // 0x0640   (0x0004)  
	float                                              LeanDelta;                                                  // 0x0644   (0x0004)  
	bool                                               bTurnAgain;                                                 // 0x0648   (0x0001)  
	bool                                               bHadDriver;                                                 // 0x0649   (0x0001)  
	bool                                               bJustGotDriver;                                             // 0x064A   (0x0001)  
	bool                                               bJustLostDriver;                                            // 0x064B   (0x0001)  
	bool                                               bWasBoosting;                                               // 0x064C   (0x0001)  
	bool                                               bIsBoosting;                                                // 0x064D   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x064E   (0x0002)  MISSED
	int32_t                                            PreviousBoostCount;                                         // 0x0650   (0x0004)  
	int32_t                                            BoostCount;                                                 // 0x0654   (0x0004)  
	bool                                               bIsBoostingAgain;                                           // 0x0658   (0x0001)  
	bool                                               bIsMoving;                                                  // 0x0659   (0x0001)  
	unsigned char                                      UnknownData02_5[0x2];                                       // 0x065A   (0x0002)  MISSED
	float                                              WingsPlayRate;                                              // 0x065C   (0x0004)  
	float                                              TractorBeamAlpha;                                           // 0x0660   (0x0004)  
	float                                              AimPitch;                                                   // 0x0664   (0x0004)  
	float                                              AimYaw;                                                     // 0x0668   (0x0004)  
	bool                                               bIsFiringCannon;                                            // 0x066C   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x066D   (0x0003)  MISSED
	float                                              DistanceFromGround;                                         // 0x0670   (0x0004)  
	bool                                               bIsLanding;                                                 // 0x0674   (0x0001)  
	bool                                               bHasLanded;                                                 // 0x0675   (0x0001)  
	unsigned char                                      UnknownData04_5[0x2];                                       // 0x0676   (0x0002)  MISSED
	float                                              LandingAlpha;                                               // 0x0678   (0x0004)  
	bool                                               bNotLandingMode;                                            // 0x067C   (0x0001)  
	bool                                               bHadBattery;                                                // 0x067D   (0x0001)  
	bool                                               bOutOfBattery;                                              // 0x067E   (0x0001)  
	bool                                               bJustGotBattery;                                            // 0x067F   (0x0001)  
	bool                                               bLaunchToDepart;                                            // 0x0680   (0x0001)  
	bool                                               bLaunchToIdle;                                              // 0x0681   (0x0001)  
	bool                                               bIsPartsLanding;                                            // 0x0682   (0x0001)  
	unsigned char                                      UnknownData05_5[0x1];                                       // 0x0683   (0x0001)  MISSED
	FName                                              TractorBeamSocketName;                                      // 0x0684   (0x0004)  
	FName                                              TractorBeamAimCurveName;                                    // 0x0688   (0x0004)  
	FName                                              NevadaVehicleInterruptName;                                 // 0x068C   (0x0004)  
	FName                                              LandingTraceRightName;                                      // 0x0690   (0x0004)  
	FName                                              LandingTraceLeftName;                                       // 0x0694   (0x0004)  
	float                                              MaxLeanDeltaInterruptMagnitude;                             // 0x0698   (0x0004)  
	float                                              MinForwardSpeedToBeMoving;                                  // 0x069C   (0x0004)  
	float                                              MinForwardSpeedToPlayWings;                                 // 0x06A0   (0x0004)  
	float                                              MinWingsPlayRate;                                           // 0x06A4   (0x0004)  
	float                                              MaxWingsPlayRate;                                           // 0x06A8   (0x0004)  
	float                                              WingsPlayRateInterpSpeed;                                   // 0x06AC   (0x0004)  
	SDK_UNDEFINED(32,15097) /* TWeakObjectPtr<UAnimMontage*> */ __um(CannonFiringMontage);                         // 0x06B0   (0x0020)  
	float                                              LandingGearTraceLength;                                     // 0x06D0   (0x0004)  
	unsigned char                                      UnknownData06_6[0x2C];                                      // 0x06D4   (0x002C)  MISSED
};

/// Class /Script/NevadaRuntime.FortPlayerAnimInstance_NevadaDriver
/// Size: 0x0180 (0x001860 - 0x0019E0)
class UFortPlayerAnimInstance_NevadaDriver : public UFortPlayerAnimInstance_OctopusDriver
{ 
public:
	class AFortNevadaVehicle*                          NevadaVehicle;                                              // 0x1858   (0x0008)  
	float                                              AnimLeftRight;                                              // 0x1860   (0x0004)  
	float                                              AnimForwardBackward;                                        // 0x1864   (0x0004)  
	FVector                                            RootAttachmentLoc;                                          // 0x1868   (0x0018)  
	FRotator                                           RootAttachmentRot;                                          // 0x1880   (0x0018)  
	int32_t                                            BoostCount;                                                 // 0x1898   (0x0004)  
	int32_t                                            PreviousBoostCount;                                         // 0x189C   (0x0004)  
	bool                                               bIsBoostingAgain;                                           // 0x18A0   (0x0001)  
	bool                                               bIsMoving;                                                  // 0x18A1   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x18A2   (0x0002)  MISSED
	float                                              MinVehicleVelocityToBeMoving;                               // 0x18A4   (0x0004)  
	FName                                              DriverSocketName;                                           // 0x18A8   (0x0004)  
	FName                                              RightHandAttachmentSocketName;                              // 0x18AC   (0x0004)  
	FName                                              LeftHandAttachmentSocketName;                               // 0x18B0   (0x0004)  
	FName                                              RightFootAttachmentSocketName;                              // 0x18B4   (0x0004)  
	FName                                              LeftFootAttachementSocketName;                              // 0x18B8   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x18BC   (0x0004)  MISSED
	FRotator                                           RightHandRotationOffset;                                    // 0x18C0   (0x0018)  
	FRotator                                           LeftHandRotationOffset;                                     // 0x18D8   (0x0018)  
	FRotator                                           RightFootRotationOffset;                                    // 0x18F0   (0x0018)  
	FRotator                                           LeftFootRotationOffset;                                     // 0x1908   (0x0018)  
	FVector                                            RootAttachmentOffset;                                       // 0x1920   (0x0018)  
	unsigned char                                      UnknownData02_6[0xA8];                                      // 0x1938   (0x00A8)  MISSED
};

/// Class /Script/NevadaRuntime.FortCameraMode_Nevada
/// Size: 0x0070 (0x001CC0 - 0x001D30)
class UFortCameraMode_Nevada : public UFortCameraMode_AthenaVehicle
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x1CB8   (0x0028)  MISSED
	FVector                                            TractorBeamCameraOffset;                                    // 0x1CE0   (0x0018)  
	float                                              TractorBeamCameraLerpTime;                                  // 0x1CF8   (0x0004)  
	float                                              TractorBeamCameraExtraPitch;                                // 0x1CFC   (0x0004)  
	float                                              TractorBeamInactiveCameraExtraPitch;                        // 0x1D00   (0x0004)  
	float                                              TractorBeamCameraPositionResetDelay;                        // 0x1D04   (0x0004)  
	float                                              MinPitchForOffset;                                          // 0x1D08   (0x0004)  
	float                                              MaxPitchForOffset;                                          // 0x1D0C   (0x0004)  
	FVector                                            ExtraOffset;                                                // 0x1D10   (0x0018)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x1D28   (0x0008)  MISSED
};

/// Class /Script/NevadaRuntime.FortNevadaAudioController
/// Size: 0x00C8 (0x000290 - 0x000358)
class AFortNevadaAudioController : public AActor
{ 
public:
	FVector2D                                          SpeedRangeMap;                                              // 0x0290   (0x0010)  
	FVector2D                                          TurningRangeMap;                                            // 0x02A0   (0x0010)  
	FVector2D                                          AcceleratingRangeMap;                                       // 0x02B0   (0x0010)  
	FVector2D                                          BrakingRangeMap;                                            // 0x02C0   (0x0010)  
	FVector2D                                          PassByRangeMap;                                             // 0x02D0   (0x0010)  
	FVector2D                                          LFORangeMap;                                                // 0x02E0   (0x0010)  
	class AFortNevadaVehicle*                          Vehicle;                                                    // 0x02F0   (0x0008)  
	class UFortLayeredAudioComponent*                  LayeredAudioComponent;                                      // 0x02F8   (0x0008)  
	float                                              SpeedParamValue;                                            // 0x0300   (0x0004)  
	float                                              SpeedParamValuePrev;                                        // 0x0304   (0x0004)  
	float                                              AcceleratingParamValue;                                     // 0x0308   (0x0004)  
	float                                              BrakingParamValue;                                          // 0x030C   (0x0004)  
	FVector                                            ForwardVector;                                              // 0x0310   (0x0018)  
	FVector                                            ForwardVectorPrev;                                          // 0x0328   (0x0018)  
	float                                              TurningParamValue;                                          // 0x0340   (0x0004)  
	float                                              PassByParamValue;                                           // 0x0344   (0x0004)  
	float                                              LocallyControlledParamValue;                                // 0x0348   (0x0004)  
	float                                              LFOParamValue;                                              // 0x034C   (0x0004)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0350   (0x0008)  MISSED


	/// Functions
	// Function /Script/NevadaRuntime.FortNevadaAudioController.Update
	// void Update();                                                                                                        // [0xac60b58] Final|Native|Public  
	// Function /Script/NevadaRuntime.FortNevadaAudioController.Init
	// void Init(class AFortNevadaVehicle* InVehicle);                                                                       // [0xac60190] Final|Native|Public  
	// Function /Script/NevadaRuntime.FortNevadaAudioController.GetVehicleActor
	// class AFortNevadaVehicle* GetVehicleActor();                                                                          // [0x9fb9070] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/NevadaRuntime.FortNevadaAudioController.CacheReferences
	// void CacheReferences(class UFortLayeredAudioComponent* InLayeredAudioComponent);                                      // [0xac5fe98] Final|Native|Public|BlueprintCallable 
	// Function /Script/NevadaRuntime.FortNevadaAudioController.BP_Update
	// void BP_Update();                                                                                                     // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/NevadaRuntime.FortNevadaAudioController.BP_Init
	// void BP_Init();                                                                                                       // [0x18a39e4] Event|Public|BlueprintEvent 
};

/// Struct /Script/NevadaRuntime.NevadaState
/// Size: 0x0014 (0x000000 - 0x000014)
struct FNevadaState
{ 
	ENevadaFlightStates                                CurrentStatus;                                              // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	int32_t                                            LivesRemaining;                                             // 0x0004   (0x0004)  
	bool                                               bHijackingActive;                                           // 0x0008   (0x0001)  
	bool                                               bPilotBubbleCollisionEnabled;                               // 0x0009   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x000A   (0x0002)  MISSED
	float                                              CurrentBatteryCharge;                                       // 0x000C   (0x0004)  
	bool                                               bCannonEnabled;                                             // 0x0010   (0x0001)  
	bool                                               bTractorBeamEnabled;                                        // 0x0011   (0x0001)  
	unsigned char                                      UnknownData02_6[0x2];                                       // 0x0012   (0x0002)  MISSED
};

/// Class /Script/NevadaRuntime.FortNevadaVehicle
/// Size: 0x0600 (0x001FA0 - 0x0025A0)
class AFortNevadaVehicle : public AFortAthenaSKVehicle
{ 
public:
	FNevadaState                                       ServerReplicatedState;                                      // 0x1FA0   (0x0014)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x1FB4   (0x0004)  MISSED
	class UFortNevadaVehicleConfigs*                   FortNevadaVehicleConfigs;                                   // 0x1FB8   (0x0008)  
	class UClass*                                      FortNevadaAudioControllerClass;                             // 0x1FC0   (0x0008)  
	class UChildActorComponent*                        AudioControllerActor;                                       // 0x1FC8   (0x0008)  
	class AFortNevadaAudioController*                  FortNevadaAudioController;                                  // 0x1FD0   (0x0008)  
	FVehicleGamepadLiftInputs                          LiftInputs;                                                 // 0x1FD8   (0x0008)  
	float                                              LastBatteryRegenTickTime;                                   // 0x1FE0   (0x0004)  
	bool                                               bBoostThrust;                                               // 0x1FE4   (0x0001)  
	bool                                               bBoostDrag;                                                 // 0x1FE5   (0x0001)  
	bool                                               bBoostInputReleased;                                        // 0x1FE6   (0x0001)  
	bool                                               bUseTractorBeamUprightForce;                                // 0x1FE7   (0x0001)  
	bool                                               bDeadBattery;                                               // 0x1FE8   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x1FE9   (0x0003)  MISSED
	float                                              TractorBeamExtraLengthForExtents;                           // 0x1FEC   (0x0004)  
	FVector                                            CrashingDesiredUp;                                          // 0x1FF0   (0x0018)  
	float                                              BoostStartTime;                                             // 0x2008   (0x0004)  
	float                                              BoostPitchAlpha;                                            // 0x200C   (0x0004)  
	float                                              BoostChargeProgress;                                        // 0x2010   (0x0004)  
	int32_t                                            BoostChargesAvailable;                                      // 0x2014   (0x0004)  
	FVector                                            CachedBoostMoveDir;                                         // 0x2018   (0x0018)  
	float                                              CurrentStateStartTime;                                      // 0x2030   (0x0004)  
	float                                              HeightAtLandingTime;                                        // 0x2034   (0x0004)  
	float                                              CrashingScrapingTime;                                       // 0x2038   (0x0004)  
	float                                              CrashingNotMovingTimer;                                     // 0x203C   (0x0004)  
	float                                              AltimeterTraceHitDistance;                                  // 0x2040   (0x0004)  
	float                                              TractorBeamAppliedForceMagnitude;                           // 0x2044   (0x0004)  
	float                                              AnimParamDriverSeatLeftRight;                               // 0x2048   (0x0004)  
	float                                              AnimParamDriverSeatForwardBack;                             // 0x204C   (0x0004)  
	bool                                               bForceNegativeLift;                                         // 0x2050   (0x0001)  
	bool                                               bForcePositiveLift;                                         // 0x2051   (0x0001)  
	bool                                               bInitialLift;                                               // 0x2052   (0x0001)  
	ENevadaFlightStates                                CurrentVehicleState;                                        // 0x2053   (0x0001)  
	unsigned char                                      UnknownData02_5[0x4C];                                      // 0x2054   (0x004C)  MISSED
	SDK_UNDEFINED(8,15098) /* TWeakObjectPtr<ALandscapeProxy*> */ __um(CachedLandscapeProxy);                      // 0x20A0   (0x0008)  
	class UClass*                                      PassengerCameraModeClass;                                   // 0x20A8   (0x0008)  
	bool                                               bTractorBeamChargeStarted;                                  // 0x20B0   (0x0001)  
	unsigned char                                      UnknownData03_5[0x7];                                       // 0x20B1   (0x0007)  MISSED
	FTowhookParams                                     TowhookParams;                                              // 0x20B8   (0x00D0)  
	class UClass*                                      AttachedPawnHiddenVehicle;                                  // 0x2188   (0x0008)  
	SDK_UNDEFINED(8,15099) /* TWeakObjectPtr<UPrimitiveComponent*> */ __um(TractorBeamAttachedPrimitive);          // 0x2190   (0x0008)  
	class AFortAthenaVehicle*                          SpawnedTractorBeamVictimVehicle;                            // 0x2198   (0x0008)  
	SDK_UNDEFINED(8,15100) /* TWeakObjectPtr<UPrimitiveComponent*> */ __um(PreviousTractorBeamAttachedPrimitive);  // 0x21A0   (0x0008)  
	TArray<class AActor*>                              TractorBeamTargetedActors;                                  // 0x21A8   (0x0010)  
	TArray<class AActor*>                              PreviouslyTargetedActors;                                   // 0x21B8   (0x0010)  
	class AActor*                                      TractorBeamAttachedActor;                                   // 0x21C8   (0x0008)  
	class AActor*                                      TractorBeamTargetedActor;                                   // 0x21D0   (0x0008)  
	FVector                                            TractorBeamTargetPosition;                                  // 0x21D8   (0x0018)  
	unsigned char                                      UnknownData04_5[0x1];                                       // 0x21F0   (0x0001)  MISSED
	bool                                               bBeamButtonReleased;                                        // 0x21F1   (0x0001)  
	unsigned char                                      UnknownData05_5[0x6];                                       // 0x21F2   (0x0006)  MISSED
	SDK_UNDEFINED(16,15101) /* TArray<TEnumAsByte<EObjectTypeQuery>> */ __um(TractorBeamObjectsTypes);             // 0x21F8   (0x0010)  
	FGameplayTagContainer                              DisallowedBeamTags;                                         // 0x2208   (0x0020)  
	FGameplayTagContainer                              AlwaysAllowedBeamTags;                                      // 0x2228   (0x0020)  
	unsigned char                                      UnknownData06_5[0x98];                                      // 0x2248   (0x0098)  MISSED
	class UNiagaraSystem*                              TractorBeamFX_Unattached;                                   // 0x22E0   (0x0008)  
	class UNiagaraSystem*                              TractorBeamFX_Attached;                                     // 0x22E8   (0x0008)  
	class UNiagaraComponent*                           BeamPSC;                                                    // 0x22F0   (0x0008)  
	unsigned char                                      UnknownData07_5[0x50];                                      // 0x22F8   (0x0050)  MISSED
	SDK_UNDEFINED(1,15102) /* TEnumAsByte<ETractorBeamState> */ __um(TractorBeamState);                            // 0x2348   (0x0001)  
	unsigned char                                      UnknownData08_5[0x27];                                      // 0x2349   (0x0027)  MISSED
	float                                              TractorBeamDeactivationTimestamp;                           // 0x2370   (0x0004)  
	float                                              TractorBeamDisruptedTimestamp;                              // 0x2374   (0x0004)  
	unsigned char                                      UnknownData09_5[0x80];                                      // 0x2378   (0x0080)  MISSED
	float                                              CockpitHealth;                                              // 0x23F8   (0x0004)  
	float                                              Native_CockpitEnabled;                                      // 0x23FC   (0x0004)  
	float                                              LastCockpitHealthTickTime;                                  // 0x2400   (0x0004)  
	float                                              LastCockpitDamageTime;                                      // 0x2404   (0x0004)  
	float                                              CockpitDissolveStartTime;                                   // 0x2408   (0x0004)  
	unsigned char                                      UnknownData10_5[0x4];                                       // 0x240C   (0x0004)  MISSED
	FScalableFloat                                     CockpitMaxHealth;                                           // 0x2410   (0x0028)  
	FScalableFloat                                     CockpitHealthTickRate;                                      // 0x2438   (0x0028)  
	FScalableFloat                                     CockpitHealthPerTick;                                       // 0x2460   (0x0028)  
	FScalableFloat                                     CockpitRegenDelay;                                          // 0x2488   (0x0028)  
	class UCurveFloat*                                 CockpitHitMaterialWobble;                                   // 0x24B0   (0x0008)  
	float                                              LastDamageAlpha;                                            // 0x24B8   (0x0004)  
	bool                                               bDissolvingCockpit;                                         // 0x24BC   (0x0001)  
	bool                                               bRestoringCockpit;                                          // 0x24BD   (0x0001)  
	bool                                               bCockpitWobble;                                             // 0x24BE   (0x0001)  
	unsigned char                                      UnknownData11_5[0x1];                                       // 0x24BF   (0x0001)  MISSED
	class UStaticMeshComponent*                        NativeComp_ShieldMesh;                                      // 0x24C0   (0x0008)  
	class UMaterialInstanceDynamic*                    Native_CockpitMaterial;                                     // 0x24C8   (0x0008)  
	class UMaterialInstanceDynamic*                    Native_EnergyRingMatInstance;                               // 0x24D0   (0x0008)  
	class UMaterialInstanceDynamic*                    Native_EnergyFieldMatInstance;                              // 0x24D8   (0x0008)  
	class UAudioComponent*                             NativeComp_DamageStateLastLife;                             // 0x24E0   (0x0008)  
	class UAudioComponent*                             NativeComp_DamageState;                                     // 0x24E8   (0x0008)  
	FVector                                            Native_LastHitLocation;                                     // 0x24F0   (0x0018)  
	FVector                                            Native_LastHitNormal;                                       // 0x2508   (0x0018)  
	class UNiagaraComponent*                           NativeComp_DamageStateFX;                                   // 0x2520   (0x0008)  
	class UNiagaraComponent*                           NativeComp_HologramScreen;                                  // 0x2528   (0x0008)  
	class UNiagaraComponent*                           NativeComp_SpeedLines;                                      // 0x2530   (0x0008)  
	class UMaterialInterface*                          Native_EnergyRingMat;                                       // 0x2538   (0x0008)  
	class UMaterialInterface*                          Native_EnergyFieldMat;                                      // 0x2540   (0x0008)  
	class UNiagaraSystem*                              NativeSys_DamageStateFX;                                    // 0x2548   (0x0008)  
	class UNiagaraSystem*                              NativeSys_CockpitDestroyed;                                 // 0x2550   (0x0008)  
	class USoundBase*                                  CockpitDamagedSound;                                        // 0x2558   (0x0008)  
	class USoundBase*                                  CockpitDestroyedSound;                                      // 0x2560   (0x0008)  
	class USoundBase*                                  CockpitRespawnSound;                                        // 0x2568   (0x0008)  
	class USoundBase*                                  Native_DamageStateSound;                                    // 0x2570   (0x0008)  
	class USoundBase*                                  Native_DamageStateLastLifeSound;                            // 0x2578   (0x0008)  
	class UForceFeedbackEffect*                        CockpitDeactivatedForceFeedback;                            // 0x2580   (0x0008)  
	class UClass*                                      CockpitDestroyedCamShake;                                   // 0x2588   (0x0008)  
	TArray<class UClass*>                              TractorBeamDisallowedClasses;                               // 0x2590   (0x0010)  


	/// Functions
	// Function /Script/NevadaRuntime.FortNevadaVehicle.SetTractorBeamInactive
	// void SetTractorBeamInactive();                                                                                        // [0xac60b44] Final|Native|Protected|BlueprintCallable 
	// Function /Script/NevadaRuntime.FortNevadaVehicle.SetTractorBeamEnabled
	// void SetTractorBeamEnabled(bool bEnabled);                                                                            // [0x63fe5cc] Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/NevadaRuntime.FortNevadaVehicle.SetCannonEnabled
	// void SetCannonEnabled(bool bEnabled);                                                                                 // [0x63fe5cc] Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/NevadaRuntime.FortNevadaVehicle.SetAttachedPawnAddedVelocity
	// void SetAttachedPawnAddedVelocity(FVector& AddedVelocity);                                                            // [0xac60a80] Final|Native|Protected|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/NevadaRuntime.FortNevadaVehicle.OnTractorBeamDetached
	// void OnTractorBeamDetached(class AActor* DetachedActor, FVector& LastBeamPosition);                                   // [0x18a39e4] Event|Protected|HasOutParms|HasDefaults|BlueprintEvent 
	// Function /Script/NevadaRuntime.FortNevadaVehicle.OnTractorBeamDeactivated
	// void OnTractorBeamDeactivated(FVector& LastBeamPosition);                                                             // [0x18a39e4] Event|Protected|HasOutParms|HasDefaults|BlueprintEvent 
	// Function /Script/NevadaRuntime.FortNevadaVehicle.OnTractorBeamChargeStarted
	// void OnTractorBeamChargeStarted();                                                                                    // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/NevadaRuntime.FortNevadaVehicle.OnTractorBeamAttached
	// void OnTractorBeamAttached();                                                                                         // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/NevadaRuntime.FortNevadaVehicle.OnTractorBeamActivated
	// void OnTractorBeamActivated();                                                                                        // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/NevadaRuntime.FortNevadaVehicle.OnTargetedActorChanged
	// void OnTargetedActorChanged(class AActor* NewTargetedActor);                                                          // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/NevadaRuntime.FortNevadaVehicle.OnStartDescend
	// void OnStartDescend();                                                                                                // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/NevadaRuntime.FortNevadaVehicle.OnStartAscend
	// void OnStartAscend();                                                                                                 // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/NevadaRuntime.FortNevadaVehicle.OnRep_TractorBeamState
	// void OnRep_TractorBeamState(TEnumAsByte<ETractorBeamState> PreviousState);                                            // [0xac609f4] Final|Native|Protected 
	// Function /Script/NevadaRuntime.FortNevadaVehicle.OnRep_TractorBeamChargeStarted
	// void OnRep_TractorBeamChargeStarted();                                                                                // [0xac60998] Final|Native|Public  
	// Function /Script/NevadaRuntime.FortNevadaVehicle.OnRep_TractorBeamAttached
	// void OnRep_TractorBeamAttached();                                                                                     // [0xac60984] Final|Native|Protected 
	// Function /Script/NevadaRuntime.FortNevadaVehicle.OnRep_TargetedActorChanged
	// void OnRep_TargetedActorChanged();                                                                                    // [0xac60948] Final|Native|Public  
	// Function /Script/NevadaRuntime.FortNevadaVehicle.OnRep_ReplicatedTargetedActors
	// void OnRep_ReplicatedTargetedActors();                                                                                // [0xac608c4] Final|Native|Public  
	// Function /Script/NevadaRuntime.FortNevadaVehicle.OnRep_NevadaState
	// void OnRep_NevadaState(FNevadaState& PrevState);                                                                      // [0xac60824] Final|Native|Protected|HasOutParms 
	// Function /Script/NevadaRuntime.FortNevadaVehicle.OnRebootStarted
	// void OnRebootStarted();                                                                                               // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/NevadaRuntime.FortNevadaVehicle.OnRebootFinished
	// void OnRebootFinished();                                                                                              // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/NevadaRuntime.FortNevadaVehicle.OnOutOfBattery
	// void OnOutOfBattery();                                                                                                // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/NevadaRuntime.FortNevadaVehicle.OnNewVehicleState
	// void OnNewVehicleState(ENevadaFlightStates NewVehicleState);                                                          // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/NevadaRuntime.FortNevadaVehicle.OnCrashingStarted
	// void OnCrashingStarted();                                                                                             // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/NevadaRuntime.FortNevadaVehicle.OnCrashedImpact
	// void OnCrashedImpact();                                                                                               // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/NevadaRuntime.FortNevadaVehicle.OnBoostStarted
	// void OnBoostStarted();                                                                                                // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/NevadaRuntime.FortNevadaVehicle.OnBoostFinished
	// void OnBoostFinished();                                                                                               // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/NevadaRuntime.FortNevadaVehicle.OnBoostChargeRefilled
	// void OnBoostChargeRefilled();                                                                                         // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/NevadaRuntime.FortNevadaVehicle.OnBatteryRegen
	// void OnBatteryRegen(float Newcharge);                                                                                 // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/NevadaRuntime.FortNevadaVehicle.OnAttachedActorDied
	// void OnAttachedActorDied(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, FVector HitLocation, class UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum); // [0xac603c0] Final|Native|Public|HasDefaults 
	// Function /Script/NevadaRuntime.FortNevadaVehicle.OnAttachedActorDestroyed
	// void OnAttachedActorDestroyed(class AActor* DestroyedActor);                                                          // [0xac60344] Final|Native|Public  
	// Function /Script/NevadaRuntime.FortNevadaVehicle.NativeToggleCockpit
	// void NativeToggleCockpit(bool bEnable);                                                                               // [0xac602c4] Final|Native|Public|BlueprintCallable 
	// Function /Script/NevadaRuntime.FortNevadaVehicle.IsTractorBeamDisrupted
	// bool IsTractorBeamDisrupted();                                                                                        // [0xac60254] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/NevadaRuntime.FortNevadaVehicle.IsTractorBeamAttached
	// bool IsTractorBeamAttached();                                                                                         // [0xac60230] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/NevadaRuntime.FortNevadaVehicle.IsTractorBeamActive
	// bool IsTractorBeamActive();                                                                                           // [0xac60210] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/NevadaRuntime.FortNevadaVehicle.GetTractorBeamAttachLocation
	// FVector GetTractorBeamAttachLocation();                                                                               // [0xac60158] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/NevadaRuntime.FortNevadaVehicle.GetNumRebootsAvailable
	// int32_t GetNumRebootsAvailable();                                                                                     // [0xac60140] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/NevadaRuntime.FortNevadaVehicle.GetEnergyCanonChargePercent
	// float GetEnergyCanonChargePercent();                                                                                  // [0xac60118] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/NevadaRuntime.FortNevadaVehicle.GetDriverSeatRotationAnimParams
	// void GetDriverSeatRotationAnimParams(float& OutLeftRight, float& OutForwardBack);                                     // [0xac6003c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/NevadaRuntime.FortNevadaVehicle.GetCurrentVehicleState
	// ENevadaFlightStates GetCurrentVehicleState();                                                                         // [0xac60024] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/NevadaRuntime.FortNevadaVehicle.GetBoostChargeTimeRemaining
	// float GetBoostChargeTimeRemaining();                                                                                  // [0xac5ffd8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/NevadaRuntime.FortNevadaVehicle.GetBoostChargesAvailable
	// int32_t GetBoostChargesAvailable();                                                                                   // [0xac6000c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/NevadaRuntime.FortNevadaVehicle.GetBoostChargeProgress
	// float GetBoostChargeProgress();                                                                                       // [0xac5ffb8] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/NevadaRuntime.FortNevadaVehicle.GetBatteryCharge
	// float GetBatteryCharge();                                                                                             // [0xac5ff90] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/NevadaRuntime.FortNevadaVehicle.GetAudioController
	// class AFortNevadaAudioController* GetAudioController();                                                               // [0xac5ff78] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/NevadaRuntime.FortNevadaVehicle.EnablePilotBubbleCollisionOnServer
	// void EnablePilotBubbleCollisionOnServer(bool bNewCollisionEnabled);                                                   // [0x63fe5cc] Final|Native|Protected|BlueprintCallable 
	// Function /Script/NevadaRuntime.FortNevadaVehicle.DisruptTractorBeam
	// void DisruptTractorBeam();                                                                                            // [0xac5ff24] Final|Native|Protected|BlueprintCallable 
	// Function /Script/NevadaRuntime.FortNevadaVehicle.AddPhysicsImpulseToTractorBeamAttachedActor
	// void AddPhysicsImpulseToTractorBeamAttachedActor(FVector& Impulse, FName BoneName, bool bVelChange);                  // [0xac5fc9c] Final|Native|Protected|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Struct /Script/NevadaRuntime.NevadaMoveModeConfig
/// Size: 0x0014 (0x000000 - 0x000014)
struct FNevadaMoveModeConfig
{ 
	float                                              ThrustForce;                                                // 0x0000   (0x0004)  
	float                                              LiftForce;                                                  // 0x0004   (0x0004)  
	float                                              MaxHorizontalSpeed;                                         // 0x0008   (0x0004)  
	float                                              MaxVerticalSpeed;                                           // 0x000C   (0x0004)  
	float                                              DragForceMultiplier;                                        // 0x0010   (0x0004)  
};

/// Struct /Script/NevadaRuntime.DampedSpringConfig
/// Size: 0x000C (0x000000 - 0x00000C)
struct FDampedSpringConfig
{ 
	float                                              Stiffness;                                                  // 0x0000   (0x0004)  
	float                                              Damping;                                                    // 0x0004   (0x0004)  
	float                                              MaxAccel;                                                   // 0x0008   (0x0004)  
};

/// Class /Script/NevadaRuntime.FortNevadaVehicleConfigs
/// Size: 0x04A8 (0x000948 - 0x000DF0)
class UFortNevadaVehicleConfigs : public UFortPhysicsVehicleConfigs
{ 
public:
	FNevadaMoveModeConfig                              BaseMovement;                                               // 0x0948   (0x0014)  
	FNevadaMoveModeConfig                              BoostMovement;                                              // 0x095C   (0x0014)  
	FNevadaMoveModeConfig                              ChargingMovement;                                           // 0x0970   (0x0014)  
	FDampedSpringConfig                                UprightSpringForce;                                         // 0x0984   (0x000C)  
	float                                              DebaseLaunchspeed;                                          // 0x0990   (0x0004)  
	float                                              MaxHeight;                                                  // 0x0994   (0x0004)  
	float                                              MinHeight;                                                  // 0x0998   (0x0004)  
	float                                              OnEnterPitchAlpha;                                          // 0x099C   (0x0004)  
	float                                              FallDamageHeightBuffer;                                     // 0x09A0   (0x0004)  
	float                                              TurningForce;                                               // 0x09A4   (0x0004)  
	float                                              ThrustRotationAlpha;                                        // 0x09A8   (0x0004)  
	float                                              PitchDrag;                                                  // 0x09AC   (0x0004)  
	float                                              YawDrag;                                                    // 0x09B0   (0x0004)  
	float                                              RollDrag;                                                   // 0x09B4   (0x0004)  
	float                                              BoostThrustDuration;                                        // 0x09B8   (0x0004)  
	float                                              BoostDragDuration;                                          // 0x09BC   (0x0004)  
	int32_t                                            NumBoostCharges;                                            // 0x09C0   (0x0004)  
	float                                              BoostChargeDuration;                                        // 0x09C4   (0x0004)  
	float                                              BoostChargeDelay;                                           // 0x09C8   (0x0004)  
	float                                              BoostDragFinishSpeed;                                       // 0x09CC   (0x0004)  
	float                                              TractorBeamRadius;                                          // 0x09D0   (0x0004)  
	float                                              TractorBeamWithTargetRadius;                                // 0x09D4   (0x0004)  
	FScalableFloat                                     TractorBeamSweepLength;                                     // 0x09D8   (0x0028)  
	FScalableFloat                                     TractorBeamChargeTime;                                      // 0x0A00   (0x0028)  
	FScalableFloat                                     TractorBeamDurationTime;                                    // 0x0A28   (0x0028)  
	FScalableFloat                                     TractorBeamTossImpulseStrengthForward;                      // 0x0A50   (0x0028)  
	FScalableFloat                                     TractorBeamTossImpulseStrengthUpward;                       // 0x0A78   (0x0028)  
	float                                              TractorBeamShutdownTime;                                    // 0x0AA0   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0AA4   (0x0004)  MISSED
	FScalableFloat                                     TractorBeamTurnOffDamage;                                   // 0x0AA8   (0x0028)  
	FScalableFloat                                     AllowTractorBeamAIPawns;                                    // 0x0AD0   (0x0028)  
	float                                              TractorBeamBreakForceMagnitude;                             // 0x0AF8   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0AFC   (0x0004)  MISSED
	FScalableFloat                                     TractorBeamActive;                                          // 0x0B00   (0x0028)  
	FScalableFloat                                     TractorBeamCooldown;                                        // 0x0B28   (0x0028)  
	FScalableFloat                                     TractorBeamDisruptionCooldown;                              // 0x0B50   (0x0028)  
	FName                                              TractorBeamSocket;                                          // 0x0B78   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x0B7C   (0x0004)  MISSED
	FVector                                            TractorBeamAttachPositionOffset;                            // 0x0B80   (0x0018)  
	FRigidBodyErrorCorrection                          TractorBeamTargetOverridenErrorCorrection;                  // 0x0B98   (0x0034)  
	float                                              VictimPitchDrag;                                            // 0x0BCC   (0x0004)  
	float                                              VictimYawDrag;                                              // 0x0BD0   (0x0004)  
	float                                              VictimRollDrag;                                             // 0x0BD4   (0x0004)  
	FDampedSpringConfig                                TractorBeamVictimUprightForce;                              // 0x0BD8   (0x000C)  
	int32_t                                            NumReboots;                                                 // 0x0BE4   (0x0004)  
	int32_t                                            NumRebootsDefault;                                          // 0x0BE8   (0x0004)  
	float                                              MaxCrashingTime;                                            // 0x0BEC   (0x0004)  
	float                                              MaxCrashingScrapingTime;                                    // 0x0BF0   (0x0004)  
	float                                              MaxCrashingTimeSpentNotMoving;                              // 0x0BF4   (0x0004)  
	float                                              SpeedThresholdForCrashed;                                   // 0x0BF8   (0x0004)  
	unsigned char                                      UnknownData03_5[0x4];                                       // 0x0BFC   (0x0004)  MISSED
	FScalableFloat                                     RebootDuration;                                             // 0x0C00   (0x0028)  
	FScalableFloat                                     RebootDelay;                                                // 0x0C28   (0x0028)  
	float                                              LandingTraceRange;                                          // 0x0C50   (0x0004)  
	float                                              DesiredLandingDistance;                                     // 0x0C54   (0x0004)  
	float                                              LandingDelay_Max;                                           // 0x0C58   (0x0004)  
	float                                              LandingDelay_Min;                                           // 0x0C5C   (0x0004)  
	float                                              HeightForMinLandingDelay;                                   // 0x0C60   (0x0004)  
	float                                              HeightForMaxLandingDelay;                                   // 0x0C64   (0x0004)  
	float                                              LandingPitchAlphaMax;                                       // 0x0C68   (0x0004)  
	float                                              LandingPitchAlphaMin;                                       // 0x0C6C   (0x0004)  
	float                                              DriverSeatRotationAnimBlendSpeed;                           // 0x0C70   (0x0004)  
	float                                              CrashingDesiredUpLerpFactor;                                // 0x0C74   (0x0004)  
	float                                              CrashedLinearDrag;                                          // 0x0C78   (0x0004)  
	float                                              LandedDragCoef;                                             // 0x0C7C   (0x0004)  
	float                                              LandedDragCoef2;                                            // 0x0C80   (0x0004)  
	float                                              LandedMaxDragSpeed;                                         // 0x0C84   (0x0004)  
	float                                              CrashedAngularDragMultiplier;                               // 0x0C88   (0x0004)  
	float                                              BoostFOV;                                                   // 0x0C8C   (0x0004)  
	float                                              ExtraTraceInteractRange;                                    // 0x0C90   (0x0004)  
	float                                              AntiGravityMult;                                            // 0x0C94   (0x0004)  
	float                                              InitialLiftDuration;                                        // 0x0C98   (0x0004)  
	unsigned char                                      UnknownData04_5[0x4];                                       // 0x0C9C   (0x0004)  MISSED
	FScalableFloat                                     BatteryCostDuringFlight;                                    // 0x0CA0   (0x0028)  
	FScalableFloat                                     BatteryRegenDelay;                                          // 0x0CC8   (0x0028)  
	FScalableFloat                                     BatteryRegenTickRate;                                       // 0x0CF0   (0x0028)  
	FScalableFloat                                     BatteryRegenAmount;                                         // 0x0D18   (0x0028)  
	FScalableFloat                                     MaxBattery;                                                 // 0x0D40   (0x0028)  
	FScalableFloat                                     MinBatteryForFlight;                                        // 0x0D68   (0x0028)  
	TArray<FName>                                      CockpitShapeNames;                                          // 0x0D90   (0x0010)  
	FScalableFloat                                     CockpitDamageMult;                                          // 0x0DA0   (0x0028)  
	FScalableFloat                                     CockpitHealth;                                              // 0x0DC8   (0x0028)  
};

/// Struct /Script/NevadaRuntime.NevadaAudioUpdateContext
/// Size: 0x0001 (0x000000 - 0x000001)
struct FNevadaAudioUpdateContext
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/NevadaRuntime.NevadaOutContinuous
/// Size: 0x0008 (0x000050 - 0x000058)
struct FNevadaOutContinuous : FFortVehicleOutContinuous
{ 
	float                                              AltimeterTraceHitDistance;                                  // 0x0050   (0x0004)  
	float                                              TractorBeamAppliedForceMagnitude;                           // 0x0054   (0x0004)  
};

/// Struct /Script/NevadaRuntime.NevadaOutPersistent
/// Size: 0x0420 (0x000028 - 0x000448)
struct FNevadaOutPersistent : FFortVehicleOutPersistent
{ 
	unsigned char                                      UnknownData00_1[0x420];                                     // 0x0028   (0x0420)  MISSED
};

/// Struct /Script/NevadaRuntime.NevadaInPersistent
/// Size: 0x0110 (0x0001A0 - 0x0002B0)
struct FNevadaInPersistent : FFortVehicleInPersistent
{ 
	class UFortNevadaVehicleConfigs*                   FortNevadaVehicleConfigs;                                   // 0x01A0   (0x0008)  
	bool                                               bBoostThrust;                                               // 0x01A8   (0x0001)  
	bool                                               bBoostDrag;                                                 // 0x01A9   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x01AA   (0x0002)  MISSED
	float                                              TractorBeamExtraLengthForExtents;                           // 0x01AC   (0x0004)  
	bool                                               bUseTractorBeamUprightForce;                                // 0x01B0   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x01B1   (0x0007)  MISSED
	FVector                                            CrashingDesiredUp;                                          // 0x01B8   (0x0018)  
	ENevadaFlightStates                                CurrentVehicleState;                                        // 0x01D0   (0x0001)  
	unsigned char                                      UnknownData02_6[0xDF];                                      // 0x01D1   (0x00DF)  MISSED
};

