
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: AudioExtensions
/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine
/// dependency: WaveTable

/// Class /Script/AudioModulation.AudioModulationStyle
/// Size: 0x0000 (0x000028 - 0x000028)
class UAudioModulationStyle : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/AudioModulation.AudioModulationStyle.GetPatchColor
	// FColor GetPatchColor();                                                                                                  // [0x8616b94] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioModulation.AudioModulationStyle.GetParameterColor
	// FColor GetParameterColor();                                                                                              // [0x8616b74] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioModulation.AudioModulationStyle.GetModulationGeneratorColor
	// FColor GetModulationGeneratorColor();                                                                                    // [0x8616a54] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioModulation.AudioModulationStyle.GetControlBusMixColor
	// FColor GetControlBusMixColor();                                                                                          // [0x8616a34] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioModulation.AudioModulationStyle.GetControlBusColor
	// FColor GetControlBusColor();                                                                                             // [0x8616a14] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/AudioModulation.AudioModulationDestination
/// Size: 0x0018 (0x000028 - 0x000040)
class UAudioModulationDestination : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(class USoundModulatorBase*)                Modulator                                                   OFFSET(get<T>, {0x28, 8, 0, 0})


	/// Functions
	// Function /Script/AudioModulation.AudioModulationDestination.SetModulator
	// bool SetModulator(class USoundModulatorBase* InModulator);                                                               // [0x861765c] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioModulation.AudioModulationDestination.GetValue
	// float GetValue();                                                                                                        // [0x8616bb4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AudioModulation.AudioModulationDestination.GetModulator
	// class USoundModulatorBase* GetModulator();                                                                               // [0x80f21c4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AudioModulation.AudioModulationDestination.ClearModulator
	// bool ClearModulator();                                                                                                   // [0x8614878] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/AudioModulation.AudioModulationSettings
