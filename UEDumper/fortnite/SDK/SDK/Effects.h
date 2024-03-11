
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
/// dependency: GameplayCameras
/// dependency: Niagara
/// dependency: NiagaraAnimNotifies

/// Enum /Game/Effects/Niagara/Blueprints/ENUM_NiagaraParameterSetup.ENUM_NiagaraParameterSetup
/// Size: 0x05
enum class ENUM_NiagaraParameterSetup : uint8_t
{
	ENUM_NiagaraParameterSetup__NewEnumerator0                                       = 0,
	ENUM_NiagaraParameterSetup__NewEnumerator1                                       = 1,
	ENUM_NiagaraParameterSetup__NewEnumerator2                                       = 2,
	ENUM_NiagaraParameterSetup__NewEnumerator3                                       = 3,
	ENUM_NiagaraParameterSetup__ENUM_MAX                                             = 4
};

/// Class /Game/Effects/Fort_Effects/Camera_Effects/B_PlayerHealthDamage_CameraLensEffect.B_PlayerHealthDamage_CameraLensEffect_C
/// Size: 0x0008 (0x000380 - 0x000388)
class AB_PlayerHealthDamage_CameraLensEffect_C : public AEmitterCameraLensEffectBase
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0380   (0x0008)  


	/// Functions
	// Function /Game/Effects/Fort_Effects/Camera_Effects/B_PlayerHealthDamage_CameraLensEffect.B_PlayerHealthDamage_CameraLensEffect_C.PassParticle_Parameter
	// void PassParticle_Parameter(double NewParam, bool First_Hit);                                                         // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Camera_Effects/B_PlayerHealthDamage_CameraLensEffect.B_PlayerHealthDamage_CameraLensEffect_C.ExecuteUbergraph_B_PlayerHealthDamage_CameraLensEffect
	// void ExecuteUbergraph_B_PlayerHealthDamage_CameraLensEffect(int32_t EntryPoint);                                      // [0x18a39e4] Final                
};

/// Class /Game/Effects/Fort_Effects/Camera_Effects/B_PlayerShieldDamage_CameraLensEffect.B_PlayerShieldDamage_CameraLensEffect_C
/// Size: 0x0008 (0x000388 - 0x000390)
class AB_PlayerShieldDamage_CameraLensEffect_C : public AB_PlayerHealthDamage_CameraLensEffect_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0388   (0x0008)  


	/// Functions
	// Function /Game/Effects/Fort_Effects/Camera_Effects/B_PlayerShieldDamage_CameraLensEffect.B_PlayerShieldDamage_CameraLensEffect_C.PassParticle_Parameter_Shield
	// void PassParticle_Parameter_Shield(double NewParam);                                                                  // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Camera_Effects/B_PlayerShieldDamage_CameraLensEffect.B_PlayerShieldDamage_CameraLensEffect_C.ExecuteUbergraph_B_PlayerShieldDamage_CameraLensEffect
	// void ExecuteUbergraph_B_PlayerShieldDamage_CameraLensEffect(int32_t EntryPoint);                                      // [0x18a39e4] Final                
};

/// Class /Game/Effects/Fort_Effects/BluePrints/CameraShakes/B_Medium_Explosion_CameraShake.B_Medium_Explosion_CameraShake_C
/// Size: 0x0000 (0x0001F0 - 0x0001F0)
class UB_Medium_Explosion_CameraShake_C : public ULegacyCameraShake
{ 
public:
};

/// Class /Game/Effects/SnowSandInteraction/BP/SSI_BpLib_BpTools.SSI_BpLib_BpTools_C
/// Size: 0x0000 (0x000028 - 0x000028)
class USSI_BpLib_BpTools_C : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Game/Effects/SnowSandInteraction/BP/SSI_BpLib_BpTools.SSI_BpLib_BpTools_C.OnLocalPlayersTeam
	// void OnLocalPlayersTeam(class AActor* TargetActor, class UObject* __WorldContext, bool& Return Value);                // [0x18a39e4] Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
};

/// Class /Game/Effects/Fort_Effects/Camera_Effects/B_PlayerHealthDamage_LensEffect_Direction.B_PlayerHealthDamage_LensEffect_Direction_C
/// Size: 0x0000 (0x0003C0 - 0x0003C0)
class AB_PlayerHealthDamage_LensEffect_Direction_C : public AFortEmitterCameraLensEffectDirectional
{ 
public:
};

/// Class /Game/Effects/Fort_Effects/Camera_Effects/B_PlayerShieldDamage_LensEffect_Direction.B_PlayerShieldDamage_LensEffect_Direction_C
/// Size: 0x0000 (0x0003C0 - 0x0003C0)
class AB_PlayerShieldDamage_LensEffect_Direction_C : public AFortEmitterCameraLensEffectDirectional
{ 
public:
};

/// Class /Game/Effects/Fort_Effects/Camera_Effects/B_SoundIndicator_01.B_SoundIndicator_01_C
/// Size: 0x03C0 (0x000440 - 0x000800)
class AB_SoundIndicator_01_C : public AFortSoundCameraLensEffect
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0440   (0x0008)  
	FRuntimeFloatCurve                                 Gunshot_Falloff_Long_Range;                                 // 0x0448   (0x0088)  
	FRuntimeFloatCurve                                 Chest_Falloff;                                              // 0x04D0   (0x0088)  
	FRuntimeFloatCurve                                 Footsteps_Falloff;                                          // 0x0558   (0x0088)  
	FRuntimeFloatCurve                                 Gunshot_Falloff_Mid_Range;                                  // 0x05E0   (0x0088)  
	FRuntimeFloatCurve                                 Gunshot_Falloff_Melee;                                      // 0x0668   (0x0088)  
	FRuntimeFloatCurve                                 Glider_Falloff;                                             // 0x06F0   (0x0088)  
	FRuntimeFloatCurve                                 Plane_Falloff;                                              // 0x0778   (0x0088)  


	/// Functions
	// Function /Game/Effects/Fort_Effects/Camera_Effects/B_SoundIndicator_01.B_SoundIndicator_01_C.GetStrengthCurveForActiveType
	// FRuntimeFloatCurve GetStrengthCurveForActiveType();                                                                   // [0x18a39e4] Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Game/Effects/Fort_Effects/Camera_Effects/B_SoundIndicator_01.B_SoundIndicator_01_C.GetDefaultTint
	// FLinearColor GetDefaultTint();                                                                                        // [0x18a39e4] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Camera_Effects/B_SoundIndicator_01.B_SoundIndicator_01_C.GetDefaultIcon
	// class UTexture* GetDefaultIcon();                                                                                     // [0x18a39e4] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Camera_Effects/B_SoundIndicator_01.B_SoundIndicator_01_C.GetWeaponCurve
	// FRuntimeFloatCurve GetWeaponCurve();                                                                                  // [0x18a39e4] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Game/Effects/Fort_Effects/Camera_Effects/B_SoundIndicator_01.B_SoundIndicator_01_C.ExecuteUbergraph_B_SoundIndicator_01
	// void ExecuteUbergraph_B_SoundIndicator_01(int32_t EntryPoint);                                                        // [0x18a39e4] Final                
};

