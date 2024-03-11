
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject

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

/// Class /Script/AudioExtensions.AudioPropertiesBindings
/// Size: 0x0050 (0x000028 - 0x000078)
class UAudioPropertiesBindings : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	SDK_UNDEFINED(80,34) /* TMap<FName, FName> */      __um(ObjectPropertyToSheetPropertyMap);                     // 0x0028   (0x0050)  
};

/// Class /Script/AudioExtensions.AudioPropertiesSheetAssetBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UAudioPropertiesSheetAssetBase : public UObject
{ 
public:
};

/// Class /Script/AudioExtensions.SpatializationPluginSourceSettingsBase
/// Size: 0x0000 (0x000028 - 0x000028)
class USpatializationPluginSourceSettingsBase : public UObject
{ 
public:
};

/// Class /Script/AudioExtensions.SourceDataOverridePluginSourceSettingsBase
/// Size: 0x0000 (0x000028 - 0x000028)
class USourceDataOverridePluginSourceSettingsBase : public UObject
{ 
public:
};

/// Class /Script/AudioExtensions.OcclusionPluginSourceSettingsBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UOcclusionPluginSourceSettingsBase : public UObject
{ 
public:
};

/// Class /Script/AudioExtensions.ReverbPluginSourceSettingsBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UReverbPluginSourceSettingsBase : public UObject
{ 
public:
};

/// Class /Script/AudioExtensions.AudioPropertySheetBaseAsset
/// Size: 0x0000 (0x000028 - 0x000028)
class UAudioPropertySheetBaseAsset : public UObject
{ 
public:
};

/// Class /Script/AudioExtensions.AudioParameterControllerInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UAudioParameterControllerInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/AudioExtensions.AudioParameterControllerInterface.SetTriggerParameter
	// void SetTriggerParameter(FName InName);                                                                               // [0x1c71da0] Native|Public|BlueprintCallable 
	// Function /Script/AudioExtensions.AudioParameterControllerInterface.SetStringParameter
	// void SetStringParameter(FName InName, FString InValue);                                                               // [0x5f0a4d4] Native|Public|BlueprintCallable 
	// Function /Script/AudioExtensions.AudioParameterControllerInterface.SetStringArrayParameter
	// void SetStringArrayParameter(FName InName, TArray<FString>& InValue);                                                 // [0x5f0a3f4] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioExtensions.AudioParameterControllerInterface.SetParameters_Blueprint
	// void SetParameters_Blueprint(TArray<FAudioParameter>& InParameters);                                                  // [0x5f0a23c] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioExtensions.AudioParameterControllerInterface.SetObjectParameter
	// void SetObjectParameter(FName InName, class UObject* InValue);                                                        // [0x5f0a178] Native|Public|BlueprintCallable 
	// Function /Script/AudioExtensions.AudioParameterControllerInterface.SetObjectArrayParameter
	// void SetObjectArrayParameter(FName InName, TArray<UObject*>& InValue);                                                // [0x5f0a094] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioExtensions.AudioParameterControllerInterface.SetIntParameter
	// void SetIntParameter(FName InName, int32_t inInt);                                                                    // [0x5f09fd0] Native|Public|BlueprintCallable 
	// Function /Script/AudioExtensions.AudioParameterControllerInterface.SetIntArrayParameter
	// void SetIntArrayParameter(FName InName, TArray<int32_t>& InValue);                                                    // [0x5f09eec] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioExtensions.AudioParameterControllerInterface.SetFloatParameter
	// void SetFloatParameter(FName InName, float InFloat);                                                                  // [0x3081318] Native|Public|BlueprintCallable 
	// Function /Script/AudioExtensions.AudioParameterControllerInterface.SetFloatArrayParameter
	// void SetFloatArrayParameter(FName InName, TArray<float>& InValue);                                                    // [0x5f09dcc] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioExtensions.AudioParameterControllerInterface.SetBoolParameter
	// void SetBoolParameter(FName InName, bool InBool);                                                                     // [0x2f91a3c] Native|Public|BlueprintCallable 
	// Function /Script/AudioExtensions.AudioParameterControllerInterface.SetBoolArrayParameter
	// void SetBoolArrayParameter(FName InName, TArray<bool>& InValue);                                                      // [0x5f09ce8] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioExtensions.AudioParameterControllerInterface.ResetParameters
	// void ResetParameters();                                                                                               // [0x326a61c] Native|Public|BlueprintCallable 
};