/// Size: 0x0010 (0x000030 - 0x000040)
class UAudioModulationSettings : public UDeveloperSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(TArray<FSoftObjectPath>)                   Parameters                                                  OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Class /Script/AudioModulation.AudioModulationStatics
/// Size: 0x0000 (0x000028 - 0x000028)
class UAudioModulationStatics : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/AudioModulation.AudioModulationStatics.UpdateModulator
	// void UpdateModulator(class UObject* WorldContextObject, class USoundModulatorBase* Modulator);                           // [0x86188e8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioModulation.AudioModulationStatics.UpdateMixFromObject
	// void UpdateMixFromObject(class UObject* WorldContextObject, class USoundControlBusMix* Mix, float FadeTime);             // [0x86187c8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioModulation.AudioModulationStatics.UpdateMixByFilter
	// void UpdateMixByFilter(class UObject* WorldContextObject, class USoundControlBusMix* Mix, FString AddressFilter, class UClass* ParamClassFilter, class USoundModulationParameter* ParamFilter, float Value, float FadeTime); // [0x8617f24] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioModulation.AudioModulationStatics.UpdateMix
	// void UpdateMix(class UObject* WorldContextObject, class USoundControlBusMix* Mix, TArray<FSoundControlBusMixStage> Stages, float FadeTime); // [0x8617728] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioModulation.AudioModulationStatics.SetGlobalBusMixValue
	// void SetGlobalBusMixValue(class UObject* WorldContextObject, class USoundControlBus* Bus, float Value, float FadeTime);  // [0x2238a20] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioModulation.AudioModulationStatics.SaveMixToProfile
	// void SaveMixToProfile(class UObject* WorldContextObject, class USoundControlBusMix* Mix, int32_t ProfileIndex);          // [0x861754c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioModulation.AudioModulationStatics.LoadMixFromProfile
	// TArray<FSoundControlBusMixStage> LoadMixFromProfile(class UObject* WorldContextObject, class USoundControlBusMix* Mix, bool bActivate, int32_t ProfileIndex); // [0x8616d10] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioModulation.AudioModulationStatics.IsControlBusMixActive
	// bool IsControlBusMixActive(class UObject* WorldContextObject, class USoundControlBusMix* Mix);                           // [0x8616bdc] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AudioModulation.AudioModulationStatics.GetModulatorValue
	// float GetModulatorValue(class UObject* WorldContextObject, class USoundModulatorBase* Modulator);                        // [0x2238d4c] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AudioModulation.AudioModulationStatics.GetModulatorsFromDestination
	// TSet<USoundModulatorBase*> GetModulatorsFromDestination(FSoundModulationDestinationSettings& Destination);               // [0x8616a74] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AudioModulation.AudioModulationStatics.DeactivateGenerator
	// void DeactivateGenerator(class UObject* WorldContextObject, class USoundModulationGenerator* Generator);                 // [0x861690c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioModulation.AudioModulationStatics.DeactivateBusMix
	// void DeactivateBusMix(class UObject* WorldContextObject, class USoundControlBusMix* Mix);                                // [0x8616840] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioModulation.AudioModulationStatics.DeactivateBus
	// void DeactivateBus(class UObject* WorldContextObject, class USoundControlBus* Bus);                                      // [0x8616774] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioModulation.AudioModulationStatics.DeactivateAllBusMixes
	// void DeactivateAllBusMixes(class UObject* WorldContextObject);                                                           // [0x86166c8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioModulation.AudioModulationStatics.CreateModulationParameter
	// class USoundModulationParameter* CreateModulationParameter(class UObject* WorldContextObject, FName Name, class UClass* ParamClass, float DefaultValue); // [0x86163c0] Final|Native|Static|Public 
	// Function /Script/AudioModulation.AudioModulationStatics.CreateModulationDestination
	// class UAudioModulationDestination* CreateModulationDestination(class UObject* WorldContextObject, FName Name, class USoundModulatorBase* Modulator); // [0x86161b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioModulation.AudioModulationStatics.CreateLFOGenerator
	// class USoundModulationGeneratorLFO* CreateLFOGenerator(class UObject* WorldContextObject, FName Name, FSoundModulationLFOParams Params); // [0x8615f78] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioModulation.AudioModulationStatics.CreateEnvelopeFollowerGenerator
	// class USoundModulationGeneratorEnvelopeFollower* CreateEnvelopeFollowerGenerator(class UObject* WorldContextObject, FName Name, FEnvelopeFollowerGeneratorParams Params); // [0x8615d30] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioModulation.AudioModulationStatics.CreateBusMixStage
	// FSoundControlBusMixStage CreateBusMixStage(class UObject* WorldContextObject, class USoundControlBus* Bus, float Value, float AttackTime, float ReleaseTime); // [0x8615b8c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioModulation.AudioModulationStatics.CreateBusMixFromValue
	// class USoundControlBusMix* CreateBusMixFromValue(class UObject* WorldContextObject, FName Name, TArray<USoundControlBus*>& Buses, float Value, float AttackTime, float ReleaseTime, bool bActivate); // [0x86156a8] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioModulation.AudioModulationStatics.CreateBusMix
	// class USoundControlBusMix* CreateBusMix(class UObject* WorldContextObject, FName Name, TArray<FSoundControlBusMixStage> Stages, bool Activate); // [0x8614d28] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioModulation.AudioModulationStatics.CreateBus
	// class USoundControlBus* CreateBus(class UObject* WorldContextObject, FName Name, class USoundModulationParameter* Parameter, bool Activate); // [0x8614a44] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioModulation.AudioModulationStatics.CreateADEnvelopeGenerator
	// class USoundModulationGeneratorADEnvelope* CreateADEnvelopeGenerator(class UObject* WorldContextObject, FName Name, FSoundModulationADEnvelopeParams& Params); // [0x861489c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioModulation.AudioModulationStatics.ClearGlobalBusMixValue
	// void ClearGlobalBusMixValue(class UObject* WorldContextObject, class USoundControlBus* Bus, float FadeTime);             // [0x8614758] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioModulation.AudioModulationStatics.ClearAllGlobalBusMixValues
	// void ClearAllGlobalBusMixValues(class UObject* WorldContextObject, float FadeTime);                                      // [0x86146a4] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioModulation.AudioModulationStatics.ActivateGenerator
	// void ActivateGenerator(class UObject* WorldContextObject, class USoundModulationGenerator* Generator);                   // [0x861459c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioModulation.AudioModulationStatics.ActivateBusMix
	// void ActivateBusMix(class UObject* WorldContextObject, class USoundControlBusMix* Mix);                                  // [0x86144d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioModulation.AudioModulationStatics.ActivateBus
	// void ActivateBus(class UObject* WorldContextObject, class USoundControlBus* Bus);                                        // [0x8614404] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/AudioModulation.SoundModulationGenerator
