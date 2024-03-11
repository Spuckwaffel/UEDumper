
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

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

/// Class /Script/FabricRuntime.FabricAnimatableButtonInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UFabricAnimatableButtonInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/FabricRuntime.FabricAnimatableButtonInterface.PlayOpenAnimation
	// void PlayOpenAnimation();                                                                                                // [0x326a61c] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricAnimatableButtonInterface.PlayCloseAnimation
	// void PlayCloseAnimation();                                                                                               // [0x3548e28] Native|Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/FabricRuntime.FabricButtonBase
/// Size: 0x00B8 (0x000290 - 0x000348)
class AFabricButtonBase : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 840;

public:
	SMember(FMulticastInlineDelegate)                  ToggleStateChanged                                          OFFSET(getStruct<T>, {0x2A8, 16, 0, 0})
	DMember(double)                                    OpenTimeSeconds                                             OFFSET(get<double>, {0x2B8, 8, 0, 0})
	DMember(double)                                    CloseTimeSeconds                                            OFFSET(get<double>, {0x2C0, 8, 0, 0})
	DMember(bool)                                      bHasToggle                                                  OFFSET(get<bool>, {0x2C8, 1, 0, 0})
	CMember(TEnumAsByte<EButtonPressMethod>)           ClickMethod                                                 OFFSET(get<T>, {0x2C9, 1, 0, 0})
	CMember(class APlayerController*)                  InteractingController                                       OFFSET(get<T>, {0x2D0, 8, 0, 0})
	SMember(FString)                                   ButtonId                                                    OFFSET(getStruct<T>, {0x2D8, 16, 0, 0})
	SMember(FText)                                     ButtonLabel                                                 OFFSET(getStruct<T>, {0x2E8, 24, 0, 0})
	SMember(FText)                                     ButtonDescription                                           OFFSET(getStruct<T>, {0x300, 24, 0, 0})
	SMember(FGameplayTagContainer)                     GameplayTags                                                OFFSET(getStruct<T>, {0x318, 32, 0, 0})
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x338, 1, 0, 0})
	DMember(bool)                                      bHovered                                                    OFFSET(get<bool>, {0x339, 1, 0, 0})
	DMember(bool)                                      bPressed                                                    OFFSET(get<bool>, {0x33A, 1, 0, 0})
	CMember(ECheckBoxState)                            ToggleState                                                 OFFSET(get<T>, {0x33B, 1, 0, 0})
	CMember(class UFabricInteractableViewModel*)       WidgetViewModel                                             OFFSET(get<T>, {0x340, 8, 0, 0})


	/// Functions
	// Function /Script/FabricRuntime.FabricButtonBase.ToggleStateChanged__DelegateSignature
	// void ToggleStateChanged__DelegateSignature(class APlayerController* InteractingController, bool IsToggle);               // [0x18a39e4] MulticastDelegate|Public|Delegate 
	// Function /Script/FabricRuntime.FabricButtonBase.SwapToggle
	// void SwapToggle();                                                                                                       // [0xabb1f4c] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricButtonBase.SetWidgetViewModel
	// void SetWidgetViewModel(class UFabricInteractableViewModel* ViewModel);                                                  // [0xabb1e4c] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricButtonBase.SetToggleState
	// void SetToggleState(bool bNewToggleState, bool bBroadcast, bool bForce);                                                 // [0xabb1c34] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricButtonBase.SetEnabled
	// void SetEnabled(bool bNewEnabled);                                                                                       // [0xabb19b4] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricButtonBase.OnUnhovered
	// void OnUnhovered();                                                                                                      // [0x3475290] Native|Event|Public|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricButtonBase.OnToggleStateChanged
	// void OnToggleStateChanged(bool bIsToggled);                                                                              // [0x77d22b8] Native|Event|Public|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricButtonBase.OnHovered
	// void OnHovered();                                                                                                        // [0x673c1d4] Native|Event|Public|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricButtonBase.OnEnabled
	// void OnEnabled();                                                                                                        // [0x2f99b74] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricButtonBase.OnDisabled
	// void OnDisabled();                                                                                                       // [0x21dc214] Native|Event|Public|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricButtonBase.OnButtonReleased
	// void OnButtonReleased();                                                                                                 // [0x792af54] Native|Event|Public|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricButtonBase.OnButtonPressed
	// void OnButtonPressed();                                                                                                  // [0x1c2b230] Native|Event|Public|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricButtonBase.OnButtonDoubleClicked
	// void OnButtonDoubleClicked();                                                                                            // [0x33e3b10] Native|Event|Public|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricButtonBase.OnButtonClicked
	// void OnButtonClicked();                                                                                                  // [0x21dbe0c] Native|Event|Public|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricButtonBase.IsToggledOn
	// bool IsToggledOn();                                                                                                      // [0xabb127c] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/FabricRuntime.FabricButtonBase.IsPressed
	// bool IsPressed();                                                                                                        // [0x9d27338] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/FabricRuntime.FabricButtonBase.IsHovered
	// bool IsHovered();                                                                                                        // [0xabb1234] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/FabricRuntime.FabricButtonBase.IsEnabled
	// bool IsEnabled();                                                                                                        // [0x86ca86c] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/FabricRuntime.FabricButtonBase.HandleButtonUnhovered
	// void HandleButtonUnhovered();                                                                                            // [0x6b2e03c] Native|Event|Public|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricButtonBase.HandleButtonReleased
	// void HandleButtonReleased();                                                                                             // [0x8925198] Native|Event|Public|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricButtonBase.HandleButtonPressed
	// void HandleButtonPressed();                                                                                              // [0x1f6c11c] Native|Event|Public|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricButtonBase.HandleButtonHovered
	// void HandleButtonHovered();                                                                                              // [0x83e6058] Native|Event|Public|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricButtonBase.HandleButtonDoubleClicked
	// void HandleButtonDoubleClicked();                                                                                        // [0x1fc2138] Native|Event|Public|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricButtonBase.HandleButtonClicked
	// void HandleButtonClicked();                                                                                              // [0x325abb0] Native|Event|Public|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricButtonBase.GetOpenTimeline
	// class UTimelineComponent* GetOpenTimeline();                                                                             // [0x69f1ed4] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Script/FabricRuntime.FabricButtonBase.GetCloseTimeline
	// class UTimelineComponent* GetCloseTimeline();                                                                            // [0x69f1ed4] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure 
};

/// Class /Script/FabricRuntime.FabricButtonComponentBase
/// Size: 0x00D0 (0x0005C0 - 0x000690)
class UFabricButtonComponentBase : public UStaticMeshComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1680;

public:
	SMember(FMulticastInlineDelegate)                  ToggleStateChanged                                          OFFSET(getStruct<T>, {0x5D0, 16, 0, 0})
	DMember(double)                                    OpenTimeSeconds                                             OFFSET(get<double>, {0x5E0, 8, 0, 0})
	DMember(double)                                    CloseTimeSeconds                                            OFFSET(get<double>, {0x5E8, 8, 0, 0})
	DMember(bool)                                      bHasToggle                                                  OFFSET(get<bool>, {0x5F0, 1, 0, 0})
	CMember(TEnumAsByte<EButtonPressMethod>)           ClickMethod                                                 OFFSET(get<T>, {0x5F1, 1, 0, 0})
	CMember(class APlayerController*)                  InteractingController                                       OFFSET(get<T>, {0x5F8, 8, 0, 0})
	SMember(FString)                                   ButtonId                                                    OFFSET(getStruct<T>, {0x600, 16, 0, 0})
	SMember(FText)                                     ButtonLabel                                                 OFFSET(getStruct<T>, {0x610, 24, 0, 0})
	SMember(FText)                                     ButtonDescription                                           OFFSET(getStruct<T>, {0x628, 24, 0, 0})
	SMember(FGameplayTagContainer)                     GameplayTags                                                OFFSET(getStruct<T>, {0x640, 32, 0, 0})
	DMember(bool)                                      bUseScreenGrid                                              OFFSET(get<bool>, {0x660, 1, 0, 0})
	SMember(FVector2D)                                 ScreenGridPosition                                          OFFSET(getStruct<T>, {0x668, 16, 0, 0})
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x678, 1, 0, 0})
	DMember(bool)                                      bHovered                                                    OFFSET(get<bool>, {0x679, 1, 0, 0})
	DMember(bool)                                      bPressed                                                    OFFSET(get<bool>, {0x67A, 1, 0, 0})
	CMember(ECheckBoxState)                            ToggleState                                                 OFFSET(get<T>, {0x67B, 1, 0, 0})
	CMember(class UFabricInteractableViewModel*)       WidgetViewModel                                             OFFSET(get<T>, {0x680, 8, 0, 0})


	/// Functions
	// Function /Script/FabricRuntime.FabricButtonComponentBase.ToggleStateChanged__DelegateSignature
	// void ToggleStateChanged__DelegateSignature(class APlayerController* InteractingController, bool IsToggle);               // [0x18a39e4] MulticastDelegate|Public|Delegate 
	// Function /Script/FabricRuntime.FabricButtonComponentBase.SwapToggle
	// void SwapToggle();                                                                                                       // [0xabb1f60] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricButtonComponentBase.SetWidgetViewModel
	// void SetWidgetViewModel(class UFabricInteractableViewModel* ViewModel);                                                  // [0xabb1ecc] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricButtonComponentBase.SetToggleState
	// void SetToggleState(bool bNewToggleState, bool bBroadcast, bool bForce);                                                 // [0xabb1d40] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricButtonComponentBase.SetEnabled
	// void SetEnabled(bool bNewEnabled);                                                                                       // [0xabb1a34] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricButtonComponentBase.OnUnhovered
	// void OnUnhovered();                                                                                                      // [0xabb191c] Native|Event|Public|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricButtonComponentBase.OnToggleStateChanged
	// void OnToggleStateChanged(bool bIsToggled);                                                                              // [0xabb1898] Native|Event|Public|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricButtonComponentBase.OnHovered
	// void OnHovered();                                                                                                        // [0xabb1314] Native|Event|Public|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricButtonComponentBase.OnEnabled
	// void OnEnabled();                                                                                                        // [0x1495280] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricButtonComponentBase.OnDisabled
	// void OnDisabled();                                                                                                       // [0x8813298] Native|Event|Public|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricButtonComponentBase.OnButtonReleased
	// void OnButtonReleased();                                                                                                 // [0xabb12fc] Native|Event|Public|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricButtonComponentBase.OnButtonPressed
	// void OnButtonPressed();                                                                                                  // [0xabb12e4] Native|Event|Public|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricButtonComponentBase.OnButtonDoubleClicked
	// void OnButtonDoubleClicked();                                                                                            // [0xabb12cc] Native|Event|Public|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricButtonComponentBase.OnButtonClicked
	// void OnButtonClicked();                                                                                                  // [0xabb12b4] Native|Event|Public|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricButtonComponentBase.IsToggledOn
	// bool IsToggledOn();                                                                                                      // [0xabb1298] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/FabricRuntime.FabricButtonComponentBase.IsPressed
	// bool IsPressed();                                                                                                        // [0xabb1264] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/FabricRuntime.FabricButtonComponentBase.IsHovered
	// bool IsHovered();                                                                                                        // [0xabb124c] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/FabricRuntime.FabricButtonComponentBase.IsEnabled
	// bool IsEnabled();                                                                                                        // [0xabb121c] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/FabricRuntime.FabricButtonComponentBase.HandleButtonUnhovered
	// void HandleButtonUnhovered();                                                                                            // [0xabb1204] Native|Event|Public|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricButtonComponentBase.HandleButtonReleased
	// void HandleButtonReleased();                                                                                             // [0xabb11ec] Native|Event|Public|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricButtonComponentBase.HandleButtonPressed
	// void HandleButtonPressed();                                                                                              // [0xabb11d4] Native|Event|Public|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricButtonComponentBase.HandleButtonHovered
	// void HandleButtonHovered();                                                                                              // [0x3ebae20] Native|Event|Public|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricButtonComponentBase.HandleButtonDoubleClicked
	// void HandleButtonDoubleClicked();                                                                                        // [0xabb11bc] Native|Event|Public|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricButtonComponentBase.HandleButtonClicked
	// void HandleButtonClicked();                                                                                              // [0xabb11a4] Native|Event|Public|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricButtonComponentBase.GetOpenTimeline
	// class UTimelineComponent* GetOpenTimeline();                                                                             // [0x69f1ed4] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Script/FabricRuntime.FabricButtonComponentBase.GetCloseTimeline
	// class UTimelineComponent* GetCloseTimeline();                                                                            // [0x69f1ed4] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Script/FabricRuntime.FabricButtonComponentBase.ConstructButton
	// void ConstructButton();                                                                                                  // [0x8813f44] Native|Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/FabricRuntime.FabricDevice
/// Size: 0x0000 (0x000028 - 0x000028)
class UFabricDevice : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/FabricRuntime.FabricMetaSoundPatchOwner
/// Size: 0x0000 (0x000028 - 0x000028)
class UFabricMetaSoundPatchOwner : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/FabricRuntime.FabricMetaSoundPatchOwner.GetMetaSoundPatchWrapper
	// class UFabricMetaSoundPatchWrapper* GetMetaSoundPatchWrapper();                                                          // [0x3e263a8] Native|Event|Public|BlueprintEvent 
};

/// Class /Script/FabricRuntime.FabricAudioGenerator
/// Size: 0x0000 (0x000028 - 0x000028)
class UFabricAudioGenerator : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/FabricRuntime.FabricAudioGenerator.GetAudioAnalyzer
	// FSourceEffectChainEntry GetAudioAnalyzer();                                                                              // [0xabb0f14] Native|Event|Public|BlueprintEvent 
};

/// Class /Script/FabricRuntime.FabricAudioModifier
/// Size: 0x0000 (0x000028 - 0x000028)
class UFabricAudioModifier : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/FabricRuntime.FabricAudioModifier.GetSourceEffectChainEntries
	// TArray<FSourceEffectChainEntry> GetSourceEffectChainEntries();                                                           // [0xabb1130] Native|Event|Public|BlueprintEvent 
};

/// Class /Script/FabricRuntime.FabricAudioReceiver
/// Size: 0x0000 (0x000028 - 0x000028)
class UFabricAudioReceiver : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/FabricRuntime.FabricAudioReceiver.GetSoundSourceBus
	// class USoundSourceBus* GetSoundSourceBus();                                                                              // [0x3e263a8] Native|Event|Public|BlueprintEvent 
};

/// Class /Script/FabricRuntime.FabricFloatGenerator
/// Size: 0x0000 (0x000028 - 0x000028)
class UFabricFloatGenerator : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/FabricRuntime.FabricFloatGenerator.GetFloatProvider
	// class UFabricFloatProviderBase* GetFloatProvider();                                                                      // [0x3e263a8] Native|Event|Public|BlueprintEvent 
};

/// Class /Script/FabricRuntime.FabricFloatReceiver
/// Size: 0x0000 (0x000028 - 0x000028)
class UFabricFloatReceiver : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/FabricRuntime.FabricFloatReceiver.SetFloatProviders
	// void SetFloatProviders(TArray<UFabricFloatProviderBase*>& FloatProvider);                                                // [0x67cf560] Native|Event|Public|HasOutParms|BlueprintEvent 
};

/// Class /Script/FabricRuntime.FabricTextureGenerator
/// Size: 0x0000 (0x000028 - 0x000028)
class UFabricTextureGenerator : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/FabricRuntime.FabricTextureGenerator.GetTextureProvider
	// class UFabricTextureProviderBase* GetTextureProvider();                                                                  // [0x3e263a8] Native|Event|Public|BlueprintEvent 
};

/// Class /Script/FabricRuntime.FabricTextureModifier
/// Size: 0x0000 (0x000028 - 0x000028)
class UFabricTextureModifier : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/FabricRuntime.FabricTextureModifier.IsShowingTexturePreview
	// bool IsShowingTexturePreview();                                                                                          // [0x284fe1c] Native|Event|Public|BlueprintEvent|Const 
	// Function /Script/FabricRuntime.FabricTextureModifier.GetTextureModifier
	// class UFabricTextureModifierBase* GetTextureModifier();                                                                  // [0x3e263a8] Native|Event|Public|BlueprintEvent 
};

/// Class /Script/FabricRuntime.FabricTextureReceiver
/// Size: 0x0000 (0x000028 - 0x000028)
class UFabricTextureReceiver : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/FabricRuntime.FabricTextureReceiver.OnTexturesChanged
	// void OnTexturesChanged(TArray<FFabricTextureProviderTexture>& Texture);                                                  // [0x7773ba8] Native|Event|Public|HasOutParms|BlueprintEvent 
};

/// Class /Script/FabricRuntime.FabricMeshGenerator
/// Size: 0x0000 (0x000028 - 0x000028)
class UFabricMeshGenerator : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/FabricRuntime.FabricMeshGenerator.GetMeshProvider
	// class UFabricMeshProviderBase* GetMeshProvider();                                                                        // [0x3e263a8] Native|Event|Public|BlueprintEvent 
};

/// Class /Script/FabricRuntime.FabricMeshModifier
/// Size: 0x0000 (0x000028 - 0x000028)
class UFabricMeshModifier : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/FabricRuntime.FabricMeshModifier.OnMeshesChanged
	// void OnMeshesChanged(TArray<FFabricMeshInstanceReference>& InstanceMeshReferences, bool bInstancesChanged);              // [0xabb1704] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricMeshModifier.IsShowingMeshPreview
	// bool IsShowingMeshPreview();                                                                                             // [0x81d2eec] Native|Event|Public|BlueprintEvent|Const 
	// Function /Script/FabricRuntime.FabricMeshModifier.GetMeshModifier
	// class UFabricMeshModifierBase* GetMeshModifier();                                                                        // [0x67ee0fc] Native|Event|Public|BlueprintEvent|Const 
};

/// Class /Script/FabricRuntime.FabricMeshReceiver
/// Size: 0x0000 (0x000028 - 0x000028)
class UFabricMeshReceiver : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/FabricRuntime.FabricMeshReceiver.OnMeshReferenceChanged
	// void OnMeshReferenceChanged(FFabricMeshProviderMeshReference& ReferenceMesh);                                            // [0xabb1644] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricMeshReceiver.OnMeshInstancesChanged
	// void OnMeshInstancesChanged(TArray<FTransform>& Meshes);                                                                 // [0xabb15a4] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricMeshReceiver.OnMeshInstanceReferencesChanged
	// void OnMeshInstanceReferencesChanged(TArray<FFabricMeshInstanceReference>& MeshInstanceReferences, bool bMeshChanged, bool bInstancesChanged); // [0xabb132c] Native|Event|Public|HasOutParms|BlueprintEvent 
};

/// Class /Script/FabricRuntime.FabricModulationNode
/// Size: 0x0020 (0x000028 - 0x000048)
class UFabricModulationNode : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(TArray<class UFabricFloatProviderBase*>)   FloatProviders                                              OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Class /Script/FabricRuntime.FabricModulatable
/// Size: 0x0300 (0x000028 - 0x000328)
class UFabricModulatable : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 808;

