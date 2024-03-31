
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: AudioMixer
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/AudioCapture.AudioCapture
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UAudioCapture : public UAudioGenerator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:


	/// Functions
	// Function /Script/AudioCapture.AudioCapture.StopCapturingAudio
	// void StopCapturingAudio();                                                                                               // [0xb10e824] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioCapture.AudioCapture.StartCapturingAudio
	// void StartCapturingAudio();                                                                                              // [0xb10e7f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioCapture.AudioCapture.IsCapturingAudio
	// bool IsCapturingAudio();                                                                                                 // [0xb10e7b8] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioCapture.AudioCapture.GetAudioCaptureDeviceInfo
	// bool GetAudioCaptureDeviceInfo(FAudioCaptureDeviceInfo& OutInfo);                                                        // [0xb10e5f8] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/AudioCapture.AudioCaptureFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UAudioCaptureFunctionLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/AudioCapture.AudioCaptureFunctionLibrary.CreateAudioCapture
	// class UAudioCapture* CreateAudioCapture();                                                                               // [0xb10e594] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/AudioCapture.AudioCaptureBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UAudioCaptureBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/AudioCapture.AudioCaptureBlueprintLibrary.GetAvailableAudioInputDevices
	// void GetAvailableAudioInputDevices(class UObject* WorldContextObject, FDelegateProperty& OnObtainDevicesEvent);          // [0xb10e694] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioCapture.AudioCaptureBlueprintLibrary.Conv_AudioInputDeviceInfoToString
	// FString Conv_AudioInputDeviceInfoToString(FAudioInputDeviceInfo& Info);                                                  // [0xb10e498] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
};

/// Class /Script/AudioCapture.AudioCaptureComponent
/// Size: 0x00C0 (0x000880 - 0x000940)
class UAudioCaptureComponent : public USynthComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2368;

public:
	DMember(int32_t)                                   JitterLatencyFrames                                         OFFSET(get<int32_t>, {0x880, 4, 0, 0})
};

/// Struct /Script/AudioCapture.AudioInputDeviceInfo
/// Size: 0x0030 (0x000000 - 0x000030)
class FAudioInputDeviceInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FString)                                   DeviceName                                                  OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   DeviceID                                                    OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	DMember(int32_t)                                   InputChannels                                               OFFSET(get<int32_t>, {0x20, 4, 0, 0})
	DMember(int32_t)                                   PreferredSampleRate                                         OFFSET(get<int32_t>, {0x24, 4, 0, 0})
	DMember(bool)                                      bSupportsHardwareAEC                                        OFFSET(get<bool>, {0x28, 1, 1, 0})
};

/// Struct /Script/AudioCapture.AudioCaptureDeviceInfo
/// Size: 0x000C (0x000000 - 0x00000C)
class FAudioCaptureDeviceInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	SMember(FName)                                     DeviceName                                                  OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   NumInputChannels                                            OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   SampleRate                                                  OFFSET(get<int32_t>, {0x8, 4, 0, 0})
};

