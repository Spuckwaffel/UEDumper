
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
/// dependency: FortniteAI
/// dependency: FortniteGame
/// dependency: FortniteVersion
/// dependency: GameplayAbilities
/// dependency: GameplayTags
/// dependency: ModularGameplay

/// Enum /Script/VaultingCodeRuntime.EHurdleType
/// Size: 0x04
enum class EHurdleType : uint8_t
{
	EHurdleType__Invalid                                                             = 0,
	EHurdleType__HurdleOver                                                          = 1,
	EHurdleType__HurdleOnTop                                                         = 2,
	EHurdleType__EHurdleType_MAX                                                     = 3
};

/// Enum /Script/VaultingCodeRuntime.EHurdleState
/// Size: 0x05
enum class EHurdleState : uint8_t
{
	EHurdleState__Inactive                                                           = 0,
	EHurdleState__Targeting                                                          = 1,
	EHurdleState__HurdleOver                                                         = 2,
	EHurdleState__HurdleOn                                                           = 3,
	EHurdleState__EHurdleState_MAX                                                   = 4
};

/// Class /Script/VaultingCodeRuntime.FortMovementMode_ExtLogicHurdle
/// Size: 0x0050 (0x000178 - 0x0001C8)
class UFortMovementMode_ExtLogicHurdle : public UFortMovementMode_ExtLogicTraversalBase
{ 
public:
	FGameplayTagContainer                              HurdleTag;                                                  // 0x0178   (0x0020)  
	FGameplayTag                                       HurdleStartedTag;                                           // 0x0198   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x019C   (0x0004)  MISSED
	FGameplayTagContainer                              HurdleFinishedTag;                                          // 0x01A0   (0x0020)  
	float                                              DestroyPropsSweepDistance;                                  // 0x01C0   (0x0004)  
	float                                              DestroyPropsWindowSillOffsetDistance;                       // 0x01C4   (0x0004)  


	/// Functions
	// Function /Script/VaultingCodeRuntime.FortMovementMode_ExtLogicHurdle.BP_GetAnimationMontageInformation
	// void BP_GetAnimationMontageInformation(FSynchedActionInfo SynchedActionInfo, EHurdleType Type, bool bIsNarrowOpening, bool bIsCrouched, class UAnimMontage*& AnimMontage, FName& StartSectionName, FName& MontageMiddleSectionName); // [0x18a39e4] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/VaultingCodeRuntime.FortMovementMode_ExtLogicHurdle.BP_DestroyProp
	// void BP_DestroyProp(class ABuildingProp* BuildPropToDestroy);                                                         // [0x18a39e4] Event|Public|BlueprintEvent 
};

/// Class /Script/VaultingCodeRuntime.HurdleNavLinkProcessor
/// Size: 0x0000 (0x000028 - 0x000028)
class UHurdleNavLinkProcessor : public UFortCustomNavLinkProcessor
{ 
public:
};

/// Struct /Script/VaultingCodeRuntime.HurdleTargetingData
/// Size: 0x0130 (0x000000 - 0x000130)
struct FHurdleTargetingData
{ 
	EHurdleType                                        Type;                                                       // 0x0000   (0x0001)  
	EFortSynchedActionEndMovementMode                  EndMovementMode;                                            // 0x0001   (0x0001)  
	bool                                               bValid : 1;                                                 // 0x0002:0 (0x0001)  
	bool                                               bIsNarrowOpening : 1;                                       // 0x0002:1 (0x0001)  
	unsigned char                                      UnknownData00_4[0x5];                                       // 0x0003   (0x0005)  MISSED
	FVector                                            FacingCornerLocation;                                       // 0x0008   (0x0018)  
	FVector                                            FacingCornerNormal;                                         // 0x0020   (0x0018)  
	FVector                                            BackCornerLocation;                                         // 0x0038   (0x0018)  
	FVector                                            FinalLandingPosition;                                       // 0x0050   (0x0018)  
	class AActor*                                      SourceActor;                                                // 0x0068   (0x0008)  
	FVector                                            SourceLocation;                                             // 0x0070   (0x0018)  
	FVector                                            SourceAim;                                                  // 0x0088   (0x0018)  
	FVector                                            WallLocation;                                               // 0x00A0   (0x0018)  
	FVector                                            WallNormal;                                                 // 0x00B8   (0x0018)  
	FVector                                            TargetLocation;                                             // 0x00D0   (0x0018)  
	FVector                                            TargetNormal;                                               // 0x00E8   (0x0018)  
	SDK_UNDEFINED(8,15733) /* TWeakObjectPtr<AActor*> */ __um(TargetActor);                                        // 0x0100   (0x0008)  
	SDK_UNDEFINED(8,15734) /* TWeakObjectPtr<UPrimitiveComponent*> */ __um(TargetActorComponent);                  // 0x0108   (0x0008)  
	FVector                                            TargetActorComponentLocation;                               // 0x0110   (0x0018)  
	FName                                              TargetActorBoneName;                                        // 0x0128   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x012C   (0x0004)  MISSED
};

