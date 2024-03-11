
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: ContextualTraversalRuntime
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: GameplayAbilities
/// dependency: GameplayTags
/// dependency: ModularGameplay

/// Enum /Script/ClamberingCodeRuntime.EPlayerBuiltWallType
/// Size: 0x11
enum class EPlayerBuiltWallType : uint8_t
{
	EPlayerBuiltWallType__Solid                                                      = 0,
	EPlayerBuiltWallType__Windows                                                    = 1,
	EPlayerBuiltWallType__WindowC                                                    = 2,
	EPlayerBuiltWallType__WindowSide                                                 = 3,
	EPlayerBuiltWallType__DoorC                                                      = 4,
	EPlayerBuiltWallType__DoorS                                                      = 5,
	EPlayerBuiltWallType__DoorSide                                                   = 6,
	EPlayerBuiltWallType__Archway                                                    = 7,
	EPlayerBuiltWallType__ArchwayLarge                                               = 8,
	EPlayerBuiltWallType__ArchwayLargeSupport                                        = 9,
	EPlayerBuiltWallType__EPlayerBuiltWallType_MAX                                   = 10
};

/// Enum /Script/ClamberingCodeRuntime.EPlayerBuiltWallMaterialType
/// Size: 0x04
enum class EPlayerBuiltWallMaterialType : uint8_t
{
	EPlayerBuiltWallMaterialType__Wood                                               = 0,
	EPlayerBuiltWallMaterialType__Metal                                              = 1,
	EPlayerBuiltWallMaterialType__Stone                                              = 2,
	EPlayerBuiltWallMaterialType__EPlayerBuiltWallMaterialType_MAX                   = 3
};

/// Enum /Script/ClamberingCodeRuntime.EClamberingType
/// Size: 0x04
enum class EClamberingType : uint8_t
{
	EClamberingType__Invalid                                                         = 0,
	EClamberingType__Ledge                                                           = 1,
	EClamberingType__Window                                                          = 2,
	EClamberingType__EClamberingType_MAX                                             = 3
};

/// Enum /Script/ClamberingCodeRuntime.EClamberingState
/// Size: 0x07
enum class EClamberingState : uint8_t
{
	EClamberingState__Inactive                                                       = 0,
	EClamberingState__Targeting                                                      = 1,
	EClamberingState__Ledge_Moving                                                   = 2,
	EClamberingState__Ledge_Failed                                                   = 3,
	EClamberingState__Window_Moving                                                  = 4,
	EClamberingState__Window_Failed                                                  = 5,
	EClamberingState__EClamberingState_MAX                                           = 6
};

/// Enum /Script/ClamberingCodeRuntime.EClamberingFailedReason
/// Size: 0x14
enum class EClamberingFailedReason : uint8_t
{
	EClamberingFailedReason__None                                                    = 0,
	EClamberingFailedReason__Unknown                                                 = 1,
	EClamberingFailedReason__DebugForced                                             = 2,
	EClamberingFailedReason__OwnerDied                                               = 3,
	EClamberingFailedReason__OwnerDBNO                                               = 4,
	EClamberingFailedReason__OwnerLaunched                                           = 5,
	EClamberingFailedReason__SynchedActionNotStarted                                 = 6,
	EClamberingFailedReason__OwnerTeleported                                         = 7,
	EClamberingFailedReason__Ledge_PlayerTooFar                                      = 8,
	EClamberingFailedReason__Ledge_TargetLocationInvalid                             = 9,
	EClamberingFailedReason__Ledge_TargetActorInvalid                                = 10,
	EClamberingFailedReason__Ledge_TargetActorDestroyed                              = 11,
	EClamberingFailedReason__Ledge_BlockerEncountered                                = 12,
	EClamberingFailedReason__EClamberingFailedReason_MAX                             = 13
};

/// Enum /Script/ClamberingCodeRuntime.EClamberingActivationMode
/// Size: 0x04
enum class EClamberingActivationMode : uint8_t
{
	EClamberingActivationMode__ClientPreference                                      = 0,
	EClamberingActivationMode__ForceAutoClambering                                   = 1,
	EClamberingActivationMode__ForceManualClambering                                 = 2,
	EClamberingActivationMode__EClamberingActivationMode_MAX                         = 3
};

/// Enum /Script/ClamberingCodeRuntime.EClamberingDebugTextAlign
/// Size: 0x04
enum class EClamberingDebugTextAlign : uint8_t
{
	EClamberingDebugTextAlign__Left                                                  = 0,
	EClamberingDebugTextAlign__Right                                                 = 1,
	EClamberingDebugTextAlign__Center                                                = 2,
	EClamberingDebugTextAlign__EClamberingDebugTextAlign_MAX                         = 3
};

