
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: AnimationBudgetAllocator
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: GameplayCameras
/// dependency: LocomotionInitiativeRuntime
/// dependency: ModularGameplay
/// dependency: SlateRHIRenderer
/// dependency: UMG

/// Class /FortUILibrary/Blueprints/PostProcessor/BP_UI_PostProcessBlur.BP_UI_PostProcessBlur_C
/// Size: 0x0000 (0x000040 - 0x000040)
class UBP_UI_PostProcessBlur_C : public USlatePostBufferBlur
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /FortUILibrary/Blueprints/PostProcessor/BP_UI_PostProcessLowBlur.BP_UI_PostProcessLowBlur_C
/// Size: 0x0000 (0x000040 - 0x000040)
class UBP_UI_PostProcessLowBlur_C : public USlatePostBufferBlur
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /FortUILibrary/Blueprints/PostProcessor/WBP_CaptureForPostBufferUpdate.WBP_CaptureForPostBufferUpdate_C
/// Size: 0x0008 (0x0002C8 - 0x0002D0)
class UWBP_CaptureForPostBufferUpdate_C : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 720;

public:
	CMember(class UPostBufferUpdate*)                  PostBufferUpdate                                            OFFSET(get<T>, {0x2C8, 8, 0, 0})
};

/// Class /FortUILibrary/Blueprints/UIKit_FunctionLibrary.UIKit_FunctionLibrary_C
/// Size: 0x0000 (0x000028 - 0x000028)
class UUIKit_FunctionLibrary_C : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /FortUILibrary/Blueprints/UIKit_FunctionLibrary.UIKit_FunctionLibrary_C.FireEventElementInteractedByName
	// void FireEventElementInteractedByName(FString Element Name, class UWidget* WidgetCallingFrom, class UObject* __WorldContext, bool& Success); // [0x246f7d8] Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Blueprints/UIKit_FunctionLibrary.UIKit_FunctionLibrary_C.InstantTransitionToSelected
	// void InstantTransitionToSelected(class UMaterialInstanceDynamic* Mid, class UObject* __WorldContext);                    // [0x246f7d8] Static|Public|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Blueprints/UIKit_FunctionLibrary.UIKit_FunctionLibrary_C.InstantTransitionToEnabled
	// void InstantTransitionToEnabled(class UMaterialInstanceDynamic* Mid, bool IsSelected, class UObject* __WorldContext);    // [0x246f7d8] Static|Public|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Blueprints/UIKit_FunctionLibrary.UIKit_FunctionLibrary_C.InstantTransitionToDisabled
	// void InstantTransitionToDisabled(class UMaterialInstanceDynamic* Mid, bool IsSelected, class UObject* __WorldContext);   // [0x246f7d8] Static|Public|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Blueprints/UIKit_FunctionLibrary.UIKit_FunctionLibrary_C.TransitionToDeselectedFocused
	// void TransitionToDeselectedFocused(class UMaterialInstanceDynamic* Mid, class UObject* __WorldContext);                  // [0x246f7d8] Static|Public|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Blueprints/UIKit_FunctionLibrary.UIKit_FunctionLibrary_C.TransitionToDeselectedIdle
	// void TransitionToDeselectedIdle(class UMaterialInstanceDynamic* Mid, class UObject* __WorldContext);                     // [0x246f7d8] Static|Public|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Blueprints/UIKit_FunctionLibrary.UIKit_FunctionLibrary_C.SetGridSlotNudge
	// void SetGridSlotNudge(class UWidget* Widget, FVector2D Nudge, class UObject* __WorldContext);                            // [0x246f7d8] Static|Public|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Blueprints/UIKit_FunctionLibrary.UIKit_FunctionLibrary_C.SetGridSlotPadding
	// void SetGridSlotPadding(class UWidget* Widget, FMargin Padding, class UObject* __WorldContext);                          // [0x246f7d8] Public|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Blueprints/UIKit_FunctionLibrary.UIKit_FunctionLibrary_C.SetGridSlotLayer
	// void SetGridSlotLayer(class UWidget* Widget, int32_t Layer, class UObject* __WorldContext);                              // [0x246f7d8] Public|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Blueprints/UIKit_FunctionLibrary.UIKit_FunctionLibrary_C.SetGridSlotAlignment
	// void SetGridSlotAlignment(class UWidget* Widget, TEnumAsByte<EHorizontalAlignment> Horizontal, TEnumAsByte<EVerticalAlignment> Vertical, class UObject* __WorldContext); // [0x246f7d8] Public|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Blueprints/UIKit_FunctionLibrary.UIKit_FunctionLibrary_C.SetGridSlotColumnAndRow
	// void SetGridSlotColumnAndRow(class UWidget* Widget, int32_t Row, int32_t Row Span, int32_t Column, int32_t Column Span, class UObject* __WorldContext); // [0x246f7d8] Public|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Blueprints/UIKit_FunctionLibrary.UIKit_FunctionLibrary_C.RemoveWidget
	// void RemoveWidget(class UWidget* Widget, class UObject* __WorldContext);                                                 // [0x246f7d8] Static|Public|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Blueprints/UIKit_FunctionLibrary.UIKit_FunctionLibrary_C.Copy MID Parameter Overrides
	// void Copy MID Parameter Overrides(class UMaterialInstanceDynamic* Target MID, class UMaterialInstanceDynamic* Source MID, class UObject* __WorldContext); // [0x246f7d8] Static|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/Blueprints/InterfacePlayerPawn.InterfacePlayerPawn_C
