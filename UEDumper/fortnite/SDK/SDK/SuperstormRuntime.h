
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: AIModule
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FieldSystemEngine
/// dependency: FortniteGame
/// dependency: GameplayAbilities
/// dependency: GameplayTags
/// dependency: ModularGameplay
/// dependency: NetCore
/// dependency: TargetingSystem

/// Struct /Script/SuperstormRuntime.TempestLightningBoltEffectContainer
/// Size: 0x0050 (0x000000 - 0x000050)
struct FTempestLightningBoltEffectContainer
{ 
	FGameplayTagQuery                                  TargetFilter;                                               // 0x0000   (0x0048)  
	class UClass*                                      GameplayEffect;                                             // 0x0048   (0x0008)  
};

/// Struct /Script/SuperstormRuntime.TempestLightningBoltData
/// Size: 0x0078 (0x000000 - 0x000078)
struct FTempestLightningBoltData
{ 
	class AFortPawn*                                   SourcePawn;                                                 // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_5[0x40];                                      // 0x0008   (0x0040)  MISSED
	class AFortGameplayEffectDeliveryActor*            LightningBolt;                                              // 0x0048   (0x0008)  
	TArray<class AActor*>                              TargetActors;                                               // 0x0050   (0x0010)  
	TArray<class AFortPawn*>                           TargetPawns;                                                // 0x0060   (0x0010)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0070   (0x0008)  MISSED
};

/// Class /Script/SuperstormRuntime.TempestLightningComponent
/// Size: 0x0378 (0x0000A0 - 0x000418)
class UTempestLightningComponent : public UGameFrameworkComponent
{ 
public:
	class UClass*                                      LightningBoltClass;                                         // 0x00A0   (0x0008)  
	TArray<FTempestLightningBoltEffectContainer>       LightningBoltTargetEffectContainers;                        // 0x00A8   (0x0010)  
	class UTargetingPreset*                            LightningBoltTargetingPreset;                               // 0x00B8   (0x0008)  
	class UEnvQuery*                                   FindTargetablePawnsQuery;                                   // 0x00C0   (0x0008)  
	class UEnvQuery*                                   FindTargetableLocationQuery;                                // 0x00C8   (0x0008)  
	FName                                              EnvironmentQueryParamName_LightningRadius;                  // 0x00D0   (0x0004)  
	FName                                              EnvironmentQueryParamName_MinLightningTargetDistance;       // 0x00D4   (0x0004)  
	FScalableFloat                                     LightningCloudHeight;                                       // 0x00D8   (0x0028)  
	FScalableFloat                                     LightningRadius;                                            // 0x0100   (0x0028)  
	FScalableFloat                                     MinLightningTargetDistance;                                 // 0x0128   (0x0028)  
	FScalableFloat                                     LightningFrequencyMin;                                      // 0x0150   (0x0028)  
	FScalableFloat                                     LightningFrequencyMax;                                      // 0x0178   (0x0028)  
	FScalableFloat                                     LightningBoltsMin;                                          // 0x01A0   (0x0028)  
	FScalableFloat                                     LightningBoltsMax;                                          // 0x01C8   (0x0028)  
	FScalableFloat                                     LightningBoltIntervalMin;                                   // 0x01F0   (0x0028)  
	FScalableFloat                                     LightningBoltIntervalMax;                                   // 0x0218   (0x0028)  
	FScalableFloat                                     LightningBoltSeparationDistance;                            // 0x0240   (0x0028)  
	FScalableFloat                                     LightningStruckPawnReselectionInterval;                     // 0x0268   (0x0028)  
	FScalableFloat                                     LightningBoltTelegraphDuration;                             // 0x0290   (0x0028)  
	FScalableFloat                                     LightningBoltImpactIgnitionRadius;                          // 0x02B8   (0x0028)  
	FScalableFloat                                     LightningBoltGrassIgnitionRadius;                           // 0x02E0   (0x0028)  
	FScalableFloat                                     LightningBoltGrassFirePropagationFuel;                      // 0x0308   (0x0028)  
	FGameplayTag                                       LightningAreaTargetTelegraphCue;                            // 0x0330   (0x0004)  
	FGameplayTag                                       LightningBoltTargetTelegraphCue;                            // 0x0334   (0x0004)  
	TArray<FTempestLightningBoltData>                  LightningBoltData;                                          // 0x0338   (0x0010)  
	unsigned char                                      UnknownData00_6[0xD0];                                      // 0x0348   (0x00D0)  MISSED


