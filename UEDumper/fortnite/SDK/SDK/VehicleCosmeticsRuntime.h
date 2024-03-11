
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: AnimGraphRuntime
/// dependency: AssembledMeshSystem
/// dependency: CoreUObject
/// dependency: CosmeticsFrameworkLoadouts
/// dependency: CustomizableObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: GameplayAbilities
/// dependency: GameplayTags
/// dependency: ItemizationCoreRuntime
/// dependency: McpProfileSys
/// dependency: ModularGameplay
/// dependency: StructUtils

/// Enum /Script/VehicleCosmeticsRuntime.EVehicleCosmeticsFailureReason
/// Size: 0x07
enum class EVehicleCosmeticsFailureReason : uint8_t
{
	EVehicleCosmeticsFailureReason__BodyTypeMismatch                                 = 0,
	EVehicleCosmeticsFailureReason__NoBodyEquipped                                   = 1,
	EVehicleCosmeticsFailureReason__NoOwningVehicle                                  = 2,
	EVehicleCosmeticsFailureReason__CustomizationDisabled                            = 3,
	EVehicleCosmeticsFailureReason__LoadoutIsTheSame                                 = 4,
	EVehicleCosmeticsFailureReason__Unknown                                          = 5,
	EVehicleCosmeticsFailureReason__EVehicleCosmeticsFailureReason_MAX               = 6
};

/// Enum /Script/VehicleCosmeticsRuntime.EVehicleWheelIndex
/// Size: 0x06
enum class EVehicleWheelIndex : uint8_t
{
	EVehicleWheelIndex__FrontLeft                                                    = 0,
	EVehicleWheelIndex__FrontRight                                                   = 1,
	EVehicleWheelIndex__BackLeft                                                     = 2,
	EVehicleWheelIndex__BackRight                                                    = 3,
	EVehicleWheelIndex__Num                                                          = 4,
	EVehicleWheelIndex__EVehicleWheelIndex_MAX                                       = 5
};

/// Class /Script/VehicleCosmeticsRuntime.FortItemVehiclePreviewActor
/// Size: 0x0080 (0x000520 - 0x0005A0)
class AFortItemVehiclePreviewActor : public AFortItemPreviewMultiAngleActor
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0520   (0x0008)  MISSED
	class UCameraComponent*                            ZoomedOutVehicleCameraComponent;                            // 0x0528   (0x0008)  
	class UCameraComponent*                            ZoomedInVehicleCameraComponent;                             // 0x0530   (0x0008)  
	class UCameraComponent*                            ZoomedOutWheelCameraComponent;                              // 0x0538   (0x0008)  
	class UCameraComponent*                            ZoomedInWheelCameraComponent;                               // 0x0540   (0x0008)  
	class UCameraComponent*                            ZoomedOutBoostCameraComponent;                              // 0x0548   (0x0008)  
	class UCameraComponent*                            ZoomedInBoostCameraComponent;                               // 0x0550   (0x0008)  
	class UCameraComponent*                            ZoomedOutDriftTrailCameraComponent;                         // 0x0558   (0x0008)  
	class UCameraComponent*                            ZoomedInDriftTrailCameraComponent;                          // 0x0560   (0x0008)  
	bool                                               bUseSingleConfiguredCamera;                                 // 0x0568   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0569   (0x0003)  MISSED
	float                                              FrameSettingHeightOffset;                                   // 0x056C   (0x0004)  
	float                                              FrameSettingExpansionOffset;                                // 0x0570   (0x0004)  
	EFortUICameraFrameTargetBoundingBehavior           FrameSettingBoundingBehavior;                               // 0x0574   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0575   (0x0003)  MISSED
	float                                              FrameSettingZoomInBoundsScale;                              // 0x0578   (0x0004)  
	unsigned char                                      UnknownData03_5[0x4];                                       // 0x057C   (0x0004)  MISSED
	class UChildActorComponent*                        PreviewVehicleActorComponent;                               // 0x0580   (0x0008)  
	class AVehicleCosmeticsPreviewVehicle*             PreviewVehicleActor;                                        // 0x0588   (0x0008)  
	unsigned char                                      UnknownData04_6[0x10];                                      // 0x0590   (0x0010)  MISSED


	/// Functions
	// Function /Script/VehicleCosmeticsRuntime.FortItemVehiclePreviewActor.HandleVehicleCosmeticsReady
	// void HandleVehicleCosmeticsReady();                                                                                   // [0xa228448] Final|Native|Public  
	// Function /Script/VehicleCosmeticsRuntime.FortItemVehiclePreviewActor.HandleDriftTrailStarted
	// void HandleDriftTrailStarted();                                                                                       // [0xa22804c] Final|Native|Public  
	// Function /Script/VehicleCosmeticsRuntime.FortItemVehiclePreviewActor.HandleBoostStarted
	// void HandleBoostStarted();                                                                                            // [0xa228010] Final|Native|Public  
};

/// Class /Script/VehicleCosmeticsRuntime.VehicleCosmeticsAIControllerInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UVehicleCosmeticsAIControllerInterface : public UInterface
{ 
public:
};

/// Class /Script/VehicleCosmeticsRuntime.VehicleCosmeticsPreviewConfigs
/// Size: 0x00A0 (0x000030 - 0x0000D0)
class UVehicleCosmeticsPreviewConfigs : public UPrimaryDataAsset
{ 
public:
	SDK_UNDEFINED(32,12427) /* TWeakObjectPtr<UClass*> */ __um(VehiclePreviewActorClass);                          // 0x0030   (0x0020)  
	SDK_UNDEFINED(32,12428) /* TWeakObjectPtr<UClass*> */ __um(DefaultBoostPreviewActorClass);                     // 0x0050   (0x0020)  
	SDK_UNDEFINED(32,12429) /* TWeakObjectPtr<UClass*> */ __um(DefaultTrailPreviewActorClass);                     // 0x0070   (0x0020)  
	SDK_UNDEFINED(32,12430) /* TWeakObjectPtr<UClass*> */ __um(VehiclePreviewPrefabAssetClass);                    // 0x0090   (0x0020)  
	SDK_UNDEFINED(32,12431) /* TWeakObjectPtr<UFortVehicleCosmeticsItemDefinition_Body*> */ __um(VehiclePreviewDefaultPreviewBody); // 0x00B0   (0x0020)  
};

/// Class /Script/VehicleCosmeticsRuntime.VehicleCosmeticsPreviewVehicle
/// Size: 0x0070 (0x001FA0 - 0x002010)
class AVehicleCosmeticsPreviewVehicle : public AFortAthenaSKVehicle
{ 
public:
	unsigned char                                      UnknownData00_1[0x70];                                      // 0x1FA0   (0x0070)  MISSED


	/// Functions
	// Function /Script/VehicleCosmeticsRuntime.VehicleCosmeticsPreviewVehicle.HandleOnVehicleCosmeticsFinished
	// void HandleOnVehicleCosmeticsFinished();                                                                              // [0xa2283b4] Final|Native|Public  
	// Function /Script/VehicleCosmeticsRuntime.VehicleCosmeticsPreviewVehicle.HandleOnDriftTrailApplied
	// void HandleOnDriftTrailApplied();                                                                                     // [0xa2282dc] Final|Native|Public  
	// Function /Script/VehicleCosmeticsRuntime.VehicleCosmeticsPreviewVehicle.HandleOnBoostApplied
	// void HandleOnBoostApplied();                                                                                          // [0xa2282c8] Final|Native|Public  
};