/// Class /Script/ClamberingCodeRuntime.FortMovementMode_ExtClambering
/// Size: 0x0068 (0x000178 - 0x0001E0)
class UFortMovementMode_ExtClambering : public UFortMovementMode_ExtLogicTraversalBase
{ 
public:
	class UClass*                                      LedgeLaunchCameraMode;                                      // 0x0178   (0x0008)  
	class UClass*                                      WindowClamberCameraMode;                                    // 0x0180   (0x0008)  
	FGameplayTagContainer                              ClamberingTag;                                              // 0x0188   (0x0020)  
	FGameplayTag                                       ClamberingStartedTag;                                       // 0x01A8   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x01AC   (0x0004)  MISSED
	FGameplayTagContainer                              ClamberingFinishedTag;                                      // 0x01B0   (0x0020)  
	class UCameraShakeBase*                            CameraShake;                                                // 0x01D0   (0x0008)  
	float                                              LedgeLaunchSyncPointInterpSpeed;                            // 0x01D8   (0x0004)  
	float                                              LedgeLaunchPlayerCollideBounceSpeed;                        // 0x01DC   (0x0004)  


	/// Functions
	// Function /Script/ClamberingCodeRuntime.FortMovementMode_ExtClambering.BP_GetClamberLocation
	// FVector BP_GetClamberLocation();                                                                                      // [0x3361dd8] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ClamberingCodeRuntime.FortMovementMode_ExtClambering.BP_GetAnimationMontageInformation
	// void BP_GetAnimationMontageInformation(FClamberMontageInput& Context, class UAnimMontage*& AnimMontage, FName& StartSectionName, FName& MontageMiddleSectionName); // [0x18a39e4] Event|Public|HasOutParms|BlueprintEvent 
};

/// Class /Script/ClamberingCodeRuntime.InstancedLedgeActor
/// Size: 0x0058 (0x000298 - 0x0002F0)
class AInstancedLedgeActor : public AFortClientOnlyActor
{ 
public:
	class UInstancedStaticMeshComponent*               InstancedStaticMeshComponent;                               // 0x0298   (0x0008)  
	unsigned char                                      UnknownData00_6[0x50];                                      // 0x02A0   (0x0050)  MISSED


	/// Functions
	// Function /Script/ClamberingCodeRuntime.InstancedLedgeActor.BP_OnRemoveInstance
	// void BP_OnRemoveInstance(FTransform& LedgeTransform, int32_t InstanceIndex);                                          // [0x18a39e4] Event|Protected|HasOutParms|HasDefaults|BlueprintEvent 
	// Function /Script/ClamberingCodeRuntime.InstancedLedgeActor.BP_OnAddInstance
	// void BP_OnAddInstance(FTransform& LedgeTransform, int32_t InstanceIndex);                                             // [0x18a39e4] Event|Protected|HasOutParms|HasDefaults|BlueprintEvent 
};

/// Class /Script/ClamberingCodeRuntime.LedgeLaunchWorldSubsystem
/// Size: 0x0170 (0x000030 - 0x0001A0)
class ULedgeLaunchWorldSubsystem : public UBuildingWallSubsystem
{ 
public:
	SDK_UNDEFINED(32,12411) /* TWeakObjectPtr<UPBWLedgeConfigurationData*> */ __um(ConfigurationData);             // 0x0030   (0x0020)  
	SDK_UNDEFINED(32,12412) /* TWeakObjectPtr<UClass*> */ __um(InstancedLedgeActorClass);                          // 0x0050   (0x0020)  
	class UPBWLedgeConfigurationData*                  CachedConfigurationData;                                    // 0x0070   (0x0008)  
	class AInstancedLedgeActor*                        InstancedLedgeActor;                                        // 0x0078   (0x0008)  
	SDK_UNDEFINED(80,12413) /* TMap<UClass*, FLedgeLaunchConfigEntry> */ __um(CachedLedgeLaunchMap);               // 0x0080   (0x0050)  
	unsigned char                                      UnknownData00_6[0xD0];                                      // 0x00D0   (0x00D0)  MISSED


	/// Functions
	// Function /Script/ClamberingCodeRuntime.LedgeLaunchWorldSubsystem.OnWallDied
	// void OnWallDied(float Damage, FGameplayTagContainer& DamageTags, FVector Momentum, FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, FGameplayEffectContextHandle EffectContext); // [0x2fea59c] Final|Native|Protected|HasOutParms|HasDefaults 
};

/// Class /Script/ClamberingCodeRuntime.PBWLedgeConfigurationData
/// Size: 0x0190 (0x000030 - 0x0001C0)
class UPBWLedgeConfigurationData : public UDataAsset
{ 
public:
	SDK_UNDEFINED(80,12414) /* TMap<EPlayerBuiltWallType, TWeakObjectPtr<UClass*>> */ __um(MetalWalls);            // 0x0030   (0x0050)  
	SDK_UNDEFINED(80,12415) /* TMap<EPlayerBuiltWallType, TWeakObjectPtr<UClass*>> */ __um(StoneWalls);            // 0x0080   (0x0050)  
	SDK_UNDEFINED(80,12416) /* TMap<EPlayerBuiltWallType, TWeakObjectPtr<UClass*>> */ __um(WoodWalls);             // 0x00D0   (0x0050)  
	SDK_UNDEFINED(80,12417) /* TMap<EPlayerBuiltWallType, FLedgeLaunchConfigEntry> */ __um(Transforms);            // 0x0120   (0x0050)  
	SDK_UNDEFINED(80,12418) /* TMap<EPlayerBuiltWallMaterialType, FLedgeLaunchTransformConfigEntry> */ __um(PerMaterialTransforms); // 0x0170   (0x0050)  
};

