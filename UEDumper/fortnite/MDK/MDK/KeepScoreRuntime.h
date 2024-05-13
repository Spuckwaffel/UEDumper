
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
/// Size: 0x0090 (0x001D58 - 0x001DE8)
class AFortWeaponKeepScore : public AFortWeaponRanged
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 7656;

public:
	SMember(FMulticastInlineDelegate)                  OnFireFailed                                                OFFSET(getStruct<T>, {0x1D58, 16, 0, 0})
	DMember(bool)                                      bCurrentAttackOffhand                                       OFFSET(get<bool>, {0x1D68, 1, 0, 0})
	DMember(int32_t)                                   BulletPatternNumber                                         OFFSET(get<int32_t>, {0x1D84, 4, 0, 0})
	DMember(bool)                                      bGateFireCall                                               OFFSET(get<bool>, {0x1D88, 1, 0, 0})
	SMember(FGameplayTag)                              IsFiringGameplayTag                                         OFFSET(getStruct<T>, {0x1D8C, 4, 0, 0})
	SMember(FVector)                                   MuzzleLocationOffset                                        OFFSET(getStruct<T>, {0x1D90, 24, 0, 0})
	SMember(FGameplayTag)                              ReloadingTag                                                OFFSET(getStruct<T>, {0x1DA8, 4, 0, 0})
	SMember(FGameplayTag)                              ReloadAbilityEventTag                                       OFFSET(getStruct<T>, {0x1DAC, 4, 0, 0})
	SMember(FGameplayTag)                              FireAbilityEventTag                                         OFFSET(getStruct<T>, {0x1DB0, 4, 0, 0})
	SMember(FScalableFloat)                            bAllowAutoReload                                            OFFSET(getStruct<T>, {0x1DB8, 40, 0, 0})


	/// Functions
	// Function /Script/KeepScoreRuntime.FortWeaponKeepScore.TryCorrectAmmo
	// void TryCorrectAmmo();                                                                                                   // [0xbd1f804] Final|Native|Public|BlueprintCallable 
	// Function /Script/KeepScoreRuntime.FortWeaponKeepScore.ReloadAmmo
	// void ReloadAmmo();                                                                                                       // [0xbd1f7f0] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/KeepScoreRuntime.FortWeaponKeepScore.OnFireFailed__DelegateSignature
	// void OnFireFailed__DelegateSignature();                                                                                  // [0x20c3f9c] MulticastDelegate|Public|Delegate 
	// Function /Script/KeepScoreRuntime.FortWeaponKeepScore.HandleWeaponFired
	// void HandleWeaponFired(class UFortGameplayAbility* GameplayAbility, FGameplayTagContainer AbilityTags);                  // [0xbd1f6f0] Final|Native|Public  
	// Function /Script/KeepScoreRuntime.FortWeaponKeepScore.HandleIsFiringTagChange
	// void HandleIsFiringTagChange(FGameplayTag tag, int32_t NewCount);                                                        // [0xbd1f630] Final|Native|Protected 
	// Function /Script/KeepScoreRuntime.FortWeaponKeepScore.ActualFireSingle
	// void ActualFireSingle();                                                                                                 // [0xbd1f61c] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
};

/// Class /Script/KeepScoreRuntime.TiredPanda_PlayerAnimInstance
/// Size: 0x0018 (0x001388 - 0x0013A0)
class UTiredPanda_PlayerAnimInstance : public UFortPlayerAnimInstanceProxy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5024;

public:
	DMember(float)                                     AimPoseAlpha                                                OFFSET(get<float>, {0x1388, 4, 0, 0})
	DMember(float)                                     SquatAdditiveAlpha                                          OFFSET(get<float>, {0x138C, 4, 0, 0})
	DMember(float)                                     WaterReloadBlendAlpha                                       OFFSET(get<float>, {0x1390, 4, 0, 0})
	DMember(bool)                                      bIsWaterReload                                              OFFSET(get<bool>, {0x1394, 1, 1, 0})
	DMember(bool)                                      bIsSquatAdditive                                            OFFSET(get<bool>, {0x1394, 1, 1, 1})
	DMember(bool)                                      bIsLeftHandAttack                                           OFFSET(get<bool>, {0x1394, 1, 1, 2})
};

