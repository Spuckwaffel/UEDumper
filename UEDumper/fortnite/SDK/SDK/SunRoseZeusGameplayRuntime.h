
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
/// dependency: TargetingSystem

/// Class /Script/SunRoseZeusGameplayRuntime.SunRose_Zeus_Player_LayerAnimInstance
/// Size: 0x0010 (0x001620 - 0x001630)
class USunRose_Zeus_Player_LayerAnimInstance : public UFortPlayerAnimInstanceProxy
{ 
public:
	bool                                               bIsThrowActive;                                             // 0x1620   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x1621   (0x0003)  MISSED
	FGameplayTag                                       LightningAbilityActiveTag;                                  // 0x1624   (0x0004)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x1628   (0x0008)  MISSED
};

/// Class /Script/SunRoseZeusGameplayRuntime.SunRose_Zeus_Weapon_Hand_AnimInstance
/// Size: 0x0010 (0x000470 - 0x000480)
class USunRose_Zeus_Weapon_Hand_AnimInstance : public UFortWeaponAnimInstance
{ 
public:
	bool                                               bIsThrow;                                                   // 0x0468   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0469   (0x0007)  MISSED
	SDK_UNDEFINED(16,15674) /* FString */              __um(LightningThrowMontageName);                            // 0x0470   (0x0010)  
};

/// Class /Script/SunRoseZeusGameplayRuntime.BuildingGameplayActorZeusThunderstorm
/// Size: 0x0070 (0x000980 - 0x0009F0)
class ABuildingGameplayActorZeusThunderstorm : public ABuildingGameplayActor
{ 
public:
	FScalableFloat                                     Row_TelegraphDuration;                                      // 0x0980   (0x0028)  
	FScalableFloat                                     Row_LightningStrikeFXDelay;                                 // 0x09A8   (0x0028)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x09D0   (0x0020)  MISSED


	/// Functions
	// Function /Script/SunRoseZeusGameplayRuntime.BuildingGameplayActorZeusThunderstorm.StrikeLightning
	// void StrikeLightning(FVector Location);                                                                               // [0xa2c22a0] Final|Native|Private|HasDefaults 
	// Function /Script/SunRoseZeusGameplayRuntime.BuildingGameplayActorZeusThunderstorm.StartLightningStrike
	// void StartLightningStrike(FVector& Location, float BoltHeight);                                                       // [0xa2c2150] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/SunRoseZeusGameplayRuntime.BuildingGameplayActorZeusThunderstorm.StartLightningFX
	// void StartLightningFX();                                                                                              // [0xa2c213c] Final|Native|Private 
	// Function /Script/SunRoseZeusGameplayRuntime.BuildingGameplayActorZeusThunderstorm.SetStrikeTargetingLocation
	// void SetStrikeTargetingLocation(FTargetingRequestHandle& TargetingHandle, FVector& Location);                         // [0xa2c1fbc] Final|BlueprintAuthorityOnly|Native|Protected|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/SunRoseZeusGameplayRuntime.BuildingGameplayActorZeusThunderstorm.OnTelegraphStart
	// void OnTelegraphStart(FVector Location);                                                                              // [0xa2c1e8c] Net|NetReliableNative|Event|NetMulticast|Protected|HasDefaults 
	// Function /Script/SunRoseZeusGameplayRuntime.BuildingGameplayActorZeusThunderstorm.OnTelegraphEnd
	// void OnTelegraphEnd();                                                                                                // [0x841db44] Net|NetReliableNative|Event|NetMulticast|Protected 
	// Function /Script/SunRoseZeusGameplayRuntime.BuildingGameplayActorZeusThunderstorm.K2_OnTelegraphStart
	// void K2_OnTelegraphStart(FVector& Location);                                                                          // [0x18a39e4] Event|Protected|HasOutParms|HasDefaults|BlueprintEvent 
	// Function /Script/SunRoseZeusGameplayRuntime.BuildingGameplayActorZeusThunderstorm.K2_OnTelegraphEnd
	// void K2_OnTelegraphEnd();                                                                                             // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/SunRoseZeusGameplayRuntime.BuildingGameplayActorZeusThunderstorm.K2_OnLightningStrikeFX
	// void K2_OnLightningStrikeFX(FVector& Location, float BoltHeight);                                                     // [0x18a39e4] Event|Protected|HasOutParms|HasDefaults|BlueprintEvent 
	// Function /Script/SunRoseZeusGameplayRuntime.BuildingGameplayActorZeusThunderstorm.K2_OnLightningStrike
	// void K2_OnLightningStrike(FVector& Location);                                                                         // [0x18a39e4] Event|Protected|HasOutParms|HasDefaults|BlueprintEvent 
	// Function /Script/SunRoseZeusGameplayRuntime.BuildingGameplayActorZeusThunderstorm.GetStrikeTargetingLocation
	// FVector GetStrikeTargetingLocation(FTargetingRequestHandle& TargetingHandle);                                         // [0xa2c1de0] Final|BlueprintAuthorityOnly|Native|Protected|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/SunRoseZeusGameplayRuntime.FortProjectileSunRoseLightning
/// Size: 0x0310 (0x000AA0 - 0x000DB0)
class AFortProjectileSunRoseLightning : public AFortProjectileBase
{ 
public:
	TArray<class UClass*>                              ExplosionDamageGEs;                                         // 0x0AA0   (0x0010)  
	float                                              ExplosionGELevel;                                           // 0x0AB0   (0x0004)  
	SDK_UNDEFINED(1,15675) /* TEnumAsByte<ECollisionChannel> */ __um(ExplosionTraceChannel);                       // 0x0AB4   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0AB5   (0x0003)  MISSED
	FScalableFloat                                     MaxHitsPerFrame;                                            // 0x0AB8   (0x0028)  
	unsigned char                                      UnknownData01_5[0x2C8];                                     // 0x0AE0   (0x02C8)  MISSED
	FTargetingRequestHandle                            ExplosionAsyncLOSTargetingHandle;                           // 0x0DA8   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0DAC   (0x0004)  MISSED


	/// Functions
	// Function /Script/SunRoseZeusGameplayRuntime.FortProjectileSunRoseLightning.OnExplosionFinished
	// void OnExplosionFinished();                                                                                           // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/SunRoseZeusGameplayRuntime.FortProjectileSunRoseLightning.DoExplosionAsyncLOS
	// void DoExplosionAsyncLOS();                                                                                           // [0xa2c1dcc] Final|BlueprintAuthorityOnly|Native|Protected|BlueprintCallable 
};

/// Struct /Script/SunRoseZeusGameplayRuntime.LightningStrikeInfo
/// Size: 0x0030 (0x000000 - 0x000030)
struct FLightningStrikeInfo
{ 
	FTimerHandle                                       BoltFXTimerHandle;                                          // 0x0000   (0x0008)  
	FTimerHandle                                       TelegraphTimerHandle;                                       // 0x0008   (0x0008)  
	FVector                                            Location;                                                   // 0x0010   (0x0018)  
	float                                              BoltHeight;                                                 // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x002C   (0x0004)  MISSED
};

