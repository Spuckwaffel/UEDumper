
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once

/// Enum /Script/InterchangeCommon.EInterchangeMaterialXShaders
/// Size: 0x09
enum class EInterchangeMaterialXShaders : uint8_t
{
	EInterchangeMaterialXShaders__OpenPBRSurface                                     = 0,
	EInterchangeMaterialXShaders__OpenPBRSurfaceTransmission                         = 1,
	EInterchangeMaterialXShaders__StandardSurface                                    = 2,
	EInterchangeMaterialXShaders__StandardSurfaceTransmission                        = 3,
	EInterchangeMaterialXShaders__SurfaceUnlit                                       = 4,
	EInterchangeMaterialXShaders__UsdPreviewSurface                                  = 5,
	EInterchangeMaterialXShaders__Surface                                            = 6,
	EInterchangeMaterialXShaders__MaxShaderCount                                     = 7,
	EInterchangeMaterialXShaders__EInterchangeMaterialXShaders_MAX                   = 8
};

/// Enum /Script/InterchangeCommon.EInterchangeMaterialXBSDF
/// Size: 0x11
enum class EInterchangeMaterialXBSDF : uint8_t
{
	EInterchangeMaterialXBSDF__OrenNayarDiffuse                                      = 0,
	EInterchangeMaterialXBSDF__BurleyDiffuse                                         = 1,
	EInterchangeMaterialXBSDF__Translucent                                           = 2,
	EInterchangeMaterialXBSDF__Dielectric                                            = 3,
	EInterchangeMaterialXBSDF__Conductor                                             = 4,
	EInterchangeMaterialXBSDF__GeneralizedSchlick                                    = 5,
	EInterchangeMaterialXBSDF__Subsurface                                            = 6,
	EInterchangeMaterialXBSDF__Sheen                                                 = 7,
	EInterchangeMaterialXBSDF__ThinFilm                                              = 8,
	EInterchangeMaterialXBSDF__MaxBSDFCount                                          = 9,
	EInterchangeMaterialXBSDF__EInterchangeMaterialXBSDF_MAX                         = 10
};

/// Enum /Script/InterchangeCommon.EInterchangeMaterialXEDF
/// Size: 0x05
enum class EInterchangeMaterialXEDF : uint8_t
{
	EInterchangeMaterialXEDF__Uniform                                                = 0,
	EInterchangeMaterialXEDF__Conical                                                = 1,
	EInterchangeMaterialXEDF__Measured                                               = 2,
	EInterchangeMaterialXEDF__MaxEDFCount                                            = 3,
	EInterchangeMaterialXEDF__EInterchangeMaterialXEDF_MAX                           = 4
};

/// Enum /Script/InterchangeCommon.EInterchangeMaterialXVDF
/// Size: 0x04
enum class EInterchangeMaterialXVDF : uint8_t
{
	EInterchangeMaterialXVDF__Absorption                                             = 0,
	EInterchangeMaterialXVDF__Anisotropic                                            = 1,
	EInterchangeMaterialXVDF__MaxVDFCount                                            = 2,
	EInterchangeMaterialXVDF__EInterchangeMaterialXVDF_MAX                           = 3
};

