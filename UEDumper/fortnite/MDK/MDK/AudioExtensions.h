
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject

/// Class /Script/AudioExtensions.AudioPropertiesBindings
/// Size: 0x0050 (0x000028 - 0x000078)
class UAudioPropertiesBindings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	CMember(TMap<FName, FName>)                        ObjectPropertyToSheetPropertyMap                            OFFSET(get<T>, {0x28, 80, 0, 0})
};

/// Class /Script/AudioExtensions.AudioPropertiesSheetAssetBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UAudioPropertiesSheetAssetBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/AudioExtensions.SpatializationPluginSourceSettingsBase
/// Size: 0x0000 (0x000028 - 0x000028)
class USpatializationPluginSourceSettingsBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/AudioExtensions.SourceDataOverridePluginSourceSettingsBase
/// Size: 0x0000 (0x000028 - 0x000028)
class USourceDataOverridePluginSourceSettingsBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/AudioExtensions.OcclusionPluginSourceSettingsBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UOcclusionPluginSourceSettingsBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/AudioExtensions.ReverbPluginSourceSettingsBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UReverbPluginSourceSettingsBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/AudioExtensions.AudioPropertySheetBaseAsset
/// Size: 0x0000 (0x000028 - 0x000028)
class UAudioPropertySheetBaseAsset : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/AudioExtensions.AudioParameterControllerInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UAudioParameterControllerInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/AudioExtensions.AudioParameterControllerInterface.SetTriggerParameter
	// void SetTriggerParameter(FName InName);                                                                                  // [0x1c71da0] Native|Public|BlueprintCallable 
	// Function /Script/AudioExtensions.AudioParameterControllerInterface.SetStringParameter
	// void SetStringParameter(FName InName, FString InValue);                                                                  // [0x5f0a4d4] Native|Public|BlueprintCallable 
	// Function /Script/AudioExtensions.AudioParameterControllerInterface.SetStringArrayParameter
	// void SetStringArrayParameter(FName InName, TArray<FString>& InValue);                                                    // [0x5f0a3f4] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioExtensions.AudioParameterControllerInterface.SetParameters_Blueprint
	// void SetParameters_Blueprint(TArray<FAudioParameter>& InParameters);                                                     // [0x5f0a23c] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioExtensions.AudioParameterControllerInterface.SetObjectParameter
	// void SetObjectParameter(FName InName, class UObject* InValue);                                                           // [0x5f0a178] Native|Public|BlueprintCallable 
	// Function /Script/AudioExtensions.AudioParameterControllerInterface.SetObjectArrayParameter
	// void SetObjectArrayParameter(FName InName, TArray<UObject*>& InValue);                                                   // [0x5f0a094] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioExtensions.AudioParameterControllerInterface.SetIntParameter
	// void SetIntParameter(FName InName, int32_t inInt);                                                                       // [0x5f09fd0] Native|Public|BlueprintCallable 
	// Function /Script/AudioExtensions.AudioParameterControllerInterface.SetIntArrayParameter
	// void SetIntArrayParameter(FName InName, TArray<int32_t>& InValue);                                                       // [0x5f09eec] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioExtensions.AudioParameterControllerInterface.SetFloatParameter
	// void SetFloatParameter(FName InName, float InFloat);                                                                     // [0x3081318] Native|Public|BlueprintCallable 
	// Function /Script/AudioExtensions.AudioParameterControllerInterface.SetFloatArrayParameter
	// void SetFloatArrayParameter(FName InName, TArray<float>& InValue);                                                       // [0x5f09dcc] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioExtensions.AudioParameterControllerInterface.SetBoolParameter
	// void SetBoolParameter(FName InName, bool InBool);                                                                        // [0x2f91a3c] Native|Public|BlueprintCallable 
	// Function /Script/AudioExtensions.AudioParameterControllerInterface.SetBoolArrayParameter
	// void SetBoolArrayParameter(FName InName, TArray<bool>& InValue);                                                         // [0x5f09ce8] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioExtensions.AudioParameterControllerInterface.ResetParameters
	// void ResetParameters();                                                                                                  // [0x326a61c] Native|Public|BlueprintCallable 
};

/// Class /Script/AudioExtensions.AudioEndpointSettingsBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UAudioEndpointSettingsBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/AudioExtensions.DummyEndpointSettings
/// Size: 0x0000 (0x000028 - 0x000028)
class UDummyEndpointSettings : public UAudioEndpointSettingsBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/AudioExtensions.SoundModulatorBase
/// Size: 0x0008 (0x000028 - 0x000030)
class USoundModulatorBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/AudioExtensions.SoundfieldEndpointSettingsBase
/// Size: 0x0000 (0x000028 - 0x000028)
class USoundfieldEndpointSettingsBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/AudioExtensions.SoundfieldEncodingSettingsBase
/// Size: 0x0000 (0x000028 - 0x000028)
class USoundfieldEncodingSettingsBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/AudioExtensions.SoundfieldEffectSettingsBase
/// Size: 0x0000 (0x000028 - 0x000028)
class USoundfieldEffectSettingsBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/AudioExtensions.SoundfieldEffectBase
/// Size: 0x0008 (0x000028 - 0x000030)
class USoundfieldEffectBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(class USoundfieldEffectSettingsBase*)      Settings                                                    OFFSET(get<T>, {0x28, 8, 0, 0})
};