/// Class /Script/VaultingCodeRuntime.HurdleCameraMode
/// Size: 0x0200 (0x001CA0 - 0x001EA0)
class UHurdleCameraMode : public UFortCameraMode_ThirdPerson
{ 
public:
	FVector                                            StartCameraOriginInterpSpeed;                               // 0x1CA0   (0x0018)  
	FVector                                            ApexCameraOriginInterpSpeed;                                // 0x1CB8   (0x0018)  
	FVector                                            EndCameraOriginInterpSpeed;                                 // 0x1CD0   (0x0018)  
	float                                              ConstantSpeedCameraTrackInterpolationExponent;              // 0x1CE8   (0x0004)  
	float                                              CameraOriginVerticalThreshold;                              // 0x1CEC   (0x0004)  
	float                                              FallingVerticalInterpSpeed;                                 // 0x1CF0   (0x0004)  
	float                                              FallSpeedThreshold;                                         // 0x1CF4   (0x0004)  
	float                                              NonSprintFOV;                                               // 0x1CF8   (0x0004)  
	bool                                               bOverrideSpectatorCamera;                                   // 0x1CFC   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x1CFD   (0x0003)  MISSED
	FHurdleTargetingData                               HurdleTargetingData;                                        // 0x1D00   (0x0130)  
	unsigned char                                      UnknownData01_6[0x70];                                      // 0x1E30   (0x0070)  MISSED
};

