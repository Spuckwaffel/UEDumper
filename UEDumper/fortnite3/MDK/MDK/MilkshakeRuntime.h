
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
/// dependency: GameplayCameras
/// dependency: ModularGameplay

/// Class /Script/MilkshakeRuntime.MilkshakeControllerComponent
/// Size: 0x02C0 (0x0000A8 - 0x000368)
class UMilkshakeControllerComponent : public UFortControllerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 872;

public:
	SMember(FScalableFloat)                            NearbyBuildingActorsUpdateScanRadius                        OFFSET(getStruct<T>, {0xA8, 40, 0, 0})
	DMember(int32_t)                                   NearbyBuildingActorsUpdateScanRadiusReplicated              OFFSET(get<int32_t>, {0xD0, 4, 0, 0})
	SMember(FScalableFloat)                            CameraShakeScale                                            OFFSET(getStruct<T>, {0xD8, 40, 0, 0})
	DMember(float)                                     CameraShakeScaleReplicated                                  OFFSET(get<float>, {0x100, 4, 0, 0})
	SMember(FScalableFloat)                            NearbyBuildingActorsUpdateInterval                          OFFSET(getStruct<T>, {0x108, 40, 0, 0})
	DMember(float)                                     NearbyBuildingActorsUpdateIntervalReplicated                OFFSET(get<float>, {0x130, 4, 0, 0})
	SMember(FScalableFloat)                            bForceFeedbackEnabled                                       OFFSET(getStruct<T>, {0x138, 40, 0, 0})
	DMember(bool)                                      bForceFeedbackEnabledReplicated                             OFFSET(get<bool>, {0x160, 1, 0, 0})
	SMember(FName)                                     ForceFeedbackTag                                            OFFSET(getStruct<T>, {0x164, 4, 0, 0})
	CMember(class UCurveFloat*)                        PawnInAirBasedCameraShakeMultiplierLookUpCurve              OFFSET(get<T>, {0x168, 8, 0, 0})
	DMember(float)                                     PawnInAirBasedCameraShakeMultiplierInterpSpeed              OFFSET(get<float>, {0x170, 4, 0, 0})
	CMember(class UClass*)                             CameraShakeClass                                            OFFSET(get<T>, {0x178, 8, 0, 0})
	SMember(FROscillator)                              CameraShakeRotOscillationBaseValues                         OFFSET(getStruct<T>, {0x180, 36, 0, 0})
	DMember(float)                                     CameraShakeRotOscillationPitchFrequencyMin                  OFFSET(get<float>, {0x1A4, 4, 0, 0})
	DMember(float)                                     CameraShakeRotOscillationPitchFrequencyMax                  OFFSET(get<float>, {0x1A8, 4, 0, 0})
	DMember(float)                                     CameraShakeRotOscillationRollFrequencyMin                   OFFSET(get<float>, {0x1AC, 4, 0, 0})
	DMember(float)                                     CameraShakeRotOscillationRollFrequencyMax                   OFFSET(get<float>, {0x1B0, 4, 0, 0})
	CMember(class USoundBase*)                         CameraShakeSoundCue                                         OFFSET(get<T>, {0x1B8, 8, 0, 0})
	DMember(float)                                     CameraShakeAudioFadeOutDuration                             OFFSET(get<float>, {0x1C0, 4, 0, 0})
	CMember(EAudioFaderCurve)                          CameraShakeAudioFadeCurveType                               OFFSET(get<T>, {0x1C4, 1, 0, 0})
	SMember(FName)                                     CameraShakeAudioParam                                       OFFSET(getStruct<T>, {0x1C8, 4, 0, 0})
	SMember(FScalableFloat)                            MinTimeBetweenBuildingDamageFX                              OFFSET(getStruct<T>, {0x1D0, 40, 0, 0})
	DMember(float)                                     MinTimeBetweenBuildingDamageFXReplicated                    OFFSET(get<float>, {0x1F8, 4, 0, 0})
	SMember(FScalableFloat)                            MaxTimeBetweenBuildingDamageFX                              OFFSET(getStruct<T>, {0x200, 40, 0, 0})
	DMember(float)                                     MaxTimeBetweenBuildingDamageFXReplicated                    OFFSET(get<float>, {0x228, 4, 0, 0})
	CMember(class UFXSystemAsset*)                     BuildingDamageFXTemplate                                    OFFSET(get<T>, {0x230, 8, 0, 0})
	DMember(float)                                     BuildingDamageFXCooldown                                    OFFSET(get<float>, {0x238, 4, 0, 0})
	SMember(FName)                                     BuildingDamageFXMagnitudeParamName                          OFFSET(getStruct<T>, {0x23C, 4, 0, 0})
	CMember(TMap<ABuildingActor*, float>)              RecentDamageFXBuildings                                     OFFSET(get<T>, {0x240, 80, 0, 0})
	CMember(TMap<TEnumAsByte<EFortResourceType>, USoundBase*>) BuildingDamageSoundCueByResourceType                OFFSET(get<T>, {0x290, 80, 0, 0})
	DMember(float)                                     PlayForceFeedbackInterval                                   OFFSET(get<float>, {0x2E0, 4, 0, 0})
	CMember(TArray<class UForceFeedbackEffect*>)       ForceFeedbackEffects                                        OFFSET(get<T>, {0x2E8, 16, 0, 0})
	CMember(TArray<class AMilkshakeEarthquakeActor*>)  RegisteredEarthquakes                                       OFFSET(get<T>, {0x308, 16, 0, 0})
	CMember(class AMilkshakeEarthquakeActor*)          CurrentEarthquake                                           OFFSET(get<T>, {0x318, 8, 0, 0})
	CMember(class UAudioComponent*)                    CurrentCameraShakeAudioComponent                            OFFSET(get<T>, {0x338, 8, 0, 0})
	CMember(TArray<class ABuildingActor*>)             NearbyBuildingActors                                        OFFSET(get<T>, {0x340, 16, 0, 0})


	/// Functions
	// Function /Script/MilkshakeRuntime.MilkshakeControllerComponent.UpdateNearbyBuildingActors
	// void UpdateNearbyBuildingActors();                                                                                       // [0xbca1ec4] Final|Native|Private 
	// Function /Script/MilkshakeRuntime.MilkshakeControllerComponent.UnregisterEarthquake
	// void UnregisterEarthquake(class AMilkshakeEarthquakeActor* Earthquake);                                                  // [0xbca1e44] Final|Native|Public|BlueprintCallable 
	// Function /Script/MilkshakeRuntime.MilkshakeControllerComponent.SpawnBuildingDamageFX
	// void SpawnBuildingDamageFX();                                                                                            // [0xbca1db4] Final|Native|Private 
	// Function /Script/MilkshakeRuntime.MilkshakeControllerComponent.RegisterEarthquake
	// void RegisterEarthquake(class AMilkshakeEarthquakeActor* Earthquake);                                                    // [0xbca1cb4] Final|Native|Public|BlueprintCallable 
	// Function /Script/MilkshakeRuntime.MilkshakeControllerComponent.PlayForceFeedback
	// void PlayForceFeedback();                                                                                                // [0xbca1ca0] Final|Native|Private 
};