/// Class /Script/AudioExtensions.WaveformTransformationBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UWaveformTransformationBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/AudioExtensions.WaveformTransformationChain
/// Size: 0x0010 (0x000028 - 0x000038)
class UWaveformTransformationChain : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<class UWaveformTransformationBase*>) Transformations                                            OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Struct /Script/AudioExtensions.SoundGeneratorOutput
/// Size: 0x0004 (0x000000 - 0x000004)
class FSoundGeneratorOutput : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x0, 4, 0, 0})
};

/// Struct /Script/AudioExtensions.SoundWaveCloudStreamingPlatformProjectSettings
/// Size: 0x0001 (0x000000 - 0x000001)
class FSoundWaveCloudStreamingPlatformProjectSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
	CMember(ESoundWaveCloudStreamingPlatformProjectEnableType) EnablementSetting                                   OFFSET(get<T>, {0x0, 1, 0, 0})
};

/// Struct /Script/AudioExtensions.SoundWaveCloudStreamingPlatformSettings
/// Size: 0x0001 (0x000000 - 0x000001)
class FSoundWaveCloudStreamingPlatformSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
	CMember(ESoundWaveCloudStreamingPlatformEnableType) EnablementSetting                                          OFFSET(get<T>, {0x0, 1, 0, 0})
};

/// Struct /Script/AudioExtensions.AudioParameter
/// Size: 0x0090 (0x000000 - 0x000090)
class FAudioParameter : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FName)                                     ParamName                                                   OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(float)                                     FloatParam                                                  OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(bool)                                      BoolParam                                                   OFFSET(get<bool>, {0x8, 1, 0, 0})
	DMember(int32_t)                                   IntParam                                                    OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	CMember(class UObject*)                            ObjectParam                                                 OFFSET(get<T>, {0x10, 8, 0, 0})
	SMember(FString)                                   StringParam                                                 OFFSET(getStruct<T>, {0x18, 16, 0, 0})
	CMember(TArray<float>)                             ArrayFloatParam                                             OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(TArray<bool>)                              ArrayBoolParam                                              OFFSET(get<T>, {0x38, 16, 0, 0})
	CMember(TArray<int32_t>)                           ArrayIntParam                                               OFFSET(get<T>, {0x48, 16, 0, 0})
	CMember(TArray<class UObject*>)                    ArrayObjectParam                                            OFFSET(get<T>, {0x58, 16, 0, 0})
	CMember(TArray<FString>)                           ArrayStringParam                                            OFFSET(get<T>, {0x68, 16, 0, 0})
	CMember(EAudioParameterType)                       ParamType                                                   OFFSET(get<T>, {0x78, 1, 0, 0})
	SMember(FName)                                     TypeName                                                    OFFSET(getStruct<T>, {0x7C, 4, 0, 0})
};

/// Enum /Script/AudioExtensions.ESoundWaveCloudStreamingPlatformProjectEnableType
/// Size: 0x03
enum class ESoundWaveCloudStreamingPlatformProjectEnableType : uint8_t
{
	ESoundWaveCloudStreamingPlatformProjectEnableType__Enabled                       = 0,
	ESoundWaveCloudStreamingPlatformProjectEnableType__Disabled                      = 1,
	ESoundWaveCloudStreamingPlatformProjectEnableType__ESoundWaveCloudStreamingPlatformProjectEnableType_MAX = 2
};

/// Enum /Script/AudioExtensions.ESoundWaveCloudStreamingPlatformEnableType
/// Size: 0x04
enum class ESoundWaveCloudStreamingPlatformEnableType : uint8_t
{
	ESoundWaveCloudStreamingPlatformEnableType__Inherited                            = 0,
	ESoundWaveCloudStreamingPlatformEnableType__Disabled                             = 1,
	ESoundWaveCloudStreamingPlatformEnableType__SWC_MultipleValues                   = 2,
	ESoundWaveCloudStreamingPlatformEnableType__ESoundWaveCloudStreamingPlatformEnableType_MAX = 3
};

/// Enum /Script/AudioExtensions.EAudioParameterType
/// Size: 0x15
enum class EAudioParameterType : uint8_t
{
	EAudioParameterType__None                                                        = 0,
	EAudioParameterType__Boolean                                                     = 1,
	EAudioParameterType__Integer                                                     = 2,
	EAudioParameterType__Float                                                       = 3,
	EAudioParameterType__String                                                      = 4,
	EAudioParameterType__Object                                                      = 5,
	EAudioParameterType__NoneArray                                                   = 6,
	EAudioParameterType__BooleanArray                                                = 7,
	EAudioParameterType__IntegerArray                                                = 8,
	EAudioParameterType__FloatArray                                                  = 9,
	EAudioParameterType__StringArray                                                 = 10,
	EAudioParameterType__ObjectArray                                                 = 11,
	EAudioParameterType__Trigger                                                     = 12,
	EAudioParameterType__COUNT                                                       = 13,
	EAudioParameterType__EAudioParameterType_MAX                                     = 14
};

