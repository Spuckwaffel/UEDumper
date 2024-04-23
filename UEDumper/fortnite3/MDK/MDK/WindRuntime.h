
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FieldSystemEngine
/// dependency: FortniteGame
/// dependency: GameplayAbilities
/// dependency: GameplayTags
/// dependency: NetCore

/// Class /Script/WindRuntime.FortPlayerWindTunnelAnimInstance
/// Size: 0x0010 (0x001510 - 0x001520)
class UFortPlayerWindTunnelAnimInstance : public UFortPlayerAnimInstanceProxy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5408;

public:
	DMember(bool)                                      bApplyWindSlideAdditive                                     OFFSET(get<bool>, {0x1510, 1, 1, 0})
};

/// Class /Script/WindRuntime.WindCheatManager
/// Size: 0x0018 (0x000028 - 0x000040)
class UWindCheatManager : public UChildCheatManager
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(class UClass*)                             InflateEffectClass                                          OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(class UClass*)                             DeflateEffectClass                                          OFFSET(get<T>, {0x30, 8, 0, 0})
	DMember(int32_t)                                   MinBalloonsOnPlayer                                         OFFSET(get<int32_t>, {0x38, 4, 0, 0})
	DMember(int32_t)                                   MaxBalloonsOnPlayer                                         OFFSET(get<int32_t>, {0x3C, 4, 0, 0})


	/// Functions
	// Function /Script/WindRuntime.WindCheatManager.ReleaseBalloonOnSelf
	// void ReleaseBalloonOnSelf(int32_t NumBalloons);                                                                          // [0x6b56e20] Final|BlueprintAuthorityOnly|Exec|Native|Public|Const 
	// Function /Script/WindRuntime.WindCheatManager.InflateBalloonOnSelf
	// void InflateBalloonOnSelf(int32_t NumBalloons);                                                                          // [0x6b56e20] Final|BlueprintAuthorityOnly|Exec|Native|Public|Const 
};

/// Class /Script/WindRuntime.WindField
/// Size: 0x0108 (0x000298 - 0x0003A0)
class AWindField : public AFieldSystemActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 928;

public:
	DMember(float)                                     StartTime                                                   OFFSET(get<float>, {0x298, 4, 0, 0})
	DMember(float)                                     StopTime                                                    OFFSET(get<float>, {0x29C, 4, 0, 0})
	DMember(float)                                     IncomingDuration                                            OFFSET(get<float>, {0x2A0, 4, 0, 0})
	DMember(float)                                     OutgoingDuration                                            OFFSET(get<float>, {0x2A4, 4, 0, 0})
	DMember(float)                                     StrengthMultiplier                                          OFFSET(get<float>, {0x2A8, 4, 0, 0})
	DMember(bool)                                      bIsActive                                                   OFFSET(get<bool>, {0x2AC, 1, 0, 0})


	/// Functions
	// Function /Script/WindRuntime.WindField.SetActive
	// void SetActive(bool bInIsActive);                                                                                        // [0xbf589c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/WindRuntime.WindField.RemoveIgnoredActor
	// void RemoveIgnoredActor(class AActor* Actor);                                                                            // [0xbf588bc] Final|Native|Public|BlueprintCallable 
	// Function /Script/WindRuntime.WindField.RemoveCollider
	// void RemoveCollider(class UShapeComponent* ShapeComponent);                                                              // [0xbf58778] Final|Native|Public|BlueprintCallable 
	// Function /Script/WindRuntime.WindField.OnEndOverlap
	// void OnEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* Other, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // [0xbf58624] Native|Protected     
	// Function /Script/WindRuntime.WindField.OnBeginOverlap
	// void OnBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* Other, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0xbf583ec] Native|Protected|HasOutParms 
	// Function /Script/WindRuntime.WindField.AddIgnoredActor
	// void AddIgnoredActor(class AActor* Actor);                                                                               // [0xbf57dd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/WindRuntime.WindField.AddCollider
	// void AddCollider(class UShapeComponent* ShapeComponent);                                                                 // [0xbf57d50] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/WindRuntime.LinearWindField
/// Size: 0x0090 (0x0003A0 - 0x000430)
class ALinearWindField : public AWindField
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1072;