public:
	CMember(TWeakObjectPtr<AActor*>)                   ModulatedActor                                              OFFSET(get<T>, {0x2C, 8, 0, 0})
	CMember(TArray<FString>)                           ModulatorParams                                             OFFSET(get<T>, {0x38, 16, 0, 0})
	CMember(TSet<FName>)                               NonModulatedParamsWithCallbacks                             OFFSET(get<T>, {0x48, 80, 0, 0})
	CMember(TMap<FString, TWeakObjectPtr<UObject*>>)   Modulators                                                  OFFSET(get<T>, {0x98, 80, 0, 0})
	CMember(TMap<FName, FName>)                        LastBroadcastedValues                                       OFFSET(get<T>, {0xE8, 80, 0, 0})
	CMember(TArray<TWeakObjectPtr<UObject*>>)          ModulatorSources                                            OFFSET(get<T>, {0x138, 16, 0, 0})


	/// Functions
	// Function /Script/FabricRuntime.FabricModulatable.OnOptionsLoaded
	// void OnOptionsLoaded();                                                                                                  // [0xabbd638] Final|Native|Protected 
	// Function /Script/FabricRuntime.FabricModulatable.OnModulatorFloatProviderConnectionChanged
	// void OnModulatorFloatProviderConnectionChanged(bool bConnected, class UObject* ModulatorObject);                         // [0xabbd930] Final|Native|Private 
	// Function /Script/FabricRuntime.FabricModulatable.OnModulatedPropertyChanged
	// void OnModulatedPropertyChanged(FString Value, class UObject* ModulatorObject);                                          // [0xabbd77c] Final|Native|Private 
	// Function /Script/FabricRuntime.FabricModulatable.OnAnyOptionUpdated
	// void OnAnyOptionUpdated();                                                                                               // [0xabbd638] Final|Native|Protected 
	// Function /Script/FabricRuntime.FabricModulatable.IsParamModulated
	// bool IsParamModulated(FString Param);                                                                                    // [0xabbd420] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricModulatable.GetModulatedString
	// bool GetModulatedString(FString Param, FMidiSongPos& SongPos, FString& OutString);                                       // [0xabbcd88] Final|Native|Protected|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricModulatable.GetModulatedInt
	// bool GetModulatedInt(FString Param, FMidiSongPos& SongPos, int32_t& OutInt);                                             // [0xabbca94] Final|Native|Protected|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricModulatable.GetModulatedFloat
	// bool GetModulatedFloat(FString Param, FMidiSongPos& SongPos, float& OutFloat);                                           // [0xabbc7a0] Final|Native|Protected|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricModulatable.GetModulatedEnum
	// bool GetModulatedEnum(FString Param, FMidiSongPos& SongPos, char& OutEnum);                                              // [0xabbc514] Final|Native|Protected|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricModulatable.GetModulatedBool
	// bool GetModulatedBool(FString Param, FMidiSongPos& SongPos, bool& OutBool);                                              // [0xabbc220] Final|Native|Protected|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricModulatable.GetModulatedActor
	// class AActor* GetModulatedActor();                                                                                       // [0xabbc1f8] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/FabricRuntime.FabricFloatProviderBase
/// Size: 0x0048 (0x000328 - 0x000370)
class UFabricFloatProviderBase : public UFabricModulatable
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 880;

public:
	SMember(FMulticastInlineDelegate)                  OnFloatChanged                                              OFFSET(getStruct<T>, {0x330, 16, 0, 0})
	DMember(float)                                     CurrentFloat                                                OFFSET(get<float>, {0x340, 4, 0, 0})
	CMember(TWeakObjectPtr<UMusicClockComponent*>)     MusicClock                                                  OFFSET(get<T>, {0x344, 8, 0, 0})
	CMember(class UFabricMetaSoundModulatorPatchWrapper*) AssociatedPatchWrapper                                   OFFSET(get<T>, {0x350, 8, 0, 0})
	SMember(FString)                                   EnabledParam                                                OFFSET(getStruct<T>, {0x358, 16, 0, 0})
	DMember(bool)                                      bAlwaysModulates                                            OFFSET(get<bool>, {0x368, 1, 0, 0})
	DMember(bool)                                      bBindBlueprintOnFloatChanged                                OFFSET(get<bool>, {0x369, 1, 0, 0})
	DMember(bool)                                      bIsEnabled                                                  OFFSET(get<bool>, {0x36A, 1, 0, 0})
	DMember(bool)                                      bModulatorValueChanged                                      OFFSET(get<bool>, {0x36B, 1, 0, 0})


	/// Functions
	// Function /Script/FabricRuntime.FabricFloatProviderBase.SetProviderEnabled
	// void SetProviderEnabled(bool bInIsEnabled);                                                                              // [0xabb1bb4] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricFloatProviderBase.SetMusicClock
	// void SetMusicClock(class UMusicClockComponent* NewMusicClock);                                                           // [0xabb1ab4] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricFloatProviderBase.SetAssociatedPatchWrapper
	// void SetAssociatedPatchWrapper(class UFabricMetaSoundModulatorPatchWrapper* PatchWrapper);                               // [0xabb1934] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricFloatProviderBase.ReceiveTick
	// void ReceiveTick(float DeltaSeconds);                                                                                    // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricFloatProviderBase.OnFloatChanged__DelegateSignature
	// void OnFloatChanged__DelegateSignature(float float);                                                                     // [0x18a39e4] MulticastDelegate|Public|Delegate 
	// Function /Script/FabricRuntime.FabricFloatProviderBase.GetFloatProviderType
	// EFabricFloatProviderType GetFloatProviderType();                                                                         // [0x68144b0] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricFloatProviderBase.GetFloatAtSongPos
	// float GetFloatAtSongPos(FMidiSongPos& SongPos);                                                                          // [0xabb1044] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricFloatProviderBase.GetCurrentSongPosWithOffset
	// FMidiSongPos GetCurrentSongPosWithOffset(float OffsetSeconds);                                                           // [0xabb0f9c] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricFloatProviderBase.GetCurrentSongPos
	// FMidiSongPos GetCurrentSongPos();                                                                                        // [0xabb0f60] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricFloatProviderBase.GetCurrentFloat
	// float GetCurrentFloat();                                                                                                 // [0x9864c80] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricFloatProviderBase.GetAssociatedPatchWrapper
	// class UFabricMetaSoundModulatorPatchWrapper* GetAssociatedPatchWrapper();                                                // [0xabb0efc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/FabricRuntime.FabricFloatProviderWave
/// Size: 0x0150 (0x000370 - 0x0004C0)
class UFabricFloatProviderWave : public UFabricFloatProviderBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1216;

public:
	SMember(FString)                                   WaveShapeParam                                              OFFSET(getStruct<T>, {0x370, 16, 0, 0})
	SMember(FString)                                   FreeHzParam                                                 OFFSET(getStruct<T>, {0x380, 16, 0, 0})
	SMember(FString)                                   MinParam                                                    OFFSET(getStruct<T>, {0x390, 16, 0, 0})
	SMember(FString)                                   MaxParam                                                    OFFSET(getStruct<T>, {0x3A0, 16, 0, 0})
	SMember(FString)                                   BeatDurationParam                                           OFFSET(getStruct<T>, {0x3B0, 16, 0, 0})
	SMember(FString)                                   BeatOffsetParam                                             OFFSET(getStruct<T>, {0x3C0, 16, 0, 0})
	SMember(FString)                                   ShapeParam                                                  OFFSET(getStruct<T>, {0x3D0, 16, 0, 0})
	SMember(FString)                                   StyleParam                                                  OFFSET(getStruct<T>, {0x3E0, 16, 0, 0})
	DMember(int32_t)                                   PhaseCPDIndex                                               OFFSET(get<int32_t>, {0x3F0, 4, 0, 0})
	DMember(int32_t)                                   ValueCPDIndex                                               OFFSET(get<int32_t>, {0x3F4, 4, 0, 0})
	CMember(TSet<TWeakObjectPtr<UStaticMeshComponent*>>) PreviewDisplayMeshes                                      OFFSET(get<T>, {0x470, 80, 0, 0})


	/// Functions
	// Function /Script/FabricRuntime.FabricFloatProviderWave.SetRandomSeedByGuid
	// void SetRandomSeedByGuid(FGuid& InRandomGuid);                                                                           // [0xabb4e6c] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricFloatProviderWave.SetFreePhase
	// void SetFreePhase(float InFreePhase);                                                                                    // [0xabb4d68] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricFloatProviderWave.RemovePreviewDisplayMesh
	// void RemovePreviewDisplayMesh(class UStaticMeshComponent* Mesh);                                                         // [0xabb484c] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricFloatProviderWave.GetRandomSeed
	// int32_t GetRandomSeed();                                                                                                 // [0x81e71cc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricFloatProviderWave.GetPreviewDisplayMeshes
	// TArray<UStaticMeshComponent*> GetPreviewDisplayMeshes();                                                                 // [0xabb4134] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/FabricRuntime.FabricFloatProviderWave.GetCurrentPhase
	// float GetCurrentPhase();                                                                                                 // [0xabb3de4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricFloatProviderWave.GetCurrentFreePhase
	// float GetCurrentFreePhase();                                                                                             // [0xabb3dbc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricFloatProviderWave.ClearPreviewDisplayMeshes
	// void ClearPreviewDisplayMeshes();                                                                                        // [0xabb3ae8] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricFloatProviderWave.AddPreviewDisplayMesh
	// void AddPreviewDisplayMesh(class UStaticMeshComponent* Mesh);                                                            // [0xabb386c] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/FabricRuntime.FabricFloatProviderStep
/// Size: 0x0078 (0x000370 - 0x0003E8)
class UFabricFloatProviderStep : public UFabricFloatProviderBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1000;

