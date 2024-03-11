
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/GLTFExporter.GLTFExportOptions
/// Size: 0x0088 (0x000028 - 0x0000B0)
class UGLTFExportOptions : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	DMember(float)                                     ExportUniformScale                                          OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(bool)                                      bExportPreviewMesh                                          OFFSET(get<bool>, {0x2C, 1, 0, 0})
	DMember(bool)                                      bSkipNearDefaultValues                                      OFFSET(get<bool>, {0x2D, 1, 0, 0})
	DMember(bool)                                      bIncludeCopyrightNotice                                     OFFSET(get<bool>, {0x2E, 1, 0, 0})
	DMember(bool)                                      bExportProxyMaterials                                       OFFSET(get<bool>, {0x2F, 1, 0, 0})
	DMember(bool)                                      bUseImporterMaterialMapping                                 OFFSET(get<bool>, {0x30, 1, 0, 0})
	DMember(bool)                                      bExportUnlitMaterials                                       OFFSET(get<bool>, {0x31, 1, 0, 0})
	DMember(bool)                                      bExportClearCoatMaterials                                   OFFSET(get<bool>, {0x32, 1, 0, 0})
	DMember(bool)                                      bExportClothMaterials                                       OFFSET(get<bool>, {0x33, 1, 0, 0})
	DMember(bool)                                      bExportThinTranslucentMaterials                             OFFSET(get<bool>, {0x34, 1, 0, 0})
	DMember(bool)                                      bExportSpecularGlossinessMaterials                          OFFSET(get<bool>, {0x35, 1, 0, 0})
	DMember(bool)                                      bExportEmissiveStrength                                     OFFSET(get<bool>, {0x36, 1, 0, 0})
	CMember(EGLTFMaterialBakeMode)                     BakeMaterialInputs                                          OFFSET(get<T>, {0x37, 1, 0, 0})
	SMember(FGLTFMaterialBakeSize)                     DefaultMaterialBakeSize                                     OFFSET(getStruct<T>, {0x38, 12, 0, 0})
	CMember(TEnumAsByte<TextureFilter>)                DefaultMaterialBakeFilter                                   OFFSET(get<T>, {0x44, 1, 0, 0})
	CMember(TEnumAsByte<TextureAddress>)               DefaultMaterialBakeTiling                                   OFFSET(get<T>, {0x45, 1, 0, 0})
	CMember(TMap<EGLTFMaterialPropertyGroup, FGLTFOverrideMaterialBakeSettings>) DefaultInputBakeSettings          OFFSET(get<T>, {0x48, 80, 0, 0})
	DMember(int32_t)                                   DefaultLevelOfDetail                                        OFFSET(get<int32_t>, {0x98, 4, 0, 0})
	DMember(bool)                                      bExportVertexColors                                         OFFSET(get<bool>, {0x9C, 1, 0, 0})
	DMember(bool)                                      bExportVertexSkinWeights                                    OFFSET(get<bool>, {0x9D, 1, 0, 0})
	DMember(bool)                                      bMakeSkinnedMeshesRoot                                      OFFSET(get<bool>, {0x9E, 1, 0, 0})
	DMember(bool)                                      bUseMeshQuantization                                        OFFSET(get<bool>, {0x9F, 1, 0, 0})
	DMember(bool)                                      bExportLevelSequences                                       OFFSET(get<bool>, {0xA0, 1, 0, 0})
	DMember(bool)                                      bExportAnimationSequences                                   OFFSET(get<bool>, {0xA1, 1, 0, 0})
	CMember(EGLTFTextureImageFormat)                   TextureImageFormat                                          OFFSET(get<T>, {0xA2, 1, 0, 0})
	DMember(int32_t)                                   TextureImageQuality                                         OFFSET(get<int32_t>, {0xA4, 4, 0, 0})
	DMember(bool)                                      bExportTextureTransforms                                    OFFSET(get<bool>, {0xA8, 1, 0, 0})
	DMember(bool)                                      bAdjustNormalmaps                                           OFFSET(get<bool>, {0xA9, 1, 0, 0})
	DMember(bool)                                      bExportHiddenInGame                                         OFFSET(get<bool>, {0xAA, 1, 0, 0})
	DMember(bool)                                      bExportLights                                               OFFSET(get<bool>, {0xAB, 1, 0, 0})
	DMember(bool)                                      bExportCameras                                              OFFSET(get<bool>, {0xAC, 1, 0, 0})
	CMember(EGLTFMaterialVariantMode)                  ExportMaterialVariants                                      OFFSET(get<T>, {0xAD, 1, 0, 0})


	/// Functions
	// Function /Script/GLTFExporter.GLTFExportOptions.ResetToDefault
	// void ResetToDefault();                                                                                                   // [0xbab63cc] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/GLTFExporter.GLTFExporter