/// Class /Script/VehicleCosmeticsRuntime.VehicleCosmeticsBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UVehicleCosmeticsBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/VehicleCosmeticsRuntime.VehicleCosmeticsBlueprintLibrary.GetMaxSignificanceLOD_RearWheelDriftFX
	// int32_t GetMaxSignificanceLOD_RearWheelDriftFX();                                                                     // [0xa227f8c] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/VehicleCosmeticsRuntime.VehicleCosmeticsBlueprintLibrary.GetMaxSignificanceLOD_Generic
	// int32_t GetMaxSignificanceLOD_Generic();                                                                              // [0xa227f74] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/VehicleCosmeticsRuntime.VehicleCosmeticsBlueprintLibrary.GetMaxSignificanceLOD_FrontWheelDriftFX
	// int32_t GetMaxSignificanceLOD_FrontWheelDriftFX();                                                                    // [0xa227f5c] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/VehicleCosmeticsRuntime.VehicleCosmeticsBlueprintLibrary.GetMaxSignificanceLOD_BoostFX
	// int32_t GetMaxSignificanceLOD_BoostFX();                                                                              // [0xa227f44] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/VehicleCosmeticsRuntime.VehicleCosmeticsAnimInstance
/// Size: 0x0000 (0x000620 - 0x000620)
class UVehicleCosmeticsAnimInstance : public UFortVehicleAnimInstance
{ 
public:
};

/// Struct /Script/VehicleCosmeticsRuntime.BouncyChassisVehicleState
/// Size: 0x000C (0x000000 - 0x00000C)
struct FBouncyChassisVehicleState
{ 
	float                                              PitchDegrees;                                               // 0x0000   (0x0004)  
	float                                              RollDegrees;                                                // 0x0004   (0x0004)  
	float                                              TranslationZ;                                               // 0x0008   (0x0004)  
};

/// Struct /Script/VehicleCosmeticsRuntime.BouncyChassisVehicleSpringSettings
/// Size: 0x0008 (0x000000 - 0x000008)
struct FBouncyChassisVehicleSpringSettings
{ 
	float                                              Strength;                                                   // 0x0000   (0x0004)  
	float                                              Damping;                                                    // 0x0004   (0x0004)  
};

/// Struct /Script/VehicleCosmeticsRuntime.BouncyChassisVehicleSetup
/// Size: 0x0048 (0x000000 - 0x000048)
struct FBouncyChassisVehicleSetup
{ 
	FBouncyChassisVehicleSpringSettings                PitchSpring;                                                // 0x0000   (0x0008)  
	float                                              PitchMaxAngleDegrees;                                       // 0x0008   (0x0004)  
	FBouncyChassisVehicleSpringSettings                RollSpring;                                                 // 0x000C   (0x0008)  
	float                                              RollMaxAngleDegrees;                                        // 0x0014   (0x0004)  
	FBouncyChassisVehicleSpringSettings                ZSpring;                                                    // 0x0018   (0x0008)  
	float                                              ZMaxDrop;                                                   // 0x0020   (0x0004)  
	float                                              ZMaxRaise;                                                  // 0x0024   (0x0004)  
	FVector                                            MaxDisplacement;                                            // 0x0028   (0x0018)  
	float                                              DisplacementZOffset;                                        // 0x0040   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0044   (0x0004)  MISSED
};

/// Struct /Script/VehicleCosmeticsRuntime.BouncyChassisSpringTravel
/// Size: 0x0020 (0x000000 - 0x000020)
struct FBouncyChassisSpringTravel
{ 
	FFloatInterval                                     Default;                                                    // 0x0000   (0x0008)  
	FFloatInterval                                     Popped;                                                     // 0x0008   (0x0008)  
	FFloatInterval                                     TireModded;                                                 // 0x0010   (0x0008)  
	FFloatInterval                                     TireModPopped;                                              // 0x0018   (0x0008)  
};

/// Struct /Script/VehicleCosmeticsRuntime.BouncyChassisVehicleWheelAnimInfo
/// Size: 0x002C (0x000000 - 0x00002C)
struct FBouncyChassisVehicleWheelAnimInfo
{ 
	float                                              SpringToWheelOffsetZ;                                       // 0x0000   (0x0004)  
	FBouncyChassisSpringTravel                         SpringTravelRange;                                          // 0x0004   (0x0020)  
	float                                              WheelRadius;                                                // 0x0024   (0x0004)  
	float                                              TravelDistance;                                             // 0x0028   (0x0004)  
};

/// Class /Script/VehicleCosmeticsRuntime.BouncyChassisVehicleAnimInstance
/// Size: 0x0250 (0x000620 - 0x000870)
class UBouncyChassisVehicleAnimInstance : public UVehicleCosmeticsAnimInstance
{ 
public:
	FBouncyChassisVehicleState                         BouncyChassis;                                              // 0x0620   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x062C   (0x0004)  MISSED
	FBouncyChassisVehicleSetup                         BouncyChassisSetup;                                         // 0x0630   (0x0048)  
	float                                              BouncyChassisBlendRate;                                     // 0x0678   (0x0004)  
	float                                              VisualSteerAngleInterpRate;                                 // 0x067C   (0x0004)  
	float                                              WheelLerpSpeed;                                             // 0x0680   (0x0004)  
	bool                                               bThrottling;                                                // 0x0684   (0x0001)  
	bool                                               bReversing;                                                 // 0x0685   (0x0001)  
	bool                                               bAccelerating;                                              // 0x0686   (0x0001)  
	bool                                               bBraking;                                                   // 0x0687   (0x0001)  
	float                                              Throttle;                                                   // 0x0688   (0x0004)  
	float                                              Steering;                                                   // 0x068C   (0x0004)  
	float                                              SteeringAngle;                                              // 0x0690   (0x0004)  
	bool                                               bWheelsOnGround;                                            // 0x0694   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0695   (0x0003)  MISSED
	float                                              ForwardSpeed;                                               // 0x0698   (0x0004)  
	bool                                               bDriftBoostActive;                                          // 0x069C   (0x0001)  
	bool                                               bUnderthrustActive;                                         // 0x069D   (0x0001)  
	bool                                               bDriftActive;                                               // 0x069E   (0x0001)  
	bool                                               bKickflipActive;                                            // 0x069F   (0x0001)  
	bool                                               bJumpActive;                                                // 0x06A0   (0x0001)  
	bool                                               bTurboActive;                                               // 0x06A1   (0x0001)  
	bool                                               bStartlineBoostActive;                                      // 0x06A2   (0x0001)  
	bool                                               bDraftingActive;                                            // 0x06A3   (0x0001)  
	FBouncyChassisVehicleWheelAnimInfo                 WheelInfoFR;                                                // 0x06A4   (0x002C)  
	FBouncyChassisVehicleWheelAnimInfo                 WheelInfoFL;                                                // 0x06D0   (0x002C)  
	FBouncyChassisVehicleWheelAnimInfo                 WheelInfoBR;                                                // 0x06FC   (0x002C)  
	FBouncyChassisVehicleWheelAnimInfo                 WheelInfoBL;                                                // 0x0728   (0x002C)  
	bool                                               bHasTireMod;                                                // 0x0754   (0x0001)  
	bool                                               bShouldWheelSpinForPreview;                                 // 0x0755   (0x0001)  
	unsigned char                                      UnknownData02_5[0x2];                                       // 0x0756   (0x0002)  MISSED
	float                                              PreviewWheelSpinVelocity;                                   // 0x0758   (0x0004)  
	float                                              PreviewWheelSpin;                                           // 0x075C   (0x0004)  
	unsigned char                                      UnknownData03_6[0x110];                                     // 0x0760   (0x0110)  MISSED
};

/// Struct /Script/VehicleCosmeticsRuntime.VehicleCosmeticsRestrictionDefinition
/// Size: 0x0060 (0x000000 - 0x000060)
struct FVehicleCosmeticsRestrictionDefinition
{ 
	FGameplayTagQuery                                  RequiredTagQuery;                                           // 0x0000   (0x0048)  
	SDK_UNDEFINED(24,12432) /* FText */                __um(ItemLockerRestrictedText);                             // 0x0048   (0x0018)  
};