/// Struct /Script/VaultingCodeRuntime.HurdleInputConfig
/// Size: 0x0670 (0x000000 - 0x000670)
struct FHurdleInputConfig
{ 
	FScalableFloat                                     CastRadius;                                                 // 0x0000   (0x0028)  
	FScalableFloat                                     MaxAllowedFallDistance;                                     // 0x0028   (0x0028)  
	FScalableFloat                                     ForwardCastDistance_Phase1;                                 // 0x0050   (0x0028)  
	FScalableFloat                                     ForwardCastDistance_Phase1_HurdleFromJog;                   // 0x0078   (0x0028)  
	FScalableFloat                                     ForwardCastDistance_Phase1_ManualHurdle;                    // 0x00A0   (0x0028)  
	FScalableFloat                                     Phase1_WallAngleToleranceFlat;                              // 0x00C8   (0x0028)  
	FScalableFloat                                     Phase1_SweepGroundBufferHeight;                             // 0x00F0   (0x0028)  
	FScalableFloat                                     Phase1_SweepGroundMaxHeight;                                // 0x0118   (0x0028)  
	FScalableFloat                                     Phase1_Floor_WallOffset;                                    // 0x0140   (0x0028)  
	FScalableFloat                                     Phase1_Floor_MinHeightForHurlde;                            // 0x0168   (0x0028)  
	unsigned char                                      UnknownData00_5[0x78];                                      // 0x0190   (0x0078)  MISSED
	FScalableFloat                                     Phase2_UpAngleTolerance;                                    // 0x0208   (0x0028)  
	FScalableFloat                                     Phase2_Floor_MaxHeightForHurlde;                            // 0x0230   (0x0028)  
	unsigned char                                      UnknownData01_5[0x28];                                      // 0x0258   (0x0028)  MISSED
	FScalableFloat                                     Phase3_CapsuleOffset;                                       // 0x0280   (0x0028)  
	FScalableFloat                                     Phase3_ClearanceCapsuleSize;                                // 0x02A8   (0x0028)  
	FScalableFloat                                     Phase3_ForwardCastDistance;                                 // 0x02D0   (0x0028)  
	FScalableFloat                                     Phase3_MinTopClearanceForHurdleOn;                          // 0x02F8   (0x0028)  
	FScalableFloat                                     Phase4_MaxDownDistance;                                     // 0x0320   (0x0028)  
	FScalableFloat                                     Phase4_UpAngleTolerance;                                    // 0x0348   (0x0028)  
	FScalableFloat                                     Phase4_HurdleOnZTolerance;                                  // 0x0370   (0x0028)  
	FScalableFloat                                     Phase5_CapsuleOffset;                                       // 0x0398   (0x0028)  
	FScalableFloat                                     Phase5_ClearanceCapsuleSize;                                // 0x03C0   (0x0028)  
	FScalableFloat                                     FinalResult_GroundAimOffset;                                // 0x03E8   (0x0028)  
	FScalableFloat                                     MaxHurdleDamageDealt;                                       // 0x0410   (0x0028)  
	FScalableFloat                                     SlideBufferTime;                                            // 0x0438   (0x0028)  
	FScalableFloat                                     MinimumSpeedToHurdle;                                       // 0x0460   (0x0028)  
	FScalableFloat                                     MinimumForwardStickDeflection;                              // 0x0488   (0x0028)  
	FScalableFloat                                     RangeToIgnoreMinimumSpeedThreshold;                         // 0x04B0   (0x0028)  
	FScalableFloat                                     MaximumCapsuleRadius;                                       // 0x04D8   (0x0028)  
	FScalableFloat                                     MaximumCapsuleHalfHeight;                                   // 0x0500   (0x0028)  
	FScalableFloat                                     Phase0_HorizontalSweepBreadth;                              // 0x0528   (0x0028)  
	FScalableFloat                                     Phase0_HorizontalSweepHeight;                               // 0x0550   (0x0028)  
	FScalableFloat                                     Phase0_HorizontalOpeningSweepBreadth;                       // 0x0578   (0x0028)  
	FScalableFloat                                     Phase0_VerticalOffsetCheckInWindowFrame;                    // 0x05A0   (0x0028)  
	FScalableFloat                                     Phase0_VerticalOffsetCheckInWindowFrameWithOffsetWindow;    // 0x05C8   (0x0028)  
	FScalableFloat                                     Phase0_MaxHorizontalSweepOffset;                            // 0x05F0   (0x0028)  
	FScalableFloat                                     MaxVerticalAngleFromLookAt;                                 // 0x0618   (0x0028)  
	FScalableFloat                                     MaxVerticalAngleFromLookAtNarrowOpening;                    // 0x0640   (0x0028)  
	FFortReleaseVersion                                MovementModeExtensionVersion;                               // 0x0668   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x066C   (0x0004)  MISSED
};