/// Size: 0x0000 (0x000078 - 0x000078)
class UGLTFExporter : public UExporter
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:


	/// Functions
	// Function /Script/GLTFExporter.GLTFExporter.ExportToGLTF
	// bool ExportToGLTF(class UObject* Object, FString FilePath, class UGLTFExportOptions* Options, TSet<AActor*>& SelectedActors, FGLTFExportMessages& OutMessages); // [0xbab60e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/GLTFExporter.GLTFAnimSequenceExporter
/// Size: 0x0000 (0x000078 - 0x000078)
class UGLTFAnimSequenceExporter : public UGLTFExporter
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
};

/// Class /Script/GLTFExporter.GLTFLevelExporter
/// Size: 0x0000 (0x000078 - 0x000078)
class UGLTFLevelExporter : public UGLTFExporter
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
};

/// Class /Script/GLTFExporter.GLTFLevelSequenceExporter
/// Size: 0x0000 (0x000078 - 0x000078)
class UGLTFLevelSequenceExporter : public UGLTFExporter
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
};

/// Class /Script/GLTFExporter.GLTFLevelVariantSetsExporter
/// Size: 0x0000 (0x000078 - 0x000078)
class UGLTFLevelVariantSetsExporter : public UGLTFExporter
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
};

/// Class /Script/GLTFExporter.GLTFMaterialExporter
/// Size: 0x0000 (0x000078 - 0x000078)
class UGLTFMaterialExporter : public UGLTFExporter
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
};

/// Class /Script/GLTFExporter.GLTFSkeletalMeshExporter
/// Size: 0x0000 (0x000078 - 0x000078)
class UGLTFSkeletalMeshExporter : public UGLTFExporter
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
};

/// Class /Script/GLTFExporter.GLTFStaticMeshExporter
/// Size: 0x0000 (0x000078 - 0x000078)
class UGLTFStaticMeshExporter : public UGLTFExporter
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
};

/// Class /Script/GLTFExporter.GLTFProxyOptions
/// Size: 0x0068 (0x000028 - 0x000090)
class UGLTFProxyOptions : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	DMember(bool)                                      bBakeMaterialInputs                                         OFFSET(get<bool>, {0x28, 1, 0, 0})
	DMember(bool)                                      bUseThinTranslucentShadingModel                             OFFSET(get<bool>, {0x29, 1, 0, 0})
	SMember(FGLTFMaterialBakeSize)                     DefaultMaterialBakeSize                                     OFFSET(getStruct<T>, {0x2C, 12, 0, 0})
	CMember(TEnumAsByte<TextureFilter>)                DefaultMaterialBakeFilter                                   OFFSET(get<T>, {0x38, 1, 0, 0})
	CMember(TEnumAsByte<TextureAddress>)               DefaultMaterialBakeTiling                                   OFFSET(get<T>, {0x39, 1, 0, 0})
	CMember(TMap<EGLTFMaterialPropertyGroup, FGLTFOverrideMaterialBakeSettings>) DefaultInputBakeSettings          OFFSET(get<T>, {0x40, 80, 0, 0})


	/// Functions
	// Function /Script/GLTFExporter.GLTFProxyOptions.ResetToDefault
	// void ResetToDefault();                                                                                                   // [0xbab63e0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/GLTFExporter.GLTFMaterialExportOptions
/// Size: 0x0070 (0x000028 - 0x000098)
class UGLTFMaterialExportOptions : public UAssetUserData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	CMember(class UMaterialInterface*)                 Proxy                                                       OFFSET(get<T>, {0x28, 8, 0, 0})
	SMember(FGLTFOverrideMaterialBakeSettings)         Default                                                     OFFSET(getStruct<T>, {0x30, 20, 0, 0})
	CMember(TMap<EGLTFMaterialPropertyGroup, FGLTFOverrideMaterialBakeSettings>) Inputs                            OFFSET(get<T>, {0x48, 80, 0, 0})
};