/// Size: 0x0000 (0x000028 - 0x000028)
class UInterfacePlayerPawn_C : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Game/Blueprints/InterfacePlayerPawn.InterfacePlayerPawn_C.MeleeSwingLeft_End
	// void MeleeSwingLeft_End();                                                                                               // [0x246f7d8] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/InterfacePlayerPawn.InterfacePlayerPawn_C.MeleeSwingRight_End
	// void MeleeSwingRight_End();                                                                                              // [0x246f7d8] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/InterfacePlayerPawn.InterfacePlayerPawn_C.FootStepRight
	// void FootStepRight();                                                                                                    // [0x246f7d8] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/InterfacePlayerPawn.InterfacePlayerPawn_C.FootStepLeft
	// void FootStepLeft();                                                                                                     // [0x246f7d8] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/InterfacePlayerPawn.InterfacePlayerPawn_C.Melee_Effect_Color
	// void Melee_Effect_Color(FVector& Melee_Color_Set);                                                                       // [0x246f7d8] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/InterfacePlayerPawn.InterfacePlayerPawn_C.MeleeSwingLeft
	// void MeleeSwingLeft(bool First Left);                                                                                    // [0x246f7d8] BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/InterfacePlayerPawn.InterfacePlayerPawn_C.MeleeSwingRight
	// void MeleeSwingRight(bool First Right);                                                                                  // [0x246f7d8] BlueprintCallable|BlueprintEvent 
};

/// Class /Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeBase.Athena_PlayerCameraModeBase_C
/// Size: 0x0000 (0x001CD0 - 0x001CD0)
class UAthena_PlayerCameraModeBase_C : public UFortCameraMode_ThirdPerson
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 7376;

public:
};

/// Class /Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeRanged.Athena_PlayerCameraModeRanged_C
/// Size: 0x0000 (0x001CD0 - 0x001CD0)
class UAthena_PlayerCameraModeRanged_C : public UAthena_PlayerCameraModeBase_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 7376;

public:
};

/// Class /Game/Blueprints/Camera/StW/STW_PlayerCameraModeRanged.STW_PlayerCameraModeRanged_C
/// Size: 0x0000 (0x001CD0 - 0x001CD0)
class USTW_PlayerCameraModeRanged_C : public UAthena_PlayerCameraModeRanged_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 7376;

public:
};

/// Class /Game/Blueprints/Camera/Original/PlayerTakeDamage_CameraShake.PlayerTakeDamage_CameraShake_C
/// Size: 0x0000 (0x0001F0 - 0x0001F0)
class UPlayerTakeDamage_CameraShake_C : public ULegacyCameraShake
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 496;

public:
};

/// Class /Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeRangedTargeting.Athena_PlayerCameraModeRangedTargeting_C
/// Size: 0x0000 (0x001CD0 - 0x001CD0)
class UAthena_PlayerCameraModeRangedTargeting_C : public UAthena_PlayerCameraModeBase_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 7376;

public:
};

/// Class /Game/Blueprints/Camera/Athena/Athena_PlayerCameraMode_1P.Athena_PlayerCameraMode_1P_C
/// Size: 0x0000 (0x001CD0 - 0x001CD0)
class UAthena_PlayerCameraMode_1P_C : public UAthena_PlayerCameraModeRangedTargeting_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 7376;

public:
};

/// Class /Game/Blueprints/Camera/Athena/Athena_PlayerCameraMode_Harveting_stock_1P.Athena_PlayerCameraMode_Harveting_stock_1P_C
/// Size: 0x0000 (0x001CD0 - 0x001CD0)
class UAthena_PlayerCameraMode_Harveting_stock_1P_C : public UAthena_PlayerCameraMode_1P_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 7376;

public:
};

/// Class /Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeMelee.Athena_PlayerCameraModeMelee_C
/// Size: 0x0000 (0x001CD0 - 0x001CD0)
class UAthena_PlayerCameraModeMelee_C : public UAthena_PlayerCameraModeBase_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 7376;

public:
};

/// Class /Game/Blueprints/Camera/StW/STW_PlayerCameraModeRangedTargeting.STW_PlayerCameraModeRangedTargeting_C
/// Size: 0x0000 (0x001CD0 - 0x001CD0)
class USTW_PlayerCameraModeRangedTargeting_C : public UAthena_PlayerCameraModeRangedTargeting_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 7376;

public:
};

/// Class /Game/Blueprints/Camera/v2_OverShoulder/v2_PlayerCameraModeBase.v2_PlayerCameraModeBase_C
/// Size: 0x0000 (0x001CD0 - 0x001CD0)
class Uv2_PlayerCameraModeBase_C : public UFortCameraMode_ThirdPerson
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 7376;

