
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: FortniteGame
/// dependency: GameplayAbilities
/// dependency: GameplayTags

/// Class /Script/HopscotchWeaponsGameplayRuntime.FortGameplayAbility_AppleSunSmall_Passive
/// Size: 0x00C8 (0x000B60 - 0x000C28)
class UFortGameplayAbility_AppleSunSmall_Passive : public UFortGameplayAbility
{ 
public:
	SDK_UNDEFINED(8,14197) /* TWeakObjectPtr<AFortPlayerPawn*> */ __um(PlayerPawn);                                // 0x0B60   (0x0008)  
	SDK_UNDEFINED(8,14198) /* TWeakObjectPtr<UCharacterMovementComponent*> */ __um(CharacterMovementComponent);    // 0x0B68   (0x0008)  
	FScalableFloat                                     UpdateIntervalRow;                                          // 0x0B70   (0x0028)  
	class UClass*                                      CanCrashpadGameplayEffectClass;                             // 0x0B98   (0x0008)  
	FGameplayTagContainer                              CanCrashpadGameplayTags;                                    // 0x0BA0   (0x0020)  
	FGameplayTagContainer                              GliderRedeployTags;                                         // 0x0BC0   (0x0020)  
	float                                              UpdateInterval;                                             // 0x0BE0   (0x0004)  
	float                                              MaxFallVelocity;                                            // 0x0BE4   (0x0004)  
	float                                              CloseToGroundThreshold;                                     // 0x0BE8   (0x0004)  
	float                                              GroundTraceMaxDistance;                                     // 0x0BEC   (0x0004)  
	float                                              MaxVelocityJumpPromt;                                       // 0x0BF0   (0x0004)  
	float                                              DefaultMinVelocityJumpPromt;                                // 0x0BF4   (0x0004)  
	float                                              SwimmingMinVelocityJumpPromt;                               // 0x0BF8   (0x0004)  
	float                                              CurrentMinVelocityJumpPrompt;                               // 0x0BFC   (0x0004)  
	float                                              DefaultMinTimeSinceGroundedForJumpPrompt;                   // 0x0C00   (0x0004)  
	float                                              SwimmingMinTimeSinceGroundedForJumpPrompt;                  // 0x0C04   (0x0004)  
	float                                              CurrentMinTimeSinceGroundedForJumpPrompt;                   // 0x0C08   (0x0004)  
	float                                              TraceDistanceToGround;                                      // 0x0C0C   (0x0004)  
	float                                              TimeSinceGrounded;                                          // 0x0C10   (0x0004)  
	bool                                               bCanCrashpadByJumping;                                      // 0x0C14   (0x0001)  
	bool                                               bPreviousCanCrashpad;                                       // 0x0C15   (0x0001)  
	bool                                               bIsCloseToGround;                                           // 0x0C16   (0x0001)  
	bool                                               bIsClambering;                                              // 0x0C17   (0x0001)  
	bool                                               bBlockedTag;                                                // 0x0C18   (0x0001)  
	bool                                               bGliderTag;                                                 // 0x0C19   (0x0001)  
	unsigned char                                      UnknownData00_6[0xE];                                       // 0x0C1A   (0x000E)  MISSED


	/// Functions
	// Function /Script/HopscotchWeaponsGameplayRuntime.FortGameplayAbility_AppleSunSmall_Passive.UpdateIsCloseToGround
	// void UpdateIsCloseToGround();                                                                                         // [0xa94a8b8] Final|Native|Protected|BlueprintCallable 
	// Function /Script/HopscotchWeaponsGameplayRuntime.FortGameplayAbility_AppleSunSmall_Passive.UpdateCanCrashpad
	// void UpdateCanCrashpad();                                                                                             // [0xa94a8a4] Final|Native|Protected|BlueprintCallable 
	// Function /Script/HopscotchWeaponsGameplayRuntime.FortGameplayAbility_AppleSunSmall_Passive.OnPlayerMovementModeChanged
	// void OnPlayerMovementModeChanged(class ACharacter* Character, TEnumAsByte<EMovementMode> PrevMovementMode, char PreviousCustomMode); // [0xa94a5bc] Final|Native|Private 
};

