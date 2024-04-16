
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

/// Class /Script/CustomControlsRuntime.CustomControlInputBindings_Base
/// Size: 0x0068 (0x000028 - 0x000090)
class UCustomControlInputBindings_Base : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	CMember(TWeakObjectPtr<UFortControllerComponent_CustomControls*>) OwnerCustomControlsComponent                 OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(TWeakObjectPtr<AFortPlayerController*>)    OwnerController                                             OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(TWeakObjectPtr<UFortEnhancedInputComponent*>) OwnerInputComponent                                      OFFSET(get<T>, {0x38, 8, 0, 0})
	DMember(float)                                     Priority                                                    OFFSET(get<float>, {0x40, 4, 0, 0})
	CMember(TArray<class UInputAction*>)               OwnedBoundActions                                           OFFSET(get<T>, {0x58, 16, 0, 0})
	CMember(TWeakObjectPtr<UFortInputMappingContext*>) InputMapping                                                OFFSET(get<T>, {0x68, 32, 0, 0})
	CMember(class UFortInputMappingContext*)           OwnedInputMapping                                           OFFSET(get<T>, {0x88, 8, 0, 0})
};

/// Class /Script/CustomControlsRuntime.CustomControlInputBindings_ThirdPersonSkydiving
/// Size: 0x0088 (0x000090 - 0x000118)
class UCustomControlInputBindings_ThirdPersonSkydiving : public UCustomControlInputBindings_Base
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 280;

public:
	CMember(TWeakObjectPtr<AFortPlayerPawn*>)          OwnerPawn                                                   OFFSET(get<T>, {0x90, 8, 0, 0})
	CMember(TWeakObjectPtr<UInputAction*>)             SkydivingDownInputAction                                    OFFSET(get<T>, {0x98, 32, 0, 0})
	CMember(TWeakObjectPtr<UInputAction*>)             SkydivingUpInputAction                                      OFFSET(get<T>, {0xB8, 32, 0, 0})
	SMember(FName)                                     MappingNameSkydivingDown                                    OFFSET(getStruct<T>, {0xD8, 4, 0, 0})
	SMember(FText)                                     DisplayNameSkydivingDown                                    OFFSET(getStruct<T>, {0xE0, 16, 0, 0})
	SMember(FName)                                     MappingNameSkydivingUp                                      OFFSET(getStruct<T>, {0xF0, 4, 0, 0})
	SMember(FText)                                     DisplayNameSkydivingUp                                      OFFSET(getStruct<T>, {0xF8, 16, 0, 0})
	DMember(float)                                     RotateStickThreshold                                        OFFSET(get<float>, {0x108, 4, 0, 0})
};

/// Class /Script/CustomControlsRuntime.CustomControlInputBindings_ThirdPersonSprint
/// Size: 0x0040 (0x000090 - 0x0000D0)
class UCustomControlInputBindings_ThirdPersonSprint : public UCustomControlInputBindings_Base
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	CMember(TWeakObjectPtr<UInputAction*>)             SprintMoveInputAction                                       OFFSET(get<T>, {0x98, 32, 0, 0})
	CMember(TWeakObjectPtr<AFortPlayerPawn*>)          OwnerPawn                                                   OFFSET(get<T>, {0xB8, 8, 0, 0})
	DMember(float)                                     RotateStickThreshold                                        OFFSET(get<float>, {0xC0, 4, 0, 0})
};

/// Class /Script/CustomControlsRuntime.CustomControlInputBindings_TwinStick
/// Size: 0x0040 (0x000090 - 0x0000D0)
class UCustomControlInputBindings_TwinStick : public UCustomControlInputBindings_Base
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	CMember(TWeakObjectPtr<UInputAction*>)             GamepadLookAtInputAction                                    OFFSET(get<T>, {0x90, 32, 0, 0})
	CMember(TWeakObjectPtr<UInputAction*>)             MouseLookAtInputAction                                      OFFSET(get<T>, {0xB0, 32, 0, 0})
};

