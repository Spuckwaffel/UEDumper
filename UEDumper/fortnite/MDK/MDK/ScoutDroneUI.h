
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: DynamicUI
/// dependency: Engine
/// dependency: FortniteUI
/// dependency: GameplayAbilities
/// dependency: GameplayTags
/// dependency: ModularGameplay
/// dependency: ScoutDroneRuntime
/// dependency: UMG

/// Class /Script/ScoutDroneUI.FortMobileActionButtonBehaviorExtension_ScoutDroneUse
/// Size: 0x0020 (0x000080 - 0x0000A0)
class UFortMobileActionButtonBehaviorExtension_ScoutDroneUse : public UFortMobileActionButtonBehaviorExtension
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	SMember(FGameplayTagContainer)                     ContextTagToCheck                                           OFFSET(getStruct<T>, {0x80, 32, 0, 0})
};

/// Class /Script/ScoutDroneUI.FortMobileButtonBehaviorComponent_ScoutDronePickupItems
/// Size: 0x0030 (0x000048 - 0x000078)
class UFortMobileButtonBehaviorComponent_ScoutDronePickupItems : public UFortMobileButtonBehaviorComponent_Visibility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	SMember(FGameplayTagContainer)                     HoldingItemsTags                                            OFFSET(getStruct<T>, {0x48, 32, 0, 0})
	CMember(TWeakObjectPtr<UFortControllerComponent_Interaction*>) InteractionComponent                            OFFSET(get<T>, {0x68, 8, 0, 0})
};

/// Class /Script/ScoutDroneUI.DronePickUpIndicatorComponent
/// Size: 0x00B8 (0x0000A0 - 0x000158)
class UDronePickUpIndicatorComponent : public UGameFrameworkComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 344;

public:
	CMember(class UClass*)                             ItemIndicatorType                                           OFFSET(get<T>, {0xA0, 8, 0, 0})
	CMember(class UClass*)                             DbnoIndicatorType                                           OFFSET(get<T>, {0xA8, 8, 0, 0})
	SMember(FUserWidgetPool)                           IndicatorPool                                               OFFSET(getStruct<T>, {0xB0, 136, 0, 0})


	/// Functions
	// Function /Script/ScoutDroneUI.DronePickUpIndicatorComponent.OnDroneDestroyed
	// void OnDroneDestroyed(class AActor* DestroyedActor);                                                                     // [0xbfc53d8] Final|Native|Protected 
	// Function /Script/ScoutDroneUI.DronePickUpIndicatorComponent.Init
	// void Init(class AFortScoutDrone* Drone);                                                                                 // [0xbfc5200] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/ScoutDroneUI.ScoutDroneHUD
/// Size: 0x0120 (0x0002C8 - 0x0003E8)
class UScoutDroneHUD : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1000;

