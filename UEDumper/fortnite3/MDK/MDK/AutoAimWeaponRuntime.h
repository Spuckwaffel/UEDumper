
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
/// dependency: ModularGameplay

/// Class /Script/AutoAimWeaponRuntime.AutoAimWeaponKismetLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UAutoAimWeaponKismetLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/AutoAimWeaponRuntime.AutoAimWeaponKismetLibrary.GetAutoAimWeaponPawnComponent
	// class UAutoAimWeaponPawnComponent* GetAutoAimWeaponPawnComponent(class AFortPawn* SourcePawn);                           // [0xb41841c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AutoAimWeaponRuntime.AutoAimWeaponKismetLibrary.FindBestAutoAimTarget
	// void FindBestAutoAimTarget(class AFortPawn*& OutTargetPawn, float& OutReticleDistance, class AFortPlayerPawn* SourcePawn, float ReticleSize, float Range); // [0xb417fd8] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AutoAimWeaponRuntime.AutoAimWeaponKismetLibrary.DoesAutoAimWeaponReticleIntersectTarget
	// bool DoesAutoAimWeaponReticleIntersectTarget(float& OutReticleDistance, class AFortPawn* SourcePawn, class AFortPawn* TargetPawn, float ReticleSize); // [0xb417db0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AutoAimWeaponRuntime.AutoAimWeaponKismetLibrary.DoesAutoAimWeaponHaveLineOfSight
	// bool DoesAutoAimWeaponHaveLineOfSight(class AFortPawn* SourcePawn, class AFortPawn* TargetPawn);                         // [0xb417cdc] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/AutoAimWeaponRuntime.AutoAimWeaponPawnComponent
/// Size: 0x00E0 (0x0000A8 - 0x000188)
class UAutoAimWeaponPawnComponent : public UFortPawnComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 392;

public:
	SMember(FGameplayTagContainer)                     UseSingleLocationTargetingPawnTags                          OFFSET(getStruct<T>, {0xA8, 32, 0, 0})
	SMember(FGameplayTagContainer)                     LowPriorityTargetPawnTags                                   OFFSET(getStruct<T>, {0xC8, 32, 0, 0})
	CMember(TArray<FAutoAimWeaponBoneSegmentData>)     MultiSocketTargetingBoneSegmentDatas                        OFFSET(get<T>, {0xE8, 16, 0, 0})
	SMember(FScalableFloat)                            LockOnTimeReticleCenter                                     OFFSET(getStruct<T>, {0xF8, 40, 0, 0})
	SMember(FScalableFloat)                            LockOnTimeReticleEdge                                       OFFSET(getStruct<T>, {0x120, 40, 0, 0})
	SMember(FScalableFloat)                            MaxLockOns                                                  OFFSET(getStruct<T>, {0x148, 40, 0, 0})
	DMember(float)                                     ProgressTowardNextLockOn                                    OFFSET(get<float>, {0x170, 4, 0, 0})
	DMember(int32_t)                                   CurrentLockOnCount                                          OFFSET(get<int32_t>, {0x174, 4, 0, 0})
	DMember(float)                                     TargetToReticleDistanceNormalized                           OFFSET(get<float>, {0x178, 4, 0, 0})
	CMember(TWeakObjectPtr<AFortPawn*>)                LockOnTarget                                                OFFSET(get<T>, {0x17C, 8, 0, 0})


	/// Functions
	// Function /Script/AutoAimWeaponRuntime.AutoAimWeaponPawnComponent.GetTargetToReticleDistanceNormalized
	// float GetTargetToReticleDistanceNormalized();                                                                            // [0x3be875c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AutoAimWeaponRuntime.AutoAimWeaponPawnComponent.GetLockOnTargetLocation
	// bool GetLockOnTargetLocation(FVector& OutLockTargetLocation);                                                            // [0xb418510] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|Const 
	// Function /Script/AutoAimWeaponRuntime.AutoAimWeaponPawnComponent.GetLockOnProgress
	// float GetLockOnProgress();                                                                                               // [0xb4184e8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AutoAimWeaponRuntime.AutoAimWeaponPawnComponent.GetCurrentLockOnCount
	// int32_t GetCurrentLockOnCount();                                                                                         // [0xb4184d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/AutoAimWeaponRuntime.AutoAimWeaponBoneSegmentData
/// Size: 0x000C (0x000000 - 0x00000C)
class FAutoAimWeaponBoneSegmentData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	SMember(FName)                                     BoneName1                                                   OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FName)                                     BoneName2                                                   OFFSET(getStruct<T>, {0x4, 4, 0, 0})
	DMember(float)                                     BoneCollisionCapsuleRadiusAproximation                      OFFSET(get<float>, {0x8, 4, 0, 0})
};

