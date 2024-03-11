
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
/// dependency: GameplayCameras
/// dependency: ModularGameplay

/// Class /Script/MilkshakeRuntime.MilkshakeControllerComponent
/// Size: 0x02C0 (0x0000A8 - 0x000368)
class UMilkshakeControllerComponent : public UFortControllerComponent
{ 
public:
	FScalableFloat                                     NearbyBuildingActorsUpdateScanRadius;                       // 0x00A8   (0x0028)  
	int32_t                                            NearbyBuildingActorsUpdateScanRadiusReplicated;             // 0x00D0   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00D4   (0x0004)  MISSED
	FScalableFloat                                     CameraShakeScale;                                           // 0x00D8   (0x0028)  
	float                                              CameraShakeScaleReplicated;                                 // 0x0100   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0104   (0x0004)  MISSED
	FScalableFloat                                     NearbyBuildingActorsUpdateInterval;                         // 0x0108   (0x0028)  
	float                                              NearbyBuildingActorsUpdateIntervalReplicated;               // 0x0130   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x0134   (0x0004)  MISSED
	FScalableFloat                                     bForceFeedbackEnabled;                                      // 0x0138   (0x0028)  
	bool                                               bForceFeedbackEnabledReplicated;                            // 0x0160   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x0161   (0x0003)  MISSED
	FName                                              ForceFeedbackTag;                                           // 0x0164   (0x0004)  
	class UCurveFloat*                                 PawnInAirBasedCameraShakeMultiplierLookUpCurve;             // 0x0168   (0x0008)  
	float                                              PawnInAirBasedCameraShakeMultiplierInterpSpeed;             // 0x0170   (0x0004)  
	unsigned char                                      UnknownData04_5[0x4];                                       // 0x0174   (0x0004)  MISSED
	class UClass*                                      CameraShakeClass;                                           // 0x0178   (0x0008)  
	FROscillator                                       CameraShakeRotOscillationBaseValues;                        // 0x0180   (0x0024)  
	float                                              CameraShakeRotOscillationPitchFrequencyMin;                 // 0x01A4   (0x0004)  
	float                                              CameraShakeRotOscillationPitchFrequencyMax;                 // 0x01A8   (0x0004)  
	float                                              CameraShakeRotOscillationRollFrequencyMin;                  // 0x01AC   (0x0004)  
	float                                              CameraShakeRotOscillationRollFrequencyMax;                  // 0x01B0   (0x0004)  
	unsigned char                                      UnknownData05_5[0x4];                                       // 0x01B4   (0x0004)  MISSED
	class USoundBase*                                  CameraShakeSoundCue;                                        // 0x01B8   (0x0008)  
	float                                              CameraShakeAudioFadeOutDuration;                            // 0x01C0   (0x0004)  
	EAudioFaderCurve                                   CameraShakeAudioFadeCurveType;                              // 0x01C4   (0x0001)  
	unsigned char                                      UnknownData06_5[0x3];                                       // 0x01C5   (0x0003)  MISSED
	FName                                              CameraShakeAudioParam;                                      // 0x01C8   (0x0004)  
	unsigned char                                      UnknownData07_5[0x4];                                       // 0x01CC   (0x0004)  MISSED
	FScalableFloat                                     MinTimeBetweenBuildingDamageFX;                             // 0x01D0   (0x0028)  
	float                                              MinTimeBetweenBuildingDamageFXReplicated;                   // 0x01F8   (0x0004)  
	unsigned char                                      UnknownData08_5[0x4];                                       // 0x01FC   (0x0004)  MISSED
	FScalableFloat                                     MaxTimeBetweenBuildingDamageFX;                             // 0x0200   (0x0028)  
	float                                              MaxTimeBetweenBuildingDamageFXReplicated;                   // 0x0228   (0x0004)  
	unsigned char                                      UnknownData09_5[0x4];                                       // 0x022C   (0x0004)  MISSED
	class UFXSystemAsset*                              BuildingDamageFXTemplate;                                   // 0x0230   (0x0008)  
	float                                              BuildingDamageFXCooldown;                                   // 0x0238   (0x0004)  
	FName                                              BuildingDamageFXMagnitudeParamName;                         // 0x023C   (0x0004)  
	SDK_UNDEFINED(80,15062) /* TMap<ABuildingActor*, float> */ __um(RecentDamageFXBuildings);                      // 0x0240   (0x0050)  
	SDK_UNDEFINED(80,15063) /* TMap<TEnumAsByte<EFortResourceType>, USoundBase*> */ __um(BuildingDamageSoundCueByResourceType); // 0x0290   (0x0050)  
	float                                              PlayForceFeedbackInterval;                                  // 0x02E0   (0x0004)  
	unsigned char                                      UnknownData10_5[0x4];                                       // 0x02E4   (0x0004)  MISSED
	TArray<class UForceFeedbackEffect*>                ForceFeedbackEffects;                                       // 0x02E8   (0x0010)  
	unsigned char                                      UnknownData11_5[0x10];                                      // 0x02F8   (0x0010)  MISSED
	TArray<class AMilkshakeEarthquakeActor*>           RegisteredEarthquakes;                                      // 0x0308   (0x0010)  
	class AMilkshakeEarthquakeActor*                   CurrentEarthquake;                                          // 0x0318   (0x0008)  
	unsigned char                                      UnknownData12_5[0x18];                                      // 0x0320   (0x0018)  MISSED
	class UAudioComponent*                             CurrentCameraShakeAudioComponent;                           // 0x0338   (0x0008)  
	TArray<class ABuildingActor*>                      NearbyBuildingActors;                                       // 0x0340   (0x0010)  
	unsigned char                                      UnknownData13_6[0x18];                                      // 0x0350   (0x0018)  MISSED


