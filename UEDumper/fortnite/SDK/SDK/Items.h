
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: Athena
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: GameplayAbilities
/// dependency: GameplayTags
/// dependency: JunoGameNative
/// dependency: ModularGameplay
/// dependency: SpecialSurfaceCoverageRuntime
/// dependency: VictoryCrownsReadRuntime
/// dependency: VictoryCrownsRuntime

/// Class /RankedPermanentQuests/Items/B_CosmeticStatObject_HabaneroProgression_Season28.B_CosmeticStatObject_HabaneroProgression_Season28_C
/// Size: 0x0000 (0x0000E0 - 0x0000E0)
class UB_CosmeticStatObject_HabaneroProgression_Season28_C : public UFortCosmeticStatObject_HabaneroProgressionSeasonal
{ 
public:
};

/// Class /RankedPermanentQuests/Items/B_CosmeticStatObject_HabaneroProgression_Season27.B_CosmeticStatObject_HabaneroProgression_Season27_C
/// Size: 0x0000 (0x0000E0 - 0x0000E0)
class UB_CosmeticStatObject_HabaneroProgression_Season27_C : public UFortCosmeticStatObject_HabaneroProgressionSeasonal
{ 
public:
};

/// Class /RankedPermanentQuests/Items/B_CosmeticStatObject_HabaneroProgression_Season26.B_CosmeticStatObject_HabaneroProgression_Season26_C
/// Size: 0x0000 (0x0000E0 - 0x0000E0)
class UB_CosmeticStatObject_HabaneroProgression_Season26_C : public UFortCosmeticStatObject_HabaneroProgressionSeasonal
{ 
public:
};

/// Class /RankedPermanentQuests/Items/B_CosmeticStatObject_HabaneroProgression.B_CosmeticStatObject_HabaneroProgression_C
/// Size: 0x0000 (0x0000D8 - 0x0000D8)
class UB_CosmeticStatObject_HabaneroProgression_C : public UFortCosmeticStatObject_HabaneroProgression
{ 
public:
};

/// Class /RankedPermanentQuests/Items/B_CosmeticStatObject_HabaneroProgression_Season29.B_CosmeticStatObject_HabaneroProgression_Season29_C
/// Size: 0x0000 (0x0000E0 - 0x0000E0)
class UB_CosmeticStatObject_HabaneroProgression_Season29_C : public UFortCosmeticStatObject_HabaneroProgressionSeasonal
{ 
public:
};

/// Class /SpecialSurfaceCoverage/Items/SnowSurfaceCoverageMap_GSC.SnowSurfaceCoverageMap_GSC_C
/// Size: 0x0000 (0x000110 - 0x000110)
class USnowSurfaceCoverageMap_GSC_C : public UFortGameStateComponent_SurfaceCoverageMap
{ 
public:
};

/// Class /VictoryCrownsRead/Items/B_CosmeticStatObject_HasCrown.B_CosmeticStatObject_HasCrown_C
/// Size: 0x0000 (0x000090 - 0x000090)
class UB_CosmeticStatObject_HasCrown_C : public UFortCosmeticStatObject_HasCrown
{ 
public:
};

/// Class /VictoryCrownsRead/Items/B_CosmeticStatObject_TotalRoyalRoyales.B_CosmeticStatObject_TotalRoyalRoyales_C
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UB_CosmeticStatObject_TotalRoyalRoyales_C : public UFortCosmeticStatObject_TotalRoyalRoyales
{ 
public:
};

/// Class /VictoryCrownsRead/Items/B_CosmeticStatObject_TotalVictoryCrowns.B_CosmeticStatObject_TotalVictoryCrowns_C
/// Size: 0x0000 (0x000090 - 0x000090)
class UB_CosmeticStatObject_TotalVictoryCrowns_C : public UFortCosmeticStatObject_TotalVictoryCrowns
{ 
public:
};

