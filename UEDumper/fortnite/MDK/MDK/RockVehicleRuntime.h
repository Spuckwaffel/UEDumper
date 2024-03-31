
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: AnimGraphRuntime
/// dependency: AudioMotorSim
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: GameplayAbilities
/// dependency: GameplayTags
/// dependency: ModularGameplay
/// dependency: Niagara
/// dependency: SrirachaRanch
/// dependency: VehicleAudioRuntime

/// Class /Script/RockVehicleRuntime.RockVehicle_InteractionOverrideComponent
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class URockVehicle_InteractionOverrideComponent : public UFortVehicleInteractionOverrideComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
};

/// Class /Script/RockVehicleRuntime.FortCheatManager_RockVehicle
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortCheatManager_RockVehicle : public UChildCheatManager
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/RockVehicleRuntime.FortCheatManager_RockVehicle.RockVehicleSetVelocity
	// void RockVehicleSetVelocity(float X, float Y, float Z);                                                                  // [0x91ffcf0] Final|Exec|Native|Public 
	// Function /Script/RockVehicleRuntime.FortCheatManager_RockVehicle.RockVehicleSetRotation
	// void RockVehicleSetRotation(float pitch, float Yaw, float Roll);                                                         // [0x91ffcf0] Final|Exec|Native|Public 
	// Function /Script/RockVehicleRuntime.FortCheatManager_RockVehicle.RockVehicleSetLocation
	// void RockVehicleSetLocation(float X, float Y, float Z);                                                                  // [0x91ffcf0] Final|Exec|Native|Public 
	// Function /Script/RockVehicleRuntime.FortCheatManager_RockVehicle.RockVehicleSetBalboaVelocity
	// void RockVehicleSetBalboaVelocity(float X, float Y, float Z);                                                            // [0x91ffcf0] Final|Exec|Native|Public 
};

/// Class /Script/RockVehicleRuntime.RockVehicle
/// Size: 0x0240 (0x001FD0 - 0x002210)
class ARockVehicle : public AFortAthenaSKVehicle
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 8720;

