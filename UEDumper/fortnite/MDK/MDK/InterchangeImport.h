
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: InterchangeCore

/// Class /Script/InterchangeImport.InterchangeAnimationPayloadInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UInterchangeAnimationPayloadInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/InterchangeImport.InterchangeBlockedTexturePayloadInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UInterchangeBlockedTexturePayloadInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/InterchangeImport.InterchangeActorFactory
/// Size: 0x0000 (0x000030 - 0x000030)
class UInterchangeActorFactory : public UInterchangeFactoryBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/InterchangeImport.InterchangeDecalActorFactory
/// Size: 0x0000 (0x000030 - 0x000030)
class UInterchangeDecalActorFactory : public UInterchangeActorFactory
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/InterchangeImport.InterchangeLevelSequenceFactory
/// Size: 0x0008 (0x000030 - 0x000038)
class UInterchangeLevelSequenceFactory : public UInterchangeFactoryBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Script/InterchangeImport.InterchangeLightActorFactory
/// Size: 0x0000 (0x000030 - 0x000030)
class UInterchangeLightActorFactory : public UInterchangeActorFactory
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/InterchangeImport.InterchangeMeshPayloadInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UInterchangeMeshPayloadInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/InterchangeImport.InterchangeSceneImportAssetFactory
/// Size: 0x0000 (0x000030 - 0x000030)
class UInterchangeSceneImportAssetFactory : public UInterchangeFactoryBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/InterchangeImport.InterchangeSceneVariantSetsFactory
/// Size: 0x0008 (0x000030 - 0x000038)
class UInterchangeSceneVariantSetsFactory : public UInterchangeFactoryBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Script/InterchangeImport.InterchangeSlicedTexturePayloadInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UInterchangeSlicedTexturePayloadInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/InterchangeImport.InterchangeTextureLightProfilePayloadInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UInterchangeTextureLightProfilePayloadInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/InterchangeImport.InterchangeTexturePayloadInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UInterchangeTexturePayloadInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/InterchangeImport.InterchangeVariantSetPayloadInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UInterchangeVariantSetPayloadInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/InterchangeImport.MaterialExpressionMaterialXRamp4
/// Size: 0x00D0 (0x0000B0 - 0x000180)
class UMaterialExpressionMaterialXRamp4 : public UMaterialExpression
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 384;

public:
	SMember(FExpressionInput)                          Coordinates                                                 OFFSET(getStruct<T>, {0xB0, 40, 0, 0})
	SMember(FExpressionInput)                          A                                                           OFFSET(getStruct<T>, {0xD8, 40, 0, 0})
	SMember(FExpressionInput)                          B                                                           OFFSET(getStruct<T>, {0x100, 40, 0, 0})
	SMember(FExpressionInput)                          C                                                           OFFSET(getStruct<T>, {0x128, 40, 0, 0})
	SMember(FExpressionInput)                          D                                                           OFFSET(getStruct<T>, {0x150, 40, 0, 0})
	DMember(char)                                      ConstCoordinate                                             OFFSET(get<char>, {0x178, 1, 0, 0})
};

/// Class /Script/InterchangeImport.InterchangeAnimSequenceFactory
/// Size: 0x0108 (0x000030 - 0x000138)
class UInterchangeAnimSequenceFactory : public UInterchangeFactoryBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 312;

public:
};

/// Class /Script/InterchangeImport.InterchangeFbxTranslatorSettings
/// Size: 0x0008 (0x000028 - 0x000030)
class UInterchangeFbxTranslatorSettings : public UInterchangeTranslatorSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(bool)                                      bConvertScene                                               OFFSET(get<bool>, {0x28, 1, 0, 0})
	DMember(bool)                                      bForceFrontXAxis                                            OFFSET(get<bool>, {0x29, 1, 0, 0})
	DMember(bool)                                      bConvertSceneUnit                                           OFFSET(get<bool>, {0x2A, 1, 0, 0})
};

