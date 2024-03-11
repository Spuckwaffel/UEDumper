
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FabricMetasoundDataTypes
/// dependency: FabricUI
/// dependency: FMCoreRuntime
/// dependency: FortniteGame
/// dependency: GameFeatures
/// dependency: GameplayTags
/// dependency: HarmonixMetasound
/// dependency: HarmonixMidi
/// dependency: MetasoundEngine
/// dependency: MetasoundFrontend
/// dependency: ModularGameplay
/// dependency: PlayspaceSystem
/// dependency: SlateCore

/// Enum /Script/FabricRuntime.EFabricContinuousInteractionDirection
/// Size: 0x03
enum class EFabricContinuousInteractionDirection : uint8_t
{
	EFabricContinuousInteractionDirection__Vertical                                  = 0,
	EFabricContinuousInteractionDirection__Horizontal                                = 1,
	EFabricContinuousInteractionDirection__EFabricContinuousInteractionDirection_MAX = 2
};

/// Enum /Script/FabricRuntime.EFabricInteractionToolStates
/// Size: 0x09
enum class EFabricInteractionToolStates : uint8_t
{
	EFabricInteractionToolStates__Equipped                                           = 0,
	EFabricInteractionToolStates__HoveredControl                                     = 1,
	EFabricInteractionToolStates__HoveredValidCablePort                              = 2,
	EFabricInteractionToolStates__HoveredInvalid                                     = 3,
	EFabricInteractionToolStates__ContinuousSelected                                 = 4,
	EFabricInteractionToolStates__MomentarySelected                                  = 5,
	EFabricInteractionToolStates__CableSelected                                      = 6,
	EFabricInteractionToolStates__None                                               = 7,
	EFabricInteractionToolStates__EFabricInteractionToolStates_MAX                   = 8
};

/// Enum /Script/FabricRuntime.EFabricInteractableType
/// Size: 0x05
enum class EFabricInteractableType : uint8_t
{
	EFabricInteractableType__Momentary                                               = 0,
	EFabricInteractableType__Continuous                                              = 1,
	EFabricInteractableType__Cable                                                   = 2,
	EFabricInteractableType__None                                                    = 3,
	EFabricInteractableType__EFabricInteractableType_MAX                             = 4
};

/// Enum /Script/FabricRuntime.EFabricMetasoundPlayState
/// Size: 0x05
enum class EFabricMetasoundPlayState : uint8_t
{
	EFabricMetasoundPlayState__Playing                                               = 0,
	EFabricMetasoundPlayState__Rebuilding                                            = 1,
	EFabricMetasoundPlayState__Paused                                                = 2,
	EFabricMetasoundPlayState__Stopped                                               = 3,
	EFabricMetasoundPlayState__EFabricMetasoundPlayState_MAX                         = 4
};

/// Enum /Script/FabricRuntime.EFabricMetasoundMusicEventPriority
/// Size: 0x03
enum class EFabricMetasoundMusicEventPriority : uint8_t
{
	EFabricMetasoundMusicEventPriority__AboveEmotes                                  = 0,
	EFabricMetasoundMusicEventPriority__BelowEmotes                                  = 1,
	EFabricMetasoundMusicEventPriority__EFabricMetasoundMusicEventPriority_MAX       = 2
};

/// Enum /Script/FabricRuntime.EFabricNoteStyle
/// Size: 0x04
enum class EFabricNoteStyle : uint8_t
{
	EFabricNoteStyle__Straight                                                       = 0,
	EFabricNoteStyle__Triplet                                                        = 1,
	EFabricNoteStyle__Dotted                                                         = 2,
	EFabricNoteStyle__EFabricNoteStyle_MAX                                           = 3
};

/// Enum /Script/FabricRuntime.EFabricFloatProviderType
/// Size: 0x03
enum class EFabricFloatProviderType : uint8_t
{
	EFabricFloatProviderType__Continuous                                             = 0,
	EFabricFloatProviderType__Instantaneous                                          = 1,
	EFabricFloatProviderType__EFabricFloatProviderType_MAX                           = 2
};

/// Enum /Script/FabricRuntime.EFabricWaveSyncType
/// Size: 0x03
enum class EFabricWaveSyncType : uint8_t
{
	EFabricWaveSyncType__Free                                                        = 0,
	EFabricWaveSyncType__BeatSync                                                    = 1,
	EFabricWaveSyncType__EFabricWaveSyncType_MAX                                     = 2
};

/// Enum /Script/FabricRuntime.EFabricWaveShape
/// Size: 0x07
enum class EFabricWaveShape : uint8_t
{
	EFabricWaveShape__Sine                                                           = 0,
	EFabricWaveShape__Triangle                                                       = 1,
	EFabricWaveShape__Saw                                                            = 2,
	EFabricWaveShape__Square                                                         = 3,
	EFabricWaveShape__RandomStepped                                                  = 4,
	EFabricWaveShape__RandomSmooth                                                   = 5,
	EFabricWaveShape__EFabricWaveShape_MAX                                           = 6
};

/// Enum /Script/FabricRuntime.EFabricValueSetterTransitionTiming
/// Size: 0x05
enum class EFabricValueSetterTransitionTiming : uint8_t
{
	Immediate                                                                        = 0,
	NextBeat                                                                         = 1,
	NextBar                                                                          = 2,
	NextPhrase                                                                       = 3,
	EFabricValueSetterTransitionTiming_MAX                                           = 4
};

/// Enum /Script/FabricRuntime.EFabricCloneTransformBehavior
/// Size: 0x06
enum class EFabricCloneTransformBehavior : uint8_t
{
	EFabricCloneTransformBehavior__None                                              = 0,
	EFabricCloneTransformBehavior__Uniform                                           = 1,
	EFabricCloneTransformBehavior__Stepped                                           = 2,
	EFabricCloneTransformBehavior__SteppedCentered                                   = 3,
	EFabricCloneTransformBehavior__SteppedExponential                                = 4,
	EFabricCloneTransformBehavior__EFabricCloneTransformBehavior_MAX                 = 5
};

/// Enum /Script/FabricRuntime.EJamFabricSyncType
/// Size: 0x04
enum class EJamFabricSyncType : uint8_t
{
	EJamFabricSyncType__Disconnected                                                 = 0,
	EJamFabricSyncType__FabricControlsJam                                            = 1,
	EJamFabricSyncType__Bidirectional                                                = 2,
	EJamFabricSyncType__EJamFabricSyncType_MAX                                       = 3
};

/// Enum /Script/FabricRuntime.EFabricMetaSoundPinDirection
/// Size: 0x03
enum class EFabricMetaSoundPinDirection : uint8_t
{
	EFabricMetaSoundPinDirection__Input                                              = 0,
	EFabricMetaSoundPinDirection__Output                                             = 1,
	EFabricMetaSoundPinDirection__EFabricMetaSoundPinDirection_MAX                   = 2
};

/// Enum /Script/FabricRuntime.EFabricMetasoundInputType
/// Size: 0x04
enum class EFabricMetasoundInputType : uint8_t
{
	EFabricMetasoundInputType__ModulatedUserOption                                   = 0,
	EFabricMetasoundInputType__NonModulatedUserOption                                = 1,
	EFabricMetasoundInputType__DirectInput                                           = 2,
	EFabricMetasoundInputType__EFabricMetasoundInputType_MAX                         = 3
};

/// Enum /Script/FabricRuntime.EFabricMetaSoundPatchWrapperQuality
/// Size: 0x03
enum class EFabricMetaSoundPatchWrapperQuality : uint8_t
{
	EFabricMetaSoundPatchWrapperQuality__High                                        = 0,
	EFabricMetaSoundPatchWrapperQuality__Low                                         = 1,
	EFabricMetaSoundPatchWrapperQuality__EFabricMetaSoundPatchWrapperQuality_MAX     = 2
};

/// Enum /Script/FabricRuntime.EFabricUserOptionType
/// Size: 0x06
enum class EFabricUserOptionType : uint8_t
{
	EFabricUserOptionType__Boolean                                                   = 0,
	EFabricUserOptionType__Integer                                                   = 1,
	EFabricUserOptionType__Float                                                     = 2,
	EFabricUserOptionType__String                                                    = 3,
	EFabricUserOptionType__Enum                                                      = 4,
	EFabricUserOptionType__EFabricUserOptionType_MAX                                 = 5
};

/// Enum /Script/FabricRuntime.ESequencerType
/// Size: 0x03
enum class ESequencerType : uint8_t
{
	ESequencerType__MultiTrack                                                       = 0,
	ESequencerType__SingleTrack                                                      = 1,
	ESequencerType__ESequencerType_MAX                                               = 2
};

/// Class /Script/FabricRuntime.FabricAnimatableButtonInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UFabricAnimatableButtonInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/FabricRuntime.FabricAnimatableButtonInterface.PlayOpenAnimation
	// void PlayOpenAnimation();                                                                                             // [0x326a61c] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricAnimatableButtonInterface.PlayCloseAnimation
	// void PlayCloseAnimation();                                                                                            // [0x3548e28] Native|Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/FabricRuntime.FabricButtonBase
/// Size: 0x00B8 (0x000290 - 0x000348)
class AFabricButtonBase : public AActor
{ 
public:
	unsigned char                                      UnknownData00_3[0x18];                                      // 0x0290   (0x0018)  MISSED
	SDK_UNDEFINED(16,13623) /* FMulticastInlineDelegate */ __um(ToggleStateChanged);                               // 0x02A8   (0x0010)  
	double                                             OpenTimeSeconds;                                            // 0x02B8   (0x0008)  
	double                                             CloseTimeSeconds;                                           // 0x02C0   (0x0008)  
	bool                                               bHasToggle;                                                 // 0x02C8   (0x0001)  
	SDK_UNDEFINED(1,13624) /* TEnumAsByte<EButtonPressMethod> */ __um(ClickMethod);                                // 0x02C9   (0x0001)  
	unsigned char                                      UnknownData01_5[0x6];                                       // 0x02CA   (0x0006)  MISSED
	class APlayerController*                           InteractingController;                                      // 0x02D0   (0x0008)  
	SDK_UNDEFINED(16,13625) /* FString */              __um(ButtonId);                                             // 0x02D8   (0x0010)  
	SDK_UNDEFINED(24,13626) /* FText */                __um(ButtonLabel);                                          // 0x02E8   (0x0018)  
	SDK_UNDEFINED(24,13627) /* FText */                __um(ButtonDescription);                                    // 0x0300   (0x0018)  
	FGameplayTagContainer                              GameplayTags;                                               // 0x0318   (0x0020)  
	bool                                               bEnabled;                                                   // 0x0338   (0x0001)  
	bool                                               bHovered;                                                   // 0x0339   (0x0001)  
	bool                                               bPressed;                                                   // 0x033A   (0x0001)  
	ECheckBoxState                                     ToggleState;                                                // 0x033B   (0x0001)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x033C   (0x0004)  MISSED
	class UFabricInteractableViewModel*                WidgetViewModel;                                            // 0x0340   (0x0008)  


	/// Functions
	// Function /Script/FabricRuntime.FabricButtonBase.ToggleStateChanged__DelegateSignature
	// void ToggleStateChanged__DelegateSignature(class APlayerController* InteractingController, bool IsToggle);            // [0x18a39e4] MulticastDelegate|Public|Delegate 
	// Function /Script/FabricRuntime.FabricButtonBase.SwapToggle
	// void SwapToggle();                                                                                                    // [0xabb1f4c] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricButtonBase.SetWidgetViewModel
	// void SetWidgetViewModel(class UFabricInteractableViewModel* ViewModel);                                               // [0xabb1e4c] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricButtonBase.SetToggleState
	// void SetToggleState(bool bNewToggleState, bool bBroadcast, bool bForce);                                              // [0xabb1c34] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricButtonBase.SetEnabled
	// void SetEnabled(bool bNewEnabled);                                                                                    // [0xabb19b4] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricButtonBase.OnUnhovered
	// void OnUnhovered();                                                                                                   // [0x3475290] Native|Event|Public|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricButtonBase.OnToggleStateChanged
	// void OnToggleStateChanged(bool bIsToggled);                                                                           // [0x77d22b8] Native|Event|Public|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricButtonBase.OnHovered
	// void OnHovered();                                                                                                     // [0x673c1d4] Native|Event|Public|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricButtonBase.OnEnabled
	// void OnEnabled();                                                                                                     // [0x2f99b74] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricButtonBase.OnDisabled
	// void OnDisabled();                                                                                                    // [0x21dc214] Native|Event|Public|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricButtonBase.OnButtonReleased
	// void OnButtonReleased();                                                                                              // [0x792af54] Native|Event|Public|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricButtonBase.OnButtonPressed
	// void OnButtonPressed();                                                                                               // [0x1c2b230] Native|Event|Public|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricButtonBase.OnButtonDoubleClicked
	// void OnButtonDoubleClicked();                                                                                         // [0x33e3b10] Native|Event|Public|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricButtonBase.OnButtonClicked
	// void OnButtonClicked();                                                                                               // [0x21dbe0c] Native|Event|Public|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricButtonBase.IsToggledOn
	// bool IsToggledOn();                                                                                                   // [0xabb127c] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/FabricRuntime.FabricButtonBase.IsPressed
	// bool IsPressed();                                                                                                     // [0x9d27338] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/FabricRuntime.FabricButtonBase.IsHovered
	// bool IsHovered();                                                                                                     // [0xabb1234] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/FabricRuntime.FabricButtonBase.IsEnabled
	// bool IsEnabled();                                                                                                     // [0x86ca86c] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/FabricRuntime.FabricButtonBase.HandleButtonUnhovered
	// void HandleButtonUnhovered();                                                                                         // [0x6b2e03c] Native|Event|Public|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricButtonBase.HandleButtonReleased
	// void HandleButtonReleased();                                                                                          // [0x8925198] Native|Event|Public|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricButtonBase.HandleButtonPressed
	// void HandleButtonPressed();                                                                                           // [0x1f6c11c] Native|Event|Public|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricButtonBase.HandleButtonHovered
	// void HandleButtonHovered();                                                                                           // [0x83e6058] Native|Event|Public|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricButtonBase.HandleButtonDoubleClicked
	// void HandleButtonDoubleClicked();                                                                                     // [0x1fc2138] Native|Event|Public|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricButtonBase.HandleButtonClicked
	// void HandleButtonClicked();                                                                                           // [0x325abb0] Native|Event|Public|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricButtonBase.GetOpenTimeline
	// class UTimelineComponent* GetOpenTimeline();                                                                          // [0x69f1ed4] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Script/FabricRuntime.FabricButtonBase.GetCloseTimeline
	// class UTimelineComponent* GetCloseTimeline();                                                                         // [0x69f1ed4] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure 
};

/// Class /Script/FabricRuntime.FabricButtonComponentBase
/// Size: 0x00D0 (0x0005C0 - 0x000690)
class UFabricButtonComponentBase : public UStaticMeshComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x10];                                      // 0x05C0   (0x0010)  MISSED
	SDK_UNDEFINED(16,13628) /* FMulticastInlineDelegate */ __um(ToggleStateChanged);                               // 0x05D0   (0x0010)  
	double                                             OpenTimeSeconds;                                            // 0x05E0   (0x0008)  
	double                                             CloseTimeSeconds;                                           // 0x05E8   (0x0008)  
	bool                                               bHasToggle;                                                 // 0x05F0   (0x0001)  
	SDK_UNDEFINED(1,13629) /* TEnumAsByte<EButtonPressMethod> */ __um(ClickMethod);                                // 0x05F1   (0x0001)  
	unsigned char                                      UnknownData01_5[0x6];                                       // 0x05F2   (0x0006)  MISSED
	class APlayerController*                           InteractingController;                                      // 0x05F8   (0x0008)  
	SDK_UNDEFINED(16,13630) /* FString */              __um(ButtonId);                                             // 0x0600   (0x0010)  
	SDK_UNDEFINED(24,13631) /* FText */                __um(ButtonLabel);                                          // 0x0610   (0x0018)  
	SDK_UNDEFINED(24,13632) /* FText */                __um(ButtonDescription);                                    // 0x0628   (0x0018)  
	FGameplayTagContainer                              GameplayTags;                                               // 0x0640   (0x0020)  
	bool                                               bUseScreenGrid;                                             // 0x0660   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x0661   (0x0007)  MISSED
	FVector2D                                          ScreenGridPosition;                                         // 0x0668   (0x0010)  
	bool                                               bEnabled;                                                   // 0x0678   (0x0001)  
	bool                                               bHovered;                                                   // 0x0679   (0x0001)  
	bool                                               bPressed;                                                   // 0x067A   (0x0001)  
	ECheckBoxState                                     ToggleState;                                                // 0x067B   (0x0001)  
	unsigned char                                      UnknownData03_5[0x4];                                       // 0x067C   (0x0004)  MISSED
	class UFabricInteractableViewModel*                WidgetViewModel;                                            // 0x0680   (0x0008)  
	unsigned char                                      UnknownData04_6[0x8];                                       // 0x0688   (0x0008)  MISSED


	/// Functions
	// Function /Script/FabricRuntime.FabricButtonComponentBase.ToggleStateChanged__DelegateSignature
	// void ToggleStateChanged__DelegateSignature(class APlayerController* InteractingController, bool IsToggle);            // [0x18a39e4] MulticastDelegate|Public|Delegate 
	// Function /Script/FabricRuntime.FabricButtonComponentBase.SwapToggle
	// void SwapToggle();                                                                                                    // [0xabb1f60] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricButtonComponentBase.SetWidgetViewModel
	// void SetWidgetViewModel(class UFabricInteractableViewModel* ViewModel);                                               // [0xabb1ecc] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricButtonComponentBase.SetToggleState
	// void SetToggleState(bool bNewToggleState, bool bBroadcast, bool bForce);                                              // [0xabb1d40] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricButtonComponentBase.SetEnabled
	// void SetEnabled(bool bNewEnabled);                                                                                    // [0xabb1a34] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricButtonComponentBase.OnUnhovered
	// void OnUnhovered();                                                                                                   // [0xabb191c] Native|Event|Public|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricButtonComponentBase.OnToggleStateChanged
	// void OnToggleStateChanged(bool bIsToggled);                                                                           // [0xabb1898] Native|Event|Public|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricButtonComponentBase.OnHovered
	// void OnHovered();                                                                                                     // [0xabb1314] Native|Event|Public|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricButtonComponentBase.OnEnabled
	// void OnEnabled();                                                                                                     // [0x1495280] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricButtonComponentBase.OnDisabled
	// void OnDisabled();                                                                                                    // [0x8813298] Native|Event|Public|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricButtonComponentBase.OnButtonReleased
	// void OnButtonReleased();                                                                                              // [0xabb12fc] Native|Event|Public|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricButtonComponentBase.OnButtonPressed
	// void OnButtonPressed();                                                                                               // [0xabb12e4] Native|Event|Public|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricButtonComponentBase.OnButtonDoubleClicked
	// void OnButtonDoubleClicked();                                                                                         // [0xabb12cc] Native|Event|Public|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricButtonComponentBase.OnButtonClicked
	// void OnButtonClicked();                                                                                               // [0xabb12b4] Native|Event|Public|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricButtonComponentBase.IsToggledOn
	// bool IsToggledOn();                                                                                                   // [0xabb1298] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/FabricRuntime.FabricButtonComponentBase.IsPressed
	// bool IsPressed();                                                                                                     // [0xabb1264] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/FabricRuntime.FabricButtonComponentBase.IsHovered
	// bool IsHovered();                                                                                                     // [0xabb124c] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/FabricRuntime.FabricButtonComponentBase.IsEnabled
	// bool IsEnabled();                                                                                                     // [0xabb121c] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/FabricRuntime.FabricButtonComponentBase.HandleButtonUnhovered
	// void HandleButtonUnhovered();                                                                                         // [0xabb1204] Native|Event|Public|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricButtonComponentBase.HandleButtonReleased
	// void HandleButtonReleased();                                                                                          // [0xabb11ec] Native|Event|Public|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricButtonComponentBase.HandleButtonPressed
	// void HandleButtonPressed();                                                                                           // [0xabb11d4] Native|Event|Public|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricButtonComponentBase.HandleButtonHovered
	// void HandleButtonHovered();                                                                                           // [0x3ebae20] Native|Event|Public|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricButtonComponentBase.HandleButtonDoubleClicked
	// void HandleButtonDoubleClicked();                                                                                     // [0xabb11bc] Native|Event|Public|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricButtonComponentBase.HandleButtonClicked
	// void HandleButtonClicked();                                                                                           // [0xabb11a4] Native|Event|Public|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricButtonComponentBase.GetOpenTimeline
	// class UTimelineComponent* GetOpenTimeline();                                                                          // [0x69f1ed4] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Script/FabricRuntime.FabricButtonComponentBase.GetCloseTimeline
	// class UTimelineComponent* GetCloseTimeline();                                                                         // [0x69f1ed4] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Script/FabricRuntime.FabricButtonComponentBase.ConstructButton
	// void ConstructButton();                                                                                               // [0x8813f44] Native|Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/FabricRuntime.FabricDevice
