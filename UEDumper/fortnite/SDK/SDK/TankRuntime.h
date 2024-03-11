
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
/// dependency: GameplayCameras
/// dependency: Niagara
/// dependency: VehicleAudioRuntime

/// Enum /Script/TankRuntime.ETankAimingMode
/// Size: 0x04
enum class ETankAimingMode : uint8_t
{
	CameraRotationNoTrace                                                            = 0,
	CameraTraceFromPivotSocket                                                       = 1,
	CameraTraceFromDistanceScalar                                                    = 2,
	ETankAimingMode_MAX                                                              = 3
};

/// Struct /Script/TankRuntime.TankWeaponAimingData
/// Size: 0x01C0 (0x000000 - 0x0001C0)
struct FTankWeaponAimingData
{ 
	int32_t                                            SeatIndex;                                                  // 0x0000   (0x0004)  
	bool                                               bAimRotationLerpWithEasing;                                 // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0005   (0x0003)  MISSED
	FScalableFloat                                     AimRotationLerpSpeed;                                       // 0x0008   (0x0028)  
	FRuntimeFloatCurve                                 AimYawRotationEasingCurve;                                  // 0x0030   (0x0088)  
	FRuntimeFloatCurve                                 AimPitchRotationEasingCurve;                                // 0x00B8   (0x0088)  
	SDK_UNDEFINED(1,15691) /* TEnumAsByte<ETankAimingMode> */ __um(AimingMode);                                    // 0x0140   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0141   (0x0007)  MISSED
	FScalableFloat                                     AimingCameraToMuzzleDistanceScalar;                         // 0x0148   (0x0028)  
	FScalableFloat                                     AimingWhileTargetingCameraToMuzzleDistanceScalar;           // 0x0170   (0x0028)  
	FScalableFloat                                     AimingPitchAdjust;                                          // 0x0198   (0x0028)  
};

/// Class /Script/TankRuntime.FortTankVehicleConfigs
/// Size: 0x0058 (0x000A18 - 0x000A70)
class UFortTankVehicleConfigs : public UFortTreadVehicleConfigs
{ 
public:
	TArray<FTankWeaponAimingData>                      TankWeaponAimingData;                                       // 0x0A18   (0x0010)  
	SDK_UNDEFINED(24,15692) /* FText */                __um(SecondInteractText);                                   // 0x0A28   (0x0018)  
	SDK_UNDEFINED(1,15693) /* TEnumAsByte<TInteractionType> */ __um(SecondInteractType);                           // 0x0A40   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0A41   (0x0007)  MISSED
	FScalableFloat                                     SecondInteractDuration;                                     // 0x0A48   (0x0028)  
};

/// Class /Script/TankRuntime.FortTankAnimFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortTankAnimFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:
};

/// Struct /Script/TankRuntime.ServerSocketTransformOverride
/// Size: 0x0038 (0x000000 - 0x000038)
struct FServerSocketTransformOverride
{ 
	FName                                              SocketName;                                                 // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	FVector                                            PivotOffset;                                                // 0x0008   (0x0018)  
	FVector                                            OffsetFromPivot;                                            // 0x0020   (0x0018)  
};

