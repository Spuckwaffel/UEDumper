
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
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
public:
};

/// Class /Script/TankUI.TankVehicleReticle
/// Size: 0x0020 (0x000530 - 0x000550)
class UTankVehicleReticle : public UFortAthenaVehicleDashboardWidget
{ 
public:
	class AFortTankVehicle*                            OwningTankVehicle;                                          // 0x0530   (0x0008)  
	float                                              MinTurretPitch;                                             // 0x0538   (0x0004)  
	float                                              MaxTurretPitch;                                             // 0x053C   (0x0004)  
	bool                                               bDistanceMeterEnabled;                                      // 0x0540   (0x0001)  
	bool                                               bTankOrientationEventsEnabled;                              // 0x0541   (0x0001)  
	unsigned char                                      UnknownData00_6[0xE];                                       // 0x0542   (0x000E)  MISSED


	/// Functions
	// Function /Script/TankUI.TankVehicleReticle.SetupVehicleFromBP
	// void SetupVehicleFromBP(class AActor* NewVehicle);                                                                    // [0xa988740] Final|Native|Protected|BlueprintCallable 
	// Function /Script/TankUI.TankVehicleReticle.OnTreadEnabledChanged
	// void OnTreadEnabledChanged(bool bEnabled, TEnumAsByte<ETreadSide> Side);                                              // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/TankUI.TankVehicleReticle.OnTankTurretAimYawValueChanged
	// void OnTankTurretAimYawValueChanged(float Value);                                                                     // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/TankUI.TankVehicleReticle.OnTankTurretAimPitchValueChanged
	// void OnTankTurretAimPitchValueChanged(float pitch, float PitchPercent);                                               // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/TankUI.TankVehicleReticle.OnTankTargetingReleased
	// void OnTankTargetingReleased();                                                                                       // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/TankUI.TankVehicleReticle.OnTankTargetingPressed
	// void OnTankTargetingPressed();                                                                                        // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/TankUI.TankVehicleReticle.OnTankRotationValueChanged
	// void OnTankRotationValueChanged(float TankValue, float TurretValue);                                                  // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/TankUI.TankVehicleReticle.OnTankHatchHealthChanged
	// void OnTankHatchHealthChanged(float HatchHealth, float HatchHealthMax, bool bNewlyDisabled, bool bNewlyEnabled);      // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/TankUI.TankVehicleReticle.OnTankEngineHealthChanged
	// void OnTankEngineHealthChanged(float EngineHealth, float EngineHealthMax, bool bNewlyDisabled, bool bNewlyEnabled);   // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/TankUI.TankVehicleReticle.OnTankDistanceUpdate
	// void OnTankDistanceUpdate(float Distance, float DistancePercent);                                                     // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/TankUI.TankVehicleReticle.OnCannonFired
	// void OnCannonFired(float RateTime);                                                                                   // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/TankUI.TankVehicleReticle.HandleOnEquipMountedWeapon
	// void HandleOnEquipMountedWeapon(class AFortWeaponRanged* EquippedMountedWeapon);                                      // [0xa9886c0] Final|Native|Private 
	// Function /Script/TankUI.TankVehicleReticle.HandleOnDamageablePartHealthChanged
	// void HandleOnDamageablePartHealthChanged(FVehicleDamageablePartConfig& PartConfig, FVehicleDamageablePart& Part, bool bNewlyDisabled, bool bNewlyEnabled); // [0xa9883c4] Final|Native|Private|HasOutParms 
};