/// Class /Script/VehicleCosmeticsRuntime.FortVehicleCosmeticsItemDefinition
/// Size: 0x00A0 (0x000728 - 0x0007C8)
class UFortVehicleCosmeticsItemDefinition : public UAthenaCosmeticItemDefinition
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0728   (0x0028)  MISSED
	SDK_UNDEFINED(32,12433) /* TWeakObjectPtr<UVehicleCosmeticsItemDefinition*> */ __um(VehicleCosmeticsItemDef);  // 0x0750   (0x0020)  
	FGameplayTag                                       ItemTypeTag;                                                // 0x0770   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0774   (0x0004)  MISSED
	SDK_UNDEFINED(32,12434) /* TWeakObjectPtr<UVehicleCosmeticsPreviewConfigs*> */ __um(PreviewConfig);            // 0x0778   (0x0020)  
	TArray<FVehicleCosmeticsRestrictionDefinition>     RestrictionDefinitions;                                     // 0x0798   (0x0010)  
	SDK_UNDEFINED(32,12435) /* TWeakObjectPtr<UFortVehicleCosmeticsItemDefinition*> */ __um(ItemPreviewVehicleBody); // 0x07A8   (0x0020)  
};

/// Class /Script/VehicleCosmeticsRuntime.FortVehicleCosmeticsItemDefinition_Body
/// Size: 0x0000 (0x0007C8 - 0x0007C8)
class UFortVehicleCosmeticsItemDefinition_Body : public UFortVehicleCosmeticsItemDefinition
{ 
public:
};

/// Class /Script/VehicleCosmeticsRuntime.FortVehicleCosmeticsItemDefinition_Booster
/// Size: 0x0000 (0x0007C8 - 0x0007C8)
class UFortVehicleCosmeticsItemDefinition_Booster : public UFortVehicleCosmeticsItemDefinition
{ 
public:
};

/// Class /Script/VehicleCosmeticsRuntime.FortVehicleCosmeticsItemDefinition_DriftTrail
/// Size: 0x0000 (0x0007C8 - 0x0007C8)
class UFortVehicleCosmeticsItemDefinition_DriftTrail : public UFortVehicleCosmeticsItemDefinition
{ 
public:
};

/// Class /Script/VehicleCosmeticsRuntime.FortVehicleCosmeticsItemDefinition_EngineAudio
/// Size: 0x0000 (0x0007C8 - 0x0007C8)
class UFortVehicleCosmeticsItemDefinition_EngineAudio : public UFortVehicleCosmeticsItemDefinition
{ 
public:
};

/// Class /Script/VehicleCosmeticsRuntime.FortVehicleCosmeticsItemDefinition_Skin
/// Size: 0x0000 (0x0007C8 - 0x0007C8)
class UFortVehicleCosmeticsItemDefinition_Skin : public UFortVehicleCosmeticsItemDefinition
{ 
public:
};

/// Class /Script/VehicleCosmeticsRuntime.FortVehicleCosmeticsItemDefinition_Wheel
/// Size: 0x0000 (0x0007C8 - 0x0007C8)
class UFortVehicleCosmeticsItemDefinition_Wheel : public UFortVehicleCosmeticsItemDefinition
{ 
public:
};

/// Class /Script/VehicleCosmeticsRuntime.FortVehicleCosmeticsVariantTokenType
/// Size: 0x0000 (0x0003C8 - 0x0003C8)
class UFortVehicleCosmeticsVariantTokenType : public UFortVariantTokenType
{ 
public:
};

/// Class /Script/VehicleCosmeticsRuntime.PlayerCustomizableObjectCacheComponent
/// Size: 0x0050 (0x0000A0 - 0x0000F0)
class UPlayerCustomizableObjectCacheComponent : public UPlayerStateComponent
{ 
public:
	SDK_UNDEFINED(80,12436) /* TMap<UClass*, UCustomizableObjectInstance*> */ __um(CachedInstanceMap);             // 0x00A0   (0x0050)  


	/// Functions
	// Function /Script/VehicleCosmeticsRuntime.PlayerCustomizableObjectCacheComponent.OnSeamlessTravelStart
	// void OnSeamlessTravelStart(class UWorld* CurrentWorld, FString LevelName);                                            // [0xa2285ec] Final|Native|Protected 
	// Function /Script/VehicleCosmeticsRuntime.PlayerCustomizableObjectCacheComponent.OnPlayerDisconnected
	// void OnPlayerDisconnected(class AFortPlayerStateAthena* PlayerState, bool bIsDisconnected);                           // [0xa228524] Final|Native|Protected 
};

/// Class /Script/VehicleCosmeticsRuntime.VehicleCosmeticsActorSpawnLogic
/// Size: 0x0000 (0x000028 - 0x000028)
class UVehicleCosmeticsActorSpawnLogic : public UObject
{ 
public:
};

/// Class /Script/VehicleCosmeticsRuntime.VehicleCosmeticsActorSpawnLogic_AttachTo
/// Size: 0x0008 (0x000028 - 0x000030)
class UVehicleCosmeticsActorSpawnLogic_AttachTo : public UVehicleCosmeticsActorSpawnLogic
{ 
public:
	FName                                              AttachSocket;                                               // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Class /Script/VehicleCosmeticsRuntime.VehicleCosmeticsActorSpawnLogic_AttachToEach
/// Size: 0x0010 (0x000028 - 0x000038)
class UVehicleCosmeticsActorSpawnLogic_AttachToEach : public UVehicleCosmeticsActorSpawnLogic
{ 
public:
	TArray<FName>                                      AttachSockets;                                              // 0x0028   (0x0010)  
};

/// Class /Script/VehicleCosmeticsRuntime.VehicleCosmeticsActorSpawnLogic_Booster
/// Size: 0x0000 (0x000028 - 0x000028)
class UVehicleCosmeticsActorSpawnLogic_Booster : public UVehicleCosmeticsActorSpawnLogic
{ 
public:
};

/// Class /Script/VehicleCosmeticsRuntime.VehicleCosmeticsActor
/// Size: 0x0048 (0x000290 - 0x0002D8)
class AVehicleCosmeticsActor : public AActor
{ 
public:
	class UVehicleCosmeticsActorSpawnLogic*            SpawnLogic;                                                 // 0x0290   (0x0008)  
	TArray<class UClass*>                              CosmeticDependencies;                                       // 0x0298   (0x0010)  
	SDK_UNDEFINED(16,12437) /* TScriptInterface<Class> */ __um(VehicleInterface);                                  // 0x02A8   (0x0010)  
	SDK_UNDEFINED(16,12438) /* TScriptInterface<Class> */ __um(VehicleCosmeticsInterface);                         // 0x02B8   (0x0010)  
	class UActorComponent*                             VehicleCosmeticComponent;                                   // 0x02C8   (0x0008)  
	FName                                              SocketAttachedTo;                                           // 0x02D0   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x02D4   (0x0004)  MISSED