	/// Functions
	// Function /Script/MilkshakeRuntime.MilkshakeControllerComponent.UpdateNearbyBuildingActors
	// void UpdateNearbyBuildingActors();                                                                                    // [0xa93ff10] Final|Native|Private 
	// Function /Script/MilkshakeRuntime.MilkshakeControllerComponent.UnregisterEarthquake
	// void UnregisterEarthquake(class AMilkshakeEarthquakeActor* Earthquake);                                               // [0xa93fe90] Final|Native|Public|BlueprintCallable 
	// Function /Script/MilkshakeRuntime.MilkshakeControllerComponent.SpawnBuildingDamageFX
	// void SpawnBuildingDamageFX();                                                                                         // [0xa93fe00] Final|Native|Private 
	// Function /Script/MilkshakeRuntime.MilkshakeControllerComponent.RegisterEarthquake
	// void RegisterEarthquake(class AMilkshakeEarthquakeActor* Earthquake);                                                 // [0xa93fd00] Final|Native|Public|BlueprintCallable 
	// Function /Script/MilkshakeRuntime.MilkshakeControllerComponent.PlayForceFeedback
	// void PlayForceFeedback();                                                                                             // [0xa93fcec] Final|Native|Private 
};

/// Struct /Script/MilkshakeRuntime.MilkshakeEarthquakePhysicsActorInfo
/// Size: 0x0010 (0x000000 - 0x000010)
struct FMilkshakeEarthquakePhysicsActorInfo
{ 
	SDK_UNDEFINED(8,15064) /* TWeakObjectPtr<AActor*> */ __um(PhysicsActor);                                       // 0x0000   (0x0008)  
	float                                              ForceDirectionUpdateGameTime;                               // 0x0008   (0x0004)  
	bool                                               bIsForceForward;                                            // 0x000C   (0x0001)  
	EFortPhysicsSimSize                                PhysicsSimSize;                                             // 0x000D   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x000E   (0x0002)  MISSED
};

