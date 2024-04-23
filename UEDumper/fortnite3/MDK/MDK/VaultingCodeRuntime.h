
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

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

/// Class /Script/VaultingCodeRuntime.FortMovementMode_ExtLogicHurdle
/// Size: 0x0050 (0x000178 - 0x0001C8)
class UFortMovementMode_ExtLogicHurdle : public UFortMovementMode_ExtLogicTraversalBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 456;

public:
	SMember(FGameplayTagContainer)                     HurdleTag                                                   OFFSET(getStruct<T>, {0x178, 32, 0, 0})
	SMember(FGameplayTag)                              HurdleStartedTag                                            OFFSET(getStruct<T>, {0x198, 4, 0, 0})
	SMember(FGameplayTagContainer)                     HurdleFinishedTag                                           OFFSET(getStruct<T>, {0x1A0, 32, 0, 0})
	DMember(float)                                     DestroyPropsSweepDistance                                   OFFSET(get<float>, {0x1C0, 4, 0, 0})
	DMember(float)                                     DestroyPropsWindowSillOffsetDistance                        OFFSET(get<float>, {0x1C4, 4, 0, 0})


	/// Functions
	// Function /Script/VaultingCodeRuntime.FortMovementMode_ExtLogicHurdle.BP_GetAnimationMontageInformation
	// void BP_GetAnimationMontageInformation(FSynchedActionInfo SynchedActionInfo, EHurdleType Type, bool bIsNarrowOpening, bool bIsCrouched, class UAnimMontage*& AnimMontage, FName& StartSectionName, FName& MontageMiddleSectionName); // [0x1340978] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/VaultingCodeRuntime.FortMovementMode_ExtLogicHurdle.BP_DestroyProp
	// void BP_DestroyProp(class ABuildingProp* BuildPropToDestroy);                                                            // [0x1340978] Event|Public|BlueprintEvent 
};

/// Class /Script/VaultingCodeRuntime.HurdleNavLinkProcessor
/// Size: 0x0000 (0x000028 - 0x000028)
class UHurdleNavLinkProcessor : public UFortCustomNavLinkProcessor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/VaultingCodeRuntime.HurdleCameraMode
/// Size: 0x0200 (0x001CD0 - 0x001ED0)
class UHurdleCameraMode : public UFortCameraMode_ThirdPerson
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 7888;

public:
	SMember(FVector)                                   StartCameraOriginInterpSpeed                                OFFSET(getStruct<T>, {0x1CD0, 24, 0, 0})
	SMember(FVector)                                   ApexCameraOriginInterpSpeed                                 OFFSET(getStruct<T>, {0x1CE8, 24, 0, 0})
	SMember(FVector)                                   EndCameraOriginInterpSpeed                                  OFFSET(getStruct<T>, {0x1D00, 24, 0, 0})
	DMember(float)                                     ConstantSpeedCameraTrackInterpolationExponent               OFFSET(get<float>, {0x1D18, 4, 0, 0})
	DMember(float)                                     CameraOriginVerticalThreshold                               OFFSET(get<float>, {0x1D1C, 4, 0, 0})
	DMember(float)                                     FallingVerticalInterpSpeed                                  OFFSET(get<float>, {0x1D20, 4, 0, 0})
	DMember(float)                                     FallSpeedThreshold                                          OFFSET(get<float>, {0x1D24, 4, 0, 0})
	DMember(float)                                     NonSprintFOV                                                OFFSET(get<float>, {0x1D28, 4, 0, 0})
	DMember(bool)                                      bOverrideSpectatorCamera                                    OFFSET(get<bool>, {0x1D2C, 1, 0, 0})
	SMember(FHurdleTargetingData)                      HurdleTargetingData                                         OFFSET(getStruct<T>, {0x1D30, 304, 0, 0})
};

/// Class /Script/VaultingCodeRuntime.HurdleComponent
/// Size: 0x0AE8 (0x0000A8 - 0x000B90)
class UHurdleComponent : public UFortPawnComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2960;