/// Size: 0x0000 (0x000028 - 0x000028)
class UFabricDevice : public UInterface
{ 
public:
};

/// Class /Script/FabricRuntime.FabricMetaSoundPatchOwner
/// Size: 0x0000 (0x000028 - 0x000028)
class UFabricMetaSoundPatchOwner : public UInterface
{ 
public:


	/// Functions
	// Function /Script/FabricRuntime.FabricMetaSoundPatchOwner.GetMetaSoundPatchWrapper
	// class UFabricMetaSoundPatchWrapper* GetMetaSoundPatchWrapper();                                                       // [0x3e263a8] Native|Event|Public|BlueprintEvent 
};

/// Class /Script/FabricRuntime.FabricAudioGenerator
/// Size: 0x0000 (0x000028 - 0x000028)
class UFabricAudioGenerator : public UInterface
{ 
public:


	/// Functions
	// Function /Script/FabricRuntime.FabricAudioGenerator.GetAudioAnalyzer
	// FSourceEffectChainEntry GetAudioAnalyzer();                                                                           // [0xabb0f14] Native|Event|Public|BlueprintEvent 
};

/// Class /Script/FabricRuntime.FabricAudioModifier
/// Size: 0x0000 (0x000028 - 0x000028)
class UFabricAudioModifier : public UInterface
{ 
public:


	/// Functions
	// Function /Script/FabricRuntime.FabricAudioModifier.GetSourceEffectChainEntries
	// TArray<FSourceEffectChainEntry> GetSourceEffectChainEntries();                                                        // [0xabb1130] Native|Event|Public|BlueprintEvent 
};

/// Class /Script/FabricRuntime.FabricAudioReceiver
/// Size: 0x0000 (0x000028 - 0x000028)
class UFabricAudioReceiver : public UInterface
{ 
public:


	/// Functions
	// Function /Script/FabricRuntime.FabricAudioReceiver.GetSoundSourceBus
	// class USoundSourceBus* GetSoundSourceBus();                                                                           // [0x3e263a8] Native|Event|Public|BlueprintEvent 
};

/// Class /Script/FabricRuntime.FabricFloatGenerator
/// Size: 0x0000 (0x000028 - 0x000028)
class UFabricFloatGenerator : public UInterface
{ 
public:


	/// Functions
	// Function /Script/FabricRuntime.FabricFloatGenerator.GetFloatProvider
	// class UFabricFloatProviderBase* GetFloatProvider();                                                                   // [0x3e263a8] Native|Event|Public|BlueprintEvent 
};

/// Class /Script/FabricRuntime.FabricFloatReceiver
/// Size: 0x0000 (0x000028 - 0x000028)
class UFabricFloatReceiver : public UInterface
{ 
public:


	/// Functions
	// Function /Script/FabricRuntime.FabricFloatReceiver.SetFloatProviders
	// void SetFloatProviders(TArray<UFabricFloatProviderBase*>& FloatProvider);                                             // [0x67cf560] Native|Event|Public|HasOutParms|BlueprintEvent 
};

/// Class /Script/FabricRuntime.FabricTextureGenerator
/// Size: 0x0000 (0x000028 - 0x000028)
class UFabricTextureGenerator : public UInterface
{ 
public:


	/// Functions
	// Function /Script/FabricRuntime.FabricTextureGenerator.GetTextureProvider
	// class UFabricTextureProviderBase* GetTextureProvider();                                                               // [0x3e263a8] Native|Event|Public|BlueprintEvent 
};

/// Class /Script/FabricRuntime.FabricTextureModifier
/// Size: 0x0000 (0x000028 - 0x000028)
class UFabricTextureModifier : public UInterface
{ 
public:


	/// Functions
	// Function /Script/FabricRuntime.FabricTextureModifier.IsShowingTexturePreview
	// bool IsShowingTexturePreview();                                                                                       // [0x284fe1c] Native|Event|Public|BlueprintEvent|Const 
	// Function /Script/FabricRuntime.FabricTextureModifier.GetTextureModifier
	// class UFabricTextureModifierBase* GetTextureModifier();                                                               // [0x3e263a8] Native|Event|Public|BlueprintEvent 
};

/// Class /Script/FabricRuntime.FabricTextureReceiver
/// Size: 0x0000 (0x000028 - 0x000028)
class UFabricTextureReceiver : public UInterface
{ 
public:


	/// Functions
	// Function /Script/FabricRuntime.FabricTextureReceiver.OnTexturesChanged
	// void OnTexturesChanged(TArray<FFabricTextureProviderTexture>& Texture);                                               // [0x7773ba8] Native|Event|Public|HasOutParms|BlueprintEvent 
};

/// Class /Script/FabricRuntime.FabricMeshGenerator
/// Size: 0x0000 (0x000028 - 0x000028)
class UFabricMeshGenerator : public UInterface
{ 
public:


	/// Functions
	// Function /Script/FabricRuntime.FabricMeshGenerator.GetMeshProvider
	// class UFabricMeshProviderBase* GetMeshProvider();                                                                     // [0x3e263a8] Native|Event|Public|BlueprintEvent 
};

/// Class /Script/FabricRuntime.FabricMeshModifier
/// Size: 0x0000 (0x000028 - 0x000028)
class UFabricMeshModifier : public UInterface
{ 
public:


	/// Functions
	// Function /Script/FabricRuntime.FabricMeshModifier.OnMeshesChanged
	// void OnMeshesChanged(TArray<FFabricMeshInstanceReference>& InstanceMeshReferences, bool bInstancesChanged);           // [0xabb1704] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricMeshModifier.IsShowingMeshPreview
	// bool IsShowingMeshPreview();                                                                                          // [0x81d2eec] Native|Event|Public|BlueprintEvent|Const 
	// Function /Script/FabricRuntime.FabricMeshModifier.GetMeshModifier
	// class UFabricMeshModifierBase* GetMeshModifier();                                                                     // [0x67ee0fc] Native|Event|Public|BlueprintEvent|Const 
};

/// Class /Script/FabricRuntime.FabricMeshReceiver
/// Size: 0x0000 (0x000028 - 0x000028)
class UFabricMeshReceiver : public UInterface
{ 
public:


	/// Functions
	// Function /Script/FabricRuntime.FabricMeshReceiver.OnMeshReferenceChanged
	// void OnMeshReferenceChanged(FFabricMeshProviderMeshReference& ReferenceMesh);                                         // [0xabb1644] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricMeshReceiver.OnMeshInstancesChanged
	// void OnMeshInstancesChanged(TArray<FTransform>& Meshes);                                                              // [0xabb15a4] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricMeshReceiver.OnMeshInstanceReferencesChanged
	// void OnMeshInstanceReferencesChanged(TArray<FFabricMeshInstanceReference>& MeshInstanceReferences, bool bMeshChanged, bool bInstancesChanged); // [0xabb132c] Native|Event|Public|HasOutParms|BlueprintEvent 
};

/// Class /Script/FabricRuntime.FabricModulationNode
/// Size: 0x0020 (0x000028 - 0x000048)
class UFabricModulationNode : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	TArray<class UFabricFloatProviderBase*>            FloatProviders;                                             // 0x0028   (0x0010)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x0038   (0x0010)  MISSED
};

/// Class /Script/FabricRuntime.FabricModulatable
/// Size: 0x0300 (0x000028 - 0x000328)
class UFabricModulatable : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x2C];                                      // 0x0000   (0x002C)  MISSED
	SDK_UNDEFINED(8,13633) /* TWeakObjectPtr<AActor*> */ __um(ModulatedActor);                                     // 0x002C   (0x0008)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0034   (0x0004)  MISSED
	SDK_UNDEFINED(16,13634) /* TArray<FString> */      __um(ModulatorParams);                                      // 0x0038   (0x0010)  
	SDK_UNDEFINED(80,13635) /* TSet<FName> */          __um(NonModulatedParamsWithCallbacks);                      // 0x0048   (0x0050)  
	SDK_UNDEFINED(80,13636) /* TMap<FString, TWeakObjectPtr<UObject*>> */ __um(Modulators);                        // 0x0098   (0x0050)  
	SDK_UNDEFINED(80,13637) /* TMap<FName, FName> */   __um(LastBroadcastedValues);                                // 0x00E8   (0x0050)  
	SDK_UNDEFINED(16,13638) /* TArray<TWeakObjectPtr<UObject*>> */ __um(ModulatorSources);                         // 0x0138   (0x0010)  
	unsigned char                                      UnknownData02_6[0x1E0];                                     // 0x0148   (0x01E0)  MISSED


	/// Functions
	// Function /Script/FabricRuntime.FabricModulatable.OnOptionsLoaded
	// void OnOptionsLoaded();                                                                                               // [0xabbd638] Final|Native|Protected 
	// Function /Script/FabricRuntime.FabricModulatable.OnModulatorFloatProviderConnectionChanged
	// void OnModulatorFloatProviderConnectionChanged(bool bConnected, class UObject* ModulatorObject);                      // [0xabbd930] Final|Native|Private 
	// Function /Script/FabricRuntime.FabricModulatable.OnModulatedPropertyChanged
	// void OnModulatedPropertyChanged(FString Value, class UObject* ModulatorObject);                                       // [0xabbd77c] Final|Native|Private 
	// Function /Script/FabricRuntime.FabricModulatable.OnAnyOptionUpdated
	// void OnAnyOptionUpdated();                                                                                            // [0xabbd638] Final|Native|Protected 
	// Function /Script/FabricRuntime.FabricModulatable.IsParamModulated
	// bool IsParamModulated(FString Param);                                                                                 // [0xabbd420] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricModulatable.GetModulatedString
	// bool GetModulatedString(FString Param, FMidiSongPos& SongPos, FString& OutString);                                    // [0xabbcd88] Final|Native|Protected|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricModulatable.GetModulatedInt
	// bool GetModulatedInt(FString Param, FMidiSongPos& SongPos, int32_t& OutInt);                                          // [0xabbca94] Final|Native|Protected|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricModulatable.GetModulatedFloat
	// bool GetModulatedFloat(FString Param, FMidiSongPos& SongPos, float& OutFloat);                                        // [0xabbc7a0] Final|Native|Protected|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricModulatable.GetModulatedEnum
	// bool GetModulatedEnum(FString Param, FMidiSongPos& SongPos, char& OutEnum);                                           // [0xabbc514] Final|Native|Protected|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricModulatable.GetModulatedBool
	// bool GetModulatedBool(FString Param, FMidiSongPos& SongPos, bool& OutBool);                                           // [0xabbc220] Final|Native|Protected|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricModulatable.GetModulatedActor
	// class AActor* GetModulatedActor();                                                                                    // [0xabbc1f8] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/FabricRuntime.FabricFloatProviderBase
/// Size: 0x0048 (0x000328 - 0x000370)
class UFabricFloatProviderBase : public UFabricModulatable
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0328   (0x0008)  MISSED
	SDK_UNDEFINED(16,13639) /* FMulticastInlineDelegate */ __um(OnFloatChanged);                                   // 0x0330   (0x0010)  
	float                                              CurrentFloat;                                               // 0x0340   (0x0004)  
	SDK_UNDEFINED(8,13640) /* TWeakObjectPtr<UMusicClockComponent*> */ __um(MusicClock);                           // 0x0344   (0x0008)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x034C   (0x0004)  MISSED
	class UFabricMetaSoundModulatorPatchWrapper*       AssociatedPatchWrapper;                                     // 0x0350   (0x0008)  
	SDK_UNDEFINED(16,13641) /* FString */              __um(EnabledParam);                                         // 0x0358   (0x0010)  
	bool                                               bAlwaysModulates;                                           // 0x0368   (0x0001)  
	bool                                               bBindBlueprintOnFloatChanged;                               // 0x0369   (0x0001)  
	bool                                               bIsEnabled;                                                 // 0x036A   (0x0001)  
	bool                                               bModulatorValueChanged;                                     // 0x036B   (0x0001)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x036C   (0x0004)  MISSED


	/// Functions
	// Function /Script/FabricRuntime.FabricFloatProviderBase.SetProviderEnabled
	// void SetProviderEnabled(bool bInIsEnabled);                                                                           // [0xabb1bb4] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricFloatProviderBase.SetMusicClock
	// void SetMusicClock(class UMusicClockComponent* NewMusicClock);                                                        // [0xabb1ab4] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricFloatProviderBase.SetAssociatedPatchWrapper
	// void SetAssociatedPatchWrapper(class UFabricMetaSoundModulatorPatchWrapper* PatchWrapper);                            // [0xabb1934] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricFloatProviderBase.ReceiveTick
	// void ReceiveTick(float DeltaSeconds);                                                                                 // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricFloatProviderBase.OnFloatChanged__DelegateSignature
	// void OnFloatChanged__DelegateSignature(float float);                                                                  // [0x18a39e4] MulticastDelegate|Public|Delegate 
	// Function /Script/FabricRuntime.FabricFloatProviderBase.GetFloatProviderType
	// EFabricFloatProviderType GetFloatProviderType();                                                                      // [0x68144b0] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricFloatProviderBase.GetFloatAtSongPos
	// float GetFloatAtSongPos(FMidiSongPos& SongPos);                                                                       // [0xabb1044] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricFloatProviderBase.GetCurrentSongPosWithOffset
	// FMidiSongPos GetCurrentSongPosWithOffset(float OffsetSeconds);                                                        // [0xabb0f9c] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricFloatProviderBase.GetCurrentSongPos
	// FMidiSongPos GetCurrentSongPos();                                                                                     // [0xabb0f60] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricFloatProviderBase.GetCurrentFloat
	// float GetCurrentFloat();                                                                                              // [0x9864c80] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricFloatProviderBase.GetAssociatedPatchWrapper
	// class UFabricMetaSoundModulatorPatchWrapper* GetAssociatedPatchWrapper();                                             // [0xabb0efc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/FabricRuntime.FabricFloatProviderWave
/// Size: 0x0150 (0x000370 - 0x0004C0)
class UFabricFloatProviderWave : public UFabricFloatProviderBase
{ 
public:
	SDK_UNDEFINED(16,13642) /* FString */              __um(WaveShapeParam);                                       // 0x0370   (0x0010)  
	SDK_UNDEFINED(16,13643) /* FString */              __um(FreeHzParam);                                          // 0x0380   (0x0010)  
	SDK_UNDEFINED(16,13644) /* FString */              __um(MinParam);                                             // 0x0390   (0x0010)  
	SDK_UNDEFINED(16,13645) /* FString */              __um(MaxParam);                                             // 0x03A0   (0x0010)  
	SDK_UNDEFINED(16,13646) /* FString */              __um(BeatDurationParam);                                    // 0x03B0   (0x0010)  
	SDK_UNDEFINED(16,13647) /* FString */              __um(BeatOffsetParam);                                      // 0x03C0   (0x0010)  
	SDK_UNDEFINED(16,13648) /* FString */              __um(ShapeParam);                                           // 0x03D0   (0x0010)  
	SDK_UNDEFINED(16,13649) /* FString */              __um(StyleParam);                                           // 0x03E0   (0x0010)  
	int32_t                                            PhaseCPDIndex;                                              // 0x03F0   (0x0004)  
	int32_t                                            ValueCPDIndex;                                              // 0x03F4   (0x0004)  
	unsigned char                                      UnknownData00_5[0x78];                                      // 0x03F8   (0x0078)  MISSED
	SDK_UNDEFINED(80,13650) /* TSet<TWeakObjectPtr<UStaticMeshComponent*>> */ __um(PreviewDisplayMeshes);          // 0x0470   (0x0050)  


	/// Functions
	// Function /Script/FabricRuntime.FabricFloatProviderWave.SetRandomSeedByGuid
	// void SetRandomSeedByGuid(FGuid& InRandomGuid);                                                                        // [0xabb4e6c] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricFloatProviderWave.SetFreePhase
	// void SetFreePhase(float InFreePhase);                                                                                 // [0xabb4d68] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricFloatProviderWave.RemovePreviewDisplayMesh
	// void RemovePreviewDisplayMesh(class UStaticMeshComponent* Mesh);                                                      // [0xabb484c] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricFloatProviderWave.GetRandomSeed
	// int32_t GetRandomSeed();                                                                                              // [0x81e71cc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricFloatProviderWave.GetPreviewDisplayMeshes
	// TArray<UStaticMeshComponent*> GetPreviewDisplayMeshes();                                                              // [0xabb4134] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/FabricRuntime.FabricFloatProviderWave.GetCurrentPhase
	// float GetCurrentPhase();                                                                                              // [0xabb3de4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricFloatProviderWave.GetCurrentFreePhase
	// float GetCurrentFreePhase();                                                                                          // [0xabb3dbc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricFloatProviderWave.ClearPreviewDisplayMeshes
	// void ClearPreviewDisplayMeshes();                                                                                     // [0xabb3ae8] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricFloatProviderWave.AddPreviewDisplayMesh
	// void AddPreviewDisplayMesh(class UStaticMeshComponent* Mesh);                                                         // [0xabb386c] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/FabricRuntime.FabricStepGenerator
/// Size: 0x0020 (0x000000 - 0x000020)
struct FFabricStepGenerator
{ 
	TArray<float>                                      Values;                                                     // 0x0008   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0018   (0x0008)  MISSED
};

/// Class /Script/FabricRuntime.FabricFloatProviderStep
/// Size: 0x0078 (0x000370 - 0x0003E8)
class UFabricFloatProviderStep : public UFabricFloatProviderBase
{ 
public:
	SDK_UNDEFINED(16,13651) /* FString */              __um(StepRateParam);                                        // 0x0370   (0x0010)  
	SDK_UNDEFINED(16,13652) /* FString */              __um(ActiveStepsParam);                                     // 0x0380   (0x0010)  
	SDK_UNDEFINED(16,13653) /* FString */              __um(StepParamBase);                                        // 0x0390   (0x0010)  
	int32_t                                            MaxSteps;                                                   // 0x03A0   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x03A4   (0x0004)  MISSED
	FFabricStepGenerator                               RuntimeGenerator;                                           // 0x03A8   (0x0020)  
	SDK_UNDEFINED(16,13654) /* FMulticastInlineDelegate */ __um(OnFloatProviderStepInitialized);                   // 0x03C8   (0x0010)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x03D8   (0x0010)  MISSED


	/// Functions
	// Function /Script/FabricRuntime.FabricFloatProviderStep.GetStepLengthBeats
	// float GetStepLengthBeats();                                                                                           // [0xabb4174] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/FabricRuntime.FabricFloatProviderValueSetter
/// Size: 0x0080 (0x000370 - 0x0003F0)
class UFabricFloatProviderValueSetter : public UFabricFloatProviderBase
{ 
public:
	SDK_UNDEFINED(16,13655) /* FString */              __um(ValueParam);                                           // 0x0370   (0x0010)  
	SDK_UNDEFINED(16,13656) /* FString */              __um(TransitionTimingParam);                                // 0x0380   (0x0010)  
	unsigned char                                      UnknownData00_6[0x60];                                      // 0x0390   (0x0060)  MISSED


	/// Functions
	// Function /Script/FabricRuntime.FabricFloatProviderValueSetter.GetUpdateBeat
	// float GetUpdateBeat();                                                                                                // [0xabb419c] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricFloatProviderValueSetter.CanUsePredictiveBeatBroadcasting
	// bool CanUsePredictiveBeatBroadcasting();                                                                              // [0xabb3acc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricFloatProviderValueSetter.CalculateTransitionTiming
	// float CalculateTransitionTiming();                                                                                    // [0xabb3a00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricFloatProviderValueSetter.BroadcastCurrentValue
	// float BroadcastCurrentValue(float OverriddenBeat);                                                                    // [0xabb3970] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/FabricRuntime.FabricHoldable
/// Size: 0x0000 (0x000028 - 0x000028)
class UFabricHoldable : public UInterface
{ 
public:
};

/// Class /Script/FabricRuntime.FabricInteractableControllerComponent
/// Size: 0x00A0 (0x0000A0 - 0x000140)
class UFabricInteractableControllerComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x00A0   (0x0008)  MISSED
	SDK_UNDEFINED(16,13657) /* FMulticastInlineDelegate */ __um(OnNoInteractablesHit);                             // 0x00A8   (0x0010)  
	class AFortPlayerController*                       PlayerController;                                           // 0x00B8   (0x0008)  
	SDK_UNDEFINED(32,13658) /* TWeakObjectPtr<UFortGadgetItemDefinition*> */ __um(FabricInteractionToolItemDefSoftPtr); // 0x00C0   (0x0020)  
	SDK_UNDEFINED(32,13659) /* TWeakObjectPtr<UFortGadgetItemDefinition*> */ __um(OverriddenFabricInteractionToolItemDefSoftPtr); // 0x00E0   (0x0020)  
	class UFortGadgetItemDefinition*                   FabricInteractionToolItemDef;                               // 0x0100   (0x0008)  
	float                                              EnsurePlayerHasInteractionToolRetryDelay;                   // 0x0108   (0x0004)  
	unsigned char                                      UnknownData01_5[0x14];                                      // 0x010C   (0x0014)  MISSED
	SDK_UNDEFINED(32,13660) /* TWeakObjectPtr<UClass*> */ __um(SoftFabricDeviceBaseClass);                         // 0x0120   (0x0020)  