/// Class /Game/Effects/Fort_Effects/BluePrints/WeakPointEffect/WeakSpot.WeakSpot_C
/// Size: 0x00C0 (0x000308 - 0x0003C8)
class AWeakSpot_C : public ABuildingWeakSpot
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0308   (0x0008)  
	class UStaticMeshComponent*                        ConnectTheDotsComponent;                                    // 0x0310   (0x0008)  
	class UParticleSystemComponent*                    ParticleComponent;                                          // 0x0318   (0x0008)  
	class UCapsuleComponent*                           CollisionComponent;                                         // 0x0320   (0x0008)  
	float                                              ScaleDownParticleTL_ScaleDown_544AE05F40294D09C3C361AB7BCF6C4E; // 0x0328   (0x0004)  
	SDK_UNDEFINED(1,9469) /* TEnumAsByte<ETimelineDirection> */ __um(ScaleDownParticleTL__Direction_544AE05F40294D09C3C361AB7BCF6C4E); // 0x032C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x032D   (0x0003)  MISSED
	class UTimelineComponent*                          ScaleDownParticleTL;                                        // 0x0330   (0x0008)  
	class USoundBase*                                  SpawnSound;                                                 // 0x0338   (0x0008)  
	FVector                                            Particle_Location;                                          // 0x0340   (0x0018)  
	TArray<class USoundBase*>                          Crack_sounds;                                               // 0x0358   (0x0010)  
	double                                             ConnectTheDotsWidth;                                        // 0x0368   (0x0008)  
	double                                             ConnectTheDotsDuration;                                     // 0x0370   (0x0008)  
	double                                             ConnectTheDotsTimeoutFromPreviousHit;                       // 0x0378   (0x0008)  
	double                                             ConnectTheDotsDurationScale;                                // 0x0380   (0x0008)  
	double                                             ConnectTheDotsMaxDuration;                                  // 0x0388   (0x0008)  
	double                                             ConnectTheDotsTileScale;                                    // 0x0390   (0x0008)  
	double                                             ConnectTheDotsMinLength;                                    // 0x0398   (0x0008)  
	double                                             ConnectTheDotsMaxLength;                                    // 0x03A0   (0x0008)  
	class UParticleSystem*                             DamageTemplate;                                             // 0x03A8   (0x0008)  
	class UParticleSystem*                             IdleTemplate;                                               // 0x03B0   (0x0008)  
	class UMaterialInstanceDynamic*                    ConnectMID;                                                 // 0x03B8   (0x0008)  
	FTimerHandle                                       HideMeshTimer;                                              // 0x03C0   (0x0008)  


	/// Functions
	// Function /Game/Effects/Fort_Effects/BluePrints/WeakPointEffect/WeakSpot.WeakSpot_C.UserConstructionScript
	// void UserConstructionScript();                                                                                        // [0x18a39e4] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/BluePrints/WeakPointEffect/WeakSpot.WeakSpot_C.ScaleDownParticleTL__FinishedFunc
	// void ScaleDownParticleTL__FinishedFunc();                                                                             // [0x18a39e4] BlueprintEvent       
	// Function /Game/Effects/Fort_Effects/BluePrints/WeakPointEffect/WeakSpot.WeakSpot_C.ScaleDownParticleTL__UpdateFunc
	// void ScaleDownParticleTL__UpdateFunc();                                                                               // [0x18a39e4] BlueprintEvent       
	// Function /Game/Effects/Fort_Effects/BluePrints/WeakPointEffect/WeakSpot.WeakSpot_C.OnFadeOut
	// void OnFadeOut();                                                                                                     // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/BluePrints/WeakPointEffect/WeakSpot.WeakSpot_C.OnStartDirectionEffect
	// void OnStartDirectionEffect();                                                                                        // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/BluePrints/WeakPointEffect/WeakSpot.WeakSpot_C.OnHit
	// void OnHit();                                                                                                         // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/BluePrints/WeakPointEffect/WeakSpot.WeakSpot_C.HideMesh
	// void HideMesh();                                                                                                      // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/BluePrints/WeakPointEffect/WeakSpot.WeakSpot_C.ExecuteUbergraph_WeakSpot
	// void ExecuteUbergraph_WeakSpot(int32_t EntryPoint);                                                                   // [0x18a39e4] Final|HasDefaults    
};

