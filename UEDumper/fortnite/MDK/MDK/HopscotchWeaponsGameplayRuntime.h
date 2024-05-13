
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: GameplayAbilities
/// dependency: GameplayTags

/// Class /Script/HopscotchWeaponsGameplayRuntime.FortGameplayAbility_AppleSunSmall_Passive
/// Size: 0x00C8 (0x000B48 - 0x000C10)
class UFortGameplayAbility_AppleSunSmall_Passive : public UFortGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3088;

public:
	CMember(TWeakObjectPtr<AFortPlayerPawn*>)          PlayerPawn                                                  OFFSET(get<T>, {0xB48, 8, 0, 0})
	CMember(TWeakObjectPtr<UCharacterMovementComponent*>) CharacterMovementComponent                               OFFSET(get<T>, {0xB50, 8, 0, 0})
	SMember(FScalableFloat)                            UpdateIntervalRow                                           OFFSET(getStruct<T>, {0xB58, 40, 0, 0})
	CMember(class UClass*)                             CanCrashpadGameplayEffectClass                              OFFSET(get<T>, {0xB80, 8, 0, 0})
	SMember(FGameplayTagContainer)                     CanCrashpadGameplayTags                                     OFFSET(getStruct<T>, {0xB88, 32, 0, 0})
	SMember(FGameplayTagContainer)                     GliderRedeployTags                                          OFFSET(getStruct<T>, {0xBA8, 32, 0, 0})
	DMember(float)                                     UpdateInterval                                              OFFSET(get<float>, {0xBC8, 4, 0, 0})
	DMember(float)                                     MaxFallVelocity                                             OFFSET(get<float>, {0xBCC, 4, 0, 0})
	DMember(float)                                     CloseToGroundThreshold                                      OFFSET(get<float>, {0xBD0, 4, 0, 0})
	DMember(float)                                     GroundTraceMaxDistance                                      OFFSET(get<float>, {0xBD4, 4, 0, 0})
	DMember(float)                                     MaxVelocityJumpPromt                                        OFFSET(get<float>, {0xBD8, 4, 0, 0})
	DMember(float)                                     DefaultMinVelocityJumpPromt                                 OFFSET(get<float>, {0xBDC, 4, 0, 0})
	DMember(float)                                     SwimmingMinVelocityJumpPromt                                OFFSET(get<float>, {0xBE0, 4, 0, 0})
	DMember(float)                                     CurrentMinVelocityJumpPrompt                                OFFSET(get<float>, {0xBE4, 4, 0, 0})
	DMember(float)                                     DefaultMinTimeSinceGroundedForJumpPrompt                    OFFSET(get<float>, {0xBE8, 4, 0, 0})
	DMember(float)                                     SwimmingMinTimeSinceGroundedForJumpPrompt                   OFFSET(get<float>, {0xBEC, 4, 0, 0})
	DMember(float)                                     CurrentMinTimeSinceGroundedForJumpPrompt                    OFFSET(get<float>, {0xBF0, 4, 0, 0})
	DMember(float)                                     TraceDistanceToGround                                       OFFSET(get<float>, {0xBF4, 4, 0, 0})
	DMember(float)                                     TimeSinceGrounded                                           OFFSET(get<float>, {0xBF8, 4, 0, 0})
	DMember(bool)                                      bCanCrashpadByJumping                                       OFFSET(get<bool>, {0xBFC, 1, 0, 0})
	DMember(bool)                                      bPreviousCanCrashpad                                        OFFSET(get<bool>, {0xBFD, 1, 0, 0})
	DMember(bool)                                      bIsCloseToGround                                            OFFSET(get<bool>, {0xBFE, 1, 0, 0})
	DMember(bool)                                      bIsClambering                                               OFFSET(get<bool>, {0xBFF, 1, 0, 0})
	DMember(bool)                                      bBlockedTag                                                 OFFSET(get<bool>, {0xC00, 1, 0, 0})
	DMember(bool)                                      bGliderTag                                                  OFFSET(get<bool>, {0xC01, 1, 0, 0})


	/// Functions
	// Function /Script/HopscotchWeaponsGameplayRuntime.FortGameplayAbility_AppleSunSmall_Passive.UpdateIsCloseToGround
	// void UpdateIsCloseToGround();                                                                                            // [0xbce87c8] Final|Native|Protected|BlueprintCallable 
	// Function /Script/HopscotchWeaponsGameplayRuntime.FortGameplayAbility_AppleSunSmall_Passive.UpdateCanCrashpad
	// void UpdateCanCrashpad();                                                                                                // [0xbce87b4] Final|Native|Protected|BlueprintCallable 
	// Function /Script/HopscotchWeaponsGameplayRuntime.FortGameplayAbility_AppleSunSmall_Passive.OnPlayerMovementModeChanged
	// void OnPlayerMovementModeChanged(class ACharacter* Character, TEnumAsByte<EMovementMode> PrevMovementMode, char PreviousCustomMode); // [0xbce84cc] Final|Native|Private 
};