	/// Functions
	// Function /Script/VehicleCosmeticsRuntime.VehicleCosmeticsActor.GetBodyMeshComponent
	// class USkeletalMeshComponent* GetBodyMeshComponent();                                                                 // [0xa227ed4] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VehicleCosmeticsRuntime.VehicleCosmeticsActor.DriftStarted
	// void DriftStarted();                                                                                                  // [0xa227eac] Final|Native|Public  
	// Function /Script/VehicleCosmeticsRuntime.VehicleCosmeticsActor.DriftFinished
	// void DriftFinished();                                                                                                 // [0xa227e98] Final|Native|Public  
	// Function /Script/VehicleCosmeticsRuntime.VehicleCosmeticsActor.ColorReady
	// void ColorReady(FName InColor, FVehicleCosmeticsAdditionalParameterInfos& InInfo);                                    // [0xa2276b8] Final|Native|Public|HasOutParms 
	// Function /Script/VehicleCosmeticsRuntime.VehicleCosmeticsActor.BP_OnVehicleWheelsLeftGround
	// void BP_OnVehicleWheelsLeftGround();                                                                                  // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/VehicleCosmeticsRuntime.VehicleCosmeticsActor.BP_OnVehicleLanded
	// void BP_OnVehicleLanded(float LandingForced, bool bLandedKickflip);                                                   // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/VehicleCosmeticsRuntime.VehicleCosmeticsActor.BP_OnDriftStarted
	// void BP_OnDriftStarted();                                                                                             // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/VehicleCosmeticsRuntime.VehicleCosmeticsActor.BP_OnDriftFinished
	// void BP_OnDriftFinished();                                                                                            // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/VehicleCosmeticsRuntime.VehicleCosmeticsActor.BP_OnDeactivated
	// void BP_OnDeactivated();                                                                                              // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/VehicleCosmeticsRuntime.VehicleCosmeticsActor.BP_OnCosmeticApplied
	// void BP_OnCosmeticApplied();                                                                                          // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/VehicleCosmeticsRuntime.VehicleCosmeticsActor.BP_OnColorReady
	// void BP_OnColorReady(FName Color, FVehicleCosmeticsAdditionalParameterInfos AdditionalInfo);                          // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/VehicleCosmeticsRuntime.VehicleCosmeticsActor.BP_OnBoostStarted
	// void BP_OnBoostStarted();                                                                                             // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/VehicleCosmeticsRuntime.VehicleCosmeticsActor.BP_OnBoostFinished
	// void BP_OnBoostFinished();                                                                                            // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/VehicleCosmeticsRuntime.VehicleCosmeticsActor.BP_OnBonusSpeedDeactivated
	// void BP_OnBonusSpeedDeactivated();                                                                                    // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/VehicleCosmeticsRuntime.VehicleCosmeticsActor.BP_OnBonusSpeedActivated
	// void BP_OnBonusSpeedActivated();                                                                                      // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/VehicleCosmeticsRuntime.VehicleCosmeticsActor.BoostStarted
	// void BoostStarted();                                                                                                  // [0xa227570] Final|Native|Public  
	// Function /Script/VehicleCosmeticsRuntime.VehicleCosmeticsActor.BoostFinished
	// void BoostFinished();                                                                                                 // [0xa22755c] Final|Native|Public  
	// Function /Script/VehicleCosmeticsRuntime.VehicleCosmeticsActor.ApplyCosmetic
	// void ApplyCosmetic();                                                                                                 // [0x21dc214] Native|Public        
};

/// Struct /Script/VehicleCosmeticsRuntime.VehicleCosmeticsDefaultLoadoutInfo
/// Size: 0x0058 (0x000000 - 0x000058)
struct FVehicleCosmeticsDefaultLoadoutInfo
{ 
	FGameplayTagQuery                                  VehicleTagQuery;                                            // 0x0000   (0x0048)  
	FCosmeticLoadout                                   DefaultLoadout;                                             // 0x0048   (0x0010)  
};

/// Class /Script/VehicleCosmeticsRuntime.VehicleCosmeticsAssembledMeshUserComponent
/// Size: 0x05B0 (0x0000D8 - 0x000688)
class UVehicleCosmeticsAssembledMeshUserComponent : public UAssembledMeshUserComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x00D8   (0x0028)  MISSED
	class UCustomizableObjectInstance*                 TempCustomizableObjectInstance;                             // 0x0100   (0x0008)  
	unsigned char                                      UnknownData01_5[0x20];                                      // 0x0108   (0x0020)  MISSED
	FCosmeticLoadout                                   OwningCosmeticsLoadout;                                     // 0x0128   (0x0010)  
	unsigned char                                      UnknownData02_5[0x10];                                      // 0x0138   (0x0010)  MISSED
	TArray<FVehicleCosmeticsDefaultLoadoutInfo>        DefaultLoadoutInfos;                                        // 0x0148   (0x0010)  
	unsigned char                                      UnknownData03_5[0x1];                                       // 0x0158   (0x0001)  MISSED
	bool                                               bVehicleCosmeticsEnabled;                                   // 0x0159   (0x0001)  
	unsigned char                                      UnknownData04_5[0x6];                                       // 0x015A   (0x0006)  MISSED
	TArray<class AVehicleCosmeticsActor*>              SpawnedCosmeticActors_Body;                                 // 0x0160   (0x0010)  
	TArray<class AVehicleCosmeticsActor*>              SpawnedCosmeticActors_Wheel;                                // 0x0170   (0x0010)  
	TArray<class AVehicleCosmeticsActor*>              SpawnedCosmeticActors_Booster;                              // 0x0180   (0x0010)  
	TArray<class AVehicleCosmeticsActor*>              SpawnedCosmeticActors_DriftTrail;                           // 0x0190   (0x0010)  
	SDK_UNDEFINED(80,12439) /* TMap<FName, bool> */    __um(HasBeenCustomizedMap);                                 // 0x01A0   (0x0050)  
	SDK_UNDEFINED(80,12440) /* TMap<int32_t, UAssembledMeshSchema*> */ __um(MeshPartDataMap);                      // 0x01F0   (0x0050)  
	unsigned char                                      UnknownData05_5[0x340];                                     // 0x0240   (0x0340)  MISSED
	SDK_UNDEFINED(16,12441) /* FMulticastInlineDelegate */ __um(OnCosmeticActorSpawned);                           // 0x0580   (0x0010)  
	FScalableFloat                                     CustomizationEnabled;                                       // 0x0590   (0x0028)  
	FScalableFloat                                     CosmeticsLoadoutFXLoopTime;                                 // 0x05B8   (0x0028)  
	unsigned char                                      UnknownData06_5[0x18];                                      // 0x05E0   (0x0018)  MISSED
	SDK_UNDEFINED(16,12442) /* FMulticastInlineDelegate */ __um(OnEngineAudioUpdated);                             // 0x05F8   (0x0010)  
	SDK_UNDEFINED(16,12443) /* FMulticastInlineDelegate */ __um(OnVehicleCosmeticsFailed);                         // 0x0608   (0x0010)  
	unsigned char                                      UnknownData07_6[0x70];                                      // 0x0618   (0x0070)  MISSED


	/// Functions
	// Function /Script/VehicleCosmeticsRuntime.VehicleCosmeticsAssembledMeshUserComponent.VehicleCosmeticsOnCosmeticItemSpawned__DelegateSignature
	// void VehicleCosmeticsOnCosmeticItemSpawned__DelegateSignature(class AVehicleCosmeticsActor* CosmeticActor);           // [0x18a39e4] MulticastDelegate|Public|Delegate 
	// Function /Script/VehicleCosmeticsRuntime.VehicleCosmeticsAssembledMeshUserComponent.SetVehicleCosmeticsEnabled
	// void SetVehicleCosmeticsEnabled(bool bEnabled);                                                                       // [0xa228790] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/VehicleCosmeticsRuntime.VehicleCosmeticsAssembledMeshUserComponent.OnRep_OwningCosmeticsLoadout
	// void OnRep_OwningCosmeticsLoadout();                                                                                  // [0x36e54c4] Final|Native|Protected 
	// Function /Script/VehicleCosmeticsRuntime.VehicleCosmeticsAssembledMeshUserComponent.HandleTireRepaired
	// void HandleTireRepaired(int32_t TireIndex);                                                                           // [0xa2283c8] Final|Native|Protected 
	// Function /Script/VehicleCosmeticsRuntime.VehicleCosmeticsAssembledMeshUserComponent.HandleTirePopped
	// void HandleTirePopped(int32_t TireIndex);                                                                             // [0x28c9de0] Final|Native|Protected 
	// Function /Script/VehicleCosmeticsRuntime.VehicleCosmeticsAssembledMeshUserComponent.HandleOnExplode
	// void HandleOnExplode(class AController* LastDamageInstigator, class AFortAthenaVehicle* Vehicle);                     // [0xa2282f0] Final|Native|Protected 
	// Function /Script/VehicleCosmeticsRuntime.VehicleCosmeticsAssembledMeshUserComponent.HandleModApplied
	// void HandleModApplied(class AFortAthenaVehicle* Vehicle, FGameplayTag& ModTag);                                       // [0xa2280f4] Final|Native|Protected|HasOutParms 
	// Function /Script/VehicleCosmeticsRuntime.VehicleCosmeticsAssembledMeshUserComponent.HandleForceApplyVehicleCosmetics
	// void HandleForceApplyVehicleCosmetics(FSpawnerInfoForcedCosmetics& ForcedCosmetics);                                  // [0xa228060] Final|Native|Protected|HasOutParms 
	// Function /Script/VehicleCosmeticsRuntime.VehicleCosmeticsAssembledMeshUserComponent.HandleDriftStarted
	// void HandleDriftStarted();                                                                                            // [0xa228038] Final|Native|Private 
	// Function /Script/VehicleCosmeticsRuntime.VehicleCosmeticsAssembledMeshUserComponent.HandleDriftFinished
	// void HandleDriftFinished();                                                                                           // [0xa228024] Final|Native|Private 
	// Function /Script/VehicleCosmeticsRuntime.VehicleCosmeticsAssembledMeshUserComponent.HandleBoostStarted
	// void HandleBoostStarted();                                                                                            // [0x34d40b8] Final|Native|Private 
	// Function /Script/VehicleCosmeticsRuntime.VehicleCosmeticsAssembledMeshUserComponent.HandleBoostFinished
	// void HandleBoostFinished();                                                                                           // [0x34cf0a0] Final|Native|Private 
	// Function /Script/VehicleCosmeticsRuntime.VehicleCosmeticsAssembledMeshUserComponent.HandleBodyPhysicsChanges
	// void HandleBodyPhysicsChanges();                                                                                      // [0xa227ffc] Final|Native|Protected 
	// Function /Script/VehicleCosmeticsRuntime.VehicleCosmeticsAssembledMeshUserComponent.HandleBeginVehicleCosmetics
	// void HandleBeginVehicleCosmetics();                                                                                   // [0x28ca284] Final|Native|Private 
	// Function /Script/VehicleCosmeticsRuntime.VehicleCosmeticsAssembledMeshUserComponent.ClientOnCosmeticsFailed
	// void ClientOnCosmeticsFailed(FVehicleCosmeticsFailureInfo ReasonInfo);                                                // [0xa227584] Final|RequiredAPI|Net|NetReliableNative|Event|Private|NetClient 
};