	/// Functions
	// Function /Script/SuperstormRuntime.TempestLightningComponent.GetLightningRadius
	// float GetLightningRadius();                                                                                           // [0xab0e2c8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SuperstormRuntime.TempestLightningComponent.GetCloudHeight
	// float GetCloudHeight();                                                                                               // [0xab0e294] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/SuperstormRuntime.TornadoSimulationData
/// Size: 0x0034 (0x00000C - 0x000040)
struct FTornadoSimulationData : FFastArraySerializerItem
{ 
	SDK_UNDEFINED(8,15676) /* TWeakObjectPtr<AActor*> */ __um(Actor);                                              // 0x000C   (0x0008)  
	EFortPhysicsObjectType                             ObjectType;                                                 // 0x0014   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0015   (0x0003)  MISSED
	float                                              TangentVelocity;                                            // 0x0018   (0x0004)  
	float                                              TangentAccel;                                               // 0x001C   (0x0004)  
	float                                              HeightVelocity;                                             // 0x0020   (0x0004)  
	float                                              HeightAccel;                                                // 0x0024   (0x0004)  
	FVector                                            Torque;                                                     // 0x0028   (0x0018)  
};

/// Struct /Script/SuperstormRuntime.TornadoClientSimulationArray
/// Size: 0x0010 (0x000108 - 0x000118)
struct FTornadoClientSimulationArray : FFastArraySerializer
{ 
	TArray<FTornadoSimulationData>                     ActorsToSimulateArray;                                      // 0x0108   (0x0010)  
};

/// Class /Script/SuperstormRuntime.TempestTornadoForcesComponent
/// Size: 0x0490 (0x0000A0 - 0x000530)
class UTempestTornadoForcesComponent : public UGameFrameworkComponent
{ 
public:
	SDK_UNDEFINED(16,15677) /* FMulticastInlineDelegate */ __um(OnActorAddedToTornadoForces);                      // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,15678) /* FMulticastInlineDelegate */ __um(OnActorRemovedFromTornadoForces);                  // 0x00B0   (0x0010)  
	FDataTableRowHandle                                ConfigHandle;                                               // 0x00C0   (0x0010)  
	TArray<FGameplayTag>                               PhysicsPresetTagsAngularDampingToOverride;                  // 0x00D0   (0x0010)  
	FScalableFloat                                     AngularDampingOverride;                                     // 0x00E0   (0x0028)  
	class UClass*                                      PawnInGE;                                                   // 0x0108   (0x0008)  
	SDK_UNDEFINED(80,15679) /* TMap<EFortPhysicsObjectType, FScalableFloat> */ __um(ObjectTypeToMaxCapCount);      // 0x0110   (0x0050)  
	FGameplayTagContainer                              TagsToIgnore;                                               // 0x0160   (0x0020)  
	class UClass*                                      RecentlyRemovedGE;                                          // 0x0180   (0x0008)  
	class UTargetingPreset*                            TargetingPreset;                                            // 0x0188   (0x0008)  
	FGameplayTag                                       DamageSetByCallerTag;                                       // 0x0190   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0194   (0x0004)  MISSED
	class UClass*                                      PeriodicDamageGE;                                           // 0x0198   (0x0008)  
	class UClass*                                      BurstDamageGE;                                              // 0x01A0   (0x0008)  
	FGameplayTag                                       TornadoActiveCue;                                           // 0x01A8   (0x0004)  
	FGameplayTag                                       PlayerNearCue;                                              // 0x01AC   (0x0004)  
	FGameplayTag                                       PawnInCue;                                                  // 0x01B0   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x01B4   (0x0004)  MISSED
	FScalableFloat                                     PlayerNearRange;                                            // 0x01B8   (0x0028)  
	FGameplayTagContainer                              BlockAbilitiesWithTag;                                      // 0x01E0   (0x0020)  
	FTornadoClientSimulationArray                      ActorsToClientSimulate;                                     // 0x0200   (0x0118)  
	unsigned char                                      UnknownData02_5[0x118];                                     // 0x0318   (0x0118)  MISSED
	FTargetingRequestHandle                            AsyncTargetingHandle;                                       // 0x0430   (0x0004)  
	unsigned char                                      UnknownData03_5[0x4];                                       // 0x0434   (0x0004)  MISSED
	SDK_UNDEFINED(80,15680) /* TSet<AFortPlayerPawn*> */ __um(PreviouslyNearPlayers);                              // 0x0438   (0x0050)  
	unsigned char                                      UnknownData04_6[0xA8];                                      // 0x0488   (0x00A8)  MISSED


