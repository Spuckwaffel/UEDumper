
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: GameplayAbilities
/// dependency: GameplayCameras
/// dependency: GameplayTags
/// dependency: Niagara
/// dependency: Water

/// Class /Script/MotorboatRuntime.FortMeatballVehicleAnimInstance
/// Size: 0x00E0 (0x000620 - 0x000700)
class UFortMeatballVehicleAnimInstance : public UFortVehicleAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1792;

public:
	CMember(class AFortMeatballVehicle*)               Meatball                                                    OFFSET(get<T>, {0x618, 8, 0, 0})
	DMember(float)                                     MeatballSpeed                                               OFFSET(get<float>, {0x620, 4, 0, 0})
	DMember(float)                                     SteeringAngle                                               OFFSET(get<float>, {0x624, 4, 0, 0})
	DMember(float)                                     BoostCharge                                                 OFFSET(get<float>, {0x628, 4, 0, 0})
	SMember(FVector)                                   SeatOffset                                                  OFFSET(getStruct<T>, {0x630, 24, 0, 0})
	SMember(FRotator)                                  SeatRotation                                                OFFSET(getStruct<T>, {0x648, 24, 0, 0})
	SMember(FRotator)                                  CurrentDriveJiggle                                          OFFSET(getStruct<T>, {0x660, 24, 0, 0})
	SMember(FRotator)                                  SteeringRotator                                             OFFSET(getStruct<T>, {0x678, 24, 0, 0})
	SMember(FRotator)                                  SpeedGuageRotator                                           OFFSET(getStruct<T>, {0x690, 24, 0, 0})
	SMember(FRotator)                                  BoostPercentRotator                                         OFFSET(getStruct<T>, {0x6A8, 24, 0, 0})
	SMember(FRotator)                                  RandomJiggleRotatorMotorTop                                 OFFSET(getStruct<T>, {0x6C0, 24, 0, 0})
	SMember(FRotator)                                  RandomJiggleRotatorMotorBase                                OFFSET(getStruct<T>, {0x6D8, 24, 0, 0})
	DMember(bool)                                      bIsMovingForward                                            OFFSET(get<bool>, {0x6F0, 1, 0, 0})
	DMember(bool)                                      bIsDrivingFast                                              OFFSET(get<bool>, {0x6F1, 1, 0, 0})
	DMember(bool)                                      bIsBraking                                                  OFFSET(get<bool>, {0x6F2, 1, 0, 0})
	DMember(bool)                                      bIsBoosting                                                 OFFSET(get<bool>, {0x6F3, 1, 0, 0})
	DMember(bool)                                      bIsBoostReady                                               OFFSET(get<bool>, {0x6F4, 1, 0, 0})
	DMember(bool)                                      bIsBoostStarting                                            OFFSET(get<bool>, {0x6F5, 1, 0, 0})
	DMember(bool)                                      bIsBoostEnding                                              OFFSET(get<bool>, {0x6F6, 1, 0, 0})
	DMember(bool)                                      bIsRocketReady                                              OFFSET(get<bool>, {0x6F7, 1, 0, 0})
	DMember(bool)                                      bIsRocketOnCooldown                                         OFFSET(get<bool>, {0x6F8, 1, 0, 0})
	DMember(bool)                                      bIsSteeringLeft                                             OFFSET(get<bool>, {0x6F9, 1, 0, 0})
	DMember(bool)                                      bIsSteeringRight                                            OFFSET(get<bool>, {0x6FA, 1, 0, 0})
};

/// Class /Script/MotorboatRuntime.FortMeatballPontoonsComponent
/// Size: 0x0000 (0x0002C0 - 0x0002C0)
class UFortMeatballPontoonsComponent : public UFortVehiclePontoonsComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 704;

public:
};

/// Class /Script/MotorboatRuntime.FortMeatballVehicle
/// Size: 0x02F0 (0x001F20 - 0x002210)
class AFortMeatballVehicle : public AFortAthenaSKVehicle
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 8720;

