
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
/// Size: 0x0090 (0x001CE0 - 0x001D70)
class AFortWeaponKeepScore : public AFortWeaponRanged
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 7536;

public:
	SMember(FMulticastInlineDelegate)                  OnFireFailed                                                OFFSET(getStruct<T>, {0x1CE0, 16, 0, 0})
	DMember(bool)                                      bCurrentAttackOffhand                                       OFFSET(get<bool>, {0x1CF0, 1, 0, 0})
	DMember(int32_t)                                   BulletPatternNumber                                         OFFSET(get<int32_t>, {0x1D0C, 4, 0, 0})
	DMember(bool)                                      bGateFireCall                                               OFFSET(get<bool>, {0x1D10, 1, 0, 0})
	SMember(FGameplayTag)                              IsFiringGameplayTag                                         OFFSET(getStruct<T>, {0x1D14, 4, 0, 0})
	SMember(FVector)                                   MuzzleLocationOffset                                        OFFSET(getStruct<T>, {0x1D18, 24, 0, 0})
	SMember(FGameplayTag)                              ReloadingTag                                                OFFSET(getStruct<T>, {0x1D30, 4, 0, 0})
	SMember(FGameplayTag)                              ReloadAbilityEventTag                                       OFFSET(getStruct<T>, {0x1D34, 4, 0, 0})
	SMember(FGameplayTag)                              FireAbilityEventTag                                         OFFSET(getStruct<T>, {0x1D38, 4, 0, 0})
	SMember(FScalableFloat)                            bAllowAutoReload                                            OFFSET(getStruct<T>, {0x1D40, 40, 0, 0})


	/// Functions
	// Function /Script/KeepScoreRuntime.FortWeaponKeepScore.TryCorrectAmmo
	// void TryCorrectAmmo();                                                                                                   // [0xb7b7680] Final|Native|Public|BlueprintCallable 
	// Function /Script/KeepScoreRuntime.FortWeaponKeepScore.ReloadAmmo
	// void ReloadAmmo();                                                                                                       // [0xb7b766c] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/KeepScoreRuntime.FortWeaponKeepScore.OnFireFailed__DelegateSignature
	// void OnFireFailed__DelegateSignature();                                                                                  // [0x186becc] MulticastDelegate|Public|Delegate 
	// Function /Script/KeepScoreRuntime.FortWeaponKeepScore.HandleWeaponFired
	// void HandleWeaponFired(class UFortGameplayAbility* GameplayAbility, FGameplayTagContainer AbilityTags);                  // [0xb7b74ec] Final|Native|Public  
	// Function /Script/KeepScoreRuntime.FortWeaponKeepScore.HandleIsFiringTagChange
	// void HandleIsFiringTagChange(FGameplayTag tag, int32_t NewCount);                                                        // [0xb7b73b0] Final|Native|Protected 
	// Function /Script/KeepScoreRuntime.FortWeaponKeepScore.ActualFireSingle
	// void ActualFireSingle();                                                                                                 // [0xb7b739c] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
};

/// Class /Script/KeepScoreRuntime.TiredPanda_PlayerAnimInstance
/// Size: 0x0020 (0x0015F0 - 0x001610)
class UTiredPanda_PlayerAnimInstance : public UFortPlayerAnimInstanceProxy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5648;

public:
	DMember(float)                                     AimPoseAlpha                                                OFFSET(get<float>, {0x15F0, 4, 0, 0})
	DMember(float)                                     SquatAdditiveAlpha                                          OFFSET(get<float>, {0x15F4, 4, 0, 0})
	DMember(float)                                     WaterReloadBlendAlpha                                       OFFSET(get<float>, {0x15F8, 4, 0, 0})
	DMember(bool)                                      bIsWaterReload                                              OFFSET(get<bool>, {0x15FC, 1, 1, 0})
	DMember(bool)                                      bIsSquatAdditive                                            OFFSET(get<bool>, {0x15FC, 1, 1, 1})
	DMember(bool)                                      bIsLeftHandAttack                                           OFFSET(get<bool>, {0x15FC, 1, 1, 2})
};