/// Class /Script/InterchangeImport.InterchangeFbxTranslator
/// Size: 0x0040 (0x000038 - 0x000078)
class UInterchangeFbxTranslator : public UInterchangeTranslatorBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
};

/// Class /Script/InterchangeImport.InterchangeGLTFTranslator
/// Size: 0x0258 (0x000038 - 0x000290)
class UInterchangeGLTFTranslator : public UInterchangeTranslatorBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 656;

public:
};

/// Class /Script/InterchangeImport.InterchangeMaterialXTranslator
/// Size: 0x0008 (0x000038 - 0x000040)
class UInterchangeMaterialXTranslator : public UInterchangeTranslatorBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Script/InterchangeImport.MaterialExpressionMaterialXAppend3Vector
/// Size: 0x0078 (0x0000B0 - 0x000128)
class UMaterialExpressionMaterialXAppend3Vector : public UMaterialExpression
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
	SMember(FExpressionInput)                          A                                                           OFFSET(getStruct<T>, {0xB0, 40, 0, 0})
	SMember(FExpressionInput)                          B                                                           OFFSET(getStruct<T>, {0xD8, 40, 0, 0})
	SMember(FExpressionInput)                          C                                                           OFFSET(getStruct<T>, {0x100, 40, 0, 0})
};

/// Class /Script/InterchangeImport.MaterialExpressionMaterialXAppend4Vector
/// Size: 0x00A0 (0x0000B0 - 0x000150)
class UMaterialExpressionMaterialXAppend4Vector : public UMaterialExpression
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
	SMember(FExpressionInput)                          A                                                           OFFSET(getStruct<T>, {0xB0, 40, 0, 0})
	SMember(FExpressionInput)                          B                                                           OFFSET(getStruct<T>, {0xD8, 40, 0, 0})
	SMember(FExpressionInput)                          C                                                           OFFSET(getStruct<T>, {0x100, 40, 0, 0})
	SMember(FExpressionInput)                          D                                                           OFFSET(getStruct<T>, {0x128, 40, 0, 0})
};

/// Class /Script/InterchangeImport.MaterialExpressionMaterialXBurn
/// Size: 0x0080 (0x0000B0 - 0x000130)
class UMaterialExpressionMaterialXBurn : public UMaterialExpression
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	SMember(FExpressionInput)                          A                                                           OFFSET(getStruct<T>, {0xB0, 40, 0, 0})
	SMember(FExpressionInput)                          B                                                           OFFSET(getStruct<T>, {0xD8, 40, 0, 0})
	SMember(FExpressionInput)                          Alpha                                                       OFFSET(getStruct<T>, {0x100, 40, 0, 0})
	DMember(float)                                     ConstAlpha                                                  OFFSET(get<float>, {0x128, 4, 0, 0})
};

/// Class /Script/InterchangeImport.MaterialExpressionMaterialXDifference
/// Size: 0x0080 (0x0000B0 - 0x000130)
class UMaterialExpressionMaterialXDifference : public UMaterialExpression
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	SMember(FExpressionInput)                          A                                                           OFFSET(getStruct<T>, {0xB0, 40, 0, 0})
	SMember(FExpressionInput)                          B                                                           OFFSET(getStruct<T>, {0xD8, 40, 0, 0})
	SMember(FExpressionInput)                          Alpha                                                       OFFSET(getStruct<T>, {0x100, 40, 0, 0})
	DMember(float)                                     ConstAlpha                                                  OFFSET(get<float>, {0x128, 4, 0, 0})
};

/// Class /Script/InterchangeImport.MaterialExpressionMaterialXDisjointOver
/// Size: 0x0080 (0x0000B0 - 0x000130)
class UMaterialExpressionMaterialXDisjointOver : public UMaterialExpression
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	SMember(FExpressionInput)                          A                                                           OFFSET(getStruct<T>, {0xB0, 40, 0, 0})
	SMember(FExpressionInput)                          B                                                           OFFSET(getStruct<T>, {0xD8, 40, 0, 0})
	SMember(FExpressionInput)                          Alpha                                                       OFFSET(getStruct<T>, {0x100, 40, 0, 0})
	DMember(float)                                     ConstAlpha                                                  OFFSET(get<float>, {0x128, 4, 0, 0})
};

