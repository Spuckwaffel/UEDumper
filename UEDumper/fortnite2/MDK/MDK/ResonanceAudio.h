
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: AudioExtensions
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/ResonanceAudio.ResonanceAudioSoundfieldSettings
/// Size: 0x0008 (0x000028 - 0x000030)
class UResonanceAudioSoundfieldSettings : public USoundfieldEncodingSettingsBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(EResonanceRenderMode)                      RenderMode                                                  OFFSET(get<T>, {0x28, 1, 0, 0})
};

/// Class /Script/ResonanceAudio.ResonanceAudioBlueprintFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UResonanceAudioBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/ResonanceAudio.ResonanceAudioBlueprintFunctionLibrary.SetGlobalReverbPreset
	// void SetGlobalReverbPreset(class UResonanceAudioReverbPluginPreset* InPreset);                                           // [0xd2bc6dc] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/ResonanceAudio.ResonanceAudioBlueprintFunctionLibrary.GetGlobalReverbPreset
	// class UResonanceAudioReverbPluginPreset* GetGlobalReverbPreset();                                                        // [0xd2bc5e0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/ResonanceAudio.ResonanceAudioDirectivityVisualizer
/// Size: 0x0080 (0x000290 - 0x000310)
class AResonanceAudioDirectivityVisualizer : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 784;

public:
	CMember(class UMaterial*)                          Material                                                    OFFSET(get<T>, {0x300, 8, 0, 0})
	CMember(class UResonanceAudioSpatializationSourceSettings*) Settings                                           OFFSET(get<T>, {0x308, 8, 0, 0})
};

/// Class /Script/ResonanceAudio.ResonanceAudioReverbPluginPreset
/// Size: 0x0108 (0x000068 - 0x000170)
class UResonanceAudioReverbPluginPreset : public USoundEffectSubmixPreset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 368;

public:
	SMember(FResonanceAudioReverbPluginSettings)       Settings                                                    OFFSET(getStruct<T>, {0x100, 112, 0, 0})


	/// Functions
	// Function /Script/ResonanceAudio.ResonanceAudioReverbPluginPreset.SetRoomRotation
	// void SetRoomRotation(FQuat& InRotation);                                                                                 // [0xd2bd2b0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/ResonanceAudio.ResonanceAudioReverbPluginPreset.SetRoomPosition
	// void SetRoomPosition(FVector& InPosition);                                                                               // [0xd2bd1ec] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/ResonanceAudio.ResonanceAudioReverbPluginPreset.SetRoomMaterials
	// void SetRoomMaterials(TArray<ERaMaterialName>& InMaterials);                                                             // [0xd2bcae8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ResonanceAudio.ResonanceAudioReverbPluginPreset.SetRoomDimensions
	// void SetRoomDimensions(FVector& InDimensions);                                                                           // [0xd2bca24] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/ResonanceAudio.ResonanceAudioReverbPluginPreset.SetReverbTimeModifier
	// void SetReverbTimeModifier(float InReverbTimeModifier);                                                                  // [0xd2bc994] Final|Native|Public|BlueprintCallable 
	// Function /Script/ResonanceAudio.ResonanceAudioReverbPluginPreset.SetReverbGain
	// void SetReverbGain(float InReverbGain);                                                                                  // [0xd2bc904] Final|Native|Public|BlueprintCallable 
	// Function /Script/ResonanceAudio.ResonanceAudioReverbPluginPreset.SetReverbBrightness
	// void SetReverbBrightness(float InReverbBrightness);                                                                      // [0xd2bc874] Final|Native|Public|BlueprintCallable 
	// Function /Script/ResonanceAudio.ResonanceAudioReverbPluginPreset.SetReflectionScalar
	// void SetReflectionScalar(float InReflectionScalar);                                                                      // [0xd2bc7e4] Final|Native|Public|BlueprintCallable 
	// Function /Script/ResonanceAudio.ResonanceAudioReverbPluginPreset.SetEnableRoomEffects
	// void SetEnableRoomEffects(bool bInEnableRoomEffects);                                                                    // [0xd2bc650] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/ResonanceAudio.ResonanceAudioSettings
