
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/DeployableTurretGameplayRuntime.DeployableTurretAnimInstance
/// Size: 0x0040 (0x000370 - 0x0003B0)
class UDeployableTurretAnimInstance : public UAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 944;

public:
	DMember(bool)                                      bIsAttacking                                                OFFSET(get<bool>, {0x368, 1, 1, 0})
	DMember(bool)                                      bIsWindUp                                                   OFFSET(get<bool>, {0x368, 1, 1, 1})
	DMember(bool)                                      bIsTracking                                                 OFFSET(get<bool>, {0x368, 1, 1, 2})
	DMember(bool)                                      bIsWindDown                                                 OFFSET(get<bool>, {0x368, 1, 1, 3})
	DMember(bool)                                      bIsDeactivated                                              OFFSET(get<bool>, {0x368, 1, 1, 4})
	DMember(bool)                                      bIsScanning                                                 OFFSET(get<bool>, {0x368, 1, 1, 5})
	DMember(bool)                                      bIsAggro                                                    OFFSET(get<bool>, {0x368, 1, 1, 6})
	DMember(bool)                                      bFallAndDeployToDeactivated                                 OFFSET(get<bool>, {0x368, 1, 1, 7})
	DMember(bool)                                      bFallAndDeployToScan                                        OFFSET(get<bool>, {0x369, 1, 1, 0})
	DMember(bool)                                      bAggroToFire                                                OFFSET(get<bool>, {0x369, 1, 1, 1})
	DMember(bool)                                      bInterruptibleCurveOverThreshold                            OFFSET(get<bool>, {0x369, 1, 1, 2})
	DMember(bool)                                      bTurnEndCurveOverThreshold                                  OFFSET(get<bool>, {0x369, 1, 1, 3})
	SMember(FName)                                     InterruptibleCurveName                                      OFFSET(getStruct<T>, {0x36C, 4, 0, 0})
	DMember(float)                                     InterruptibleCurveThreshold                                 OFFSET(get<float>, {0x370, 4, 0, 0})
	SMember(FName)                                     TurnEndCurveName                                            OFFSET(getStruct<T>, {0x374, 4, 0, 0})
	DMember(float)                                     TurnEndCurveThreshold                                       OFFSET(get<float>, {0x378, 4, 0, 0})
	SMember(FRotator)                                  AimRotationInComponentSpace                                 OFFSET(getStruct<T>, {0x380, 24, 0, 0})
	SMember(FRotator)                                  SurfaceRotation                                             OFFSET(getStruct<T>, {0x398, 24, 0, 0})


	/// Functions
	// Function /Script/DeployableTurretGameplayRuntime.DeployableTurretAnimInstance.SetNativeVariables
	// void SetNativeVariables(class ABuildingGameplayActor* OwningTurretBGA, FDeployableTurretBPAnimData& AnimData);           // [0xa8efc84] Final|Native|Protected|HasOutParms|BlueprintCallable 
};

/// Class /Script/DeployableTurretGameplayRuntime.DeployableTurretLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UDeployableTurretLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

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
class FDeployableTurretBPAnimData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FRotator)                                  AimRotation                                                 OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	DMember(float)                                     SurfaceRollDegrees                                          OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     SurfacePitchDegrees                                         OFFSET(get<float>, {0x1C, 4, 0, 0})
	CMember(EDeployableTurretState)                    State                                                       OFFSET(get<T>, {0x20, 1, 0, 0})
};

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