/// Class /Script/InterchangeImport.MaterialExpressionMaterialXDodge
/// Size: 0x0080 (0x0000B0 - 0x000130)
class UMaterialExpressionMaterialXDodge : public UMaterialExpression
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	SMember(FExpressionInput)                          A                                                           OFFSET(getStruct<T>, {0xB0, 40, 0, 0})
	SMember(FExpressionInput)                          B                                                           OFFSET(getStruct<T>, {0xD8, 40, 0, 0})
	SMember(FExpressionInput)                          Alpha                                                       OFFSET(getStruct<T>, {0x100, 40, 0, 0})
	DMember(float)                                     ConstAlpha                                                  OFFSET(get<float>, {0x128, 4, 0, 0})
};

/// Class /Script/InterchangeImport.MaterialExpressionMaterialXFractal3D
/// Size: 0x00F8 (0x0000B0 - 0x0001A8)
class UMaterialExpressionMaterialXFractal3D : public UMaterialExpression
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 424;

public:
	SMember(FExpressionInput)                          Position                                                    OFFSET(getStruct<T>, {0xB0, 40, 0, 0})
	SMember(FExpressionInput)                          Amplitude                                                   OFFSET(getStruct<T>, {0xD8, 40, 0, 0})
	DMember(float)                                     ConstAmplitude                                              OFFSET(get<float>, {0x100, 4, 0, 0})
	SMember(FExpressionInput)                          Octaves                                                     OFFSET(getStruct<T>, {0x108, 40, 0, 0})
	DMember(int32_t)                                   ConstOctaves                                                OFFSET(get<int32_t>, {0x130, 4, 0, 0})
	SMember(FExpressionInput)                          Lacunarity                                                  OFFSET(getStruct<T>, {0x138, 40, 0, 0})
	DMember(float)                                     ConstLacunarity                                             OFFSET(get<float>, {0x160, 4, 0, 0})
	SMember(FExpressionInput)                          Diminish                                                    OFFSET(getStruct<T>, {0x168, 40, 0, 0})
	DMember(float)                                     ConstDiminish                                               OFFSET(get<float>, {0x190, 4, 0, 0})
	DMember(float)                                     Scale                                                       OFFSET(get<float>, {0x194, 4, 0, 0})
	DMember(bool)                                      bTurbulence                                                 OFFSET(get<bool>, {0x198, 1, 0, 0})
	DMember(int32_t)                                   Levels                                                      OFFSET(get<int32_t>, {0x19C, 4, 0, 0})
	DMember(float)                                     OutputMin                                                   OFFSET(get<float>, {0x1A0, 4, 0, 0})
	DMember(float)                                     OutputMax                                                   OFFSET(get<float>, {0x1A4, 4, 0, 0})
};

/// Class /Script/InterchangeImport.MaterialExpressionMaterialXIn
/// Size: 0x0080 (0x0000B0 - 0x000130)
class UMaterialExpressionMaterialXIn : public UMaterialExpression
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	SMember(FExpressionInput)                          A                                                           OFFSET(getStruct<T>, {0xB0, 40, 0, 0})
	SMember(FExpressionInput)                          B                                                           OFFSET(getStruct<T>, {0xD8, 40, 0, 0})
	SMember(FExpressionInput)                          Alpha                                                       OFFSET(getStruct<T>, {0x100, 40, 0, 0})
	DMember(float)                                     ConstAlpha                                                  OFFSET(get<float>, {0x128, 4, 0, 0})
};

/// Class /Script/InterchangeImport.MaterialExpressionMaterialXLuminance
/// Size: 0x0040 (0x0000B0 - 0x0000F0)
class UMaterialExpressionMaterialXLuminance : public UMaterialExpression
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	SMember(FExpressionInput)                          Input                                                       OFFSET(getStruct<T>, {0xB0, 40, 0, 0})
	SMember(FLinearColor)                              LuminanceFactors                                            OFFSET(getStruct<T>, {0xD8, 16, 0, 0})
	CMember(EMaterialXLuminanceMode)                   LuminanceMode                                               OFFSET(get<T>, {0xE8, 1, 0, 0})
};

