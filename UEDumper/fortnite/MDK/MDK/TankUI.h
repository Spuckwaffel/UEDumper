
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CommonUI
/// dependency: CoreUObject
/// dependency: FortniteGame
/// dependency: FortniteUI
/// dependency: TankRuntime
/// dependency: UMG

/// Class /Script/TankUI.FortGameSettingRegistryExtension_Tank
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortGameSettingRegistryExtension_Tank : public UFortGameSettingRegistryExtension
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/TankUI.TankVehicleReticle
/// Size: 0x0020 (0x000530 - 0x000550)
class UTankVehicleReticle : public UFortAthenaVehicleDashboardWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1360;

public:
	CMember(class AFortTankVehicle*)                   OwningTankVehicle                                           OFFSET(get<T>, {0x530, 8, 0, 0})
	DMember(float)                                     MinTurretPitch                                              OFFSET(get<float>, {0x538, 4, 0, 0})
	DMember(float)                                     MaxTurretPitch                                              OFFSET(get<float>, {0x53C, 4, 0, 0})
	DMember(bool)                                      bDistanceMeterEnabled                                       OFFSET(get<bool>, {0x540, 1, 0, 0})
	DMember(bool)                                      bTankOrientationEventsEnabled                               OFFSET(get<bool>, {0x541, 1, 0, 0})


	/// Functions
	// Function /Script/TankUI.TankVehicleReticle.SetupVehicleFromBP
	// void SetupVehicleFromBP(class AActor* NewVehicle);                                                                       // [0xa988740] Final|Native|Protected|BlueprintCallable 
	// Function /Script/TankUI.TankVehicleReticle.OnTreadEnabledChanged
	// void OnTreadEnabledChanged(bool bEnabled, TEnumAsByte<ETreadSide> Side);                                                 // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/TankUI.TankVehicleReticle.OnTankTurretAimYawValueChanged
	// void OnTankTurretAimYawValueChanged(float Value);                                                                        // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/TankUI.TankVehicleReticle.OnTankTurretAimPitchValueChanged
	// void OnTankTurretAimPitchValueChanged(float pitch, float PitchPercent);                                                  // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/TankUI.TankVehicleReticle.OnTankTargetingReleased
	// void OnTankTargetingReleased();                                                                                          // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/TankUI.TankVehicleReticle.OnTankTargetingPressed
	// void OnTankTargetingPressed();                                                                                           // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/TankUI.TankVehicleReticle.OnTankRotationValueChanged
	// void OnTankRotationValueChanged(float TankValue, float TurretValue);                                                     // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/TankUI.TankVehicleReticle.OnTankHatchHealthChanged
	// void OnTankHatchHealthChanged(float HatchHealth, float HatchHealthMax, bool bNewlyDisabled, bool bNewlyEnabled);         // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/TankUI.TankVehicleReticle.OnTankEngineHealthChanged
	// void OnTankEngineHealthChanged(float EngineHealth, float EngineHealthMax, bool bNewlyDisabled, bool bNewlyEnabled);      // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/TankUI.TankVehicleReticle.OnTankDistanceUpdate
	// void OnTankDistanceUpdate(float Distance, float DistancePercent);                                                        // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/TankUI.TankVehicleReticle.OnCannonFired
	// void OnCannonFired(float RateTime);                                                                                      // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/TankUI.TankVehicleReticle.HandleOnEquipMountedWeapon
	// void HandleOnEquipMountedWeapon(class AFortWeaponRanged* EquippedMountedWeapon);                                         // [0xa9886c0] Final|Native|Private 
	// Function /Script/TankUI.TankVehicleReticle.HandleOnDamageablePartHealthChanged
	// void HandleOnDamageablePartHealthChanged(FVehicleDamageablePartConfig& PartConfig, FVehicleDamageablePart& Part, bool bNewlyDisabled, bool bNewlyEnabled); // [0xa9883c4] Final|Native|Private|HasOutParms 
};

