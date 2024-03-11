
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: DeveloperSettings

/// Class /Script/TextureUtilitiesCommon.TextureImportSettings
/// Size: 0x0008 (0x000030 - 0x000038)
class UTextureImportSettings : public UDeveloperSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(int32_t)                                   AutoVTSize                                                  OFFSET(get<int32_t>, {0x30, 4, 0, 0})
	DMember(bool)                                      bEnableNormalizeNormals                                     OFFSET(get<bool>, {0x34, 1, 0, 0})
	DMember(bool)                                      bEnableFastMipFilter                                        OFFSET(get<bool>, {0x35, 1, 0, 0})
	CMember(ETextureImportFloatingPointFormat)         CompressedFormatForFloatTextures                            OFFSET(get<T>, {0x36, 1, 0, 0})
	CMember(ETextureImportPNGInfill)                   PNGInfill                                                   OFFSET(get<T>, {0x37, 1, 0, 0})
};

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