public:
	SMember(FVector)                                   Direction                                                   OFFSET(getStruct<T>, {0x3A0, 24, 0, 0})
	DMember(float)                                     FieldStrength                                               OFFSET(get<float>, {0x3B8, 4, 0, 0})
	DMember(float)                                     ForceStrength                                               OFFSET(get<float>, {0x3BC, 4, 0, 0})
	SMember(FName)                                     PawnForceName                                               OFFSET(getStruct<T>, {0x3C0, 4, 0, 0})
	DMember(float)                                     PawnForceStrength                                           OFFSET(get<float>, {0x3C4, 4, 0, 0})
	CMember(class URadialVector*)                      RadialVector                                                OFFSET(get<T>, {0x3C8, 8, 0, 0})
	CMember(class URadialFalloff*)                     RadialFalloff                                               OFFSET(get<T>, {0x3D0, 8, 0, 0})
	CMember(class UOperatorField*)                     OperatorField                                               OFFSET(get<T>, {0x3D8, 8, 0, 0})
};

/// Class /Script/WindRuntime.RadialWindField
/// Size: 0x0150 (0x0003A0 - 0x0004F0)
class ARadialWindField : public AWindField
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1264;

public:
	SMember(FScalableFloat)                            FieldRadius                                                 OFFSET(getStruct<T>, {0x3A0, 40, 0, 0})
	SMember(FScalableFloat)                            FieldStrength                                               OFFSET(getStruct<T>, {0x3C8, 40, 0, 0})
	SMember(FScalableFloat)                            ForceRadius                                                 OFFSET(getStruct<T>, {0x3F0, 40, 0, 0})
	SMember(FScalableFloat)                            ForceStrength                                               OFFSET(getStruct<T>, {0x418, 40, 0, 0})
	CMember(class UCurveFloat*)                        ForceStrengthDistanceFalloff                                OFFSET(get<T>, {0x440, 8, 0, 0})
	SMember(FName)                                     PawnForceName                                               OFFSET(getStruct<T>, {0x448, 4, 0, 0})
	SMember(FScalableFloat)                            PawnForceStrength                                           OFFSET(getStruct<T>, {0x450, 40, 0, 0})
	CMember(class UCurveFloat*)                        PawnForceStrengthDistanceFalloff                            OFFSET(get<T>, {0x478, 8, 0, 0})
	DMember(bool)                                      bPawnForceIsPush                                            OFFSET(get<bool>, {0x480, 1, 0, 0})
	CMember(class URadialVector*)                      RadialVector                                                OFFSET(get<T>, {0x488, 8, 0, 0})
	CMember(class URadialFalloff*)                     RadialFalloff                                               OFFSET(get<T>, {0x490, 8, 0, 0})
	CMember(class UOperatorField*)                     OperatorField                                               OFFSET(get<T>, {0x498, 8, 0, 0})
};

/// Class /Script/WindRuntime.WindSplineComponent
/// Size: 0x0DF0 (0x000600 - 0x0013F0)
class UWindSplineComponent : public USplineComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5104;

