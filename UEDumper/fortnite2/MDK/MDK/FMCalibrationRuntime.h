
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: GameplayTags
/// dependency: ModularGameplay

/// Class /Script/FMCalibrationRuntime.BeatmatchCalibrationHelper
/// Size: 0x0018 (0x0000A0 - 0x0000B8)
class UBeatmatchCalibrationHelper : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	DMember(float)                                     TightCalWindowMs                                            OFFSET(get<float>, {0xA0, 4, 0, 0})
	DMember(int32_t)                                   MinTightCalSamples                                          OFFSET(get<int32_t>, {0xA4, 4, 0, 0})
	DMember(float)                                     LooseCalWindowMs                                            OFFSET(get<float>, {0xA8, 4, 0, 0})
	DMember(int32_t)                                   MinLooseCalSamples                                          OFFSET(get<int32_t>, {0xAC, 4, 0, 0})
	DMember(int32_t)                                   MaxSamplesBeforeFail                                        OFFSET(get<int32_t>, {0xB0, 4, 0, 0})


	/// Functions
	// Function /Script/FMCalibrationRuntime.BeatmatchCalibrationHelper.CalcCalibrationResult
	// void CalcCalibrationResult(TArray<float>& Samples, TArray<float>& SamplesDeltaTimes, float BPS, ECalibrationState& ResultingState, float& ResultMs); // [0xbc51408] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/FMCalibrationRuntime.FMCalibrationControllerComponent
/// Size: 0x00E8 (0x0000A0 - 0x000188)
class UFMCalibrationControllerComponent : public UControllerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 392;