	/// Functions
	// Function /Script/FabricRuntime.FabricInteractableControllerComponent.ServerRequestDoesIslandContainFabricDevices
	// void ServerRequestDoesIslandContainFabricDevices();                                                                   // [0x30fd094] Final|Net|NetReliableNative|Event|Private|NetServer 
	// Function /Script/FabricRuntime.FabricInteractableControllerComponent.ServerGivePlayerFabricInteractionTool
	// void ServerGivePlayerFabricInteractionTool();                                                                         // [0x248ecf4] Net|NetReliableNative|Event|Public|NetServer 
	// Function /Script/FabricRuntime.FabricInteractableControllerComponent.OnCreativeModeEnabledChangedDelegate
	// void OnCreativeModeEnabledChangedDelegate(bool bCreativeEnabled);                                                     // [0x63fe5cc] Final|Native|Public  
	// Function /Script/FabricRuntime.FabricInteractableControllerComponent.GiveBackInteractionTool
	// void GiveBackInteractionTool();                                                                                       // [0xabb41b4] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricInteractableControllerComponent.EnsurePlayerHasInteractionTool
	// void EnsurePlayerHasInteractionTool();                                                                                // [0xabb3c04] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricInteractableControllerComponent.ClientReceiveDoesIslandContainFabricDevices
	// void ClientReceiveDoesIslandContainFabricDevices(bool bIslandContainsFabricDevices);                                  // [0x81fc848] Final|Net|NetReliableNative|Event|Private|NetClient 
};

/// Class /Script/FabricRuntime.FabricInteractable
/// Size: 0x0000 (0x000028 - 0x000028)
class UFabricInteractable : public UInterface
{ 
public:


	/// Functions
	// Function /Script/FabricRuntime.FabricInteractable.StartSpecialInteraction
	// void StartSpecialInteraction(class APlayerController* Controller);                                                    // [0x7252b3c] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricInteractable.StartInteraction
	// void StartInteraction(class APlayerController* Controller);                                                           // [0x81d377c] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricInteractable.ShouldPassInteractionToComponent
	// bool ShouldPassInteractionToComponent(class AFabricInteractionTool* InteractionTool);                                 // [0x9e704dc] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricInteractable.SetInteractable
	// void SetInteractable(bool bInteractable);                                                                             // [0xabb4de8] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricInteractable.SetHitComponent
	// void SetHitComponent(class USceneComponent* HitComponent);                                                            // [0x81d323c] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricInteractable.SetFocused
	// void SetFocused(bool bIsFocused);                                                                                     // [0x8224b8c] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricInteractable.OnInteractionFocusTargetChanged
	// void OnInteractionFocusTargetChanged(class APlayerController* Controller, class UObject* FocusTarget, bool bIsFocused); // [0xabb4570] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricInteractable.IsValidToInteractWith
	// bool IsValidToInteractWith(class APlayerController* Controller);                                                      // [0xabb4328] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricInteractable.IsFocusDependentOnInteractionContext
	// bool IsFocusDependentOnInteractionContext(class APlayerController* Controller);                                       // [0xabb4258] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricInteractable.GetLinkedInteractable
	// class UObject* GetLinkedInteractable();                                                                               // [0x8de2740] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricInteractable.GetInteractionSFX
	// class UAudioComponent* GetInteractionSFX();                                                                           // [0xabb410c] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricInteractable.GetInteractableType
	// EFabricInteractableType GetInteractableType();                                                                        // [0x6a56904] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricInteractable.GetInteractableName
	// void GetInteractableName(FText& OutName);                                                                             // [0xabb406c] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricInteractable.GetInteractableForwardVector
	// FVector GetInteractableForwardVector(class USceneComponent* Interactable);                                            // [0xabb3fc8] Native|Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricInteractable.GetInteractableDescription
	// void GetInteractableDescription(FText& OutDescription);                                                               // [0xabb3f28] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricInteractable.GetInteractableComponentLocation
	// FVector GetInteractableComponentLocation(class USceneComponent* Interactable);                                        // [0xabb3e84] Native|Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricInteractable.GetContinuousInteractableValueNormalized
	// float GetContinuousInteractableValueNormalized();                                                                     // [0xabb3c90] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricInteractable.GetContinuousInteractableDirection
	// EFabricContinuousInteractionDirection GetContinuousInteractableDirection();                                           // [0x30dcec0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricInteractable.EndInteraction
	// void EndInteraction(class APlayerController* PlayerController, bool bWasDragAndDropInteraction);                      // [0xabb3b3c] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricInteractable.DoesInteractionRequireHoldable
	// bool DoesInteractionRequireHoldable();                                                                                // [0x3d54878] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricInteractable.CanInteractWithHoldable
	// bool CanInteractWithHoldable(TScriptInterface<Class>& Holdable);                                                      // [0xabb3a28] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/FabricRuntime.FabricInteractablePlayspaceComponent
/// Size: 0x0050 (0x0000A0 - 0x0000F0)
class UFabricInteractablePlayspaceComponent : public UPlayspaceComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x50];                                      // 0x00A0   (0x0050)  MISSED


	/// Functions
	// Function /Script/FabricRuntime.FabricInteractablePlayspaceComponent.SetFabricDeviceExistsInPlayspace
	// void SetFabricDeviceExistsInPlayspace();                                                                              // [0xabb4cf4] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricInteractablePlayspaceComponent.OnPlayspaceUserAdded
	// void OnPlayspaceUserAdded(FPlayspaceUser& PlayspaceUser);                                                             // [0xabb4670] Final|Native|Protected|HasOutParms 
	// Function /Script/FabricRuntime.FabricInteractablePlayspaceComponent.OnDownloadOnDemandCompleteIndividualClient
	// void OnDownloadOnDemandCompleteIndividualClient(FEventMessageTag Channel, FClientFinishedDownloadOnDemand& Context);  // [0xabb43bc] Final|Native|Protected|HasOutParms 
};

/// Struct /Script/FabricRuntime.InteractionData
/// Size: 0x000C (0x000000 - 0x00000C)
struct FInteractionData
{ 
	EFabricInteractionToolStates                       InteractionState;                                           // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	SDK_UNDEFINED(8,13661) /* TWeakObjectPtr<AFortCreativeDeviceProp*> */ __um(InteractableOwnerDevice);           // 0x0004   (0x0008)  
};

/// Struct /Script/FabricRuntime.InteractionSplinePoints
/// Size: 0x0060 (0x000000 - 0x000060)
struct FInteractionSplinePoints
{ 
	FVector_NetQuantize10                              SplineStartLocation;                                        // 0x0000   (0x0018)  
	FVector_NetQuantize10                              SplineStartForward;                                         // 0x0018   (0x0018)  
	FVector_NetQuantize10                              SplineEndLocation;                                          // 0x0030   (0x0018)  
	FVector_NetQuantize10                              SplineEndForward;                                           // 0x0048   (0x0018)  
};

/// Class /Script/FabricRuntime.FabricInteractionTool
/// Size: 0x0198 (0x001550 - 0x0016E8)
class AFabricInteractionTool : public AFortWeapon
{ 
public:
	SDK_UNDEFINED(16,13662) /* FMulticastInlineDelegate */ __um(OnInteractionStateChanged);                        // 0x1550   (0x0010)  
	SDK_UNDEFINED(16,13663) /* FMulticastInlineDelegate */ __um(OnCablesGrabbed);                                  // 0x1560   (0x0010)  
	SDK_UNDEFINED(16,13664) /* FMulticastInlineDelegate */ __um(OnCablesDropped);                                  // 0x1570   (0x0010)  
	SDK_UNDEFINED(16,13665) /* FMulticastInlineDelegate */ __um(OnMetasoundGeneratorCrossfadeStarted);             // 0x1580   (0x0010)  
	class USplineComponent*                            SplineComponent;                                            // 0x1590   (0x0008)  
	float                                              MaxRange;                                                   // 0x1598   (0x0004)  
	float                                              MinDragAndDropTriggerTime;                                  // 0x159C   (0x0004)  
	float                                              FiringRate;                                                 // 0x15A0   (0x0004)  
	float                                              SplineEndForwardMultiplier;                                 // 0x15A4   (0x0004)  
	float                                              SplineStartForwardMultiplier;                               // 0x15A8   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x15AC   (0x0004)  MISSED
	class UObject*                                     HoveredInteractable;                                        // 0x15B0   (0x0008)  
	class USceneComponent*                             HoveredInteractableHitComponent;                            // 0x15B8   (0x0008)  
	class UObject*                                     PressedInteractable;                                        // 0x15C0   (0x0008)  
	SDK_UNDEFINED(8,13666) /* TWeakObjectPtr<UObject*> */ __um(LastPressedInteractable);                           // 0x15C8   (0x0008)  
	class USceneComponent*                             PressedInteractableHitComponent;                            // 0x15D0   (0x0008)  
	SDK_UNDEFINED(8,13667) /* TWeakObjectPtr<AFortCreativeDeviceProp*> */ __um(InteractableOwnerDevice);           // 0x15D8   (0x0008)  
	float                                              AccumulatedDragAndDropTriggerTime;                          // 0x15E0   (0x0004)  
	FInteractionData                                   ServerInteractionData;                                      // 0x15E4   (0x000C)  
	unsigned char                                      UnknownData01_5[0x11];                                      // 0x15F0   (0x0011)  MISSED
	bool                                               bServerTriggerPressed;                                      // 0x1601   (0x0001)  
	unsigned char                                      UnknownData02_5[0x1];                                       // 0x1602   (0x0001)  MISSED
	bool                                               bServerIsHoldingCable;                                      // 0x1603   (0x0001)  
	unsigned char                                      UnknownData03_5[0x14];                                      // 0x1604   (0x0014)  MISSED
	FInteractionSplinePoints                           ServerSplinePoints;                                         // 0x1618   (0x0060)  
	float                                              ServerContinuousInteractableValue;                          // 0x1678   (0x0004)  
	unsigned char                                      UnknownData04_6[0x6C];                                      // 0x167C   (0x006C)  MISSED


	/// Functions
	// Function /Script/FabricRuntime.FabricInteractionTool.UnholsterWeapon
	// void UnholsterWeapon();                                                                                               // [0xabb4f04] Final|Native|Protected|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricInteractionTool.ServerSetTriggerPressed
	// void ServerSetTriggerPressed(bool bPressed);                                                                          // [0x9221624] Net|NetReliableNative|Event|Protected|NetServer 
	// Function /Script/FabricRuntime.FabricInteractionTool.ServerSetSplinePoints
	// void ServerSetSplinePoints(FInteractionSplinePoints SplinePoints);                                                    // [0xabb4b44] Net|NetReliableNative|Event|Protected|NetServer 
	// Function /Script/FabricRuntime.FabricInteractionTool.ServerSetIsHoldingCable
	// void ServerSetIsHoldingCable(bool bHoldingCable);                                                                     // [0xabb4ac0] Net|NetReliableNative|Event|Protected|NetServer 
	// Function /Script/FabricRuntime.FabricInteractionTool.ServerSetInteractionData
	// void ServerSetInteractionData(FInteractionData NewData);                                                              // [0xabb4970] Net|NetReliableNative|Event|Protected|NetServer 
	// Function /Script/FabricRuntime.FabricInteractionTool.ServerSetContinuousInteractableValue
	// void ServerSetContinuousInteractableValue(float Value);                                                               // [0x883f8ac] Net|Native|Event|Protected|NetServer 
	// Function /Script/FabricRuntime.FabricInteractionTool.ServerHandleFITFired
	// void ServerHandleFITFired();                                                                                          // [0xabb4958] Net|Native|Event|Protected|NetServer 
	// Function /Script/FabricRuntime.FabricInteractionTool.OnSplineUpdated
	// void OnSplineUpdated(EFabricInteractionToolStates NewInteractionState);                                               // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricInteractionTool.OnRep_ServerTriggerPressed
	// void OnRep_ServerTriggerPressed();                                                                                    // [0xabb47fc] Final|Native|Protected 
	// Function /Script/FabricRuntime.FabricInteractionTool.OnRep_ServerIsHoldingCable
	// void OnRep_ServerIsHoldingCable();                                                                                    // [0xabb4798] Final|Native|Protected 
	// Function /Script/FabricRuntime.FabricInteractionTool.OnRep_ServerInteractionData
	// void OnRep_ServerInteractionData();                                                                                   // [0xabb4784] Final|Native|Protected 
	// Function /Script/FabricRuntime.FabricInteractionTool.OnRep_ServerContinuousInteractableValue
	// void OnRep_ServerContinuousInteractableValue();                                                                       // [0xabb4750] Final|Native|Protected 
	// Function /Script/FabricRuntime.FabricInteractionTool.OnMetasoundGeneratorCrossfadeStarted__DelegateSignature
	// void OnMetasoundGeneratorCrossfadeStarted__DelegateSignature(float CrossfadeSeconds);                                 // [0x18a39e4] MulticastDelegate|Public|Delegate 
	// Function /Script/FabricRuntime.FabricInteractionTool.OnInteractionStateChanged__DelegateSignature
	// void OnInteractionStateChanged__DelegateSignature(EFabricInteractionToolStates NewState, class AFortCreativeDeviceProp* Device); // [0x18a39e4] MulticastDelegate|Public|Delegate 
	// Function /Script/FabricRuntime.FabricInteractionTool.OnCableHeldStateChanged__DelegateSignature
	// void OnCableHeldStateChanged__DelegateSignature(class AFortCreativeDeviceProp* Device);                               // [0x18a39e4] MulticastDelegate|Public|Delegate 
	// Function /Script/FabricRuntime.FabricInteractionTool.IsRunningOnOwningClient
	// bool IsRunningOnOwningClient();                                                                                       // [0xabb4304] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricInteractionTool.IsHoldingCables
	// bool IsHoldingCables();                                                                                               // [0xabb42ec] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/FabricRuntime.FabricInteractionTool.HandleMetasoundGeneratorCrossfade
	// void HandleMetasoundGeneratorCrossfade(float CrossfadeSeconds);                                                       // [0xabb41c8] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricInteractionTool.GetPressedInteractable
	// class UObject* GetPressedInteractable();                                                                              // [0x9fe028c] Final|Native|Protected|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricInteractionTool.GetHoveredInteractableType
	// EFabricInteractableType GetHoveredInteractableType();                                                                 // [0xabb3e40] Final|Native|Protected|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricInteractionTool.GetHoveredInteractableHitComponent
	// class USceneComponent* GetHoveredInteractableHitComponent();                                                          // [0xabb3e28] Final|Native|Protected|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricInteractionTool.GetFabricInteractionToolState
	// EFabricInteractionToolStates GetFabricInteractionToolState();                                                         // [0xabb3e10] Final|Native|Protected|BlueprintCallable|BlueprintPure 
	// Function /Script/FabricRuntime.FabricInteractionTool.GetContinuousStateValue
	// int32_t GetContinuousStateValue();                                                                                    // [0xabb3d7c] Final|Native|Protected|BlueprintCallable|BlueprintPure 
	// Function /Script/FabricRuntime.FabricInteractionTool.GetContinuousMovementValue
	// float GetContinuousMovementValue();                                                                                   // [0xabb3d54] Final|Native|Protected|BlueprintCallable|BlueprintPure 
	// Function /Script/FabricRuntime.FabricInteractionTool.GetContinuousInteractionDirection
	// EFabricContinuousInteractionDirection GetContinuousInteractionDirection();                                            // [0xabb3cbc] Final|Native|Protected|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricInteractionTool.GetContinuousInteractableValueNormalized
	// float GetContinuousInteractableValueNormalized();                                                                     // [0xabb3c78] Final|Native|Protected|BlueprintCallable|BlueprintPure 
	// Function /Script/FabricRuntime.FabricInteractionTool.DeactiveWeaponAndState
	// void DeactiveWeaponAndState();                                                                                        // [0x883d5c4] Native|Protected|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricInteractionTool.ClientStopInteracting
	// void ClientStopInteracting();                                                                                         // [0x887dcc8] Net|NetReliableNative|Event|Protected|NetClient 
	// Function /Script/FabricRuntime.FabricInteractionTool.ClientDeactiveWeaponAndState
	// void ClientDeactiveWeaponAndState();                                                                                  // [0x841db5c] Net|NetReliableNative|Event|Protected|NetClient 
};

/// Class /Script/FabricRuntime.FabricMeshModifierBase
/// Size: 0x0008 (0x000328 - 0x000330)
class UFabricMeshModifierBase : public UFabricModulatable
{ 
public:
	EFabricCloneTransformBehavior                      CloneBehavior;                                              // 0x0328   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0329   (0x0007)  MISSED
};

/// Class /Script/FabricRuntime.FabricMeshModifierTranslate
/// Size: 0x0018 (0x000330 - 0x000348)
class UFabricMeshModifierTranslate : public UFabricMeshModifierBase
{ 
public:
	FVector                                            PositionOffset;                                             // 0x0330   (0x0018)  
};

/// Class /Script/FabricRuntime.FabricMeshModifierRotate
/// Size: 0x0018 (0x000330 - 0x000348)
class UFabricMeshModifierRotate : public UFabricMeshModifierBase
{ 
public:
	FRotator                                           RotationAmount;                                             // 0x0330   (0x0018)  
};

/// Class /Script/FabricRuntime.FabricMeshModifierScale
/// Size: 0x0018 (0x000330 - 0x000348)
class UFabricMeshModifierScale : public UFabricMeshModifierBase
{ 
public:
	FVector                                            ScaleFactor;                                                // 0x0330   (0x0018)  
};

/// Class /Script/FabricRuntime.FabricMeshModifierClone
/// Size: 0x0028 (0x000330 - 0x000358)
class UFabricMeshModifierClone : public UFabricMeshModifierBase
{ 
public:
	int32_t                                            CloneCount;                                                 // 0x0330   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0334   (0x0004)  MISSED
	FVector                                            PerCloneTranslation;                                        // 0x0338   (0x0018)  
	bool                                               bCentered;                                                  // 0x0350   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0351   (0x0007)  MISSED
};

/// Class /Script/FabricRuntime.FabricMeshModifierRandomize
/// Size: 0x0068 (0x000330 - 0x000398)
class UFabricMeshModifierRandomize : public UFabricMeshModifierBase
{ 
public:
	float                                              LocationRandLimit;                                          // 0x0330   (0x0004)  
	float                                              RotationRandLimit;                                          // 0x0334   (0x0004)  
	float                                              ScaleRandLimit;                                             // 0x0338   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x033C   (0x0004)  MISSED
	FVector                                            LocationRandRange;                                          // 0x0340   (0x0018)  
	FVector                                            RotationRandRange;                                          // 0x0358   (0x0018)  
	FVector                                            ScaleRandRangeAdditive;                                     // 0x0370   (0x0018)  
	float                                              ScaleRandRangeRangeBase;                                    // 0x0388   (0x0004)  
	bool                                               bUniformScale;                                              // 0x038C   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x038D   (0x0003)  MISSED
	FRandomStream                                      RandomStream;                                               // 0x0390   (0x0008)  
};

/// Struct /Script/FabricRuntime.FabricMeshProviderMeshReferenceParamInfo
/// Size: 0x000C (0x000000 - 0x00000C)
struct FFabricMeshProviderMeshReferenceParamInfo
{ 
	FMaterialParameterInfo                             MaterialParameterInfo;                                      // 0x0000   (0x000C)  
};

/// Struct /Script/FabricRuntime.FabricMeshProviderMeshReferenceParamInfo_Scalar
/// Size: 0x0004 (0x00000C - 0x000010)
struct FFabricMeshProviderMeshReferenceParamInfo_Scalar : FFabricMeshProviderMeshReferenceParamInfo
{ 
	float                                              Scalar;                                                     // 0x000C   (0x0004)  
};

/// Struct /Script/FabricRuntime.FabricMeshProviderMeshReferenceParamInfo_Color
/// Size: 0x0010 (0x00000C - 0x00001C)
struct FFabricMeshProviderMeshReferenceParamInfo_Color : FFabricMeshProviderMeshReferenceParamInfo
{ 
	FLinearColor                                       Color;                                                      // 0x000C   (0x0010)  
};

/// Struct /Script/FabricRuntime.FabricMeshProviderMeshReferenceParams
/// Size: 0x0028 (0x000000 - 0x000028)
struct FFabricMeshProviderMeshReferenceParams
{ 
	double                                             UniformScale;                                               // 0x0000   (0x0008)  
	TArray<FFabricMeshProviderMeshReferenceParamInfo_Scalar> ScalarParams;                                         // 0x0008   (0x0010)  
	TArray<FFabricMeshProviderMeshReferenceParamInfo_Color> ColorParams;                                           // 0x0018   (0x0010)  
};

/// Struct /Script/FabricRuntime.FabricMeshProviderMeshReference
/// Size: 0x0038 (0x000000 - 0x000038)
struct FFabricMeshProviderMeshReference
{ 
	class UStreamableRenderAsset*                      Mesh;                                                       // 0x0000   (0x0008)  
	class UTexture*                                    Texture;                                                    // 0x0008   (0x0008)  
	FFabricMeshProviderMeshReferenceParams             Params;                                                     // 0x0010   (0x0028)  
};

/// Class /Script/FabricRuntime.FabricMeshTreeNode
/// Size: 0x0080 (0x000028 - 0x0000A8)
class UFabricMeshTreeNode : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	class UFabricMeshModifierBase*                     MeshModifier;                                               // 0x0028   (0x0008)  
	FFabricMeshProviderMeshReferenceParams             Params;                                                     // 0x0030   (0x0028)  
	FFabricMeshProviderMeshReference                   MeshProviderReference;                                      // 0x0058   (0x0038)  
	TArray<class UFabricMeshTreeNode*>                 Children;                                                   // 0x0090   (0x0010)  
	uint32_t                                           LastCalculatedChecksum;                                     // 0x00A0   (0x0004)  
	bool                                               bAllowChecksumCalculation;                                  // 0x00A4   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x00A5   (0x0003)  MISSED