/// Class /Script/MilkshakeRuntime.MilkshakeEarthquakeActor
/// Size: 0x00B0 (0x000290 - 0x000340)
class AMilkshakeEarthquakeActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 832;

public:
	DMember(int32_t)                                   AsyncOverlappedActorsPreallocateCount                       OFFSET(get<int32_t>, {0x290, 4, 0, 0})
	CMember(TArray<class AActor*>)                     AsyncOverlappedActors                                       OFFSET(get<T>, {0x298, 16, 0, 0})
	CMember(TArray<FMilkshakeEarthquakePhysicsActorInfo>) OverlappedPhysicsActorInfos                              OFFSET(get<T>, {0x2A8, 16, 0, 0})
	SMember(FScalableFloat)                            MaxNumOfPhysicActorSimulation                               OFFSET(getStruct<T>, {0x2B8, 40, 0, 0})
	DMember(float)                                     MinTimeBeforeNextForceDirectionUpdate                       OFFSET(get<float>, {0x2E0, 4, 0, 0})
	DMember(float)                                     MaxTimeBeforeNextForceDirectionUpdate                       OFFSET(get<float>, {0x2E4, 4, 0, 0})
	DMember(float)                                     MinPhysicsImpulseMagnitude                                  OFFSET(get<float>, {0x2E8, 4, 0, 0})
	DMember(float)                                     MaxPhysicsImpulseMagnitude                                  OFFSET(get<float>, {0x2EC, 4, 0, 0})
	CMember(TMap<EFortPhysicsSimSize, float>)          SimSizeToImpulseScalarMap                                   OFFSET(get<T>, {0x2F0, 80, 0, 0})


	/// Functions
	// Function /Script/MilkshakeRuntime.MilkshakeEarthquakeActor.TickEarthquakePhysicsActorForces
	// void TickEarthquakePhysicsActorForces(float DeltaSeconds);                                                               // [0xbca1dc8] Final|BlueprintAuthorityOnly|Native|Protected|BlueprintCallable 
	// Function /Script/MilkshakeRuntime.MilkshakeEarthquakeActor.RemoveNullsFromAsyncOverlappedActors
	// void RemoveNullsFromAsyncOverlappedActors();                                                                             // [0x35e6228] Final|BlueprintAuthorityOnly|Native|Protected|BlueprintCallable 
	// Function /Script/MilkshakeRuntime.MilkshakeEarthquakeActor.RemoveAsyncOverlappedActorsOutsideRadius
	// void RemoveAsyncOverlappedActorsOutsideRadius();                                                                         // [0x35e6228] Final|BlueprintAuthorityOnly|Native|Protected|BlueprintCallable 
	// Function /Script/MilkshakeRuntime.MilkshakeEarthquakeActor.OnActorRemovedFromAsyncOverlappedActors
	// void OnActorRemovedFromAsyncOverlappedActors(class AActor* RemovedActor);                                                // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Script/MilkshakeRuntime.MilkshakeEarthquakeActor.GetRadius
	// float GetRadius();                                                                                                       // [0x1340978] Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/MilkshakeRuntime.MilkshakeEarthquakeActor.GetNormalizedMagnitudeAtLocation
	// float GetNormalizedMagnitudeAtLocation(FVector Location);                                                                // [0x1340978] Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/MilkshakeRuntime.MilkshakeFieldSystemActor