public:
	SMember(FScalableFloat)                            DisableSafeZonePhaseIndex                                   OFFSET(getStruct<T>, {0x620, 40, 0, 0})
	CMember(class UStaticMesh*)                        StaticMesh                                                  OFFSET(get<T>, {0x648, 8, 0, 0})
	CMember(class UStaticMesh*)                        StartStaticMesh                                             OFFSET(get<T>, {0x650, 8, 0, 0})
	CMember(class UStaticMesh*)                        EndStaticMesh                                               OFFSET(get<T>, {0x658, 8, 0, 0})
	CMember(TEnumAsByte<ESplineMeshAxis>)              MeshForwardAxis                                             OFFSET(get<T>, {0x660, 1, 0, 0})
	SMember(FScalableFloat)                            MeshRollVariance                                            OFFSET(getStruct<T>, {0x668, 40, 0, 0})
	SMember(FName)                                     ActiveSectionStartMaterialParamName                         OFFSET(getStruct<T>, {0x690, 4, 0, 0})
	SMember(FName)                                     ActiveSectionEndMaterialParamName                           OFFSET(getStruct<T>, {0x694, 4, 0, 0})
	SMember(FScalableFloat)                            TargetingRefreshRate                                        OFFSET(getStruct<T>, {0x698, 40, 0, 0})
	SMember(FScalableFloat)                            TargetingRadius                                             OFFSET(getStruct<T>, {0x6C0, 40, 0, 0})
	CMember(TArray<TEnumAsByte<EObjectTypeQuery>>)     TargetObjectTypes                                           OFFSET(get<T>, {0x6E8, 16, 0, 0})
	SMember(FGameplayTagQuery)                         TargetTagQuery                                              OFFSET(getStruct<T>, {0x6F8, 72, 0, 0})
	SMember(FGameplayTagQuery)                         BlockageTagQuery                                            OFFSET(getStruct<T>, {0x740, 72, 0, 0})
	SMember(FScalableFloat)                            BlockageSubdivisions                                        OFFSET(getStruct<T>, {0x788, 40, 0, 0})
	CMember(TArray<FWindSplineTargetEffects>)          TargetEffects                                               OFFSET(get<T>, {0x7B0, 16, 0, 0})
	CMember(TMap<EFortPhysicsObjectType, FScalableFloat>) ObjectTypeToMaxTargetCount                               OFFSET(get<T>, {0x7C0, 80, 0, 0})
	SMember(FScalableFloat)                            MaxTargetCountReachedExpelDuration                          OFFSET(getStruct<T>, {0x810, 40, 0, 0})
	SMember(FScalableFloat)                            SkydivingLandingAngle                                       OFFSET(getStruct<T>, {0x838, 40, 0, 0})
	SMember(FScalableFloat)                            RampUpSpeed                                                 OFFSET(getStruct<T>, {0x860, 40, 0, 0})
	SMember(FScalableFloat)                            RampDownSpeed                                               OFFSET(getStruct<T>, {0x888, 40, 0, 0})
	SMember(FScalableFloat)                            ForwardForceFallOffStartDistance                            OFFSET(getStruct<T>, {0x8B0, 40, 0, 0})
	SMember(FScalableFloat)                            ForwardForceMagnitude                                       OFFSET(getStruct<T>, {0x8D8, 40, 0, 0})
	SMember(FScalableFloat)                            ReverseForceMagnitude                                       OFFSET(getStruct<T>, {0x900, 40, 0, 0})
	SMember(FScalableFloat)                            ForwardForceDistanceFallOffExponent                         OFFSET(getStruct<T>, {0x928, 40, 0, 0})
	SMember(FScalableFloat)                            InwardForceInnerRadius                                      OFFSET(getStruct<T>, {0x950, 40, 0, 0})
	SMember(FScalableFloat)                            InwardForceOuterRadiusAcceleration                          OFFSET(getStruct<T>, {0x978, 40, 0, 0})
	SMember(FScalableFloat)                            InwardForceInnerRadiusDeceleration                          OFFSET(getStruct<T>, {0x9A0, 40, 0, 0})
	SMember(FScalableFloat)                            InwardForceInnerRadiusSpeedThreshold                        OFFSET(getStruct<T>, {0x9C8, 40, 0, 0})
	SMember(FScalableFloat)                            InwardForceOuterRadiusSpeedThreshold                        OFFSET(getStruct<T>, {0x9F0, 40, 0, 0})
	SMember(FScalableFloat)                            InwardForceMaxReductionFromSteering                         OFFSET(getStruct<T>, {0xA18, 40, 0, 0})
	SMember(FScalableFloat)                            InwardForceMaxMultiplierWhenSteering                        OFFSET(getStruct<T>, {0xA40, 40, 0, 0})
	SMember(FScalableFloat)                            InwardForceMaxSteerAngle                                    OFFSET(getStruct<T>, {0xA68, 40, 0, 0})
	SMember(FScalableFloat)                            InwardForceLowVelocityThreshold                             OFFSET(getStruct<T>, {0xA90, 40, 0, 0})
	SMember(FScalableFloat)                            InwardForceLowVelocityMinValue                              OFFSET(getStruct<T>, {0xAB8, 40, 0, 0})
	SMember(FScalableFloat)                            InwardForceSteeringReduceAccelerationPower                  OFFSET(getStruct<T>, {0xAE0, 40, 0, 0})
	SMember(FScalableFloat)                            InwardForceSteeringReduceDecelerationPower                  OFFSET(getStruct<T>, {0xB08, 40, 0, 0})
	CMember(TMap<EFortPhysicsSimSize, FWindSplineForceModifiers>) SizeForceModifiers                               OFFSET(get<T>, {0xB30, 80, 0, 0})
	CMember(TMap<EFortPhysicsObjectType, FWindSplineForceModifiers>) ObjectTypeForceModifiers                      OFFSET(get<T>, {0xB80, 80, 0, 0})
	CMember(TArray<FWindSplineTagBasedForceModifiers>) QueryBasedForceModifiers                                    OFFSET(get<T>, {0xBD0, 16, 0, 0})
	SMember(FGameplayTagQuery)                         PawnSkydivingTimeLimitQuery                                 OFFSET(getStruct<T>, {0xBE0, 72, 0, 0})
	SMember(FScalableFloat)                            PawnSkydivingTimeLimit                                      OFFSET(getStruct<T>, {0xC28, 40, 0, 0})
	SMember(FScalableFloat)                            PawnSkydivingMinDistanceAboveGround                         OFFSET(getStruct<T>, {0xC50, 40, 0, 0})
	SMember(FScalableFloat)                            AutoWakeUpPhysicsObjects                                    OFFSET(getStruct<T>, {0xC78, 40, 0, 0})
	SMember(FScalableFloat)                            FieldMagnitudeBase                                          OFFSET(getStruct<T>, {0xCA0, 40, 0, 0})
	SMember(FScalableFloat)                            FieldMinMagnitudeAfterFalloff                               OFFSET(getStruct<T>, {0xCC8, 40, 0, 0})
	SMember(FScalableFloat)                            FieldMaxMagnitudeAfterFalloff                               OFFSET(getStruct<T>, {0xCF0, 40, 0, 0})
	CMember(class UClass*)                             PlayerWindAnimationLayer                                    OFFSET(get<T>, {0xD18, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnWindSplineDisabled                                        OFFSET(getStruct<T>, {0xD20, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnWindSplineEnabled                                         OFFSET(getStruct<T>, {0xD30, 16, 0, 0})
	SMember(FWindSplineTargetData)                     TargetData                                                  OFFSET(getStruct<T>, {0xD40, 440, 0, 0})
	SMember(FWindSplineBlockageArray)                  Blockages                                                   OFFSET(getStruct<T>, {0xEF8, 280, 0, 0})
	CMember(class UFieldSystemComponent*)              FieldSystemComponent                                        OFFSET(get<T>, {0x1010, 8, 0, 0})
	CMember(class UUniformVector*)                     UniformVector                                               OFFSET(get<T>, {0x1018, 8, 0, 0})
	CMember(class UBoxFalloff*)                        BoxFalloff                                                  OFFSET(get<T>, {0x1020, 8, 0, 0})
	CMember(class UOperatorField*)                     BoxOperatorField                                            OFFSET(get<T>, {0x1028, 8, 0, 0})
	CMember(TArray<FWindSplineMeshData>)               MeshDataArray                                               OFFSET(get<T>, {0x1030, 16, 0, 0})
	CMember(TArray<class UFXSystemComponent*>)         FXComponents                                                OFFSET(get<T>, {0x1040, 16, 0, 0})


	/// Functions
	// Function /Script/WindRuntime.WindSplineComponent.OnRep_TargetData
	// void OnRep_TargetData();                                                                                                 // [0xbf58764] Final|Native|Protected 
	// Function /Script/WindRuntime.WindSplineComponent.OnRep_Blockages
	// void OnRep_Blockages();                                                                                                  // [0xbf58764] Final|Native|Protected 
	// Function /Script/WindRuntime.WindSplineComponent.GetWindDataAtLocation
	// void GetWindDataAtLocation(FVector& InTargetLocation, FVector& OutDirection, float& OutAttenuation);                     // [0xbf58244] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|Const 
	// Function /Script/WindRuntime.WindSplineComponent.GetTargetingRadius
	// float GetTargetingRadius();                                                                                              // [0xbf58210] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/WindRuntime.WindSplineComponent.GetClosestActiveLocations
	// void GetClosestActiveLocations(FVector& InTargetLocation, bool& bIsClosestPointActive, FVector& ClosestPointOnSpline, TArray<FVector>& ClosestActiveLocations); // [0xbf58004] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|Const 
	// Function /Script/WindRuntime.WindSplineComponent.Enable
	// void Enable();                                                                                                           // [0xbf57fb0] Final|Native|Protected 
	// Function /Script/WindRuntime.WindSplineComponent.Disable
	// void Disable();                                                                                                          // [0xbf57f9c] Final|Native|Protected 
};

/// Struct /Script/WindRuntime.RootMotionSource_ConstantWindForce
/// Size: 0x0020 (0x0000E0 - 0x000100)
class FRootMotionSource_ConstantWindForce : public FRootMotionSource
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	SMember(FVector)                                   Force                                                       OFFSET(getStruct<T>, {0xD8, 24, 0, 0})
	CMember(class UCurveFloat*)                        StrengthOverTime                                            OFFSET(get<T>, {0xF0, 8, 0, 0})
};

/// Struct /Script/WindRuntime.PhysicsWindSplineAsyncInPersistent
/// Size: 0x01F0 (0x000000 - 0x0001F0)
class FPhysicsWindSplineAsyncInPersistent : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 496;

public:
};

/// Struct /Script/WindRuntime.PhysicsWindSplineAsyncOutContinuous
/// Size: 0x0001 (0x000000 - 0x000001)
class FPhysicsWindSplineAsyncOutContinuous : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/WindRuntime.WindSplineTargetDatum
/// Size: 0x001C (0x00000C - 0x000028)
class FWindSplineTargetDatum : public FFastArraySerializerItem
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(TWeakObjectPtr<AActor*>)                   Target                                                      OFFSET(get<T>, {0xC, 8, 0, 0})
};

