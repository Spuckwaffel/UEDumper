
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
/// dependency: TacticalSprintRuntime
/// dependency: TargetingSystem

/// Class /Script/BallisticShieldGameplayRuntime.BallisticShieldItemLayerAnimInstance
/// Size: 0x00E0 (0x0006F0 - 0x0007D0)
class UBallisticShieldItemLayerAnimInstance : public UFortItemLayerAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2000;

public:
	DMember(bool)                                      bIsRush                                                     OFFSET(get<bool>, {0x6F0, 1, 0, 0})
	DMember(bool)                                      bIsEquipping                                                OFFSET(get<bool>, {0x6F1, 1, 0, 0})
	DMember(bool)                                      bIsReloading                                                OFFSET(get<bool>, {0x6F2, 1, 0, 0})
	DMember(bool)                                      bEnterLanding                                               OFFSET(get<bool>, {0x6F3, 1, 0, 0})
	DMember(bool)                                      bExitLanding                                                OFFSET(get<bool>, {0x6F4, 1, 0, 0})
	DMember(bool)                                      bIsShieldBlocking                                           OFFSET(get<bool>, {0x6F5, 1, 0, 0})
	DMember(bool)                                      bIsStaggerBuildup                                           OFFSET(get<bool>, {0x6F6, 1, 0, 0})
	DMember(float)                                     Yaw                                                         OFFSET(get<float>, {0x6F8, 4, 0, 0})
	DMember(float)                                     ChargeAOAlpha                                               OFFSET(get<float>, {0x6FC, 4, 0, 0})
	DMember(int32_t)                                   GenderAndSize                                               OFFSET(get<int32_t>, {0x700, 4, 0, 0})
	DMember(float)                                     ReloadUBAlpha                                               OFFSET(get<float>, {0x704, 4, 0, 0})
	DMember(float)                                     MaskLeftArmAlpha                                            OFFSET(get<float>, {0x708, 4, 0, 0})
	DMember(float)                                     StaggerAmount                                               OFFSET(get<float>, {0x70C, 4, 0, 0})
};

/// Class /Script/BallisticShieldGameplayRuntime.BallisticShieldWeaponInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UBallisticShieldWeaponInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/BallisticShieldGameplayRuntime.BallisticShieldWeaponInterface.GetBallisticShieldData
	// void GetBallisticShieldData(EBallisticShieldPlayerActionState& BallisticShieldPlayerState, float& StaggerBuildupPercent); // [0xa327368] Native|Event|Public|HasOutParms|BlueprintEvent 
};

/// Class /Script/BallisticShieldGameplayRuntime.FortMovementMode_ELBShieldSprint
/// Size: 0x0038 (0x0003C8 - 0x000400)
class UFortMovementMode_ELBShieldSprint : public UFortMovementMode_ELTacSprint
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1024;

public:
	SMember(FScalableFloat)                            ChargeRotationRate                                          OFFSET(getStruct<T>, {0x3C8, 40, 0, 0})
	CMember(class UClass*)                             GrantedAbility                                              OFFSET(get<T>, {0x3F0, 8, 0, 0})
};

/// Class /Script/BallisticShieldGameplayRuntime.TargetingFilterTask_BShieldCharge
/// Size: 0x0088 (0x000028 - 0x0000B0)
class UTargetingFilterTask_BShieldCharge : public UTargetingFilterTask_BasicFilterTemplate
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	CMember(TArray<class UClass*>)                     WalkableActorClasses                                        OFFSET(get<T>, {0x28, 16, 0, 0})
	SMember(FScalableFloat)                            BashableActorAngle                                          OFFSET(getStruct<T>, {0x38, 40, 0, 0})
	SMember(FScalableFloat)                            MainTraceDistance                                           OFFSET(getStruct<T>, {0x60, 40, 0, 0})
	SMember(FScalableFloat)                            FloorHitZTolerance                                          OFFSET(getStruct<T>, {0x88, 40, 0, 0})
};

/// Enum /Script/BallisticShieldGameplayRuntime.EBallisticShieldPlayerActionState
/// Size: 0x04
enum class EBallisticShieldPlayerActionState : uint8_t
{
	EBallisticShieldPlayerActionState__Idling                                        = 0,
	EBallisticShieldPlayerActionState__Blocking                                      = 1,
	EBallisticShieldPlayerActionState__Charging                                      = 2,
	EBallisticShieldPlayerActionState__EBallisticShieldPlayerActionState_MAX         = 3
};

