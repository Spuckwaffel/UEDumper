
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/AnimationBudgetAllocator.AnimationBudgetBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UAnimationBudgetBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/AnimationBudgetAllocator.AnimationBudgetBlueprintLibrary.SetAnimationBudgetParameters
	// void SetAnimationBudgetParameters(class UObject* WorldContextObject, FAnimationBudgetAllocatorParameters& InParameters); // [0x74203e4] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/AnimationBudgetAllocator.AnimationBudgetBlueprintLibrary.EnableAnimationBudget
	// void EnableAnimationBudget(class UObject* WorldContextObject, bool bEnabled);                                            // [0x7420258] Final|Native|Static|Private|BlueprintCallable 
};

/// Class /Script/AnimationBudgetAllocator.SkeletalMeshComponentBudgeted
/// Size: 0x0020 (0x000F50 - 0x000F70)
class USkeletalMeshComponentBudgeted : public USkeletalMeshComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3952;

public:
	DMember(bool)                                      bAutoRegisterWithBudgetAllocator                            OFFSET(get<bool>, {0xF68, 1, 1, 0})
	DMember(bool)                                      bAutoCalculateSignificance                                  OFFSET(get<bool>, {0xF68, 1, 1, 1})
	DMember(bool)                                      bShouldUseActorRenderedFlag                                 OFFSET(get<bool>, {0xF68, 1, 1, 2})


	/// Functions
	// Function /Script/AnimationBudgetAllocator.SkeletalMeshComponentBudgeted.SetAutoRegisterWithBudgetAllocator
	// void SetAutoRegisterWithBudgetAllocator(bool bInAutoRegisterWithBudgetAllocator);                                        // [0x7420554] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/AnimationBudgetAllocator.AnimationBudgetAllocatorParameters
/// Size: 0x0058 (0x000000 - 0x000058)
class FAnimationBudgetAllocatorParameters : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	DMember(float)                                     BudgetInMs                                                  OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     MinQuality                                                  OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   MaxTickRate                                                 OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(float)                                     WorkUnitSmoothingSpeed                                      OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     AlwaysTickFalloffAggression                                 OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     InterpolationFalloffAggression                              OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(int32_t)                                   InterpolationMaxRate                                        OFFSET(get<int32_t>, {0x18, 4, 0, 0})
	DMember(int32_t)                                   MaxInterpolatedComponents                                   OFFSET(get<int32_t>, {0x1C, 4, 0, 0})
	DMember(float)                                     InterpolationTickMultiplier                                 OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(float)                                     InitialEstimatedWorkUnitTimeMs                              OFFSET(get<float>, {0x24, 4, 0, 0})
	DMember(int32_t)                                   MaxTickedOffsreenComponents                                 OFFSET(get<int32_t>, {0x28, 4, 0, 0})
	DMember(int32_t)                                   StateChangeThrottleInFrames                                 OFFSET(get<int32_t>, {0x2C, 4, 0, 0})
	DMember(float)                                     BudgetFactorBeforeReducedWork                               OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(float)                                     BudgetFactorBeforeReducedWorkEpsilon                        OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     BudgetPressureSmoothingSpeed                                OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(int32_t)                                   ReducedWorkThrottleMinInFrames                              OFFSET(get<int32_t>, {0x3C, 4, 0, 0})
	DMember(int32_t)                                   ReducedWorkThrottleMaxInFrames                              OFFSET(get<int32_t>, {0x40, 4, 0, 0})
	DMember(float)                                     BudgetFactorBeforeAggressiveReducedWork                     OFFSET(get<float>, {0x44, 4, 0, 0})
	DMember(int32_t)                                   ReducedWorkThrottleMaxPerFrame                              OFFSET(get<int32_t>, {0x48, 4, 0, 0})
	DMember(float)                                     BudgetPressureBeforeEmergencyReducedWork                    OFFSET(get<float>, {0x4C, 4, 0, 0})
	DMember(float)                                     AutoCalculatedSignificanceMaxDistance                       OFFSET(get<float>, {0x50, 4, 0, 0})
};