public:
	DMember(float)                                     InputSwivelPitch                                            OFFSET(get<float>, {0x1FC8, 4, 0, 0})
	DMember(float)                                     InputSwivelYaw                                              OFFSET(get<float>, {0x1FCC, 4, 0, 0})
	DMember(bool)                                      bInputReverseCamera                                         OFFSET(get<bool>, {0x1FD0, 1, 1, 0})
	DMember(bool)                                      bHasDoubleJumped                                            OFFSET(get<bool>, {0x1FD0, 1, 1, 1})
	DMember(bool)                                      bHasDodged                                                  OFFSET(get<bool>, {0x1FD0, 1, 1, 2})
	DMember(bool)                                      bFreeLookCamera                                             OFFSET(get<bool>, {0x1FD1, 1, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnFreeCamToggled                                            OFFSET(getStruct<T>, {0x1FD8, 16, 0, 0})
	SMember(FRockRuntimeConfigOverrides)               RockRuntimeConfigs                                          OFFSET(getStruct<T>, {0x1FE9, 4, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnSpringImpact                                              OFFSET(getStruct<T>, {0x2008, 16, 0, 0})
	CMember(class URockVehicleAnalyticsComponent*)     RockAnalyticsComp                                           OFFSET(get<T>, {0x2090, 8, 0, 0})
	CMember(TArray<class URockVehicleAbility*>)        VehicleAbilities                                            OFFSET(get<T>, {0x2098, 16, 0, 0})
	CMember(TArray<TWeakObjectPtr<UClass*>>)           VehicleAbilityTickOrder                                     OFFSET(get<T>, {0x20A8, 16, 0, 0})
	CMember(class AFortVehicleAudioController*)        CachedVehicleAudioController                                OFFSET(get<T>, {0x20B8, 8, 0, 0})
	CMember(class URockVehicleAbility_Supersonic*)     SupersonicAbility                                           OFFSET(get<T>, {0x20C0, 8, 0, 0})
	CMember(class URockVehicleAnimInstance*)           RockAnimInstance                                            OFFSET(get<T>, {0x20C8, 8, 0, 0})
	SMember(FFortAthenaVehicleInputState)              PendingDriverInputState                                     OFFSET(getStruct<T>, {0x20D0, 64, 0, 0})
	SMember(FFortAthenaVehicleInputState)              PrevDriverInputState                                        OFFSET(getStruct<T>, {0x2110, 64, 0, 0})
	SMember(FVector)                                   EnterExitImpulse                                            OFFSET(getStruct<T>, {0x2150, 24, 0, 0})


	/// Functions
	// Function /Script/RockVehicleRuntime.RockVehicle.ServerToggleFreeCam
	// void ServerToggleFreeCam();                                                                                              // [0xb911674] Net|NetReliableNative|Event|Public|NetServer|NetValidate 
	// Function /Script/RockVehicleRuntime.RockVehicle.ServerSetLegacyDamageValues
	// void ServerSetLegacyDamageValues(bool bDamageFriendlyVehicles, bool bDamageOtherVehicles, bool bDamageOwnVehicle, bool bDamageAllowedFromOtherVehicle); // [0xb911410] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/RockVehicleRuntime.RockVehicle.RockFreeCamToggledDelegate__DelegateSignature
	// void RockFreeCamToggledDelegate__DelegateSignature(bool bFreeCam);                                                       // [0x186becc] MulticastDelegate|Public|Delegate 
	// Function /Script/RockVehicleRuntime.RockVehicle.OnSpringImpact__DelegateSignature
	// void OnSpringImpact__DelegateSignature(FName Socket, float ImpactSpeed, FHitResult& OutHit);                             // [0x186becc] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/RockVehicleRuntime.RockVehicle.OnRep_FreeLookCamera
	// void OnRep_FreeLookCamera();                                                                                             // [0xb91105c] Final|Native|Public  
	// Function /Script/RockVehicleRuntime.RockVehicle.GetThrottleState
	// float GetThrottleState();                                                                                                // [0xb910688] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RockVehicleRuntime.RockVehicle.GetDriverInput
	// FFortAthenaVehicleInputState GetDriverInput();                                                                           // [0xb9105d4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RockVehicleRuntime.RockVehicle.GetCurrentRockRuntimeConfigOverrides
	// FRockRuntimeConfigOverrides GetCurrentRockRuntimeConfigOverrides();                                                      // [0xb9105bc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/RockVehicleRuntime.RockVehicleAbility
/// Size: 0x0010 (0x0000A0 - 0x0000B0)
class URockVehicleAbility : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	CMember(class ARockVehicle*)                       Vehicle                                                     OFFSET(get<T>, {0xA0, 8, 0, 0})
	DMember(float)                                     ActiveSeconds                                               OFFSET(get<float>, {0xA8, 4, 0, 0})
	DMember(float)                                     LastDeactivationTimeSeconds                                 OFFSET(get<float>, {0xAC, 4, 0, 0})


	/// Functions
	// Function /Script/RockVehicleRuntime.RockVehicleAbility.GetVehicle
	// class ARockVehicle* GetVehicle();                                                                                        // [0x32c1a4c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RockVehicleRuntime.RockVehicleAbility.GetInactiveSeconds
	// float GetInactiveSeconds();                                                                                              // [0xb910620] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RockVehicleRuntime.RockVehicleAbility.GetActiveSeconds
	// float GetActiveSeconds();                                                                                                // [0x641684c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/RockVehicleRuntime.RockVehicleAbility_Physics
/// Size: 0x0058 (0x0000B0 - 0x000108)
class URockVehicleAbility_Physics : public URockVehicleAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:
	DMember(bool)                                      bShouldStayActive                                           OFFSET(get<bool>, {0xB0, 1, 0, 0})
	SMember(FFortAthenaVehicleInputState)              InputState                                                  OFFSET(getStruct<T>, {0xB8, 64, 0, 0})
};

/// Class /Script/RockVehicleRuntime.RockVehicleAbility_AirControl
/// Size: 0x0060 (0x000108 - 0x000168)
class URockVehicleAbility_AirControl : public URockVehicleAbility_Physics
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 360;

public:
	SMember(FVector)                                   TorqueAccel                                                 OFFSET(getStruct<T>, {0x120, 24, 0, 0})
	SMember(FVector)                                   TorqueDamping                                               OFFSET(getStruct<T>, {0x138, 24, 0, 0})
	DMember(float)                                     DisableForDodgeTime                                         OFFSET(get<float>, {0x150, 4, 0, 0})
	DMember(bool)                                      bAnyWheelsOnGround                                          OFFSET(get<bool>, {0x154, 1, 0, 0})
	DMember(bool)                                      bDodgeActive                                                OFFSET(get<bool>, {0x155, 1, 0, 0})
	DMember(bool)                                      bAutoUprightActive                                          OFFSET(get<bool>, {0x156, 1, 0, 0})
	CMember(class URockVehicleAbility_Dodge*)          DodgeAbility                                                OFFSET(get<T>, {0x158, 8, 0, 0})
	CMember(class URockVehicleAbility_AutoUpright*)    AutoUprightAbility                                          OFFSET(get<T>, {0x160, 8, 0, 0})
};

/// Class /Script/RockVehicleRuntime.RockVehicleAbility_AutoUpright
/// Size: 0x0108 (0x000108 - 0x000210)
class URockVehicleAbility_AutoUpright : public URockVehicleAbility_Physics
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 528;

public:
	SMember(FRockScalableFloat)                        RollTorque                                                  OFFSET(getStruct<T>, {0x120, 48, 0, 0})
	SMember(FRockScalableFloat)                        PitchTorque                                                 OFFSET(getStruct<T>, {0x150, 48, 0, 0})
	SMember(FRockScalableFloat)                        PushForce                                                   OFFSET(getStruct<T>, {0x180, 48, 0, 0})
	SMember(FRockScalableFloat)                        MinActiveSeconds                                            OFFSET(getStruct<T>, {0x1B0, 48, 0, 0})
	CMember(class URockVehicleAbility_Dodge*)          DodgeAbility                                                OFFSET(get<T>, {0x1E0, 8, 0, 0})
	DMember(int32_t)                                   LastWorldContactFrame                                       OFFSET(get<int32_t>, {0x1E8, 4, 0, 0})
	SMember(FVector)                                   LastContactNormal                                           OFFSET(getStruct<T>, {0x1F0, 24, 0, 0})
	DMember(bool)                                      bWheelsOnGround                                             OFFSET(get<bool>, {0x208, 1, 0, 0})
	DMember(bool)                                      bAnyWheelsOnGround                                          OFFSET(get<bool>, {0x209, 1, 0, 0})
	DMember(bool)                                      bDodgeActive                                                OFFSET(get<bool>, {0x20A, 1, 0, 0})
	DMember(bool)                                      bBodyContact                                                OFFSET(get<bool>, {0x20B, 1, 0, 0})
	DMember(float)                                     TimeSinceLastBodyContact                                    OFFSET(get<float>, {0x20C, 4, 0, 0})
};

/// Class /Script/RockVehicleRuntime.RockVehicleAbility_Boost
/// Size: 0x0068 (0x000108 - 0x000170)
class URockVehicleAbility_Boost : public URockVehicleAbility_Physics
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 368;

public:
	SMember(FRockScalableFloat)                        BoostAccel                                                  OFFSET(getStruct<T>, {0x120, 48, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnBoostFailed                                               OFFSET(getStruct<T>, {0x150, 16, 0, 0})
	CMember(class URockVehicleBoostTank*)              BoostTank                                                   OFFSET(get<T>, {0x160, 8, 0, 0})
	DMember(bool)                                      bHasBoost                                                   OFFSET(get<bool>, {0x168, 1, 0, 0})
};

/// Class /Script/RockVehicleRuntime.RockVehicleBoostTank
/// Size: 0x0088 (0x0000A0 - 0x000128)
class URockVehicleBoostTank : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
	SMember(FMulticastInlineDelegate)                  OnSecondsChanged                                            OFFSET(getStruct<T>, {0xA0, 16, 0, 0})
	SMember(FRockScalableFloat)                        StartSeconds                                                OFFSET(getStruct<T>, {0xB0, 48, 0, 0})
	SMember(FRockScalableFloat)                        MaxSeconds                                                  OFFSET(getStruct<T>, {0xE0, 48, 0, 0})
	CMember(ERockBoostLogic)                           BoostLogic                                                  OFFSET(get<T>, {0x110, 1, 0, 0})
	DMember(float)                                     BoostRechargeRate                                           OFFSET(get<float>, {0x114, 4, 0, 0})
	DMember(float)                                     BoostRechargeDelay                                          OFFSET(get<float>, {0x118, 4, 0, 0})
	DMember(float)                                     SecondsRemaining                                            OFFSET(get<float>, {0x11C, 4, 0, 0})


	/// Functions
	// Function /Script/RockVehicleRuntime.RockVehicleBoostTank.OnRep_SecondsRemaining
	// void OnRep_SecondsRemaining(float PrevValue);                                                                            // [0xb911090] Final|Native|Protected 
	// Function /Script/RockVehicleRuntime.RockVehicleBoostTank.IsBoostFull
	// bool IsBoostFull();                                                                                                      // [0xb910794] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RockVehicleRuntime.RockVehicleBoostTank.HasBoost
	// bool HasBoost();                                                                                                         // [0xb910774] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RockVehicleRuntime.RockVehicleBoostTank.GiveBoost
	// void GiveBoost(float Seconds);                                                                                           // [0xb9106b0] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/RockVehicleRuntime.RockVehicleBoostTank.GetPercentRemaining
	// float GetPercentRemaining();                                                                                             // [0xb910668] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RockVehicleRuntime.RockVehicleBoostTank.GetMaxBoostInSeconds
	// float GetMaxBoostInSeconds();                                                                                            // [0x755d104] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/RockVehicleRuntime.RockVehicleAbility_Dodge
/// Size: 0x0330 (0x000108 - 0x000438)
class URockVehicleAbility_Dodge : public URockVehicleAbility_Physics
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1080;

public:
	SMember(FRockDodgeImpulse)                         ForwardImpulse                                              OFFSET(getStruct<T>, {0x120, 96, 0, 0})
	SMember(FRockDodgeImpulse)                         BackwardImpulse                                             OFFSET(getStruct<T>, {0x180, 96, 0, 0})
	SMember(FRockDodgeImpulse)                         SideImpulse                                                 OFFSET(getStruct<T>, {0x1E0, 96, 0, 0})
	SMember(FRockScalableFloat)                        MinTimeAfterJump                                            OFFSET(getStruct<T>, {0x240, 48, 0, 0})
	SMember(FRockScalableFloat)                        MinTorqueTime                                               OFFSET(getStruct<T>, {0x270, 48, 0, 0})
	SMember(FRockScalableFloat)                        MaxTorqueTime                                               OFFSET(getStruct<T>, {0x2A0, 48, 0, 0})
	SMember(FRockScalableFloat)                        ForwardTorque                                               OFFSET(getStruct<T>, {0x2D0, 48, 0, 0})
	SMember(FRockScalableFloat)                        SideTorque                                                  OFFSET(getStruct<T>, {0x300, 48, 0, 0})
	SMember(FRockScalableFloat)                        ZLiftTime                                                   OFFSET(getStruct<T>, {0x330, 48, 0, 0})
	SMember(FRockScalableFloat)                        ZLiftAccel                                                  OFFSET(getStruct<T>, {0x360, 48, 0, 0})
	SMember(FRockScalableFloat)                        ZDampingTime                                                OFFSET(getStruct<T>, {0x390, 48, 0, 0})
	SMember(FRockScalableFloat)                        ZDamping                                                    OFFSET(getStruct<T>, {0x3C0, 48, 0, 0})
	SMember(FRockScalableFloat)                        InputThreshold                                              OFFSET(getStruct<T>, {0x3F0, 48, 0, 0})
	SMember(FVector2D)                                 DodgeInput                                                  OFFSET(getStruct<T>, {0x420, 16, 0, 0})
	DMember(bool)                                      bWheelsOnGround                                             OFFSET(get<bool>, {0x430, 1, 0, 0})
};

/// Class /Script/RockVehicleRuntime.RockVehicleAbility_DoubleJump
/// Size: 0x0050 (0x000108 - 0x000158)
class URockVehicleAbility_DoubleJump : public URockVehicleAbility_Physics
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 344;

public:
	SMember(FRockScalableFloat)                        JumpVelocity                                                OFFSET(getStruct<T>, {0x120, 48, 0, 0})
	CMember(class URockVehicleAbility_Jump*)           JumpAbility                                                 OFFSET(get<T>, {0x150, 8, 0, 0})
};