/// Class /Script/InterchangeImport.MaterialExpressionMaterialXMask
/// Size: 0x0080 (0x0000B0 - 0x000130)
class UMaterialExpressionMaterialXMask : public UMaterialExpression
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	SMember(FExpressionInput)                          A                                                           OFFSET(getStruct<T>, {0xB0, 40, 0, 0})
	SMember(FExpressionInput)                          B                                                           OFFSET(getStruct<T>, {0xD8, 40, 0, 0})
	SMember(FExpressionInput)                          Alpha                                                       OFFSET(getStruct<T>, {0x100, 40, 0, 0})
	DMember(float)                                     ConstAlpha                                                  OFFSET(get<float>, {0x128, 4, 0, 0})
};

/// Class /Script/InterchangeImport.MaterialExpressionMaterialXMatte
/// Size: 0x0080 (0x0000B0 - 0x000130)
class UMaterialExpressionMaterialXMatte : public UMaterialExpression
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	SMember(FExpressionInput)                          A                                                           OFFSET(getStruct<T>, {0xB0, 40, 0, 0})
	SMember(FExpressionInput)                          B                                                           OFFSET(getStruct<T>, {0xD8, 40, 0, 0})
	SMember(FExpressionInput)                          Alpha                                                       OFFSET(getStruct<T>, {0x100, 40, 0, 0})
	DMember(float)                                     ConstAlpha                                                  OFFSET(get<float>, {0x128, 4, 0, 0})
};

/// Class /Script/InterchangeImport.MaterialExpressionMaterialXMinus
/// Size: 0x0080 (0x0000B0 - 0x000130)
class UMaterialExpressionMaterialXMinus : public UMaterialExpression
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	SMember(FExpressionInput)                          A                                                           OFFSET(getStruct<T>, {0xB0, 40, 0, 0})
	SMember(FExpressionInput)                          B                                                           OFFSET(getStruct<T>, {0xD8, 40, 0, 0})
	SMember(FExpressionInput)                          Alpha                                                       OFFSET(getStruct<T>, {0x100, 40, 0, 0})
	DMember(float)                                     ConstAlpha                                                  OFFSET(get<float>, {0x128, 4, 0, 0})
};

/// Class /Script/InterchangeImport.MaterialExpressionMaterialXOut
/// Size: 0x0080 (0x0000B0 - 0x000130)
class UMaterialExpressionMaterialXOut : public UMaterialExpression
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	SMember(FExpressionInput)                          A                                                           OFFSET(getStruct<T>, {0xB0, 40, 0, 0})
	SMember(FExpressionInput)                          B                                                           OFFSET(getStruct<T>, {0xD8, 40, 0, 0})
	SMember(FExpressionInput)                          Alpha                                                       OFFSET(getStruct<T>, {0x100, 40, 0, 0})
	DMember(float)                                     ConstAlpha                                                  OFFSET(get<float>, {0x128, 4, 0, 0})
};

/// Class /Script/InterchangeImport.MaterialExpressionMaterialXOver
/// Size: 0x0080 (0x0000B0 - 0x000130)
class UMaterialExpressionMaterialXOver : public UMaterialExpression
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	SMember(FExpressionInput)                          A                                                           OFFSET(getStruct<T>, {0xB0, 40, 0, 0})
	SMember(FExpressionInput)                          B                                                           OFFSET(getStruct<T>, {0xD8, 40, 0, 0})
	SMember(FExpressionInput)                          Alpha                                                       OFFSET(getStruct<T>, {0x100, 40, 0, 0})
	DMember(float)                                     ConstAlpha                                                  OFFSET(get<float>, {0x128, 4, 0, 0})
};

