
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: DynamicUI
/// dependency: Engine
/// dependency: FortniteUI
/// dependency: GameplayAbilities
/// dependency: GameplayTags
/// dependency: ModularGameplay
/// dependency: UMG

/// Class /Script/ScoutDroneUI.FortMobileActionButtonBehaviorExtension_ScoutDroneUse
/// Size: 0x0020 (0x000080 - 0x0000A0)
class UFortMobileActionButtonBehaviorExtension_ScoutDroneUse : public UFortMobileActionButtonBehaviorExtension
{ 
public:
	FGameplayTagContainer                              ContextTagToCheck;                                          // 0x0080   (0x0020)  
};

/// Class /Script/ScoutDroneUI.FortMobileButtonBehaviorComponent_ScoutDronePickupItems
/// Size: 0x0030 (0x000048 - 0x000078)
class UFortMobileButtonBehaviorComponent_ScoutDronePickupItems : public UFortMobileButtonBehaviorComponent_Visibility
{ 
public:
	FGameplayTagContainer                              HoldingItemsTags;                                           // 0x0048   (0x0020)  
	SDK_UNDEFINED(8,15543) /* TWeakObjectPtr<UFortControllerComponent_Interaction*> */ __um(InteractionComponent); // 0x0068   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0070   (0x0008)  MISSED
};

/// Class /Script/ScoutDroneUI.DronePickUpIndicatorComponent
/// Size: 0x00B8 (0x0000A0 - 0x000158)
class UDronePickUpIndicatorComponent : public UGameFrameworkComponent
{ 
public:
	class UClass*                                      ItemIndicatorType;                                          // 0x00A0   (0x0008)  
	class UClass*                                      DbnoIndicatorType;                                          // 0x00A8   (0x0008)  
	FUserWidgetPool                                    IndicatorPool;                                              // 0x00B0   (0x0088)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x0138   (0x0020)  MISSED


	/// Functions
	// Function /Script/ScoutDroneUI.DronePickUpIndicatorComponent.OnDroneDestroyed
	// void OnDroneDestroyed(class AActor* DestroyedActor);                                                                  // [0xab6c080] Final|Native|Protected 
	// Function /Script/ScoutDroneUI.DronePickUpIndicatorComponent.Init
	// void Init(class AFortScoutDrone* Drone);                                                                              // [0xab6bea8] Final|Native|Protected|BlueprintCallable 
};

/// Struct /Script/ScoutDroneUI.ScoutDroneWidgetIdentifier
/// Size: 0x0028 (0x000000 - 0x000028)
struct FScoutDroneWidgetIdentifier
{ 
	FGameplayTagContainer                              Tags;                                                       // 0x0000   (0x0020)  
	SDK_UNDEFINED(8,15544) /* TWeakObjectPtr<UWidget*> */ __um(WeakWdiget);                                        // 0x0020   (0x0008)  
};

/// Class /Script/ScoutDroneUI.ScoutDroneHUD
/// Size: 0x0120 (0x0002C0 - 0x0003E0)
class UScoutDroneHUD : public UUserWidget
{ 
public:
	float                                              TimeToConfirmTargetCache;                                   // 0x02C0   (0x0004)  
	float                                              InitialHealth;                                              // 0x02C4   (0x0004)  
	FScalableFloat                                     WarningRange;                                               // 0x02C8   (0x0028)  
	FScalableFloat                                     SignalLossRange;                                            // 0x02F0   (0x0028)  
	FScalableFloat                                     UpdateSignalInterval;                                       // 0x0318   (0x0028)  
	FGameplayTag                                       MarkAbilityTag;                                             // 0x0340   (0x0004)  
	FGameplayTag                                       DismissAbilityTag;                                          // 0x0344   (0x0004)  
	FGameplayTag                                       InteractAbilityTag;                                         // 0x0348   (0x0004)  
	FGameplayTag                                       PickUpAbilityTag;                                           // 0x034C   (0x0004)  
	FGameplayTag                                       PickUpTargetsChangedTag;                                    // 0x0350   (0x0004)  
	FGameplayTag                                       SpeedBoostAbilityTag;                                       // 0x0354   (0x0004)  
	class UOverlay*                                    Overlay_Health;                                             // 0x0358   (0x0008)  
	class UOverlay*                                    Overlay_EnergyLevel;                                        // 0x0360   (0x0008)  
	class UOverlay*                                    Overlay_Reticle;                                            // 0x0368   (0x0008)  
	class UOverlay*                                    Overlay_TetheringIndicator;                                 // 0x0370   (0x0008)  
	float                                              MaxHealthCache;                                             // 0x0378   (0x0004)  
	float                                              MaxEnergyCache;                                             // 0x037C   (0x0004)  
	unsigned char                                      UnknownData00_5[0x48];                                      // 0x0380   (0x0048)  MISSED
	FTimerHandle                                       SignalDataTimerHandle;                                      // 0x03C8   (0x0008)  
	TArray<FScoutDroneWidgetIdentifier>                HUDIdentifiers;                                             // 0x03D0   (0x0010)  


