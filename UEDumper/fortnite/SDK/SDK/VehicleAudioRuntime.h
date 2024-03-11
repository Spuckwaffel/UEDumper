
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: AudioGameplay
/// dependency: AudioMotorSim
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: REVRuntime

/// Struct /Script/VehicleAudioRuntime.FortMotorSimPatternState
/// Size: 0x0030 (0x000000 - 0x000030)
struct FFortMotorSimPatternState
{ 
	TArray<class UCurveVector*>                        Curves;                                                     // 0x0000   (0x0010)  
	float                                              OnsetInterpSpeed;                                           // 0x0010   (0x0004)  
	float                                              ThrottleThreshold;                                          // 0x0014   (0x0004)  
	float                                              RpmFallRate;                                                // 0x0018   (0x0004)  
	float                                              SpeedMin;                                                   // 0x001C   (0x0004)  
	float                                              SpeedMax;                                                   // 0x0020   (0x0004)  
	float                                              RpmOffsetMin;                                               // 0x0024   (0x0004)  
	float                                              RpmOffsetMax;                                               // 0x0028   (0x0004)  
	bool                                               bLoopCurves;                                                // 0x002C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x002D   (0x0003)  MISSED
};

/// Class /Script/VehicleAudioRuntime.FortMotorSimComponent_PatternPlayer
/// Size: 0x00C0 (0x0000B0 - 0x000170)
class UFortMotorSimComponent_PatternPlayer : public UAudioMotorSimComponent
{ 
public:
	float                                              PatternResetCooldown;                                       // 0x00B0   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00B4   (0x0004)  MISSED
	FFortMotorSimPatternState                          DriftState;                                                 // 0x00B8   (0x0030)  
	FFortMotorSimPatternState                          AirState;                                                   // 0x00E8   (0x0030)  
	FFortMotorSimPatternState                          StartlineState;                                             // 0x0118   (0x0030)  
	unsigned char                                      UnknownData01_5[0x20];                                      // 0x0148   (0x0020)  MISSED
	class UCurveVector*                                CurrentCurve;                                               // 0x0168   (0x0008)  
};

/// Class /Script/VehicleAudioRuntime.FortMotorSimComponent_SurfaceModifier
/// Size: 0x0070 (0x0000B0 - 0x000120)
class UFortMotorSimComponent_SurfaceModifier : public UAudioMotorSimComponent
{ 
public:
	SDK_UNDEFINED(80,12821) /* TMap<FName, UCurveFloat*> */ __um(Surfaces);                                        // 0x00B0   (0x0050)  
	FVector2f                                          ThrottleRange;                                              // 0x0100   (0x0008)  
	float                                              OnsetInterpTime;                                            // 0x0108   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x010C   (0x0004)  MISSED
	class UCurveFloat*                                 CurrentCurve;                                               // 0x0110   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0118   (0x0008)  MISSED


	/// Functions
	// Function /Script/VehicleAudioRuntime.FortMotorSimComponent_SurfaceModifier.SetSurface
	// void SetSurface(FName NewSurface);                                                                                    // [0xa192e84] Final|Native|Private|BlueprintCallable 
};

/// Class /Script/VehicleAudioRuntime.VehicleAudioLifecycleInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UVehicleAudioLifecycleInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/VehicleAudioRuntime.VehicleAudioLifecycleInterface.OnUpdate
	// void OnUpdate(float DeltaSeconds);                                                                                    // [0x2c870e0] Native|Event|Public|BlueprintEvent 
	// Function /Script/VehicleAudioRuntime.VehicleAudioLifecycleInterface.OnShutdown
	// void OnShutdown();                                                                                                    // [0x3300354] Native|Event|Public|BlueprintEvent 
	// Function /Script/VehicleAudioRuntime.VehicleAudioLifecycleInterface.OnInit
	// void OnInit();                                                                                                        // [0x326a61c] Native|Event|Public|BlueprintEvent 
};