/// Class /Script/TankRuntime.FortTankVehicle
/// Size: 0x0190 (0x001F50 - 0x0020E0)
class AFortTankVehicle : public AFortTreadVehicle
{ 
public:
	unsigned char                                      UnknownData00_3[0x70];                                      // 0x1F50   (0x0070)  MISSED
	SDK_UNDEFINED(16,15694) /* FMulticastInlineDelegate */ __um(OnTankRepairedDelegate);                           // 0x1FC0   (0x0010)  
	FName                                              BarrelSocketName;                                           // 0x1FD0   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x1FD4   (0x0004)  MISSED
	class UCapsuleComponent*                           BarrelCollision;                                            // 0x1FD8   (0x0008)  
	class UStaticMeshComponent*                        UnderVehicleCollision;                                      // 0x1FE0   (0x0008)  
	TArray<FServerSocketTransformOverride>             SocketOverrideArray;                                        // 0x1FE8   (0x0010)  
	SDK_UNDEFINED(80,15695) /* TMap<FName, FTransform> */ __um(SocketTransformOverrideMap);                        // 0x1FF8   (0x0050)  
	class USkeletalMeshComponent*                      CachedSkeletalMeshComponent;                                // 0x2048   (0x0008)  
	class AFortVehicleAudioController*                 CachedVehicleAudioController;                               // 0x2050   (0x0008)  
	EVisibilityBasedAnimTickOption                     DefaultServerVisibilityBasedAnimTickOption;                 // 0x2058   (0x0001)  
	bool                                               DefaultServerSkeletalMeshTickEnabled;                       // 0x2059   (0x0001)  
	unsigned char                                      UnknownData02_5[0x2];                                       // 0x205A   (0x0002)  MISSED
	FName                                              YawPivotSocketName;                                         // 0x205C   (0x0004)  
	FName                                              PitchPivotSocketName;                                       // 0x2060   (0x0004)  
	unsigned char                                      UnknownData03_5[0x4];                                       // 0x2064   (0x0004)  MISSED
	class ULegacyCameraShake*                          DriverCameraShakeInstance;                                  // 0x2068   (0x0008)  
	class ULegacyCameraShake*                          AcceleratingCameraShakeInstance;                            // 0x2070   (0x0008)  
	unsigned char                                      UnknownData04_5[0x8];                                       // 0x2078   (0x0008)  MISSED
	class UNiagaraComponent*                           CachedNiagaraComponentRoadAndExhaust;                       // 0x2080   (0x0008)  
	SDK_UNDEFINED(16,15696) /* FString */              __um(RoadAndExhaustNiagaraComponentName);                   // 0x2088   (0x0010)  
	FName                                              RoadAndExhaustPeelOutLeftName;                              // 0x2098   (0x0004)  
	FName                                              RoadAndExhaustPeelOutRightName;                             // 0x209C   (0x0004)  
	FName                                              RoadAndExhaustVehicleSpeedName;                             // 0x20A0   (0x0004)  
	FName                                              RoadAndExhaustSlideDirectionName;                           // 0x20A4   (0x0004)  
	float                                              RoadAndExhaustMinSpeedForDust;                              // 0x20A8   (0x0004)  
	FName                                              RoadAndExhaustDustColorLerpName;                            // 0x20AC   (0x0004)  
	float                                              RoadAndExhaustDustColorLerpOffRoad;                         // 0x20B0   (0x0004)  
	float                                              RoadAndExhaustDustColorLerpOnRoad;                          // 0x20B4   (0x0004)  
	FName                                              RoadAndExhaustDustAlphaMultiplierName;                      // 0x20B8   (0x0004)  
	float                                              RoadAndExhaustDustAlphaMultiplierOffRoad;                   // 0x20BC   (0x0004)  
	float                                              RoadAndExhaustDustAlphaMultiplierOnRoad;                    // 0x20C0   (0x0004)  
	FName                                              RoadAndExhaustDustFrontLeftName;                            // 0x20C4   (0x0004)  
	FName                                              RoadAndExhaustDustFrontRightName;                           // 0x20C8   (0x0004)  
	FName                                              RoadAndExhaustDustMiddleLeftName;                           // 0x20CC   (0x0004)  
	FName                                              RoadAndExhaustDustMiddleRightName;                          // 0x20D0   (0x0004)  
	FName                                              RoadAndExhaustDustRearLeftName;                             // 0x20D4   (0x0004)  
	FName                                              RoadAndExhaustDustRearRightName;                            // 0x20D8   (0x0004)  
	FName                                              RoadAndExhaustIsOnDirtName;                                 // 0x20DC   (0x0004)  
};

