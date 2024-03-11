
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
/// dependency: GameplayTags

/// Class /Script/CameraModesRuntime.CameraModes_FirstPersonCameraController
/// Size: 0x0028 (0x0003C0 - 0x0003E8)
class ACameraModes_FirstPersonCameraController : public AFortFirstPersonCameraController
{ 
public:
	FGameplayTag                                       PreventWeaponHolsterTag;                                    // 0x03C0   (0x0004)  
	float                                              HeadMotionScalar;                                           // 0x03C4   (0x0004)  
	TArray<class UClass*>                              AllowedWeaponClassList;                                     // 0x03C8   (0x0010)  
	class USkeletalMeshComponent*                      FirstPersonSkeletalMeshComp;                                // 0x03D8   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x03E0   (0x0008)  MISSED


	/// Functions
	// Function /Script/CameraModesRuntime.CameraModes_FirstPersonCameraController.UpdateFirstPersonFOV
	// void UpdateFirstPersonFOV(float FOV);                                                                                 // [0x18a39e4] Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Script/CameraModesRuntime.CameraModes_FirstPersonCameraController.SetFovOverride
	// void SetFovOverride(float FOV, float TransitionTime);                                                                 // [0x18a39e4] Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Script/CameraModesRuntime.CameraModes_FirstPersonCameraController.OnLocalPlayerVisibilityChanged
	// void OnLocalPlayerVisibilityChanged(bool bShouldBeVisible);                                                           // [0x18a39e4] Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Script/CameraModesRuntime.CameraModes_FirstPersonCameraController.HandleWeaponEquipped
	// void HandleWeaponEquipped(class AFortWeapon* NewWeapon, class AFortWeapon* PrevWeapon);                               // [0xab7a6c4] Final|Native|Private 
	// Function /Script/CameraModesRuntime.CameraModes_FirstPersonCameraController.ClearFovOverride
	// void ClearFovOverride(float TransitionTime);                                                                          // [0x18a39e4] Event|Protected|BlueprintCallable|BlueprintEvent 
};

