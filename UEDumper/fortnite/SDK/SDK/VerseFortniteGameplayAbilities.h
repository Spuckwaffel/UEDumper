
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: EntityActor
/// dependency: EntityCore
/// dependency: FortniteGame
/// dependency: GameplayAbilities
/// dependency: TargetingSystem

/// Class /Script/VerseFortniteGameplayAbilities.FortAnimNotify_UEFNGameplayTag
/// Size: 0x0000 (0x000040 - 0x000040)
class UFortAnimNotify_UEFNGameplayTag : public UFortAnimNotify_GameplayTag
{ 
public:
};

/// Class /Script/VerseFortniteGameplayAbilities.FortGameplayAbility_PlayAnim
/// Size: 0x0010 (0x000B60 - 0x000B70)
class UFortGameplayAbility_PlayAnim : public UFortGameplayAbility
{ 
public:
	class UAnimMontage*                                MontageToPlay;                                              // 0x0B60   (0x0008)  
	float                                              PlayRate;                                                   // 0x0B68   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0B6C   (0x0004)  MISSED


	/// Functions
	// Function /Script/VerseFortniteGameplayAbilities.FortGameplayAbility_PlayAnim.OnInterrupted
	// void OnInterrupted();                                                                                                 // [0xa089068] Final|Native|Private 
	// Function /Script/VerseFortniteGameplayAbilities.FortGameplayAbility_PlayAnim.OnCompleted
	// void OnCompleted();                                                                                                   // [0xa089068] Final|Native|Private 
	// Function /Script/VerseFortniteGameplayAbilities.FortGameplayAbility_PlayAnim.OnCancelled
	// void OnCancelled();                                                                                                   // [0xa089068] Final|Native|Private 
	// Function /Script/VerseFortniteGameplayAbilities.FortGameplayAbility_PlayAnim.OnBlendOut
	// void OnBlendOut();                                                                                                    // [0x36203b0] Final|Native|Private 
};

/// Class /Script/VerseFortniteGameplayAbilities.FortGameplayAbility_PlayAnimAndApplyEffect
/// Size: 0x0018 (0x000B70 - 0x000B88)
class UFortGameplayAbility_PlayAnimAndApplyEffect : public UFortGameplayAbility_PlayAnim
{ 
public:
	bool                                               bWaitForAnimNotify;                                         // 0x0B70   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0B71   (0x0007)  MISSED
	class UClass*                                      EffectToApply;                                              // 0x0B78   (0x0008)  
	class UTargetingPreset*                            TargetingPreset;                                            // 0x0B80   (0x0008)  
};

/// Class /Script/VerseFortniteGameplayAbilities.VerseGameplayAttribute
/// Size: 0x0000 (0x000028 - 0x000028)
class UVerseGameplayAttribute : public UObject
{ 
public:


	/// Functions
	// Function /Script/VerseFortniteGameplayAbilities.VerseGameplayAttribute.GetGameplayAttributeForClass
	// FGameplayAttribute GetGameplayAttributeForClass(class UClass*& AttributeClass);                                       // [0xa29aec4] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
};

/// Class /Script/VerseFortniteGameplayAbilities.VerseFortniteAbilityComponentBase
/// Size: 0x0008 (0x000088 - 0x000090)
class UVerseFortniteAbilityComponentBase : public UEntityActorComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0088   (0x0008)  MISSED
};

