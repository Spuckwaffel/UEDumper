
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/ImagePlate.ImagePlate
/// Size: 0x0008 (0x000290 - 0x000298)
class AImagePlate : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 664;

public:
	CMember(class UImagePlateComponent*)               ImagePlate                                                  OFFSET(get<T>, {0x290, 8, 0, 0})
};

/// Class /Script/ImagePlate.ImagePlateComponent
/// Size: 0x0150 (0x000500 - 0x000650)
class UImagePlateComponent : public UPrimitiveComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1616;

public:
	SMember(FImagePlateParameters)                     Plate                                                       OFFSET(getStruct<T>, {0x500, 64, 0, 0})


	/// Functions
	// Function /Script/ImagePlate.ImagePlateComponent.SetImagePlate
	// void SetImagePlate(FImagePlateParameters Plate);                                                                         // [0xceb7ff4] Final|Native|Public|BlueprintCallable 
	// Function /Script/ImagePlate.ImagePlateComponent.OnRenderTextureChanged
	// void OnRenderTextureChanged();                                                                                           // [0xceb7fe0] Final|Native|Public  
	// Function /Script/ImagePlate.ImagePlateComponent.GetPlate
	// FImagePlateParameters GetPlate();                                                                                        // [0xceb7f68] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/ImagePlate.ImagePlateSettings
/// Size: 0x0010 (0x000028 - 0x000038)
class UImagePlateSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FString)                                   ProxyName                                                   OFFSET(getStruct<T>, {0x28, 16, 0, 0})
};

/// Class /Script/ImagePlate.ImagePlateFileSequence
/// Size: 0x0028 (0x000028 - 0x000050)
class UImagePlateFileSequence : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FDirectoryPath)                            SequencePath                                                OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	SMember(FString)                                   FileWildcard                                                OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	DMember(float)                                     FrameRate                                                   OFFSET(get<float>, {0x48, 4, 0, 0})
};

/// Class /Script/ImagePlate.ImagePlateFrustumComponent
/// Size: 0x0000 (0x000500 - 0x000500)
class UImagePlateFrustumComponent : public UPrimitiveComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1280;

public:
};

/// Struct /Script/ImagePlate.ImagePlateParameters
/// Size: 0x0040 (0x000000 - 0x000040)
class FImagePlateParameters : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(class UMaterialInterface*)                 Material                                                    OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FName)                                     TextureParameterName                                        OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	DMember(bool)                                      bFillScreen                                                 OFFSET(get<bool>, {0xC, 1, 0, 0})
	SMember(FVector2D)                                 FillScreenAmount                                            OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FVector2D)                                 FixedSize                                                   OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	CMember(class UTexture*)                           RenderTexture                                               OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(class UMaterialInstanceDynamic*)           DynamicMaterial                                             OFFSET(get<T>, {0x38, 8, 0, 0})
};

