
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

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
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Script/IceRuntime.FortCurieElementAttachHandlerIce
/// Size: 0x0058 (0x000090 - 0x0000E8)
class UFortCurieElementAttachHandlerIce : public UFortCurieElementAttachHandler
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
	DMember(float)                                     MinWaterContentOnDetach                                     OFFSET(get<float>, {0x90, 4, 0, 0})
	DMember(float)                                     ShatterDamageThreshold                                      OFFSET(get<float>, {0x94, 4, 0, 0})
	CMember(TMap<ABuildingActor*, float>)              AggregateDamagePerActor                                     OFFSET(get<T>, {0x98, 80, 0, 0})


	/// Functions
	// Function /Script/IceRuntime.FortCurieElementAttachHandlerIce.ResolveBuildingDamage
	// void ResolveBuildingDamage(class ABuildingActor* DamagedBuildingActor, class AController* InstigatedBy, class AActor* DamageCauser); // [0xb79186c] Final|Native|Private 
	// Function /Script/IceRuntime.FortCurieElementAttachHandlerIce.HandleBuildingDamaged
	// void HandleBuildingDamaged(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, FVector HitLocation, class UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum); // [0xb790f3c] Final|Native|Private|HasDefaults 
};

/// Class /Script/IceRuntime.FortCurieIceNativeFXHandlerConfig
/// Size: 0x0000 (0x000168 - 0x000168)
class UFortCurieIceNativeFXHandlerConfig : public UFortCurieNativeFXHandlerConfig
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 360;

public:
};

/// Class /Script/IceRuntime.FortCurieIceNativeFXHandler
/// Size: 0x0000 (0x000040 - 0x000040)
class UFortCurieIceNativeFXHandler : public UFortCurieNativeFXHandler
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Script/IceRuntime.IceGroundPath
/// Size: 0x0060 (0x000290 - 0x0002F0)
class AIceGroundPath : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 752;

public:
	CMember(class UStaticMesh*)                        StaticMesh                                                  OFFSET(get<T>, {0x290, 8, 0, 0})
	CMember(class UMaterial*)                          Material                                                    OFFSET(get<T>, {0x298, 8, 0, 0})
	CMember(TEnumAsByte<ESplineMeshAxis>)              ForwardAxis                                                 OFFSET(get<T>, {0x2A0, 1, 0, 0})
	CMember(TArray<FVector_NetQuantize>)               SplinePoints                                                OFFSET(get<T>, {0x2A8, 16, 0, 0})
	SMember(FVector)                                   SplineOffset                                                OFFSET(getStruct<T>, {0x2B8, 24, 0, 0})
	DMember(float)                                     SplineColliderExtentWidth                                   OFFSET(get<float>, {0x2D0, 4, 0, 0})
	DMember(float)                                     SplineColliderExtentHeight                                  OFFSET(get<float>, {0x2D4, 4, 0, 0})
	DMember(float)                                     LandscapeTraceBuffer                                        OFFSET(get<float>, {0x2D8, 4, 0, 0})
	CMember(TArray<class UBoxComponent*>)              BoxColliderArray                                            OFFSET(get<T>, {0x2E0, 16, 0, 0})


	/// Functions
	// Function /Script/IceRuntime.IceGroundPath.OnRep_SplinePoints
	// void OnRep_SplinePoints();                                                                                               // [0xb791818] Final|Native|Private 
	// Function /Script/IceRuntime.IceGroundPath.GetLocationOnLandscape
	// FVector GetLocationOnLandscape(FVector Location);                                                                        // [0xb790e40] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/IceRuntime.IceGroundPath.GetLastSplinePointLocation
	// bool GetLastSplinePointLocation(FVector& LastPointLocation);                                                             // [0xb790d2c] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/IceRuntime.IceGroundPath.AddSplinePoint
	// void AddSplinePoint(FVector InWorldLoc);                                                                                 // [0xb790c10] Final|Native|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/IceRuntime.FortCurieIcePropagationManagerConfig
/// Size: 0x0018 (0x000040 - 0x000058)
class UFortCurieIcePropagationManagerConfig : public UCurieManagerComponentConfig
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	DMember(float)                                     IceBlockSeparation                                          OFFSET(get<float>, {0x40, 4, 0, 0})
	CMember(class UClass*)                             IceBlockClass                                               OFFSET(get<T>, {0x48, 8, 0, 0})
	DMember(float)                                     PropagationRate                                             OFFSET(get<float>, {0x50, 4, 0, 0})
	DMember(int32_t)                                   DefaultPropagationDepth                                     OFFSET(get<int32_t>, {0x54, 4, 0, 0})
};

/// Class /Script/IceRuntime.FortCurieIcePropagationManager
/// Size: 0x0058 (0x000030 - 0x000088)
class UFortCurieIcePropagationManager : public UFortCurieManagerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	CMember(class UFortCurieIcePropagationManagerConfig*) InternalManagerConfig                                    OFFSET(get<T>, {0x30, 8, 0, 0})


	/// Functions
	// Function /Script/IceRuntime.FortCurieIcePropagationManager.OnIceBlockDied
	// void OnIceBlockDied(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, FVector HitLocation, class UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum); // [0xb791390] Final|Native|Public|HasDefaults 
};

/// Class /Script/IceRuntime.FortIceSkatesMovementControls
/// Size: 0x0190 (0x000030 - 0x0001C0)
class UFortIceSkatesMovementControls : public UFortMovementControls
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 448;

public:
	SMember(FScalableFloat)                            TurnSpeed                                                   OFFSET(getStruct<T>, {0x30, 40, 0, 0})
	SMember(FScalableFloat)                            Acceleration                                                OFFSET(getStruct<T>, {0x58, 40, 0, 0})
	SMember(FScalableFloat)                            UphillSlopeAcceleration                                     OFFSET(getStruct<T>, {0x80, 40, 0, 0})
	SMember(FScalableFloat)                            DownhillSlopeAcceleration                                   OFFSET(getStruct<T>, {0xA8, 40, 0, 0})
	SMember(FScalableFloat)                            MaxSlopeAngle                                               OFFSET(getStruct<T>, {0xD0, 40, 0, 0})
	SMember(FScalableFloat)                            MinSpeed                                                    OFFSET(getStruct<T>, {0xF8, 40, 0, 0})
	SMember(FScalableFloat)                            TargetSpeed                                                 OFFSET(getStruct<T>, {0x120, 40, 0, 0})
	SMember(FScalableFloat)                            MaxSpeed                                                    OFFSET(getStruct<T>, {0x148, 40, 0, 0})
	SMember(FScalableFloat)                            AirDrag                                                     OFFSET(getStruct<T>, {0x170, 40, 0, 0})
};

