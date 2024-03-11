
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: GameplayAbilities
/// dependency: GameplayTags
/// dependency: Niagara

/// Class /Script/MusterCoreWeaponsRuntime.FortMusterExplosiveARProjectile
/// Size: 0x0090 (0x000C28 - 0x000CB8)
class AFortMusterExplosiveARProjectile : public AFortProjectileAthena
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3256;

public:
	SMember(FVector)                                   HitLocation                                                 OFFSET(getStruct<T>, {0xC28, 24, 0, 0})
	SMember(FRotator)                                  HitRotation                                                 OFFSET(getStruct<T>, {0xC40, 24, 0, 0})
	DMember(bool)                                      bHitPlayer                                                  OFFSET(get<bool>, {0xC58, 1, 0, 0})
	DMember(float)                                     DrawDistance                                                OFFSET(get<float>, {0xC5C, 4, 0, 0})
	CMember(class UParticleSystemComponent*)           ProjectileTrail                                             OFFSET(get<T>, {0xC60, 8, 0, 0})
	CMember(class UNiagaraSystem*)                     NS_Explosion                                                OFFSET(get<T>, {0xC68, 8, 0, 0})
	SMember(FGameplayTag)                              FeedbackCue                                                 OFFSET(getStruct<T>, {0xC70, 4, 0, 0})
	SMember(FVector)                                   DecalSize                                                   OFFSET(getStruct<T>, {0xC78, 24, 0, 0})
	DMember(float)                                     DecalLifeSpan                                               OFFSET(get<float>, {0xC90, 4, 0, 0})
	DMember(float)                                     TimebeforeDecalFadeOut                                      OFFSET(get<float>, {0xC94, 4, 0, 0})
	DMember(float)                                     DecalFadeOutDuration                                        OFFSET(get<float>, {0xC98, 4, 0, 0})
	CMember(class UMaterialInterface*)                 DecalMaterial                                               OFFSET(get<T>, {0xCA0, 8, 0, 0})
	CMember(class USoundBase*)                         Cue_CloseSound                                              OFFSET(get<T>, {0xCA8, 8, 0, 0})
	CMember(class USoundBase*)                         Cue_DistantSound                                            OFFSET(get<T>, {0xCB0, 8, 0, 0})


	/// Functions
	// Function /Script/MusterCoreWeaponsRuntime.FortMusterExplosiveARProjectile.SetHitRotation
	// void SetHitRotation(FRotator& NewHitRotation);                                                                           // [0xa2e90d8] Final|Native|Protected|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MusterCoreWeaponsRuntime.FortMusterExplosiveARProjectile.SetHitPlayer
	// void SetHitPlayer(bool bWasHit);                                                                                         // [0xa2e9050] Final|Native|Protected|BlueprintCallable 
	// Function /Script/MusterCoreWeaponsRuntime.FortMusterExplosiveARProjectile.SetHitLocation
	// void SetHitLocation(FVector& NewHitLocation);                                                                            // [0xa2e8f50] Final|Native|Protected|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MusterCoreWeaponsRuntime.FortMusterExplosiveARProjectile.OnRep_HitLocation
	// void OnRep_HitLocation();                                                                                                // [0xa2e8ea0] Final|Native|Protected 
};

/// Class /Script/MusterCoreWeaponsRuntime.MusterCoreWeaponsAnimInstance
/// Size: 0x0020 (0x000370 - 0x000390)
class UMusterCoreWeaponsAnimInstance : public UAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 912;

public:
	CMember(class AFortWeapon*)                        OwningWeapon                                                OFFSET(get<T>, {0x368, 8, 0, 0})
	DMember(bool)                                      bIsShotFired                                                OFFSET(get<bool>, {0x370, 1, 0, 0})
	DMember(int32_t)                                   LocalAmmoCount                                              OFFSET(get<int32_t>, {0x374, 4, 0, 0})
	DMember(float)                                     CylinderMaskAlpha                                           OFFSET(get<float>, {0x378, 4, 0, 0})
	DMember(bool)                                      bIsAmmoCountTwo                                             OFFSET(get<bool>, {0x37C, 1, 0, 0})
	DMember(bool)                                      bIsAmmoCountOne                                             OFFSET(get<bool>, {0x37D, 1, 0, 0})
	DMember(bool)                                      bStateRuleFromFullToTwoAmmo                                 OFFSET(get<bool>, {0x37E, 1, 0, 0})
	DMember(bool)                                      bStateRuleFromTwoToOneAmmo                                  OFFSET(get<bool>, {0x37F, 1, 0, 0})
	DMember(bool)                                      bStateRuleFromOneToZero                                     OFFSET(get<bool>, {0x380, 1, 0, 0})
};