public:
	SMember(FHurdleInputConfig)                        HurdleInputConfig                                           OFFSET(getStruct<T>, {0xB0, 1648, 0, 0})
	SMember(FHurdleInputConfigCache)                   HurdleInputConfigCache                                      OFFSET(getStruct<T>, {0x720, 168, 0, 0})
	CMember(class UClass*)                             MovementModeExtension                                       OFFSET(get<T>, {0x7C8, 8, 0, 0})
	SMember(FScalableFloat)                            HurdleEnabled                                               OFFSET(getStruct<T>, {0x7D8, 40, 0, 0})
	SMember(FScalableFloat)                            AutoHurdleEnabled                                           OFFSET(getStruct<T>, {0x800, 40, 0, 0})
	SMember(FReplicatedHurdleTargetingData)            ReplayHurdleTargetingData                                   OFFSET(getStruct<T>, {0x960, 112, 0, 0})
	SMember(FHurdleTargetingData)                      ParallelTargetingData                                       OFFSET(getStruct<T>, {0x9D0, 304, 0, 0})
	SMember(FVector)                                   HighlightPositionOffset                                     OFFSET(getStruct<T>, {0xB40, 24, 0, 0})
	SMember(FVector)                                   HighlightNormalMultiplier                                   OFFSET(getStruct<T>, {0xB58, 24, 0, 0})
	SMember(FVector)                                   HighlightScale                                              OFFSET(getStruct<T>, {0xB70, 24, 0, 0})
	SMember(FGameplayTag)                              CanStartHurdleTag                                           OFFSET(getStruct<T>, {0xB88, 4, 0, 0})
	DMember(bool)                                      bShouldShowHurdleIndicator                                  OFFSET(get<bool>, {0xB8F, 1, 0, 0})


	/// Functions
	// Function /Script/VaultingCodeRuntime.HurdleComponent.UnregisterMutatorUpdatedDelegate
	// void UnregisterMutatorUpdatedDelegate();                                                                                 // [0xb3f3e80] Final|Native|Protected 
	// Function /Script/VaultingCodeRuntime.HurdleComponent.ShouldShowHurdleIndicator
	// bool ShouldShowHurdleIndicator();                                                                                        // [0xbf2003c] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VaultingCodeRuntime.HurdleComponent.RegisterMutatorUpdatedDelegate
	// void RegisterMutatorUpdatedDelegate(class APawn* AffectedPawn);                                                          // [0xbf1fe38] Final|Native|Protected 
	// Function /Script/VaultingCodeRuntime.HurdleComponent.OnPlayerStatePawnSet
	// void OnPlayerStatePawnSet(class APlayerState* Player, class APawn* NewPawn, class APawn* OldPawn);                       // [0xbf1f9bc] Final|Native|Protected 
	// Function /Script/VaultingCodeRuntime.HurdleComponent.OnMutatorUpdated
	// void OnMutatorUpdated();                                                                                                 // [0xbf1f9a8] Final|Native|Protected 
	// Function /Script/VaultingCodeRuntime.HurdleComponent.IsUsingGamepad
	// bool IsUsingGamepad();                                                                                                   // [0xbf1f930] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VaultingCodeRuntime.HurdleComponent.HandleOwnerJumpInput
	// void HandleOwnerJumpInput(bool bPressed);                                                                                // [0xbf1f8b0] Final|Native|Protected 
	// Function /Script/VaultingCodeRuntime.HurdleComponent.HandleNavLinkMoveStarted
	// void HandleNavLinkMoveStarted(FVector LinkEndPoint);                                                                     // [0xbf1f820] Final|Native|Protected|HasDefaults 
	// Function /Script/VaultingCodeRuntime.HurdleComponent.GetHurdleHighlightTransform
	// FTransform GetHurdleHighlightTransform();                                                                                // [0xbf1f7c4] Final|Native|Protected|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VaultingCodeRuntime.HurdleComponent.BP_UseAutoHurdle
	// bool BP_UseAutoHurdle();                                                                                                 // [0xbf1f750] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VaultingCodeRuntime.HurdleComponent.BP_UpdateHurdleHighlight
	// void BP_UpdateHurdleHighlight();                                                                                         // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Script/VaultingCodeRuntime.HurdleComponent.BP_ShowHurdleInputPrompt
	// void BP_ShowHurdleInputPrompt(bool bVisible);                                                                            // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Script/VaultingCodeRuntime.HurdleComponent.BP_IsTacticalSprinting
	// bool BP_IsTacticalSprinting();                                                                                           // [0xbf1f6f0] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VaultingCodeRuntime.HurdleComponent.BP_CreateHurdleHighlight
	// void BP_CreateHurdleHighlight(FHurdleTargetingData& TargetingData);                                                      // [0x1340978] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/VaultingCodeRuntime.HurdleComponent.BP_CleanupHurdleIndicator
	// void BP_CleanupHurdleIndicator();                                                                                        // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Script/VaultingCodeRuntime.HurdleComponent.BP_CanStartHurdle
	// void BP_CanStartHurdle(bool& OutCanStartHurdle);                                                                         // [0x1340978] Event|Protected|HasOutParms|BlueprintEvent|Const 
};

