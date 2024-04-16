
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
/// Size: 0x0090 (0x001C98 - 0x001D28)
class AFortWeaponKeepScore : public AFortWeaponRanged
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 7464;

public:
	SMember(FMulticastInlineDelegate)                  OnFireFailed                                                OFFSET(getStruct<T>, {0x1C98, 16, 0, 0})
	DMember(bool)                                      bCurrentAttackOffhand                                       OFFSET(get<bool>, {0x1CA8, 1, 0, 0})
	DMember(int32_t)                                   BulletPatternNumber                                         OFFSET(get<int32_t>, {0x1CC4, 4, 0, 0})
	DMember(bool)                                      bGateFireCall                                               OFFSET(get<bool>, {0x1CC8, 1, 0, 0})
	SMember(FGameplayTag)                              IsFiringGameplayTag                                         OFFSET(getStruct<T>, {0x1CCC, 4, 0, 0})
	SMember(FVector)                                   MuzzleLocationOffset                                        OFFSET(getStruct<T>, {0x1CD0, 24, 0, 0})
	SMember(FGameplayTag)                              ReloadingTag                                                OFFSET(getStruct<T>, {0x1CE8, 4, 0, 0})
	SMember(FGameplayTag)                              ReloadAbilityEventTag                                       OFFSET(getStruct<T>, {0x1CEC, 4, 0, 0})
	SMember(FGameplayTag)                              FireAbilityEventTag                                         OFFSET(getStruct<T>, {0x1CF0, 4, 0, 0})
	SMember(FScalableFloat)                            bAllowAutoReload                                            OFFSET(getStruct<T>, {0x1CF8, 40, 0, 0})


	/// Functions
	// Function /Script/KeepScoreRuntime.FortWeaponKeepScore.TryCorrectAmmo
	// void TryCorrectAmmo();                                                                                                   // [0xb8b05d4] Final|Native|Public|BlueprintCallable 
	// Function /Script/KeepScoreRuntime.FortWeaponKeepScore.ReloadAmmo
	// void ReloadAmmo();                                                                                                       // [0xb8b05c0] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/KeepScoreRuntime.FortWeaponKeepScore.OnFireFailed__DelegateSignature
	// void OnFireFailed__DelegateSignature();                                                                                  // [0x246f7d8] MulticastDelegate|Public|Delegate 
	// Function /Script/KeepScoreRuntime.FortWeaponKeepScore.HandleWeaponFired
	// void HandleWeaponFired(class UFortGameplayAbility* GameplayAbility, FGameplayTagContainer AbilityTags);                  // [0xb8b0440] Final|Native|Public  
	// Function /Script/KeepScoreRuntime.FortWeaponKeepScore.HandleIsFiringTagChange
	// void HandleIsFiringTagChange(FGameplayTag tag, int32_t NewCount);                                                        // [0xb8b0304] Final|Native|Protected 
	// Function /Script/KeepScoreRuntime.FortWeaponKeepScore.ActualFireSingle
	// void ActualFireSingle();                                                                                                 // [0xb8b02f0] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
};

/// Class /Script/KeepScoreRuntime.TiredPanda_PlayerAnimInstance
/// Size: 0x0010 (0x001530 - 0x001540)
class UTiredPanda_PlayerAnimInstance : public UFortPlayerAnimInstanceProxy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5440;

public:
	DMember(float)                                     AimPoseAlpha                                                OFFSET(get<float>, {0x1528, 4, 0, 0})
	DMember(float)                                     SquatAdditiveAlpha                                          OFFSET(get<float>, {0x152C, 4, 0, 0})
	DMember(float)                                     WaterReloadBlendAlpha                                       OFFSET(get<float>, {0x1530, 4, 0, 0})
	DMember(bool)                                      bIsWaterReload                                              OFFSET(get<bool>, {0x1534, 1, 1, 0})
	DMember(bool)                                      bIsSquatAdditive                                            OFFSET(get<bool>, {0x1534, 1, 1, 1})
	DMember(bool)                                      bIsLeftHandAttack                                           OFFSET(get<bool>, {0x1534, 1, 1, 2})
};