/// Class /Script/ClamberingCodeRuntime.ClamberingAnalytics
/// Size: 0x0000 (0x000028 - 0x000028)
class UClamberingAnalytics : public UObject
{ 
public:
};

/// Struct /Script/ClamberingCodeRuntime.ClamberingTargetingData
/// Size: 0x00E0 (0x000000 - 0x0000E0)
struct FClamberingTargetingData
{ 
	EClamberingType                                    Type;                                                       // 0x0000   (0x0001)  
	bool                                               bValid : 1;                                                 // 0x0001:0 (0x0001)  
	bool                                               bCanStandOnLedge : 1;                                       // 0x0001:1 (0x0001)  
	bool                                               bIsWindow : 1;                                              // 0x0001:2 (0x0001)  
	unsigned char                                      UnknownData00_4[0x6];                                       // 0x0002   (0x0006)  MISSED
	class AActor*                                      SourceActor;                                                // 0x0008   (0x0008)  
	FVector                                            SourceLocation;                                             // 0x0010   (0x0018)  
	FVector                                            SourceAim;                                                  // 0x0028   (0x0018)  
	FVector                                            WallLocation;                                               // 0x0040   (0x0018)  
	FVector                                            WallNormal;                                                 // 0x0058   (0x0018)  
	FVector                                            TargetLocation;                                             // 0x0070   (0x0018)  
	FVector                                            TargetNormal;                                               // 0x0088   (0x0018)  
	class AActor*                                      TargetActor;                                                // 0x00A0   (0x0008)  
	class UPrimitiveComponent*                         TargetActorComponent;                                       // 0x00A8   (0x0008)  
	FVector                                            TargetActorComponentLocation;                               // 0x00B0   (0x0018)  
	FName                                              TargetActorBoneName;                                        // 0x00C8   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x00CC   (0x0004)  MISSED
	TArray<FVector>                                    NextLedgeLaunchWarpPoints;                                  // 0x00D0   (0x0010)  
};

/// Struct /Script/ClamberingCodeRuntime.ReplicatedClamberingTargetingData_SimClient
/// Size: 0x0038 (0x000000 - 0x000038)
struct FReplicatedClamberingTargetingData_SimClient
{ 
	EClamberingType                                    Type;                                                       // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x0001   (0x0001)  MISSED
	uint16_t                                           WallNormalYawQuantized;                                     // 0x0002   (0x0002)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	FVector_NetQuantize100                             TargetLocation;                                             // 0x0008   (0x0018)  
	class AActor*                                      TargetActor;                                                // 0x0020   (0x0008)  
	class UPrimitiveComponent*                         TargetActorComponent;                                       // 0x0028   (0x0008)  
	FName                                              TargetActorBoneName;                                        // 0x0030   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0034   (0x0004)  MISSED
};

/// Struct /Script/ClamberingCodeRuntime.ClamberingInputConfig
/// Size: 0x0350 (0x000000 - 0x000350)
struct FClamberingInputConfig
{ 
	FScalableFloat                                     ClamberActivationHorizontalRange;                           // 0x0000   (0x0028)  
	FScalableFloat                                     ClamberActivationVerticalRange;                             // 0x0028   (0x0028)  
	FScalableFloat                                     ClamberLookAtThreshold;                                     // 0x0050   (0x0028)  
	FScalableFloat                                     EnableInputDelay;                                           // 0x0078   (0x0028)  
	FScalableFloat                                     QueuedInputWindow;                                          // 0x00A0   (0x0028)  
	FScalableFloat                                     HeldInputDuration;                                          // 0x00C8   (0x0028)  
	EClamberingActivationMode                          ActivationMode;                                             // 0x00F0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x00F1   (0x0007)  MISSED
	FScalableFloat                                     AutoStartMovementThreshold;                                 // 0x00F8   (0x0028)  
	FScalableFloat                                     AutoStartLookAtThreshold;                                   // 0x0120   (0x0028)  
	FScalableFloat                                     AutoStartWallCheckCastRadius;                               // 0x0148   (0x0028)  
	FScalableFloat                                     AutoStartWallCheckHorizontalRange;                          // 0x0170   (0x0028)  
	FScalableFloat                                     AutoStartWallCheckLookAtThresholdMultiplier;                // 0x0198   (0x0028)  
	FScalableFloat                                     TargetInvalidateDistance;                                   // 0x01C0   (0x0028)  
	FScalableFloat                                     TargetAimInvalidateAngle;                                   // 0x01E8   (0x0028)  
	FScalableFloat                                     TargetActorMovementInvalidateDistance;                      // 0x0210   (0x0028)  
	FScalableFloat                                     LedgeLaunchEnabled;                                         // 0x0238   (0x0028)  
	FScalableFloat                                     MaxDirectionalLedgeLaunchAngle;                             // 0x0260   (0x0028)  
	FScalableFloat                                     PBWLedgeLaunchMaxHorizontalTranslation;                     // 0x0288   (0x0028)  
	FScalableFloat                                     DefaultLedgeLaunchVerticalTranslation;                      // 0x02B0   (0x0028)  
	FScalableFloat                                     PBWLedgeLaunchVerticalTranslation;                          // 0x02D8   (0x0028)  
	FScalableFloat                                     PBWNextLedgeLaunchVerticalTranslation;                      // 0x0300   (0x0028)  
	FScalableFloat                                     LedgeLaunchWarpingWindow;                                   // 0x0328   (0x0028)  
};