/// Struct /Script/VaultingCodeRuntime.HurdleInputConfigCache
/// Size: 0x00A8 (0x000000 - 0x0000A8)
struct FHurdleInputConfigCache
{ 
	float                                              CastRadius;                                                 // 0x0000   (0x0004)  
	float                                              MaxAllowedFallDistance;                                     // 0x0004   (0x0004)  
	float                                              ForwardCastDistance_Phase1;                                 // 0x0008   (0x0004)  
	float                                              ForwardCastDistance_Phase1_HurdleFromJog;                   // 0x000C   (0x0004)  
	float                                              ForwardCastDistance_Phase1_ManualHurdle;                    // 0x0010   (0x0004)  
	float                                              Phase1_WallAngleToleranceFlat;                              // 0x0014   (0x0004)  
	float                                              Phase1_SweepGroundBufferHeight;                             // 0x0018   (0x0004)  
	float                                              Phase1_SweepGroundMaxHeight;                                // 0x001C   (0x0004)  
	float                                              Phase1_Floor_WallOffset;                                    // 0x0020   (0x0004)  
	float                                              Phase1_Floor_MinHeightForHurlde;                            // 0x0024   (0x0004)  
	float                                              Phase1_Floor_MaxFloorSearchHeight;                          // 0x0028   (0x0004)  
	float                                              Phase1_MaxVerticalAngleDeviationDownOnNormal;               // 0x002C   (0x0004)  
	float                                              Phase1_StartLocationWallOffset;                             // 0x0030   (0x0004)  
	float                                              Phase2_UpAngleTolerance;                                    // 0x0034   (0x0004)  
	float                                              Phase2_Floor_MaxHeightForHurlde;                            // 0x0038   (0x0004)  
	float                                              Phase2_Floor_HeightCorrectionMinFloorAngle;                 // 0x003C   (0x0004)  
	float                                              Phase3_CapsuleOffset;                                       // 0x0040   (0x0004)  
	float                                              Phase3_ClearanceCapsuleSize;                                // 0x0044   (0x0004)  
	float                                              Phase3_ForwardCastDistance;                                 // 0x0048   (0x0004)  
	float                                              Phase3_MinTopClearanceForHurdleOn;                          // 0x004C   (0x0004)  
	float                                              Phase4_MaxDownDistance;                                     // 0x0050   (0x0004)  
	float                                              Phase4_UpAngleTolerance;                                    // 0x0054   (0x0004)  
	float                                              Phase4_HurdleOnZTolerance;                                  // 0x0058   (0x0004)  
	float                                              Phase5_CapsuleOffset;                                       // 0x005C   (0x0004)  
	float                                              Phase5_ClearanceCapsuleSize;                                // 0x0060   (0x0004)  
	float                                              FinalResult_GroundAimOffset;                                // 0x0064   (0x0004)  
	float                                              MaxHurdleDamageDealt;                                       // 0x0068   (0x0004)  
	float                                              SlideBufferTime;                                            // 0x006C   (0x0004)  
	float                                              MinimumSpeedToHurdle;                                       // 0x0070   (0x0004)  
	float                                              MinimumForwardStickDeflection;                              // 0x0074   (0x0004)  
	float                                              RangeToIgnoreMinimumSpeedThreshold;                         // 0x0078   (0x0004)  
	float                                              MaximumCapsuleRadius;                                       // 0x007C   (0x0004)  
	float                                              MaximumCapsuleHalfHeight;                                   // 0x0080   (0x0004)  
	float                                              Phase0_HorizontalSweepBreadth;                              // 0x0084   (0x0004)  
	float                                              Phase0_HorizontalSweepHeight;                               // 0x0088   (0x0004)  
	float                                              Phase0_HorizontalOpeningSweepBreadth;                       // 0x008C   (0x0004)  
	float                                              Phase0_VerticalOffsetCheckInWindowFrame;                    // 0x0090   (0x0004)  
	float                                              Phase0_VerticalOffsetCheckInWindowFrameWithOffsetWindow;    // 0x0094   (0x0004)  
	float                                              Phase0_MaxHorizontalSweepOffset;                            // 0x0098   (0x0004)  
	float                                              MaxVerticalAngleFromLookAt;                                 // 0x009C   (0x0004)  
	float                                              MaxVerticalAngleFromLookAtNarrowOpening;                    // 0x00A0   (0x0004)  
	FFortReleaseVersion                                MovementModeExtensionVersion;                               // 0x00A4   (0x0004)  
};

/// Struct /Script/VaultingCodeRuntime.ReplicatedHurdleTargetingData
/// Size: 0x0070 (0x000000 - 0x000070)
struct FReplicatedHurdleTargetingData
{ 
	EHurdleType                                        Type;                                                       // 0x0000   (0x0001)  
	EFortSynchedActionEndMovementMode                  EndMovementMode;                                            // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x0002   (0x0006)  MISSED
	FVector_NetQuantize10                              FacingCornerLocation;                                       // 0x0008   (0x0018)  
	FVector_NetQuantize10                              FacingCornerNormal;                                         // 0x0020   (0x0018)  
	FVector_NetQuantize10                              BackCornerLocation;                                         // 0x0038   (0x0018)  
	FVector_NetQuantize10                              FinalLandingPosition;                                       // 0x0050   (0x0018)  
	bool                                               bValid;                                                     // 0x0068   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0069   (0x0007)  MISSED
};

