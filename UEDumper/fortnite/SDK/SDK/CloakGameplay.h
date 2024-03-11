
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: GameplayAbilities

/// Class /Script/CloakGameplay.FortGameCueNotifyLoop_Cloak
/// Size: 0x0078 (0x0009B0 - 0x000A28)
class AFortGameCueNotifyLoop_Cloak : public AFortGameplayCueNotify_Loop
{ 
public:
	class AFortPlayerPawn*                             TargetPlayer;                                               // 0x09B0   (0x0008)  
	float                                              VisibilityLevel;                                            // 0x09B8   (0x0004)  
	float                                              StationaryVisMult;                                          // 0x09BC   (0x0004)  
	float                                              MaxSpeedVisMult;                                            // 0x09C0   (0x0004)  
	float                                              SpeedForMaxVis;                                             // 0x09C4   (0x0004)  
	float                                              VisibilityMinFriendly;                                      // 0x09C8   (0x0004)  
	float                                              VisibilityMinNonfriendly;                                   // 0x09CC   (0x0004)  
	float                                              VisibilityLevelChangeRate;                                  // 0x09D0   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x09D4   (0x0004)  MISSED
	SDK_UNDEFINED(80,12421) /* TMap<FName, FFortGameCueCloakModifier> */ __um(CloakModifiersByNameMap);            // 0x09D8   (0x0050)  


	/// Functions
	// Function /Script/CloakGameplay.FortGameCueNotifyLoop_Cloak.TickVisibilityLevel
	// float TickVisibilityLevel(float DeltaSeconds);                                                                        // [0xa8b5750] Final|Native|Protected|BlueprintCallable 
	// Function /Script/CloakGameplay.FortGameCueNotifyLoop_Cloak.SetModifierEnabled
	// bool SetModifierEnabled(FName& ModifierName, bool bNewEnabled);                                                       // [0xa8b5630] Final|Native|Protected|HasOutParms|BlueprintCallable 
	// Function /Script/CloakGameplay.FortGameCueNotifyLoop_Cloak.SetModifierCanBeEnabled
	// bool SetModifierCanBeEnabled(FName& ModifierName, bool bNewCanBeEnabled);                                             // [0xa8b5510] Final|Native|Protected|HasOutParms|BlueprintCallable 
	// Function /Script/CloakGameplay.FortGameCueNotifyLoop_Cloak.GetCurrentModifierValues
	// bool GetCurrentModifierValues(float& OutVisibilityMultiplier, float& OutVisibilityAddition, FName& ModifierName);     // [0xa8b53e4] Final|Native|Protected|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/CloakGameplay.FortGameCueCloakModifier
/// Size: 0x00D0 (0x000000 - 0x0000D0)
struct FFortGameCueCloakModifier
{ 
	FScalableFloat                                     bCanBeEnabled;                                              // 0x0000   (0x0028)  
	FScalableFloat                                     VisibilityModifierMultiplicative;                           // 0x0028   (0x0028)  
	FScalableFloat                                     VisibilityModifierAdditive;                                 // 0x0050   (0x0028)  
	FScalableFloat                                     AlphaTimeToEnabled;                                         // 0x0078   (0x0028)  
	FScalableFloat                                     AlphaTimeToDisabled;                                        // 0x00A0   (0x0028)  
	bool                                               bCurrentlyEnabled : 1;                                      // 0x00C8:0 (0x0001)  
	unsigned char                                      UnknownData00_4[0x3];                                       // 0x00C9   (0x0003)  MISSED
	float                                              CurrentAlpha;                                               // 0x00CC   (0x0004)  
};

