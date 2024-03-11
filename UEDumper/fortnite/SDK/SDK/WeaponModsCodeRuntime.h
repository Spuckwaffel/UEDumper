
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: GameplayAbilities
/// dependency: ModularGameplay

/// Class /Script/WeaponModsCodeRuntime.FortModStation_WeaponUICapture
/// Size: 0x0020 (0x000290 - 0x0002B0)
class AFortModStation_WeaponUICapture : public AActor
{ 
public:
	char                                               PSOPrecachingCheckMaxRetries;                               // 0x0290   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0291   (0x0003)  MISSED
	SDK_UNDEFINED(8,15764) /* TWeakObjectPtr<UMeshComponent*> */ __um(MeshComponentPtr);                           // 0x0294   (0x0008)  
	unsigned char                                      UnknownData01_6[0x14];                                      // 0x029C   (0x0014)  MISSED


	/// Functions
	// Function /Script/WeaponModsCodeRuntime.FortModStation_WeaponUICapture.RefreshCaptureWhenPSOPrecachingDone
	// void RefreshCaptureWhenPSOPrecachingDone(class UMeshComponent* PreviewMeshComponent);                                 // [0xa2bd610] Final|Native|Protected|BlueprintCallable 
	// Function /Script/WeaponModsCodeRuntime.FortModStation_WeaponUICapture.OnRefreshCapture
	// void OnRefreshCapture();                                                                                              // [0x18a39e4] Event|Protected|BlueprintEvent 
};

/// Class /Script/WeaponModsCodeRuntime.FortWeaponModManagementComponent
/// Size: 0x0010 (0x0000A8 - 0x0000B8)
class UFortWeaponModManagementComponent : public UFortControllerComponent
{ 
public:
	SDK_UNDEFINED(16,15765) /* FMulticastInlineDelegate */ __um(OnWeaponModSlotsChanged);                          // 0x00A8   (0x0010)  


	/// Functions
	// Function /Script/WeaponModsCodeRuntime.FortWeaponModManagementComponent.WeaponModSlotsChangedDelegate__DelegateSignature
	// void WeaponModSlotsChangedDelegate__DelegateSignature(class AFortWeapon* Weapon);                                     // [0x18a39e4] MulticastDelegate|Public|Delegate 
	// Function /Script/WeaponModsCodeRuntime.FortWeaponModManagementComponent.ServerRequestRemoveModFromWeaponToInventory
	// void ServerRequestRemoveModFromWeaponToInventory(class UFortWeaponModItemDefinition* WeaponModDef, FGuid WeaponItemGuid); // [0xa2bdcc0] Final|Net|NetReliableNative|Event|Private|NetServer|HasDefaults 
	// Function /Script/WeaponModsCodeRuntime.FortWeaponModManagementComponent.ServerRequestAddModToWeaponFromInventory
	// void ServerRequestAddModToWeaponFromInventory(FGuid WeaponModItemGUID, FGuid WeaponItemGuid);                         // [0xa2bda88] Final|Net|NetReliableNative|Event|Private|NetServer|HasDefaults 
	// Function /Script/WeaponModsCodeRuntime.FortWeaponModManagementComponent.HandleWeaponUnequip
	// void HandleWeaponUnequip(class AFortWeapon* Weapon);                                                                  // [0xa2bd3b0] Final|Native|Private 
};

/// Class /Script/WeaponModsCodeRuntime.FortWeaponModStationBase
/// Size: 0x00D0 (0x000BC8 - 0x000C98)
class AFortWeaponModStationBase : public ABuildingProp
{ 
public:
	FMarkedActorDisplayInfo                            MarkerDisplay;                                              // 0x0BC8   (0x00A8)  
	FVector                                            MarkerPositionOffset;                                       // 0x0C70   (0x0018)  
	SDK_UNDEFINED(16,15766) /* FMulticastInlineDelegate */ __um(OnForceEndInteractionDelegate);                    // 0x0C88   (0x0010)  


