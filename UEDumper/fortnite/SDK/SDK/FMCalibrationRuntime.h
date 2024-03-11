
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: ModularGameplay

/// Enum /Script/FMCalibrationRuntime.ECalibrationState
/// Size: 0x05
enum class ECalibrationState : uint8_t
{
	ECalibrationState__TooFewSamples                                                 = 0,
	ECalibrationState__InputTooErratic                                               = 1,
	ECalibrationState__TightResult                                                   = 2,
	ECalibrationState__LooseResult                                                   = 3,
	ECalibrationState__ECalibrationState_MAX                                         = 4
};

/// Class /Script/FMCalibrationRuntime.BeatmatchCalibrationHelper
/// Size: 0x0018 (0x0000A0 - 0x0000B8)
class UBeatmatchCalibrationHelper : public UActorComponent
{ 
public:
	float                                              TightCalWindowMs;                                           // 0x00A0   (0x0004)  
	int32_t                                            MinTightCalSamples;                                         // 0x00A4   (0x0004)  
	float                                              LooseCalWindowMs;                                           // 0x00A8   (0x0004)  
	int32_t                                            MinLooseCalSamples;                                         // 0x00AC   (0x0004)  
	int32_t                                            MaxSamplesBeforeFail;                                       // 0x00B0   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00B4   (0x0004)  MISSED


	/// Functions
	// Function /Script/FMCalibrationRuntime.BeatmatchCalibrationHelper.CalcCalibrationResult
	// void CalcCalibrationResult(TArray<float>& Samples, float BPS, ECalibrationState& ResultingState, float& ResultMs);    // [0xa814f28] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/FMCalibrationRuntime.FMCalibrationControllerComponent
/// Size: 0x00E8 (0x0000A0 - 0x000188)
class UFMCalibrationControllerComponent : public UControllerComponent
{ 
public:
	SDK_UNDEFINED(16,13740) /* FMulticastInlineDelegate */ __um(OnCalibrationDataLoaded);                          // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,13741) /* FMulticastInlineDelegate */ __um(OnCalibrationDataSaved);                           // 0x00B0   (0x0010)  
	SDK_UNDEFINED(16,13742) /* FMulticastInlineDelegate */ __um(OnAudioLatencyMsUpdated);                          // 0x00C0   (0x0010)  
	SDK_UNDEFINED(16,13743) /* FMulticastInlineDelegate */ __um(OnVideoLatencyMsUpdated);                          // 0x00D0   (0x0010)  
	SDK_UNDEFINED(16,13744) /* FMulticastInlineDelegate */ __um(OnIsCalibratedUpdated);                            // 0x00E0   (0x0010)  
	SDK_UNDEFINED(16,13745) /* FMulticastInlineDelegate */ __um(OnIsPreambleDisabledUpdated);                      // 0x00F0   (0x0010)  
	SDK_UNDEFINED(16,13746) /* FMulticastInlineDelegate */ __um(OnIsAutolaunchDisabledUpdated);                    // 0x0100   (0x0010)  
	SDK_UNDEFINED(16,13747) /* FMulticastInlineDelegate */ __um(OnIsCalibrationDebugEnabled);                      // 0x0110   (0x0010)  
	SDK_UNDEFINED(16,13748) /* FMulticastInlineDelegate */ __um(OnHasTalkedWithRoadie);                            // 0x0120   (0x0010)  
	SDK_UNDEFINED(16,13749) /* FMulticastInlineDelegate */ __um(OnCalibrationRequestOpenModal);                    // 0x0130   (0x0010)  
	SDK_UNDEFINED(16,13750) /* FMulticastInlineDelegate */ __um(OnCalibrationRegisterPreamble);                    // 0x0140   (0x0010)  
	FVector2D                                          AudioLatencyMsMinMax;                                       // 0x0150   (0x0010)  
	FVector2D                                          VideoLatencyMsMinMax;                                       // 0x0160   (0x0010)  
	unsigned char                                      UnknownData00_5[0x10];                                      // 0x0170   (0x0010)  MISSED
	class UFMCalibrationSaveData*                      CalibrationSaveData;                                        // 0x0180   (0x0008)  