/// Class /Script/CustomControlsRuntime.CustomControlOptions_Base
/// Size: 0x0048 (0x000028 - 0x000070)
class UCustomControlOptions_Base : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	DMember(float)                                     RangedAttackStateDuration                                   OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(float)                                     MeleeAttackStateDuration                                    OFFSET(get<float>, {0x2C, 4, 0, 0})
	CMember(TArray<class UClass*>)                     InputBindingsClasses                                        OFFSET(get<T>, {0x30, 16, 0, 0})
	SMember(FFortWeaponReticleData)                    FortWeaponReticleData                                       OFFSET(getStruct<T>, {0x40, 20, 0, 0})
	SMember(FInteractionPointOptions)                  InteractionPointOptions                                     OFFSET(getStruct<T>, {0x54, 16, 0, 0})
	CMember(class UTargetingPreset*)                   InteractionTargetingPreset                                  OFFSET(get<T>, {0x68, 8, 0, 0})


	/// Functions
	// Function /Script/CustomControlsRuntime.CustomControlOptions_Base.GetOwningComponent
	// class UFortControllerComponent_CustomControls* GetOwningComponent();                                                     // [0xc21f76c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomControlsRuntime.CustomControlOptions_Base.BP_OnDeactivate
	// void BP_OnDeactivate();                                                                                                  // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Script/CustomControlsRuntime.CustomControlOptions_Base.BP_OnActivate
	// void BP_OnActivate();                                                                                                    // [0x246f7d8] Event|Protected|BlueprintEvent 
};

/// Class /Script/CustomControlsRuntime.CustomControlOptions_ThirdPerson
/// Size: 0x0108 (0x000070 - 0x000178)
class UCustomControlOptions_ThirdPerson : public UCustomControlOptions_Base
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 376;

public:
	SMember(FCustomControlMovementModeData)            BaseMovementMode                                            OFFSET(getStruct<T>, {0x70, 48, 0, 0})
	SMember(FCustomControlMovementModeData)            ShootingMovementMode                                        OFFSET(getStruct<T>, {0xA0, 48, 0, 0})
	SMember(FCustomControlMovementModeData)            StrikingMovementMode                                        OFFSET(getStruct<T>, {0xD0, 48, 0, 0})
	SMember(FCustomControlMovementModeData)            AimingMovementMode                                          OFFSET(getStruct<T>, {0x100, 48, 0, 0})
	CMember(class UTargetingPreset*)                   RangedTargetingPresetTemplate                               OFFSET(get<T>, {0x130, 8, 0, 0})
	CMember(class UTargetingPreset*)                   RetentionTargetingPresetTemplate                            OFFSET(get<T>, {0x138, 8, 0, 0})
	CMember(class UTargetingPreset*)                   RangedAimingTargetingPresetTemplate                         OFFSET(get<T>, {0x140, 8, 0, 0})
	CMember(class UTargetingPreset*)                   MeleeTargetingPresetTemplate                                OFFSET(get<T>, {0x148, 8, 0, 0})
	DMember(float)                                     AngleToClampFire                                            OFFSET(get<float>, {0x150, 4, 0, 0})
	DMember(bool)                                      bShootMovementRequiresTarget                                OFFSET(get<bool>, {0x154, 1, 0, 0})
	DMember(bool)                                      bStrikeMovementRequiresTarget                               OFFSET(get<bool>, {0x155, 1, 0, 0})
	CMember(class UTargetingPreset*)                   RangedTargetingPreset                                       OFFSET(get<T>, {0x158, 8, 0, 0})
	CMember(class UTargetingPreset*)                   RetentionTargetingPreset                                    OFFSET(get<T>, {0x160, 8, 0, 0})
	CMember(class UTargetingPreset*)                   RangedAimTargetingPreset                                    OFFSET(get<T>, {0x168, 8, 0, 0})
	CMember(class UTargetingPreset*)                   MeleeTargetingPreset                                        OFFSET(get<T>, {0x170, 8, 0, 0})


	/// Functions
	// Function /Script/CustomControlsRuntime.CustomControlOptions_ThirdPerson.BP_InitRetentionTargetingPreset
	// void BP_InitRetentionTargetingPreset(class UTargetingPreset* Preset);                                                    // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Script/CustomControlsRuntime.CustomControlOptions_ThirdPerson.BP_InitRangedTargetingPreset
	// void BP_InitRangedTargetingPreset(class UTargetingPreset* Preset);                                                       // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Script/CustomControlsRuntime.CustomControlOptions_ThirdPerson.BP_InitMeleeTargetingPreset
	// void BP_InitMeleeTargetingPreset(class UTargetingPreset* Preset);                                                        // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Script/CustomControlsRuntime.CustomControlOptions_ThirdPerson.BP_InitAimingTargetingPreset
	// void BP_InitAimingTargetingPreset(class UTargetingPreset* Preset);                                                       // [0x246f7d8] Event|Protected|BlueprintEvent 
};