/// Class /Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups_Parent.B_Pickups_Parent_C
/// Size: 0x0144 (0x000460 - 0x0005A4)
class AB_Pickups_Parent_C : public AFortPickupsParent
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0460   (0x0008)  
	class USceneComponent*                             Root;                                                       // 0x0468   (0x0008)  
	float                                              MobileSelectedTL_LerpInteactoIcon_FF208F9641BE589B76EF698B94309EA7; // 0x0470   (0x0004)  
	float                                              MobileSelectedTL_LerpObject_FF208F9641BE589B76EF698B94309EA7; // 0x0474   (0x0004)  
	SDK_UNDEFINED(1,9470) /* TEnumAsByte<ETimelineDirection> */ __um(MobileSelectedTL__Direction_FF208F9641BE589B76EF698B94309EA7); // 0x0478   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0479   (0x0007)  MISSED
	class UTimelineComponent*                          MobileSelectedTL;                                           // 0x0480   (0x0008)  
	class UStaticMeshComponent*                        Static_Mesh_Pickup;                                         // 0x0488   (0x0008)  
	class USkeletalMeshComponent*                      Skeletal_Mesh_Pickup;                                       // 0x0490   (0x0008)  
	class UPrimitiveComponent*                         SkeletalOrStaticMeshAssetPrimitive;                         // 0x0498   (0x0008)  
	int32_t                                            CurrentElementIndex;                                        // 0x04A0   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x04A4   (0x0004)  MISSED
	double                                             Component_Radius__Scaled_;                                  // 0x04A8   (0x0008)  
	double                                             Component_Radius_Multiplier;                                // 0x04B0   (0x0008)  
	TArray<FLinearColor>                               Outline_Rarity_Colors;                                      // 0x04B8   (0x0010)  
	double                                             Component_Radius;                                           // 0x04C8   (0x0008)  
	class UParticleSystem*                             Picked_Up_Trail_PS_Old;                                     // 0x04D0   (0x0008)  
	TArray<double>                                     Sparkle_Spawn_Rate__Picked_Up_;                             // 0x04D8   (0x0010)  
	TArray<double>                                     Lifetime__Picked_Up_;                                       // 0x04E8   (0x0010)  
	class UForceFeedbackEffect*                        PickupForceFeedback_Old;                                    // 0x04F8   (0x0008)  
	bool                                               HasUniqueMaterialIds;                                       // 0x0500   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x0501   (0x0007)  MISSED
	TArray<FLinearColor>                               BackgroundRarityColors;                                     // 0x0508   (0x0010)  
	double                                             Random_Rotation;                                            // 0x0518   (0x0008)  
	FVector                                            MobileSelectedOffset;                                       // 0x0520   (0x0018)  
	FVector                                            MobileSelectedScale;                                        // 0x0538   (0x0018)  
	class UStaticMeshComponent*                        MobileInteractIcon;                                         // 0x0550   (0x0008)  
	FVector                                            MobileInteractIconLocation;                                 // 0x0558   (0x0018)  
	FVector                                            MobileInteractIconScale;                                    // 0x0570   (0x0018)  
	class UMaterialInterface*                          MobileInteractionMaterial;                                  // 0x0588   (0x0008)  
	bool                                               PickedUp;                                                   // 0x0590   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x0591   (0x0003)  MISSED
	FLinearColor                                       MissionItemOutlineColor;                                    // 0x0594   (0x0010)  


	/// Functions
	// Function /Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups_Parent.B_Pickups_Parent_C.GetViewDistanceQuality
	// int32_t GetViewDistanceQuality();                                                                                     // [0x18a39e4] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups_Parent.B_Pickups_Parent_C.Setup View Distances
	// void Setup View Distances(int32_t& viewDistanceQuality);                                                              // [0x18a39e4] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups_Parent.B_Pickups_Parent_C.Mobile Interation Icon Setup
	// void Mobile Interation Icon Setup();                                                                                  // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups_Parent.B_Pickups_Parent_C.SetVisibleMobileInteractIcon
	// void SetVisibleMobileInteractIcon(bool Visible);                                                                      // [0x18a39e4] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups_Parent.B_Pickups_Parent_C.SetActiveBackgroundParticleSystem
	// void SetActiveBackgroundParticleSystem(bool Active, bool Reset);                                                      // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups_Parent.B_Pickups_Parent_C.SetHiddenBackgroundVisualComponents
	// void SetHiddenBackgroundVisualComponents(bool Hidden);                                                                // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups_Parent.B_Pickups_Parent_C.DestroyBackgroundVisualComponents
	// void DestroyBackgroundVisualComponents();                                                                             // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups_Parent.B_Pickups_Parent_C.ScaleHologramTimingsForPvP
	// void ScaleHologramTimingsForPvP();                                                                                    // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups_Parent.B_Pickups_Parent_C.SetHologramPickedUpParams
	// void SetHologramPickedUpParams(bool Tier 0);                                                                          // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups_Parent.B_Pickups_Parent_C.SpawnPickedUpTrailPS
	// void SpawnPickedUpTrailPS();                                                                                          // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups_Parent.B_Pickups_Parent_C.UserConstructionScript
	// void UserConstructionScript();                                                                                        // [0x18a39e4] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups_Parent.B_Pickups_Parent_C.MobileSelectedTL__FinishedFunc
	// void MobileSelectedTL__FinishedFunc();                                                                                // [0x18a39e4] BlueprintEvent       
	// Function /Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups_Parent.B_Pickups_Parent_C.MobileSelectedTL__UpdateFunc
	// void MobileSelectedTL__UpdateFunc();                                                                                  // [0x18a39e4] BlueprintEvent       
	// Function /Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups_Parent.B_Pickups_Parent_C.DisableBacchusHighlight
	// void DisableBacchusHighlight();                                                                                       // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups_Parent.B_Pickups_Parent_C.HideBackgroundAndSpotlight
	// void HideBackgroundAndSpotlight();                                                                                    // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups_Parent.B_Pickups_Parent_C.OnAttached
	// void OnAttached();                                                                                                    // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups_Parent.B_Pickups_Parent_C.EnableBacchusHighlight
	// void EnableBacchusHighlight();                                                                                        // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups_Parent.B_Pickups_Parent_C.OnTossed
	// void OnTossed();                                                                                                      // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups_Parent.B_Pickups_Parent_C.OnPickedUp
	// void OnPickedUp(class AFortPawn* PickupTarget);                                                                       // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups_Parent.B_Pickups_Parent_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                              // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups_Parent.B_Pickups_Parent_C.ExecuteUbergraph_B_Pickups_Parent
	// void ExecuteUbergraph_B_Pickups_Parent(int32_t EntryPoint);                                                           // [0x18a39e4] Final|HasDefaults    
};

/// Class /Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups_Default.B_Pickups_Default_C
/// Size: 0x003C (0x0005A4 - 0x0005E0)
class AB_Pickups_Default_C : public AB_Pickups_Parent_C
{ 
public:
	unsigned char                                      UnknownData00_3[0x4];                                       // 0x05A4   (0x0004)  MISSED
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x05A8   (0x0008)  
	class UStaticMeshComponent*                        BG_Dark;                                                    // 0x05B0   (0x0008)  
	class UStaticMeshComponent*                        BG;                                                         // 0x05B8   (0x0008)  
	class UStaticMeshComponent*                        rarePickupFXMesh;                                           // 0x05C0   (0x0008)  
	class USpotLightComponent*                         SpotLightComp;                                              // 0x05C8   (0x0008)  
	class UNiagaraComponent*                           rareAmbientEmitter;                                         // 0x05D0   (0x0008)  
	class USoundBase*                                  Pickup_Sound;                                               // 0x05D8   (0x0008)  