/// Class /Script/RockVehicleRuntime.RockVehicleAbility_Flip
/// Size: 0x00E8 (0x000108 - 0x0001F0)
class URockVehicleAbility_Flip : public URockVehicleAbility_Physics
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 496;

public:
	SMember(FRockScalableFloat)                        Impulse                                                     OFFSET(getStruct<T>, {0x120, 48, 0, 0})
	SMember(FRockScalableFloat)                        Torque                                                      OFFSET(getStruct<T>, {0x150, 48, 0, 0})
	SMember(FRockScalableFloat)                        duration                                                    OFFSET(getStruct<T>, {0x180, 48, 0, 0})
	SMember(FRockScalableFloat)                        ContactNormalThresholdDegrees                               OFFSET(getStruct<T>, {0x1B0, 48, 0, 0})
	DMember(bool)                                      bWheelsOnGround                                             OFFSET(get<bool>, {0x1E0, 1, 0, 0})
};

/// Class /Script/RockVehicleRuntime.RockVehicleAbility_GroundTrails
/// Size: 0x0058 (0x0000B0 - 0x000108)
class URockVehicleAbility_GroundTrails : public URockVehicleAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:
	SMember(FGroundTrailsMap)                          GroundTrailsMap                                             OFFSET(getStruct<T>, {0xB0, 24, 0, 0})
	CMember(TArray<FName>)                             GroundTrailSockets                                          OFFSET(get<T>, {0xC8, 16, 0, 0})
	CMember(class UNiagaraSystem*)                     HandbrakeSystem                                             OFFSET(get<T>, {0xD8, 8, 0, 0})
	CMember(TArray<class UNiagaraComponent*>)          GroundTrailComponents                                       OFFSET(get<T>, {0xE0, 16, 0, 0})
	CMember(TArray<class UNiagaraComponent*>)          HandbrakeComponents                                         OFFSET(get<T>, {0xF0, 16, 0, 0})


	/// Functions
	// Function /Script/RockVehicleRuntime.RockVehicleAbility_GroundTrails.SetEnabled
	// void SetEnabled(bool bValue);                                                                                            // [0xb911780] Final|Native|Public|BlueprintCallable 
	// Function /Script/RockVehicleRuntime.RockVehicleAbility_GroundTrails.OnSurfaceChanged
	// void OnSurfaceChanged(TEnumAsByte<EPhysicalSurface> NewSurface);                                                         // [0xb911350] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/RockVehicleRuntime.RockVehicleAbility_Jump
/// Size: 0x00D8 (0x000108 - 0x0001E0)
class URockVehicleAbility_Jump : public URockVehicleAbility_Physics
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 480;

public:
	SMember(FRockScalableFloat)                        JumpVelocity                                                OFFSET(getStruct<T>, {0x120, 48, 0, 0})
	SMember(FRockScalableFloat)                        JumpAccel                                                   OFFSET(getStruct<T>, {0x150, 48, 0, 0})
	SMember(FRockScalableFloat)                        MinJumpSeconds                                              OFFSET(getStruct<T>, {0x180, 48, 0, 0})
	SMember(FRockScalableFloat)                        MaxJumpSeconds                                              OFFSET(getStruct<T>, {0x1B0, 48, 0, 0})
};

