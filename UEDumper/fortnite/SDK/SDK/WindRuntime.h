
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FieldSystemEngine
/// dependency: FortniteGame
/// dependency: GameplayAbilities
/// dependency: GameplayTags
/// dependency: NetCore

/// Class /Script/WindRuntime.FortPlayerWindTunnelAnimInstance
/// Size: 0x0010 (0x001620 - 0x001630)
class UFortPlayerWindTunnelAnimInstance : public UFortPlayerAnimInstanceProxy
{ 
public:
	bool                                               bApplyWindSlideAdditive : 1;                                // 0x1620:0 (0x0001)  
	unsigned char                                      UnknownData00_6[0xF];                                       // 0x1621   (0x000F)  MISSED
};

/// Class /Script/WindRuntime.WindCheatManager
/// Size: 0x0018 (0x000028 - 0x000040)
class UWindCheatManager : public UChildCheatManager
{ 
public:
	class UClass*                                      InflateEffectClass;                                         // 0x0028   (0x0008)  
	class UClass*                                      DeflateEffectClass;                                         // 0x0030   (0x0008)  
	int32_t                                            MinBalloonsOnPlayer;                                        // 0x0038   (0x0004)  
	int32_t                                            MaxBalloonsOnPlayer;                                        // 0x003C   (0x0004)  


	/// Functions
	// Function /Script/WindRuntime.WindCheatManager.ReleaseBalloonOnSelf
	// void ReleaseBalloonOnSelf(int32_t NumBalloons);                                                                       // [0x69e33bc] Final|BlueprintAuthorityOnly|Exec|Native|Public|Const 
	// Function /Script/WindRuntime.WindCheatManager.InflateBalloonOnSelf
	// void InflateBalloonOnSelf(int32_t NumBalloons);                                                                       // [0x69e33bc] Final|BlueprintAuthorityOnly|Exec|Native|Public|Const 
};

/// Class /Script/WindRuntime.WindField
/// Size: 0x0108 (0x000298 - 0x0003A0)
class AWindField : public AFieldSystemActor
{ 
public:
	float                                              StartTime;                                                  // 0x0298   (0x0004)  
	float                                              StopTime;                                                   // 0x029C   (0x0004)  
	float                                              IncomingDuration;                                           // 0x02A0   (0x0004)  
	float                                              OutgoingDuration;                                           // 0x02A4   (0x0004)  
	float                                              StrengthMultiplier;                                         // 0x02A8   (0x0004)  
	bool                                               bIsActive;                                                  // 0x02AC   (0x0001)  
	unsigned char                                      UnknownData00_6[0xF3];                                      // 0x02AD   (0x00F3)  MISSED