/// Struct /Script/GLTFExporter.GLTFExportMessages
/// Size: 0x0030 (0x000000 - 0x000030)
class FGLTFExportMessages : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(TArray<FString>)                           Suggestions                                                 OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FString>)                           Warnings                                                    OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<FString>)                           Errors                                                      OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/GLTFExporter.GLTFMaterialBakeSize
/// Size: 0x000C (0x000000 - 0x00000C)
class FGLTFMaterialBakeSize : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(int32_t)                                   X                                                           OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   Y                                                           OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(bool)                                      bAutoDetect                                                 OFFSET(get<bool>, {0x8, 1, 0, 0})
};

/// Struct /Script/GLTFExporter.GLTFOverrideMaterialBakeSettings
/// Size: 0x0014 (0x000000 - 0x000014)
class FGLTFOverrideMaterialBakeSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	DMember(bool)                                      bOverrideSize                                               OFFSET(get<bool>, {0x0, 1, 0, 0})
	SMember(FGLTFMaterialBakeSize)                     Size                                                        OFFSET(getStruct<T>, {0x4, 12, 0, 0})
	DMember(bool)                                      bOverrideFilter                                             OFFSET(get<bool>, {0x10, 1, 0, 0})
	CMember(TEnumAsByte<TextureFilter>)                Filter                                                      OFFSET(get<T>, {0x11, 1, 0, 0})
	DMember(bool)                                      bOverrideTiling                                             OFFSET(get<bool>, {0x12, 1, 0, 0})
	CMember(TEnumAsByte<TextureAddress>)               Tiling                                                      OFFSET(get<T>, {0x13, 1, 0, 0})
};

/// Enum /Script/GLTFExporter.EGLTFTextureImageFormat
/// Size: 0x04
enum class EGLTFTextureImageFormat : uint8_t
{
	EGLTFTextureImageFormat__None                                                    = 0,
	EGLTFTextureImageFormat__PNG                                                     = 1,
	EGLTFTextureImageFormat__JPEG                                                    = 2,
	EGLTFTextureImageFormat__EGLTFTextureImageFormat_MAX                             = 3
};

/// Enum /Script/GLTFExporter.EGLTFMaterialVariantMode
/// Size: 0x04
enum class EGLTFMaterialVariantMode : uint8_t
{
	EGLTFMaterialVariantMode__None                                                   = 0,
	EGLTFMaterialVariantMode__Simple                                                 = 1,
	EGLTFMaterialVariantMode__UseMeshData                                            = 2,
	EGLTFMaterialVariantMode__EGLTFMaterialVariantMode_MAX                           = 3
};

/// Enum /Script/GLTFExporter.EGLTFMaterialBakeMode
/// Size: 0x04
enum class EGLTFMaterialBakeMode : uint8_t
{
	EGLTFMaterialBakeMode__Disabled                                                  = 0,
	EGLTFMaterialBakeMode__Simple                                                    = 1,
	EGLTFMaterialBakeMode__UseMeshData                                               = 2,
	EGLTFMaterialBakeMode__EGLTFMaterialBakeMode_MAX                                 = 3
};

/// Enum /Script/GLTFExporter.EGLTFMaterialPropertyGroup
/// Size: 0x09
enum class EGLTFMaterialPropertyGroup : uint8_t
{
	EGLTFMaterialPropertyGroup__None                                                 = 0,
	EGLTFMaterialPropertyGroup__BaseColorOpacity                                     = 1,
	EGLTFMaterialPropertyGroup__MetallicRoughness                                    = 2,
	EGLTFMaterialPropertyGroup__EmissiveColor                                        = 3,
	EGLTFMaterialPropertyGroup__Normal                                               = 4,
	EGLTFMaterialPropertyGroup__AmbientOcclusion                                     = 5,
	EGLTFMaterialPropertyGroup__ClearCoatRoughness                                   = 6,
	EGLTFMaterialPropertyGroup__ClearCoatBottomNormal                                = 7,
	EGLTFMaterialPropertyGroup__EGLTFMaterialPropertyGroup_MAX                       = 8
};