/// Class /Script/CustomControlsRuntime.FortControllerComponent_CustomControls
/// Size: 0x0198 (0x0000A8 - 0x000240)
class UFortControllerComponent_CustomControls : public UFortControllerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 576;

public:
	SMember(FCustomControlsState)                      CurrentState                                                OFFSET(getStruct<T>, {0xD8, 4, 0, 0})
	CMember(class UCustomControlOptions_Base*)         ActiveOptions                                               OFFSET(get<T>, {0xE0, 8, 0, 0})
	CMember(TArray<class UCustomControlOptions_Base*>) OwnedOptions                                                OFFSET(get<T>, {0xE8, 16, 0, 0})
	SMember(FGameplayTagQuery)                         BlockTagsQuery                                              OFFSET(getStruct<T>, {0x150, 72, 0, 0})
	CMember(TArray<class UCustomControlInputBindings_Base*>) ActiveInputBindings                                   OFFSET(get<T>, {0x1A0, 16, 0, 0})


	/// Functions
	// Function /Script/CustomControlsRuntime.FortControllerComponent_CustomControls.WeaponGetAimRotOverride
	// void WeaponGetAimRotOverride(class AFortWeapon* Weapon, EFortAbilityTargetingSource TargetingSource, FRotator& OutOverrideAimRot, bool& bOutExecutionResult); // [0xc21fd08] Final|Native|Private|HasOutParms|HasDefaults 
	// Function /Script/CustomControlsRuntime.FortControllerComponent_CustomControls.SetOptionsPriority
	// bool SetOptionsPriority(class UObject* ContextObject, float Priority, bool bRefreshRelativePriority);                    // [0xc21fa9c] Final|Native|Public|BlueprintCallable 
	// Function /Script/CustomControlsRuntime.FortControllerComponent_CustomControls.SetOptionsEnabled
	// bool SetOptionsEnabled(class UObject* ContextObject, bool bEnabled);                                                     // [0xc21f948] Final|Native|Public|BlueprintCallable 
	// Function /Script/CustomControlsRuntime.FortControllerComponent_CustomControls.ServerSetOptionsQueueBlocked
	// void ServerSetOptionsQueueBlocked(bool bIsBlocked);                                                                      // [0x8e12214] Final|Net|NetReliableNative|Event|Private|NetServer 
	// Function /Script/CustomControlsRuntime.FortControllerComponent_CustomControls.ServerSetFocusTarget
	// void ServerSetFocusTarget(class AActor* NewFocusTarget);                                                                 // [0x8a56f2c] Final|Net|NetReliableNative|Event|Private|NetServer 
	// Function /Script/CustomControlsRuntime.FortControllerComponent_CustomControls.RemoveOptions
	// void RemoveOptions(class UObject* ContextObject);                                                                        // [0xc21f888] Final|Native|Public|BlueprintCallable 
	// Function /Script/CustomControlsRuntime.FortControllerComponent_CustomControls.OnRep_ActiveOptions
	// void OnRep_ActiveOptions(class UCustomControlOptions_Base* OldOptions);                                                  // [0xc21f7c8] Final|Native|Private 
	// Function /Script/CustomControlsRuntime.FortControllerComponent_CustomControls.GetOptions
	// class UCustomControlOptions_Base* GetOptions(class UObject* ContextObject);                                              // [0xc21f68c] Final|Native|Public|BlueprintCallable 
	// Function /Script/CustomControlsRuntime.FortControllerComponent_CustomControls.GetMovementModeLogic
	// class UFortMovementMode_BaseExtLogic* GetMovementModeLogic();                                                            // [0xc21f668] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomControlsRuntime.FortControllerComponent_CustomControls.CreateOptions
	// class UCustomControlOptions_Base* CreateOptions(class UClass* OptionsClass);                                             // [0xc21f52c] Final|Native|Public|BlueprintCallable 
	// Function /Script/CustomControlsRuntime.FortControllerComponent_CustomControls.ClientRegisterTagsQueries
	// void ClientRegisterTagsQueries();                                                                                        // [0x8a1d30c] Final|Net|NetReliableNative|Event|Private|NetClient 
	// Function /Script/CustomControlsRuntime.FortControllerComponent_CustomControls.AddOptions
	// bool AddOptions(class UObject* ContextObject, class UCustomControlOptions_Base* Options, float Priority, bool bEnabled); // [0xc21f210] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/CustomControlsRuntime.FortMovementMode_BaseCCLogic
