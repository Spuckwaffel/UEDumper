
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: GameplayAbilities
/// dependency: NetCore

/// Struct /Script/KnockbackRuntime.KnockbackMutatorData
/// Size: 0x0014 (0x00000C - 0x000020)
struct FKnockbackMutatorData : FFastArraySerializerItem
{ 
	unsigned char                                      UnknownData00_3[0x4];                                       // 0x000C   (0x0004)  MISSED
	class APawn*                                       Pawn;                                                       // 0x0010   (0x0008)  
	float                                              KnockbackMultiplier;                                        // 0x0018   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/KnockbackRuntime.KnockbackMutatorDataArray
/// Size: 0x0018 (0x000108 - 0x000120)
struct FKnockbackMutatorDataArray : FFastArraySerializer
{ 
	TArray<FKnockbackMutatorData>                      Entries;                                                    // 0x0108   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0118   (0x0008)  MISSED
};

/// Class /Script/KnockbackRuntime.FortAthenaMutator_Knockback
/// Size: 0x0240 (0x000338 - 0x000578)
class AFortAthenaMutator_Knockback : public AFortAthenaMutator
{ 
public:
	bool                                               bStorePlayerKnockbackData;                                  // 0x0338   (0x0001)  
	bool                                               bReplicatePlayerKnockbackData;                              // 0x0339   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x033A   (0x0006)  MISSED
	SDK_UNDEFINED(16,14833) /* FMulticastInlineDelegate */ __um(OnPlayerKnockbackDataChanged);                     // 0x0340   (0x0010)  
	FKnockbackMutatorDataArray                         AllPlayersKnockbackData;                                    // 0x0350   (0x0120)  
	FScalableFloat                                     bDisplayKnockbackDamageNumbersAsPercentage;                 // 0x0470   (0x0028)  
	FScalableFloat                                     ConvertToKnockbackDamageMultiplier;                         // 0x0498   (0x0028)  
	FScalableFloat                                     PercentDamageLowMaxThreshold;                               // 0x04C0   (0x0028)  
	FScalableFloat                                     PercentDamageMediumMaxThreshold;                            // 0x04E8   (0x0028)  
	float                                              KnockbackMultiplierInitialValue;                            // 0x0510   (0x0004)  
	unsigned char                                      UnknownData01_6[0x64];                                      // 0x0514   (0x0064)  MISSED


	/// Functions
	// Function /Script/KnockbackRuntime.FortAthenaMutator_Knockback.SetPlayersShouldBreakThroughStructures
	// void SetPlayersShouldBreakThroughStructures(bool bActive, class AFortPlayerPawn* PlayerPawn);                         // [0xa96fb9c] Final|Native|Public|BlueprintCallable 
	// Function /Script/KnockbackRuntime.FortAthenaMutator_Knockback.HandleBlockedCharacterMovement
	// void HandleBlockedCharacterMovement(FHitResult& InOutImpact, class AFortPawn* FortPawn);                              // [0xa96f9b0] Final|Native|Private|HasOutParms 
	// Function /Script/KnockbackRuntime.FortAthenaMutator_Knockback.GetPercentDamageMediumMaxThreshold
	// float GetPercentDamageMediumMaxThreshold();                                                                           // [0xa96f97c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/KnockbackRuntime.FortAthenaMutator_Knockback.GetPercentDamageLowMaxThreshold
	// float GetPercentDamageLowMaxThreshold();                                                                              // [0xa96f948] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/KnockbackRuntime.FortAthenaMutator_Knockback.GetKnockbackMultiplierInitialValue
	// float GetKnockbackMultiplierInitialValue();                                                                           // [0xa96f930] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/KnockbackRuntime.FortAthenaMutator_Knockback.GetAllPlayersKnockbackData
	// TArray<FKnockbackMutatorData> GetAllPlayersKnockbackData();                                                           // [0xa96f7b4] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/KnockbackRuntime.FortGameplayAbility_KnockbackMutator
/// Size: 0x0010 (0x000B60 - 0x000B70)
class UFortGameplayAbility_KnockbackMutator : public UFortGameplayAbility
{ 
public:
	class AFortAthenaMutator_Knockback*                CachedMutator;                                              // 0x0B60   (0x0008)  
	class UClass*                                      MutatorClassToGet;                                          // 0x0B68   (0x0008)  


	/// Functions
	// Function /Script/KnockbackRuntime.FortGameplayAbility_KnockbackMutator.SaveKnockbackData
	// void SaveKnockbackData(FKnockbackMutatorData& InKnockbackData);                                                       // [0xa96fb20] Final|Native|Protected|HasOutParms|BlueprintCallable 
	// Function /Script/KnockbackRuntime.FortGameplayAbility_KnockbackMutator.GetCachedMutator
	// class AFortAthenaMutator_Knockback* GetCachedMutator();                                                               // [0xa96f90c] Final|Native|Protected|BlueprintCallable|BlueprintPure 
};

