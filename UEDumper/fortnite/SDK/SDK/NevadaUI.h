
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CommonUI
/// dependency: CoreUObject
/// dependency: FortniteUI
/// dependency: NevadaRuntime
/// dependency: UMG

/// Class /Script/NevadaUI.FortNevadaVehicleReticle
/// Size: 0x00A8 (0x000530 - 0x0005D8)
class UFortNevadaVehicleReticle : public UFortAthenaVehicleDashboardWidget
{ 
public:
	class UClass*                                      NevadaTargetIndicatorClass;                                 // 0x0530   (0x0008)  
	class UNevadaTargetIndicator*                      TargetIndicator;                                            // 0x0538   (0x0008)  
	class AFortNevadaVehicle*                          OwningNevadaVehicle;                                        // 0x0540   (0x0008)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0548   (0x0008)  MISSED
	FUserWidgetPool                                    IndicatorPool;                                              // 0x0550   (0x0088)  


	/// Functions
	// Function /Script/NevadaUI.FortNevadaVehicleReticle.OnVehicleStateChanged
	// void OnVehicleStateChanged(ENevadaFlightStates VehicleState);                                                         // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/NevadaUI.FortNevadaVehicleReticle.OnTractorBeamEnabledChanged
	// void OnTractorBeamEnabledChanged(bool bEnabled);                                                                      // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/NevadaUI.FortNevadaVehicleReticle.OnTractorBeamDetached
	// void OnTractorBeamDetached();                                                                                         // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/NevadaUI.FortNevadaVehicleReticle.OnTractorBeamDeactivated
	// void OnTractorBeamDeactivated(float Cooldown);                                                                        // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/NevadaUI.FortNevadaVehicleReticle.OnTractorBeamChargeStarted
	// void OnTractorBeamChargeStarted();                                                                                    // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/NevadaUI.FortNevadaVehicleReticle.OnTractorBeamAttached
	// void OnTractorBeamAttached();                                                                                         // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/NevadaUI.FortNevadaVehicleReticle.OnTractorBeamActivated
	// void OnTractorBeamActivated();                                                                                        // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/NevadaUI.FortNevadaVehicleReticle.OnEnergyCanonFired
	// void OnEnergyCanonFired(float Cooldown);                                                                              // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/NevadaUI.FortNevadaVehicleReticle.OnEnergyCannonEnabledChanged
	// void OnEnergyCannonEnabledChanged(bool bEnabled);                                                                     // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/NevadaUI.FortNevadaVehicleReticle.OnBatteryChanged
	// void OnBatteryChanged(float BatteryLevel);                                                                            // [0x18a39e4] Event|Protected|BlueprintEvent 
};

/// Class /Script/NevadaUI.NevadaTargetIndicator
/// Size: 0x0000 (0x0003D0 - 0x0003D0)
class UNevadaTargetIndicator : public UFortActorIndicatorWidget
{ 
public:


	/// Functions
	// Function /Script/NevadaUI.NevadaTargetIndicator.OnTractorBeamAttached
	// void OnTractorBeamAttached(bool bAttached);                                                                           // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/NevadaUI.NevadaTargetIndicator.OnTractorBeamActivated
	// void OnTractorBeamActivated(bool bActivated);                                                                         // [0x18a39e4] Event|Protected|BlueprintEvent 
};

