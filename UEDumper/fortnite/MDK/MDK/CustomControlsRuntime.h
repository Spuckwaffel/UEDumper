
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: GameplayTags
/// dependency: ModularGameplay
/// dependency: TargetingSystem

/// Class /Script/CustomControlsRuntime.CustomControlOptions_Base
/// Size: 0x0038 (0x000028 - 0x000060)
class UCustomControlOptions_Base : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	DMember(float)                                     RangedAttackStateDuration                                   OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(float)                                     MeleeAttackStateDuration                                    OFFSET(get<float>, {0x2C, 4, 0, 0})
	SMember(FFortWeaponReticleData)                    FortWeaponReticleData                                       OFFSET(getStruct<T>, {0x30, 20, 0, 0})
	SMember(FInteractionPointOptions)                  InteractionPointOptions                                     OFFSET(getStruct<T>, {0x44, 16, 0, 0})
	CMember(class UTargetingPreset*)                   InteractionTargetingPreset                                  OFFSET(get<T>, {0x58, 8, 0, 0})


	/// Functions
	// Function /Script/CustomControlsRuntime.CustomControlOptions_Base.GetOwningComponent
	// class UFortControllerComponent_CustomControls* GetOwningComponent();                                                     // [0xab915a8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomControlsRuntime.CustomControlOptions_Base.BP_OnDeactivate
	// void BP_OnDeactivate();                                                                                                  // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/CustomControlsRuntime.CustomControlOptions_Base.BP_OnActivate
	// void BP_OnActivate();                                                                                                    // [0x18a39e4] Event|Protected|BlueprintEvent 
};

/// Class /Script/CustomControlsRuntime.CustomControlOptions_ThirdPerson
/// Size: 0x0108 (0x000060 - 0x000168)
class UCustomControlOptions_ThirdPerson : public UCustomControlOptions_Base
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 360;

public:
	SMember(FCustomControlMovementModeData)            BaseMovementMode                                            OFFSET(getStruct<T>, {0x60, 48, 0, 0})
	SMember(FCustomControlMovementModeData)            ShootingMovementMode                                        OFFSET(getStruct<T>, {0x90, 48, 0, 0})
	SMember(FCustomControlMovementModeData)            StrikingMovementMode                                        OFFSET(getStruct<T>, {0xC0, 48, 0, 0})
	SMember(FCustomControlMovementModeData)            AimingMovementMode                                          OFFSET(getStruct<T>, {0xF0, 48, 0, 0})
	CMember(class UTargetingPreset*)                   RangedTargetingPresetTemplate                               OFFSET(get<T>, {0x120, 8, 0, 0})
	CMember(class UTargetingPreset*)                   RetentionTargetingPresetTemplate                            OFFSET(get<T>, {0x128, 8, 0, 0})
	CMember(class UTargetingPreset*)                   RangedAimingTargetingPresetTemplate                         OFFSET(get<T>, {0x130, 8, 0, 0})
	CMember(class UTargetingPreset*)                   MeleeTargetingPresetTemplate                                OFFSET(get<T>, {0x138, 8, 0, 0})
	DMember(float)                                     AngleToClampFire                                            OFFSET(get<float>, {0x140, 4, 0, 0})
	DMember(bool)                                      bShootMovementRequiresTarget                                OFFSET(get<bool>, {0x144, 1, 0, 0})
	DMember(bool)                                      bStrikeMovementRequiresTarget                               OFFSET(get<bool>, {0x145, 1, 0, 0})
	CMember(class UTargetingPreset*)                   RangedTargetingPreset                                       OFFSET(get<T>, {0x148, 8, 0, 0})
	CMember(class UTargetingPreset*)                   RetentionTargetingPreset                                    OFFSET(get<T>, {0x150, 8, 0, 0})
	CMember(class UTargetingPreset*)                   RangedAimTargetingPreset                                    OFFSET(get<T>, {0x158, 8, 0, 0})
	CMember(class UTargetingPreset*)                   MeleeTargetingPreset                                        OFFSET(get<T>, {0x160, 8, 0, 0})


	/// Functions
	// Function /Script/CustomControlsRuntime.CustomControlOptions_ThirdPerson.BP_InitRetentionTargetingPreset
	// void BP_InitRetentionTargetingPreset(class UTargetingPreset* Preset);                                                    // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/CustomControlsRuntime.CustomControlOptions_ThirdPerson.BP_InitRangedTargetingPreset
	// void BP_InitRangedTargetingPreset(class UTargetingPreset* Preset);                                                       // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/CustomControlsRuntime.CustomControlOptions_ThirdPerson.BP_InitMeleeTargetingPreset
	// void BP_InitMeleeTargetingPreset(class UTargetingPreset* Preset);                                                        // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/CustomControlsRuntime.CustomControlOptions_ThirdPerson.BP_InitAimingTargetingPreset
	// void BP_InitAimingTargetingPreset(class UTargetingPreset* Preset);                                                       // [0x18a39e4] Event|Protected|BlueprintEvent 
};