/// Class /Script/VehicleAudioRuntime.FortVehicleAudioController
/// Size: 0x0070 (0x000290 - 0x000300)
class AFortVehicleAudioController : public AActor
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0290   (0x0008)  MISSED
	class UFortVehicleSoundData*                       VehicleSoundData;                                           // 0x0298   (0x0008)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x02A0   (0x0004)  MISSED
	int32_t                                            CurrentSignificance;                                        // 0x02A4   (0x0004)  
	bool                                               bListenerInRange;                                           // 0x02A8   (0x0001)  
	bool                                               bForceUpdatePastListenerRange;                              // 0x02A9   (0x0001)  
	bool                                               bRedlineAllowed;                                            // 0x02AA   (0x0001)  
	unsigned char                                      UnknownData02_5[0x1];                                       // 0x02AB   (0x0001)  MISSED
	float                                              JitterTime;                                                 // 0x02AC   (0x0004)  
	class AFortAthenaVehicle*                          VehicleBase;                                                // 0x02B0   (0x0008)  
	class UFortPhysicsVehicleConfigs*                  PhysicsVehicleConfigs;                                      // 0x02B8   (0x0008)  
	class UFortLayeredAudioComponent*                  LayeredAudioComponent;                                      // 0x02C0   (0x0008)  
	class UAudioParameterComponent*                    AudioParameterComponent;                                    // 0x02C8   (0x0008)  
	class UAudioMotorModelComponent*                   AudioMotorModelComponent;                                   // 0x02D0   (0x0008)  
	class UREVComponent*                               REVComponent;                                               // 0x02D8   (0x0008)  
	class UAudioComponent*                             EngineComponent;                                            // 0x02E0   (0x0008)  
	TArray<class UFortVehicleSoundComponent*>          VehicleSoundComponents;                                     // 0x02E8   (0x0010)  
	unsigned char                                      UnknownData03_6[0x8];                                       // 0x02F8   (0x0008)  MISSED


	/// Functions
	// Function /Script/VehicleAudioRuntime.FortVehicleAudioController.UseMetasounds
	// bool UseMetasounds();                                                                                                 // [0x2f56b68] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VehicleAudioRuntime.FortVehicleAudioController.UpdateMotorModelNative
	// void UpdateMotorModelNative(float DeltaSeconds);                                                                      // [0x1c2c950] Native|Protected|BlueprintCallable 
	// Function /Script/VehicleAudioRuntime.FortVehicleAudioController.Update
	// void Update(float DeltaSeconds);                                                                                      // [0xa192f04] Native|Public|BlueprintCallable 
	// Function /Script/VehicleAudioRuntime.FortVehicleAudioController.Shutdown
	// void Shutdown();                                                                                                      // [0x3475290] Native|Public|BlueprintCallable 
	// Function /Script/VehicleAudioRuntime.FortVehicleAudioController.SetVehicle
	// void SetVehicle(class AFortAthenaVehicle* InVehicle);                                                                 // [0x84f66b8] Native|Public|BlueprintCallable 
	// Function /Script/VehicleAudioRuntime.FortVehicleAudioController.SetRedlineActive
	// void SetRedlineActive(bool bEnabled);                                                                                 // [0x35cd5c8] Native|Public|BlueprintCallable 
	// Function /Script/VehicleAudioRuntime.FortVehicleAudioController.SetLayeredAudioComponent
	// void SetLayeredAudioComponent(class UFortLayeredAudioComponent* InComponent);                                         // [0x3479adc] Final|Native|Public|BlueprintCallable 
	// Function /Script/VehicleAudioRuntime.FortVehicleAudioController.IsNativizationEnabled
	// bool IsNativizationEnabled();                                                                                         // [0xa192e5c] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VehicleAudioRuntime.FortVehicleAudioController.Init
	// void Init();                                                                                                          // [0x21dc214] Native|Public|BlueprintCallable 
	// Function /Script/VehicleAudioRuntime.FortVehicleAudioController.GetVehicleActor
	// class AFortAthenaVehicle* GetVehicleActor();                                                                          // [0x2d745bc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VehicleAudioRuntime.FortVehicleAudioController.GetThrottleNative
	// float GetThrottleNative();                                                                                            // [0x6869480] Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VehicleAudioRuntime.FortVehicleAudioController.GetREVComponent
	// class UREVComponent* GetREVComponent();                                                                               // [0x66ee66c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VehicleAudioRuntime.FortVehicleAudioController.GetRedlineActive
	// bool GetRedlineActive();                                                                                              // [0x2c03e40] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VehicleAudioRuntime.FortVehicleAudioController.GetPhysicsVehicleConfigs
	// class UFortPhysicsVehicleConfigs* GetPhysicsVehicleConfigs();                                                         // [0xa192df0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VehicleAudioRuntime.FortVehicleAudioController.GetLayeredAudioComponent
	// class UFortLayeredAudioComponent* GetLayeredAudioComponent();                                                         // [0x306b7f4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VehicleAudioRuntime.FortVehicleAudioController.GetJitterTime
	// float GetJitterTime();                                                                                                // [0xa192da0] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VehicleAudioRuntime.FortVehicleAudioController.GetEngineAudioComponent
	// class UAudioComponent* GetEngineAudioComponent();                                                                     // [0x2f3a9a4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VehicleAudioRuntime.FortVehicleAudioController.GetBrakingNative
	// float GetBrakingNative();                                                                                             // [0x6869454] Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VehicleAudioRuntime.FortVehicleAudioController.GetAudioParameterComponent
	// class UAudioParameterComponent* GetAudioParameterComponent();                                                         // [0x3081300] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VehicleAudioRuntime.FortVehicleAudioController.GetAudioMotorModelComponent
	// class UAudioMotorModelComponent* GetAudioMotorModelComponent();                                                       // [0x3e43dec] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VehicleAudioRuntime.FortVehicleAudioController.CacheJitterTime
	// void CacheJitterTime();                                                                                               // [0x1c2b230] Native|Public|BlueprintCallable 
};