/// Size: 0x0030 (0x000298 - 0x0002C8)
class AMilkshakeFieldSystemActor : public AFieldSystemActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 712;

public:
	CMember(class UOperatorField*)                     OperatorFieldMultiplyComponent                              OFFSET(get<T>, {0x298, 8, 0, 0})
	CMember(class URadialFalloff*)                     RadialFallOffComponent                                      OFFSET(get<T>, {0x2A0, 8, 0, 0})
	CMember(class URadialVector*)                      RadialVectorComponent                                       OFFSET(get<T>, {0x2A8, 8, 0, 0})
	DMember(float)                                     Radius                                                      OFFSET(get<float>, {0x2B0, 4, 0, 0})
	DMember(float)                                     StopGameTime                                                OFFSET(get<float>, {0x2B4, 4, 0, 0})
	DMember(float)                                     IncomingDuration                                            OFFSET(get<float>, {0x2B8, 4, 0, 0})
	DMember(float)                                     OutgoingDuration                                            OFFSET(get<float>, {0x2BC, 4, 0, 0})
	DMember(float)                                     Strength                                                    OFFSET(get<float>, {0x2C0, 4, 0, 0})


	/// Functions
	// Function /Script/MilkshakeRuntime.MilkshakeFieldSystemActor.SetStrength
	// void SetStrength(float InStrength);                                                                                      // [0xbca1d34] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
};

/// Struct /Script/MilkshakeRuntime.MilkshakeEarthquakePhysicsActorInfo
/// Size: 0x0010 (0x000000 - 0x000010)
class FMilkshakeEarthquakePhysicsActorInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TWeakObjectPtr<AActor*>)                   PhysicsActor                                                OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(float)                                     ForceDirectionUpdateGameTime                                OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(bool)                                      bIsForceForward                                             OFFSET(get<bool>, {0xC, 1, 0, 0})
	CMember(EFortPhysicsSimSize)                       PhysicsSimSize                                              OFFSET(get<T>, {0xD, 1, 0, 0})
};