/// Size: 0x0000 (0x000030 - 0x000030)
class USoundModulationGenerator : public USoundModulatorBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/AudioModulation.SoundModulationGeneratorADEnvelope
/// Size: 0x0018 (0x000030 - 0x000048)
class USoundModulationGeneratorADEnvelope : public USoundModulationGenerator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FSoundModulationADEnvelopeParams)          Params                                                      OFFSET(getStruct<T>, {0x30, 20, 0, 0})
};

/// Class /Script/AudioModulation.SoundModulationGeneratorEnvelopeFollower
/// Size: 0x0020 (0x000030 - 0x000050)
class USoundModulationGeneratorEnvelopeFollower : public USoundModulationGenerator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FEnvelopeFollowerGeneratorParams)          Params                                                      OFFSET(getStruct<T>, {0x30, 32, 0, 0})
};

/// Class /Script/AudioModulation.SoundModulationGeneratorLFO
/// Size: 0x0020 (0x000030 - 0x000050)
class USoundModulationGeneratorLFO : public USoundModulationGenerator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FSoundModulationLFOParams)                 Params                                                      OFFSET(getStruct<T>, {0x30, 32, 0, 0})
};

/// Class /Script/AudioModulation.SoundControlBus
/// Size: 0x0030 (0x000030 - 0x000060)
class USoundControlBus : public USoundModulatorBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	DMember(bool)                                      bBypass                                                     OFFSET(get<bool>, {0x30, 1, 0, 0})
	SMember(FString)                                   address                                                     OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	CMember(TArray<class USoundModulationGenerator*>)  Generators                                                  OFFSET(get<T>, {0x48, 16, 0, 0})
	CMember(class USoundModulationParameter*)          Parameter                                                   OFFSET(get<T>, {0x58, 8, 0, 0})
};

/// Class /Script/AudioModulation.SoundControlBusMix
/// Size: 0x0018 (0x000028 - 0x000040)
class USoundControlBusMix : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(uint32_t)                                  ProfileIndex                                                OFFSET(get<uint32_t>, {0x28, 4, 0, 0})
	CMember(TArray<FSoundControlBusMixStage>)          MixStages                                                   OFFSET(get<T>, {0x30, 16, 0, 0})


	/// Functions
	// Function /Script/AudioModulation.SoundControlBusMix.SoloMix
	// void SoloMix();                                                                                                          // [0x86176ec] Final|Native|Protected 
	// Function /Script/AudioModulation.SoundControlBusMix.SaveMixToProfile
	// void SaveMixToProfile();                                                                                                 // [0x8617644] Final|Native|Protected 
	// Function /Script/AudioModulation.SoundControlBusMix.LoadMixFromProfile
	// void LoadMixFromProfile();                                                                                               // [0x8617518] Final|Native|Protected 
	// Function /Script/AudioModulation.SoundControlBusMix.DeactivateMix
	// void DeactivateMix();                                                                                                    // [0x86169d8] Final|Native|Protected 
	// Function /Script/AudioModulation.SoundControlBusMix.DeactivateAllMixes
	// void DeactivateAllMixes();                                                                                               // [0x8616738] Final|Native|Protected 
	// Function /Script/AudioModulation.SoundControlBusMix.ActivateMix
	// void ActivateMix();                                                                                                      // [0x8614690] Final|Native|Protected 
};

