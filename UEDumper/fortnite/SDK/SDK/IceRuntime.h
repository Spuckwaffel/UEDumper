
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Curie
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: GameplayAbilities

/// Class /Script/IceRuntime.FortCurieElementAttachConditionHandlerIce
/// Size: 0x0000 (0x000040 - 0x000040)
class UFortCurieElementAttachConditionHandlerIce : public UFortCurieElementAttachConditionHandler
{ 
public:
};

/// Class /Script/IceRuntime.FortCurieElementAttachHandlerIce
/// Size: 0x0058 (0x000090 - 0x0000E8)
class UFortCurieElementAttachHandlerIce : public UFortCurieElementAttachHandler
{ 
public:
	float                                              MinWaterContentOnDetach;                                    // 0x0090   (0x0004)  
	float                                              ShatterDamageThreshold;                                     // 0x0094   (0x0004)  
	SDK_UNDEFINED(80,14199) /* TMap<ABuildingActor*, float> */ __um(AggregateDamagePerActor);                      // 0x0098   (0x0050)  


	/// Functions
	// Function /Script/IceRuntime.FortCurieElementAttachHandlerIce.ResolveBuildingDamage
	// void ResolveBuildingDamage(class ABuildingActor* DamagedBuildingActor, class AController* InstigatedBy, class AActor* DamageCauser); // [0xa94ecb0] Final|Native|Private 
	// Function /Script/IceRuntime.FortCurieElementAttachHandlerIce.HandleBuildingDamaged
	// void HandleBuildingDamaged(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, FVector HitLocation, class UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum); // [0xa94e288] Final|Native|Private|HasDefaults 
};

/// Class /Script/IceRuntime.FortCurieIceNativeFXHandlerConfig
/// Size: 0x0000 (0x000168 - 0x000168)
class UFortCurieIceNativeFXHandlerConfig : public UFortCurieNativeFXHandlerConfig
{ 
public:
};

/// Class /Script/IceRuntime.FortCurieIceNativeFXHandler
/// Size: 0x0000 (0x000040 - 0x000040)
class UFortCurieIceNativeFXHandler : public UFortCurieNativeFXHandler
{ 
public:
};

/// Class /Script/IceRuntime.IceGroundPath
/// Size: 0x0060 (0x000290 - 0x0002F0)
class AIceGroundPath : public AActor
{ 
public:
	class UStaticMesh*                                 StaticMesh;                                                 // 0x0290   (0x0008)  
	class UMaterial*                                   Material;                                                   // 0x0298   (0x0008)  
	SDK_UNDEFINED(1,14200) /* TEnumAsByte<ESplineMeshAxis> */ __um(ForwardAxis);                                   // 0x02A0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x02A1   (0x0007)  MISSED
	TArray<FVector_NetQuantize>                        SplinePoints;                                               // 0x02A8   (0x0010)  
	FVector                                            SplineOffset;                                               // 0x02B8   (0x0018)  
	float                                              SplineColliderExtentWidth;                                  // 0x02D0   (0x0004)  
	float                                              SplineColliderExtentHeight;                                 // 0x02D4   (0x0004)  
	float                                              LandscapeTraceBuffer;                                       // 0x02D8   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x02DC   (0x0004)  MISSED
	TArray<class UBoxComponent*>                       BoxColliderArray;                                           // 0x02E0   (0x0010)  


	/// Functions
	// Function /Script/IceRuntime.IceGroundPath.OnRep_SplinePoints
	// void OnRep_SplinePoints();                                                                                            // [0xa94ec5c] Final|Native|Private 
	// Function /Script/IceRuntime.IceGroundPath.GetLocationOnLandscape
	// FVector GetLocationOnLandscape(FVector Location);                                                                     // [0xa94e11c] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/IceRuntime.IceGroundPath.GetLastSplinePointLocation
	// bool GetLastSplinePointLocation(FVector& LastPointLocation);                                                          // [0xa94e008] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/IceRuntime.IceGroundPath.AddSplinePoint
	// void AddSplinePoint(FVector InWorldLoc);                                                                              // [0xa94dec8] Final|Native|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/IceRuntime.FortCurieIcePropagationManagerConfig
/// Size: 0x0018 (0x000040 - 0x000058)
class UFortCurieIcePropagationManagerConfig : public UCurieManagerComponentConfig
{ 
public:
	float                                              IceBlockSeparation;                                         // 0x0040   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0044   (0x0004)  MISSED
	class UClass*                                      IceBlockClass;                                              // 0x0048   (0x0008)  
	float                                              PropagationRate;                                            // 0x0050   (0x0004)  
	int32_t                                            DefaultPropagationDepth;                                    // 0x0054   (0x0004)  
};

/// Class /Script/IceRuntime.FortCurieIcePropagationManager
/// Size: 0x0058 (0x000030 - 0x000088)
class UFortCurieIcePropagationManager : public UFortCurieManagerComponent
{ 
public:
	class UFortCurieIcePropagationManagerConfig*       InternalManagerConfig;                                      // 0x0030   (0x0008)  
	unsigned char                                      UnknownData00_6[0x50];                                      // 0x0038   (0x0050)  MISSED


	/// Functions
	// Function /Script/IceRuntime.FortCurieIcePropagationManager.OnIceBlockDied
	// void OnIceBlockDied(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, FVector HitLocation, class UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum); // [0xa94e750] Final|Native|Public|HasDefaults 
};

/// Class /Script/IceRuntime.FortIceSkatesMovementControls
/// Size: 0x0190 (0x000030 - 0x0001C0)
class UFortIceSkatesMovementControls : public UFortMovementControls
{ 
public:
	FScalableFloat                                     TurnSpeed;                                                  // 0x0030   (0x0028)  
	FScalableFloat                                     Acceleration;                                               // 0x0058   (0x0028)  
	FScalableFloat                                     UphillSlopeAcceleration;                                    // 0x0080   (0x0028)  
	FScalableFloat                                     DownhillSlopeAcceleration;                                  // 0x00A8   (0x0028)  
	FScalableFloat                                     MaxSlopeAngle;                                              // 0x00D0   (0x0028)  
	FScalableFloat                                     MinSpeed;                                                   // 0x00F8   (0x0028)  
	FScalableFloat                                     TargetSpeed;                                                // 0x0120   (0x0028)  
	FScalableFloat                                     MaxSpeed;                                                   // 0x0148   (0x0028)  
	FScalableFloat                                     AirDrag;                                                    // 0x0170   (0x0028)  
	unsigned char                                      UnknownData00_6[0x28];                                      // 0x0198   (0x0028)  MISSED
};