	/// Functions
	// Function /Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups_Default.B_Pickups_Default_C.Setup View Distances
	// void Setup View Distances(int32_t& viewDistanceQuality);                                                              // [0x18a39e4] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups_Default.B_Pickups_Default_C.initializeSpotlightComponent
	// void initializeSpotlightComponent();                                                                                  // [0x18a39e4] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups_Default.B_Pickups_Default_C.AddRareFX
	// void AddRareFX();                                                                                                     // [0x18a39e4] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups_Default.B_Pickups_Default_C.Set Initial BKGD Param
	// void Set Initial BKGD Param(class UMaterialInstanceDynamic* Mid);                                                     // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups_Default.B_Pickups_Default_C.HideBackgroundAndSpotlight
	// void HideBackgroundAndSpotlight();                                                                                    // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups_Default.B_Pickups_Default_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                              // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups_Default.B_Pickups_Default_C.OnPickedUp
	// void OnPickedUp(class AFortPawn* PickupTarget);                                                                       // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups_Default.B_Pickups_Default_C.OnTossed
	// void OnTossed();                                                                                                      // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups_Default.B_Pickups_Default_C.setDrawDistances
	// void setDrawDistances(double BG, double bgdark, double gun);                                                          // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups_Default.B_Pickups_Default_C.setMaxDraw_Gun
	// void setMaxDraw_Gun(double BG);                                                                                       // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups_Default.B_Pickups_Default_C.setMaxDraw_BGDark
	// void setMaxDraw_BGDark(double BG);                                                                                    // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups_Default.B_Pickups_Default_C.setMaxDraw_BG
	// void setMaxDraw_BG(double BG);                                                                                        // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups_Default.B_Pickups_Default_C.setMaxDraw_RareMesh
	// void setMaxDraw_RareMesh(double BG);                                                                                  // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups_Default.B_Pickups_Default_C.setMaxDraw_RareFX
	// void setMaxDraw_RareFX(double BG);                                                                                    // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups_Default.B_Pickups_Default_C.drawDark
	// void drawDark();                                                                                                      // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups_Default.B_Pickups_Default_C.ExecuteUbergraph_B_Pickups_Default
	// void ExecuteUbergraph_B_Pickups_Default(int32_t EntryPoint);                                                          // [0x18a39e4] Final                
};

/// Class /Game/Effects/Fort_Effects/Camera_Effects/B_CameraLens_Boat_Droplets.B_CameraLens_Boat_Droplets_C
/// Size: 0x0018 (0x000380 - 0x000398)
class AB_CameraLens_Boat_Droplets_C : public AEmitterCameraLensEffectBase
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0380   (0x0008)  
	float                                              Timeline_0_Alpha_0C9ACFAF463718824428D0A86CC5D789;          // 0x0388   (0x0004)  
	SDK_UNDEFINED(1,9471) /* TEnumAsByte<ETimelineDirection> */ __um(Timeline_0__Direction_0C9ACFAF463718824428D0A86CC5D789); // 0x038C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x038D   (0x0003)  MISSED
	class UTimelineComponent*                          Timeline;                                                   // 0x0390   (0x0008)  


	/// Functions
	// Function /Game/Effects/Fort_Effects/Camera_Effects/B_CameraLens_Boat_Droplets.B_CameraLens_Boat_Droplets_C.Timeline_0__FinishedFunc
	// void Timeline_0__FinishedFunc();                                                                                      // [0x18a39e4] BlueprintEvent       
	// Function /Game/Effects/Fort_Effects/Camera_Effects/B_CameraLens_Boat_Droplets.B_CameraLens_Boat_Droplets_C.Timeline_0__UpdateFunc
	// void Timeline_0__UpdateFunc();                                                                                        // [0x18a39e4] BlueprintEvent       
	// Function /Game/Effects/Fort_Effects/Camera_Effects/B_CameraLens_Boat_Droplets.B_CameraLens_Boat_Droplets_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                              // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Camera_Effects/B_CameraLens_Boat_Droplets.B_CameraLens_Boat_Droplets_C.ReceiveDestroyed
	// void ReceiveDestroyed();                                                                                              // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Camera_Effects/B_CameraLens_Boat_Droplets.B_CameraLens_Boat_Droplets_C.ExecuteUbergraph_B_CameraLens_Boat_Droplets
	// void ExecuteUbergraph_B_CameraLens_Boat_Droplets(int32_t EntryPoint);                                                 // [0x18a39e4] Final                
};