/// Class /Script/AudioModulation.SoundModulationParameter
/// Size: 0x0010 (0x000028 - 0x000038)
class USoundModulationParameter : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FSoundModulationParameterSettings)         Settings                                                    OFFSET(getStruct<T>, {0x30, 4, 0, 0})
};

/// Class /Script/AudioModulation.SoundModulationParameterScaled
/// Size: 0x0008 (0x000038 - 0x000040)
class USoundModulationParameterScaled : public USoundModulationParameter
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(float)                                     UnitMin                                                     OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     UnitMax                                                     OFFSET(get<float>, {0x3C, 4, 0, 0})
};

/// Class /Script/AudioModulation.SoundModulationParameterFrequencyBase
/// Size: 0x0000 (0x000038 - 0x000038)
class USoundModulationParameterFrequencyBase : public USoundModulationParameter
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Script/AudioModulation.SoundModulationParameterFrequency
/// Size: 0x0008 (0x000038 - 0x000040)
class USoundModulationParameterFrequency : public USoundModulationParameterFrequencyBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(float)                                     UnitMin                                                     OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     UnitMax                                                     OFFSET(get<float>, {0x3C, 4, 0, 0})
};

/// Class /Script/AudioModulation.SoundModulationParameterFilterFrequency
/// Size: 0x0000 (0x000038 - 0x000038)
class USoundModulationParameterFilterFrequency : public USoundModulationParameterFrequencyBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Script/AudioModulation.SoundModulationParameterLPFFrequency
/// Size: 0x0000 (0x000038 - 0x000038)
class USoundModulationParameterLPFFrequency : public USoundModulationParameterFilterFrequency
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Script/AudioModulation.SoundModulationParameterHPFFrequency
/// Size: 0x0000 (0x000038 - 0x000038)
class USoundModulationParameterHPFFrequency : public USoundModulationParameterFilterFrequency
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Script/AudioModulation.SoundModulationParameterBipolar
/// Size: 0x0008 (0x000038 - 0x000040)
class USoundModulationParameterBipolar : public USoundModulationParameter
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(float)                                     UnitRange                                                   OFFSET(get<float>, {0x38, 4, 0, 0})
};

/// Class /Script/AudioModulation.SoundModulationParameterVolume
/// Size: 0x0008 (0x000038 - 0x000040)
class USoundModulationParameterVolume : public USoundModulationParameter
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(float)                                     MinVolume                                                   OFFSET(get<float>, {0x38, 4, 0, 0})
};

/// Class /Script/AudioModulation.SoundModulationParameterAdditive
/// Size: 0x0008 (0x000038 - 0x000040)
class USoundModulationParameterAdditive : public USoundModulationParameter
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(float)                                     UnitMin                                                     OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     UnitMax                                                     OFFSET(get<float>, {0x3C, 4, 0, 0})
};

/// Class /Script/AudioModulation.SoundModulationPatch
/// Size: 0x0020 (0x000030 - 0x000050)
class USoundModulationPatch : public USoundModulatorBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FSoundControlModulationPatch)              PatchSettings                                               OFFSET(getStruct<T>, {0x30, 32, 0, 0})
};

/// Struct /Script/AudioModulation.SoundModulationADEnvelopeParams
/// Size: 0x0014 (0x000000 - 0x000014)
class FSoundModulationADEnvelopeParams : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	DMember(float)                                     AttackTime                                                  OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     DecayTime                                                   OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     AttackCurve                                                 OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     DecayCurve                                                  OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(bool)                                      bLooping                                                    OFFSET(get<bool>, {0x10, 1, 0, 0})
	DMember(bool)                                      bBypass                                                     OFFSET(get<bool>, {0x11, 1, 0, 0})
};

