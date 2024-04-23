
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
/// dependency: GameplayCameras
/// dependency: Niagara
/// dependency: NiagaraAnimNotifies

/// Class /Game/Effects/SnowSandInteraction/BP/SSI_BpLib_BpTools.SSI_BpLib_BpTools_C
/// Size: 0x0000 (0x000028 - 0x000028)
class USSI_BpLib_BpTools_C : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Game/Effects/SnowSandInteraction/BP/SSI_BpLib_BpTools.SSI_BpLib_BpTools_C.OnLocalPlayersTeam
	// void OnLocalPlayersTeam(class AActor* TargetActor, class UObject* __WorldContext, bool& Return Value);                   // [0x1340978] Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
};

/// Class /Game/Effects/Fort_Effects/Camera_Effects/B_PlayerHealthDamage_CameraLensEffect.B_PlayerHealthDamage_CameraLensEffect_C
/// Size: 0x0008 (0x000380 - 0x000388)
class AB_PlayerHealthDamage_CameraLensEffect_C : public AEmitterCameraLensEffectBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 904;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x380, 8, 0, 0})


	/// Functions
	// Function /Game/Effects/Fort_Effects/Camera_Effects/B_PlayerHealthDamage_CameraLensEffect.B_PlayerHealthDamage_CameraLensEffect_C.PassParticle_Parameter
	// void PassParticle_Parameter(double NewParam, bool First_Hit);                                                            // [0x1340978] BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Camera_Effects/B_PlayerHealthDamage_CameraLensEffect.B_PlayerHealthDamage_CameraLensEffect_C.ExecuteUbergraph_B_PlayerHealthDamage_CameraLensEffect
	// void ExecuteUbergraph_B_PlayerHealthDamage_CameraLensEffect(int32_t EntryPoint);                                         // [0x1340978] Final                
};

/// Class /Game/Effects/Fort_Effects/BluePrints/CameraShakes/B_Medium_Explosion_CameraShake.B_Medium_Explosion_CameraShake_C
/// Size: 0x0000 (0x0001F0 - 0x0001F0)
class UB_Medium_Explosion_CameraShake_C : public ULegacyCameraShake
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 496;

public:
};

/// Class /Game/Effects/Fort_Effects/Camera_Effects/B_PlayerShieldDamage_CameraLensEffect.B_PlayerShieldDamage_CameraLensEffect_C
/// Size: 0x0008 (0x000388 - 0x000390)
class AB_PlayerShieldDamage_CameraLensEffect_C : public AB_PlayerHealthDamage_CameraLensEffect_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 912;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x388, 8, 0, 0})


	/// Functions
	// Function /Game/Effects/Fort_Effects/Camera_Effects/B_PlayerShieldDamage_CameraLensEffect.B_PlayerShieldDamage_CameraLensEffect_C.PassParticle_Parameter_Shield
	// void PassParticle_Parameter_Shield(double NewParam);                                                                     // [0x1340978] BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Camera_Effects/B_PlayerShieldDamage_CameraLensEffect.B_PlayerShieldDamage_CameraLensEffect_C.ExecuteUbergraph_B_PlayerShieldDamage_CameraLensEffect
	// void ExecuteUbergraph_B_PlayerShieldDamage_CameraLensEffect(int32_t EntryPoint);                                         // [0x1340978] Final                
};

/// Class /Game/Effects/Fort_Effects/Camera_Effects/B_PlayerHealthDamage_LensEffect_Direction.B_PlayerHealthDamage_LensEffect_Direction_C
/// Size: 0x0000 (0x0003C0 - 0x0003C0)
class AB_PlayerHealthDamage_LensEffect_Direction_C : public AFortEmitterCameraLensEffectDirectional
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 960;

public:
};

/// Class /Game/Effects/Fort_Effects/Camera_Effects/B_PlayerShieldDamage_LensEffect_Direction.B_PlayerShieldDamage_LensEffect_Direction_C
/// Size: 0x0000 (0x0003C0 - 0x0003C0)
class AB_PlayerShieldDamage_LensEffect_Direction_C : public AFortEmitterCameraLensEffectDirectional
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 960;

public:
};

/// Class /Game/Effects/Fort_Effects/Camera_Effects/B_SoundIndicator_01.B_SoundIndicator_01_C
/// Size: 0x03C0 (0x000440 - 0x000800)
class AB_SoundIndicator_01_C : public AFortSoundCameraLensEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2048;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x440, 8, 0, 0})
	SMember(FRuntimeFloatCurve)                        Gunshot_Falloff_Long_Range                                  OFFSET(getStruct<T>, {0x448, 136, 0, 0})
	SMember(FRuntimeFloatCurve)                        Chest_Falloff                                               OFFSET(getStruct<T>, {0x4D0, 136, 0, 0})
	SMember(FRuntimeFloatCurve)                        Footsteps_Falloff                                           OFFSET(getStruct<T>, {0x558, 136, 0, 0})
	SMember(FRuntimeFloatCurve)                        Gunshot_Falloff_Mid_Range                                   OFFSET(getStruct<T>, {0x5E0, 136, 0, 0})
	SMember(FRuntimeFloatCurve)                        Gunshot_Falloff_Melee                                       OFFSET(getStruct<T>, {0x668, 136, 0, 0})
	SMember(FRuntimeFloatCurve)                        Glider_Falloff                                              OFFSET(getStruct<T>, {0x6F0, 136, 0, 0})
	SMember(FRuntimeFloatCurve)                        Plane_Falloff                                               OFFSET(getStruct<T>, {0x778, 136, 0, 0})


	/// Functions
	// Function /Game/Effects/Fort_Effects/Camera_Effects/B_SoundIndicator_01.B_SoundIndicator_01_C.GetStrengthCurveForActiveType
	// FRuntimeFloatCurve GetStrengthCurveForActiveType();                                                                      // [0x1340978] Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Game/Effects/Fort_Effects/Camera_Effects/B_SoundIndicator_01.B_SoundIndicator_01_C.GetDefaultTint
	// FLinearColor GetDefaultTint();                                                                                           // [0x1340978] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Camera_Effects/B_SoundIndicator_01.B_SoundIndicator_01_C.GetDefaultIcon
	// class UTexture* GetDefaultIcon();                                                                                        // [0x1340978] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Camera_Effects/B_SoundIndicator_01.B_SoundIndicator_01_C.GetWeaponCurve
	// FRuntimeFloatCurve GetWeaponCurve();                                                                                     // [0x1340978] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Game/Effects/Fort_Effects/Camera_Effects/B_SoundIndicator_01.B_SoundIndicator_01_C.ExecuteUbergraph_B_SoundIndicator_01
	// void ExecuteUbergraph_B_SoundIndicator_01(int32_t EntryPoint);                                                           // [0x1340978] Final                
};