	/// Functions
	// Function /Script/FabricRuntime.FabricMeshTreeNode.Reset
	// void Reset();                                                                                                         // [0xabb7ac4] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMeshTreeNode.GenerateMeshInstanceReferences
	// TArray<FFabricMeshInstanceReference> GenerateMeshInstanceReferences();                                                // [0xabb6cd4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricMeshTreeNode.CopyProperties
	// void CopyProperties(class UFabricMeshTreeNode* Other);                                                                // [0xabb6a8c] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/FabricRuntime.FabricMeshProviderBase
/// Size: 0x0058 (0x000028 - 0x000080)
class UFabricMeshProviderBase : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	FFabricMeshProviderMeshReference                   ReferenceMesh;                                              // 0x0028   (0x0038)  
	TArray<FTransform>                                 InstanceMeshes;                                             // 0x0060   (0x0010)  
	float                                              CurrentCableFloatValue;                                     // 0x0070   (0x0004)  
	float                                              CurrentCableFloatDirection;                                 // 0x0074   (0x0004)  
	bool                                               bCurrentCableFloatDirty;                                    // 0x0078   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0079   (0x0007)  MISSED


	/// Functions
	// Function /Script/FabricRuntime.FabricMeshProviderBase.SetReferenceMesh
	// void SetReferenceMesh(FFabricMeshProviderMeshReference& InMesh);                                                      // [0xabb8048] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/FabricRuntime.FabricMetaSoundPatchWrapper_PerPlatformInputTuning
/// Size: 0x0008 (0x000000 - 0x000008)
struct FFabricMetaSoundPatchWrapper_PerPlatformInputTuning
{ 
	FName                                              NodeInputName;                                              // 0x0000   (0x0004)  
	bool                                               bUseDefaultValues;                                          // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0005   (0x0003)  MISSED
};

/// Struct /Script/FabricRuntime.FabricMetaSoundPatchWrapper_PerPlatformBoolInputTuning
/// Size: 0x0058 (0x000008 - 0x000060)
struct FFabricMetaSoundPatchWrapper_PerPlatformBoolInputTuning : FFabricMetaSoundPatchWrapper_PerPlatformInputTuning
{ 
	bool                                               bDefaultValue;                                              // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0009   (0x0007)  MISSED
	SDK_UNDEFINED(80,13668) /* TMap<FName, bool> */    __um(PerPlatformTuning);                                    // 0x0010   (0x0050)  
};

/// Struct /Script/FabricRuntime.FabricMetaSoundPatchWrapper_PerPlatformIntInputTuning
/// Size: 0x0058 (0x000008 - 0x000060)
struct FFabricMetaSoundPatchWrapper_PerPlatformIntInputTuning : FFabricMetaSoundPatchWrapper_PerPlatformInputTuning
{ 
	int32_t                                            DefaultValue;                                               // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	SDK_UNDEFINED(80,13669) /* TMap<FName, int32_t> */ __um(PerPlatformTuning);                                    // 0x0010   (0x0050)  
};

/// Struct /Script/FabricRuntime.FabricMetaSoundPatchWrapper_PerPlatformFloatInputTuning
/// Size: 0x0058 (0x000008 - 0x000060)
struct FFabricMetaSoundPatchWrapper_PerPlatformFloatInputTuning : FFabricMetaSoundPatchWrapper_PerPlatformInputTuning
{ 
	float                                              DefaultValue;                                               // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	SDK_UNDEFINED(80,13670) /* TMap<FName, float> */   __um(PerPlatformTuning);                                    // 0x0010   (0x0050)  
};

/// Struct /Script/FabricRuntime.FabricMetaSoundDirectInputInfo
/// Size: 0x0008 (0x000000 - 0x000008)
struct FFabricMetaSoundDirectInputInfo
{ 
	FName                                              MetaSoundInputName;                                         // 0x0000   (0x0004)  
	EFabricUserOptionType                              InputType;                                                  // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0005   (0x0003)  MISSED
};

/// Struct /Script/FabricRuntime.FabricMetaSoundPatchWrapperPeakTamer
/// Size: 0x0024 (0x000000 - 0x000024)
struct FFabricMetaSoundPatchWrapperPeakTamer
{ 
	bool                                               bUseGameplaySmoothing;                                      // 0x0000   (0x0001)  
	bool                                               bSortSignals;                                               // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0002   (0x0002)  MISSED
	int32_t                                            MaxSignalsToTame;                                           // 0x0004   (0x0004)  
	unsigned char                                      UnknownData01_6[0x1C];                                      // 0x0008   (0x001C)  MISSED
};

/// Struct /Script/FabricRuntime.FabricMetaSoundPatchWrapperBinding
/// Size: 0x0048 (0x000000 - 0x000048)
struct FFabricMetaSoundPatchWrapperBinding
{ 
	FName                                              FriendlyName;                                               // 0x0000   (0x0004)  
	bool                                               bAllowOnDedicatedServer;                                    // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0005   (0x0003)  MISSED
	FFabricMetaSoundPatchWrapperPeakTamer              PeakTamer;                                                  // 0x0008   (0x0024)  
	FName                                              MetaSoundNodeName;                                          // 0x002C   (0x0004)  
	TArray<float>                                      Signals;                                                    // 0x0030   (0x0010)  
	bool                                               bBoundToWatchEvents;                                        // 0x0040   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0041   (0x0007)  MISSED
};

/// Struct /Script/FabricRuntime.FabricMetaSoundNodeInfo
/// Size: 0x00F0 (0x000000 - 0x0000F0)
struct FFabricMetaSoundNodeInfo
{ 
	FMetaSoundNodeHandle                               NodeHandle;                                                 // 0x0000   (0x0010)  
	FMetaSoundNodeHandle                               OutputConnectionHandle;                                     // 0x0010   (0x0010)  
	FMetaSoundNodeHandle                               InputConnectionHandle;                                      // 0x0020   (0x0010)  
	FName                                              Name;                                                       // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0034   (0x0004)  MISSED
	SDK_UNDEFINED(80,13671) /* TMap<FName, FMetaSoundBuilderNodeOutputHandle> */ __um(InputNodeNamesToHandles);    // 0x0038   (0x0050)  
	FMetaSoundNodeHandle                               AnalyzerHandle;                                             // 0x0088   (0x0010)  
	class UMetasoundParameterPack*                     AnalyzerParameterPack;                                      // 0x0098   (0x0008)  
	FName                                              AnalyzerName;                                               // 0x00A0   (0x0004)  
	FMetaSoundNodeHandle                               SwitcherHandle;                                             // 0x00A4   (0x0010)  
	FMetaSoundNodeHandle                               SelectHandle;                                               // 0x00B4   (0x0010)  
	FName                                              NodeEnabledInput;                                           // 0x00C4   (0x0004)  
	FName                                              AnalyzerNodeVisibleInput;                                   // 0x00C8   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x00CC   (0x0004)  MISSED
	TArray<FName>                                      AnalyzerOutputNames;                                        // 0x00D0   (0x0010)  
	class UMetaSoundPatch*                             PatchSpawnedFrom;                                           // 0x00E0   (0x0008)  
	class UMetasoundParameterPack*                     ParameterPack;                                              // 0x00E8   (0x0008)  
};

/// Struct /Script/FabricRuntime.FabricMetaSoundUserOptionInputInfo
/// Size: 0x0018 (0x000000 - 0x000018)
struct FFabricMetaSoundUserOptionInputInfo
{ 
	SDK_UNDEFINED(16,13672) /* FString */              __um(UserOption);                                           // 0x0000   (0x0010)  
	FName                                              MetaSoundInputName;                                         // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/FabricRuntime.FabricMetaSoundRuntimeInputInfo
/// Size: 0x0028 (0x000000 - 0x000028)
struct FFabricMetaSoundRuntimeInputInfo
{ 
	FFabricMetaSoundUserOptionInputInfo                InputInfo;                                                  // 0x0000   (0x0018)  
	EFabricMetasoundInputType                          InputType;                                                  // 0x0018   (0x0001)  
	EFabricUserOptionType                              FabricKnobType;                                             // 0x0019   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x001A   (0x0002)  MISSED
	FName                                              DataType;                                                   // 0x001C   (0x0004)  
	FName                                              MetaSoundInputNodeName;                                     // 0x0020   (0x0004)  
	bool                                               bIsModulated;                                               // 0x0024   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0025   (0x0003)  MISSED
};

/// Struct /Script/FabricRuntime.MetaSoundCombinerNodeHandle
/// Size: 0x0150 (0x000000 - 0x000150)
struct FMetaSoundCombinerNodeHandle
{ 
	FFabricMetaSoundNodeInfo                           NodeInfo;                                                   // 0x0000   (0x00F0)  
	FMetaSoundBuilderNodeInputHandle                   CombinerInput1;                                             // 0x00F0   (0x0020)  
	FMetaSoundBuilderNodeInputHandle                   CombinerInput2;                                             // 0x0110   (0x0020)  
	FMetaSoundBuilderNodeOutputHandle                  CombinedOutput;                                             // 0x0130   (0x0020)  
};

/// Class /Script/FabricRuntime.FabricMetaSoundPatchWrapper
/// Size: 0x0380 (0x000328 - 0x0006A8)
class UFabricMetaSoundPatchWrapper : public UFabricModulatable
{ 
public:
	FName                                              EnabledStateInputName;                                      // 0x0328   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x032C   (0x0004)  MISSED
	SDK_UNDEFINED(32,13673) /* TWeakObjectPtr<UMetaSoundPatch*> */ __um(MetaSoundPatch);                           // 0x0330   (0x0020)  
	SDK_UNDEFINED(80,13674) /* TMap<FString, FName> */ __um(UserOptionsToNodeInputs);                              // 0x0350   (0x0050)  
	TArray<FFabricMetaSoundPatchWrapper_PerPlatformBoolInputTuning> PerPlatformInputBools;                         // 0x03A0   (0x0010)  
	TArray<FFabricMetaSoundPatchWrapper_PerPlatformIntInputTuning> PerPlatformInputInts;                           // 0x03B0   (0x0010)  
	TArray<FFabricMetaSoundPatchWrapper_PerPlatformFloatInputTuning> PerPlatformInputFloats;                       // 0x03C0   (0x0010)  
	TArray<FFabricMetaSoundDirectInputInfo>            DirectInputs;                                               // 0x03D0   (0x0010)  
	FFabricMetaSoundPatchWrapperBinding                SimpleSignalOutputBinding;                                  // 0x03E0   (0x0048)  
	SDK_UNDEFINED(16,13675) /* FMulticastInlineDelegate */ __um(OnSimpleSignalBindingUpdate);                      // 0x0428   (0x0010)  
	FName                                              VisibleInputParamName;                                      // 0x0438   (0x0004)  
	FName                                              AudibleInputParamName;                                      // 0x043C   (0x0004)  
	bool                                               bCanConsumeVisibleFlag;                                     // 0x0440   (0x0001)  
	bool                                               bCanConsumeAudibleFlag;                                     // 0x0441   (0x0001)  
	bool                                               bIsVisible;                                                 // 0x0442   (0x0001)  
	bool                                               bIsAudible;                                                 // 0x0443   (0x0001)  
	unsigned char                                      UnknownData01_5[0x74];                                      // 0x0444   (0x0074)  MISSED
	SDK_UNDEFINED(16,13676) /* FMulticastInlineDelegate */ __um(OnMetaSoundOutputIntChangedBatch);                 // 0x04B8   (0x0010)  
	SDK_UNDEFINED(16,13677) /* FMulticastInlineDelegate */ __um(OnMetaSoundOutputFloatChangedBatch);               // 0x04C8   (0x0010)  
	class UFabricMetaSoundManagerComponent*            CurrentManager;                                             // 0x04D8   (0x0008)  
	SDK_UNDEFINED(8,13678) /* TWeakObjectPtr<UFabricMetaSoundTickSubsystem*> */ __um(TickSubsystem);               // 0x04E0   (0x0008)  
	FFabricMetaSoundNodeInfo                           CurrentNode;                                                // 0x04E8   (0x00F0)  
	SDK_UNDEFINED(8,13679) /* TWeakObjectPtr<AActor*> */ __um(PositionalProxyActor);                               // 0x05D8   (0x0008)  
	unsigned char                                      UnknownData02_5[0x20];                                      // 0x05E0   (0x0020)  MISSED
	SDK_UNDEFINED(8,13680) /* TWeakObjectPtr<UAudioComponent*> */ __um(CurrentAudioComponent);                     // 0x0600   (0x0008)  
	SDK_UNDEFINED(8,13681) /* TWeakObjectPtr<UAudioComponent*> */ __um(NewAudioComponent);                         // 0x0608   (0x0008)  
	FName                                              CombinerMetaSoundType;                                      // 0x0610   (0x0004)  
	FName                                              AnalyzerMetaSoundType;                                      // 0x0614   (0x0004)  
	TArray<FFabricMetaSoundRuntimeInputInfo>           MetaSoundRuntimeInputInfos;                                 // 0x0618   (0x0010)  
	TArray<class UFabricMetaSoundPatchWrapper*>        ConnectedInputWrappers;                                     // 0x0628   (0x0010)  
	TArray<class UFabricMetaSoundPatchWrapper*>        PendingInputWrappers;                                       // 0x0638   (0x0010)  
	TArray<class UFabricMetaSoundPatchWrapper*>        PendingOutputWrappers;                                      // 0x0648   (0x0010)  
	TArray<FMetaSoundCombinerNodeHandle>               CombinersInUse;                                             // 0x0658   (0x0010)  
	TArray<class UFabricMetaSoundPatchWrapper*>        ConnectedOutputWrappers;                                    // 0x0668   (0x0010)  
	EFabricMetaSoundPatchWrapperQuality                PatchWrapperQuality;                                        // 0x0678   (0x0001)  
	unsigned char                                      UnknownData03_5[0x17];                                      // 0x0679   (0x0017)  MISSED
	class UMetaSoundPatch*                             LoadedMetaSoundPatch;                                       // 0x0690   (0x0008)  
	unsigned char                                      UnknownData04_6[0x10];                                      // 0x0698   (0x0010)  MISSED


	/// Functions
	// Function /Script/FabricRuntime.FabricMetaSoundPatchWrapper.SetStringInput
	// void SetStringInput(FName& MetaSoundInputName, FString Value);                                                        // [0xabbae38] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundPatchWrapper.SetRunsOnServer
	// void SetRunsOnServer(bool bAllowRunOnServer);                                                                         // [0xabbadb8] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundPatchWrapper.SetPositionalProxyActor
	// void SetPositionalProxyActor(class AActor* InLocationProxyActor);                                                     // [0xabbacb8] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundPatchWrapper.SetNodeEnabled
	// void SetNodeEnabled(bool bEnabled);                                                                                   // [0xabbabe4] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundPatchWrapper.SetIntInput
	// void SetIntInput(FName& MetaSoundInputName, int32_t Value);                                                           // [0xabbaa14] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundPatchWrapper.SetFloatInput
	// void SetFloatInput(FName& MetaSoundInputName, float Value);                                                           // [0xabba908] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundPatchWrapper.SetEnumInput
	// void SetEnumInput(FName& MetaSoundInputName, char Value);                                                             // [0xabba7f8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundPatchWrapper.SetBoolInput
	// void SetBoolInput(FName& MetaSoundInputName, bool bValue);                                                            // [0xabba6e8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundPatchWrapper.RemoveFromCurrentGraph
	// void RemoveFromCurrentGraph();                                                                                        // [0xabba538] Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundPatchWrapper.OnMetaSoundOutputValueChanged
	// void OnMetaSoundOutputValueChanged(FName OutputName, FMetaSoundOutput& MetaSoundOutput);                              // [0xabba27c] Native|Protected|HasOutParms 
	// Function /Script/FabricRuntime.FabricMetaSoundPatchWrapper.OnMetaSoundOutputChanged
	// void OnMetaSoundOutputChanged(FName OutputName, FMetaSoundOutput& Output);                                            // [0xabba198] Final|Native|Private|HasOutParms 
	// Function /Script/FabricRuntime.FabricMetaSoundPatchWrapper.OnMetasoundManagerEndPlay
	// void OnMetasoundManagerEndPlay();                                                                                     // [0xabba364] Final|Native|Protected 
	// Function /Script/FabricRuntime.FabricMetaSoundPatchWrapper.OnConnectedModulatorEnable
	// void OnConnectedModulatorEnable(class UFabricMetaSoundPatchWrapper* EnabledPatchWrapper);                             // [0xabb9d04] Final|Native|Private 
	// Function /Script/FabricRuntime.FabricMetaSoundPatchWrapper.OnAddedToManagerGraph
	// void OnAddedToManagerGraph(class UFabricMetaSoundManagerComponent* Manager);                                          // [0xabb9c80] Native|Event|Protected|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricMetaSoundPatchWrapper.NeedsParameterPackUpdate
	// void NeedsParameterPackUpdate();                                                                                      // [0xabb9c6c] Final|Native|Protected|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundPatchWrapper.NeedsOutputWatcherUpdate
	// void NeedsOutputWatcherUpdate();                                                                                      // [0xabb9c58] Final|Native|Protected|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundPatchWrapper.NeedsGeneratorHandleUpdate
	// void NeedsGeneratorHandleUpdate();                                                                                    // [0xabb9c44] Final|Native|Protected|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundPatchWrapper.GetRunsOnServer
	// bool GetRunsOnServer();                                                                                               // [0xabb9bc0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricMetaSoundPatchWrapper.GetNodeEnabled
	// bool GetNodeEnabled();                                                                                                // [0xabb9ba8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricMetaSoundPatchWrapper.GetMusicClock
	// class UMusicClockComponent* GetMusicClock();                                                                          // [0xabb9b88] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricMetaSoundPatchWrapper.GetMetaSoundInputNames
	// TSet<FName> GetMetaSoundInputNames();                                                                                 // [0xabb9ac0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricMetaSoundPatchWrapper.AddToManagerGraph
	// void AddToManagerGraph(class UFabricMetaSoundManagerComponent* Manager);                                              // [0x66639e8] Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundPatchWrapper.AddToGraphOnFirstConnect
	// bool AddToGraphOnFirstConnect();                                                                                      // [0x8e91164] Native|Event|Protected|BlueprintEvent 
};

/// Class /Script/FabricRuntime.FabricMetaSoundDrumPlayerPatchWrapper
/// Size: 0x00E0 (0x0006A8 - 0x000788)
class UFabricMetaSoundDrumPlayerPatchWrapper : public UFabricMetaSoundPatchWrapper
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x06A8   (0x0008)  MISSED
	FName                                              PitchSampleInputName;                                       // 0x06B0   (0x0004)  
	FName                                              SlotKitInputName;                                           // 0x06B4   (0x0004)  
	SDK_UNDEFINED(16,13682) /* TArray<FString> */      __um(PitchSampleParams);                                    // 0x06B8   (0x0010)  
	SDK_UNDEFINED(16,13683) /* TArray<FString> */      __um(SlotLinkParams);                                       // 0x06C8   (0x0010)  
	SDK_UNDEFINED(16,13684) /* TArray<FString> */      __um(SlotUnlinkedKitParams);                                // 0x06D8   (0x0010)  
	SDK_UNDEFINED(16,13685) /* FString */              __um(CurrentKitParam);                                      // 0x06E8   (0x0010)  
	int32_t                                            NumSamplesPerKit;                                           // 0x06F8   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x06FC   (0x0004)  MISSED
	TArray<FFabricMetaSoundPatchWrapperBinding>        DrumAmplitudes;                                             // 0x0700   (0x0010)  
	SDK_UNDEFINED(16,13686) /* FMulticastInlineDelegate */ __um(OnFabricMetaSoundDrumPlayerPatchDrumAmplitudesUpdate); // 0x0710   (0x0010)  
	SDK_UNDEFINED(16,13687) /* FMulticastInlineDelegate */ __um(OnFabricMetaSoundDrumPlayerSampleBanksLoaded);     // 0x0720   (0x0010)  
	unsigned char                                      UnknownData02_5[0x48];                                      // 0x0730   (0x0048)  MISSED
	TArray<class UObject*>                             CurrentKitSamples;                                          // 0x0778   (0x0010)  