/// Struct /Script/WindRuntime.WindSplineTargetData
/// Size: 0x00B0 (0x000108 - 0x0001B8)
class FWindSplineTargetData : public FFastArraySerializer
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 440;

public:
	CMember(TArray<FWindSplineTargetDatum>)            Items                                                       OFFSET(get<T>, {0x108, 16, 0, 0})
};

/// Struct /Script/WindRuntime.WindSplineForceModifiers
/// Size: 0x00A0 (0x000000 - 0x0000A0)
class FWindSplineForceModifiers : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	SMember(FScalableFloat)                            ForwardForceMagnitudeMultiplier                             OFFSET(getStruct<T>, {0x0, 40, 0, 0})
	SMember(FScalableFloat)                            ReverseForceMagnitudeMultiplier                             OFFSET(getStruct<T>, {0x28, 40, 0, 0})
	SMember(FScalableFloat)                            InwardForceOuterRadiusAccelerationMultiplier                OFFSET(getStruct<T>, {0x50, 40, 0, 0})
	SMember(FScalableFloat)                            InwardForceInnerRadiusDecelerationMultiplier                OFFSET(getStruct<T>, {0x78, 40, 0, 0})
};

/// Struct /Script/WindRuntime.WindSplineTagBasedForceModifiers
/// Size: 0x00E8 (0x000000 - 0x0000E8)
class FWindSplineTagBasedForceModifiers : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
	SMember(FGameplayTagQuery)                         Query                                                       OFFSET(getStruct<T>, {0x0, 72, 0, 0})
	SMember(FWindSplineForceModifiers)                 Modifier                                                    OFFSET(getStruct<T>, {0x48, 160, 0, 0})
};