/// Class /Game/Effects/Fort_Effects/BluePrints/WeakPointEffect/WeakSpot.WeakSpot_C
/// Size: 0x00D8 (0x000308 - 0x0003E0)
class AWeakSpot_C : public ABuildingWeakSpot
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 992;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x308, 8, 0, 0})
	CMember(class UStaticMeshComponent*)               ConnectTheDotsComponent                                     OFFSET(get<T>, {0x310, 8, 0, 0})
	CMember(class UCapsuleComponent*)                  CollisionComponent                                          OFFSET(get<T>, {0x318, 8, 0, 0})
	DMember(float)                                     ScaleDownParticleTL_ScaleDown_544AE05F40294D09C3C361AB7BCF6C4E OFFSET(get<float>, {0x320, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           ScaleDownParticleTL__Direction_544AE05F40294D09C3C361AB7BCF6C4E OFFSET(get<T>, {0x324, 1, 0, 0})
	CMember(class UTimelineComponent*)                 ScaleDownParticleTL                                         OFFSET(get<T>, {0x328, 8, 0, 0})
	CMember(class USoundBase*)                         SpawnSound                                                  OFFSET(get<T>, {0x330, 8, 0, 0})
	SMember(FVector)                                   Particle_Location                                           OFFSET(getStruct<T>, {0x338, 24, 0, 0})
	CMember(TArray<class USoundBase*>)                 Crack_sounds                                                OFFSET(get<T>, {0x350, 16, 0, 0})
	DMember(double)                                    ConnectTheDotsWidth                                         OFFSET(get<double>, {0x360, 8, 0, 0})
	DMember(double)                                    ConnectTheDotsDuration                                      OFFSET(get<double>, {0x368, 8, 0, 0})
	DMember(double)                                    ConnectTheDotsTimeoutFromPreviousHit                        OFFSET(get<double>, {0x370, 8, 0, 0})
	DMember(double)                                    ConnectTheDotsDurationScale                                 OFFSET(get<double>, {0x378, 8, 0, 0})
	DMember(double)                                    ConnectTheDotsMaxDuration                                   OFFSET(get<double>, {0x380, 8, 0, 0})
	DMember(double)                                    ConnectTheDotsTileScale                                     OFFSET(get<double>, {0x388, 8, 0, 0})
	DMember(double)                                    ConnectTheDotsMinLength                                     OFFSET(get<double>, {0x390, 8, 0, 0})
	DMember(double)                                    ConnectTheDotsMaxLength                                     OFFSET(get<double>, {0x398, 8, 0, 0})
	CMember(class UParticleSystem*)                    DamageTemplateCascade                                       OFFSET(get<T>, {0x3A0, 8, 0, 0})
	CMember(class UParticleSystem*)                    IdleTemplateCascade                                         OFFSET(get<T>, {0x3A8, 8, 0, 0})
	CMember(class UMaterialInstanceDynamic*)           ConnectMID                                                  OFFSET(get<T>, {0x3B0, 8, 0, 0})
	SMember(FTimerHandle)                              HideMeshTimer                                               OFFSET(getStruct<T>, {0x3B8, 8, 0, 0})
	CMember(class UFXSystemComponent*)                 FXComponent                                                 OFFSET(get<T>, {0x3C0, 8, 0, 0})
	CMember(class UNiagaraSystem*)                     IdleTemplateNiagara                                         OFFSET(get<T>, {0x3C8, 8, 0, 0})
	CMember(class UNiagaraSystem*)                     DamageTemplateNiagara                                       OFFSET(get<T>, {0x3D0, 8, 0, 0})
	DMember(double)                                    FXSpriteScale                                               OFFSET(get<double>, {0x3D8, 8, 0, 0})


	/// Functions
	// Function /Game/Effects/Fort_Effects/BluePrints/WeakPointEffect/WeakSpot.WeakSpot_C.SetSpriteScale
	// void SetSpriteScale(double SpriteScale);                                                                                 // [0x1340978] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/BluePrints/WeakPointEffect/WeakSpot.WeakSpot_C.SetFXTemplate
	// void SetFXTemplate(class UNiagaraSystem* Niagara, class UParticleSystem* Cascade);                                       // [0x1340978] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/BluePrints/WeakPointEffect/WeakSpot.WeakSpot_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x1340978] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/BluePrints/WeakPointEffect/WeakSpot.WeakSpot_C.ScaleDownParticleTL__FinishedFunc
	// void ScaleDownParticleTL__FinishedFunc();                                                                                // [0x1340978] BlueprintEvent       
	// Function /Game/Effects/Fort_Effects/BluePrints/WeakPointEffect/WeakSpot.WeakSpot_C.ScaleDownParticleTL__UpdateFunc
	// void ScaleDownParticleTL__UpdateFunc();                                                                                  // [0x1340978] BlueprintEvent       
	// Function /Game/Effects/Fort_Effects/BluePrints/WeakPointEffect/WeakSpot.WeakSpot_C.OnFadeOut
	// void OnFadeOut();                                                                                                        // [0x1340978] Event|Public|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/BluePrints/WeakPointEffect/WeakSpot.WeakSpot_C.OnStartDirectionEffect
	// void OnStartDirectionEffect();                                                                                           // [0x1340978] Event|Public|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/BluePrints/WeakPointEffect/WeakSpot.WeakSpot_C.OnHit
	// void OnHit();                                                                                                            // [0x1340978] Event|Public|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/BluePrints/WeakPointEffect/WeakSpot.WeakSpot_C.HideMesh
	// void HideMesh();                                                                                                         // [0x1340978] BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/BluePrints/WeakPointEffect/WeakSpot.WeakSpot_C.ExecuteUbergraph_WeakSpot
	// void ExecuteUbergraph_WeakSpot(int32_t EntryPoint);                                                                      // [0x1340978] Final|HasDefaults    
};

/// Class /Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups_Parent.B_Pickups_Parent_C
/// Size: 0x0144 (0x000460 - 0x0005A4)
class AB_Pickups_Parent_C : public AFortPickupsParent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1444;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x460, 8, 0, 0})
	CMember(class USceneComponent*)                    Root                                                        OFFSET(get<T>, {0x468, 8, 0, 0})
	DMember(float)                                     MobileSelectedTL_LerpInteactoIcon_FF208F9641BE589B76EF698B94309EA7 OFFSET(get<float>, {0x470, 4, 0, 0})
	DMember(float)                                     MobileSelectedTL_LerpObject_FF208F9641BE589B76EF698B94309EA7 OFFSET(get<float>, {0x474, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           MobileSelectedTL__Direction_FF208F9641BE589B76EF698B94309EA7 OFFSET(get<T>, {0x478, 1, 0, 0})
	CMember(class UTimelineComponent*)                 MobileSelectedTL                                            OFFSET(get<T>, {0x480, 8, 0, 0})
	CMember(class UStaticMeshComponent*)               Static_Mesh_Pickup                                          OFFSET(get<T>, {0x488, 8, 0, 0})
	CMember(class USkeletalMeshComponent*)             Skeletal_Mesh_Pickup                                        OFFSET(get<T>, {0x490, 8, 0, 0})
	CMember(class UPrimitiveComponent*)                SkeletalOrStaticMeshAssetPrimitive                          OFFSET(get<T>, {0x498, 8, 0, 0})
	DMember(int32_t)                                   CurrentElementIndex                                         OFFSET(get<int32_t>, {0x4A0, 4, 0, 0})
	DMember(double)                                    Component_Radius__Scaled_                                   OFFSET(get<double>, {0x4A8, 8, 0, 0})
	DMember(double)                                    Component_Radius_Multiplier                                 OFFSET(get<double>, {0x4B0, 8, 0, 0})
	CMember(TArray<FLinearColor>)                      Outline_Rarity_Colors                                       OFFSET(get<T>, {0x4B8, 16, 0, 0})
	DMember(double)                                    Component_Radius                                            OFFSET(get<double>, {0x4C8, 8, 0, 0})
	CMember(class UParticleSystem*)                    Picked_Up_Trail_PS_Old                                      OFFSET(get<T>, {0x4D0, 8, 0, 0})
	CMember(TArray<double>)                            Sparkle_Spawn_Rate__Picked_Up_                              OFFSET(get<T>, {0x4D8, 16, 0, 0})
	CMember(TArray<double>)                            Lifetime__Picked_Up_                                        OFFSET(get<T>, {0x4E8, 16, 0, 0})
	CMember(class UForceFeedbackEffect*)               PickupForceFeedback_Old                                     OFFSET(get<T>, {0x4F8, 8, 0, 0})
	DMember(bool)                                      HasUniqueMaterialIds                                        OFFSET(get<bool>, {0x500, 1, 0, 0})
	CMember(TArray<FLinearColor>)                      BackgroundRarityColors                                      OFFSET(get<T>, {0x508, 16, 0, 0})
	DMember(double)                                    Random_Rotation                                             OFFSET(get<double>, {0x518, 8, 0, 0})
	SMember(FVector)                                   MobileSelectedOffset                                        OFFSET(getStruct<T>, {0x520, 24, 0, 0})
	SMember(FVector)                                   MobileSelectedScale                                         OFFSET(getStruct<T>, {0x538, 24, 0, 0})
	CMember(class UStaticMeshComponent*)               MobileInteractIcon                                          OFFSET(get<T>, {0x550, 8, 0, 0})
	SMember(FVector)                                   MobileInteractIconLocation                                  OFFSET(getStruct<T>, {0x558, 24, 0, 0})
	SMember(FVector)                                   MobileInteractIconScale                                     OFFSET(getStruct<T>, {0x570, 24, 0, 0})
	CMember(class UMaterialInterface*)                 MobileInteractionMaterial                                   OFFSET(get<T>, {0x588, 8, 0, 0})
	DMember(bool)                                      PickedUp                                                    OFFSET(get<bool>, {0x590, 1, 0, 0})
	SMember(FLinearColor)                              MissionItemOutlineColor                                     OFFSET(getStruct<T>, {0x594, 16, 0, 0})


	/// Functions
	// Function /Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups_Parent.B_Pickups_Parent_C.GetViewDistanceQuality
	// int32_t GetViewDistanceQuality();                                                                                        // [0x1340978] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups_Parent.B_Pickups_Parent_C.Setup View Distances
	// void Setup View Distances(int32_t& viewDistanceQuality);                                                                 // [0x1340978] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups_Parent.B_Pickups_Parent_C.Mobile Interation Icon Setup
	// void Mobile Interation Icon Setup();                                                                                     // [0x1340978] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups_Parent.B_Pickups_Parent_C.SetVisibleMobileInteractIcon
	// void SetVisibleMobileInteractIcon(bool Visible);                                                                         // [0x1340978] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups_Parent.B_Pickups_Parent_C.SetActiveBackgroundParticleSystem
	// void SetActiveBackgroundParticleSystem(bool Active, bool Reset);                                                         // [0x1340978] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups_Parent.B_Pickups_Parent_C.SetHiddenBackgroundVisualComponents
	// void SetHiddenBackgroundVisualComponents(bool Hidden);                                                                   // [0x1340978] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups_Parent.B_Pickups_Parent_C.DestroyBackgroundVisualComponents
	// void DestroyBackgroundVisualComponents();                                                                                // [0x1340978] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups_Parent.B_Pickups_Parent_C.ScaleHologramTimingsForPvP
	// void ScaleHologramTimingsForPvP();                                                                                       // [0x1340978] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups_Parent.B_Pickups_Parent_C.SetHologramPickedUpParams
	// void SetHologramPickedUpParams(bool Tier 0);                                                                             // [0x1340978] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups_Parent.B_Pickups_Parent_C.SpawnPickedUpTrailPS
	// void SpawnPickedUpTrailPS();                                                                                             // [0x1340978] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups_Parent.B_Pickups_Parent_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x1340978] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups_Parent.B_Pickups_Parent_C.MobileSelectedTL__FinishedFunc
	// void MobileSelectedTL__FinishedFunc();                                                                                   // [0x1340978] BlueprintEvent       
	// Function /Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups_Parent.B_Pickups_Parent_C.MobileSelectedTL__UpdateFunc
	// void MobileSelectedTL__UpdateFunc();                                                                                     // [0x1340978] BlueprintEvent       
	// Function /Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups_Parent.B_Pickups_Parent_C.EnableBacchusHighlight
	// void EnableBacchusHighlight();                                                                                           // [0x1340978] Event|Public|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups_Parent.B_Pickups_Parent_C.DisableBacchusHighlight
	// void DisableBacchusHighlight();                                                                                          // [0x1340978] Event|Public|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups_Parent.B_Pickups_Parent_C.HideBackgroundAndSpotlight
	// void HideBackgroundAndSpotlight();                                                                                       // [0x1340978] BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups_Parent.B_Pickups_Parent_C.OnAttached
	// void OnAttached();                                                                                                       // [0x1340978] Event|Public|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups_Parent.B_Pickups_Parent_C.OnTossed
	// void OnTossed();                                                                                                         // [0x1340978] Event|Public|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups_Parent.B_Pickups_Parent_C.OnPickedUp
	// void OnPickedUp(class AFortPawn* PickupTarget);                                                                          // [0x1340978] Event|Public|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups_Parent.B_Pickups_Parent_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups_Parent.B_Pickups_Parent_C.ExecuteUbergraph_B_Pickups_Parent
	// void ExecuteUbergraph_B_Pickups_Parent(int32_t EntryPoint);                                                              // [0x1340978] Final|HasDefaults    
};

/// Class /Game/Effects/Fort_Effects/Effects/Characters/Generic/ResIn/DuplicateResOutMesh.DuplicateResOutMesh_C
/// Size: 0x0184 (0x000290 - 0x000414)
class ADuplicateResOutMesh_C : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1044;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x290, 8, 0, 0})
	CMember(class USceneComponent*)                    DefaultSceneRoot                                            OFFSET(get<T>, {0x298, 8, 0, 0})
	DMember(float)                                     CharacterSpawnInTimeline_FirstPassComplete_2AB89084476E64255664E9B2D45E14C1 OFFSET(get<float>, {0x2A0, 4, 0, 0})
	DMember(float)                                     CharacterSpawnInTimeline_LightIntensity_2AB89084476E64255664E9B2D45E14C1 OFFSET(get<float>, {0x2A4, 4, 0, 0})
	DMember(float)                                     CharacterSpawnInTimeline_zHieght_2AB89084476E64255664E9B2D45E14C1 OFFSET(get<float>, {0x2A8, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           CharacterSpawnInTimeline__Direction_2AB89084476E64255664E9B2D45E14C1 OFFSET(get<T>, {0x2AC, 1, 0, 0})
	CMember(class UTimelineComponent*)                 CharacterSpawnInTimeline                                    OFFSET(get<T>, {0x2B0, 8, 0, 0})
	CMember(class USkeletalMeshComponent*)             Skeletal_Mesh_Duplicate                                     OFFSET(get<T>, {0x2B8, 8, 0, 0})
	DMember(bool)                                      Gun_True                                                    OFFSET(get<bool>, {0x2C0, 1, 0, 0})
	DMember(double)                                    BoundsRadius                                                OFFSET(get<double>, {0x2C8, 8, 0, 0})
	CMember(TArray<class UMaterialInstanceDynamic*>)   MIDArray                                                    OFFSET(get<T>, {0x2D0, 16, 0, 0})
	SMember(FVector)                                   World_location_for_the_dissolve_location                    OFFSET(getStruct<T>, {0x2E0, 24, 0, 0})
	CMember(class UMaterialInstanceDynamic*)           Current_MID                                                 OFFSET(get<T>, {0x2F8, 8, 0, 0})
	DMember(double)                                    Head_Space                                                  OFFSET(get<double>, {0x300, 8, 0, 0})
	DMember(double)                                    Leg_Space                                                   OFFSET(get<double>, {0x308, 8, 0, 0})
	CMember(class UPointLightComponent*)               Spawn_Light                                                 OFFSET(get<T>, {0x310, 8, 0, 0})
	DMember(double)                                    light_intensity                                             OFFSET(get<double>, {0x318, 8, 0, 0})
	DMember(int32_t)                                   Number_of_Base_skeletal_mesh_materials                      OFFSET(get<int32_t>, {0x320, 4, 0, 0})
	DMember(double)                                    FirstPassComplete                                           OFFSET(get<double>, {0x328, 8, 0, 0})
	CMember(TArray<class USkeletalMeshComponent*>)     ExternalSkeletalMeshComponent                               OFFSET(get<T>, {0x330, 16, 0, 0})
	SMember(FTransform)                                Box_Local_Transform                                         OFFSET(getStruct<T>, {0x340, 96, 0, 0})
	DMember(double)                                    Timeline_Play_Length                                        OFFSET(get<double>, {0x3A0, 8, 0, 0})
	DMember(bool)                                      TeleportOut_                                                OFFSET(get<bool>, {0x3A8, 1, 0, 0})
	CMember(class AActor*)                             ExternalActor                                               OFFSET(get<T>, {0x3B0, 8, 0, 0})
	CMember(TArray<class USkeletalMeshComponent*>)     InternalSkeletalMeshComponents                              OFFSET(get<T>, {0x3B8, 16, 0, 0})
	DMember(int32_t)                                   CurrentMeshMidIndex                                         OFFSET(get<int32_t>, {0x3C8, 4, 0, 0})
	CMember(class USkeletalMeshComponent*)             External_Base_Mesh_Component                                OFFSET(get<T>, {0x3D0, 8, 0, 0})
	CMember(TArray<class UMaterialInstanceDynamic*>)   ExternalMidArray                                            OFFSET(get<T>, {0x3D8, 16, 0, 0})
	CMember(class USkeletalMeshComponent*)             ExternalRootMeshComponent                                   OFFSET(get<T>, {0x3E8, 8, 0, 0})
	CMember(TArray<class UMaterialInterface*>)         ListOfMaterialsExemptFromReparenting                        OFFSET(get<T>, {0x3F0, 16, 0, 0})
	CMember(TArray<class UMaterialInstanceDynamic*>)   Original_MIDs                                               OFFSET(get<T>, {0x400, 16, 0, 0})
	DMember(int32_t)                                   Increment_End                                               OFFSET(get<int32_t>, {0x410, 4, 0, 0})


	/// Functions
	// Function /Game/Effects/Fort_Effects/Effects/Characters/Generic/ResIn/DuplicateResOutMesh.DuplicateResOutMesh_C.RestoreInProgressRes
	// void RestoreInProgressRes();                                                                                             // [0x1340978] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Effects/Characters/Generic/ResIn/DuplicateResOutMesh.DuplicateResOutMesh_C.Store Original Material for Teleport In
	// void Store Original Material for Teleport In();                                                                          // [0x1340978] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Effects/Characters/Generic/ResIn/DuplicateResOutMesh.DuplicateResOutMesh_C.External Mesh Masked Setup
	// void External Mesh Masked Setup(TArray<USkeletalMeshComponent*>& External MEsh Component Array, TArray<UMaterialInstanceDynamic*>& Corrected Mid Array); // [0x1340978] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Effects/Characters/Generic/ResIn/DuplicateResOutMesh.DuplicateResOutMesh_C.ProcessSpawnInTimeline
	// void ProcessSpawnInTimeline(double ZHeight, double LightIntensity);                                                      // [0x1340978] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Effects/Characters/Generic/ResIn/DuplicateResOutMesh.DuplicateResOutMesh_C.Make internal mids and append external and intermal mids to mid array
	// void Make internal mids and append external and intermal mids to mid array();                                            // [0x1340978] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Effects/Characters/Generic/ResIn/DuplicateResOutMesh.DuplicateResOutMesh_C.Make and slave internal meshes
	// void Make and slave internal meshes();                                                                                   // [0x1340978] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Effects/Characters/Generic/ResIn/DuplicateResOutMesh.DuplicateResOutMesh_C.Spawn  Light
	// void Spawn  Light();                                                                                                     // [0x1340978] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Effects/Characters/Generic/ResIn/DuplicateResOutMesh.DuplicateResOutMesh_C.Find Bounds
	// void Find Bounds();                                                                                                      // [0x1340978] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Effects/Characters/Generic/ResIn/DuplicateResOutMesh.DuplicateResOutMesh_C.initializeExternalSkeletalMeshArray
	// void initializeExternalSkeletalMeshArray();                                                                              // [0x1340978] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Effects/Characters/Generic/ResIn/DuplicateResOutMesh.DuplicateResOutMesh_C.CharacterSpawnInTimeline__FinishedFunc
	// void CharacterSpawnInTimeline__FinishedFunc();                                                                           // [0x1340978] BlueprintEvent       
	// Function /Game/Effects/Fort_Effects/Effects/Characters/Generic/ResIn/DuplicateResOutMesh.DuplicateResOutMesh_C.CharacterSpawnInTimeline__UpdateFunc
	// void CharacterSpawnInTimeline__UpdateFunc();                                                                             // [0x1340978] BlueprintEvent       
	// Function /Game/Effects/Fort_Effects/Effects/Characters/Generic/ResIn/DuplicateResOutMesh.DuplicateResOutMesh_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Effects/Characters/Generic/ResIn/DuplicateResOutMesh.DuplicateResOutMesh_C.ReceiveTick
	// void ReceiveTick(float DeltaSeconds);                                                                                    // [0x1340978] Event|Public|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Effects/Characters/Generic/ResIn/DuplicateResOutMesh.DuplicateResOutMesh_C.UpdateExternalParameters
	// void UpdateExternalParameters(TArray<UMaterialInstanceDynamic*>& MID Array, TArray<USkeletalMeshComponent*>& External MEsh Component Array); // [0x1340978] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Effects/Characters/Generic/ResIn/DuplicateResOutMesh.DuplicateResOutMesh_C.ExecuteUbergraph_DuplicateResOutMesh
	// void ExecuteUbergraph_DuplicateResOutMesh(int32_t EntryPoint);                                                           // [0x1340978] Final|HasDefaults    
};

/// Class /Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups_Default.B_Pickups_Default_C
/// Size: 0x003C (0x0005A4 - 0x0005E0)
class AB_Pickups_Default_C : public AB_Pickups_Parent_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1504;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x5A8, 8, 0, 0})
	CMember(class UStaticMeshComponent*)               BG_Dark                                                     OFFSET(get<T>, {0x5B0, 8, 0, 0})
	CMember(class UStaticMeshComponent*)               BG                                                          OFFSET(get<T>, {0x5B8, 8, 0, 0})
	CMember(class UStaticMeshComponent*)               rarePickupFXMesh                                            OFFSET(get<T>, {0x5C0, 8, 0, 0})
	CMember(class USpotLightComponent*)                SpotLightComp                                               OFFSET(get<T>, {0x5C8, 8, 0, 0})
	CMember(class UNiagaraComponent*)                  rareAmbientEmitter                                          OFFSET(get<T>, {0x5D0, 8, 0, 0})
	CMember(class USoundBase*)                         Pickup_Sound                                                OFFSET(get<T>, {0x5D8, 8, 0, 0})


	/// Functions
	// Function /Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups_Default.B_Pickups_Default_C.Setup View Distances
	// void Setup View Distances(int32_t& viewDistanceQuality);                                                                 // [0x1340978] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups_Default.B_Pickups_Default_C.initializeSpotlightComponent
	// void initializeSpotlightComponent();                                                                                     // [0x1340978] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups_Default.B_Pickups_Default_C.AddRareFX
	// void AddRareFX();                                                                                                        // [0x1340978] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups_Default.B_Pickups_Default_C.Set Initial BKGD Param
	// void Set Initial BKGD Param(class UMaterialInstanceDynamic* Mid);                                                        // [0x1340978] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups_Default.B_Pickups_Default_C.HideBackgroundAndSpotlight
	// void HideBackgroundAndSpotlight();                                                                                       // [0x1340978] BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups_Default.B_Pickups_Default_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups_Default.B_Pickups_Default_C.OnPickedUp
	// void OnPickedUp(class AFortPawn* PickupTarget);                                                                          // [0x1340978] Event|Public|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups_Default.B_Pickups_Default_C.OnTossed
	// void OnTossed();                                                                                                         // [0x1340978] Event|Public|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups_Default.B_Pickups_Default_C.setDrawDistances
	// void setDrawDistances(double BG, double bgdark, double gun);                                                             // [0x1340978] BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups_Default.B_Pickups_Default_C.setMaxDraw_Gun
	// void setMaxDraw_Gun(double BG);                                                                                          // [0x1340978] BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups_Default.B_Pickups_Default_C.setMaxDraw_BGDark
	// void setMaxDraw_BGDark(double BG);                                                                                       // [0x1340978] BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups_Default.B_Pickups_Default_C.setMaxDraw_BG
	// void setMaxDraw_BG(double BG);                                                                                           // [0x1340978] BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups_Default.B_Pickups_Default_C.setMaxDraw_RareMesh
	// void setMaxDraw_RareMesh(double BG);                                                                                     // [0x1340978] BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups_Default.B_Pickups_Default_C.setMaxDraw_RareFX
	// void setMaxDraw_RareFX(double BG);                                                                                       // [0x1340978] BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups_Default.B_Pickups_Default_C.drawDark
	// void drawDark();                                                                                                         // [0x1340978] BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups_Default.B_Pickups_Default_C.ExecuteUbergraph_B_Pickups_Default
	// void ExecuteUbergraph_B_Pickups_Default(int32_t EntryPoint);                                                             // [0x1340978] Final                
};