public:
	SMember(FString)                                   StepRateParam                                               OFFSET(getStruct<T>, {0x370, 16, 0, 0})
	SMember(FString)                                   ActiveStepsParam                                            OFFSET(getStruct<T>, {0x380, 16, 0, 0})
	SMember(FString)                                   StepParamBase                                               OFFSET(getStruct<T>, {0x390, 16, 0, 0})
	DMember(int32_t)                                   MaxSteps                                                    OFFSET(get<int32_t>, {0x3A0, 4, 0, 0})
	SMember(FFabricStepGenerator)                      RuntimeGenerator                                            OFFSET(getStruct<T>, {0x3A8, 32, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnFloatProviderStepInitialized                              OFFSET(getStruct<T>, {0x3C8, 16, 0, 0})


	/// Functions
	// Function /Script/FabricRuntime.FabricFloatProviderStep.GetStepLengthBeats
	// float GetStepLengthBeats();                                                                                              // [0xabb4174] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/FabricRuntime.FabricFloatProviderValueSetter
/// Size: 0x0080 (0x000370 - 0x0003F0)
class UFabricFloatProviderValueSetter : public UFabricFloatProviderBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1008;

public:
	SMember(FString)                                   ValueParam                                                  OFFSET(getStruct<T>, {0x370, 16, 0, 0})
	SMember(FString)                                   TransitionTimingParam                                       OFFSET(getStruct<T>, {0x380, 16, 0, 0})


	/// Functions
	// Function /Script/FabricRuntime.FabricFloatProviderValueSetter.GetUpdateBeat
	// float GetUpdateBeat();                                                                                                   // [0xabb419c] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricFloatProviderValueSetter.CanUsePredictiveBeatBroadcasting
	// bool CanUsePredictiveBeatBroadcasting();                                                                                 // [0xabb3acc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricFloatProviderValueSetter.CalculateTransitionTiming
	// float CalculateTransitionTiming();                                                                                       // [0xabb3a00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricFloatProviderValueSetter.BroadcastCurrentValue
	// float BroadcastCurrentValue(float OverriddenBeat);                                                                       // [0xabb3970] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/FabricRuntime.FabricHoldable
/// Size: 0x0000 (0x000028 - 0x000028)
class UFabricHoldable : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/FabricRuntime.FabricInteractableControllerComponent
/// Size: 0x00A0 (0x0000A0 - 0x000140)
class UFabricInteractableControllerComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
	SMember(FMulticastInlineDelegate)                  OnNoInteractablesHit                                        OFFSET(getStruct<T>, {0xA8, 16, 0, 0})
	CMember(class AFortPlayerController*)              PlayerController                                            OFFSET(get<T>, {0xB8, 8, 0, 0})
	CMember(TWeakObjectPtr<UFortGadgetItemDefinition*>) FabricInteractionToolItemDefSoftPtr                        OFFSET(get<T>, {0xC0, 32, 0, 0})
	CMember(TWeakObjectPtr<UFortGadgetItemDefinition*>) OverriddenFabricInteractionToolItemDefSoftPtr              OFFSET(get<T>, {0xE0, 32, 0, 0})
	CMember(class UFortGadgetItemDefinition*)          FabricInteractionToolItemDef                                OFFSET(get<T>, {0x100, 8, 0, 0})
	DMember(float)                                     EnsurePlayerHasInteractionToolRetryDelay                    OFFSET(get<float>, {0x108, 4, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   SoftFabricDeviceBaseClass                                   OFFSET(get<T>, {0x120, 32, 0, 0})


	/// Functions
	// Function /Script/FabricRuntime.FabricInteractableControllerComponent.ServerRequestDoesIslandContainFabricDevices
	// void ServerRequestDoesIslandContainFabricDevices();                                                                      // [0x30fd094] Final|Net|NetReliableNative|Event|Private|NetServer 
	// Function /Script/FabricRuntime.FabricInteractableControllerComponent.ServerGivePlayerFabricInteractionTool
	// void ServerGivePlayerFabricInteractionTool();                                                                            // [0x248ecf4] Net|NetReliableNative|Event|Public|NetServer 
	// Function /Script/FabricRuntime.FabricInteractableControllerComponent.OnCreativeModeEnabledChangedDelegate
	// void OnCreativeModeEnabledChangedDelegate(bool bCreativeEnabled);                                                        // [0x63fe5cc] Final|Native|Public  
	// Function /Script/FabricRuntime.FabricInteractableControllerComponent.GiveBackInteractionTool
	// void GiveBackInteractionTool();                                                                                          // [0xabb41b4] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricInteractableControllerComponent.EnsurePlayerHasInteractionTool
	// void EnsurePlayerHasInteractionTool();                                                                                   // [0xabb3c04] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricInteractableControllerComponent.ClientReceiveDoesIslandContainFabricDevices
	// void ClientReceiveDoesIslandContainFabricDevices(bool bIslandContainsFabricDevices);                                     // [0x81fc848] Final|Net|NetReliableNative|Event|Private|NetClient 
};

/// Class /Script/FabricRuntime.FabricInteractable
/// Size: 0x0000 (0x000028 - 0x000028)
class UFabricInteractable : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/FabricRuntime.FabricInteractable.StartSpecialInteraction
	// void StartSpecialInteraction(class APlayerController* Controller);                                                       // [0x7252b3c] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricInteractable.StartInteraction
	// void StartInteraction(class APlayerController* Controller);                                                              // [0x81d377c] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricInteractable.ShouldPassInteractionToComponent
	// bool ShouldPassInteractionToComponent(class AFabricInteractionTool* InteractionTool);                                    // [0x9e704dc] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricInteractable.SetInteractable
	// void SetInteractable(bool bInteractable);                                                                                // [0xabb4de8] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricInteractable.SetHitComponent
	// void SetHitComponent(class USceneComponent* HitComponent);                                                               // [0x81d323c] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricInteractable.SetFocused
	// void SetFocused(bool bIsFocused);                                                                                        // [0x8224b8c] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricInteractable.OnInteractionFocusTargetChanged
	// void OnInteractionFocusTargetChanged(class APlayerController* Controller, class UObject* FocusTarget, bool bIsFocused);  // [0xabb4570] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricInteractable.IsValidToInteractWith
	// bool IsValidToInteractWith(class APlayerController* Controller);                                                         // [0xabb4328] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricInteractable.IsFocusDependentOnInteractionContext
	// bool IsFocusDependentOnInteractionContext(class APlayerController* Controller);                                          // [0xabb4258] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricInteractable.GetLinkedInteractable
	// class UObject* GetLinkedInteractable();                                                                                  // [0x8de2740] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricInteractable.GetInteractionSFX
	// class UAudioComponent* GetInteractionSFX();                                                                              // [0xabb410c] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricInteractable.GetInteractableType
	// EFabricInteractableType GetInteractableType();                                                                           // [0x6a56904] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricInteractable.GetInteractableName
	// void GetInteractableName(FText& OutName);                                                                                // [0xabb406c] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricInteractable.GetInteractableForwardVector
	// FVector GetInteractableForwardVector(class USceneComponent* Interactable);                                               // [0xabb3fc8] Native|Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricInteractable.GetInteractableDescription
	// void GetInteractableDescription(FText& OutDescription);                                                                  // [0xabb3f28] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricInteractable.GetInteractableComponentLocation
	// FVector GetInteractableComponentLocation(class USceneComponent* Interactable);                                           // [0xabb3e84] Native|Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricInteractable.GetContinuousInteractableValueNormalized
	// float GetContinuousInteractableValueNormalized();                                                                        // [0xabb3c90] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricInteractable.GetContinuousInteractableDirection
	// EFabricContinuousInteractionDirection GetContinuousInteractableDirection();                                              // [0x30dcec0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricInteractable.EndInteraction
	// void EndInteraction(class APlayerController* PlayerController, bool bWasDragAndDropInteraction);                         // [0xabb3b3c] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricInteractable.DoesInteractionRequireHoldable
	// bool DoesInteractionRequireHoldable();                                                                                   // [0x3d54878] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricInteractable.CanInteractWithHoldable
	// bool CanInteractWithHoldable(TScriptInterface<Class>& Holdable);                                                         // [0xabb3a28] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/FabricRuntime.FabricInteractablePlayspaceComponent
/// Size: 0x0050 (0x0000A0 - 0x0000F0)
class UFabricInteractablePlayspaceComponent : public UPlayspaceComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:


	/// Functions
	// Function /Script/FabricRuntime.FabricInteractablePlayspaceComponent.SetFabricDeviceExistsInPlayspace
	// void SetFabricDeviceExistsInPlayspace();                                                                                 // [0xabb4cf4] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricInteractablePlayspaceComponent.OnPlayspaceUserAdded
	// void OnPlayspaceUserAdded(FPlayspaceUser& PlayspaceUser);                                                                // [0xabb4670] Final|Native|Protected|HasOutParms 
	// Function /Script/FabricRuntime.FabricInteractablePlayspaceComponent.OnDownloadOnDemandCompleteIndividualClient
	// void OnDownloadOnDemandCompleteIndividualClient(FEventMessageTag Channel, FClientFinishedDownloadOnDemand& Context);     // [0xabb43bc] Final|Native|Protected|HasOutParms 
};

/// Class /Script/FabricRuntime.FabricInteractionTool
/// Size: 0x0198 (0x001550 - 0x0016E8)
class AFabricInteractionTool : public AFortWeapon
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5864;

public:
	SMember(FMulticastInlineDelegate)                  OnInteractionStateChanged                                   OFFSET(getStruct<T>, {0x1550, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnCablesGrabbed                                             OFFSET(getStruct<T>, {0x1560, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnCablesDropped                                             OFFSET(getStruct<T>, {0x1570, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnMetasoundGeneratorCrossfadeStarted                        OFFSET(getStruct<T>, {0x1580, 16, 0, 0})
	CMember(class USplineComponent*)                   SplineComponent                                             OFFSET(get<T>, {0x1590, 8, 0, 0})
	DMember(float)                                     MaxRange                                                    OFFSET(get<float>, {0x1598, 4, 0, 0})
	DMember(float)                                     MinDragAndDropTriggerTime                                   OFFSET(get<float>, {0x159C, 4, 0, 0})
	DMember(float)                                     FiringRate                                                  OFFSET(get<float>, {0x15A0, 4, 0, 0})
	DMember(float)                                     SplineEndForwardMultiplier                                  OFFSET(get<float>, {0x15A4, 4, 0, 0})
	DMember(float)                                     SplineStartForwardMultiplier                                OFFSET(get<float>, {0x15A8, 4, 0, 0})
	CMember(class UObject*)                            HoveredInteractable                                         OFFSET(get<T>, {0x15B0, 8, 0, 0})
	CMember(class USceneComponent*)                    HoveredInteractableHitComponent                             OFFSET(get<T>, {0x15B8, 8, 0, 0})
	CMember(class UObject*)                            PressedInteractable                                         OFFSET(get<T>, {0x15C0, 8, 0, 0})
	CMember(TWeakObjectPtr<UObject*>)                  LastPressedInteractable                                     OFFSET(get<T>, {0x15C8, 8, 0, 0})
	CMember(class USceneComponent*)                    PressedInteractableHitComponent                             OFFSET(get<T>, {0x15D0, 8, 0, 0})
	CMember(TWeakObjectPtr<AFortCreativeDeviceProp*>)  InteractableOwnerDevice                                     OFFSET(get<T>, {0x15D8, 8, 0, 0})
	DMember(float)                                     AccumulatedDragAndDropTriggerTime                           OFFSET(get<float>, {0x15E0, 4, 0, 0})
	SMember(FInteractionData)                          ServerInteractionData                                       OFFSET(getStruct<T>, {0x15E4, 12, 0, 0})
	DMember(bool)                                      bServerTriggerPressed                                       OFFSET(get<bool>, {0x1601, 1, 0, 0})
	DMember(bool)                                      bServerIsHoldingCable                                       OFFSET(get<bool>, {0x1603, 1, 0, 0})
	SMember(FInteractionSplinePoints)                  ServerSplinePoints                                          OFFSET(getStruct<T>, {0x1618, 96, 0, 0})
	DMember(float)                                     ServerContinuousInteractableValue                           OFFSET(get<float>, {0x1678, 4, 0, 0})


	/// Functions
	// Function /Script/FabricRuntime.FabricInteractionTool.UnholsterWeapon
	// void UnholsterWeapon();                                                                                                  // [0xabb4f04] Final|Native|Protected|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricInteractionTool.ServerSetTriggerPressed
	// void ServerSetTriggerPressed(bool bPressed);                                                                             // [0x9221624] Net|NetReliableNative|Event|Protected|NetServer 
	// Function /Script/FabricRuntime.FabricInteractionTool.ServerSetSplinePoints
	// void ServerSetSplinePoints(FInteractionSplinePoints SplinePoints);                                                       // [0xabb4b44] Net|NetReliableNative|Event|Protected|NetServer 
	// Function /Script/FabricRuntime.FabricInteractionTool.ServerSetIsHoldingCable
	// void ServerSetIsHoldingCable(bool bHoldingCable);                                                                        // [0xabb4ac0] Net|NetReliableNative|Event|Protected|NetServer 
	// Function /Script/FabricRuntime.FabricInteractionTool.ServerSetInteractionData
	// void ServerSetInteractionData(FInteractionData NewData);                                                                 // [0xabb4970] Net|NetReliableNative|Event|Protected|NetServer 
	// Function /Script/FabricRuntime.FabricInteractionTool.ServerSetContinuousInteractableValue
	// void ServerSetContinuousInteractableValue(float Value);                                                                  // [0x883f8ac] Net|Native|Event|Protected|NetServer 
	// Function /Script/FabricRuntime.FabricInteractionTool.ServerHandleFITFired
	// void ServerHandleFITFired();                                                                                             // [0xabb4958] Net|Native|Event|Protected|NetServer 
	// Function /Script/FabricRuntime.FabricInteractionTool.OnSplineUpdated
	// void OnSplineUpdated(EFabricInteractionToolStates NewInteractionState);                                                  // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricInteractionTool.OnRep_ServerTriggerPressed
	// void OnRep_ServerTriggerPressed();                                                                                       // [0xabb47fc] Final|Native|Protected 
	// Function /Script/FabricRuntime.FabricInteractionTool.OnRep_ServerIsHoldingCable
	// void OnRep_ServerIsHoldingCable();                                                                                       // [0xabb4798] Final|Native|Protected 
	// Function /Script/FabricRuntime.FabricInteractionTool.OnRep_ServerInteractionData
	// void OnRep_ServerInteractionData();                                                                                      // [0xabb4784] Final|Native|Protected 
	// Function /Script/FabricRuntime.FabricInteractionTool.OnRep_ServerContinuousInteractableValue
	// void OnRep_ServerContinuousInteractableValue();                                                                          // [0xabb4750] Final|Native|Protected 
	// Function /Script/FabricRuntime.FabricInteractionTool.OnMetasoundGeneratorCrossfadeStarted__DelegateSignature
	// void OnMetasoundGeneratorCrossfadeStarted__DelegateSignature(float CrossfadeSeconds);                                    // [0x18a39e4] MulticastDelegate|Public|Delegate 
	// Function /Script/FabricRuntime.FabricInteractionTool.OnInteractionStateChanged__DelegateSignature
	// void OnInteractionStateChanged__DelegateSignature(EFabricInteractionToolStates NewState, class AFortCreativeDeviceProp* Device); // [0x18a39e4] MulticastDelegate|Public|Delegate 
	// Function /Script/FabricRuntime.FabricInteractionTool.OnCableHeldStateChanged__DelegateSignature
	// void OnCableHeldStateChanged__DelegateSignature(class AFortCreativeDeviceProp* Device);                                  // [0x18a39e4] MulticastDelegate|Public|Delegate 
	// Function /Script/FabricRuntime.FabricInteractionTool.IsRunningOnOwningClient
	// bool IsRunningOnOwningClient();                                                                                          // [0xabb4304] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricInteractionTool.IsHoldingCables
	// bool IsHoldingCables();                                                                                                  // [0xabb42ec] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/FabricRuntime.FabricInteractionTool.HandleMetasoundGeneratorCrossfade
	// void HandleMetasoundGeneratorCrossfade(float CrossfadeSeconds);                                                          // [0xabb41c8] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricInteractionTool.GetPressedInteractable
	// class UObject* GetPressedInteractable();                                                                                 // [0x9fe028c] Final|Native|Protected|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricInteractionTool.GetHoveredInteractableType
	// EFabricInteractableType GetHoveredInteractableType();                                                                    // [0xabb3e40] Final|Native|Protected|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricInteractionTool.GetHoveredInteractableHitComponent
	// class USceneComponent* GetHoveredInteractableHitComponent();                                                             // [0xabb3e28] Final|Native|Protected|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricInteractionTool.GetFabricInteractionToolState
	// EFabricInteractionToolStates GetFabricInteractionToolState();                                                            // [0xabb3e10] Final|Native|Protected|BlueprintCallable|BlueprintPure 
	// Function /Script/FabricRuntime.FabricInteractionTool.GetContinuousStateValue
	// int32_t GetContinuousStateValue();                                                                                       // [0xabb3d7c] Final|Native|Protected|BlueprintCallable|BlueprintPure 
	// Function /Script/FabricRuntime.FabricInteractionTool.GetContinuousMovementValue
	// float GetContinuousMovementValue();                                                                                      // [0xabb3d54] Final|Native|Protected|BlueprintCallable|BlueprintPure 
	// Function /Script/FabricRuntime.FabricInteractionTool.GetContinuousInteractionDirection
	// EFabricContinuousInteractionDirection GetContinuousInteractionDirection();                                               // [0xabb3cbc] Final|Native|Protected|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricInteractionTool.GetContinuousInteractableValueNormalized
	// float GetContinuousInteractableValueNormalized();                                                                        // [0xabb3c78] Final|Native|Protected|BlueprintCallable|BlueprintPure 
	// Function /Script/FabricRuntime.FabricInteractionTool.DeactiveWeaponAndState
	// void DeactiveWeaponAndState();                                                                                           // [0x883d5c4] Native|Protected|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricInteractionTool.ClientStopInteracting
	// void ClientStopInteracting();                                                                                            // [0x887dcc8] Net|NetReliableNative|Event|Protected|NetClient 
	// Function /Script/FabricRuntime.FabricInteractionTool.ClientDeactiveWeaponAndState
	// void ClientDeactiveWeaponAndState();                                                                                     // [0x841db5c] Net|NetReliableNative|Event|Protected|NetClient 
};

/// Class /Script/FabricRuntime.FabricMeshModifierBase
/// Size: 0x0008 (0x000328 - 0x000330)
class UFabricMeshModifierBase : public UFabricModulatable
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 816;

public:
	CMember(EFabricCloneTransformBehavior)             CloneBehavior                                               OFFSET(get<T>, {0x328, 1, 0, 0})
};

/// Class /Script/FabricRuntime.FabricMeshModifierTranslate
/// Size: 0x0018 (0x000330 - 0x000348)
class UFabricMeshModifierTranslate : public UFabricMeshModifierBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 840;

public:
	SMember(FVector)                                   PositionOffset                                              OFFSET(getStruct<T>, {0x330, 24, 0, 0})
};

/// Class /Script/FabricRuntime.FabricMeshModifierRotate
/// Size: 0x0018 (0x000330 - 0x000348)
class UFabricMeshModifierRotate : public UFabricMeshModifierBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 840;

public:
	SMember(FRotator)                                  RotationAmount                                              OFFSET(getStruct<T>, {0x330, 24, 0, 0})
};

/// Class /Script/FabricRuntime.FabricMeshModifierScale
/// Size: 0x0018 (0x000330 - 0x000348)
class UFabricMeshModifierScale : public UFabricMeshModifierBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 840;

public:
	SMember(FVector)                                   ScaleFactor                                                 OFFSET(getStruct<T>, {0x330, 24, 0, 0})
};

/// Class /Script/FabricRuntime.FabricMeshModifierClone
/// Size: 0x0028 (0x000330 - 0x000358)
class UFabricMeshModifierClone : public UFabricMeshModifierBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 856;

public:
	DMember(int32_t)                                   CloneCount                                                  OFFSET(get<int32_t>, {0x330, 4, 0, 0})
	SMember(FVector)                                   PerCloneTranslation                                         OFFSET(getStruct<T>, {0x338, 24, 0, 0})
	DMember(bool)                                      bCentered                                                   OFFSET(get<bool>, {0x350, 1, 0, 0})
};

/// Class /Script/FabricRuntime.FabricMeshModifierRandomize
/// Size: 0x0068 (0x000330 - 0x000398)
class UFabricMeshModifierRandomize : public UFabricMeshModifierBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 920;

public:
	DMember(float)                                     LocationRandLimit                                           OFFSET(get<float>, {0x330, 4, 0, 0})
	DMember(float)                                     RotationRandLimit                                           OFFSET(get<float>, {0x334, 4, 0, 0})
	DMember(float)                                     ScaleRandLimit                                              OFFSET(get<float>, {0x338, 4, 0, 0})
	SMember(FVector)                                   LocationRandRange                                           OFFSET(getStruct<T>, {0x340, 24, 0, 0})
	SMember(FVector)                                   RotationRandRange                                           OFFSET(getStruct<T>, {0x358, 24, 0, 0})
	SMember(FVector)                                   ScaleRandRangeAdditive                                      OFFSET(getStruct<T>, {0x370, 24, 0, 0})
	DMember(float)                                     ScaleRandRangeRangeBase                                     OFFSET(get<float>, {0x388, 4, 0, 0})
	DMember(bool)                                      bUniformScale                                               OFFSET(get<bool>, {0x38C, 1, 0, 0})
	SMember(FRandomStream)                             RandomStream                                                OFFSET(getStruct<T>, {0x390, 8, 0, 0})
};

/// Class /Script/FabricRuntime.FabricMeshTreeNode
/// Size: 0x0080 (0x000028 - 0x0000A8)
class UFabricMeshTreeNode : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	CMember(class UFabricMeshModifierBase*)            MeshModifier                                                OFFSET(get<T>, {0x28, 8, 0, 0})
	SMember(FFabricMeshProviderMeshReferenceParams)    Params                                                      OFFSET(getStruct<T>, {0x30, 40, 0, 0})
	SMember(FFabricMeshProviderMeshReference)          MeshProviderReference                                       OFFSET(getStruct<T>, {0x58, 56, 0, 0})
	CMember(TArray<class UFabricMeshTreeNode*>)        Children                                                    OFFSET(get<T>, {0x90, 16, 0, 0})
	DMember(uint32_t)                                  LastCalculatedChecksum                                      OFFSET(get<uint32_t>, {0xA0, 4, 0, 0})
	DMember(bool)                                      bAllowChecksumCalculation                                   OFFSET(get<bool>, {0xA4, 1, 0, 0})


	/// Functions
	// Function /Script/FabricRuntime.FabricMeshTreeNode.Reset
	// void Reset();                                                                                                            // [0xabb7ac4] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMeshTreeNode.GenerateMeshInstanceReferences
	// TArray<FFabricMeshInstanceReference> GenerateMeshInstanceReferences();                                                   // [0xabb6cd4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricMeshTreeNode.CopyProperties
	// void CopyProperties(class UFabricMeshTreeNode* Other);                                                                   // [0xabb6a8c] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/FabricRuntime.FabricMeshProviderBase
/// Size: 0x0058 (0x000028 - 0x000080)
class UFabricMeshProviderBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FFabricMeshProviderMeshReference)          ReferenceMesh                                               OFFSET(getStruct<T>, {0x28, 56, 0, 0})
	CMember(TArray<FTransform>)                        InstanceMeshes                                              OFFSET(get<T>, {0x60, 16, 0, 0})
	DMember(float)                                     CurrentCableFloatValue                                      OFFSET(get<float>, {0x70, 4, 0, 0})
	DMember(float)                                     CurrentCableFloatDirection                                  OFFSET(get<float>, {0x74, 4, 0, 0})
	DMember(bool)                                      bCurrentCableFloatDirty                                     OFFSET(get<bool>, {0x78, 1, 0, 0})


	/// Functions
	// Function /Script/FabricRuntime.FabricMeshProviderBase.SetReferenceMesh
	// void SetReferenceMesh(FFabricMeshProviderMeshReference& InMesh);                                                         // [0xabb8048] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/FabricRuntime.FabricMetaSoundPatchWrapper
/// Size: 0x0380 (0x000328 - 0x0006A8)
class UFabricMetaSoundPatchWrapper : public UFabricModulatable
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1704;