/// Struct /Script/ClamberingCodeRuntime.ClamberingTargetingConfig_Ledge
/// Size: 0x04D8 (0x000000 - 0x0004D8)
struct FClamberingTargetingConfig_Ledge
{ 
	FScalableFloat                                     ForwardCastDistance;                                        // 0x0000   (0x0028)  
	FScalableFloat                                     ForwardCastRadius;                                          // 0x0028   (0x0028)  
	FScalableFloat                                     FowardCast2D;                                               // 0x0050   (0x0028)  
	FScalableFloat                                     VerticalSurfaceThreshold;                                   // 0x0078   (0x0028)  
	FScalableFloat                                     HorizontalSurfaceThreshold;                                 // 0x00A0   (0x0028)  
	FScalableFloat                                     UpwardDistanceCapsuleHeightMultiplier;                      // 0x00C8   (0x0028)  
	FScalableFloat                                     UpwardStartDistanceCapsuleHeightMultiplier;                 // 0x00F0   (0x0028)  
	FScalableFloat                                     DownwardDistanceCapsuleHeightMultiplier;                    // 0x0118   (0x0028)  
	FScalableFloat                                     MinimumLedgeHeight;                                         // 0x0140   (0x0028)  
	FScalableFloat                                     MinimumLedgeHeightWater;                                    // 0x0168   (0x0028)  
	FScalableFloat                                     FallingSpeedThreshold;                                      // 0x0190   (0x0028)  
	FScalableFloat                                     MinimumLedgeFallingHeight;                                  // 0x01B8   (0x0028)  
	FScalableFloat                                     MinimumLedgeFallingWaterHeight;                             // 0x01E0   (0x0028)  
	FScalableFloat                                     ForwardSphereCastRadius;                                    // 0x0208   (0x0028)  
	FScalableFloat                                     DownwardSphereCastRadius;                                   // 0x0230   (0x0028)  
	FScalableFloat                                     AllowNonWalkableSurfaces;                                   // 0x0258   (0x0028)  
	FScalableFloat                                     TargetValidationEnabled;                                    // 0x0280   (0x0028)  
	FScalableFloat                                     TargetValidationCapsuleRadiusModifier;                      // 0x02A8   (0x0028)  
	FScalableFloat                                     TargetValidationCapsuleHalfHeightModifier;                  // 0x02D0   (0x0028)  
	FScalableFloat                                     TargetValidationCapsuleBottomVerticalOffset;                // 0x02F8   (0x0028)  
	FScalableFloat                                     MinimumLedgeDepth;                                          // 0x0320   (0x0028)  
	FScalableFloat                                     DownwardSweepOffset;                                        // 0x0348   (0x0028)  
	FScalableFloat                                     FutureLedgeLaunchMaxVerticalDetectionRange;                 // 0x0370   (0x0028)  
	FScalableFloat                                     FutureLedgeLaunchMaxHorizontalDetectionRange;               // 0x0398   (0x0028)  
	FScalableFloat                                     FloorCheckCastWallOffset;                                   // 0x03C0   (0x0028)  
	FScalableFloat                                     FloorCheckDownDistance;                                     // 0x03E8   (0x0028)  
	FScalableFloat                                     FloorCheckMaxAllowedAngle;                                  // 0x0410   (0x0028)  
	FScalableFloat                                     WindowTargetingHorizontalSweepBreadth;                      // 0x0438   (0x0028)  
	FScalableFloat                                     WindowTargetingHorizontalSweepHeight;                       // 0x0460   (0x0028)  
	FScalableFloat                                     WindowTargetingHorizontalOpeningSweepBreadth;               // 0x0488   (0x0028)  
	FScalableFloat                                     WindowTargetingVerticalOffsetCheckInWindowFrame;            // 0x04B0   (0x0028)  
};

/// Struct /Script/ClamberingCodeRuntime.ClamberingInputConfig_CachedValues
/// Size: 0x005C (0x000000 - 0x00005C)
struct FClamberingInputConfig_CachedValues
{ 
	unsigned char                                      UnknownData00_2[0x5C];                                      // 0x0000   (0x005C)  MISSED
};

/// Struct /Script/ClamberingCodeRuntime.ClamberingTargetingConfig_Ledge_CachedContextualValues
/// Size: 0x0080 (0x000000 - 0x000080)
struct FClamberingTargetingConfig_Ledge_CachedContextualValues
{ 
	unsigned char                                      UnknownData00_2[0x80];                                      // 0x0000   (0x0080)  MISSED
};

