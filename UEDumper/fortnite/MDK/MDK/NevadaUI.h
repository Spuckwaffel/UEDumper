
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CommonUI
/// dependency: CoreUObject
/// dependency: FortniteUI
/// dependency: NevadaRuntime
/// dependency: UMG

/// Class /Script/NevadaUI.FortNevadaVehicleReticle
/// Size: 0x00A8 (0x000530 - 0x0005D8)
class UFortNevadaVehicleReticle : public UFortAthenaVehicleDashboardWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1496;

public:
	CMember(class UClass*)                             NevadaTargetIndicatorClass                                  OFFSET(get<T>, {0x530, 8, 0, 0})
	CMember(class UNevadaTargetIndicator*)             TargetIndicator                                             OFFSET(get<T>, {0x538, 8, 0, 0})
	CMember(class AFortNevadaVehicle*)                 OwningNevadaVehicle                                         OFFSET(get<T>, {0x540, 8, 0, 0})
	SMember(FUserWidgetPool)                           IndicatorPool                                               OFFSET(getStruct<T>, {0x550, 136, 0, 0})


	/// Functions
	// Function /Script/NevadaUI.FortNevadaVehicleReticle.OnVehicleStateChanged
	// void OnVehicleStateChanged(ENevadaFlightStates VehicleState);                                                            // [0x186becc] Event|Protected|BlueprintEvent 
	// Function /Script/NevadaUI.FortNevadaVehicleReticle.OnTractorBeamEnabledChanged
	// void OnTractorBeamEnabledChanged(bool bEnabled);                                                                         // [0x186becc] Event|Protected|BlueprintEvent 
	// Function /Script/NevadaUI.FortNevadaVehicleReticle.OnTractorBeamDetached
	// void OnTractorBeamDetached();                                                                                            // [0x186becc] Event|Protected|BlueprintEvent 
	// Function /Script/NevadaUI.FortNevadaVehicleReticle.OnTractorBeamDeactivated
	// void OnTractorBeamDeactivated(float Cooldown);                                                                           // [0x186becc] Event|Protected|BlueprintEvent 
	// Function /Script/NevadaUI.FortNevadaVehicleReticle.OnTractorBeamChargeStarted
	// void OnTractorBeamChargeStarted();                                                                                       // [0x186becc] Event|Protected|BlueprintEvent 
	// Function /Script/NevadaUI.FortNevadaVehicleReticle.OnTractorBeamAttached
	// void OnTractorBeamAttached();                                                                                            // [0x186becc] Event|Protected|BlueprintEvent 
	// Function /Script/NevadaUI.FortNevadaVehicleReticle.OnTractorBeamActivated
	// void OnTractorBeamActivated();                                                                                           // [0x186becc] Event|Protected|BlueprintEvent 
	// Function /Script/NevadaUI.FortNevadaVehicleReticle.OnEnergyCanonFired
	// void OnEnergyCanonFired(float Cooldown);                                                                                 // [0x186becc] Event|Protected|BlueprintEvent 
	// Function /Script/NevadaUI.FortNevadaVehicleReticle.OnEnergyCannonEnabledChanged
	// void OnEnergyCannonEnabledChanged(bool bEnabled);                                                                        // [0x186becc] Event|Protected|BlueprintEvent 
	// Function /Script/NevadaUI.FortNevadaVehicleReticle.OnBatteryChanged
	// void OnBatteryChanged(float BatteryLevel);                                                                               // [0x186becc] Event|Protected|BlueprintEvent 
};

/// Class /Script/NevadaUI.NevadaTargetIndicator
/// Size: 0x0000 (0x0003D0 - 0x0003D0)
class UNevadaTargetIndicator : public UFortActorIndicatorWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 976;

public:


	/// Functions
	// Function /Script/NevadaUI.NevadaTargetIndicator.OnTractorBeamAttached
	// void OnTractorBeamAttached(bool bAttached);                                                                              // [0x186becc] Event|Protected|BlueprintEvent 
	// Function /Script/NevadaUI.NevadaTargetIndicator.OnTractorBeamActivated
	// void OnTractorBeamActivated(bool bActivated);                                                                            // [0x186becc] Event|Protected|BlueprintEvent 
};

