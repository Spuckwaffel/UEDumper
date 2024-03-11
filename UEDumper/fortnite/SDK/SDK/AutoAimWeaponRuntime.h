
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
/// dependency: GameplayTags
/// dependency: ModularGameplay

/// Class /Script/AutoAimWeaponRuntime.AutoAimWeaponKismetLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UAutoAimWeaponKismetLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/AutoAimWeaponRuntime.AutoAimWeaponKismetLibrary.GetAutoAimWeaponPawnComponent
	// class UAutoAimWeaponPawnComponent* GetAutoAimWeaponPawnComponent(class AFortPawn* SourcePawn);                        // [0xa2b9f5c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AutoAimWeaponRuntime.AutoAimWeaponKismetLibrary.FindBestAutoAimTarget
	// void FindBestAutoAimTarget(class AFortPawn*& OutTargetPawn, float& OutReticleDistance, class AFortPlayerPawn* SourcePawn, float ReticleSize, float Range); // [0xa2b9b84] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AutoAimWeaponRuntime.AutoAimWeaponKismetLibrary.DoesAutoAimWeaponReticleIntersectTarget
	// bool DoesAutoAimWeaponReticleIntersectTarget(float& OutReticleDistance, class AFortPawn* SourcePawn, class AFortPawn* TargetPawn, float ReticleSize); // [0xa2b995c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AutoAimWeaponRuntime.AutoAimWeaponKismetLibrary.DoesAutoAimWeaponHaveLineOfSight
	// bool DoesAutoAimWeaponHaveLineOfSight(class AFortPawn* SourcePawn, class AFortPawn* TargetPawn);                      // [0xa2b9888] Final|Native|Static|Public|BlueprintCallable 
};

/// Struct /Script/AutoAimWeaponRuntime.AutoAimWeaponBoneSegmentData
/// Size: 0x000C (0x000000 - 0x00000C)
struct FAutoAimWeaponBoneSegmentData
{ 
	FName                                              BoneName1;                                                  // 0x0000   (0x0004)  
	FName                                              BoneName2;                                                  // 0x0004   (0x0004)  
	float                                              BoneCollisionCapsuleRadiusAproximation;                     // 0x0008   (0x0004)  
};

/// Class /Script/AutoAimWeaponRuntime.AutoAimWeaponPawnComponent
/// Size: 0x00E0 (0x0000A8 - 0x000188)
class UAutoAimWeaponPawnComponent : public UFortPawnComponent
{ 
public:
	FGameplayTagContainer                              UseSingleLocationTargetingPawnTags;                         // 0x00A8   (0x0020)  
	FGameplayTagContainer                              LowPriorityTargetPawnTags;                                  // 0x00C8   (0x0020)  
	TArray<FAutoAimWeaponBoneSegmentData>              MultiSocketTargetingBoneSegmentDatas;                       // 0x00E8   (0x0010)  
	FScalableFloat                                     LockOnTimeReticleCenter;                                    // 0x00F8   (0x0028)  
	FScalableFloat                                     LockOnTimeReticleEdge;                                      // 0x0120   (0x0028)  
	FScalableFloat                                     MaxLockOns;                                                 // 0x0148   (0x0028)  
	float                                              ProgressTowardNextLockOn;                                   // 0x0170   (0x0004)  
	int32_t                                            CurrentLockOnCount;                                         // 0x0174   (0x0004)  
	float                                              TargetToReticleDistanceNormalized;                          // 0x0178   (0x0004)  
	SDK_UNDEFINED(8,11863) /* TWeakObjectPtr<AFortPawn*> */ __um(LockOnTarget);                                    // 0x017C   (0x0008)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0184   (0x0004)  MISSED


	/// Functions
	// Function /Script/AutoAimWeaponRuntime.AutoAimWeaponPawnComponent.GetTargetToReticleDistanceNormalized
	// float GetTargetToReticleDistanceNormalized();                                                                         // [0x6661c28] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AutoAimWeaponRuntime.AutoAimWeaponPawnComponent.GetLockOnTargetLocation
	// bool GetLockOnTargetLocation(FVector& OutLockTargetLocation);                                                         // [0xa2ba050] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|Const 
	// Function /Script/AutoAimWeaponRuntime.AutoAimWeaponPawnComponent.GetLockOnProgress
	// float GetLockOnProgress();                                                                                            // [0xa2ba028] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AutoAimWeaponRuntime.AutoAimWeaponPawnComponent.GetCurrentLockOnCount
	// int32_t GetCurrentLockOnCount();                                                                                      // [0xa2ba010] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