/// Class /Script/InterchangeImport.MaterialExpressionMaterialXOverlay
/// Size: 0x0080 (0x0000B0 - 0x000130)
class UMaterialExpressionMaterialXOverlay : public UMaterialExpression
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	SMember(FExpressionInput)                          A                                                           OFFSET(getStruct<T>, {0xB0, 40, 0, 0})
	SMember(FExpressionInput)                          B                                                           OFFSET(getStruct<T>, {0xD8, 40, 0, 0})
	SMember(FExpressionInput)                          Alpha                                                       OFFSET(getStruct<T>, {0x100, 40, 0, 0})
	DMember(float)                                     ConstAlpha                                                  OFFSET(get<float>, {0x128, 4, 0, 0})
};

/// Class /Script/InterchangeImport.MaterialExpressionMaterialXPlace2D
/// Size: 0x00D0 (0x0000B0 - 0x000180)
class UMaterialExpressionMaterialXPlace2D : public UMaterialExpression
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 384;

public:
	SMember(FExpressionInput)                          Coordinates                                                 OFFSET(getStruct<T>, {0xB0, 40, 0, 0})
	SMember(FExpressionInput)                          Pivot                                                       OFFSET(getStruct<T>, {0xD8, 40, 0, 0})
	SMember(FExpressionInput)                          Scale                                                       OFFSET(getStruct<T>, {0x100, 40, 0, 0})
	SMember(FExpressionInput)                          Offset                                                      OFFSET(getStruct<T>, {0x128, 40, 0, 0})
	SMember(FExpressionInput)                          RotationAngle                                               OFFSET(getStruct<T>, {0x150, 40, 0, 0})
	DMember(float)                                     ConstRotationAngle                                          OFFSET(get<float>, {0x178, 4, 0, 0})
	DMember(char)                                      ConstCoordinate                                             OFFSET(get<char>, {0x17C, 1, 0, 0})
};

/// Class /Script/InterchangeImport.MaterialExpressionMaterialXPlus
/// Size: 0x0080 (0x0000B0 - 0x000130)
class UMaterialExpressionMaterialXPlus : public UMaterialExpression
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	SMember(FExpressionInput)                          A                                                           OFFSET(getStruct<T>, {0xB0, 40, 0, 0})
	SMember(FExpressionInput)                          B                                                           OFFSET(getStruct<T>, {0xD8, 40, 0, 0})
	SMember(FExpressionInput)                          Alpha                                                       OFFSET(getStruct<T>, {0x100, 40, 0, 0})
	DMember(float)                                     ConstAlpha                                                  OFFSET(get<float>, {0x128, 4, 0, 0})
};

/// Class /Script/InterchangeImport.MaterialExpressionMaterialXPremult
/// Size: 0x0028 (0x0000B0 - 0x0000D8)
class UMaterialExpressionMaterialXPremult : public UMaterialExpression
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	SMember(FExpressionInput)                          Input                                                       OFFSET(getStruct<T>, {0xB0, 40, 0, 0})
};

/// Class /Script/InterchangeImport.MaterialExpressionMaterialXRampLeftRight
/// Size: 0x0080 (0x0000B0 - 0x000130)
class UMaterialExpressionMaterialXRampLeftRight : public UMaterialExpression
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	SMember(FExpressionInput)                          Coordinates                                                 OFFSET(getStruct<T>, {0xB0, 40, 0, 0})
	SMember(FExpressionInput)                          A                                                           OFFSET(getStruct<T>, {0xD8, 40, 0, 0})
	SMember(FExpressionInput)                          B                                                           OFFSET(getStruct<T>, {0x100, 40, 0, 0})
	DMember(char)                                      ConstCoordinate                                             OFFSET(get<char>, {0x128, 1, 0, 0})
};

/// Class /Script/InterchangeImport.MaterialExpressionMaterialXRampTopBottom
/// Size: 0x0080 (0x0000B0 - 0x000130)
class UMaterialExpressionMaterialXRampTopBottom : public UMaterialExpression
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	SMember(FExpressionInput)                          Coordinates                                                 OFFSET(getStruct<T>, {0xB0, 40, 0, 0})
	SMember(FExpressionInput)                          A                                                           OFFSET(getStruct<T>, {0xD8, 40, 0, 0})
	SMember(FExpressionInput)                          B                                                           OFFSET(getStruct<T>, {0x100, 40, 0, 0})
	DMember(char)                                      ConstCoordinate                                             OFFSET(get<char>, {0x128, 1, 0, 0})
};