	/// Functions
	// Function /Script/FabricRuntime.FabricMetaSoundDrumPlayerPatchWrapper.SlotUnlinkedKitParamChanged
	// void SlotUnlinkedKitParamChanged(int32_t PitchSampleIndex, int32_t Value);                                            // [0xabb83c0] Final|Native|Private 
	// Function /Script/FabricRuntime.FabricMetaSoundDrumPlayerPatchWrapper.SlotLinkedParamChanged
	// void SlotLinkedParamChanged(int32_t PitchSampleIndex, bool Value);                                                    // [0xabb82fc] Final|Native|Private 
	// Function /Script/FabricRuntime.FabricMetaSoundDrumPlayerPatchWrapper.PitchSampleParamChanged
	// void PitchSampleParamChanged(int32_t PitchSampleIndex, int32_t Value);                                                // [0xabb7414] Final|Native|Private 
	// Function /Script/FabricRuntime.FabricMetaSoundDrumPlayerPatchWrapper.LoadDrumPlayerSampleBanks
	// void LoadDrumPlayerSampleBanks(TArray<TWeakObjectPtr<UFabricMetasoundDrumPlayerSampleBankAsset*>>& SampleBankArray, TSet<int32_t>& KitNumbersToLoad); // [0xabb71b8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundDrumPlayerPatchWrapper.KitIndexChanged
	// void KitIndexChanged(FName& Param, int32_t Value);                                                                    // [0xabb70ac] Final|Native|Private|HasOutParms 
};

/// Struct /Script/FabricRuntime.FabricMetaSoundPatchWrapperWetDryOutputBinding
/// Size: 0x0090 (0x000000 - 0x000090)
struct FFabricMetaSoundPatchWrapperWetDryOutputBinding
{ 
	FFabricMetaSoundPatchWrapperBinding                WetOutputSignalBinding;                                     // 0x0000   (0x0048)  
	FFabricMetaSoundPatchWrapperBinding                DryOutputSignalBinding;                                     // 0x0048   (0x0048)  
};

/// Class /Script/FabricRuntime.FabricMetaSoundWetDryPatchWrapper
/// Size: 0x00A0 (0x0006A8 - 0x000748)
class UFabricMetaSoundWetDryPatchWrapper : public UFabricMetaSoundPatchWrapper
{ 
public:
	FFabricMetaSoundPatchWrapperWetDryOutputBinding    WetDryOutputBinding;                                        // 0x06A8   (0x0090)  
	SDK_UNDEFINED(16,13688) /* FMulticastInlineDelegate */ __um(OnWetDryOutputSignalUpdate);                       // 0x0738   (0x0010)  
};

/// Class /Script/FabricRuntime.FabricMetaSoundEchoPatchWrapper
/// Size: 0x0018 (0x000748 - 0x000760)
class UFabricMetaSoundEchoPatchWrapper : public UFabricMetaSoundWetDryPatchWrapper
{ 
public:
	bool                                               bAllowWetSignalWaveformTexture;                             // 0x0748   (0x0001)  
	bool                                               bAllowDrySignalWaveformTexture;                             // 0x0749   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x074A   (0x0006)  MISSED
	class UFabricWaveformTexture*                      WetSignalWaveformTexture;                                   // 0x0750   (0x0008)  
	class UFabricWaveformTexture*                      DrySignalWaveformTexture;                                   // 0x0758   (0x0008)  
};

/// Class /Script/FabricRuntime.FabricMetaSoundInstrumentPlayerPatchWrapper
/// Size: 0x00E0 (0x0006A8 - 0x000788)
class UFabricMetaSoundInstrumentPlayerPatchWrapper : public UFabricMetaSoundPatchWrapper
{ 
public:
	SDK_UNDEFINED(16,13689) /* FMulticastInlineDelegate */ __um(OnFFTResultsUpdated);                              // 0x06A8   (0x0010)  
	FFabricMetaSoundPatchWrapperBinding                FFTAnalysisOutputBinding;                                   // 0x06B8   (0x0048)  
	int32_t                                            FFTCPDStartIndex;                                           // 0x0700   (0x0004)  
	int32_t                                            FFTLength;                                                  // 0x0704   (0x0004)  
	unsigned char                                      UnknownData00_5[0x78];                                      // 0x0708   (0x0078)  MISSED
	SDK_UNDEFINED(8,13690) /* TWeakObjectPtr<UFusionPatch*> */ __um(CurrentFusionPatch);                           // 0x0780   (0x0008)  


	/// Functions
	// Function /Script/FabricRuntime.FabricMetaSoundInstrumentPlayerPatchWrapper.SetFusionPatch
	// void SetFusionPatch(class UFusionPatch* FusionPatch);                                                                 // [0xabb7d24] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundInstrumentPlayerPatchWrapper.DriveFFTDataOnPrimitive
	// void DriveFFTDataOnPrimitive(class UPrimitiveComponent* Primitive);                                                   // [0xabb6b0c] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/FabricRuntime.FabricMetaSoundModulatorPatchWrapper
/// Size: 0x0030 (0x0006A8 - 0x0006D8)
class UFabricMetaSoundModulatorPatchWrapper : public UFabricMetaSoundPatchWrapper
{ 
public:
	FName                                              IntModulationOutputName;                                    // 0x06A8   (0x0004)  
	FName                                              FloatModulationOutputName;                                  // 0x06AC   (0x0004)  
	FName                                              BoolModulationOutputName;                                   // 0x06B0   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x06B4   (0x0004)  MISSED
	SDK_UNDEFINED(16,13691) /* FMulticastInlineDelegate */ __um(OnPatchWrapperVisibilityChanged);                  // 0x06B8   (0x0010)  
	class UPlaylistUserOptionBase*                     CurrentUserOption;                                          // 0x06C8   (0x0008)  
	class UFabricMetaSoundUserOption*                  MetaSoundUserOption;                                        // 0x06D0   (0x0008)  


	/// Functions
	// Function /Script/FabricRuntime.FabricMetaSoundModulatorPatchWrapper.SetUserOption
	// void SetUserOption(class UPlaylistUserOptionBase* UserOption);                                                        // [0xabbb03c] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundModulatorPatchWrapper.ConnectToInput
	// bool ConnectToInput(FFabricMetaSoundNodeInfo& Node, FName InputName, FName InputType);                                // [0xabb9824] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/FabricRuntime.FabricMetaSoundLFOPatchWrapper
/// Size: 0x0018 (0x0006D8 - 0x0006F0)
class UFabricMetaSoundLFOPatchWrapper : public UFabricMetaSoundModulatorPatchWrapper
{ 
public:
	class UFabricFloatProviderWave*                    LFOFloatProvider;                                           // 0x06D8   (0x0008)  
	FName                                              FreePhaseStartName;                                         // 0x06E0   (0x0004)  
	FName                                              RandomSeedInputName;                                        // 0x06E4   (0x0004)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x06E8   (0x0008)  MISSED


	/// Functions
	// Function /Script/FabricRuntime.FabricMetaSoundLFOPatchWrapper.UpdateRandomSeed
	// void UpdateRandomSeed();                                                                                              // [0xabb89f8] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/FabricRuntime.FabricMetaSoundUtilityParams
/// Size: 0x0008 (0x000000 - 0x000008)
struct FFabricMetaSoundUtilityParams
{ 
	FName                                              SwitcherEnabledParam;                                       // 0x0000   (0x0004)  
	FName                                              SelectEnabledParam;                                         // 0x0004   (0x0004)  
};

/// Struct /Script/FabricRuntime.FabricMetaSoundUtilityPatches
/// Size: 0x0088 (0x000000 - 0x000088)
struct FFabricMetaSoundUtilityPatches
{ 
	SDK_UNDEFINED(32,13692) /* TWeakObjectPtr<UMetaSoundPatch*> */ __um(CombinerNode);                             // 0x0000   (0x0020)  
	SDK_UNDEFINED(32,13693) /* TWeakObjectPtr<UMetaSoundPatch*> */ __um(SwitcherNode);                             // 0x0020   (0x0020)  
	SDK_UNDEFINED(32,13694) /* TWeakObjectPtr<UMetaSoundPatch*> */ __um(SelectNode);                               // 0x0040   (0x0020)  
	SDK_UNDEFINED(32,13695) /* TWeakObjectPtr<UMetaSoundPatch*> */ __um(AnalyzerNode);                             // 0x0060   (0x0020)  
	FFabricMetaSoundUtilityParams                      UtilityNodeParams;                                          // 0x0080   (0x0008)  
};

/// Struct /Script/FabricRuntime.FabricSignificanceBasedUpdateBucketRuntimeGroup
/// Size: 0x0018 (0x000000 - 0x000018)
struct FFabricSignificanceBasedUpdateBucketRuntimeGroup
{ 
	SDK_UNDEFINED(16,13696) /* TArray<TWeakObjectPtr<UObject*>> */ __um(ObjectsInGroup);                           // 0x0008   (0x0010)  
};

/// Struct /Script/FabricRuntime.FabricSignificanceBasedUpdateBucketRuntime
/// Size: 0x0028 (0x000000 - 0x000028)
struct FFabricSignificanceBasedUpdateBucketRuntime
{ 
	float                                              ActualMinSignificance;                                      // 0x0000   (0x0004)  
	float                                              ActualMaxSignificance;                                      // 0x0004   (0x0004)  
	int32_t                                            ActualMaxObjectsInBucket;                                   // 0x0008   (0x0004)  
	int32_t                                            ActualFramesPerUpdate;                                      // 0x000C   (0x0004)  
	int32_t                                            TotalObjectsInBucketCount;                                  // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0014   (0x0004)  MISSED
	TArray<FFabricSignificanceBasedUpdateBucketRuntimeGroup> UpdateGroups;                                         // 0x0018   (0x0010)  
};

/// Class /Script/FabricRuntime.FabricMetaSoundManagerComponent
/// Size: 0x0550 (0x0000A0 - 0x0005F0)
class UFabricMetaSoundManagerComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x00A0   (0x0008)  MISSED
	SDK_UNDEFINED(32,13697) /* TWeakObjectPtr<UMetaSoundPatch*> */ __um(HarmonixMusicProviderPatch);               // 0x00A8   (0x0020)  
	FFabricMetaSoundUtilityPatches                     MidiStreamUtilityPatches;                                   // 0x00C8   (0x0088)  
	FFabricMetaSoundUtilityPatches                     AudioUtilityPatches;                                        // 0x0150   (0x0088)  
	FName                                              MusicProviderVolumeName;                                    // 0x01D8   (0x0004)  
	FName                                              MusicProviderPlayTriggerName;                               // 0x01DC   (0x0004)  
	FName                                              MusicProviderRestartTriggerName;                            // 0x01E0   (0x0004)  
	FName                                              MusicProviderSeekTriggerName;                               // 0x01E4   (0x0004)  
	FName                                              MusicProviderPauseTriggerName;                              // 0x01E8   (0x0004)  
	FName                                              MusicProviderContinueTriggerName;                           // 0x01EC   (0x0004)  
	FName                                              MusicProviderStopTriggerName;                               // 0x01F0   (0x0004)  
	FName                                              MusicProviderTempoName;                                     // 0x01F4   (0x0004)  
	FName                                              MusicProviderSpeedName;                                     // 0x01F8   (0x0004)  
	FName                                              MusicProviderRootNoteName;                                  // 0x01FC   (0x0004)  
	FName                                              MusicProviderScaleName;                                     // 0x0200   (0x0004)  
	FName                                              MusicProviderSeekTargetName;                                // 0x0204   (0x0004)  
	FName                                              MusicProviderTimeSigNumName;                                // 0x0208   (0x0004)  
	FName                                              MusicProviderTimeSigDenomName;                              // 0x020C   (0x0004)  
	float                                              CrossfadeSeconds;                                           // 0x0210   (0x0004)  
	float                                              RebuildTimeOutSeconds;                                      // 0x0214   (0x0004)  
	float                                              BlockRateOverride;                                          // 0x0218   (0x0004)  
	FName                                              QualityOverride;                                            // 0x021C   (0x0004)  
	unsigned char                                      UnknownData01_5[0x18];                                      // 0x0220   (0x0018)  MISSED
	SDK_UNDEFINED(16,13698) /* FMulticastInlineDelegate */ __um(OnMetasoundGeneratorCrossfadeStarted);             // 0x0238   (0x0010)  
	unsigned char                                      UnknownData02_5[0x78];                                      // 0x0248   (0x0078)  MISSED
	SDK_UNDEFINED(16,13699) /* FMulticastInlineDelegate */ __um(OnMusicEventPriorityChanged);                      // 0x02C0   (0x0010)  
	unsigned char                                      UnknownData03_5[0x10];                                      // 0x02D0   (0x0010)  MISSED
	TArray<FFabricSignificanceBasedUpdateBucketRuntime> SignificanceRuntimeBuckets;                                // 0x02E0   (0x0010)  
	class UFabricSignificanceAsset*                    SignificanceBasedUpdate;                                    // 0x02F0   (0x0008)  
	float                                              InitialCooldownTimeInSeconds;                               // 0x02F8   (0x0004)  
	unsigned char                                      UnknownData04_5[0x4];                                       // 0x02FC   (0x0004)  MISSED
	class UMetaSoundSourceBuilder*                     SourceBuilder;                                              // 0x0300   (0x0008)  
	class UMusicClockComponent*                        MusicClock;                                                 // 0x0308   (0x0008)  
	TArray<class UAudioComponent*>                     PlaybackAudioComponents;                                    // 0x0310   (0x0010)  
	TArray<class UMetasoundOfflinePlayerComponent*>    ServerPlaybackComponents;                                   // 0x0320   (0x0010)  
	unsigned char                                      UnknownData05_5[0x50];                                      // 0x0330   (0x0050)  MISSED
	SDK_UNDEFINED(8,13700) /* TWeakObjectPtr<ABuildingActor*> */ __um(StartMetasoundLockDevice);                   // 0x0380   (0x0008)  
	FFabricMetaSoundNodeInfo                           HarmonixMusicProviderNode;                                  // 0x0388   (0x00F0)  
	FMetaSoundBuilderNodeOutputHandle                  OnPlayNodeOutput;                                           // 0x0478   (0x0020)  
	FMetaSoundBuilderNodeInputHandle                   OnFinishedNodeInput;                                        // 0x0498   (0x0020)  
	TArray<FMetaSoundBuilderNodeInputHandle>           AudioOutNodeInputs;                                         // 0x04B8   (0x0010)  
	unsigned char                                      UnknownData06_5[0x38];                                      // 0x04C8   (0x0038)  MISSED
	SDK_UNDEFINED(80,13701) /* TMap<UMetaSoundPatch*, FFabricMetaSoundNodePool> */ __um(FreeMetaSoundNodes);       // 0x0500   (0x0050)  
	SDK_UNDEFINED(80,13702) /* TMap<FName, FFabricLoadedUtilityPatches> */ __um(UtilityNodeTypesToPatches);        // 0x0550   (0x0050)  
	unsigned char                                      UnknownData07_5[0x10];                                      // 0x05A0   (0x0010)  MISSED
	bool                                               bGraphDirty;                                                // 0x05B0   (0x0001)  
	bool                                               bIsAudioless;                                               // 0x05B1   (0x0001)  
	bool                                               bHasCompletedInitialCooldown;                               // 0x05B2   (0x0001)  
	EFabricMetasoundPlayState                          CurrentPlayState;                                           // 0x05B3   (0x0001)  
	EFabricMetasoundPlayState                          PlayStateAfterRebuild;                                      // 0x05B4   (0x0001)  
	EJamFabricSyncType                                 JamSyncType;                                                // 0x05B5   (0x0001)  
	EFabricMetasoundMusicEventPriority                 MusicEventPriority;                                         // 0x05B6   (0x0001)  
	unsigned char                                      UnknownData08_5[0x1];                                       // 0x05B7   (0x0001)  MISSED
	FName                                              ClientCurrentAudibleMusicEventGroup;                        // 0x05B8   (0x0004)  
	FGameplayTag                                       AboveEmotesTag;                                             // 0x05BC   (0x0004)  
	FGameplayTag                                       BelowEmotesTag;                                             // 0x05C0   (0x0004)  
	float                                              ReplicatedReceivedSignalBufferDuration;                     // 0x05C4   (0x0004)  
	unsigned char                                      UnknownData09_6[0x28];                                      // 0x05C8   (0x0028)  MISSED


	/// Functions
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.UnregisterAsAudible
	// void UnregisterAsAudible(class AActor* Device);                                                                       // [0xabb8510] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.StopMetasound
	// bool StopMetasound(class ABuildingActor* InStartMetasoundLockDevice);                                                 // [0xabb8480] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.ShouldSeekToStartOnGameReset
	// bool ShouldSeekToStartOnGameReset();                                                                                  // [0xabb82e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.SetTimeSignature
	// void SetTimeSignature(int32_t Numerator, int32_t Denominator);                                                        // [0xabb8220] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.SetTempo
	// void SetTempo(float Tempo);                                                                                           // [0xabb81a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.SetSpeed
	// void SetSpeed(float Speed);                                                                                           // [0xabb8120] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.SetMusicKey
	// void SetMusicKey(EMusicKey Key, EMusicKeyMode Mode);                                                                  // [0xabb7f84] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.SetMusicEventPriority
	// void SetMusicEventPriority(EFabricMetasoundMusicEventPriority InMusicEventPriority);                                  // [0xabb7ee8] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.SetMusicClock
	// void SetMusicClock(class UMusicClockComponent* MusicClockComponent);                                                  // [0xabb7e68] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.SetCurrentJamSyncType
	// void SetCurrentJamSyncType(EJamFabricSyncType& InJamSyncType);                                                        // [0xabb7c98] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.SetAudioComponents
	// void SetAudioComponents(TArray<UAudioComponent*> AudioComponents);                                                    // [0xabb7bec] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.SeekToTimestamp
	// void SeekToTimestamp(FMusicTimestamp& Timestamp);                                                                     // [0xabb7b58] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.SeekToMs
	// void SeekToMs(float Ms);                                                                                              // [0xabb7ad8] Final|Native|Public  
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.RegisterAsAudible
	// void RegisterAsAudible(class AActor* Device, FName& AudibleEventGroup);                                               // [0xabb7564] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.PlayMetasound
	// bool PlayMetasound(class ABuildingActor* InStartMetasoundLockDevice);                                                 // [0xabb74d4] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.PauseMetasound
	// bool PauseMetasound();                                                                                                // [0xabb73f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.OnGeneratorJustStarted
	// void OnGeneratorJustStarted(int32_t ComponentIndex);                                                                  // [0xabb7370] Final|Native|Private 
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.NotifyGraphChanged
	// void NotifyGraphChanged();                                                                                            // [0xabb7358] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.InvalidateMetasoundGeneratorHandle
	// void InvalidateMetasoundGeneratorHandle();                                                                            // [0xabb7098] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.GetMusicEventTag
	// FGameplayTag GetMusicEventTag(EFabricMetasoundMusicEventPriority InMusicEventPriority);                               // [0xabb7004] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.GetMusicEventPriority
	// EFabricMetasoundMusicEventPriority GetMusicEventPriority();                                                           // [0x6661bf8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.GetMusicClock
	// class UMusicClockComponent* GetMusicClock();                                                                          // [0x3ee2238] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.GetMetasoundOutputNodeName
	// FName GetMetasoundOutputNodeName(FName NodeName, FName OutputName);                                                   // [0xabb6f4c] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.GetMetaSoundNodeForWrapper
	// FFabricMetaSoundNodeInfo GetMetaSoundNodeForWrapper(class UFabricMetaSoundPatchWrapper* PatchWrapper);                // [0xabb6dd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.GetMetasoundInputNodeName
	// FName GetMetasoundInputNodeName(FName NodeName, FName InputName);                                                     // [0xabb6e94] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.GetCurrentPlaystate
	// EFabricMetasoundPlayState GetCurrentPlaystate();                                                                      // [0xabb6db8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.GetCurrentPlaybackAudioComponent
	// class UAudioComponent* GetCurrentPlaybackAudioComponent();                                                            // [0xabb6d98] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.GetCurrentMusicEventTag
	// FGameplayTag GetCurrentMusicEventTag();                                                                               // [0xabb6d70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.GetCurrentJamSyncType
	// EJamFabricSyncType GetCurrentJamSyncType();                                                                           // [0x6661c10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.GetCurrentClientAudibleMusicEventGroup
	// FName GetCurrentClientAudibleMusicEventGroup();                                                                       // [0x3ebac10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.GetBuilder
	// class UMetaSoundSourceBuilder* GetBuilder();                                                                          // [0x6473cc8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.FreeMetaSoundNode
	// void FreeMetaSoundNode(FFabricMetaSoundNodeInfo& Node);                                                               // [0xabb6c10] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.AreAllPatchesReady
	// bool AreAllPatchesReady();                                                                                            // [0xabb6a68] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.AddOutputNodeForOutputVertex
	// void AddOutputNodeForOutputVertex(FMetaSoundBuilderNodeOutputHandle& OutputVertex, FName& NodeName, FName& OutOutputName, EMetaSoundBuilderResult& Result); // [0xabb6820] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.AddInputNodeForNodeByNameBP
	// void AddInputNodeForNodeByNameBP(FFabricMetaSoundNodeInfo& InOutNode, EFabricUserOptionType UserOptionType, FName& InputName); // [0xabb65e4] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/FabricRuntime.FabricNoteReceivedPatchWrapper
/// Size: 0x0040 (0x0006A8 - 0x0006E8)
class UFabricNoteReceivedPatchWrapper : public UFabricMetaSoundPatchWrapper
{ 
public:
	FName                                              NoteOutputName;                                             // 0x06A8   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x06AC   (0x0004)  MISSED
	SDK_UNDEFINED(16,13703) /* TArray<FString> */      __um(TriggerNoteParams);                                    // 0x06B0   (0x0010)  
	SDK_UNDEFINED(16,13704) /* FMulticastInlineDelegate */ __um(OnMatchingMidiEventPassed);                        // 0x06C0   (0x0010)  
	unsigned char                                      UnknownData01_6[0x18];                                      // 0x06D0   (0x0018)  MISSED