/// Class /Script/TankRuntime.FortTankVehicleAnimInstance
/// Size: 0x0110 (0x0006F0 - 0x000800)
class UFortTankVehicleAnimInstance : public UFortTreadVehicleAnimInstance
{ 
public:
	class AFortTankVehicle*                            TankVehicle;                                                // 0x06E8   (0x0008)  
	FRotator                                           CurrentAimRotation;                                         // 0x06F0   (0x0018)  
	FRotator                                           CurrentTurretAimRotation;                                   // 0x0708   (0x0018)  
	FRotator                                           SmoothedTurretDeltaRotation;                                // 0x0720   (0x0018)  
	float                                              InterpolationRate;                                          // 0x0738   (0x0004)  
	bool                                               bEngineOverheated;                                          // 0x073C   (0x0001)  
	bool                                               bHasPassenger;                                              // 0x073D   (0x0001)  
	bool                                               bIsFired;                                                   // 0x073E   (0x0001)  
	bool                                               bIsReady;                                                   // 0x073F   (0x0001)  
	bool                                               bDriverCoverOnCooldown;                                     // 0x0740   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0741   (0x0003)  MISSED
	float                                              LeftTreadPower;                                             // 0x0744   (0x0004)  
	float                                              RightTreadPower;                                            // 0x0748   (0x0004)  
	float                                              TurretYawAlpha;                                             // 0x074C   (0x0004)  
	float                                              TurretYawAlphaSmoothingRate;                                // 0x0750   (0x0004)  
	float                                              CannonYaw;                                                  // 0x0754   (0x0004)  
	float                                              CannonPitch;                                                // 0x0758   (0x0004)  
	float                                              TurretYaw;                                                  // 0x075C   (0x0004)  
	float                                              TurretPitch;                                                // 0x0760   (0x0004)  
	FLinearColor                                       MIDTreadPositionColor;                                      // 0x0764   (0x0010)  
	float                                              MIDTreadDamageLeft;                                         // 0x0774   (0x0004)  
	float                                              MIDTreadDamageRight;                                        // 0x0778   (0x0004)  
	float                                              MIDExhaustShakeSpeed;                                       // 0x077C   (0x0004)  
	float                                              MIDExhaustShakeAmp;                                         // 0x0780   (0x0004)  
	float                                              MIDEngineBoostGlow;                                         // 0x0784   (0x0004)  
	float                                              MIDEngineHealthRatio;                                       // 0x0788   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x078C   (0x0004)  MISSED
	SDK_UNDEFINED(80,15697) /* TMap<EVehicleSeats, FTankAnimAimingData> */ __um(AimingData);                       // 0x0790   (0x0050)  
	FRotator                                           PreviousTurretAimRotation;                                  // 0x07E0   (0x0018)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x07F8   (0x0008)  MISSED


	/// Functions
	// Function /Script/TankRuntime.FortTankVehicleAnimInstance.UpdateMIDEngineProperties
	// void UpdateMIDEngineProperties(float DeltaSeconds, float EngineHealthRatio);                                          // [0xa986cd0] Final|Native|Private|BlueprintCallable 
};

/// Struct /Script/TankRuntime.TankAudioUpdateContext
/// Size: 0x00B8 (0x000000 - 0x0000B8)
struct FTankAudioUpdateContext
{ 
	bool                                               bIsAwake;                                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              SpeedParamValue;                                            // 0x0004   (0x0004)  
	float                                              LeftTrackPower;                                             // 0x0008   (0x0004)  
	float                                              RightTrackPower;                                            // 0x000C   (0x0004)  
	float                                              TurningParamValue;                                          // 0x0010   (0x0004)  
	int32_t                                            CurrentGear;                                                // 0x0014   (0x0004)  
	float                                              AccelSpeedThreshold;                                        // 0x0018   (0x0004)  
	float                                              LastGearChangeTime;                                         // 0x001C   (0x0004)  
	float                                              AccelWaitTime;                                              // 0x0020   (0x0004)  
	bool                                               bTurningRight;                                              // 0x0024   (0x0001)  
	bool                                               bTurningLeft;                                               // 0x0025   (0x0001)  
	bool                                               bPreviousTryMotion;                                         // 0x0026   (0x0001)  
	unsigned char                                      UnknownData01_5[0x1];                                       // 0x0027   (0x0001)  MISSED
	float                                              LastForwardSpeed;                                           // 0x0028   (0x0004)  
	float                                              TimeUntilAccelOneShotFade;                                  // 0x002C   (0x0004)  
	float                                              DecelSpeedThreshold;                                        // 0x0030   (0x0004)  
	float                                              EngineIdleThreshold;                                        // 0x0034   (0x0004)  
	FVector2D                                          WeaponsMovementThreshold;                                   // 0x0038   (0x0010)  
	FName                                              CannonSocketName;                                           // 0x0048   (0x0004)  
	FName                                              TurretSocketName;                                           // 0x004C   (0x0004)  
	int32_t                                            SurfaceID;                                                  // 0x0050   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x0054   (0x0004)  MISSED
	class UAudioComponent*                             DecelOneShot;                                               // 0x0058   (0x0008)  
	class UAudioComponent*                             AccelOneShot;                                               // 0x0060   (0x0008)  
	class UAudioComponent*                             TurningOneShot;                                             // 0x0068   (0x0008)  
	class UFortLayeredAudioComponent*                  TracksLeftAudio;                                            // 0x0070   (0x0008)  
	class UFortLayeredAudioComponent*                  TracksRightAudio;                                           // 0x0078   (0x0008)  
	unsigned char                                      UnknownData03_6[0x38];                                      // 0x0080   (0x0038)  MISSED
};