/// Class /Game/Effects/Fort_Effects/Camera_Effects/B_CameraLens_Boat_Droplets.B_CameraLens_Boat_Droplets_C
/// Size: 0x0018 (0x000380 - 0x000398)
class AB_CameraLens_Boat_Droplets_C : public AEmitterCameraLensEffectBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 920;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x380, 8, 0, 0})
	DMember(float)                                     Timeline_0_Alpha_0C9ACFAF463718824428D0A86CC5D789           OFFSET(get<float>, {0x388, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           Timeline_0__Direction_0C9ACFAF463718824428D0A86CC5D789      OFFSET(get<T>, {0x38C, 1, 0, 0})
	CMember(class UTimelineComponent*)                 Timeline                                                    OFFSET(get<T>, {0x390, 8, 0, 0})


	/// Functions
	// Function /Game/Effects/Fort_Effects/Camera_Effects/B_CameraLens_Boat_Droplets.B_CameraLens_Boat_Droplets_C.Timeline_0__FinishedFunc
	// void Timeline_0__FinishedFunc();                                                                                         // [0x1340978] BlueprintEvent       
	// Function /Game/Effects/Fort_Effects/Camera_Effects/B_CameraLens_Boat_Droplets.B_CameraLens_Boat_Droplets_C.Timeline_0__UpdateFunc
	// void Timeline_0__UpdateFunc();                                                                                           // [0x1340978] BlueprintEvent       
	// Function /Game/Effects/Fort_Effects/Camera_Effects/B_CameraLens_Boat_Droplets.B_CameraLens_Boat_Droplets_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Camera_Effects/B_CameraLens_Boat_Droplets.B_CameraLens_Boat_Droplets_C.ReceiveDestroyed
	// void ReceiveDestroyed();                                                                                                 // [0x1340978] Event|Public|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Camera_Effects/B_CameraLens_Boat_Droplets.B_CameraLens_Boat_Droplets_C.ExecuteUbergraph_B_CameraLens_Boat_Droplets
	// void ExecuteUbergraph_B_CameraLens_Boat_Droplets(int32_t EntryPoint);                                                    // [0x1340978] Final                
};

/// Class /Game/Effects/Fort_Effects/Camera_Effects/BP_Camera_Shake_Pulse_Flash.BP_Camera_Shake_Pulse_Flash_C
/// Size: 0x0000 (0x0001F0 - 0x0001F0)
class UBP_Camera_Shake_Pulse_Flash_C : public ULegacyCameraShake
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 496;

public:
};