/// Struct /Script/ClamberingCodeRuntime.ClamberingMovementConfig_Ledge
/// Size: 0x0050 (0x000000 - 0x000050)
struct FClamberingMovementConfig_Ledge
{ 
	FScalableFloat                                     duration;                                                   // 0x0000   (0x0028)  
	FScalableFloat                                     BlockCheckTickRate;                                         // 0x0028   (0x0028)  
};

/// Class /Script/ClamberingCodeRuntime.ClamberingComponent
/// Size: 0x0E20 (0x0000A8 - 0x000EC8)
class UClamberingComponent : public UFortPawnOverrideComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x00A8   (0x0008)  MISSED
	EClamberingState                                   LocalClamberingState;                                       // 0x00B0   (0x0001)  
	EClamberingState                                   ReplicatedClamberingState;                                  // 0x00B1   (0x0001)  
	unsigned char                                      UnknownData01_5[0x6];                                       // 0x00B2   (0x0006)  MISSED
	FClamberingTargetingData                           LockedTargetingData;                                        // 0x00B8   (0x00E0)  
	FReplicatedClamberingTargetingData_SimClient       ReplicatedTargetingData;                                    // 0x0198   (0x0038)  
	unsigned char                                      UnknownData02_5[0x8];                                       // 0x01D0   (0x0008)  MISSED
	FScalableFloat                                     ClamberingEnabled;                                          // 0x01D8   (0x0028)  
	FScalableFloat                                     ClamberIndicatorEnabled;                                    // 0x0200   (0x0028)  
	unsigned char                                      UnknownData03_5[0x8];                                       // 0x0228   (0x0008)  MISSED
	FScalableFloat                                     ClamberStartMaxFallingDamageFraction;                       // 0x0230   (0x0028)  
	bool                                               bPerformTargetingWhileWalking;                              // 0x0258   (0x0001)  
	bool                                               bPerformTargetingWhileSwimming;                             // 0x0259   (0x0001)  
	unsigned char                                      UnknownData04_5[0x6];                                       // 0x025A   (0x0006)  MISSED
	FScalableFloat                                     ServerFailDelay;                                            // 0x0260   (0x0028)  
	FScalableFloat                                     ServerValidatePlayerMaxDistance;                            // 0x0288   (0x0028)  
	FClamberingInputConfig                             InputConfig;                                                // 0x02B0   (0x0350)  
	FClamberingTargetingConfig_Ledge                   TargetingConfig_Ledge;                                      // 0x0600   (0x04D8)  
	FClamberingInputConfig_CachedValues                InputConfigCachedValues;                                    // 0x0AD8   (0x005C)  
	FClamberingTargetingConfig_Ledge_CachedContextualValues TargetingConfig_Ledge_CachedContextualValues;          // 0x0B34   (0x0080)  
	unsigned char                                      UnknownData05_5[0x4];                                       // 0x0BB4   (0x0004)  MISSED
	FClamberingMovementConfig_Ledge                    MoveConfig_Ledge;                                           // 0x0BB8   (0x0050)  
	FScalableFloat                                     ClamberSyncTargetLedgeOffset;                               // 0x0C08   (0x0028)  
	FScalableFloat                                     ClamberingMaxAnalyticsEvents;                               // 0x0C30   (0x0028)  
	FScalableFloat                                     SynchedActionFailDelay;                                     // 0x0C58   (0x0028)  
	class UClass*                                      MovementModeExtension;                                      // 0x0C80   (0x0008)  
	FGameplayTag                                       SynchedActionMMETag;                                        // 0x0C88   (0x0004)  
	FName                                              LedgeLaunchSyncPointName;                                   // 0x0C8C   (0x0004)  
	double                                             LastTeleportTime;                                           // 0x0C90   (0x0008)  
	bool                                               bTutorialModeEnabled;                                       // 0x0C98   (0x0001)  
	unsigned char                                      UnknownData06_5[0x7];                                       // 0x0C99   (0x0007)  MISSED
	FClamberingTargetingData                           LocalTargetingData;                                         // 0x0CA0   (0x00E0)  
	FClamberingTargetingData                           ParallelTargetingData;                                      // 0x0D80   (0x00E0)  
	float                                              QueuedInputTimer;                                           // 0x0E60   (0x0004)  
	float                                              InputEnabledTimer;                                          // 0x0E64   (0x0004)  
	bool                                               bJumpInputPressed;                                          // 0x0E68   (0x0001)  
	unsigned char                                      UnknownData07_5[0x3];                                       // 0x0E69   (0x0003)  MISSED
	float                                              JumpHeldInAirTime;                                          // 0x0E6C   (0x0004)  
	unsigned char                                      UnknownData08_5[0x50];                                      // 0x0E70   (0x0050)  MISSED
	FGameplayTag                                       Tag_DisableClambering;                                      // 0x0EC0   (0x0004)  
	unsigned char                                      UnknownData09_6[0x4];                                       // 0x0EC4   (0x0004)  MISSED


	/// Functions
	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.UnregisterMutatorUpdatedDelegate
	// void UnregisterMutatorUpdatedDelegate();                                                                              // [0xa283ae0] Final|Native|Protected 
	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.ShouldShowClamberIndicator
	// bool ShouldShowClamberIndicator();                                                                                    // [0xa283abc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.SetTutorialModeEnabled
	// void SetTutorialModeEnabled(bool bEnabled);                                                                           // [0xa283a3c] Final|Native|Public|BlueprintCallable 
	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.ServerStartClambering
	// void ServerStartClambering(FReplicatedClamberingTargetingData InReplicatedTargetingData, double ClientLastTeleportTime); // [0xa2837b4] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.RegisterMutatorUpdatedDelegate
	// void RegisterMutatorUpdatedDelegate(class APawn* AffectedPawn);                                                       // [0xa2835b0] Final|Native|Protected 
	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.OnRep_ReplicatedTargetingData
	// void OnRep_ReplicatedTargetingData();                                                                                 // [0xa283488] Final|Native|Protected 
	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.OnPlayerStatePawnSet
	// void OnPlayerStatePawnSet(class APlayerState* Player, class APawn* NewPawn, class APawn* OldPawn);                    // [0x3680314] Final|Native|Protected 
	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.OnMutatorUpdated
	// void OnMutatorUpdated();                                                                                              // [0x3588d94] Final|Native|Protected 
	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.NetMulticast_ClamberingLedgeFailed
	// void NetMulticast_ClamberingLedgeFailed(EClamberingFailedReason FailedReason, EClamberingState FailedState);          // [0xa2833c0] Net|NetReliableNative|Event|NetMulticast|Protected 
	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.IsTutorialModeEnabled
	// bool IsTutorialModeEnabled();                                                                                         // [0xa28339c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.IsClamberingEnabled
	// bool IsClamberingEnabled();                                                                                           // [0xa283378] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.IsAutoClamberingEnabled
	// bool IsAutoClamberingEnabled();                                                                                       // [0xa283354] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.HandleTargetingDataValid
	// void HandleTargetingDataValid(FClamberingTargetingData& TargetingData);                                               // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.HandleTargetingDataInvalid
	// void HandleTargetingDataInvalid();                                                                                    // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.HandleTargetActorHealthChanged
	// void HandleTargetActorHealthChanged();                                                                                // [0xa283340] Final|Native|Protected 
	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.HandleTargetActorDestroyed
	// void HandleTargetActorDestroyed(class AActor* Actor);                                                                 // [0xa2832c0] Final|Native|Protected 
	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.HandleOwnerTeleported
	// void HandleOwnerTeleported(class AFortPawn* TeleportedOwner);                                                         // [0x39f81f0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.HandleOwnerMovementModeChanged
	// void HandleOwnerMovementModeChanged(class ACharacter* Character, TEnumAsByte<EMovementMode> PreviousMovementMode, char PreviousCustomMode); // [0x1ce23d8] Final|Native|Protected 
	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.HandleOwnerJumpInput
	// void HandleOwnerJumpInput(bool bPressed);                                                                             // [0xa283240] Final|Native|Protected 
	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.HandleOwnerDied
	// void HandleOwnerDied(class AFortPawn* DeadPawn);                                                                      // [0xa2831c0] Final|Native|Protected 
	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.HandleOwnerDBNO
	// void HandleOwnerDBNO();                                                                                               // [0x326a714] Final|Native|Protected 
	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.HandleOwnerASCInvalidated
	// void HandleOwnerASCInvalidated();                                                                                     // [0x326a750] Final|Native|Protected 
	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.HandleOwnerASCInitialized
	// void HandleOwnerASCInitialized(class UFortAbilitySystemComponent* AbilitySystemComponent, class AFortPlayerPawn* AffectedPawn); // [0x3573f5c] Final|Native|Protected 
	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.HandleClamberingTargetOutOfActivationRange
	// void HandleClamberingTargetOutOfActivationRange();                                                                    // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.HandleClamberingTargetInActivationRange
	// void HandleClamberingTargetInActivationRange();                                                                       // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.DrawDebugHUD
	// void DrawDebugHUD(class AHUD* HUD, class UCanvas* Canvas);                                                            // [0x6cbaff4] Final|Native|Protected 
	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.BP_TutorialModeEnabled
	// void BP_TutorialModeEnabled();                                                                                        // [0x18a39e4] Event|Protected|BlueprintEvent|Const 
	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.BP_TutorialModeDisabled
	// void BP_TutorialModeDisabled();                                                                                       // [0x18a39e4] Event|Protected|BlueprintEvent|Const 
	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.BP_OnMMEStarted
	// void BP_OnMMEStarted();                                                                                               // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.BP_IsValidTargetActor
	// void BP_IsValidTargetActor(class AActor* TargetActor, bool& bIsValidTargetActor);                                     // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent|Const 
	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.BP_HandleSynchedActionStarted
	// void BP_HandleSynchedActionStarted(FSynchedActionInfo& SynchedActionInfo);                                            // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.BP_HandleClamberingStateChanged
	// void BP_HandleClamberingStateChanged(EClamberingState OldClamberingState, EClamberingState NewClamberingState);       // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.BP_CanStartTargeting
	// void BP_CanStartTargeting(bool& bCanStartTargeting);                                                                  // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent|Const 
	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.BP_CanStartClambering
	// void BP_CanStartClambering(bool& bCanStartClambering);                                                                // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent|Const 
};

