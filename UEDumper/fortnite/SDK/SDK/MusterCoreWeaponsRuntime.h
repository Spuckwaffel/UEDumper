
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
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
public:
	FVector                                            HitLocation;                                                // 0x0C28   (0x0018)  
	FRotator                                           HitRotation;                                                // 0x0C40   (0x0018)  
	bool                                               bHitPlayer;                                                 // 0x0C58   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0C59   (0x0003)  MISSED
	float                                              DrawDistance;                                               // 0x0C5C   (0x0004)  
	class UParticleSystemComponent*                    ProjectileTrail;                                            // 0x0C60   (0x0008)  
	class UNiagaraSystem*                              NS_Explosion;                                               // 0x0C68   (0x0008)  
	FGameplayTag                                       FeedbackCue;                                                // 0x0C70   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0C74   (0x0004)  MISSED
	FVector                                            DecalSize;                                                  // 0x0C78   (0x0018)  
	float                                              DecalLifeSpan;                                              // 0x0C90   (0x0004)  
	float                                              TimebeforeDecalFadeOut;                                     // 0x0C94   (0x0004)  
	float                                              DecalFadeOutDuration;                                       // 0x0C98   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x0C9C   (0x0004)  MISSED
	class UMaterialInterface*                          DecalMaterial;                                              // 0x0CA0   (0x0008)  
	class USoundBase*                                  Cue_CloseSound;                                             // 0x0CA8   (0x0008)  
	class USoundBase*                                  Cue_DistantSound;                                           // 0x0CB0   (0x0008)  


	/// Functions
	// Function /Script/MusterCoreWeaponsRuntime.FortMusterExplosiveARProjectile.SetHitRotation
	// void SetHitRotation(FRotator& NewHitRotation);                                                                        // [0xa2e90d8] Final|Native|Protected|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MusterCoreWeaponsRuntime.FortMusterExplosiveARProjectile.SetHitPlayer
	// void SetHitPlayer(bool bWasHit);                                                                                      // [0xa2e9050] Final|Native|Protected|BlueprintCallable 
	// Function /Script/MusterCoreWeaponsRuntime.FortMusterExplosiveARProjectile.SetHitLocation
	// void SetHitLocation(FVector& NewHitLocation);                                                                         // [0xa2e8f50] Final|Native|Protected|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MusterCoreWeaponsRuntime.FortMusterExplosiveARProjectile.OnRep_HitLocation
	// void OnRep_HitLocation();                                                                                             // [0xa2e8ea0] Final|Native|Protected 
};

/// Class /Script/MusterCoreWeaponsRuntime.MusterCoreWeaponsAnimInstance
/// Size: 0x0020 (0x000370 - 0x000390)
class UMusterCoreWeaponsAnimInstance : public UAnimInstance
{ 
public:
	class AFortWeapon*                                 OwningWeapon;                                               // 0x0368   (0x0008)  
	bool                                               bIsShotFired;                                               // 0x0370   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0371   (0x0003)  MISSED
	int32_t                                            LocalAmmoCount;                                             // 0x0374   (0x0004)  
	float                                              CylinderMaskAlpha;                                          // 0x0378   (0x0004)  
	bool                                               bIsAmmoCountTwo;                                            // 0x037C   (0x0001)  
	bool                                               bIsAmmoCountOne;                                            // 0x037D   (0x0001)  
	bool                                               bStateRuleFromFullToTwoAmmo;                                // 0x037E   (0x0001)  
	bool                                               bStateRuleFromTwoToOneAmmo;                                 // 0x037F   (0x0001)  
	bool                                               bStateRuleFromOneToZero;                                    // 0x0380   (0x0001)  
	unsigned char                                      UnknownData01_6[0xF];                                       // 0x0381   (0x000F)  MISSED
};