/// Class /Game/Effects/Fort_Effects/Effects/Characters/Generic/ResIn/DuplicateResOutMesh.DuplicateResOutMesh_C
/// Size: 0x0184 (0x000290 - 0x000414)
class ADuplicateResOutMesh_C : public AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0290   (0x0008)  
	class USceneComponent*                             DefaultSceneRoot;                                           // 0x0298   (0x0008)  
	float                                              CharacterSpawnInTimeline_FirstPassComplete_2AB89084476E64255664E9B2D45E14C1; // 0x02A0   (0x0004)  
	float                                              CharacterSpawnInTimeline_LightIntensity_2AB89084476E64255664E9B2D45E14C1; // 0x02A4   (0x0004)  
	float                                              CharacterSpawnInTimeline_zHieght_2AB89084476E64255664E9B2D45E14C1; // 0x02A8   (0x0004)  
	SDK_UNDEFINED(1,9472) /* TEnumAsByte<ETimelineDirection> */ __um(CharacterSpawnInTimeline__Direction_2AB89084476E64255664E9B2D45E14C1); // 0x02AC   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x02AD   (0x0003)  MISSED
	class UTimelineComponent*                          CharacterSpawnInTimeline;                                   // 0x02B0   (0x0008)  
	class USkeletalMeshComponent*                      Skeletal_Mesh_Duplicate;                                    // 0x02B8   (0x0008)  
	bool                                               Gun_True;                                                   // 0x02C0   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x02C1   (0x0007)  MISSED
	double                                             BoundsRadius;                                               // 0x02C8   (0x0008)  
	TArray<class UMaterialInstanceDynamic*>            MIDArray;                                                   // 0x02D0   (0x0010)  
	FVector                                            World_location_for_the_dissolve_location;                   // 0x02E0   (0x0018)  
	class UMaterialInstanceDynamic*                    Current_MID;                                                // 0x02F8   (0x0008)  
	double                                             Head_Space;                                                 // 0x0300   (0x0008)  
	double                                             Leg_Space;                                                  // 0x0308   (0x0008)  
	class UPointLightComponent*                        Spawn_Light;                                                // 0x0310   (0x0008)  
	double                                             light_intensity;                                            // 0x0318   (0x0008)  
	int32_t                                            Number_of_Base_skeletal_mesh_materials;                     // 0x0320   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x0324   (0x0004)  MISSED
	double                                             FirstPassComplete;                                          // 0x0328   (0x0008)  
	TArray<class USkeletalMeshComponent*>              ExternalSkeletalMeshComponent;                              // 0x0330   (0x0010)  
	FTransform                                         Box_Local_Transform;                                        // 0x0340   (0x0060)  
	double                                             Timeline_Play_Length;                                       // 0x03A0   (0x0008)  
	bool                                               TeleportOut_;                                               // 0x03A8   (0x0001)  
	unsigned char                                      UnknownData03_5[0x7];                                       // 0x03A9   (0x0007)  MISSED
	class AActor*                                      ExternalActor;                                              // 0x03B0   (0x0008)  
	TArray<class USkeletalMeshComponent*>              InternalSkeletalMeshComponents;                             // 0x03B8   (0x0010)  
	int32_t                                            CurrentMeshMidIndex;                                        // 0x03C8   (0x0004)  
	unsigned char                                      UnknownData04_5[0x4];                                       // 0x03CC   (0x0004)  MISSED
	class USkeletalMeshComponent*                      External_Base_Mesh_Component;                               // 0x03D0   (0x0008)  
	TArray<class UMaterialInstanceDynamic*>            ExternalMidArray;                                           // 0x03D8   (0x0010)  
	class USkeletalMeshComponent*                      ExternalRootMeshComponent;                                  // 0x03E8   (0x0008)  
	TArray<class UMaterialInterface*>                  ListOfMaterialsExemptFromReparenting;                       // 0x03F0   (0x0010)  
	TArray<class UMaterialInstanceDynamic*>            Original_MIDs;                                              // 0x0400   (0x0010)  
	int32_t                                            Increment_End;                                              // 0x0410   (0x0004)  


	/// Functions
	// Function /Game/Effects/Fort_Effects/Effects/Characters/Generic/ResIn/DuplicateResOutMesh.DuplicateResOutMesh_C.RestoreInProgressRes
	// void RestoreInProgressRes();                                                                                          // [0x18a39e4] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Effects/Characters/Generic/ResIn/DuplicateResOutMesh.DuplicateResOutMesh_C.Store Original Material for Teleport In
	// void Store Original Material for Teleport In();                                                                       // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Effects/Characters/Generic/ResIn/DuplicateResOutMesh.DuplicateResOutMesh_C.External Mesh Masked Setup
	// void External Mesh Masked Setup(TArray<USkeletalMeshComponent*>& External MEsh Component Array, TArray<UMaterialInstanceDynamic*>& Corrected Mid Array); // [0x18a39e4] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Effects/Characters/Generic/ResIn/DuplicateResOutMesh.DuplicateResOutMesh_C.ProcessSpawnInTimeline
	// void ProcessSpawnInTimeline(double ZHeight, double LightIntensity);                                                   // [0x18a39e4] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Effects/Characters/Generic/ResIn/DuplicateResOutMesh.DuplicateResOutMesh_C.Make internal mids and append external and intermal mids to mid array
	// void Make internal mids and append external and intermal mids to mid array();                                         // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Effects/Characters/Generic/ResIn/DuplicateResOutMesh.DuplicateResOutMesh_C.Make and slave internal meshes
	// void Make and slave internal meshes();                                                                                // [0x18a39e4] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Effects/Characters/Generic/ResIn/DuplicateResOutMesh.DuplicateResOutMesh_C.Spawn  Light
	// void Spawn  Light();                                                                                                  // [0x18a39e4] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Effects/Characters/Generic/ResIn/DuplicateResOutMesh.DuplicateResOutMesh_C.Find Bounds
	// void Find Bounds();                                                                                                   // [0x18a39e4] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Effects/Characters/Generic/ResIn/DuplicateResOutMesh.DuplicateResOutMesh_C.initializeExternalSkeletalMeshArray
	// void initializeExternalSkeletalMeshArray();                                                                           // [0x18a39e4] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Effects/Characters/Generic/ResIn/DuplicateResOutMesh.DuplicateResOutMesh_C.CharacterSpawnInTimeline__FinishedFunc
	// void CharacterSpawnInTimeline__FinishedFunc();                                                                        // [0x18a39e4] BlueprintEvent       
	// Function /Game/Effects/Fort_Effects/Effects/Characters/Generic/ResIn/DuplicateResOutMesh.DuplicateResOutMesh_C.CharacterSpawnInTimeline__UpdateFunc
	// void CharacterSpawnInTimeline__UpdateFunc();                                                                          // [0x18a39e4] BlueprintEvent       
	// Function /Game/Effects/Fort_Effects/Effects/Characters/Generic/ResIn/DuplicateResOutMesh.DuplicateResOutMesh_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                              // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Effects/Characters/Generic/ResIn/DuplicateResOutMesh.DuplicateResOutMesh_C.ReceiveTick
	// void ReceiveTick(float DeltaSeconds);                                                                                 // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Effects/Characters/Generic/ResIn/DuplicateResOutMesh.DuplicateResOutMesh_C.UpdateExternalParameters
	// void UpdateExternalParameters(TArray<UMaterialInstanceDynamic*>& MID Array, TArray<USkeletalMeshComponent*>& External MEsh Component Array); // [0x18a39e4] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Effects/Characters/Generic/ResIn/DuplicateResOutMesh.DuplicateResOutMesh_C.ExecuteUbergraph_DuplicateResOutMesh
	// void ExecuteUbergraph_DuplicateResOutMesh(int32_t EntryPoint);                                                        // [0x18a39e4] Final|HasDefaults    
};

/// Class /Game/Effects/Fort_Effects/Camera_Effects/BP_Camera_Shake_Pulse_Flash.BP_Camera_Shake_Pulse_Flash_C
/// Size: 0x0000 (0x0001F0 - 0x0001F0)
class UBP_Camera_Shake_Pulse_Flash_C : public ULegacyCameraShake
{ 
public:
};

/// Class /Game/Effects/Niagara/Blueprints/PhsyicsFields/FN_RadialForce.FN_RadialForce_C
/// Size: 0x00B4 (0x000298 - 0x00034C)
class AFN_RadialForce_C : public AFieldSystemActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0298   (0x0008)  
	class UOperatorField*                              DistanceFadMult;                                            // 0x02A0   (0x0008)  
	class URadialFalloff*                              DistanceFalloff;                                            // 0x02A8   (0x0008)  
	class UWaveScalar*                                 DecayScalar;                                                // 0x02B0   (0x0008)  
	class UOperatorField*                              DecayMult;                                                  // 0x02B8   (0x0008)  
	class UWaveScalar*                                 RadialFalloffWave;                                          // 0x02C0   (0x0008)  
	class UOperatorField*                              RadialVecMultiplyRadialFallOff;                             // 0x02C8   (0x0008)  
	class URadialVector*                               RadialVector;                                               // 0x02D0   (0x0008)  
	double                                             Wave_Period;                                                // 0x02D8   (0x0008)  
	double                                             Force_Duration;                                             // 0x02E0   (0x0008)  
	double                                             Radius;                                                     // 0x02E8   (0x0008)  
	double                                             Magnitude;                                                  // 0x02F0   (0x0008)  
	double                                             PlayRate;                                                   // 0x02F8   (0x0008)  
	double                                             Scale;                                                      // 0x0300   (0x0008)  
	double                                             Impact_Time;                                                // 0x0308   (0x0008)  
	double                                             Period;                                                     // 0x0310   (0x0008)  
	double                                             WaveLength;                                                 // 0x0318   (0x0008)  
	double                                             Time_Decay;                                                 // 0x0320   (0x0008)  
	SDK_UNDEFINED(1,9473) /* TEnumAsByte<EFieldFalloffType> */ __um(Falloff_Type);                                 // 0x0328   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0329   (0x0007)  MISSED
	double                                             Expansion;                                                  // 0x0330   (0x0008)  
	double                                             Impact_Radius;                                              // 0x0338   (0x0008)  
	double                                             Strength;                                                   // 0x0340   (0x0008)  
	float                                              DelayTime;                                                  // 0x0348   (0x0004)  


	/// Functions
	// Function /Game/Effects/Niagara/Blueprints/PhsyicsFields/FN_RadialForce.FN_RadialForce_C.NewFunction
	// FTransform NewFunction(double Roll, double Scale);                                                                    // [0x18a39e4] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Effects/Niagara/Blueprints/PhsyicsFields/FN_RadialForce.FN_RadialForce_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                              // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Game/Effects/Niagara/Blueprints/PhsyicsFields/FN_RadialForce.FN_RadialForce_C.ExecuteUbergraph_FN_RadialForce
	// void ExecuteUbergraph_FN_RadialForce(int32_t EntryPoint);                                                             // [0x18a39e4] Final                
};