/// Class /Script/VaultingCodeRuntime.HurdleComponent
/// Size: 0x0AE0 (0x0000A8 - 0x000B88)
class UHurdleComponent : public UFortPawnComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x00A8   (0x0008)  MISSED
	FHurdleInputConfig                                 HurdleInputConfig;                                          // 0x00B0   (0x0670)  
	FHurdleInputConfigCache                            HurdleInputConfigCache;                                     // 0x0720   (0x00A8)  
	class UClass*                                      MovementModeExtension;                                      // 0x07C8   (0x0008)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x07D0   (0x0008)  MISSED
	FScalableFloat                                     HurdleEnabled;                                              // 0x07D8   (0x0028)  
	FScalableFloat                                     AutoHurdleEnabled;                                          // 0x0800   (0x0028)  
	unsigned char                                      UnknownData02_5[0x138];                                     // 0x0828   (0x0138)  MISSED
	FReplicatedHurdleTargetingData                     ReplayHurdleTargetingData;                                  // 0x0960   (0x0070)  
	FHurdleTargetingData                               ParallelTargetingData;                                      // 0x09D0   (0x0130)  
	unsigned char                                      UnknownData03_5[0x40];                                      // 0x0B00   (0x0040)  MISSED
	FVector                                            HighlightPositionOffset;                                    // 0x0B40   (0x0018)  
	FVector                                            HighlightNormalMultiplier;                                  // 0x0B58   (0x0018)  
	FVector                                            HighlightScale;                                             // 0x0B70   (0x0018)  


	/// Functions
	// Function /Script/VaultingCodeRuntime.HurdleComponent.UnregisterMutatorUpdatedDelegate
	// void UnregisterMutatorUpdatedDelegate();                                                                              // [0xa283ae0] Final|Native|Protected 
	// Function /Script/VaultingCodeRuntime.HurdleComponent.ShouldShowHurdleIndicator
	// bool ShouldShowHurdleIndicator();                                                                                     // [0xab18e10] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VaultingCodeRuntime.HurdleComponent.RegisterMutatorUpdatedDelegate
	// void RegisterMutatorUpdatedDelegate(class APawn* AffectedPawn);                                                       // [0xab18c0c] Final|Native|Protected 
	// Function /Script/VaultingCodeRuntime.HurdleComponent.OnPlayerStatePawnSet
	// void OnPlayerStatePawnSet(class APlayerState* Player, class APawn* NewPawn, class APawn* OldPawn);                    // [0xab187cc] Final|Native|Protected 
	// Function /Script/VaultingCodeRuntime.HurdleComponent.OnMutatorUpdated
	// void OnMutatorUpdated();                                                                                              // [0xab187b8] Final|Native|Protected 
	// Function /Script/VaultingCodeRuntime.HurdleComponent.IsUsingGamepad
	// bool IsUsingGamepad();                                                                                                // [0xab18740] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VaultingCodeRuntime.HurdleComponent.HandleTargetingDataValid
	// void HandleTargetingDataValid(FHurdleTargetingData& TargetingData);                                                   // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/VaultingCodeRuntime.HurdleComponent.HandleTargetingDataInvalid
	// void HandleTargetingDataInvalid(FHurdleTargetingData& TargetingData);                                                 // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/VaultingCodeRuntime.HurdleComponent.HandleOwnerJumpInput
	// void HandleOwnerJumpInput(bool bPressed);                                                                             // [0xab186c0] Final|Native|Protected 
	// Function /Script/VaultingCodeRuntime.HurdleComponent.HandleNavLinkMoveStarted
	// void HandleNavLinkMoveStarted(FVector LinkEndPoint);                                                                  // [0xab18580] Final|Native|Protected|HasDefaults 
	// Function /Script/VaultingCodeRuntime.HurdleComponent.GetHurdleHighlightTransform
	// FTransform GetHurdleHighlightTransform();                                                                             // [0xab18524] Final|Native|Protected|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VaultingCodeRuntime.HurdleComponent.BP_UseAutoHurdle
	// bool BP_UseAutoHurdle();                                                                                              // [0xab184b0] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VaultingCodeRuntime.HurdleComponent.BP_IsTacticalSprinting
	// bool BP_IsTacticalSprinting();                                                                                        // [0xab18450] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VaultingCodeRuntime.HurdleComponent.BP_CanStartHurdle
	// void BP_CanStartHurdle(bool& OutCanStartHurdle);                                                                      // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent|Const 
};

/// Class /Script/VaultingCodeRuntime.HurdleLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UHurdleLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/VaultingCodeRuntime.HurdleLibrary.PerformHurdleTargeting
	// bool PerformHurdleTargeting(class ACharacter* Character, FHurdleInputConfigCache& HurdleInputConfig, FHurdleTargetingData& OutTargetingData, bool bIsAutoHurdle, FVector OverrideAimDirection); // [0xab188c4] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Struct /Script/VaultingCodeRuntime.FortMovementMode_HurdleRuntimeData
/// Size: 0x0000 (0x0000D0 - 0x0000D0)
struct FFortMovementMode_HurdleRuntimeData : FFortMovementMode_TraversalBaseRuntimeData
{ 
};

/// Struct /Script/VaultingCodeRuntime.FortMovementMode_HurdleCreationData
/// Size: 0x0000 (0x000130 - 0x000130)
struct FFortMovementMode_HurdleCreationData : FFortMovementMode_TraversalBaseCreationData
{ 
};