public:
};

/// Class /Game/Blueprints/Camera/v2_OverShoulder/v2_PlayerCameraModeRanged.v2_PlayerCameraModeRanged_C
/// Size: 0x0000 (0x001CD0 - 0x001CD0)
class Uv2_PlayerCameraModeRanged_C : public Uv2_PlayerCameraModeBase_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 7376;

public:
};

/// Class /Game/Blueprints/Camera/v2_OverShoulder/v2_PlayerCameraModeTargetingVeryShortRange.v2_PlayerCameraModeTargetingVeryShortRange_C
/// Size: 0x0000 (0x001CD0 - 0x001CD0)
class Uv2_PlayerCameraModeTargetingVeryShortRange_C : public Uv2_PlayerCameraModeRanged_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 7376;

public:
};

/// Class /Game/Blueprints/Camera/v2_OverShoulder/v2_PlayerCameraModeMelee.v2_PlayerCameraModeMelee_C
/// Size: 0x0000 (0x001CD0 - 0x001CD0)
class Uv2_PlayerCameraModeMelee_C : public Uv2_PlayerCameraModeBase_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 7376;

public:
};

/// Class /Game/Blueprints/Camera/Athena/Athena_PlayerCameraFocalPoint.Athena_PlayerCameraFocalPoint_C
/// Size: 0x0000 (0x001CE0 - 0x001CE0)
class UAthena_PlayerCameraFocalPoint_C : public UFortCameraMode_FocalPoint
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 7392;

public:
};

/// Class /Game/Blueprints/Camera/Athena/Athena_PlayerCamera_DBNO.Athena_PlayerCamera_DBNO_C
/// Size: 0x0000 (0x001CD0 - 0x001CD0)
class UAthena_PlayerCamera_DBNO_C : public UAthena_PlayerCameraModeBase_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 7376;

public:
};

/// Class /Game/Blueprints/Camera/Athena/Athena_PlayerCameraMode_WaterSprintBoost.Athena_PlayerCameraMode_WaterSprintBoost_C
/// Size: 0x0000 (0x001CD0 - 0x001CD0)
class UAthena_PlayerCameraMode_WaterSprintBoost_C : public UAthena_PlayerCameraModeBase_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 7376;

public:
};

/// Class /Game/Blueprints/Camera/Original/Ranged3PCamera.Ranged3PCamera_C
/// Size: 0x0000 (0x0001F0 - 0x0001F0)
class URanged3PCamera_C : public UFort3PCam_Default
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 496;

public:
};

/// Class /Game/Blueprints/Camera/v3_MPR/v3_PlayerCameraModeBase.v3_PlayerCameraModeBase_C
/// Size: 0x0000 (0x001CD0 - 0x001CD0)
class Uv3_PlayerCameraModeBase_C : public UFortCameraMode_ThirdPerson
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 7376;

public:
};

/// Class /Game/Blueprints/Camera/v3_MPR/v3_PlayerCameraModeRanged.v3_PlayerCameraModeRanged_C
/// Size: 0x0000 (0x001CD0 - 0x001CD0)
class Uv3_PlayerCameraModeRanged_C : public Uv3_PlayerCameraModeBase_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 7376;

public:
};

/// Class /Game/Blueprints/Camera/v3_MPR/v3_PlayerCameraModeTargetingVeryShortRange.v3_PlayerCameraModeTargetingVeryShortRange_C
/// Size: 0x0000 (0x001CD0 - 0x001CD0)
class Uv3_PlayerCameraModeTargetingVeryShortRange_C : public Uv3_PlayerCameraModeRanged_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 7376;

public:
};

/// Class /Game/Blueprints/Camera/StW/STW_PlayerCameraModeMelee.STW_PlayerCameraModeMelee_C
/// Size: 0x0000 (0x001CD0 - 0x001CD0)
class USTW_PlayerCameraModeMelee_C : public UAthena_PlayerCameraModeMelee_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 7376;

public:
};

/// Class /Game/Blueprints/Camera/Laurent_v1/v1_PlayerCameraModeBase.v1_PlayerCameraModeBase_C
/// Size: 0x0000 (0x001CD0 - 0x001CD0)
class Uv1_PlayerCameraModeBase_C : public UFortCameraMode_ThirdPerson
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 7376;

public:
};

/// Class /Game/Blueprints/Camera/Laurent_v1/v1_PlayerCameraModeTargetingVeryShortRange.v1_PlayerCameraModeTargetingVeryShortRange_C
/// Size: 0x0000 (0x001CD0 - 0x001CD0)
class Uv1_PlayerCameraModeTargetingVeryShortRange_C : public Uv1_PlayerCameraModeBase_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 7376;

public:
};

/// Class /Game/Blueprints/Camera/Laurent_v1/v1_PlayerCameraModeMelee.v1_PlayerCameraModeMelee_C
/// Size: 0x0000 (0x001CD0 - 0x001CD0)
class Uv1_PlayerCameraModeMelee_C : public Uv1_PlayerCameraModeBase_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 7376;

public:
};