public:
	SMember(FName)                                     EnabledStateInputName                                       OFFSET(getStruct<T>, {0x328, 4, 0, 0})
	CMember(TWeakObjectPtr<UMetaSoundPatch*>)          MetaSoundPatch                                              OFFSET(get<T>, {0x330, 32, 0, 0})
	CMember(TMap<FString, FName>)                      UserOptionsToNodeInputs                                     OFFSET(get<T>, {0x350, 80, 0, 0})
	CMember(TArray<FFabricMetaSoundPatchWrapper_PerPlatformBoolInputTuning>) PerPlatformInputBools                 OFFSET(get<T>, {0x3A0, 16, 0, 0})
	CMember(TArray<FFabricMetaSoundPatchWrapper_PerPlatformIntInputTuning>) PerPlatformInputInts                   OFFSET(get<T>, {0x3B0, 16, 0, 0})
	CMember(TArray<FFabricMetaSoundPatchWrapper_PerPlatformFloatInputTuning>) PerPlatformInputFloats               OFFSET(get<T>, {0x3C0, 16, 0, 0})
	CMember(TArray<FFabricMetaSoundDirectInputInfo>)   DirectInputs                                                OFFSET(get<T>, {0x3D0, 16, 0, 0})
	SMember(FFabricMetaSoundPatchWrapperBinding)       SimpleSignalOutputBinding                                   OFFSET(getStruct<T>, {0x3E0, 72, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnSimpleSignalBindingUpdate                                 OFFSET(getStruct<T>, {0x428, 16, 0, 0})
	SMember(FName)                                     VisibleInputParamName                                       OFFSET(getStruct<T>, {0x438, 4, 0, 0})
	SMember(FName)                                     AudibleInputParamName                                       OFFSET(getStruct<T>, {0x43C, 4, 0, 0})
	DMember(bool)                                      bCanConsumeVisibleFlag                                      OFFSET(get<bool>, {0x440, 1, 0, 0})
	DMember(bool)                                      bCanConsumeAudibleFlag                                      OFFSET(get<bool>, {0x441, 1, 0, 0})
	DMember(bool)                                      bIsVisible                                                  OFFSET(get<bool>, {0x442, 1, 0, 0})
	DMember(bool)                                      bIsAudible                                                  OFFSET(get<bool>, {0x443, 1, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnMetaSoundOutputIntChangedBatch                            OFFSET(getStruct<T>, {0x4B8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnMetaSoundOutputFloatChangedBatch                          OFFSET(getStruct<T>, {0x4C8, 16, 0, 0})
	CMember(class UFabricMetaSoundManagerComponent*)   CurrentManager                                              OFFSET(get<T>, {0x4D8, 8, 0, 0})
	CMember(TWeakObjectPtr<UFabricMetaSoundTickSubsystem*>) TickSubsystem                                          OFFSET(get<T>, {0x4E0, 8, 0, 0})
	SMember(FFabricMetaSoundNodeInfo)                  CurrentNode                                                 OFFSET(getStruct<T>, {0x4E8, 240, 0, 0})
	CMember(TWeakObjectPtr<AActor*>)                   PositionalProxyActor                                        OFFSET(get<T>, {0x5D8, 8, 0, 0})
	CMember(TWeakObjectPtr<UAudioComponent*>)          CurrentAudioComponent                                       OFFSET(get<T>, {0x600, 8, 0, 0})
	CMember(TWeakObjectPtr<UAudioComponent*>)          NewAudioComponent                                           OFFSET(get<T>, {0x608, 8, 0, 0})
	SMember(FName)                                     CombinerMetaSoundType                                       OFFSET(getStruct<T>, {0x610, 4, 0, 0})
	SMember(FName)                                     AnalyzerMetaSoundType                                       OFFSET(getStruct<T>, {0x614, 4, 0, 0})
	CMember(TArray<FFabricMetaSoundRuntimeInputInfo>)  MetaSoundRuntimeInputInfos                                  OFFSET(get<T>, {0x618, 16, 0, 0})
	CMember(TArray<class UFabricMetaSoundPatchWrapper*>) ConnectedInputWrappers                                    OFFSET(get<T>, {0x628, 16, 0, 0})
	CMember(TArray<class UFabricMetaSoundPatchWrapper*>) PendingInputWrappers                                      OFFSET(get<T>, {0x638, 16, 0, 0})
	CMember(TArray<class UFabricMetaSoundPatchWrapper*>) PendingOutputWrappers                                     OFFSET(get<T>, {0x648, 16, 0, 0})
	CMember(TArray<FMetaSoundCombinerNodeHandle>)      CombinersInUse                                              OFFSET(get<T>, {0x658, 16, 0, 0})
	CMember(TArray<class UFabricMetaSoundPatchWrapper*>) ConnectedOutputWrappers                                   OFFSET(get<T>, {0x668, 16, 0, 0})
	CMember(EFabricMetaSoundPatchWrapperQuality)       PatchWrapperQuality                                         OFFSET(get<T>, {0x678, 1, 0, 0})
	CMember(class UMetaSoundPatch*)                    LoadedMetaSoundPatch                                        OFFSET(get<T>, {0x690, 8, 0, 0})


	/// Functions
	// Function /Script/FabricRuntime.FabricMetaSoundPatchWrapper.SetStringInput
	// void SetStringInput(FName& MetaSoundInputName, FString Value);                                                           // [0xabbae38] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundPatchWrapper.SetRunsOnServer
	// void SetRunsOnServer(bool bAllowRunOnServer);                                                                            // [0xabbadb8] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundPatchWrapper.SetPositionalProxyActor
	// void SetPositionalProxyActor(class AActor* InLocationProxyActor);                                                        // [0xabbacb8] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundPatchWrapper.SetNodeEnabled
	// void SetNodeEnabled(bool bEnabled);                                                                                      // [0xabbabe4] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundPatchWrapper.SetIntInput
	// void SetIntInput(FName& MetaSoundInputName, int32_t Value);                                                              // [0xabbaa14] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundPatchWrapper.SetFloatInput
	// void SetFloatInput(FName& MetaSoundInputName, float Value);                                                              // [0xabba908] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundPatchWrapper.SetEnumInput
	// void SetEnumInput(FName& MetaSoundInputName, char Value);                                                                // [0xabba7f8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundPatchWrapper.SetBoolInput
	// void SetBoolInput(FName& MetaSoundInputName, bool bValue);                                                               // [0xabba6e8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundPatchWrapper.RemoveFromCurrentGraph
	// void RemoveFromCurrentGraph();                                                                                           // [0xabba538] Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundPatchWrapper.OnMetaSoundOutputValueChanged
	// void OnMetaSoundOutputValueChanged(FName OutputName, FMetaSoundOutput& MetaSoundOutput);                                 // [0xabba27c] Native|Protected|HasOutParms 
	// Function /Script/FabricRuntime.FabricMetaSoundPatchWrapper.OnMetaSoundOutputChanged
	// void OnMetaSoundOutputChanged(FName OutputName, FMetaSoundOutput& Output);                                               // [0xabba198] Final|Native|Private|HasOutParms 
	// Function /Script/FabricRuntime.FabricMetaSoundPatchWrapper.OnMetasoundManagerEndPlay
	// void OnMetasoundManagerEndPlay();                                                                                        // [0xabba364] Final|Native|Protected 
	// Function /Script/FabricRuntime.FabricMetaSoundPatchWrapper.OnConnectedModulatorEnable
	// void OnConnectedModulatorEnable(class UFabricMetaSoundPatchWrapper* EnabledPatchWrapper);                                // [0xabb9d04] Final|Native|Private 
	// Function /Script/FabricRuntime.FabricMetaSoundPatchWrapper.OnAddedToManagerGraph
	// void OnAddedToManagerGraph(class UFabricMetaSoundManagerComponent* Manager);                                             // [0xabb9c80] Native|Event|Protected|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricMetaSoundPatchWrapper.NeedsParameterPackUpdate
	// void NeedsParameterPackUpdate();                                                                                         // [0xabb9c6c] Final|Native|Protected|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundPatchWrapper.NeedsOutputWatcherUpdate
	// void NeedsOutputWatcherUpdate();                                                                                         // [0xabb9c58] Final|Native|Protected|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundPatchWrapper.NeedsGeneratorHandleUpdate
	// void NeedsGeneratorHandleUpdate();                                                                                       // [0xabb9c44] Final|Native|Protected|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundPatchWrapper.GetRunsOnServer
	// bool GetRunsOnServer();                                                                                                  // [0xabb9bc0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricMetaSoundPatchWrapper.GetNodeEnabled
	// bool GetNodeEnabled();                                                                                                   // [0xabb9ba8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricMetaSoundPatchWrapper.GetMusicClock
	// class UMusicClockComponent* GetMusicClock();                                                                             // [0xabb9b88] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricMetaSoundPatchWrapper.GetMetaSoundInputNames
	// TSet<FName> GetMetaSoundInputNames();                                                                                    // [0xabb9ac0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricMetaSoundPatchWrapper.AddToManagerGraph
	// void AddToManagerGraph(class UFabricMetaSoundManagerComponent* Manager);                                                 // [0x66639e8] Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundPatchWrapper.AddToGraphOnFirstConnect
	// bool AddToGraphOnFirstConnect();                                                                                         // [0x8e91164] Native|Event|Protected|BlueprintEvent 
};

/// Class /Script/FabricRuntime.FabricMetaSoundDrumPlayerPatchWrapper
/// Size: 0x00E0 (0x0006A8 - 0x000788)
class UFabricMetaSoundDrumPlayerPatchWrapper : public UFabricMetaSoundPatchWrapper
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1928;

public:
	SMember(FName)                                     PitchSampleInputName                                        OFFSET(getStruct<T>, {0x6B0, 4, 0, 0})
	SMember(FName)                                     SlotKitInputName                                            OFFSET(getStruct<T>, {0x6B4, 4, 0, 0})
	CMember(TArray<FString>)                           PitchSampleParams                                           OFFSET(get<T>, {0x6B8, 16, 0, 0})
	CMember(TArray<FString>)                           SlotLinkParams                                              OFFSET(get<T>, {0x6C8, 16, 0, 0})
	CMember(TArray<FString>)                           SlotUnlinkedKitParams                                       OFFSET(get<T>, {0x6D8, 16, 0, 0})
	SMember(FString)                                   CurrentKitParam                                             OFFSET(getStruct<T>, {0x6E8, 16, 0, 0})
	DMember(int32_t)                                   NumSamplesPerKit                                            OFFSET(get<int32_t>, {0x6F8, 4, 0, 0})
	CMember(TArray<FFabricMetaSoundPatchWrapperBinding>) DrumAmplitudes                                            OFFSET(get<T>, {0x700, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnFabricMetaSoundDrumPlayerPatchDrumAmplitudesUpdate        OFFSET(getStruct<T>, {0x710, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnFabricMetaSoundDrumPlayerSampleBanksLoaded                OFFSET(getStruct<T>, {0x720, 16, 0, 0})
	CMember(TArray<class UObject*>)                    CurrentKitSamples                                           OFFSET(get<T>, {0x778, 16, 0, 0})


	/// Functions
	// Function /Script/FabricRuntime.FabricMetaSoundDrumPlayerPatchWrapper.SlotUnlinkedKitParamChanged
	// void SlotUnlinkedKitParamChanged(int32_t PitchSampleIndex, int32_t Value);                                               // [0xabb83c0] Final|Native|Private 
	// Function /Script/FabricRuntime.FabricMetaSoundDrumPlayerPatchWrapper.SlotLinkedParamChanged
	// void SlotLinkedParamChanged(int32_t PitchSampleIndex, bool Value);                                                       // [0xabb82fc] Final|Native|Private 
	// Function /Script/FabricRuntime.FabricMetaSoundDrumPlayerPatchWrapper.PitchSampleParamChanged
	// void PitchSampleParamChanged(int32_t PitchSampleIndex, int32_t Value);                                                   // [0xabb7414] Final|Native|Private 
	// Function /Script/FabricRuntime.FabricMetaSoundDrumPlayerPatchWrapper.LoadDrumPlayerSampleBanks
	// void LoadDrumPlayerSampleBanks(TArray<TWeakObjectPtr<UFabricMetasoundDrumPlayerSampleBankAsset*>>& SampleBankArray, TSet<int32_t>& KitNumbersToLoad); // [0xabb71b8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundDrumPlayerPatchWrapper.KitIndexChanged
	// void KitIndexChanged(FName& Param, int32_t Value);                                                                       // [0xabb70ac] Final|Native|Private|HasOutParms 
};

/// Class /Script/FabricRuntime.FabricMetaSoundWetDryPatchWrapper
/// Size: 0x00A0 (0x0006A8 - 0x000748)
class UFabricMetaSoundWetDryPatchWrapper : public UFabricMetaSoundPatchWrapper
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1864;

public:
	SMember(FFabricMetaSoundPatchWrapperWetDryOutputBinding) WetDryOutputBinding                                   OFFSET(getStruct<T>, {0x6A8, 144, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnWetDryOutputSignalUpdate                                  OFFSET(getStruct<T>, {0x738, 16, 0, 0})
};

/// Class /Script/FabricRuntime.FabricMetaSoundEchoPatchWrapper
/// Size: 0x0018 (0x000748 - 0x000760)
class UFabricMetaSoundEchoPatchWrapper : public UFabricMetaSoundWetDryPatchWrapper
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1888;

public:
	DMember(bool)                                      bAllowWetSignalWaveformTexture                              OFFSET(get<bool>, {0x748, 1, 0, 0})
	DMember(bool)                                      bAllowDrySignalWaveformTexture                              OFFSET(get<bool>, {0x749, 1, 0, 0})
	CMember(class UFabricWaveformTexture*)             WetSignalWaveformTexture                                    OFFSET(get<T>, {0x750, 8, 0, 0})
	CMember(class UFabricWaveformTexture*)             DrySignalWaveformTexture                                    OFFSET(get<T>, {0x758, 8, 0, 0})
};

/// Class /Script/FabricRuntime.FabricMetaSoundInstrumentPlayerPatchWrapper
/// Size: 0x00E0 (0x0006A8 - 0x000788)
class UFabricMetaSoundInstrumentPlayerPatchWrapper : public UFabricMetaSoundPatchWrapper
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1928;

public:
	SMember(FMulticastInlineDelegate)                  OnFFTResultsUpdated                                         OFFSET(getStruct<T>, {0x6A8, 16, 0, 0})
	SMember(FFabricMetaSoundPatchWrapperBinding)       FFTAnalysisOutputBinding                                    OFFSET(getStruct<T>, {0x6B8, 72, 0, 0})
	DMember(int32_t)                                   FFTCPDStartIndex                                            OFFSET(get<int32_t>, {0x700, 4, 0, 0})
	DMember(int32_t)                                   FFTLength                                                   OFFSET(get<int32_t>, {0x704, 4, 0, 0})
	CMember(TWeakObjectPtr<UFusionPatch*>)             CurrentFusionPatch                                          OFFSET(get<T>, {0x780, 8, 0, 0})


	/// Functions
	// Function /Script/FabricRuntime.FabricMetaSoundInstrumentPlayerPatchWrapper.SetFusionPatch
	// void SetFusionPatch(class UFusionPatch* FusionPatch);                                                                    // [0xabb7d24] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundInstrumentPlayerPatchWrapper.DriveFFTDataOnPrimitive
	// void DriveFFTDataOnPrimitive(class UPrimitiveComponent* Primitive);                                                      // [0xabb6b0c] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/FabricRuntime.FabricMetaSoundModulatorPatchWrapper
/// Size: 0x0030 (0x0006A8 - 0x0006D8)
class UFabricMetaSoundModulatorPatchWrapper : public UFabricMetaSoundPatchWrapper
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1752;

public:
	SMember(FName)                                     IntModulationOutputName                                     OFFSET(getStruct<T>, {0x6A8, 4, 0, 0})
	SMember(FName)                                     FloatModulationOutputName                                   OFFSET(getStruct<T>, {0x6AC, 4, 0, 0})
	SMember(FName)                                     BoolModulationOutputName                                    OFFSET(getStruct<T>, {0x6B0, 4, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPatchWrapperVisibilityChanged                             OFFSET(getStruct<T>, {0x6B8, 16, 0, 0})
	CMember(class UPlaylistUserOptionBase*)            CurrentUserOption                                           OFFSET(get<T>, {0x6C8, 8, 0, 0})
	CMember(class UFabricMetaSoundUserOption*)         MetaSoundUserOption                                         OFFSET(get<T>, {0x6D0, 8, 0, 0})


	/// Functions
	// Function /Script/FabricRuntime.FabricMetaSoundModulatorPatchWrapper.SetUserOption
	// void SetUserOption(class UPlaylistUserOptionBase* UserOption);                                                           // [0xabbb03c] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundModulatorPatchWrapper.ConnectToInput
	// bool ConnectToInput(FFabricMetaSoundNodeInfo& Node, FName InputName, FName InputType);                                   // [0xabb9824] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/FabricRuntime.FabricMetaSoundLFOPatchWrapper
/// Size: 0x0018 (0x0006D8 - 0x0006F0)
class UFabricMetaSoundLFOPatchWrapper : public UFabricMetaSoundModulatorPatchWrapper
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1776;

public:
	CMember(class UFabricFloatProviderWave*)           LFOFloatProvider                                            OFFSET(get<T>, {0x6D8, 8, 0, 0})
	SMember(FName)                                     FreePhaseStartName                                          OFFSET(getStruct<T>, {0x6E0, 4, 0, 0})
	SMember(FName)                                     RandomSeedInputName                                         OFFSET(getStruct<T>, {0x6E4, 4, 0, 0})


	/// Functions
	// Function /Script/FabricRuntime.FabricMetaSoundLFOPatchWrapper.UpdateRandomSeed
	// void UpdateRandomSeed();                                                                                                 // [0xabb89f8] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/FabricRuntime.FabricMetaSoundManagerComponent
/// Size: 0x0550 (0x0000A0 - 0x0005F0)
class UFabricMetaSoundManagerComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1520;

public:
	CMember(TWeakObjectPtr<UMetaSoundPatch*>)          HarmonixMusicProviderPatch                                  OFFSET(get<T>, {0xA8, 32, 0, 0})
	SMember(FFabricMetaSoundUtilityPatches)            MidiStreamUtilityPatches                                    OFFSET(getStruct<T>, {0xC8, 136, 0, 0})
	SMember(FFabricMetaSoundUtilityPatches)            AudioUtilityPatches                                         OFFSET(getStruct<T>, {0x150, 136, 0, 0})
	SMember(FName)                                     MusicProviderVolumeName                                     OFFSET(getStruct<T>, {0x1D8, 4, 0, 0})
	SMember(FName)                                     MusicProviderPlayTriggerName                                OFFSET(getStruct<T>, {0x1DC, 4, 0, 0})
	SMember(FName)                                     MusicProviderRestartTriggerName                             OFFSET(getStruct<T>, {0x1E0, 4, 0, 0})
	SMember(FName)                                     MusicProviderSeekTriggerName                                OFFSET(getStruct<T>, {0x1E4, 4, 0, 0})
	SMember(FName)                                     MusicProviderPauseTriggerName                               OFFSET(getStruct<T>, {0x1E8, 4, 0, 0})
	SMember(FName)                                     MusicProviderContinueTriggerName                            OFFSET(getStruct<T>, {0x1EC, 4, 0, 0})
	SMember(FName)                                     MusicProviderStopTriggerName                                OFFSET(getStruct<T>, {0x1F0, 4, 0, 0})
	SMember(FName)                                     MusicProviderTempoName                                      OFFSET(getStruct<T>, {0x1F4, 4, 0, 0})
	SMember(FName)                                     MusicProviderSpeedName                                      OFFSET(getStruct<T>, {0x1F8, 4, 0, 0})
	SMember(FName)                                     MusicProviderRootNoteName                                   OFFSET(getStruct<T>, {0x1FC, 4, 0, 0})
	SMember(FName)                                     MusicProviderScaleName                                      OFFSET(getStruct<T>, {0x200, 4, 0, 0})
	SMember(FName)                                     MusicProviderSeekTargetName                                 OFFSET(getStruct<T>, {0x204, 4, 0, 0})
	SMember(FName)                                     MusicProviderTimeSigNumName                                 OFFSET(getStruct<T>, {0x208, 4, 0, 0})
	SMember(FName)                                     MusicProviderTimeSigDenomName                               OFFSET(getStruct<T>, {0x20C, 4, 0, 0})
	DMember(float)                                     CrossfadeSeconds                                            OFFSET(get<float>, {0x210, 4, 0, 0})
	DMember(float)                                     RebuildTimeOutSeconds                                       OFFSET(get<float>, {0x214, 4, 0, 0})
	DMember(float)                                     BlockRateOverride                                           OFFSET(get<float>, {0x218, 4, 0, 0})
	SMember(FName)                                     QualityOverride                                             OFFSET(getStruct<T>, {0x21C, 4, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnMetasoundGeneratorCrossfadeStarted                        OFFSET(getStruct<T>, {0x238, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnMusicEventPriorityChanged                                 OFFSET(getStruct<T>, {0x2C0, 16, 0, 0})
	CMember(TArray<FFabricSignificanceBasedUpdateBucketRuntime>) SignificanceRuntimeBuckets                        OFFSET(get<T>, {0x2E0, 16, 0, 0})
	CMember(class UFabricSignificanceAsset*)           SignificanceBasedUpdate                                     OFFSET(get<T>, {0x2F0, 8, 0, 0})
	DMember(float)                                     InitialCooldownTimeInSeconds                                OFFSET(get<float>, {0x2F8, 4, 0, 0})
	CMember(class UMetaSoundSourceBuilder*)            SourceBuilder                                               OFFSET(get<T>, {0x300, 8, 0, 0})
	CMember(class UMusicClockComponent*)               MusicClock                                                  OFFSET(get<T>, {0x308, 8, 0, 0})
	CMember(TArray<class UAudioComponent*>)            PlaybackAudioComponents                                     OFFSET(get<T>, {0x310, 16, 0, 0})
	CMember(TArray<class UMetasoundOfflinePlayerComponent*>) ServerPlaybackComponents                              OFFSET(get<T>, {0x320, 16, 0, 0})
	CMember(TWeakObjectPtr<ABuildingActor*>)           StartMetasoundLockDevice                                    OFFSET(get<T>, {0x380, 8, 0, 0})
	SMember(FFabricMetaSoundNodeInfo)                  HarmonixMusicProviderNode                                   OFFSET(getStruct<T>, {0x388, 240, 0, 0})
	SMember(FMetaSoundBuilderNodeOutputHandle)         OnPlayNodeOutput                                            OFFSET(getStruct<T>, {0x478, 32, 0, 0})
	SMember(FMetaSoundBuilderNodeInputHandle)          OnFinishedNodeInput                                         OFFSET(getStruct<T>, {0x498, 32, 0, 0})
	CMember(TArray<FMetaSoundBuilderNodeInputHandle>)  AudioOutNodeInputs                                          OFFSET(get<T>, {0x4B8, 16, 0, 0})
	CMember(TMap<UMetaSoundPatch*, FFabricMetaSoundNodePool>) FreeMetaSoundNodes                                   OFFSET(get<T>, {0x500, 80, 0, 0})
	CMember(TMap<FName, FFabricLoadedUtilityPatches>)  UtilityNodeTypesToPatches                                   OFFSET(get<T>, {0x550, 80, 0, 0})
	DMember(bool)                                      bGraphDirty                                                 OFFSET(get<bool>, {0x5B0, 1, 0, 0})
	DMember(bool)                                      bIsAudioless                                                OFFSET(get<bool>, {0x5B1, 1, 0, 0})
	DMember(bool)                                      bHasCompletedInitialCooldown                                OFFSET(get<bool>, {0x5B2, 1, 0, 0})
	CMember(EFabricMetasoundPlayState)                 CurrentPlayState                                            OFFSET(get<T>, {0x5B3, 1, 0, 0})
	CMember(EFabricMetasoundPlayState)                 PlayStateAfterRebuild                                       OFFSET(get<T>, {0x5B4, 1, 0, 0})
	CMember(EJamFabricSyncType)                        JamSyncType                                                 OFFSET(get<T>, {0x5B5, 1, 0, 0})
	CMember(EFabricMetasoundMusicEventPriority)        MusicEventPriority                                          OFFSET(get<T>, {0x5B6, 1, 0, 0})
	SMember(FName)                                     ClientCurrentAudibleMusicEventGroup                         OFFSET(getStruct<T>, {0x5B8, 4, 0, 0})
	SMember(FGameplayTag)                              AboveEmotesTag                                              OFFSET(getStruct<T>, {0x5BC, 4, 0, 0})
	SMember(FGameplayTag)                              BelowEmotesTag                                              OFFSET(getStruct<T>, {0x5C0, 4, 0, 0})
	DMember(float)                                     ReplicatedReceivedSignalBufferDuration                      OFFSET(get<float>, {0x5C4, 4, 0, 0})


	/// Functions
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.UnregisterAsAudible
	// void UnregisterAsAudible(class AActor* Device);                                                                          // [0xabb8510] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.StopMetasound
	// bool StopMetasound(class ABuildingActor* InStartMetasoundLockDevice);                                                    // [0xabb8480] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.ShouldSeekToStartOnGameReset
	// bool ShouldSeekToStartOnGameReset();                                                                                     // [0xabb82e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.SetTimeSignature
	// void SetTimeSignature(int32_t Numerator, int32_t Denominator);                                                           // [0xabb8220] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.SetTempo
	// void SetTempo(float Tempo);                                                                                              // [0xabb81a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.SetSpeed
	// void SetSpeed(float Speed);                                                                                              // [0xabb8120] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.SetMusicKey
	// void SetMusicKey(EMusicKey Key, EMusicKeyMode Mode);                                                                     // [0xabb7f84] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.SetMusicEventPriority
	// void SetMusicEventPriority(EFabricMetasoundMusicEventPriority InMusicEventPriority);                                     // [0xabb7ee8] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.SetMusicClock
	// void SetMusicClock(class UMusicClockComponent* MusicClockComponent);                                                     // [0xabb7e68] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.SetCurrentJamSyncType
	// void SetCurrentJamSyncType(EJamFabricSyncType& InJamSyncType);                                                           // [0xabb7c98] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.SetAudioComponents
	// void SetAudioComponents(TArray<UAudioComponent*> AudioComponents);                                                       // [0xabb7bec] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.SeekToTimestamp
	// void SeekToTimestamp(FMusicTimestamp& Timestamp);                                                                        // [0xabb7b58] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.SeekToMs
	// void SeekToMs(float Ms);                                                                                                 // [0xabb7ad8] Final|Native|Public  
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.RegisterAsAudible
	// void RegisterAsAudible(class AActor* Device, FName& AudibleEventGroup);                                                  // [0xabb7564] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.PlayMetasound
	// bool PlayMetasound(class ABuildingActor* InStartMetasoundLockDevice);                                                    // [0xabb74d4] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.PauseMetasound
	// bool PauseMetasound();                                                                                                   // [0xabb73f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.OnGeneratorJustStarted
	// void OnGeneratorJustStarted(int32_t ComponentIndex);                                                                     // [0xabb7370] Final|Native|Private 
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.NotifyGraphChanged
	// void NotifyGraphChanged();                                                                                               // [0xabb7358] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.InvalidateMetasoundGeneratorHandle
	// void InvalidateMetasoundGeneratorHandle();                                                                               // [0xabb7098] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.GetMusicEventTag
	// FGameplayTag GetMusicEventTag(EFabricMetasoundMusicEventPriority InMusicEventPriority);                                  // [0xabb7004] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.GetMusicEventPriority
	// EFabricMetasoundMusicEventPriority GetMusicEventPriority();                                                              // [0x6661bf8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.GetMusicClock
	// class UMusicClockComponent* GetMusicClock();                                                                             // [0x3ee2238] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.GetMetasoundOutputNodeName
	// FName GetMetasoundOutputNodeName(FName NodeName, FName OutputName);                                                      // [0xabb6f4c] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.GetMetaSoundNodeForWrapper
	// FFabricMetaSoundNodeInfo GetMetaSoundNodeForWrapper(class UFabricMetaSoundPatchWrapper* PatchWrapper);                   // [0xabb6dd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.GetMetasoundInputNodeName
	// FName GetMetasoundInputNodeName(FName NodeName, FName InputName);                                                        // [0xabb6e94] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.GetCurrentPlaystate
	// EFabricMetasoundPlayState GetCurrentPlaystate();                                                                         // [0xabb6db8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.GetCurrentPlaybackAudioComponent
	// class UAudioComponent* GetCurrentPlaybackAudioComponent();                                                               // [0xabb6d98] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.GetCurrentMusicEventTag
	// FGameplayTag GetCurrentMusicEventTag();                                                                                  // [0xabb6d70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.GetCurrentJamSyncType
	// EJamFabricSyncType GetCurrentJamSyncType();                                                                              // [0x6661c10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.GetCurrentClientAudibleMusicEventGroup
	// FName GetCurrentClientAudibleMusicEventGroup();                                                                          // [0x3ebac10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.GetBuilder
	// class UMetaSoundSourceBuilder* GetBuilder();                                                                             // [0x6473cc8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.FreeMetaSoundNode
	// void FreeMetaSoundNode(FFabricMetaSoundNodeInfo& Node);                                                                  // [0xabb6c10] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.AreAllPatchesReady
	// bool AreAllPatchesReady();                                                                                               // [0xabb6a68] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.AddOutputNodeForOutputVertex
	// void AddOutputNodeForOutputVertex(FMetaSoundBuilderNodeOutputHandle& OutputVertex, FName& NodeName, FName& OutOutputName, EMetaSoundBuilderResult& Result); // [0xabb6820] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.AddInputNodeForNodeByNameBP
	// void AddInputNodeForNodeByNameBP(FFabricMetaSoundNodeInfo& InOutNode, EFabricUserOptionType UserOptionType, FName& InputName); // [0xabb65e4] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/FabricRuntime.FabricNoteReceivedPatchWrapper
/// Size: 0x0040 (0x0006A8 - 0x0006E8)
class UFabricNoteReceivedPatchWrapper : public UFabricMetaSoundPatchWrapper
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1768;

public:
	SMember(FName)                                     NoteOutputName                                              OFFSET(getStruct<T>, {0x6A8, 4, 0, 0})
	CMember(TArray<FString>)                           TriggerNoteParams                                           OFFSET(get<T>, {0x6B0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnMatchingMidiEventPassed                                   OFFSET(getStruct<T>, {0x6C0, 16, 0, 0})


	/// Functions
	// Function /Script/FabricRuntime.FabricNoteReceivedPatchWrapper.OnTriggerNoteChanged
	// void OnTriggerNoteChanged(int32_t NoteIndex, bool bTriggerActive);                                                       // [0xabba474] Final|Native|Protected 
	// Function /Script/FabricRuntime.FabricNoteReceivedPatchWrapper.OnMetaSoundMidiEventPassed
	// void OnMetaSoundMidiEventPassed(FName OutputName, FMetaSoundOutput& Output);                                             // [0xabba07c] Final|Native|Protected|HasOutParms 
};

/// Class /Script/FabricRuntime.FabricNoteTriggerPatchWrapper
/// Size: 0x0028 (0x0006E8 - 0x000710)
class UFabricNoteTriggerPatchWrapper : public UFabricNoteReceivedPatchWrapper
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1808;

public:
	SMember(FString)                                   OctaveParam                                                 OFFSET(getStruct<T>, {0x6E8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnAnyMidiEventPassed                                        OFFSET(getStruct<T>, {0x6F8, 16, 0, 0})


	/// Functions
	// Function /Script/FabricRuntime.FabricNoteTriggerPatchWrapper.OnOctaveChanged
	// void OnOctaveChanged(FName& ParamName, int32_t InOctave);                                                                // [0xabba378] Final|Native|Protected|HasOutParms 
};

/// Class /Script/FabricRuntime.FabricMetaSoundTreeNode
/// Size: 0x0020 (0x000028 - 0x000048)
class UFabricMetaSoundTreeNode : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(EFabricMetaSoundPinDirection)              PinDirection                                                OFFSET(get<T>, {0x28, 1, 0, 0})
	CMember(class UFabricMetaSoundPatchWrapper*)       AssociatedPatchWrapper                                      OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(TArray<class UFabricMetaSoundTreeNode*>)   Children                                                    OFFSET(get<T>, {0x38, 16, 0, 0})


	/// Functions
	// Function /Script/FabricRuntime.FabricMetaSoundTreeNode.Reset
	// void Reset();                                                                                                            // [0xabba550] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundTreeNode.GetValidChildren
	// TArray<UFabricMetaSoundTreeNode*> GetValidChildren();                                                                    // [0xabb9bd8] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundTreeNode.ConnectToChildNodes
	// void ConnectToChildNodes();                                                                                              // [0xabb9810] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/FabricRuntime.FabricMetaSoundSequencerPatchWrapper
/// Size: 0x0008 (0x0006A8 - 0x0006B0)
class UFabricMetaSoundSequencerPatchWrapper : public UFabricMetaSoundPatchWrapper
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1712;

public:
	CMember(class UMidiStepSequence*)                  CurrentStepSequence                                         OFFSET(get<T>, {0x6A8, 8, 0, 0})


	/// Functions
	// Function /Script/FabricRuntime.FabricMetaSoundSequencerPatchWrapper.SetMidiStepSequence
	// void SetMidiStepSequence(class UMidiStepSequence* StepSequence);                                                         // [0xabbab20] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/FabricRuntime.FabricMetaSoundSpeakerPatchWrapper
/// Size: 0x0030 (0x0006A8 - 0x0006D8)
class UFabricMetaSoundSpeakerPatchWrapper : public UFabricMetaSoundPatchWrapper
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1752;

public:
	SMember(FName)                                     SpeakerEnabledMetasoundParam                                OFFSET(getStruct<T>, {0x6A8, 4, 0, 0})
	CMember(TArray<FFabricMetaSoundSpeakerPatchWrapperEqBandsBinding>) EqBands                                     OFFSET(get<T>, {0x6B0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnFabricMetaSoundSpeakerPatchEqBandUpdate                   OFFSET(getStruct<T>, {0x6C0, 16, 0, 0})


	/// Functions
	// Function /Script/FabricRuntime.FabricMetaSoundSpeakerPatchWrapper.SetAudioBusFromSourceBus
	// void SetAudioBusFromSourceBus(class USoundSourceBus* Bus);                                                               // [0xabba564] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/FabricRuntime.FabricMetaSoundSplitterPatchWrapper
/// Size: 0x0058 (0x0006A8 - 0x000700)
class UFabricMetaSoundSplitterPatchWrapper : public UFabricMetaSoundPatchWrapper
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1792;

public:
	CMember(TMap<FName, FFabricMetaSoundNodeInfo>)     SplitterNodes                                               OFFSET(get<T>, {0x6B0, 80, 0, 0})
};

/// Class /Script/FabricRuntime.FabricMetaSoundTickSubsystem
/// Size: 0x0190 (0x0000D0 - 0x000260)
class UFabricMetaSoundTickSubsystem : public UFortManagedTickSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 608;

public:
};

/// Class /Script/FabricRuntime.FabricMIDIPlayerPatchWrapper
/// Size: 0x0018 (0x0006E8 - 0x000700)
class UFabricMIDIPlayerPatchWrapper : public UFabricNoteReceivedPatchWrapper
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1792;

public:
	SMember(FName)                                     MidiTrackIndexUserOptionName                                OFFSET(getStruct<T>, {0x6E8, 4, 0, 0})
	CMember(class UMidiFile*)                          CurrentMidiFile                                             OFFSET(get<T>, {0x6F0, 8, 0, 0})
	DMember(int32_t)                                   CurrentMidiTrackIndex                                       OFFSET(get<int32_t>, {0x6F8, 4, 0, 0})


	/// Functions
	// Function /Script/FabricRuntime.FabricMIDIPlayerPatchWrapper.SetMidiFile
	// void SetMidiFile(class UMidiFile* MidiFile);                                                                             // [0xabbe298] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/FabricRuntime.FabricModulator
/// Size: 0x0000 (0x000028 - 0x000028)
class UFabricModulator : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/FabricRuntime.FabricModulatorSource
/// Size: 0x0000 (0x000028 - 0x000028)
class UFabricModulatorSource : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/FabricRuntime.FabricModulatorSource.GetUserOption
	// class UPlaylistUserOptionBase* GetUserOption(FString Property);                                                          // [0xabbd0d4] Native|Event|Public|BlueprintEvent|Const 
	// Function /Script/FabricRuntime.FabricModulatorSource.GetModulators
	// void GetModulators(class UFabricModulatable* Modulatable);                                                               // [0x81cdd38] Native|Event|Public|BlueprintEvent 
};

/// Class /Script/FabricRuntime.FabricModulatorDevice
/// Size: 0x0000 (0x000028 - 0x000028)
class UFabricModulatorDevice : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/FabricRuntime.FabricModulatorDevice.SetUserOption
	// void SetUserOption(EFabricUserOptionType UserOptionType, class UPlaylistUserOptionBase* UserOption, class UObject* ModulatorObject); // [0xabbe9e8] Native|Event|Public|BlueprintEvent 
};

/// Class /Script/FabricRuntime.FabricProgressorManager
/// Size: 0x0048 (0x0000A0 - 0x0000E8)
class UFabricProgressorManager : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
	SMember(FMulticastInlineDelegate)                  OnGlobalProgressionChanged                                  OFFSET(getStruct<T>, {0xA8, 16, 0, 0})
	DMember(bool)                                      bHasActiveGlobalProgression                                 OFFSET(get<bool>, {0xB8, 1, 0, 0})
	DMember(int32_t)                                   GlobalPresetNumber                                          OFFSET(get<int32_t>, {0xBC, 4, 0, 0})
	SMember(FFabricProgressionPreset)                  GlobalProgression                                           OFFSET(getStruct<T>, {0xC0, 40, 0, 0})


	/// Functions
	// Function /Script/FabricRuntime.FabricProgressorManager.SetGlobalProgression
	// void SetGlobalProgression(FFabricProgressionPreset& InProgression, int32_t InPresetNumber);                              // [0xabbe040] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricProgressorManager.OnProgressionChanged__DelegateSignature
	// void OnProgressionChanged__DelegateSignature();                                                                          // [0x18a39e4] MulticastDelegate|Public|Delegate 
	// Function /Script/FabricRuntime.FabricProgressorManager.IsProgressionGlobal
	// bool IsProgressionGlobal(FFabricProgressionPreset& InProgression);                                                       // [0xabbd58c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/FabricRuntime.FabricProgressorManager.HasActiveGlobalProgression
	// bool HasActiveGlobalProgression();                                                                                       // [0xabbd240] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricProgressorManager.GetGlobalProgression
	// FFabricProgressionPreset GetGlobalProgression();                                                                         // [0xabbc1dc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricProgressorManager.GetGlobalPresetNumber
	// int32_t GetGlobalPresetNumber();                                                                                         // [0xabbc1c4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/FabricRuntime.FabricSteppedPreviewFXComponent
/// Size: 0x0060 (0x000960 - 0x0009C0)
class UFabricSteppedPreviewFXComponent : public UInstancedStaticMeshComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2496;

public:
	DMember(int32_t)                                   NumberOfSteps                                               OFFSET(get<int32_t>, {0x958, 4, 0, 0})
	DMember(bool)                                      bManuallySpaceMeshInstances                                 OFFSET(get<bool>, {0x95C, 1, 0, 0})
	DMember(bool)                                      bAlignToTransformCenter                                     OFFSET(get<bool>, {0x95D, 1, 0, 0})
	DMember(float)                                     CenterAlignmentBounds                                       OFFSET(get<float>, {0x960, 4, 0, 0})
	DMember(float)                                     DistanceBetweenInstances                                    OFFSET(get<float>, {0x964, 4, 0, 0})
	DMember(float)                                     DistanceBetweenTripletIntances                              OFFSET(get<float>, {0x968, 4, 0, 0})
	DMember(float)                                     DistanceBetweenInstanceSets                                 OFFSET(get<float>, {0x96C, 4, 0, 0})
	DMember(float)                                     DistanceBetweenTripletInstanceSets                          OFFSET(get<float>, {0x970, 4, 0, 0})
	CMember(EFabricNoteStyle)                          NoteStyle                                                   OFFSET(get<T>, {0x974, 1, 0, 0})
	DMember(int32_t)                                   CPDDeviceEnabled                                            OFFSET(get<int32_t>, {0x978, 4, 0, 0})
	DMember(int32_t)                                   CPDNumSteps                                                 OFFSET(get<int32_t>, {0x97C, 4, 0, 0})
	DMember(int32_t)                                   PICDNoteOn                                                  OFFSET(get<int32_t>, {0x980, 4, 0, 0})
	DMember(int32_t)                                   PICDNoteLength                                              OFFSET(get<int32_t>, {0x984, 4, 0, 0})
	DMember(int32_t)                                   PICDSpanLength                                              OFFSET(get<int32_t>, {0x988, 4, 0, 0})
	DMember(int32_t)                                   PICDNoteTime                                                OFFSET(get<int32_t>, {0x98C, 4, 0, 0})
	DMember(int32_t)                                   PICDGenericFloatIndex                                       OFFSET(get<int32_t>, {0x990, 4, 0, 0})
	DMember(float)                                     LengthStepBeats                                             OFFSET(get<float>, {0x994, 4, 0, 0})
	DMember(float)                                     StepLengthQuarterNotes                                      OFFSET(get<float>, {0x998, 4, 0, 0})
	DMember(float)                                     StepBeatScale                                               OFFSET(get<float>, {0x99C, 4, 0, 0})
	DMember(float)                                     StepBeatOffset                                              OFFSET(get<float>, {0x9A0, 4, 0, 0})
	DMember(float)                                     LengthTrackBeats                                            OFFSET(get<float>, {0x9A4, 4, 0, 0})
	DMember(double)                                    InstanceSpace                                               OFFSET(get<double>, {0x9A8, 8, 0, 0})
	DMember(double)                                    InstanceSetSpace                                            OFFSET(get<double>, {0x9B0, 8, 0, 0})


	/// Functions
	// Function /Script/FabricRuntime.FabricSteppedPreviewFXComponent.UpdateStepData
	// void UpdateStepData(int32_t Index, bool bMarkRenderStateDirty);                                                          // [0xabbeea8] Native|Protected|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricSteppedPreviewFXComponent.UpdateExistingTransforms
	// void UpdateExistingTransforms(int32_t NumInstances, int32_t NumSteps);                                                   // [0xabbecd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricSteppedPreviewFXComponent.UpdateDeviceEnabledFX
	// void UpdateDeviceEnabledFX(bool bEnabled);                                                                               // [0xabbeba8] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricSteppedPreviewFXComponent.UpdateAllCurrentStepData
	// void UpdateAllCurrentStepData(int32_t NumSteps, float StepLengthBeats);                                                  // [0xabbeae0] Native|Protected|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricSteppedPreviewFXComponent.SetSpanLength
	// void SetSpanLength(int32_t InstanceIndex, float SpanLengthBeats);                                                        // [0xabbe79c] Final|Native|Protected|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricSteppedPreviewFXComponent.SetNumSteps
	// void SetNumSteps(int32_t NumSteps);                                                                                      // [0xabbe5dc] Final|Native|Protected|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricSteppedPreviewFXComponent.SetNoteTime
	// void SetNoteTime(int32_t InstanceIndex, float NoteTimeOffsetBeats);                                                      // [0xabbe518] Final|Native|Protected|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricSteppedPreviewFXComponent.SetNoteOn
	// void SetNoteOn(int32_t InstanceIndex, float NoteOn, bool bMarkRenderStateDirty);                                         // [0xabbe420] Final|Native|Protected|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricSteppedPreviewFXComponent.SetNoteLength
	// void SetNoteLength(int32_t InstanceIndex, float NoteLengthBeats);                                                        // [0xabbe35c] Final|Native|Protected|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricSteppedPreviewFXComponent.SetGenericFloatValue
	// void SetGenericFloatValue(int32_t InstanceIndex, float FloatValue, bool bMarkRenderStateDirty);                          // [0xabbdf38] Final|Native|Protected|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricSteppedPreviewFXComponent.OnQuarterNotesLengthChanged
	// void OnQuarterNotesLengthChanged(float QuarterNoteLength);                                                               // [0xabbdcb8] Native|Protected     
	// Function /Script/FabricRuntime.FabricSteppedPreviewFXComponent.OnPageChanged
	// void OnPageChanged(int32_t CurrentPage);                                                                                 // [0xabbdc34] Native|Protected     
	// Function /Script/FabricRuntime.FabricSteppedPreviewFXComponent.OnNumTracksChanged
	// void OnNumTracksChanged(int32_t NumTracks);                                                                              // [0xabbdbb0] Native|Protected     
	// Function /Script/FabricRuntime.FabricSteppedPreviewFXComponent.OnNumStepsChanged
	// void OnNumStepsChanged(int32_t NumSteps);                                                                                // [0xabbdb2c] Native|Protected     
	// Function /Script/FabricRuntime.FabricSteppedPreviewFXComponent.OnNoteStyleChanged
	// void OnNoteStyleChanged(EFabricNoteStyle style);                                                                         // [0xabbda24] Native|Protected     
	// Function /Script/FabricRuntime.FabricSteppedPreviewFXComponent.OnBeatScaleChanged
	// void OnBeatScaleChanged(float BeatScale);                                                                                // [0xabbd6d0] Native|Protected     
	// Function /Script/FabricRuntime.FabricSteppedPreviewFXComponent.OnBeatOffsetChanged
	// void OnBeatOffsetChanged(float BeatOffset);                                                                              // [0xabbd64c] Native|Protected     
	// Function /Script/FabricRuntime.FabricSteppedPreviewFXComponent.GetNoteOn
	// float GetNoteOn(int32_t InstanceIndex);                                                                                  // [0xabbd040] Native|Protected|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricSteppedPreviewFXComponent.ConstructPreviewVisuals
	// void ConstructPreviewVisuals(int32_t NumSteps, float StepBeatLength, bool bForceUpdateTransform, bool bInTestNotesOn);   // [0xabbbeec] Native|Public|BlueprintCallable 
};

/// Class /Script/FabricRuntime.FabricSequencerPreviewFXComponent
/// Size: 0x0010 (0x0009C0 - 0x0009D0)
class UFabricSequencerPreviewFXComponent : public UFabricSteppedPreviewFXComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2512;

public:
	CMember(TWeakObjectPtr<UFabricStepSequencerComponent*>) StepSequencer                                          OFFSET(get<T>, {0x9C0, 8, 0, 0})
	CMember(TWeakObjectPtr<UFabricStepSequencerGridComponent*>) StepSequencerGrid                                  OFFSET(get<T>, {0x9C8, 8, 0, 0})


	/// Functions
	// Function /Script/FabricRuntime.FabricSequencerPreviewFXComponent.UpdateNoteOn
	// void UpdateNoteOn(int32_t Index, int32_t NumSteps, bool bMarkRenderStateDirty);                                          // [0xabbed90] Final|Native|Private|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricSequencerPreviewFXComponent.SetSustainLength
	// void SetSustainLength(int32_t InstanceIndex, float SustainLengthBeats);                                                  // [0xabbe924] Final|Native|Private|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricSequencerPreviewFXComponent.SetSingleTrackNoteOn
	// void SetSingleTrackNoteOn(int32_t InstanceIndex, int32_t TrackPICDIndex, float NoteOn, bool bMarkRenderStateDirty);      // [0xabbe65c] Final|Native|Private|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricSequencerPreviewFXComponent.OnStepChanged
	// void OnStepChanged(FFabricSequencerStepChangedInfo& StepInfo);                                                           // [0xabbdd3c] Final|Native|Protected|HasOutParms 
	// Function /Script/FabricRuntime.FabricSequencerPreviewFXComponent.OnFullTableChanged
	// void OnFullTableChanged();                                                                                               // [0xabbd754] Final|Native|Protected 
	// Function /Script/FabricRuntime.FabricSequencerPreviewFXComponent.InitializePreviewFXComponent
	// void InitializePreviewFXComponent(class UFabricStepSequencerComponent* InStepSequencer, class UFabricStepSequencerGridComponent* InStepSequencerGrid, bool bInTestNotesOn); // [0xabbd258] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/FabricRuntime.FabricSequencerSustainComponent
/// Size: 0x0080 (0x000960 - 0x0009E0)
class UFabricSequencerSustainComponent : public UInstancedStaticMeshComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2528;

public:
	CMember(TMap<FIntVector2, int32_t>)                StepToInstanceMapping                                       OFFSET(get<T>, {0x958, 80, 0, 0})
	DMember(int32_t)                                   PICDStartBeat                                               OFFSET(get<int32_t>, {0x9A8, 4, 0, 0})
	DMember(int32_t)                                   PICDEndBeat                                                 OFFSET(get<int32_t>, {0x9AC, 4, 0, 0})
	DMember(int32_t)                                   PICDLoopBeat                                                OFFSET(get<int32_t>, {0x9B0, 4, 0, 0})
	DMember(int32_t)                                   CPDDeviceEnabled                                            OFFSET(get<int32_t>, {0x9B4, 4, 0, 0})
	DMember(float)                                     GridSquareExtents                                           OFFSET(get<float>, {0x9B8, 4, 0, 0})
	DMember(float)                                     SustainInstanceYLocation                                    OFFSET(get<float>, {0x9BC, 4, 0, 0})
	DMember(float)                                     SustainInstanceYScale                                       OFFSET(get<float>, {0x9C0, 4, 0, 0})
	DMember(float)                                     SustainInstanceZScale                                       OFFSET(get<float>, {0x9C4, 4, 0, 0})
	CMember(TWeakObjectPtr<UFabricStepSequencerComponent*>) StepSequencer                                          OFFSET(get<T>, {0x9C8, 8, 0, 0})
	CMember(TWeakObjectPtr<UFabricStepSequencerGridComponent*>) StepSequencerGrid                                  OFFSET(get<T>, {0x9D0, 8, 0, 0})


	/// Functions
	// Function /Script/FabricRuntime.FabricSequencerSustainComponent.UpdateVisibilityOfInstances
	// void UpdateVisibilityOfInstances();                                                                                      // [0xabbf234] Final|Native|Protected|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricSequencerSustainComponent.UpdateSustainMaterial
	// void UpdateSustainMaterial(int32_t InstanceIndex, int32_t HeadNoteStepIndex, int32_t TrackIndex);                        // [0xabbf140] Final|Native|Protected|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricSequencerSustainComponent.UpdateSustainInstance
	// void UpdateSustainInstance(int32_t StepIndex, int32_t TrackIndex, int32_t PageIndex, bool bEnabled, bool bContinuous, bool bStepChanged); // [0xabbef70] Final|Native|Protected|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricSequencerSustainComponent.UpdatePipsOnGridChanged
	// void UpdatePipsOnGridChanged();                                                                                          // [0xabbee94] Final|Native|Protected|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricSequencerSustainComponent.UpdateDeviceEnabledOnSustain
	// void UpdateDeviceEnabledOnSustain(bool bEnabled);                                                                        // [0xabbec3c] Final|Native|Protected|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricSequencerSustainComponent.SetStartBeat
	// void SetStartBeat(int32_t InstanceIndex, float StartBeatValue);                                                          // [0xabbe860] Final|Native|Protected|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricSequencerSustainComponent.SetLoopBeat
	// void SetLoopBeat(int32_t InstanceIndex, float LoopBeatValue);                                                            // [0xabbe1d4] Final|Native|Protected|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricSequencerSustainComponent.SetEndBeat
	// void SetEndBeat(int32_t InstanceIndex, float EndBeatValue);                                                              // [0xabbde74] Final|Native|Protected|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricSequencerSustainComponent.OnStepChanged
	// void OnStepChanged(FFabricSequencerStepChangedInfo& StepInfo);                                                           // [0xabbddd8] Final|Native|Protected|HasOutParms 
	// Function /Script/FabricRuntime.FabricSequencerSustainComponent.OnPageChanged
	// void OnPageChanged(int32_t CurrentPage);                                                                                 // [0xabbdbb0] Native|Protected     
	// Function /Script/FabricRuntime.FabricSequencerSustainComponent.OnNumTracksChanged
	// void OnNumTracksChanged(int32_t NumTracks);                                                                              // [0xabbdb2c] Native|Protected     
	// Function /Script/FabricRuntime.FabricSequencerSustainComponent.OnNumStepsChanged
	// void OnNumStepsChanged(int32_t NumSteps);                                                                                // [0xabbdaa8] Native|Protected     
	// Function /Script/FabricRuntime.FabricSequencerSustainComponent.OnFullTableChanged
	// void OnFullTableChanged();                                                                                               // [0xabbd768] Final|Native|Protected 
	// Function /Script/FabricRuntime.FabricSequencerSustainComponent.InitializeSustainComponent
	// void InitializeSustainComponent(class UFabricStepSequencerComponent* InStepSequencer, class UFabricStepSequencerGridComponent* InStepSequencerGrid); // [0xabbd35c] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricSequencerSustainComponent.FindHeadNoteAndUpdateInstance
	// void FindHeadNoteAndUpdateInstance(int32_t StepIndex, int32_t TrackIndex);                                               // [0xabbc104] Final|Native|Protected|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricSequencerSustainComponent.FindAndDeleteInstance
	// void FindAndDeleteInstance(int32_t StepIndex, int32_t TrackIndex);                                                       // [0xabbc044] Final|Native|Protected|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricSequencerSustainComponent.ConstructSustains
	// void ConstructSustains();                                                                                                // [0xabbc030] Final|Native|Protected|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricSequencerSustainComponent.CalculateSustainLength
	// float CalculateSustainLength(float NumStepsCoveredBySustain);                                                            // [0xabbbe5c] Final|Native|Protected|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricSequencerSustainComponent.AddSustainInstance
	// void AddSustainInstance(int32_t StepIndex, int32_t TrackIndex);                                                          // [0xabbbd9c] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/FabricRuntime.FabricSignificanceAsset
/// Size: 0x0010 (0x000030 - 0x000040)
class UFabricSignificanceAsset : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(TArray<FFabricSignificanceBasedUpdateBucket>) UpdateBuckets                                            OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Class /Script/FabricRuntime.FabricStepSequencerModulatable
/// Size: 0x0088 (0x000328 - 0x0003B0)
class UFabricStepSequencerModulatable : public UFabricModulatable
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 944;

public:
	DMember(bool)                                      bIsChromatic                                                OFFSET(get<bool>, {0x3A8, 1, 0, 0})
	DMember(bool)                                      bModulationValueChanged                                     OFFSET(get<bool>, {0x3A9, 1, 0, 0})
};

/// Class /Script/FabricRuntime.FabricStepSequencerComponent
/// Size: 0x0260 (0x0000A0 - 0x000300)
class UFabricStepSequencerComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 768;

public:
	SMember(FMulticastInlineDelegate)                  OnNumTracksChanged                                          OFFSET(getStruct<T>, {0xA8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnNumStepsChanged                                           OFFSET(getStruct<T>, {0xB8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPageChanged                                               OFFSET(getStruct<T>, {0xC8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnQuarterNotesLengthChanged                                 OFFSET(getStruct<T>, {0xD8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnBeatScaleChanged                                          OFFSET(getStruct<T>, {0xE8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnBeatOffsetChanged                                         OFFSET(getStruct<T>, {0xF8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnStepChanged                                               OFFSET(getStruct<T>, {0x108, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnNoteStyleChanged                                          OFFSET(getStruct<T>, {0x118, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnFullTableChanged                                          OFFSET(getStruct<T>, {0x128, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPageCleared                                               OFFSET(getStruct<T>, {0x138, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnLoopEnded                                                 OFFSET(getStruct<T>, {0x148, 16, 0, 0})
	SMember(FString)                                   LengthParam                                                 OFFSET(getStruct<T>, {0x158, 16, 0, 0})
	SMember(FString)                                   DurationParam                                               OFFSET(getStruct<T>, {0x168, 16, 0, 0})
	SMember(FString)                                   PageParam                                                   OFFSET(getStruct<T>, {0x178, 16, 0, 0})
	SMember(FString)                                   AutoPageParam                                               OFFSET(getStruct<T>, {0x188, 16, 0, 0})
	SMember(FString)                                   OctaveParam                                                 OFFSET(getStruct<T>, {0x198, 16, 0, 0})
	SMember(FString)                                   NoteStyleParam                                              OFFSET(getStruct<T>, {0x1A8, 16, 0, 0})
	SMember(FString)                                   LoopParam                                                   OFFSET(getStruct<T>, {0x1B8, 16, 0, 0})
	SMember(FString)                                   AutoPagePlaysBlankPagesParam                                OFFSET(getStruct<T>, {0x1C8, 16, 0, 0})
	DMember(bool)                                      bMonophonic                                                 OFFSET(get<bool>, {0x1D8, 1, 0, 0})
	DMember(bool)                                      bSupportsContinuation                                       OFFSET(get<bool>, {0x1D9, 1, 0, 0})
	DMember(float)                                     StepLengthQuarterNotes                                      OFFSET(get<float>, {0x1DC, 4, 0, 0})
	DMember(float)                                     StepBeatScale                                               OFFSET(get<float>, {0x1E0, 4, 0, 0})
	DMember(bool)                                      bSkipFourthStepInTriplet                                    OFFSET(get<bool>, {0x1E4, 1, 0, 0})
	CMember(EFabricNoteStyle)                          NoteStyle                                                   OFFSET(get<T>, {0x1E5, 1, 0, 0})
	DMember(int32_t)                                   MaxSteps                                                    OFFSET(get<int32_t>, {0x1E8, 4, 0, 0})
	DMember(int32_t)                                   CurrentSteps                                                OFFSET(get<int32_t>, {0x1EC, 4, 0, 0})
	DMember(bool)                                      bMatchStepsToTimeSignature                                  OFFSET(get<bool>, {0x1F0, 1, 0, 0})
	DMember(int32_t)                                   MaxPages                                                    OFFSET(get<int32_t>, {0x1F4, 4, 0, 0})
	DMember(int32_t)                                   CurrentPage                                                 OFFSET(get<int32_t>, {0x1F8, 4, 0, 0})
	DMember(int32_t)                                   MaxTracks                                                   OFFSET(get<int32_t>, {0x1FC, 4, 0, 0})
	DMember(int32_t)                                   CurrentTracks                                               OFFSET(get<int32_t>, {0x200, 4, 0, 0})
	DMember(int32_t)                                   LocalInteractionStartTrackIndex                             OFFSET(get<int32_t>, {0x204, 4, 0, 0})
	DMember(int32_t)                                   LocalInteractionStartStepIndex                              OFFSET(get<int32_t>, {0x208, 4, 0, 0})
	DMember(bool)                                      bAutoPage                                                   OFFSET(get<bool>, {0x20C, 1, 0, 0})
	DMember(bool)                                      bAutoPagePlaysBlankPages                                    OFFSET(get<bool>, {0x20D, 1, 0, 0})
	DMember(bool)                                      bLoop                                                       OFFSET(get<bool>, {0x20E, 1, 0, 0})
	DMember(char)                                      RandomizationCommonSampleSize                               OFFSET(get<char>, {0x20F, 1, 0, 0})
	DMember(float)                                     RandomizationRestSelectionMaxPct                            OFFSET(get<float>, {0x210, 4, 0, 0})
	DMember(float)                                     RandomizationCommonPitchSelectionMaxPct                     OFFSET(get<float>, {0x214, 4, 0, 0})
	CMember(class UClass*)                             ContinuationControlClass                                    OFFSET(get<T>, {0x218, 8, 0, 0})
	SMember(FStepSequenceTable)                        LocalStepTable                                              OFFSET(getStruct<T>, {0x220, 40, 0, 0})
	SMember(FFabricStepTablePacked)                    PackedStepTable                                             OFFSET(getStruct<T>, {0x248, 40, 0, 0})
	CMember(class UFabricStepSequencerModulatable*)    StepSequencerModulatable                                    OFFSET(get<T>, {0x270, 8, 0, 0})
	CMember(class AActor*)                             CachedContinuationControl                                   OFFSET(get<T>, {0x278, 8, 0, 0})
	DMember(int32_t)                                   ContinuationRowIndex                                        OFFSET(get<int32_t>, {0x280, 4, 0, 0})
	DMember(int32_t)                                   ContinuationStepIndex                                       OFFSET(get<int32_t>, {0x284, 4, 0, 0})
	CMember(class UMidiStepSequence*)                  MetaSoundMidiStepSequence                                   OFFSET(get<T>, {0x290, 8, 0, 0})


	/// Functions
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.UpdatePackedStepTableSaveRecordIfChanged
	// void UpdatePackedStepTableSaveRecordIfChanged(FFabricStepTablePacked& InPackedStepTable);                                // [0xabc28cc] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.ToggleStepEnabledOnPage
	// void ToggleStepEnabledOnPage(int32_t Page, int32_t Row, int32_t Column);                                                 // [0xabc27d8] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.ToggleStepEnabled
	// void ToggleStepEnabled(int32_t Row, int32_t Column);                                                                     // [0xabc2710] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.SetStepEnabledOnPage
	// void SetStepEnabledOnPage(int32_t Page, int32_t Row, int32_t Column, bool bState);                                       // [0xabc25d4] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.SetStepEnabled
	// void SetStepEnabled(int32_t Row, int32_t Column, bool bState);                                                           // [0xabc24dc] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.SetStepContinuationOnPage
	// void SetStepContinuationOnPage(int32_t Page, int32_t Row, int32_t Column, bool bIsContinuation);                         // [0xabc23a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.SetStepContinuation
	// void SetStepContinuation(int32_t Row, int32_t Column, bool bIsContinuation);                                             // [0xabc22a8] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.SetQuarterNotesLength
	// void SetQuarterNotesLength(float QuarterNotes);                                                                          // [0xabc2228] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.SetPlaying
	// void SetPlaying(bool bNewPlaying);                                                                                       // [0xabc21a8] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.SetNumberTracks
	// void SetNumberTracks(int32_t NumTracks);                                                                                 // [0xabc20e4] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.SetNumberSteps
	// void SetNumberSteps(int32_t NumSteps);                                                                                   // [0xabc2064] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.SetNumberPages
	// void SetNumberPages(int32_t NumPages);                                                                                   // [0xabc1fc8] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.SetNoteStyle
	// void SetNoteStyle(EFabricNoteStyle style);                                                                               // [0xabc1f48] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.SetNoteForTrack
	// void SetNoteForTrack(FMidiNote Note, int32_t Track);                                                                     // [0xabc1d3c] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.SetMusicClock
	// void SetMusicClock(class UMusicClockComponent* InMusicClock);                                                            // [0xabc1c3c] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.SetMonophonic
	// void SetMonophonic(bool bNewMonophonic);                                                                                 // [0xabc1bbc] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.SetMaxSteps
	// void SetMaxSteps(int32_t NumSteps);                                                                                      // [0xabc1b28] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.SetLoop
	// void SetLoop(bool bNewLoop);                                                                                             // [0xabc1aa8] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.SetCurrentPage
	// void SetCurrentPage(int32_t NewPage);                                                                                    // [0xabc1924] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.SetBeatScale
	// void SetBeatScale(float BeatScale);                                                                                      // [0xabc1824] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.RandomizePage
	// void RandomizePage(int32_t Page);                                                                                        // [0xabc1724] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.RandomizeCurrentPage
	// void RandomizeCurrentPage();                                                                                             // [0xabc170c] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.OnRep_PackedStepTable
	// void OnRep_PackedStepTable();                                                                                            // [0xabc165c] Final|Native|Private 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.IsStepEnabledForAnyTrackOnPage
	// bool IsStepEnabledForAnyTrackOnPage(int32_t Page, int32_t Column);                                                       // [0xabc10c4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.IsStepEnabledForAnyTrack
	// bool IsStepEnabledForAnyTrack(int32_t Column);                                                                           // [0xabc102c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.IsPageBlank
	// bool IsPageBlank(int32_t PageIndex);                                                                                     // [0xabc0f9c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.GetSupportsContinuation
	// bool GetSupportsContinuation();                                                                                          // [0x87ab3e4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.GetStepStartQuarterNotes
	// float GetStepStartQuarterNotes(int32_t Step);                                                                            // [0xabc0ef8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.GetStepStartBeat
	// float GetStepStartBeat(int32_t Step);                                                                                    // [0xabc0e4c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.GetStepIsContinuationOnPage
	// bool GetStepIsContinuationOnPage(int32_t Page, int32_t Row, int32_t Column);                                             // [0xabc0d54] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.GetStepIsContinuation
	// bool GetStepIsContinuation(int32_t Row, int32_t Column);                                                                 // [0xabc0c88] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.GetStepEnabledOnPage
	// bool GetStepEnabledOnPage(int32_t Page, int32_t Row, int32_t Column);                                                    // [0xabc0b90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.GetStepEnabled
	// bool GetStepEnabled(int32_t Row, int32_t Column);                                                                        // [0xabc0ac4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.GetStepContinuationLengthOnPage
	// float GetStepContinuationLengthOnPage(int32_t Page, int32_t Row, int32_t Column);                                        // [0xabc09cc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.GetStepContinuationLength
	// float GetStepContinuationLength(int32_t Row, int32_t Column);                                                            // [0xabc0900] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.GetPageData
	// void GetPageData(int32_t PageIndex, FStepSequencePage& OutPageData);                                                     // [0xabc07e8] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.GetNumUsedSteps
	// int32_t GetNumUsedSteps(int32_t TotalSteps);                                                                             // [0xabc072c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.GetNumberTracks
	// int32_t GetNumberTracks();                                                                                               // [0xabc07d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.GetNumberSteps
	// int32_t GetNumberSteps();                                                                                                // [0xabc07b8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.GetMidiStepSequence
	// class UMidiStepSequence* GetMidiStepSequence();                                                                          // [0x6473e98] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.GetMaxSteps
	// int32_t GetMaxSteps();                                                                                                   // [0xabc0714] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.GetLongestContinuationLengthForColumnOnPage
	// float GetLongestContinuationLengthForColumnOnPage(int32_t Page, int32_t Column);                                         // [0xabc0650] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.GetLongestContinuationLengthForColumn
	// float GetLongestContinuationLengthForColumn(int32_t Column);                                                             // [0xabc05b8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.GetLengthTrackQuarterNotes
	// float GetLengthTrackQuarterNotes();                                                                                      // [0xabc0578] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.GetLengthTrackBeats
	// float GetLengthTrackBeats();                                                                                             // [0xabc0530] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.GetLengthStepQuarterNotes
	// float GetLengthStepQuarterNotes();                                                                                       // [0xabc0510] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.GetLengthStepBeats
	// float GetLengthStepBeats();                                                                                              // [0xabc04e8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.GetCurrentPage
	// int32_t GetCurrentPage();                                                                                                // [0xabc015c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.GetContinuationFocusIndeces
	// void GetContinuationFocusIndeces(int32_t& OutRowIndex, int32_t& OutStepIndex, int32_t& OutNumContinuationSteps);         // [0xabc0034] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.ClearPage
	// void ClearPage(int32_t Page, bool bUpdateSaveRecord);                                                                    // [0xabbff78] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.ClearCurrentPage
	// void ClearCurrentPage();                                                                                                 // [0xabbff60] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.ApplyTemplate
	// void ApplyTemplate(class UMidiStepSequence* Template, int32_t StepSequencePageIndex, bool bUpdateSaveRecord);            // [0xabbfd80] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.ApplyPage
	// void ApplyPage(int32_t PageIndex, FStepSequencePage& PageData);                                                          // [0xabbfca4] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/FabricRuntime.FabricStepSequencerGridComponent
/// Size: 0x0070 (0x000220 - 0x000290)
class UFabricStepSequencerGridComponent : public USceneComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 656;

public:
	SMember(FVector2D)                                 GridExtents                                                 OFFSET(getStruct<T>, {0x220, 16, 0, 0})
	SMember(FVector2D)                                 GridSpacing                                                 OFFSET(getStruct<T>, {0x230, 16, 0, 0})
	DMember(int32_t)                                   SingleTrackNumItemsPerRow                                   OFFSET(get<int32_t>, {0x240, 4, 0, 0})
	SMember(FVector2D)                                 EditorPreviewGridSize                                       OFFSET(getStruct<T>, {0x248, 16, 0, 0})
	CMember(class UClass*)                             GridSquareClass                                             OFFSET(get<T>, {0x258, 8, 0, 0})
	CMember(TEnumAsByte<ESequencerType>)               SequencerType                                               OFFSET(get<T>, {0x260, 1, 0, 0})
	DMember(int32_t)                                   ActiveTrack                                                 OFFSET(get<int32_t>, {0x264, 4, 0, 0})
	CMember(class UFabricStepSequencerComponent*)      StepSequencer                                               OFFSET(get<T>, {0x268, 8, 0, 0})
	CMember(TArray<FTrackRow>)                         GridRows                                                    OFFSET(get<T>, {0x270, 16, 0, 0})


	/// Functions
	// Function /Script/FabricRuntime.FabricStepSequencerGridComponent.SetGridVisible
	// void SetGridVisible(bool bInGridVisible, bool bForceRefresh);                                                            // [0xabc19a4] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricStepSequencerGridComponent.SetBypassed
	// void SetBypassed(bool bBypassed);                                                                                        // [0xabc18a4] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricStepSequencerGridComponent.SetActiveTrackIndex
	// void SetActiveTrackIndex(int32_t ActiveTrackIndex);                                                                      // [0xabc17a4] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricStepSequencerGridComponent.OnStepChanged
	// void OnStepChanged(FFabricSequencerStepChangedInfo& StepInfo);                                                           // [0xabc1670] Final|Native|Protected|HasOutParms 
	// Function /Script/FabricRuntime.FabricStepSequencerGridComponent.OnQuarterNotesLengthChanged
	// void OnQuarterNotesLengthChanged(float QuarterNotesLength);                                                              // [0xabc13d4] Final|Native|Protected 
	// Function /Script/FabricRuntime.FabricStepSequencerGridComponent.OnNumTracksChanged
	// void OnNumTracksChanged(int32_t NumTracks);                                                                              // [0xabc15dc] Final|Native|Protected 
	// Function /Script/FabricRuntime.FabricStepSequencerGridComponent.OnNumStepsChanged
	// void OnNumStepsChanged(int32_t NumSteps);                                                                                // [0xabc155c] Final|Native|Protected 
	// Function /Script/FabricRuntime.FabricStepSequencerGridComponent.OnNoteStyleChanged
	// void OnNoteStyleChanged(EFabricNoteStyle style);                                                                         // [0xabc14e0] Final|Native|Protected 
	// Function /Script/FabricRuntime.FabricStepSequencerGridComponent.OnFullTableChanged
	// void OnFullTableChanged();                                                                                               // [0xabc14cc] Final|Native|Protected 
	// Function /Script/FabricRuntime.FabricStepSequencerGridComponent.OnCurrentPageChanged
	// void OnCurrentPageChanged(int32_t NewPage);                                                                              // [0xabc1450] Final|Native|Protected 
	// Function /Script/FabricRuntime.FabricStepSequencerGridComponent.OnBeatScaleChanged
	// void OnBeatScaleChanged(float BeatScale);                                                                                // [0xabc13d4] Final|Native|Protected 
	// Function /Script/FabricRuntime.FabricStepSequencerGridComponent.OnBeatOffsetChanged
	// void OnBeatOffsetChanged(float BeatOffset);                                                                              // [0xabc13d4] Final|Native|Protected 
	// Function /Script/FabricRuntime.FabricStepSequencerGridComponent.NotifyInteractionFocusTargetExternallyChanged
	// void NotifyInteractionFocusTargetExternallyChanged(class APlayerController* PlayerController, int32_t SourceRowIndex, int32_t SourceColumnIndex, int32_t FocusRowIndex, int32_t FocusColumnIndex, bool bIsFocused); // [0xabc1210] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricStepSequencerGridComponent.IsStepToggledOnForAnyTrack
	// bool IsStepToggledOnForAnyTrack(int32_t StepIndex);                                                                      // [0xabc1184] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricStepSequencerGridComponent.IsBypassed
	// bool IsBypassed();                                                                                                       // [0x3eacecc] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/FabricRuntime.FabricStepSequencerGridComponent.GetGridSquareYPosition
	// float GetGridSquareYPosition(int32_t NumRows, int32_t RowIndex);                                                         // [0xabc0424] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/FabricRuntime.FabricStepSequencerGridComponent.GetGridSquareXPosition
	// float GetGridSquareXPosition(int32_t NumSteps, int32_t StepIndex);                                                       // [0xabc0360] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/FabricRuntime.FabricStepSequencerGridComponent.GetGridSquareSize
	// FVector2D GetGridSquareSize(int32_t NumSteps, int32_t NumRows);                                                          // [0xabc0248] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricStepSequencerGridComponent.GetGridSquareExtents
	// FVector GetGridSquareExtents(int32_t RowIndex, int32_t ColumnIndex);                                                     // [0xabc0174] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/FabricRuntime.FabricStepSequencerGridSquareComponent
/// Size: 0x0060 (0x0005C0 - 0x000620)
class UFabricStepSequencerGridSquareComponent : public UStaticMeshComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1568;

public:
	DMember(float)                                     ContinuationControlInteractionDelay                         OFFSET(get<float>, {0x5D0, 4, 0, 0})
	CMember(class UFabricStepSequencerComponent*)      AssignedStepSequencer                                       OFFSET(get<T>, {0x5D8, 8, 0, 0})
	DMember(int32_t)                                   ActiveTrack                                                 OFFSET(get<int32_t>, {0x5E0, 4, 0, 0})
	DMember(int32_t)                                   AssignedStep                                                OFFSET(get<int32_t>, {0x5E4, 4, 0, 0})
	DMember(int32_t)                                   PreviousFocusStepIndex                                      OFFSET(get<int32_t>, {0x5E8, 4, 0, 0})


	/// Functions
	// Function /Script/FabricRuntime.FabricStepSequencerGridSquareComponent.SetActiveTrack
	// void SetActiveTrack(int32_t Track);                                                                                      // [0xabe4fb8] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricStepSequencerGridSquareComponent.OnContinuationControl_StartInteraction
	// void OnContinuationControl_StartInteraction(class APlayerController* Controller);                                        // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricStepSequencerGridSquareComponent.OnContinuationControl_EndInteraction
	// void OnContinuationControl_EndInteraction(class APlayerController* Controller);                                          // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricStepSequencerGridSquareComponent.CanDoInteractionLogicOnStartInteraction
	// bool CanDoInteractionLogicOnStartInteraction();                                                                          // [0xabe4d8c] Final|Native|Private|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricStepSequencerGridSquareComponent.CanDoInteractionLogicOnEndInteraction
	// bool CanDoInteractionLogicOnEndInteraction();                                                                            // [0xabe4d68] Final|Native|Private|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/FabricRuntime.FabricTextureModifierBase
/// Size: 0x0018 (0x000328 - 0x000340)
class UFabricTextureModifierBase : public UFabricModulatable
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 832;

public:
	SMember(FMulticastInlineDelegate)                  OnSourceTexturesChanged                                     OFFSET(getStruct<T>, {0x328, 16, 0, 0})
	CMember(class UTexture*)                           ModifiedTexture                                             OFFSET(get<T>, {0x338, 8, 0, 0})


	/// Functions
	// Function /Script/FabricRuntime.FabricTextureModifierBase.OnSourceTextureChanged__DelegateSignature
	// void OnSourceTextureChanged__DelegateSignature(TArray<FFabricTextureProviderTexture>& Textures);                         // [0x18a39e4] MulticastDelegate|Public|Delegate|HasOutParms 
};

/// Class /Script/FabricRuntime.FabricTextureTreeNode
/// Size: 0x0028 (0x000028 - 0x000050)
class UFabricTextureTreeNode : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TArray<class UFabricTextureTreeNode*>)     Children                                                    OFFSET(get<T>, {0x28, 16, 0, 0})
	SMember(FFabricTextureProviderTexture)             Texture                                                     OFFSET(getStruct<T>, {0x38, 24, 0, 0})


	/// Functions
	// Function /Script/FabricRuntime.FabricTextureTreeNode.Reset
	// void Reset();                                                                                                            // [0xabe4fa4] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricTextureTreeNode.CopyProperties
	// void CopyProperties(class UFabricTextureTreeNode* Other);                                                                // [0xabe4db0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/FabricRuntime.FabricTextureProviderBase
/// Size: 0x0038 (0x000028 - 0x000060)
class UFabricTextureProviderBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FMulticastInlineDelegate)                  OnTextureChanged                                            OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	SMember(FFabricTextureProviderTexture)             SourceTexture                                               OFFSET(getStruct<T>, {0x38, 24, 0, 0})
	DMember(float)                                     CurrentCableFloatValue                                      OFFSET(get<float>, {0x50, 4, 0, 0})
	DMember(float)                                     CurrentCableFloatDirection                                  OFFSET(get<float>, {0x54, 4, 0, 0})
	DMember(float)                                     TimeElapsedSinceLastCableFloatDirty                         OFFSET(get<float>, {0x58, 4, 0, 0})
	DMember(bool)                                      bCurrentCableFloatDirty                                     OFFSET(get<bool>, {0x5C, 1, 0, 0})


	/// Functions
	// Function /Script/FabricRuntime.FabricTextureProviderBase.SetSourceTexture
	// void SetSourceTexture(FFabricTextureProviderTexture& InTexture);                                                         // [0xabe50f0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricTextureProviderBase.OnTextureChanged__DelegateSignature
	// void OnTextureChanged__DelegateSignature(FFabricTextureProviderTexture& Texture);                                        // [0x18a39e4] MulticastDelegate|Public|Delegate|HasOutParms 
};

/// Class /Script/FabricRuntime.FabricTimelinePreviewComponent
/// Size: 0x0018 (0x0000A0 - 0x0000B8)
class UFabricTimelinePreviewComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	CMember(class UTimelineComponent*)                 CurrentTimeline                                             OFFSET(get<T>, {0xA0, 8, 0, 0})


	/// Functions
	// Function /Script/FabricRuntime.FabricTimelinePreviewComponent.PreviewTimeline
	// void PreviewTimeline(class UTimelineComponent* Timeline, float SecondsToPlay, bool bReverseAnimation);                   // [0xabe4ec0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricTimelinePreviewComponent.GetShouldPreview
	// bool GetShouldPreview();                                                                                                 // [0x3219f08] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/FabricRuntime.FabricTimelineSyncComponent
/// Size: 0x00C0 (0x0000A0 - 0x000160)
class UFabricTimelineSyncComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
	DMember(float)                                     ThresholdForSeekMS                                          OFFSET(get<float>, {0xA0, 4, 0, 0})
	DMember(float)                                     ThresholdForStartSpeedAdjustMS                              OFFSET(get<float>, {0xA4, 4, 0, 0})
	DMember(float)                                     ThresholdForEndOfSpeedAdjustMS                              OFFSET(get<float>, {0xA8, 4, 0, 0})
	DMember(float)                                     SpeedAdjustFactor                                           OFFSET(get<float>, {0xAC, 4, 0, 0})
	DMember(bool)                                      bPrintToScreen                                              OFFSET(get<bool>, {0xB0, 1, 0, 0})
	DMember(bool)                                      bLogCorrectedServerTimeDelta                                OFFSET(get<bool>, {0xB1, 1, 0, 0})
	DMember(float)                                     SpeedSyncTimeoutLength                                      OFFSET(get<float>, {0xB4, 4, 0, 0})
	DMember(float)                                     TempoDeltaThrottleSeconds                                   OFFSET(get<float>, {0xB8, 4, 0, 0})
	CMember(class UFabricMetaSoundManagerComponent*)   MetaSoundManager                                            OFFSET(get<T>, {0xC0, 8, 0, 0})
	CMember(class UMusicClockComponent*)               MusicClock                                                  OFFSET(get<T>, {0xC8, 8, 0, 0})
	SMember(FMidiSongPos)                              ServerCurrentSongRenderPos                                  OFFSET(getStruct<T>, {0xD8, 64, 0, 0})
	SMember(FFabricTimelineSyncServerSongPosition)     ServerTimelineSyncServerSongPosition                        OFFSET(getStruct<T>, {0x118, 28, 0, 0})


	/// Functions
	// Function /Script/FabricRuntime.FabricTimelineSyncComponent.SetFabricMetaSoundManager
	// void SetFabricMetaSoundManager(class UFabricMetaSoundManagerComponent* InMetaSoundManager);                              // [0xabe5038] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricTimelineSyncComponent.OnTimelinePlayingChanged
	// void OnTimelinePlayingChanged(EMusicClockState State);                                                                   // [0x81e7214] Final|Native|Public  
	// Function /Script/FabricRuntime.FabricTimelineSyncComponent.OnRep_ServerCurrentSongPos
	// void OnRep_ServerCurrentSongPos();                                                                                       // [0xabe4ea8] Final|Native|Public  
};

/// Class /Script/FabricRuntime.FabricWaveformTexture
/// Size: 0x0050 (0x000028 - 0x000078)
class UFabricWaveformTexture : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	DMember(int32_t)                                   WaveformNumSamplesHeld                                      OFFSET(get<int32_t>, {0x30, 4, 0, 0})
	DMember(int32_t)                                   WaveformSmoothingDistance                                   OFFSET(get<int32_t>, {0x34, 4, 0, 0})
	DMember(float)                                     WaveformSmoothingFactor                                     OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     WaveformDecayPerSecond                                      OFFSET(get<float>, {0x3C, 4, 0, 0})
	CMember(class UTexture2D*)                         WaveformTexture                                             OFFSET(get<T>, {0x40, 8, 0, 0})
	DMember(bool)                                      bEnableTextureRequests                                      OFFSET(get<bool>, {0x48, 1, 0, 0})


	/// Functions
	// Function /Script/FabricRuntime.FabricWaveformTexture.Initialize
	// void Initialize();                                                                                                       // [0xabe4e94] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricWaveformTexture.GetWaveformTexture
	// class UTexture2D* GetWaveformTexture();                                                                                  // [0x6473ba8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricWaveformTexture.AddNewValueToWaveformTexture
	// void AddNewValueToWaveformTexture(float Value);                                                                          // [0xabe4ce8] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricWaveformTexture.AddMultipleValuesToWaveformTexture
	// void AddMultipleValuesToWaveformTexture(TArray<float>& Values);                                                          // [0xabe4c0c] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/FabricRuntime.FabricGameFeatureAction_OverrideFabricInteractionTool
/// Size: 0x0020 (0x000028 - 0x000048)
class UFabricGameFeatureAction_OverrideFabricInteractionTool : public UGameFeatureAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(TWeakObjectPtr<UFortGadgetItemDefinition*>) OverriddenPatchworkInteractionTool                         OFFSET(get<T>, {0x28, 32, 0, 0})
};

/// Struct /Script/FabricRuntime.InteractionData
/// Size: 0x000C (0x000000 - 0x00000C)
class FInteractionData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	CMember(EFabricInteractionToolStates)              InteractionState                                            OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(TWeakObjectPtr<AFortCreativeDeviceProp*>)  InteractableOwnerDevice                                     OFFSET(get<T>, {0x4, 8, 0, 0})
};

/// Struct /Script/FabricRuntime.InteractionSplinePoints
/// Size: 0x0060 (0x000000 - 0x000060)
class FInteractionSplinePoints : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FVector_NetQuantize10)                     SplineStartLocation                                         OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FVector_NetQuantize10)                     SplineStartForward                                          OFFSET(getStruct<T>, {0x18, 24, 0, 0})
	SMember(FVector_NetQuantize10)                     SplineEndLocation                                           OFFSET(getStruct<T>, {0x30, 24, 0, 0})
	SMember(FVector_NetQuantize10)                     SplineEndForward                                            OFFSET(getStruct<T>, {0x48, 24, 0, 0})
};

/// Struct /Script/FabricRuntime.FabricMetaSoundPatchWrapperBinding
/// Size: 0x0048 (0x000000 - 0x000048)
class FFabricMetaSoundPatchWrapperBinding : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FName)                                     FriendlyName                                                OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(bool)                                      bAllowOnDedicatedServer                                     OFFSET(get<bool>, {0x4, 1, 0, 0})
	SMember(FFabricMetaSoundPatchWrapperPeakTamer)     PeakTamer                                                   OFFSET(getStruct<T>, {0x8, 36, 0, 0})
	SMember(FName)                                     MetaSoundNodeName                                           OFFSET(getStruct<T>, {0x2C, 4, 0, 0})
	CMember(TArray<float>)                             Signals                                                     OFFSET(get<T>, {0x30, 16, 0, 0})
	DMember(bool)                                      bBoundToWatchEvents                                         OFFSET(get<bool>, {0x40, 1, 0, 0})
};

/// Struct /Script/FabricRuntime.FabricMetaSoundPatchWrapperPeakTamer
/// Size: 0x0024 (0x000000 - 0x000024)
class FFabricMetaSoundPatchWrapperPeakTamer : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 36;

public:
	DMember(bool)                                      bUseGameplaySmoothing                                       OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(bool)                                      bSortSignals                                                OFFSET(get<bool>, {0x1, 1, 0, 0})
	DMember(int32_t)                                   MaxSignalsToTame                                            OFFSET(get<int32_t>, {0x4, 4, 0, 0})
};

/// Struct /Script/FabricRuntime.FabricMetaSoundPatchWrapperWetDryOutputBinding
/// Size: 0x0090 (0x000000 - 0x000090)
class FFabricMetaSoundPatchWrapperWetDryOutputBinding : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FFabricMetaSoundPatchWrapperBinding)       WetOutputSignalBinding                                      OFFSET(getStruct<T>, {0x0, 72, 0, 0})
	SMember(FFabricMetaSoundPatchWrapperBinding)       DryOutputSignalBinding                                      OFFSET(getStruct<T>, {0x48, 72, 0, 0})
};

/// Struct /Script/FabricRuntime.FabricMetaSoundSpeakerPatchWrapperEqBandsBinding
/// Size: 0x0008 (0x000048 - 0x000050)
class FFabricMetaSoundSpeakerPatchWrapperEqBandsBinding : public FFabricMetaSoundPatchWrapperBinding
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	DMember(int32_t)                                   PrimitiveDataIndex                                          OFFSET(get<int32_t>, {0x48, 4, 0, 0})
};

/// Struct /Script/FabricRuntime.FabricSequencerStepChangedInfo
/// Size: 0x0010 (0x000000 - 0x000010)
class FFabricSequencerStepChangedInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(int32_t)                                   Page                                                        OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   Row                                                         OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   Step                                                        OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	SMember(FStepSequenceCell)                         Cell                                                        OFFSET(getStruct<T>, {0xC, 2, 0, 0})
};

/// Struct /Script/FabricRuntime.FabricProgressionPreset
/// Size: 0x0020 (0x000008 - 0x000028)
class FFabricProgressionPreset : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FText)                                     ProgressionName                                             OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	CMember(EHarmonicProgression)                      Interval0                                                   OFFSET(get<T>, {0x20, 1, 0, 0})
	CMember(EHarmonicProgression)                      Interval1                                                   OFFSET(get<T>, {0x21, 1, 0, 0})
	CMember(EHarmonicProgression)                      Interval2                                                   OFFSET(get<T>, {0x22, 1, 0, 0})
	CMember(EHarmonicProgression)                      Interval3                                                   OFFSET(get<T>, {0x23, 1, 0, 0})
};

/// Struct /Script/FabricRuntime.FabricTextureProviderTexture
/// Size: 0x0018 (0x000000 - 0x000018)
class FFabricTextureProviderTexture : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(class UTexture*)                           Texture                                                     OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FLinearColor)                              Tint                                                        OFFSET(getStruct<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/FabricRuntime.FabricLFOGenerator
/// Size: 0x0078 (0x000000 - 0x000078)
class FFabricLFOGenerator : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	CMember(EFabricWaveShape)                          WaveShape                                                   OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(float)                                     Minimum                                                     OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     Maximum                                                     OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     Shape                                                       OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(int32_t)                                   InitialSeed                                                 OFFSET(get<int32_t>, {0x10, 4, 0, 0})
};

/// Struct /Script/FabricRuntime.FabricStepGenerator
/// Size: 0x0020 (0x000000 - 0x000020)
class FFabricStepGenerator : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(TArray<float>)                             Values                                                      OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/FabricRuntime.FabricValueSetterGenerator
/// Size: 0x0058 (0x000000 - 0x000058)
class FFabricValueSetterGenerator : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	DMember(int32_t)                                   PhraseLengthInBars                                          OFFSET(get<int32_t>, {0x8, 4, 0, 0})
};

/// Struct /Script/FabricRuntime.FabricMeshProviderMeshReferenceParamInfo
/// Size: 0x000C (0x000000 - 0x00000C)
class FFabricMeshProviderMeshReferenceParamInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	SMember(FMaterialParameterInfo)                    MaterialParameterInfo                                       OFFSET(getStruct<T>, {0x0, 12, 0, 0})
};

/// Struct /Script/FabricRuntime.FabricMeshProviderMeshReferenceParamInfo_Scalar
/// Size: 0x0004 (0x00000C - 0x000010)
class FFabricMeshProviderMeshReferenceParamInfo_Scalar : public FFabricMeshProviderMeshReferenceParamInfo
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(float)                                     Scalar                                                      OFFSET(get<float>, {0xC, 4, 0, 0})
};

/// Struct /Script/FabricRuntime.FabricMeshProviderMeshReferenceParamInfo_Color
/// Size: 0x0010 (0x00000C - 0x00001C)
class FFabricMeshProviderMeshReferenceParamInfo_Color : public FFabricMeshProviderMeshReferenceParamInfo
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 28;

public:
	SMember(FLinearColor)                              Color                                                       OFFSET(getStruct<T>, {0xC, 16, 0, 0})
};

/// Struct /Script/FabricRuntime.FabricMeshProviderMeshReferenceParams
/// Size: 0x0028 (0x000000 - 0x000028)
class FFabricMeshProviderMeshReferenceParams : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(double)                                    UniformScale                                                OFFSET(get<double>, {0x0, 8, 0, 0})
	CMember(TArray<FFabricMeshProviderMeshReferenceParamInfo_Scalar>) ScalarParams                                 OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(TArray<FFabricMeshProviderMeshReferenceParamInfo_Color>) ColorParams                                   OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/FabricRuntime.FabricMeshProviderMeshReference
/// Size: 0x0038 (0x000000 - 0x000038)
class FFabricMeshProviderMeshReference : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(class UStreamableRenderAsset*)             Mesh                                                        OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class UTexture*)                           Texture                                                     OFFSET(get<T>, {0x8, 8, 0, 0})
	SMember(FFabricMeshProviderMeshReferenceParams)    Params                                                      OFFSET(getStruct<T>, {0x10, 40, 0, 0})
};

/// Struct /Script/FabricRuntime.FabricMeshInstanceReference
/// Size: 0x0048 (0x000000 - 0x000048)
class FFabricMeshInstanceReference : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FFabricMeshProviderMeshReference)          MeshReference                                               OFFSET(getStruct<T>, {0x0, 56, 0, 0})
	CMember(TArray<FTransform>)                        InstanceTransforms                                          OFFSET(get<T>, {0x38, 16, 0, 0})
};

/// Struct /Script/FabricRuntime.FabricMetaSoundNodeInfo
/// Size: 0x00F0 (0x000000 - 0x0000F0)
class FFabricMetaSoundNodeInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	SMember(FMetaSoundNodeHandle)                      NodeHandle                                                  OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FMetaSoundNodeHandle)                      OutputConnectionHandle                                      OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FMetaSoundNodeHandle)                      InputConnectionHandle                                       OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x30, 4, 0, 0})
	CMember(TMap<FName, FMetaSoundBuilderNodeOutputHandle>) InputNodeNamesToHandles                                OFFSET(get<T>, {0x38, 80, 0, 0})
	SMember(FMetaSoundNodeHandle)                      AnalyzerHandle                                              OFFSET(getStruct<T>, {0x88, 16, 0, 0})
	CMember(class UMetasoundParameterPack*)            AnalyzerParameterPack                                       OFFSET(get<T>, {0x98, 8, 0, 0})
	SMember(FName)                                     AnalyzerName                                                OFFSET(getStruct<T>, {0xA0, 4, 0, 0})
	SMember(FMetaSoundNodeHandle)                      SwitcherHandle                                              OFFSET(getStruct<T>, {0xA4, 16, 0, 0})
	SMember(FMetaSoundNodeHandle)                      SelectHandle                                                OFFSET(getStruct<T>, {0xB4, 16, 0, 0})
	SMember(FName)                                     NodeEnabledInput                                            OFFSET(getStruct<T>, {0xC4, 4, 0, 0})
	SMember(FName)                                     AnalyzerNodeVisibleInput                                    OFFSET(getStruct<T>, {0xC8, 4, 0, 0})
	CMember(TArray<FName>)                             AnalyzerOutputNames                                         OFFSET(get<T>, {0xD0, 16, 0, 0})
	CMember(class UMetaSoundPatch*)                    PatchSpawnedFrom                                            OFFSET(get<T>, {0xE0, 8, 0, 0})
	CMember(class UMetasoundParameterPack*)            ParameterPack                                               OFFSET(get<T>, {0xE8, 8, 0, 0})
};