/// Class /Script/CustomControlsRuntime.FortControllerComponent_CustomControls
/// Size: 0x0160 (0x0000A8 - 0x000208)
class UFortControllerComponent_CustomControls : public UFortControllerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 520;

public:
	SMember(FCustomControlsState)                      CurrentState                                                OFFSET(getStruct<T>, {0xA8, 4, 0, 0})
	CMember(class UCustomControlOptions_Base*)         ActiveOptions                                               OFFSET(get<T>, {0xB0, 8, 0, 0})
	DMember(char)                                      NotifyActiveOptionsUpdated                                  OFFSET(get<char>, {0xB8, 1, 0, 0})
	CMember(TArray<class UCustomControlOptions_Base*>) OwnedOptions                                                OFFSET(get<T>, {0xC0, 16, 0, 0})
	SMember(FGameplayTagQuery)                         BlockTagsQuery                                              OFFSET(getStruct<T>, {0x128, 72, 0, 0})


	/// Functions
	// Function /Script/CustomControlsRuntime.FortControllerComponent_CustomControls.WeaponGetAimRotOverride
	// void WeaponGetAimRotOverride(class AFortWeapon* Weapon, EFortAbilityTargetingSource TargetingSource, FRotator& OutOverrideAimRot, bool& bOutExecutionResult); // [0xab91878] Final|Native|Private|HasOutParms|HasDefaults 
	// Function /Script/CustomControlsRuntime.FortControllerComponent_CustomControls.SetOptionsEnabled
	// void SetOptionsEnabled(class UObject* ContextObject, bool bEnabled);                                                     // [0xab917b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CustomControlsRuntime.FortControllerComponent_CustomControls.ServerSetOptionsQueueBlocked
	// void ServerSetOptionsQueueBlocked(bool bIsBlocked);                                                                      // [0x875f574] Final|Net|NetReliableNative|Event|Private|NetServer 
	// Function /Script/CustomControlsRuntime.FortControllerComponent_CustomControls.ServerSetFocusTarget
	// void ServerSetFocusTarget(class AActor* NewFocusTarget);                                                                 // [0x844ad98] Final|Net|NetReliableNative|Event|Private|NetServer 
	// Function /Script/CustomControlsRuntime.FortControllerComponent_CustomControls.RemoveOptions
	// void RemoveOptions(class UObject* ContextObject);                                                                        // [0xab91730] Final|Native|Public|BlueprintCallable 
	// Function /Script/CustomControlsRuntime.FortControllerComponent_CustomControls.OnRep_NotifyActiveOptionsUpdated
	// void OnRep_NotifyActiveOptionsUpdated();                                                                                 // [0xab9171c] Final|Native|Private 
	// Function /Script/CustomControlsRuntime.FortControllerComponent_CustomControls.OnRep_ActiveOptions
	// void OnRep_ActiveOptions(class UCustomControlOptions_Base* OldOptions);                                                  // [0xab9169c] Final|Native|Private 
	// Function /Script/CustomControlsRuntime.FortControllerComponent_CustomControls.NotifyOptionsUpdated
	// void NotifyOptionsUpdated(class UCustomControlOptions_Base* Options);                                                    // [0xab91604] Final|Native|Public|BlueprintCallable 
	// Function /Script/CustomControlsRuntime.FortControllerComponent_CustomControls.GetOptions
	// class UCustomControlOptions_Base* GetOptions(class UObject* ContextObject);                                              // [0xab914c8] Final|Native|Public|BlueprintCallable 
	// Function /Script/CustomControlsRuntime.FortControllerComponent_CustomControls.CreateOptionsWithPriority
	// class UCustomControlOptions_Base* CreateOptionsWithPriority(class UObject* ContextObject, class UClass* OptionsClass, float Priority, bool bEnabled); // [0xab9122c] Final|Native|Public|BlueprintCallable 
	// Function /Script/CustomControlsRuntime.FortControllerComponent_CustomControls.ClientRegisterTagsQueries
	// void ClientRegisterTagsQueries();                                                                                        // [0x841c2d0] Final|Net|NetReliableNative|Event|Private|NetClient 
};