/// Class /Script/VehicleAudioRuntime.FortVehicleSoundComponent
/// Size: 0x0010 (0x0000A0 - 0x0000B0)
class UFortVehicleSoundComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x00A0   (0x0008)  MISSED
	SDK_UNDEFINED(8,12822) /* TWeakObjectPtr<AFortVehicleAudioController*> */ __um(AudioController);               // 0x00A8   (0x0008)  


	/// Functions
	// Function /Script/VehicleAudioRuntime.FortVehicleSoundComponent.Update
	// void Update(float DeltaSeconds);                                                                                      // [0xa192f88] Native|Public|BlueprintCallable 
	// Function /Script/VehicleAudioRuntime.FortVehicleSoundComponent.Shutdown
	// void Shutdown();                                                                                                      // [0x248ecf4] Native|Public|BlueprintCallable 
	// Function /Script/VehicleAudioRuntime.FortVehicleSoundComponent.Init
	// void Init();                                                                                                          // [0x6cb2178] Native|Public|BlueprintCallable 
	// Function /Script/VehicleAudioRuntime.FortVehicleSoundComponent.GetVehicleActor
	// class AFortAthenaVehicle* GetVehicleActor();                                                                          // [0x1c2de28] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VehicleAudioRuntime.FortVehicleSoundComponent.GetUseMetasounds
	// bool GetUseMetasounds();                                                                                              // [0x2f56b18] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VehicleAudioRuntime.FortVehicleSoundComponent.GetRootComponent
	// class USceneComponent* GetRootComponent();                                                                            // [0x354a864] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VehicleAudioRuntime.FortVehicleSoundComponent.GetREVComponent
	// class UREVComponent* GetREVComponent();                                                                               // [0x30aba5c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VehicleAudioRuntime.FortVehicleSoundComponent.GetPhysicsVehicleConfigs
	// class UFortPhysicsVehicleConfigs* GetPhysicsVehicleConfigs();                                                         // [0xa192e10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VehicleAudioRuntime.FortVehicleSoundComponent.GetMotorModelComponent
	// class UAudioMotorModelComponent* GetMotorModelComponent();                                                            // [0xa192dcc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VehicleAudioRuntime.FortVehicleSoundComponent.GetLayeredAudioComponent
	// class UFortLayeredAudioComponent* GetLayeredAudioComponent();                                                         // [0x33fd028] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VehicleAudioRuntime.FortVehicleSoundComponent.GetEngineAudioComponent
	// class UAudioComponent* GetEngineAudioComponent();                                                                     // [0xa192d58] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VehicleAudioRuntime.FortVehicleSoundComponent.GetAudioParameterComponent
	// class UAudioParameterComponent* GetAudioParameterComponent();                                                         // [0x2f3df5c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VehicleAudioRuntime.FortVehicleSoundComponent.GetAudioController
	// class AFortVehicleAudioController* GetAudioController();                                                              // [0x2f51ae4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/VehicleAudioRuntime.FortVehicleSoundComponent_Speed
/// Size: 0x0040 (0x0000B0 - 0x0000F0)
class UFortVehicleSoundComponent_Speed : public UFortVehicleSoundComponent
{ 
public:
	FFortAudioFloatParameter                           Speed;                                                      // 0x00B0   (0x0038)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x00E8   (0x0008)  MISSED


	/// Functions
	// Function /Script/VehicleAudioRuntime.FortVehicleSoundComponent_Speed.OnReversedChanged
	// void OnReversedChanged(bool bReversing);                                                                              // [0x18a39e4] Event|Public|BlueprintEvent 
};