	/// Functions
	// Function /Script/ScoutDroneUI.ScoutDroneHUD.OnTargetingStatusChanged
	// void OnTargetingStatusChanged(FScoutDroneStatusData& StatusData);                                                     // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/ScoutDroneUI.ScoutDroneHUD.OnReticleChangeAbilityActivated
	// void OnReticleChangeAbilityActivated(FGameplayTag UpdatedTag);                                                        // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/ScoutDroneUI.ScoutDroneHUD.OnOwningPlayerDamaged
	// void OnOwningPlayerDamaged();                                                                                         // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/ScoutDroneUI.ScoutDroneHUD.OnDroneSpeedBoostAbilityUsed
	// void OnDroneSpeedBoostAbilityUsed();                                                                                  // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/ScoutDroneUI.ScoutDroneHUD.OnDroneSpeedBoostAbilityEnd
	// void OnDroneSpeedBoostAbilityEnd();                                                                                   // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/ScoutDroneUI.ScoutDroneHUD.OnDroneSignalDataUpdated
	// void OnDroneSignalDataUpdated(float DistanceFromPlayer, float SignalPercentage);                                      // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/ScoutDroneUI.ScoutDroneHUD.OnDronePickUpTargetsEmpty
	// void OnDronePickUpTargetsEmpty();                                                                                     // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/ScoutDroneUI.ScoutDroneHUD.OnDronePickUpTargetsAvailable
	// void OnDronePickUpTargetsAvailable();                                                                                 // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/ScoutDroneUI.ScoutDroneHUD.OnDronePickUpAbilityUsed
	// void OnDronePickUpAbilityUsed();                                                                                      // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/ScoutDroneUI.ScoutDroneHUD.OnDronePickUpAbilityEnd
	// void OnDronePickUpAbilityEnd();                                                                                       // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/ScoutDroneUI.ScoutDroneHUD.OnDroneMarkAbilityUsed
	// void OnDroneMarkAbilityUsed();                                                                                        // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/ScoutDroneUI.ScoutDroneHUD.OnDroneMarkAbilityEnd
	// void OnDroneMarkAbilityEnd();                                                                                         // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/ScoutDroneUI.ScoutDroneHUD.OnDroneInteractAbilityUsed
	// void OnDroneInteractAbilityUsed();                                                                                    // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/ScoutDroneUI.ScoutDroneHUD.OnDroneInteractAbilityEnd
	// void OnDroneInteractAbilityEnd();                                                                                     // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/ScoutDroneUI.ScoutDroneHUD.OnDroneHealthUpdated
	// void OnDroneHealthUpdated(float HealthPercentage, float CurrentHealth);                                               // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/ScoutDroneUI.ScoutDroneHUD.OnDroneEnergyChanged
	// void OnDroneEnergyChanged(float EnergyPercentage);                                                                    // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/ScoutDroneUI.ScoutDroneHUD.OnDroneDismissAbilityUsed
	// void OnDroneDismissAbilityUsed();                                                                                     // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/ScoutDroneUI.ScoutDroneHUD.GetTargetConfirmationTime
	// float GetTargetConfirmationTime();                                                                                    // [0xab6be80] Final|Native|Private|BlueprintCallable 
	// Function /Script/ScoutDroneUI.ScoutDroneHUD.GetControlledDrone
	// class AFortScoutDrone* GetControlledDrone();                                                                          // [0xab6be5c] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/ScoutDroneUI.ScoutDroneTetherIndicator
/// Size: 0x0020 (0x0002C0 - 0x0002E0)
class UScoutDroneTetherIndicator : public UUserWidget
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x02C0   (0x0020)  MISSED


	/// Functions
	// Function /Script/ScoutDroneUI.ScoutDroneTetherIndicator.GetControlledDrone
	// class AFortScoutDrone* GetControlledDrone();                                                                          // [0xab6be5c] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ScoutDroneUI.ScoutDroneTetherIndicator.BP_WhileInWarningRange
	// void BP_WhileInWarningRange(float SignalIntensityPercentage);                                                         // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/ScoutDroneUI.ScoutDroneTetherIndicator.BP_OnExitWarningRange
	// void BP_OnExitWarningRange();                                                                                         // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/ScoutDroneUI.ScoutDroneTetherIndicator.BP_OnEnterWarningRange
	// void BP_OnEnterWarningRange();                                                                                        // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/ScoutDroneUI.ScoutDroneTetherIndicator.BP_OnEnterSignalLossRange
	// void BP_OnEnterSignalLossRange();                                                                                     // [0x18a39e4] Event|Protected|BlueprintEvent 
};

/// Class /Script/ScoutDroneUI.ScoutDroneUIDirector
/// Size: 0x0020 (0x0002B0 - 0x0002D0)
class AScoutDroneUIDirector : public ADynamicUIDirectorBase
{ 
public:
	FGameplayTagContainer                              HUDTagsToHide;                                              // 0x02B0   (0x0020)  


	/// Functions
	// Function /Script/ScoutDroneUI.ScoutDroneUIDirector.BP_OnScoutDroneDismissed
	// void BP_OnScoutDroneDismissed();                                                                                      // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/ScoutDroneUI.ScoutDroneUIDirector.BP_OnScoutDroneDeployed
	// void BP_OnScoutDroneDeployed();                                                                                       // [0x18a39e4] Event|Protected|BlueprintEvent 
};