/// Class /Script/CustomControlsRuntime.FortMovementMode_ExtLogicBaseCustomControls
/// Size: 0x0000 (0x000120 - 0x000120)
class UFortMovementMode_ExtLogicBaseCustomControls : public UFortMovementMode_BaseExtLogic
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
};

/// Class /Script/CustomControlsRuntime.FortMovementMode_ExtLogicCCThirdPerson
/// Size: 0x0000 (0x000120 - 0x000120)
class UFortMovementMode_ExtLogicCCThirdPerson : public UFortMovementMode_ExtLogicBaseCustomControls
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
};

/// Struct /Script/CustomControlsRuntime.CustomControlsState
/// Size: 0x0004 (0x000000 - 0x000004)
class FCustomControlsState : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(bool)                                      bHasFocusTarget                                             OFFSET(get<bool>, {0x0, 1, 0, 0})
	CMember(ECustomControlsAttackType)                 AttackType                                                  OFFSET(get<T>, {0x1, 1, 0, 0})
	CMember(ECustomControlsTargetingType)              TargetingType                                               OFFSET(get<T>, {0x2, 1, 0, 0})
	CMember(ECustomControlsWeaponType)                 WeaponType                                                  OFFSET(get<T>, {0x3, 1, 0, 0})
};

/// Struct /Script/CustomControlsRuntime.InteractionPointOptions
/// Size: 0x0010 (0x000000 - 0x000010)
class FInteractionPointOptions : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(EInteractionOrigin)                        InteractionOrigin                                           OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(float)                                     InteractDistance                                            OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     InteractHighlightDistance                                   OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     InteractExtentRadius                                        OFFSET(get<float>, {0xC, 4, 0, 0})
};

/// Struct /Script/CustomControlsRuntime.CustomControlMovementModeData
/// Size: 0x0030 (0x000000 - 0x000030)
class FCustomControlMovementModeData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x0, 1, 0, 0})
	CMember(class UClass*)                             Class                                                       OFFSET(get<T>, {0x8, 8, 0, 0})
	SMember(FFortMovementMode_ExtCCThirdPersonCreationData) CreationData                                           OFFSET(getStruct<T>, {0x10, 32, 0, 0})
};

/// Struct /Script/CustomControlsRuntime.FortMovementMode_ExtBaseCustomControlsCreationData
/// Size: 0x0000 (0x000008 - 0x000008)
class FFortMovementMode_ExtBaseCustomControlsCreationData : public FFortMovementMode_BaseExtCreationData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/CustomControlsRuntime.FortMovementMode_ExtCCThirdPersonCreationData
/// Size: 0x0018 (0x000008 - 0x000020)
class FFortMovementMode_ExtCCThirdPersonCreationData : public FFortMovementMode_ExtBaseCustomControlsCreationData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(float)                                     RotationRateYaw                                             OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     SpeedMultiplier                                             OFFSET(get<float>, {0xC, 4, 0, 0})
	CMember(ECustomControlsFacingMode)                 FacingMode                                                  OFFSET(get<T>, {0x10, 1, 0, 0})
	DMember(float)                                     FixedFacingYaw                                              OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(bool)                                      bRotateTowardsTarget                                        OFFSET(get<bool>, {0x18, 1, 0, 0})
};

