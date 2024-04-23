
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine

/// Class /Game/Macros/Abilities/AbilityFunctions.AbilityFunctions_C
/// Size: 0x0000 (0x000028 - 0x000028)
class UAbilityFunctions_C : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Game/Macros/Abilities/AbilityFunctions.AbilityFunctions_C.ApplySlowFall
	// void ApplySlowFall(double SlowFallDuration, class UFortGameplayAbility* SelfGameplayAbilityReference, class UClass* GameplayEffect, class UObject* __WorldContext, FActiveGameplayEffectHandle& EffectSpecHandle); // [0x1340978] Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Macros/Abilities/AbilityFunctions.AbilityFunctions_C.GetDistanceSquaredBetweenActors
	// void GetDistanceSquaredBetweenActors(class AActor* Actor 1, class AActor* Actor 2, class UObject* __WorldContext, double& Distance Squared); // [0x1340978] Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Macros/Abilities/AbilityFunctions.AbilityFunctions_C.GetDistanceBetweenActors
	// void GetDistanceBetweenActors(class AActor* Actor1, class AActor* Actor2, class UObject* __WorldContext, double& Distance); // [0x1340978] Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Macros/Abilities/AbilityFunctions.AbilityFunctions_C.GetPawnFromPlayerStateZone
	// void GetPawnFromPlayerStateZone(class AActor* InActor, class UObject* __WorldContext, class AFortPlayerPawn*& OutPawn, bool& PawnReturned); // [0x1340978] Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Macros/Abilities/AbilityFunctions.AbilityFunctions_C.EvaluatePerkTierBalanceValue
	// void EvaluatePerkTierBalanceValue(FScalableFloat T01 Balance Value, FScalableFloat T02 Balance Value, bool Owns T02, bool Should Override T01, class UObject* __WorldContext, FScalableFloat& Balance Value); // [0x1340978] Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Macros/Abilities/AbilityFunctions.AbilityFunctions_C.GetRangeFromGameplayEffectContainer
	// void GetRangeFromGameplayEffectContainer(FFortGameplayEffectContainer GE Container, int32_t Target Selection List Index, double At Level, class UObject* __WorldContext, double& Range); // [0x1340978] Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Macros/Abilities/AbilityFunctions.AbilityFunctions_C.GetTotalGameplayEffectCount
	// void GetTotalGameplayEffectCount(TArray<UClass*>& EffectsToCount, class UAbilitySystemComponent* AbilitySystemComponent, class UObject* __WorldContext, int32_t& FinalEffectCount); // [0x1340978] Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Macros/Abilities/AbilityFunctions.AbilityFunctions_C.GetAngleBetweenTwoVectors
	// void GetAngleBetweenTwoVectors(FVector VectorA, FVector VectorB, class UObject* __WorldContext, double& Angle (Degrees)); // [0x1340978] Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Macros/Abilities/AbilityFunctions.AbilityFunctions_C.GetRangeFromGameplayEffectContainerSpec
	// void GetRangeFromGameplayEffectContainerSpec(FFortGameplayEffectContainerSpec GE Container Spec, int32_t Target Selection List Index, double At Level, class UObject* __WorldContext, double& Range); // [0x1340978] Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Macros/Abilities/AbilityFunctions.AbilityFunctions_C.GetProjectedTeleportLocation
	// void GetProjectedTeleportLocation(class AActor* Actor, double MovementDistance, class UObject* __WorldContext, FVector& TargetLocation); // [0x1340978] Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Macros/Abilities/AbilityFunctions.AbilityFunctions_C.ConvertRangeToTiles
	// void ConvertRangeToTiles(double InRange, class UObject* __WorldContext, double& OutTile);                                // [0x1340978] Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Macros/Abilities/AbilityFunctions.AbilityFunctions_C.SetArrayOfHitActors
	// void SetArrayOfHitActors(FGameplayAbilityTargetDataHandle TargetData, TArray<AActor*>& ArrayToSet, class UObject* __WorldContext); // [0x1340978] Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Macros/Abilities/AbilityFunctions.AbilityFunctions_C.DoNOTUse-BuildArrayOfHitActors
	// void DoNOTUse-BuildArrayOfHitActors(FGameplayAbilityTargetDataHandle TargetData, class UObject* __WorldContext, TArray<AActor*>& HitActors); // [0x1340978] Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
};

