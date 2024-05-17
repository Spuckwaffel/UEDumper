
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/MapDevice.CRDMapCustomizationComponent
/// Size: 0x00F8 (0x0000A0 - 0x000198)
class UCRDMapCustomizationComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 408;

public:
	CMember(TWeakObjectPtr<UTexture2D*>)               TextureToLoad                                               OFFSET(get<T>, {0xA0, 32, 0, 0})
	CMember(TWeakObjectPtr<UMaterialInterface*>)       MaterialToLoad                                              OFFSET(get<T>, {0xC0, 32, 0, 0})
	CMember(class UTexture2D*)                         LoadedTexture                                               OFFSET(get<T>, {0xE0, 8, 0, 0})
	CMember(class UMaterialInterface*)                 LoadedMaterial                                              OFFSET(get<T>, {0xE8, 8, 0, 0})


	/// Functions
	// Function /Script/MapDevice.CRDMapCustomizationComponent.SetOverrideSceneCapture
	// void SetOverrideSceneCapture(FVector Location, FRotator Rotation, float Width, float Zoom, bool bUseClippingPlanes, float NearClipLength, float FarClipLength); // [0xc83fb44] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/MapDevice.CRDMapCustomizationComponent.SetOverrideMapTexture
	// void SetOverrideMapTexture(TWeakObjectPtr<UTexture2D*> TextureOverride, FVector Location, FRotator Rotation, float Width, float Zoom); // [0xc83f8d8] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/MapDevice.CRDMapCustomizationComponent.SetOverrideMapMaterial
	// void SetOverrideMapMaterial(TWeakObjectPtr<UMaterialInterface*> MaterialOverride, FVector Location, FRotator Rotation, float Width, float Zoom); // [0xc83f66c] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/MapDevice.CRDMapCustomizationComponent.ClearOverrides
	// void ClearOverrides();                                                                                                   // [0xc83f618] Final|Native|Public|BlueprintCallable 
};