/// Struct /Script/AudioModulation.EnvelopeFollowerGeneratorParams
/// Size: 0x0020 (0x000000 - 0x000020)
class FEnvelopeFollowerGeneratorParams : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(bool)                                      bBypass                                                     OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(bool)                                      bInvert                                                     OFFSET(get<bool>, {0x1, 1, 0, 0})
	CMember(class UAudioBus*)                          AudioBus                                                    OFFSET(get<T>, {0x8, 8, 0, 0})
	DMember(float)                                     Gain                                                        OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     AttackTime                                                  OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     ReleaseTime                                                 OFFSET(get<float>, {0x18, 4, 0, 0})
};

/// Struct /Script/AudioModulation.SoundModulationLFOParams
/// Size: 0x0020 (0x000000 - 0x000020)
class FSoundModulationLFOParams : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(ESoundModulationLFOShape)                  Shape                                                       OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(float)                                     ExponentialFactor                                           OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     Width                                                       OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     Amplitude                                                   OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     Frequency                                                   OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     Offset                                                      OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     Phase                                                       OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(bool)                                      bLooping                                                    OFFSET(get<bool>, {0x1C, 1, 0, 0})
	DMember(bool)                                      bBypass                                                     OFFSET(get<bool>, {0x1D, 1, 0, 0})
};

/// Struct /Script/AudioModulation.SoundControlBusMixStage
/// Size: 0x0028 (0x000000 - 0x000028)
class FSoundControlBusMixStage : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(class USoundControlBus*)                   Bus                                                         OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FSoundModulationMixValue)                  Value                                                       OFFSET(getStruct<T>, {0x8, 32, 0, 0})
};

/// Struct /Script/AudioModulation.SoundModulationMixValue
/// Size: 0x0020 (0x000000 - 0x000020)
class FSoundModulationMixValue : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(float)                                     TargetValue                                                 OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     AttackTime                                                  OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     ReleaseTime                                                 OFFSET(get<float>, {0x8, 4, 0, 0})
};

/// Struct /Script/AudioModulation.SoundModulationParameterSettings
/// Size: 0x0004 (0x000000 - 0x000004)
class FSoundModulationParameterSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(float)                                     ValueNormalized                                             OFFSET(get<float>, {0x0, 4, 0, 0})
};

/// Struct /Script/AudioModulation.SoundModulationTransform
/// Size: 0x0000 (0x0000B8 - 0x0000B8)
class FSoundModulationTransform : public FWaveTableTransform
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
};

/// Struct /Script/AudioModulation.SoundControlModulationInput
/// Size: 0x00C8 (0x000000 - 0x0000C8)
class FSoundControlModulationInput : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	DMember(bool)                                      bSampleAndHold                                              OFFSET(get<bool>, {0x0, 1, 1, 0})
	SMember(FSoundModulationTransform)                 Transform                                                   OFFSET(getStruct<T>, {0x8, 184, 0, 0})
	CMember(class USoundControlBus*)                   Bus                                                         OFFSET(get<T>, {0xC0, 8, 0, 0})
};

/// Struct /Script/AudioModulation.SoundControlModulationPatch
/// Size: 0x0020 (0x000000 - 0x000020)
class FSoundControlModulationPatch : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(bool)                                      bBypass                                                     OFFSET(get<bool>, {0x0, 1, 0, 0})
	CMember(class USoundModulationParameter*)          OutputParameter                                             OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(TArray<FSoundControlModulationInput>)      Inputs                                                      OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Enum /Script/AudioModulation.ESoundModulationLFOShape
/// Size: 0x08
enum class ESoundModulationLFOShape : uint8_t
{
	ESoundModulationLFOShape__Sine                                                   = 0,
	ESoundModulationLFOShape__UpSaw                                                  = 1,
	ESoundModulationLFOShape__DownSaw                                                = 2,
	ESoundModulationLFOShape__Square                                                 = 3,
	ESoundModulationLFOShape__Triangle                                               = 4,
	ESoundModulationLFOShape__Exponential                                            = 5,
	ESoundModulationLFOShape__RandomSampleHold                                       = 6,
	ESoundModulationLFOShape__COUNT                                                  = 7
};