/// Class /Script/InterchangeImport.MaterialExpressionMaterialXRemap
/// Size: 0x00D8 (0x0000B0 - 0x000188)
class UMaterialExpressionMaterialXRemap : public UMaterialExpression
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 392;

public:
	SMember(FExpressionInput)                          Input                                                       OFFSET(getStruct<T>, {0xB0, 40, 0, 0})
	SMember(FExpressionInput)                          InputLow                                                    OFFSET(getStruct<T>, {0xD8, 40, 0, 0})
	SMember(FExpressionInput)                          InputHigh                                                   OFFSET(getStruct<T>, {0x100, 40, 0, 0})
	SMember(FExpressionInput)                          TargetLow                                                   OFFSET(getStruct<T>, {0x128, 40, 0, 0})
	SMember(FExpressionInput)                          TargetHigh                                                  OFFSET(getStruct<T>, {0x150, 40, 0, 0})
	DMember(float)                                     InputLowDefault                                             OFFSET(get<float>, {0x178, 4, 0, 0})
	DMember(float)                                     InputHighDefault                                            OFFSET(get<float>, {0x17C, 4, 0, 0})
	DMember(float)                                     TargetLowDefault                                            OFFSET(get<float>, {0x180, 4, 0, 0})
	DMember(float)                                     TargetHighDefault                                           OFFSET(get<float>, {0x184, 4, 0, 0})
};

/// Class /Script/InterchangeImport.MaterialExpressionMaterialXRotate2D
/// Size: 0x0058 (0x0000B0 - 0x000108)
class UMaterialExpressionMaterialXRotate2D : public UMaterialExpression
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:
	SMember(FExpressionInput)                          Input                                                       OFFSET(getStruct<T>, {0xB0, 40, 0, 0})
	SMember(FExpressionInput)                          RotationAngle                                               OFFSET(getStruct<T>, {0xD8, 40, 0, 0})
	DMember(float)                                     ConstRotationAngle                                          OFFSET(get<float>, {0x100, 4, 0, 0})
};

/// Class /Script/InterchangeImport.MaterialExpressionMaterialXScreen
/// Size: 0x0080 (0x0000B0 - 0x000130)
class UMaterialExpressionMaterialXScreen : public UMaterialExpression
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	SMember(FExpressionInput)                          A                                                           OFFSET(getStruct<T>, {0xB0, 40, 0, 0})
	SMember(FExpressionInput)                          B                                                           OFFSET(getStruct<T>, {0xD8, 40, 0, 0})
	SMember(FExpressionInput)                          Alpha                                                       OFFSET(getStruct<T>, {0x100, 40, 0, 0})
	DMember(float)                                     ConstAlpha                                                  OFFSET(get<float>, {0x128, 4, 0, 0})
};

/// Class /Script/InterchangeImport.MaterialExpressionMaterialXSplitLeftRight
/// Size: 0x00A8 (0x0000B0 - 0x000158)
class UMaterialExpressionMaterialXSplitLeftRight : public UMaterialExpression
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 344;

public:
	SMember(FExpressionInput)                          Coordinates                                                 OFFSET(getStruct<T>, {0xB0, 40, 0, 0})
	SMember(FExpressionInput)                          A                                                           OFFSET(getStruct<T>, {0xD8, 40, 0, 0})
	SMember(FExpressionInput)                          B                                                           OFFSET(getStruct<T>, {0x100, 40, 0, 0})
	SMember(FExpressionInput)                          Center                                                      OFFSET(getStruct<T>, {0x128, 40, 0, 0})
	DMember(float)                                     ConstCenter                                                 OFFSET(get<float>, {0x150, 4, 0, 0})
	DMember(char)                                      ConstCoordinate                                             OFFSET(get<char>, {0x154, 1, 0, 0})
};

