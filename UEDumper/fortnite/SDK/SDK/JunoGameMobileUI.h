
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: DynamicBacchusHUD
/// dependency: DynamicUI
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: FortniteUI
/// dependency: GameplayTags

/// Class /Script/JunoGameMobileUI.FortMobileButtonBehaviorComponent_OffhandVisuals
/// Size: 0x0020 (0x000048 - 0x000068)
class UFortMobileButtonBehaviorComponent_OffhandVisuals : public UFortMobileButtonBehaviorComponent_Visibility
{ 
public:
	unsigned char                                      UnknownData00_3[0x18];                                      // 0x0048   (0x0018)  MISSED
	class UFortItem*                                   CachedOffhandItem;                                          // 0x0060   (0x0008)  


	/// Functions
	// Function /Script/JunoGameMobileUI.FortMobileButtonBehaviorComponent_OffhandVisuals.HandleInventoryItemChanged
	// void HandleInventoryItemChanged(FJunoItemSlot& ItemSlot, EJunoItemChangeType ChangeType);                             // [0xb56b5d0] Final|Native|Private|HasOutParms 
};

/// Class /Script/JunoGameMobileUI.JunoMobileActionButtonBehavior_Interact
/// Size: 0x0000 (0x000138 - 0x000138)
class UJunoMobileActionButtonBehavior_Interact : public UFortMobileActionButtonBehavior
{ 
public:
};

/// Class /Script/JunoGameMobileUI.JunoGameDynamicMobileUIDirector
/// Size: 0x00D0 (0x000478 - 0x000548)
class AJunoGameDynamicMobileUIDirector : public ADynamicBacchusHUDDirector
{ 
public:
	unsigned char                                      UnknownData00_3[0x20];                                      // 0x0478   (0x0020)  MISSED
	FGameplayTagContainer                              HUDTagsToSkip;                                              // 0x0498   (0x0020)  
	SDK_UNDEFINED(24,14463) /* FText */                __um(ForcedPresetName);                                     // 0x04B8   (0x0018)  
	FGameplayTag                                       ForcedProfile;                                              // 0x04D0   (0x0004)  
	FGameplayTag                                       ForcedProfileContainer;                                     // 0x04D4   (0x0004)  
	SDK_UNDEFINED(80,14464) /* TMap<FGameplayTag, UDynamicUIScene*> */ __um(HUDContextVisibilityTagToScene);       // 0x04D8   (0x0050)  
	unsigned char                                      UnknownData01_6[0x20];                                      // 0x0528   (0x0020)  MISSED


	/// Functions
	// Function /Script/JunoGameMobileUI.JunoGameDynamicMobileUIDirector.UpdateHUDLayoutContexts
	// void UpdateHUDLayoutContexts(FGameplayTagContainer ContextsToAdd, FGameplayTagContainer ContextsToRemove);            // [0xb56b7a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameMobileUI.JunoGameDynamicMobileUIDirector.BP_OnBuildingModeChanged
	// void BP_OnBuildingModeChanged(FJunoEvent_BuildingModeChanged& Event);                                                 // [0x18a39e4] Event|Public|HasOutParms|BlueprintEvent 
};