/// Class /Script/MusterCoreWeaponsRuntime.FortExCaliberProjectile
/// Size: 0x0090 (0x000C28 - 0x000CB8)
class AFortExCaliberProjectile : public AFortProjectileAthena
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3256;

public:
	DMember(bool)                                      bSimulationRunning                                          OFFSET(get<bool>, {0xC28, 1, 0, 0})
	SMember(FScalableFloat)                            TimeToExplode                                               OFFSET(getStruct<T>, {0xC30, 40, 0, 0})
	DMember(bool)                                      bHasStopped                                                 OFFSET(get<bool>, {0xC58, 1, 0, 0})
	SMember(FVector)                                   HitNormal                                                   OFFSET(getStruct<T>, {0xC60, 24, 0, 0})
	CMember(TEnumAsByte<EPhysicalSurface>)             SurfaceType                                                 OFFSET(get<T>, {0xC78, 1, 0, 0})
	SMember(FName)                                     SwordRevealMaterialParam                                    OFFSET(getStruct<T>, {0xC7C, 4, 0, 0})
	SMember(FName)                                     EmissiveColorMaterialParam                                  OFFSET(getStruct<T>, {0xC80, 4, 0, 0})
	SMember(FName)                                     HDRMultiplierMaterialParam                                  OFFSET(getStruct<T>, {0xC84, 4, 0, 0})
	SMember(FLinearColor)                              EmissiveBlueColor                                           OFFSET(getStruct<T>, {0xC88, 16, 0, 0})
	SMember(FLinearColor)                              EmissivePurpleColor                                         OFFSET(getStruct<T>, {0xC98, 16, 0, 0})
	DMember(float)                                     MinPitchForRotationAdjustment                               OFFSET(get<float>, {0xCA8, 4, 0, 0})
	DMember(float)                                     MaxPitchForRotationAdjustment                               OFFSET(get<float>, {0xCAC, 4, 0, 0})


	/// Functions
	// Function /Script/MusterCoreWeaponsRuntime.FortExCaliberProjectile.UnblockPawnCollision
	// void UnblockPawnCollision();                                                                                             // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/MusterCoreWeaponsRuntime.FortExCaliberProjectile.TriggerExplosion
	// void TriggerExplosion();                                                                                                 // [0x18a39e4] Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Script/MusterCoreWeaponsRuntime.FortExCaliberProjectile.SetupSwordRevealEffects
	// void SetupSwordRevealEffects(class UStaticMeshComponent* ProjectileMesh, float SwordRevealAlpha, float ColorChangeAlpha, float HDRMultiplierAlpha); // [0xa2e919c] Final|Native|Protected|BlueprintCallable 
	// Function /Script/MusterCoreWeaponsRuntime.FortExCaliberProjectile.SetupProjectileHitAudio
	// void SetupProjectileHitAudio(FVector& ProjectileImpactLocation, class AActor* HitActor);                                 // [0x18a39e4] Event|Protected|HasOutParms|HasDefaults|BlueprintEvent 
	// Function /Script/MusterCoreWeaponsRuntime.FortExCaliberProjectile.SetFuseColorBasedOnTeam
	// void SetFuseColorBasedOnTeam();                                                                                          // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/MusterCoreWeaponsRuntime.FortExCaliberProjectile.RestartSimulating
	// void RestartSimulating();                                                                                                // [0xa2e8f3c] Final|Native|Protected|BlueprintCallable 
	// Function /Script/MusterCoreWeaponsRuntime.FortExCaliberProjectile.PlayPreExplosionEfffects
	// void PlayPreExplosionEfffects();                                                                                         // [0x18a39e4] Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Script/MusterCoreWeaponsRuntime.FortExCaliberProjectile.OnRep_bSimulationRunning
	// void OnRep_bSimulationRunning();                                                                                         // [0xa2e8eb4] Final|Native|Protected 
	// Function /Script/MusterCoreWeaponsRuntime.FortExCaliberProjectile.OnAttachedBuildingDestroyed
	// void OnAttachedBuildingDestroyed(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, FVector HitLocation, class UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum); // [0xa2e8a04] Final|Native|Protected|HasDefaults 
	// Function /Script/MusterCoreWeaponsRuntime.FortExCaliberProjectile.OnAttachedActorDestroyed
	// void OnAttachedActorDestroyed(class AActor* DestroyedActor);                                                             // [0xa2e8960] Final|Native|Protected 
	// Function /Script/MusterCoreWeaponsRuntime.FortExCaliberProjectile.BP_OnProjectileStopped
	// void BP_OnProjectileStopped();                                                                                           // [0x18a39e4] Event|Protected|BlueprintEvent 
};