/// Class /Script/RockVehicleRuntime.RockVehicleAbility_StickyWheels
/// Size: 0x0098 (0x000108 - 0x0001A0)
class URockVehicleAbility_StickyWheels : public URockVehicleAbility_Physics
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
	SMember(FRockScalableFloat)                        StickyForceScaleGround                                      OFFSET(getStruct<T>, {0x120, 48, 0, 0})
	SMember(FRockScalableFloat)                        StickyForceScaleWall                                        OFFSET(getStruct<T>, {0x150, 48, 0, 0})
	SMember(FVector)                                   ContactNormal                                               OFFSET(getStruct<T>, {0x180, 24, 0, 0})
	DMember(float)                                     Scale                                                       OFFSET(get<float>, {0x198, 4, 0, 0})
	DMember(bool)                                      bAnyWheelsOnGround                                          OFFSET(get<bool>, {0x19C, 1, 0, 0})
};

/// Class /Script/RockVehicleRuntime.RockVehicleAbility_Supersonic
/// Size: 0x00C8 (0x0000B0 - 0x000178)
class URockVehicleAbility_Supersonic : public URockVehicleAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 376;

public:
	SMember(FMulticastInlineDelegate)                  OnTrailsActivate                                            OFFSET(getStruct<T>, {0xB0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnTrailsDeactivate                                          OFFSET(getStruct<T>, {0xC0, 16, 0, 0})
	SMember(FRockScalableFloat)                        TurnOffTime                                                 OFFSET(getStruct<T>, {0xD0, 48, 0, 0})
	SMember(FRockScalableFloat)                        TurnOnTime                                                  OFFSET(getStruct<T>, {0x100, 48, 0, 0})
	DMember(bool)                                      bUseTurnOnTimeRequirement                                   OFFSET(get<bool>, {0x130, 1, 0, 0})
	SMember(FRockScalableFloat)                        TurnOffSpeedBuffer                                          OFFSET(getStruct<T>, {0x138, 48, 0, 0})
	DMember(float)                                     TimeBelowSupersonic                                         OFFSET(get<float>, {0x168, 4, 0, 0})
	DMember(float)                                     WorldTimeSupersonicExceeded                                 OFFSET(get<float>, {0x16C, 4, 0, 0})
};

/// Class /Script/RockVehicleRuntime.RockVehicleAnalyticsComponent
/// Size: 0x0038 (0x0000A0 - 0x0000D8)
class URockVehicleAnalyticsComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	SMember(FRockVehicleAnalyticsSession)              CurrentSession                                              OFFSET(getStruct<T>, {0xA8, 40, 0, 0})
	CMember(class ARockVehicle*)                       Vehicle                                                     OFFSET(get<T>, {0xD0, 8, 0, 0})


	/// Functions
	// Function /Script/RockVehicleRuntime.RockVehicleAnalyticsComponent.OnSupersonicStart
	// void OnSupersonicStart(class UActorComponent* InComp, bool bInReset);                                                    // [0xb91121c] Final|Native|Private 
	// Function /Script/RockVehicleRuntime.RockVehicleAnalyticsComponent.OnSupersonicEnd
	// void OnSupersonicEnd(class UActorComponent* InComp);                                                                     // [0xb911168] Final|Native|Private 
	// Function /Script/RockVehicleRuntime.RockVehicleAnalyticsComponent.OnPawnExitedSeat
	// void OnPawnExitedSeat(TScriptInterface<Class>& InVehicle, class AFortPawn* InPlayerPawn, int32_t InSeatIndex);           // [0xb910df8] Final|Native|Private|HasOutParms 
	// Function /Script/RockVehicleRuntime.RockVehicleAnalyticsComponent.OnPawnEnteredSeat
	// void OnPawnEnteredSeat(TScriptInterface<Class>& InVehicle, class AFortPawn* InPlayerPawn, int32_t InSeatIndex);          // [0xb910b5c] Final|Native|Private|HasOutParms 
	// Function /Script/RockVehicleRuntime.RockVehicleAnalyticsComponent.OnJumped
	// void OnJumped(class UActorComponent* InComp, bool bInReset);                                                             // [0xb910a2c] Final|Native|Private 
	// Function /Script/RockVehicleRuntime.RockVehicleAnalyticsComponent.OnDoubleJumped
	// void OnDoubleJumped(class UActorComponent* InComp, bool bInReset);                                                       // [0xb9108fc] Final|Native|Private 
	// Function /Script/RockVehicleRuntime.RockVehicleAnalyticsComponent.OnDodged
	// void OnDodged(class UActorComponent* InComp, bool bInReset);                                                             // [0xb9107cc] Final|Native|Private 
};

/// Class /Script/RockVehicleRuntime.RockVehicleAnimInstance
/// Size: 0x0180 (0x000620 - 0x0007A0)
class URockVehicleAnimInstance : public UFortVehicleAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1952;

public:
	SMember(FBouncyChassisState)                       BouncyChassis                                               OFFSET(getStruct<T>, {0x618, 12, 0, 0})
	SMember(FRockVehicleWheelAnimInfo)                 WheelInfoFR                                                 OFFSET(getStruct<T>, {0x624, 20, 0, 0})
	SMember(FRockVehicleWheelAnimInfo)                 WheelInfoFL                                                 OFFSET(getStruct<T>, {0x638, 20, 0, 0})
	SMember(FRockVehicleWheelAnimInfo)                 WheelInfoBR                                                 OFFSET(getStruct<T>, {0x64C, 20, 0, 0})
	SMember(FRockVehicleWheelAnimInfo)                 WheelInfoBL                                                 OFFSET(getStruct<T>, {0x660, 20, 0, 0})
	DMember(float)                                     WheelLerpSpeed                                              OFFSET(get<float>, {0x674, 4, 0, 0})
};

/// Class /Script/RockVehicleRuntime.RockVehicleAudioController
/// Size: 0x00F0 (0x000300 - 0x0003F0)
class ARockVehicleAudioController : public AFortVehicleAudioController
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1008;