/// Class /Script/VehicleCosmeticsRuntime.VehicleCosmeticsCheatManager
/// Size: 0x0000 (0x000028 - 0x000028)
class UVehicleCosmeticsCheatManager : public UChildCheatManager
{ 
public:


	/// Functions
	// Function /Script/VehicleCosmeticsRuntime.VehicleCosmeticsCheatManager.VehicleCosmeticsDriftEnabled
	// void VehicleCosmeticsDriftEnabled(bool bNewValue);                                                                    // [0xa22883c] Final|Exec|Native|Public 
	// Function /Script/VehicleCosmeticsRuntime.VehicleCosmeticsCheatManager.SetVehicleCosmeticsLoadout_WheelPainted
	// void SetVehicleCosmeticsLoadout_WheelPainted(FString PaintName);                                                      // [0x8b6e5a0] Final|BlueprintAuthorityOnly|Exec|Native|Public 
	// Function /Script/VehicleCosmeticsRuntime.VehicleCosmeticsCheatManager.SetVehicleCosmeticsLoadout_Wheel
	// void SetVehicleCosmeticsLoadout_Wheel(FString WheelName);                                                             // [0x8b6e5a0] Final|BlueprintAuthorityOnly|Exec|Native|Public 
	// Function /Script/VehicleCosmeticsRuntime.VehicleCosmeticsCheatManager.SetVehicleCosmeticsLoadout_SkinPainted
	// void SetVehicleCosmeticsLoadout_SkinPainted(FString PaintName);                                                       // [0x8b6e5a0] Final|BlueprintAuthorityOnly|Exec|Native|Public 
	// Function /Script/VehicleCosmeticsRuntime.VehicleCosmeticsCheatManager.SetVehicleCosmeticsLoadout_SkinColor
	// void SetVehicleCosmeticsLoadout_SkinColor(FString SkinColor);                                                         // [0x8b6e5a0] Final|BlueprintAuthorityOnly|Exec|Native|Public 
	// Function /Script/VehicleCosmeticsRuntime.VehicleCosmeticsCheatManager.SetVehicleCosmeticsLoadout_Skin
	// void SetVehicleCosmeticsLoadout_Skin(FString SkinName);                                                               // [0x8b6e5a0] Final|BlueprintAuthorityOnly|Exec|Native|Public 
	// Function /Script/VehicleCosmeticsRuntime.VehicleCosmeticsCheatManager.SetVehicleCosmeticsLoadout_DriftTrailPainted
	// void SetVehicleCosmeticsLoadout_DriftTrailPainted(FString PaintName);                                                 // [0x8b6e5a0] Final|BlueprintAuthorityOnly|Exec|Native|Public 
	// Function /Script/VehicleCosmeticsRuntime.VehicleCosmeticsCheatManager.SetVehicleCosmeticsLoadout_DriftTrail
	// void SetVehicleCosmeticsLoadout_DriftTrail(FString DriftSmokeName);                                                   // [0x8b6e5a0] Final|BlueprintAuthorityOnly|Exec|Native|Public 
	// Function /Script/VehicleCosmeticsRuntime.VehicleCosmeticsCheatManager.SetVehicleCosmeticsLoadout_BoosterPainted
	// void SetVehicleCosmeticsLoadout_BoosterPainted(FString PaintName);                                                    // [0x8b6e5a0] Final|BlueprintAuthorityOnly|Exec|Native|Public 
	// Function /Script/VehicleCosmeticsRuntime.VehicleCosmeticsCheatManager.SetVehicleCosmeticsLoadout_Booster
	// void SetVehicleCosmeticsLoadout_Booster(FString BoosterName);                                                         // [0x8b6e5a0] Final|BlueprintAuthorityOnly|Exec|Native|Public 
	// Function /Script/VehicleCosmeticsRuntime.VehicleCosmeticsCheatManager.SetVehicleCosmeticsLoadout_BodyPainted
	// void SetVehicleCosmeticsLoadout_BodyPainted(FString PaintName);                                                       // [0x8b6e5a0] Final|BlueprintAuthorityOnly|Exec|Native|Public 
	// Function /Script/VehicleCosmeticsRuntime.VehicleCosmeticsCheatManager.SetVehicleCosmeticsLoadout_BodyColor
	// void SetVehicleCosmeticsLoadout_BodyColor(FString BodyColor);                                                         // [0x8b6e5a0] Final|BlueprintAuthorityOnly|Exec|Native|Public 
	// Function /Script/VehicleCosmeticsRuntime.VehicleCosmeticsCheatManager.SetVehicleCosmeticsLoadout_Body
	// void SetVehicleCosmeticsLoadout_Body(FString BodyName);                                                               // [0x8b6e5a0] Final|BlueprintAuthorityOnly|Exec|Native|Public 
	// Function /Script/VehicleCosmeticsRuntime.VehicleCosmeticsCheatManager.SetVehicleCosmeticsLoadout
	// void SetVehicleCosmeticsLoadout(FString BodyName, FString WheelName, FString SkinName, FString BoosterName, FString DriftTrailName, FString BodyPainted, FString WheelPainted, FString BodyColor, FString SkinColor, FString SkinPainted, FString BoosterPainted, FString DriftTrailPainted); // [0xa2277cc] Final|BlueprintAuthorityOnly|Exec|Native|Public 
	// Function /Script/VehicleCosmeticsRuntime.VehicleCosmeticsCheatManager.SetVehicleCosmetics_DriftTrailPainted
	// void SetVehicleCosmetics_DriftTrailPainted(FString PaintName);                                                        // [0x8b6e5a0] Final|Exec|Native|Public 
	// Function /Script/VehicleCosmeticsRuntime.VehicleCosmeticsCheatManager.SetVehicleCosmetics_BoosterPainted
	// void SetVehicleCosmetics_BoosterPainted(FString PaintName);                                                           // [0x8b6e5a0] Final|Exec|Native|Public 
	// Function /Script/VehicleCosmeticsRuntime.VehicleCosmeticsCheatManager.GrantVehicleCosmeticsLoadedAssets
	// void GrantVehicleCosmeticsLoadedAssets(FString CheatName);                                                            // [0x8b6e5a0] Final|BlueprintAuthorityOnly|Exec|Native|Public 
	// Function /Script/VehicleCosmeticsRuntime.VehicleCosmeticsCheatManager.DumpVehicleCosmeticsPhysicsShapeCollision
	// void DumpVehicleCosmeticsPhysicsShapeCollision();                                                                     // [0xa227ec0] Final|Exec|Native|Public 
	// Function /Script/VehicleCosmeticsRuntime.VehicleCosmeticsCheatManager.DumpVehicleCosmeticsLoadedAssetVariantTokenTypes
	// void DumpVehicleCosmeticsLoadedAssetVariantTokenTypes();                                                              // [0x36203b0] Final|BlueprintAuthorityOnly|Exec|Native|Public 
	// Function /Script/VehicleCosmeticsRuntime.VehicleCosmeticsCheatManager.DumpVehicleCosmeticsLoadedAssetTemplateIds
	// void DumpVehicleCosmeticsLoadedAssetTemplateIds();                                                                    // [0x36203b0] Final|BlueprintAuthorityOnly|Exec|Native|Public 
	// Function /Script/VehicleCosmeticsRuntime.VehicleCosmeticsCheatManager.DumpVehicleCosmeticsLoadedAssetSkeletalMeshes
	// void DumpVehicleCosmeticsLoadedAssetSkeletalMeshes();                                                                 // [0x36203b0] Final|BlueprintAuthorityOnly|Exec|Native|Public 
	// Function /Script/VehicleCosmeticsRuntime.VehicleCosmeticsCheatManager.CustomizeVehicle
	// void CustomizeVehicle(FString BodyName, FString WheelName, FString SkinName, FString BoosterName, FString DriftTrailName, FString BodyPainted, FString WheelPainted, FString BodyColor, FString SkinColor, FString SkinPainted, FString BoosterPainted, FString DriftTrailPainted); // [0xa2277cc] Final|BlueprintAuthorityOnly|Exec|Native|Public 
	// Function /Script/VehicleCosmeticsRuntime.VehicleCosmeticsCheatManager.CustomizeAllVehicles
	// void CustomizeAllVehicles(FString BodyName, FString WheelName, FString SkinName, FString BoosterName, FString DriftTrailName, FString BodyPainted, FString WheelPainted, FString BodyColor, FString SkinColor, FString SkinPainted, FString BoosterPainted, FString DriftTrailPainted); // [0xa2277cc] Final|BlueprintAuthorityOnly|Exec|Native|Public 
	// Function /Script/VehicleCosmeticsRuntime.VehicleCosmeticsCheatManager.ClearVehicleCosmeticsLoadout
	// void ClearVehicleCosmeticsLoadout();                                                                                  // [0x36203b0] Final|BlueprintAuthorityOnly|Exec|Native|Public 
};