/// Class /VictoryCrownsGameplay/Items/VictoryCrownGameStateComponent.VictoryCrownGameStateComponent_C
/// Size: 0x0000 (0x0000F8 - 0x0000F8)
class UVictoryCrownGameStateComponent_C : public UFortGameStateComponent_VictoryCrowns
{ 
public:
};

/// Class /VictoryCrownsGameplay/Items/VictoryCrownComponent.VictoryCrownComponent_C
/// Size: 0x0008 (0x000270 - 0x000278)
class UVictoryCrownComponent_C : public UFortControllerComponent_VictoryCrowns
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0270   (0x0008)  


	/// Functions
	// Function /VictoryCrownsGameplay/Items/VictoryCrownComponent.VictoryCrownComponent_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                              // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /VictoryCrownsGameplay/Items/VictoryCrownComponent.VictoryCrownComponent_C.ExecuteUbergraph_VictoryCrownComponent
	// void ExecuteUbergraph_VictoryCrownComponent(int32_t EntryPoint);                                                      // [0x18a39e4] Final                
};

/// Class /VictoryCrownsGameplay/Items/VictoryCrownFrontEndPawnComponent.VictoryCrownFrontEndPawnComponent_C
/// Size: 0x001A (0x0000C0 - 0x0000DA)
class UVictoryCrownFrontEndPawnComponent_C : public UFortPawnComponent_VictoryCrownsFrontEnd
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x00C0   (0x0008)  
	FGameplayTag                                       CrownFXCueTag;                                              // 0x00C8   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00CC   (0x0004)  MISSED
	class APlayerPawn_Athena_C*                        AthenaPawn;                                                 // 0x00D0   (0x0008)  
	bool                                               AccountHasCrown;                                            // 0x00D8   (0x0001)  
	bool                                               AppliedCrownFX;                                             // 0x00D9   (0x0001)  


	/// Functions
	// Function /VictoryCrownsGameplay/Items/VictoryCrownFrontEndPawnComponent.VictoryCrownFrontEndPawnComponent_C.UpdateForGCNL
	// void UpdateForGCNL();                                                                                                 // [0x18a39e4] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /VictoryCrownsGameplay/Items/VictoryCrownFrontEndPawnComponent.VictoryCrownFrontEndPawnComponent_C.OnStatChanged_80A6FD2F402F11C0D0A207ACE25F03A6
	// void OnStatChanged_80A6FD2F402F11C0D0A207ACE25F03A6(FName StatName, int32_t StatValue);                               // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /VictoryCrownsGameplay/Items/VictoryCrownFrontEndPawnComponent.VictoryCrownFrontEndPawnComponent_C.PlaylistChanged
	// void PlaylistChanged();                                                                                               // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /VictoryCrownsGameplay/Items/VictoryCrownFrontEndPawnComponent.VictoryCrownFrontEndPawnComponent_C.ReceiveEndPlay
	// void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);                                                       // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /VictoryCrownsGameplay/Items/VictoryCrownFrontEndPawnComponent.VictoryCrownFrontEndPawnComponent_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                              // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /VictoryCrownsGameplay/Items/VictoryCrownFrontEndPawnComponent.VictoryCrownFrontEndPawnComponent_C.ExecuteUbergraph_VictoryCrownFrontEndPawnComponent
	// void ExecuteUbergraph_VictoryCrownFrontEndPawnComponent(int32_t EntryPoint);                                          // [0x18a39e4] Final                
};

/// Class /FigureCosmetics/Items/BP_FigureCosmeticsAccountItemDefinitionOverrideManager.BP_FigureCosmeticsAccountItemDefinitionOverrideManager_C
/// Size: 0x0000 (0x000190 - 0x000190)
class UBP_FigureCosmeticsAccountItemDefinitionOverrideManager_C : public UJunoAccountItemDefinitionOverrideManager
{ 
public:
};

/// Class /WeaponMods/Items/WeaponMods/ModGE/GE_ModWeaponAttributes.GE_ModWeaponAttributes_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_ModWeaponAttributes_C : public UGameplayEffect
{ 
public:
};