	/// Functions
	// Function /Script/WeaponModsCodeRuntime.FortWeaponModStationBase.GetTransactionCurrency
	// class UFortResourceItemDefinition* GetTransactionCurrency();                                                          // [0xa2bd370] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/WeaponModsCodeRuntime.FortWeaponModStationBase.GetModCostOverride
	// bool GetModCostOverride(float& OutModCostOverride);                                                                   // [0xa2bd300] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/WeaponModsCodeRuntime.FortWeaponModStationBase.ForceEndInteractionsWithModStation
	// void ForceEndInteractionsWithModStation();                                                                            // [0xa2bd2d0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/WeaponModsCodeRuntime.FortWeaponModStationSharedDataComponent
/// Size: 0x00F8 (0x0000A0 - 0x000198)
class UFortWeaponModStationSharedDataComponent : public UFortGameStateComponent
{ 
public:
	class UDataTable*                                  ModCostData;                                                // 0x00A0   (0x0008)  
	SDK_UNDEFINED(80,15767) /* TMap<FGameplayTag, FFortModSlotPurchaseList> */ __um(ModSlotPurchaseLists);         // 0x00A8   (0x0050)  
	SDK_UNDEFINED(80,15768) /* TMap<FPrimaryAssetId, FFortModStationDataRow> */ __um(ModCostMap);                  // 0x00F8   (0x0050)  
	unsigned char                                      UnknownData00_6[0x50];                                      // 0x0148   (0x0050)  MISSED
};

/// Class /Script/WeaponModsCodeRuntime.FortWeaponModStationComponent
/// Size: 0x00E0 (0x0000A8 - 0x000188)
class UFortWeaponModStationComponent : public UFortControllerComponent
{ 
public:
	SDK_UNDEFINED(16,15769) /* FMulticastInlineDelegate */ __um(OnLocalModPurchaseStarted);                        // 0x00A8   (0x0010)  
	SDK_UNDEFINED(16,15770) /* FMulticastInlineDelegate */ __um(OnStartInteractWithWorkbenchActor);                // 0x00B8   (0x0010)  
	SDK_UNDEFINED(16,15771) /* FMulticastInlineDelegate */ __um(OnStopInteractWithWorkbenchActor);                 // 0x00C8   (0x0010)  
	class AFortWeaponModStationBase*                   CurrentInteractingWeaponModStation;                         // 0x00D8   (0x0008)  
	FScalableFloat                                     ModStationHotfixEnabled;                                    // 0x00E0   (0x0028)  
	FScalableFloat                                     RemoveModCost;                                              // 0x0108   (0x0028)  
	FScalableFloat                                     CancelInteractDistance;                                     // 0x0130   (0x0028)  
	class UFortWeaponModItemDefinition*                DefaultIronSightMod;                                        // 0x0158   (0x0008)  
	class UFortWeaponModItemDefinition*                DefaultMagazineMod;                                         // 0x0160   (0x0008)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x0168   (0x0020)  MISSED


