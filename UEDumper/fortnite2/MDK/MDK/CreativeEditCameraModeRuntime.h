
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame

/// Class /Script/CreativeEditCameraModeRuntime.FortCreativeEditCameraController
/// Size: 0x0030 (0x0003D8 - 0x000408)
class AFortCreativeEditCameraController : public AFortFirstPersonCameraController
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1032;

public:
	SMember(FCreativeOptionVariableBase)               WantsToImmersiveEdit                                        OFFSET(getStruct<T>, {0x3D8, 8, 0, 0})


	/// Functions
	// Function /Script/CreativeEditCameraModeRuntime.FortCreativeEditCameraController.ServerSetImmersiveEdit
	// void ServerSetImmersiveEdit(bool bWantsToImmersiveEdit, bool bIsCreativeEditModeEnabled);                                // [0xc078b34] Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate 
	// Function /Script/CreativeEditCameraModeRuntime.FortCreativeEditCameraController.OnWantsToImmersiveEditChanged
	// void OnWantsToImmersiveEditChanged(class UFortCreativeOption* CreativeOption, char IndexValue);                          // [0xc078a70] Final|Native|Private 
	// Function /Script/CreativeEditCameraModeRuntime.FortCreativeEditCameraController.OnCreativeEditModeChanged
	// void OnCreativeEditModeChanged(bool bIsCreativeEditModeEnabled);                                                         // [0xc0789f0] Final|Native|Private 
	// Function /Script/CreativeEditCameraModeRuntime.FortCreativeEditCameraController.HandleWeaponEquipped
	// void HandleWeaponEquipped(class AFortWeapon* NewWeapon, class AFortWeapon* PrevWeapon);                                  // [0xc07892c] Final|Native|Private 
};