/// Class /Script/ClamberingCodeRuntime.ClamberingLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UClamberingLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/ClamberingCodeRuntime.ClamberingLibrary.PerformClamberingTargeting
	// bool PerformClamberingTargeting(class ACharacter* Character, FClamberingTargetingData& OutTargetingData);             // [0xa2834bc] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/ClamberingCodeRuntime.FortAthenaMutator_LedgeLaunch
/// Size: 0x0178 (0x000338 - 0x0004B0)
class AFortAthenaMutator_LedgeLaunch : public AFortAthenaMutator
{ 
public:
	unsigned char                                      UnknownData00_3[0x158];                                     // 0x0338   (0x0158)  MISSED
	SDK_UNDEFINED(16,12419) /* TArray<TWeakObjectPtr<ABuildingWall*>> */ __um(CurrentWalls);                       // 0x0490   (0x0010)  
	bool                                               bShouldSpawnLedge;                                          // 0x04A0   (0x0001)  
	unsigned char                                      UnknownData01_6[0xF];                                       // 0x04A1   (0x000F)  MISSED


	/// Functions
	// Function /Script/ClamberingCodeRuntime.FortAthenaMutator_LedgeLaunch.OnRep_bShouldSpawnLedge
	// void OnRep_bShouldSpawnLedge();                                                                                       // [0xa28349c] Final|Native|Private 
};