/// Class /Game/Effects/Niagara/Blueprints/AnimNotify_NiagaraNotify_SetBodyType.AnimNotify_NiagaraNotify_SetBodyType_C
/// Size: 0x0018 (0x000088 - 0x0000A0)
class UAnimNotify_NiagaraNotify_SetBodyType_C : public UFortAnimNotifyState_TimedNiagaraEffectVariant
{ 
public:
	SDK_UNDEFINED(1,9474) /* TEnumAsByte<EFortCustomPartType> */ __um(Part_Type);                                  // 0x0088   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0089   (0x0007)  MISSED
	SDK_UNDEFINED(16,9475) /* FString */               __um(Skeletal_Mesh_User_Name);                              // 0x0090   (0x0010)  


	/// Functions
	// Function /Game/Effects/Niagara/Blueprints/AnimNotify_NiagaraNotify_SetBodyType.AnimNotify_NiagaraNotify_SetBodyType_C.Received_NotifyBegin
	// bool Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration, FAnimNotifyEventReference& EventReference); // [0x18a39e4] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
};

/// Struct /Game/Effects/Niagara/Blueprints/FN_TimedNiagaraNotify/AnimCurveParameterPair.AnimCurveParameterPair
/// Size: 0x0008 (0x000000 - 0x000008)
struct FAnimCurveParameterPair
{ 
	FName                                              UserVariableName_5_C3E793D64B2060301331AC805C0B1026;        // 0x0000   (0x0004)  
	FName                                              AnimCurveName_6_457883094DB38A3EF423919EDE4D33C1;           // 0x0004   (0x0004)  
};

/// Class /Game/Effects/Niagara/Blueprints/FN_TimedNiagaraNotify/FN_TimedNiagaraNotify.FN_TimedNiagaraNotify_C
/// Size: 0x001B (0x000088 - 0x0000A3)
class UFN_TimedNiagaraNotify_C : public UFortAnimNotifyState_TimedNiagaraEffectVariant
{ 
public:
	bool                                               Print_Debug;                                                // 0x0088   (0x0001)  
	bool                                               is_Glider_Deploy_Notify;                                    // 0x0089   (0x0001)  
	bool                                               Set_in_Water_Niagara_Variable;                              // 0x008A   (0x0001)  
	unsigned char                                      UnknownData00_5[0x5];                                       // 0x008B   (0x0005)  MISSED
	TArray<FAnimCurveParameterPair>                    AnimCurveParameterPair;                                     // 0x0090   (0x0010)  
	bool                                               IsLargeBodyPawn;                                            // 0x00A0   (0x0001)  
	bool                                               Absolute_Scale;                                             // 0x00A1   (0x0001)  
	bool                                               Cast_Shadow;                                                // 0x00A2   (0x0001)  


	/// Functions
	// Function /Game/Effects/Niagara/Blueprints/FN_TimedNiagaraNotify/FN_TimedNiagaraNotify.FN_TimedNiagaraNotify_C.Received_NotifyTick
	// bool Received_NotifyTick(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float FrameDeltaTime, FAnimNotifyEventReference& EventReference); // [0x18a39e4] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/Effects/Niagara/Blueprints/FN_TimedNiagaraNotify/FN_TimedNiagaraNotify.FN_TimedNiagaraNotify_C.Received_NotifyBegin
	// bool Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration, FAnimNotifyEventReference& EventReference); // [0x18a39e4] Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const 
};

/// Class /Game/Effects/Fort_Effects/BluePrints/CameraShakes/B_Small_Vertical_Jolt_CameraShake.B_Small_Vertical_Jolt_CameraShake_C
/// Size: 0x0000 (0x0001F0 - 0x0001F0)
class UB_Small_Vertical_Jolt_CameraShake_C : public ULegacyCameraShake
{ 
public:
};

/// Class /Game/Effects/Fort_Effects/Camera_Effects/B_CameraLens_SpookyMist_Loop.B_CameraLens_SpookyMist_Loop_C
/// Size: 0x0008 (0x000380 - 0x000388)
class AB_CameraLens_SpookyMist_Loop_C : public AEmitterCameraLensEffectBase
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0380   (0x0008)  


	/// Functions
	// Function /Game/Effects/Fort_Effects/Camera_Effects/B_CameraLens_SpookyMist_Loop.B_CameraLens_SpookyMist_Loop_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                              // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Camera_Effects/B_CameraLens_SpookyMist_Loop.B_CameraLens_SpookyMist_Loop_C.ExecuteUbergraph_B_CameraLens_SpookyMist_Loop
	// void ExecuteUbergraph_B_CameraLens_SpookyMist_Loop(int32_t EntryPoint);                                               // [0x18a39e4] Final                
};

/// Class /Game/Effects/Fort_Effects/Camera_Effects/B_CameraLens_SpookyMist_End.B_CameraLens_SpookyMist_End_C
/// Size: 0x0008 (0x000380 - 0x000388)
class AB_CameraLens_SpookyMist_End_C : public AEmitterCameraLensEffectBase
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0380   (0x0008)  


	/// Functions
	// Function /Game/Effects/Fort_Effects/Camera_Effects/B_CameraLens_SpookyMist_End.B_CameraLens_SpookyMist_End_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                              // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Camera_Effects/B_CameraLens_SpookyMist_End.B_CameraLens_SpookyMist_End_C.ExecuteUbergraph_B_CameraLens_SpookyMist_End
	// void ExecuteUbergraph_B_CameraLens_SpookyMist_End(int32_t EntryPoint);                                                // [0x18a39e4] Final                
};