/// Class /Script/InterchangeImport.MaterialExpressionMaterialXSplitTopBottom
/// Size: 0x00A8 (0x0000B0 - 0x000158)
class UMaterialExpressionMaterialXSplitTopBottom : public UMaterialExpression
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 344;

public:
	SMember(FExpressionInput)                          Coordinates                                                 OFFSET(getStruct<T>, {0xB0, 40, 0, 0})
	SMember(FExpressionInput)                          A                                                           OFFSET(getStruct<T>, {0xD8, 40, 0, 0})
	SMember(FExpressionInput)                          B                                                           OFFSET(getStruct<T>, {0x100, 40, 0, 0})
	SMember(FExpressionInput)                          Center                                                      OFFSET(getStruct<T>, {0x128, 40, 0, 0})
	DMember(float)                                     ConstCenter                                                 OFFSET(get<float>, {0x150, 4, 0, 0})
	DMember(char)                                      ConstCoordinate                                             OFFSET(get<char>, {0x154, 1, 0, 0})
};

/// Class /Script/InterchangeImport.MaterialExpressionMaterialXSwizzle
/// Size: 0x0038 (0x0000B0 - 0x0000E8)
class UMaterialExpressionMaterialXSwizzle : public UMaterialExpression
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
	SMember(FExpressionInput)                          Input                                                       OFFSET(getStruct<T>, {0xB0, 40, 0, 0})
	SMember(FString)                                   Channels                                                    OFFSET(getStruct<T>, {0xD8, 16, 0, 0})
};

/// Class /Script/InterchangeImport.MaterialExpressionMaterialXTextureSampleParameterBlur
/// Size: 0x0010 (0x000218 - 0x000228)
class UMaterialExpressionMaterialXTextureSampleParameterBlur : public UMaterialExpressionTextureSampleParameter2D
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 552;

public:
	CMember(EMAterialXTextureSampleBlurKernel)         KernelSize                                                  OFFSET(get<T>, {0x218, 4, 0, 0})
	DMember(float)                                     FilterSize                                                  OFFSET(get<float>, {0x21C, 4, 0, 0})
	DMember(float)                                     FilterOffset                                                OFFSET(get<float>, {0x220, 4, 0, 0})
	CMember(EMaterialXTextureSampleBlurFilter)         Filter                                                      OFFSET(get<T>, {0x224, 1, 0, 0})
};

/// Class /Script/InterchangeImport.MaterialExpressionMaterialXUnpremult
/// Size: 0x0028 (0x0000B0 - 0x0000D8)
class UMaterialExpressionMaterialXUnpremult : public UMaterialExpression
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	SMember(FExpressionInput)                          Input                                                       OFFSET(getStruct<T>, {0xB0, 40, 0, 0})
};

/// Class /Script/InterchangeImport.InterchangeMaterialFactory
/// Size: 0x0008 (0x000030 - 0x000038)
class UInterchangeMaterialFactory : public UInterchangeFactoryBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Script/InterchangeImport.InterchangeMaterialFunctionFactory
/// Size: 0x0008 (0x000030 - 0x000038)
class UInterchangeMaterialFunctionFactory : public UInterchangeFactoryBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Script/InterchangeImport.InterchangeOBJTranslator
/// Size: 0x0018 (0x000038 - 0x000050)
class UInterchangeOBJTranslator : public UInterchangeTranslatorBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Class /Script/InterchangeImport.InterchangePhysicsAssetFactory
/// Size: 0x0000 (0x000030 - 0x000030)
class UInterchangePhysicsAssetFactory : public UInterchangeFactoryBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/InterchangeImport.InterchangeSkeletalMeshFactory
/// Size: 0x0050 (0x000030 - 0x000080)
class UInterchangeSkeletalMeshFactory : public UInterchangeFactoryBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
};