/// Struct /Script/WindRuntime.WindSplineTargetEffects
/// Size: 0x0060 (0x000000 - 0x000060)
class FWindSplineTargetEffects : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FGameplayTagQuery)                         Filter                                                      OFFSET(getStruct<T>, {0x0, 72, 0, 0})
	SMember(FGameplayTag)                              Cue                                                         OFFSET(getStruct<T>, {0x48, 4, 0, 0})
	CMember(TArray<class UClass*>)                     GameplayEffects                                             OFFSET(get<T>, {0x50, 16, 0, 0})
};

/// Struct /Script/WindRuntime.WindSplineBlockageID
/// Size: 0x0004 (0x000000 - 0x000004)
class FWindSplineBlockageID : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(uint32_t)                                  ID                                                          OFFSET(get<uint32_t>, {0x0, 4, 0, 0})
};

/// Struct /Script/WindRuntime.WindSplineSubDivBlockage
/// Size: 0x0008 (0x000000 - 0x000008)
class FWindSplineSubDivBlockage : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(int32_t)                                   SubDivIdx                                                   OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(float)                                     StartSectionLength                                          OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Struct /Script/WindRuntime.WindSplineBlockage
/// Size: 0x0024 (0x00000C - 0x000030)
class FWindSplineBlockage : public FFastArraySerializerItem
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FWindSplineBlockageID)                     ID                                                          OFFSET(getStruct<T>, {0xC, 4, 0, 0})
	CMember(TArray<FWindSplineSubDivBlockage>)         SubDivBlockages                                             OFFSET(get<T>, {0x10, 16, 0, 0})
	DMember(float)                                     ActivationTime                                              OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(float)                                     DeactivationTime                                            OFFSET(get<float>, {0x24, 4, 0, 0})
};

/// Struct /Script/WindRuntime.WindSplineBlockageArray
/// Size: 0x0010 (0x000108 - 0x000118)
class FWindSplineBlockageArray : public FFastArraySerializer
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 280;

public:
	CMember(TArray<FWindSplineBlockage>)               Items                                                       OFFSET(get<T>, {0x108, 16, 0, 0})
};

/// Struct /Script/WindRuntime.WindSplineMeshData
/// Size: 0x0018 (0x000000 - 0x000018)
class FWindSplineMeshData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(TArray<class UMaterialInstanceDynamic*>)   MeshMaterials                                               OFFSET(get<T>, {0x8, 16, 0, 0})
};

