
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Enum /Script/DeployableTurretGameplayRuntime.EDeployableTurretState
/// Size: 0x09
enum class EDeployableTurretState : uint8_t
{
	EDeployableTurretState__Collapsed                                                = 0,
	EDeployableTurretState__Transforming                                             = 1,
	EDeployableTurretState__Scanning                                                 = 2,
	EDeployableTurretState__Tracking                                                 = 3,
	EDeployableTurretState__Attacking                                                = 4,
	EDeployableTurretState__Deactivated                                              = 5,
	EDeployableTurretState__WindUp                                                   = 6,
	EDeployableTurretState__WindDown                                                 = 7,
	EDeployableTurretState__EDeployableTurretState_MAX                               = 8
};

/// Class /Script/DeployableTurretGameplayRuntime.DeployableTurretAnimInstance
/// Size: 0x0040 (0x000370 - 0x0003B0)
class UDeployableTurretAnimInstance : public UAnimInstance
{ 
public:
	bool                                               bIsAttacking : 1;                                           // 0x0368:0 (0x0001)  
	bool                                               bIsWindUp : 1;                                              // 0x0368:1 (0x0001)  
	bool                                               bIsTracking : 1;                                            // 0x0368:2 (0x0001)  
	bool                                               bIsWindDown : 1;                                            // 0x0368:3 (0x0001)  
	bool                                               bIsDeactivated : 1;                                         // 0x0368:4 (0x0001)  
	bool                                               bIsScanning : 1;                                            // 0x0368:5 (0x0001)  
	bool                                               bIsAggro : 1;                                               // 0x0368:6 (0x0001)  
	bool                                               bFallAndDeployToDeactivated : 1;                            // 0x0368:7 (0x0001)  
	bool                                               bFallAndDeployToScan : 1;                                   // 0x0369:0 (0x0001)  
	bool                                               bAggroToFire : 1;                                           // 0x0369:1 (0x0001)  
	bool                                               bInterruptibleCurveOverThreshold : 1;                       // 0x0369:2 (0x0001)  
	bool                                               bTurnEndCurveOverThreshold : 1;                             // 0x0369:3 (0x0001)  
	unsigned char                                      UnknownData00_4[0x2];                                       // 0x036A   (0x0002)  MISSED
	FName                                              InterruptibleCurveName;                                     // 0x036C   (0x0004)  
	float                                              InterruptibleCurveThreshold;                                // 0x0370   (0x0004)  
	FName                                              TurnEndCurveName;                                           // 0x0374   (0x0004)  
	float                                              TurnEndCurveThreshold;                                      // 0x0378   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x037C   (0x0004)  MISSED
	FRotator                                           AimRotationInComponentSpace;                                // 0x0380   (0x0018)  
	FRotator                                           SurfaceRotation;                                            // 0x0398   (0x0018)  


	/// Functions
	// Function /Script/DeployableTurretGameplayRuntime.DeployableTurretAnimInstance.SetNativeVariables
	// void SetNativeVariables(class ABuildingGameplayActor* OwningTurretBGA, FDeployableTurretBPAnimData& AnimData);        // [0xa8efc84] Final|Native|Protected|HasOutParms|BlueprintCallable 
};

/// Class /Script/DeployableTurretGameplayRuntime.DeployableTurretLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UDeployableTurretLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/DeployableTurretGameplayRuntime.DeployableTurretLibrary.FireAnalyticsEvent_DeployableTurretSessionEnd
	// void FireAnalyticsEvent_DeployableTurretSessionEnd(class UObject* WorldContextObject, FUniqueNetIdRepl& TurretOwnerAccountId, TArray<FFortAnalyticsEventAttribute>& Attributes); // [0xa8efb18] Final|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/DeployableTurretGameplayRuntime.DeployableTurretLibrary.DeployableTurret_GetAimLocationForTargetActor
	// FVector DeployableTurret_GetAimLocationForTargetActor(class AActor* TargetActor, TMap<FGameplayTag, FScalableFloat>& NonPlayerPawnTargetTagToZOffsetMap); // [0xa8ef708] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/DeployableTurretGameplayRuntime.DeployableTurretLibrary.DeployableTurret_EnableSkeletalMeshComponentBudgeting
	// void DeployableTurret_EnableSkeletalMeshComponentBudgeting(class USkeletalMeshComponentBudgeted* SkeletalMesh, bool bEnable); // [0xa8ef610] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/DeployableTurretGameplayRuntime.DeployableTurretLibrary.DeployableTurret_CalculateTargetingLaserScale
	// float DeployableTurret_CalculateTargetingLaserScale(class AActor* TurretActor, FTransform& CurrentTurretAimTransform, FVector& LaserOrigin, float MaxLaserRange, float DistMult); // [0xa8ef338] Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Struct /Script/DeployableTurretGameplayRuntime.DeployableTurretBPAnimData
/// Size: 0x0028 (0x000000 - 0x000028)
struct FDeployableTurretBPAnimData
{ 
	FRotator                                           AimRotation;                                                // 0x0000   (0x0018)  
	float                                              SurfaceRollDegrees;                                         // 0x0018   (0x0004)  
	float                                              SurfacePitchDegrees;                                        // 0x001C   (0x0004)  
	EDeployableTurretState                             State;                                                      // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0021   (0x0007)  MISSED
};