	/// Functions
	// Function /Script/FabricRuntime.FabricNoteReceivedPatchWrapper.OnTriggerNoteChanged
	// void OnTriggerNoteChanged(int32_t NoteIndex, bool bTriggerActive);                                                    // [0xabba474] Final|Native|Protected 
	// Function /Script/FabricRuntime.FabricNoteReceivedPatchWrapper.OnMetaSoundMidiEventPassed
	// void OnMetaSoundMidiEventPassed(FName OutputName, FMetaSoundOutput& Output);                                          // [0xabba07c] Final|Native|Protected|HasOutParms 
};

/// Class /Script/FabricRuntime.FabricNoteTriggerPatchWrapper
/// Size: 0x0028 (0x0006E8 - 0x000710)
class UFabricNoteTriggerPatchWrapper : public UFabricNoteReceivedPatchWrapper
{ 
public:
	SDK_UNDEFINED(16,13705) /* FString */              __um(OctaveParam);                                          // 0x06E8   (0x0010)  
	SDK_UNDEFINED(16,13706) /* FMulticastInlineDelegate */ __um(OnAnyMidiEventPassed);                             // 0x06F8   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0708   (0x0008)  MISSED


	/// Functions
	// Function /Script/FabricRuntime.FabricNoteTriggerPatchWrapper.OnOctaveChanged
	// void OnOctaveChanged(FName& ParamName, int32_t InOctave);                                                             // [0xabba378] Final|Native|Protected|HasOutParms 
};

/// Class /Script/FabricRuntime.FabricMetaSoundTreeNode
/// Size: 0x0020 (0x000028 - 0x000048)
class UFabricMetaSoundTreeNode : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	EFabricMetaSoundPinDirection                       PinDirection;                                               // 0x0028   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0029   (0x0007)  MISSED
	class UFabricMetaSoundPatchWrapper*                AssociatedPatchWrapper;                                     // 0x0030   (0x0008)  
	TArray<class UFabricMetaSoundTreeNode*>            Children;                                                   // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/FabricRuntime.FabricMetaSoundTreeNode.Reset
	// void Reset();                                                                                                         // [0xabba550] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundTreeNode.GetValidChildren
	// TArray<UFabricMetaSoundTreeNode*> GetValidChildren();                                                                 // [0xabb9bd8] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundTreeNode.ConnectToChildNodes
	// void ConnectToChildNodes();                                                                                           // [0xabb9810] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/FabricRuntime.FabricMetaSoundSequencerPatchWrapper
/// Size: 0x0008 (0x0006A8 - 0x0006B0)
class UFabricMetaSoundSequencerPatchWrapper : public UFabricMetaSoundPatchWrapper
{ 
public:
	class UMidiStepSequence*                           CurrentStepSequence;                                        // 0x06A8   (0x0008)  


	/// Functions
	// Function /Script/FabricRuntime.FabricMetaSoundSequencerPatchWrapper.SetMidiStepSequence
	// void SetMidiStepSequence(class UMidiStepSequence* StepSequence);                                                      // [0xabbab20] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/FabricRuntime.FabricMetaSoundSpeakerPatchWrapperEqBandsBinding
/// Size: 0x0008 (0x000048 - 0x000050)
struct FFabricMetaSoundSpeakerPatchWrapperEqBandsBinding : FFabricMetaSoundPatchWrapperBinding
{ 
	int32_t                                            PrimitiveDataIndex;                                         // 0x0048   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x004C   (0x0004)  MISSED
};

/// Class /Script/FabricRuntime.FabricMetaSoundSpeakerPatchWrapper
/// Size: 0x0030 (0x0006A8 - 0x0006D8)
class UFabricMetaSoundSpeakerPatchWrapper : public UFabricMetaSoundPatchWrapper
{ 
public:
	FName                                              SpeakerEnabledMetasoundParam;                               // 0x06A8   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x06AC   (0x0004)  MISSED
	TArray<FFabricMetaSoundSpeakerPatchWrapperEqBandsBinding> EqBands;                                             // 0x06B0   (0x0010)  
	SDK_UNDEFINED(16,13707) /* FMulticastInlineDelegate */ __um(OnFabricMetaSoundSpeakerPatchEqBandUpdate);        // 0x06C0   (0x0010)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x06D0   (0x0008)  MISSED


	/// Functions
	// Function /Script/FabricRuntime.FabricMetaSoundSpeakerPatchWrapper.SetAudioBusFromSourceBus
	// void SetAudioBusFromSourceBus(class USoundSourceBus* Bus);                                                            // [0xabba564] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/FabricRuntime.FabricMetaSoundSplitterPatchWrapper
/// Size: 0x0058 (0x0006A8 - 0x000700)
class UFabricMetaSoundSplitterPatchWrapper : public UFabricMetaSoundPatchWrapper
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x06A8   (0x0008)  MISSED
	SDK_UNDEFINED(80,13708) /* TMap<FName, FFabricMetaSoundNodeInfo> */ __um(SplitterNodes);                       // 0x06B0   (0x0050)  
};

/// Class /Script/FabricRuntime.FabricMetaSoundTickSubsystem
/// Size: 0x0190 (0x0000D0 - 0x000260)
class UFabricMetaSoundTickSubsystem : public UFortManagedTickSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x190];                                     // 0x00D0   (0x0190)  MISSED
};

/// Class /Script/FabricRuntime.FabricMIDIPlayerPatchWrapper
/// Size: 0x0018 (0x0006E8 - 0x000700)
class UFabricMIDIPlayerPatchWrapper : public UFabricNoteReceivedPatchWrapper
{ 
public:
	FName                                              MidiTrackIndexUserOptionName;                               // 0x06E8   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x06EC   (0x0004)  MISSED
	class UMidiFile*                                   CurrentMidiFile;                                            // 0x06F0   (0x0008)  
	int32_t                                            CurrentMidiTrackIndex;                                      // 0x06F8   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x06FC   (0x0004)  MISSED


	/// Functions
	// Function /Script/FabricRuntime.FabricMIDIPlayerPatchWrapper.SetMidiFile
	// void SetMidiFile(class UMidiFile* MidiFile);                                                                          // [0xabbe298] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/FabricRuntime.FabricModulator
/// Size: 0x0000 (0x000028 - 0x000028)
class UFabricModulator : public UInterface
{ 
public:
};

/// Class /Script/FabricRuntime.FabricModulatorSource
/// Size: 0x0000 (0x000028 - 0x000028)
class UFabricModulatorSource : public UInterface
{ 
public:


	/// Functions
	// Function /Script/FabricRuntime.FabricModulatorSource.GetUserOption
	// class UPlaylistUserOptionBase* GetUserOption(FString Property);                                                       // [0xabbd0d4] Native|Event|Public|BlueprintEvent|Const 
	// Function /Script/FabricRuntime.FabricModulatorSource.GetModulators
	// void GetModulators(class UFabricModulatable* Modulatable);                                                            // [0x81cdd38] Native|Event|Public|BlueprintEvent 
};

/// Class /Script/FabricRuntime.FabricModulatorDevice
/// Size: 0x0000 (0x000028 - 0x000028)
class UFabricModulatorDevice : public UInterface
{ 
public:


	/// Functions
	// Function /Script/FabricRuntime.FabricModulatorDevice.SetUserOption
	// void SetUserOption(EFabricUserOptionType UserOptionType, class UPlaylistUserOptionBase* UserOption, class UObject* ModulatorObject); // [0xabbe9e8] Native|Event|Public|BlueprintEvent 
};

/// Struct /Script/FabricRuntime.FabricProgressionPreset
/// Size: 0x0020 (0x000008 - 0x000028)
struct FFabricProgressionPreset : FTableRowBase
{ 
	SDK_UNDEFINED(24,13709) /* FText */                __um(ProgressionName);                                      // 0x0008   (0x0018)  
	EHarmonicProgression                               Interval0;                                                  // 0x0020   (0x0001)  
	EHarmonicProgression                               Interval1;                                                  // 0x0021   (0x0001)  
	EHarmonicProgression                               Interval2;                                                  // 0x0022   (0x0001)  
	EHarmonicProgression                               Interval3;                                                  // 0x0023   (0x0001)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Class /Script/FabricRuntime.FabricProgressorManager
/// Size: 0x0048 (0x0000A0 - 0x0000E8)
class UFabricProgressorManager : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x00A0   (0x0008)  MISSED
	SDK_UNDEFINED(16,13710) /* FMulticastInlineDelegate */ __um(OnGlobalProgressionChanged);                       // 0x00A8   (0x0010)  
	bool                                               bHasActiveGlobalProgression;                                // 0x00B8   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x00B9   (0x0003)  MISSED
	int32_t                                            GlobalPresetNumber;                                         // 0x00BC   (0x0004)  
	FFabricProgressionPreset                           GlobalProgression;                                          // 0x00C0   (0x0028)  


	/// Functions
	// Function /Script/FabricRuntime.FabricProgressorManager.SetGlobalProgression
	// void SetGlobalProgression(FFabricProgressionPreset& InProgression, int32_t InPresetNumber);                           // [0xabbe040] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricProgressorManager.OnProgressionChanged__DelegateSignature
	// void OnProgressionChanged__DelegateSignature();                                                                       // [0x18a39e4] MulticastDelegate|Public|Delegate 
	// Function /Script/FabricRuntime.FabricProgressorManager.IsProgressionGlobal
	// bool IsProgressionGlobal(FFabricProgressionPreset& InProgression);                                                    // [0xabbd58c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/FabricRuntime.FabricProgressorManager.HasActiveGlobalProgression
	// bool HasActiveGlobalProgression();                                                                                    // [0xabbd240] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricProgressorManager.GetGlobalProgression
	// FFabricProgressionPreset GetGlobalProgression();                                                                      // [0xabbc1dc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricProgressorManager.GetGlobalPresetNumber
	// int32_t GetGlobalPresetNumber();                                                                                      // [0xabbc1c4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/FabricRuntime.FabricSteppedPreviewFXComponent
/// Size: 0x0060 (0x000960 - 0x0009C0)
class UFabricSteppedPreviewFXComponent : public UInstancedStaticMeshComponent
{ 
public:
	int32_t                                            NumberOfSteps;                                              // 0x0958   (0x0004)  
	bool                                               bManuallySpaceMeshInstances;                                // 0x095C   (0x0001)  
	bool                                               bAlignToTransformCenter;                                    // 0x095D   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x095E   (0x0002)  MISSED
	float                                              CenterAlignmentBounds;                                      // 0x0960   (0x0004)  
	float                                              DistanceBetweenInstances;                                   // 0x0964   (0x0004)  
	float                                              DistanceBetweenTripletIntances;                             // 0x0968   (0x0004)  
	float                                              DistanceBetweenInstanceSets;                                // 0x096C   (0x0004)  
	float                                              DistanceBetweenTripletInstanceSets;                         // 0x0970   (0x0004)  
	EFabricNoteStyle                                   NoteStyle;                                                  // 0x0974   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0975   (0x0003)  MISSED
	int32_t                                            CPDDeviceEnabled;                                           // 0x0978   (0x0004)  
	int32_t                                            CPDNumSteps;                                                // 0x097C   (0x0004)  
	int32_t                                            PICDNoteOn;                                                 // 0x0980   (0x0004)  
	int32_t                                            PICDNoteLength;                                             // 0x0984   (0x0004)  
	int32_t                                            PICDSpanLength;                                             // 0x0988   (0x0004)  
	int32_t                                            PICDNoteTime;                                               // 0x098C   (0x0004)  
	int32_t                                            PICDGenericFloatIndex;                                      // 0x0990   (0x0004)  
	float                                              LengthStepBeats;                                            // 0x0994   (0x0004)  
	float                                              StepLengthQuarterNotes;                                     // 0x0998   (0x0004)  
	float                                              StepBeatScale;                                              // 0x099C   (0x0004)  
	float                                              StepBeatOffset;                                             // 0x09A0   (0x0004)  
	float                                              LengthTrackBeats;                                           // 0x09A4   (0x0004)  
	double                                             InstanceSpace;                                              // 0x09A8   (0x0008)  
	double                                             InstanceSetSpace;                                           // 0x09B0   (0x0008)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x09B8   (0x0008)  MISSED


	/// Functions
	// Function /Script/FabricRuntime.FabricSteppedPreviewFXComponent.UpdateStepData
	// void UpdateStepData(int32_t Index, bool bMarkRenderStateDirty);                                                       // [0xabbeea8] Native|Protected|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricSteppedPreviewFXComponent.UpdateExistingTransforms
	// void UpdateExistingTransforms(int32_t NumInstances, int32_t NumSteps);                                                // [0xabbecd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricSteppedPreviewFXComponent.UpdateDeviceEnabledFX
	// void UpdateDeviceEnabledFX(bool bEnabled);                                                                            // [0xabbeba8] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricSteppedPreviewFXComponent.UpdateAllCurrentStepData
	// void UpdateAllCurrentStepData(int32_t NumSteps, float StepLengthBeats);                                               // [0xabbeae0] Native|Protected|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricSteppedPreviewFXComponent.SetSpanLength
	// void SetSpanLength(int32_t InstanceIndex, float SpanLengthBeats);                                                     // [0xabbe79c] Final|Native|Protected|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricSteppedPreviewFXComponent.SetNumSteps
	// void SetNumSteps(int32_t NumSteps);                                                                                   // [0xabbe5dc] Final|Native|Protected|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricSteppedPreviewFXComponent.SetNoteTime
	// void SetNoteTime(int32_t InstanceIndex, float NoteTimeOffsetBeats);                                                   // [0xabbe518] Final|Native|Protected|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricSteppedPreviewFXComponent.SetNoteOn
	// void SetNoteOn(int32_t InstanceIndex, float NoteOn, bool bMarkRenderStateDirty);                                      // [0xabbe420] Final|Native|Protected|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricSteppedPreviewFXComponent.SetNoteLength
	// void SetNoteLength(int32_t InstanceIndex, float NoteLengthBeats);                                                     // [0xabbe35c] Final|Native|Protected|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricSteppedPreviewFXComponent.SetGenericFloatValue
	// void SetGenericFloatValue(int32_t InstanceIndex, float FloatValue, bool bMarkRenderStateDirty);                       // [0xabbdf38] Final|Native|Protected|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricSteppedPreviewFXComponent.OnQuarterNotesLengthChanged
	// void OnQuarterNotesLengthChanged(float QuarterNoteLength);                                                            // [0xabbdcb8] Native|Protected     
	// Function /Script/FabricRuntime.FabricSteppedPreviewFXComponent.OnPageChanged
	// void OnPageChanged(int32_t CurrentPage);                                                                              // [0xabbdc34] Native|Protected     
	// Function /Script/FabricRuntime.FabricSteppedPreviewFXComponent.OnNumTracksChanged
	// void OnNumTracksChanged(int32_t NumTracks);                                                                           // [0xabbdbb0] Native|Protected     
	// Function /Script/FabricRuntime.FabricSteppedPreviewFXComponent.OnNumStepsChanged
	// void OnNumStepsChanged(int32_t NumSteps);                                                                             // [0xabbdb2c] Native|Protected     
	// Function /Script/FabricRuntime.FabricSteppedPreviewFXComponent.OnNoteStyleChanged
	// void OnNoteStyleChanged(EFabricNoteStyle style);                                                                      // [0xabbda24] Native|Protected     
	// Function /Script/FabricRuntime.FabricSteppedPreviewFXComponent.OnBeatScaleChanged
	// void OnBeatScaleChanged(float BeatScale);                                                                             // [0xabbd6d0] Native|Protected     
	// Function /Script/FabricRuntime.FabricSteppedPreviewFXComponent.OnBeatOffsetChanged
	// void OnBeatOffsetChanged(float BeatOffset);                                                                           // [0xabbd64c] Native|Protected     
	// Function /Script/FabricRuntime.FabricSteppedPreviewFXComponent.GetNoteOn
	// float GetNoteOn(int32_t InstanceIndex);                                                                               // [0xabbd040] Native|Protected|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricSteppedPreviewFXComponent.ConstructPreviewVisuals
	// void ConstructPreviewVisuals(int32_t NumSteps, float StepBeatLength, bool bForceUpdateTransform, bool bInTestNotesOn); // [0xabbbeec] Native|Public|BlueprintCallable 
};

/// Class /Script/FabricRuntime.FabricSequencerPreviewFXComponent
/// Size: 0x0010 (0x0009C0 - 0x0009D0)
class UFabricSequencerPreviewFXComponent : public UFabricSteppedPreviewFXComponent
{ 
public:
	SDK_UNDEFINED(8,13711) /* TWeakObjectPtr<UFabricStepSequencerComponent*> */ __um(StepSequencer);               // 0x09C0   (0x0008)  
	SDK_UNDEFINED(8,13712) /* TWeakObjectPtr<UFabricStepSequencerGridComponent*> */ __um(StepSequencerGrid);       // 0x09C8   (0x0008)  


	/// Functions
	// Function /Script/FabricRuntime.FabricSequencerPreviewFXComponent.UpdateNoteOn
	// void UpdateNoteOn(int32_t Index, int32_t NumSteps, bool bMarkRenderStateDirty);                                       // [0xabbed90] Final|Native|Private|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricSequencerPreviewFXComponent.SetSustainLength
	// void SetSustainLength(int32_t InstanceIndex, float SustainLengthBeats);                                               // [0xabbe924] Final|Native|Private|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricSequencerPreviewFXComponent.SetSingleTrackNoteOn
	// void SetSingleTrackNoteOn(int32_t InstanceIndex, int32_t TrackPICDIndex, float NoteOn, bool bMarkRenderStateDirty);   // [0xabbe65c] Final|Native|Private|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricSequencerPreviewFXComponent.OnStepChanged
	// void OnStepChanged(FFabricSequencerStepChangedInfo& StepInfo);                                                        // [0xabbdd3c] Final|Native|Protected|HasOutParms 
	// Function /Script/FabricRuntime.FabricSequencerPreviewFXComponent.OnFullTableChanged
	// void OnFullTableChanged();                                                                                            // [0xabbd754] Final|Native|Protected 
	// Function /Script/FabricRuntime.FabricSequencerPreviewFXComponent.InitializePreviewFXComponent
	// void InitializePreviewFXComponent(class UFabricStepSequencerComponent* InStepSequencer, class UFabricStepSequencerGridComponent* InStepSequencerGrid, bool bInTestNotesOn); // [0xabbd258] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/FabricRuntime.FabricSequencerSustainComponent
/// Size: 0x0080 (0x000960 - 0x0009E0)
class UFabricSequencerSustainComponent : public UInstancedStaticMeshComponent
{ 
public:
	SDK_UNDEFINED(80,13713) /* TMap<FIntVector2, int32_t> */ __um(StepToInstanceMapping);                          // 0x0958   (0x0050)  
	int32_t                                            PICDStartBeat;                                              // 0x09A8   (0x0004)  
	int32_t                                            PICDEndBeat;                                                // 0x09AC   (0x0004)  
	int32_t                                            PICDLoopBeat;                                               // 0x09B0   (0x0004)  
	int32_t                                            CPDDeviceEnabled;                                           // 0x09B4   (0x0004)  
	float                                              GridSquareExtents;                                          // 0x09B8   (0x0004)  
	float                                              SustainInstanceYLocation;                                   // 0x09BC   (0x0004)  
	float                                              SustainInstanceYScale;                                      // 0x09C0   (0x0004)  
	float                                              SustainInstanceZScale;                                      // 0x09C4   (0x0004)  
	SDK_UNDEFINED(8,13714) /* TWeakObjectPtr<UFabricStepSequencerComponent*> */ __um(StepSequencer);               // 0x09C8   (0x0008)  
	SDK_UNDEFINED(8,13715) /* TWeakObjectPtr<UFabricStepSequencerGridComponent*> */ __um(StepSequencerGrid);       // 0x09D0   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x09D8   (0x0008)  MISSED


