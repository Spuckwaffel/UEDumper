
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: FortniteGame
/// dependency: GameplayAbilities
/// dependency: GameplayTags

/// Class /Script/HopscotchWeaponsGameplayRuntime.FortGameplayAbility_AppleSunSmall_Passive
/// Size: 0x00C8 (0x000B60 - 0x000C28)
class UFortGameplayAbility_AppleSunSmall_Passive : public UFortGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3112;

public:
	CMember(TWeakObjectPtr<AFortPlayerPawn*>)          PlayerPawn                                                  OFFSET(get<T>, {0xB60, 8, 0, 0})
	CMember(TWeakObjectPtr<UCharacterMovementComponent*>) CharacterMovementComponent                               OFFSET(get<T>, {0xB68, 8, 0, 0})
	SMember(FScalableFloat)                            UpdateIntervalRow                                           OFFSET(getStruct<T>, {0xB70, 40, 0, 0})
	CMember(class UClass*)                             CanCrashpadGameplayEffectClass                              OFFSET(get<T>, {0xB98, 8, 0, 0})
	SMember(FGameplayTagContainer)                     CanCrashpadGameplayTags                                     OFFSET(getStruct<T>, {0xBA0, 32, 0, 0})
	SMember(FGameplayTagContainer)                     GliderRedeployTags                                          OFFSET(getStruct<T>, {0xBC0, 32, 0, 0})
	DMember(float)                                     UpdateInterval                                              OFFSET(get<float>, {0xBE0, 4, 0, 0})
	DMember(float)                                     MaxFallVelocity                                             OFFSET(get<float>, {0xBE4, 4, 0, 0})
	DMember(float)                                     CloseToGroundThreshold                                      OFFSET(get<float>, {0xBE8, 4, 0, 0})
	DMember(float)                                     GroundTraceMaxDistance                                      OFFSET(get<float>, {0xBEC, 4, 0, 0})
	DMember(float)                                     MaxVelocityJumpPromt                                        OFFSET(get<float>, {0xBF0, 4, 0, 0})
	DMember(float)                                     DefaultMinVelocityJumpPromt                                 OFFSET(get<float>, {0xBF4, 4, 0, 0})
	DMember(float)                                     SwimmingMinVelocityJumpPromt                                OFFSET(get<float>, {0xBF8, 4, 0, 0})
	DMember(float)                                     CurrentMinVelocityJumpPrompt                                OFFSET(get<float>, {0xBFC, 4, 0, 0})
	DMember(float)                                     DefaultMinTimeSinceGroundedForJumpPrompt                    OFFSET(get<float>, {0xC00, 4, 0, 0})
	DMember(float)                                     SwimmingMinTimeSinceGroundedForJumpPrompt                   OFFSET(get<float>, {0xC04, 4, 0, 0})
	DMember(float)                                     CurrentMinTimeSinceGroundedForJumpPrompt                    OFFSET(get<float>, {0xC08, 4, 0, 0})
	DMember(float)                                     TraceDistanceToGround                                       OFFSET(get<float>, {0xC0C, 4, 0, 0})
	DMember(float)                                     TimeSinceGrounded                                           OFFSET(get<float>, {0xC10, 4, 0, 0})
	DMember(bool)                                      bCanCrashpadByJumping                                       OFFSET(get<bool>, {0xC14, 1, 0, 0})
	DMember(bool)                                      bPreviousCanCrashpad                                        OFFSET(get<bool>, {0xC15, 1, 0, 0})
	DMember(bool)                                      bIsCloseToGround                                            OFFSET(get<bool>, {0xC16, 1, 0, 0})
	DMember(bool)                                      bIsClambering                                               OFFSET(get<bool>, {0xC17, 1, 0, 0})
	DMember(bool)                                      bBlockedTag                                                 OFFSET(get<bool>, {0xC18, 1, 0, 0})
	DMember(bool)                                      bGliderTag                                                  OFFSET(get<bool>, {0xC19, 1, 0, 0})


	/// Functions
	// Function /Script/HopscotchWeaponsGameplayRuntime.FortGameplayAbility_AppleSunSmall_Passive.UpdateIsCloseToGround
	// void UpdateIsCloseToGround();                                                                                            // [0xb78d6e4] Final|Native|Protected|BlueprintCallable 
	// Function /Script/HopscotchWeaponsGameplayRuntime.FortGameplayAbility_AppleSunSmall_Passive.UpdateCanCrashpad
	// void UpdateCanCrashpad();                                                                                                // [0xb78d6d0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/HopscotchWeaponsGameplayRuntime.FortGameplayAbility_AppleSunSmall_Passive.OnPlayerMovementModeChanged
	// void OnPlayerMovementModeChanged(class ACharacter* Character, TEnumAsByte<EMovementMode> PrevMovementMode, char PreviousCustomMode); // [0xb78d328] Final|Native|Private 
};