/// Class /Game/Effects/Niagara/Blueprints/PhsyicsFields/FN_RadialForce.FN_RadialForce_C
/// Size: 0x00B4 (0x000298 - 0x00034C)
class AFN_RadialForce_C : public AFieldSystemActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 844;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x298, 8, 0, 0})
	CMember(class UOperatorField*)                     DistanceFadMult                                             OFFSET(get<T>, {0x2A0, 8, 0, 0})
	CMember(class URadialFalloff*)                     DistanceFalloff                                             OFFSET(get<T>, {0x2A8, 8, 0, 0})
	CMember(class UWaveScalar*)                        DecayScalar                                                 OFFSET(get<T>, {0x2B0, 8, 0, 0})
	CMember(class UOperatorField*)                     DecayMult                                                   OFFSET(get<T>, {0x2B8, 8, 0, 0})
	CMember(class UWaveScalar*)                        RadialFalloffWave                                           OFFSET(get<T>, {0x2C0, 8, 0, 0})
	CMember(class UOperatorField*)                     RadialVecMultiplyRadialFallOff                              OFFSET(get<T>, {0x2C8, 8, 0, 0})
	CMember(class URadialVector*)                      RadialVector                                                OFFSET(get<T>, {0x2D0, 8, 0, 0})
	DMember(double)                                    Wave_Period                                                 OFFSET(get<double>, {0x2D8, 8, 0, 0})
	DMember(double)                                    Force_Duration                                              OFFSET(get<double>, {0x2E0, 8, 0, 0})
	DMember(double)                                    Radius                                                      OFFSET(get<double>, {0x2E8, 8, 0, 0})
	DMember(double)                                    Magnitude                                                   OFFSET(get<double>, {0x2F0, 8, 0, 0})
	DMember(double)                                    PlayRate                                                    OFFSET(get<double>, {0x2F8, 8, 0, 0})
	DMember(double)                                    Scale                                                       OFFSET(get<double>, {0x300, 8, 0, 0})
	DMember(double)                                    Impact_Time                                                 OFFSET(get<double>, {0x308, 8, 0, 0})
	DMember(double)                                    Period                                                      OFFSET(get<double>, {0x310, 8, 0, 0})
	DMember(double)                                    WaveLength                                                  OFFSET(get<double>, {0x318, 8, 0, 0})
	DMember(double)                                    Time_Decay                                                  OFFSET(get<double>, {0x320, 8, 0, 0})
	CMember(TEnumAsByte<EFieldFalloffType>)            Falloff_Type                                                OFFSET(get<T>, {0x328, 1, 0, 0})
	DMember(double)                                    Expansion                                                   OFFSET(get<double>, {0x330, 8, 0, 0})
	DMember(double)                                    Impact_Radius                                               OFFSET(get<double>, {0x338, 8, 0, 0})
	DMember(double)                                    Strength                                                    OFFSET(get<double>, {0x340, 8, 0, 0})
	DMember(float)                                     DelayTime                                                   OFFSET(get<float>, {0x348, 4, 0, 0})


	/// Functions
	// Function /Game/Effects/Niagara/Blueprints/PhsyicsFields/FN_RadialForce.FN_RadialForce_C.NewFunction
	// FTransform NewFunction(double Roll, double Scale);                                                                       // [0x1340978] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Effects/Niagara/Blueprints/PhsyicsFields/FN_RadialForce.FN_RadialForce_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Game/Effects/Niagara/Blueprints/PhsyicsFields/FN_RadialForce.FN_RadialForce_C.ExecuteUbergraph_FN_RadialForce
	// void ExecuteUbergraph_FN_RadialForce(int32_t EntryPoint);                                                                // [0x1340978] Final                
};

