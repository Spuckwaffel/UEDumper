
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine
/// dependency: SoundCueTemplates

/// Class /Script/FortSoundCueTemplates.FortSoundCueTemplateBase
/// Size: 0x0000 (0x000560 - 0x000560)
class UFortSoundCueTemplateBase : public USoundCueTemplate
{ 
public:
};

/// Class /Script/FortSoundCueTemplates.EmoteBase
/// Size: 0x0000 (0x000560 - 0x000560)
class UEmoteBase : public UFortSoundCueTemplateBase
{ 
public:
};

/// Class /Script/FortSoundCueTemplates.EmoteFoley
/// Size: 0x0000 (0x000560 - 0x000560)
class UEmoteFoley : public UEmoteBase
{ 
public:
};

/// Class /Script/FortSoundCueTemplates.EmoteMusic
/// Size: 0x0000 (0x000560 - 0x000560)
class UEmoteMusic : public UEmoteBase
{ 
public:
};

/// Class /Script/FortSoundCueTemplates.EmoteMusic3P
/// Size: 0x0000 (0x000560 - 0x000560)
class UEmoteMusic3P : public UEmoteBase
{ 
public:
};

/// Class /Script/FortSoundCueTemplates.PlayerFoleyBase
/// Size: 0x0000 (0x000560 - 0x000560)
class UPlayerFoleyBase : public UFortSoundCueTemplateBase
{ 
public:
};

/// Class /Script/FortSoundCueTemplates.PlayerFoley
/// Size: 0x0000 (0x000560 - 0x000560)
class UPlayerFoley : public UPlayerFoleyBase
{ 
public:
};

/// Class /Script/FortSoundCueTemplates.FootstepFoley
/// Size: 0x0000 (0x000560 - 0x000560)
class UFootstepFoley : public UPlayerFoley
{ 
public:
};

/// Struct /Script/FortSoundCueTemplates.FortSubmixPair
/// Size: 0x0010 (0x000000 - 0x000010)
struct FFortSubmixPair
{ 
	class USoundSubmixBase*                            Submix;                                                     // 0x0000   (0x0008)  
	float                                              SendAmount;                                                 // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
};

/// Struct /Script/FortSoundCueTemplates.FortBusPair
/// Size: 0x0018 (0x000000 - 0x000018)
struct FFortBusPair
{ 
	class USoundSourceBus*                             SourceBus;                                                  // 0x0000   (0x0008)  
	class UAudioBus*                                   AudioBus;                                                   // 0x0008   (0x0008)  
	float                                              SendAmount;                                                 // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Class /Script/FortSoundCueTemplates.FortSoundCueTemplateDefaults
/// Size: 0x0060 (0x000030 - 0x000090)
class UFortSoundCueTemplateDefaults : public UDataAsset
{ 
public:
	class USoundClass*                                 SoundClass;                                                 // 0x0030   (0x0008)  
	class USoundAttenuation*                           Attenuation;                                                // 0x0038   (0x0008)  
	class USoundConcurrency*                           Concurrency;                                                // 0x0040   (0x0008)  
	float                                              VolumeMultiplier;                                           // 0x0048   (0x0004)  
	float                                              PitchMultiplier;                                            // 0x004C   (0x0004)  
	TArray<FFortSubmixPair>                            SubmixSends;                                                // 0x0050   (0x0010)  
	TArray<FFortBusPair>                               PreEffectBusSends;                                          // 0x0060   (0x0010)  
	TArray<FFortBusPair>                               PostEffectBusSends;                                         // 0x0070   (0x0010)  
	class USoundWave*                                  LicensedTrackAlternative;                                   // 0x0080   (0x0008)  
	class USoundSubmixBase*                            LicensedSubmix;                                             // 0x0088   (0x0008)  
};

/// Class /Script/FortSoundCueTemplates.FortSoundCueTemplateDefaultSettings
/// Size: 0x0050 (0x000030 - 0x000080)
class UFortSoundCueTemplateDefaultSettings : public UDataAsset
{ 
public:
	SDK_UNDEFINED(80,14022) /* TMap<UClass*, UFortSoundCueTemplateDefaults*> */ __um(TemplateDefaults);            // 0x0030   (0x0050)  


