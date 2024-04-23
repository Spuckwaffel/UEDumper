
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: GameplayAbilities
/// dependency: GameplayTags

/// Class /Script/KeepScoreRuntime.FortWeaponKeepScore
/// Size: 0x0090 (0x001D00 - 0x001D90)
class AFortWeaponKeepScore : public AFortWeaponRanged
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 7568;

public:
	SMember(FMulticastInlineDelegate)                  OnFireFailed                                                OFFSET(getStruct<T>, {0x1D00, 16, 0, 0})
	DMember(bool)                                      bCurrentAttackOffhand                                       OFFSET(get<bool>, {0x1D10, 1, 0, 0})
	DMember(int32_t)                                   BulletPatternNumber                                         OFFSET(get<int32_t>, {0x1D2C, 4, 0, 0})
	DMember(bool)                                      bGateFireCall                                               OFFSET(get<bool>, {0x1D30, 1, 0, 0})
	SMember(FGameplayTag)                              IsFiringGameplayTag                                         OFFSET(getStruct<T>, {0x1D34, 4, 0, 0})
	SMember(FVector)                                   MuzzleLocationOffset                                        OFFSET(getStruct<T>, {0x1D38, 24, 0, 0})
	SMember(FGameplayTag)                              ReloadingTag                                                OFFSET(getStruct<T>, {0x1D50, 4, 0, 0})
	SMember(FGameplayTag)                              ReloadAbilityEventTag                                       OFFSET(getStruct<T>, {0x1D54, 4, 0, 0})
	SMember(FGameplayTag)                              FireAbilityEventTag                                         OFFSET(getStruct<T>, {0x1D58, 4, 0, 0})
	SMember(FScalableFloat)                            bAllowAutoReload                                            OFFSET(getStruct<T>, {0x1D60, 40, 0, 0})


	/// Functions
	// Function /Script/KeepScoreRuntime.FortWeaponKeepScore.TryCorrectAmmo
	// void TryCorrectAmmo();                                                                                                   // [0xbc08700] Final|Native|Public|BlueprintCallable 
	// Function /Script/KeepScoreRuntime.FortWeaponKeepScore.ReloadAmmo
	// void ReloadAmmo();                                                                                                       // [0xbc086ec] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/KeepScoreRuntime.FortWeaponKeepScore.OnFireFailed__DelegateSignature
	// void OnFireFailed__DelegateSignature();                                                                                  // [0x1340978] MulticastDelegate|Public|Delegate 
	// Function /Script/KeepScoreRuntime.FortWeaponKeepScore.HandleWeaponFired
	// void HandleWeaponFired(class UFortGameplayAbility* GameplayAbility, FGameplayTagContainer AbilityTags);                  // [0xbc085ec] Final|Native|Public  
	// Function /Script/KeepScoreRuntime.FortWeaponKeepScore.HandleIsFiringTagChange
	// void HandleIsFiringTagChange(FGameplayTag tag, int32_t NewCount);                                                        // [0xbc0852c] Final|Native|Protected 
	// Function /Script/KeepScoreRuntime.FortWeaponKeepScore.ActualFireSingle
	// void ActualFireSingle();                                                                                                 // [0xbc08518] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
};

/// Class /Script/KeepScoreRuntime.TiredPanda_PlayerAnimInstance
/// Size: 0x0020 (0x001510 - 0x001530)
class UTiredPanda_PlayerAnimInstance : public UFortPlayerAnimInstanceProxy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5424;

public:
	DMember(float)                                     AimPoseAlpha                                                OFFSET(get<float>, {0x1510, 4, 0, 0})
	DMember(float)                                     SquatAdditiveAlpha                                          OFFSET(get<float>, {0x1514, 4, 0, 0})
	DMember(float)                                     WaterReloadBlendAlpha                                       OFFSET(get<float>, {0x1518, 4, 0, 0})
	DMember(bool)                                      bIsWaterReload                                              OFFSET(get<bool>, {0x151C, 1, 1, 0})
	DMember(bool)                                      bIsSquatAdditive                                            OFFSET(get<bool>, {0x151C, 1, 1, 1})
	DMember(bool)                                      bIsLeftHandAttack                                           OFFSET(get<bool>, {0x151C, 1, 1, 2})
};