public:
	SMember(FFortRechargingActionTimer)                BoostAction                                                 OFFSET(getStruct<T>, {0x1F20, 216, 0, 0})
	DMember(float)                                     FxNormalizationMaxSpeedKmh                                  OFFSET(get<float>, {0x1FF8, 4, 0, 0})
	CMember(class UFortVehicleAudioVoice*)             CacheAudioEngineUp                                          OFFSET(get<T>, {0x2000, 8, 0, 0})
	CMember(class UFortVehicleAudioVoice*)             CacheAudioEngineDown                                        OFFSET(get<T>, {0x2008, 8, 0, 0})
	CMember(class UFortVehicleAudioVoice*)             CacheAudioWakeTurn                                          OFFSET(get<T>, {0x2010, 8, 0, 0})
	CMember(class UFortVehicleAudioVoice*)             CacheAudioWakeSpeed                                         OFFSET(get<T>, {0x2018, 8, 0, 0})
	CMember(class UFortVehicleAudioVoice*)             CacheAudioScrape                                            OFFSET(get<T>, {0x2020, 8, 0, 0})
	CMember(class UFortVehicleAudioVoice*)             CacheAudioEngineOutOfFuel                                   OFFSET(get<T>, {0x2028, 8, 0, 0})
	CMember(class UMaterialInstanceDynamic*)           BoostMID                                                    OFFSET(get<T>, {0x2030, 8, 0, 0})
	CMember(class UNiagaraComponent*)                  CachedGroundFXComponent                                     OFFSET(get<T>, {0x2038, 8, 0, 0})
	CMember(class APlayerController*)                  DrivingPlayerController                                     OFFSET(get<T>, {0x2040, 8, 0, 0})
	CMember(class ULegacyCameraShake*)                 LandCameraShake                                             OFFSET(get<T>, {0x2048, 8, 0, 0})
	CMember(class UClass*)                             LandCameraShakeClass                                        OFFSET(get<T>, {0x2050, 8, 0, 0})
	CMember(class ULegacyCameraShake*)                 DriverCameraShake                                           OFFSET(get<T>, {0x2058, 8, 0, 0})
	CMember(class UClass*)                             DriverCameraShakeClass                                      OFFSET(get<T>, {0x2060, 8, 0, 0})
	DMember(float)                                     LandRumbleIntensity                                         OFFSET(get<float>, {0x2068, 4, 0, 0})
	DMember(uint64_t)                                  LandForceFeedbackHandle                                     OFFSET(get<uint64_t>, {0x2070, 8, 0, 0})
	DMember(float)                                     TurnRumbleIntensity                                         OFFSET(get<float>, {0x2078, 4, 0, 0})
	DMember(uint64_t)                                  TurnForceFeedbackHandle                                     OFFSET(get<uint64_t>, {0x2080, 8, 0, 0})
	DMember(float)                                     CurrentSnowAltitude                                         OFFSET(get<float>, {0x2088, 4, 0, 0})
	DMember(bool)                                      bHasSnow                                                    OFFSET(get<bool>, {0x208C, 1, 0, 0})
	DMember(bool)                                      bLargeRumble                                                OFFSET(get<bool>, {0x208D, 1, 0, 0})
	DMember(bool)                                      bTurnRumbleActive                                           OFFSET(get<bool>, {0x208E, 1, 0, 0})
	DMember(bool)                                      bWaterDropsOnScreen                                         OFFSET(get<bool>, {0x208F, 1, 0, 0})
	SMember(FGameplayTag)                              GCVehicleScreenDrips                                        OFFSET(getStruct<T>, {0x2090, 4, 0, 0})
	SMember(FGameplayCueParameters)                    GCParamsEmpty                                               OFFSET(getStruct<T>, {0x2098, 208, 0, 0})
	CMember(class UClass*)                             BoostingCamera                                              OFFSET(get<T>, {0x2168, 8, 0, 0})
	CMember(class UClass*)                             VehicleCameraNoWeaponOverride                               OFFSET(get<T>, {0x2170, 8, 0, 0})
	CMember(class UFortMeatballVehicleConfigs*)        FortMeatballVehicleConfigs                                  OFFSET(get<T>, {0x2188, 8, 0, 0})
	DMember(int32_t)                                   WaterLineStartPontoonIndex                                  OFFSET(get<int32_t>, {0x2190, 4, 0, 0})
	DMember(int32_t)                                   WaterLineEndPontoonIndex                                    OFFSET(get<int32_t>, {0x2194, 4, 0, 0})
	DMember(bool)                                      bBoostFailed                                                OFFSET(get<bool>, {0x21D0, 1, 0, 0})


	/// Functions
	// Function /Script/MotorboatRuntime.FortMeatballVehicle.UpdateSnowAndDirtParams
	// void UpdateSnowAndDirtParams(float NormalizedForwardSpeed);                                                              // [0xb00cc8c] Final|Native|Protected|BlueprintCallable 
	// Function /Script/MotorboatRuntime.FortMeatballVehicle.StopTurnRumble
	// void StopTurnRumble();                                                                                                   // [0xb00cc78] Final|Native|Protected|BlueprintCallable 
	// Function /Script/MotorboatRuntime.FortMeatballVehicle.StopLandRumble
	// void StopLandRumble();                                                                                                   // [0xb00cc64] Final|Native|Protected|BlueprintCallable 
	// Function /Script/MotorboatRuntime.FortMeatballVehicle.StopDriverCameraShake
	// void StopDriverCameraShake();                                                                                            // [0xb00cc50] Final|Native|Protected|BlueprintCallable 
	// Function /Script/MotorboatRuntime.FortMeatballVehicle.SmashedThroughBuildingPiece
	// void SmashedThroughBuildingPiece(FVector& ImpactPoint, FVector& ImpactNormal, class ABuildingActor* BuildingHitActor);   // [0x246f7d8] Event|Public|HasOutParms|HasDefaults|BlueprintEvent 
	// Function /Script/MotorboatRuntime.FortMeatballVehicle.ShowCooldownCue
	// void ShowCooldownCue(class AFortPlayerPawn* Pawn, float duration);                                                       // [0x246f7d8] Event|Public|BlueprintEvent 
	// Function /Script/MotorboatRuntime.FortMeatballVehicle.OnBoostStarted
	// void OnBoostStarted();                                                                                                   // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Script/MotorboatRuntime.FortMeatballVehicle.OnBoostReady
	// void OnBoostReady();                                                                                                     // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Script/MotorboatRuntime.FortMeatballVehicle.OnBoostFinished
	// void OnBoostFinished();                                                                                                  // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Script/MotorboatRuntime.FortMeatballVehicle.OnBoostFailed
	// void OnBoostFailed();                                                                                                    // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Script/MotorboatRuntime.FortMeatballVehicle.LandShakeEnd
	// void LandShakeEnd();                                                                                                     // [0xb00cc3c] Final|Native|Protected|BlueprintCallable 
	// Function /Script/MotorboatRuntime.FortMeatballVehicle.GetSeatRotation
	// FQuat GetSeatRotation();                                                                                                 // [0xb00cc14] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MotorboatRuntime.FortMeatballVehicle.GetSeatOffset
	// FVector GetSeatOffset();                                                                                                 // [0xb00cbec] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MotorboatRuntime.FortMeatballVehicle.GetBoostCharge
	// float GetBoostCharge();                                                                                                  // [0xb00cbc4] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MotorboatRuntime.FortMeatballVehicle.CacheGroundFXComponent
	// void CacheGroundFXComponent(class UNiagaraComponent* InGroundFXComponent);                                               // [0xb00caf4] Final|Native|Public|BlueprintCallable 
	// Function /Script/MotorboatRuntime.FortMeatballVehicle.CacheAudioPointers
	// void CacheAudioPointers(class UFortVehicleAudioVoice* InAudioEngineUp, class UFortVehicleAudioVoice* InAudioEngineDown, class UFortVehicleAudioVoice* InAudioWakeTurn, class UFortVehicleAudioVoice* InAudioWakeSpeed, class UFortVehicleAudioVoice* InAudioScrape, class UFortVehicleAudioVoice* InAudioEngineOutOfFuel); // [0xb00c714] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/MotorboatRuntime.FortMeatballVehicleConfigs