/// Struct /Script/ClamberingCodeRuntime.FortMovementMode_ClamberingRuntimeData
/// Size: 0x0030 (0x0000D0 - 0x000100)
struct FFortMovementMode_ClamberingRuntimeData : FFortMovementMode_TraversalBaseRuntimeData
{ 
	unsigned char                                      UnknownData00_1[0x38];                                      // 0x00C8   (0x0038)  MISSED
};

/// Struct /Script/ClamberingCodeRuntime.FortMovementMode_ClamberingCreationData
/// Size: 0x0010 (0x000130 - 0x000140)
struct FFortMovementMode_ClamberingCreationData : FFortMovementMode_TraversalBaseCreationData
{ 
	TArray<FSynchedActionWarpPointInfo_Replicated>     LedgeLaunchWarpPointInfos;                                  // 0x0128   (0x0010)  
	int32_t                                            LedgeLaunchWarpPointIndex;                                  // 0x0138   (0x0004)  
	bool                                               bCanStandOnLedge;                                           // 0x013C   (0x0001)  
	bool                                               bHasFixedLedgeLaunchWarpPoint;                              // 0x013D   (0x0001)  
	bool                                               bClamberFromFalling;                                        // 0x013E   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x013F   (0x0001)  MISSED
};

/// Struct /Script/ClamberingCodeRuntime.ClamberMontageInput
/// Size: 0x0050 (0x000000 - 0x000050)
struct FClamberMontageInput
{ 
	FSynchedActionInfo                                 BaseSynchedActionInfo;                                      // 0x0000   (0x0030)  
	FVector                                            FutureLedgeWarpPoint;                                       // 0x0030   (0x0018)  
	bool                                               bIsLedgeLaunch;                                             // 0x0048   (0x0001)  
	bool                                               bHasFutureLedge;                                            // 0x0049   (0x0001)  
	bool                                               bClamberFromFalling;                                        // 0x004A   (0x0001)  
	bool                                               bWindowClamber;                                             // 0x004B   (0x0001)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x004C   (0x0004)  MISSED
};

/// Struct /Script/ClamberingCodeRuntime.LedgeLaunchConfigEntry
/// Size: 0x0020 (0x000000 - 0x000020)
struct FLedgeLaunchConfigEntry
{ 
	TArray<FTransform>                                 LedgeTransforms;                                            // 0x0000   (0x0010)  
	TArray<FTransform>                                 WindowLedgeTransforms;                                      // 0x0010   (0x0010)  
};

/// Struct /Script/ClamberingCodeRuntime.LedgeLaunchTransformConfigEntry
/// Size: 0x0050 (0x000000 - 0x000050)
struct FLedgeLaunchTransformConfigEntry
{ 
	SDK_UNDEFINED(80,12420) /* TMap<EPlayerBuiltWallType, FLedgeLaunchConfigEntry> */ __um(Transforms);            // 0x0000   (0x0050)  
};

/// Struct /Script/ClamberingCodeRuntime.ClamberingTargetingDebugDrawData
/// Size: 0x0028 (0x000000 - 0x000028)
struct FClamberingTargetingDebugDrawData
{ 
	unsigned char                                      UnknownData00_2[0x28];                                      // 0x0000   (0x0028)  MISSED
};

/// Struct /Script/ClamberingCodeRuntime.ClamberingTargetingDebugDrawData_Box
/// Size: 0x0020 (0x000028 - 0x000048)
struct FClamberingTargetingDebugDrawData_Box : FClamberingTargetingDebugDrawData
{ 
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0028   (0x0020)  MISSED
};