/// Class /Game/Effects/Niagara/Blueprints/AnimNotify_NiagaraNotify_SetBodyType.AnimNotify_NiagaraNotify_SetBodyType_C
/// Size: 0x0018 (0x000088 - 0x0000A0)
class UAnimNotify_NiagaraNotify_SetBodyType_C : public UFortAnimNotifyState_TimedNiagaraEffectVariant
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	CMember(TEnumAsByte<EFortCustomPartType>)          Part_Type                                                   OFFSET(get<T>, {0x88, 1, 0, 0})
	SMember(FString)                                   Skeletal_Mesh_User_Name                                     OFFSET(getStruct<T>, {0x90, 16, 0, 0})


	/// Functions
	// Function /Game/Effects/Niagara/Blueprints/AnimNotify_NiagaraNotify_SetBodyType.AnimNotify_NiagaraNotify_SetBodyType_C.Received_NotifyBegin
	// bool Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration, FAnimNotifyEventReference& EventReference); // [0x1340978] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
};

/// Class /Game/Effects/Niagara/Blueprints/FN_TimedNiagaraNotify/FN_TimedNiagaraNotify.FN_TimedNiagaraNotify_C
/// Size: 0x0020 (0x000088 - 0x0000A8)
class UFN_TimedNiagaraNotify_C : public UFortAnimNotifyState_TimedNiagaraEffectVariant
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	DMember(bool)                                      Print_Debug                                                 OFFSET(get<bool>, {0x88, 1, 0, 0})
	DMember(bool)                                      is_Glider_Deploy_Notify                                     OFFSET(get<bool>, {0x89, 1, 0, 0})
	DMember(bool)                                      Set_in_Water_Niagara_Variable                               OFFSET(get<bool>, {0x8A, 1, 0, 0})
	CMember(TArray<FAnimCurveParameterPair>)           AnimCurveParameterPair                                      OFFSET(get<T>, {0x90, 16, 0, 0})
	DMember(bool)                                      IsLargeBodyPawn                                             OFFSET(get<bool>, {0xA0, 1, 0, 0})
	DMember(bool)                                      Absolute_Scale                                              OFFSET(get<bool>, {0xA1, 1, 0, 0})
	DMember(bool)                                      Cast_Shadow                                                 OFFSET(get<bool>, {0xA2, 1, 0, 0})
	DMember(float)                                     Translucency_Sort_Distance_Offset                           OFFSET(get<float>, {0xA4, 4, 0, 0})


	/// Functions
	// Function /Game/Effects/Niagara/Blueprints/FN_TimedNiagaraNotify/FN_TimedNiagaraNotify.FN_TimedNiagaraNotify_C.Received_NotifyTick
	// bool Received_NotifyTick(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float FrameDeltaTime, FAnimNotifyEventReference& EventReference); // [0x1340978] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/Effects/Niagara/Blueprints/FN_TimedNiagaraNotify/FN_TimedNiagaraNotify.FN_TimedNiagaraNotify_C.Received_NotifyBegin
	// bool Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration, FAnimNotifyEventReference& EventReference); // [0x1340978] Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const 
};

