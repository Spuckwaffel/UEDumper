
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: DeveloperSettings

/// Enum /Script/OptimusSettings.EOptimusDefaultDeformerMode
/// Size: 0x04
enum class EOptimusDefaultDeformerMode : uint8_t
{
	EOptimusDefaultDeformerMode__Never                                               = 0,
	EOptimusDefaultDeformerMode__SkinCacheOnly                                       = 1,
	EOptimusDefaultDeformerMode__Always                                              = 2,
	EOptimusDefaultDeformerMode__EOptimusDefaultDeformerMode_MAX                     = 3
};

/// Class /Script/OptimusSettings.OptimusSettings
/// Size: 0x0048 (0x000030 - 0x000078)
class UOptimusSettings : public UDeveloperSettings
{ 
public:
	EOptimusDefaultDeformerMode                        DefaultMode;                                                // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0031   (0x0007)  MISSED
	SDK_UNDEFINED(32,15131) /* TWeakObjectPtr<UMeshDeformer*> */ __um(DefaultDeformer);                            // 0x0038   (0x0020)  
	SDK_UNDEFINED(32,15132) /* TWeakObjectPtr<UMeshDeformer*> */ __um(DefaultRecomputeTangentDeformer);            // 0x0058   (0x0020)  
};