	/// Functions
	// Function /Script/FabricRuntime.FabricSequencerSustainComponent.UpdateVisibilityOfInstances
	// void UpdateVisibilityOfInstances();                                                                                   // [0xabbf234] Final|Native|Protected|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricSequencerSustainComponent.UpdateSustainMaterial
	// void UpdateSustainMaterial(int32_t InstanceIndex, int32_t HeadNoteStepIndex, int32_t TrackIndex);                     // [0xabbf140] Final|Native|Protected|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricSequencerSustainComponent.UpdateSustainInstance
	// void UpdateSustainInstance(int32_t StepIndex, int32_t TrackIndex, int32_t PageIndex, bool bEnabled, bool bContinuous, bool bStepChanged); // [0xabbef70] Final|Native|Protected|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricSequencerSustainComponent.UpdatePipsOnGridChanged
	// void UpdatePipsOnGridChanged();                                                                                       // [0xabbee94] Final|Native|Protected|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricSequencerSustainComponent.UpdateDeviceEnabledOnSustain
	// void UpdateDeviceEnabledOnSustain(bool bEnabled);                                                                     // [0xabbec3c] Final|Native|Protected|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricSequencerSustainComponent.SetStartBeat
	// void SetStartBeat(int32_t InstanceIndex, float StartBeatValue);                                                       // [0xabbe860] Final|Native|Protected|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricSequencerSustainComponent.SetLoopBeat
	// void SetLoopBeat(int32_t InstanceIndex, float LoopBeatValue);                                                         // [0xabbe1d4] Final|Native|Protected|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricSequencerSustainComponent.SetEndBeat
	// void SetEndBeat(int32_t InstanceIndex, float EndBeatValue);                                                           // [0xabbde74] Final|Native|Protected|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricSequencerSustainComponent.OnStepChanged
	// void OnStepChanged(FFabricSequencerStepChangedInfo& StepInfo);                                                        // [0xabbddd8] Final|Native|Protected|HasOutParms 
	// Function /Script/FabricRuntime.FabricSequencerSustainComponent.OnPageChanged
	// void OnPageChanged(int32_t CurrentPage);                                                                              // [0xabbdbb0] Native|Protected     
	// Function /Script/FabricRuntime.FabricSequencerSustainComponent.OnNumTracksChanged
	// void OnNumTracksChanged(int32_t NumTracks);                                                                           // [0xabbdb2c] Native|Protected     
	// Function /Script/FabricRuntime.FabricSequencerSustainComponent.OnNumStepsChanged
	// void OnNumStepsChanged(int32_t NumSteps);                                                                             // [0xabbdaa8] Native|Protected     
	// Function /Script/FabricRuntime.FabricSequencerSustainComponent.OnFullTableChanged
	// void OnFullTableChanged();                                                                                            // [0xabbd768] Final|Native|Protected 
	// Function /Script/FabricRuntime.FabricSequencerSustainComponent.InitializeSustainComponent
	// void InitializeSustainComponent(class UFabricStepSequencerComponent* InStepSequencer, class UFabricStepSequencerGridComponent* InStepSequencerGrid); // [0xabbd35c] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricSequencerSustainComponent.FindHeadNoteAndUpdateInstance
	// void FindHeadNoteAndUpdateInstance(int32_t StepIndex, int32_t TrackIndex);                                            // [0xabbc104] Final|Native|Protected|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricSequencerSustainComponent.FindAndDeleteInstance
	// void FindAndDeleteInstance(int32_t StepIndex, int32_t TrackIndex);                                                    // [0xabbc044] Final|Native|Protected|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricSequencerSustainComponent.ConstructSustains
	// void ConstructSustains();                                                                                             // [0xabbc030] Final|Native|Protected|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricSequencerSustainComponent.CalculateSustainLength
	// float CalculateSustainLength(float NumStepsCoveredBySustain);                                                         // [0xabbbe5c] Final|Native|Protected|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricSequencerSustainComponent.AddSustainInstance
	// void AddSustainInstance(int32_t StepIndex, int32_t TrackIndex);                                                       // [0xabbbd9c] Final|Native|Protected|BlueprintCallable 
};

/// Struct /Script/FabricRuntime.FabricSignificanceBasedUpdateBucket
/// Size: 0x0010 (0x000000 - 0x000010)
struct FFabricSignificanceBasedUpdateBucket
{ 
	float                                              MinDistanceFromPlayer;                                      // 0x0000   (0x0004)  
	float                                              MaxDistanceFromPlayer;                                      // 0x0004   (0x0004)  
	float                                              FramesPerUpdate;                                            // 0x0008   (0x0004)  
	int32_t                                            MaxObjectsInBucket;                                         // 0x000C   (0x0004)  
};

/// Class /Script/FabricRuntime.FabricSignificanceAsset
/// Size: 0x0010 (0x000030 - 0x000040)
class UFabricSignificanceAsset : public UDataAsset
{ 
public:
	TArray<FFabricSignificanceBasedUpdateBucket>       UpdateBuckets;                                              // 0x0030   (0x0010)  
};

/// Class /Script/FabricRuntime.FabricStepSequencerModulatable
/// Size: 0x0088 (0x000328 - 0x0003B0)
class UFabricStepSequencerModulatable : public UFabricModulatable
{ 
public:
	unsigned char                                      UnknownData00_3[0x80];                                      // 0x0328   (0x0080)  MISSED
	bool                                               bIsChromatic;                                               // 0x03A8   (0x0001)  
	bool                                               bModulationValueChanged;                                    // 0x03A9   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x03AA   (0x0006)  MISSED
};

/// Struct /Script/FabricRuntime.FabricStepTrackPacked
/// Size: 0x0028 (0x000000 - 0x000028)
struct FFabricStepTrackPacked
{ 
	TArray<int32_t>                                    PackedEnabledSquares;                                       // 0x0000   (0x0010)  
	TArray<int32_t>                                    PackedContinuationSquares;                                  // 0x0010   (0x0010)  
	int32_t                                            TrackIndex;                                                 // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Struct /Script/FabricRuntime.FabricStepPagePacked
/// Size: 0x0018 (0x000000 - 0x000018)
struct FFabricStepPagePacked
{ 
	TArray<FFabricStepTrackPacked>                     PackedTracks;                                               // 0x0000   (0x0010)  
	int32_t                                            PageNumber;                                                 // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/FabricRuntime.FabricStepTablePacked
/// Size: 0x0028 (0x000000 - 0x000028)
struct FFabricStepTablePacked
{ 
	TArray<FFabricStepPagePacked>                      PackedPages;                                                // 0x0000   (0x0010)  
	TArray<FStepSequenceNote>                          Notes;                                                      // 0x0010   (0x0010)  
	int32_t                                            StepSkipIndex;                                              // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Class /Script/FabricRuntime.FabricStepSequencerComponent
/// Size: 0x0260 (0x0000A0 - 0x000300)
class UFabricStepSequencerComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x00A0   (0x0008)  MISSED
	SDK_UNDEFINED(16,13716) /* FMulticastInlineDelegate */ __um(OnNumTracksChanged);                               // 0x00A8   (0x0010)  
	SDK_UNDEFINED(16,13717) /* FMulticastInlineDelegate */ __um(OnNumStepsChanged);                                // 0x00B8   (0x0010)  
	SDK_UNDEFINED(16,13718) /* FMulticastInlineDelegate */ __um(OnPageChanged);                                    // 0x00C8   (0x0010)  
	SDK_UNDEFINED(16,13719) /* FMulticastInlineDelegate */ __um(OnQuarterNotesLengthChanged);                      // 0x00D8   (0x0010)  
	SDK_UNDEFINED(16,13720) /* FMulticastInlineDelegate */ __um(OnBeatScaleChanged);                               // 0x00E8   (0x0010)  
	SDK_UNDEFINED(16,13721) /* FMulticastInlineDelegate */ __um(OnBeatOffsetChanged);                              // 0x00F8   (0x0010)  
	SDK_UNDEFINED(16,13722) /* FMulticastInlineDelegate */ __um(OnStepChanged);                                    // 0x0108   (0x0010)  
	SDK_UNDEFINED(16,13723) /* FMulticastInlineDelegate */ __um(OnNoteStyleChanged);                               // 0x0118   (0x0010)  
	SDK_UNDEFINED(16,13724) /* FMulticastInlineDelegate */ __um(OnFullTableChanged);                               // 0x0128   (0x0010)  
	SDK_UNDEFINED(16,13725) /* FMulticastInlineDelegate */ __um(OnPageCleared);                                    // 0x0138   (0x0010)  
	SDK_UNDEFINED(16,13726) /* FMulticastInlineDelegate */ __um(OnLoopEnded);                                      // 0x0148   (0x0010)  
	SDK_UNDEFINED(16,13727) /* FString */              __um(LengthParam);                                          // 0x0158   (0x0010)  
	SDK_UNDEFINED(16,13728) /* FString */              __um(DurationParam);                                        // 0x0168   (0x0010)  
	SDK_UNDEFINED(16,13729) /* FString */              __um(PageParam);                                            // 0x0178   (0x0010)  
	SDK_UNDEFINED(16,13730) /* FString */              __um(AutoPageParam);                                        // 0x0188   (0x0010)  
	SDK_UNDEFINED(16,13731) /* FString */              __um(OctaveParam);                                          // 0x0198   (0x0010)  
	SDK_UNDEFINED(16,13732) /* FString */              __um(NoteStyleParam);                                       // 0x01A8   (0x0010)  
	SDK_UNDEFINED(16,13733) /* FString */              __um(LoopParam);                                            // 0x01B8   (0x0010)  
	SDK_UNDEFINED(16,13734) /* FString */              __um(AutoPagePlaysBlankPagesParam);                         // 0x01C8   (0x0010)  
	bool                                               bMonophonic;                                                // 0x01D8   (0x0001)  
	bool                                               bSupportsContinuation;                                      // 0x01D9   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x01DA   (0x0002)  MISSED
	float                                              StepLengthQuarterNotes;                                     // 0x01DC   (0x0004)  
	float                                              StepBeatScale;                                              // 0x01E0   (0x0004)  
	bool                                               bSkipFourthStepInTriplet;                                   // 0x01E4   (0x0001)  
	EFabricNoteStyle                                   NoteStyle;                                                  // 0x01E5   (0x0001)  
	unsigned char                                      UnknownData02_5[0x2];                                       // 0x01E6   (0x0002)  MISSED
	int32_t                                            MaxSteps;                                                   // 0x01E8   (0x0004)  
	int32_t                                            CurrentSteps;                                               // 0x01EC   (0x0004)  
	bool                                               bMatchStepsToTimeSignature;                                 // 0x01F0   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x01F1   (0x0003)  MISSED
	int32_t                                            MaxPages;                                                   // 0x01F4   (0x0004)  
	int32_t                                            CurrentPage;                                                // 0x01F8   (0x0004)  
	int32_t                                            MaxTracks;                                                  // 0x01FC   (0x0004)  
	int32_t                                            CurrentTracks;                                              // 0x0200   (0x0004)  
	int32_t                                            LocalInteractionStartTrackIndex;                            // 0x0204   (0x0004)  
	int32_t                                            LocalInteractionStartStepIndex;                             // 0x0208   (0x0004)  
	bool                                               bAutoPage;                                                  // 0x020C   (0x0001)  
	bool                                               bAutoPagePlaysBlankPages;                                   // 0x020D   (0x0001)  
	bool                                               bLoop;                                                      // 0x020E   (0x0001)  
	char                                               RandomizationCommonSampleSize;                              // 0x020F   (0x0001)  
	float                                              RandomizationRestSelectionMaxPct;                           // 0x0210   (0x0004)  
	float                                              RandomizationCommonPitchSelectionMaxPct;                    // 0x0214   (0x0004)  
	class UClass*                                      ContinuationControlClass;                                   // 0x0218   (0x0008)  
	FStepSequenceTable                                 LocalStepTable;                                             // 0x0220   (0x0028)  
	FFabricStepTablePacked                             PackedStepTable;                                            // 0x0248   (0x0028)  
	class UFabricStepSequencerModulatable*             StepSequencerModulatable;                                   // 0x0270   (0x0008)  
	class AActor*                                      CachedContinuationControl;                                  // 0x0278   (0x0008)  
	int32_t                                            ContinuationRowIndex;                                       // 0x0280   (0x0004)  
	int32_t                                            ContinuationStepIndex;                                      // 0x0284   (0x0004)  
	unsigned char                                      UnknownData04_5[0x8];                                       // 0x0288   (0x0008)  MISSED
	class UMidiStepSequence*                           MetaSoundMidiStepSequence;                                  // 0x0290   (0x0008)  
	unsigned char                                      UnknownData05_6[0x68];                                      // 0x0298   (0x0068)  MISSED


	/// Functions
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.UpdatePackedStepTableSaveRecordIfChanged
	// void UpdatePackedStepTableSaveRecordIfChanged(FFabricStepTablePacked& InPackedStepTable);                             // [0xabc28cc] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.ToggleStepEnabledOnPage
	// void ToggleStepEnabledOnPage(int32_t Page, int32_t Row, int32_t Column);                                              // [0xabc27d8] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.ToggleStepEnabled
	// void ToggleStepEnabled(int32_t Row, int32_t Column);                                                                  // [0xabc2710] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.SetStepEnabledOnPage
	// void SetStepEnabledOnPage(int32_t Page, int32_t Row, int32_t Column, bool bState);                                    // [0xabc25d4] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.SetStepEnabled
	// void SetStepEnabled(int32_t Row, int32_t Column, bool bState);                                                        // [0xabc24dc] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.SetStepContinuationOnPage
	// void SetStepContinuationOnPage(int32_t Page, int32_t Row, int32_t Column, bool bIsContinuation);                      // [0xabc23a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.SetStepContinuation
	// void SetStepContinuation(int32_t Row, int32_t Column, bool bIsContinuation);                                          // [0xabc22a8] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.SetQuarterNotesLength
	// void SetQuarterNotesLength(float QuarterNotes);                                                                       // [0xabc2228] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.SetPlaying
	// void SetPlaying(bool bNewPlaying);                                                                                    // [0xabc21a8] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.SetNumberTracks
	// void SetNumberTracks(int32_t NumTracks);                                                                              // [0xabc20e4] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.SetNumberSteps
	// void SetNumberSteps(int32_t NumSteps);                                                                                // [0xabc2064] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.SetNumberPages
	// void SetNumberPages(int32_t NumPages);                                                                                // [0xabc1fc8] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.SetNoteStyle
	// void SetNoteStyle(EFabricNoteStyle style);                                                                            // [0xabc1f48] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.SetNoteForTrack
	// void SetNoteForTrack(FMidiNote Note, int32_t Track);                                                                  // [0xabc1d3c] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.SetMusicClock
	// void SetMusicClock(class UMusicClockComponent* InMusicClock);                                                         // [0xabc1c3c] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.SetMonophonic
	// void SetMonophonic(bool bNewMonophonic);                                                                              // [0xabc1bbc] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.SetMaxSteps
	// void SetMaxSteps(int32_t NumSteps);                                                                                   // [0xabc1b28] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.SetLoop
	// void SetLoop(bool bNewLoop);                                                                                          // [0xabc1aa8] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.SetCurrentPage
	// void SetCurrentPage(int32_t NewPage);                                                                                 // [0xabc1924] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.SetBeatScale
	// void SetBeatScale(float BeatScale);                                                                                   // [0xabc1824] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.RandomizePage
	// void RandomizePage(int32_t Page);                                                                                     // [0xabc1724] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.RandomizeCurrentPage
	// void RandomizeCurrentPage();                                                                                          // [0xabc170c] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.OnRep_PackedStepTable
	// void OnRep_PackedStepTable();                                                                                         // [0xabc165c] Final|Native|Private 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.IsStepEnabledForAnyTrackOnPage
	// bool IsStepEnabledForAnyTrackOnPage(int32_t Page, int32_t Column);                                                    // [0xabc10c4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.IsStepEnabledForAnyTrack
	// bool IsStepEnabledForAnyTrack(int32_t Column);                                                                        // [0xabc102c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.IsPageBlank
	// bool IsPageBlank(int32_t PageIndex);                                                                                  // [0xabc0f9c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.GetSupportsContinuation
	// bool GetSupportsContinuation();                                                                                       // [0x87ab3e4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.GetStepStartQuarterNotes
	// float GetStepStartQuarterNotes(int32_t Step);                                                                         // [0xabc0ef8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.GetStepStartBeat
	// float GetStepStartBeat(int32_t Step);                                                                                 // [0xabc0e4c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.GetStepIsContinuationOnPage
	// bool GetStepIsContinuationOnPage(int32_t Page, int32_t Row, int32_t Column);                                          // [0xabc0d54] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.GetStepIsContinuation
	// bool GetStepIsContinuation(int32_t Row, int32_t Column);                                                              // [0xabc0c88] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.GetStepEnabledOnPage
	// bool GetStepEnabledOnPage(int32_t Page, int32_t Row, int32_t Column);                                                 // [0xabc0b90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.GetStepEnabled
	// bool GetStepEnabled(int32_t Row, int32_t Column);                                                                     // [0xabc0ac4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.GetStepContinuationLengthOnPage
	// float GetStepContinuationLengthOnPage(int32_t Page, int32_t Row, int32_t Column);                                     // [0xabc09cc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.GetStepContinuationLength
	// float GetStepContinuationLength(int32_t Row, int32_t Column);                                                         // [0xabc0900] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.GetPageData
	// void GetPageData(int32_t PageIndex, FStepSequencePage& OutPageData);                                                  // [0xabc07e8] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.GetNumUsedSteps
	// int32_t GetNumUsedSteps(int32_t TotalSteps);                                                                          // [0xabc072c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.GetNumberTracks
	// int32_t GetNumberTracks();                                                                                            // [0xabc07d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.GetNumberSteps
	// int32_t GetNumberSteps();                                                                                             // [0xabc07b8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.GetMidiStepSequence
	// class UMidiStepSequence* GetMidiStepSequence();                                                                       // [0x6473e98] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.GetMaxSteps
	// int32_t GetMaxSteps();                                                                                                // [0xabc0714] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.GetLongestContinuationLengthForColumnOnPage
	// float GetLongestContinuationLengthForColumnOnPage(int32_t Page, int32_t Column);                                      // [0xabc0650] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.GetLongestContinuationLengthForColumn
	// float GetLongestContinuationLengthForColumn(int32_t Column);                                                          // [0xabc05b8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.GetLengthTrackQuarterNotes
	// float GetLengthTrackQuarterNotes();                                                                                   // [0xabc0578] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.GetLengthTrackBeats
	// float GetLengthTrackBeats();                                                                                          // [0xabc0530] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.GetLengthStepQuarterNotes
	// float GetLengthStepQuarterNotes();                                                                                    // [0xabc0510] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.GetLengthStepBeats
	// float GetLengthStepBeats();                                                                                           // [0xabc04e8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.GetCurrentPage
	// int32_t GetCurrentPage();                                                                                             // [0xabc015c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.GetContinuationFocusIndeces
	// void GetContinuationFocusIndeces(int32_t& OutRowIndex, int32_t& OutStepIndex, int32_t& OutNumContinuationSteps);      // [0xabc0034] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.ClearPage
	// void ClearPage(int32_t Page, bool bUpdateSaveRecord);                                                                 // [0xabbff78] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.ClearCurrentPage
	// void ClearCurrentPage();                                                                                              // [0xabbff60] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.ApplyTemplate
	// void ApplyTemplate(class UMidiStepSequence* Template, int32_t StepSequencePageIndex, bool bUpdateSaveRecord);         // [0xabbfd80] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.ApplyPage
	// void ApplyPage(int32_t PageIndex, FStepSequencePage& PageData);                                                       // [0xabbfca4] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/FabricRuntime.TrackRow
/// Size: 0x0010 (0x000000 - 0x000010)
struct FTrackRow
{ 
	TArray<class UFabricStepSequencerGridSquareComponent*> GridSquares;                                            // 0x0000   (0x0010)  
};

/// Class /Script/FabricRuntime.FabricStepSequencerGridComponent
/// Size: 0x0070 (0x000220 - 0x000290)
class UFabricStepSequencerGridComponent : public USceneComponent
{ 
public:
	FVector2D                                          GridExtents;                                                // 0x0220   (0x0010)  
	FVector2D                                          GridSpacing;                                                // 0x0230   (0x0010)  
	int32_t                                            SingleTrackNumItemsPerRow;                                  // 0x0240   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0244   (0x0004)  MISSED
	FVector2D                                          EditorPreviewGridSize;                                      // 0x0248   (0x0010)  
	class UClass*                                      GridSquareClass;                                            // 0x0258   (0x0008)  
	SDK_UNDEFINED(1,13735) /* TEnumAsByte<ESequencerType> */ __um(SequencerType);                                  // 0x0260   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0261   (0x0003)  MISSED
	int32_t                                            ActiveTrack;                                                // 0x0264   (0x0004)  
	class UFabricStepSequencerComponent*               StepSequencer;                                              // 0x0268   (0x0008)  
	TArray<FTrackRow>                                  GridRows;                                                   // 0x0270   (0x0010)  
	unsigned char                                      UnknownData02_6[0x10];                                      // 0x0280   (0x0010)  MISSED


