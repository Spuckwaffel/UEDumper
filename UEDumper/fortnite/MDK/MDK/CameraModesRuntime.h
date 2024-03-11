
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: GameplayTags

/// Class /Script/CameraModesRuntime.CameraModes_FirstPersonCameraController
/// Size: 0x0028 (0x0003C0 - 0x0003E8)
class ACameraModes_FirstPersonCameraController : public AFortFirstPersonCameraController
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1000;

public:
	SMember(FGameplayTag)                              PreventWeaponHolsterTag                                     OFFSET(getStruct<T>, {0x3C0, 4, 0, 0})
	DMember(float)                                     HeadMotionScalar                                            OFFSET(get<float>, {0x3C4, 4, 0, 0})
	CMember(TArray<class UClass*>)                     AllowedWeaponClassList                                      OFFSET(get<T>, {0x3C8, 16, 0, 0})
	CMember(class USkeletalMeshComponent*)             FirstPersonSkeletalMeshComp                                 OFFSET(get<T>, {0x3D8, 8, 0, 0})


	/// Functions
	// Function /Script/CameraModesRuntime.CameraModes_FirstPersonCameraController.UpdateFirstPersonFOV
	// void UpdateFirstPersonFOV(float FOV);                                                                                    // [0x18a39e4] Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Script/CameraModesRuntime.CameraModes_FirstPersonCameraController.SetFovOverride
	// void SetFovOverride(float FOV, float TransitionTime);                                                                    // [0x18a39e4] Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Script/CameraModesRuntime.CameraModes_FirstPersonCameraController.OnLocalPlayerVisibilityChanged
	// void OnLocalPlayerVisibilityChanged(bool bShouldBeVisible);                                                              // [0x18a39e4] Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Script/CameraModesRuntime.CameraModes_FirstPersonCameraController.HandleWeaponEquipped
	// void HandleWeaponEquipped(class AFortWeapon* NewWeapon, class AFortWeapon* PrevWeapon);                                  // [0xab7a6c4] Final|Native|Private 
	// Function /Script/CameraModesRuntime.CameraModes_FirstPersonCameraController.ClearFovOverride
	// void ClearFovOverride(float TransitionTime);                                                                             // [0x18a39e4] Event|Protected|BlueprintCallable|BlueprintEvent 
};