/// Class /Game/Blueprints/Camera/Original/Targeting3PCamera_LongRange.Targeting3PCamera_LongRange_C
/// Size: 0x0000 (0x0001F0 - 0x0001F0)
class UTargeting3PCamera_LongRange_C : public UFort3PCam_Targeting
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 496;

public:
};

/// Class /Game/Blueprints/Camera/StW/STW_PlayerCameraModeBase.STW_PlayerCameraModeBase_C
/// Size: 0x0000 (0x001CD0 - 0x001CD0)
class USTW_PlayerCameraModeBase_C : public USTW_PlayerCameraModeMelee_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 7376;

public:
};

/// Class /Game/Blueprints/Camera/v3_MPR/v3_PlayerCameraModeMelee.v3_PlayerCameraModeMelee_C
/// Size: 0x0000 (0x001CD0 - 0x001CD0)
class Uv3_PlayerCameraModeMelee_C : public Uv3_PlayerCameraModeBase_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 7376;

public:
};

/// Class /Game/Blueprints/Camera/Laurent_v1/v1_PlayerCameraModeTargetingPistol.v1_PlayerCameraModeTargetingPistol_C
/// Size: 0x0000 (0x001CD0 - 0x001CD0)
class Uv1_PlayerCameraModeTargetingPistol_C : public Uv1_PlayerCameraModeBase_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 7376;

public:
};

/// Class /Game/Blueprints/Camera/Original/HoverboardCameraMode.HoverboardCameraMode_C
/// Size: 0x0000 (0x001CE0 - 0x001CE0)
class UHoverboardCameraMode_C : public UFortHoverboardCameraMode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 7392;

public:
};

/// Class /Game/Blueprints/Camera/v3_MPR/PlayerCameraMode_DBNO.PlayerCameraMode_DBNO_C
/// Size: 0x0000 (0x001CD0 - 0x001CD0)
class UPlayerCameraMode_DBNO_C : public Uv3_PlayerCameraModeBase_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 7376;

public:
};

/// Class /Game/Blueprints/Camera/Laurent_v1/v1_PlayerCameraModeTargetingScope.v1_PlayerCameraModeTargetingScope_C
/// Size: 0x0000 (0x001CD0 - 0x001CD0)
class Uv1_PlayerCameraModeTargetingScope_C : public Uv1_PlayerCameraModeBase_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 7376;

public:
};

/// Class /Game/Blueprints/Camera/Athena/Athena_PlayerCameraMode_RespawnedAir.Athena_PlayerCameraMode_RespawnedAir_C
/// Size: 0x0000 (0x001CD0 - 0x001CD0)
class UAthena_PlayerCameraMode_RespawnedAir_C : public UFortCameraMode_RespawnedAir
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 7376;

public:
};

/// Class /Game/Blueprints/Camera/v2_OverShoulder/v2_PlayerCameraModeTargetingScope.v2_PlayerCameraModeTargetingScope_C
/// Size: 0x0000 (0x001CD0 - 0x001CD0)
class Uv2_PlayerCameraModeTargetingScope_C : public Uv2_PlayerCameraModeRanged_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 7376;

public:
};

/// Class /Game/Blueprints/Camera/v2_OverShoulder/v2_PlayerCameraModeTargetingPistol.v2_PlayerCameraModeTargetingPistol_C
/// Size: 0x0000 (0x001CD0 - 0x001CD0)
class Uv2_PlayerCameraModeTargetingPistol_C : public Uv2_PlayerCameraModeRanged_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 7376;

public:
};

/// Class /Game/Blueprints/Camera/Laurent_v1/v1_PlayerCameraModeTargetingRifle.v1_PlayerCameraModeTargetingRifle_C
/// Size: 0x0000 (0x001CD0 - 0x001CD0)
class Uv1_PlayerCameraModeTargetingRifle_C : public Uv1_PlayerCameraModeBase_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 7376;

public:
};

/// Class /Game/Blueprints/Camera/Original/CinematicCamera_MatineeTransition.CinematicCamera_MatineeTransition_C
/// Size: 0x0000 (0x000070 - 0x000070)
class UCinematicCamera_MatineeTransition_C : public UFortCinematicCamera
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /Game/Blueprints/Camera/Original/Targeting3PCamera.Targeting3PCamera_C
/// Size: 0x0000 (0x0001F0 - 0x0001F0)
class UTargeting3PCamera_C : public UFort3PCam_Targeting
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 496;

public:
};

/// Class /Game/Blueprints/Camera/Original/Targeting3PCamera_VeryShortRange.Targeting3PCamera_VeryShortRange_C
/// Size: 0x0000 (0x0001F0 - 0x0001F0)
class UTargeting3PCamera_VeryShortRange_C : public UFort3PCam_Targeting
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 496;

public:
};

/// Class /Game/Blueprints/Camera/v2_OverShoulder/v2_PlayerCameraModeTargetingRifle.v2_PlayerCameraModeTargetingRifle_C
/// Size: 0x0000 (0x001CD0 - 0x001CD0)
class Uv2_PlayerCameraModeTargetingRifle_C : public Uv2_PlayerCameraModeRanged_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 7376;

public:
};

