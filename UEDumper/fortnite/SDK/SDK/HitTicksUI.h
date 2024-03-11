
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: FortniteUI
/// dependency: GameplayTags
/// dependency: UMG

/// Class /Script/HitTicksUI.FortUserWidget_HitTicks
/// Size: 0x0180 (0x0002D0 - 0x000450)
class UFortUserWidget_HitTicks : public UFortUserWidget
{ 
public:
	bool                                               bShield;                                                    // 0x02D0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x02D1   (0x0007)  MISSED
	double                                             HitTime;                                                    // 0x02D8   (0x0008)  
	double                                             ShieldHitTime;                                              // 0x02E0   (0x0008)  
	double                                             TimeSinceHit;                                               // 0x02E8   (0x0008)  
	double                                             HitInterval;                                                // 0x02F0   (0x0008)  
	double                                             ShieldIconMaxAlpha;                                         // 0x02F8   (0x0008)  
	double                                             FadeDuration;                                               // 0x0300   (0x0008)  
	double                                             AccumulatedDamage;                                          // 0x0308   (0x0008)  
	class UImage*                                      HitMarker;                                                  // 0x0310   (0x0008)  
	class UImage*                                      ShieldIcon;                                                 // 0x0318   (0x0008)  
	EHitFeedbackMode                                   CurrentHitFeedbackMode;                                     // 0x0320   (0x0001)  
	bool                                               bUseNative;                                                 // 0x0321   (0x0001)  
	unsigned char                                      UnknownData01_5[0x6];                                       // 0x0322   (0x0006)  MISSED
	class AActor*                                      PrevHitPawn;                                                // 0x0328   (0x0008)  
	double                                             Damage;                                                     // 0x0330   (0x0008)  
	class UWidgetAnimation*                            Anim_Elimination2;                                          // 0x0338   (0x0008)  
	class UWidgetAnimation*                            Anim_ShieldCrack;                                           // 0x0340   (0x0008)  
	FLinearColor                                       BaseColor_BG1;                                              // 0x0348   (0x0010)  
	FLinearColor                                       ShieldColor_BG1;                                            // 0x0358   (0x0010)  
	FLinearColor                                       CritColor_BG1;                                              // 0x0368   (0x0010)  
	FLinearColor                                       ElimColor_BG1;                                              // 0x0378   (0x0010)  
	FLinearColor                                       BaseColor_BG2;                                              // 0x0388   (0x0010)  
	FLinearColor                                       ShieldColor_BG2;                                            // 0x0398   (0x0010)  
	FLinearColor                                       CritColor_BG2;                                              // 0x03A8   (0x0010)  
	FLinearColor                                       ElimColor_BG2;                                              // 0x03B8   (0x0010)  
	FLinearColor                                       BaseColor_Outline1;                                         // 0x03C8   (0x0010)  
	FLinearColor                                       ShieldColor_Outline1;                                       // 0x03D8   (0x0010)  
	FLinearColor                                       CritColor_Outline1;                                         // 0x03E8   (0x0010)  
	FLinearColor                                       ElimColor_Outline1;                                         // 0x03F8   (0x0010)  
	FLinearColor                                       BaseColor_Outline2;                                         // 0x0408   (0x0010)  
	FLinearColor                                       ShieldColor_Outline2;                                       // 0x0418   (0x0010)  
	FLinearColor                                       CritColor_Outline2;                                         // 0x0428   (0x0010)  
	FLinearColor                                       ElimColor_Outline2;                                         // 0x0438   (0x0010)  
	FGameplayTag                                       UseNativeMarkerTag;                                         // 0x0448   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x044C   (0x0004)  MISSED


	/// Functions
	// Function /Script/HitTicksUI.FortUserWidget_HitTicks.UpdateTickMarkerOpacity
	// void UpdateTickMarkerOpacity(float NewOpacity);                                                                       // [0xa940c8c] Final|Native|Protected|BlueprintCallable 
	// Function /Script/HitTicksUI.FortUserWidget_HitTicks.OnShieldBreak
	// void OnShieldBreak(bool bInOverShield);                                                                               // [0xa940c0c] Final|Native|Protected 
	// Function /Script/HitTicksUI.FortUserWidget_HitTicks.OnReticleSettingsChanged
	// void OnReticleSettingsChanged();                                                                                      // [0xa940bd8] Final|Native|Protected|BlueprintCallable 
	// Function /Script/HitTicksUI.FortUserWidget_HitTicks.OnPawnSet
	// void OnPawnSet();                                                                                                     // [0xa940bc4] Final|Native|Protected|BlueprintCallable 
	// Function /Script/HitTicksUI.FortUserWidget_HitTicks.OnDisplayHitNotify
	// void OnDisplayHitNotify(double InDamage, bool bInCritical, bool bInFatal, bool bInShield, class AActor* InPawn, FVector HitLocation, FGameplayTagContainer Tags); // [0xa9406e4] Final|Native|Protected|HasDefaults|BlueprintCallable 
	// Function /Script/HitTicksUI.FortUserWidget_HitTicks.HudScaleChanged
	// void HudScaleChanged();                                                                                               // [0xa9406d0] Final|Native|Protected|BlueprintCallable 
};