/// Class /Script/VehicleCosmeticsRuntime.VehicleCosmeticsInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UVehicleCosmeticsInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/VehicleCosmeticsRuntime.VehicleCosmeticsInterface.ShouldWheelSpinForPreview
	// bool ShouldWheelSpinForPreview();                                                                                     // [0xa228818] RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VehicleCosmeticsRuntime.VehicleCosmeticsInterface.IsUnderthrustActive
	// bool IsUnderthrustActive();                                                                                           // [0xa2284fc] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VehicleCosmeticsRuntime.VehicleCosmeticsInterface.IsTurboActive
	// bool IsTurboActive();                                                                                                 // [0xa2284d4] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VehicleCosmeticsRuntime.VehicleCosmeticsInterface.IsStartlineBoostActive
	// bool IsStartlineBoostActive();                                                                                        // [0xa2284ac] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VehicleCosmeticsRuntime.VehicleCosmeticsInterface.IsKickflipActive
	// bool IsKickflipActive();                                                                                              // [0xa228484] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VehicleCosmeticsRuntime.VehicleCosmeticsInterface.IsJumpAbilityActive
	// bool IsJumpAbilityActive();                                                                                           // [0xa22845c] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VehicleCosmeticsRuntime.VehicleCosmeticsInterface.IsDrifting
	// bool IsDrifting();                                                                                                    // [0x8de3504] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VehicleCosmeticsRuntime.VehicleCosmeticsInterface.IsDriftBoostActive
	// bool IsDriftBoostActive();                                                                                            // [0x3d54878] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VehicleCosmeticsRuntime.VehicleCosmeticsInterface.GetWheelItemName
	// FName GetWheelItemName();                                                                                             // [0xa227fd0] RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VehicleCosmeticsRuntime.VehicleCosmeticsInterface.GetTurboItemName
	// FName GetTurboItemName();                                                                                             // [0xa227fa4] RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VehicleCosmeticsRuntime.VehicleCosmeticsInterface.GetDriftTrailItemName
	// FName GetDriftTrailItemName();                                                                                        // [0x864cba4] RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VehicleCosmeticsRuntime.VehicleCosmeticsInterface.GetDraftingAppliedBonusSpeed
	// float GetDraftingAppliedBonusSpeed();                                                                                 // [0xa227f1c] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VehicleCosmeticsRuntime.VehicleCosmeticsInterface.GetBodyItemName
	// FName GetBodyItemName();                                                                                              // [0x28d2d7c] RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/VehicleCosmeticsRuntime.VehicleCosmeticsItemDefinition
/// Size: 0x0030 (0x0001E0 - 0x000210)
class UVehicleCosmeticsItemDefinition : public UAssembledMeshSchema
{ 
public:
	SDK_UNDEFINED(16,12444) /* TArray<TWeakObjectPtr<UClass*>> */ __um(CosmeticAttachments);                       // 0x01E0   (0x0010)  
	SDK_UNDEFINED(16,12445) /* TArray<FString> */      __um(CheatNames);                                           // 0x01F0   (0x0010)  
	SDK_UNDEFINED(16,12446) /* FString */              __um(CheatLoadoutSlotName);                                 // 0x0200   (0x0010)  
};

/// Struct /Script/VehicleCosmeticsRuntime.VehicleCosmeticsCustomizableObjectIntInfo
/// Size: 0x0008 (0x000000 - 0x000008)
struct FVehicleCosmeticsCustomizableObjectIntInfo
{ 
	FName                                              ParameterName;                                              // 0x0000   (0x0004)  
	FName                                              ParameterValue;                                             // 0x0004   (0x0004)  
};

/// Struct /Script/VehicleCosmeticsRuntime.VehicleCosmeticsBodyPhysicsInfo
/// Size: 0x0038 (0x000000 - 0x000038)
struct FVehicleCosmeticsBodyPhysicsInfo
{ 
	FVector                                            CenterOfMass;                                               // 0x0000   (0x0018)  
	SDK_UNDEFINED(32,12447) /* TWeakObjectPtr<UPhysicsAsset*> */ __um(PhysicsAssetOverride);                       // 0x0018   (0x0020)  
};

/// Struct /Script/VehicleCosmeticsRuntime.VehicleCosmeticsBodyPhysicsQueryInfo
/// Size: 0x0080 (0x000000 - 0x000080)
struct FVehicleCosmeticsBodyPhysicsQueryInfo
{ 
	FGameplayTagQuery                                  VehicleTagQuery;                                            // 0x0000   (0x0048)  
	FVehicleCosmeticsBodyPhysicsInfo                   PhysicsInfo;                                                // 0x0048   (0x0038)  
};

/// Struct /Script/VehicleCosmeticsRuntime.VehicleCosmeticsAnimInfo
/// Size: 0x0068 (0x000000 - 0x000068)
struct FVehicleCosmeticsAnimInfo
{ 
	FGameplayTagQuery                                  VehicleTagQuery;                                            // 0x0000   (0x0048)  
	SDK_UNDEFINED(32,12448) /* TWeakObjectPtr<UClass*> */ __um(AnimClass);                                         // 0x0048   (0x0020)  
};

/// Struct /Script/VehicleCosmeticsRuntime.WheelAttachInfo
/// Size: 0x0090 (0x000000 - 0x000090)
struct FWheelAttachInfo
{ 
	EVehicleWheelLocations                             WheelLocation;                                              // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0xF];                                       // 0x0001   (0x000F)  MISSED
	FBoneSocketTarget                                  WheelSocket;                                                // 0x0010   (0x0080)  
};