	/// Functions
	// Function /Script/FMCalibrationRuntime.FMCalibrationControllerComponent.SetVideoLatencyMs
	// void SetVideoLatencyMs(float LatencyMs);                                                                              // [0xa8156f8] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMCalibrationRuntime.FMCalibrationControllerComponent.SetIsPreambleDisabled
	// void SetIsPreambleDisabled(bool bPreambleDisabled);                                                                   // [0xa815688] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMCalibrationRuntime.FMCalibrationControllerComponent.SetIsCalibrationDebugEnabled
	// void SetIsCalibrationDebugEnabled(bool bCalibrationDebugEnabled);                                                     // [0xa815618] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMCalibrationRuntime.FMCalibrationControllerComponent.SetIsCalibrated
	// void SetIsCalibrated(bool bCalibrated);                                                                               // [0xa8155a8] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMCalibrationRuntime.FMCalibrationControllerComponent.SetIsAutolaunchDisabled
	// void SetIsAutolaunchDisabled(bool bAutolaunchDisabled);                                                               // [0xa815538] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMCalibrationRuntime.FMCalibrationControllerComponent.SetHasTalkedWithRoadie
	// void SetHasTalkedWithRoadie(bool bHasTalkedWithRoadie);                                                               // [0xa8154c8] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMCalibrationRuntime.FMCalibrationControllerComponent.SetAudioLatencyMs
	// void SetAudioLatencyMs(float LatencyMs);                                                                              // [0xa815458] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMCalibrationRuntime.FMCalibrationControllerComponent.SendToggleModalMessage
	// void SendToggleModalMessage(class AActor* ContextActor, bool UsePreamble, bool bIsAutoLaunch);                        // [0xa815328] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMCalibrationRuntime.FMCalibrationControllerComponent.SaveCalibrationLocalToDevice
	// void SaveCalibrationLocalToDevice();                                                                                  // [0xa815314] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/FMCalibrationRuntime.FMCalibrationControllerComponent.OnLatencyMsUpdated__DelegateSignature
	// void OnLatencyMsUpdated__DelegateSignature(class UFMCalibrationControllerComponent* CalibrationControllerComponent, float LatencyMs); // [0x18a39e4] MulticastDelegate|Public|Delegate 
	// Function /Script/FMCalibrationRuntime.FMCalibrationControllerComponent.OnIsPreambleDisabledUpdated__DelegateSignature
	// void OnIsPreambleDisabledUpdated__DelegateSignature(class UFMCalibrationControllerComponent* CalibrationControllerComponent, bool IsPreambleDisabled); // [0x18a39e4] MulticastDelegate|Public|Delegate 
	// Function /Script/FMCalibrationRuntime.FMCalibrationControllerComponent.OnIsCalibrationDebugEnabled__DelegateSignature
	// void OnIsCalibrationDebugEnabled__DelegateSignature(class UFMCalibrationControllerComponent* CalibrationControllerComponent, bool IsCalibrationDebugEnabled); // [0x18a39e4] MulticastDelegate|Public|Delegate 
	// Function /Script/FMCalibrationRuntime.FMCalibrationControllerComponent.OnIsCalibratedUpdated__DelegateSignature
	// void OnIsCalibratedUpdated__DelegateSignature(class UFMCalibrationControllerComponent* CalibrationControllerComponent, bool IsCalibrated); // [0x18a39e4] MulticastDelegate|Public|Delegate 
	// Function /Script/FMCalibrationRuntime.FMCalibrationControllerComponent.OnIsAutolaunchDisabledUpdated__DelegateSignature
	// void OnIsAutolaunchDisabledUpdated__DelegateSignature(class UFMCalibrationControllerComponent* CalibrationControllerComponent, bool IsAutolaunchDisabled); // [0x18a39e4] MulticastDelegate|Public|Delegate 
	// Function /Script/FMCalibrationRuntime.FMCalibrationControllerComponent.OnHasTalkedWithRoadie__DelegateSignature
	// void OnHasTalkedWithRoadie__DelegateSignature(class UFMCalibrationControllerComponent* CalibrationControllerComponent, bool HasTalkedWithRoadie); // [0x18a39e4] MulticastDelegate|Public|Delegate 
	// Function /Script/FMCalibrationRuntime.FMCalibrationControllerComponent.OnCalibrationRequestOpenModal__DelegateSignature
	// void OnCalibrationRequestOpenModal__DelegateSignature(class UFMCalibrationControllerComponent* CalibrationControllerComponent, bool UsePreamble); // [0x18a39e4] MulticastDelegate|Public|Delegate 
	// Function /Script/FMCalibrationRuntime.FMCalibrationControllerComponent.OnCalibrationRegisterPreamble__DelegateSignature
	// void OnCalibrationRegisterPreamble__DelegateSignature(class UFMCalibrationControllerComponent* CalibrationControllerComponent, FGameplayTag PreambleGameplayTag); // [0x18a39e4] MulticastDelegate|Public|Delegate 
	// Function /Script/FMCalibrationRuntime.FMCalibrationControllerComponent.OnCalibrationDataSaved__DelegateSignature
	// void OnCalibrationDataSaved__DelegateSignature();                                                                     // [0x18a39e4] MulticastDelegate|Public|Delegate 
	// Function /Script/FMCalibrationRuntime.FMCalibrationControllerComponent.OnCalibrationDataLoaded__DelegateSignature
	// void OnCalibrationDataLoaded__DelegateSignature();                                                                    // [0x18a39e4] MulticastDelegate|Public|Delegate 
	// Function /Script/FMCalibrationRuntime.FMCalibrationControllerComponent.LoadCalibrationLocalToDevice
	// void LoadCalibrationLocalToDevice();                                                                                  // [0xa815300] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMCalibrationRuntime.FMCalibrationControllerComponent.IsCalibrationDataOnLatestVersion
	// bool IsCalibrationDataOnLatestVersion();                                                                              // [0xa8152e4] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMCalibrationRuntime.FMCalibrationControllerComponent.IsCalibrationDataLoaded
	// bool IsCalibrationDataLoaded();                                                                                       // [0xa8152cc] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMCalibrationRuntime.FMCalibrationControllerComponent.GetVideoLatencyMs
	// float GetVideoLatencyMs();                                                                                            // [0xa8152a4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMCalibrationRuntime.FMCalibrationControllerComponent.GetIsPreambleDisabled
	// bool GetIsPreambleDisabled();                                                                                         // [0xa815280] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMCalibrationRuntime.FMCalibrationControllerComponent.GetIsCalibrationDebugEnabled
	// bool GetIsCalibrationDebugEnabled();                                                                                  // [0xa81525c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMCalibrationRuntime.FMCalibrationControllerComponent.GetIsCalibrated
	// bool GetIsCalibrated();                                                                                               // [0xa815238] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMCalibrationRuntime.FMCalibrationControllerComponent.GetIsAutolaunchDisabled
	// bool GetIsAutolaunchDisabled();                                                                                       // [0xa815214] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMCalibrationRuntime.FMCalibrationControllerComponent.GetHasTalkedWithRoadie
	// bool GetHasTalkedWithRoadie();                                                                                        // [0xa8151f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMCalibrationRuntime.FMCalibrationControllerComponent.GetAudioLatencyMs
	// float GetAudioLatencyMs();                                                                                            // [0xa8151c8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMCalibrationRuntime.FMCalibrationControllerComponent.DisplayCalibrationWidget
	// void DisplayCalibrationWidget();                                                                                      // [0x18a39e4] Event|Public|BlueprintEvent 
};

/// Class /Script/FMCalibrationRuntime.FMCalibrationSaveData
/// Size: 0x0018 (0x000028 - 0x000040)
class UFMCalibrationSaveData : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	float                                              AudioLatencyMs;                                             // 0x0028   (0x0004)  
	float                                              VideoLatencyMs;                                             // 0x002C   (0x0004)  
	bool                                               IsCalibrated;                                               // 0x0030   (0x0001)  
	bool                                               IsPreambleDisabled;                                         // 0x0031   (0x0001)  
	bool                                               IsAutolaunchDisabled;                                       // 0x0032   (0x0001)  
	bool                                               IsCalibrationDebugEnabled;                                  // 0x0033   (0x0001)  
	bool                                               HasTalkedWithRoadie;                                        // 0x0034   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0035   (0x0003)  MISSED
	int32_t                                            SaveVersion;                                                // 0x0038   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Struct /Script/FMCalibrationRuntime.FMEvent_Calibration_ToggleModal
/// Size: 0x0002 (0x000000 - 0x000002)
struct FFMEvent_Calibration_ToggleModal
{ 
	bool                                               UsePreamble;                                                // 0x0000   (0x0001)  
	bool                                               bIsAutoLaunched;                                            // 0x0001   (0x0001)  
};

/// Struct /Script/FMCalibrationRuntime.FMEvent_Calibration_ModalOpened
/// Size: 0x0001 (0x000000 - 0x000001)
struct FFMEvent_Calibration_ModalOpened
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/FMCalibrationRuntime.FMEvent_Calibration_ModalClosed
/// Size: 0x0001 (0x000000 - 0x000001)
struct FFMEvent_Calibration_ModalClosed
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