	/// Functions
	// Function /Script/WindRuntime.WindField.SetActive
	// void SetActive(bool bInIsActive);                                                                                     // [0xab45ef4] Final|Native|Public|BlueprintCallable 
	// Function /Script/WindRuntime.WindField.RemoveIgnoredActor
	// void RemoveIgnoredActor(class AActor* Actor);                                                                         // [0xab45df0] Final|Native|Public|BlueprintCallable 
	// Function /Script/WindRuntime.WindField.RemoveCollider
	// void RemoveCollider(class UShapeComponent* ShapeComponent);                                                           // [0xab45cac] Final|Native|Public|BlueprintCallable 
	// Function /Script/WindRuntime.WindField.OnEndOverlap
	// void OnEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* Other, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // [0xab45b58] Native|Protected     
	// Function /Script/WindRuntime.WindField.OnBeginOverlap
	// void OnBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* Other, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0xab45920] Native|Protected|HasOutParms 
	// Function /Script/WindRuntime.WindField.AddIgnoredActor
	// void AddIgnoredActor(class AActor* Actor);                                                                            // [0xab45304] Final|Native|Public|BlueprintCallable 
	// Function /Script/WindRuntime.WindField.AddCollider
	// void AddCollider(class UShapeComponent* ShapeComponent);                                                              // [0xab45284] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/WindRuntime.LinearWindField
/// Size: 0x0090 (0x0003A0 - 0x000430)
class ALinearWindField : public AWindField
{ 
public:
	FVector                                            Direction;                                                  // 0x03A0   (0x0018)  
	float                                              FieldStrength;                                              // 0x03B8   (0x0004)  
	float                                              ForceStrength;                                              // 0x03BC   (0x0004)  
	FName                                              PawnForceName;                                              // 0x03C0   (0x0004)  
	float                                              PawnForceStrength;                                          // 0x03C4   (0x0004)  
	class URadialVector*                               RadialVector;                                               // 0x03C8   (0x0008)  
	class URadialFalloff*                              RadialFalloff;                                              // 0x03D0   (0x0008)  
	class UOperatorField*                              OperatorField;                                              // 0x03D8   (0x0008)  
	unsigned char                                      UnknownData00_6[0x50];                                      // 0x03E0   (0x0050)  MISSED
};

/// Class /Script/WindRuntime.RadialWindField
/// Size: 0x0150 (0x0003A0 - 0x0004F0)
class ARadialWindField : public AWindField
{ 
public:
	FScalableFloat                                     FieldRadius;                                                // 0x03A0   (0x0028)  
	FScalableFloat                                     FieldStrength;                                              // 0x03C8   (0x0028)  
	FScalableFloat                                     ForceRadius;                                                // 0x03F0   (0x0028)  
	FScalableFloat                                     ForceStrength;                                              // 0x0418   (0x0028)  
	class UCurveFloat*                                 ForceStrengthDistanceFalloff;                               // 0x0440   (0x0008)  
	FName                                              PawnForceName;                                              // 0x0448   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x044C   (0x0004)  MISSED
	FScalableFloat                                     PawnForceStrength;                                          // 0x0450   (0x0028)  
	class UCurveFloat*                                 PawnForceStrengthDistanceFalloff;                           // 0x0478   (0x0008)  
	bool                                               bPawnForceIsPush;                                           // 0x0480   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0481   (0x0007)  MISSED
	class URadialVector*                               RadialVector;                                               // 0x0488   (0x0008)  
	class URadialFalloff*                              RadialFalloff;                                              // 0x0490   (0x0008)  
	class UOperatorField*                              OperatorField;                                              // 0x0498   (0x0008)  
	unsigned char                                      UnknownData02_6[0x50];                                      // 0x04A0   (0x0050)  MISSED
};

/// Struct /Script/WindRuntime.WindSplineTargetEffects
/// Size: 0x0060 (0x000000 - 0x000060)
struct FWindSplineTargetEffects
{ 
	FGameplayTagQuery                                  Filter;                                                     // 0x0000   (0x0048)  
	FGameplayTag                                       Cue;                                                        // 0x0048   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x004C   (0x0004)  MISSED
	TArray<class UClass*>                              GameplayEffects;                                            // 0x0050   (0x0010)  
};

/// Struct /Script/WindRuntime.WindSplineForceModifiers
/// Size: 0x00A0 (0x000000 - 0x0000A0)
struct FWindSplineForceModifiers
{ 
	FScalableFloat                                     ForwardForceMagnitudeMultiplier;                            // 0x0000   (0x0028)  
	FScalableFloat                                     ReverseForceMagnitudeMultiplier;                            // 0x0028   (0x0028)  
	FScalableFloat                                     InwardForceOuterRadiusAccelerationMultiplier;               // 0x0050   (0x0028)  
	FScalableFloat                                     InwardForceInnerRadiusDecelerationMultiplier;               // 0x0078   (0x0028)  
};

/// Struct /Script/WindRuntime.WindSplineTagBasedForceModifiers
/// Size: 0x00E8 (0x000000 - 0x0000E8)
struct FWindSplineTagBasedForceModifiers
{ 
	FGameplayTagQuery                                  Query;                                                      // 0x0000   (0x0048)  
	FWindSplineForceModifiers                          Modifier;                                                   // 0x0048   (0x00A0)  
};

/// Struct /Script/WindRuntime.WindSplineTargetDatum
/// Size: 0x001C (0x00000C - 0x000028)
struct FWindSplineTargetDatum : FFastArraySerializerItem
{ 
	SDK_UNDEFINED(8,15780) /* TWeakObjectPtr<AActor*> */ __um(Target);                                             // 0x000C   (0x0008)  
	unsigned char                                      UnknownData00_6[0x14];                                      // 0x0014   (0x0014)  MISSED
};

/// Struct /Script/WindRuntime.WindSplineTargetData
/// Size: 0x00B0 (0x000108 - 0x0001B8)
struct FWindSplineTargetData : FFastArraySerializer
{ 
	TArray<FWindSplineTargetDatum>                     Items;                                                      // 0x0108   (0x0010)  
	unsigned char                                      UnknownData00_6[0xA0];                                      // 0x0118   (0x00A0)  MISSED
};

/// Struct /Script/WindRuntime.WindSplineBlockageID
/// Size: 0x0004 (0x000000 - 0x000004)
struct FWindSplineBlockageID
{ 
	uint32_t                                           ID;                                                         // 0x0000   (0x0004)  
};

/// Struct /Script/WindRuntime.WindSplineSubDivBlockage
/// Size: 0x0008 (0x000000 - 0x000008)
struct FWindSplineSubDivBlockage
{ 
	int32_t                                            SubDivIdx;                                                  // 0x0000   (0x0004)  
	float                                              StartSectionLength;                                         // 0x0004   (0x0004)  
};

/// Struct /Script/WindRuntime.WindSplineBlockage
/// Size: 0x0024 (0x00000C - 0x000030)
struct FWindSplineBlockage : FFastArraySerializerItem
{ 
	FWindSplineBlockageID                              ID;                                                         // 0x000C   (0x0004)  
	TArray<FWindSplineSubDivBlockage>                  SubDivBlockages;                                            // 0x0010   (0x0010)  
	float                                              ActivationTime;                                             // 0x0020   (0x0004)  
	float                                              DeactivationTime;                                           // 0x0024   (0x0004)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0028   (0x0008)  MISSED
};

/// Struct /Script/WindRuntime.WindSplineBlockageArray
/// Size: 0x0010 (0x000108 - 0x000118)
struct FWindSplineBlockageArray : FFastArraySerializer
{ 
	TArray<FWindSplineBlockage>                        Items;                                                      // 0x0108   (0x0010)  
};

/// Struct /Script/WindRuntime.WindSplineMeshData
/// Size: 0x0018 (0x000000 - 0x000018)
struct FWindSplineMeshData
{ 
	TArray<class UMaterialInstanceDynamic*>            MeshMaterials;                                              // 0x0008   (0x0010)  
};

/// Class /Script/WindRuntime.WindSplineComponent
/// Size: 0x0DF0 (0x000600 - 0x0013F0)
class UWindSplineComponent : public USplineComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x20];                                      // 0x0600   (0x0020)  MISSED
	FScalableFloat                                     DisableSafeZonePhaseIndex;                                  // 0x0620   (0x0028)  
	class UStaticMesh*                                 StaticMesh;                                                 // 0x0648   (0x0008)  
	class UStaticMesh*                                 StartStaticMesh;                                            // 0x0650   (0x0008)  
	class UStaticMesh*                                 EndStaticMesh;                                              // 0x0658   (0x0008)  
	SDK_UNDEFINED(1,15781) /* TEnumAsByte<ESplineMeshAxis> */ __um(MeshForwardAxis);                               // 0x0660   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0661   (0x0007)  MISSED
	FScalableFloat                                     MeshRollVariance;                                           // 0x0668   (0x0028)  
	FName                                              ActiveSectionStartMaterialParamName;                        // 0x0690   (0x0004)  
	FName                                              ActiveSectionEndMaterialParamName;                          // 0x0694   (0x0004)  
	FScalableFloat                                     TargetingRefreshRate;                                       // 0x0698   (0x0028)  
	FScalableFloat                                     TargetingRadius;                                            // 0x06C0   (0x0028)  
	SDK_UNDEFINED(16,15782) /* TArray<TEnumAsByte<EObjectTypeQuery>> */ __um(TargetObjectTypes);                   // 0x06E8   (0x0010)  
	FGameplayTagQuery                                  TargetTagQuery;                                             // 0x06F8   (0x0048)  
	FGameplayTagQuery                                  BlockageTagQuery;                                           // 0x0740   (0x0048)  
	FScalableFloat                                     BlockageSubdivisions;                                       // 0x0788   (0x0028)  
	TArray<FWindSplineTargetEffects>                   TargetEffects;                                              // 0x07B0   (0x0010)  
	SDK_UNDEFINED(80,15783) /* TMap<EFortPhysicsObjectType, FScalableFloat> */ __um(ObjectTypeToMaxTargetCount);   // 0x07C0   (0x0050)  
	FScalableFloat                                     MaxTargetCountReachedExpelDuration;                         // 0x0810   (0x0028)  
	FScalableFloat                                     SkydivingLandingAngle;                                      // 0x0838   (0x0028)  
	FScalableFloat                                     RampUpSpeed;                                                // 0x0860   (0x0028)  
	FScalableFloat                                     RampDownSpeed;                                              // 0x0888   (0x0028)  
	FScalableFloat                                     ForwardForceFallOffStartDistance;                           // 0x08B0   (0x0028)  
	FScalableFloat                                     ForwardForceMagnitude;                                      // 0x08D8   (0x0028)  
	FScalableFloat                                     ReverseForceMagnitude;                                      // 0x0900   (0x0028)  
	FScalableFloat                                     ForwardForceDistanceFallOffExponent;                        // 0x0928   (0x0028)  
	FScalableFloat                                     InwardForceInnerRadius;                                     // 0x0950   (0x0028)  
	FScalableFloat                                     InwardForceOuterRadiusAcceleration;                         // 0x0978   (0x0028)  
	FScalableFloat                                     InwardForceInnerRadiusDeceleration;                         // 0x09A0   (0x0028)  
	FScalableFloat                                     InwardForceInnerRadiusSpeedThreshold;                       // 0x09C8   (0x0028)  
	FScalableFloat                                     InwardForceOuterRadiusSpeedThreshold;                       // 0x09F0   (0x0028)  
	FScalableFloat                                     InwardForceMaxReductionFromSteering;                        // 0x0A18   (0x0028)  
	FScalableFloat                                     InwardForceMaxMultiplierWhenSteering;                       // 0x0A40   (0x0028)  
	FScalableFloat                                     InwardForceMaxSteerAngle;                                   // 0x0A68   (0x0028)  
	FScalableFloat                                     InwardForceLowVelocityThreshold;                            // 0x0A90   (0x0028)  
	FScalableFloat                                     InwardForceLowVelocityMinValue;                             // 0x0AB8   (0x0028)  
	FScalableFloat                                     InwardForceSteeringReduceAccelerationPower;                 // 0x0AE0   (0x0028)  
	FScalableFloat                                     InwardForceSteeringReduceDecelerationPower;                 // 0x0B08   (0x0028)  
	SDK_UNDEFINED(80,15784) /* TMap<EFortPhysicsSimSize, FWindSplineForceModifiers> */ __um(SizeForceModifiers);   // 0x0B30   (0x0050)  
	SDK_UNDEFINED(80,15785) /* TMap<EFortPhysicsObjectType, FWindSplineForceModifiers> */ __um(ObjectTypeForceModifiers); // 0x0B80   (0x0050)  
	TArray<FWindSplineTagBasedForceModifiers>          QueryBasedForceModifiers;                                   // 0x0BD0   (0x0010)  
	FGameplayTagQuery                                  PawnSkydivingTimeLimitQuery;                                // 0x0BE0   (0x0048)  
	FScalableFloat                                     PawnSkydivingTimeLimit;                                     // 0x0C28   (0x0028)  
	FScalableFloat                                     PawnSkydivingMinDistanceAboveGround;                        // 0x0C50   (0x0028)  
	FScalableFloat                                     AutoWakeUpPhysicsObjects;                                   // 0x0C78   (0x0028)  
	FScalableFloat                                     FieldMagnitudeBase;                                         // 0x0CA0   (0x0028)  
	FScalableFloat                                     FieldMinMagnitudeAfterFalloff;                              // 0x0CC8   (0x0028)  
	FScalableFloat                                     FieldMaxMagnitudeAfterFalloff;                              // 0x0CF0   (0x0028)  
	class UClass*                                      PlayerWindAnimationLayer;                                   // 0x0D18   (0x0008)  
	SDK_UNDEFINED(16,15786) /* FMulticastInlineDelegate */ __um(OnWindSplineDisabled);                             // 0x0D20   (0x0010)  
	SDK_UNDEFINED(16,15787) /* FMulticastInlineDelegate */ __um(OnWindSplineEnabled);                              // 0x0D30   (0x0010)  
	FWindSplineTargetData                              TargetData;                                                 // 0x0D40   (0x01B8)  
	FWindSplineBlockageArray                           Blockages;                                                  // 0x0EF8   (0x0118)  
	class UFieldSystemComponent*                       FieldSystemComponent;                                       // 0x1010   (0x0008)  
	class UUniformVector*                              UniformVector;                                              // 0x1018   (0x0008)  
	class UBoxFalloff*                                 BoxFalloff;                                                 // 0x1020   (0x0008)  
	class UOperatorField*                              BoxOperatorField;                                           // 0x1028   (0x0008)  
	TArray<FWindSplineMeshData>                        MeshDataArray;                                              // 0x1030   (0x0010)  
	TArray<class UFXSystemComponent*>                  FXComponents;                                               // 0x1040   (0x0010)  
	unsigned char                                      UnknownData02_6[0x3A0];                                     // 0x1050   (0x03A0)  MISSED


	/// Functions
	// Function /Script/WindRuntime.WindSplineComponent.OnRep_TargetData
	// void OnRep_TargetData();                                                                                              // [0xab45c98] Final|Native|Protected 
	// Function /Script/WindRuntime.WindSplineComponent.OnRep_Blockages
	// void OnRep_Blockages();                                                                                               // [0xab45c98] Final|Native|Protected 
	// Function /Script/WindRuntime.WindSplineComponent.GetWindDataAtLocation
	// void GetWindDataAtLocation(FVector& InTargetLocation, FVector& OutDirection, float& OutAttenuation);                  // [0xab45778] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|Const 
	// Function /Script/WindRuntime.WindSplineComponent.GetTargetingRadius
	// float GetTargetingRadius();                                                                                           // [0xab45744] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/WindRuntime.WindSplineComponent.GetClosestActiveLocations
	// void GetClosestActiveLocations(FVector& InTargetLocation, bool& bIsClosestPointActive, FVector& ClosestPointOnSpline, TArray<FVector>& ClosestActiveLocations); // [0xab45538] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|Const 
	// Function /Script/WindRuntime.WindSplineComponent.Enable
	// void Enable();                                                                                                        // [0xab454e4] Final|Native|Protected 
	// Function /Script/WindRuntime.WindSplineComponent.Disable
	// void Disable();                                                                                                       // [0xab454d0] Final|Native|Protected 
};

/// Struct /Script/WindRuntime.RootMotionSource_ConstantWindForce
/// Size: 0x0020 (0x0000E0 - 0x000100)
struct FRootMotionSource_ConstantWindForce : FRootMotionSource
{ 
	FVector                                            Force;                                                      // 0x00D8   (0x0018)  
	class UCurveFloat*                                 StrengthOverTime;                                           // 0x00F0   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x00F8   (0x0008)  MISSED
};

/// Struct /Script/WindRuntime.PhysicsWindSplineAsyncInPersistent
/// Size: 0x01F0 (0x000000 - 0x0001F0)
struct FPhysicsWindSplineAsyncInPersistent
{ 
	unsigned char                                      UnknownData00_2[0x1F0];                                     // 0x0000   (0x01F0)  MISSED
};

/// Struct /Script/WindRuntime.PhysicsWindSplineAsyncOutContinuous
/// Size: 0x0001 (0x000000 - 0x000001)
struct FPhysicsWindSplineAsyncOutContinuous
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

