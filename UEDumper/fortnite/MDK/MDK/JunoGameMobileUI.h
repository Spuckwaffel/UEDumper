
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: DynamicBacchusHUD
/// dependency: DynamicUI
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: FortniteUI
/// dependency: GameplayTags
/// dependency: JunoGameNative

/// Class /Script/JunoGameMobileUI.FortMobileButtonBehaviorComponent_OffhandVisuals
/// Size: 0x0020 (0x000048 - 0x000068)
class UFortMobileButtonBehaviorComponent_OffhandVisuals : public UFortMobileButtonBehaviorComponent_Visibility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	CMember(class UFortItem*)                          CachedOffhandItem                                           OFFSET(get<T>, {0x60, 8, 0, 0})


	/// Functions
	// Function /Script/JunoGameMobileUI.FortMobileButtonBehaviorComponent_OffhandVisuals.HandleInventoryItemChanged
	// void HandleInventoryItemChanged(FJunoItemSlot& ItemSlot, EJunoItemChangeType ChangeType);                                // [0xcd4b6d4] Final|Native|Private|HasOutParms 
};

/// Class /Script/JunoGameMobileUI.JunoMobileActionButtonBehavior_Interact
/// Size: 0x0000 (0x000130 - 0x000130)
class UJunoMobileActionButtonBehavior_Interact : public UFortMobileActionButtonBehavior
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
};

/// Class /Script/JunoGameMobileUI.JunoGameDynamicMobileUIDirector
/// Size: 0x00C8 (0x000488 - 0x000550)
class AJunoGameDynamicMobileUIDirector : public ADynamicBacchusHUDDirector
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1360;

public:
	SMember(FGameplayTagContainer)                     HUDTagsToSkip                                               OFFSET(getStruct<T>, {0x4A8, 32, 0, 0})
	SMember(FText)                                     ForcedPresetName                                            OFFSET(getStruct<T>, {0x4C8, 16, 0, 0})
	SMember(FGameplayTag)                              ForcedProfile                                               OFFSET(getStruct<T>, {0x4D8, 4, 0, 0})
	SMember(FGameplayTag)                              ForcedProfileContainer                                      OFFSET(getStruct<T>, {0x4DC, 4, 0, 0})
	CMember(TMap<FGameplayTag, UDynamicUIScene*>)      HUDContextVisibilityTagToScene                              OFFSET(get<T>, {0x4E0, 80, 0, 0})


	/// Functions
	// Function /Script/JunoGameMobileUI.JunoGameDynamicMobileUIDirector.UpdateHUDLayoutContexts
	// void UpdateHUDLayoutContexts(FGameplayTagContainer ContextsToAdd, FGameplayTagContainer ContextsToRemove);               // [0xcd4b890] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameMobileUI.JunoGameDynamicMobileUIDirector.BP_OnBuildingModeChanged
	// void BP_OnBuildingModeChanged(FJunoEvent_BuildingModeChanged& Event);                                                    // [0x20c3f9c] Event|Public|HasOutParms|BlueprintEvent 
};