/// Class /Game/Blueprints/Camera/v3_MPR/v3_PlayerCameraModeTargetingScope.v3_PlayerCameraModeTargetingScope_C
/// Size: 0x0000 (0x001CD0 - 0x001CD0)
class Uv3_PlayerCameraModeTargetingScope_C : public Uv3_PlayerCameraModeRanged_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 7376;

public:
};

/// Class /Game/Blueprints/Camera/Original/Default3PCamera.Default3PCamera_C
/// Size: 0x0000 (0x0001F0 - 0x0001F0)
class UDefault3PCamera_C : public UFort3PCam_Default
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 496;

public:
};

/// Class /Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeSkydiveDive.Athena_PlayerCameraModeSkydiveDive_C
/// Size: 0x0000 (0x001CD0 - 0x001CD0)
class UAthena_PlayerCameraModeSkydiveDive_C : public UAthena_PlayerCameraModeBase_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 7376;

public:
};

/// Class /Game/Blueprints/Camera/v3_MPR/v3_PlayerCameraModeTargetingAssault.v3_PlayerCameraModeTargetingAssault_C
/// Size: 0x0000 (0x001CD0 - 0x001CD0)
class Uv3_PlayerCameraModeTargetingAssault_C : public Uv3_PlayerCameraModeRanged_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 7376;

public:
};

/// Class /Game/Blueprints/Camera/Athena/Athena_PlayerCameraHoisted.Athena_PlayerCameraHoisted_C
/// Size: 0x0000 (0x001CD0 - 0x001CD0)
class UAthena_PlayerCameraHoisted_C : public UAthena_PlayerCameraModeBase_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 7376;

public:
};

/// Class /Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeSkydiveGlide.Athena_PlayerCameraModeSkydiveGlide_C
/// Size: 0x0000 (0x001CD0 - 0x001CD0)
class UAthena_PlayerCameraModeSkydiveGlide_C : public UAthena_PlayerCameraModeBase_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 7376;

public:
};

/// Class /Game/Blueprints/Camera/Original/Targeting3PCamera_MidRange.Targeting3PCamera_MidRange_C
/// Size: 0x0000 (0x0001F0 - 0x0001F0)
class UTargeting3PCamera_MidRange_C : public UFort3PCam_Targeting
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 496;

public:
};

/// Class /Game/Blueprints/Camera/Original/Targeting3PCamera_Scope.Targeting3PCamera_Scope_C
/// Size: 0x0000 (0x0001F0 - 0x0001F0)
class UTargeting3PCamera_Scope_C : public UFort3PCam_Targeting
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 496;

public:
};

/// Class /Game/Blueprints/Camera/Original/Sniper3PCamera.Sniper3PCamera_C
/// Size: 0x0000 (0x0001F0 - 0x0001F0)
class USniper3PCamera_C : public UFort3PCam_Default
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 496;

public:
};

/// Class /Game/Blueprints/Camera/Laurent_v1/v1_PlayerCameraModeRanged.v1_PlayerCameraModeRanged_C
/// Size: 0x0000 (0x001CD0 - 0x001CD0)
class Uv1_PlayerCameraModeRanged_C : public Uv1_PlayerCameraModeBase_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 7376;

public:
};

/// Class /Game/Blueprints/Camera/v3_MPR/v3_PlayerCameraModeTargetingRifle.v3_PlayerCameraModeTargetingRifle_C
/// Size: 0x0000 (0x001CD0 - 0x001CD0)
class Uv3_PlayerCameraModeTargetingRifle_C : public Uv3_PlayerCameraModeRanged_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 7376;

public:
};

/// Class /Game/Blueprints/Camera/v3_MPR/v3_PlayerCameraModeTargetingPistol.v3_PlayerCameraModeTargetingPistol_C
/// Size: 0x0000 (0x001CD0 - 0x001CD0)
class Uv3_PlayerCameraModeTargetingPistol_C : public Uv3_PlayerCameraModeRanged_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 7376;

public:
};

/// Class /Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeSkydiveParachute.Athena_PlayerCameraModeSkydiveParachute_C
/// Size: 0x0000 (0x001CD0 - 0x001CD0)
class UAthena_PlayerCameraModeSkydiveParachute_C : public UAthena_PlayerCameraModeBase_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 7376;

public:
};

/// Class /Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeTargetingTethered.Athena_PlayerCameraModeTargetingTethered_C
/// Size: 0x0000 (0x001CD0 - 0x001CD0)
class UAthena_PlayerCameraModeTargetingTethered_C : public UAthena_PlayerCameraModeRangedTargeting_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 7376;

public:
};

/// Class /Game/Blueprints/Camera/Original/MainPlayerCamera.MainPlayerCamera_C
/// Size: 0x0000 (0x002E40 - 0x002E40)
class AMainPlayerCamera_C : public AFortPlayerCameraZone
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 11840;

public:
};

/// Class /Game/Blueprints/Camera/FirstPerson/PlayerCameraMode1P.PlayerCameraMode1P_C
/// Size: 0x0000 (0x001CD0 - 0x001CD0)
class UPlayerCameraMode1P_C : public UFortCameraMode_ThirdPerson
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 7376;