public:
	SMember(FRuntimeFloatCurve)                        SideSpeedToSkidVolume                                       OFFSET(getStruct<T>, {0x300, 136, 0, 0})
	DMember(float)                                     SurfaceTypeInterpSpeed                                      OFFSET(get<float>, {0x388, 4, 0, 0})
	CMember(class UAudioComponent*)                    TireSurfaceComponent                                        OFFSET(get<T>, {0x390, 8, 0, 0})
	CMember(class UAudioComponent*)                    AirLoopComponent                                            OFFSET(get<T>, {0x398, 8, 0, 0})
	CMember(class UAudioComponent*)                    SuperSonicComponent                                         OFFSET(get<T>, {0x3A0, 8, 0, 0})
	DMember(bool)                                      bInWater                                                    OFFSET(get<bool>, {0x3A8, 1, 0, 0})
	CMember(class UAudioMotorModelComponent*)          MotorModel                                                  OFFSET(get<T>, {0x3B0, 8, 0, 0})
	CMember(class ARockVehicle*)                       CachedVehicle                                               OFFSET(get<T>, {0x3B8, 8, 0, 0})


	/// Functions
	// Function /Script/RockVehicleRuntime.RockVehicleAudioController.SetSurfaceTypeParam
	// void SetSurfaceTypeParam(float NewSurfaceParam);                                                                         // [0xb911840] Final|Native|Public|BlueprintCallable 
	// Function /Script/RockVehicleRuntime.RockVehicleAudioController.SetBoosting
	// void SetBoosting(bool bNewBoosting);                                                                                     // [0xb9116c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/RockVehicleRuntime.RockVehicleAudioController.OnInAirUpdated
	// void OnInAirUpdated(bool bNewInAir);                                                                                     // [0x186becc] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/RockVehicleRuntime.RockVehicleAudioController.GetMotorSimComponent
	// class UAudioMotorModelComponent* GetMotorSimComponent();                                                                 // [0x8b40580] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/RockVehicleRuntime.RockVehicleCameraMode
/// Size: 0x0200 (0x001CC0 - 0x001EC0)
class URockVehicleCameraMode : public UFortCameraMode_AthenaVehicle
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 7872;

public:
	DMember(float)                                     SwivelPitchMax                                              OFFSET(get<float>, {0x1CB8, 4, 0, 0})
	DMember(float)                                     SwivelYawMax                                                OFFSET(get<float>, {0x1CBC, 4, 0, 0})
	DMember(float)                                     GroundNormalInterpRate                                      OFFSET(get<float>, {0x1CC0, 4, 0, 0})
	DMember(float)                                     GroundNormalAirInterpRate                                   OFFSET(get<float>, {0x1CC4, 4, 0, 0})
	DMember(float)                                     GroundYawRate                                               OFFSET(get<float>, {0x1CC8, 4, 0, 0})
	DMember(float)                                     WallYawRate                                                 OFFSET(get<float>, {0x1CCC, 4, 0, 0})
	DMember(float)                                     InterpToGroundTime                                          OFFSET(get<float>, {0x1CD0, 4, 0, 0})
	DMember(float)                                     InterpToAirTime                                             OFFSET(get<float>, {0x1CD4, 4, 0, 0})
	DMember(float)                                     AverageVelocityInterpRate                                   OFFSET(get<float>, {0x1CD8, 4, 0, 0})
	SMember(FRuntimeFloatCurve)                        AirRotationInterpRateForSpeed                               OFFSET(getStruct<T>, {0x1CE0, 136, 0, 0})
	DMember(float)                                     FocusOffsetInterpRate                                       OFFSET(get<float>, {0x1D68, 4, 0, 0})
	DMember(float)                                     DistanceSpeedScale                                          OFFSET(get<float>, {0x1D6C, 4, 0, 0})
	DMember(float)                                     DistanceOffsetMin                                           OFFSET(get<float>, {0x1D70, 4, 0, 0})
	DMember(float)                                     DistanceOffsetMax                                           OFFSET(get<float>, {0x1D74, 4, 0, 0})
	DMember(float)                                     DistanceInterpRate                                          OFFSET(get<float>, {0x1D78, 4, 0, 0})
	DMember(float)                                     MaxSpeedFOVOffset                                           OFFSET(get<float>, {0x1D7C, 4, 0, 0})
	DMember(float)                                     SupersonicFOVOffset                                         OFFSET(get<float>, {0x1D80, 4, 0, 0})
	DMember(float)                                     FOVInterpRate                                               OFFSET(get<float>, {0x1D84, 4, 0, 0})
	SMember(FRockCameraSettings)                       CameraSettings                                              OFFSET(getStruct<T>, {0x1D88, 28, 0, 0})
	CMember(class ARockVehicle*)                       VehicleTarget                                               OFFSET(get<T>, {0x1DA8, 8, 0, 0})
	CMember(class URockVehicleAbility_Jump*)           JumpAbility                                                 OFFSET(get<T>, {0x1DB0, 8, 0, 0})
};

/// Class /Script/RockVehicleRuntime.RockVehicleConfigs
/// Size: 0x0608 (0x000948 - 0x000F50)
class URockVehicleConfigs : public UFortPhysicsVehicleConfigs
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3920;

public:
	SMember(FRockVehicleAxleConfig)                    FrontAxle                                                   OFFSET(getStruct<T>, {0x948, 52, 0, 0})
	SMember(FRockVehicleAxleConfig)                    BackAxle                                                    OFFSET(getStruct<T>, {0x97C, 52, 0, 0})
	SMember(FRockVehicleDriveConfig)                   Drive                                                       OFFSET(getStruct<T>, {0x9B0, 1296, 0, 0})
	SMember(FRockVehicleDemoConfig)                    DemolitionConfiguration                                     OFFSET(getStruct<T>, {0xEC0, 40, 0, 0})
	SMember(FRockScalableFloat)                        MaxLinearSpeed                                              OFFSET(getStruct<T>, {0xEE8, 48, 0, 0})
	SMember(FRockScalableFloat)                        SupersonicSpeed                                             OFFSET(getStruct<T>, {0xF18, 48, 0, 0})
	DMember(float)                                     MaxAngularSpeed                                             OFFSET(get<float>, {0xF48, 4, 0, 0})
	DMember(float)                                     SafeBuildingLandingDegrees                                  OFFSET(get<float>, {0xF4C, 4, 0, 0})
};

/// Class /Script/RockVehicleRuntime.RockVehicleManager
/// Size: 0x0020 (0x000290 - 0x0002B0)
class ARockVehicleManager : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 688;

public:
	CMember(TArray<class ARockVehicle*>)               RockVehicles                                                OFFSET(get<T>, {0x2A0, 16, 0, 0})
};

/// Class /Script/RockVehicleRuntime.RockVehicleWorldSubsystem
/// Size: 0x0008 (0x000030 - 0x000038)
class URockVehicleWorldSubsystem : public UWorldSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(class ARockVehicleManager*)                VehicleManager                                              OFFSET(get<T>, {0x30, 8, 0, 0})
};