/// Class /Script/AudioExtensions.AudioEndpointSettingsBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UAudioEndpointSettingsBase : public UObject
{ 
public:
};

/// Class /Script/AudioExtensions.DummyEndpointSettings
/// Size: 0x0000 (0x000028 - 0x000028)
class UDummyEndpointSettings : public UAudioEndpointSettingsBase
{ 
public:
};

/// Class /Script/AudioExtensions.SoundModulatorBase
/// Size: 0x0008 (0x000028 - 0x000030)
class USoundModulatorBase : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x0000   (0x0030)  MISSED
};

/// Class /Script/AudioExtensions.SoundfieldEndpointSettingsBase
/// Size: 0x0000 (0x000028 - 0x000028)
class USoundfieldEndpointSettingsBase : public UObject
{ 
public:
};

/// Class /Script/AudioExtensions.SoundfieldEncodingSettingsBase
/// Size: 0x0000 (0x000028 - 0x000028)
class USoundfieldEncodingSettingsBase : public UObject
{ 
public:
};

/// Class /Script/AudioExtensions.SoundfieldEffectSettingsBase
/// Size: 0x0000 (0x000028 - 0x000028)
class USoundfieldEffectSettingsBase : public UObject
{ 
public:
};

/// Class /Script/AudioExtensions.SoundfieldEffectBase
/// Size: 0x0008 (0x000028 - 0x000030)
class USoundfieldEffectBase : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	class USoundfieldEffectSettingsBase*               Settings;                                                   // 0x0028   (0x0008)  
};

/// Class /Script/AudioExtensions.WaveformTransformationBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UWaveformTransformationBase : public UObject
{ 
public:
};

/// Class /Script/AudioExtensions.WaveformTransformationChain
/// Size: 0x0010 (0x000028 - 0x000038)
class UWaveformTransformationChain : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	TArray<class UWaveformTransformationBase*>         Transformations;                                            // 0x0028   (0x0010)  
};

/// Struct /Script/AudioExtensions.SoundGeneratorOutput
/// Size: 0x0004 (0x000000 - 0x000004)
struct FSoundGeneratorOutput
{ 
	FName                                              Name;                                                       // 0x0000   (0x0004)  
};

/// Struct /Script/AudioExtensions.SoundWaveCloudStreamingPlatformProjectSettings
/// Size: 0x0001 (0x000000 - 0x000001)
struct FSoundWaveCloudStreamingPlatformProjectSettings
{ 
	ESoundWaveCloudStreamingPlatformProjectEnableType  EnablementSetting;                                          // 0x0000   (0x0001)  
};

/// Struct /Script/AudioExtensions.SoundWaveCloudStreamingPlatformSettings
/// Size: 0x0001 (0x000000 - 0x000001)
struct FSoundWaveCloudStreamingPlatformSettings
{ 
	ESoundWaveCloudStreamingPlatformEnableType         EnablementSetting;                                          // 0x0000   (0x0001)  
};

/// Struct /Script/AudioExtensions.AudioParameter
/// Size: 0x0090 (0x000000 - 0x000090)
struct FAudioParameter
{ 
	FName                                              ParamName;                                                  // 0x0000   (0x0004)  
	float                                              FloatParam;                                                 // 0x0004   (0x0004)  
	bool                                               BoolParam;                                                  // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0009   (0x0003)  MISSED
	int32_t                                            IntParam;                                                   // 0x000C   (0x0004)  
	class UObject*                                     ObjectParam;                                                // 0x0010   (0x0008)  
	SDK_UNDEFINED(16,35) /* FString */                 __um(StringParam);                                          // 0x0018   (0x0010)  
	TArray<float>                                      ArrayFloatParam;                                            // 0x0028   (0x0010)  
	TArray<bool>                                       ArrayBoolParam;                                             // 0x0038   (0x0010)  
	TArray<int32_t>                                    ArrayIntParam;                                              // 0x0048   (0x0010)  
	TArray<class UObject*>                             ArrayObjectParam;                                           // 0x0058   (0x0010)  
	SDK_UNDEFINED(16,36) /* TArray<FString> */         __um(ArrayStringParam);                                     // 0x0068   (0x0010)  
	EAudioParameterType                                ParamType;                                                  // 0x0078   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0079   (0x0003)  MISSED
	FName                                              TypeName;                                                   // 0x007C   (0x0004)  
	unsigned char                                      UnknownData02_6[0x10];                                      // 0x0080   (0x0010)  MISSED
};