/// Class /Game/Effects/Fort_Effects/Camera_Effects/BP_CameraShake_Lava_Bounce.BP_CameraShake_Lava_Bounce_C
/// Size: 0x0000 (0x0001F0 - 0x0001F0)
class UBP_CameraShake_Lava_Bounce_C : public ULegacyCameraShake
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 496;

public:
};

/// Class /Game/Effects/Fort_Effects/BluePrints/CameraShakes/B_Small_Explosion_CameraShake.B_Small_Explosion_CameraShake_C
/// Size: 0x0000 (0x0001F0 - 0x0001F0)
class UB_Small_Explosion_CameraShake_C : public ULegacyCameraShake
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 496;

public:
};

/// Class /Game/Effects/Fort_Effects/Camera_Effects/B_CameraLens_SpookyMist_Loop.B_CameraLens_SpookyMist_Loop_C
/// Size: 0x0008 (0x000380 - 0x000388)
class AB_CameraLens_SpookyMist_Loop_C : public AEmitterCameraLensEffectBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 904;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x380, 8, 0, 0})


	/// Functions
	// Function /Game/Effects/Fort_Effects/Camera_Effects/B_CameraLens_SpookyMist_Loop.B_CameraLens_SpookyMist_Loop_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Camera_Effects/B_CameraLens_SpookyMist_Loop.B_CameraLens_SpookyMist_Loop_C.ExecuteUbergraph_B_CameraLens_SpookyMist_Loop
	// void ExecuteUbergraph_B_CameraLens_SpookyMist_Loop(int32_t EntryPoint);                                                  // [0x1340978] Final                
};

/// Class /Game/Effects/Fort_Effects/Camera_Effects/B_CameraLens_SpookyMist_End.B_CameraLens_SpookyMist_End_C
/// Size: 0x0008 (0x000380 - 0x000388)
class AB_CameraLens_SpookyMist_End_C : public AEmitterCameraLensEffectBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 904;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x380, 8, 0, 0})


	/// Functions
	// Function /Game/Effects/Fort_Effects/Camera_Effects/B_CameraLens_SpookyMist_End.B_CameraLens_SpookyMist_End_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Camera_Effects/B_CameraLens_SpookyMist_End.B_CameraLens_SpookyMist_End_C.ExecuteUbergraph_B_CameraLens_SpookyMist_End
	// void ExecuteUbergraph_B_CameraLens_SpookyMist_End(int32_t EntryPoint);                                                   // [0x1340978] Final                
};