/// Class /Script/RockVehicleRuntime.StreamingRadioPlayerComponent_Rock
/// Size: 0x0000 (0x000478 - 0x000478)
class UStreamingRadioPlayerComponent_Rock : public UStreamingRadioPlayerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1144;

public:


	/// Functions
	// Function /Script/RockVehicleRuntime.StreamingRadioPlayerComponent_Rock.VehicleExploded
	// void VehicleExploded(class AController* LastDamageInstigator, class AFortAthenaVehicle* Vehicle);                        // [0xb911904] Final|Native|Protected 
};

/// Struct /Script/RockVehicleRuntime.RockRuntimeConfigOverrides
/// Size: 0x0004 (0x000000 - 0x000004)
class FRockRuntimeConfigOverrides : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(bool)                                      bDamageFriendlyVehicles                                     OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(bool)                                      bDamageOtherVehicles                                        OFFSET(get<bool>, {0x1, 1, 0, 0})
	DMember(bool)                                      bDamageOwnVehicle                                           OFFSET(get<bool>, {0x2, 1, 0, 0})
	DMember(bool)                                      bDamageAllowedFromOtherVehicle                              OFFSET(get<bool>, {0x3, 1, 0, 0})
};

/// Struct /Script/RockVehicleRuntime.RockScalableFloat
/// Size: 0x0008 (0x000028 - 0x000030)
class FRockScalableFloat : public FScalableFloat
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(float)                                     CachedValue                                                 OFFSET(get<float>, {0x28, 4, 0, 0})
};

/// Struct /Script/RockVehicleRuntime.RockVehicleState
/// Size: 0x00E0 (0x000000 - 0x0000E0)
class FRockVehicleState : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	SMember(FReplicatedPhysicsPawnState)               RigidBodyState                                              OFFSET(getStruct<T>, {0x0, 128, 0, 0})
	SMember(FFortAthenaVehicleInputState)              PrevDriverInput                                             OFFSET(getStruct<T>, {0x80, 64, 0, 0})
	DMember(bool)                                      bWheelsOnGround                                             OFFSET(get<bool>, {0xC0, 1, 0, 0})
	DMember(bool)                                      bAnyWheelsOnGround                                          OFFSET(get<bool>, {0xC1, 1, 0, 0})
	SMember(FVector)                                   AverageSpringNormal                                         OFFSET(getStruct<T>, {0xC8, 24, 0, 0})
};

/// Struct /Script/RockVehicleRuntime.AnimNode_RockVehicleController
/// Size: 0x0018 (0x0000C8 - 0x0000E0)
class FAnimNode_RockVehicleController : public FAnimNode_SkeletalControlBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	SMember(FBoneReference)                            ChassisBone                                                 OFFSET(getStruct<T>, {0xC8, 12, 0, 0})
	SMember(FBouncyChassisState)                       BouncyChassis                                               OFFSET(getStruct<T>, {0xD4, 12, 0, 0})
};

/// Struct /Script/RockVehicleRuntime.BouncyChassisState
/// Size: 0x000C (0x000000 - 0x00000C)
class FBouncyChassisState : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(float)                                     PitchDegrees                                                OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     RollDegrees                                                 OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     TranslationZ                                                OFFSET(get<float>, {0x8, 4, 0, 0})
};

/// Struct /Script/RockVehicleRuntime.RockBoxSpringSetup
/// Size: 0x0050 (0x000000 - 0x000050)
class FRockBoxSpringSetup : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FVector)                                   Strength                                                    OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FVector)                                   Damping                                                     OFFSET(getStruct<T>, {0x18, 24, 0, 0})
	SMember(FVector)                                   MaxDisplacement                                             OFFSET(getStruct<T>, {0x30, 24, 0, 0})
	DMember(float)                                     MaxSpeed                                                    OFFSET(get<float>, {0x48, 4, 0, 0})
	DMember(float)                                     Mass                                                        OFFSET(get<float>, {0x4C, 4, 0, 0})
};

/// Struct /Script/RockVehicleRuntime.RockBoxSpring
/// Size: 0x00B0 (0x000000 - 0x0000B0)
class FRockBoxSpring : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FRockBoxSpringSetup)                       Setup                                                       OFFSET(getStruct<T>, {0x0, 80, 0, 0})
};

/// Struct /Script/RockVehicleRuntime.SpringSettings
/// Size: 0x0008 (0x000000 - 0x000008)
class FSpringSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(float)                                     Strength                                                    OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     Damping                                                     OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Struct /Script/RockVehicleRuntime.BouncyChassisSetup
/// Size: 0x0058 (0x000000 - 0x000058)
class FBouncyChassisSetup : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FSpringSettings)                           PitchSpring                                                 OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	DMember(float)                                     PitchMaxAngleDegrees                                        OFFSET(get<float>, {0x8, 4, 0, 0})
	SMember(FSpringSettings)                           RollSpring                                                  OFFSET(getStruct<T>, {0xC, 8, 0, 0})
	DMember(float)                                     RollMaxAngleDegrees                                         OFFSET(get<float>, {0x14, 4, 0, 0})
	SMember(FSpringSettings)                           ZSpring                                                     OFFSET(getStruct<T>, {0x18, 8, 0, 0})
	DMember(float)                                     ZMaxDrop                                                    OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(float)                                     ZMaxRaise                                                   OFFSET(get<float>, {0x24, 4, 0, 0})
	SMember(FVector)                                   MaxDisplacement                                             OFFSET(getStruct<T>, {0x28, 24, 0, 0})
	SMember(FVector)                                   MassOffset                                                  OFFSET(getStruct<T>, {0x40, 24, 0, 0})
};

/// Struct /Script/RockVehicleRuntime.BouncyChassisInstance
/// Size: 0x0118 (0x000000 - 0x000118)
class FBouncyChassisInstance : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 280;

public:
	SMember(FRockBoxSpring)                            Spring                                                      OFFSET(getStruct<T>, {0x0, 176, 0, 0})
};

/// Struct /Script/RockVehicleRuntime.RockVehicleAbilityInPersistent
/// Size: 0x0008 (0x000000 - 0x000008)
class FRockVehicleAbilityInPersistent : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/RockVehicleRuntime.RockVehicleAbilityInPersistent_AirControl
/// Size: 0x0038 (0x000008 - 0x000040)
class FRockVehicleAbilityInPersistent_AirControl : public FRockVehicleAbilityInPersistent
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FVector)                                   TorqueAccel                                                 OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	SMember(FVector)                                   TorqueDamping                                               OFFSET(getStruct<T>, {0x20, 24, 0, 0})
	DMember(float)                                     DisableForDodgeTime                                         OFFSET(get<float>, {0x38, 4, 0, 0})
};

