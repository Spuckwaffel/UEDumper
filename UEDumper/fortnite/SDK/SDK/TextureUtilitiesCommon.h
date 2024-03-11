
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: DeveloperSettings

/// Enum /Script/TextureUtilitiesCommon.ETextureImportFloatingPointFormat
/// Size: 0x05
enum class ETextureImportFloatingPointFormat : uint8_t
{
	ETextureImportFloatingPointFormat__HDR_F16                                       = 0,
	ETextureImportFloatingPointFormat__HDRCompressed_BC6                             = 1,
	ETextureImportFloatingPointFormat__HDR_F32_or_F16                                = 2,
	ETextureImportFloatingPointFormat__PreviousDefault                               = 0,
	ETextureImportFloatingPointFormat__ETextureImportFloatingPointFormat_MAX         = 3
};

/// Enum /Script/TextureUtilitiesCommon.ETextureImportPNGInfill
/// Size: 0x05
enum class ETextureImportPNGInfill : uint8_t
{
	ETextureImportPNGInfill__Default                                                 = 0,
	ETextureImportPNGInfill__Never                                                   = 1,
	ETextureImportPNGInfill__OnlyOnBinaryTransparency                                = 2,
	ETextureImportPNGInfill__Always                                                  = 3,
	ETextureImportPNGInfill__ETextureImportPNGInfill_MAX                             = 4
};

/// Class /Script/TextureUtilitiesCommon.TextureImportSettings
/// Size: 0x0008 (0x000030 - 0x000038)
class UTextureImportSettings : public UDeveloperSettings
{ 
public:
	int32_t                                            AutoVTSize;                                                 // 0x0030   (0x0004)  
	bool                                               bEnableNormalizeNormals;                                    // 0x0034   (0x0001)  
	bool                                               bEnableFastMipFilter;                                       // 0x0035   (0x0001)  
	ETextureImportFloatingPointFormat                  CompressedFormatForFloatTextures;                           // 0x0036   (0x0001)  
	ETextureImportPNGInfill                            PNGInfill;                                                  // 0x0037   (0x0001)  
};

