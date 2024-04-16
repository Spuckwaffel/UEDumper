
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: GameplayAbilities

/// Class /Script/CloakGameplay.FortGameCueNotifyLoop_Cloak
/// Size: 0x0078 (0x0009B0 - 0x000A28)
class AFortGameCueNotifyLoop_Cloak : public AFortGameplayCueNotify_Loop
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2600;

public:
	CMember(class AFortPlayerPawn*)                    TargetPlayer                                                OFFSET(get<T>, {0x9B0, 8, 0, 0})
	DMember(float)                                     VisibilityLevel                                             OFFSET(get<float>, {0x9B8, 4, 0, 0})
	DMember(float)                                     StationaryVisMult                                           OFFSET(get<float>, {0x9BC, 4, 0, 0})
	DMember(float)                                     MaxSpeedVisMult                                             OFFSET(get<float>, {0x9C0, 4, 0, 0})
	DMember(float)                                     SpeedForMaxVis                                              OFFSET(get<float>, {0x9C4, 4, 0, 0})
	DMember(float)                                     VisibilityMinFriendly                                       OFFSET(get<float>, {0x9C8, 4, 0, 0})
	DMember(float)                                     VisibilityMinNonfriendly                                    OFFSET(get<float>, {0x9CC, 4, 0, 0})
	DMember(float)                                     VisibilityLevelChangeRate                                   OFFSET(get<float>, {0x9D0, 4, 0, 0})
	CMember(TMap<FName, FFortGameCueCloakModifier>)    CloakModifiersByNameMap                                     OFFSET(get<T>, {0x9D8, 80, 0, 0})


	/// Functions
	// Function /Script/CloakGameplay.FortGameCueNotifyLoop_Cloak.TickVisibilityLevel
	// float TickVisibilityLevel(float DeltaSeconds);                                                                           // [0xb88948c] Final|Native|Protected|BlueprintCallable 
	// Function /Script/CloakGameplay.FortGameCueNotifyLoop_Cloak.SetModifierEnabled
	// bool SetModifierEnabled(FName& ModifierName, bool bNewEnabled);                                                          // [0xb88936c] Final|Native|Protected|HasOutParms|BlueprintCallable 
	// Function /Script/CloakGameplay.FortGameCueNotifyLoop_Cloak.SetModifierCanBeEnabled
	// bool SetModifierCanBeEnabled(FName& ModifierName, bool bNewCanBeEnabled);                                                // [0xb88924c] Final|Native|Protected|HasOutParms|BlueprintCallable 
	// Function /Script/CloakGameplay.FortGameCueNotifyLoop_Cloak.GetCurrentModifierValues
	// bool GetCurrentModifierValues(float& OutVisibilityMultiplier, float& OutVisibilityAddition, FName& ModifierName);        // [0xb889120] Final|Native|Protected|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/CloakGameplay.FortGameCueCloakModifier
/// Size: 0x00D0 (0x000000 - 0x0000D0)
class FFortGameCueCloakModifier : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	SMember(FScalableFloat)                            bCanBeEnabled                                               OFFSET(getStruct<T>, {0x0, 40, 0, 0})
	SMember(FScalableFloat)                            VisibilityModifierMultiplicative                            OFFSET(getStruct<T>, {0x28, 40, 0, 0})
	SMember(FScalableFloat)                            VisibilityModifierAdditive                                  OFFSET(getStruct<T>, {0x50, 40, 0, 0})
	SMember(FScalableFloat)                            AlphaTimeToEnabled                                          OFFSET(getStruct<T>, {0x78, 40, 0, 0})
	SMember(FScalableFloat)                            AlphaTimeToDisabled                                         OFFSET(getStruct<T>, {0xA0, 40, 0, 0})
	DMember(bool)                                      bCurrentlyEnabled                                           OFFSET(get<bool>, {0xC8, 1, 1, 0})
	DMember(float)                                     CurrentAlpha                                                OFFSET(get<float>, {0xCC, 4, 0, 0})
};