	/// Functions
	// Function /Script/FortSoundCueTemplates.FortSoundCueTemplateDefaultSettings.GetSettingsForTemplateType
	// class UFortSoundCueTemplateDefaults* GetSettingsForTemplateType(class UClass* TemplateType);                          // [0xb8c2be0] Final|Native|Public  
};

/// Class /Script/FortSoundCueTemplates.FortSoundCueTemplateSettings
/// Size: 0x0020 (0x000030 - 0x000050)
class UFortSoundCueTemplateSettings : public UDeveloperSettings
{ 
public:
	SDK_UNDEFINED(32,14023) /* TWeakObjectPtr<UFortSoundCueTemplateDefaultSettings*> */ __um(DefaultTemplateSettings); // 0x0030   (0x0020)  


	/// Functions
	// Function /Script/FortSoundCueTemplates.FortSoundCueTemplateSettings.GetDefaultSettingsForTemplateType
	// class UFortSoundCueTemplateDefaults* GetDefaultSettingsForTemplateType(class UClass* TemplateType);                   // [0xb8c2b20] Final|Native|Public|Const 
};

/// Class /Script/FortSoundCueTemplates.FortSoundCueTemplateSimple
/// Size: 0x0000 (0x000560 - 0x000560)
class UFortSoundCueTemplateSimple : public UFortSoundCueTemplateBase
{ 
public:
};

/// Struct /Script/FortSoundCueTemplates.FortContinuousModulatorConfig
/// Size: 0x0028 (0x000000 - 0x000028)
struct FFortContinuousModulatorConfig
{ 
	FVector2D                                          VolumeRange;                                                // 0x0000   (0x0010)  
	FVector2D                                          PitchRange;                                                 // 0x0010   (0x0010)  
	SDK_UNDEFINED(1,14024) /* TEnumAsByte<ModulationParamMode> */ __um(VolumeMode);                                // 0x0020   (0x0001)  
	SDK_UNDEFINED(1,14025) /* TEnumAsByte<ModulationParamMode> */ __um(PitchMode);                                 // 0x0021   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x0022   (0x0006)  MISSED
};

/// Struct /Script/FortSoundCueTemplates.GliderThrustData
/// Size: 0x0058 (0x000000 - 0x000058)
struct FGliderThrustData
{ 
	FName                                              ParameterName;                                              // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	FVector2D                                          PitchOutput;                                                // 0x0008   (0x0010)  
	FVector2D                                          VolumeOutput;                                               // 0x0018   (0x0010)  
	class USoundWave*                                  sound;                                                      // 0x0028   (0x0008)  
	FFortContinuousModulatorConfig                     Settings;                                                   // 0x0030   (0x0028)  
};

/// Class /Script/FortSoundCueTemplates.GliderThrustSCTDefaults
/// Size: 0x0160 (0x000090 - 0x0001F0)
class UGliderThrustSCTDefaults : public UFortSoundCueTemplateDefaults
{ 
public:
	FGliderThrustData                                  Forward;                                                    // 0x0090   (0x0058)  
	FGliderThrustData                                  Sideways;                                                   // 0x00E8   (0x0058)  
	FGliderThrustData                                  Backwards;                                                  // 0x0140   (0x0058)  
	FGliderThrustData                                  AnyDirection;                                               // 0x0198   (0x0058)  
};

/// Class /Script/FortSoundCueTemplates.GliderThrustLoop
/// Size: 0x0000 (0x000560 - 0x000560)
class UGliderThrustLoop : public UFortSoundCueTemplateBase
{ 
public:
};

/// Class /Script/FortSoundCueTemplates.GliderThrustStart
/// Size: 0x0000 (0x000560 - 0x000560)
class UGliderThrustStart : public UFortSoundCueTemplateBase
{ 
public:
};

/// Class /Script/FortSoundCueTemplates.GliderOpen
/// Size: 0x0000 (0x000560 - 0x000560)
class UGliderOpen : public UFortSoundCueTemplateSimple
{ 
public:
};

/// Class /Script/FortSoundCueTemplates.GliderClose
/// Size: 0x0000 (0x000560 - 0x000560)
class UGliderClose : public UFortSoundCueTemplateSimple
{ 
public:
};

/// Class /Script/FortSoundCueTemplates.MusicPack
/// Size: 0x0000 (0x000560 - 0x000560)
class UMusicPack : public UFortSoundCueTemplateBase
{ 
public:
};

/// Struct /Script/FortSoundCueTemplates.PhysicsStateData
/// Size: 0x0090 (0x000000 - 0x000090)
struct FPhysicsStateData
{ 
	FName                                              ParameterName;                                              // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	FVector2D                                          VolumeOutput;                                               // 0x0008   (0x0010)  
	FVector2D                                          PitchOutput;                                                // 0x0018   (0x0010)  
	FFortContinuousModulatorConfig                     Settings;                                                   // 0x0028   (0x0028)  
	FDistanceDatum                                     CrossfadeInputSlow;                                         // 0x0050   (0x0014)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0064   (0x0004)  MISSED
	class USoundWave*                                  SlowLoop;                                                   // 0x0068   (0x0008)  
	FDistanceDatum                                     CrossfadeInputFast;                                         // 0x0070   (0x0014)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x0084   (0x0004)  MISSED
	class USoundWave*                                  FastLoop;                                                   // 0x0088   (0x0008)  
};

/// Class /Script/FortSoundCueTemplates.PhysicsStateSCTDefaults
/// Size: 0x0248 (0x000090 - 0x0002D8)
class UPhysicsStateSCTDefaults : public UFortSoundCueTemplateDefaults
{ 
public:
	FName                                              SpeedParameterName;                                         // 0x0090   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0094   (0x0004)  MISSED
	FPhysicsStateData                                  Rolling;                                                    // 0x0098   (0x0090)  
	FPhysicsStateData                                  Sliding;                                                    // 0x0128   (0x0090)  
	FPhysicsStateData                                  Flying;                                                     // 0x01B8   (0x0090)  
	FPhysicsStateData                                  Floating;                                                   // 0x0248   (0x0090)  
};

/// Class /Script/FortSoundCueTemplates.PhysicsStateLoop
/// Size: 0x0000 (0x000560 - 0x000560)
class UPhysicsStateLoop : public UFortSoundCueTemplateBase
{ 
public:
};

/// Struct /Script/FortSoundCueTemplates.PhysicsImpactData
/// Size: 0x0058 (0x000000 - 0x000058)
struct FPhysicsImpactData
{ 
	FVector2D                                          VolumeOutput;                                               // 0x0000   (0x0010)  
	FVector2D                                          PitchOutput;                                                // 0x0010   (0x0010)  
	FFortContinuousModulatorConfig                     Settings;                                                   // 0x0020   (0x0028)  
	TArray<class USoundWave*>                          Variations;                                                 // 0x0048   (0x0010)  
};

/// Class /Script/FortSoundCueTemplates.PhysicsImpactSCTDefaults
/// Size: 0x0110 (0x000090 - 0x0001A0)
class UPhysicsImpactSCTDefaults : public UFortSoundCueTemplateDefaults
{ 
public:
	FName                                              ImpactTypeParameterName;                                    // 0x0090   (0x0004)  
	FName                                              StrengthParameterName;                                      // 0x0094   (0x0004)  
	FPhysicsImpactData                                 Light;                                                      // 0x0098   (0x0058)  
	FPhysicsImpactData                                 Medium;                                                     // 0x00F0   (0x0058)  
	FPhysicsImpactData                                 Heavy;                                                      // 0x0148   (0x0058)  
};

/// Class /Script/FortSoundCueTemplates.PhysicsImpact
/// Size: 0x0000 (0x000560 - 0x000560)
class UPhysicsImpact : public UFortSoundCueTemplateBase
{ 
public:
};

/// Class /Script/FortSoundCueTemplates.PickaxeSCTDefaults
/// Size: 0x0020 (0x000090 - 0x0000B0)
class UPickaxeSCTDefaults : public UFortSoundCueTemplateDefaults
{ 
public:
	class USoundAttenuation*                           CloseAttenuation;                                           // 0x0090   (0x0008)  
	class USoundAttenuation*                           DistantAttenuation;                                         // 0x0098   (0x0008)  
	TArray<class USoundWave*>                          DistantVariations;                                          // 0x00A0   (0x0010)  
};

/// Class /Script/FortSoundCueTemplates.PickaxeBase
/// Size: 0x0000 (0x000560 - 0x000560)
class UPickaxeBase : public UFortSoundCueTemplateBase
{ 
public:
};

/// Class /Script/FortSoundCueTemplates.PickaxeSwing
/// Size: 0x0000 (0x000560 - 0x000560)
class UPickaxeSwing : public UPickaxeBase
{ 
public:
};

/// Class /Script/FortSoundCueTemplates.PickaxeReady
/// Size: 0x0000 (0x000560 - 0x000560)
class UPickaxeReady : public UPickaxeBase
{ 
public:
};

/// Class /Script/FortSoundCueTemplates.PickaxeImpactEnemy
/// Size: 0x0000 (0x000560 - 0x000560)
class UPickaxeImpactEnemy : public UFortSoundCueTemplateSimple
{ 
public:
};

/// Class /Script/FortSoundCueTemplates.PlayerFoleyDefaults
/// Size: 0x0048 (0x000090 - 0x0000D8)
class UPlayerFoleyDefaults : public UFortSoundCueTemplateDefaults
{ 
public:
	class USoundClass*                                 LocalPlayerSoundClass;                                      // 0x0090   (0x0008)  
	class USoundClass*                                 TeammateSoundClass;                                         // 0x0098   (0x0008)  
	class USoundClass*                                 HostileSoundClass;                                          // 0x00A0   (0x0008)  
	class USoundAttenuation*                           LocalPlayerAttenuation;                                     // 0x00A8   (0x0008)  
	class USoundAttenuation*                           AboveAttenuation;                                           // 0x00B0   (0x0008)  
	class USoundAttenuation*                           BelowAttenuation;                                           // 0x00B8   (0x0008)  
	class USoundAttenuation*                           ParallelAttenuation;                                        // 0x00C0   (0x0008)  
	TArray<FDistanceDatum>                             ElevationCrossfadeDistances;                                // 0x00C8   (0x0010)  
};

/// Class /Script/FortSoundCueTemplates.WeaponLowAmmo
/// Size: 0x0000 (0x000560 - 0x000560)
class UWeaponLowAmmo : public UFortSoundCueTemplateSimple
{ 
public:
};

/// Class /Script/FortSoundCueTemplates.WeaponOutOfAmmo
/// Size: 0x0000 (0x000560 - 0x000560)
class UWeaponOutOfAmmo : public UFortSoundCueTemplateSimple
{ 
public:
};

/// Class /Script/FortSoundCueTemplates.WeaponReloadStart
/// Size: 0x0000 (0x000560 - 0x000560)
class UWeaponReloadStart : public UFortSoundCueTemplateSimple
{ 
public:
};

/// Class /Script/FortSoundCueTemplates.WeaponReloadInsert
/// Size: 0x0000 (0x000560 - 0x000560)
class UWeaponReloadInsert : public UFortSoundCueTemplateSimple
{ 
public:
};

/// Class /Script/FortSoundCueTemplates.WeaponReloadEnd
/// Size: 0x0000 (0x000560 - 0x000560)
class UWeaponReloadEnd : public UFortSoundCueTemplateSimple
{ 
public:
};

/// Class /Script/FortSoundCueTemplates.WeaponTargetingStart
/// Size: 0x0000 (0x000560 - 0x000560)
class UWeaponTargetingStart : public UFortSoundCueTemplateSimple
{ 
public:
};

/// Class /Script/FortSoundCueTemplates.WeaponTargetingEnd
/// Size: 0x0000 (0x000560 - 0x000560)
class UWeaponTargetingEnd : public UFortSoundCueTemplateSimple
{ 
public:
};