/// Class /Script/MusterCoreWeaponsRuntime.FortExCaliberProjectile
/// Size: 0x0090 (0x000C28 - 0x000CB8)
class AFortExCaliberProjectile : public AFortProjectileAthena
{ 
public:
	bool                                               bSimulationRunning;                                         // 0x0C28   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0C29   (0x0007)  MISSED
	FScalableFloat                                     TimeToExplode;                                              // 0x0C30   (0x0028)  
	bool                                               bHasStopped;                                                // 0x0C58   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0C59   (0x0007)  MISSED
	FVector                                            HitNormal;                                                  // 0x0C60   (0x0018)  
	SDK_UNDEFINED(1,15094) /* TEnumAsByte<EPhysicalSurface> */ __um(SurfaceType);                                  // 0x0C78   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0C79   (0x0003)  MISSED
	FName                                              SwordRevealMaterialParam;                                   // 0x0C7C   (0x0004)  
	FName                                              EmissiveColorMaterialParam;                                 // 0x0C80   (0x0004)  
	FName                                              HDRMultiplierMaterialParam;                                 // 0x0C84   (0x0004)  
	FLinearColor                                       EmissiveBlueColor;                                          // 0x0C88   (0x0010)  
	FLinearColor                                       EmissivePurpleColor;                                        // 0x0C98   (0x0010)  
	float                                              MinPitchForRotationAdjustment;                              // 0x0CA8   (0x0004)  
	float                                              MaxPitchForRotationAdjustment;                              // 0x0CAC   (0x0004)  
	unsigned char                                      UnknownData03_6[0x8];                                       // 0x0CB0   (0x0008)  MISSED


	/// Functions
	// Function /Script/MusterCoreWeaponsRuntime.FortExCaliberProjectile.UnblockPawnCollision
	// void UnblockPawnCollision();                                                                                          // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/MusterCoreWeaponsRuntime.FortExCaliberProjectile.TriggerExplosion
	// void TriggerExplosion();                                                                                              // [0x18a39e4] Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Script/MusterCoreWeaponsRuntime.FortExCaliberProjectile.SetupSwordRevealEffects
	// void SetupSwordRevealEffects(class UStaticMeshComponent* ProjectileMesh, float SwordRevealAlpha, float ColorChangeAlpha, float HDRMultiplierAlpha); // [0xa2e919c] Final|Native|Protected|BlueprintCallable 
	// Function /Script/MusterCoreWeaponsRuntime.FortExCaliberProjectile.SetupProjectileHitAudio
	// void SetupProjectileHitAudio(FVector& ProjectileImpactLocation, class AActor* HitActor);                              // [0x18a39e4] Event|Protected|HasOutParms|HasDefaults|BlueprintEvent 
	// Function /Script/MusterCoreWeaponsRuntime.FortExCaliberProjectile.SetFuseColorBasedOnTeam
	// void SetFuseColorBasedOnTeam();                                                                                       // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/MusterCoreWeaponsRuntime.FortExCaliberProjectile.RestartSimulating
	// void RestartSimulating();                                                                                             // [0xa2e8f3c] Final|Native|Protected|BlueprintCallable 
	// Function /Script/MusterCoreWeaponsRuntime.FortExCaliberProjectile.PlayPreExplosionEfffects
	// void PlayPreExplosionEfffects();                                                                                      // [0x18a39e4] Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Script/MusterCoreWeaponsRuntime.FortExCaliberProjectile.OnRep_bSimulationRunning
	// void OnRep_bSimulationRunning();                                                                                      // [0xa2e8eb4] Final|Native|Protected 
	// Function /Script/MusterCoreWeaponsRuntime.FortExCaliberProjectile.OnAttachedBuildingDestroyed
	// void OnAttachedBuildingDestroyed(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, FVector HitLocation, class UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum); // [0xa2e8a04] Final|Native|Protected|HasDefaults 
	// Function /Script/MusterCoreWeaponsRuntime.FortExCaliberProjectile.OnAttachedActorDestroyed
	// void OnAttachedActorDestroyed(class AActor* DestroyedActor);                                                          // [0xa2e8960] Final|Native|Protected 
	// Function /Script/MusterCoreWeaponsRuntime.FortExCaliberProjectile.BP_OnProjectileStopped
	// void BP_OnProjectileStopped();                                                                                        // [0x18a39e4] Event|Protected|BlueprintEvent 
};