/// Struct /Script/RockVehicleRuntime.RockVehicleAbilityInContinuous
/// Size: 0x0040 (0x000000 - 0x000040)
class FRockVehicleAbilityInContinuous : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FFortAthenaVehicleInputState)              InputState                                                  OFFSET(getStruct<T>, {0x0, 64, 0, 0})
};

/// Struct /Script/RockVehicleRuntime.RockVehicleAbilityInContinuous_AirControl
/// Size: 0x0008 (0x000040 - 0x000048)
class FRockVehicleAbilityInContinuous_AirControl : public FRockVehicleAbilityInContinuous
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	DMember(bool)                                      bAnyWheelsOnGround                                          OFFSET(get<bool>, {0x40, 1, 0, 0})
	DMember(bool)                                      bDodgeActive                                                OFFSET(get<bool>, {0x41, 1, 0, 0})
	DMember(bool)                                      bAutoUprightActive                                          OFFSET(get<bool>, {0x42, 1, 0, 0})
};

/// Struct /Script/RockVehicleRuntime.RockVehicleAbilityInPersistent_AutoUpright
/// Size: 0x0010 (0x000008 - 0x000018)
class FRockVehicleAbilityInPersistent_AutoUpright : public FRockVehicleAbilityInPersistent
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/RockVehicleRuntime.RockVehicleAbilityInContinuous_AutoUpright
/// Size: 0x0010 (0x000040 - 0x000050)
class FRockVehicleAbilityInContinuous_AutoUpright : public FRockVehicleAbilityInContinuous
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	DMember(int32_t)                                   LastWorldContactFrame                                       OFFSET(get<int32_t>, {0x40, 4, 0, 0})
	DMember(bool)                                      bWheelsOnGround                                             OFFSET(get<bool>, {0x44, 1, 0, 0})
	DMember(bool)                                      bAnyWheelsOnGround                                          OFFSET(get<bool>, {0x45, 1, 0, 0})
	DMember(bool)                                      bDodgeActive                                                OFFSET(get<bool>, {0x46, 1, 0, 0})
	DMember(bool)                                      bBodyContact                                                OFFSET(get<bool>, {0x47, 1, 0, 0})
	DMember(float)                                     TimeSinceLastBodyContact                                    OFFSET(get<float>, {0x48, 4, 0, 0})
};

/// Struct /Script/RockVehicleRuntime.RockVehicleAbilityInPersistent_Boost
/// Size: 0x0008 (0x000008 - 0x000010)
class FRockVehicleAbilityInPersistent_Boost : public FRockVehicleAbilityInPersistent
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/RockVehicleRuntime.RockVehicleAbilityInContinuous_Boost
/// Size: 0x0008 (0x000040 - 0x000048)
class FRockVehicleAbilityInContinuous_Boost : public FRockVehicleAbilityInContinuous
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	DMember(bool)                                      bHasBoost                                                   OFFSET(get<bool>, {0x40, 1, 0, 0})
};

/// Struct /Script/RockVehicleRuntime.RockDodgeImpulse_PhysicsThread
/// Size: 0x0008 (0x000000 - 0x000008)
class FRockDodgeImpulse_PhysicsThread : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/RockVehicleRuntime.RockDodgeImpulse
/// Size: 0x0060 (0x000000 - 0x000060)
class FRockDodgeImpulse : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FRockScalableFloat)                        VelocityChange                                              OFFSET(getStruct<T>, {0x0, 48, 0, 0})
	SMember(FRockScalableFloat)                        MaxSpeedScale                                               OFFSET(getStruct<T>, {0x30, 48, 0, 0})
};

/// Struct /Script/RockVehicleRuntime.RockVehicleAbilityInPersistent_Dodge
/// Size: 0x0040 (0x000008 - 0x000048)
class FRockVehicleAbilityInPersistent_Dodge : public FRockVehicleAbilityInPersistent
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Struct /Script/RockVehicleRuntime.RockVehicleAbilityInContinuous_Dodge
/// Size: 0x0008 (0x000040 - 0x000048)
class FRockVehicleAbilityInContinuous_Dodge : public FRockVehicleAbilityInContinuous
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	DMember(bool)                                      bWheelsOnGround                                             OFFSET(get<bool>, {0x40, 1, 0, 0})
};

/// Struct /Script/RockVehicleRuntime.RockVehicleAbilityInPersistent_DoubleJump
/// Size: 0x0008 (0x000008 - 0x000010)
class FRockVehicleAbilityInPersistent_DoubleJump : public FRockVehicleAbilityInPersistent
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/RockVehicleRuntime.RockVehicleAbilityInPersistent_Flip
/// Size: 0x0010 (0x000008 - 0x000018)
class FRockVehicleAbilityInPersistent_Flip : public FRockVehicleAbilityInPersistent
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/RockVehicleRuntime.RockVehicleAbilityInContinuous_Flip
/// Size: 0x0008 (0x000040 - 0x000048)
class FRockVehicleAbilityInContinuous_Flip : public FRockVehicleAbilityInContinuous
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	DMember(bool)                                      bWheelsOnGround                                             OFFSET(get<bool>, {0x40, 1, 0, 0})
};

/// Struct /Script/RockVehicleRuntime.GroundTrailsData
/// Size: 0x0010 (0x000000 - 0x000010)
class FGroundTrailsData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TEnumAsByte<EPhysicalSurface>)             SurfaceType                                                 OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(class UNiagaraSystem*)                     NiagaraFX                                                   OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/RockVehicleRuntime.GroundTrailsMap
/// Size: 0x0018 (0x000000 - 0x000018)
class FGroundTrailsMap : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(class UNiagaraSystem*)                     DefaultTrails                                               OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(TArray<FGroundTrailsData>)                 GroundTrails                                                OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/RockVehicleRuntime.RockVehicleAbilityInPersistent_Jump
/// Size: 0x0010 (0x000008 - 0x000018)
class FRockVehicleAbilityInPersistent_Jump : public FRockVehicleAbilityInPersistent
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/RockVehicleRuntime.RockVehicleAbilityOutContinuous
/// Size: 0x0001 (0x000000 - 0x000001)
class FRockVehicleAbilityOutContinuous : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
	DMember(bool)                                      bShouldStayActive                                           OFFSET(get<bool>, {0x0, 1, 0, 0})
};

/// Struct /Script/RockVehicleRuntime.RockVehicleAbilityOutPersistent
/// Size: 0x0004 (0x000000 - 0x000004)
class FRockVehicleAbilityOutPersistent : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(float)                                     ActiveSeconds                                               OFFSET(get<float>, {0x0, 4, 0, 0})
};