/// Class /Game/Effects/Fort_Effects/Camera_Effects/B_CameraLens_Geyser.B_CameraLens_Geyser_C
/// Size: 0x0018 (0x000380 - 0x000398)
class AB_CameraLens_Geyser_C : public AEmitterCameraLensEffectBase
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0380   (0x0008)  
	float                                              Timeline_0_Alpha_3D5AA2144E9B8D6D3B409B845315B143;          // 0x0388   (0x0004)  
	SDK_UNDEFINED(1,9476) /* TEnumAsByte<ETimelineDirection> */ __um(Timeline_0__Direction_3D5AA2144E9B8D6D3B409B845315B143); // 0x038C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x038D   (0x0003)  MISSED
	class UTimelineComponent*                          Timeline;                                                   // 0x0390   (0x0008)  


	/// Functions
	// Function /Game/Effects/Fort_Effects/Camera_Effects/B_CameraLens_Geyser.B_CameraLens_Geyser_C.Timeline_0__FinishedFunc
	// void Timeline_0__FinishedFunc();                                                                                      // [0x18a39e4] BlueprintEvent       
	// Function /Game/Effects/Fort_Effects/Camera_Effects/B_CameraLens_Geyser.B_CameraLens_Geyser_C.Timeline_0__UpdateFunc
	// void Timeline_0__UpdateFunc();                                                                                        // [0x18a39e4] BlueprintEvent       
	// Function /Game/Effects/Fort_Effects/Camera_Effects/B_CameraLens_Geyser.B_CameraLens_Geyser_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                              // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Camera_Effects/B_CameraLens_Geyser.B_CameraLens_Geyser_C.ReceiveDestroyed
	// void ReceiveDestroyed();                                                                                              // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Camera_Effects/B_CameraLens_Geyser.B_CameraLens_Geyser_C.ExecuteUbergraph_B_CameraLens_Geyser
	// void ExecuteUbergraph_B_CameraLens_Geyser(int32_t EntryPoint);                                                        // [0x18a39e4] Final                
};

/// Class /Game/Effects/Fort_Effects/Camera_Effects/B_CameraLens_Splash_Water_Droplets.B_CameraLens_Splash_Water_Droplets_C
/// Size: 0x0008 (0x000380 - 0x000388)
class AB_CameraLens_Splash_Water_Droplets_C : public AEmitterCameraLensEffectBase
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0380   (0x0008)  


	/// Functions
	// Function /Game/Effects/Fort_Effects/Camera_Effects/B_CameraLens_Splash_Water_Droplets.B_CameraLens_Splash_Water_Droplets_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                              // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Camera_Effects/B_CameraLens_Splash_Water_Droplets.B_CameraLens_Splash_Water_Droplets_C.ExecuteUbergraph_B_CameraLens_Splash_Water_Droplets
	// void ExecuteUbergraph_B_CameraLens_Splash_Water_Droplets(int32_t EntryPoint);                                         // [0x18a39e4] Final                
};

/// Class /Game/Effects/Fort_Effects/Camera_Effects/BP_CameraShake_PortalWarp.BP_CameraShake_PortalWarp_C
/// Size: 0x0000 (0x0001F0 - 0x0001F0)
class UBP_CameraShake_PortalWarp_C : public ULegacyCameraShake
{ 
public:
};

/// Class /Game/Effects/Fort_Effects/Camera_Effects/B_CameraLens_Drown_Damage.B_CameraLens_Drown_Damage_C
/// Size: 0x0008 (0x000380 - 0x000388)
class AB_CameraLens_Drown_Damage_C : public AEmitterCameraLensEffectBase
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0380   (0x0008)  


	/// Functions
	// Function /Game/Effects/Fort_Effects/Camera_Effects/B_CameraLens_Drown_Damage.B_CameraLens_Drown_Damage_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                              // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Camera_Effects/B_CameraLens_Drown_Damage.B_CameraLens_Drown_Damage_C.ExecuteUbergraph_B_CameraLens_Drown_Damage
	// void ExecuteUbergraph_B_CameraLens_Drown_Damage(int32_t EntryPoint);                                                  // [0x18a39e4] Final                
};

/// Class /Game/Effects/Fort_Effects/BluePrints/CameraShakes/BP_CamShake_BlurPulse.BP_CamShake_BlurPulse_C
/// Size: 0x0000 (0x0001F0 - 0x0001F0)
class UBP_CamShake_BlurPulse_C : public ULegacyCameraShake
{ 
public:
};

/// Class /Game/Effects/Fort_Effects/Camera_Effects/B_CameraLens_Shadow_Bomb_Loop.B_CameraLens_Shadow_Bomb_Loop_C
/// Size: 0x0008 (0x000380 - 0x000388)
class AB_CameraLens_Shadow_Bomb_Loop_C : public AEmitterCameraLensEffectBase
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0380   (0x0008)  


	/// Functions
	// Function /Game/Effects/Fort_Effects/Camera_Effects/B_CameraLens_Shadow_Bomb_Loop.B_CameraLens_Shadow_Bomb_Loop_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                              // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Camera_Effects/B_CameraLens_Shadow_Bomb_Loop.B_CameraLens_Shadow_Bomb_Loop_C.ExecuteUbergraph_B_CameraLens_Shadow_Bomb_Loop
	// void ExecuteUbergraph_B_CameraLens_Shadow_Bomb_Loop(int32_t EntryPoint);                                              // [0x18a39e4] Final                
};

/// Class /Game/Effects/Fort_Effects/Camera_Effects/B_CameraLens_SwimBoost.B_CameraLens_SwimBoost_C
/// Size: 0x0008 (0x000380 - 0x000388)
class AB_CameraLens_SwimBoost_C : public AEmitterCameraLensEffectBase
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0380   (0x0008)  


	/// Functions
	// Function /Game/Effects/Fort_Effects/Camera_Effects/B_CameraLens_SwimBoost.B_CameraLens_SwimBoost_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                              // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Camera_Effects/B_CameraLens_SwimBoost.B_CameraLens_SwimBoost_C.ExecuteUbergraph_B_CameraLens_SwimBoost
	// void ExecuteUbergraph_B_CameraLens_SwimBoost(int32_t EntryPoint);                                                     // [0x18a39e4] Final                
};

/// Class /Game/Effects/Fort_Effects/Camera_Effects/B_CameraLens_Shadow_Bomb_End.B_CameraLens_Shadow_Bomb_End_C
/// Size: 0x0008 (0x000380 - 0x000388)
class AB_CameraLens_Shadow_Bomb_End_C : public AEmitterCameraLensEffectBase
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0380   (0x0008)  


	/// Functions
	// Function /Game/Effects/Fort_Effects/Camera_Effects/B_CameraLens_Shadow_Bomb_End.B_CameraLens_Shadow_Bomb_End_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                              // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Camera_Effects/B_CameraLens_Shadow_Bomb_End.B_CameraLens_Shadow_Bomb_End_C.ExecuteUbergraph_B_CameraLens_Shadow_Bomb_End
	// void ExecuteUbergraph_B_CameraLens_Shadow_Bomb_End(int32_t EntryPoint);                                               // [0x18a39e4] Final                
};

