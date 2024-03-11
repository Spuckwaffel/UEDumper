
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/AnimationBudgetAllocator.AnimationBudgetBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UAnimationBudgetBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/AnimationBudgetAllocator.AnimationBudgetBlueprintLibrary.SetAnimationBudgetParameters
	// void SetAnimationBudgetParameters(class UObject* WorldContextObject, FAnimationBudgetAllocatorParameters& InParameters); // [0x715d41c] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/AnimationBudgetAllocator.AnimationBudgetBlueprintLibrary.EnableAnimationBudget
	// void EnableAnimationBudget(class UObject* WorldContextObject, bool bEnabled);                                         // [0x715d160] Final|Native|Static|Private|BlueprintCallable 
};

/// Class /Script/AnimationBudgetAllocator.SkeletalMeshComponentBudgeted
/// Size: 0x0020 (0x000F40 - 0x000F60)
class USkeletalMeshComponentBudgeted : public USkeletalMeshComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x20];                                      // 0x0F38   (0x0020)  MISSED
	bool                                               bAutoRegisterWithBudgetAllocator : 1;                       // 0x0F58:0 (0x0001)  
	bool                                               bAutoCalculateSignificance : 1;                             // 0x0F58:1 (0x0001)  
	bool                                               bShouldUseActorRenderedFlag : 1;                            // 0x0F58:2 (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0F59   (0x0007)  MISSED


	/// Functions
	// Function /Script/AnimationBudgetAllocator.SkeletalMeshComponentBudgeted.SetAutoRegisterWithBudgetAllocator
	// void SetAutoRegisterWithBudgetAllocator(bool bInAutoRegisterWithBudgetAllocator);                                     // [0x715d6dc] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/AnimationBudgetAllocator.AnimationBudgetAllocatorParameters
/// Size: 0x0058 (0x000000 - 0x000058)
struct FAnimationBudgetAllocatorParameters
{ 
	float                                              BudgetInMs;                                                 // 0x0000   (0x0004)  
	float                                              MinQuality;                                                 // 0x0004   (0x0004)  
	int32_t                                            MaxTickRate;                                                // 0x0008   (0x0004)  
	float                                              WorkUnitSmoothingSpeed;                                     // 0x000C   (0x0004)  
	float                                              AlwaysTickFalloffAggression;                                // 0x0010   (0x0004)  
	float                                              InterpolationFalloffAggression;                             // 0x0014   (0x0004)  
	int32_t                                            InterpolationMaxRate;                                       // 0x0018   (0x0004)  
	int32_t                                            MaxInterpolatedComponents;                                  // 0x001C   (0x0004)  
	float                                              InterpolationTickMultiplier;                                // 0x0020   (0x0004)  
	float                                              InitialEstimatedWorkUnitTimeMs;                             // 0x0024   (0x0004)  
	int32_t                                            MaxTickedOffsreenComponents;                                // 0x0028   (0x0004)  
	int32_t                                            StateChangeThrottleInFrames;                                // 0x002C   (0x0004)  
	float                                              BudgetFactorBeforeReducedWork;                              // 0x0030   (0x0004)  
	float                                              BudgetFactorBeforeReducedWorkEpsilon;                       // 0x0034   (0x0004)  
	float                                              BudgetPressureSmoothingSpeed;                               // 0x0038   (0x0004)  
	int32_t                                            ReducedWorkThrottleMinInFrames;                             // 0x003C   (0x0004)  
	int32_t                                            ReducedWorkThrottleMaxInFrames;                             // 0x0040   (0x0004)  
	float                                              BudgetFactorBeforeAggressiveReducedWork;                    // 0x0044   (0x0004)  
	int32_t                                            ReducedWorkThrottleMaxPerFrame;                             // 0x0048   (0x0004)  
	float                                              BudgetPressureBeforeEmergencyReducedWork;                   // 0x004C   (0x0004)  
	float                                              AutoCalculatedSignificanceMaxDistance;                      // 0x0050   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0054   (0x0004)  MISSED
};