	/// Functions
	// Function /Script/WeaponModsCodeRuntime.FortWeaponModStationComponent.StartInteractWithWorkbenchActor
	// void StartInteractWithWorkbenchActor(class AFortWeaponModStationBase* NewInteractingWeaponModStation);                // [0xa2bdecc] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/WeaponModsCodeRuntime.FortWeaponModStationComponent.ServerStopInteractWithWorkbenchActor
	// void ServerStopInteractWithWorkbenchActor(class AFortWeaponModStationBase* NewInteractingWeaponModStation);           // [0xa2bde48] Net|NetReliableNative|Event|Public|NetServer 
	// Function /Script/WeaponModsCodeRuntime.FortWeaponModStationComponent.ServerPurchaseWeaponModForWeapon
	// void ServerPurchaseWeaponModForWeapon(class UFortWeaponModItemDefinition* WeaponMod, class AFortWeapon* Weapon);      // [0xa2bd9c0] Final|Net|NetReliableNative|Event|Private|NetServer 
	// Function /Script/WeaponModsCodeRuntime.FortWeaponModStationComponent.ServerPurchaseRemoveMod
	// void ServerPurchaseRemoveMod(class UFortWeaponModItemDefinition* WeaponMod, class AFortWeapon* Weapon);               // [0xa2bd8f8] Final|Net|NetReliableNative|Event|Private|NetServer 
	// Function /Script/WeaponModsCodeRuntime.FortWeaponModStationComponent.OnStopInteractWithWorkbenchActorDelegate__DelegateSignature
	// void OnStopInteractWithWorkbenchActorDelegate__DelegateSignature(class AFortWeaponModStationBase* WeaponModStation);  // [0x18a39e4] MulticastDelegate|Public|Delegate 
	// Function /Script/WeaponModsCodeRuntime.FortWeaponModStationComponent.OnStartInteractWithWorkbenchActorDelegate__DelegateSignature
	// void OnStartInteractWithWorkbenchActorDelegate__DelegateSignature(class AFortWeaponModStationBase* NewInteractingWeaponModStation); // [0x18a39e4] MulticastDelegate|Public|Delegate 
	// Function /Script/WeaponModsCodeRuntime.FortWeaponModStationComponent.OnLocalModPurchaseStarted__DelegateSignature
	// void OnLocalModPurchaseStarted__DelegateSignature(FFortLocalModPurchaseEventParams& EventParams);                     // [0x18a39e4] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/WeaponModsCodeRuntime.FortWeaponModStationComponent.LocalPurchaseWeaponModForWeapon
	// void LocalPurchaseWeaponModForWeapon(class UFortWeaponModItemDefinition* WeaponMod, class AFortWeapon* Weapon);       // [0xa2bd548] RequiredAPI|Native|Event|Public|BlueprintEvent 
	// Function /Script/WeaponModsCodeRuntime.FortWeaponModStationComponent.LocalPurchaseRemoveMod
	// void LocalPurchaseRemoveMod(class UFortWeaponModItemDefinition* WeaponMod, class AFortWeapon* Weapon);                // [0xa2bd480] RequiredAPI|Native|Event|Public|BlueprintEvent 
	// Function /Script/WeaponModsCodeRuntime.FortWeaponModStationComponent.HandleStopLocalInteractingWithStation
	// void HandleStopLocalInteractingWithStation();                                                                         // [0xa2bd39c] Final|Native|Public  
	// Function /Script/WeaponModsCodeRuntime.FortWeaponModStationComponent.DoesCurrentWorkbenchHaveModsForWeapon
	// bool DoesCurrentWorkbenchHaveModsForWeapon(class AFortWeapon* Weapon);                                                // [0xa2bd14c] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/WeaponModsCodeRuntime.FortWeaponModStationComponent.ClientStartInteractWithWorkbenchActor
	// void ClientStartInteractWithWorkbenchActor(class AFortWeaponModStationBase* NewInteractingWeaponModStation);          // [0x9a22108] Net|NetReliableNative|Event|Public|NetClient 
	// Function /Script/WeaponModsCodeRuntime.FortWeaponModStationComponent.ClientNotifyServerForcedInteractOver
	// void ClientNotifyServerForcedInteractOver();                                                                          // [0x841c2d0] Net|NetReliableNative|Event|Public|NetClient 
	// Function /Script/WeaponModsCodeRuntime.FortWeaponModStationComponent.CanPlayerAffordRemoveModFromWeapon
	// bool CanPlayerAffordRemoveModFromWeapon(class UFortWeaponModItemDefinition* WeaponMod, class AFortWeapon* Weapon, class AController* Controller); // [0xa2bd04c] Native|Event|Public|BlueprintEvent|Const 
	// Function /Script/WeaponModsCodeRuntime.FortWeaponModStationComponent.CanPlayerAffordModForWeapon
	// bool CanPlayerAffordModForWeapon(class UFortWeaponModItemDefinition* WeaponMod, class AFortWeapon* Weapon, class AController* Controller); // [0xa2bcf4c] Native|Event|Public|BlueprintEvent|Const 
};

/// Class /Script/WeaponModsCodeRuntime.FortPickupInteractOverrideComponent_WeaponMods
/// Size: 0x0000 (0x0000C0 - 0x0000C0)
class UFortPickupInteractOverrideComponent_WeaponMods : public UFortPickupInteractOverrideComponent
{ 
public:


	/// Functions
	// Function /Script/WeaponModsCodeRuntime.FortPickupInteractOverrideComponent_WeaponMods.ServerApplyWeaponModFromPickup
	// void ServerApplyWeaponModFromPickup(class AFortPickup* Pickup, class UFortWeaponModItemDefinition* WeaponModDef, class AFortWeapon* Weapon); // [0xa2bd7fc] Net|NetReliableNative|Event|Protected|NetServer 
};

/// Struct /Script/WeaponModsCodeRuntime.FortLocalModPurchaseEventParams
/// Size: 0x0010 (0x000000 - 0x000010)
struct FFortLocalModPurchaseEventParams
{ 
	class AFortWeapon*                                 WeaponActor;                                                // 0x0000   (0x0008)  
	class UFortWeaponModItemDefinition*                WeaponMod;                                                  // 0x0008   (0x0008)  
};

/// Struct /Script/WeaponModsCodeRuntime.FortModStationDataRow
/// Size: 0x0010 (0x000008 - 0x000018)
struct FFortModStationDataRow : FTableRowBase
{ 
	class UFortWeaponModItemDefinition*                WeaponMod;                                                  // 0x0008   (0x0008)  
	float                                              GoldCost;                                                   // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/WeaponModsCodeRuntime.FortModSlotPurchaseList
/// Size: 0x0010 (0x000000 - 0x000010)
struct FFortModSlotPurchaseList
{ 
	TArray<FFortModStationDataRow>                     Mods;                                                       // 0x0000   (0x0010)  
};