/// Class /Game/Effects/Fort_Effects/BluePrints/CameraShakes/B_Small_Vertical_Jolt_CameraShake.B_Small_Vertical_Jolt_CameraShake_C
/// Size: 0x0000 (0x0001F0 - 0x0001F0)
class UB_Small_Vertical_Jolt_CameraShake_C : public ULegacyCameraShake
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 496;

public:
};

/// Class /Game/Effects/Fort_Effects/Camera_Effects/B_CameraLens_Splash_Water_Droplets.B_CameraLens_Splash_Water_Droplets_C
/// Size: 0x0008 (0x000380 - 0x000388)
class AB_CameraLens_Splash_Water_Droplets_C : public AEmitterCameraLensEffectBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 904;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x380, 8, 0, 0})


	/// Functions
	// Function /Game/Effects/Fort_Effects/Camera_Effects/B_CameraLens_Splash_Water_Droplets.B_CameraLens_Splash_Water_Droplets_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Camera_Effects/B_CameraLens_Splash_Water_Droplets.B_CameraLens_Splash_Water_Droplets_C.ExecuteUbergraph_B_CameraLens_Splash_Water_Droplets
	// void ExecuteUbergraph_B_CameraLens_Splash_Water_Droplets(int32_t EntryPoint);                                            // [0x1340978] Final                
};

/// Class /Game/Effects/Fort_Effects/Camera_Effects/B_CameraLens_Lava_Bouncing.B_CameraLens_Lava_Bouncing_C
/// Size: 0x0010 (0x000380 - 0x000390)
class AB_CameraLens_Lava_Bouncing_C : public AEmitterCameraLensEffectBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 912;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x380, 8, 0, 0})
	CMember(class UParticleSystemComponent*)           P_Camera_Lava_Bouncing                                      OFFSET(get<T>, {0x388, 8, 0, 0})


	/// Functions
	// Function /Game/Effects/Fort_Effects/Camera_Effects/B_CameraLens_Lava_Bouncing.B_CameraLens_Lava_Bouncing_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Camera_Effects/B_CameraLens_Lava_Bouncing.B_CameraLens_Lava_Bouncing_C.ExecuteUbergraph_B_CameraLens_Lava_Bouncing
	// void ExecuteUbergraph_B_CameraLens_Lava_Bouncing(int32_t EntryPoint);                                                    // [0x1340978] Final                
};

/// Class /Game/Effects/Fort_Effects/Camera_Effects/BP_CameraShake_PortalWarp.BP_CameraShake_PortalWarp_C
/// Size: 0x0000 (0x0001F0 - 0x0001F0)
class UBP_CameraShake_PortalWarp_C : public ULegacyCameraShake
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 496;

public:
};

/// Class /Game/Effects/Niagara/Blueprints/AnimNotifyState_NiagaraNotify_SetParameters.AnimNotifyState_NiagaraNotify_SetParameters_C
/// Size: 0x0010 (0x000078 - 0x000088)
class UAnimNotifyState_NiagaraNotify_SetParameters_C : public UAnimNotifyState_TimedNiagaraEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	CMember(TArray<FStruc_NiagaraParameters>)          Parameter_Setup                                             OFFSET(get<T>, {0x78, 16, 0, 0})


	/// Functions
	// Function /Game/Effects/Niagara/Blueprints/AnimNotifyState_NiagaraNotify_SetParameters.AnimNotifyState_NiagaraNotify_SetParameters_C.Received_NotifyTick
	// bool Received_NotifyTick(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float FrameDeltaTime, FAnimNotifyEventReference& EventReference); // [0x1340978] Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const 
};

/// Class /Game/Effects/Fort_Effects/Camera_Effects/B_CameraLens_Geyser.B_CameraLens_Geyser_C
/// Size: 0x0018 (0x000380 - 0x000398)
class AB_CameraLens_Geyser_C : public AEmitterCameraLensEffectBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 920;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x380, 8, 0, 0})
	DMember(float)                                     Timeline_0_Alpha_3D5AA2144E9B8D6D3B409B845315B143           OFFSET(get<float>, {0x388, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           Timeline_0__Direction_3D5AA2144E9B8D6D3B409B845315B143      OFFSET(get<T>, {0x38C, 1, 0, 0})
	CMember(class UTimelineComponent*)                 Timeline                                                    OFFSET(get<T>, {0x390, 8, 0, 0})


	/// Functions
	// Function /Game/Effects/Fort_Effects/Camera_Effects/B_CameraLens_Geyser.B_CameraLens_Geyser_C.Timeline_0__FinishedFunc
	// void Timeline_0__FinishedFunc();                                                                                         // [0x1340978] BlueprintEvent       
	// Function /Game/Effects/Fort_Effects/Camera_Effects/B_CameraLens_Geyser.B_CameraLens_Geyser_C.Timeline_0__UpdateFunc
	// void Timeline_0__UpdateFunc();                                                                                           // [0x1340978] BlueprintEvent       
	// Function /Game/Effects/Fort_Effects/Camera_Effects/B_CameraLens_Geyser.B_CameraLens_Geyser_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Camera_Effects/B_CameraLens_Geyser.B_CameraLens_Geyser_C.ReceiveDestroyed
	// void ReceiveDestroyed();                                                                                                 // [0x1340978] Event|Public|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Camera_Effects/B_CameraLens_Geyser.B_CameraLens_Geyser_C.ExecuteUbergraph_B_CameraLens_Geyser
	// void ExecuteUbergraph_B_CameraLens_Geyser(int32_t EntryPoint);                                                           // [0x1340978] Final                
};

/// Class /Game/Effects/Fort_Effects/Camera_Effects/B_CameraLens_Drown_Damage.B_CameraLens_Drown_Damage_C
/// Size: 0x0008 (0x000380 - 0x000388)
class AB_CameraLens_Drown_Damage_C : public AEmitterCameraLensEffectBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 904;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x380, 8, 0, 0})


	/// Functions
	// Function /Game/Effects/Fort_Effects/Camera_Effects/B_CameraLens_Drown_Damage.B_CameraLens_Drown_Damage_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Camera_Effects/B_CameraLens_Drown_Damage.B_CameraLens_Drown_Damage_C.ExecuteUbergraph_B_CameraLens_Drown_Damage
	// void ExecuteUbergraph_B_CameraLens_Drown_Damage(int32_t EntryPoint);                                                     // [0x1340978] Final                
};

/// Class /Game/Effects/Fort_Effects/BluePrints/CameraShakes/BP_CamShake_BlurPulse.BP_CamShake_BlurPulse_C
/// Size: 0x0000 (0x0001F0 - 0x0001F0)
class UBP_CamShake_BlurPulse_C : public ULegacyCameraShake
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 496;

public:
};