/// Class /Script/TankRuntime.FortTankVehicleAudioController
/// Size: 0x0400 (0x000300 - 0x000700)
class AFortTankVehicleAudioController : public AFortVehicleAudioController
{ 
public:
	FFortAudioFloatParameter                           SpeedParam;                                                 // 0x0300   (0x0038)  
	FFortAudioFloatParameter                           TurnPowerParam;                                             // 0x0338   (0x0038)  
	FFortAudioFloatParameter                           OutOfFuelParam;                                             // 0x0370   (0x0038)  
	FFortAudioFloatParameter                           IdleParam;                                                  // 0x03A8   (0x0038)  
	FFortAudioFloatParameter                           TurningParam;                                               // 0x03E0   (0x0038)  
	FFortAudioFloatParameter                           ForwardParam;                                               // 0x0418   (0x0038)  
	FFortAudioFloatParameter                           ReverseParam;                                               // 0x0450   (0x0038)  
	FFortAudioFloatParameter                           SurfaceParam;                                               // 0x0488   (0x0038)  
	FFortAudioFloatParameter                           IsInWaterParam;                                             // 0x04C0   (0x0038)  
	FFortAudioFloatParameter                           IsInAirParam;                                               // 0x04F8   (0x0038)  
	FFortAudioFloatParameter                           BoostParam;                                                 // 0x0530   (0x0038)  
	FFortAudioFloatParameter                           CannonHorizontalMovementParam;                              // 0x0568   (0x0038)  
	FFortAudioFloatParameter                           CannonVerticalMovementParam;                                // 0x05A0   (0x0038)  
	FFortAudioFloatParameter                           TurretHorizontalMovementParam;                              // 0x05D8   (0x0038)  
	FFortAudioFloatParameter                           TurretVerticalMovementParam;                                // 0x0610   (0x0038)  
	FTankAudioUpdateContext                            Context;                                                    // 0x0648   (0x00B8)  


	/// Functions
	// Function /Script/TankRuntime.FortTankVehicleAudioController.PlayTurningOneShot
	// void PlayTurningOneShot();                                                                                            // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/TankRuntime.FortTankVehicleAudioController.PlayDecelOneShot
	// void PlayDecelOneShot();                                                                                              // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/TankRuntime.FortTankVehicleAudioController.PlayAccelOneShot
	// void PlayAccelOneShot();                                                                                              // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/TankRuntime.FortTankVehicleAudioController.GetTankVehicleActor
	// class AFortTankVehicle* GetTankVehicleActor();                                                                        // [0xa986c8c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/TankRuntime.TankAnimAimingData
/// Size: 0x0060 (0x000000 - 0x000060)
struct FTankAnimAimingData
{ 
	unsigned char                                      UnknownData00_2[0x60];                                      // 0x0000   (0x0060)  MISSED
};

