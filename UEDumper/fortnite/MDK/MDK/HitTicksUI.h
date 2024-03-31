
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: FortniteUI
/// dependency: GameplayTags
/// dependency: UMG

/// Class /Script/HitTicksUI.FortUserWidget_HitTicks
/// Size: 0x0190 (0x0002D0 - 0x000460)
class UFortUserWidget_HitTicks : public UFortUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1120;

public:
	DMember(bool)                                      bShield                                                     OFFSET(get<bool>, {0x2D0, 1, 0, 0})
	DMember(double)                                    HitTime                                                     OFFSET(get<double>, {0x2D8, 8, 0, 0})
	DMember(double)                                    ShieldHitTime                                               OFFSET(get<double>, {0x2E0, 8, 0, 0})
	DMember(double)                                    TimeSinceHit                                                OFFSET(get<double>, {0x2E8, 8, 0, 0})
	DMember(double)                                    HitInterval                                                 OFFSET(get<double>, {0x2F0, 8, 0, 0})
	DMember(double)                                    ShieldIconMaxAlpha                                          OFFSET(get<double>, {0x2F8, 8, 0, 0})
	DMember(double)                                    FadeDuration                                                OFFSET(get<double>, {0x300, 8, 0, 0})
	DMember(double)                                    AccumulatedDamage                                           OFFSET(get<double>, {0x308, 8, 0, 0})
	CMember(class UImage*)                             HitMarker                                                   OFFSET(get<T>, {0x310, 8, 0, 0})
	CMember(class UImage*)                             ShieldIcon                                                  OFFSET(get<T>, {0x318, 8, 0, 0})
	CMember(EHitFeedbackMode)                          CurrentHitFeedbackMode                                      OFFSET(get<T>, {0x320, 1, 0, 0})
	DMember(bool)                                      bUseNative                                                  OFFSET(get<bool>, {0x321, 1, 0, 0})
	CMember(class AActor*)                             PrevHitPawn                                                 OFFSET(get<T>, {0x328, 8, 0, 0})
	DMember(double)                                    Damage                                                      OFFSET(get<double>, {0x330, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   Anim_Elimination2                                           OFFSET(get<T>, {0x338, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   Anim_ShieldCrack                                            OFFSET(get<T>, {0x340, 8, 0, 0})
	SMember(FLinearColor)                              BaseColor_BG1                                               OFFSET(getStruct<T>, {0x348, 16, 0, 0})
	SMember(FLinearColor)                              ShieldColor_BG1                                             OFFSET(getStruct<T>, {0x358, 16, 0, 0})
	SMember(FLinearColor)                              CritColor_BG1                                               OFFSET(getStruct<T>, {0x368, 16, 0, 0})
	SMember(FLinearColor)                              ElimColor_BG1                                               OFFSET(getStruct<T>, {0x378, 16, 0, 0})
	SMember(FLinearColor)                              BaseColor_BG2                                               OFFSET(getStruct<T>, {0x388, 16, 0, 0})
	SMember(FLinearColor)                              ShieldColor_BG2                                             OFFSET(getStruct<T>, {0x398, 16, 0, 0})
	SMember(FLinearColor)                              CritColor_BG2                                               OFFSET(getStruct<T>, {0x3A8, 16, 0, 0})
	SMember(FLinearColor)                              ElimColor_BG2                                               OFFSET(getStruct<T>, {0x3B8, 16, 0, 0})
	SMember(FLinearColor)                              BaseColor_Outline1                                          OFFSET(getStruct<T>, {0x3C8, 16, 0, 0})
	SMember(FLinearColor)                              ShieldColor_Outline1                                        OFFSET(getStruct<T>, {0x3D8, 16, 0, 0})
	SMember(FLinearColor)                              CritColor_Outline1                                          OFFSET(getStruct<T>, {0x3E8, 16, 0, 0})
	SMember(FLinearColor)                              ElimColor_Outline1                                          OFFSET(getStruct<T>, {0x3F8, 16, 0, 0})
	SMember(FLinearColor)                              BaseColor_Outline2                                          OFFSET(getStruct<T>, {0x408, 16, 0, 0})
	SMember(FLinearColor)                              ShieldColor_Outline2                                        OFFSET(getStruct<T>, {0x418, 16, 0, 0})
	SMember(FLinearColor)                              CritColor_Outline2                                          OFFSET(getStruct<T>, {0x428, 16, 0, 0})
	SMember(FLinearColor)                              ElimColor_Outline2                                          OFFSET(getStruct<T>, {0x438, 16, 0, 0})
	SMember(FGameplayTag)                              UseNativeMarkerTag                                          OFFSET(getStruct<T>, {0x448, 4, 0, 0})


	/// Functions
	// Function /Script/HitTicksUI.FortUserWidget_HitTicks.UpdateTickMarkerOpacity
	// void UpdateTickMarkerOpacity(float NewOpacity);                                                                          // [0xb782020] Final|Native|Protected|BlueprintCallable 
	// Function /Script/HitTicksUI.FortUserWidget_HitTicks.OnShieldBreak
	// void OnShieldBreak(bool bInOverShield);                                                                                  // [0xb781f5c] Final|Native|Protected 
	// Function /Script/HitTicksUI.FortUserWidget_HitTicks.OnReticleSettingsChanged
	// void OnReticleSettingsChanged();                                                                                         // [0xb781f28] Final|Native|Protected|BlueprintCallable 
	// Function /Script/HitTicksUI.FortUserWidget_HitTicks.OnPawnSet
	// void OnPawnSet();                                                                                                        // [0xb781f14] Final|Native|Protected|BlueprintCallable 
	// Function /Script/HitTicksUI.FortUserWidget_HitTicks.OnDisplayHitNotify
	// void OnDisplayHitNotify(double InDamage, bool bInCritical, bool bInFatal, bool bInShield, class AActor* InPawn, FVector HitLocation, FGameplayTagContainer Tags); // [0xb7819a4] Final|Native|Protected|HasDefaults|BlueprintCallable 
	// Function /Script/HitTicksUI.FortUserWidget_HitTicks.HudScaleChanged
	// void HudScaleChanged();                                                                                                  // [0xb781990] Final|Native|Protected|BlueprintCallable 
};