/// Struct /Script/FabricRuntime.MetaSoundCombinerNodeHandle
/// Size: 0x0150 (0x000000 - 0x000150)
class FMetaSoundCombinerNodeHandle : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
	SMember(FFabricMetaSoundNodeInfo)                  NodeInfo                                                    OFFSET(getStruct<T>, {0x0, 240, 0, 0})
	SMember(FMetaSoundBuilderNodeInputHandle)          CombinerInput1                                              OFFSET(getStruct<T>, {0xF0, 32, 0, 0})
	SMember(FMetaSoundBuilderNodeInputHandle)          CombinerInput2                                              OFFSET(getStruct<T>, {0x110, 32, 0, 0})
	SMember(FMetaSoundBuilderNodeOutputHandle)         CombinedOutput                                              OFFSET(getStruct<T>, {0x130, 32, 0, 0})
};

/// Struct /Script/FabricRuntime.FabricMetaSoundNodePool
/// Size: 0x0020 (0x000000 - 0x000020)
class FFabricMetaSoundNodePool : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(int32_t)                                   NumberAdded                                                 OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	CMember(TArray<FFabricMetaSoundNodeInfo>)          FreeNodes                                                   OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(class UMetaSoundPatch*)                    PatchSpawnedFrom                                            OFFSET(get<T>, {0x18, 8, 0, 0})
};