public:
};

/// Class /Game/Blueprints/Camera/FirstPerson/PlayerCameraMode1P_Targeting.PlayerCameraMode1P_Targeting_C
/// Size: 0x0000 (0x001CD0 - 0x001CD0)
class UPlayerCameraMode1P_Targeting_C : public UPlayerCameraMode1P_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 7376;

public:
};

/// Class /Game/Blueprints/Camera/Athena/Athena_PlayerCameraMode_HidingProp.Athena_PlayerCameraMode_HidingProp_C
/// Size: 0x0000 (0x001CD0 - 0x001CD0)
class UAthena_PlayerCameraMode_HidingProp_C : public UAthena_PlayerCameraModeBase_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 7376;

public:
};

/// Class /FortWater/Blueprints/LandscapeWaterInfo.LandscapeWaterInfo_C
/// Size: 0x00A8 (0x000290 - 0x000338)
class ALandscapeWaterInfo_C : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 824;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x290, 8, 0, 0})
	CMember(class USceneComponent*)                    DefaultSceneRoot                                            OFFSET(get<T>, {0x298, 8, 0, 0})
	DMember(double)                                    Flood_Water_Level                                           OFFSET(get<double>, {0x2A0, 8, 0, 0})
	CMember(class UTexture2D*)                         Game_Texture__Water_Velocity_and_Height                     OFFSET(get<T>, {0x2A8, 8, 0, 0})
	SMember(FTransform)                                LS_Transform                                                OFFSET(getStruct<T>, {0x2B0, 96, 0, 0})
	SMember(FIntPoint)                                 LS_RT_Res                                                   OFFSET(getStruct<T>, {0x310, 8, 0, 0})
	SMember(FVector2D)                                 Quad_Size                                                   OFFSET(getStruct<T>, {0x318, 16, 0, 0})
	DMember(bool)                                      Use_Terrain_Velocity_and_Height_Texture                     OFFSET(get<bool>, {0x328, 1, 0, 0})
	CMember(class UMaterialInstanceDynamic*)           External_Water_MID_To_Update                                OFFSET(get<T>, {0x330, 8, 0, 0})


	/// Functions
	// Function /FortWater/Blueprints/LandscapeWaterInfo.LandscapeWaterInfo_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /FortWater/Blueprints/LandscapeWaterInfo.LandscapeWaterInfo_C.Set Flood Water Level
	// void Set Flood Water Level();                                                                                            // [0x246f7d8] BlueprintCallable|BlueprintEvent 
	// Function /FortWater/Blueprints/LandscapeWaterInfo.LandscapeWaterInfo_C.ExecuteUbergraph_LandscapeWaterInfo
	// void ExecuteUbergraph_LandscapeWaterInfo(int32_t EntryPoint);                                                            // [0x246f7d8] Final                
};

/// Class /Game/Blueprints/Camera/Athena/Athena_PlayerCameraMode_HidingProp_Teleport.Athena_PlayerCameraMode_HidingProp_Teleport_C
/// Size: 0x0000 (0x001CD0 - 0x001CD0)
class UAthena_PlayerCameraMode_HidingProp_Teleport_C : public UAthena_PlayerCameraModeBase_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 7376;

public:
};

/// Class /Game/Blueprints/Adventures/SpawnTeleporter/BP_TeleportationDrone.BP_TeleportationDrone_C
/// Size: 0x0048 (0x000318 - 0x000360)
class ABP_TeleportationDrone_C : public APawn
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 864;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x318, 8, 0, 0})
	CMember(class USkeletalMeshComponentBudgeted*)     SkeletalMeshComponentBudgeted                               OFFSET(get<T>, {0x320, 8, 0, 0})
	CMember(class USceneComponent*)                    Scene                                                       OFFSET(get<T>, {0x328, 8, 0, 0})
	DMember(double)                                    AnimPlayRate                                                OFFSET(get<double>, {0x330, 8, 0, 0})
	CMember(class UMaterialInstanceDynamic*)           StaticMeshMID                                               OFFSET(get<T>, {0x338, 8, 0, 0})
	DMember(bool)                                      TeleportIn                                                  OFFSET(get<bool>, {0x340, 1, 0, 0})
	CMember(class UParticleSystemComponent*)           CharacterAttached                                           OFFSET(get<T>, {0x348, 8, 0, 0})
	DMember(bool)                                      InLobby                                                     OFFSET(get<bool>, {0x350, 1, 0, 0})
	CMember(class USkeletalMeshComponent*)             Mesh_for_Attachment                                         OFFSET(get<T>, {0x358, 8, 0, 0})


	/// Functions
	// Function /Game/Blueprints/Adventures/SpawnTeleporter/BP_TeleportationDrone.BP_TeleportationDrone_C.Get Spawn Animation
	// class UAnimationAsset* Get Spawn Animation();                                                                            // [0x246f7d8] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Game/Blueprints/Adventures/SpawnTeleporter/BP_TeleportationDrone.BP_TeleportationDrone_C.PlaySpawnAnim
	// void PlaySpawnAnim();                                                                                                    // [0x246f7d8] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/Adventures/SpawnTeleporter/BP_TeleportationDrone.BP_TeleportationDrone_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Game/Blueprints/Adventures/SpawnTeleporter/BP_TeleportationDrone.BP_TeleportationDrone_C.OnSpawnOutAnimEnded
	// void OnSpawnOutAnimEnded(class UAnimMontage* Montage, bool bInterrupted);                                                // [0x246f7d8] BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/Adventures/SpawnTeleporter/BP_TeleportationDrone.BP_TeleportationDrone_C.ReceiveEndPlay
	// void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);                                                          // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Game/Blueprints/Adventures/SpawnTeleporter/BP_TeleportationDrone.BP_TeleportationDrone_C.ReceiveTick
	// void ReceiveTick(float DeltaSeconds);                                                                                    // [0x246f7d8] Event|Public|BlueprintEvent 
	// Function /Game/Blueprints/Adventures/SpawnTeleporter/BP_TeleportationDrone.BP_TeleportationDrone_C.ExecuteUbergraph_BP_TeleportationDrone
	// void ExecuteUbergraph_BP_TeleportationDrone(int32_t EntryPoint);                                                         // [0x246f7d8] Final                
};