/// Size: 0x0050 (0x000028 - 0x000078)
class UResonanceAudioSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	SMember(FSoftObjectPath)                           OutputSubmix                                                OFFSET(getStruct<T>, {0x28, 24, 0, 0})
	CMember(ERaQualityMode)                            QualityMode                                                 OFFSET(get<T>, {0x40, 1, 0, 0})
	SMember(FSoftObjectPath)                           GlobalReverbPreset                                          OFFSET(getStruct<T>, {0x48, 24, 0, 0})
	SMember(FSoftObjectPath)                           GlobalSourcePreset                                          OFFSET(getStruct<T>, {0x60, 24, 0, 0})
};

/// Class /Script/ResonanceAudio.ResonanceAudioSpatializationSourceSettings
/// Size: 0x0028 (0x000028 - 0x000050)
class UResonanceAudioSpatializationSourceSettings : public USpatializationPluginSourceSettingsBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(ERaSpatializationMethod)                   SpatializationMethod                                        OFFSET(get<T>, {0x28, 1, 0, 0})
	DMember(float)                                     Pattern                                                     OFFSET(get<float>, {0x2C, 4, 0, 0})
	DMember(float)                                     Sharpness                                                   OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(bool)                                      bToggleVisualization                                        OFFSET(get<bool>, {0x34, 1, 0, 0})
	DMember(float)                                     Scale                                                       OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     Spread                                                      OFFSET(get<float>, {0x3C, 4, 0, 0})
	CMember(ERaDistanceRolloffModel)                   Rolloff                                                     OFFSET(get<T>, {0x40, 1, 0, 0})
	DMember(float)                                     MinDistance                                                 OFFSET(get<float>, {0x44, 4, 0, 0})
	DMember(float)                                     MaxDistance                                                 OFFSET(get<float>, {0x48, 4, 0, 0})


	/// Functions
	// Function /Script/ResonanceAudio.ResonanceAudioSpatializationSourceSettings.SetSoundSourceSpread
	// void SetSoundSourceSpread(float InSpread);                                                                               // [0x6ab9e9c] Final|Native|Public|BlueprintCallable 
	// Function /Script/ResonanceAudio.ResonanceAudioSpatializationSourceSettings.SetSoundSourceDirectivity
	// void SetSoundSourceDirectivity(float InPattern, float InSharpness);                                                      // [0xd2bd338] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/ResonanceAudio.ResonanceAudioReverbPluginSettings
/// Size: 0x0070 (0x000000 - 0x000070)
class FResonanceAudioReverbPluginSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	DMember(bool)                                      bEnableRoomEffects                                          OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(bool)                                      bGetTransformFromAudioVolume                                OFFSET(get<bool>, {0x1, 1, 0, 0})
	SMember(FVector)                                   RoomPosition                                                OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	SMember(FQuat)                                     RoomRotation                                                OFFSET(getStruct<T>, {0x20, 32, 0, 0})
	SMember(FVector)                                   RoomDimensions                                              OFFSET(getStruct<T>, {0x40, 24, 0, 0})
	CMember(ERaMaterialName)                           LeftWallMaterial                                            OFFSET(get<T>, {0x58, 1, 0, 0})
	CMember(ERaMaterialName)                           RightWallMaterial                                           OFFSET(get<T>, {0x59, 1, 0, 0})
	CMember(ERaMaterialName)                           FloorMaterial                                               OFFSET(get<T>, {0x5A, 1, 0, 0})
	CMember(ERaMaterialName)                           CeilingMaterial                                             OFFSET(get<T>, {0x5B, 1, 0, 0})
	CMember(ERaMaterialName)                           FrontWallMaterial                                           OFFSET(get<T>, {0x5C, 1, 0, 0})
	CMember(ERaMaterialName)                           BackWallMaterial                                            OFFSET(get<T>, {0x5D, 1, 0, 0})
	DMember(float)                                     ReflectionScalar                                            OFFSET(get<float>, {0x60, 4, 0, 0})
	DMember(float)                                     ReverbGain                                                  OFFSET(get<float>, {0x64, 4, 0, 0})
	DMember(float)                                     ReverbTimeModifier                                          OFFSET(get<float>, {0x68, 4, 0, 0})
	DMember(float)                                     ReverbBrightness                                            OFFSET(get<float>, {0x6C, 4, 0, 0})
};

