
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
/// dependency: TargetingSystem

/// Class /Script/SunRoseZeusGameplayRuntime.SunRose_Zeus_Player_LayerAnimInstance
/// Size: 0x0010 (0x0015F0 - 0x001600)
class USunRose_Zeus_Player_LayerAnimInstance : public UFortPlayerAnimInstanceProxy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5632;

public:
	DMember(bool)                                      bIsThrowActive                                              OFFSET(get<bool>, {0x15F0, 1, 0, 0})
	SMember(FGameplayTag)                              LightningAbilityActiveTag                                   OFFSET(getStruct<T>, {0x15F4, 4, 0, 0})
};

/// Class /Script/SunRoseZeusGameplayRuntime.SunRose_Zeus_Weapon_Hand_AnimInstance
/// Size: 0x0010 (0x000470 - 0x000480)
class USunRose_Zeus_Weapon_Hand_AnimInstance : public UFortWeaponAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1152;

public:
	DMember(bool)                                      bIsThrow                                                    OFFSET(get<bool>, {0x468, 1, 0, 0})
	SMember(FString)                                   LightningThrowMontageName                                   OFFSET(getStruct<T>, {0x470, 16, 0, 0})
};

/// Class /Script/SunRoseZeusGameplayRuntime.BuildingGameplayActorZeusThunderstorm
/// Size: 0x0070 (0x000980 - 0x0009F0)
class ABuildingGameplayActorZeusThunderstorm : public ABuildingGameplayActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2544;

public:
	SMember(FScalableFloat)                            Row_TelegraphDuration                                       OFFSET(getStruct<T>, {0x980, 40, 0, 0})
	SMember(FScalableFloat)                            Row_LightningStrikeFXDelay                                  OFFSET(getStruct<T>, {0x9A8, 40, 0, 0})


	/// Functions
	// Function /Script/SunRoseZeusGameplayRuntime.BuildingGameplayActorZeusThunderstorm.StrikeLightning
	// void StrikeLightning(FVector Location);                                                                                  // [0xb021ed4] Final|Native|Private|HasDefaults 
	// Function /Script/SunRoseZeusGameplayRuntime.BuildingGameplayActorZeusThunderstorm.StartLightningStrike
	// void StartLightningStrike(FVector& Location, float BoltHeight);                                                          // [0xb021d84] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/SunRoseZeusGameplayRuntime.BuildingGameplayActorZeusThunderstorm.StartLightningFX
	// void StartLightningFX();                                                                                                 // [0xb021d70] Final|Native|Private 
	// Function /Script/SunRoseZeusGameplayRuntime.BuildingGameplayActorZeusThunderstorm.SetStrikeTargetingLocation
	// void SetStrikeTargetingLocation(FTargetingRequestHandle& TargetingHandle, FVector& Location);                            // [0xb021be4] Final|BlueprintAuthorityOnly|Native|Protected|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/SunRoseZeusGameplayRuntime.BuildingGameplayActorZeusThunderstorm.OnTelegraphStart
	// void OnTelegraphStart(FVector Location);                                                                                 // [0xb021b24] Net|NetReliableNative|Event|NetMulticast|Protected|HasDefaults 
	// Function /Script/SunRoseZeusGameplayRuntime.BuildingGameplayActorZeusThunderstorm.OnTelegraphEnd
	// void OnTelegraphEnd();                                                                                                   // [0x89361d4] Net|NetReliableNative|Event|NetMulticast|Protected 
	// Function /Script/SunRoseZeusGameplayRuntime.BuildingGameplayActorZeusThunderstorm.K2_OnTelegraphStart
	// void K2_OnTelegraphStart(FVector& Location);                                                                             // [0x186becc] Event|Protected|HasOutParms|HasDefaults|BlueprintEvent 
	// Function /Script/SunRoseZeusGameplayRuntime.BuildingGameplayActorZeusThunderstorm.K2_OnTelegraphEnd
	// void K2_OnTelegraphEnd();                                                                                                // [0x186becc] Event|Protected|BlueprintEvent 
	// Function /Script/SunRoseZeusGameplayRuntime.BuildingGameplayActorZeusThunderstorm.K2_OnLightningStrikeFX
	// void K2_OnLightningStrikeFX(FVector& Location, float BoltHeight);                                                        // [0x186becc] Event|Protected|HasOutParms|HasDefaults|BlueprintEvent 
	// Function /Script/SunRoseZeusGameplayRuntime.BuildingGameplayActorZeusThunderstorm.K2_OnLightningStrike
	// void K2_OnLightningStrike(FVector& Location);                                                                            // [0x186becc] Event|Protected|HasOutParms|HasDefaults|BlueprintEvent 
	// Function /Script/SunRoseZeusGameplayRuntime.BuildingGameplayActorZeusThunderstorm.GetStrikeTargetingLocation
	// FVector GetStrikeTargetingLocation(FTargetingRequestHandle& TargetingHandle);                                            // [0xb021a78] Final|BlueprintAuthorityOnly|Native|Protected|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/SunRoseZeusGameplayRuntime.FortProjectileSunRoseLightning
/// Size: 0x0310 (0x000AA0 - 0x000DB0)
class AFortProjectileSunRoseLightning : public AFortProjectileBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3504;

public:
	CMember(TArray<class UClass*>)                     ExplosionDamageGEs                                          OFFSET(get<T>, {0xAA0, 16, 0, 0})
	DMember(float)                                     ExplosionGELevel                                            OFFSET(get<float>, {0xAB0, 4, 0, 0})
	CMember(TEnumAsByte<ECollisionChannel>)            ExplosionTraceChannel                                       OFFSET(get<T>, {0xAB4, 1, 0, 0})
	SMember(FScalableFloat)                            MaxHitsPerFrame                                             OFFSET(getStruct<T>, {0xAB8, 40, 0, 0})
	SMember(FTargetingRequestHandle)                   ExplosionAsyncLOSTargetingHandle                            OFFSET(getStruct<T>, {0xDA8, 4, 0, 0})


	/// Functions
	// Function /Script/SunRoseZeusGameplayRuntime.FortProjectileSunRoseLightning.OnExplosionFinished
	// void OnExplosionFinished();                                                                                              // [0x186becc] Event|Protected|BlueprintEvent 
	// Function /Script/SunRoseZeusGameplayRuntime.FortProjectileSunRoseLightning.DoExplosionAsyncLOS
	// void DoExplosionAsyncLOS();                                                                                              // [0xb021a64] Final|BlueprintAuthorityOnly|Native|Protected|BlueprintCallable 
};

/// Struct /Script/SunRoseZeusGameplayRuntime.LightningStrikeInfo
/// Size: 0x0030 (0x000000 - 0x000030)
class FLightningStrikeInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FTimerHandle)                              BoltFXTimerHandle                                           OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	SMember(FTimerHandle)                              TelegraphTimerHandle                                        OFFSET(getStruct<T>, {0x8, 8, 0, 0})
	SMember(FVector)                                   Location                                                    OFFSET(getStruct<T>, {0x10, 24, 0, 0})
	DMember(float)                                     BoltHeight                                                  OFFSET(get<float>, {0x28, 4, 0, 0})
};