/// Class /Game/Effects/Fort_Effects/Camera_Effects/B_CameraLens_Shadow_Bomb_Loop.B_CameraLens_Shadow_Bomb_Loop_C
/// Size: 0x0008 (0x000380 - 0x000388)
class AB_CameraLens_Shadow_Bomb_Loop_C : public AEmitterCameraLensEffectBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 904;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x380, 8, 0, 0})


	/// Functions
	// Function /Game/Effects/Fort_Effects/Camera_Effects/B_CameraLens_Shadow_Bomb_Loop.B_CameraLens_Shadow_Bomb_Loop_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Camera_Effects/B_CameraLens_Shadow_Bomb_Loop.B_CameraLens_Shadow_Bomb_Loop_C.ExecuteUbergraph_B_CameraLens_Shadow_Bomb_Loop
	// void ExecuteUbergraph_B_CameraLens_Shadow_Bomb_Loop(int32_t EntryPoint);                                                 // [0x1340978] Final                
};

/// Class /Game/Effects/Fort_Effects/Camera_Effects/B_CameraLens_Shadow_Bomb_End.B_CameraLens_Shadow_Bomb_End_C
/// Size: 0x0008 (0x000380 - 0x000388)
class AB_CameraLens_Shadow_Bomb_End_C : public AEmitterCameraLensEffectBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 904;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x380, 8, 0, 0})


	/// Functions
	// Function /Game/Effects/Fort_Effects/Camera_Effects/B_CameraLens_Shadow_Bomb_End.B_CameraLens_Shadow_Bomb_End_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Camera_Effects/B_CameraLens_Shadow_Bomb_End.B_CameraLens_Shadow_Bomb_End_C.ExecuteUbergraph_B_CameraLens_Shadow_Bomb_End
	// void ExecuteUbergraph_B_CameraLens_Shadow_Bomb_End(int32_t EntryPoint);                                                  // [0x1340978] Final                
};

/// Class /Game/Effects/Fort_Effects/Camera_Effects/BP_CameraLens_HidingProp_Teleporting_Looping.BP_CameraLens_HidingProp_Teleporting_Looping_C
/// Size: 0x0000 (0x000380 - 0x000380)
class ABP_CameraLens_HidingProp_Teleporting_Looping_C : public AEmitterCameraLensEffectBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 896;

public:
};

/// Class /Game/Effects/Fort_Effects/Camera_Effects/BP_CameraLens_HidingProp_Teleporting_Looping_WilliePete.BP_CameraLens_HidingProp_Teleporting_Looping_WilliePete_C
/// Size: 0x0000 (0x000380 - 0x000380)
class ABP_CameraLens_HidingProp_Teleporting_Looping_WilliePete_C : public AEmitterCameraLensEffectBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 896;

public:
};

/// Class /Game/Effects/Fort_Effects/Camera_Effects/B_CameraLens_SwimBoost.B_CameraLens_SwimBoost_C
/// Size: 0x0008 (0x000380 - 0x000388)
class AB_CameraLens_SwimBoost_C : public AEmitterCameraLensEffectBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 904;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x380, 8, 0, 0})


	/// Functions
	// Function /Game/Effects/Fort_Effects/Camera_Effects/B_CameraLens_SwimBoost.B_CameraLens_SwimBoost_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Camera_Effects/B_CameraLens_SwimBoost.B_CameraLens_SwimBoost_C.ExecuteUbergraph_B_CameraLens_SwimBoost
	// void ExecuteUbergraph_B_CameraLens_SwimBoost(int32_t EntryPoint);                                                        // [0x1340978] Final                
};

/// Class /Game/Effects/Fort_Effects/Camera_Effects/BP_SpeedLines_Looping_Camera_Lens_Riding.BP_SpeedLines_Looping_Camera_Lens_Riding_C
/// Size: 0x0000 (0x000380 - 0x000380)
class ABP_SpeedLines_Looping_Camera_Lens_Riding_C : public AEmitterCameraLensEffectBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 896;

public:
};

/// Class /Game/Effects/Fort_Effects/Camera_Effects/BP_SpeedLines_Looping_Camera_LensV2.BP_SpeedLines_Looping_Camera_LensV2_C
/// Size: 0x0000 (0x000380 - 0x000380)
class ABP_SpeedLines_Looping_Camera_LensV2_C : public AEmitterCameraLensEffectBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 896;

public:
};

/// Class /Game/Effects/Fort_Effects/Camera_Effects/BP_SpeedLines_Consumable_Chili_Looping_Camera_Lens.BP_SpeedLines_Consumable_Chili_Looping_Camera_Lens_C
/// Size: 0x0000 (0x000380 - 0x000380)
class ABP_SpeedLines_Consumable_Chili_Looping_Camera_Lens_C : public AEmitterCameraLensEffectBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 896;

public:
};

/// Class /Game/Effects/Fort_Effects/Camera_Effects/BP_SpeedLines_Vertical_Camera_Lens.BP_SpeedLines_Vertical_Camera_Lens_C
/// Size: 0x0000 (0x000380 - 0x000380)
class ABP_SpeedLines_Vertical_Camera_Lens_C : public AEmitterCameraLensEffectBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 896;

public:
};

/// Struct /Game/Effects/Niagara/Blueprints/FN_TimedNiagaraNotify/AnimCurveParameterPair.AnimCurveParameterPair
/// Size: 0x0008 (0x000000 - 0x000008)
class FAnimCurveParameterPair : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FName)                                     UserVariableName_5_C3E793D64B2060301331AC805C0B1026         OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FName)                                     AnimCurveName_6_457883094DB38A3EF423919EDE4D33C1            OFFSET(getStruct<T>, {0x4, 4, 0, 0})
};

/// Struct /Game/Effects/Niagara/Blueprints/Struc_NiagaraParameters.Struc_NiagaraParameters
/// Size: 0x0044 (0x000000 - 0x000044)
class FStruc_NiagaraParameters : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 68;

public:
	CMember(TEnumAsByte<ENUM_NiagaraParameterSetup>)   ParameterSelection_14_A6D4854946F722970AD7D0AEC96E4705      OFFSET(get<T>, {0x0, 1, 0, 0})
	SMember(FName)                                     FloatParameterName_17_6AFBA48F43B44BD1ED9841983BEFA202      OFFSET(getStruct<T>, {0x4, 4, 0, 0})
	DMember(float)                                     FloatParameterValue_28_AC98B6464E1CD803B50B47AEC91741EC     OFFSET(get<float>, {0x8, 4, 0, 0})
	SMember(FName)                                     VectorParameterName_20_71917CFB490B3D5D3E0864A3EE90C666     OFFSET(getStruct<T>, {0xC, 4, 0, 0})
	SMember(FVector)                                   VectorParameterValue_27_248856604659F589FF5D4FA5FF52E013    OFFSET(getStruct<T>, {0x10, 24, 0, 0})
	SMember(FName)                                     LinearColorparameterName_22_69C61F8D45C74F98203920856CAD5ADE OFFSET(getStruct<T>, {0x28, 4, 0, 0})
	SMember(FLinearColor)                              LinearColorParameterValue_29_861B08ED408F0F612BF509A2A94F377F OFFSET(getStruct<T>, {0x2C, 16, 0, 0})
	SMember(FName)                                     IntegerParameterName_24_98306BA7452D90289F6EE9954C4F2B1D    OFFSET(getStruct<T>, {0x3C, 4, 0, 0})
	DMember(int32_t)                                   IntegerParameterValue_25_BB84ADEA4515AABD3B9AC6A04453D826   OFFSET(get<int32_t>, {0x40, 4, 0, 0})
};

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