/// Class /Game/Effects/Fort_Effects/Camera_Effects/B_CameraLens_Lava_Bouncing.B_CameraLens_Lava_Bouncing_C
/// Size: 0x0010 (0x000380 - 0x000390)
class AB_CameraLens_Lava_Bouncing_C : public AEmitterCameraLensEffectBase
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0380   (0x0008)  
	class UParticleSystemComponent*                    P_Camera_Lava_Bouncing;                                     // 0x0388   (0x0008)  


	/// Functions
	// Function /Game/Effects/Fort_Effects/Camera_Effects/B_CameraLens_Lava_Bouncing.B_CameraLens_Lava_Bouncing_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                              // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Camera_Effects/B_CameraLens_Lava_Bouncing.B_CameraLens_Lava_Bouncing_C.ExecuteUbergraph_B_CameraLens_Lava_Bouncing
	// void ExecuteUbergraph_B_CameraLens_Lava_Bouncing(int32_t EntryPoint);                                                 // [0x18a39e4] Final                
};

/// Class /Game/Effects/Fort_Effects/Camera_Effects/BP_CameraShake_Lava_Bounce.BP_CameraShake_Lava_Bounce_C
/// Size: 0x0000 (0x0001F0 - 0x0001F0)
class UBP_CameraShake_Lava_Bounce_C : public ULegacyCameraShake
{ 
public:
};

/// Class /Game/Effects/Fort_Effects/BluePrints/CameraShakes/B_Small_Explosion_CameraShake.B_Small_Explosion_CameraShake_C
/// Size: 0x0000 (0x0001F0 - 0x0001F0)
class UB_Small_Explosion_CameraShake_C : public ULegacyCameraShake
{ 
public:
};

/// Class /Game/Effects/Fort_Effects/Camera_Effects/BP_CameraLens_HidingProp_Teleporting_Looping.BP_CameraLens_HidingProp_Teleporting_Looping_C
/// Size: 0x0000 (0x000380 - 0x000380)
class ABP_CameraLens_HidingProp_Teleporting_Looping_C : public AEmitterCameraLensEffectBase
{ 
public:
};

/// Class /Game/Effects/Fort_Effects/Camera_Effects/BP_CameraLens_HidingProp_Teleporting_Looping_WilliePete.BP_CameraLens_HidingProp_Teleporting_Looping_WilliePete_C
/// Size: 0x0000 (0x000380 - 0x000380)
class ABP_CameraLens_HidingProp_Teleporting_Looping_WilliePete_C : public AEmitterCameraLensEffectBase
{ 
public:
};

/// Struct /Game/Effects/Niagara/Blueprints/Struc_NiagaraParameters.Struc_NiagaraParameters
/// Size: 0x0044 (0x000000 - 0x000044)
struct FStruc_NiagaraParameters
{ 
	SDK_UNDEFINED(1,9477) /* TEnumAsByte<ENUM_NiagaraParameterSetup> */ __um(ParameterSelection_14_A6D4854946F722970AD7D0AEC96E4705); // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	FName                                              FloatParameterName_17_6AFBA48F43B44BD1ED9841983BEFA202;     // 0x0004   (0x0004)  
	float                                              FloatParameterValue_28_AC98B6464E1CD803B50B47AEC91741EC;    // 0x0008   (0x0004)  
	FName                                              VectorParameterName_20_71917CFB490B3D5D3E0864A3EE90C666;    // 0x000C   (0x0004)  
	FVector                                            VectorParameterValue_27_248856604659F589FF5D4FA5FF52E013;   // 0x0010   (0x0018)  
	FName                                              LinearColorparameterName_22_69C61F8D45C74F98203920856CAD5ADE; // 0x0028   (0x0004)  
	FLinearColor                                       LinearColorParameterValue_29_861B08ED408F0F612BF509A2A94F377F; // 0x002C   (0x0010)  
	FName                                              IntegerParameterName_24_98306BA7452D90289F6EE9954C4F2B1D;   // 0x003C   (0x0004)  
	int32_t                                            IntegerParameterValue_25_BB84ADEA4515AABD3B9AC6A04453D826;  // 0x0040   (0x0004)  
};

/// Class /Game/Effects/Niagara/Blueprints/AnimNotifyState_NiagaraNotify_SetParameters.AnimNotifyState_NiagaraNotify_SetParameters_C
/// Size: 0x0010 (0x000078 - 0x000088)
class UAnimNotifyState_NiagaraNotify_SetParameters_C : public UAnimNotifyState_TimedNiagaraEffect
{ 
public:
	TArray<FStruc_NiagaraParameters>                   Parameter_Setup;                                            // 0x0078   (0x0010)  


	/// Functions
	// Function /Game/Effects/Niagara/Blueprints/AnimNotifyState_NiagaraNotify_SetParameters.AnimNotifyState_NiagaraNotify_SetParameters_C.Received_NotifyTick
	// bool Received_NotifyTick(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float FrameDeltaTime, FAnimNotifyEventReference& EventReference); // [0x18a39e4] Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const 
};

/// Class /Game/Effects/Fort_Effects/Camera_Effects/BP_SpeedLines_Looping_Camera_LensV2.BP_SpeedLines_Looping_Camera_LensV2_C
/// Size: 0x0000 (0x000380 - 0x000380)
class ABP_SpeedLines_Looping_Camera_LensV2_C : public AEmitterCameraLensEffectBase
{ 
public:
};

/// Class /Game/Effects/Fort_Effects/Camera_Effects/BP_SpeedLines_Looping_Camera_Lens_Riding.BP_SpeedLines_Looping_Camera_Lens_Riding_C
/// Size: 0x0000 (0x000380 - 0x000380)
class ABP_SpeedLines_Looping_Camera_Lens_Riding_C : public AEmitterCameraLensEffectBase
{ 
public:
};

/// Class /Game/Effects/Fort_Effects/Camera_Effects/BP_SpeedLines_Consumable_Chili_Looping_Camera_Lens.BP_SpeedLines_Consumable_Chili_Looping_Camera_Lens_C
/// Size: 0x0000 (0x000380 - 0x000380)
class ABP_SpeedLines_Consumable_Chili_Looping_Camera_Lens_C : public AEmitterCameraLensEffectBase
{ 
public:
};

/// Class /Game/Effects/Fort_Effects/Camera_Effects/BP_SpeedLines_Vertical_Camera_Lens.BP_SpeedLines_Vertical_Camera_Lens_C
/// Size: 0x0000 (0x000380 - 0x000380)
class ABP_SpeedLines_Vertical_Camera_Lens_C : public AEmitterCameraLensEffectBase
{ 
public:
};