	/// Functions
	// Function /Script/SuperstormRuntime.TempestTornadoForcesComponent.OnVehicleInTornadoPlayerExit
	// void OnVehicleInTornadoPlayerExit(class AFortPlayerControllerAthena* PlayerController, class AFortAthenaVehicle* Vehicle); // [0xab0e38c] Final|Native|Private 
	// Function /Script/SuperstormRuntime.TempestTornadoForcesComponent.IsActorInTornado
	// bool IsActorInTornado(class AActor* Actor);                                                                           // [0xab0e2fc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SuperstormRuntime.TornadoRadialForce
/// Size: 0x0038 (0x000298 - 0x0002D0)
class ATornadoRadialForce : public AFieldSystemActor
{ 
public:
	float                                              Radius;                                                     // 0x0298   (0x0004)  
	float                                              Strength;                                                   // 0x029C   (0x0004)  
	float                                              StartTime;                                                  // 0x02A0   (0x0004)  
	float                                              StopTime;                                                   // 0x02A4   (0x0004)  
	float                                              IncomingDuration;                                           // 0x02A8   (0x0004)  
	float                                              OutgoingDuration;                                           // 0x02AC   (0x0004)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x02B0   (0x0008)  MISSED
	class URadialVector*                               RadialVector;                                               // 0x02B8   (0x0008)  
	class URadialFalloff*                              RadialFalloff;                                              // 0x02C0   (0x0008)  
	class UOperatorField*                              OperatorField;                                              // 0x02C8   (0x0008)  
};

/// Struct /Script/SuperstormRuntime.TornadoActorInfo
/// Size: 0x0050 (0x000000 - 0x000050)
struct FTornadoActorInfo
{ 
	unsigned char                                      UnknownData00_2[0x50];                                      // 0x0000   (0x0050)  MISSED
};

/// Struct /Script/SuperstormRuntime.TornadoObjectForceModifiers
/// Size: 0x0010 (0x000000 - 0x000010)
struct FTornadoObjectForceModifiers
{ 
	float                                              TangentVelocityMultiplier;                                  // 0x0000   (0x0004)  
	float                                              HeightVelocityMultiplier;                                   // 0x0004   (0x0004)  
	float                                              DragMultiplier;                                             // 0x0008   (0x0004)  
	float                                              TorqueMultiplier;                                           // 0x000C   (0x0004)  
};

/// Struct /Script/SuperstormRuntime.TornadoConfigEntry
/// Size: 0x0130 (0x000008 - 0x000138)
struct FTornadoConfigEntry : FTableRowBase
{ 
	float                                              EyeBufferDistance;                                          // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	class UCurveFloat*                                 TargetOrbitRadiusCurve;                                     // 0x0010   (0x0008)  
	float                                              OrbitStrength;                                              // 0x0018   (0x0004)  
	float                                              TargetTangentVelocity;                                      // 0x001C   (0x0004)  
	float                                              TangentVelocityVariance;                                    // 0x0020   (0x0004)  
	float                                              TangentAcceleration;                                        // 0x0024   (0x0004)  
	float                                              TangentAccelerationVariance;                                // 0x0028   (0x0004)  
	float                                              TangentAngleOffset;                                         // 0x002C   (0x0004)  
	float                                              TargetHeightVelocity;                                       // 0x0030   (0x0004)  
	float                                              HeightVelocityVariance;                                     // 0x0034   (0x0004)  
	float                                              HeightAcceleration;                                         // 0x0038   (0x0004)  
	float                                              HeightAccelerationVariance;                                 // 0x003C   (0x0004)  
	float                                              TorqueStrength;                                             // 0x0040   (0x0004)  
	float                                              TorqueVariance;                                             // 0x0044   (0x0004)  
	float                                              TimeToForceEject;                                           // 0x0048   (0x0004)  
	float                                              HeightToForceEject;                                         // 0x004C   (0x0004)  
	float                                              DepthToForceEject;                                          // 0x0050   (0x0004)  
	bool                                               bOrbitRadiusExtendsDistanceToForceEject;                    // 0x0054   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0055   (0x0003)  MISSED
	float                                              DistanceToForceEject;                                       // 0x0058   (0x0004)  
	float                                              EjectionBoost;                                              // 0x005C   (0x0004)  
	float                                              MaxDragVelocity;                                            // 0x0060   (0x0004)  
	float                                              DragCoefficient1;                                           // 0x0064   (0x0004)  
	float                                              DragCoefficient2;                                           // 0x0068   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x006C   (0x0004)  MISSED
	SDK_UNDEFINED(80,15681) /* TMap<EFortPhysicsSimSize, FTornadoObjectForceModifiers> */ __um(SizeForceModifiers); // 0x0070   (0x0050)  
	SDK_UNDEFINED(80,15682) /* TMap<EFortPhysicsObjectType, FTornadoObjectForceModifiers> */ __um(ObjectTypeForceModifiers); // 0x00C0   (0x0050)  
	float                                              PlayerGravityFloorOffset;                                   // 0x0110   (0x0004)  
	float                                              PlayerGravityFloorWidth;                                    // 0x0114   (0x0004)  
	float                                              PlayerGravityFloorGravityScalar;                            // 0x0118   (0x0004)  
	float                                              PeriodicDamageToPawns;                                      // 0x011C   (0x0004)  
	float                                              PeriodicDamageToProps;                                      // 0x0120   (0x0004)  
	float                                              BurstDamageToStaticActors;                                  // 0x0124   (0x0004)  
	float                                              ChancePerSecondToApplyBurstDamage;                          // 0x0128   (0x0004)  
	bool                                               bAllowPickupPlayers;                                        // 0x012C   (0x0001)  
	bool                                               bAllowPickupPawns;                                          // 0x012D   (0x0001)  
	bool                                               bAllowPickupVehicles;                                       // 0x012E   (0x0001)  
	bool                                               bAllowPickupProjectiles;                                    // 0x012F   (0x0001)  
	bool                                               bAffectStaticObjects;                                       // 0x0130   (0x0001)  
	EFortPhysicsSimSize                                MaxAllowedPhysicsObjectSize;                                // 0x0131   (0x0001)  
	EFortPhysicsSimSize                                MinAllowedPhysicsObjectSize;                                // 0x0132   (0x0001)  
	unsigned char                                      UnknownData03_6[0x5];                                       // 0x0133   (0x0005)  MISSED
};

/// Struct /Script/SuperstormRuntime.TornadoTelemetryStats
/// Size: 0x00A8 (0x000000 - 0x0000A8)
struct FTornadoTelemetryStats
{ 
	SDK_UNDEFINED(80,15683) /* TMap<EFortPhysicsObjectType, int32_t> */ __um(NumActorsEnteredByType);              // 0x0000   (0x0050)  
	SDK_UNDEFINED(80,15684) /* TSet<FUniqueNetIdRepl> */ __um(EnteredPlayerAccountIds);                            // 0x0050   (0x0050)  
	int32_t                                            NumPreBuiltStructuresDestroyed;                             // 0x00A0   (0x0004)  
	int32_t                                            NumPlayerBuiltStructuresDestroyed;                          // 0x00A4   (0x0004)  
};