/// Class /Script/VaultingCodeRuntime.HurdleLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UHurdleLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/VaultingCodeRuntime.HurdleLibrary.PerformHurdleTargeting
	// bool PerformHurdleTargeting(class ACharacter* Character, FHurdleInputConfigCache& HurdleInputConfig, FHurdleTargetingData& OutTargetingData, bool bIsAutoHurdle, FVector OverrideAimDirection); // [0xbf1fab4] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Struct /Script/VaultingCodeRuntime.FortMovementMode_HurdleRuntimeData
/// Size: 0x0000 (0x0000E0 - 0x0000E0)
class FFortMovementMode_HurdleRuntimeData : public FFortMovementMode_TraversalBaseRuntimeData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	CMember(EHurdleType)                               Type                                                        OFFSET(get<T>, {0xD8, 1, 0, 0})
};

/// Struct /Script/VaultingCodeRuntime.FortMovementMode_HurdleCreationData
/// Size: 0x0000 (0x000130 - 0x000130)
class FFortMovementMode_HurdleCreationData : public FFortMovementMode_TraversalBaseCreationData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	CMember(EHurdleType)                               Type                                                        OFFSET(get<T>, {0x128, 1, 0, 0})
};

/// Struct /Script/VaultingCodeRuntime.HurdleInputConfig
/// Size: 0x0670 (0x000000 - 0x000670)
class FHurdleInputConfig : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
	SMember(FScalableFloat)                            CastRadius                                                  OFFSET(getStruct<T>, {0x0, 40, 0, 0})
	SMember(FScalableFloat)                            MaxAllowedFallDistance                                      OFFSET(getStruct<T>, {0x28, 40, 0, 0})
	SMember(FScalableFloat)                            ForwardCastDistance_Phase1                                  OFFSET(getStruct<T>, {0x50, 40, 0, 0})
	SMember(FScalableFloat)                            ForwardCastDistance_Phase1_HurdleFromJog                    OFFSET(getStruct<T>, {0x78, 40, 0, 0})
	SMember(FScalableFloat)                            ForwardCastDistance_Phase1_ManualHurdle                     OFFSET(getStruct<T>, {0xA0, 40, 0, 0})
	SMember(FScalableFloat)                            Phase1_WallAngleToleranceFlat                               OFFSET(getStruct<T>, {0xC8, 40, 0, 0})
	SMember(FScalableFloat)                            Phase1_SweepGroundBufferHeight                              OFFSET(getStruct<T>, {0xF0, 40, 0, 0})
	SMember(FScalableFloat)                            Phase1_SweepGroundMaxHeight                                 OFFSET(getStruct<T>, {0x118, 40, 0, 0})
	SMember(FScalableFloat)                            Phase1_Floor_WallOffset                                     OFFSET(getStruct<T>, {0x140, 40, 0, 0})
	SMember(FScalableFloat)                            Phase1_Floor_MinHeightForHurlde                             OFFSET(getStruct<T>, {0x168, 40, 0, 0})
	SMember(FScalableFloat)                            Phase2_UpAngleTolerance                                     OFFSET(getStruct<T>, {0x208, 40, 0, 0})
	SMember(FScalableFloat)                            Phase2_Floor_MaxHeightForHurlde                             OFFSET(getStruct<T>, {0x230, 40, 0, 0})
	SMember(FScalableFloat)                            Phase3_CapsuleOffset                                        OFFSET(getStruct<T>, {0x280, 40, 0, 0})
	SMember(FScalableFloat)                            Phase3_ClearanceCapsuleSize                                 OFFSET(getStruct<T>, {0x2A8, 40, 0, 0})
	SMember(FScalableFloat)                            Phase3_ForwardCastDistance                                  OFFSET(getStruct<T>, {0x2D0, 40, 0, 0})
	SMember(FScalableFloat)                            Phase3_MinTopClearanceForHurdleOn                           OFFSET(getStruct<T>, {0x2F8, 40, 0, 0})
	SMember(FScalableFloat)                            Phase4_MaxDownDistance                                      OFFSET(getStruct<T>, {0x320, 40, 0, 0})
	SMember(FScalableFloat)                            Phase4_UpAngleTolerance                                     OFFSET(getStruct<T>, {0x348, 40, 0, 0})
	SMember(FScalableFloat)                            Phase4_HurdleOnZTolerance                                   OFFSET(getStruct<T>, {0x370, 40, 0, 0})
	SMember(FScalableFloat)                            Phase5_CapsuleOffset                                        OFFSET(getStruct<T>, {0x398, 40, 0, 0})
	SMember(FScalableFloat)                            Phase5_ClearanceCapsuleSize                                 OFFSET(getStruct<T>, {0x3C0, 40, 0, 0})
	SMember(FScalableFloat)                            FinalResult_GroundAimOffset                                 OFFSET(getStruct<T>, {0x3E8, 40, 0, 0})
	SMember(FScalableFloat)                            MaxHurdleDamageDealt                                        OFFSET(getStruct<T>, {0x410, 40, 0, 0})
	SMember(FScalableFloat)                            SlideBufferTime                                             OFFSET(getStruct<T>, {0x438, 40, 0, 0})
	SMember(FScalableFloat)                            MinimumSpeedToHurdle                                        OFFSET(getStruct<T>, {0x460, 40, 0, 0})
	SMember(FScalableFloat)                            MinimumForwardStickDeflection                               OFFSET(getStruct<T>, {0x488, 40, 0, 0})
	SMember(FScalableFloat)                            RangeToIgnoreMinimumSpeedThreshold                          OFFSET(getStruct<T>, {0x4B0, 40, 0, 0})
	SMember(FScalableFloat)                            MaximumCapsuleRadius                                        OFFSET(getStruct<T>, {0x4D8, 40, 0, 0})
	SMember(FScalableFloat)                            MaximumCapsuleHalfHeight                                    OFFSET(getStruct<T>, {0x500, 40, 0, 0})
	SMember(FScalableFloat)                            Phase0_HorizontalSweepBreadth                               OFFSET(getStruct<T>, {0x528, 40, 0, 0})
	SMember(FScalableFloat)                            Phase0_HorizontalSweepHeight                                OFFSET(getStruct<T>, {0x550, 40, 0, 0})
	SMember(FScalableFloat)                            Phase0_HorizontalOpeningSweepBreadth                        OFFSET(getStruct<T>, {0x578, 40, 0, 0})
	SMember(FScalableFloat)                            Phase0_VerticalOffsetCheckInWindowFrame                     OFFSET(getStruct<T>, {0x5A0, 40, 0, 0})
	SMember(FScalableFloat)                            Phase0_VerticalOffsetCheckInWindowFrameWithOffsetWindow     OFFSET(getStruct<T>, {0x5C8, 40, 0, 0})
	SMember(FScalableFloat)                            Phase0_MaxHorizontalSweepOffset                             OFFSET(getStruct<T>, {0x5F0, 40, 0, 0})
	SMember(FScalableFloat)                            MaxVerticalAngleFromLookAt                                  OFFSET(getStruct<T>, {0x618, 40, 0, 0})
	SMember(FScalableFloat)                            MaxVerticalAngleFromLookAtNarrowOpening                     OFFSET(getStruct<T>, {0x640, 40, 0, 0})
	SMember(FFortReleaseVersion)                       MovementModeExtensionVersion                                OFFSET(getStruct<T>, {0x668, 4, 0, 0})
};