/// Struct /Script/ClamberingCodeRuntime.ClamberingTargetingDebugDrawData_Capsule
/// Size: 0x0028 (0x000028 - 0x000050)
struct FClamberingTargetingDebugDrawData_Capsule : FClamberingTargetingDebugDrawData
{ 
	unsigned char                                      UnknownData00_1[0x28];                                      // 0x0028   (0x0028)  MISSED
};

/// Struct /Script/ClamberingCodeRuntime.ClamberingTargetingDebugDrawData_Line
/// Size: 0x0018 (0x000028 - 0x000040)
struct FClamberingTargetingDebugDrawData_Line : FClamberingTargetingDebugDrawData
{ 
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0028   (0x0018)  MISSED
};

/// Struct /Script/ClamberingCodeRuntime.ClamberingTargetingDebugDrawData_Sphere
/// Size: 0x0008 (0x000028 - 0x000030)
struct FClamberingTargetingDebugDrawData_Sphere : FClamberingTargetingDebugDrawData
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0028   (0x0008)  MISSED
};

/// Struct /Script/ClamberingCodeRuntime.ClamberingTargetingDebugDrawData_DirectionalArrow
/// Size: 0x0020 (0x000028 - 0x000048)
struct FClamberingTargetingDebugDrawData_DirectionalArrow : FClamberingTargetingDebugDrawData
{ 
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0028   (0x0020)  MISSED
};

/// Struct /Script/ClamberingCodeRuntime.ClamberingTargetingDebugDrawData_CapsuleCast
/// Size: 0x0020 (0x000050 - 0x000070)
struct FClamberingTargetingDebugDrawData_CapsuleCast : FClamberingTargetingDebugDrawData_Capsule
{ 
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0050   (0x0020)  MISSED
};

/// Struct /Script/ClamberingCodeRuntime.ClamberingTargetingDebugDrawData_SphereCast
/// Size: 0x0018 (0x000030 - 0x000048)
struct FClamberingTargetingDebugDrawData_SphereCast : FClamberingTargetingDebugDrawData_Sphere
{ 
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0030   (0x0018)  MISSED
};

/// Struct /Script/ClamberingCodeRuntime.ClamberingTargetingDebugData
/// Size: 0x0001 (0x000000 - 0x000001)
struct FClamberingTargetingDebugData
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/ClamberingCodeRuntime.ClamberingTargetingDebugData_Ledge
/// Size: 0x0000 (0x000001 - 0x000001)
struct FClamberingTargetingDebugData_Ledge : FClamberingTargetingDebugData
{ 
};

/// Struct /Script/ClamberingCodeRuntime.ReplicatedClamberingTargetingData
/// Size: 0x0078 (0x000000 - 0x000078)
struct FReplicatedClamberingTargetingData
{ 
	EClamberingType                                    Type;                                                       // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	FVector_NetQuantize10                              SourceLocation;                                             // 0x0008   (0x0018)  
	FVector_NetQuantize100                             WallLocation;                                               // 0x0020   (0x0018)  
	uint16_t                                           WallNormalYawQuantized;                                     // 0x0038   (0x0002)  
	uint16_t                                           WallNormalPitchQuantized;                                   // 0x003A   (0x0002)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x003C   (0x0004)  MISSED
	FVector_NetQuantize100                             TargetLocation;                                             // 0x0040   (0x0018)  
	uint16_t                                           TargetNormalYawQuantized;                                   // 0x0058   (0x0002)  
	uint16_t                                           TargetNormalPitchQuantized;                                 // 0x005A   (0x0002)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x005C   (0x0004)  MISSED
	class AActor*                                      TargetActor;                                                // 0x0060   (0x0008)  
	class UPrimitiveComponent*                         TargetActorComponent;                                       // 0x0068   (0x0008)  
	FName                                              TargetActorBoneName;                                        // 0x0070   (0x0004)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x0074   (0x0004)  MISSED
};

/// Struct /Script/ClamberingCodeRuntime.ClamberingAnalytics_ClamberEvent
/// Size: 0x0028 (0x000000 - 0x000028)
struct FClamberingAnalytics_ClamberEvent
{ 
	int32_t                                            MatchTime;                                                  // 0x0000   (0x0004)  
	EClamberingType                                    ClamberType;                                                // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0005   (0x0003)  MISSED
	FVector                                            ClamberLocation;                                            // 0x0008   (0x0018)  
	EClamberingFailedReason                            FailureReason;                                              // 0x0020   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0021   (0x0007)  MISSED
};

/// Struct /Script/ClamberingCodeRuntime.ClamberingAnimationEntry
/// Size: 0x0010 (0x000008 - 0x000018)
struct FClamberingAnimationEntry : FTableRowBase
{ 
	class UAnimMontage*                                Montage;                                                    // 0x0008   (0x0008)  
	float                                              MinClamberHeight;                                           // 0x0010   (0x0004)  
	bool                                               bLedgeLaunch;                                               // 0x0014   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0015   (0x0003)  MISSED
};