/// Struct /Script/FabricRuntime.FabricMetaSoundUtilityParams
/// Size: 0x0008 (0x000000 - 0x000008)
class FFabricMetaSoundUtilityParams : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FName)                                     SwitcherEnabledParam                                        OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FName)                                     SelectEnabledParam                                          OFFSET(getStruct<T>, {0x4, 4, 0, 0})
};

/// Struct /Script/FabricRuntime.FabricMetaSoundUtilityPatches
/// Size: 0x0088 (0x000000 - 0x000088)
class FFabricMetaSoundUtilityPatches : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	CMember(TWeakObjectPtr<UMetaSoundPatch*>)          CombinerNode                                                OFFSET(get<T>, {0x0, 32, 0, 0})
	CMember(TWeakObjectPtr<UMetaSoundPatch*>)          SwitcherNode                                                OFFSET(get<T>, {0x20, 32, 0, 0})
	CMember(TWeakObjectPtr<UMetaSoundPatch*>)          SelectNode                                                  OFFSET(get<T>, {0x40, 32, 0, 0})
	CMember(TWeakObjectPtr<UMetaSoundPatch*>)          AnalyzerNode                                                OFFSET(get<T>, {0x60, 32, 0, 0})
	SMember(FFabricMetaSoundUtilityParams)             UtilityNodeParams                                           OFFSET(getStruct<T>, {0x80, 8, 0, 0})
};

