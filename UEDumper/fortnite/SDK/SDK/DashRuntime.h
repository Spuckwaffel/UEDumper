
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: GameplayAbilities

/// Class /Script/DashRuntime.FortGameplayAbility_Dash
/// Size: 0x0170 (0x000B60 - 0x000CD0)
class UFortGameplayAbility_Dash : public UFortGameplayAbility
{ 
public:
	class AFortPlayerPawn*                             OwningPawn;                                                 // 0x0B60   (0x0008)  
	FScalableFloat                                     UseMovementForTargetDeadzone;                               // 0x0B68   (0x0028)  
	FScalableFloat                                     DashDistance;                                               // 0x0B90   (0x0028)  
	FScalableFloat                                     DashEndVelocity;                                            // 0x0BB8   (0x0028)  
	FScalableFloat                                     bDashEndVelocityUseZ;                                       // 0x0BE0   (0x0028)  
	FScalableFloat                                     bUseDynamicZTarget;                                         // 0x0C08   (0x0028)  
	FScalableFloat                                     DynamicZMaxReverseAngle;                                    // 0x0C30   (0x0028)  
	FScalableFloat                                     DynamicZMinReverseAngle;                                    // 0x0C58   (0x0028)  
	FScalableFloat                                     DynamicZReverseModifier;                                    // 0x0C80   (0x0028)  
	FScalableFloat                                     DynamicZReverseTargetMinZ;                                  // 0x0CA8   (0x0028)  


	/// Functions
	// Function /Script/DashRuntime.FortGameplayAbility_Dash.GetMoveDistance
	// float GetMoveDistance();                                                                                              // [0xa93979c] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/DashRuntime.FortGameplayAbility_Dash.GetEndMovementVelocity
	// FVector GetEndMovementVelocity();                                                                                     // [0xa939760] Native|Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/DashRuntime.FortGameplayAbility_Dash.GetDashTarget
	// FVector GetDashTarget();                                                                                              // [0xa939728] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DashRuntime.FortMovementMode_ExtDash
/// Size: 0x0008 (0x000120 - 0x000128)
class UFortMovementMode_ExtDash : public UFortMovementMode_BaseExtLogic
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0120   (0x0008)  MISSED


	/// Functions
	// Function /Script/DashRuntime.FortMovementMode_ExtDash.TryActivateDashMME
	// bool TryActivateDashMME(class AFortPawn* TargetPawn, class UClass* DashMME, FFortMovementMode_DashCreationData& CreationData); // [0xa9397c8] Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/DashRuntime.FortMovementMode_ExtDash.BP_UpdateBeforeCharacterMovement
	// EFortMovementModeExt_UpdateResult BP_UpdateBeforeCharacterMovement(float DeltaTime);                                  // [0x18a39e4] Event|Public|BlueprintEvent 
};

/// Struct /Script/DashRuntime.FortMovementMode_DashRuntimeData
/// Size: 0x0050 (0x000010 - 0x000060)
struct FFortMovementMode_DashRuntimeData : FFortMovementMode_BaseExtRuntimeData
{ 
	unsigned char                                      UnknownData00_1[0x50];                                      // 0x0010   (0x0050)  MISSED
};

/// Struct /Script/DashRuntime.FortMovementMode_DashCreationData
/// Size: 0x0050 (0x000008 - 0x000058)
struct FFortMovementMode_DashCreationData : FFortMovementMode_BaseExtCreationData
{ 
	FVector                                            TargetLocation;                                             // 0x0008   (0x0018)  
	float                                              duration;                                                   // 0x0020   (0x0004)  
	bool                                               bRestrictSpeedToExpected;                                   // 0x0024   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0025   (0x0003)  MISSED
	class UCurveVector*                                PathOffsetCurve;                                            // 0x0028   (0x0008)  
	ERootMotionFinishVelocityMode                      VelocityOnFinishMode;                                       // 0x0030   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0031   (0x0007)  MISSED
	FVector                                            SetVelocityOnFinish;                                        // 0x0038   (0x0018)  
	float                                              ClampVelocityOnFinish;                                      // 0x0050   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0054   (0x0004)  MISSED
};