/// Struct /Script/VehicleCosmeticsRuntime.BoosterAttachInfo
/// Size: 0x0080 (0x000000 - 0x000080)
struct FBoosterAttachInfo
{ 
	FBoneSocketTarget                                  BoosterSocket;                                              // 0x0000   (0x0080)  
};

/// Struct /Script/VehicleCosmeticsRuntime.VehicleCosmeticsBodyWindowInfo
/// Size: 0x0018 (0x000000 - 0x000018)
struct FVehicleCosmeticsBodyWindowInfo
{ 
	FName                                              WindowDataTableParameterName;                               // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	FDataTableRowHandle                                WindowRow;                                                  // 0x0008   (0x0010)  
};

/// Struct /Script/VehicleCosmeticsRuntime.VehicleCosmeticsBodyWindowQueryInfo
/// Size: 0x0060 (0x000000 - 0x000060)
struct FVehicleCosmeticsBodyWindowQueryInfo
{ 
	FGameplayTagQuery                                  VehicleTagQuery;                                            // 0x0000   (0x0048)  
	FVehicleCosmeticsBodyWindowInfo                    WindowInfo;                                                 // 0x0048   (0x0018)  
};

/// Class /Script/VehicleCosmeticsRuntime.VehicleCosmeticsItemDefinition_Body
/// Size: 0x0178 (0x000210 - 0x000388)
class UVehicleCosmeticsItemDefinition_Body : public UVehicleCosmeticsItemDefinition
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0210   (0x0008)  MISSED
	FVehicleCosmeticsCustomizableObjectIntInfo         BodyGroup;                                                  // 0x0218   (0x0008)  
	FName                                              SkinDataTableParameterName;                                 // 0x0220   (0x0004)  
	FName                                              BodyColorParameterName;                                     // 0x0224   (0x0004)  
	FName                                              SkinColorParameterName;                                     // 0x0228   (0x0004)  
	FName                                              PaintedDataTableParameterName;                              // 0x022C   (0x0004)  
	SDK_UNDEFINED(80,12449) /* TMap<FGameplayTag, FVehicleCosmeticsAdditionalParameterInfos> */ __um(AdditionalVariantInfos); // 0x0230   (0x0050)  
	TArray<FVehicleCosmeticsBodyPhysicsQueryInfo>      PhysicsQueryInfos;                                          // 0x0280   (0x0010)  
	TArray<FVehicleCosmeticsAnimInfo>                  AnimInfos;                                                  // 0x0290   (0x0010)  
	SDK_UNDEFINED(32,12450) /* TWeakObjectPtr<USkeleton*> */ __um(WheelAttachSkeletonReference);                   // 0x02A0   (0x0020)  
	TArray<FWheelAttachInfo>                           WheelAttachInfos;                                           // 0x02C0   (0x0010)  
	TArray<FBoosterAttachInfo>                         BoosterAttachInfos;                                         // 0x02D0   (0x0010)  
	SDK_UNDEFINED(32,12451) /* TWeakObjectPtr<UVehicleCosmeticsItemDefinition_Wheel*> */ __um(DefaultWheelItemDef); // 0x02E0   (0x0020)  
	FDataTableRowHandle                                DefaultSkinRow;                                             // 0x0300   (0x0010)  
	SDK_UNDEFINED(32,12452) /* TWeakObjectPtr<UVehicleCosmeticsItemDefinition_EngineAudio*> */ __um(AudioData);    // 0x0310   (0x0020)  
	FGameplayTagQuery                                  BodyTypeTagQuery;                                           // 0x0330   (0x0048)  
	TArray<FVehicleCosmeticsBodyWindowQueryInfo>       WindowQueryInfos;                                           // 0x0378   (0x0010)  
};

/// Class /Script/VehicleCosmeticsRuntime.VehicleCosmeticsItemDefinition_Booster
/// Size: 0x0050 (0x000210 - 0x000260)
class UVehicleCosmeticsItemDefinition_Booster : public UVehicleCosmeticsItemDefinition
{ 
public:
	SDK_UNDEFINED(80,12453) /* TMap<FGameplayTag, FVehicleCosmeticsAdditionalParameterInfos> */ __um(AdditionalVariantInfos); // 0x0210   (0x0050)  
};

/// Class /Script/VehicleCosmeticsRuntime.VehicleCosmeticsItemDefinition_DriftTrail
/// Size: 0x0050 (0x000210 - 0x000260)
class UVehicleCosmeticsItemDefinition_DriftTrail : public UVehicleCosmeticsItemDefinition
{ 
public:
	SDK_UNDEFINED(80,12454) /* TMap<FGameplayTag, FVehicleCosmeticsAdditionalParameterInfos> */ __um(AdditionalVariantInfos); // 0x0210   (0x0050)  
};

/// Class /Script/VehicleCosmeticsRuntime.VehicleAudioCosmeticData
/// Size: 0x0060 (0x000030 - 0x000090)
class UVehicleAudioCosmeticData : public UDataAsset
{ 
public:
	SDK_UNDEFINED(32,12455) /* TWeakObjectPtr<USoundBase*> */ __um(EngineSound);                                   // 0x0030   (0x0020)  
	SDK_UNDEFINED(32,12456) /* TWeakObjectPtr<USoundBase*> */ __um(EngineSound_LowSpec);                           // 0x0050   (0x0020)  
	class USoundBase*                                  EngineIgnitionSound;                                        // 0x0070   (0x0008)  
	class USoundBase*                                  EngineOffSound;                                             // 0x0078   (0x0008)  
	class USoundBase*                                  HornSound;                                                  // 0x0080   (0x0008)  
	bool                                               bIsIP;                                                      // 0x0088   (0x0001)  
	bool                                               bCanIgnoreLoadManagement;                                   // 0x0089   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x008A   (0x0006)  MISSED