/// Size: 0x00D0 (0x000930 - 0x000A00)
class UFortMeatballVehicleConfigs : public UFortPhysicsVehicleConfigs
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2560;

public:
	DMember(float)                                     WaterSteerRollFactor                                        OFFSET(get<float>, {0x930, 4, 0, 0})
	DMember(float)                                     InnerTurnPontoonOffsetMultiplier                            OFFSET(get<float>, {0x934, 4, 0, 0})
	DMember(float)                                     OuterTurnPontoonOffsetMultiplier                            OFFSET(get<float>, {0x938, 4, 0, 0})
	DMember(float)                                     MinForwardSpeedToBankOnTurn                                 OFFSET(get<float>, {0x93C, 4, 0, 0})
	DMember(float)                                     BoostMinPushForce                                           OFFSET(get<float>, {0x940, 4, 0, 0})
	DMember(float)                                     BoostTopSpeedForceMultiplier                                OFFSET(get<float>, {0x944, 4, 0, 0})
	DMember(float)                                     BoostTopSpeedMultiplier                                     OFFSET(get<float>, {0x948, 4, 0, 0})
	DMember(float)                                     MaxPontoonOffsetPerSecond                                   OFFSET(get<float>, {0x94C, 4, 0, 0})
	DMember(float)                                     LandTopSpeedMultiplier                                      OFFSET(get<float>, {0x950, 4, 0, 0})
	DMember(float)                                     LandPushForceMultiplier                                     OFFSET(get<float>, {0x954, 4, 0, 0})
	DMember(int32_t)                                   MinPushPontoonsForWaterDriving                              OFFSET(get<int32_t>, {0x958, 4, 0, 0})
	DMember(float)                                     MaxWaterPitchAngle                                          OFFSET(get<float>, {0x95C, 4, 0, 0})
	DMember(float)                                     MinForwardSpeedToPitch                                      OFFSET(get<float>, {0x960, 4, 0, 0})
	DMember(float)                                     MinForwardSpeedForMaxPitch                                  OFFSET(get<float>, {0x964, 4, 0, 0})
	DMember(float)                                     MaxForwardSpeedForMaxPitch                                  OFFSET(get<float>, {0x968, 4, 0, 0})
	DMember(float)                                     MaxFowrardSpeedPitchFactor                                  OFFSET(get<float>, {0x96C, 4, 0, 0})
	DMember(float)                                     BoostMaxForwardSpeedPitchFactor                             OFFSET(get<float>, {0x970, 4, 0, 0})
	DMember(float)                                     FrontLateralFrictionFactor                                  OFFSET(get<float>, {0x974, 4, 0, 0})
	DMember(float)                                     RearLateralFrictionFactor                                   OFFSET(get<float>, {0x978, 4, 0, 0})
	DMember(float)                                     LandFrontLateralFrictionFactor                              OFFSET(get<float>, {0x97C, 4, 0, 0})
	DMember(float)                                     LandRearLateralFrictionFactor                               OFFSET(get<float>, {0x980, 4, 0, 0})
	DMember(float)                                     LateralFrictionModStartSpeedKmh                             OFFSET(get<float>, {0x984, 4, 0, 0})
	DMember(float)                                     RearLateralFrictionModPerSpeedKmh                           OFFSET(get<float>, {0x988, 4, 0, 0})
	DMember(float)                                     FrontLateralFrictionModPerSpeedKmh                          OFFSET(get<float>, {0x98C, 4, 0, 0})
	DMember(float)                                     SeatOffsetScaleX                                            OFFSET(get<float>, {0x990, 4, 0, 0})
	DMember(float)                                     SeatOffsetScaleY                                            OFFSET(get<float>, {0x994, 4, 0, 0})
	DMember(float)                                     SeatYawAngleMax                                             OFFSET(get<float>, {0x998, 4, 0, 0})
	DMember(float)                                     SeatPitchAngleMax                                           OFFSET(get<float>, {0x99C, 4, 0, 0})
	DMember(float)                                     BoostSteeringMultiplier                                     OFFSET(get<float>, {0x9A0, 4, 0, 0})
	DMember(float)                                     BoostSteeringMultiplierRampTime                             OFFSET(get<float>, {0x9A4, 4, 0, 0})
	DMember(float)                                     LandSteeringMultiplier                                      OFFSET(get<float>, {0x9A8, 4, 0, 0})
	DMember(float)                                     LandMinSpeedSteeringAngle                                   OFFSET(get<float>, {0x9AC, 4, 0, 0})
	DMember(float)                                     LandMaxSpeedSteeringAngle                                   OFFSET(get<float>, {0x9B0, 4, 0, 0})
	DMember(float)                                     DragCoefficientNoAccel                                      OFFSET(get<float>, {0x9B4, 4, 0, 0})
	DMember(float)                                     DragCoefficient2NoAccel                                     OFFSET(get<float>, {0x9B8, 4, 0, 0})
	DMember(float)                                     DragCoefficientMultiplierRoad                               OFFSET(get<float>, {0x9BC, 4, 0, 0})
	DMember(float)                                     DragCoefficientMultiplierGrass                              OFFSET(get<float>, {0x9C0, 4, 0, 0})
	DMember(float)                                     DragCoefficientMultiplierDirt                               OFFSET(get<float>, {0x9C4, 4, 0, 0})
	DMember(float)                                     DragCoefficientMultiplierSnow                               OFFSET(get<float>, {0x9C8, 4, 0, 0})
	DMember(float)                                     DragCoefficientMultiplierIce                                OFFSET(get<float>, {0x9CC, 4, 0, 0})
	DMember(float)                                     DragCoefficientMultiplierMud                                OFFSET(get<float>, {0x9D0, 4, 0, 0})
	DMember(float)                                     MinSteerAlphaForWaterFriction                               OFFSET(get<float>, {0x9D4, 4, 0, 0})
	DMember(float)                                     TurnInPlaceYawStiff                                         OFFSET(get<float>, {0x9D8, 4, 0, 0})
	DMember(float)                                     TurnInPlaceYawDamp                                          OFFSET(get<float>, {0x9DC, 4, 0, 0})
	DMember(float)                                     MaxSteerRollAngle                                           OFFSET(get<float>, {0x9E0, 4, 0, 0})
	DMember(float)                                     MaxTurnInPlaceYawAngle                                      OFFSET(get<float>, {0x9E4, 4, 0, 0})
	DMember(float)                                     UprightSpringSteerStrength                                  OFFSET(get<float>, {0x9E8, 4, 0, 0})
	DMember(float)                                     TurnInPlaceYawStrength                                      OFFSET(get<float>, {0x9EC, 4, 0, 0})
	DMember(float)                                     MaxSpeedForTurnInPlaceKmH                                   OFFSET(get<float>, {0x9F0, 4, 0, 0})
	DMember(float)                                     BlendOutExtraSpeedTurnInPlaceKmH                            OFFSET(get<float>, {0x9F4, 4, 0, 0})
	DMember(float)                                     MaxPitchForCameraInPlaceSteer                               OFFSET(get<float>, {0x9F8, 4, 0, 0})
	DMember(float)                                     SpringLengthMutliplierWater                                 OFFSET(get<float>, {0x9FC, 4, 0, 0})
};

/// Struct /Script/MotorboatRuntime.MeatballInPersistent
/// Size: 0x0028 (0x0001A0 - 0x0001C8)
class FMeatballInPersistent : public FFortVehicleInPersistent
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 456;

public:
	CMember(class UFortMeatballVehicleConfigs*)        FortMeatballVehicleConfigs                                  OFFSET(get<T>, {0x1B8, 8, 0, 0})
	DMember(float)                                     PushForceCurrentMultiplier                                  OFFSET(get<float>, {0x1C0, 4, 0, 0})
};