/// Struct /Script/RockVehicleRuntime.RockVehileAbilityInContinous_StickyWheels
/// Size: 0x0020 (0x000040 - 0x000060)
class FRockVehileAbilityInContinous_StickyWheels : public FRockVehicleAbilityInContinuous
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FVector)                                   ContactNormal                                               OFFSET(getStruct<T>, {0x40, 24, 0, 0})
	DMember(float)                                     Scale                                                       OFFSET(get<float>, {0x58, 4, 0, 0})
	DMember(bool)                                      bAnyWheelsOnGround                                          OFFSET(get<bool>, {0x5C, 1, 0, 0})
};

/// Struct /Script/RockVehicleRuntime.RockVehicleAnalyticsSession
/// Size: 0x0028 (0x000000 - 0x000028)
class FRockVehicleAnalyticsSession : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(class AFortPlayerController*)              DriverPC                                                    OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/RockVehicleRuntime.RockVehicleWheelAnimInfo
/// Size: 0x0014 (0x000000 - 0x000014)
class FRockVehicleWheelAnimInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	DMember(float)                                     SpringToWheelOffsetZ                                        OFFSET(get<float>, {0x0, 4, 0, 0})
	SMember(FFloatInterval)                            SpringTravelRange                                           OFFSET(getStruct<T>, {0x4, 8, 0, 0})
	DMember(float)                                     WheelRadius                                                 OFFSET(get<float>, {0xC, 4, 0, 0})
};

/// Struct /Script/RockVehicleRuntime.RockCameraSettings
/// Size: 0x001C (0x000000 - 0x00001C)
class FRockCameraSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 28;

public:
	DMember(float)                                     FOV                                                         OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     Height                                                      OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     pitch                                                       OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     Distance                                                    OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     Stiffness                                                   OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     SwivelSpeed                                                 OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     TransitionSpeed                                             OFFSET(get<float>, {0x18, 4, 0, 0})
};

/// Struct /Script/RockVehicleRuntime.RockThrottledValue
/// Size: 0x0008 (0x000000 - 0x000008)
class FRockThrottledValue : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(float)                                     RiseRate                                                    OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     FallRate                                                    OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Struct /Script/RockVehicleRuntime.RockVehicleDriveConfig
/// Size: 0x0510 (0x000000 - 0x000510)
class FRockVehicleDriveConfig : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1296;

public:
	SMember(FRockScalableFloat)                        DriveAccel                                                  OFFSET(getStruct<T>, {0x0, 48, 0, 0})
	SMember(FRockScalableFloat)                        DriveTopSpeed                                               OFFSET(getStruct<T>, {0x30, 48, 0, 0})
	SMember(FRockScalableFloat)                        BrakeAccel                                                  OFFSET(getStruct<T>, {0x60, 48, 0, 0})
	SMember(FRockScalableFloat)                        StopSpeed                                                   OFFSET(getStruct<T>, {0x90, 48, 0, 0})
	DMember(float)                                     IdleBrakeFactor                                             OFFSET(get<float>, {0xC0, 4, 0, 0})
	SMember(FRuntimeFloatCurve)                        DriveAccelCurve                                             OFFSET(getStruct<T>, {0xC8, 136, 0, 0})
	SMember(FRuntimeFloatCurve)                        SteerAngleCurve                                             OFFSET(getStruct<T>, {0x150, 136, 0, 0})
	SMember(FRuntimeFloatCurve)                        LatFrictionCurve                                            OFFSET(getStruct<T>, {0x1D8, 136, 0, 0})
	SMember(FRuntimeFloatCurve)                        LongFrictionCurve                                           OFFSET(getStruct<T>, {0x260, 136, 0, 0})
	SMember(FRuntimeFloatCurve)                        WallFrictionCurve                                           OFFSET(getStruct<T>, {0x2E8, 136, 0, 0})
	SMember(FRuntimeFloatCurve)                        HandbrakeSteerAngleCurve                                    OFFSET(getStruct<T>, {0x370, 136, 0, 0})
	SMember(FRuntimeFloatCurve)                        HandbrakeLatFrictionCurve                                   OFFSET(getStruct<T>, {0x3F8, 136, 0, 0})
	SMember(FRuntimeFloatCurve)                        HandbrakeLongFrictionCurve                                  OFFSET(getStruct<T>, {0x480, 136, 0, 0})
	SMember(FRockThrottledValue)                       HandbrakeRate                                               OFFSET(getStruct<T>, {0x508, 8, 0, 0})
};

/// Struct /Script/RockVehicleRuntime.RockVehicleSuspensionConfig
/// Size: 0x0020 (0x000000 - 0x000020)
class FRockVehicleSuspensionConfig : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(float)                                     MaxRaise                                                    OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     MaxDrop                                                     OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     Stiffness                                                   OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     DampingCompression                                          OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     DampingRelaxation                                           OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     Strength                                                    OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     RockDampingCompression                                      OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     RockDampingRelaxation                                       OFFSET(get<float>, {0x1C, 4, 0, 0})
};

/// Struct /Script/RockVehicleRuntime.RockVehicleAxleConfig
/// Size: 0x0034 (0x000000 - 0x000034)
class FRockVehicleAxleConfig : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 52;

public:
	DMember(float)                                     TranslateX                                                  OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     TranslateY                                                  OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     TranslateZ                                                  OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     WheelRadius                                                 OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     RestDistanceZ                                               OFFSET(get<float>, {0x10, 4, 0, 0})
	SMember(FRockVehicleSuspensionConfig)              Suspension                                                  OFFSET(getStruct<T>, {0x14, 32, 0, 0})
};

/// Struct /Script/RockVehicleRuntime.RockVehicleDemoConfig
/// Size: 0x0028 (0x000000 - 0x000028)
class FRockVehicleDemoConfig : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FGameplayTagContainer)                     VehiclesThatCanBeDemolished                                 OFFSET(getStruct<T>, {0x0, 32, 0, 0})
	DMember(float)                                     DemolishAngleYaw                                            OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(float)                                     DemolishAnglePitch                                          OFFSET(get<float>, {0x24, 4, 0, 0})
};

/// Enum /Script/RockVehicleRuntime.ERockBoostLogic
/// Size: 0x04
enum class ERockBoostLogic : uint8_t
{
	ERockBoostLogic__Standard                                                        = 0,
	ERockBoostLogic__Recharge                                                        = 1,
	ERockBoostLogic__Infinite                                                        = 2,
	ERockBoostLogic__ERockBoostLogic_MAX                                             = 3
};