/// Class /Script/InterchangeImport.InterchangeSkeletonFactory
/// Size: 0x0000 (0x000030 - 0x000030)
class UInterchangeSkeletonFactory : public UInterchangeFactoryBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/InterchangeImport.InterchangeStaticMeshFactory
/// Size: 0x0018 (0x000030 - 0x000048)
class UInterchangeStaticMeshFactory : public UInterchangeFactoryBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Class /Script/InterchangeImport.InterchangeCineCameraActorFactory
/// Size: 0x0000 (0x000030 - 0x000030)
class UInterchangeCineCameraActorFactory : public UInterchangeActorFactory
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/InterchangeImport.InterchangeCameraActorFactory
/// Size: 0x0000 (0x000030 - 0x000030)
class UInterchangeCameraActorFactory : public UInterchangeActorFactory
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/InterchangeImport.InterchangeSkeletalMeshActorFactory
/// Size: 0x0000 (0x000030 - 0x000030)
class UInterchangeSkeletalMeshActorFactory : public UInterchangeActorFactory
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/InterchangeImport.InterchangeStaticMeshActorFactory
/// Size: 0x0000 (0x000030 - 0x000030)
class UInterchangeStaticMeshActorFactory : public UInterchangeActorFactory
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/InterchangeImport.InterchangeDDSTranslator
/// Size: 0x0010 (0x000038 - 0x000048)
class UInterchangeDDSTranslator : public UInterchangeTranslatorBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Class /Script/InterchangeImport.InterchangeIESTranslator
/// Size: 0x0008 (0x000038 - 0x000040)
class UInterchangeIESTranslator : public UInterchangeTranslatorBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Script/InterchangeImport.InterchangeImageWrapperTranslator
/// Size: 0x0010 (0x000038 - 0x000048)
class UInterchangeImageWrapperTranslator : public UInterchangeTranslatorBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Class /Script/InterchangeImport.InterchangeJPGTranslator
/// Size: 0x0008 (0x000038 - 0x000040)
class UInterchangeJPGTranslator : public UInterchangeTranslatorBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Script/InterchangeImport.InterchangePCXTranslator
/// Size: 0x0008 (0x000038 - 0x000040)
class UInterchangePCXTranslator : public UInterchangeTranslatorBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Script/InterchangeImport.InterchangePSDTranslator
/// Size: 0x0008 (0x000038 - 0x000040)
class UInterchangePSDTranslator : public UInterchangeTranslatorBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Script/InterchangeImport.InterchangeTextureFactory
/// Size: 0x0090 (0x000030 - 0x0000C0)
class UInterchangeTextureFactory : public UInterchangeFactoryBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
};

/// Class /Script/InterchangeImport.InterchangeUEJPEGTranslator
/// Size: 0x0008 (0x000038 - 0x000040)
class UInterchangeUEJPEGTranslator : public UInterchangeTranslatorBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Enum /Script/InterchangeImport.EMaterialXLuminanceMode
/// Size: 0x05
enum class EMaterialXLuminanceMode : uint8_t
{
	EMaterialXLuminanceMode__ACEScg                                                  = 0,
	EMaterialXLuminanceMode__Rec709                                                  = 1,
	EMaterialXLuminanceMode__Rec2020                                                 = 2,
	EMaterialXLuminanceMode__Rec2100                                                 = 2,
	EMaterialXLuminanceMode__Custom                                                  = 3
};

/// Enum /Script/InterchangeImport.EMaterialXTextureSampleBlurFilter
/// Size: 0x02
enum class EMaterialXTextureSampleBlurFilter : uint8_t
{
	EMaterialXTextureSampleBlurFilter__Box                                           = 0,
	EMaterialXTextureSampleBlurFilter__Gaussian                                      = 1
};

/// Enum /Script/InterchangeImport.EMAterialXTextureSampleBlurKernel
/// Size: 0x04
enum class EMAterialXTextureSampleBlurKernel : uint32_t
{
	EMAterialXTextureSampleBlurKernel__Kernel1                                       = 0,
	EMAterialXTextureSampleBlurKernel__Kernel3                                       = 1,
	EMAterialXTextureSampleBlurKernel__Kernel5                                       = 2,
	EMAterialXTextureSampleBlurKernel__Kernel7                                       = 3
};