/// Enum /Script/ResonanceAudio.ERaQualityMode
/// Size: 0x04
enum class ERaQualityMode : uint8_t
{
	ERaQualityMode__STEREO_PANNING                                                   = 0,
	ERaQualityMode__BINAURAL_LOW                                                     = 1,
	ERaQualityMode__BINAURAL_MEDIUM                                                  = 2,
	ERaQualityMode__BINAURAL_HIGH                                                    = 3
};

/// Enum /Script/ResonanceAudio.ERaSpatializationMethod
/// Size: 0x02
enum class ERaSpatializationMethod : uint8_t
{
	ERaSpatializationMethod__STEREO_PANNING                                          = 0,
	ERaSpatializationMethod__HRTF                                                    = 1
};

/// Enum /Script/ResonanceAudio.ERaDistanceRolloffModel
/// Size: 0x03
enum class ERaDistanceRolloffModel : uint8_t
{
	ERaDistanceRolloffModel__LOGARITHMIC                                             = 0,
	ERaDistanceRolloffModel__LINEAR                                                  = 1,
	ERaDistanceRolloffModel__NONE                                                    = 2
};

/// Enum /Script/ResonanceAudio.ERaMaterialName
/// Size: 0x24
enum class ERaMaterialName : uint8_t
{
	ERaMaterialName__TRANSPARENT                                                     = 0,
	ERaMaterialName__ACOUSTIC_CEILING_TILES                                          = 1,
	ERaMaterialName__BRICK_BARE                                                      = 2,
	ERaMaterialName__BRICK_PAINTED                                                   = 3,
	ERaMaterialName__CONCRETE_BLOCK_COARSE                                           = 4,
	ERaMaterialName__CONCRETE_BLOCK_PAINTED                                          = 5,
	ERaMaterialName__CURTAIN_HEAVY                                                   = 6,
	ERaMaterialName__FIBER_GLASS_INSULATION                                          = 7,
	ERaMaterialName__GLASS_THIN                                                      = 8,
	ERaMaterialName__GLASS_THICK                                                     = 9,
	ERaMaterialName__GRASS                                                           = 10,
	ERaMaterialName__LINOLEUM_ON_CONCRETE                                            = 11,
	ERaMaterialName__MARBLE                                                          = 12,
	ERaMaterialName__METAL                                                           = 13,
	ERaMaterialName__PARQUET_ONCONCRETE                                              = 14,
	ERaMaterialName__PLASTER_ROUGH                                                   = 15,
	ERaMaterialName__PLASTER_SMOOTH                                                  = 16,
	ERaMaterialName__PLYWOOD_PANEL                                                   = 17,
	ERaMaterialName__POLISHED_CONCRETE_OR_TILE                                       = 18,
	ERaMaterialName__SHEETROCK                                                       = 19,
	ERaMaterialName__WATER_OR_ICE_SURFACE                                            = 20,
	ERaMaterialName__WOOD_CEILING                                                    = 21,
	ERaMaterialName__WOOD_PANEL                                                      = 22,
	ERaMaterialName__UNIFORM                                                         = 23
};

/// Enum /Script/ResonanceAudio.EResonanceRenderMode
/// Size: 0x05
enum class EResonanceRenderMode : uint8_t
{
	EResonanceRenderMode__StereoPanning                                              = 0,
	EResonanceRenderMode__BinauralLowQuality                                         = 1,
	EResonanceRenderMode__BinauralMediumQuality                                      = 2,
	EResonanceRenderMode__BinauralHighQuality                                        = 3,
	EResonanceRenderMode__RoomEffectsOnly                                            = 4
};