public:
	DMember(float)                                     TimeToConfirmTargetCache                                    OFFSET(get<float>, {0x2C8, 4, 0, 0})
	DMember(float)                                     InitialHealth                                               OFFSET(get<float>, {0x2CC, 4, 0, 0})
	SMember(FScalableFloat)                            WarningRange                                                OFFSET(getStruct<T>, {0x2D0, 40, 0, 0})
	SMember(FScalableFloat)                            SignalLossRange                                             OFFSET(getStruct<T>, {0x2F8, 40, 0, 0})
	SMember(FScalableFloat)                            UpdateSignalInterval                                        OFFSET(getStruct<T>, {0x320, 40, 0, 0})
	SMember(FGameplayTag)                              MarkAbilityTag                                              OFFSET(getStruct<T>, {0x348, 4, 0, 0})
	SMember(FGameplayTag)                              DismissAbilityTag                                           OFFSET(getStruct<T>, {0x34C, 4, 0, 0})
	SMember(FGameplayTag)                              InteractAbilityTag                                          OFFSET(getStruct<T>, {0x350, 4, 0, 0})
	SMember(FGameplayTag)                              PickUpAbilityTag                                            OFFSET(getStruct<T>, {0x354, 4, 0, 0})
	SMember(FGameplayTag)                              PickUpTargetsChangedTag                                     OFFSET(getStruct<T>, {0x358, 4, 0, 0})
	SMember(FGameplayTag)                              SpeedBoostAbilityTag                                        OFFSET(getStruct<T>, {0x35C, 4, 0, 0})
	CMember(class UOverlay*)                           Overlay_Health                                              OFFSET(get<T>, {0x360, 8, 0, 0})
	CMember(class UOverlay*)                           Overlay_EnergyLevel                                         OFFSET(get<T>, {0x368, 8, 0, 0})
	CMember(class UOverlay*)                           Overlay_Reticle                                             OFFSET(get<T>, {0x370, 8, 0, 0})
	CMember(class UOverlay*)                           Overlay_TetheringIndicator                                  OFFSET(get<T>, {0x378, 8, 0, 0})
	DMember(float)                                     MaxHealthCache                                              OFFSET(get<float>, {0x380, 4, 0, 0})
	DMember(float)                                     MaxEnergyCache                                              OFFSET(get<float>, {0x384, 4, 0, 0})
	SMember(FTimerHandle)                              SignalDataTimerHandle                                       OFFSET(getStruct<T>, {0x3D0, 8, 0, 0})
	CMember(TArray<FScoutDroneWidgetIdentifier>)       HUDIdentifiers                                              OFFSET(get<T>, {0x3D8, 16, 0, 0})


	/// Functions
	// Function /Script/ScoutDroneUI.ScoutDroneHUD.OnTargetingStatusChanged
	// void OnTargetingStatusChanged(FScoutDroneStatusData& StatusData);                                                        // [0x20c3f9c] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/ScoutDroneUI.ScoutDroneHUD.OnReticleChangeAbilityActivated
	// void OnReticleChangeAbilityActivated(FGameplayTag UpdatedTag);                                                           // [0x20c3f9c] Event|Protected|BlueprintEvent 
	// Function /Script/ScoutDroneUI.ScoutDroneHUD.OnOwningPlayerDamaged
	// void OnOwningPlayerDamaged();                                                                                            // [0x20c3f9c] Event|Protected|BlueprintEvent 
	// Function /Script/ScoutDroneUI.ScoutDroneHUD.OnDroneSpeedBoostAbilityUsed
	// void OnDroneSpeedBoostAbilityUsed();                                                                                     // [0x20c3f9c] Event|Protected|BlueprintEvent 
	// Function /Script/ScoutDroneUI.ScoutDroneHUD.OnDroneSpeedBoostAbilityEnd
	// void OnDroneSpeedBoostAbilityEnd();                                                                                      // [0x20c3f9c] Event|Protected|BlueprintEvent 
	// Function /Script/ScoutDroneUI.ScoutDroneHUD.OnDroneSignalDataUpdated
	// void OnDroneSignalDataUpdated(float DistanceFromPlayer, float SignalPercentage);                                         // [0x20c3f9c] Event|Protected|BlueprintEvent 
	// Function /Script/ScoutDroneUI.ScoutDroneHUD.OnDronePickUpTargetsEmpty
	// void OnDronePickUpTargetsEmpty();                                                                                        // [0x20c3f9c] Event|Protected|BlueprintEvent 
	// Function /Script/ScoutDroneUI.ScoutDroneHUD.OnDronePickUpTargetsAvailable
	// void OnDronePickUpTargetsAvailable();                                                                                    // [0x20c3f9c] Event|Protected|BlueprintEvent 
	// Function /Script/ScoutDroneUI.ScoutDroneHUD.OnDronePickUpAbilityUsed
	// void OnDronePickUpAbilityUsed();                                                                                         // [0x20c3f9c] Event|Protected|BlueprintEvent 
	// Function /Script/ScoutDroneUI.ScoutDroneHUD.OnDronePickUpAbilityEnd
	// void OnDronePickUpAbilityEnd();                                                                                          // [0x20c3f9c] Event|Protected|BlueprintEvent 
	// Function /Script/ScoutDroneUI.ScoutDroneHUD.OnDroneMarkAbilityUsed
	// void OnDroneMarkAbilityUsed();                                                                                           // [0x20c3f9c] Event|Protected|BlueprintEvent 
	// Function /Script/ScoutDroneUI.ScoutDroneHUD.OnDroneMarkAbilityEnd
	// void OnDroneMarkAbilityEnd();                                                                                            // [0x20c3f9c] Event|Protected|BlueprintEvent 
	// Function /Script/ScoutDroneUI.ScoutDroneHUD.OnDroneInteractAbilityUsed
	// void OnDroneInteractAbilityUsed();                                                                                       // [0x20c3f9c] Event|Protected|BlueprintEvent 
	// Function /Script/ScoutDroneUI.ScoutDroneHUD.OnDroneInteractAbilityEnd
	// void OnDroneInteractAbilityEnd();                                                                                        // [0x20c3f9c] Event|Protected|BlueprintEvent 
	// Function /Script/ScoutDroneUI.ScoutDroneHUD.OnDroneHealthUpdated
	// void OnDroneHealthUpdated(float HealthPercentage, float CurrentHealth);                                                  // [0x20c3f9c] Event|Protected|BlueprintEvent 
	// Function /Script/ScoutDroneUI.ScoutDroneHUD.OnDroneEnergyChanged
	// void OnDroneEnergyChanged(float EnergyPercentage);                                                                       // [0x20c3f9c] Event|Protected|BlueprintEvent 
	// Function /Script/ScoutDroneUI.ScoutDroneHUD.OnDroneDismissAbilityUsed
	// void OnDroneDismissAbilityUsed();                                                                                        // [0x20c3f9c] Event|Protected|BlueprintEvent 
	// Function /Script/ScoutDroneUI.ScoutDroneHUD.GetTargetConfirmationTime
	// float GetTargetConfirmationTime();                                                                                       // [0xbfc51d8] Final|Native|Private|BlueprintCallable 
	// Function /Script/ScoutDroneUI.ScoutDroneHUD.GetControlledDrone
	// class AFortScoutDrone* GetControlledDrone();                                                                             // [0xbfc51b4] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/ScoutDroneUI.ScoutDroneTetherIndicator