	/// Functions
	// Function /Script/VehicleCosmeticsRuntime.VehicleAudioCosmeticData.GetEngineSound
	// TWeakObjectPtr<USoundBase*> GetEngineSound(bool bHighSpec);                                                           // [0x36307c4] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/VehicleCosmeticsRuntime.VehicleCosmeticsItemDefinition_EngineAudio
/// Size: 0x0020 (0x000210 - 0x000230)
class UVehicleCosmeticsItemDefinition_EngineAudio : public UVehicleCosmeticsItemDefinition
{ 
public:
	SDK_UNDEFINED(32,12457) /* TWeakObjectPtr<UVehicleAudioCosmeticData*> */ __um(Data);                           // 0x0210   (0x0020)  
};

/// Struct /Script/VehicleCosmeticsRuntime.VehicleCosmeticsCustomizableObjectFloatInfo
/// Size: 0x0008 (0x000000 - 0x000008)
struct FVehicleCosmeticsCustomizableObjectFloatInfo
{ 
	FName                                              ParameterName;                                              // 0x0000   (0x0004)  
	float                                              ParameterValue;                                             // 0x0004   (0x0004)  
};

/// Struct /Script/VehicleCosmeticsRuntime.VehicleCosmeticsCustomizableObjectColorInfo
/// Size: 0x0014 (0x000000 - 0x000014)
struct FVehicleCosmeticsCustomizableObjectColorInfo
{ 
	FName                                              ParameterName;                                              // 0x0000   (0x0004)  
	FLinearColor                                       ParameterValue;                                             // 0x0004   (0x0010)  
};

/// Struct /Script/VehicleCosmeticsRuntime.VehicleCosmeticsAdditionalParameterInfos
/// Size: 0x0030 (0x000000 - 0x000030)
struct FVehicleCosmeticsAdditionalParameterInfos
{ 
	TArray<FVehicleCosmeticsCustomizableObjectFloatInfo> FloatParameters;                                          // 0x0000   (0x0010)  
	TArray<FVehicleCosmeticsCustomizableObjectIntInfo> IntParameters;                                              // 0x0010   (0x0010)  
	TArray<FVehicleCosmeticsCustomizableObjectColorInfo> ColorParameters;                                          // 0x0020   (0x0010)  
};

/// Class /Script/VehicleCosmeticsRuntime.VehicleCosmeticsItemDefinition_Skin
/// Size: 0x0040 (0x000210 - 0x000250)
class UVehicleCosmeticsItemDefinition_Skin : public UVehicleCosmeticsItemDefinition
{ 
public:
	bool                                               bLockColor;                                                 // 0x0210   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0211   (0x0003)  MISSED
	FLinearColor                                       LockedBodyColor;                                            // 0x0214   (0x0010)  
	FLinearColor                                       LockedSkinColor;                                            // 0x0224   (0x0010)  
	FName                                              PaintedDataTableParameterName;                              // 0x0234   (0x0004)  
	FName                                              PaintedEnumParameterName;                                   // 0x0238   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x023C   (0x0004)  MISSED
	TArray<FVehicleCosmeticsAdditionalParameterInfos>  AdditionalSkinInfos;                                        // 0x0240   (0x0010)  
};

/// Struct /Script/VehicleCosmeticsRuntime.MaterialSlotWithParameterInfo
/// Size: 0x000C (0x000000 - 0x00000C)
struct FMaterialSlotWithParameterInfo
{ 
	FName                                              MaterialSlotName;                                           // 0x0000   (0x0004)  
	FName                                              MaterialParameterName;                                      // 0x0004   (0x0004)  
	float                                              MaterialParameterValue;                                     // 0x0008   (0x0004)  
};

/// Struct /Script/VehicleCosmeticsRuntime.SpinnerWheelInfo
/// Size: 0x0010 (0x000000 - 0x000010)
struct FSpinnerWheelInfo
{ 
	bool                                               bShouldSpin;                                                // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              SpinAccelRate;                                              // 0x0004   (0x0004)  
	float                                              SpinDecelRate;                                              // 0x0008   (0x0004)  
	float                                              SpinMaxSpeed;                                               // 0x000C   (0x0004)  
};

/// Struct /Script/VehicleCosmeticsRuntime.WheelSetupInfo
/// Size: 0x0080 (0x000000 - 0x000080)
struct FWheelSetupInfo
{ 
	EVehicleWheelLocations                             WheelLocation;                                              // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	FVector                                            WheelOffset;                                                // 0x0008   (0x0018)  
	FRotator                                           WheelRotation;                                              // 0x0020   (0x0018)  
	FVector                                            WheelScale;                                                 // 0x0038   (0x0018)  
	TArray<FMaterialSlotWithParameterInfo>             WheelMaterialSlotInfos;                                     // 0x0050   (0x0010)  
	FSpinnerWheelInfo                                  SpinnerWheelInfo;                                           // 0x0060   (0x0010)  
	FVehicleWheelFXInfo                                WheelFXInfo;                                                // 0x0070   (0x0010)  
};

/// Class /Script/VehicleCosmeticsRuntime.VehicleCosmeticsItemDefinition_Wheel
/// Size: 0x0098 (0x000210 - 0x0002A8)
class UVehicleCosmeticsItemDefinition_Wheel : public UVehicleCosmeticsItemDefinition
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0210   (0x0008)  MISSED
	FVehicleCosmeticsCustomizableObjectIntInfo         WheelGroup;                                                 // 0x0218   (0x0008)  
	FName                                              PaintedDataTableParameterName;                              // 0x0220   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0224   (0x0004)  MISSED
	FInstancedStruct                                   WheelTirePoppedInfo;                                        // 0x0228   (0x0010)  
	SDK_UNDEFINED(80,12458) /* TMap<FGameplayTag, FVehicleCosmeticsAdditionalParameterInfos> */ __um(AdditionalVariantInfos); // 0x0238   (0x0050)  
	TArray<FVehicleCosmeticsAnimInfo>                  AnimInfos;                                                  // 0x0288   (0x0010)  
	TArray<FWheelSetupInfo>                            WheelSetupInfos;                                            // 0x0298   (0x0010)  
};

/// Class /Script/VehicleCosmeticsRuntime.VehicleCosmeticsWheelAnimInstance
/// Size: 0x0040 (0x000620 - 0x000660)
class UVehicleCosmeticsWheelAnimInstance : public UVehicleCosmeticsAnimInstance
{ 
public:
	FRotator                                           SpinnerSpin;                                                // 0x0620   (0x0018)  
	unsigned char                                      UnknownData00_6[0x28];                                      // 0x0638   (0x0028)  MISSED
};

/// Struct /Script/VehicleCosmeticsRuntime.VehicleCosmeticsFailureInfo
/// Size: 0x0001 (0x000000 - 0x000001)
struct FVehicleCosmeticsFailureInfo
{ 
	EVehicleCosmeticsFailureReason                     Reason;                                                     // 0x0000   (0x0001)  
};

/// Struct /Script/VehicleCosmeticsRuntime.BouncyChassisVehicleBoxSpringSetup
/// Size: 0x0050 (0x000000 - 0x000050)
struct FBouncyChassisVehicleBoxSpringSetup
{ 
	FVector                                            Strength;                                                   // 0x0000   (0x0018)  
	FVector                                            Damping;                                                    // 0x0018   (0x0018)  
	FVector                                            MaxDisplacement;                                            // 0x0030   (0x0018)  
	float                                              MaxSpeed;                                                   // 0x0048   (0x0004)  
	float                                              Mass;                                                       // 0x004C   (0x0004)  
};

/// Struct /Script/VehicleCosmeticsRuntime.BouncyChassisVehicleBoxSpring
/// Size: 0x00B0 (0x000000 - 0x0000B0)
struct FBouncyChassisVehicleBoxSpring
{ 
	FBouncyChassisVehicleBoxSpringSetup                Setup;                                                      // 0x0000   (0x0050)  
	unsigned char                                      UnknownData00_6[0x60];                                      // 0x0050   (0x0060)  MISSED
};

/// Struct /Script/VehicleCosmeticsRuntime.BouncyChassisVehicleInstance
/// Size: 0x0108 (0x000000 - 0x000108)
struct FBouncyChassisVehicleInstance
{ 
	FBouncyChassisVehicleBoxSpring                     Spring;                                                     // 0x0000   (0x00B0)  
	unsigned char                                      UnknownData00_6[0x58];                                      // 0x00B0   (0x0058)  MISSED
};

/// Struct /Script/VehicleCosmeticsRuntime.TirePopInfo
/// Size: 0x0001 (0x000000 - 0x000001)
struct FTirePopInfo
{ 
};

/// Struct /Script/VehicleCosmeticsRuntime.TirePopUsingBoneInfo
/// Size: 0x009F (0x000001 - 0x0000A0)
struct FTirePopUsingBoneInfo : FTirePopInfo
{ 
	SDK_UNDEFINED(32,12459) /* TWeakObjectPtr<USkeleton*> */ __um(WheelSkeletonReference);                         // 0x0000   (0x0020)  
	FBoneSocketTarget                                  WheelBone;                                                  // 0x0020   (0x0080)  
};

/// Struct /Script/VehicleCosmeticsRuntime.TirePopUsingMaterialParameterInfo
/// Size: 0x0017 (0x000001 - 0x000018)
struct FTirePopUsingMaterialParameterInfo : FTirePopInfo
{ 
	TArray<FName>                                      WheelMaterialSlotNames;                                     // 0x0000   (0x0010)  
	FName                                              WheelMaterialParameterName;                                 // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/VehicleCosmeticsRuntime.WheelInfo
/// Size: 0x0080 (0x000000 - 0x000080)
struct FWheelInfo
{ 
	unsigned char                                      UnknownData00_2[0x80];                                      // 0x0000   (0x0080)  MISSED
};

/// Struct /Script/VehicleCosmeticsRuntime.AnimNode_BouncyChassisVehicleController
/// Size: 0x0018 (0x0000C8 - 0x0000E0)
struct FAnimNode_BouncyChassisVehicleController : FAnimNode_SkeletalControlBase
{ 
	FBoneReference                                     ChassisBone;                                                // 0x00C8   (0x000C)  
	FBouncyChassisVehicleState                         BouncyChassis;                                              // 0x00D4   (0x000C)  
};