/// Struct /Script/VehicleAudioRuntime.FortVehicleSoundSurfaceParam
/// Size: 0x000C (0x000000 - 0x00000C)
struct FFortVehicleSoundSurfaceParam
{ 
	SDK_UNDEFINED(1,12823) /* TEnumAsByte<EPhysicalSurface> */ __um(Surface);                                      // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	FName                                              Name;                                                       // 0x0004   (0x0004)  
	float                                              Value;                                                      // 0x0008   (0x0004)  
};

/// Struct /Script/VehicleAudioRuntime.FortVehicleSoundComponent_SurfaceContext
/// Size: 0x00A8 (0x000000 - 0x0000A8)
struct FFortVehicleSoundComponent_SurfaceContext
{ 
	float                                              BrakingHardStopThreshold;                                   // 0x0000   (0x0004)  
	float                                              BrakingSoftStopThreshold;                                   // 0x0004   (0x0004)  
	float                                              SurfaceParamInterpSpeed;                                    // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	SDK_UNDEFINED(80,12824) /* TMap<TEnumAsByte<EPhysicalSurface>, TEnumAsByte<EPhysicalSurface>> */ __um(SurfaceMap); // 0x0010   (0x0050)  
	FName                                              WaterParamName;                                             // 0x0060   (0x0004)  
	float                                              WaterParamInterpSpeed;                                      // 0x0064   (0x0004)  
	FName                                              AirParamName;                                               // 0x0068   (0x0004)  
	float                                              AirParamAttackInterpSpeed;                                  // 0x006C   (0x0004)  
	float                                              AirParamReleaseInterpSpeed;                                 // 0x0070   (0x0004)  
	float                                              MinSpeedForSkidFX;                                          // 0x0074   (0x0004)  
	float                                              MaxSpeedForSkidFX;                                          // 0x0078   (0x0004)  
	FName                                              SkiddingParamName;                                          // 0x007C   (0x0004)  
	float                                              SkiddingParamInterpSpeed;                                   // 0x0080   (0x0004)  
	SDK_UNDEFINED(1,12825) /* TEnumAsByte<EPhysicalSurface> */ __um(CurrentSurface);                               // 0x0084   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0085   (0x0003)  MISSED
	TArray<FFortVehicleSoundSurfaceParam>              SurfaceParams;                                              // 0x0088   (0x0010)  
	unsigned char                                      UnknownData02_6[0x10];                                      // 0x0098   (0x0010)  MISSED
};

/// Class /Script/VehicleAudioRuntime.FortVehicleSoundComponent_Surface
/// Size: 0x00A8 (0x0000B0 - 0x000158)
class UFortVehicleSoundComponent_Surface : public UFortVehicleSoundComponent
{ 
public:
	FFortVehicleSoundComponent_SurfaceContext          Context;                                                    // 0x00B0   (0x00A8)  


	/// Functions
	// Function /Script/VehicleAudioRuntime.FortVehicleSoundComponent_Surface.OnSurfaceChanged
	// void OnSurfaceChanged(TEnumAsByte<EPhysicalSurface> NewSurface);                                                      // [0x2faebe0] Final|Native|Public  
	// Function /Script/VehicleAudioRuntime.FortVehicleSoundComponent_Surface.OnSkiddingChanged
	// void OnSkiddingChanged(bool bNewState);                                                                               // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/VehicleAudioRuntime.FortVehicleSoundComponent_Surface.OnInAirChanged
	// void OnInAirChanged(bool bNewState);                                                                                  // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/VehicleAudioRuntime.FortVehicleSoundComponent_Surface.OnBrakingChanged
	// void OnBrakingChanged(bool bNewState);                                                                                // [0x18a39e4] Event|Public|BlueprintEvent 
};

/// Class /Script/VehicleAudioRuntime.FortVehicleSoundData
/// Size: 0x0040 (0x000030 - 0x000070)
class UFortVehicleSoundData : public UDataAsset
{ 
public:
	TArray<class UFortVehicleSoundComponent*>          SoundComponents;                                            // 0x0030   (0x0010)  
	float                                              MaxListenerDistance;                                        // 0x0040   (0x0004)  
	bool                                               bUpdateDataFromController;                                  // 0x0044   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0045   (0x0003)  MISSED
	float                                              MaxBrakeThreshold;                                          // 0x0048   (0x0004)  
	float                                              ThrottleMultiplier;                                         // 0x004C   (0x0004)  
	float                                              SurfaceFrictionModifier;                                    // 0x0050   (0x0004)  
	float                                              MotorFrictionModifier;                                      // 0x0054   (0x0004)  
	FVector2D                                          FrictionJitter;                                             // 0x0058   (0x0010)  
	bool                                               bCanShiftOverride;                                          // 0x0068   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0069   (0x0007)  MISSED
};