public:
	SMember(FMulticastInlineDelegate)                  OnCalibrationDataLoaded                                     OFFSET(getStruct<T>, {0xA0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnCalibrationDataSaved                                      OFFSET(getStruct<T>, {0xB0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnAudioLatencyMsUpdated                                     OFFSET(getStruct<T>, {0xC0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnVideoLatencyMsUpdated                                     OFFSET(getStruct<T>, {0xD0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnIsCalibratedUpdated                                       OFFSET(getStruct<T>, {0xE0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnIsPreambleDisabledUpdated                                 OFFSET(getStruct<T>, {0xF0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnIsAutolaunchDisabledUpdated                               OFFSET(getStruct<T>, {0x100, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnIsCalibrationDebugEnabled                                 OFFSET(getStruct<T>, {0x110, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnHasTalkedWithRoadie                                       OFFSET(getStruct<T>, {0x120, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnCalibrationRequestOpenModal                               OFFSET(getStruct<T>, {0x130, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnCalibrationRegisterPreamble                               OFFSET(getStruct<T>, {0x140, 16, 0, 0})
	SMember(FVector2D)                                 AudioLatencyMsMinMax                                        OFFSET(getStruct<T>, {0x150, 16, 0, 0})
	SMember(FVector2D)                                 VideoLatencyMsMinMax                                        OFFSET(getStruct<T>, {0x160, 16, 0, 0})
	CMember(class UFMCalibrationSaveData*)             CalibrationSaveData                                         OFFSET(get<T>, {0x180, 8, 0, 0})


	/// Functions
	// Function /Script/FMCalibrationRuntime.FMCalibrationControllerComponent.SetVideoLatencyMs
	// void SetVideoLatencyMs(float LatencyMs);                                                                                 // [0xbc51c70] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMCalibrationRuntime.FMCalibrationControllerComponent.SetIsPreambleDisabled
	// void SetIsPreambleDisabled(bool bPreambleDisabled);                                                                      // [0xbc51c00] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMCalibrationRuntime.FMCalibrationControllerComponent.SetIsCalibrationDebugEnabled
	// void SetIsCalibrationDebugEnabled(bool bCalibrationDebugEnabled);                                                        // [0xbc51b90] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMCalibrationRuntime.FMCalibrationControllerComponent.SetIsCalibrated
	// void SetIsCalibrated(bool bCalibrated);                                                                                  // [0xbc51b20] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMCalibrationRuntime.FMCalibrationControllerComponent.SetIsAutolaunchDisabled
	// void SetIsAutolaunchDisabled(bool bAutolaunchDisabled);                                                                  // [0xbc51ab0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMCalibrationRuntime.FMCalibrationControllerComponent.SetHasTalkedWithRoadie
	// void SetHasTalkedWithRoadie(bool bHasTalkedWithRoadie);                                                                  // [0xbc51a40] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMCalibrationRuntime.FMCalibrationControllerComponent.SetAudioLatencyMs
	// void SetAudioLatencyMs(float LatencyMs);                                                                                 // [0xbc519d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMCalibrationRuntime.FMCalibrationControllerComponent.SendToggleModalMessage
	// void SendToggleModalMessage(class AActor* ContextActor, bool UsePreamble, bool bIsAutoLaunch);                           // [0xbc518a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMCalibrationRuntime.FMCalibrationControllerComponent.SaveCalibrationLocalToDevice
	// void SaveCalibrationLocalToDevice();                                                                                     // [0xbc5188c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/FMCalibrationRuntime.FMCalibrationControllerComponent.OnLatencyMsUpdated__DelegateSignature
	// void OnLatencyMsUpdated__DelegateSignature(class UFMCalibrationControllerComponent* CalibrationControllerComponent, float LatencyMs); // [0x228deb8] MulticastDelegate|Public|Delegate 
	// Function /Script/FMCalibrationRuntime.FMCalibrationControllerComponent.OnIsPreambleDisabledUpdated__DelegateSignature
	// void OnIsPreambleDisabledUpdated__DelegateSignature(class UFMCalibrationControllerComponent* CalibrationControllerComponent, bool IsPreambleDisabled); // [0x228deb8] MulticastDelegate|Public|Delegate 
	// Function /Script/FMCalibrationRuntime.FMCalibrationControllerComponent.OnIsCalibrationDebugEnabled__DelegateSignature
	// void OnIsCalibrationDebugEnabled__DelegateSignature(class UFMCalibrationControllerComponent* CalibrationControllerComponent, bool IsCalibrationDebugEnabled); // [0x228deb8] MulticastDelegate|Public|Delegate 
	// Function /Script/FMCalibrationRuntime.FMCalibrationControllerComponent.OnIsCalibratedUpdated__DelegateSignature
	// void OnIsCalibratedUpdated__DelegateSignature(class UFMCalibrationControllerComponent* CalibrationControllerComponent, bool IsCalibrated); // [0x228deb8] MulticastDelegate|Public|Delegate 
	// Function /Script/FMCalibrationRuntime.FMCalibrationControllerComponent.OnIsAutolaunchDisabledUpdated__DelegateSignature
	// void OnIsAutolaunchDisabledUpdated__DelegateSignature(class UFMCalibrationControllerComponent* CalibrationControllerComponent, bool IsAutolaunchDisabled); // [0x228deb8] MulticastDelegate|Public|Delegate 
	// Function /Script/FMCalibrationRuntime.FMCalibrationControllerComponent.OnHasTalkedWithRoadie__DelegateSignature
	// void OnHasTalkedWithRoadie__DelegateSignature(class UFMCalibrationControllerComponent* CalibrationControllerComponent, bool HasTalkedWithRoadie); // [0x228deb8] MulticastDelegate|Public|Delegate 
	// Function /Script/FMCalibrationRuntime.FMCalibrationControllerComponent.OnCalibrationRequestOpenModal__DelegateSignature
	// void OnCalibrationRequestOpenModal__DelegateSignature(class UFMCalibrationControllerComponent* CalibrationControllerComponent, bool UsePreamble); // [0x228deb8] MulticastDelegate|Public|Delegate 
	// Function /Script/FMCalibrationRuntime.FMCalibrationControllerComponent.OnCalibrationRegisterPreamble__DelegateSignature
	// void OnCalibrationRegisterPreamble__DelegateSignature(class UFMCalibrationControllerComponent* CalibrationControllerComponent, FGameplayTag PreambleGameplayTag); // [0x228deb8] MulticastDelegate|Public|Delegate 
	// Function /Script/FMCalibrationRuntime.FMCalibrationControllerComponent.OnCalibrationDataSaved__DelegateSignature
	// void OnCalibrationDataSaved__DelegateSignature();                                                                        // [0x228deb8] MulticastDelegate|Public|Delegate 
	// Function /Script/FMCalibrationRuntime.FMCalibrationControllerComponent.OnCalibrationDataLoaded__DelegateSignature
	// void OnCalibrationDataLoaded__DelegateSignature();                                                                       // [0x228deb8] MulticastDelegate|Public|Delegate 
	// Function /Script/FMCalibrationRuntime.FMCalibrationControllerComponent.LoadCalibrationLocalToDevice
	// void LoadCalibrationLocalToDevice();                                                                                     // [0xbc51878] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMCalibrationRuntime.FMCalibrationControllerComponent.IsCalibrationDataOnLatestVersion
	// bool IsCalibrationDataOnLatestVersion();                                                                                 // [0xbc5185c] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMCalibrationRuntime.FMCalibrationControllerComponent.IsCalibrationDataLoaded
	// bool IsCalibrationDataLoaded();                                                                                          // [0xbc51844] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMCalibrationRuntime.FMCalibrationControllerComponent.GetVideoLatencyMs
	// float GetVideoLatencyMs();                                                                                               // [0xbc5181c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMCalibrationRuntime.FMCalibrationControllerComponent.GetIsPreambleDisabled
	// bool GetIsPreambleDisabled();                                                                                            // [0xbc517f8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMCalibrationRuntime.FMCalibrationControllerComponent.GetIsCalibrationDebugEnabled
	// bool GetIsCalibrationDebugEnabled();                                                                                     // [0xbc517d4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMCalibrationRuntime.FMCalibrationControllerComponent.GetIsCalibrated
	// bool GetIsCalibrated();                                                                                                  // [0xbc517b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMCalibrationRuntime.FMCalibrationControllerComponent.GetIsAutolaunchDisabled
	// bool GetIsAutolaunchDisabled();                                                                                          // [0xbc5178c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMCalibrationRuntime.FMCalibrationControllerComponent.GetHasTalkedWithRoadie
	// bool GetHasTalkedWithRoadie();                                                                                           // [0xbc51768] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMCalibrationRuntime.FMCalibrationControllerComponent.GetAudioLatencyMs
	// float GetAudioLatencyMs();                                                                                               // [0xbc51740] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMCalibrationRuntime.FMCalibrationControllerComponent.DisplayCalibrationWidget
	// void DisplayCalibrationWidget();                                                                                         // [0x228deb8] Event|Public|BlueprintEvent 
};

/// Class /Script/FMCalibrationRuntime.FMCalibrationSaveData
/// Size: 0x0018 (0x000028 - 0x000040)
class UFMCalibrationSaveData : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(float)                                     AudioLatencyMs                                              OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(float)                                     VideoLatencyMs                                              OFFSET(get<float>, {0x2C, 4, 0, 0})
	DMember(bool)                                      IsCalibrated                                                OFFSET(get<bool>, {0x30, 1, 0, 0})
	DMember(bool)                                      IsPreambleDisabled                                          OFFSET(get<bool>, {0x31, 1, 0, 0})
	DMember(bool)                                      IsAutolaunchDisabled                                        OFFSET(get<bool>, {0x32, 1, 0, 0})
	DMember(bool)                                      IsCalibrationDebugEnabled                                   OFFSET(get<bool>, {0x33, 1, 0, 0})
	DMember(bool)                                      HasTalkedWithRoadie                                         OFFSET(get<bool>, {0x34, 1, 0, 0})
	DMember(int32_t)                                   SaveVersion                                                 OFFSET(get<int32_t>, {0x38, 4, 0, 0})
};

/// Struct /Script/FMCalibrationRuntime.FMEvent_Calibration_ToggleModal
/// Size: 0x0002 (0x000000 - 0x000002)
class FFMEvent_Calibration_ToggleModal : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2;

public:
	DMember(bool)                                      UsePreamble                                                 OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(bool)                                      bIsAutoLaunched                                             OFFSET(get<bool>, {0x1, 1, 0, 0})
};

/// Struct /Script/FMCalibrationRuntime.FMEvent_Calibration_ModalOpened
/// Size: 0x0001 (0x000000 - 0x000001)
class FFMEvent_Calibration_ModalOpened : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/FMCalibrationRuntime.FMEvent_Calibration_ModalClosed
/// Size: 0x0001 (0x000000 - 0x000001)
class FFMEvent_Calibration_ModalClosed : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Enum /Script/FMCalibrationRuntime.ECalibrationState
/// Size: 0x04
enum class ECalibrationState : uint8_t
{
	ECalibrationState__TooFewSamples                                                 = 0,
	ECalibrationState__InputTooErratic                                               = 1,
	ECalibrationState__TightResult                                                   = 2,
	ECalibrationState__LooseResult                                                   = 3
};