/// Size: 0x0000 (0x000120 - 0x000120)
class UFortMovementMode_BaseCCLogic : public UFortMovementMode_BaseExtLogic
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
};

/// Class /Script/CustomControlsRuntime.FortMovementMode_CCThirdPersonLogic
/// Size: 0x0000 (0x000120 - 0x000120)
class UFortMovementMode_CCThirdPersonLogic : public UFortMovementMode_BaseCCLogic
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
};

/// Class /Script/CustomControlsRuntime.FortMovementMode_CCThirdPersonFixedLogic
/// Size: 0x0000 (0x000120 - 0x000120)
class UFortMovementMode_CCThirdPersonFixedLogic : public UFortMovementMode_CCThirdPersonLogic
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
};

/// Class /Script/CustomControlsRuntime.FortMovementMode_CCThirdPersonTwinStickLogic
/// Size: 0x0018 (0x000120 - 0x000138)
class UFortMovementMode_CCThirdPersonTwinStickLogic : public UFortMovementMode_CCThirdPersonLogic
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 312;

public:


	/// Functions
	// Function /Script/CustomControlsRuntime.FortMovementMode_CCThirdPersonTwinStickLogic.SetStickRotation
	// void SetStickRotation(FRotator& InStickRotation);                                                                        // [0xc21fc70] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
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
	SMember(FFortMovementMode_CCThirdPersonCreationData) CreationData                                              OFFSET(getStruct<T>, {0x10, 32, 0, 0})
};

/// Struct /Script/CustomControlsRuntime.FortMovementMode_BaseCCCreationData
/// Size: 0x0000 (0x000008 - 0x000008)
class FFortMovementMode_BaseCCCreationData : public FFortMovementMode_BaseExtCreationData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/CustomControlsRuntime.FortMovementMode_CCThirdPersonCreationData
/// Size: 0x0018 (0x000008 - 0x000020)
class FFortMovementMode_CCThirdPersonCreationData : public FFortMovementMode_BaseCCCreationData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(float)                                     RotationRateYaw                                             OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     SpeedMultiplier                                             OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(bool)                                      bRotateTowardsTarget                                        OFFSET(get<bool>, {0x10, 1, 0, 0})
	DMember(float)                                     FixedFacingYaw                                              OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     TacticalSprintRotationRateYaw                               OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     SkydivingRotationRatePitch                                  OFFSET(get<float>, {0x1C, 4, 0, 0})
};

/// Struct /Script/CustomControlsRuntime.FortMovementMode_BaseCCRuntimeData
/// Size: 0x0000 (0x000018 - 0x000018)
class FFortMovementMode_BaseCCRuntimeData : public FFortMovementMode_BaseExtRuntimeData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/CustomControlsRuntime.FortMovementMode_CCThirdPersonRuntimeData
/// Size: 0x0018 (0x000018 - 0x000030)
class FFortMovementMode_CCThirdPersonRuntimeData : public FFortMovementMode_BaseCCRuntimeData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/CustomControlsRuntime.FortMovementMode_CCThirdPersonFixedRuntimeData
/// Size: 0x0018 (0x000030 - 0x000048)
class FFortMovementMode_CCThirdPersonFixedRuntimeData : public FFortMovementMode_CCThirdPersonRuntimeData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Struct /Script/CustomControlsRuntime.FortMovementMode_CCThirdPersonTwinStickRuntimeData
/// Size: 0x0018 (0x000030 - 0x000048)
class FFortMovementMode_CCThirdPersonTwinStickRuntimeData : public FFortMovementMode_CCThirdPersonRuntimeData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

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
	ECustomControlsFacingMode__TwinStick                                             = 1,
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

