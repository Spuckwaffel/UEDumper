
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: GameplayAbilities

/// Class /Script/DashRuntime.FortGameplayAbility_Dash
/// Size: 0x0170 (0x000B48 - 0x000CB8)
class UFortGameplayAbility_Dash : public UFortGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3256;

public:
	CMember(class AFortPlayerPawn*)                    OwningPawn                                                  OFFSET(get<T>, {0xB48, 8, 0, 0})
	SMember(FScalableFloat)                            UseMovementForTargetDeadzone                                OFFSET(getStruct<T>, {0xB50, 40, 0, 0})
	SMember(FScalableFloat)                            DashDistance                                                OFFSET(getStruct<T>, {0xB78, 40, 0, 0})
	SMember(FScalableFloat)                            DashEndVelocity                                             OFFSET(getStruct<T>, {0xBA0, 40, 0, 0})
	SMember(FScalableFloat)                            bDashEndVelocityUseZ                                        OFFSET(getStruct<T>, {0xBC8, 40, 0, 0})
	SMember(FScalableFloat)                            bUseDynamicZTarget                                          OFFSET(getStruct<T>, {0xBF0, 40, 0, 0})
	SMember(FScalableFloat)                            DynamicZMaxReverseAngle                                     OFFSET(getStruct<T>, {0xC18, 40, 0, 0})
	SMember(FScalableFloat)                            DynamicZMinReverseAngle                                     OFFSET(getStruct<T>, {0xC40, 40, 0, 0})
	SMember(FScalableFloat)                            DynamicZReverseModifier                                     OFFSET(getStruct<T>, {0xC68, 40, 0, 0})
	SMember(FScalableFloat)                            DynamicZReverseTargetMinZ                                   OFFSET(getStruct<T>, {0xC90, 40, 0, 0})


	/// Functions
	// Function /Script/DashRuntime.FortGameplayAbility_Dash.GetMoveDistance
	// float GetMoveDistance();                                                                                                 // [0xb42f484] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/DashRuntime.FortGameplayAbility_Dash.GetEndMovementVelocity
	// FVector GetEndMovementVelocity();                                                                                        // [0xb42f448] Native|Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/DashRuntime.FortGameplayAbility_Dash.GetDashTarget
	// FVector GetDashTarget();                                                                                                 // [0xb42f410] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DashRuntime.FortMovementMode_ExtDash
/// Size: 0x0008 (0x000120 - 0x000128)
class UFortMovementMode_ExtDash : public UFortMovementMode_BaseExtLogic
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:


	/// Functions
	// Function /Script/DashRuntime.FortMovementMode_ExtDash.TryActivateDashMME
	// bool TryActivateDashMME(class AFortPawn* TargetPawn, class UClass* DashMME, FFortMovementMode_DashCreationData& CreationData); // [0xb42f4b0] Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/DashRuntime.FortMovementMode_ExtDash.BP_UpdateBeforeCharacterMovement
	// EFortMovementModeExt_UpdateResult BP_UpdateBeforeCharacterMovement(float DeltaTime);                                     // [0x1340978] Event|Public|BlueprintEvent 
};

/// Struct /Script/DashRuntime.FortMovementMode_DashRuntimeData
/// Size: 0x0050 (0x000018 - 0x000068)
class FFortMovementMode_DashRuntimeData : public FFortMovementMode_BaseExtRuntimeData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
};

/// Struct /Script/DashRuntime.FortMovementMode_DashCreationData
/// Size: 0x0050 (0x000008 - 0x000058)
class FFortMovementMode_DashCreationData : public FFortMovementMode_BaseExtCreationData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FVector)                                   TargetLocation                                              OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	DMember(float)                                     duration                                                    OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(bool)                                      bRestrictSpeedToExpected                                    OFFSET(get<bool>, {0x24, 1, 0, 0})
	CMember(class UCurveVector*)                       PathOffsetCurve                                             OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(ERootMotionFinishVelocityMode)             VelocityOnFinishMode                                        OFFSET(get<T>, {0x30, 1, 0, 0})
	SMember(FVector)                                   SetVelocityOnFinish                                         OFFSET(getStruct<T>, {0x38, 24, 0, 0})
	DMember(float)                                     ClampVelocityOnFinish                                       OFFSET(get<float>, {0x50, 4, 0, 0})
};