/// Struct /Script/VaultingCodeRuntime.HurdleInputConfigCache
/// Size: 0x00A8 (0x000000 - 0x0000A8)
class FHurdleInputConfigCache : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	DMember(float)                                     CastRadius                                                  OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     MaxAllowedFallDistance                                      OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     ForwardCastDistance_Phase1                                  OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     ForwardCastDistance_Phase1_HurdleFromJog                    OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     ForwardCastDistance_Phase1_ManualHurdle                     OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     Phase1_WallAngleToleranceFlat                               OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     Phase1_SweepGroundBufferHeight                              OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     Phase1_SweepGroundMaxHeight                                 OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(float)                                     Phase1_Floor_WallOffset                                     OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(float)                                     Phase1_Floor_MinHeightForHurlde                             OFFSET(get<float>, {0x24, 4, 0, 0})
	DMember(float)                                     Phase1_Floor_MaxFloorSearchHeight                           OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(float)                                     Phase1_MaxVerticalAngleDeviationDownOnNormal                OFFSET(get<float>, {0x2C, 4, 0, 0})
	DMember(float)                                     Phase1_StartLocationWallOffset                              OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(float)                                     Phase2_UpAngleTolerance                                     OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     Phase2_Floor_MaxHeightForHurlde                             OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     Phase2_Floor_HeightCorrectionMinFloorAngle                  OFFSET(get<float>, {0x3C, 4, 0, 0})
	DMember(float)                                     Phase3_CapsuleOffset                                        OFFSET(get<float>, {0x40, 4, 0, 0})
	DMember(float)                                     Phase3_ClearanceCapsuleSize                                 OFFSET(get<float>, {0x44, 4, 0, 0})
	DMember(float)                                     Phase3_ForwardCastDistance                                  OFFSET(get<float>, {0x48, 4, 0, 0})
	DMember(float)                                     Phase3_MinTopClearanceForHurdleOn                           OFFSET(get<float>, {0x4C, 4, 0, 0})
	DMember(float)                                     Phase4_MaxDownDistance                                      OFFSET(get<float>, {0x50, 4, 0, 0})
	DMember(float)                                     Phase4_UpAngleTolerance                                     OFFSET(get<float>, {0x54, 4, 0, 0})
	DMember(float)                                     Phase4_HurdleOnZTolerance                                   OFFSET(get<float>, {0x58, 4, 0, 0})
	DMember(float)                                     Phase5_CapsuleOffset                                        OFFSET(get<float>, {0x5C, 4, 0, 0})
	DMember(float)                                     Phase5_ClearanceCapsuleSize                                 OFFSET(get<float>, {0x60, 4, 0, 0})
	DMember(float)                                     FinalResult_GroundAimOffset                                 OFFSET(get<float>, {0x64, 4, 0, 0})
	DMember(float)                                     MaxHurdleDamageDealt                                        OFFSET(get<float>, {0x68, 4, 0, 0})
	DMember(float)                                     SlideBufferTime                                             OFFSET(get<float>, {0x6C, 4, 0, 0})
	DMember(float)                                     MinimumSpeedToHurdle                                        OFFSET(get<float>, {0x70, 4, 0, 0})
	DMember(float)                                     MinimumForwardStickDeflection                               OFFSET(get<float>, {0x74, 4, 0, 0})
	DMember(float)                                     RangeToIgnoreMinimumSpeedThreshold                          OFFSET(get<float>, {0x78, 4, 0, 0})
	DMember(float)                                     MaximumCapsuleRadius                                        OFFSET(get<float>, {0x7C, 4, 0, 0})
	DMember(float)                                     MaximumCapsuleHalfHeight                                    OFFSET(get<float>, {0x80, 4, 0, 0})
	DMember(float)                                     Phase0_HorizontalSweepBreadth                               OFFSET(get<float>, {0x84, 4, 0, 0})
	DMember(float)                                     Phase0_HorizontalSweepHeight                                OFFSET(get<float>, {0x88, 4, 0, 0})
	DMember(float)                                     Phase0_HorizontalOpeningSweepBreadth                        OFFSET(get<float>, {0x8C, 4, 0, 0})
	DMember(float)                                     Phase0_VerticalOffsetCheckInWindowFrame                     OFFSET(get<float>, {0x90, 4, 0, 0})
	DMember(float)                                     Phase0_VerticalOffsetCheckInWindowFrameWithOffsetWindow     OFFSET(get<float>, {0x94, 4, 0, 0})
	DMember(float)                                     Phase0_MaxHorizontalSweepOffset                             OFFSET(get<float>, {0x98, 4, 0, 0})
	DMember(float)                                     MaxVerticalAngleFromLookAt                                  OFFSET(get<float>, {0x9C, 4, 0, 0})
	DMember(float)                                     MaxVerticalAngleFromLookAtNarrowOpening                     OFFSET(get<float>, {0xA0, 4, 0, 0})
	SMember(FFortReleaseVersion)                       MovementModeExtensionVersion                                OFFSET(getStruct<T>, {0xA4, 4, 0, 0})
};