	/// Functions
	// Function /Script/FabricRuntime.FabricStepSequencerGridComponent.SetGridVisible
	// void SetGridVisible(bool bInGridVisible, bool bForceRefresh);                                                         // [0xabc19a4] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricStepSequencerGridComponent.SetBypassed
	// void SetBypassed(bool bBypassed);                                                                                     // [0xabc18a4] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricStepSequencerGridComponent.SetActiveTrackIndex
	// void SetActiveTrackIndex(int32_t ActiveTrackIndex);                                                                   // [0xabc17a4] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricStepSequencerGridComponent.OnStepChanged
	// void OnStepChanged(FFabricSequencerStepChangedInfo& StepInfo);                                                        // [0xabc1670] Final|Native|Protected|HasOutParms 
	// Function /Script/FabricRuntime.FabricStepSequencerGridComponent.OnQuarterNotesLengthChanged
	// void OnQuarterNotesLengthChanged(float QuarterNotesLength);                                                           // [0xabc13d4] Final|Native|Protected 
	// Function /Script/FabricRuntime.FabricStepSequencerGridComponent.OnNumTracksChanged
	// void OnNumTracksChanged(int32_t NumTracks);                                                                           // [0xabc15dc] Final|Native|Protected 
	// Function /Script/FabricRuntime.FabricStepSequencerGridComponent.OnNumStepsChanged
	// void OnNumStepsChanged(int32_t NumSteps);                                                                             // [0xabc155c] Final|Native|Protected 
	// Function /Script/FabricRuntime.FabricStepSequencerGridComponent.OnNoteStyleChanged
	// void OnNoteStyleChanged(EFabricNoteStyle style);                                                                      // [0xabc14e0] Final|Native|Protected 
	// Function /Script/FabricRuntime.FabricStepSequencerGridComponent.OnFullTableChanged
	// void OnFullTableChanged();                                                                                            // [0xabc14cc] Final|Native|Protected 
	// Function /Script/FabricRuntime.FabricStepSequencerGridComponent.OnCurrentPageChanged
	// void OnCurrentPageChanged(int32_t NewPage);                                                                           // [0xabc1450] Final|Native|Protected 
	// Function /Script/FabricRuntime.FabricStepSequencerGridComponent.OnBeatScaleChanged
	// void OnBeatScaleChanged(float BeatScale);                                                                             // [0xabc13d4] Final|Native|Protected 
	// Function /Script/FabricRuntime.FabricStepSequencerGridComponent.OnBeatOffsetChanged
	// void OnBeatOffsetChanged(float BeatOffset);                                                                           // [0xabc13d4] Final|Native|Protected 
	// Function /Script/FabricRuntime.FabricStepSequencerGridComponent.NotifyInteractionFocusTargetExternallyChanged
	// void NotifyInteractionFocusTargetExternallyChanged(class APlayerController* PlayerController, int32_t SourceRowIndex, int32_t SourceColumnIndex, int32_t FocusRowIndex, int32_t FocusColumnIndex, bool bIsFocused); // [0xabc1210] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricStepSequencerGridComponent.IsStepToggledOnForAnyTrack
	// bool IsStepToggledOnForAnyTrack(int32_t StepIndex);                                                                   // [0xabc1184] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricStepSequencerGridComponent.IsBypassed
	// bool IsBypassed();                                                                                                    // [0x3eacecc] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/FabricRuntime.FabricStepSequencerGridComponent.GetGridSquareYPosition
	// float GetGridSquareYPosition(int32_t NumRows, int32_t RowIndex);                                                      // [0xabc0424] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/FabricRuntime.FabricStepSequencerGridComponent.GetGridSquareXPosition
	// float GetGridSquareXPosition(int32_t NumSteps, int32_t StepIndex);                                                    // [0xabc0360] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/FabricRuntime.FabricStepSequencerGridComponent.GetGridSquareSize
	// FVector2D GetGridSquareSize(int32_t NumSteps, int32_t NumRows);                                                       // [0xabc0248] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricStepSequencerGridComponent.GetGridSquareExtents
	// FVector GetGridSquareExtents(int32_t RowIndex, int32_t ColumnIndex);                                                  // [0xabc0174] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/FabricRuntime.FabricStepSequencerGridSquareComponent
/// Size: 0x0060 (0x0005C0 - 0x000620)
class UFabricStepSequencerGridSquareComponent : public UStaticMeshComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x10];                                      // 0x05C0   (0x0010)  MISSED
	float                                              ContinuationControlInteractionDelay;                        // 0x05D0   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x05D4   (0x0004)  MISSED
	class UFabricStepSequencerComponent*               AssignedStepSequencer;                                      // 0x05D8   (0x0008)  
	int32_t                                            ActiveTrack;                                                // 0x05E0   (0x0004)  
	int32_t                                            AssignedStep;                                               // 0x05E4   (0x0004)  
	int32_t                                            PreviousFocusStepIndex;                                     // 0x05E8   (0x0004)  
	unsigned char                                      UnknownData02_6[0x34];                                      // 0x05EC   (0x0034)  MISSED


	/// Functions
	// Function /Script/FabricRuntime.FabricStepSequencerGridSquareComponent.SetActiveTrack
	// void SetActiveTrack(int32_t Track);                                                                                   // [0xabe4fb8] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricStepSequencerGridSquareComponent.OnContinuationControl_StartInteraction
	// void OnContinuationControl_StartInteraction(class APlayerController* Controller);                                     // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricStepSequencerGridSquareComponent.OnContinuationControl_EndInteraction
	// void OnContinuationControl_EndInteraction(class APlayerController* Controller);                                       // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricStepSequencerGridSquareComponent.CanDoInteractionLogicOnStartInteraction
	// bool CanDoInteractionLogicOnStartInteraction();                                                                       // [0xabe4d8c] Final|Native|Private|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricStepSequencerGridSquareComponent.CanDoInteractionLogicOnEndInteraction
	// bool CanDoInteractionLogicOnEndInteraction();                                                                         // [0xabe4d68] Final|Native|Private|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/FabricRuntime.FabricTextureModifierBase
/// Size: 0x0018 (0x000328 - 0x000340)
class UFabricTextureModifierBase : public UFabricModulatable
{ 
public:
	SDK_UNDEFINED(16,13736) /* FMulticastInlineDelegate */ __um(OnSourceTexturesChanged);                          // 0x0328   (0x0010)  
	class UTexture*                                    ModifiedTexture;                                            // 0x0338   (0x0008)  


	/// Functions
	// Function /Script/FabricRuntime.FabricTextureModifierBase.OnSourceTextureChanged__DelegateSignature
	// void OnSourceTextureChanged__DelegateSignature(TArray<FFabricTextureProviderTexture>& Textures);                      // [0x18a39e4] MulticastDelegate|Public|Delegate|HasOutParms 
};

/// Struct /Script/FabricRuntime.FabricTextureProviderTexture
/// Size: 0x0018 (0x000000 - 0x000018)
struct FFabricTextureProviderTexture
{ 
	class UTexture*                                    Texture;                                                    // 0x0000   (0x0008)  
	FLinearColor                                       Tint;                                                       // 0x0008   (0x0010)  
};

/// Class /Script/FabricRuntime.FabricTextureTreeNode
/// Size: 0x0028 (0x000028 - 0x000050)
class UFabricTextureTreeNode : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	TArray<class UFabricTextureTreeNode*>              Children;                                                   // 0x0028   (0x0010)  
	FFabricTextureProviderTexture                      Texture;                                                    // 0x0038   (0x0018)  


	/// Functions
	// Function /Script/FabricRuntime.FabricTextureTreeNode.Reset
	// void Reset();                                                                                                         // [0xabe4fa4] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricTextureTreeNode.CopyProperties
	// void CopyProperties(class UFabricTextureTreeNode* Other);                                                             // [0xabe4db0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/FabricRuntime.FabricTextureProviderBase
/// Size: 0x0038 (0x000028 - 0x000060)
class UFabricTextureProviderBase : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	SDK_UNDEFINED(16,13737) /* FMulticastInlineDelegate */ __um(OnTextureChanged);                                 // 0x0028   (0x0010)  
	FFabricTextureProviderTexture                      SourceTexture;                                              // 0x0038   (0x0018)  
	float                                              CurrentCableFloatValue;                                     // 0x0050   (0x0004)  
	float                                              CurrentCableFloatDirection;                                 // 0x0054   (0x0004)  
	float                                              TimeElapsedSinceLastCableFloatDirty;                        // 0x0058   (0x0004)  
	bool                                               bCurrentCableFloatDirty;                                    // 0x005C   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x005D   (0x0003)  MISSED


	/// Functions
	// Function /Script/FabricRuntime.FabricTextureProviderBase.SetSourceTexture
	// void SetSourceTexture(FFabricTextureProviderTexture& InTexture);                                                      // [0xabe50f0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricTextureProviderBase.OnTextureChanged__DelegateSignature
	// void OnTextureChanged__DelegateSignature(FFabricTextureProviderTexture& Texture);                                     // [0x18a39e4] MulticastDelegate|Public|Delegate|HasOutParms 
};

/// Class /Script/FabricRuntime.FabricTimelinePreviewComponent
/// Size: 0x0018 (0x0000A0 - 0x0000B8)
class UFabricTimelinePreviewComponent : public UActorComponent
{ 
public:
	class UTimelineComponent*                          CurrentTimeline;                                            // 0x00A0   (0x0008)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x00A8   (0x0010)  MISSED


	/// Functions
	// Function /Script/FabricRuntime.FabricTimelinePreviewComponent.PreviewTimeline
	// void PreviewTimeline(class UTimelineComponent* Timeline, float SecondsToPlay, bool bReverseAnimation);                // [0xabe4ec0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricTimelinePreviewComponent.GetShouldPreview
	// bool GetShouldPreview();                                                                                              // [0x3219f08] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/FabricRuntime.FabricTimelineSyncServerSongPosition
/// Size: 0x001C (0x000000 - 0x00001C)
struct FFabricTimelineSyncServerSongPosition
{ 
	FMusicTimestamp                                    Timestamp;                                                  // 0x0000   (0x0008)  
	float                                              SecondsIncludingCountIn;                                    // 0x0008   (0x0004)  
	float                                              Tempo;                                                      // 0x000C   (0x0004)  
	float                                              BeatsIncludingCountIn;                                      // 0x0010   (0x0004)  
	float                                              NetServerTimeWhenSent;                                      // 0x0014   (0x0004)  
	float                                              TimeSigDenominator;                                         // 0x0018   (0x0004)  
};

/// Class /Script/FabricRuntime.FabricTimelineSyncComponent
/// Size: 0x00C0 (0x0000A0 - 0x000160)
class UFabricTimelineSyncComponent : public UActorComponent
{ 
public:
	float                                              ThresholdForSeekMS;                                         // 0x00A0   (0x0004)  
	float                                              ThresholdForStartSpeedAdjustMS;                             // 0x00A4   (0x0004)  
	float                                              ThresholdForEndOfSpeedAdjustMS;                             // 0x00A8   (0x0004)  
	float                                              SpeedAdjustFactor;                                          // 0x00AC   (0x0004)  
	bool                                               bPrintToScreen;                                             // 0x00B0   (0x0001)  
	bool                                               bLogCorrectedServerTimeDelta;                               // 0x00B1   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x00B2   (0x0002)  MISSED
	float                                              SpeedSyncTimeoutLength;                                     // 0x00B4   (0x0004)  
	float                                              TempoDeltaThrottleSeconds;                                  // 0x00B8   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x00BC   (0x0004)  MISSED
	class UFabricMetaSoundManagerComponent*            MetaSoundManager;                                           // 0x00C0   (0x0008)  
	class UMusicClockComponent*                        MusicClock;                                                 // 0x00C8   (0x0008)  
	unsigned char                                      UnknownData02_5[0x8];                                       // 0x00D0   (0x0008)  MISSED
	FMidiSongPos                                       ServerCurrentSongRenderPos;                                 // 0x00D8   (0x0040)  
	FFabricTimelineSyncServerSongPosition              ServerTimelineSyncServerSongPosition;                       // 0x0118   (0x001C)  
	unsigned char                                      UnknownData03_6[0x2C];                                      // 0x0134   (0x002C)  MISSED


	/// Functions
	// Function /Script/FabricRuntime.FabricTimelineSyncComponent.SetFabricMetaSoundManager
	// void SetFabricMetaSoundManager(class UFabricMetaSoundManagerComponent* InMetaSoundManager);                           // [0xabe5038] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricTimelineSyncComponent.OnTimelinePlayingChanged
	// void OnTimelinePlayingChanged(EMusicClockState State);                                                                // [0x81e7214] Final|Native|Public  
	// Function /Script/FabricRuntime.FabricTimelineSyncComponent.OnRep_ServerCurrentSongPos
	// void OnRep_ServerCurrentSongPos();                                                                                    // [0xabe4ea8] Final|Native|Public  
};

/// Class /Script/FabricRuntime.FabricWaveformTexture
/// Size: 0x0050 (0x000028 - 0x000078)
class UFabricWaveformTexture : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x30];                                      // 0x0000   (0x0030)  MISSED
	int32_t                                            WaveformNumSamplesHeld;                                     // 0x0030   (0x0004)  
	int32_t                                            WaveformSmoothingDistance;                                  // 0x0034   (0x0004)  
	float                                              WaveformSmoothingFactor;                                    // 0x0038   (0x0004)  
	float                                              WaveformDecayPerSecond;                                     // 0x003C   (0x0004)  
	class UTexture2D*                                  WaveformTexture;                                            // 0x0040   (0x0008)  
	bool                                               bEnableTextureRequests;                                     // 0x0048   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2F];                                      // 0x0049   (0x002F)  MISSED


	/// Functions
	// Function /Script/FabricRuntime.FabricWaveformTexture.Initialize
	// void Initialize();                                                                                                    // [0xabe4e94] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricWaveformTexture.GetWaveformTexture
	// class UTexture2D* GetWaveformTexture();                                                                               // [0x6473ba8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricWaveformTexture.AddNewValueToWaveformTexture
	// void AddNewValueToWaveformTexture(float Value);                                                                       // [0xabe4ce8] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricWaveformTexture.AddMultipleValuesToWaveformTexture
	// void AddMultipleValuesToWaveformTexture(TArray<float>& Values);                                                       // [0xabe4c0c] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/FabricRuntime.FabricGameFeatureAction_OverrideFabricInteractionTool
/// Size: 0x0020 (0x000028 - 0x000048)
class UFabricGameFeatureAction_OverrideFabricInteractionTool : public UGameFeatureAction
{ 
public:
	SDK_UNDEFINED(32,13738) /* TWeakObjectPtr<UFortGadgetItemDefinition*> */ __um(OverriddenPatchworkInteractionTool); // 0x0028   (0x0020)  
};

/// Struct /Script/FabricRuntime.FabricSequencerStepChangedInfo
/// Size: 0x0010 (0x000000 - 0x000010)
struct FFabricSequencerStepChangedInfo
{ 
	int32_t                                            Page;                                                       // 0x0000   (0x0004)  
	int32_t                                            Row;                                                        // 0x0004   (0x0004)  
	int32_t                                            Step;                                                       // 0x0008   (0x0004)  
	FStepSequenceCell                                  Cell;                                                       // 0x000C   (0x0002)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x000E   (0x0002)  MISSED
};

/// Struct /Script/FabricRuntime.FabricLFOGenerator
/// Size: 0x0078 (0x000000 - 0x000078)
struct FFabricLFOGenerator
{ 
	EFabricWaveShape                                   WaveShape;                                                  // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              Minimum;                                                    // 0x0004   (0x0004)  
	float                                              Maximum;                                                    // 0x0008   (0x0004)  
	float                                              Shape;                                                      // 0x000C   (0x0004)  
	int32_t                                            InitialSeed;                                                // 0x0010   (0x0004)  
	unsigned char                                      UnknownData01_6[0x64];                                      // 0x0014   (0x0064)  MISSED
};

/// Struct /Script/FabricRuntime.FabricValueSetterGenerator
/// Size: 0x0058 (0x000000 - 0x000058)
struct FFabricValueSetterGenerator
{ 
	int32_t                                            PhraseLengthInBars;                                         // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4C];                                      // 0x000C   (0x004C)  MISSED
};

/// Struct /Script/FabricRuntime.FabricMeshInstanceReference
/// Size: 0x0048 (0x000000 - 0x000048)
struct FFabricMeshInstanceReference
{ 
	FFabricMeshProviderMeshReference                   MeshReference;                                              // 0x0000   (0x0038)  
	TArray<FTransform>                                 InstanceTransforms;                                         // 0x0038   (0x0010)  
};

/// Struct /Script/FabricRuntime.FabricMetaSoundNodePool
/// Size: 0x0020 (0x000000 - 0x000020)
struct FFabricMetaSoundNodePool
{ 
	int32_t                                            NumberAdded;                                                // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	TArray<FFabricMetaSoundNodeInfo>                   FreeNodes;                                                  // 0x0008   (0x0010)  
	class UMetaSoundPatch*                             PatchSpawnedFrom;                                           // 0x0018   (0x0008)  
};

/// Struct /Script/FabricRuntime.FabricLoadedUtilityPatches
/// Size: 0x0028 (0x000000 - 0x000028)
struct FFabricLoadedUtilityPatches
{ 
	class UMetaSoundPatch*                             CombinerNode;                                               // 0x0000   (0x0008)  
	class UMetaSoundPatch*                             SwitcherNode;                                               // 0x0008   (0x0008)  
	class UMetaSoundPatch*                             SelectNode;                                                 // 0x0010   (0x0008)  
	class UMetaSoundPatch*                             AnalyzerNode;                                               // 0x0018   (0x0008)  
	FFabricMetaSoundUtilityParams                      UtilityNodeParams;                                          // 0x0020   (0x0008)  
};

/// Struct /Script/FabricRuntime.FabricConnectedInputWrapperInfo
/// Size: 0x0230 (0x000000 - 0x000230)
struct FFabricConnectedInputWrapperInfo
{ 
	bool                                               bDirectlyConnected;                                         // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	class UFabricMetaSoundPatchWrapper*                Wrapper;                                                    // 0x0008   (0x0008)  
	FFabricMetaSoundNodeInfo                           OutputNode;                                                 // 0x0010   (0x00F0)  
	FMetaSoundBuilderNodeOutputHandle                  ConnectedNodeOutput;                                        // 0x0100   (0x0020)  
	FFabricMetaSoundNodeInfo                           InputNode;                                                  // 0x0120   (0x00F0)  
	FMetaSoundBuilderNodeInputHandle                   CombinerNodeInput;                                          // 0x0210   (0x0020)  
};

/// Struct /Script/FabricRuntime.FabricStepSequencerComponentBaseInstanceData
/// Size: 0x0028 (0x000068 - 0x000090)
struct FFabricStepSequencerComponentBaseInstanceData : FActorComponentInstanceData
{ 
	FFabricStepTablePacked                             PackedStepTable;                                            // 0x0068   (0x0028)  
};