/// Class /Script/MilkshakeRuntime.MilkshakeEarthquakeActor
/// Size: 0x00B0 (0x000290 - 0x000340)
class AMilkshakeEarthquakeActor : public AActor
{ 
public:
	int32_t                                            AsyncOverlappedActorsPreallocateCount;                      // 0x0290   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0294   (0x0004)  MISSED
	TArray<class AActor*>                              AsyncOverlappedActors;                                      // 0x0298   (0x0010)  
	TArray<FMilkshakeEarthquakePhysicsActorInfo>       OverlappedPhysicsActorInfos;                                // 0x02A8   (0x0010)  
	FScalableFloat                                     MaxNumOfPhysicActorSimulation;                              // 0x02B8   (0x0028)  
	float                                              MinTimeBeforeNextForceDirectionUpdate;                      // 0x02E0   (0x0004)  
	float                                              MaxTimeBeforeNextForceDirectionUpdate;                      // 0x02E4   (0x0004)  
	float                                              MinPhysicsImpulseMagnitude;                                 // 0x02E8   (0x0004)  
	float                                              MaxPhysicsImpulseMagnitude;                                 // 0x02EC   (0x0004)  
	SDK_UNDEFINED(80,15065) /* TMap<EFortPhysicsSimSize, float> */ __um(SimSizeToImpulseScalarMap);                // 0x02F0   (0x0050)  


	/// Functions
	// Function /Script/MilkshakeRuntime.MilkshakeEarthquakeActor.TickEarthquakePhysicsActorForces
	// void TickEarthquakePhysicsActorForces(float DeltaSeconds);                                                            // [0xa93fe14] Final|BlueprintAuthorityOnly|Native|Protected|BlueprintCallable 
	// Function /Script/MilkshakeRuntime.MilkshakeEarthquakeActor.RemoveNullsFromAsyncOverlappedActors
	// void RemoveNullsFromAsyncOverlappedActors();                                                                          // [0x36203b0] Final|BlueprintAuthorityOnly|Native|Protected|BlueprintCallable 
	// Function /Script/MilkshakeRuntime.MilkshakeEarthquakeActor.RemoveAsyncOverlappedActorsOutsideRadius
	// void RemoveAsyncOverlappedActorsOutsideRadius();                                                                      // [0x36203b0] Final|BlueprintAuthorityOnly|Native|Protected|BlueprintCallable 
	// Function /Script/MilkshakeRuntime.MilkshakeEarthquakeActor.OnActorRemovedFromAsyncOverlappedActors
	// void OnActorRemovedFromAsyncOverlappedActors(class AActor* RemovedActor);                                             // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/MilkshakeRuntime.MilkshakeEarthquakeActor.GetRadius
	// float GetRadius();                                                                                                    // [0x18a39e4] Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/MilkshakeRuntime.MilkshakeEarthquakeActor.GetNormalizedMagnitudeAtLocation
	// float GetNormalizedMagnitudeAtLocation(FVector Location);                                                             // [0x18a39e4] Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/MilkshakeRuntime.MilkshakeFieldSystemActor
/// Size: 0x0030 (0x000298 - 0x0002C8)
class AMilkshakeFieldSystemActor : public AFieldSystemActor
{ 
public:
	class UOperatorField*                              OperatorFieldMultiplyComponent;                             // 0x0298   (0x0008)  
	class URadialFalloff*                              RadialFallOffComponent;                                     // 0x02A0   (0x0008)  
	class URadialVector*                               RadialVectorComponent;                                      // 0x02A8   (0x0008)  
	float                                              Radius;                                                     // 0x02B0   (0x0004)  
	float                                              StopGameTime;                                               // 0x02B4   (0x0004)  
	float                                              IncomingDuration;                                           // 0x02B8   (0x0004)  
	float                                              OutgoingDuration;                                           // 0x02BC   (0x0004)  
	float                                              Strength;                                                   // 0x02C0   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x02C4   (0x0004)  MISSED


	/// Functions
	// Function /Script/MilkshakeRuntime.MilkshakeFieldSystemActor.SetStrength
	// void SetStrength(float InStrength);                                                                                   // [0xa93fd80] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
};