/// Class /Game/Blueprints/Adventures/SpawnTeleporter/BP_VictoryDrone.BP_VictoryDrone_C
/// Size: 0x0070 (0x000318 - 0x000388)
class ABP_VictoryDrone_C : public APawn
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 904;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x318, 8, 0, 0})
	CMember(class USkeletalMeshComponentBudgeted*)     SkeletalMeshComponentBudgeted                               OFFSET(get<T>, {0x320, 8, 0, 0})
	CMember(class USceneComponent*)                    Scene                                                       OFFSET(get<T>, {0x328, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  SpawnOutAnimEndedDispatcher                                 OFFSET(getStruct<T>, {0x330, 16, 0, 0})
	DMember(double)                                    AnimPlayRate                                                OFFSET(get<double>, {0x340, 8, 0, 0})
	CMember(class UMaterialInstanceDynamic*)           StaticMeshMID                                               OFFSET(get<T>, {0x348, 8, 0, 0})
	DMember(bool)                                      TeleportIn                                                  OFFSET(get<bool>, {0x350, 1, 0, 0})
	DMember(bool)                                      IsAthena                                                    OFFSET(get<bool>, {0x351, 1, 0, 0})
	CMember(class AFortPawn*)                          TargetPlayer                                                OFFSET(get<T>, {0x358, 8, 0, 0})
	CMember(class UParticleSystemComponent*)           CharacterAttached                                           OFFSET(get<T>, {0x360, 8, 0, 0})
	DMember(bool)                                      InLobby                                                     OFFSET(get<bool>, {0x368, 1, 0, 0})
	DMember(bool)                                      IsNPC                                                       OFFSET(get<bool>, {0x369, 1, 0, 0})
	SMember(FName)                                     AttachPoint                                                 OFFSET(getStruct<T>, {0x36C, 4, 0, 0})
	DMember(bool)                                      isDecoy                                                     OFFSET(get<bool>, {0x370, 1, 0, 0})
	CMember(class USkeletalMeshComponent*)             Mesh_for_Attachment                                         OFFSET(get<T>, {0x378, 8, 0, 0})
	CMember(class USoundBase*)                         SoundOnNPCDeath                                             OFFSET(get<T>, {0x380, 8, 0, 0})


	/// Functions
	// Function /Game/Blueprints/Adventures/SpawnTeleporter/BP_VictoryDrone.BP_VictoryDrone_C.Added Death Audio
	// void Added Death Audio(class USoundBase* Sound to Spawn);                                                                // [0x246f7d8] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/Adventures/SpawnTeleporter/BP_VictoryDrone.BP_VictoryDrone_C.Decoy FX Parameters
	// void Decoy FX Parameters(TArray<FParticleSysParam>& Instance Parameters);                                                // [0x246f7d8] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Blueprints/Adventures/SpawnTeleporter/BP_VictoryDrone.BP_VictoryDrone_C.NPC FX Parameters
	// void NPC FX Parameters(TArray<FParticleSysParam>& Instance Parameters);                                                  // [0x246f7d8] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Blueprints/Adventures/SpawnTeleporter/BP_VictoryDrone.BP_VictoryDrone_C.NotifyTeleportFinishedTriggered
	// void NotifyTeleportFinishedTriggered();                                                                                  // [0x246f7d8] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/Adventures/SpawnTeleporter/BP_VictoryDrone.BP_VictoryDrone_C.PlaySpawnAnim
	// void PlaySpawnAnim();                                                                                                    // [0x246f7d8] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/Adventures/SpawnTeleporter/BP_VictoryDrone.BP_VictoryDrone_C.InitDrone
	// void InitDrone();                                                                                                        // [0x246f7d8] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/Adventures/SpawnTeleporter/BP_VictoryDrone.BP_VictoryDrone_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Game/Blueprints/Adventures/SpawnTeleporter/BP_VictoryDrone.BP_VictoryDrone_C.OnSpawnOutAnimEnded
	// void OnSpawnOutAnimEnded(class UAnimMontage* Montage, bool bInterrupted);                                                // [0x246f7d8] BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/Adventures/SpawnTeleporter/BP_VictoryDrone.BP_VictoryDrone_C.ReceiveTick
	// void ReceiveTick(float DeltaSeconds);                                                                                    // [0x246f7d8] Event|Public|BlueprintEvent 
	// Function /Game/Blueprints/Adventures/SpawnTeleporter/BP_VictoryDrone.BP_VictoryDrone_C.ExecuteUbergraph_BP_VictoryDrone
	// void ExecuteUbergraph_BP_VictoryDrone(int32_t EntryPoint);                                                               // [0x246f7d8] Final                
	// Function /Game/Blueprints/Adventures/SpawnTeleporter/BP_VictoryDrone.BP_VictoryDrone_C.SpawnOutAnimEndedDispatcher__DelegateSignature
	// void SpawnOutAnimEndedDispatcher__DelegateSignature(class ABP_VictoryDrone_C* Drone);                                    // [0x246f7d8] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/Blueprints/Camera/Athena/Athena_PlayerCameraMode_Harveting_1blade_1P.Athena_PlayerCameraMode_Harveting_1blade_1P_C
/// Size: 0x0000 (0x001CD0 - 0x001CD0)
class UAthena_PlayerCameraMode_Harveting_1blade_1P_C : public UAthena_PlayerCameraMode_1P_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 7376;

public:
};

/// Class /Game/Blueprints/Interfaces/BlueprintDebuggingInterface.BlueprintDebuggingInterface_C
/// Size: 0x0000 (0x000028 - 0x000028)
class UBlueprintDebuggingInterface_C : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Game/Blueprints/Interfaces/BlueprintDebuggingInterface.BlueprintDebuggingInterface_C.GetBlueprintLogLevel
	// void GetBlueprintLogLevel(TEnumAsByte<BlueprintLogLevel>& BlueprintLogLevel);                                            // [0x246f7d8] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/Blueprints/MacroLibraries/BuildingFunctionLibrary.BuildingFunctionLibrary_C
/// Size: 0x0000 (0x000028 - 0x000028)
class UBuildingFunctionLibrary_C : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Game/Blueprints/MacroLibraries/BuildingFunctionLibrary.BuildingFunctionLibrary_C.RequestComponentResource
	// void RequestComponentResource(class UCreativeIslandResourceManagerComponent* ResourceManager, FName ResourceTag, class UActorComponent* Component, FVector WorldLocation, class UObject* __WorldContext); // [0x246f7d8] Static|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/MacroLibraries/BuildingFunctionLibrary.BuildingFunctionLibrary_C.SweepAgainstActorTypes
	// void SweepAgainstActorTypes(class AActor* TestActor, FVector StartLocation, FVector EndLocation, double SweepRadius, TArray<TEnumAsByte<EObjectTypeQuery>>& SweepObjectTypes, TArray<UClass*>& ActorClassFilters, class UObject* __WorldContext, bool& Overlapped); // [0x246f7d8] Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Blueprints/MacroLibraries/BuildingFunctionLibrary.BuildingFunctionLibrary_C.ShouldLogForInstigator
	// void ShouldLogForInstigator(TEnumAsByte<BlueprintLogLevel> Instance Log Level, class UObject* Instigator, class UObject* __WorldContext, bool& Should Log?); // [0x246f7d8] Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/MacroLibraries/BuildingFunctionLibrary.BuildingFunctionLibrary_C.LogString
	// void LogString(TEnumAsByte<BlueprintLogLevel> Instance Log Level, FString LogString, bool PrintToScreen, class UObject* Instigator, class UObject* __WorldContext); // [0x246f7d8] Static|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /LocomotionInitiative/Blueprints/LocomotionInitiativeComponentBP.LocomotionInitiativeComponentBP_C
/// Size: 0x0000 (0x0000F8 - 0x0000F8)
class ULocomotionInitiativeComponentBP_C : public ULocomotionInitiativeComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
};

/// Class /Game/Blueprints/Components/GSC_MiniMapDataOverride.GSC_MiniMapDataOverride_C
/// Size: 0x0000 (0x0000C0 - 0x0000C0)
class UGSC_MiniMapDataOverride_C : public UFortGameStateComponent_MiniMapDataOverride
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
};

/// Enum /Game/Blueprints/MacroLibraries/BlueprintLogLevel.BlueprintLogLevel
/// Size: 0x07
enum class BlueprintLogLevel : uint8_t
{
	BlueprintLogLevel__NewEnumerator0                                                = 0,
	BlueprintLogLevel__NewEnumerator1                                                = 1,
	BlueprintLogLevel__NewEnumerator2                                                = 2,
	BlueprintLogLevel__NewEnumerator3                                                = 3,
	BlueprintLogLevel__NewEnumerator4                                                = 4,
	BlueprintLogLevel__NewEnumerator5                                                = 5,
	BlueprintLogLevel__BlueprintLogLevel_MAX                                         = 6
};