/// Struct /Script/FabricRuntime.FabricLoadedUtilityPatches
/// Size: 0x0028 (0x000000 - 0x000028)
class FFabricLoadedUtilityPatches : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(class UMetaSoundPatch*)                    CombinerNode                                                OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class UMetaSoundPatch*)                    SwitcherNode                                                OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(class UMetaSoundPatch*)                    SelectNode                                                  OFFSET(get<T>, {0x10, 8, 0, 0})
	CMember(class UMetaSoundPatch*)                    AnalyzerNode                                                OFFSET(get<T>, {0x18, 8, 0, 0})
	SMember(FFabricMetaSoundUtilityParams)             UtilityNodeParams                                           OFFSET(getStruct<T>, {0x20, 8, 0, 0})
};

/// Struct /Script/FabricRuntime.FabricMetaSoundDirectInputInfo
/// Size: 0x0008 (0x000000 - 0x000008)
class FFabricMetaSoundDirectInputInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FName)                                     MetaSoundInputName                                          OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(EFabricUserOptionType)                     InputType                                                   OFFSET(get<T>, {0x4, 1, 0, 0})
};

/// Struct /Script/FabricRuntime.FabricMetaSoundUserOptionInputInfo
/// Size: 0x0018 (0x000000 - 0x000018)
class FFabricMetaSoundUserOptionInputInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FString)                                   UserOption                                                  OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FName)                                     MetaSoundInputName                                          OFFSET(getStruct<T>, {0x10, 4, 0, 0})
};

