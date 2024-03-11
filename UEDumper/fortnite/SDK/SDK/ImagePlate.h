
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/ImagePlate.ImagePlate
/// Size: 0x0008 (0x000290 - 0x000298)
class AImagePlate : public AActor
{ 
public:
	class UImagePlateComponent*                        ImagePlate;                                                 // 0x0290   (0x0008)  
};

/// Struct /Script/ImagePlate.ImagePlateParameters
/// Size: 0x0040 (0x000000 - 0x000040)
struct FImagePlateParameters
{ 
	class UMaterialInterface*                          Material;                                                   // 0x0000   (0x0008)  
	FName                                              TextureParameterName;                                       // 0x0008   (0x0004)  
	bool                                               bFillScreen;                                                // 0x000C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x000D   (0x0003)  MISSED
	FVector2D                                          FillScreenAmount;                                           // 0x0010   (0x0010)  
	FVector2D                                          FixedSize;                                                  // 0x0020   (0x0010)  
	class UTexture*                                    RenderTexture;                                              // 0x0030   (0x0008)  
	class UMaterialInstanceDynamic*                    DynamicMaterial;                                            // 0x0038   (0x0008)  
};

/// Class /Script/ImagePlate.ImagePlateComponent
/// Size: 0x0150 (0x000500 - 0x000650)
class UImagePlateComponent : public UPrimitiveComponent
{ 
public:
	FImagePlateParameters                              Plate;                                                      // 0x0500   (0x0040)  
	unsigned char                                      UnknownData00_6[0x110];                                     // 0x0540   (0x0110)  MISSED


	/// Functions
	// Function /Script/ImagePlate.ImagePlateComponent.SetImagePlate
	// void SetImagePlate(FImagePlateParameters Plate);                                                                      // [0xb7185b4] Final|Native|Public|BlueprintCallable 
	// Function /Script/ImagePlate.ImagePlateComponent.OnRenderTextureChanged
	// void OnRenderTextureChanged();                                                                                        // [0xb7185a0] Final|Native|Public  
	// Function /Script/ImagePlate.ImagePlateComponent.GetPlate
	// FImagePlateParameters GetPlate();                                                                                     // [0xb718528] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/ImagePlate.ImagePlateSettings
/// Size: 0x0010 (0x000028 - 0x000038)
class UImagePlateSettings : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	SDK_UNDEFINED(16,14215) /* FString */              __um(ProxyName);                                            // 0x0028   (0x0010)  
};

/// Class /Script/ImagePlate.ImagePlateFileSequence
/// Size: 0x0028 (0x000028 - 0x000050)
class UImagePlateFileSequence : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	FDirectoryPath                                     SequencePath;                                               // 0x0028   (0x0010)  
	SDK_UNDEFINED(16,14216) /* FString */              __um(FileWildcard);                                         // 0x0038   (0x0010)  
	float                                              FrameRate;                                                  // 0x0048   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x004C   (0x0004)  MISSED
};

/// Class /Script/ImagePlate.ImagePlateFrustumComponent
/// Size: 0x0000 (0x000500 - 0x000500)
class UImagePlateFrustumComponent : public UPrimitiveComponent
{ 
public:
};