/// Struct /Script/CustomControlsRuntime.FortMovementMode_ExtBaseCustomControlsRuntimeData
/// Size: 0x0000 (0x000010 - 0x000010)
class FFortMovementMode_ExtBaseCustomControlsRuntimeData : public FFortMovementMode_BaseExtRuntimeData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/CustomControlsRuntime.FortMovementMode_ExtCCThirdPersonRuntimeData
/// Size: 0x0030 (0x000010 - 0x000040)
class FFortMovementMode_ExtCCThirdPersonRuntimeData : public FFortMovementMode_ExtBaseCustomControlsRuntimeData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Enum /Script/CustomControlsRuntime.ECustomControlsAttackType
/// Size: 0x05
enum class ECustomControlsAttackType : uint8_t
{
	ECustomControlsAttackType__None                                                  = 0,
	ECustomControlsAttackType__Ranged                                                = 1,
	ECustomControlsAttackType__Melee                                                 = 2,
	ECustomControlsAttackType__Throw                                                 = 3,
	ECustomControlsAttackType__ECustomControlsAttackType_MAX                         = 4
};

/// Enum /Script/CustomControlsRuntime.ECustomControlsTargetingType
/// Size: 0x05
enum class ECustomControlsTargetingType : uint8_t
{
	ECustomControlsTargetingType__None                                               = 0,
	ECustomControlsTargetingType__Aiming                                             = 1,
	ECustomControlsTargetingType__Windup                                             = 2,
	ECustomControlsTargetingType__MeleeLockOn                                        = 3,
	ECustomControlsTargetingType__ECustomControlsTargetingType_MAX                   = 4
};

/// Enum /Script/CustomControlsRuntime.ECustomControlsWeaponType
/// Size: 0x05
enum class ECustomControlsWeaponType : uint8_t
{
	ECustomControlsWeaponType__None                                                  = 0,
	ECustomControlsWeaponType__Ranged                                                = 1,
	ECustomControlsWeaponType__Melee                                                 = 2,
	ECustomControlsWeaponType__Other                                                 = 3,
	ECustomControlsWeaponType__ECustomControlsWeaponType_MAX                         = 4
};

/// Enum /Script/CustomControlsRuntime.EPlaceFireMissed
/// Size: 0x10
enum class EPlaceFireMissed : uint8_t
{
	EPlaceFireMissed__None                                                           = 0,
	EPlaceFireMissed__Left                                                           = 1,
	EPlaceFireMissed__Right                                                          = 2,
	EPlaceFireMissed__Up                                                             = 3,
	EPlaceFireMissed__Down                                                           = 4,
	EPlaceFireMissed__UpLeft                                                         = 5,
	EPlaceFireMissed__UpRight                                                        = 6,
	EPlaceFireMissed__DownLeft                                                       = 7,
	EPlaceFireMissed__DownRight                                                      = 8,
	EPlaceFireMissed__EPlaceFireMissed_MAX                                           = 9
};

/// Enum /Script/CustomControlsRuntime.ECustomControlsFacingMode
/// Size: 0x04
enum class ECustomControlsFacingMode : uint8_t
{
	ECustomControlsFacingMode__Movement                                              = 0,
	ECustomControlsFacingMode__Maintained                                            = 1,
	ECustomControlsFacingMode__Fixed                                                 = 2,
	ECustomControlsFacingMode__ECustomControlsFacingMode_MAX                         = 3
};

/// Enum /Script/CustomControlsRuntime.ECustomControlsLockOnMode
/// Size: 0x06
enum class ECustomControlsLockOnMode : uint8_t
{
	ECustomControlsLockOnMode__Never                                                 = 0,
	ECustomControlsLockOnMode__Always                                                = 1,
	ECustomControlsLockOnMode__Shooting                                              = 2,
	ECustomControlsLockOnMode__Aiming                                                = 3,
	ECustomControlsLockOnMode__ShootingOrAiming                                      = 4,
	ECustomControlsLockOnMode__ECustomControlsLockOnMode_MAX                         = 5
};