/// Struct /Script/VaultingCodeRuntime.HurdleTargetingData
/// Size: 0x0130 (0x000000 - 0x000130)
class FHurdleTargetingData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	CMember(EHurdleType)                               Type                                                        OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(EFortSynchedActionEndMovementMode)         EndMovementMode                                             OFFSET(get<T>, {0x1, 1, 0, 0})
	DMember(bool)                                      bValid                                                      OFFSET(get<bool>, {0x2, 1, 1, 0})
	DMember(bool)                                      bIsNarrowOpening                                            OFFSET(get<bool>, {0x2, 1, 1, 1})
	SMember(FVector)                                   FacingCornerLocation                                        OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	SMember(FVector)                                   FacingCornerNormal                                          OFFSET(getStruct<T>, {0x20, 24, 0, 0})
	SMember(FVector)                                   BackCornerLocation                                          OFFSET(getStruct<T>, {0x38, 24, 0, 0})
	SMember(FVector)                                   FinalLandingPosition                                        OFFSET(getStruct<T>, {0x50, 24, 0, 0})
	CMember(class AActor*)                             SourceActor                                                 OFFSET(get<T>, {0x68, 8, 0, 0})
	SMember(FVector)                                   SourceLocation                                              OFFSET(getStruct<T>, {0x70, 24, 0, 0})
	SMember(FVector)                                   SourceAim                                                   OFFSET(getStruct<T>, {0x88, 24, 0, 0})
	SMember(FVector)                                   WallLocation                                                OFFSET(getStruct<T>, {0xA0, 24, 0, 0})
	SMember(FVector)                                   WallNormal                                                  OFFSET(getStruct<T>, {0xB8, 24, 0, 0})
	SMember(FVector)                                   TargetLocation                                              OFFSET(getStruct<T>, {0xD0, 24, 0, 0})
	SMember(FVector)                                   TargetNormal                                                OFFSET(getStruct<T>, {0xE8, 24, 0, 0})
	CMember(TWeakObjectPtr<AActor*>)                   TargetActor                                                 OFFSET(get<T>, {0x100, 8, 0, 0})
	CMember(TWeakObjectPtr<UPrimitiveComponent*>)      TargetActorComponent                                        OFFSET(get<T>, {0x108, 8, 0, 0})
	SMember(FVector)                                   TargetActorComponentLocation                                OFFSET(getStruct<T>, {0x110, 24, 0, 0})
	SMember(FName)                                     TargetActorBoneName                                         OFFSET(getStruct<T>, {0x128, 4, 0, 0})
};

/// Struct /Script/VaultingCodeRuntime.ReplicatedHurdleTargetingData
/// Size: 0x0070 (0x000000 - 0x000070)
class FReplicatedHurdleTargetingData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	CMember(EHurdleType)                               Type                                                        OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(EFortSynchedActionEndMovementMode)         EndMovementMode                                             OFFSET(get<T>, {0x1, 1, 0, 0})
	SMember(FVector_NetQuantize10)                     FacingCornerLocation                                        OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	SMember(FVector_NetQuantize10)                     FacingCornerNormal                                          OFFSET(getStruct<T>, {0x20, 24, 0, 0})
	SMember(FVector_NetQuantize10)                     BackCornerLocation                                          OFFSET(getStruct<T>, {0x38, 24, 0, 0})
	SMember(FVector_NetQuantize10)                     FinalLandingPosition                                        OFFSET(getStruct<T>, {0x50, 24, 0, 0})
	DMember(bool)                                      bValid                                                      OFFSET(get<bool>, {0x68, 1, 0, 0})
};

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