/// Struct /Script/FabricRuntime.FabricMetaSoundRuntimeInputInfo
/// Size: 0x0028 (0x000000 - 0x000028)
class FFabricMetaSoundRuntimeInputInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FFabricMetaSoundUserOptionInputInfo)       InputInfo                                                   OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	CMember(EFabricMetasoundInputType)                 InputType                                                   OFFSET(get<T>, {0x18, 1, 0, 0})
	CMember(EFabricUserOptionType)                     FabricKnobType                                              OFFSET(get<T>, {0x19, 1, 0, 0})
	SMember(FName)                                     DataType                                                    OFFSET(getStruct<T>, {0x1C, 4, 0, 0})
	SMember(FName)                                     MetaSoundInputNodeName                                      OFFSET(getStruct<T>, {0x20, 4, 0, 0})
	DMember(bool)                                      bIsModulated                                                OFFSET(get<bool>, {0x24, 1, 0, 0})
};

/// Struct /Script/FabricRuntime.FabricConnectedInputWrapperInfo
/// Size: 0x0230 (0x000000 - 0x000230)
class FFabricConnectedInputWrapperInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 560;

public:
	DMember(bool)                                      bDirectlyConnected                                          OFFSET(get<bool>, {0x0, 1, 0, 0})
	CMember(class UFabricMetaSoundPatchWrapper*)       Wrapper                                                     OFFSET(get<T>, {0x8, 8, 0, 0})
	SMember(FFabricMetaSoundNodeInfo)                  OutputNode                                                  OFFSET(getStruct<T>, {0x10, 240, 0, 0})
	SMember(FMetaSoundBuilderNodeOutputHandle)         ConnectedNodeOutput                                         OFFSET(getStruct<T>, {0x100, 32, 0, 0})
	SMember(FFabricMetaSoundNodeInfo)                  InputNode                                                   OFFSET(getStruct<T>, {0x120, 240, 0, 0})
	SMember(FMetaSoundBuilderNodeInputHandle)          CombinerNodeInput                                           OFFSET(getStruct<T>, {0x210, 32, 0, 0})
};

/// Struct /Script/FabricRuntime.FabricMetaSoundPatchWrapper_PerPlatformInputTuning
/// Size: 0x0008 (0x000000 - 0x000008)
class FFabricMetaSoundPatchWrapper_PerPlatformInputTuning : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FName)                                     NodeInputName                                               OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(bool)                                      bUseDefaultValues                                           OFFSET(get<bool>, {0x4, 1, 0, 0})
};

/// Struct /Script/FabricRuntime.FabricMetaSoundPatchWrapper_PerPlatformBoolInputTuning
/// Size: 0x0058 (0x000008 - 0x000060)
class FFabricMetaSoundPatchWrapper_PerPlatformBoolInputTuning : public FFabricMetaSoundPatchWrapper_PerPlatformInputTuning
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	DMember(bool)                                      bDefaultValue                                               OFFSET(get<bool>, {0x8, 1, 0, 0})
	CMember(TMap<FName, bool>)                         PerPlatformTuning                                           OFFSET(get<T>, {0x10, 80, 0, 0})
};

/// Struct /Script/FabricRuntime.FabricMetaSoundPatchWrapper_PerPlatformIntInputTuning
/// Size: 0x0058 (0x000008 - 0x000060)
class FFabricMetaSoundPatchWrapper_PerPlatformIntInputTuning : public FFabricMetaSoundPatchWrapper_PerPlatformInputTuning
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	DMember(int32_t)                                   DefaultValue                                                OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	CMember(TMap<FName, int32_t>)                      PerPlatformTuning                                           OFFSET(get<T>, {0x10, 80, 0, 0})
};

/// Struct /Script/FabricRuntime.FabricMetaSoundPatchWrapper_PerPlatformFloatInputTuning
/// Size: 0x0058 (0x000008 - 0x000060)
class FFabricMetaSoundPatchWrapper_PerPlatformFloatInputTuning : public FFabricMetaSoundPatchWrapper_PerPlatformInputTuning
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	DMember(float)                                     DefaultValue                                                OFFSET(get<float>, {0x8, 4, 0, 0})
	CMember(TMap<FName, float>)                        PerPlatformTuning                                           OFFSET(get<T>, {0x10, 80, 0, 0})
};

/// Struct /Script/FabricRuntime.FabricSignificanceBasedUpdateBucket
/// Size: 0x0010 (0x000000 - 0x000010)
class FFabricSignificanceBasedUpdateBucket : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(float)                                     MinDistanceFromPlayer                                       OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     MaxDistanceFromPlayer                                       OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     FramesPerUpdate                                             OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   MaxObjectsInBucket                                          OFFSET(get<int32_t>, {0xC, 4, 0, 0})
};

/// Struct /Script/FabricRuntime.FabricSignificanceBasedUpdateBucketRuntimeGroup
/// Size: 0x0018 (0x000000 - 0x000018)
class FFabricSignificanceBasedUpdateBucketRuntimeGroup : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(TArray<TWeakObjectPtr<UObject*>>)          ObjectsInGroup                                              OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/FabricRuntime.FabricSignificanceBasedUpdateBucketRuntime
/// Size: 0x0028 (0x000000 - 0x000028)
class FFabricSignificanceBasedUpdateBucketRuntime : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(float)                                     ActualMinSignificance                                       OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     ActualMaxSignificance                                       OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   ActualMaxObjectsInBucket                                    OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   ActualFramesPerUpdate                                       OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	DMember(int32_t)                                   TotalObjectsInBucketCount                                   OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	CMember(TArray<FFabricSignificanceBasedUpdateBucketRuntimeGroup>) UpdateGroups                                 OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/FabricRuntime.FabricStepTrackPacked
/// Size: 0x0028 (0x000000 - 0x000028)
class FFabricStepTrackPacked : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(TArray<int32_t>)                           PackedEnabledSquares                                        OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<int32_t>)                           PackedContinuationSquares                                   OFFSET(get<T>, {0x10, 16, 0, 0})
	DMember(int32_t)                                   TrackIndex                                                  OFFSET(get<int32_t>, {0x20, 4, 0, 0})
};

/// Struct /Script/FabricRuntime.FabricStepPagePacked
/// Size: 0x0018 (0x000000 - 0x000018)
class FFabricStepPagePacked : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(TArray<FFabricStepTrackPacked>)            PackedTracks                                                OFFSET(get<T>, {0x0, 16, 0, 0})
	DMember(int32_t)                                   PageNumber                                                  OFFSET(get<int32_t>, {0x10, 4, 0, 0})
};

/// Struct /Script/FabricRuntime.FabricStepTablePacked
/// Size: 0x0028 (0x000000 - 0x000028)
class FFabricStepTablePacked : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(TArray<FFabricStepPagePacked>)             PackedPages                                                 OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FStepSequenceNote>)                 Notes                                                       OFFSET(get<T>, {0x10, 16, 0, 0})
	DMember(int32_t)                                   StepSkipIndex                                               OFFSET(get<int32_t>, {0x20, 4, 0, 0})
};

/// Struct /Script/FabricRuntime.FabricStepSequencerComponentBaseInstanceData
/// Size: 0x0028 (0x000068 - 0x000090)
class FFabricStepSequencerComponentBaseInstanceData : public FActorComponentInstanceData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FFabricStepTablePacked)                    PackedStepTable                                             OFFSET(getStruct<T>, {0x68, 40, 0, 0})
};

/// Struct /Script/FabricRuntime.TrackRow
/// Size: 0x0010 (0x000000 - 0x000010)
class FTrackRow : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<class UFabricStepSequencerGridSquareComponent*>) GridSquares                                    OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/FabricRuntime.FabricTimelineSyncServerSongPosition
/// Size: 0x001C (0x000000 - 0x00001C)
class FFabricTimelineSyncServerSongPosition : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 28;

public:
	SMember(FMusicTimestamp)                           Timestamp                                                   OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	DMember(float)                                     SecondsIncludingCountIn                                     OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     Tempo                                                       OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     BeatsIncludingCountIn                                       OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     NetServerTimeWhenSent                                       OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     TimeSigDenominator                                          OFFSET(get<float>, {0x18, 4, 0, 0})
};

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