/// Size: 0x0020 (0x0002C8 - 0x0002E8)
class UScoutDroneTetherIndicator : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 744;

public:


	/// Functions
	// Function /Script/ScoutDroneUI.ScoutDroneTetherIndicator.GetControlledDrone
	// class AFortScoutDrone* GetControlledDrone();                                                                             // [0xbfc51b4] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ScoutDroneUI.ScoutDroneTetherIndicator.BP_WhileInWarningRange
	// void BP_WhileInWarningRange(float SignalIntensityPercentage);                                                            // [0x20c3f9c] Event|Protected|BlueprintEvent 
	// Function /Script/ScoutDroneUI.ScoutDroneTetherIndicator.BP_OnExitWarningRange
	// void BP_OnExitWarningRange();                                                                                            // [0x20c3f9c] Event|Protected|BlueprintEvent 
	// Function /Script/ScoutDroneUI.ScoutDroneTetherIndicator.BP_OnEnterWarningRange
	// void BP_OnEnterWarningRange();                                                                                           // [0x20c3f9c] Event|Protected|BlueprintEvent 
	// Function /Script/ScoutDroneUI.ScoutDroneTetherIndicator.BP_OnEnterSignalLossRange
	// void BP_OnEnterSignalLossRange();                                                                                        // [0x20c3f9c] Event|Protected|BlueprintEvent 
};

/// Class /Script/ScoutDroneUI.ScoutDroneUIDirector
/// Size: 0x0020 (0x0002B0 - 0x0002D0)
class AScoutDroneUIDirector : public ADynamicUIDirectorBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 720;

public:
	SMember(FGameplayTagContainer)                     HUDTagsToHide                                               OFFSET(getStruct<T>, {0x2B0, 32, 0, 0})


	/// Functions
	// Function /Script/ScoutDroneUI.ScoutDroneUIDirector.BP_OnScoutDroneDismissed
	// void BP_OnScoutDroneDismissed();                                                                                         // [0x20c3f9c] Event|Protected|BlueprintEvent 
	// Function /Script/ScoutDroneUI.ScoutDroneUIDirector.BP_OnScoutDroneDeployed
	// void BP_OnScoutDroneDeployed();                                                                                          // [0x20c3f9c] Event|Protected|BlueprintEvent 
};

/// Struct /Script/ScoutDroneUI.ScoutDroneWidgetIdentifier
/// Size: 0x0028 (0x000000 - 0x000028)
class FScoutDroneWidgetIdentifier : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FGameplayTagContainer)                     Tags                                                        OFFSET(getStruct<T>, {0x0, 32, 0, 0})
	CMember(TWeakObjectPtr<UWidget*>)                  WeakWdiget                                                  OFFSET(get<T>, {0x20, 8, 0, 0})
};

